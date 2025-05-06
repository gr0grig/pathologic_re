	task_0_event_17(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_13_object)
	{
	var_14_bool = 0; var_15_object = Obj(); // 0x9 PushV
	var_15_object = var_13_object; // 0xa Mov
	func_1798(var_14_bool, var_15_object); // 0xb NEW_2
	if(var_14_bool == 0) goto Label_21; // 0xd JumpB
	func_123(); // 0xf NEW_2
	var_50_object = Obj(); // 0x11 PushV
	var_50_object = var_13_object; // 0x12 Mov
	func_1805(var_50_object); // 0x13 NEW_2
	
Label_21:
	return 0; // 0x15 Return
	}


task_0_event_1(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	var_10_bool = 0; var_11_bool = 0; // 0x16 PushV
	IsPlayerActor(var_9_bool, var_11_bool); // 0x17 Func
	var_12_bool = var_11_bool; // 0x19 Push
	if(var_12_bool == 0) goto Label_31; // 0x1a JumpB
	var_13_object = Obj(); // 0x1b PushV
	var_13_object = var_9_bool; // 0x1c Mov
	func_8(); // 0x1d NEW_2
	
Label_31:
	return 2; // 0x1f Return
}


task_0_event_3(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	var_10_bool = 0; var_11_bool = 0; // 0x20 PushV
	IsPlayerActor(var_9_bool, var_11_bool); // 0x21 Func
	var_12_bool = var_11_bool; // 0x23 Push
	if(var_12_bool == 0) goto Label_41; // 0x24 JumpB
	var_13_object = Obj(); // 0x25 PushV
	var_13_object = var_9_bool; // 0x26 Mov
	func_8(); // 0x27 NEW_2
	
Label_41:
	return 2; // 0x29 Return
}


task_1_event_0(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	var_10_bool = 0; var_11_bool = 0; // 0x9f PushV
	IsOverrideActive(var_11_bool); // 0xa0 Func
	var_12_bool = var_11_bool == 0; // 0xa2 Not
	if(var_12_bool == 0) goto Label_168; // 0xa3 JumpB
	var_13_object = Obj(); // 0xa4 PushV
	var_13_object = var_9_bool; // 0xa5 Mov
	func_1817(var_13_object); // 0xa6 NEW_2
	
Label_168:
	return 2; // 0xa8 Return
}


task_1_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	return 0; // 0x11f Return
}


task_1_event_16(var_0_object, var_1_string, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	return 0; // 0x121 Return
}


task_1_event_41(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	return 0; // 0x123 Return
}


task_3_event_7(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_int)
{
	var_10_int = 1; // 0x3fe PushI
	var_11_bool = var_9_int == var_10_int; // 0x3ff Eq
	if(var_11_bool == 0) goto Label_1030; // 0x400 JumpB
	var_12_object = Obj(); // 0x401 PushV
	var_12_object = var_1_int; // 0x402 MovT
	func_1709(var_12_object); // 0x403 NEW_2
	goto Label_1034; // 0x405 Jump
	
Label_1034:
	return 0; // 0x40a Return
	
Label_1030:
	var_17_int = 0; // 0x406 PushV
	var_17_int = var_9_int; // 0x407 Mov
	func_1179(var_8_bool, var_9_int, var_17_int); // 0x408 NEW_2
}


task_3_event_1(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_bool = 0; // 0x419 PushV
	var_10_bool = 0; // 0x41a MovB
	var_11_bool = var_1_int == var_9_object; // 0x41b Eq
	if(var_11_bool == 0) goto Label_1056; // 0x41c JumpB
	var_12_bool = var_2_int == 0; // 0x41d Not
	if(var_12_bool == 0) goto Label_1056; // 0x41e JumpB
	var_10_bool = 1; // 0x41f MovB
	
Label_1056:
	if(var_10_bool == 0) goto Label_1062; // 0x420 JumpB
	var_2_int = 1; // 0x421 TMovB
	var_13_object = Obj(); // 0x422 PushV
	var_13_object = var_9_object; // 0x423 Mov
	func_1568(var_13_object); // 0x424 NEW_2
	
Label_1062:
	return 0; // 0x426 Return
}


task_3_event_2(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_bool = 0; // 0x428 PushV
	var_10_bool = 0; // 0x429 MovB
	var_11_bool = var_1_int == var_9_object; // 0x42a Eq
	if(var_11_bool == 0) goto Label_1071; // 0x42b JumpB
	var_12_int = var_2_int; // 0x42c PushT
	if(var_12_int == 0) goto Label_1071; // 0x42d JumpB
	var_10_bool = 1; // 0x42e MovB
	
Label_1071:
	if(var_10_bool == 0) goto Label_1076; // 0x42f JumpB
	var_2_int = 0; // 0x430 TMovB
	var_13_string = "head"; // 0x431 PushS
	UnlookAsync(var_13_string); // 0x432 Func
	
Label_1076:
	return 0; // 0x434 Return
}


task_3_event_10(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	RequestClearPath(var_9_object); // 0x4ae Func
	return 0; // 0x4b0 Return
}


task_3_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	func_1035(var_9_object); // 0x4ba NEW_2
	var_14_object = Obj(); // 0x4bc PushV
	var_14_object = var_9_object; // 0x4bd Mov
	func_1792(); // 0x4be NEW_2
	return 0; // 0x4c0 Return
}


event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float)
{
	var_13_object = Obj(); var_14_int = 0; var_15_float = 0; // 0x6e2 PushV
	var_13_object = var_9_object; // 0x6e3 Mov
	var_14_int = var_10_int; // 0x6e4 Mov
	var_15_float = var_11_float; // 0x6e5 Mov
	func_1470(var_13_object, var_14_int, var_15_float); // 0x6e6 NEW_2
	return 0; // 0x6e8 Return
}


event_43(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float, var_13_cvector, var_14_cvector)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); // 0x6ea PushV
	var_15_object = var_9_object; // 0x6eb Mov
	var_16_int = var_10_int; // 0x6ec Mov
	var_17_float = var_11_float; // 0x6ed Mov
	var_18_cvector = var_13_cvector; // 0x6ee Mov
	var_19_cvector = var_14_cvector; // 0x6ef Mov
	func_1538(var_17_float, var_18_cvector, var_19_cvector); // 0x6f0 NEW_2
	return 0; // 0x6f2 Return
}


event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_string)
{
	var_11_float = 0; var_12_float = 0; // 0x6f3 PushV
	var_13_string = "health"; // 0x6f4 PushS
	var_14_bool = var_10_string == var_13_string; // 0x6f5 Eq
	if(var_14_bool == 0) goto Label_1791; // 0x6f6 JumpB
	var_15_string = "health"; // 0x6f7 PushS
	GetProperty(var_15_string, var_12_float); // 0x6f8 Func
	var_16_int = 0; // 0x6fa PushI
	var_17_bool = var_12_float <= var_16_int; // 0x6fb LE
	if(var_17_bool == 0) goto Label_1791; // 0x6fc JumpB
	SignalDeath(var_9_object); // 0x6fd Func
	
Label_1791:
	return 2; // 0x6ff Return
}


event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_object = Obj(); // 0x701 PushV
	var_10_object = var_9_object; // 0x702 Mov
	func_1753(var_10_object); // 0x703 NEW_2
	return 0; // 0x705 Return
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	
Label_0:
	var_9_int = 3; // 0x0 PushI
	Sleep(var_9_int); // 0x1 Func
	func_42(); // 0x4 NEW_2
	goto Label_0; // 0x6 Jump
}


func_128(var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x81 PushV
	var_13_object = var_11_object; // 0x82 Mov
	func_1249(var_12_bool, var_13_object); // 0x83 NEW_2
	if(var_12_bool == 0) goto Label_139; // 0x85 JumpB
	var_16_bool = 0; var_17_object = Obj(); var_18_float = 0; // 0x86 PushV
	var_17_object = var_11_object; // 0x87 Mov
	var_18_float = 0.0; // 0x88 MovF
	func_1654(var_16_bool, var_17_object, var_18_float); // 0x89 NEW_2
	
Label_139:
	var_54_object = Obj(); // 0x8b PushV
	var_54_object = var_11_object; // 0x8c Mov
	func_144(var_54_object); // 0x8d NEW_2
	return 0; // 0x8f Return
}


func_1538(var_15_object, var_18_cvector, var_19_cvector)
{
	var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); // 0x602 PushV
	GetScene(var_22_object); // 0x603 Func
	var_24_string = "scripted"; // 0x605 PushS
	var_25_string = "blood_dir.xml"; // 0x606 PushS
	AddActorByType(var_23_object, var_24_string, var_22_object, var_18_cvector, var_19_cvector, var_25_string); // 0x607 Func
	var_26_object = Obj(); // 0x609 PushV
	var_26_object = var_15_object; // 0x60a Mov
	func_1426(var_26_object); // 0x60b NEW_2
	return 4; // 0x60d Return
}


func_260(var_77_string)
{
	RemoveRTEnvelope(); // 0x105 Func
	SetDeathState(); // 0x107 Func
	Stop(); // 0x109 Func
	StopAsync(); // 0x10b Func
	StopSecondaryAnimation(); // 0x10d Func
	var_78_string = ""; // 0x10f PushV
	var_78_string = var_77_string; // 0x110 Mov
	func_1579(var_78_string); // 0x111 NEW_2
	var_107_string = "all"; // 0x113 PushS
	PlayAnimation(var_107_string, var_77_string); // 0x114 Func
	WaitForAnimEnd(); // 0x116 Func
	var_108_string = "all"; // 0x118 PushS
	LockAnimationEnd(var_108_string, var_77_string); // 0x119 Func
	RemoveEnvelope(); // 0x11b Func
	return 0; // 0x11d Return
}


func_1798(var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_object = Obj(); // 0x707 PushV
	var_17_object = var_15_object; // 0x708 Mov
	func_1402(var_16_bool, var_17_object); // 0x709 NEW_2
	var_14_bool = var_16_bool; // 0x70a Mov
	return 0; // 0x70c Return
}


func_1288(var_402_float, var_403_object, var_404_float, var_405_int)
{
	var_409_int = 0; var_410_string = ""; var_411_int = 0; var_412_float = 0; var_413_float = 0; var_414_float = 0; var_415_int = 0; var_416_string = ""; var_417_int = 0; var_418_float = 0; var_419_float = 0; var_420_float = 0; // 0x508 PushV
	var_421_bool = 0; var_422_object = Obj(); var_423_string = ""; // 0x509 PushV
	var_422_object = var_403_object; // 0x50a Mov
	var_423_string = "health"; // 0x50b MovS
	func_1254(var_421_bool, var_422_object, var_423_string); // 0x50c NEW_2
	var_424_bool = var_421_bool == 0; // 0x50e Not
	if(var_424_bool == 0) goto Label_1298; // 0x50f JumpB
	var_402_float = 0.0; // 0x510 MovF
	return 12; // 0x511 Return
	
Label_1298:
	var_425_bool = 0; var_426_object = Obj(); var_427_string = ""; // 0x512 PushV
	var_426_object = var_403_object; // 0x513 Mov
	var_427_string = "armor"; // 0x514 MovS
	func_1254(var_425_bool, var_426_object, var_427_string); // 0x515 NEW_2
	var_428_bool = var_425_bool == 0; // 0x517 Not
	if(var_428_bool == 0) goto Label_1307; // 0x518 JumpB
	var_415_int = 0; // 0x519 MovI
	goto Label_1310; // 0x51a Jump
	
Label_1310:
	var_429_string = "armor_"; // 0x51e PushS
	var_430_string = ""; var_431_int = 0; // 0x51f PushV
	var_431_int = var_405_int; // 0x520 Mov
	func_1228(var_430_string, var_431_int); // 0x521 NEW_2
	var_416_string = var_429_string + var_430_string; // 0x523 Add2
	var_436_bool = 0; var_437_object = Obj(); var_438_string = ""; // 0x524 PushV
	var_437_object = var_403_object; // 0x525 Mov
	var_438_string = var_416_string; // 0x526 Mov
	func_1254(var_436_bool, var_437_object, var_438_string); // 0x527 NEW_2
	var_439_bool = var_436_bool == 0; // 0x529 Not
	if(var_439_bool == 0) goto Label_1325; // 0x52a JumpB
	var_417_int = 0; // 0x52b MovI
	goto Label_1327; // 0x52c Jump
	
Label_1327:
	var_440_float = 0; var_441_float = 0; var_442_float = 0; // 0x52f PushV
	var_443_int = var_415_int + var_417_int; // 0x530 Add
	var_444_float = 100.0; // 0x531 PushF
	var_441_float = var_443_int / var_443_int; // 0x532 Div2
	var_442_float = 1; // 0x533 MovI
	func_1636(var_440_float, var_441_float, var_442_float); // 0x534 NEW_2
	var_418_float = var_440_float; // 0x535 Mov
	var_446_string = "health"; // 0x537 PushS
	GetProperty(var_446_string, var_419_float); // 0x538 ObjFunc
	var_447_int = 1; // 0x53a PushI
	var_448_int = var_447_int - var_418_float; // 0x53b Sub
	var_420_float = var_404_float * var_448_int; // 0x53c Mult2
	var_449_string = "health"; // 0x53d PushS
	var_450_float = 0; var_451_float = 0; var_452_float = 0; var_453_float = 0; // 0x53e PushV
	var_451_float = var_419_float - var_420_float; // 0x53f Sub2
	var_452_float = 0; // 0x540 MovI
	var_453_float = 1; // 0x541 MovI
	func_1643(var_450_float, var_451_float, var_452_float, var_453_float); // 0x542 NEW_2
	SetProperty(var_449_string, var_450_float); // 0x544 ObjFunc
	var_456_bool = 0; var_457_object = Obj(); // 0x546 PushV
	var_457_object = var_403_object; // 0x547 Mov
	func_1249(var_456_bool, var_457_object); // 0x548 NEW_2
	if(var_456_bool == 0) goto Label_1359; // 0x54a JumpB
	var_458_float = 0; // 0x54b PushV
	var_458_float = -var_420_float; // 0x54c Neg2
	func_1689(var_458_float); // 0x54d NEW_2
	
Label_1359:
	var_402_float = var_420_float; // 0x54f Mov
	return 12; // 0x550 Return
	
Label_1325:
	GetProperty(var_416_string, var_417_int); // 0x52d ObjFunc
	
Label_1307:
	var_462_string = "armor"; // 0x51b PushS
	GetProperty(var_462_string, var_415_int); // 0x51c ObjFunc
}


func_777(var_0_object, var_290_bool, var_291_float)
{
	var_292_bool = 0; var_293_cvector = CVector(0,0,0); var_294_cvector = CVector(0,0,0); var_295_cvector = CVector(0,0,0); var_296_float = 0; var_297_bool = 0; var_298_cvector = CVector(0,0,0); var_299_cvector = CVector(0,0,0); var_300_cvector = CVector(0,0,0); var_301_float = 0; // 0x309 PushV
	
Label_778:
	IsAnimationPlaying(var_297_bool); // 0x30a Func
	var_302_bool = var_297_bool == 0; // 0x30c Not
	if(var_302_bool == 0) goto Label_783; // 0x30d JumpB
	goto Label_815; // 0x30e Jump
	
Label_815:
	func_952(var_301_float); // 0x330 NEW_2
	var_290_bool = 0; // 0x332 MovB
	return 10; // 0x333 Return
	
Label_783:
	var_303_bool = 0; // 0x30f PushV
	func_848(var_303_bool); // 0x310 NEW_2
	if(var_303_bool == 0) goto Label_789; // 0x312 JumpB
	var_290_bool = 1; // 0x313 MovB
	return 10; // 0x314 Return
	
Label_789:
	var_346_bool = 0; var_347_object = Obj(); // 0x315 PushV
	var_347_object = var_0_object; // 0x316 MovT
	func_1402(var_346_bool, var_347_object); // 0x317 NEW_2
	var_348_bool = var_346_bool == 0; // 0x319 Not
	if(var_348_bool == 0) goto Label_797; // 0x31a JumpB
	var_290_bool = 0; // 0x31b MovB
	return 10; // 0x31c Return
	
Label_797:
	GetPFPosition(var_298_cvector); // 0x31d TObjFunc
	GetPFPosition(var_299_cvector); // 0x31f Func
	var_300_cvector = var_298_cvector - var_299_cvector; // 0x321 Sub2
	var_301_float = var_300_cvector | var_300_cvector; // 0x322 Or2
	var_349_float = var_291_float * var_291_float; // 0x323 Mult
	var_350_bool = var_301_float < var_349_float; // 0x324 LT
	if(var_350_bool == 0) goto Label_812; // 0x325 JumpB
	var_351_bool = 0; var_352_float = 0; // 0x326 PushV
	var_352_float = var_291_float; // 0x327 Mov
	func_613(var_301_float, var_351_bool, var_352_float); // 0x328 NEW_2
	var_290_bool = 1; // 0x32a MovB
	return 10; // 0x32b Return
	
Label_812:
	sync(); // 0x32c Func
	goto Label_778; // 0x32e Jump
}


func_1035(var_2_int)
{
	var_10_int = 1; // 0x40b PushI
	KillTimer(var_10_int); // 0x40c Func
	var_11_int = var_2_int; // 0x40e PushT
	if(var_11_int == 0) goto Label_1044; // 0x40f JumpB
	var_2_int = 0; // 0x410 TMovB
	var_12_string = "head"; // 0x411 PushS
	UnlookAsync(var_12_string); // 0x412 Func
	
Label_1044:
	func_1201(var_9_object); // 0x415 NEW_2
	return 0; // 0x417 Return
}


func_1805(var_50_object)
{
	var_51_object = Obj(); // 0x70e PushV
	var_51_object = var_50_object; // 0x70f Mov
	func_1830(var_51_object); // 0x710 NEW_2
	return 0; // 0x712 Return
}


func_909(var_0_object, var_253_bool)
{
	var_254_bool = 0; var_255_bool = 0; // 0x38d PushV
	var_256_string = "IsAttacking"; // 0x38e PushS
	var_257_int = 1; // 0x38f PushI
	var_258_bool = IsFuncExist(var_0_object, var_256_string, var_257_int); // 0x390 FuncExist
	if(var_258_bool == 0) goto Label_918; // 0x391 JumpB
	IsAttacking(var_255_bool); // 0x392 TObjFunc
	var_253_bool = var_255_bool; // 0x394 Mov
	return 2; // 0x395 Return
	
Label_918:
	var_253_bool = 0; // 0x396 MovB
	return 2; // 0x397 Return
}


func_144(var_54_object)
{
	EventDisable(0); // 0x91 EventDisable
	var_55_object = Obj(); // 0x92 PushV
	var_55_object = var_54_object; // 0x93 Mov
	func_169(var_55_object); // 0x94 NEW_2
	var_135_int = 50; // 0x96 PushI
	var_136_int = 40; // 0x97 PushI
	SetRTEnvelope(var_135_int, var_136_int); // 0x98 Func
	EventEnable(0); // 0x9a EventEnable
	
Label_155:
	Hold(); // 0x9b Func
	goto Label_155; // 0x9d Jump
}


func_1552()
{
	var_237_cvector = CVector(0,0,0); var_238_cvector = CVector(0,0,0); var_239_cvector = CVector(0,0,0); var_240_cvector = CVector(0,0,0); var_241_cvector = CVector(0,0,0); var_242_cvector = CVector(0,0,0); // 0x610 PushV
	GetPosition(var_240_cvector); // 0x611 ObjFunc
	GetPosition(var_241_cvector); // 0x613 Func
	var_242_cvector = var_240_cvector - var_241_cvector; // 0x615 Sub2
	var_243_float = GetByIndex(var_242_cvector, 0); // 0x616 PushE
	var_244_float = GetByIndex(var_242_cvector, 2); // 0x617 PushE
	RotateAsync(var_243_float, var_244_float); // 0x618 Func
	return 6; // 0x61a Return
}


func_1426(var_26_object)
{
	var_27_bool = 0; var_28_int = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_string = ""; var_34_bool = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = ""; // 0x592 PushV
	var_41_bool = var_26_object == 0; // 0x593 NullEq
	if(var_41_bool == 0) goto Label_1430; // 0x594 JumpB
	return 14; // 0x595 Return
	
Label_1430:
	IsDead(var_34_bool); // 0x596 Func
	var_42_bool = var_34_bool; // 0x598 Push
	if(var_42_bool == 0) goto Label_1435; // 0x599 JumpB
	return 14; // 0x59a Return
	
Label_1435:
	GetSecondaryAnimationType(var_35_int); // 0x59b Func
	var_43_int = 0; // 0x59d PushI
	var_44_bool = var_35_int < var_43_int; // 0x59e LT
	if(var_44_bool == 0) goto Label_1441; // 0x59f JumpB
	return 14; // 0x5a0 Return
	
Label_1441:
	GetPosition(var_36_cvector); // 0x5a1 ObjFunc
	GetPosition(var_37_cvector); // 0x5a3 Func
	GetDirection(var_38_cvector); // 0x5a5 Func
	var_39_cvector = var_37_cvector - var_36_cvector; // 0x5a7 Sub2
	var_45_float = GetByIndex(var_39_cvector, 0); // 0x5a8 PushE
	var_46_float = GetByIndex(var_38_cvector, 0); // 0x5a9 PushE
	var_47_float = var_45_float * var_46_float; // 0x5aa Mult
	var_48_float = GetByIndex(var_39_cvector, 2); // 0x5ab PushE
	var_49_float = GetByIndex(var_38_cvector, 2); // 0x5ac PushE
	var_50_float = var_48_float * var_49_float; // 0x5ad Mult
	var_51_int = var_47_float + var_50_float; // 0x5ae Add
	var_52_int = 0; // 0x5af PushI
	var_53_bool = var_51_int >= var_52_int; // 0x5b0 GE
	if(var_53_bool == 0) goto Label_1460; // 0x5b1 JumpB
	var_40_string = "fhit"; // 0x5b2 MovS
	goto Label_1461; // 0x5b3 Jump
	
Label_1461:
	var_54_string = "hit_react"; // 0x5b5 PushS
	var_55_string = "1"; // 0x5b6 PushS
	var_56_int = var_40_string + var_55_string; // 0x5b7 Add
	var_57_string = "2"; // 0x5b8 PushS
	var_58_int = var_40_string + var_57_string; // 0x5b9 Add
	var_59_int = -10; // 0x5ba PushI
	FadeSecondaryAnimation(var_54_string, var_56_int, var_58_int, var_59_int); // 0x5bb Func
	return 14; // 0x5bd Return
	
Label_1460:
	var_40_string = "bhit"; // 0x5b4 MovS
}


func_1811(var_14_int)
{
	var_15_int = 0; var_16_int = 0; // 0x713 PushV
	var_17_string = "branch"; // 0x714 PushS
	GetVariable(var_17_string, var_16_int); // 0x715 Func
	var_14_int = var_16_int; // 0x717 Mov
	return 2; // 0x718 Return
}


func_920(var_2_int, var_5_float)
{
	var_370_float = 0; var_371_int = 0; var_372_float = 0; var_373_int = 0; // 0x398 PushV
	var_374_bool = var_2_int == 0; // 0x399 Not
	if(var_374_bool == 0) goto Label_924; // 0x39a JumpB
	return 4; // 0x39b Return
	
Label_924:
	var_375_float = var_5_float; // 0x39c PushT
	if(var_375_float == 0) goto Label_932; // 0x39d JumpB
	var_376_int = -1; // 0x39e PushI
	var_5_float = var_5_float + var_376_int; // 0x39f Add2
	var_377_int = 0; // 0x3a0 PushI
	var_378_bool = var_5_float > var_377_int; // 0x3a1 GT
	if(var_378_bool == 0) goto Label_932; // 0x3a2 JumpB
	return 4; // 0x3a3 Return
	
Label_932:
	rand(var_372_float); // 0x3a4 Func
	var_379_float = 0; // 0x3a6 PushV
	func_970(var_379_float); // 0x3a7 NEW_2
	var_380_bool = var_372_float < var_379_float; // 0x3a9 LT
	if(var_380_bool == 0) goto Label_951; // 0x3aa JumpB
	irand(var_373_int, var_372_float); // 0x3ab Func
	var_381_int = 1; // 0x3ad PushI
	var_373_int = var_373_int + var_381_int; // 0x3ae Add2
	var_382_string = "attack"; // 0x3af PushS
	var_383_int = var_382_string + var_373_int; // 0x3b0 Add
	Speak(var_383_int); // 0x3b1 Func
	var_384_int = 0; // 0x3b3 PushV
	func_968(var_384_int); // 0x3b4 NEW_2
	var_5_float = var_384_int; // 0x3b5 TMov
	
Label_951:
	return 4; // 0x3b7 Return
}


func_1817(var_13_object)
{
	var_14_int = 0; // 0x71a PushV
	func_1811(var_14_int); // 0x71b NEW_2
	var_18_int = 1; // 0x71d PushI
	var_19_bool = var_14_int == var_18_int; // 0x71e Eq
	if(var_19_bool == 0) goto Label_1827; // 0x71f JumpB
	WorkWithCorpse(var_13_object); // 0x720 Func
	goto Label_1829; // 0x722 Jump
	
Label_1829:
	return 0; // 0x725 Return
	
Label_1827:
	Barter(var_13_object); // 0x723 Func
}


func_1689(var_458_float)
{
	var_459_object = Obj(); var_460_object = Obj(); // 0x699 PushV
	CreateFloatVector(var_460_object); // 0x69a Func
	add(var_458_float); // 0x69c ObjFunc
	var_461_int = 15; // 0x69e PushI
	SendWorldWndMessage(var_461_int, var_460_object); // 0x69f Func
	return 2; // 0x6a1 Return
}


func_1179(var_0_object, var_1_int, var_17_int)
{
	var_18_int = 0; // 0x49c PushI
	var_19_bool = var_17_int != var_18_int; // 0x49d Neq
	if(var_19_bool == 0) goto Label_1184; // 0x49e JumpB
	return 0; // 0x49f Return
	
Label_1184:
	var_20_bool = 0; var_21_object = Obj(); // 0x4a0 PushV
	var_21_object = var_1_int; // 0x4a1 MovT
	func_1217(var_20_bool, var_21_object); // 0x4a2 NEW_2
	var_56_bool = var_20_bool == 0; // 0x4a4 Not
	if(var_56_bool == 0) goto Label_1191; // 0x4a5 JumpB
	var_0_object = 1; // 0x4a6 TMovB
	
Label_1191:
	var_57_int = 0; // 0x4a7 PushI
	KillTimer(var_57_int); // 0x4a8 Func
	Stop(); // 0x4aa Func
	return 0; // 0x4ac Return
}


func_1563(var_24_bool)
{
	var_25_bool = 0; var_26_bool = 0; // 0x61b PushV
	IsLoaded(var_26_bool); // 0x61c Func
	var_24_bool = var_26_bool; // 0x61e Mov
	return 2; // 0x61f Return
}


func_539(var_1_object, var_2_int, var_4_bool)
{
	var_89_bool = 0; var_90_bool = 0; var_91_cvector = CVector(0,0,0); var_92_bool = 0; var_93_bool = 0; var_94_cvector = CVector(0,0,0); // 0x21b PushV
	var_1_object = 0; // 0x21c TMovI
	
Label_541:
	var_95_string = "all"; // 0x21d PushS
	var_96_string = "attack_begin"; // 0x21e PushS
	var_97_int = 1; // 0x21f PushI
	var_98_int = var_1_object + var_97_int; // 0x220 Add
	var_99_int = var_96_string + var_98_int; // 0x221 Add
	HasAnimation(var_92_bool, var_95_string, var_99_int); // 0x222 Func
	var_100_bool = var_92_bool == 0; // 0x224 Not
	if(var_100_bool == 0) goto Label_551; // 0x225 JumpB
	goto Label_554; // 0x226 Jump
	
Label_554:
	var_2_int = 0; // 0x22a TMovI
	
Label_555:
	var_101_string = "attack"; // 0x22b PushS
	var_102_int = 1; // 0x22c PushI
	var_103_int = var_2_int + var_102_int; // 0x22d Add
	var_104_int = var_101_string + var_103_int; // 0x22e Add
	IsExisting3DSound(var_93_bool, var_104_int); // 0x22f Func
	var_105_bool = var_93_bool == 0; // 0x231 Not
	if(var_105_bool == 0) goto Label_564; // 0x232 JumpB
	goto Label_567; // 0x233 Jump
	
Label_567:
	var_106_string = "all"; // 0x237 PushS
	var_107_string = "bjump"; // 0x238 PushS
	GetAnimationOffset(var_94_cvector, var_106_string, var_107_string); // 0x239 Func
	var_108_float = GetByIndex(var_94_cvector, 2); // 0x23b PushE
	var_4_bool = -var_108_float; // 0x23c Neg2
	return 6; // 0x23d Return
	
Label_564:
	var_109_int = 1; // 0x234 PushI
	var_2_int = var_2_int + var_109_int; // 0x235 Add2
	goto Label_555; // 0x236 Jump
	
Label_551:
	var_110_int = 1; // 0x227 PushI
	var_1_object = var_1_object + var_110_int; // 0x228 Add2
	goto Label_541; // 0x229 Jump
}


func_1568(var_13_object)
{
	var_14_float = 0; var_15_cvector = CVector(0,0,0); var_16_float = 0; var_17_cvector = CVector(0,0,0); // 0x620 PushV
	GetEyesHeight(var_16_float); // 0x621 ObjFunc
	var_17_cvector = CVector(0.0, 0.0, 0.0); // 0x623 MovV
	var_18_float = GetByIndex(var_17_cvector, 1); // 0x624 PushE
	var_18_float = var_16_float; // 0x625 Mov
	SetByIndex(var_17_cvector, 1) = var_18_float; // 0x626 PopE
	var_19_string = "head"; // 0x627 PushS
	LookAsync(var_13_object, var_19_string, var_17_cvector); // 0x628 Func
	return 4; // 0x62a Return
}


func_1699(var_23_float)
{
	var_24_object = Obj(); var_25_object = Obj(); // 0x6a3 PushV
	CreateFloatVector(var_25_object); // 0x6a4 Func
	add(var_23_float); // 0x6a6 ObjFunc
	var_26_int = 16; // 0x6a8 PushI
	SendWorldWndMessage(var_26_int, var_25_object); // 0x6a9 Func
	return 2; // 0x6ab Return
}


func_292(var_57_object)
{
	
Label_293:
	var_64_object = Obj(); var_65_bool = 0; var_66_float = 0; // 0x125 PushV
	var_64_object = var_57_object; // 0x126 Mov
	var_65_bool = 1; // 0x127 MovB
	var_66_float = 180.0; // 0x128 MovF
	func_310(var_60_int, var_61_bool, var_62_float, var_63_int, var_57_object, var_64_object, var_65_bool, var_66_float); // 0x129 NEW_2
	var_521_int = 1; // 0x12b PushI
	Sleep(var_521_int); // 0x12c Func
	goto Label_293; // 0x12e Jump
}


func_1830(var_51_object)
{
	var_52_object = Obj(); var_53_object = Obj(); // 0x726 PushV
	GetScene(var_53_object); // 0x727 Func
	var_54_object = Obj(); // 0x729 PushV
	func_1620(var_54_object); // 0x72a NEW_2
	RemoveStationaryActor(var_54_object); // 0x72c ObjFunc
	var_57_object = Obj(); // 0x72e PushV
	var_57_object = var_51_object; // 0x72f Mov
	TaskCall(2); // 0x730 TaskCall
	func_292(var_57_object); // 0x731 NEW_2
	TaskReturn(); // 0x732 TaskReturn
	return 2; // 0x734 Return
}


func_169(var_55_object)
{
	var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_string = ""; var_61_object = Obj(); var_62_bool = 0; var_63_bool = 0; var_64_float = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_string = ""; var_71_object = Obj(); var_72_bool = 0; var_73_bool = 0; var_74_float = 0; var_75_cvector = CVector(0,0,0); // 0xa9 PushV
	var_76_bool = var_55_object == 0; // 0xaa NullEq
	if(var_76_bool == 0) goto Label_177; // 0xab JumpB
	var_77_string = ""; // 0xac PushV
	var_77_string = "fdie"; // 0xad MovS
	func_260(var_77_string); // 0xae NEW_2
	goto Label_259; // 0xb0 Jump
	
Label_259:
	return 20; // 0x103 Return
	
Label_177:
	GetPosition(var_66_cvector); // 0xb1 ObjFunc
	GetPosition(var_67_cvector); // 0xb3 Func
	GetDirection(var_68_cvector); // 0xb5 Func
	var_69_cvector = var_67_cvector - var_66_cvector; // 0xb7 Sub2
	var_109_float = GetByIndex(var_69_cvector, 0); // 0xb8 PushE
	var_110_float = GetByIndex(var_68_cvector, 0); // 0xb9 PushE
	var_111_float = var_109_float * var_110_float; // 0xba Mult
	var_112_float = GetByIndex(var_69_cvector, 2); // 0xbb PushE
	var_113_float = GetByIndex(var_68_cvector, 2); // 0xbc PushE
	var_114_float = var_112_float * var_113_float; // 0xbd Mult
	var_115_int = var_111_float + var_114_float; // 0xbe Add
	var_116_int = 0; // 0xbf PushI
	var_117_bool = var_115_int >= var_116_int; // 0xc0 GE
	if(var_117_bool == 0) goto Label_196; // 0xc1 JumpB
	var_70_string = "fdie"; // 0xc2 MovS
	goto Label_197; // 0xc3 Jump
	
Label_197:
	RemoveRTEnvelope(); // 0xc5 Func
	SetDeathState(); // 0xc7 Func
	Stop(); // 0xc9 Func
	StopAsync(); // 0xcb Func
	var_71_object = var_55_object; // 0xcd Mov
	var_118_string = "GetScriptProperty"; // 0xce PushS
	var_119_int = 2; // 0xcf PushI
	var_120_bool = IsFuncExist(var_55_object, var_118_string, var_119_int); // 0xd0 FuncExist
	if(var_120_bool == 0) goto Label_221; // 0xd1 JumpB
	var_121_string = "Owner"; // 0xd2 PushS
	HasScriptProperty(var_72_bool, var_121_string); // 0xd3 ObjFunc
	var_122_bool = var_72_bool; // 0xd5 Push
	if(var_122_bool == 0) goto Label_221; // 0xd6 JumpB
	var_123_string = "Owner"; // 0xd7 PushS
	GetScriptProperty(var_71_object, var_123_string); // 0xd8 ObjFunc
	var_124_bool = var_71_object == 0; // 0xda NullEq
	if(var_124_bool == 0) goto Label_221; // 0xdb JumpB
	var_71_object = var_55_object; // 0xdc Mov
	
Label_221:
	var_125_string = "@GetEyesHeight"; // 0xdd PushS
	var_126_int = 1; // 0xde PushI
	var_127_bool = IsFuncExist(var_71_object, var_125_string, var_126_int); // 0xdf FuncExist
	if(var_127_bool == 0) goto Label_236; // 0xe0 JumpB
	GetEyesHeight(var_74_float); // 0xe1 ObjFunc
	var_75_cvector = CVector(0.0, 0.0, 0.0); // 0xe3 MovV
	var_128_float = GetByIndex(var_75_cvector, 1); // 0xe4 PushE
	var_128_float = var_74_float; // 0xe5 Mov
	SetByIndex(var_75_cvector, 1) = var_128_float; // 0xe6 PopE
	var_129_string = "head"; // 0xe7 PushS
	LookAsync(var_55_object, var_129_string, var_75_cvector); // 0xe8 Func
	var_73_bool = 1; // 0xea MovB
	goto Label_237; // 0xeb Jump
	
Label_237:
	var_130_string = ""; // 0xed PushV
	var_130_string = var_70_string; // 0xee Mov
	func_1579(var_130_string); // 0xef NEW_2
	var_131_string = "all"; // 0xf1 PushS
	PlayAnimation(var_131_string, var_70_string); // 0xf2 Func
	WaitForAnimEnd(); // 0xf4 Func
	var_132_bool = var_73_bool; // 0xf6 Push
	if(var_132_bool == 0) goto Label_253; // 0xf7 JumpB
	StopAsync(); // 0xf8 Func
	var_133_string = "head"; // 0xfa PushS
	UnlookAsync(var_133_string); // 0xfb Func
	
Label_253:
	var_134_string = "all"; // 0xfd PushS
	LockAnimationEnd(var_134_string, var_70_string); // 0xfe Func
	RemoveEnvelope(); // 0x100 Func
	var_71_object = 0; // 0x102 SetNull
	
Label_236:
	var_73_bool = 0; // 0xec MovB
	
Label_196:
	var_70_string = "bdie"; // 0xc4 MovS
}


func_42()
{
	var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_bool = 0; var_15_float = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_bool = 0; var_22_float = 0; var_23_bool = 0; // 0x2a PushV
	WaitForAnimEnd(); // 0x2b Func
	var_24_bool = 0; // 0x2d PushV
	func_1563(var_24_bool); // 0x2e NEW_2
	var_27_bool = var_24_bool == 0; // 0x30 Not
	if(var_27_bool == 0) goto Label_51; // 0x31 JumpB
	return 14; // 0x32 Return
	
Label_51:
	var_28_int = 0; // 0x33 PushV
	func_1736(var_28_int); // 0x34 NEW_2
	var_17_int = var_28_int; // 0x35 Mov
	var_18_int = 0; // 0x37 MovI
	
Label_56:
	var_41_bool = 0; // 0x38 PushV
	var_41_bool = 0; // 0x39 MovB
	var_42_int = 5; // 0x3a PushI
	var_43_bool = var_18_int < var_42_int; // 0x3b LT
	if(var_43_bool == 0) goto Label_66; // 0x3c JumpB
	var_44_bool = 0; // 0x3d PushV
	func_1563(var_44_bool); // 0x3e NEW_2
	if(var_44_bool == 0) goto Label_66; // 0x40 JumpB
	var_41_bool = 1; // 0x41 MovB
	
Label_66:
	if(var_41_bool == 0) goto Label_118; // 0x42 JumpB
	var_45_int = 3; // 0x43 PushI
	irand(var_19_int, var_45_int); // 0x44 Func
	var_46_int = 0; // 0x46 PushI
	var_47_bool = var_19_int == var_46_int; // 0x47 Eq
	if(var_47_bool == 0) goto Label_90; // 0x48 JumpB
	var_48_int = var_17_int; // 0x49 Push
	if(var_48_int == 0) goto Label_89; // 0x4a JumpB
	irand(var_20_int, var_17_int); // 0x4b Func
	var_49_string = "all"; // 0x4d PushS
	var_50_string = ""; var_51_int = 0; // 0x4e PushV
	var_51_int = var_20_int; // 0x4f Mov
	func_1729(var_50_string, var_51_int); // 0x50 NEW_2
	PlayAnimation(var_49_string, var_50_string); // 0x52 Func
	WaitForAnimEnd(var_21_bool); // 0x54 Func
	var_52_bool = var_21_bool == 0; // 0x56 Not
	if(var_52_bool == 0) goto Label_89; // 0x57 JumpB
	goto Label_118; // 0x58 Jump
	
Label_118:
	ResetAAS(); // 0x76 Func
	return 14; // 0x78 Return
	
Label_89:
	goto Label_107; // 0x59 Jump
	
Label_107:
	var_53_bool = 0; // 0x6b PushV
	func_121(var_53_bool); // 0x6c NEW_2
	var_54_bool = var_53_bool == 0; // 0x6e Not
	if(var_54_bool == 0) goto Label_113; // 0x6f JumpB
	goto Label_118; // 0x70 Jump
	
Label_113:
	ResetAAS(); // 0x71 Func
	var_55_int = 1; // 0x73 PushI
	var_18_int = var_18_int + var_55_int; // 0x74 Add2
	goto Label_56; // 0x75 Jump
	
Label_90:
	var_56_int = 1; // 0x5a PushI
	var_57_bool = var_19_int == var_56_int; // 0x5b Eq
	if(var_57_bool == 0) goto Label_104; // 0x5c JumpB
	var_58_int = 4; // 0x5d PushI
	rand(var_22_float, var_58_int); // 0x5e Func
	var_59_int = 1; // 0x60 PushI
	var_60_int = var_22_float + var_59_int; // 0x61 Add
	Sleep(var_60_int, var_23_bool); // 0x62 Func
	var_61_bool = var_23_bool == 0; // 0x64 Not
	if(var_61_bool == 0) goto Label_103; // 0x65 JumpB
	goto Label_118; // 0x66 Jump
	
Label_103:
	goto Label_107; // 0x67 Jump
	
Label_104:
	var_62_int = var_18_int; // 0x68 Push
	if(var_62_int == 0) goto Label_107; // 0x69 JumpB
	goto Label_118; // 0x6a Jump
}


func_1579(var_78_string)
{
	var_79_bool = 0; var_80_int = 0; var_81_bool = 0; var_82_int = 0; var_83_bool = 0; var_84_float = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_bool = 0; var_88_int = 0; var_89_bool = 0; var_90_int = 0; var_91_bool = 0; var_92_float = 0; var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); // 0x62b PushV
	IsExisting3DSound(var_87_bool, var_78_string); // 0x62c Func
	var_95_bool = var_87_bool == 0; // 0x62e Not
	if(var_95_bool == 0) goto Label_1604; // 0x62f JumpB
	var_88_int = 0; // 0x630 MovI
	
Label_1585:
	var_96_int = 1; // 0x631 PushI
	var_97_int = var_88_int + var_96_int; // 0x632 Add
	var_98_int = var_78_string + var_97_int; // 0x633 Add
	IsExisting3DSound(var_89_bool, var_98_int); // 0x634 Func
	var_99_bool = var_89_bool == 0; // 0x636 Not
	if(var_99_bool == 0) goto Label_1593; // 0x637 JumpB
	goto Label_1596; // 0x638 Jump
	
Label_1596:
	var_100_bool = var_88_int == 0; // 0x63c Not
	if(var_100_bool == 0) goto Label_1599; // 0x63d JumpB
	return 16; // 0x63e Return
	
Label_1599:
	irand(var_90_int, var_88_int); // 0x63f Func
	var_101_int = 1; // 0x641 PushI
	var_102_int = var_90_int + var_101_int; // 0x642 Add
	var_78_string = var_78_string + var_102_int; // 0x643 Add2
	
Label_1604:
	Is3DSoundLoaded(var_91_bool, var_78_string); // 0x644 Func
	var_103_bool = var_91_bool; // 0x646 Push
	if(var_103_bool == 0) goto Label_1619; // 0x647 JumpB
	GetEyesHeight(var_92_float); // 0x648 Func
	GetDirection(var_93_cvector); // 0x64a Func
	var_104_int = 50; // 0x64c PushI
	var_94_cvector = var_93_cvector * var_104_int; // 0x64d Mult2
	var_105_float = GetByIndex(var_94_cvector, 1); // 0x64e PushE
	var_105_float = var_105_float + var_92_float; // 0x64f Add2
	SetByIndex(var_94_cvector, 1) = var_105_float; // 0x650 PopE
	PlayGlobalSound(var_78_string, var_94_cvector); // 0x651 Func
	
Label_1619:
	return 16; // 0x653 Return
	
Label_1593:
	var_106_int = 1; // 0x639 PushI
	var_88_int = var_88_int + var_106_int; // 0x63a Add2
	goto Label_1585; // 0x63b Jump
}


func_1709(var_12_object)
{
	var_13_bool = 0; var_14_bool = 0; // 0x6ad PushV
	IsPlayerActor(var_12_object, var_14_bool); // 0x6ae Func
	var_15_bool = var_14_bool; // 0x6b0 Push
	if(var_15_bool == 0) goto Label_1717; // 0x6b1 JumpB
	var_16_string = "attack"; // 0x6b2 PushS
	PlayGlobalMusic(var_16_string); // 0x6b3 Func
	
Label_1717:
	return 2; // 0x6b5 Return
}


func_304(var_399_float)
{
	var_399_float = 0.03; // 0x131 MovF
	return 0; // 0x132 Return
}


func_1201(var_0_object)
{
	var_0_object = 1; // 0x4b1 TMovB
	var_13_int = 0; // 0x4b2 PushI
	KillTimer(var_13_int); // 0x4b3 Func
	Stop(); // 0x4b5 Func
	return 0; // 0x4b7 Return
}


func_307(var_406_int)
{
	var_406_int = 0; // 0x134 MovI
	return 0; // 0x135 Return
}


func_820(var_0_object, var_305_bool)
{
	var_306_cvector = CVector(0,0,0); var_307_cvector = CVector(0,0,0); var_308_cvector = CVector(0,0,0); var_309_float = 0; var_310_float = 0; var_311_cvector = CVector(0,0,0); var_312_cvector = CVector(0,0,0); var_313_cvector = CVector(0,0,0); var_314_float = 0; var_315_float = 0; // 0x334 PushV
	var_316_bool = 0; var_317_object = Obj(); // 0x335 PushV
	var_317_object = var_0_object; // 0x336 MovT
	func_1402(var_316_bool, var_317_object); // 0x337 NEW_2
	var_318_bool = var_316_bool == 0; // 0x339 Not
	if(var_318_bool == 0) goto Label_829; // 0x33a JumpB
	var_305_bool = 0; // 0x33b MovB
	return 10; // 0x33c Return
	
Label_829:
	var_319_bool = 0; // 0x33d PushV
	func_909(var_315_float, var_319_bool); // 0x33e NEW_2
	if(var_319_bool == 0) goto Label_846; // 0x340 JumpB
	GetPFPosition(var_311_cvector); // 0x341 TObjFunc
	GetPFPosition(var_312_cvector); // 0x343 Func
	var_313_cvector = var_311_cvector - var_312_cvector; // 0x345 Sub2
	var_314_float = var_313_cvector | var_313_cvector; // 0x346 Or2
	GetAttackDistance(var_315_float); // 0x347 TObjFunc
	var_320_int = 50; // 0x349 PushI
	var_315_float = var_315_float + var_320_int; // 0x34a Add2
	var_321_float = var_315_float * var_315_float; // 0x34b Mult
	var_305_bool = var_314_float <= var_321_float; // 0x34c LE2
	return 10; // 0x34d Return
	
Label_846:
	var_305_bool = 0; // 0x34e MovB
	return 10; // 0x34f Return
}


func_1077(var_0_object, var_1_object, var_162_bool, var_163_object, var_164_float, var_165_float, var_166_bool, var_167_bool)
{
	var_168_bool = 0; var_169_bool = 0; var_170_object = Obj(); var_171_cvector = CVector(0,0,0); var_172_cvector = CVector(0,0,0); var_173_cvector = CVector(0,0,0); var_174_float = 0; var_175_object = Obj(); var_176_bool = 0; var_177_bool = 0; var_178_object = Obj(); var_179_cvector = CVector(0,0,0); var_180_cvector = CVector(0,0,0); var_181_cvector = CVector(0,0,0); var_182_float = 0; var_183_object = Obj(); // 0x435 PushV
	var_0_object = 0; // 0x436 TMovB
	var_1_object = var_163_object; // 0x437 TMov
	var_177_bool = var_167_bool; // 0x438 Mov
	
Label_1081:
	var_184_bool = 0; var_185_object = Obj(); // 0x439 PushV
	var_185_object = var_163_object; // 0x43a Mov
	func_1217(var_184_bool, var_185_object); // 0x43b NEW_2
	var_188_bool = var_184_bool == 0; // 0x43d Not
	if(var_188_bool == 0) goto Label_1089; // 0x43e JumpB
	var_162_bool = 0; // 0x43f MovB
	return 16; // 0x440 Return
	
Label_1089:
	GetPosition(var_179_cvector); // 0x441 ObjFunc
	GetPosition(var_180_cvector); // 0x443 Func
	var_181_cvector = var_179_cvector - var_180_cvector; // 0x445 Sub2
	var_182_float = var_181_cvector | var_181_cvector; // 0x446 Or2
	var_189_bool = 0; // 0x447 PushV
	var_189_bool = 0; // 0x448 MovB
	var_190_int = 0; // 0x449 PushI
	var_191_bool = var_165_float > var_190_int; // 0x44a GT
	if(var_191_bool == 0) goto Label_1104; // 0x44b JumpB
	var_192_float = var_165_float * var_165_float; // 0x44c Mult
	var_193_bool = var_182_float > var_192_float; // 0x44d GT
	if(var_193_bool == 0) goto Label_1104; // 0x44e JumpB
	var_189_bool = 1; // 0x44f MovB
	
Label_1104:
	if(var_189_bool == 0) goto Label_1109; // 0x450 JumpB
	Stop(); // 0x451 Func
	var_162_bool = 0; // 0x453 MovB
	return 16; // 0x454 Return
	
Label_1109:
	var_194_float = var_164_float * var_164_float; // 0x455 Mult
	var_195_bool = var_182_float > var_194_float; // 0x456 GT
	if(var_195_bool == 0) goto Label_1171; // 0x457 JumpB
	GetPFPosition(var_179_cvector); // 0x458 ObjFunc
	FindPathTo(var_183_object, var_179_cvector); // 0x45a Func
	var_196_bool = var_183_object != 0; // 0x45c NullNeq
	if(var_196_bool == 0) goto Label_1120; // 0x45d JumpB
	var_178_object = var_183_object; // 0x45e Mov
	var_183_object = 0; // 0x45f SetNull
	
Label_1120:
	var_197_bool = var_178_object != 0; // 0x460 NullNeq
	if(var_197_bool == 0) goto Label_1153; // 0x461 JumpB
	var_198_bool = var_177_bool; // 0x462 Push
	if(var_198_bool == 0) goto Label_1130; // 0x463 JumpB
	var_177_bool = 0; // 0x464 MovB
	RotatePath(var_178_object, var_176_bool); // 0x465 Func
	var_199_bool = var_176_bool == 0; // 0x467 Not
	if(var_199_bool == 0) goto Label_1130; // 0x468 JumpB
	goto Label_1177; // 0x469 Jump
	
Label_1177:
	var_162_bool = !var_0_object; // 0x499 Not2
	return 16; // 0x49a Return
	
Label_1130:
	var_200_int = 0; // 0x46a PushI
	var_201_float = 0.3; // 0x46b PushF
	SetTimer(var_200_int, var_201_float); // 0x46c Func
	var_202_string = ""; // 0x46e PushV
	func_1224(var_202_string); // 0x46f NEW_2
	var_203_string = ""; // 0x471 PushV
	func_1226(var_203_string); // 0x472 NEW_2
	FollowPath(var_178_object, var_166_bool, var_176_bool, var_202_string, var_203_string); // 0x474 Func
	var_204_bool = var_176_bool == 0; // 0x476 Not
	if(var_204_bool == 0) goto Label_1151; // 0x477 JumpB
	var_205_object = var_0_object; // 0x478 PushT
	if(var_205_object == 0) goto Label_1149; // 0x479 JumpB
	var_178_object = 0; // 0x47a SetNull
	goto Label_1177; // 0x47b Jump
	
Label_1149:
	goto Label_1176; // 0x47d Jump
	
Label_1176:
	goto Label_1081; // 0x498 Jump
	
Label_1151:
	var_178_object = 0; // 0x47f SetNull
	goto Label_1169; // 0x480 Jump
	
Label_1169:
	var_183_object = 0; // 0x491 SetNull
	goto Label_1175; // 0x492 Jump
	
Label_1175:
	var_178_object = 0; // 0x497 SetNull
	
Label_1153:
	var_206_int = 0; // 0x481 PushI
	KillTimer(var_206_int); // 0x482 Func
	var_207_float = 0.5; // 0x484 PushF
	Sleep(var_207_float, var_176_bool); // 0x485 Func
	var_208_bool = var_176_bool == 0; // 0x487 Not
	if(var_208_bool == 0) goto Label_1165; // 0x488 JumpB
	var_209_object = var_0_object; // 0x489 PushT
	if(var_209_object == 0) goto Label_1165; // 0x48a JumpB
	var_178_object = 0; // 0x48b SetNull
	goto Label_1177; // 0x48c Jump
	
Label_1165:
	var_210_int = 0; // 0x48d PushI
	var_211_float = 0.3; // 0x48e PushF
	SetTimer(var_210_int, var_211_float); // 0x48f Func
	
Label_1171:
	var_212_int = 0; // 0x493 PushI
	KillTimer(var_212_int); // 0x494 Func
	goto Label_1177; // 0x496 Jump
}


func_310(var_0_object, var_3_int, var_5_float, var_64_object, var_65_bool, var_66_float, var_139_bool, var_231_bool)
{
	var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_bool = 0; var_71_bool = 0; var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_float = 0; var_75_cvector = CVector(0,0,0); var_76_bool = 0; var_77_float = 0; var_78_float = 0; var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_bool = 0; var_82_bool = 0; var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_bool = 0; var_88_float = 0; // 0x136 PushV
	func_539(var_86_cvector, var_87_bool, var_88_float); // 0x138 NEW_2
	var_5_float = 0; // 0x13a TMovI
	var_111_string = "@GetAttackDistance"; // 0x13b PushS
	var_112_int = 1; // 0x13c PushI
	var_113_bool = IsFuncExist(var_64_object, var_111_string, var_112_int); // 0x13d FuncExist
	if(var_113_bool == 0) goto Label_324; // 0x13e JumpB
	GetAttackDistance(var_78_float); // 0x13f ObjFunc
	var_114_int = 50; // 0x141 PushI
	var_78_float = var_78_float + var_114_int; // 0x142 Add2
	goto Label_325; // 0x143 Jump
	
Label_325:
	var_115_int = 150; // 0x145 PushI
	var_116_bool = var_78_float >= var_115_int; // 0x146 GE
	if(var_116_bool == 0) goto Label_329; // 0x147 JumpB
	var_78_float = 150; // 0x148 MovI
	
Label_329:
	var_3_int = 0; // 0x149 TMovB
	var_0_object = var_64_object; // 0x14a TMov
	IsPlayerActor(var_0_object, var_81_bool); // 0x14b Func
	var_117_bool = var_81_bool; // 0x14d Push
	if(var_117_bool == 0) goto Label_343; // 0x14e JumpB
	var_118_string = "attack"; // 0x14f PushS
	PlayGlobalMusic(var_118_string); // 0x150 Func
	var_119_object = Obj(); // 0x152 PushV
	func_1620(var_119_object); // 0x153 NEW_2
	SendPlayerEnemy(var_64_object, var_119_object); // 0x155 Func
	
Label_343:
	var_120_bool = var_65_bool; // 0x157 Push
	if(var_120_bool == 0) goto Label_347; // 0x158 JumpB
	var_82_bool = 0; // 0x159 MovB
	goto Label_348; // 0x15a Jump
	
Label_348:
	var_121_float = 400.0; // 0x15c PushF
	var_83_float = var_121_float + var_78_float; // 0x15d Add2
	
Label_350:
	var_122_bool = 0; // 0x15e PushV
	var_122_bool = 0; // 0x15f MovB
	var_123_bool = 0; var_124_object = Obj(); // 0x160 PushV
	var_124_object = var_0_object; // 0x161 MovT
	func_1402(var_123_bool, var_124_object); // 0x162 NEW_2
	if(var_123_bool == 0) goto Label_360; // 0x164 JumpB
	var_125_bool = var_3_int == 0; // 0x165 Not
	if(var_125_bool == 0) goto Label_360; // 0x166 JumpB
	var_122_bool = 1; // 0x167 MovB
	
Label_360:
	if(var_122_bool == 0) goto Label_522; // 0x168 JumpB
	func_952(var_88_float); // 0x16a NEW_2
	GetPFPosition(var_79_cvector); // 0x16c TObjFunc
	GetPFPosition(var_80_cvector); // 0x16e Func
	var_84_cvector = var_79_cvector - var_80_cvector; // 0x170 Sub2
	var_85_float = var_84_cvector | var_84_cvector; // 0x171 Or2
	var_131_float = var_83_float * var_83_float; // 0x172 Mult
	var_132_bool = var_85_float >= var_131_float; // 0x173 GE
	if(var_132_bool == 0) goto Label_388; // 0x174 JumpB
	var_133_bool = 0; var_134_object = Obj(); var_135_float = 0; var_136_float = 0; var_137_bool = 0; var_138_bool = 0; // 0x175 PushV
	var_134_object = var_0_object; // 0x176 MovT
	var_135_float = var_78_float; // 0x177 Mov
	var_136_float = 3000.0; // 0x178 MovF
	var_137_bool = 1; // 0x179 MovB
	var_138_bool = 0; // 0x17a MovB
	TaskCall(3); // 0x17b TaskCall
	func_972(var_141_bool, var_133_bool, var_134_object, var_135_float, var_136_float, var_137_bool, var_138_bool); // 0x17c NEW_2
	TaskReturn(); // 0x17d TaskReturn
	var_216_bool = var_139_bool == 0; // 0x17f Not
	if(var_216_bool == 0) goto Label_386; // 0x180 JumpB
	goto Label_522; // 0x181 Jump
	
Label_522:
	WaitForAnimEnd(); // 0x20a Func
	var_217_int = var_3_int; // 0x20c PushT
	if(var_217_int == 0) goto Label_527; // 0x20d JumpB
	return 22; // 0x20e Return
	
Label_527:
	var_218_string = "all"; // 0x20f PushS
	var_219_string = "attack_off"; // 0x210 PushS
	PlayAnimation(var_218_string, var_219_string); // 0x211 Func
	WaitForAnimEnd(); // 0x213 Func
	var_220_bool = var_81_bool; // 0x215 Push
	if(var_220_bool == 0) goto Label_538; // 0x216 JumpB
	var_221_float = 2.0; // 0x217 PushF
	Sleep(var_221_float); // 0x218 Func
	
Label_538:
	return 22; // 0x21a Return
	
Label_386:
	var_82_bool = 0; // 0x182 MovB
	goto Label_521; // 0x183 Jump
	
Label_521:
	goto Label_350; // 0x209 Jump
	
Label_388:
	var_222_float = var_66_float * var_66_float; // 0x184 Mult
	var_223_bool = var_85_float >= var_222_float; // 0x185 GE
	if(var_223_bool == 0) goto Label_513; // 0x186 JumpB
	GetPFPosition(var_86_cvector); // 0x187 TObjFunc
	CanReachByPF(var_87_bool, var_86_cvector); // 0x189 Func
	var_224_bool = var_87_bool == 0; // 0x18b Not
	if(var_224_bool == 0) goto Label_412; // 0x18c JumpB
	var_225_bool = 0; var_226_object = Obj(); var_227_float = 0; var_228_float = 0; var_229_bool = 0; var_230_bool = 0; // 0x18d PushV
	var_226_object = var_0_object; // 0x18e MovT
	var_227_float = var_78_float; // 0x18f Mov
	var_228_float = 3000.0; // 0x190 MovF
	var_229_bool = 1; // 0x191 MovB
	var_230_bool = 0; // 0x192 MovB
	TaskCall(3); // 0x193 TaskCall
	func_972(var_233_bool, var_225_bool, var_226_object, var_227_float, var_228_float, var_229_bool, var_230_bool); // 0x194 NEW_2
	TaskReturn(); // 0x195 TaskReturn
	var_234_bool = var_231_bool == 0; // 0x197 Not
	if(var_234_bool == 0) goto Label_410; // 0x198 JumpB
	goto Label_522; // 0x199 Jump
	
Label_410:
	var_82_bool = 0; // 0x19a MovB
	goto Label_350; // 0x19b Jump
	
Label_412:
	var_235_bool = var_82_bool == 0; // 0x19c Not
	if(var_235_bool == 0) goto Label_437; // 0x19d JumpB
	var_236_object = Obj(); // 0x19e PushV
	var_236_object = var_0_object; // 0x19f MovT
	func_1552(); // 0x1a0 NEW_2
	var_245_string = "all"; // 0x1a2 PushS
	var_246_string = "attack_on"; // 0x1a3 PushS
	PlayAnimation(var_245_string, var_246_string); // 0x1a4 Func
	WaitForAnimEnd(); // 0x1a6 Func
	func_952(var_88_float); // 0x1a9 NEW_2
	StopAsync(); // 0x1ab Func
	var_82_bool = 1; // 0x1ad MovB
	var_247_bool = 0; var_248_object = Obj(); // 0x1ae PushV
	var_248_object = var_0_object; // 0x1af MovT
	func_1402(var_247_bool, var_248_object); // 0x1b0 NEW_2
	var_249_bool = var_247_bool == 0; // 0x1b2 Not
	if(var_249_bool == 0) goto Label_437; // 0x1b3 JumpB
	goto Label_522; // 0x1b4 Jump
	
Label_437:
	rand(var_88_float); // 0x1b5 Func
	var_250_bool = 0; // 0x1b7 PushV
	var_250_bool = 1; // 0x1b8 MovB
	var_251_float = 0.25; // 0x1b9 PushF
	var_252_bool = var_88_float < var_251_float; // 0x1ba LT
	if(var_252_bool == 0) goto Label_449; // 0x1bb JumpB
	var_253_bool = 0; // 0x1bc PushV
	func_909(var_250_bool, var_253_bool); // 0x1bd NEW_2
	if(var_253_bool == 0) goto Label_449; // 0x1bf JumpB
	var_250_bool = 0; // 0x1c0 MovB
	
Label_449:
	if(var_250_bool == 0) goto Label_466; // 0x1c1 JumpB
	Face(var_0_object); // 0x1c2 Func
	func_959(); // 0x1c5 NEW_2
	var_288_string = "all"; // 0x1c7 PushS
	var_289_string = "attack_stay"; // 0x1c8 PushS
	PlayAnimation(var_288_string, var_289_string); // 0x1c9 Func
	var_290_bool = 0; var_291_float = 0; // 0x1cb PushV
	var_291_float = var_66_float; // 0x1cc Mov
	func_777(var_88_float, var_290_bool, var_291_float); // 0x1cd NEW_2
	StopAsync(); // 0x1cf Func
	goto Label_512; // 0x1d1 Jump
	
Label_512:
	goto Label_521; // 0x200 Jump
	
Label_466:
	Face(var_0_object); // 0x1d2 Func
	var_505_string = "all"; // 0x1d4 PushS
	var_506_string = "fjump"; // 0x1d5 PushS
	PlayAnimation(var_505_string, var_506_string); // 0x1d6 Func
	WaitForAnimEnd(); // 0x1d8 Func
	func_952(var_88_float); // 0x1db NEW_2
	var_507_cvector = CVector(0.0, 0.0, 0.0); // 0x1dd PushVec
	SetSpeed(var_507_cvector); // 0x1de Func
	Stop(); // 0x1e0 Func
	StopAsync(); // 0x1e2 Func
	var_508_bool = 0; // 0x1e4 PushV
	func_909(var_88_float, var_508_bool); // 0x1e5 NEW_2
	var_509_bool = var_508_bool == 0; // 0x1e7 Not
	if(var_509_bool == 0) goto Label_512; // 0x1e8 JumpB
	var_510_bool = 0; var_511_object = Obj(); // 0x1e9 PushV
	var_511_object = var_0_object; // 0x1ea MovT
	func_1402(var_510_bool, var_511_object); // 0x1eb NEW_2
	var_512_bool = var_510_bool == 0; // 0x1ed Not
	if(var_512_bool == 0) goto Label_496; // 0x1ee JumpB
	goto Label_522; // 0x1ef Jump
	
Label_496:
	GetPFPosition(var_79_cvector); // 0x1f0 TObjFunc
	GetPFPosition(var_80_cvector); // 0x1f2 Func
	var_84_cvector = var_79_cvector - var_80_cvector; // 0x1f4 Sub2
	var_85_float = var_84_cvector | var_84_cvector; // 0x1f5 Or2
	var_513_float = var_66_float * var_66_float; // 0x1f6 Mult
	var_514_bool = var_85_float < var_513_float; // 0x1f7 LT
	if(var_514_bool == 0) goto Label_512; // 0x1f8 JumpB
	var_515_bool = 0; var_516_float = 0; // 0x1f9 PushV
	var_516_float = var_66_float; // 0x1fa Mov
	func_613(var_88_float, var_515_bool, var_516_float); // 0x1fb NEW_2
	var_517_bool = var_515_bool == 0; // 0x1fd Not
	if(var_517_bool == 0) goto Label_512; // 0x1fe JumpB
	goto Label_522; // 0x1ff Jump
	
Label_513:
	var_518_bool = 0; var_519_float = 0; // 0x201 PushV
	var_519_float = var_66_float; // 0x202 Mov
	func_613(var_88_float, var_518_bool, var_519_float); // 0x203 NEW_2
	var_520_bool = var_518_bool == 0; // 0x205 Not
	if(var_520_bool == 0) goto Label_520; // 0x206 JumpB
	goto Label_522; // 0x207 Jump
	
Label_520:
	var_82_bool = 1; // 0x208 MovB
	
Label_347:
	var_82_bool = 1; // 0x15b MovB
	
Label_324:
	var_78_float = var_66_float; // 0x144 Mov
}


func_1718()
{
	var_363_object = Obj(); var_364_object = Obj(); // 0x6b6 PushV
	GetScene(var_364_object); // 0x6b7 Func
	var_365_string = "battle"; // 0x6b9 PushS
	var_366_object = Obj(); // 0x6ba PushV
	func_1620(var_366_object); // 0x6bb NEW_2
	BroadcastMessage(var_365_string, var_366_object, var_364_object); // 0x6bd Func
	return 2; // 0x6bf Return
}


func_952(var_0_object)
{
	var_126_object = Obj(); // 0x3b8 PushV
	var_126_object = var_0_object; // 0x3b9 MovT
	func_1709(var_126_object); // 0x3ba NEW_2
	return 0; // 0x3bc Return
}


func_957(var_463_int)
{
	var_463_int = 0; // 0x3bd MovI
	return 0; // 0x3be Return
}


func_574(var_0_object, var_388_float, var_389_int)
{
	var_390_object = Obj(); var_391_float = 0; var_392_float = 0; var_393_object = Obj(); var_394_float = 0; var_395_float = 0; // 0x23e PushV
	var_396_float = 0.9; // 0x23f PushF
	var_397_float = var_388_float * var_396_float; // 0x240 Mult
	GetVictim(var_397_float, var_393_object); // 0x241 Func
	ReportAttack(var_0_object); // 0x243 Func
	var_398_bool = var_393_object == var_0_object; // 0x245 Eq
	if(var_398_bool == 0) goto Label_611; // 0x246 JumpB
	var_399_float = 0; var_400_object = Obj(); var_401_int = 0; // 0x247 PushV
	var_400_object = var_393_object; // 0x248 Mov
	var_401_int = var_389_int; // 0x249 Mov
	func_304(var_401_int); // 0x24a NEW_2
	var_394_float = var_399_float; // 0x24b Mov
	var_402_float = 0; var_403_object = Obj(); var_404_float = 0; var_405_int = 0; // 0x24d PushV
	var_403_object = var_393_object; // 0x24e Mov
	var_404_float = var_394_float; // 0x24f Mov
	var_406_int = 0; var_407_object = Obj(); var_408_int = 0; // 0x250 PushV
	var_407_object = var_393_object; // 0x251 Mov
	var_408_int = var_389_int; // 0x252 Mov
	func_307(var_408_int); // 0x253 NEW_2
	var_405_int = var_406_int; // 0x254 Mov
	func_1288(var_402_float, var_403_object, var_404_float, var_405_int); // 0x256 NEW_2
	var_395_float = var_402_float; // 0x257 Mov
	var_463_int = 0; // 0x259 PushV
	func_957(var_463_int); // 0x25a NEW_2
	ReportHit(var_0_object, var_463_int, var_395_float, var_394_float); // 0x25c Func
	var_464_object = Obj(); var_465_float = 0; // 0x25e PushV
	var_464_object = var_393_object; // 0x25f Mov
	var_465_float = var_395_float; // 0x260 Mov
	func_964(); // 0x261 NEW_2
	
Label_611:
	return 6; // 0x263 Return
}


func_959()
{
	var_259_string = ""; // 0x3bf PushV
	var_259_string = "attack_stay"; // 0x3c0 MovS
	func_1579(var_259_string); // 0x3c1 NEW_2
	return 0; // 0x3c3 Return
}


func_1470(var_13_object, var_14_int, var_15_float)
{
	var_16_cvector = CVector(0,0,0); var_17_object = Obj(); var_18_int = 0; var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_int = 0; var_23_int = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_object = Obj(); var_27_int = 0; var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_int = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0); // 0x5be PushV
	var_34_bool = 0; // 0x5bf PushV
	var_34_bool = 0; // 0x5c0 MovB
	var_35_bool = 0; // 0x5c1 PushV
	var_35_bool = 0; // 0x5c2 MovB
	var_36_object = var_13_object; // 0x5c3 Push
	if(var_36_object == 0) goto Label_1481; // 0x5c4 JumpB
	var_37_int = 4; // 0x5c5 PushI
	var_38_bool = var_14_int != var_37_int; // 0x5c6 Neq
	if(var_38_bool == 0) goto Label_1481; // 0x5c7 JumpB
	var_35_bool = 1; // 0x5c8 MovB
	
Label_1481:
	if(var_35_bool == 0) goto Label_1486; // 0x5c9 JumpB
	var_39_int = 5; // 0x5ca PushI
	var_40_bool = var_14_int != var_39_int; // 0x5cb Neq
	if(var_40_bool == 0) goto Label_1486; // 0x5cc JumpB
	var_34_bool = 1; // 0x5cd MovB
	
Label_1486:
	if(var_34_bool == 0) goto Label_1533; // 0x5ce JumpB
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); // 0x5cf PushV
	var_43_cvector = CVector(0,0,0); var_44_object = Obj(); // 0x5d0 PushV
	var_44_object = var_13_object; // 0x5d1 Mov
	func_1242(var_44_object); // 0x5d2 NEW_2
	var_42_cvector = var_43_cvector; // 0x5d3 Mov
	func_1626(var_41_cvector, var_42_cvector); // 0x5d5 NEW_2
	var_25_cvector = var_41_cvector; // 0x5d6 Mov
	CreateVectorVector(var_26_object); // 0x5d8 Func
	var_27_int = 1; // 0x5da MovI
	
Label_1499:
	var_54_string = "hit"; // 0x5db PushS
	var_55_int = var_54_string + var_27_int; // 0x5dc Add
	GetGeometryLocator(var_55_int, var_28_bool, var_29_cvector, var_30_cvector); // 0x5dd Func
	var_56_bool = var_28_bool == 0; // 0x5df Not
	if(var_56_bool == 0) goto Label_1506; // 0x5e0 JumpB
	goto Label_1515; // 0x5e1 Jump
	
Label_1515:
	size(var_31_int); // 0x5eb ObjFunc
	var_57_int = var_31_int; // 0x5ed Push
	if(var_57_int == 0) goto Label_1532; // 0x5ee JumpB
	irand(var_32_int, var_31_int); // 0x5ef Func
	get(var_33_cvector, var_32_int); // 0x5f1 ObjFunc
	var_58_object = Obj(); var_59_int = 0; var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); // 0x5f3 PushV
	var_58_object = var_13_object; // 0x5f4 Mov
	var_59_int = var_14_int; // 0x5f5 Mov
	var_60_float = var_15_float; // 0x5f6 Mov
	var_61_cvector = var_33_cvector; // 0x5f7 Mov
	var_62_cvector = -var_25_cvector; // 0x5f8 Neg2
	func_1538(var_60_float, var_61_cvector, var_62_cvector); // 0x5f9 NEW_2
	return 18; // 0x5fb Return
	
Label_1532:
	var_26_object = 0; // 0x5fc SetNull
	
Label_1533:
	var_103_object = Obj(); // 0x5fd PushV
	var_103_object = var_13_object; // 0x5fe Mov
	func_1426(var_103_object); // 0x5ff NEW_2
	return 18; // 0x601 Return
	
Label_1506:
	var_104_int = var_30_cvector | var_25_cvector; // 0x5e2 Or
	var_105_float = 0.70711; // 0x5e3 PushF
	var_106_bool = var_104_int >= var_105_float; // 0x5e4 GE
	if(var_106_bool == 0) goto Label_1512; // 0x5e5 JumpB
	add(var_29_cvector); // 0x5e6 ObjFunc
	
Label_1512:
	var_107_int = 1; // 0x5e8 PushI
	var_27_int = var_27_int + var_107_int; // 0x5e9 Add2
	goto Label_1499; // 0x5ea Jump
}


func_1729(var_34_string, var_35_int)
{
	var_36_string = ""; var_37_string = ""; // 0x6c1 PushV
	var_37_string = "idle"; // 0x6c2 MovS
	var_38_int = var_35_int; // 0x6c3 Push
	if(var_38_int == 0) goto Label_1734; // 0x6c4 JumpB
	var_37_string = var_37_string + var_35_int; // 0x6c5 Add2
	
Label_1734:
	var_34_string = var_37_string; // 0x6c6 Mov
	return 2; // 0x6c7 Return
}


func_1217(var_20_bool, var_21_object)
{
	var_22_bool = 0; var_23_object = Obj(); // 0x4c2 PushV
	var_23_object = var_21_object; // 0x4c3 Mov
	func_1402(var_22_bool, var_23_object); // 0x4c4 NEW_2
	var_20_bool = var_22_bool; // 0x4c5 Mov
	return 0; // 0x4c7 Return
}


func_964()
{
	return 0; // 0x3c5 Return
}


func_966(var_488_bool)
{
	var_488_bool = 1; // 0x3c6 MovB
	return 0; // 0x3c7 Return
}


func_1736(var_28_int)
{
	var_29_int = 0; var_30_bool = 0; var_31_int = 0; var_32_bool = 0; // 0x6c8 PushV
	var_31_int = 0; // 0x6c9 MovI
	
Label_1738:
	var_33_string = "all"; // 0x6ca PushS
	var_34_string = ""; var_35_int = 0; // 0x6cb PushV
	var_35_int = var_31_int; // 0x6cc Mov
	func_1729(var_34_string, var_35_int); // 0x6cd NEW_2
	HasAnimation(var_32_bool, var_33_string, var_34_string); // 0x6cf Func
	var_39_bool = var_32_bool == 0; // 0x6d1 Not
	if(var_39_bool == 0) goto Label_1748; // 0x6d2 JumpB
	goto Label_1751; // 0x6d3 Jump
	
Label_1751:
	var_28_int = var_31_int; // 0x6d7 Mov
	return 4; // 0x6d8 Return
	
Label_1748:
	var_40_int = 1; // 0x6d4 PushI
	var_31_int = var_31_int + var_40_int; // 0x6d5 Add2
	goto Label_1738; // 0x6d6 Jump
}


func_968(var_384_int)
{
	var_384_int = 1; // 0x3c8 MovI
	return 0; // 0x3c9 Return
}


func_970(var_379_float)
{
	var_379_float = 0.5; // 0x3ca MovF
	return 0; // 0x3cb Return
}


func_1224(var_202_string)
{
	var_202_string = "walk"; // 0x4c8 MovS
	return 0; // 0x4c9 Return
}


func_972(var_2_int, var_133_bool, var_134_object, var_135_float, var_136_float, var_137_bool, var_138_bool)
{
	var_142_bool = 0; var_143_bool = 0; var_144_bool = 0; var_145_bool = 0; // 0x3cc PushV
	var_146_object = Obj(); // 0x3cd PushV
	var_146_object = var_134_object; // 0x3ce Mov
	func_1709(var_146_object); // 0x3cf NEW_2
	var_147_int = 1; // 0x3d1 PushI
	var_148_int = 5; // 0x3d2 PushI
	SetTimer(var_147_int, var_148_int); // 0x3d3 Func
	CanSee(var_144_bool, var_134_object); // 0x3d5 Func
	var_149_bool = var_144_bool; // 0x3d7 Push
	if(var_149_bool == 0) goto Label_991; // 0x3d8 JumpB
	var_2_int = 1; // 0x3d9 TMovB
	var_150_object = Obj(); // 0x3da PushV
	var_150_object = var_134_object; // 0x3db Mov
	func_1568(var_150_object); // 0x3dc NEW_2
	goto Label_992; // 0x3de Jump
	
Label_992:
	var_157_bool = 0; var_158_object = Obj(); // 0x3e0 PushV
	var_158_object = var_134_object; // 0x3e1 Mov
	func_1249(var_157_bool, var_158_object); // 0x3e2 NEW_2
	if(var_157_bool == 0) goto Label_1002; // 0x3e4 JumpB
	var_161_object = Obj(); // 0x3e5 PushV
	func_1620(var_161_object); // 0x3e6 NEW_2
	SendPlayerEnemy(var_134_object, var_161_object); // 0x3e8 Func
	
Label_1002:
	var_162_bool = 0; var_163_object = Obj(); var_164_float = 0; var_165_float = 0; var_166_bool = 0; var_167_bool = 0; // 0x3ea PushV
	var_163_object = var_134_object; // 0x3eb Mov
	var_164_float = var_135_float; // 0x3ec Mov
	var_165_float = var_136_float; // 0x3ed Mov
	var_166_bool = var_137_bool; // 0x3ee Mov
	var_167_bool = var_138_bool; // 0x3ef Mov
	func_1077(var_144_bool, var_145_bool, var_162_bool, var_163_object, var_164_float, var_165_float, var_166_bool, var_167_bool); // 0x3f0 NEW_2
	var_145_bool = var_162_bool; // 0x3f1 Mov
	var_213_int = var_2_int; // 0x3f3 PushT
	if(var_213_int == 0) goto Label_1016; // 0x3f4 JumpB
	var_214_string = "head"; // 0x3f5 PushS
	UnlookAsync(var_214_string); // 0x3f6 Func
	
Label_1016:
	var_215_int = 1; // 0x3f8 PushI
	KillTimer(var_215_int); // 0x3f9 Func
	var_133_bool = var_145_bool; // 0x3fb Mov
	return 4; // 0x3fc Return
	
Label_991:
	var_2_int = 0; // 0x3df TMovB
}


func_1226(var_203_string)
{
	var_203_string = "run"; // 0x4ca MovS
	return 0; // 0x4cb Return
}


func_1228(var_430_string, var_431_int)
{
	var_432_int = 2; // 0x4cd PushI
	var_433_bool = var_431_int == var_432_int; // 0x4ce Eq
	if(var_433_bool == 0) goto Label_1235; // 0x4cf JumpB
	var_430_string = "fire"; // 0x4d0 MovS
	return 0; // 0x4d1 Return
	
Label_1235:
	var_434_int = 1; // 0x4d3 PushI
	var_435_bool = var_431_int == var_434_int; // 0x4d4 Eq
	if(var_435_bool == 0) goto Label_1240; // 0x4d5 JumpB
	var_430_string = "bullet"; // 0x4d6 MovS
	return 0; // 0x4d7 Return
	
Label_1240:
	var_430_string = "phys"; // 0x4d8 MovS
	return 0; // 0x4d9 Return
}


func_848(var_303_bool)
{
	var_304_bool = 0; // 0x350 PushV
	var_304_bool = 0; // 0x351 MovB
	var_305_bool = 0; // 0x352 PushV
	func_820(var_304_bool, var_305_bool); // 0x353 NEW_2
	if(var_305_bool == 0) goto Label_859; // 0x355 JumpB
	var_322_bool = 0; // 0x356 PushV
	func_864(var_303_bool, var_304_bool, var_322_bool); // 0x357 NEW_2
	if(var_322_bool == 0) goto Label_859; // 0x359 JumpB
	var_304_bool = 1; // 0x35a MovB
	
Label_859:
	if(var_304_bool == 0) goto Label_862; // 0x35b JumpB
	var_303_bool = 1; // 0x35c MovB
	return 0; // 0x35d Return
	
Label_862:
	var_303_bool = 0; // 0x35e MovB
	return 0; // 0x35f Return
}


func_1361(var_37_bool)
{
	var_39_bool = 0; var_40_bool = 0; // 0x551 PushV
	IsDead(var_40_bool); // 0x552 ObjFunc
	var_37_bool = var_40_bool; // 0x554 Mov
	return 2; // 0x555 Return
}


func_1620(var_54_object)
{
	var_55_object = Obj(); var_56_object = Obj(); // 0x654 PushV
	self(var_56_object); // 0x655 Func
	var_54_object = var_56_object; // 0x657 Mov
	return 2; // 0x658 Return
}


func_1366(var_26_bool, var_27_object)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); // 0x556 PushV
	var_32_bool = var_27_object == 0; // 0x557 NullEq
	if(var_32_bool == 0) goto Label_1371; // 0x558 JumpB
	var_26_bool = 0; // 0x559 MovB
	return 4; // 0x55a Return
	
Label_1371:
	var_33_bool = 0; // 0x55b PushV
	var_33_bool = 0; // 0x55c MovB
	var_34_string = "IsDead"; // 0x55d PushS
	var_35_int = 1; // 0x55e PushI
	var_36_bool = IsFuncExist(var_27_object, var_34_string, var_35_int); // 0x55f FuncExist
	if(var_36_bool == 0) goto Label_1383; // 0x560 JumpB
	var_37_bool = 0; var_38_object = Obj(); // 0x561 PushV
	var_38_object = var_27_object; // 0x562 Mov
	func_1361(var_38_object); // 0x563 NEW_2
	if(var_37_bool == 0) goto Label_1383; // 0x565 JumpB
	var_33_bool = 1; // 0x566 MovB
	
Label_1383:
	if(var_33_bool == 0) goto Label_1386; // 0x567 JumpB
	var_26_bool = 0; // 0x568 MovB
	return 4; // 0x569 Return
	
Label_1386:
	GetScene(var_30_object); // 0x56a Func
	var_41_bool = var_30_object == 0; // 0x56c NullEq
	if(var_41_bool == 0) goto Label_1392; // 0x56d JumpB
	var_26_bool = 0; // 0x56e MovB
	return 4; // 0x56f Return
	
Label_1392:
	GetScene(var_31_object); // 0x570 ObjFunc
	var_42_bool = var_30_object != var_31_object; // 0x572 Neq
	if(var_42_bool == 0) goto Label_1398; // 0x573 JumpB
	var_26_bool = 0; // 0x574 MovB
	return 4; // 0x575 Return
	
Label_1398:
	var_26_bool = 1; // 0x576 MovB
	return 4; // 0x577 Return
}


func_1753(var_10_object)
{
	var_11_object = Obj(); // 0x6da PushV
	var_11_object = var_10_object; // 0x6db Mov
	TaskCall(1); // 0x6dc TaskCall
	func_128(var_11_object); // 0x6dd NEW_2
	TaskReturn(); // 0x6de TaskReturn
	return 0; // 0x6e0 Return
}


func_1242(var_43_cvector)
{
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0x4da PushV
	GetPosition(var_47_cvector); // 0x4db Func
	GetPosition(var_48_cvector); // 0x4dd ObjFunc
	var_43_cvector = var_48_cvector - var_47_cvector; // 0x4df Sub2
	return 4; // 0x4e0 Return
}


func_1626(var_41_cvector, var_42_cvector)
{
	var_49_float = 0; var_50_float = 0; // 0x65a PushV
	var_51_int = var_42_cvector | var_42_cvector; // 0x65b Or
	var_50_float = sqrt(var_51_int); // 0x65c Sqrt2
	var_52_float = 0.0; // 0x65d PushF
	var_53_bool = var_50_float < var_52_float; // 0x65e LT
	if(var_53_bool == 0) goto Label_1634; // 0x65f JumpB
	var_41_cvector = CVector(0.0, 0.0, 0.0); // 0x660 MovV
	return 2; // 0x661 Return
	
Label_1634:
	var_41_cvector = var_42_cvector / var_42_cvector; // 0x662 Div2
	return 2; // 0x663 Return
}


func_864(var_0_object, var_4_bool, var_322_bool)
{
	var_323_object = Obj(); var_324_bool = 0; var_325_float = 0; var_326_cvector = CVector(0,0,0); var_327_cvector = CVector(0,0,0); var_328_object = Obj(); var_329_bool = 0; var_330_float = 0; var_331_cvector = CVector(0,0,0); var_332_cvector = CVector(0,0,0); // 0x360 PushV
	GetScene(var_328_object); // 0x361 Func
	var_329_bool = 0; // 0x363 MovB
	
Label_868:
	var_333_cvector = CVector(0,0,0); var_334_object = Obj(); // 0x364 PushV
	var_334_object = var_0_object; // 0x365 MovT
	func_1242(var_334_object); // 0x366 NEW_2
	var_339_int = -var_333_cvector; // 0x368 Neg
	FindDirLength(var_330_float, var_339_int, var_330_float); // 0x369 Func
	var_340_bool = var_330_float < var_4_bool; // 0x36b LT
	if(var_340_bool == 0) goto Label_878; // 0x36c JumpB
	goto Label_906; // 0x36d Jump
	
Label_906:
	var_322_bool = var_329_bool; // 0x38a Mov
	return 10; // 0x38b Return
	
Label_878:
	Face(var_0_object); // 0x36e Func
	var_341_string = "all"; // 0x370 PushS
	var_342_string = "bjump"; // 0x371 PushS
	PlayAnimation(var_341_string, var_342_string); // 0x372 Func
	GetPFPosition(var_331_cvector); // 0x374 TObjFunc
	GetPFPosition(var_332_cvector); // 0x376 Func
	WaitForAnimEnd(); // 0x378 Func
	func_952(var_332_cvector); // 0x37b NEW_2
	StopAsync(); // 0x37d Func
	var_343_cvector = CVector(0.0, 0.0, 0.0); // 0x37f PushVec
	SetSpeed(var_343_cvector); // 0x380 Func
	var_329_bool = 1; // 0x382 MovB
	var_344_bool = 0; // 0x383 PushV
	func_820(var_332_cvector, var_344_bool); // 0x384 NEW_2
	var_345_bool = var_344_bool == 0; // 0x386 Not
	if(var_345_bool == 0) goto Label_905; // 0x387 JumpB
	goto Label_906; // 0x388 Jump
	
Label_905:
	goto Label_868; // 0x389 Jump
}


func_1249(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_bool = 0; // 0x4e1 PushV
	IsPlayerActor(var_13_object, var_15_bool); // 0x4e2 Func
	var_12_bool = var_15_bool; // 0x4e4 Mov
	return 2; // 0x4e5 Return
}


func_1636(var_440_float, var_441_float, var_442_float)
{
	var_445_bool = var_441_float < var_442_float; // 0x665 LT
	if(var_445_bool == 0) goto Label_1641; // 0x666 JumpB
	var_440_float = var_441_float; // 0x667 Mov
	goto Label_1642; // 0x668 Jump
	
Label_1642:
	return 0; // 0x66a Return
	
Label_1641:
	var_440_float = var_442_float; // 0x669 Mov
}


func_613(var_0_object, var_351_bool, var_352_float)
{
	var_353_int = 0; var_354_bool = 0; var_355_int = 0; var_356_string = ""; var_357_int = 0; var_358_bool = 0; var_359_int = 0; var_360_string = ""; // 0x265 PushV
	func_952(var_360_string); // 0x267 NEW_2
	irand(var_357_int, var_360_string); // 0x269 Func
	var_361_int = 1; // 0x26b PushI
	var_357_int = var_357_int + var_361_int; // 0x26c Add2
	Face(var_0_object); // 0x26d Func
	var_362_bool = 1; // 0x26f PushB
	SetAttackState(var_362_bool); // 0x270 Func
	func_1718(); // 0x273 NEW_2
	var_367_string = "all"; // 0x275 PushS
	var_368_string = "attack_begin"; // 0x276 PushS
	var_369_int = var_368_string + var_357_int; // 0x277 Add
	PlayAnimation(var_367_string, var_369_int); // 0x278 Func
	WaitForAnimEnd(); // 0x27a Func
	func_920(var_359_int, var_360_string); // 0x27d NEW_2
	var_385_bool = 0; var_386_object = Obj(); // 0x27f PushV
	var_386_object = var_0_object; // 0x280 MovT
	func_1402(var_385_bool, var_386_object); // 0x281 NEW_2
	var_387_bool = var_385_bool == 0; // 0x283 Not
	if(var_387_bool == 0) goto Label_649; // 0x284 JumpB
	StopAsync(); // 0x285 Func
	var_351_bool = 0; // 0x287 MovB
	return 8; // 0x288 Return
	
Label_649:
	var_388_float = 0; var_389_int = 0; // 0x289 PushV
	var_388_float = var_352_float; // 0x28a Mov
	var_389_int = var_357_int; // 0x28b Mov
	func_574(var_360_string, var_388_float, var_389_int); // 0x28c NEW_2
	var_466_string = "all"; // 0x28e PushS
	var_467_string = "attack_middle"; // 0x28f PushS
	var_468_int = var_467_string + var_357_int; // 0x290 Add
	HasAnimation(var_358_bool, var_466_string, var_468_int); // 0x291 Func
	var_469_bool = var_358_bool; // 0x293 Push
	if(var_469_bool == 0) goto Label_730; // 0x294 JumpB
	func_1718(); // 0x296 NEW_2
	var_470_string = "all"; // 0x298 PushS
	var_471_string = "attack_middle"; // 0x299 PushS
	var_472_int = var_471_string + var_357_int; // 0x29a Add
	PlayAnimation(var_470_string, var_472_int); // 0x29b Func
	WaitForAnimEnd(); // 0x29d Func
	func_952(var_360_string); // 0x2a0 NEW_2
	var_473_bool = 0; var_474_object = Obj(); // 0x2a2 PushV
	var_474_object = var_0_object; // 0x2a3 MovT
	func_1402(var_473_bool, var_474_object); // 0x2a4 NEW_2
	var_475_bool = var_473_bool == 0; // 0x2a6 Not
	if(var_475_bool == 0) goto Label_684; // 0x2a7 JumpB
	StopAsync(); // 0x2a8 Func
	var_351_bool = 0; // 0x2aa MovB
	return 8; // 0x2ab Return
	
Label_684:
	var_476_float = 0; var_477_int = 0; // 0x2ac PushV
	var_476_float = var_352_float; // 0x2ad Mov
	var_477_int = var_357_int; // 0x2ae Mov
	func_574(var_360_string, var_476_float, var_477_int); // 0x2af NEW_2
	var_359_int = 1; // 0x2b1 MovI
	
Label_690:
	var_478_string = "attack_middle"; // 0x2b2 PushS
	var_479_int = var_478_string + var_357_int; // 0x2b3 Add
	var_480_string = "_"; // 0x2b4 PushS
	var_481_int = var_479_int + var_480_string; // 0x2b5 Add
	var_360_string = var_481_int + var_359_int; // 0x2b6 Add2
	var_482_string = "all"; // 0x2b7 PushS
	HasAnimation(var_358_bool, var_482_string, var_360_string); // 0x2b8 Func
	var_483_bool = var_358_bool == 0; // 0x2ba Not
	if(var_483_bool == 0) goto Label_701; // 0x2bb JumpB
	goto Label_730; // 0x2bc Jump
	
Label_730:
	var_484_bool = 0; // 0x2da PushB
	SetAttackState(var_484_bool); // 0x2db Func
	var_485_string = "all"; // 0x2dd PushS
	var_486_string = "attack_end"; // 0x2de PushS
	var_487_int = var_486_string + var_357_int; // 0x2df Add
	PlayAnimation(var_485_string, var_487_int); // 0x2e0 Func
	var_488_bool = 0; // 0x2e2 PushV
	func_966(var_488_bool); // 0x2e3 NEW_2
	if(var_488_bool == 0) goto Label_748; // 0x2e5 JumpB
	var_489_bool = 0; var_490_float = 0; // 0x2e6 PushV
	var_490_float = 0.75; // 0x2e7 MovF
	func_750(var_489_bool, var_490_float); // 0x2e8 NEW_2
	StopAsync(); // 0x2ea Func
	
Label_748:
	var_351_bool = 1; // 0x2ec MovB
	return 8; // 0x2ed Return
	
Label_701:
	func_1718(); // 0x2be NEW_2
	var_498_string = "all"; // 0x2c0 PushS
	PlayAnimation(var_498_string, var_360_string); // 0x2c1 Func
	WaitForAnimEnd(); // 0x2c3 Func
	func_952(var_360_string); // 0x2c6 NEW_2
	var_499_bool = 0; var_500_object = Obj(); // 0x2c8 PushV
	var_500_object = var_0_object; // 0x2c9 MovT
	func_1402(var_499_bool, var_500_object); // 0x2ca NEW_2
	var_501_bool = var_499_bool == 0; // 0x2cc Not
	if(var_501_bool == 0) goto Label_722; // 0x2cd JumpB
	StopAsync(); // 0x2ce Func
	var_351_bool = 0; // 0x2d0 MovB
	return 8; // 0x2d1 Return
	
Label_722:
	var_502_float = 0; var_503_int = 0; // 0x2d2 PushV
	var_502_float = var_352_float; // 0x2d3 Mov
	var_503_int = var_357_int; // 0x2d4 Mov
	func_574(var_360_string, var_502_float, var_503_int); // 0x2d5 NEW_2
	var_504_int = 1; // 0x2d7 PushI
	var_359_int = var_359_int + var_504_int; // 0x2d8 Add2
	goto Label_690; // 0x2d9 Jump
}


func_1254(var_35_bool, var_36_object, var_37_string)
{
	var_38_bool = 0; var_39_bool = 0; // 0x4e6 PushV
	var_40_string = "HasProperty"; // 0x4e7 PushS
	var_41_int = 2; // 0x4e8 PushI
	var_42_bool = IsFuncExist(var_36_object, var_40_string, var_41_int); // 0x4e9 FuncExist
	var_43_bool = var_42_bool == 0; // 0x4ea Not
	if(var_43_bool == 0) goto Label_1262; // 0x4eb JumpB
	var_35_bool = 0; // 0x4ec MovB
	return 2; // 0x4ed Return
	
Label_1262:
	HasProperty(var_37_string, var_39_bool); // 0x4ee ObjFunc
	var_35_bool = var_39_bool; // 0x4f0 Mov
	return 2; // 0x4f1 Return
}


func_1643(var_45_float, var_46_float, var_47_float, var_48_float)
{
	var_49_bool = var_46_float < var_47_float; // 0x66c LT
	if(var_49_bool == 0) goto Label_1648; // 0x66d JumpB
	var_45_float = var_47_float; // 0x66e Mov
	return 0; // 0x66f Return
	
Label_1648:
	var_50_bool = var_46_float > var_48_float; // 0x670 GT
	if(var_50_bool == 0) goto Label_1652; // 0x671 JumpB
	var_45_float = var_48_float; // 0x672 Mov
	return 0; // 0x673 Return
	
Label_1652:
	var_45_float = var_46_float; // 0x674 Mov
	return 0; // 0x675 Return
}


func_750(var_489_bool, var_490_float)
{
	var_491_float = 0; var_492_bool = 0; var_493_float = 0; var_494_bool = 0; // 0x2ee PushV
	rand(var_493_float); // 0x2ef Func
	var_495_bool = var_493_float < var_490_float; // 0x2f1 LT
	if(var_495_bool == 0) goto Label_770; // 0x2f2 JumpB
	
Label_755:
	IsAnimationPlaying(var_494_bool); // 0x2f3 Func
	var_496_bool = var_494_bool == 0; // 0x2f5 Not
	if(var_496_bool == 0) goto Label_760; // 0x2f6 JumpB
	goto Label_769; // 0x2f7 Jump
	
Label_769:
	goto Label_775; // 0x301 Jump
	
Label_775:
	var_489_bool = 0; // 0x307 MovB
	return 4; // 0x308 Return
	
Label_760:
	var_497_bool = 0; // 0x2f8 PushV
	func_848(var_497_bool); // 0x2f9 NEW_2
	if(var_497_bool == 0) goto Label_766; // 0x2fb JumpB
	var_489_bool = 1; // 0x2fc MovB
	return 4; // 0x2fd Return
	
Label_766:
	sync(); // 0x2fe Func
	goto Label_755; // 0x300 Jump
	
Label_770:
	WaitForAnimEnd(); // 0x302 Func
	func_952(var_494_bool); // 0x305 NEW_2
}


func_1266(var_27_bool, var_28_object, var_29_string, var_30_float, var_31_float, var_32_float)
{
	var_33_float = 0; var_34_float = 0; // 0x4f2 PushV
	var_35_bool = 0; var_36_object = Obj(); var_37_string = ""; // 0x4f3 PushV
	var_36_object = var_28_object; // 0x4f4 Mov
	var_37_string = var_29_string; // 0x4f5 Mov
	func_1254(var_35_bool, var_36_object, var_37_string); // 0x4f6 NEW_2
	var_44_bool = var_35_bool == 0; // 0x4f8 Not
	if(var_44_bool == 0) goto Label_1276; // 0x4f9 JumpB
	var_27_bool = 0; // 0x4fa MovB
	return 2; // 0x4fb Return
	
Label_1276:
	GetProperty(var_29_string, var_34_float); // 0x4fc ObjFunc
	var_45_float = 0; var_46_float = 0; var_47_float = 0; var_48_float = 0; // 0x4fe PushV
	var_46_float = var_34_float + var_30_float; // 0x4ff Add2
	var_47_float = var_31_float; // 0x500 Mov
	var_48_float = var_32_float; // 0x501 Mov
	func_1643(var_45_float, var_46_float, var_47_float, var_48_float); // 0x502 NEW_2
	SetProperty(var_29_string, var_45_float); // 0x504 ObjFunc
	var_27_bool = 1; // 0x506 MovB
	return 2; // 0x507 Return
}


func_1654(var_16_bool, var_17_object, var_18_float)
{
	var_19_bool = var_17_object == 0; // 0x677 Not
	if(var_19_bool == 0) goto Label_1659; // 0x678 JumpB
	var_16_bool = 0; // 0x679 MovB
	return 0; // 0x67a Return
	
Label_1659:
	var_20_int = 0; // 0x67b PushI
	var_21_bool = var_18_float > var_20_int; // 0x67c GT
	if(var_21_bool == 0) goto Label_1666; // 0x67d JumpB
	var_22_int = 8; // 0x67e PushI
	SendWorldWndMessage(var_22_int); // 0x67f Func
	goto Label_1675; // 0x681 Jump
	
Label_1675:
	var_23_float = 0; // 0x68b PushV
	var_23_float = var_18_float; // 0x68c Mov
	func_1699(var_23_float); // 0x68d NEW_2
	var_27_bool = 0; var_28_object = Obj(); var_29_string = ""; var_30_float = 0; var_31_float = 0; var_32_float = 0; // 0x68f PushV
	var_28_object = var_17_object; // 0x690 Mov
	var_29_string = "reputation"; // 0x691 MovS
	var_30_float = var_18_float; // 0x692 Mov
	var_31_float = 0; // 0x693 MovI
	var_32_float = 1; // 0x694 MovI
	func_1266(var_27_bool, var_28_object, var_29_string, var_30_float, var_31_float, var_32_float); // 0x695 NEW_2
	var_16_bool = 1; // 0x697 MovB
	return 0; // 0x698 Return
	
Label_1666:
	var_51_int = 0; // 0x682 PushI
	var_52_bool = var_18_float < var_51_int; // 0x683 LT
	if(var_52_bool == 0) goto Label_1673; // 0x684 JumpB
	var_53_int = 9; // 0x685 PushI
	SendWorldWndMessage(var_53_int); // 0x686 Func
	goto Label_1675; // 0x688 Jump
	
Label_1673:
	var_16_bool = 0; // 0x689 MovB
	return 0; // 0x68a Return
}


func_121(var_53_bool)
{
	var_53_bool = 1; // 0x79 MovB
	return 0; // 0x7a Return
}


func_1402(var_22_bool, var_23_object)
{
	var_24_int = 0; var_25_int = 0; // 0x57a PushV
	var_26_bool = 0; var_27_object = Obj(); // 0x57b PushV
	var_27_object = var_23_object; // 0x57c Mov
	func_1366(var_26_bool, var_27_object); // 0x57d NEW_2
	var_43_bool = var_26_bool == 0; // 0x57f Not
	if(var_43_bool == 0) goto Label_1411; // 0x580 JumpB
	var_22_bool = 0; // 0x581 MovB
	return 2; // 0x582 Return
	
Label_1411:
	var_44_bool = 0; var_45_object = Obj(); var_46_string = ""; // 0x583 PushV
	var_45_object = var_23_object; // 0x584 Mov
	var_46_string = "noaccess"; // 0x585 MovS
	func_1254(var_44_bool, var_45_object, var_46_string); // 0x586 NEW_2
	var_53_bool = var_44_bool == 0; // 0x588 Not
	if(var_53_bool == 0) goto Label_1420; // 0x589 JumpB
	var_22_bool = 1; // 0x58a MovB
	return 2; // 0x58b Return
	
Label_1420:
	var_54_string = "noaccess"; // 0x58c PushS
	GetProperty(var_54_string, var_25_int); // 0x58d ObjFunc
	var_55_int = 0; // 0x58f PushI
	var_22_bool = var_25_int == var_55_int; // 0x590 Eq2
	return 2; // 0x591 Return
}


func_123()
{
	StopAnimation(); // 0x7b Func
	StopGroup0(); // 0x7d Func
	return 0; // 0x7f Return
}


