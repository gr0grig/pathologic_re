task_0_event_17(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_bool = 0; var_18_bool = 0; // 0x9 PushV
	IsPlayerActor(var_16_bool, var_18_bool); // 0xa Func
	var_19_bool = var_18_bool; // 0xc Push
	if(var_19_bool == 0) goto Label_19; // 0xd JumpB
	TaskCall(1); // 0xf TaskCall
	func_277(); // 0x10 NEW_2
	TaskReturn(); // 0x11 TaskReturn
	
Label_19:
	return 2; // 0x13 Return
}


task_0_event_26(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_string, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_float = 0; var_20_cvector = CVector(0,0,0); // 0x14 PushV
	var_21_string = "trigger"; // 0x15 PushS
	var_22_bool = var_16_bool == var_21_string; // 0x16 Eq
	if(var_22_bool == 0) goto Label_38; // 0x17 JumpB
	GetEyesHeight(var_19_float); // 0x18 Func
	var_23_float = GetByIndex(var_20_cvector, 1); // 0x1a PushE
	var_23_float = var_23_float + var_19_float; // 0x1b Add2
	SetByIndex(var_20_cvector, 1) = var_23_float; // 0x1c PopE
	var_24_string = "growl"; // 0x1d PushS
	PlayGlobalSound(var_24_string, var_20_cvector); // 0x1e Func
	TaskCall(1); // 0x21 TaskCall
	func_277(); // 0x22 NEW_2
	TaskReturn(); // 0x23 TaskReturn
	goto Label_42; // 0x25 Jump
	
Label_42:
	return 4; // 0x2a Return
	
Label_38:
	var_529_string = ""; // 0x26 PushV
	var_529_string = var_16_bool; // 0x27 Mov
	func_81(var_529_string); // 0x28 NEW_2
}


task_0_event_6(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_16_bool = var_6_bool; // 0x59 PushT
	if(var_16_bool == 0) goto Label_94; // 0x5a JumpB
	func_177(var_14_object, var_15_bool); // 0x5c NEW_2
	
Label_94:
	var_20_bool = 0; // 0x5e PushV
	var_20_bool = 0; // 0x5f MovB
	var_21_bool = var_5_bool; // 0x60 PushT
	if(var_21_bool == 0) goto Label_103; // 0x61 JumpB
	var_22_bool = 0; // 0x62 PushV
	func_110(var_22_bool); // 0x63 NEW_2
	if(var_22_bool == 0) goto Label_103; // 0x65 JumpB
	var_20_bool = 1; // 0x66 MovB
	
Label_103:
	if(var_20_bool == 0) goto Label_109; // 0x67 JumpB
	var_23_object = Obj(); // 0x68 PushV
	func_1747(var_23_object); // 0x69 NEW_2
	RemoveActor(var_23_object); // 0x6b Func
	
Label_109:
	return 0; // 0x6d Return
}


task_0_event_7(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_int, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_int = 10; // 0x9b PushI
	var_18_bool = var_16_bool == var_17_int; // 0x9c Eq
	if(var_18_bool == 0) goto Label_176; // 0x9d JumpB
	var_19_bool = 0; // 0x9e PushV
	func_139(var_14_bool, var_15_object, var_16_bool, var_19_bool); // 0x9f NEW_2
	if(var_19_bool == 0) goto Label_170; // 0xa1 JumpB
	var_32_bool = var_2_bool == 0; // 0xa2 Not
	if(var_32_bool == 0) goto Label_169; // 0xa3 JumpB
	var_33_object = Obj(); // 0xa4 PushV
	var_33_object = var_4_object; // 0xa5 MovT
	func_1695(var_33_object); // 0xa6 NEW_2
	var_2_bool = 1; // 0xa8 TMovB
	
Label_169:
	goto Label_176; // 0xa9 Jump
	
Label_176:
	return 0; // 0xb0 Return
	
Label_170:
	var_40_bool = var_2_bool; // 0xaa PushT
	if(var_40_bool == 0) goto Label_176; // 0xab JumpB
	var_41_string = "head"; // 0xac PushS
	UnlookAsync(var_41_string); // 0xad Func
	var_2_bool = 0; // 0xaf TMovB
}


task_1_event_6(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_16_object = Obj(); // 0x127 PushV
	func_1747(var_16_object); // 0x128 NEW_2
	RemoveActor(var_16_object); // 0x12a Func
	Hold(); // 0x12c Func
	return 0; // 0x12e Return
}


task_2_event_6(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_16_object = Obj(); // 0x3c5 PushV
	func_1747(var_16_object); // 0x3c6 NEW_2
	RemoveActor(var_16_object); // 0x3c8 Func
	Hold(); // 0x3ca Func
	return 0; // 0x3cc Return
}


task_2_event_7(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_int)
{
	var_17_int = 1; // 0x3ff PushI
	var_18_bool = var_16_int == var_17_int; // 0x400 Eq
	if(var_18_bool == 0) goto Label_1031; // 0x401 JumpB
	var_19_object = Obj(); // 0x402 PushV
	var_19_object = var_1_int; // 0x403 MovT
	func_1810(var_19_object); // 0x404 NEW_2
	goto Label_1035; // 0x406 Jump
	
Label_1035:
	return 0; // 0x40b Return
	
Label_1031:
	var_24_int = 0; // 0x407 PushV
	var_24_int = var_16_int; // 0x408 Mov
	func_1180(var_15_bool, var_16_int, var_24_int); // 0x409 NEW_2
}


task_2_event_1(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	var_17_bool = 0; // 0x41a PushV
	var_17_bool = 0; // 0x41b MovB
	var_18_bool = var_1_int == var_16_object; // 0x41c Eq
	if(var_18_bool == 0) goto Label_1057; // 0x41d JumpB
	var_19_bool = var_2_bool == 0; // 0x41e Not
	if(var_19_bool == 0) goto Label_1057; // 0x41f JumpB
	var_17_bool = 1; // 0x420 MovB
	
Label_1057:
	if(var_17_bool == 0) goto Label_1063; // 0x421 JumpB
	var_2_bool = 1; // 0x422 TMovB
	var_20_object = Obj(); // 0x423 PushV
	var_20_object = var_16_object; // 0x424 Mov
	func_1695(var_20_object); // 0x425 NEW_2
	
Label_1063:
	return 0; // 0x427 Return
}


task_2_event_2(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	var_17_bool = 0; // 0x429 PushV
	var_17_bool = 0; // 0x42a MovB
	var_18_bool = var_1_int == var_16_object; // 0x42b Eq
	if(var_18_bool == 0) goto Label_1072; // 0x42c JumpB
	var_19_bool = var_2_bool; // 0x42d PushT
	if(var_19_bool == 0) goto Label_1072; // 0x42e JumpB
	var_17_bool = 1; // 0x42f MovB
	
Label_1072:
	if(var_17_bool == 0) goto Label_1077; // 0x430 JumpB
	var_2_bool = 0; // 0x431 TMovB
	var_20_string = "head"; // 0x432 PushS
	UnlookAsync(var_20_string); // 0x433 Func
	
Label_1077:
	return 0; // 0x435 Return
}


task_2_event_10(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	RequestClearPath(var_16_object); // 0x4af Func
	return 0; // 0x4b1 Return
}


task_2_event_41(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	func_1036(var_16_object); // 0x4bb NEW_2
	var_21_object = Obj(); // 0x4bd PushV
	var_21_object = var_16_object; // 0x4be Mov
	func_1898(); // 0x4bf NEW_2
	return 0; // 0x4c1 Return
}


task_3_event_6(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_16_object = Obj(); // 0x4cd PushV
	func_1747(var_16_object); // 0x4ce NEW_2
	RemoveActor(var_16_object); // 0x4d0 Func
	Hold(); // 0x4d2 Func
	return 0; // 0x4d4 Return
}


task_3_event_22(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_int, var_18_float, var_19_float)
{
	return 0; // 0x554 Return
}


task_3_event_16(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_string)
{
	return 0; // 0x556 Return
}


task_3_event_41(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	return 0; // 0x558 Return
}


event_22(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_int, var_18_float, var_19_float)
{
	var_20_object = Obj(); var_21_int = 0; var_22_float = 0; // 0x74c PushV
	var_20_object = var_16_object; // 0x74d Mov
	var_21_int = var_17_int; // 0x74e Mov
	var_22_float = var_18_float; // 0x74f Mov
	func_1597(var_20_object, var_21_int, var_22_float); // 0x750 NEW_2
	return 0; // 0x752 Return
}


event_43(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_int, var_18_float, var_19_float, var_20_cvector, var_21_cvector)
{
	var_22_object = Obj(); var_23_int = 0; var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x754 PushV
	var_22_object = var_16_object; // 0x755 Mov
	var_23_int = var_17_int; // 0x756 Mov
	var_24_float = var_18_float; // 0x757 Mov
	var_25_cvector = var_20_cvector; // 0x758 Mov
	var_26_cvector = var_21_cvector; // 0x759 Mov
	func_1665(var_24_float, var_25_cvector, var_26_cvector); // 0x75a NEW_2
	return 0; // 0x75c Return
}


event_16(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_string)
{
	var_18_float = 0; var_19_float = 0; // 0x75d PushV
	var_20_string = "health"; // 0x75e PushS
	var_21_bool = var_17_string == var_20_string; // 0x75f Eq
	if(var_21_bool == 0) goto Label_1897; // 0x760 JumpB
	var_22_string = "health"; // 0x761 PushS
	GetProperty(var_22_string, var_19_float); // 0x762 Func
	var_23_int = 0; // 0x764 PushI
	var_24_bool = var_19_float <= var_23_int; // 0x765 LE
	if(var_24_bool == 0) goto Label_1897; // 0x766 JumpB
	SignalDeath(var_16_object); // 0x767 Func
	
Label_1897:
	return 2; // 0x769 Return
}


event_41(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	var_17_object = Obj(); // 0x76b PushV
	var_17_object = var_16_object; // 0x76c Mov
	func_1854(var_17_object); // 0x76d NEW_2
	return 0; // 0x76f Return
}


main(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_16_bool = 1; // 0x0 PushB
	SensePlayerOnly(var_16_bool); // 0x1 Func
	var_17_float = 0; var_18_float = 0; // 0x3 PushV
	var_17_float = 300; // 0x4 MovI
	var_18_float = 100; // 0x5 MovI
	func_43(var_15_bool, var_17_float, var_18_float); // 0x6 NEW_2
	return 0; // 0x8 Return
}


func_1665(var_22_object, var_25_cvector, var_26_cvector)
{
	var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj(); // 0x681 PushV
	GetScene(var_29_object); // 0x682 Func
	var_31_string = "scripted"; // 0x684 PushS
	var_32_string = "blood_dir.xml"; // 0x685 PushS
	AddActorByType(var_30_object, var_31_string, var_29_object, var_25_cvector, var_26_cvector, var_32_string); // 0x686 Func
	var_33_object = Obj(); // 0x688 PushV
	var_33_object = var_22_object; // 0x689 Mov
	func_1553(var_33_object); // 0x68a NEW_2
	return 4; // 0x68c Return
}


func_770(var_0_int, var_294_bool, var_295_float)
{
	var_296_bool = 0; var_297_cvector = CVector(0,0,0); var_298_cvector = CVector(0,0,0); var_299_cvector = CVector(0,0,0); var_300_float = 0; var_301_bool = 0; var_302_cvector = CVector(0,0,0); var_303_cvector = CVector(0,0,0); var_304_cvector = CVector(0,0,0); var_305_float = 0; // 0x302 PushV
	
Label_771:
	IsAnimationPlaying(var_301_bool); // 0x303 Func
	var_306_bool = var_301_bool == 0; // 0x305 Not
	if(var_306_bool == 0) goto Label_776; // 0x306 JumpB
	goto Label_808; // 0x307 Jump
	
Label_808:
	func_945(var_305_float); // 0x329 NEW_2
	var_294_bool = 0; // 0x32b MovB
	return 10; // 0x32c Return
	
Label_776:
	var_307_bool = 0; // 0x308 PushV
	func_841(var_307_bool); // 0x309 NEW_2
	if(var_307_bool == 0) goto Label_782; // 0x30b JumpB
	var_294_bool = 1; // 0x30c MovB
	return 10; // 0x30d Return
	
Label_782:
	var_350_bool = 0; var_351_object = Obj(); // 0x30e PushV
	var_351_object = var_0_int; // 0x30f MovT
	func_1529(var_350_bool, var_351_object); // 0x310 NEW_2
	var_352_bool = var_350_bool == 0; // 0x312 Not
	if(var_352_bool == 0) goto Label_790; // 0x313 JumpB
	var_294_bool = 0; // 0x314 MovB
	return 10; // 0x315 Return
	
Label_790:
	GetPFPosition(var_302_cvector); // 0x316 TObjFunc
	GetPFPosition(var_303_cvector); // 0x318 Func
	var_304_cvector = var_302_cvector - var_303_cvector; // 0x31a Sub2
	var_305_float = var_304_cvector | var_304_cvector; // 0x31b Or2
	var_353_float = var_295_float * var_295_float; // 0x31c Mult
	var_354_bool = var_305_float < var_353_float; // 0x31d LT
	if(var_354_bool == 0) goto Label_805; // 0x31e JumpB
	var_355_bool = 0; var_356_float = 0; // 0x31f PushV
	var_356_float = var_295_float; // 0x320 Mov
	func_606(var_305_float, var_355_bool, var_356_float); // 0x321 NEW_2
	var_294_bool = 1; // 0x323 MovB
	return 10; // 0x324 Return
	
Label_805:
	sync(); // 0x325 Func
	goto Label_771; // 0x327 Jump
}


func_902(var_0_int, var_257_bool)
{
	var_258_bool = 0; var_259_bool = 0; // 0x386 PushV
	var_260_string = "IsAttacking"; // 0x387 PushS
	var_261_int = 1; // 0x388 PushI
	var_262_bool = IsFuncExist(var_0_int, var_260_string, var_261_int); // 0x389 FuncExist
	if(var_262_bool == 0) goto Label_911; // 0x38a JumpB
	IsAttacking(var_259_bool); // 0x38b TObjFunc
	var_257_bool = var_259_bool; // 0x38d Mov
	return 2; // 0x38e Return
	
Label_911:
	var_257_bool = 0; // 0x38f MovB
	return 2; // 0x390 Return
}


func_1798(var_18_bool, var_19_string, var_20_string)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x706 PushV
	FindActor(var_22_object, var_19_string); // 0x707 Func
	var_23_bool = var_22_object == 0; // 0x709 NullEq
	if(var_23_bool == 0) goto Label_1805; // 0x70a JumpB
	var_18_bool = 0; // 0x70b MovB
	return 2; // 0x70c Return
	
Label_1805:
	Trigger(var_22_object, var_20_string); // 0x70d Func
	var_18_bool = 1; // 0x70f MovB
	return 2; // 0x710 Return
}


func_1415(var_406_float, var_407_object, var_408_float, var_409_int)
{
	var_413_int = 0; var_414_string = ""; var_415_int = 0; var_416_float = 0; var_417_float = 0; var_418_float = 0; var_419_int = 0; var_420_string = ""; var_421_int = 0; var_422_float = 0; var_423_float = 0; var_424_float = 0; // 0x587 PushV
	var_425_bool = 0; var_426_object = Obj(); var_427_string = ""; // 0x588 PushV
	var_426_object = var_407_object; // 0x589 Mov
	var_427_string = "health"; // 0x58a MovS
	func_1403(var_425_bool, var_426_object, var_427_string); // 0x58b NEW_2
	var_428_bool = var_425_bool == 0; // 0x58d Not
	if(var_428_bool == 0) goto Label_1425; // 0x58e JumpB
	var_406_float = 0.0; // 0x58f MovF
	return 12; // 0x590 Return
	
Label_1425:
	var_429_bool = 0; var_430_object = Obj(); var_431_string = ""; // 0x591 PushV
	var_430_object = var_407_object; // 0x592 Mov
	var_431_string = "armor"; // 0x593 MovS
	func_1403(var_429_bool, var_430_object, var_431_string); // 0x594 NEW_2
	var_432_bool = var_429_bool == 0; // 0x596 Not
	if(var_432_bool == 0) goto Label_1434; // 0x597 JumpB
	var_419_int = 0; // 0x598 MovI
	goto Label_1437; // 0x599 Jump
	
Label_1437:
	var_433_string = "armor_"; // 0x59d PushS
	var_434_string = ""; var_435_int = 0; // 0x59e PushV
	var_435_int = var_409_int; // 0x59f Mov
	func_1369(var_434_string, var_435_int); // 0x5a0 NEW_2
	var_420_string = var_433_string + var_434_string; // 0x5a2 Add2
	var_440_bool = 0; var_441_object = Obj(); var_442_string = ""; // 0x5a3 PushV
	var_441_object = var_407_object; // 0x5a4 Mov
	var_442_string = var_420_string; // 0x5a5 Mov
	func_1403(var_440_bool, var_441_object, var_442_string); // 0x5a6 NEW_2
	var_443_bool = var_440_bool == 0; // 0x5a8 Not
	if(var_443_bool == 0) goto Label_1452; // 0x5a9 JumpB
	var_421_int = 0; // 0x5aa MovI
	goto Label_1454; // 0x5ab Jump
	
Label_1454:
	var_444_float = 0; var_445_float = 0; var_446_float = 0; // 0x5ae PushV
	var_447_int = var_419_int + var_421_int; // 0x5af Add
	var_448_float = 100.0; // 0x5b0 PushF
	var_445_float = var_447_int / var_447_int; // 0x5b1 Div2
	var_446_float = 1; // 0x5b2 MovI
	func_1763(var_444_float, var_445_float, var_446_float); // 0x5b3 NEW_2
	var_422_float = var_444_float; // 0x5b4 Mov
	var_450_string = "health"; // 0x5b6 PushS
	GetProperty(var_450_string, var_423_float); // 0x5b7 ObjFunc
	var_451_int = 1; // 0x5b9 PushI
	var_452_int = var_451_int - var_422_float; // 0x5ba Sub
	var_424_float = var_408_float * var_452_int; // 0x5bb Mult2
	var_453_string = "health"; // 0x5bc PushS
	var_454_float = 0; var_455_float = 0; var_456_float = 0; var_457_float = 0; // 0x5bd PushV
	var_455_float = var_423_float - var_424_float; // 0x5be Sub2
	var_456_float = 0; // 0x5bf MovI
	var_457_float = 1; // 0x5c0 MovI
	func_1770(var_454_float, var_455_float, var_456_float, var_457_float); // 0x5c1 NEW_2
	SetProperty(var_453_string, var_454_float); // 0x5c3 ObjFunc
	var_460_bool = 0; var_461_object = Obj(); // 0x5c5 PushV
	var_461_object = var_407_object; // 0x5c6 Mov
	func_1398(var_460_bool, var_461_object); // 0x5c7 NEW_2
	if(var_460_bool == 0) goto Label_1486; // 0x5c9 JumpB
	var_462_float = 0; // 0x5ca PushV
	var_462_float = -var_424_float; // 0x5cb Neg2
	func_1781(var_462_float); // 0x5cc NEW_2
	
Label_1486:
	var_406_float = var_424_float; // 0x5ce Mov
	return 12; // 0x5cf Return
	
Label_1452:
	GetProperty(var_420_string, var_421_int); // 0x5ac ObjFunc
	
Label_1434:
	var_470_string = "armor"; // 0x59a PushS
	GetProperty(var_470_string, var_419_int); // 0x59b ObjFunc
}


func_139(var_0_int, var_1_int, var_4_object, var_19_bool)
{
	var_20_float = 0; var_21_float = 0; // 0x8b PushV
	var_22_bool = var_4_object == 0; // 0x8c NullEq
	if(var_22_bool == 0) goto Label_144; // 0x8d JumpB
	var_19_bool = 0; // 0x8e MovB
	return 2; // 0x8f Return
	
Label_144:
	var_23_float = 0; var_24_object = Obj(); // 0x90 PushV
	var_24_object = var_4_object; // 0x91 MovT
	func_1390(var_24_object); // 0x92 NEW_2
	var_21_float = sqrt(var_23_float); // 0x94 Sqrt2
	var_31_bool = var_2_bool; // 0x95 PushT
	if(var_31_bool == 0) goto Label_152; // 0x96 JumpB
	var_21_float = var_21_float - var_1_int; // 0x97 Sub2
	
Label_152:
	var_19_bool = var_21_float < var_0_int; // 0x98 LT2
	return 2; // 0x99 Return
}


func_1036(var_2_bool)
{
	var_17_int = 1; // 0x40c PushI
	KillTimer(var_17_int); // 0x40d Func
	var_18_bool = var_2_bool; // 0x40f PushT
	if(var_18_bool == 0) goto Label_1045; // 0x410 JumpB
	var_2_bool = 0; // 0x411 TMovB
	var_19_string = "head"; // 0x412 PushS
	UnlookAsync(var_19_string); // 0x413 Func
	
Label_1045:
	func_1202(var_16_object); // 0x416 NEW_2
	return 0; // 0x418 Return
}


func_270(var_76_bool)
{
	var_76_bool = 1; // 0x10e MovB
	return 0; // 0x10f Return
}


func_1679()
{
	var_241_cvector = CVector(0,0,0); var_242_cvector = CVector(0,0,0); var_243_cvector = CVector(0,0,0); var_244_cvector = CVector(0,0,0); var_245_cvector = CVector(0,0,0); var_246_cvector = CVector(0,0,0); // 0x68f PushV
	GetPosition(var_244_cvector); // 0x690 ObjFunc
	GetPosition(var_245_cvector); // 0x692 Func
	var_246_cvector = var_244_cvector - var_245_cvector; // 0x694 Sub2
	var_247_float = GetByIndex(var_246_cvector, 0); // 0x695 PushE
	var_248_float = GetByIndex(var_246_cvector, 2); // 0x696 PushE
	RotateAsync(var_247_float, var_248_float); // 0x697 Func
	return 6; // 0x699 Return
}


func_272()
{
	StopAnimation(); // 0x110 Func
	StopGroup0(); // 0x112 Func
	return 0; // 0x114 Return
}


func_913(var_2_bool, var_5_bool)
{
	var_374_float = 0; var_375_int = 0; var_376_float = 0; var_377_int = 0; // 0x391 PushV
	var_378_bool = var_2_bool == 0; // 0x392 Not
	if(var_378_bool == 0) goto Label_917; // 0x393 JumpB
	return 4; // 0x394 Return
	
Label_917:
	var_379_bool = var_5_bool; // 0x395 PushT
	if(var_379_bool == 0) goto Label_925; // 0x396 JumpB
	var_380_int = -1; // 0x397 PushI
	var_5_bool = var_5_bool + var_380_int; // 0x398 Add2
	var_381_int = 0; // 0x399 PushI
	var_382_bool = var_5_bool > var_381_int; // 0x39a GT
	if(var_382_bool == 0) goto Label_925; // 0x39b JumpB
	return 4; // 0x39c Return
	
Label_925:
	rand(var_376_float); // 0x39d Func
	var_383_float = 0; // 0x39f PushV
	func_963(var_383_float); // 0x3a0 NEW_2
	var_384_bool = var_376_float < var_383_float; // 0x3a2 LT
	if(var_384_bool == 0) goto Label_944; // 0x3a3 JumpB
	irand(var_377_int, var_376_float); // 0x3a4 Func
	var_385_int = 1; // 0x3a6 PushI
	var_377_int = var_377_int + var_385_int; // 0x3a7 Add2
	var_386_string = "attack"; // 0x3a8 PushS
	var_387_int = var_386_string + var_377_int; // 0x3a9 Add
	Speak(var_387_int); // 0x3aa Func
	var_388_int = 0; // 0x3ac PushV
	func_961(var_388_int); // 0x3ad NEW_2
	var_5_bool = var_388_int; // 0x3ae TMov
	
Label_944:
	return 4; // 0x3b0 Return
}


func_1810(var_19_object)
{
	var_20_bool = 0; var_21_bool = 0; // 0x712 PushV
	IsPlayerActor(var_19_object, var_21_bool); // 0x713 Func
	var_22_bool = var_21_bool; // 0x715 Push
	if(var_22_bool == 0) goto Label_1818; // 0x716 JumpB
	var_23_string = "attack"; // 0x717 PushS
	PlayGlobalMusic(var_23_string); // 0x718 Func
	
Label_1818:
	return 2; // 0x71a Return
}


func_1553(var_33_object)
{
	var_34_bool = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = ""; var_41_bool = 0; var_42_int = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_string = ""; // 0x611 PushV
	var_48_bool = var_33_object == 0; // 0x612 NullEq
	if(var_48_bool == 0) goto Label_1557; // 0x613 JumpB
	return 14; // 0x614 Return
	
Label_1557:
	IsDead(var_41_bool); // 0x615 Func
	var_49_bool = var_41_bool; // 0x617 Push
	if(var_49_bool == 0) goto Label_1562; // 0x618 JumpB
	return 14; // 0x619 Return
	
Label_1562:
	GetSecondaryAnimationType(var_42_int); // 0x61a Func
	var_50_int = 0; // 0x61c PushI
	var_51_bool = var_42_int < var_50_int; // 0x61d LT
	if(var_51_bool == 0) goto Label_1568; // 0x61e JumpB
	return 14; // 0x61f Return
	
Label_1568:
	GetPosition(var_43_cvector); // 0x620 ObjFunc
	GetPosition(var_44_cvector); // 0x622 Func
	GetDirection(var_45_cvector); // 0x624 Func
	var_46_cvector = var_44_cvector - var_43_cvector; // 0x626 Sub2
	var_52_float = GetByIndex(var_46_cvector, 0); // 0x627 PushE
	var_53_float = GetByIndex(var_45_cvector, 0); // 0x628 PushE
	var_54_float = var_52_float * var_53_float; // 0x629 Mult
	var_55_float = GetByIndex(var_46_cvector, 2); // 0x62a PushE
	var_56_float = GetByIndex(var_45_cvector, 2); // 0x62b PushE
	var_57_float = var_55_float * var_56_float; // 0x62c Mult
	var_58_int = var_54_float + var_57_float; // 0x62d Add
	var_59_int = 0; // 0x62e PushI
	var_60_bool = var_58_int >= var_59_int; // 0x62f GE
	if(var_60_bool == 0) goto Label_1587; // 0x630 JumpB
	var_47_string = "fhit"; // 0x631 MovS
	goto Label_1588; // 0x632 Jump
	
Label_1588:
	var_61_string = "hit_react"; // 0x634 PushS
	var_62_string = "1"; // 0x635 PushS
	var_63_int = var_47_string + var_62_string; // 0x636 Add
	var_64_string = "2"; // 0x637 PushS
	var_65_int = var_47_string + var_64_string; // 0x638 Add
	var_66_int = -10; // 0x639 PushI
	FadeSecondaryAnimation(var_61_string, var_63_int, var_65_int, var_66_int); // 0x63a Func
	return 14; // 0x63c Return
	
Label_1587:
	var_47_string = "bhit"; // 0x633 MovS
}


func_532(var_1_int, var_2_bool, var_4_object)
{
	var_59_bool = 0; var_60_bool = 0; var_61_cvector = CVector(0,0,0); var_62_bool = 0; var_63_bool = 0; var_64_cvector = CVector(0,0,0); // 0x214 PushV
	var_1_int = 0; // 0x215 TMovI
	
Label_534:
	var_65_string = "all"; // 0x216 PushS
	var_66_string = "attack_begin"; // 0x217 PushS
	var_67_int = 1; // 0x218 PushI
	var_68_int = var_1_int + var_67_int; // 0x219 Add
	var_69_int = var_66_string + var_68_int; // 0x21a Add
	HasAnimation(var_62_bool, var_65_string, var_69_int); // 0x21b Func
	var_70_bool = var_62_bool == 0; // 0x21d Not
	if(var_70_bool == 0) goto Label_544; // 0x21e JumpB
	goto Label_547; // 0x21f Jump
	
Label_547:
	var_2_bool = 0; // 0x223 TMovI
	
Label_548:
	var_71_string = "attack"; // 0x224 PushS
	var_72_int = 1; // 0x225 PushI
	var_73_int = var_2_bool + var_72_int; // 0x226 Add
	var_74_int = var_71_string + var_73_int; // 0x227 Add
	IsExisting3DSound(var_63_bool, var_74_int); // 0x228 Func
	var_75_bool = var_63_bool == 0; // 0x22a Not
	if(var_75_bool == 0) goto Label_557; // 0x22b JumpB
	goto Label_560; // 0x22c Jump
	
Label_560:
	var_76_string = "all"; // 0x230 PushS
	var_77_string = "bjump"; // 0x231 PushS
	GetAnimationOffset(var_64_cvector, var_76_string, var_77_string); // 0x232 Func
	var_78_float = GetByIndex(var_64_cvector, 2); // 0x234 PushE
	var_4_object = -var_78_float; // 0x235 Neg2
	return 6; // 0x236 Return
	
Label_557:
	var_79_int = 1; // 0x22d PushI
	var_2_bool = var_2_bool + var_79_int; // 0x22e Add2
	goto Label_548; // 0x22f Jump
	
Label_544:
	var_80_int = 1; // 0x220 PushI
	var_1_int = var_1_int + var_80_int; // 0x221 Add2
	goto Label_534; // 0x222 Jump
}


func_277()
{
	var_31_object = Obj(); var_32_object = Obj(); // 0x115 PushV
	var_33_string = "player"; // 0x116 PushS
	FindActor(var_32_object, var_33_string); // 0x117 Func
	var_34_object = Obj(); var_35_bool = 0; var_36_float = 0; // 0x119 PushV
	var_34_object = var_32_object; // 0x11a Mov
	var_35_bool = 1; // 0x11b MovB
	var_36_float = 180.0; // 0x11c MovF
	func_303(var_28_bool, var_29_float, var_30_int, var_31_object, var_32_object, var_34_object, var_35_bool, var_36_float); // 0x11d NEW_2
	return 2; // 0x11f Return
}


func_1690(var_28_bool)
{
	var_29_bool = 0; var_30_bool = 0; // 0x69a PushV
	IsLoaded(var_30_bool); // 0x69b Func
	var_28_bool = var_30_bool; // 0x69d Mov
	return 2; // 0x69e Return
}


func_1819()
{
	var_367_object = Obj(); var_368_object = Obj(); // 0x71b PushV
	GetScene(var_368_object); // 0x71c Func
	var_369_string = "battle"; // 0x71e PushS
	var_370_object = Obj(); // 0x71f PushV
	func_1747(var_370_object); // 0x720 NEW_2
	BroadcastMessage(var_369_string, var_370_object, var_368_object); // 0x722 Func
	return 2; // 0x724 Return
}


func_1180(var_0_int, var_1_int, var_24_int)
{
	var_25_int = 0; // 0x49d PushI
	var_26_bool = var_24_int != var_25_int; // 0x49e Neq
	if(var_26_bool == 0) goto Label_1185; // 0x49f JumpB
	return 0; // 0x4a0 Return
	
Label_1185:
	var_27_bool = 0; var_28_object = Obj(); // 0x4a1 PushV
	var_28_object = var_1_int; // 0x4a2 MovT
	func_1218(var_27_bool, var_28_object); // 0x4a3 NEW_2
	var_63_bool = var_27_bool == 0; // 0x4a5 Not
	if(var_63_bool == 0) goto Label_1192; // 0x4a6 JumpB
	var_0_int = 1; // 0x4a7 TMovB
	
Label_1192:
	var_64_int = 0; // 0x4a8 PushI
	KillTimer(var_64_int); // 0x4a9 Func
	Stop(); // 0x4ab Func
	return 0; // 0x4ad Return
}


func_1695(var_20_object)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_float = 0; var_24_cvector = CVector(0,0,0); // 0x69f PushV
	GetEyesHeight(var_23_float); // 0x6a0 ObjFunc
	var_24_cvector = CVector(0.0, 0.0, 0.0); // 0x6a2 MovV
	var_25_float = GetByIndex(var_24_cvector, 1); // 0x6a3 PushE
	var_25_float = var_23_float; // 0x6a4 Mov
	SetByIndex(var_24_cvector, 1) = var_25_float; // 0x6a5 PopE
	var_26_string = "head"; // 0x6a6 PushS
	LookAsync(var_20_object, var_26_string, var_24_cvector); // 0x6a7 Func
	return 4; // 0x6a9 Return
}


func_289(var_403_float)
{
	var_403_float = 0.1; // 0x122 MovF
	return 0; // 0x123 Return
}


func_292(var_410_int)
{
	var_410_int = 0; // 0x125 MovI
	return 0; // 0x126 Return
}


func_1830(var_57_string, var_58_int)
{
	var_59_string = ""; var_60_string = ""; // 0x726 PushV
	var_60_string = "idle"; // 0x727 MovS
	var_61_int = var_58_int; // 0x728 Push
	if(var_61_int == 0) goto Label_1835; // 0x729 JumpB
	var_60_string = var_60_string + var_58_int; // 0x72a Add2
	
Label_1835:
	var_57_string = var_60_string; // 0x72b Mov
	return 2; // 0x72c Return
}


func_1706(var_48_string)
{
	var_49_bool = 0; var_50_int = 0; var_51_bool = 0; var_52_int = 0; var_53_bool = 0; var_54_float = 0; var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_bool = 0; var_58_int = 0; var_59_bool = 0; var_60_int = 0; var_61_bool = 0; var_62_float = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); // 0x6aa PushV
	IsExisting3DSound(var_57_bool, var_48_string); // 0x6ab Func
	var_65_bool = var_57_bool == 0; // 0x6ad Not
	if(var_65_bool == 0) goto Label_1731; // 0x6ae JumpB
	var_58_int = 0; // 0x6af MovI
	
Label_1712:
	var_66_int = 1; // 0x6b0 PushI
	var_67_int = var_58_int + var_66_int; // 0x6b1 Add
	var_68_int = var_48_string + var_67_int; // 0x6b2 Add
	IsExisting3DSound(var_59_bool, var_68_int); // 0x6b3 Func
	var_69_bool = var_59_bool == 0; // 0x6b5 Not
	if(var_69_bool == 0) goto Label_1720; // 0x6b6 JumpB
	goto Label_1723; // 0x6b7 Jump
	
Label_1723:
	var_70_bool = var_58_int == 0; // 0x6bb Not
	if(var_70_bool == 0) goto Label_1726; // 0x6bc JumpB
	return 16; // 0x6bd Return
	
Label_1726:
	irand(var_60_int, var_58_int); // 0x6be Func
	var_71_int = 1; // 0x6c0 PushI
	var_72_int = var_60_int + var_71_int; // 0x6c1 Add
	var_48_string = var_48_string + var_72_int; // 0x6c2 Add2
	
Label_1731:
	Is3DSoundLoaded(var_61_bool, var_48_string); // 0x6c3 Func
	var_73_bool = var_61_bool; // 0x6c5 Push
	if(var_73_bool == 0) goto Label_1746; // 0x6c6 JumpB
	GetEyesHeight(var_62_float); // 0x6c7 Func
	GetDirection(var_63_cvector); // 0x6c9 Func
	var_74_int = 50; // 0x6cb PushI
	var_64_cvector = var_63_cvector * var_74_int; // 0x6cc Mult2
	var_75_float = GetByIndex(var_64_cvector, 1); // 0x6cd PushE
	var_75_float = var_75_float + var_62_float; // 0x6ce Add2
	SetByIndex(var_64_cvector, 1) = var_75_float; // 0x6cf PopE
	PlayGlobalSound(var_48_string, var_64_cvector); // 0x6d0 Func
	
Label_1746:
	return 16; // 0x6d2 Return
	
Label_1720:
	var_76_int = 1; // 0x6b8 PushI
	var_58_int = var_58_int + var_76_int; // 0x6b9 Add2
	goto Label_1712; // 0x6ba Jump
}


func_43(var_6_bool, var_17_float, var_18_float)
{
	var_19_float = 0; var_20_bool = 0; var_21_float = 0; var_22_bool = 0; // 0x2b PushV
	var_6_bool = 0; // 0x2c TMovB
	
Label_45:
	var_23_int = 3; // 0x2d PushI
	rand(var_21_float, var_23_int); // 0x2e Func
	var_24_int = 3; // 0x30 PushI
	var_25_int = var_21_float + var_24_int; // 0x31 Add
	Sleep(var_25_int, var_22_bool); // 0x32 Func
	var_6_bool = 1; // 0x34 TMovB
	var_26_float = 0; var_27_float = 0; // 0x35 PushV
	var_26_float = var_17_float; // 0x36 Mov
	var_27_float = var_18_float; // 0x37 Mov
	func_112(var_18_float, var_19_float, var_20_bool, var_21_float, var_22_bool, var_26_float, var_27_float); // 0x38 NEW_2
	var_6_bool = 0; // 0x3a TMovB
	goto Label_45; // 0x3b Jump
}


func_1837(var_51_int)
{
	var_52_int = 0; var_53_bool = 0; var_54_int = 0; var_55_bool = 0; // 0x72d PushV
	var_54_int = 0; // 0x72e MovI
	
Label_1839:
	var_56_string = "all"; // 0x72f PushS
	var_57_string = ""; var_58_int = 0; // 0x730 PushV
	var_58_int = var_54_int; // 0x731 Mov
	func_1830(var_57_string, var_58_int); // 0x732 NEW_2
	HasAnimation(var_55_bool, var_56_string, var_57_string); // 0x734 Func
	var_62_bool = var_55_bool == 0; // 0x736 Not
	if(var_62_bool == 0) goto Label_1849; // 0x737 JumpB
	goto Label_1852; // 0x738 Jump
	
Label_1852:
	var_51_int = var_54_int; // 0x73c Mov
	return 4; // 0x73d Return
	
Label_1849:
	var_63_int = 1; // 0x739 PushI
	var_54_int = var_54_int + var_63_int; // 0x73a Add2
	goto Label_1839; // 0x73b Jump
}


func_813(var_0_int, var_309_bool)
{
	var_310_cvector = CVector(0,0,0); var_311_cvector = CVector(0,0,0); var_312_cvector = CVector(0,0,0); var_313_float = 0; var_314_float = 0; var_315_cvector = CVector(0,0,0); var_316_cvector = CVector(0,0,0); var_317_cvector = CVector(0,0,0); var_318_float = 0; var_319_float = 0; // 0x32d PushV
	var_320_bool = 0; var_321_object = Obj(); // 0x32e PushV
	var_321_object = var_0_int; // 0x32f MovT
	func_1529(var_320_bool, var_321_object); // 0x330 NEW_2
	var_322_bool = var_320_bool == 0; // 0x332 Not
	if(var_322_bool == 0) goto Label_822; // 0x333 JumpB
	var_309_bool = 0; // 0x334 MovB
	return 10; // 0x335 Return
	
Label_822:
	var_323_bool = 0; // 0x336 PushV
	func_902(var_319_float, var_323_bool); // 0x337 NEW_2
	if(var_323_bool == 0) goto Label_839; // 0x339 JumpB
	GetPFPosition(var_315_cvector); // 0x33a TObjFunc
	GetPFPosition(var_316_cvector); // 0x33c Func
	var_317_cvector = var_315_cvector - var_316_cvector; // 0x33e Sub2
	var_318_float = var_317_cvector | var_317_cvector; // 0x33f Or2
	GetAttackDistance(var_319_float); // 0x340 TObjFunc
	var_324_int = 50; // 0x342 PushI
	var_319_float = var_319_float + var_324_int; // 0x343 Add2
	var_325_float = var_319_float * var_319_float; // 0x344 Mult
	var_309_bool = var_318_float <= var_325_float; // 0x345 LE2
	return 10; // 0x346 Return
	
Label_839:
	var_309_bool = 0; // 0x347 MovB
	return 10; // 0x348 Return
}


func_303(var_0_int, var_3_bool, var_5_bool, var_34_object, var_35_bool, var_36_float, var_143_bool, var_235_bool)
{
	var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_bool = 0; var_41_bool = 0; var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_float = 0; var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_float = 0; var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_bool = 0; var_52_bool = 0; var_53_float = 0; var_54_cvector = CVector(0,0,0); var_55_float = 0; var_56_cvector = CVector(0,0,0); var_57_bool = 0; var_58_float = 0; // 0x12f PushV
	func_532(var_56_cvector, var_57_bool, var_58_float); // 0x131 NEW_2
	var_5_bool = 0; // 0x133 TMovI
	var_81_string = "@GetAttackDistance"; // 0x134 PushS
	var_82_int = 1; // 0x135 PushI
	var_83_bool = IsFuncExist(var_34_object, var_81_string, var_82_int); // 0x136 FuncExist
	if(var_83_bool == 0) goto Label_317; // 0x137 JumpB
	GetAttackDistance(var_48_float); // 0x138 ObjFunc
	var_84_int = 50; // 0x13a PushI
	var_48_float = var_48_float + var_84_int; // 0x13b Add2
	goto Label_318; // 0x13c Jump
	
Label_318:
	var_85_int = 150; // 0x13e PushI
	var_86_bool = var_48_float >= var_85_int; // 0x13f GE
	if(var_86_bool == 0) goto Label_322; // 0x140 JumpB
	var_48_float = 150; // 0x141 MovI
	
Label_322:
	var_3_bool = 0; // 0x142 TMovB
	var_0_int = var_34_object; // 0x143 TMov
	IsPlayerActor(var_0_int, var_51_bool); // 0x144 Func
	var_87_bool = var_51_bool; // 0x146 Push
	if(var_87_bool == 0) goto Label_336; // 0x147 JumpB
	var_88_string = "attack"; // 0x148 PushS
	PlayGlobalMusic(var_88_string); // 0x149 Func
	var_89_object = Obj(); // 0x14b PushV
	func_1747(var_89_object); // 0x14c NEW_2
	SendPlayerEnemy(var_34_object, var_89_object); // 0x14e Func
	
Label_336:
	var_92_bool = var_35_bool; // 0x150 Push
	if(var_92_bool == 0) goto Label_340; // 0x151 JumpB
	var_52_bool = 0; // 0x152 MovB
	goto Label_341; // 0x153 Jump
	
Label_341:
	var_93_float = 400.0; // 0x155 PushF
	var_53_float = var_93_float + var_48_float; // 0x156 Add2
	
Label_343:
	var_94_bool = 0; // 0x157 PushV
	var_94_bool = 0; // 0x158 MovB
	var_95_bool = 0; var_96_object = Obj(); // 0x159 PushV
	var_96_object = var_0_int; // 0x15a MovT
	func_1529(var_95_bool, var_96_object); // 0x15b NEW_2
	if(var_95_bool == 0) goto Label_353; // 0x15d JumpB
	var_129_bool = var_3_bool == 0; // 0x15e Not
	if(var_129_bool == 0) goto Label_353; // 0x15f JumpB
	var_94_bool = 1; // 0x160 MovB
	
Label_353:
	if(var_94_bool == 0) goto Label_515; // 0x161 JumpB
	func_945(var_58_float); // 0x163 NEW_2
	GetPFPosition(var_49_cvector); // 0x165 TObjFunc
	GetPFPosition(var_50_cvector); // 0x167 Func
	var_54_cvector = var_49_cvector - var_50_cvector; // 0x169 Sub2
	var_55_float = var_54_cvector | var_54_cvector; // 0x16a Or2
	var_135_float = var_53_float * var_53_float; // 0x16b Mult
	var_136_bool = var_55_float >= var_135_float; // 0x16c GE
	if(var_136_bool == 0) goto Label_381; // 0x16d JumpB
	var_137_bool = 0; var_138_object = Obj(); var_139_float = 0; var_140_float = 0; var_141_bool = 0; var_142_bool = 0; // 0x16e PushV
	var_138_object = var_0_int; // 0x16f MovT
	var_139_float = var_48_float; // 0x170 Mov
	var_140_float = 3000.0; // 0x171 MovF
	var_141_bool = 1; // 0x172 MovB
	var_142_bool = 0; // 0x173 MovB
	TaskCall(2); // 0x174 TaskCall
	func_973(var_145_bool, var_137_bool, var_138_object, var_139_float, var_140_float, var_141_bool, var_142_bool); // 0x175 NEW_2
	TaskReturn(); // 0x176 TaskReturn
	var_220_bool = var_143_bool == 0; // 0x178 Not
	if(var_220_bool == 0) goto Label_379; // 0x179 JumpB
	goto Label_515; // 0x17a Jump
	
Label_515:
	WaitForAnimEnd(); // 0x203 Func
	var_221_bool = var_3_bool; // 0x205 PushT
	if(var_221_bool == 0) goto Label_520; // 0x206 JumpB
	return 22; // 0x207 Return
	
Label_520:
	var_222_string = "all"; // 0x208 PushS
	var_223_string = "attack_off"; // 0x209 PushS
	PlayAnimation(var_222_string, var_223_string); // 0x20a Func
	WaitForAnimEnd(); // 0x20c Func
	var_224_bool = var_51_bool; // 0x20e Push
	if(var_224_bool == 0) goto Label_531; // 0x20f JumpB
	var_225_float = 2.0; // 0x210 PushF
	Sleep(var_225_float); // 0x211 Func
	
Label_531:
	return 22; // 0x213 Return
	
Label_379:
	var_52_bool = 0; // 0x17b MovB
	goto Label_514; // 0x17c Jump
	
Label_514:
	goto Label_343; // 0x202 Jump
	
Label_381:
	var_226_float = var_36_float * var_36_float; // 0x17d Mult
	var_227_bool = var_55_float >= var_226_float; // 0x17e GE
	if(var_227_bool == 0) goto Label_506; // 0x17f JumpB
	GetPFPosition(var_56_cvector); // 0x180 TObjFunc
	CanReachByPF(var_57_bool, var_56_cvector); // 0x182 Func
	var_228_bool = var_57_bool == 0; // 0x184 Not
	if(var_228_bool == 0) goto Label_405; // 0x185 JumpB
	var_229_bool = 0; var_230_object = Obj(); var_231_float = 0; var_232_float = 0; var_233_bool = 0; var_234_bool = 0; // 0x186 PushV
	var_230_object = var_0_int; // 0x187 MovT
	var_231_float = var_48_float; // 0x188 Mov
	var_232_float = 3000.0; // 0x189 MovF
	var_233_bool = 1; // 0x18a MovB
	var_234_bool = 0; // 0x18b MovB
	TaskCall(2); // 0x18c TaskCall
	func_973(var_237_bool, var_229_bool, var_230_object, var_231_float, var_232_float, var_233_bool, var_234_bool); // 0x18d NEW_2
	TaskReturn(); // 0x18e TaskReturn
	var_238_bool = var_235_bool == 0; // 0x190 Not
	if(var_238_bool == 0) goto Label_403; // 0x191 JumpB
	goto Label_515; // 0x192 Jump
	
Label_403:
	var_52_bool = 0; // 0x193 MovB
	goto Label_343; // 0x194 Jump
	
Label_405:
	var_239_bool = var_52_bool == 0; // 0x195 Not
	if(var_239_bool == 0) goto Label_430; // 0x196 JumpB
	var_240_object = Obj(); // 0x197 PushV
	var_240_object = var_0_int; // 0x198 MovT
	func_1679(); // 0x199 NEW_2
	var_249_string = "all"; // 0x19b PushS
	var_250_string = "attack_on"; // 0x19c PushS
	PlayAnimation(var_249_string, var_250_string); // 0x19d Func
	WaitForAnimEnd(); // 0x19f Func
	func_945(var_58_float); // 0x1a2 NEW_2
	StopAsync(); // 0x1a4 Func
	var_52_bool = 1; // 0x1a6 MovB
	var_251_bool = 0; var_252_object = Obj(); // 0x1a7 PushV
	var_252_object = var_0_int; // 0x1a8 MovT
	func_1529(var_251_bool, var_252_object); // 0x1a9 NEW_2
	var_253_bool = var_251_bool == 0; // 0x1ab Not
	if(var_253_bool == 0) goto Label_430; // 0x1ac JumpB
	goto Label_515; // 0x1ad Jump
	
Label_430:
	rand(var_58_float); // 0x1ae Func
	var_254_bool = 0; // 0x1b0 PushV
	var_254_bool = 1; // 0x1b1 MovB
	var_255_float = 0.25; // 0x1b2 PushF
	var_256_bool = var_58_float < var_255_float; // 0x1b3 LT
	if(var_256_bool == 0) goto Label_442; // 0x1b4 JumpB
	var_257_bool = 0; // 0x1b5 PushV
	func_902(var_254_bool, var_257_bool); // 0x1b6 NEW_2
	if(var_257_bool == 0) goto Label_442; // 0x1b8 JumpB
	var_254_bool = 0; // 0x1b9 MovB
	
Label_442:
	if(var_254_bool == 0) goto Label_459; // 0x1ba JumpB
	Face(var_0_int); // 0x1bb Func
	func_952(); // 0x1be NEW_2
	var_292_string = "all"; // 0x1c0 PushS
	var_293_string = "attack_stay"; // 0x1c1 PushS
	PlayAnimation(var_292_string, var_293_string); // 0x1c2 Func
	var_294_bool = 0; var_295_float = 0; // 0x1c4 PushV
	var_295_float = var_36_float; // 0x1c5 Mov
	func_770(var_58_float, var_294_bool, var_295_float); // 0x1c6 NEW_2
	StopAsync(); // 0x1c8 Func
	goto Label_505; // 0x1ca Jump
	
Label_505:
	goto Label_514; // 0x1f9 Jump
	
Label_459:
	Face(var_0_int); // 0x1cb Func
	var_513_string = "all"; // 0x1cd PushS
	var_514_string = "fjump"; // 0x1ce PushS
	PlayAnimation(var_513_string, var_514_string); // 0x1cf Func
	WaitForAnimEnd(); // 0x1d1 Func
	func_945(var_58_float); // 0x1d4 NEW_2
	var_515_cvector = CVector(0.0, 0.0, 0.0); // 0x1d6 PushVec
	SetSpeed(var_515_cvector); // 0x1d7 Func
	Stop(); // 0x1d9 Func
	StopAsync(); // 0x1db Func
	var_516_bool = 0; // 0x1dd PushV
	func_902(var_58_float, var_516_bool); // 0x1de NEW_2
	var_517_bool = var_516_bool == 0; // 0x1e0 Not
	if(var_517_bool == 0) goto Label_505; // 0x1e1 JumpB
	var_518_bool = 0; var_519_object = Obj(); // 0x1e2 PushV
	var_519_object = var_0_int; // 0x1e3 MovT
	func_1529(var_518_bool, var_519_object); // 0x1e4 NEW_2
	var_520_bool = var_518_bool == 0; // 0x1e6 Not
	if(var_520_bool == 0) goto Label_489; // 0x1e7 JumpB
	goto Label_515; // 0x1e8 Jump
	
Label_489:
	GetPFPosition(var_49_cvector); // 0x1e9 TObjFunc
	GetPFPosition(var_50_cvector); // 0x1eb Func
	var_54_cvector = var_49_cvector - var_50_cvector; // 0x1ed Sub2
	var_55_float = var_54_cvector | var_54_cvector; // 0x1ee Or2
	var_521_float = var_36_float * var_36_float; // 0x1ef Mult
	var_522_bool = var_55_float < var_521_float; // 0x1f0 LT
	if(var_522_bool == 0) goto Label_505; // 0x1f1 JumpB
	var_523_bool = 0; var_524_float = 0; // 0x1f2 PushV
	var_524_float = var_36_float; // 0x1f3 Mov
	func_606(var_58_float, var_523_bool, var_524_float); // 0x1f4 NEW_2
	var_525_bool = var_523_bool == 0; // 0x1f6 Not
	if(var_525_bool == 0) goto Label_505; // 0x1f7 JumpB
	goto Label_515; // 0x1f8 Jump
	
Label_506:
	var_526_bool = 0; var_527_float = 0; // 0x1fa PushV
	var_527_float = var_36_float; // 0x1fb Mov
	func_606(var_58_float, var_526_bool, var_527_float); // 0x1fc NEW_2
	var_528_bool = var_526_bool == 0; // 0x1fe Not
	if(var_528_bool == 0) goto Label_513; // 0x1ff JumpB
	goto Label_515; // 0x200 Jump
	
Label_513:
	var_52_bool = 1; // 0x201 MovB
	
Label_340:
	var_52_bool = 1; // 0x154 MovB
	
Label_317:
	var_48_float = var_36_float; // 0x13d Mov
}


func_177(var_2_bool, var_3_bool)
{
	func_272(); // 0xb2 NEW_2
	var_17_int = 10; // 0xb4 PushI
	KillTimer(var_17_int); // 0xb5 Func
	var_18_bool = var_2_bool; // 0xb7 PushT
	if(var_18_bool == 0) goto Label_189; // 0xb8 JumpB
	var_19_string = "head"; // 0xb9 PushS
	UnlookAsync(var_19_string); // 0xba Func
	var_2_bool = 0; // 0xbc TMovB
	
Label_189:
	var_3_bool = 1; // 0xbd TMovB
	return 0; // 0xbe Return
}


func_945(var_0_int)
{
	var_130_object = Obj(); // 0x3b1 PushV
	var_130_object = var_0_int; // 0x3b2 MovT
	func_1810(var_130_object); // 0x3b3 NEW_2
	return 0; // 0x3b5 Return
}


func_1202(var_0_int)
{
	var_0_int = 1; // 0x4b2 TMovB
	var_20_int = 0; // 0x4b3 PushI
	KillTimer(var_20_int); // 0x4b4 Func
	Stop(); // 0x4b6 Func
	return 0; // 0x4b8 Return
}


func_950(var_471_int)
{
	var_471_int = 0; // 0x3b6 MovI
	return 0; // 0x3b7 Return
}


func_567(var_0_int, var_392_float, var_393_int)
{
	var_394_object = Obj(); var_395_float = 0; var_396_float = 0; var_397_object = Obj(); var_398_float = 0; var_399_float = 0; // 0x237 PushV
	var_400_float = 0.9; // 0x238 PushF
	var_401_float = var_392_float * var_400_float; // 0x239 Mult
	GetVictim(var_401_float, var_397_object); // 0x23a Func
	ReportAttack(var_0_int); // 0x23c Func
	var_402_bool = var_397_object == var_0_int; // 0x23e Eq
	if(var_402_bool == 0) goto Label_604; // 0x23f JumpB
	var_403_float = 0; var_404_object = Obj(); var_405_int = 0; // 0x240 PushV
	var_404_object = var_397_object; // 0x241 Mov
	var_405_int = var_393_int; // 0x242 Mov
	func_289(var_405_int); // 0x243 NEW_2
	var_398_float = var_403_float; // 0x244 Mov
	var_406_float = 0; var_407_object = Obj(); var_408_float = 0; var_409_int = 0; // 0x246 PushV
	var_407_object = var_397_object; // 0x247 Mov
	var_408_float = var_398_float; // 0x248 Mov
	var_410_int = 0; var_411_object = Obj(); var_412_int = 0; // 0x249 PushV
	var_411_object = var_397_object; // 0x24a Mov
	var_412_int = var_393_int; // 0x24b Mov
	func_292(var_412_int); // 0x24c NEW_2
	var_409_int = var_410_int; // 0x24d Mov
	func_1415(var_406_float, var_407_object, var_408_float, var_409_int); // 0x24f NEW_2
	var_399_float = var_406_float; // 0x250 Mov
	var_471_int = 0; // 0x252 PushV
	func_950(var_471_int); // 0x253 NEW_2
	ReportHit(var_0_int, var_471_int, var_399_float, var_398_float); // 0x255 Func
	var_472_object = Obj(); var_473_float = 0; // 0x257 PushV
	var_472_object = var_397_object; // 0x258 Mov
	var_473_float = var_399_float; // 0x259 Mov
	func_957(); // 0x25a NEW_2
	
Label_604:
	return 6; // 0x25c Return
}


func_952()
{
	var_263_string = ""; // 0x3b8 PushV
	var_263_string = "attack_stay"; // 0x3b9 MovS
	func_1706(var_263_string); // 0x3ba NEW_2
	return 0; // 0x3bc Return
}


func_1078(var_0_int, var_1_int, var_166_bool, var_167_object, var_168_float, var_169_float, var_170_bool, var_171_bool)
{
	var_172_bool = 0; var_173_bool = 0; var_174_object = Obj(); var_175_cvector = CVector(0,0,0); var_176_cvector = CVector(0,0,0); var_177_cvector = CVector(0,0,0); var_178_float = 0; var_179_object = Obj(); var_180_bool = 0; var_181_bool = 0; var_182_object = Obj(); var_183_cvector = CVector(0,0,0); var_184_cvector = CVector(0,0,0); var_185_cvector = CVector(0,0,0); var_186_float = 0; var_187_object = Obj(); // 0x436 PushV
	var_0_int = 0; // 0x437 TMovB
	var_1_int = var_167_object; // 0x438 TMov
	var_181_bool = var_171_bool; // 0x439 Mov
	
Label_1082:
	var_188_bool = 0; var_189_object = Obj(); // 0x43a PushV
	var_189_object = var_167_object; // 0x43b Mov
	func_1218(var_188_bool, var_189_object); // 0x43c NEW_2
	var_192_bool = var_188_bool == 0; // 0x43e Not
	if(var_192_bool == 0) goto Label_1090; // 0x43f JumpB
	var_166_bool = 0; // 0x440 MovB
	return 16; // 0x441 Return
	
Label_1090:
	GetPosition(var_183_cvector); // 0x442 ObjFunc
	GetPosition(var_184_cvector); // 0x444 Func
	var_185_cvector = var_183_cvector - var_184_cvector; // 0x446 Sub2
	var_186_float = var_185_cvector | var_185_cvector; // 0x447 Or2
	var_193_bool = 0; // 0x448 PushV
	var_193_bool = 0; // 0x449 MovB
	var_194_int = 0; // 0x44a PushI
	var_195_bool = var_169_float > var_194_int; // 0x44b GT
	if(var_195_bool == 0) goto Label_1105; // 0x44c JumpB
	var_196_float = var_169_float * var_169_float; // 0x44d Mult
	var_197_bool = var_186_float > var_196_float; // 0x44e GT
	if(var_197_bool == 0) goto Label_1105; // 0x44f JumpB
	var_193_bool = 1; // 0x450 MovB
	
Label_1105:
	if(var_193_bool == 0) goto Label_1110; // 0x451 JumpB
	Stop(); // 0x452 Func
	var_166_bool = 0; // 0x454 MovB
	return 16; // 0x455 Return
	
Label_1110:
	var_198_float = var_168_float * var_168_float; // 0x456 Mult
	var_199_bool = var_186_float > var_198_float; // 0x457 GT
	if(var_199_bool == 0) goto Label_1172; // 0x458 JumpB
	GetPFPosition(var_183_cvector); // 0x459 ObjFunc
	FindPathTo(var_187_object, var_183_cvector); // 0x45b Func
	var_200_bool = var_187_object != 0; // 0x45d NullNeq
	if(var_200_bool == 0) goto Label_1121; // 0x45e JumpB
	var_182_object = var_187_object; // 0x45f Mov
	var_187_object = 0; // 0x460 SetNull
	
Label_1121:
	var_201_bool = var_182_object != 0; // 0x461 NullNeq
	if(var_201_bool == 0) goto Label_1154; // 0x462 JumpB
	var_202_bool = var_181_bool; // 0x463 Push
	if(var_202_bool == 0) goto Label_1131; // 0x464 JumpB
	var_181_bool = 0; // 0x465 MovB
	RotatePath(var_182_object, var_180_bool); // 0x466 Func
	var_203_bool = var_180_bool == 0; // 0x468 Not
	if(var_203_bool == 0) goto Label_1131; // 0x469 JumpB
	goto Label_1178; // 0x46a Jump
	
Label_1178:
	var_166_bool = !var_0_int; // 0x49a Not2
	return 16; // 0x49b Return
	
Label_1131:
	var_204_int = 0; // 0x46b PushI
	var_205_float = 0.3; // 0x46c PushF
	SetTimer(var_204_int, var_205_float); // 0x46d Func
	var_206_string = ""; // 0x46f PushV
	func_1225(var_206_string); // 0x470 NEW_2
	var_207_string = ""; // 0x472 PushV
	func_1227(var_207_string); // 0x473 NEW_2
	FollowPath(var_182_object, var_170_bool, var_180_bool, var_206_string, var_207_string); // 0x475 Func
	var_208_bool = var_180_bool == 0; // 0x477 Not
	if(var_208_bool == 0) goto Label_1152; // 0x478 JumpB
	var_209_int = var_0_int; // 0x479 PushT
	if(var_209_int == 0) goto Label_1150; // 0x47a JumpB
	var_182_object = 0; // 0x47b SetNull
	goto Label_1178; // 0x47c Jump
	
Label_1150:
	goto Label_1177; // 0x47e Jump
	
Label_1177:
	goto Label_1082; // 0x499 Jump
	
Label_1152:
	var_182_object = 0; // 0x480 SetNull
	goto Label_1170; // 0x481 Jump
	
Label_1170:
	var_187_object = 0; // 0x492 SetNull
	goto Label_1176; // 0x493 Jump
	
Label_1176:
	var_182_object = 0; // 0x498 SetNull
	
Label_1154:
	var_210_int = 0; // 0x482 PushI
	KillTimer(var_210_int); // 0x483 Func
	var_211_float = 0.5; // 0x485 PushF
	Sleep(var_211_float, var_180_bool); // 0x486 Func
	var_212_bool = var_180_bool == 0; // 0x488 Not
	if(var_212_bool == 0) goto Label_1166; // 0x489 JumpB
	var_213_int = var_0_int; // 0x48a PushT
	if(var_213_int == 0) goto Label_1166; // 0x48b JumpB
	var_182_object = 0; // 0x48c SetNull
	goto Label_1178; // 0x48d Jump
	
Label_1166:
	var_214_int = 0; // 0x48e PushI
	var_215_float = 0.3; // 0x48f PushF
	SetTimer(var_214_int, var_215_float); // 0x490 Func
	
Label_1172:
	var_216_int = 0; // 0x494 PushI
	KillTimer(var_216_int); // 0x495 Func
	goto Label_1178; // 0x497 Jump
}


func_1337(var_47_string)
{
	RemoveRTEnvelope(); // 0x53a Func
	SetDeathState(); // 0x53c Func
	Stop(); // 0x53e Func
	StopAsync(); // 0x540 Func
	StopSecondaryAnimation(); // 0x542 Func
	var_48_string = ""; // 0x544 PushV
	var_48_string = var_47_string; // 0x545 Mov
	func_1706(var_48_string); // 0x546 NEW_2
	var_77_string = "all"; // 0x548 PushS
	PlayAnimation(var_77_string, var_47_string); // 0x549 Func
	WaitForAnimEnd(); // 0x54b Func
	var_78_string = "all"; // 0x54d PushS
	LockAnimationEnd(var_78_string, var_47_string); // 0x54e Func
	RemoveEnvelope(); // 0x550 Func
	return 0; // 0x552 Return
}


func_61(var_5_bool)
{
	var_5_bool = 1; // 0x3d TMovB
	var_532_bool = 0; // 0x3e PushV
	var_532_bool = 0; // 0x3f MovB
	var_533_bool = 0; // 0x40 PushV
	func_1690(var_533_bool); // 0x41 NEW_2
	var_536_bool = var_533_bool == 0; // 0x43 Not
	if(var_536_bool == 0) goto Label_74; // 0x44 JumpB
	var_537_bool = 0; // 0x45 PushV
	func_110(var_537_bool); // 0x46 NEW_2
	if(var_537_bool == 0) goto Label_74; // 0x48 JumpB
	var_532_bool = 1; // 0x49 MovB
	
Label_74:
	if(var_532_bool == 0) goto Label_80; // 0x4a JumpB
	var_538_object = Obj(); // 0x4b PushV
	func_1747(var_538_object); // 0x4c NEW_2
	RemoveActor(var_538_object); // 0x4e Func
	
Label_80:
	return 0; // 0x50 Return
}


func_957()
{
	return 0; // 0x3be Return
}


func_191()
{
	var_35_int = 0; var_36_int = 0; var_37_int = 0; var_38_int = 0; var_39_bool = 0; var_40_float = 0; var_41_bool = 0; var_42_int = 0; var_43_int = 0; var_44_int = 0; var_45_int = 0; var_46_bool = 0; var_47_float = 0; var_48_bool = 0; // 0xbf PushV
	WaitForAnimEnd(); // 0xc0 Func
	var_49_bool = 0; // 0xc2 PushV
	func_1690(var_49_bool); // 0xc3 NEW_2
	var_50_bool = var_49_bool == 0; // 0xc5 Not
	if(var_50_bool == 0) goto Label_200; // 0xc6 JumpB
	return 14; // 0xc7 Return
	
Label_200:
	var_51_int = 0; // 0xc8 PushV
	func_1837(var_51_int); // 0xc9 NEW_2
	var_42_int = var_51_int; // 0xca Mov
	var_43_int = 0; // 0xcc MovI
	
Label_205:
	var_64_bool = 0; // 0xcd PushV
	var_64_bool = 0; // 0xce MovB
	var_65_int = 5; // 0xcf PushI
	var_66_bool = var_43_int < var_65_int; // 0xd0 LT
	if(var_66_bool == 0) goto Label_215; // 0xd1 JumpB
	var_67_bool = 0; // 0xd2 PushV
	func_1690(var_67_bool); // 0xd3 NEW_2
	if(var_67_bool == 0) goto Label_215; // 0xd5 JumpB
	var_64_bool = 1; // 0xd6 MovB
	
Label_215:
	if(var_64_bool == 0) goto Label_267; // 0xd7 JumpB
	var_68_int = 3; // 0xd8 PushI
	irand(var_44_int, var_68_int); // 0xd9 Func
	var_69_int = 0; // 0xdb PushI
	var_70_bool = var_44_int == var_69_int; // 0xdc Eq
	if(var_70_bool == 0) goto Label_239; // 0xdd JumpB
	var_71_int = var_42_int; // 0xde Push
	if(var_71_int == 0) goto Label_238; // 0xdf JumpB
	irand(var_45_int, var_42_int); // 0xe0 Func
	var_72_string = "all"; // 0xe2 PushS
	var_73_string = ""; var_74_int = 0; // 0xe3 PushV
	var_74_int = var_45_int; // 0xe4 Mov
	func_1830(var_73_string, var_74_int); // 0xe5 NEW_2
	PlayAnimation(var_72_string, var_73_string); // 0xe7 Func
	WaitForAnimEnd(var_46_bool); // 0xe9 Func
	var_75_bool = var_46_bool == 0; // 0xeb Not
	if(var_75_bool == 0) goto Label_238; // 0xec JumpB
	goto Label_267; // 0xed Jump
	
Label_267:
	ResetAAS(); // 0x10b Func
	return 14; // 0x10d Return
	
Label_238:
	goto Label_256; // 0xee Jump
	
Label_256:
	var_76_bool = 0; // 0x100 PushV
	func_270(var_76_bool); // 0x101 NEW_2
	var_77_bool = var_76_bool == 0; // 0x103 Not
	if(var_77_bool == 0) goto Label_262; // 0x104 JumpB
	goto Label_267; // 0x105 Jump
	
Label_262:
	ResetAAS(); // 0x106 Func
	var_78_int = 1; // 0x108 PushI
	var_43_int = var_43_int + var_78_int; // 0x109 Add2
	goto Label_205; // 0x10a Jump
	
Label_239:
	var_79_int = 1; // 0xef PushI
	var_80_bool = var_44_int == var_79_int; // 0xf0 Eq
	if(var_80_bool == 0) goto Label_253; // 0xf1 JumpB
	var_81_int = 4; // 0xf2 PushI
	rand(var_47_float, var_81_int); // 0xf3 Func
	var_82_int = 1; // 0xf5 PushI
	var_83_int = var_47_float + var_82_int; // 0xf6 Add
	Sleep(var_83_int, var_48_bool); // 0xf7 Func
	var_84_bool = var_48_bool == 0; // 0xf9 Not
	if(var_84_bool == 0) goto Label_252; // 0xfa JumpB
	goto Label_267; // 0xfb Jump
	
Label_252:
	goto Label_256; // 0xfc Jump
	
Label_253:
	var_85_int = var_43_int; // 0xfd Push
	if(var_85_int == 0) goto Label_256; // 0xfe JumpB
	goto Label_267; // 0xff Jump
}


func_959(var_496_bool)
{
	var_496_bool = 1; // 0x3bf MovB
	return 0; // 0x3c0 Return
}


func_961(var_388_int)
{
	var_388_int = 1; // 0x3c1 MovI
	return 0; // 0x3c2 Return
}


func_1218(var_27_bool, var_28_object)
{
	var_29_bool = 0; var_30_object = Obj(); // 0x4c3 PushV
	var_30_object = var_28_object; // 0x4c4 Mov
	func_1529(var_29_bool, var_30_object); // 0x4c5 NEW_2
	var_27_bool = var_29_bool; // 0x4c6 Mov
	return 0; // 0x4c8 Return
}


func_963(var_383_float)
{
	var_383_float = 0.5; // 0x3c3 MovF
	return 0; // 0x3c4 Return
}


func_1597(var_20_object, var_21_int, var_22_float)
{
	var_23_cvector = CVector(0,0,0); var_24_object = Obj(); var_25_int = 0; var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_int = 0; var_30_int = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_object = Obj(); var_34_int = 0; var_35_bool = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_int = 0; var_39_int = 0; var_40_cvector = CVector(0,0,0); // 0x63d PushV
	var_41_bool = 0; // 0x63e PushV
	var_41_bool = 0; // 0x63f MovB
	var_42_bool = 0; // 0x640 PushV
	var_42_bool = 0; // 0x641 MovB
	var_43_object = var_20_object; // 0x642 Push
	if(var_43_object == 0) goto Label_1608; // 0x643 JumpB
	var_44_int = 4; // 0x644 PushI
	var_45_bool = var_21_int != var_44_int; // 0x645 Neq
	if(var_45_bool == 0) goto Label_1608; // 0x646 JumpB
	var_42_bool = 1; // 0x647 MovB
	
Label_1608:
	if(var_42_bool == 0) goto Label_1613; // 0x648 JumpB
	var_46_int = 5; // 0x649 PushI
	var_47_bool = var_21_int != var_46_int; // 0x64a Neq
	if(var_47_bool == 0) goto Label_1613; // 0x64b JumpB
	var_41_bool = 1; // 0x64c MovB
	
Label_1613:
	if(var_41_bool == 0) goto Label_1660; // 0x64d JumpB
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0x64e PushV
	var_50_cvector = CVector(0,0,0); var_51_object = Obj(); // 0x64f PushV
	var_51_object = var_20_object; // 0x650 Mov
	func_1383(var_51_object); // 0x651 NEW_2
	var_49_cvector = var_50_cvector; // 0x652 Mov
	func_1753(var_48_cvector, var_49_cvector); // 0x654 NEW_2
	var_32_cvector = var_48_cvector; // 0x655 Mov
	CreateVectorVector(var_33_object); // 0x657 Func
	var_34_int = 1; // 0x659 MovI
	
Label_1626:
	var_61_string = "hit"; // 0x65a PushS
	var_62_int = var_61_string + var_34_int; // 0x65b Add
	GetGeometryLocator(var_62_int, var_35_bool, var_36_cvector, var_37_cvector); // 0x65c Func
	var_63_bool = var_35_bool == 0; // 0x65e Not
	if(var_63_bool == 0) goto Label_1633; // 0x65f JumpB
	goto Label_1642; // 0x660 Jump
	
Label_1642:
	size(var_38_int); // 0x66a ObjFunc
	var_64_int = var_38_int; // 0x66c Push
	if(var_64_int == 0) goto Label_1659; // 0x66d JumpB
	irand(var_39_int, var_38_int); // 0x66e Func
	get(var_40_cvector, var_39_int); // 0x670 ObjFunc
	var_65_object = Obj(); var_66_int = 0; var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); // 0x672 PushV
	var_65_object = var_20_object; // 0x673 Mov
	var_66_int = var_21_int; // 0x674 Mov
	var_67_float = var_22_float; // 0x675 Mov
	var_68_cvector = var_40_cvector; // 0x676 Mov
	var_69_cvector = -var_32_cvector; // 0x677 Neg2
	func_1665(var_67_float, var_68_cvector, var_69_cvector); // 0x678 NEW_2
	return 18; // 0x67a Return
	
Label_1659:
	var_33_object = 0; // 0x67b SetNull
	
Label_1660:
	var_110_object = Obj(); // 0x67c PushV
	var_110_object = var_20_object; // 0x67d Mov
	func_1553(var_110_object); // 0x67e NEW_2
	return 18; // 0x680 Return
	
Label_1633:
	var_111_int = var_37_cvector | var_32_cvector; // 0x661 Or
	var_112_float = 0.70711; // 0x662 PushF
	var_113_bool = var_111_int >= var_112_float; // 0x663 GE
	if(var_113_bool == 0) goto Label_1639; // 0x664 JumpB
	add(var_36_cvector); // 0x665 ObjFunc
	
Label_1639:
	var_114_int = 1; // 0x667 PushI
	var_34_int = var_34_int + var_114_int; // 0x668 Add2
	goto Label_1626; // 0x669 Jump
}


func_1854(var_17_object)
{
	var_18_bool = 0; var_19_string = ""; var_20_string = ""; // 0x73f PushV
	var_19_string = "quest_d1_03"; // 0x740 MovS
	var_20_string = "butcher_death"; // 0x741 MovS
	func_1798(var_18_bool, var_19_string, var_20_string); // 0x742 NEW_2
	var_24_object = Obj(); // 0x744 PushV
	var_24_object = var_17_object; // 0x745 Mov
	TaskCall(3); // 0x746 TaskCall
	func_1237(var_24_object); // 0x747 NEW_2
	TaskReturn(); // 0x748 TaskReturn
	return 0; // 0x74a Return
}


func_841(var_307_bool)
{
	var_308_bool = 0; // 0x349 PushV
	var_308_bool = 0; // 0x34a MovB
	var_309_bool = 0; // 0x34b PushV
	func_813(var_308_bool, var_309_bool); // 0x34c NEW_2
	if(var_309_bool == 0) goto Label_852; // 0x34e JumpB
	var_326_bool = 0; // 0x34f PushV
	func_857(var_307_bool, var_308_bool, var_326_bool); // 0x350 NEW_2
	if(var_326_bool == 0) goto Label_852; // 0x352 JumpB
	var_308_bool = 1; // 0x353 MovB
	
Label_852:
	if(var_308_bool == 0) goto Label_855; // 0x354 JumpB
	var_307_bool = 1; // 0x355 MovB
	return 0; // 0x356 Return
	
Label_855:
	var_307_bool = 0; // 0x357 MovB
	return 0; // 0x358 Return
}


func_1225(var_206_string)
{
	var_206_string = "walk"; // 0x4c9 MovS
	return 0; // 0x4ca Return
}


func_1227(var_207_string)
{
	var_207_string = "run"; // 0x4cb MovS
	return 0; // 0x4cc Return
}


func_973(var_2_bool, var_137_bool, var_138_object, var_139_float, var_140_float, var_141_bool, var_142_bool)
{
	var_146_bool = 0; var_147_bool = 0; var_148_bool = 0; var_149_bool = 0; // 0x3cd PushV
	var_150_object = Obj(); // 0x3ce PushV
	var_150_object = var_138_object; // 0x3cf Mov
	func_1810(var_150_object); // 0x3d0 NEW_2
	var_151_int = 1; // 0x3d2 PushI
	var_152_int = 5; // 0x3d3 PushI
	SetTimer(var_151_int, var_152_int); // 0x3d4 Func
	CanSee(var_148_bool, var_138_object); // 0x3d6 Func
	var_153_bool = var_148_bool; // 0x3d8 Push
	if(var_153_bool == 0) goto Label_992; // 0x3d9 JumpB
	var_2_bool = 1; // 0x3da TMovB
	var_154_object = Obj(); // 0x3db PushV
	var_154_object = var_138_object; // 0x3dc Mov
	func_1695(var_154_object); // 0x3dd NEW_2
	goto Label_993; // 0x3df Jump
	
Label_993:
	var_161_bool = 0; var_162_object = Obj(); // 0x3e1 PushV
	var_162_object = var_138_object; // 0x3e2 Mov
	func_1398(var_161_bool, var_162_object); // 0x3e3 NEW_2
	if(var_161_bool == 0) goto Label_1003; // 0x3e5 JumpB
	var_165_object = Obj(); // 0x3e6 PushV
	func_1747(var_165_object); // 0x3e7 NEW_2
	SendPlayerEnemy(var_138_object, var_165_object); // 0x3e9 Func
	
Label_1003:
	var_166_bool = 0; var_167_object = Obj(); var_168_float = 0; var_169_float = 0; var_170_bool = 0; var_171_bool = 0; // 0x3eb PushV
	var_167_object = var_138_object; // 0x3ec Mov
	var_168_float = var_139_float; // 0x3ed Mov
	var_169_float = var_140_float; // 0x3ee Mov
	var_170_bool = var_141_bool; // 0x3ef Mov
	var_171_bool = var_142_bool; // 0x3f0 Mov
	func_1078(var_148_bool, var_149_bool, var_166_bool, var_167_object, var_168_float, var_169_float, var_170_bool, var_171_bool); // 0x3f1 NEW_2
	var_149_bool = var_166_bool; // 0x3f2 Mov
	var_217_bool = var_2_bool; // 0x3f4 PushT
	if(var_217_bool == 0) goto Label_1017; // 0x3f5 JumpB
	var_218_string = "head"; // 0x3f6 PushS
	UnlookAsync(var_218_string); // 0x3f7 Func
	
Label_1017:
	var_219_int = 1; // 0x3f9 PushI
	KillTimer(var_219_int); // 0x3fa Func
	var_137_bool = var_149_bool; // 0x3fc Mov
	return 4; // 0x3fd Return
	
Label_992:
	var_2_bool = 0; // 0x3e0 TMovB
}


func_1488(var_44_bool)
{
	var_46_bool = 0; var_47_bool = 0; // 0x5d0 PushV
	IsDead(var_47_bool); // 0x5d1 ObjFunc
	var_44_bool = var_47_bool; // 0x5d3 Mov
	return 2; // 0x5d4 Return
}


func_81(var_529_string)
{
	var_530_string = "cleanup"; // 0x52 PushS
	var_531_bool = var_529_string == var_530_string; // 0x53 Eq
	if(var_531_bool == 0) goto Label_88; // 0x54 JumpB
	func_61(var_529_string); // 0x56 NEW_2
	
Label_88:
	return 0; // 0x58 Return
}


func_1747(var_16_object)
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x6d3 PushV
	self(var_18_object); // 0x6d4 Func
	var_16_object = var_18_object; // 0x6d6 Mov
	return 2; // 0x6d7 Return
}


func_1493(var_33_bool, var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj(); var_37_object = Obj(); var_38_object = Obj(); // 0x5d5 PushV
	var_39_bool = var_34_object == 0; // 0x5d6 NullEq
	if(var_39_bool == 0) goto Label_1498; // 0x5d7 JumpB
	var_33_bool = 0; // 0x5d8 MovB
	return 4; // 0x5d9 Return
	
Label_1498:
	var_40_bool = 0; // 0x5da PushV
	var_40_bool = 0; // 0x5db MovB
	var_41_string = "IsDead"; // 0x5dc PushS
	var_42_int = 1; // 0x5dd PushI
	var_43_bool = IsFuncExist(var_34_object, var_41_string, var_42_int); // 0x5de FuncExist
	if(var_43_bool == 0) goto Label_1510; // 0x5df JumpB
	var_44_bool = 0; var_45_object = Obj(); // 0x5e0 PushV
	var_45_object = var_34_object; // 0x5e1 Mov
	func_1488(var_45_object); // 0x5e2 NEW_2
	if(var_44_bool == 0) goto Label_1510; // 0x5e4 JumpB
	var_40_bool = 1; // 0x5e5 MovB
	
Label_1510:
	if(var_40_bool == 0) goto Label_1513; // 0x5e6 JumpB
	var_33_bool = 0; // 0x5e7 MovB
	return 4; // 0x5e8 Return
	
Label_1513:
	GetScene(var_37_object); // 0x5e9 Func
	var_48_bool = var_37_object == 0; // 0x5eb NullEq
	if(var_48_bool == 0) goto Label_1519; // 0x5ec JumpB
	var_33_bool = 0; // 0x5ed MovB
	return 4; // 0x5ee Return
	
Label_1519:
	GetScene(var_38_object); // 0x5ef ObjFunc
	var_49_bool = var_37_object != var_38_object; // 0x5f1 Neq
	if(var_49_bool == 0) goto Label_1525; // 0x5f2 JumpB
	var_33_bool = 0; // 0x5f3 MovB
	return 4; // 0x5f4 Return
	
Label_1525:
	var_33_bool = 1; // 0x5f5 MovB
	return 4; // 0x5f6 Return
}


func_1237(var_24_object)
{
	var_25_object = Obj(); // 0x4d6 PushV
	var_25_object = var_24_object; // 0x4d7 Mov
	func_1246(var_25_object); // 0x4d8 NEW_2
	
Label_1242:
	Hold(); // 0x4da Func
	goto Label_1242; // 0x4dc Jump
}


func_857(var_0_int, var_4_object, var_326_bool)
{
	var_327_object = Obj(); var_328_bool = 0; var_329_float = 0; var_330_cvector = CVector(0,0,0); var_331_cvector = CVector(0,0,0); var_332_object = Obj(); var_333_bool = 0; var_334_float = 0; var_335_cvector = CVector(0,0,0); var_336_cvector = CVector(0,0,0); // 0x359 PushV
	GetScene(var_332_object); // 0x35a Func
	var_333_bool = 0; // 0x35c MovB
	
Label_861:
	var_337_cvector = CVector(0,0,0); var_338_object = Obj(); // 0x35d PushV
	var_338_object = var_0_int; // 0x35e MovT
	func_1383(var_338_object); // 0x35f NEW_2
	var_343_int = -var_337_cvector; // 0x361 Neg
	FindDirLength(var_334_float, var_343_int, var_334_float); // 0x362 Func
	var_344_bool = var_334_float < var_4_object; // 0x364 LT
	if(var_344_bool == 0) goto Label_871; // 0x365 JumpB
	goto Label_899; // 0x366 Jump
	
Label_899:
	var_326_bool = var_333_bool; // 0x383 Mov
	return 10; // 0x384 Return
	
Label_871:
	Face(var_0_int); // 0x367 Func
	var_345_string = "all"; // 0x369 PushS
	var_346_string = "bjump"; // 0x36a PushS
	PlayAnimation(var_345_string, var_346_string); // 0x36b Func
	GetPFPosition(var_335_cvector); // 0x36d TObjFunc
	GetPFPosition(var_336_cvector); // 0x36f Func
	WaitForAnimEnd(); // 0x371 Func
	func_945(var_336_cvector); // 0x374 NEW_2
	StopAsync(); // 0x376 Func
	var_347_cvector = CVector(0.0, 0.0, 0.0); // 0x378 PushVec
	SetSpeed(var_347_cvector); // 0x379 Func
	var_333_bool = 1; // 0x37b MovB
	var_348_bool = 0; // 0x37c PushV
	func_813(var_336_cvector, var_348_bool); // 0x37d NEW_2
	var_349_bool = var_348_bool == 0; // 0x37f Not
	if(var_349_bool == 0) goto Label_898; // 0x380 JumpB
	goto Label_899; // 0x381 Jump
	
Label_898:
	goto Label_861; // 0x382 Jump
}


func_1369(var_434_string, var_435_int)
{
	var_436_int = 2; // 0x55a PushI
	var_437_bool = var_435_int == var_436_int; // 0x55b Eq
	if(var_437_bool == 0) goto Label_1376; // 0x55c JumpB
	var_434_string = "fire"; // 0x55d MovS
	return 0; // 0x55e Return
	
Label_1376:
	var_438_int = 1; // 0x560 PushI
	var_439_bool = var_435_int == var_438_int; // 0x561 Eq
	if(var_439_bool == 0) goto Label_1381; // 0x562 JumpB
	var_434_string = "bullet"; // 0x563 MovS
	return 0; // 0x564 Return
	
Label_1381:
	var_434_string = "phys"; // 0x565 MovS
	return 0; // 0x566 Return
}


func_1753(var_48_cvector, var_49_cvector)
{
	var_56_float = 0; var_57_float = 0; // 0x6d9 PushV
	var_58_int = var_49_cvector | var_49_cvector; // 0x6da Or
	var_57_float = sqrt(var_58_int); // 0x6db Sqrt2
	var_59_float = 0.0; // 0x6dc PushF
	var_60_bool = var_57_float < var_59_float; // 0x6dd LT
	if(var_60_bool == 0) goto Label_1761; // 0x6de JumpB
	var_48_cvector = CVector(0.0, 0.0, 0.0); // 0x6df MovV
	return 2; // 0x6e0 Return
	
Label_1761:
	var_48_cvector = var_49_cvector / var_49_cvector; // 0x6e1 Div2
	return 2; // 0x6e2 Return
}


func_606(var_0_int, var_355_bool, var_356_float)
{
	var_357_int = 0; var_358_bool = 0; var_359_int = 0; var_360_string = ""; var_361_int = 0; var_362_bool = 0; var_363_int = 0; var_364_string = ""; // 0x25e PushV
	func_945(var_364_string); // 0x260 NEW_2
	irand(var_361_int, var_364_string); // 0x262 Func
	var_365_int = 1; // 0x264 PushI
	var_361_int = var_361_int + var_365_int; // 0x265 Add2
	Face(var_0_int); // 0x266 Func
	var_366_bool = 1; // 0x268 PushB
	SetAttackState(var_366_bool); // 0x269 Func
	func_1819(); // 0x26c NEW_2
	var_371_string = "all"; // 0x26e PushS
	var_372_string = "attack_begin"; // 0x26f PushS
	var_373_int = var_372_string + var_361_int; // 0x270 Add
	PlayAnimation(var_371_string, var_373_int); // 0x271 Func
	WaitForAnimEnd(); // 0x273 Func
	func_913(var_363_int, var_364_string); // 0x276 NEW_2
	var_389_bool = 0; var_390_object = Obj(); // 0x278 PushV
	var_390_object = var_0_int; // 0x279 MovT
	func_1529(var_389_bool, var_390_object); // 0x27a NEW_2
	var_391_bool = var_389_bool == 0; // 0x27c Not
	if(var_391_bool == 0) goto Label_642; // 0x27d JumpB
	StopAsync(); // 0x27e Func
	var_355_bool = 0; // 0x280 MovB
	return 8; // 0x281 Return
	
Label_642:
	var_392_float = 0; var_393_int = 0; // 0x282 PushV
	var_392_float = var_356_float; // 0x283 Mov
	var_393_int = var_361_int; // 0x284 Mov
	func_567(var_364_string, var_392_float, var_393_int); // 0x285 NEW_2
	var_474_string = "all"; // 0x287 PushS
	var_475_string = "attack_middle"; // 0x288 PushS
	var_476_int = var_475_string + var_361_int; // 0x289 Add
	HasAnimation(var_362_bool, var_474_string, var_476_int); // 0x28a Func
	var_477_bool = var_362_bool; // 0x28c Push
	if(var_477_bool == 0) goto Label_723; // 0x28d JumpB
	func_1819(); // 0x28f NEW_2
	var_478_string = "all"; // 0x291 PushS
	var_479_string = "attack_middle"; // 0x292 PushS
	var_480_int = var_479_string + var_361_int; // 0x293 Add
	PlayAnimation(var_478_string, var_480_int); // 0x294 Func
	WaitForAnimEnd(); // 0x296 Func
	func_945(var_364_string); // 0x299 NEW_2
	var_481_bool = 0; var_482_object = Obj(); // 0x29b PushV
	var_482_object = var_0_int; // 0x29c MovT
	func_1529(var_481_bool, var_482_object); // 0x29d NEW_2
	var_483_bool = var_481_bool == 0; // 0x29f Not
	if(var_483_bool == 0) goto Label_677; // 0x2a0 JumpB
	StopAsync(); // 0x2a1 Func
	var_355_bool = 0; // 0x2a3 MovB
	return 8; // 0x2a4 Return
	
Label_677:
	var_484_float = 0; var_485_int = 0; // 0x2a5 PushV
	var_484_float = var_356_float; // 0x2a6 Mov
	var_485_int = var_361_int; // 0x2a7 Mov
	func_567(var_364_string, var_484_float, var_485_int); // 0x2a8 NEW_2
	var_363_int = 1; // 0x2aa MovI
	
Label_683:
	var_486_string = "attack_middle"; // 0x2ab PushS
	var_487_int = var_486_string + var_361_int; // 0x2ac Add
	var_488_string = "_"; // 0x2ad PushS
	var_489_int = var_487_int + var_488_string; // 0x2ae Add
	var_364_string = var_489_int + var_363_int; // 0x2af Add2
	var_490_string = "all"; // 0x2b0 PushS
	HasAnimation(var_362_bool, var_490_string, var_364_string); // 0x2b1 Func
	var_491_bool = var_362_bool == 0; // 0x2b3 Not
	if(var_491_bool == 0) goto Label_694; // 0x2b4 JumpB
	goto Label_723; // 0x2b5 Jump
	
Label_723:
	var_492_bool = 0; // 0x2d3 PushB
	SetAttackState(var_492_bool); // 0x2d4 Func
	var_493_string = "all"; // 0x2d6 PushS
	var_494_string = "attack_end"; // 0x2d7 PushS
	var_495_int = var_494_string + var_361_int; // 0x2d8 Add
	PlayAnimation(var_493_string, var_495_int); // 0x2d9 Func
	var_496_bool = 0; // 0x2db PushV
	func_959(var_496_bool); // 0x2dc NEW_2
	if(var_496_bool == 0) goto Label_741; // 0x2de JumpB
	var_497_bool = 0; var_498_float = 0; // 0x2df PushV
	var_498_float = 0.75; // 0x2e0 MovF
	func_743(var_497_bool, var_498_float); // 0x2e1 NEW_2
	StopAsync(); // 0x2e3 Func
	
Label_741:
	var_355_bool = 1; // 0x2e5 MovB
	return 8; // 0x2e6 Return
	
Label_694:
	func_1819(); // 0x2b7 NEW_2
	var_506_string = "all"; // 0x2b9 PushS
	PlayAnimation(var_506_string, var_364_string); // 0x2ba Func
	WaitForAnimEnd(); // 0x2bc Func
	func_945(var_364_string); // 0x2bf NEW_2
	var_507_bool = 0; var_508_object = Obj(); // 0x2c1 PushV
	var_508_object = var_0_int; // 0x2c2 MovT
	func_1529(var_507_bool, var_508_object); // 0x2c3 NEW_2
	var_509_bool = var_507_bool == 0; // 0x2c5 Not
	if(var_509_bool == 0) goto Label_715; // 0x2c6 JumpB
	StopAsync(); // 0x2c7 Func
	var_355_bool = 0; // 0x2c9 MovB
	return 8; // 0x2ca Return
	
Label_715:
	var_510_float = 0; var_511_int = 0; // 0x2cb PushV
	var_510_float = var_356_float; // 0x2cc Mov
	var_511_int = var_361_int; // 0x2cd Mov
	func_567(var_364_string, var_510_float, var_511_int); // 0x2ce NEW_2
	var_512_int = 1; // 0x2d0 PushI
	var_363_int = var_363_int + var_512_int; // 0x2d1 Add2
	goto Label_683; // 0x2d2 Jump
}


func_1246(var_25_object)
{
	var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_string = ""; var_31_object = Obj(); var_32_bool = 0; var_33_bool = 0; var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = ""; var_41_object = Obj(); var_42_bool = 0; var_43_bool = 0; var_44_float = 0; var_45_cvector = CVector(0,0,0); // 0x4de PushV
	var_46_bool = var_25_object == 0; // 0x4df NullEq
	if(var_46_bool == 0) goto Label_1254; // 0x4e0 JumpB
	var_47_string = ""; // 0x4e1 PushV
	var_47_string = "fdie"; // 0x4e2 MovS
	func_1337(var_47_string); // 0x4e3 NEW_2
	goto Label_1336; // 0x4e5 Jump
	
Label_1336:
	return 20; // 0x538 Return
	
Label_1254:
	GetPosition(var_36_cvector); // 0x4e6 ObjFunc
	GetPosition(var_37_cvector); // 0x4e8 Func
	GetDirection(var_38_cvector); // 0x4ea Func
	var_39_cvector = var_37_cvector - var_36_cvector; // 0x4ec Sub2
	var_79_float = GetByIndex(var_39_cvector, 0); // 0x4ed PushE
	var_80_float = GetByIndex(var_38_cvector, 0); // 0x4ee PushE
	var_81_float = var_79_float * var_80_float; // 0x4ef Mult
	var_82_float = GetByIndex(var_39_cvector, 2); // 0x4f0 PushE
	var_83_float = GetByIndex(var_38_cvector, 2); // 0x4f1 PushE
	var_84_float = var_82_float * var_83_float; // 0x4f2 Mult
	var_85_int = var_81_float + var_84_float; // 0x4f3 Add
	var_86_int = 0; // 0x4f4 PushI
	var_87_bool = var_85_int >= var_86_int; // 0x4f5 GE
	if(var_87_bool == 0) goto Label_1273; // 0x4f6 JumpB
	var_40_string = "fdie"; // 0x4f7 MovS
	goto Label_1274; // 0x4f8 Jump
	
Label_1274:
	RemoveRTEnvelope(); // 0x4fa Func
	SetDeathState(); // 0x4fc Func
	Stop(); // 0x4fe Func
	StopAsync(); // 0x500 Func
	var_41_object = var_25_object; // 0x502 Mov
	var_88_string = "GetScriptProperty"; // 0x503 PushS
	var_89_int = 2; // 0x504 PushI
	var_90_bool = IsFuncExist(var_25_object, var_88_string, var_89_int); // 0x505 FuncExist
	if(var_90_bool == 0) goto Label_1298; // 0x506 JumpB
	var_91_string = "Owner"; // 0x507 PushS
	HasScriptProperty(var_42_bool, var_91_string); // 0x508 ObjFunc
	var_92_bool = var_42_bool; // 0x50a Push
	if(var_92_bool == 0) goto Label_1298; // 0x50b JumpB
	var_93_string = "Owner"; // 0x50c PushS
	GetScriptProperty(var_41_object, var_93_string); // 0x50d ObjFunc
	var_94_bool = var_41_object == 0; // 0x50f NullEq
	if(var_94_bool == 0) goto Label_1298; // 0x510 JumpB
	var_41_object = var_25_object; // 0x511 Mov
	
Label_1298:
	var_95_string = "@GetEyesHeight"; // 0x512 PushS
	var_96_int = 1; // 0x513 PushI
	var_97_bool = IsFuncExist(var_41_object, var_95_string, var_96_int); // 0x514 FuncExist
	if(var_97_bool == 0) goto Label_1313; // 0x515 JumpB
	GetEyesHeight(var_44_float); // 0x516 ObjFunc
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x518 MovV
	var_98_float = GetByIndex(var_45_cvector, 1); // 0x519 PushE
	var_98_float = var_44_float; // 0x51a Mov
	SetByIndex(var_45_cvector, 1) = var_98_float; // 0x51b PopE
	var_99_string = "head"; // 0x51c PushS
	LookAsync(var_25_object, var_99_string, var_45_cvector); // 0x51d Func
	var_43_bool = 1; // 0x51f MovB
	goto Label_1314; // 0x520 Jump
	
Label_1314:
	var_100_string = ""; // 0x522 PushV
	var_100_string = var_40_string; // 0x523 Mov
	func_1706(var_100_string); // 0x524 NEW_2
	var_101_string = "all"; // 0x526 PushS
	PlayAnimation(var_101_string, var_40_string); // 0x527 Func
	WaitForAnimEnd(); // 0x529 Func
	var_102_bool = var_43_bool; // 0x52b Push
	if(var_102_bool == 0) goto Label_1330; // 0x52c JumpB
	StopAsync(); // 0x52d Func
	var_103_string = "head"; // 0x52f PushS
	UnlookAsync(var_103_string); // 0x530 Func
	
Label_1330:
	var_104_string = "all"; // 0x532 PushS
	LockAnimationEnd(var_104_string, var_40_string); // 0x533 Func
	RemoveEnvelope(); // 0x535 Func
	var_41_object = 0; // 0x537 SetNull
	
Label_1313:
	var_43_bool = 0; // 0x521 MovB
	
Label_1273:
	var_40_string = "bdie"; // 0x4f9 MovS
}


func_1763(var_444_float, var_445_float, var_446_float)
{
	var_449_bool = var_445_float < var_446_float; // 0x6e4 LT
	if(var_449_bool == 0) goto Label_1768; // 0x6e5 JumpB
	var_444_float = var_445_float; // 0x6e6 Mov
	goto Label_1769; // 0x6e7 Jump
	
Label_1769:
	return 0; // 0x6e9 Return
	
Label_1768:
	var_444_float = var_446_float; // 0x6e8 Mov
}


func_743(var_497_bool, var_498_float)
{
	var_499_float = 0; var_500_bool = 0; var_501_float = 0; var_502_bool = 0; // 0x2e7 PushV
	rand(var_501_float); // 0x2e8 Func
	var_503_bool = var_501_float < var_498_float; // 0x2ea LT
	if(var_503_bool == 0) goto Label_763; // 0x2eb JumpB
	
Label_748:
	IsAnimationPlaying(var_502_bool); // 0x2ec Func
	var_504_bool = var_502_bool == 0; // 0x2ee Not
	if(var_504_bool == 0) goto Label_753; // 0x2ef JumpB
	goto Label_762; // 0x2f0 Jump
	
Label_762:
	goto Label_768; // 0x2fa Jump
	
Label_768:
	var_497_bool = 0; // 0x300 MovB
	return 4; // 0x301 Return
	
Label_753:
	var_505_bool = 0; // 0x2f1 PushV
	func_841(var_505_bool); // 0x2f2 NEW_2
	if(var_505_bool == 0) goto Label_759; // 0x2f4 JumpB
	var_497_bool = 1; // 0x2f5 MovB
	return 4; // 0x2f6 Return
	
Label_759:
	sync(); // 0x2f7 Func
	goto Label_748; // 0x2f9 Jump
	
Label_763:
	WaitForAnimEnd(); // 0x2fb Func
	func_945(var_502_bool); // 0x2fe NEW_2
}


func_1383(var_50_cvector)
{
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x567 PushV
	GetPosition(var_54_cvector); // 0x568 Func
	GetPosition(var_55_cvector); // 0x56a ObjFunc
	var_50_cvector = var_55_cvector - var_54_cvector; // 0x56c Sub2
	return 4; // 0x56d Return
}


func_1770(var_454_float, var_455_float, var_456_float, var_457_float)
{
	var_458_bool = var_455_float < var_456_float; // 0x6eb LT
	if(var_458_bool == 0) goto Label_1775; // 0x6ec JumpB
	var_454_float = var_456_float; // 0x6ed Mov
	return 0; // 0x6ee Return
	
Label_1775:
	var_459_bool = var_455_float > var_457_float; // 0x6ef GT
	if(var_459_bool == 0) goto Label_1779; // 0x6f0 JumpB
	var_454_float = var_457_float; // 0x6f1 Mov
	return 0; // 0x6f2 Return
	
Label_1779:
	var_454_float = var_455_float; // 0x6f3 Mov
	return 0; // 0x6f4 Return
}


func_110(var_22_bool)
{
	var_22_bool = 1; // 0x6e MovB
	return 0; // 0x6f Return
}


func_1390(var_23_float)
{
	var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); // 0x56e PushV
	GetPosition(var_28_cvector); // 0x56f Func
	GetPosition(var_29_cvector); // 0x571 ObjFunc
	var_30_cvector = var_29_cvector - var_28_cvector; // 0x573 Sub2
	var_23_float = var_30_cvector | var_30_cvector; // 0x574 Or2
	return 6; // 0x575 Return
}


func_112(var_0_int, var_1_int, var_2_bool, var_3_bool, var_22_bool, var_26_float, var_27_float)
{
	var_28_bool = 0; // 0x71 PushV
	func_1690(var_28_bool); // 0x72 NEW_2
	var_31_bool = var_28_bool == 0; // 0x74 Not
	if(var_31_bool == 0) goto Label_119; // 0x75 JumpB
	return 0; // 0x76 Return
	
Label_119:
	var_32_string = "player"; // 0x77 PushS
	FindActor(var_22_bool, var_32_string); // 0x78 Func
	var_2_bool = 0; // 0x7a TMovB
	var_3_bool = 0; // 0x7b TMovB
	var_0_int = var_26_float; // 0x7c TMov
	var_1_int = var_27_float; // 0x7d TMov
	var_33_int = 10; // 0x7e PushI
	var_34_float = 1.0; // 0x7f PushF
	SetTimer(var_33_int, var_34_float); // 0x80 Func
	func_191(); // 0x83 NEW_2
	var_86_bool = var_3_bool == 0; // 0x85 Not
	if(var_86_bool == 0) goto Label_138; // 0x86 JumpB
	var_87_int = 10; // 0x87 PushI
	KillTimer(var_87_int); // 0x88 Func
	
Label_138:
	return 0; // 0x8a Return
}


func_1781(var_462_float)
{
	var_463_object = Obj(); var_464_object = Obj(); // 0x6f5 PushV
	CreateFloatVector(var_464_object); // 0x6f6 Func
	add(var_462_float); // 0x6f8 ObjFunc
	var_465_int = 0; // 0x6fa PushI
	var_466_bool = var_462_float < var_465_int; // 0x6fb LT
	if(var_466_bool == 0) goto Label_1793; // 0x6fc JumpB
	var_467_float = 0.7; // 0x6fd PushF
	var_468_int = 500; // 0x6fe PushI
	RumblePlay(var_467_float, var_468_int); // 0x6ff Func
	
Label_1793:
	var_469_int = 15; // 0x701 PushI
	SendWorldWndMessage(var_469_int, var_464_object); // 0x702 Func
	return 2; // 0x704 Return
}


func_1398(var_161_bool, var_162_object)
{
	var_163_bool = 0; var_164_bool = 0; // 0x576 PushV
	IsPlayerActor(var_162_object, var_164_bool); // 0x577 Func
	var_161_bool = var_164_bool; // 0x579 Mov
	return 2; // 0x57a Return
}


func_1529(var_29_bool, var_30_object)
{
	var_31_int = 0; var_32_int = 0; // 0x5f9 PushV
	var_33_bool = 0; var_34_object = Obj(); // 0x5fa PushV
	var_34_object = var_30_object; // 0x5fb Mov
	func_1493(var_33_bool, var_34_object); // 0x5fc NEW_2
	var_50_bool = var_33_bool == 0; // 0x5fe Not
	if(var_50_bool == 0) goto Label_1538; // 0x5ff JumpB
	var_29_bool = 0; // 0x600 MovB
	return 2; // 0x601 Return
	
Label_1538:
	var_51_bool = 0; var_52_object = Obj(); var_53_string = ""; // 0x602 PushV
	var_52_object = var_30_object; // 0x603 Mov
	var_53_string = "noaccess"; // 0x604 MovS
	func_1403(var_51_bool, var_52_object, var_53_string); // 0x605 NEW_2
	var_60_bool = var_51_bool == 0; // 0x607 Not
	if(var_60_bool == 0) goto Label_1547; // 0x608 JumpB
	var_29_bool = 1; // 0x609 MovB
	return 2; // 0x60a Return
	
Label_1547:
	var_61_string = "noaccess"; // 0x60b PushS
	GetProperty(var_61_string, var_32_int); // 0x60c ObjFunc
	var_62_int = 0; // 0x60e PushI
	var_29_bool = var_32_int == var_62_int; // 0x60f Eq2
	return 2; // 0x610 Return
}


func_1403(var_51_bool, var_52_object, var_53_string)
{
	var_54_bool = 0; var_55_bool = 0; // 0x57b PushV
	var_56_string = "HasProperty"; // 0x57c PushS
	var_57_int = 2; // 0x57d PushI
	var_58_bool = IsFuncExist(var_52_object, var_56_string, var_57_int); // 0x57e FuncExist
	var_59_bool = var_58_bool == 0; // 0x57f Not
	if(var_59_bool == 0) goto Label_1411; // 0x580 JumpB
	var_51_bool = 0; // 0x581 MovB
	return 2; // 0x582 Return
	
Label_1411:
	HasProperty(var_53_string, var_55_bool); // 0x583 ObjFunc
	var_51_bool = var_55_bool; // 0x585 Mov
	return 2; // 0x586 Return
}


