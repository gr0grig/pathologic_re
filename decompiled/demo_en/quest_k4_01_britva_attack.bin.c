task_0_event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	var_9_object = Obj(); // 0x16 PushV
	func_1483(var_9_object); // 0x17 NEW_2
	RemoveActor(var_9_object); // 0x19 Func
	Hold(); // 0x1b Func
	return 0; // 0x1d Return
}


task_1_event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	var_9_object = Obj(); // 0x2b4 PushV
	func_1483(var_9_object); // 0x2b5 NEW_2
	RemoveActor(var_9_object); // 0x2b7 Func
	Hold(); // 0x2b9 Func
	return 0; // 0x2bb Return
}


task_1_event_7(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_int)
{
	var_10_int = 1; // 0x2ee PushI
	var_11_bool = var_9_int == var_10_int; // 0x2ef Eq
	if(var_11_bool == 0) goto Label_758; // 0x2f0 JumpB
	var_12_object = Obj(); // 0x2f1 PushV
	var_12_object = var_1_int; // 0x2f2 MovT
	func_1572(var_12_object); // 0x2f3 NEW_2
	goto Label_762; // 0x2f5 Jump
	
Label_762:
	return 0; // 0x2fa Return
	
Label_758:
	var_17_int = 0; // 0x2f6 PushV
	var_17_int = var_9_int; // 0x2f7 Mov
	func_907(var_8_bool, var_9_int, var_17_int); // 0x2f8 NEW_2
}


task_1_event_1(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_bool = 0; // 0x309 PushV
	var_10_bool = 0; // 0x30a MovB
	var_11_bool = var_1_int == var_9_object; // 0x30b Eq
	if(var_11_bool == 0) goto Label_784; // 0x30c JumpB
	var_12_bool = var_2_int == 0; // 0x30d Not
	if(var_12_bool == 0) goto Label_784; // 0x30e JumpB
	var_10_bool = 1; // 0x30f MovB
	
Label_784:
	if(var_10_bool == 0) goto Label_790; // 0x310 JumpB
	var_2_int = 1; // 0x311 TMovB
	var_13_object = Obj(); // 0x312 PushV
	var_13_object = var_9_object; // 0x313 Mov
	func_1431(var_13_object); // 0x314 NEW_2
	
Label_790:
	return 0; // 0x316 Return
}


task_1_event_2(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_bool = 0; // 0x318 PushV
	var_10_bool = 0; // 0x319 MovB
	var_11_bool = var_1_int == var_9_object; // 0x31a Eq
	if(var_11_bool == 0) goto Label_799; // 0x31b JumpB
	var_12_int = var_2_int; // 0x31c PushT
	if(var_12_int == 0) goto Label_799; // 0x31d JumpB
	var_10_bool = 1; // 0x31e MovB
	
Label_799:
	if(var_10_bool == 0) goto Label_804; // 0x31f JumpB
	var_2_int = 0; // 0x320 TMovB
	var_13_string = "head"; // 0x321 PushS
	UnlookAsync(var_13_string); // 0x322 Func
	
Label_804:
	return 0; // 0x324 Return
}


task_1_event_10(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	RequestClearPath(var_9_object); // 0x39e Func
	return 0; // 0x3a0 Return
}


task_1_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	func_763(var_9_object); // 0x3aa NEW_2
	var_14_object = Obj(); // 0x3ac PushV
	var_14_object = var_9_object; // 0x3ad Mov
	func_1641(); // 0x3ae NEW_2
	return 0; // 0x3b0 Return
}


task_2_event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	var_9_object = Obj(); // 0x3bc PushV
	func_1483(var_9_object); // 0x3bd NEW_2
	RemoveActor(var_9_object); // 0x3bf Func
	Hold(); // 0x3c1 Func
	return 0; // 0x3c3 Return
}


task_2_event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float)
{
	return 0; // 0x443 Return
}


task_2_event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_string)
{
	return 0; // 0x445 Return
}


task_2_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	return 0; // 0x447 Return
}


event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float)
{
	var_13_object = Obj(); var_14_int = 0; var_15_float = 0; // 0x64b PushV
	var_13_object = var_9_object; // 0x64c Mov
	var_14_int = var_10_int; // 0x64d Mov
	var_15_float = var_11_float; // 0x64e Mov
	func_1338(var_13_object, var_14_int, var_15_float); // 0x64f NEW_2
	return 0; // 0x651 Return
}


event_43(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float, var_13_cvector, var_14_cvector)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); // 0x653 PushV
	var_15_object = var_9_object; // 0x654 Mov
	var_16_int = var_10_int; // 0x655 Mov
	var_17_float = var_11_float; // 0x656 Mov
	var_18_cvector = var_13_cvector; // 0x657 Mov
	var_19_cvector = var_14_cvector; // 0x658 Mov
	func_1406(var_17_float, var_18_cvector, var_19_cvector); // 0x659 NEW_2
	return 0; // 0x65b Return
}


event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_string)
{
	var_11_float = 0; var_12_float = 0; // 0x65c PushV
	var_13_string = "health"; // 0x65d PushS
	var_14_bool = var_10_string == var_13_string; // 0x65e Eq
	if(var_14_bool == 0) goto Label_1640; // 0x65f JumpB
	var_15_string = "health"; // 0x660 PushS
	GetProperty(var_15_string, var_12_float); // 0x661 Func
	var_16_int = 0; // 0x663 PushI
	var_17_bool = var_12_float <= var_16_int; // 0x664 LE
	if(var_17_bool == 0) goto Label_1640; // 0x665 JumpB
	SignalDeath(var_9_object); // 0x666 Func
	
Label_1640:
	return 2; // 0x668 Return
}


event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_object = Obj(); // 0x66a PushV
	var_10_object = var_9_object; // 0x66b Mov
	func_1592(var_10_object); // 0x66c NEW_2
	return 0; // 0x66e Return
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	func_4(); // 0x1 NEW_2
	return 0; // 0x3 Return
}


func_640(var_2_int, var_5_int)
{
	var_352_float = 0; var_353_int = 0; var_354_float = 0; var_355_int = 0; // 0x280 PushV
	var_356_bool = var_2_int == 0; // 0x281 Not
	if(var_356_bool == 0) goto Label_644; // 0x282 JumpB
	return 4; // 0x283 Return
	
Label_644:
	var_357_int = var_5_int; // 0x284 PushT
	if(var_357_int == 0) goto Label_652; // 0x285 JumpB
	var_358_int = -1; // 0x286 PushI
	var_5_int = var_5_int + var_358_int; // 0x287 Add2
	var_359_int = 0; // 0x288 PushI
	var_360_bool = var_5_int > var_359_int; // 0x289 GT
	if(var_360_bool == 0) goto Label_652; // 0x28a JumpB
	return 4; // 0x28b Return
	
Label_652:
	rand(var_354_float); // 0x28c Func
	var_361_float = 0; // 0x28e PushV
	func_690(var_361_float); // 0x28f NEW_2
	var_362_bool = var_354_float < var_361_float; // 0x291 LT
	if(var_362_bool == 0) goto Label_671; // 0x292 JumpB
	irand(var_355_int, var_354_float); // 0x293 Func
	var_363_int = 1; // 0x295 PushI
	var_355_int = var_355_int + var_363_int; // 0x296 Add2
	var_364_string = "attack"; // 0x297 PushS
	var_365_int = var_364_string + var_355_int; // 0x298 Add
	Speak(var_365_int); // 0x299 Func
	var_366_int = 0; // 0x29b PushV
	func_688(var_366_int); // 0x29c NEW_2
	var_5_int = var_366_int; // 0x29d TMov
	
Label_671:
	return 4; // 0x29f Return
}


func_259(var_1_int, var_2_int, var_4_float)
{
	var_37_bool = 0; var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_bool = 0; var_41_bool = 0; var_42_cvector = CVector(0,0,0); // 0x103 PushV
	var_1_int = 0; // 0x104 TMovI
	
Label_261:
	var_43_string = "all"; // 0x105 PushS
	var_44_string = "attack_begin"; // 0x106 PushS
	var_45_int = 1; // 0x107 PushI
	var_46_int = var_1_int + var_45_int; // 0x108 Add
	var_47_int = var_44_string + var_46_int; // 0x109 Add
	HasAnimation(var_40_bool, var_43_string, var_47_int); // 0x10a Func
	var_48_bool = var_40_bool == 0; // 0x10c Not
	if(var_48_bool == 0) goto Label_271; // 0x10d JumpB
	goto Label_274; // 0x10e Jump
	
Label_274:
	var_2_int = 0; // 0x112 TMovI
	
Label_275:
	var_49_string = "attack"; // 0x113 PushS
	var_50_int = 1; // 0x114 PushI
	var_51_int = var_2_int + var_50_int; // 0x115 Add
	var_52_int = var_49_string + var_51_int; // 0x116 Add
	IsExisting3DSound(var_41_bool, var_52_int); // 0x117 Func
	var_53_bool = var_41_bool == 0; // 0x119 Not
	if(var_53_bool == 0) goto Label_284; // 0x11a JumpB
	goto Label_287; // 0x11b Jump
	
Label_287:
	var_54_string = "all"; // 0x11f PushS
	var_55_string = "bjump"; // 0x120 PushS
	GetAnimationOffset(var_42_cvector, var_54_string, var_55_string); // 0x121 Func
	var_56_float = GetByIndex(var_42_cvector, 2); // 0x123 PushE
	var_4_float = -var_56_float; // 0x124 Neg2
	return 6; // 0x125 Return
	
Label_284:
	var_57_int = 1; // 0x11c PushI
	var_2_int = var_2_int + var_57_int; // 0x11d Add2
	goto Label_275; // 0x11e Jump
	
Label_271:
	var_58_int = 1; // 0x10f PushI
	var_1_int = var_1_int + var_58_int; // 0x110 Add2
	goto Label_261; // 0x111 Jump
}


func_1156(var_384_float, var_385_object, var_386_float, var_387_int)
{
	var_391_int = 0; var_392_string = ""; var_393_int = 0; var_394_float = 0; var_395_float = 0; var_396_float = 0; var_397_int = 0; var_398_string = ""; var_399_int = 0; var_400_float = 0; var_401_float = 0; var_402_float = 0; // 0x484 PushV
	var_403_bool = 0; var_404_object = Obj(); var_405_string = ""; // 0x485 PushV
	var_404_object = var_385_object; // 0x486 Mov
	var_405_string = "health"; // 0x487 MovS
	func_1122(var_403_bool, var_404_object, var_405_string); // 0x488 NEW_2
	var_406_bool = var_403_bool == 0; // 0x48a Not
	if(var_406_bool == 0) goto Label_1166; // 0x48b JumpB
	var_384_float = 0.0; // 0x48c MovF
	return 12; // 0x48d Return
	
Label_1166:
	var_407_bool = 0; var_408_object = Obj(); var_409_string = ""; // 0x48e PushV
	var_408_object = var_385_object; // 0x48f Mov
	var_409_string = "armor"; // 0x490 MovS
	func_1122(var_407_bool, var_408_object, var_409_string); // 0x491 NEW_2
	var_410_bool = var_407_bool == 0; // 0x493 Not
	if(var_410_bool == 0) goto Label_1175; // 0x494 JumpB
	var_397_int = 0; // 0x495 MovI
	goto Label_1178; // 0x496 Jump
	
Label_1178:
	var_411_string = "armor_"; // 0x49a PushS
	var_412_string = ""; var_413_int = 0; // 0x49b PushV
	var_413_int = var_387_int; // 0x49c Mov
	func_1096(var_412_string, var_413_int); // 0x49d NEW_2
	var_398_string = var_411_string + var_412_string; // 0x49f Add2
	var_418_bool = 0; var_419_object = Obj(); var_420_string = ""; // 0x4a0 PushV
	var_419_object = var_385_object; // 0x4a1 Mov
	var_420_string = var_398_string; // 0x4a2 Mov
	func_1122(var_418_bool, var_419_object, var_420_string); // 0x4a3 NEW_2
	var_421_bool = var_418_bool == 0; // 0x4a5 Not
	if(var_421_bool == 0) goto Label_1193; // 0x4a6 JumpB
	var_399_int = 0; // 0x4a7 MovI
	goto Label_1195; // 0x4a8 Jump
	
Label_1195:
	var_422_float = 0; var_423_float = 0; var_424_float = 0; // 0x4ab PushV
	var_425_int = var_397_int + var_399_int; // 0x4ac Add
	var_426_float = 100.0; // 0x4ad PushF
	var_423_float = var_425_int / var_425_int; // 0x4ae Div2
	var_424_float = 1; // 0x4af MovI
	func_1499(var_422_float, var_423_float, var_424_float); // 0x4b0 NEW_2
	var_400_float = var_422_float; // 0x4b1 Mov
	var_428_string = "health"; // 0x4b3 PushS
	GetProperty(var_428_string, var_401_float); // 0x4b4 ObjFunc
	var_429_int = 1; // 0x4b6 PushI
	var_430_int = var_429_int - var_400_float; // 0x4b7 Sub
	var_402_float = var_386_float * var_430_int; // 0x4b8 Mult2
	var_431_string = "health"; // 0x4b9 PushS
	var_432_float = 0; var_433_float = 0; var_434_float = 0; var_435_float = 0; // 0x4ba PushV
	var_433_float = var_401_float - var_402_float; // 0x4bb Sub2
	var_434_float = 0; // 0x4bc MovI
	var_435_float = 1; // 0x4bd MovI
	func_1506(var_432_float, var_433_float, var_434_float, var_435_float); // 0x4be NEW_2
	SetProperty(var_431_string, var_432_float); // 0x4c0 ObjFunc
	var_438_bool = 0; var_439_object = Obj(); // 0x4c2 PushV
	var_439_object = var_385_object; // 0x4c3 Mov
	func_1117(var_438_bool, var_439_object); // 0x4c4 NEW_2
	if(var_438_bool == 0) goto Label_1227; // 0x4c6 JumpB
	var_440_float = 0; // 0x4c7 PushV
	var_440_float = -var_402_float; // 0x4c8 Neg2
	func_1552(var_440_float); // 0x4c9 NEW_2
	
Label_1227:
	var_384_float = var_402_float; // 0x4cb Mov
	return 12; // 0x4cc Return
	
Label_1193:
	GetProperty(var_398_string, var_399_int); // 0x4a9 ObjFunc
	
Label_1175:
	var_444_string = "armor"; // 0x497 PushS
	GetProperty(var_444_string, var_397_int); // 0x498 ObjFunc
}


func_4()
{
	var_9_object = Obj(); var_10_object = Obj(); // 0x4 PushV
	var_11_string = "player"; // 0x5 PushS
	FindActor(var_10_object, var_11_string); // 0x6 Func
	var_12_object = Obj(); var_13_bool = 0; var_14_float = 0; // 0x8 PushV
	var_12_object = var_10_object; // 0x9 Mov
	var_13_bool = 1; // 0xa MovB
	var_14_float = 180.0; // 0xb MovF
	func_30(var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_object, var_12_object, var_13_bool, var_14_float); // 0xc NEW_2
	return 2; // 0xe Return
}


func_907(var_0_object, var_1_int, var_17_int)
{
	var_18_int = 0; // 0x38c PushI
	var_19_bool = var_17_int != var_18_int; // 0x38d Neq
	if(var_19_bool == 0) goto Label_912; // 0x38e JumpB
	return 0; // 0x38f Return
	
Label_912:
	var_20_bool = 0; var_21_object = Obj(); // 0x390 PushV
	var_21_object = var_1_int; // 0x391 MovT
	func_945(var_20_bool, var_21_object); // 0x392 NEW_2
	var_56_bool = var_20_bool == 0; // 0x394 Not
	if(var_56_bool == 0) goto Label_919; // 0x395 JumpB
	var_0_object = 1; // 0x396 TMovB
	
Label_919:
	var_57_int = 0; // 0x397 PushI
	KillTimer(var_57_int); // 0x398 Func
	Stop(); // 0x39a Func
	return 0; // 0x39c Return
}


func_1420()
{
	var_219_cvector = CVector(0,0,0); var_220_cvector = CVector(0,0,0); var_221_cvector = CVector(0,0,0); var_222_cvector = CVector(0,0,0); var_223_cvector = CVector(0,0,0); var_224_cvector = CVector(0,0,0); // 0x58c PushV
	GetPosition(var_222_cvector); // 0x58d ObjFunc
	GetPosition(var_223_cvector); // 0x58f Func
	var_224_cvector = var_222_cvector - var_223_cvector; // 0x591 Sub2
	var_225_float = GetByIndex(var_224_cvector, 0); // 0x592 PushE
	var_226_float = GetByIndex(var_224_cvector, 2); // 0x593 PushE
	RotateAsync(var_225_float, var_226_float); // 0x594 Func
	return 6; // 0x596 Return
}


func_1294(var_26_object)
{
	var_27_bool = 0; var_28_int = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_string = ""; var_34_bool = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = ""; // 0x50e PushV
	var_41_bool = var_26_object == 0; // 0x50f NullEq
	if(var_41_bool == 0) goto Label_1298; // 0x510 JumpB
	return 14; // 0x511 Return
	
Label_1298:
	IsDead(var_34_bool); // 0x512 Func
	var_42_bool = var_34_bool; // 0x514 Push
	if(var_42_bool == 0) goto Label_1303; // 0x515 JumpB
	return 14; // 0x516 Return
	
Label_1303:
	GetSecondaryAnimationType(var_35_int); // 0x517 Func
	var_43_int = 0; // 0x519 PushI
	var_44_bool = var_35_int < var_43_int; // 0x51a LT
	if(var_44_bool == 0) goto Label_1309; // 0x51b JumpB
	return 14; // 0x51c Return
	
Label_1309:
	GetPosition(var_36_cvector); // 0x51d ObjFunc
	GetPosition(var_37_cvector); // 0x51f Func
	GetDirection(var_38_cvector); // 0x521 Func
	var_39_cvector = var_37_cvector - var_36_cvector; // 0x523 Sub2
	var_45_float = GetByIndex(var_39_cvector, 0); // 0x524 PushE
	var_46_float = GetByIndex(var_38_cvector, 0); // 0x525 PushE
	var_47_float = var_45_float * var_46_float; // 0x526 Mult
	var_48_float = GetByIndex(var_39_cvector, 2); // 0x527 PushE
	var_49_float = GetByIndex(var_38_cvector, 2); // 0x528 PushE
	var_50_float = var_48_float * var_49_float; // 0x529 Mult
	var_51_int = var_47_float + var_50_float; // 0x52a Add
	var_52_int = 0; // 0x52b PushI
	var_53_bool = var_51_int >= var_52_int; // 0x52c GE
	if(var_53_bool == 0) goto Label_1328; // 0x52d JumpB
	var_40_string = "fhit"; // 0x52e MovS
	goto Label_1329; // 0x52f Jump
	
Label_1329:
	var_54_string = "hit_react"; // 0x531 PushS
	var_55_string = "1"; // 0x532 PushS
	var_56_int = var_40_string + var_55_string; // 0x533 Add
	var_57_string = "2"; // 0x534 PushS
	var_58_int = var_40_string + var_57_string; // 0x535 Add
	var_59_int = -10; // 0x536 PushI
	FadeSecondaryAnimation(var_54_string, var_56_int, var_58_int, var_59_int); // 0x537 Func
	return 14; // 0x539 Return
	
Label_1328:
	var_40_string = "bhit"; // 0x530 MovS
}


func_16(var_381_float)
{
	var_381_float = 0.1; // 0x11 MovF
	return 0; // 0x12 Return
}


func_1552(var_440_float)
{
	var_441_object = Obj(); var_442_object = Obj(); // 0x610 PushV
	CreateFloatVector(var_442_object); // 0x611 Func
	add(var_440_float); // 0x613 ObjFunc
	var_443_int = 15; // 0x615 PushI
	SendWorldWndMessage(var_443_int, var_442_object); // 0x616 Func
	return 2; // 0x618 Return
}


func_19(var_388_int)
{
	var_388_int = 1; // 0x14 MovI
	return 0; // 0x15 Return
}


func_1431(var_132_object)
{
	var_133_float = 0; var_134_cvector = CVector(0,0,0); var_135_float = 0; var_136_cvector = CVector(0,0,0); // 0x597 PushV
	GetEyesHeight(var_135_float); // 0x598 ObjFunc
	var_136_cvector = CVector(0.0, 0.0, 0.0); // 0x59a MovV
	var_137_float = GetByIndex(var_136_cvector, 1); // 0x59b PushE
	var_137_float = var_135_float; // 0x59c Mov
	SetByIndex(var_136_cvector, 1) = var_137_float; // 0x59d PopE
	var_138_string = "head"; // 0x59e PushS
	LookAsync(var_132_object, var_138_string, var_136_cvector); // 0x59f Func
	return 4; // 0x5a1 Return
}


func_1562(var_22_float)
{
	var_23_object = Obj(); var_24_object = Obj(); // 0x61a PushV
	CreateFloatVector(var_24_object); // 0x61b Func
	add(var_22_float); // 0x61d ObjFunc
	var_25_int = 16; // 0x61f PushI
	SendWorldWndMessage(var_25_int, var_24_object); // 0x620 Func
	return 2; // 0x622 Return
}


func_540(var_0_object, var_287_bool)
{
	var_288_cvector = CVector(0,0,0); var_289_cvector = CVector(0,0,0); var_290_cvector = CVector(0,0,0); var_291_float = 0; var_292_float = 0; var_293_cvector = CVector(0,0,0); var_294_cvector = CVector(0,0,0); var_295_cvector = CVector(0,0,0); var_296_float = 0; var_297_float = 0; // 0x21c PushV
	var_298_bool = 0; var_299_object = Obj(); // 0x21d PushV
	var_299_object = var_0_object; // 0x21e MovT
	func_1270(var_298_bool, var_299_object); // 0x21f NEW_2
	var_300_bool = var_298_bool == 0; // 0x221 Not
	if(var_300_bool == 0) goto Label_549; // 0x222 JumpB
	var_287_bool = 0; // 0x223 MovB
	return 10; // 0x224 Return
	
Label_549:
	var_301_bool = 0; // 0x225 PushV
	func_629(var_297_float, var_301_bool); // 0x226 NEW_2
	if(var_301_bool == 0) goto Label_566; // 0x228 JumpB
	GetPFPosition(var_293_cvector); // 0x229 TObjFunc
	GetPFPosition(var_294_cvector); // 0x22b Func
	var_295_cvector = var_293_cvector - var_294_cvector; // 0x22d Sub2
	var_296_float = var_295_cvector | var_295_cvector; // 0x22e Or2
	GetAttackDistance(var_297_float); // 0x22f TObjFunc
	var_302_int = 50; // 0x231 PushI
	var_297_float = var_297_float + var_302_int; // 0x232 Add2
	var_303_float = var_297_float * var_297_float; // 0x233 Mult
	var_287_bool = var_296_float <= var_303_float; // 0x234 LE2
	return 10; // 0x235 Return
	
Label_566:
	var_287_bool = 0; // 0x236 MovB
	return 10; // 0x237 Return
}


func_30(var_0_object, var_3_bool, var_5_int, var_12_object, var_13_bool, var_14_float, var_121_bool, var_213_bool)
{
	var_15_float = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_bool = 0; var_19_bool = 0; var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_bool = 0; var_25_float = 0; var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_bool = 0; var_30_bool = 0; var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_float = 0; // 0x1e PushV
	func_259(var_34_cvector, var_35_bool, var_36_float); // 0x20 NEW_2
	var_5_int = 0; // 0x22 TMovI
	var_59_string = "@GetAttackDistance"; // 0x23 PushS
	var_60_int = 1; // 0x24 PushI
	var_61_bool = IsFuncExist(var_12_object, var_59_string, var_60_int); // 0x25 FuncExist
	if(var_61_bool == 0) goto Label_44; // 0x26 JumpB
	GetAttackDistance(var_26_float); // 0x27 ObjFunc
	var_62_int = 50; // 0x29 PushI
	var_26_float = var_26_float + var_62_int; // 0x2a Add2
	goto Label_45; // 0x2b Jump
	
Label_45:
	var_63_int = 150; // 0x2d PushI
	var_64_bool = var_26_float >= var_63_int; // 0x2e GE
	if(var_64_bool == 0) goto Label_49; // 0x2f JumpB
	var_26_float = 150; // 0x30 MovI
	
Label_49:
	var_3_bool = 0; // 0x31 TMovB
	var_0_object = var_12_object; // 0x32 TMov
	IsPlayerActor(var_0_object, var_29_bool); // 0x33 Func
	var_65_bool = var_29_bool; // 0x35 Push
	if(var_65_bool == 0) goto Label_63; // 0x36 JumpB
	var_66_string = "attack"; // 0x37 PushS
	PlayGlobalMusic(var_66_string); // 0x38 Func
	var_67_object = Obj(); // 0x3a PushV
	func_1483(var_67_object); // 0x3b NEW_2
	SendPlayerEnemy(var_12_object, var_67_object); // 0x3d Func
	
Label_63:
	var_70_bool = var_13_bool; // 0x3f Push
	if(var_70_bool == 0) goto Label_67; // 0x40 JumpB
	var_30_bool = 0; // 0x41 MovB
	goto Label_68; // 0x42 Jump
	
Label_68:
	var_71_float = 400.0; // 0x44 PushF
	var_31_float = var_71_float + var_26_float; // 0x45 Add2
	
Label_70:
	var_72_bool = 0; // 0x46 PushV
	var_72_bool = 0; // 0x47 MovB
	var_73_bool = 0; var_74_object = Obj(); // 0x48 PushV
	var_74_object = var_0_object; // 0x49 MovT
	func_1270(var_73_bool, var_74_object); // 0x4a NEW_2
	if(var_73_bool == 0) goto Label_80; // 0x4c JumpB
	var_107_bool = var_3_bool == 0; // 0x4d Not
	if(var_107_bool == 0) goto Label_80; // 0x4e JumpB
	var_72_bool = 1; // 0x4f MovB
	
Label_80:
	if(var_72_bool == 0) goto Label_242; // 0x50 JumpB
	func_672(var_36_float); // 0x52 NEW_2
	GetPFPosition(var_27_cvector); // 0x54 TObjFunc
	GetPFPosition(var_28_cvector); // 0x56 Func
	var_32_cvector = var_27_cvector - var_28_cvector; // 0x58 Sub2
	var_33_float = var_32_cvector | var_32_cvector; // 0x59 Or2
	var_113_float = var_31_float * var_31_float; // 0x5a Mult
	var_114_bool = var_33_float >= var_113_float; // 0x5b GE
	if(var_114_bool == 0) goto Label_108; // 0x5c JumpB
	var_115_bool = 0; var_116_object = Obj(); var_117_float = 0; var_118_float = 0; var_119_bool = 0; var_120_bool = 0; // 0x5d PushV
	var_116_object = var_0_object; // 0x5e MovT
	var_117_float = var_26_float; // 0x5f Mov
	var_118_float = 3000.0; // 0x60 MovF
	var_119_bool = 1; // 0x61 MovB
	var_120_bool = 0; // 0x62 MovB
	TaskCall(1); // 0x63 TaskCall
	func_700(var_123_bool, var_115_bool, var_116_object, var_117_float, var_118_float, var_119_bool, var_120_bool); // 0x64 NEW_2
	TaskReturn(); // 0x65 TaskReturn
	var_198_bool = var_121_bool == 0; // 0x67 Not
	if(var_198_bool == 0) goto Label_106; // 0x68 JumpB
	goto Label_242; // 0x69 Jump
	
Label_242:
	WaitForAnimEnd(); // 0xf2 Func
	var_199_bool = var_3_bool; // 0xf4 PushT
	if(var_199_bool == 0) goto Label_247; // 0xf5 JumpB
	return 22; // 0xf6 Return
	
Label_247:
	var_200_string = "all"; // 0xf7 PushS
	var_201_string = "attack_off"; // 0xf8 PushS
	PlayAnimation(var_200_string, var_201_string); // 0xf9 Func
	WaitForAnimEnd(); // 0xfb Func
	var_202_bool = var_29_bool; // 0xfd Push
	if(var_202_bool == 0) goto Label_258; // 0xfe JumpB
	var_203_float = 2.0; // 0xff PushF
	Sleep(var_203_float); // 0x100 Func
	
Label_258:
	return 22; // 0x102 Return
	
Label_106:
	var_30_bool = 0; // 0x6a MovB
	goto Label_241; // 0x6b Jump
	
Label_241:
	goto Label_70; // 0xf1 Jump
	
Label_108:
	var_204_float = var_14_float * var_14_float; // 0x6c Mult
	var_205_bool = var_33_float >= var_204_float; // 0x6d GE
	if(var_205_bool == 0) goto Label_233; // 0x6e JumpB
	GetPFPosition(var_34_cvector); // 0x6f TObjFunc
	CanReachByPF(var_35_bool, var_34_cvector); // 0x71 Func
	var_206_bool = var_35_bool == 0; // 0x73 Not
	if(var_206_bool == 0) goto Label_132; // 0x74 JumpB
	var_207_bool = 0; var_208_object = Obj(); var_209_float = 0; var_210_float = 0; var_211_bool = 0; var_212_bool = 0; // 0x75 PushV
	var_208_object = var_0_object; // 0x76 MovT
	var_209_float = var_26_float; // 0x77 Mov
	var_210_float = 3000.0; // 0x78 MovF
	var_211_bool = 1; // 0x79 MovB
	var_212_bool = 0; // 0x7a MovB
	TaskCall(1); // 0x7b TaskCall
	func_700(var_215_bool, var_207_bool, var_208_object, var_209_float, var_210_float, var_211_bool, var_212_bool); // 0x7c NEW_2
	TaskReturn(); // 0x7d TaskReturn
	var_216_bool = var_213_bool == 0; // 0x7f Not
	if(var_216_bool == 0) goto Label_130; // 0x80 JumpB
	goto Label_242; // 0x81 Jump
	
Label_130:
	var_30_bool = 0; // 0x82 MovB
	goto Label_70; // 0x83 Jump
	
Label_132:
	var_217_bool = var_30_bool == 0; // 0x84 Not
	if(var_217_bool == 0) goto Label_157; // 0x85 JumpB
	var_218_object = Obj(); // 0x86 PushV
	var_218_object = var_0_object; // 0x87 MovT
	func_1420(); // 0x88 NEW_2
	var_227_string = "all"; // 0x8a PushS
	var_228_string = "attack_on"; // 0x8b PushS
	PlayAnimation(var_227_string, var_228_string); // 0x8c Func
	WaitForAnimEnd(); // 0x8e Func
	func_672(var_36_float); // 0x91 NEW_2
	StopAsync(); // 0x93 Func
	var_30_bool = 1; // 0x95 MovB
	var_229_bool = 0; var_230_object = Obj(); // 0x96 PushV
	var_230_object = var_0_object; // 0x97 MovT
	func_1270(var_229_bool, var_230_object); // 0x98 NEW_2
	var_231_bool = var_229_bool == 0; // 0x9a Not
	if(var_231_bool == 0) goto Label_157; // 0x9b JumpB
	goto Label_242; // 0x9c Jump
	
Label_157:
	rand(var_36_float); // 0x9d Func
	var_232_bool = 0; // 0x9f PushV
	var_232_bool = 1; // 0xa0 MovB
	var_233_float = 0.25; // 0xa1 PushF
	var_234_bool = var_36_float < var_233_float; // 0xa2 LT
	if(var_234_bool == 0) goto Label_169; // 0xa3 JumpB
	var_235_bool = 0; // 0xa4 PushV
	func_629(var_232_bool, var_235_bool); // 0xa5 NEW_2
	if(var_235_bool == 0) goto Label_169; // 0xa7 JumpB
	var_232_bool = 0; // 0xa8 MovB
	
Label_169:
	if(var_232_bool == 0) goto Label_186; // 0xa9 JumpB
	Face(var_0_object); // 0xaa Func
	func_679(); // 0xad NEW_2
	var_270_string = "all"; // 0xaf PushS
	var_271_string = "attack_stay"; // 0xb0 PushS
	PlayAnimation(var_270_string, var_271_string); // 0xb1 Func
	var_272_bool = 0; var_273_float = 0; // 0xb3 PushV
	var_273_float = var_14_float; // 0xb4 Mov
	func_497(var_36_float, var_272_bool, var_273_float); // 0xb5 NEW_2
	StopAsync(); // 0xb7 Func
	goto Label_232; // 0xb9 Jump
	
Label_232:
	goto Label_241; // 0xe8 Jump
	
Label_186:
	Face(var_0_object); // 0xba Func
	var_487_string = "all"; // 0xbc PushS
	var_488_string = "fjump"; // 0xbd PushS
	PlayAnimation(var_487_string, var_488_string); // 0xbe Func
	WaitForAnimEnd(); // 0xc0 Func
	func_672(var_36_float); // 0xc3 NEW_2
	var_489_cvector = CVector(0.0, 0.0, 0.0); // 0xc5 PushVec
	SetSpeed(var_489_cvector); // 0xc6 Func
	Stop(); // 0xc8 Func
	StopAsync(); // 0xca Func
	var_490_bool = 0; // 0xcc PushV
	func_629(var_36_float, var_490_bool); // 0xcd NEW_2
	var_491_bool = var_490_bool == 0; // 0xcf Not
	if(var_491_bool == 0) goto Label_232; // 0xd0 JumpB
	var_492_bool = 0; var_493_object = Obj(); // 0xd1 PushV
	var_493_object = var_0_object; // 0xd2 MovT
	func_1270(var_492_bool, var_493_object); // 0xd3 NEW_2
	var_494_bool = var_492_bool == 0; // 0xd5 Not
	if(var_494_bool == 0) goto Label_216; // 0xd6 JumpB
	goto Label_242; // 0xd7 Jump
	
Label_216:
	GetPFPosition(var_27_cvector); // 0xd8 TObjFunc
	GetPFPosition(var_28_cvector); // 0xda Func
	var_32_cvector = var_27_cvector - var_28_cvector; // 0xdc Sub2
	var_33_float = var_32_cvector | var_32_cvector; // 0xdd Or2
	var_495_float = var_14_float * var_14_float; // 0xde Mult
	var_496_bool = var_33_float < var_495_float; // 0xdf LT
	if(var_496_bool == 0) goto Label_232; // 0xe0 JumpB
	var_497_bool = 0; var_498_float = 0; // 0xe1 PushV
	var_498_float = var_14_float; // 0xe2 Mov
	func_333(var_36_float, var_497_bool, var_498_float); // 0xe3 NEW_2
	var_499_bool = var_497_bool == 0; // 0xe5 Not
	if(var_499_bool == 0) goto Label_232; // 0xe6 JumpB
	goto Label_242; // 0xe7 Jump
	
Label_233:
	var_500_bool = 0; var_501_float = 0; // 0xe9 PushV
	var_501_float = var_14_float; // 0xea Mov
	func_333(var_36_float, var_500_bool, var_501_float); // 0xeb NEW_2
	var_502_bool = var_500_bool == 0; // 0xed Not
	if(var_502_bool == 0) goto Label_240; // 0xee JumpB
	goto Label_242; // 0xef Jump
	
Label_240:
	var_30_bool = 1; // 0xf0 MovB
	
Label_67:
	var_30_bool = 1; // 0x43 MovB
	
Label_44:
	var_26_float = var_14_float; // 0x2c Mov
}


func_672(var_0_object)
{
	var_108_object = Obj(); // 0x2a0 PushV
	var_108_object = var_0_object; // 0x2a1 MovT
	func_1572(var_108_object); // 0x2a2 NEW_2
	return 0; // 0x2a4 Return
}


func_929(var_0_object)
{
	var_0_object = 1; // 0x3a1 TMovB
	var_13_int = 0; // 0x3a2 PushI
	KillTimer(var_13_int); // 0x3a3 Func
	Stop(); // 0x3a5 Func
	return 0; // 0x3a7 Return
}


func_1442(var_241_string)
{
	var_242_bool = 0; var_243_int = 0; var_244_bool = 0; var_245_int = 0; var_246_bool = 0; var_247_float = 0; var_248_cvector = CVector(0,0,0); var_249_cvector = CVector(0,0,0); var_250_bool = 0; var_251_int = 0; var_252_bool = 0; var_253_int = 0; var_254_bool = 0; var_255_float = 0; var_256_cvector = CVector(0,0,0); var_257_cvector = CVector(0,0,0); // 0x5a2 PushV
	IsExisting3DSound(var_250_bool, var_241_string); // 0x5a3 Func
	var_258_bool = var_250_bool == 0; // 0x5a5 Not
	if(var_258_bool == 0) goto Label_1467; // 0x5a6 JumpB
	var_251_int = 0; // 0x5a7 MovI
	
Label_1448:
	var_259_int = 1; // 0x5a8 PushI
	var_260_int = var_251_int + var_259_int; // 0x5a9 Add
	var_261_int = var_241_string + var_260_int; // 0x5aa Add
	IsExisting3DSound(var_252_bool, var_261_int); // 0x5ab Func
	var_262_bool = var_252_bool == 0; // 0x5ad Not
	if(var_262_bool == 0) goto Label_1456; // 0x5ae JumpB
	goto Label_1459; // 0x5af Jump
	
Label_1459:
	var_263_bool = var_251_int == 0; // 0x5b3 Not
	if(var_263_bool == 0) goto Label_1462; // 0x5b4 JumpB
	return 16; // 0x5b5 Return
	
Label_1462:
	irand(var_253_int, var_251_int); // 0x5b6 Func
	var_264_int = 1; // 0x5b8 PushI
	var_265_int = var_253_int + var_264_int; // 0x5b9 Add
	var_241_string = var_241_string + var_265_int; // 0x5ba Add2
	
Label_1467:
	Is3DSoundLoaded(var_254_bool, var_241_string); // 0x5bb Func
	var_266_bool = var_254_bool; // 0x5bd Push
	if(var_266_bool == 0) goto Label_1482; // 0x5be JumpB
	GetEyesHeight(var_255_float); // 0x5bf Func
	GetDirection(var_256_cvector); // 0x5c1 Func
	var_267_int = 50; // 0x5c3 PushI
	var_257_cvector = var_256_cvector * var_267_int; // 0x5c4 Mult2
	var_268_float = GetByIndex(var_257_cvector, 1); // 0x5c5 PushE
	var_268_float = var_268_float + var_255_float; // 0x5c6 Add2
	SetByIndex(var_257_cvector, 1) = var_268_float; // 0x5c7 PopE
	PlayGlobalSound(var_241_string, var_257_cvector); // 0x5c8 Func
	
Label_1482:
	return 16; // 0x5ca Return
	
Label_1456:
	var_269_int = 1; // 0x5b0 PushI
	var_251_int = var_251_int + var_269_int; // 0x5b1 Add2
	goto Label_1448; // 0x5b2 Jump
}


func_1572(var_108_object)
{
	var_109_bool = 0; var_110_bool = 0; // 0x624 PushV
	IsPlayerActor(var_108_object, var_110_bool); // 0x625 Func
	var_111_bool = var_110_bool; // 0x627 Push
	if(var_111_bool == 0) goto Label_1580; // 0x628 JumpB
	var_112_string = "attack"; // 0x629 PushS
	PlayGlobalMusic(var_112_string); // 0x62a Func
	
Label_1580:
	return 2; // 0x62c Return
}


func_677(var_445_int)
{
	var_445_int = 0; // 0x2a5 MovI
	return 0; // 0x2a6 Return
}


func_294(var_0_object, var_370_float, var_371_int)
{
	var_372_object = Obj(); var_373_float = 0; var_374_float = 0; var_375_object = Obj(); var_376_float = 0; var_377_float = 0; // 0x126 PushV
	var_378_float = 0.9; // 0x127 PushF
	var_379_float = var_370_float * var_378_float; // 0x128 Mult
	GetVictim(var_379_float, var_375_object); // 0x129 Func
	ReportAttack(var_0_object); // 0x12b Func
	var_380_bool = var_375_object == var_0_object; // 0x12d Eq
	if(var_380_bool == 0) goto Label_331; // 0x12e JumpB
	var_381_float = 0; var_382_object = Obj(); var_383_int = 0; // 0x12f PushV
	var_382_object = var_375_object; // 0x130 Mov
	var_383_int = var_371_int; // 0x131 Mov
	func_16(var_383_int); // 0x132 NEW_2
	var_376_float = var_381_float; // 0x133 Mov
	var_384_float = 0; var_385_object = Obj(); var_386_float = 0; var_387_int = 0; // 0x135 PushV
	var_385_object = var_375_object; // 0x136 Mov
	var_386_float = var_376_float; // 0x137 Mov
	var_388_int = 0; var_389_object = Obj(); var_390_int = 0; // 0x138 PushV
	var_389_object = var_375_object; // 0x139 Mov
	var_390_int = var_371_int; // 0x13a Mov
	func_19(var_390_int); // 0x13b NEW_2
	var_387_int = var_388_int; // 0x13c Mov
	func_1156(var_384_float, var_385_object, var_386_float, var_387_int); // 0x13e NEW_2
	var_377_float = var_384_float; // 0x13f Mov
	var_445_int = 0; // 0x141 PushV
	func_677(var_445_int); // 0x142 NEW_2
	ReportHit(var_0_object, var_445_int, var_377_float, var_376_float); // 0x144 Func
	var_446_object = Obj(); var_447_float = 0; // 0x146 PushV
	var_446_object = var_375_object; // 0x147 Mov
	var_447_float = var_377_float; // 0x148 Mov
	func_684(); // 0x149 NEW_2
	
Label_331:
	return 6; // 0x14b Return
}


func_679()
{
	var_241_string = ""; // 0x2a7 PushV
	var_241_string = "attack_stay"; // 0x2a8 MovS
	func_1442(var_241_string); // 0x2a9 NEW_2
	return 0; // 0x2ab Return
}


func_805(var_0_object, var_1_int, var_144_bool, var_145_object, var_146_float, var_147_float, var_148_bool, var_149_bool)
{
	var_150_bool = 0; var_151_bool = 0; var_152_object = Obj(); var_153_cvector = CVector(0,0,0); var_154_cvector = CVector(0,0,0); var_155_cvector = CVector(0,0,0); var_156_float = 0; var_157_object = Obj(); var_158_bool = 0; var_159_bool = 0; var_160_object = Obj(); var_161_cvector = CVector(0,0,0); var_162_cvector = CVector(0,0,0); var_163_cvector = CVector(0,0,0); var_164_float = 0; var_165_object = Obj(); // 0x325 PushV
	var_0_object = 0; // 0x326 TMovB
	var_1_int = var_145_object; // 0x327 TMov
	var_159_bool = var_149_bool; // 0x328 Mov
	
Label_809:
	var_166_bool = 0; var_167_object = Obj(); // 0x329 PushV
	var_167_object = var_145_object; // 0x32a Mov
	func_945(var_166_bool, var_167_object); // 0x32b NEW_2
	var_170_bool = var_166_bool == 0; // 0x32d Not
	if(var_170_bool == 0) goto Label_817; // 0x32e JumpB
	var_144_bool = 0; // 0x32f MovB
	return 16; // 0x330 Return
	
Label_817:
	GetPosition(var_161_cvector); // 0x331 ObjFunc
	GetPosition(var_162_cvector); // 0x333 Func
	var_163_cvector = var_161_cvector - var_162_cvector; // 0x335 Sub2
	var_164_float = var_163_cvector | var_163_cvector; // 0x336 Or2
	var_171_bool = 0; // 0x337 PushV
	var_171_bool = 0; // 0x338 MovB
	var_172_int = 0; // 0x339 PushI
	var_173_bool = var_147_float > var_172_int; // 0x33a GT
	if(var_173_bool == 0) goto Label_832; // 0x33b JumpB
	var_174_float = var_147_float * var_147_float; // 0x33c Mult
	var_175_bool = var_164_float > var_174_float; // 0x33d GT
	if(var_175_bool == 0) goto Label_832; // 0x33e JumpB
	var_171_bool = 1; // 0x33f MovB
	
Label_832:
	if(var_171_bool == 0) goto Label_837; // 0x340 JumpB
	Stop(); // 0x341 Func
	var_144_bool = 0; // 0x343 MovB
	return 16; // 0x344 Return
	
Label_837:
	var_176_float = var_146_float * var_146_float; // 0x345 Mult
	var_177_bool = var_164_float > var_176_float; // 0x346 GT
	if(var_177_bool == 0) goto Label_899; // 0x347 JumpB
	GetPFPosition(var_161_cvector); // 0x348 ObjFunc
	FindPathTo(var_165_object, var_161_cvector); // 0x34a Func
	var_178_bool = var_165_object != 0; // 0x34c NullNeq
	if(var_178_bool == 0) goto Label_848; // 0x34d JumpB
	var_160_object = var_165_object; // 0x34e Mov
	var_165_object = 0; // 0x34f SetNull
	
Label_848:
	var_179_bool = var_160_object != 0; // 0x350 NullNeq
	if(var_179_bool == 0) goto Label_881; // 0x351 JumpB
	var_180_bool = var_159_bool; // 0x352 Push
	if(var_180_bool == 0) goto Label_858; // 0x353 JumpB
	var_159_bool = 0; // 0x354 MovB
	RotatePath(var_160_object, var_158_bool); // 0x355 Func
	var_181_bool = var_158_bool == 0; // 0x357 Not
	if(var_181_bool == 0) goto Label_858; // 0x358 JumpB
	goto Label_905; // 0x359 Jump
	
Label_905:
	var_144_bool = !var_0_object; // 0x389 Not2
	return 16; // 0x38a Return
	
Label_858:
	var_182_int = 0; // 0x35a PushI
	var_183_float = 0.3; // 0x35b PushF
	SetTimer(var_182_int, var_183_float); // 0x35c Func
	var_184_string = ""; // 0x35e PushV
	func_952(var_184_string); // 0x35f NEW_2
	var_185_string = ""; // 0x361 PushV
	func_954(var_185_string); // 0x362 NEW_2
	FollowPath(var_160_object, var_148_bool, var_158_bool, var_184_string, var_185_string); // 0x364 Func
	var_186_bool = var_158_bool == 0; // 0x366 Not
	if(var_186_bool == 0) goto Label_879; // 0x367 JumpB
	var_187_object = var_0_object; // 0x368 PushT
	if(var_187_object == 0) goto Label_877; // 0x369 JumpB
	var_160_object = 0; // 0x36a SetNull
	goto Label_905; // 0x36b Jump
	
Label_877:
	goto Label_904; // 0x36d Jump
	
Label_904:
	goto Label_809; // 0x388 Jump
	
Label_879:
	var_160_object = 0; // 0x36f SetNull
	goto Label_897; // 0x370 Jump
	
Label_897:
	var_165_object = 0; // 0x381 SetNull
	goto Label_903; // 0x382 Jump
	
Label_903:
	var_160_object = 0; // 0x387 SetNull
	
Label_881:
	var_188_int = 0; // 0x371 PushI
	KillTimer(var_188_int); // 0x372 Func
	var_189_float = 0.5; // 0x374 PushF
	Sleep(var_189_float, var_158_bool); // 0x375 Func
	var_190_bool = var_158_bool == 0; // 0x377 Not
	if(var_190_bool == 0) goto Label_893; // 0x378 JumpB
	var_191_object = var_0_object; // 0x379 PushT
	if(var_191_object == 0) goto Label_893; // 0x37a JumpB
	var_160_object = 0; // 0x37b SetNull
	goto Label_905; // 0x37c Jump
	
Label_893:
	var_192_int = 0; // 0x37d PushI
	var_193_float = 0.3; // 0x37e PushF
	SetTimer(var_192_int, var_193_float); // 0x37f Func
	
Label_899:
	var_194_int = 0; // 0x383 PushI
	KillTimer(var_194_int); // 0x384 Func
	goto Label_905; // 0x386 Jump
}


func_1064(var_76_string)
{
	RemoveRTEnvelope(); // 0x429 Func
	SetDeathState(); // 0x42b Func
	Stop(); // 0x42d Func
	StopAsync(); // 0x42f Func
	StopSecondaryAnimation(); // 0x431 Func
	var_77_string = ""; // 0x433 PushV
	var_77_string = var_76_string; // 0x434 Mov
	func_1442(var_77_string); // 0x435 NEW_2
	var_106_string = "all"; // 0x437 PushS
	PlayAnimation(var_106_string, var_76_string); // 0x438 Func
	WaitForAnimEnd(); // 0x43a Func
	var_107_string = "all"; // 0x43c PushS
	LockAnimationEnd(var_107_string, var_76_string); // 0x43d Func
	RemoveEnvelope(); // 0x43f Func
	return 0; // 0x441 Return
}


func_684()
{
	return 0; // 0x2ad Return
}


func_1581()
{
	var_345_object = Obj(); var_346_object = Obj(); // 0x62d PushV
	GetScene(var_346_object); // 0x62e Func
	var_347_string = "battle"; // 0x630 PushS
	var_348_object = Obj(); // 0x631 PushV
	func_1483(var_348_object); // 0x632 NEW_2
	BroadcastMessage(var_347_string, var_348_object, var_346_object); // 0x634 Func
	return 2; // 0x636 Return
}


func_686(var_470_bool)
{
	var_470_bool = 1; // 0x2ae MovB
	return 0; // 0x2af Return
}


func_688(var_366_int)
{
	var_366_int = 1; // 0x2b0 MovI
	return 0; // 0x2b1 Return
}


func_945(var_166_bool, var_167_object)
{
	var_168_bool = 0; var_169_object = Obj(); // 0x3b2 PushV
	var_169_object = var_167_object; // 0x3b3 Mov
	func_1270(var_168_bool, var_169_object); // 0x3b4 NEW_2
	var_166_bool = var_168_bool; // 0x3b5 Mov
	return 0; // 0x3b7 Return
}


func_690(var_361_float)
{
	var_361_float = 0.5; // 0x2b2 MovF
	return 0; // 0x2b3 Return
}


func_568(var_285_bool)
{
	var_286_bool = 0; // 0x238 PushV
	var_286_bool = 0; // 0x239 MovB
	var_287_bool = 0; // 0x23a PushV
	func_540(var_286_bool, var_287_bool); // 0x23b NEW_2
	if(var_287_bool == 0) goto Label_579; // 0x23d JumpB
	var_304_bool = 0; // 0x23e PushV
	func_584(var_285_bool, var_286_bool, var_304_bool); // 0x23f NEW_2
	if(var_304_bool == 0) goto Label_579; // 0x241 JumpB
	var_286_bool = 1; // 0x242 MovB
	
Label_579:
	if(var_286_bool == 0) goto Label_582; // 0x243 JumpB
	var_285_bool = 1; // 0x244 MovB
	return 0; // 0x245 Return
	
Label_582:
	var_285_bool = 0; // 0x246 MovB
	return 0; // 0x247 Return
}


func_952(var_184_string)
{
	var_184_string = "walk"; // 0x3b8 MovS
	return 0; // 0x3b9 Return
}


func_954(var_185_string)
{
	var_185_string = "run"; // 0x3ba MovS
	return 0; // 0x3bb Return
}


func_1338(var_13_object, var_14_int, var_15_float)
{
	var_16_cvector = CVector(0,0,0); var_17_object = Obj(); var_18_int = 0; var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_int = 0; var_23_int = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_object = Obj(); var_27_int = 0; var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_int = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0); // 0x53a PushV
	var_34_bool = 0; // 0x53b PushV
	var_34_bool = 0; // 0x53c MovB
	var_35_bool = 0; // 0x53d PushV
	var_35_bool = 0; // 0x53e MovB
	var_36_object = var_13_object; // 0x53f Push
	if(var_36_object == 0) goto Label_1349; // 0x540 JumpB
	var_37_int = 4; // 0x541 PushI
	var_38_bool = var_14_int != var_37_int; // 0x542 Neq
	if(var_38_bool == 0) goto Label_1349; // 0x543 JumpB
	var_35_bool = 1; // 0x544 MovB
	
Label_1349:
	if(var_35_bool == 0) goto Label_1354; // 0x545 JumpB
	var_39_int = 5; // 0x546 PushI
	var_40_bool = var_14_int != var_39_int; // 0x547 Neq
	if(var_40_bool == 0) goto Label_1354; // 0x548 JumpB
	var_34_bool = 1; // 0x549 MovB
	
Label_1354:
	if(var_34_bool == 0) goto Label_1401; // 0x54a JumpB
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); // 0x54b PushV
	var_43_cvector = CVector(0,0,0); var_44_object = Obj(); // 0x54c PushV
	var_44_object = var_13_object; // 0x54d Mov
	func_1110(var_44_object); // 0x54e NEW_2
	var_42_cvector = var_43_cvector; // 0x54f Mov
	func_1489(var_41_cvector, var_42_cvector); // 0x551 NEW_2
	var_25_cvector = var_41_cvector; // 0x552 Mov
	CreateVectorVector(var_26_object); // 0x554 Func
	var_27_int = 1; // 0x556 MovI
	
Label_1367:
	var_54_string = "hit"; // 0x557 PushS
	var_55_int = var_54_string + var_27_int; // 0x558 Add
	GetGeometryLocator(var_55_int, var_28_bool, var_29_cvector, var_30_cvector); // 0x559 Func
	var_56_bool = var_28_bool == 0; // 0x55b Not
	if(var_56_bool == 0) goto Label_1374; // 0x55c JumpB
	goto Label_1383; // 0x55d Jump
	
Label_1383:
	size(var_31_int); // 0x567 ObjFunc
	var_57_int = var_31_int; // 0x569 Push
	if(var_57_int == 0) goto Label_1400; // 0x56a JumpB
	irand(var_32_int, var_31_int); // 0x56b Func
	get(var_33_cvector, var_32_int); // 0x56d ObjFunc
	var_58_object = Obj(); var_59_int = 0; var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); // 0x56f PushV
	var_58_object = var_13_object; // 0x570 Mov
	var_59_int = var_14_int; // 0x571 Mov
	var_60_float = var_15_float; // 0x572 Mov
	var_61_cvector = var_33_cvector; // 0x573 Mov
	var_62_cvector = -var_25_cvector; // 0x574 Neg2
	func_1406(var_60_float, var_61_cvector, var_62_cvector); // 0x575 NEW_2
	return 18; // 0x577 Return
	
Label_1400:
	var_26_object = 0; // 0x578 SetNull
	
Label_1401:
	var_103_object = Obj(); // 0x579 PushV
	var_103_object = var_13_object; // 0x57a Mov
	func_1294(var_103_object); // 0x57b NEW_2
	return 18; // 0x57d Return
	
Label_1374:
	var_104_int = var_30_cvector | var_25_cvector; // 0x55e Or
	var_105_float = 0.70711; // 0x55f PushF
	var_106_bool = var_104_int >= var_105_float; // 0x560 GE
	if(var_106_bool == 0) goto Label_1380; // 0x561 JumpB
	add(var_29_cvector); // 0x562 ObjFunc
	
Label_1380:
	var_107_int = 1; // 0x564 PushI
	var_27_int = var_27_int + var_107_int; // 0x565 Add2
	goto Label_1367; // 0x566 Jump
}


func_700(var_2_int, var_115_bool, var_116_object, var_117_float, var_118_float, var_119_bool, var_120_bool)
{
	var_124_bool = 0; var_125_bool = 0; var_126_bool = 0; var_127_bool = 0; // 0x2bc PushV
	var_128_object = Obj(); // 0x2bd PushV
	var_128_object = var_116_object; // 0x2be Mov
	func_1572(var_128_object); // 0x2bf NEW_2
	var_129_int = 1; // 0x2c1 PushI
	var_130_int = 5; // 0x2c2 PushI
	SetTimer(var_129_int, var_130_int); // 0x2c3 Func
	CanSee(var_126_bool, var_116_object); // 0x2c5 Func
	var_131_bool = var_126_bool; // 0x2c7 Push
	if(var_131_bool == 0) goto Label_719; // 0x2c8 JumpB
	var_2_int = 1; // 0x2c9 TMovB
	var_132_object = Obj(); // 0x2ca PushV
	var_132_object = var_116_object; // 0x2cb Mov
	func_1431(var_132_object); // 0x2cc NEW_2
	goto Label_720; // 0x2ce Jump
	
Label_720:
	var_139_bool = 0; var_140_object = Obj(); // 0x2d0 PushV
	var_140_object = var_116_object; // 0x2d1 Mov
	func_1117(var_139_bool, var_140_object); // 0x2d2 NEW_2
	if(var_139_bool == 0) goto Label_730; // 0x2d4 JumpB
	var_143_object = Obj(); // 0x2d5 PushV
	func_1483(var_143_object); // 0x2d6 NEW_2
	SendPlayerEnemy(var_116_object, var_143_object); // 0x2d8 Func
	
Label_730:
	var_144_bool = 0; var_145_object = Obj(); var_146_float = 0; var_147_float = 0; var_148_bool = 0; var_149_bool = 0; // 0x2da PushV
	var_145_object = var_116_object; // 0x2db Mov
	var_146_float = var_117_float; // 0x2dc Mov
	var_147_float = var_118_float; // 0x2dd Mov
	var_148_bool = var_119_bool; // 0x2de Mov
	var_149_bool = var_120_bool; // 0x2df Mov
	func_805(var_126_bool, var_127_bool, var_144_bool, var_145_object, var_146_float, var_147_float, var_148_bool, var_149_bool); // 0x2e0 NEW_2
	var_127_bool = var_144_bool; // 0x2e1 Mov
	var_195_int = var_2_int; // 0x2e3 PushT
	if(var_195_int == 0) goto Label_744; // 0x2e4 JumpB
	var_196_string = "head"; // 0x2e5 PushS
	UnlookAsync(var_196_string); // 0x2e6 Func
	
Label_744:
	var_197_int = 1; // 0x2e8 PushI
	KillTimer(var_197_int); // 0x2e9 Func
	var_115_bool = var_127_bool; // 0x2eb Mov
	return 4; // 0x2ec Return
	
Label_719:
	var_2_int = 0; // 0x2cf TMovB
}


func_1592(var_10_object)
{
	var_11_bool = 0; var_12_object = Obj(); // 0x639 PushV
	var_12_object = var_10_object; // 0x63a Mov
	func_1117(var_11_bool, var_12_object); // 0x63b NEW_2
	if(var_11_bool == 0) goto Label_1603; // 0x63d JumpB
	var_15_bool = 0; var_16_object = Obj(); var_17_float = 0; // 0x63e PushV
	var_16_object = var_10_object; // 0x63f Mov
	var_17_float = 0.02; // 0x640 MovF
	func_1517(var_15_bool, var_16_object, var_17_float); // 0x641 NEW_2
	
Label_1603:
	var_53_object = Obj(); // 0x643 PushV
	var_53_object = var_10_object; // 0x644 Mov
	TaskCall(2); // 0x645 TaskCall
	func_964(var_53_object); // 0x646 NEW_2
	TaskReturn(); // 0x647 TaskReturn
	return 0; // 0x649 Return
}


func_964(var_53_object)
{
	var_54_object = Obj(); // 0x3c5 PushV
	var_54_object = var_53_object; // 0x3c6 Mov
	func_973(var_54_object); // 0x3c7 NEW_2
	
Label_969:
	Hold(); // 0x3c9 Func
	goto Label_969; // 0x3cb Jump
}


func_584(var_0_object, var_4_float, var_304_bool)
{
	var_305_object = Obj(); var_306_bool = 0; var_307_float = 0; var_308_cvector = CVector(0,0,0); var_309_cvector = CVector(0,0,0); var_310_object = Obj(); var_311_bool = 0; var_312_float = 0; var_313_cvector = CVector(0,0,0); var_314_cvector = CVector(0,0,0); // 0x248 PushV
	GetScene(var_310_object); // 0x249 Func
	var_311_bool = 0; // 0x24b MovB
	
Label_588:
	var_315_cvector = CVector(0,0,0); var_316_object = Obj(); // 0x24c PushV
	var_316_object = var_0_object; // 0x24d MovT
	func_1110(var_316_object); // 0x24e NEW_2
	var_321_int = -var_315_cvector; // 0x250 Neg
	FindDirLength(var_312_float, var_321_int, var_312_float); // 0x251 Func
	var_322_bool = var_312_float < var_4_float; // 0x253 LT
	if(var_322_bool == 0) goto Label_598; // 0x254 JumpB
	goto Label_626; // 0x255 Jump
	
Label_626:
	var_304_bool = var_311_bool; // 0x272 Mov
	return 10; // 0x273 Return
	
Label_598:
	Face(var_0_object); // 0x256 Func
	var_323_string = "all"; // 0x258 PushS
	var_324_string = "bjump"; // 0x259 PushS
	PlayAnimation(var_323_string, var_324_string); // 0x25a Func
	GetPFPosition(var_313_cvector); // 0x25c TObjFunc
	GetPFPosition(var_314_cvector); // 0x25e Func
	WaitForAnimEnd(); // 0x260 Func
	func_672(var_314_cvector); // 0x263 NEW_2
	StopAsync(); // 0x265 Func
	var_325_cvector = CVector(0.0, 0.0, 0.0); // 0x267 PushVec
	SetSpeed(var_325_cvector); // 0x268 Func
	var_311_bool = 1; // 0x26a MovB
	var_326_bool = 0; // 0x26b PushV
	func_540(var_314_cvector, var_326_bool); // 0x26c NEW_2
	var_327_bool = var_326_bool == 0; // 0x26e Not
	if(var_327_bool == 0) goto Label_625; // 0x26f JumpB
	goto Label_626; // 0x270 Jump
	
Label_625:
	goto Label_588; // 0x271 Jump
}


func_1096(var_412_string, var_413_int)
{
	var_414_int = 2; // 0x449 PushI
	var_415_bool = var_413_int == var_414_int; // 0x44a Eq
	if(var_415_bool == 0) goto Label_1103; // 0x44b JumpB
	var_412_string = "fire"; // 0x44c MovS
	return 0; // 0x44d Return
	
Label_1103:
	var_416_int = 1; // 0x44f PushI
	var_417_bool = var_413_int == var_416_int; // 0x450 Eq
	if(var_417_bool == 0) goto Label_1108; // 0x451 JumpB
	var_412_string = "bullet"; // 0x452 MovS
	return 0; // 0x453 Return
	
Label_1108:
	var_412_string = "phys"; // 0x454 MovS
	return 0; // 0x455 Return
}


func_1483(var_67_object)
{
	var_68_object = Obj(); var_69_object = Obj(); // 0x5cb PushV
	self(var_69_object); // 0x5cc Func
	var_67_object = var_69_object; // 0x5ce Mov
	return 2; // 0x5cf Return
}


func_333(var_0_object, var_333_bool, var_334_float)
{
	var_335_int = 0; var_336_bool = 0; var_337_int = 0; var_338_string = ""; var_339_int = 0; var_340_bool = 0; var_341_int = 0; var_342_string = ""; // 0x14d PushV
	func_672(var_342_string); // 0x14f NEW_2
	irand(var_339_int, var_342_string); // 0x151 Func
	var_343_int = 1; // 0x153 PushI
	var_339_int = var_339_int + var_343_int; // 0x154 Add2
	Face(var_0_object); // 0x155 Func
	var_344_bool = 1; // 0x157 PushB
	SetAttackState(var_344_bool); // 0x158 Func
	func_1581(); // 0x15b NEW_2
	var_349_string = "all"; // 0x15d PushS
	var_350_string = "attack_begin"; // 0x15e PushS
	var_351_int = var_350_string + var_339_int; // 0x15f Add
	PlayAnimation(var_349_string, var_351_int); // 0x160 Func
	WaitForAnimEnd(); // 0x162 Func
	func_640(var_341_int, var_342_string); // 0x165 NEW_2
	var_367_bool = 0; var_368_object = Obj(); // 0x167 PushV
	var_368_object = var_0_object; // 0x168 MovT
	func_1270(var_367_bool, var_368_object); // 0x169 NEW_2
	var_369_bool = var_367_bool == 0; // 0x16b Not
	if(var_369_bool == 0) goto Label_369; // 0x16c JumpB
	StopAsync(); // 0x16d Func
	var_333_bool = 0; // 0x16f MovB
	return 8; // 0x170 Return
	
Label_369:
	var_370_float = 0; var_371_int = 0; // 0x171 PushV
	var_370_float = var_334_float; // 0x172 Mov
	var_371_int = var_339_int; // 0x173 Mov
	func_294(var_342_string, var_370_float, var_371_int); // 0x174 NEW_2
	var_448_string = "all"; // 0x176 PushS
	var_449_string = "attack_middle"; // 0x177 PushS
	var_450_int = var_449_string + var_339_int; // 0x178 Add
	HasAnimation(var_340_bool, var_448_string, var_450_int); // 0x179 Func
	var_451_bool = var_340_bool; // 0x17b Push
	if(var_451_bool == 0) goto Label_450; // 0x17c JumpB
	func_1581(); // 0x17e NEW_2
	var_452_string = "all"; // 0x180 PushS
	var_453_string = "attack_middle"; // 0x181 PushS
	var_454_int = var_453_string + var_339_int; // 0x182 Add
	PlayAnimation(var_452_string, var_454_int); // 0x183 Func
	WaitForAnimEnd(); // 0x185 Func
	func_672(var_342_string); // 0x188 NEW_2
	var_455_bool = 0; var_456_object = Obj(); // 0x18a PushV
	var_456_object = var_0_object; // 0x18b MovT
	func_1270(var_455_bool, var_456_object); // 0x18c NEW_2
	var_457_bool = var_455_bool == 0; // 0x18e Not
	if(var_457_bool == 0) goto Label_404; // 0x18f JumpB
	StopAsync(); // 0x190 Func
	var_333_bool = 0; // 0x192 MovB
	return 8; // 0x193 Return
	
Label_404:
	var_458_float = 0; var_459_int = 0; // 0x194 PushV
	var_458_float = var_334_float; // 0x195 Mov
	var_459_int = var_339_int; // 0x196 Mov
	func_294(var_342_string, var_458_float, var_459_int); // 0x197 NEW_2
	var_341_int = 1; // 0x199 MovI
	
Label_410:
	var_460_string = "attack_middle"; // 0x19a PushS
	var_461_int = var_460_string + var_339_int; // 0x19b Add
	var_462_string = "_"; // 0x19c PushS
	var_463_int = var_461_int + var_462_string; // 0x19d Add
	var_342_string = var_463_int + var_341_int; // 0x19e Add2
	var_464_string = "all"; // 0x19f PushS
	HasAnimation(var_340_bool, var_464_string, var_342_string); // 0x1a0 Func
	var_465_bool = var_340_bool == 0; // 0x1a2 Not
	if(var_465_bool == 0) goto Label_421; // 0x1a3 JumpB
	goto Label_450; // 0x1a4 Jump
	
Label_450:
	var_466_bool = 0; // 0x1c2 PushB
	SetAttackState(var_466_bool); // 0x1c3 Func
	var_467_string = "all"; // 0x1c5 PushS
	var_468_string = "attack_end"; // 0x1c6 PushS
	var_469_int = var_468_string + var_339_int; // 0x1c7 Add
	PlayAnimation(var_467_string, var_469_int); // 0x1c8 Func
	var_470_bool = 0; // 0x1ca PushV
	func_686(var_470_bool); // 0x1cb NEW_2
	if(var_470_bool == 0) goto Label_468; // 0x1cd JumpB
	var_471_bool = 0; var_472_float = 0; // 0x1ce PushV
	var_472_float = 0.75; // 0x1cf MovF
	func_470(var_471_bool, var_472_float); // 0x1d0 NEW_2
	StopAsync(); // 0x1d2 Func
	
Label_468:
	var_333_bool = 1; // 0x1d4 MovB
	return 8; // 0x1d5 Return
	
Label_421:
	func_1581(); // 0x1a6 NEW_2
	var_480_string = "all"; // 0x1a8 PushS
	PlayAnimation(var_480_string, var_342_string); // 0x1a9 Func
	WaitForAnimEnd(); // 0x1ab Func
	func_672(var_342_string); // 0x1ae NEW_2
	var_481_bool = 0; var_482_object = Obj(); // 0x1b0 PushV
	var_482_object = var_0_object; // 0x1b1 MovT
	func_1270(var_481_bool, var_482_object); // 0x1b2 NEW_2
	var_483_bool = var_481_bool == 0; // 0x1b4 Not
	if(var_483_bool == 0) goto Label_442; // 0x1b5 JumpB
	StopAsync(); // 0x1b6 Func
	var_333_bool = 0; // 0x1b8 MovB
	return 8; // 0x1b9 Return
	
Label_442:
	var_484_float = 0; var_485_int = 0; // 0x1ba PushV
	var_484_float = var_334_float; // 0x1bb Mov
	var_485_int = var_339_int; // 0x1bc Mov
	func_294(var_342_string, var_484_float, var_485_int); // 0x1bd NEW_2
	var_486_int = 1; // 0x1bf PushI
	var_341_int = var_341_int + var_486_int; // 0x1c0 Add2
	goto Label_410; // 0x1c1 Jump
}


func_973(var_54_object)
{
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_string = ""; var_60_object = Obj(); var_61_bool = 0; var_62_bool = 0; var_63_float = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_string = ""; var_70_object = Obj(); var_71_bool = 0; var_72_bool = 0; var_73_float = 0; var_74_cvector = CVector(0,0,0); // 0x3cd PushV
	var_75_bool = var_54_object == 0; // 0x3ce NullEq
	if(var_75_bool == 0) goto Label_981; // 0x3cf JumpB
	var_76_string = ""; // 0x3d0 PushV
	var_76_string = "fdie"; // 0x3d1 MovS
	func_1064(var_76_string); // 0x3d2 NEW_2
	goto Label_1063; // 0x3d4 Jump
	
Label_1063:
	return 20; // 0x427 Return
	
Label_981:
	GetPosition(var_65_cvector); // 0x3d5 ObjFunc
	GetPosition(var_66_cvector); // 0x3d7 Func
	GetDirection(var_67_cvector); // 0x3d9 Func
	var_68_cvector = var_66_cvector - var_65_cvector; // 0x3db Sub2
	var_108_float = GetByIndex(var_68_cvector, 0); // 0x3dc PushE
	var_109_float = GetByIndex(var_67_cvector, 0); // 0x3dd PushE
	var_110_float = var_108_float * var_109_float; // 0x3de Mult
	var_111_float = GetByIndex(var_68_cvector, 2); // 0x3df PushE
	var_112_float = GetByIndex(var_67_cvector, 2); // 0x3e0 PushE
	var_113_float = var_111_float * var_112_float; // 0x3e1 Mult
	var_114_int = var_110_float + var_113_float; // 0x3e2 Add
	var_115_int = 0; // 0x3e3 PushI
	var_116_bool = var_114_int >= var_115_int; // 0x3e4 GE
	if(var_116_bool == 0) goto Label_1000; // 0x3e5 JumpB
	var_69_string = "fdie"; // 0x3e6 MovS
	goto Label_1001; // 0x3e7 Jump
	
Label_1001:
	RemoveRTEnvelope(); // 0x3e9 Func
	SetDeathState(); // 0x3eb Func
	Stop(); // 0x3ed Func
	StopAsync(); // 0x3ef Func
	var_70_object = var_54_object; // 0x3f1 Mov
	var_117_string = "GetScriptProperty"; // 0x3f2 PushS
	var_118_int = 2; // 0x3f3 PushI
	var_119_bool = IsFuncExist(var_54_object, var_117_string, var_118_int); // 0x3f4 FuncExist
	if(var_119_bool == 0) goto Label_1025; // 0x3f5 JumpB
	var_120_string = "Owner"; // 0x3f6 PushS
	HasScriptProperty(var_71_bool, var_120_string); // 0x3f7 ObjFunc
	var_121_bool = var_71_bool; // 0x3f9 Push
	if(var_121_bool == 0) goto Label_1025; // 0x3fa JumpB
	var_122_string = "Owner"; // 0x3fb PushS
	GetScriptProperty(var_70_object, var_122_string); // 0x3fc ObjFunc
	var_123_bool = var_70_object == 0; // 0x3fe NullEq
	if(var_123_bool == 0) goto Label_1025; // 0x3ff JumpB
	var_70_object = var_54_object; // 0x400 Mov
	
Label_1025:
	var_124_string = "@GetEyesHeight"; // 0x401 PushS
	var_125_int = 1; // 0x402 PushI
	var_126_bool = IsFuncExist(var_70_object, var_124_string, var_125_int); // 0x403 FuncExist
	if(var_126_bool == 0) goto Label_1040; // 0x404 JumpB
	GetEyesHeight(var_73_float); // 0x405 ObjFunc
	var_74_cvector = CVector(0.0, 0.0, 0.0); // 0x407 MovV
	var_127_float = GetByIndex(var_74_cvector, 1); // 0x408 PushE
	var_127_float = var_73_float; // 0x409 Mov
	SetByIndex(var_74_cvector, 1) = var_127_float; // 0x40a PopE
	var_128_string = "head"; // 0x40b PushS
	LookAsync(var_54_object, var_128_string, var_74_cvector); // 0x40c Func
	var_72_bool = 1; // 0x40e MovB
	goto Label_1041; // 0x40f Jump
	
Label_1041:
	var_129_string = ""; // 0x411 PushV
	var_129_string = var_69_string; // 0x412 Mov
	func_1442(var_129_string); // 0x413 NEW_2
	var_130_string = "all"; // 0x415 PushS
	PlayAnimation(var_130_string, var_69_string); // 0x416 Func
	WaitForAnimEnd(); // 0x418 Func
	var_131_bool = var_72_bool; // 0x41a Push
	if(var_131_bool == 0) goto Label_1057; // 0x41b JumpB
	StopAsync(); // 0x41c Func
	var_132_string = "head"; // 0x41e PushS
	UnlookAsync(var_132_string); // 0x41f Func
	
Label_1057:
	var_133_string = "all"; // 0x421 PushS
	LockAnimationEnd(var_133_string, var_69_string); // 0x422 Func
	RemoveEnvelope(); // 0x424 Func
	var_70_object = 0; // 0x426 SetNull
	
Label_1040:
	var_72_bool = 0; // 0x410 MovB
	
Label_1000:
	var_69_string = "bdie"; // 0x3e8 MovS
}


func_1229(var_88_bool)
{
	var_90_bool = 0; var_91_bool = 0; // 0x4cd PushV
	IsDead(var_91_bool); // 0x4ce ObjFunc
	var_88_bool = var_91_bool; // 0x4d0 Mov
	return 2; // 0x4d1 Return
}


func_1489(var_41_cvector, var_42_cvector)
{
	var_49_float = 0; var_50_float = 0; // 0x5d1 PushV
	var_51_int = var_42_cvector | var_42_cvector; // 0x5d2 Or
	var_50_float = sqrt(var_51_int); // 0x5d3 Sqrt2
	var_52_float = 0.0; // 0x5d4 PushF
	var_53_bool = var_50_float < var_52_float; // 0x5d5 LT
	if(var_53_bool == 0) goto Label_1497; // 0x5d6 JumpB
	var_41_cvector = CVector(0.0, 0.0, 0.0); // 0x5d7 MovV
	return 2; // 0x5d8 Return
	
Label_1497:
	var_41_cvector = var_42_cvector / var_42_cvector; // 0x5d9 Div2
	return 2; // 0x5da Return
}


func_1234(var_77_bool, var_78_object)
{
	var_79_object = Obj(); var_80_object = Obj(); var_81_object = Obj(); var_82_object = Obj(); // 0x4d2 PushV
	var_83_bool = var_78_object == 0; // 0x4d3 NullEq
	if(var_83_bool == 0) goto Label_1239; // 0x4d4 JumpB
	var_77_bool = 0; // 0x4d5 MovB
	return 4; // 0x4d6 Return
	
Label_1239:
	var_84_bool = 0; // 0x4d7 PushV
	var_84_bool = 0; // 0x4d8 MovB
	var_85_string = "IsDead"; // 0x4d9 PushS
	var_86_int = 1; // 0x4da PushI
	var_87_bool = IsFuncExist(var_78_object, var_85_string, var_86_int); // 0x4db FuncExist
	if(var_87_bool == 0) goto Label_1251; // 0x4dc JumpB
	var_88_bool = 0; var_89_object = Obj(); // 0x4dd PushV
	var_89_object = var_78_object; // 0x4de Mov
	func_1229(var_89_object); // 0x4df NEW_2
	if(var_88_bool == 0) goto Label_1251; // 0x4e1 JumpB
	var_84_bool = 1; // 0x4e2 MovB
	
Label_1251:
	if(var_84_bool == 0) goto Label_1254; // 0x4e3 JumpB
	var_77_bool = 0; // 0x4e4 MovB
	return 4; // 0x4e5 Return
	
Label_1254:
	GetScene(var_81_object); // 0x4e6 Func
	var_92_bool = var_81_object == 0; // 0x4e8 NullEq
	if(var_92_bool == 0) goto Label_1260; // 0x4e9 JumpB
	var_77_bool = 0; // 0x4ea MovB
	return 4; // 0x4eb Return
	
Label_1260:
	GetScene(var_82_object); // 0x4ec ObjFunc
	var_93_bool = var_81_object != var_82_object; // 0x4ee Neq
	if(var_93_bool == 0) goto Label_1266; // 0x4ef JumpB
	var_77_bool = 0; // 0x4f0 MovB
	return 4; // 0x4f1 Return
	
Label_1266:
	var_77_bool = 1; // 0x4f2 MovB
	return 4; // 0x4f3 Return
}


func_470(var_471_bool, var_472_float)
{
	var_473_float = 0; var_474_bool = 0; var_475_float = 0; var_476_bool = 0; // 0x1d6 PushV
	rand(var_475_float); // 0x1d7 Func
	var_477_bool = var_475_float < var_472_float; // 0x1d9 LT
	if(var_477_bool == 0) goto Label_490; // 0x1da JumpB
	
Label_475:
	IsAnimationPlaying(var_476_bool); // 0x1db Func
	var_478_bool = var_476_bool == 0; // 0x1dd Not
	if(var_478_bool == 0) goto Label_480; // 0x1de JumpB
	goto Label_489; // 0x1df Jump
	
Label_489:
	goto Label_495; // 0x1e9 Jump
	
Label_495:
	var_471_bool = 0; // 0x1ef MovB
	return 4; // 0x1f0 Return
	
Label_480:
	var_479_bool = 0; // 0x1e0 PushV
	func_568(var_479_bool); // 0x1e1 NEW_2
	if(var_479_bool == 0) goto Label_486; // 0x1e3 JumpB
	var_471_bool = 1; // 0x1e4 MovB
	return 4; // 0x1e5 Return
	
Label_486:
	sync(); // 0x1e6 Func
	goto Label_475; // 0x1e8 Jump
	
Label_490:
	WaitForAnimEnd(); // 0x1ea Func
	func_672(var_476_bool); // 0x1ed NEW_2
}


func_1110(var_315_cvector)
{
	var_317_cvector = CVector(0,0,0); var_318_cvector = CVector(0,0,0); var_319_cvector = CVector(0,0,0); var_320_cvector = CVector(0,0,0); // 0x456 PushV
	GetPosition(var_319_cvector); // 0x457 Func
	GetPosition(var_320_cvector); // 0x459 ObjFunc
	var_315_cvector = var_320_cvector - var_319_cvector; // 0x45b Sub2
	return 4; // 0x45c Return
}


func_1499(var_422_float, var_423_float, var_424_float)
{
	var_427_bool = var_423_float < var_424_float; // 0x5dc LT
	if(var_427_bool == 0) goto Label_1504; // 0x5dd JumpB
	var_422_float = var_423_float; // 0x5de Mov
	goto Label_1505; // 0x5df Jump
	
Label_1505:
	return 0; // 0x5e1 Return
	
Label_1504:
	var_422_float = var_424_float; // 0x5e0 Mov
}


func_1117(var_139_bool, var_140_object)
{
	var_141_bool = 0; var_142_bool = 0; // 0x45d PushV
	IsPlayerActor(var_140_object, var_142_bool); // 0x45e Func
	var_139_bool = var_142_bool; // 0x460 Mov
	return 2; // 0x461 Return
}


func_1122(var_95_bool, var_96_object, var_97_string)
{
	var_98_bool = 0; var_99_bool = 0; // 0x462 PushV
	var_100_string = "HasProperty"; // 0x463 PushS
	var_101_int = 2; // 0x464 PushI
	var_102_bool = IsFuncExist(var_96_object, var_100_string, var_101_int); // 0x465 FuncExist
	var_103_bool = var_102_bool == 0; // 0x466 Not
	if(var_103_bool == 0) goto Label_1130; // 0x467 JumpB
	var_95_bool = 0; // 0x468 MovB
	return 2; // 0x469 Return
	
Label_1130:
	HasProperty(var_97_string, var_99_bool); // 0x46a ObjFunc
	var_95_bool = var_99_bool; // 0x46c Mov
	return 2; // 0x46d Return
}


func_1506(var_432_float, var_433_float, var_434_float, var_435_float)
{
	var_436_bool = var_433_float < var_434_float; // 0x5e3 LT
	if(var_436_bool == 0) goto Label_1511; // 0x5e4 JumpB
	var_432_float = var_434_float; // 0x5e5 Mov
	return 0; // 0x5e6 Return
	
Label_1511:
	var_437_bool = var_433_float > var_435_float; // 0x5e7 GT
	if(var_437_bool == 0) goto Label_1515; // 0x5e8 JumpB
	var_432_float = var_435_float; // 0x5e9 Mov
	return 0; // 0x5ea Return
	
Label_1515:
	var_432_float = var_433_float; // 0x5eb Mov
	return 0; // 0x5ec Return
}


func_1517(var_15_bool, var_16_object, var_17_float)
{
	var_18_bool = var_16_object == 0; // 0x5ee Not
	if(var_18_bool == 0) goto Label_1522; // 0x5ef JumpB
	var_15_bool = 0; // 0x5f0 MovB
	return 0; // 0x5f1 Return
	
Label_1522:
	var_19_int = 0; // 0x5f2 PushI
	var_20_bool = var_17_float > var_19_int; // 0x5f3 GT
	if(var_20_bool == 0) goto Label_1529; // 0x5f4 JumpB
	var_21_int = 8; // 0x5f5 PushI
	SendWorldWndMessage(var_21_int); // 0x5f6 Func
	goto Label_1538; // 0x5f8 Jump
	
Label_1538:
	var_22_float = 0; // 0x602 PushV
	var_22_float = var_17_float; // 0x603 Mov
	func_1562(var_22_float); // 0x604 NEW_2
	var_26_bool = 0; var_27_object = Obj(); var_28_string = ""; var_29_float = 0; var_30_float = 0; var_31_float = 0; // 0x606 PushV
	var_27_object = var_16_object; // 0x607 Mov
	var_28_string = "reputation"; // 0x608 MovS
	var_29_float = var_17_float; // 0x609 Mov
	var_30_float = 0; // 0x60a MovI
	var_31_float = 1; // 0x60b MovI
	func_1134(var_26_bool, var_27_object, var_28_string, var_29_float, var_30_float, var_31_float); // 0x60c NEW_2
	var_15_bool = 1; // 0x60e MovB
	return 0; // 0x60f Return
	
Label_1529:
	var_50_int = 0; // 0x5f9 PushI
	var_51_bool = var_17_float < var_50_int; // 0x5fa LT
	if(var_51_bool == 0) goto Label_1536; // 0x5fb JumpB
	var_52_int = 9; // 0x5fc PushI
	SendWorldWndMessage(var_52_int); // 0x5fd Func
	goto Label_1538; // 0x5ff Jump
	
Label_1536:
	var_15_bool = 0; // 0x600 MovB
	return 0; // 0x601 Return
}


func_1134(var_26_bool, var_27_object, var_28_string, var_29_float, var_30_float, var_31_float)
{
	var_32_float = 0; var_33_float = 0; // 0x46e PushV
	var_34_bool = 0; var_35_object = Obj(); var_36_string = ""; // 0x46f PushV
	var_35_object = var_27_object; // 0x470 Mov
	var_36_string = var_28_string; // 0x471 Mov
	func_1122(var_34_bool, var_35_object, var_36_string); // 0x472 NEW_2
	var_43_bool = var_34_bool == 0; // 0x474 Not
	if(var_43_bool == 0) goto Label_1144; // 0x475 JumpB
	var_26_bool = 0; // 0x476 MovB
	return 2; // 0x477 Return
	
Label_1144:
	GetProperty(var_28_string, var_33_float); // 0x478 ObjFunc
	var_44_float = 0; var_45_float = 0; var_46_float = 0; var_47_float = 0; // 0x47a PushV
	var_45_float = var_33_float + var_29_float; // 0x47b Add2
	var_46_float = var_30_float; // 0x47c Mov
	var_47_float = var_31_float; // 0x47d Mov
	func_1506(var_44_float, var_45_float, var_46_float, var_47_float); // 0x47e NEW_2
	SetProperty(var_28_string, var_44_float); // 0x480 ObjFunc
	var_26_bool = 1; // 0x482 MovB
	return 2; // 0x483 Return
}


func_497(var_0_object, var_272_bool, var_273_float)
{
	var_274_bool = 0; var_275_cvector = CVector(0,0,0); var_276_cvector = CVector(0,0,0); var_277_cvector = CVector(0,0,0); var_278_float = 0; var_279_bool = 0; var_280_cvector = CVector(0,0,0); var_281_cvector = CVector(0,0,0); var_282_cvector = CVector(0,0,0); var_283_float = 0; // 0x1f1 PushV
	
Label_498:
	IsAnimationPlaying(var_279_bool); // 0x1f2 Func
	var_284_bool = var_279_bool == 0; // 0x1f4 Not
	if(var_284_bool == 0) goto Label_503; // 0x1f5 JumpB
	goto Label_535; // 0x1f6 Jump
	
Label_535:
	func_672(var_283_float); // 0x218 NEW_2
	var_272_bool = 0; // 0x21a MovB
	return 10; // 0x21b Return
	
Label_503:
	var_285_bool = 0; // 0x1f7 PushV
	func_568(var_285_bool); // 0x1f8 NEW_2
	if(var_285_bool == 0) goto Label_509; // 0x1fa JumpB
	var_272_bool = 1; // 0x1fb MovB
	return 10; // 0x1fc Return
	
Label_509:
	var_328_bool = 0; var_329_object = Obj(); // 0x1fd PushV
	var_329_object = var_0_object; // 0x1fe MovT
	func_1270(var_328_bool, var_329_object); // 0x1ff NEW_2
	var_330_bool = var_328_bool == 0; // 0x201 Not
	if(var_330_bool == 0) goto Label_517; // 0x202 JumpB
	var_272_bool = 0; // 0x203 MovB
	return 10; // 0x204 Return
	
Label_517:
	GetPFPosition(var_280_cvector); // 0x205 TObjFunc
	GetPFPosition(var_281_cvector); // 0x207 Func
	var_282_cvector = var_280_cvector - var_281_cvector; // 0x209 Sub2
	var_283_float = var_282_cvector | var_282_cvector; // 0x20a Or2
	var_331_float = var_273_float * var_273_float; // 0x20b Mult
	var_332_bool = var_283_float < var_331_float; // 0x20c LT
	if(var_332_bool == 0) goto Label_532; // 0x20d JumpB
	var_333_bool = 0; var_334_float = 0; // 0x20e PushV
	var_334_float = var_273_float; // 0x20f Mov
	func_333(var_283_float, var_333_bool, var_334_float); // 0x210 NEW_2
	var_272_bool = 1; // 0x212 MovB
	return 10; // 0x213 Return
	
Label_532:
	sync(); // 0x214 Func
	goto Label_498; // 0x216 Jump
}


func_629(var_0_object, var_235_bool)
{
	var_236_bool = 0; var_237_bool = 0; // 0x275 PushV
	var_238_string = "IsAttacking"; // 0x276 PushS
	var_239_int = 1; // 0x277 PushI
	var_240_bool = IsFuncExist(var_0_object, var_238_string, var_239_int); // 0x278 FuncExist
	if(var_240_bool == 0) goto Label_638; // 0x279 JumpB
	IsAttacking(var_237_bool); // 0x27a TObjFunc
	var_235_bool = var_237_bool; // 0x27c Mov
	return 2; // 0x27d Return
	
Label_638:
	var_235_bool = 0; // 0x27e MovB
	return 2; // 0x27f Return
}


func_1270(var_73_bool, var_74_object)
{
	var_75_int = 0; var_76_int = 0; // 0x4f6 PushV
	var_77_bool = 0; var_78_object = Obj(); // 0x4f7 PushV
	var_78_object = var_74_object; // 0x4f8 Mov
	func_1234(var_77_bool, var_78_object); // 0x4f9 NEW_2
	var_94_bool = var_77_bool == 0; // 0x4fb Not
	if(var_94_bool == 0) goto Label_1279; // 0x4fc JumpB
	var_73_bool = 0; // 0x4fd MovB
	return 2; // 0x4fe Return
	
Label_1279:
	var_95_bool = 0; var_96_object = Obj(); var_97_string = ""; // 0x4ff PushV
	var_96_object = var_74_object; // 0x500 Mov
	var_97_string = "noaccess"; // 0x501 MovS
	func_1122(var_95_bool, var_96_object, var_97_string); // 0x502 NEW_2
	var_104_bool = var_95_bool == 0; // 0x504 Not
	if(var_104_bool == 0) goto Label_1288; // 0x505 JumpB
	var_73_bool = 1; // 0x506 MovB
	return 2; // 0x507 Return
	
Label_1288:
	var_105_string = "noaccess"; // 0x508 PushS
	GetProperty(var_105_string, var_76_int); // 0x509 ObjFunc
	var_106_int = 0; // 0x50b PushI
	var_73_bool = var_76_int == var_106_int; // 0x50c Eq2
	return 2; // 0x50d Return
}


func_763(var_2_int)
{
	var_10_int = 1; // 0x2fb PushI
	KillTimer(var_10_int); // 0x2fc Func
	var_11_int = var_2_int; // 0x2fe PushT
	if(var_11_int == 0) goto Label_772; // 0x2ff JumpB
	var_2_int = 0; // 0x300 TMovB
	var_12_string = "head"; // 0x301 PushS
	UnlookAsync(var_12_string); // 0x302 Func
	
Label_772:
	func_929(var_9_object); // 0x305 NEW_2
	return 0; // 0x307 Return
}


func_1406(var_15_object, var_18_cvector, var_19_cvector)
{
	var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); // 0x57e PushV
	GetScene(var_22_object); // 0x57f Func
	var_24_string = "scripted"; // 0x581 PushS
	var_25_string = "blood_dir.xml"; // 0x582 PushS
	AddActorByType(var_23_object, var_24_string, var_22_object, var_18_cvector, var_19_cvector, var_25_string); // 0x583 Func
	var_26_object = Obj(); // 0x585 PushV
	var_26_object = var_15_object; // 0x586 Mov
	func_1294(var_26_object); // 0x587 NEW_2
	return 4; // 0x589 Return
}


