# `.txt` — UTF-16 String-Table Source

- **Archive**: `Strings.vfs` (2 files: `ui.txt`, `console.txt`).
- **Reader**: `CStringDatabase::LoadStringsFromTextFile(IMMLoadObject *,
  unsigned long ulBaseID)` — `Game/Engine/StringDatabase.cpp:46`.
- **Owning interface**: `IStringDatabase`.

---

## 1. Purpose

`.txt` is the **human-editable alternative** to the binary
[`main.dat`](dat_strings.md) string database. Two files are bundled in
the alpha:

- `ui.txt` — interactive overrides for in-development UI strings.
- `console.txt` — text used by the in-game console (`~`).

These files exist so designers can hot-edit small string sets without
rebuilding `main.dat`. They share the same `IStringDatabase` map as
the binary file; if both define an ID the second loader wins
(insertion-order dependent).

---

## 2. On-disk encoding

- **Encoding**: UTF-16LE.
- **BOM**: required. First two bytes are `FF FE`. The loader rejects
  the file if the BOM is missing or the byte length is odd
  (`StringDatabase.cpp:48-52`):

  ```cpp
  if (pLoad->GetSize() % 2)                  return false;
  if (pszData[0] != '\xFF' || pszData[1] != '\xFE')  return false;
  ```

- **Line endings**: Windows `\r\n`. The reader strips `\r` after
  trimming, so `\n`-only is accepted but yields slightly weirder
  diagnostics.

---

## 3. Grammar

```
file        ::= preamble '@' body
preamble    ::= ( line '\n' )*              -- ignored (comments / header)
body        ::= ( entry )*
entry       ::= u32-id '\n' { string-line '\n' } '@'
```

In prose:

1. Everything before the **first `@`** on a line is treated as a
   discardable preamble (used in practice for a copyright/header
   comment).
2. Each entry starts with a decimal integer ID on its own line.
3. Following lines are the string body until the next `@`. Lines are
   concatenated with `\n` separators. A trailing `\n` is dropped, then
   any `\r` characters are stripped.
4. The next `@` terminates the entry and starts the next one.

### 3.1 Example

```
This is a header comment that gets ignored.
It may span multiple lines.
@
100
First UI string.
This is its second line.
@
101
Second UI string (single line).
@
```

After loading, `IStringDatabase` carries:

| ID  | Value                                       |
|----:|---------------------------------------------|
| 100 | `First UI string.\nThis is its second line.` |
| 101 | `Second UI string (single line).`           |

---

## 4. Reader behaviour

```cpp
unsigned long ulSize = pLoad->GetSize() / 2 - 1;
wistringstream sstr(pData.get());
sstr.exceptions(ios::failbit);
// 1. skip preamble (everything before first '@')
// 2. for each entry: read ulID, then accumulate lines until next '@'
// 3. AddString(ulID + ulBaseID, strString);
```

(`StringDatabase.cpp:55-110`)

Any read failure throws and the loader silently returns its current
`bOverwrite` state (catching the exception at the function boundary).
This means a malformed `.txt` will partially load — the entries up to
the failure are kept.

`ulBaseID` lets the caller namespace the IDs by offsetting every entry.
Both shipping `.txt` files are loaded with `ulBaseID = 0`, so their IDs
share the same numeric space as `main.dat`.

---

## 5. Compression

**None.** Plain UTF-16LE text.

---

## 6. Authoring workflow

Two valid edit cycles:

1. **Bin-only**: edit external master spreadsheet → re-export
   `main.dat` → rebuild `Strings.vfs` with `pkutil`.
2. **Bin + txt overrides**: load `main.dat`, then load `ui.txt` to
   overlay tweaks. The alpha uses this for fast iteration on
   work-in-progress UI strings.

---

## 7. Cross-references

- Binary master: [dat_strings.md](dat_strings.md).
- VFS loose-file override (skip the archive entirely): see
  [`../vfs_format.md` §5.1](../vfs_format.md) — useful for testing a
  patched `ui.txt` without rebuilding `Strings.vfs`.
