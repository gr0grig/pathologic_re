# `.bin` — скомпилированный байткод PathologicScript

- **Архив**: `Scripts.vfs` (373 файла).
- **Примеры**: `world_danko.bin`, `cs_play_all.bin`,
  `item_burah_serum.bin`, `weather.bin`, `music.bin`,
  `ui_inventory.bin`, `door.bin`.
- **Загрузчик**: `CScript::Load(...)` —
  `Game/Engine/ScriptManager.cpp` → `Game/Engine/Script.cpp`.
- **VM**: подробно описана в [`../vm.md`](../vm.md) и
  [`../bin_format.md`](../bin_format.md).

---

## 1. Место этого документа в наборе

Байткод PathologicScript — **наиболее тщательно реверс-инженерный** ресурс
этого проекта: есть полный инструментарий с round-trip-циклом (дизассемблер
→ C-подобный декомпилятор → ассемблер → компилятор), все 373 скрипта
альфы проходят побайтово-точный round-trip-тест, а раскладка байтов,
набор опкодов и семантика выполнения описаны в отдельных документах в
родительской директории:

- [`../bin_format.md`](../bin_format.md) — раскладка байтов (заголовок,
  пул строк, таблица функций, код, отладочная информация).
- [`../opcodes.md`](../opcodes.md) — все опкоды и их семантика.
- [`../vm.md`](../vm.md) — состояние VM, стек, цикл диспетчеризации.
- [`../tasks.md`](../tasks.md) — модель задач (корутины движка).
- [`../script_api.md`](../script_api.md) — host-API, который может
  вызывать байткод.

Этот документ — *индексная страница* для самого ресурса. **За форматом
на диске обращайтесь к [`../bin_format.md`](../bin_format.md).**

---

## 2. Краткое напоминание о раскладке на диске

```
+----------------------+
| Header (signature,   |
|  version)            |
+----------------------+
| String pool          |   (UTF-16LE & ASCII, mixed)
+----------------------+
| Function table       |   (name → bytecode offset)
+----------------------+
| Bytecode             |   one stream of variable-width instructions
+----------------------+
| Optional debug info  |
+----------------------+
```

Сжатия нет. Файл загружается как единый memory-mapped блок.

---

## 3. Вариант The Void

The Void использует тот же **инструментарий**, но **другой набор опкодов**
и другой контейнер `.bin` — см.
[`../bin_format.md`](../bin_format.md) раздел «Void» для этого варианта.
Альфа-сборка *Pathologic* использует только разновидность PathologicScript.

Статистика побайтово-идентичного round-trip для 972 скриптов находится в
README проекта и в README этой родительской директории.

---

## 4. Перекрёстные ссылки

- Главный документ по раскладке байтов: [`../bin_format.md`](../bin_format.md).
- Опкоды: [`../opcodes.md`](../opcodes.md).
- Модель VM: [`../vm.md`](../vm.md).
- API, вызываемое из хоста: [`../script_api.md`](../script_api.md).
- Инструменты для ассемблирования/дизассемблирования: `pathologic_re/parser/`
  (disasm.py / asm.py / decompile.py / compile.py).
- Где ссылаются на `.bin` со стороны данных:
  - [actor_xml.md](actor_xml.md) `<Script>`
  - [ui_xml.md](ui_xml.md) `<form script="…">` и `<cursor
    script="…">`
  - [world_xml.md](world_xml.md) `<Script>`, `<Weather><Script>`,
    `<Music><Script>`.
