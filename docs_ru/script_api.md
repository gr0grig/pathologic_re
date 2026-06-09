# Справочник Script API

Полный справочник API функций, доступных скриптам Pathologic.
Реверс-инжиниринг выполнен по `Game.exe` (alpha/bin/Final/) с перекрёстной
проверкой по оригинальным C++ исходникам в `SRC/PlagueCity/Game/Game/*.{cpp,h}`.

Функции вызываются через два опкода байт-кода:

- **`Func`** — свободная функция, диспетчеризуемая по цепочке контекстов
  текущего скрипта (`CStdScriptContext::GetFunction`). Используется для
  «глобальных» вещей (`Sleep`, `Trace`, `rand`, `PlaySound`, `AddActor`, …).
- **`ObjFunc`** — метод конкретного объекта. Объект должен реализовывать
  `IScriptClass`; диспетчеризация идёт через `pObject->ExecuteFunction(name, args)`,
  которая ищет функцию в статической `m_ClassTable` объекта.

Функция приостанавливает скрипт (уступает один или несколько кадров перед
возвратом), если её обёртка диспетчеризации — `MakeContextLatentClass` вместо
`MakeContextClass`. Латентные функции отмечены ниже как **Latent** — на уровне
ассемблера они создают удержание стека, и VM возобновляет выполнение только
после того, как соответствующий `IScriptFunctionInst::Execute` вернёт `true`.

Аргумент 0 почти всегда является параметром **out**, когда требуется возвращаемое
значение (скрипты передают результаты через слоты `out var`, а не как возврат
из вызова функции). Последний `unsigned long`-аргумент в каждой C++ реализации
— это `ulParmCount`, который функция использует для диспетчеризации между
перегрузками с одинаковым именем — именно поэтому в таблицах ниже указано
`Params` (арность, которую должен передать скрипт).

## Цепочка диспетчеризации

```
Func opcode → IScriptContext::GetFunction(name, paramCount)

  Each concrete context chains up. For the player (CCPPlayer::CScriptContext):
    1.  CActorScriptContext      (RayTrace, Intersect, IsLoaded, …) — 11 entries
    2.  CCPPlayer::CScriptContext (HasAnimation, GetVictim, …)      — 34 entries
    3.  CStdScriptContext        (rand, Sleep, AddActor, …)        — 141 entries

  Static actors / fog / biped chain up similarly to CActorScriptContext +
  CStdScriptContext, plus their own per-class context table (Stop, MovePoint,
  PlayAnimation, FollowPath, etc.).

ObjFunc opcode → IScriptClass::ExecuteFunction(name, args)
  → object's m_ClassTable lookup (one table per concrete C++ class). The class
    tables form an inheritance chain via fall-through in ExecuteFunction:
    e.g. CActorScripted falls through to CContainerScriptClass falls through
    to CPropertyScriptClass.
```

**Перегрузки**: одинаковое имя, разный `paramCount`, разная функция — каждая
перегрузка является отдельной записью в таблице диспетчеризации, поэтому
вызов `Sleep(5)` и `Sleep(5, dt)` попадают в разные C++ реализации.

**Соглашения, используемые в таблицах**:
- `out X` — out-слот, который должен передать скрипт; функция вызывает у него `Set`.
- `var`   — variant-ячейка (int / float / bool / string / object / vector).
- `Latent`— выполнение уступает; скрипт возобновляется, когда внутренний
  func-instance сигнализирует о завершении (см. «Время жизни латентной функции» ниже).

### Время жизни латентной функции

Каждый латентный вызов конструирует `IScriptFunctionInst *`, который живёт
в списке групп контекста (`m_Groups[0]`, `m_Syncs`, `m_pCameraGroup`, и т.д.).
На каждом кадре `UpdateScriptContext` вызывает `Execute(dt)` — когда он
возвращает `true`, опкод `Hold`/`Sleep`/`Wait*` скрипта разблокируется.
Вызов `StopGroup0()` устанавливает `m_bStop` у каждого `CStoppableFunc`
в группе 0, который на следующем `Execute` немедленно сообщает о завершении
(и устанавливает опциональную переменную результата `out bool` в `false`,
сигнализируя «остановлено, а не завершено естественным образом»).

---

## 1. CStdScriptContext — Глобальные функции (141 запись)

Источник: `Game/Game/StdScriptContext.{h,cpp}`. Монтируется как самый глубокий
fallback-контекст для каждого актора со скриптом. Единственное, на что
`CStdScriptContext` полагается из подклассов, — это `GetWorld()`; всё
остальное использует кэшированный `m_pContextClass` (актор/владелец, к которому
прикреплён скрипт).

### Отладка

| Function | Params | Description |
|----------|--------|-------------|
| `bpt()` | 0 | Выдаёт `int 3` — ловушка отладчика, подвешивает игру без подключённого отладчика. Полезно только во время разработки. |
| `self(out object)` | 1 | Записывает владельца скрипта (`m_pContextClass`) в out-слот — возвращает актор/объект, на котором выполняется скрипт. |
| `Trace(string)` | 1 | Выводит во внутриигровую консоль (`AddConsoleMessageReply`) с префиксом контекста (например, именем актора). |
| `Console_Error(string)` | 1 | То же, что `Trace`, но проходит через `AddConsoleMessageError` (красный, поднимает консоль). |

### Случайные числа

Использует единственный статический `CRandGenStd s_RandGen`, общий для всех
скриптовых контекстов — **не** засеивается на сохранение, поэтому идентичные
скрипты в идентичных состояниях всё равно расходятся между запусками.
`frand()` возвращает `[0, 1)`.

| Function | Params | Description |
|----------|--------|-------------|
| `rand(out float)` | 1 | `frand()` — равномерное `[0, 1)`. |
| `rand(out float, float max)` | 2 | `frand() * max` — равномерное `[0, max)`. Отрицательный `max` даёт `[max, 0)`. |
| `rand(out float, float min, float max)` | 3 | `frand() * (max-min) + min` — равномерное `[min, max)`. **Внимание:** swap не выполняется, если `min > max`. |
| `RandVec2D(out x, out y, float r)` | 2 | **Неверное имя в старых документах.** Фактически записывает единичное 2D-направление: `pVars[0]=cos(angle)`, `pVars[1]=sin(angle)` — параметр `r` не используется. Использовать два `out float`, а не `out vector`. |
| `RandVec3D(out vector)` | 1 | Равномерно распределённая точка на единичной сфере через `CVector::Random(v1, v2, v3)` (три независимых `frand()` как параметры сэмплера сферы). |
| `RandVecCone3D(out vector, vector dir, float angle)` | 3 | Случайное направление в конусе с полу-углом `angle` (радианы) вокруг `dir`. |
| `irand(out int, int max)` | 2 | Целое число `[0, max)`. Если `max < 0`, возвращает `(-max, 0]` (с обратным знаком). Использует `s_RandGen.rand(|max|)`. |

В заголовке также есть два незарегистрированных хелпера — `_ScriptRandMulti` и
`_ScriptRandOneOf` — но они **не** входят в `s_ContextEntries`, поэтому
недоступны из скриптов в этой сборке.

### Управление потоком

Семейство `sync` / `Sleep` / `GameSleep` / `Hold` помещает экземпляр-наследник
`CStoppableFunc` в `m_Groups[0]` (за исключением `sync(0)`, который попадает
в отдельный список `m_Syncs`). `StopGroup0()` отменяет всю группу одним
вызовом — каждая поставленная в очередь латентная функция этого контекста
скрипта завершается и сообщает `false` в свою переменную результата, если
таковая есть.

| Function | Params | Description |
|----------|--------|-------------|
| `sync()` | 0 | **Latent.** Уступает ровно один тик — `Execute` возвращает `false` при первом вызове и `true` при втором. Без регистрации в группе. |
| `sync(out float dt)` | 1 | **Latent.** То же, что выше, но сохраняет фактическую дельту времени кадра возобновления в out-переменную (устанавливается через `SetDeltaTime` из тика мира). Попадает в `m_Syncs`. |
| `Sleep(float secs)` | 1 | **Latent.** Пауза в реальном времени; `pResult->SetErrorMessage("Negative wait time")` при отрицательном вводе. Спит в реальных секундах тика независимо от масштаба игрового времени. |
| `Sleep(float secs, out bool finished)` | 2 | **Latent.** Как выше, но записывает `true` в out-bool, если таймер истёк естественным образом, и `false`, если `StopGroup0`/`Stop()` прервал. |
| `GameSleep(float gameSecs)` | 1 | **Latent.** Ждёт пока `world.GetGameTime() >= now + gameSecs`. Подвержен влиянию `GetGameTimeScale()`. |
| `GameSleep(float gameSecs, out bool finished)` | 2 | **Latent.** Как выше, с переменной результата «завершено-vs-остановлено». |
| `Hold()` | 0 | **Latent.** Блокирует бесконечно, пока что-то ещё не вызовет `StopGroup0()` (или скрипт не будет убит). |
| `Hold(...)` | 1 | **Latent.** Заголовок объявляет вариант с 1 аргументом, но в `s_ContextEntries` зарегистрирована только форма с 0 аргументов. Перегрузка с 1 аргументом *недоступна* в этой сборке. |
| `StopGroup0()` | 0 | Отменяет каждую латентную функцию в `m_Groups[0]` (Sleep/GameSleep/Hold/Wait*). Возвращается немедленно; отменённые латентные функции завершаются на следующем тике. |

### Таймеры и события времени

Таймеры повторяющиеся: каждый кадр `m_fTimeLeft -= dt`; когда достигает нуля,
событие `CGameTimer` отправляется каждому получателю, зарегистрированному
на этот ID таймера, и таймер перезаряжается (`m_fTimeLeft = m_fElapse`).
События времени одноразовые: они срабатывают, когда `world.GetGameTime()`
пересекает порог.

| Function | Params | Description |
|----------|--------|-------------|
| `SetTimer(int id, float interval)` | 2 | Создаёт или **заменяет** существующий таймер с тем же `id`. Интервал в секундах тика. |
| `KillTimer(int id)` | 1 | Удаляет таймер; без ошибки, если его не существовало. |
| `KillTimer(int id, out bool existed)` | 2 | Как выше; out-bool равен `true`, если таймер действительно был удалён. |
| `SetTimeEvent(int id, float gameTime)` | 2 | Планирует событие `CGameGameTime` на абсолютный порог игрового времени. **Возвращает false**, если `gameTime` уже в прошлом. Замена существующего события с тем же `id` разрешена (сначала отменяет старое). |
| `ReleaseTimeEvent(int id)` | 1 | Отменяет ожидающее одноразовое событие. No-op, если id не ожидает. |
| `GetGameTime(out float)` | 1 | Текущее игровое время в часах с эпохи игрового времени. |
| `GetGameTimeScale(out float)` | 1 | Множитель реальное→игровое время (например, 1 игровой час на 1 минуту реального времени). |
| `AdvanceGameTime(float dt)` | 1 | Прибавляет `dt` к текущему игровому времени. **Возвращает false** при отрицательном вводе (с ошибкой "Negative time"). Подсистемы **не** продвигаются корректно — использовать с осторожностью. |

### Глобальные переменные

Эти функции обращаются к `IVariableSet` на объекте custom-world у мира
(плоское отображение строковых ключей в целые числа), **не** к свойствам
отдельных акторов. Используется для глобальных флагов вроде состояния квестов.

| Function | Params | Description |
|----------|--------|-------------|
| `SetVariable(string name, int value)` | 2 | Записывает переменную; создаёт её, если отсутствует. Значение — `signed long`. |
| `GetVariable(string name, out int)` | 2 | Чтение. Возвращает 0/default, если имя не установлено. |

### Камера

`LockCamera` / `CameraPlay` / и т.д. прозрачно вызывают `LockInput()`, чтобы
установить контроллер `CCPLocked` на актор игрока — игрок не может двигаться,
смотреть, атаковать пока активна кинематическая камера.
`CameraSwitchToNormal` / `UnlockCamera` восстанавливают `CCPPlayer`. Счётчик
блокировки ведётся через свойство `"noaccess"` на акторе игрока — вызов
LockInput N раз требует N соответствующих разблокировок.

| Function | Params | Description |
|----------|--------|-------------|
| `LockCamera()` | 0 | `LockInput()`. Увеличивает noaccess. |
| `UnlockCamera()` | 0 | `UnlockInput()`. Уменьшает / удаляет noaccess. |
| `CameraPlay(string motion)` | 1 | Загружает файл `.cmot` (camera-motion) и воспроизводит в широкоэкранном режиме. Ошибка `"Camera motion file \"X\" not found"` при отсутствии. Если текущая камера уже реализует `ICameraPlayback`, она переиспользуется. |
| `CameraPlay(string motion, bool wide)` | 2 | Как выше; `wide=false` пропускает обёртку `CCameraWideScr` с letterbox. |
| `CameraPlayRel(string)` | 1 | Воспроизводит motion относительно текущего трансформа камеры (его quat+trans становится опорным кадром motion). |
| `CameraPlayRel(string, bool allowEffects)` | 2 | Как выше; bool разрешает продолжение постэффектов (blur/darken) во время воспроизведения. |
| `CameraTransit(vector pos, vector dir)` | 2 | Плавная интерполяция от текущей камеры к `(pos, dir)`. Устанавливает `CCameraTransit`. |
| `CameraSwitchToNormal()` | 0 | Возвращается к камере, прикреплённой к игроку (`CCameraAttached`). No-op, если уже прикреплена. Освобождает кинематическую группу камер. |
| `CameraWaitForPlayFinish()` | 0 | **Latent.** Уступает, пока камера воспроизведения не вызовет `OnPlayFinish`. Отменяет любую ранее ожидающую `m_pCameraGroup`. |
| `GetCameraCurrentFOV(out float)` | 1 | Текущее вертикальное FOV (радианы). 0, если камеры нет. |
| `GetCameraFarDistance(out float)` | 1 | Дальняя плоскость камеры. 0, если камеры нет. |

### Акторы и сцены

`AddActor*` перегружен и по арности, *и* по форме параметров — вариант
`AddActor` с 6 аргументами интерпретирует последнюю строку как XML-файл
override для дополнительных параметров актора (загружается из `FS_STD_ACTOR`).

| Function | Params | Description |
|----------|--------|-------------|
| `IsPlayerActor(object, out bool)` | 2 | True если `IScriptClass` переданного объекта поддерживает `AID_ActorPlayer`. |
| `FindActor(out object, string name)` | 2 | `world.GetActorByName(name)` → script class. NULL, если отсутствует. |
| `AddActor(out, string type, object scene, vector pos)` | 4 | Направление по умолчанию `(0,0,1)`. |
| `AddActor(out, string type, object scene, vector pos, vector dir)` | 5 | Явное направление. |
| `AddActor(out, string type, object scene, vector pos, vector dir, string xmlFile)` | 6 | Читает узел `Extras` из XML для create-параметров, опционально берёт под-узел `ID` как имя для поиска. |
| `AddActorByType(out, string typeName, object scene, vector pos[, dir[, xmlFile]])` | 4-6 | То же, что `AddActor`, но `typeName` ищется через `engine.GetActorTypeID()` — падает с "Actor type 'X' not found", если неизвестно. |
| `AddScriptedActor(out, string type, string script, object scene, vector pos[, vector dir])` | 5-6 | Удобство: создаёт актор с единственным create-параметром `Script=<scriptName>`. Без XML override. |
| `AddScriptedActorByType(out, string typeName, string script, object scene, vector pos[, vector dir])` | 5-6 | То же с lookup по type-ID. |
| `AddBlankActor(out, object scene, string name, string script)` | 4 | Спавнит `ACTOR_BLANK` (актор без геометрии / без физики). Размещается в позиции сцены по умолчанию. |
| `AddBlankActorFromXml(out, object scene, string name, string xmlFile)` | 4 | Как `AddBlankActor`, но extras берутся из XML-файла. |
| `AddItemActor(out, object scene, string itemName, vector pos, vector dir, string script)` | 6 | Спавнит `ACTOR_SCRIPTED_CONTAINER` с единственным встроенным предметом (`inv_<itemName>.mesh` как геометрия и одна запись инвентаря). **Баг в исходнике**: самая первая строка — `if (ulParmCount != 6 \|\| ulParmCount) return false;` — завершающий `\|\| ulParmCount` всегда истинен для 6 аргументов, поэтому **эта функция недоступна в данной сборке.** |
| `RemoveActor(object)` | 1 | `world.RemoveActor(actor)`. Скрипт актора (если есть) получает `OnDestroy` и освобождается. |
| `GetActiveScene(out object)` | 1 | Текущая отрисовываемая сцена (сцена игрока). |
| `GetSceneByName(out object, string)` | 2 | Поиск по имени сцены. NULL при отсутствии. |
| `GetMainOutdoorScene(out object)` | 1 | `IMainOutdoorSceneData::GetScene()` custom-world — обычно сцена города в Pathologic. |
| `Teleport(object actor, object scene, vector pos, vector dir)` | 4 | Перемещает актор в целевую сцену в `(pos, dir)`. По сути `world.PlaceActor`. |
| `ReplaceScene(out object, string newSceneName)` | 2 | Удаляет существующую сцену из менеджера сцен и вставляет новую в тот же слот. Используется для горячей подмены outdoor → indoor. |

### Звук и музыка

`PlaySound` требует, чтобы `GetSoundByName` разрешил зарегистрированный звук.
Параметр `bLoop` находится в индексе 1 (несмотря на то, что в комментариях
старого кода он помечен как "volume" — на самом деле это флаг повтора);
float в индексе 2 — это громкость. Финальная громкость — это
`volume * g_config->GetRealSoundsVolume()`.

| Function | Params | Description |
|----------|--------|-------------|
| `PlayGlobalMusic(string name)` | 1 | Отправляет событие `CGameMusicChange` получателю custom-world. Здесь звук фактически не воспроизводится — обрабатывается в `CGameWorld::CGameMusic`. |
| `IsExistingSound(out bool, string name)` | 2 | True если `GetSoundByName` возвращает не-NULL. |
| `PlaySound(string name)` | 1 | Воспроизводит один раз; громкость=1.0. |
| `PlaySound(string name, bool loop)` | 2 | Зацикливает, если true. |
| `PlaySound(string name, bool loop, float vol)` | 3 | Пользовательская громкость. |
| `PlaySharedSound(string)` / `PlaySharedSound(string, bool)` | 1-2 | Добавляет с `SC_FLAGS_SCENE_GLOBAL \| SC_FLAGS_NONSTOPPABLE` — переживает переходы сцен. |
| `PlayNSSound(string)` / `PlayNSSound(string, bool)` | 1-2 | Только `SC_FLAGS_NONSTOPPABLE`. NS = "non-stoppable", не "non-spatial". |
| `WaitForSoundToLoad(string)` | 1 | **Latent.** Уступает, пока `IAsyncLoaded` звука не сообщит о завершении загрузки. Возвращает `true` немедленно, если не async. |
| `PlayMovie(string filename)` | 1 | Устанавливает `CInGameMovieOverride` (полноэкранное видео). Падает, если уже активен другой override или файл не существует. |
| `QueuePlayMovie(string filename)` | 1 | Ставит фильм в очередь через `IOverrideQueue` мира, а не устанавливает немедленно. |

### UI и диалоги

Все эти функции устанавливают `ILoopOverride`, которое перехватывает обработку
ввода. Хелпер `IsOverrideActive(out bool)` позволяет скрипту увидеть,
*перекрывает ли что-то* уже. Попытка показать два override одновременно
молчаливо игнорируется на втором (возвращает `true`, ничего не делая).

| Function | Params | Description |
|----------|--------|-------------|
| `ShowMessage()` | 0 | **Latent.** Показывает последнее сообщение с `lMessage = -1`. |
| `ShowMessage(int messageIdx)` | 1 | **Latent.** Показывает сообщение по конкретному индексу. |
| `ShowMap(object map)` | 1 | **Latent.** Открывает UI карты мира, привязанный к переданному объекту `IWorldMap`. |
| `ShowDiary()` | 0 | **Latent.** Открывает дневник на текущей выбранной секции. |
| `ShowDiary(int section)` | 1 | **Latent.** Устанавливает `SetDiarySelectedSection`, затем открывает. |
| `ShowPlayerStats()` | 0 | **Latent.** Открывает UI статистики игрока. |
| `ShowWindow(string xml, bool needRender)` | 2 | **Latent.** Универсальное окно, управляемое XML. `needRender` сохраняет рендер мира позади. |
| `ShowWindow(string xml, bool needRender, bool needUpdate)` | 3 | Как выше; `needUpdate=true` сохраняет симуляцию мира. |
| `ShowWindow(string xml, bool needRender, bool needUpdate, object data)` | 4 | Как выше, плюс произвольный объект script-class, передаваемый в XML окна. |
| `GameOver(string xmlFile)` | 1 | **Latent.** Устанавливает `CGameOverOverride` с именованным сплеш-экраном. Примечание: передаётся в `SetLoopOverride(..., true)` (force-флаг). |
| `RemoveOverride()` | 0 | Принудительно вызывает `engine.SetLoopOverride(NULL)`. **Опасно** — закрывает любой активный UI. |
| `ChooseItem(object container, out object selected)` | 2 | **Latent.** Открывает диалог выбора предмета, привязанный к контейнеру; заполняет `selected`, когда пользователь делает выбор. |
| `RegisterKeyCallback(string keyName)` | 1 | Маршрутизирует именованную виртуальную клавишу в `CStdScriptContext::OnKeyDown`. Имя клавиши разрешается через `g_keys->GetVirtualKeyCode`. Ошибка `"Invalid virtual key 'X'"` при неизвестном имени. |
| `UnregisterKeyCallback(string keyName)` | 1 | Зеркало. |
| `GetVirtualKeyCode(out int, string keyName)` | 2 | Ищет код VK_. Возвращает -1, если неизвестно. |
| `IsOverrideActive(out bool)` | 1 | True если `engine.GetNextLoopOverride() != NULL`. |

### Инвентарь (база данных предметов — по item-ID, а не по контейнеру)

Эти функции запрашивают глобальный `IInvItemDatabase` на custom-world мира.
Предметы определяются в XML на диске; база данных загружает их при запуске.
`lItemID` — это индекс базы данных, **не** слот инвентаря. Используйте
`GetInvItemByName` для конвертации.

| Function | Params | Description |
|----------|--------|-------------|
| `GetInvItemByName(out int id, string name)` | 2 | ID базы данных. -1 (приведённое к long), если не найдено — скрипт видит отрицательное int. |
| `HasInvItemProperty(out bool, int id, string propName)` | 3 | True если bag свойств предмета содержит `propName`. |
| `GetInvItemProperty(out var, int id, string propName)` | 3 | Читает свойство в variant out (тип определяется массивом параметров). |
| `GetInvItemSprite(out string, int id)` | 2 | UTF-16 путь к основному спрайту предмета в инвентаре. |
| `GetInvItemSprite2(out string, int id)` | 2 | Вторичный спрайт (используется trade UI для счётчиков стеков). |
| `GetInvItemName(out string, int id)` | 2 | Локализованное имя (wide string). |
| `GetInvItemMaxStackSize(out int, int id)` | 2 | Максимум предметов в стеке для этого типа. |
| `CreateInvItem(out object)` | 1 | Выделяет свежий `CInvItemClass` без установленного ID — скрипт должен вызвать `SetItemID` / `SetItemName` / `SetProperty`, чтобы заполнить его. Новый объект подвергается сборке мусора. |

### Коллекции (Vectors и Sets)

`CScriptVector<T>` и `CScriptSet<T>` — это шаблонные контейнеры, по одной
специализации на тип элемента. Методы на **объектах коллекций** (вызываемые
через `ObjFunc`) в исходниках в **нижнем регистре** — `add`/`size`/`clear`/`in`/
`erase`/`get`/`set`/`resize`/`remove`/`find`/`in`. Старые документы ошибочно
перечисляли их в title-case.

| Function | Params | Description |
|----------|--------|-------------|
| `CreateBoolVector(out object)` | 1 | `CScriptVector<bool>`. |
| `CreateIntVector(out object)` | 1 | `CScriptVector<signed long>`. |
| `CreateFloatVector(out object)` | 1 | `CScriptVector<float>`. |
| `CreateStringVector(out object)` | 1 | `CScriptVector<CEStringW>` (wide-строки). |
| `CreateVectorVector(out object)` | 1 | `CScriptVector<CVector>` (3D-векторы векторов). |
| `CreateObjectVector(out object)` | 1 | `CScriptVector<IScriptClass *>` — хранит ссылки на объекты script-class. |
| `CreateIntSet(out object)` | 1 | `CScriptSet<signed long>`. |
| `CreateFloatSet(out object)` | 1 | `CScriptSet<float>`. |
| `CreateStringSet(out object)` | 1 | `CScriptSet<CEStringW>`. |
| `CreateObjectSet(out object)` | 1 | `CScriptSet<IScriptClass *>` с отслеживанием reference-target — автоматически удаляет уничтоженные записи. |

### Строки

| Function | Params | Description |
|----------|--------|-------------|
| `_strchr(out int, string s, string chars)` | 3 | `wcscspn(s, chars)` — индекс первого символа в `s`, который встречается в `chars`. Возвращает -1 (приведённое к long), если совпадений нет. |
| `_strsub(out string, string s, int start)` | 3 | `s.substr(start)` (UTF-16). |
| `_strsub(out string, string s, int start, int end)` | 4 | `s.substr(start, end-start)`. **Обратите внимание, второй аргумент — это `end`, а не `length`.** |
| `_strupr(string)` | 1 | `CharUpperW` — приводит к верхнему регистру in-place через временный `_wcsdup`. |
| `_strlwr(string)` | 1 | `CharLowerW` — то же. |
| `_strtoi(out int, string s)` | 2 | `wcstol(s, &end, 10)`. **Возвращает 0 при частичном парсинге** (если есть любые завершающие не-цифры, весь результат обнуляется). |
| `_strlen(out int, string)` | 2 | Длина UTF-16 в символах. |
| `_chr2str(out string, int codepoint)` | 2 | Односимвольная строка из кодовой точки `wchar_t`. |
| `GetStringByID(out string, int id)` | 2 | Ищет `id` в `IStringDatabase` движка (локализованные таблицы .lst). |

### Сообщения и дневник

Дневник — это дерево (`CDiaryEntry`) с одним виртуальным корнем, содержащим
стабильную иерархию section-id. «Сообщения» — это плоский append-only список
(`m_MessageEntries`).

| Function | Params | Description |
|----------|--------|-------------|
| `GetMessageCount(out int)` | 1 | Длина списка сообщений. |
| `GetMessage(out string title, out string text, out float gameTime, int idx)` | 4 | Разрешает `ulTitleID`/`ulTextID` через `IStringDatabase`. |
| `AddMessage(int titleID, int textID)` | 2 | Добавляет, помечая текущим игровым временем. |
| `AddMessage(int titleID, int textID, out int newIndex)` | 3 | Как выше; out записывает вставленный индекс. |
| `CreateDiaryEntry(out object, int id, int category, int textID)` | 4 | Выделяет `CDiaryEntry` (script-managed). Нужен `AddChild`, чтобы реально прикрепить. |
| `GetDiaryRoot(out object)` | 1 | Скрытый корневой `CDiaryEntry` (id=-1, category=-1, textID=-1). |
| `SetDiarySection(int)` | 1 | Устанавливает `m_lSelectedSection`, используемый `ShowDiary()`. |
| `GetDiarySection(out int)` | 1 | Читает `m_lSelectedSection`. |

Закомментированные `_ScriptAddDiaryEntry` / `_ScriptClearDiary` /
`_ScriptGetDiaryEntryCount` / `_ScriptGetDiaryEntry` в `StdScriptContext.cpp`
**не зарегистрированы** — новое API идёт через `GetDiaryRoot` и методы
ObjFunc у `CDiaryEntry` (см. §9).

### Игровые действия / События

Эти функции рассылают `IGameEvent` через `IBroadcastMessageReceiver` в сцене.
«Рассылка» итерирует каждый актор в целевой сцене и вызывает
`BroadcastMessage(&event)`, если актор реализует интерфейс получателя — так
NPC в одной сцене могут реагировать, например, на урон игроку.

| Function | Params | Description |
|----------|--------|-------------|
| `BroadcastPlayerDamage(object damager, object scene, object player)` | 3 | Отправляет `CGamePlayerDamage(player, damager)` всем акторам в `scene`. **Порядок аргументов:** наносящий урон — это `pVars[0]`, сцена — `pVars[1]`, игрок — `pVars[2]`. |
| `BroadcastSteal(object thief, object scene)` | 2 | Отправляет `CGameSteal(thief)`. |
| `BroadcastMessage(string text, object actor, object scene)` | 3 | Отправляет `CGameMessage(actor, text)`. |
| `RequestClearPath(object target)` | 1 | Отправляет `CGameClearPath(self)` в `target` — используется NPC, чтобы вежливо попросить другого NPC уйти с дороги. |
| `GetPlayerSelectedObject(out object)` | 1 | Объект, на котором сейчас находится прицел игрока. |
| `SimulateAttack(object target, object attacker)` | 2 | Отправляет `CGameAttacked(attacker)` в `target`. Параметр «attacker» — это то, что запекается в событие. |
| `ReportHit(object victim, object attacker, int hitType, float damage, float hit)` | 5 | Отправляет `CGameHit(attacker, hitType, damage, hit)`. (Отличается от 4-аргументного `ReportHit` в контексте игрока.) |
| `SignalDeath(object actor)` | 1 | Отправляет `CGameDeath(actor)` в **self** (не в переданный объект — получателем является владелец скрипта). Используется NPC для уведомления самих себя об убийстве. |
| `ActivateSleepMode(object player)` | 1 | Устанавливает `CSleepLoopOverride` — UI «ждать до утра». |
| `ModBlurLevel(float level)` | 1 | Регистрирует/обновляет этот скрипт как контрибьютора blur с заданной силой. Складывается аддитивно по всем контрибьюторам. |
| `ModDarkenLevel(float level)` | 1 | То же для darken (виньетка/затемнение). |

### Система диалогов

В старых документах была секция «Dialog System», большинство функций из которой
в действительности не были зарегистрированы как функции в `CStdScriptContext` —
они находятся либо на `CConversation` (ObjFunc, см. §10), либо на
`CCPPlayer::CScriptContext`. Удалённые записи:
- `GetReplic` / `GetAnswerCount` / `GetAnswer` / `SelectAnswer` /
  `GetConversation` — отсутствуют в этой сборке.

### Жизненный цикл игры

| Function | Params | Description |
|----------|--------|-------------|
| `NewGame(string world, string playerXml)` | 2 | **Не в CStdScriptContext** — находится в `CUIGameMenuContext` (только в скриптовом контексте игрового меню). |
| `LoadGame(out bool, string filename)` | 2 | Только `CUIGameMenuContext`. |
| `SaveGame(out bool, string filename)` | 2 | Только `CUIGameMenuContext`. |
| `Quit()` | 0 | Только `CUIGameMenuContext`. |
| `LoadMap(out bool, string filename)` | 2 | Только `CUIGameMenuContext`. |

---

## 2. CActorScriptContext — Контекст актора (11 записей)

Источник: `Game/Game/ActorScriptContext.{h,cpp}`. Монтируется между
`CStdScriptContext` и конкретными классами акторов (biped, fog, scripted, …).
Добавляет хелперы физики/raycasting, которым нужен фильтр коллизий самого
актора (`GetSkipSelfCollisionFilter()` — не попадать в себя).

| Function | Params | Description |
|----------|--------|-------------|
| `RayTrace(vector origin, vector dir, float maxDist, out bool hit)` | 4 | Нормализует `dir` внутри. Skip-self фильтр. |
| `RayTrace(.., out vector hitPos)` | 5 | Как выше, плюс позиция контакта. |
| `RayTrace(.., .., out object hitObject)` | 6 | Плюс попавший `IScriptClass`. |
| `RayTrace(.., .., .., out int materialID)` | 7 | Плюс ID материала. |
| `Intersect(vector center, float radius, out bool intersect)` | 3 | Тест перекрытия сферой; без per-object выхода. |
| `Intersect(.., out object[] hits)` | 4 | Как выше; `hits` заполняется `CScriptObjectArray` пересечённых `IScriptClass`. |
| `GetGroundMaterial(out bool, out int materialID)` | 2 | Вертикальный raycast от центра актора вниз на 5000 единиц; out: hit-флаг + материал. **Обратите внимание на порядок аргументов**: `pVars[0]` — это hit-bool, `pVars[1]` — ID материала. |
| `IsLoaded(out bool)` | 1 | `actor->IsLoaded()` — загружена ли сцена актора. |
| `ReportReputationChange(object target, object instigator, float delta)` | 3 | Отправляет `CGameReputationChange(instigator, delta)` в `target`. No-op если `target` равен NULL или не принимает события. |
| `StopWorld()` | 0 | Устанавливает `CWorldStopOverride` — приостанавливает мир, но сохраняет скрипт актора живым (используется для кат-сцен с одним актором). Падает, если уже активен другой override. |
| `ResumeWorld()` | 0 | Удаляет `CWorldStopOverride`, установленный этим актором. Проверяет ассертом, что текущий override действительно наш. |

---

## 3. CCPPlayer::CScriptContext — Контекст контроллера игрока (34 записи)

Источник: `Game/Game/CPPlayer.{h,cpp}`. Это скриптовый контекст, выполняющийся
внутри **управляющего контроллера игрока** (не сам актор игрока — он описан
в §11 `CActorPlayer`). Цепочка: `CActorScriptContext` → этот →
`CStdScriptContext`. C++ класс — `CCPPlayer::CScriptContext`. Существует
отдельный `CPlayerWeaponScriptContext` (см. §4) для скриптов, прикреплённых
к оружию.

### Анимации (руки от первого лица)

| Function | Params | Description |
|----------|--------|-------------|
| `HasAnimation(out bool, string animName)` | 2 | Знает ли геометрия рук эту анимацию. False, если `IHandsDesc` не прикреплён. |
| `PlayAnimation(string animName)` | 1 | Устанавливает `SetHandsAnimation(ulAnim)` и сбрасывает флаг lock-on-last-frame. |
| `LockAnimationEnd(string animName)` | 1 | Воспроизводит, затем немедленно перематывает на последний кадр и замораживает там (`m_bLockAnimationFrame = true`). Полезно для поз «оружие остаётся вынутым». |
| `WaitForAnimEnd()` | 0 | **Latent.** Приостанавливает до завершения текущей анимации (или её смены). |
| `StopAnimation()` | 0 | `SetHandsAnimation(-1)` — очищает активную анимацию, снимает lock-on-end. |

### Оружие и предметы

«Оружием» считается любой предмет, выбранный в данный момент в subcontainer 0
(subcontainer рук), у которого есть свойство `"Weapon"`.

| Function | Params | Description |
|----------|--------|-------------|
| `RemoveCurrentWeapon()` | 0 | Находит текущий выбранный предмет в subcontainer 0 со свойством `"Weapon"` и удаляет его. No-op, если оружие не выбрано. |
| `SelectAnyItemByID(out bool found, int itemID, int containerID)` | 3 | Ищет в заданном subcontainer первый предмет, соответствующий `itemID`, и выбирает его. Возвращает false, если ничего не найдено. |
| `SetWeaponHolster(bool holster)` | 1 | `SetWeaponVis(!holster)` — true скрывает оружие (опускает его), false показывает. |
| `GetWeaponItem(out int idx)` | 1 | Индекс выбранного оружия в subcontainer 0. -1 если оружие не выбрано. |
| `GetWeaponProperty(out bool found, string propName, out var value)` | 3 | Читает запись из per-instance bag свойств (собственные параметры стека предметов, а не дефолты типа предмета). |
| `SetWeaponProperty(out bool ok, string propName, var value)` | 3 | Изменяет params выбранного стека оружия. Создаёт params bag, если отсутствует. |
| `SetHandsItem(int itemID)` | 1 | Принудительно устанавливает геометрию рук на конкретный item ID (только визуально — без изменения инвентаря). |
| `SwitchFlashlight(bool on)` | 1 | Проходит через `m_pContr->SetFlashlightOn`. |
| `SwitchVisir(bool on)` | 1 | Проходит через `m_pContr->EnableVisir` («visor»/оверлей в духе night-vision). |

### Бой / Прицеливание

`GetVictim*` / `GetVictimMaterial*` все делают raycast вперёд от трансформа
камеры и учитывают фильтр `CCollisionFilterVictim` (skip self, skip
non-attackable). Результат — это цель, в которую попал бы игрок, если бы
выстрелил прямо сейчас.

| Function | Params | Description |
|----------|--------|-------------|
| `GetVictim(out object victim)` | 1 | Raycast на 10000 единиц вперёд от камеры. |
| `GetVictim(float dist, out object victim)` | 2 | Пользовательская максимальная дистанция. |
| `GetVictimMaterial(out object, out int matID, out vector hitPos)` | 3 | Raycast вперёд; hit pos сдвинут назад на 7 единиц, чтобы дать камере немного простора. |
| `GetVictimMaterial(out object, out int matID, out vector hitPos, vector customDir)` | 4 | Override направления луча. |
| `GetVictimMaterialExact(out object, out int matID, out vector hitPos)` | 3 | Как `GetVictimMaterial`, но использует `RayTraceCustom` (per-pixel/per-poly, более затратно). |
| `GetVictimMaterialExact(.., vector dir)` | 4 | Пользовательское направление. |
| `GetVictimMaterialExact(.., vector dir, float maxDist)` | 5 | Пользовательское направление + max dist. |
| `GetTouchDistance(out float)` | 1 | Текущая дистанция melee-диапазона игрока (зависит от оружия). |
| `ReportAttack(object victim)` | 1 | Отправляет `CGameAttacked(self)` в `victim`. |
| `ReportHit(object victim, int hitType, float damage, float hit)` | 4 | Отправляет `CGameHit(self, hitType, damage, hit)`. |
| `ReportHit(.., vector pos, vector dir)` | 6 | Вместо этого отправляет `CGameHit2` — включает позицию/направление попадания. |
| `IsShooting(out bool)` | 1 | True, пока удерживается primary fire. |
| `IsAltShooting(out bool)` | 1 | True, пока удерживается alt-fire. |
| `SetAttackState(out bool current)` | 1 | **Внимание**: на самом деле `Get`ит флаг m_bAttacking (имя функции вводит в заблуждение — она читает, а не устанавливает). |
| `CreateAttachPoint(string name, vector pos)` | 2 | Добавляет именованный локатор на риг игрока в заданной позиции. |
| `RemoveAttachPoint(string name)` | 1 | Зеркало. |
| `Inventory()` | 0 | **Latent**-подобный override: открывает UI инвентаря, привязанный к контейнеру игрока. Пытается обнаружить ближайшие акторы `IRubbishHeap` (в радиусе ~42 единиц), чтобы заполнить панель «другой стороны». |
| `Diary()` | 0 | **Latent.** Открывает дневник; управляется как `CDiaryInst`, чтобы его можно было отменить, если скрипт убит. |
| `ModNoise(int amount)` | 1 | Прибавляет к уровню шума игрока (AI слух). Обновляется и контроллер, и `m_lNoiseMod`. |
| `BroadcastPlayerDamage(object damager)` | 1 | Вариант для контроллера игрока: отправляет `CGamePlayerDamage(self, damager)` в **текущую сцену игрока**. |

---

## 4. CPlayerWeaponScriptContext — Контекст скрипта оружия (5 записей)

Источник: `Game/Game/PlayerWeaponScriptContext.{h,cpp}`. **Отдельный контекст** —
монтируется для скриптов, выполняющихся на *самом оружии* (а не на игроке).
Цепляется к `CStdScriptContext`. Старые документы ошибочно объединяли это с §3.

| Function | Params | Description |
|----------|--------|-------------|
| `GetGeometryLocator(string locatorName, out bool found, out vector pos)` | 3 | Ищет именованный локатор на геометрии рук; out-записывает его строку трансляции. |
| `MakeBillboard(string id, string image, vector pos, float size)` | 4 | Создаёт (или обновляет) именованный alpha-blended биллборд, прикреплённый к оружию. Изображение разрешается через `pRenderer->CreateImage`. |
| `RemoveBillboard(string id)` | 1 | Зеркало. |
| `GetLitColor(out vector)` | 1 | Читает кэшированный цвет фонарика/освещения на оружии. |
| `SetLitColor(vector)` | 1 | Записывает его; триггерит `UpdateFlashlight`. |

---

## 5. CActorBiped — Двуногий актор (46 записей)

Источник: `Game/Game/ActorBiped.{h,cpp}`. Только один class-метод
(`GetAttackDistance`), всё остальное — в таблице script-контекста
(`s_ContextEntries`). Большинство латентных функций движения/анимации попадают
в `m_Groups[0]`.

### Движение (latent)

`MovePoint` / `MoveDir` / `Rotate` / `FollowPath` создают per-call объекты
задач (`TABMoveLine`, `TABMoveDir`, `TABRotate`, `TABFollowPath`) и передают
скрипту function-inst, который завершается, когда задача завершается.

| Function | Params | Description |
|----------|--------|-------------|
| `Stop()` | 0 | Отменяет текущие задачи движения / анимации. |
| `StopAsync()` | 0 | Останавливает только async-задачи (нелатентные). |
| `MovePoint(vector target)` | 1 | **Latent.** Идти (режим по умолчанию). |
| `MovePoint(vector target, int mode)` | 2 | **Latent.** Режим: 0=walk, 1=run. |
| `MovePoint(vector target, int mode, out bool reached)` | 3 | **Latent.** Out-флаг: true если достигнута цель, false если остановлено/заблокировано. |
| `MoveDir(float angle, float dist)` | 2 | **Latent.** Движение в направлении относительно текущего курса. |
| `MoveDir(float, float, int mode)` | 3 | **Latent.** С режимом walk/run. |
| `MoveDir(float, float, int, out bool)` | 4 | **Latent.** С флагом завершения. |
| `Rotate(float yaw, float pitch)` | 2 | **Latent.** Повернуться к абсолютному направлению. |
| `Rotate(.., float speed)` | 3 | **Latent.** С угловой скоростью. |
| `RotateAsync(.., ..)` / `RotateAsync(.., .., ..)` / `RotateAsync(.., .., .., ..)` | 2-4 | Нелатентные варианты — стартуют поворот, возвращаются немедленно. |
| `Face(object target)` | 1 | Мгновенно повернуться к позиции цели. Нелатентно, мгновенно. |
| `LookAsync(vector pos, float blendIn, float blendOut)` | 3 | Начать head-look на `pos` с таймингами blend. |
| `LookAsyncRel(vector pos, float, float)` | 3 | Относительный вариант. |
| `DirLookAsyncRel(vector dir, float)` | 2 | Смотреть в направлении. |
| `DirLookAsyncRel(.., .., ..)` | 3 | Со вторым параметром blend. |
| `UnlookAsync(float blendOut)` | 1 | Сбросить look. |
| `IsInWalkMode(out bool)` | 1 | True если идёт пешком (vs бег). |
| `SwitchToWalk()` / `SwitchToRun()` | 0 | Установить флаг режима локомоции. Не двигает; влияет на *следующий* MovePoint. |
| `FollowPath(object path, bool loop)` | 2 | **Latent.** Walk-следование объекту пути (path = последовательность путевых точек). |
| `FollowPath(.., .., out bool)` | 3 | **Latent.** Флаг завершения. |
| `FollowPath(.., .., .., string walkAnimPrefix)` | 4 | **Latent.** Переопределить имена walk-анимации (например, "walk_drunken_"). |
| `FollowPath(.., .., .., string walkAnimPrefix, string runAnimPrefix)` | 5 | **Latent.** Оба префикса. |
| `RotatePath(object path)` | 1 | **Latent.** Пройти путь, применяя его keyframe поворота. |
| `RotatePath(object path, out bool)` | 2 | **Latent.** Флаг завершения. |

### Анимации

Анимации NPC используют **треки** (несколько анимаций могут смешиваться).
`LockAnimation` / `LockAnimationEnd` замораживают на первом / последнем кадре.

| Function | Params | Description |
|----------|--------|-------------|
| `StopAnimation()` | 0 | Останавливает основную анимацию. |
| `StopSecondaryAnimation()` | 0 | Останавливает вторичную анимацию. |
| `PlayAnimation(string name, int track)` | 2 | Воспроизводить на заданном треке. |
| `PlaySecondaryAnimation(string, int)` | 2 | Вторичный трек. |
| `PlaySecondaryAnimation(string, int, int extraArg)` | 3 | С дополнительным аргументом (поведение зависит от трека). |
| `FadeSecondaryAnimation(string, int, float fadeIn)` | 3 | Crossfade in. |
| `FadeSecondaryAnimation(.., .., .., float fadeOut)` | 4 | Оба тайминга fade. |
| `GetSecondaryAnimationType(out int)` | 1 | Идентифицирует вторичный слот. |
| `LockAnimation(string, int track, int mode)` | 3 | Замораживает на конкретном режиме кадра. |
| `LockAnimationEnd(string name, int track)` | 2 | Замораживает на последнем кадре. |
| `InterpolateAnimation(string, int, float t)` | 3 | Интерполировать к конкретному времени. |
| `IsAnimationPlaying(out bool)` | 1 | Активна ли какая-либо анимация. |
| `WaitForAnimEnd()` | 0 | **Latent.** Блокировать до завершения анимации. |
| `WaitForAnimEnd(out bool finished)` | 1 | **Latent.** С флагом завершения. |

### Диалоги и Торговля

| Function | Params | Description |
|----------|--------|-------------|
| `DoDialog(object conversation)` | 1 | Показать UI диалога, привязанный к заданной `CConversation`. NPC — «говорящий». |
| `CreateDialog(object conv)` | 1 | Как `DoDialog`, но в async/staging режиме. |
| `StopDialog(object conv)` | 1 | Принудительно закрыть. |
| `DoTrade()` | 0 | Открыть окно торговли между игроком и этим NPC. |
| `StopTrade()` | 0 | Закрыть торговлю. |

---

## 6. CActorAnimBone — Общая база для анимированных NPC (49 записей)

Источник: `Game/Game/ActorAnimBone.{h,cpp}`. Общая база для скелетных NPC.
Добавляет pathfinding (PF), сенсорику, отчёт об атаках/попаданиях.

### Class методы (ObjFunc — вызываются на акторе)

| Method | Params | Description |
|--------|--------|-------------|
| `GetPosition(out vector)` | 1 | Мировая позиция актора. |
| `GetDirection(out vector)` | 1 | Направление вперёд. |
| `GetPFPosition(out vector)` | 1 | Позиция на pathfinding-графе (привязанная к сетке). |
| `HasAnimationTrack(out bool, int track)` | 2 | Есть ли на заданном треке играющая анимация. |
| `HasAnimation(out bool, string name, int track)` | 3 | Существует ли анимация по имени для трека. |
| `IsDead(out bool)` | 1 | Очевидно. |
| `IsAttacking(out bool)` | 1 | Сейчас в состоянии атаки. |
| `GetWidth(out float)` | 1 | Радиус коллизии / ширина. |
| `GetHeight(out float)` | 1 | Высота стойки. |
| `GetEyesHeight(out float)` | 1 | Высота камеры/взгляда. |
| `GetAnimationProperty(out var, string propName)` | 2 | Per-animation custom prop. |
| `GetGeometryLocator(string name, out bool found, out vector pos)` | 3 | Найти трансляцию локатора. |
| `GetGeometryLocator(.., .., .., int boneIdx)` | 4 | Поиск по конкретной кости. |
| `TransformPointByBone(vector localPt, string boneName, out vector worldPt)` | 3 | Bone-relative → world трансформация. |
| `GetBrightness(out float)` | 1 | Приблизительная яркость в позиции актора (для AI стелса/освещения). |
| `CanSee(out bool, object target)` | 2 | Проверка LOS + FOV + порога видимости. |
| `CanHear(out bool, object source)` | 2 | Проверка шум-vs-порог слышимости. |
| `GetActorName(out string)` | 1 | Внутреннее имя актора. |

### Context-функции (Func — вызываются внутри скрипта актора)

| Function | Params | Description |
|----------|--------|-------------|
| `SetPosition(vector)` | 1 | Снап мировой позиции. |
| `SetDirection(vector)` | 1 | Снап курса. |
| `Speak(string)` | 1 | Триггер реплики/TTS. |
| `FindPathTo(out object path, vector target)` | 2 | Вычислить путь; out-объект — это script-class пути. |
| `FindShiftedPathTo(out, vector)` | 2 | Путь, предпочитающий смещение от цели (например, обход с фланга). |
| `FindDirLength(vector dir, float maxLen, out float actualLen)` | 3 | Подобно raycast: насколько далеко актор может пройти в направлении `dir`, прежде чем во что-то упрётся? |
| `FindLongestDir(out vector, out float, vector dirBase, float maxAngle, int numRays, float maxLen)` | 6 | Просканировать дугу лучей; вернуть самое длинное свободное направление. |
| `CanReachByPF(out bool, vector)` | 2 | Может ли pathfinding достичь этой точки. |
| `GetRandomPFPoint(out vector)` | 1 | Случайная достижимая PF-точка. |
| `GetRandomPFPointInCircle(out vector, vector center, float rMin, float rMax)` | 4 | Случайная PF-точка в кольце. |
| `RemoveEnvelope()` / `RemoveRTEnvelope()` | 0 | Снять envelope коллизии (capsule/box) / raytrace envelope. |
| `SetRTEnvelopeAuto()` | 0 | Восстановить auto-fit RT envelope. |
| `SetRTEnvelope(vector half, vector center)` | 2 | Ручная RT envelope. |
| `GetVictim(out object)` | 1 | Raycast вперёд для «кого бы я атаковал?». |
| `GetVictim(out, float maxDist)` | 2 | С ограничением дистанции. |
| `GetVictimMaterial(out, out, out, out)` | 4-5 | Raycast вперёд + материал + hitpos. |
| `GetTouchDistance(out float)` | 1 | Melee-дистанция этого NPC. |
| `ReportAttack(object target)` | 1 | Отправить событие атаки. |
| `ReportHit(object target, int hitType, float damage, float hit)` | 4 | Отправить событие попадания. |
| `SetDeathState()` | 0 | Переключить AAS (animation/state machine) в состояние «death». |
| `ResetAAS()` | 0 | Сбросить AAS к дефолтному состоянию. |
| `SetSpeed(float)` | 1 | Скорость локомоции. |
| `SetHearThreshold(float)` / `GetHearThreshold(out float)` | 1 | Чувствительность слуха (эквив. децибел). |
| `SetSeeThreshold(float)` / `GetSeeThreshold(out float)` | 1 | Чувствительность зрения. |
| `SetSeeFOV(float)` / `GetSeeFOV(out float)` | 1 | Полу-угол конуса (радианы). |
| `GetAnimationOffset(string name, int track, out vector)` | 3 | Root-motion offset, запечённый в анимацию. |
| `SetAttackState(int)` | 1 | Принудительно ставит AAS в нумерованное состояние атаки. |
| `SensePlayerOnly(bool)` | 1 | Если true, игнорирует не-игроковых акторов для проверок ощущения. |

### CActorAnimBoneCS — Cutscene Animated NPC (доп. записи)

Источник: `ActorAnimBoneCS.{h,cpp}`. Добавляет:

| Function | Params | Description |
|----------|--------|-------------|
| `ForceGeometryLoad()` / `ForceGeometryLoad(bool wait)` | 0-1 | Синхронная стриминг-загрузка геометрии. |
| `PlayAnimation()` | 0 | Cutscene-вариант анимации. |
| `PlayAnimation(string)` | 1 | Cutscene-вариант анимации. |
| `StopAnimation()` | 0 | Cutscene-вариант анимации. |
| `WaitForAnimEnd()` / `WaitForAnimEnd(out bool)` | 0-1 | **Latent.** |
| `GetFrameRate(out float)` | 1 | FPS cutscene-анимации. |

---

## 7. CActorFog — NPC-туман (32 записи)

Источник: `Game/Game/ActorFog.{h,cpp}`. Основной тип «ambient horror» NPC
(патрули чумного тумана). Смешивает локомоцию с рендером тумана.

### Class методы (ObjFunc)

| Method | Params | Description |
|--------|--------|-------------|
| `HasProperty(out bool, string)` | 2 | Проверка свойства (переопределяет CPropertyScriptClass). |
| `GetPosition(out vector)` | 1 | Мировая позиция. |
| `GetPFPosition(out vector)` | 1 | Позиция на PF-сетке. |
| `GetFogAmount(out float)` | 1 | Текущая плотность тумана [0..1]. |
| `GetFogColor(out vector)` | 1 | RGB-тонировка облака тумана. |
| `GetHeight(out float)` | 1 | Высота объёма тумана. |

### Context-функции

| Function | Params | Description |
|----------|--------|-------------|
| `PutOnGrid()` / `PutOnGrid(bool)` | 0-1 | Снап к PF-сетке; bool переключает snap-to-walkable. |
| `GetRandomPFPoint(out vector)` | 1 | Случайная достижимая точка. |
| `GetRandomPFPointInCircle(out vector, vector center, float rMin, float rMax)` | 4 | Кольцо. |
| `FindPathTo(out, vector)` | 2 | Путь. |
| `FindShiftedPathTo(out, vector)` | 2 | Offset-путь. |
| `MovePoint(vector, int mode)` | 2 | **Latent.** Движение. |
| `MovePoint(vector, int, out bool)` | 3 | **Latent.** С завершением. |
| `Stop()` | 0 | Остановить. |
| `FollowPath(object, bool loop)` | 2 | **Latent.** |
| `FollowPath(.., .., out bool)` | 3 | **Latent.** |
| `FollowPath(.., .., .., string walkAnim)` | 4 | **Latent.** |
| `FollowPath(.., .., .., string walkAnim, string runAnim)` | 5 | **Latent.** |
| `RotatePath(object)` / `RotatePath(object, out bool)` | 1-2 | **Latent.** |
| `ResetAAS()` | 0 | Сброс state-machine. |
| `FogLinear(float start, float end)` | 2 | Линейно интерполировать плотность тумана от `start` до `end` в течение текущей локомоции. |
| `SetFogAmount(float)` | 1 | Прямая запись. |
| `SetVisirVisibility(bool)` | 1 | Виден ли туман через оверлей visir. |
| `SetHearThreshold(float)` / `GetHearThreshold(out float)` | 1 | Слух. |
| `SetSeeThreshold(float)` / `GetSeeThreshold(out float)` | 1 | Зрение. |
| `SetSpotRating(float)` | 1 | Насколько «заметен» туман для других NPC. |
| `ReportHit(object, int, float, float)` | 4 | Отправить событие попадания. |

Примечание: `SwitchFlashlight` / `SwitchVisir` / `GetForce` / `SetForce` /
`GetSpeed` / `SetSpeed`, перечисленные в старых документах, **не**
зарегистрированы на CActorFog. Они находятся в
`CActorPlayer::CEffectScriptContext` (см. §11) или в
`CCPPlayer::CScriptContext` (см. §3).

---

## 8. CGameWeather — Погода (8 записей)

Источник: `Game/Game/GameWorld.cpp` (вложенный `CGameWorld::CGameWeather`).
Per-world синглтон. Монтируется как скриптовый контекст, к которому игра
может обращаться через `ObjFunc` на объекте погоды.

| Function | Params | Description |
|----------|--------|-------------|
| `ChangeWeather(18 params)` | 18 | **Latent.** Плавный переход во времени. Аргументы кодируют начальное/конечное состояние погоды (облачность, дальность тумана, ветер и т.д.). |
| `ForceWeather(17 params)` | 17 | Мгновенный снап. На один параметр меньше, чем `ChangeWeather` (нет времени перехода). |
| `Bright()` | 0 | Переключить на модификатор «bright/clear» (без дождя). |
| `Rain()` | 0 | Переключить на модификатор дождя — фактически меняет активный `IModWeatherData` на `CModWeatherDataRain`. |
| `ModNothing()` | 0 | Сбросить модификатор. |
| `ModLinear(float to, float duration)` | 2 | Линейно интерполировать силу текущего модификатора. |
| `GetModifierLevel(out float)` | 1 | Текущая интенсивность модификатора. |
| `GetGameTime(out float)` | 1 | Игровое время с точки зрения погоды (обычно такое же, как у мира). |

---

## 9. CGameMusic — Музыка (22 записи)

Источник: `Game/Game/GameWorld.cpp` (вложенный `CGameWorld::CGameMusic`).
Два музыкальных канала (1 и 2) для crossfade слоёв.

| Function | Params | Description |
|----------|--------|-------------|
| `PlayMusic1(string)` / `PlayMusic1(string, bool loop)` | 1-2 | Воспроизводить на канале 1 (по умолчанию с зацикливанием). |
| `PlayMusic2(string)` / `PlayMusic2(string, bool loop)` | 1-2 | Канал 2. |
| `StopMusic1()` / `StopMusic2()` | 0 | Мгновенная остановка. |
| `FadeMusic1()` / `FadeMusic1(float)` | 0-1 | Fade out канала 1 (длительность по умолчанию, если нет аргумента). |
| `FadeMusic2()` / `FadeMusic2(float)` | 0-1 | Канал 2. |
| `SwitchMusic1(string)` / `SwitchMusic1(string, float fadeTime)` | 1-2 | Crossfade канала 1 на новый трек. |
| `IsPlayingMusic1(out bool)` / `IsPlayingMusic2(out bool)` | 1 | Состояние канала. |
| `HasMusicAttribute(out bool, string)` | 2 | Имеет ли активный трек ключ метаданных. |
| `GetMusicAttribute(out string, string)` | 2 | Прочитать атрибут. |
| `HasMusicValue(out bool, string attr, var)` | 3 | Проверка на равенство. |
| `GetMusicValue(out var, string attr, var defaultVal)` | 3 | Типизированное чтение с дефолтом. |
| `WaitForMusicEnd1()` / `WaitForMusicEnd1(out bool)` | 0-1 | **Latent.** Блокировать до завершения канала 1. |
| `WaitForMusicEnd2()` / `WaitForMusicEnd2(out bool)` | 0-1 | **Latent.** Канал 2. |

Также экспонирует `GetRegionMusic`, `AdvanceRegionMusic`, `IsExistingMusic` —
они находятся на стороне `CMusicRegionData` / outdoor-сцены, см.
`MusicRegionData.cpp`.

---

## 10. ObjFunc — Методы объектов (по классам)

### CPropertyScriptClass — Property Bag (база)

Источник: `Game/Game/PropertyScriptClass.{h,cpp}`. Наследуется большинством
акторов — предоставляет типизированный bag ключ→значение, прикреплённый
к объекту.

| Method | Params | Description |
|--------|--------|-------------|
| `HasProperty(out bool, string)` | 2 | Наличие ключа. |
| `GetProperty(out var, string)` | 2 | Типизированное чтение. |
| `SetProperty(string, var)` | 2 | Запись / перезапись. |
| `RemoveProperty(string)` | 1 | Удаление. |

### CConversation — Объект диалога (19 записей)

Источник: `Game/Game/Conversation.{h,cpp}`. NPC диалога создаёт одну из таких,
UI игрока читает из неё. `m_strMessage` / `m_Replies` — это отображаемое
состояние; `ReportChange()` уведомляет зарегистрированных слушателей (UI).

| Method | Params | Description |
|--------|--------|-------------|
| `SetReturnValue(int)` | 1 | «Ответ» скрипта вызывающему; по умолчанию -1. |
| `GetReturnValue(out int)` | 1 | Прочитать. |
| `SetMessage(int stringID)` | 1 | Ищет `stringID` в `IStringDatabase` и устанавливает как отображаемую реплику NPC. Уведомляет UI. |
| `ClearReplies()` | 0 | Очищает список ответов. |
| `AddReply(int stringID, int nextReplicID, int replyID)` | 3 | Добавить кликабельный ответ. `nextReplicID` — следующий узел диалога; `replyID` — возвращаемое значение, если пользователь выберет этот ответ. |
| `GetPhoto(out string)` / `SetPhoto(int stringID)` | 1 | Путь к основной фотографии NPC. |
| `GetPhoto2(out string)` / `SetPhoto2(int stringID)` | 1 | Вторичная фотография. |
| `GetNPCName(out string)` / `SetNPCName(int stringID)` | 1 | Отображаемое имя. |
| `GetNPCDescription(out string)` / `SetNPCDescription(int stringID)` | 1 | Текст всплывающей подсказки. |
| `GetPlayerName(out string)` / `SetPlayerName(int stringID)` | 1 | Переопределить отображаемое «имя игрока» для этого обмена репликами. |
| `ShowMap(object map)` | 1 | Перевести беседу в `MAP_STATE` — UI переключится на представление карты. |
| `ShowDiary()` | 0 | Перевести в `DIARY_STATE`. |
| `IsFinished(out bool)` | 1 | True после того, как пользователь/скрипт завершил диалог. |
| `IsDialogEnd(out bool)` | 1 | True, когда состояние вернулось в `DIALOG_STATE` (не в подвиде карты/дневника). |

### CDiaryEntry — Узел дерева дневника (10 записей)

Источник: `Game/Game/Diary.{h,cpp}`. Узел дерева с `id`, `category`, `textID`,
родителем, дочерними. У дневника один скрытый корень (id=-1).

| Method | Params | Description |
|--------|--------|-------------|
| `Remove()` | 0 | Отсоединить от родителя и освободить. No-op, если корень. |
| `GetCategory(out int)` | 1 | ID категории. |
| `GetTextID(out string)` / `SetTextID(int)` | 1 | ID в text-базе данных. |
| `GetID(out int)` / `SetID(int)` | 1 | Стабильный ID этого узла. |
| `ChildCount(out int)` | 1 | Количество прямых потомков. |
| `Child(out object, int idx)` | 2 | Потомок по индексу. Ошибка `"Diary child index is out of range"`. |
| `AddChild(object child)` | 1 | Добавить. Ошибка `"Adding null diary entries is not permitted"` при NULL. |
| `Find(int id, out object)` | 2 | DFS по ID. NULL, если не найдено. |

### CContainerScriptClass — Контейнер (30 записей)

Источник: `Game/Game/ContainerScriptClass.{h,cpp}`. Большинство акторов,
которые держат предметы (трупы NPC, кучи мусора, контейнеры, игрок),
реализуют это. Предметы живут в **subcontainers** (ноль или более);
subcontainer 0 — «основной».

| Method | Params | Description |
|--------|--------|-------------|
| `GetItemCount(out int)` | 1 | Количество предметов в subcontainer 0. |
| `GetItemCount(out int, int subID)` | 2 | Количество предметов в конкретном subcontainer. |
| `GetItemCountOfType(out int, int itemID \| string itemName)` | 2 | Всего по всем subcontainers. Принимает либо DB id, либо имя (разрешается через `GetInvItemByName`). |
| `AddItem(out bool, item, int subID)` | 3 | Добавляет 1; `item` может быть объектом `IInvItemProxy`, DB id или именем. Стекуется до `MaxStackSize`. |
| `AddItem(out bool, item, int subID, int count)` | 4 | Добавляет N; возвращает false, если нет места. |
| `RemoveItem(int idx)` | 1 | Удалить 1 из subcontainer 0 по индексу. |
| `RemoveItem(int idx, int count)` | 2 | Удалить N. |
| `RemoveItem(int idx, int count, int subID)` | 3 | Из конкретного subcontainer. |
| `RemoveItemByType(out int actuallyRemoved, item)` | 2 | Удалить 1 этого типа. Возвращает 0, если не найдено. |
| `RemoveItemByType(out int, item, int amount)` | 3 | Удалить N. |
| `RemoveAllItems()` / `RemoveAllItems(int subID)` | 0-1 | Очистить. |
| `GetItem(out object, int idx)` | 2 | Возвращает скриптовый объект `CInvItemClass` (snapshot-копия). |
| `GetItem(out object, int idx, int subID)` | 3 | Конкретный subcontainer. |
| `GetItemPosByID(out int, int idHi, int idLo)` | 3 | Найти по 64-битному уникальному ID стека (разделённому на две 32-битные половины). |
| `GetItemPosByID(out int, int, int, int subID)` | 4 | С subcontainer. |
| `GetItemAmount(out int, int idx)` | 2 | Количество в стеке по индексу. |
| `GetItemAmount(out int, int idx, int subID)` | 3 | С subcontainer. |
| `SetItem(object item, int amount, int idx)` | 3 | Заменить по индексу. |
| `SetItem(.., .., .., int subID)` | 4 | С subcontainer. |
| `SetItemAmount(int amount, int idx)` | 2 | Просто изменить количество. |
| `SetItemAmount(.., .., int subID)` | 3 | С subcontainer. |
| `IsItemSelected(out bool, int idx)` / `IsItemSelected(out bool, int idx, int subID)` | 2-3 | Состояние выбора. |
| `SelectItem(int idx, int subID)` / `SelectItem(int idx, int subID, bool select)` | 2-3 | Установить выбор. |
| `ClearSubContainer(int subID)` | 1 | Опустошить конкретный subcontainer. |
| `GetSubContainerCount(out int)` | 1 | Количество subcontainers. |
| `GetCapacity(out int)` | 1 | Ёмкость subcontainer 0. |
| `GetCapacity(out int, int subID)` | 2 | Конкретный subcontainer. |

`Barter(object partner)` и `WorkWithCorpse(object)` не находятся
на самом `CContainerScriptClass` — они живут в `CContainerScriptContext`
(латентные, открывают UI).

### CInvItemClass — Экземпляр предмета (9 записей)

Источник: `Game/Game/InvItemClass.{h,cpp}`. Создаётся через `CreateInvItem()`
(§1) или возвращается из `CContainerScriptClass::GetItem`.

| Method | Params | Description |
|--------|--------|-------------|
| `GetItemID(out int)` / `SetItemID(int)` | 1 | DB id. |
| `SetItemName(string)` | 1 | Найти DB id по имени, установить. |
| `HasProperty(out bool, string)` | 2 | Проверка property bag. |
| `GetProperty(out var, string)` / `SetProperty(string, var)` | 2 | Чтение/запись. |
| `RemoveProperty(string)` | 1 | Удалить свойство. |
| `Compare(out bool equal, object other)` | 2 | Глубокая проверка равенства (id + свойства). |
| `Clone(out object)` | 1 | Возвращает новый `CInvItemClass` с теми же id + свойствами. |

### CActorScripted — Скриптовый актор (11 записей)

Источник: `Game/Game/ActorScripted.{h,cpp}`. «Универсальный» тип актора;
может содержать несколько `GeoTrans` (под-геометрии со своими трансформами)
и `ParticleSystem`. Наследует `CContainerScriptClass` (chained fallback).

| Method | Params | Description |
|--------|--------|-------------|
| `FindGeometry(string name, out object)` | 2 | Найти именованную под-геометрию. NULL при отсутствии. |
| `FindParticleSystem(string name, out object)` | 2 | Найти именованную particle system. NULL при отсутствии. |
| `SetPosition(vector)` / `GetPosition(out vector)` | 1 | Мировая позиция (использует `m_vPos` напрямую — не тело физики). |
| `PlaceOnGround()` | 0 | Вертикальный raycast на 200 вниз, снап к попаданию. |
| `Attach(object rigidBody)` | 1 | Следовать за другим rigid body. |
| `Detach()` | 0 | Отсоединить. |
| `CreateRigidBody(out object, vector pos, float radius)` | 3 | Тело физики. |
| `CreateRigidBody(.., .., .., vector linearVel)` | 4 | С линейной скоростью. |
| `CreateRigidBody(.., .., .., .., vector angularVel)` | 5 | С угловой скоростью. |
| `CreateRigidBody(.., .., .., .., .., object skipActor)` | 6 | С «skip-collision» актором (не сталкиваться с родителем). |
| `ReportAttack(object target, object attacker)` | 2 | Отправить `CGameAttacked(attacker)` в `target`. |

#### Под-объекты (создаются через FindGeometry / FindParticleSystem):

**GeoTrans** (9 методов): `SetTranslation(v)`, `SetRotationX/Y/Z(angle)`,
`SetRotationYPR(yaw, pitch, roll)`, `SetRotation(dir)`, `SetRotation(dir, up)`,
`Enable()` / `Enable(bool)`.

**ParticleSystem** (5 методов): `AddSource(pos, dir, spreadAngle)`,
`UpdateSource(idx, pos, dir, spreadAngle)`, `GetSourceCount(out int)`,
`Enable()` / `Enable(bool)`, `Fade()` / `Fade(float t)`.

**RigidBody** (1 метод): `Enable()` / `Enable(bool)`.

### CActorDoor — Дверь (5 методов)

| Method | Params | Description |
|--------|--------|-------------|
| `ClassifyActor(out bool isNegativeSide, object actor)` | 2 | True, если актор на «минусовой» стороне двери относительно её опорной плоскости. |
| `Open(bool negativeSide)` | 1 | Поворачивается к `m_fOpenMinusAngle` (true) или `m_fOpenPlusAngle` (false), с движением. |
| `Close()` | 0 | Поворачивается к 0, с движением. |
| `IsMoving(out bool)` | 1 | True во время поворота. |
| `GetOpenSide(out int)` | 1 | -1 / 0 / +1 в зависимости от `m_fCurAngle`. |

### CActorLight — Световой актор (1 метод)

Источник: `Game/Game/ActorLight.{h,cpp}`. Только:

| Method | Params | Description |
|--------|--------|-------------|
| `IsOn(out bool)` | 1 | Состояние вкл/выкл. |

(Методы `Switch` / `SetColor` / `GetColor` находятся в **CActorLightStatic**,
его подклассе — см. ниже.)

### CActorLightStatic — Статический световой актор (3 метода)

Источник: `Game/Game/ActorLightStatic.{h,cpp}`. Наследует CActorLight.

| Method | Params | Description |
|--------|--------|-------------|
| `Switch(bool on)` | 1 | Переключить. |
| `SetColor(vector rgb)` | 1 | RGB-цвет (0..1). |
| `GetColor(out vector)` | 1 | Прочитать RGB. |

### CActorStatic — Статический актор (8 методов)

Источник: `Game/Game/ActorStatic.{h,cpp}`. Наследует CContainerScriptClass.

| Method | Params | Description |
|--------|--------|-------------|
| `GetActorName(out string)` | 1 | Внутреннее имя. |
| `SetVisibility(bool)` | 1 | Рендер вкл/выкл. |
| `GetPosition(out vector)` | 1 | Позиция. |
| `GetPFPolyID(out int)` | 1 | Pathfinding-полигон под актором. |
| `EnableSubset(string name, bool on)` | 2 | Переключить именованный subset меша (например, вариант материала). |
| `EnableSubset(.., .., int slot)` | 3 | С индексом слота. |
| `SetUsable()` / `SetUsable(bool)` | 0-1 | Игрок может взаимодействовать (клавиша E). |

Плюс скриптовый контекст (1 запись): `DisableUpdate()` / `DisableUpdate(bool)` —
остановить тикание актора при выгрузке.

### CActorPlayer — Актор игрока (29 методов + 12 записей effect-context)

Источник: `Game/Game/ActorPlayer.{h,cpp}`. Актор (мировая сторона) — не
контроллер (сторона ввода). Методы — это запросы о состоянии игрока.

| Method | Params | Description |
|--------|--------|-------------|
| `GetPosition(out vector)` | 1 | Мировая позиция. |
| `GetDirection(out vector)` | 1 | Направление взгляда. |
| `GetPFPosition(out vector)` | 1 | PF-привязанная позиция. |
| `HasItem(out bool, object item)` | 2 | Проверка инвентаря. |
| `IsOnGround(out bool)` | 1 | Стоит ли? |
| `ApplyEffect(string name)` | 1 | Триггерить именованный эффект (тряска камеры, виньетка, …). |
| `SetDeathState()` | 0 | Триггерить cutscene/состояние смерти. |
| `IsDead(out bool)` | 1 | Состояние смерти. |
| `IsAttacking(out bool)` | 1 | Состояние атаки. |
| `IsWalking(out bool)` | 1 | Ходьба vs бег. |
| `IsFlashlightOn(out bool)` / `IsVisirOn(out bool)` | 1 | Состояние фонарика / visor. |
| `GetTouchDistance(out float)` | 1 | Дистанция охвата. |
| `GetHeight(out float)` / `GetEyesHeight(out float)` | 1 | Высота тела / камеры. |
| `GetAttackDistance(out float)` | 1 | Melee-дистанция. |
| `LockCameraRoll(float)` / `UnlockCameraRoll(...)` / `SetCameraRoll(float)` / `GetCameraRoll(out float)` | 1 | Управление roll камеры (для эффектов наклона). |
| `LockCameraFOV(float)` / `UnlockCameraFOV(...)` / `SetCameraFOV(float)` / `GetCameraFOV(out float)` | 1 | Управление FOV. |
| `SelectWeapon()` / `SelectWeapon(int slotIdx)` | 0-1 | Выбрать оружие. |
| `GetCurrentWeapon(out object)` | 1 | Текущий выбранный предмет оружия. |
| `DropItems(int subID)` / `DropItems(int subID, vector pos)` | 1-2 | Выбросить весь subcontainer как кучу перед игроком (или в `pos`). |
| `IsWeaponHolstered(out bool)` | 1 | Состояние holster. |

**Подконтекст `CEffectScriptContext`** (12 записей) — обращение, когда
скриптовый контекст является effect-каналом игрока (например, скрипты
тряски/головокружения):

| Function | Params | Description |
|----------|--------|-------------|
| `GetForce(out vector)` / `SetForce(vector)` | 1 | Вектор силы игрока (knockback). |
| `GetSpeed(out vector)` / `SetSpeed(vector)` | 1 | Скорость. |
| `SwitchFlashlight(bool)` | 1 | Переключить фонарик. |
| `SetFlashlightColor(vector rgb)` | 1 | Тонировка фонарика. |
| `SwitchVisir(bool)` | 1 | Переключить visor. |
| `PlayCameraMotion(string)` | 1 | Файл движения камеры. |
| `InterpolateCameraMotion(string, float)` / `InterpolateCameraMotion(string, float, float)` | 2-3 | Blend in/out. |
| `WaitForCameraMotionEnd()` | 0 | **Latent.** |
| `StopCameraMotion()` | 0 | **Latent.** Отменяет текущее движение. |

### CGameSceneOutdoor — Внешняя сцена (15 методов)

Источник: `Game/Game/GameSceneOutdoor.{h,cpp}`. Корневая outdoor-сцена города.

| Method | Params | Description |
|--------|--------|-------------|
| `GetRegionCount(out int)` | 1 | Общее количество регионов на карте мира (0, если карты нет). |
| `GetCurrentRegion(out int)` | 1 | Регион, в котором находится игрок. |
| `GetRegionByPt(out int, vector)` | 2 | ID региона в мировой точке. -1 если снаружи. |
| `RemoveStationaryActor(object)` | 1 | Деспавн «стационарного» NPC (привязанного к региону). |
| `RemoveAllRegionActors(int regionID)` | 1 | Деспавн каждого region-bound актора в регионе. |
| `SetRegionActorCount(string actorClass, int regionID, int min, int max)` | 4 | Установить границы спавна для класса в регионе. |
| `SetRegionActorCount(.., int, int, vector pos, vector dir)` | 6 | С явным трансформом спавна. |
| `SetRegionActorCountByType(string typeName, .., ..)` / `(.., .., .., .., vector, vector)` | 4-6 | То же с lookup по type-id. |
| `AddStationaryActor(string class, object scriptOwner, int regionID, vector pos, vector dir)` / `(.., .., .., .., .., string xml)` | 5-6 | Спавнит region-bound NPC. |
| `AddStationaryActorByType(...)` | 5-6 | То же с lookup по type-id. |
| `GetMap(out object)` | 1 | `IWorldMap` сцены. |
| `CanPlayThunder(out bool)` | 1 | Находится ли сцена сейчас в состоянии «открытого неба», разрешающем гром. |

#### Под-объект stationary actor (возвращается из AddStationaryActor):

| Method | Params | Description |
|--------|--------|-------------|
| `Remove()` | 0 | Деспавн. |
| `GetActor(out object)` | 1 | Underlying актор; NULL, если ещё не загружен. |

### CWorldMap — Карта мира (15 методов)

Источник: `Game/Game/WorldMap.{h,cpp}`. Источник данных для UI карты.

| Method | Params | Description |
|--------|--------|-------------|
| `GetMarkCount(out int)` | 1 | Линейное количество меток. |
| `GetMark(out object, int idx)` | 2 | Метка по индексу — использует энумератор для прохода к `idx`. |
| `GetSize(out int w, out int h)` | 2 | Размеры карты в map-пикселях. |
| `ConvertToMapCoordinates(out vector mapXY, vector worldXYZ)` | 2 | Мир→карта. |
| `ConvertToWorldCoordinates(out vector world, vector mapXY)` | 2 | Карта→мир. |
| `AddMark(out object mark, string name, vector pos, int kind, float)` | 5 | Добавить метку. |
| `AddMark(.., .., .., .., .., float)` | 6 | С дополнительным float (зависит). |
| `FindMark(string name, out object)` | 2 | Поиск. |
| `ClearMarks()` | 0 | Очистить все. |
| `GetMapParams(out, out, out)` | 3 | Прочитать три параметра (kind/zoom/и т.д.). |
| `SetMapParams(.., ..)` / `SetMapParams(.., .., ..)` | 2-3 | Записать. |
| `GetObjectFromPoint(out object, vector mapXY, float radius)` | 3 | Hit-test по map-координатам. |
| `GetObjectID(out int, object)` | 2 | Обратный поиск. |
| `CreateObjectHighlight(out object, int objectID)` | 2 | Выделить overlay подсветки. |

#### Под-объект CMark:

| Method | Params | Description |
|--------|--------|-------------|
| `Remove()` | 0 | Удалить эту метку. |
| `GetLocator(out vector)` | 1 | Позиция метки. |
| (плюс 3 ещё: `GetID`, `GetKind`, `GetTime`) | 1 | |

#### Под-объект CHighlight:

| Method | Params | Description |
|--------|--------|-------------|
| `Render(8 params)` | 8 | Запустить отрисовку подсветки в заданных map-координатах. |

### CScriptVector — Vector-коллекция

Источник: `Game/Game/ScriptVector.h` (шаблонный). **Методы в нижнем регистре**.

| Method | Params | Description |
|--------|--------|-------------|
| `add(value)` | 1 | Добавить. |
| `set(int idx, value)` | 2 | Перезаписать по индексу. Возвращает false при OOB. |
| `size(out int)` | 1 | Длина. |
| `resize(int)` | 1 | Изменить размер (default-конструирует новые элементы). |
| `get(int idx, out value)` | 2 | Прочитать по индексу. |
| `clear()` | 0 | Опустошить. |
| `remove(int idx)` / `remove(int idx, int count)` | 1-2 | Удалить по индексу. |
| `erase(value)` / `erase(value, out bool removed)` | 1-2 | Удалить первый совпадающий элемент. |
| `find(value, out int idx)` | 2 | Линейный поиск. -1, если отсутствует. |
| `in(value, out bool)` | 2 | Проверка наличия. |

### CScriptSet — Set-коллекция

Источник: `Game/Game/ScriptSet.h` (шаблонный). **Методы в нижнем регистре**. Нет
`Iterator()` (старые документы были неправы) — итерировать через
`CScriptObjectArray`, возвращаемый другими API (например, `Intersect`).

| Method | Params | Description |
|--------|--------|-------------|
| `add(value)` / `add(value, out bool inserted)` | 1-2 | Возвращает, был ли это действительно новый элемент. |
| `size(out int)` | 1 | Мощность. |
| `clear()` | 0 | Опустошить. |
| `in(value, out bool)` | 2 | Проверка членства. |
| `erase(value)` / `erase(value, out bool removed)` | 1-2 | Удалить. |

### CScriptObjectArray — Итератор по IScriptClass*

Источник: `Game/Game/ScriptObjectArray.{h,cpp}`. Возвращается API типа
`Intersect` (с 4 аргументами) и энумераторами акторов. Не создаётся напрямую
из скриптов.

| Method | Params | Description |
|--------|--------|-------------|
| `Restart()` | 0 | Сбросить курсор к 0. |
| `Next(out bool more)` | 1 | Продвинуться; out-bool — `true`, если был элемент. |
| `Next(out bool more, out object element)` | 2 | Как выше, плюс элемент. |

---

## 11. Дополнительные функции, используемые в HD-скриптах

Сканирование всех **963 декомпилированных HD-скриптов**
(`pathologic_re/examples/HD/Scripts_sc/`) выявило **248 имён нативов**
(202 `@`-глобальных + 46 методов `obj->`), которых не было выше. Они
задокументированы здесь, сгруппированы по подсистемам. Каждая запись сверена с
исходниками движка (`SRC/PlagueCity`), где функция существует; функции,
**добавленные ремастером HD**, не имеют регистрации в исходниках 2005 года и
помечены **HD-only (по вызовам)** — их сигнатуры восстановлены по реальным
местам вызова в HD-скриптах. `N` = число аргументов в вызове (включая out-vars).

### Окна и отрисовка UI — глобали `CUIWnd`

Источник: `Game/UI/UIWnd.cpp`. Вызываются без префикса (`@Name`) из скрипта
окна; неявный получатель — само окно.

| Функция | N | Описание |
|---------|---|----------|
| `CreateWindow(string xml, bool modal)` | 2 | Загружает `xml`, создаёт и присоединяет дочернее окно. (Аргумент `modal` читается, но вызов SetModal в обработчике закомментирован.) |
| `CreateWindow(string xml, bool modal, out object wnd)` | 3 | То же; ещё возвращает скрипт-класс нового окна. |
| `DestroyWindow()` / `DestroyWindow(int exitCode)` | 0 / 1 | Уничтожает это окно с кодом выхода (по умолчанию 0). Также `wnd->DestroyWindow(...)`. |
| `FindWindow(out object wnd, int x, int y)` | 3 | Верхнее окно под экранной точкой (x,y) или null. |
| `CreatePolyImage(out object poly, int faceCount, string texture)` | 3 | Создаёт poly-image с `faceCount` гранями из `texture`. |
| `Blit(string image, int x, int y)` | 3 | Рисует именованное изображение в (x,y) относительно окна; клипует, если клиппинг включён. |
| `Blit(string image, int x, int y, float amount)` | 4 | То же с альфой/блендом `amount` (1.0 — непрозрачно). |
| `BlitClipped(string image, int x, int y, int l, int t, int w, int h)` | 7 | Рисует с клиппингом к прямоугольнику (l,t,w,h) относительно окна. |
| `BlitClipped(... , float amount)` | 8 | То же с альфой. |
| `StretchBlit(string image, int x, int y, int xsize, int ysize)` | 5 | Рисует, растягивая до xsize×ysize. |
| `EnableClipping()` / `EnableClipping(bool)` | 0 / 1 | Включает клиппинг к прямоугольнику окна (по умолчанию) или в заданное состояние. |
| `Print(string font, int x, int y, string text)` | 4 | Печатает `text` белым; клипует, если включено. |
| `Print(string font, int x, int y, string text, float r, float g, float b)` | 7 | То же с цветом RGB (0..1). |
| `PrintInWidth(out int height, string font, int x, int y, int width, string text)` | 6 | Переносит `text` по словам в ширину `width` px, печатает, возвращает суммарную `height`. |
| `PrintInWidth(... , float r, float g, float b)` | 9 | То же с цветом RGB. |
| `GetTextWidth(out int width, string font, string text)` | 3 | Ширина `text` в пикселях в шрифте `font`. |
| `GetTextWidth(out int width, string font, string text, int count)` | 4 | Ширина первых `count` символов. |
| `GetTextHeightInWidth(out int height, string font, int width, string text)` | 4 | Высота `text` с переносом в ширину `width`. |
| `GetFontHeight(out int height, string font)` | 2 | Высота строки шрифта `font` в пикселях. |
| `FontHasCharacterGlyph(out bool has, string font, int charCode)` | 3 | Есть ли в `font` глиф для wide-символа. |
| `LoadImage(string texture)` | 1 | Загружает изображение в хранилище окна; ошибка (сообщение) если нет. |
| `LoadVideo(string texture)` | 1 | Загружает видео-изображение; ошибка при сбое. |
| `ReleaseVideo(string name)` | 1 | Освобождает загруженное видео-изображение по имени. |
| `FindVideo(out object video, string name)` | 2 | Скрипт-класс загруженного видео-изображения по имени или null. |
| `CaptureKeyboard()` / `ReleaseKeyboard()` | 0 | Перенаправляет / освобождает весь ввод с клавиатуры в это окно. |
| `CaptureMouse()` / `ReleaseMouse()` | 0 | Перенаправляет / освобождает весь ввод мыши. |
| `ShowCursor()` / `ShowCursor(bool)` | 0 / 1 | Показывает (по умолчанию) или показывает/скрывает курсор. |
| `SetCursor(string cursorName)` | 1 | Делает активным именованный курсор; логирует (успех) если не найден. |
| `GetCursorPos(out int x, out int y)` | 2 | Текущая позиция курсора (экранные координаты). |
| `ClientToScreen(inout int x, inout int y)` | 2 | Преобразует координаты окна → экранные на месте. |
| `ScreenToClient(inout int x, inout int y)` | 2 | Преобразует экранные → координаты окна на месте. |
| `GetWindowSize(out int w, out int h)` | 2 | Размер этого окна. |
| `GetWindowName(out string name)` | 1 | Имя этого окна. |
| `SetTooltip(int type, string text)` | 2 | Задаёт тип и текст тултипа окна. |
| `SetTooltip(int type, string text, object obj)` | 3 | То же плюс связанный объект. |
| `GetTooltipType(out int)` / `GetTooltipText(out string)` / `GetTooltipObject(out object)` | 1 | Текущий тип/текст/объект тултипа окна (также `wnd->...`). |
| `SetBackground(string image)` | 1 | Фоновое изображение окна. |
| `SetOwnerDraw(bool)` | 1 | Включает/выключает отрисовку, управляемую скриптом (owner-draw). |
| `SetModal(bool)` | 1 | Флаг модальности окна. |
| `SetNeedUpdate(bool)` | 1 | Нужно ли окну покадровое обновление скриптом. |
| `SendToParent()` / `SendToParent(bool)` | 0 / 1 | Пересылать необработанный ввод родительскому окну. |
| `SendMessageToParent(int msg)` | 1 | Шлёт числовое сообщение родительскому окну. |
| `SendMessageToParent(int msg, object obj)` | 2 | То же с присоединённым объектом. |
| `SendMessage(int msg, string targetWnd)` | 2 | Шлёт сообщение `msg` именованному окну через станцию. |
| `SendMessage(int msg, string targetWnd, object data)` | 3 | То же с объектом-нагрузкой. |
| `PauseSound(string name)` | 1 | Ставит на паузу именованный UI-звук (логирует, не падает, если не найден). |

### Рисуемые UI-объекты — методы `obj->`

Источники: `Game/UI/UIImage.cpp`, `UIVideoImage.cpp`, `UIPolyImage.cpp`.

| Метод | N | Описание |
|-------|---|----------|
| `img->Blit(int x, int y)` | 2 | Рисует изображение/кадр в (x,y) в нативном размере. |
| `img->BlitClipped(int x, int y, int l, int t, int r, int b)` | 6 | Рисует с клиппингом к заданному экранному прямоугольнику. |
| `vid->StretchBlit(int x, int y, int xsize, int ysize)` | 4 | Рисует кадр видео растянутым. |
| `vid->Play()` / `vid->Play(bool loop)` | 0 / 1 | Запускает воспроизведение видео, опционально зациклено. |
| `vid->IsPlaying(out bool)` | 1 | Проигрывается ли видео сейчас. |
| `vid->IsLost(out bool)` | 1 | Потеряно ли устройство-изображение. |
| `vid->Restore(out bool)` | 1 | Сбрасывает флаг потери устройства; out получает результат. |
| `poly->Blit(int x, int y)` | 2 | Рендерит poly-image (отображает (x,y) в нормализованные экранные координаты). |
| `poly->SetRotation(int x, int y, float angle)` | 3 | Поворачивает poly-image на `angle` (рад) вокруг точки (x,y). |

### Глобали контекстов UI — std / window / map

Источники: `Game/UI/UIStdScriptContext.cpp`, `Game/Game/UIWindowContext.cpp`, `Game/Game/UIMapContext.cpp`.

| Функция | N | Описание |
|---------|---|----------|
| `UITrace(string text)` | 1 | Пишет `text` (с префиксом скрипт-консоли) в консоль менеджера UI. |
| `GetScreenSize(out int w, out int h)` | 2 | Размер экрана (w в arg0, h в arg1). |
| `GetWindowData(out object data)` | 1 | Скрипт-класс-объект, стоящий за этим контекстом окна. |
| `RenderMap(int dl,int dt,int dr,int db, int sl,int st,int sr,int sb)` | 8 | Рендерит карту мира: исходный прямоугольник (s*) в целевой (d*). |
| `RenderRegions(int dl,int dt,int dr,int db, int sl,int st,int sr,int sb)` | 8 | Рендерит слой регионов с тем же отображением src→dst. |
| `SetRegionColor(int region, float r, float g, float b, float a)` | 5 | Цвет тонировки (RGBA, 0..1) региона карты. |
| `ProcessEvents()` | 0 | **Latent.** Запускает латентный цикл обработки событий в контексте UI-скрипта. |
| `StopEventProcessing()` | 0 | Останавливает все идущие циклы `ProcessEvents` в этом контексте. |

HD-only глобали UI (по вызовам; регистрации в 2005 нет):

| Функция | N | Описание |
|---------|---|----------|
| `HideCursor()` | 0 | **HD-only.** Скрывает курсор (эквивалент 2005: `ShowCursor(false)`). |
| `SetMousePos(int x, int y)` | 2 | **HD-only.** Задаёт позицию курсора. |
| `SendWorldWndMessage(int msg)` / `(int msg, object obj)` | 1 / 2 | **HD-only.** Шлёт числовое сообщение (опц. с объектом) окну мира/игры. Широко используется акторными скриптами. |
| `UISync()` | 0 | **HD-only.** Латентная уступка на один тик для UI-скриптов (UI-аналог `sync()`). |
| `ReleaseImage(string name)` | 1 | **HD-only (не подтверждено).** Освобождает загруженное изображение (пара к `LoadImage`); выведено по аналогии — без явного места вызова. |
| `IsImageLoaded(out bool, string name)` | 2 | **HD-only (не подтверждено).** Загружено ли изображение; выведено по аналогии. |
| `GetColorMod(...)` / `LinearColorMod(...)` | ? | **HD-only (не разрешено).** Get/set цветовой модуляции; ни регистрации 2005, ни разрешимого места вызова — приведены для полноты. |

### Статы, нужды и деньги игрока — `CUIPlayerStatContext`

Источник: `Game/Game/UIPlayerStatContext.cpp`. Читают PropertySet игрока.

| Функция | N | Описание |
|---------|---|----------|
| `GetPlayerHealth(out float)` | 1 | Свойство `health` игрока (0 без игрока). |
| `GetPlayerHunger(out float)` | 1 | Свойство `Hunger`. |
| `GetPlayerDisease(out float)` | 1 | Уровень `disease`/болезни. |
| `GetPlayerImmunity(out float)` | 1 | Свойство `Immunity`. |
| `GetPlayerTiredness(out float)` | 1 | Свойство `Tiredness`. |
| `GetPlayerMoneyCount(out float)` | 1 | Свойство `money`. |
| `SetPlayerMoneyCount(float)` | 1 | Задаёт `money` игрока. |

### Позиция игрока на карте — `CUIMapContext`

| Функция | N | Описание |
|---------|---|----------|
| `GetPlayerMapPos(out float x, out float y)` | 2 | Позиция игрока в координатах карты; false если игрока нет. |
| `GetPlayerMapAngle(out float)` | 1 | Угол игрока (рад) на карте, `-atan2(dir.z,dir.x)+PI/2`. |

### Инвентарь и контейнер игрока — `CUIInventoryContext`

Источник: `Game/Game/UIInventoryContext.cpp`.

| Функция | N | Описание |
|---------|---|----------|
| `SetPlayerHandsItem(int itemID)` | 1 | Кладёт предмет в слот рук контейнера игрока. |
| `UseItem(int pos, int container, out bool applied)` | 3 | Использует предмет в слоте `pos` суб-контейнера `container`; читает его эффект OnUse и применяет к игроку. `applied` = эффект применён и не `noremove`. |
| `GetPlayerContainer(out object)` | 1 | Контейнер инвентаря игрока как скрипт-объект. |
| `GetContainer(out object)` | 1 | Вторичный/целевой контейнер (труп/сундук) как скрипт-объект. |
| `GetItemImage(int itemID, out string sprite)` | 2 | Имя спрайта по id предмета в БД; падает, если нет. |
| `GetItemMaxStackSize(int itemID, out int max)` | 2 | Макс. размер стека предмета из БД. |

### Оверрайд цикла сна/сна-видения — `CSleepLoopOverride`

Источник: `Game/Game/SleepLoopOverride.cpp`. (Также даёт все функции `CUIPlayerStatContext` + `CUIStdContext`.)

| Функция | N | Описание |
|---------|---|----------|
| `GetPlayer(out object)` | 1 | Актор игрока как скрипт-объект. |
| `BeginPlayerUpdate()` | 0 | Включает обновление игрока во время цикла-оверрайда. |

### Контроллер игрока и вид от первого лица (SRC + HD)

| Функция | N | Описание |
|---------|---|----------|
| `SwitchToRun()` | 0 | `CActorBiped` (`ActorBiped.cpp`): переключает локомоцию с ходьбы на бег; false если не в ходьбе/беге. |
| `GetSeeFOV(out float)` / `SetSeeFOV(float)` | 1 | `CActorAnimBone` (`ActorAnimBone.cpp`): FOV для проверок «вижу» (`m_fSeeFOV`). |
| `GetSeeThreshold(out float)` / `SetSeeThreshold(float)` | 1 | `CActorAnimBone`/`CActorFog`: порог видимости для проверок «вижу» (`m_fSeeThresh`). |
| `IsVisirOn(out bool)` | 1 | `CActorPlayer` (`ActorPlayer.cpp`): включён ли оверлей визора. Вызывается как `@IsVisirOn(out)` в контексте игрока или `player->IsVisirOn(out)`. |
| `GetForce(out vector)` / `SetForce(vector)` | 1 | `CActorPlayer` (`ActorPlayer.cpp:101-102`): get/set вектора тряски камеры игрока. **Не HD-only.** |
| `GetPlayerFOV(out float)` / `SetPlayerFOV(float)` | 1 | **HD-only (по вызовам).** FOV камеры игрока (слайдер FOV в опциях). |
| `GetEyesHeightCoef(out float)` / `SetEyesHeightCoef(float)` | 1 | **HD-only (по вызовам).** Коэффициент высоты глаз (1.0 стоя, ниже при приседе); анимирует высоту FP-камеры. |
| `IsSneakEnabled(out bool)` | 1 | **HD-only (по вызовам).** Активен ли режим скрытности/приседа. |
| `SetBaseVisibility(float)` | 1 | **HD-only (по вызовам).** Базовый уровень заметности игрока (зависит от времени суток). |
| `GetStat(string name, out int)` | 2 | **HD-only (по вызовам).** Читает именованное битовое поле глобального стата игрока (напр. `"STAT_LOOK"`). |
| `SetStat(string name, int)` | 2 | **HD-only (по вызовам).** Пишет именованный стат игрока. |
| `GetAdditionalData(out object)` | 1 | **HD-only (по вызовам).** Доп. данные, передаваемые в UI-диалог (рядом с `GetChooseItems`/`GetReturnValue`). |

### Контекст диалога/разговора — `CUIDialogContext`

Источник: `Game/Game/UIDialogContext.cpp`. Доступен, пока активен UI диалога.

| Функция | N | Описание |
|---------|---|----------|
| `GetReplic(out string)` | 1 | Текст текущей реплики NPC (`CConversation::GetMessage`). |
| `GetAnswerCount(out int)` | 1 | Число доступных ответов игрока. |
| `GetAnswer(int i, out string)` | 2 | Текст ответа с индексом `i`. |
| `GetAnswer(int i, out string, out int nextReplicID)` | 3 | Также id следующей реплики для этого ответа. |
| `GetAnswer(int i, out string, out int nextReplicID, out int replyID)` | 4 | Также собственный reply-id ответа. |
| `SelectAnswer(int nextReplicID, int replyID)` | 2 | Выбирает ответ; шлёт `CGameDialogReply(nextReplicID, replyID)`. Без out. |
| `GetConversation(out object)` | 1 | Подлежащий объект `CConversation` (для методов ниже). |
| `GetChooseItems(out object)` | 1 | `CUIChooseItemContext`: объект данных окна выбора. |

### `CConversation` — объект диалога (`obj->`)

Источник: `Game/Game/Conversation.cpp`. Создаётся `@CreateDialog(out object)`;
тот же объект возвращает `GetConversation()`.

| Метод | N | Описание |
|-------|---|----------|
| `dlg->SetNPCName(int stringID)` | 1 | Имя NPC по id из строковой БД. |
| `dlg->GetNPCName(out string)` | 1 | Строка имени NPC. |
| `dlg->SetNPCDescription(int stringID)` | 1 | Описание NPC по id строковой БД. |
| `dlg->GetNPCDescription(out string)` | 1 | Строка описания NPC. |
| `dlg->SetPlayerName(int stringID)` | 1 | Имя игрока по id строковой БД. |
| `dlg->GetPlayerName(out string)` | 1 | Строка имени игрока. |
| `dlg->SetPhoto(string path)` | 1 | Путь к основному портрету (литеральная строка, не id). |
| `dlg->GetPhoto(out string)` | 1 | Путь к основному фото. |
| `dlg->SetPhoto2(string path)` | 1 | Путь ко вторичному портрету. |
| `dlg->GetPhoto2(out string)` | 1 | Путь ко вторичному фото. |

> Примечание: сеттеры Name/Description берут **id строковой БД**; `SetPhoto`/`SetPhoto2` берут **литеральный путь**.

### Скрипт-свойства актора (`obj->`)

Источник: `Game/Game/ActorScriptClass.cpp`. На любом скрипт-класс-акторе.

| Метод | N | Описание |
|-------|---|----------|
| `obj->SetScriptProperty(value, string name)` | 2 | Задаёт скрипт-свойство `name` в `value` (любой тип). |
| `obj->GetScriptProperty(out value, string name)` | 2 | Читает свойство `name`; тип out-переменной выбирает типизированный геттер. Падает, если нет. |
| `obj->HasScriptProperty(out bool, string name)` | 2 | Существует ли свойство `name`. |

### Встроенные операторы VM (не натив из таблицы имён)

| Форма | Описание |
|-------|----------|
| `obj->FuncExist(string funcName, int parmCount)` | Компилируется в отдельную VM-инструкцию (`CInstructionFuncExist`), не в табличный натив. Даёт `true`, если `obj` имеет скрипт-метод `funcName` с `parmCount` параметрами (false, если obj null). Источник: `Game/Script/InstructionFuncExist.cpp`. |
| `entry->GetTextID(out int)` | Метод объекта на записи дневника (`Diary.cpp`) **или** на метке карты (`WorldMap.cpp`): возвращает id текста записи в строковой БД (`m_ulTextID`). Глобального `@GetTextID` нет. |

### Мир, сцена и геометрия

Источники: `Engine/SceneBase.cpp`, `Game/GameSceneBase.cpp`, `Game/ActorScriptClass.cpp`, `Game/StdScriptContext.cpp`.

| Функция | N | Описание |
|---------|---|----------|
| `Trigger(object recv, ...)` | ≥2 | Шлёт событие `CGameTrigger` (хвостовые аргументы как параметры) получателю `recv`. Вариативная, динамическая диспетчеризация. |
| `TriggerWorld(...)` | ≥1 | Шлёт `CGameTrigger` со всеми аргументами кастомному получателю мира. |
| `TriggerWeapon(...)` | ≥1 | Только для игрока: шлёт `CGameTrigger` в скрипт-контекст оружия игрока. |
| `obj->GetScene(out object)` | 1 | Сцена-владелец актора как скрипт-класс (в HD встречается и в глобальном стиле). |
| `obj->BlockPolygons(int value, int mask)` | 2 | Помечает полигоны пасфайндинга по value/mask как заблокированные. |
| `obj->UnblockPolygons(int value, int mask)` | 2 | Обратное к `BlockPolygons`. |
| `obj->GetGroupActors(out object enum, int groupID)` | 2 | Энумератор акторов группы сцены или null. |
| `obj->SwitchLights(int groupID, bool on)` | 2 | Переключает все light-switch-акторы в группе. |
| `obj->EnableSubsets(int groupID, int subsetID, bool enable)` | 3 | Вкл/выкл рендер-подмножество у каждого актора группы. |
| `obj->EnableSubsets(... , bool forceNow)` | 4 | То же; `forceNow` применяет немедленно. |
| `AddScene(string isc)` | 1 | **HD-only (по вызовам).** Загружает/вставляет внутреннюю сцену `.isc` по имени. |
| `RemoveScene(object)` | 1 | **HD-only (по вызовам).** Удаляет сцену из менеджера сцен. |
| `RemoveWorld()` | 0 | **HD-only (по вызовам).** Разбирает текущий мир (отложенно). |
| `EnableGeometry(string name, bool on)` | 2 | **HD-only (по вызовам).** Показывает/скрывает именованное подмножество геометрии вызывающего актора. |
| `ActivateInitGameOverride(string xml)` | 1 | **HD-only (по вызовам).** Пушит экран-оверрайд цикла (напр. выбор персонажа). |
| `SendPlayerEnemy(object player, object enemy)` | 2 | **HD-only (по вызовам).** Регистрирует `enemy` как враждебного игроку (подсказка боевому ИИ). |
| `GetAnimationLength(out float)` | 1 | **HD-only (по вызовам).** Длительность текущей/дефолтной анимации актора. |
| `LookAsyncCamera(string bone)` | 1 | **HD-only (по вызовам).** Поворачивает актора смотреть на камеру, отслеживая названную кость, асинхронно. |

### LSH-NPC с костной анимацией — `CActorBipedLSH` (`obj->`)

Источник: `Game/Game/ActorBipedLSH.cpp` (LSH = вариант LS-head с lip-sync/костями).

| Метод | N | Описание |
|-------|---|----------|
| `obj->lshHasAnimation(out bool, string name)` | 2 | Есть ли названная LSH-анимация. |
| `obj->lshPlayAnimation(float start, float end)` | 2 | Играет LSH-анимацию с кадра `start` по `end`; очищает активные LSH-звуки. |
| `obj->lshPlayAnimation(float start, float end, bool blend)` | 3 | То же; `blend` — кросс-фейд с текущей анимации. (Формы на 0/1 арг — у cutscene-варианта `CActorBipedLSHCS`.) |
| `obj->lshStopAnimation()` | 0 | Останавливает текущую LSH-анимацию; очищает blend-список и звуки. |
| `obj->lshWaitForAnimEnd()` / `lshWaitForAnimEnd(var)` | 0 / 1 | **Latent.** Уступает до конца текущей LSH-анимации. |
| `obj->lshGetAnimTimes(string name, out float start, out float end)` | 3 | Времена начала/конца названной анимации. |
| `obj->lshPlaySpeech(string mms)` | 1 | Загружает+играет lip-sync/речь `.mms` на LS-head. |
| `obj->lshStopSpeech()` | 0 | Останавливает речь; отсоединяет данные речи; очищает её звуки. |
| `obj->lshHasSpeech(out bool, string name)` | 2 | **HD-only (по вызовам).** Доступна ли речь с этим именем. (В 2005 вместо неё латентная `lshWaitForSpeechEnd()`.) |

### Системы частиц — огонь/дым (`obj->` + создатели)

Источник: `Game/Game/ActorScripted.cpp` (+ добавления HD).

| Функция | N | Описание |
|---------|---|----------|
| `CreateFire(out object, string name, int n)` | 3 | **HD-only (по вызовам).** Создаёт актор-систему частиц огня; `n` — размер/количество. |
| `CreateSmoke(out object, string name, int n)` | 3 | **HD-only (по вызовам).** Создаёт актор-систему частиц дыма; тот же интерфейс. |
| `ps->AddSource(vector pos, vector dir, float spreadAngle)` | 3 | Добавляет источник эмиссии в `pos`, испускающий вдоль `dir` с полууглом конуса `spreadAngle`. |
| `ps->Enable()` / `ps->Enable(bool)` | 0 / 1 | Включает/показывает объект сцены (`CActorScripted`). |
| `ps->Fade()` / `ps->Fade(bool fadeOut)` | 0 / 1 | Появление/исчезновение системы частиц (`CActorScripted`). |
| `ps->SetLifeTime(float seconds)` | 1 | **HD-only (по вызовам).** Задаёт время жизни частиц. |
| `obj->SetOpacity(float opacity)` | 1 | **HD-only (по вызовам).** Задаёт прозрачность объекта (0..1). |
| `obj->SetRotation(float a)` / `SetRotation(float a, float b)` | 1 / 2 | Поворот объекта сцены (`CActorScripted`). |
| `obj->SetRotationY(float angle)` | 1 | Поворот объекта сцены вокруг оси Y (`CActorScripted`). |

### Звук (глобальный 3D) — `CActorSoundSourceContext`

Источник: `Game/Game/ActorSoundSourceContext.cpp`.

| Функция | N | Описание |
|---------|---|----------|
| `PlayGlobalSound(string name, vector offset[, float vol, float minDist, float maxDist])` | 2–5 | Играет незацикленный 3D-звук в позиции актора + `offset`, масштабируя глобальной громкостью. Дефолты: vol 1.0, minDist 100, maxDist 1e9. |
| `PlayLoopedGlobalSound(out object src, string name, vector offset[, float vol, ...])` | 3–5 | Зацикленный вариант; возвращает играющий источник в arg0 для управления. |
| `IsExisting3DSound(out bool, string name)` | 2 | Существует ли 3D-звук с таким именем. |
| `Is3DSoundLoaded(out bool, string name)` | 2 | **Latent.** Полностью ли загружен названный 3D-звук. |
| `WaitFor3DSoundToLoad(string name)` | 1 | **Latent.** Уступает до завершения асинхронной загрузки звука. |
| `IsSoundPlaying(out bool, string name)` | 2 | **HD-only (по вызовам).** Проигрывается ли названный источник звука. |
| `src->FadeIn(float time)` / `src->FadeOut(float time)` | 1 | Появление/затухание источника звука за `time` секунд (`ActorSoundSource.cpp`). |

### Огибающие, пламя, пути, метки, detail-объекты (`obj->`)

| Метод | N | Описание |
|-------|---|----------|
| `obj->RemoveRTEnvelope()` | 0 | `CActorAnimBone`: убирает ray-trace огибающую коллизии актора. |
| `flame->GetLength(out float)` | 1 | Заданная длина актора-пламени (`ActorFlame.cpp`). |
| `path->GetLength(out float, bool streamline)` | 2 | Длина объекта-пути сцены с опц. сглаживанием (`SceneBase.cpp`). |
| `flame->SetLength(float)` | 1 | Задаёт длину геометрии пламени. |
| `obj->RemoveOnUnload()` / `RemoveOnUnload(bool)` | 0 / 1 | Detail-актор: флаг на удаление при выгрузке сектора (удаляет сразу, если уже выгружен). |
| `obj->GetName(out string)` | 1 | Имя объекта сцены (`CSceneBase`). |
| `mark->GetType(out int)` | 1 | Тип метки карты мира (`CWorldMap`). |
| `mark->GetTime(out float)` | 1 | Временная метка метки карты. |

### Бартер/труп инвентаря — `CContainerScriptContext`

Источник: `Game/Game/ContainerScriptContext.cpp`. Вызывается глобально (`@Barter(a0)`); аргумент — контейнер игрока.

| Функция | N | Описание |
|---------|---|----------|
| `Barter(object playerContainer)` | 1 | **Latent.** Открывает UI бартера между контейнером игрока и контейнером контекста (ставит `CInventoryOverride`). Блокирует до закрытия. |
| `WorkWithCorpse(object playerContainer)` | 1 | **Latent.** Вариант оверрайда для обыска трупа. Блокирует до закрытия. |

### Дневник — `CUIDiaryContext`

| Функция | N | Описание |
|---------|---|----------|
| `GetDiarySelectedSection(out int)` | 1 | Индекс текущей выбранной секции дневника. |
| `SetDiarySelectedSection(int)` | 1 | Задаёт выбранную секцию дневника. |

### Случайный выбор — `CStdScriptContext`

| Функция | N | Описание |
|---------|---|----------|
| `RandOneOf(out value, int w1..wN, v1..vN)` | 2N+1 (нечётное, ≥3) | Вариативная: out-слот, затем N неотрицательных весов, затем N кандидатов. Выбирает один по взвешенному random (`Util::RandMulti`). Отрицательный вес — ошибка. |

### Перечисление сохранений (HD)

Все **HD-only (по вызовам)** — в движке 2005 нет скрипт-API перечисления сохранений.

| Функция | N | Описание |
|---------|---|----------|
| `CreateSaveEnumerator(out object enum)` | 1 | Создаёт энумератор сохранений; null при сбое. Итерация `enum->Next(out object save)`; каждое сохранение даёт методы ниже. |
| `DeleteGame(string fileName)` | 1 | Удаляет файл сохранения с именем `fileName`. |
| `SetSaveProperty(int index, value)` | 2 | Ставит свойство в слот `index` для следующего/текущего сохранения (напр. тег активного персонажа/сценария). |
| `save->GetSaveTime(out int, out int, out int, out int, out int)` | 5 | Компоненты времени сохранения (год/месяц/день/час/минута). |
| `save->IsQuickSave(out bool)` | 1 | Является ли запись быстрым сохранением. |
| `save->GetFileName(out string)` | 1 | Имя файла записи сохранения (передаётся в `DeleteGame`). |

### Постоянный реестр и строковые/математические помощники (HD)

Все **HD-only (по вызовам)**.

| Функция | N | Описание |
|---------|---|----------|
| `GetRegistryData(out value, string key, default)` | 3 | Читает постоянную запись реестра `key` (между сохранениями); пишет `default`, если нет (напр. флаги прохождения кампании). |
| `SetRegistryData(string key, value)` | 2 | Пишет `value` в постоянный реестр под ключом `key`. |
| `format(out string result, string fmt, ...)` | var | Форматтер строк в стиле printf/`%`; пишет результат в `result`. |
| `round(float x, out float r)` | 2 | Округляет `x` в `r` (для снэпа значений слайдеров). |
| `shift(out value, int by, int max)` | 3 | Циклический сдвиг индекса — сдвигает на `by` с заворачиванием в диапазоне. |

> Примечание: `@door1` / `@door2` — **не функции**; они встречаются только внутри строковых литералов имён объектов вроде `"theater@door1"`, называя конкретный экземпляр двери в локации, передаваемый методу переключения двери.

### Настройки звука (HD)

Все **HD-only (по вызовам)** из `ui_options.sc`. Громкости 0.0–1.0.

| Функция | N | Описание |
|---------|---|----------|
| `GetVolMaster(out float)` / `SetVolMaster(float)` | 1 | Общая громкость. |
| `GetVolMusic(out float)` / `SetVolMusic(float)` | 1 | Громкость музыки. |
| `GetVolSounds(out float)` / `SetVolSounds(float)` | 1 | Громкость звуковых эффектов. |
| `GetVolVoice(out float)` / `SetVolVoice(float)` | 1 | Громкость голоса/диалогов. |

### Настройки видео (HD)

Все **HD-only (по вызовам)** из `ui_options.sc` / `ui_options_page_video.sc`.

| Функция | N | Описание |
|---------|---|----------|
| `GetGammaCorrection(out float)` / `SetGammaCorrection(float)` | 1 | Гамма-коррекция (слайдер ~0.5–1.25). |
| `EnableBloom(bool)` / `IsBloomEnabled(out bool)` | 1 | Bloom вкл/выкл + запрос. |
| `EnableDOF(bool)` / `IsDOFEnabled(out bool)` | 1 | Глубина резкости вкл/выкл + запрос. |
| `EnableFXAA(bool)` / `IsFXAAEnabled(out bool)` | 1 | Сглаживание FXAA вкл/выкл + запрос. |
| `EnableSSAO(bool)` / `IsSSAOEnabled(out bool)` | 1 | SSAO (ambient occlusion) вкл/выкл + запрос. |
| `EnableMotionBlur(bool)` / `IsMotionBlurEnabled(out bool)` | 1 | Размытие движения вкл/выкл + запрос. |
| `EnableShadows(bool)` / `IsShadowsEnabled(out bool)` | 1 | Динамические тени вкл/выкл + запрос. |
| `EnableVSync(bool)` / `IsVSyncEnabled(out bool)` | 1 | Вертикальная синхронизация вкл/выкл + запрос. |
| `GetMaxAnisotropic(out float)` | 1 | Макс. поддерживаемый уровень анизотропной фильтрации. |
| `GetCurrentAnisotropic(out float)` / `SetAnisotropic(float)` | 1 | Текущий уровень анизотропии + задать (0..max). |
| `GetResolutionsCount(out int)` | 1 | Число доступных разрешений экрана. |
| `GetResolution(int index, out int w, out int h)` | 3 | Ширина/высота разрешения с индексом `index`. |
| `GetCurrentResolution(out int index)` / `SetResolution(int index)` | 1 | Индекс текущего разрешения + выбрать. |

### Ввод и привязка клавиш (HD)

Все **HD-only (по вызовам)** (`ui_options.sc`, `ui_key_action_list.sc`).
Опечатка «Sensivity» — настоящее имя натива.

| Функция | N | Описание |
|---------|---|----------|
| `GetMouseSensivity(out float)` / `SetMouseSensivity(float)` | 1 | Чувствительность мыши. |
| `GetGamepadSensivity(out float)` / `SetGamepadSensivity(float)` | 1 | Чувствительность взгляда геймпада. |
| `GetGamepadUISensivity(out float)` / `SetGamepadUISensivity(float)` | 1 | Чувствительность UI-курсора геймпада. |
| `InvertMouse(bool)` / `IsMouseInverted(out bool)` | 1 | Инверсия оси Y мыши + запрос. |
| `InvertGamepad(bool)` / `IsGamepadInverted(out bool)` | 1 | Инверсия оси Y геймпада + запрос. |
| `EnableGamepadRumble(bool)` / `IsGamepadRumbleEnabled(out bool)` | 1 | Вибрация геймпада вкл/выкл + запрос. |
| `SaveConfig()` | 0 | Сохраняет все значения опций/конфига на диск. |
| `WriteBinds()` | 0 | Сохраняет текущие привязки клавиш на диск. |
| `Bind(int vkey, int action)` | 2 | Привязывает код виртуальной клавиши к id действия. |
| `Unbind(int vkey)` | 1 | Убирает привязку на клавише. |
| `GetBindType(out int type, int vkey)` | 2 | Тип привязки: 0 нет, 1 действие, 2 команда. |
| `GetBindAction(out int action, int vkey)` | 2 | Id действия на клавише (при типе 1). |
| `GetBindCommand(out string cmd, int vkey)` | 2 | Консольная команда на клавише (при типе 2, напр. "qsave"). |
| `GetKeyName(out string name, int vkey)` | 2 | Отображаемое имя кода виртуальной клавиши. |
| `IsValidVirtualKey(out bool, int vkey)` | 2 | Валиден ли код как привязываемая клавиша (коды ≥256 — мышь/геймпад). |
| `GetKeyboardState(out object)` | 1 | Объект состояния клавиатуры (см. `kb->GetKeyState` ниже); null при сбое. |
| `kb->GetKeyState(out int state, int vkey)` | 2 | На объекте состояния клавиатуры: текущее состояние данной виртуальной клавиши. |
| `CreateKeyEnumerator(out object)` | 1 | Энумератор привязываемых клавиш (`->Next(out bool ok, out int vkey)`). |

### Достижения, вибрация и пост-обработка (HD)

| Функция | N | Описание |
|---------|---|----------|
| `UnlockAchievement(string id)` | 1 | **HD-only.** Открывает названное достижение платформы (напр. `"ACHIEVEMENT_MIGHT"`). |
| `RumblePlay(float strength, int durationMs)` | 2 | **HD-only.** Вибрация геймпада силой `strength` (0..1) на `durationMs`. |
| `ModGetDOFParams(out float, out float, out float, out float)` | 4 | **HD-only.** Читает четыре параметра DOF «Mod». |
| `ModSetDOFParams(float, float, float, float)` | 4 | **HD-only.** Задаёт четыре параметра DOF «Mod». |
| `ModSetDOFEnabled(bool)` / `ModIsDOFEnabled(out bool)` | 1 | **HD-only.** Оверрайд DOF «Mod» вкл/выкл + запрос. |
| `SetSepia(float amount, float intensity)` | 2 | **HD-only.** Пост-эффект сепии: степень смешивания + интенсивность (0,0 = выкл). |
| `SetAmbientMod(vector rgb)` | 1 | **HD-only.** Модуляция цвета окружающего света ([0,0,0] = нет). |

### Замечания по переклассификации

Несколько имён, перечисленных в других местах, — **не** то, на что указывало их
расположение: `DisableUpdate()` — натив `CActorStatic` (`ActorStatic.cpp`), а не
UI-вызов, хотя HD-окна контейнеров вызывают его без префикса.
`Enable`/`Fade`/`SetRotation`/`SetRotationY` — методы объектов сцены
`CActorScripted`, а не методы окна. `GetName`/`GetType`/`GetTime`/`GetLength` —
методы сцены/карты мира/пламени/пути.

---

## Cross-reference — неточности старой документации, исправленные в этом проходе

В ходе аудита оригинальных исходников были выявлены следующие проблемы в
предыдущей документации и исправлены выше:

1. **`NewGame` НЕ находится в CStdScriptContext.** Он живёт в `CUIGameMenuContext`
   (только в скриптовом контексте game-меню — вызывается из скриптов главного меню UI).
2. **`RandVec2D` принимает два `out float` аргумента**, а не `(out vector, float radius)`.
   Параметр float **не используется**.
3. **`AddItemActor` недостижим** в этой сборке из-за тавтологического
   раннего возврата `if (ulParmCount != 6 || ulParmCount)`.
4. **`Hold(object)` (с 1 аргументом) недостижим** — объявлен, но не зарегистрирован.
5. **Функции Player-Context находятся в `CCPPlayer::CScriptContext`**, а не в
   `CPlayerWeaponScriptContext`. Weapon context (§4) — это отдельный, небольшой
   контекст с всего 5 записями (`GetGeometryLocator`, `MakeBillboard`,
   `RemoveBillboard`, `GetLitColor`, `SetLitColor`).
6. **У `CActorLight` есть только `IsOn`**. Методы `Switch`/`SetColor`/`GetColor`
   находятся в его подклассе `CActorLightStatic`.
7. **`CActorFog::SwitchFlashlight`/`SwitchVisir`/`Get/SetForce`/`Get/SetSpeed`
   не существуют.** Методы Switch/Set, перечисленные в старых документах,
   принадлежат `CCPPlayer::CScriptContext` или `CActorPlayer::CEffectScriptContext`.
8. **Имена методов `CScriptVector` и `CScriptSet` в нижнем регистре**
   (`add`, `size`, `clear`, `in`, `erase`, `get`, `set`, `resize`, `remove`,
   `find`), а не в title-case, как было показано ранее. Метод `Iterator()`
   отсутствует.
9. **`SetAttackState` на контроллере игрока на самом деле ЧИТАЕТ флаг
   m_bAttacking** (реализация использует `pVars[0]->Get(...)` вместо `Set`).
   Вероятный баг в оригинальном коде; задокументирован как наблюдаемый.
10. **`SignalDeath(object)`** отправляет событие смерти в **self**, а не в
    переданный объект. Аргумент — это *умерший*, но получателем является
    владелец скрипта.
11. **`Intersect`** и **`Trigger`** задокументированы в соответствии с
    фактическим порядком в исходниках: `BroadcastPlayerDamage(damager, scene, player)` и т.д.
