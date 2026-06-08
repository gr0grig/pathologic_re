# `.osc` — описание уличной сцены (XML)

- **Архив**: `Scenes.vfs` (2 файла: `city.osc`, `city_base.osc`).
- **Загрузчик**: `CSceneOutdoor::CSceneOutdoor(CWorld *, ISceneInterface *,
  ICustomSceneOutdoor *, IXMLParser *)` — `Game/Engine/SceneOutdoor.cpp:85`.
- **XML-парсер**: тот же `CSimpleXML`, что и в [`.isc`](isc.md).

---

## 1. Формат

`.osc` — уличный аналог [`.isc`](isc.md). Тот же XML-контейнер, тот же
механизм наследования через `<reference filename="…">`, те же блоки
`<Actor>` / `<Group>` / `<SceneLocators>` / `<PathFinding>` / `<Cache>`.

Отличия:

| Section          | `.isc`                                        | `.osc`                                            |
|------------------|-----------------------------------------------|--------------------------------------------------|
| Main geometry    | `<Level>name</Level>` — static BSP mesh       | `<Land>name</Land>` — terrain "Land" actor      |
| Map UI           | rare                                          | `<Map FileName="city.map"/>` typical            |
| Regions          | absent                                        | `<Regions FileName="regions.xml"/>` typical     |
| Sky              | implicit via level                            | `CRenderer::CreateSkyBox()` always              |
| Rain             | absent                                        | `CRenderer::CreateRainGeometry()` always        |
| Weather          | usually fixed                                 | `WeatherData*.cpp` drives swappable schemes     |

В остальном схема идентична.

---

## 2. Развёрнутый пример

`Scenes.vfs/city.osc` (30 710 байт), сокращённо:

```xml
<Scene>
    <Name>city</Name>
    <reference filename="city_base.osc" node="Scene"/>

    <Group id="0"/>
    <Group id="1"/>
    …
    <Group id="116"/>

    <Map FileName="city.map"/>
    <Regions FileName="regions.xml"/>

    <Actor Name="…" StaticID="…" Extras="…" Location="…"/>
    …
</Scene>
```

`Scenes.vfs/city_base.osc` несёт тяжёлый список актёров (тысячи зданий,
пропсов, источников света). Оба файла — XML; `city.osc` добавляет поверх
группировки и ссылки на UI.

---

## 3. Элементы, уникальные для `.osc`

### 3.1 `<Land>actor_name</Land>`

**Обязательный.** Называет актёра ландшафта (noext-файл размещения в
[Actors.vfs](actor_placement.md)). Этот актёр, в свою очередь, ссылается на
карту высот `.mesh` и набор текстур ландшафта.

### 3.2 `<Map FileName="city.map"/>`

Называет бинарный UI-файл карты мира в `Scenes.vfs`. См. [map.md](map.md).
`CSceneOutdoor` открывает его, когда игрок нажимает клавишу карты мира.

### 3.3 `<Regions FileName="regions.xml"/>`

Отдельный XML-файл (лежит в `World.vfs/regions.xml`), который разбивает
уличную карту на полигональные **регионы** — используется системами
музыки/погоды (`MusicRegionData.cpp`), зонами окружающего звука и системой
подсветки карты мира. См. [world_xml.md](world_xml.md).

### 3.4 Настройка погоды

Наследуется из `world.xml` (`World.vfs`) — уличная сцена не объявляет погоду
повторно, она лишь слушает переходы между регионами.

---

## 4. Поиск пути

`<PathFinding DataFile="city.osc.pfd"/>` читается **синхронно** конструктором
(`SceneOutdoor.cpp:152-163`) в объект `CPathFinding` через `CStringReader`,
возвращённый `CreateMappedLoadObject` поверх `Scenes.vfs`. Бинарную раскладку
см. в [pfd.md](pfd.md).

21 файл `.pfd` в альфа-сборке — в основном `*.isc.pfd` для помещений;
`city.osc.pfd` отсутствует в перечне архива в альфе — возможно, уличный
навмеш перегенерируется при загрузке сцены, а не поставляется.

---

## 5. Сжатие

Отсутствует. Обычный XML.

---

## 6. Перекрёстные ссылки

- Помещённый аналог: [isc.md](isc.md).
- Актёр ландшафта: noext-файл размещения в [actor_placement.md](actor_placement.md).
- Битмап UI города: [map.md](map.md).
- Навмеш: [pfd.md](pfd.md).
- XML переопределений для актёра: [actor_xml.md](actor_xml.md).
- Определения регионов: [world_xml.md](world_xml.md).
