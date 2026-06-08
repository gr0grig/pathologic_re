# Костная анимация и скиннованные меши

Как движок хранит и проигрывает **скелетные анимации** для
персонажей и сочленённых объектов. Этот документ дополняет
[`formats/mesh.md`](formats/mesh.md) (статические меши),
[`formats/hand.md`](formats/hand.md) (вид от первого лица — руки) и
[`formats/lsh.md`](formats/lsh.md) (лицевой риг LifeStudio).

- **Расширение ассета**: `.mms` (например, `aglaya_e.mms`,
  `andrey_e.mms`), поставляется рядом с `.mesh`-файлами в
  `Geometries.vfs` и в дереве редакторских данных.
- **Ридер**: `CGeometryAnimBoneData::CGeometryAnimBoneData(...)` —
  `Game/Renderers/D3D9/GeometryAnimBoneData.cpp:25`.
- **Владеющие интерфейсы**: `IGeometryAnimBone` /
  `IGeometryAnimBoneRaytracer` / `IGeometryAnimBoneSimple` в
  `Engine/Renderer/`.
- **API анимации**: `IBoneAnimation`, `IBoneTrack`,
  `IBoneTrackEnum`, `IBoneAnimationQuery`,
  `IBoneAnimationSpeedQuery`.

---

## 1. Внешняя обёртка

Тело файла целиком завёрнуто в **один** `CZipReader<CStringReader>`
(zlib deflate с 4-байтовым префиксом несжатого размера — та же
обёртка, что и в [`.pfd`](formats/pfd.md) и
[`MeshData`/`OctTree`](formats/meshdata_octtree.md)).

```
+---------------------+
| u32 uncompressedSize|
+---------------------+
| deflate stream      |
+---------------------+
```

Внутри deflate-потока — структура, описанная ниже.

---

## 2. Декомпрессированная раскладка

`GeometryAnimBoneData.cpp:25-111`:

```
+--------------------------------------+
| u32  m_dwNBones                      |   число костей
+--------------------------------------+
| CSkeleton    skeleton                |   данные скиннинга вершин, см. §3
+--------------------------------------+
| u32  TechniqueType                   |   = TECHNIQUE_BONE_DIFFUSE = 9
| <technique payload>                  |   буферы вершин/индексов/материалов, см. §4
+--------------------------------------+
| u32  ulFaceCount                     |   = pTechnique->GetFaceCount()
| u8   materials[ulFaceCount]          |   ID материала на каждый face
+--------------------------------------+
| BONE_PROP[m_dwNBones]                |   свойства каждой кости, см. §5
+--------------------------------------+
| u32  m_dwNLocators                   |   число именованных точек крепления
| LOCATOR[m_dwNLocators]               |   см. §6
+--------------------------------------+
| u32  dwNTracks                       |   число именованных треков анимации
| TRACK[dwNTracks]                     |   см. §7
+--------------------------------------+
```

---

## 3. `CSkeleton` — скиннинг вершин

Плоский список весов на каждую вершину:

```
u32  m_ulNVertices
u32  ulSize                            // размер блока данных в байтах
u8   m_pData[ulSize]                   // упакованные записи весов
```

`m_pData` читается последовательно, по одной записи на вершину
(`Skeleton.cpp:4-43`):

```
Для вершины i (i = 0 .. m_ulNVertices - 1):
    u32   ulNWeights                   // 1..N
    Повторить ulNWeights раз:
        u32   ulBone                   // индекс в массиве костей
        f32   fWeight                  // [0, 1], сумма ≈ 1
```

Жёсткого ограничения на число весов на вершину нет; ассет-кукер
держит это число небольшим (обычно 1–4) ради производительности.

---

## 4. Технический payload

Реализована только одна костная техника: `TECHNIQUE_BONE_DIFFUSE = 9`
(`Renderers/D3D9/object_ids.h`). Payload — тройка (буфер вершин,
буфер индексов, таблица материалов), читаемая функцией
`CTechniqueBoneDiffuse::LoadData(...)`. Формат вершины — одна из
трёх деклараций, в зависимости от режима шейдинга меша:

| Decl  | Layout                                       | Используется для…                |
|-------|----------------------------------------------|---------------------------------|
| Decl1 | Position(FLOAT3) + Texcoord(FLOAT2) = 20 B   | Чисто геометрические проходы (тень) |
| Decl2 | Position(FLOAT3) + Normal(FLOAT3) + UV(FLOAT2) = 32 B | Освещённые персонажи     |
| Decl3 | Position(FLOAT3)                              = 12 B   | Picking / depth-only    |

Буфер индексов — 16-битный triangle list, как и у статических мешей.

---

## 5. `BONE_PROP` (на одну кость)

```
CVector  m_vPivot                      // 12 B — локальный pivot
u32      m_dwParent                    // индекс родительской кости (0xFFFFFFFF для корня)
u32      m_dwNChildren
u32      m_pChildren[m_dwNChildren]    // индексы дочерних костей
u32      m_dwFaceCount
u32      m_pFaces[m_dwFaceCount]       // треугольники, «принадлежащие» этой кости
u8       m_bOBB                        // 0 = без OBB, 1 = OBB далее
if (m_bOBB):
    COBB3D m_OBB                       // OBB в системе кости
```

Привязка треугольников к костям используется для покостной коллизии
и покостного culling видимости. OBB (если присутствует)
пересчитывается во время анимации трансформацией статической OBB
текущей матрицей кости.

---

## 6. `LOCATOR` (точка крепления)

```
CEString  m_strName                    // например, "LeftHand", "Head", "Eye_L"
CMatrix   m_Transform                  // 48 B — локальный transform относительно родительской кости
u32       m_dwParent                   // индекс родительской кости
```

Локаторы запрашиваются в рантайме через `GetLocatorByName` и
используются для крепления оружия, лицевого меша LSHead, систем
частиц и звуковых эмиттеров к нужным анатомическим точкам персонажа.

---

## 7. Треки анимации

```
Для каждого трека (всего dwNTracks):
    CEString  trackName                  // например, "Humanoid", "Root", "Cinematic"
    u32       m_dwNBones
    u32       m_pBones[m_dwNBones]       // индексы костей, на которые влияет трек

    u32       dwNAnimations
    Для каждой анимации:
        CEString  animName                // например, "walk_forward", "idle_a"
        u8        bSpeedTrack             // 0 / 1 (есть ли у анимации speed-трек?)
        CBoneAnimation                    // данные ключевых кадров, см. §7.1
```

### 7.1 `CBoneAnimation` (ключевые кадры одной анимации)

```
CVector              m_vOffset           // root-motion смещение, запечённое в анимации
u32                  m_pTrackParents[m_dwNBones]  // родитель кости внутри трека
                                                  //   (track-local, не полный скелет)

Для каждой кости трека (всего m_dwNBones):
    u32              ulKeyCount
    f32              m_pTimes[ulKeyCount]
    CTransform       m_pKeys[ulKeyCount]
        // каждый CTransform = CQuat (16 B) + CVector (12 B) = 28 байт

if (bSpeedTrack):
    u32              ulSpeedKeyCount
    f32              m_pTimes[ulSpeedKeyCount]
    CVector2         m_pSpeeds[ulSpeedKeyCount]    // по 8 B (горизонтальная скорость)
```

`CKeyframeData<float, CTransform, CQTInterpolator>` — обобщённый
контейнерный шаблон; на диске лежит то, что показано выше.

### 7.2 Интерполяция

`CQTInterpolator` (`Game/Renderers/D3D9/QTInterpolator.h:9-12`):

```
t      = (curTime - tk0) / (tk1 - tk0);    // [0, 1] между соседними кадрами
rot    = Slerp(rot[k0], rot[k1], t);       // short-arc сферическая интерполяция
trans  = Lerp (trans[k0], trans[k1], t);    // линейная
```

Для speed-треков `CLinearInterpolator` делает покомпонентный
линейный блендинг 2D-вектора скорости.

Объект `CQuery` хранит текущий индекс ключевого кадра, чтобы
последующие запросы (типично — ресэмплинг на 60 fps) пропускали
бинарный поиск и продвигали курсор за O(1).

### 7.3 Track parents

`m_pTrackParents` — **track-local**: кости внутри трека
перепривязываются для целей этой анимации. Именно так один и тот же
бипедный скелет может играть «walking» (root-motion в `m_vOffset`) и
«sit on bench» (root неподвижен, нижняя часть тела
перепривязана к скамье), не требуя двух отдельных скелетов.

---

## 8. Пайплайн вычисления скелета

Каждый кадр для каждого анимированного актора:

1. **Продвижение времени** — голова воспроизведения анимации
   двигается вперёд на `dt * speed`.
2. **Сэмплирование ключевых кадров на каждую кость** —
   `CBoneAnimation::CTransformsQuery::GetData(t, outTransforms[])`
   вычисляет поток ключевых кадров для всех костей активного трека
   (`BoneAnimation.cpp:69-78`).
3. **Сшивка track-parent'ов** — `CorrectTransforms()` превращает
   локальные покостные трансформации в абсолютные мировые матрицы,
   проходя по track-local индексам родителей.
4. **Скиннинг** — `CSkeleton::Transform(srcVerts, outVerts, matrices[])`
   (`Skeleton.cpp:4-43`) блендит каждую вершину через её
   `ulNWeights` матриц костей.
5. **Рендер** — получившийся буфер вершин рисуется через костную
   технику (Decl2 для освещённых, Decl1 для теней).

Для оборудования с поддержкой SSE есть версии `CSkeletonSSE`
(`Skeleton.h`).

---

## 9. Где файл используется

- `CActorAnimBone` (id 22) и его подклассы
  `CActorBiped` (4) / `CActorBipedLSH` (5) /
  `CActorBipedCS` (16) / `CActorBipedLSHCS` (17) — все потребляют
  `.mms`-файлы через
  `pRenderer->CreateGeometry(AID_GeometryAnimBone, m_strGeomName,
  …)`. Конструктор в `ActorAnimBone.cpp:857`.
- Per-actor placement-файлы в `Actors.vfs` несут имя геометрии ровно
  в том виде, как его ожидает конструктор — см.
  [`formats/actor_placement.md`](formats/actor_placement.md).

---

## 10. Перекрёстные ссылки

- Статические меши (без костей): [`formats/mesh.md`](formats/mesh.md).
- Риг рук от первого лица (другой формат!):
  [`formats/hand.md`](formats/hand.md).
- Лицевой риг (closed-source SDK):
  [`formats/lsh.md`](formats/lsh.md),
  [`formats/mma.md`](formats/mma.md),
  [`formats/mms.md`](formats/mms.md) — обратите внимание: `.mms`
  LifeStudio — это **другой файл**, нежели костной анимации `.mms`,
  описанной здесь. Расширение то же, парсер другой. LifeStudio-вариант
  привязан к имени файла, которым владеет `CLSHead`; костный —
  загружается через путь `IGeometry`.
- API проигрывания анимаций: [`tasks.md`](tasks.md) — там описана
  per-actor задача, которая ведёт фазу анимации.
