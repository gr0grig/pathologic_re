task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	return 0; // 0x77 Return
}


task_0_event_16(var_0_object, var_1_string, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_int, var_7_bool, var_8_object)
{
	return 0; // 0x79 Return
}


task_0_event_41(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object)
{
	return 0; // 0x7b Return
}


task_2_event_7(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_int)
{
	var_8_int = 0; // 0x2f4 PushI
	var_9_bool = var_7_int != var_8_int; // 0x2f5 Neq
	if(var_9_bool == 0) goto Label_760; // 0x2f6 JumpB
	return 0; // 0x2f7 Return
	
Label_760:
	var_10_bool = 0; var_11_object = Obj(); // 0x2f8 PushV
	var_11_object = var_1_int; // 0x2f9 MovT
	func_646(var_10_bool, var_11_object); // 0x2fa Call
	var_29_bool = var_10_bool == 0; // 0x2fc Not
	if(var_29_bool == 0) goto Label_767; // 0x2fd JumpB
	var_0_object = 1; // 0x2fe TMovB
	
Label_767:
	var_30_int = 0; // 0x2ff PushI
	KillTimer(var_30_int); // 0x300 Func
	Stop(); // 0x302 Func
	return 0; // 0x304 Return
}


task_2_event_10(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object)
{
	RequestClearPath(var_7_object); // 0x306 Func
	return 0; // 0x308 Return
}


task_2_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object)
{
	func_777(var_7_object); // 0x312 Call
	var_9_object = Obj(); // 0x314 PushV
	var_9_object = var_7_object; // 0x315 Mov
	func_1047(); // 0x316 Call
	return 0; // 0x318 Return
}


event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_float, var_10_float)
{
	var_11_object = Obj(); var_12_int = 0; var_13_float = 0; // 0x403 PushV
	var_11_object = var_7_object; // 0x404 Mov
	var_12_int = var_8_int; // 0x405 Mov
	var_13_float = var_9_float; // 0x406 Mov
	func_922(var_12_int, var_13_float); // 0x407 Call
	return 0; // 0x409 Return
}


event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_string)
{
	var_9_float = 0; var_10_float = 0; // 0x40a PushV
	var_11_string = "health"; // 0x40b PushS
	var_12_bool = var_8_string == var_11_string; // 0x40c Eq
	if(var_12_bool == 0) goto Label_1046; // 0x40d JumpB
	var_13_string = "health"; // 0x40e PushS
	GetProperty(var_13_string, var_10_float); // 0x40f Func
	var_14_int = 0; // 0x411 PushI
	var_15_bool = var_10_float <= var_14_int; // 0x412 LE
	if(var_15_bool == 0) goto Label_1046; // 0x413 JumpB
	SignalDeath(var_7_object); // 0x414 Func
	
Label_1046:
	return 2; // 0x416 Return
}


event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object)
{
	var_8_object = Obj(); // 0x418 PushV
	var_8_object = var_7_object; // 0x419 Mov
	func_1018(var_8_object); // 0x41a Call
	return 0; // 0x41c Return
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object)
{
	var_7_object = Obj(); var_8_object = Obj(); // 0x7c PushV
	var_9_bool = 1; // 0x7d PushB
	SensePlayerOnly(var_9_bool); // 0x7e Func
	var_10_float = 1.5; // 0x80 PushF
	Sleep(var_10_float); // 0x81 Func
	var_11_string = "player"; // 0x83 PushS
	FindActor(var_8_object, var_11_string); // 0x84 Func
	var_12_object = Obj(); var_13_bool = 0; var_14_float = 0; // 0x86 PushV
	var_12_object = var_8_object; // 0x87 Mov
	var_13_bool = 1; // 0x88 MovB
	var_14_float = 155.0; // 0x89 MovF
	func_155(var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_12_object, var_13_bool, var_14_float); // 0x8a Call
	return 2; // 0x8c Return
}


func_640()
{
	return 0; // 0x281 Return
}


func_0(var_9_object)
{
	var_10_object = Obj(); // 0x1 PushV
	var_10_object = var_9_object; // 0x2 Mov
	func_9(var_10_object); // 0x3 Call
	
Label_5:
	Hold(); // 0x5 Func
	goto Label_5; // 0x7 Jump
}


func_642(var_232_int)
{
	var_232_int = 1; // 0x282 MovI
	return 0; // 0x283 Return
}


func_644(var_227_float)
{
	var_227_float = 0.5; // 0x284 MovF
	return 0; // 0x285 Return
}


func_646(var_104_bool, var_105_object)
{
	var_106_bool = 0; var_107_object = Obj(); // 0x287 PushV
	var_107_object = var_105_object; // 0x288 Mov
	func_886(var_106_bool, var_107_object); // 0x289 Call
	var_104_bool = var_106_bool; // 0x28a Mov
	return 0; // 0x28c Return
}


func_9(var_10_object)
{
	var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_string = ""; var_16_object = Obj(); var_17_bool = 0; var_18_bool = 0; var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_string = ""; var_26_object = Obj(); var_27_bool = 0; var_28_bool = 0; var_29_float = 0; var_30_cvector = CVector(0,0,0); // 0x9 PushV
	var_31_bool = var_10_object == 0; // 0xa NullEq
	if(var_31_bool == 0) goto Label_17; // 0xb JumpB
	var_32_string = ""; // 0xc PushV
	var_32_string = "fdie"; // 0xd MovS
	func_96(var_32_string); // 0xe Call
	goto Label_95; // 0x10 Jump
	
Label_95:
	return 20; // 0x5f Return
	
Label_17:
	GetPosition(var_21_cvector); // 0x11 ObjFunc
	GetPosition(var_22_cvector); // 0x13 Func
	GetDirection(var_23_cvector); // 0x15 Func
	var_24_cvector = var_22_cvector - var_21_cvector; // 0x17 Sub2
	var_35_float = GetByIndex(var_24_cvector, 0); // 0x18 PushE
	var_36_float = GetByIndex(var_23_cvector, 0); // 0x19 PushE
	var_37_float = var_35_float * var_36_float; // 0x1a Mult
	var_38_float = GetByIndex(var_24_cvector, 2); // 0x1b PushE
	var_39_float = GetByIndex(var_23_cvector, 2); // 0x1c PushE
	var_40_float = var_38_float * var_39_float; // 0x1d Mult
	var_41_int = var_37_float + var_40_float; // 0x1e Add
	var_42_int = 0; // 0x1f PushI
	var_43_bool = var_41_int >= var_42_int; // 0x20 GE
	if(var_43_bool == 0) goto Label_36; // 0x21 JumpB
	var_25_string = "fdie"; // 0x22 MovS
	goto Label_37; // 0x23 Jump
	
Label_37:
	RemoveRTEnvelope(); // 0x25 Func
	SetDeathState(); // 0x27 Func
	Stop(); // 0x29 Func
	StopAsync(); // 0x2b Func
	var_26_object = var_10_object; // 0x2d Mov
	var_44_string = "GetScriptProperty"; // 0x2e PushS
	var_45_int = 2; // 0x2f PushI
	var_46_bool = IsFuncExist(var_10_object, var_44_string, var_45_int); // 0x30 FuncExist
	if(var_46_bool == 0) goto Label_61; // 0x31 JumpB
	var_47_string = "Owner"; // 0x32 PushS
	HasScriptProperty(var_27_bool, var_47_string); // 0x33 ObjFunc
	var_48_bool = var_27_bool; // 0x35 Push
	if(var_48_bool == 0) goto Label_61; // 0x36 JumpB
	var_49_string = "Owner"; // 0x37 PushS
	GetScriptProperty(var_26_object, var_49_string); // 0x38 ObjFunc
	var_50_bool = var_26_object == 0; // 0x3a NullEq
	if(var_50_bool == 0) goto Label_61; // 0x3b JumpB
	var_26_object = var_10_object; // 0x3c Mov
	
Label_61:
	var_51_string = "@GetEyesHeight"; // 0x3d PushS
	var_52_int = 1; // 0x3e PushI
	var_53_bool = IsFuncExist(var_26_object, var_51_string, var_52_int); // 0x3f FuncExist
	if(var_53_bool == 0) goto Label_76; // 0x40 JumpB
	GetEyesHeight(var_29_float); // 0x41 ObjFunc
	var_30_cvector = CVector(0.0, 0.0, 0.0); // 0x43 MovV
	var_54_float = GetByIndex(var_30_cvector, 1); // 0x44 PushE
	var_54_float = var_29_float; // 0x45 Mov
	SetByIndex(var_30_cvector, 1) = var_54_float; // 0x46 PopE
	var_55_string = "head"; // 0x47 PushS
	LookAsync(var_10_object, var_55_string, var_30_cvector); // 0x48 Func
	var_28_bool = 1; // 0x4a MovB
	goto Label_77; // 0x4b Jump
	
Label_77:
	var_56_string = "all"; // 0x4d PushS
	PlayAnimation(var_56_string, var_25_string); // 0x4e Func
	WaitForAnimEnd(); // 0x50 Func
	var_57_bool = var_28_bool; // 0x52 Push
	if(var_57_bool == 0) goto Label_89; // 0x53 JumpB
	StopAsync(); // 0x54 Func
	var_58_string = "head"; // 0x56 PushS
	UnlookAsync(var_58_string); // 0x57 Func
	
Label_89:
	var_59_string = "all"; // 0x59 PushS
	LockAnimationEnd(var_59_string, var_25_string); // 0x5a Func
	RemoveEnvelope(); // 0x5c Func
	var_26_object = 0; // 0x5e SetNull
	
Label_76:
	var_28_bool = 0; // 0x4c MovB
	
Label_36:
	var_25_string = "bdie"; // 0x24 MovS
}


func_777(var_0_object)
{
	var_0_object = 1; // 0x309 TMovB
	var_8_int = 0; // 0x30a PushI
	KillTimer(var_8_int); // 0x30b Func
	Stop(); // 0x30d Func
	return 0; // 0x30f Return
}


func_653(var_0_object, var_1_int, var_80_bool, var_81_object, var_82_float, var_83_float, var_84_bool, var_85_bool)
{
	var_88_bool = 0; var_89_bool = 0; var_90_object = Obj(); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_float = 0; var_95_object = Obj(); var_96_bool = 0; var_97_bool = 0; var_98_object = Obj(); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_float = 0; var_103_object = Obj(); // 0x28d PushV
	var_0_object = 0; // 0x28e TMovB
	var_1_int = var_81_object; // 0x28f TMov
	var_97_bool = var_85_bool; // 0x290 Mov
	
Label_657:
	var_104_bool = 0; var_105_object = Obj(); // 0x291 PushV
	var_105_object = var_81_object; // 0x292 Mov
	func_646(var_104_bool, var_105_object); // 0x293 Call
	var_108_bool = var_104_bool == 0; // 0x295 Not
	if(var_108_bool == 0) goto Label_665; // 0x296 JumpB
	var_80_bool = 0; // 0x297 MovB
	return 16; // 0x298 Return
	
Label_665:
	GetPosition(var_99_cvector); // 0x299 ObjFunc
	GetPosition(var_100_cvector); // 0x29b Func
	var_101_cvector = var_99_cvector - var_100_cvector; // 0x29d Sub2
	var_102_float = var_101_cvector | var_101_cvector; // 0x29e Or2
	var_109_bool = 0; // 0x29f PushV
	var_109_bool = 0; // 0x2a0 MovB
	var_110_int = 0; // 0x2a1 PushI
	var_111_bool = var_83_float > var_110_int; // 0x2a2 GT
	if(var_111_bool == 0) goto Label_680; // 0x2a3 JumpB
	var_112_float = var_83_float * var_83_float; // 0x2a4 Mult
	var_113_bool = var_102_float > var_112_float; // 0x2a5 GT
	if(var_113_bool == 0) goto Label_680; // 0x2a6 JumpB
	var_109_bool = 1; // 0x2a7 MovB
	
Label_680:
	if(var_109_bool == 0) goto Label_685; // 0x2a8 JumpB
	Stop(); // 0x2a9 Func
	var_80_bool = 0; // 0x2ab MovB
	return 16; // 0x2ac Return
	
Label_685:
	var_114_float = var_82_float * var_82_float; // 0x2ad Mult
	var_115_bool = var_102_float > var_114_float; // 0x2ae GT
	if(var_115_bool == 0) goto Label_747; // 0x2af JumpB
	GetPFPosition(var_99_cvector); // 0x2b0 ObjFunc
	FindPathTo(var_103_object, var_99_cvector); // 0x2b2 Func
	var_116_bool = var_103_object != 0; // 0x2b4 NullNeq
	if(var_116_bool == 0) goto Label_696; // 0x2b5 JumpB
	var_98_object = var_103_object; // 0x2b6 Mov
	var_103_object = 0; // 0x2b7 SetNull
	
Label_696:
	var_117_bool = var_98_object != 0; // 0x2b8 NullNeq
	if(var_117_bool == 0) goto Label_729; // 0x2b9 JumpB
	var_118_bool = var_97_bool; // 0x2ba Push
	if(var_118_bool == 0) goto Label_706; // 0x2bb JumpB
	var_97_bool = 0; // 0x2bc MovB
	RotatePath(var_98_object, var_96_bool); // 0x2bd Func
	var_119_bool = var_96_bool == 0; // 0x2bf Not
	if(var_119_bool == 0) goto Label_706; // 0x2c0 JumpB
	goto Label_753; // 0x2c1 Jump
	
Label_753:
	var_80_bool = !var_0_object; // 0x2f1 Not2
	return 16; // 0x2f2 Return
	
Label_706:
	var_120_int = 0; // 0x2c2 PushI
	var_121_float = 0.3; // 0x2c3 PushF
	SetTimer(var_120_int, var_121_float); // 0x2c4 Func
	var_122_string = ""; // 0x2c6 PushV
	func_793(var_122_string); // 0x2c7 Call
	var_123_string = ""; // 0x2c9 PushV
	func_795(var_123_string); // 0x2ca Call
	FollowPath(var_98_object, var_84_bool, var_96_bool, var_122_string, var_123_string); // 0x2cc Func
	var_124_bool = var_96_bool == 0; // 0x2ce Not
	if(var_124_bool == 0) goto Label_727; // 0x2cf JumpB
	var_125_object = var_0_object; // 0x2d0 PushT
	if(var_125_object == 0) goto Label_725; // 0x2d1 JumpB
	var_98_object = 0; // 0x2d2 SetNull
	goto Label_753; // 0x2d3 Jump
	
Label_725:
	goto Label_752; // 0x2d5 Jump
	
Label_752:
	goto Label_657; // 0x2f0 Jump
	
Label_727:
	var_98_object = 0; // 0x2d7 SetNull
	goto Label_745; // 0x2d8 Jump
	
Label_745:
	var_103_object = 0; // 0x2e9 SetNull
	goto Label_751; // 0x2ea Jump
	
Label_751:
	var_98_object = 0; // 0x2ef SetNull
	
Label_729:
	var_126_int = 0; // 0x2d9 PushI
	KillTimer(var_126_int); // 0x2da Func
	var_127_float = 0.5; // 0x2dc PushF
	Sleep(var_127_float, var_96_bool); // 0x2dd Func
	var_128_bool = var_96_bool == 0; // 0x2df Not
	if(var_128_bool == 0) goto Label_741; // 0x2e0 JumpB
	var_129_object = var_0_object; // 0x2e1 PushT
	if(var_129_object == 0) goto Label_741; // 0x2e2 JumpB
	var_98_object = 0; // 0x2e3 SetNull
	goto Label_753; // 0x2e4 Jump
	
Label_741:
	var_130_int = 0; // 0x2e5 PushI
	var_131_float = 0.3; // 0x2e6 PushF
	SetTimer(var_130_int, var_131_float); // 0x2e7 Func
	
Label_747:
	var_132_int = 0; // 0x2eb PushI
	KillTimer(var_132_int); // 0x2ec Func
	goto Label_753; // 0x2ee Jump
}


func_142(var_247_float)
{
	var_247_float = 0.1; // 0x8f MovF
	return 0; // 0x90 Return
}


func_399(var_0_object, var_207_bool, var_208_float)
{
	var_209_int = 0; var_210_bool = 0; var_211_int = 0; var_212_bool = 0; // 0x18f PushV
	irand(var_211_int, var_212_bool); // 0x190 Func
	var_213_int = 1; // 0x192 PushI
	var_211_int = var_211_int + var_213_int; // 0x193 Add2
	Face(var_0_object); // 0x194 Func
	var_214_bool = 1; // 0x196 PushB
	SetAttackState(var_214_bool); // 0x197 Func
	var_215_string = "all"; // 0x199 PushS
	var_216_string = "attack_begin"; // 0x19a PushS
	var_217_int = var_216_string + var_211_int; // 0x19b Add
	PlayAnimation(var_215_string, var_217_int); // 0x19c Func
	WaitForAnimEnd(); // 0x19e Func
	func_606(var_211_int, var_212_bool); // 0x1a1 Call
	var_233_bool = 0; var_234_object = Obj(); // 0x1a3 PushV
	var_234_object = var_0_object; // 0x1a4 MovT
	func_148(var_233_bool, var_234_object); // 0x1a5 Call
	var_235_bool = var_233_bool == 0; // 0x1a7 Not
	if(var_235_bool == 0) goto Label_429; // 0x1a8 JumpB
	StopAsync(); // 0x1a9 Func
	var_207_bool = 0; // 0x1ab MovB
	return 4; // 0x1ac Return
	
Label_429:
	var_236_float = 0; var_237_int = 0; // 0x1ad PushV
	var_236_float = var_208_float; // 0x1ae Mov
	var_237_int = var_211_int; // 0x1af Mov
	func_360(var_212_bool, var_236_float, var_237_int); // 0x1b0 Call
	var_312_string = "all"; // 0x1b2 PushS
	var_313_string = "attack_middle"; // 0x1b3 PushS
	var_314_int = var_313_string + var_211_int; // 0x1b4 Add
	HasAnimation(var_212_bool, var_312_string, var_314_int); // 0x1b5 Func
	var_315_bool = var_212_bool; // 0x1b7 Push
	if(var_315_bool == 0) goto Label_463; // 0x1b8 JumpB
	var_316_string = "all"; // 0x1b9 PushS
	var_317_string = "attack_middle"; // 0x1ba PushS
	var_318_int = var_317_string + var_211_int; // 0x1bb Add
	PlayAnimation(var_316_string, var_318_int); // 0x1bc Func
	WaitForAnimEnd(); // 0x1be Func
	var_319_bool = 0; var_320_object = Obj(); // 0x1c0 PushV
	var_320_object = var_0_object; // 0x1c1 MovT
	func_148(var_319_bool, var_320_object); // 0x1c2 Call
	var_321_bool = var_319_bool == 0; // 0x1c4 Not
	if(var_321_bool == 0) goto Label_458; // 0x1c5 JumpB
	StopAsync(); // 0x1c6 Func
	var_207_bool = 0; // 0x1c8 MovB
	return 4; // 0x1c9 Return
	
Label_458:
	var_322_float = 0; var_323_int = 0; // 0x1ca PushV
	var_322_float = var_208_float; // 0x1cb Mov
	var_323_int = var_211_int; // 0x1cc Mov
	func_360(var_212_bool, var_322_float, var_323_int); // 0x1cd Call
	
Label_463:
	var_324_bool = 0; // 0x1cf PushB
	SetAttackState(var_324_bool); // 0x1d0 Func
	var_325_string = "all"; // 0x1d2 PushS
	var_326_string = "attack_end"; // 0x1d3 PushS
	var_327_int = var_326_string + var_211_int; // 0x1d4 Add
	PlayAnimation(var_325_string, var_327_int); // 0x1d5 Func
	var_328_bool = 0; var_329_float = 0; // 0x1d7 PushV
	var_329_float = 0.75; // 0x1d8 MovF
	func_479(var_328_bool, var_329_float); // 0x1d9 Call
	StopAsync(); // 0x1db Func
	var_207_bool = 1; // 0x1dd MovB
	return 4; // 0x1de Return
}


func_145(var_254_int)
{
	var_254_int = 0; // 0x92 MovI
	return 0; // 0x93 Return
}


func_148(var_54_bool, var_55_object)
{
	var_56_bool = 0; var_57_object = Obj(); // 0x95 PushV
	var_57_object = var_55_object; // 0x96 Mov
	func_886(var_56_bool, var_57_object); // 0x97 Call
	var_54_bool = var_56_bool; // 0x98 Mov
	return 0; // 0x9a Return
}


func_793(var_122_string)
{
	var_122_string = "walk"; // 0x319 MovS
	return 0; // 0x31a Return
}


func_922(var_11_object, var_12_int)
{
	var_14_object = Obj(); var_15_object = Obj(); var_16_cvector = CVector(0,0,0); var_17_float = 0; var_18_int = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_string = ""; var_24_object = Obj(); var_25_object = Obj(); var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_int = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_string = ""; // 0x39a PushV
	var_34_bool = 0; // 0x39b PushV
	var_34_bool = 0; // 0x39c MovB
	var_35_int = 4; // 0x39d PushI
	var_36_bool = var_12_int != var_35_int; // 0x39e Neq
	if(var_36_bool == 0) goto Label_932; // 0x39f JumpB
	var_37_int = 5; // 0x3a0 PushI
	var_38_bool = var_12_int != var_37_int; // 0x3a1 Neq
	if(var_38_bool == 0) goto Label_932; // 0x3a2 JumpB
	var_34_bool = 1; // 0x3a3 MovB
	
Label_932:
	if(var_34_bool == 0) goto Label_951; // 0x3a4 JumpB
	GetScene(var_24_object); // 0x3a5 Func
	GetPosition(var_26_cvector); // 0x3a7 Func
	GetEyesHeight(var_27_float); // 0x3a9 Func
	var_39_float = GetByIndex(var_26_cvector, 1); // 0x3ab PushE
	var_40_int = 2; // 0x3ac PushI
	var_41_float = var_27_float / var_40_int; // 0x3ad Div
	var_39_float = var_39_float + var_41_float; // 0x3ae Add2
	SetByIndex(var_26_cvector, 1) = var_39_float; // 0x3af PopE
	var_42_string = "scripted"; // 0x3b0 PushS
	var_43_cvector = CVector(0.0, 0.0, 1.0); // 0x3b1 PushVec
	var_44_string = "blood.xml"; // 0x3b2 PushS
	AddActorByType(var_25_object, var_42_string, var_24_object, var_26_cvector, var_43_cvector, var_44_string); // 0x3b3 Func
	var_25_object = 0; // 0x3b5 SetNull
	var_24_object = 0; // 0x3b6 SetNull
	
Label_951:
	var_45_bool = var_11_object == 0; // 0x3b7 NullEq
	if(var_45_bool == 0) goto Label_954; // 0x3b8 JumpB
	return 20; // 0x3b9 Return
	
Label_954:
	GetSecondaryAnimationType(var_28_int); // 0x3ba Func
	var_46_int = 0; // 0x3bc PushI
	var_47_bool = var_28_int < var_46_int; // 0x3bd LT
	if(var_47_bool == 0) goto Label_960; // 0x3be JumpB
	return 20; // 0x3bf Return
	
Label_960:
	GetPosition(var_29_cvector); // 0x3c0 ObjFunc
	GetPosition(var_30_cvector); // 0x3c2 Func
	GetDirection(var_31_cvector); // 0x3c4 Func
	var_32_cvector = var_30_cvector - var_29_cvector; // 0x3c6 Sub2
	var_48_float = GetByIndex(var_32_cvector, 0); // 0x3c7 PushE
	var_49_float = GetByIndex(var_31_cvector, 0); // 0x3c8 PushE
	var_50_float = var_48_float * var_49_float; // 0x3c9 Mult
	var_51_float = GetByIndex(var_32_cvector, 2); // 0x3ca PushE
	var_52_float = GetByIndex(var_31_cvector, 2); // 0x3cb PushE
	var_53_float = var_51_float * var_52_float; // 0x3cc Mult
	var_54_int = var_50_float + var_53_float; // 0x3cd Add
	var_55_int = 0; // 0x3ce PushI
	var_56_bool = var_54_int >= var_55_int; // 0x3cf GE
	if(var_56_bool == 0) goto Label_979; // 0x3d0 JumpB
	var_33_string = "fhit"; // 0x3d1 MovS
	goto Label_980; // 0x3d2 Jump
	
Label_980:
	var_57_string = "hit_react"; // 0x3d4 PushS
	var_58_string = "1"; // 0x3d5 PushS
	var_59_int = var_33_string + var_58_string; // 0x3d6 Add
	var_60_string = "2"; // 0x3d7 PushS
	var_61_int = var_33_string + var_60_string; // 0x3d8 Add
	var_62_int = -10; // 0x3d9 PushI
	FadeSecondaryAnimation(var_57_string, var_59_int, var_61_int, var_62_int); // 0x3da Func
	return 20; // 0x3dc Return
	
Label_979:
	var_33_string = "bhit"; // 0x3d3 MovS
}


func_155(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_12_object, var_13_bool, var_14_float, var_86_bool)
{
	var_15_bool = 0; var_16_bool = 0; var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_bool = 0; var_21_bool = 0; var_22_cvector = CVector(0,0,0); var_23_float = 0; var_24_float = 0; var_25_bool = 0; var_26_bool = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_bool = 0; var_31_bool = 0; var_32_cvector = CVector(0,0,0); var_33_float = 0; var_34_float = 0; // 0x9b PushV
	var_1_int = 0; // 0x9c TMovI
	
Label_157:
	var_35_string = "all"; // 0x9d PushS
	var_36_string = "attack_begin"; // 0x9e PushS
	var_37_int = 1; // 0x9f PushI
	var_38_int = var_1_int + var_37_int; // 0xa0 Add
	var_39_int = var_36_string + var_38_int; // 0xa1 Add
	HasAnimation(var_25_bool, var_35_string, var_39_int); // 0xa2 Func
	var_40_bool = var_25_bool == 0; // 0xa4 Not
	if(var_40_bool == 0) goto Label_167; // 0xa5 JumpB
	goto Label_170; // 0xa6 Jump
	
Label_170:
	var_2_int = 0; // 0xaa TMovI
	
Label_171:
	var_41_string = "attack"; // 0xab PushS
	var_42_int = 1; // 0xac PushI
	var_43_int = var_2_int + var_42_int; // 0xad Add
	var_44_int = var_41_string + var_43_int; // 0xae Add
	IsExisting3DSound(var_26_bool, var_44_int); // 0xaf Func
	var_45_bool = var_26_bool == 0; // 0xb1 Not
	if(var_45_bool == 0) goto Label_180; // 0xb2 JumpB
	goto Label_183; // 0xb3 Jump
	
Label_183:
	var_4_int = 0; // 0xb7 TMovI
	var_46_string = "@GetAttackDistance"; // 0xb8 PushS
	var_47_int = 1; // 0xb9 PushI
	var_48_bool = IsFuncExist(var_12_object, var_46_string, var_47_int); // 0xba FuncExist
	if(var_48_bool == 0) goto Label_193; // 0xbb JumpB
	GetAttackDistance(var_27_float); // 0xbc ObjFunc
	var_49_int = 50; // 0xbe PushI
	var_27_float = var_27_float + var_49_int; // 0xbf Add2
	goto Label_194; // 0xc0 Jump
	
Label_194:
	var_50_int = 150; // 0xc2 PushI
	var_51_bool = var_27_float >= var_50_int; // 0xc3 GE
	if(var_51_bool == 0) goto Label_198; // 0xc4 JumpB
	var_27_float = 150; // 0xc5 MovI
	
Label_198:
	var_3_bool = 0; // 0xc6 TMovB
	var_0_object = var_12_object; // 0xc7 TMov
	IsPlayerActor(var_0_object, var_30_bool); // 0xc8 Func
	var_52_bool = var_13_bool; // 0xca Push
	if(var_52_bool == 0) goto Label_206; // 0xcb JumpB
	var_31_bool = 0; // 0xcc MovB
	goto Label_207; // 0xcd Jump
	
Label_207:
	var_53_bool = 0; // 0xcf PushV
	var_53_bool = 0; // 0xd0 MovB
	var_54_bool = 0; var_55_object = Obj(); // 0xd1 PushV
	var_55_object = var_0_object; // 0xd2 MovT
	func_148(var_54_bool, var_55_object); // 0xd3 Call
	if(var_54_bool == 0) goto Label_217; // 0xd5 JumpB
	var_73_bool = var_3_bool == 0; // 0xd6 Not
	if(var_73_bool == 0) goto Label_217; // 0xd7 JumpB
	var_53_bool = 1; // 0xd8 MovB
	
Label_217:
	if(var_53_bool == 0) goto Label_343; // 0xd9 JumpB
	GetPFPosition(var_28_cvector); // 0xda TObjFunc
	GetPFPosition(var_29_cvector); // 0xdc Func
	var_32_cvector = var_28_cvector - var_29_cvector; // 0xde Sub2
	var_33_float = var_32_cvector | var_32_cvector; // 0xdf Or2
	var_74_float = 300.0; // 0xe0 PushF
	var_75_int = var_74_float + var_27_float; // 0xe1 Add
	var_76_float = 300.0; // 0xe2 PushF
	var_77_int = var_76_float + var_27_float; // 0xe3 Add
	var_78_float = var_75_int * var_77_int; // 0xe4 Mult
	var_79_bool = var_33_float >= var_78_float; // 0xe5 GE
	if(var_79_bool == 0) goto Label_246; // 0xe6 JumpB
	var_80_bool = 0; var_81_object = Obj(); var_82_float = 0; var_83_float = 0; var_84_bool = 0; var_85_bool = 0; // 0xe7 PushV
	var_81_object = var_0_object; // 0xe8 MovT
	var_82_float = var_27_float; // 0xe9 Mov
	var_83_float = 3000.0; // 0xea MovF
	var_84_bool = 1; // 0xeb MovB
	var_85_bool = 0; // 0xec MovB
	TaskCall(2); // 0xed TaskCall
	func_653(var_86_bool, var_87_object, var_80_bool, var_81_object, var_82_float, var_83_float, var_84_bool, var_85_bool); // 0xee Call
	TaskReturn(); // 0xef TaskReturn
	var_133_bool = var_86_bool == 0; // 0xf1 Not
	if(var_133_bool == 0) goto Label_244; // 0xf2 JumpB
	goto Label_343; // 0xf3 Jump
	
Label_343:
	WaitForAnimEnd(); // 0x157 Func
	var_134_bool = var_3_bool; // 0x159 PushT
	if(var_134_bool == 0) goto Label_348; // 0x15a JumpB
	return 20; // 0x15b Return
	
Label_348:
	var_135_string = "all"; // 0x15c PushS
	var_136_string = "attack_off"; // 0x15d PushS
	PlayAnimation(var_135_string, var_136_string); // 0x15e Func
	WaitForAnimEnd(); // 0x160 Func
	var_137_bool = var_30_bool; // 0x162 Push
	if(var_137_bool == 0) goto Label_359; // 0x163 JumpB
	var_138_float = 2.0; // 0x164 PushF
	Sleep(var_138_float); // 0x165 Func
	
Label_359:
	return 20; // 0x167 Return
	
Label_244:
	var_31_bool = 0; // 0xf4 MovB
	goto Label_342; // 0xf5 Jump
	
Label_342:
	goto Label_207; // 0x156 Jump
	
Label_246:
	var_139_float = var_14_float * var_14_float; // 0xf6 Mult
	var_140_bool = var_33_float >= var_139_float; // 0xf7 GE
	if(var_140_bool == 0) goto Label_334; // 0xf8 JumpB
	var_141_bool = var_31_bool == 0; // 0xf9 Not
	if(var_141_bool == 0) goto Label_264; // 0xfa JumpB
	var_142_object = Obj(); // 0xfb PushV
	var_142_object = var_0_object; // 0xfc MovT
	func_989(); // 0xfd Call
	var_151_string = "all"; // 0xff PushS
	var_152_string = "attack_on"; // 0x100 PushS
	PlayAnimation(var_151_string, var_152_string); // 0x101 Func
	WaitForAnimEnd(); // 0x103 Func
	StopAsync(); // 0x105 Func
	var_31_bool = 1; // 0x107 MovB
	
Label_264:
	rand(var_34_float); // 0x108 Func
	var_153_bool = 0; // 0x10a PushV
	var_153_bool = 1; // 0x10b MovB
	var_154_float = 0.6; // 0x10c PushF
	var_155_bool = var_34_float < var_154_float; // 0x10d LT
	if(var_155_bool == 0) goto Label_276; // 0x10e JumpB
	var_156_bool = 0; // 0x10f PushV
	func_595(var_153_bool, var_156_bool); // 0x110 Call
	if(var_156_bool == 0) goto Label_276; // 0x112 JumpB
	var_153_bool = 0; // 0x113 MovB
	
Label_276:
	if(var_153_bool == 0) goto Label_290; // 0x114 JumpB
	Face(var_0_object); // 0x115 Func
	var_162_string = "all"; // 0x117 PushS
	var_163_string = "attack_stay"; // 0x118 PushS
	PlayAnimation(var_162_string, var_163_string); // 0x119 Func
	var_164_bool = 0; var_165_float = 0; // 0x11b PushV
	var_165_float = var_14_float; // 0x11c Mov
	func_503(var_34_float, var_164_bool, var_165_float); // 0x11d Call
	StopAsync(); // 0x11f Func
	goto Label_333; // 0x121 Jump
	
Label_333:
	goto Label_342; // 0x14d Jump
	
Label_290:
	Face(var_0_object); // 0x122 Func
	var_337_string = "all"; // 0x124 PushS
	var_338_string = "fjump"; // 0x125 PushS
	PlayAnimation(var_337_string, var_338_string); // 0x126 Func
	WaitForAnimEnd(); // 0x128 Func
	var_339_cvector = CVector(0.0, 0.0, 0.0); // 0x12a PushVec
	SetSpeed(var_339_cvector); // 0x12b Func
	Stop(); // 0x12d Func
	StopAsync(); // 0x12f Func
	var_340_bool = 0; // 0x131 PushV
	func_595(var_34_float, var_340_bool); // 0x132 Call
	var_341_bool = var_340_bool == 0; // 0x134 Not
	if(var_341_bool == 0) goto Label_333; // 0x135 JumpB
	var_342_bool = 0; var_343_object = Obj(); // 0x136 PushV
	var_343_object = var_0_object; // 0x137 MovT
	func_148(var_342_bool, var_343_object); // 0x138 Call
	var_344_bool = var_342_bool == 0; // 0x13a Not
	if(var_344_bool == 0) goto Label_317; // 0x13b JumpB
	goto Label_343; // 0x13c Jump
	
Label_317:
	GetPFPosition(var_28_cvector); // 0x13d TObjFunc
	GetPFPosition(var_29_cvector); // 0x13f Func
	var_32_cvector = var_28_cvector - var_29_cvector; // 0x141 Sub2
	var_33_float = var_32_cvector | var_32_cvector; // 0x142 Or2
	var_345_float = var_14_float * var_14_float; // 0x143 Mult
	var_346_bool = var_33_float < var_345_float; // 0x144 LT
	if(var_346_bool == 0) goto Label_333; // 0x145 JumpB
	var_347_bool = 0; var_348_float = 0; // 0x146 PushV
	var_348_float = var_14_float; // 0x147 Mov
	func_399(var_34_float, var_347_bool, var_348_float); // 0x148 Call
	var_349_bool = var_347_bool == 0; // 0x14a Not
	if(var_349_bool == 0) goto Label_333; // 0x14b JumpB
	goto Label_343; // 0x14c Jump
	
Label_334:
	var_350_bool = 0; var_351_float = 0; // 0x14e PushV
	var_351_float = var_14_float; // 0x14f Mov
	func_399(var_34_float, var_350_bool, var_351_float); // 0x150 Call
	var_352_bool = var_350_bool == 0; // 0x152 Not
	if(var_352_bool == 0) goto Label_341; // 0x153 JumpB
	goto Label_343; // 0x154 Jump
	
Label_341:
	var_31_bool = 1; // 0x155 MovB
	
Label_206:
	var_31_bool = 1; // 0xce MovB
	
Label_193:
	var_27_float = var_14_float; // 0xc1 Mov
	
Label_180:
	var_353_int = 1; // 0xb4 PushI
	var_2_int = var_2_int + var_353_int; // 0xb5 Add2
	goto Label_171; // 0xb6 Jump
	
Label_167:
	var_354_int = 1; // 0xa7 PushI
	var_1_int = var_1_int + var_354_int; // 0xa8 Add2
	goto Label_157; // 0xa9 Jump
}


func_795(var_123_string)
{
	var_123_string = "run"; // 0x31b MovS
	return 0; // 0x31c Return
}


func_797(var_284_string, var_285_int)
{
	var_286_int = 1; // 0x31e PushI
	var_287_bool = var_285_int == var_286_int; // 0x31f Eq
	if(var_287_bool == 0) goto Label_803; // 0x320 JumpB
	var_284_string = "fire"; // 0x321 MovS
	return 0; // 0x322 Return
	
Label_803:
	var_284_string = "phys"; // 0x323 MovS
	return 0; // 0x324 Return
}


func_543(var_0_object, var_177_bool)
{
	var_178_cvector = CVector(0,0,0); var_179_cvector = CVector(0,0,0); var_180_cvector = CVector(0,0,0); var_181_float = 0; var_182_float = 0; var_183_cvector = CVector(0,0,0); var_184_cvector = CVector(0,0,0); var_185_cvector = CVector(0,0,0); var_186_float = 0; var_187_float = 0; // 0x21f PushV
	var_188_bool = 0; var_189_object = Obj(); // 0x220 PushV
	var_189_object = var_0_object; // 0x221 MovT
	func_148(var_188_bool, var_189_object); // 0x222 Call
	var_190_bool = var_188_bool == 0; // 0x224 Not
	if(var_190_bool == 0) goto Label_552; // 0x225 JumpB
	var_177_bool = 0; // 0x226 MovB
	return 10; // 0x227 Return
	
Label_552:
	var_191_bool = 0; // 0x228 PushV
	func_595(var_187_float, var_191_bool); // 0x229 Call
	if(var_191_bool == 0) goto Label_574; // 0x22b JumpB
	GetPFPosition(var_183_cvector); // 0x22c TObjFunc
	GetPFPosition(var_184_cvector); // 0x22e Func
	var_185_cvector = var_183_cvector - var_184_cvector; // 0x230 Sub2
	var_186_float = var_185_cvector | var_185_cvector; // 0x231 Or2
	GetAttackDistance(var_187_float); // 0x232 TObjFunc
	var_192_int = 50; // 0x234 PushI
	var_187_float = var_187_float + var_192_int; // 0x235 Add2
	var_193_float = var_187_float * var_187_float; // 0x236 Mult
	var_194_bool = var_186_float <= var_193_float; // 0x237 LE
	if(var_194_bool == 0) goto Label_574; // 0x238 JumpB
	func_576(var_187_float); // 0x23a Call
	var_177_bool = 1; // 0x23c MovB
	return 10; // 0x23d Return
	
Label_574:
	var_177_bool = 0; // 0x23e MovB
	return 10; // 0x23f Return
}


func_805(var_269_bool, var_270_object, var_271_string)
{
	var_272_bool = 0; var_273_bool = 0; // 0x325 PushV
	var_274_string = "HasProperty"; // 0x326 PushS
	var_275_int = 2; // 0x327 PushI
	var_276_bool = IsFuncExist(var_270_object, var_274_string, var_275_int); // 0x328 FuncExist
	var_277_bool = var_276_bool == 0; // 0x329 Not
	if(var_277_bool == 0) goto Label_813; // 0x32a JumpB
	var_269_bool = 0; // 0x32b MovB
	return 2; // 0x32c Return
	
Label_813:
	HasProperty(var_271_string, var_273_bool); // 0x32d ObjFunc
	var_269_bool = var_273_bool; // 0x32f Mov
	return 2; // 0x330 Return
}


func_817(var_250_float, var_251_object, var_252_float, var_253_int)
{
	var_257_int = 0; var_258_string = ""; var_259_int = 0; var_260_float = 0; var_261_float = 0; var_262_float = 0; var_263_int = 0; var_264_string = ""; var_265_int = 0; var_266_float = 0; var_267_float = 0; var_268_float = 0; // 0x331 PushV
	var_269_bool = 0; var_270_object = Obj(); var_271_string = ""; // 0x332 PushV
	var_270_object = var_251_object; // 0x333 Mov
	var_271_string = "health"; // 0x334 MovS
	func_805(var_269_bool, var_270_object, var_271_string); // 0x335 Call
	var_278_bool = var_269_bool == 0; // 0x337 Not
	if(var_278_bool == 0) goto Label_827; // 0x338 JumpB
	var_250_float = 0.0; // 0x339 MovF
	return 12; // 0x33a Return
	
Label_827:
	var_279_bool = 0; var_280_object = Obj(); var_281_string = ""; // 0x33b PushV
	var_280_object = var_251_object; // 0x33c Mov
	var_281_string = "armor"; // 0x33d MovS
	func_805(var_279_bool, var_280_object, var_281_string); // 0x33e Call
	var_282_bool = var_279_bool == 0; // 0x340 Not
	if(var_282_bool == 0) goto Label_836; // 0x341 JumpB
	var_263_int = 0; // 0x342 MovI
	goto Label_839; // 0x343 Jump
	
Label_839:
	var_283_string = "armor_"; // 0x347 PushS
	var_284_string = ""; var_285_int = 0; // 0x348 PushV
	var_285_int = var_253_int; // 0x349 Mov
	func_797(var_284_string, var_285_int); // 0x34a Call
	var_264_string = var_283_string + var_284_string; // 0x34c Add2
	var_288_bool = 0; var_289_object = Obj(); var_290_string = ""; // 0x34d PushV
	var_289_object = var_251_object; // 0x34e Mov
	var_290_string = var_264_string; // 0x34f Mov
	func_805(var_288_bool, var_289_object, var_290_string); // 0x350 Call
	var_291_bool = var_288_bool == 0; // 0x352 Not
	if(var_291_bool == 0) goto Label_854; // 0x353 JumpB
	var_265_int = 0; // 0x354 MovI
	goto Label_856; // 0x355 Jump
	
Label_856:
	var_292_float = 0; var_293_float = 0; var_294_float = 0; // 0x358 PushV
	var_295_int = var_263_int + var_265_int; // 0x359 Add
	var_296_float = 100.0; // 0x35a PushF
	var_293_float = var_295_int / var_295_int; // 0x35b Div2
	var_294_float = 1; // 0x35c MovI
	func_1000(var_292_float, var_293_float, var_294_float); // 0x35d Call
	var_266_float = var_292_float; // 0x35e Mov
	var_298_string = "health"; // 0x360 PushS
	GetProperty(var_298_string, var_267_float); // 0x361 ObjFunc
	var_299_int = 1; // 0x363 PushI
	var_300_int = var_299_int - var_266_float; // 0x364 Sub
	var_268_float = var_252_float * var_300_int; // 0x365 Mult2
	var_301_string = "health"; // 0x366 PushS
	var_302_float = 0; var_303_float = 0; var_304_float = 0; var_305_float = 0; // 0x367 PushV
	var_303_float = var_267_float - var_268_float; // 0x368 Sub2
	var_304_float = 0; // 0x369 MovI
	var_305_float = 1; // 0x36a MovI
	func_1007(var_302_float, var_303_float, var_304_float, var_305_float); // 0x36b Call
	SetProperty(var_301_string, var_302_float); // 0x36d ObjFunc
	var_250_float = var_268_float; // 0x36f Mov
	return 12; // 0x370 Return
	
Label_854:
	GetProperty(var_264_string, var_265_int); // 0x356 ObjFunc
	
Label_836:
	var_308_string = "armor"; // 0x344 PushS
	GetProperty(var_308_string, var_263_int); // 0x345 ObjFunc
}


func_576(var_0_object)
{
	var_195_cvector = CVector(0,0,0); var_196_cvector = CVector(0,0,0); var_197_cvector = CVector(0,0,0); var_198_cvector = CVector(0,0,0); // 0x240 PushV
	Face(var_0_object); // 0x241 Func
	var_199_string = "all"; // 0x243 PushS
	var_200_string = "bjump"; // 0x244 PushS
	PlayAnimation(var_199_string, var_200_string); // 0x245 Func
	GetPFPosition(var_197_cvector); // 0x247 TObjFunc
	GetPFPosition(var_198_cvector); // 0x249 Func
	WaitForAnimEnd(); // 0x24b Func
	StopAsync(); // 0x24d Func
	var_201_cvector = CVector(0.0, 0.0, 0.0); // 0x24f PushVec
	SetSpeed(var_201_cvector); // 0x250 Func
	return 4; // 0x252 Return
}


func_595(var_0_object, var_156_bool)
{
	var_157_bool = 0; var_158_bool = 0; // 0x253 PushV
	var_159_string = "IsAttacking"; // 0x254 PushS
	var_160_int = 1; // 0x255 PushI
	var_161_bool = IsFuncExist(var_0_object, var_159_string, var_160_int); // 0x256 FuncExist
	if(var_161_bool == 0) goto Label_604; // 0x257 JumpB
	IsAttacking(var_158_bool); // 0x258 TObjFunc
	var_156_bool = var_158_bool; // 0x25a Mov
	return 2; // 0x25b Return
	
Label_604:
	var_156_bool = 0; // 0x25c MovB
	return 2; // 0x25d Return
}


func_989()
{
	var_143_cvector = CVector(0,0,0); var_144_cvector = CVector(0,0,0); var_145_cvector = CVector(0,0,0); var_146_cvector = CVector(0,0,0); var_147_cvector = CVector(0,0,0); var_148_cvector = CVector(0,0,0); // 0x3dd PushV
	GetPosition(var_146_cvector); // 0x3de ObjFunc
	GetPosition(var_147_cvector); // 0x3e0 Func
	var_148_cvector = var_146_cvector - var_147_cvector; // 0x3e2 Sub2
	var_149_float = GetByIndex(var_148_cvector, 0); // 0x3e3 PushE
	var_150_float = GetByIndex(var_148_cvector, 2); // 0x3e4 PushE
	RotateAsync(var_149_float, var_150_float); // 0x3e5 Func
	return 6; // 0x3e7 Return
}


func_606(var_2_int, var_4_int)
{
	var_218_float = 0; var_219_int = 0; var_220_float = 0; var_221_int = 0; // 0x25e PushV
	var_222_bool = var_2_int == 0; // 0x25f Not
	if(var_222_bool == 0) goto Label_610; // 0x260 JumpB
	return 4; // 0x261 Return
	
Label_610:
	var_223_int = var_4_int; // 0x262 PushT
	if(var_223_int == 0) goto Label_618; // 0x263 JumpB
	var_224_int = -1; // 0x264 PushI
	var_4_int = var_4_int + var_224_int; // 0x265 Add2
	var_225_int = 0; // 0x266 PushI
	var_226_bool = var_4_int > var_225_int; // 0x267 GT
	if(var_226_bool == 0) goto Label_618; // 0x268 JumpB
	return 4; // 0x269 Return
	
Label_618:
	rand(var_220_float); // 0x26a Func
	var_227_float = 0; // 0x26c PushV
	func_644(var_227_float); // 0x26d Call
	var_228_bool = var_220_float < var_227_float; // 0x26f LT
	if(var_228_bool == 0) goto Label_637; // 0x270 JumpB
	irand(var_221_int, var_220_float); // 0x271 Func
	var_229_int = 1; // 0x273 PushI
	var_221_int = var_221_int + var_229_int; // 0x274 Add2
	var_230_string = "attack"; // 0x275 PushS
	var_231_int = var_230_string + var_221_int; // 0x276 Add
	Speak(var_231_int); // 0x277 Func
	var_232_int = 0; // 0x279 PushV
	func_642(var_232_int); // 0x27a Call
	var_4_int = var_232_int; // 0x27b TMov
	
Label_637:
	return 4; // 0x27d Return
}


func_479(var_328_bool, var_329_float)
{
	var_330_float = 0; var_331_bool = 0; var_332_float = 0; var_333_bool = 0; // 0x1df PushV
	rand(var_332_float); // 0x1e0 Func
	var_334_bool = var_332_float < var_329_float; // 0x1e2 LT
	if(var_334_bool == 0) goto Label_499; // 0x1e3 JumpB
	
Label_484:
	IsAnimationPlaying(var_333_bool); // 0x1e4 Func
	var_335_bool = var_333_bool == 0; // 0x1e6 Not
	if(var_335_bool == 0) goto Label_489; // 0x1e7 JumpB
	goto Label_498; // 0x1e8 Jump
	
Label_498:
	goto Label_501; // 0x1f2 Jump
	
Label_501:
	var_328_bool = 0; // 0x1f5 MovB
	return 4; // 0x1f6 Return
	
Label_489:
	var_336_bool = 0; // 0x1e9 PushV
	func_543(var_333_bool, var_336_bool); // 0x1ea Call
	if(var_336_bool == 0) goto Label_495; // 0x1ec JumpB
	var_328_bool = 1; // 0x1ed MovB
	return 4; // 0x1ee Return
	
Label_495:
	sync(); // 0x1ef Func
	goto Label_484; // 0x1f1 Jump
	
Label_499:
	WaitForAnimEnd(); // 0x1f3 Func
}


func_96(var_32_string)
{
	RemoveRTEnvelope(); // 0x61 Func
	SetDeathState(); // 0x63 Func
	Stop(); // 0x65 Func
	StopAsync(); // 0x67 Func
	StopSecondaryAnimation(); // 0x69 Func
	var_33_string = "all"; // 0x6b PushS
	PlayAnimation(var_33_string, var_32_string); // 0x6c Func
	WaitForAnimEnd(); // 0x6e Func
	var_34_string = "all"; // 0x70 PushS
	LockAnimationEnd(var_34_string, var_32_string); // 0x71 Func
	RemoveEnvelope(); // 0x73 Func
	return 0; // 0x75 Return
}


func_360(var_0_object, var_236_float, var_237_int)
{
	var_238_object = Obj(); var_239_float = 0; var_240_float = 0; var_241_object = Obj(); var_242_float = 0; var_243_float = 0; // 0x168 PushV
	var_244_float = 0.9; // 0x169 PushF
	var_245_float = var_236_float * var_244_float; // 0x16a Mult
	GetVictim(var_245_float, var_241_object); // 0x16b Func
	ReportAttack(var_0_object); // 0x16d Func
	var_246_bool = var_241_object == var_0_object; // 0x16f Eq
	if(var_246_bool == 0) goto Label_397; // 0x170 JumpB
	var_247_float = 0; var_248_object = Obj(); var_249_int = 0; // 0x171 PushV
	var_248_object = var_241_object; // 0x172 Mov
	var_249_int = var_237_int; // 0x173 Mov
	func_142(var_249_int); // 0x174 Call
	var_242_float = var_247_float; // 0x175 Mov
	var_250_float = 0; var_251_object = Obj(); var_252_float = 0; var_253_int = 0; // 0x177 PushV
	var_251_object = var_241_object; // 0x178 Mov
	var_252_float = var_242_float; // 0x179 Mov
	var_254_int = 0; var_255_object = Obj(); var_256_int = 0; // 0x17a PushV
	var_255_object = var_241_object; // 0x17b Mov
	var_256_int = var_237_int; // 0x17c Mov
	func_145(var_256_int); // 0x17d Call
	var_253_int = var_254_int; // 0x17e Mov
	func_817(var_250_float, var_251_object, var_252_float, var_253_int); // 0x180 Call
	var_243_float = var_250_float; // 0x181 Mov
	var_309_int = 0; // 0x183 PushV
	func_638(var_309_int); // 0x184 Call
	ReportHit(var_0_object, var_309_int, var_243_float, var_242_float); // 0x186 Func
	var_310_object = Obj(); var_311_float = 0; // 0x188 PushV
	var_310_object = var_241_object; // 0x189 Mov
	var_311_float = var_243_float; // 0x18a Mov
	func_640(); // 0x18b Call
	
Label_397:
	return 6; // 0x18d Return
}


func_1000(var_292_float, var_293_float, var_294_float)
{
	var_297_bool = var_293_float < var_294_float; // 0x3e9 LT
	if(var_297_bool == 0) goto Label_1005; // 0x3ea JumpB
	var_292_float = var_293_float; // 0x3eb Mov
	goto Label_1006; // 0x3ec Jump
	
Label_1006:
	return 0; // 0x3ee Return
	
Label_1005:
	var_292_float = var_294_float; // 0x3ed Mov
}


func_1007(var_302_float, var_303_float, var_304_float, var_305_float)
{
	var_306_bool = var_303_float < var_304_float; // 0x3f0 LT
	if(var_306_bool == 0) goto Label_1012; // 0x3f1 JumpB
	var_302_float = var_304_float; // 0x3f2 Mov
	return 0; // 0x3f3 Return
	
Label_1012:
	var_307_bool = var_303_float > var_305_float; // 0x3f4 GT
	if(var_307_bool == 0) goto Label_1016; // 0x3f5 JumpB
	var_302_float = var_305_float; // 0x3f6 Mov
	return 0; // 0x3f7 Return
	
Label_1016:
	var_302_float = var_303_float; // 0x3f8 Mov
	return 0; // 0x3f9 Return
}


func_881(var_67_bool)
{
	var_69_bool = 0; var_70_bool = 0; // 0x371 PushV
	IsDead(var_70_bool); // 0x372 ObjFunc
	var_67_bool = var_70_bool; // 0x374 Mov
	return 2; // 0x375 Return
}


func_886(var_56_bool, var_57_object)
{
	var_58_object = Obj(); var_59_object = Obj(); var_60_object = Obj(); var_61_object = Obj(); // 0x376 PushV
	var_62_bool = var_57_object == 0; // 0x377 NullEq
	if(var_62_bool == 0) goto Label_891; // 0x378 JumpB
	var_56_bool = 0; // 0x379 MovB
	return 4; // 0x37a Return
	
Label_891:
	var_63_bool = 0; // 0x37b PushV
	var_63_bool = 0; // 0x37c MovB
	var_64_string = "IsDead"; // 0x37d PushS
	var_65_int = 1; // 0x37e PushI
	var_66_bool = IsFuncExist(var_57_object, var_64_string, var_65_int); // 0x37f FuncExist
	if(var_66_bool == 0) goto Label_903; // 0x380 JumpB
	var_67_bool = 0; var_68_object = Obj(); // 0x381 PushV
	var_68_object = var_57_object; // 0x382 Mov
	func_881(var_68_object); // 0x383 Call
	if(var_67_bool == 0) goto Label_903; // 0x385 JumpB
	var_63_bool = 1; // 0x386 MovB
	
Label_903:
	if(var_63_bool == 0) goto Label_906; // 0x387 JumpB
	var_56_bool = 0; // 0x388 MovB
	return 4; // 0x389 Return
	
Label_906:
	GetScene(var_60_object); // 0x38a Func
	var_71_bool = var_60_object == 0; // 0x38c NullEq
	if(var_71_bool == 0) goto Label_912; // 0x38d JumpB
	var_56_bool = 0; // 0x38e MovB
	return 4; // 0x38f Return
	
Label_912:
	GetScene(var_61_object); // 0x390 ObjFunc
	var_72_bool = var_60_object != var_61_object; // 0x392 Neq
	if(var_72_bool == 0) goto Label_918; // 0x393 JumpB
	var_56_bool = 0; // 0x394 MovB
	return 4; // 0x395 Return
	
Label_918:
	var_56_bool = 1; // 0x396 MovB
	return 4; // 0x397 Return
}


func_503(var_0_object, var_164_bool, var_165_float)
{
	var_166_bool = 0; var_167_cvector = CVector(0,0,0); var_168_cvector = CVector(0,0,0); var_169_cvector = CVector(0,0,0); var_170_float = 0; var_171_bool = 0; var_172_cvector = CVector(0,0,0); var_173_cvector = CVector(0,0,0); var_174_cvector = CVector(0,0,0); var_175_float = 0; // 0x1f7 PushV
	
Label_504:
	IsAnimationPlaying(var_171_bool); // 0x1f8 Func
	var_176_bool = var_171_bool == 0; // 0x1fa Not
	if(var_176_bool == 0) goto Label_509; // 0x1fb JumpB
	goto Label_541; // 0x1fc Jump
	
Label_541:
	var_164_bool = 0; // 0x21d MovB
	return 10; // 0x21e Return
	
Label_509:
	var_177_bool = 0; // 0x1fd PushV
	func_543(var_175_float, var_177_bool); // 0x1fe Call
	if(var_177_bool == 0) goto Label_515; // 0x200 JumpB
	var_164_bool = 1; // 0x201 MovB
	return 10; // 0x202 Return
	
Label_515:
	var_202_bool = 0; var_203_object = Obj(); // 0x203 PushV
	var_203_object = var_0_object; // 0x204 MovT
	func_148(var_202_bool, var_203_object); // 0x205 Call
	var_204_bool = var_202_bool == 0; // 0x207 Not
	if(var_204_bool == 0) goto Label_523; // 0x208 JumpB
	var_164_bool = 0; // 0x209 MovB
	return 10; // 0x20a Return
	
Label_523:
	GetPFPosition(var_172_cvector); // 0x20b TObjFunc
	GetPFPosition(var_173_cvector); // 0x20d Func
	var_174_cvector = var_172_cvector - var_173_cvector; // 0x20f Sub2
	var_175_float = var_174_cvector | var_174_cvector; // 0x210 Or2
	var_205_float = var_165_float * var_165_float; // 0x211 Mult
	var_206_bool = var_175_float < var_205_float; // 0x212 LT
	if(var_206_bool == 0) goto Label_538; // 0x213 JumpB
	var_207_bool = 0; var_208_float = 0; // 0x214 PushV
	var_208_float = var_165_float; // 0x215 Mov
	func_399(var_175_float, var_207_bool, var_208_float); // 0x216 Call
	var_164_bool = 1; // 0x218 MovB
	return 10; // 0x219 Return
	
Label_538:
	sync(); // 0x21a Func
	goto Label_504; // 0x21c Jump
}


func_1018(var_8_object)
{
	var_9_object = Obj(); // 0x3fb PushV
	var_9_object = var_8_object; // 0x3fc Mov
	TaskCall(0); // 0x3fd TaskCall
	func_0(var_9_object); // 0x3fe Call
	TaskReturn(); // 0x3ff TaskReturn
	return 0; // 0x401 Return
}


func_638(var_309_int)
{
	var_309_int = 0; // 0x27e MovI
	return 0; // 0x27f Return
}


