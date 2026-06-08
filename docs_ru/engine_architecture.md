# Архитектура движка (COM-подобная)

Как движок устроен на уровне **модулей и интерфейсов** — как
подсистемы загружаются, как они общаются между собой и как
подключается пользовательский код (игровая логика, рендереры,
звуковые бэкенды).

Это взгляд с точки зрения проектирования; представление «байты на
диске» см. в документах по конкретным форматам.

---

## 1. Карта модулей

Рантайм состоит из нескольких DLL, загружающихся в фиксированном
порядке:

```
Game.exe         (исполняемый файл; главный цикл)
   ↓ линкует/загружает
Engine.dll       (оркестрация подсистем, scene graph, скрипты)
Renderer.dll     (D3D9-бэкенд — Renderers/D3D9/)
Sound.dll        (OpenAL-бэкенд — Sound/)
UI.dll           (UIManager + override stack — UI/)
VFS.dll          (архивы ассетов — см. vfs_format.md)
GameLogic.dll    (классы акторов конкретной игры — Game/Game/)
                 (единственная, кто знает о специфике Pathologic;
                  всё, что ниже, — это общий движок)
LifeStudioHeadAPIS.dll  (closed-source лицевой риг — см. formats/lsh.md)
zlib1.dll        (сжатие)
```

`Engine.dll` — краеугольный камень: он экспортирует интерфейс
`IEngineFactory` (`Engine/Core/IEngineFactory.h`), через который
исполняемый файл создаёт всё остальное. Renderer / Sound / UI
загружаются по имени через `IEngineFactory::CreateRenderer /
CreateSoundManager / CreateInterface`. Пути к их DLL берутся из
`init.cfg`.

---

## 2. Модель интерфейса `IGeneric`

Каждый интерфейс движка наследуется от `IGeneric` — тонкого
COM-аналога, объявленного в `Engine/Common/IGeneric.h`:

```cpp
class IGeneric : public IBase {
public:
    virtual bool       Release(void) = 0;
    virtual IGeneric *QueryInterface(InterfaceAID AID) = 0;
};
```

- `Release()` уменьшает refcount; возвращает `true`, когда объект
  действительно был уничтожен. **`AddRef` отсутствует** — COM-модель
  упрощена до «создатель владеет одной ссылкой». RAII-хелпер
  `release_ptr<T>` (`IGeneric.h:50`) вызывает `Release` автоматически.
- `QueryInterface(AID)` возвращает указатель, приведённый к тому
  *вторичному* интерфейсу, который соответствует AID, либо `NULL`.
  AID — 32-битные хеш-константы (например,
  `AID_EngineFactory = 0x7c706f87`), объявленные в заголовке каждого
  интерфейса.

Удобные макросы разворачиваются в канонические реализации `Release`
и `QueryInterface`:

| Макрос                        | Эффект                                                     |
|-------------------------------|-----------------------------------------------------------|
| `STD_REFS`                    | `Release` делает `delete this`.                            |
| `STD_REFS_NODELETE`           | `Release` — no-op (для синглтонов).                        |
| `STD_QUERY1(name)`            | QueryInterface на один интерфейс.                          |
| `STD_QUERY2`…`STD_QUERY5`     | QueryInterface на два-пять интерфейсов (switch-таблица).   |
| `STD_QUERY_BEGIN` … `STD_QUERY_END` | Открытый switch.                                      |
| `STD_QUERY_DEFAULT(par)`      | Перенаправляет неизвестные AID родительскому классу.       |

**Никакой потокобезопасности уровня IUnknown не гарантируется.**
Игровая логика движка однопоточна; стример и аудио работают в
фоновых потоках, но трогают только собственные объекты.

---

## 3. Точка входа фабрики

Стартовый код исполняемого файла делает примерно следующее:

```cpp
HMODULE hEngine = LoadLibrary("Engine.dll");
auto pCreate    = (CreateFactoryInstance_t)GetProcAddress(hEngine, "CreateFactoryInstance");
IEngineFactory *pFactory = pCreate();
IRenderer      *pR  = pFactory->CreateRenderer("Renderers/D3D9.dll", hwnd, …);
ISoundManager  *pSM = pFactory->CreateSoundManager("Sound/OpenAL.dll", …);
IUIManager     *pUI = pFactory->CreateInterface("UI.dll", pEngine, log);
IEngine        *pE  = pFactory->CreateEngine(pStrDB, pStreamerPool,
                                             pR, pSM, log, pShell);
```

`CreateFactoryInstance` — **единственная экспортируемая функция**
в `Engine.dll` (stdcall, ordinal 1). Создание всех остальных
подсистем идёт через методы `IEngineFactory` (`IEngineFactory.h`):

| Метод                       | Что создаёт                                     |
|-----------------------------|-------------------------------------------------|
| `CreateParamsArray`         | Пустой `ICreateParamsArray`                      |
| `CreateParamsFromXML`       | `ICreateParams`, оборачивающий XML-узел          |
| `CreateIniParser`           | `IIniParser` (использует `Game/Engine/IniParser.cpp`) |
| `CreateXMLParser`           | `IXMLParser` (`SimpleXML.cpp`)                   |
| `CreateLoadStateData`       | `ILoadStateData` для загрузки сейвов             |
| `CreateSaveStateData`       | `ISaveStateData` для записи сейвов               |
| `CreateFileSystemShell`     | `IFSShell` — менеджер точек монтирования         |
| `CreateRenderer`            | Загружает и инициализирует DLL рендерера         |
| `CreateSoundManager`        | Загружает и инициализирует DLL звука             |
| `CreateInterface`           | Загружает и инициализирует DLL UI                |
| `CreateEngine`              | Главный метод — центральный экземпляр `IEngine`  |
| `CreateStringDatabase`      | `IStringDatabase`                                |
| `CreatePlaneGrid`           | Сетка регионов карты мира (см. formats/map.md)   |
| `CreateStreamer`            | `IStreamer` для асинхронного I/O                 |

---

## 4. Объект `IEngine`

`IEngine` (`Engine/Core/IEngine.h`) — главное рабочее состояние
движка. Реализация: `CEngine` в `Game/Engine/CEngine.cpp`. Хранит:

- `IFSShell` (примонтированные файловые системы — Actors, Geometries, …).
- Указатели на `IRenderer`, `ISoundManager`, `IUIManager`.
- `IEventManager` (глобальная шина событий).
- `IScriptManager` (скомпилированные скрипты и запущенные задачи —
  см. [tasks.md](tasks.md)).
- `IConsole`, читателей лога и `ICmdProcessor`.
- `IStringDatabase` (`formats/dat_strings.md`).
- `IStreamerPool` и очередь `IStreamerJob`-ов.
- `ISceneManager` (загруженные в данный момент сцены).
- Список зарегистрированных `IActorFactory` (среди них —
  `CAFBuiltIn` из `Game/Game/AFBuiltIn.cpp` — см.
  [`formats/actor_placement.md`](formats/actor_placement.md) §2).

Главный цикл игры (`Game.cpp::Run`) тиктает `IEngine`, постоянно
вызывая `Update(dt)`. Каждый тик продвигает скрипты, обрабатывает
события, прогоняет стриминг и затем рендерит кадр.

---

## 5. Файловая система с точками монтирования

`IFSShell` (`Game/Engine/FSShell.cpp`) преобразует **именованные
точки монтирования**, используемые по всему коду, в экземпляры
`IFileSystem`:

```cpp
m_NameMap.insert("actor", FS_STD_ACTOR);
m_NameMap.insert("geom",  FS_STD_GEOMETRY);
m_NameMap.insert("tex",   FS_STD_TEXTURE);
m_NameMap.insert("scene", FS_STD_SCENE);
m_NameMap.insert("sound", FS_STD_SOUND);
m_NameMap.insert("font",  FS_STD_FONT);
m_NameMap.insert("str",   FS_STD_STRING);
m_NameMap.insert("world", FS_STD_WORLD);
m_NameMap.insert("ui",    FS_STD_UI);
```

Каждая точка указывает на один `.vfs`-архив (`Actors.vfs`,
`Geometries.vfs`, …). В рантайме точка монтирования берётся вызовом
`pEngine->GetShell()->GetFileSystem(FS_STD_ACTOR)`, после чего
файл читается через `IFileSystem::CreateMappedLoadObject(name)`.
Loose-файлы на диске перекрывают архив
([vfs_format.md §5.1](vfs_format.md)).

---

## 6. Модель мира, сцены и акторов

```
ICustomWorld         ◀── определён игрой; живёт в GameLogic.dll
   │
   │ владеет
   ▼
IWorld               ◀── движок; CWorld в World.cpp
   │
   ├── ISceneManager
   │     └── IScene*[]        // загруженные сейчас сцены
   │              │
   │              ├── ISceneIndoor   (одна из двух разновидностей)
   │              ├── ISceneOutdoor
   │              └── …
   │
   ├── IActorFactory*[]       // зарегистрированные фабрики (CAFBuiltIn + от игры)
   ├── m_Actors set           // все живые IActor в мире
   └── IEventManager*         // глобальный broadcast
```

- `IWorld::CreateActor(name, params)` читает `Actors.vfs/<name>`,
  получает u32-тип, диспатчит по `m_ActorFactories`, пока одна из
  них не примет. См.
  [`formats/actor_placement.md`](formats/actor_placement.md) §2.
- `IScene*` владеет временем жизни своих акторов (создаются через
  `CreateActor`, затем `AddActor(scene)`).

---

## 7. Скриптовая подсистема

`IScriptManager` (`Game/Engine/ScriptManager.cpp`) компилирует и
кэширует `.bin`-скрипты, запускает их как кооперативные задачи,
диспатчит события. Привязан к:

- `IScript*` на каждый загруженный скрипт.
- `IScriptContext*` на каждый запущенный экземпляр (у одного актора
  может быть один или несколько экземпляров скрипта).
- VM, исполняющей опкоды, — см. [vm.md](vm.md).

Поток событий:

```
хост возбуждает событие  →  IEventManager рассылает получателям
                         →  актору, реализующему IEventReceiver
                         →  его связанный IScriptContext->OnEvent(eventID, params)
                         →  VM возобновляет задачу, ожидавшую этого event id
```

---

## 8. Границы подсистем

Движок использует **только интерфейсные** границы между DLL:

- Рендерер никогда не видит классы акторов; он берёт лишь
  геометрию, текстуры и параметры списка источников света через
  `IRenderer`, `IGeometryStatic`, `IRImage`, `ILight*`. Игровая
  сторона передаёт эти объекты как непрозрачные ссылки `IGeneric *`.
- Звуковой менеджер не видит классов акторов; звуки задаются
  только позицией.
- UI-менеджер не знает, что такое «дневник»; он лишь рендерит формы
  и диспатчит ввод в скрипт (`UIDialogContext`, `UIDiaryContext`, …
  — это игровые мосты).

Именно поэтому тот же `Engine.dll` переиспользуется в *The Void* с
другим `Game.dll` ([editions_diff.md](editions_diff.md) описывает
расхождения).

---

## 9. Правила работы с памятью и указателями

- Все долгоживущие аллокации в куче идут через собственный
  аллокатор движка (`Engine/Common/mem_alloc.cpp`,
  `Engine/Common/malloc/`).
- `new`/`delete` заменены макросами `dnew` / `delete`, которые
  форвардят в кастомный аллокатор с тегированием для debug-сборки.
- Время жизни объектов **рефкаунтируется через Release** на границе
  интерфейсов, но большинство внутренних указателей движка — прямые
  (с RAII `release_ptr<T>`).
- Исключения не пересекают границы DLL; движок ловит их на
  интерфейсной линии и логирует.

---

## 10. Перекрёстные ссылки

- VFS-архивы ассетов, которые оборачивает FSShell:
  [vfs_format.md](vfs_format.md).
- Каталог файловых форматов: [`formats/README.md`](formats/README.md).
- VM скриптов: [vm.md](vm.md), [tasks.md](tasks.md).
- Формат сохранений (использует тот же механизм фабрик для
  полиморфной сериализации): [save_format.md](save_format.md).
- Render-пайплайн, подключаемый через `IRenderer`:
  [render_techniques.md](render_techniques.md).
