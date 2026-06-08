# Pathologic 2005 — Script VM: задачи и `TaskCall`

Как работают **задачи** (tasks) в скриптовой ВМ Pathologic 2005 — что это
такое, как они выполняются, как вкладываются друг в друга, как в них
диспетчеризуются события и как компилятор (`scomp.exe`) преобразует
ключевые слова исходного уровня `task` / `maintask` в байткод.

Все ссылки указывают на `SRC/PlagueCity/Game/Script/` (движок) и
`SRC/PlagueCity/tools/sbuild/` (компилятор).

---

## 1. Что такое задача

**Задача** — это скриптовая единица, объединяющая:

1. **Набор локальных переменных** (*task vars*), которые сохраняются
   между вызовами событий, пока задача находится в стеке.
2. **Набор обработчиков событий** (`OnUse`, `OnHit`, `OnTimer`, …),
   в которые движок может диспетчеризовать события, пока эта задача
   является текущей активной.
3. **Функцию `init()`**, которая выполняется один раз при входе в задачу.

Задача — это *не*:

- Поток (thread) — в любой момент только одна задача является "текущей";
  вложенность реализована через явный стек вызовов.
- Функция — функции живут внутри задач; задача — это лексический
  контейнер.
- Корутина — на уровне языка нет приостановки выполнения, кроме той,
  что встроенные скриптовые экстерналы `@Sleep` / `@Hold` выполняют
  через хост.

Ближайшая аналогия — **состояние конечного автомата** со своими
локальными переменными и обработчиками событий. Переключение задач
переключает и локальное хранилище, и набор событий, доступных для
диспетчеризации.

`CScript::TASK` ([Script.h:28-33](SRC/PlagueCity/Game/Script/Script.h#L28-L33)):

```cpp
struct TASK {
    unsigned long m_ulVarCount;                          // # of task vars
    boost::scoped_array<unsigned char> m_pVarTypes;      // their VAR_TYPEs
    unsigned long m_ulParmCount;                         // # leading vars that are init() parameters
    TEvents m_Events;                                    // event handlers, keyed by event ID
};
```

`TEvents` — это `map<unsigned long, EVENT>`, где каждый `EVENT` содержит
смещение точки входа в коде (`m_ulOp`) плюс количество и типы своих
аргументов.

---

## 2. Синтаксис исходного уровня

Задачи объявляются с помощью ключевого слова `task` или `maintask`.
Грамматика
([parser.y:188-253](SRC/PlagueCity/tools/sbuild/parser.y#L188-L253)):

```
task        NAME                { vars… funcs… }
task        NAME : BASE         { vars… funcs… }
maintask    NAME                { vars… funcs… }
maintask    NAME : BASE         { vars… funcs… }
```

Тело задачи содержит, в произвольном порядке:

- `var TYPE name[, name2…];` — **переменные задачи**, сохраняющиеся
  между вызовами событий в эту задачу.
- Обычные функции `void` / типизированные функции, включая обработчики
  событий (функции, имена которых соответствуют объявлению `event NAME ID;`
  в области видимости; см. [events_2005.md](events_2005.md)).
- Специальную функцию с именем `init(...)` — см. §3.

`task NAME : BASE { … }` *наследуется* — на этапе разбора `TaskUnion`
([parser.y:8-29](SRC/PlagueCity/tools/sbuild/parser.y#L8-L29))
добавляет в начало переменные базовой задачи и клонирует её функции,
увеличивая `m_ulLevel` (используется в `super.foo()` для устранения
неоднозначности переопределений). Унаследованные функции без
переопределений в производной задаче становятся непосредственно
вызываемыми; переопределения скрывают их. Унаследованные переменные
нельзя объявить повторно (ошибка компиляции).

`maintask` имеет идентичное тело, но помечает задачу как **стартовую**
(`m_bStart = true`, [parser.y:226](SRC/PlagueCity/tools/sbuild/parser.y#L226))
— ровно одна на скрипт. В противном случае компилятор завершает работу
с сообщением `"Several main tasks found"` или `"No starting task defined"`
([Program.cpp:691,919](SRC/PlagueCity/tools/sbuild/Program.cpp#L691)).

### Пример

```c
// quest_b1_01.sc
maintask TQuest {
    var object m_Whitemask;
    var object m_Birdmask1, m_Birdmask2;
    var object m_Trigger;

    void init(void) {
        @SetTimeEvent(0, 11);
        object scene; @GetMainOutdoorScene(scene);
        m_Whitemask = SpawnStationaryActorForce(scene, "pt_b1q01_whitemask",
                                                "pers_whitemask",
                                                "b1q01_whitemask.xml");
        ...
        for (;;) { @Hold(); }
    }

    void OnGameTime(int id, float fTime) { ... }   // event handler
    void OnTrigger(string name)          { ... }   // event handler

    void Fail(void)    { ... }                     // private helper
    void Cleanup(void) { disable OnTrigger; ... }
}
```

---

## 3. Функция `init()`: точка входа задачи

Каждая задача **должна** иметь функцию `init()` — именно она вызывается
при входе в задачу.

- Для **maintask** функция `init()` не должна принимать параметров и
  является точкой входа скрипта ([Program.cpp:649](SRC/PlagueCity/tools/sbuild/Program.cpp#L649)).
- Для **вызываемых задач** (входящих через `TaskCall`) `init()` может
  принимать параметры. Они становятся **начальными слотами локального
  кадра задачи** (`m_ulParmCount` из `m_ulVarCount`). Вызывающая
  сторона помещает значения аргументов в стек перед выполнением
  `TaskCall`; функция `init()` новой задачи видит их как свои первые
  переменные.

В терминах байткода точка входа задачи хранится в заголовке скрипта
как `m_ulRunOp` (только для стартовой задачи), а в остальных случаях
обнаруживается через скомпилированную запись функции `init` задачи.
Компилятор выдаёт смещение кода `init` как начало первого байта
исполняемого кода maintask
([Program.cpp:951-952](SRC/PlagueCity/tools/sbuild/Program.cpp#L951-L952)).

---

## 4. Структуры данных времени выполнения

Состояние активной задачи живёт в `CScriptRun::Data`
([ScriptRun.h:57-91](SRC/PlagueCity/Game/Script/ScriptRun.h#L57-L91)):

```cpp
class Data {
    ...
    boost::scoped_array< CSerPtr<IVariableEx*, AID_Variable> > m_pGlobalVars;
    TTasks m_Tasks;     // call stack of tasks
    TStack m_Stack;     // single flat variable stack, shared by all tasks
    unsigned long m_ulCurOp;
    CSerPtr<IGeneric*, AID_Serializable> m_pOpData;
};
```

Каждая запись в `m_Tasks` — это `TASK_CALL`
([ScriptRun.h:47-53](SRC/PlagueCity/Game/Script/ScriptRun.h#L47-L53)):

```cpp
struct TASK_CALL {
    unsigned long m_ulTaskID;       // index into CScript::m_pTasks
    unsigned long m_ulStackPtr;     // base of this task's frame in m_Stack
    TCalls        m_Calls;          // per-task function-call stack
    TDisabledEvents m_DisabledEvents;   // refcounted event-id → disable count
};
```

Три момента, на которые стоит обратить внимание:

- **`m_Stack` глобален** — есть один стек переменных, общий для всех
  активных задач. Локальный кадр каждой задачи начинается с её
  `m_ulStackPtr` и расширяется вверх.
- **`m_Calls` индивидуален для каждой задачи** — вызовы функций внутри
  активной задачи помещаются/извлекаются здесь; нельзя выйти из функции
  через границы задач.
- **`m_DisabledEvents` индивидуален для каждой задачи** — инструкции
  `disable EventName` / `enable EventName` влияют только на верхнюю
  задачу (со счётчиком ссылок для вложенных пар disable/enable).

### Структура кадра стека

Для одной вложенной задачи на вершине `m_Tasks`:

```
m_Stack:  [ ... caller frames ... | arg0 arg1 … argN local0 local1 … ]
                                  ^
                                  m_ulStackPtr of current task
```

Аргументы были помещены вызывающей стороной *до* выполнения `TaskCall`.
`PushStack` внутри `TaskCall` добавляет остальные локальные переменные
поверх них
([InstructionTaskCall.cpp:25](SRC/PlagueCity/Game/Script/InstructionTaskCall.cpp#L25)):

```cpp
data.PushStack(task.m_ulVarCount, task.m_pVarTypes.get(), task.m_ulParmCount);
```

Аргумент `uOffset = m_ulParmCount` указывает `PushStack` вставить
новые локальные переменные **перед** последними `m_ulParmCount`
существующими записями стека
([ScriptRun.cpp:200-207](SRC/PlagueCity/Game/Script/ScriptRun.cpp#L200-L207))
— именно так аргументы оказываются под локальными переменными.

---

## 5. Байткод: TaskCall / TaskReturn

### `TaskCall <task_id>`

Форма байткода: 1 код инструкции + 1 операнд `u32` (индекс целевой
задачи). Семантика стека:

1. Вызывающая сторона ранее поместила N значений аргументов,
   соответствующих `m_ulParmCount` целевой задачи.
2. Чтение `task = pScript->GetTask(m_ulTaskID)`. Выбрасывает
   `"Invalid task ID 'N'"`, если индекс выходит за пределы.
3. Помещение нового `TASK_CALL` в `m_Tasks` с
   `m_ulStackPtr = m_Stack.size() - task.m_ulParmCount` (так что
   слоты аргументов теперь становятся первыми слотами кадра новой
   задачи).
4. Помещение остальных переменных задачи (`m_ulVarCount - m_ulParmCount`
   слотов), типизированных согласно `task.m_pVarTypes`.
5. Увеличение `m_ulCurOp` (продолжение со следующей инструкции — которой
   компилятор расположит тело `init`).

Реализация: [InstructionTaskCall.cpp:13-28](SRC/PlagueCity/Game/Script/InstructionTaskCall.cpp#L13-L28).

### `TaskReturn`

Форма байткода: 1 код инструкции, без операндов.

1. Проверяет утверждение `m_Tasks.back().m_Calls.empty()` — то есть
   *нет ожидающих кадров вызовов функций* в текущей задаче. Выйти из
   задачи можно только с самого внешнего уровня.
2. Считывает обратно ту же запись задачи. Извлекает `m_ulVarCount`
   слотов с `uOffset = m_ulParmCount` — то есть удаляет и локальные
   переменные, *и* слоты параметров, которые поместила вызывающая
   сторона
   ([InstructionTaskReturn.cpp:18](SRC/PlagueCity/Game/Script/InstructionTaskReturn.cpp#L18)):
   ```cpp
   data.PopStack(task.m_ulVarCount, task.m_ulParmCount);
   ```
   …оставляя стек родительской задачи таким же, каким он был до
   выполнения `TaskCall`. Подождите, это не совсем верно — см. замечание
   ниже.
3. Извлекает `TASK_CALL` из `m_Tasks`.
4. Увеличивает `m_ulCurOp`.

> **Тонкость — очистка аргументов.** `PopStack(N, K)` удаляет `N`
> слотов, начиная с `K`-го от вершины
> ([ScriptRun.cpp:209-218](SRC/PlagueCity/Game/Script/ScriptRun.cpp#L209-L218)).
> При `N = m_ulVarCount`, `K = m_ulParmCount` очистка удаляет ровно
> слоты между `m_ulStackPtr` и `m_ulStackPtr + (varCount - parmCount)`
> — то есть **только локальные переменные, не являющиеся параметрами**.
> Слоты параметров остаются — они были помещены вызывающей стороной
> и остаются видимыми ей как обычные значения стека. Затем вызывающая
> сторона отвечает за их извлечение (`Pop` или эпилог функции).

### Сравнение с механизмом вызова функций

Задачи и функции используют **два разных стека вызовов**:

| | `Call` / `Return` | `TaskCall` / `TaskReturn` |
|---|---|---|
| Хранилище | `m_Tasks.back().m_Calls` (вектор для каждой задачи) | `m_Tasks` (глобальный вектор) |
| Операнд вызова | смещение кода (`m_ulOp`) | индекс задачи (`m_ulTaskID`) |
| Локальный кадр? | нет — использует стек вызывающей стороны | да (`m_ulStackPtr` + собственные переменные) |
| Меж-задачный? | нет — завершается с `"Call stack underflow"`, если `m_Calls` пуст | да — это меж-задачный механизм |
| Диспетчеризация событий | не имеет отношения | у каждой задачи свои обработчики событий |

`Call`: помещает только адрес возобновления `m_ulOp` в `m_Calls`,
переходит к смещению операнда
([InstructionCall.cpp:13-25](SRC/PlagueCity/Game/Script/InstructionCall.cpp#L13-L25)).

`Return`: извлекает `m_ulPopSize` слотов, восстанавливает `m_ulOp` из
`m_Calls.back()` ([InstructionReturn.cpp:13-25](SRC/PlagueCity/Game/Script/InstructionReturn.cpp#L13-L25)).
Механизм `m_ulStackExtraPop` здесь — это то, что обрабатывает очистку
слотов аргументов обработчика событий, которые движок поместил при
диспетчеризации в задачу — см. §7.

---

## 6. Адресация переменных задачи — `TMov*` vs `Mov*`

Каждая инструкция семейства "Mov" существует в двух вариантах:

- **`Mov`, `MovB`, `MovI`, `MovF`, `MovS`, `MovV`, `MovT`** — операнды
  являются смещениями **от вершины `m_Stack`**. Пример
  ([InstructionMov.cpp:13-21](SRC/PlagueCity/Game/Script/InstructionMov.cpp#L13-L21)):
  ```cpp
  IVariableEx *pOut = *(data.m_Stack.end() - m_ulVarOut);
  ```
  Используется для аргументов, локальных переменных *текущего вызова
  функции* и т.д.
- **`TMov`, `TMovB`, `TMovI`, `TMovF`, `TMovS`, `TMovV`, `TMovT`,
  `SetNullT`** — операнды являются смещениями **от `m_ulStackPtr`
  текущей задачи**. Пример
  ([InstructionTMov.cpp:13-21](SRC/PlagueCity/Game/Script/InstructionTMov.cpp#L13-L21)):
  ```cpp
  IVariableEx *pOut = *(data.m_Stack.begin()
                       + (data.m_Tasks.back().m_ulStackPtr + m_ulVarOut));
  ```
  Используется для чтения/записи **переменных задачи** и **параметров
  `init()` задачи** — значений, которые должны пережить циклы
  вызова/возврата функций.

Компилятор выбирает вариант `T*` всякий раз, когда адресуемый символ
разрешается в привязку уровня задачи; иначе выбирается обычный вариант.
На уровне языка это невидимо — `m_Whitemask` в исходном коде выглядит
как обычная переменная.

---

## 7. События и задачи

События — это *основной* механизм для движка вызывать скрипт. Полная
таблица идентификаторов событий находится в
[events_2005.md](events_2005.md); здесь мы фокусируемся на том, как
диспетчеризация пересекается со стеком задач.

### Таблица событий для каждой задачи

Каждая задача может регистрировать обработчики для любого подмножества
идентификаторов событий (поле `m_Events` в `CScript::TASK`). Кроме того,
есть единая общая для скрипта таблица `m_GlobalEvents` для событий, не
привязанных к конкретной задаче. Компилятор сериализует обе:

```
[ulTaskCount] [task records...]                     # each task's events
[ulGlobalEventCount] [global event records]         # script-wide fallback
```

([Program.cpp:954-985,987-1004](SRC/PlagueCity/tools/sbuild/Program.cpp#L954-L985);
[Script.cpp:315-348](SRC/PlagueCity/Game/Script/Script.cpp#L315-L348)).

### Порядок диспетчеризации

`CScriptRun::SendEvent(eventID, varCount, vars)`
([ScriptRun.cpp:242-301](SRC/PlagueCity/Game/Script/ScriptRun.cpp#L242-L301)):

1. Смотрит на `m_Tasks.back()` — **только верхнюю задачу**. Никакого
   обхода стека задач вниз.
2. Если `m_DisabledEvents[eventID]` не ноль → `SEVENTERR_DISABLED`,
   пропуск.
3. Ищет `eventID` в `task.m_Events`. Если не найдено, откатывается к
   `m_GlobalEvents` скрипта.
4. Если не найдено ни там, ни там → `SEVENTERR_NOEVENT`. Движок
   продолжает без претензий.
5. Проверяет арность (`m_ulVarCount`). Несоответствие →
   `SEVENTERR_VARCOUNT`.
6. Помещает `varCount` слотов, типизированных согласно сигнатуре
   обработчика, копируя значения `EXTERNAL_VARIABLE` из движка.
   Несоответствие типов в любом слоте → извлечение, возврат
   `SEVENTERR_BADARGS`.
7. Помещает `FUNCTION_CALL` в `m_Tasks.back().m_Calls` с
   `m_ulStackExtraPop = varCount` (так что при возврате из обработчика
   помещённые слоты аргументов очищаются автоматически — см.
   [InstructionReturn.cpp:19](SRC/PlagueCity/Game/Script/InstructionReturn.cpp#L19)).
8. Переход к `event.m_ulOp` и выполнение inline (`Run(0.0f)` — движок
   блокируется до тех пор, пока обработчик не завершится через `return`
   или `TaskReturn`).

Ключевое следствие: **скрипт может игнорировать событие, находясь в
задаче, которая не определяет обработчик для него**, и движку не нужно
об этом знать. Переключение задач переключает, какие события вы
обрабатываете.

### Инструкции `enable` / `disable`

Конструкции уровня исходного кода `enable OnTrigger;` / `disable OnTrigger;`
компилируются в `INSTR_ENABLE_EVENT` / `INSTR_DISABLE_EVENT`. Обе:

- Влияют **только на верхнюю задачу** (`m_Tasks.back()`).
- Изменяют `m_DisabledEvents[eventID]`, который является счётчиком
  ссылок
  ([InstructionEventDisable.cpp:18](SRC/PlagueCity/Game/Script/InstructionEventDisable.cpp#L18),
  [InstructionEventEnable.cpp:18-23](SRC/PlagueCity/Game/Script/InstructionEventEnable.cpp#L18-L23)).
- Утверждают (только в debug), что идентификатор события действительно
  существует в `m_Events` этой задачи.

Подсчёт ссылок позволяет вложенным парам `disable`/`enable` составляться:

```c
disable OnTrigger;   // count = 1
disable OnTrigger;   // count = 2
enable  OnTrigger;   // count = 1, still disabled
enable  OnTrigger;   // count = 0, erased → now enabled
```

Это состояние **относится к кадру задачи** и отбрасывается при возврате
из задачи; повторный вход в ту же задачу начинается с пустого
`m_DisabledEvents`.

---

## 8. Жизненный цикл: от начала до конца

### 8.1 Загрузка скрипта

[Script.cpp:285-358](SRC/PlagueCity/Game/Script/Script.cpp#L285-L358):

1. Чтение глобальных переменных (количество + типы).
2. Чтение пула данных.
3. Чтение списка внешних/глобальных ссылок на функции (пары
   имя + количество аргументов).
4. Чтение `m_ulRunTask` (u32) и `m_ulRunOp` (u32) — индекс стартовой
   задачи и смещение в коде.
5. Чтение `m_ulTaskCount`, затем каждой записи `TASK`: количество
   переменных, типы переменных, количество параметров, количество
   событий, затем для каждого события `(id, op, varCount, varTypes)`.
6. Чтение `m_GlobalEvents` тем же способом.
7. Чтение кода: `m_ulCodeSize` инструкций, каждая декодируется
   через `CreateInstruction(opcode, …)`.

### 8.2 Конструирование запуска скрипта

`CScriptRun::CScriptRun(script, context)`
([ScriptRun.cpp:42-73](SRC/PlagueCity/Game/Script/ScriptRun.cpp#L42-L73)):

1. Выделение слотов глобальных переменных (по одному на каждую
   глобальную переменную уровня скрипта).
2. Выделение кэша разрешения глобальных функций.
3. Построение начального `TASK_CALL` с `m_ulTaskID = GetRunTask()`,
   `m_ulStackPtr = 0`.
4. Помещение сторожевого `FUNCTION_CALL` с `m_ulOp = -1` (так что
   случайный `Return` корректно выходит из скрипта).
5. `PushStack(task.m_ulVarCount, ...)` — выделение переменных задачи.
   Утверждение `ASSERT(!task.m_ulParmCount)` обеспечивает правило, что
   `init()` maintask не принимает параметров.
6. Установка `m_ulCurOp = GetRunOp()` — переход к `init` стартовой
   задачи.
7. Уведомление подписчиков через `SCRIPT_NOTIFY_START`.

### 8.3 Выполнение

`CScriptRun::Run(deltaTime)`
([ScriptRun.cpp:176-198](SRC/PlagueCity/Game/Script/ScriptRun.cpp#L176-L198)):

Простой цикл fetch-decode-execute с жёстким ограничением в 1 000 000
инструкций на вызов. Останавливается, когда `m_ulCurOp == -1`
(достигается, когда восстанавливается `m_ulOp` сторожевого
`FUNCTION_CALL` — то есть выполнение верхнего уровня скрипта
завершилось). Экстерналы движка, которые "блокируются" (`@Sleep`,
`@Hold` и т.д.), возвращают `true` из `Execute()` для уступки —
цикл возвращает `false`, и скрипт возобновится с той же инструкции
в следующем кадре.

### 8.4 Состояние между кадрами

И `m_Tasks`, и `m_Stack` сериализуются в `CScriptRun::SaveState` /
восстанавливаются в конструкторе загрузки — полное состояние, включая
все находящиеся в процессе выполнения кадры задач, записи вызовов
функций, счётчики отключения событий и стек переменных
([ScriptRun.cpp:119-152, 75-117](SRC/PlagueCity/Game/Script/ScriptRun.cpp#L75-L152)).
Это то, что обеспечивает работу `save`/`load` посреди квеста.

---

## 9. Номера задач — напоминание

Идентификаторы задач — это **позиционные индексы в `m_pTasks`**,
назначаемые компилятором в порядке объявления в исходном коде (после
удаления мёртвых задач). Никакой идентификатор задачи не имеет какого-либо
семантического значения на стороне движка — единственная "особая"
задача — та, на которую указывает поле `m_ulRunTask` заголовка скрипта.

Добавление, удаление, переупорядочивание или делание недостижимым блока
`task` в исходном коде сдвинет идентификаторы всех последующих задач.
Это нормально, потому что операнды `TaskCall` запекаются на этапе
компиляции, а движок рассматривает идентификаторы как непрозрачные.

(См. полный анализ внизу — поиск по "Task numbers" в истории чата.)

---

## 10. Собираем всё вместе — пошаговый разбор `TQuest`

Для фрагмента `quest_b1_01.sc` из §2:

1. Этап компиляции: одна `maintask TQuest` является единственной
   задачей — у скрипта одна запись в `m_pTasks`, ID 0, с
   `m_ulVarCount = 4` (`m_Whitemask`, `m_Birdmask1`, `m_Birdmask2`,
   `m_Trigger`), `m_ulParmCount = 0`. `m_Events` содержит записи для
   идентификаторов событий скрипта `OnGameTime` и `OnTrigger`.
   `m_ulRunTask = 0`, `m_ulRunOp` указывает на точку входа `init`.
2. Движок создаёт экземпляр скрипта. `m_Tasks = [ { taskID=0,
   stackPtr=0, calls=[{op=-1}], disabled={} } ]`, `m_Stack` имеет
   4 NULL-слота переменных для переменных задачи.
3. `init` выполняется: `@SetTimeEvent(0,11)` (что, предположительно,
   регистрирует актёра для `OnGameTime`), создаёт актёров, сохраняет
   их в слоты `m_*mask` через `TMovT`, наконец `for (;;) @Hold();` —
   уступает на каждом кадре.
4. В момент времени 11ч движок отправляет событие 9 (`OnGameTime`)
   с двумя аргументами. `SendEvent`: `m_Tasks.back().m_Events[9]` —
   это обработчик `OnGameTime`. Два слота помещаются в стек,
   `FUNCTION_CALL` `{ m_ulOp = m_ulCurOp /* the @Hold opcode */,
   m_ulStackExtraPop = 2 }` помещается в `m_Calls`, `m_ulCurOp`
   переходит к точке входа обработчика, вызывается `Run(0)`.
   Обработчик выполняет свою работу, доходит до `Return`, который
   извлекает 2 слота аргументов и восстанавливает выполнение на
   инструкции `@Hold`.
5. В конечном счёте каскад `OnTrigger` приводит к `Cleanup()`,
   который вызывает `@RemoveActor(self())` и доходит до конца кода.
   Функция возвращается своему вызывающему; цепочка вызовов в конечном
   итоге разматывается до сторожевого `m_ulOp = -1`; цикл `Run`
   выходит с `true`; скрипт уведомляется `SCRIPT_NOTIFY_STOP` и
   в конечном итоге освобождается.

На протяжении всей жизни этого скрипта в стеке всегда находится
только одна задача. Более богатые случаи (многозадачные скрипты)
используют `TaskCall` для вложения дочерней задачи — обычно поведение
базового класса вроде `TAttackMeleeBase` в `arena_fighter.sc` — и
`TaskReturn` для возврата к родительской.

---

## 11. Карта исходного кода

| Концепция                       | Файл / Строка                                                                                  |
|-------------------------------|----------------------------------------------------------------------------------------------|
| Грамматика `task` / `maintask`   | `tools/sbuild/parser.y:188-253`                                                              |
| Наследование задач (`TaskUnion`) | `tools/sbuild/parser.y:8-29`                                                                 |
| Разрешение `m_bStart`         | `tools/sbuild/Program.cpp:686-694`                                                           |
| Удаление мёртвых задач             | `tools/sbuild/Program.cpp:792-817`                                                           |
| Раскладка секции задач в `.bin`    | `tools/sbuild/Program.cpp:950-985`                                                           |
| Разбор секции задач в `.bin`   | `Game/Script/Script.cpp:285-358`                                                             |
| Структура задачи (`CScript::TASK`) | `Game/Script/Script.h:28-33`                                                                 |
| Кадр вызова задачи               | `Game/Script/ScriptRun.h:47-53`                                                              |
| Реализация `TaskCall`               | `Game/Script/InstructionTaskCall.cpp:13-28`                                                  |
| Реализация `TaskReturn`             | `Game/Script/InstructionTaskReturn.cpp:12-22`                                                |
| Реализация `Call` / `Return`        | `Game/Script/InstructionCall.cpp` / `InstructionReturn.cpp`                                  |
| Семейство `TMov*` (относительно задачи)| `Game/Script/InstructionTMov*.cpp`, `InstructionSetNullT.cpp`                                |
| Семейство `Mov*` (относительно стека)| `Game/Script/InstructionMov*.cpp`                                                            |
| Диспетчеризация событий                | `Game/Script/ScriptRun.cpp:242-301` (`SendEvent`)                                            |
| Реализация `enable` / `disable`     | `Game/Script/InstructionEventEnable.cpp`, `InstructionEventDisable.cpp`                      |
| Push/pop стека                | `Game/Script/ScriptRun.cpp:200-218`                                                          |
| Сохранение/загрузка состояния               | `Game/Script/ScriptRun.cpp:75-152`                                                           |
