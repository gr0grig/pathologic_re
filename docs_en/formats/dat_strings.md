# `main.dat` — Binary String Database

- **Archive**: `Strings.vfs` (1 file: `main.dat`, 2 116 764 bytes).
- **Reader**: `CStringDatabase::LoadStrings(IMMLoadObject *pLoad,
  unsigned long ulBaseID)` — `Game/Engine/StringDatabase.cpp:27`.
- **Owning interface**: `IStringDatabase` (loaded by `CEngine` at
  startup, queried throughout the codebase via
  `GetStringByID(...)`).

---

## 1. Purpose

`main.dat` is the **localised text database** for all in-game UI strings,
NPC dialogue lines, item descriptions, and journal entries. Strings are
keyed by **32-bit integer IDs**; the rest of the codebase passes IDs
around (via `IStringDatabase`) and resolves them to a UTF-16 string at
display time.

The alpha build ships exactly one `main.dat`. The mechanism is designed
for multiple language packs to be installed side-by-side — additional
`.dat` files would be loaded with a non-zero `ulBaseID` to namespace
them.

---

## 2. On-disk layout

```
+----------------------+
| u32  ulCount         |   number of (id, string) pairs
+----------------------+
| ENTRY[ulCount]       |   variable size each (see 2.1)
+----------------------+
```

### 2.1 `ENTRY`

```
u32      ulID            // string identifier (caller-supplied; arbitrary)
CEStringW strString      // length-prefixed UTF-16LE string (see README §Conventions)
```

`CEStringW` is the wide-character variant of the engine's length-prefix
encoding:

- byte 0 < 0x80 → length (in **`wchar_t` units**, not bytes) = byte 0.
- byte 0 ≥ 0x80 → length = (byte 0 & 0x7F) | (byte 1 << 7).
- `length × 2` bytes of UTF-16LE follow. No NUL terminator.

So a string of N codepoints is stored as 1- or 2-byte length prefix
plus `2N` bytes of payload.

---

## 3. Reader behaviour

```cpp
CStringReader reader((const char *)pLoad->GetMemoryPointer());
unsigned long ulCount;
reader >> ulCount;
for (unsigned long i = 0; i < ulCount; ++i) {
    unsigned long ulID;
    CEStringW strString;
    reader >> ulID >> strString;
    AddString(ulID + ulBaseID, strString);
}
```

(`StringDatabase.cpp:27-43`)

`AddString` inserts into an `std::map<u32, CEStringW>`:
- First write for an ID succeeds.
- A subsequent write to the same ID with a different value **silently
  overwrites** (there is a bug in `:20`: `r.first->second == str` is a
  comparison expression, not an assignment — read it as: subsequent
  writes are dropped). In practice the build pipeline guarantees ID
  uniqueness so the bug never fires.

Lookups (`GetStringByID(...)`) return `L"?????"` for missing IDs
(`StringDatabase.cpp:117`).

---

## 4. ID layout in the shipping `main.dat`

The IDs themselves are **opaque integers** — there is no on-disk index
to indicate which range covers which subsystem. By convention the build
pipeline groups IDs into ranges:

- UI: low numbers (button labels, menu items)
- Items: per-item descriptors
- Dialogue: per-NPC blocks
- Journal: per-entry blocks

Mod authors who need to find the ID for a given UI string typically:

1. Patch `GetStringByID` to log every miss.
2. Inspect existing script `.bin` files (see [bin.md](bin.md)) where
   IDs appear as immediate constants in `Push`/`PushW` opcodes
   feeding `MessageBox` and `Diary` script API calls.

---

## 5. Compression

**None.** The file is raw `u32 + CEStringW` records back-to-back. Total
size (2.1 MB) is uncompressed UTF-16 — would shrink dramatically under
zlib but is loaded once at boot, so the engine doesn't bother.

---

## 6. Alternative loader: text format

`CStringDatabase::LoadStringsFromTextFile`
(`StringDatabase.cpp:46`) accepts a **UTF-16LE BOM-prefixed text
file** as an alternative source. That path is documented separately in
[txt_strings.md](txt_strings.md) and is what feeds modification work-
flows when you don't want to maintain a binary `.dat`.

---

## 7. Cross-references

- Text source format: [txt_strings.md](txt_strings.md).
- Script-side consumers: see [`Game/Engine/CEngine.cpp:699`] for the
  early-load path (`LoadStrings` is called with the contents of
  `Strings.vfs/main.dat`).
- The world-map labels in [map.md](map.md) reference IDs from this
  database.
