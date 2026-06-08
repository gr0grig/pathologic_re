# Pathologic 2005 — Справочник идентификаторов событий

Сопоставление номеров событий на уровне скриптов с их именами в исходниках оригинальной игры.

## Две системы нумерации

Исходники 2005 года используют **две независимые схемы нумерации** для событий:

1. **Идентификаторы событий скриптов** — объявляются в заголовках `.sci` через директиву `event Name N;`.
   Эти ID зашиты в скомпилированные `.bin`-файлы скриптов и используются скриптами для
   регистрации обработчиков (инструкции `EventEnable` / `EventDisable`).
2. **C++ enum `GAME_EVENT_TYPE`** — внутренний C++ порядок классов событий
   (`SRC/PlagueCity/Game/Game/Events.h`, строки 20–35). Эти значения enum **не**
   совпадают с идентификаторами скриптов; они используются только внутренне для диспетчеризации по типу
   (`IGame::GetType()`).

Мостом между ними служит `CGameXxx::SendScriptEvent()` в
`SRC/PlagueCity/Game/Game/Events.cpp`, который вызывает
`pScript->SendEvent(<script-id>, ...)`. Сопоставление C++ класса с ID скрипта
извлечено из этих вызовов `SendEvent()` ниже.

---

## Основные игровые события — `std.sci`

Источник: `SRC/Scripts/script_sources/std.sci` (строки 4–53).

Привязываются к каждому игровому/квестовому объекту через `EventEnable(<ID>)`.

| Script ID | Имя в скрипте (`std.sci`)   | C++ класс (`Events.h/Events.cpp`)   | Значение enum `GAME_EVENT_TYPE` |
|----------:|-----------------------------|-------------------------------------|------------------------------|
|         0 | `OnUse`                     | `CGamePlayerUse`                    | `GAME_EVENTT_PLAYERUSE` (0)  |
|         1 | `OnSee`                     | `CGameSee`                          | `GAME_EVENTT_SEE` (1)        |
|         2 | `OnStopSee`                 | `CGameStopSee`                      | `GAME_EVENTT_STOPSEE` (2)    |
|         3 | `OnHear`                    | `CGameHear`                         | `GAME_EVENTT_HEAR` (3)       |
|         4 | `OnStopHear`                | `CGameStopHear`                     | `GAME_EVENTT_STOPHEAR` (4)   |
|         5 | `OnLoad`                    | `CGameActorLoad`                    | `GAME_EVENTT_ACTORLOAD` (5)  |
|         6 | `OnUnload`                  | `CGameActorUnload`                  | `GAME_EVENTT_ACTORUNLOAD` (6)|
|         7 | `OnTimer`                   | `CGameTimer`                        | `GAME_EVENTT_TIMER` (7)      |
|         8 | `OnRegionChange`            | `CGameRegionChange`                 | `GAME_EVENTT_REGION_CHANGE` (8) |
|         9 | `OnGameTime`                | `CGameGameTime`                     | `GAME_EVENTT_GAME_TIME` (9)  |
|        10 | `OnCollision`               | `CGameCollision`                    | `GAME_EVENTT_COLLISION` (10) |
|        11 | *(нет псевдонима в скрипте)*| `CGameDialogReply`                  | `GAME_EVENTT_DIALOG_REPLY` (11) |
|        12 | `OnMusicChange`             | `CGameMusicChange`                  | `GAME_EVENTT_MUSIC_CHANGE` (12) |
|        13 | `OnPlayerStartShooting`     | `CGamePlayerStartShooting`          | `GAME_EVENTT_PLAYER_START_SHOOTING` (13) |
|        14 | `OnPlayerStopShooting`      | `CGamePlayerStopShooting`           | `GAME_EVENTT_PLAYER_STOP_SHOOTING` (14) |
|        15 | `OnPlayerHolsterWeapon`     | `CGamePlayerHolsterWeapon`          | `GAME_EVENTT_PLAYER_HOLSTER_WEAPON` (17) |
|        16 | `OnPropertyChange`          | `CGamePropChanged`, `CGamePropChanged2` | `GAME_EVENTT_PROP_CHANGED` (18), `..._PROP_CHANGED2` (19) |
|        17 | `OnAttacked`                | `CGameAttacked`                     | `GAME_EVENTT_ATTACKED` (20)  |
|        18 | `OnAction`                  | `CGameAction`                       | `GAME_EVENTT_ACTION` (21)    |
|        19 | `OnPlayerLand`              | `CGamePlayerLand`                   | `GAME_EVENTT_PLAYER_LAND` (22) |
|        20 | `OnPlayerStartWalking`      | `CGamePlayerStartWalking`           | `GAME_EVENTT_PLAYER_START_WALKING` (23) |
|        21 | `OnPlayerStopWalking`       | `CGamePlayerStopWalking`            | `GAME_EVENTT_PLAYER_STOP_WALKING` (24) |
|        22 | `OnHit`                     | `CGameHit`                          | `GAME_EVENTT_HIT` (25)       |
|        23 | `OnIntersection`            | `CGameIntersection` *(bIntersect=true)* | `GAME_EVENTT_INTERSECTION` (27) |
|        24 | `OnKeyDown`                 | `CGameKeyDown`                      | `GAME_EVENTT_KEY_DOWN` (28)  |
|        25 | `OnKeyUp`                   | `CGameKeyUp`                        | `GAME_EVENTT_KEY_UP` (29)    |
|        26 | `OnTrigger`                 | `CGameTrigger`                      | `GAME_EVENTT_TRIGGER` (30)   |
|        27 | `OnStopIntersection`        | `CGameIntersection` *(bIntersect=false)* | `GAME_EVENTT_STOPINTERSECTION` (31) |
|        28 | `OnActorStuck`              | `CGameActorStuck`                   | `GAME_EVENTT_ACTOR_STUCK` (32) |
|        29 | *(не используется)*         | `CGameInventoryChange` *(удалён; см. `Events.cpp:437`)* | — |
|        30 | `OnPlayerDamage`            | `CGamePlayerDamage`                 | `GAME_EVENTT_PLAYER_DAMAGE` (36) |
|        31 | `OnReputationChange`        | `CGameReputationChange`             | `GAME_EVENTT_REPUTATION_CHANGE` (37) |
|        32 | `OnDispose`                 | `CGameDispose`                      | `GAME_EVENTT_DISPOSE` (38)   |
|        33 | `OnInventoryAddItem`        | `CGameInventoryAddItem`             | `GAME_EVENTT_INVENTORY_ADDITEM` (33) |
|        34 | `OnInventoryRemoveItem`     | `CGameInventoryRemoveItem`          | `GAME_EVENTT_INVENTORY_REMOVEITEM` (34) |
|        35 | `OnInventorySelChange`      | `CGameInventorySelChange`           | `GAME_EVENTT_INVENTORY_SELCHANGE` (35) |
|        36 | `OnPlayerStartAltShooting`  | `CGamePlayerStartAltShooting`       | `GAME_EVENTT_PLAYER_START_ALTSHOOTING` (15) |
|        37 | `OnPlayerStopAltShooting`   | `CGamePlayerStopAltShooting`        | `GAME_EVENTT_PLAYER_STOP_ALTSHOOTING` (16) |
|        38 | `OnClearPath`               | `CGameClearPath`                    | `GAME_EVENTT_CLEAR_PATH` (39) |
|        39 | `OnFallDamage`              | `CGameFallDamage`                   | `GAME_EVENTT_FALL_DAMAGE` (40) |
|        40 | `OnSteal`                   | `CGameSteal`                        | `GAME_EVENTT_STEAL` (41)     |
|        41 | `OnDeath`                   | `CGameDeath`                        | `GAME_EVENTT_DEATH` (42)     |
|        42 | `OnMessage`                 | `CGameMessage`                      | `GAME_EVENTT_MESSAGE` (43)   |
|        43 | `OnHit2`                    | `CGameHit2`                         | `GAME_EVENTT_HIT2` (26)      |
|        44 | `OnPlayerEnemy` / `OnPlayerStartSneaking` *(псевдонимы)* | *(нет отдельного класса `CGame*`)* | — |
|        45 | `OnLSHAnimationEnd` / `OnPlayerStopSneaking` *(псевдонимы)* | *(нет отдельного класса `CGame*`)* | — |
|      1000 | `OnConsole`                 | отправляется напрямую через `CScriptManager::ProcessConsoleCommand` (`ScriptManager.cpp:477`) | — |

### Примечания
- **Script ID 11 (`CGameDialogReply`)** не имеет псевдонима `event` в `std.sci` — он отправляется
  из кода диалогов, и обычные скрипты не подписываются на него по имени.
- **Script ID 16** разделяется между двумя C++ классами — `CGamePropChanged` (объект + имя,
  2 аргумента) и `CGamePropChanged2` (только имя, 1 аргумент). Скрипты различают их по арности.
- **Script ID 29** зарезервирован, но не используется — соответствующий класс `CGameInventoryChange`
  закомментирован в `Events.cpp:437` (обратите также внимание на случайную опечатку `\bool`).
- **Псевдонимы Script ID 44/45.** `std.sci` объявляет по два имени на каждый ID (`OnPlayerEnemy` /
  `OnPlayerStartSneaking` оба = 44; `OnLSHAnimationEnd` / `OnPlayerStopSneaking`
  оба = 45). На оба псевдонима ссылаются разные файлы `.sci`
  (`player_common.sci`, `player_steps.sci`); источник события определяет, какой обработчик
  сработает, по контексту.
- **Script ID 1000 (`OnConsole`)** отправляется из
  `ScriptManager.cpp:477` для консольных команд, минуя фреймворк `IGameEvent`.
- **Порядок enum `GAME_EVENT_TYPE` не связан** с идентификаторами скриптов — он отражает
  порядок добавления типов событий в C++ исходниках. Используйте только как внутренний тег типа
  при чтении C++ кода или дизассемблированного Engine.dll в IDA.

---

## События UI — `UI/ui_events.sci`

Источник: `SRC/Scripts/script_sources/UI/ui_events.sci`.

Это **отдельное** пространство идентификаторов событий, используемое скриптами UI-виджетов; оно пересекается
численно с игровыми событиями, но диспетчеризуется `CUIWindow` и компанией.

| Script ID | Имя в скрипте         | Описание                          |
|----------:|-----------------------|-----------------------------------|
|         0 | `OnDraw`              | Тик отрисовки окна                |
|         1 | `OnUpdate`            | Тик обновления окна               |
|         2 | `OnLButtonDown`       | Нажатие левой кнопки мыши         |
|         3 | `OnLButtonUp`         | Отпускание левой кнопки мыши      |
|         4 | `OnMButtonDown`       | Нажатие средней кнопки мыши       |
|         5 | `OnMButtonUp`         | Отпускание средней кнопки мыши    |
|         6 | `OnRButtonDown`       | Нажатие правой кнопки мыши        |
|         7 | `OnRButtonUp`         | Отпускание правой кнопки мыши     |
|         8 | `OnMouseMove`         | Движение мыши над окном           |
|         9 | `OnMouseEnter`        | Мышь вошла в окно                 |
|        10 | `OnMouseLeave`        | Мышь покинула окно                |
|        11 | `OnDragBegin`         | Начало перетаскивания             |
|        12 | `OnDragEnd`           | Конец перетаскивания              |
|        13 | `OnDrop`              | Получен сброс                     |
|        14 | `OnDestroyWindow`     | Окно уничтожается                 |
|        15 | `OnMouseWheel`        | Прокрутка колеса мыши             |
|        16 | `OnCursorWndChange`   | Курсор переместился к другому окну|
|       100 | `OnChar`              | Ввод текстового символа (с трансляцией) |
|       101 | `OnKeyDown`           | Нажатие клавиши (сырой VK-код)    |
|       102 | `OnKeyUp`             | Отпускание клавиши (сырой VK-код) |
|       200 | `OnMessage`           | Внутреннее UI-сообщение           |
|       201 | `OnGameMessage`       | Сообщение Game → UI               |

---

## Справка по внутреннему C++ enum

Для полноты — `GAME_EVENT_TYPE` из `SRC/PlagueCity/Game/Game/Events.h:20`:

| Значение enum | Имя                                   |
|--------------:|---------------------------------------|
| 0          | `GAME_EVENTT_PLAYERUSE`               |
| 1          | `GAME_EVENTT_SEE`                     |
| 2          | `GAME_EVENTT_STOPSEE`                 |
| 3          | `GAME_EVENTT_HEAR`                    |
| 4          | `GAME_EVENTT_STOPHEAR`                |
| 5          | `GAME_EVENTT_ACTORLOAD`               |
| 6          | `GAME_EVENTT_ACTORUNLOAD`             |
| 7          | `GAME_EVENTT_TIMER`                   |
| 8          | `GAME_EVENTT_REGION_CHANGE`           |
| 9          | `GAME_EVENTT_GAME_TIME`               |
| 10         | `GAME_EVENTT_COLLISION`               |
| 11         | `GAME_EVENTT_DIALOG_REPLY`            |
| 12         | `GAME_EVENTT_MUSIC_CHANGE`            |
| 13         | `GAME_EVENTT_PLAYER_START_SHOOTING`   |
| 14         | `GAME_EVENTT_PLAYER_STOP_SHOOTING`    |
| 15         | `GAME_EVENTT_PLAYER_START_ALTSHOOTING`|
| 16         | `GAME_EVENTT_PLAYER_STOP_ALTSHOOTING` |
| 17         | `GAME_EVENTT_PLAYER_HOLSTER_WEAPON`   |
| 18         | `GAME_EVENTT_PROP_CHANGED`            |
| 19         | `GAME_EVENTT_PROP_CHANGED2`           |
| 20         | `GAME_EVENTT_ATTACKED`                |
| 21         | `GAME_EVENTT_ACTION`                  |
| 22         | `GAME_EVENTT_PLAYER_LAND`             |
| 23         | `GAME_EVENTT_PLAYER_START_WALKING`    |
| 24         | `GAME_EVENTT_PLAYER_STOP_WALKING`     |
| 25         | `GAME_EVENTT_HIT`                     |
| 26         | `GAME_EVENTT_HIT2`                    |
| 27         | `GAME_EVENTT_INTERSECTION`            |
| 28         | `GAME_EVENTT_KEY_DOWN`                |
| 29         | `GAME_EVENTT_KEY_UP`                  |
| 30         | `GAME_EVENTT_TRIGGER`                 |
| 31         | `GAME_EVENTT_STOPINTERSECTION`        |
| 32         | `GAME_EVENTT_ACTOR_STUCK`             |
| 33         | `GAME_EVENTT_INVENTORY_ADDITEM`       |
| 34         | `GAME_EVENTT_INVENTORY_REMOVEITEM`    |
| 35         | `GAME_EVENTT_INVENTORY_SELCHANGE`     |
| 36         | `GAME_EVENTT_PLAYER_DAMAGE`           |
| 37         | `GAME_EVENTT_REPUTATION_CHANGE`       |
| 38         | `GAME_EVENTT_DISPOSE`                 |
| 39         | `GAME_EVENTT_CLEAR_PATH`              |
| 40         | `GAME_EVENTT_FALL_DAMAGE`             |
| 41         | `GAME_EVENTT_STEAL`                   |
| 42         | `GAME_EVENTT_DEATH`                   |
| 43         | `GAME_EVENTT_MESSAGE`                 |

---

## Исходные файлы

- `SRC/Scripts/script_sources/std.sci` — объявления игровых событий со стороны скриптов
- `SRC/Scripts/script_sources/UI/ui_events.sci` — объявления UI-событий со стороны скриптов
- `SRC/PlagueCity/Game/Game/Events.h` — объявления C++ классов событий и enum `GAME_EVENT_TYPE`
- `SRC/PlagueCity/Game/Game/Events.cpp` — определения `CGameXxx::SendScriptEvent()` (диспетчеризация по ID скрипта)
- `SRC/PlagueCity/Game/Engine/EventManager.cpp` — обобщённый приёмник/менеджер событий
- `SRC/PlagueCity/Game/Engine/ScriptManager.cpp:477` — отправка `OnConsole` (ID 1000)
