# `.pfd` — данные поиска пути (двоичный, zlib)

- **Архив**: `Scenes.vfs` (21 файл в альфа-сборке).
- **Примеры**: `factory_base.isc.pfd`, `house1_base.isc.pfd`,
  `isobortrup_base.isc.pfd`.
- **Загрузчик**: `CPathFinding::CPathFinding(CEngine *, CStringReader &,
  IPathFindingScene *)` — `Game/Engine/PathFinding.cpp:10`.
- **Заголовочный файл**: `Game/Engine/PathFinding.h`.

---

## 1. Назначение

`.pfd` — это **предвычисленный навигационный меш** для сцены. Он
соответствует один-к-одному файлу [`.isc`](isc.md) (или `.osc`) и ссылается
из тега `<PathFinding DataFile="…"/>` этого файла. Планировщик пути в рантайме
использует его для ответов на запросы `FindPath(src, dst)`.

Данные представляют собой планарный навмеш: каждая навигационная поверхность —
выпуклый полигон, спроецированный на собственную плоскость, полигоны соединены
**внутренними рёбрами**, а мир разбит 2D-**сеткой** для быстрого
пространственного поиска.

---

## 2. Внешняя обёртка

Каждый `.pfd` — это **zlib-сжатый** поток, обрамлённый шаблоном `CZipReader`
движка (`Game/Common/ZipReader.h`):

```
+----------------------+
| u32  uncompressedSize|   total decompressed payload size
+----------------------+
| deflate stream       |   raw zlib (78 DA …) producing the structures below
+----------------------+
```

Эмпирически: `Scenes.vfs/factory_base.isc.pfd` начинается с
`06 0D 00 00 78 DA …` → `0x00000D06` = 3334 байт несжато, затем
`78 DA` deflate.

Загрузчик передаёт `CZipReader<CStringReader>` объект `CStringReader`,
открытый поверх отображённого в память файла, и потребляет всё, что следует
далее, на месте.

---

## 3. Распакованная структура

Сверху вниз, в порядке чтения (`PathFinding.cpp:17`):

```
+---------------------------------------+
| u32  m_ulNVertices                    |
| CVector m_pVertices[m_ulNVertices]    |   12 bytes each (xyz floats)
+---------------------------------------+
| u32  m_ulNInnerEdges                  |
| INNER_EDGE[m_ulNInnerEdges]           |   variable size (see 3.1)
+---------------------------------------+
| u32  m_ulNOuterEdges                  |
| OUTER_EDGE[m_ulNOuterEdges]           |   fixed-size struct (see 3.2)
+---------------------------------------+
| u32  m_ulNPolys                       |
| POLY[m_ulNPolys]                      |   variable size (see 3.3)
+---------------------------------------+
| u16  m_pPolyProps[m_ulNPolys]         |   per-polygon flags (see 3.4)
+---------------------------------------+
| u32  m_ulNPlanes                      |
| PF_PLANE[m_ulNPlanes]                 |   plane + basis (see 3.5)
+---------------------------------------+
| u32  m_ulGridWidth                    |
| u32  m_ulGridHeight                   |
| f32  m_fGridMinX                      |
| f32  m_fGridMinY                      |
| f32  m_fCellWidth                     |
| f32  m_fCellHeight                    |
| GRID_CELL[height][width]              |   variable size (see 3.6)
+---------------------------------------+
```

### 3.1 `INNER_EDGE`

```
u32  m_ulVertices[0]   // start vertex (index into m_pVertices)
u32  m_ulVertices[1]   // end vertex
u32  m_ulPoly          // index of one of the two polygons this edge borders
u32  m_ulNNeighbours   // count of EDGE_NEIGHBOUR entries that follow
EDGE_NEIGHBOUR[m_ulNNeighbours]   // adjacency descriptors
```

`m_vCenter` (середина ребра) вычисляется при загрузке и **не** хранится.

### 3.2 `OUTER_EDGE`

POD фиксированного размера (без префиксов количества). Граничные рёбра
навмеша (например, стена, через которую персонаж не может пройти). Раскладка
такая, какую объявляет структура `OUTER_EDGE` в `PathFinding.h`; читается
через `ReadArray(...)`, то есть это сырое `memcpy`.

### 3.3 `POLY`

```
u32           m_ulPlane          // index into m_pPlanes
u32           m_ulDegree         // number of vertices in this polygon
u32           m_pVertices[m_ulDegree]   // vertex indices, ordered CCW around plane
f32           m_fArea             // pre-computed area, in plane units
CLine2D       m_pEdges[m_ulDegree]      // 2D edge lines (in plane basis)
u32           m_ulNInnerEdges    // count
u32           m_pInnerEdges[m_ulNInnerEdges * 2]   // pairs (inner-edge idx, neighbour-poly idx)
```

`CLine2D` — это две 2D-точки + закэшированная `2D`-нормаль в плоскостных
координатах (используется для упрощённых тестов «внутри полигона»).

### 3.4 `m_pPolyProps`

`u16` на полигон, два семантических бита задокументированы в `PathFinding.cpp`:

```cpp
static const unsigned short c_usBlockedMask = 0xC000;   // bits 14-15
```

Биты 14–15 индицируют блокировку в рантайме (выставляется скриптом, например,
если дверь сейчас закрыта). Оставшиеся младшие 14 битов — **пользовательские
биты свойств** (дизайнер/регион). `FindPath()` принимает `(usVal, usMask)`
и пропускает полигоны, у которых `(prop & usMask) != usVal`.

### 3.5 `PF_PLANE`

```
CPlane   m_Plane     // (ax + by + cz + d = 0) — 16 bytes
CVector  m_vBasisX   // 12 bytes — tangent
CVector  m_vBasisY   // 12 bytes — bitangent
```

Каждый полигон уплощается на свою плоскость через `(m_vBasisX, m_vBasisY)`,
чтобы получить 2D-координаты, хранимые в `POLY::m_pEdges`.

### 3.6 `GRID_CELL`

Для каждой `(row, col)` в `m_ulGridHeight × m_ulGridWidth`:

```
u32  m_ulFaceCount
u32  m_pFaces[m_ulFaceCount]    // indices of polygons that overlap this cell
u32  m_ulPlaneCount
u32  strides[m_ulPlaneCount]    // per-plane runlengths into m_pFaces
                                // converted on load into a prefix-sum
                                // (m_pOffsets array, m_ulPlaneCount + 1)
```

Сетка покрывает прямоугольник
`[m_fGridMinX, m_fGridMinX + m_ulGridWidth*m_fCellWidth] ×
 [m_fGridMinY, …]` в плоскости XZ и разбивает полигоны по их 2D-bbox
для поиска кандидатов за O(1) на ячейку.

---

## 4. Жизненный цикл

1. `CPathFinding::CPathFinding(...)` читает всё вышеперечисленное в
   массивы-члены класса (`m_pVertices`, `m_pInnerEdges`, `m_pPolys`,
   `m_pPlanes`, `m_Grid`).
2. Выделяются два per-instance вспомогательных буфера:
   - `m_pPlaneDists` — `FIND_POLY_DATA` на плоскость, используется в
     `FindPath` для меморизации расстояний рёбер-плоскостей.
   - `m_pEdgeVisited` — `VISITED_EDGE` на внутреннее ребро, используется
     как open-set при поиске A*.
3. После вызова скриптом `BlockPolys(...)` у заблокированных полигонов
   устанавливаются два старших бита свойств, что удаляет их из множества
   валидных кандидатов.
4. `FindPath(src, dst, …)` делает проекцию на землю + A* по полигонам,
   возвращая `TPath` (вектор `vector<PathPoint>`).

---

## 5. Подробности сжатия

Deflate-поток — это **сырой zlib** (с двухбайтовым заголовком CMF/FLG `78 DA`).
Без raw deflate, без gzip-обёртки. `CZipReader` читает порциями по 16 КБ,
распаковывает по требованию и предоставляет потоковый интерфейс в стиле `>>`,
идентичный `CStringReader`.

На диске **не хранится контрольной суммы**; повреждение проявляется как
zlib `Z_DATA_ERROR` посреди потока, который читатель бросает как исключение,
ловимое загрузчиком сцены.

---

## 6. Перекрёстные ссылки

- Владеющая сцена: [`.isc`](isc.md) / [`.osc`](osc.md), через
  `<PathFinding DataFile="…"/>`.
- API в рантайме: интерфейс `IPathFinding` (в основном используется задачами
  ИИ под `Game/Game/TAB*.cpp`).
- Семантика блок-листа задаётся скриптами из `.bin` — см.
  [bin.md](bin.md) и `Game/Engine/Engine.cpp` для команды `BlockPathfinding`.
