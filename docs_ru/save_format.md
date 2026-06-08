# Бинарный формат сохранений

Как движок Pathologic 2005 сериализует текущее состояние игры на диск
и считывает его обратно. Файлы сохранений расположены в `alpha/saves/`
(расширение `.sav`); формат представляет собой потоковый бинарный блоб
без сжатия и без контрольной суммы.

- **Запись верхнего уровня**: `CGameWorld::SaveObject(IStorObject *, ISaveStateData *)` —
  `Game/Engine/GameWorld.cpp:1383-1412`.
- **Чтение верхнего уровня**: парный конструктор `CGameWorld::CGameWorld(const char *&,
  ILoadStateData *)` в `GameWorld.cpp:1339-1381`.
- **Точки входа CLI**: `CGenCmdProcessor::Save` / `Load`
  (`GenCmdProcessor.cpp:471, :505`) — привязаны к консольным
  командам `save` / `load`.
- **Каркас**: шаблонные обёртки `CSerWriter` / `CSerReader` поверх
  `IStorObject` / `IMMLoadObject` (`Game/Common/StdFactory.h:250-371`).

---

## 1. Потоковая модель

Файл сохранения — это **плоский поток байтов**. Каждый объект записывает
свои сериализуемые поля одно за другим в порядке `operator<<`;
конструктор загрузки читает их в том же порядке. Нет ни тегов на каждое
поле, ни префиксов длины вокруг объектов, ни выравнивания —
позиция в потоке является единственной «схемой».

Поток является *самоописываемым только на границе каждого
сериализованного указателя*: писатель эмитит **factory ID** перед каждым
новым экземпляром объекта, чтобы читатель знал, какой конструктор
вызвать. Всё внутри объекта — позиционно.

---

## 2. Кодирование примитивов

Все скаляры — **little-endian** (единственная целевая платформа — x86-32 Windows).

| Тип       | Байт  | Примечания                                    |
|-----------|------:|-----------------------------------------------|
| `bool`    | 1     | 0 = false, любое другое — true.               |
| `u8`/`i8` | 1     |                                               |
| `u16`/`i16` | 2   |                                               |
| `u32`/`i32` | 4   |                                               |
| `u64`/`i64` | 8   |                                               |
| `f32`     | 4     | IEEE 754                                       |
| `f64`     | 8     | IEEE 754                                       |
| `CVector` | 12    | три `f32`                                      |
| `CBox3D`  | 24    | две последовательные половины `CVector` (центр + экстент) |
| `CMatrix` | varies| обычно 48 байт (4 × 4 из `f32`)               |
| `CQuat`   | 16    | четыре `f32` (x, y, z, w)                      |

Составные структуры используют `swriter.Write(&obj, sizeof(obj))` — сырой
memcpy. Переносимого формата нет; C++-раскладка структуры — это и есть
её формат на диске.

---

## 3. Строки — интернирование + префикс длины

Каркас сохранения **интернирует** каждую записываемую строку, дедуплицируя
повторяющиеся имена вроде `"head.mot"`, `"Bench01.mesh"`, пути к ресурсам и т. д.
Кодирование задано в `CSerWriterPolicy` (`StdFactory.h:270-295`):

```
1-byte flag:
    0x00 → new string (inline)
    0x01 → reference to previously interned string

if flag == 0x00:           // first occurrence
    CEString               // length-prefixed (1 or 2 bytes) + ASCII bytes
                           // ─ see VFS doc §3.4 for the exact length encoding

if flag == 0x01:           // back-reference
    u32 stringID           // 0-based table index of the previously written CEString
```

`ISaveStateData::RegisterString` (`SaveStateData.cpp:31-41`)
поддерживает `std::map<CEString, u32>` и возвращает `-1` при первом
вхождении (чтобы писатель эмитил inline-копию) либо существующий ID
(чтобы писатель эмитил ссылочную форму).

Широкие строки (`CEStringW`) используют ту же схему с байтами UTF-16LE
вместо ASCII.

---

## 4. Указатели — полиморфизм через диспетчеризацию по фабрике

Указатели на объекты сериализуются через `CSerPtr<T, AID>` и аналогичные
(`StdFactory.h:600-630`):

```
u32 objectID:
    -1 (0xFFFFFFFF) → new object follows
    else            → reference to previously written object ID

if objectID == -1:
    u32 factoryID
    <constructor body>     // calls the registered constructor for that factory ID
```

`factoryID` — ключ в `IGlobalFactory` (`Game/Game/GlobalFactory.cpp:51-58`).
Два диапазона ID:

| Диапазон   | Владелец                    | Примеры                                    |
|------------|-----------------------------|---------------------------------------------|
| 0–999      | Игровые `TGame*Factory`     | `TGameWorldFactory=0`, `TInvItemClassFactory=61` (см. `FactoryList.h:44-113`) |
| 1000+      | Движковые                   | 1000 = скрипты, 2000-2007 = акторы / сцены (см. `EngineGlobalFactory.cpp`) |

Каждая запись фабрики хранит **два указателя на функции**: коллбэк
`SaveObject` и указатель на конструктор `(const char *&, ILoadStateData *)`.
Поэтому диспетчеризация — это поиск в хеш-таблице за O(1).

---

## 5. Векторы / множества / отображения

STL-контейнеры сериализуются как `(u32 count, element × count)`. Маркера
конца нет; авторитетным является счётчик.

```
swriter << myVector;       // → [u32 size][elem0][elem1]…
swriter << myMap;          // → [u32 size]{[key][value]} × size
```

---

## 6. Раскладка верхнего уровня

`CGameWorld::SaveObject` записывает следующую последовательность
(`GameWorld.cpp:1383-1412`):

```
1.  CSerPtr<IWorld*>         — the engine-side world pointer (recursive serialise)
2.  CEString                 — world filename (e.g. "world_danko.xml")
3.  Flush()                  — commit the writer (no on-disk side-effect; runtime only)
4.  CSerPtr<IScene*>         — main outdoor scene (city.osc)
5.  CSerPtr<IActor*>         — the player actor
6.  CEString × 2             — music script filename, weather script filename
7.  f32 × 4                  — time-of-day breakpoints
                              (m_fTimeDawn, m_fTimeSunset, m_fAngleDawn, m_fAngleSunset)
8.  Map<…>                   — script-side game variables
9.  CSerPtr<IScene*>         — last active scene (last room player was in)
10. CSerPtr<IOverrideQueue*> — UI override queue state
11. CSerPtr<CDiary*>         — diary entries unlocked
12. CSerPtr<IScriptContext*> — global script context
13. CSerPtr<IMusic*>         — music subsystem state
14. CSerPtr<IWeather*>       — weather subsystem state
15. CSerPtr<IScript*>        — world-level script (world_danko.bin)
```

`IWorld` (шаг 1) — самый «тяжёлый» указатель: его сериализация рекурсивно
заходит в каждого актора каждой загруженной сцены плюс все инвентари
акторов, состояния скриптов, позиции в списке звуков и фазы анимаций.

Эмпирический образец первых 64 байт `quicksave1.sav`:

```
01 0A 00 00 00              flag=ref, ID 0x0A (probably from string table)
FF FF FF FF                 -1: new object
00 00 00 00                 factory ID 0 = TGameWorldFactory
C2 B8 B2 3F                 f32 = 1.396 (time-of-day fragment)
01 0B 00 00 00              another ref
FF FF FF FF
0A 00 00 00                 factory ID 10
01 00 00 00                 …
04 68 65 61 64              inline string "head"
08 68 65 61 64 2E 6D 6F 74  inline string "head.mot"
01                          flag=ref
D0 07 00 00                 0x07D0 = 2000 = scene factory ID
…
```

---

## 7. Пример конкретного актора: `CActorStatic`

`ActorStatic.cpp:165-190` (`SaveObject`) записывает:

```cpp
CSerPtr<ICustomWorld *, AID_CustomWorld>   // world ref
                                            //   (typically already-seen → 5-byte reference)
swriter.Flush();
CInvItemContainer::SaveState(...);          // inventory contents
CSerPtr<ISceneInterface *>                  // owning scene
CEString m_strActorName                     // actor filename
CEString m_strXMLName                       // Extras XML filename
bool      m_bUsable
CSerPtr<IScript *>                          // bound script (if any)
bool      m_bVisible
bool      m_bNoUpdateUnloaded
raw       CBox3D m_Box (24 bytes)
CVector   m_vPivot (12 bytes)
CEString  m_strGeomName
bool      m_bDynamicShadows
vector    m_DisabledSubsets                  // u32 count + items
u32       m_ulDisposeState
CSerPtr<ICreateParamsArray *> m_pProperties
```

Соответствующий конструктор загрузки (`ActorStatic.cpp:118-150`) читает
в **точно** том же порядке. Каждый класс актора следует тому же шаблону.

---

## 8. Нет сжатия, нет контрольной суммы

- Весь файл сохранения — сырые байты.
- В заголовке нет файловой сигнатуры / магического числа — первые байты
  это начало первого сериализованного указателя (префикс factory ID).
- Нет поля длины файла.
- Нет контрольной суммы; повреждённое сохранение проявляется как чтение
  длины строки за пределы EOF, выбрасывая исключение, которое загрузчик
  ловит, отказываясь от загрузки.

Это упрощает инспекцию файлов сохранений hex-редактором, но также
упрощает их незаметную порчу.

---

## 9. Патчинг сохранений

Два практических подхода:

1. **Замена строк** — изменить `"world_danko.xml"` → другое имя файла
   той же длины, либо любую строку имени актора. Строки интернированы
   и сжаты, поэтому найти их несложно.
2. **Переключение булевых значений** — булевы значения рядом с `usable`,
   `visible`, `dynamicShadows` занимают 1 байт и легко инвертируются.

Изменение **всего, что влияет на последующие смещения** (длины строк,
размеры векторов, что-либо кроме скаляров фиксированного размера),
требует обхода файла с начала для поддержания позиций в потоке.
Произвольного доступа нет.

---

## 10. Перекрёстные ссылки

- Кодирование длины строк в VFS (используется здесь): [vfs_format.md §3.4](vfs_format.md).
- Пары `SaveObject` / конструктор загрузки для каждого актора: каждый
  `Game/Game/Actor*.cpp`.
- Список factory ID: `Game/Game/FactoryList.h`,
  `Game/Engine/EngineGlobalFactory.cpp`.
- Движковые примитивы сериализации (интерфейсы, не
  реализации): `Engine/Common/ISerializable.h`,
  `Engine/FileSystem/IStorObject.h`.
