# `.bump` — Bump-Map Texture

- **Archive**: `Textures.vfs` (1 file: `boini_sh_254.bump`, 786 450 bytes).
- **Reader**: same `CTexturePlain::CTexturePlain(...)` path as
  [`.tex`](tex.md), reached via
  `CRenderer::TextureCreate(strBumpName)` from one of the bump-mapping
  techniques (`TechniqueDiffuseBump.cpp:31`, `TDDiffuseBump.cpp:36`,
  `TechniqueDiffuseBumpNB.h:33`).

---

## 1. Format: it's actually a TGA

`Textures.vfs/boini_sh_254.bump` is a **standard 24-bit uncompressed
TGA** file with the extension changed. Empirical 18-byte header (verified
by hex-dump):

```
00 00 02 00 00 00 00 00 00 00 00 00 00 02 00 02 18 00
└──┴─ ─┘└── ColorMap (5 bytes) ──┘└─ Image origin (4)┘└W ┘└H ┘└Bp ┘└Imd┘
 │  │     all zero                 0,0                512  512  24  0
 │  └── ImageType = 2 (uncompressed truecolor)
 └── ID length = 0
```

Width 0x0200 = 512, height 0x0200 = 512, bpp 24, no image descriptor.

Payload: `512 × 512 × 3 = 786432` bytes of BGR pixel data. Header 18 +
payload 786432 = **786 450 bytes** exactly — matches the file size.

The naming convention is a hint to humans (and to the build pipeline):
the asset is intended to be bound as a **bump texture**, not as the
diffuse map. The engine itself does not distinguish the format — it
calls `D3DXCreateTextureFromFileInMemoryEx` and gets a 512×512 RGB
texture back regardless of extension.

---

## 2. How the engine uses it

The bump-mapping render techniques each declare a per-instance
descriptor with two texture names — diffuse + bump — and use the bump
texture as the **normal map** sampled in slot 1
(`TechBaseDiffuseBump.cpp:63, :95, :144`):

```cpp
pRenderer->TextureSet(GetBumpTexture(), 1);
```

The pixel shader expects RGB values in [0, 255] to encode the normal
vector `(nx, ny, nz)` after the typical `2 × T − 1` decode. The single
shipping `.bump` (`boini_sh_254.bump`) is a 512×512 normal map paired
with a specific stationary diffuse texture in `boini_sh_254*`.

---

## 3. Compression

**None.** Uncompressed 24-bit TGA. No `%ZIP` wrapper, no DXT.

---

## 4. Why a separate extension?

Three reasons, in order of importance:

1. **Authoring discipline**: artists know `.bump` files require flat,
   tile-able normal-map content rather than diffuse paintwork.
2. **Build pipeline lookup**: the asset cooker can apply different
   colour-space or DXT-mode defaults based on extension (DXT5n vs DXT1)
   when it later transcodes them to `.tex`.
3. **No silent confusion** with a same-named diffuse `.tex` next to it.

The alpha build ships only one `.bump` instance — most surfaces use
DXT5n inside a `.tex` instead. The extension is a relic of an earlier
asset workflow.

---

## 5. Cross-references

- General texture loader: [tex.md](tex.md).
- TGAs used as actual painted textures: [png_tga.md](png_tga.md).
- Bump-mapping render techniques:
  - `TechniqueDiffuseBump*` (`Game/Renderers/D3D9/`) — fixed-function /
    SM1 path.
  - `TDDiffuseBump*` (`Game/Renderers/D3D9/`) — Direct3D programmable-
    pipeline path.
