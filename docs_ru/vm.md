# Виртуальная машина Pathologic Script

## Архитектура

Стековая ВМ, встроенная в Engine.dll. Скрипты — это скомпилированные `.bin` файлы, исполняемые
интерпретатором байт-кода.

Существует две версии:
- **Alpha** (оригинальный Pathologic): опкоды 0x00-0x57
- **HD** (Pathologic Classic HD): опкоды 0x00-0x59 (2 дополнительных: CString/CString2 в 0x4D-0x4E)

```
┌─────────────────────────────────────────┐
│             CScriptManager              │
│  - Loads .bin files via IFileSystem     │
│  - Caches CScript by name              │
│  - Creates CScriptRun instances        │
├─────────────────────────────────────────┤
│    CScript (compiled script)            │
│  - Global variables and types           │
│  - Data pool (strings)                  │
│  - Global function table                │
│  - Tasks with events                    │
│  - Instruction array                    │
├─────────────────────────────────────────┤
│    CScriptRun (execution instance)      │
│  - Variable stack                       │
│  - Call stack (FUNCTION_CALL)           │
│  - Task stack (TASK_CALL)               │
│  - Global variable instances            │
│  - Context (IScriptContext)             │
└─────────────────────────────────────────┘
```

## Модель исполнения

### Главный цикл (`CScriptRun::Run` @ `0x10063100`)

```
counter = 0
while counter < 1,000,000:
    instruction = code[currentOp]
    currentOp++
    if instruction.Execute(data, deltaTime):
        yield  // suspend until next frame
    counter++
```

- **Лимит**: 1 000 000 инструкций на кадр
- **Yield**: инструкция возвращает `true`, чтобы приостановить исполнение
- **deltaTime**: время кадра, передаваемое в Execute как `float`

## Типы переменных

| Tag | Тип | C++ класс | Размер объекта | Описание |
|-----|------|-----------|-------------|-------------|
| 1 | bool | `CVariableBool` | 0x0C | Логическое значение |
| 2 | int | `CVariableInt` | 0x0C | 32-битное знаковое целое |
| 3 | float | `CVariableFloat` | 0x0C | 32-битный IEEE float |
| 4 | string | `CVariableString` | 0x14 | UTF-16LE строка |
| 5 | object | `CVariableObject` | 0x14 | Ссылка на объект (IScriptClass*) |
| 6 | cvector | `CVariableVector` | 0x14 | 3D вектор (x, y, z floats) |

### Преобразования типов

- `Bool <-> Int` — автоматическое
- `Int -> Float` — автоматическое
- `Float -> Int` — усечение
- `String + *` — конкатенация строкового представления

## Стек

ВМ использует единый непрерывный стек (`vector<IVariableEx*>`, ёмкость 512) для всех операций.

### Два режима адресации

**Нормальная адресация** (от вершины стека):
```c
IVariableEx* var = stack.finish[-varRef];
// varRef=1 -> top, varRef=2 -> second from top, etc.
```

**Адресация задачи** (от базы задачи):
```c
u32 base = tasks.back().stackPtr;
IVariableEx* var = stack.start[base + varRef];
// varRef=0 -> first task var, varRef=1 -> second, etc.
```

### Визуализация стека

```
stack.start                                    stack.finish
     │                                              │
     ▼                                              ▼
┌────┬────┬────┬────┬────┬────┬────┬────┬────┬────┐
│ t0 │ t1 │ t2 │ s0 │ s1 │ s2 │ s3 │ s4 │ s5 │ s6 │
└────┴────┴────┴────┴────┴────┴────┴────┴────┴────┘
     ▲                                         ▲
     │                                         │
  stackPtr=0                            finish[-1] = s6
  (task base)                           finish[-2] = s5
  task varRef 0 -> t0                   finish[-3] = s4
  task varRef 1 -> t1                   ...
```

### PushStack (`0x100632b0`)

```c
void PushStack(u32 varCount, u8* varTypes, u32 offset);
```

Вставляет `varCount` новых переменных по адресу `stack_size - offset`:
- `offset = 0` — добавление в конец (PushV, SendEvent)
- `offset > 0` — вставка перед последними `offset` элементами (TaskCall)

### PopStack (`0x10063320`)

```c
void PopStack(u32 popSize, u32 offset);
```

Удаляет `popSize` элементов, начиная с `stack_size - offset - popSize`:
- `offset = 0` — удаление с конца (Pop, JumpB, Return, арифметика)
- `offset > 0` — удаление из середины, хвост сдвигается вниз (TaskReturn)

## Битовое поле taskVar

**Важно**: байт `taskVar` в арифметических инструкциях НЕ является простым флагом 0/1.
Это битовое поле, кодирующее режим адресации каждого операнда И количество выталкиваемых элементов (pop count).

**Бинарные "in-place" операции** (Add..GE, Pow):
```
Bit 7 (0x80): var1 = task addressing
Bit 6 (0x40): var2 = task addressing
Bits 5-0 (0x3F): popCount
```
Семантика: `result = var1.Op(var2)` → `PopStack(popCount)` → `Push(result)`

**Бинарные операции с выходом** (Add2..GE2, Pow2):
```
Bit 7 (0x80): var1 = task addressing
Bit 6 (0x40): var2 = task addressing
Bit 5 (0x20): varOut = task addressing
Bits 4-0 (0x1F): popCount
```
Семантика: `var1.Op(varOut, var2)` → `PopStack(popCount)`

**Унарные "in-place" операции** (NullEq..ASin):
```
Bit 7 (0x80): var = task addressing
Bits 6-0 (0x7F): popCount
```
Семантика: `result = var.Op()` → `PopStack(popCount)` → `Push(result)`

**Унарные операции с выходом** (NullEq2..ASin2):
```
Bit 7 (0x80): var = task addressing
Bit 6 (0x40): varOut = task addressing
Bits 5-0 (0x3F): popCount
```
Семантика: `var.Op(varOut)` → `PopStack(popCount)`

**Аргументы Func/ObjFunc**: каждый аргумент имеет отдельный байт `isTask` — простой флаг 0/1.

## Поток управления

### JumpB (условный переход) — `0x10068010`

```
1. var = stack.finish[-varRef]
2. var.Get(&bResult)          // reads bool value
3. if (bResult == bVal) goto target; else currentOp++
4. PopStack(popCount, 0)      // pop AFTER branch decision
```

Pop выполняется всегда, независимо от результата ветвления.

### Call/Return — вызовы подпрограмм

**Call** (`0x1006baf0`):
1. Сохранить FUNCTION_CALL: `{returnOp, extraPop=0, savedObject}`
2. Переход на целевой адрес

**Return** (`0x1006bb60`):
1. `PopStack(popSize + fc.extraPop, 0)`
2. Восстановить IP и объект из FUNCTION_CALL

Стек общий — вызываемая подпрограмма обращается к переменным вызывающей через смещения за пределами своих локальных переменных.

```c
struct FUNCTION_CALL {          // 12 bytes
    u32        returnOp;        // return address
    u32        extraPop;        // extra pop on return (used by SendEvent)
    IGeneric*  savedObject;
};
```

## Система задач

### TaskCall (`0x1006bbd0`)

```
Before: [...caller_vars...][param_0]...[param_N-1]

1. Create TASK_CALL: taskID, stackPtr = stack_size - parmCount
2. PushStack(task.varCount, task.varTypes, task.parmCount)
   → inserts task vars BEFORE parameters

After: [...caller_vars...][task_var_0]...[task_var_M-1][param_0]...[param_N-1]
                           ^                           ^
                           stackPtr                    caller's params
```

### TaskReturn (`0x1006bd40`)

```
1. PopStack(task.varCount, task.parmCount)
   → removes task vars, KEEPS caller's parameters
2. Pop TASK_CALL
```

```c
struct TASK_CALL {                      // 32 bytes
    u32                  taskID;
    u32                  stackPtr;      // stack base for task vars
    vector<FUNCTION_CALL> calls;        // call stack within task
    map<u32, u32>        disabledEvents;
};
```

## Система событий

### SendEvent (`0x10063380`)

1. Проверить, отключён ли eventID → пропустить
2. Найти EVENT в текущей задаче, затем в глобальных событиях
3. `PushStack(varCount, varTypes, 0)` — создать переменные события на вершине
4. Заполнить переменные события значениями извне
5. Поместить FUNCTION_CALL с `extraPop = varCount`
6. Перейти к обработчику, немедленно вызвать `CScriptRun::Run(0.0)`

При Return из обработчика `extraPop` автоматически очищает переменные события.

### EventEnable/EventDisable

Переключают записи в `TASK_CALL::disabledEvents` для текущей задачи.

## Диспетчеризация нативных функций

### Func (`0x1006be70`)

1. Разрешить функцию через `IScriptContext::GetFunction(name, paramCount)` (кэшируется)
2. Собрать аргументы со стека (с учётом флагов isTask)
3. `pFunc->Execute(&pInstance, args, argCount, &result)`
4. Если `pInstance != NULL` → асинхронно (latent): сохранить экземпляр, yield каждый кадр до завершения

### ObjFunc (`0x1006c2d0`)

1. Получить объект: `stack.finish[-varObj].GetObject()`
2. Получить имя метода из DataPool (ASCII)
3. `obj->ExecuteFunction(context, name, args, argCount, &result)`

### TObjFunc

То же, что ObjFunc, но объект через адресацию задачи: `stack.start[varObj + task.stackPtr]`

### Цепочка контекстов (Game.exe)

```
CActorScriptContext::m_ContextTable     (11 entries)
  └─> CCPPlayer::CScriptContext         (32 entries)
        └─> CStdScriptContext            (141 entries)
```

Ключ поиска: `(functionName, paramCount)`.

## Ключевые адреса в Engine.dll

| Функция | Адрес | Описание |
|----------|---------|-------------|
| `CScriptManager::CScriptManager` | `0x1002f150` | Конструктор менеджера скриптов |
| `CScriptManager::RunScript` | `0x1002f5e0` | Загрузить и запустить скрипт |
| `CScript::CScript` | `0x100661e0` | Разбор формата .bin |
| `CScript::CreateInstruction` | `0x10065030` | Фабрика инструкций |
| `CScriptRun::CScriptRun` | `0x100626c0` | Конструктор ВМ |
| `CScriptRun::Run` | `0x10063100` | Главный цикл исполнения |
| `Data::PushStack` | `0x100632b0` | Поместить переменные в стек |
| `Data::PopStack` | `0x10063320` | Извлечь переменные из стека |
| `CScriptRun::SendEvent` | `0x10063380` | Диспетчеризация событий |
| `CScriptRun::CreateScriptVariable` | `0x100624f0` | Фабрика переменных |
| `CInstructionJumpB::Execute` | `0x10068010` | Условный переход |
| `CInstructionCall::Execute` | `0x1006baf0` | Вызов подпрограммы |
| `CInstructionReturn::Execute` | `0x1006bb60` | Возврат |
| `CInstructionTaskCall::Execute` | `0x1006bbd0` | Вызов задачи |
| `CInstructionTaskReturn::Execute` | `0x1006bd40` | Возврат из задачи |
| `CInstructionFunc::Execute` | `0x1006be70` | Вызов нативной функции |
| `CInstructionObjFunc::Execute` | `0x1006c2d0` | Вызов метода объекта |
