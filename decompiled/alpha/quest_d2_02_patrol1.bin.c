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
	func_1510(); // 0x289 Call
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
	var_16_int = 1; // 0x3a4 PushI
	if(var_16_int == 0) goto Label_967; // 0x3a5 JumpB
	func_1397(); // 0x3a7 Call
	var_18_int = 8308; // 0x3a9 PushI
	var_19_bool = var_14_cvector == var_18_int; // 0x3aa Eq
	if(var_19_bool == 0) goto Label_955; // 0x3ab JumpB
	var_20_string = ""; // 0x3ac PushV
	var_20_string = "Neutral"; // 0x3ad MovS
	func_915(var_15_cvector, var_20_string); // 0x3ae Call
	var_35_int = 7526; // 0x3b0 PushI
	SetMessage(var_35_int); // 0x3b1 TObjFunc
	ClearReplies(); // 0x3b3 TObjFunc
	var_36_int = 7527; // 0x3b5 PushI
	var_37_int = -1; // 0x3b6 PushI
	var_38_int = 8309; // 0x3b7 PushI
	AddReply(var_36_int, var_37_int, var_38_int); // 0x3b8 TObjFunc
	return 0; // 0x3ba Return
	
Label_955:
	var_3_bool = 1; // 0x3bb TMovB
	var_39_bool = 0; // 0x3bc PushV
	func_1537(var_39_bool); // 0x3bd Call
	if(var_39_bool == 0) goto Label_963; // 0x3bf JumpB
	lshStopAnimation(); // 0x3c0 Func
	goto Label_965; // 0x3c2 Jump
	
Label_965:
	return 0; // 0x3c5 Return
	
Label_963:
	StopAnimation(); // 0x3c3 Func
	
Label_967:
	return 0; // 0x3c7 Return
}


task_5_event_0(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_cvector, var_14_object)
{
	var_15_bool = 0; // 0x3d9 PushV
	func_1007(var_15_bool); // 0x3da Call
	if(var_15_bool == 0) goto Label_996; // 0x3dc JumpB
	func_1087(); // 0x3de Call
	var_16_object = Obj(); // 0x3e0 PushV
	var_16_object = var_14_object; // 0x3e1 Mov
	func_968(var_16_object); // 0x3e2 Call
	
Label_996:
	return 0; // 0x3e4 Return
}


task_5_event_26(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_cvector, var_14_string)
{
	var_15_string = "kill_player"; // 0x3e6 PushS
	var_16_bool = var_14_string == var_15_string; // 0x3e7 Eq
	if(var_16_bool == 0) goto Label_1006; // 0x3e8 JumpB
	TaskCall(0); // 0x3ea TaskCall
	func_0(); // 0x3eb Call
	TaskReturn(); // 0x3ec TaskReturn
	
Label_1006:
	return 0; // 0x3ee Return
}


event_17(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_cvector, var_14_object)
{
	var_15_bool = 0; var_16_bool = 0; // 0x5a8 PushV
	var_17_bool = GlobalVars[0]; // 0x5a9 PushGE
	if(var_17_bool == 0) goto Label_1452; // 0x5aa JumpB
	return 2; // 0x5ab Return
	
Label_1452:
	IsPlayerActor(var_14_object, var_16_bool); // 0x5ac Func
	var_18_bool = var_16_bool; // 0x5ae Push
	if(var_18_bool == 0) goto Label_1464; // 0x5af JumpB
	var_19_bool = GlobalVars[0]; // 0x5b0 PushGE
	var_19_bool = 1; // 0x5b1 MovB
	GlobalVars[0] = var_19_bool; // 0x5b2 PopGE
	var_20_bool = 0; var_21_string = ""; var_22_string = ""; // 0x5b3 PushV
	var_21_string = "quest_d2_02"; // 0x5b4 MovS
	var_22_string = "player_attack"; // 0x5b5 MovS
	func_1436(var_20_bool, var_21_string, var_22_string); // 0x5b6 Call
	
Label_1464:
	return 2; // 0x5b8 Return
}


event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_cvector)
{
	var_14_bool = 0; var_15_string = ""; var_16_string = ""; // 0x5b9 PushV
	var_15_string = "quest_d2_02"; // 0x5ba MovS
	var_16_string = "patrol1_unload"; // 0x5bb MovS
	func_1436(var_14_bool, var_15_string, var_16_string); // 0x5bc Call
	return 0; // 0x5be Return
}


event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_cvector, var_14_object, var_15_int, var_16_float, var_17_float)
{
	var_18_object = Obj(); var_19_int = 0; var_20_float = 0; // 0x5d2 PushV
	var_18_object = var_14_object; // 0x5d3 Mov
	var_19_int = var_15_int; // 0x5d4 Mov
	var_20_float = var_16_float; // 0x5d5 Mov
	func_1241(var_19_int, var_20_float); // 0x5d6 Call
	return 0; // 0x5d8 Return
}


event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_cvector, var_14_object, var_15_string)
{
	var_16_float = 0; var_17_float = 0; // 0x5d9 PushV
	var_18_string = "health"; // 0x5da PushS
	var_19_bool = var_15_string == var_18_string; // 0x5db Eq
	if(var_19_bool == 0) goto Label_1509; // 0x5dc JumpB
	var_20_string = "health"; // 0x5dd PushS
	GetProperty(var_20_string, var_17_float); // 0x5de Func
	var_21_int = 0; // 0x5e0 PushI
	var_22_bool = var_17_float <= var_21_int; // 0x5e1 LE
	if(var_22_bool == 0) goto Label_1509; // 0x5e2 JumpB
	SignalDeath(var_14_object); // 0x5e3 Func
	
Label_1509:
	return 2; // 0x5e5 Return
}


event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_cvector, var_14_object)
{
	var_15_object = Obj(); // 0x5e7 PushV
	var_15_object = var_14_object; // 0x5e8 Mov
	func_1471(var_15_object); // 0x5e9 Call
	return 0; // 0x5eb Return
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_cvector)
{
	var_14_bool = GlobalVars[0]; // 0x3d0 PushGE
	var_14_bool = 0; // 0x3d1 MovB
	GlobalVars[0] = var_14_bool; // 0x3d2 PopGE
	func_1009(var_12_cvector, var_13_cvector); // 0x3d4 Call
	return 0; // 0x3d6 Return
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


func_1537(var_88_bool)
{
	var_88_bool = 0; // 0x601 MovB
	return 0; // 0x602 Return
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


func_636(var_0_object)
{
	var_0_object = 1; // 0x27c TMovB
	var_15_int = 0; // 0x27d PushI
	KillTimer(var_15_int); // 0x27e Func
	Stop(); // 0x280 Func
	return 0; // 0x282 Return
}


func_1414(var_27_float, var_28_cvector, var_29_cvector)
{
	var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); // 0x586 PushV
	var_31_cvector = var_29_cvector - var_28_cvector; // 0x587 Sub2
	var_27_float = var_31_cvector | var_31_cvector; // 0x588 Or2
	return 2; // 0x589 Return
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
	func_1217(var_262_bool, var_263_object); // 0x11f Call
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
	func_1217(var_342_bool, var_343_object); // 0x13c Call
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


func_1418(var_315_float, var_316_float, var_317_float)
{
	var_320_bool = var_316_float < var_317_float; // 0x58b LT
	if(var_320_bool == 0) goto Label_1423; // 0x58c JumpB
	var_315_float = var_316_float; // 0x58d Mov
	goto Label_1424; // 0x58e Jump
	
Label_1424:
	return 0; // 0x590 Return
	
Label_1423:
	var_315_float = var_317_float; // 0x58f Mov
}


func_652(var_133_bool, var_134_object)
{
	var_135_bool = 0; var_136_object = Obj(); // 0x28d PushV
	var_136_object = var_134_object; // 0x28e Mov
	func_1217(var_135_bool, var_136_object); // 0x28f Call
	var_133_bool = var_135_bool; // 0x290 Mov
	return 0; // 0x292 Return
}


func_15(var_276_float)
{
	var_276_float = 0.3; // 0x10 MovF
	return 0; // 0x11 Return
}


func_1425(var_325_float, var_326_float, var_327_float, var_328_float)
{
	var_329_bool = var_326_float < var_327_float; // 0x592 LT
	if(var_329_bool == 0) goto Label_1430; // 0x593 JumpB
	var_325_float = var_327_float; // 0x594 Mov
	return 0; // 0x595 Return
	
Label_1430:
	var_330_bool = var_326_float > var_328_float; // 0x596 GT
	if(var_330_bool == 0) goto Label_1434; // 0x597 JumpB
	var_325_float = var_328_float; // 0x598 Mov
	return 0; // 0x599 Return
	
Label_1434:
	var_325_float = var_326_float; // 0x59a Mov
	return 0; // 0x59b Return
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


func_915(var_2_int, var_87_string)
{
	var_88_bool = 0; // 0x394 PushV
	func_1537(var_88_bool); // 0x395 Call
	var_89_bool = var_88_bool == 0; // 0x397 Not
	if(var_89_bool == 0) goto Label_922; // 0x398 JumpB
	return 0; // 0x399 Return
	
Label_922:
	var_90_bool = var_87_string == var_2_int; // 0x39a Eq
	if(var_90_bool == 0) goto Label_925; // 0x39b JumpB
	return 0; // 0x39c Return
	
Label_925:
	var_91_string = ""; // 0x39d PushV
	var_91_string = var_87_string; // 0x39e Mov
	func_1379(var_91_string); // 0x39f Call
	var_2_int = var_87_string; // 0x3a1 TMov
	return 0; // 0x3a2 Return
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
	func_1217(var_68_bool, var_69_object); // 0x4d Call
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
	func_1308(); // 0x77 Call
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
	func_1217(var_365_bool, var_366_object); // 0xb2 Call
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


func_1176(var_83_bool)
{
	var_85_bool = 0; var_86_bool = 0; // 0x498 PushV
	IsDead(var_86_bool); // 0x499 ObjFunc
	var_83_bool = var_86_bool; // 0x49b Mov
	return 2; // 0x49c Return
}


func_409(var_0_object, var_206_bool)
{
	var_207_cvector = CVector(0,0,0); var_208_cvector = CVector(0,0,0); var_209_cvector = CVector(0,0,0); var_210_float = 0; var_211_float = 0; var_212_cvector = CVector(0,0,0); var_213_cvector = CVector(0,0,0); var_214_cvector = CVector(0,0,0); var_215_float = 0; var_216_float = 0; // 0x199 PushV
	var_217_bool = 0; var_218_object = Obj(); // 0x19a PushV
	var_218_object = var_0_object; // 0x19b MovT
	func_1217(var_217_bool, var_218_object); // 0x19c Call
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


func_1308()
{
	var_172_cvector = CVector(0,0,0); var_173_cvector = CVector(0,0,0); var_174_cvector = CVector(0,0,0); var_175_cvector = CVector(0,0,0); var_176_cvector = CVector(0,0,0); var_177_cvector = CVector(0,0,0); // 0x51c PushV
	GetPosition(var_175_cvector); // 0x51d ObjFunc
	GetPosition(var_176_cvector); // 0x51f Func
	var_177_cvector = var_175_cvector - var_176_cvector; // 0x521 Sub2
	var_178_float = GetByIndex(var_177_cvector, 0); // 0x522 PushE
	var_179_float = GetByIndex(var_177_cvector, 2); // 0x523 PushE
	RotateAsync(var_178_float, var_179_float); // 0x524 Func
	return 6; // 0x526 Return
}


func_1181(var_72_bool, var_73_object)
{
	var_74_object = Obj(); var_75_object = Obj(); var_76_object = Obj(); var_77_object = Obj(); // 0x49d PushV
	var_78_bool = var_73_object == 0; // 0x49e NullEq
	if(var_78_bool == 0) goto Label_1186; // 0x49f JumpB
	var_72_bool = 0; // 0x4a0 MovB
	return 4; // 0x4a1 Return
	
Label_1186:
	var_79_bool = 0; // 0x4a2 PushV
	var_79_bool = 0; // 0x4a3 MovB
	var_80_string = "IsDead"; // 0x4a4 PushS
	var_81_int = 1; // 0x4a5 PushI
	var_82_bool = IsFuncExist(var_73_object, var_80_string, var_81_int); // 0x4a6 FuncExist
	if(var_82_bool == 0) goto Label_1198; // 0x4a7 JumpB
	var_83_bool = 0; var_84_object = Obj(); // 0x4a8 PushV
	var_84_object = var_73_object; // 0x4a9 Mov
	func_1176(var_84_object); // 0x4aa Call
	if(var_83_bool == 0) goto Label_1198; // 0x4ac JumpB
	var_79_bool = 1; // 0x4ad MovB
	
Label_1198:
	if(var_79_bool == 0) goto Label_1201; // 0x4ae JumpB
	var_72_bool = 0; // 0x4af MovB
	return 4; // 0x4b0 Return
	
Label_1201:
	GetScene(var_76_object); // 0x4b1 Func
	var_87_bool = var_76_object == 0; // 0x4b3 NullEq
	if(var_87_bool == 0) goto Label_1207; // 0x4b4 JumpB
	var_72_bool = 0; // 0x4b5 MovB
	return 4; // 0x4b6 Return
	
Label_1207:
	GetScene(var_77_object); // 0x4b7 ObjFunc
	var_88_bool = var_76_object != var_77_object; // 0x4b9 Neq
	if(var_88_bool == 0) goto Label_1213; // 0x4ba JumpB
	var_72_bool = 0; // 0x4bb MovB
	return 4; // 0x4bc Return
	
Label_1213:
	var_72_bool = 1; // 0x4bd MovB
	return 4; // 0x4be Return
}


func_1436(var_14_bool, var_15_string, var_16_string)
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x59c PushV
	FindActor(var_18_object, var_15_string); // 0x59d Func
	var_19_bool = var_18_object == 0; // 0x59f NullEq
	if(var_19_bool == 0) goto Label_1443; // 0x5a0 JumpB
	var_14_bool = 0; // 0x5a1 MovB
	return 2; // 0x5a2 Return
	
Label_1443:
	Trigger(var_18_object, var_16_string); // 0x5a3 Func
	var_14_bool = 1; // 0x5a5 MovB
	return 2; // 0x5a6 Return
}


func_799(var_0_object, var_17_int, var_18_object)
{
	var_20_object = Obj(); var_21_bool = 0; var_22_int = 0; var_23_bool = 0; var_24_object = Obj(); var_25_bool = 0; var_26_int = 0; var_27_bool = 0; // 0x31f PushV
	var_0_object = var_18_object; // 0x320 TMov
	var_28_bool = 0; var_29_object = Obj(); // 0x321 PushV
	var_29_object = var_18_object; // 0x322 Mov
	func_1319(var_29_object); // 0x323 Call
	var_68_bool = var_28_bool == 0; // 0x325 Not
	if(var_68_bool == 0) goto Label_809; // 0x326 JumpB
	var_17_int = -2; // 0x327 MovI
	return 8; // 0x328 Return
	
Label_809:
	CreateDialog(var_24_object); // 0x329 Func
	var_69_int = 0; // 0x32b PushV
	func_1533(var_69_int); // 0x32c Call
	SetNPCName(var_69_int); // 0x32e ObjFunc
	var_70_string = ""; // 0x330 PushV
	func_1535(var_70_string); // 0x331 Call
	SetPhoto(var_70_string); // 0x333 ObjFunc
	var_71_int = 0; // 0x335 PushV
	func_1516(var_71_int); // 0x336 Call
	SetPlayerName(var_71_int); // 0x338 ObjFunc
	var_26_int = -1; // 0x33a MovI
	IsOverrideActive(var_25_bool); // 0x33b Func
	var_79_bool = var_25_bool; // 0x33d Push
	if(var_79_bool == 0) goto Label_833; // 0x33e JumpB
	var_17_int = -2; // 0x33f MovI
	return 8; // 0x340 Return
	
Label_833:
	DoDialog(var_24_object); // 0x341 Func
	var_80_object = Obj(); var_81_object = Obj(); // 0x343 PushV
	var_80_object = var_18_object; // 0x344 Mov
	var_81_object = var_24_object; // 0x345 Mov
	TaskCall(4); // 0x346 TaskCall
	func_862(var_82_object, var_83_object, var_84_string, var_85_bool, var_80_object, var_81_object); // 0x347 Call
	TaskReturn(); // 0x348 TaskReturn
	IsDialogEnd(var_27_bool); // 0x34a ObjFunc
	
Label_844:
	var_114_bool = var_27_bool == 0; // 0x34c Not
	if(var_114_bool == 0) goto Label_851; // 0x34d JumpB
	sync(); // 0x34e Func
	IsDialogEnd(var_27_bool); // 0x350 ObjFunc
	goto Label_844; // 0x352 Jump
	
Label_851:
	var_115_object = Obj(); // 0x353 PushV
	var_115_object = var_18_object; // 0x354 Mov
	func_1375(); // 0x355 Call
	StopDialog(var_24_object); // 0x357 Func
	GetReturnValue(var_26_int); // 0x359 ObjFunc
	var_17_int = var_26_int; // 0x35b Mov
	return 8; // 0x35c Return
}


func_1319(var_28_bool)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_bool = 0; // 0x527 PushV
	GetPosition(var_39_cvector); // 0x528 ObjFunc
	GetEyesHeight(var_38_float); // 0x52a ObjFunc
	var_46_float = GetByIndex(var_39_cvector, 1); // 0x52c PushE
	var_46_float = var_46_float + var_38_float; // 0x52d Add2
	SetByIndex(var_39_cvector, 1) = var_46_float; // 0x52e PopE
	GetPosition(var_40_cvector); // 0x52f Func
	GetEyesHeight(var_38_float); // 0x531 Func
	var_47_float = GetByIndex(var_40_cvector, 1); // 0x533 PushE
	var_47_float = var_47_float + var_38_float; // 0x534 Add2
	SetByIndex(var_40_cvector, 1) = var_47_float; // 0x535 PopE
	var_41_cvector = var_39_cvector - var_40_cvector; // 0x536 Sub2
	var_48_float = GetByIndex(var_41_cvector, 1); // 0x537 PushE
	var_48_float = 0; // 0x538 MovI
	SetByIndex(var_41_cvector, 1) = var_48_float; // 0x539 PopE
	var_49_int = var_41_cvector | var_41_cvector; // 0x53a Or
	var_50_float = sqrt(var_49_int); // 0x53b Sqrt
	var_41_cvector = var_41_cvector / var_41_cvector; // 0x53c Div2
	var_42_cvector = -var_41_cvector; // 0x53d Neg2
	var_51_int = 70; // 0x53e PushI
	var_52_float = var_41_cvector * var_51_int; // 0x53f Mult
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); // 0x540 PushV
	var_55_cvector = CVector(0.0, 1.0, 0.0); // 0x541 PushVec
	var_54_cvector = var_42_cvector ^ var_55_cvector; // 0x542 Xor2
	func_1404(var_53_cvector, var_54_cvector); // 0x543 Call
	var_61_int = 25; // 0x545 PushI
	var_62_float = var_53_cvector * var_61_int; // 0x546 Mult
	var_63_int = var_52_float + var_62_float; // 0x547 Add
	var_64_cvector = CVector(0.0, 10.0, 0.0); // 0x548 PushVec
	var_43_cvector = var_63_int - var_64_cvector; // 0x549 Sub2
	var_44_cvector = var_40_cvector + var_43_cvector; // 0x54a Add2
	IsOverrideActive(var_45_bool); // 0x54b Func
	var_65_bool = var_45_bool; // 0x54d Push
	if(var_65_bool == 0) goto Label_1361; // 0x54e JumpB
	var_28_bool = 0; // 0x54f MovB
	return 16; // 0x550 Return
	
Label_1361:
	StopWorld(); // 0x551 Func
	CameraTransit(var_44_cvector, var_42_cvector); // 0x553 Func
	var_66_float = GetByIndex(var_43_cvector, 0); // 0x555 PushE
	var_67_float = GetByIndex(var_43_cvector, 2); // 0x556 PushE
	Rotate(var_66_float, var_67_float); // 0x557 Func
	CameraWaitForPlayFinish(); // 0x559 Func
	ResumeWorld(); // 0x55b Func
	var_28_bool = 1; // 0x55d MovB
	return 16; // 0x55e Return
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


func_1087()
{
	StopGroup0(); // 0x43f Func
	Stop(); // 0x441 Func
	return 0; // 0x443 Return
}


func_1471(var_15_object)
{
	var_16_bool = 0; var_17_bool = 0; // 0x5bf PushV
	var_18_string = "revolver_ammo"; // 0x5c0 PushS
	var_19_int = 0; // 0x5c1 PushI
	var_20_int = 2; // 0x5c2 PushI
	AddItem(var_17_bool, var_18_string, var_19_int, var_20_int); // 0x5c3 Func
	var_21_string = "alpha_pills"; // 0x5c5 PushS
	var_22_int = 0; // 0x5c6 PushI
	var_23_int = 2; // 0x5c7 PushI
	AddItem(var_17_bool, var_21_string, var_22_int, var_23_int); // 0x5c8 Func
	var_24_object = Obj(); // 0x5ca PushV
	var_24_object = var_15_object; // 0x5cb Mov
	TaskCall(2); // 0x5cc TaskCall
	func_663(var_24_object); // 0x5cd Call
	TaskReturn(); // 0x5ce TaskReturn
	return 2; // 0x5d0 Return
}


func_1217(var_68_bool, var_69_object)
{
	var_70_int = 0; var_71_int = 0; // 0x4c1 PushV
	var_72_bool = 0; var_73_object = Obj(); // 0x4c2 PushV
	var_73_object = var_69_object; // 0x4c3 Mov
	func_1181(var_72_bool, var_73_object); // 0x4c4 Call
	var_89_bool = var_72_bool == 0; // 0x4c6 Not
	if(var_89_bool == 0) goto Label_1226; // 0x4c7 JumpB
	var_68_bool = 0; // 0x4c8 MovB
	return 2; // 0x4c9 Return
	
Label_1226:
	var_90_bool = 0; var_91_object = Obj(); var_92_string = ""; // 0x4ca PushV
	var_91_object = var_69_object; // 0x4cb Mov
	var_92_string = "noaccess"; // 0x4cc MovS
	func_1100(var_90_bool, var_91_object, var_92_string); // 0x4cd Call
	var_99_bool = var_90_bool == 0; // 0x4cf Not
	if(var_99_bool == 0) goto Label_1235; // 0x4d0 JumpB
	var_68_bool = 1; // 0x4d1 MovB
	return 2; // 0x4d2 Return
	
Label_1235:
	var_100_string = "noaccess"; // 0x4d3 PushS
	GetProperty(var_100_string, var_71_int); // 0x4d4 ObjFunc
	var_101_int = 0; // 0x4d6 PushI
	var_68_bool = var_71_int == var_101_int; // 0x4d7 Eq2
	return 2; // 0x4d8 Return
}


func_1092(var_307_string, var_308_int)
{
	var_309_int = 1; // 0x445 PushI
	var_310_bool = var_308_int == var_309_int; // 0x446 Eq
	if(var_310_bool == 0) goto Label_1098; // 0x447 JumpB
	var_307_string = "fire"; // 0x448 MovS
	return 0; // 0x449 Return
	
Label_1098:
	var_307_string = "phys"; // 0x44a MovS
	return 0; // 0x44b Return
}


func_968(var_16_object)
{
	var_17_int = 0; var_18_object = Obj(); // 0x3c9 PushV
	var_18_object = var_16_object; // 0x3ca Mov
	TaskCall(3); // 0x3cb TaskCall
	func_799(var_19_object, var_17_int, var_18_object); // 0x3cc Call
	TaskReturn(); // 0x3cd TaskReturn
	return 0; // 0x3cf Return
}


func_1100(var_90_bool, var_91_object, var_92_string)
{
	var_93_bool = 0; var_94_bool = 0; // 0x44c PushV
	var_95_string = "HasProperty"; // 0x44d PushS
	var_96_int = 2; // 0x44e PushI
	var_97_bool = IsFuncExist(var_91_object, var_95_string, var_96_int); // 0x44f FuncExist
	var_98_bool = var_97_bool == 0; // 0x450 Not
	if(var_98_bool == 0) goto Label_1108; // 0x451 JumpB
	var_90_bool = 0; // 0x452 MovB
	return 2; // 0x453 Return
	
Label_1108:
	HasProperty(var_92_string, var_94_bool); // 0x454 ObjFunc
	var_90_bool = var_94_bool; // 0x456 Mov
	return 2; // 0x457 Return
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


func_983()
{
	return 0; // 0x3d7 Return
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


func_1112(var_279_float, var_280_object, var_281_float, var_282_int)
{
	var_286_int = 0; var_287_string = ""; var_288_int = 0; var_289_float = 0; var_290_float = 0; var_291_float = 0; var_292_int = 0; var_293_string = ""; var_294_int = 0; var_295_float = 0; var_296_float = 0; var_297_float = 0; // 0x458 PushV
	var_298_bool = 0; var_299_object = Obj(); var_300_string = ""; // 0x459 PushV
	var_299_object = var_280_object; // 0x45a Mov
	var_300_string = "health"; // 0x45b MovS
	func_1100(var_298_bool, var_299_object, var_300_string); // 0x45c Call
	var_301_bool = var_298_bool == 0; // 0x45e Not
	if(var_301_bool == 0) goto Label_1122; // 0x45f JumpB
	var_279_float = 0.0; // 0x460 MovF
	return 12; // 0x461 Return
	
Label_1122:
	var_302_bool = 0; var_303_object = Obj(); var_304_string = ""; // 0x462 PushV
	var_303_object = var_280_object; // 0x463 Mov
	var_304_string = "armor"; // 0x464 MovS
	func_1100(var_302_bool, var_303_object, var_304_string); // 0x465 Call
	var_305_bool = var_302_bool == 0; // 0x467 Not
	if(var_305_bool == 0) goto Label_1131; // 0x468 JumpB
	var_292_int = 0; // 0x469 MovI
	goto Label_1134; // 0x46a Jump
	
Label_1134:
	var_306_string = "armor_"; // 0x46e PushS
	var_307_string = ""; var_308_int = 0; // 0x46f PushV
	var_308_int = var_282_int; // 0x470 Mov
	func_1092(var_307_string, var_308_int); // 0x471 Call
	var_293_string = var_306_string + var_307_string; // 0x473 Add2
	var_311_bool = 0; var_312_object = Obj(); var_313_string = ""; // 0x474 PushV
	var_312_object = var_280_object; // 0x475 Mov
	var_313_string = var_293_string; // 0x476 Mov
	func_1100(var_311_bool, var_312_object, var_313_string); // 0x477 Call
	var_314_bool = var_311_bool == 0; // 0x479 Not
	if(var_314_bool == 0) goto Label_1149; // 0x47a JumpB
	var_294_int = 0; // 0x47b MovI
	goto Label_1151; // 0x47c Jump
	
Label_1151:
	var_315_float = 0; var_316_float = 0; var_317_float = 0; // 0x47f PushV
	var_318_int = var_292_int + var_294_int; // 0x480 Add
	var_319_float = 100.0; // 0x481 PushF
	var_316_float = var_318_int / var_318_int; // 0x482 Div2
	var_317_float = 1; // 0x483 MovI
	func_1418(var_315_float, var_316_float, var_317_float); // 0x484 Call
	var_295_float = var_315_float; // 0x485 Mov
	var_321_string = "health"; // 0x487 PushS
	GetProperty(var_321_string, var_296_float); // 0x488 ObjFunc
	var_322_int = 1; // 0x48a PushI
	var_323_int = var_322_int - var_295_float; // 0x48b Sub
	var_297_float = var_281_float * var_323_int; // 0x48c Mult2
	var_324_string = "health"; // 0x48d PushS
	var_325_float = 0; var_326_float = 0; var_327_float = 0; var_328_float = 0; // 0x48e PushV
	var_326_float = var_296_float - var_297_float; // 0x48f Sub2
	var_327_float = 0; // 0x490 MovI
	var_328_float = 1; // 0x491 MovI
	func_1425(var_325_float, var_326_float, var_327_float, var_328_float); // 0x492 Call
	SetProperty(var_324_string, var_325_float); // 0x494 ObjFunc
	var_279_float = var_297_float; // 0x496 Mov
	return 12; // 0x497 Return
	
Label_1149:
	GetProperty(var_293_string, var_294_int); // 0x47d ObjFunc
	
Label_1131:
	var_331_string = "armor"; // 0x46b PushS
	GetProperty(var_331_string, var_292_int); // 0x46c ObjFunc
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


func_1241(var_18_object, var_19_int)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_int = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_string = ""; var_31_object = Obj(); var_32_object = Obj(); var_33_cvector = CVector(0,0,0); var_34_float = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = ""; // 0x4d9 PushV
	var_41_bool = 0; // 0x4da PushV
	var_41_bool = 0; // 0x4db MovB
	var_42_int = 4; // 0x4dc PushI
	var_43_bool = var_19_int != var_42_int; // 0x4dd Neq
	if(var_43_bool == 0) goto Label_1251; // 0x4de JumpB
	var_44_int = 5; // 0x4df PushI
	var_45_bool = var_19_int != var_44_int; // 0x4e0 Neq
	if(var_45_bool == 0) goto Label_1251; // 0x4e1 JumpB
	var_41_bool = 1; // 0x4e2 MovB
	
Label_1251:
	if(var_41_bool == 0) goto Label_1270; // 0x4e3 JumpB
	GetScene(var_31_object); // 0x4e4 Func
	GetPosition(var_33_cvector); // 0x4e6 Func
	GetEyesHeight(var_34_float); // 0x4e8 Func
	var_46_float = GetByIndex(var_33_cvector, 1); // 0x4ea PushE
	var_47_int = 2; // 0x4eb PushI
	var_48_float = var_34_float / var_47_int; // 0x4ec Div
	var_46_float = var_46_float + var_48_float; // 0x4ed Add2
	SetByIndex(var_33_cvector, 1) = var_46_float; // 0x4ee PopE
	var_49_string = "scripted"; // 0x4ef PushS
	var_50_cvector = CVector(0.0, 0.0, 1.0); // 0x4f0 PushVec
	var_51_string = "blood.xml"; // 0x4f1 PushS
	AddActorByType(var_32_object, var_49_string, var_31_object, var_33_cvector, var_50_cvector, var_51_string); // 0x4f2 Func
	var_32_object = 0; // 0x4f4 SetNull
	var_31_object = 0; // 0x4f5 SetNull
	
Label_1270:
	var_52_bool = var_18_object == 0; // 0x4f6 NullEq
	if(var_52_bool == 0) goto Label_1273; // 0x4f7 JumpB
	return 20; // 0x4f8 Return
	
Label_1273:
	GetSecondaryAnimationType(var_35_int); // 0x4f9 Func
	var_53_int = 0; // 0x4fb PushI
	var_54_bool = var_35_int < var_53_int; // 0x4fc LT
	if(var_54_bool == 0) goto Label_1279; // 0x4fd JumpB
	return 20; // 0x4fe Return
	
Label_1279:
	GetPosition(var_36_cvector); // 0x4ff ObjFunc
	GetPosition(var_37_cvector); // 0x501 Func
	GetDirection(var_38_cvector); // 0x503 Func
	var_39_cvector = var_37_cvector - var_36_cvector; // 0x505 Sub2
	var_55_float = GetByIndex(var_39_cvector, 0); // 0x506 PushE
	var_56_float = GetByIndex(var_38_cvector, 0); // 0x507 PushE
	var_57_float = var_55_float * var_56_float; // 0x508 Mult
	var_58_float = GetByIndex(var_39_cvector, 2); // 0x509 PushE
	var_59_float = GetByIndex(var_38_cvector, 2); // 0x50a PushE
	var_60_float = var_58_float * var_59_float; // 0x50b Mult
	var_61_int = var_57_float + var_60_float; // 0x50c Add
	var_62_int = 0; // 0x50d PushI
	var_63_bool = var_61_int >= var_62_int; // 0x50e GE
	if(var_63_bool == 0) goto Label_1298; // 0x50f JumpB
	var_40_string = "fhit"; // 0x510 MovS
	goto Label_1299; // 0x511 Jump
	
Label_1299:
	var_64_string = "hit_react"; // 0x513 PushS
	var_65_string = "1"; // 0x514 PushS
	var_66_int = var_40_string + var_65_string; // 0x515 Add
	var_67_string = "2"; // 0x516 PushS
	var_68_int = var_40_string + var_67_string; // 0x517 Add
	var_69_int = -10; // 0x518 PushI
	FadeSecondaryAnimation(var_64_string, var_66_int, var_68_int, var_69_int); // 0x519 Func
	return 20; // 0x51b Return
	
Label_1298:
	var_40_string = "bhit"; // 0x512 MovS
}


func_862(var_0_object, var_1_int, var_2_int, var_3_bool, var_80_object, var_81_object)
{
	var_0_object = var_81_object; // 0x35f TMov
	var_1_int = var_80_object; // 0x360 TMov
	var_3_bool = 0; // 0x361 TMovB
	var_86_int = 1; // 0x362 PushI
	if(var_86_int == 0) goto Label_885; // 0x363 JumpB
	var_87_string = ""; // 0x364 PushV
	var_87_string = "Neutral"; // 0x365 MovS
	func_915(var_81_object, var_87_string); // 0x366 Call
	var_102_int = 7526; // 0x368 PushI
	SetMessage(var_102_int); // 0x369 TObjFunc
	ClearReplies(); // 0x36b TObjFunc
	var_103_int = 7527; // 0x36d PushI
	var_104_int = -1; // 0x36e PushI
	var_105_int = 8309; // 0x36f PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x370 TObjFunc
	goto Label_885; // 0x372 Jump
	
Label_885:
	var_106_bool = 0; // 0x375 PushV
	func_1537(var_106_bool); // 0x376 Call
	if(var_106_bool == 0) goto Label_900; // 0x378 JumpB
	
Label_889:
	lshWaitForAnimEnd(); // 0x379 Func
	var_107_bool = var_3_bool; // 0x37b PushT
	if(var_107_bool == 0) goto Label_894; // 0x37c JumpB
	goto Label_899; // 0x37d Jump
	
Label_899:
	goto Label_914; // 0x383 Jump
	
Label_914:
	return 0; // 0x392 Return
	
Label_894:
	var_108_string = ""; // 0x37e PushV
	var_108_string = var_2_int; // 0x37f MovT
	func_1379(var_108_string); // 0x380 Call
	goto Label_889; // 0x382 Jump
	
Label_900:
	var_109_string = "all"; // 0x384 PushS
	var_110_string = "idle"; // 0x385 PushS
	PlayAnimation(var_109_string, var_110_string); // 0x386 Func
	
Label_904:
	WaitForAnimEnd(); // 0x388 Func
	var_111_bool = var_3_bool; // 0x38a PushT
	if(var_111_bool == 0) goto Label_909; // 0x38b JumpB
	goto Label_914; // 0x38c Jump
	
Label_909:
	var_112_string = "all"; // 0x38d PushS
	var_113_string = "idle"; // 0x38e PushS
	PlayAnimation(var_112_string, var_113_string); // 0x38f Func
	goto Label_904; // 0x391 Jump
}


func_1375()
{
	CameraSwitchToNormal(); // 0x560 Func
	return 0; // 0x562 Return
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
	func_1112(var_279_float, var_280_object, var_281_float, var_282_int); // 0xfa Call
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


func_1379(var_91_string)
{
	var_92_float = 0; var_93_float = 0; var_94_float = 0; var_95_float = 0; // 0x563 PushV
	var_96_string = "playing "; // 0x564 PushS
	var_97_int = var_96_string + var_91_string; // 0x565 Add
	Trace(var_97_int); // 0x566 Func
	lshGetAnimTimes(var_91_string, var_94_float, var_95_float); // 0x568 Func
	lshPlayAnimation(var_94_float, var_95_float); // 0x56a Func
	var_98_string = "start: "; // 0x56c PushS
	var_99_int = var_98_string + var_94_float; // 0x56d Add
	Trace(var_99_int); // 0x56e Func
	var_100_string = "end: "; // 0x570 PushS
	var_101_int = var_100_string + var_95_float; // 0x571 Add
	Trace(var_101_int); // 0x572 Func
	return 4; // 0x574 Return
}


func_1516(var_71_int)
{
	var_72_int = 0; var_73_int = 0; // 0x5ec PushV
	var_74_string = "player"; // 0x5ed PushS
	GetVariable(var_74_string, var_73_int); // 0x5ee Func
	var_75_int = 0; // 0x5f0 PushI
	var_76_bool = var_73_int == var_75_int; // 0x5f1 Eq
	if(var_76_bool == 0) goto Label_1526; // 0x5f2 JumpB
	var_71_int = 200001; // 0x5f3 MovI
	return 2; // 0x5f4 Return
	
Label_1526:
	var_77_int = 1; // 0x5f6 PushI
	var_78_bool = var_73_int == var_77_int; // 0x5f7 Eq
	if(var_78_bool == 0) goto Label_1531; // 0x5f8 JumpB
	var_71_int = 200002; // 0x5f9 MovI
	return 2; // 0x5fa Return
	
Label_1531:
	var_71_int = 200003; // 0x5fb MovI
	return 2; // 0x5fc Return
}


func_508(var_261_int)
{
	var_261_int = 1; // 0x1fc MovI
	return 0; // 0x1fd Return
}


func_1007(var_15_bool)
{
	var_15_bool = 1; // 0x3ef MovB
	return 0; // 0x3f0 Return
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
	func_1217(var_231_bool, var_232_object); // 0x17f Call
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


func_1009(var_0_object, var_1_int)
{
	var_15_int = 0; var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_int = 0; var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_object = Obj(); // 0x3f1 PushV
	GetPFPosition(var_22_object); // 0x3f2 Func
	GetDirection(var_0_object); // 0x3f4 Func
	
Label_1014:
	var_23_int = 60; // 0x3f6 PushI
	irand(var_19_int, var_23_int); // 0x3f7 Func
	var_24_int = 30; // 0x3f9 PushI
	var_25_int = var_19_int + var_24_int; // 0x3fa Add
	Sleep(var_25_int, var_20_bool); // 0x3fb Func
	var_26_bool = var_20_bool; // 0x3fd Push
	if(var_26_bool == 0) goto Label_1027; // 0x3fe JumpB
	func_983(); // 0x400 Call
	goto Label_1085; // 0x402 Jump
	
Label_1085:
	goto Label_1014; // 0x43d Jump
	
Label_1027:
	GetPFPosition(var_21_cvector); // 0x403 Func
	var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x405 PushV
	var_28_cvector = var_1_int; // 0x406 MovT
	var_29_cvector = var_21_cvector; // 0x407 Mov
	func_1414(var_27_float, var_28_cvector, var_29_cvector); // 0x408 Call
	var_32_int = 40000; // 0x40a PushI
	var_33_bool = var_27_float > var_32_int; // 0x40b GT
	if(var_33_bool == 0) goto Label_1071; // 0x40c JumpB
	FindPathTo(var_22_object, var_22_object); // 0x40d Func
	var_34_bool = var_22_object != 0; // 0x40f NullNeq
	if(var_34_bool == 0) goto Label_1066; // 0x410 JumpB
	RotatePath(var_22_object, var_20_bool); // 0x411 Func
	var_35_bool = var_20_bool == 0; // 0x413 Not
	if(var_35_bool == 0) goto Label_1046; // 0x414 JumpB
	goto Label_1084; // 0x415 Jump
	
Label_1084:
	goto Label_1027; // 0x43c Jump
	
Label_1046:
	var_36_bool = 0; // 0x416 PushB
	FollowPath(var_22_object, var_36_bool, var_20_bool); // 0x417 Func
	var_37_bool = var_20_bool == 0; // 0x419 Not
	if(var_37_bool == 0) goto Label_1052; // 0x41a JumpB
	goto Label_1084; // 0x41b Jump
	
Label_1052:
	var_38_float = GetByIndex(var_0_object, 0); // 0x41c PushE
	var_39_float = GetByIndex(var_0_object, 2); // 0x41d PushE
	Rotate(var_38_float, var_39_float, var_20_bool); // 0x41e Func
	var_40_bool = var_20_bool == 0; // 0x420 Not
	if(var_40_bool == 0) goto Label_1059; // 0x421 JumpB
	goto Label_1084; // 0x422 Jump
	
Label_1059:
	WaitForAnimEnd(var_20_bool); // 0x423 Func
	var_41_bool = var_20_bool == 0; // 0x425 Not
	if(var_41_bool == 0) goto Label_1064; // 0x426 JumpB
	goto Label_1084; // 0x427 Jump
	
Label_1064:
	goto Label_1085; // 0x428 Jump
	
Label_1066:
	var_42_int = 1; // 0x42a PushI
	Sleep(var_42_int); // 0x42b Func
	var_22_object = 0; // 0x42d SetNull
	goto Label_1084; // 0x42e Jump
	
Label_1071:
	var_43_float = GetByIndex(var_0_object, 0); // 0x42f PushE
	var_44_float = GetByIndex(var_0_object, 2); // 0x430 PushE
	Rotate(var_43_float, var_44_float, var_20_bool); // 0x431 Func
	var_45_bool = var_20_bool == 0; // 0x433 Not
	if(var_45_bool == 0) goto Label_1078; // 0x434 JumpB
	goto Label_1084; // 0x435 Jump
	
Label_1078:
	WaitForAnimEnd(var_20_bool); // 0x436 Func
	var_46_bool = var_20_bool == 0; // 0x438 Not
	if(var_46_bool == 0) goto Label_1083; // 0x439 JumpB
	goto Label_1084; // 0x43a Jump
	
Label_1083:
	goto Label_1085; // 0x43b Jump
}


func_1397()
{
	var_17_bool = 0; // 0x575 PushV
	func_1537(var_17_bool); // 0x576 Call
	if(var_17_bool == 0) goto Label_1403; // 0x578 JumpB
	lshStopSpeech(); // 0x579 Func
	
Label_1403:
	return 0; // 0x57b Return
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


func_1404(var_53_cvector, var_54_cvector)
{
	var_56_float = 0; var_57_float = 0; // 0x57c PushV
	var_58_int = var_54_cvector | var_54_cvector; // 0x57d Or
	var_57_float = sqrt(var_58_int); // 0x57e Sqrt2
	var_59_float = 0.0; // 0x57f PushF
	var_60_bool = var_57_float < var_59_float; // 0x580 LT
	if(var_60_bool == 0) goto Label_1412; // 0x581 JumpB
	var_53_cvector = CVector(0.0, 0.0, 0.0); // 0x582 MovV
	return 2; // 0x583 Return
	
Label_1412:
	var_53_cvector = var_54_cvector / var_54_cvector; // 0x584 Div2
	return 2; // 0x585 Return
}


func_1533(var_69_int)
{
	var_69_int = 4031; // 0x5fd MovI
	return 0; // 0x5fe Return
}


func_510(var_256_float)
{
	var_256_float = 0.5; // 0x1fe MovF
	return 0; // 0x1ff Return
}


func_1535(var_70_string)
{
	var_70_string = "ui/NPC_Black.png"; // 0x5ff MovS
	return 0; // 0x600 Return
}


