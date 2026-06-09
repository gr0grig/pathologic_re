# pathologic_re — набор инструментов реверс-инжиниринга скриптов Pathologic

Тулчейн для дизассемблирования, **декомпиляции в исходный язык `.sc`**,
редактирования и повторной компиляции скомпилированных скриптов (`.bin`) игры
**Pathologic** (Engine.dll).

Основан на реверс-инжиниринге Engine.dll и Game.exe средствами IDA Pro.
Статьи: [Часть 1](https://hackmag.com/coding/pathologic-reverse) | [Часть 2](https://hackmag.com/coding/pathologic-decompile)

> English version: [README.md](README.md).

---

## ⭐ Декомпилятор в исходный язык (`sc_decompiler`)

`sc_decompiler` восстанавливает **исходный язык `.sc`** из скомпилированного
`.bin` и доказывает корректность, прогоняя результат **через настоящий
компилятор игры** (`scomp.exe`):

```
.bin  ──lift_bin()──▶  SC-AST  ──emit_sc()──▶  .sc  ──scomp.exe──▶  .bin'
                                                              сравнение ▲
                       побайтовое равенство  ⇔  .bin' == .bin  ────────┘
```

Он генерирует исходник на **настоящей грамматике `.sc`**, которую принимает
штатный компилятор `scomp` (на основе LEMON) — восстанавливая
`for`/`while`/`do-while`, короткие замыкания `&&`/`||`, тернарники и локальные
переменные с областью видимости, которые `scomp` разворачивает в плоский
байткод, — и проверяет побайтовое равенство, компилируя подлинными `scomp.exe`
+ `sbuild.dll`.

### Статус

| Корпус | Файлов | Результат round-trip |
|--------|--------|----------------------|
| **2005** (`2005/Scripts/*.bin`) | 972 | **972 / 972 побайтово (100 %)** |
| **HD / Classic HD** (`HD/Original/*.bin`) | 963 | **963 / 963 побайтово (100 %)** |

Никакого нечёткого сравнения, отсечения мёртвого кода и канонизации:
сгенерированный `.sc` компилируется *ровно* в исходные байты — идентичны
байткод, пул, заголовок, патчи и инлайновые строки. Результат —
**редактируемый исходник**: меняешь `.sc`, перекомпилируешь `scomp.exe`,
получаешь `.bin` «as-is».

### Быстрый старт

```bash
# Декомпилировать один .bin в .sc
python -m sc_decompiler path/to/script.bin                 # → script.sc

# Декомпилировать и проверить побайтовое равенство с оригиналом
python -m sc_decompiler script.bin --roundtrip
python -m sc_decompiler script.bin --roundtrip -v          # ещё и напечатать .sc

# Пакетная проверка round-trip по каталогу → CSV-отчёт
python -m sc_decompiler.verify.roundtrip_all \
    --bin-dir 2005/Scripts --report-csv report.csv --workers 8
```

```python
from sc_decompiler.lift.lifter import lift_bin
from sc_decompiler.emit.emitter import emit_sc
sc_text = emit_sc(lift_bin("script.bin", is_alpha=False))
```

### Компоненты

| Путь | Роль |
|------|------|
| `sc_decompiler/lift/lifter.py` | Лифтер с симуляцией стека: `.bin` → SC-AST (~5900 строк) |
| `sc_decompiler/ast/nodes.py` | Узлы SC-AST (зеркало иерархии `CENode` из scomp) |
| `sc_decompiler/emit/emitter.py` | SC-AST → текст `.sc` (Visitor) |
| `sc_decompiler/verify/scomp_runner.py` | Обёртка-subprocess над `scomp.exe` + `sbuild.dll` |
| `sc_decompiler/verify/roundtrip_all.py` | Пакетный round-trip → CSV-отчёт |
| `sc_decompiler/notes/bcdiff.py` | Показать первую расходящуюся инструкцию байткода (отладка) |
| `sc_decompiler/notes/classify_fail.py` | Разложить сбои по сигнатуре (триаж) |

**Требуются** `scomp.exe` + `sbuild.dll` в `SRC/Scripts/build/tools/`
(настраивается). Одна и та же пара компиляторов обрабатывает и 2005, и HD
скрипты.

### Готовые декомпилированные файлы

| Каталог | Версия | Содержимое |
|---------|--------|------------|
| `examples/2005/Scripts_sc/` | 2005 | 972 декомпилированных файла `.sc` |
| `examples/HD/Scripts_sc/`   | HD   | 963 декомпилированных файла `.sc` |

### Возврат отредактированных скриптов в игру

Нужны **два оригинальных файла компилятора** — `scomp.exe` и `sbuild.dll` (должны
лежать рядом). Они приложены здесь в **[`tools/`](tools/)**; взяты из утёкшего
исходного дерева игры `SRC/Scripts/build/tools/` (сборка от 2005-03-10).
Скомпилируйте ими отредактированный `.sc`:

```bash
tools/scomp.exe player.sc        # → player.bin
```

Затем положите полученный `.bin` в папку игры `data/scripts`.

📖 Полная документация: **[docs_ru/sc_decompiler.md](docs_ru/sc_decompiler.md)**.

---

## Old — пайплайн псевдокода `.asm` / `.c` (`parser/`)

Изначальный тулчейн дизассемблирует `.bin` в `.asm` и поднимает до прозрачного
**C-подобного псевдокода**, остающегося 1:1 с потоком инструкций. Он проходит
round-trip через наш собственный реализованный ассемблер (не `scomp.exe`) и
отвечает на вопрос *«какой байткод в этом скрипте?»* — тогда как
`sc_decompiler` (выше) отвечает *«какой исходник написал разработчик?»*.

### Статус

- **373/373** альфа-скрипта: побайтовый round-trip (.bin → .asm → .c → .asm → .bin)
- **963/963** HD-скрипта: побайтовый round-trip с флагом `--hd`
- 88 опкодов (alpha) / 90 опкодов (HD) полностью задокументированы
- Бинарный формат полностью реверснут
- Внутренности VM сопоставлены из Engine.dll через IDA Pro
- ~400 функций API скриптов задокументированы

### Быстрый старт

```bash
# Дизассемблировать
python parser/disasm.py scripts/quest_d1_01.bin -o quest_d1_01.asm

# Декомпилировать в C-псевдокод
python parser/decompile.py scripts/quest_d1_01.bin -o quest_d1_01.c

# Редактируем quest_d1_01.c ...

# Скомпилировать обратно в ассемблер
python parser/compile.py quest_d1_01.c -o quest_d1_01.compiled.asm

# Ассемблировать в бинарь
python parser/asm.py quest_d1_01.compiled.asm -o quest_d1_01.bin
```

#### Пакетная обработка

```bash
python parser/disasm.py Scripts/ -o Scripts_asm/
python parser/decompile.py Scripts/ -o Scripts_c/
python parser/compile.py Scripts_c/ -o Scripts_compiled/
python parser/asm.py Scripts_compiled/ -o Scripts_assembled/
```

#### Версия HD (Pathologic Classic HD)

HD-скрипты используют 2 дополнительных опкода (CString/CString2 на 0x4D-0x4E).
Передавайте `--hd`:

```bash
python parser/disasm.py HD_Scripts/ --hd -o HD_asm/
python parser/decompile.py HD_Scripts/ --hd -o HD_c/
python parser/asm.py HD_compiled/ --hd -o HD_assembled/
```

### Инструменты

| Скрипт | Направление | Описание |
|--------|-------------|----------|
| `parser/disasm.py` | .bin -> .asm | Дизассемблер |
| `parser/decompile.py` | .bin -> .c | Декомпилятор (C-псевдокод) |
| `parser/compile.py` | .c -> .asm | Компилятор |
| `parser/asm.py` | .asm -> .bin | Ассемблер |

Внутренние библиотеки (в `parser/lib/`):
- `PathologicScript.py` — ядро парсера бинаря и дизассемблера (~2050 строк)
- `PathologicHL.py` — построитель CFG и симуляция стека (~280 строк)
- `PathologicPseudoC.py` — генератор C-псевдокода (~2380 строк)

Дополнительные инструменты (в `tools/`):
- `scomp.exe` + `sbuild.dll` — оригинальный компилятор скриптов игры (`.sc` → `.bin`), взят из утёкшего исходника `SRC/Scripts/build/tools/` (сборка 2005-03-10). Держите рядом.
- `AlphaPatScript.bt` — шаблон бинаря для 010 Editor
- `dump_vm_state2.py` — отладочный скрипт IDA Pro для дампа состояния VM

### Документация

| Файл | Содержимое |
|------|------------|
| [docs_ru/sc_decompiler.md](docs_ru/sc_decompiler.md) | **Декомпилятор в исходный язык `.sc` (выше)** |
| [docs_ru/bin_format.md](docs_ru/bin_format.md) | Бинарная раскладка файла .bin, структура памяти CScript |
| [docs_ru/opcodes.md](docs_ru/opcodes.md) | Все опкоды VM с кодировкой, различия alpha и HD |
| [docs_ru/vm.md](docs_ru/vm.md) | Архитектура VM: стек, адресация, таски, события, нативные вызовы |
| [docs_ru/script_api.md](docs_ru/script_api.md) | ~400 функций API скриптов (Func/ObjFunc) по контексту |
| [docs_ru/pipeline.md](docs_ru/pipeline.md) | Использование тулчейна, пакетная обработка, формат C-псевдокода |

Полный индекс русской документации: [docs_ru/README.md](docs_ru/README.md). English: [docs_en/](docs_en/).

### Пример C-псевдокода

```c
// @import "constructor" 0
// @import "destructor" 0
// @import "SetTimer" 2
// @string 0x0000 "all"
// @string 0x0008 "hunt"

// GLOBALS
object g0;

// GTASK patrol
// @task_params object
// @task_vars int bool float
// GEVENT 1(int, float)
//   @event_vars bool
{
    // --- constructor ---
    self(g0);
    int v3 = 0;
    bool v2 = false;
    float v1 = 0.0;
    SetTimer(1, 5.0);
    // --- event 1 ---
    // ...
}
```

### Архитектура

В Pathologic используется собственная стек-ориентированная скриптовая VM
внутри Engine.dll:

- **Стек-ориентированная** с типизированными переменными (bool, int, float, string, object, cvector)
- **88 опкодов** (alpha) / **90 опкодов** (HD): пересылки, арифметика, ветвления, вызовы
- **Система тасков**: скрипты организованы в таски с обработчиками событий
- **Общий стек**: подпрограммы делят стековый кадр вызывающего
- **Нативные вызовы**: `Func` диспетчеризует в C++ через цепочку контекстов (~400 функций)
- **UTF-16LE** пул строк, VLE-кодированные имена, little-endian бинарный формат

#### Engine.dll (IDA)

| Адрес | Функция |
|-------|---------|
| `0x100661e0` | `CScript::CScript` — парсер .bin |
| `0x10065030` | `CScript::CreateInstruction` — фабрика опкодов |
| `0x100626c0` | `CScriptRun::CScriptRun` — конструктор VM |
| `0x10063100` | `CScriptRun::Run` — основной цикл исполнения |
| `0x10063380` | `CScriptRun::SendEvent` — диспетчеризация событий |

### Примеры

Предварительно сгенерированные дизассемблирование и декомпиляция всех
игровых скриптов:

| Каталог | Версия | Содержимое |
|---------|--------|------------|
| `examples/alpha/Scripts_asm/` | Alpha | 373 дизассемблированных .asm файла |
| `examples/alpha/Scripts_c/` | Alpha | 373 декомпилированных .c файла |
| `examples/HD/Scripts_asm/` | HD | 963 дизассемблированных .asm файла |
| `examples/HD/Scripts_c/` | HD | 963 декомпилированных .c файла |
