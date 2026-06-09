# Pathologic 2005 — Документация по реверс-инжинирингу (русская версия)

Техническая документация по движку и пайплайну контента игр
**Pathologic** (2005 / Classic HD) и **The Void**. Материал
получен из открытого исходного дерева `SRC/PlagueCity/`,
поставляемого вместе с игрой, и из реверс-инжиниринга рантайм-DLL
средствами IDA.

Английская версия лежит в `../docs_en/`.

---

## Порядок чтения

Если вы только знакомитесь с проектом, читайте в таком порядке:

1. **[engine_architecture.md](engine_architecture.md)** — карта модулей,
   COM-подобная модель интерфейсов, точка входа фабрики.
2. **[vfs_format.md](vfs_format.md)** — контейнер архива `.vfs`.
3. **[formats/README.md](formats/README.md)** — индекс всех файловых
   форматов внутри архивов.
4. **[bin_format.md](bin_format.md)**, **[vm.md](vm.md)**,
   **[opcodes.md](opcodes.md)** — байткод PathologicScript и его VM.
5. **[toolchain.md](toolchain.md)** — как собрать архивы обратно из
   исходников.

---

## Внутренности движка

| Документ                                          | Тема                                            |
|---------------------------------------------------|-------------------------------------------------|
| [engine_architecture.md](engine_architecture.md)   | Раскладка модулей, `IGeneric` / `IEngineFactory`. |
| [save_format.md](save_format.md)                  | Формат сериализации сохранений.                 |
| [streaming.md](streaming.md)                      | Асинхронный I/O и модель стриминга ассетов.     |
| [lighting.md](lighting.md)                        | Статические и динамические источники света, короны, ambient. |
| [render_techniques.md](render_techniques.md)      | Каталог D3D9-техник и шейдеры.                  |
| [animation.md](animation.md)                      | Костные треки, скиннинг, кривые блендинга.      |
| [ai_tasks.md](ai_tasks.md)                        | AI-контроллеры TAB / CAB / APMotion.            |
| [particle_system.md](particle_system.md)          | Блок параметров частицы из 54 float'ов.         |
| [inventory.md](inventory.md)                      | Предметы, оружие, контейнеры.                   |
| [dialogue.md](dialogue.md)                        | Поток UI диалогов, дневника, карты мира.        |

## Форматы ассетов и файлов

См. [formats/README.md](formats/README.md) — главный индекс. Краткий
список:

- **VFS-контейнер**: [vfs_format.md](vfs_format.md).
- **Геометрия и анимация**: [formats/mesh.md](formats/mesh.md),
  [formats/lsh.md](formats/lsh.md),
  [formats/hand.md](formats/hand.md),
  [formats/mma.md](formats/mma.md),
  [formats/mms.md](formats/mms.md),
  [formats/meshdata_octtree.md](formats/meshdata_octtree.md).
- **Сцены**: [formats/isc.md](formats/isc.md),
  [formats/osc.md](formats/osc.md),
  [formats/pfd.md](formats/pfd.md),
  [formats/map.md](formats/map.md).
- **Акторы**: [formats/actor_xml.md](formats/actor_xml.md),
  [formats/actor_placement.md](formats/actor_placement.md).
- **Строки / шрифты / UI**:
  [formats/dat_strings.md](formats/dat_strings.md),
  [formats/txt_strings.md](formats/txt_strings.md),
  [formats/ft.md](formats/ft.md),
  [formats/ui_xml.md](formats/ui_xml.md),
  [formats/world_xml.md](formats/world_xml.md).
- **Текстуры**: [formats/tex.md](formats/tex.md),
  [formats/png_tga.md](formats/png_tga.md),
  [formats/bump.md](formats/bump.md),
  [formats/dat_water.md](formats/dat_water.md).
- **Аудио**: [formats/ogg.md](formats/ogg.md).
- **Скрипты** (байткод): [formats/bin.md](formats/bin.md).

## Скриптовая подсистема (PathologicScript)

| Документ                                | Тема                                                   |
|-----------------------------------------|--------------------------------------------------------|
| [sc_language.md](sc_language.md)         | Справка по исходному языку (`.sc` / `.sci`).           |
| [bin_format.md](bin_format.md)           | Байтовая раскладка скомпилированного `.bin`.           |
| [opcodes.md](opcodes.md)                 | Каждый опкод и его семантика.                          |
| [vm.md](vm.md)                           | Модель VM: стек, диспетчеризация, типы.                |
| [tasks.md](tasks.md)                     | Модель задач / корутин.                                |
| [events_2005.md](events_2005.md)         | Порядковые номера событий (`OnUse`, `OnHit`, …).       |
| [script_api.md](script_api.md)           | API, вызываемое из скриптов в хост (`@`-функции).      |
| [console_commands.md](console_commands.md) | Внутриигровые команды консоли.                       |
| [scripts_catalog.md](scripts_catalog.md) | Каталог всех 373 поставляемых скриптов.                |
| [pipeline.md](pipeline.md)               | Тулчейн реверс-инжиниринга (asm/c round-trip).         |
| [sc_decompiler.md](sc_decompiler.md)     | Декомпилятор в исходный язык (`.sc`), проверенный побайтово через настоящий `scomp.exe`. |

## Инструменты и различия между изданиями

| Документ                              | Тема                                                |
|---------------------------------------|----------------------------------------------------|
| [toolchain.md](toolchain.md)          | `smake` / `pkutil` / `scomp` / `sbuild` / `gdpconv` / `tile` / `FontGen`. |
| [editions_diff.md](editions_diff.md)  | Alpha vs HD vs Void — чем отличаются.               |

---

## Как сделана эта документация

- **Главный источник**: `SRC/PlagueCity/` — оригинальное C++-дерево
  2005 года.
- **Перекрёстные проверки**: hex-дампы файлов, извлечённых из
  `alpha/data/*.vfs`, анализ поставляемой `Engine.dll` в IDA Pro и
  байт-в-байт идентичный round-trip статуса скриптового тулчейна.
- **Формат**: каждое утверждение байтового уровня снабжено ссылкой
  `path:line`. Там, где раскладку удалось только вывести
  (форматы из закрытых SDK, частично эмпирические структуры),
  документ это явно отмечает.

---

## Срез статуса

- **VFS-контейнер** — полностью задокументирован.
- **22 файловых формата внутри архивов** — полностью задокументированы.
- **373 alpha + 972 HD + 483 Void скрипта** — 100 % байт-идентичный
  round-trip в `pathologic_re/parser/` и `disasm/void_re/`.
- **Формат сохранений** — полностью задокументирован на структурном
  уровне (factory ID, раскладка примитивов, последовательность
  верхнего уровня).
- **Архитектура движка** — модель `IGeneric`, точка входа фабрики,
  подсистемы, shell файловой системы — всё задокументировано.
- **AI-задачи** — 13 классов TAB + CAB + APMotion задокументированы.
- **Render-техники** — 28 классов техник + каталог шейдеров.
- **Анимация костей** — полная байтовая раскладка `.mms`, модель
  ключевых кадров, пайплайн скиннинга.
- **Система частиц** — блок параметров из 54 float'ов полностью
  декодирован.
- **Освещение, инвентарь, диалоги, стриминг** — описаны на системном
  уровне.

## Перекрёстные ссылки за пределами этой папки

- Английские документы: `../docs_en/`.
- Код тулчейна реверс-инжиниринга: `../parser/`,
  `../sc_decompiler/`, `../examples/`.
- IDA-шаблон `.bt`: `../tools/AlphaPatScript.bt`.
- Дамп VM-состояния для IDA Pro: `../tools/dump_vm_state2.py`.
