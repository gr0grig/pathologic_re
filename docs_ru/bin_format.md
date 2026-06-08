# Бинарный формат скриптов Pathologic (.bin)

Скомпилированные скрипты хранятся в виде последовательного бинарного потока без заголовка/сигнатуры.
Порядок байтов: **little-endian** (x86). Парсер: `CScript::CScript` @ `0x100661e0` в Engine.dll.

## Структура файла

```
┌──────────────────────────────────┐
│  1. Global Variables             │
├──────────────────────────────────┤
│  2. Data Pool                    │
├──────────────────────────────────┤
│  3. Global Functions             │
├──────────────────────────────────┤
│  4. Entry Point                  │
├──────────────────────────────────┤
│  5. Tasks                        │
├──────────────────────────────────┤
│  6. Global Events                │
├──────────────────────────────────┤
│  7. Instructions                 │
└──────────────────────────────────┘
```

## 1. Глобальные переменные

```
u32  globalVarCount
repeat globalVarCount:
    u8   varType        // 1=bool, 2=int, 3=float, 4=string, 5=object, 6=cvector
    u8   isNamed        // 0=anonymous, 1=named (property)
    if isNamed:
        VLE_String name // variable name for property access
```

### VLE_String (строка с кодированием переменной длины)

```
u8 lengthByte
if (lengthByte & 0x80) == 0:
    length = lengthByte                              // 0-127 chars
else:
    u8 highByte
    length = (lengthByte & 0x7F) | (highByte << 7)  // 0-16383 chars
char[length] data       // ASCII, NOT null-terminated
```

## 2. Пул данных

```
u32  dataPoolSize       // size in bytes
u8[dataPoolSize] data   // raw pool data
```

Содержит:
- **Широкие строки** (UTF-16LE, с завершающим нулём) — используются `MovS`, `PushS`, `TMovS`
- **ASCII-строки** (с завершающим нулём) — имена функций для `ObjFunc`/`TObjFunc`

Адресация строк осуществляется по **байтовому смещению от начала пула**.

## 3. Глобальные функции

```
u32  globalFuncCount
repeat globalFuncCount:
    VLE_String name     // function name (ASCII)
    u32  paramCount     // number of parameters
```

Индекс используется опкодом `Func`. Поле `paramCount` определяет, сколько пар (varRef, isTask) считывает инструкция.

## 4. Точка входа

```
u32  runTask            // initial task ID
u32  runOp              // initial instruction pointer
```

## 5. Задачи

```
u32  taskCount
repeat taskCount:
    u32  varCount                // total task variables
    u8[varCount] varTypes        // variable types
    u32  parmCount               // first parmCount vars are parameters
    u32  eventCount
    repeat eventCount:
        u32  eventID
        u32  handlerOp           // instruction index of handler
        u32  eventVarCount
        u8[eventVarCount] varTypes
```

## 6. Глобальные события

```
u32  globalEventCount
repeat globalEventCount:
    u32  eventID
    u32  handlerOp
    u32  varCount
    u8[varCount] varTypes
```

Формат тот же, что и у событий задач. Хранятся в `CScript::m_GlobalEvents`.

## 7. Инструкции

```
u32  codeSize               // instruction count
repeat codeSize:
    u16  opcode             // 0x00-0x57 (alpha) or 0x00-0x59 (HD)
    ...  operands           // variable-length, opcode-dependent
```

Разбор инструкций: `CScript::CreateInstruction` @ `0x10065030`.

## Типы переменных

| Tag | Type | C++ Class | Object Size | Description |
|-----|------|-----------|-------------|-------------|
| 1 | bool | `CVariableBool` | 0x0C | Boolean (1 byte) |
| 2 | int | `CVariableInt` | 0x0C | Signed 32-bit integer |
| 3 | float | `CVariableFloat` | 0x0C | IEEE 754 float |
| 4 | string | `CVariableString` | 0x14 | UTF-16LE wide string |
| 5 | object | `CVariableObject` | 0x14 | Game object reference (IScriptClass*) |
| 6 | cvector | `CVariableVector` | 0x14 | 3D vector (x, y, z floats) |

Фабрика: `CScriptRun::CreateScriptVariable` @ `0x100624f0`.

## Раскладка памяти CScript

```c
struct CScript {                                 // no vtable
    /* 0x00 */ u32                    globalVarCount;
    /* 0x04 */ scoped_array<u8>      globalVarTypes;
    /* 0x08 */ map<CEString, u32>    properties;      // name -> var index
    /* 0x18 */ scoped_array<char>    dataPool;
    /* 0x1C */ u32                    dataPoolSize;
    /* 0x20 */ scoped_array<GLOBAL_FUNCTION> globals;
    /* 0x24 */ u32                    globalCount;
    /* 0x28 */ scoped_array<TASK>    tasks;
    /* 0x2C */ map<u32, EVENT>       globalEvents;
    /* 0x38 */ u32                    runTask;
    /* 0x3C */ scoped_array<scoped_ptr<IInstruction>> code;
    /* 0x40 */ u32                    codeSize;
    /* 0x44 */ u32                    runOp;
    /* 0x48 */ set<IScriptNotify*>   notify[3];
};
// Total size: 0x6C
```

```c
struct GLOBAL_FUNCTION {        // 0x10 bytes
    std::string  name;          // 0x00 (STLport, 12 bytes)
    u32          paramCount;    // 0x0C
};

struct TASK {                   // 0x18 bytes
    u32                   varCount;     // 0x00
    scoped_array<u8>      varTypes;     // 0x04
    u32                   parmCount;    // 0x08
    map<u32, EVENT>       events;       // 0x0C
};

struct EVENT {
    u32                   handlerOp;
    u32                   varCount;
    shared_array<u8>      varTypes;
};
```
