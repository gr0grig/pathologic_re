# Опкоды скриптовой VM Pathologic

## Формат инструкции

Каждая инструкция начинается с однобайтового опкода. За ним следуют операнды типа uint32/int32/uint8/float
в зависимости от опкода. Инструкции имеют переменную длину (1-17 байт).

## Теги типов

- 1 = bool
- 2 = int
- 3 = float
- 4 = string
- 5 = object
- 6 = cvector (3 float-а)

## Таблица опкодов

### Перемещение / загрузка констант (0x00-0x0D)
| Op | Name | Operands | Описание |
|----|------|----------|-------------|
| 0x00 | Mov | src:u32, dst:u32 ⚠️ | Stack[-dst] = Stack[-src] |
| 0x01 | MovB | dst:u32, val:u8 | Stack[-dst] = (bool)val |
| 0x02 | MovI | dst:u32, val:i32 | Stack[-dst] = (int)val |
| 0x03 | MovF | dst:u32, val:f32 | Stack[-dst] = (float)val |
| 0x04 | MovS | dst:u32, pool_off:u32 | Stack[-dst] = строка из пула |
| 0x05 | MovV | dst:u32, x:f32, y:f32, z:f32 | Stack[-dst] = CVector(x,y,z) |
| 0x06 | MovT | src:u32, dst:u32 | Stack[-dst] = TaskVar[src] |
| 0x07 | TMov | src:u32, dst:u32 | TaskVar[dst] = Stack[-src] |
| 0x08 | TMovB | dst:u32, val:u8 | TaskVar[dst] = (bool)val |
| 0x09 | TMovI | dst:u32, val:i32 | TaskVar[dst] = (int)val |
| 0x0A | TMovF | dst:u32, val:f32 | TaskVar[dst] = (float)val |
| 0x0B | TMovS | dst:u32, pool_off:u32 | TaskVar[dst] = строка из пула |
| 0x0C | TMovV | dst:u32, x:f32, y:f32, z:f32 | TaskVar[dst] = CVector(x,y,z) |
| 0x0D | TMovT | src:u32, dst:u32 | TaskVar[dst] = TaskVar[src] |

⚠️ **Quirk Mov (0x00):** Канонический 2005 `InstructionMov.cpp`
(`reader >> m_ulVarIn >> m_ulVarOut`) читает первый u32 как `src`, второй как
`dst` — тот же порядок, что у `MovT/TMov/TMovT`. При этом `PathologicScript.py`
disasm присваивает поля **инвертированно** (`self.VarOut = 1-й u32, self.VarIn =
2-й u32`) только для `Mov`, и текст `.asm` `Stack[-X] = Stack[-Y]`
показывает X = src, Y = dst — визуально LHS/RHS перевёрнуты относительно
обычного присваивания. Это известная особенность инструмента; на байт-код не
влияет.

### Поток управления (0x0E-0x0F)
| Op | Name | Operands | Описание |
|----|------|----------|-------------|
| 0x0E | Jump | target:u32 | Безусловный переход на смещение в байт-коде |
| 0x0F | JumpB | var:u32, target:u32, cond:u8, pop:u16 | Условный переход + pop |

### Операции со стеком (0x10-0x1E)
| Op | Name | Operands | Описание |
|----|------|----------|-------------|
| 0x10 | Push | var:u32 | Поместить Stack[-var] на стек |
| 0x11 | PushB | val:u8 | Поместить bool-литерал |
| 0x12 | PushI | val:i32 | Поместить int-литерал |
| 0x13 | PushF | val:f32 | Поместить float-литерал |
| 0x14 | PushS | pool_off:u32 | Поместить строку из пула |
| 0x15 | PushT | var:u32 | Поместить TaskVar[var] |
| 0x16 | PushVec | x:f32, y:f32, z:f32 | Поместить CVector-литерал |
| 0x17 | PushV | count:u32, varTypes:u8[count] | Выделить count слотов стека (локальные переменные), типы по списку |
| 0x18 | PushE | varIn:u32, isTask:u8, lIndex:i32 | Поместить event-переменную: клон `var[lIndex]` |
| 0x19 | PushGE | varIn:u32 | Поместить глобальную event-переменную: клон `globalVars[varIn]` |
| 0x1A | Pop | popSize:u32 | Снять popSize слотов со стека |
| 0x1B | PopE | varOut:u32, lIndex:i32, flags:u8 | Снять в event-переменную: `var[lIndex] = stack.top()`; pop если `(flags & 2) == 0`. Бит 0 flags — task-адресация для varOut |
| 0x1C | PopGE | varOut:u32, flags:u8 | Снять в глобальную event-переменную: `globalVars[varOut] = stack.top()`; pop если `(flags & 1) == 0` |
| 0x1D | SetNull | var:u32 | Stack[-var] = null |
| 0x1E | SetNullT | var:u32 | TaskVar[var] = null |

### Бинарные арифметика / логика (0x1F-0x2C) — push результата
Все опкоды берут **`var1:u32, var2:u32, taskVar:u8`**. Биты taskVar:
`0x80` — var1 task-адресуется, `0x40` — var2 task-адресуется,
младшие 6 бит (`& 0x3F`) — pop count. Результат — `dnew CVariableXxx(...)`,
кладётся на вершину стека.

| Op | Name | Описание |
|----|------|-------------|
| 0x1F | Add | push (a + b) |
| 0x20 | Sub | push (a - b) |
| 0x21 | Mult | push (a * b) |
| 0x22 | Div | push (a / b) |
| 0x23 | Mod | push (a % b) |
| 0x24 | And | push (a & b) |
| 0x25 | Or | push (a \| b) |
| 0x26 | Xor | push (a ^ b) |
| 0x27 | Eq | push (a == b) |
| 0x28 | Neq | push (a != b) |
| 0x29 | LT | push (a < b) |
| 0x2A | GT | push (a > b) |
| 0x2B | LE | push (a <= b) |
| 0x2C | GE | push (a >= b) |

### Унарные арифметика / логика (0x2D-0x30) — push результата
Все опкоды берут **`var:u32, taskVar:u8`**. Биты taskVar: `0x80` — task-
адресация для var, младшие 7 бит (`& 0x7F`) — pop count.

| Op | Name | Описание |
|----|------|-------------|
| 0x2D | NullEq | push (a == null) |
| 0x2E | NullNeq | push (a != null) |
| 0x2F | Neg | push (-a) |
| 0x30 | Not | push (!a) |

### Варианты с суффиксом «2» — запись в явный слот-приёмник

Суффикс `*2` — общая для всей VM конвенция именования. Где вариант без
суффикса аллоцирует новый `CVariable*` для результата и пушит его, вариант
`*2` принимает **дополнительный операнд `varOut`** и пишет результат в
существующий слот через `Set` приёмника (без аллокации, без пуша). Каждый
доп. var съедает один бит режима адресации (`0x80, 0x40, 0x20, …`) в
хвостовом байте флагов, поэтому маска pop сжимается на один бит:

| Группа | Операнды | Биты taskVar | маска pop |
|--------|----------|--------------|-----------|
| Бинарные push (Add..GE, Pow) | var1, var2, taskVar | 0x80 var1, 0x40 var2 | `& 0x3F` |
| Бинарные «2» (Add2..GE2, Pow2) | var1, var2, varOut, taskVar | 0x80 var1, 0x40 var2, 0x20 varOut | `& 0x1F` |
| Унарные push (NullEq..Not, Sqrt..ASin, CString) | var, taskVar | 0x80 var | `& 0x7F` |
| Унарные «2» (NullEq2..Not2, Sqrt2..ASin2, CString2) | var, varOut, taskVar | 0x80 var, 0x40 varOut | `& 0x3F` |
| FuncExist (3 арг) | var1, var2, var3, taskVar | 0x80 var1, 0x40 var2, 0x20 var3 | `& 0x1F` |
| FuncExist2 (4 арг) | var1, var2, var3, varOut, taskVar | 0x80 var1, 0x40 var2, 0x20 var3, 0x10 varOut | `& 0x0F` |

### Бинарные «2» — явный слот dst (0x31-0x3E)
Все опкоды берут **`var1:u32, var2:u32, varOut:u32, taskVar:u8`**.
Результат пишется через `Set` приёмника, аллокаций/пуша нет.

| Op | Name | Описание |
|----|------|-------------|
| 0x31 | Add2 | dst = a + b |
| 0x32 | Sub2 | dst = a - b |
| 0x33 | Mult2 | dst = a * b |
| 0x34 | Div2 | dst = a / b |
| 0x35 | Mod2 | dst = a % b |
| 0x36 | And2 | dst = a & b |
| 0x37 | Or2 | dst = a \| b |
| 0x38 | Xor2 | dst = a ^ b |
| 0x39 | Eq2 | dst = (a == b) |
| 0x3A | Neq2 | dst = (a != b) |
| 0x3B | LT2 | dst = (a < b) |
| 0x3C | GT2 | dst = (a > b) |
| 0x3D | LE2 | dst = (a <= b) |
| 0x3E | GE2 | dst = (a >= b) |

### Унарные «2» — явный слот dst (0x3F-0x42)
Все опкоды берут **`var:u32, varOut:u32, taskVar:u8`**.

| Op | Name | Описание |
|----|------|-------------|
| 0x3F | NullEq2 | dst = (a == null) |
| 0x40 | NullNeq2 | dst = (a != null) |
| 0x41 | Neg2 | dst = -a |
| 0x42 | Not2 | dst = !a |

### Математические функции (0x43-0x4C) — пары push / явный dst
Унарные push (Sqrt/Sin/Cos/ASin) берут `var:u32, taskVar:u8` (маски как у
унарной push-группы). Унарные «2» (Sqrt2/Sin2/Cos2/ASin2) берут
`var:u32, varOut:u32, taskVar:u8` (маски как у унарной «2» группы). Pow —
бинарный push (`var1, var2, taskVar`); Pow2 — бинарный «2»
(`var1, var2, varOut, taskVar`).

| Op | Name | Описание |
|----|------|-------------|
| 0x43 | Sqrt | push sqrt(a) |
| 0x44 | Sqrt2 | dst = sqrt(a) |
| 0x45 | Sin | push sin(a) |
| 0x46 | Sin2 | dst = sin(a) |
| 0x47 | Cos | push cos(a) |
| 0x48 | Cos2 | dst = cos(a) |
| 0x49 | ASin | push asin(a) |
| 0x4A | ASin2 | dst = asin(a) |
| 0x4B | Pow | push pow(a, b) |
| 0x4C | Pow2 | dst = pow(a, b) |

### Вызовы функций и управление (0x4D+) — зависят от версии

**Версия Alpha** (IS_ALPHA = True):
| Op | Name | Operands | Описание |
|----|------|----------|----------|
| 0x4D | Call | target:u32 | Сохранить return-фрейм (PC+1), прыжок на `target` |
| 0x4E | Return | popSize:u32 | Снять `popSize + frame.extraPop` слотов, восстановить PC из вершины call-стека |
| 0x4F | TaskCall | taskID:u32 | Запушить task-фрейм для задачи `taskID`, выделить её scope переменных |
| 0x50 | TaskReturn | — | Снять scope задачи и task-фрейм; обратно к вызывающему |
| 0x51 | Func | funcIndex:u32, [varRef:u32, isTask:u8] × N | Вызов нативной глобальной функции **по индексу** в таблице globals (N = `globals[funcIndex].VarCount`). Имя хранится в таблице, не в байт-коде. |
| 0x52 | ObjFunc | varObj:u32, nameOffset:u32, parmCount:u32, [varRef:u32, isTask:u8] × parmCount | Вызов метода `pool[nameOffset]` (ASCII) у объекта в `Stack[-varObj]` |
| 0x53 | TObjFunc | varObj:u32, nameOffset:u32, parmCount:u32, [varRef:u32, isTask:u8] × parmCount | То же, но `varObj` task-адресуется |
| 0x54 | EventEnable | eventID:i32 | Декремент disable-счётчика события; обработчик активен только при счётчике 0 |
| 0x55 | EventDisable | eventID:i32 | Инкремент disable-счётчика события; парные вызовы балансируют EventEnable |
| 0x56 | FuncExist | var1:u32, var2:u32, var3:u32, taskVar:u8 | Push bool: есть ли у `var1` (объекта) метод `var2` (имя) с N=`var3` (int) параметрами? |
| 0x57 | FuncExist2 | var1:u32, var2:u32, var3:u32, varOut:u32, taskVar:u8 | То же, но bool пишется в слот `varOut` |

**Версия HD** (IS_ALPHA = False) — 2 дополнительных опкода на 0x4D-0x4E, всё остальное сдвинуто на +2:
| Op | Name | Operands | Описание |
|----|------|----------|----------|
| 0x4D | CString | varRef:u32, taskVar:u8 | Построить 1-символьную wide-строку из int-кодпойнта; push результата |
| 0x4E | CString2 | varRef:u32, varOut:u32, taskVar:u8 | То же, но запись в слот `varOut` |
| 0x4F | Call | target:u32 | То же, что alpha 0x4D |
| 0x50 | Return | popSize:u32 | То же, что alpha 0x4E |
| 0x51 | TaskCall | taskID:u32 | То же, что alpha 0x4F |
| 0x52 | TaskReturn | — | То же, что alpha 0x50 |
| 0x53 | Func | funcIndex:u32, [varRef:u32, isTask:u8] × N | То же, что alpha 0x51 |
| 0x54 | ObjFunc | varObj:u32, nameOffset:u32, parmCount:u32, [varRef:u32, isTask:u8] × parmCount | То же, что alpha 0x52 |
| 0x55 | TObjFunc | (как ObjFunc) | То же, что alpha 0x53 |
| 0x56 | EventEnable | eventID:i32 | То же, что alpha 0x54 |
| 0x57 | EventDisable | eventID:i32 | То же, что alpha 0x55 |
| 0x58 | FuncExist | var1:u32, var2:u32, var3:u32, taskVar:u8 | То же, что alpha 0x56 |
| 0x59 | FuncExist2 | var1:u32, var2:u32, var3:u32, varOut:u32, taskVar:u8 | То же, что alpha 0x57 |

## CString / CString2 (0x4D / 0x4E, раскладка HD)

Классы: `CInstructionCString`, `CInstructionCString2`. Операнды:

```
CString  : varRef:u32, taskVar:u8                  (объект 0xC байт)
CString2 : varRef:u32, varOut:u32, taskVar:u8      (объект 0x10 байт)
```

Семантика — подтверждена по каноническому 2005 источнику
(`SRC/PlagueCity/Game/Script/InstructionCString.cpp` /
`InstructionCString2.cpp`) и `Exec` в IDA `0x101397F0` / `0x10139990` в
HD `Engine.dll`:

1. Источник адресуется по старшему биту `taskVar` (`0x80` → task-адресация,
   иначе обычный стек) — та же конвенция, что у унарной группы.
2. `GetVariableType()` источника **обязан вернуть `VART_INT`**; иначе VM
   бросает `CScriptRun::Error("Type mismatch when converting to char-string")`.
   CString/CString2 берут **целое число**, а не строку.
3. Инструкция создаёт пустой `CEStringW` и дописывает int как `wchar_t`:
   `str += (wchar_t)pInt->m_lVal`. Результат — **1-символьная wide-строка**,
   код символа равен значению int'а — семантика `chr(int)`.
4. `CString` аллоцирует новую `CVariableString(str)` и пушит её на стек;
   потом снимает `taskVar & 0x7F` слотов.
5. `CString2` разыменовывает `varOut` (бит `0x40` выбирает task-адресацию
   для него), пишет wide-строку через `pOut->Set(str)`; снимает
   `taskVar & 0x3F` слотов. Без аллокации, без пуша.

Несмотря на название класса, результат — обычная wide `CVariableString`
(внутри UTF-16LE) — никакой ASCII/`CSafeString` конверсии нет. Опкод
является байт-кодовым эквивалентом `Chr(int)` / `String.fromCharCode(int)`.

## FuncExist / FuncExist2 (0x56/0x58, 0x57/0x59)

Классы: `CInstructionFuncExist`, `CInstructionFuncExist2`. Операнды:

```
FuncExist  : obj:u32, name:u32, parmCount:u32,           flags:u8   (объект 0x14)
FuncExist2 : obj:u32, name:u32, parmCount:u32, dst:u32,  flags:u8   (объект 0x18)
```

Семантика — подтверждена по `Exec` в `0x1013B430` (FuncExist) и `0x1013B6B0`
(FuncExist2):

1. Все операнды разыменовываются по `flags`. У FuncExist биты режима
   адресации — `0x80/0x40/0x20` (obj/name/parmCount); у FuncExist2 схема
   расширена до `0x80/0x40/0x20/0x10` (obj/name/parmCount/dst). Младшие
   биты — pop count: `flags & 0x1F` у FuncExist, `flags & 0x0F` у FuncExist2.
2. `obj.vtable[12]` — достать raw указатель на game-object.
3. `name.vtable[14]` — материализовать имя метода в `CSafeString`.
4. `parmCount.vtable[16]` — извлечь int.
5. `obj.vtable[3](name, parmCount)` → bool — собственно проверка наличия.
6. FuncExist аллоцирует новую `CVariableBool(result)` и пушит её.
7. FuncExist2 пишет bool напрямую в существующий слот `dst` через
   `dst.vtable[10](result)`. Без аллокации, без пуша.
8. При сбое любого `extract` обе бросают `CScriptRun::Error("Type mismatch in 'FuncExist'")`.

## Примечания

- Таблица HD-опкодов 0x00-0x59 соответствует каноническому 2005 источнику
  (`SRC/PlagueCity/Game/Script/IInstruction.h`); «alpha» билд — более ранний
  вариант, в диспетчере которого отсутствуют `CString/CString2` на 0x4D-0x4E.
- Опкоды 0x00-0x4C идентичны между alpha и HD.
- `is_alpha=False` в ассемблере включает сдвиг +2 для `Call` и всего, что
  идёт следом.
- Диспетчер HD имеет ровно 90 case'ов (0-89) против 88 (0-87) у alpha —
  отличаются только CString/CString2.
- Адресация стека: отрицательные смещения (`Stack[-N]`) относительны текущей вершины стека.
- Task-переменные: `Stack[I + Tasks[-1].StackPointer]` — отдельная область task-переменных.
- Все ссылки на строки используют байтовые смещения в DataPool.
