#!/usr/bin/env python3
"""
Applies an analyst-authored rename map to HD/Scripts_c/NPC_Burah_Aglaja.c.
Each mapping below was derived by hand by reading:
  - the HD decompile
  - 2005 NPC_Burah_Aglaja.sc
  - 2005 NPC_idle_base.sci (TIdleBase / TNPCSmartIdleBase contract)
  - 2005 std.sci (IsDay/IsNight/GetDay/GetGameTime, event IDs)
  - dialog text from pathologic_ru.csv (added as inline comments)

The map is intentionally over-specified: every func_NNNN that has an
analytically obvious meaning is renamed; opaque helpers keep their numeric
name. Variable renames are scoped to single functions (where the meaning was
visible in context).
"""
import json, re
from pathlib import Path

HD_IN  = Path(__file__).resolve().parent / "Scripts_c/NPC_Burah_Aglaja.c"
HD_OUT = Path(__file__).resolve().parent / "Scripts_c_renamed/NPC_Burah_Aglaja.c"
DLG    = Path(__file__).resolve().parent / "_dialog_ids.json"

# ----------------------------------------------------------------------------
# Function renames (file-wide). Each chosen by reading the function body and
# matching it to a 2005 source definition or contract.
# ----------------------------------------------------------------------------
FUNCS: dict[str, str] = {
    # --- TIdleBase / TNPCSmartIdleBase contract (NPC_idle_base.sci) ---
    "func_3946": "TNPCSmartIdleBase_init_body",   # maintask init core (calls GetDirection, super.init loop)
    "func_4122": "TIdleBase_init",                # @WaitForAnimEnd; if(!IsLoaded) return; ... idle loop
    "func_4191": "ContinueIdle",                  # body: return true
    "func_4193": "CancelActivity",                # @StopAnimation(); @StopGroup0()
    "func_4002": "InitSpeechTimer",               # @rand 8..16; @SetTimer(c_iTalkTimer=10, ...)
    "func_4011": "KillSpeechTimer",               # @KillTimer(10)
    "func_4225": "IsLoaded",                      # bool out = @IsLoaded
    "func_3960": "RotateToPlayer",                # @FindActor("player") -> RotateToActor
    "func_3980": "IsPlayerNear",                  # @FindActor("player") -> dist < c_fTalkDistance^2 && @CanSee
    "func_3975": "RestoreDirection",              # @RotateAsync(vInitDir.x, vInitDir.z)  (param is dir vector, HD quirk)
    "func_4216": "RotateToActor",                 # actor.GetPosition -> RotateToPosition
    "func_4206": "RotateToPosition",              # @GetPosition; delta; @Rotate
    "func_4375": "StartCommonSpeech",             # called by OnTimer when player near
    "func_4317": "RegisterCommonSpeech",          # voice_common dispatcher
    "func_4412": "StartDayMonthSpeech",           # @irand over d{N}m{i} properties
    "func_4486": "PlaySpeechIfExists",            # @lshHasSpeech / @lshPlaySpeech
    "func_4455": "PlayHeadAnimation",             # @lshHasAnimation / @lshPlayAnimation by mood string
    "func_4471": "PlayHeadAnimation_LSH",         # helper: lshHasAnimation + lshGetAnimTimes + lshPlayAnimation
    "func_4501": "StopLSHSpeechIfActive",         # if(IsLSH) @lshStopSpeech
    "func_4508": "self",                          # @self(out)
    "func_4615": "GetIdleAnimation",              # string "idle" + index
    "func_4622": "GetIdleAnimationCount",         # for(;;) HasAnimation("c"+i) ; count
    "func_4198": "GetActorDistanceSqr",           # @GetPosition delta squared
    "func_4230": "PrepareTradeCamera",            # camera setup before dialog
    "func_4299": "RestoreCameraAfterDialog",      # @CameraSwitchToNormal + @UnlookAsync
    "func_4514": "Normalize",                     # sqrt(v|v); v/=len  (same as 2005 std.sci Normalize)
    "func_4540": "SetDoorLocked",                 # @FindActor(name); SetProperty("locked", b)
    "func_4564": "TriggerNamedActor",             # @FindActor(name); @Trigger(actor, evt)
    "func_4557": "HasInventoryItem",              # @GetInvItemByName -> HasItem
    "func_4647": "IsLSH",                         # body: bool=true (LSH animation system marker)
    "func_5230": "GetDiaryRoot",                  # @GetDiaryRoot; trace on null
    "func_5243": "AttachDiaryEntryToParent",      # GetDiaryRoot -> Find(parentID) -> AddChild
    "func_5271": "GetWorldMap",                   # GetMainOutdoorScene -> GetMap
    "func_5288": "CreateLocatorMapEntry",         # outdoor scene -> GetLocator + GetMap + SetMapParams

    # --- std.sci game-time helpers ---
    "func_4576": "GetGameTime",                   # @GetGameTime(out)
    "func_4581": "GetDay",                        # 1 + fTime/24
    "func_4590": "IsDay",                         # GetDay() == iDay
    "func_4596": "IsNight",                       # day match + hour < 7

    # --- 2005 NPC_Burah_Aglaja.sc top-level function ---
    "func_5338": "PerformUse",                    # @GetVariable("mt_aglaja", iMeeting); if/else dispatch to TDlgs

    # --- Aglaja NPC info getters ---
    "func_4639": "GetSelfNPCDescriptionID",       # returns 515527
    "func_4641": "GetSelfNPCNameID",              # returns 513334
    "func_4643": "GetSelfPhotoPath",              # "ui/NPC_Aglaja.png"
    "func_4645": "GetSelfPhoto2Path",             # "ui/NPC_Aglaja_b.png"
    "func_5321": "GetPlayerNameIDByBranch",       # @GetVariable("branch", n) -> 1/2/3
    "func_4529": "AddBlankActorToScene",          # @GetMainOutdoorScene; @AddBlankActor

    # --- Dialog launchers (one per TDlg_XXX subtask; named by routing in PerformUse) ---
    "func_3693": "TDlgLauncher_Mt_Burah_Aglaja",            # TaskCall(12) -> task_13 body
    "func_2834": "TDlgLauncher_DN8_Burah_AglajaNight",      # TaskCall(6) -> task_7 body
    "func_3037": "TDlgLauncher_DN12_Burah_AglajaNight",     # TaskCall(8) -> task_9 body
    "func_0":    "TDlgLauncher_DN7_Burah_Aglaja",           # TaskCall(0) -> task_1 body
    "func_1323": "TDlgLauncher_DN8_Burah_Aglaja",           # TaskCall(2) -> task_3 body
    "func_3240": "TDlgLauncher_DN9_Burah_Aglaja",           # TaskCall(10) -> task_11 body
    "func_2255": "TDlgLauncher_DN11_Burah_Aglaja",          # TaskCall(4) -> task_5 body

    # --- Dialog body funcs (called once inside each launcher via TaskCall) ---
    "func_3774": "TDlgBody_Mt_Burah_Aglaja",                # 530682 onwards (initial line of meeting)
    "func_2915": "TDlgBody_DN8_Burah_AglajaNight",          # 529922 onwards
    "func_3118": "TDlgBody_DN12_Burah_AglajaNight",         # 529942 onwards
    "func_81":   "TDlgBody_DN7_Burah_Aglaja",               # 521012 main day-7 opening
    "func_1404": "TDlgBody_DN8_Burah_Aglaja",               # 521373/521376 (b8q01)
    "func_3321": "TDlgBody_DN9_Burah_Aglaja",               # 530357 (b9q03)
    "func_2336": "TDlgBody_DN11_Burah_Aglaja",              # 522067 (b11q01)

    # --- Per-dialog mood setters (HD instantiated SetCurrentMood once per task) ---
    "func_299":  "SetCurrentMood_t1_DN7",                   # in task_1 (TDlg_DN7) event_11
    "func_1531": "SetCurrentMood_t3_DN8",                   # in task_3
    "func_2434": "SetCurrentMood_t5_DN11",                  # in task_5
    "func_2973": "SetCurrentMood_t7_DN8Night",              # in task_7
    "func_3176": "SetCurrentMood_t9_DN12Night",             # in task_9
    "func_3436": "SetCurrentMood_t11_DN9",                  # in task_11
    "func_3832": "SetCurrentMood_t13_Mt",                   # in task_13

    # --- Quest state checkers (each reads one game variable) ---
    "func_4524": "GetVariable_int",                         # helper: @GetVariable(key, int out)
    "func_4848": "IsB7q01_DialogCompleted",                 # b7q01 == 1000
    "func_4860": "IsOob7Aglaja1_NotYet",                    # oob7Aglaja1 == 0
    "func_4872": "IsB7q03_State2",                          # b7q03 == 2
    "func_4884": "IsB7q03SerumWorks_Set",                   # b7q03SerumWorks != 0
    "func_4896": "IsB7q03_DialogCompleted",                 # b7q03 == 1000
    "func_4908": "IsOob8Aglaja1_NotYet",                    # oob8Aglaja1 == 0
    "func_4920": "IsB8q01_NotStarted",                      # b8q01 == 0
    "func_4932": "IsB8q01_State7",                          # b8q01 == 7
    "func_4944": "IsB8q03_ActiveButNotFinal",               # b8q03 != 0, != 1000, != -1
    "func_4978": "IsOob8Aglaja2_NotYet",                    # oob8Aglaja2 == 0
    "func_4990": "IsB11q01_DialogCompleted",                # b11q01 == 1000
    "func_5002": "IsOob11Aglaja1_NotYet",                   # oob11Aglaja1 == 0
    "func_5014": "IsOob11Aglaja2_NotYet",                   # oob11Aglaja2 == 0
    "func_5026": "IsB9q03BadInit_Set",                      # b9q03BadInit != 0
    "func_5038": "IsB9q03BonefiresCount4",                  # b9q03BonefiresCount == 4
    "func_5050": "IsOob9Aglaja1_NotYet",                    # oob9Aglaja1 == 0
    "func_5062": "IsOob9Aglaja2_NotYet",                    # oob9Aglaja2 == 0
    "func_5074": "IsActor_NotDiseased",                     # actor.GetProperty("disease") == 0 via func_5119
    "func_5084": "IsB7q01_State6",                          # b7q01 == 6
    "func_5096": "ActorHasBurahSerum",                      # HasInventoryItem("burah_serum")
    "func_5107": "IsB7q01_State8",                          # b7q01 == 8
    "func_5119": "IsObjectDiseasePropertyZero",             # actor.GetProperty("disease") == 0

    # --- Quest action functions (each sets a variable, adds a mark, etc.) ---
    "func_4656": "OnQuest_b7q01_AdvanceToStarshina",        # SetVariable("b7q01", 7); AddMark pt_map_starshina; diary
    "func_4679": "OnQuest_b7q01_Complete",                  # diary + Trigger("quest_b7_01", "completed")
    "func_4689": "OnQuest_b7q03_Start_Theater",             # SetVariable("b7q03", 1); AddMark pt_map_theater; diaries
    "func_4724": "Set_oob7Aglaja1",                         # SetVariable("oob7Aglaja1", 1)
    "func_4730": "OnQuest_b7q03_Complete",                  # diary + Trigger("quest_b7_03", "completed")
    "func_4740": "OnQuest_b8q01_Start",                     # SetVariable("b8q01", 1) + diaries
    "func_4752": "Set_oob8Aglaja1",                         # SetVariable("oob8Aglaja1", 1)
    "func_4758": "OnQuest_b8q01_Complete",                  # diary + Trigger("quest_b8_01", "completed")
    "func_4768": "Set_oob8Aglaja2",                         # SetVariable("oob8Aglaja2", 1)
    "func_4774": "Set_oob11Aglaja1",                        # SetVariable("oob11Aglaja1", 1)
    "func_4780": "Set_oob11Aglaja2",                        # SetVariable("oob11Aglaja2", 1)  -- HD swap
    "func_4786": "Set_oob9Aglaja1",                         # SetVariable("oob9Aglaja1", 1)
    "func_4792": "Set_oob9Aglaja2",                         # SetVariable("oob9Aglaja2", 1)
    "func_4798": "Set_map_chertez_state_atleast_1",         # if state<=1: SetVariable state=1 + force=1
    "func_4815": "Set_map_chertez_state_atleast_2",         # if state<=2: SetVariable state=2 + force=1
    "func_4832": "ShowChertezMapToActor",                   # GetMap; CreateLocatorMapEntry("pt_map_aglaja"); actor.ShowMap

    # --- Diary entry creators (id, parent, title-msg, body-msg) ---
    "func_5126": "AddDiary_259_FirstMeeting",               # CreateDiaryEntry(_, 259, 1, 521031)
    "func_5139": "AddDiary_261_PanaceaWorks",               # 261, 1, 521033
    "func_5152": "AddDiary_280_PanaceaTestTitle",           # 280, 2, 521363
    "func_5165": "AddDiary_281_PanaceaTestDetails",         # 281, 2, 521364
    "func_5178": "AddDiary_283_PanaceaTestComplete",        # 283, 2, 521366
    "func_5191": "AddDiary_284_WhoseBloodTitle",            # 284, 1, 521455
    "func_5204": "AddDiary_285_WhoseBloodCheckMurder",      # 285, 1, 521456
    "func_5217": "AddDiary_292_UdurgRealization",           # 292, 1, 521463
}

# ----------------------------------------------------------------------------
# Variable renames, scoped per function (after func is renamed via FUNCS).
# Only variables whose meaning was visible in context are renamed.
# Keys are the (post-rename) function names; values map old → new in that body.
# ----------------------------------------------------------------------------
VARS: dict[str, dict[str, str]] = {
    "PerformUse": {                  # void PerformUse(object actor)
        "var_54_object": "actor",
        "var_56_int":    "iMeeting",
        "var_286_bool":  "bNight8",
        "var_357_bool":  "bNight12",
        "var_415_bool":  "bDay7",
        "var_583_bool":  "bDay8",
        "var_703_bool":  "bDay9",
        "var_800_bool":  "bDay11",
    },
    "ContinueIdle": {                # body just returns true
        "var_74_bool": "result",
    },
    "IsLoaded": {
        "var_36_bool": "bLoaded",
        "var_38_bool": "tmp",
    },
    "IsPlayerNear": {                # 2005 contract: bool IsPlayerNear()
        "var_44_bool":   "result",
        "var_47_object": "player",
        "var_51_float":  "distSqr",
        "var_52_object": "playerCopy",
        "var_48_bool":   "bCanSee",
    },
    "IsLSH": {
        "var_113_bool": "result",
    },
    "GetDay": {
        "var_186_int":   "iDay",
        "var_188_float": "fTime",
    },
    "GetGameTime": {
        "var_59_float": "fTime",
        "var_61_float": "tmp",
    },
    "IsDay": {
        "var_415_bool": "result",
        "var_416_int":  "iDay",
        "var_417_int":  "today",
    },
    "IsNight": {
        "var_286_bool":  "result",
        "var_287_int":   "iDay",
        "var_291_float": "fTime",
        "var_298_int":   "iTime",
        "var_293_int":   "iHour",
    },
    "RestoreDirection": {
        "var_0_object":  "vInitDir",
        "var_113_float": "dirX",
        "var_114_float": "dirZ",
    },
    "InitSpeechTimer": {
        "var_888_float": "fWaitTime",
    },
    "GetSelfNPCDescriptionID": {"var_119_int": "id"},
    "GetSelfNPCNameID":        {"var_118_int": "id"},
    "GetSelfPhotoPath":        {"var_120_string": "path"},
    "GetSelfPhoto2Path":       {"var_121_string": "path"},
    "GetPlayerNameIDByBranch": {
        "var_122_int": "id",
        "var_124_int": "branchID",
    },
    "self": {
        "var_133_object": "out",
        "var_135_object": "tmp",
    },
    "RotateToPlayer": {
        "var_61_bool":   "result",
        "var_63_object": "player",
        "var_66_bool":   "rotated",
        "var_67_object": "playerCopy",
    },
    "RotateToActor": {
        "var_40_bool":     "result",
        "var_41_object":   "actor",
        "var_43_cvector":  "pos",
        "var_44_bool":     "rotated",
        "var_45_cvector":  "posCopy",
    },
    "RotateToPosition": {
        "var_44_bool":    "result",
        "var_45_cvector": "target",
        "var_49_cvector": "selfPos",
        "var_50_cvector": "delta",
        "var_52_float":   "dx",
        "var_53_float":   "dz",
    },
    "GetActorDistanceSqr": {
        "var_51_float":   "distSqr",
        "var_52_object":  "actor",
        "var_56_cvector": "selfPos",
        "var_57_cvector": "actorPos",
    },
    "GetVariable_int": {
        "var_451_int":    "result",
        "var_452_string": "key",
        "var_454_int":    "tmp",
    },
    "GetWorldMap": {
        "var_48_object": "out",
        "var_51_object": "scene",
        "var_52_object": "mapObj",
    },
    "GetDiaryRoot": {
        "var_60_object": "out",
        "var_62_object": "root",
    },
    "AttachDiaryEntryToParent": {
        "var_51_bool":   "result",
        "var_52_object": "entry",
        "var_53_int":    "parentID",
        "var_60_object": "diaryRoot",
        "var_57_object": "rootCopy",
        "var_58_object": "parent",
        "var_59_int":    "category",
    },
    "AddBlankActorToScene": {
        "var_165_object": "actor",
        "var_166_string": "name",
        "var_169_object": "scene",
        "var_170_object": "newActor",
    },
    "SetDoorLocked": {
        "var_87_string": "doorName",
        "var_88_bool":   "locked",
        "var_90_object": "door",
    },
    "TriggerNamedActor": {
        "var_93_bool":   "result",
        "var_94_string": "actorName",
        "var_95_string": "event",
        "var_97_object": "actor",
    },
    "HasInventoryItem": {
        "var_496_bool":   "result",
        "var_497_object": "actor",
        "var_498_string": "itemName",
        "var_501_int":    "itemID",
        "var_502_bool":   "has",
    },
    "ActorHasBurahSerum": {
        "var_494_bool":   "result",
        "var_495_object": "actor",
        "var_496_bool":   "has",
        "var_497_object": "actorCopy",
    },
    "IsObjectDiseasePropertyZero": {
        "var_540_bool":   "result",
        "var_541_object": "obj",
        "var_543_float":  "disease",
    },
    "IsActor_NotDiseased": {
        "var_538_bool":   "result",
        "var_539_object": "actor",
        "var_540_bool":   "ok",
        "var_541_object": "actorCopy",
    },
    "PlayHeadAnimation": {
        "var_259_string": "mood",
        "var_263_bool":   "hasAnim",
        "var_264_float":  "tStart",
        "var_265_float":  "tEnd",
    },
    "PlayHeadAnimation_LSH": {
        "var_237_string": "anim",
        "var_238_bool":   "loop",
        "var_244_bool":   "hasAnim",
        "var_245_float":  "tStart",
        "var_246_float":  "tEnd",
    },
    "PlaySpeechIfExists": {
        "var_165_bool":   "result",
        "var_166_string": "speechKey",
        "var_168_bool":   "hasSpeech",
        "var_169_bool":   "isLSH",
    },
    "StopLSHSpeechIfActive": {
        "var_39_bool": "isLSH",
    },
    "Normalize": {
        "var_97_cvector":  "out",
        "var_98_cvector":  "v",
        "var_101_float":   "len",
    },

    # quest checkers — each follows same pattern: get var, compare, return bool
    "IsB7q01_State6":              {"var_449_bool": "result", "var_451_int": "state"},
    "IsB7q01_State8":              {"var_520_bool": "result", "var_522_int": "state"},
    "IsB7q01_DialogCompleted":     {"var_482_bool": "result", "var_484_int": "state"},
    "IsB7q03_State2":              {"var_532_bool": "result", "var_534_int": "state"},
    "IsB7q03_DialogCompleted":     {"var_546_bool": "result", "var_548_int": "state"},
    "IsB7q03SerumWorks_Set":       {"var_554_bool": "result", "var_556_int": "state"},
    "IsB8q01_NotStarted":          {"var_651_bool": "result", "var_653_int": "state"},
    "IsB8q01_State7":              {"var_660_bool": "result", "var_662_int": "state"},
    "IsB8q03_ActiveButNotFinal": {
        "var_670_bool": "result",
        "var_672_bool": "step3",
        "var_673_bool": "step2",
        "var_674_int":  "state",
        "var_678_int":  "state2",
        "var_682_int":  "state3",
    },
    "IsB11q01_DialogCompleted":    {"var_177_bool": "result", "var_179_int": "state"},
    "IsB9q03BadInit_Set":          {"var_753_bool": "result", "var_755_int": "state"},
    "IsB9q03BonefiresCount4":      {"var_747_bool": "result", "var_749_int": "count"},
    "IsOob7Aglaja1_NotYet":        {"var_488_bool": "result", "var_490_int": "state"},
    "IsOob8Aglaja1_NotYet":        {"var_616_bool": "result", "var_618_int": "state"},
    "IsOob8Aglaja2_NotYet":        {"var_686_bool": "result", "var_688_int": "state"},
    "IsOob9Aglaja1_NotYet":        {"var_760_bool": "result", "var_762_int": "state"},
    "IsOob9Aglaja2_NotYet":        {"var_775_bool": "result", "var_777_int": "state"},
    "IsOob11Aglaja1_NotYet":       {"var_833_bool": "result", "var_835_int": "state"},
    "IsOob11Aglaja2_NotYet":       {"var_871_bool": "result", "var_873_int": "state"},

    # quest action helpers — mostly self-explanatory after rename
    "OnQuest_b7q01_AdvanceToStarshina": {
        "var_48_object": "worldMap",
        "var_45_object": "mapCopy",
        "var_59_float":  "fTime",
    },
    "OnQuest_b7q03_Start_Theater": {
        "var_143_object": "worldMap",
        "var_140_object": "mapCopy",
        "var_148_float":  "fTime",
        "var_165_object": "subActor",
        "var_173_bool":   "triggered",
    },
    "OnQuest_b7q01_Complete":   {"var_191_bool": "triggered"},
    "OnQuest_b7q03_Complete":   {"var_226_bool": "triggered"},
    "OnQuest_b8q01_Complete":   {"var_93_bool":  "triggered"},
    "ShowChertezMapToActor":    {
        "var_110_object": "actor",
        "var_114_object": "worldMap1",
        "var_111_object": "worldMap2",
        "var_134_object": "worldMap3",
    },
}


# ----------------------------------------------------------------------------
# Apply
# ----------------------------------------------------------------------------
def find_func_body(text: str, name: str) -> tuple[int, int] | None:
    pat = re.compile(r"^(?:void|int|bool|float|string|object|cvector)\s+"
                     + re.escape(name) + r"\s*\(", re.M)
    m = pat.search(text)
    if not m:
        return None
    brace = text.find("{", m.end())
    if brace < 0:
        return None
    depth = 0
    for i in range(brace, len(text)):
        if text[i] == "{": depth += 1
        elif text[i] == "}":
            depth -= 1
            if depth == 0:
                return (m.start(), i + 1)
    return (m.start(), len(text))


def main() -> None:
    text = HD_IN.read_text(encoding="utf-8", errors="replace")
    dialog = json.loads(DLG.read_text(encoding="utf-8"))

    # 1) Apply file-wide function renames.
    if FUNCS:
        pat = re.compile(r"\b(" + "|".join(re.escape(k) for k in FUNCS) + r")\b")
        text = pat.sub(lambda m: FUNCS[m.group(1)], text)

    # 2) Apply per-function var renames (scoped to each function's body).
    for fn_name, vmap in VARS.items():
        span = find_func_body(text, fn_name)
        if not span:
            print(f"warn: function {fn_name} not found after rename")
            continue
        start, end = span
        head, body, tail = text[:start], text[start:end], text[end:]
        if vmap:
            vpat = re.compile(r"\b(" + "|".join(re.escape(k) for k in vmap) + r")\b")
            body = vpat.sub(lambda m: vmap[m.group(1)], body)
        text = head + body + tail

    # 3) Inline-comment each SetMessage/AddReply with the Russian dialog text.
    def short(t: str, n: int = 70) -> str:
        t = t.replace("\n", " ").replace("\r", " ").strip()
        return t if len(t) <= n else t[: n - 1] + "…"

    def msg_repl(m: re.Match) -> str:
        msg_id = m.group("id")
        rest = m.group("rest")
        line = m.group(0)
        txt = dialog.get(msg_id)
        if not txt:
            return line
        return f"{line}  /* {short(txt, 90)} */"

    # SetMessage(NNN)
    text = re.sub(
        r"(?P<all>SetMessage\((?P<id>\d+)\)(?P<rest>))",
        msg_repl, text,
    )
    # AddReply(NNN, ...) — replace just on the literal-id call
    def reply_repl(m: re.Match) -> str:
        ids = m.group(0)
        first = m.group(1)
        txt = dialog.get(first)
        if not txt:
            return ids
        return f"{ids}  /* {short(txt, 90)} */"
    text = re.sub(r"AddReply\((\d+),[^)]*\)", reply_repl, text)
    # CreateDiaryEntry(_, _, _, NNN)
    def diary_repl(m: re.Match) -> str:
        msg_id = m.group(1)
        txt = dialog.get(msg_id)
        return m.group(0) + (f"  /* {short(txt, 90)} */" if txt else "")
    text = re.sub(
        r"@CreateDiaryEntry\([^,]+,[^,]+,[^,]+,\s*(\d+)\)",
        diary_repl, text,
    )

    HD_OUT.parent.mkdir(exist_ok=True)
    HD_OUT.write_text(text, encoding="utf-8")
    print(f"wrote {HD_OUT}")


if __name__ == "__main__":
    main()
