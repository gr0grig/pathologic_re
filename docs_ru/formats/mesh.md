# `.mesh` — статическая треугольная геометрия

- **Архив**: `Geometries.vfs` (4292 файла; основная масса архива)
- **Примеры**: `leaves01.mesh`, `Bench01.mesh`, `iboiny.mesh`,
  `d2q01_ithouse1_table3.mesh`
- **Загрузчик**: `CRawGeometry::CRawGeometry(CRenderer *, CStringReader &)` —
  `Game/Renderers/D3D9/RawGeometry.cpp:15`
- **Владеющий интерфейс**: `IGeometryStatic` (создаётся опосредованно через
  колбэки `CRenderer::TextureCreate`).

---

## 1. Раскладка на диске

```
+------------------------+
| u32  m_ulNVertices     |   number of vertices N
+------------------------+
| VERTEX[N]              |   20 bytes each (see 1.1)
+------------------------+
| u32  m_ulNFaces        |   number of triangles M
+------------------------+
| u16  indices[M * 3]    |   triangle list; 3 indices per face
+------------------------+
| CEString textureName   |   length-prefixed ASCII (1- or 2-byte len)
+------------------------+
| f32  m_fRadius         |   bounding-sphere radius (Y-axis-aligned)
| f32  m_fMinY           |   minimum Y of any vertex (object space)
| f32  m_fMaxY           |   maximum Y of any vertex
+------------------------+
| CBox3D m_Box           |   24 bytes (CVector m_vCenter + CVector m_vExtent)
+------------------------+
```

Конструктор читает весь блок последовательно через перегрузки `CStringReader`
и в конце выполняет одиночное сырое копирование структуры
`Read(&m_Box, sizeof(CBox3D))` (`RawGeometry.cpp:32`).

### 1.1 `VERTEX` (20 байт)

```
offset  size  type     field
   0    12    f32[3]   position (x, y, z) — object space
  12     8    f32[2]   texcoord (u, v)
```

Объявлено как декларация вершин Direct3D 9 в `RawGeometry.cpp:5`:

```cpp
{0,  0, D3DDECLTYPE_FLOAT3, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_POSITION, 0},
{0, 12, D3DDECLTYPE_FLOAT2, D3DDECLMETHOD_DEFAULT, D3DDECLUSAGE_TEXCOORD, 0},
```

**Нет ни нормалей, ни цветов на вершину** — меш представляет собой плоский
текстурированный треугольный список. Освещение приходит из окружающей световой
сетки и системы корон, а не из потока вершин.

### 1.2 Индексы

Обычный треугольный список, 16-битные (u16) индексы. Соответственно, максимальное
адресуемое число вершин — 65 535. Кадровое представление вырожденных полос не
используется.

### 1.3 Имя текстуры

Ссылка на текстуру разрешается через текстурный маппер рендера
(`ITextureMapper`), который ищет неквалифицированное имя в `Textures.vfs`
и выбирает подходящий вариант `.tex` / `.png` / `.tga`. См.
[tex.md](tex.md) и [png_tga.md](png_tga.md).

### 1.4 Данные ограничивающего объёма

Три независимых подсказки для отсечения:
- `m_fRadius` — ограничивающая сфера (по квадрату расстояния) с центром в
  начале координат геометрии. Используется системой LOD/отсечения.
- `m_fMinY` / `m_fMaxY` — вертикальные пределы, применяются для объектов,
  привязанных к земле (трава, двери).
- `m_Box` — `CBox3D` (пара `(центр, экстент)`, 32 байта на диске; см.
  [README.md §Conventions](README.md)). Используется для тестов пересечения OBB.

Эти значения предвычислены на этапе сборки и **обязаны** соответствовать данным
вершин: движок не пересчитывает их при загрузке.

---

## 2. Сжатие

**Без сжатия**. Файлы `.mesh` в `Geometries.vfs` — сырой двоичный поток.
Загружаются через `IMMLoadObject::GetMemoryPointer()` (отображённое в память
представление из `VFS.dll`) и потребляются на месте. См.
[../vfs_format.md §5.2](../vfs_format.md) о политике кэширования маленьких файлов.

Существует **отдельная** zlib-сжатая обёртка, используемая системой
`CGeometryDetailedObject`, которая *встраивает* несколько полезных нагрузок `.mesh`
(кусты травы, заборы, гроздья листьев). Её читает
`Game/Renderers/D3D9/GeometryDetailedObject.cpp:780`, и она хранится внутри
`Geometries.vfs` рядом с обычными файлами `.mesh`. Короткая версия: откройте
`CZipReader<CStringReader>` поверх файла, затем прочтите

```
u32      m_ulTypeCount
CEString geomName[m_ulTypeCount]                  // each is a .mesh basename
f32      m_vBoxMin.x, m_vBoxMin.y                  // 2D world bbox
u32      ulWidth, ulHeight                         // chunk grid extent
f32      m_vSize.x, m_vSize.y                      // chunk cell size
f32      m_fCenterY, m_fExtentY                    // Y extent
u8       m_ulNLights
LIGHT_INFO[m_ulNLights]
GCHUNK[ulHeight][ulWidth]                          // grass/leaf chunks
```

Каждое `<name>` затем разрешается обычным путём `.mesh`, описанным в этом файле.
На саму обёртку ссылаются из алиасов размещения деталь-объектов в
[actor_placement.md §4](actor_placement.md).

---

## 3. Эмпирический пример

`Geometries.vfs/iboiny.mesh`, первые 32 байта:

```
00000000: 0100 0000 0200 0080 bf00 0000 0000 0000  ................
00000010: 000e 9c8e c502 0000 0000 0000 0080 0000  ................
```

Расшифровка:

| Offset | Bytes               | Field            | Value                   |
|-------:|---------------------|------------------|-------------------------|
| 0x00   | `01 00 00 00`       | `m_ulNVertices`  | 1                       |
| 0x04   | `02 00 00 80 bf …`  | `VERTEX[0]`      | pos+uv (20 bytes)       |
| 0x18   | …                   | `m_ulNFaces`     | (next u32)              |

Более крупный ассет, например `Bench01.mesh`, следует той же раскладке с
тысячами вершин.

---

## 4. Перекрёстные ссылки

- Обёртка кластеров деталь-объектов: см. чтение zlib-обёрнутого заголовка в
  `Game/Renderers/D3D9/GeometryDetailedObject.cpp:780` и файлы размещения в
  [actor_placement.md](actor_placement.md).
- Имя меша (без расширения) упоминается в
  [actor_placement.md](actor_placement.md) (каждый размещённый `ACTOR_STATIC`
  несёт строку `<name>.mesh`).
- Модели голов `.lsh` вытесняют `.mesh` для лиц персонажей — см.
  [lsh.md](lsh.md).
