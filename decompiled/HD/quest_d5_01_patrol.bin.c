task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_16_int = 1; // 0x9b PushI
	if(var_16_int == 0) goto Label_195; // 0x9c JumpB
	func_1784(); // 0x9e NEW_2
	var_18_int = 13710; // 0xa0 PushI
	var_19_bool = var_14_object == var_18_int; // 0xa1 Eq
	if(var_19_bool == 0) goto Label_183; // 0xa2 JumpB
	var_20_string = ""; // 0xa3 PushV
	var_20_string = "Neutral"; // 0xa4 MovS
	func_132(var_15_bool, var_20_string); // 0xa5 NEW_2
	var_37_int = 512541; // 0xa7 PushI
	SetMessage(var_37_int); // 0xa8 TObjFunc
	ClearReplies(); // 0xaa TObjFunc
	var_38_int = 512542; // 0xac PushI
	var_39_int = -1; // 0xad PushI
	var_40_int = 13711; // 0xae PushI
	AddReply(var_38_int, var_39_int, var_40_int); // 0xaf TObjFunc
	var_41_int = 515784; // 0xb1 PushI
	var_42_int = -1; // 0xb2 PushI
	var_43_int = 16856; // 0xb3 PushI
	AddReply(var_41_int, var_42_int, var_43_int); // 0xb4 TObjFunc
	return 0; // 0xb6 Return
	
Label_183:
	var_3_string = 1; // 0xb7 TMovB
	var_44_bool = 0; // 0xb8 PushV
	func_2037(var_44_bool); // 0xb9 NEW_2
	if(var_44_bool == 0) goto Label_191; // 0xbb JumpB
	lshStopAnimation(); // 0xbc Func
	goto Label_193; // 0xbe Jump
	
Label_193:
	return 0; // 0xc1 Return
	
Label_191:
	StopAnimation(); // 0xbf Func
	
Label_195:
	return 0; // 0xc3 Return
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_int)
{
	var_15_int = 1; // 0x3a1 PushI
	var_16_bool = var_14_int == var_15_int; // 0x3a2 Eq
	if(var_16_bool == 0) goto Label_937; // 0x3a3 JumpB
	var_17_object = Obj(); // 0x3a4 PushV
	var_17_object = var_1_object; // 0x3a5 MovT
	func_1895(var_17_object); // 0x3a6 NEW_2
	goto Label_941; // 0x3a8 Jump
	
Label_941:
	return 0; // 0x3ad Return
	
Label_937:
	var_22_int = 0; // 0x3a9 PushV
	var_22_int = var_14_int; // 0x3aa Mov
	func_1086(var_13_bool, var_14_int, var_22_int); // 0x3ab NEW_2
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	var_15_bool = 0; // 0x3bc PushV
	var_15_bool = 0; // 0x3bd MovB
	var_16_bool = var_1_object == var_14_object; // 0x3be Eq
	if(var_16_bool == 0) goto Label_963; // 0x3bf JumpB
	var_17_bool = var_2_object == 0; // 0x3c0 Not
	if(var_17_bool == 0) goto Label_963; // 0x3c1 JumpB
	var_15_bool = 1; // 0x3c2 MovB
	
Label_963:
	if(var_15_bool == 0) goto Label_969; // 0x3c3 JumpB
	var_2_object = 1; // 0x3c4 TMovB
	var_18_object = Obj(); // 0x3c5 PushV
	var_18_object = var_14_object; // 0x3c6 Mov
	func_1773(var_18_object); // 0x3c7 NEW_2
	
Label_969:
	return 0; // 0x3c9 Return
}


task_3_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	var_15_bool = 0; // 0x3cb PushV
	var_15_bool = 0; // 0x3cc MovB
	var_16_bool = var_1_object == var_14_object; // 0x3cd Eq
	if(var_16_bool == 0) goto Label_978; // 0x3ce JumpB
	var_17_object = var_2_object; // 0x3cf PushT
	if(var_17_object == 0) goto Label_978; // 0x3d0 JumpB
	var_15_bool = 1; // 0x3d1 MovB
	
Label_978:
	if(var_15_bool == 0) goto Label_983; // 0x3d2 JumpB
	var_2_object = 0; // 0x3d3 TMovB
	var_18_string = "head"; // 0x3d4 PushS
	UnlookAsync(var_18_string); // 0x3d5 Func
	
Label_983:
	return 0; // 0x3d7 Return
}


task_3_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	RequestClearPath(var_14_object); // 0x451 Func
	return 0; // 0x453 Return
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	func_942(var_14_object); // 0x45d NEW_2
	var_19_object = Obj(); // 0x45f PushV
	var_19_object = var_14_object; // 0x460 Mov
	func_2023(); // 0x461 NEW_2
	return 0; // 0x463 Return
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_bool = 0; // 0x484 PushV
	IsOverrideActive(var_16_bool); // 0x485 Func
	var_17_bool = var_16_bool == 0; // 0x487 Not
	if(var_17_bool == 0) goto Label_1165; // 0x488 JumpB
	var_18_object = Obj(); // 0x489 PushV
	var_18_object = var_14_object; // 0x48a Mov
	func_1938(var_18_object); // 0x48b NEW_2
	
Label_1165:
	return 2; // 0x48d Return
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_object = Obj(); // 0x48e PushV
	func_1832(var_14_object); // 0x48f NEW_2
	RemoveActor(var_14_object); // 0x491 Func
	Hold(); // 0x493 Func
	return 0; // 0x495 Return
}


task_4_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_int, var_16_float, var_17_float)
{
	return 0; // 0x50c Return
}


task_4_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_string)
{
	return 0; // 0x50e Return
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	return 0; // 0x510 Return
}


task_5_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	var_15_bool = 0; // 0x51e PushV
	func_1319(var_15_bool); // 0x51f NEW_2
	if(var_15_bool == 0) goto Label_1318; // 0x521 JumpB
	var_16_object = Obj(); // 0x522 PushV
	var_16_object = var_14_object; // 0x523 Mov
	func_1297(var_16_object); // 0x524 NEW_2
	
Label_1318:
	return 0; // 0x526 Return
}


task_5_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_bool = 0; // 0x529 PushV
	IsPlayerActor(var_14_object, var_16_bool); // 0x52a Func
	var_17_bool = var_16_bool; // 0x52c Push
	if(var_17_bool == 0) goto Label_1331; // 0x52d JumpB
	var_18_bool = 0; var_19_string = ""; var_20_string = ""; // 0x52e PushV
	var_19_string = "quest_d5_01"; // 0x52f MovS
	var_20_string = "factory_fight"; // 0x530 MovS
	func_1883(var_18_bool, var_19_string, var_20_string); // 0x531 NEW_2
	
Label_1331:
	return 2; // 0x533 Return
}


task_5_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_string)
{
	var_15_string = "attack"; // 0x535 PushS
	var_16_bool = var_14_string == var_15_string; // 0x536 Eq
	if(var_16_bool == 0) goto Label_1341; // 0x537 JumpB
	TaskCall(2); // 0x539 TaskCall
	func_196(); // 0x53a NEW_2
	TaskReturn(); // 0x53b TaskReturn
	
Label_1341:
	return 0; // 0x53d Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_int, var_16_float, var_17_float)
{
	var_18_object = Obj(); var_19_int = 0; var_20_float = 0; // 0x7c9 PushV
	var_18_object = var_14_object; // 0x7ca Mov
	var_19_int = var_15_int; // 0x7cb Mov
	var_20_float = var_16_float; // 0x7cc Mov
	func_1562(var_18_object, var_19_int, var_20_float); // 0x7cd NEW_2
	return 0; // 0x7cf Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_int, var_16_float, var_17_float, var_18_cvector, var_19_cvector)
{
	var_20_object = Obj(); var_21_int = 0; var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x7d1 PushV
	var_20_object = var_14_object; // 0x7d2 Mov
	var_21_int = var_15_int; // 0x7d3 Mov
	var_22_float = var_16_float; // 0x7d4 Mov
	var_23_cvector = var_18_cvector; // 0x7d5 Mov
	var_24_cvector = var_19_cvector; // 0x7d6 Mov
	func_1630(var_22_float, var_23_cvector, var_24_cvector); // 0x7d7 NEW_2
	return 0; // 0x7d9 Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_string)
{
	var_16_float = 0; var_17_float = 0; // 0x7da PushV
	var_18_string = "health"; // 0x7db PushS
	var_19_bool = var_15_string == var_18_string; // 0x7dc Eq
	if(var_19_bool == 0) goto Label_2022; // 0x7dd JumpB
	var_20_string = "health"; // 0x7de PushS
	GetProperty(var_20_string, var_17_float); // 0x7df Func
	var_21_int = 0; // 0x7e1 PushI
	var_22_bool = var_17_float <= var_21_int; // 0x7e2 LE
	if(var_22_bool == 0) goto Label_2022; // 0x7e3 JumpB
	SignalDeath(var_14_object); // 0x7e4 Func
	
Label_2022:
	return 2; // 0x7e6 Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	var_15_object = Obj(); // 0x7e8 PushV
	var_15_object = var_14_object; // 0x7e9 Mov
	func_2039(var_15_object); // 0x7ea NEW_2
	return 0; // 0x7ec Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	
Label_1305:
	Hold(); // 0x519 Func
	goto Label_1305; // 0x51b Jump
}


func_0(var_0_object, var_17_int, var_18_object)
{
	var_20_object = Obj(); var_21_bool = 0; var_22_int = 0; var_23_bool = 0; var_24_object = Obj(); var_25_bool = 0; var_26_int = 0; var_27_bool = 0; // 0x0 PushV
	var_0_object = var_18_object; // 0x1 TMov
	var_28_bool = 0; var_29_object = Obj(); var_30_float = 0; // 0x2 PushV
	var_29_object = var_18_object; // 0x3 Mov
	var_30_float = 70.0; // 0x4 MovF
	func_1655(var_29_object, var_30_float); // 0x5 NEW_2
	var_75_bool = var_28_bool == 0; // 0x7 Not
	if(var_75_bool == 0) goto Label_11; // 0x8 JumpB
	var_17_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_24_object); // 0xb Func
	var_76_int = 0; // 0xd PushV
	func_2031(var_76_int); // 0xe NEW_2
	SetNPCName(var_76_int); // 0x10 ObjFunc
	var_77_int = 0; // 0x12 PushV
	func_2029(var_77_int); // 0x13 NEW_2
	SetNPCDescription(var_77_int); // 0x15 ObjFunc
	var_78_string = ""; // 0x17 PushV
	func_2033(var_78_string); // 0x18 NEW_2
	SetPhoto(var_78_string); // 0x1a ObjFunc
	var_79_string = ""; // 0x1c PushV
	func_2035(var_79_string); // 0x1d NEW_2
	SetPhoto2(var_79_string); // 0x1f ObjFunc
	var_80_int = 0; // 0x21 PushV
	func_1915(var_80_int); // 0x22 NEW_2
	SetPlayerName(var_80_int); // 0x24 ObjFunc
	var_26_int = -1; // 0x26 MovI
	IsOverrideActive(var_25_bool); // 0x27 Func
	var_88_bool = var_25_bool; // 0x29 Push
	if(var_88_bool == 0) goto Label_45; // 0x2a JumpB
	var_17_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_24_object); // 0x2d Func
	var_89_object = Obj(); var_90_object = Obj(); // 0x2f PushV
	var_89_object = var_18_object; // 0x30 Mov
	var_90_object = var_24_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_91_object, var_92_object, var_93_string, var_94_bool, var_89_object, var_90_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_27_bool); // 0x36 ObjFunc
	
Label_56:
	var_138_bool = var_27_bool == 0; // 0x38 Not
	if(var_138_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_27_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_139_object = Obj(); // 0x3f PushV
	var_139_object = var_18_object; // 0x40 Mov
	func_1724(); // 0x41 NEW_2
	StopDialog(var_24_object); // 0x43 Func
	GetReturnValue(var_26_int); // 0x45 ObjFunc
	var_17_int = var_26_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_771(var_0_object, var_4_bool, var_319_bool)
{
	var_320_object = Obj(); var_321_bool = 0; var_322_float = 0; var_323_cvector = CVector(0,0,0); var_324_cvector = CVector(0,0,0); var_325_object = Obj(); var_326_bool = 0; var_327_float = 0; var_328_cvector = CVector(0,0,0); var_329_cvector = CVector(0,0,0); // 0x303 PushV
	GetScene(var_325_object); // 0x304 Func
	var_326_bool = 0; // 0x306 MovB
	
Label_775:
	var_330_cvector = CVector(0,0,0); var_331_object = Obj(); // 0x307 PushV
	var_331_object = var_0_object; // 0x308 MovT
	func_1356(var_331_object); // 0x309 NEW_2
	var_336_int = -var_330_cvector; // 0x30b Neg
	FindDirLength(var_327_float, var_336_int, var_327_float); // 0x30c Func
	var_337_bool = var_327_float < var_4_bool; // 0x30e LT
	if(var_337_bool == 0) goto Label_785; // 0x30f JumpB
	goto Label_813; // 0x310 Jump
	
Label_813:
	var_319_bool = var_326_bool; // 0x32d Mov
	return 10; // 0x32e Return
	
Label_785:
	Face(var_0_object); // 0x311 Func
	var_338_string = "all"; // 0x313 PushS
	var_339_string = "bjump"; // 0x314 PushS
	PlayAnimation(var_338_string, var_339_string); // 0x315 Func
	GetPFPosition(var_328_cvector); // 0x317 TObjFunc
	GetPFPosition(var_329_cvector); // 0x319 Func
	WaitForAnimEnd(); // 0x31b Func
	func_859(var_329_cvector); // 0x31e NEW_2
	StopAsync(); // 0x320 Func
	var_340_cvector = CVector(0.0, 0.0, 0.0); // 0x322 PushVec
	SetSpeed(var_340_cvector); // 0x323 Func
	var_326_bool = 1; // 0x325 MovB
	var_341_bool = 0; // 0x326 PushV
	func_727(var_329_cvector, var_341_bool); // 0x327 NEW_2
	var_342_bool = var_341_bool == 0; // 0x329 Not
	if(var_342_bool == 0) goto Label_812; // 0x32a JumpB
	goto Label_813; // 0x32b Jump
	
Label_812:
	goto Label_775; // 0x32c Jump
}


func_132(var_2_object, var_96_string)
{
	var_97_bool = 0; // 0x85 PushV
	func_2037(var_97_bool); // 0x86 NEW_2
	var_98_bool = var_97_bool == 0; // 0x88 Not
	if(var_98_bool == 0) goto Label_139; // 0x89 JumpB
	return 0; // 0x8a Return
	
Label_139:
	var_99_bool = var_96_string == var_2_object; // 0x8b Eq
	if(var_99_bool == 0) goto Label_142; // 0x8c JumpB
	return 0; // 0x8d Return
	
Label_142:
	var_100_string = ""; var_101_bool = 0; // 0x8e PushV
	var_100_string = var_96_string; // 0x8f Mov
	var_102_string = ""; // 0x90 PushS
	var_103_bool = var_96_string == var_102_string; // 0x91 Eq
	if(var_103_bool == 0) goto Label_149; // 0x92 JumpB
	var_101_bool = 0; // 0x93 MovB
	goto Label_150; // 0x94 Jump
	
Label_150:
	func_1758(var_100_string, var_101_bool); // 0x96 NEW_2
	var_2_object = var_96_string; // 0x98 TMov
	return 0; // 0x99 Return
	
Label_149:
	var_101_bool = 1; // 0x95 MovB
}


func_520(var_0_object, var_348_bool, var_349_float)
{
	var_350_int = 0; var_351_bool = 0; var_352_int = 0; var_353_string = ""; var_354_int = 0; var_355_bool = 0; var_356_int = 0; var_357_string = ""; // 0x208 PushV
	func_859(var_357_string); // 0x20a NEW_2
	irand(var_354_int, var_357_string); // 0x20c Func
	var_358_int = 1; // 0x20e PushI
	var_354_int = var_354_int + var_358_int; // 0x20f Add2
	Face(var_0_object); // 0x210 Func
	var_359_bool = 1; // 0x212 PushB
	SetAttackState(var_359_bool); // 0x213 Func
	func_1904(); // 0x216 NEW_2
	var_364_string = "all"; // 0x218 PushS
	var_365_string = "attack_begin"; // 0x219 PushS
	var_366_int = var_365_string + var_354_int; // 0x21a Add
	PlayAnimation(var_364_string, var_366_int); // 0x21b Func
	WaitForAnimEnd(); // 0x21d Func
	func_827(var_356_int, var_357_string); // 0x220 NEW_2
	var_382_bool = 0; var_383_object = Obj(); // 0x222 PushV
	var_383_object = var_0_object; // 0x223 MovT
	func_1494(var_382_bool, var_383_object); // 0x224 NEW_2
	var_384_bool = var_382_bool == 0; // 0x226 Not
	if(var_384_bool == 0) goto Label_556; // 0x227 JumpB
	StopAsync(); // 0x228 Func
	var_348_bool = 0; // 0x22a MovB
	return 8; // 0x22b Return
	
Label_556:
	var_385_float = 0; var_386_int = 0; // 0x22c PushV
	var_385_float = var_349_float; // 0x22d Mov
	var_386_int = var_354_int; // 0x22e Mov
	func_481(var_357_string, var_385_float, var_386_int); // 0x22f NEW_2
	var_467_string = "all"; // 0x231 PushS
	var_468_string = "attack_middle"; // 0x232 PushS
	var_469_int = var_468_string + var_354_int; // 0x233 Add
	HasAnimation(var_355_bool, var_467_string, var_469_int); // 0x234 Func
	var_470_bool = var_355_bool; // 0x236 Push
	if(var_470_bool == 0) goto Label_637; // 0x237 JumpB
	func_1904(); // 0x239 NEW_2
	var_471_string = "all"; // 0x23b PushS
	var_472_string = "attack_middle"; // 0x23c PushS
	var_473_int = var_472_string + var_354_int; // 0x23d Add
	PlayAnimation(var_471_string, var_473_int); // 0x23e Func
	WaitForAnimEnd(); // 0x240 Func
	func_859(var_357_string); // 0x243 NEW_2
	var_474_bool = 0; var_475_object = Obj(); // 0x245 PushV
	var_475_object = var_0_object; // 0x246 MovT
	func_1494(var_474_bool, var_475_object); // 0x247 NEW_2
	var_476_bool = var_474_bool == 0; // 0x249 Not
	if(var_476_bool == 0) goto Label_591; // 0x24a JumpB
	StopAsync(); // 0x24b Func
	var_348_bool = 0; // 0x24d MovB
	return 8; // 0x24e Return
	
Label_591:
	var_477_float = 0; var_478_int = 0; // 0x24f PushV
	var_477_float = var_349_float; // 0x250 Mov
	var_478_int = var_354_int; // 0x251 Mov
	func_481(var_357_string, var_477_float, var_478_int); // 0x252 NEW_2
	var_356_int = 1; // 0x254 MovI
	
Label_597:
	var_479_string = "attack_middle"; // 0x255 PushS
	var_480_int = var_479_string + var_354_int; // 0x256 Add
	var_481_string = "_"; // 0x257 PushS
	var_482_int = var_480_int + var_481_string; // 0x258 Add
	var_357_string = var_482_int + var_356_int; // 0x259 Add2
	var_483_string = "all"; // 0x25a PushS
	HasAnimation(var_355_bool, var_483_string, var_357_string); // 0x25b Func
	var_484_bool = var_355_bool == 0; // 0x25d Not
	if(var_484_bool == 0) goto Label_608; // 0x25e JumpB
	goto Label_637; // 0x25f Jump
	
Label_637:
	var_485_bool = 0; // 0x27d PushB
	SetAttackState(var_485_bool); // 0x27e Func
	var_486_string = "all"; // 0x280 PushS
	var_487_string = "attack_end"; // 0x281 PushS
	var_488_int = var_487_string + var_354_int; // 0x282 Add
	PlayAnimation(var_486_string, var_488_int); // 0x283 Func
	var_489_bool = 0; // 0x285 PushV
	func_873(var_489_bool); // 0x286 NEW_2
	if(var_489_bool == 0) goto Label_655; // 0x288 JumpB
	var_490_bool = 0; var_491_float = 0; // 0x289 PushV
	var_491_float = 0.75; // 0x28a MovF
	func_657(var_490_bool, var_491_float); // 0x28b NEW_2
	StopAsync(); // 0x28d Func
	
Label_655:
	var_348_bool = 1; // 0x28f MovB
	return 8; // 0x290 Return
	
Label_608:
	func_1904(); // 0x261 NEW_2
	var_499_string = "all"; // 0x263 PushS
	PlayAnimation(var_499_string, var_357_string); // 0x264 Func
	WaitForAnimEnd(); // 0x266 Func
	func_859(var_357_string); // 0x269 NEW_2
	var_500_bool = 0; var_501_object = Obj(); // 0x26b PushV
	var_501_object = var_0_object; // 0x26c MovT
	func_1494(var_500_bool, var_501_object); // 0x26d NEW_2
	var_502_bool = var_500_bool == 0; // 0x26f Not
	if(var_502_bool == 0) goto Label_629; // 0x270 JumpB
	StopAsync(); // 0x271 Func
	var_348_bool = 0; // 0x273 MovB
	return 8; // 0x274 Return
	
Label_629:
	var_503_float = 0; var_504_int = 0; // 0x275 PushV
	var_503_float = var_349_float; // 0x276 Mov
	var_504_int = var_354_int; // 0x277 Mov
	func_481(var_357_string, var_503_float, var_504_int); // 0x278 NEW_2
	var_505_int = 1; // 0x27a PushI
	var_356_int = var_356_int + var_505_int; // 0x27b Add2
	goto Label_597; // 0x27c Jump
}


func_1932(var_113_int)
{
	var_114_int = 0; var_115_int = 0; // 0x78c PushV
	var_116_string = "branch"; // 0x78d PushS
	GetVariable(var_116_string, var_115_int); // 0x78e Func
	var_113_int = var_115_int; // 0x790 Mov
	return 2; // 0x791 Return
}


func_657(var_490_bool, var_491_float)
{
	var_492_float = 0; var_493_bool = 0; var_494_float = 0; var_495_bool = 0; // 0x291 PushV
	rand(var_494_float); // 0x292 Func
	var_496_bool = var_494_float < var_491_float; // 0x294 LT
	if(var_496_bool == 0) goto Label_677; // 0x295 JumpB
	
Label_662:
	IsAnimationPlaying(var_495_bool); // 0x296 Func
	var_497_bool = var_495_bool == 0; // 0x298 Not
	if(var_497_bool == 0) goto Label_667; // 0x299 JumpB
	goto Label_676; // 0x29a Jump
	
Label_676:
	goto Label_682; // 0x2a4 Jump
	
Label_682:
	var_490_bool = 0; // 0x2aa MovB
	return 4; // 0x2ab Return
	
Label_667:
	var_498_bool = 0; // 0x29b PushV
	func_755(var_498_bool); // 0x29c NEW_2
	if(var_498_bool == 0) goto Label_673; // 0x29e JumpB
	var_490_bool = 1; // 0x29f MovB
	return 4; // 0x2a0 Return
	
Label_673:
	sync(); // 0x2a1 Func
	goto Label_662; // 0x2a3 Jump
	
Label_677:
	WaitForAnimEnd(); // 0x2a5 Func
	func_859(var_495_bool); // 0x2a8 NEW_2
}


func_1938(var_18_object)
{
	var_19_int = 0; // 0x793 PushV
	func_1932(var_19_int); // 0x794 NEW_2
	var_23_int = 1; // 0x796 PushI
	var_24_bool = var_19_int == var_23_int; // 0x797 Eq
	if(var_24_bool == 0) goto Label_1948; // 0x798 JumpB
	WorkWithCorpse(var_18_object); // 0x799 Func
	goto Label_1950; // 0x79b Jump
	
Label_1950:
	return 0; // 0x79e Return
	
Label_1948:
	Barter(var_18_object); // 0x79c Func
}


func_1297(var_16_object)
{
	var_17_int = 0; var_18_object = Obj(); // 0x512 PushV
	var_18_object = var_16_object; // 0x513 Mov
	TaskCall(0); // 0x514 TaskCall
	func_0(var_19_object, var_17_int, var_18_object); // 0x515 NEW_2
	TaskReturn(); // 0x516 TaskReturn
	return 0; // 0x518 Return
}


func_2039(var_15_object)
{
	var_16_bool = 0; var_17_bool = 0; // 0x7f7 PushV
	var_18_string = "revolver_ammo"; // 0x7f8 PushS
	var_19_int = 0; // 0x7f9 PushI
	var_20_int = 2; // 0x7fa PushI
	AddItem(var_17_bool, var_18_string, var_19_int, var_20_int); // 0x7fb Func
	var_21_string = "alpha_pills"; // 0x7fd PushS
	var_22_int = 0; // 0x7fe PushI
	var_23_int = 2; // 0x7ff PushI
	AddItem(var_17_bool, var_21_string, var_22_int, var_23_int); // 0x800 Func
	var_24_object = Obj(); // 0x802 PushV
	var_24_object = var_15_object; // 0x803 Mov
	TaskCall(4); // 0x804 TaskCall
	func_1135(var_24_object); // 0x805 NEW_2
	TaskReturn(); // 0x806 TaskReturn
	return 2; // 0x808 Return
}


func_1174(var_31_object)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_string = ""; var_37_object = Obj(); var_38_bool = 0; var_39_bool = 0; var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_string = ""; var_47_object = Obj(); var_48_bool = 0; var_49_bool = 0; var_50_float = 0; var_51_cvector = CVector(0,0,0); // 0x496 PushV
	var_52_bool = var_31_object == 0; // 0x497 NullEq
	if(var_52_bool == 0) goto Label_1182; // 0x498 JumpB
	var_53_string = ""; // 0x499 PushV
	var_53_string = "fdie"; // 0x49a MovS
	func_1265(var_53_string); // 0x49b NEW_2
	goto Label_1264; // 0x49d Jump
	
Label_1264:
	return 20; // 0x4f0 Return
	
Label_1182:
	GetPosition(var_42_cvector); // 0x49e ObjFunc
	GetPosition(var_43_cvector); // 0x4a0 Func
	GetDirection(var_44_cvector); // 0x4a2 Func
	var_45_cvector = var_43_cvector - var_42_cvector; // 0x4a4 Sub2
	var_85_float = GetByIndex(var_45_cvector, 0); // 0x4a5 PushE
	var_86_float = GetByIndex(var_44_cvector, 0); // 0x4a6 PushE
	var_87_float = var_85_float * var_86_float; // 0x4a7 Mult
	var_88_float = GetByIndex(var_45_cvector, 2); // 0x4a8 PushE
	var_89_float = GetByIndex(var_44_cvector, 2); // 0x4a9 PushE
	var_90_float = var_88_float * var_89_float; // 0x4aa Mult
	var_91_int = var_87_float + var_90_float; // 0x4ab Add
	var_92_int = 0; // 0x4ac PushI
	var_93_bool = var_91_int >= var_92_int; // 0x4ad GE
	if(var_93_bool == 0) goto Label_1201; // 0x4ae JumpB
	var_46_string = "fdie"; // 0x4af MovS
	goto Label_1202; // 0x4b0 Jump
	
Label_1202:
	RemoveRTEnvelope(); // 0x4b2 Func
	SetDeathState(); // 0x4b4 Func
	Stop(); // 0x4b6 Func
	StopAsync(); // 0x4b8 Func
	var_47_object = var_31_object; // 0x4ba Mov
	var_94_string = "GetScriptProperty"; // 0x4bb PushS
	var_95_int = 2; // 0x4bc PushI
	var_96_bool = IsFuncExist(var_31_object, var_94_string, var_95_int); // 0x4bd FuncExist
	if(var_96_bool == 0) goto Label_1226; // 0x4be JumpB
	var_97_string = "Owner"; // 0x4bf PushS
	HasScriptProperty(var_48_bool, var_97_string); // 0x4c0 ObjFunc
	var_98_bool = var_48_bool; // 0x4c2 Push
	if(var_98_bool == 0) goto Label_1226; // 0x4c3 JumpB
	var_99_string = "Owner"; // 0x4c4 PushS
	GetScriptProperty(var_47_object, var_99_string); // 0x4c5 ObjFunc
	var_100_bool = var_47_object == 0; // 0x4c7 NullEq
	if(var_100_bool == 0) goto Label_1226; // 0x4c8 JumpB
	var_47_object = var_31_object; // 0x4c9 Mov
	
Label_1226:
	var_101_string = "@GetEyesHeight"; // 0x4ca PushS
	var_102_int = 1; // 0x4cb PushI
	var_103_bool = IsFuncExist(var_47_object, var_101_string, var_102_int); // 0x4cc FuncExist
	if(var_103_bool == 0) goto Label_1241; // 0x4cd JumpB
	GetEyesHeight(var_50_float); // 0x4ce ObjFunc
	var_51_cvector = CVector(0.0, 0.0, 0.0); // 0x4d0 MovV
	var_104_float = GetByIndex(var_51_cvector, 1); // 0x4d1 PushE
	var_104_float = var_50_float; // 0x4d2 Mov
	SetByIndex(var_51_cvector, 1) = var_104_float; // 0x4d3 PopE
	var_105_string = "head"; // 0x4d4 PushS
	LookAsync(var_31_object, var_105_string, var_51_cvector); // 0x4d5 Func
	var_49_bool = 1; // 0x4d7 MovB
	goto Label_1242; // 0x4d8 Jump
	
Label_1242:
	var_106_string = ""; // 0x4da PushV
	var_106_string = var_46_string; // 0x4db Mov
	func_1791(var_106_string); // 0x4dc NEW_2
	var_107_string = "all"; // 0x4de PushS
	PlayAnimation(var_107_string, var_46_string); // 0x4df Func
	WaitForAnimEnd(); // 0x4e1 Func
	var_108_bool = var_49_bool; // 0x4e3 Push
	if(var_108_bool == 0) goto Label_1258; // 0x4e4 JumpB
	StopAsync(); // 0x4e5 Func
	var_109_string = "head"; // 0x4e7 PushS
	UnlookAsync(var_109_string); // 0x4e8 Func
	
Label_1258:
	var_110_string = "all"; // 0x4ea PushS
	LockAnimationEnd(var_110_string, var_46_string); // 0x4eb Func
	RemoveEnvelope(); // 0x4ed Func
	var_47_object = 0; // 0x4ef SetNull
	
Label_1241:
	var_49_bool = 0; // 0x4d9 MovB
	
Label_1201:
	var_46_string = "bdie"; // 0x4b1 MovS
}


func_1562(var_18_object, var_19_int, var_20_float)
{
	var_21_cvector = CVector(0,0,0); var_22_object = Obj(); var_23_int = 0; var_24_bool = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_int = 0; var_28_int = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_object = Obj(); var_32_int = 0; var_33_bool = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_int = 0; var_37_int = 0; var_38_cvector = CVector(0,0,0); // 0x61a PushV
	var_39_bool = 0; // 0x61b PushV
	var_39_bool = 0; // 0x61c MovB
	var_40_bool = 0; // 0x61d PushV
	var_40_bool = 0; // 0x61e MovB
	var_41_object = var_18_object; // 0x61f Push
	if(var_41_object == 0) goto Label_1573; // 0x620 JumpB
	var_42_int = 4; // 0x621 PushI
	var_43_bool = var_19_int != var_42_int; // 0x622 Neq
	if(var_43_bool == 0) goto Label_1573; // 0x623 JumpB
	var_40_bool = 1; // 0x624 MovB
	
Label_1573:
	if(var_40_bool == 0) goto Label_1578; // 0x625 JumpB
	var_44_int = 5; // 0x626 PushI
	var_45_bool = var_19_int != var_44_int; // 0x627 Neq
	if(var_45_bool == 0) goto Label_1578; // 0x628 JumpB
	var_39_bool = 1; // 0x629 MovB
	
Label_1578:
	if(var_39_bool == 0) goto Label_1625; // 0x62a JumpB
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); // 0x62b PushV
	var_48_cvector = CVector(0,0,0); var_49_object = Obj(); // 0x62c PushV
	var_49_object = var_18_object; // 0x62d Mov
	func_1356(var_49_object); // 0x62e NEW_2
	var_47_cvector = var_48_cvector; // 0x62f Mov
	func_1838(var_46_cvector, var_47_cvector); // 0x631 NEW_2
	var_30_cvector = var_46_cvector; // 0x632 Mov
	CreateVectorVector(var_31_object); // 0x634 Func
	var_32_int = 1; // 0x636 MovI
	
Label_1591:
	var_59_string = "hit"; // 0x637 PushS
	var_60_int = var_59_string + var_32_int; // 0x638 Add
	GetGeometryLocator(var_60_int, var_33_bool, var_34_cvector, var_35_cvector); // 0x639 Func
	var_61_bool = var_33_bool == 0; // 0x63b Not
	if(var_61_bool == 0) goto Label_1598; // 0x63c JumpB
	goto Label_1607; // 0x63d Jump
	
Label_1607:
	size(var_36_int); // 0x647 ObjFunc
	var_62_int = var_36_int; // 0x649 Push
	if(var_62_int == 0) goto Label_1624; // 0x64a JumpB
	irand(var_37_int, var_36_int); // 0x64b Func
	get(var_38_cvector, var_37_int); // 0x64d ObjFunc
	var_63_object = Obj(); var_64_int = 0; var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); // 0x64f PushV
	var_63_object = var_18_object; // 0x650 Mov
	var_64_int = var_19_int; // 0x651 Mov
	var_65_float = var_20_float; // 0x652 Mov
	var_66_cvector = var_38_cvector; // 0x653 Mov
	var_67_cvector = -var_30_cvector; // 0x654 Neg2
	func_1630(var_65_float, var_66_cvector, var_67_cvector); // 0x655 NEW_2
	return 18; // 0x657 Return
	
Label_1624:
	var_31_object = 0; // 0x658 SetNull
	
Label_1625:
	var_108_object = Obj(); // 0x659 PushV
	var_108_object = var_18_object; // 0x65a Mov
	func_1518(var_108_object); // 0x65b NEW_2
	return 18; // 0x65d Return
	
Label_1598:
	var_109_int = var_35_cvector | var_30_cvector; // 0x63e Or
	var_110_float = 0.70711; // 0x63f PushF
	var_111_bool = var_109_int >= var_110_float; // 0x640 GE
	if(var_111_bool == 0) goto Label_1604; // 0x641 JumpB
	add(var_34_cvector); // 0x642 ObjFunc
	
Label_1604:
	var_112_int = 1; // 0x644 PushI
	var_32_int = var_32_int + var_112_int; // 0x645 Add2
	goto Label_1591; // 0x646 Jump
}


func_1904()
{
	var_360_object = Obj(); var_361_object = Obj(); // 0x770 PushV
	GetScene(var_361_object); // 0x771 Func
	var_362_string = "battle"; // 0x773 PushS
	var_363_object = Obj(); // 0x774 PushV
	func_1832(var_363_object); // 0x775 NEW_2
	BroadcastMessage(var_362_string, var_363_object, var_361_object); // 0x777 Func
	return 2; // 0x779 Return
}


func_1951(var_119_string)
{
	var_120_object = Obj(); var_121_int = 0; var_122_bool = 0; var_123_object = Obj(); var_124_int = 0; var_125_bool = 0; // 0x79f PushV
	CreateInvItem(var_123_object); // 0x7a0 Func
	SetItemName(var_119_string); // 0x7a2 ObjFunc
	var_126_string = "Organ"; // 0x7a4 PushS
	var_127_int = 1; // 0x7a5 PushI
	SetProperty(var_126_string, var_127_int); // 0x7a6 ObjFunc
	GetItemID(var_124_int); // 0x7a8 ObjFunc
	var_128_int = 0; // 0x7aa PushI
	var_129_int = 1; // 0x7ab PushI
	AddItem(var_125_bool, var_123_object, var_128_int, var_129_int); // 0x7ac Func
	return 6; // 0x7ae Return
}


func_1915(var_80_int)
{
	var_81_int = 0; var_82_int = 0; // 0x77b PushV
	var_83_string = "branch"; // 0x77c PushS
	GetVariable(var_83_string, var_82_int); // 0x77d Func
	var_84_int = 0; // 0x77f PushI
	var_85_bool = var_82_int == var_84_int; // 0x780 Eq
	if(var_85_bool == 0) goto Label_1925; // 0x781 JumpB
	var_80_int = 1; // 0x782 MovI
	return 2; // 0x783 Return
	
Label_1925:
	var_86_int = 1; // 0x785 PushI
	var_87_bool = var_82_int == var_86_int; // 0x786 Eq
	if(var_87_bool == 0) goto Label_1930; // 0x787 JumpB
	var_80_int = 2; // 0x788 MovI
	return 2; // 0x789 Return
	
Label_1930:
	var_80_int = 3; // 0x78a MovI
	return 2; // 0x78b Return
}


func_1319(var_15_bool)
{
	var_15_bool = 1; // 0x527 MovB
	return 0; // 0x528 Return
}


func_1832(var_82_object)
{
	var_83_object = Obj(); var_84_object = Obj(); // 0x728 PushV
	self(var_84_object); // 0x729 Func
	var_82_object = var_84_object; // 0x72b Mov
	return 2; // 0x72c Return
}


func_684(var_0_object, var_287_bool, var_288_float)
{
	var_289_bool = 0; var_290_cvector = CVector(0,0,0); var_291_cvector = CVector(0,0,0); var_292_cvector = CVector(0,0,0); var_293_float = 0; var_294_bool = 0; var_295_cvector = CVector(0,0,0); var_296_cvector = CVector(0,0,0); var_297_cvector = CVector(0,0,0); var_298_float = 0; // 0x2ac PushV
	
Label_685:
	IsAnimationPlaying(var_294_bool); // 0x2ad Func
	var_299_bool = var_294_bool == 0; // 0x2af Not
	if(var_299_bool == 0) goto Label_690; // 0x2b0 JumpB
	goto Label_722; // 0x2b1 Jump
	
Label_722:
	func_859(var_298_float); // 0x2d3 NEW_2
	var_287_bool = 0; // 0x2d5 MovB
	return 10; // 0x2d6 Return
	
Label_690:
	var_300_bool = 0; // 0x2b2 PushV
	func_755(var_300_bool); // 0x2b3 NEW_2
	if(var_300_bool == 0) goto Label_696; // 0x2b5 JumpB
	var_287_bool = 1; // 0x2b6 MovB
	return 10; // 0x2b7 Return
	
Label_696:
	var_343_bool = 0; var_344_object = Obj(); // 0x2b8 PushV
	var_344_object = var_0_object; // 0x2b9 MovT
	func_1494(var_343_bool, var_344_object); // 0x2ba NEW_2
	var_345_bool = var_343_bool == 0; // 0x2bc Not
	if(var_345_bool == 0) goto Label_704; // 0x2bd JumpB
	var_287_bool = 0; // 0x2be MovB
	return 10; // 0x2bf Return
	
Label_704:
	GetPFPosition(var_295_cvector); // 0x2c0 TObjFunc
	GetPFPosition(var_296_cvector); // 0x2c2 Func
	var_297_cvector = var_295_cvector - var_296_cvector; // 0x2c4 Sub2
	var_298_float = var_297_cvector | var_297_cvector; // 0x2c5 Or2
	var_346_float = var_288_float * var_288_float; // 0x2c6 Mult
	var_347_bool = var_298_float < var_346_float; // 0x2c7 LT
	if(var_347_bool == 0) goto Label_719; // 0x2c8 JumpB
	var_348_bool = 0; var_349_float = 0; // 0x2c9 PushV
	var_349_float = var_288_float; // 0x2ca Mov
	func_520(var_298_float, var_348_bool, var_349_float); // 0x2cb NEW_2
	var_287_bool = 1; // 0x2cd MovB
	return 10; // 0x2ce Return
	
Label_719:
	sync(); // 0x2cf Func
	goto Label_685; // 0x2d1 Jump
}


func_1453(var_103_bool)
{
	var_105_bool = 0; var_106_bool = 0; // 0x5ad PushV
	IsDead(var_106_bool); // 0x5ae ObjFunc
	var_103_bool = var_106_bool; // 0x5b0 Mov
	return 2; // 0x5b1 Return
}


func_942(var_2_object)
{
	var_15_int = 1; // 0x3ae PushI
	KillTimer(var_15_int); // 0x3af Func
	var_16_object = var_2_object; // 0x3b1 PushT
	if(var_16_object == 0) goto Label_951; // 0x3b2 JumpB
	var_2_object = 0; // 0x3b3 TMovB
	var_17_string = "head"; // 0x3b4 PushS
	UnlookAsync(var_17_string); // 0x3b5 Func
	
Label_951:
	func_1108(var_14_object); // 0x3b8 NEW_2
	return 0; // 0x3ba Return
}


func_1838(var_46_cvector, var_47_cvector)
{
	var_54_float = 0; var_55_float = 0; // 0x72e PushV
	var_56_int = var_47_cvector | var_47_cvector; // 0x72f Or
	var_55_float = sqrt(var_56_int); // 0x730 Sqrt2
	var_57_float = 0.0; // 0x731 PushF
	var_58_bool = var_55_float < var_57_float; // 0x732 LT
	if(var_58_bool == 0) goto Label_1846; // 0x733 JumpB
	var_46_cvector = CVector(0.0, 0.0, 0.0); // 0x734 MovV
	return 2; // 0x735 Return
	
Label_1846:
	var_46_cvector = var_47_cvector / var_47_cvector; // 0x736 Div2
	return 2; // 0x737 Return
}


func_816(var_0_object, var_250_bool)
{
	var_251_bool = 0; var_252_bool = 0; // 0x330 PushV
	var_253_string = "IsAttacking"; // 0x331 PushS
	var_254_int = 1; // 0x332 PushI
	var_255_bool = IsFuncExist(var_0_object, var_253_string, var_254_int); // 0x333 FuncExist
	if(var_255_bool == 0) goto Label_825; // 0x334 JumpB
	IsAttacking(var_252_bool); // 0x335 TObjFunc
	var_250_bool = var_252_bool; // 0x337 Mov
	return 2; // 0x338 Return
	
Label_825:
	var_250_bool = 0; // 0x339 MovB
	return 2; // 0x33a Return
}


func_1968()
{
	var_113_int = 0; // 0x7b0 PushV
	func_1932(var_113_int); // 0x7b1 NEW_2
	var_117_int = 1; // 0x7b3 PushI
	var_118_bool = var_113_int != var_117_int; // 0x7b4 Neq
	if(var_118_bool == 0) goto Label_1975; // 0x7b5 JumpB
	return 0; // 0x7b6 Return
	
Label_1975:
	var_119_string = ""; // 0x7b7 PushV
	var_119_string = "liver"; // 0x7b8 MovS
	func_1951(var_119_string); // 0x7b9 NEW_2
	var_130_string = ""; // 0x7bb PushV
	var_130_string = "kidney"; // 0x7bc MovS
	func_1951(var_130_string); // 0x7bd NEW_2
	var_131_string = ""; // 0x7bf PushV
	var_131_string = "heart"; // 0x7c0 MovS
	func_1951(var_131_string); // 0x7c1 NEW_2
	var_132_string = ""; // 0x7c3 PushV
	var_132_string = "blood"; // 0x7c4 MovS
	func_1951(var_132_string); // 0x7c5 NEW_2
	return 0; // 0x7c7 Return
}


func_1458(var_92_bool, var_93_object)
{
	var_94_object = Obj(); var_95_object = Obj(); var_96_object = Obj(); var_97_object = Obj(); // 0x5b2 PushV
	var_98_bool = var_93_object == 0; // 0x5b3 NullEq
	if(var_98_bool == 0) goto Label_1463; // 0x5b4 JumpB
	var_92_bool = 0; // 0x5b5 MovB
	return 4; // 0x5b6 Return
	
Label_1463:
	var_99_bool = 0; // 0x5b7 PushV
	var_99_bool = 0; // 0x5b8 MovB
	var_100_string = "IsDead"; // 0x5b9 PushS
	var_101_int = 1; // 0x5ba PushI
	var_102_bool = IsFuncExist(var_93_object, var_100_string, var_101_int); // 0x5bb FuncExist
	if(var_102_bool == 0) goto Label_1475; // 0x5bc JumpB
	var_103_bool = 0; var_104_object = Obj(); // 0x5bd PushV
	var_104_object = var_93_object; // 0x5be Mov
	func_1453(var_104_object); // 0x5bf NEW_2
	if(var_103_bool == 0) goto Label_1475; // 0x5c1 JumpB
	var_99_bool = 1; // 0x5c2 MovB
	
Label_1475:
	if(var_99_bool == 0) goto Label_1478; // 0x5c3 JumpB
	var_92_bool = 0; // 0x5c4 MovB
	return 4; // 0x5c5 Return
	
Label_1478:
	GetScene(var_96_object); // 0x5c6 Func
	var_107_bool = var_96_object == 0; // 0x5c8 NullEq
	if(var_107_bool == 0) goto Label_1484; // 0x5c9 JumpB
	var_92_bool = 0; // 0x5ca MovB
	return 4; // 0x5cb Return
	
Label_1484:
	GetScene(var_97_object); // 0x5cc ObjFunc
	var_108_bool = var_96_object != var_97_object; // 0x5ce Neq
	if(var_108_bool == 0) goto Label_1490; // 0x5cf JumpB
	var_92_bool = 0; // 0x5d0 MovB
	return 4; // 0x5d1 Return
	
Label_1490:
	var_92_bool = 1; // 0x5d2 MovB
	return 4; // 0x5d3 Return
}


func_1848(var_437_float, var_438_float, var_439_float)
{
	var_442_bool = var_438_float < var_439_float; // 0x739 LT
	if(var_442_bool == 0) goto Label_1853; // 0x73a JumpB
	var_437_float = var_438_float; // 0x73b Mov
	goto Label_1854; // 0x73c Jump
	
Label_1854:
	return 0; // 0x73e Return
	
Label_1853:
	var_437_float = var_439_float; // 0x73d Mov
}


func_827(var_2_object, var_5_object)
{
	var_367_float = 0; var_368_int = 0; var_369_float = 0; var_370_int = 0; // 0x33b PushV
	var_371_bool = var_2_object == 0; // 0x33c Not
	if(var_371_bool == 0) goto Label_831; // 0x33d JumpB
	return 4; // 0x33e Return
	
Label_831:
	var_372_object = var_5_object; // 0x33f PushT
	if(var_372_object == 0) goto Label_839; // 0x340 JumpB
	var_373_int = -1; // 0x341 PushI
	var_5_object = var_5_object + var_373_int; // 0x342 Add2
	var_374_int = 0; // 0x343 PushI
	var_375_bool = var_5_object > var_374_int; // 0x344 GT
	if(var_375_bool == 0) goto Label_839; // 0x345 JumpB
	return 4; // 0x346 Return
	
Label_839:
	rand(var_369_float); // 0x347 Func
	var_376_float = 0; // 0x349 PushV
	func_877(var_376_float); // 0x34a NEW_2
	var_377_bool = var_369_float < var_376_float; // 0x34c LT
	if(var_377_bool == 0) goto Label_858; // 0x34d JumpB
	irand(var_370_int, var_369_float); // 0x34e Func
	var_378_int = 1; // 0x350 PushI
	var_370_int = var_370_int + var_378_int; // 0x351 Add2
	var_379_string = "attack"; // 0x352 PushS
	var_380_int = var_379_string + var_370_int; // 0x353 Add
	Speak(var_380_int); // 0x354 Func
	var_381_int = 0; // 0x356 PushV
	func_875(var_381_int); // 0x357 NEW_2
	var_5_object = var_381_int; // 0x358 TMov
	
Label_858:
	return 4; // 0x35a Return
}


func_1724()
{
	var_140_bool = 0; var_141_bool = 0; // 0x6bc PushV
	var_142_bool = 1; // 0x6bd PushB
	CameraSwitchToNormal(var_142_bool); // 0x6be Func
	var_143_bool = 0; // 0x6c0 PushV
	func_2037(var_143_bool); // 0x6c1 NEW_2
	if(var_143_bool == 0) goto Label_1733; // 0x6c3 JumpB
	goto Label_1741; // 0x6c4 Jump
	
Label_1741:
	return 2; // 0x6cd Return
	
Label_1733:
	var_144_string = "head"; // 0x6c5 PushS
	HasAnimationTrack(var_141_bool, var_144_string); // 0x6c6 Func
	var_145_bool = var_141_bool; // 0x6c8 Push
	if(var_145_bool == 0) goto Label_1741; // 0x6c9 JumpB
	var_146_string = "head"; // 0x6ca PushS
	UnlookAsync(var_146_string); // 0x6cb Func
}


func_446(var_1_object, var_2_object, var_4_bool)
{
	var_52_bool = 0; var_53_bool = 0; var_54_cvector = CVector(0,0,0); var_55_bool = 0; var_56_bool = 0; var_57_cvector = CVector(0,0,0); // 0x1be PushV
	var_1_object = 0; // 0x1bf TMovI
	
Label_448:
	var_58_string = "all"; // 0x1c0 PushS
	var_59_string = "attack_begin"; // 0x1c1 PushS
	var_60_int = 1; // 0x1c2 PushI
	var_61_int = var_1_object + var_60_int; // 0x1c3 Add
	var_62_int = var_59_string + var_61_int; // 0x1c4 Add
	HasAnimation(var_55_bool, var_58_string, var_62_int); // 0x1c5 Func
	var_63_bool = var_55_bool == 0; // 0x1c7 Not
	if(var_63_bool == 0) goto Label_458; // 0x1c8 JumpB
	goto Label_461; // 0x1c9 Jump
	
Label_461:
	var_2_object = 0; // 0x1cd TMovI
	
Label_462:
	var_64_string = "attack"; // 0x1ce PushS
	var_65_int = 1; // 0x1cf PushI
	var_66_int = var_2_object + var_65_int; // 0x1d0 Add
	var_67_int = var_64_string + var_66_int; // 0x1d1 Add
	IsExisting3DSound(var_56_bool, var_67_int); // 0x1d2 Func
	var_68_bool = var_56_bool == 0; // 0x1d4 Not
	if(var_68_bool == 0) goto Label_471; // 0x1d5 JumpB
	goto Label_474; // 0x1d6 Jump
	
Label_474:
	var_69_string = "all"; // 0x1da PushS
	var_70_string = "bjump"; // 0x1db PushS
	GetAnimationOffset(var_57_cvector, var_69_string, var_70_string); // 0x1dc Func
	var_71_float = GetByIndex(var_57_cvector, 2); // 0x1de PushE
	var_4_bool = -var_71_float; // 0x1df Neg2
	return 6; // 0x1e0 Return
	
Label_471:
	var_72_int = 1; // 0x1d7 PushI
	var_2_object = var_2_object + var_72_int; // 0x1d8 Add2
	goto Label_462; // 0x1d9 Jump
	
Label_458:
	var_73_int = 1; // 0x1ca PushI
	var_1_object = var_1_object + var_73_int; // 0x1cb Add2
	goto Label_448; // 0x1cc Jump
}


func_1086(var_0_object, var_1_object, var_22_int)
{
	var_23_int = 0; // 0x43f PushI
	var_24_bool = var_22_int != var_23_int; // 0x440 Neq
	if(var_24_bool == 0) goto Label_1091; // 0x441 JumpB
	return 0; // 0x442 Return
	
Label_1091:
	var_25_bool = 0; var_26_object = Obj(); // 0x443 PushV
	var_26_object = var_1_object; // 0x444 MovT
	func_1124(var_25_bool, var_26_object); // 0x445 NEW_2
	var_61_bool = var_25_bool == 0; // 0x447 Not
	if(var_61_bool == 0) goto Label_1098; // 0x448 JumpB
	var_0_object = 1; // 0x449 TMovB
	
Label_1098:
	var_62_int = 0; // 0x44a PushI
	KillTimer(var_62_int); // 0x44b Func
	Stop(); // 0x44d Func
	return 0; // 0x44f Return
}


func_1342(var_427_string, var_428_int)
{
	var_429_int = 2; // 0x53f PushI
	var_430_bool = var_428_int == var_429_int; // 0x540 Eq
	if(var_430_bool == 0) goto Label_1349; // 0x541 JumpB
	var_427_string = "fire"; // 0x542 MovS
	return 0; // 0x543 Return
	
Label_1349:
	var_431_int = 1; // 0x545 PushI
	var_432_bool = var_428_int == var_431_int; // 0x546 Eq
	if(var_432_bool == 0) goto Label_1354; // 0x547 JumpB
	var_427_string = "bullet"; // 0x548 MovS
	return 0; // 0x549 Return
	
Label_1354:
	var_427_string = "phys"; // 0x54a MovS
	return 0; // 0x54b Return
}


func_1855(var_447_float, var_448_float, var_449_float, var_450_float)
{
	var_451_bool = var_448_float < var_449_float; // 0x740 LT
	if(var_451_bool == 0) goto Label_1860; // 0x741 JumpB
	var_447_float = var_449_float; // 0x742 Mov
	return 0; // 0x743 Return
	
Label_1860:
	var_452_bool = var_448_float > var_450_float; // 0x744 GT
	if(var_452_bool == 0) goto Label_1864; // 0x745 JumpB
	var_447_float = var_450_float; // 0x746 Mov
	return 0; // 0x747 Return
	
Label_1864:
	var_447_float = var_448_float; // 0x748 Mov
	return 0; // 0x749 Return
}


func_196()
{
	var_23_object = Obj(); var_24_object = Obj(); // 0xc4 PushV
	var_25_string = "player"; // 0xc5 PushS
	FindActor(var_24_object, var_25_string); // 0xc6 Func
	var_26_bool = var_24_object == 0; // 0xc8 Not
	if(var_26_bool == 0) goto Label_203; // 0xc9 JumpB
	return 2; // 0xca Return
	
Label_203:
	var_27_object = Obj(); var_28_bool = 0; var_29_float = 0; // 0xcb PushV
	var_27_object = var_24_object; // 0xcc Mov
	var_28_bool = 1; // 0xcd MovB
	var_29_float = 180.0; // 0xce MovF
	func_217(var_20_bool, var_21_float, var_22_int, var_23_object, var_24_object, var_27_object, var_28_bool, var_29_float); // 0xcf NEW_2
	return 2; // 0xd1 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_89_object, var_90_object)
{
	var_0_object = var_90_object; // 0x4b TMov
	var_1_object = var_89_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_95_int = 1; // 0x4e PushI
	if(var_95_int == 0) goto Label_102; // 0x4f JumpB
	var_96_string = ""; // 0x50 PushV
	var_96_string = "Neutral"; // 0x51 MovS
	func_132(var_90_object, var_96_string); // 0x52 NEW_2
	var_113_int = 512541; // 0x54 PushI
	SetMessage(var_113_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_114_int = 512542; // 0x59 PushI
	var_115_int = -1; // 0x5a PushI
	var_116_int = 13711; // 0x5b PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x5c TObjFunc
	var_117_int = 515784; // 0x5e PushI
	var_118_int = -1; // 0x5f PushI
	var_119_int = 16856; // 0x60 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x61 TObjFunc
	goto Label_102; // 0x63 Jump
	
Label_102:
	var_120_bool = 0; // 0x66 PushV
	func_2037(var_120_bool); // 0x67 NEW_2
	if(var_120_bool == 0) goto Label_117; // 0x69 JumpB
	
Label_106:
	lshWaitForAnimEnd(); // 0x6a Func
	var_121_string = var_3_string; // 0x6c PushT
	if(var_121_string == 0) goto Label_111; // 0x6d JumpB
	goto Label_116; // 0x6e Jump
	
Label_116:
	goto Label_131; // 0x74 Jump
	
Label_131:
	return 0; // 0x83 Return
	
Label_111:
	var_122_string = ""; // 0x6f PushV
	var_122_string = var_2_object; // 0x70 MovT
	func_1742(var_122_string); // 0x71 NEW_2
	goto Label_106; // 0x73 Jump
	
Label_117:
	var_133_string = "all"; // 0x75 PushS
	var_134_string = "idle"; // 0x76 PushS
	PlayAnimation(var_133_string, var_134_string); // 0x77 Func
	
Label_121:
	WaitForAnimEnd(); // 0x79 Func
	var_135_string = var_3_string; // 0x7b PushT
	if(var_135_string == 0) goto Label_126; // 0x7c JumpB
	goto Label_131; // 0x7d Jump
	
Label_126:
	var_136_string = "all"; // 0x7e PushS
	var_137_string = "idle"; // 0x7f PushS
	PlayAnimation(var_136_string, var_137_string); // 0x80 Func
	goto Label_121; // 0x82 Jump
}


func_1866(var_455_float)
{
	var_456_object = Obj(); var_457_object = Obj(); // 0x74a PushV
	CreateFloatVector(var_457_object); // 0x74b Func
	add(var_455_float); // 0x74d ObjFunc
	var_458_int = 0; // 0x74f PushI
	var_459_bool = var_455_float < var_458_int; // 0x750 LT
	if(var_459_bool == 0) goto Label_1878; // 0x751 JumpB
	var_460_float = 0.7; // 0x752 PushF
	var_461_int = 500; // 0x753 PushI
	RumblePlay(var_460_float, var_461_int); // 0x754 Func
	
Label_1878:
	var_462_int = 15; // 0x756 PushI
	SendWorldWndMessage(var_462_int, var_457_object); // 0x757 Func
	return 2; // 0x759 Return
}


func_1356(var_48_cvector)
{
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x54c PushV
	GetPosition(var_52_cvector); // 0x54d Func
	GetPosition(var_53_cvector); // 0x54f ObjFunc
	var_48_cvector = var_53_cvector - var_52_cvector; // 0x551 Sub2
	return 4; // 0x552 Return
}


func_1742(var_122_string)
{
	var_123_bool = 0; var_124_float = 0; var_125_float = 0; var_126_bool = 0; var_127_float = 0; var_128_float = 0; // 0x6ce PushV
	lshHasAnimation(var_126_bool, var_122_string); // 0x6cf Func
	var_129_bool = var_126_bool; // 0x6d1 Push
	if(var_129_bool == 0) goto Label_1753; // 0x6d2 JumpB
	lshGetAnimTimes(var_122_string, var_127_float, var_128_float); // 0x6d3 Func
	var_130_bool = 0; // 0x6d5 PushB
	lshPlayAnimation(var_127_float, var_128_float, var_130_bool); // 0x6d6 Func
	goto Label_1757; // 0x6d8 Jump
	
Label_1757:
	return 6; // 0x6dd Return
	
Label_1753:
	var_131_string = "Can't find lsh animation : "; // 0x6d9 PushS
	var_132_int = var_131_string + var_122_string; // 0x6da Add
	Trace(var_132_int); // 0x6db Func
}


func_211(var_396_float)
{
	var_396_float = 0.3; // 0xd4 MovF
	return 0; // 0xd5 Return
}


func_1363(var_154_bool, var_155_object)
{
	var_156_bool = 0; var_157_bool = 0; // 0x553 PushV
	IsPlayerActor(var_155_object, var_157_bool); // 0x554 Func
	var_154_bool = var_157_bool; // 0x556 Mov
	return 2; // 0x557 Return
}


func_1108(var_0_object)
{
	var_0_object = 1; // 0x454 TMovB
	var_18_int = 0; // 0x455 PushI
	KillTimer(var_18_int); // 0x456 Func
	Stop(); // 0x458 Func
	return 0; // 0x45a Return
}


func_1494(var_88_bool, var_89_object)
{
	var_90_int = 0; var_91_int = 0; // 0x5d6 PushV
	var_92_bool = 0; var_93_object = Obj(); // 0x5d7 PushV
	var_93_object = var_89_object; // 0x5d8 Mov
	func_1458(var_92_bool, var_93_object); // 0x5d9 NEW_2
	var_109_bool = var_92_bool == 0; // 0x5db Not
	if(var_109_bool == 0) goto Label_1503; // 0x5dc JumpB
	var_88_bool = 0; // 0x5dd MovB
	return 2; // 0x5de Return
	
Label_1503:
	var_110_bool = 0; var_111_object = Obj(); var_112_string = ""; // 0x5df PushV
	var_111_object = var_89_object; // 0x5e0 Mov
	var_112_string = "noaccess"; // 0x5e1 MovS
	func_1368(var_110_bool, var_111_object, var_112_string); // 0x5e2 NEW_2
	var_119_bool = var_110_bool == 0; // 0x5e4 Not
	if(var_119_bool == 0) goto Label_1512; // 0x5e5 JumpB
	var_88_bool = 1; // 0x5e6 MovB
	return 2; // 0x5e7 Return
	
Label_1512:
	var_120_string = "noaccess"; // 0x5e8 PushS
	GetProperty(var_120_string, var_91_int); // 0x5e9 ObjFunc
	var_121_int = 0; // 0x5eb PushI
	var_88_bool = var_91_int == var_121_int; // 0x5ec Eq2
	return 2; // 0x5ed Return
}


func_214(var_403_int)
{
	var_403_int = 0; // 0xd7 MovI
	return 0; // 0xd8 Return
}


func_727(var_0_object, var_302_bool)
{
	var_303_cvector = CVector(0,0,0); var_304_cvector = CVector(0,0,0); var_305_cvector = CVector(0,0,0); var_306_float = 0; var_307_float = 0; var_308_cvector = CVector(0,0,0); var_309_cvector = CVector(0,0,0); var_310_cvector = CVector(0,0,0); var_311_float = 0; var_312_float = 0; // 0x2d7 PushV
	var_313_bool = 0; var_314_object = Obj(); // 0x2d8 PushV
	var_314_object = var_0_object; // 0x2d9 MovT
	func_1494(var_313_bool, var_314_object); // 0x2da NEW_2
	var_315_bool = var_313_bool == 0; // 0x2dc Not
	if(var_315_bool == 0) goto Label_736; // 0x2dd JumpB
	var_302_bool = 0; // 0x2de MovB
	return 10; // 0x2df Return
	
Label_736:
	var_316_bool = 0; // 0x2e0 PushV
	func_816(var_312_float, var_316_bool); // 0x2e1 NEW_2
	if(var_316_bool == 0) goto Label_753; // 0x2e3 JumpB
	GetPFPosition(var_308_cvector); // 0x2e4 TObjFunc
	GetPFPosition(var_309_cvector); // 0x2e6 Func
	var_310_cvector = var_308_cvector - var_309_cvector; // 0x2e8 Sub2
	var_311_float = var_310_cvector | var_310_cvector; // 0x2e9 Or2
	GetAttackDistance(var_312_float); // 0x2ea TObjFunc
	var_317_int = 50; // 0x2ec PushI
	var_312_float = var_312_float + var_317_int; // 0x2ed Add2
	var_318_float = var_312_float * var_312_float; // 0x2ee Mult
	var_302_bool = var_311_float <= var_318_float; // 0x2ef LE2
	return 10; // 0x2f0 Return
	
Label_753:
	var_302_bool = 0; // 0x2f1 MovB
	return 10; // 0x2f2 Return
}


func_217(var_0_object, var_3_string, var_5_object, var_27_object, var_28_bool, var_29_float, var_136_bool, var_228_bool)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_bool = 0; var_34_bool = 0; var_35_float = 0; var_36_cvector = CVector(0,0,0); var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_bool = 0; var_40_float = 0; var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; var_46_float = 0; var_47_cvector = CVector(0,0,0); var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_bool = 0; var_51_float = 0; // 0xd9 PushV
	func_446(var_49_cvector, var_50_bool, var_51_float); // 0xdb NEW_2
	var_5_object = 0; // 0xdd TMovI
	var_74_string = "@GetAttackDistance"; // 0xde PushS
	var_75_int = 1; // 0xdf PushI
	var_76_bool = IsFuncExist(var_27_object, var_74_string, var_75_int); // 0xe0 FuncExist
	if(var_76_bool == 0) goto Label_231; // 0xe1 JumpB
	GetAttackDistance(var_41_float); // 0xe2 ObjFunc
	var_77_int = 50; // 0xe4 PushI
	var_41_float = var_41_float + var_77_int; // 0xe5 Add2
	goto Label_232; // 0xe6 Jump
	
Label_232:
	var_78_int = 150; // 0xe8 PushI
	var_79_bool = var_41_float >= var_78_int; // 0xe9 GE
	if(var_79_bool == 0) goto Label_236; // 0xea JumpB
	var_41_float = 150; // 0xeb MovI
	
Label_236:
	var_3_string = 0; // 0xec TMovB
	var_0_object = var_27_object; // 0xed TMov
	IsPlayerActor(var_0_object, var_44_bool); // 0xee Func
	var_80_bool = var_44_bool; // 0xf0 Push
	if(var_80_bool == 0) goto Label_250; // 0xf1 JumpB
	var_81_string = "attack"; // 0xf2 PushS
	PlayGlobalMusic(var_81_string); // 0xf3 Func
	var_82_object = Obj(); // 0xf5 PushV
	func_1832(var_82_object); // 0xf6 NEW_2
	SendPlayerEnemy(var_27_object, var_82_object); // 0xf8 Func
	
Label_250:
	var_85_bool = var_28_bool; // 0xfa Push
	if(var_85_bool == 0) goto Label_254; // 0xfb JumpB
	var_45_bool = 0; // 0xfc MovB
	goto Label_255; // 0xfd Jump
	
Label_255:
	var_86_float = 400.0; // 0xff PushF
	var_46_float = var_86_float + var_41_float; // 0x100 Add2
	
Label_257:
	var_87_bool = 0; // 0x101 PushV
	var_87_bool = 0; // 0x102 MovB
	var_88_bool = 0; var_89_object = Obj(); // 0x103 PushV
	var_89_object = var_0_object; // 0x104 MovT
	func_1494(var_88_bool, var_89_object); // 0x105 NEW_2
	if(var_88_bool == 0) goto Label_267; // 0x107 JumpB
	var_122_bool = var_3_string == 0; // 0x108 Not
	if(var_122_bool == 0) goto Label_267; // 0x109 JumpB
	var_87_bool = 1; // 0x10a MovB
	
Label_267:
	if(var_87_bool == 0) goto Label_429; // 0x10b JumpB
	func_859(var_51_float); // 0x10d NEW_2
	GetPFPosition(var_42_cvector); // 0x10f TObjFunc
	GetPFPosition(var_43_cvector); // 0x111 Func
	var_47_cvector = var_42_cvector - var_43_cvector; // 0x113 Sub2
	var_48_float = var_47_cvector | var_47_cvector; // 0x114 Or2
	var_128_float = var_46_float * var_46_float; // 0x115 Mult
	var_129_bool = var_48_float >= var_128_float; // 0x116 GE
	if(var_129_bool == 0) goto Label_295; // 0x117 JumpB
	var_130_bool = 0; var_131_object = Obj(); var_132_float = 0; var_133_float = 0; var_134_bool = 0; var_135_bool = 0; // 0x118 PushV
	var_131_object = var_0_object; // 0x119 MovT
	var_132_float = var_41_float; // 0x11a Mov
	var_133_float = 10000.0; // 0x11b MovF
	var_134_bool = 1; // 0x11c MovB
	var_135_bool = 0; // 0x11d MovB
	TaskCall(3); // 0x11e TaskCall
	func_879(var_138_bool, var_130_bool, var_131_object, var_132_float, var_133_float, var_134_bool, var_135_bool); // 0x11f NEW_2
	TaskReturn(); // 0x120 TaskReturn
	var_213_bool = var_136_bool == 0; // 0x122 Not
	if(var_213_bool == 0) goto Label_293; // 0x123 JumpB
	goto Label_429; // 0x124 Jump
	
Label_429:
	WaitForAnimEnd(); // 0x1ad Func
	var_214_string = var_3_string; // 0x1af PushT
	if(var_214_string == 0) goto Label_434; // 0x1b0 JumpB
	return 22; // 0x1b1 Return
	
Label_434:
	var_215_string = "all"; // 0x1b2 PushS
	var_216_string = "attack_off"; // 0x1b3 PushS
	PlayAnimation(var_215_string, var_216_string); // 0x1b4 Func
	WaitForAnimEnd(); // 0x1b6 Func
	var_217_bool = var_44_bool; // 0x1b8 Push
	if(var_217_bool == 0) goto Label_445; // 0x1b9 JumpB
	var_218_float = 2.0; // 0x1ba PushF
	Sleep(var_218_float); // 0x1bb Func
	
Label_445:
	return 22; // 0x1bd Return
	
Label_293:
	var_45_bool = 0; // 0x125 MovB
	goto Label_428; // 0x126 Jump
	
Label_428:
	goto Label_257; // 0x1ac Jump
	
Label_295:
	var_219_float = var_29_float * var_29_float; // 0x127 Mult
	var_220_bool = var_48_float >= var_219_float; // 0x128 GE
	if(var_220_bool == 0) goto Label_420; // 0x129 JumpB
	GetPFPosition(var_49_cvector); // 0x12a TObjFunc
	CanReachByPF(var_50_bool, var_49_cvector); // 0x12c Func
	var_221_bool = var_50_bool == 0; // 0x12e Not
	if(var_221_bool == 0) goto Label_319; // 0x12f JumpB
	var_222_bool = 0; var_223_object = Obj(); var_224_float = 0; var_225_float = 0; var_226_bool = 0; var_227_bool = 0; // 0x130 PushV
	var_223_object = var_0_object; // 0x131 MovT
	var_224_float = var_41_float; // 0x132 Mov
	var_225_float = 10000.0; // 0x133 MovF
	var_226_bool = 1; // 0x134 MovB
	var_227_bool = 0; // 0x135 MovB
	TaskCall(3); // 0x136 TaskCall
	func_879(var_230_bool, var_222_bool, var_223_object, var_224_float, var_225_float, var_226_bool, var_227_bool); // 0x137 NEW_2
	TaskReturn(); // 0x138 TaskReturn
	var_231_bool = var_228_bool == 0; // 0x13a Not
	if(var_231_bool == 0) goto Label_317; // 0x13b JumpB
	goto Label_429; // 0x13c Jump
	
Label_317:
	var_45_bool = 0; // 0x13d MovB
	goto Label_257; // 0x13e Jump
	
Label_319:
	var_232_bool = var_45_bool == 0; // 0x13f Not
	if(var_232_bool == 0) goto Label_344; // 0x140 JumpB
	var_233_object = Obj(); // 0x141 PushV
	var_233_object = var_0_object; // 0x142 MovT
	func_1644(); // 0x143 NEW_2
	var_242_string = "all"; // 0x145 PushS
	var_243_string = "attack_on"; // 0x146 PushS
	PlayAnimation(var_242_string, var_243_string); // 0x147 Func
	WaitForAnimEnd(); // 0x149 Func
	func_859(var_51_float); // 0x14c NEW_2
	StopAsync(); // 0x14e Func
	var_45_bool = 1; // 0x150 MovB
	var_244_bool = 0; var_245_object = Obj(); // 0x151 PushV
	var_245_object = var_0_object; // 0x152 MovT
	func_1494(var_244_bool, var_245_object); // 0x153 NEW_2
	var_246_bool = var_244_bool == 0; // 0x155 Not
	if(var_246_bool == 0) goto Label_344; // 0x156 JumpB
	goto Label_429; // 0x157 Jump
	
Label_344:
	rand(var_51_float); // 0x158 Func
	var_247_bool = 0; // 0x15a PushV
	var_247_bool = 1; // 0x15b MovB
	var_248_float = 0.25; // 0x15c PushF
	var_249_bool = var_51_float < var_248_float; // 0x15d LT
	if(var_249_bool == 0) goto Label_356; // 0x15e JumpB
	var_250_bool = 0; // 0x15f PushV
	func_816(var_247_bool, var_250_bool); // 0x160 NEW_2
	if(var_250_bool == 0) goto Label_356; // 0x162 JumpB
	var_247_bool = 0; // 0x163 MovB
	
Label_356:
	if(var_247_bool == 0) goto Label_373; // 0x164 JumpB
	Face(var_0_object); // 0x165 Func
	func_866(); // 0x168 NEW_2
	var_285_string = "all"; // 0x16a PushS
	var_286_string = "attack_stay"; // 0x16b PushS
	PlayAnimation(var_285_string, var_286_string); // 0x16c Func
	var_287_bool = 0; var_288_float = 0; // 0x16e PushV
	var_288_float = var_29_float; // 0x16f Mov
	func_684(var_51_float, var_287_bool, var_288_float); // 0x170 NEW_2
	StopAsync(); // 0x172 Func
	goto Label_419; // 0x174 Jump
	
Label_419:
	goto Label_428; // 0x1a3 Jump
	
Label_373:
	Face(var_0_object); // 0x175 Func
	var_506_string = "all"; // 0x177 PushS
	var_507_string = "fjump"; // 0x178 PushS
	PlayAnimation(var_506_string, var_507_string); // 0x179 Func
	WaitForAnimEnd(); // 0x17b Func
	func_859(var_51_float); // 0x17e NEW_2
	var_508_cvector = CVector(0.0, 0.0, 0.0); // 0x180 PushVec
	SetSpeed(var_508_cvector); // 0x181 Func
	Stop(); // 0x183 Func
	StopAsync(); // 0x185 Func
	var_509_bool = 0; // 0x187 PushV
	func_816(var_51_float, var_509_bool); // 0x188 NEW_2
	var_510_bool = var_509_bool == 0; // 0x18a Not
	if(var_510_bool == 0) goto Label_419; // 0x18b JumpB
	var_511_bool = 0; var_512_object = Obj(); // 0x18c PushV
	var_512_object = var_0_object; // 0x18d MovT
	func_1494(var_511_bool, var_512_object); // 0x18e NEW_2
	var_513_bool = var_511_bool == 0; // 0x190 Not
	if(var_513_bool == 0) goto Label_403; // 0x191 JumpB
	goto Label_429; // 0x192 Jump
	
Label_403:
	GetPFPosition(var_42_cvector); // 0x193 TObjFunc
	GetPFPosition(var_43_cvector); // 0x195 Func
	var_47_cvector = var_42_cvector - var_43_cvector; // 0x197 Sub2
	var_48_float = var_47_cvector | var_47_cvector; // 0x198 Or2
	var_514_float = var_29_float * var_29_float; // 0x199 Mult
	var_515_bool = var_48_float < var_514_float; // 0x19a LT
	if(var_515_bool == 0) goto Label_419; // 0x19b JumpB
	var_516_bool = 0; var_517_float = 0; // 0x19c PushV
	var_517_float = var_29_float; // 0x19d Mov
	func_520(var_51_float, var_516_bool, var_517_float); // 0x19e NEW_2
	var_518_bool = var_516_bool == 0; // 0x1a0 Not
	if(var_518_bool == 0) goto Label_419; // 0x1a1 JumpB
	goto Label_429; // 0x1a2 Jump
	
Label_420:
	var_519_bool = 0; var_520_float = 0; // 0x1a4 PushV
	var_520_float = var_29_float; // 0x1a5 Mov
	func_520(var_51_float, var_519_bool, var_520_float); // 0x1a6 NEW_2
	var_521_bool = var_519_bool == 0; // 0x1a8 Not
	if(var_521_bool == 0) goto Label_427; // 0x1a9 JumpB
	goto Label_429; // 0x1aa Jump
	
Label_427:
	var_45_bool = 1; // 0x1ab MovB
	
Label_254:
	var_45_bool = 1; // 0xfe MovB
	
Label_231:
	var_41_float = var_29_float; // 0xe7 Mov
}


func_984(var_0_object, var_1_object, var_159_bool, var_160_object, var_161_float, var_162_float, var_163_bool, var_164_bool)
{
	var_165_bool = 0; var_166_bool = 0; var_167_object = Obj(); var_168_cvector = CVector(0,0,0); var_169_cvector = CVector(0,0,0); var_170_cvector = CVector(0,0,0); var_171_float = 0; var_172_object = Obj(); var_173_bool = 0; var_174_bool = 0; var_175_object = Obj(); var_176_cvector = CVector(0,0,0); var_177_cvector = CVector(0,0,0); var_178_cvector = CVector(0,0,0); var_179_float = 0; var_180_object = Obj(); // 0x3d8 PushV
	var_0_object = 0; // 0x3d9 TMovB
	var_1_object = var_160_object; // 0x3da TMov
	var_174_bool = var_164_bool; // 0x3db Mov
	
Label_988:
	var_181_bool = 0; var_182_object = Obj(); // 0x3dc PushV
	var_182_object = var_160_object; // 0x3dd Mov
	func_1124(var_181_bool, var_182_object); // 0x3de NEW_2
	var_185_bool = var_181_bool == 0; // 0x3e0 Not
	if(var_185_bool == 0) goto Label_996; // 0x3e1 JumpB
	var_159_bool = 0; // 0x3e2 MovB
	return 16; // 0x3e3 Return
	
Label_996:
	GetPosition(var_176_cvector); // 0x3e4 ObjFunc
	GetPosition(var_177_cvector); // 0x3e6 Func
	var_178_cvector = var_176_cvector - var_177_cvector; // 0x3e8 Sub2
	var_179_float = var_178_cvector | var_178_cvector; // 0x3e9 Or2
	var_186_bool = 0; // 0x3ea PushV
	var_186_bool = 0; // 0x3eb MovB
	var_187_int = 0; // 0x3ec PushI
	var_188_bool = var_162_float > var_187_int; // 0x3ed GT
	if(var_188_bool == 0) goto Label_1011; // 0x3ee JumpB
	var_189_float = var_162_float * var_162_float; // 0x3ef Mult
	var_190_bool = var_179_float > var_189_float; // 0x3f0 GT
	if(var_190_bool == 0) goto Label_1011; // 0x3f1 JumpB
	var_186_bool = 1; // 0x3f2 MovB
	
Label_1011:
	if(var_186_bool == 0) goto Label_1016; // 0x3f3 JumpB
	Stop(); // 0x3f4 Func
	var_159_bool = 0; // 0x3f6 MovB
	return 16; // 0x3f7 Return
	
Label_1016:
	var_191_float = var_161_float * var_161_float; // 0x3f8 Mult
	var_192_bool = var_179_float > var_191_float; // 0x3f9 GT
	if(var_192_bool == 0) goto Label_1078; // 0x3fa JumpB
	GetPFPosition(var_176_cvector); // 0x3fb ObjFunc
	FindPathTo(var_180_object, var_176_cvector); // 0x3fd Func
	var_193_bool = var_180_object != 0; // 0x3ff NullNeq
	if(var_193_bool == 0) goto Label_1027; // 0x400 JumpB
	var_175_object = var_180_object; // 0x401 Mov
	var_180_object = 0; // 0x402 SetNull
	
Label_1027:
	var_194_bool = var_175_object != 0; // 0x403 NullNeq
	if(var_194_bool == 0) goto Label_1060; // 0x404 JumpB
	var_195_bool = var_174_bool; // 0x405 Push
	if(var_195_bool == 0) goto Label_1037; // 0x406 JumpB
	var_174_bool = 0; // 0x407 MovB
	RotatePath(var_175_object, var_173_bool); // 0x408 Func
	var_196_bool = var_173_bool == 0; // 0x40a Not
	if(var_196_bool == 0) goto Label_1037; // 0x40b JumpB
	goto Label_1084; // 0x40c Jump
	
Label_1084:
	var_159_bool = !var_0_object; // 0x43c Not2
	return 16; // 0x43d Return
	
Label_1037:
	var_197_int = 0; // 0x40d PushI
	var_198_float = 0.3; // 0x40e PushF
	SetTimer(var_197_int, var_198_float); // 0x40f Func
	var_199_string = ""; // 0x411 PushV
	func_1131(var_199_string); // 0x412 NEW_2
	var_200_string = ""; // 0x414 PushV
	func_1133(var_200_string); // 0x415 NEW_2
	FollowPath(var_175_object, var_163_bool, var_173_bool, var_199_string, var_200_string); // 0x417 Func
	var_201_bool = var_173_bool == 0; // 0x419 Not
	if(var_201_bool == 0) goto Label_1058; // 0x41a JumpB
	var_202_object = var_0_object; // 0x41b PushT
	if(var_202_object == 0) goto Label_1056; // 0x41c JumpB
	var_175_object = 0; // 0x41d SetNull
	goto Label_1084; // 0x41e Jump
	
Label_1056:
	goto Label_1083; // 0x420 Jump
	
Label_1083:
	goto Label_988; // 0x43b Jump
	
Label_1058:
	var_175_object = 0; // 0x422 SetNull
	goto Label_1076; // 0x423 Jump
	
Label_1076:
	var_180_object = 0; // 0x434 SetNull
	goto Label_1082; // 0x435 Jump
	
Label_1082:
	var_175_object = 0; // 0x43a SetNull
	
Label_1060:
	var_203_int = 0; // 0x424 PushI
	KillTimer(var_203_int); // 0x425 Func
	var_204_float = 0.5; // 0x427 PushF
	Sleep(var_204_float, var_173_bool); // 0x428 Func
	var_205_bool = var_173_bool == 0; // 0x42a Not
	if(var_205_bool == 0) goto Label_1072; // 0x42b JumpB
	var_206_object = var_0_object; // 0x42c PushT
	if(var_206_object == 0) goto Label_1072; // 0x42d JumpB
	var_175_object = 0; // 0x42e SetNull
	goto Label_1084; // 0x42f Jump
	
Label_1072:
	var_207_int = 0; // 0x430 PushI
	var_208_float = 0.3; // 0x431 PushF
	SetTimer(var_207_int, var_208_float); // 0x432 Func
	
Label_1078:
	var_209_int = 0; // 0x436 PushI
	KillTimer(var_209_int); // 0x437 Func
	goto Label_1084; // 0x439 Jump
}


func_859(var_0_object)
{
	var_123_object = Obj(); // 0x35b PushV
	var_123_object = var_0_object; // 0x35c MovT
	func_1895(var_123_object); // 0x35d NEW_2
	return 0; // 0x35f Return
}


func_1883(var_25_bool, var_26_string, var_27_string)
{
	var_28_object = Obj(); var_29_object = Obj(); // 0x75b PushV
	FindActor(var_29_object, var_26_string); // 0x75c Func
	var_30_bool = var_29_object == 0; // 0x75e NullEq
	if(var_30_bool == 0) goto Label_1890; // 0x75f JumpB
	var_25_bool = 0; // 0x760 MovB
	return 2; // 0x761 Return
	
Label_1890:
	Trigger(var_29_object, var_27_string); // 0x762 Func
	var_25_bool = 1; // 0x764 MovB
	return 2; // 0x765 Return
}


func_1368(var_110_bool, var_111_object, var_112_string)
{
	var_113_bool = 0; var_114_bool = 0; // 0x558 PushV
	var_115_string = "HasProperty"; // 0x559 PushS
	var_116_int = 2; // 0x55a PushI
	var_117_bool = IsFuncExist(var_111_object, var_115_string, var_116_int); // 0x55b FuncExist
	var_118_bool = var_117_bool == 0; // 0x55c Not
	if(var_118_bool == 0) goto Label_1376; // 0x55d JumpB
	var_110_bool = 0; // 0x55e MovB
	return 2; // 0x55f Return
	
Label_1376:
	HasProperty(var_112_string, var_114_bool); // 0x560 ObjFunc
	var_110_bool = var_114_bool; // 0x562 Mov
	return 2; // 0x563 Return
}


func_1758(var_100_string, var_101_bool)
{
	var_104_bool = 0; var_105_float = 0; var_106_float = 0; var_107_bool = 0; var_108_float = 0; var_109_float = 0; // 0x6de PushV
	lshHasAnimation(var_107_bool, var_100_string); // 0x6df Func
	var_110_bool = var_107_bool; // 0x6e1 Push
	if(var_110_bool == 0) goto Label_1768; // 0x6e2 JumpB
	lshGetAnimTimes(var_100_string, var_108_float, var_109_float); // 0x6e3 Func
	lshPlayAnimation(var_108_float, var_109_float, var_101_bool); // 0x6e5 Func
	goto Label_1772; // 0x6e7 Jump
	
Label_1772:
	return 6; // 0x6ec Return
	
Label_1768:
	var_111_string = "Can't find lsh animation : "; // 0x6e8 PushS
	var_112_int = var_111_string + var_100_string; // 0x6e9 Add
	Trace(var_112_int); // 0x6ea Func
}


func_1630(var_20_object, var_23_cvector, var_24_cvector)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); // 0x65e PushV
	GetScene(var_27_object); // 0x65f Func
	var_29_string = "scripted"; // 0x661 PushS
	var_30_string = "blood_dir.xml"; // 0x662 PushS
	AddActorByType(var_28_object, var_29_string, var_27_object, var_23_cvector, var_24_cvector, var_30_string); // 0x663 Func
	var_31_object = Obj(); // 0x665 PushV
	var_31_object = var_20_object; // 0x666 Mov
	func_1518(var_31_object); // 0x667 NEW_2
	return 4; // 0x669 Return
}


func_864(var_464_int)
{
	var_464_int = 0; // 0x360 MovI
	return 0; // 0x361 Return
}


func_481(var_0_object, var_385_float, var_386_int)
{
	var_387_object = Obj(); var_388_float = 0; var_389_float = 0; var_390_object = Obj(); var_391_float = 0; var_392_float = 0; // 0x1e1 PushV
	var_393_float = 0.9; // 0x1e2 PushF
	var_394_float = var_385_float * var_393_float; // 0x1e3 Mult
	GetVictim(var_394_float, var_390_object); // 0x1e4 Func
	ReportAttack(var_0_object); // 0x1e6 Func
	var_395_bool = var_390_object == var_0_object; // 0x1e8 Eq
	if(var_395_bool == 0) goto Label_518; // 0x1e9 JumpB
	var_396_float = 0; var_397_object = Obj(); var_398_int = 0; // 0x1ea PushV
	var_397_object = var_390_object; // 0x1eb Mov
	var_398_int = var_386_int; // 0x1ec Mov
	func_211(var_398_int); // 0x1ed NEW_2
	var_391_float = var_396_float; // 0x1ee Mov
	var_399_float = 0; var_400_object = Obj(); var_401_float = 0; var_402_int = 0; // 0x1f0 PushV
	var_400_object = var_390_object; // 0x1f1 Mov
	var_401_float = var_391_float; // 0x1f2 Mov
	var_403_int = 0; var_404_object = Obj(); var_405_int = 0; // 0x1f3 PushV
	var_404_object = var_390_object; // 0x1f4 Mov
	var_405_int = var_386_int; // 0x1f5 Mov
	func_214(var_405_int); // 0x1f6 NEW_2
	var_402_int = var_403_int; // 0x1f7 Mov
	func_1380(var_399_float, var_400_object, var_401_float, var_402_int); // 0x1f9 NEW_2
	var_392_float = var_399_float; // 0x1fa Mov
	var_464_int = 0; // 0x1fc PushV
	func_864(var_464_int); // 0x1fd NEW_2
	ReportHit(var_0_object, var_464_int, var_392_float, var_391_float); // 0x1ff Func
	var_465_object = Obj(); var_466_float = 0; // 0x201 PushV
	var_465_object = var_390_object; // 0x202 Mov
	var_466_float = var_392_float; // 0x203 Mov
	func_871(); // 0x204 NEW_2
	
Label_518:
	return 6; // 0x206 Return
}


func_866()
{
	var_256_string = ""; // 0x362 PushV
	var_256_string = "attack_stay"; // 0x363 MovS
	func_1791(var_256_string); // 0x364 NEW_2
	return 0; // 0x366 Return
}


func_1380(var_399_float, var_400_object, var_401_float, var_402_int)
{
	var_406_int = 0; var_407_string = ""; var_408_int = 0; var_409_float = 0; var_410_float = 0; var_411_float = 0; var_412_int = 0; var_413_string = ""; var_414_int = 0; var_415_float = 0; var_416_float = 0; var_417_float = 0; // 0x564 PushV
	var_418_bool = 0; var_419_object = Obj(); var_420_string = ""; // 0x565 PushV
	var_419_object = var_400_object; // 0x566 Mov
	var_420_string = "health"; // 0x567 MovS
	func_1368(var_418_bool, var_419_object, var_420_string); // 0x568 NEW_2
	var_421_bool = var_418_bool == 0; // 0x56a Not
	if(var_421_bool == 0) goto Label_1390; // 0x56b JumpB
	var_399_float = 0.0; // 0x56c MovF
	return 12; // 0x56d Return
	
Label_1390:
	var_422_bool = 0; var_423_object = Obj(); var_424_string = ""; // 0x56e PushV
	var_423_object = var_400_object; // 0x56f Mov
	var_424_string = "armor"; // 0x570 MovS
	func_1368(var_422_bool, var_423_object, var_424_string); // 0x571 NEW_2
	var_425_bool = var_422_bool == 0; // 0x573 Not
	if(var_425_bool == 0) goto Label_1399; // 0x574 JumpB
	var_412_int = 0; // 0x575 MovI
	goto Label_1402; // 0x576 Jump
	
Label_1402:
	var_426_string = "armor_"; // 0x57a PushS
	var_427_string = ""; var_428_int = 0; // 0x57b PushV
	var_428_int = var_402_int; // 0x57c Mov
	func_1342(var_427_string, var_428_int); // 0x57d NEW_2
	var_413_string = var_426_string + var_427_string; // 0x57f Add2
	var_433_bool = 0; var_434_object = Obj(); var_435_string = ""; // 0x580 PushV
	var_434_object = var_400_object; // 0x581 Mov
	var_435_string = var_413_string; // 0x582 Mov
	func_1368(var_433_bool, var_434_object, var_435_string); // 0x583 NEW_2
	var_436_bool = var_433_bool == 0; // 0x585 Not
	if(var_436_bool == 0) goto Label_1417; // 0x586 JumpB
	var_414_int = 0; // 0x587 MovI
	goto Label_1419; // 0x588 Jump
	
Label_1419:
	var_437_float = 0; var_438_float = 0; var_439_float = 0; // 0x58b PushV
	var_440_int = var_412_int + var_414_int; // 0x58c Add
	var_441_float = 100.0; // 0x58d PushF
	var_438_float = var_440_int / var_440_int; // 0x58e Div2
	var_439_float = 1; // 0x58f MovI
	func_1848(var_437_float, var_438_float, var_439_float); // 0x590 NEW_2
	var_415_float = var_437_float; // 0x591 Mov
	var_443_string = "health"; // 0x593 PushS
	GetProperty(var_443_string, var_416_float); // 0x594 ObjFunc
	var_444_int = 1; // 0x596 PushI
	var_445_int = var_444_int - var_415_float; // 0x597 Sub
	var_417_float = var_401_float * var_445_int; // 0x598 Mult2
	var_446_string = "health"; // 0x599 PushS
	var_447_float = 0; var_448_float = 0; var_449_float = 0; var_450_float = 0; // 0x59a PushV
	var_448_float = var_416_float - var_417_float; // 0x59b Sub2
	var_449_float = 0; // 0x59c MovI
	var_450_float = 1; // 0x59d MovI
	func_1855(var_447_float, var_448_float, var_449_float, var_450_float); // 0x59e NEW_2
	SetProperty(var_446_string, var_447_float); // 0x5a0 ObjFunc
	var_453_bool = 0; var_454_object = Obj(); // 0x5a2 PushV
	var_454_object = var_400_object; // 0x5a3 Mov
	func_1363(var_453_bool, var_454_object); // 0x5a4 NEW_2
	if(var_453_bool == 0) goto Label_1451; // 0x5a6 JumpB
	var_455_float = 0; // 0x5a7 PushV
	var_455_float = -var_417_float; // 0x5a8 Neg2
	func_1866(var_455_float); // 0x5a9 NEW_2
	
Label_1451:
	var_399_float = var_417_float; // 0x5ab Mov
	return 12; // 0x5ac Return
	
Label_1417:
	GetProperty(var_413_string, var_414_int); // 0x589 ObjFunc
	
Label_1399:
	var_463_string = "armor"; // 0x577 PushS
	GetProperty(var_463_string, var_412_int); // 0x578 ObjFunc
}


func_1124(var_181_bool, var_182_object)
{
	var_183_bool = 0; var_184_object = Obj(); // 0x465 PushV
	var_184_object = var_182_object; // 0x466 Mov
	func_1494(var_183_bool, var_184_object); // 0x467 NEW_2
	var_181_bool = var_183_bool; // 0x468 Mov
	return 0; // 0x46a Return
}


func_871()
{
	return 0; // 0x368 Return
}


func_1895(var_123_object)
{
	var_124_bool = 0; var_125_bool = 0; // 0x767 PushV
	IsPlayerActor(var_123_object, var_125_bool); // 0x768 Func
	var_126_bool = var_125_bool; // 0x76a Push
	if(var_126_bool == 0) goto Label_1903; // 0x76b JumpB
	var_127_string = "attack"; // 0x76c PushS
	PlayGlobalMusic(var_127_string); // 0x76d Func
	
Label_1903:
	return 2; // 0x76f Return
}


func_873(var_489_bool)
{
	var_489_bool = 1; // 0x369 MovB
	return 0; // 0x36a Return
}


func_1131(var_199_string)
{
	var_199_string = "walk"; // 0x46b MovS
	return 0; // 0x46c Return
}


func_875(var_381_int)
{
	var_381_int = 1; // 0x36b MovI
	return 0; // 0x36c Return
}


func_1773(var_147_object)
{
	var_148_float = 0; var_149_cvector = CVector(0,0,0); var_150_float = 0; var_151_cvector = CVector(0,0,0); // 0x6ed PushV
	GetEyesHeight(var_150_float); // 0x6ee ObjFunc
	var_151_cvector = CVector(0.0, 0.0, 0.0); // 0x6f0 MovV
	var_152_float = GetByIndex(var_151_cvector, 1); // 0x6f1 PushE
	var_152_float = var_150_float; // 0x6f2 Mov
	SetByIndex(var_151_cvector, 1) = var_152_float; // 0x6f3 PopE
	var_153_string = "head"; // 0x6f4 PushS
	LookAsync(var_147_object, var_153_string, var_151_cvector); // 0x6f5 Func
	return 4; // 0x6f7 Return
}


func_1133(var_200_string)
{
	var_200_string = "run"; // 0x46d MovS
	return 0; // 0x46e Return
}


func_1518(var_31_object)
{
	var_32_bool = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_string = ""; var_39_bool = 0; var_40_int = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_string = ""; // 0x5ee PushV
	var_46_bool = var_31_object == 0; // 0x5ef NullEq
	if(var_46_bool == 0) goto Label_1522; // 0x5f0 JumpB
	return 14; // 0x5f1 Return
	
Label_1522:
	IsDead(var_39_bool); // 0x5f2 Func
	var_47_bool = var_39_bool; // 0x5f4 Push
	if(var_47_bool == 0) goto Label_1527; // 0x5f5 JumpB
	return 14; // 0x5f6 Return
	
Label_1527:
	GetSecondaryAnimationType(var_40_int); // 0x5f7 Func
	var_48_int = 0; // 0x5f9 PushI
	var_49_bool = var_40_int < var_48_int; // 0x5fa LT
	if(var_49_bool == 0) goto Label_1533; // 0x5fb JumpB
	return 14; // 0x5fc Return
	
Label_1533:
	GetPosition(var_41_cvector); // 0x5fd ObjFunc
	GetPosition(var_42_cvector); // 0x5ff Func
	GetDirection(var_43_cvector); // 0x601 Func
	var_44_cvector = var_42_cvector - var_41_cvector; // 0x603 Sub2
	var_50_float = GetByIndex(var_44_cvector, 0); // 0x604 PushE
	var_51_float = GetByIndex(var_43_cvector, 0); // 0x605 PushE
	var_52_float = var_50_float * var_51_float; // 0x606 Mult
	var_53_float = GetByIndex(var_44_cvector, 2); // 0x607 PushE
	var_54_float = GetByIndex(var_43_cvector, 2); // 0x608 PushE
	var_55_float = var_53_float * var_54_float; // 0x609 Mult
	var_56_int = var_52_float + var_55_float; // 0x60a Add
	var_57_int = 0; // 0x60b PushI
	var_58_bool = var_56_int >= var_57_int; // 0x60c GE
	if(var_58_bool == 0) goto Label_1552; // 0x60d JumpB
	var_45_string = "fhit"; // 0x60e MovS
	goto Label_1553; // 0x60f Jump
	
Label_1553:
	var_59_string = "hit_react"; // 0x611 PushS
	var_60_string = "1"; // 0x612 PushS
	var_61_int = var_45_string + var_60_string; // 0x613 Add
	var_62_string = "2"; // 0x614 PushS
	var_63_int = var_45_string + var_62_string; // 0x615 Add
	var_64_int = -10; // 0x616 PushI
	FadeSecondaryAnimation(var_59_string, var_61_int, var_63_int, var_64_int); // 0x617 Func
	return 14; // 0x619 Return
	
Label_1552:
	var_45_string = "bhit"; // 0x610 MovS
}


func_1135(var_24_object)
{
	var_25_bool = 0; var_26_string = ""; var_27_string = ""; // 0x470 PushV
	var_26_string = "quest_d5_01"; // 0x471 MovS
	var_27_string = "dead"; // 0x472 MovS
	func_1883(var_25_bool, var_26_string, var_27_string); // 0x473 NEW_2
	var_31_object = Obj(); // 0x475 PushV
	var_31_object = var_24_object; // 0x476 Mov
	func_1174(var_31_object); // 0x477 NEW_2
	var_111_int = 50; // 0x479 PushI
	var_112_int = 40; // 0x47a PushI
	SetRTEnvelope(var_111_int, var_112_int); // 0x47b Func
	func_1968(); // 0x47e NEW_2
	
Label_1152:
	Hold(); // 0x480 Func
	goto Label_1152; // 0x482 Jump
}


func_1265(var_53_string)
{
	RemoveRTEnvelope(); // 0x4f2 Func
	SetDeathState(); // 0x4f4 Func
	Stop(); // 0x4f6 Func
	StopAsync(); // 0x4f8 Func
	StopSecondaryAnimation(); // 0x4fa Func
	var_54_string = ""; // 0x4fc PushV
	var_54_string = var_53_string; // 0x4fd Mov
	func_1791(var_54_string); // 0x4fe NEW_2
	var_83_string = "all"; // 0x500 PushS
	PlayAnimation(var_83_string, var_53_string); // 0x501 Func
	WaitForAnimEnd(); // 0x503 Func
	var_84_string = "all"; // 0x505 PushS
	LockAnimationEnd(var_84_string, var_53_string); // 0x506 Func
	RemoveEnvelope(); // 0x508 Func
	return 0; // 0x50a Return
}


func_1644()
{
	var_234_cvector = CVector(0,0,0); var_235_cvector = CVector(0,0,0); var_236_cvector = CVector(0,0,0); var_237_cvector = CVector(0,0,0); var_238_cvector = CVector(0,0,0); var_239_cvector = CVector(0,0,0); // 0x66c PushV
	GetPosition(var_237_cvector); // 0x66d ObjFunc
	GetPosition(var_238_cvector); // 0x66f Func
	var_239_cvector = var_237_cvector - var_238_cvector; // 0x671 Sub2
	var_240_float = GetByIndex(var_239_cvector, 0); // 0x672 PushE
	var_241_float = GetByIndex(var_239_cvector, 2); // 0x673 PushE
	RotateAsync(var_240_float, var_241_float); // 0x674 Func
	return 6; // 0x676 Return
}


func_2029(var_77_int)
{
	var_77_int = 515572; // 0x7ed MovI
	return 0; // 0x7ee Return
}


func_877(var_376_float)
{
	var_376_float = 0.5; // 0x36d MovF
	return 0; // 0x36e Return
}


func_2031(var_76_int)
{
	var_76_int = 504031; // 0x7ef MovI
	return 0; // 0x7f0 Return
}


func_879(var_2_object, var_130_bool, var_131_object, var_132_float, var_133_float, var_134_bool, var_135_bool)
{
	var_139_bool = 0; var_140_bool = 0; var_141_bool = 0; var_142_bool = 0; // 0x36f PushV
	var_143_object = Obj(); // 0x370 PushV
	var_143_object = var_131_object; // 0x371 Mov
	func_1895(var_143_object); // 0x372 NEW_2
	var_144_int = 1; // 0x374 PushI
	var_145_int = 5; // 0x375 PushI
	SetTimer(var_144_int, var_145_int); // 0x376 Func
	CanSee(var_141_bool, var_131_object); // 0x378 Func
	var_146_bool = var_141_bool; // 0x37a Push
	if(var_146_bool == 0) goto Label_898; // 0x37b JumpB
	var_2_object = 1; // 0x37c TMovB
	var_147_object = Obj(); // 0x37d PushV
	var_147_object = var_131_object; // 0x37e Mov
	func_1773(var_147_object); // 0x37f NEW_2
	goto Label_899; // 0x381 Jump
	
Label_899:
	var_154_bool = 0; var_155_object = Obj(); // 0x383 PushV
	var_155_object = var_131_object; // 0x384 Mov
	func_1363(var_154_bool, var_155_object); // 0x385 NEW_2
	if(var_154_bool == 0) goto Label_909; // 0x387 JumpB
	var_158_object = Obj(); // 0x388 PushV
	func_1832(var_158_object); // 0x389 NEW_2
	SendPlayerEnemy(var_131_object, var_158_object); // 0x38b Func
	
Label_909:
	var_159_bool = 0; var_160_object = Obj(); var_161_float = 0; var_162_float = 0; var_163_bool = 0; var_164_bool = 0; // 0x38d PushV
	var_160_object = var_131_object; // 0x38e Mov
	var_161_float = var_132_float; // 0x38f Mov
	var_162_float = var_133_float; // 0x390 Mov
	var_163_bool = var_134_bool; // 0x391 Mov
	var_164_bool = var_135_bool; // 0x392 Mov
	func_984(var_141_bool, var_142_bool, var_159_bool, var_160_object, var_161_float, var_162_float, var_163_bool, var_164_bool); // 0x393 NEW_2
	var_142_bool = var_159_bool; // 0x394 Mov
	var_210_object = var_2_object; // 0x396 PushT
	if(var_210_object == 0) goto Label_923; // 0x397 JumpB
	var_211_string = "head"; // 0x398 PushS
	UnlookAsync(var_211_string); // 0x399 Func
	
Label_923:
	var_212_int = 1; // 0x39b PushI
	KillTimer(var_212_int); // 0x39c Func
	var_130_bool = var_142_bool; // 0x39e Mov
	return 4; // 0x39f Return
	
Label_898:
	var_2_object = 0; // 0x382 TMovB
}


func_1655(var_28_bool, var_30_float)
{
	var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_bool = 0; var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; // 0x677 PushV
	GetPosition(var_41_cvector); // 0x678 ObjFunc
	GetEyesHeight(var_40_float); // 0x67a ObjFunc
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x67c PushE
	var_49_float = var_49_float + var_40_float; // 0x67d Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x67e PopE
	GetPosition(var_42_cvector); // 0x67f Func
	GetEyesHeight(var_40_float); // 0x681 Func
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x683 PushE
	var_50_float = var_50_float + var_40_float; // 0x684 Add2
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x685 PopE
	var_43_cvector = var_41_cvector - var_42_cvector; // 0x686 Sub2
	var_51_float = GetByIndex(var_43_cvector, 1); // 0x687 PushE
	var_51_float = 0; // 0x688 MovI
	SetByIndex(var_43_cvector, 1) = var_51_float; // 0x689 PopE
	var_52_int = var_43_cvector | var_43_cvector; // 0x68a Or
	var_53_float = sqrt(var_52_int); // 0x68b Sqrt
	var_43_cvector = var_43_cvector / var_43_cvector; // 0x68c Div2
	var_44_cvector = -var_43_cvector; // 0x68d Neg2
	var_54_float = var_43_cvector * var_30_float; // 0x68e Mult
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); // 0x68f PushV
	var_57_cvector = CVector(0.0, 1.0, 0.0); // 0x690 PushVec
	var_56_cvector = var_44_cvector ^ var_57_cvector; // 0x691 Xor2
	func_1838(var_55_cvector, var_56_cvector); // 0x692 NEW_2
	var_63_int = 25; // 0x694 PushI
	var_64_float = var_55_cvector * var_63_int; // 0x695 Mult
	var_65_int = var_54_float + var_64_float; // 0x696 Add
	var_66_cvector = CVector(0.0, 10.0, 0.0); // 0x697 PushVec
	var_45_cvector = var_65_int - var_66_cvector; // 0x698 Sub2
	var_46_cvector = var_42_cvector + var_45_cvector; // 0x699 Add2
	IsOverrideActive(var_47_bool); // 0x69a Func
	var_67_bool = var_47_bool; // 0x69c Push
	if(var_67_bool == 0) goto Label_1696; // 0x69d JumpB
	var_28_bool = 0; // 0x69e MovB
	return 18; // 0x69f Return
	
Label_1696:
	StopWorld(); // 0x6a0 Func
	var_68_bool = 1; // 0x6a2 PushB
	CameraTransit(var_46_cvector, var_44_cvector, var_68_bool); // 0x6a3 Func
	var_69_float = GetByIndex(var_45_cvector, 0); // 0x6a5 PushE
	var_70_float = GetByIndex(var_45_cvector, 2); // 0x6a6 PushE
	Rotate(var_69_float, var_70_float); // 0x6a7 Func
	var_71_bool = 0; // 0x6a9 PushV
	func_2037(var_71_bool); // 0x6aa NEW_2
	if(var_71_bool == 0) goto Label_1710; // 0x6ac JumpB
	goto Label_1718; // 0x6ad Jump
	
Label_1718:
	CameraWaitForPlayFinish(); // 0x6b6 Func
	ResumeWorld(); // 0x6b8 Func
	var_28_bool = 1; // 0x6ba MovB
	return 18; // 0x6bb Return
	
Label_1710:
	var_72_string = "head"; // 0x6ae PushS
	HasAnimationTrack(var_48_bool, var_72_string); // 0x6af Func
	var_73_bool = var_48_bool; // 0x6b1 Push
	if(var_73_bool == 0) goto Label_1718; // 0x6b2 JumpB
	var_74_string = "head"; // 0x6b3 PushS
	LookAsyncCamera(var_74_string); // 0x6b4 Func
}


func_1784()
{
	var_17_bool = 0; // 0x6f8 PushV
	func_2037(var_17_bool); // 0x6f9 NEW_2
	if(var_17_bool == 0) goto Label_1790; // 0x6fb JumpB
	lshStopSpeech(); // 0x6fc Func
	
Label_1790:
	return 0; // 0x6fe Return
}


func_2033(var_78_string)
{
	var_78_string = "ui/NPC_Citizen2.png"; // 0x7f1 MovS
	return 0; // 0x7f2 Return
}


func_2035(var_79_string)
{
	var_79_string = "ui/NPC_Citizen2_b.png"; // 0x7f3 MovS
	return 0; // 0x7f4 Return
}


func_755(var_300_bool)
{
	var_301_bool = 0; // 0x2f3 PushV
	var_301_bool = 0; // 0x2f4 MovB
	var_302_bool = 0; // 0x2f5 PushV
	func_727(var_301_bool, var_302_bool); // 0x2f6 NEW_2
	if(var_302_bool == 0) goto Label_766; // 0x2f8 JumpB
	var_319_bool = 0; // 0x2f9 PushV
	func_771(var_300_bool, var_301_bool, var_319_bool); // 0x2fa NEW_2
	if(var_319_bool == 0) goto Label_766; // 0x2fc JumpB
	var_301_bool = 1; // 0x2fd MovB
	
Label_766:
	if(var_301_bool == 0) goto Label_769; // 0x2fe JumpB
	var_300_bool = 1; // 0x2ff MovB
	return 0; // 0x300 Return
	
Label_769:
	var_300_bool = 0; // 0x301 MovB
	return 0; // 0x302 Return
}


func_2037(var_71_bool)
{
	var_71_bool = 0; // 0x7f5 MovB
	return 0; // 0x7f6 Return
}


func_1791(var_54_string)
{
	var_55_bool = 0; var_56_int = 0; var_57_bool = 0; var_58_int = 0; var_59_bool = 0; var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_bool = 0; var_64_int = 0; var_65_bool = 0; var_66_int = 0; var_67_bool = 0; var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); // 0x6ff PushV
	IsExisting3DSound(var_63_bool, var_54_string); // 0x700 Func
	var_71_bool = var_63_bool == 0; // 0x702 Not
	if(var_71_bool == 0) goto Label_1816; // 0x703 JumpB
	var_64_int = 0; // 0x704 MovI
	
Label_1797:
	var_72_int = 1; // 0x705 PushI
	var_73_int = var_64_int + var_72_int; // 0x706 Add
	var_74_int = var_54_string + var_73_int; // 0x707 Add
	IsExisting3DSound(var_65_bool, var_74_int); // 0x708 Func
	var_75_bool = var_65_bool == 0; // 0x70a Not
	if(var_75_bool == 0) goto Label_1805; // 0x70b JumpB
	goto Label_1808; // 0x70c Jump
	
Label_1808:
	var_76_bool = var_64_int == 0; // 0x710 Not
	if(var_76_bool == 0) goto Label_1811; // 0x711 JumpB
	return 16; // 0x712 Return
	
Label_1811:
	irand(var_66_int, var_64_int); // 0x713 Func
	var_77_int = 1; // 0x715 PushI
	var_78_int = var_66_int + var_77_int; // 0x716 Add
	var_54_string = var_54_string + var_78_int; // 0x717 Add2
	
Label_1816:
	Is3DSoundLoaded(var_67_bool, var_54_string); // 0x718 Func
	var_79_bool = var_67_bool; // 0x71a Push
	if(var_79_bool == 0) goto Label_1831; // 0x71b JumpB
	GetEyesHeight(var_68_float); // 0x71c Func
	GetDirection(var_69_cvector); // 0x71e Func
	var_80_int = 50; // 0x720 PushI
	var_70_cvector = var_69_cvector * var_80_int; // 0x721 Mult2
	var_81_float = GetByIndex(var_70_cvector, 1); // 0x722 PushE
	var_81_float = var_81_float + var_68_float; // 0x723 Add2
	SetByIndex(var_70_cvector, 1) = var_81_float; // 0x724 PopE
	PlayGlobalSound(var_54_string, var_70_cvector); // 0x725 Func
	
Label_1831:
	return 16; // 0x727 Return
	
Label_1805:
	var_82_int = 1; // 0x70d PushI
	var_64_int = var_64_int + var_82_int; // 0x70e Add2
	goto Label_1797; // 0x70f Jump
}


