# Инвентарь, предметы и оружие

Как движок моделирует инвентари игрока и NPC, определения предметов
и оружие.

- **Определения предметов**: `World.vfs/items.xml` (+ `items_base.xml`).
  См. [`formats/world_xml.md`](formats/world_xml.md) §2.
- **Инвентарь актора**: блок `<Items>` в `Actors.vfs/<name>.xml`.
  См. [`formats/actor_xml.md`](formats/actor_xml.md) §3.4.
- **Исходные файлы** (все в `SRC/PlagueCity/Game/Game/`):
  - `IInvItemDatabase.h`, `IInvItemContainer.h`, `IInvItemInfo.h`,
    `IInvItemProxy.h`, `IInvItemSubContainer.h`
  - `InvItemClass.{cpp,h}` — метаданные конкретного типа предмета.
  - `InvItemContainer.{cpp,h}` — обобщённый контейнер.
  - `InvItemContainerBase.{cpp,h}` — хранилище-бэкенд.
  - `InvItemMultiContainer.{cpp,h}` — мультисекционные контейнеры (например,
    инвентарь игрока со слотами экипировки + свободными слотами).
  - `InvItemSubContainer.{cpp,h}` — субконтейнер для стэкинга.
  - `WeaponData.{cpp,h}` — блок характеристик оружия.
  - `HandsData.{cpp,h}` / `HandsDesc.{cpp,h}` — привязка к риггу рук
    от первого лица.

---

## 1. Уровни абстракции

```
IInvItemDatabase          (one per world)
   │
   │  contains many
   ▼
IInvItemInfo              (per item *type*, e.g. "fenol")
   │
   │  instantiated as
   ▼
IInvItemProxy             (per stack — points back at IInvItemInfo + count)
   │
   │  held in
   ▼
IInvItemContainer         (per actor inventory or static container)
```

- **`IInvItemInfo`** — статический прототип: имя, ID строки описания,
  иконка, базовая стоимость, вес, лимит стэка, флаги класса (оружие /
  еда / медицина / квест).
- **`IInvItemProxy`** — рантайм-экземпляр стэка: ссылается на
  `IInvItemInfo`, хранит количество и может нести данные конкретного
  стэка (текущий заряд, количество патронов для оружия).
- **`IInvItemContainer`** — держатель. Живёт у актора или у скриптового
  контейнера (`ACTOR_SCRIPTED_CONTAINER` = id 18).

---

## 2. База данных предметов — `items.xml`

База данных — объединение `items.xml` и `items_base.xml`.
Структура верхнего уровня:

```xml
<Items>
    <props>
        <peanut>
            <Description type="int">3223</Description>
            <Icon>ui/items/peanut.tga</Icon>
            <Class>food</Class>
            <Stack>10</Stack>
            <Value>4</Value>
        </peanut>
        <revolver>
            <Description type="int">3245</Description>
            <Icon>ui/items/revolver.tga</Icon>
            <Class>weapon</Class>
            <Stack>1</Stack>
            <Weapon>
                <Damage>35</Damage>
                <Range>500</Range>
                <Ammo>bullets</Ammo>
            </Weapon>
        </revolver>
        …
    </props>
</Items>
```

Под-элементы для каждого предмета, распознаваемые `CInvItemClass::CInvItemClass`:

| Под-элемент     | Тип        | Значение                                                              |
|-----------------|------------|----------------------------------------------------------------------|
| `<Description>` | `int`      | ID строки в базе строк для описания на экране осмотра.                |
| `<Icon>`        | `string`   | Путь к иконке UI (в `Textures.vfs`).                                  |
| `<Class>`       | `string`   | Класс предмета: `weapon`, `medical`, `food`, `quest`, `tool`, `ammo` и т. д.|
| `<Stack>`       | `int`      | Максимальный размер стэка в инвентаре. `1` для уникальных предметов.  |
| `<Value>`       | `int`      | Базовая торговая стоимость.                                           |
| `<Weight>`      | `float`    | Вес единицы (нагрузка).                                               |
| `<Weapon>`      | substruct  | Характеристики оружия — см. §3.                                       |
| `<Stat>`        | substruct  | Опциональный блок бонусов к характеристикам при ношении / экипировке. |
| `<Use>`         | string     | Имя скриптовой функции, вызываемой при использовании.                 |

`items_base.xml` определяет базовый набор; `items.xml` расширяет/переопределяет
его через наследование `<reference filename="items_base.xml"/>`
(тот же механизм, что и в XML сцен — см. [`formats/isc.md`](formats/isc.md) §2.2).

---

## 3. Блок оружия

Внутри тела предмета:

```xml
<Weapon>
    <Damage>35</Damage>            <!-- per-shot damage              -->
    <Range>500</Range>             <!-- max effective range          -->
    <Ammo>bullets</Ammo>           <!-- item name of compatible ammo -->
    <Capacity>6</Capacity>         <!-- magazine size               -->
    <ReloadTime>2.5</ReloadTime>   <!-- seconds                     -->
    <Sound>revolver_fire</Sound>   <!-- world-level <sounds.xml> alias -->
    <Mesh>revolver.mesh</Mesh>     <!-- 3rd-person weapon mesh      -->
    <HandPose>revolver</HandPose>  <!-- 1st-person hand pose name   -->
</Weapon>
```

Разбирается в `CWeaponData::CWeaponData(ICreateParams *)` в
`WeaponData.cpp`. Значение `<HandPose>` отображается в запись `<Weapon>`
в `World.vfs/danko_hands.xml` (см.
[`formats/world_xml.md`](formats/world_xml.md) §4), которая в свою
очередь указывает на ригг `.hand`.

---

## 4. Контейнеры

`CInvItemContainer` (`InvItemContainer.cpp`) — массив слотов фиксированной
ёмкости. Каждый слот — это `IInvItemProxy *` или `NULL`.

Операции:

- `AddItem(infoOrProxy, count)` — попытка добавления; объединяет с
  существующими стэками там, где это возможно. Возвращает `false`,
  если ёмкость исчерпана.
- `RemoveItem(slot, count)` — декремент. Удаляет стэк, когда
  count достигает 0.
- `FindItemByName(name)` — линейный поиск; возвращает первый
  совпадающий прокси.
- `Iterate(IItemEnumerator *)` — паттерн «посетитель».

### 4.1 `CInvItemMultiContainer`

Специальный контейнер с **именованными подсекциями**, используется игроком:

```
default:    free-form item slots
equipment:  worn-item slots (hat, coat, …)
quickbar:   numbered fast-use slots
```

Каждая секция — это `CInvItemSubContainer` со своей ёмкостью.

### 4.2 Ёмкость

Ёмкость для конкретного актора берётся из XML-элемента
`<ContainerCapacity>` в Extras актора (см.
[`formats/actor_xml.md`](formats/actor_xml.md) §3.8) или по умолчанию
из `CONTAINER_CAPACITY` в `Game/Game/Config.h`.

---

## 5. Инвентарь актора при старте сцены

При создании актора блок `<Items>` заполняет контейнер:

```xml
<Items>
    <peanut amount="3"/>
    <bandage amount="2"/>
    <revolver/>            <!-- amount defaults to 1 -->
</Items>
```

Обрабатывается `CInvItemContainer::AddInvItemsFromParams` (вызывается из
конструктора каждого класса актора).

---

## 6. Сохранение / загрузка

`CInvItemContainer::SaveState` (`InvItemContainerBase.cpp`) пишет
количество слотов, затем поэлементно `IInvItemProxy*`-ссылки через
механизм фабрики (см. [save_format.md](save_format.md)).
Сами `IInvItemInfo`-объекты загружаются один раз на старте мира из
`items.xml` и никогда не сериализуются — в сохранениях они
идентифицируются по имени и резолвятся повторно при загрузке.

---

## 7. UI торговли

`Game/Game/TradeOverride.cpp` управляет экраном торговли «игрок↔NPC».
Использует `IInvItemInfo::GetValue()` и скриптовую функцию-модификатор
торговли для каждого NPC для ценообразования. Сам UI — это одна из
стандартных форм `UI.vfs/*.xml`; скрипт связывает её.

---

## 8. Перекрёстные ссылки

- XML-схема базы предметов:
  [`formats/world_xml.md`](formats/world_xml.md) §2.
- Блоки `<Items>` актора:
  [`formats/actor_xml.md`](formats/actor_xml.md) §3.4.
- Ригг рук оружия: [`formats/hand.md`](formats/hand.md),
  [`formats/world_xml.md`](formats/world_xml.md) §4.
- ID строк описаний:
  [`formats/dat_strings.md`](formats/dat_strings.md).
- Раскладка сохранения: [save_format.md](save_format.md).
