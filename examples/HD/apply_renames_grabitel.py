#!/usr/bin/env python3
"""
Analytical rename for HD/Scripts_c/grabitel.c.

Derived by reading:
  - HD: grabitel.c (3000 lines)
  - 2005: grabitel.sc (TDeath override),
          grabitel_base.sci (TGrabitel/TIdle/TCamp/TSearch + Filter/Handle helpers),
          grabitel_attack.sci (TAttackBase/TAlternateAttack/TMeleeAttack/TFollowAttackMelee),
          actor_std.sci (IsCommonClass, IsAccessible, IsPlayerActor, StdHandleHit*, ...),
          std.sci (PlayerModReputation, BroadcastBattle, ...),
          item_base.sci (GenerateGrabitelItems, AddOrgans, PutOrgan),
          pdamage_classes.sci (EgoistClass),
          death_base.sci/wanderer_base.sci/follow.sci/idle.sci/attack_melee.sci.

The HD file inlines all .sci library code, so most func_NNNN map to library
functions rather than to user-authored functions in grabitel.sc itself.
"""
import re
from pathlib import Path

HD_IN  = Path(__file__).resolve().parent / "Scripts_c/grabitel.c"
HD_OUT = Path(__file__).resolve().parent / "Scripts_c_renamed/grabitel.c"

# ---------------------------------------------------------------------------
# Function renames (file-wide).
# ---------------------------------------------------------------------------
FUNCS: dict[str, str] = {
    # --- Top-level body funcs for tasks (compiled per TaskCall target) ---
    "func_0":    "TAlternateAttack_init_body",    # knife throw: aattack_begin1/end1, grabitel_knife.xml, CalculateKnifeDirection
    "func_126":  "TMeleeAttack_init_body",        # TaskCall(1): set g_bAttackRet=false; super.init; PlayAnim("attack_off")
    "func_203":  "TAttackMeleeBase_init",         # super.init body — main attack loop (attack_begin/middle/end)
    "func_887":  "TAttackMeleeBase_FollowTarget", # called inside func_203 when target gets out of attack range
    "func_992":  "TFollowBase_init",              # follow path loop (used by TAttackMeleeBase)
    "func_1260": "TWanderBase_init",              # super.init() for TGrabitel — wander loop with FindShiftedPathTo
    "func_1402": "TIdleBase_init",                # TaskCall(4) body — idle animation loop
    "func_1555": "TSearch_init",                  # Sleep(1); m_bFollowing=true; super.init(...,200,2000,true,true); hunt anim
    "func_1635": "TFollowBase_init_search",       # super.init body for TSearch (different from func_992)
    "func_1488": "TCamp_init",                    # Sleep(c_iCampTime=5); return !bSuccess
    "func_1770": "TAttack_init",                  # if IsPlayer SendPlayerEnemy; super.init (TAttackBase)
    "func_1787": "TAttackBase_init",              # dispatch: distance-based TAlternateAttack vs TMeleeAttack
    "func_1824": "TDeath_init",                   # body of grabitel.sc TDeath::init: if player GenerateGrabitelItems; AddOrgans; super
    "func_1840": "TDeathDirBase_init",            # @SetDeathState; pick fdie/bdie based on direction
    "func_1865": "TDeathDirBase_PlayDeathAnim",   # picks fdie/bdie; LookAsync head; PlayAnimation

    # --- Common base contract methods ---
    "func_2986": "HandleDeath_global",            # OnDeath top-level: maybe rep change + TaskCall(8) TDeath
    "func_1156": "TGrabitel_CancelActivity",      # super.CancelActivity + @KillTimer(c_iUpdateWalkModeTimer=130)
    "func_1331": "TWanderBase_CancelActivity",    # super.CancelActivity body for TGrabitel
    "func_1338": "CancelActivityAndKP",           # from TGrabitel OnTimer; halts walking + stops group
    "func_1483": "TIdle_CancelActivity",          # @StopAnimation; @StopGroup0
    "func_1494": "TCamp_CancelActivity",          # @StopGroup0
    "func_1604": "TSearch_CancelActivity",        # if m_bFollowing super.CancelActivity else stop everything
    "func_1759": "TFollowBase_CancelActivity",    # the super.CancelActivity used by TSearch
    "func_3035": "OnDeath_global",                # top-level OnDeath callback invoked by tasks

    # --- TGrabitel maintask helpers / globals init ---
    "func_2812": "InitGlobals",                   # g_Enemies = CreateObjectSet()
    "func_2641": "CreateObjectSet",               # @CreateObjectSet(out)

    # --- Filters / Handlers (grabitel_base.sci) ---
    "func_2819": "IsEnemy",                       # IsAccessible -> g_Enemies.in -> player rep / IsCommonClass
    "func_2864": "FilterHearNormal",              # wraps IsEnemy
    "func_2871": "HandleHearNormal",              # TaskCall(7) TAttack; if returned true TaskCall(6) TSearch
    "func_2888": "FilterSeeNormal",               # wraps IsEnemy
    "func_2895": "HandleSeeNormal",               # same as HandleHearNormal pattern
    "func_2912": "HandleAttackBase",              # g_Enemies->in check; if not, add
    "func_2925": "HandleAttack",                  # HandleAttackBase + IsAccessible + TaskCall(7)TAttack + TaskCall(6)TSearch
    "func_2953": "FilterPlayerDamage",            # EgoistClass + dist + CanSee logic
    "func_2647": "PlayerModReputation",           # @SendWorldWndMessage(8 or 9); SetProperty rep
    "func_2682": "PlayerRumbleAndMsg",            # @RumblePlay if neg + @SendWorldWndMessage(15) — disease/rep visual
    "func_2699": "SendWorldWndDeltaMsg",          # @SendWorldWndMessage(16) with delta — quest-related?
    "func_2718": "BroadcastBattle",               # GetScene + BroadcastMessage("battle", self, scene)
    "func_2709": "PlayAttackMusicIfPlayer",       # IsPlayerActor + PlayGlobalMusic("attack")

    # --- Misc actor/util helpers ---
    "func_2017": "IsPlayerActor",                 # @IsPlayerActor(actor, out)
    "func_2022": "HasProperty",                   # actor.FuncExist+HasProperty pattern
    "func_2034": "ModifyClampedProperty",         # GetProp + clamp(prop + mod, min, max) + SetProp
    "func_2570": "self",                          # @self(out)
    "func_2576": "Normalize",                     # sqrt + divide
    "func_2586": "minf",                          # if a<b return a else b (2005 std.sci minf)
    "func_2593": "QuadraticDeterminant",          # b*b - 4*a*c
    "func_2600": "SolveQuadraticMinPos",          # from grabitel_attack.sci CalculateKnifeDirection helper
    "func_2617": "clampf",                        # if v<min return min, if v>max return max, else v
    "func_2628": "betweenf",                      # min<=v<=max
    "func_2636": "RandomBool",                    # @irand(0,max) < n
    "func_2729": "IsGodMode",                     # @GetVariable("god_mode")
    "func_2742": "GetIdleAnimationCount",         # for(;;) HasAnimation(c+i)
    "func_2735": "GetIdleAnimation",              # "idle" + N
    "func_2759": "CalculateKnifeDirection",       # CalculateKnifeDirection from grabitel_attack.sci
    "func_2483": "IsCommonClass",                 # tests string against woman/worker/butcher/... list
    "func_2225": "IsAccessible2",                 # internal of IsAccessible: scene check + dead check
    "func_2201": "IsAccessible",                  # IsAccessible2 + noaccess check
    "func_2165": "IsAccessible2_inline",          # same logic for slightly different call site
    "func_2160": "IsDead",                        # actor.IsDead(out)
    "func_2129": "IsZeroHealth",                  # GetProperty("health") <= 0
    "func_2009": "GetActorDistanceSqr",           # delta squared
    "func_2002": "GetActorDelta",                 # actor.GetPosition - self.GetPosition
    "func_1597": "ContinueFollow",                # IsAccessibleOrDead-ish for TSearch
    "func_1132": "IsAccessibleVariant",           # IsAccessible variant used by other followers
    "func_2415": "IsLoaded",                      # @IsLoaded(out)
    "func_2420": "LookAtActorHead",               # LookAsync(actor,"head",cvec)
    "func_2404": "RotateToActor",                 # GetPosition delta + RotateAsync(x,z)
    "func_2278": "PlayHitReaction",               # fhit/bhit + FadeSecondaryAnimation("hit_react",...)
    "func_2322": "OnHitImpl",                     # body of OnHit: GetGeometryLocator + hit_react
    "func_2390": "OnHit2Impl",                    # AddActorByType("blood_dir", ...) + PlayHitReaction
    "func_2259": "RotateToPosition",              # GetPosition; delta; Rotate
    "func_2269": "RotateToActorVariant",          # actor.GetPosition -> RotateToPosition
    "func_2442": "PlayCombatSound",               # IsExisting3DSound + irand + PlayGlobalSound
    "func_2056": "ApplyDamage",                   # complex: armor + health calc + SetProp + rep msg
    "func_1956": "PlayDeathFromNullActor",        # null actor death: fdie + SetDeathState

    # --- Attack-loop helpers (TAttackMeleeBase internals) ---
    "func_432":  "PrepareAttackParams",           # count attack_begin1+/sounds/bjump offset
    "func_467":  "ProcessAttackHit",              # GetVictim + ReportAttack + ApplyDamage + ReportHit
    "func_506":  "PlayAttackSequence",            # attack_begin/middle/end animation sequence + hits
    "func_643":  "SetTrueByRef",                  # var_3_int = true (used as flag set helper)
    "func_645":  "MaybePlayAttackStay",           # @rand + Sleep / WaitForAnimEnd
    "func_672":  "WaitForTargetInRange",          # IsAnimationPlaying + GetPFPosition + PlayAttackSequence
    "func_715":  "IsTargetInAttackRange",         # GetAttackDistance + dist check
    "func_743":  "CheckAttackOpportunity",        # IsTargetInAttackRange + bjump check
    "func_759":  "BackJumpIfFarther",             # GetActorDelta + FindDirLength + bjump anim
    "func_804":  "IsAttacking",                   # actor->IsAttacking if FuncExist
    "func_815":  "SpeakAttack",                   # @Speak("attack"+N) random
    "func_847":  "PlayAttackMusicIfPlayer_var",   # alias of func_2709 (compiler dup)
    "func_852":  "PlayAttackStaySound",           # func_2442("attack_stay")
    "func_857":  "GetTrueFlag",                   # returns true
    "func_859":  "GetSpeakAttackCount",           # returns 1
    "func_861":  "GetSpeakAttackProbability",     # returns 0.5
    "func_950":  "ResetSeenAndKillTimer1",        # KillTimer(1) + UnlookAsync("head") if was seen

    # --- TGrabitel timer / OnSee ---
    "func_154":  "GetDamageAmount",               # returns 0.15
    "func_157":  "GetDamageType",                 # returns 0 (c_iDamageTypePhysical)
    "func_160":  "GetHitType",                    # returns 1 (c_iHitTypePhysical2)
    "func_162":  "MaybeKillTarget",               # if dmg > 0 && IsZeroHealth(target) StopAttack
    "func_1094": "TAttackMeleeBase_OnTimerBody",  # timer 0 -> ContinueFollow check + Stop
    "func_1116": "StopAttackTimer",               # KillTimer(0) + Stop
    "func_1132": "ContinueFollowWrapper",         # alias-like wrapper
    "func_1139": "GetWalkAnimName",               # returns "walk"
    "func_1141": "GetRunAnimName",                # returns "run"
    "func_1319": "GetCameraFarDistance",          # @GetCameraFarDistance(out)
    "func_1345": "GetFollowPathFlag",             # returns false
    "func_1347": "FindShiftedPathTo",             # @FindShiftedPathTo wrapper
    "func_1381": "TFollowAttackMelee_init",       # called from task_3 OnPlayerDamage when filter passes
    "func_1481": "ContinueIdle",                  # returns true
    "func_1534": "TIdle_continueAfterDamage",     # called from task_4 (TIdle) OnPlayerDamage
    "func_1766": "GetWalkAnimName_search",        # returns "walk" (search variant)
    "func_1768": "GetRunAnimName_search",         # returns "run"

    # --- TDeath body & items (item_base.sci) ---
    "func_3041": "GetBranch",                     # @GetVariable("branch", out)
    "func_3047": "TDeathDirUsable_OnUse",         # WorkWithCorpse if Burah branch else Barter
    "func_3060": "GenerateMoney",                 # GetInvItemByName("Money") + AddItem(random N)
    "func_3091": "PutOrgan",                      # CreateInvItem + SetItemName + SetProperty("Organ", 1)
    "func_3108": "AddOrgans",                     # GetBranch != Burah(1) -> skip; else liver/kidney/heart/blood
    "func_3132": "GenerateGrabitelItems",         # ClearSubContainer + GenerateMoney + Knife/lockpick/grabitel_mark
    "func_3162": "GetInvItemIDByName",            # @GetInvItemByName(out, name)

    # --- TGrabitel maintask OnTimer (shadow detection inside) ---
    "func_1239": "TGrabitel_OnPlayerDamage_continue",  # called from task_3 OnPlayerDamage when filter passes
}

# ---------------------------------------------------------------------------
# Per-function variable renames (scoped to body of named function).
# Only the parameters and locals whose meaning is clear from 2005 sources.
# ---------------------------------------------------------------------------
VARS: dict[str, dict[str, str]] = {
    # actor checks
    "IsPlayerActor": {
        "var_18_bool":   "result",
        "var_19_object": "actor",
        "var_21_bool":   "bPlayer",
    },
    "IsAccessible": {
        "var_27_bool":   "result",
        "var_28_object": "actor",
        "var_32_object": "actorCopy",
        "var_31_bool":   "bAccessible2",
        "var_49_bool":   "bHasNoaccess",
        "var_50_object": "actorCopy2",
        "var_30_int":    "noaccessVal",
    },
    "IsAccessible2": {
        "var_21_bool":   "result",
        "var_22_object": "actor",
        "var_26_object": "selfScene",
        "var_27_object": "actorScene",
    },
    "HasProperty": {
        "var_41_bool":   "result",
        "var_42_object": "actor",
        "var_43_string": "propName",
        "var_45_bool":   "bHas",
    },
    "IsDead": {
        "var_42_bool":   "result",
        "var_43_object": "actor",
        "var_45_bool":   "bDead",
    },
    "IsZeroHealth": {
        "var_616_bool":  "result",
        "var_617_object":"actor",
        "var_621_object":"actorCopy",
        "var_619_float": "health",
    },
    "IsCommonClass": {
        "var_75_bool":   "result",
        "var_76_string": "strClass",
    },

    # geometry/math
    "Normalize": {
        "var_48_cvector": "out",
        "var_49_cvector": "v",
        "var_57_float":   "len",
    },
    "QuadraticDeterminant": {
        "var_172_float": "result",
        "var_173_float": "a",
        "var_174_float": "b",
        "var_175_float": "c",
    },
    "SolveQuadraticMinPos": {
        "var_186_float": "result",
        "var_187_float": "a",
        "var_188_float": "b",
        "var_189_float": "c",
        "var_190_float": "d",
    },
    "clampf": {
        "var_51_float": "result",
        "var_52_float": "v",
        "var_53_float": "fMin",
        "var_54_float": "fMax",
    },
    "betweenf": {
        "var_86_bool":   "result",
        "var_87_float":  "v",
        "var_88_float":  "fMin",
        "var_89_float":  "fMax",
    },
    "minf": {
        "var_583_float": "result",
        "var_584_float": "a",
        "var_585_float": "b",
    },
    "RandomBool": {
        "var_93_bool":   "result",
        "var_94_int":    "n",
        "var_95_int":    "max",
        "var_97_int":    "roll",
    },
    "GetActorDistanceSqr": {
        "var_78_float":  "distSqr",
        "var_79_object": "actor",
        "var_83_cvector":"selfPos",
        "var_84_cvector":"actorPos",
    },
    "GetActorDelta": {
        "var_50_cvector":"out",
        "var_51_object": "actor",
        "var_54_cvector":"selfPos",
        "var_55_cvector":"actorPos",
    },
    "RotateToPosition": {
        "var_118_bool":   "result",
        "var_119_cvector":"target",
        "var_123_cvector":"selfPos",
        "var_124_cvector":"delta",
        "var_125_bool":   "rotated",
        "var_126_float":  "dx",
        "var_127_float":  "dz",
    },
    "RotateToActor": {
        "var_383_object": "actor",
        "var_387_cvector":"actorPos",
        "var_388_cvector":"selfPos",
        "var_389_cvector":"delta",
        "var_390_float":  "dx",
        "var_391_float":  "dz",
    },
    "RotateToActorVariant": {
        "var_114_bool":   "result",
        "var_115_object": "actor",
        "var_117_cvector":"pos",
        "var_118_bool":   "rotated",
        "var_119_cvector":"posCopy",
    },

    # filters & enemies
    "IsEnemy": {
        "var_19_bool":   "result",
        "var_20_object": "actor",
        "var_22_object": "actorCopy",
        "var_24_bool":   "bInEnemySet",
        "var_25_float":  "fReputation",
        "var_26_string": "strClass",
    },
    "FilterPlayerDamage": {
        "var_19_bool":   "result",
        "var_20_object": "player",
        "var_21_object": "actor",
        "var_25_float":  "fActorDistSqr",
        "var_24_bool":   "bCanSee",
    },
    "FilterSeeNormal": {
        "var_17_bool":   "result",
        "var_18_object": "actor",
        "var_19_bool":   "bIsEnemy",
    },
    "FilterHearNormal": {
        "var_17_bool":   "result",
        "var_18_object": "actor",
        "var_19_bool":   "bIsEnemy",
    },
    "HandleAttackBase": {
        "var_20_object": "actor",
    },
    "HandleAttack": {
        "var_19_object": "actor",
        "var_20_object": "actorCopy",
        "var_27_bool":   "bAccessible",
        "var_28_object": "actorCopy2",
        "var_62_bool":   "bAttackedOk",
        "var_63_object": "actorCopy3",
    },
    "HandleSeeNormal": {
        "var_114_object": "actor",
        "var_115_bool":   "bAttackOk",
        "var_116_object": "actorCopy",
    },
    "HandleHearNormal": {
        "var_114_object": "actor",
        "var_115_bool":   "bAttackOk",
        "var_116_object": "actorCopy",
    },

    # util
    "self": {
        "var_68_object": "out",
        "var_70_object": "tmp",
    },
    "CreateObjectSet": {
        "var_17_object": "out",
        "var_19_object": "set",
    },
    "InitGlobals": {
        "var_17_object": "newSet",
    },
    "GetBranch": {
        "var_106_int":   "branch",
        "var_108_int":   "tmp",
    },
    "GetInvItemIDByName": {
        "var_81_int":    "outID",
        "var_82_string": "itemName",
        "var_84_int":    "tmp",
    },
    "PutOrgan": {
        "var_112_string":"itemName",
        "var_116_object":"item",
        "var_117_int":   "itemID",
        "var_118_bool":  "bOk",
    },
    "AddOrgans": {
        "var_106_int":   "branch",
    },
    "GenerateMoney": {
        "var_69_int":    "iMin",
        "var_70_int":    "iMax",
        "var_73_int":    "n",
        "var_81_int":    "moneyID",
        "var_74_bool":   "bOk",
    },
    "GenerateGrabitelItems": {
        "var_67_bool":   "bOk",
        "var_102_int":   "markID",
    },

    # damage / hit
    "GetDamageAmount":   {"var_542_float": "result"},
    "GetDamageType":     {"var_549_int":   "result"},
    "GetHitType":        {"var_610_int":   "result"},
    "MaybeKillTarget": {
        "var_611_object":"target",
        "var_612_float": "fDamage",
    },

    # speak / animation
    "GetWalkAnimName":          {"var_349_string": "out"},
    "GetRunAnimName":           {"var_350_string": "out"},
    "GetWalkAnimName_search":   {"var_766_string": "out"},
    "GetRunAnimName_search":    {"var_767_string": "out"},
    "GetSpeakAttackCount":      {"var_527_int":    "result"},
    "GetSpeakAttackProbability":{"var_522_float":  "result"},
    "GetTrueFlag":              {"var_656_bool":   "result"},
    "ContinueIdle":             {"var_92_bool":    "result"},

    # idle anims
    "GetIdleAnimationCount": {
        "var_67_int":    "result",
        "var_70_int":    "n",
        "var_71_bool":   "hasAnim",
    },
    "GetIdleAnimation": {
        "var_73_string": "out",
        "var_74_int":    "n",
        "var_76_string": "tmp",
    },

    # TGrabitel-internal helpers
    "TGrabitel_CancelActivity": {
        "var_18_bool":   "tmp_for_supercancel",
        "var_59_object": "tmp_for_supercancel2",
    },
    "TWanderBase_CancelActivity": {
        "var_0_bool":    "out_a",
        "var_1_object":  "out_b",
    },
    "CancelActivityAndKP": {
        "var_0_bool":    "out_a",
        "var_1_object":  "out_b",
    },
    "TIdle_CancelActivity":  {},
    "TCamp_CancelActivity":  {},
    "TCamp_init": {
        "var_30_bool":   "result",
        "var_32_bool":   "bSuccess",
    },
    "TSearch_init": {
        "var_2_int":     "m_bFollowing",     # task_2 var slot 2 = m_bFollowing (HD encodes class members in stack)
        "var_703_object":"actor",
        "var_708_bool":  "bSuccess",
        "var_711_bool":  "bInitOk",
        "var_712_object":"actorCopy",
    },
    "TSearch_CancelActivity": {},
    "TAttackBase_init": {
        "var_71_bool":   "result",
        "var_72_object": "actor",
        "var_76_object": "actorCopy",
        "var_75_bool":   "bAccessible",
        "var_78_float":  "fDist2",
        "var_79_object": "actorCopy2",
        "var_74_float":  "fDist2Copy",
        "var_86_bool":   "bInRange",
        "var_87_float":  "fDist2Copy2",
    },
    "TAttack_init": {
        "var_62_bool":   "result",
        "var_63_object": "actor",
        "var_64_bool":   "bPlayer",
        "var_65_object": "actorCopy",
        "var_68_object": "selfObj",
        "var_71_bool":   "bSuperOk",
        "var_72_object": "actorCopy2",
    },
    "TAlternateAttack_init_body": {
        "var_0_bool":    "actor_state",   # HD pseudo-slot
        "var_92_bool":   "result",
        "var_93_object": "actor",
        "var_109_object":"actorForMusic",
        "var_102_object":"scene",
        "var_103_cvector":"vPosition",
        "var_104_bool":  "bFound",
        "var_105_object":"knife",
        "var_106_cvector":"vTargetPos",
        "var_107_float": "fEyesHeight",
        "var_108_cvector":"vDirection",
        "var_147_object":"selfObj",
    },
    "TMeleeAttack_init_body": {
        "var_208_bool":  "result",
        "var_209_object":"actor",
    },
    "TAttackMeleeBase_init": {
        "var_0_bool":    "actor",
        "var_217_object":"actorParam",
        "var_218_bool":  "bRequireAttack",
        "var_219_float": "fAttackDist",
        "var_231_float": "fActorAttackDist",
        "var_234_bool":  "bPlayer",
        "var_3_int":     "g_bAttackRet",  # global slot
        "var_5_float":   "m_bStopAttack",
    },
    "TFollowBase_init": {
        "var_0_bool":    "result_marker",
        "var_309_bool":  "bOk",
        "var_310_object":"actor",
        "var_311_float": "fStartDist",
        "var_312_float": "fLooseDist",
        "var_313_bool":  "bWalkMode",
        "var_314_bool":  "bRunMode",
    },
    "TFollowBase_init_search": {
        "var_711_bool":  "bOk",
        "var_712_object":"actor",
        "var_713_float": "fStartDist",
        "var_714_float": "fLooseDist",
        "var_715_bool":  "bWalkMode",
        "var_716_bool":  "bRunMode",
    },
    "TWanderBase_init": {
        "var_0_bool":    "tmp",
        "var_1_object":  "actor",
    },
    "TIdleBase_init": {},
    "ContinueFollow": {
        "var_19_bool":   "result",
        "var_20_object": "actor",
        "var_22_object": "actorCopy",
        "var_21_bool":   "bAccessibleOrDead",
    },
    "TDeath_init": {
        "var_60_object": "actor",
        "var_62_bool":   "bPlayer",
        "var_126_object":"actorCopy",
    },
    "TDeathDirBase_init": {
        "var_126_object":"killer",
        "var_127_object":"killerCopy",
    },
    "TDeathDirBase_PlayDeathAnim": {
        "var_127_object":"killer",
        "var_138_cvector":"killerPos",
        "var_139_cvector":"selfPos",
        "var_140_cvector":"selfDir",
        "var_141_cvector":"delta",
        "var_142_string": "animName",
        "var_143_object": "ownerObj",
        "var_146_float":  "fEyesHeight",
        "var_147_cvector":"lookOffset",
    },
    "PlayDeathFromNullActor": {
        "var_149_string":"animName",
        "var_150_string":"soundKey",
    },
    "HandleDeath_global": {
        "var_17_object": "actor",
        "var_18_bool":   "bIsPlayer",
        "var_19_object": "actorCopy",
        "var_22_bool":   "bRepOk",
        "var_23_object": "actorCopy2",
    },
    "OnDeath_global": {},
    "PlayerModReputation": {
        "var_22_bool":   "result",
        "var_23_object": "player",
        "var_24_float":  "fMod",
        "var_29_float":  "fModCopy",
        "var_33_bool":   "bOk",
        "var_34_object": "playerCopy",
        "var_36_float":  "fModCopy2",
    },
    "BroadcastBattle": {
        "var_132_object":"scene",
        "var_134_object":"selfObj",
    },
    "PlayAttackMusicIfPlayer": {
        "var_109_object":"actor",
        "var_111_bool":  "bPlayer",
    },

    # damage
    "ApplyDamage": {
        "var_545_float": "fOutDelta",
        "var_546_object":"actor",
        "var_547_float": "fDamage",
        "var_548_int":   "iDamageType",
        "var_558_int":   "iArmor",
        "var_560_int":   "iClassArmor",
        "var_561_float": "fReduction",
        "var_562_float": "fHealth",
        "var_563_float": "fActualDamage",
        "var_573_string":"strDmgName",
        "var_581_string":"strProp",
    },
    "ProcessAttackHit": {
        "var_0_bool":    "actor",
        "var_531_float": "fHitDist",
        "var_532_int":   "iAttackType",
        "var_536_object":"victim",
        "var_537_float": "fDamageAmount",
        "var_538_float": "fActualDamage",
        "var_542_float": "fDamageOut",
        "var_544_int":   "iDamageType",
        "var_547_float": "fDamageRecv",
        "var_548_int":   "iDamageTypeRecv",
        "var_549_int":   "iArmor",
        "var_551_int":   "iDamageTypeFinal",
        "var_610_int":   "iHitType",
        "var_612_float": "fOut",
    },

    # hit reaction
    "OnHitImpl": {
        "var_20_object": "actor",
        "var_21_int":    "iHitType",
        "var_22_float":  "fDamage",
    },
    "OnHit2Impl": {
        "var_22_object": "actor",   # actually fDamage but HD type-coerced
        "var_25_cvector":"vPos",
        "var_26_cvector":"vDir",
        "var_24_float":  "fDamage",
    },
    "PlayHitReaction": {
        "var_33_object": "attacker",
        "var_43_cvector":"attackerPos",
        "var_44_cvector":"selfPos",
        "var_45_cvector":"selfDir",
        "var_46_cvector":"delta",
        "var_47_string": "strHitAnim",
    },
    "LookAtActorHead": {
        "var_299_object":"actor",
        "var_302_float": "fEyesHeight",
        "var_303_cvector":"vOffset",
    },

    # attack loop
    "PrepareAttackParams": {
        "var_1_object":  "nAttacks",      # HD type-coerced int via object slot
        "var_2_int":     "nAttackSounds",
        "var_4_bool":    "fBjumpZ",       # HD type-coerced float via bool slot
    },
    "IsAttacking": {
        "var_0_bool":    "actor",
        "var_400_bool":  "result",
        "var_402_bool":  "bAttacking",
    },
    "SpeakAttack": {
        "var_2_int":     "iNumAttackSounds",
        "var_5_float":   "fLastTime",
        "var_516_int":   "iWhich",
        "var_515_float": "fRoll",
        "var_522_float": "fProb",
        "var_527_int":   "iIncr",
    },
    "PlayAttackSequence": {
        "var_0_bool":    "actor",
        "var_1_object":  "nAttacks",
        "var_504_int":   "iWhich",
        "var_507_string":"strAnim",
    },
    "WaitForTargetInRange": {
        "var_0_bool":    "target",
        "var_437_bool":  "bGotInRange",
        "var_438_float": "fAttackDist",
    },
    "IsTargetInAttackRange": {
        "var_0_bool":    "target",
        "var_452_bool":  "result",
        "var_462_float": "fAttackDist",
    },
    "BackJumpIfFarther": {
        "var_0_bool":    "target",
        "var_4_bool":    "fBjumpDist",
        "var_469_bool":  "result",
    },

    # follow path / wander
    "TAttackMeleeBase_FollowTarget": {
        "var_2_int":     "iOut",
        "var_282_bool":  "bOk",
        "var_283_object":"target",
        "var_284_float": "fApproachDist",
        "var_285_float": "fMaxDist",
        "var_286_bool":  "bWalkMode",
        "var_287_bool":  "bRunMode",
        "var_293_bool":  "bCanSee",
        "var_295_object":"targetForMusic",
    },
    "FindShiftedPathTo": {
        "var_41_object": "path",
        "var_42_cvector":"target",
        "var_44_object": "tmp",
    },
    "TAttackMeleeBase_OnTimerBody": {
        "var_0_bool":    "outFlag",
        "var_1_object":  "actor",
        "var_24_int":    "timerID",
        "var_27_bool":   "bAccessible",
    },
    "ResetSeenAndKillTimer1": {
        "var_2_int":     "m_bSeenPlayer",
        "var_16_bool":   "outBool",
    },

    # death body OnDeath_global support
    "TDeath_init_globals_marker_unused": {},
}


# ---------------------------------------------------------------------------
# Apply
# ---------------------------------------------------------------------------
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

    # 1) Apply file-wide function renames.
    if FUNCS:
        pat = re.compile(r"\b(" + "|".join(re.escape(k) for k in FUNCS) + r")\b")
        text = pat.sub(lambda m: FUNCS[m.group(1)], text)

    # 2) Per-function var renames.
    for fn_name, vmap in VARS.items():
        if not vmap:
            continue
        span = find_func_body(text, fn_name)
        if not span:
            print(f"warn: {fn_name} not found")
            continue
        start, end = span
        head, body, tail = text[:start], text[start:end], text[end:]
        vpat = re.compile(r"\b(" + "|".join(re.escape(k) for k in vmap) + r")\b")
        body = vpat.sub(lambda m: vmap[m.group(1)], body)
        text = head + body + tail

    HD_OUT.parent.mkdir(exist_ok=True)
    HD_OUT.write_text(text, encoding="utf-8")
    print(f"wrote {HD_OUT}")


if __name__ == "__main__":
    main()
