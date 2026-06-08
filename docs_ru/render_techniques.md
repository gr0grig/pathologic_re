# Render-техники и шейдеры (D3D9)

Каталог всех техник рендеринга, которые поставляет D3D9-бэкенд
движка, вместе с файлами вершинных/пиксельных шейдеров, к которым
они привязываются. Все пути указаны относительно
`SRC/PlagueCity/Game/Renderers/D3D9/`.

Рендерер (`CRenderer`) создаёт по одному экземпляру техники на
вариант материала на геометрию; геометрии выбирают, какую технику
использовать, через свой material-дескриптор.

---

## 1. Иерархия классов

```
CTechBase                                  абстрактный — управление VB/IB, draw-коллбеки
 ├ CTechBaseDiffuse                        база только-diffuse
 │   ├ CTechniqueDiffuse<TVPMode, TMod>    обычный diffuse
 │   ├ CTechniqueDiffuseMaps               diffuse + запечённый lightmap
 │   ├ CTechniqueDiffuseS                  diffuse + specular
 │   ├ CTechniqueDiffuseSMaps              diffuse + specular + lightmap
 │   ├ CTechniqueDiffuseSF                 diffuse + specular (fixed-function)
 │   ├ CTechniqueDiffuseSOpMaps            diffuse + specular + opacity + lightmap
 │   ├ CTechniqueDiffuseSOpF                ↳ вариант FFP
 │   ├ CTechniqueDiffuseSOpMapsF            ↳ вариант FFP
 │   ├ CTechniqueDiffuseOp                 diffuse + opacity
 │   ├ CTechniqueDiffuseOpMaps             diffuse + opacity + lightmap
 │   └ CTechniqueSpecial1                  special: cube-texture environment
 │
 ├ CTechBaseDiffuseBump                    база с bump-маппингом
 │   ├ CTechniqueDiffuseBump               diffuse + normal map
 │   ├ CTechniqueDiffuseBumpMaps           +lightmap
 │   ├ CTechniqueDiffuseBumpNB             bump без specular
 │   └ CTechniqueDiffuseBumpNBMaps         +lightmap
 │
 ├ CTechniqueNoTex                          flat-shaded (без текстуры)
 │   └ CTechniqueNoTexMaps                  +lightmap
 │
 └ CTechniqueBone                           скиннованная анимированная база
     └ CTechniqueBoneDiffuse<TVPMode>       скиннованный diffuse
```

### Варианты типизированных данных (`TD*`)

Три класса `TD*` выступают **дескрипторами типов** для пути сборки
с поддержкой lightmap'ов, используемого системой статического света:

| Класс                | Соответствует              |
|----------------------|----------------------------|
| `CTDDiffuse`         | `CTechniqueDiffuse`        |
| `CTDDiffuseNB`       | `CTechniqueDiffuseBumpNB`  |
| `CTDDiffuseBump`     | `CTechniqueDiffuseBump`    |

Они экспонируют те же байтовые раскладки, так что сборка
статического света может записать тот же блоб, который потом
прочитает runtime-техника.

### Общее количество

~ 28 классов техник × несколько шаблонных инстанциаций (режим
вершинного шейдера `TVPMode`, модификатор `TMod`) = **более 100
скомпилированных вариантов** в финальной DLL рендерера.

---

## 2. Декларации вершин

Стандартные раскладки, эмитируемые разными техниками (смещения в
байтах):

### 2.1 Diffuse / DiffuseS / DiffuseOp

```
0   FLOAT3   POSITION
12  FLOAT3   NORMAL          (пропускается для варианта «без нормали»)
24  FLOAT2   TEXCOORD0       diffuse UV
                              ──┐
32  FLOAT2   TEXCOORD1       │ (lightmap UV, только в "Maps"-вариантах)
                              ──┘
```

### 2.2 DiffuseBump

```
0    FLOAT3   POSITION
12   FLOAT3   TANGENT (T1)
24   FLOAT3   TANGENT (T2)    binormal = T1 × T2 в шейдере
36   FLOAT2   TEXCOORD0       diffuse UV
44   FLOAT2   TEXCOORD1       bump UV
52   FLOAT2   TEXCOORD2       lightmap UV (варианты Maps)
```

### 2.3 Bone-варианты (объявлены в `RawGeometry.cpp` + `BoneGeometry`)

| Decl  | Stride | Layout                                                       |
|-------|-------:|--------------------------------------------------------------|
| Decl1 | 20     | POSITION(F3) + TEXCOORD0(F2)                                  |
| Decl2 | 32     | POSITION(F3) + NORMAL(F3) + TEXCOORD0(F2)                     |
| Decl3 | 12     | только POSITION(F3) (теневой / depth-проход)                  |

### 2.4 Plain (без текстуры)

```
0   FLOAT3   POSITION
12  D3DCOLOR DIFFUSE         (per-vertex цвет, 4 байта)
```

---

## 3. Шейдеры

Все HLSL/asm-шейдеры лежат в `Renderers/D3D9/Shaders/`. Сборка
компилирует их заранее и встраивает в DLL рендерера. В таблице ниже
перечислены поставляемые файлы шейдеров и за что отвечает каждый.

| Файл                 | Стадия | Назначение                                                              |
|----------------------|--------|--------------------------------------------------------------------------|
| `common.vsh`         | VS     | Общие хелперы: `CalculateSpecular`, `CalculateFog`, константы матриц.    |
| `diffuse.vsh`        | VS     | Diffuse-освещение (ambient + directional + point), в т.ч. варианты с lightmap'ом и specular. |
| `diffusebump.vsh`    | VS     | Bump-маппинг: переводит вектор света в pertex-вершинное пространство касательных. |
| `OriginLitDiffuse.vsh` | VS   | Источник света в начале координат (например, взрывы, фонари) — diffuse-путь. |
| `OriginLitNoTex.vsh` | VS     | Источник света в начале координат — без текстуры (flat-shaded обломки).  |
| `notex.vsh`          | VS     | Путь plain-вершинного цвета (отладочный рендер, спрайты частиц).         |
| `general.vsh`        | VS     | Общий vertex transform + проброс UV.                                     |
| `special1.vsh`       | VS     | Cube-texture environment mapping (использует `CTechniqueSpecial1`).      |
| `crowd.vsh`          | VS     | Инстансинг толпы / NPC (базовый).                                        |
| `crowd_imp.vsh`      | VS     | Инстансинг толпы — с учётом importance/LOD.                              |
| `shadows.vsh`        | VS     | Генерация shadow-map'а (только глубина).                                 |
| `water2.vsh`         | VS     | Поверхность воды: направление камеры + half-vector для семплирования отражений. |
| `water2.psh`         | PS     | Пиксельный шейдер воды (процедурные волны, семплирование normal map, рефракция). |

Целевые версии компиляции и для вершинных, и для пиксельных
шейдеров — эпоха SM 1.x / 2.0: движок писался под D3D9 ps_1_1..2_0,
vs_1_1..2_0.

### Fixed-function fallback'и

Для оборудования, не умеющего шейдеры, техники, имя которых
заканчивается на `F` (`CTechniqueDiffuseSOpF`,
`CTechniqueDiffuseSOpMapsF`), используют fixed-function пайплайн
D3D9. Выбор делается на этапе инициализации рендерера на основе
`D3DCAPS9::PixelShaderVersion`.

---

## 4. Сопоставление техника → геометрия

| Класс геометрии                 | Техника(-и)                                                        |
|---------------------------------|--------------------------------------------------------------------|
| `CGeometryStatic` (`.mesh`)     | `CTechniqueDiffuse*`, `CTechniqueDiffuseBump*` — выбирается по материалу |
| `CGeometryDetailedObject`       | `CTechniqueDiffuse` с per-instance светом и анимацией              |
| `CGeometryAnimBone` (`.mms`)    | `CTechniqueBoneDiffuse`                                             |
| `CGeometryBSP` (меш уровня)     | `CTechniqueDiffuseBumpMaps`, `CTechniqueLightmaps*`                 |
| `CGeometryLand` (terrain)       | `CTechniqueDiffuseBump*` (активное использование lightmap'а)       |
| `CGeometryTrans` (прозрачные)   | `CTechniqueDiffuse` + настройка alpha blend                         |
| `CGeometryTransVLit`            | `CTechniqueDiffuse` + предвычисленный per-vertex свет               |
| `CGeometryBillboard*`           | Кастомный путь шейдера биллбордов                                   |
| `CGeometryWater` (`water.dat`)  | `water2.vsh` + `water2.psh`                                          |
| `CGeometrySky`                  | прямые вызовы D3D9 (cube/skybox, без техники)                       |
| `CGeometryClouds`               | биллборды + прозрачность                                            |
| `CGeometryRain`                  | биллборд частиц                                                    |
| `CGeometryFlame`                | система частиц (`CTechniqueParticle`)                              |
| `CGeometryParticleSystem`       | биллборд частиц с блоком параметров на 60 float'ов                  |

---

## 5. Постпроцессинг

Постпроцесс-эффекты реализуют `IPostProcessEffect` и наслаиваются
поверх основной отрендеренной сцены. Поставляемые эффекты:

| Класс                | Эффект                                       | Заголовок                    |
|----------------------|----------------------------------------------|-----------------------------|
| `CPPNegateImage`     | Инвертированный по цвету экран (горрор-эффект сцены) | `Engine/Renderer/IPPNegateImage.h` |
| (другие)             | Bloom, blur, distortion — перечислены в `IPostProcessEffectEnumerator` |                          |

Эффекты добавляются вызовом `IRenderer::AddPostProcessEffect(...)`
и удаляются через `RemovePostProcessEffect`. Порядок применения
важен — эффекты компонуются как ping-pong-проходы по render-target'ам.

---

## 6. Выбор техники

У рендерера нет одной функции «выбрать технику». Вместо этого
каждая геометрия, которой нужен рендер, строит конкретный
экземпляр `ITechnique *` при загрузке и хранит его. Цепочка
конструкторов выглядит примерно так:

```
CGeometryStatic::CGeometryStatic(name, …)
  ↓
загружает <name>.mesh → есть текстура, нет normal map
  ↓
new CTechniqueDiffuse<TVPModeShaders, …>(…)
```

То есть выбор **определяется материалом**, а не динамически в
рантайме. Чтобы добавить новый путь, обычно нужно: (а) написать
новый класс техники, наследующий от `CTechBase*`; (б) подключить
его в конструкторе геометрии; (в) опционально добавить вариант
типизированных данных для запекания lightmap'а на этапе сборки.

---

## 7. Перекрёстные ссылки

- Формат меша с костями, который потребляет `CTechniqueBoneDiffuse`:
  [animation.md](animation.md).
- Формат статического меша: [`formats/mesh.md`](formats/mesh.md).
- Исходные данные воды: [`formats/dat_water.md`](formats/dat_water.md).
- Загрузчики текстур: [`formats/tex.md`](formats/tex.md),
  [`formats/png_tga.md`](formats/png_tga.md),
  [`formats/bump.md`](formats/bump.md).
- Данные системы частиц:
  [particle_system.md](particle_system.md).
