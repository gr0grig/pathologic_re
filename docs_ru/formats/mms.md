# `.mms` — морф-секвенсор LifeStudio

- **Архив**: `Geometries.vfs` (1 файл: `klara.mms`).
- **Владелец**: `LifeStudioHeadAPI::IMMSequencer` (закрытый SDK).
- **Загружается**: `CLSHead::CLSHeadSpeechData(...)` →
  `LifeStudioHeadAPI::IMMSequencer::Load(...)`
  (`Game/Game/LSHead.cpp` ~97).

---

## 1. Назначение

`.mms` — это **таймлайн**, который оркестрирует морф-анимации, определённые в
[`.mma`](mma.md). Если `.mma` отвечает на вопрос «какие кривые эта лицо умеет
проигрывать», то `.mms` — «в каком порядке и в какое время они проигрываются».

В альфа-сборке поставляется только `klara.mms`, в паре с `klara.mma` и
`klara.lsh`, для проигрывания единственной предзаписанной лицевой кинематики.
Все остальные персонажи синхронизируют губы процедурно, по анализу огибающей
их диалоговых файлов `.ogg`, вместо секвенсора.

---

## 2. Раскладка на диске — непрозрачная

Та же ситуация, что и в [`.lsh`](lsh.md) и [`.mma`](mma.md): тело файла —
приватный бинарь SDK. Движок читает его через memory-mapped I/O и передаёт
указатель байтов в `IMMSequencer::Load`.

Что выводимо из `CLSHead::CLSHeadSpeechData` и из того, как объект секвенсора
управляется каждый кадр:

| Concept                  | Engine use                                          |
|--------------------------|-----------------------------------------------------|
| Event list               | Time-ordered triggers (start anim X, stop anim Y). |
| Audio sync               | Per-event audio cue token referencing an `.ogg`.   |
| Phoneme blending         | Per-event weight curve mixing multiple morph anims.|
| Looping / branching      | Sequencer state machine; SDK manages internally.   |
| Speech-driven lip-sync   | The "speech data" wrapper applies envelope amplitude on top. |

Связанный объект данных речи также называется `CLSHeadSpeechData`, что
наводит на мысль, что `.mms` несёт опциональные ссылки на голосовые клипы —
однако сами аудио-данные не встроены; они живут в `Sounds.vfs` как отдельные
файлы [`.ogg`](ogg.md).

---

## 3. Сжатие

Неизвестно / непрозрачно. Размер на диске ≈ 23 КБ; загружается как
memory-mapped blob.

---

## 4. Связанные форматы

- [`.lsh`](lsh.md) — риг.
- [`.mma`](mma.md) — библиотека кривых, на которую ссылается секвенсор.
- [`.ogg`](ogg.md) — голосовые клипы, синхронизируемые событиями секвенсора.

---

## 5. Итог

Относитесь к файлам `.mms` так же, как к `.mma`: они непрозрачны и
редактируются только через авторский инструмент LifeStudio HEAD 2.5. Моды,
переназначающие лицо Клары на другой персонаж, должны либо пересобрать `.mms`
этим инструментом, либо заменить всю тройку (`klara.lsh` + `klara.mma` +
`klara.mms`).
