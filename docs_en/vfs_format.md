# Pathologic 2005 — `.vfs` Archive Format

Documentation of the **VFS** (Virtual File System) container format used by
Pathologic 2005 / The Void to package game assets. The format is implemented by
`VFS.dll` (consumer side) and `pkutil.exe` (producer side); both reside in the
same 2005 source tree.

Sources:
- Reader: `SRC/PlagueCity/Game/VFS/VFileSystem.cpp`, `VFSListing.h/.cpp`
- Writer: `SRC/PlagueCity/tools/pkutil/PakFile.cpp`, `PakDirectory.cpp`,
  `pkutil.cpp`
- Build wiring: `SRC/PlagueCity/make/pak.xml`

Archives shipping with the alpha build (`alpha/data/`): `Actors.vfs`,
`Fonts.vfs`, `Geometries.vfs`, `Scenes.vfs`, `Scripts.vfs`, `Sounds.vfs`,
`Strings.vfs`, `Textures.vfs`, `UI.vfs`, `World.vfs`.

---

## 1. High-level layout

A `.vfs` archive is a flat container with three regions:

```
+--------------------+ 0
| 4-byte magic       |   "LP1C" (bytes 4C 50 31 43)
+--------------------+ 4
| Directory tree     |   recursive: root DIRECTORY block at offset 4
|   (header region)  |
+--------------------+ header_end
| File payload       |   raw file bytes, in the order chosen by the writer
|                    |
+--------------------+ EOF
```

There is **no compression and no encryption**. Payloads are stored back-to-back
with no padding; alignment is implicit (file `m_ulOffset` is an absolute byte
offset into the archive). The format is read both via stdio (`fread`) and via
`CreateFileMapping` — the latter requires alignment-aware view setup
(`VFileSystem.cpp:154`), but the file bytes themselves are unaligned.

The header region is laid out so it can be loaded sequentially from offset 4 to
`header_end` without seeks. After parsing, the same archive file is reopened
with `CreateFile` + `CreateFileMapping` and used as a memory-mapped backing
store for individual file reads.

---

## 2. Magic

```
offset  size  value
   0      2   0x504C    // multi-char literal 'PL' → bytes 4C 50
   2      2   0x4331    // multi-char literal 'C1' → bytes 31 43
```

On disk the four bytes are `4C 50 31 43` = ASCII `"LP1C"`.

The producer writes the magic as two `unsigned short` values literally named
`'PL'` and `'C1'` (`PakFile.cpp:23`); MSVC evaluates each multi-character
constant as `(c0 << 8) | c1`, and the little-endian store reverses the byte
order on disk. The reader matches them the same way
(`VFileSystem.cpp:27`, `pkutil.cpp:172`).

`"LP" + "C1"` is plausibly an abbreviation for "**L**ifeStudio **P**athologic
**C**ity, version **1**" given the project's roots in the LifeStudio HEAD SDK.

---

## 3. Directory tree

Starting at file offset 4, the archive contains the **root directory block**.
Directory blocks recurse via a depth-first pre-order traversal: for each
directory, all its files are written first, then each subdirectory block
follows (in arbitrary `map`-sorted order).

### 3.1 Directory block

```
+-----------------------+
| ulDirCount  : u32     |   number of subdirectories in this dir
| ulFileCount : u32     |   number of files in this dir
+-----------------------+
| FILE ENTRY x N        |   N = ulFileCount, see 3.2
+-----------------------+
| DIR ENTRY  x M        |   M = ulDirCount,  see 3.3
+-----------------------+
```

Reader: `CVFSListing::LoadDirectory` (`VFSListing.cpp:51`).
Writer: `CPakDirectory::_SaveHeader` (`PakDirectory.cpp:72`).

### 3.2 File entry

```
+--------------------------+
| VARLEN string  : name    |   see 3.4
+--------------------------+
| FILE_INFO (16 bytes):    |
|   m_ulSize   : u32       |   file size in bytes
|   m_ulOffset : u32       |   absolute offset into the archive
|   m_ChTime   : FILETIME  |   8 bytes, Windows FILETIME (100-ns since 1601)
+--------------------------+
```

`FILE_INFO` is defined in `VFSListing.h:6`. It is written/read with a single
`fwrite`/`fread`, so its layout is `#pragma pack(4)`-equivalent (12 bytes total
data + no padding because all fields are 4-byte-aligned with a 4-byte trailing
half of FILETIME).

Writer order: files inside a directory are sorted **by size, ascending**, via
the `m_FilesOrdered` `multiset` keyed on `FILE_INFO::m_ulSize`
(`PakDirectory.h:15`, `PakDirectory.cpp:78`). Small files are written first.
The reader does **not** depend on this order — file lookup is by name through
a hash map.

### 3.3 Directory entry

```
+--------------------------+
| VARLEN string  : name    |   subdirectory name (see 3.4)
+--------------------------+
| DIRECTORY block          |   recursive, see 3.1
+--------------------------+
```

There is no separate directory-info struct: a subdirectory entry is just a
name immediately followed by the nested directory block.

Writer iteration over subdirectories uses `map`-sorted insertion order
(`PakDirectory.cpp:88`), so subdirectory blocks appear in case-insensitive
lexical order of their names.

### 3.4 Variable-length string

A 7- or 15-bit length-prefixed ASCII string (no NUL terminator).

```
byte 0 :
    bit 7  = 0  → length is the low 7 bits (1..127)
    bit 7  = 1  → length is the low 7 bits + (byte 1 << 7), giving 0..32767

byte 1 (only if bit 7 of byte 0 was set):
    high 8 bits of length

bytes [N..]:
    N raw ASCII characters, no terminator
```

Writer: `WriteString` (`PakDirectory.cpp:11`).
Reader: `ReadString` (`VFSListing.cpp:15`).

Strings longer than 32767 bytes are rejected by the writer. The reader does
not enforce this but cannot generate such lengths.

**Empty filenames** are theoretically writable (length byte `0x00` + no
characters), but `CVFSListing::LoadDirectory` will `ASSERT(CheckName(...))` on
them in debug builds. In release builds (which this is) the assert is a no-op
and the empty name silently lands in the hash map.

### 3.5 Valid name characters

`IsValidVFSChar` (`VFSListing.h:94`) restricts names to:

```
[a-zA-Z0-9_.#@]
```

Any character outside this set (including spaces, hyphens, parentheses, and —
notably — `/` or `\`) is rejected. The producer (`pkutil`) enforces this
during a recursive directory scan (`pkutil.cpp:29`, `pkutil.cpp:50`); the `c`
command aborts on a bad name, the `f` ("force") command warns but proceeds.
The reader's check is a debug-only `ASSERT`, so a manually crafted archive
with non-conforming names would still load.

### 3.6 Name comparison and hashing

Both lookup (`CHashFunc`, `CNameCmp` in `VFSListing.h:13`) and the writer's
`map` use **case-insensitive** comparison (`stricmp`). The hash is a custom
two-state mix-function over `tolower`'d characters:

```c
size_t hash(string s) {
    unsigned x1 = 0x14f2affc;
    unsigned x2 = 0xfac5bd8f;
    for (char c : s) {
        x1 += 8*x2 + 0xe5fc82a9;
        x2 += 8*x1 + tolower(c);
    }
    return x1 + x2;
}
```

This affects only in-memory lookup; on-disk strings preserve their original
casing (the writer feeds `WIN32_FIND_DATA::cFileName` straight through).

---

## 4. Payload region

After the entire header tree comes the file payload region. Each file's bytes
are placed at the absolute offset stored in its `FILE_INFO::m_ulOffset`. The
producer writes them out via `CPakDirectory::SaveData` (`PakDirectory.cpp:101`)
in **the same depth-first order used for the header**:

1. Each directory's files, ordered by ascending size (matching the header order).
2. Then each subdirectory, recursively.

This means `m_ulOffset` values increase monotonically following the header
traversal, and there are no gaps between payloads. The header was sized in
advance by `CPakDirectory::GetHeaderOffset` (`PakDirectory.cpp:60`) so that
the writer's running offset (`ulHeaderOffset + 4`, `PakFile.cpp:16`) lines up
exactly with the first file's payload position.

`pkutil` aborts if a source file's size changes between the scan and the data
write (`PakDirectory.cpp:110`).

---

## 5. Reader behavior (`VFS.dll` / `CVFileSystem`)

`CreateFileSystem(path)` (`VFS.cpp:31`) builds a `CVFileSystem` for
`<path>.vfs`. The constructor (`VFileSystem.cpp:10`):

1. Opens `<path>.vfs` with `_fsopen(... "rb", _SH_DENYWR)`.
2. Validates the 4-byte magic.
3. Builds the in-memory directory tree via `CVFSListing`.
4. Closes the FILE* and reopens the same path with `CreateFile` +
   `CreateFileMapping(PAGE_READONLY)` for subsequent memory-mapped reads.

### 5.1 Override priority (loose files win)

When opening a file by VFS path `pszName`, the reader first tries to satisfy
the request **outside** the archive (`VFileSystem.cpp:86`, `:118`):

```c
fopen("<archive-path>\\" + pszName, ...)   // try loose file alongside archive
```

If a loose file at that path exists on disk, it is used and the archive entry
is ignored. This is the mechanism by which developers/modders can hot-patch
individual assets without rebuilding the `.vfs`. Only if the loose file is
absent does the reader fall back to the archive's listing.

### 5.2 Small-file cache

Files with `m_ulSize ≤ 16 * 1024` bytes (`c_ulSmallFileSize`,
`VFileSystem.h:13`) are eligible to be promoted into the in-memory `CFSCache`
on first access (`VFileSystem.cpp:102`). Larger files are served directly from
the memory-mapped archive view (`MapViewOfFile` with the allocation-granularity
alignment fixup at `:154`).

### 5.3 Write operations are disabled

`CreateStoreObject`, `RenameFile`, and `RemoveFile` all return `NULL`/`false`
unconditionally (`VFileSystem.h:36`, `VFileSystem.cpp:161`). The VFS is
strictly read-only at runtime — modifications require re-running `pkutil`.

---

## 6. Building a VFS — `pkutil.exe`

CLI synopsis (`pkutil.cpp:195`):

```
pkutil c <archive.vfs> <source_dir> [pattern]   # create, strict name check
pkutil f <archive.vfs> <source_dir> [pattern]   # create, force (warn on bad names)
pkutil l <archive.vfs>                          # list contents
```

- `<source_dir>` is scanned recursively. Each subdirectory becomes a VFS
  subdirectory; each matching file becomes a VFS file entry.
- `pattern` (default `*.*`) is a Win32 wildcard applied to **filenames only**;
  directories are always traversed regardless of pattern. Used in `pak.xml`
  for `Video.vfs` to include only `*.mot` (`pak.xml:127`).
- `.` and `..` are skipped (`pkutil.cpp:48`).
- The `c` mode aborts if any name contains a character outside
  `[a-zA-Z0-9_.#@]`. The `f` mode warns and continues.

The asset build orchestrator (`pak.xml`) wires one VFS per top-level asset
category and a single `all` target that produces the full set.

---

## 7. Format invariants and edge cases

- **Empty file**: `m_ulSize == 0` is permitted; payload contributes zero bytes
  to the archive. Reader returns a valid but empty memory-mapped view
  (`VFileSystem.cpp:143`).
- **Empty directory**: `ulDirCount == 0 && ulFileCount == 0` is a valid
  directory block (8 bytes total).
- **Maximum name length**: 32767 bytes (writer cap). In practice 2005 asset
  names stay well under 128 bytes, so the second length byte (`>= 0x80`) is
  rarely seen.
- **Maximum file size**: 2³² − 1 bytes per file (`m_ulSize` is `u32`).
- **Maximum archive size**: 2³² − 1 bytes total (`m_ulOffset` is `u32`).
- **Endianness**: little-endian throughout (host order on the only target,
  x86-32 Windows).
- **Pathological case — duplicate names within one directory**: the writer
  refuses to add a second entry with the same name (case-insensitive,
  `PakDirectory.cpp:39`, `:48`). The reader's `hash_map` semantics mean a
  duplicate in a hand-crafted archive would assert in debug and silently
  overwrite in release.
- **File ordering inside a directory**: ascending by size in writer output
  (deterministic given the same input). Lookups don't depend on this.

---

## 8. Empirical verification

Header of `alpha/data/Scripts.vfs` (first 80 bytes):

```
00000000: 4c50 3143 0000 0000 7501 0000 0f63 735f  LP1C....u....cs_
00000010: 706c 6179 5f61 6c6c 2e62 696e 6500 0000  play_all.bine...
00000020: c833 0000 ceae f7bf 056e c401 1469 7465  .3.......n...ite
00000030: 6d5f 6275 7261 685f 7365 7275 6d2e 6269  m_burah_serum.bi
00000040: 6e74 0000 002d 3400 0004 7c45 c905 6ec4  nt...-4...|E..n.
```

Decoded:

| Offset | Bytes               | Field                       | Value                       |
|-------:|---------------------|-----------------------------|-----------------------------|
| 0x00   | `4C 50 31 43`       | magic                       | `"LP1C"`                    |
| 0x04   | `00 00 00 00`       | root `ulDirCount`           | 0                           |
| 0x08   | `75 01 00 00`       | root `ulFileCount`          | 373                         |
| 0x0C   | `0F`                | name length                 | 15                          |
| 0x0D   | `63 73 5F … 62 69 6E` | name                      | `cs_play_all.bin`           |
| 0x1C   | `65 00 00 00`       | `m_ulSize`                  | 101                         |
| 0x20   | `C8 33 00 00`       | `m_ulOffset`                | 0x33C8 = 13256              |
| 0x24   | `CE AE F7 BF 05 6E C4 01` | `m_ChTime`            | FILETIME                    |
| 0x2C   | `14`                | next name length            | 20                          |
| 0x2D   | `69 74 65 6D … 2E 62 69 6E` | name                | `item_burah_serum.bin`      |
| 0x41   | `74 00 00 00`       | `m_ulSize`                  | 116                         |
| …      | …                   | …                           | …                           |

The 373-file count matches the 373 compiled scripts known to live in
`Scripts.vfs` (see [pipeline.md](pipeline.md)). The first listed file
`cs_play_all.bin` is the smallest, consistent with the size-ordered writer.

---

## 9. Cross-references

- Engine-side consumer integration: `IFileSystem` interface, exported from
  `VFS.dll` as `CreateFileSystem(const char *pszPath)`.
- `cargo/scripts.vfs` uses the same format (verifiable via `pkutil l`).
- Loose-file override (§5.1) is the standard way to test modified single
  assets without rebuilding the archive.
