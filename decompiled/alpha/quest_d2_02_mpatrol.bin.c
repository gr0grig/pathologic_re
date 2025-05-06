task_1_event_7(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_int, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_cvector, var_14_cvector)
{
	var_15_int = 0; // 0x267 PushI
	var_16_bool = var_14_cvector != var_15_int; // 0x268 Neq
	if(var_16_bool == 0) goto Label_619; // 0x269 JumpB
	return 0; // 0x26a Return
	
Label_619:
	var_17_bool = 0; var_18_object = Obj(); // 0x26b PushV
	var_18_object = var_1_int; // 0x26c MovT
	func_652(var_17_bool, var_18_object); // 0x26d Call
	var_53_bool = var_17_bool == 0; // 0x26f Not
	if(var_53_bool == 0) goto Label_626; // 0x270 JumpB
	var_0_object = 1; // 0x271 TMovB
	
Label_626:
	var_54_int = 0; // 0x272 PushI
	KillTimer(var_54_int); // 0x273 Func
	Stop(); // 0x275 Func
	return 0; // 0x277 Return
}


task_1_event_10(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_cvector, var_14_cvector)
{
	RequestClearPath(var_14_cvector); // 0x279 Func
	return 0; // 0x27b Return
}


task_1_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_cvector, var_14_cvector)
{
	func_636(var_14_cvector); // 0x285 Call
	var_16_object = Obj(); // 0x287 PushV
	var_16_object = var_14_cvector; // 0x288 Mov
	func_1547(); // 0x289 Call
	return 0; // 0x28b Return
}


task_2_event_0(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_cvector, var_14_cvector)
{
	var_15_bool = 0; var_16_bool = 0; // 0x2a4 PushV
	IsOverrideActive(var_16_bool); // 0x2a5 Func
	var_17_bool = var_16_bool == 0; // 0x2a7 Not
	if(var_17_bool == 0) goto Label_683; // 0x2a8 JumpB
	WorkWithCorpse(var_14_cvector); // 0x2a9 Func
	
Label_683:
	return 2; // 0x2ab Return
}


task_2_event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_float, var_10_float, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_cvector, var_17_cvector)
{
	return 0; // 0x31a Return
}


task_2_event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_string, var_9_object, var_10_object, var_11_object, var_12_string, var_13_bool, var_14_cvector, var_15_cvector)
{
	return 0; // 0x31c Return
}


task_2_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_cvector, var_14_cvector)
{
	return 0; // 0x31e Return
}


task_4_event_11(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_int, var_13_int, var_14_cvector, var_15_cvector)
{
	var_16_int = 1; // 0x3a9 PushI
	if(var_16_int == 0) goto Label_993; // 0x3aa JumpB
	func_1434(); // 0x3ac Call
	var_18_int = 8305; // 0x3ae PushI
	var_19_bool = var_15_cvector == var_18_int; // 0x3af Eq
	if(var_19_bool == 0) goto Label_950; // 0x3b0 JumpB
	var_20_object = Obj(); var_21_object = Obj(); // 0x3b1 PushV
	var_20_object = var_1_int; // 0x3b2 MovT
	var_21_object = var_0_object; // 0x3b3 MovT
	func_1553(); // 0x3b4 Call
	
Label_950:
	var_28_int = 8306; // 0x3b6 PushI
	var_29_bool = var_15_cvector == var_28_int; // 0x3b7 Eq
	if(var_29_bool == 0) goto Label_958; // 0x3b8 JumpB
	var_30_object = Obj(); var_31_object = Obj(); // 0x3b9 PushV
	var_30_object = var_1_int; // 0x3ba MovT
	var_31_object = var_0_object; // 0x3bb MovT
	func_1560(); // 0x3bc Call
	
Label_958:
	var_35_int = 8304; // 0x3be PushI
	var_36_bool = var_14_cvector == var_35_int; // 0x3bf Eq
	if(var_36_bool == 0) goto Label_981; // 0x3c0 JumpB
	var_37_string = ""; // 0x3c1 PushV
	var_37_string = "Neutral"; // 0x3c2 MovS
	func_920(var_15_cvector, var_37_string); // 0x3c3 Call
	var_52_int = 7522; // 0x3c5 PushI
	SetMessage(var_52_int); // 0x3c6 TObjFunc
	ClearReplies(); // 0x3c8 TObjFunc
	var_53_int = 7523; // 0x3ca PushI
	var_54_int = -1; // 0x3cb PushI
	var_55_int = 8305; // 0x3cc PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0x3cd TObjFunc
	var_56_int = 7524; // 0x3cf PushI
	var_57_int = -1; // 0x3d0 PushI
	var_58_int = 8306; // 0x3d1 PushI
	AddReply(var_56_int, var_57_int, var_58_int); // 0x3d2 TObjFunc
	return 0; // 0x3d4 Return
	
Label_981:
	var_3_bool = 1; // 0x3d5 TMovB
	var_59_bool = 0; // 0x3d6 PushV
	func_1588(var_59_bool); // 0x3d7 Call
	if(var_59_bool == 0) goto Label_989; // 0x3d9 JumpB
	lshStopAnimation(); // 0x3da Func
	goto Label_991; // 0x3dc Jump
	
Label_991:
	return 0; // 0x3df Return
	
Label_989:
	StopAnimation(); // 0x3dd Func
	
Label_993:
	return 0; // 0x3e1 Return
}


task_5_event_0(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_cvector, var_14_object)
{
	var_15_bool = 0; // 0x400 PushV
	func_1012(var_15_bool); // 0x401 Call
	if(var_15_bool == 0) goto Label_1035; // 0x403 JumpB
	func_1124(); // 0x405 Call
	var_17_object = Obj(); // 0x407 PushV
	var_17_object = var_14_object; // 0x408 Mov
	func_1001(var_17_object); // 0x409 Call
	
Label_1035:
	return 0; // 0x40b Return
}


task_5_event_26(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_cvector, var_14_string)
{
	var_15_string = "kill_player"; // 0x40d PushS
	var_16_bool = var_14_string == var_15_string; // 0x40e Eq
	if(var_16_bool == 0) goto Label_1045; // 0x40f JumpB
	TaskCall(0); // 0x411 TaskCall
	func_0(); // 0x412 Call
	TaskReturn(); // 0x413 TaskReturn
	
Label_1045:
	return 0; // 0x415 Return
}


event_17(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_cvector, var_14_object)
{
	var_15_bool = 0; var_16_bool = 0; // 0x5cd PushV
	var_17_bool = GlobalVars[0]; // 0x5ce PushGE
	if(var_17_bool == 0) goto Label_1489; // 0x5cf JumpB
	return 2; // 0x5d0 Return
	
Label_1489:
	IsPlayerActor(var_14_object, var_16_bool); // 0x5d1 Func
	var_18_bool = var_16_bool; // 0x5d3 Push
	if(var_18_bool == 0) goto Label_1501; // 0x5d4 JumpB
	var_19_bool = GlobalVars[0]; // 0x5d5 PushGE
	var_19_bool = 1; // 0x5d6 MovB
	GlobalVars[0] = var_19_bool; // 0x5d7 PopGE
	var_20_bool = 0; var_21_string = ""; var_22_string = ""; // 0x5d8 PushV
	var_21_string = "quest_d2_02"; // 0x5d9 MovS
	var_22_string = "player_attack"; // 0x5da MovS
	func_1473(var_20_bool, var_21_string, var_22_string); // 0x5db Call
	
Label_1501:
	return 2; // 0x5dd Return
}


event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_cvector)
{
	var_14_bool = 0; var_15_string = ""; var_16_string = ""; // 0x5de PushV
	var_15_string = "quest_d2_02"; // 0x5df MovS
	var_16_string = "mpatrol_unload"; // 0x5e0 MovS
	func_1473(var_14_bool, var_15_string, var_16_string); // 0x5e1 Call
	return 0; // 0x5e3 Return
}


event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_cvector, var_14_object, var_15_int, var_16_float, var_17_float)
{
	var_18_object = Obj(); var_19_int = 0; var_20_float = 0; // 0x5f7 PushV
	var_18_object = var_14_object; // 0x5f8 Mov
	var_19_int = var_15_int; // 0x5f9 Mov
	var_20_float = var_16_float; // 0x5fa Mov
	func_1278(var_19_int, var_20_float); // 0x5fb Call
	return 0; // 0x5fd Return
}


event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_cvector, var_14_object, var_15_string)
{
	var_16_float = 0; var_17_float = 0; // 0x5fe PushV
	var_18_string = "health"; // 0x5ff PushS
	var_19_bool = var_15_string == var_18_string; // 0x600 Eq
	if(var_19_bool == 0) goto Label_1546; // 0x601 JumpB
	var_20_string = "health"; // 0x602 PushS
	GetProperty(var_20_string, var_17_float); // 0x603 Func
	var_21_int = 0; // 0x605 PushI
	var_22_bool = var_17_float <= var_21_int; // 0x606 LE
	if(var_22_bool == 0) goto Label_1546; // 0x607 JumpB
	SignalDeath(var_14_object); // 0x608 Func
	
Label_1546:
	return 2; // 0x60a Return
}


event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_cvector, var_14_object)
{
	var_15_object = Obj(); // 0x60c PushV
	var_15_object = var_14_object; // 0x60d Mov
	func_1508(var_15_object); // 0x60e Call
	return 0; // 0x610 Return
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_cvector)
{
	var_14_bool = GlobalVars[2]; // 0x3e2 PushGE
	var_14_bool = 0; // 0x3e3 MovB
	GlobalVars[2] = var_14_bool; // 0x3e4 PopGE
	func_1015(); // 0x3e6 Call
	return 0; // 0x3e8 Return
}


func_512(var_0_object, var_1_int, var_109_bool, var_110_object, var_111_float, var_112_float, var_113_bool, var_114_bool)
{
	var_117_bool = 0; var_118_bool = 0; var_119_object = Obj(); var_120_cvector = CVector(0,0,0); var_121_cvector = CVector(0,0,0); var_122_cvector = CVector(0,0,0); var_123_float = 0; var_124_object = Obj(); var_125_bool = 0; var_126_bool = 0; var_127_object = Obj(); var_128_cvector = CVector(0,0,0); var_129_cvector = CVector(0,0,0); var_130_cvector = CVector(0,0,0); var_131_float = 0; var_132_object = Obj(); // 0x200 PushV
	var_0_object = 0; // 0x201 TMovB
	var_1_int = var_110_object; // 0x202 TMov
	var_126_bool = var_114_bool; // 0x203 Mov
	
Label_516:
	var_133_bool = 0; var_134_object = Obj(); // 0x204 PushV
	var_134_object = var_110_object; // 0x205 Mov
	func_652(var_133_bool, var_134_object); // 0x206 Call
	var_137_bool = var_133_bool == 0; // 0x208 Not
	if(var_137_bool == 0) goto Label_524; // 0x209 JumpB
	var_109_bool = 0; // 0x20a MovB
	return 16; // 0x20b Return
	
Label_524:
	GetPosition(var_128_cvector); // 0x20c ObjFunc
	GetPosition(var_129_cvector); // 0x20e Func
	var_130_cvector = var_128_cvector - var_129_cvector; // 0x210 Sub2
	var_131_float = var_130_cvector | var_130_cvector; // 0x211 Or2
	var_138_bool = 0; // 0x212 PushV
	var_138_bool = 0; // 0x213 MovB
	var_139_int = 0; // 0x214 PushI
	var_140_bool = var_112_float > var_139_int; // 0x215 GT
	if(var_140_bool == 0) goto Label_539; // 0x216 JumpB
	var_141_float = var_112_float * var_112_float; // 0x217 Mult
	var_142_bool = var_131_float > var_141_float; // 0x218 GT
	if(var_142_bool == 0) goto Label_539; // 0x219 JumpB
	var_138_bool = 1; // 0x21a MovB
	
Label_539:
	if(var_138_bool == 0) goto Label_544; // 0x21b JumpB
	Stop(); // 0x21c Func
	var_109_bool = 0; // 0x21e MovB
	return 16; // 0x21f Return
	
Label_544:
	var_143_float = var_111_float * var_111_float; // 0x220 Mult
	var_144_bool = var_131_float > var_143_float; // 0x221 GT
	if(var_144_bool == 0) goto Label_606; // 0x222 JumpB
	GetPFPosition(var_128_cvector); // 0x223 ObjFunc
	FindPathTo(var_132_object, var_128_cvector); // 0x225 Func
	var_145_bool = var_132_object != 0; // 0x227 NullNeq
	if(var_145_bool == 0) goto Label_555; // 0x228 JumpB
	var_127_object = var_132_object; // 0x229 Mov
	var_132_object = 0; // 0x22a SetNull
	
Label_555:
	var_146_bool = var_127_object != 0; // 0x22b NullNeq
	if(var_146_bool == 0) goto Label_588; // 0x22c JumpB
	var_147_bool = var_126_bool; // 0x22d Push
	if(var_147_bool == 0) goto Label_565; // 0x22e JumpB
	var_126_bool = 0; // 0x22f MovB
	RotatePath(var_127_object, var_125_bool); // 0x230 Func
	var_148_bool = var_125_bool == 0; // 0x232 Not
	if(var_148_bool == 0) goto Label_565; // 0x233 JumpB
	goto Label_612; // 0x234 Jump
	
Label_612:
	var_109_bool = !var_0_object; // 0x264 Not2
	return 16; // 0x265 Return
	
Label_565:
	var_149_int = 0; // 0x235 PushI
	var_150_float = 0.3; // 0x236 PushF
	SetTimer(var_149_int, var_150_float); // 0x237 Func
	var_151_string = ""; // 0x239 PushV
	func_659(var_151_string); // 0x23a Call
	var_152_string = ""; // 0x23c PushV
	func_661(var_152_string); // 0x23d Call
	FollowPath(var_127_object, var_113_bool, var_125_bool, var_151_string, var_152_string); // 0x23f Func
	var_153_bool = var_125_bool == 0; // 0x241 Not
	if(var_153_bool == 0) goto Label_586; // 0x242 JumpB
	var_154_object = var_0_object; // 0x243 PushT
	if(var_154_object == 0) goto Label_584; // 0x244 JumpB
	var_127_object = 0; // 0x245 SetNull
	goto Label_612; // 0x246 Jump
	
Label_584:
	goto Label_611; // 0x248 Jump
	
Label_611:
	goto Label_516; // 0x263 Jump
	
Label_586:
	var_127_object = 0; // 0x24a SetNull
	goto Label_604; // 0x24b Jump
	
Label_604:
	var_132_object = 0; // 0x25c SetNull
	goto Label_610; // 0x25d Jump
	
Label_610:
	var_127_object = 0; // 0x262 SetNull
	
Label_588:
	var_155_int = 0; // 0x24c PushI
	KillTimer(var_155_int); // 0x24d Func
	var_156_float = 0.5; // 0x24f PushF
	Sleep(var_156_float, var_125_bool); // 0x250 Func
	var_157_bool = var_125_bool == 0; // 0x252 Not
	if(var_157_bool == 0) goto Label_600; // 0x253 JumpB
	var_158_object = var_0_object; // 0x254 PushT
	if(var_158_object == 0) goto Label_600; // 0x255 JumpB
	var_127_object = 0; // 0x256 SetNull
	goto Label_612; // 0x257 Jump
	
Label_600:
	var_159_int = 0; // 0x258 PushI
	var_160_float = 0.3; // 0x259 PushF
	SetTimer(var_159_int, var_160_float); // 0x25a Func
	
Label_606:
	var_161_int = 0; // 0x25e PushI
	KillTimer(var_161_int); // 0x25f Func
	goto Label_612; // 0x261 Jump
}


func_0()
{
	var_22_object = Obj(); var_23_object = Obj(); // 0x0 PushV
	var_24_string = "player"; // 0x1 PushS
	FindActor(var_23_object, var_24_string); // 0x2 Func
	var_25_bool = var_23_object == 0; // 0x4 Not
	if(var_25_bool == 0) goto Label_7; // 0x5 JumpB
	return 2; // 0x6 Return
	
Label_7:
	var_26_object = Obj(); var_27_bool = 0; var_28_float = 0; // 0x7 PushV
	var_26_object = var_23_object; // 0x8 Mov
	var_27_bool = 1; // 0x9 MovB
	var_28_float = 180.0; // 0xa MovF
	func_21(var_18_int, var_19_int, var_20_bool, var_21_int, var_22_object, var_23_object, var_26_object, var_27_bool, var_28_float); // 0xb Call
	return 2; // 0xd Return
}


func_636(var_0_object)
{
	var_0_object = 1; // 0x27c TMovB
	var_15_int = 0; // 0x27d PushI
	KillTimer(var_15_int); // 0x27e Func
	Stop(); // 0x280 Func
	return 0; // 0x282 Return
}


func_771(var_47_string)
{
	RemoveRTEnvelope(); // 0x304 Func
	SetDeathState(); // 0x306 Func
	Stop(); // 0x308 Func
	StopAsync(); // 0x30a Func
	StopSecondaryAnimation(); // 0x30c Func
	var_48_string = "all"; // 0x30e PushS
	PlayAnimation(var_48_string, var_47_string); // 0x30f Func
	WaitForAnimEnd(); // 0x311 Func
	var_49_string = "all"; // 0x313 PushS
	LockAnimationEnd(var_49_string, var_47_string); // 0x314 Func
	RemoveEnvelope(); // 0x316 Func
	return 0; // 0x318 Return
}


func_1412()
{
	CameraSwitchToNormal(); // 0x585 Func
	return 0; // 0x587 Return
}


func_1416(var_92_string)
{
	var_93_float = 0; var_94_float = 0; var_95_float = 0; var_96_float = 0; // 0x588 PushV
	var_97_string = "playing "; // 0x589 PushS
	var_98_int = var_97_string + var_92_string; // 0x58a Add
	Trace(var_98_int); // 0x58b Func
	lshGetAnimTimes(var_92_string, var_95_float, var_96_float); // 0x58d Func
	lshPlayAnimation(var_95_float, var_96_float); // 0x58f Func
	var_99_string = "start: "; // 0x591 PushS
	var_100_int = var_99_string + var_95_float; // 0x592 Add
	Trace(var_100_int); // 0x593 Func
	var_101_string = "end: "; // 0x595 PushS
	var_102_int = var_101_string + var_96_float; // 0x596 Add
	Trace(var_102_int); // 0x597 Func
	return 4; // 0x599 Return
}


func_265(var_0_object, var_236_bool, var_237_float)
{
	var_238_int = 0; var_239_bool = 0; var_240_int = 0; var_241_bool = 0; // 0x109 PushV
	irand(var_240_int, var_241_bool); // 0x10a Func
	var_242_int = 1; // 0x10c PushI
	var_240_int = var_240_int + var_242_int; // 0x10d Add2
	Face(var_0_object); // 0x10e Func
	var_243_bool = 1; // 0x110 PushB
	SetAttackState(var_243_bool); // 0x111 Func
	var_244_string = "all"; // 0x113 PushS
	var_245_string = "attack_begin"; // 0x114 PushS
	var_246_int = var_245_string + var_240_int; // 0x115 Add
	PlayAnimation(var_244_string, var_246_int); // 0x116 Func
	WaitForAnimEnd(); // 0x118 Func
	func_472(var_240_int, var_241_bool); // 0x11b Call
	var_262_bool = 0; var_263_object = Obj(); // 0x11d PushV
	var_263_object = var_0_object; // 0x11e MovT
	func_1254(var_262_bool, var_263_object); // 0x11f Call
	var_264_bool = var_262_bool == 0; // 0x121 Not
	if(var_264_bool == 0) goto Label_295; // 0x122 JumpB
	StopAsync(); // 0x123 Func
	var_236_bool = 0; // 0x125 MovB
	return 4; // 0x126 Return
	
Label_295:
	var_265_float = 0; var_266_int = 0; // 0x127 PushV
	var_265_float = var_237_float; // 0x128 Mov
	var_266_int = var_240_int; // 0x129 Mov
	func_226(var_241_bool, var_265_float, var_266_int); // 0x12a Call
	var_335_string = "all"; // 0x12c PushS
	var_336_string = "attack_middle"; // 0x12d PushS
	var_337_int = var_336_string + var_240_int; // 0x12e Add
	HasAnimation(var_241_bool, var_335_string, var_337_int); // 0x12f Func
	var_338_bool = var_241_bool; // 0x131 Push
	if(var_338_bool == 0) goto Label_329; // 0x132 JumpB
	var_339_string = "all"; // 0x133 PushS
	var_340_string = "attack_middle"; // 0x134 PushS
	var_341_int = var_340_string + var_240_int; // 0x135 Add
	PlayAnimation(var_339_string, var_341_int); // 0x136 Func
	WaitForAnimEnd(); // 0x138 Func
	var_342_bool = 0; var_343_object = Obj(); // 0x13a PushV
	var_343_object = var_0_object; // 0x13b MovT
	func_1254(var_342_bool, var_343_object); // 0x13c Call
	var_344_bool = var_342_bool == 0; // 0x13e Not
	if(var_344_bool == 0) goto Label_324; // 0x13f JumpB
	StopAsync(); // 0x140 Func
	var_236_bool = 0; // 0x142 MovB
	return 4; // 0x143 Return
	
Label_324:
	var_345_float = 0; var_346_int = 0; // 0x144 PushV
	var_345_float = var_237_float; // 0x145 Mov
	var_346_int = var_240_int; // 0x146 Mov
	func_226(var_241_bool, var_345_float, var_346_int); // 0x147 Call
	
Label_329:
	var_347_bool = 0; // 0x149 PushB
	SetAttackState(var_347_bool); // 0x14a Func
	var_348_string = "all"; // 0x14c PushS
	var_349_string = "attack_end"; // 0x14d PushS
	var_350_int = var_349_string + var_240_int; // 0x14e Add
	PlayAnimation(var_348_string, var_350_int); // 0x14f Func
	var_351_bool = 0; var_352_float = 0; // 0x151 PushV
	var_352_float = 0.75; // 0x152 MovF
	func_345(var_351_bool, var_352_float); // 0x153 Call
	StopAsync(); // 0x155 Func
	var_236_bool = 1; // 0x157 MovB
	return 4; // 0x158 Return
}


func_652(var_133_bool, var_134_object)
{
	var_135_bool = 0; var_136_object = Obj(); // 0x28d PushV
	var_136_object = var_134_object; // 0x28e Mov
	func_1254(var_135_bool, var_136_object); // 0x28f Call
	var_133_bool = var_135_bool; // 0x290 Mov
	return 0; // 0x292 Return
}


func_15(var_276_float)
{
	var_276_float = 0.3; // 0x10 MovF
	return 0; // 0x11 Return
}


func_1553()
{
	var_22_bool = 0; var_23_string = ""; var_24_string = ""; // 0x612 PushV
	var_23_string = "quest_d2_02"; // 0x613 MovS
	var_24_string = "player_attack"; // 0x614 MovS
	func_1473(var_22_bool, var_23_string, var_24_string); // 0x615 Call
	return 0; // 0x617 Return
}


func_18(var_283_int)
{
	var_283_int = 0; // 0x13 MovI
	return 0; // 0x14 Return
}


func_659(var_151_string)
{
	var_151_string = "walk"; // 0x293 MovS
	return 0; // 0x294 Return
}


func_21(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_26_object, var_27_bool, var_28_float, var_115_bool)
{
	var_29_bool = 0; var_30_bool = 0; var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0; var_35_bool = 0; var_36_cvector = CVector(0,0,0); var_37_float = 0; var_38_float = 0; var_39_bool = 0; var_40_bool = 0; var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; var_46_cvector = CVector(0,0,0); var_47_float = 0; var_48_float = 0; // 0x15 PushV
	var_1_int = 0; // 0x16 TMovI
	
Label_23:
	var_49_string = "all"; // 0x17 PushS
	var_50_string = "attack_begin"; // 0x18 PushS
	var_51_int = 1; // 0x19 PushI
	var_52_int = var_1_int + var_51_int; // 0x1a Add
	var_53_int = var_50_string + var_52_int; // 0x1b Add
	HasAnimation(var_39_bool, var_49_string, var_53_int); // 0x1c Func
	var_54_bool = var_39_bool == 0; // 0x1e Not
	if(var_54_bool == 0) goto Label_33; // 0x1f JumpB
	goto Label_36; // 0x20 Jump
	
Label_36:
	var_2_int = 0; // 0x24 TMovI
	
Label_37:
	var_55_string = "attack"; // 0x25 PushS
	var_56_int = 1; // 0x26 PushI
	var_57_int = var_2_int + var_56_int; // 0x27 Add
	var_58_int = var_55_string + var_57_int; // 0x28 Add
	IsExisting3DSound(var_40_bool, var_58_int); // 0x29 Func
	var_59_bool = var_40_bool == 0; // 0x2b Not
	if(var_59_bool == 0) goto Label_46; // 0x2c JumpB
	goto Label_49; // 0x2d Jump
	
Label_49:
	var_4_int = 0; // 0x31 TMovI
	var_60_string = "@GetAttackDistance"; // 0x32 PushS
	var_61_int = 1; // 0x33 PushI
	var_62_bool = IsFuncExist(var_26_object, var_60_string, var_61_int); // 0x34 FuncExist
	if(var_62_bool == 0) goto Label_59; // 0x35 JumpB
	GetAttackDistance(var_41_float); // 0x36 ObjFunc
	var_63_int = 50; // 0x38 PushI
	var_41_float = var_41_float + var_63_int; // 0x39 Add2
	goto Label_60; // 0x3a Jump
	
Label_60:
	var_64_int = 150; // 0x3c PushI
	var_65_bool = var_41_float >= var_64_int; // 0x3d GE
	if(var_65_bool == 0) goto Label_64; // 0x3e JumpB
	var_41_float = 150; // 0x3f MovI
	
Label_64:
	var_3_bool = 0; // 0x40 TMovB
	var_0_object = var_26_object; // 0x41 TMov
	IsPlayerActor(var_0_object, var_44_bool); // 0x42 Func
	var_66_bool = var_27_bool; // 0x44 Push
	if(var_66_bool == 0) goto Label_72; // 0x45 JumpB
	var_45_bool = 0; // 0x46 MovB
	goto Label_73; // 0x47 Jump
	
Label_73:
	var_67_bool = 0; // 0x49 PushV
	var_67_bool = 0; // 0x4a MovB
	var_68_bool = 0; var_69_object = Obj(); // 0x4b PushV
	var_69_object = var_0_object; // 0x4c MovT
	func_1254(var_68_bool, var_69_object); // 0x4d Call
	if(var_68_bool == 0) goto Label_83; // 0x4f JumpB
	var_102_bool = var_3_bool == 0; // 0x50 Not
	if(var_102_bool == 0) goto Label_83; // 0x51 JumpB
	var_67_bool = 1; // 0x52 MovB
	
Label_83:
	if(var_67_bool == 0) goto Label_209; // 0x53 JumpB
	GetPFPosition(var_42_cvector); // 0x54 TObjFunc
	GetPFPosition(var_43_cvector); // 0x56 Func
	var_46_cvector = var_42_cvector - var_43_cvector; // 0x58 Sub2
	var_47_float = var_46_cvector | var_46_cvector; // 0x59 Or2
	var_103_float = 400.0; // 0x5a PushF
	var_104_int = var_103_float + var_41_float; // 0x5b Add
	var_105_float = 400.0; // 0x5c PushF
	var_106_int = var_105_float + var_41_float; // 0x5d Add
	var_107_float = var_104_int * var_106_int; // 0x5e Mult
	var_108_bool = var_47_float >= var_107_float; // 0x5f GE
	if(var_108_bool == 0) goto Label_112; // 0x60 JumpB
	var_109_bool = 0; var_110_object = Obj(); var_111_float = 0; var_112_float = 0; var_113_bool = 0; var_114_bool = 0; // 0x61 PushV
	var_110_object = var_0_object; // 0x62 MovT
	var_111_float = var_41_float; // 0x63 Mov
	var_112_float = 10000.0; // 0x64 MovF
	var_113_bool = 1; // 0x65 MovB
	var_114_bool = 0; // 0x66 MovB
	TaskCall(1); // 0x67 TaskCall
	func_512(var_115_bool, var_116_object, var_109_bool, var_110_object, var_111_float, var_112_float, var_113_bool, var_114_bool); // 0x68 Call
	TaskReturn(); // 0x69 TaskReturn
	var_162_bool = var_115_bool == 0; // 0x6b Not
	if(var_162_bool == 0) goto Label_110; // 0x6c JumpB
	goto Label_209; // 0x6d Jump
	
Label_209:
	WaitForAnimEnd(); // 0xd1 Func
	var_163_bool = var_3_bool; // 0xd3 PushT
	if(var_163_bool == 0) goto Label_214; // 0xd4 JumpB
	return 20; // 0xd5 Return
	
Label_214:
	var_164_string = "all"; // 0xd6 PushS
	var_165_string = "attack_off"; // 0xd7 PushS
	PlayAnimation(var_164_string, var_165_string); // 0xd8 Func
	WaitForAnimEnd(); // 0xda Func
	var_166_bool = var_44_bool; // 0xdc Push
	if(var_166_bool == 0) goto Label_225; // 0xdd JumpB
	var_167_float = 2.0; // 0xde PushF
	Sleep(var_167_float); // 0xdf Func
	
Label_225:
	return 20; // 0xe1 Return
	
Label_110:
	var_45_bool = 0; // 0x6e MovB
	goto Label_208; // 0x6f Jump
	
Label_208:
	goto Label_73; // 0xd0 Jump
	
Label_112:
	var_168_float = var_28_float * var_28_float; // 0x70 Mult
	var_169_bool = var_47_float >= var_168_float; // 0x71 GE
	if(var_169_bool == 0) goto Label_200; // 0x72 JumpB
	var_170_bool = var_45_bool == 0; // 0x73 Not
	if(var_170_bool == 0) goto Label_130; // 0x74 JumpB
	var_171_object = Obj(); // 0x75 PushV
	var_171_object = var_0_object; // 0x76 MovT
	func_1345(); // 0x77 Call
	var_180_string = "all"; // 0x79 PushS
	var_181_string = "attack_on"; // 0x7a PushS
	PlayAnimation(var_180_string, var_181_string); // 0x7b Func
	WaitForAnimEnd(); // 0x7d Func
	StopAsync(); // 0x7f Func
	var_45_bool = 1; // 0x81 MovB
	
Label_130:
	rand(var_48_float); // 0x82 Func
	var_182_bool = 0; // 0x84 PushV
	var_182_bool = 1; // 0x85 MovB
	var_183_float = 0.6; // 0x86 PushF
	var_184_bool = var_48_float < var_183_float; // 0x87 LT
	if(var_184_bool == 0) goto Label_142; // 0x88 JumpB
	var_185_bool = 0; // 0x89 PushV
	func_461(var_182_bool, var_185_bool); // 0x8a Call
	if(var_185_bool == 0) goto Label_142; // 0x8c JumpB
	var_182_bool = 0; // 0x8d MovB
	
Label_142:
	if(var_182_bool == 0) goto Label_156; // 0x8e JumpB
	Face(var_0_object); // 0x8f Func
	var_191_string = "all"; // 0x91 PushS
	var_192_string = "attack_stay"; // 0x92 PushS
	PlayAnimation(var_191_string, var_192_string); // 0x93 Func
	var_193_bool = 0; var_194_float = 0; // 0x95 PushV
	var_194_float = var_28_float; // 0x96 Mov
	func_369(var_48_float, var_193_bool, var_194_float); // 0x97 Call
	StopAsync(); // 0x99 Func
	goto Label_199; // 0x9b Jump
	
Label_199:
	goto Label_208; // 0xc7 Jump
	
Label_156:
	Face(var_0_object); // 0x9c Func
	var_360_string = "all"; // 0x9e PushS
	var_361_string = "fjump"; // 0x9f PushS
	PlayAnimation(var_360_string, var_361_string); // 0xa0 Func
	WaitForAnimEnd(); // 0xa2 Func
	var_362_cvector = CVector(0.0, 0.0, 0.0); // 0xa4 PushVec
	SetSpeed(var_362_cvector); // 0xa5 Func
	Stop(); // 0xa7 Func
	StopAsync(); // 0xa9 Func
	var_363_bool = 0; // 0xab PushV
	func_461(var_48_float, var_363_bool); // 0xac Call
	var_364_bool = var_363_bool == 0; // 0xae Not
	if(var_364_bool == 0) goto Label_199; // 0xaf JumpB
	var_365_bool = 0; var_366_object = Obj(); // 0xb0 PushV
	var_366_object = var_0_object; // 0xb1 MovT
	func_1254(var_365_bool, var_366_object); // 0xb2 Call
	var_367_bool = var_365_bool == 0; // 0xb4 Not
	if(var_367_bool == 0) goto Label_183; // 0xb5 JumpB
	goto Label_209; // 0xb6 Jump
	
Label_183:
	GetPFPosition(var_42_cvector); // 0xb7 TObjFunc
	GetPFPosition(var_43_cvector); // 0xb9 Func
	var_46_cvector = var_42_cvector - var_43_cvector; // 0xbb Sub2
	var_47_float = var_46_cvector | var_46_cvector; // 0xbc Or2
	var_368_float = var_28_float * var_28_float; // 0xbd Mult
	var_369_bool = var_47_float < var_368_float; // 0xbe LT
	if(var_369_bool == 0) goto Label_199; // 0xbf JumpB
	var_370_bool = 0; var_371_float = 0; // 0xc0 PushV
	var_371_float = var_28_float; // 0xc1 Mov
	func_265(var_48_float, var_370_bool, var_371_float); // 0xc2 Call
	var_372_bool = var_370_bool == 0; // 0xc4 Not
	if(var_372_bool == 0) goto Label_199; // 0xc5 JumpB
	goto Label_209; // 0xc6 Jump
	
Label_200:
	var_373_bool = 0; var_374_float = 0; // 0xc8 PushV
	var_374_float = var_28_float; // 0xc9 Mov
	func_265(var_48_float, var_373_bool, var_374_float); // 0xca Call
	var_375_bool = var_373_bool == 0; // 0xcc Not
	if(var_375_bool == 0) goto Label_207; // 0xcd JumpB
	goto Label_209; // 0xce Jump
	
Label_207:
	var_45_bool = 1; // 0xcf MovB
	
Label_72:
	var_45_bool = 1; // 0x48 MovB
	
Label_59:
	var_41_float = var_28_float; // 0x3b Mov
	
Label_46:
	var_376_int = 1; // 0x2e PushI
	var_2_int = var_2_int + var_376_int; // 0x2f Add2
	goto Label_37; // 0x30 Jump
	
Label_33:
	var_377_int = 1; // 0x21 PushI
	var_1_int = var_1_int + var_377_int; // 0x22 Add2
	goto Label_23; // 0x23 Jump
}


func_661(var_152_string)
{
	var_152_string = "run"; // 0x295 MovS
	return 0; // 0x296 Return
}


func_1046(var_0_object, var_1_int)
{
	var_16_int = 0; var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_object = Obj(); var_20_int = 0; var_21_bool = 0; var_22_cvector = CVector(0,0,0); var_23_object = Obj(); // 0x416 PushV
	GetPFPosition(var_23_object); // 0x417 Func
	GetDirection(var_0_object); // 0x419 Func
	
Label_1051:
	var_24_int = 60; // 0x41b PushI
	irand(var_20_int, var_24_int); // 0x41c Func
	var_25_int = 30; // 0x41e PushI
	var_26_int = var_20_int + var_25_int; // 0x41f Add
	Sleep(var_26_int, var_21_bool); // 0x420 Func
	var_27_bool = var_21_bool; // 0x422 Push
	if(var_27_bool == 0) goto Label_1064; // 0x423 JumpB
	func_1022(); // 0x425 Call
	goto Label_1122; // 0x427 Jump
	
Label_1122:
	goto Label_1051; // 0x462 Jump
	
Label_1064:
	GetPFPosition(var_22_cvector); // 0x428 Func
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); // 0x42a PushV
	var_29_cvector = var_1_int; // 0x42b MovT
	var_30_cvector = var_22_cvector; // 0x42c Mov
	func_1451(var_28_float, var_29_cvector, var_30_cvector); // 0x42d Call
	var_33_int = 40000; // 0x42f PushI
	var_34_bool = var_28_float > var_33_int; // 0x430 GT
	if(var_34_bool == 0) goto Label_1108; // 0x431 JumpB
	FindPathTo(var_23_object, var_23_object); // 0x432 Func
	var_35_bool = var_23_object != 0; // 0x434 NullNeq
	if(var_35_bool == 0) goto Label_1103; // 0x435 JumpB
	RotatePath(var_23_object, var_21_bool); // 0x436 Func
	var_36_bool = var_21_bool == 0; // 0x438 Not
	if(var_36_bool == 0) goto Label_1083; // 0x439 JumpB
	goto Label_1121; // 0x43a Jump
	
Label_1121:
	goto Label_1064; // 0x461 Jump
	
Label_1083:
	var_37_bool = 0; // 0x43b PushB
	FollowPath(var_23_object, var_37_bool, var_21_bool); // 0x43c Func
	var_38_bool = var_21_bool == 0; // 0x43e Not
	if(var_38_bool == 0) goto Label_1089; // 0x43f JumpB
	goto Label_1121; // 0x440 Jump
	
Label_1089:
	var_39_float = GetByIndex(var_0_object, 0); // 0x441 PushE
	var_40_float = GetByIndex(var_0_object, 2); // 0x442 PushE
	Rotate(var_39_float, var_40_float, var_21_bool); // 0x443 Func
	var_41_bool = var_21_bool == 0; // 0x445 Not
	if(var_41_bool == 0) goto Label_1096; // 0x446 JumpB
	goto Label_1121; // 0x447 Jump
	
Label_1096:
	WaitForAnimEnd(var_21_bool); // 0x448 Func
	var_42_bool = var_21_bool == 0; // 0x44a Not
	if(var_42_bool == 0) goto Label_1101; // 0x44b JumpB
	goto Label_1121; // 0x44c Jump
	
Label_1101:
	goto Label_1122; // 0x44d Jump
	
Label_1103:
	var_43_int = 1; // 0x44f PushI
	Sleep(var_43_int); // 0x450 Func
	var_23_object = 0; // 0x452 SetNull
	goto Label_1121; // 0x453 Jump
	
Label_1108:
	var_44_float = GetByIndex(var_0_object, 0); // 0x454 PushE
	var_45_float = GetByIndex(var_0_object, 2); // 0x455 PushE
	Rotate(var_44_float, var_45_float, var_21_bool); // 0x456 Func
	var_46_bool = var_21_bool == 0; // 0x458 Not
	if(var_46_bool == 0) goto Label_1115; // 0x459 JumpB
	goto Label_1121; // 0x45a Jump
	
Label_1115:
	WaitForAnimEnd(var_21_bool); // 0x45b Func
	var_47_bool = var_21_bool == 0; // 0x45d Not
	if(var_47_bool == 0) goto Label_1120; // 0x45e JumpB
	goto Label_1121; // 0x45f Jump
	
Label_1120:
	goto Label_1122; // 0x460 Jump
}


func_1560()
{
	var_32_bool = 0; var_33_string = ""; var_34_string = ""; // 0x619 PushV
	var_33_string = "quest_d2_02"; // 0x61a MovS
	var_34_string = "completed"; // 0x61b MovS
	func_1473(var_32_bool, var_33_string, var_34_string); // 0x61c Call
	return 0; // 0x61e Return
}


func_920(var_2_int, var_88_string)
{
	var_89_bool = 0; // 0x399 PushV
	func_1588(var_89_bool); // 0x39a Call
	var_90_bool = var_89_bool == 0; // 0x39c Not
	if(var_90_bool == 0) goto Label_927; // 0x39d JumpB
	return 0; // 0x39e Return
	
Label_927:
	var_91_bool = var_88_string == var_2_int; // 0x39f Eq
	if(var_91_bool == 0) goto Label_930; // 0x3a0 JumpB
	return 0; // 0x3a1 Return
	
Label_930:
	var_92_string = ""; // 0x3a2 PushV
	var_92_string = var_88_string; // 0x3a3 Mov
	func_1416(var_92_string); // 0x3a4 Call
	var_2_int = var_88_string; // 0x3a6 TMov
	return 0; // 0x3a7 Return
}


func_409(var_0_object, var_206_bool)
{
	var_207_cvector = CVector(0,0,0); var_208_cvector = CVector(0,0,0); var_209_cvector = CVector(0,0,0); var_210_float = 0; var_211_float = 0; var_212_cvector = CVector(0,0,0); var_213_cvector = CVector(0,0,0); var_214_cvector = CVector(0,0,0); var_215_float = 0; var_216_float = 0; // 0x199 PushV
	var_217_bool = 0; var_218_object = Obj(); // 0x19a PushV
	var_218_object = var_0_object; // 0x19b MovT
	func_1254(var_217_bool, var_218_object); // 0x19c Call
	var_219_bool = var_217_bool == 0; // 0x19e Not
	if(var_219_bool == 0) goto Label_418; // 0x19f JumpB
	var_206_bool = 0; // 0x1a0 MovB
	return 10; // 0x1a1 Return
	
Label_418:
	var_220_bool = 0; // 0x1a2 PushV
	func_461(var_216_float, var_220_bool); // 0x1a3 Call
	if(var_220_bool == 0) goto Label_440; // 0x1a5 JumpB
	GetPFPosition(var_212_cvector); // 0x1a6 TObjFunc
	GetPFPosition(var_213_cvector); // 0x1a8 Func
	var_214_cvector = var_212_cvector - var_213_cvector; // 0x1aa Sub2
	var_215_float = var_214_cvector | var_214_cvector; // 0x1ab Or2
	GetAttackDistance(var_216_float); // 0x1ac TObjFunc
	var_221_int = 50; // 0x1ae PushI
	var_216_float = var_216_float + var_221_int; // 0x1af Add2
	var_222_float = var_216_float * var_216_float; // 0x1b0 Mult
	var_223_bool = var_215_float <= var_222_float; // 0x1b1 LE
	if(var_223_bool == 0) goto Label_440; // 0x1b2 JumpB
	func_442(var_216_float); // 0x1b4 Call
	var_206_bool = 1; // 0x1b6 MovB
	return 10; // 0x1b7 Return
	
Label_440:
	var_206_bool = 0; // 0x1b8 MovB
	return 10; // 0x1b9 Return
}


func_1434()
{
	var_17_bool = 0; // 0x59a PushV
	func_1588(var_17_bool); // 0x59b Call
	if(var_17_bool == 0) goto Label_1440; // 0x59d JumpB
	lshStopSpeech(); // 0x59e Func
	
Label_1440:
	return 0; // 0x5a0 Return
}


func_663(var_24_object)
{
	var_25_object = Obj(); // 0x298 PushV
	var_25_object = var_24_object; // 0x299 Mov
	func_684(var_25_object); // 0x29a Call
	var_75_int = 50; // 0x29c PushI
	var_76_int = 40; // 0x29d PushI
	SetRTEnvelope(var_75_int, var_76_int); // 0x29e Func
	
Label_672:
	Hold(); // 0x2a0 Func
	goto Label_672; // 0x2a2 Jump
}


func_1022()
{
	return 0; // 0x3fe Return
}


func_1278(var_18_object, var_19_int)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_int = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_string = ""; var_31_object = Obj(); var_32_object = Obj(); var_33_cvector = CVector(0,0,0); var_34_float = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = ""; // 0x4fe PushV
	var_41_bool = 0; // 0x4ff PushV
	var_41_bool = 0; // 0x500 MovB
	var_42_int = 4; // 0x501 PushI
	var_43_bool = var_19_int != var_42_int; // 0x502 Neq
	if(var_43_bool == 0) goto Label_1288; // 0x503 JumpB
	var_44_int = 5; // 0x504 PushI
	var_45_bool = var_19_int != var_44_int; // 0x505 Neq
	if(var_45_bool == 0) goto Label_1288; // 0x506 JumpB
	var_41_bool = 1; // 0x507 MovB
	
Label_1288:
	if(var_41_bool == 0) goto Label_1307; // 0x508 JumpB
	GetScene(var_31_object); // 0x509 Func
	GetPosition(var_33_cvector); // 0x50b Func
	GetEyesHeight(var_34_float); // 0x50d Func
	var_46_float = GetByIndex(var_33_cvector, 1); // 0x50f PushE
	var_47_int = 2; // 0x510 PushI
	var_48_float = var_34_float / var_47_int; // 0x511 Div
	var_46_float = var_46_float + var_48_float; // 0x512 Add2
	SetByIndex(var_33_cvector, 1) = var_46_float; // 0x513 PopE
	var_49_string = "scripted"; // 0x514 PushS
	var_50_cvector = CVector(0.0, 0.0, 1.0); // 0x515 PushVec
	var_51_string = "blood.xml"; // 0x516 PushS
	AddActorByType(var_32_object, var_49_string, var_31_object, var_33_cvector, var_50_cvector, var_51_string); // 0x517 Func
	var_32_object = 0; // 0x519 SetNull
	var_31_object = 0; // 0x51a SetNull
	
Label_1307:
	var_52_bool = var_18_object == 0; // 0x51b NullEq
	if(var_52_bool == 0) goto Label_1310; // 0x51c JumpB
	return 20; // 0x51d Return
	
Label_1310:
	GetSecondaryAnimationType(var_35_int); // 0x51e Func
	var_53_int = 0; // 0x520 PushI
	var_54_bool = var_35_int < var_53_int; // 0x521 LT
	if(var_54_bool == 0) goto Label_1316; // 0x522 JumpB
	return 20; // 0x523 Return
	
Label_1316:
	GetPosition(var_36_cvector); // 0x524 ObjFunc
	GetPosition(var_37_cvector); // 0x526 Func
	GetDirection(var_38_cvector); // 0x528 Func
	var_39_cvector = var_37_cvector - var_36_cvector; // 0x52a Sub2
	var_55_float = GetByIndex(var_39_cvector, 0); // 0x52b PushE
	var_56_float = GetByIndex(var_38_cvector, 0); // 0x52c PushE
	var_57_float = var_55_float * var_56_float; // 0x52d Mult
	var_58_float = GetByIndex(var_39_cvector, 2); // 0x52e PushE
	var_59_float = GetByIndex(var_38_cvector, 2); // 0x52f PushE
	var_60_float = var_58_float * var_59_float; // 0x530 Mult
	var_61_int = var_57_float + var_60_float; // 0x531 Add
	var_62_int = 0; // 0x532 PushI
	var_63_bool = var_61_int >= var_62_int; // 0x533 GE
	if(var_63_bool == 0) goto Label_1335; // 0x534 JumpB
	var_40_string = "fhit"; // 0x535 MovS
	goto Label_1336; // 0x536 Jump
	
Label_1336:
	var_64_string = "hit_react"; // 0x538 PushS
	var_65_string = "1"; // 0x539 PushS
	var_66_int = var_40_string + var_65_string; // 0x53a Add
	var_67_string = "2"; // 0x53b PushS
	var_68_int = var_40_string + var_67_string; // 0x53c Add
	var_69_int = -10; // 0x53d PushI
	FadeSecondaryAnimation(var_64_string, var_66_int, var_68_int, var_69_int); // 0x53e Func
	return 20; // 0x540 Return
	
Label_1335:
	var_40_string = "bhit"; // 0x537 MovS
}


func_1567(var_72_int)
{
	var_73_int = 0; var_74_int = 0; // 0x61f PushV
	var_75_string = "player"; // 0x620 PushS
	GetVariable(var_75_string, var_74_int); // 0x621 Func
	var_76_int = 0; // 0x623 PushI
	var_77_bool = var_74_int == var_76_int; // 0x624 Eq
	if(var_77_bool == 0) goto Label_1577; // 0x625 JumpB
	var_72_int = 200001; // 0x626 MovI
	return 2; // 0x627 Return
	
Label_1577:
	var_78_int = 1; // 0x629 PushI
	var_79_bool = var_74_int == var_78_int; // 0x62a Eq
	if(var_79_bool == 0) goto Label_1582; // 0x62b JumpB
	var_72_int = 200002; // 0x62c MovI
	return 2; // 0x62d Return
	
Label_1582:
	var_72_int = 200003; // 0x62e MovI
	return 2; // 0x62f Return
}


func_799(var_0_object, var_18_int, var_19_object)
{
	var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; var_25_object = Obj(); var_26_bool = 0; var_27_int = 0; var_28_bool = 0; // 0x31f PushV
	var_0_object = var_19_object; // 0x320 TMov
	var_29_bool = 0; var_30_object = Obj(); // 0x321 PushV
	var_30_object = var_19_object; // 0x322 Mov
	func_1356(var_30_object); // 0x323 Call
	var_69_bool = var_29_bool == 0; // 0x325 Not
	if(var_69_bool == 0) goto Label_809; // 0x326 JumpB
	var_18_int = -2; // 0x327 MovI
	return 8; // 0x328 Return
	
Label_809:
	CreateDialog(var_25_object); // 0x329 Func
	var_70_int = 0; // 0x32b PushV
	func_1584(var_70_int); // 0x32c Call
	SetNPCName(var_70_int); // 0x32e ObjFunc
	var_71_string = ""; // 0x330 PushV
	func_1586(var_71_string); // 0x331 Call
	SetPhoto(var_71_string); // 0x333 ObjFunc
	var_72_int = 0; // 0x335 PushV
	func_1567(var_72_int); // 0x336 Call
	SetPlayerName(var_72_int); // 0x338 ObjFunc
	var_27_int = -1; // 0x33a MovI
	IsOverrideActive(var_26_bool); // 0x33b Func
	var_80_bool = var_26_bool; // 0x33d Push
	if(var_80_bool == 0) goto Label_833; // 0x33e JumpB
	var_18_int = -2; // 0x33f MovI
	return 8; // 0x340 Return
	
Label_833:
	DoDialog(var_25_object); // 0x341 Func
	var_81_object = Obj(); var_82_object = Obj(); // 0x343 PushV
	var_81_object = var_19_object; // 0x344 Mov
	var_82_object = var_25_object; // 0x345 Mov
	TaskCall(4); // 0x346 TaskCall
	func_862(var_83_object, var_84_object, var_85_string, var_86_bool, var_81_object, var_82_object); // 0x347 Call
	TaskReturn(); // 0x348 TaskReturn
	IsDialogEnd(var_28_bool); // 0x34a ObjFunc
	
Label_844:
	var_118_bool = var_28_bool == 0; // 0x34c Not
	if(var_118_bool == 0) goto Label_851; // 0x34d JumpB
	sync(); // 0x34e Func
	IsDialogEnd(var_28_bool); // 0x350 ObjFunc
	goto Label_844; // 0x352 Jump
	
Label_851:
	var_119_object = Obj(); // 0x353 PushV
	var_119_object = var_19_object; // 0x354 Mov
	func_1412(); // 0x355 Call
	StopDialog(var_25_object); // 0x357 Func
	GetReturnValue(var_27_int); // 0x359 ObjFunc
	var_18_int = var_27_int; // 0x35b Mov
	return 8; // 0x35c Return
}


func_1441(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x5a1 PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x5a2 Or
	var_58_float = sqrt(var_59_int); // 0x5a3 Sqrt2
	var_60_float = 0.0; // 0x5a4 PushF
	var_61_bool = var_58_float < var_60_float; // 0x5a5 LT
	if(var_61_bool == 0) goto Label_1449; // 0x5a6 JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x5a7 MovV
	return 2; // 0x5a8 Return
	
Label_1449:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x5a9 Div2
	return 2; // 0x5aa Return
}


func_1451(var_28_float, var_29_cvector, var_30_cvector)
{
	var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); // 0x5ab PushV
	var_32_cvector = var_30_cvector - var_29_cvector; // 0x5ac Sub2
	var_28_float = var_32_cvector | var_32_cvector; // 0x5ad Or2
	return 2; // 0x5ae Return
}


func_684(var_25_object)
{
	var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_string = ""; var_31_object = Obj(); var_32_bool = 0; var_33_bool = 0; var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = ""; var_41_object = Obj(); var_42_bool = 0; var_43_bool = 0; var_44_float = 0; var_45_cvector = CVector(0,0,0); // 0x2ac PushV
	var_46_bool = var_25_object == 0; // 0x2ad NullEq
	if(var_46_bool == 0) goto Label_692; // 0x2ae JumpB
	var_47_string = ""; // 0x2af PushV
	var_47_string = "fdie"; // 0x2b0 MovS
	func_771(var_47_string); // 0x2b1 Call
	goto Label_770; // 0x2b3 Jump
	
Label_770:
	return 20; // 0x302 Return
	
Label_692:
	GetPosition(var_36_cvector); // 0x2b4 ObjFunc
	GetPosition(var_37_cvector); // 0x2b6 Func
	GetDirection(var_38_cvector); // 0x2b8 Func
	var_39_cvector = var_37_cvector - var_36_cvector; // 0x2ba Sub2
	var_50_float = GetByIndex(var_39_cvector, 0); // 0x2bb PushE
	var_51_float = GetByIndex(var_38_cvector, 0); // 0x2bc PushE
	var_52_float = var_50_float * var_51_float; // 0x2bd Mult
	var_53_float = GetByIndex(var_39_cvector, 2); // 0x2be PushE
	var_54_float = GetByIndex(var_38_cvector, 2); // 0x2bf PushE
	var_55_float = var_53_float * var_54_float; // 0x2c0 Mult
	var_56_int = var_52_float + var_55_float; // 0x2c1 Add
	var_57_int = 0; // 0x2c2 PushI
	var_58_bool = var_56_int >= var_57_int; // 0x2c3 GE
	if(var_58_bool == 0) goto Label_711; // 0x2c4 JumpB
	var_40_string = "fdie"; // 0x2c5 MovS
	goto Label_712; // 0x2c6 Jump
	
Label_712:
	RemoveRTEnvelope(); // 0x2c8 Func
	SetDeathState(); // 0x2ca Func
	Stop(); // 0x2cc Func
	StopAsync(); // 0x2ce Func
	var_41_object = var_25_object; // 0x2d0 Mov
	var_59_string = "GetScriptProperty"; // 0x2d1 PushS
	var_60_int = 2; // 0x2d2 PushI
	var_61_bool = IsFuncExist(var_25_object, var_59_string, var_60_int); // 0x2d3 FuncExist
	if(var_61_bool == 0) goto Label_736; // 0x2d4 JumpB
	var_62_string = "Owner"; // 0x2d5 PushS
	HasScriptProperty(var_42_bool, var_62_string); // 0x2d6 ObjFunc
	var_63_bool = var_42_bool; // 0x2d8 Push
	if(var_63_bool == 0) goto Label_736; // 0x2d9 JumpB
	var_64_string = "Owner"; // 0x2da PushS
	GetScriptProperty(var_41_object, var_64_string); // 0x2db ObjFunc
	var_65_bool = var_41_object == 0; // 0x2dd NullEq
	if(var_65_bool == 0) goto Label_736; // 0x2de JumpB
	var_41_object = var_25_object; // 0x2df Mov
	
Label_736:
	var_66_string = "@GetEyesHeight"; // 0x2e0 PushS
	var_67_int = 1; // 0x2e1 PushI
	var_68_bool = IsFuncExist(var_41_object, var_66_string, var_67_int); // 0x2e2 FuncExist
	if(var_68_bool == 0) goto Label_751; // 0x2e3 JumpB
	GetEyesHeight(var_44_float); // 0x2e4 ObjFunc
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x2e6 MovV
	var_69_float = GetByIndex(var_45_cvector, 1); // 0x2e7 PushE
	var_69_float = var_44_float; // 0x2e8 Mov
	SetByIndex(var_45_cvector, 1) = var_69_float; // 0x2e9 PopE
	var_70_string = "head"; // 0x2ea PushS
	LookAsync(var_25_object, var_70_string, var_45_cvector); // 0x2eb Func
	var_43_bool = 1; // 0x2ed MovB
	goto Label_752; // 0x2ee Jump
	
Label_752:
	var_71_string = "all"; // 0x2f0 PushS
	PlayAnimation(var_71_string, var_40_string); // 0x2f1 Func
	WaitForAnimEnd(); // 0x2f3 Func
	var_72_bool = var_43_bool; // 0x2f5 Push
	if(var_72_bool == 0) goto Label_764; // 0x2f6 JumpB
	StopAsync(); // 0x2f7 Func
	var_73_string = "head"; // 0x2f9 PushS
	UnlookAsync(var_73_string); // 0x2fa Func
	
Label_764:
	var_74_string = "all"; // 0x2fc PushS
	LockAnimationEnd(var_74_string, var_40_string); // 0x2fd Func
	RemoveEnvelope(); // 0x2ff Func
	var_41_object = 0; // 0x301 SetNull
	
Label_751:
	var_43_bool = 0; // 0x2ef MovB
	
Label_711:
	var_40_string = "bdie"; // 0x2c7 MovS
}


func_1455(var_315_float, var_316_float, var_317_float)
{
	var_320_bool = var_316_float < var_317_float; // 0x5b0 LT
	if(var_320_bool == 0) goto Label_1460; // 0x5b1 JumpB
	var_315_float = var_316_float; // 0x5b2 Mov
	goto Label_1461; // 0x5b3 Jump
	
Label_1461:
	return 0; // 0x5b5 Return
	
Label_1460:
	var_315_float = var_317_float; // 0x5b4 Mov
}


func_1584(var_70_int)
{
	var_70_int = 4031; // 0x630 MovI
	return 0; // 0x631 Return
}


func_1586(var_71_string)
{
	var_71_string = "ui/NPC_Black.png"; // 0x632 MovS
	return 0; // 0x633 Return
}


func_1588(var_89_bool)
{
	var_89_bool = 0; // 0x634 MovB
	return 0; // 0x635 Return
}


func_1462(var_325_float, var_326_float, var_327_float, var_328_float)
{
	var_329_bool = var_326_float < var_327_float; // 0x5b7 LT
	if(var_329_bool == 0) goto Label_1467; // 0x5b8 JumpB
	var_325_float = var_327_float; // 0x5b9 Mov
	return 0; // 0x5ba Return
	
Label_1467:
	var_330_bool = var_326_float > var_328_float; // 0x5bb GT
	if(var_330_bool == 0) goto Label_1471; // 0x5bc JumpB
	var_325_float = var_328_float; // 0x5bd Mov
	return 0; // 0x5be Return
	
Label_1471:
	var_325_float = var_326_float; // 0x5bf Mov
	return 0; // 0x5c0 Return
}


func_442(var_0_object)
{
	var_224_cvector = CVector(0,0,0); var_225_cvector = CVector(0,0,0); var_226_cvector = CVector(0,0,0); var_227_cvector = CVector(0,0,0); // 0x1ba PushV
	Face(var_0_object); // 0x1bb Func
	var_228_string = "all"; // 0x1bd PushS
	var_229_string = "bjump"; // 0x1be PushS
	PlayAnimation(var_228_string, var_229_string); // 0x1bf Func
	GetPFPosition(var_226_cvector); // 0x1c1 TObjFunc
	GetPFPosition(var_227_cvector); // 0x1c3 Func
	WaitForAnimEnd(); // 0x1c5 Func
	StopAsync(); // 0x1c7 Func
	var_230_cvector = CVector(0.0, 0.0, 0.0); // 0x1c9 PushVec
	SetSpeed(var_230_cvector); // 0x1ca Func
	return 4; // 0x1cc Return
}


func_1213(var_83_bool)
{
	var_85_bool = 0; var_86_bool = 0; // 0x4bd PushV
	IsDead(var_86_bool); // 0x4be ObjFunc
	var_83_bool = var_86_bool; // 0x4c0 Mov
	return 2; // 0x4c1 Return
}


func_1345()
{
	var_172_cvector = CVector(0,0,0); var_173_cvector = CVector(0,0,0); var_174_cvector = CVector(0,0,0); var_175_cvector = CVector(0,0,0); var_176_cvector = CVector(0,0,0); var_177_cvector = CVector(0,0,0); // 0x541 PushV
	GetPosition(var_175_cvector); // 0x542 ObjFunc
	GetPosition(var_176_cvector); // 0x544 Func
	var_177_cvector = var_175_cvector - var_176_cvector; // 0x546 Sub2
	var_178_float = GetByIndex(var_177_cvector, 0); // 0x547 PushE
	var_179_float = GetByIndex(var_177_cvector, 2); // 0x548 PushE
	RotateAsync(var_178_float, var_179_float); // 0x549 Func
	return 6; // 0x54b Return
}


func_1218(var_72_bool, var_73_object)
{
	var_74_object = Obj(); var_75_object = Obj(); var_76_object = Obj(); var_77_object = Obj(); // 0x4c2 PushV
	var_78_bool = var_73_object == 0; // 0x4c3 NullEq
	if(var_78_bool == 0) goto Label_1223; // 0x4c4 JumpB
	var_72_bool = 0; // 0x4c5 MovB
	return 4; // 0x4c6 Return
	
Label_1223:
	var_79_bool = 0; // 0x4c7 PushV
	var_79_bool = 0; // 0x4c8 MovB
	var_80_string = "IsDead"; // 0x4c9 PushS
	var_81_int = 1; // 0x4ca PushI
	var_82_bool = IsFuncExist(var_73_object, var_80_string, var_81_int); // 0x4cb FuncExist
	if(var_82_bool == 0) goto Label_1235; // 0x4cc JumpB
	var_83_bool = 0; var_84_object = Obj(); // 0x4cd PushV
	var_84_object = var_73_object; // 0x4ce Mov
	func_1213(var_84_object); // 0x4cf Call
	if(var_83_bool == 0) goto Label_1235; // 0x4d1 JumpB
	var_79_bool = 1; // 0x4d2 MovB
	
Label_1235:
	if(var_79_bool == 0) goto Label_1238; // 0x4d3 JumpB
	var_72_bool = 0; // 0x4d4 MovB
	return 4; // 0x4d5 Return
	
Label_1238:
	GetScene(var_76_object); // 0x4d6 Func
	var_87_bool = var_76_object == 0; // 0x4d8 NullEq
	if(var_87_bool == 0) goto Label_1244; // 0x4d9 JumpB
	var_72_bool = 0; // 0x4da MovB
	return 4; // 0x4db Return
	
Label_1244:
	GetScene(var_77_object); // 0x4dc ObjFunc
	var_88_bool = var_76_object != var_77_object; // 0x4de Neq
	if(var_88_bool == 0) goto Label_1250; // 0x4df JumpB
	var_72_bool = 0; // 0x4e0 MovB
	return 4; // 0x4e1 Return
	
Label_1250:
	var_72_bool = 1; // 0x4e2 MovB
	return 4; // 0x4e3 Return
}


func_1473(var_14_bool, var_15_string, var_16_string)
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x5c1 PushV
	FindActor(var_18_object, var_15_string); // 0x5c2 Func
	var_19_bool = var_18_object == 0; // 0x5c4 NullEq
	if(var_19_bool == 0) goto Label_1480; // 0x5c5 JumpB
	var_14_bool = 0; // 0x5c6 MovB
	return 2; // 0x5c7 Return
	
Label_1480:
	Trigger(var_18_object, var_16_string); // 0x5c8 Func
	var_14_bool = 1; // 0x5ca MovB
	return 2; // 0x5cb Return
}


func_1356(var_29_bool)
{
	var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; // 0x54c PushV
	GetPosition(var_40_cvector); // 0x54d ObjFunc
	GetEyesHeight(var_39_float); // 0x54f ObjFunc
	var_47_float = GetByIndex(var_40_cvector, 1); // 0x551 PushE
	var_47_float = var_47_float + var_39_float; // 0x552 Add2
	SetByIndex(var_40_cvector, 1) = var_47_float; // 0x553 PopE
	GetPosition(var_41_cvector); // 0x554 Func
	GetEyesHeight(var_39_float); // 0x556 Func
	var_48_float = GetByIndex(var_41_cvector, 1); // 0x558 PushE
	var_48_float = var_48_float + var_39_float; // 0x559 Add2
	SetByIndex(var_41_cvector, 1) = var_48_float; // 0x55a PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x55b Sub2
	var_49_float = GetByIndex(var_42_cvector, 1); // 0x55c PushE
	var_49_float = 0; // 0x55d MovI
	SetByIndex(var_42_cvector, 1) = var_49_float; // 0x55e PopE
	var_50_int = var_42_cvector | var_42_cvector; // 0x55f Or
	var_51_float = sqrt(var_50_int); // 0x560 Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x561 Div2
	var_43_cvector = -var_42_cvector; // 0x562 Neg2
	var_52_int = 70; // 0x563 PushI
	var_53_float = var_42_cvector * var_52_int; // 0x564 Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x565 PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x566 PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x567 Xor2
	func_1441(var_54_cvector, var_55_cvector); // 0x568 Call
	var_62_int = 25; // 0x56a PushI
	var_63_float = var_54_cvector * var_62_int; // 0x56b Mult
	var_64_int = var_53_float + var_63_float; // 0x56c Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x56d PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x56e Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x56f Add2
	IsOverrideActive(var_46_bool); // 0x570 Func
	var_66_bool = var_46_bool; // 0x572 Push
	if(var_66_bool == 0) goto Label_1398; // 0x573 JumpB
	var_29_bool = 0; // 0x574 MovB
	return 16; // 0x575 Return
	
Label_1398:
	StopWorld(); // 0x576 Func
	CameraTransit(var_45_cvector, var_43_cvector); // 0x578 Func
	var_67_float = GetByIndex(var_44_cvector, 0); // 0x57a PushE
	var_68_float = GetByIndex(var_44_cvector, 2); // 0x57b PushE
	Rotate(var_67_float, var_68_float); // 0x57c Func
	CameraWaitForPlayFinish(); // 0x57e Func
	ResumeWorld(); // 0x580 Func
	var_29_bool = 1; // 0x582 MovB
	return 16; // 0x583 Return
}


func_461(var_0_object, var_185_bool)
{
	var_186_bool = 0; var_187_bool = 0; // 0x1cd PushV
	var_188_string = "IsAttacking"; // 0x1ce PushS
	var_189_int = 1; // 0x1cf PushI
	var_190_bool = IsFuncExist(var_0_object, var_188_string, var_189_int); // 0x1d0 FuncExist
	if(var_190_bool == 0) goto Label_470; // 0x1d1 JumpB
	IsAttacking(var_187_bool); // 0x1d2 TObjFunc
	var_185_bool = var_187_bool; // 0x1d4 Mov
	return 2; // 0x1d5 Return
	
Label_470:
	var_185_bool = 0; // 0x1d6 MovB
	return 2; // 0x1d7 Return
}


func_472(var_2_int, var_4_int)
{
	var_247_float = 0; var_248_int = 0; var_249_float = 0; var_250_int = 0; // 0x1d8 PushV
	var_251_bool = var_2_int == 0; // 0x1d9 Not
	if(var_251_bool == 0) goto Label_476; // 0x1da JumpB
	return 4; // 0x1db Return
	
Label_476:
	var_252_int = var_4_int; // 0x1dc PushT
	if(var_252_int == 0) goto Label_484; // 0x1dd JumpB
	var_253_int = -1; // 0x1de PushI
	var_4_int = var_4_int + var_253_int; // 0x1df Add2
	var_254_int = 0; // 0x1e0 PushI
	var_255_bool = var_4_int > var_254_int; // 0x1e1 GT
	if(var_255_bool == 0) goto Label_484; // 0x1e2 JumpB
	return 4; // 0x1e3 Return
	
Label_484:
	rand(var_249_float); // 0x1e4 Func
	var_256_float = 0; // 0x1e6 PushV
	func_510(var_256_float); // 0x1e7 Call
	var_257_bool = var_249_float < var_256_float; // 0x1e9 LT
	if(var_257_bool == 0) goto Label_503; // 0x1ea JumpB
	irand(var_250_int, var_249_float); // 0x1eb Func
	var_258_int = 1; // 0x1ed PushI
	var_250_int = var_250_int + var_258_int; // 0x1ee Add2
	var_259_string = "attack"; // 0x1ef PushS
	var_260_int = var_259_string + var_250_int; // 0x1f0 Add
	Speak(var_260_int); // 0x1f1 Func
	var_261_int = 0; // 0x1f3 PushV
	func_508(var_261_int); // 0x1f4 Call
	var_4_int = var_261_int; // 0x1f5 TMov
	
Label_503:
	return 4; // 0x1f7 Return
}


func_345(var_351_bool, var_352_float)
{
	var_353_float = 0; var_354_bool = 0; var_355_float = 0; var_356_bool = 0; // 0x159 PushV
	rand(var_355_float); // 0x15a Func
	var_357_bool = var_355_float < var_352_float; // 0x15c LT
	if(var_357_bool == 0) goto Label_365; // 0x15d JumpB
	
Label_350:
	IsAnimationPlaying(var_356_bool); // 0x15e Func
	var_358_bool = var_356_bool == 0; // 0x160 Not
	if(var_358_bool == 0) goto Label_355; // 0x161 JumpB
	goto Label_364; // 0x162 Jump
	
Label_364:
	goto Label_367; // 0x16c Jump
	
Label_367:
	var_351_bool = 0; // 0x16f MovB
	return 4; // 0x170 Return
	
Label_355:
	var_359_bool = 0; // 0x163 PushV
	func_409(var_356_bool, var_359_bool); // 0x164 Call
	if(var_359_bool == 0) goto Label_361; // 0x166 JumpB
	var_351_bool = 1; // 0x167 MovB
	return 4; // 0x168 Return
	
Label_361:
	sync(); // 0x169 Func
	goto Label_350; // 0x16b Jump
	
Label_365:
	WaitForAnimEnd(); // 0x16d Func
}


func_862(var_0_object, var_1_int, var_2_int, var_3_bool, var_81_object, var_82_object)
{
	var_0_object = var_82_object; // 0x35f TMov
	var_1_int = var_81_object; // 0x360 TMov
	var_3_bool = 0; // 0x361 TMovB
	var_87_int = 1; // 0x362 PushI
	if(var_87_int == 0) goto Label_890; // 0x363 JumpB
	var_88_string = ""; // 0x364 PushV
	var_88_string = "Neutral"; // 0x365 MovS
	func_920(var_82_object, var_88_string); // 0x366 Call
	var_103_int = 7522; // 0x368 PushI
	SetMessage(var_103_int); // 0x369 TObjFunc
	ClearReplies(); // 0x36b TObjFunc
	var_104_int = 7523; // 0x36d PushI
	var_105_int = -1; // 0x36e PushI
	var_106_int = 8305; // 0x36f PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x370 TObjFunc
	var_107_int = 7524; // 0x372 PushI
	var_108_int = -1; // 0x373 PushI
	var_109_int = 8306; // 0x374 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x375 TObjFunc
	goto Label_890; // 0x377 Jump
	
Label_890:
	var_110_bool = 0; // 0x37a PushV
	func_1588(var_110_bool); // 0x37b Call
	if(var_110_bool == 0) goto Label_905; // 0x37d JumpB
	
Label_894:
	lshWaitForAnimEnd(); // 0x37e Func
	var_111_bool = var_3_bool; // 0x380 PushT
	if(var_111_bool == 0) goto Label_899; // 0x381 JumpB
	goto Label_904; // 0x382 Jump
	
Label_904:
	goto Label_919; // 0x388 Jump
	
Label_919:
	return 0; // 0x397 Return
	
Label_899:
	var_112_string = ""; // 0x383 PushV
	var_112_string = var_2_int; // 0x384 MovT
	func_1416(var_112_string); // 0x385 Call
	goto Label_894; // 0x387 Jump
	
Label_905:
	var_113_string = "all"; // 0x389 PushS
	var_114_string = "idle"; // 0x38a PushS
	PlayAnimation(var_113_string, var_114_string); // 0x38b Func
	
Label_909:
	WaitForAnimEnd(); // 0x38d Func
	var_115_bool = var_3_bool; // 0x38f PushT
	if(var_115_bool == 0) goto Label_914; // 0x390 JumpB
	goto Label_919; // 0x391 Jump
	
Label_914:
	var_116_string = "all"; // 0x392 PushS
	var_117_string = "idle"; // 0x393 PushS
	PlayAnimation(var_116_string, var_117_string); // 0x394 Func
	goto Label_909; // 0x396 Jump
}


func_226(var_0_object, var_265_float, var_266_int)
{
	var_267_object = Obj(); var_268_float = 0; var_269_float = 0; var_270_object = Obj(); var_271_float = 0; var_272_float = 0; // 0xe2 PushV
	var_273_float = 0.9; // 0xe3 PushF
	var_274_float = var_265_float * var_273_float; // 0xe4 Mult
	GetVictim(var_274_float, var_270_object); // 0xe5 Func
	ReportAttack(var_0_object); // 0xe7 Func
	var_275_bool = var_270_object == var_0_object; // 0xe9 Eq
	if(var_275_bool == 0) goto Label_263; // 0xea JumpB
	var_276_float = 0; var_277_object = Obj(); var_278_int = 0; // 0xeb PushV
	var_277_object = var_270_object; // 0xec Mov
	var_278_int = var_266_int; // 0xed Mov
	func_15(var_278_int); // 0xee Call
	var_271_float = var_276_float; // 0xef Mov
	var_279_float = 0; var_280_object = Obj(); var_281_float = 0; var_282_int = 0; // 0xf1 PushV
	var_280_object = var_270_object; // 0xf2 Mov
	var_281_float = var_271_float; // 0xf3 Mov
	var_283_int = 0; var_284_object = Obj(); var_285_int = 0; // 0xf4 PushV
	var_284_object = var_270_object; // 0xf5 Mov
	var_285_int = var_266_int; // 0xf6 Mov
	func_18(var_285_int); // 0xf7 Call
	var_282_int = var_283_int; // 0xf8 Mov
	func_1149(var_279_float, var_280_object, var_281_float, var_282_int); // 0xfa Call
	var_272_float = var_279_float; // 0xfb Mov
	var_332_int = 0; // 0xfd PushV
	func_504(var_332_int); // 0xfe Call
	ReportHit(var_0_object, var_332_int, var_272_float, var_271_float); // 0x100 Func
	var_333_object = Obj(); var_334_float = 0; // 0x102 PushV
	var_333_object = var_270_object; // 0x103 Mov
	var_334_float = var_272_float; // 0x104 Mov
	func_506(); // 0x105 Call
	
Label_263:
	return 6; // 0x107 Return
}


func_1124()
{
	StopGroup0(); // 0x464 Func
	Stop(); // 0x466 Func
	return 0; // 0x468 Return
}


func_1508(var_15_object)
{
	var_16_bool = 0; var_17_bool = 0; // 0x5e4 PushV
	var_18_string = "revolver_ammo"; // 0x5e5 PushS
	var_19_int = 0; // 0x5e6 PushI
	var_20_int = 2; // 0x5e7 PushI
	AddItem(var_17_bool, var_18_string, var_19_int, var_20_int); // 0x5e8 Func
	var_21_string = "alpha_pills"; // 0x5ea PushS
	var_22_int = 0; // 0x5eb PushI
	var_23_int = 2; // 0x5ec PushI
	AddItem(var_17_bool, var_21_string, var_22_int, var_23_int); // 0x5ed Func
	var_24_object = Obj(); // 0x5ef PushV
	var_24_object = var_15_object; // 0x5f0 Mov
	TaskCall(2); // 0x5f1 TaskCall
	func_663(var_24_object); // 0x5f2 Call
	TaskReturn(); // 0x5f3 TaskReturn
	return 2; // 0x5f5 Return
}


func_1254(var_68_bool, var_69_object)
{
	var_70_int = 0; var_71_int = 0; // 0x4e6 PushV
	var_72_bool = 0; var_73_object = Obj(); // 0x4e7 PushV
	var_73_object = var_69_object; // 0x4e8 Mov
	func_1218(var_72_bool, var_73_object); // 0x4e9 Call
	var_89_bool = var_72_bool == 0; // 0x4eb Not
	if(var_89_bool == 0) goto Label_1263; // 0x4ec JumpB
	var_68_bool = 0; // 0x4ed MovB
	return 2; // 0x4ee Return
	
Label_1263:
	var_90_bool = 0; var_91_object = Obj(); var_92_string = ""; // 0x4ef PushV
	var_91_object = var_69_object; // 0x4f0 Mov
	var_92_string = "noaccess"; // 0x4f1 MovS
	func_1137(var_90_bool, var_91_object, var_92_string); // 0x4f2 Call
	var_99_bool = var_90_bool == 0; // 0x4f4 Not
	if(var_99_bool == 0) goto Label_1272; // 0x4f5 JumpB
	var_68_bool = 1; // 0x4f6 MovB
	return 2; // 0x4f7 Return
	
Label_1272:
	var_100_string = "noaccess"; // 0x4f8 PushS
	GetProperty(var_100_string, var_71_int); // 0x4f9 ObjFunc
	var_101_int = 0; // 0x4fb PushI
	var_68_bool = var_71_int == var_101_int; // 0x4fc Eq2
	return 2; // 0x4fd Return
}


func_1001(var_17_object)
{
	var_18_int = 0; var_19_object = Obj(); // 0x3ea PushV
	var_19_object = var_17_object; // 0x3eb Mov
	TaskCall(3); // 0x3ec TaskCall
	func_799(var_20_object, var_18_int, var_19_object); // 0x3ed Call
	TaskReturn(); // 0x3ee TaskReturn
	var_120_bool = GlobalVars[2]; // 0x3f0 PushGE
	var_120_bool = 1; // 0x3f1 MovB
	GlobalVars[2] = var_120_bool; // 0x3f2 PopGE
	return 0; // 0x3f3 Return
}


func_1129(var_307_string, var_308_int)
{
	var_309_int = 1; // 0x46a PushI
	var_310_bool = var_308_int == var_309_int; // 0x46b Eq
	if(var_310_bool == 0) goto Label_1135; // 0x46c JumpB
	var_307_string = "fire"; // 0x46d MovS
	return 0; // 0x46e Return
	
Label_1135:
	var_307_string = "phys"; // 0x46f MovS
	return 0; // 0x470 Return
}


func_369(var_0_object, var_193_bool, var_194_float)
{
	var_195_bool = 0; var_196_cvector = CVector(0,0,0); var_197_cvector = CVector(0,0,0); var_198_cvector = CVector(0,0,0); var_199_float = 0; var_200_bool = 0; var_201_cvector = CVector(0,0,0); var_202_cvector = CVector(0,0,0); var_203_cvector = CVector(0,0,0); var_204_float = 0; // 0x171 PushV
	
Label_370:
	IsAnimationPlaying(var_200_bool); // 0x172 Func
	var_205_bool = var_200_bool == 0; // 0x174 Not
	if(var_205_bool == 0) goto Label_375; // 0x175 JumpB
	goto Label_407; // 0x176 Jump
	
Label_407:
	var_193_bool = 0; // 0x197 MovB
	return 10; // 0x198 Return
	
Label_375:
	var_206_bool = 0; // 0x177 PushV
	func_409(var_204_float, var_206_bool); // 0x178 Call
	if(var_206_bool == 0) goto Label_381; // 0x17a JumpB
	var_193_bool = 1; // 0x17b MovB
	return 10; // 0x17c Return
	
Label_381:
	var_231_bool = 0; var_232_object = Obj(); // 0x17d PushV
	var_232_object = var_0_object; // 0x17e MovT
	func_1254(var_231_bool, var_232_object); // 0x17f Call
	var_233_bool = var_231_bool == 0; // 0x181 Not
	if(var_233_bool == 0) goto Label_389; // 0x182 JumpB
	var_193_bool = 0; // 0x183 MovB
	return 10; // 0x184 Return
	
Label_389:
	GetPFPosition(var_201_cvector); // 0x185 TObjFunc
	GetPFPosition(var_202_cvector); // 0x187 Func
	var_203_cvector = var_201_cvector - var_202_cvector; // 0x189 Sub2
	var_204_float = var_203_cvector | var_203_cvector; // 0x18a Or2
	var_234_float = var_194_float * var_194_float; // 0x18b Mult
	var_235_bool = var_204_float < var_234_float; // 0x18c LT
	if(var_235_bool == 0) goto Label_404; // 0x18d JumpB
	var_236_bool = 0; var_237_float = 0; // 0x18e PushV
	var_237_float = var_194_float; // 0x18f Mov
	func_265(var_204_float, var_236_bool, var_237_float); // 0x190 Call
	var_193_bool = 1; // 0x192 MovB
	return 10; // 0x193 Return
	
Label_404:
	sync(); // 0x194 Func
	goto Label_370; // 0x196 Jump
}


func_1137(var_90_bool, var_91_object, var_92_string)
{
	var_93_bool = 0; var_94_bool = 0; // 0x471 PushV
	var_95_string = "HasProperty"; // 0x472 PushS
	var_96_int = 2; // 0x473 PushI
	var_97_bool = IsFuncExist(var_91_object, var_95_string, var_96_int); // 0x474 FuncExist
	var_98_bool = var_97_bool == 0; // 0x475 Not
	if(var_98_bool == 0) goto Label_1145; // 0x476 JumpB
	var_90_bool = 0; // 0x477 MovB
	return 2; // 0x478 Return
	
Label_1145:
	HasProperty(var_92_string, var_94_bool); // 0x479 ObjFunc
	var_90_bool = var_94_bool; // 0x47b Mov
	return 2; // 0x47c Return
}


func_1012(var_15_bool)
{
	var_16_bool = GlobalVars[2]; // 0x3f4 PushGE
	var_15_bool = !var_16_bool; // 0x3f5 Not2
	return 0; // 0x3f6 Return
}


func_1015()
{
	var_15_bool = GlobalVars[0]; // 0x3f7 PushGE
	var_15_bool = 0; // 0x3f8 MovB
	GlobalVars[0] = var_15_bool; // 0x3f9 PopGE
	func_1046(var_12_cvector, var_13_cvector); // 0x3fb Call
	return 0; // 0x3fd Return
}


func_504(var_332_int)
{
	var_332_int = 0; // 0x1f8 MovI
	return 0; // 0x1f9 Return
}


func_506()
{
	return 0; // 0x1fb Return
}


func_508(var_261_int)
{
	var_261_int = 1; // 0x1fc MovI
	return 0; // 0x1fd Return
}


func_1149(var_279_float, var_280_object, var_281_float, var_282_int)
{
	var_286_int = 0; var_287_string = ""; var_288_int = 0; var_289_float = 0; var_290_float = 0; var_291_float = 0; var_292_int = 0; var_293_string = ""; var_294_int = 0; var_295_float = 0; var_296_float = 0; var_297_float = 0; // 0x47d PushV
	var_298_bool = 0; var_299_object = Obj(); var_300_string = ""; // 0x47e PushV
	var_299_object = var_280_object; // 0x47f Mov
	var_300_string = "health"; // 0x480 MovS
	func_1137(var_298_bool, var_299_object, var_300_string); // 0x481 Call
	var_301_bool = var_298_bool == 0; // 0x483 Not
	if(var_301_bool == 0) goto Label_1159; // 0x484 JumpB
	var_279_float = 0.0; // 0x485 MovF
	return 12; // 0x486 Return
	
Label_1159:
	var_302_bool = 0; var_303_object = Obj(); var_304_string = ""; // 0x487 PushV
	var_303_object = var_280_object; // 0x488 Mov
	var_304_string = "armor"; // 0x489 MovS
	func_1137(var_302_bool, var_303_object, var_304_string); // 0x48a Call
	var_305_bool = var_302_bool == 0; // 0x48c Not
	if(var_305_bool == 0) goto Label_1168; // 0x48d JumpB
	var_292_int = 0; // 0x48e MovI
	goto Label_1171; // 0x48f Jump
	
Label_1171:
	var_306_string = "armor_"; // 0x493 PushS
	var_307_string = ""; var_308_int = 0; // 0x494 PushV
	var_308_int = var_282_int; // 0x495 Mov
	func_1129(var_307_string, var_308_int); // 0x496 Call
	var_293_string = var_306_string + var_307_string; // 0x498 Add2
	var_311_bool = 0; var_312_object = Obj(); var_313_string = ""; // 0x499 PushV
	var_312_object = var_280_object; // 0x49a Mov
	var_313_string = var_293_string; // 0x49b Mov
	func_1137(var_311_bool, var_312_object, var_313_string); // 0x49c Call
	var_314_bool = var_311_bool == 0; // 0x49e Not
	if(var_314_bool == 0) goto Label_1186; // 0x49f JumpB
	var_294_int = 0; // 0x4a0 MovI
	goto Label_1188; // 0x4a1 Jump
	
Label_1188:
	var_315_float = 0; var_316_float = 0; var_317_float = 0; // 0x4a4 PushV
	var_318_int = var_292_int + var_294_int; // 0x4a5 Add
	var_319_float = 100.0; // 0x4a6 PushF
	var_316_float = var_318_int / var_318_int; // 0x4a7 Div2
	var_317_float = 1; // 0x4a8 MovI
	func_1455(var_315_float, var_316_float, var_317_float); // 0x4a9 Call
	var_295_float = var_315_float; // 0x4aa Mov
	var_321_string = "health"; // 0x4ac PushS
	GetProperty(var_321_string, var_296_float); // 0x4ad ObjFunc
	var_322_int = 1; // 0x4af PushI
	var_323_int = var_322_int - var_295_float; // 0x4b0 Sub
	var_297_float = var_281_float * var_323_int; // 0x4b1 Mult2
	var_324_string = "health"; // 0x4b2 PushS
	var_325_float = 0; var_326_float = 0; var_327_float = 0; var_328_float = 0; // 0x4b3 PushV
	var_326_float = var_296_float - var_297_float; // 0x4b4 Sub2
	var_327_float = 0; // 0x4b5 MovI
	var_328_float = 1; // 0x4b6 MovI
	func_1462(var_325_float, var_326_float, var_327_float, var_328_float); // 0x4b7 Call
	SetProperty(var_324_string, var_325_float); // 0x4b9 ObjFunc
	var_279_float = var_297_float; // 0x4bb Mov
	return 12; // 0x4bc Return
	
Label_1186:
	GetProperty(var_293_string, var_294_int); // 0x4a2 ObjFunc
	
Label_1168:
	var_331_string = "armor"; // 0x490 PushS
	GetProperty(var_331_string, var_292_int); // 0x491 ObjFunc
}


func_510(var_256_float)
{
	var_256_float = 0.5; // 0x1fe MovF
	return 0; // 0x1ff Return
}


