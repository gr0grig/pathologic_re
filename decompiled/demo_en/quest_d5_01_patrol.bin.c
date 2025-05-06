task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_16_int = 1; // 0x9b PushI
	if(var_16_int == 0) goto Label_195; // 0x9c JumpB
	func_1782(); // 0x9e NEW_2
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
	func_2028(var_44_bool); // 0xb9 NEW_2
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
	func_1886(var_17_object); // 0x3a6 NEW_2
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
	func_1771(var_18_object); // 0x3c7 NEW_2
	
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
	func_2014(); // 0x461 NEW_2
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
	func_1929(var_18_object); // 0x48b NEW_2
	
Label_1165:
	return 2; // 0x48d Return
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool)
{
	var_14_object = Obj(); // 0x48e PushV
	func_1830(var_14_object); // 0x48f NEW_2
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
	func_1874(var_18_bool, var_19_string, var_20_string); // 0x531 NEW_2
	
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
	var_18_object = Obj(); var_19_int = 0; var_20_float = 0; // 0x7c0 PushV
	var_18_object = var_14_object; // 0x7c1 Mov
	var_19_int = var_15_int; // 0x7c2 Mov
	var_20_float = var_16_float; // 0x7c3 Mov
	func_1562(var_18_object, var_19_int, var_20_float); // 0x7c4 NEW_2
	return 0; // 0x7c6 Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_int, var_16_float, var_17_float, var_18_cvector, var_19_cvector)
{
	var_20_object = Obj(); var_21_int = 0; var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x7c8 PushV
	var_20_object = var_14_object; // 0x7c9 Mov
	var_21_int = var_15_int; // 0x7ca Mov
	var_22_float = var_16_float; // 0x7cb Mov
	var_23_cvector = var_18_cvector; // 0x7cc Mov
	var_24_cvector = var_19_cvector; // 0x7cd Mov
	func_1630(var_22_float, var_23_cvector, var_24_cvector); // 0x7ce NEW_2
	return 0; // 0x7d0 Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_string)
{
	var_16_float = 0; var_17_float = 0; // 0x7d1 PushV
	var_18_string = "health"; // 0x7d2 PushS
	var_19_bool = var_15_string == var_18_string; // 0x7d3 Eq
	if(var_19_bool == 0) goto Label_2013; // 0x7d4 JumpB
	var_20_string = "health"; // 0x7d5 PushS
	GetProperty(var_20_string, var_17_float); // 0x7d6 Func
	var_21_int = 0; // 0x7d8 PushI
	var_22_bool = var_17_float <= var_21_int; // 0x7d9 LE
	if(var_22_bool == 0) goto Label_2013; // 0x7da JumpB
	SignalDeath(var_14_object); // 0x7db Func
	
Label_2013:
	return 2; // 0x7dd Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object)
{
	var_15_object = Obj(); // 0x7df PushV
	var_15_object = var_14_object; // 0x7e0 Mov
	func_2030(var_15_object); // 0x7e1 NEW_2
	return 0; // 0x7e3 Return
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
	var_74_bool = var_28_bool == 0; // 0x7 Not
	if(var_74_bool == 0) goto Label_11; // 0x8 JumpB
	var_17_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_24_object); // 0xb Func
	var_75_int = 0; // 0xd PushV
	func_2022(var_75_int); // 0xe NEW_2
	SetNPCName(var_75_int); // 0x10 ObjFunc
	var_76_int = 0; // 0x12 PushV
	func_2020(var_76_int); // 0x13 NEW_2
	SetNPCDescription(var_76_int); // 0x15 ObjFunc
	var_77_string = ""; // 0x17 PushV
	func_2024(var_77_string); // 0x18 NEW_2
	SetPhoto(var_77_string); // 0x1a ObjFunc
	var_78_string = ""; // 0x1c PushV
	func_2026(var_78_string); // 0x1d NEW_2
	SetPhoto2(var_78_string); // 0x1f ObjFunc
	var_79_int = 0; // 0x21 PushV
	func_1906(var_79_int); // 0x22 NEW_2
	SetPlayerName(var_79_int); // 0x24 ObjFunc
	var_26_int = -1; // 0x26 MovI
	IsOverrideActive(var_25_bool); // 0x27 Func
	var_87_bool = var_25_bool; // 0x29 Push
	if(var_87_bool == 0) goto Label_45; // 0x2a JumpB
	var_17_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_24_object); // 0x2d Func
	var_88_object = Obj(); var_89_object = Obj(); // 0x2f PushV
	var_88_object = var_18_object; // 0x30 Mov
	var_89_object = var_24_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_90_object, var_91_object, var_92_string, var_93_bool, var_88_object, var_89_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_27_bool); // 0x36 ObjFunc
	
Label_56:
	var_137_bool = var_27_bool == 0; // 0x38 Not
	if(var_137_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_27_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_138_object = Obj(); // 0x3f PushV
	var_138_object = var_18_object; // 0x40 Mov
	func_1723(); // 0x41 NEW_2
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


func_132(var_2_object, var_95_string)
{
	var_96_bool = 0; // 0x85 PushV
	func_2028(var_96_bool); // 0x86 NEW_2
	var_97_bool = var_96_bool == 0; // 0x88 Not
	if(var_97_bool == 0) goto Label_139; // 0x89 JumpB
	return 0; // 0x8a Return
	
Label_139:
	var_98_bool = var_95_string == var_2_object; // 0x8b Eq
	if(var_98_bool == 0) goto Label_142; // 0x8c JumpB
	return 0; // 0x8d Return
	
Label_142:
	var_99_string = ""; var_100_bool = 0; // 0x8e PushV
	var_99_string = var_95_string; // 0x8f Mov
	var_101_string = ""; // 0x90 PushS
	var_102_bool = var_95_string == var_101_string; // 0x91 Eq
	if(var_102_bool == 0) goto Label_149; // 0x92 JumpB
	var_100_bool = 0; // 0x93 MovB
	goto Label_150; // 0x94 Jump
	
Label_150:
	func_1756(var_99_string, var_100_bool); // 0x96 NEW_2
	var_2_object = var_95_string; // 0x98 TMov
	return 0; // 0x99 Return
	
Label_149:
	var_100_bool = 1; // 0x95 MovB
}


func_1923(var_113_int)
{
	var_114_int = 0; var_115_int = 0; // 0x783 PushV
	var_116_string = "branch"; // 0x784 PushS
	GetVariable(var_116_string, var_115_int); // 0x785 Func
	var_113_int = var_115_int; // 0x787 Mov
	return 2; // 0x788 Return
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
	func_1895(); // 0x216 NEW_2
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
	var_463_string = "all"; // 0x231 PushS
	var_464_string = "attack_middle"; // 0x232 PushS
	var_465_int = var_464_string + var_354_int; // 0x233 Add
	HasAnimation(var_355_bool, var_463_string, var_465_int); // 0x234 Func
	var_466_bool = var_355_bool; // 0x236 Push
	if(var_466_bool == 0) goto Label_637; // 0x237 JumpB
	func_1895(); // 0x239 NEW_2
	var_467_string = "all"; // 0x23b PushS
	var_468_string = "attack_middle"; // 0x23c PushS
	var_469_int = var_468_string + var_354_int; // 0x23d Add
	PlayAnimation(var_467_string, var_469_int); // 0x23e Func
	WaitForAnimEnd(); // 0x240 Func
	func_859(var_357_string); // 0x243 NEW_2
	var_470_bool = 0; var_471_object = Obj(); // 0x245 PushV
	var_471_object = var_0_object; // 0x246 MovT
	func_1494(var_470_bool, var_471_object); // 0x247 NEW_2
	var_472_bool = var_470_bool == 0; // 0x249 Not
	if(var_472_bool == 0) goto Label_591; // 0x24a JumpB
	StopAsync(); // 0x24b Func
	var_348_bool = 0; // 0x24d MovB
	return 8; // 0x24e Return
	
Label_591:
	var_473_float = 0; var_474_int = 0; // 0x24f PushV
	var_473_float = var_349_float; // 0x250 Mov
	var_474_int = var_354_int; // 0x251 Mov
	func_481(var_357_string, var_473_float, var_474_int); // 0x252 NEW_2
	var_356_int = 1; // 0x254 MovI
	
Label_597:
	var_475_string = "attack_middle"; // 0x255 PushS
	var_476_int = var_475_string + var_354_int; // 0x256 Add
	var_477_string = "_"; // 0x257 PushS
	var_478_int = var_476_int + var_477_string; // 0x258 Add
	var_357_string = var_478_int + var_356_int; // 0x259 Add2
	var_479_string = "all"; // 0x25a PushS
	HasAnimation(var_355_bool, var_479_string, var_357_string); // 0x25b Func
	var_480_bool = var_355_bool == 0; // 0x25d Not
	if(var_480_bool == 0) goto Label_608; // 0x25e JumpB
	goto Label_637; // 0x25f Jump
	
Label_637:
	var_481_bool = 0; // 0x27d PushB
	SetAttackState(var_481_bool); // 0x27e Func
	var_482_string = "all"; // 0x280 PushS
	var_483_string = "attack_end"; // 0x281 PushS
	var_484_int = var_483_string + var_354_int; // 0x282 Add
	PlayAnimation(var_482_string, var_484_int); // 0x283 Func
	var_485_bool = 0; // 0x285 PushV
	func_873(var_485_bool); // 0x286 NEW_2
	if(var_485_bool == 0) goto Label_655; // 0x288 JumpB
	var_486_bool = 0; var_487_float = 0; // 0x289 PushV
	var_487_float = 0.75; // 0x28a MovF
	func_657(var_486_bool, var_487_float); // 0x28b NEW_2
	StopAsync(); // 0x28d Func
	
Label_655:
	var_348_bool = 1; // 0x28f MovB
	return 8; // 0x290 Return
	
Label_608:
	func_1895(); // 0x261 NEW_2
	var_495_string = "all"; // 0x263 PushS
	PlayAnimation(var_495_string, var_357_string); // 0x264 Func
	WaitForAnimEnd(); // 0x266 Func
	func_859(var_357_string); // 0x269 NEW_2
	var_496_bool = 0; var_497_object = Obj(); // 0x26b PushV
	var_497_object = var_0_object; // 0x26c MovT
	func_1494(var_496_bool, var_497_object); // 0x26d NEW_2
	var_498_bool = var_496_bool == 0; // 0x26f Not
	if(var_498_bool == 0) goto Label_629; // 0x270 JumpB
	StopAsync(); // 0x271 Func
	var_348_bool = 0; // 0x273 MovB
	return 8; // 0x274 Return
	
Label_629:
	var_499_float = 0; var_500_int = 0; // 0x275 PushV
	var_499_float = var_349_float; // 0x276 Mov
	var_500_int = var_354_int; // 0x277 Mov
	func_481(var_357_string, var_499_float, var_500_int); // 0x278 NEW_2
	var_501_int = 1; // 0x27a PushI
	var_356_int = var_356_int + var_501_int; // 0x27b Add2
	goto Label_597; // 0x27c Jump
}


func_1929(var_18_object)
{
	var_19_int = 0; // 0x78a PushV
	func_1923(var_19_int); // 0x78b NEW_2
	var_23_int = 1; // 0x78d PushI
	var_24_bool = var_19_int == var_23_int; // 0x78e Eq
	if(var_24_bool == 0) goto Label_1939; // 0x78f JumpB
	WorkWithCorpse(var_18_object); // 0x790 Func
	goto Label_1941; // 0x792 Jump
	
Label_1941:
	return 0; // 0x795 Return
	
Label_1939:
	Barter(var_18_object); // 0x793 Func
}


func_657(var_486_bool, var_487_float)
{
	var_488_float = 0; var_489_bool = 0; var_490_float = 0; var_491_bool = 0; // 0x291 PushV
	rand(var_490_float); // 0x292 Func
	var_492_bool = var_490_float < var_487_float; // 0x294 LT
	if(var_492_bool == 0) goto Label_677; // 0x295 JumpB
	
Label_662:
	IsAnimationPlaying(var_491_bool); // 0x296 Func
	var_493_bool = var_491_bool == 0; // 0x298 Not
	if(var_493_bool == 0) goto Label_667; // 0x299 JumpB
	goto Label_676; // 0x29a Jump
	
Label_676:
	goto Label_682; // 0x2a4 Jump
	
Label_682:
	var_486_bool = 0; // 0x2aa MovB
	return 4; // 0x2ab Return
	
Label_667:
	var_494_bool = 0; // 0x29b PushV
	func_755(var_494_bool); // 0x29c NEW_2
	if(var_494_bool == 0) goto Label_673; // 0x29e JumpB
	var_486_bool = 1; // 0x29f MovB
	return 4; // 0x2a0 Return
	
Label_673:
	sync(); // 0x2a1 Func
	goto Label_662; // 0x2a3 Jump
	
Label_677:
	WaitForAnimEnd(); // 0x2a5 Func
	func_859(var_491_bool); // 0x2a8 NEW_2
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
	func_1789(var_106_string); // 0x4dc NEW_2
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


func_1942(var_119_string)
{
	var_120_object = Obj(); var_121_int = 0; var_122_bool = 0; var_123_object = Obj(); var_124_int = 0; var_125_bool = 0; // 0x796 PushV
	CreateInvItem(var_123_object); // 0x797 Func
	SetItemName(var_119_string); // 0x799 ObjFunc
	var_126_string = "Organ"; // 0x79b PushS
	var_127_int = 1; // 0x79c PushI
	SetProperty(var_126_string, var_127_int); // 0x79d ObjFunc
	GetItemID(var_124_int); // 0x79f ObjFunc
	var_128_int = 0; // 0x7a1 PushI
	var_129_int = 1; // 0x7a2 PushI
	AddItem(var_125_bool, var_123_object, var_128_int, var_129_int); // 0x7a3 Func
	return 6; // 0x7a5 Return
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
	func_1836(var_46_cvector, var_47_cvector); // 0x631 NEW_2
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


func_1830(var_82_object)
{
	var_83_object = Obj(); var_84_object = Obj(); // 0x726 PushV
	self(var_84_object); // 0x727 Func
	var_82_object = var_84_object; // 0x729 Mov
	return 2; // 0x72a Return
}


func_1959()
{
	var_113_int = 0; // 0x7a7 PushV
	func_1923(var_113_int); // 0x7a8 NEW_2
	var_117_int = 1; // 0x7aa PushI
	var_118_bool = var_113_int != var_117_int; // 0x7ab Neq
	if(var_118_bool == 0) goto Label_1966; // 0x7ac JumpB
	return 0; // 0x7ad Return
	
Label_1966:
	var_119_string = ""; // 0x7ae PushV
	var_119_string = "liver"; // 0x7af MovS
	func_1942(var_119_string); // 0x7b0 NEW_2
	var_130_string = ""; // 0x7b2 PushV
	var_130_string = "kidney"; // 0x7b3 MovS
	func_1942(var_130_string); // 0x7b4 NEW_2
	var_131_string = ""; // 0x7b6 PushV
	var_131_string = "heart"; // 0x7b7 MovS
	func_1942(var_131_string); // 0x7b8 NEW_2
	var_132_string = ""; // 0x7ba PushV
	var_132_string = "blood"; // 0x7bb MovS
	func_1942(var_132_string); // 0x7bc NEW_2
	return 0; // 0x7be Return
}


func_1319(var_15_bool)
{
	var_15_bool = 1; // 0x527 MovB
	return 0; // 0x528 Return
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


func_1836(var_46_cvector, var_47_cvector)
{
	var_54_float = 0; var_55_float = 0; // 0x72c PushV
	var_56_int = var_47_cvector | var_47_cvector; // 0x72d Or
	var_55_float = sqrt(var_56_int); // 0x72e Sqrt2
	var_57_float = 0.0; // 0x72f PushF
	var_58_bool = var_55_float < var_57_float; // 0x730 LT
	if(var_58_bool == 0) goto Label_1844; // 0x731 JumpB
	var_46_cvector = CVector(0.0, 0.0, 0.0); // 0x732 MovV
	return 2; // 0x733 Return
	
Label_1844:
	var_46_cvector = var_47_cvector / var_47_cvector; // 0x734 Div2
	return 2; // 0x735 Return
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


func_875(var_381_int)
{
	var_381_int = 1; // 0x36b MovI
	return 0; // 0x36c Return
}


func_1846(var_437_float, var_438_float, var_439_float)
{
	var_442_bool = var_438_float < var_439_float; // 0x737 LT
	if(var_442_bool == 0) goto Label_1851; // 0x738 JumpB
	var_437_float = var_438_float; // 0x739 Mov
	goto Label_1852; // 0x73a Jump
	
Label_1852:
	return 0; // 0x73c Return
	
Label_1851:
	var_437_float = var_439_float; // 0x73b Mov
}


func_1723()
{
	var_139_bool = 0; var_140_bool = 0; // 0x6bb PushV
	CameraSwitchToNormal(); // 0x6bc Func
	var_141_bool = 0; // 0x6be PushV
	func_2028(var_141_bool); // 0x6bf NEW_2
	if(var_141_bool == 0) goto Label_1731; // 0x6c1 JumpB
	goto Label_1739; // 0x6c2 Jump
	
Label_1739:
	return 2; // 0x6cb Return
	
Label_1731:
	var_142_string = "head"; // 0x6c3 PushS
	HasAnimationTrack(var_140_bool, var_142_string); // 0x6c4 Func
	var_143_bool = var_140_bool; // 0x6c6 Push
	if(var_143_bool == 0) goto Label_1739; // 0x6c7 JumpB
	var_144_string = "head"; // 0x6c8 PushS
	UnlookAsync(var_144_string); // 0x6c9 Func
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


func_1853(var_447_float, var_448_float, var_449_float, var_450_float)
{
	var_451_bool = var_448_float < var_449_float; // 0x73e LT
	if(var_451_bool == 0) goto Label_1858; // 0x73f JumpB
	var_447_float = var_449_float; // 0x740 Mov
	return 0; // 0x741 Return
	
Label_1858:
	var_452_bool = var_448_float > var_450_float; // 0x742 GT
	if(var_452_bool == 0) goto Label_1862; // 0x743 JumpB
	var_447_float = var_450_float; // 0x744 Mov
	return 0; // 0x745 Return
	
Label_1862:
	var_447_float = var_448_float; // 0x746 Mov
	return 0; // 0x747 Return
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


func_1864(var_455_float)
{
	var_456_object = Obj(); var_457_object = Obj(); // 0x748 PushV
	CreateFloatVector(var_457_object); // 0x749 Func
	add(var_455_float); // 0x74b ObjFunc
	var_458_int = 15; // 0x74d PushI
	SendWorldWndMessage(var_458_int, var_457_object); // 0x74e Func
	return 2; // 0x750 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object; // 0x4b TMov
	var_1_object = var_88_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_94_int = 1; // 0x4e PushI
	if(var_94_int == 0) goto Label_102; // 0x4f JumpB
	var_95_string = ""; // 0x50 PushV
	var_95_string = "Neutral"; // 0x51 MovS
	func_132(var_89_object, var_95_string); // 0x52 NEW_2
	var_112_int = 512541; // 0x54 PushI
	SetMessage(var_112_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_113_int = 512542; // 0x59 PushI
	var_114_int = -1; // 0x5a PushI
	var_115_int = 13711; // 0x5b PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x5c TObjFunc
	var_116_int = 515784; // 0x5e PushI
	var_117_int = -1; // 0x5f PushI
	var_118_int = 16856; // 0x60 PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x61 TObjFunc
	goto Label_102; // 0x63 Jump
	
Label_102:
	var_119_bool = 0; // 0x66 PushV
	func_2028(var_119_bool); // 0x67 NEW_2
	if(var_119_bool == 0) goto Label_117; // 0x69 JumpB
	
Label_106:
	lshWaitForAnimEnd(); // 0x6a Func
	var_120_string = var_3_string; // 0x6c PushT
	if(var_120_string == 0) goto Label_111; // 0x6d JumpB
	goto Label_116; // 0x6e Jump
	
Label_116:
	goto Label_131; // 0x74 Jump
	
Label_131:
	return 0; // 0x83 Return
	
Label_111:
	var_121_string = ""; // 0x6f PushV
	var_121_string = var_2_object; // 0x70 MovT
	func_1740(var_121_string); // 0x71 NEW_2
	goto Label_106; // 0x73 Jump
	
Label_117:
	var_132_string = "all"; // 0x75 PushS
	var_133_string = "idle"; // 0x76 PushS
	PlayAnimation(var_132_string, var_133_string); // 0x77 Func
	
Label_121:
	WaitForAnimEnd(); // 0x79 Func
	var_134_string = var_3_string; // 0x7b PushT
	if(var_134_string == 0) goto Label_126; // 0x7c JumpB
	goto Label_131; // 0x7d Jump
	
Label_126:
	var_135_string = "all"; // 0x7e PushS
	var_136_string = "idle"; // 0x7f PushS
	PlayAnimation(var_135_string, var_136_string); // 0x80 Func
	goto Label_121; // 0x82 Jump
}


func_1740(var_121_string)
{
	var_122_bool = 0; var_123_float = 0; var_124_float = 0; var_125_bool = 0; var_126_float = 0; var_127_float = 0; // 0x6cc PushV
	lshHasAnimation(var_125_bool, var_121_string); // 0x6cd Func
	var_128_bool = var_125_bool; // 0x6cf Push
	if(var_128_bool == 0) goto Label_1751; // 0x6d0 JumpB
	lshGetAnimTimes(var_121_string, var_126_float, var_127_float); // 0x6d1 Func
	var_129_bool = 0; // 0x6d3 PushB
	lshPlayAnimation(var_126_float, var_127_float, var_129_bool); // 0x6d4 Func
	goto Label_1755; // 0x6d6 Jump
	
Label_1755:
	return 6; // 0x6db Return
	
Label_1751:
	var_130_string = "Can't find lsh animation : "; // 0x6d7 PushS
	var_131_int = var_130_string + var_121_string; // 0x6d8 Add
	Trace(var_131_int); // 0x6d9 Func
}


func_1356(var_48_cvector)
{
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x54c PushV
	GetPosition(var_52_cvector); // 0x54d Func
	GetPosition(var_53_cvector); // 0x54f ObjFunc
	var_48_cvector = var_53_cvector - var_52_cvector; // 0x551 Sub2
	return 4; // 0x552 Return
}


func_1874(var_25_bool, var_26_string, var_27_string)
{
	var_28_object = Obj(); var_29_object = Obj(); // 0x752 PushV
	FindActor(var_29_object, var_26_string); // 0x753 Func
	var_30_bool = var_29_object == 0; // 0x755 NullEq
	if(var_30_bool == 0) goto Label_1881; // 0x756 JumpB
	var_25_bool = 0; // 0x757 MovB
	return 2; // 0x758 Return
	
Label_1881:
	Trigger(var_29_object, var_27_string); // 0x759 Func
	var_25_bool = 1; // 0x75b MovB
	return 2; // 0x75c Return
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
	func_1830(var_82_object); // 0xf6 NEW_2
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
	var_502_string = "all"; // 0x177 PushS
	var_503_string = "fjump"; // 0x178 PushS
	PlayAnimation(var_502_string, var_503_string); // 0x179 Func
	WaitForAnimEnd(); // 0x17b Func
	func_859(var_51_float); // 0x17e NEW_2
	var_504_cvector = CVector(0.0, 0.0, 0.0); // 0x180 PushVec
	SetSpeed(var_504_cvector); // 0x181 Func
	Stop(); // 0x183 Func
	StopAsync(); // 0x185 Func
	var_505_bool = 0; // 0x187 PushV
	func_816(var_51_float, var_505_bool); // 0x188 NEW_2
	var_506_bool = var_505_bool == 0; // 0x18a Not
	if(var_506_bool == 0) goto Label_419; // 0x18b JumpB
	var_507_bool = 0; var_508_object = Obj(); // 0x18c PushV
	var_508_object = var_0_object; // 0x18d MovT
	func_1494(var_507_bool, var_508_object); // 0x18e NEW_2
	var_509_bool = var_507_bool == 0; // 0x190 Not
	if(var_509_bool == 0) goto Label_403; // 0x191 JumpB
	goto Label_429; // 0x192 Jump
	
Label_403:
	GetPFPosition(var_42_cvector); // 0x193 TObjFunc
	GetPFPosition(var_43_cvector); // 0x195 Func
	var_47_cvector = var_42_cvector - var_43_cvector; // 0x197 Sub2
	var_48_float = var_47_cvector | var_47_cvector; // 0x198 Or2
	var_510_float = var_29_float * var_29_float; // 0x199 Mult
	var_511_bool = var_48_float < var_510_float; // 0x19a LT
	if(var_511_bool == 0) goto Label_419; // 0x19b JumpB
	var_512_bool = 0; var_513_float = 0; // 0x19c PushV
	var_513_float = var_29_float; // 0x19d Mov
	func_520(var_51_float, var_512_bool, var_513_float); // 0x19e NEW_2
	var_514_bool = var_512_bool == 0; // 0x1a0 Not
	if(var_514_bool == 0) goto Label_419; // 0x1a1 JumpB
	goto Label_429; // 0x1a2 Jump
	
Label_420:
	var_515_bool = 0; var_516_float = 0; // 0x1a4 PushV
	var_516_float = var_29_float; // 0x1a5 Mov
	func_520(var_51_float, var_515_bool, var_516_float); // 0x1a6 NEW_2
	var_517_bool = var_515_bool == 0; // 0x1a8 Not
	if(var_517_bool == 0) goto Label_427; // 0x1a9 JumpB
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
	func_1886(var_123_object); // 0x35d NEW_2
	return 0; // 0x35f Return
}


func_1756(var_99_string, var_100_bool)
{
	var_103_bool = 0; var_104_float = 0; var_105_float = 0; var_106_bool = 0; var_107_float = 0; var_108_float = 0; // 0x6dc PushV
	lshHasAnimation(var_106_bool, var_99_string); // 0x6dd Func
	var_109_bool = var_106_bool; // 0x6df Push
	if(var_109_bool == 0) goto Label_1766; // 0x6e0 JumpB
	lshGetAnimTimes(var_99_string, var_107_float, var_108_float); // 0x6e1 Func
	lshPlayAnimation(var_107_float, var_108_float, var_100_bool); // 0x6e3 Func
	goto Label_1770; // 0x6e5 Jump
	
Label_1770:
	return 6; // 0x6ea Return
	
Label_1766:
	var_110_string = "Can't find lsh animation : "; // 0x6e6 PushS
	var_111_int = var_110_string + var_99_string; // 0x6e7 Add
	Trace(var_111_int); // 0x6e8 Func
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


func_1886(var_123_object)
{
	var_124_bool = 0; var_125_bool = 0; // 0x75e PushV
	IsPlayerActor(var_123_object, var_125_bool); // 0x75f Func
	var_126_bool = var_125_bool; // 0x761 Push
	if(var_126_bool == 0) goto Label_1894; // 0x762 JumpB
	var_127_string = "attack"; // 0x763 PushS
	PlayGlobalMusic(var_127_string); // 0x764 Func
	
Label_1894:
	return 2; // 0x766 Return
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


func_864(var_460_int)
{
	var_460_int = 0; // 0x360 MovI
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
	var_460_int = 0; // 0x1fc PushV
	func_864(var_460_int); // 0x1fd NEW_2
	ReportHit(var_0_object, var_460_int, var_392_float, var_391_float); // 0x1ff Func
	var_461_object = Obj(); var_462_float = 0; // 0x201 PushV
	var_461_object = var_390_object; // 0x202 Mov
	var_462_float = var_392_float; // 0x203 Mov
	func_871(); // 0x204 NEW_2
	
Label_518:
	return 6; // 0x206 Return
}


func_866()
{
	var_256_string = ""; // 0x362 PushV
	var_256_string = "attack_stay"; // 0x363 MovS
	func_1789(var_256_string); // 0x364 NEW_2
	return 0; // 0x366 Return
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
	func_1789(var_54_string); // 0x4fe NEW_2
	var_83_string = "all"; // 0x500 PushS
	PlayAnimation(var_83_string, var_53_string); // 0x501 Func
	WaitForAnimEnd(); // 0x503 Func
	var_84_string = "all"; // 0x505 PushS
	LockAnimationEnd(var_84_string, var_53_string); // 0x506 Func
	RemoveEnvelope(); // 0x508 Func
	return 0; // 0x50a Return
}


func_1124(var_181_bool, var_182_object)
{
	var_183_bool = 0; var_184_object = Obj(); // 0x465 PushV
	var_184_object = var_182_object; // 0x466 Mov
	func_1494(var_183_bool, var_184_object); // 0x467 NEW_2
	var_181_bool = var_183_bool; // 0x468 Mov
	return 0; // 0x46a Return
}


func_2020(var_76_int)
{
	var_76_int = 515572; // 0x7e4 MovI
	return 0; // 0x7e5 Return
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
	func_1846(var_437_float, var_438_float, var_439_float); // 0x590 NEW_2
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
	func_1853(var_447_float, var_448_float, var_449_float, var_450_float); // 0x59e NEW_2
	SetProperty(var_446_string, var_447_float); // 0x5a0 ObjFunc
	var_453_bool = 0; var_454_object = Obj(); // 0x5a2 PushV
	var_454_object = var_400_object; // 0x5a3 Mov
	func_1363(var_453_bool, var_454_object); // 0x5a4 NEW_2
	if(var_453_bool == 0) goto Label_1451; // 0x5a6 JumpB
	var_455_float = 0; // 0x5a7 PushV
	var_455_float = -var_417_float; // 0x5a8 Neg2
	func_1864(var_455_float); // 0x5a9 NEW_2
	
Label_1451:
	var_399_float = var_417_float; // 0x5ab Mov
	return 12; // 0x5ac Return
	
Label_1417:
	GetProperty(var_413_string, var_414_int); // 0x589 ObjFunc
	
Label_1399:
	var_459_string = "armor"; // 0x577 PushS
	GetProperty(var_459_string, var_412_int); // 0x578 ObjFunc
}


func_2022(var_75_int)
{
	var_75_int = 504031; // 0x7e6 MovI
	return 0; // 0x7e7 Return
}


func_871()
{
	return 0; // 0x368 Return
}


func_2024(var_77_string)
{
	var_77_string = "ui/NPC_Citizen2.png"; // 0x7e8 MovS
	return 0; // 0x7e9 Return
}


func_1895()
{
	var_360_object = Obj(); var_361_object = Obj(); // 0x767 PushV
	GetScene(var_361_object); // 0x768 Func
	var_362_string = "battle"; // 0x76a PushS
	var_363_object = Obj(); // 0x76b PushV
	func_1830(var_363_object); // 0x76c NEW_2
	BroadcastMessage(var_362_string, var_363_object, var_361_object); // 0x76e Func
	return 2; // 0x770 Return
}


func_1131(var_199_string)
{
	var_199_string = "walk"; // 0x46b MovS
	return 0; // 0x46c Return
}


func_1771(var_147_object)
{
	var_148_float = 0; var_149_cvector = CVector(0,0,0); var_150_float = 0; var_151_cvector = CVector(0,0,0); // 0x6eb PushV
	GetEyesHeight(var_150_float); // 0x6ec ObjFunc
	var_151_cvector = CVector(0.0, 0.0, 0.0); // 0x6ee MovV
	var_152_float = GetByIndex(var_151_cvector, 1); // 0x6ef PushE
	var_152_float = var_150_float; // 0x6f0 Mov
	SetByIndex(var_151_cvector, 1) = var_152_float; // 0x6f1 PopE
	var_153_string = "head"; // 0x6f2 PushS
	LookAsync(var_147_object, var_153_string, var_151_cvector); // 0x6f3 Func
	return 4; // 0x6f5 Return
}


func_1133(var_200_string)
{
	var_200_string = "run"; // 0x46d MovS
	return 0; // 0x46e Return
}


func_2026(var_78_string)
{
	var_78_string = "ui/NPC_Citizen2_b.png"; // 0x7ea MovS
	return 0; // 0x7eb Return
}


func_873(var_485_bool)
{
	var_485_bool = 1; // 0x369 MovB
	return 0; // 0x36a Return
}


func_2028(var_70_bool)
{
	var_70_bool = 0; // 0x7ec MovB
	return 0; // 0x7ed Return
}


func_2030(var_15_object)
{
	var_16_bool = 0; var_17_bool = 0; // 0x7ee PushV
	var_18_string = "revolver_ammo"; // 0x7ef PushS
	var_19_int = 0; // 0x7f0 PushI
	var_20_int = 2; // 0x7f1 PushI
	AddItem(var_17_bool, var_18_string, var_19_int, var_20_int); // 0x7f2 Func
	var_21_string = "alpha_pills"; // 0x7f4 PushS
	var_22_int = 0; // 0x7f5 PushI
	var_23_int = 2; // 0x7f6 PushI
	AddItem(var_17_bool, var_21_string, var_22_int, var_23_int); // 0x7f7 Func
	var_24_object = Obj(); // 0x7f9 PushV
	var_24_object = var_15_object; // 0x7fa Mov
	TaskCall(4); // 0x7fb TaskCall
	func_1135(var_24_object); // 0x7fc NEW_2
	TaskReturn(); // 0x7fd TaskReturn
	return 2; // 0x7ff Return
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
	func_1874(var_25_bool, var_26_string, var_27_string); // 0x473 NEW_2
	var_31_object = Obj(); // 0x475 PushV
	var_31_object = var_24_object; // 0x476 Mov
	func_1174(var_31_object); // 0x477 NEW_2
	var_111_int = 50; // 0x479 PushI
	var_112_int = 40; // 0x47a PushI
	SetRTEnvelope(var_111_int, var_112_int); // 0x47b Func
	func_1959(); // 0x47e NEW_2
	
Label_1152:
	Hold(); // 0x480 Func
	goto Label_1152; // 0x482 Jump
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


func_877(var_376_float)
{
	var_376_float = 0.5; // 0x36d MovF
	return 0; // 0x36e Return
}


func_879(var_2_object, var_130_bool, var_131_object, var_132_float, var_133_float, var_134_bool, var_135_bool)
{
	var_139_bool = 0; var_140_bool = 0; var_141_bool = 0; var_142_bool = 0; // 0x36f PushV
	var_143_object = Obj(); // 0x370 PushV
	var_143_object = var_131_object; // 0x371 Mov
	func_1886(var_143_object); // 0x372 NEW_2
	var_144_int = 1; // 0x374 PushI
	var_145_int = 5; // 0x375 PushI
	SetTimer(var_144_int, var_145_int); // 0x376 Func
	CanSee(var_141_bool, var_131_object); // 0x378 Func
	var_146_bool = var_141_bool; // 0x37a Push
	if(var_146_bool == 0) goto Label_898; // 0x37b JumpB
	var_2_object = 1; // 0x37c TMovB
	var_147_object = Obj(); // 0x37d PushV
	var_147_object = var_131_object; // 0x37e Mov
	func_1771(var_147_object); // 0x37f NEW_2
	goto Label_899; // 0x381 Jump
	
Label_899:
	var_154_bool = 0; var_155_object = Obj(); // 0x383 PushV
	var_155_object = var_131_object; // 0x384 Mov
	func_1363(var_154_bool, var_155_object); // 0x385 NEW_2
	if(var_154_bool == 0) goto Label_909; // 0x387 JumpB
	var_158_object = Obj(); // 0x388 PushV
	func_1830(var_158_object); // 0x389 NEW_2
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
	func_1836(var_55_cvector, var_56_cvector); // 0x692 NEW_2
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
	CameraTransit(var_46_cvector, var_44_cvector); // 0x6a2 Func
	var_68_float = GetByIndex(var_45_cvector, 0); // 0x6a4 PushE
	var_69_float = GetByIndex(var_45_cvector, 2); // 0x6a5 PushE
	Rotate(var_68_float, var_69_float); // 0x6a6 Func
	var_70_bool = 0; // 0x6a8 PushV
	func_2028(var_70_bool); // 0x6a9 NEW_2
	if(var_70_bool == 0) goto Label_1709; // 0x6ab JumpB
	goto Label_1717; // 0x6ac Jump
	
Label_1717:
	CameraWaitForPlayFinish(); // 0x6b5 Func
	ResumeWorld(); // 0x6b7 Func
	var_28_bool = 1; // 0x6b9 MovB
	return 18; // 0x6ba Return
	
Label_1709:
	var_71_string = "head"; // 0x6ad PushS
	HasAnimationTrack(var_48_bool, var_71_string); // 0x6ae Func
	var_72_bool = var_48_bool; // 0x6b0 Push
	if(var_72_bool == 0) goto Label_1717; // 0x6b1 JumpB
	var_73_string = "head"; // 0x6b2 PushS
	LookAsyncCamera(var_73_string); // 0x6b3 Func
}


func_1906(var_79_int)
{
	var_80_int = 0; var_81_int = 0; // 0x772 PushV
	var_82_string = "branch"; // 0x773 PushS
	GetVariable(var_82_string, var_81_int); // 0x774 Func
	var_83_int = 0; // 0x776 PushI
	var_84_bool = var_81_int == var_83_int; // 0x777 Eq
	if(var_84_bool == 0) goto Label_1916; // 0x778 JumpB
	var_79_int = 1; // 0x779 MovI
	return 2; // 0x77a Return
	
Label_1916:
	var_85_int = 1; // 0x77c PushI
	var_86_bool = var_81_int == var_85_int; // 0x77d Eq
	if(var_86_bool == 0) goto Label_1921; // 0x77e JumpB
	var_79_int = 2; // 0x77f MovI
	return 2; // 0x780 Return
	
Label_1921:
	var_79_int = 3; // 0x781 MovI
	return 2; // 0x782 Return
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


func_1782()
{
	var_17_bool = 0; // 0x6f6 PushV
	func_2028(var_17_bool); // 0x6f7 NEW_2
	if(var_17_bool == 0) goto Label_1788; // 0x6f9 JumpB
	lshStopSpeech(); // 0x6fa Func
	
Label_1788:
	return 0; // 0x6fc Return
}


func_1789(var_54_string)
{
	var_55_bool = 0; var_56_int = 0; var_57_bool = 0; var_58_int = 0; var_59_bool = 0; var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_bool = 0; var_64_int = 0; var_65_bool = 0; var_66_int = 0; var_67_bool = 0; var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); // 0x6fd PushV
	IsExisting3DSound(var_63_bool, var_54_string); // 0x6fe Func
	var_71_bool = var_63_bool == 0; // 0x700 Not
	if(var_71_bool == 0) goto Label_1814; // 0x701 JumpB
	var_64_int = 0; // 0x702 MovI
	
Label_1795:
	var_72_int = 1; // 0x703 PushI
	var_73_int = var_64_int + var_72_int; // 0x704 Add
	var_74_int = var_54_string + var_73_int; // 0x705 Add
	IsExisting3DSound(var_65_bool, var_74_int); // 0x706 Func
	var_75_bool = var_65_bool == 0; // 0x708 Not
	if(var_75_bool == 0) goto Label_1803; // 0x709 JumpB
	goto Label_1806; // 0x70a Jump
	
Label_1806:
	var_76_bool = var_64_int == 0; // 0x70e Not
	if(var_76_bool == 0) goto Label_1809; // 0x70f JumpB
	return 16; // 0x710 Return
	
Label_1809:
	irand(var_66_int, var_64_int); // 0x711 Func
	var_77_int = 1; // 0x713 PushI
	var_78_int = var_66_int + var_77_int; // 0x714 Add
	var_54_string = var_54_string + var_78_int; // 0x715 Add2
	
Label_1814:
	Is3DSoundLoaded(var_67_bool, var_54_string); // 0x716 Func
	var_79_bool = var_67_bool; // 0x718 Push
	if(var_79_bool == 0) goto Label_1829; // 0x719 JumpB
	GetEyesHeight(var_68_float); // 0x71a Func
	GetDirection(var_69_cvector); // 0x71c Func
	var_80_int = 50; // 0x71e PushI
	var_70_cvector = var_69_cvector * var_80_int; // 0x71f Mult2
	var_81_float = GetByIndex(var_70_cvector, 1); // 0x720 PushE
	var_81_float = var_81_float + var_68_float; // 0x721 Add2
	SetByIndex(var_70_cvector, 1) = var_81_float; // 0x722 PopE
	PlayGlobalSound(var_54_string, var_70_cvector); // 0x723 Func
	
Label_1829:
	return 16; // 0x725 Return
	
Label_1803:
	var_82_int = 1; // 0x70b PushI
	var_64_int = var_64_int + var_82_int; // 0x70c Add2
	goto Label_1795; // 0x70d Jump
}


