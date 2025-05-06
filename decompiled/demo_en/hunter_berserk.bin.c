task_0_event_0(var_0_object, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool)
{
	var_11_bool = 0; var_12_bool = 0; // 0x1b PushV
	IsOverrideActive(var_12_bool); // 0x1c Func
	var_13_bool = var_12_bool == 0; // 0x1e Not
	if(var_13_bool == 0) goto Label_36; // 0x1f JumpB
	var_14_object = Obj(); // 0x20 PushV
	var_14_object = var_10_bool; // 0x21 Mov
	func_1755(var_14_object); // 0x22 NEW_2
	
Label_36:
	return 2; // 0x24 Return
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_object, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool)
{
	return 0; // 0x9b Return
}


task_0_event_16(var_0_object, var_1_string, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool)
{
	return 0; // 0x9d Return
}


task_0_event_41(var_0_object, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool)
{
	return 0; // 0x9f Return
}


task_1_event_17(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool)
{
	var_11_object = Obj(); // 0xa1 PushV
	var_11_object = var_10_bool; // 0xa2 Mov
	func_1964(); // 0xa3 NEW_2
	return 0; // 0xa5 Return
}


task_1_event_7(var_0_bool, var_1_object, var_2_bool, var_3_int, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool)
{
	var_11_int = 1; // 0xd8 PushI
	var_12_bool = var_10_bool == var_11_int; // 0xd9 Eq
	if(var_12_bool == 0) goto Label_224; // 0xda JumpB
	var_13_object = Obj(); // 0xdb PushV
	var_13_object = var_1_object; // 0xdc MovT
	func_1729(var_13_object); // 0xdd NEW_2
	goto Label_228; // 0xdf Jump
	
Label_228:
	return 0; // 0xe4 Return
	
Label_224:
	var_18_int = 0; // 0xe0 PushV
	var_18_int = var_10_bool; // 0xe1 Mov
	func_373(var_9_int, var_10_bool, var_18_int); // 0xe2 NEW_2
}


task_1_event_1(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool)
{
	var_11_bool = 0; // 0xf3 PushV
	var_11_bool = 0; // 0xf4 MovB
	var_12_bool = var_1_object == var_10_bool; // 0xf5 Eq
	if(var_12_bool == 0) goto Label_250; // 0xf6 JumpB
	var_13_bool = var_2_bool == 0; // 0xf7 Not
	if(var_13_bool == 0) goto Label_250; // 0xf8 JumpB
	var_11_bool = 1; // 0xf9 MovB
	
Label_250:
	if(var_11_bool == 0) goto Label_256; // 0xfa JumpB
	var_2_bool = 1; // 0xfb TMovB
	var_14_object = Obj(); // 0xfc PushV
	var_14_object = var_10_bool; // 0xfd Mov
	func_1558(var_14_object); // 0xfe NEW_2
	
Label_256:
	return 0; // 0x100 Return
}


task_1_event_2(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool)
{
	var_11_bool = 0; // 0x102 PushV
	var_11_bool = 0; // 0x103 MovB
	var_12_bool = var_1_object == var_10_bool; // 0x104 Eq
	if(var_12_bool == 0) goto Label_265; // 0x105 JumpB
	var_13_bool = var_2_bool; // 0x106 PushT
	if(var_13_bool == 0) goto Label_265; // 0x107 JumpB
	var_11_bool = 1; // 0x108 MovB
	
Label_265:
	if(var_11_bool == 0) goto Label_270; // 0x109 JumpB
	var_2_bool = 0; // 0x10a TMovB
	var_14_string = "head"; // 0x10b PushS
	UnlookAsync(var_14_string); // 0x10c Func
	
Label_270:
	return 0; // 0x10e Return
}


task_1_event_10(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool)
{
	RequestClearPath(var_10_bool); // 0x188 Func
	return 0; // 0x18a Return
}


task_1_event_41(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool)
{
	func_229(var_10_bool); // 0x194 NEW_2
	var_15_object = Obj(); // 0x196 PushV
	var_15_object = var_10_bool; // 0x197 Mov
	func_1958(); // 0x198 NEW_2
	return 0; // 0x19a Return
}


task_2_event_17(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object)
{
	var_11_object = Obj(); // 0x1b5 PushV
	var_11_object = var_10_object; // 0x1b6 Mov
	func_1964(); // 0x1b7 NEW_2
	return 0; // 0x1b9 Return
}


task_3_event_5(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x4b8 PushV
	var_12_string = "player"; // 0x4b9 PushS
	FindActor(var_11_object, var_12_string); // 0x4ba Func
	var_13_object = var_11_object; // 0x4bc Push
	if(var_13_object == 0) goto Label_1221; // 0x4bd JumpB
	var_14_object = Obj(); var_15_bool = 0; // 0x4be PushV
	var_14_object = var_11_object; // 0x4bf Mov
	var_15_bool = 0; // 0x4c0 MovB
	TaskCall(2); // 0x4c1 TaskCall
	func_422(var_14_object, var_15_bool); // 0x4c2 NEW_2
	TaskReturn(); // 0x4c3 TaskReturn
	
Label_1221:
	return 2; // 0x4c5 Return
}


event_22(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0; // 0x788 PushV
	var_14_object = var_10_object; // 0x789 Mov
	var_15_int = var_11_int; // 0x78a Mov
	var_16_float = var_12_float; // 0x78b Mov
	func_1465(var_14_object, var_15_int, var_16_float); // 0x78c NEW_2
	return 0; // 0x78e Return
}


event_43(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float, var_14_cvector, var_15_cvector)
{
	var_16_object = Obj(); var_17_int = 0; var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); // 0x790 PushV
	var_16_object = var_10_object; // 0x791 Mov
	var_17_int = var_11_int; // 0x792 Mov
	var_18_float = var_12_float; // 0x793 Mov
	var_19_cvector = var_14_cvector; // 0x794 Mov
	var_20_cvector = var_15_cvector; // 0x795 Mov
	func_1533(var_18_float, var_19_cvector, var_20_cvector); // 0x796 NEW_2
	return 0; // 0x798 Return
}


event_16(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_string)
{
	var_12_float = 0; var_13_float = 0; // 0x799 PushV
	var_14_string = "health"; // 0x79a PushS
	var_15_bool = var_11_string == var_14_string; // 0x79b Eq
	if(var_15_bool == 0) goto Label_1957; // 0x79c JumpB
	var_16_string = "health"; // 0x79d PushS
	GetProperty(var_16_string, var_13_float); // 0x79e Func
	var_17_int = 0; // 0x7a0 PushI
	var_18_bool = var_13_float <= var_17_int; // 0x7a1 LE
	if(var_18_bool == 0) goto Label_1957; // 0x7a2 JumpB
	SignalDeath(var_10_object); // 0x7a3 Func
	
Label_1957:
	return 2; // 0x7a5 Return
}


event_41(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object)
{
	var_11_object = Obj(); // 0x7a7 PushV
	var_11_object = var_10_object; // 0x7a8 Mov
	func_1887(var_11_object); // 0x7a9 NEW_2
	return 0; // 0x7ab Return
}


main(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool)
{
	
Label_1204:
	Hold(); // 0x4b4 Func
	goto Label_1204; // 0x4b6 Jump
}


func_128(var_158_string)
{
	RemoveRTEnvelope(); // 0x81 Func
	SetDeathState(); // 0x83 Func
	Stop(); // 0x85 Func
	StopAsync(); // 0x87 Func
	StopSecondaryAnimation(); // 0x89 Func
	var_159_string = ""; // 0x8b PushV
	var_159_string = var_158_string; // 0x8c Mov
	func_1580(var_159_string); // 0x8d NEW_2
	var_188_string = "all"; // 0x8f PushS
	PlayAnimation(var_188_string, var_158_string); // 0x90 Func
	WaitForAnimEnd(); // 0x92 Func
	var_189_string = "all"; // 0x94 PushS
	LockAnimationEnd(var_189_string, var_158_string); // 0x95 Func
	RemoveEnvelope(); // 0x97 Func
	return 0; // 0x99 Return
}


func_1665(var_31_bool, var_32_object, var_33_float)
{
	var_34_bool = var_32_object == 0; // 0x682 Not
	if(var_34_bool == 0) goto Label_1670; // 0x683 JumpB
	var_31_bool = 0; // 0x684 MovB
	return 0; // 0x685 Return
	
Label_1670:
	var_35_int = 0; // 0x686 PushI
	var_36_bool = var_33_float > var_35_int; // 0x687 GT
	if(var_36_bool == 0) goto Label_1677; // 0x688 JumpB
	var_37_int = 8; // 0x689 PushI
	SendWorldWndMessage(var_37_int); // 0x68a Func
	goto Label_1686; // 0x68c Jump
	
Label_1686:
	var_38_float = 0; // 0x696 PushV
	var_38_float = var_33_float; // 0x697 Mov
	func_1710(var_38_float); // 0x698 NEW_2
	var_42_bool = 0; var_43_object = Obj(); var_44_string = ""; var_45_float = 0; var_46_float = 0; var_47_float = 0; // 0x69a PushV
	var_43_object = var_32_object; // 0x69b Mov
	var_44_string = "reputation"; // 0x69c MovS
	var_45_float = var_33_float; // 0x69d Mov
	var_46_float = 0; // 0x69e MovI
	var_47_float = 1; // 0x69f MovI
	func_1261(var_42_bool, var_43_object, var_44_string, var_45_float, var_46_float, var_47_float); // 0x6a0 NEW_2
	var_31_bool = 1; // 0x6a2 MovB
	return 0; // 0x6a3 Return
	
Label_1677:
	var_66_int = 0; // 0x68d PushI
	var_67_bool = var_33_float < var_66_int; // 0x68e LT
	if(var_67_bool == 0) goto Label_1684; // 0x68f JumpB
	var_68_int = 9; // 0x690 PushI
	SendWorldWndMessage(var_68_int); // 0x691 Func
	goto Label_1686; // 0x693 Jump
	
Label_1684:
	var_31_bool = 0; // 0x694 MovB
	return 0; // 0x695 Return
}


func_1154(var_2_bool, var_5_int)
{
	var_363_float = 0; var_364_int = 0; var_365_float = 0; var_366_int = 0; // 0x482 PushV
	var_367_bool = var_2_bool == 0; // 0x483 Not
	if(var_367_bool == 0) goto Label_1158; // 0x484 JumpB
	return 4; // 0x485 Return
	
Label_1158:
	var_368_int = var_5_int; // 0x486 PushT
	if(var_368_int == 0) goto Label_1166; // 0x487 JumpB
	var_369_int = -1; // 0x488 PushI
	var_5_int = var_5_int + var_369_int; // 0x489 Add2
	var_370_int = 0; // 0x48a PushI
	var_371_bool = var_5_int > var_370_int; // 0x48b GT
	if(var_371_bool == 0) goto Label_1166; // 0x48c JumpB
	return 4; // 0x48d Return
	
Label_1166:
	rand(var_365_float); // 0x48e Func
	var_372_float = 0; // 0x490 PushV
	func_1202(var_372_float); // 0x491 NEW_2
	var_373_bool = var_365_float < var_372_float; // 0x493 LT
	if(var_373_bool == 0) goto Label_1185; // 0x494 JumpB
	irand(var_366_int, var_365_float); // 0x495 Func
	var_374_int = 1; // 0x497 PushI
	var_366_int = var_366_int + var_374_int; // 0x498 Add2
	var_375_string = "attack"; // 0x499 PushS
	var_376_int = var_375_string + var_366_int; // 0x49a Add
	Speak(var_376_int); // 0x49b Func
	var_377_int = 0; // 0x49d PushV
	func_1200(var_377_int); // 0x49e NEW_2
	var_5_int = var_377_int; // 0x49f TMov
	
Label_1185:
	return 4; // 0x4a1 Return
}


func_1283(var_395_float, var_396_object, var_397_float, var_398_int)
{
	var_402_int = 0; var_403_string = ""; var_404_int = 0; var_405_float = 0; var_406_float = 0; var_407_float = 0; var_408_int = 0; var_409_string = ""; var_410_int = 0; var_411_float = 0; var_412_float = 0; var_413_float = 0; // 0x503 PushV
	var_414_bool = 0; var_415_object = Obj(); var_416_string = ""; // 0x504 PushV
	var_415_object = var_396_object; // 0x505 Mov
	var_416_string = "health"; // 0x506 MovS
	func_1249(var_414_bool, var_415_object, var_416_string); // 0x507 NEW_2
	var_417_bool = var_414_bool == 0; // 0x509 Not
	if(var_417_bool == 0) goto Label_1293; // 0x50a JumpB
	var_395_float = 0.0; // 0x50b MovF
	return 12; // 0x50c Return
	
Label_1293:
	var_418_bool = 0; var_419_object = Obj(); var_420_string = ""; // 0x50d PushV
	var_419_object = var_396_object; // 0x50e Mov
	var_420_string = "armor"; // 0x50f MovS
	func_1249(var_418_bool, var_419_object, var_420_string); // 0x510 NEW_2
	var_421_bool = var_418_bool == 0; // 0x512 Not
	if(var_421_bool == 0) goto Label_1302; // 0x513 JumpB
	var_408_int = 0; // 0x514 MovI
	goto Label_1305; // 0x515 Jump
	
Label_1305:
	var_422_string = "armor_"; // 0x519 PushS
	var_423_string = ""; var_424_int = 0; // 0x51a PushV
	var_424_int = var_398_int; // 0x51b Mov
	func_1223(var_423_string, var_424_int); // 0x51c NEW_2
	var_409_string = var_422_string + var_423_string; // 0x51e Add2
	var_429_bool = 0; var_430_object = Obj(); var_431_string = ""; // 0x51f PushV
	var_430_object = var_396_object; // 0x520 Mov
	var_431_string = var_409_string; // 0x521 Mov
	func_1249(var_429_bool, var_430_object, var_431_string); // 0x522 NEW_2
	var_432_bool = var_429_bool == 0; // 0x524 Not
	if(var_432_bool == 0) goto Label_1320; // 0x525 JumpB
	var_410_int = 0; // 0x526 MovI
	goto Label_1322; // 0x527 Jump
	
Label_1322:
	var_433_float = 0; var_434_float = 0; var_435_float = 0; // 0x52a PushV
	var_436_int = var_408_int + var_410_int; // 0x52b Add
	var_437_float = 100.0; // 0x52c PushF
	var_434_float = var_436_int / var_436_int; // 0x52d Div2
	var_435_float = 1; // 0x52e MovI
	func_1637(var_433_float, var_434_float, var_435_float); // 0x52f NEW_2
	var_411_float = var_433_float; // 0x530 Mov
	var_439_string = "health"; // 0x532 PushS
	GetProperty(var_439_string, var_412_float); // 0x533 ObjFunc
	var_440_int = 1; // 0x535 PushI
	var_441_int = var_440_int - var_411_float; // 0x536 Sub
	var_413_float = var_397_float * var_441_int; // 0x537 Mult2
	var_442_string = "health"; // 0x538 PushS
	var_443_float = 0; var_444_float = 0; var_445_float = 0; var_446_float = 0; // 0x539 PushV
	var_444_float = var_412_float - var_413_float; // 0x53a Sub2
	var_445_float = 0; // 0x53b MovI
	var_446_float = 1; // 0x53c MovI
	func_1644(var_443_float, var_444_float, var_445_float, var_446_float); // 0x53d NEW_2
	SetProperty(var_442_string, var_443_float); // 0x53f ObjFunc
	var_449_bool = 0; var_450_object = Obj(); // 0x541 PushV
	var_450_object = var_396_object; // 0x542 Mov
	func_1244(var_449_bool, var_450_object); // 0x543 NEW_2
	if(var_449_bool == 0) goto Label_1354; // 0x545 JumpB
	var_451_float = 0; // 0x546 PushV
	var_451_float = -var_413_float; // 0x547 Neg2
	func_1700(var_451_float); // 0x548 NEW_2
	
Label_1354:
	var_395_float = var_413_float; // 0x54a Mov
	return 12; // 0x54b Return
	
Label_1320:
	GetProperty(var_409_string, var_410_int); // 0x528 ObjFunc
	
Label_1302:
	var_455_string = "armor"; // 0x516 PushS
	GetProperty(var_455_string, var_408_int); // 0x517 ObjFunc
}


func_0(var_69_object)
{
	func_1840(); // 0x2 NEW_2
	func_1816(); // 0x5 NEW_2
	var_135_object = Obj(); // 0x7 PushV
	var_135_object = var_69_object; // 0x8 Mov
	func_12(var_135_object); // 0x9 NEW_2
	return 0; // 0xb Return
}


func_773(var_1_object, var_2_bool, var_4_int)
{
	var_48_bool = 0; var_49_bool = 0; var_50_cvector = CVector(0,0,0); var_51_bool = 0; var_52_bool = 0; var_53_cvector = CVector(0,0,0); // 0x305 PushV
	var_1_object = 0; // 0x306 TMovI
	
Label_775:
	var_54_string = "all"; // 0x307 PushS
	var_55_string = "attack_begin"; // 0x308 PushS
	var_56_int = 1; // 0x309 PushI
	var_57_int = var_1_object + var_56_int; // 0x30a Add
	var_58_int = var_55_string + var_57_int; // 0x30b Add
	HasAnimation(var_51_bool, var_54_string, var_58_int); // 0x30c Func
	var_59_bool = var_51_bool == 0; // 0x30e Not
	if(var_59_bool == 0) goto Label_785; // 0x30f JumpB
	goto Label_788; // 0x310 Jump
	
Label_788:
	var_2_bool = 0; // 0x314 TMovI
	
Label_789:
	var_60_string = "attack"; // 0x315 PushS
	var_61_int = 1; // 0x316 PushI
	var_62_int = var_2_bool + var_61_int; // 0x317 Add
	var_63_int = var_60_string + var_62_int; // 0x318 Add
	IsExisting3DSound(var_52_bool, var_63_int); // 0x319 Func
	var_64_bool = var_52_bool == 0; // 0x31b Not
	if(var_64_bool == 0) goto Label_798; // 0x31c JumpB
	goto Label_801; // 0x31d Jump
	
Label_801:
	var_65_string = "all"; // 0x321 PushS
	var_66_string = "bjump"; // 0x322 PushS
	GetAnimationOffset(var_53_cvector, var_65_string, var_66_string); // 0x323 Func
	var_67_float = GetByIndex(var_53_cvector, 2); // 0x325 PushE
	var_4_int = -var_67_float; // 0x326 Neg2
	return 6; // 0x327 Return
	
Label_798:
	var_68_int = 1; // 0x31e PushI
	var_2_bool = var_2_bool + var_68_int; // 0x31f Add2
	goto Label_789; // 0x320 Jump
	
Label_785:
	var_69_int = 1; // 0x311 PushI
	var_1_object = var_1_object + var_69_int; // 0x312 Add2
	goto Label_775; // 0x313 Jump
}


func_1799(var_121_string)
{
	var_122_object = Obj(); var_123_int = 0; var_124_bool = 0; var_125_object = Obj(); var_126_int = 0; var_127_bool = 0; // 0x707 PushV
	CreateInvItem(var_125_object); // 0x708 Func
	SetItemName(var_121_string); // 0x70a ObjFunc
	var_128_string = "Organ"; // 0x70c PushS
	var_129_int = 1; // 0x70d PushI
	SetProperty(var_128_string, var_129_int); // 0x70e ObjFunc
	GetItemID(var_126_int); // 0x710 ObjFunc
	var_130_int = 0; // 0x712 PushI
	var_131_int = 1; // 0x713 PushI
	AddItem(var_127_bool, var_125_object, var_130_int, var_131_int); // 0x714 Func
	return 6; // 0x716 Return
}


func_395(var_0_bool)
{
	var_0_bool = 1; // 0x18b TMovB
	var_14_int = 0; // 0x18c PushI
	KillTimer(var_14_int); // 0x18d Func
	Stop(); // 0x18f Func
	return 0; // 0x191 Return
}


func_12(var_135_object)
{
	EventDisable(0); // 0xd EventDisable
	var_136_object = Obj(); // 0xe PushV
	var_136_object = var_135_object; // 0xf Mov
	func_37(var_136_object); // 0x10 NEW_2
	var_216_int = 50; // 0x12 PushI
	var_217_int = 40; // 0x13 PushI
	SetRTEnvelope(var_216_int, var_217_int); // 0x14 Func
	EventEnable(0); // 0x16 EventEnable
	
Label_23:
	Hold(); // 0x17 Func
	goto Label_23; // 0x19 Jump
}


func_1547()
{
	var_230_cvector = CVector(0,0,0); var_231_cvector = CVector(0,0,0); var_232_cvector = CVector(0,0,0); var_233_cvector = CVector(0,0,0); var_234_cvector = CVector(0,0,0); var_235_cvector = CVector(0,0,0); // 0x60b PushV
	GetPosition(var_233_cvector); // 0x60c ObjFunc
	GetPosition(var_234_cvector); // 0x60e Func
	var_235_cvector = var_233_cvector - var_234_cvector; // 0x610 Sub2
	var_236_float = GetByIndex(var_235_cvector, 0); // 0x611 PushE
	var_237_float = GetByIndex(var_235_cvector, 2); // 0x612 PushE
	RotateAsync(var_236_float, var_237_float); // 0x613 Func
	return 6; // 0x615 Return
}


func_1421(var_27_object)
{
	var_28_bool = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = ""; var_35_bool = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = ""; // 0x58d PushV
	var_42_bool = var_27_object == 0; // 0x58e NullEq
	if(var_42_bool == 0) goto Label_1425; // 0x58f JumpB
	return 14; // 0x590 Return
	
Label_1425:
	IsDead(var_35_bool); // 0x591 Func
	var_43_bool = var_35_bool; // 0x593 Push
	if(var_43_bool == 0) goto Label_1430; // 0x594 JumpB
	return 14; // 0x595 Return
	
Label_1430:
	GetSecondaryAnimationType(var_36_int); // 0x596 Func
	var_44_int = 0; // 0x598 PushI
	var_45_bool = var_36_int < var_44_int; // 0x599 LT
	if(var_45_bool == 0) goto Label_1436; // 0x59a JumpB
	return 14; // 0x59b Return
	
Label_1436:
	GetPosition(var_37_cvector); // 0x59c ObjFunc
	GetPosition(var_38_cvector); // 0x59e Func
	GetDirection(var_39_cvector); // 0x5a0 Func
	var_40_cvector = var_38_cvector - var_37_cvector; // 0x5a2 Sub2
	var_46_float = GetByIndex(var_40_cvector, 0); // 0x5a3 PushE
	var_47_float = GetByIndex(var_39_cvector, 0); // 0x5a4 PushE
	var_48_float = var_46_float * var_47_float; // 0x5a5 Mult
	var_49_float = GetByIndex(var_40_cvector, 2); // 0x5a6 PushE
	var_50_float = GetByIndex(var_39_cvector, 2); // 0x5a7 PushE
	var_51_float = var_49_float * var_50_float; // 0x5a8 Mult
	var_52_int = var_48_float + var_51_float; // 0x5a9 Add
	var_53_int = 0; // 0x5aa PushI
	var_54_bool = var_52_int >= var_53_int; // 0x5ab GE
	if(var_54_bool == 0) goto Label_1455; // 0x5ac JumpB
	var_41_string = "fhit"; // 0x5ad MovS
	goto Label_1456; // 0x5ae Jump
	
Label_1456:
	var_55_string = "hit_react"; // 0x5b0 PushS
	var_56_string = "1"; // 0x5b1 PushS
	var_57_int = var_41_string + var_56_string; // 0x5b2 Add
	var_58_string = "2"; // 0x5b3 PushS
	var_59_int = var_41_string + var_58_string; // 0x5b4 Add
	var_60_int = -10; // 0x5b5 PushI
	FadeSecondaryAnimation(var_55_string, var_57_int, var_59_int, var_60_int); // 0x5b6 Func
	return 14; // 0x5b8 Return
	
Label_1455:
	var_41_string = "bhit"; // 0x5af MovS
}


func_271(var_0_bool, var_1_object, var_155_bool, var_156_object, var_157_float, var_158_float, var_159_bool, var_160_bool)
{
	var_161_bool = 0; var_162_bool = 0; var_163_object = Obj(); var_164_cvector = CVector(0,0,0); var_165_cvector = CVector(0,0,0); var_166_cvector = CVector(0,0,0); var_167_float = 0; var_168_object = Obj(); var_169_bool = 0; var_170_bool = 0; var_171_object = Obj(); var_172_cvector = CVector(0,0,0); var_173_cvector = CVector(0,0,0); var_174_cvector = CVector(0,0,0); var_175_float = 0; var_176_object = Obj(); // 0x10f PushV
	var_0_bool = 0; // 0x110 TMovB
	var_1_object = var_156_object; // 0x111 TMov
	var_170_bool = var_160_bool; // 0x112 Mov
	
Label_275:
	var_177_bool = 0; var_178_object = Obj(); // 0x113 PushV
	var_178_object = var_156_object; // 0x114 Mov
	func_411(var_177_bool, var_178_object); // 0x115 NEW_2
	var_181_bool = var_177_bool == 0; // 0x117 Not
	if(var_181_bool == 0) goto Label_283; // 0x118 JumpB
	var_155_bool = 0; // 0x119 MovB
	return 16; // 0x11a Return
	
Label_283:
	GetPosition(var_172_cvector); // 0x11b ObjFunc
	GetPosition(var_173_cvector); // 0x11d Func
	var_174_cvector = var_172_cvector - var_173_cvector; // 0x11f Sub2
	var_175_float = var_174_cvector | var_174_cvector; // 0x120 Or2
	var_182_bool = 0; // 0x121 PushV
	var_182_bool = 0; // 0x122 MovB
	var_183_int = 0; // 0x123 PushI
	var_184_bool = var_158_float > var_183_int; // 0x124 GT
	if(var_184_bool == 0) goto Label_298; // 0x125 JumpB
	var_185_float = var_158_float * var_158_float; // 0x126 Mult
	var_186_bool = var_175_float > var_185_float; // 0x127 GT
	if(var_186_bool == 0) goto Label_298; // 0x128 JumpB
	var_182_bool = 1; // 0x129 MovB
	
Label_298:
	if(var_182_bool == 0) goto Label_303; // 0x12a JumpB
	Stop(); // 0x12b Func
	var_155_bool = 0; // 0x12d MovB
	return 16; // 0x12e Return
	
Label_303:
	var_187_float = var_157_float * var_157_float; // 0x12f Mult
	var_188_bool = var_175_float > var_187_float; // 0x130 GT
	if(var_188_bool == 0) goto Label_365; // 0x131 JumpB
	GetPFPosition(var_172_cvector); // 0x132 ObjFunc
	FindPathTo(var_176_object, var_172_cvector); // 0x134 Func
	var_189_bool = var_176_object != 0; // 0x136 NullNeq
	if(var_189_bool == 0) goto Label_314; // 0x137 JumpB
	var_171_object = var_176_object; // 0x138 Mov
	var_176_object = 0; // 0x139 SetNull
	
Label_314:
	var_190_bool = var_171_object != 0; // 0x13a NullNeq
	if(var_190_bool == 0) goto Label_347; // 0x13b JumpB
	var_191_bool = var_170_bool; // 0x13c Push
	if(var_191_bool == 0) goto Label_324; // 0x13d JumpB
	var_170_bool = 0; // 0x13e MovB
	RotatePath(var_171_object, var_169_bool); // 0x13f Func
	var_192_bool = var_169_bool == 0; // 0x141 Not
	if(var_192_bool == 0) goto Label_324; // 0x142 JumpB
	goto Label_371; // 0x143 Jump
	
Label_371:
	var_155_bool = !var_0_bool; // 0x173 Not2
	return 16; // 0x174 Return
	
Label_324:
	var_193_int = 0; // 0x144 PushI
	var_194_float = 0.3; // 0x145 PushF
	SetTimer(var_193_int, var_194_float); // 0x146 Func
	var_195_string = ""; // 0x148 PushV
	func_418(var_195_string); // 0x149 NEW_2
	var_196_string = ""; // 0x14b PushV
	func_420(var_196_string); // 0x14c NEW_2
	FollowPath(var_171_object, var_159_bool, var_169_bool, var_195_string, var_196_string); // 0x14e Func
	var_197_bool = var_169_bool == 0; // 0x150 Not
	if(var_197_bool == 0) goto Label_345; // 0x151 JumpB
	var_198_bool = var_0_bool; // 0x152 PushT
	if(var_198_bool == 0) goto Label_343; // 0x153 JumpB
	var_171_object = 0; // 0x154 SetNull
	goto Label_371; // 0x155 Jump
	
Label_343:
	goto Label_370; // 0x157 Jump
	
Label_370:
	goto Label_275; // 0x172 Jump
	
Label_345:
	var_171_object = 0; // 0x159 SetNull
	goto Label_363; // 0x15a Jump
	
Label_363:
	var_176_object = 0; // 0x16b SetNull
	goto Label_369; // 0x16c Jump
	
Label_369:
	var_171_object = 0; // 0x171 SetNull
	
Label_347:
	var_199_int = 0; // 0x15b PushI
	KillTimer(var_199_int); // 0x15c Func
	var_200_float = 0.5; // 0x15e PushF
	Sleep(var_200_float, var_169_bool); // 0x15f Func
	var_201_bool = var_169_bool == 0; // 0x161 Not
	if(var_201_bool == 0) goto Label_359; // 0x162 JumpB
	var_202_bool = var_0_bool; // 0x163 PushT
	if(var_202_bool == 0) goto Label_359; // 0x164 JumpB
	var_171_object = 0; // 0x165 SetNull
	goto Label_371; // 0x166 Jump
	
Label_359:
	var_203_int = 0; // 0x167 PushI
	var_204_float = 0.3; // 0x168 PushF
	SetTimer(var_203_int, var_204_float); // 0x169 Func
	
Label_365:
	var_205_int = 0; // 0x16d PushI
	KillTimer(var_205_int); // 0x16e Func
	goto Label_371; // 0x170 Jump
}


func_1558(var_143_object)
{
	var_144_float = 0; var_145_cvector = CVector(0,0,0); var_146_float = 0; var_147_cvector = CVector(0,0,0); // 0x616 PushV
	GetEyesHeight(var_146_float); // 0x617 ObjFunc
	var_147_cvector = CVector(0.0, 0.0, 0.0); // 0x619 MovV
	var_148_float = GetByIndex(var_147_cvector, 1); // 0x61a PushE
	var_148_float = var_146_float; // 0x61b Mov
	SetByIndex(var_147_cvector, 1) = var_148_float; // 0x61c PopE
	var_149_string = "head"; // 0x61d PushS
	LookAsync(var_143_object, var_149_string, var_147_cvector); // 0x61e Func
	return 4; // 0x620 Return
}


func_1816()
{
	var_118_int = 0; // 0x718 PushV
	func_1749(var_118_int); // 0x719 NEW_2
	var_119_int = 1; // 0x71b PushI
	var_120_bool = var_118_int != var_119_int; // 0x71c Neq
	if(var_120_bool == 0) goto Label_1823; // 0x71d JumpB
	return 0; // 0x71e Return
	
Label_1823:
	var_121_string = ""; // 0x71f PushV
	var_121_string = "liver"; // 0x720 MovS
	func_1799(var_121_string); // 0x721 NEW_2
	var_132_string = ""; // 0x723 PushV
	var_132_string = "kidney"; // 0x724 MovS
	func_1799(var_132_string); // 0x725 NEW_2
	var_133_string = ""; // 0x727 PushV
	var_133_string = "heart"; // 0x728 MovS
	func_1799(var_133_string); // 0x729 NEW_2
	var_134_string = ""; // 0x72b PushV
	var_134_string = "blood"; // 0x72c MovS
	func_1799(var_134_string); // 0x72d NEW_2
	return 0; // 0x72f Return
}


func_411(var_177_bool, var_178_object)
{
	var_179_bool = 0; var_180_object = Obj(); // 0x19c PushV
	var_180_object = var_178_object; // 0x19d Mov
	func_1397(var_179_bool, var_180_object); // 0x19e NEW_2
	var_177_bool = var_179_bool; // 0x19f Mov
	return 0; // 0x1a1 Return
}


func_1054(var_0_bool, var_298_bool)
{
	var_299_cvector = CVector(0,0,0); var_300_cvector = CVector(0,0,0); var_301_cvector = CVector(0,0,0); var_302_float = 0; var_303_float = 0; var_304_cvector = CVector(0,0,0); var_305_cvector = CVector(0,0,0); var_306_cvector = CVector(0,0,0); var_307_float = 0; var_308_float = 0; // 0x41e PushV
	var_309_bool = 0; var_310_object = Obj(); // 0x41f PushV
	var_310_object = var_0_bool; // 0x420 MovT
	func_1397(var_309_bool, var_310_object); // 0x421 NEW_2
	var_311_bool = var_309_bool == 0; // 0x423 Not
	if(var_311_bool == 0) goto Label_1063; // 0x424 JumpB
	var_298_bool = 0; // 0x425 MovB
	return 10; // 0x426 Return
	
Label_1063:
	var_312_bool = 0; // 0x427 PushV
	func_1143(var_308_float, var_312_bool); // 0x428 NEW_2
	if(var_312_bool == 0) goto Label_1080; // 0x42a JumpB
	GetPFPosition(var_304_cvector); // 0x42b TObjFunc
	GetPFPosition(var_305_cvector); // 0x42d Func
	var_306_cvector = var_304_cvector - var_305_cvector; // 0x42f Sub2
	var_307_float = var_306_cvector | var_306_cvector; // 0x430 Or2
	GetAttackDistance(var_308_float); // 0x431 TObjFunc
	var_313_int = 50; // 0x433 PushI
	var_308_float = var_308_float + var_313_int; // 0x434 Add2
	var_314_float = var_308_float * var_308_float; // 0x435 Mult
	var_298_bool = var_307_float <= var_314_float; // 0x436 LE2
	return 10; // 0x437 Return
	
Label_1080:
	var_298_bool = 0; // 0x438 MovB
	return 10; // 0x439 Return
}


func_544(var_0_bool, var_3_object, var_5_int, var_23_object, var_24_bool, var_25_float, var_132_bool, var_224_bool)
{
	var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_bool = 0; var_30_bool = 0; var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_float = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_bool = 0; var_41_bool = 0; var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_float = 0; var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_float = 0; // 0x220 PushV
	func_773(var_45_cvector, var_46_bool, var_47_float); // 0x222 NEW_2
	var_5_int = 0; // 0x224 TMovI
	var_70_string = "@GetAttackDistance"; // 0x225 PushS
	var_71_int = 1; // 0x226 PushI
	var_72_bool = IsFuncExist(var_23_object, var_70_string, var_71_int); // 0x227 FuncExist
	if(var_72_bool == 0) goto Label_558; // 0x228 JumpB
	GetAttackDistance(var_37_float); // 0x229 ObjFunc
	var_73_int = 50; // 0x22b PushI
	var_37_float = var_37_float + var_73_int; // 0x22c Add2
	goto Label_559; // 0x22d Jump
	
Label_559:
	var_74_int = 150; // 0x22f PushI
	var_75_bool = var_37_float >= var_74_int; // 0x230 GE
	if(var_75_bool == 0) goto Label_563; // 0x231 JumpB
	var_37_float = 150; // 0x232 MovI
	
Label_563:
	var_3_object = 0; // 0x233 TMovB
	var_0_bool = var_23_object; // 0x234 TMov
	IsPlayerActor(var_0_bool, var_40_bool); // 0x235 Func
	var_76_bool = var_40_bool; // 0x237 Push
	if(var_76_bool == 0) goto Label_577; // 0x238 JumpB
	var_77_string = "attack"; // 0x239 PushS
	PlayGlobalMusic(var_77_string); // 0x23a Func
	var_78_object = Obj(); // 0x23c PushV
	func_1621(var_78_object); // 0x23d NEW_2
	SendPlayerEnemy(var_23_object, var_78_object); // 0x23f Func
	
Label_577:
	var_81_bool = var_24_bool; // 0x241 Push
	if(var_81_bool == 0) goto Label_581; // 0x242 JumpB
	var_41_bool = 0; // 0x243 MovB
	goto Label_582; // 0x244 Jump
	
Label_582:
	var_82_float = 300.0; // 0x246 PushF
	var_42_float = var_82_float + var_37_float; // 0x247 Add2
	
Label_584:
	var_83_bool = 0; // 0x248 PushV
	var_83_bool = 0; // 0x249 MovB
	var_84_bool = 0; var_85_object = Obj(); // 0x24a PushV
	var_85_object = var_0_bool; // 0x24b MovT
	func_1397(var_84_bool, var_85_object); // 0x24c NEW_2
	if(var_84_bool == 0) goto Label_594; // 0x24e JumpB
	var_118_bool = var_3_object == 0; // 0x24f Not
	if(var_118_bool == 0) goto Label_594; // 0x250 JumpB
	var_83_bool = 1; // 0x251 MovB
	
Label_594:
	if(var_83_bool == 0) goto Label_756; // 0x252 JumpB
	func_1186(var_47_float); // 0x254 NEW_2
	GetPFPosition(var_38_cvector); // 0x256 TObjFunc
	GetPFPosition(var_39_cvector); // 0x258 Func
	var_43_cvector = var_38_cvector - var_39_cvector; // 0x25a Sub2
	var_44_float = var_43_cvector | var_43_cvector; // 0x25b Or2
	var_124_float = var_42_float * var_42_float; // 0x25c Mult
	var_125_bool = var_44_float >= var_124_float; // 0x25d GE
	if(var_125_bool == 0) goto Label_622; // 0x25e JumpB
	var_126_bool = 0; var_127_object = Obj(); var_128_float = 0; var_129_float = 0; var_130_bool = 0; var_131_bool = 0; // 0x25f PushV
	var_127_object = var_0_bool; // 0x260 MovT
	var_128_float = var_37_float; // 0x261 Mov
	var_129_float = 3000.0; // 0x262 MovF
	var_130_bool = 1; // 0x263 MovB
	var_131_bool = 0; // 0x264 MovB
	TaskCall(1); // 0x265 TaskCall
	func_166(var_134_bool, var_126_bool, var_127_object, var_128_float, var_129_float, var_130_bool, var_131_bool); // 0x266 NEW_2
	TaskReturn(); // 0x267 TaskReturn
	var_209_bool = var_132_bool == 0; // 0x269 Not
	if(var_209_bool == 0) goto Label_620; // 0x26a JumpB
	goto Label_756; // 0x26b Jump
	
Label_756:
	WaitForAnimEnd(); // 0x2f4 Func
	var_210_object = var_3_object; // 0x2f6 PushT
	if(var_210_object == 0) goto Label_761; // 0x2f7 JumpB
	return 22; // 0x2f8 Return
	
Label_761:
	var_211_string = "all"; // 0x2f9 PushS
	var_212_string = "attack_off"; // 0x2fa PushS
	PlayAnimation(var_211_string, var_212_string); // 0x2fb Func
	WaitForAnimEnd(); // 0x2fd Func
	var_213_bool = var_40_bool; // 0x2ff Push
	if(var_213_bool == 0) goto Label_772; // 0x300 JumpB
	var_214_float = 2.0; // 0x301 PushF
	Sleep(var_214_float); // 0x302 Func
	
Label_772:
	return 22; // 0x304 Return
	
Label_620:
	var_41_bool = 0; // 0x26c MovB
	goto Label_755; // 0x26d Jump
	
Label_755:
	goto Label_584; // 0x2f3 Jump
	
Label_622:
	var_215_float = var_25_float * var_25_float; // 0x26e Mult
	var_216_bool = var_44_float >= var_215_float; // 0x26f GE
	if(var_216_bool == 0) goto Label_747; // 0x270 JumpB
	GetPFPosition(var_45_cvector); // 0x271 TObjFunc
	CanReachByPF(var_46_bool, var_45_cvector); // 0x273 Func
	var_217_bool = var_46_bool == 0; // 0x275 Not
	if(var_217_bool == 0) goto Label_646; // 0x276 JumpB
	var_218_bool = 0; var_219_object = Obj(); var_220_float = 0; var_221_float = 0; var_222_bool = 0; var_223_bool = 0; // 0x277 PushV
	var_219_object = var_0_bool; // 0x278 MovT
	var_220_float = var_37_float; // 0x279 Mov
	var_221_float = 3000.0; // 0x27a MovF
	var_222_bool = 1; // 0x27b MovB
	var_223_bool = 0; // 0x27c MovB
	TaskCall(1); // 0x27d TaskCall
	func_166(var_226_bool, var_218_bool, var_219_object, var_220_float, var_221_float, var_222_bool, var_223_bool); // 0x27e NEW_2
	TaskReturn(); // 0x27f TaskReturn
	var_227_bool = var_224_bool == 0; // 0x281 Not
	if(var_227_bool == 0) goto Label_644; // 0x282 JumpB
	goto Label_756; // 0x283 Jump
	
Label_644:
	var_41_bool = 0; // 0x284 MovB
	goto Label_584; // 0x285 Jump
	
Label_646:
	var_228_bool = var_41_bool == 0; // 0x286 Not
	if(var_228_bool == 0) goto Label_671; // 0x287 JumpB
	var_229_object = Obj(); // 0x288 PushV
	var_229_object = var_0_bool; // 0x289 MovT
	func_1547(); // 0x28a NEW_2
	var_238_string = "all"; // 0x28c PushS
	var_239_string = "attack_on"; // 0x28d PushS
	PlayAnimation(var_238_string, var_239_string); // 0x28e Func
	WaitForAnimEnd(); // 0x290 Func
	func_1186(var_47_float); // 0x293 NEW_2
	StopAsync(); // 0x295 Func
	var_41_bool = 1; // 0x297 MovB
	var_240_bool = 0; var_241_object = Obj(); // 0x298 PushV
	var_241_object = var_0_bool; // 0x299 MovT
	func_1397(var_240_bool, var_241_object); // 0x29a NEW_2
	var_242_bool = var_240_bool == 0; // 0x29c Not
	if(var_242_bool == 0) goto Label_671; // 0x29d JumpB
	goto Label_756; // 0x29e Jump
	
Label_671:
	rand(var_47_float); // 0x29f Func
	var_243_bool = 0; // 0x2a1 PushV
	var_243_bool = 1; // 0x2a2 MovB
	var_244_float = 0.6; // 0x2a3 PushF
	var_245_bool = var_47_float < var_244_float; // 0x2a4 LT
	if(var_245_bool == 0) goto Label_683; // 0x2a5 JumpB
	var_246_bool = 0; // 0x2a6 PushV
	func_1143(var_243_bool, var_246_bool); // 0x2a7 NEW_2
	if(var_246_bool == 0) goto Label_683; // 0x2a9 JumpB
	var_243_bool = 0; // 0x2aa MovB
	
Label_683:
	if(var_243_bool == 0) goto Label_700; // 0x2ab JumpB
	Face(var_0_bool); // 0x2ac Func
	func_1193(); // 0x2af NEW_2
	var_281_string = "all"; // 0x2b1 PushS
	var_282_string = "attack_stay"; // 0x2b2 PushS
	PlayAnimation(var_281_string, var_282_string); // 0x2b3 Func
	var_283_bool = 0; var_284_float = 0; // 0x2b5 PushV
	var_284_float = var_25_float; // 0x2b6 Mov
	func_1011(var_47_float, var_283_bool, var_284_float); // 0x2b7 NEW_2
	StopAsync(); // 0x2b9 Func
	goto Label_746; // 0x2bb Jump
	
Label_746:
	goto Label_755; // 0x2ea Jump
	
Label_700:
	Face(var_0_bool); // 0x2bc Func
	var_570_string = "all"; // 0x2be PushS
	var_571_string = "fjump"; // 0x2bf PushS
	PlayAnimation(var_570_string, var_571_string); // 0x2c0 Func
	WaitForAnimEnd(); // 0x2c2 Func
	func_1186(var_47_float); // 0x2c5 NEW_2
	var_572_cvector = CVector(0.0, 0.0, 0.0); // 0x2c7 PushVec
	SetSpeed(var_572_cvector); // 0x2c8 Func
	Stop(); // 0x2ca Func
	StopAsync(); // 0x2cc Func
	var_573_bool = 0; // 0x2ce PushV
	func_1143(var_47_float, var_573_bool); // 0x2cf NEW_2
	var_574_bool = var_573_bool == 0; // 0x2d1 Not
	if(var_574_bool == 0) goto Label_746; // 0x2d2 JumpB
	var_575_bool = 0; var_576_object = Obj(); // 0x2d3 PushV
	var_576_object = var_0_bool; // 0x2d4 MovT
	func_1397(var_575_bool, var_576_object); // 0x2d5 NEW_2
	var_577_bool = var_575_bool == 0; // 0x2d7 Not
	if(var_577_bool == 0) goto Label_730; // 0x2d8 JumpB
	goto Label_756; // 0x2d9 Jump
	
Label_730:
	GetPFPosition(var_38_cvector); // 0x2da TObjFunc
	GetPFPosition(var_39_cvector); // 0x2dc Func
	var_43_cvector = var_38_cvector - var_39_cvector; // 0x2de Sub2
	var_44_float = var_43_cvector | var_43_cvector; // 0x2df Or2
	var_578_float = var_25_float * var_25_float; // 0x2e0 Mult
	var_579_bool = var_44_float < var_578_float; // 0x2e1 LT
	if(var_579_bool == 0) goto Label_746; // 0x2e2 JumpB
	var_580_bool = 0; var_581_float = 0; // 0x2e3 PushV
	var_581_float = var_25_float; // 0x2e4 Mov
	func_847(var_47_float, var_580_bool, var_581_float); // 0x2e5 NEW_2
	var_582_bool = var_580_bool == 0; // 0x2e7 Not
	if(var_582_bool == 0) goto Label_746; // 0x2e8 JumpB
	goto Label_756; // 0x2e9 Jump
	
Label_747:
	var_583_bool = 0; var_584_float = 0; // 0x2eb PushV
	var_584_float = var_25_float; // 0x2ec Mov
	func_847(var_47_float, var_583_bool, var_584_float); // 0x2ed NEW_2
	var_585_bool = var_583_bool == 0; // 0x2ef Not
	if(var_585_bool == 0) goto Label_754; // 0x2f0 JumpB
	goto Label_756; // 0x2f1 Jump
	
Label_754:
	var_41_bool = 1; // 0x2f2 MovB
	
Label_581:
	var_41_bool = 1; // 0x245 MovB
	
Label_558:
	var_37_float = var_25_float; // 0x22e Mov
}


func_1569(var_94_string, var_95_int, var_96_int)
{
	var_97_bool = 0; var_98_bool = 0; // 0x621 PushV
	var_99_bool = 0; var_100_int = 0; var_101_int = 0; // 0x622 PushV
	var_100_int = var_95_int; // 0x623 Mov
	var_101_int = var_96_int; // 0x624 Mov
	func_1660(var_99_bool, var_100_int, var_101_int); // 0x625 NEW_2
	if(var_99_bool == 0) goto Label_1579; // 0x627 JumpB
	var_104_int = 0; // 0x628 PushI
	AddItem(var_98_bool, var_94_string, var_104_int); // 0x629 Func
	
Label_1579:
	return 2; // 0x62b Return
}


func_418(var_195_string)
{
	var_195_string = "walk"; // 0x1a2 MovS
	return 0; // 0x1a3 Return
}


func_1186(var_0_bool)
{
	var_119_object = Obj(); // 0x4a2 PushV
	var_119_object = var_0_bool; // 0x4a3 MovT
	func_1729(var_119_object); // 0x4a4 NEW_2
	return 0; // 0x4a6 Return
}


func_420(var_196_string)
{
	var_196_string = "run"; // 0x1a4 MovS
	return 0; // 0x1a5 Return
}


func_37(var_136_object)
{
	var_137_cvector = CVector(0,0,0); var_138_cvector = CVector(0,0,0); var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0); var_141_string = ""; var_142_object = Obj(); var_143_bool = 0; var_144_bool = 0; var_145_float = 0; var_146_cvector = CVector(0,0,0); var_147_cvector = CVector(0,0,0); var_148_cvector = CVector(0,0,0); var_149_cvector = CVector(0,0,0); var_150_cvector = CVector(0,0,0); var_151_string = ""; var_152_object = Obj(); var_153_bool = 0; var_154_bool = 0; var_155_float = 0; var_156_cvector = CVector(0,0,0); // 0x25 PushV
	var_157_bool = var_136_object == 0; // 0x26 NullEq
	if(var_157_bool == 0) goto Label_45; // 0x27 JumpB
	var_158_string = ""; // 0x28 PushV
	var_158_string = "fdie"; // 0x29 MovS
	func_128(var_158_string); // 0x2a NEW_2
	goto Label_127; // 0x2c Jump
	
Label_127:
	return 20; // 0x7f Return
	
Label_45:
	GetPosition(var_147_cvector); // 0x2d ObjFunc
	GetPosition(var_148_cvector); // 0x2f Func
	GetDirection(var_149_cvector); // 0x31 Func
	var_150_cvector = var_148_cvector - var_147_cvector; // 0x33 Sub2
	var_190_float = GetByIndex(var_150_cvector, 0); // 0x34 PushE
	var_191_float = GetByIndex(var_149_cvector, 0); // 0x35 PushE
	var_192_float = var_190_float * var_191_float; // 0x36 Mult
	var_193_float = GetByIndex(var_150_cvector, 2); // 0x37 PushE
	var_194_float = GetByIndex(var_149_cvector, 2); // 0x38 PushE
	var_195_float = var_193_float * var_194_float; // 0x39 Mult
	var_196_int = var_192_float + var_195_float; // 0x3a Add
	var_197_int = 0; // 0x3b PushI
	var_198_bool = var_196_int >= var_197_int; // 0x3c GE
	if(var_198_bool == 0) goto Label_64; // 0x3d JumpB
	var_151_string = "fdie"; // 0x3e MovS
	goto Label_65; // 0x3f Jump
	
Label_65:
	RemoveRTEnvelope(); // 0x41 Func
	SetDeathState(); // 0x43 Func
	Stop(); // 0x45 Func
	StopAsync(); // 0x47 Func
	var_152_object = var_136_object; // 0x49 Mov
	var_199_string = "GetScriptProperty"; // 0x4a PushS
	var_200_int = 2; // 0x4b PushI
	var_201_bool = IsFuncExist(var_136_object, var_199_string, var_200_int); // 0x4c FuncExist
	if(var_201_bool == 0) goto Label_89; // 0x4d JumpB
	var_202_string = "Owner"; // 0x4e PushS
	HasScriptProperty(var_153_bool, var_202_string); // 0x4f ObjFunc
	var_203_bool = var_153_bool; // 0x51 Push
	if(var_203_bool == 0) goto Label_89; // 0x52 JumpB
	var_204_string = "Owner"; // 0x53 PushS
	GetScriptProperty(var_152_object, var_204_string); // 0x54 ObjFunc
	var_205_bool = var_152_object == 0; // 0x56 NullEq
	if(var_205_bool == 0) goto Label_89; // 0x57 JumpB
	var_152_object = var_136_object; // 0x58 Mov
	
Label_89:
	var_206_string = "@GetEyesHeight"; // 0x59 PushS
	var_207_int = 1; // 0x5a PushI
	var_208_bool = IsFuncExist(var_152_object, var_206_string, var_207_int); // 0x5b FuncExist
	if(var_208_bool == 0) goto Label_104; // 0x5c JumpB
	GetEyesHeight(var_155_float); // 0x5d ObjFunc
	var_156_cvector = CVector(0.0, 0.0, 0.0); // 0x5f MovV
	var_209_float = GetByIndex(var_156_cvector, 1); // 0x60 PushE
	var_209_float = var_155_float; // 0x61 Mov
	SetByIndex(var_156_cvector, 1) = var_209_float; // 0x62 PopE
	var_210_string = "head"; // 0x63 PushS
	LookAsync(var_136_object, var_210_string, var_156_cvector); // 0x64 Func
	var_154_bool = 1; // 0x66 MovB
	goto Label_105; // 0x67 Jump
	
Label_105:
	var_211_string = ""; // 0x69 PushV
	var_211_string = var_151_string; // 0x6a Mov
	func_1580(var_211_string); // 0x6b NEW_2
	var_212_string = "all"; // 0x6d PushS
	PlayAnimation(var_212_string, var_151_string); // 0x6e Func
	WaitForAnimEnd(); // 0x70 Func
	var_213_bool = var_154_bool; // 0x72 Push
	if(var_213_bool == 0) goto Label_121; // 0x73 JumpB
	StopAsync(); // 0x74 Func
	var_214_string = "head"; // 0x76 PushS
	UnlookAsync(var_214_string); // 0x77 Func
	
Label_121:
	var_215_string = "all"; // 0x79 PushS
	LockAnimationEnd(var_215_string, var_151_string); // 0x7a Func
	RemoveEnvelope(); // 0x7c Func
	var_152_object = 0; // 0x7e SetNull
	
Label_104:
	var_154_bool = 0; // 0x68 MovB
	
Label_64:
	var_151_string = "bdie"; // 0x40 MovS
}


func_166(var_2_bool, var_126_bool, var_127_object, var_128_float, var_129_float, var_130_bool, var_131_bool)
{
	var_135_bool = 0; var_136_bool = 0; var_137_bool = 0; var_138_bool = 0; // 0xa6 PushV
	var_139_object = Obj(); // 0xa7 PushV
	var_139_object = var_127_object; // 0xa8 Mov
	func_1729(var_139_object); // 0xa9 NEW_2
	var_140_int = 1; // 0xab PushI
	var_141_int = 5; // 0xac PushI
	SetTimer(var_140_int, var_141_int); // 0xad Func
	CanSee(var_137_bool, var_127_object); // 0xaf Func
	var_142_bool = var_137_bool; // 0xb1 Push
	if(var_142_bool == 0) goto Label_185; // 0xb2 JumpB
	var_2_bool = 1; // 0xb3 TMovB
	var_143_object = Obj(); // 0xb4 PushV
	var_143_object = var_127_object; // 0xb5 Mov
	func_1558(var_143_object); // 0xb6 NEW_2
	goto Label_186; // 0xb8 Jump
	
Label_186:
	var_150_bool = 0; var_151_object = Obj(); // 0xba PushV
	var_151_object = var_127_object; // 0xbb Mov
	func_1244(var_150_bool, var_151_object); // 0xbc NEW_2
	if(var_150_bool == 0) goto Label_196; // 0xbe JumpB
	var_154_object = Obj(); // 0xbf PushV
	func_1621(var_154_object); // 0xc0 NEW_2
	SendPlayerEnemy(var_127_object, var_154_object); // 0xc2 Func
	
Label_196:
	var_155_bool = 0; var_156_object = Obj(); var_157_float = 0; var_158_float = 0; var_159_bool = 0; var_160_bool = 0; // 0xc4 PushV
	var_156_object = var_127_object; // 0xc5 Mov
	var_157_float = var_128_float; // 0xc6 Mov
	var_158_float = var_129_float; // 0xc7 Mov
	var_159_bool = var_130_bool; // 0xc8 Mov
	var_160_bool = var_131_bool; // 0xc9 Mov
	func_271(var_137_bool, var_138_bool, var_155_bool, var_156_object, var_157_float, var_158_float, var_159_bool, var_160_bool); // 0xca NEW_2
	var_138_bool = var_155_bool; // 0xcb Mov
	var_206_bool = var_2_bool; // 0xcd PushT
	if(var_206_bool == 0) goto Label_210; // 0xce JumpB
	var_207_string = "head"; // 0xcf PushS
	UnlookAsync(var_207_string); // 0xd0 Func
	
Label_210:
	var_208_int = 1; // 0xd2 PushI
	KillTimer(var_208_int); // 0xd3 Func
	var_126_bool = var_138_bool; // 0xd5 Mov
	return 4; // 0xd6 Return
	
Label_185:
	var_2_bool = 0; // 0xb9 TMovB
}


func_1191(var_456_int)
{
	var_456_int = 0; // 0x4a7 MovI
	return 0; // 0x4a8 Return
}


func_808(var_0_bool, var_381_float, var_382_int)
{
	var_383_object = Obj(); var_384_float = 0; var_385_float = 0; var_386_object = Obj(); var_387_float = 0; var_388_float = 0; // 0x328 PushV
	var_389_float = 0.9; // 0x329 PushF
	var_390_float = var_381_float * var_389_float; // 0x32a Mult
	GetVictim(var_390_float, var_386_object); // 0x32b Func
	ReportAttack(var_0_bool); // 0x32d Func
	var_391_bool = var_386_object == var_0_bool; // 0x32f Eq
	if(var_391_bool == 0) goto Label_845; // 0x330 JumpB
	var_392_float = 0; var_393_object = Obj(); var_394_int = 0; // 0x331 PushV
	var_393_object = var_386_object; // 0x332 Mov
	var_394_int = var_382_int; // 0x333 Mov
	func_430(var_394_int); // 0x334 NEW_2
	var_387_float = var_392_float; // 0x335 Mov
	var_395_float = 0; var_396_object = Obj(); var_397_float = 0; var_398_int = 0; // 0x337 PushV
	var_396_object = var_386_object; // 0x338 Mov
	var_397_float = var_387_float; // 0x339 Mov
	var_399_int = 0; var_400_object = Obj(); var_401_int = 0; // 0x33a PushV
	var_400_object = var_386_object; // 0x33b Mov
	var_401_int = var_382_int; // 0x33c Mov
	func_433(var_401_int); // 0x33d NEW_2
	var_398_int = var_399_int; // 0x33e Mov
	func_1283(var_395_float, var_396_object, var_397_float, var_398_int); // 0x340 NEW_2
	var_388_float = var_395_float; // 0x341 Mov
	var_456_int = 0; // 0x343 PushV
	func_1191(var_456_int); // 0x344 NEW_2
	ReportHit(var_0_bool, var_456_int, var_388_float, var_387_float); // 0x346 Func
	var_457_object = Obj(); var_458_float = 0; // 0x348 PushV
	var_457_object = var_386_object; // 0x349 Mov
	var_458_float = var_388_float; // 0x34a Mov
	func_1198(); // 0x34b NEW_2
	
Label_845:
	return 6; // 0x34d Return
}


func_1193()
{
	var_252_string = ""; // 0x4a9 PushV
	var_252_string = "attack_stay"; // 0x4aa MovS
	func_1580(var_252_string); // 0x4ab NEW_2
	return 0; // 0x4ad Return
}


func_422(var_14_object, var_15_bool)
{
	var_23_object = Obj(); var_24_bool = 0; var_25_float = 0; // 0x1a7 PushV
	var_23_object = var_14_object; // 0x1a8 Mov
	var_24_bool = var_15_bool; // 0x1a9 Mov
	var_25_float = 180.0; // 0x1aa MovF
	func_544(var_20_float, var_21_int, var_22_bool, var_14_object, var_15_bool, var_23_object, var_24_bool, var_25_float); // 0x1ab NEW_2
	return 0; // 0x1ad Return
}


func_1700(var_451_float)
{
	var_452_object = Obj(); var_453_object = Obj(); // 0x6a4 PushV
	CreateFloatVector(var_453_object); // 0x6a5 Func
	add(var_451_float); // 0x6a7 ObjFunc
	var_454_int = 15; // 0x6a9 PushI
	SendWorldWndMessage(var_454_int, var_453_object); // 0x6aa Func
	return 2; // 0x6ac Return
}


func_1580(var_159_string)
{
	var_160_bool = 0; var_161_int = 0; var_162_bool = 0; var_163_int = 0; var_164_bool = 0; var_165_float = 0; var_166_cvector = CVector(0,0,0); var_167_cvector = CVector(0,0,0); var_168_bool = 0; var_169_int = 0; var_170_bool = 0; var_171_int = 0; var_172_bool = 0; var_173_float = 0; var_174_cvector = CVector(0,0,0); var_175_cvector = CVector(0,0,0); // 0x62c PushV
	IsExisting3DSound(var_168_bool, var_159_string); // 0x62d Func
	var_176_bool = var_168_bool == 0; // 0x62f Not
	if(var_176_bool == 0) goto Label_1605; // 0x630 JumpB
	var_169_int = 0; // 0x631 MovI
	
Label_1586:
	var_177_int = 1; // 0x632 PushI
	var_178_int = var_169_int + var_177_int; // 0x633 Add
	var_179_int = var_159_string + var_178_int; // 0x634 Add
	IsExisting3DSound(var_170_bool, var_179_int); // 0x635 Func
	var_180_bool = var_170_bool == 0; // 0x637 Not
	if(var_180_bool == 0) goto Label_1594; // 0x638 JumpB
	goto Label_1597; // 0x639 Jump
	
Label_1597:
	var_181_bool = var_169_int == 0; // 0x63d Not
	if(var_181_bool == 0) goto Label_1600; // 0x63e JumpB
	return 16; // 0x63f Return
	
Label_1600:
	irand(var_171_int, var_169_int); // 0x640 Func
	var_182_int = 1; // 0x642 PushI
	var_183_int = var_171_int + var_182_int; // 0x643 Add
	var_159_string = var_159_string + var_183_int; // 0x644 Add2
	
Label_1605:
	Is3DSoundLoaded(var_172_bool, var_159_string); // 0x645 Func
	var_184_bool = var_172_bool; // 0x647 Push
	if(var_184_bool == 0) goto Label_1620; // 0x648 JumpB
	GetEyesHeight(var_173_float); // 0x649 Func
	GetDirection(var_174_cvector); // 0x64b Func
	var_185_int = 50; // 0x64d PushI
	var_175_cvector = var_174_cvector * var_185_int; // 0x64e Mult2
	var_186_float = GetByIndex(var_175_cvector, 1); // 0x64f PushE
	var_186_float = var_186_float + var_173_float; // 0x650 Add2
	SetByIndex(var_175_cvector, 1) = var_186_float; // 0x651 PopE
	PlayGlobalSound(var_159_string, var_175_cvector); // 0x652 Func
	
Label_1620:
	return 16; // 0x654 Return
	
Label_1594:
	var_187_int = 1; // 0x63a PushI
	var_169_int = var_169_int + var_187_int; // 0x63b Add2
	goto Label_1586; // 0x63c Jump
}


func_1964()
{
	return 0; // 0x7ad Return
}


func_430(var_392_float)
{
	var_392_float = 0.2; // 0x1af MovF
	return 0; // 0x1b0 Return
}


func_1198()
{
	return 0; // 0x4af Return
}


func_1840()
{
	var_70_int = 0; var_71_bool = 0; var_72_int = 0; var_73_bool = 0; // 0x730 PushV
	var_74_int = 0; // 0x731 PushI
	ClearSubContainer(var_74_int); // 0x732 Func
	var_75_int = 0; var_76_int = 0; // 0x734 PushV
	var_75_int = 200; // 0x735 MovI
	var_76_int = 500; // 0x736 MovI
	func_1768(var_75_int, var_76_int); // 0x737 NEW_2
	var_94_string = ""; var_95_int = 0; var_96_int = 0; // 0x739 PushV
	var_94_string = "revolver_ammo"; // 0x73a MovS
	var_95_int = 1; // 0x73b MovI
	var_96_int = 80; // 0x73c MovI
	func_1569(var_94_string, var_95_int, var_96_int); // 0x73d NEW_2
	var_105_string = ""; var_106_int = 0; var_107_int = 0; // 0x73f PushV
	var_105_string = "samopal_ammo"; // 0x740 MovS
	var_106_int = 1; // 0x741 MovI
	var_107_int = 80; // 0x742 MovI
	func_1569(var_105_string, var_106_int, var_107_int); // 0x743 NEW_2
	var_108_string = ""; var_109_int = 0; var_110_int = 0; // 0x745 PushV
	var_108_string = "rifle_ammo"; // 0x746 MovS
	var_109_int = 1; // 0x747 MovI
	var_110_int = 80; // 0x748 MovI
	func_1569(var_108_string, var_109_int, var_110_int); // 0x749 NEW_2
	var_111_string = ""; var_112_int = 0; var_113_int = 0; // 0x74b PushV
	var_111_string = "lockpick"; // 0x74c MovS
	var_112_int = 1; // 0x74d MovI
	var_113_int = 80; // 0x74e MovI
	func_1569(var_111_string, var_112_int, var_113_int); // 0x74f NEW_2
	var_114_int = 0; var_115_string = ""; // 0x751 PushV
	var_115_string = "hunter_mark"; // 0x752 MovS
	func_1882(var_114_int, var_115_string); // 0x753 NEW_2
	var_116_int = 0; // 0x755 PushI
	var_117_int = 1; // 0x756 PushI
	AddItem(var_73_bool, var_114_int, var_116_int, var_117_int); // 0x757 Func
	return 4; // 0x759 Return
}


func_433(var_399_int)
{
	var_399_int = 0; // 0x1b2 MovI
	return 0; // 0x1b3 Return
}


func_1202(var_372_float)
{
	var_372_float = 0.5; // 0x4b2 MovF
	return 0; // 0x4b3 Return
}


func_1200(var_377_int)
{
	var_377_int = 1; // 0x4b0 MovI
	return 0; // 0x4b1 Return
}


func_1710(var_38_float)
{
	var_39_object = Obj(); var_40_object = Obj(); // 0x6ae PushV
	CreateFloatVector(var_40_object); // 0x6af Func
	add(var_38_float); // 0x6b1 ObjFunc
	var_41_int = 16; // 0x6b3 PushI
	SendWorldWndMessage(var_41_int, var_40_object); // 0x6b4 Func
	return 2; // 0x6b6 Return
}


func_1720(var_23_int)
{
	var_24_float = 0; var_25_float = 0; // 0x6b8 PushV
	GetGameTime(var_25_float); // 0x6b9 Func
	var_26_int = 1; // 0x6bb PushI
	var_27_int = 0; // 0x6bc PushV
	var_28_int = 24; // 0x6bd PushI
	var_27_int = var_25_float / var_25_float; // 0x6be Div2
	var_23_int = var_26_int + var_27_int; // 0x6bf Add2
	return 2; // 0x6c0 Return
}


func_1465(var_14_object, var_15_int, var_16_float)
{
	var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_int = 0; var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_int = 0; var_24_int = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_int = 0; var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_int = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); // 0x5b9 PushV
	var_35_bool = 0; // 0x5ba PushV
	var_35_bool = 0; // 0x5bb MovB
	var_36_bool = 0; // 0x5bc PushV
	var_36_bool = 0; // 0x5bd MovB
	var_37_object = var_14_object; // 0x5be Push
	if(var_37_object == 0) goto Label_1476; // 0x5bf JumpB
	var_38_int = 4; // 0x5c0 PushI
	var_39_bool = var_15_int != var_38_int; // 0x5c1 Neq
	if(var_39_bool == 0) goto Label_1476; // 0x5c2 JumpB
	var_36_bool = 1; // 0x5c3 MovB
	
Label_1476:
	if(var_36_bool == 0) goto Label_1481; // 0x5c4 JumpB
	var_40_int = 5; // 0x5c5 PushI
	var_41_bool = var_15_int != var_40_int; // 0x5c6 Neq
	if(var_41_bool == 0) goto Label_1481; // 0x5c7 JumpB
	var_35_bool = 1; // 0x5c8 MovB
	
Label_1481:
	if(var_35_bool == 0) goto Label_1528; // 0x5c9 JumpB
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x5ca PushV
	var_44_cvector = CVector(0,0,0); var_45_object = Obj(); // 0x5cb PushV
	var_45_object = var_14_object; // 0x5cc Mov
	func_1237(var_45_object); // 0x5cd NEW_2
	var_43_cvector = var_44_cvector; // 0x5ce Mov
	func_1627(var_42_cvector, var_43_cvector); // 0x5d0 NEW_2
	var_26_cvector = var_42_cvector; // 0x5d1 Mov
	CreateVectorVector(var_27_object); // 0x5d3 Func
	var_28_int = 1; // 0x5d5 MovI
	
Label_1494:
	var_55_string = "hit"; // 0x5d6 PushS
	var_56_int = var_55_string + var_28_int; // 0x5d7 Add
	GetGeometryLocator(var_56_int, var_29_bool, var_30_cvector, var_31_cvector); // 0x5d8 Func
	var_57_bool = var_29_bool == 0; // 0x5da Not
	if(var_57_bool == 0) goto Label_1501; // 0x5db JumpB
	goto Label_1510; // 0x5dc Jump
	
Label_1510:
	size(var_32_int); // 0x5e6 ObjFunc
	var_58_int = var_32_int; // 0x5e8 Push
	if(var_58_int == 0) goto Label_1527; // 0x5e9 JumpB
	irand(var_33_int, var_32_int); // 0x5ea Func
	get(var_34_cvector, var_33_int); // 0x5ec ObjFunc
	var_59_object = Obj(); var_60_int = 0; var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0x5ee PushV
	var_59_object = var_14_object; // 0x5ef Mov
	var_60_int = var_15_int; // 0x5f0 Mov
	var_61_float = var_16_float; // 0x5f1 Mov
	var_62_cvector = var_34_cvector; // 0x5f2 Mov
	var_63_cvector = -var_26_cvector; // 0x5f3 Neg2
	func_1533(var_61_float, var_62_cvector, var_63_cvector); // 0x5f4 NEW_2
	return 18; // 0x5f6 Return
	
Label_1527:
	var_27_object = 0; // 0x5f7 SetNull
	
Label_1528:
	var_104_object = Obj(); // 0x5f8 PushV
	var_104_object = var_14_object; // 0x5f9 Mov
	func_1421(var_104_object); // 0x5fa NEW_2
	return 18; // 0x5fc Return
	
Label_1501:
	var_105_int = var_31_cvector | var_26_cvector; // 0x5dd Or
	var_106_float = 0.70711; // 0x5de PushF
	var_107_bool = var_105_int >= var_106_float; // 0x5df GE
	if(var_107_bool == 0) goto Label_1507; // 0x5e0 JumpB
	add(var_30_cvector); // 0x5e1 ObjFunc
	
Label_1507:
	var_108_int = 1; // 0x5e3 PushI
	var_28_int = var_28_int + var_108_int; // 0x5e4 Add2
	goto Label_1494; // 0x5e5 Jump
}


func_442(var_0_bool, var_6_bool, var_481_bool)
{
	var_482_cvector = CVector(0,0,0); var_483_cvector = CVector(0,0,0); var_484_cvector = CVector(0,0,0); var_485_cvector = CVector(0,0,0); var_486_cvector = CVector(0,0,0); var_487_cvector = CVector(0,0,0); var_488_float = 0; var_489_float = 0; var_490_cvector = CVector(0,0,0); var_491_float = 0; var_492_int = 0; var_493_cvector = CVector(0,0,0); var_494_cvector = CVector(0,0,0); var_495_cvector = CVector(0,0,0); var_496_cvector = CVector(0,0,0); var_497_cvector = CVector(0,0,0); var_498_cvector = CVector(0,0,0); var_499_float = 0; var_500_float = 0; var_501_cvector = CVector(0,0,0); var_502_float = 0; var_503_int = 0; // 0x1ba PushV
	var_504_bool = 0; // 0x1bb PushV
	var_504_bool = 0; // 0x1bc MovB
	var_505_bool = 0; var_506_object = Obj(); // 0x1bd PushV
	var_506_object = var_0_bool; // 0x1be MovT
	func_1397(var_505_bool, var_506_object); // 0x1bf NEW_2
	if(var_505_bool == 0) goto Label_456; // 0x1c1 JumpB
	var_507_bool = 0; var_508_float = 0; // 0x1c2 PushV
	var_508_float = 0.5; // 0x1c3 MovF
	func_1655(var_507_bool, var_508_float); // 0x1c4 NEW_2
	if(var_507_bool == 0) goto Label_456; // 0x1c6 JumpB
	var_504_bool = 1; // 0x1c7 MovB
	
Label_456:
	if(var_504_bool == 0) goto Label_542; // 0x1c8 JumpB
	GetPosition(var_493_cvector); // 0x1c9 Func
	GetPosition(var_494_cvector); // 0x1cb TObjFunc
	GetDirection(var_495_cvector); // 0x1cd Func
	var_511_cvector = CVector(0,0,0); var_512_cvector = CVector(0,0,0); // 0x1cf PushV
	var_512_cvector = var_493_cvector - var_494_cvector; // 0x1d0 Sub2
	func_1627(var_511_cvector, var_512_cvector); // 0x1d1 NEW_2
	var_496_cvector = var_511_cvector; // 0x1d2 Mov
	var_518_string = "all"; // 0x1d4 PushS
	var_519_string = "jump1"; // 0x1d5 PushS
	GetAnimationOffset(var_497_cvector, var_518_string, var_519_string); // 0x1d6 Func
	var_520_string = "all"; // 0x1d8 PushS
	var_521_string = "jump2"; // 0x1d9 PushS
	GetAnimationOffset(var_498_cvector, var_520_string, var_521_string); // 0x1da Func
	var_522_float = GetByIndex(var_497_cvector, 2); // 0x1dc PushE
	var_523_float = GetByIndex(var_498_cvector, 2); // 0x1dd PushE
	var_524_bool = var_522_float < var_523_float; // 0x1de LT
	if(var_524_bool == 0) goto Label_485; // 0x1df JumpB
	var_525_float = GetByIndex(var_498_cvector, 2); // 0x1e0 PushE
	var_499_float = -var_525_float; // 0x1e1 Neg2
	var_526_float = GetByIndex(var_497_cvector, 2); // 0x1e2 PushE
	var_500_float = -var_526_float; // 0x1e3 Neg2
	goto Label_489; // 0x1e4 Jump
	
Label_489:
	var_527_float = 0.17453; // 0x1e9 PushF
	var_528_int = 6; // 0x1ea PushI
	var_529_int = 3; // 0x1eb PushI
	var_530_float = var_500_float * var_529_int; // 0x1ec Mult
	FindLongestDir(var_501_cvector, var_502_float, var_496_cvector, var_527_float, var_528_int, var_530_float); // 0x1ed Func
	var_531_bool = var_502_float < var_499_float; // 0x1ef LT
	if(var_531_bool == 0) goto Label_503; // 0x1f0 JumpB
	var_532_float = 0.5236; // 0x1f1 PushF
	var_533_int = 16; // 0x1f2 PushI
	var_534_int = 3; // 0x1f3 PushI
	var_535_float = var_500_float * var_534_int; // 0x1f4 Mult
	FindLongestDir(var_501_cvector, var_502_float, var_496_cvector, var_532_float, var_533_int, var_535_float); // 0x1f5 Func
	
Label_503:
	var_536_bool = var_502_float >= var_499_float; // 0x1f7 GE
	if(var_536_bool == 0) goto Label_542; // 0x1f8 JumpB
	StopAsync(); // 0x1f9 Func
	var_537_int = -var_501_cvector; // 0x1fb Neg
	SetDirection(var_537_int); // 0x1fc Func
	var_6_bool = 1; // 0x1fe TMovB
	var_538_bool = var_502_float >= var_500_float; // 0x1ff GE
	if(var_538_bool == 0) goto Label_524; // 0x200 JumpB
	var_539_int = 2; // 0x201 PushI
	irand(var_503_int, var_539_int); // 0x202 Func
	var_540_string = "all"; // 0x204 PushS
	var_541_string = "jump"; // 0x205 PushS
	var_542_int = 1; // 0x206 PushI
	var_543_int = var_503_int + var_542_int; // 0x207 Add
	var_544_int = var_541_string + var_543_int; // 0x208 Add
	PlayAnimation(var_540_string, var_544_int); // 0x209 Func
	goto Label_537; // 0x20b Jump
	
Label_537:
	WaitForAnimEnd(); // 0x219 Func
	var_6_bool = 0; // 0x21b TMovB
	var_481_bool = 0; // 0x21c MovB
	return 22; // 0x21d Return
	
Label_524:
	var_545_float = GetByIndex(var_497_cvector, 2); // 0x20c PushE
	var_546_int = -var_545_float; // 0x20d Neg
	var_547_bool = var_546_int <= var_502_float; // 0x20e LE
	if(var_547_bool == 0) goto Label_533; // 0x20f JumpB
	var_548_string = "all"; // 0x210 PushS
	var_549_string = "jump1"; // 0x211 PushS
	PlayAnimation(var_548_string, var_549_string); // 0x212 Func
	goto Label_537; // 0x214 Jump
	
Label_533:
	var_550_string = "all"; // 0x215 PushS
	var_551_string = "jump2"; // 0x216 PushS
	PlayAnimation(var_550_string, var_551_string); // 0x217 Func
	
Label_542:
	var_481_bool = 1; // 0x21e MovB
	return 22; // 0x21f Return
	
Label_485:
	var_552_float = GetByIndex(var_497_cvector, 2); // 0x1e5 PushE
	var_499_float = -var_552_float; // 0x1e6 Neg2
	var_553_float = GetByIndex(var_498_cvector, 2); // 0x1e7 PushE
	var_500_float = -var_553_float; // 0x1e8 Neg2
}


func_1082(var_296_bool)
{
	var_297_bool = 0; // 0x43a PushV
	var_297_bool = 0; // 0x43b MovB
	var_298_bool = 0; // 0x43c PushV
	func_1054(var_297_bool, var_298_bool); // 0x43d NEW_2
	if(var_298_bool == 0) goto Label_1093; // 0x43f JumpB
	var_315_bool = 0; // 0x440 PushV
	func_1098(var_296_bool, var_297_bool, var_315_bool); // 0x441 NEW_2
	if(var_315_bool == 0) goto Label_1093; // 0x443 JumpB
	var_297_bool = 1; // 0x444 MovB
	
Label_1093:
	if(var_297_bool == 0) goto Label_1096; // 0x445 JumpB
	var_296_bool = 1; // 0x446 MovB
	return 0; // 0x447 Return
	
Label_1096:
	var_296_bool = 0; // 0x448 MovB
	return 0; // 0x449 Return
}


func_1729(var_119_object)
{
	var_120_bool = 0; var_121_bool = 0; // 0x6c1 PushV
	IsPlayerActor(var_119_object, var_121_bool); // 0x6c2 Func
	var_122_bool = var_121_bool; // 0x6c4 Push
	if(var_122_bool == 0) goto Label_1737; // 0x6c5 JumpB
	var_123_string = "attack"; // 0x6c6 PushS
	PlayGlobalMusic(var_123_string); // 0x6c7 Func
	
Label_1737:
	return 2; // 0x6c9 Return
}


func_1223(var_423_string, var_424_int)
{
	var_425_int = 2; // 0x4c8 PushI
	var_426_bool = var_424_int == var_425_int; // 0x4c9 Eq
	if(var_426_bool == 0) goto Label_1230; // 0x4ca JumpB
	var_423_string = "fire"; // 0x4cb MovS
	return 0; // 0x4cc Return
	
Label_1230:
	var_427_int = 1; // 0x4ce PushI
	var_428_bool = var_424_int == var_427_int; // 0x4cf Eq
	if(var_428_bool == 0) goto Label_1235; // 0x4d0 JumpB
	var_423_string = "bullet"; // 0x4d1 MovS
	return 0; // 0x4d2 Return
	
Label_1235:
	var_423_string = "phys"; // 0x4d3 MovS
	return 0; // 0x4d4 Return
}


func_1738()
{
	var_356_object = Obj(); var_357_object = Obj(); // 0x6ca PushV
	GetScene(var_357_object); // 0x6cb Func
	var_358_string = "battle"; // 0x6cd PushS
	var_359_object = Obj(); // 0x6ce PushV
	func_1621(var_359_object); // 0x6cf NEW_2
	BroadcastMessage(var_358_string, var_359_object, var_357_object); // 0x6d1 Func
	return 2; // 0x6d3 Return
}


func_1098(var_0_bool, var_4_int, var_315_bool)
{
	var_316_object = Obj(); var_317_bool = 0; var_318_float = 0; var_319_cvector = CVector(0,0,0); var_320_cvector = CVector(0,0,0); var_321_object = Obj(); var_322_bool = 0; var_323_float = 0; var_324_cvector = CVector(0,0,0); var_325_cvector = CVector(0,0,0); // 0x44a PushV
	GetScene(var_321_object); // 0x44b Func
	var_322_bool = 0; // 0x44d MovB
	
Label_1102:
	var_326_cvector = CVector(0,0,0); var_327_object = Obj(); // 0x44e PushV
	var_327_object = var_0_bool; // 0x44f MovT
	func_1237(var_327_object); // 0x450 NEW_2
	var_332_int = -var_326_cvector; // 0x452 Neg
	FindDirLength(var_323_float, var_332_int, var_323_float); // 0x453 Func
	var_333_bool = var_323_float < var_4_int; // 0x455 LT
	if(var_333_bool == 0) goto Label_1112; // 0x456 JumpB
	goto Label_1140; // 0x457 Jump
	
Label_1140:
	var_315_bool = var_322_bool; // 0x474 Mov
	return 10; // 0x475 Return
	
Label_1112:
	Face(var_0_bool); // 0x458 Func
	var_334_string = "all"; // 0x45a PushS
	var_335_string = "bjump"; // 0x45b PushS
	PlayAnimation(var_334_string, var_335_string); // 0x45c Func
	GetPFPosition(var_324_cvector); // 0x45e TObjFunc
	GetPFPosition(var_325_cvector); // 0x460 Func
	WaitForAnimEnd(); // 0x462 Func
	func_1186(var_325_cvector); // 0x465 NEW_2
	StopAsync(); // 0x467 Func
	var_336_cvector = CVector(0.0, 0.0, 0.0); // 0x469 PushVec
	SetSpeed(var_336_cvector); // 0x46a Func
	var_322_bool = 1; // 0x46c MovB
	var_337_bool = 0; // 0x46d PushV
	func_1054(var_325_cvector, var_337_bool); // 0x46e NEW_2
	var_338_bool = var_337_bool == 0; // 0x470 Not
	if(var_338_bool == 0) goto Label_1139; // 0x471 JumpB
	goto Label_1140; // 0x472 Jump
	
Label_1139:
	goto Label_1102; // 0x473 Jump
}


func_1356(var_99_bool)
{
	var_101_bool = 0; var_102_bool = 0; // 0x54c PushV
	IsDead(var_102_bool); // 0x54d ObjFunc
	var_99_bool = var_102_bool; // 0x54f Mov
	return 2; // 0x550 Return
}


func_847(var_0_bool, var_344_bool, var_345_float)
{
	var_346_int = 0; var_347_bool = 0; var_348_int = 0; var_349_string = ""; var_350_int = 0; var_351_bool = 0; var_352_int = 0; var_353_string = ""; // 0x34f PushV
	func_1186(var_353_string); // 0x351 NEW_2
	irand(var_350_int, var_353_string); // 0x353 Func
	var_354_int = 1; // 0x355 PushI
	var_350_int = var_350_int + var_354_int; // 0x356 Add2
	Face(var_0_bool); // 0x357 Func
	var_355_bool = 1; // 0x359 PushB
	SetAttackState(var_355_bool); // 0x35a Func
	func_1738(); // 0x35d NEW_2
	var_360_string = "all"; // 0x35f PushS
	var_361_string = "attack_begin"; // 0x360 PushS
	var_362_int = var_361_string + var_350_int; // 0x361 Add
	PlayAnimation(var_360_string, var_362_int); // 0x362 Func
	WaitForAnimEnd(); // 0x364 Func
	func_1154(var_352_int, var_353_string); // 0x367 NEW_2
	var_378_bool = 0; var_379_object = Obj(); // 0x369 PushV
	var_379_object = var_0_bool; // 0x36a MovT
	func_1397(var_378_bool, var_379_object); // 0x36b NEW_2
	var_380_bool = var_378_bool == 0; // 0x36d Not
	if(var_380_bool == 0) goto Label_883; // 0x36e JumpB
	StopAsync(); // 0x36f Func
	var_344_bool = 0; // 0x371 MovB
	return 8; // 0x372 Return
	
Label_883:
	var_381_float = 0; var_382_int = 0; // 0x373 PushV
	var_381_float = var_345_float; // 0x374 Mov
	var_382_int = var_350_int; // 0x375 Mov
	func_808(var_353_string, var_381_float, var_382_int); // 0x376 NEW_2
	var_459_string = "all"; // 0x378 PushS
	var_460_string = "attack_middle"; // 0x379 PushS
	var_461_int = var_460_string + var_350_int; // 0x37a Add
	HasAnimation(var_351_bool, var_459_string, var_461_int); // 0x37b Func
	var_462_bool = var_351_bool; // 0x37d Push
	if(var_462_bool == 0) goto Label_964; // 0x37e JumpB
	func_1738(); // 0x380 NEW_2
	var_463_string = "all"; // 0x382 PushS
	var_464_string = "attack_middle"; // 0x383 PushS
	var_465_int = var_464_string + var_350_int; // 0x384 Add
	PlayAnimation(var_463_string, var_465_int); // 0x385 Func
	WaitForAnimEnd(); // 0x387 Func
	func_1186(var_353_string); // 0x38a NEW_2
	var_466_bool = 0; var_467_object = Obj(); // 0x38c PushV
	var_467_object = var_0_bool; // 0x38d MovT
	func_1397(var_466_bool, var_467_object); // 0x38e NEW_2
	var_468_bool = var_466_bool == 0; // 0x390 Not
	if(var_468_bool == 0) goto Label_918; // 0x391 JumpB
	StopAsync(); // 0x392 Func
	var_344_bool = 0; // 0x394 MovB
	return 8; // 0x395 Return
	
Label_918:
	var_469_float = 0; var_470_int = 0; // 0x396 PushV
	var_469_float = var_345_float; // 0x397 Mov
	var_470_int = var_350_int; // 0x398 Mov
	func_808(var_353_string, var_469_float, var_470_int); // 0x399 NEW_2
	var_352_int = 1; // 0x39b MovI
	
Label_924:
	var_471_string = "attack_middle"; // 0x39c PushS
	var_472_int = var_471_string + var_350_int; // 0x39d Add
	var_473_string = "_"; // 0x39e PushS
	var_474_int = var_472_int + var_473_string; // 0x39f Add
	var_353_string = var_474_int + var_352_int; // 0x3a0 Add2
	var_475_string = "all"; // 0x3a1 PushS
	HasAnimation(var_351_bool, var_475_string, var_353_string); // 0x3a2 Func
	var_476_bool = var_351_bool == 0; // 0x3a4 Not
	if(var_476_bool == 0) goto Label_935; // 0x3a5 JumpB
	goto Label_964; // 0x3a6 Jump
	
Label_964:
	var_477_bool = 0; // 0x3c4 PushB
	SetAttackState(var_477_bool); // 0x3c5 Func
	var_478_string = "all"; // 0x3c7 PushS
	var_479_string = "attack_end"; // 0x3c8 PushS
	var_480_int = var_479_string + var_350_int; // 0x3c9 Add
	PlayAnimation(var_478_string, var_480_int); // 0x3ca Func
	var_481_bool = 0; // 0x3cc PushV
	func_442(var_352_int, var_353_string, var_481_bool); // 0x3cd NEW_2
	if(var_481_bool == 0) goto Label_982; // 0x3cf JumpB
	var_554_bool = 0; var_555_float = 0; // 0x3d0 PushV
	var_555_float = 0.75; // 0x3d1 MovF
	func_984(var_554_bool, var_555_float); // 0x3d2 NEW_2
	StopAsync(); // 0x3d4 Func
	
Label_982:
	var_344_bool = 1; // 0x3d6 MovB
	return 8; // 0x3d7 Return
	
Label_935:
	func_1738(); // 0x3a8 NEW_2
	var_563_string = "all"; // 0x3aa PushS
	PlayAnimation(var_563_string, var_353_string); // 0x3ab Func
	WaitForAnimEnd(); // 0x3ad Func
	func_1186(var_353_string); // 0x3b0 NEW_2
	var_564_bool = 0; var_565_object = Obj(); // 0x3b2 PushV
	var_565_object = var_0_bool; // 0x3b3 MovT
	func_1397(var_564_bool, var_565_object); // 0x3b4 NEW_2
	var_566_bool = var_564_bool == 0; // 0x3b6 Not
	if(var_566_bool == 0) goto Label_956; // 0x3b7 JumpB
	StopAsync(); // 0x3b8 Func
	var_344_bool = 0; // 0x3ba MovB
	return 8; // 0x3bb Return
	
Label_956:
	var_567_float = 0; var_568_int = 0; // 0x3bc PushV
	var_567_float = var_345_float; // 0x3bd Mov
	var_568_int = var_350_int; // 0x3be Mov
	func_808(var_353_string, var_567_float, var_568_int); // 0x3bf NEW_2
	var_569_int = 1; // 0x3c1 PushI
	var_352_int = var_352_int + var_569_int; // 0x3c2 Add2
	goto Label_924; // 0x3c3 Jump
}


func_1361(var_88_bool, var_89_object)
{
	var_90_object = Obj(); var_91_object = Obj(); var_92_object = Obj(); var_93_object = Obj(); // 0x551 PushV
	var_94_bool = var_89_object == 0; // 0x552 NullEq
	if(var_94_bool == 0) goto Label_1366; // 0x553 JumpB
	var_88_bool = 0; // 0x554 MovB
	return 4; // 0x555 Return
	
Label_1366:
	var_95_bool = 0; // 0x556 PushV
	var_95_bool = 0; // 0x557 MovB
	var_96_string = "IsDead"; // 0x558 PushS
	var_97_int = 1; // 0x559 PushI
	var_98_bool = IsFuncExist(var_89_object, var_96_string, var_97_int); // 0x55a FuncExist
	if(var_98_bool == 0) goto Label_1378; // 0x55b JumpB
	var_99_bool = 0; var_100_object = Obj(); // 0x55c PushV
	var_100_object = var_89_object; // 0x55d Mov
	func_1356(var_100_object); // 0x55e NEW_2
	if(var_99_bool == 0) goto Label_1378; // 0x560 JumpB
	var_95_bool = 1; // 0x561 MovB
	
Label_1378:
	if(var_95_bool == 0) goto Label_1381; // 0x562 JumpB
	var_88_bool = 0; // 0x563 MovB
	return 4; // 0x564 Return
	
Label_1381:
	GetScene(var_92_object); // 0x565 Func
	var_103_bool = var_92_object == 0; // 0x567 NullEq
	if(var_103_bool == 0) goto Label_1387; // 0x568 JumpB
	var_88_bool = 0; // 0x569 MovB
	return 4; // 0x56a Return
	
Label_1387:
	GetScene(var_93_object); // 0x56b ObjFunc
	var_104_bool = var_92_object != var_93_object; // 0x56d Neq
	if(var_104_bool == 0) goto Label_1393; // 0x56e JumpB
	var_88_bool = 0; // 0x56f MovB
	return 4; // 0x570 Return
	
Label_1393:
	var_88_bool = 1; // 0x571 MovB
	return 4; // 0x572 Return
}


func_1621(var_78_object)
{
	var_79_object = Obj(); var_80_object = Obj(); // 0x655 PushV
	self(var_80_object); // 0x656 Func
	var_78_object = var_80_object; // 0x658 Mov
	return 2; // 0x659 Return
}


func_1237(var_44_cvector)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0x4d5 PushV
	GetPosition(var_48_cvector); // 0x4d6 Func
	GetPosition(var_49_cvector); // 0x4d8 ObjFunc
	var_44_cvector = var_49_cvector - var_48_cvector; // 0x4da Sub2
	return 4; // 0x4db Return
}


func_1749(var_17_int)
{
	var_18_int = 0; var_19_int = 0; // 0x6d5 PushV
	var_20_string = "branch"; // 0x6d6 PushS
	GetVariable(var_20_string, var_19_int); // 0x6d7 Func
	var_17_int = var_19_int; // 0x6d9 Mov
	return 2; // 0x6da Return
}


func_984(var_554_bool, var_555_float)
{
	var_556_float = 0; var_557_bool = 0; var_558_float = 0; var_559_bool = 0; // 0x3d8 PushV
	rand(var_558_float); // 0x3d9 Func
	var_560_bool = var_558_float < var_555_float; // 0x3db LT
	if(var_560_bool == 0) goto Label_1004; // 0x3dc JumpB
	
Label_989:
	IsAnimationPlaying(var_559_bool); // 0x3dd Func
	var_561_bool = var_559_bool == 0; // 0x3df Not
	if(var_561_bool == 0) goto Label_994; // 0x3e0 JumpB
	goto Label_1003; // 0x3e1 Jump
	
Label_1003:
	goto Label_1009; // 0x3eb Jump
	
Label_1009:
	var_554_bool = 0; // 0x3f1 MovB
	return 4; // 0x3f2 Return
	
Label_994:
	var_562_bool = 0; // 0x3e2 PushV
	func_1082(var_562_bool); // 0x3e3 NEW_2
	if(var_562_bool == 0) goto Label_1000; // 0x3e5 JumpB
	var_554_bool = 1; // 0x3e6 MovB
	return 4; // 0x3e7 Return
	
Label_1000:
	sync(); // 0x3e8 Func
	goto Label_989; // 0x3ea Jump
	
Label_1004:
	WaitForAnimEnd(); // 0x3ec Func
	func_1186(var_559_bool); // 0x3ef NEW_2
}


func_1143(var_0_bool, var_246_bool)
{
	var_247_bool = 0; var_248_bool = 0; // 0x477 PushV
	var_249_string = "IsAttacking"; // 0x478 PushS
	var_250_int = 1; // 0x479 PushI
	var_251_bool = IsFuncExist(var_0_bool, var_249_string, var_250_int); // 0x47a FuncExist
	if(var_251_bool == 0) goto Label_1152; // 0x47b JumpB
	IsAttacking(var_248_bool); // 0x47c TObjFunc
	var_246_bool = var_248_bool; // 0x47e Mov
	return 2; // 0x47f Return
	
Label_1152:
	var_246_bool = 0; // 0x480 MovB
	return 2; // 0x481 Return
}


func_1882(var_87_int, var_88_string)
{
	var_89_int = 0; var_90_int = 0; // 0x75a PushV
	GetInvItemByName(var_90_int, var_88_string); // 0x75b Func
	var_87_int = var_90_int; // 0x75d Mov
	return 2; // 0x75e Return
}


func_1755(var_14_object)
{
	var_15_int = 0; // 0x6dc PushV
	func_1749(var_15_int); // 0x6dd NEW_2
	var_19_int = 1; // 0x6df PushI
	var_20_bool = var_15_int == var_19_int; // 0x6e0 Eq
	if(var_20_bool == 0) goto Label_1765; // 0x6e1 JumpB
	WorkWithCorpse(var_14_object); // 0x6e2 Func
	goto Label_1767; // 0x6e4 Jump
	
Label_1767:
	return 0; // 0x6e7 Return
	
Label_1765:
	Barter(var_14_object); // 0x6e5 Func
}


func_1244(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_bool = 0; // 0x4dc PushV
	IsPlayerActor(var_13_object, var_15_bool); // 0x4dd Func
	var_12_bool = var_15_bool; // 0x4df Mov
	return 2; // 0x4e0 Return
}


func_1627(var_42_cvector, var_43_cvector)
{
	var_50_float = 0; var_51_float = 0; // 0x65b PushV
	var_52_int = var_43_cvector | var_43_cvector; // 0x65c Or
	var_51_float = sqrt(var_52_int); // 0x65d Sqrt2
	var_53_float = 0.0; // 0x65e PushF
	var_54_bool = var_51_float < var_53_float; // 0x65f LT
	if(var_54_bool == 0) goto Label_1635; // 0x660 JumpB
	var_42_cvector = CVector(0.0, 0.0, 0.0); // 0x661 MovV
	return 2; // 0x662 Return
	
Label_1635:
	var_42_cvector = var_43_cvector / var_43_cvector; // 0x663 Div2
	return 2; // 0x664 Return
}


func_1887(var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x760 PushV
	var_13_object = var_11_object; // 0x761 Mov
	func_1244(var_12_bool, var_13_object); // 0x762 NEW_2
	if(var_12_bool == 0) goto Label_1920; // 0x764 JumpB
	var_16_bool = 0; // 0x765 PushV
	var_16_bool = 0; // 0x766 MovB
	var_17_int = 0; // 0x767 PushV
	func_1749(var_17_int); // 0x768 NEW_2
	var_21_int = 2; // 0x76a PushI
	var_22_bool = var_17_int == var_21_int; // 0x76b Eq
	if(var_22_bool == 0) goto Label_1908; // 0x76c JumpB
	var_23_int = 0; // 0x76d PushV
	func_1720(var_23_int); // 0x76e NEW_2
	var_29_int = 6; // 0x770 PushI
	var_30_bool = var_23_int == var_29_int; // 0x771 Eq
	if(var_30_bool == 0) goto Label_1908; // 0x772 JumpB
	var_16_bool = 1; // 0x773 MovB
	
Label_1908:
	if(var_16_bool == 0) goto Label_1915; // 0x774 JumpB
	var_31_bool = 0; var_32_object = Obj(); var_33_float = 0; // 0x775 PushV
	var_32_object = var_11_object; // 0x776 Mov
	var_33_float = 0.1; // 0x777 MovF
	func_1665(var_31_bool, var_32_object, var_33_float); // 0x778 NEW_2
	goto Label_1920; // 0x77a Jump
	
Label_1920:
	var_69_object = Obj(); // 0x780 PushV
	var_69_object = var_11_object; // 0x781 Mov
	TaskCall(0); // 0x782 TaskCall
	func_0(var_69_object); // 0x783 NEW_2
	TaskReturn(); // 0x784 TaskReturn
	return 0; // 0x786 Return
	
Label_1915:
	var_218_bool = 0; var_219_object = Obj(); var_220_float = 0; // 0x77b PushV
	var_219_object = var_11_object; // 0x77c Mov
	var_220_float = 0.05; // 0x77d MovF
	func_1665(var_218_bool, var_219_object, var_220_float); // 0x77e NEW_2
}


func_1249(var_50_bool, var_51_object, var_52_string)
{
	var_53_bool = 0; var_54_bool = 0; // 0x4e1 PushV
	var_55_string = "HasProperty"; // 0x4e2 PushS
	var_56_int = 2; // 0x4e3 PushI
	var_57_bool = IsFuncExist(var_51_object, var_55_string, var_56_int); // 0x4e4 FuncExist
	var_58_bool = var_57_bool == 0; // 0x4e5 Not
	if(var_58_bool == 0) goto Label_1257; // 0x4e6 JumpB
	var_50_bool = 0; // 0x4e7 MovB
	return 2; // 0x4e8 Return
	
Label_1257:
	HasProperty(var_52_string, var_54_bool); // 0x4e9 ObjFunc
	var_50_bool = var_54_bool; // 0x4eb Mov
	return 2; // 0x4ec Return
}


func_229(var_2_bool)
{
	var_11_int = 1; // 0xe5 PushI
	KillTimer(var_11_int); // 0xe6 Func
	var_12_bool = var_2_bool; // 0xe8 PushT
	if(var_12_bool == 0) goto Label_238; // 0xe9 JumpB
	var_2_bool = 0; // 0xea TMovB
	var_13_string = "head"; // 0xeb PushS
	UnlookAsync(var_13_string); // 0xec Func
	
Label_238:
	func_395(var_10_bool); // 0xef NEW_2
	return 0; // 0xf1 Return
}


func_1637(var_433_float, var_434_float, var_435_float)
{
	var_438_bool = var_434_float < var_435_float; // 0x666 LT
	if(var_438_bool == 0) goto Label_1642; // 0x667 JumpB
	var_433_float = var_434_float; // 0x668 Mov
	goto Label_1643; // 0x669 Jump
	
Label_1643:
	return 0; // 0x66b Return
	
Label_1642:
	var_433_float = var_435_float; // 0x66a Mov
}


func_1768(var_75_int, var_76_int)
{
	var_77_int = 0; var_78_bool = 0; var_79_int = 0; var_80_bool = 0; // 0x6e8 PushV
	var_81_bool = var_75_int > var_76_int; // 0x6e9 GT
	if(var_81_bool == 0) goto Label_1775; // 0x6ea JumpB
	var_82_string = "GenerateMoney: iMin > iMax"; // 0x6eb PushS
	Trace(var_82_string); // 0x6ec Func
	return 4; // 0x6ee Return
	
Label_1775:
	var_79_int = 0; // 0x6ef MovI
	var_83_bool = var_75_int != var_76_int; // 0x6f0 Neq
	if(var_83_bool == 0) goto Label_1782; // 0x6f1 JumpB
	var_84_int = var_76_int - var_75_int; // 0x6f2 Sub
	irand(var_79_int, var_84_int); // 0x6f3 Func
	goto Label_1786; // 0x6f5 Jump
	
Label_1786:
	var_79_int = var_79_int + var_75_int; // 0x6fa Add2
	var_85_int = 0; // 0x6fb PushI
	var_86_bool = var_79_int == var_85_int; // 0x6fc Eq
	if(var_86_bool == 0) goto Label_1791; // 0x6fd JumpB
	return 4; // 0x6fe Return
	
Label_1791:
	var_87_int = 0; var_88_string = ""; // 0x6ff PushV
	var_88_string = "Money"; // 0x700 MovS
	func_1882(var_87_int, var_88_string); // 0x701 NEW_2
	var_91_int = 0; // 0x703 PushI
	AddItem(var_80_bool, var_87_int, var_91_int, var_79_int); // 0x704 Func
	return 4; // 0x706 Return
	
Label_1782:
	var_92_int = 0; // 0x6f6 PushI
	var_93_bool = var_75_int == var_92_int; // 0x6f7 Eq
	if(var_93_bool == 0) goto Label_1786; // 0x6f8 JumpB
	return 4; // 0x6f9 Return
}


func_1644(var_60_float, var_61_float, var_62_float, var_63_float)
{
	var_64_bool = var_61_float < var_62_float; // 0x66d LT
	if(var_64_bool == 0) goto Label_1649; // 0x66e JumpB
	var_60_float = var_62_float; // 0x66f Mov
	return 0; // 0x670 Return
	
Label_1649:
	var_65_bool = var_61_float > var_63_float; // 0x671 GT
	if(var_65_bool == 0) goto Label_1653; // 0x672 JumpB
	var_60_float = var_63_float; // 0x673 Mov
	return 0; // 0x674 Return
	
Label_1653:
	var_60_float = var_61_float; // 0x675 Mov
	return 0; // 0x676 Return
}


func_1261(var_42_bool, var_43_object, var_44_string, var_45_float, var_46_float, var_47_float)
{
	var_48_float = 0; var_49_float = 0; // 0x4ed PushV
	var_50_bool = 0; var_51_object = Obj(); var_52_string = ""; // 0x4ee PushV
	var_51_object = var_43_object; // 0x4ef Mov
	var_52_string = var_44_string; // 0x4f0 Mov
	func_1249(var_50_bool, var_51_object, var_52_string); // 0x4f1 NEW_2
	var_59_bool = var_50_bool == 0; // 0x4f3 Not
	if(var_59_bool == 0) goto Label_1271; // 0x4f4 JumpB
	var_42_bool = 0; // 0x4f5 MovB
	return 2; // 0x4f6 Return
	
Label_1271:
	GetProperty(var_44_string, var_49_float); // 0x4f7 ObjFunc
	var_60_float = 0; var_61_float = 0; var_62_float = 0; var_63_float = 0; // 0x4f9 PushV
	var_61_float = var_49_float + var_45_float; // 0x4fa Add2
	var_62_float = var_46_float; // 0x4fb Mov
	var_63_float = var_47_float; // 0x4fc Mov
	func_1644(var_60_float, var_61_float, var_62_float, var_63_float); // 0x4fd NEW_2
	SetProperty(var_44_string, var_60_float); // 0x4ff ObjFunc
	var_42_bool = 1; // 0x501 MovB
	return 2; // 0x502 Return
}


func_1011(var_0_bool, var_283_bool, var_284_float)
{
	var_285_bool = 0; var_286_cvector = CVector(0,0,0); var_287_cvector = CVector(0,0,0); var_288_cvector = CVector(0,0,0); var_289_float = 0; var_290_bool = 0; var_291_cvector = CVector(0,0,0); var_292_cvector = CVector(0,0,0); var_293_cvector = CVector(0,0,0); var_294_float = 0; // 0x3f3 PushV
	
Label_1012:
	IsAnimationPlaying(var_290_bool); // 0x3f4 Func
	var_295_bool = var_290_bool == 0; // 0x3f6 Not
	if(var_295_bool == 0) goto Label_1017; // 0x3f7 JumpB
	goto Label_1049; // 0x3f8 Jump
	
Label_1049:
	func_1186(var_294_float); // 0x41a NEW_2
	var_283_bool = 0; // 0x41c MovB
	return 10; // 0x41d Return
	
Label_1017:
	var_296_bool = 0; // 0x3f9 PushV
	func_1082(var_296_bool); // 0x3fa NEW_2
	if(var_296_bool == 0) goto Label_1023; // 0x3fc JumpB
	var_283_bool = 1; // 0x3fd MovB
	return 10; // 0x3fe Return
	
Label_1023:
	var_339_bool = 0; var_340_object = Obj(); // 0x3ff PushV
	var_340_object = var_0_bool; // 0x400 MovT
	func_1397(var_339_bool, var_340_object); // 0x401 NEW_2
	var_341_bool = var_339_bool == 0; // 0x403 Not
	if(var_341_bool == 0) goto Label_1031; // 0x404 JumpB
	var_283_bool = 0; // 0x405 MovB
	return 10; // 0x406 Return
	
Label_1031:
	GetPFPosition(var_291_cvector); // 0x407 TObjFunc
	GetPFPosition(var_292_cvector); // 0x409 Func
	var_293_cvector = var_291_cvector - var_292_cvector; // 0x40b Sub2
	var_294_float = var_293_cvector | var_293_cvector; // 0x40c Or2
	var_342_float = var_284_float * var_284_float; // 0x40d Mult
	var_343_bool = var_294_float < var_342_float; // 0x40e LT
	if(var_343_bool == 0) goto Label_1046; // 0x40f JumpB
	var_344_bool = 0; var_345_float = 0; // 0x410 PushV
	var_345_float = var_284_float; // 0x411 Mov
	func_847(var_294_float, var_344_bool, var_345_float); // 0x412 NEW_2
	var_283_bool = 1; // 0x414 MovB
	return 10; // 0x415 Return
	
Label_1046:
	sync(); // 0x416 Func
	goto Label_1012; // 0x418 Jump
}


func_373(var_0_bool, var_1_object, var_18_int)
{
	var_19_int = 0; // 0x176 PushI
	var_20_bool = var_18_int != var_19_int; // 0x177 Neq
	if(var_20_bool == 0) goto Label_378; // 0x178 JumpB
	return 0; // 0x179 Return
	
Label_378:
	var_21_bool = 0; var_22_object = Obj(); // 0x17a PushV
	var_22_object = var_1_object; // 0x17b MovT
	func_411(var_21_bool, var_22_object); // 0x17c NEW_2
	var_57_bool = var_21_bool == 0; // 0x17e Not
	if(var_57_bool == 0) goto Label_385; // 0x17f JumpB
	var_0_bool = 1; // 0x180 TMovB
	
Label_385:
	var_58_int = 0; // 0x181 PushI
	KillTimer(var_58_int); // 0x182 Func
	Stop(); // 0x184 Func
	return 0; // 0x186 Return
}


func_1397(var_84_bool, var_85_object)
{
	var_86_int = 0; var_87_int = 0; // 0x575 PushV
	var_88_bool = 0; var_89_object = Obj(); // 0x576 PushV
	var_89_object = var_85_object; // 0x577 Mov
	func_1361(var_88_bool, var_89_object); // 0x578 NEW_2
	var_105_bool = var_88_bool == 0; // 0x57a Not
	if(var_105_bool == 0) goto Label_1406; // 0x57b JumpB
	var_84_bool = 0; // 0x57c MovB
	return 2; // 0x57d Return
	
Label_1406:
	var_106_bool = 0; var_107_object = Obj(); var_108_string = ""; // 0x57e PushV
	var_107_object = var_85_object; // 0x57f Mov
	var_108_string = "noaccess"; // 0x580 MovS
	func_1249(var_106_bool, var_107_object, var_108_string); // 0x581 NEW_2
	var_115_bool = var_106_bool == 0; // 0x583 Not
	if(var_115_bool == 0) goto Label_1415; // 0x584 JumpB
	var_84_bool = 1; // 0x585 MovB
	return 2; // 0x586 Return
	
Label_1415:
	var_116_string = "noaccess"; // 0x587 PushS
	GetProperty(var_116_string, var_87_int); // 0x588 ObjFunc
	var_117_int = 0; // 0x58a PushI
	var_84_bool = var_87_int == var_117_int; // 0x58b Eq2
	return 2; // 0x58c Return
}


func_1655(var_507_bool, var_508_float)
{
	var_509_float = 0; var_510_float = 0; // 0x677 PushV
	rand(var_510_float); // 0x678 Func
	var_507_bool = var_510_float < var_508_float; // 0x67a LT2
	return 2; // 0x67b Return
}


func_1660(var_99_bool, var_100_int, var_101_int)
{
	var_102_int = 0; var_103_int = 0; // 0x67c PushV
	irand(var_103_int, var_101_int); // 0x67d Func
	var_99_bool = var_103_int < var_100_int; // 0x67f LT2
	return 2; // 0x680 Return
}


func_1533(var_16_object, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); // 0x5fd PushV
	GetScene(var_23_object); // 0x5fe Func
	var_25_string = "scripted"; // 0x600 PushS
	var_26_string = "blood_dir.xml"; // 0x601 PushS
	AddActorByType(var_24_object, var_25_string, var_23_object, var_19_cvector, var_20_cvector, var_26_string); // 0x602 Func
	var_27_object = Obj(); // 0x604 PushV
	var_27_object = var_16_object; // 0x605 Mov
	func_1421(var_27_object); // 0x606 NEW_2
	return 4; // 0x608 Return
}


