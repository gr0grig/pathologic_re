task_0_event_1(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	var_10_bool = 0; // 0xf PushV
	var_10_bool = 0; // 0x10 MovB
	var_11_bool = 0; var_12_object = Obj(); // 0x11 PushV
	var_12_object = var_9_bool; // 0x12 Mov
	func_1266(var_11_bool, var_12_object); // 0x13 NEW_2
	if(var_11_bool == 0) goto Label_28; // 0x15 JumpB
	var_15_bool = 0; var_16_object = Obj(); // 0x16 PushV
	var_16_object = var_9_bool; // 0x17 Mov
	func_1397(var_15_bool, var_16_object); // 0x18 NEW_2
	if(var_15_bool == 0) goto Label_28; // 0x1a JumpB
	var_10_bool = 1; // 0x1b MovB
	
Label_28:
	if(var_10_bool == 0) goto Label_38; // 0x1c JumpB
	func_156(); // 0x1e NEW_2
	var_49_object = Obj(); // 0x20 PushV
	var_49_object = var_9_bool; // 0x21 Mov
	TaskCall(1); // 0x22 TaskCall
	func_161(var_49_object); // 0x23 NEW_2
	TaskReturn(); // 0x24 TaskReturn
	
Label_38:
	return 0; // 0x26 Return
}


task_0_event_3(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	var_10_bool = 0; // 0x28 PushV
	var_10_bool = 0; // 0x29 MovB
	var_11_bool = 0; var_12_object = Obj(); // 0x2a PushV
	var_12_object = var_9_bool; // 0x2b Mov
	func_1266(var_11_bool, var_12_object); // 0x2c NEW_2
	if(var_11_bool == 0) goto Label_53; // 0x2e JumpB
	var_15_bool = 0; var_16_object = Obj(); // 0x2f PushV
	var_16_object = var_9_bool; // 0x30 Mov
	func_1397(var_15_bool, var_16_object); // 0x31 NEW_2
	if(var_15_bool == 0) goto Label_53; // 0x33 JumpB
	var_10_bool = 1; // 0x34 MovB
	
Label_53:
	if(var_10_bool == 0) goto Label_63; // 0x35 JumpB
	func_156(); // 0x37 NEW_2
	var_49_object = Obj(); // 0x39 PushV
	var_49_object = var_9_bool; // 0x3a Mov
	TaskCall(1); // 0x3b TaskCall
	func_161(var_49_object); // 0x3c NEW_2
	TaskReturn(); // 0x3d TaskReturn
	
Label_63:
	return 0; // 0x3f Return
}


task_0_event_17(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	func_156(); // 0x42 NEW_2
	var_10_object = Obj(); // 0x44 PushV
	var_10_object = var_9_bool; // 0x45 Mov
	TaskCall(1); // 0x46 TaskCall
	func_161(var_10_object); // 0x47 NEW_2
	TaskReturn(); // 0x48 TaskReturn
	return 0; // 0x4a Return
}


task_2_event_7(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_int)
{
	var_10_int = 1; // 0x37b PushI
	var_11_bool = var_9_int == var_10_int; // 0x37c Eq
	if(var_11_bool == 0) goto Label_899; // 0x37d JumpB
	var_12_object = Obj(); // 0x37e PushV
	var_12_object = var_1_int; // 0x37f MovT
	func_1659(var_12_object); // 0x380 NEW_2
	goto Label_903; // 0x382 Jump
	
Label_903:
	return 0; // 0x387 Return
	
Label_899:
	var_17_int = 0; // 0x383 PushV
	var_17_int = var_9_int; // 0x384 Mov
	func_1048(var_8_bool, var_9_int, var_17_int); // 0x385 NEW_2
}


task_2_event_1(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_bool = 0; // 0x396 PushV
	var_10_bool = 0; // 0x397 MovB
	var_11_bool = var_1_int == var_9_object; // 0x398 Eq
	if(var_11_bool == 0) goto Label_925; // 0x399 JumpB
	var_12_bool = var_2_int == 0; // 0x39a Not
	if(var_12_bool == 0) goto Label_925; // 0x39b JumpB
	var_10_bool = 1; // 0x39c MovB
	
Label_925:
	if(var_10_bool == 0) goto Label_931; // 0x39d JumpB
	var_2_int = 1; // 0x39e TMovB
	var_13_object = Obj(); // 0x39f PushV
	var_13_object = var_9_object; // 0x3a0 Mov
	func_1563(var_13_object); // 0x3a1 NEW_2
	
Label_931:
	return 0; // 0x3a3 Return
}


task_2_event_2(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_bool = 0; // 0x3a5 PushV
	var_10_bool = 0; // 0x3a6 MovB
	var_11_bool = var_1_int == var_9_object; // 0x3a7 Eq
	if(var_11_bool == 0) goto Label_940; // 0x3a8 JumpB
	var_12_int = var_2_int; // 0x3a9 PushT
	if(var_12_int == 0) goto Label_940; // 0x3aa JumpB
	var_10_bool = 1; // 0x3ab MovB
	
Label_940:
	if(var_10_bool == 0) goto Label_945; // 0x3ac JumpB
	var_2_int = 0; // 0x3ad TMovB
	var_13_string = "head"; // 0x3ae PushS
	UnlookAsync(var_13_string); // 0x3af Func
	
Label_945:
	return 0; // 0x3b1 Return
}


task_2_event_10(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	RequestClearPath(var_9_object); // 0x42b Func
	return 0; // 0x42d Return
}


task_2_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	func_904(var_9_object); // 0x437 NEW_2
	var_14_object = Obj(); // 0x439 PushV
	var_14_object = var_9_object; // 0x43a Mov
	func_1820(); // 0x43b NEW_2
	return 0; // 0x43d Return
}


task_3_event_0(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_bool = 0; var_11_bool = 0; // 0x458 PushV
	IsOverrideActive(var_11_bool); // 0x459 Func
	var_12_bool = var_11_bool == 0; // 0x45b Not
	if(var_12_bool == 0) goto Label_1121; // 0x45c JumpB
	var_13_object = Obj(); // 0x45d PushV
	var_13_object = var_9_object; // 0x45e Mov
	func_1709(var_13_object); // 0x45f NEW_2
	
Label_1121:
	return 2; // 0x461 Return
}


task_3_event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float)
{
	return 0; // 0x4d8 Return
}


task_3_event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_string)
{
	return 0; // 0x4da Return
}


task_3_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	return 0; // 0x4dc Return
}


event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	var_9_object = Obj(); // 0x6e3 PushV
	func_1615(var_9_object); // 0x6e4 NEW_2
	RemoveActor(var_9_object); // 0x6e6 Func
	Hold(); // 0x6e8 Func
	return 0; // 0x6ea Return
}


event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float)
{
	var_13_object = Obj(); var_14_int = 0; var_15_float = 0; // 0x6fe PushV
	var_13_object = var_9_object; // 0x6ff Mov
	var_14_int = var_10_int; // 0x700 Mov
	var_15_float = var_11_float; // 0x701 Mov
	func_1465(var_13_object, var_14_int, var_15_float); // 0x702 NEW_2
	return 0; // 0x704 Return
}


event_43(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float, var_13_cvector, var_14_cvector)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); // 0x706 PushV
	var_15_object = var_9_object; // 0x707 Mov
	var_16_int = var_10_int; // 0x708 Mov
	var_17_float = var_11_float; // 0x709 Mov
	var_18_cvector = var_13_cvector; // 0x70a Mov
	var_19_cvector = var_14_cvector; // 0x70b Mov
	func_1533(var_17_float, var_18_cvector, var_19_cvector); // 0x70c NEW_2
	return 0; // 0x70e Return
}


event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_string)
{
	var_11_float = 0; var_12_float = 0; // 0x70f PushV
	var_13_string = "health"; // 0x710 PushS
	var_14_bool = var_10_string == var_13_string; // 0x711 Eq
	if(var_14_bool == 0) goto Label_1819; // 0x712 JumpB
	var_15_string = "health"; // 0x713 PushS
	GetProperty(var_15_string, var_12_float); // 0x714 Func
	var_16_int = 0; // 0x716 PushI
	var_17_bool = var_12_float <= var_16_int; // 0x717 LE
	if(var_17_bool == 0) goto Label_1819; // 0x718 JumpB
	SignalDeath(var_9_object); // 0x719 Func
	
Label_1819:
	return 2; // 0x71b Return
}


event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_object = Obj(); // 0x71d PushV
	var_10_object = var_9_object; // 0x71e Mov
	func_1771(var_10_object); // 0x71f NEW_2
	return 0; // 0x721 Return
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	EventDisable(1); // 0x0 EventDisable
	EventDisable(3); // 0x1 EventDisable
	var_9_int = 3; // 0x2 PushI
	Sleep(var_9_int); // 0x3 Func
	EventEnable(1); // 0x5 EventEnable
	EventEnable(3); // 0x6 EventEnable
	
Label_7:
	var_10_bool = 1; // 0x7 PushB
	if(var_10_bool == 0) goto Label_13; // 0x8 JumpB
	func_75(); // 0xa NEW_2
	goto Label_7; // 0xc Jump
	
Label_13:
	return 0; // 0xd Return
}


func_1283(var_389_float, var_390_object, var_391_float, var_392_int)
{
	var_396_int = 0; var_397_string = ""; var_398_int = 0; var_399_float = 0; var_400_float = 0; var_401_float = 0; var_402_int = 0; var_403_string = ""; var_404_int = 0; var_405_float = 0; var_406_float = 0; var_407_float = 0; // 0x503 PushV
	var_408_bool = 0; var_409_object = Obj(); var_410_string = ""; // 0x504 PushV
	var_409_object = var_390_object; // 0x505 Mov
	var_410_string = "health"; // 0x506 MovS
	func_1271(var_408_bool, var_409_object, var_410_string); // 0x507 NEW_2
	var_411_bool = var_408_bool == 0; // 0x509 Not
	if(var_411_bool == 0) goto Label_1293; // 0x50a JumpB
	var_389_float = 0.0; // 0x50b MovF
	return 12; // 0x50c Return
	
Label_1293:
	var_412_bool = 0; var_413_object = Obj(); var_414_string = ""; // 0x50d PushV
	var_413_object = var_390_object; // 0x50e Mov
	var_414_string = "armor"; // 0x50f MovS
	func_1271(var_412_bool, var_413_object, var_414_string); // 0x510 NEW_2
	var_415_bool = var_412_bool == 0; // 0x512 Not
	if(var_415_bool == 0) goto Label_1302; // 0x513 JumpB
	var_402_int = 0; // 0x514 MovI
	goto Label_1305; // 0x515 Jump
	
Label_1305:
	var_416_string = "armor_"; // 0x519 PushS
	var_417_string = ""; var_418_int = 0; // 0x51a PushV
	var_418_int = var_392_int; // 0x51b Mov
	func_1245(var_417_string, var_418_int); // 0x51c NEW_2
	var_403_string = var_416_string + var_417_string; // 0x51e Add2
	var_423_bool = 0; var_424_object = Obj(); var_425_string = ""; // 0x51f PushV
	var_424_object = var_390_object; // 0x520 Mov
	var_425_string = var_403_string; // 0x521 Mov
	func_1271(var_423_bool, var_424_object, var_425_string); // 0x522 NEW_2
	var_426_bool = var_423_bool == 0; // 0x524 Not
	if(var_426_bool == 0) goto Label_1320; // 0x525 JumpB
	var_404_int = 0; // 0x526 MovI
	goto Label_1322; // 0x527 Jump
	
Label_1322:
	var_427_float = 0; var_428_float = 0; var_429_float = 0; // 0x52a PushV
	var_430_int = var_402_int + var_404_int; // 0x52b Add
	var_431_float = 100.0; // 0x52c PushF
	var_428_float = var_430_int / var_430_int; // 0x52d Div2
	var_429_float = 1; // 0x52e MovI
	func_1631(var_427_float, var_428_float, var_429_float); // 0x52f NEW_2
	var_405_float = var_427_float; // 0x530 Mov
	var_433_string = "health"; // 0x532 PushS
	GetProperty(var_433_string, var_406_float); // 0x533 ObjFunc
	var_434_int = 1; // 0x535 PushI
	var_435_int = var_434_int - var_405_float; // 0x536 Sub
	var_407_float = var_391_float * var_435_int; // 0x537 Mult2
	var_436_string = "health"; // 0x538 PushS
	var_437_float = 0; var_438_float = 0; var_439_float = 0; var_440_float = 0; // 0x539 PushV
	var_438_float = var_406_float - var_407_float; // 0x53a Sub2
	var_439_float = 0; // 0x53b MovI
	var_440_float = 1; // 0x53c MovI
	func_1638(var_437_float, var_438_float, var_439_float, var_440_float); // 0x53d NEW_2
	SetProperty(var_436_string, var_437_float); // 0x53f ObjFunc
	var_443_bool = 0; var_444_object = Obj(); // 0x541 PushV
	var_444_object = var_390_object; // 0x542 Mov
	func_1266(var_443_bool, var_444_object); // 0x543 NEW_2
	if(var_443_bool == 0) goto Label_1354; // 0x545 JumpB
	var_445_float = 0; // 0x546 PushV
	var_445_float = -var_407_float; // 0x547 Neg2
	func_1649(var_445_float); // 0x548 NEW_2
	
Label_1354:
	var_389_float = var_407_float; // 0x54a Mov
	return 12; // 0x54b Return
	
Label_1320:
	GetProperty(var_403_string, var_404_int); // 0x528 ObjFunc
	
Label_1302:
	var_449_string = "armor"; // 0x516 PushS
	GetProperty(var_449_string, var_402_int); // 0x517 ObjFunc
}


func_1668()
{
	var_350_object = Obj(); var_351_object = Obj(); // 0x684 PushV
	GetScene(var_351_object); // 0x685 Func
	var_352_string = "battle"; // 0x687 PushS
	var_353_object = Obj(); // 0x688 PushV
	func_1615(var_353_object); // 0x689 NEW_2
	BroadcastMessage(var_352_string, var_353_object, var_351_object); // 0x68b Func
	return 2; // 0x68d Return
}


func_646(var_0_object, var_277_bool, var_278_float)
{
	var_279_bool = 0; var_280_cvector = CVector(0,0,0); var_281_cvector = CVector(0,0,0); var_282_cvector = CVector(0,0,0); var_283_float = 0; var_284_bool = 0; var_285_cvector = CVector(0,0,0); var_286_cvector = CVector(0,0,0); var_287_cvector = CVector(0,0,0); var_288_float = 0; // 0x286 PushV
	
Label_647:
	IsAnimationPlaying(var_284_bool); // 0x287 Func
	var_289_bool = var_284_bool == 0; // 0x289 Not
	if(var_289_bool == 0) goto Label_652; // 0x28a JumpB
	goto Label_684; // 0x28b Jump
	
Label_684:
	func_821(var_288_float); // 0x2ad NEW_2
	var_277_bool = 0; // 0x2af MovB
	return 10; // 0x2b0 Return
	
Label_652:
	var_290_bool = 0; // 0x28c PushV
	func_717(var_290_bool); // 0x28d NEW_2
	if(var_290_bool == 0) goto Label_658; // 0x28f JumpB
	var_277_bool = 1; // 0x290 MovB
	return 10; // 0x291 Return
	
Label_658:
	var_333_bool = 0; var_334_object = Obj(); // 0x292 PushV
	var_334_object = var_0_object; // 0x293 MovT
	func_1397(var_333_bool, var_334_object); // 0x294 NEW_2
	var_335_bool = var_333_bool == 0; // 0x296 Not
	if(var_335_bool == 0) goto Label_666; // 0x297 JumpB
	var_277_bool = 0; // 0x298 MovB
	return 10; // 0x299 Return
	
Label_666:
	GetPFPosition(var_285_cvector); // 0x29a TObjFunc
	GetPFPosition(var_286_cvector); // 0x29c Func
	var_287_cvector = var_285_cvector - var_286_cvector; // 0x29e Sub2
	var_288_float = var_287_cvector | var_287_cvector; // 0x29f Or2
	var_336_float = var_278_float * var_278_float; // 0x2a0 Mult
	var_337_bool = var_288_float < var_336_float; // 0x2a1 LT
	if(var_337_bool == 0) goto Label_681; // 0x2a2 JumpB
	var_338_bool = 0; var_339_float = 0; // 0x2a3 PushV
	var_339_float = var_278_float; // 0x2a4 Mov
	func_482(var_288_float, var_338_bool, var_339_float); // 0x2a5 NEW_2
	var_277_bool = 1; // 0x2a7 MovB
	return 10; // 0x2a8 Return
	
Label_681:
	sync(); // 0x2a9 Func
	goto Label_647; // 0x2ab Jump
}


func_904(var_2_int)
{
	var_10_int = 1; // 0x388 PushI
	KillTimer(var_10_int); // 0x389 Func
	var_11_int = var_2_int; // 0x38b PushT
	if(var_11_int == 0) goto Label_913; // 0x38c JumpB
	var_2_int = 0; // 0x38d TMovB
	var_12_string = "head"; // 0x38e PushS
	UnlookAsync(var_12_string); // 0x38f Func
	
Label_913:
	func_1070(var_9_object); // 0x392 NEW_2
	return 0; // 0x394 Return
}


func_778(var_0_object, var_240_bool)
{
	var_241_bool = 0; var_242_bool = 0; // 0x30a PushV
	var_243_string = "IsAttacking"; // 0x30b PushS
	var_244_int = 1; // 0x30c PushI
	var_245_bool = IsFuncExist(var_0_object, var_243_string, var_244_int); // 0x30d FuncExist
	if(var_245_bool == 0) goto Label_787; // 0x30e JumpB
	IsAttacking(var_242_bool); // 0x30f TObjFunc
	var_240_bool = var_242_bool; // 0x311 Mov
	return 2; // 0x312 Return
	
Label_787:
	var_240_bool = 0; // 0x313 MovB
	return 2; // 0x314 Return
}


func_1547()
{
	var_224_cvector = CVector(0,0,0); var_225_cvector = CVector(0,0,0); var_226_cvector = CVector(0,0,0); var_227_cvector = CVector(0,0,0); var_228_cvector = CVector(0,0,0); var_229_cvector = CVector(0,0,0); // 0x60b PushV
	GetPosition(var_227_cvector); // 0x60c ObjFunc
	GetPosition(var_228_cvector); // 0x60e Func
	var_229_cvector = var_227_cvector - var_228_cvector; // 0x610 Sub2
	var_230_float = GetByIndex(var_229_cvector, 0); // 0x611 PushE
	var_231_float = GetByIndex(var_229_cvector, 2); // 0x612 PushE
	RotateAsync(var_230_float, var_231_float); // 0x613 Func
	return 6; // 0x615 Return
}


func_1421(var_26_object)
{
	var_27_bool = 0; var_28_int = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_string = ""; var_34_bool = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = ""; // 0x58d PushV
	var_41_bool = var_26_object == 0; // 0x58e NullEq
	if(var_41_bool == 0) goto Label_1425; // 0x58f JumpB
	return 14; // 0x590 Return
	
Label_1425:
	IsDead(var_34_bool); // 0x591 Func
	var_42_bool = var_34_bool; // 0x593 Push
	if(var_42_bool == 0) goto Label_1430; // 0x594 JumpB
	return 14; // 0x595 Return
	
Label_1430:
	GetSecondaryAnimationType(var_35_int); // 0x596 Func
	var_43_int = 0; // 0x598 PushI
	var_44_bool = var_35_int < var_43_int; // 0x599 LT
	if(var_44_bool == 0) goto Label_1436; // 0x59a JumpB
	return 14; // 0x59b Return
	
Label_1436:
	GetPosition(var_36_cvector); // 0x59c ObjFunc
	GetPosition(var_37_cvector); // 0x59e Func
	GetDirection(var_38_cvector); // 0x5a0 Func
	var_39_cvector = var_37_cvector - var_36_cvector; // 0x5a2 Sub2
	var_45_float = GetByIndex(var_39_cvector, 0); // 0x5a3 PushE
	var_46_float = GetByIndex(var_38_cvector, 0); // 0x5a4 PushE
	var_47_float = var_45_float * var_46_float; // 0x5a5 Mult
	var_48_float = GetByIndex(var_39_cvector, 2); // 0x5a6 PushE
	var_49_float = GetByIndex(var_38_cvector, 2); // 0x5a7 PushE
	var_50_float = var_48_float * var_49_float; // 0x5a8 Mult
	var_51_int = var_47_float + var_50_float; // 0x5a9 Add
	var_52_int = 0; // 0x5aa PushI
	var_53_bool = var_51_int >= var_52_int; // 0x5ab GE
	if(var_53_bool == 0) goto Label_1455; // 0x5ac JumpB
	var_40_string = "fhit"; // 0x5ad MovS
	goto Label_1456; // 0x5ae Jump
	
Label_1456:
	var_54_string = "hit_react"; // 0x5b0 PushS
	var_55_string = "1"; // 0x5b1 PushS
	var_56_int = var_40_string + var_55_string; // 0x5b2 Add
	var_57_string = "2"; // 0x5b3 PushS
	var_58_int = var_40_string + var_57_string; // 0x5b4 Add
	var_59_int = -10; // 0x5b5 PushI
	FadeSecondaryAnimation(var_54_string, var_56_int, var_58_int, var_59_int); // 0x5b6 Func
	return 14; // 0x5b8 Return
	
Label_1455:
	var_40_string = "bhit"; // 0x5af MovS
}


func_1679(var_35_string, var_36_int)
{
	var_37_string = ""; var_38_string = ""; // 0x68f PushV
	var_38_string = "idle"; // 0x690 MovS
	var_39_int = var_36_int; // 0x691 Push
	if(var_39_int == 0) goto Label_1684; // 0x692 JumpB
	var_38_string = var_38_string + var_36_int; // 0x693 Add2
	
Label_1684:
	var_35_string = var_38_string; // 0x694 Mov
	return 2; // 0x695 Return
}


func_789(var_2_int, var_5_float)
{
	var_357_float = 0; var_358_int = 0; var_359_float = 0; var_360_int = 0; // 0x315 PushV
	var_361_bool = var_2_int == 0; // 0x316 Not
	if(var_361_bool == 0) goto Label_793; // 0x317 JumpB
	return 4; // 0x318 Return
	
Label_793:
	var_362_float = var_5_float; // 0x319 PushT
	if(var_362_float == 0) goto Label_801; // 0x31a JumpB
	var_363_int = -1; // 0x31b PushI
	var_5_float = var_5_float + var_363_int; // 0x31c Add2
	var_364_int = 0; // 0x31d PushI
	var_365_bool = var_5_float > var_364_int; // 0x31e GT
	if(var_365_bool == 0) goto Label_801; // 0x31f JumpB
	return 4; // 0x320 Return
	
Label_801:
	rand(var_359_float); // 0x321 Func
	var_366_float = 0; // 0x323 PushV
	func_839(var_366_float); // 0x324 NEW_2
	var_367_bool = var_359_float < var_366_float; // 0x326 LT
	if(var_367_bool == 0) goto Label_820; // 0x327 JumpB
	irand(var_360_int, var_359_float); // 0x328 Func
	var_368_int = 1; // 0x32a PushI
	var_360_int = var_360_int + var_368_int; // 0x32b Add2
	var_369_string = "attack"; // 0x32c PushS
	var_370_int = var_369_string + var_360_int; // 0x32d Add
	Speak(var_370_int); // 0x32e Func
	var_371_int = 0; // 0x330 PushV
	func_837(var_371_int); // 0x331 NEW_2
	var_5_float = var_371_int; // 0x332 TMov
	
Label_820:
	return 4; // 0x334 Return
}


func_1558(var_25_bool)
{
	var_26_bool = 0; var_27_bool = 0; // 0x616 PushV
	IsLoaded(var_27_bool); // 0x617 Func
	var_25_bool = var_27_bool; // 0x619 Mov
	return 2; // 0x61a Return
}


func_1686(var_29_int)
{
	var_30_int = 0; var_31_bool = 0; var_32_int = 0; var_33_bool = 0; // 0x696 PushV
	var_32_int = 0; // 0x697 MovI
	
Label_1688:
	var_34_string = "all"; // 0x698 PushS
	var_35_string = ""; var_36_int = 0; // 0x699 PushV
	var_36_int = var_32_int; // 0x69a Mov
	func_1679(var_35_string, var_36_int); // 0x69b NEW_2
	HasAnimation(var_33_bool, var_34_string, var_35_string); // 0x69d Func
	var_40_bool = var_33_bool == 0; // 0x69f Not
	if(var_40_bool == 0) goto Label_1698; // 0x6a0 JumpB
	goto Label_1701; // 0x6a1 Jump
	
Label_1701:
	var_29_int = var_32_int; // 0x6a5 Mov
	return 4; // 0x6a6 Return
	
Label_1698:
	var_41_int = 1; // 0x6a2 PushI
	var_32_int = var_32_int + var_41_int; // 0x6a3 Add2
	goto Label_1688; // 0x6a4 Jump
}


func_408(var_1_object, var_2_int, var_4_bool)
{
	var_42_bool = 0; var_43_bool = 0; var_44_cvector = CVector(0,0,0); var_45_bool = 0; var_46_bool = 0; var_47_cvector = CVector(0,0,0); // 0x198 PushV
	var_1_object = 0; // 0x199 TMovI
	
Label_410:
	var_48_string = "all"; // 0x19a PushS
	var_49_string = "attack_begin"; // 0x19b PushS
	var_50_int = 1; // 0x19c PushI
	var_51_int = var_1_object + var_50_int; // 0x19d Add
	var_52_int = var_49_string + var_51_int; // 0x19e Add
	HasAnimation(var_45_bool, var_48_string, var_52_int); // 0x19f Func
	var_53_bool = var_45_bool == 0; // 0x1a1 Not
	if(var_53_bool == 0) goto Label_420; // 0x1a2 JumpB
	goto Label_423; // 0x1a3 Jump
	
Label_423:
	var_2_int = 0; // 0x1a7 TMovI
	
Label_424:
	var_54_string = "attack"; // 0x1a8 PushS
	var_55_int = 1; // 0x1a9 PushI
	var_56_int = var_2_int + var_55_int; // 0x1aa Add
	var_57_int = var_54_string + var_56_int; // 0x1ab Add
	IsExisting3DSound(var_46_bool, var_57_int); // 0x1ac Func
	var_58_bool = var_46_bool == 0; // 0x1ae Not
	if(var_58_bool == 0) goto Label_433; // 0x1af JumpB
	goto Label_436; // 0x1b0 Jump
	
Label_436:
	var_59_string = "all"; // 0x1b4 PushS
	var_60_string = "bjump"; // 0x1b5 PushS
	GetAnimationOffset(var_47_cvector, var_59_string, var_60_string); // 0x1b6 Func
	var_61_float = GetByIndex(var_47_cvector, 2); // 0x1b8 PushE
	var_4_bool = -var_61_float; // 0x1b9 Neg2
	return 6; // 0x1ba Return
	
Label_433:
	var_62_int = 1; // 0x1b1 PushI
	var_2_int = var_2_int + var_62_int; // 0x1b2 Add2
	goto Label_424; // 0x1b3 Jump
	
Label_420:
	var_63_int = 1; // 0x1a4 PushI
	var_1_object = var_1_object + var_63_int; // 0x1a5 Add2
	goto Label_410; // 0x1a6 Jump
}


func_1048(var_0_object, var_1_int, var_17_int)
{
	var_18_int = 0; // 0x419 PushI
	var_19_bool = var_17_int != var_18_int; // 0x41a Neq
	if(var_19_bool == 0) goto Label_1053; // 0x41b JumpB
	return 0; // 0x41c Return
	
Label_1053:
	var_20_bool = 0; var_21_object = Obj(); // 0x41d PushV
	var_21_object = var_1_int; // 0x41e MovT
	func_1086(var_20_bool, var_21_object); // 0x41f NEW_2
	var_56_bool = var_20_bool == 0; // 0x421 Not
	if(var_56_bool == 0) goto Label_1060; // 0x422 JumpB
	var_0_object = 1; // 0x423 TMovB
	
Label_1060:
	var_57_int = 0; // 0x424 PushI
	KillTimer(var_57_int); // 0x425 Func
	Stop(); // 0x427 Func
	return 0; // 0x429 Return
}


func_154(var_54_bool)
{
	var_54_bool = 1; // 0x9a MovB
	return 0; // 0x9b Return
}


func_1563(var_13_object)
{
	var_14_float = 0; var_15_cvector = CVector(0,0,0); var_16_float = 0; var_17_cvector = CVector(0,0,0); // 0x61b PushV
	GetEyesHeight(var_16_float); // 0x61c ObjFunc
	var_17_cvector = CVector(0.0, 0.0, 0.0); // 0x61e MovV
	var_18_float = GetByIndex(var_17_cvector, 1); // 0x61f PushE
	var_18_float = var_16_float; // 0x620 Mov
	SetByIndex(var_17_cvector, 1) = var_18_float; // 0x621 PopE
	var_19_string = "head"; // 0x622 PushS
	LookAsync(var_13_object, var_19_string, var_17_cvector); // 0x623 Func
	return 4; // 0x625 Return
}


func_156()
{
	StopAnimation(); // 0x9c Func
	StopGroup0(); // 0x9e Func
	return 0; // 0xa0 Return
}


func_161(var_10_object)
{
	
Label_162:
	var_17_object = Obj(); var_18_bool = 0; var_19_float = 0; // 0xa2 PushV
	var_17_object = var_10_object; // 0xa3 Mov
	var_18_bool = 1; // 0xa4 MovB
	var_19_float = 180.0; // 0xa5 MovF
	func_179(var_13_int, var_14_bool, var_15_float, var_16_int, var_10_object, var_17_object, var_18_bool, var_19_float); // 0xa6 NEW_2
	var_508_int = 1; // 0xa8 PushI
	Sleep(var_508_int); // 0xa9 Func
	goto Label_162; // 0xab Jump
}


func_1574(var_59_string)
{
	var_60_bool = 0; var_61_int = 0; var_62_bool = 0; var_63_int = 0; var_64_bool = 0; var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_bool = 0; var_69_int = 0; var_70_bool = 0; var_71_int = 0; var_72_bool = 0; var_73_float = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); // 0x626 PushV
	IsExisting3DSound(var_68_bool, var_59_string); // 0x627 Func
	var_76_bool = var_68_bool == 0; // 0x629 Not
	if(var_76_bool == 0) goto Label_1599; // 0x62a JumpB
	var_69_int = 0; // 0x62b MovI
	
Label_1580:
	var_77_int = 1; // 0x62c PushI
	var_78_int = var_69_int + var_77_int; // 0x62d Add
	var_79_int = var_59_string + var_78_int; // 0x62e Add
	IsExisting3DSound(var_70_bool, var_79_int); // 0x62f Func
	var_80_bool = var_70_bool == 0; // 0x631 Not
	if(var_80_bool == 0) goto Label_1588; // 0x632 JumpB
	goto Label_1591; // 0x633 Jump
	
Label_1591:
	var_81_bool = var_69_int == 0; // 0x637 Not
	if(var_81_bool == 0) goto Label_1594; // 0x638 JumpB
	return 16; // 0x639 Return
	
Label_1594:
	irand(var_71_int, var_69_int); // 0x63a Func
	var_82_int = 1; // 0x63c PushI
	var_83_int = var_71_int + var_82_int; // 0x63d Add
	var_59_string = var_59_string + var_83_int; // 0x63e Add2
	
Label_1599:
	Is3DSoundLoaded(var_72_bool, var_59_string); // 0x63f Func
	var_84_bool = var_72_bool; // 0x641 Push
	if(var_84_bool == 0) goto Label_1614; // 0x642 JumpB
	GetEyesHeight(var_73_float); // 0x643 Func
	GetDirection(var_74_cvector); // 0x645 Func
	var_85_int = 50; // 0x647 PushI
	var_75_cvector = var_74_cvector * var_85_int; // 0x648 Mult2
	var_86_float = GetByIndex(var_75_cvector, 1); // 0x649 PushE
	var_86_float = var_86_float + var_73_float; // 0x64a Add2
	SetByIndex(var_75_cvector, 1) = var_86_float; // 0x64b PopE
	PlayGlobalSound(var_59_string, var_75_cvector); // 0x64c Func
	
Label_1614:
	return 16; // 0x64e Return
	
Label_1588:
	var_87_int = 1; // 0x634 PushI
	var_69_int = var_69_int + var_87_int; // 0x635 Add2
	goto Label_1580; // 0x636 Jump
}


func_1703(var_13_int)
{
	var_14_int = 0; var_15_int = 0; // 0x6a7 PushV
	var_16_string = "branch"; // 0x6a8 PushS
	GetVariable(var_16_string, var_15_int); // 0x6a9 Func
	var_13_int = var_15_int; // 0x6ab Mov
	return 2; // 0x6ac Return
}


func_173(var_386_float)
{
	var_386_float = 0.2; // 0xae MovF
	return 0; // 0xaf Return
}


func_1070(var_0_object)
{
	var_0_object = 1; // 0x42e TMovB
	var_13_int = 0; // 0x42f PushI
	KillTimer(var_13_int); // 0x430 Func
	Stop(); // 0x432 Func
	return 0; // 0x434 Return
}


func_1709(var_13_object)
{
	var_14_int = 0; // 0x6ae PushV
	func_1703(var_14_int); // 0x6af NEW_2
	var_18_int = 1; // 0x6b1 PushI
	var_19_bool = var_14_int == var_18_int; // 0x6b2 Eq
	if(var_19_bool == 0) goto Label_1719; // 0x6b3 JumpB
	WorkWithCorpse(var_13_object); // 0x6b4 Func
	goto Label_1721; // 0x6b6 Jump
	
Label_1721:
	return 0; // 0x6b9 Return
	
Label_1719:
	Barter(var_13_object); // 0x6b7 Func
}


func_176(var_393_int)
{
	var_393_int = 0; // 0xb1 MovI
	return 0; // 0xb2 Return
}


func_689(var_0_object, var_292_bool)
{
	var_293_cvector = CVector(0,0,0); var_294_cvector = CVector(0,0,0); var_295_cvector = CVector(0,0,0); var_296_float = 0; var_297_float = 0; var_298_cvector = CVector(0,0,0); var_299_cvector = CVector(0,0,0); var_300_cvector = CVector(0,0,0); var_301_float = 0; var_302_float = 0; // 0x2b1 PushV
	var_303_bool = 0; var_304_object = Obj(); // 0x2b2 PushV
	var_304_object = var_0_object; // 0x2b3 MovT
	func_1397(var_303_bool, var_304_object); // 0x2b4 NEW_2
	var_305_bool = var_303_bool == 0; // 0x2b6 Not
	if(var_305_bool == 0) goto Label_698; // 0x2b7 JumpB
	var_292_bool = 0; // 0x2b8 MovB
	return 10; // 0x2b9 Return
	
Label_698:
	var_306_bool = 0; // 0x2ba PushV
	func_778(var_302_float, var_306_bool); // 0x2bb NEW_2
	if(var_306_bool == 0) goto Label_715; // 0x2bd JumpB
	GetPFPosition(var_298_cvector); // 0x2be TObjFunc
	GetPFPosition(var_299_cvector); // 0x2c0 Func
	var_300_cvector = var_298_cvector - var_299_cvector; // 0x2c2 Sub2
	var_301_float = var_300_cvector | var_300_cvector; // 0x2c3 Or2
	GetAttackDistance(var_302_float); // 0x2c4 TObjFunc
	var_307_int = 50; // 0x2c6 PushI
	var_302_float = var_302_float + var_307_int; // 0x2c7 Add2
	var_308_float = var_302_float * var_302_float; // 0x2c8 Mult
	var_292_bool = var_301_float <= var_308_float; // 0x2c9 LE2
	return 10; // 0x2ca Return
	
Label_715:
	var_292_bool = 0; // 0x2cb MovB
	return 10; // 0x2cc Return
}


func_946(var_0_object, var_1_object, var_149_bool, var_150_object, var_151_float, var_152_float, var_153_bool, var_154_bool)
{
	var_155_bool = 0; var_156_bool = 0; var_157_object = Obj(); var_158_cvector = CVector(0,0,0); var_159_cvector = CVector(0,0,0); var_160_cvector = CVector(0,0,0); var_161_float = 0; var_162_object = Obj(); var_163_bool = 0; var_164_bool = 0; var_165_object = Obj(); var_166_cvector = CVector(0,0,0); var_167_cvector = CVector(0,0,0); var_168_cvector = CVector(0,0,0); var_169_float = 0; var_170_object = Obj(); // 0x3b2 PushV
	var_0_object = 0; // 0x3b3 TMovB
	var_1_object = var_150_object; // 0x3b4 TMov
	var_164_bool = var_154_bool; // 0x3b5 Mov
	
Label_950:
	var_171_bool = 0; var_172_object = Obj(); // 0x3b6 PushV
	var_172_object = var_150_object; // 0x3b7 Mov
	func_1086(var_171_bool, var_172_object); // 0x3b8 NEW_2
	var_175_bool = var_171_bool == 0; // 0x3ba Not
	if(var_175_bool == 0) goto Label_958; // 0x3bb JumpB
	var_149_bool = 0; // 0x3bc MovB
	return 16; // 0x3bd Return
	
Label_958:
	GetPosition(var_166_cvector); // 0x3be ObjFunc
	GetPosition(var_167_cvector); // 0x3c0 Func
	var_168_cvector = var_166_cvector - var_167_cvector; // 0x3c2 Sub2
	var_169_float = var_168_cvector | var_168_cvector; // 0x3c3 Or2
	var_176_bool = 0; // 0x3c4 PushV
	var_176_bool = 0; // 0x3c5 MovB
	var_177_int = 0; // 0x3c6 PushI
	var_178_bool = var_152_float > var_177_int; // 0x3c7 GT
	if(var_178_bool == 0) goto Label_973; // 0x3c8 JumpB
	var_179_float = var_152_float * var_152_float; // 0x3c9 Mult
	var_180_bool = var_169_float > var_179_float; // 0x3ca GT
	if(var_180_bool == 0) goto Label_973; // 0x3cb JumpB
	var_176_bool = 1; // 0x3cc MovB
	
Label_973:
	if(var_176_bool == 0) goto Label_978; // 0x3cd JumpB
	Stop(); // 0x3ce Func
	var_149_bool = 0; // 0x3d0 MovB
	return 16; // 0x3d1 Return
	
Label_978:
	var_181_float = var_151_float * var_151_float; // 0x3d2 Mult
	var_182_bool = var_169_float > var_181_float; // 0x3d3 GT
	if(var_182_bool == 0) goto Label_1040; // 0x3d4 JumpB
	GetPFPosition(var_166_cvector); // 0x3d5 ObjFunc
	FindPathTo(var_170_object, var_166_cvector); // 0x3d7 Func
	var_183_bool = var_170_object != 0; // 0x3d9 NullNeq
	if(var_183_bool == 0) goto Label_989; // 0x3da JumpB
	var_165_object = var_170_object; // 0x3db Mov
	var_170_object = 0; // 0x3dc SetNull
	
Label_989:
	var_184_bool = var_165_object != 0; // 0x3dd NullNeq
	if(var_184_bool == 0) goto Label_1022; // 0x3de JumpB
	var_185_bool = var_164_bool; // 0x3df Push
	if(var_185_bool == 0) goto Label_999; // 0x3e0 JumpB
	var_164_bool = 0; // 0x3e1 MovB
	RotatePath(var_165_object, var_163_bool); // 0x3e2 Func
	var_186_bool = var_163_bool == 0; // 0x3e4 Not
	if(var_186_bool == 0) goto Label_999; // 0x3e5 JumpB
	goto Label_1046; // 0x3e6 Jump
	
Label_1046:
	var_149_bool = !var_0_object; // 0x416 Not2
	return 16; // 0x417 Return
	
Label_999:
	var_187_int = 0; // 0x3e7 PushI
	var_188_float = 0.3; // 0x3e8 PushF
	SetTimer(var_187_int, var_188_float); // 0x3e9 Func
	var_189_string = ""; // 0x3eb PushV
	func_1093(var_189_string); // 0x3ec NEW_2
	var_190_string = ""; // 0x3ee PushV
	func_1095(var_190_string); // 0x3ef NEW_2
	FollowPath(var_165_object, var_153_bool, var_163_bool, var_189_string, var_190_string); // 0x3f1 Func
	var_191_bool = var_163_bool == 0; // 0x3f3 Not
	if(var_191_bool == 0) goto Label_1020; // 0x3f4 JumpB
	var_192_object = var_0_object; // 0x3f5 PushT
	if(var_192_object == 0) goto Label_1018; // 0x3f6 JumpB
	var_165_object = 0; // 0x3f7 SetNull
	goto Label_1046; // 0x3f8 Jump
	
Label_1018:
	goto Label_1045; // 0x3fa Jump
	
Label_1045:
	goto Label_950; // 0x415 Jump
	
Label_1020:
	var_165_object = 0; // 0x3fc SetNull
	goto Label_1038; // 0x3fd Jump
	
Label_1038:
	var_170_object = 0; // 0x40e SetNull
	goto Label_1044; // 0x40f Jump
	
Label_1044:
	var_165_object = 0; // 0x414 SetNull
	
Label_1022:
	var_193_int = 0; // 0x3fe PushI
	KillTimer(var_193_int); // 0x3ff Func
	var_194_float = 0.5; // 0x401 PushF
	Sleep(var_194_float, var_163_bool); // 0x402 Func
	var_195_bool = var_163_bool == 0; // 0x404 Not
	if(var_195_bool == 0) goto Label_1034; // 0x405 JumpB
	var_196_object = var_0_object; // 0x406 PushT
	if(var_196_object == 0) goto Label_1034; // 0x407 JumpB
	var_165_object = 0; // 0x408 SetNull
	goto Label_1046; // 0x409 Jump
	
Label_1034:
	var_197_int = 0; // 0x40a PushI
	var_198_float = 0.3; // 0x40b PushF
	SetTimer(var_197_int, var_198_float); // 0x40c Func
	
Label_1040:
	var_199_int = 0; // 0x410 PushI
	KillTimer(var_199_int); // 0x411 Func
	goto Label_1046; // 0x413 Jump
}


func_179(var_0_object, var_3_int, var_5_float, var_17_object, var_18_bool, var_19_float, var_126_bool, var_218_bool)
{
	var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_bool = 0; var_24_bool = 0; var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_bool = 0; var_30_float = 0; var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0; var_35_bool = 0; var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_bool = 0; var_41_float = 0; // 0xb3 PushV
	func_408(var_39_cvector, var_40_bool, var_41_float); // 0xb5 NEW_2
	var_5_float = 0; // 0xb7 TMovI
	var_64_string = "@GetAttackDistance"; // 0xb8 PushS
	var_65_int = 1; // 0xb9 PushI
	var_66_bool = IsFuncExist(var_17_object, var_64_string, var_65_int); // 0xba FuncExist
	if(var_66_bool == 0) goto Label_193; // 0xbb JumpB
	GetAttackDistance(var_31_float); // 0xbc ObjFunc
	var_67_int = 50; // 0xbe PushI
	var_31_float = var_31_float + var_67_int; // 0xbf Add2
	goto Label_194; // 0xc0 Jump
	
Label_194:
	var_68_int = 150; // 0xc2 PushI
	var_69_bool = var_31_float >= var_68_int; // 0xc3 GE
	if(var_69_bool == 0) goto Label_198; // 0xc4 JumpB
	var_31_float = 150; // 0xc5 MovI
	
Label_198:
	var_3_int = 0; // 0xc6 TMovB
	var_0_object = var_17_object; // 0xc7 TMov
	IsPlayerActor(var_0_object, var_34_bool); // 0xc8 Func
	var_70_bool = var_34_bool; // 0xca Push
	if(var_70_bool == 0) goto Label_212; // 0xcb JumpB
	var_71_string = "attack"; // 0xcc PushS
	PlayGlobalMusic(var_71_string); // 0xcd Func
	var_72_object = Obj(); // 0xcf PushV
	func_1615(var_72_object); // 0xd0 NEW_2
	SendPlayerEnemy(var_17_object, var_72_object); // 0xd2 Func
	
Label_212:
	var_75_bool = var_18_bool; // 0xd4 Push
	if(var_75_bool == 0) goto Label_216; // 0xd5 JumpB
	var_35_bool = 0; // 0xd6 MovB
	goto Label_217; // 0xd7 Jump
	
Label_217:
	var_76_float = 400.0; // 0xd9 PushF
	var_36_float = var_76_float + var_31_float; // 0xda Add2
	
Label_219:
	var_77_bool = 0; // 0xdb PushV
	var_77_bool = 0; // 0xdc MovB
	var_78_bool = 0; var_79_object = Obj(); // 0xdd PushV
	var_79_object = var_0_object; // 0xde MovT
	func_1397(var_78_bool, var_79_object); // 0xdf NEW_2
	if(var_78_bool == 0) goto Label_229; // 0xe1 JumpB
	var_112_bool = var_3_int == 0; // 0xe2 Not
	if(var_112_bool == 0) goto Label_229; // 0xe3 JumpB
	var_77_bool = 1; // 0xe4 MovB
	
Label_229:
	if(var_77_bool == 0) goto Label_391; // 0xe5 JumpB
	func_821(var_41_float); // 0xe7 NEW_2
	GetPFPosition(var_32_cvector); // 0xe9 TObjFunc
	GetPFPosition(var_33_cvector); // 0xeb Func
	var_37_cvector = var_32_cvector - var_33_cvector; // 0xed Sub2
	var_38_float = var_37_cvector | var_37_cvector; // 0xee Or2
	var_118_float = var_36_float * var_36_float; // 0xef Mult
	var_119_bool = var_38_float >= var_118_float; // 0xf0 GE
	if(var_119_bool == 0) goto Label_257; // 0xf1 JumpB
	var_120_bool = 0; var_121_object = Obj(); var_122_float = 0; var_123_float = 0; var_124_bool = 0; var_125_bool = 0; // 0xf2 PushV
	var_121_object = var_0_object; // 0xf3 MovT
	var_122_float = var_31_float; // 0xf4 Mov
	var_123_float = 10000.0; // 0xf5 MovF
	var_124_bool = 1; // 0xf6 MovB
	var_125_bool = 0; // 0xf7 MovB
	TaskCall(2); // 0xf8 TaskCall
	func_841(var_128_bool, var_120_bool, var_121_object, var_122_float, var_123_float, var_124_bool, var_125_bool); // 0xf9 NEW_2
	TaskReturn(); // 0xfa TaskReturn
	var_203_bool = var_126_bool == 0; // 0xfc Not
	if(var_203_bool == 0) goto Label_255; // 0xfd JumpB
	goto Label_391; // 0xfe Jump
	
Label_391:
	WaitForAnimEnd(); // 0x187 Func
	var_204_int = var_3_int; // 0x189 PushT
	if(var_204_int == 0) goto Label_396; // 0x18a JumpB
	return 22; // 0x18b Return
	
Label_396:
	var_205_string = "all"; // 0x18c PushS
	var_206_string = "attack_off"; // 0x18d PushS
	PlayAnimation(var_205_string, var_206_string); // 0x18e Func
	WaitForAnimEnd(); // 0x190 Func
	var_207_bool = var_34_bool; // 0x192 Push
	if(var_207_bool == 0) goto Label_407; // 0x193 JumpB
	var_208_float = 2.0; // 0x194 PushF
	Sleep(var_208_float); // 0x195 Func
	
Label_407:
	return 22; // 0x197 Return
	
Label_255:
	var_35_bool = 0; // 0xff MovB
	goto Label_390; // 0x100 Jump
	
Label_390:
	goto Label_219; // 0x186 Jump
	
Label_257:
	var_209_float = var_19_float * var_19_float; // 0x101 Mult
	var_210_bool = var_38_float >= var_209_float; // 0x102 GE
	if(var_210_bool == 0) goto Label_382; // 0x103 JumpB
	GetPFPosition(var_39_cvector); // 0x104 TObjFunc
	CanReachByPF(var_40_bool, var_39_cvector); // 0x106 Func
	var_211_bool = var_40_bool == 0; // 0x108 Not
	if(var_211_bool == 0) goto Label_281; // 0x109 JumpB
	var_212_bool = 0; var_213_object = Obj(); var_214_float = 0; var_215_float = 0; var_216_bool = 0; var_217_bool = 0; // 0x10a PushV
	var_213_object = var_0_object; // 0x10b MovT
	var_214_float = var_31_float; // 0x10c Mov
	var_215_float = 10000.0; // 0x10d MovF
	var_216_bool = 1; // 0x10e MovB
	var_217_bool = 0; // 0x10f MovB
	TaskCall(2); // 0x110 TaskCall
	func_841(var_220_bool, var_212_bool, var_213_object, var_214_float, var_215_float, var_216_bool, var_217_bool); // 0x111 NEW_2
	TaskReturn(); // 0x112 TaskReturn
	var_221_bool = var_218_bool == 0; // 0x114 Not
	if(var_221_bool == 0) goto Label_279; // 0x115 JumpB
	goto Label_391; // 0x116 Jump
	
Label_279:
	var_35_bool = 0; // 0x117 MovB
	goto Label_219; // 0x118 Jump
	
Label_281:
	var_222_bool = var_35_bool == 0; // 0x119 Not
	if(var_222_bool == 0) goto Label_306; // 0x11a JumpB
	var_223_object = Obj(); // 0x11b PushV
	var_223_object = var_0_object; // 0x11c MovT
	func_1547(); // 0x11d NEW_2
	var_232_string = "all"; // 0x11f PushS
	var_233_string = "attack_on"; // 0x120 PushS
	PlayAnimation(var_232_string, var_233_string); // 0x121 Func
	WaitForAnimEnd(); // 0x123 Func
	func_821(var_41_float); // 0x126 NEW_2
	StopAsync(); // 0x128 Func
	var_35_bool = 1; // 0x12a MovB
	var_234_bool = 0; var_235_object = Obj(); // 0x12b PushV
	var_235_object = var_0_object; // 0x12c MovT
	func_1397(var_234_bool, var_235_object); // 0x12d NEW_2
	var_236_bool = var_234_bool == 0; // 0x12f Not
	if(var_236_bool == 0) goto Label_306; // 0x130 JumpB
	goto Label_391; // 0x131 Jump
	
Label_306:
	rand(var_41_float); // 0x132 Func
	var_237_bool = 0; // 0x134 PushV
	var_237_bool = 1; // 0x135 MovB
	var_238_float = 0.25; // 0x136 PushF
	var_239_bool = var_41_float < var_238_float; // 0x137 LT
	if(var_239_bool == 0) goto Label_318; // 0x138 JumpB
	var_240_bool = 0; // 0x139 PushV
	func_778(var_237_bool, var_240_bool); // 0x13a NEW_2
	if(var_240_bool == 0) goto Label_318; // 0x13c JumpB
	var_237_bool = 0; // 0x13d MovB
	
Label_318:
	if(var_237_bool == 0) goto Label_335; // 0x13e JumpB
	Face(var_0_object); // 0x13f Func
	func_828(); // 0x142 NEW_2
	var_275_string = "all"; // 0x144 PushS
	var_276_string = "attack_stay"; // 0x145 PushS
	PlayAnimation(var_275_string, var_276_string); // 0x146 Func
	var_277_bool = 0; var_278_float = 0; // 0x148 PushV
	var_278_float = var_19_float; // 0x149 Mov
	func_646(var_41_float, var_277_bool, var_278_float); // 0x14a NEW_2
	StopAsync(); // 0x14c Func
	goto Label_381; // 0x14e Jump
	
Label_381:
	goto Label_390; // 0x17d Jump
	
Label_335:
	Face(var_0_object); // 0x14f Func
	var_492_string = "all"; // 0x151 PushS
	var_493_string = "fjump"; // 0x152 PushS
	PlayAnimation(var_492_string, var_493_string); // 0x153 Func
	WaitForAnimEnd(); // 0x155 Func
	func_821(var_41_float); // 0x158 NEW_2
	var_494_cvector = CVector(0.0, 0.0, 0.0); // 0x15a PushVec
	SetSpeed(var_494_cvector); // 0x15b Func
	Stop(); // 0x15d Func
	StopAsync(); // 0x15f Func
	var_495_bool = 0; // 0x161 PushV
	func_778(var_41_float, var_495_bool); // 0x162 NEW_2
	var_496_bool = var_495_bool == 0; // 0x164 Not
	if(var_496_bool == 0) goto Label_381; // 0x165 JumpB
	var_497_bool = 0; var_498_object = Obj(); // 0x166 PushV
	var_498_object = var_0_object; // 0x167 MovT
	func_1397(var_497_bool, var_498_object); // 0x168 NEW_2
	var_499_bool = var_497_bool == 0; // 0x16a Not
	if(var_499_bool == 0) goto Label_365; // 0x16b JumpB
	goto Label_391; // 0x16c Jump
	
Label_365:
	GetPFPosition(var_32_cvector); // 0x16d TObjFunc
	GetPFPosition(var_33_cvector); // 0x16f Func
	var_37_cvector = var_32_cvector - var_33_cvector; // 0x171 Sub2
	var_38_float = var_37_cvector | var_37_cvector; // 0x172 Or2
	var_500_float = var_19_float * var_19_float; // 0x173 Mult
	var_501_bool = var_38_float < var_500_float; // 0x174 LT
	if(var_501_bool == 0) goto Label_381; // 0x175 JumpB
	var_502_bool = 0; var_503_float = 0; // 0x176 PushV
	var_503_float = var_19_float; // 0x177 Mov
	func_482(var_41_float, var_502_bool, var_503_float); // 0x178 NEW_2
	var_504_bool = var_502_bool == 0; // 0x17a Not
	if(var_504_bool == 0) goto Label_381; // 0x17b JumpB
	goto Label_391; // 0x17c Jump
	
Label_382:
	var_505_bool = 0; var_506_float = 0; // 0x17e PushV
	var_506_float = var_19_float; // 0x17f Mov
	func_482(var_41_float, var_505_bool, var_506_float); // 0x180 NEW_2
	var_507_bool = var_505_bool == 0; // 0x182 Not
	if(var_507_bool == 0) goto Label_389; // 0x183 JumpB
	goto Label_391; // 0x184 Jump
	
Label_389:
	var_35_bool = 1; // 0x185 MovB
	
Label_216:
	var_35_bool = 1; // 0xd8 MovB
	
Label_193:
	var_31_float = var_19_float; // 0xc1 Mov
}


func_821(var_0_object)
{
	var_113_object = Obj(); // 0x335 PushV
	var_113_object = var_0_object; // 0x336 MovT
	func_1659(var_113_object); // 0x337 NEW_2
	return 0; // 0x339 Return
}


func_1465(var_13_object, var_14_int, var_15_float)
{
	var_16_cvector = CVector(0,0,0); var_17_object = Obj(); var_18_int = 0; var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_int = 0; var_23_int = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_object = Obj(); var_27_int = 0; var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_int = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0); // 0x5b9 PushV
	var_34_bool = 0; // 0x5ba PushV
	var_34_bool = 0; // 0x5bb MovB
	var_35_bool = 0; // 0x5bc PushV
	var_35_bool = 0; // 0x5bd MovB
	var_36_object = var_13_object; // 0x5be Push
	if(var_36_object == 0) goto Label_1476; // 0x5bf JumpB
	var_37_int = 4; // 0x5c0 PushI
	var_38_bool = var_14_int != var_37_int; // 0x5c1 Neq
	if(var_38_bool == 0) goto Label_1476; // 0x5c2 JumpB
	var_35_bool = 1; // 0x5c3 MovB
	
Label_1476:
	if(var_35_bool == 0) goto Label_1481; // 0x5c4 JumpB
	var_39_int = 5; // 0x5c5 PushI
	var_40_bool = var_14_int != var_39_int; // 0x5c6 Neq
	if(var_40_bool == 0) goto Label_1481; // 0x5c7 JumpB
	var_34_bool = 1; // 0x5c8 MovB
	
Label_1481:
	if(var_34_bool == 0) goto Label_1528; // 0x5c9 JumpB
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); // 0x5ca PushV
	var_43_cvector = CVector(0,0,0); var_44_object = Obj(); // 0x5cb PushV
	var_44_object = var_13_object; // 0x5cc Mov
	func_1259(var_44_object); // 0x5cd NEW_2
	var_42_cvector = var_43_cvector; // 0x5ce Mov
	func_1621(var_41_cvector, var_42_cvector); // 0x5d0 NEW_2
	var_25_cvector = var_41_cvector; // 0x5d1 Mov
	CreateVectorVector(var_26_object); // 0x5d3 Func
	var_27_int = 1; // 0x5d5 MovI
	
Label_1494:
	var_54_string = "hit"; // 0x5d6 PushS
	var_55_int = var_54_string + var_27_int; // 0x5d7 Add
	GetGeometryLocator(var_55_int, var_28_bool, var_29_cvector, var_30_cvector); // 0x5d8 Func
	var_56_bool = var_28_bool == 0; // 0x5da Not
	if(var_56_bool == 0) goto Label_1501; // 0x5db JumpB
	goto Label_1510; // 0x5dc Jump
	
Label_1510:
	size(var_31_int); // 0x5e6 ObjFunc
	var_57_int = var_31_int; // 0x5e8 Push
	if(var_57_int == 0) goto Label_1527; // 0x5e9 JumpB
	irand(var_32_int, var_31_int); // 0x5ea Func
	get(var_33_cvector, var_32_int); // 0x5ec ObjFunc
	var_58_object = Obj(); var_59_int = 0; var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); // 0x5ee PushV
	var_58_object = var_13_object; // 0x5ef Mov
	var_59_int = var_14_int; // 0x5f0 Mov
	var_60_float = var_15_float; // 0x5f1 Mov
	var_61_cvector = var_33_cvector; // 0x5f2 Mov
	var_62_cvector = -var_25_cvector; // 0x5f3 Neg2
	func_1533(var_60_float, var_61_cvector, var_62_cvector); // 0x5f4 NEW_2
	return 18; // 0x5f6 Return
	
Label_1527:
	var_26_object = 0; // 0x5f7 SetNull
	
Label_1528:
	var_103_object = Obj(); // 0x5f8 PushV
	var_103_object = var_13_object; // 0x5f9 Mov
	func_1421(var_103_object); // 0x5fa NEW_2
	return 18; // 0x5fc Return
	
Label_1501:
	var_104_int = var_30_cvector | var_25_cvector; // 0x5dd Or
	var_105_float = 0.70711; // 0x5de PushF
	var_106_bool = var_104_int >= var_105_float; // 0x5df GE
	if(var_106_bool == 0) goto Label_1507; // 0x5e0 JumpB
	add(var_29_cvector); // 0x5e1 ObjFunc
	
Label_1507:
	var_107_int = 1; // 0x5e3 PushI
	var_27_int = var_27_int + var_107_int; // 0x5e4 Add2
	goto Label_1494; // 0x5e5 Jump
}


func_826(var_450_int)
{
	var_450_int = 0; // 0x33a MovI
	return 0; // 0x33b Return
}


func_443(var_0_object, var_375_float, var_376_int)
{
	var_377_object = Obj(); var_378_float = 0; var_379_float = 0; var_380_object = Obj(); var_381_float = 0; var_382_float = 0; // 0x1bb PushV
	var_383_float = 0.9; // 0x1bc PushF
	var_384_float = var_375_float * var_383_float; // 0x1bd Mult
	GetVictim(var_384_float, var_380_object); // 0x1be Func
	ReportAttack(var_0_object); // 0x1c0 Func
	var_385_bool = var_380_object == var_0_object; // 0x1c2 Eq
	if(var_385_bool == 0) goto Label_480; // 0x1c3 JumpB
	var_386_float = 0; var_387_object = Obj(); var_388_int = 0; // 0x1c4 PushV
	var_387_object = var_380_object; // 0x1c5 Mov
	var_388_int = var_376_int; // 0x1c6 Mov
	func_173(var_388_int); // 0x1c7 NEW_2
	var_381_float = var_386_float; // 0x1c8 Mov
	var_389_float = 0; var_390_object = Obj(); var_391_float = 0; var_392_int = 0; // 0x1ca PushV
	var_390_object = var_380_object; // 0x1cb Mov
	var_391_float = var_381_float; // 0x1cc Mov
	var_393_int = 0; var_394_object = Obj(); var_395_int = 0; // 0x1cd PushV
	var_394_object = var_380_object; // 0x1ce Mov
	var_395_int = var_376_int; // 0x1cf Mov
	func_176(var_395_int); // 0x1d0 NEW_2
	var_392_int = var_393_int; // 0x1d1 Mov
	func_1283(var_389_float, var_390_object, var_391_float, var_392_int); // 0x1d3 NEW_2
	var_382_float = var_389_float; // 0x1d4 Mov
	var_450_int = 0; // 0x1d6 PushV
	func_826(var_450_int); // 0x1d7 NEW_2
	ReportHit(var_0_object, var_450_int, var_382_float, var_381_float); // 0x1d9 Func
	var_451_object = Obj(); var_452_float = 0; // 0x1db PushV
	var_451_object = var_380_object; // 0x1dc Mov
	var_452_float = var_382_float; // 0x1dd Mov
	func_833(); // 0x1de NEW_2
	
Label_480:
	return 6; // 0x1e0 Return
}


func_828()
{
	var_246_string = ""; // 0x33c PushV
	var_246_string = "attack_stay"; // 0x33d MovS
	func_1574(var_246_string); // 0x33e NEW_2
	return 0; // 0x340 Return
}


func_1213(var_58_string)
{
	RemoveRTEnvelope(); // 0x4be Func
	SetDeathState(); // 0x4c0 Func
	Stop(); // 0x4c2 Func
	StopAsync(); // 0x4c4 Func
	StopSecondaryAnimation(); // 0x4c6 Func
	var_59_string = ""; // 0x4c8 PushV
	var_59_string = var_58_string; // 0x4c9 Mov
	func_1574(var_59_string); // 0x4ca NEW_2
	var_88_string = "all"; // 0x4cc PushS
	PlayAnimation(var_88_string, var_58_string); // 0x4cd Func
	WaitForAnimEnd(); // 0x4cf Func
	var_89_string = "all"; // 0x4d1 PushS
	LockAnimationEnd(var_89_string, var_58_string); // 0x4d2 Func
	RemoveEnvelope(); // 0x4d4 Func
	return 0; // 0x4d6 Return
}


func_1086(var_20_bool, var_21_object)
{
	var_22_bool = 0; var_23_object = Obj(); // 0x43f PushV
	var_23_object = var_21_object; // 0x440 Mov
	func_1397(var_22_bool, var_23_object); // 0x441 NEW_2
	var_20_bool = var_22_bool; // 0x442 Mov
	return 0; // 0x444 Return
}


func_1722(var_19_string)
{
	var_20_object = Obj(); var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_int = 0; var_25_bool = 0; // 0x6ba PushV
	CreateInvItem(var_23_object); // 0x6bb Func
	SetItemName(var_19_string); // 0x6bd ObjFunc
	var_26_string = "Organ"; // 0x6bf PushS
	var_27_int = 1; // 0x6c0 PushI
	SetProperty(var_26_string, var_27_int); // 0x6c1 ObjFunc
	GetItemID(var_24_int); // 0x6c3 ObjFunc
	var_28_int = 0; // 0x6c5 PushI
	var_29_int = 1; // 0x6c6 PushI
	AddItem(var_25_bool, var_23_object, var_28_int, var_29_int); // 0x6c7 Func
	return 6; // 0x6c9 Return
}


func_833()
{
	return 0; // 0x342 Return
}


func_835(var_475_bool)
{
	var_475_bool = 1; // 0x343 MovB
	return 0; // 0x344 Return
}


func_837(var_371_int)
{
	var_371_int = 1; // 0x345 MovI
	return 0; // 0x346 Return
}


func_1093(var_189_string)
{
	var_189_string = "walk"; // 0x445 MovS
	return 0; // 0x446 Return
}


func_839(var_366_float)
{
	var_366_float = 0.5; // 0x347 MovF
	return 0; // 0x348 Return
}


func_1095(var_190_string)
{
	var_190_string = "run"; // 0x447 MovS
	return 0; // 0x448 Return
}


func_841(var_2_int, var_120_bool, var_121_object, var_122_float, var_123_float, var_124_bool, var_125_bool)
{
	var_129_bool = 0; var_130_bool = 0; var_131_bool = 0; var_132_bool = 0; // 0x349 PushV
	var_133_object = Obj(); // 0x34a PushV
	var_133_object = var_121_object; // 0x34b Mov
	func_1659(var_133_object); // 0x34c NEW_2
	var_134_int = 1; // 0x34e PushI
	var_135_int = 5; // 0x34f PushI
	SetTimer(var_134_int, var_135_int); // 0x350 Func
	CanSee(var_131_bool, var_121_object); // 0x352 Func
	var_136_bool = var_131_bool; // 0x354 Push
	if(var_136_bool == 0) goto Label_860; // 0x355 JumpB
	var_2_int = 1; // 0x356 TMovB
	var_137_object = Obj(); // 0x357 PushV
	var_137_object = var_121_object; // 0x358 Mov
	func_1563(var_137_object); // 0x359 NEW_2
	goto Label_861; // 0x35b Jump
	
Label_861:
	var_144_bool = 0; var_145_object = Obj(); // 0x35d PushV
	var_145_object = var_121_object; // 0x35e Mov
	func_1266(var_144_bool, var_145_object); // 0x35f NEW_2
	if(var_144_bool == 0) goto Label_871; // 0x361 JumpB
	var_148_object = Obj(); // 0x362 PushV
	func_1615(var_148_object); // 0x363 NEW_2
	SendPlayerEnemy(var_121_object, var_148_object); // 0x365 Func
	
Label_871:
	var_149_bool = 0; var_150_object = Obj(); var_151_float = 0; var_152_float = 0; var_153_bool = 0; var_154_bool = 0; // 0x367 PushV
	var_150_object = var_121_object; // 0x368 Mov
	var_151_float = var_122_float; // 0x369 Mov
	var_152_float = var_123_float; // 0x36a Mov
	var_153_bool = var_124_bool; // 0x36b Mov
	var_154_bool = var_125_bool; // 0x36c Mov
	func_946(var_131_bool, var_132_bool, var_149_bool, var_150_object, var_151_float, var_152_float, var_153_bool, var_154_bool); // 0x36d NEW_2
	var_132_bool = var_149_bool; // 0x36e Mov
	var_200_int = var_2_int; // 0x370 PushT
	if(var_200_int == 0) goto Label_885; // 0x371 JumpB
	var_201_string = "head"; // 0x372 PushS
	UnlookAsync(var_201_string); // 0x373 Func
	
Label_885:
	var_202_int = 1; // 0x375 PushI
	KillTimer(var_202_int); // 0x376 Func
	var_120_bool = var_132_bool; // 0x378 Mov
	return 4; // 0x379 Return
	
Label_860:
	var_2_int = 0; // 0x35c TMovB
}


func_1097(var_35_object)
{
	EventDisable(0); // 0x44a EventDisable
	var_36_object = Obj(); // 0x44b PushV
	var_36_object = var_35_object; // 0x44c Mov
	func_1122(var_36_object); // 0x44d NEW_2
	var_116_int = 50; // 0x44f PushI
	var_117_int = 40; // 0x450 PushI
	SetRTEnvelope(var_116_int, var_117_int); // 0x451 Func
	EventEnable(0); // 0x453 EventEnable
	
Label_1108:
	Hold(); // 0x454 Func
	goto Label_1108; // 0x456 Jump
}


func_75()
{
	var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; var_23_float = 0; var_24_bool = 0; // 0x4b PushV
	WaitForAnimEnd(); // 0x4c Func
	var_25_bool = 0; // 0x4e PushV
	func_1558(var_25_bool); // 0x4f NEW_2
	var_28_bool = var_25_bool == 0; // 0x51 Not
	if(var_28_bool == 0) goto Label_84; // 0x52 JumpB
	return 14; // 0x53 Return
	
Label_84:
	var_29_int = 0; // 0x54 PushV
	func_1686(var_29_int); // 0x55 NEW_2
	var_18_int = var_29_int; // 0x56 Mov
	var_19_int = 0; // 0x58 MovI
	
Label_89:
	var_42_bool = 0; // 0x59 PushV
	var_42_bool = 0; // 0x5a MovB
	var_43_int = 5; // 0x5b PushI
	var_44_bool = var_19_int < var_43_int; // 0x5c LT
	if(var_44_bool == 0) goto Label_99; // 0x5d JumpB
	var_45_bool = 0; // 0x5e PushV
	func_1558(var_45_bool); // 0x5f NEW_2
	if(var_45_bool == 0) goto Label_99; // 0x61 JumpB
	var_42_bool = 1; // 0x62 MovB
	
Label_99:
	if(var_42_bool == 0) goto Label_151; // 0x63 JumpB
	var_46_int = 3; // 0x64 PushI
	irand(var_20_int, var_46_int); // 0x65 Func
	var_47_int = 0; // 0x67 PushI
	var_48_bool = var_20_int == var_47_int; // 0x68 Eq
	if(var_48_bool == 0) goto Label_123; // 0x69 JumpB
	var_49_int = var_18_int; // 0x6a Push
	if(var_49_int == 0) goto Label_122; // 0x6b JumpB
	irand(var_21_int, var_18_int); // 0x6c Func
	var_50_string = "all"; // 0x6e PushS
	var_51_string = ""; var_52_int = 0; // 0x6f PushV
	var_52_int = var_21_int; // 0x70 Mov
	func_1679(var_51_string, var_52_int); // 0x71 NEW_2
	PlayAnimation(var_50_string, var_51_string); // 0x73 Func
	WaitForAnimEnd(var_22_bool); // 0x75 Func
	var_53_bool = var_22_bool == 0; // 0x77 Not
	if(var_53_bool == 0) goto Label_122; // 0x78 JumpB
	goto Label_151; // 0x79 Jump
	
Label_151:
	ResetAAS(); // 0x97 Func
	return 14; // 0x99 Return
	
Label_122:
	goto Label_140; // 0x7a Jump
	
Label_140:
	var_54_bool = 0; // 0x8c PushV
	func_154(var_54_bool); // 0x8d NEW_2
	var_55_bool = var_54_bool == 0; // 0x8f Not
	if(var_55_bool == 0) goto Label_146; // 0x90 JumpB
	goto Label_151; // 0x91 Jump
	
Label_146:
	ResetAAS(); // 0x92 Func
	var_56_int = 1; // 0x94 PushI
	var_19_int = var_19_int + var_56_int; // 0x95 Add2
	goto Label_89; // 0x96 Jump
	
Label_123:
	var_57_int = 1; // 0x7b PushI
	var_58_bool = var_20_int == var_57_int; // 0x7c Eq
	if(var_58_bool == 0) goto Label_137; // 0x7d JumpB
	var_59_int = 4; // 0x7e PushI
	rand(var_23_float, var_59_int); // 0x7f Func
	var_60_int = 1; // 0x81 PushI
	var_61_int = var_23_float + var_60_int; // 0x82 Add
	Sleep(var_61_int, var_24_bool); // 0x83 Func
	var_62_bool = var_24_bool == 0; // 0x85 Not
	if(var_62_bool == 0) goto Label_136; // 0x86 JumpB
	goto Label_151; // 0x87 Jump
	
Label_136:
	goto Label_140; // 0x88 Jump
	
Label_137:
	var_63_int = var_19_int; // 0x89 Push
	if(var_63_int == 0) goto Label_140; // 0x8a JumpB
	goto Label_151; // 0x8b Jump
}


func_1356(var_37_bool)
{
	var_39_bool = 0; var_40_bool = 0; // 0x54c PushV
	IsDead(var_40_bool); // 0x54d ObjFunc
	var_37_bool = var_40_bool; // 0x54f Mov
	return 2; // 0x550 Return
}


func_717(var_290_bool)
{
	var_291_bool = 0; // 0x2cd PushV
	var_291_bool = 0; // 0x2ce MovB
	var_292_bool = 0; // 0x2cf PushV
	func_689(var_291_bool, var_292_bool); // 0x2d0 NEW_2
	if(var_292_bool == 0) goto Label_728; // 0x2d2 JumpB
	var_309_bool = 0; // 0x2d3 PushV
	func_733(var_290_bool, var_291_bool, var_309_bool); // 0x2d4 NEW_2
	if(var_309_bool == 0) goto Label_728; // 0x2d6 JumpB
	var_291_bool = 1; // 0x2d7 MovB
	
Label_728:
	if(var_291_bool == 0) goto Label_731; // 0x2d8 JumpB
	var_290_bool = 1; // 0x2d9 MovB
	return 0; // 0x2da Return
	
Label_731:
	var_290_bool = 0; // 0x2db MovB
	return 0; // 0x2dc Return
}


func_1739()
{
	var_13_int = 0; // 0x6cb PushV
	func_1703(var_13_int); // 0x6cc NEW_2
	var_17_int = 1; // 0x6ce PushI
	var_18_bool = var_13_int != var_17_int; // 0x6cf Neq
	if(var_18_bool == 0) goto Label_1746; // 0x6d0 JumpB
	return 0; // 0x6d1 Return
	
Label_1746:
	var_19_string = ""; // 0x6d2 PushV
	var_19_string = "liver"; // 0x6d3 MovS
	func_1722(var_19_string); // 0x6d4 NEW_2
	var_30_string = ""; // 0x6d6 PushV
	var_30_string = "kidney"; // 0x6d7 MovS
	func_1722(var_30_string); // 0x6d8 NEW_2
	var_31_string = ""; // 0x6da PushV
	var_31_string = "heart"; // 0x6db MovS
	func_1722(var_31_string); // 0x6dc NEW_2
	var_32_string = ""; // 0x6de PushV
	var_32_string = "blood"; // 0x6df MovS
	func_1722(var_32_string); // 0x6e0 NEW_2
	return 0; // 0x6e2 Return
}


func_1615(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x64f PushV
	self(var_11_object); // 0x650 Func
	var_9_object = var_11_object; // 0x652 Mov
	return 2; // 0x653 Return
}


func_1361(var_26_bool, var_27_object)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); // 0x551 PushV
	var_32_bool = var_27_object == 0; // 0x552 NullEq
	if(var_32_bool == 0) goto Label_1366; // 0x553 JumpB
	var_26_bool = 0; // 0x554 MovB
	return 4; // 0x555 Return
	
Label_1366:
	var_33_bool = 0; // 0x556 PushV
	var_33_bool = 0; // 0x557 MovB
	var_34_string = "IsDead"; // 0x558 PushS
	var_35_int = 1; // 0x559 PushI
	var_36_bool = IsFuncExist(var_27_object, var_34_string, var_35_int); // 0x55a FuncExist
	if(var_36_bool == 0) goto Label_1378; // 0x55b JumpB
	var_37_bool = 0; var_38_object = Obj(); // 0x55c PushV
	var_38_object = var_27_object; // 0x55d Mov
	func_1356(var_38_object); // 0x55e NEW_2
	if(var_37_bool == 0) goto Label_1378; // 0x560 JumpB
	var_33_bool = 1; // 0x561 MovB
	
Label_1378:
	if(var_33_bool == 0) goto Label_1381; // 0x562 JumpB
	var_26_bool = 0; // 0x563 MovB
	return 4; // 0x564 Return
	
Label_1381:
	GetScene(var_30_object); // 0x565 Func
	var_41_bool = var_30_object == 0; // 0x567 NullEq
	if(var_41_bool == 0) goto Label_1387; // 0x568 JumpB
	var_26_bool = 0; // 0x569 MovB
	return 4; // 0x56a Return
	
Label_1387:
	GetScene(var_31_object); // 0x56b ObjFunc
	var_42_bool = var_30_object != var_31_object; // 0x56d Neq
	if(var_42_bool == 0) goto Label_1393; // 0x56e JumpB
	var_26_bool = 0; // 0x56f MovB
	return 4; // 0x570 Return
	
Label_1393:
	var_26_bool = 1; // 0x571 MovB
	return 4; // 0x572 Return
}


func_1621(var_41_cvector, var_42_cvector)
{
	var_49_float = 0; var_50_float = 0; // 0x655 PushV
	var_51_int = var_42_cvector | var_42_cvector; // 0x656 Or
	var_50_float = sqrt(var_51_int); // 0x657 Sqrt2
	var_52_float = 0.0; // 0x658 PushF
	var_53_bool = var_50_float < var_52_float; // 0x659 LT
	if(var_53_bool == 0) goto Label_1629; // 0x65a JumpB
	var_41_cvector = CVector(0.0, 0.0, 0.0); // 0x65b MovV
	return 2; // 0x65c Return
	
Label_1629:
	var_41_cvector = var_42_cvector / var_42_cvector; // 0x65d Div2
	return 2; // 0x65e Return
}


func_733(var_0_object, var_4_bool, var_309_bool)
{
	var_310_object = Obj(); var_311_bool = 0; var_312_float = 0; var_313_cvector = CVector(0,0,0); var_314_cvector = CVector(0,0,0); var_315_object = Obj(); var_316_bool = 0; var_317_float = 0; var_318_cvector = CVector(0,0,0); var_319_cvector = CVector(0,0,0); // 0x2dd PushV
	GetScene(var_315_object); // 0x2de Func
	var_316_bool = 0; // 0x2e0 MovB
	
Label_737:
	var_320_cvector = CVector(0,0,0); var_321_object = Obj(); // 0x2e1 PushV
	var_321_object = var_0_object; // 0x2e2 MovT
	func_1259(var_321_object); // 0x2e3 NEW_2
	var_326_int = -var_320_cvector; // 0x2e5 Neg
	FindDirLength(var_317_float, var_326_int, var_317_float); // 0x2e6 Func
	var_327_bool = var_317_float < var_4_bool; // 0x2e8 LT
	if(var_327_bool == 0) goto Label_747; // 0x2e9 JumpB
	goto Label_775; // 0x2ea Jump
	
Label_775:
	var_309_bool = var_316_bool; // 0x307 Mov
	return 10; // 0x308 Return
	
Label_747:
	Face(var_0_object); // 0x2eb Func
	var_328_string = "all"; // 0x2ed PushS
	var_329_string = "bjump"; // 0x2ee PushS
	PlayAnimation(var_328_string, var_329_string); // 0x2ef Func
	GetPFPosition(var_318_cvector); // 0x2f1 TObjFunc
	GetPFPosition(var_319_cvector); // 0x2f3 Func
	WaitForAnimEnd(); // 0x2f5 Func
	func_821(var_319_cvector); // 0x2f8 NEW_2
	StopAsync(); // 0x2fa Func
	var_330_cvector = CVector(0.0, 0.0, 0.0); // 0x2fc PushVec
	SetSpeed(var_330_cvector); // 0x2fd Func
	var_316_bool = 1; // 0x2ff MovB
	var_331_bool = 0; // 0x300 PushV
	func_689(var_319_cvector, var_331_bool); // 0x301 NEW_2
	var_332_bool = var_331_bool == 0; // 0x303 Not
	if(var_332_bool == 0) goto Label_774; // 0x304 JumpB
	goto Label_775; // 0x305 Jump
	
Label_774:
	goto Label_737; // 0x306 Jump
}


func_1245(var_417_string, var_418_int)
{
	var_419_int = 2; // 0x4de PushI
	var_420_bool = var_418_int == var_419_int; // 0x4df Eq
	if(var_420_bool == 0) goto Label_1252; // 0x4e0 JumpB
	var_417_string = "fire"; // 0x4e1 MovS
	return 0; // 0x4e2 Return
	
Label_1252:
	var_421_int = 1; // 0x4e4 PushI
	var_422_bool = var_418_int == var_421_int; // 0x4e5 Eq
	if(var_422_bool == 0) goto Label_1257; // 0x4e6 JumpB
	var_417_string = "bullet"; // 0x4e7 MovS
	return 0; // 0x4e8 Return
	
Label_1257:
	var_417_string = "phys"; // 0x4e9 MovS
	return 0; // 0x4ea Return
}


func_1631(var_427_float, var_428_float, var_429_float)
{
	var_432_bool = var_428_float < var_429_float; // 0x660 LT
	if(var_432_bool == 0) goto Label_1636; // 0x661 JumpB
	var_427_float = var_428_float; // 0x662 Mov
	goto Label_1637; // 0x663 Jump
	
Label_1637:
	return 0; // 0x665 Return
	
Label_1636:
	var_427_float = var_429_float; // 0x664 Mov
}


func_482(var_0_object, var_338_bool, var_339_float)
{
	var_340_int = 0; var_341_bool = 0; var_342_int = 0; var_343_string = ""; var_344_int = 0; var_345_bool = 0; var_346_int = 0; var_347_string = ""; // 0x1e2 PushV
	func_821(var_347_string); // 0x1e4 NEW_2
	irand(var_344_int, var_347_string); // 0x1e6 Func
	var_348_int = 1; // 0x1e8 PushI
	var_344_int = var_344_int + var_348_int; // 0x1e9 Add2
	Face(var_0_object); // 0x1ea Func
	var_349_bool = 1; // 0x1ec PushB
	SetAttackState(var_349_bool); // 0x1ed Func
	func_1668(); // 0x1f0 NEW_2
	var_354_string = "all"; // 0x1f2 PushS
	var_355_string = "attack_begin"; // 0x1f3 PushS
	var_356_int = var_355_string + var_344_int; // 0x1f4 Add
	PlayAnimation(var_354_string, var_356_int); // 0x1f5 Func
	WaitForAnimEnd(); // 0x1f7 Func
	func_789(var_346_int, var_347_string); // 0x1fa NEW_2
	var_372_bool = 0; var_373_object = Obj(); // 0x1fc PushV
	var_373_object = var_0_object; // 0x1fd MovT
	func_1397(var_372_bool, var_373_object); // 0x1fe NEW_2
	var_374_bool = var_372_bool == 0; // 0x200 Not
	if(var_374_bool == 0) goto Label_518; // 0x201 JumpB
	StopAsync(); // 0x202 Func
	var_338_bool = 0; // 0x204 MovB
	return 8; // 0x205 Return
	
Label_518:
	var_375_float = 0; var_376_int = 0; // 0x206 PushV
	var_375_float = var_339_float; // 0x207 Mov
	var_376_int = var_344_int; // 0x208 Mov
	func_443(var_347_string, var_375_float, var_376_int); // 0x209 NEW_2
	var_453_string = "all"; // 0x20b PushS
	var_454_string = "attack_middle"; // 0x20c PushS
	var_455_int = var_454_string + var_344_int; // 0x20d Add
	HasAnimation(var_345_bool, var_453_string, var_455_int); // 0x20e Func
	var_456_bool = var_345_bool; // 0x210 Push
	if(var_456_bool == 0) goto Label_599; // 0x211 JumpB
	func_1668(); // 0x213 NEW_2
	var_457_string = "all"; // 0x215 PushS
	var_458_string = "attack_middle"; // 0x216 PushS
	var_459_int = var_458_string + var_344_int; // 0x217 Add
	PlayAnimation(var_457_string, var_459_int); // 0x218 Func
	WaitForAnimEnd(); // 0x21a Func
	func_821(var_347_string); // 0x21d NEW_2
	var_460_bool = 0; var_461_object = Obj(); // 0x21f PushV
	var_461_object = var_0_object; // 0x220 MovT
	func_1397(var_460_bool, var_461_object); // 0x221 NEW_2
	var_462_bool = var_460_bool == 0; // 0x223 Not
	if(var_462_bool == 0) goto Label_553; // 0x224 JumpB
	StopAsync(); // 0x225 Func
	var_338_bool = 0; // 0x227 MovB
	return 8; // 0x228 Return
	
Label_553:
	var_463_float = 0; var_464_int = 0; // 0x229 PushV
	var_463_float = var_339_float; // 0x22a Mov
	var_464_int = var_344_int; // 0x22b Mov
	func_443(var_347_string, var_463_float, var_464_int); // 0x22c NEW_2
	var_346_int = 1; // 0x22e MovI
	
Label_559:
	var_465_string = "attack_middle"; // 0x22f PushS
	var_466_int = var_465_string + var_344_int; // 0x230 Add
	var_467_string = "_"; // 0x231 PushS
	var_468_int = var_466_int + var_467_string; // 0x232 Add
	var_347_string = var_468_int + var_346_int; // 0x233 Add2
	var_469_string = "all"; // 0x234 PushS
	HasAnimation(var_345_bool, var_469_string, var_347_string); // 0x235 Func
	var_470_bool = var_345_bool == 0; // 0x237 Not
	if(var_470_bool == 0) goto Label_570; // 0x238 JumpB
	goto Label_599; // 0x239 Jump
	
Label_599:
	var_471_bool = 0; // 0x257 PushB
	SetAttackState(var_471_bool); // 0x258 Func
	var_472_string = "all"; // 0x25a PushS
	var_473_string = "attack_end"; // 0x25b PushS
	var_474_int = var_473_string + var_344_int; // 0x25c Add
	PlayAnimation(var_472_string, var_474_int); // 0x25d Func
	var_475_bool = 0; // 0x25f PushV
	func_835(var_475_bool); // 0x260 NEW_2
	if(var_475_bool == 0) goto Label_617; // 0x262 JumpB
	var_476_bool = 0; var_477_float = 0; // 0x263 PushV
	var_477_float = 0.75; // 0x264 MovF
	func_619(var_476_bool, var_477_float); // 0x265 NEW_2
	StopAsync(); // 0x267 Func
	
Label_617:
	var_338_bool = 1; // 0x269 MovB
	return 8; // 0x26a Return
	
Label_570:
	func_1668(); // 0x23b NEW_2
	var_485_string = "all"; // 0x23d PushS
	PlayAnimation(var_485_string, var_347_string); // 0x23e Func
	WaitForAnimEnd(); // 0x240 Func
	func_821(var_347_string); // 0x243 NEW_2
	var_486_bool = 0; var_487_object = Obj(); // 0x245 PushV
	var_487_object = var_0_object; // 0x246 MovT
	func_1397(var_486_bool, var_487_object); // 0x247 NEW_2
	var_488_bool = var_486_bool == 0; // 0x249 Not
	if(var_488_bool == 0) goto Label_591; // 0x24a JumpB
	StopAsync(); // 0x24b Func
	var_338_bool = 0; // 0x24d MovB
	return 8; // 0x24e Return
	
Label_591:
	var_489_float = 0; var_490_int = 0; // 0x24f PushV
	var_489_float = var_339_float; // 0x250 Mov
	var_490_int = var_344_int; // 0x251 Mov
	func_443(var_347_string, var_489_float, var_490_int); // 0x252 NEW_2
	var_491_int = 1; // 0x254 PushI
	var_346_int = var_346_int + var_491_int; // 0x255 Add2
	goto Label_559; // 0x256 Jump
}


func_1122(var_36_object)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = ""; var_42_object = Obj(); var_43_bool = 0; var_44_bool = 0; var_45_float = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_string = ""; var_52_object = Obj(); var_53_bool = 0; var_54_bool = 0; var_55_float = 0; var_56_cvector = CVector(0,0,0); // 0x462 PushV
	var_57_bool = var_36_object == 0; // 0x463 NullEq
	if(var_57_bool == 0) goto Label_1130; // 0x464 JumpB
	var_58_string = ""; // 0x465 PushV
	var_58_string = "fdie"; // 0x466 MovS
	func_1213(var_58_string); // 0x467 NEW_2
	goto Label_1212; // 0x469 Jump
	
Label_1212:
	return 20; // 0x4bc Return
	
Label_1130:
	GetPosition(var_47_cvector); // 0x46a ObjFunc
	GetPosition(var_48_cvector); // 0x46c Func
	GetDirection(var_49_cvector); // 0x46e Func
	var_50_cvector = var_48_cvector - var_47_cvector; // 0x470 Sub2
	var_90_float = GetByIndex(var_50_cvector, 0); // 0x471 PushE
	var_91_float = GetByIndex(var_49_cvector, 0); // 0x472 PushE
	var_92_float = var_90_float * var_91_float; // 0x473 Mult
	var_93_float = GetByIndex(var_50_cvector, 2); // 0x474 PushE
	var_94_float = GetByIndex(var_49_cvector, 2); // 0x475 PushE
	var_95_float = var_93_float * var_94_float; // 0x476 Mult
	var_96_int = var_92_float + var_95_float; // 0x477 Add
	var_97_int = 0; // 0x478 PushI
	var_98_bool = var_96_int >= var_97_int; // 0x479 GE
	if(var_98_bool == 0) goto Label_1149; // 0x47a JumpB
	var_51_string = "fdie"; // 0x47b MovS
	goto Label_1150; // 0x47c Jump
	
Label_1150:
	RemoveRTEnvelope(); // 0x47e Func
	SetDeathState(); // 0x480 Func
	Stop(); // 0x482 Func
	StopAsync(); // 0x484 Func
	var_52_object = var_36_object; // 0x486 Mov
	var_99_string = "GetScriptProperty"; // 0x487 PushS
	var_100_int = 2; // 0x488 PushI
	var_101_bool = IsFuncExist(var_36_object, var_99_string, var_100_int); // 0x489 FuncExist
	if(var_101_bool == 0) goto Label_1174; // 0x48a JumpB
	var_102_string = "Owner"; // 0x48b PushS
	HasScriptProperty(var_53_bool, var_102_string); // 0x48c ObjFunc
	var_103_bool = var_53_bool; // 0x48e Push
	if(var_103_bool == 0) goto Label_1174; // 0x48f JumpB
	var_104_string = "Owner"; // 0x490 PushS
	GetScriptProperty(var_52_object, var_104_string); // 0x491 ObjFunc
	var_105_bool = var_52_object == 0; // 0x493 NullEq
	if(var_105_bool == 0) goto Label_1174; // 0x494 JumpB
	var_52_object = var_36_object; // 0x495 Mov
	
Label_1174:
	var_106_string = "@GetEyesHeight"; // 0x496 PushS
	var_107_int = 1; // 0x497 PushI
	var_108_bool = IsFuncExist(var_52_object, var_106_string, var_107_int); // 0x498 FuncExist
	if(var_108_bool == 0) goto Label_1189; // 0x499 JumpB
	GetEyesHeight(var_55_float); // 0x49a ObjFunc
	var_56_cvector = CVector(0.0, 0.0, 0.0); // 0x49c MovV
	var_109_float = GetByIndex(var_56_cvector, 1); // 0x49d PushE
	var_109_float = var_55_float; // 0x49e Mov
	SetByIndex(var_56_cvector, 1) = var_109_float; // 0x49f PopE
	var_110_string = "head"; // 0x4a0 PushS
	LookAsync(var_36_object, var_110_string, var_56_cvector); // 0x4a1 Func
	var_54_bool = 1; // 0x4a3 MovB
	goto Label_1190; // 0x4a4 Jump
	
Label_1190:
	var_111_string = ""; // 0x4a6 PushV
	var_111_string = var_51_string; // 0x4a7 Mov
	func_1574(var_111_string); // 0x4a8 NEW_2
	var_112_string = "all"; // 0x4aa PushS
	PlayAnimation(var_112_string, var_51_string); // 0x4ab Func
	WaitForAnimEnd(); // 0x4ad Func
	var_113_bool = var_54_bool; // 0x4af Push
	if(var_113_bool == 0) goto Label_1206; // 0x4b0 JumpB
	StopAsync(); // 0x4b1 Func
	var_114_string = "head"; // 0x4b3 PushS
	UnlookAsync(var_114_string); // 0x4b4 Func
	
Label_1206:
	var_115_string = "all"; // 0x4b6 PushS
	LockAnimationEnd(var_115_string, var_51_string); // 0x4b7 Func
	RemoveEnvelope(); // 0x4b9 Func
	var_52_object = 0; // 0x4bb SetNull
	
Label_1189:
	var_54_bool = 0; // 0x4a5 MovB
	
Label_1149:
	var_51_string = "bdie"; // 0x47d MovS
}


func_1638(var_437_float, var_438_float, var_439_float, var_440_float)
{
	var_441_bool = var_438_float < var_439_float; // 0x667 LT
	if(var_441_bool == 0) goto Label_1643; // 0x668 JumpB
	var_437_float = var_439_float; // 0x669 Mov
	return 0; // 0x66a Return
	
Label_1643:
	var_442_bool = var_438_float > var_440_float; // 0x66b GT
	if(var_442_bool == 0) goto Label_1647; // 0x66c JumpB
	var_437_float = var_440_float; // 0x66d Mov
	return 0; // 0x66e Return
	
Label_1647:
	var_437_float = var_438_float; // 0x66f Mov
	return 0; // 0x670 Return
}


func_619(var_476_bool, var_477_float)
{
	var_478_float = 0; var_479_bool = 0; var_480_float = 0; var_481_bool = 0; // 0x26b PushV
	rand(var_480_float); // 0x26c Func
	var_482_bool = var_480_float < var_477_float; // 0x26e LT
	if(var_482_bool == 0) goto Label_639; // 0x26f JumpB
	
Label_624:
	IsAnimationPlaying(var_481_bool); // 0x270 Func
	var_483_bool = var_481_bool == 0; // 0x272 Not
	if(var_483_bool == 0) goto Label_629; // 0x273 JumpB
	goto Label_638; // 0x274 Jump
	
Label_638:
	goto Label_644; // 0x27e Jump
	
Label_644:
	var_476_bool = 0; // 0x284 MovB
	return 4; // 0x285 Return
	
Label_629:
	var_484_bool = 0; // 0x275 PushV
	func_717(var_484_bool); // 0x276 NEW_2
	if(var_484_bool == 0) goto Label_635; // 0x278 JumpB
	var_476_bool = 1; // 0x279 MovB
	return 4; // 0x27a Return
	
Label_635:
	sync(); // 0x27b Func
	goto Label_624; // 0x27d Jump
	
Label_639:
	WaitForAnimEnd(); // 0x27f Func
	func_821(var_481_bool); // 0x282 NEW_2
}


func_1259(var_43_cvector)
{
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0x4eb PushV
	GetPosition(var_47_cvector); // 0x4ec Func
	GetPosition(var_48_cvector); // 0x4ee ObjFunc
	var_43_cvector = var_48_cvector - var_47_cvector; // 0x4f0 Sub2
	return 4; // 0x4f1 Return
}


func_1771(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0x6eb PushV
	GetScene(var_12_object); // 0x6ec Func
	func_1739(); // 0x6ef NEW_2
	var_33_string = "dead"; // 0x6f1 PushS
	var_34_int = 1; // 0x6f2 PushI
	SetProperty(var_33_string, var_34_int); // 0x6f3 Func
	var_35_object = Obj(); // 0x6f5 PushV
	var_35_object = var_10_object; // 0x6f6 Mov
	TaskCall(3); // 0x6f7 TaskCall
	func_1097(var_35_object); // 0x6f8 NEW_2
	TaskReturn(); // 0x6f9 TaskReturn
	return 2; // 0x6fb Return
}


func_1649(var_445_float)
{
	var_446_object = Obj(); var_447_object = Obj(); // 0x671 PushV
	CreateFloatVector(var_447_object); // 0x672 Func
	add(var_445_float); // 0x674 ObjFunc
	var_448_int = 15; // 0x676 PushI
	SendWorldWndMessage(var_448_int, var_447_object); // 0x677 Func
	return 2; // 0x679 Return
}


func_1266(var_144_bool, var_145_object)
{
	var_146_bool = 0; var_147_bool = 0; // 0x4f2 PushV
	IsPlayerActor(var_145_object, var_147_bool); // 0x4f3 Func
	var_144_bool = var_147_bool; // 0x4f5 Mov
	return 2; // 0x4f6 Return
}


func_1397(var_22_bool, var_23_object)
{
	var_24_int = 0; var_25_int = 0; // 0x575 PushV
	var_26_bool = 0; var_27_object = Obj(); // 0x576 PushV
	var_27_object = var_23_object; // 0x577 Mov
	func_1361(var_26_bool, var_27_object); // 0x578 NEW_2
	var_43_bool = var_26_bool == 0; // 0x57a Not
	if(var_43_bool == 0) goto Label_1406; // 0x57b JumpB
	var_22_bool = 0; // 0x57c MovB
	return 2; // 0x57d Return
	
Label_1406:
	var_44_bool = 0; var_45_object = Obj(); var_46_string = ""; // 0x57e PushV
	var_45_object = var_23_object; // 0x57f Mov
	var_46_string = "noaccess"; // 0x580 MovS
	func_1271(var_44_bool, var_45_object, var_46_string); // 0x581 NEW_2
	var_53_bool = var_44_bool == 0; // 0x583 Not
	if(var_53_bool == 0) goto Label_1415; // 0x584 JumpB
	var_22_bool = 1; // 0x585 MovB
	return 2; // 0x586 Return
	
Label_1415:
	var_54_string = "noaccess"; // 0x587 PushS
	GetProperty(var_54_string, var_25_int); // 0x588 ObjFunc
	var_55_int = 0; // 0x58a PushI
	var_22_bool = var_25_int == var_55_int; // 0x58b Eq2
	return 2; // 0x58c Return
}


func_1271(var_44_bool, var_45_object, var_46_string)
{
	var_47_bool = 0; var_48_bool = 0; // 0x4f7 PushV
	var_49_string = "HasProperty"; // 0x4f8 PushS
	var_50_int = 2; // 0x4f9 PushI
	var_51_bool = IsFuncExist(var_45_object, var_49_string, var_50_int); // 0x4fa FuncExist
	var_52_bool = var_51_bool == 0; // 0x4fb Not
	if(var_52_bool == 0) goto Label_1279; // 0x4fc JumpB
	var_44_bool = 0; // 0x4fd MovB
	return 2; // 0x4fe Return
	
Label_1279:
	HasProperty(var_46_string, var_48_bool); // 0x4ff ObjFunc
	var_44_bool = var_48_bool; // 0x501 Mov
	return 2; // 0x502 Return
}


func_1659(var_12_object)
{
	var_13_bool = 0; var_14_bool = 0; // 0x67b PushV
	IsPlayerActor(var_12_object, var_14_bool); // 0x67c Func
	var_15_bool = var_14_bool; // 0x67e Push
	if(var_15_bool == 0) goto Label_1667; // 0x67f JumpB
	var_16_string = "attack"; // 0x680 PushS
	PlayGlobalMusic(var_16_string); // 0x681 Func
	
Label_1667:
	return 2; // 0x683 Return
}


func_1533(var_15_object, var_18_cvector, var_19_cvector)
{
	var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); // 0x5fd PushV
	GetScene(var_22_object); // 0x5fe Func
	var_24_string = "scripted"; // 0x600 PushS
	var_25_string = "blood_dir.xml"; // 0x601 PushS
	AddActorByType(var_23_object, var_24_string, var_22_object, var_18_cvector, var_19_cvector, var_25_string); // 0x602 Func
	var_26_object = Obj(); // 0x604 PushV
	var_26_object = var_15_object; // 0x605 Mov
	func_1421(var_26_object); // 0x606 NEW_2
	return 4; // 0x608 Return
}


