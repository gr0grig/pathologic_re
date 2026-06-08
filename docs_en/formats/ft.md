# `.ft` — Bitmap Font

- **Archive**: `Fonts.vfs` (10 files).
- **Examples**: `arial_10_cyr.ft`, `arial_12_cyr.ft`, `arial_14_cyr.ft`,
  `console.ft`.
- **Reader**: `CBitmapFont::CBitmapFont(CRenderer *, ..., IMMLoadObject *)` —
  `Game/Renderers/D3D9/BitmapFont.cpp:18`.
- **Owning interface**: `IRFont` (renderer-side font handle).
- **Factory**: `CRenderer::CFontFactory::CreateBitmapFont(strFileName)`.
- **Authoring tool**: `SRC/PlagueCity/tools/FontGen/` (the alpha's
  internal font-builder GUI). A newer rewrite at `tools/FontGenNew/`
  produces the same on-disk layout.

---

## 1. On-disk layout

```
+-------------------------------+
| u32  m_dwTextHeight           |   text-baseline-to-baseline height
| u32  m_dwHeight               |   bitmap row count per glyph cell
| u32  ulCharCount              |   number of glyph records
+-------------------------------+
| CHAR_RECORD[ulCharCount]      |   metadata, see 1.1
+-------------------------------+
| u32  ulPairCount              |   number of kerning entries
+-------------------------------+
| KERN_RECORD[ulPairCount]      |   see 1.2
+-------------------------------+
| BITMAP_BLOB                   |   raw per-glyph alpha bitmaps
|   per glyph (in record order):|
|     u8[m_dwHeight × m_dwWidth]|   row-major, 1 byte = alpha 0..255
+-------------------------------+
```

After parsing the per-glyph records the reader records the file offset
of the bitmap blob (`dwLastOffset = reader.GetSeekPos()`,
`BitmapFont.cpp:54`) and **lazily uploads** glyphs into a runtime
texture atlas. The bitmap blob is never read into memory in one go —
the on-disk pages are demand-paged into the atlas on first use.

### 1.1 `CHAR_RECORD` (per glyph)

```
wchar     c              // Unicode codepoint (UTF-16, little-endian)
u32       m_dwWidth      // glyph pixel width in the bitmap blob
CIVector2 m_vOffset      // 8 bytes (i32 x, i32 y) — pen offset to origin
i32       m_lAdvance     // pen advance after drawing this glyph
```

The struct is read field-by-field with `>>` overloads
(`BitmapFont.cpp:33-35`). Bitmap height is the common `m_dwHeight`
declared above; only width is per-glyph (variable-width font).

The lazy loader's per-glyph file offset is computed as a running sum:

```
glyph[0].fileOffset = blob_start
glyph[i].fileOffset = glyph[i-1].fileOffset + glyph[i-1].m_dwWidth * m_dwHeight
```

### 1.2 `KERN_RECORD`

```
wchar  c1
wchar  c2
i32    lAmount       // signed pixel kerning adjustment when c1 is followed by c2
```

A flat list keyed by character pair; the runtime builds an
`std::map<pair<wchar_t, wchar_t>, int>` for lookup
(`BitmapFont.cpp:52`).

---

## 2. Encoding

- All numerics are little-endian.
- `wchar_t` on Windows MSVC is **16-bit UTF-16LE**, so each character
  record uses 2 bytes for the codepoint.
- There is **no encoding byte** in the file header — the font is
  implicitly Unicode.
- The presence of `?` (U+003F) is **assertion-enforced** by the loader:
  `m_Characters[CHARCODE_UNKNOWN]` must exist or `ASSERT` fires
  (`BitmapFont.cpp:44`). It is the fall-through glyph for unknown
  characters.

---

## 3. Runtime atlas

After load the engine:

1. Picks an atlas pixel format: P8 if the GPU supports
   `D3DFMT_P8` + paletted-alpha, otherwise `A8L8`, otherwise
   `A8R8G8B8`. The chosen texel size is recorded in `m_dwTexelStride`
   (1, 2, or 4 bytes) — `BitmapFont.cpp:66-77`.
2. Computes a power-of-two atlas size from
   `ceil(sqrt(area / (rowHeight + 2)) × 1.1)`.
3. Allocates the atlas as one large managed-pool texture
   (`m_idTexture`).
4. Adds itself to the renderer's "discardable" list — on device-loss the
   atlas can be regenerated from the on-disk file on the fly.

Glyphs are blit into the atlas using a **bottom-up row packer**
(`m_RowSpace` tracks remaining width per row), and old glyphs are
evicted LRU-style when the atlas runs out of room. The result is a
classic dynamic font atlas, with the `.ft` file being its **persistent
source-of-truth**.

---

## 4. Compression

**None.** Glyph bitmaps are uncompressed 8-bit alpha. The file is
typically 25 KB per font (10 × ~ 25 KB ≈ 250 KB total in
`Fonts.vfs`).

---

## 5. Cross-references

- The shaders that sample the atlas live alongside the loader
  (`BitmapFont.cpp` declares the per-vertex layout at `:5`).
- The UI text-drawing pipeline binds `IRFont*` handles via
  `Game/UI/UIManager.cpp` and the various override classes
  (`MessageOverride.cpp`, `DialogOverride.cpp` …).
- The font generator project is in `SRC/PlagueCity/tools/FontGen/`
  and uses the FreeType library at
  `SRC/PlagueCity/tools/FontGen/FontRendererFT.cpp` to produce these
  bitmaps from system TTFs.
