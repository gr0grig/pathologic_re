# World `.xml` — конфигурация мира верхнего уровня

- **Архив**: `World.vfs` (5 файлов).
- **Файлы**:
  - `world_danko.xml` (11.2 КБ) — корневой дескриптор мира для кампании
    Данко (единственной кампании в альфе).
  - `items.xml` (39.4 КБ) — глобальная база данных предметов.
  - `items_base.xml` (8.3 КБ) — общие описания классов предметов.
  - `sounds.xml` (237 байт) — глобальные именованные звуковые алиасы.
  - `danko_hands.xml` (406 байт) — отображение оружие → ригу рук.
- **Загрузчик**: `CGameWorld::Load(...)` —
  `Game/Game/GameWorld.cpp`, особенно `GameWorld.cpp:1145` для
  `LoadSoundList`.
- **Связывание**: движок ищет world XML, именованный в
  `Config/init.cfg` (`World="world_danko.xml"`), и загружает его при старте.

---

## 1. Корень: `<World>` (только `world_danko.xml`)

`world_danko.xml` — это **манифест кампании**. Он перечисляет каждую сцену,
используемую кампанией, называет bootstrap-скрипты (мир / погода / музыка)
и наследует вспомогательные базы данных через `<reference filename=…>`.

```xml
<World>
    <reference filename="items.xml"/>
    <reference filename="danko_hands.xml"/>
    <reference filename="sounds.xml"/>

    <Script>world_danko.bin</Script>
    <Weather>
        <Script>weather.bin</Script>
    </Weather>
    <Music>
        <Script>music.bin</Script>
    </Music>
    <OutdoorScene>city</OutdoorScene>
    <Scenes>
        <Outdoor>city.osc</Outdoor>
        <Indoor>vagon_mishka.isc</Indoor>
        …
    </Scenes>
</World>
```

### 1.1 Элементы

| Element                       | Meaning                                                                                                        |
|-------------------------------|----------------------------------------------------------------------------------------------------------------|
| `<reference filename="…"/>`   | XML inheritance — loads the named file into this place (same mechanism as in [isc.md](isc.md)).             |
| `<Script>name.bin</Script>`   | Top-level world script (game logic, time-of-day, story flags).                                                 |
| `<Weather><Script>…</Script></Weather>` | Weather-controller script.                                                                            |
| `<Music><Script>…</Script></Music>`     | Music-region controller script.                                                                       |
| `<OutdoorScene>name</OutdoorScene>` | Name of the default outdoor scene (resolves to a child `<Outdoor>` below).                                 |
| `<Scenes>`                    | Enumerated list of scene files in this campaign.                                                               |
| `<Scenes><Outdoor>…</Outdoor></Scenes>` | One [`.osc`](osc.md) per outdoor scene.                                                              |
| `<Scenes><Indoor>…</Indoor></Scenes>`   | One [`.isc`](isc.md) per indoor scene.                                                               |

Порядок элементов `<Indoor>` — это приоритет загрузки; движок предзагружает
первые несколько и подгружает остальные по требованию.

---

## 2. `items.xml` и `items_base.xml`

### 2.1 Назначение

Глобальная **база данных предметов**. Каждый предмет инвентаря, который
игрок может держать — травы, флаконы, оружие, органы, бытовые объекты —
определяется один раз в этом файле. Блоки `<Items>` актёров в
[actor_xml.md](actor_xml.md) ссылаются на эти определения по имени.

### 2.2 Структура

```xml
<Items>
    <props>
        <peanut>
            <Description type="int">3223</Description>
            <!-- additional per-item attributes -->
        </peanut>
        <boot_army>
            <Description type="int">3224</Description>
        </boot_army>
        …
    </props>
</Items>
```

Блок `<props>` содержит по одному потомку на имя предмета. Распознаваемые
подэлементы на предмет (извлечены из `Game/Game/WeaponData.cpp` и
связанных загрузчиков):

| Sub-element              | Type        | Meaning                                                            |
|--------------------------|-------------|--------------------------------------------------------------------|
| `<Description>`          | `int`       | String-database ID for the inspect-screen description ([dat_strings.md](dat_strings.md)). |
| `<Icon>`                 | string      | Filename of the UI inventory icon (in `Textures.vfs`).             |
| `<Class>`                | string      | Item class (`weapon`, `medical`, `food`, `quest`, …).              |
| `<Weapon>`               | substruct   | Weapon-specific stats (damage, range, ammo type). See `WeaponData.cpp`. |
| `<Stack>`                | `int`       | Max stack size in inventory.                                       |
| `<Value>`                | `int`       | Default monetary value for the trade UI.                            |
| Plus per-actor flags and script tie-ins.                                                                                      |

`items_base.xml` несёт общие умолчания, которые `items.xml` затем расширяет
через наследование `<reference>` — тот же паттерн, что в
[isc.md](isc.md): крошечные override-файлы ссылаются на более крупные базы.

---

## 3. `sounds.xml` — мировые алиасы окружения/SFX

Плоский список именованных звуковых алиасов, используемых скриптами и
переопределениями:

```xml
<sounds>
    <thunder1>Thunder1.ogg</thunder1>
    <thunder2>Thunder2.ogg</thunder2>
    <thunder3>Thunder3.ogg</thunder3>
    <givemoney>givemoney.ogg</givemoney>
    <giveitem>giveitem.ogg</giveitem>
    <mapmark>mapmark.ogg</mapmark>
</sounds>
```

Каждый тег — это алиас, видимый из скрипта; тело — имя `.ogg`-файла,
разрешаемое в `Sounds.vfs`. Загружается `LoadSoundList`
(`GameWorld.cpp:1145`).

Отличается от блоков `<Sounds>` отдельных актёров в
[actor_xml.md](actor_xml.md): эти **глобальны для мира** и адресуются из
любого скрипта как `PlaySound(NULL, "thunder1")`.

---

## 4. `danko_hands.xml` — карта оружие → риг рук

Маленькая таблица, сопоставляющая каждый ID предмета-оружия с мешем рук,
который должен отрисовываться, когда оно экипировано:

```xml
<Hands>
    <Weapon FileName="danko.hand">empty</Weapon>
    <Weapon FileName="danko.hand">scalpel</Weapon>
    <Weapon FileName="danko.hand">lockpick</Weapon>
    <Weapon FileName="danko.hand">knife</Weapon>
    <Weapon FileName="danko.hand">revolver</Weapon>
    <Weapon FileName="danko.hand">rifle</Weapon>
    <Weapon FileName="danko.hand">ognemet</Weapon>
    <Weapon FileName="danko.hand">bottle</Weapon>
</Hands>
```

| Attribute   | Meaning                                                       |
|-------------|---------------------------------------------------------------|
| `FileName`  | A [`.hand`](hand.md) mesh in `Geometries.vfs`.                |
| body text   | Item name (matches an `<Items>` entry).                        |

Всё оружие в этой кампании отображается на `danko.hand`, потому что Данко —
единственный играбельный персонаж от первого лица в альфе — каждое оружие
использует его руки с разным дочерним мешем оружия.

---

## 5. Сжатие

**Отсутствует.** Все файлы `World.vfs` — это обычный XML.

---

## 6. Перекрёстные ссылки

- Формат файла сцены: [isc.md](isc.md), [osc.md](osc.md).
- Предметы, на которые ссылаются актёры: [actor_xml.md](actor_xml.md) §3.4.
- ID строк, на которые ссылается `<Description>`: [dat_strings.md](dat_strings.md).
- Меш рук, на который ссылается `<Weapon FileName>`: [hand.md](hand.md).
- Скрипты World/Weather/Music: [bin.md](bin.md).
