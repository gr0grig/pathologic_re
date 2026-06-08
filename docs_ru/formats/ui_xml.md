# UI `.xml` — определения диалогов / виджетов

- **Архив**: `UI.vfs` (17 файлов).
- **Примеры**: `playerstat.xml`, `game_pers_choose.xml`, `mail.xml`,
  `dialog.xml`, `diary.xml`, `gamemenu.xml`, `inventory.xml`,
  `worldmap.xml`, `playerstat.xml`.
- **Загрузчик**: `CUIManager::LoadForm(...)` —
  `Game/UI/UIManager.cpp:348` и окружающие создатели контекстов
  (`UIDialogContext.cpp`, `UIDiaryContext.cpp`, `UIMessageContext.cpp`,
  `UIGameMenuContext.cpp`, `UIInventoryContext.cpp`, `UIMapContext.cpp`,
  `UIWindowContext.cpp`).

---

## 1. Назначение

Каждый `.xml`-файл в `UI.vfs` определяет **одну UI-форму** (окно, диалог,
HUD-оверлей) плюс статические ассеты, на которые она ссылается — фоновые
изображения, звуки на переходах, курсоры, дочерние виджеты. Формат
иерархический: `<form>` может содержать вложенных `<form>`-детей для
композиции сложных раскладок.

XML парный к атрибуту `<script>`, который называет скрипт [`.bin`](bin.md)
(в `Scripts.vfs`), задающий поведение формы.

---

## 2. Корневой элемент: `<form>`

Корень каждого UI-XML — тег `<form>`:

```xml
<form name="ui_game_pers_choose" x="160" y="100" w="480" h="200"
      script="ui_game_pers_choose.bin" context="gamemenu">
    …
</form>
```

### 2.1 Атрибуты

| Attribute | Type     | Meaning                                                          |
|-----------|----------|------------------------------------------------------------------|
| `name`    | string   | Symbol for inter-form references and script lookups. Often elided on root if the file name is sufficient. |
| `x`, `y`  | int      | Top-left corner in screen pixels (assume 800×600 reference resolution; the renderer rescales). |
| `w`, `h`  | int      | Size in pixels.                                                  |
| `script`  | string   | `.bin` script bound to this form.                                |
| `context` | string   | Optional UI context name (`gamemenu`, `inventory`, `dialog`, `worldmap`, `mainmenu`). Controls input focus + render layer. |

Формы без атрибута `context` монтируются в **стандартный** HUD-контекст и
рендерятся каждый кадр, когда мир виден.

---

## 3. Распространённые дочерние элементы

### 3.1 `<image>`

Текстурированный прямоугольник. Атрибуты называют алиас изображения,
используемый скриптом; **тело элемента** — имя файла текстуры.

```xml
<image name="default" x="0" y="0" w="1" h="1">ui/ui_hero_danko_off.tga</image>
```

| Attribute | Meaning                                                                       |
|-----------|-------------------------------------------------------------------------------|
| `name`    | Script-side alias; multiple `<image>` children with different names act as named "states". |
| `x`, `y`  | Position **relative to the parent form** in normalised coords. `0..1` covers the form's full rect. |
| `w`, `h`  | Size in the same normalised coords. `1 × 1` means "fill the form". |

Путь к текстуре разрешается в `Textures.vfs` (расширение подсказывается
телом — допустимы `.tex` / `.png` / `.tga`). См.
[tex.md](tex.md), [png_tga.md](png_tga.md).

### 3.2 `<sound>`

Называет `.ogg` (разрешается в `Sounds.vfs` — см. [ogg.md](ogg.md)):

```xml
<sound name="mail" stream="0" loop="0">mail_received.ogg</sound>
```

| Attribute | Meaning                                          |
|-----------|--------------------------------------------------|
| `name`    | Script-side alias.                               |
| `stream`  | `1` = streaming playback (long music); `0` = preload. |
| `loop`    | `1` = loop; `0` = one-shot.                      |

Скрипт запускает воспроизведение через `PlaySound(self, "mail")` и т. п.

### 3.3 `<cursor>`

Определяет кликабельный хотспот, который меняет спрайт курсора и направляет
события клика в дочерний скрипт.

```xml
<cursor name="default" script="ui_cursor.bin" w="32" h="32">
    <image name="default" x="0" y="0" w="1" h="1">ui/ui_cursor.tga</image>
</cursor>
```

Имеет собственный вложенный `<image>` (спрайт курсора).

### 3.4 `<font>`

Выбирает шрифт из `Fonts.vfs` (см. [ft.md](ft.md)):

```xml
<font name="default" face="arial_14_cyr.ft" colour="200 200 180"/>
```

### 3.5 Вложенная `<form>`

Дочернее окно. Те же атрибуты, что и у корня; координаты — абсолютные
экранные пиксели (не относительные). Дочерние формы могут иметь собственный
`script` и не наследуют от родителя ничего, кроме порядка отрисовки.

```xml
<form name="danko_button" x="160" y="205" w="152" h="190"
      script="ui_game_button_highlight.bin">
    <image name="default"   x="0" y="0" w="1" h="1">ui/ui_hero_danko_off.tga</image>
    <image name="highlight" x="0" y="0" w="1" h="1">ui/ui_hero_danko.tga</image>
</form>
```

---

## 4. Семантика координат

- **`<form>`**: координаты в абсолютных опорных пикселях.
- **Прямоугольник тела `<image>` / `<cursor>`**: координаты в
  **нормированных** единицах `[0, 1]` относительно содержащей формы.
  `(0, 0, 1, 1)` = «растянуть, чтобы заполнить форму».

Такое разделение позволяет дочерней форме менять размер без ручного
обновления её внутренних изображений.

---

## 5. Привязка скрипта

Атрибут `script` каждой формы называет `.bin` (в `Scripts.vfs`), чья задача
`init()` получает форму как `this`. Скрипт может:

- Показывать/скрывать именованных потомков (`SetImage`, `SetVisible`).
- Реагировать на события мыши/клавиатуры (`OnKey`, `OnClick` — см.
  [`../script_api.md`](../script_api.md)).
- Проигрывать звуки по алиасу.
- Менять изображения по имени (соглашение многосостоянности
  `default` / `highlight` / `pressed` целиком закодировано на стороне
  скрипта).

---

## 6. Сжатие

**Отсутствует.** Простой XML.

---

## 7. Перекрёстные ссылки

- Шрифт со стороны рендера: [ft.md](ft.md).
- Текстуры: [tex.md](tex.md), [png_tga.md](png_tga.md).
- Звуки: [ogg.md](ogg.md).
- Сторона скрипта: [bin.md](bin.md) и [`../script_api.md`](../script_api.md).
- UI карты мира привязан к [map.md](map.md).
