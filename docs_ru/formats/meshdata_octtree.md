# `MeshData` + `OctTree` — блоки коллизионной геометрии

Эти две структуры **не** являются самостоятельными файлами. Они появляются
**встроенными в файлы размещения `Actors.vfs`** (см. [actor_placement.md](actor_placement.md)),
обычно в виде двух последовательных пар на каждый статический актёр:

1. **Пара для трассировки лучей** — `MeshData` + `OctTree`, используемые для
   проверок линии видимости (попадания пуль, луч взгляда, отбрасывание теней).
2. **Физическая пара** — те же две структуры, но (возможно, другая) более
   простая оболочка для коллизии персонажей с миром.

Тот же код читает их и автономно для `ACTOR_DUMMY`
(`ActorDummy.cpp:64`) и нескольких других классов актёров.

- **Загрузчик**: `CMeshData::CMeshData(const char *& p)` —
  `Game/Physics/MeshData.cpp:176`.
- **Загрузчик**: `COctTree::COctTree(const char *& pP, CMeshData *,
  ICollisionNotify *)` — `Game/Physics/OctTree.cpp:5`.

Оба загрузчика **продвигают** указатель вызывающей стороны (`const char *&`),
так что их можно сцеплять подряд внутри объемлющего потока.

---

## 1. Внешнее обрамление — zlib-обёртка

Каждая из `MeshData` и `OctTree` обёрнута в шаблон
`CZipReader<CStringReader>` движка (`Game/Common/ZipReader.h`):

```
+----------------------+
| u32 uncompressedSize |   header read by CZipReader
+----------------------+
| deflate stream       |   raw zlib (78 DA …) → contents below
+----------------------+
```

После выхода читателя из области видимости `CZipReader` внешний `CStringReader`
автоматически продвигается за сжатые байты. Поэтому оба блока используют
тот же контейнерный паттерн, что и [`.pfd`](pfd.md) — та же магия `78 DA`,
та же раскладка на месте.

Эмпирически: в `Actors.vfs/Bench01` байты сразу после `CEString` с именем меша
и флага `dynamic_shadows` — это `00 6D 00 00 78 DA …`. `0x00006D00 = 27904` —
несжатый размер *первой* (трассировочной) полезной нагрузки `MeshData`+`OctTree`,
за которой следует deflate-поток.

---

## 2. `MeshData` (раскладка после распаковки)

`Game/Physics/MeshData.cpp:176-219`:

```
+----------------------+
| u32  m_dwNVertices                   |  vertex count
| CVector m_pVertices[m_dwNVertices]   |  12 bytes each (xyz)
+----------------------+
| u32  m_dwNFaces                      |  triangle count
+----------------------+
| MESHDATA_FACE_RAW[m_dwNFaces]        |  7 bytes each, see 2.1
+----------------------+
```

### 2.1 `MESHDATA_FACE_RAW` (на диске, 7 байт на грань)

```
u16  vIndex[0]      // vertex index 0
u16  vIndex[1]      // vertex index 1
u16  vIndex[2]      // vertex index 2
u8   m_idMaterial   // material ID (0..255)
```

Это **единственное**, что файл хранит на каждую грань. Всё остальное
(уравнение плоскости, рёберные плоскости для тестов «точка внутри треугольника»)
**вычисляется при загрузке** в `MeshData.cpp:203-215`:

```cpp
vNormal       = normalize((v[1] - v[0]) ^ (v[2] - v[1]));
m_Plane       = {vNormal, -(vNormal · v[0])};
m_TriPlanes[i] = … // 2 per-edge bisecting planes, used for fast point-in-tri tests
```

Поэтому in-memory структура `MESHDATA_FACE` содержит указатели на вершины
(а не индексы), одну плоскость грани и две рёберные плоскости — см.
`Physics/MeshData.h` для runtime-раскладки.

### 2.2 Предел вершин

Поскольку индексы вершин — `u16`, один блок `MeshData` ограничен сверху
**65 535 вершинами**. У движка нет механизма расщепления больших мешей;
ассет-кукер либо отказывает, либо подразбивает, пока каждая порция не
помещается.

---

## 3. `OctTree` (раскладка после распаковки)

`Game/Physics/OctTree.cpp:5-63`:

```
+----------------------+
| u32  m_dwNNodes                                       |  count of internal nodes
+----------------------+
| OCTNODE_NORMAL[m_dwNNodes]                            |  see 3.1
+----------------------+
| u32  m_dwTotalFaces                                   |  total face references over all leaves
| u16  m_pAllFaces[m_dwTotalFaces]                      |  face indices into MeshData
+----------------------+
| u32  m_dwNLeaves                                      |  count of leaves
+----------------------+
| OCTNODE_LEAF[m_dwNLeaves]                             |  see 3.2
+----------------------+
```

### 3.1 `OCTNODE_NORMAL` (внутренний узел, 40 байт на диске)

```
CBox3D m_Box                  //  24 bytes — m_vCenter + m_vExtent
u16    m_pNodes[8]            //  16 bytes — eight 16-bit child references
```

Каждый `m_pNodes[i]` — это ссылка на потомка:

| Pattern (16 bits)                             | Meaning                       |
|------------------------------------------------|-------------------------------|
| `0xFFFF`                                      | empty child (no geometry)     |
| `0x8XXX` (top bit set, value ≠ `0xFFFF`)      | leaf index = low 15 bits      |
| `0x0XXX` (top bit clear)                      | inner node index = low 15 bits|

Во время загрузки читатель расширяет `u16` до `u32` для каждого слота потомка
(`ReadConv<WORD, DWORD>`), так что in-memory узел шире, чем его представление
на диске. Это даёт жёсткий потолок в **32 767** внутренних узлов и **32 767**
листьев на дерево.

### 3.2 `OCTNODE_LEAF` (лист, 26 байт на диске)

```
CBox3D m_Box                  //  24 bytes
u16    m_dwNFaces             //  face count (≤ 65535)
```

Индексы граней для конкретного листа **не хранятся внутри листа** — они лежат
в **общем** массиве `m_pAllFaces` (читается непосредственно перед списком
листьев). Листья потребляют `m_pAllFaces` последовательно в порядке итерации:
первый лист забирает первые `m_dwNFaces` записей, следующий — следующие
`m_dwNFaces` записей и так далее. Читатель настраивает указатель
`leaf.m_pFaces` в общий массив (`OctTree.cpp:30-43`).

Такая упаковка снижает накладные расходы (нет префикса длины списка граней
у каждого листа, только один общий массив) и сохраняет хорошую локальность
памяти при обходе дерева.

### 3.3 Владение геометрией

`OctTree.m_pMeshData` — это **не владеющий** указатель на соответствующий
`MeshData`. OctTree ссылается на грани по индексу в таблице граней этого
`MeshData`. Соглашение, таким образом, такое: сначала прочитать `MeshData`,
затем прочитать `OctTree`, передав только что созданный `MeshData *` в его
конструктор.

---

## 4. Протокол продвижения указателя

Оба читателя следуют паттерну **«потребить из указателя»**:

```cpp
// caller side:
const char *p = somewhere;
CMeshData *m = new CMeshData(p);     // p is advanced past the MeshData block
COctTree  *t = new COctTree(p, m, nullptr);  // p is advanced past the OctTree
```

В `ActorStatic::PerformLoad` это позволяет сцепить две пары:

```cpp
m_pExactMeshData = CreateMeshData(p);
m_pExactOctTree  = CreateOctTree(p, m_pExactMeshData, this);  // ray-trace pair

reader >> ulEnvelopeType;            // 0 = own envelope, 5 = no envelope
if (ulEnvelopeType == 0) {
    reader >> bUseRay;
    if (!bUseRay) {
        m_pMeshData = CreateMeshData(p);
        m_pOctTree  = CreateOctTree(p, m_pMeshData, this);  // physics pair
    }
}
```

`ulEnvelopeType == 5` означает **отсутствие физической оболочки** — объект
не сталкивается с персонажами (декорации, источники света и пр.).
`ulEnvelopeType == 0 && bUseRay == true` переиспользует трассировочную пару
в качестве физической оболочки (подсказка о том, что меш достаточно прост).

---

## 5. Факты о сжатии

- Алгоритм: **zlib deflate** (`78 DA …`).
- Буферизация: внутреннее окно 16 КБ в `CZipReader`.
- Контрольная сумма: внешне не хранится; только внутренний Adler-32 deflate.
- Распаковка потоковая, прямо в массивы назначения.
- 4-байтный префикс несжатого размера **обязателен** — читатель преаллоцирует
  буферы по нему ещё до любых вызовов inflate.

---

## 6. Перекрёстные ссылки

- Где потребляется пара: [actor_placement.md](actor_placement.md)
  (`ACTOR_STATIC`, `ACTOR_DUMMY` и т. п.).
- Родственная структура с похожим обрамлением: [`.pfd`](pfd.md) (та же
  обёртка `CZipReader<CStringReader>`, другая внутренняя полезная нагрузка).
- Потребители runtime-API: `ICollisionManager`,
  `Game/Game/CollisionFilter*.cpp`, `Game/Game/AntiStuckSystem.cpp`.
