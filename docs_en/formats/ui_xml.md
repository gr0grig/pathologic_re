# UI `.xml` — Dialog / Widget Definitions

- **Archive**: `UI.vfs` (17 files).
- **Examples**: `playerstat.xml`, `game_pers_choose.xml`, `mail.xml`,
  `dialog.xml`, `diary.xml`, `gamemenu.xml`, `inventory.xml`,
  `worldmap.xml`, `playerstat.xml`.
- **Reader**: `CUIManager::LoadForm(...)` —
  `Game/UI/UIManager.cpp:348` and the surrounding context-creators
  (`UIDialogContext.cpp`, `UIDiaryContext.cpp`, `UIMessageContext.cpp`,
  `UIGameMenuContext.cpp`, `UIInventoryContext.cpp`, `UIMapContext.cpp`,
  `UIWindowContext.cpp`).

---

## 1. Purpose

Each `.xml` file in `UI.vfs` defines **one UI form** (window, dialog,
HUD overlay) plus the static assets it references — background images,
sound effects on transitions, cursors, child widgets. The format is
hierarchical: a `<form>` can contain nested `<form>` children to
compose complex layouts.

The XML pairs with a `<script>` attribute that names a [`.bin`](bin.md)
script (in `Scripts.vfs`) supplying the form's behaviour.

---

## 2. Root element: `<form>`

Every UI XML's root is a `<form>` tag:

```xml
<form name="ui_game_pers_choose" x="160" y="100" w="480" h="200"
      script="ui_game_pers_choose.bin" context="gamemenu">
    …
</form>
```

### 2.1 Attributes

| Attribute | Type     | Meaning                                                          |
|-----------|----------|------------------------------------------------------------------|
| `name`    | string   | Symbol for inter-form references and script lookups. Often elided on root if the file name is sufficient. |
| `x`, `y`  | int      | Top-left corner in screen pixels (assume 800×600 reference resolution; the renderer rescales). |
| `w`, `h`  | int      | Size in pixels.                                                  |
| `script`  | string   | `.bin` script bound to this form.                                |
| `context` | string   | Optional UI context name (`gamemenu`, `inventory`, `dialog`, `worldmap`, `mainmenu`). Controls input focus + render layer. |

Forms with no `context` attribute are mounted in the **standard** HUD
context and rendered every frame the world is visible.

---

## 3. Common child elements

### 3.1 `<image>`

A textured rectangle. Attributes name the image alias used by the
script; the **element body** is the texture filename.

```xml
<image name="default" x="0" y="0" w="1" h="1">ui/ui_hero_danko_off.tga</image>
```

| Attribute | Meaning                                                                       |
|-----------|-------------------------------------------------------------------------------|
| `name`    | Script-side alias; multiple `<image>` children with different names act as named "states". |
| `x`, `y`  | Position **relative to the parent form** in normalised coords. `0..1` covers the form's full rect. |
| `w`, `h`  | Size in the same normalised coords. `1 × 1` means "fill the form". |

The texture path is resolved against `Textures.vfs` (extension hinted
by the body text — `.tex` / `.png` / `.tga` accepted). See
[tex.md](tex.md), [png_tga.md](png_tga.md).

### 3.2 `<sound>`

Names an `.ogg` (resolved against `Sounds.vfs` — see [ogg.md](ogg.md)):

```xml
<sound name="mail" stream="0" loop="0">mail_received.ogg</sound>
```

| Attribute | Meaning                                          |
|-----------|--------------------------------------------------|
| `name`    | Script-side alias.                               |
| `stream`  | `1` = streaming playback (long music); `0` = preload. |
| `loop`    | `1` = loop; `0` = one-shot.                      |

The script triggers playback with `PlaySound(self, "mail")` etc.

### 3.3 `<cursor>`

Defines a clickable hotspot that swaps the cursor sprite and routes
click events to a child script.

```xml
<cursor name="default" script="ui_cursor.bin" w="32" h="32">
    <image name="default" x="0" y="0" w="1" h="1">ui/ui_cursor.tga</image>
</cursor>
```

Has its own nested `<image>` (the cursor sprite).

### 3.4 `<font>`

Selects a font from `Fonts.vfs` (see [ft.md](ft.md)):

```xml
<font name="default" face="arial_14_cyr.ft" colour="200 200 180"/>
```

### 3.5 Nested `<form>`

A child window. Same attributes as the root; coordinates are absolute
screen pixels (not relative). Child forms can have their own `script`
and inherit nothing from the parent except draw-order.

```xml
<form name="danko_button" x="160" y="205" w="152" h="190"
      script="ui_game_button_highlight.bin">
    <image name="default"   x="0" y="0" w="1" h="1">ui/ui_hero_danko_off.tga</image>
    <image name="highlight" x="0" y="0" w="1" h="1">ui/ui_hero_danko.tga</image>
</form>
```

---

## 4. Coordinate semantics

- **`<form>`**: coordinates in absolute reference pixels.
- **`<image>` / `<cursor>` body rect**: coordinates in **normalised**
  `[0, 1]` units relative to the containing form. `(0, 0, 1, 1)` =
  "stretch to fill the form".

This split lets a child form change size without manually updating its
inner images.

---

## 5. Script binding

Every form's `script` attribute names a `.bin` (in `Scripts.vfs`) whose
`init()` task receives the form as `this`. The script can:

- Show/hide named children (`SetImage`, `SetVisible`).
- React to mouse/key events (`OnKey`, `OnClick` — see
  [`../script_api.md`](../script_api.md)).
- Play sounds by alias.
- Swap images by name (the multi-state `default` / `highlight` /
  `pressed` convention is encoded purely on the script side).

---

## 6. Compression

**None.** Plain XML.

---

## 7. Cross-references

- Renderer-side font: [ft.md](ft.md).
- Textures: [tex.md](tex.md), [png_tga.md](png_tga.md).
- Sounds: [ogg.md](ogg.md).
- Script side: [bin.md](bin.md) and [`../script_api.md`](../script_api.md).
- The world map UI binds to [map.md](map.md).
