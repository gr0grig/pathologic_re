# Known issues — root causes of remaining .bin → .sc → .bin' mismatches

State as of plan execution: **785/972 (80.8 %) byte-identical**, 38 BIN_MISMATCH, 149 LIFT_ERROR.

`classify_mismatches.py` produced `tmp_diff/classify.tsv`. Cluster counts:

| Cluster tag                    | Status         | Count | Has reference? |
|---|---|---:|---|
| `lift-jumpb-out-of-body`        | LIFT_ERROR     | 106   | mostly yes |
| `lift-jump-skip1`               | LIFT_ERROR     | 37    | mostly yes |
| `bool-flag`                     | BIN_MISMATCH   | 19    | yes (most) |
| `nulleq-vs-push`                | BIN_MISMATCH   | 5     | yes |
| `goto-target-shift`             | BIN_MISMATCH   | 3     | mixed |
| `push-int-temp-2`               | BIN_MISMATCH   | 3     | yes (world_*) |
| `lift-jump-backward`            | LIFT_ERROR     | 3     | yes |
| `unknown-delta+7-ins2-del1`     | BIN_MISMATCH   | 3     | yes (world_final/intro, ui_message_text) |
| `lift-jump-forward`             | LIFT_ERROR     | 2     | mixed |
| various `unknown-…` (singletons)| BIN_MISMATCH   | 5     | mixed |
| `lift-stack-imbalance`          | LIFT_ERROR     | 1     | yes (quest_b11_04_sanitar) |
| **TOTAL**                       |                | **187** ||

---

## Cluster A — `bool-flag` (19 files, BIN_MISMATCH)

**Files (representative)**: gun_sentry, quest_d10_01_soldier/msoldier, quest_d11_01_guard/soldier, quest_d11_02_soldier, soldier_stationary, ui_trade ×4, ui_inventory, ui_map, ui_microscope, ui_container, ui_apparatus, ui_corpse_container, …

**Pattern**: ORIG bytecode contains a `Pop(0); Push((bool) Stack[-N] == 0)` (NullEq) immediately before a JumpB. OUR bytecode emits `Push(Stack[-N])` (direct push) — same JumpB target but the encoding differs.

**Subdivision (manually confirmed)**:

1. *Out-arg-bool*: source has `bool L; @ScompCall(L); if (!L) {…}` — gun_sentry/soldier family. The bool slot is set by a function's out-arg and immediately tested.
2. *Manual flag*: source has `bool f = false; if(A) if(B) f = true; if (f) {…}` — ui_trade family (the `bool` is missing entirely from our lifted .sc; our lifter discards the slot and inlines `true` into the condition).

Common substrate: in BOTH cases our lifter fails to keep the bool slot as a NAMED `OpVar`. For (1) the bool is correctly declared but the JumpB consumes the slot's `_Reserved.expr` rather than an `ENId(name)`. For (2) the slot is never even declared.

**Tractability**: Source-aware. Requires data-flow on `_Reserved` slots — when a slot is *written* and then *read* in a JumpB cond, the lifter must (a) keep it as `_Slot` (named OpVar), and (b) for `if (!X)` emit `ENOp1(NOT, ENId(X))` so scomp re-emits NullEq.

**Probe-point**: `pathologic_re/sc_decompiler/lift/lifter.py:h_MovB` (line ~2752) — currently calls `_assign_local_slot` which writes to `_Reserved.expr` silently. Need to promote any `_Reserved` slot that's later READ via `Push(slot)+JumpB` into a `_Slot`. Also `_make_unop_handler` (line ~3902) for NullEq/NullNeq instructions: when consumed by a JumpB cond, must preserve `ENOp1(NULL/NOTNULL, …)` rather than collapse.

**Expected gain if fixed**: up to **+19 files**.

---

## Cluster B — `nulleq-vs-push` (5 files, BIN_MISMATCH)

**Files**: quest_b6_03 (already fixed in 785 OK), ui_tooltip_cursor, ui_tooltip_map_cursor, ui_diary_text, plus 2 others.

**Pattern**: same as Cluster A but smaller delta (mostly delta=0 or +1). The bytecode has an extra Not/NullEq in ours that ORIG doesn't, or vice versa.

**Tractability**: same root cause as Cluster A — bool-cond preservation in `h_JumpB` and `_make_unop_handler`.

**Probe-point**: identical to Cluster A.

**Expected gain**: up to **+5 files** (overlaps with A's fix; same code path).

---

## Cluster C — `push-int-temp-2` (3 files: world_burah, world_danko, world_klara)

**Pattern**: OUR lifter emits two extra `PushEmpty(int); Stack[-1] = X; Pop(1)` triples (= 3 instr × 2 occurrences × 6 bytes ≈ 36 bytes; observed delta +62 per file with other adjustments).

**Hypothesis** (per Explore agent + earlier diagnostics): expression-level sub-expression evaluation that our lifter materializes as named-temp slots when scomp inlines the sub-expression directly.

**Tractability**: Source-aware peephole. Detect `PushEmpty(int); Stack[-1] = expr; Pop(1)` as a no-op temp and elide.

**Probe-point**: `h_PushV` (line ~2599) — when a `PushV(N)` slot is written by a single `Mov` and the slot is `_Reserved` (no named var) and immediately `Pop(1)` removes it without any intervening read, the whole triple is a syntactic temp and should not be emitted as a statement.

**Expected gain**: **+3 files** (world_burah/danko/klara).

---

## Cluster D — `goto-target-shift` (3 files, BIN_MISMATCH, delta=0)

**Files**: grenade, trigger_fire_damage, ui_diary_text (overlaps with B).

**Pattern**: same instruction count, identical content except a single `GOTO X` vs `GOTO X+1`. Always at the loop back-jump or continue position.

**Root cause**: for-loop vs while-loop with iter step shape. ORIG source is `for (init; cond; iter) { body }` — scomp puts the iter step BEFORE the cond check, so `continue;` and the back-jump target the iter step. Our lifter lifts as `init; while (cond) { body; iter; }` — the iter step is INSIDE the body, so `continue`/back-jump target the cond check (one earlier).

**Tractability**: Mechanically tractable but requires the for/while detector to recognise the iter-step-before-cond pattern. We already have `_while_to_for` but it only fires for the canonical `i = i + 1` iter step; needs to also recognise method-call iter steps like `L1->Next(L2, L3)`.

**Probe-point**: `_while_to_for` (line ~1756) and `_is_iter_step` (line ~1631). Relax `_is_iter_step` to accept ANY single-statement that scomp would emit between the back-jump's target and the cond.

**Expected gain**: **+3 files** plus possibly some `unknown-delta+7-ins2-del1` (world_final/intro/ui_message_text) where the same pattern appears.

---

## Cluster L1 — `lift-jumpb-out-of-body` (106 files, LIFT_ERROR)

**Files (sample)**: arena_fighter, citizen_alkash, citizen_morlok, fog, follower, grabitel, hunter_berserk, rat ×3, ui_load, ui_save, etc.

**Pattern**: a JumpB whose target is FORWARD but lies outside the current subblock slice. Typically the target is "right past the trailing Jump of an outer if-else" (= start of outer's else block, or merge after outer if-no-else).

**Source construct**: nested `if (cond) break;` / `if (cond) continue;` / `if (cond) return;` inside the then-block of an outer if-else whose then-branch terminates with break/return.

**Tractability**: Bytecode + scomp-source knowledge. We need to add the address `end_then_pos.index` (= one past trailing Jump = start of else, or post-merge for if-no-else) to `exit_addrs` so the inner JumpB recognises it as a valid exit. Attempted earlier in this session (+108 files lifted but +0 OK because secondary structural bugs surface). Needs a focused per-cluster diagnosis: for each newly-lifted file, what byte diff does it produce.

**Probe-point**: `h_JumpB` line ~3343 (`raise LiftError(... not in current body)`); `exit_addrs` building at line ~3514 (`tj_addr`/`tj_op.VarIn` push).

**Expected gain**: **+0 to +106 files** depending on whether the lifted shape compiles byte-identical. Earlier experiment showed lifting succeeded but most files moved to BIN_MISMATCH instead of OK. The right fix needs the data-flow analysis from Cluster A/B (since these often appear together with bool-flag patterns).

---

## Cluster L2 — `lift-jump-skip1` (37 files, LIFT_ERROR)

**Files (sample)**: b4_boy, citizen_dohodyaga, citizen_girl/littleboy/littlegirl, citizen_nudegirl, citizen_vaxxabit/vaxxabitka, citizen_wasted_girl, citizen_woman, etc.

**Pattern**: `Jump A → A+2` (unconditional Jump that skips exactly one instruction). The skipped instruction (at A+1) is another `Jump` or `Return` — scomp's "dead-code emission" after a control transfer that our lifter doesn't recognise because the dead instr is OUTSIDE the current slice (it sits between functions).

**Source construct**: `do { … if (X) break; … } while (cond);` — scomp emits dead-code Jump after each control transfer; that dead Jump becomes the function's trailing Jump in our slicer.

**Tractability**: Mechanically tractable. Extend `h_Jump` to also accept `Jump → next-instr-in-CTX-addr` when the next CTX instr is a Jump or Return.

**Probe-point**: `h_Jump` line ~3608. We attempted this earlier (CTX-based dead-instr detection); it produced 28 → 23 SCOMP_ERROR + 5 BIN_MISMATCH (no OK gain). Needs follow-up: the lifted .sc compiles but produces different bytes because of secondary structural mismatches. Likely depends on the task-inheritance fix (see "Open issue" below).

**Expected gain**: **+0 to +37 files** depending on if secondary issues (task inheritance, etc.) are also addressed.

---

## Cluster L3 — `lift-stack-imbalance` (1 file: quest_b11_04_sanitar)

**Pattern**: subblock lift exits with depth=17 but entered with depth=16 (+1 extra push).

**Tractability**: Single-file deep-dive needed. Possibly a missing `_pop` after a specific bytecode pattern.

**Probe-point**: trace which handler is the source of the imbalance for the specific bytecode at the error site.

**Expected gain**: **+1 file**.

---

## Cluster E — singleton/small `unknown-…` (5 files, BIN_MISMATCH)

Files: nudegirl_dance, ui_dapparatus, city, quest_d11_01, ui_key_action_list, plus 3× `delta+7` (world_final, world_intro, ui_message_text) and 1× `delta-39` (ui_apparatus).

**Pattern**: heterogeneous — each file has its own structural diff. Likely a mix of Cluster C (extra temps) and Cluster D (goto shift) at specific positions.

**Tractability**: case-by-case. Re-classify after Cluster C and D fixes land.

**Expected gain**: **+2 to +5 files** as a side-effect of fixing C and D.

---

## Open issue — task inheritance (deferred)

When the `lift-jump-skip1` fix is applied, ~23 of the newly-lifted files fail at scomp with "Function 'f_NNN_a1_V@1' not found (compiling: t3::init)". Root cause: scomp uses single inheritance and needs `task t3 : t2` to resolve cross-task method calls; our lifter doesn't infer this. Implemented an experimental `_infer_task_inheritance` pass (currently disabled in lifter.py around `_lift_script` end) — works for tasks with NO task vars but blocks files where derived task has its own `tv0, tv1, …` because of name collision with base task's vars.

**Path forward**: rename task vars to be per-task-unique (e.g. `t{idx}_tv0` or `tv_t{idx}_{i}`) so inheritance can be set without conflicts. Invasive (touches every `tv*` reference in the lifter + emitter) but unlocks ~23 files when combined with L2.

---

## Priority order for the next fix-pass

Ordered by (files saved / estimated work):

1. **Cluster C — push-int-temp peephole** (~3 files, ~1 h). Pure pattern match, low risk.
2. **Cluster D — for-loop iter step relaxation** (~3-5 files, ~2 h). Local change to `_is_iter_step`.
3. **Cluster A + B — bool-slot promotion** (~24 files, ~4-8 h). Data-flow on `_Reserved` slots; high impact but risky. Bench-test against the existing 785 OK before merging.
4. **Cluster L2 + task inheritance** (~37 files, ~6 h). Lift-side change + tv rename, then verify scomp accepts.
5. **Cluster L1** (~106 files, harder). May need a full region-based structurer; defer until 1-4 are done so we know what BIN_MISMATCH patterns L1's lifted files surface.
6. **Cluster L3** (~1 file). Targeted fix after the above.

---

## How to validate this investigation end-to-end

```powershell
# Re-run classifier
python pathologic_re\sc_decompiler\notes\classify_mismatches.py `
  --csv tmp_diff\rt26.csv --out tmp_diff\classify.tsv

# After each fix-pass: re-run corpus and confirm OK delta
python -m pathologic_re.sc_decompiler.verify.roundtrip_all `
  --bin-dir 2005\Scripts --report-csv tmp_diff\rtNN.csv --workers 8
```

**Completion criterion**: when this document's "Expected gain" totals are realized — would put us at **785 + 3 + 5 + 24 + 37 + 106 + 1 = ~961 / 972 (98.9 %)**. The remaining ~11 are deep-CFG cases (Cluster L3 carve-outs + UI files without reference sources).
