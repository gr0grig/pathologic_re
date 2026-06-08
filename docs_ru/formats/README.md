# Pathologic 2005 / The Void — форматы файлов ресурсов VFS

Техническая документация по каждому расширению файлов, поставляемых в
архивах `.vfs` игры (`alpha/data/*.vfs`). Сам контейнер VFS описан в
[../vfs_format.md](../vfs_format.md); эти документы описывают то, что
находится **внутри** каждой записи архива.

Используемые источники:
- Загрузчики движка: `SRC/PlagueCity/Game/Engine/` и `SRC/PlagueCity/Game/Game/`
- Загрузчики рендера D3D9: `SRC/PlagueCity/Game/Renderers/D3D9/`
- Звук: `SRC/PlagueCity/Game/Sound/`
- LifeStudio HEAD SDK: `SRC/LifeStudio HEAD 2.5 SDK/`

---

## Индекс по архивам

| Архив            | Расширение(я)                | Кол-во | Документ(ы) |
|------------------|------------------------------|------:|-------------|
| `Actors.vfs`     | (без расширения)             | 4524  | [actor_placement.md](actor_placement.md) |
| `Actors.vfs`     | `.xml`                       | 484   | [actor_xml.md](actor_xml.md) |
| `Fonts.vfs`      | `.ft`                        | 10    | [ft.md](ft.md) |
| `Geometries.vfs` | `.mesh`                      | 4292  | [mesh.md](mesh.md) |
| `Geometries.vfs` | `.lsh`                       | 29    | [lsh.md](lsh.md) |
| `Geometries.vfs` | `.hand`                      | 1     | [hand.md](hand.md) |
| `Geometries.vfs` | `.mma`                       | 1     | [mma.md](mma.md) |
| `Geometries.vfs` | `.mms`                       | 1     | [mms.md](mms.md) |
| `Scenes.vfs`     | `.isc`                       | 796   | [isc.md](isc.md) |
| `Scenes.vfs`     | `.osc`                       | 2     | [osc.md](osc.md) |
| `Scenes.vfs`     | `.pfd`                       | 21    | [pfd.md](pfd.md) |
| `Scenes.vfs`     | `.map`                       | 1     | [map.md](map.md) |
| `Scripts.vfs`    | `.bin`                       | 373   | [bin.md](bin.md) (байткод скриптов — см. также [../bin_format.md](../bin_format.md)) |
| `Sounds.vfs`     | `.ogg`                       | 298   | [ogg.md](ogg.md) |
| `Strings.vfs`    | `.dat` (`main.dat`)          | 1     | [dat_strings.md](dat_strings.md) |
| `Strings.vfs`    | `.txt`                       | 2     | [txt_strings.md](txt_strings.md) |
| `Textures.vfs`   | `.tex`                       | 904   | [tex.md](tex.md) |
| `Textures.vfs`   | `.png`                       | 181   | [png_tga.md](png_tga.md) |
| `Textures.vfs`   | `.tga`                       | 13    | [png_tga.md](png_tga.md) |
| `Textures.vfs`   | `.bump`                      | 1     | [bump.md](bump.md) |
| `Textures.vfs`   | `.dat` (`water.dat`)         | 1     | [dat_water.md](dat_water.md) |
| `UI.vfs`         | `.xml`                       | 17    | [ui_xml.md](ui_xml.md) |
| `World.vfs`      | `.xml`                       | 5     | [world_xml.md](world_xml.md) |

---

## Индекс по категориям

### Геометрия и анимация
- [mesh.md](mesh.md) — статические треугольные меши (`.mesh`)
- [lsh.md](lsh.md) — лицевые модели LifeStudio HEAD (`.lsh`)
- [hand.md](hand.md) — модель крепления рук (`.hand`)
- [mma.md](mma.md) — анимация морф-таргетов (`.mma`)
- [mms.md](mms.md) — секвенсер морф-таргетов (`.mms`)

### Сцены и навигация
- [isc.md](isc.md) — определение внутренней сцены (`.isc`)
- [osc.md](osc.md) — определение внешней сцены (`.osc`)
- [pfd.md](pfd.md) — данные поиска пути (`.pfd`)
- [map.md](map.md) — растровое изображение карты мира для UI (`.map`)

### Акторы
- [actor_xml.md](actor_xml.md) — XML-конфиг «Extras» актора (в `Actors.vfs`)
- [actor_placement.md](actor_placement.md) — бинарный экземпляр актора (`Actors.vfs/<name>`)

### Строки, шрифты, UI
- [dat_strings.md](dat_strings.md) — бинарная база строк (`Strings.vfs/main.dat`)
- [txt_strings.md](txt_strings.md) — UTF-16 BOM-текстовые строки (`Strings.vfs/*.txt`)
- [ft.md](ft.md) — растровый шрифт (`.ft`)
- [ui_xml.md](ui_xml.md) — определения диалогов/виджетов UI (`UI.vfs`)
- [world_xml.md](world_xml.md) — XML уровня мира (`World.vfs`)

### Текстуры
- [tex.md](tex.md) — текстура движка (`.tex`)
- [png_tga.md](png_tga.md) — стандартные PNG/TGA ресурсы
- [bump.md](bump.md) — карта высот для bump (`.bump`)
- [dat_water.md](dat_water.md) — кадры анимированной нормальной карты воды (`water.dat`)

### Аудио и скрипты
- [ogg.md](ogg.md) — аудио Ogg/Vorbis (`.ogg`)
- [bin.md](bin.md) — байткод PathologicScript (`.bin`)

---

## Соглашения, используемые в этих документах

Все документы форматов следуют единой структуре:
1. **Расположение**: имя архива + образец файла + путь к коду загрузчика.
2. **Раскладка байтов**: little-endian, типы перечисляются как `u8 / u16 / u32 / i32 /
   f32 / wchar (16-битный)`; структуры названы по классам движка.
3. **Строки**: если не указано иное, строки используют кодировку с префиксом
   длины `CEString` / `CEStringW` движка:
   - байт 0 < 0x80 → длина = байт 0 (1 .. 127).
   - байт 0 ≥ 0x80 → длина = (байт 0 & 0x7F) | (байт 1 << 7) (0 .. 32767).
   - далее идёт ASCII (`CEString`) или UTF-16LE (`CEStringW`); **без NUL-терминатора**.
   Это в точности кодировка имён в каталоге VFS; см.
   [../vfs_format.md §3.4](../vfs_format.md).
4. **Сжатие**: где оно есть, движок использует zlib через шаблон
   `CZipReader<TBaseReader>` (`Game/Common/ZipReader.h`). На диске префикс —
   `u32` *несжатого* размера, за которым следует сырой deflate-поток
   (заголовок `78 DA …`).
5. **Система координат**: правосторонняя, Y вверх. `CVector` = 3×`f32`, `CBox3D` =
   две последовательные `CVector` (центр, затем полуразмер — 24 байта), `COBB2D`
   = 4×`f32` (centre.xy + extent.xy = 16 байт), `COBB3D` = `CBox3D` + матрица
   поворота `CMatrix3` (24 + 36 = 60 байт).

Проверено эмпирически путём hex-дампа примеров файлов, извлечённых из
`alpha/data/*.vfs`; сверено с кодом загрузчиков движка в
`SRC/PlagueCity/`.
