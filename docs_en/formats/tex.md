# `.tex` — Engine Texture

- **Archive**: `Textures.vfs` (904 files; the dominant texture format).
- **Examples**: `white_texture_DXT1.tex`, `house1_diffuse.tex`,
  `boini_wall#.tex` (the `#` flags alpha-DXT1).
- **Reader**: `CTexturePlain::CTexturePlain(CRenderer *, const char
  *pszName, D3DFORMAT fmt)` — `Game/Renderers/D3D9/TexturePlain.cpp:7`.
- **Owning interface**: `IRImage` / `IRTexture` (the renderer's image
  abstractions), backed by an `IDirect3DTexture9*`.

---

## 1. Format dispatch

`.tex` is a **container wrapper** that resolves to one of:

| Inner format       | Detection                                              |
|--------------------|--------------------------------------------------------|
| Raw image          | `D3DXGetImageInfoFromFileInMemory` recognises the bytes |
| Zlib-wrapped image | First 4 bytes = ASCII `%ZIP`, then `u32 uncompressedSize`, then a deflate stream |

The raw image is whatever D3DX9 can parse: **PNG, BMP, TGA, DDS** (incl.
DXT1/DXT2/DXT3/DXT4/DXT5). Most shipping `.tex` files are DDS with DXT1
or DXT3 compression and pre-built mipmap chains. The container exists
because the engine wants:

1. **Optional zlib wrapping** of payloads that would otherwise be
   uncompressed (PNG/BMP redirected through deflate).
2. **A consistent extension** so the texture mapper can resolve names
   without trial-and-error.
3. **An LQ fallback path** (`_LQ` suffix, see §3).

The decision is per-file: about 80 % of shipped `.tex` files are
plain DDS, and `%ZIP`-wrapped instances are mostly PNG/TGA captures
that compressed reasonably well.

---

## 2. On-disk layout

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

The magic check (`TexturePlain.cpp:40`):

```cpp
reinterpret_cast<const unsigned long *>(pPtr)[0]
    == Util::MAKE_DWORD('%', 'Z', 'I', 'P')
```

`Util::MAKE_DWORD('%','Z','I','P')` is little-endian, so the four bytes
on disk are exactly `25 5A 49 50`.

After unwrapping (or directly, if raw), the resulting buffer is fed to
`D3DXCreateTextureFromFileInMemoryEx`. D3DX detects the inner format and
allocates a managed-pool D3D texture.

---

## 3. Low-quality variant

`CRenderer::NeedLowQualityTextures()` is set when the user enables the
"low texture quality" option. If true, the loader first tries
`<name>_LQ.tex`:

```cpp
_splitpath(pszName, drive, dir, fname, ext);
strcat(fname, "_LQ");
_makepath(pszPath, drive, dir, fname, ext);
if (pFS->IsObjectExisting(pszPath)) strRealName = pszPath;
else                                strRealName = pszName;
```

LQ variants are not present in the alpha build's `Textures.vfs` — the
mechanism exists but no `_LQ.tex` files ship.

---

## 4. Alpha-channel heuristic

After load, `m_bHasAlpha` is set as follows
(`TexturePlain.cpp:92-113`):

| D3D format                                      | `m_bHasAlpha`              |
|--------------------------------------------------|----------------------------|
| `DXT1`                                           | true iff filename contains `'#'` |
| `A8R8G8B8`, `A1R5G5B5`, `A4R4G4B4`, `A8`, `A8R3G3B2`, `A2B10G10R10`, `A8P8`, `A8L8`, `A4L4`, `A2W10V10U10`, `DXT2..DXT5` | true |
| anything else                                    | false                      |

The `'#'` convention is **important for modding**: DXT1 stores a 1-bit
alpha but D3DX cannot distinguish between "DXT1-with-alpha" and "DXT1-
opaque" from the file alone, so the engine uses the filename hash mark
as an explicit flag. Example: `boini_wall#.tex` is treated as
alpha-tested.

---

## 5. Compression

- "Outer" compression: zlib via `CZipReader` when `%ZIP` magic is
  present.
- "Inner" compression: whatever the wrapped image carries — typically
  DXT (S3TC) for DDS, deflate for PNG, RLE for TGA.

Mipmaps are pre-stored in DDS; PNG/TGA paths regenerate them at load
time via `D3DX_DEFAULT` mip generation.

---

## 6. Cross-references

- Plain `.png` / `.tga` siblings: see [png_tga.md](png_tga.md) (same
  archive, no `%ZIP` wrapping, no `_LQ` fallback, simpler dispatch).
- Animated water: see [dat_water.md](dat_water.md) (not a `.tex`).
- Bumpmap heightfield: see [bump.md](bump.md).
- Texture name resolution: see `Game/Game/TextureMapperStd.cpp` and
  `ITextureMapper`, which chooses between `.tex`, `.png`, `.tga` per
  request.
