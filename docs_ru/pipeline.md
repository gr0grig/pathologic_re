# Тулчейн скриптов Pathologic

## Обзор

Четыре инструмента для работы со скомпилированными скриптами Pathologic (.bin):

```
.bin ──disasm──> .asm ──────────────────────> .bin
  │                                            ▲
  │              .c ──compile──> .asm ──asm──┘
  └──decompile──>
```

| Инструмент | Вход | Выход | Описание |
|------|-------|--------|-------------|
| `disasm.py` | `.bin` | `.asm` | Дизассемблирует байткод в текстовый ассемблер |
| `decompile.py` | `.bin` | `.c` | Декомпилирует байткод в C-подобный псевдокод |
| `compile.py` | `.c` | `.asm` | Компилирует C-псевдокод в ассемблер |
| `asm.py` | `.asm` | `.bin` | Ассемблирует текстовый ассемблер в байткод |

Полный round-trip: `.bin` → `.asm` → `.c` → `.asm` → `.bin` даёт побайтово идентичный результат.

## Быстрый старт

### Один файл

```bash
# Disassemble
python parser/disasm.py scripts/quest_d1_01.bin -o output/quest_d1_01.asm

# Decompile
python parser/decompile.py scripts/quest_d1_01.bin -o output/quest_d1_01.c

# Compile C back to assembly
python parser/compile.py output/quest_d1_01.c -o output/quest_d1_01.compiled.asm

# Assemble to binary
python parser/asm.py output/quest_d1_01.compiled.asm -o output/quest_d1_01.bin
```

### Пакетная обработка

```bash
# Disassemble all scripts in a directory
python parser/disasm.py Scripts/ -o Scripts_asm/

# Decompile all scripts
python parser/decompile.py Scripts/ -o Scripts_c/

# Compile all C files
python parser/compile.py Scripts_c/ -o Scripts_compiled/

# Assemble all .asm files
python parser/asm.py Scripts_compiled/ -o Scripts_assembled/
```

Каталоги вывода по умолчанию, если `-o` опущен:
- `disasm.py`: `{input}_asm/`
- `decompile.py`: `{input}_c/`
- `compile.py`: заменяет `_c` на `_compiled` во входном пути
- `asm.py`: заменяет `_compiled` на `_assembled` во входном пути

## HD-версия (Classic HD)

HD-скрипты используют другую таблицу опкодов (2 дополнительных опкода на 0x4D-0x4E). Используйте флаг `--hd`:

```bash
python parser/disasm.py HD_Scripts/ --hd -o HD_Scripts_asm/
python parser/decompile.py HD_Scripts/ --hd -o HD_Scripts_c/
python parser/asm.py HD_Scripts_compiled/ --hd -o HD_Scripts_assembled/
```

Инструменту `compile.py` флаг `--hd` не нужен — он выдаёт ассемблер, независимый от версии.

### Различия между Alpha и HD

| | Alpha (оригинал) | HD (Classic HD) |
|---|---|---|
| Опкоды | 0x00-0x57 (88 всего) | 0x00-0x59 (90 всего) |
| Дополнительные опкоды | — | CString (0x4D), CString2 (0x4E) |
| Опкод Call | 0x4D | 0x4F |
| Опкод Func | 0x51 | 0x53 |
| Кодировка строк | UTF-16LE | UTF-16LE |

Опкоды 0x00-0x4C идентичны в обеих версиях. HD вставляет 2 дополнительных опкода на 0x4D-0x4E, сдвигая все последующие опкоды на +2.

## Статистика round-trip

| Версия | Скриптов | Disasm | Decompile | Полный round-trip |
|---------|---------|--------|-----------|-----------------|
| Alpha | 373 | 373/373 | 373/373 | 373/373 побайтово идентичных |
| HD | 963 | 963/963 | 963/963 | 963/963 побайтово идентичных |

## Формат C-псевдокода

Декомпилятор выдаёт C-подобный псевдокод с метаданными в комментариях-заголовках `// @`.

### Структура

```c
// @import "function_name" nargs
// @string pool_offset "string value"

// GLOBALS
object g0;

// GTASK task_name
// @task_params int float
// @task_vars bool string object
// GEVENT event_name(int, float)
//   @event_vars bool
{
    // function body
    // ...
}
```

### Комментарии-метаданные

| Префикс | Значение |
|--------|---------|
| `// @import` | Объявление нативной функции (имя + количество аргументов) |
| `// @string` | Запись пула строк (смещение + значение) |
| `// @task_params` | Типы параметров задачи |
| `// @task_vars` | Типы локальных переменных задачи |
| `// @event_vars` | Типы переменных обработчика события |
| `// @dead_code` | Недостижимый блок кода |

### Именование переменных

- `g0`, `g1`, ... — глобальные переменные
- `v1`, `v2`, ... — локальные переменные (слоты стека, индексация с 1 от вершины стека)
- `t0`, `t1`, ... — переменные задачи (индексация с 0 от базы задачи)
- `ev0`, `ev1`, ... — переменные обработчика события

### Типы

| Тип | Ключевое слово C | Описание |
|------|-----------|-------------|
| bool | `bool` | Булево значение (1 байт) |
| int | `int` | 32-битное знаковое целое |
| float | `float` | 32-битный IEEE float |
| string | `string` | Строка UTF-16LE |
| object | `object` | Ссылка на объект |
| cvector | `vector` | 3D-вектор (x, y, z) |

## Формат ассемблера

Дизассемблер выдаёт текстовый формат с размеченными секциями:

```asm
; DATA POOL
; 0x0000: "string_value"

; GLOBALS
; g0: object

; GLOBAL FUNCTIONS
; [0] constructor(0)
; [1] destructor(0)

; ENTRY: task=0 op=42

; TASK 0 (vars: 3, params: 1)
;   EVENT 1 -> op 100 (vars: 2)

; CODE
0000: PushV 3 [int, int, bool]
0001: MovI 3 0
0002: PushI 42
...
```

## Справочник CLI инструментов

### disasm.py

```
usage: disasm.py [-h] [-o OUTPUT] [--batch] [--hd] [-v] [input]

Disassemble Pathologic script .bin files

positional arguments:
  input                 Input .bin file or directory

options:
  -o, --output          Output .asm file or directory
  --batch               Process all .bin in directory
  --hd                  HD version format
  -v, --verbose         Print to stdout
```

### decompile.py

```
usage: decompile.py [-h] [-o OUTPUT] [--batch] [--hd] [input]

Decompile Pathologic script .bin to C

positional arguments:
  input                 Input .bin file or directory

options:
  -o, --output          Output .c file or directory
  --batch               Process all .bin in directory
  --hd                  HD version format
```

### compile.py

```
usage: compile.py [-h] [-o OUTPUT] [--batch] [input]

Compile Pathologic script C to ASM

positional arguments:
  input                 Input .c file or directory

options:
  -o, --output          Output .asm file or directory
  --batch               Process directory
```

### asm.py

```
usage: asm.py [-h] [-o OUTPUT] [--batch] [--hd] [input]

Assemble Pathologic script .asm to .bin

positional arguments:
  input                 Input .asm file or directory

options:
  -o, --output          Output .bin file or directory
  --batch               Process all .asm in directory
  --hd                  HD version format
```
