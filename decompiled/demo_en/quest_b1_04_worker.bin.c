	task_0_event_17(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_bool, var_11_bool, var_13_object)
	{
	var_14_bool = 0; var_15_object = Obj(); // 0x9 PushV
	var_15_object = var_13_object; // 0xa Mov
	func_1805(var_14_bool, var_15_object); // 0xb NEW_2
	if(var_14_bool == 0) goto Label_21; // 0xd JumpB
	func_123(); // 0xf NEW_2
	var_50_object = Obj(); // 0x11 PushV
	var_50_object = var_13_object; // 0x12 Mov
	func_1812(var_50_object); // 0x13 NEW_2
	
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
	var_10_bool = 0; var_11_bool = 0; // 0xa6 PushV
	IsOverrideActive(var_11_bool); // 0xa7 Func
	var_12_bool = var_11_bool == 0; // 0xa9 Not
	if(var_12_bool == 0) goto Label_175; // 0xaa JumpB
	var_13_object = Obj(); // 0xab PushV
	var_13_object = var_9_bool; // 0xac Mov
	func_1824(var_13_object); // 0xad NEW_2
	
Label_175:
	return 2; // 0xaf Return
}


task_1_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	return 0; // 0x126 Return
}


task_1_event_16(var_0_object, var_1_string, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	return 0; // 0x128 Return
}


task_1_event_41(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	return 0; // 0x12a Return
}


task_3_event_7(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_int)
{
	var_10_int = 1; // 0x405 PushI
	var_11_bool = var_9_int == var_10_int; // 0x406 Eq
	if(var_11_bool == 0) goto Label_1037; // 0x407 JumpB
	var_12_object = Obj(); // 0x408 PushV
	var_12_object = var_1_int; // 0x409 MovT
	func_1716(var_12_object); // 0x40a NEW_2
	goto Label_1041; // 0x40c Jump
	
Label_1041:
	return 0; // 0x411 Return
	
Label_1037:
	var_17_int = 0; // 0x40d PushV
	var_17_int = var_9_int; // 0x40e Mov
	func_1186(var_8_bool, var_9_int, var_17_int); // 0x40f NEW_2
}


task_3_event_1(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_bool = 0; // 0x420 PushV
	var_10_bool = 0; // 0x421 MovB
	var_11_bool = var_1_int == var_9_object; // 0x422 Eq
	if(var_11_bool == 0) goto Label_1063; // 0x423 JumpB
	var_12_bool = var_2_int == 0; // 0x424 Not
	if(var_12_bool == 0) goto Label_1063; // 0x425 JumpB
	var_10_bool = 1; // 0x426 MovB
	
Label_1063:
	if(var_10_bool == 0) goto Label_1069; // 0x427 JumpB
	var_2_int = 1; // 0x428 TMovB
	var_13_object = Obj(); // 0x429 PushV
	var_13_object = var_9_object; // 0x42a Mov
	func_1575(var_13_object); // 0x42b NEW_2
	
Label_1069:
	return 0; // 0x42d Return
}


task_3_event_2(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_bool = 0; // 0x42f PushV
	var_10_bool = 0; // 0x430 MovB
	var_11_bool = var_1_int == var_9_object; // 0x431 Eq
	if(var_11_bool == 0) goto Label_1078; // 0x432 JumpB
	var_12_int = var_2_int; // 0x433 PushT
	if(var_12_int == 0) goto Label_1078; // 0x434 JumpB
	var_10_bool = 1; // 0x435 MovB
	
Label_1078:
	if(var_10_bool == 0) goto Label_1083; // 0x436 JumpB
	var_2_int = 0; // 0x437 TMovB
	var_13_string = "head"; // 0x438 PushS
	UnlookAsync(var_13_string); // 0x439 Func
	
Label_1083:
	return 0; // 0x43b Return
}


task_3_event_10(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	RequestClearPath(var_9_object); // 0x4b5 Func
	return 0; // 0x4b7 Return
}


task_3_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	func_1042(var_9_object); // 0x4c1 NEW_2
	var_14_object = Obj(); // 0x4c3 PushV
	var_14_object = var_9_object; // 0x4c4 Mov
	func_1799(); // 0x4c5 NEW_2
	return 0; // 0x4c7 Return
}


event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float)
{
	var_13_object = Obj(); var_14_int = 0; var_15_float = 0; // 0x6e9 PushV
	var_13_object = var_9_object; // 0x6ea Mov
	var_14_int = var_10_int; // 0x6eb Mov
	var_15_float = var_11_float; // 0x6ec Mov
	func_1477(var_13_object, var_14_int, var_15_float); // 0x6ed NEW_2
	return 0; // 0x6ef Return
}


event_43(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float, var_13_cvector, var_14_cvector)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); // 0x6f1 PushV
	var_15_object = var_9_object; // 0x6f2 Mov
	var_16_int = var_10_int; // 0x6f3 Mov
	var_17_float = var_11_float; // 0x6f4 Mov
	var_18_cvector = var_13_cvector; // 0x6f5 Mov
	var_19_cvector = var_14_cvector; // 0x6f6 Mov
	func_1545(var_17_float, var_18_cvector, var_19_cvector); // 0x6f7 NEW_2
	return 0; // 0x6f9 Return
}


event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_string)
{
	var_11_float = 0; var_12_float = 0; // 0x6fa PushV
	var_13_string = "health"; // 0x6fb PushS
	var_14_bool = var_10_string == var_13_string; // 0x6fc Eq
	if(var_14_bool == 0) goto Label_1798; // 0x6fd JumpB
	var_15_string = "health"; // 0x6fe PushS
	GetProperty(var_15_string, var_12_float); // 0x6ff Func
	var_16_int = 0; // 0x701 PushI
	var_17_bool = var_12_float <= var_16_int; // 0x702 LE
	if(var_17_bool == 0) goto Label_1798; // 0x703 JumpB
	SignalDeath(var_9_object); // 0x704 Func
	
Label_1798:
	return 2; // 0x706 Return
}


event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_object = Obj(); // 0x708 PushV
	var_10_object = var_9_object; // 0x709 Mov
	func_1760(var_10_object); // 0x70a NEW_2
	return 0; // 0x70c Return
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	
Label_0:
	var_9_int = 3; // 0x0 PushI
	Sleep(var_9_int); // 0x1 Func
	func_42(); // 0x4 NEW_2
	goto Label_0; // 0x6 Jump
}


func_1545(var_15_object, var_18_cvector, var_19_cvector)
{
	var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); // 0x609 PushV
	GetScene(var_22_object); // 0x60a Func
	var_24_string = "scripted"; // 0x60c PushS
	var_25_string = "blood_dir.xml"; // 0x60d PushS
	AddActorByType(var_23_object, var_24_string, var_22_object, var_18_cvector, var_19_cvector, var_25_string); // 0x60e Func
	var_26_object = Obj(); // 0x610 PushV
	var_26_object = var_15_object; // 0x611 Mov
	func_1433(var_26_object); // 0x612 NEW_2
	return 4; // 0x614 Return
}


func_267(var_99_string)
{
	RemoveRTEnvelope(); // 0x10c Func
	SetDeathState(); // 0x10e Func
	Stop(); // 0x110 Func
	StopAsync(); // 0x112 Func
	StopSecondaryAnimation(); // 0x114 Func
	var_100_string = ""; // 0x116 PushV
	var_100_string = var_99_string; // 0x117 Mov
	func_1586(var_100_string); // 0x118 NEW_2
	var_129_string = "all"; // 0x11a PushS
	PlayAnimation(var_129_string, var_99_string); // 0x11b Func
	WaitForAnimEnd(); // 0x11d Func
	var_130_string = "all"; // 0x11f PushS
	LockAnimationEnd(var_130_string, var_99_string); // 0x120 Func
	RemoveEnvelope(); // 0x122 Func
	return 0; // 0x124 Return
}


func_1805(var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_object = Obj(); // 0x70e PushV
	var_17_object = var_15_object; // 0x70f Mov
	func_1409(var_16_bool, var_17_object); // 0x710 NEW_2
	var_14_bool = var_16_bool; // 0x711 Mov
	return 0; // 0x713 Return
}


func_1295(var_404_float, var_405_object, var_406_float, var_407_int)
{
	var_411_int = 0; var_412_string = ""; var_413_int = 0; var_414_float = 0; var_415_float = 0; var_416_float = 0; var_417_int = 0; var_418_string = ""; var_419_int = 0; var_420_float = 0; var_421_float = 0; var_422_float = 0; // 0x50f PushV
	var_423_bool = 0; var_424_object = Obj(); var_425_string = ""; // 0x510 PushV
	var_424_object = var_405_object; // 0x511 Mov
	var_425_string = "health"; // 0x512 MovS
	func_1261(var_423_bool, var_424_object, var_425_string); // 0x513 NEW_2
	var_426_bool = var_423_bool == 0; // 0x515 Not
	if(var_426_bool == 0) goto Label_1305; // 0x516 JumpB
	var_404_float = 0.0; // 0x517 MovF
	return 12; // 0x518 Return
	
Label_1305:
	var_427_bool = 0; var_428_object = Obj(); var_429_string = ""; // 0x519 PushV
	var_428_object = var_405_object; // 0x51a Mov
	var_429_string = "armor"; // 0x51b MovS
	func_1261(var_427_bool, var_428_object, var_429_string); // 0x51c NEW_2
	var_430_bool = var_427_bool == 0; // 0x51e Not
	if(var_430_bool == 0) goto Label_1314; // 0x51f JumpB
	var_417_int = 0; // 0x520 MovI
	goto Label_1317; // 0x521 Jump
	
Label_1317:
	var_431_string = "armor_"; // 0x525 PushS
	var_432_string = ""; var_433_int = 0; // 0x526 PushV
	var_433_int = var_407_int; // 0x527 Mov
	func_1235(var_432_string, var_433_int); // 0x528 NEW_2
	var_418_string = var_431_string + var_432_string; // 0x52a Add2
	var_438_bool = 0; var_439_object = Obj(); var_440_string = ""; // 0x52b PushV
	var_439_object = var_405_object; // 0x52c Mov
	var_440_string = var_418_string; // 0x52d Mov
	func_1261(var_438_bool, var_439_object, var_440_string); // 0x52e NEW_2
	var_441_bool = var_438_bool == 0; // 0x530 Not
	if(var_441_bool == 0) goto Label_1332; // 0x531 JumpB
	var_419_int = 0; // 0x532 MovI
	goto Label_1334; // 0x533 Jump
	
Label_1334:
	var_442_float = 0; var_443_float = 0; var_444_float = 0; // 0x536 PushV
	var_445_int = var_417_int + var_419_int; // 0x537 Add
	var_446_float = 100.0; // 0x538 PushF
	var_443_float = var_445_int / var_445_int; // 0x539 Div2
	var_444_float = 1; // 0x53a MovI
	func_1643(var_442_float, var_443_float, var_444_float); // 0x53b NEW_2
	var_420_float = var_442_float; // 0x53c Mov
	var_448_string = "health"; // 0x53e PushS
	GetProperty(var_448_string, var_421_float); // 0x53f ObjFunc
	var_449_int = 1; // 0x541 PushI
	var_450_int = var_449_int - var_420_float; // 0x542 Sub
	var_422_float = var_406_float * var_450_int; // 0x543 Mult2
	var_451_string = "health"; // 0x544 PushS
	var_452_float = 0; var_453_float = 0; var_454_float = 0; var_455_float = 0; // 0x545 PushV
	var_453_float = var_421_float - var_422_float; // 0x546 Sub2
	var_454_float = 0; // 0x547 MovI
	var_455_float = 1; // 0x548 MovI
	func_1650(var_452_float, var_453_float, var_454_float, var_455_float); // 0x549 NEW_2
	SetProperty(var_451_string, var_452_float); // 0x54b ObjFunc
	var_458_bool = 0; var_459_object = Obj(); // 0x54d PushV
	var_459_object = var_405_object; // 0x54e Mov
	func_1256(var_458_bool, var_459_object); // 0x54f NEW_2
	if(var_458_bool == 0) goto Label_1366; // 0x551 JumpB
	var_460_float = 0; // 0x552 PushV
	var_460_float = -var_422_float; // 0x553 Neg2
	func_1696(var_460_float); // 0x554 NEW_2
	
Label_1366:
	var_404_float = var_422_float; // 0x556 Mov
	return 12; // 0x557 Return
	
Label_1332:
	GetProperty(var_418_string, var_419_int); // 0x534 ObjFunc
	
Label_1314:
	var_464_string = "armor"; // 0x522 PushS
	GetProperty(var_464_string, var_417_int); // 0x523 ObjFunc
}


func_784(var_0_object, var_292_bool, var_293_float)
{
	var_294_bool = 0; var_295_cvector = CVector(0,0,0); var_296_cvector = CVector(0,0,0); var_297_cvector = CVector(0,0,0); var_298_float = 0; var_299_bool = 0; var_300_cvector = CVector(0,0,0); var_301_cvector = CVector(0,0,0); var_302_cvector = CVector(0,0,0); var_303_float = 0; // 0x310 PushV
	
Label_785:
	IsAnimationPlaying(var_299_bool); // 0x311 Func
	var_304_bool = var_299_bool == 0; // 0x313 Not
	if(var_304_bool == 0) goto Label_790; // 0x314 JumpB
	goto Label_822; // 0x315 Jump
	
Label_822:
	func_959(var_303_float); // 0x337 NEW_2
	var_292_bool = 0; // 0x339 MovB
	return 10; // 0x33a Return
	
Label_790:
	var_305_bool = 0; // 0x316 PushV
	func_855(var_305_bool); // 0x317 NEW_2
	if(var_305_bool == 0) goto Label_796; // 0x319 JumpB
	var_292_bool = 1; // 0x31a MovB
	return 10; // 0x31b Return
	
Label_796:
	var_348_bool = 0; var_349_object = Obj(); // 0x31c PushV
	var_349_object = var_0_object; // 0x31d MovT
	func_1409(var_348_bool, var_349_object); // 0x31e NEW_2
	var_350_bool = var_348_bool == 0; // 0x320 Not
	if(var_350_bool == 0) goto Label_804; // 0x321 JumpB
	var_292_bool = 0; // 0x322 MovB
	return 10; // 0x323 Return
	
Label_804:
	GetPFPosition(var_300_cvector); // 0x324 TObjFunc
	GetPFPosition(var_301_cvector); // 0x326 Func
	var_302_cvector = var_300_cvector - var_301_cvector; // 0x328 Sub2
	var_303_float = var_302_cvector | var_302_cvector; // 0x329 Or2
	var_351_float = var_293_float * var_293_float; // 0x32a Mult
	var_352_bool = var_303_float < var_351_float; // 0x32b LT
	if(var_352_bool == 0) goto Label_819; // 0x32c JumpB
	var_353_bool = 0; var_354_float = 0; // 0x32d PushV
	var_354_float = var_293_float; // 0x32e Mov
	func_620(var_303_float, var_353_bool, var_354_float); // 0x32f NEW_2
	var_292_bool = 1; // 0x331 MovB
	return 10; // 0x332 Return
	
Label_819:
	sync(); // 0x333 Func
	goto Label_785; // 0x335 Jump
}


func_1042(var_2_int)
{
	var_10_int = 1; // 0x412 PushI
	KillTimer(var_10_int); // 0x413 Func
	var_11_int = var_2_int; // 0x415 PushT
	if(var_11_int == 0) goto Label_1051; // 0x416 JumpB
	var_2_int = 0; // 0x417 TMovB
	var_12_string = "head"; // 0x418 PushS
	UnlookAsync(var_12_string); // 0x419 Func
	
Label_1051:
	func_1208(var_9_object); // 0x41c NEW_2
	return 0; // 0x41e Return
}


func_1812(var_50_object)
{
	var_51_object = Obj(); // 0x715 PushV
	var_51_object = var_50_object; // 0x716 Mov
	func_1878(var_51_object); // 0x717 NEW_2
	return 0; // 0x719 Return
}


func_1559()
{
	var_239_cvector = CVector(0,0,0); var_240_cvector = CVector(0,0,0); var_241_cvector = CVector(0,0,0); var_242_cvector = CVector(0,0,0); var_243_cvector = CVector(0,0,0); var_244_cvector = CVector(0,0,0); // 0x617 PushV
	GetPosition(var_242_cvector); // 0x618 ObjFunc
	GetPosition(var_243_cvector); // 0x61a Func
	var_244_cvector = var_242_cvector - var_243_cvector; // 0x61c Sub2
	var_245_float = GetByIndex(var_244_cvector, 0); // 0x61d PushE
	var_246_float = GetByIndex(var_244_cvector, 2); // 0x61e PushE
	RotateAsync(var_245_float, var_246_float); // 0x61f Func
	return 6; // 0x621 Return
}


func_1818(var_54_int)
{
	var_55_int = 0; var_56_int = 0; // 0x71a PushV
	var_57_string = "branch"; // 0x71b PushS
	GetVariable(var_57_string, var_56_int); // 0x71c Func
	var_54_int = var_56_int; // 0x71e Mov
	return 2; // 0x71f Return
}


func_1824(var_13_object)
{
	var_14_int = 0; // 0x721 PushV
	func_1818(var_14_int); // 0x722 NEW_2
	var_18_int = 1; // 0x724 PushI
	var_19_bool = var_14_int == var_18_int; // 0x725 Eq
	if(var_19_bool == 0) goto Label_1834; // 0x726 JumpB
	WorkWithCorpse(var_13_object); // 0x727 Func
	goto Label_1836; // 0x729 Jump
	
Label_1836:
	return 0; // 0x72c Return
	
Label_1834:
	Barter(var_13_object); // 0x72a Func
}


func_1570(var_24_bool)
{
	var_25_bool = 0; var_26_bool = 0; // 0x622 PushV
	IsLoaded(var_26_bool); // 0x623 Func
	var_24_bool = var_26_bool; // 0x625 Mov
	return 2; // 0x626 Return
}


func_546(var_1_object, var_2_int, var_4_bool)
{
	var_91_bool = 0; var_92_bool = 0; var_93_cvector = CVector(0,0,0); var_94_bool = 0; var_95_bool = 0; var_96_cvector = CVector(0,0,0); // 0x222 PushV
	var_1_object = 0; // 0x223 TMovI
	
Label_548:
	var_97_string = "all"; // 0x224 PushS
	var_98_string = "attack_begin"; // 0x225 PushS
	var_99_int = 1; // 0x226 PushI
	var_100_int = var_1_object + var_99_int; // 0x227 Add
	var_101_int = var_98_string + var_100_int; // 0x228 Add
	HasAnimation(var_94_bool, var_97_string, var_101_int); // 0x229 Func
	var_102_bool = var_94_bool == 0; // 0x22b Not
	if(var_102_bool == 0) goto Label_558; // 0x22c JumpB
	goto Label_561; // 0x22d Jump
	
Label_561:
	var_2_int = 0; // 0x231 TMovI
	
Label_562:
	var_103_string = "attack"; // 0x232 PushS
	var_104_int = 1; // 0x233 PushI
	var_105_int = var_2_int + var_104_int; // 0x234 Add
	var_106_int = var_103_string + var_105_int; // 0x235 Add
	IsExisting3DSound(var_95_bool, var_106_int); // 0x236 Func
	var_107_bool = var_95_bool == 0; // 0x238 Not
	if(var_107_bool == 0) goto Label_571; // 0x239 JumpB
	goto Label_574; // 0x23a Jump
	
Label_574:
	var_108_string = "all"; // 0x23e PushS
	var_109_string = "bjump"; // 0x23f PushS
	GetAnimationOffset(var_96_cvector, var_108_string, var_109_string); // 0x240 Func
	var_110_float = GetByIndex(var_96_cvector, 2); // 0x242 PushE
	var_4_bool = -var_110_float; // 0x243 Neg2
	return 6; // 0x244 Return
	
Label_571:
	var_111_int = 1; // 0x23b PushI
	var_2_int = var_2_int + var_111_int; // 0x23c Add2
	goto Label_562; // 0x23d Jump
	
Label_558:
	var_112_int = 1; // 0x22e PushI
	var_1_object = var_1_object + var_112_int; // 0x22f Add2
	goto Label_548; // 0x230 Jump
}


func_1575(var_13_object)
{
	var_14_float = 0; var_15_cvector = CVector(0,0,0); var_16_float = 0; var_17_cvector = CVector(0,0,0); // 0x627 PushV
	GetEyesHeight(var_16_float); // 0x628 ObjFunc
	var_17_cvector = CVector(0.0, 0.0, 0.0); // 0x62a MovV
	var_18_float = GetByIndex(var_17_cvector, 1); // 0x62b PushE
	var_18_float = var_16_float; // 0x62c Mov
	SetByIndex(var_17_cvector, 1) = var_18_float; // 0x62d PopE
	var_19_string = "head"; // 0x62e PushS
	LookAsync(var_13_object, var_19_string, var_17_cvector); // 0x62f Func
	return 4; // 0x631 Return
}


func_42()
{
	var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_bool = 0; var_15_float = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_bool = 0; var_22_float = 0; var_23_bool = 0; // 0x2a PushV
	WaitForAnimEnd(); // 0x2b Func
	var_24_bool = 0; // 0x2d PushV
	func_1570(var_24_bool); // 0x2e NEW_2
	var_27_bool = var_24_bool == 0; // 0x30 Not
	if(var_27_bool == 0) goto Label_51; // 0x31 JumpB
	return 14; // 0x32 Return
	
Label_51:
	var_28_int = 0; // 0x33 PushV
	func_1743(var_28_int); // 0x34 NEW_2
	var_17_int = var_28_int; // 0x35 Mov
	var_18_int = 0; // 0x37 MovI
	
Label_56:
	var_41_bool = 0; // 0x38 PushV
	var_41_bool = 0; // 0x39 MovB
	var_42_int = 5; // 0x3a PushI
	var_43_bool = var_18_int < var_42_int; // 0x3b LT
	if(var_43_bool == 0) goto Label_66; // 0x3c JumpB
	var_44_bool = 0; // 0x3d PushV
	func_1570(var_44_bool); // 0x3e NEW_2
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
	func_1736(var_50_string, var_51_int); // 0x50 NEW_2
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


func_299(var_59_object)
{
	
Label_300:
	var_66_object = Obj(); var_67_bool = 0; var_68_float = 0; // 0x12c PushV
	var_66_object = var_59_object; // 0x12d Mov
	var_67_bool = 1; // 0x12e MovB
	var_68_float = 180.0; // 0x12f MovF
	func_317(var_62_int, var_63_bool, var_64_float, var_65_int, var_59_object, var_66_object, var_67_bool, var_68_float); // 0x130 NEW_2
	var_523_int = 1; // 0x132 PushI
	Sleep(var_523_int); // 0x133 Func
	goto Label_300; // 0x135 Jump
}


func_1837(var_60_string)
{
	var_61_object = Obj(); var_62_int = 0; var_63_bool = 0; var_64_object = Obj(); var_65_int = 0; var_66_bool = 0; // 0x72d PushV
	CreateInvItem(var_64_object); // 0x72e Func
	SetItemName(var_60_string); // 0x730 ObjFunc
	var_67_string = "Organ"; // 0x732 PushS
	var_68_int = 1; // 0x733 PushI
	SetProperty(var_67_string, var_68_int); // 0x734 ObjFunc
	GetItemID(var_65_int); // 0x736 ObjFunc
	var_69_int = 0; // 0x738 PushI
	var_70_int = 1; // 0x739 PushI
	AddItem(var_66_bool, var_64_object, var_69_int, var_70_int); // 0x73a Func
	return 6; // 0x73c Return
}


func_1586(var_100_string)
{
	var_101_bool = 0; var_102_int = 0; var_103_bool = 0; var_104_int = 0; var_105_bool = 0; var_106_float = 0; var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_bool = 0; var_110_int = 0; var_111_bool = 0; var_112_int = 0; var_113_bool = 0; var_114_float = 0; var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0); // 0x632 PushV
	IsExisting3DSound(var_109_bool, var_100_string); // 0x633 Func
	var_117_bool = var_109_bool == 0; // 0x635 Not
	if(var_117_bool == 0) goto Label_1611; // 0x636 JumpB
	var_110_int = 0; // 0x637 MovI
	
Label_1592:
	var_118_int = 1; // 0x638 PushI
	var_119_int = var_110_int + var_118_int; // 0x639 Add
	var_120_int = var_100_string + var_119_int; // 0x63a Add
	IsExisting3DSound(var_111_bool, var_120_int); // 0x63b Func
	var_121_bool = var_111_bool == 0; // 0x63d Not
	if(var_121_bool == 0) goto Label_1600; // 0x63e JumpB
	goto Label_1603; // 0x63f Jump
	
Label_1603:
	var_122_bool = var_110_int == 0; // 0x643 Not
	if(var_122_bool == 0) goto Label_1606; // 0x644 JumpB
	return 16; // 0x645 Return
	
Label_1606:
	irand(var_112_int, var_110_int); // 0x646 Func
	var_123_int = 1; // 0x648 PushI
	var_124_int = var_112_int + var_123_int; // 0x649 Add
	var_100_string = var_100_string + var_124_int; // 0x64a Add2
	
Label_1611:
	Is3DSoundLoaded(var_113_bool, var_100_string); // 0x64b Func
	var_125_bool = var_113_bool; // 0x64d Push
	if(var_125_bool == 0) goto Label_1626; // 0x64e JumpB
	GetEyesHeight(var_114_float); // 0x64f Func
	GetDirection(var_115_cvector); // 0x651 Func
	var_126_int = 50; // 0x653 PushI
	var_116_cvector = var_115_cvector * var_126_int; // 0x654 Mult2
	var_127_float = GetByIndex(var_116_cvector, 1); // 0x655 PushE
	var_127_float = var_127_float + var_114_float; // 0x656 Add2
	SetByIndex(var_116_cvector, 1) = var_127_float; // 0x657 PopE
	PlayGlobalSound(var_100_string, var_116_cvector); // 0x658 Func
	
Label_1626:
	return 16; // 0x65a Return
	
Label_1600:
	var_128_int = 1; // 0x640 PushI
	var_110_int = var_110_int + var_128_int; // 0x641 Add2
	goto Label_1592; // 0x642 Jump
}


func_311(var_401_float)
{
	var_401_float = 0.03; // 0x138 MovF
	return 0; // 0x139 Return
}


func_314(var_408_int)
{
	var_408_int = 0; // 0x13b MovI
	return 0; // 0x13c Return
}


func_827(var_0_object, var_307_bool)
{
	var_308_cvector = CVector(0,0,0); var_309_cvector = CVector(0,0,0); var_310_cvector = CVector(0,0,0); var_311_float = 0; var_312_float = 0; var_313_cvector = CVector(0,0,0); var_314_cvector = CVector(0,0,0); var_315_cvector = CVector(0,0,0); var_316_float = 0; var_317_float = 0; // 0x33b PushV
	var_318_bool = 0; var_319_object = Obj(); // 0x33c PushV
	var_319_object = var_0_object; // 0x33d MovT
	func_1409(var_318_bool, var_319_object); // 0x33e NEW_2
	var_320_bool = var_318_bool == 0; // 0x340 Not
	if(var_320_bool == 0) goto Label_836; // 0x341 JumpB
	var_307_bool = 0; // 0x342 MovB
	return 10; // 0x343 Return
	
Label_836:
	var_321_bool = 0; // 0x344 PushV
	func_916(var_317_float, var_321_bool); // 0x345 NEW_2
	if(var_321_bool == 0) goto Label_853; // 0x347 JumpB
	GetPFPosition(var_313_cvector); // 0x348 TObjFunc
	GetPFPosition(var_314_cvector); // 0x34a Func
	var_315_cvector = var_313_cvector - var_314_cvector; // 0x34c Sub2
	var_316_float = var_315_cvector | var_315_cvector; // 0x34d Or2
	GetAttackDistance(var_317_float); // 0x34e TObjFunc
	var_322_int = 50; // 0x350 PushI
	var_317_float = var_317_float + var_322_int; // 0x351 Add2
	var_323_float = var_317_float * var_317_float; // 0x352 Mult
	var_307_bool = var_316_float <= var_323_float; // 0x353 LE2
	return 10; // 0x354 Return
	
Label_853:
	var_307_bool = 0; // 0x355 MovB
	return 10; // 0x356 Return
}


func_1084(var_0_object, var_1_object, var_164_bool, var_165_object, var_166_float, var_167_float, var_168_bool, var_169_bool)
{
	var_170_bool = 0; var_171_bool = 0; var_172_object = Obj(); var_173_cvector = CVector(0,0,0); var_174_cvector = CVector(0,0,0); var_175_cvector = CVector(0,0,0); var_176_float = 0; var_177_object = Obj(); var_178_bool = 0; var_179_bool = 0; var_180_object = Obj(); var_181_cvector = CVector(0,0,0); var_182_cvector = CVector(0,0,0); var_183_cvector = CVector(0,0,0); var_184_float = 0; var_185_object = Obj(); // 0x43c PushV
	var_0_object = 0; // 0x43d TMovB
	var_1_object = var_165_object; // 0x43e TMov
	var_179_bool = var_169_bool; // 0x43f Mov
	
Label_1088:
	var_186_bool = 0; var_187_object = Obj(); // 0x440 PushV
	var_187_object = var_165_object; // 0x441 Mov
	func_1224(var_186_bool, var_187_object); // 0x442 NEW_2
	var_190_bool = var_186_bool == 0; // 0x444 Not
	if(var_190_bool == 0) goto Label_1096; // 0x445 JumpB
	var_164_bool = 0; // 0x446 MovB
	return 16; // 0x447 Return
	
Label_1096:
	GetPosition(var_181_cvector); // 0x448 ObjFunc
	GetPosition(var_182_cvector); // 0x44a Func
	var_183_cvector = var_181_cvector - var_182_cvector; // 0x44c Sub2
	var_184_float = var_183_cvector | var_183_cvector; // 0x44d Or2
	var_191_bool = 0; // 0x44e PushV
	var_191_bool = 0; // 0x44f MovB
	var_192_int = 0; // 0x450 PushI
	var_193_bool = var_167_float > var_192_int; // 0x451 GT
	if(var_193_bool == 0) goto Label_1111; // 0x452 JumpB
	var_194_float = var_167_float * var_167_float; // 0x453 Mult
	var_195_bool = var_184_float > var_194_float; // 0x454 GT
	if(var_195_bool == 0) goto Label_1111; // 0x455 JumpB
	var_191_bool = 1; // 0x456 MovB
	
Label_1111:
	if(var_191_bool == 0) goto Label_1116; // 0x457 JumpB
	Stop(); // 0x458 Func
	var_164_bool = 0; // 0x45a MovB
	return 16; // 0x45b Return
	
Label_1116:
	var_196_float = var_166_float * var_166_float; // 0x45c Mult
	var_197_bool = var_184_float > var_196_float; // 0x45d GT
	if(var_197_bool == 0) goto Label_1178; // 0x45e JumpB
	GetPFPosition(var_181_cvector); // 0x45f ObjFunc
	FindPathTo(var_185_object, var_181_cvector); // 0x461 Func
	var_198_bool = var_185_object != 0; // 0x463 NullNeq
	if(var_198_bool == 0) goto Label_1127; // 0x464 JumpB
	var_180_object = var_185_object; // 0x465 Mov
	var_185_object = 0; // 0x466 SetNull
	
Label_1127:
	var_199_bool = var_180_object != 0; // 0x467 NullNeq
	if(var_199_bool == 0) goto Label_1160; // 0x468 JumpB
	var_200_bool = var_179_bool; // 0x469 Push
	if(var_200_bool == 0) goto Label_1137; // 0x46a JumpB
	var_179_bool = 0; // 0x46b MovB
	RotatePath(var_180_object, var_178_bool); // 0x46c Func
	var_201_bool = var_178_bool == 0; // 0x46e Not
	if(var_201_bool == 0) goto Label_1137; // 0x46f JumpB
	goto Label_1184; // 0x470 Jump
	
Label_1184:
	var_164_bool = !var_0_object; // 0x4a0 Not2
	return 16; // 0x4a1 Return
	
Label_1137:
	var_202_int = 0; // 0x471 PushI
	var_203_float = 0.3; // 0x472 PushF
	SetTimer(var_202_int, var_203_float); // 0x473 Func
	var_204_string = ""; // 0x475 PushV
	func_1231(var_204_string); // 0x476 NEW_2
	var_205_string = ""; // 0x478 PushV
	func_1233(var_205_string); // 0x479 NEW_2
	FollowPath(var_180_object, var_168_bool, var_178_bool, var_204_string, var_205_string); // 0x47b Func
	var_206_bool = var_178_bool == 0; // 0x47d Not
	if(var_206_bool == 0) goto Label_1158; // 0x47e JumpB
	var_207_object = var_0_object; // 0x47f PushT
	if(var_207_object == 0) goto Label_1156; // 0x480 JumpB
	var_180_object = 0; // 0x481 SetNull
	goto Label_1184; // 0x482 Jump
	
Label_1156:
	goto Label_1183; // 0x484 Jump
	
Label_1183:
	goto Label_1088; // 0x49f Jump
	
Label_1158:
	var_180_object = 0; // 0x486 SetNull
	goto Label_1176; // 0x487 Jump
	
Label_1176:
	var_185_object = 0; // 0x498 SetNull
	goto Label_1182; // 0x499 Jump
	
Label_1182:
	var_180_object = 0; // 0x49e SetNull
	
Label_1160:
	var_208_int = 0; // 0x488 PushI
	KillTimer(var_208_int); // 0x489 Func
	var_209_float = 0.5; // 0x48b PushF
	Sleep(var_209_float, var_178_bool); // 0x48c Func
	var_210_bool = var_178_bool == 0; // 0x48e Not
	if(var_210_bool == 0) goto Label_1172; // 0x48f JumpB
	var_211_object = var_0_object; // 0x490 PushT
	if(var_211_object == 0) goto Label_1172; // 0x491 JumpB
	var_180_object = 0; // 0x492 SetNull
	goto Label_1184; // 0x493 Jump
	
Label_1172:
	var_212_int = 0; // 0x494 PushI
	var_213_float = 0.3; // 0x495 PushF
	SetTimer(var_212_int, var_213_float); // 0x496 Func
	
Label_1178:
	var_214_int = 0; // 0x49a PushI
	KillTimer(var_214_int); // 0x49b Func
	goto Label_1184; // 0x49d Jump
}


func_317(var_0_object, var_3_int, var_5_float, var_66_object, var_67_bool, var_68_float, var_141_bool, var_233_bool)
{
	var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_bool = 0; var_73_bool = 0; var_74_float = 0; var_75_cvector = CVector(0,0,0); var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_bool = 0; var_79_float = 0; var_80_float = 0; var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_bool = 0; var_84_bool = 0; var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_float = 0; var_88_cvector = CVector(0,0,0); var_89_bool = 0; var_90_float = 0; // 0x13d PushV
	func_546(var_88_cvector, var_89_bool, var_90_float); // 0x13f NEW_2
	var_5_float = 0; // 0x141 TMovI
	var_113_string = "@GetAttackDistance"; // 0x142 PushS
	var_114_int = 1; // 0x143 PushI
	var_115_bool = IsFuncExist(var_66_object, var_113_string, var_114_int); // 0x144 FuncExist
	if(var_115_bool == 0) goto Label_331; // 0x145 JumpB
	GetAttackDistance(var_80_float); // 0x146 ObjFunc
	var_116_int = 50; // 0x148 PushI
	var_80_float = var_80_float + var_116_int; // 0x149 Add2
	goto Label_332; // 0x14a Jump
	
Label_332:
	var_117_int = 150; // 0x14c PushI
	var_118_bool = var_80_float >= var_117_int; // 0x14d GE
	if(var_118_bool == 0) goto Label_336; // 0x14e JumpB
	var_80_float = 150; // 0x14f MovI
	
Label_336:
	var_3_int = 0; // 0x150 TMovB
	var_0_object = var_66_object; // 0x151 TMov
	IsPlayerActor(var_0_object, var_83_bool); // 0x152 Func
	var_119_bool = var_83_bool; // 0x154 Push
	if(var_119_bool == 0) goto Label_350; // 0x155 JumpB
	var_120_string = "attack"; // 0x156 PushS
	PlayGlobalMusic(var_120_string); // 0x157 Func
	var_121_object = Obj(); // 0x159 PushV
	func_1627(var_121_object); // 0x15a NEW_2
	SendPlayerEnemy(var_66_object, var_121_object); // 0x15c Func
	
Label_350:
	var_122_bool = var_67_bool; // 0x15e Push
	if(var_122_bool == 0) goto Label_354; // 0x15f JumpB
	var_84_bool = 0; // 0x160 MovB
	goto Label_355; // 0x161 Jump
	
Label_355:
	var_123_float = 400.0; // 0x163 PushF
	var_85_float = var_123_float + var_80_float; // 0x164 Add2
	
Label_357:
	var_124_bool = 0; // 0x165 PushV
	var_124_bool = 0; // 0x166 MovB
	var_125_bool = 0; var_126_object = Obj(); // 0x167 PushV
	var_126_object = var_0_object; // 0x168 MovT
	func_1409(var_125_bool, var_126_object); // 0x169 NEW_2
	if(var_125_bool == 0) goto Label_367; // 0x16b JumpB
	var_127_bool = var_3_int == 0; // 0x16c Not
	if(var_127_bool == 0) goto Label_367; // 0x16d JumpB
	var_124_bool = 1; // 0x16e MovB
	
Label_367:
	if(var_124_bool == 0) goto Label_529; // 0x16f JumpB
	func_959(var_90_float); // 0x171 NEW_2
	GetPFPosition(var_81_cvector); // 0x173 TObjFunc
	GetPFPosition(var_82_cvector); // 0x175 Func
	var_86_cvector = var_81_cvector - var_82_cvector; // 0x177 Sub2
	var_87_float = var_86_cvector | var_86_cvector; // 0x178 Or2
	var_133_float = var_85_float * var_85_float; // 0x179 Mult
	var_134_bool = var_87_float >= var_133_float; // 0x17a GE
	if(var_134_bool == 0) goto Label_395; // 0x17b JumpB
	var_135_bool = 0; var_136_object = Obj(); var_137_float = 0; var_138_float = 0; var_139_bool = 0; var_140_bool = 0; // 0x17c PushV
	var_136_object = var_0_object; // 0x17d MovT
	var_137_float = var_80_float; // 0x17e Mov
	var_138_float = 3000.0; // 0x17f MovF
	var_139_bool = 1; // 0x180 MovB
	var_140_bool = 0; // 0x181 MovB
	TaskCall(3); // 0x182 TaskCall
	func_979(var_143_bool, var_135_bool, var_136_object, var_137_float, var_138_float, var_139_bool, var_140_bool); // 0x183 NEW_2
	TaskReturn(); // 0x184 TaskReturn
	var_218_bool = var_141_bool == 0; // 0x186 Not
	if(var_218_bool == 0) goto Label_393; // 0x187 JumpB
	goto Label_529; // 0x188 Jump
	
Label_529:
	WaitForAnimEnd(); // 0x211 Func
	var_219_int = var_3_int; // 0x213 PushT
	if(var_219_int == 0) goto Label_534; // 0x214 JumpB
	return 22; // 0x215 Return
	
Label_534:
	var_220_string = "all"; // 0x216 PushS
	var_221_string = "attack_off"; // 0x217 PushS
	PlayAnimation(var_220_string, var_221_string); // 0x218 Func
	WaitForAnimEnd(); // 0x21a Func
	var_222_bool = var_83_bool; // 0x21c Push
	if(var_222_bool == 0) goto Label_545; // 0x21d JumpB
	var_223_float = 2.0; // 0x21e PushF
	Sleep(var_223_float); // 0x21f Func
	
Label_545:
	return 22; // 0x221 Return
	
Label_393:
	var_84_bool = 0; // 0x189 MovB
	goto Label_528; // 0x18a Jump
	
Label_528:
	goto Label_357; // 0x210 Jump
	
Label_395:
	var_224_float = var_68_float * var_68_float; // 0x18b Mult
	var_225_bool = var_87_float >= var_224_float; // 0x18c GE
	if(var_225_bool == 0) goto Label_520; // 0x18d JumpB
	GetPFPosition(var_88_cvector); // 0x18e TObjFunc
	CanReachByPF(var_89_bool, var_88_cvector); // 0x190 Func
	var_226_bool = var_89_bool == 0; // 0x192 Not
	if(var_226_bool == 0) goto Label_419; // 0x193 JumpB
	var_227_bool = 0; var_228_object = Obj(); var_229_float = 0; var_230_float = 0; var_231_bool = 0; var_232_bool = 0; // 0x194 PushV
	var_228_object = var_0_object; // 0x195 MovT
	var_229_float = var_80_float; // 0x196 Mov
	var_230_float = 3000.0; // 0x197 MovF
	var_231_bool = 1; // 0x198 MovB
	var_232_bool = 0; // 0x199 MovB
	TaskCall(3); // 0x19a TaskCall
	func_979(var_235_bool, var_227_bool, var_228_object, var_229_float, var_230_float, var_231_bool, var_232_bool); // 0x19b NEW_2
	TaskReturn(); // 0x19c TaskReturn
	var_236_bool = var_233_bool == 0; // 0x19e Not
	if(var_236_bool == 0) goto Label_417; // 0x19f JumpB
	goto Label_529; // 0x1a0 Jump
	
Label_417:
	var_84_bool = 0; // 0x1a1 MovB
	goto Label_357; // 0x1a2 Jump
	
Label_419:
	var_237_bool = var_84_bool == 0; // 0x1a3 Not
	if(var_237_bool == 0) goto Label_444; // 0x1a4 JumpB
	var_238_object = Obj(); // 0x1a5 PushV
	var_238_object = var_0_object; // 0x1a6 MovT
	func_1559(); // 0x1a7 NEW_2
	var_247_string = "all"; // 0x1a9 PushS
	var_248_string = "attack_on"; // 0x1aa PushS
	PlayAnimation(var_247_string, var_248_string); // 0x1ab Func
	WaitForAnimEnd(); // 0x1ad Func
	func_959(var_90_float); // 0x1b0 NEW_2
	StopAsync(); // 0x1b2 Func
	var_84_bool = 1; // 0x1b4 MovB
	var_249_bool = 0; var_250_object = Obj(); // 0x1b5 PushV
	var_250_object = var_0_object; // 0x1b6 MovT
	func_1409(var_249_bool, var_250_object); // 0x1b7 NEW_2
	var_251_bool = var_249_bool == 0; // 0x1b9 Not
	if(var_251_bool == 0) goto Label_444; // 0x1ba JumpB
	goto Label_529; // 0x1bb Jump
	
Label_444:
	rand(var_90_float); // 0x1bc Func
	var_252_bool = 0; // 0x1be PushV
	var_252_bool = 1; // 0x1bf MovB
	var_253_float = 0.25; // 0x1c0 PushF
	var_254_bool = var_90_float < var_253_float; // 0x1c1 LT
	if(var_254_bool == 0) goto Label_456; // 0x1c2 JumpB
	var_255_bool = 0; // 0x1c3 PushV
	func_916(var_252_bool, var_255_bool); // 0x1c4 NEW_2
	if(var_255_bool == 0) goto Label_456; // 0x1c6 JumpB
	var_252_bool = 0; // 0x1c7 MovB
	
Label_456:
	if(var_252_bool == 0) goto Label_473; // 0x1c8 JumpB
	Face(var_0_object); // 0x1c9 Func
	func_966(); // 0x1cc NEW_2
	var_290_string = "all"; // 0x1ce PushS
	var_291_string = "attack_stay"; // 0x1cf PushS
	PlayAnimation(var_290_string, var_291_string); // 0x1d0 Func
	var_292_bool = 0; var_293_float = 0; // 0x1d2 PushV
	var_293_float = var_68_float; // 0x1d3 Mov
	func_784(var_90_float, var_292_bool, var_293_float); // 0x1d4 NEW_2
	StopAsync(); // 0x1d6 Func
	goto Label_519; // 0x1d8 Jump
	
Label_519:
	goto Label_528; // 0x207 Jump
	
Label_473:
	Face(var_0_object); // 0x1d9 Func
	var_507_string = "all"; // 0x1db PushS
	var_508_string = "fjump"; // 0x1dc PushS
	PlayAnimation(var_507_string, var_508_string); // 0x1dd Func
	WaitForAnimEnd(); // 0x1df Func
	func_959(var_90_float); // 0x1e2 NEW_2
	var_509_cvector = CVector(0.0, 0.0, 0.0); // 0x1e4 PushVec
	SetSpeed(var_509_cvector); // 0x1e5 Func
	Stop(); // 0x1e7 Func
	StopAsync(); // 0x1e9 Func
	var_510_bool = 0; // 0x1eb PushV
	func_916(var_90_float, var_510_bool); // 0x1ec NEW_2
	var_511_bool = var_510_bool == 0; // 0x1ee Not
	if(var_511_bool == 0) goto Label_519; // 0x1ef JumpB
	var_512_bool = 0; var_513_object = Obj(); // 0x1f0 PushV
	var_513_object = var_0_object; // 0x1f1 MovT
	func_1409(var_512_bool, var_513_object); // 0x1f2 NEW_2
	var_514_bool = var_512_bool == 0; // 0x1f4 Not
	if(var_514_bool == 0) goto Label_503; // 0x1f5 JumpB
	goto Label_529; // 0x1f6 Jump
	
Label_503:
	GetPFPosition(var_81_cvector); // 0x1f7 TObjFunc
	GetPFPosition(var_82_cvector); // 0x1f9 Func
	var_86_cvector = var_81_cvector - var_82_cvector; // 0x1fb Sub2
	var_87_float = var_86_cvector | var_86_cvector; // 0x1fc Or2
	var_515_float = var_68_float * var_68_float; // 0x1fd Mult
	var_516_bool = var_87_float < var_515_float; // 0x1fe LT
	if(var_516_bool == 0) goto Label_519; // 0x1ff JumpB
	var_517_bool = 0; var_518_float = 0; // 0x200 PushV
	var_518_float = var_68_float; // 0x201 Mov
	func_620(var_90_float, var_517_bool, var_518_float); // 0x202 NEW_2
	var_519_bool = var_517_bool == 0; // 0x204 Not
	if(var_519_bool == 0) goto Label_519; // 0x205 JumpB
	goto Label_529; // 0x206 Jump
	
Label_520:
	var_520_bool = 0; var_521_float = 0; // 0x208 PushV
	var_521_float = var_68_float; // 0x209 Mov
	func_620(var_90_float, var_520_bool, var_521_float); // 0x20a NEW_2
	var_522_bool = var_520_bool == 0; // 0x20c Not
	if(var_522_bool == 0) goto Label_527; // 0x20d JumpB
	goto Label_529; // 0x20e Jump
	
Label_527:
	var_84_bool = 1; // 0x20f MovB
	
Label_354:
	var_84_bool = 1; // 0x162 MovB
	
Label_331:
	var_80_float = var_68_float; // 0x14b Mov
}


func_1854()
{
	var_54_int = 0; // 0x73e PushV
	func_1818(var_54_int); // 0x73f NEW_2
	var_58_int = 1; // 0x741 PushI
	var_59_bool = var_54_int != var_58_int; // 0x742 Neq
	if(var_59_bool == 0) goto Label_1861; // 0x743 JumpB
	return 0; // 0x744 Return
	
Label_1861:
	var_60_string = ""; // 0x745 PushV
	var_60_string = "liver"; // 0x746 MovS
	func_1837(var_60_string); // 0x747 NEW_2
	var_71_string = ""; // 0x749 PushV
	var_71_string = "kidney"; // 0x74a MovS
	func_1837(var_71_string); // 0x74b NEW_2
	var_72_string = ""; // 0x74d PushV
	var_72_string = "heart"; // 0x74e MovS
	func_1837(var_72_string); // 0x74f NEW_2
	var_73_string = ""; // 0x751 PushV
	var_73_string = "blood"; // 0x752 MovS
	func_1837(var_73_string); // 0x753 NEW_2
	return 0; // 0x755 Return
}


func_581(var_0_object, var_390_float, var_391_int)
{
	var_392_object = Obj(); var_393_float = 0; var_394_float = 0; var_395_object = Obj(); var_396_float = 0; var_397_float = 0; // 0x245 PushV
	var_398_float = 0.9; // 0x246 PushF
	var_399_float = var_390_float * var_398_float; // 0x247 Mult
	GetVictim(var_399_float, var_395_object); // 0x248 Func
	ReportAttack(var_0_object); // 0x24a Func
	var_400_bool = var_395_object == var_0_object; // 0x24c Eq
	if(var_400_bool == 0) goto Label_618; // 0x24d JumpB
	var_401_float = 0; var_402_object = Obj(); var_403_int = 0; // 0x24e PushV
	var_402_object = var_395_object; // 0x24f Mov
	var_403_int = var_391_int; // 0x250 Mov
	func_311(var_403_int); // 0x251 NEW_2
	var_396_float = var_401_float; // 0x252 Mov
	var_404_float = 0; var_405_object = Obj(); var_406_float = 0; var_407_int = 0; // 0x254 PushV
	var_405_object = var_395_object; // 0x255 Mov
	var_406_float = var_396_float; // 0x256 Mov
	var_408_int = 0; var_409_object = Obj(); var_410_int = 0; // 0x257 PushV
	var_409_object = var_395_object; // 0x258 Mov
	var_410_int = var_391_int; // 0x259 Mov
	func_314(var_410_int); // 0x25a NEW_2
	var_407_int = var_408_int; // 0x25b Mov
	func_1295(var_404_float, var_405_object, var_406_float, var_407_int); // 0x25d NEW_2
	var_397_float = var_404_float; // 0x25e Mov
	var_465_int = 0; // 0x260 PushV
	func_964(var_465_int); // 0x261 NEW_2
	ReportHit(var_0_object, var_465_int, var_397_float, var_396_float); // 0x263 Func
	var_466_object = Obj(); var_467_float = 0; // 0x265 PushV
	var_466_object = var_395_object; // 0x266 Mov
	var_467_float = var_397_float; // 0x267 Mov
	func_971(); // 0x268 NEW_2
	
Label_618:
	return 6; // 0x26a Return
}


func_1878(var_51_object)
{
	var_52_object = Obj(); var_53_object = Obj(); // 0x756 PushV
	var_54_string = "b1q04_attack"; // 0x757 PushS
	var_55_int = 1; // 0x758 PushI
	SetVariable(var_54_string, var_55_int); // 0x759 Func
	GetScene(var_53_object); // 0x75b Func
	var_56_object = Obj(); // 0x75d PushV
	func_1627(var_56_object); // 0x75e NEW_2
	RemoveStationaryActor(var_56_object); // 0x760 ObjFunc
	var_59_object = Obj(); // 0x762 PushV
	var_59_object = var_51_object; // 0x763 Mov
	TaskCall(2); // 0x764 TaskCall
	func_299(var_59_object); // 0x765 NEW_2
	TaskReturn(); // 0x766 TaskReturn
	return 2; // 0x768 Return
}


func_855(var_305_bool)
{
	var_306_bool = 0; // 0x357 PushV
	var_306_bool = 0; // 0x358 MovB
	var_307_bool = 0; // 0x359 PushV
	func_827(var_306_bool, var_307_bool); // 0x35a NEW_2
	if(var_307_bool == 0) goto Label_866; // 0x35c JumpB
	var_324_bool = 0; // 0x35d PushV
	func_871(var_305_bool, var_306_bool, var_324_bool); // 0x35e NEW_2
	if(var_324_bool == 0) goto Label_866; // 0x360 JumpB
	var_306_bool = 1; // 0x361 MovB
	
Label_866:
	if(var_306_bool == 0) goto Label_869; // 0x362 JumpB
	var_305_bool = 1; // 0x363 MovB
	return 0; // 0x364 Return
	
Label_869:
	var_305_bool = 0; // 0x365 MovB
	return 0; // 0x366 Return
}


func_1368(var_37_bool)
{
	var_39_bool = 0; var_40_bool = 0; // 0x558 PushV
	IsDead(var_40_bool); // 0x559 ObjFunc
	var_37_bool = var_40_bool; // 0x55b Mov
	return 2; // 0x55c Return
}


func_1627(var_56_object)
{
	var_57_object = Obj(); var_58_object = Obj(); // 0x65b PushV
	self(var_58_object); // 0x65c Func
	var_56_object = var_58_object; // 0x65e Mov
	return 2; // 0x65f Return
}


func_1373(var_26_bool, var_27_object)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); // 0x55d PushV
	var_32_bool = var_27_object == 0; // 0x55e NullEq
	if(var_32_bool == 0) goto Label_1378; // 0x55f JumpB
	var_26_bool = 0; // 0x560 MovB
	return 4; // 0x561 Return
	
Label_1378:
	var_33_bool = 0; // 0x562 PushV
	var_33_bool = 0; // 0x563 MovB
	var_34_string = "IsDead"; // 0x564 PushS
	var_35_int = 1; // 0x565 PushI
	var_36_bool = IsFuncExist(var_27_object, var_34_string, var_35_int); // 0x566 FuncExist
	if(var_36_bool == 0) goto Label_1390; // 0x567 JumpB
	var_37_bool = 0; var_38_object = Obj(); // 0x568 PushV
	var_38_object = var_27_object; // 0x569 Mov
	func_1368(var_38_object); // 0x56a NEW_2
	if(var_37_bool == 0) goto Label_1390; // 0x56c JumpB
	var_33_bool = 1; // 0x56d MovB
	
Label_1390:
	if(var_33_bool == 0) goto Label_1393; // 0x56e JumpB
	var_26_bool = 0; // 0x56f MovB
	return 4; // 0x570 Return
	
Label_1393:
	GetScene(var_30_object); // 0x571 Func
	var_41_bool = var_30_object == 0; // 0x573 NullEq
	if(var_41_bool == 0) goto Label_1399; // 0x574 JumpB
	var_26_bool = 0; // 0x575 MovB
	return 4; // 0x576 Return
	
Label_1399:
	GetScene(var_31_object); // 0x577 ObjFunc
	var_42_bool = var_30_object != var_31_object; // 0x579 Neq
	if(var_42_bool == 0) goto Label_1405; // 0x57a JumpB
	var_26_bool = 0; // 0x57b MovB
	return 4; // 0x57c Return
	
Label_1405:
	var_26_bool = 1; // 0x57d MovB
	return 4; // 0x57e Return
}


func_1633(var_41_cvector, var_42_cvector)
{
	var_49_float = 0; var_50_float = 0; // 0x661 PushV
	var_51_int = var_42_cvector | var_42_cvector; // 0x662 Or
	var_50_float = sqrt(var_51_int); // 0x663 Sqrt2
	var_52_float = 0.0; // 0x664 PushF
	var_53_bool = var_50_float < var_52_float; // 0x665 LT
	if(var_53_bool == 0) goto Label_1641; // 0x666 JumpB
	var_41_cvector = CVector(0.0, 0.0, 0.0); // 0x667 MovV
	return 2; // 0x668 Return
	
Label_1641:
	var_41_cvector = var_42_cvector / var_42_cvector; // 0x669 Div2
	return 2; // 0x66a Return
}


func_871(var_0_object, var_4_bool, var_324_bool)
{
	var_325_object = Obj(); var_326_bool = 0; var_327_float = 0; var_328_cvector = CVector(0,0,0); var_329_cvector = CVector(0,0,0); var_330_object = Obj(); var_331_bool = 0; var_332_float = 0; var_333_cvector = CVector(0,0,0); var_334_cvector = CVector(0,0,0); // 0x367 PushV
	GetScene(var_330_object); // 0x368 Func
	var_331_bool = 0; // 0x36a MovB
	
Label_875:
	var_335_cvector = CVector(0,0,0); var_336_object = Obj(); // 0x36b PushV
	var_336_object = var_0_object; // 0x36c MovT
	func_1249(var_336_object); // 0x36d NEW_2
	var_341_int = -var_335_cvector; // 0x36f Neg
	FindDirLength(var_332_float, var_341_int, var_332_float); // 0x370 Func
	var_342_bool = var_332_float < var_4_bool; // 0x372 LT
	if(var_342_bool == 0) goto Label_885; // 0x373 JumpB
	goto Label_913; // 0x374 Jump
	
Label_913:
	var_324_bool = var_331_bool; // 0x391 Mov
	return 10; // 0x392 Return
	
Label_885:
	Face(var_0_object); // 0x375 Func
	var_343_string = "all"; // 0x377 PushS
	var_344_string = "bjump"; // 0x378 PushS
	PlayAnimation(var_343_string, var_344_string); // 0x379 Func
	GetPFPosition(var_333_cvector); // 0x37b TObjFunc
	GetPFPosition(var_334_cvector); // 0x37d Func
	WaitForAnimEnd(); // 0x37f Func
	func_959(var_334_cvector); // 0x382 NEW_2
	StopAsync(); // 0x384 Func
	var_345_cvector = CVector(0.0, 0.0, 0.0); // 0x386 PushVec
	SetSpeed(var_345_cvector); // 0x387 Func
	var_331_bool = 1; // 0x389 MovB
	var_346_bool = 0; // 0x38a PushV
	func_827(var_334_cvector, var_346_bool); // 0x38b NEW_2
	var_347_bool = var_346_bool == 0; // 0x38d Not
	if(var_347_bool == 0) goto Label_912; // 0x38e JumpB
	goto Label_913; // 0x38f Jump
	
Label_912:
	goto Label_875; // 0x390 Jump
}


func_1643(var_442_float, var_443_float, var_444_float)
{
	var_447_bool = var_443_float < var_444_float; // 0x66c LT
	if(var_447_bool == 0) goto Label_1648; // 0x66d JumpB
	var_442_float = var_443_float; // 0x66e Mov
	goto Label_1649; // 0x66f Jump
	
Label_1649:
	return 0; // 0x671 Return
	
Label_1648:
	var_442_float = var_444_float; // 0x670 Mov
}


func_620(var_0_object, var_353_bool, var_354_float)
{
	var_355_int = 0; var_356_bool = 0; var_357_int = 0; var_358_string = ""; var_359_int = 0; var_360_bool = 0; var_361_int = 0; var_362_string = ""; // 0x26c PushV
	func_959(var_362_string); // 0x26e NEW_2
	irand(var_359_int, var_362_string); // 0x270 Func
	var_363_int = 1; // 0x272 PushI
	var_359_int = var_359_int + var_363_int; // 0x273 Add2
	Face(var_0_object); // 0x274 Func
	var_364_bool = 1; // 0x276 PushB
	SetAttackState(var_364_bool); // 0x277 Func
	func_1725(); // 0x27a NEW_2
	var_369_string = "all"; // 0x27c PushS
	var_370_string = "attack_begin"; // 0x27d PushS
	var_371_int = var_370_string + var_359_int; // 0x27e Add
	PlayAnimation(var_369_string, var_371_int); // 0x27f Func
	WaitForAnimEnd(); // 0x281 Func
	func_927(var_361_int, var_362_string); // 0x284 NEW_2
	var_387_bool = 0; var_388_object = Obj(); // 0x286 PushV
	var_388_object = var_0_object; // 0x287 MovT
	func_1409(var_387_bool, var_388_object); // 0x288 NEW_2
	var_389_bool = var_387_bool == 0; // 0x28a Not
	if(var_389_bool == 0) goto Label_656; // 0x28b JumpB
	StopAsync(); // 0x28c Func
	var_353_bool = 0; // 0x28e MovB
	return 8; // 0x28f Return
	
Label_656:
	var_390_float = 0; var_391_int = 0; // 0x290 PushV
	var_390_float = var_354_float; // 0x291 Mov
	var_391_int = var_359_int; // 0x292 Mov
	func_581(var_362_string, var_390_float, var_391_int); // 0x293 NEW_2
	var_468_string = "all"; // 0x295 PushS
	var_469_string = "attack_middle"; // 0x296 PushS
	var_470_int = var_469_string + var_359_int; // 0x297 Add
	HasAnimation(var_360_bool, var_468_string, var_470_int); // 0x298 Func
	var_471_bool = var_360_bool; // 0x29a Push
	if(var_471_bool == 0) goto Label_737; // 0x29b JumpB
	func_1725(); // 0x29d NEW_2
	var_472_string = "all"; // 0x29f PushS
	var_473_string = "attack_middle"; // 0x2a0 PushS
	var_474_int = var_473_string + var_359_int; // 0x2a1 Add
	PlayAnimation(var_472_string, var_474_int); // 0x2a2 Func
	WaitForAnimEnd(); // 0x2a4 Func
	func_959(var_362_string); // 0x2a7 NEW_2
	var_475_bool = 0; var_476_object = Obj(); // 0x2a9 PushV
	var_476_object = var_0_object; // 0x2aa MovT
	func_1409(var_475_bool, var_476_object); // 0x2ab NEW_2
	var_477_bool = var_475_bool == 0; // 0x2ad Not
	if(var_477_bool == 0) goto Label_691; // 0x2ae JumpB
	StopAsync(); // 0x2af Func
	var_353_bool = 0; // 0x2b1 MovB
	return 8; // 0x2b2 Return
	
Label_691:
	var_478_float = 0; var_479_int = 0; // 0x2b3 PushV
	var_478_float = var_354_float; // 0x2b4 Mov
	var_479_int = var_359_int; // 0x2b5 Mov
	func_581(var_362_string, var_478_float, var_479_int); // 0x2b6 NEW_2
	var_361_int = 1; // 0x2b8 MovI
	
Label_697:
	var_480_string = "attack_middle"; // 0x2b9 PushS
	var_481_int = var_480_string + var_359_int; // 0x2ba Add
	var_482_string = "_"; // 0x2bb PushS
	var_483_int = var_481_int + var_482_string; // 0x2bc Add
	var_362_string = var_483_int + var_361_int; // 0x2bd Add2
	var_484_string = "all"; // 0x2be PushS
	HasAnimation(var_360_bool, var_484_string, var_362_string); // 0x2bf Func
	var_485_bool = var_360_bool == 0; // 0x2c1 Not
	if(var_485_bool == 0) goto Label_708; // 0x2c2 JumpB
	goto Label_737; // 0x2c3 Jump
	
Label_737:
	var_486_bool = 0; // 0x2e1 PushB
	SetAttackState(var_486_bool); // 0x2e2 Func
	var_487_string = "all"; // 0x2e4 PushS
	var_488_string = "attack_end"; // 0x2e5 PushS
	var_489_int = var_488_string + var_359_int; // 0x2e6 Add
	PlayAnimation(var_487_string, var_489_int); // 0x2e7 Func
	var_490_bool = 0; // 0x2e9 PushV
	func_973(var_490_bool); // 0x2ea NEW_2
	if(var_490_bool == 0) goto Label_755; // 0x2ec JumpB
	var_491_bool = 0; var_492_float = 0; // 0x2ed PushV
	var_492_float = 0.75; // 0x2ee MovF
	func_757(var_491_bool, var_492_float); // 0x2ef NEW_2
	StopAsync(); // 0x2f1 Func
	
Label_755:
	var_353_bool = 1; // 0x2f3 MovB
	return 8; // 0x2f4 Return
	
Label_708:
	func_1725(); // 0x2c5 NEW_2
	var_500_string = "all"; // 0x2c7 PushS
	PlayAnimation(var_500_string, var_362_string); // 0x2c8 Func
	WaitForAnimEnd(); // 0x2ca Func
	func_959(var_362_string); // 0x2cd NEW_2
	var_501_bool = 0; var_502_object = Obj(); // 0x2cf PushV
	var_502_object = var_0_object; // 0x2d0 MovT
	func_1409(var_501_bool, var_502_object); // 0x2d1 NEW_2
	var_503_bool = var_501_bool == 0; // 0x2d3 Not
	if(var_503_bool == 0) goto Label_729; // 0x2d4 JumpB
	StopAsync(); // 0x2d5 Func
	var_353_bool = 0; // 0x2d7 MovB
	return 8; // 0x2d8 Return
	
Label_729:
	var_504_float = 0; var_505_int = 0; // 0x2d9 PushV
	var_504_float = var_354_float; // 0x2da Mov
	var_505_int = var_359_int; // 0x2db Mov
	func_581(var_362_string, var_504_float, var_505_int); // 0x2dc NEW_2
	var_506_int = 1; // 0x2de PushI
	var_361_int = var_361_int + var_506_int; // 0x2df Add2
	goto Label_697; // 0x2e0 Jump
}


func_1650(var_45_float, var_46_float, var_47_float, var_48_float)
{
	var_49_bool = var_46_float < var_47_float; // 0x673 LT
	if(var_49_bool == 0) goto Label_1655; // 0x674 JumpB
	var_45_float = var_47_float; // 0x675 Mov
	return 0; // 0x676 Return
	
Label_1655:
	var_50_bool = var_46_float > var_48_float; // 0x677 GT
	if(var_50_bool == 0) goto Label_1659; // 0x678 JumpB
	var_45_float = var_48_float; // 0x679 Mov
	return 0; // 0x67a Return
	
Label_1659:
	var_45_float = var_46_float; // 0x67b Mov
	return 0; // 0x67c Return
}


func_121(var_53_bool)
{
	var_53_bool = 1; // 0x79 MovB
	return 0; // 0x7a Return
}


func_123()
{
	StopAnimation(); // 0x7b Func
	StopGroup0(); // 0x7d Func
	return 0; // 0x7f Return
}


func_1661(var_16_bool, var_17_object, var_18_float)
{
	var_19_bool = var_17_object == 0; // 0x67e Not
	if(var_19_bool == 0) goto Label_1666; // 0x67f JumpB
	var_16_bool = 0; // 0x680 MovB
	return 0; // 0x681 Return
	
Label_1666:
	var_20_int = 0; // 0x682 PushI
	var_21_bool = var_18_float > var_20_int; // 0x683 GT
	if(var_21_bool == 0) goto Label_1673; // 0x684 JumpB
	var_22_int = 8; // 0x685 PushI
	SendWorldWndMessage(var_22_int); // 0x686 Func
	goto Label_1682; // 0x688 Jump
	
Label_1682:
	var_23_float = 0; // 0x692 PushV
	var_23_float = var_18_float; // 0x693 Mov
	func_1706(var_23_float); // 0x694 NEW_2
	var_27_bool = 0; var_28_object = Obj(); var_29_string = ""; var_30_float = 0; var_31_float = 0; var_32_float = 0; // 0x696 PushV
	var_28_object = var_17_object; // 0x697 Mov
	var_29_string = "reputation"; // 0x698 MovS
	var_30_float = var_18_float; // 0x699 Mov
	var_31_float = 0; // 0x69a MovI
	var_32_float = 1; // 0x69b MovI
	func_1273(var_27_bool, var_28_object, var_29_string, var_30_float, var_31_float, var_32_float); // 0x69c NEW_2
	var_16_bool = 1; // 0x69e MovB
	return 0; // 0x69f Return
	
Label_1673:
	var_51_int = 0; // 0x689 PushI
	var_52_bool = var_18_float < var_51_int; // 0x68a LT
	if(var_52_bool == 0) goto Label_1680; // 0x68b JumpB
	var_53_int = 9; // 0x68c PushI
	SendWorldWndMessage(var_53_int); // 0x68d Func
	goto Label_1682; // 0x68f Jump
	
Label_1680:
	var_16_bool = 0; // 0x690 MovB
	return 0; // 0x691 Return
}


func_128(var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x81 PushV
	var_13_object = var_11_object; // 0x82 Mov
	func_1256(var_12_bool, var_13_object); // 0x83 NEW_2
	if(var_12_bool == 0) goto Label_139; // 0x85 JumpB
	var_16_bool = 0; var_17_object = Obj(); var_18_float = 0; // 0x86 PushV
	var_17_object = var_11_object; // 0x87 Mov
	var_18_float = 0.0; // 0x88 MovF
	func_1661(var_16_bool, var_17_object, var_18_float); // 0x89 NEW_2
	
Label_139:
	func_1854(); // 0x8c NEW_2
	var_74_string = "b1q04_dead"; // 0x8e PushS
	var_75_int = 1; // 0x8f PushI
	SetVariable(var_74_string, var_75_int); // 0x90 Func
	var_76_object = Obj(); // 0x92 PushV
	var_76_object = var_11_object; // 0x93 Mov
	func_151(var_76_object); // 0x94 NEW_2
	return 0; // 0x96 Return
}


func_1409(var_22_bool, var_23_object)
{
	var_24_int = 0; var_25_int = 0; // 0x581 PushV
	var_26_bool = 0; var_27_object = Obj(); // 0x582 PushV
	var_27_object = var_23_object; // 0x583 Mov
	func_1373(var_26_bool, var_27_object); // 0x584 NEW_2
	var_43_bool = var_26_bool == 0; // 0x586 Not
	if(var_43_bool == 0) goto Label_1418; // 0x587 JumpB
	var_22_bool = 0; // 0x588 MovB
	return 2; // 0x589 Return
	
Label_1418:
	var_44_bool = 0; var_45_object = Obj(); var_46_string = ""; // 0x58a PushV
	var_45_object = var_23_object; // 0x58b Mov
	var_46_string = "noaccess"; // 0x58c MovS
	func_1261(var_44_bool, var_45_object, var_46_string); // 0x58d NEW_2
	var_53_bool = var_44_bool == 0; // 0x58f Not
	if(var_53_bool == 0) goto Label_1427; // 0x590 JumpB
	var_22_bool = 1; // 0x591 MovB
	return 2; // 0x592 Return
	
Label_1427:
	var_54_string = "noaccess"; // 0x593 PushS
	GetProperty(var_54_string, var_25_int); // 0x594 ObjFunc
	var_55_int = 0; // 0x596 PushI
	var_22_bool = var_25_int == var_55_int; // 0x597 Eq2
	return 2; // 0x598 Return
}


func_916(var_0_object, var_255_bool)
{
	var_256_bool = 0; var_257_bool = 0; // 0x394 PushV
	var_258_string = "IsAttacking"; // 0x395 PushS
	var_259_int = 1; // 0x396 PushI
	var_260_bool = IsFuncExist(var_0_object, var_258_string, var_259_int); // 0x397 FuncExist
	if(var_260_bool == 0) goto Label_925; // 0x398 JumpB
	IsAttacking(var_257_bool); // 0x399 TObjFunc
	var_255_bool = var_257_bool; // 0x39b Mov
	return 2; // 0x39c Return
	
Label_925:
	var_255_bool = 0; // 0x39d MovB
	return 2; // 0x39e Return
}


func_151(var_76_object)
{
	EventDisable(0); // 0x98 EventDisable
	var_77_object = Obj(); // 0x99 PushV
	var_77_object = var_76_object; // 0x9a Mov
	func_176(var_77_object); // 0x9b NEW_2
	var_157_int = 50; // 0x9d PushI
	var_158_int = 40; // 0x9e PushI
	SetRTEnvelope(var_157_int, var_158_int); // 0x9f Func
	EventEnable(0); // 0xa1 EventEnable
	
Label_162:
	Hold(); // 0xa2 Func
	goto Label_162; // 0xa4 Jump
}


func_1433(var_26_object)
{
	var_27_bool = 0; var_28_int = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_string = ""; var_34_bool = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = ""; // 0x599 PushV
	var_41_bool = var_26_object == 0; // 0x59a NullEq
	if(var_41_bool == 0) goto Label_1437; // 0x59b JumpB
	return 14; // 0x59c Return
	
Label_1437:
	IsDead(var_34_bool); // 0x59d Func
	var_42_bool = var_34_bool; // 0x59f Push
	if(var_42_bool == 0) goto Label_1442; // 0x5a0 JumpB
	return 14; // 0x5a1 Return
	
Label_1442:
	GetSecondaryAnimationType(var_35_int); // 0x5a2 Func
	var_43_int = 0; // 0x5a4 PushI
	var_44_bool = var_35_int < var_43_int; // 0x5a5 LT
	if(var_44_bool == 0) goto Label_1448; // 0x5a6 JumpB
	return 14; // 0x5a7 Return
	
Label_1448:
	GetPosition(var_36_cvector); // 0x5a8 ObjFunc
	GetPosition(var_37_cvector); // 0x5aa Func
	GetDirection(var_38_cvector); // 0x5ac Func
	var_39_cvector = var_37_cvector - var_36_cvector; // 0x5ae Sub2
	var_45_float = GetByIndex(var_39_cvector, 0); // 0x5af PushE
	var_46_float = GetByIndex(var_38_cvector, 0); // 0x5b0 PushE
	var_47_float = var_45_float * var_46_float; // 0x5b1 Mult
	var_48_float = GetByIndex(var_39_cvector, 2); // 0x5b2 PushE
	var_49_float = GetByIndex(var_38_cvector, 2); // 0x5b3 PushE
	var_50_float = var_48_float * var_49_float; // 0x5b4 Mult
	var_51_int = var_47_float + var_50_float; // 0x5b5 Add
	var_52_int = 0; // 0x5b6 PushI
	var_53_bool = var_51_int >= var_52_int; // 0x5b7 GE
	if(var_53_bool == 0) goto Label_1467; // 0x5b8 JumpB
	var_40_string = "fhit"; // 0x5b9 MovS
	goto Label_1468; // 0x5ba Jump
	
Label_1468:
	var_54_string = "hit_react"; // 0x5bc PushS
	var_55_string = "1"; // 0x5bd PushS
	var_56_int = var_40_string + var_55_string; // 0x5be Add
	var_57_string = "2"; // 0x5bf PushS
	var_58_int = var_40_string + var_57_string; // 0x5c0 Add
	var_59_int = -10; // 0x5c1 PushI
	FadeSecondaryAnimation(var_54_string, var_56_int, var_58_int, var_59_int); // 0x5c2 Func
	return 14; // 0x5c4 Return
	
Label_1467:
	var_40_string = "bhit"; // 0x5bb MovS
}


func_927(var_2_int, var_5_float)
{
	var_372_float = 0; var_373_int = 0; var_374_float = 0; var_375_int = 0; // 0x39f PushV
	var_376_bool = var_2_int == 0; // 0x3a0 Not
	if(var_376_bool == 0) goto Label_931; // 0x3a1 JumpB
	return 4; // 0x3a2 Return
	
Label_931:
	var_377_float = var_5_float; // 0x3a3 PushT
	if(var_377_float == 0) goto Label_939; // 0x3a4 JumpB
	var_378_int = -1; // 0x3a5 PushI
	var_5_float = var_5_float + var_378_int; // 0x3a6 Add2
	var_379_int = 0; // 0x3a7 PushI
	var_380_bool = var_5_float > var_379_int; // 0x3a8 GT
	if(var_380_bool == 0) goto Label_939; // 0x3a9 JumpB
	return 4; // 0x3aa Return
	
Label_939:
	rand(var_374_float); // 0x3ab Func
	var_381_float = 0; // 0x3ad PushV
	func_977(var_381_float); // 0x3ae NEW_2
	var_382_bool = var_374_float < var_381_float; // 0x3b0 LT
	if(var_382_bool == 0) goto Label_958; // 0x3b1 JumpB
	irand(var_375_int, var_374_float); // 0x3b2 Func
	var_383_int = 1; // 0x3b4 PushI
	var_375_int = var_375_int + var_383_int; // 0x3b5 Add2
	var_384_string = "attack"; // 0x3b6 PushS
	var_385_int = var_384_string + var_375_int; // 0x3b7 Add
	Speak(var_385_int); // 0x3b8 Func
	var_386_int = 0; // 0x3ba PushV
	func_975(var_386_int); // 0x3bb NEW_2
	var_5_float = var_386_int; // 0x3bc TMov
	
Label_958:
	return 4; // 0x3be Return
}


func_1696(var_460_float)
{
	var_461_object = Obj(); var_462_object = Obj(); // 0x6a0 PushV
	CreateFloatVector(var_462_object); // 0x6a1 Func
	add(var_460_float); // 0x6a3 ObjFunc
	var_463_int = 15; // 0x6a5 PushI
	SendWorldWndMessage(var_463_int, var_462_object); // 0x6a6 Func
	return 2; // 0x6a8 Return
}


func_1186(var_0_object, var_1_int, var_17_int)
{
	var_18_int = 0; // 0x4a3 PushI
	var_19_bool = var_17_int != var_18_int; // 0x4a4 Neq
	if(var_19_bool == 0) goto Label_1191; // 0x4a5 JumpB
	return 0; // 0x4a6 Return
	
Label_1191:
	var_20_bool = 0; var_21_object = Obj(); // 0x4a7 PushV
	var_21_object = var_1_int; // 0x4a8 MovT
	func_1224(var_20_bool, var_21_object); // 0x4a9 NEW_2
	var_56_bool = var_20_bool == 0; // 0x4ab Not
	if(var_56_bool == 0) goto Label_1198; // 0x4ac JumpB
	var_0_object = 1; // 0x4ad TMovB
	
Label_1198:
	var_57_int = 0; // 0x4ae PushI
	KillTimer(var_57_int); // 0x4af Func
	Stop(); // 0x4b1 Func
	return 0; // 0x4b3 Return
}


func_1706(var_23_float)
{
	var_24_object = Obj(); var_25_object = Obj(); // 0x6aa PushV
	CreateFloatVector(var_25_object); // 0x6ab Func
	add(var_23_float); // 0x6ad ObjFunc
	var_26_int = 16; // 0x6af PushI
	SendWorldWndMessage(var_26_int, var_25_object); // 0x6b0 Func
	return 2; // 0x6b2 Return
}


func_176(var_77_object)
{
	var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_string = ""; var_83_object = Obj(); var_84_bool = 0; var_85_bool = 0; var_86_float = 0; var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_string = ""; var_93_object = Obj(); var_94_bool = 0; var_95_bool = 0; var_96_float = 0; var_97_cvector = CVector(0,0,0); // 0xb0 PushV
	var_98_bool = var_77_object == 0; // 0xb1 NullEq
	if(var_98_bool == 0) goto Label_184; // 0xb2 JumpB
	var_99_string = ""; // 0xb3 PushV
	var_99_string = "fdie"; // 0xb4 MovS
	func_267(var_99_string); // 0xb5 NEW_2
	goto Label_266; // 0xb7 Jump
	
Label_266:
	return 20; // 0x10a Return
	
Label_184:
	GetPosition(var_88_cvector); // 0xb8 ObjFunc
	GetPosition(var_89_cvector); // 0xba Func
	GetDirection(var_90_cvector); // 0xbc Func
	var_91_cvector = var_89_cvector - var_88_cvector; // 0xbe Sub2
	var_131_float = GetByIndex(var_91_cvector, 0); // 0xbf PushE
	var_132_float = GetByIndex(var_90_cvector, 0); // 0xc0 PushE
	var_133_float = var_131_float * var_132_float; // 0xc1 Mult
	var_134_float = GetByIndex(var_91_cvector, 2); // 0xc2 PushE
	var_135_float = GetByIndex(var_90_cvector, 2); // 0xc3 PushE
	var_136_float = var_134_float * var_135_float; // 0xc4 Mult
	var_137_int = var_133_float + var_136_float; // 0xc5 Add
	var_138_int = 0; // 0xc6 PushI
	var_139_bool = var_137_int >= var_138_int; // 0xc7 GE
	if(var_139_bool == 0) goto Label_203; // 0xc8 JumpB
	var_92_string = "fdie"; // 0xc9 MovS
	goto Label_204; // 0xca Jump
	
Label_204:
	RemoveRTEnvelope(); // 0xcc Func
	SetDeathState(); // 0xce Func
	Stop(); // 0xd0 Func
	StopAsync(); // 0xd2 Func
	var_93_object = var_77_object; // 0xd4 Mov
	var_140_string = "GetScriptProperty"; // 0xd5 PushS
	var_141_int = 2; // 0xd6 PushI
	var_142_bool = IsFuncExist(var_77_object, var_140_string, var_141_int); // 0xd7 FuncExist
	if(var_142_bool == 0) goto Label_228; // 0xd8 JumpB
	var_143_string = "Owner"; // 0xd9 PushS
	HasScriptProperty(var_94_bool, var_143_string); // 0xda ObjFunc
	var_144_bool = var_94_bool; // 0xdc Push
	if(var_144_bool == 0) goto Label_228; // 0xdd JumpB
	var_145_string = "Owner"; // 0xde PushS
	GetScriptProperty(var_93_object, var_145_string); // 0xdf ObjFunc
	var_146_bool = var_93_object == 0; // 0xe1 NullEq
	if(var_146_bool == 0) goto Label_228; // 0xe2 JumpB
	var_93_object = var_77_object; // 0xe3 Mov
	
Label_228:
	var_147_string = "@GetEyesHeight"; // 0xe4 PushS
	var_148_int = 1; // 0xe5 PushI
	var_149_bool = IsFuncExist(var_93_object, var_147_string, var_148_int); // 0xe6 FuncExist
	if(var_149_bool == 0) goto Label_243; // 0xe7 JumpB
	GetEyesHeight(var_96_float); // 0xe8 ObjFunc
	var_97_cvector = CVector(0.0, 0.0, 0.0); // 0xea MovV
	var_150_float = GetByIndex(var_97_cvector, 1); // 0xeb PushE
	var_150_float = var_96_float; // 0xec Mov
	SetByIndex(var_97_cvector, 1) = var_150_float; // 0xed PopE
	var_151_string = "head"; // 0xee PushS
	LookAsync(var_77_object, var_151_string, var_97_cvector); // 0xef Func
	var_95_bool = 1; // 0xf1 MovB
	goto Label_244; // 0xf2 Jump
	
Label_244:
	var_152_string = ""; // 0xf4 PushV
	var_152_string = var_92_string; // 0xf5 Mov
	func_1586(var_152_string); // 0xf6 NEW_2
	var_153_string = "all"; // 0xf8 PushS
	PlayAnimation(var_153_string, var_92_string); // 0xf9 Func
	WaitForAnimEnd(); // 0xfb Func
	var_154_bool = var_95_bool; // 0xfd Push
	if(var_154_bool == 0) goto Label_260; // 0xfe JumpB
	StopAsync(); // 0xff Func
	var_155_string = "head"; // 0x101 PushS
	UnlookAsync(var_155_string); // 0x102 Func
	
Label_260:
	var_156_string = "all"; // 0x104 PushS
	LockAnimationEnd(var_156_string, var_92_string); // 0x105 Func
	RemoveEnvelope(); // 0x107 Func
	var_93_object = 0; // 0x109 SetNull
	
Label_243:
	var_95_bool = 0; // 0xf3 MovB
	
Label_203:
	var_92_string = "bdie"; // 0xcb MovS
}


func_1716(var_12_object)
{
	var_13_bool = 0; var_14_bool = 0; // 0x6b4 PushV
	IsPlayerActor(var_12_object, var_14_bool); // 0x6b5 Func
	var_15_bool = var_14_bool; // 0x6b7 Push
	if(var_15_bool == 0) goto Label_1724; // 0x6b8 JumpB
	var_16_string = "attack"; // 0x6b9 PushS
	PlayGlobalMusic(var_16_string); // 0x6ba Func
	
Label_1724:
	return 2; // 0x6bc Return
}


func_1208(var_0_object)
{
	var_0_object = 1; // 0x4b8 TMovB
	var_13_int = 0; // 0x4b9 PushI
	KillTimer(var_13_int); // 0x4ba Func
	Stop(); // 0x4bc Func
	return 0; // 0x4be Return
}


func_1725()
{
	var_365_object = Obj(); var_366_object = Obj(); // 0x6bd PushV
	GetScene(var_366_object); // 0x6be Func
	var_367_string = "battle"; // 0x6c0 PushS
	var_368_object = Obj(); // 0x6c1 PushV
	func_1627(var_368_object); // 0x6c2 NEW_2
	BroadcastMessage(var_367_string, var_368_object, var_366_object); // 0x6c4 Func
	return 2; // 0x6c6 Return
}


func_959(var_0_object)
{
	var_128_object = Obj(); // 0x3bf PushV
	var_128_object = var_0_object; // 0x3c0 MovT
	func_1716(var_128_object); // 0x3c1 NEW_2
	return 0; // 0x3c3 Return
}


func_964(var_465_int)
{
	var_465_int = 0; // 0x3c4 MovI
	return 0; // 0x3c5 Return
}


func_1477(var_13_object, var_14_int, var_15_float)
{
	var_16_cvector = CVector(0,0,0); var_17_object = Obj(); var_18_int = 0; var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_int = 0; var_23_int = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_object = Obj(); var_27_int = 0; var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_int = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0); // 0x5c5 PushV
	var_34_bool = 0; // 0x5c6 PushV
	var_34_bool = 0; // 0x5c7 MovB
	var_35_bool = 0; // 0x5c8 PushV
	var_35_bool = 0; // 0x5c9 MovB
	var_36_object = var_13_object; // 0x5ca Push
	if(var_36_object == 0) goto Label_1488; // 0x5cb JumpB
	var_37_int = 4; // 0x5cc PushI
	var_38_bool = var_14_int != var_37_int; // 0x5cd Neq
	if(var_38_bool == 0) goto Label_1488; // 0x5ce JumpB
	var_35_bool = 1; // 0x5cf MovB
	
Label_1488:
	if(var_35_bool == 0) goto Label_1493; // 0x5d0 JumpB
	var_39_int = 5; // 0x5d1 PushI
	var_40_bool = var_14_int != var_39_int; // 0x5d2 Neq
	if(var_40_bool == 0) goto Label_1493; // 0x5d3 JumpB
	var_34_bool = 1; // 0x5d4 MovB
	
Label_1493:
	if(var_34_bool == 0) goto Label_1540; // 0x5d5 JumpB
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); // 0x5d6 PushV
	var_43_cvector = CVector(0,0,0); var_44_object = Obj(); // 0x5d7 PushV
	var_44_object = var_13_object; // 0x5d8 Mov
	func_1249(var_44_object); // 0x5d9 NEW_2
	var_42_cvector = var_43_cvector; // 0x5da Mov
	func_1633(var_41_cvector, var_42_cvector); // 0x5dc NEW_2
	var_25_cvector = var_41_cvector; // 0x5dd Mov
	CreateVectorVector(var_26_object); // 0x5df Func
	var_27_int = 1; // 0x5e1 MovI
	
Label_1506:
	var_54_string = "hit"; // 0x5e2 PushS
	var_55_int = var_54_string + var_27_int; // 0x5e3 Add
	GetGeometryLocator(var_55_int, var_28_bool, var_29_cvector, var_30_cvector); // 0x5e4 Func
	var_56_bool = var_28_bool == 0; // 0x5e6 Not
	if(var_56_bool == 0) goto Label_1513; // 0x5e7 JumpB
	goto Label_1522; // 0x5e8 Jump
	
Label_1522:
	size(var_31_int); // 0x5f2 ObjFunc
	var_57_int = var_31_int; // 0x5f4 Push
	if(var_57_int == 0) goto Label_1539; // 0x5f5 JumpB
	irand(var_32_int, var_31_int); // 0x5f6 Func
	get(var_33_cvector, var_32_int); // 0x5f8 ObjFunc
	var_58_object = Obj(); var_59_int = 0; var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); // 0x5fa PushV
	var_58_object = var_13_object; // 0x5fb Mov
	var_59_int = var_14_int; // 0x5fc Mov
	var_60_float = var_15_float; // 0x5fd Mov
	var_61_cvector = var_33_cvector; // 0x5fe Mov
	var_62_cvector = -var_25_cvector; // 0x5ff Neg2
	func_1545(var_60_float, var_61_cvector, var_62_cvector); // 0x600 NEW_2
	return 18; // 0x602 Return
	
Label_1539:
	var_26_object = 0; // 0x603 SetNull
	
Label_1540:
	var_103_object = Obj(); // 0x604 PushV
	var_103_object = var_13_object; // 0x605 Mov
	func_1433(var_103_object); // 0x606 NEW_2
	return 18; // 0x608 Return
	
Label_1513:
	var_104_int = var_30_cvector | var_25_cvector; // 0x5e9 Or
	var_105_float = 0.70711; // 0x5ea PushF
	var_106_bool = var_104_int >= var_105_float; // 0x5eb GE
	if(var_106_bool == 0) goto Label_1519; // 0x5ec JumpB
	add(var_29_cvector); // 0x5ed ObjFunc
	
Label_1519:
	var_107_int = 1; // 0x5ef PushI
	var_27_int = var_27_int + var_107_int; // 0x5f0 Add2
	goto Label_1506; // 0x5f1 Jump
}


func_966()
{
	var_261_string = ""; // 0x3c6 PushV
	var_261_string = "attack_stay"; // 0x3c7 MovS
	func_1586(var_261_string); // 0x3c8 NEW_2
	return 0; // 0x3ca Return
}


func_1736(var_34_string, var_35_int)
{
	var_36_string = ""; var_37_string = ""; // 0x6c8 PushV
	var_37_string = "idle"; // 0x6c9 MovS
	var_38_int = var_35_int; // 0x6ca Push
	if(var_38_int == 0) goto Label_1741; // 0x6cb JumpB
	var_37_string = var_37_string + var_35_int; // 0x6cc Add2
	
Label_1741:
	var_34_string = var_37_string; // 0x6cd Mov
	return 2; // 0x6ce Return
}


func_1224(var_20_bool, var_21_object)
{
	var_22_bool = 0; var_23_object = Obj(); // 0x4c9 PushV
	var_23_object = var_21_object; // 0x4ca Mov
	func_1409(var_22_bool, var_23_object); // 0x4cb NEW_2
	var_20_bool = var_22_bool; // 0x4cc Mov
	return 0; // 0x4ce Return
}


func_971()
{
	return 0; // 0x3cc Return
}


func_973(var_490_bool)
{
	var_490_bool = 1; // 0x3cd MovB
	return 0; // 0x3ce Return
}


func_1743(var_28_int)
{
	var_29_int = 0; var_30_bool = 0; var_31_int = 0; var_32_bool = 0; // 0x6cf PushV
	var_31_int = 0; // 0x6d0 MovI
	
Label_1745:
	var_33_string = "all"; // 0x6d1 PushS
	var_34_string = ""; var_35_int = 0; // 0x6d2 PushV
	var_35_int = var_31_int; // 0x6d3 Mov
	func_1736(var_34_string, var_35_int); // 0x6d4 NEW_2
	HasAnimation(var_32_bool, var_33_string, var_34_string); // 0x6d6 Func
	var_39_bool = var_32_bool == 0; // 0x6d8 Not
	if(var_39_bool == 0) goto Label_1755; // 0x6d9 JumpB
	goto Label_1758; // 0x6da Jump
	
Label_1758:
	var_28_int = var_31_int; // 0x6de Mov
	return 4; // 0x6df Return
	
Label_1755:
	var_40_int = 1; // 0x6db PushI
	var_31_int = var_31_int + var_40_int; // 0x6dc Add2
	goto Label_1745; // 0x6dd Jump
}


func_975(var_386_int)
{
	var_386_int = 1; // 0x3cf MovI
	return 0; // 0x3d0 Return
}


func_977(var_381_float)
{
	var_381_float = 0.5; // 0x3d1 MovF
	return 0; // 0x3d2 Return
}


func_1231(var_204_string)
{
	var_204_string = "walk"; // 0x4cf MovS
	return 0; // 0x4d0 Return
}


func_979(var_2_int, var_135_bool, var_136_object, var_137_float, var_138_float, var_139_bool, var_140_bool)
{
	var_144_bool = 0; var_145_bool = 0; var_146_bool = 0; var_147_bool = 0; // 0x3d3 PushV
	var_148_object = Obj(); // 0x3d4 PushV
	var_148_object = var_136_object; // 0x3d5 Mov
	func_1716(var_148_object); // 0x3d6 NEW_2
	var_149_int = 1; // 0x3d8 PushI
	var_150_int = 5; // 0x3d9 PushI
	SetTimer(var_149_int, var_150_int); // 0x3da Func
	CanSee(var_146_bool, var_136_object); // 0x3dc Func
	var_151_bool = var_146_bool; // 0x3de Push
	if(var_151_bool == 0) goto Label_998; // 0x3df JumpB
	var_2_int = 1; // 0x3e0 TMovB
	var_152_object = Obj(); // 0x3e1 PushV
	var_152_object = var_136_object; // 0x3e2 Mov
	func_1575(var_152_object); // 0x3e3 NEW_2
	goto Label_999; // 0x3e5 Jump
	
Label_999:
	var_159_bool = 0; var_160_object = Obj(); // 0x3e7 PushV
	var_160_object = var_136_object; // 0x3e8 Mov
	func_1256(var_159_bool, var_160_object); // 0x3e9 NEW_2
	if(var_159_bool == 0) goto Label_1009; // 0x3eb JumpB
	var_163_object = Obj(); // 0x3ec PushV
	func_1627(var_163_object); // 0x3ed NEW_2
	SendPlayerEnemy(var_136_object, var_163_object); // 0x3ef Func
	
Label_1009:
	var_164_bool = 0; var_165_object = Obj(); var_166_float = 0; var_167_float = 0; var_168_bool = 0; var_169_bool = 0; // 0x3f1 PushV
	var_165_object = var_136_object; // 0x3f2 Mov
	var_166_float = var_137_float; // 0x3f3 Mov
	var_167_float = var_138_float; // 0x3f4 Mov
	var_168_bool = var_139_bool; // 0x3f5 Mov
	var_169_bool = var_140_bool; // 0x3f6 Mov
	func_1084(var_146_bool, var_147_bool, var_164_bool, var_165_object, var_166_float, var_167_float, var_168_bool, var_169_bool); // 0x3f7 NEW_2
	var_147_bool = var_164_bool; // 0x3f8 Mov
	var_215_int = var_2_int; // 0x3fa PushT
	if(var_215_int == 0) goto Label_1023; // 0x3fb JumpB
	var_216_string = "head"; // 0x3fc PushS
	UnlookAsync(var_216_string); // 0x3fd Func
	
Label_1023:
	var_217_int = 1; // 0x3ff PushI
	KillTimer(var_217_int); // 0x400 Func
	var_135_bool = var_147_bool; // 0x402 Mov
	return 4; // 0x403 Return
	
Label_998:
	var_2_int = 0; // 0x3e6 TMovB
}


func_1233(var_205_string)
{
	var_205_string = "run"; // 0x4d1 MovS
	return 0; // 0x4d2 Return
}


func_1235(var_432_string, var_433_int)
{
	var_434_int = 2; // 0x4d4 PushI
	var_435_bool = var_433_int == var_434_int; // 0x4d5 Eq
	if(var_435_bool == 0) goto Label_1242; // 0x4d6 JumpB
	var_432_string = "fire"; // 0x4d7 MovS
	return 0; // 0x4d8 Return
	
Label_1242:
	var_436_int = 1; // 0x4da PushI
	var_437_bool = var_433_int == var_436_int; // 0x4db Eq
	if(var_437_bool == 0) goto Label_1247; // 0x4dc JumpB
	var_432_string = "bullet"; // 0x4dd MovS
	return 0; // 0x4de Return
	
Label_1247:
	var_432_string = "phys"; // 0x4df MovS
	return 0; // 0x4e0 Return
}


func_1760(var_10_object)
{
	var_11_object = Obj(); // 0x6e1 PushV
	var_11_object = var_10_object; // 0x6e2 Mov
	TaskCall(1); // 0x6e3 TaskCall
	func_128(var_11_object); // 0x6e4 NEW_2
	TaskReturn(); // 0x6e5 TaskReturn
	return 0; // 0x6e7 Return
}


func_1249(var_43_cvector)
{
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0x4e1 PushV
	GetPosition(var_47_cvector); // 0x4e2 Func
	GetPosition(var_48_cvector); // 0x4e4 ObjFunc
	var_43_cvector = var_48_cvector - var_47_cvector; // 0x4e6 Sub2
	return 4; // 0x4e7 Return
}


func_1256(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_bool = 0; // 0x4e8 PushV
	IsPlayerActor(var_13_object, var_15_bool); // 0x4e9 Func
	var_12_bool = var_15_bool; // 0x4eb Mov
	return 2; // 0x4ec Return
}


func_1261(var_35_bool, var_36_object, var_37_string)
{
	var_38_bool = 0; var_39_bool = 0; // 0x4ed PushV
	var_40_string = "HasProperty"; // 0x4ee PushS
	var_41_int = 2; // 0x4ef PushI
	var_42_bool = IsFuncExist(var_36_object, var_40_string, var_41_int); // 0x4f0 FuncExist
	var_43_bool = var_42_bool == 0; // 0x4f1 Not
	if(var_43_bool == 0) goto Label_1269; // 0x4f2 JumpB
	var_35_bool = 0; // 0x4f3 MovB
	return 2; // 0x4f4 Return
	
Label_1269:
	HasProperty(var_37_string, var_39_bool); // 0x4f5 ObjFunc
	var_35_bool = var_39_bool; // 0x4f7 Mov
	return 2; // 0x4f8 Return
}


func_757(var_491_bool, var_492_float)
{
	var_493_float = 0; var_494_bool = 0; var_495_float = 0; var_496_bool = 0; // 0x2f5 PushV
	rand(var_495_float); // 0x2f6 Func
	var_497_bool = var_495_float < var_492_float; // 0x2f8 LT
	if(var_497_bool == 0) goto Label_777; // 0x2f9 JumpB
	
Label_762:
	IsAnimationPlaying(var_496_bool); // 0x2fa Func
	var_498_bool = var_496_bool == 0; // 0x2fc Not
	if(var_498_bool == 0) goto Label_767; // 0x2fd JumpB
	goto Label_776; // 0x2fe Jump
	
Label_776:
	goto Label_782; // 0x308 Jump
	
Label_782:
	var_491_bool = 0; // 0x30e MovB
	return 4; // 0x30f Return
	
Label_767:
	var_499_bool = 0; // 0x2ff PushV
	func_855(var_499_bool); // 0x300 NEW_2
	if(var_499_bool == 0) goto Label_773; // 0x302 JumpB
	var_491_bool = 1; // 0x303 MovB
	return 4; // 0x304 Return
	
Label_773:
	sync(); // 0x305 Func
	goto Label_762; // 0x307 Jump
	
Label_777:
	WaitForAnimEnd(); // 0x309 Func
	func_959(var_496_bool); // 0x30c NEW_2
}


func_1273(var_27_bool, var_28_object, var_29_string, var_30_float, var_31_float, var_32_float)
{
	var_33_float = 0; var_34_float = 0; // 0x4f9 PushV
	var_35_bool = 0; var_36_object = Obj(); var_37_string = ""; // 0x4fa PushV
	var_36_object = var_28_object; // 0x4fb Mov
	var_37_string = var_29_string; // 0x4fc Mov
	func_1261(var_35_bool, var_36_object, var_37_string); // 0x4fd NEW_2
	var_44_bool = var_35_bool == 0; // 0x4ff Not
	if(var_44_bool == 0) goto Label_1283; // 0x500 JumpB
	var_27_bool = 0; // 0x501 MovB
	return 2; // 0x502 Return
	
Label_1283:
	GetProperty(var_29_string, var_34_float); // 0x503 ObjFunc
	var_45_float = 0; var_46_float = 0; var_47_float = 0; var_48_float = 0; // 0x505 PushV
	var_46_float = var_34_float + var_30_float; // 0x506 Add2
	var_47_float = var_31_float; // 0x507 Mov
	var_48_float = var_32_float; // 0x508 Mov
	func_1650(var_45_float, var_46_float, var_47_float, var_48_float); // 0x509 NEW_2
	SetProperty(var_29_string, var_45_float); // 0x50b ObjFunc
	var_27_bool = 1; // 0x50d MovB
	return 2; // 0x50e Return
}


