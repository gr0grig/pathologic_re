# Размещение актора (без расширения) — бинарные данные по актору

- **Архив**: `Actors.vfs` (**4524** записи — весь архив,
  за исключением 484 файлов `.xml`, описанных в
  [actor_xml.md](actor_xml.md)).
- **Примеры**: `Bench01`, `isobortrup`, `iboiny`, `d2q01_ithouse1_table3`,
  `s_ihouse1`, `agony1`, `ihouse1`, `river`, `warehouse1`.
- **Точка входа загрузчика**: `CWorld::CreateActor(const char *pszActorName,
  ...)` → `CWorld::_CreateActor(...)` —
  `Game/Engine/World.cpp:552` и `:569`.
- **Загрузчики по классам**: `CActorStatic`, `CActorDoor`, `CActorBiped*`,
  `CActorLight*`, `CActorTriggerVolume`, `CActorWater`, `CActorObject`,
  `CActorDetailedObject`, `CActorDummy`, `CActorAnimBone`, … — все
  диспетчеризуются через `CAFBuiltIn::CreateActor` в `Game/Game/AFBuiltIn.cpp:50`.

---

## 1. Общая структура

Каждый файл в `Actors.vfs`, не имеющий расширения `.xml`, — это **бинарный
экземпляр актора**:

```
+--------------------+ 0
| u32   ulActorID    |   дискриминатор типа актора (см. §2)
+--------------------+ 4
| body (class-       |   раскладка зависит от ulActorID
|  specific binary)  |
+--------------------+ size
```

`CWorld::CreateActor` читает первые 4 байта и выполняет диспетчеризацию:

```cpp
release_ptr<IMMLoadObject> pLoad(pFS->CreateMappedLoadObject(pszActorName));
unsigned long ulActorID = *(unsigned long *)pLoad->GetMemoryPointer();
return _CreateActor(pLoad.get(), ulActorID, pszActorName, …);
```

(`World.cpp:559-566`)

Загрузчик конкретного класса затем открывает собственный `CStringReader`,
начиная со **смещения 4** (`pLoad->GetMemoryPointer() + 4`) — см., например,
`ActorStatic.cpp:350`, `ActorDummy.cpp:64`, `ActorTriggerVolume.cpp:122`.

---

## 2. Идентификаторы типов акторов

```cpp
// from Game/Game/Actor.h / AFBuiltIn.h
enum ACTOR_TYPE {
    ACTOR_STATIC               =  0,
    ACTOR_LIGHT_STATIC         =  1,
    ACTOR_LIGHT_STATIC_GROUP   =  2,
    ACTOR_DOOR                 =  6,
    ACTOR_WATER                =  7,
    ACTOR_OBJECT               =  8,
    ACTOR_PLAYER               = 10,
    ACTOR_TRIGGER_VOLUME       = 11,
    ACTOR_FOG                  = 12,
    ACTOR_FLAME                = 13,
    ACTOR_SCRIPTED             = 14,
    ACTOR_DETAILED_OBJECT      = 15,
    ACTOR_BIPED                =  4,
    ACTOR_BIPED_LSH            =  5,
    ACTOR_BIPED_CS             = 16,
    ACTOR_BIPED_LSH_CS         = 17,
    ACTOR_SCRIPTED_CONTAINER   = 18,
    ACTOR_BLANK                = 19,
    ACTOR_DUMMY                = 20,
    ACTOR_SOUND_FAKE3D         = 21,
    ACTOR_ANIM_BONE            = 22,
};
```

На диске значение хранится little-endian, поэтому файл `ACTOR_STATIC` начинается
с `00 00 00 00`, файл `ACTOR_DETAILED_OBJECT` — с `0F 00 00 00`, и т. д.

Акторы, создаваемые **программно** (`ACTOR_PLAYER`, `ACTOR_FOG`,
`ACTOR_FLAME`, `ACTOR_SCRIPTED`, `ACTOR_SCRIPTED_CONTAINER`,
`ACTOR_BLANK`, `ACTOR_SOUND_FAKE3D`), **не имеют** файла на диске —
они создаются через `CWorld::CreateActor(ulActorID, …)` только из
атрибутов XML. Файлы размещения в `Actors.vfs` — это
«файловое» подмножество.

---

## 3. Раскладка тела по классам

### 3.1 `ACTOR_STATIC` (id 0) — наиболее распространён

`Game/Game/ActorStatic.cpp:47` (конструктор) и `:342` (PerformLoad):

```
+----------------------+
| CBox3D  m_Box        |   24 байта — мировой AABB (центр + размер)
| CVector m_vPivot     |   12 байт — локальная точка опоры
| CEString m_strGeomName |  имя меша (например, "Bench01.mesh")
| u8       m_bDynamicShadows |  1 = отбрасывает тени
| MeshData m_pExactMesh|   коллизия для трассировки лучей (переменный размер)
| OctTree  m_pExactOct |   пространственный ускоритель над меш трассировки
| u32      ulEnvelopeType|   0 = далее физическая оболочка; 5 = нет
|   if ulEnvelopeType == 0:
|     u8      bUseRay   |   1 = переиспользовать oct-tree трассировки; 0 = своя оболочка
|     if !bUseRay:
|       MeshData m_pMesh|  отдельный физический меш
|       OctTree  m_pOct |  oct-tree над физическим мешем
+----------------------+
```

`CBox3D` здесь читается единым `Read(&m_Box, sizeof(CBox3D))`, поэтому
раскладка точно соответствует C++-структуре (24 байта — две последовательные
половины `CVector`: `m_vCenter`, затем `m_vExtent`).

Имя меша — это просто идентификатор; сам меш загружается позже
из `Geometries.vfs` (см. [mesh.md](mesh.md)) через
`CStaticLOD::LoadLODs` (`ActorStatic.cpp:417`).

**Эмпирический пример — `Actors.vfs/Bench01` (535 байт)**:

```
00 00 00 00              ulActorID = 0 (ACTOR_STATIC)
9D 1D EA 43 7A 83 AB 44 43 75 AB 41   m_Box.m_vCenter = (468.23, 1372.11, 21.43)
04 B9 24 43 C6 35 7F 42 2C A2 6E 42   m_Box.m_vExtent = (164.72,   63.80, 59.65)
A0 1D EA 43 02 8D A3 44 10 75 AB 41   m_vPivot        = (468.23, 1308.41, 21.43)
0C 42 65 6E 63 68 30 31 2E 6D 65 73 68   "Bench01.mesh"  (length 0x0C = 12)
01                                        m_bDynamicShadows = true
00 6D 00 00 …                             MeshData / OctTree blob …
```

### 3.2 `ACTOR_DETAILED_OBJECT` (id 15)

`Game/Game/ActorDetailedObject.cpp:38`:

```
+----------------------+
| u32      ulActorID = 15                     |
| CEString m_strGeomName                      |   имя кластера детальных объектов
| COBB2D   m_OBB                              |   16 байт — 2D OBB
+----------------------+
```

Раздутие до 4524 записей в `Actors.vfs` обусловлено кластерами детальных
объектов — пучками травы и роями листьев: каждая сцена размещает
их сотнями.

### 3.3 `ACTOR_DUMMY` (id 20)

`Game/Game/ActorDummy.cpp:57`:

```
+----------------------+
| u32      ulActorID = 20                     |
| CBox3D   m_Box                              |   24 байта
| MeshData m_pMeshData                        |   коллизионный меш
| OctTree  m_pOctTree                         |   ускоритель
+----------------------+
```

Чисто коллизионный прокси без видимой геометрии — используется для
невидимых блокираторов коллизии (clip-объёмов вокруг краёв опор пропсов).

### 3.4 Прочие классы

Конструктор каждого `ACTOR_*` в `Game/Game/Actor*.cpp` следует одному
шаблону: читать поля класса в порядке, объявленном в сигнатуре
конструктора. Основные:

| Класс                      | Файл                          | Характерная нагрузка                          |
|----------------------------|-------------------------------|------------------------------------------------|
| `ACTOR_DOOR` (6)           | `ActorDoor.cpp`               | Статическое тело + ось петли + углы открытия/закрытия. |
| `ACTOR_BIPED*` (4, 5, 16, 17) | `ActorBiped*.cpp`           | Скелетный меш + набор анимационных треков костей. |
| `ACTOR_ANIM_BONE` (22)     | `ActorAnimBone.cpp`           | Меш с костевой анимацией + ссылки на треки анимации. |
| `ACTOR_WATER` (7)          | `ActorWater.cpp`              | Bbox воды + ссылка на [`water.dat`](dat_water.md). |
| `ACTOR_OBJECT` (8)         | `ActorObject.cpp`             | Подвижный статик — добавляет COBB3D и начальную скорость. |
| `ACTOR_TRIGGER_VOLUME` (11)| `ActorTriggerVolume.cpp`      | Bbox + меш объёма триггера.                    |
| `ACTOR_LIGHT_STATIC` (1, 2)| `ActorLightStatic*.cpp`       | Позиция + цвет + радиус + кривая затухания.    |

Файлы `Actors.vfs` создаются редактором (`GameEditor`) на этапе сборки
ресурсов; движок никогда их не записывает.

---

## 4. «Алиасные» файлы размещения

Некоторые записи очень маленькие (12–15 байт). Например,
`Actors.vfs/iboiny` (12 байт) содержит только:

```
0B 69 62 6F 69 6E 79 2E 6D 65 73 68
└── len 11 ──┘└── "iboiny.mesh" ──┘
```

Префикса типа из 4 байт нет — первый байт является длиной CEString 0x0B,
которая распарсилась бы как `ulActorID = 0x6F62690B` (мусор), если
прогнать её через `CWorld::CreateActor`. Эти файлы **не** загружаются
загрузчиком мира как акторы — они загружаются конвейером геометрии
**детальных объектов** (`Game/Renderers/D3D9/GeometryDetailedObject.cpp`),
который трактует их как обычные строки с префиксом длины, называющие
исходный `.mesh` для спавна (`Geometries.vfs/iboiny.mesh`).

Другими словами: файловая система `Actors.vfs` совместно используется двумя
потребителями — фабрикой акторов (ожидает `[u32 type, …]`) и загрузчиком
геометрии детальных объектов (ожидает `CEString`). Разрешение происходит
по **тому, кто запрашивает**, а не по содержимому файла.

---

## 5. Сжатие

**Отсутствует на уровне обёртки.** Встроенные блобы меша/oct-tree могут
быть сжаты внутри собственных загрузчиков (`CCollisionManager::CreateMeshData`
и `CreateOctTree`), но внешний файл — сырой.

---

## 6. Перекрёстные ссылки

- Спутник XML: [actor_xml.md](actor_xml.md) — переопределения экземпляра.
- Меш, на который ссылается `m_strGeomName`: [mesh.md](mesh.md).
- Ссылки в сценах: `<Actor Name="…"/>` в [isc.md](isc.md) /
  [osc.md](osc.md).
- Таблица диспетчеризации: `CAFBuiltIn::CreateActor`
  (`Game/Game/AFBuiltIn.cpp:50`).
- Раскладка данных коллизии (хвостовой блоб `MeshData` / `OctTree`): см.
  `Game/Engine/IPhysics.h` и `CCollisionManager.cpp`.
