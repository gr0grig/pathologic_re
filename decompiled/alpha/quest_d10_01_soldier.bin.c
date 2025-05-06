task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector)
{
	StopGroup0(); // 0x3 Func
	return 0; // 0x5 Return
}


task_1_event_0(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_cvector)
{
	var_7_bool = 0; var_8_bool = 0; // 0x1e PushV
	IsOverrideActive(var_8_bool); // 0x1f Func
	var_9_bool = var_8_bool == 0; // 0x21 Not
	if(var_9_bool == 0) goto Label_37; // 0x22 JumpB
	WorkWithCorpse(var_6_cvector); // 0x23 Func
	
Label_37:
	return 2; // 0x25 Return
}


task_1_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_cvector, var_9_cvector)
{
	return 0; // 0x94 Return
}


task_1_event_16(var_0_object, var_1_string, var_2_object, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector)
{
	return 0; // 0x96 Return
}


task_1_event_41(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_cvector)
{
	return 0; // 0x98 Return
}


task_2_event_41(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_cvector)
{
	func_177(); // 0xbb Call
	var_8_object = Obj(); // 0xbd PushV
	var_8_object = var_6_cvector; // 0xbe Mov
	func_1186(); // 0xbf Call
	return 0; // 0xc1 Return
}


task_2_event_3(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_cvector)
{
	var_7_bool = var_6_cvector == var_0_object; // 0xc3 Eq
	if(var_7_bool == 0) goto Label_202; // 0xc4 JumpB
	var_8_int = 100; // 0xc5 PushI
	KillTimer(var_8_int); // 0xc6 Func
	Face(var_0_object); // 0xc8 Func
	
Label_202:
	return 0; // 0xca Return
}


task_2_event_4(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_cvector)
{
	var_7_bool = var_6_cvector == var_0_object; // 0xcc Eq
	if(var_7_bool == 0) goto Label_214; // 0xcd JumpB
	var_8_int = 100; // 0xce PushI
	var_9_float = 3.0; // 0xcf PushF
	SetTimer(var_8_int, var_9_float); // 0xd0 Func
	var_10_object = Obj(); // 0xd2 PushV
	var_10_object = var_0_object; // 0xd3 MovT
	func_985(); // 0xd4 Call
	
Label_214:
	return 0; // 0xd6 Return
}


	task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_41_object)
	{
	var_42_bool = 0; var_43_object = Obj(); // 0xd8 PushV
	var_43_object = var_41_object; // 0xd9 Mov
	func_894(var_42_bool, var_43_object); // 0xda Call
	var_70_bool = var_42_bool == 0; // 0xdc Not
	if(var_70_bool == 0) goto Label_227; // 0xdd JumpB
	var_71_object = Obj(); // 0xde PushV
	var_71_object = var_41_object; // 0xdf Mov
	func_1210(var_71_object); // 0xe0 Call
	return 0; // 0xe2 Return
	
Label_227:
	func_177(); // 0xe4 Call
	var_79_object = Obj(); // 0xe6 PushV
	var_79_object = var_41_object; // 0xe7 Mov
	func_1223(var_79_object); // 0xe8 Call
	return 0; // 0xea Return
	}


task_2_event_30(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector)
{
	var_8_bool = 0; var_9_object = Obj(); var_10_object = Obj(); // 0xec PushV
	var_9_object = var_6_cvector; // 0xed Mov
	var_10_object = var_7_cvector; // 0xee Mov
	func_1267(var_8_bool, var_9_object, var_10_object); // 0xef Call
	if(var_8_bool == 0) goto Label_246; // 0xf1 JumpB
	var_41_object = Obj(); // 0xf2 PushV
	var_41_object = var_6_cvector; // 0xf3 Mov
	func_215(); // 0xf4 Call
	
Label_246:
	return 0; // 0xf6 Return
}


task_2_event_1(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_cvector)
{
	var_7_bool = 0; var_8_object = Obj(); // 0xf8 PushV
	var_8_object = var_6_cvector; // 0xf9 Mov
	func_1239(var_7_bool, var_8_object); // 0xfa Call
	if(var_7_bool == 0) goto Label_260; // 0xfc JumpB
	func_177(); // 0xfe Call
	var_53_object = Obj(); // 0x100 PushV
	var_53_object = var_6_cvector; // 0x101 Mov
	func_1261(var_53_object); // 0x102 Call
	
Label_260:
	return 0; // 0x104 Return
}


task_2_event_7(var_0_object, var_1_int, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_cvector)
{
	var_7_int = 100; // 0x106 PushI
	var_8_bool = var_6_cvector != var_7_int; // 0x107 Neq
	if(var_8_bool == 0) goto Label_266; // 0x108 JumpB
	return 0; // 0x109 Return
	
Label_266:
	var_9_int = 100; // 0x10a PushI
	KillTimer(var_9_int); // 0x10b Func
	StopGroup0(); // 0x10d Func
	return 0; // 0x10f Return
}


task_3_event_3(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_cvector, var_6_cvector)
{
	var_7_bool = 0; // 0x196 PushV
	var_7_bool = 0; // 0x197 MovB
	var_8_object = var_2_object; // 0x198 PushT
	if(var_8_object == 0) goto Label_413; // 0x199 JumpB
	var_9_bool = var_6_cvector == var_0_object; // 0x19a Eq
	if(var_9_bool == 0) goto Label_413; // 0x19b JumpB
	var_7_bool = 1; // 0x19c MovB
	
Label_413:
	if(var_7_bool == 0) goto Label_418; // 0x19d JumpB
	var_10_object = Obj(); // 0x19e PushV
	var_10_object = var_0_object; // 0x19f MovT
	func_985(); // 0x1a0 Call
	
Label_418:
	return 0; // 0x1a2 Return
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_cvector, var_6_cvector)
{
	var_7_bool = 0; // 0x1a4 PushV
	var_7_bool = 0; // 0x1a5 MovB
	var_8_object = var_2_object; // 0x1a6 PushT
	if(var_8_object == 0) goto Label_427; // 0x1a7 JumpB
	var_9_bool = var_6_cvector == var_0_object; // 0x1a8 Eq
	if(var_9_bool == 0) goto Label_427; // 0x1a9 JumpB
	var_7_bool = 1; // 0x1aa MovB
	
Label_427:
	if(var_7_bool == 0) goto Label_435; // 0x1ab JumpB
	var_10_string = "@Stop hunt"; // 0x1ac PushS
	Trace(var_10_string); // 0x1ad Func
	StopAnimation(); // 0x1af Func
	StopGroup0(); // 0x1b1 Func
	
Label_435:
	return 0; // 0x1b3 Return
}


	task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_cvector, var_41_object)
	{
	var_42_bool = 0; var_43_object = Obj(); // 0x214 PushV
	var_43_object = var_41_object; // 0x215 Mov
	func_894(var_42_bool, var_43_object); // 0x216 Call
	var_70_bool = var_42_bool == 0; // 0x218 Not
	if(var_70_bool == 0) goto Label_539; // 0x219 JumpB
	return 0; // 0x21a Return
	
Label_539:
	var_71_object = Obj(); // 0x21b PushV
	var_71_object = var_41_object; // 0x21c Mov
	func_1210(var_71_object); // 0x21d Call
	var_78_bool = var_41_object == var_0_object; // 0x21f Eq
	if(var_78_bool == 0) goto Label_547; // 0x220 JumpB
	var_1_object = 0; // 0x221 SetNullT
	goto Label_554; // 0x222 Jump
	
Label_554:
	return 0; // 0x22a Return
	
Label_547:
	var_1_object = var_41_object; // 0x223 TMov
	var_79_object = var_2_object; // 0x224 PushT
	if(var_79_object == 0) goto Label_554; // 0x225 JumpB
	StopAnimation(); // 0x226 Func
	StopGroup0(); // 0x228 Func
	}


task_3_event_30(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_cvector)
{
	var_8_bool = 0; var_9_object = Obj(); var_10_object = Obj(); // 0x22c PushV
	var_9_object = var_6_cvector; // 0x22d Mov
	var_10_object = var_7_cvector; // 0x22e Mov
	func_1267(var_8_bool, var_9_object, var_10_object); // 0x22f Call
	if(var_8_bool == 0) goto Label_566; // 0x231 JumpB
	var_41_object = Obj(); // 0x232 PushV
	var_41_object = var_6_cvector; // 0x233 Mov
	func_531(); // 0x234 Call
	
Label_566:
	return 0; // 0x236 Return
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_object)
{
	var_7_bool = 0; var_8_bool = 0; // 0x23c PushV
	var_9_object = GlobalVars[0]; // 0x23d PushGE
	in(var_8_bool, var_6_object); // 0x23e ObjFunc
	var_10_bool = var_8_bool == 0; // 0x240 Not
	if(var_10_bool == 0) goto Label_582; // 0x241 JumpB
	var_11_object = Obj(); // 0x242 PushV
	var_11_object = var_6_object; // 0x243 Mov
	func_567(); // 0x244 Call
	
Label_582:
	return 2; // 0x246 Return
}


task_4_event_26(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_string)
{
	var_7_object = Obj(); var_8_object = Obj(); // 0x247 PushV
	var_9_string = "attack"; // 0x248 PushS
	var_10_bool = var_6_string == var_9_string; // 0x249 Eq
	if(var_10_bool == 0) goto Label_599; // 0x24a JumpB
	var_11_object = Obj(); // 0x24b PushV
	func_770(var_11_object); // 0x24c Call
	var_8_object = var_11_object; // 0x24d Mov
	func_742(); // 0x250 Call
	var_15_object = Obj(); // 0x252 PushV
	var_15_object = var_8_object; // 0x253 Mov
	func_1223(var_15_object); // 0x254 Call
	var_8_object = 0; // 0x256 SetNull
	
Label_599:
	return 2; // 0x257 Return
}


task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_object)
{
	var_7_bool = 0; var_8_string = ""; var_9_string = ""; // 0x259 PushV
	var_8_string = "quest_d10_01"; // 0x25a MovS
	var_9_string = "soldier_fight"; // 0x25b MovS
	func_1073(var_7_bool, var_8_string, var_9_string); // 0x25c Call
	return 0; // 0x25e Return
}


task_4_event_30(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_object, var_7_object)
{
	return 0; // 0x260 Return
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector)
{
	func_742(); // 0x262 Call
	TaskCall(0); // 0x265 TaskCall
	func_0(); // 0x266 Call
	TaskReturn(); // 0x267 TaskReturn
	return 0; // 0x269 Return
}


task_4_event_3(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_object)
{
	var_7_bool = 0; var_8_bool = 0; // 0x26a PushV
	var_9_bool = 0; var_10_object = Obj(); // 0x26b PushV
	var_10_object = var_6_object; // 0x26c Mov
	func_894(var_9_bool, var_10_object); // 0x26d Call
	var_43_bool = var_9_bool == 0; // 0x26f Not
	if(var_43_bool == 0) goto Label_626; // 0x270 JumpB
	return 2; // 0x271 Return
	
Label_626:
	var_44_object = GlobalVars[0]; // 0x272 PushGE
	in(var_8_bool, var_6_object); // 0x273 ObjFunc
	var_45_bool = var_8_bool; // 0x275 Push
	if(var_45_bool == 0) goto Label_640; // 0x276 JumpB
	func_742(); // 0x278 Call
	var_46_object = Obj(); // 0x27a PushV
	var_46_object = var_6_object; // 0x27b Mov
	TaskCall(2); // 0x27c TaskCall
	func_153(var_47_object, var_46_object); // 0x27d Call
	TaskReturn(); // 0x27e TaskReturn
	
Label_640:
	return 2; // 0x280 Return
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_object)
{
	var_7_bool = 0; var_8_object = Obj(); // 0x28b PushV
	var_8_object = var_6_object; // 0x28c Mov
	func_1239(var_7_bool, var_8_object); // 0x28d Call
	if(var_7_bool == 0) goto Label_663; // 0x28f JumpB
	func_742(); // 0x291 Call
	var_52_object = Obj(); // 0x293 PushV
	var_52_object = var_6_object; // 0x294 Mov
	func_1307(var_52_object); // 0x295 Call
	
Label_663:
	return 0; // 0x297 Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_object, var_7_int, var_8_float, var_9_float)
{
	var_10_object = Obj(); var_11_int = 0; var_12_float = 0; // 0x48e PushV
	var_10_object = var_6_object; // 0x48f Mov
	var_11_int = var_7_int; // 0x490 Mov
	var_12_float = var_8_float; // 0x491 Mov
	func_918(var_11_int, var_12_float); // 0x492 Call
	return 0; // 0x494 Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_object, var_7_string)
{
	var_8_float = 0; var_9_float = 0; // 0x495 PushV
	var_10_string = "health"; // 0x496 PushS
	var_11_bool = var_7_string == var_10_string; // 0x497 Eq
	if(var_11_bool == 0) goto Label_1185; // 0x498 JumpB
	var_12_string = "health"; // 0x499 PushS
	GetProperty(var_12_string, var_9_float); // 0x49a Func
	var_13_int = 0; // 0x49c PushI
	var_14_bool = var_9_float <= var_13_int; // 0x49d LE
	if(var_14_bool == 0) goto Label_1185; // 0x49e JumpB
	SignalDeath(var_6_object); // 0x49f Func
	
Label_1185:
	return 2; // 0x4a1 Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_object)
{
	var_7_object = Obj(); // 0x4a3 PushV
	var_7_object = var_6_object; // 0x4a4 Mov
	func_1327(var_7_object); // 0x4a5 Call
	return 0; // 0x4a7 Return
}


event_6(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector)
{
	var_6_object = Obj(); // 0x527 PushV
	func_1003(var_6_object); // 0x528 Call
	RemoveActor(var_6_object); // 0x52a Func
	Hold(); // 0x52c Func
	return 0; // 0x52e Return
}


main(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector)
{
	func_1192(); // 0x282 Call
	
Label_644:
	func_664(var_4_cvector, var_5_cvector); // 0x285 Call
	goto Label_644; // 0x287 Jump
}


func_0()
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_1152(var_38_int, var_39_string)
{
	var_40_int = 0; var_41_int = 0; // 0x480 PushV
	GetInvItemByName(var_41_int, var_39_string); // 0x481 Func
	var_38_int = var_41_int; // 0x483 Mov
	return 2; // 0x484 Return
}


func_770(var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj(); // 0x302 PushV
	var_14_string = "player"; // 0x303 PushS
	FindActor(var_13_object, var_14_string); // 0x304 Func
	var_11_object = var_13_object; // 0x306 Mov
	return 2; // 0x307 Return
}


func_1157(var_8_object)
{
	var_9_object = Obj(); // 0x486 PushV
	var_9_object = var_8_object; // 0x487 Mov
	TaskCall(1); // 0x488 TaskCall
	func_6(var_9_object); // 0x489 Call
	TaskReturn(); // 0x48a TaskReturn
	return 0; // 0x48c Return
}


func_6(var_9_object)
{
	func_1115(); // 0x8 Call
	var_50_object = Obj(); // 0xa PushV
	var_50_object = var_9_object; // 0xb Mov
	func_15(var_50_object); // 0xc Call
	return 0; // 0xe Return
}


func_1031(var_7_object)
{
	var_8_object = Obj(); var_9_object = Obj(); // 0x407 PushV
	CreateObjectSet(var_9_object); // 0x408 Func
	var_7_object = var_9_object; // 0x40a Mov
	return 2; // 0x40b Return
}


func_649()
{
	return 0; // 0x289 Return
}


func_777(var_33_bool, var_34_object, var_35_string)
{
	var_36_bool = 0; var_37_bool = 0; // 0x309 PushV
	var_38_string = "HasProperty"; // 0x30a PushS
	var_39_int = 2; // 0x30b PushI
	var_40_bool = IsFuncExist(var_34_object, var_38_string, var_39_int); // 0x30c FuncExist
	var_41_bool = var_40_bool == 0; // 0x30d Not
	if(var_41_bool == 0) goto Label_785; // 0x30e JumpB
	var_33_bool = 0; // 0x30f MovB
	return 2; // 0x310 Return
	
Label_785:
	HasProperty(var_35_string, var_37_bool); // 0x311 ObjFunc
	var_33_bool = var_37_bool; // 0x313 Mov
	return 2; // 0x314 Return
}


func_1037(var_104_float, var_105_cvector, var_106_cvector)
{
	var_107_float = GetByIndex(var_105_cvector, 0); // 0x40e PushE
	var_108_float = GetByIndex(var_106_cvector, 0); // 0x40f PushE
	var_109_float = var_107_float * var_108_float; // 0x410 Mult
	var_110_float = GetByIndex(var_105_cvector, 2); // 0x411 PushE
	var_111_float = GetByIndex(var_106_cvector, 2); // 0x412 PushE
	var_112_float = var_110_float * var_111_float; // 0x413 Mult
	var_104_float = var_109_float + var_112_float; // 0x414 Add2
	return 0; // 0x415 Return
}


func_15(var_50_object)
{
	EventDisable(0); // 0x10 EventDisable
	var_51_object = Obj(); // 0x11 PushV
	var_51_object = var_50_object; // 0x12 Mov
	func_38(var_51_object); // 0x13 Call
	var_101_int = 50; // 0x15 PushI
	var_102_int = 40; // 0x16 PushI
	SetRTEnvelope(var_101_int, var_102_int); // 0x17 Func
	EventEnable(0); // 0x19 EventEnable
	
Label_26:
	Hold(); // 0x1a Func
	goto Label_26; // 0x1c Jump
}


func_272(var_0_object, var_1_object, var_2_object, var_59_object, var_60_bool)
{
	var_64_bool = 0; var_65_bool = 0; var_66_bool = 0; var_67_bool = 0; // 0x110 PushV
	var_0_object = var_59_object; // 0x111 TMov
	Face(var_0_object); // 0x112 Func
	var_68_bool = var_60_bool; // 0x114 Push
	if(var_68_bool == 0) goto Label_284; // 0x115 JumpB
	var_69_string = "all"; // 0x116 PushS
	var_70_string = "attack_on"; // 0x117 PushS
	PlayAnimation(var_69_string, var_70_string); // 0x118 Func
	WaitForAnimEnd(); // 0x11a Func
	
Label_284:
	var_71_string = "all"; // 0x11c PushS
	var_72_string = "attack_on"; // 0x11d PushS
	LockAnimationEnd(var_71_string, var_72_string); // 0x11e Func
	var_73_bool = 1; // 0x120 PushB
	SetAttackState(var_73_bool); // 0x121 Func
	
Label_291:
	var_74_bool = 0; var_75_object = Obj(); // 0x123 PushV
	var_75_object = var_0_object; // 0x124 MovT
	func_894(var_74_bool, var_75_object); // 0x125 Call
	if(var_74_bool == 0) goto Label_393; // 0x127 JumpB
	CanSee(var_67_bool, var_0_object); // 0x128 Func
	var_76_bool = var_67_bool; // 0x12a Push
	if(var_76_bool == 0) goto Label_304; // 0x12b JumpB
	func_441(var_67_bool); // 0x12d Call
	goto Label_383; // 0x12f Jump
	
Label_383:
	var_204_bool = var_1_object != 0; // 0x17f NullNeq
	if(var_204_bool == 0) goto Label_389; // 0x180 JumpB
	func_436(var_66_bool, var_67_bool); // 0x182 Call
	goto Label_392; // 0x184 Jump
	
Label_392:
	goto Label_291; // 0x188 Jump
	
Label_389:
	var_205_int = 2; // 0x185 PushI
	Sleep(var_205_int); // 0x186 Func
	
Label_304:
	var_206_object = Obj(); // 0x130 PushV
	var_206_object = var_0_object; // 0x131 MovT
	func_985(); // 0x132 Call
	var_2_object = 1; // 0x134 TMovB
	var_215_string = "all"; // 0x135 PushS
	var_216_string = "hunt"; // 0x136 PushS
	PlayAnimation(var_215_string, var_216_string); // 0x137 Func
	WaitForAnimEnd(var_66_bool); // 0x139 Func
	var_217_bool = var_66_bool == 0; // 0x13b Not
	if(var_217_bool == 0) goto Label_327; // 0x13c JumpB
	var_218_bool = var_1_object != 0; // 0x13d NullNeq
	if(var_218_bool == 0) goto Label_322; // 0x13e JumpB
	func_436(var_66_bool, var_67_bool); // 0x140 Call
	
Label_322:
	var_219_string = "all"; // 0x142 PushS
	var_220_string = "attack_on"; // 0x143 PushS
	LockAnimationEnd(var_219_string, var_220_string); // 0x144 Func
	goto Label_291; // 0x146 Jump
	
Label_327:
	var_221_bool = 0; var_222_object = Obj(); // 0x147 PushV
	var_222_object = var_0_object; // 0x148 MovT
	func_894(var_221_bool, var_222_object); // 0x149 Call
	var_223_bool = var_221_bool == 0; // 0x14b Not
	if(var_223_bool == 0) goto Label_334; // 0x14c JumpB
	goto Label_393; // 0x14d Jump
	
Label_393:
	var_224_bool = 0; // 0x189 PushB
	SetAttackState(var_224_bool); // 0x18a Func
	StopAsync(); // 0x18c Func
	var_225_string = "all"; // 0x18e PushS
	var_226_string = "attack_off"; // 0x18f PushS
	PlayAnimation(var_225_string, var_226_string); // 0x190 Func
	WaitForAnimEnd(); // 0x192 Func
	return 4; // 0x194 Return
	
Label_334:
	CanSee(var_67_bool, var_0_object); // 0x14e Func
	var_227_bool = var_67_bool; // 0x150 Push
	if(var_227_bool == 0) goto Label_345; // 0x151 JumpB
	var_2_object = 0; // 0x152 TMovB
	Face(var_0_object); // 0x153 Func
	func_441(var_67_bool); // 0x156 Call
	goto Label_383; // 0x158 Jump
	
Label_345:
	var_228_string = "all"; // 0x159 PushS
	var_229_string = "attack_on"; // 0x15a PushS
	LockAnimationEnd(var_228_string, var_229_string); // 0x15b Func
	var_230_int = 3; // 0x15d PushI
	Sleep(var_230_int, var_66_bool); // 0x15e Func
	var_231_bool = var_66_bool == 0; // 0x160 Not
	if(var_231_bool == 0) goto Label_364; // 0x161 JumpB
	var_232_bool = var_1_object != 0; // 0x162 NullNeq
	if(var_232_bool == 0) goto Label_359; // 0x163 JumpB
	func_436(var_66_bool, var_67_bool); // 0x165 Call
	
Label_359:
	var_233_string = "all"; // 0x167 PushS
	var_234_string = "attack_on"; // 0x168 PushS
	LockAnimationEnd(var_233_string, var_234_string); // 0x169 Func
	goto Label_291; // 0x16b Jump
	
Label_364:
	var_235_bool = 0; var_236_object = Obj(); // 0x16c PushV
	var_236_object = var_0_object; // 0x16d MovT
	func_894(var_235_bool, var_236_object); // 0x16e Call
	var_237_bool = var_235_bool == 0; // 0x170 Not
	if(var_237_bool == 0) goto Label_371; // 0x171 JumpB
	goto Label_393; // 0x172 Jump
	
Label_371:
	var_2_object = 0; // 0x173 TMovB
	CanSee(var_67_bool, var_0_object); // 0x174 Func
	var_238_bool = var_67_bool; // 0x176 Push
	if(var_238_bool == 0) goto Label_382; // 0x177 JumpB
	Face(var_0_object); // 0x178 Func
	func_441(var_67_bool); // 0x17b Call
	goto Label_383; // 0x17d Jump
	
Label_382:
	goto Label_393; // 0x17e Jump
}


func_789(var_142_float, var_143_object, var_144_float, var_145_int)
{
	var_146_int = 0; var_147_string = ""; var_148_int = 0; var_149_float = 0; var_150_float = 0; var_151_float = 0; var_152_int = 0; var_153_string = ""; var_154_int = 0; var_155_float = 0; var_156_float = 0; var_157_float = 0; // 0x315 PushV
	var_158_bool = 0; var_159_object = Obj(); var_160_string = ""; // 0x316 PushV
	var_159_object = var_143_object; // 0x317 Mov
	var_160_string = "health"; // 0x318 MovS
	func_777(var_158_bool, var_159_object, var_160_string); // 0x319 Call
	var_161_bool = var_158_bool == 0; // 0x31b Not
	if(var_161_bool == 0) goto Label_799; // 0x31c JumpB
	var_142_float = 0.0; // 0x31d MovF
	return 12; // 0x31e Return
	
Label_799:
	var_162_bool = 0; var_163_object = Obj(); var_164_string = ""; // 0x31f PushV
	var_163_object = var_143_object; // 0x320 Mov
	var_164_string = "armor"; // 0x321 MovS
	func_777(var_162_bool, var_163_object, var_164_string); // 0x322 Call
	var_165_bool = var_162_bool == 0; // 0x324 Not
	if(var_165_bool == 0) goto Label_808; // 0x325 JumpB
	var_152_int = 0; // 0x326 MovI
	goto Label_811; // 0x327 Jump
	
Label_811:
	var_166_string = "armor_"; // 0x32b PushS
	var_167_string = ""; var_168_int = 0; // 0x32c PushV
	var_168_int = var_145_int; // 0x32d Mov
	func_747(var_167_string, var_168_int); // 0x32e Call
	var_153_string = var_166_string + var_167_string; // 0x330 Add2
	var_171_bool = 0; var_172_object = Obj(); var_173_string = ""; // 0x331 PushV
	var_172_object = var_143_object; // 0x332 Mov
	var_173_string = var_153_string; // 0x333 Mov
	func_777(var_171_bool, var_172_object, var_173_string); // 0x334 Call
	var_174_bool = var_171_bool == 0; // 0x336 Not
	if(var_174_bool == 0) goto Label_826; // 0x337 JumpB
	var_154_int = 0; // 0x338 MovI
	goto Label_828; // 0x339 Jump
	
Label_828:
	var_175_float = 0; var_176_float = 0; var_177_float = 0; // 0x33c PushV
	var_178_int = var_152_int + var_154_int; // 0x33d Add
	var_179_float = 100.0; // 0x33e PushF
	var_176_float = var_178_int / var_178_int; // 0x33f Div2
	var_177_float = 1; // 0x340 MovI
	func_1013(var_175_float, var_176_float, var_177_float); // 0x341 Call
	var_155_float = var_175_float; // 0x342 Mov
	var_181_string = "health"; // 0x344 PushS
	GetProperty(var_181_string, var_156_float); // 0x345 ObjFunc
	var_182_int = 1; // 0x347 PushI
	var_183_int = var_182_int - var_155_float; // 0x348 Sub
	var_157_float = var_144_float * var_183_int; // 0x349 Mult2
	var_184_string = "health"; // 0x34a PushS
	var_185_float = 0; var_186_float = 0; var_187_float = 0; var_188_float = 0; // 0x34b PushV
	var_186_float = var_156_float - var_157_float; // 0x34c Sub2
	var_187_float = 0; // 0x34d MovI
	var_188_float = 1; // 0x34e MovI
	func_1020(var_185_float, var_186_float, var_187_float, var_188_float); // 0x34f Call
	SetProperty(var_184_string, var_185_float); // 0x351 ObjFunc
	var_142_float = var_157_float; // 0x353 Mov
	return 12; // 0x354 Return
	
Label_826:
	GetProperty(var_153_string, var_154_int); // 0x33a ObjFunc
	
Label_808:
	var_191_string = "armor"; // 0x328 PushS
	GetProperty(var_191_string, var_152_int); // 0x329 ObjFunc
}


func_1046(var_113_float, var_114_cvector)
{
	var_115_float = GetByIndex(var_114_cvector, 0); // 0x417 PushE
	var_116_float = GetByIndex(var_114_cvector, 0); // 0x418 PushE
	var_117_float = var_115_float * var_116_float; // 0x419 Mult
	var_118_float = GetByIndex(var_114_cvector, 2); // 0x41a PushE
	var_119_float = GetByIndex(var_114_cvector, 2); // 0x41b PushE
	var_120_float = var_118_float * var_119_float; // 0x41c Mult
	var_121_int = var_117_float + var_120_float; // 0x41d Add
	var_113_float = sqrt(var_121_int); // 0x41e Sqrt2
	return 0; // 0x41f Return
}


func_918(var_10_object, var_11_int)
{
	var_13_object = Obj(); var_14_object = Obj(); var_15_cvector = CVector(0,0,0); var_16_float = 0; var_17_int = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_string = ""; var_23_object = Obj(); var_24_object = Obj(); var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_int = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_string = ""; // 0x396 PushV
	var_33_bool = 0; // 0x397 PushV
	var_33_bool = 0; // 0x398 MovB
	var_34_int = 4; // 0x399 PushI
	var_35_bool = var_11_int != var_34_int; // 0x39a Neq
	if(var_35_bool == 0) goto Label_928; // 0x39b JumpB
	var_36_int = 5; // 0x39c PushI
	var_37_bool = var_11_int != var_36_int; // 0x39d Neq
	if(var_37_bool == 0) goto Label_928; // 0x39e JumpB
	var_33_bool = 1; // 0x39f MovB
	
Label_928:
	if(var_33_bool == 0) goto Label_947; // 0x3a0 JumpB
	GetScene(var_23_object); // 0x3a1 Func
	GetPosition(var_25_cvector); // 0x3a3 Func
	GetEyesHeight(var_26_float); // 0x3a5 Func
	var_38_float = GetByIndex(var_25_cvector, 1); // 0x3a7 PushE
	var_39_int = 2; // 0x3a8 PushI
	var_40_float = var_26_float / var_39_int; // 0x3a9 Div
	var_38_float = var_38_float + var_40_float; // 0x3aa Add2
	SetByIndex(var_25_cvector, 1) = var_38_float; // 0x3ab PopE
	var_41_string = "scripted"; // 0x3ac PushS
	var_42_cvector = CVector(0.0, 0.0, 1.0); // 0x3ad PushVec
	var_43_string = "blood.xml"; // 0x3ae PushS
	AddActorByType(var_24_object, var_41_string, var_23_object, var_25_cvector, var_42_cvector, var_43_string); // 0x3af Func
	var_24_object = 0; // 0x3b1 SetNull
	var_23_object = 0; // 0x3b2 SetNull
	
Label_947:
	var_44_bool = var_10_object == 0; // 0x3b3 NullEq
	if(var_44_bool == 0) goto Label_950; // 0x3b4 JumpB
	return 20; // 0x3b5 Return
	
Label_950:
	GetSecondaryAnimationType(var_27_int); // 0x3b6 Func
	var_45_int = 0; // 0x3b8 PushI
	var_46_bool = var_27_int < var_45_int; // 0x3b9 LT
	if(var_46_bool == 0) goto Label_956; // 0x3ba JumpB
	return 20; // 0x3bb Return
	
Label_956:
	GetPosition(var_28_cvector); // 0x3bc ObjFunc
	GetPosition(var_29_cvector); // 0x3be Func
	GetDirection(var_30_cvector); // 0x3c0 Func
	var_31_cvector = var_29_cvector - var_28_cvector; // 0x3c2 Sub2
	var_47_float = GetByIndex(var_31_cvector, 0); // 0x3c3 PushE
	var_48_float = GetByIndex(var_30_cvector, 0); // 0x3c4 PushE
	var_49_float = var_47_float * var_48_float; // 0x3c5 Mult
	var_50_float = GetByIndex(var_31_cvector, 2); // 0x3c6 PushE
	var_51_float = GetByIndex(var_30_cvector, 2); // 0x3c7 PushE
	var_52_float = var_50_float * var_51_float; // 0x3c8 Mult
	var_53_int = var_49_float + var_52_float; // 0x3c9 Add
	var_54_int = 0; // 0x3ca PushI
	var_55_bool = var_53_int >= var_54_int; // 0x3cb GE
	if(var_55_bool == 0) goto Label_975; // 0x3cc JumpB
	var_32_string = "fhit"; // 0x3cd MovS
	goto Label_976; // 0x3ce Jump
	
Label_976:
	var_56_string = "hit_react"; // 0x3d0 PushS
	var_57_string = "1"; // 0x3d1 PushS
	var_58_int = var_32_string + var_57_string; // 0x3d2 Add
	var_59_string = "2"; // 0x3d3 PushS
	var_60_int = var_32_string + var_59_string; // 0x3d4 Add
	var_61_int = -10; // 0x3d5 PushI
	FadeSecondaryAnimation(var_56_string, var_58_int, var_60_int, var_61_int); // 0x3d6 Func
	return 20; // 0x3d8 Return
	
Label_975:
	var_32_string = "bhit"; // 0x3cf MovS
}


func_664(var_0_object, var_1_object)
{
	var_10_int = 0; var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_object = Obj(); var_14_int = 0; var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_object = Obj(); // 0x298 PushV
	GetPFPosition(var_17_object); // 0x299 Func
	GetDirection(var_0_object); // 0x29b Func
	
Label_669:
	var_18_int = 60; // 0x29d PushI
	irand(var_14_int, var_18_int); // 0x29e Func
	var_19_int = 30; // 0x2a0 PushI
	var_20_int = var_14_int + var_19_int; // 0x2a1 Add
	Sleep(var_20_int, var_15_bool); // 0x2a2 Func
	var_21_bool = var_15_bool; // 0x2a4 Push
	if(var_21_bool == 0) goto Label_682; // 0x2a5 JumpB
	func_649(); // 0x2a7 Call
	goto Label_740; // 0x2a9 Jump
	
Label_740:
	goto Label_669; // 0x2e4 Jump
	
Label_682:
	GetPFPosition(var_16_cvector); // 0x2aa Func
	var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x2ac PushV
	var_23_cvector = var_1_object; // 0x2ad MovT
	var_24_cvector = var_16_cvector; // 0x2ae Mov
	func_1009(var_22_float, var_23_cvector, var_24_cvector); // 0x2af Call
	var_27_int = 40000; // 0x2b1 PushI
	var_28_bool = var_22_float > var_27_int; // 0x2b2 GT
	if(var_28_bool == 0) goto Label_726; // 0x2b3 JumpB
	FindPathTo(var_17_object, var_17_object); // 0x2b4 Func
	var_29_bool = var_17_object != 0; // 0x2b6 NullNeq
	if(var_29_bool == 0) goto Label_721; // 0x2b7 JumpB
	RotatePath(var_17_object, var_15_bool); // 0x2b8 Func
	var_30_bool = var_15_bool == 0; // 0x2ba Not
	if(var_30_bool == 0) goto Label_701; // 0x2bb JumpB
	goto Label_739; // 0x2bc Jump
	
Label_739:
	goto Label_682; // 0x2e3 Jump
	
Label_701:
	var_31_bool = 0; // 0x2bd PushB
	FollowPath(var_17_object, var_31_bool, var_15_bool); // 0x2be Func
	var_32_bool = var_15_bool == 0; // 0x2c0 Not
	if(var_32_bool == 0) goto Label_707; // 0x2c1 JumpB
	goto Label_739; // 0x2c2 Jump
	
Label_707:
	var_33_float = GetByIndex(var_0_object, 0); // 0x2c3 PushE
	var_34_float = GetByIndex(var_0_object, 2); // 0x2c4 PushE
	Rotate(var_33_float, var_34_float, var_15_bool); // 0x2c5 Func
	var_35_bool = var_15_bool == 0; // 0x2c7 Not
	if(var_35_bool == 0) goto Label_714; // 0x2c8 JumpB
	goto Label_739; // 0x2c9 Jump
	
Label_714:
	WaitForAnimEnd(var_15_bool); // 0x2ca Func
	var_36_bool = var_15_bool == 0; // 0x2cc Not
	if(var_36_bool == 0) goto Label_719; // 0x2cd JumpB
	goto Label_739; // 0x2ce Jump
	
Label_719:
	goto Label_740; // 0x2cf Jump
	
Label_721:
	var_37_int = 1; // 0x2d1 PushI
	Sleep(var_37_int); // 0x2d2 Func
	var_17_object = 0; // 0x2d4 SetNull
	goto Label_739; // 0x2d5 Jump
	
Label_726:
	var_38_float = GetByIndex(var_0_object, 0); // 0x2d6 PushE
	var_39_float = GetByIndex(var_0_object, 2); // 0x2d7 PushE
	Rotate(var_38_float, var_39_float, var_15_bool); // 0x2d8 Func
	var_40_bool = var_15_bool == 0; // 0x2da Not
	if(var_40_bool == 0) goto Label_733; // 0x2db JumpB
	goto Label_739; // 0x2dc Jump
	
Label_733:
	WaitForAnimEnd(var_15_bool); // 0x2dd Func
	var_41_bool = var_15_bool == 0; // 0x2df Not
	if(var_41_bool == 0) goto Label_738; // 0x2e0 JumpB
	goto Label_739; // 0x2e1 Jump
	
Label_738:
	goto Label_740; // 0x2e2 Jump
}


func_153(var_0_object, var_46_object)
{
	var_48_bool = 0; var_49_bool = 0; // 0x99 PushV
	var_0_object = var_46_object; // 0x9a TMov
	Face(var_46_object); // 0x9b Func
	
Label_157:
	var_50_float = 0.5; // 0x9d PushF
	Sleep(var_50_float, var_49_bool); // 0x9e Func
	var_51_bool = 0; // 0xa0 PushV
	var_51_bool = 1; // 0xa1 MovB
	var_52_bool = var_49_bool == 0; // 0xa2 Not
	if(var_52_bool == 0) goto Label_171; // 0xa3 JumpB
	var_53_bool = 0; var_54_object = Obj(); // 0xa4 PushV
	var_54_object = var_0_object; // 0xa5 MovT
	func_894(var_53_bool, var_54_object); // 0xa6 Call
	var_55_bool = var_53_bool == 0; // 0xa8 Not
	if(var_55_bool == 0) goto Label_171; // 0xa9 JumpB
	var_51_bool = 0; // 0xaa MovB
	
Label_171:
	if(var_51_bool == 0) goto Label_173; // 0xab JumpB
	goto Label_174; // 0xac Jump
	
Label_174:
	StopAsync(); // 0xae Func
	return 2; // 0xb0 Return
	
Label_173:
	goto Label_157; // 0xad Jump
}


func_1307(var_52_object)
{
	var_53_bool = 0; var_54_bool = 0; // 0x51b PushV
	var_55_object = GlobalVars[0]; // 0x51c PushGE
	in(var_54_bool, var_52_object); // 0x51d ObjFunc
	var_56_bool = var_54_bool; // 0x51f Push
	if(var_56_bool == 0) goto Label_1318; // 0x520 JumpB
	var_57_object = Obj(); var_58_bool = 0; // 0x521 PushV
	var_57_object = var_52_object; // 0x522 Mov
	var_58_bool = 1; // 0x523 MovB
	func_1199(var_57_object, var_58_bool); // 0x524 Call
	
Label_1318:
	return 2; // 0x526 Return
}


func_1056(var_101_float, var_102_cvector, var_103_cvector)
{
	var_104_float = 0; var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); // 0x421 PushV
	var_105_cvector = var_102_cvector; // 0x422 Mov
	var_106_cvector = var_103_cvector; // 0x423 Mov
	func_1037(var_104_float, var_105_cvector, var_106_cvector); // 0x424 Call
	var_113_float = 0; var_114_cvector = CVector(0,0,0); // 0x426 PushV
	var_114_cvector = var_102_cvector; // 0x427 Mov
	func_1046(var_113_float, var_114_cvector); // 0x428 Call
	var_122_float = 0; var_123_cvector = CVector(0,0,0); // 0x42a PushV
	var_123_cvector = var_103_cvector; // 0x42b Mov
	func_1046(var_122_float, var_123_cvector); // 0x42c Call
	var_124_float = var_113_float * var_122_float; // 0x42e Mult
	var_101_float = var_104_float / var_104_float; // 0x42f Div2
	return 0; // 0x430 Return
}


func_38(var_51_object)
{
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_string = ""; var_57_object = Obj(); var_58_bool = 0; var_59_bool = 0; var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_string = ""; var_67_object = Obj(); var_68_bool = 0; var_69_bool = 0; var_70_float = 0; var_71_cvector = CVector(0,0,0); // 0x26 PushV
	var_72_bool = var_51_object == 0; // 0x27 NullEq
	if(var_72_bool == 0) goto Label_46; // 0x28 JumpB
	var_73_string = ""; // 0x29 PushV
	var_73_string = "fdie"; // 0x2a MovS
	func_125(var_73_string); // 0x2b Call
	goto Label_124; // 0x2d Jump
	
Label_124:
	return 20; // 0x7c Return
	
Label_46:
	GetPosition(var_62_cvector); // 0x2e ObjFunc
	GetPosition(var_63_cvector); // 0x30 Func
	GetDirection(var_64_cvector); // 0x32 Func
	var_65_cvector = var_63_cvector - var_62_cvector; // 0x34 Sub2
	var_76_float = GetByIndex(var_65_cvector, 0); // 0x35 PushE
	var_77_float = GetByIndex(var_64_cvector, 0); // 0x36 PushE
	var_78_float = var_76_float * var_77_float; // 0x37 Mult
	var_79_float = GetByIndex(var_65_cvector, 2); // 0x38 PushE
	var_80_float = GetByIndex(var_64_cvector, 2); // 0x39 PushE
	var_81_float = var_79_float * var_80_float; // 0x3a Mult
	var_82_int = var_78_float + var_81_float; // 0x3b Add
	var_83_int = 0; // 0x3c PushI
	var_84_bool = var_82_int >= var_83_int; // 0x3d GE
	if(var_84_bool == 0) goto Label_65; // 0x3e JumpB
	var_66_string = "fdie"; // 0x3f MovS
	goto Label_66; // 0x40 Jump
	
Label_66:
	RemoveRTEnvelope(); // 0x42 Func
	SetDeathState(); // 0x44 Func
	Stop(); // 0x46 Func
	StopAsync(); // 0x48 Func
	var_67_object = var_51_object; // 0x4a Mov
	var_85_string = "GetScriptProperty"; // 0x4b PushS
	var_86_int = 2; // 0x4c PushI
	var_87_bool = IsFuncExist(var_51_object, var_85_string, var_86_int); // 0x4d FuncExist
	if(var_87_bool == 0) goto Label_90; // 0x4e JumpB
	var_88_string = "Owner"; // 0x4f PushS
	HasScriptProperty(var_68_bool, var_88_string); // 0x50 ObjFunc
	var_89_bool = var_68_bool; // 0x52 Push
	if(var_89_bool == 0) goto Label_90; // 0x53 JumpB
	var_90_string = "Owner"; // 0x54 PushS
	GetScriptProperty(var_67_object, var_90_string); // 0x55 ObjFunc
	var_91_bool = var_67_object == 0; // 0x57 NullEq
	if(var_91_bool == 0) goto Label_90; // 0x58 JumpB
	var_67_object = var_51_object; // 0x59 Mov
	
Label_90:
	var_92_string = "@GetEyesHeight"; // 0x5a PushS
	var_93_int = 1; // 0x5b PushI
	var_94_bool = IsFuncExist(var_67_object, var_92_string, var_93_int); // 0x5c FuncExist
	if(var_94_bool == 0) goto Label_105; // 0x5d JumpB
	GetEyesHeight(var_70_float); // 0x5e ObjFunc
	var_71_cvector = CVector(0.0, 0.0, 0.0); // 0x60 MovV
	var_95_float = GetByIndex(var_71_cvector, 1); // 0x61 PushE
	var_95_float = var_70_float; // 0x62 Mov
	SetByIndex(var_71_cvector, 1) = var_95_float; // 0x63 PopE
	var_96_string = "head"; // 0x64 PushS
	LookAsync(var_51_object, var_96_string, var_71_cvector); // 0x65 Func
	var_69_bool = 1; // 0x67 MovB
	goto Label_106; // 0x68 Jump
	
Label_106:
	var_97_string = "all"; // 0x6a PushS
	PlayAnimation(var_97_string, var_66_string); // 0x6b Func
	WaitForAnimEnd(); // 0x6d Func
	var_98_bool = var_69_bool; // 0x6f Push
	if(var_98_bool == 0) goto Label_118; // 0x70 JumpB
	StopAsync(); // 0x71 Func
	var_99_string = "head"; // 0x73 PushS
	UnlookAsync(var_99_string); // 0x74 Func
	
Label_118:
	var_100_string = "all"; // 0x76 PushS
	LockAnimationEnd(var_100_string, var_66_string); // 0x77 Func
	RemoveEnvelope(); // 0x79 Func
	var_67_object = 0; // 0x7b SetNull
	
Label_105:
	var_69_bool = 0; // 0x69 MovB
	
Label_65:
	var_66_string = "bdie"; // 0x41 MovS
}


func_1192()
{
	var_6_object = GlobalVars[0]; // 0x4a8 PushGE
	var_7_object = Obj(); // 0x4a9 PushV
	func_1031(var_7_object); // 0x4aa Call
	var_6_object = var_7_object; // 0x4ab Mov
	GlobalVars[0] = var_6_object; // 0x4ad PopGE
	return 0; // 0x4ae Return
}


func_1327(var_7_object)
{
	var_8_object = Obj(); // 0x530 PushV
	var_8_object = var_7_object; // 0x531 Mov
	func_1157(var_8_object); // 0x532 Call
	return 0; // 0x534 Return
}


func_1199(var_57_object, var_58_bool)
{
	var_59_object = Obj(); var_60_bool = 0; // 0x4b0 PushV
	var_59_object = var_57_object; // 0x4b1 Mov
	var_60_bool = var_58_bool; // 0x4b2 Mov
	TaskCall(3); // 0x4b3 TaskCall
	func_272(var_61_object, var_62_object, var_63_bool, var_59_object, var_60_bool); // 0x4b4 Call
	TaskReturn(); // 0x4b5 TaskReturn
	ResetAAS(); // 0x4b7 Func
	return 0; // 0x4b9 Return
}


func_177()
{
	StopAsync(); // 0xb1 Func
	var_52_int = 100; // 0xb3 PushI
	KillTimer(var_52_int); // 0xb4 Func
	StopGroup0(); // 0xb6 Func
	return 0; // 0xb8 Return
}


func_1073(var_7_bool, var_8_string, var_9_string)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x431 PushV
	FindActor(var_11_object, var_8_string); // 0x432 Func
	var_12_bool = var_11_object == 0; // 0x434 NullEq
	if(var_12_bool == 0) goto Label_1080; // 0x435 JumpB
	var_7_bool = 0; // 0x436 MovB
	return 2; // 0x437 Return
	
Label_1080:
	Trigger(var_11_object, var_9_string); // 0x438 Func
	var_7_bool = 1; // 0x43a MovB
	return 2; // 0x43b Return
}


func_436(var_0_object, var_1_object)
{
	var_0_object = var_1_object; // 0x1b4 TMovT
	var_1_object = 0; // 0x1b5 SetNullT
	Face(var_0_object); // 0x1b6 Func
	return 0; // 0x1b8 Return
}


func_567()
{
	func_742(); // 0x239 Call
	return 0; // 0x23b Return
}


func_441(var_0_object)
{
	var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_object = Obj(); var_81_int = 0; var_82_cvector = CVector(0,0,0); var_83_float = 0; var_84_object = Obj(); var_85_object = Obj(); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_object = Obj(); var_90_int = 0; var_91_cvector = CVector(0,0,0); var_92_float = 0; var_93_object = Obj(); var_94_object = Obj(); // 0x1b9 PushV
	ReportAttack(var_0_object); // 0x1ba Func
	GetDirection(var_86_cvector); // 0x1bc Func
	var_95_cvector = CVector(0,0,0); var_96_object = Obj(); // 0x1be PushV
	var_96_object = var_0_object; // 0x1bf MovT
	func_755(var_96_object); // 0x1c0 Call
	var_87_cvector = var_95_cvector; // 0x1c1 Mov
	var_101_float = 0; var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); // 0x1c3 PushV
	var_102_cvector = var_86_cvector; // 0x1c4 Mov
	var_103_cvector = var_87_cvector; // 0x1c5 Mov
	func_1056(var_101_float, var_102_cvector, var_103_cvector); // 0x1c6 Call
	var_125_float = 0.96593; // 0x1c8 PushF
	var_126_bool = var_101_float < var_125_float; // 0x1c9 LT
	if(var_126_bool == 0) goto Label_460; // 0x1ca JumpB
	return 18; // 0x1cb Return
	
Label_460:
	var_127_string = "all"; // 0x1cc PushS
	var_128_string = "attack_begin1"; // 0x1cd PushS
	PlayAnimation(var_127_string, var_128_string); // 0x1ce Func
	WaitForAnimEnd(); // 0x1d0 Func
	var_129_string = "shot"; // 0x1d2 PushS
	Speak(var_129_string); // 0x1d3 Func
	GetDirection(var_86_cvector); // 0x1d5 Func
	var_130_cvector = CVector(0,0,0); var_131_object = Obj(); // 0x1d7 PushV
	var_131_object = var_0_object; // 0x1d8 MovT
	func_755(var_131_object); // 0x1d9 Call
	var_87_cvector = var_130_cvector; // 0x1da Mov
	var_132_float = GetByIndex(var_87_cvector, 1); // 0x1dc PushE
	var_133_float = 0; var_134_object = Obj(); // 0x1dd PushV
	var_134_object = var_0_object; // 0x1de MovT
	func_996(var_134_object); // 0x1df Call
	var_132_float = var_132_float + var_133_float; // 0x1e1 Add2
	SetByIndex(var_87_cvector, 1) = var_132_float; // 0x1e2 PopE
	var_139_float = 0.2618; // 0x1e3 PushF
	RandVecCone3D(var_88_cvector, var_87_cvector, var_139_float); // 0x1e4 Func
	GetVictimMaterial(var_88_cvector, var_89_object, var_90_int, var_91_cvector); // 0x1e6 Func
	var_140_bool = var_89_object != 0; // 0x1e8 NullNeq
	if(var_140_bool == 0) goto Label_519; // 0x1e9 JumpB
	var_141_bool = var_89_object == var_0_object; // 0x1ea Eq
	if(var_141_bool == 0) goto Label_504; // 0x1eb JumpB
	var_142_float = 0; var_143_object = Obj(); var_144_float = 0; var_145_int = 0; // 0x1ec PushV
	var_143_object = var_0_object; // 0x1ed MovT
	var_144_float = 1.5; // 0x1ee MovF
	var_145_int = 0; // 0x1ef MovI
	func_789(var_142_float, var_143_object, var_144_float, var_145_int); // 0x1f0 Call
	var_92_float = var_142_float; // 0x1f1 Mov
	var_192_int = 2; // 0x1f3 PushI
	var_193_float = 1.5; // 0x1f4 PushF
	ReportHit(var_0_object, var_192_int, var_92_float, var_193_float); // 0x1f5 Func
	goto Label_519; // 0x1f7 Jump
	
Label_519:
	var_194_string = "all"; // 0x207 PushS
	var_195_string = "attack_end1"; // 0x208 PushS
	PlayAnimation(var_194_string, var_195_string); // 0x209 Func
	WaitForAnimEnd(); // 0x20b Func
	var_196_string = "all"; // 0x20d PushS
	var_197_string = "attack_on"; // 0x20e PushS
	LockAnimationEnd(var_196_string, var_197_string); // 0x20f Func
	return 18; // 0x211 Return
	
Label_504:
	var_198_int = -1; // 0x1f8 PushI
	var_199_bool = var_90_int != var_198_int; // 0x1f9 Neq
	if(var_199_bool == 0) goto Label_519; // 0x1fa JumpB
	GetScene(var_93_object); // 0x1fb Func
	var_200_string = "scripted"; // 0x1fd PushS
	var_201_cvector = CVector(0.0, 0.0, 1.0); // 0x1fe PushVec
	var_202_string = "richochet.xml"; // 0x1ff PushS
	AddActorByType(var_94_object, var_200_string, var_93_object, var_91_cvector, var_201_cvector, var_202_string); // 0x200 Func
	var_203_string = "Material"; // 0x202 PushS
	SetScriptProperty(var_203_string, var_90_int); // 0x203 ObjFunc
	var_94_object = 0; // 0x205 SetNull
	var_93_object = 0; // 0x206 SetNull
}


func_1210(var_16_object)
{
	var_17_bool = 0; var_18_bool = 0; // 0x4ba PushV
	var_19_bool = var_16_object == 0; // 0x4bb NullEq
	if(var_19_bool == 0) goto Label_1214; // 0x4bc JumpB
	return 2; // 0x4bd Return
	
Label_1214:
	var_20_object = GlobalVars[0]; // 0x4be PushGE
	in(var_18_bool, var_16_object); // 0x4bf ObjFunc
	var_21_bool = var_18_bool == 0; // 0x4c1 Not
	if(var_21_bool == 0) goto Label_1222; // 0x4c2 JumpB
	var_22_object = GlobalVars[0]; // 0x4c3 PushGE
	add(var_16_object); // 0x4c4 ObjFunc
	
Label_1222:
	return 2; // 0x4c6 Return
}


func_1085(var_15_int, var_16_int)
{
	var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_bool = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0; // 0x43d PushV
	var_25_bool = var_15_int > var_16_int; // 0x43e GT
	if(var_25_bool == 0) goto Label_1092; // 0x43f JumpB
	var_26_string = "GenerateMoney: iMin > iMax"; // 0x440 PushS
	Trace(var_26_string); // 0x441 Func
	return 8; // 0x443 Return
	
Label_1092:
	var_21_int = 0; // 0x444 MovI
	var_27_bool = var_15_int != var_16_int; // 0x445 Neq
	if(var_27_bool == 0) goto Label_1099; // 0x446 JumpB
	var_28_int = var_16_int - var_15_int; // 0x447 Sub
	irand(var_22_int, var_28_int); // 0x448 Func
	goto Label_1103; // 0x44a Jump
	
Label_1103:
	var_21_int = var_21_int + var_15_int; // 0x44f Add2
	var_29_int = 0; // 0x450 PushI
	var_30_bool = var_21_int == var_29_int; // 0x451 Eq
	if(var_30_bool == 0) goto Label_1108; // 0x452 JumpB
	return 8; // 0x453 Return
	
Label_1108:
	var_31_string = "Money"; // 0x454 PushS
	GetInvItemByName(var_23_int, var_31_string); // 0x455 Func
	var_32_int = 0; // 0x457 PushI
	AddItem(var_24_bool, var_23_int, var_32_int, var_21_int); // 0x458 Func
	return 8; // 0x45a Return
	
Label_1099:
	var_33_int = 0; // 0x44b PushI
	var_34_bool = var_15_int == var_33_int; // 0x44c Eq
	if(var_34_bool == 0) goto Label_1103; // 0x44d JumpB
	return 8; // 0x44e Return
}


func_1223(var_15_object)
{
	var_16_object = Obj(); // 0x4c8 PushV
	var_16_object = var_15_object; // 0x4c9 Mov
	func_1210(var_16_object); // 0x4ca Call
	var_23_object = Obj(); var_24_bool = 0; // 0x4cc PushV
	var_23_object = var_15_object; // 0x4cd Mov
	var_24_bool = 1; // 0x4ce MovB
	func_1199(var_23_object, var_24_bool); // 0x4cf Call
	return 0; // 0x4d1 Return
}


func_1234(var_48_bool, var_49_object)
{
	var_50_bool = 0; var_51_bool = 0; // 0x4d2 PushV
	IsPlayerActor(var_49_object, var_51_bool); // 0x4d3 Func
	var_48_bool = var_51_bool; // 0x4d5 Mov
	return 2; // 0x4d6 Return
}


func_853(var_26_bool)
{
	var_28_bool = 0; var_29_bool = 0; // 0x355 PushV
	IsDead(var_29_bool); // 0x356 ObjFunc
	var_26_bool = var_29_bool; // 0x358 Mov
	return 2; // 0x359 Return
}


func_1239(var_7_bool, var_8_object)
{
	var_9_bool = 0; var_10_bool = 0; // 0x4d7 PushV
	var_11_bool = 0; var_12_object = Obj(); // 0x4d8 PushV
	var_12_object = var_8_object; // 0x4d9 Mov
	func_894(var_11_bool, var_12_object); // 0x4da Call
	var_45_bool = var_11_bool == 0; // 0x4dc Not
	if(var_45_bool == 0) goto Label_1248; // 0x4dd JumpB
	var_7_bool = 0; // 0x4de MovB
	return 2; // 0x4df Return
	
Label_1248:
	var_46_object = GlobalVars[0]; // 0x4e0 PushGE
	in(var_10_bool, var_8_object); // 0x4e1 ObjFunc
	var_47_bool = var_10_bool; // 0x4e3 Push
	if(var_47_bool == 0) goto Label_1255; // 0x4e4 JumpB
	var_7_bool = 1; // 0x4e5 MovB
	return 2; // 0x4e6 Return
	
Label_1255:
	var_48_bool = 0; var_49_object = Obj(); // 0x4e7 PushV
	var_49_object = var_8_object; // 0x4e8 Mov
	func_1234(var_48_bool, var_49_object); // 0x4e9 Call
	var_7_bool = var_48_bool; // 0x4ea Mov
	return 2; // 0x4ec Return
}


func_985()
{
	var_207_cvector = CVector(0,0,0); var_208_cvector = CVector(0,0,0); var_209_cvector = CVector(0,0,0); var_210_cvector = CVector(0,0,0); var_211_cvector = CVector(0,0,0); var_212_cvector = CVector(0,0,0); // 0x3d9 PushV
	GetPosition(var_210_cvector); // 0x3da ObjFunc
	GetPosition(var_211_cvector); // 0x3dc Func
	var_212_cvector = var_210_cvector - var_211_cvector; // 0x3de Sub2
	var_213_float = GetByIndex(var_212_cvector, 0); // 0x3df PushE
	var_214_float = GetByIndex(var_212_cvector, 2); // 0x3e0 PushE
	RotateAsync(var_213_float, var_214_float); // 0x3e1 Func
	return 6; // 0x3e3 Return
}


func_858(var_15_bool, var_16_object)
{
	var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); var_20_object = Obj(); // 0x35a PushV
	var_21_bool = var_16_object == 0; // 0x35b NullEq
	if(var_21_bool == 0) goto Label_863; // 0x35c JumpB
	var_15_bool = 0; // 0x35d MovB
	return 4; // 0x35e Return
	
Label_863:
	var_22_bool = 0; // 0x35f PushV
	var_22_bool = 0; // 0x360 MovB
	var_23_string = "IsDead"; // 0x361 PushS
	var_24_int = 1; // 0x362 PushI
	var_25_bool = IsFuncExist(var_16_object, var_23_string, var_24_int); // 0x363 FuncExist
	if(var_25_bool == 0) goto Label_875; // 0x364 JumpB
	var_26_bool = 0; var_27_object = Obj(); // 0x365 PushV
	var_27_object = var_16_object; // 0x366 Mov
	func_853(var_27_object); // 0x367 Call
	if(var_26_bool == 0) goto Label_875; // 0x369 JumpB
	var_22_bool = 1; // 0x36a MovB
	
Label_875:
	if(var_22_bool == 0) goto Label_878; // 0x36b JumpB
	var_15_bool = 0; // 0x36c MovB
	return 4; // 0x36d Return
	
Label_878:
	GetScene(var_19_object); // 0x36e Func
	var_30_bool = var_19_object == 0; // 0x370 NullEq
	if(var_30_bool == 0) goto Label_884; // 0x371 JumpB
	var_15_bool = 0; // 0x372 MovB
	return 4; // 0x373 Return
	
Label_884:
	GetScene(var_20_object); // 0x374 ObjFunc
	var_31_bool = var_19_object != var_20_object; // 0x376 Neq
	if(var_31_bool == 0) goto Label_890; // 0x377 JumpB
	var_15_bool = 0; // 0x378 MovB
	return 4; // 0x379 Return
	
Label_890:
	var_15_bool = 1; // 0x37a MovB
	return 4; // 0x37b Return
}


func_1115()
{
	var_10_int = 0; var_11_bool = 0; var_12_int = 0; var_13_bool = 0; // 0x45b PushV
	var_14_int = 0; // 0x45c PushI
	ClearSubContainer(var_14_int); // 0x45d Func
	var_15_int = 0; var_16_int = 0; // 0x45f PushV
	var_15_int = 500; // 0x460 MovI
	var_16_int = 1000; // 0x461 MovI
	func_1085(var_15_int, var_16_int); // 0x462 Call
	var_35_int = 4; // 0x464 PushI
	irand(var_12_int, var_35_int); // 0x465 Func
	var_36_int = 0; // 0x467 PushI
	var_37_bool = var_12_int != var_36_int; // 0x468 Neq
	if(var_37_bool == 0) goto Label_1137; // 0x469 JumpB
	var_38_int = 0; var_39_string = ""; // 0x46a PushV
	var_39_string = "rifle_ammo"; // 0x46b MovS
	func_1152(var_38_int, var_39_string); // 0x46c Call
	var_42_int = 0; // 0x46e PushI
	AddItem(var_13_bool, var_38_int, var_42_int, var_12_int); // 0x46f Func
	
Label_1137:
	var_43_int = 3; // 0x471 PushI
	irand(var_12_int, var_43_int); // 0x472 Func
	var_44_int = 0; // 0x474 PushI
	var_45_bool = var_12_int == var_44_int; // 0x475 Eq
	if(var_45_bool == 0) goto Label_1151; // 0x476 JumpB
	var_46_int = 0; var_47_string = ""; // 0x477 PushV
	var_47_string = "rusk"; // 0x478 MovS
	func_1152(var_46_int, var_47_string); // 0x479 Call
	var_48_int = 0; // 0x47b PushI
	var_49_int = 1; // 0x47c PushI
	AddItem(var_13_bool, var_46_int, var_48_int, var_49_int); // 0x47d Func
	
Label_1151:
	return 4; // 0x47f Return
}


func_996(var_133_float)
{
	var_135_float = 0; var_136_float = 0; var_137_float = 0; var_138_float = 0; // 0x3e4 PushV
	GetEyesHeight(var_137_float); // 0x3e5 Func
	GetEyesHeight(var_138_float); // 0x3e7 ObjFunc
	var_133_float = var_138_float - var_137_float; // 0x3e9 Sub2
	return 4; // 0x3ea Return
}


func_742()
{
	StopGroup0(); // 0x2e6 Func
	Stop(); // 0x2e8 Func
	return 0; // 0x2ea Return
}


func_747(var_167_string, var_168_int)
{
	var_169_int = 1; // 0x2ec PushI
	var_170_bool = var_168_int == var_169_int; // 0x2ed Eq
	if(var_170_bool == 0) goto Label_753; // 0x2ee JumpB
	var_167_string = "fire"; // 0x2ef MovS
	return 0; // 0x2f0 Return
	
Label_753:
	var_167_string = "phys"; // 0x2f1 MovS
	return 0; // 0x2f2 Return
}


func_1003(var_6_object)
{
	var_7_object = Obj(); var_8_object = Obj(); // 0x3eb PushV
	self(var_8_object); // 0x3ec Func
	var_6_object = var_8_object; // 0x3ee Mov
	return 2; // 0x3ef Return
}


func_1261(var_53_object)
{
	var_54_object = Obj(); // 0x4ee PushV
	var_54_object = var_53_object; // 0x4ef Mov
	func_1307(var_54_object); // 0x4f0 Call
	return 0; // 0x4f2 Return
}


func_1009(var_22_float, var_23_cvector, var_24_cvector)
{
	var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x3f1 PushV
	var_26_cvector = var_24_cvector - var_23_cvector; // 0x3f2 Sub2
	var_22_float = var_26_cvector | var_26_cvector; // 0x3f3 Or2
	return 2; // 0x3f4 Return
}


func_1267(var_8_bool, var_9_object, var_10_object)
{
	var_11_float = 0; var_12_bool = 0; var_13_float = 0; var_14_bool = 0; // 0x4f3 PushV
	var_15_bool = 0; var_16_object = Obj(); var_17_string = ""; // 0x4f4 PushV
	var_16_object = var_10_object; // 0x4f5 Mov
	var_17_string = "reputation"; // 0x4f6 MovS
	func_777(var_15_bool, var_16_object, var_17_string); // 0x4f7 Call
	var_24_bool = var_15_bool == 0; // 0x4f9 Not
	if(var_24_bool == 0) goto Label_1277; // 0x4fa JumpB
	var_8_bool = 0; // 0x4fb MovB
	return 4; // 0x4fc Return
	
Label_1277:
	var_25_string = "reputation"; // 0x4fd PushS
	GetProperty(var_25_string, var_13_float); // 0x4fe ObjFunc
	var_26_float = 0.5; // 0x500 PushF
	var_27_bool = var_13_float < var_26_float; // 0x501 LT
	if(var_27_bool == 0) goto Label_1285; // 0x502 JumpB
	var_8_bool = 0; // 0x503 MovB
	return 4; // 0x504 Return
	
Label_1285:
	CanSee(var_14_bool, var_9_object); // 0x505 Func
	var_28_bool = 0; // 0x507 PushV
	var_28_bool = 1; // 0x508 MovB
	var_29_bool = var_14_bool; // 0x509 Push
	if(var_29_bool == 0) goto Label_1299; // 0x50a JumpB
	var_30_float = 0; var_31_object = Obj(); // 0x50b PushV
	var_31_object = var_9_object; // 0x50c Mov
	func_762(var_31_object); // 0x50d Call
	var_38_float = 160000.0; // 0x50f PushF
	var_39_bool = var_30_float <= var_38_float; // 0x510 LE
	if(var_39_bool == 0) goto Label_1299; // 0x511 JumpB
	var_28_bool = 0; // 0x512 MovB
	
Label_1299:
	if(var_28_bool == 0) goto Label_1305; // 0x513 JumpB
	var_40_float = -0.2; // 0x514 PushF
	ReportReputationChange(var_9_object, var_10_object, var_40_float); // 0x515 Func
	var_8_bool = 1; // 0x517 MovB
	return 4; // 0x518 Return
	
Label_1305:
	var_8_bool = 0; // 0x519 MovB
	return 4; // 0x51a Return
}


func_755(var_95_cvector)
{
	var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); // 0x2f3 PushV
	GetPosition(var_99_cvector); // 0x2f4 Func
	GetPosition(var_100_cvector); // 0x2f6 ObjFunc
	var_95_cvector = var_100_cvector - var_99_cvector; // 0x2f8 Sub2
	return 4; // 0x2f9 Return
}


func_1013(var_175_float, var_176_float, var_177_float)
{
	var_180_bool = var_176_float < var_177_float; // 0x3f6 LT
	if(var_180_bool == 0) goto Label_1018; // 0x3f7 JumpB
	var_175_float = var_176_float; // 0x3f8 Mov
	goto Label_1019; // 0x3f9 Jump
	
Label_1019:
	return 0; // 0x3fb Return
	
Label_1018:
	var_175_float = var_177_float; // 0x3fa Mov
}


func_762(var_30_float)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); // 0x2fa PushV
	GetPosition(var_35_cvector); // 0x2fb Func
	GetPosition(var_36_cvector); // 0x2fd ObjFunc
	var_37_cvector = var_36_cvector - var_35_cvector; // 0x2ff Sub2
	var_30_float = var_37_cvector | var_37_cvector; // 0x300 Or2
	return 6; // 0x301 Return
}


func_1020(var_185_float, var_186_float, var_187_float, var_188_float)
{
	var_189_bool = var_186_float < var_187_float; // 0x3fd LT
	if(var_189_bool == 0) goto Label_1025; // 0x3fe JumpB
	var_185_float = var_187_float; // 0x3ff Mov
	return 0; // 0x400 Return
	
Label_1025:
	var_190_bool = var_186_float > var_188_float; // 0x401 GT
	if(var_190_bool == 0) goto Label_1029; // 0x402 JumpB
	var_185_float = var_188_float; // 0x403 Mov
	return 0; // 0x404 Return
	
Label_1029:
	var_185_float = var_186_float; // 0x405 Mov
	return 0; // 0x406 Return
}


func_125(var_73_string)
{
	RemoveRTEnvelope(); // 0x7e Func
	SetDeathState(); // 0x80 Func
	Stop(); // 0x82 Func
	StopAsync(); // 0x84 Func
	StopSecondaryAnimation(); // 0x86 Func
	var_74_string = "all"; // 0x88 PushS
	PlayAnimation(var_74_string, var_73_string); // 0x89 Func
	WaitForAnimEnd(); // 0x8b Func
	var_75_string = "all"; // 0x8d PushS
	LockAnimationEnd(var_75_string, var_73_string); // 0x8e Func
	RemoveEnvelope(); // 0x90 Func
	return 0; // 0x92 Return
}


func_894(var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0; // 0x37e PushV
	var_15_bool = 0; var_16_object = Obj(); // 0x37f PushV
	var_16_object = var_12_object; // 0x380 Mov
	func_858(var_15_bool, var_16_object); // 0x381 Call
	var_32_bool = var_15_bool == 0; // 0x383 Not
	if(var_32_bool == 0) goto Label_903; // 0x384 JumpB
	var_11_bool = 0; // 0x385 MovB
	return 2; // 0x386 Return
	
Label_903:
	var_33_bool = 0; var_34_object = Obj(); var_35_string = ""; // 0x387 PushV
	var_34_object = var_12_object; // 0x388 Mov
	var_35_string = "noaccess"; // 0x389 MovS
	func_777(var_33_bool, var_34_object, var_35_string); // 0x38a Call
	var_42_bool = var_33_bool == 0; // 0x38c Not
	if(var_42_bool == 0) goto Label_912; // 0x38d JumpB
	var_11_bool = 1; // 0x38e MovB
	return 2; // 0x38f Return
	
Label_912:
	var_43_string = "noaccess"; // 0x390 PushS
	GetProperty(var_43_string, var_14_int); // 0x391 ObjFunc
	var_44_int = 0; // 0x393 PushI
	var_11_bool = var_14_int == var_44_int; // 0x394 Eq2
	return 2; // 0x395 Return
}


