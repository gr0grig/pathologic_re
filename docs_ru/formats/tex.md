# `.tex` — текстура движка

- **Архив**: `Textures.vfs` (904 файла; доминирующий текстурный формат).
- **Примеры**: `white_texture_DXT1.tex`, `house1_diffuse.tex`,
  `boini_wall#.tex` (символ `#` помечает альфу для DXT1).
- **Загрузчик**: `CTexturePlain::CTexturePlain(CRenderer *, const char
  *pszName, D3DFORMAT fmt)` — `Game/Renderers/D3D9/TexturePlain.cpp:7`.
- **Владеющий интерфейс**: `IRImage` / `IRTexture` (абстракции изображения
  рендера), внутри — `IDirect3DTexture9*`.

---

## 1. Диспетчеризация формата

`.tex` — это **контейнер-обёртка**, разрешающаяся в одно из:

| Inner format       | Detection                                              |
|--------------------|--------------------------------------------------------|
| Raw image          | `D3DXGetImageInfoFromFileInMemory` recognises the bytes |
| Zlib-wrapped image | First 4 bytes = ASCII `%ZIP`, then `u32 uncompressedSize`, then a deflate stream |

Сырое изображение — это всё, что умеет парсить D3DX9: **PNG, BMP, TGA, DDS**
(включая DXT1/DXT2/DXT3/DXT4/DXT5). Большинство поставляемых `.tex`-файлов —
DDS со сжатием DXT1 или DXT3 и предсобранными цепочками мипмапов. Контейнер
существует, потому что движку нужно:

1. **Опциональная zlib-обёртка** для нагрузок, которые иначе были бы
   несжатыми (PNG/BMP перенаправляются через deflate).
2. **Единое расширение**, чтобы текстурный маппер разрешал имена без
   перебора.
3. **Резервный LQ-путь** (суффикс `_LQ`, см. §3).

Решение принимается пофайлово: около 80% поставляемых `.tex` — это
простой DDS, а экземпляры в обёртке `%ZIP` — в основном захваты PNG/TGA,
которые хорошо сжались.

---

## 2. Раскладка на диске

```
+-----------------------------+
| Either:                     |
|   raw DDS / PNG / TGA / BMP |
| Or:                         |
|   "%ZIP" (4 bytes, magic)   |
|   u32  uncompressedSize     |
|   deflate stream (78 DA …)  |
+-----------------------------+
```

Проверка магии (`TexturePlain.cpp:40`):

```cpp
reinterpret_cast<const unsigned long *>(pPtr)[0]
    == Util::MAKE_DWORD('%', 'Z', 'I', 'P')
```

`Util::MAKE_DWORD('%','Z','I','P')` little-endian, поэтому четыре байта на
диске — это ровно `25 5A 49 50`.

После распаковки (или напрямую, если raw) полученный буфер передаётся в
`D3DXCreateTextureFromFileInMemoryEx`. D3DX определяет внутренний формат и
аллоцирует текстуру D3D в managed-пуле.

---

## 3. Вариант пониженного качества

`CRenderer::NeedLowQualityTextures()` устанавливается, когда пользователь
включает опцию «low texture quality». Если true, загрузчик сначала пробует
`<name>_LQ.tex`:

```cpp
_splitpath(pszName, drive, dir, fname, ext);
strcat(fname, "_LQ");
_makepath(pszPath, drive, dir, fname, ext);
if (pFS->IsObjectExisting(pszPath)) strRealName = pszPath;
else                                strRealName = pszName;
```

LQ-варианты в `Textures.vfs` альфа-сборки отсутствуют — механизм есть, но
файлов `_LQ.tex` нет в поставке.

---

## 4. Эвристика альфа-канала

После загрузки `m_bHasAlpha` устанавливается так
(`TexturePlain.cpp:92-113`):

| D3D format                                      | `m_bHasAlpha`              |
|--------------------------------------------------|----------------------------|
| `DXT1`                                           | true iff filename contains `'#'` |
| `A8R8G8B8`, `A1R5G5B5`, `A4R4G4B4`, `A8`, `A8R3G3B2`, `A2B10G10R10`, `A8P8`, `A8L8`, `A4L4`, `A2W10V10U10`, `DXT2..DXT5` | true |
| anything else                                    | false                      |

Соглашение про `'#'` **важно для моддинга**: DXT1 хранит 1-битную альфу, но
D3DX не может отличить «DXT1-с-альфой» от «DXT1-непрозрачный» только по файлу,
поэтому движок использует символ-хеш в имени файла как явный флаг. Пример:
`boini_wall#.tex` трактуется как alpha-tested.

---

## 5. Сжатие

- «Внешнее» сжатие: zlib через `CZipReader`, когда присутствует магия
  `%ZIP`.
- «Внутреннее» сжатие: то, что несёт обёрнутое изображение — обычно
  DXT (S3TC) для DDS, deflate для PNG, RLE для TGA.

Мипмапы предхранятся в DDS; пути PNG/TGA перегенерируют их при загрузке
через `D3DX_DEFAULT` генерацию мипов.

---

## 6. Перекрёстные ссылки

- Простые соседи `.png` / `.tga`: см. [png_tga.md](png_tga.md) (тот же
  архив, без `%ZIP`-обёртки, без `_LQ`-fallback, более простая
  диспетчеризация).
- Анимированная вода: см. [dat_water.md](dat_water.md) (не `.tex`).
- Bumpmap-карта высот: см. [bump.md](bump.md).
- Разрешение имён текстур: см. `Game/Game/TextureMapperStd.cpp` и
  `ITextureMapper`, который выбирает между `.tex`, `.png`, `.tga` для каждого
  запроса.
