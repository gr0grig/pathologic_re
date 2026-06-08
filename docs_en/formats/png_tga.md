# `.png` / `.tga` — Standard Images

- **Archive**: `Textures.vfs` (181 PNGs, 13 TGAs).
- **Examples**: `horror3_gray.png`, `city.tga` (the city's big painted
  texture, 10.7 MB).
- **Reader**: same `CTexturePlain` path as [`.tex`](tex.md) — the
  loader dispatches by D3DX image-info, **the on-disk extension is just
  a hint to the texture-mapper for filesystem lookup**.

---

## 1. Format

These are **standard PNG and TGA files** with no engine-specific
wrapping or compression layer:

- **PNG**: PNG/zlib/Deflate (RFC 2083). The on-disk bytes begin with
  the well-known 8-byte signature `89 50 4E 47 0D 0A 1A 0A`.
- **TGA**: TrueVision Targa, typically uncompressed BGRA or 8-bit
  greyscale (the alpha build does not appear to use RLE TGAs). 18-byte
  header followed by pixel data.

Both formats are handed straight to `D3DXGetImageInfoFromFileInMemory`
and `D3DXCreateTextureFromFileInMemoryEx`. The engine performs **no
custom parsing** for PNG/TGA assets — they are conventional files you
can open in any image editor.

---

## 2. When PNG/TGA is used instead of `.tex`

- **PNG**: 32-bit-RGBA assets with awkward sizes (UI sprites, dialog
  portraits, screen effects like `horror3_gray.png`). PNG with full
  alpha is more flexible than DXT3/DXT5 here.
- **TGA**: large painted background art that needs lossless
  reproduction (the only TGAs of note are the city map background and a
  handful of cinematic still frames). DXT compression would visibly
  degrade them.

The `.tex` path (DDS+DXT in a custom container) is preferred for
in-world textures because DDS lets the build pipeline pre-compute
mipmaps + S3TC blocks, saving VRAM and load time.

---

## 3. No engine wrapping

Unlike [`.tex`](tex.md), PNG/TGA files in `Textures.vfs` carry **no**
`%ZIP` zlib wrapper, **no** `_LQ` fallback, and **no** alpha-flag
filename hash convention. Alpha is detected purely from the inner
D3DX-parsed format descriptor.

---

## 4. Performance note

Because PNG and TGA have to be transcoded to a D3D-friendly format at
load time, they're **slower** to load than DDS-inside-`.tex`. The asset
build deliberately routes most in-world textures through `.tex` and
reserves PNG/TGA for cases where lossless or per-pixel-alpha matters.

---

## 5. Cross-references

- Engine wrapper: [tex.md](tex.md).
- Bumpmap variant: [bump.md](bump.md) (a different binary format despite
  the parallel role).
- Texture-name resolution and fallback policy: `TextureMapperStd.cpp`,
  `ITextureMapper`.
