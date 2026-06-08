# Различия изданий: Alpha / HD / Void

В этом дереве исходников присутствуют три выпущенные (или близкие к
выпуску) сборки одного и того же движка:

| Издание                  | Сборочная папка    | Вариант движка                  | Скрипты | Статус round-trip                  |
|--------------------------|--------------------|---------------------------------|--------:|-------------------------------------|
| **Alpha (2005)**         | `alpha/`           | Pathologic 2005 (`Engine.dll`)  | 373     | 373/373 byte-identical              |
| **Pathologic Classic HD**| `HD/`              | HD-ремастер (`Engine.dll`)      | 972     | 972/972 byte-identical (`compare_asm.py`) |
| **The Void**             | `VOID/`            | `GameModule.dll` — другая VM    | 483     | 483/483 byte-identical (без BFS-фильтра) |

Этот документ собирает форматные и инструментальные различия между ними.

---

## 1. Тот же VFS-контейнер, те же примитивы

Все три издания используют **один и тот же формат архива `.vfs`**
([vfs_format.md](vfs_format.md)) — магия «LP1C», то же дерево каталогов,
те же строки с префиксом длины. `pkutil` собирается для всех трёх
из одной кодовой базы.

Все три используют одно и то же кодирование строк с префиксом длины
как для `CEString` (ASCII), так и для `CEStringW` (UTF-16) — см.
[vfs_format.md §3.4](vfs_format.md).

---

## 2. Различия скриптового байт-кода

### 2.1 Alpha против HD — сдвиг таблицы опкодов

HD-выпуск добавляет **2 новых опкода** в позициях 0x4D-0x4E:

| Опкод  | Имя       | Действие                                       |
|--------|-----------|-------------------------------------------------|
| 0x4D   | `CString` | Преобразовать значение на стеке в char-строку   |
| 0x4E   | `CString2`| Вариант с параметром ширины                     |

Все опкоды, которые в alpha были на `>= 0x4D`, в HD сдвинуты на **+2**.
Поэтому `Call+` в двух изданиях соответствует разным значениям опкода.

Ассемблер (`pathologic_re/parser/asm.py`) обрабатывает это разделение:
- Устанавливает маркер-бит `0x8000` при эмиссии HD-only опкодов
  (`CString`, `CString2`) — они проходят без сдвига.
- Заново применяет сдвиг `+2` ко всем стандартным опкодам, если цель — HD.

### 2.2 Alpha/HD против Void — полностью другая VM

Void использует **VM на регистрах** в `GameModule.dll` (IDA instance
`qut7`) с **80 опкодами** (0x00-0x4F, при этом 0x2C-0x2D не используются).
Это **не** PathologicScript; пара дизассемблер/ассемблер/декомпилятор
живёт в `disasm/void_re/` и является отдельным набором программ.

| Свойство            | Alpha / HD («PathologicScript»)            | Void («gscript»)                                        |
|---------------------|--------------------------------------------|---------------------------------------------------------|
| Тип VM              | Стековая машина                             | Регистровая машина (24-битное поле `reg` на инструкцию)  |
| Количество опкодов  | ~ 78 (alpha) / ~ 80 (HD)                    | 80 (с 2 зарезервированными)                              |
| Ширина инструкции   | Переменная (1-байтный op + операнды)        | Фиксированный 4-байтный заголовок + 0-2 дополнительных DWORD |
| Слот стека          | Одно значение                                | 8 байт: `value:4` + `type_tag:4`                         |
| Адресация ветвлений | Относительная к инструкции                   | Абсолютная от базы байт-кода                              |
| Строки              | В основном UTF-16, ASCII для имён методов   | Смешанные ASCII (`GetDotStr`) и UTF-16LE (`LoadString`) |
| Файловый контейнер  | См. [bin_format.md](bin_format.md)          | Отдельный формат с явными заголовками pool/func_table    |
| Round-trip-инструмент | `pathologic_re/parser/`                  | `disasm/void_re/`                                        |

См. `disasm/void_re/opcodes.md` для справочника опкодов Void.
Различия контейнеров суммированы ниже.

### 2.3 Void-контейнер `.bin`

```
[version:u32=0] [pool_size:u32] [pool: pool_size bytes]
[s1_size:u32]                          // globals count + byte-skip size
[s2_size:u32] [func_table: s2_size bytes]
[bc_size:u32]  [bytecode: bc_size bytes]
[sentinel:u32=-1] [remaining_size:u32]
[inline_str_count:u32] [inline_strs: UTF-16LE null-term]
[align to 4 relative to inline_str_count offset]
[patch_count:u32] [patches: 12B each (bc_off:u32, str_idx:u32, value:i32)]
```

Парсер Void — это `sub_10150860` в `GameModule.dll`. Патчи в
Void — это **отладочная информация** (исходный файл + номера строк),
а не модификации кода — роль совершенно отличается от чего-либо в
PathologicScript.

---

## 3. Формат сцены / актора

Идентичен между Alpha и HD (те же `.isc`, `.osc`, файлы размещения
без расширения, пары MeshData/OctTree). Void использует совершенно
иную систему сцен — у `GameModule.dll` свой загрузчик мира
(`sub_101E3450` обрабатывает загрузки `.sc` / `.bin`).

---

## 4. База строк

Alpha и HD: идентичный формат `main.dat` ([formats/dat_strings.md](formats/dat_strings.md)).
Локализованные строки сдвинуты, но раскладка бинарно совместима.

Void: пока не документирован в этом дереве; ожидаются отличия.

---

## 5. Рендерер

Alpha и HD используют общий D3D9-рендерер + каталог техник ([render_techniques.md](render_techniques.md)).
HD добавляет поддержку более новых GPU-возможностей и слегка
отличающиеся шейдерные `define`, но использует те же файлы `.tex` / `.mesh`.

Void: более крупная переработка — другой набор шейдеров, другой граф
сцены, другая интеграция LSHead. Всё так же эпоха D3D9.

---

## 6. Различия проходов декомпилятора

Псевдо-C декомпилятор PathologicScript
(`pathologic_re/parser/decompile.py` / `PathologicPseudoC.py`) выполняет
**~ 20 проходов** над AST:

```
WhileTrue → StructureIfGoto → FixLoopReturn → InlineConstants →
InlineExpressions → StripTrailingReturn → InlineNot → InlineIfCondition →
StructureIfGoto(2nd) → ElseToElseIf → IfElseChain → LoopBreak → ForToWhile →
RenameEventParams → RemoveUnusedDecls → MoveDecls → MergeDeclAssign →
CompoundAssign → StripRedundantParens → BracelessSingleIf →
RemoveEmptyForLoops → RemoveUnusedLabels
```

Для HD/Void тот же конвейер в основном работает; декомпилятор Void
`disasm/void_re/decompile.py` использует **тривиальное соответствие 1-к-1**,
поскольку байт-код регистровой VM уже линеен.

---

## 7. Round-trip .bin → .sc

Для 972 HD-скриптов `pathologic_re/sc_decompiler/` пытается
воспроизвести исходный код `.sc`, который `scomp` скомпилировал бы
обратно в точный `.bin`. Текущий статус:

- 102 / 972 (10.5 %) байт-идентичных round-trip
  (в Scripts_sc/ лежат OK-файлы).
- Узкое место: **поменянные местами** поля VarOut/VarIn у
  `CInstructionMov` (относительно байт-кода scomp) требовали
  обработки на уровне класса — только обычный MOV меняет местами,
  другие классы семейства Mov обычные.

Псевдо-C декомпилятор PathologicScript (работающий из .asm → .c)
уже байт-идеален для всех 373 alpha и 972 HD скриптов.

---

## 8. Переиспользование тулчейна

`scomp`, `smake`, `sbuild`, `pkutil`, `gdpconv`, `tile`,
`FontGen` — все шесть инструментов происходят из дерева исходников
`SRC/PlagueCity/tools/` и нацелены на Alpha+HD. Void использует
отдельный (закрытый, не поставлявшийся) компилятор.

---

## 9. Цепочка LifeStudio в Void

Void поставляет тот же `LifeStudioHeadAPIS.dll` для лицевой анимации,
но его классы акторов вызывают его напрямую через более тонкую обёртку
(без посредника `CLSHead`, как в PathologicScript).

---

## 10. Перекрёстные ссылки

- Раскладка PathologicScript `.bin`: [bin_format.md](bin_format.md).
- VM: [vm.md](vm.md). Опкоды: [opcodes.md](opcodes.md).
- Дизассемблер/компилятор Void: дерево исходников `disasm/void_re/`.
- Справочник опкодов Void: `disasm/void_re/opcodes.md`.
- Round-trip тестовые скрипты: `pathologic_re/parser/batch_test_2005.py`,
  `HD/batch_hd.py`.
