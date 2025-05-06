task_0_event_5(var_0_int, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	StopGroup0(); // 0x8 Func
	sync(); // 0xa Func
	return 0; // 0xc Return
}


task_1_event_26(var_0_int, var_1_bool, var_2_string, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool)
{
	var_12_string = "attack"; // 0x22 PushS
	var_13_bool = var_11_bool == var_12_string; // 0x23 Eq
	if(var_13_bool == 0) goto Label_45; // 0x24 JumpB
	func_154(var_11_bool); // 0x26 NEW_2
	TaskCall(2); // 0x29 TaskCall
	func_160(); // 0x2a NEW_2
	TaskReturn(); // 0x2b TaskReturn
	
Label_45:
	return 0; // 0x2d Return
}


task_1_event_17(var_0_int, var_1_bool, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool)
{
	var_12_bool = 0; var_13_bool = 0; // 0x2e PushV
	IsPlayerActor(var_11_bool, var_13_bool); // 0x2f Func
	var_14_bool = var_13_bool; // 0x31 Push
	if(var_14_bool == 0) goto Label_56; // 0x32 JumpB
	var_15_bool = 0; var_16_string = ""; var_17_string = ""; // 0x33 PushV
	var_16_string = "quest_b4_01"; // 0x34 MovS
	var_17_string = "patrol_attack"; // 0x35 MovS
	func_1698(var_15_bool, var_16_string, var_17_string); // 0x36 NEW_2
	
Label_56:
	return 2; // 0x38 Return
}


task_3_event_7(var_0_int, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_int)
{
	var_12_int = 1; // 0x381 PushI
	var_13_bool = var_11_int == var_12_int; // 0x382 Eq
	if(var_13_bool == 0) goto Label_905; // 0x383 JumpB
	var_14_object = Obj(); // 0x384 PushV
	var_14_object = var_1_bool; // 0x385 MovT
	func_1710(var_14_object); // 0x386 NEW_2
	goto Label_909; // 0x388 Jump
	
Label_909:
	return 0; // 0x38d Return
	
Label_905:
	var_19_int = 0; // 0x389 PushV
	var_19_int = var_11_int; // 0x38a Mov
	func_1054(var_10_bool, var_11_int, var_19_int); // 0x38b NEW_2
}


task_3_event_1(var_0_int, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object)
{
	var_12_bool = 0; // 0x39c PushV
	var_12_bool = 0; // 0x39d MovB
	var_13_bool = var_1_bool == var_11_object; // 0x39e Eq
	if(var_13_bool == 0) goto Label_931; // 0x39f JumpB
	var_14_bool = var_2_object == 0; // 0x3a0 Not
	if(var_14_bool == 0) goto Label_931; // 0x3a1 JumpB
	var_12_bool = 1; // 0x3a2 MovB
	
Label_931:
	if(var_12_bool == 0) goto Label_937; // 0x3a3 JumpB
	var_2_object = 1; // 0x3a4 TMovB
	var_15_object = Obj(); // 0x3a5 PushV
	var_15_object = var_11_object; // 0x3a6 Mov
	func_1582(var_15_object); // 0x3a7 NEW_2
	
Label_937:
	return 0; // 0x3a9 Return
}


task_3_event_2(var_0_int, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object)
{
	var_12_bool = 0; // 0x3ab PushV
	var_12_bool = 0; // 0x3ac MovB
	var_13_bool = var_1_bool == var_11_object; // 0x3ad Eq
	if(var_13_bool == 0) goto Label_946; // 0x3ae JumpB
	var_14_object = var_2_object; // 0x3af PushT
	if(var_14_object == 0) goto Label_946; // 0x3b0 JumpB
	var_12_bool = 1; // 0x3b1 MovB
	
Label_946:
	if(var_12_bool == 0) goto Label_951; // 0x3b2 JumpB
	var_2_object = 0; // 0x3b3 TMovB
	var_15_string = "head"; // 0x3b4 PushS
	UnlookAsync(var_15_string); // 0x3b5 Func
	
Label_951:
	return 0; // 0x3b7 Return
}


task_3_event_10(var_0_int, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object)
{
	RequestClearPath(var_11_object); // 0x431 Func
	return 0; // 0x433 Return
}


task_3_event_41(var_0_int, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object)
{
	func_910(var_11_object); // 0x43d NEW_2
	var_16_object = Obj(); // 0x43f PushV
	var_16_object = var_11_object; // 0x440 Mov
	func_1874(); // 0x441 NEW_2
	return 0; // 0x443 Return
}


task_4_event_0(var_0_int, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object)
{
	var_12_bool = 0; var_13_bool = 0; // 0x45c PushV
	IsOverrideActive(var_13_bool); // 0x45d Func
	var_14_bool = var_13_bool == 0; // 0x45f Not
	if(var_14_bool == 0) goto Label_1125; // 0x460 JumpB
	var_15_object = Obj(); // 0x461 PushV
	var_15_object = var_11_object; // 0x462 Mov
	func_1736(var_15_object); // 0x463 NEW_2
	
Label_1125:
	return 2; // 0x465 Return
}


task_4_event_22(var_0_int, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_float, var_14_float)
{
	return 0; // 0x4dc Return
}


task_4_event_16(var_0_int, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_string)
{
	return 0; // 0x4de Return
}


task_4_event_41(var_0_int, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object)
{
	return 0; // 0x4e0 Return
}


event_6(var_0_int, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	var_11_object = Obj(); // 0x6fe PushV
	func_1649(var_11_object); // 0x6ff NEW_2
	RemoveActor(var_11_object); // 0x701 Func
	Hold(); // 0x703 Func
	return 0; // 0x705 Return
}


event_22(var_0_int, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_float, var_14_float)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0; // 0x734 PushV
	var_15_object = var_11_object; // 0x735 Mov
	var_16_int = var_12_int; // 0x736 Mov
	var_17_float = var_13_float; // 0x737 Mov
	func_1484(var_15_object, var_16_int, var_17_float); // 0x738 NEW_2
	return 0; // 0x73a Return
}


event_43(var_0_int, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_float, var_14_float, var_15_cvector, var_16_cvector)
{
	var_17_object = Obj(); var_18_int = 0; var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); // 0x73c PushV
	var_17_object = var_11_object; // 0x73d Mov
	var_18_int = var_12_int; // 0x73e Mov
	var_19_float = var_13_float; // 0x73f Mov
	var_20_cvector = var_15_cvector; // 0x740 Mov
	var_21_cvector = var_16_cvector; // 0x741 Mov
	func_1552(var_19_float, var_20_cvector, var_21_cvector); // 0x742 NEW_2
	return 0; // 0x744 Return
}


event_16(var_0_int, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_string)
{
	var_13_float = 0; var_14_float = 0; // 0x745 PushV
	var_15_string = "health"; // 0x746 PushS
	var_16_bool = var_12_string == var_15_string; // 0x747 Eq
	if(var_16_bool == 0) goto Label_1873; // 0x748 JumpB
	var_17_string = "health"; // 0x749 PushS
	GetProperty(var_17_string, var_14_float); // 0x74a Func
	var_18_int = 0; // 0x74c PushI
	var_19_bool = var_14_float <= var_18_int; // 0x74d LE
	if(var_19_bool == 0) goto Label_1873; // 0x74e JumpB
	SignalDeath(var_11_object); // 0x74f Func
	
Label_1873:
	return 2; // 0x751 Return
}


event_41(var_0_int, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object)
{
	var_12_object = Obj(); // 0x753 PushV
	var_12_object = var_11_object; // 0x754 Mov
	func_1798(var_12_object); // 0x755 NEW_2
	return 0; // 0x757 Return
}


main(var_0_int, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	var_11_bool = 0; // 0xd PushV
	func_1577(var_11_bool); // 0xe NEW_2
	var_14_bool = var_11_bool == 0; // 0x10 Not
	if(var_14_bool == 0) goto Label_23; // 0x11 JumpB
	TaskCall(0); // 0x13 TaskCall
	func_0(); // 0x14 NEW_2
	TaskReturn(); // 0x15 TaskReturn
	
Label_23:
	var_17_bool = 0; var_18_string = ""; var_19_int = 0; // 0x17 PushV
	var_20_string = ""; var_21_string = ""; // 0x18 PushV
	var_21_string = "path"; // 0x19 MovS
	func_1287(var_20_string, var_21_string); // 0x1a NEW_2
	var_18_string = var_20_string; // 0x1b Mov
	var_19_int = 1; // 0x1d MovI
	func_57(var_10_bool, var_17_bool, var_18_string, var_19_int); // 0x1e NEW_2
	return 0; // 0x20 Return
}


func_0()
{
	
Label_0:
	Hold(); // 0x0 Func
	var_15_bool = 0; // 0x2 PushV
	func_1577(var_15_bool); // 0x3 NEW_2
	var_16_bool = var_15_bool == 0; // 0x5 Not
	if(var_16_bool == 0) goto Label_0; // 0x6 JumpB
	return 0; // 0x7 Return
}


func_1665(var_434_float, var_435_float, var_436_float)
{
	var_439_bool = var_435_float < var_436_float; // 0x682 LT
	if(var_439_bool == 0) goto Label_1670; // 0x683 JumpB
	var_434_float = var_435_float; // 0x684 Mov
	goto Label_1671; // 0x685 Jump
	
Label_1671:
	return 0; // 0x687 Return
	
Label_1670:
	var_434_float = var_436_float; // 0x686 Mov
}


func_1798(var_12_object)
{
	var_13_bool = 0; var_14_bool = 0; // 0x706 PushV
	var_15_bool = 0; var_16_string = ""; var_17_string = ""; // 0x707 PushV
	var_16_string = "quest_b4_01"; // 0x708 MovS
	var_17_string = "patrol_dead"; // 0x709 MovS
	func_1698(var_15_bool, var_16_string, var_17_string); // 0x70a NEW_2
	var_21_string = "revolver_ammo"; // 0x70c PushS
	var_22_int = 0; // 0x70d PushI
	var_23_int = 4; // 0x70e PushI
	AddItem(var_14_bool, var_21_string, var_22_int, var_23_int); // 0x70f Func
	var_24_string = "meradorm"; // 0x711 PushS
	var_25_int = 0; // 0x712 PushI
	var_26_int = 1; // 0x713 PushI
	AddItem(var_14_bool, var_24_string, var_25_int, var_26_int); // 0x714 Func
	var_27_string = "morfin"; // 0x716 PushS
	var_28_int = 0; // 0x717 PushI
	var_29_int = 1; // 0x718 PushI
	AddItem(var_14_bool, var_27_string, var_28_int, var_29_int); // 0x719 Func
	var_30_string = ""; var_31_int = 0; var_32_int = 0; var_33_int = 0; // 0x71b PushV
	var_30_string = "alpha_pills"; // 0x71c MovS
	var_31_int = 2; // 0x71d MovI
	var_32_int = 3; // 0x71e MovI
	var_33_int = 5; // 0x71f MovI
	func_1593(var_30_string, var_31_int, var_32_int, var_33_int); // 0x720 NEW_2
	var_46_string = ""; var_47_int = 0; var_48_int = 0; var_49_int = 0; // 0x722 PushV
	var_46_string = "beta_pills"; // 0x723 MovS
	var_47_int = 2; // 0x724 MovI
	var_48_int = 3; // 0x725 MovI
	var_49_int = 4; // 0x726 MovI
	func_1593(var_46_string, var_47_int, var_48_int, var_49_int); // 0x727 NEW_2
	func_1766(); // 0x72a NEW_2
	var_70_object = Obj(); // 0x72c PushV
	var_70_object = var_12_object; // 0x72d Mov
	TaskCall(4); // 0x72e TaskCall
	func_1103(var_70_object); // 0x72f NEW_2
	TaskReturn(); // 0x730 TaskReturn
	return 2; // 0x732 Return
}


func_1287(var_20_string, var_21_string)
{
	var_22_string = ""; var_23_string = ""; // 0x507 PushV
	GetProperty(var_21_string, var_23_string); // 0x508 Func
	var_20_string = var_23_string; // 0x50a Mov
	return 2; // 0x50b Return
}


func_1672(var_444_float, var_445_float, var_446_float, var_447_float)
{
	var_448_bool = var_445_float < var_446_float; // 0x689 LT
	if(var_448_bool == 0) goto Label_1677; // 0x68a JumpB
	var_444_float = var_446_float; // 0x68b Mov
	return 0; // 0x68c Return
	
Label_1677:
	var_449_bool = var_445_float > var_447_float; // 0x68d GT
	if(var_449_bool == 0) goto Label_1681; // 0x68e JumpB
	var_444_float = var_447_float; // 0x68f Mov
	return 0; // 0x690 Return
	
Label_1681:
	var_444_float = var_445_float; // 0x691 Mov
	return 0; // 0x692 Return
}


func_652(var_0_int, var_284_bool, var_285_float)
{
	var_286_bool = 0; var_287_cvector = CVector(0,0,0); var_288_cvector = CVector(0,0,0); var_289_cvector = CVector(0,0,0); var_290_float = 0; var_291_bool = 0; var_292_cvector = CVector(0,0,0); var_293_cvector = CVector(0,0,0); var_294_cvector = CVector(0,0,0); var_295_float = 0; // 0x28c PushV
	
Label_653:
	IsAnimationPlaying(var_291_bool); // 0x28d Func
	var_296_bool = var_291_bool == 0; // 0x28f Not
	if(var_296_bool == 0) goto Label_658; // 0x290 JumpB
	goto Label_690; // 0x291 Jump
	
Label_690:
	func_827(var_295_float); // 0x2b3 NEW_2
	var_284_bool = 0; // 0x2b5 MovB
	return 10; // 0x2b6 Return
	
Label_658:
	var_297_bool = 0; // 0x292 PushV
	func_723(var_297_bool); // 0x293 NEW_2
	if(var_297_bool == 0) goto Label_664; // 0x295 JumpB
	var_284_bool = 1; // 0x296 MovB
	return 10; // 0x297 Return
	
Label_664:
	var_340_bool = 0; var_341_object = Obj(); // 0x298 PushV
	var_341_object = var_0_int; // 0x299 MovT
	func_1406(var_340_bool, var_341_object); // 0x29a NEW_2
	var_342_bool = var_340_bool == 0; // 0x29c Not
	if(var_342_bool == 0) goto Label_672; // 0x29d JumpB
	var_284_bool = 0; // 0x29e MovB
	return 10; // 0x29f Return
	
Label_672:
	GetPFPosition(var_292_cvector); // 0x2a0 TObjFunc
	GetPFPosition(var_293_cvector); // 0x2a2 Func
	var_294_cvector = var_292_cvector - var_293_cvector; // 0x2a4 Sub2
	var_295_float = var_294_cvector | var_294_cvector; // 0x2a5 Or2
	var_343_float = var_285_float * var_285_float; // 0x2a6 Mult
	var_344_bool = var_295_float < var_343_float; // 0x2a7 LT
	if(var_344_bool == 0) goto Label_687; // 0x2a8 JumpB
	var_345_bool = 0; var_346_float = 0; // 0x2a9 PushV
	var_346_float = var_285_float; // 0x2aa Mov
	func_488(var_295_float, var_345_bool, var_346_float); // 0x2ab NEW_2
	var_284_bool = 1; // 0x2ad MovB
	return 10; // 0x2ae Return
	
Label_687:
	sync(); // 0x2af Func
	goto Label_653; // 0x2b1 Jump
}


func_1292(var_396_float, var_397_object, var_398_float, var_399_int)
{
	var_403_int = 0; var_404_string = ""; var_405_int = 0; var_406_float = 0; var_407_float = 0; var_408_float = 0; var_409_int = 0; var_410_string = ""; var_411_int = 0; var_412_float = 0; var_413_float = 0; var_414_float = 0; // 0x50c PushV
	var_415_bool = 0; var_416_object = Obj(); var_417_string = ""; // 0x50d PushV
	var_416_object = var_397_object; // 0x50e Mov
	var_417_string = "health"; // 0x50f MovS
	func_1275(var_415_bool, var_416_object, var_417_string); // 0x510 NEW_2
	var_418_bool = var_415_bool == 0; // 0x512 Not
	if(var_418_bool == 0) goto Label_1302; // 0x513 JumpB
	var_396_float = 0.0; // 0x514 MovF
	return 12; // 0x515 Return
	
Label_1302:
	var_419_bool = 0; var_420_object = Obj(); var_421_string = ""; // 0x516 PushV
	var_420_object = var_397_object; // 0x517 Mov
	var_421_string = "armor"; // 0x518 MovS
	func_1275(var_419_bool, var_420_object, var_421_string); // 0x519 NEW_2
	var_422_bool = var_419_bool == 0; // 0x51b Not
	if(var_422_bool == 0) goto Label_1311; // 0x51c JumpB
	var_409_int = 0; // 0x51d MovI
	goto Label_1314; // 0x51e Jump
	
Label_1314:
	var_423_string = "armor_"; // 0x522 PushS
	var_424_string = ""; var_425_int = 0; // 0x523 PushV
	var_425_int = var_399_int; // 0x524 Mov
	func_1249(var_424_string, var_425_int); // 0x525 NEW_2
	var_410_string = var_423_string + var_424_string; // 0x527 Add2
	var_430_bool = 0; var_431_object = Obj(); var_432_string = ""; // 0x528 PushV
	var_431_object = var_397_object; // 0x529 Mov
	var_432_string = var_410_string; // 0x52a Mov
	func_1275(var_430_bool, var_431_object, var_432_string); // 0x52b NEW_2
	var_433_bool = var_430_bool == 0; // 0x52d Not
	if(var_433_bool == 0) goto Label_1329; // 0x52e JumpB
	var_411_int = 0; // 0x52f MovI
	goto Label_1331; // 0x530 Jump
	
Label_1331:
	var_434_float = 0; var_435_float = 0; var_436_float = 0; // 0x533 PushV
	var_437_int = var_409_int + var_411_int; // 0x534 Add
	var_438_float = 100.0; // 0x535 PushF
	var_435_float = var_437_int / var_437_int; // 0x536 Div2
	var_436_float = 1; // 0x537 MovI
	func_1665(var_434_float, var_435_float, var_436_float); // 0x538 NEW_2
	var_412_float = var_434_float; // 0x539 Mov
	var_440_string = "health"; // 0x53b PushS
	GetProperty(var_440_string, var_413_float); // 0x53c ObjFunc
	var_441_int = 1; // 0x53e PushI
	var_442_int = var_441_int - var_412_float; // 0x53f Sub
	var_414_float = var_398_float * var_442_int; // 0x540 Mult2
	var_443_string = "health"; // 0x541 PushS
	var_444_float = 0; var_445_float = 0; var_446_float = 0; var_447_float = 0; // 0x542 PushV
	var_445_float = var_413_float - var_414_float; // 0x543 Sub2
	var_446_float = 0; // 0x544 MovI
	var_447_float = 1; // 0x545 MovI
	func_1672(var_444_float, var_445_float, var_446_float, var_447_float); // 0x546 NEW_2
	SetProperty(var_443_string, var_444_float); // 0x548 ObjFunc
	var_450_bool = 0; var_451_object = Obj(); // 0x54a PushV
	var_451_object = var_397_object; // 0x54b Mov
	func_1270(var_450_bool, var_451_object); // 0x54c NEW_2
	if(var_450_bool == 0) goto Label_1363; // 0x54e JumpB
	var_452_float = 0; // 0x54f PushV
	var_452_float = -var_414_float; // 0x550 Neg2
	func_1688(var_452_float); // 0x551 NEW_2
	
Label_1363:
	var_396_float = var_414_float; // 0x553 Mov
	return 12; // 0x554 Return
	
Label_1329:
	GetProperty(var_410_string, var_411_int); // 0x531 ObjFunc
	
Label_1311:
	var_456_string = "armor"; // 0x51f PushS
	GetProperty(var_456_string, var_409_int); // 0x520 ObjFunc
}


func_910(var_2_object)
{
	var_12_int = 1; // 0x38e PushI
	KillTimer(var_12_int); // 0x38f Func
	var_13_object = var_2_object; // 0x391 PushT
	if(var_13_object == 0) goto Label_919; // 0x392 JumpB
	var_2_object = 0; // 0x393 TMovB
	var_14_string = "head"; // 0x394 PushS
	UnlookAsync(var_14_string); // 0x395 Func
	
Label_919:
	func_1076(var_11_object); // 0x398 NEW_2
	return 0; // 0x39a Return
}


func_784(var_0_int, var_247_bool)
{
	var_248_bool = 0; var_249_bool = 0; // 0x310 PushV
	var_250_string = "IsAttacking"; // 0x311 PushS
	var_251_int = 1; // 0x312 PushI
	var_252_bool = IsFuncExist(var_0_int, var_250_string, var_251_int); // 0x313 FuncExist
	if(var_252_bool == 0) goto Label_793; // 0x314 JumpB
	IsAttacking(var_249_bool); // 0x315 TObjFunc
	var_247_bool = var_249_bool; // 0x317 Mov
	return 2; // 0x318 Return
	
Label_793:
	var_247_bool = 0; // 0x319 MovB
	return 2; // 0x31a Return
}


func_1552(var_17_object, var_20_cvector, var_21_cvector)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); // 0x610 PushV
	GetScene(var_24_object); // 0x611 Func
	var_26_string = "scripted"; // 0x613 PushS
	var_27_string = "blood_dir.xml"; // 0x614 PushS
	AddActorByType(var_25_object, var_26_string, var_24_object, var_20_cvector, var_21_cvector, var_27_string); // 0x615 Func
	var_28_object = Obj(); // 0x617 PushV
	var_28_object = var_17_object; // 0x618 Mov
	func_1440(var_28_object); // 0x619 NEW_2
	return 4; // 0x61b Return
}


func_1683(var_38_bool, var_39_int, var_40_int)
{
	var_41_int = 0; var_42_int = 0; // 0x693 PushV
	irand(var_42_int, var_40_int); // 0x694 Func
	var_38_bool = var_42_int < var_39_int; // 0x696 LT2
	return 2; // 0x697 Return
}


func_1430(var_53_bool, var_54_cvector)
{
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_bool = 0; var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_bool = 0; // 0x596 PushV
	GetPosition(var_58_cvector); // 0x597 Func
	var_59_cvector = var_54_cvector - var_58_cvector; // 0x599 Sub2
	var_61_float = GetByIndex(var_59_cvector, 0); // 0x59a PushE
	var_62_float = GetByIndex(var_59_cvector, 2); // 0x59b PushE
	Rotate(var_61_float, var_62_float, var_60_bool); // 0x59c Func
	var_53_bool = var_60_bool; // 0x59e Mov
	return 6; // 0x59f Return
}


func_1688(var_452_float)
{
	var_453_object = Obj(); var_454_object = Obj(); // 0x698 PushV
	CreateFloatVector(var_454_object); // 0x699 Func
	add(var_452_float); // 0x69b ObjFunc
	var_455_int = 15; // 0x69d PushI
	SendWorldWndMessage(var_455_int, var_454_object); // 0x69e Func
	return 2; // 0x6a0 Return
}


func_154(var_1_bool)
{
	Stop(); // 0x9a Func
	var_1_bool = 1; // 0x9c TMovB
	return 0; // 0x9d Return
}


func_795(var_2_string, var_5_int)
{
	var_364_float = 0; var_365_int = 0; var_366_float = 0; var_367_int = 0; // 0x31b PushV
	var_368_bool = var_2_string == 0; // 0x31c Not
	if(var_368_bool == 0) goto Label_799; // 0x31d JumpB
	return 4; // 0x31e Return
	
Label_799:
	var_369_int = var_5_int; // 0x31f PushT
	if(var_369_int == 0) goto Label_807; // 0x320 JumpB
	var_370_int = -1; // 0x321 PushI
	var_5_int = var_5_int + var_370_int; // 0x322 Add2
	var_371_int = 0; // 0x323 PushI
	var_372_bool = var_5_int > var_371_int; // 0x324 GT
	if(var_372_bool == 0) goto Label_807; // 0x325 JumpB
	return 4; // 0x326 Return
	
Label_807:
	rand(var_366_float); // 0x327 Func
	var_373_float = 0; // 0x329 PushV
	func_845(var_373_float); // 0x32a NEW_2
	var_374_bool = var_366_float < var_373_float; // 0x32c LT
	if(var_374_bool == 0) goto Label_826; // 0x32d JumpB
	irand(var_367_int, var_366_float); // 0x32e Func
	var_375_int = 1; // 0x330 PushI
	var_367_int = var_367_int + var_375_int; // 0x331 Add2
	var_376_string = "attack"; // 0x332 PushS
	var_377_int = var_376_string + var_367_int; // 0x333 Add
	Speak(var_377_int); // 0x334 Func
	var_378_int = 0; // 0x336 PushV
	func_843(var_378_int); // 0x337 NEW_2
	var_5_int = var_378_int; // 0x338 TMov
	
Label_826:
	return 4; // 0x33a Return
}


func_414(var_1_bool, var_2_string, var_4_int)
{
	var_49_bool = 0; var_50_bool = 0; var_51_cvector = CVector(0,0,0); var_52_bool = 0; var_53_bool = 0; var_54_cvector = CVector(0,0,0); // 0x19e PushV
	var_1_bool = 0; // 0x19f TMovI
	
Label_416:
	var_55_string = "all"; // 0x1a0 PushS
	var_56_string = "attack_begin"; // 0x1a1 PushS
	var_57_int = 1; // 0x1a2 PushI
	var_58_int = var_1_bool + var_57_int; // 0x1a3 Add
	var_59_int = var_56_string + var_58_int; // 0x1a4 Add
	HasAnimation(var_52_bool, var_55_string, var_59_int); // 0x1a5 Func
	var_60_bool = var_52_bool == 0; // 0x1a7 Not
	if(var_60_bool == 0) goto Label_426; // 0x1a8 JumpB
	goto Label_429; // 0x1a9 Jump
	
Label_429:
	var_2_string = 0; // 0x1ad TMovI
	
Label_430:
	var_61_string = "attack"; // 0x1ae PushS
	var_62_int = 1; // 0x1af PushI
	var_63_int = var_2_string + var_62_int; // 0x1b0 Add
	var_64_int = var_61_string + var_63_int; // 0x1b1 Add
	IsExisting3DSound(var_53_bool, var_64_int); // 0x1b2 Func
	var_65_bool = var_53_bool == 0; // 0x1b4 Not
	if(var_65_bool == 0) goto Label_439; // 0x1b5 JumpB
	goto Label_442; // 0x1b6 Jump
	
Label_442:
	var_66_string = "all"; // 0x1ba PushS
	var_67_string = "bjump"; // 0x1bb PushS
	GetAnimationOffset(var_54_cvector, var_66_string, var_67_string); // 0x1bc Func
	var_68_float = GetByIndex(var_54_cvector, 2); // 0x1be PushE
	var_4_int = -var_68_float; // 0x1bf Neg2
	return 6; // 0x1c0 Return
	
Label_439:
	var_69_int = 1; // 0x1b7 PushI
	var_2_string = var_2_string + var_69_int; // 0x1b8 Add2
	goto Label_430; // 0x1b9 Jump
	
Label_426:
	var_70_int = 1; // 0x1aa PushI
	var_1_bool = var_1_bool + var_70_int; // 0x1ab Add2
	goto Label_416; // 0x1ac Jump
}


func_158()
{
	return 0; // 0x9f Return
}


func_160()
{
	var_20_object = Obj(); var_21_object = Obj(); // 0xa0 PushV
	var_22_string = "player"; // 0xa1 PushS
	FindActor(var_21_object, var_22_string); // 0xa2 Func
	var_23_bool = var_21_object == 0; // 0xa4 Not
	if(var_23_bool == 0) goto Label_167; // 0xa5 JumpB
	return 2; // 0xa6 Return
	
Label_167:
	var_24_object = Obj(); var_25_bool = 0; var_26_float = 0; // 0xa7 PushV
	var_24_object = var_21_object; // 0xa8 Mov
	var_25_bool = 1; // 0xa9 MovB
	var_26_float = 180.0; // 0xaa MovF
	func_185(var_17_bool, var_18_float, var_19_int, var_20_object, var_21_object, var_24_object, var_25_bool, var_26_float); // 0xab NEW_2
	var_515_int = 1; // 0xad PushI
	Sleep(var_515_int); // 0xae Func
	goto Label_167; // 0xb0 Jump
}


func_1566()
{
	var_231_cvector = CVector(0,0,0); var_232_cvector = CVector(0,0,0); var_233_cvector = CVector(0,0,0); var_234_cvector = CVector(0,0,0); var_235_cvector = CVector(0,0,0); var_236_cvector = CVector(0,0,0); // 0x61e PushV
	GetPosition(var_234_cvector); // 0x61f ObjFunc
	GetPosition(var_235_cvector); // 0x621 Func
	var_236_cvector = var_234_cvector - var_235_cvector; // 0x623 Sub2
	var_237_float = GetByIndex(var_236_cvector, 0); // 0x624 PushE
	var_238_float = GetByIndex(var_236_cvector, 2); // 0x625 PushE
	RotateAsync(var_237_float, var_238_float); // 0x626 Func
	return 6; // 0x628 Return
}


func_1698(var_15_bool, var_16_string, var_17_string)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x6a2 PushV
	FindActor(var_19_object, var_16_string); // 0x6a3 Func
	var_20_bool = var_19_object == 0; // 0x6a5 NullEq
	if(var_20_bool == 0) goto Label_1705; // 0x6a6 JumpB
	var_15_bool = 0; // 0x6a7 MovB
	return 2; // 0x6a8 Return
	
Label_1705:
	Trigger(var_19_object, var_17_string); // 0x6a9 Func
	var_15_bool = 1; // 0x6ab MovB
	return 2; // 0x6ac Return
}


func_1054(var_0_int, var_1_bool, var_19_int)
{
	var_20_int = 0; // 0x41f PushI
	var_21_bool = var_19_int != var_20_int; // 0x420 Neq
	if(var_21_bool == 0) goto Label_1059; // 0x421 JumpB
	return 0; // 0x422 Return
	
Label_1059:
	var_22_bool = 0; var_23_object = Obj(); // 0x423 PushV
	var_23_object = var_1_bool; // 0x424 MovT
	func_1092(var_22_bool, var_23_object); // 0x425 NEW_2
	var_58_bool = var_22_bool == 0; // 0x427 Not
	if(var_58_bool == 0) goto Label_1066; // 0x428 JumpB
	var_0_int = 1; // 0x429 TMovB
	
Label_1066:
	var_59_int = 0; // 0x42a PushI
	KillTimer(var_59_int); // 0x42b Func
	Stop(); // 0x42d Func
	return 0; // 0x42f Return
}


func_1440(var_28_object)
{
	var_29_bool = 0; var_30_int = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_string = ""; var_36_bool = 0; var_37_int = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_string = ""; // 0x5a0 PushV
	var_43_bool = var_28_object == 0; // 0x5a1 NullEq
	if(var_43_bool == 0) goto Label_1444; // 0x5a2 JumpB
	return 14; // 0x5a3 Return
	
Label_1444:
	IsDead(var_36_bool); // 0x5a4 Func
	var_44_bool = var_36_bool; // 0x5a6 Push
	if(var_44_bool == 0) goto Label_1449; // 0x5a7 JumpB
	return 14; // 0x5a8 Return
	
Label_1449:
	GetSecondaryAnimationType(var_37_int); // 0x5a9 Func
	var_45_int = 0; // 0x5ab PushI
	var_46_bool = var_37_int < var_45_int; // 0x5ac LT
	if(var_46_bool == 0) goto Label_1455; // 0x5ad JumpB
	return 14; // 0x5ae Return
	
Label_1455:
	GetPosition(var_38_cvector); // 0x5af ObjFunc
	GetPosition(var_39_cvector); // 0x5b1 Func
	GetDirection(var_40_cvector); // 0x5b3 Func
	var_41_cvector = var_39_cvector - var_38_cvector; // 0x5b5 Sub2
	var_47_float = GetByIndex(var_41_cvector, 0); // 0x5b6 PushE
	var_48_float = GetByIndex(var_40_cvector, 0); // 0x5b7 PushE
	var_49_float = var_47_float * var_48_float; // 0x5b8 Mult
	var_50_float = GetByIndex(var_41_cvector, 2); // 0x5b9 PushE
	var_51_float = GetByIndex(var_40_cvector, 2); // 0x5ba PushE
	var_52_float = var_50_float * var_51_float; // 0x5bb Mult
	var_53_int = var_49_float + var_52_float; // 0x5bc Add
	var_54_int = 0; // 0x5bd PushI
	var_55_bool = var_53_int >= var_54_int; // 0x5be GE
	if(var_55_bool == 0) goto Label_1474; // 0x5bf JumpB
	var_42_string = "fhit"; // 0x5c0 MovS
	goto Label_1475; // 0x5c1 Jump
	
Label_1475:
	var_56_string = "hit_react"; // 0x5c3 PushS
	var_57_string = "1"; // 0x5c4 PushS
	var_58_int = var_42_string + var_57_string; // 0x5c5 Add
	var_59_string = "2"; // 0x5c6 PushS
	var_60_int = var_42_string + var_59_string; // 0x5c7 Add
	var_61_int = -10; // 0x5c8 PushI
	FadeSecondaryAnimation(var_56_string, var_58_int, var_60_int, var_61_int); // 0x5c9 Func
	return 14; // 0x5cb Return
	
Label_1474:
	var_42_string = "bhit"; // 0x5c2 MovS
}


func_1577(var_11_bool)
{
	var_12_bool = 0; var_13_bool = 0; // 0x629 PushV
	IsLoaded(var_13_bool); // 0x62a Func
	var_11_bool = var_13_bool; // 0x62c Mov
	return 2; // 0x62d Return
}


func_1710(var_14_object)
{
	var_15_bool = 0; var_16_bool = 0; // 0x6ae PushV
	IsPlayerActor(var_14_object, var_16_bool); // 0x6af Func
	var_17_bool = var_16_bool; // 0x6b1 Push
	if(var_17_bool == 0) goto Label_1718; // 0x6b2 JumpB
	var_18_string = "attack"; // 0x6b3 PushS
	PlayGlobalMusic(var_18_string); // 0x6b4 Func
	
Label_1718:
	return 2; // 0x6b6 Return
}


func_1582(var_15_object)
{
	var_16_float = 0; var_17_cvector = CVector(0,0,0); var_18_float = 0; var_19_cvector = CVector(0,0,0); // 0x62e PushV
	GetEyesHeight(var_18_float); // 0x62f ObjFunc
	var_19_cvector = CVector(0.0, 0.0, 0.0); // 0x631 MovV
	var_20_float = GetByIndex(var_19_cvector, 1); // 0x632 PushE
	var_20_float = var_18_float; // 0x633 Mov
	SetByIndex(var_19_cvector, 1) = var_20_float; // 0x634 PopE
	var_21_string = "head"; // 0x635 PushS
	LookAsync(var_15_object, var_21_string, var_19_cvector); // 0x636 Func
	return 4; // 0x638 Return
}


func_179(var_393_float)
{
	var_393_float = 0.2; // 0xb4 MovF
	return 0; // 0xb5 Return
}


func_1076(var_0_int)
{
	var_0_int = 1; // 0x434 TMovB
	var_15_int = 0; // 0x435 PushI
	KillTimer(var_15_int); // 0x436 Func
	Stop(); // 0x438 Func
	return 0; // 0x43a Return
}


func_182(var_400_int)
{
	var_400_int = 0; // 0xb7 MovI
	return 0; // 0xb8 Return
}


func_1719()
{
	var_357_object = Obj(); var_358_object = Obj(); // 0x6b7 PushV
	GetScene(var_358_object); // 0x6b8 Func
	var_359_string = "battle"; // 0x6ba PushS
	var_360_object = Obj(); // 0x6bb PushV
	func_1649(var_360_object); // 0x6bc NEW_2
	BroadcastMessage(var_359_string, var_360_object, var_358_object); // 0x6be Func
	return 2; // 0x6c0 Return
}


func_695(var_0_int, var_299_bool)
{
	var_300_cvector = CVector(0,0,0); var_301_cvector = CVector(0,0,0); var_302_cvector = CVector(0,0,0); var_303_float = 0; var_304_float = 0; var_305_cvector = CVector(0,0,0); var_306_cvector = CVector(0,0,0); var_307_cvector = CVector(0,0,0); var_308_float = 0; var_309_float = 0; // 0x2b7 PushV
	var_310_bool = 0; var_311_object = Obj(); // 0x2b8 PushV
	var_311_object = var_0_int; // 0x2b9 MovT
	func_1406(var_310_bool, var_311_object); // 0x2ba NEW_2
	var_312_bool = var_310_bool == 0; // 0x2bc Not
	if(var_312_bool == 0) goto Label_704; // 0x2bd JumpB
	var_299_bool = 0; // 0x2be MovB
	return 10; // 0x2bf Return
	
Label_704:
	var_313_bool = 0; // 0x2c0 PushV
	func_784(var_309_float, var_313_bool); // 0x2c1 NEW_2
	if(var_313_bool == 0) goto Label_721; // 0x2c3 JumpB
	GetPFPosition(var_305_cvector); // 0x2c4 TObjFunc
	GetPFPosition(var_306_cvector); // 0x2c6 Func
	var_307_cvector = var_305_cvector - var_306_cvector; // 0x2c8 Sub2
	var_308_float = var_307_cvector | var_307_cvector; // 0x2c9 Or2
	GetAttackDistance(var_309_float); // 0x2ca TObjFunc
	var_314_int = 50; // 0x2cc PushI
	var_309_float = var_309_float + var_314_int; // 0x2cd Add2
	var_315_float = var_309_float * var_309_float; // 0x2ce Mult
	var_299_bool = var_308_float <= var_315_float; // 0x2cf LE2
	return 10; // 0x2d0 Return
	
Label_721:
	var_299_bool = 0; // 0x2d1 MovB
	return 10; // 0x2d2 Return
}


func_185(var_0_int, var_3_object, var_5_int, var_24_object, var_25_bool, var_26_float, var_133_bool, var_225_bool)
{
	var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_bool = 0; var_31_bool = 0; var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_bool = 0; var_37_float = 0; var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; var_42_bool = 0; var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_float = 0; var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_float = 0; // 0xb9 PushV
	func_414(var_46_cvector, var_47_bool, var_48_float); // 0xbb NEW_2
	var_5_int = 0; // 0xbd TMovI
	var_71_string = "@GetAttackDistance"; // 0xbe PushS
	var_72_int = 1; // 0xbf PushI
	var_73_bool = IsFuncExist(var_24_object, var_71_string, var_72_int); // 0xc0 FuncExist
	if(var_73_bool == 0) goto Label_199; // 0xc1 JumpB
	GetAttackDistance(var_38_float); // 0xc2 ObjFunc
	var_74_int = 50; // 0xc4 PushI
	var_38_float = var_38_float + var_74_int; // 0xc5 Add2
	goto Label_200; // 0xc6 Jump
	
Label_200:
	var_75_int = 150; // 0xc8 PushI
	var_76_bool = var_38_float >= var_75_int; // 0xc9 GE
	if(var_76_bool == 0) goto Label_204; // 0xca JumpB
	var_38_float = 150; // 0xcb MovI
	
Label_204:
	var_3_object = 0; // 0xcc TMovB
	var_0_int = var_24_object; // 0xcd TMov
	IsPlayerActor(var_0_int, var_41_bool); // 0xce Func
	var_77_bool = var_41_bool; // 0xd0 Push
	if(var_77_bool == 0) goto Label_218; // 0xd1 JumpB
	var_78_string = "attack"; // 0xd2 PushS
	PlayGlobalMusic(var_78_string); // 0xd3 Func
	var_79_object = Obj(); // 0xd5 PushV
	func_1649(var_79_object); // 0xd6 NEW_2
	SendPlayerEnemy(var_24_object, var_79_object); // 0xd8 Func
	
Label_218:
	var_82_bool = var_25_bool; // 0xda Push
	if(var_82_bool == 0) goto Label_222; // 0xdb JumpB
	var_42_bool = 0; // 0xdc MovB
	goto Label_223; // 0xdd Jump
	
Label_223:
	var_83_float = 400.0; // 0xdf PushF
	var_43_float = var_83_float + var_38_float; // 0xe0 Add2
	
Label_225:
	var_84_bool = 0; // 0xe1 PushV
	var_84_bool = 0; // 0xe2 MovB
	var_85_bool = 0; var_86_object = Obj(); // 0xe3 PushV
	var_86_object = var_0_int; // 0xe4 MovT
	func_1406(var_85_bool, var_86_object); // 0xe5 NEW_2
	if(var_85_bool == 0) goto Label_235; // 0xe7 JumpB
	var_119_bool = var_3_object == 0; // 0xe8 Not
	if(var_119_bool == 0) goto Label_235; // 0xe9 JumpB
	var_84_bool = 1; // 0xea MovB
	
Label_235:
	if(var_84_bool == 0) goto Label_397; // 0xeb JumpB
	func_827(var_48_float); // 0xed NEW_2
	GetPFPosition(var_39_cvector); // 0xef TObjFunc
	GetPFPosition(var_40_cvector); // 0xf1 Func
	var_44_cvector = var_39_cvector - var_40_cvector; // 0xf3 Sub2
	var_45_float = var_44_cvector | var_44_cvector; // 0xf4 Or2
	var_125_float = var_43_float * var_43_float; // 0xf5 Mult
	var_126_bool = var_45_float >= var_125_float; // 0xf6 GE
	if(var_126_bool == 0) goto Label_263; // 0xf7 JumpB
	var_127_bool = 0; var_128_object = Obj(); var_129_float = 0; var_130_float = 0; var_131_bool = 0; var_132_bool = 0; // 0xf8 PushV
	var_128_object = var_0_int; // 0xf9 MovT
	var_129_float = var_38_float; // 0xfa Mov
	var_130_float = 10000.0; // 0xfb MovF
	var_131_bool = 1; // 0xfc MovB
	var_132_bool = 0; // 0xfd MovB
	TaskCall(3); // 0xfe TaskCall
	func_847(var_135_bool, var_127_bool, var_128_object, var_129_float, var_130_float, var_131_bool, var_132_bool); // 0xff NEW_2
	TaskReturn(); // 0x100 TaskReturn
	var_210_bool = var_133_bool == 0; // 0x102 Not
	if(var_210_bool == 0) goto Label_261; // 0x103 JumpB
	goto Label_397; // 0x104 Jump
	
Label_397:
	WaitForAnimEnd(); // 0x18d Func
	var_211_object = var_3_object; // 0x18f PushT
	if(var_211_object == 0) goto Label_402; // 0x190 JumpB
	return 22; // 0x191 Return
	
Label_402:
	var_212_string = "all"; // 0x192 PushS
	var_213_string = "attack_off"; // 0x193 PushS
	PlayAnimation(var_212_string, var_213_string); // 0x194 Func
	WaitForAnimEnd(); // 0x196 Func
	var_214_bool = var_41_bool; // 0x198 Push
	if(var_214_bool == 0) goto Label_413; // 0x199 JumpB
	var_215_float = 2.0; // 0x19a PushF
	Sleep(var_215_float); // 0x19b Func
	
Label_413:
	return 22; // 0x19d Return
	
Label_261:
	var_42_bool = 0; // 0x105 MovB
	goto Label_396; // 0x106 Jump
	
Label_396:
	goto Label_225; // 0x18c Jump
	
Label_263:
	var_216_float = var_26_float * var_26_float; // 0x107 Mult
	var_217_bool = var_45_float >= var_216_float; // 0x108 GE
	if(var_217_bool == 0) goto Label_388; // 0x109 JumpB
	GetPFPosition(var_46_cvector); // 0x10a TObjFunc
	CanReachByPF(var_47_bool, var_46_cvector); // 0x10c Func
	var_218_bool = var_47_bool == 0; // 0x10e Not
	if(var_218_bool == 0) goto Label_287; // 0x10f JumpB
	var_219_bool = 0; var_220_object = Obj(); var_221_float = 0; var_222_float = 0; var_223_bool = 0; var_224_bool = 0; // 0x110 PushV
	var_220_object = var_0_int; // 0x111 MovT
	var_221_float = var_38_float; // 0x112 Mov
	var_222_float = 10000.0; // 0x113 MovF
	var_223_bool = 1; // 0x114 MovB
	var_224_bool = 0; // 0x115 MovB
	TaskCall(3); // 0x116 TaskCall
	func_847(var_227_bool, var_219_bool, var_220_object, var_221_float, var_222_float, var_223_bool, var_224_bool); // 0x117 NEW_2
	TaskReturn(); // 0x118 TaskReturn
	var_228_bool = var_225_bool == 0; // 0x11a Not
	if(var_228_bool == 0) goto Label_285; // 0x11b JumpB
	goto Label_397; // 0x11c Jump
	
Label_285:
	var_42_bool = 0; // 0x11d MovB
	goto Label_225; // 0x11e Jump
	
Label_287:
	var_229_bool = var_42_bool == 0; // 0x11f Not
	if(var_229_bool == 0) goto Label_312; // 0x120 JumpB
	var_230_object = Obj(); // 0x121 PushV
	var_230_object = var_0_int; // 0x122 MovT
	func_1566(); // 0x123 NEW_2
	var_239_string = "all"; // 0x125 PushS
	var_240_string = "attack_on"; // 0x126 PushS
	PlayAnimation(var_239_string, var_240_string); // 0x127 Func
	WaitForAnimEnd(); // 0x129 Func
	func_827(var_48_float); // 0x12c NEW_2
	StopAsync(); // 0x12e Func
	var_42_bool = 1; // 0x130 MovB
	var_241_bool = 0; var_242_object = Obj(); // 0x131 PushV
	var_242_object = var_0_int; // 0x132 MovT
	func_1406(var_241_bool, var_242_object); // 0x133 NEW_2
	var_243_bool = var_241_bool == 0; // 0x135 Not
	if(var_243_bool == 0) goto Label_312; // 0x136 JumpB
	goto Label_397; // 0x137 Jump
	
Label_312:
	rand(var_48_float); // 0x138 Func
	var_244_bool = 0; // 0x13a PushV
	var_244_bool = 1; // 0x13b MovB
	var_245_float = 0.25; // 0x13c PushF
	var_246_bool = var_48_float < var_245_float; // 0x13d LT
	if(var_246_bool == 0) goto Label_324; // 0x13e JumpB
	var_247_bool = 0; // 0x13f PushV
	func_784(var_244_bool, var_247_bool); // 0x140 NEW_2
	if(var_247_bool == 0) goto Label_324; // 0x142 JumpB
	var_244_bool = 0; // 0x143 MovB
	
Label_324:
	if(var_244_bool == 0) goto Label_341; // 0x144 JumpB
	Face(var_0_int); // 0x145 Func
	func_834(); // 0x148 NEW_2
	var_282_string = "all"; // 0x14a PushS
	var_283_string = "attack_stay"; // 0x14b PushS
	PlayAnimation(var_282_string, var_283_string); // 0x14c Func
	var_284_bool = 0; var_285_float = 0; // 0x14e PushV
	var_285_float = var_26_float; // 0x14f Mov
	func_652(var_48_float, var_284_bool, var_285_float); // 0x150 NEW_2
	StopAsync(); // 0x152 Func
	goto Label_387; // 0x154 Jump
	
Label_387:
	goto Label_396; // 0x183 Jump
	
Label_341:
	Face(var_0_int); // 0x155 Func
	var_499_string = "all"; // 0x157 PushS
	var_500_string = "fjump"; // 0x158 PushS
	PlayAnimation(var_499_string, var_500_string); // 0x159 Func
	WaitForAnimEnd(); // 0x15b Func
	func_827(var_48_float); // 0x15e NEW_2
	var_501_cvector = CVector(0.0, 0.0, 0.0); // 0x160 PushVec
	SetSpeed(var_501_cvector); // 0x161 Func
	Stop(); // 0x163 Func
	StopAsync(); // 0x165 Func
	var_502_bool = 0; // 0x167 PushV
	func_784(var_48_float, var_502_bool); // 0x168 NEW_2
	var_503_bool = var_502_bool == 0; // 0x16a Not
	if(var_503_bool == 0) goto Label_387; // 0x16b JumpB
	var_504_bool = 0; var_505_object = Obj(); // 0x16c PushV
	var_505_object = var_0_int; // 0x16d MovT
	func_1406(var_504_bool, var_505_object); // 0x16e NEW_2
	var_506_bool = var_504_bool == 0; // 0x170 Not
	if(var_506_bool == 0) goto Label_371; // 0x171 JumpB
	goto Label_397; // 0x172 Jump
	
Label_371:
	GetPFPosition(var_39_cvector); // 0x173 TObjFunc
	GetPFPosition(var_40_cvector); // 0x175 Func
	var_44_cvector = var_39_cvector - var_40_cvector; // 0x177 Sub2
	var_45_float = var_44_cvector | var_44_cvector; // 0x178 Or2
	var_507_float = var_26_float * var_26_float; // 0x179 Mult
	var_508_bool = var_45_float < var_507_float; // 0x17a LT
	if(var_508_bool == 0) goto Label_387; // 0x17b JumpB
	var_509_bool = 0; var_510_float = 0; // 0x17c PushV
	var_510_float = var_26_float; // 0x17d Mov
	func_488(var_48_float, var_509_bool, var_510_float); // 0x17e NEW_2
	var_511_bool = var_509_bool == 0; // 0x180 Not
	if(var_511_bool == 0) goto Label_387; // 0x181 JumpB
	goto Label_397; // 0x182 Jump
	
Label_388:
	var_512_bool = 0; var_513_float = 0; // 0x184 PushV
	var_513_float = var_26_float; // 0x185 Mov
	func_488(var_48_float, var_512_bool, var_513_float); // 0x186 NEW_2
	var_514_bool = var_512_bool == 0; // 0x188 Not
	if(var_514_bool == 0) goto Label_395; // 0x189 JumpB
	goto Label_397; // 0x18a Jump
	
Label_395:
	var_42_bool = 1; // 0x18b MovB
	
Label_222:
	var_42_bool = 1; // 0xde MovB
	
Label_199:
	var_38_float = var_26_float; // 0xc7 Mov
}


func_57(var_0_int, var_17_bool, var_18_string, var_19_int)
{
	var_24_object = Obj(); var_25_bool = 0; var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_bool = 0; var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_bool = 0; var_34_object = Obj(); var_35_bool = 0; var_36_bool = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_bool = 0; var_40_bool = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_bool = 0; // 0x39 PushV
	GetScene(var_34_object); // 0x3a Func
	var_0_int = 0; // 0x3c TMovI
	
Label_61:
	var_44_int = 1; // 0x3d PushI
	var_45_int = var_0_int + var_44_int; // 0x3e Add
	var_46_int = var_18_string + var_45_int; // 0x3f Add
	GetLocator(var_46_int, var_35_bool); // 0x40 ObjFunc
	var_47_bool = var_35_bool == 0; // 0x42 Not
	if(var_47_bool == 0) goto Label_69; // 0x43 JumpB
	goto Label_72; // 0x44 Jump
	
Label_72:
	var_48_bool = var_0_int == 0; // 0x48 Not
	if(var_48_bool == 0) goto Label_76; // 0x49 JumpB
	var_17_bool = 0; // 0x4a MovB
	return 20; // 0x4b Return
	
Label_76:
	var_49_bool = var_19_int < var_0_int; // 0x4c LT
	if(var_49_bool == 0) goto Label_111; // 0x4d JumpB
	var_50_int = 1; // 0x4e PushI
	var_51_int = var_19_int + var_50_int; // 0x4f Add
	var_52_int = var_18_string + var_51_int; // 0x50 Add
	GetLocator(var_52_int, var_36_bool, var_37_cvector, var_38_cvector); // 0x51 ObjFunc
	var_53_bool = 0; var_54_cvector = CVector(0,0,0); // 0x53 PushV
	var_54_cvector = var_37_cvector; // 0x54 Mov
	func_1430(var_53_bool, var_54_cvector); // 0x55 NEW_2
	if(var_53_bool == 0) goto Label_106; // 0x57 JumpB
	var_63_int = 0; // 0x58 PushI
	MovePoint(var_37_cvector, var_63_int, var_39_bool); // 0x59 Func
	var_64_bool = var_39_bool; // 0x5b Push
	if(var_64_bool == 0) goto Label_106; // 0x5c JumpB
	WaitForAnimEnd(var_39_bool); // 0x5d Func
	var_65_bool = var_39_bool; // 0x5f Push
	if(var_65_bool == 0) goto Label_106; // 0x60 JumpB
	var_66_int = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); // 0x61 PushV
	var_66_int = var_19_int; // 0x62 Mov
	var_67_cvector = var_37_cvector; // 0x63 Mov
	var_68_cvector = var_38_cvector; // 0x64 Mov
	func_158(); // 0x65 NEW_2
	var_69_int = 1; // 0x67 PushI
	var_19_int = var_19_int + var_69_int; // 0x68 Add2
	goto Label_76; // 0x69 Jump
	
Label_106:
	var_70_bool = var_1_bool; // 0x6a PushT
	if(var_70_bool == 0) goto Label_110; // 0x6b JumpB
	var_17_bool = 1; // 0x6c MovB
	return 20; // 0x6d Return
	
Label_110:
	goto Label_76; // 0x6e Jump
	
Label_111:
	var_71_int = 2; // 0x6f PushI
	var_19_int = var_0_int - var_71_int; // 0x70 Sub2
	
Label_113:
	var_72_int = 0; // 0x71 PushI
	var_73_bool = var_19_int >= var_72_int; // 0x72 GE
	if(var_73_bool == 0) goto Label_149; // 0x73 JumpB
	var_74_int = 1; // 0x74 PushI
	var_75_int = var_19_int + var_74_int; // 0x75 Add
	var_76_int = var_18_string + var_75_int; // 0x76 Add
	GetLocator(var_76_int, var_40_bool, var_41_cvector, var_42_cvector); // 0x77 ObjFunc
	var_77_bool = 0; var_78_cvector = CVector(0,0,0); // 0x79 PushV
	var_78_cvector = var_41_cvector; // 0x7a Mov
	func_1430(var_77_bool, var_78_cvector); // 0x7b NEW_2
	if(var_77_bool == 0) goto Label_144; // 0x7d JumpB
	var_79_int = 0; // 0x7e PushI
	MovePoint(var_41_cvector, var_79_int, var_43_bool); // 0x7f Func
	var_80_bool = var_43_bool; // 0x81 Push
	if(var_80_bool == 0) goto Label_144; // 0x82 JumpB
	WaitForAnimEnd(var_43_bool); // 0x83 Func
	var_81_bool = var_43_bool; // 0x85 Push
	if(var_81_bool == 0) goto Label_144; // 0x86 JumpB
	var_82_int = 0; var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); // 0x87 PushV
	var_82_int = var_19_int; // 0x88 Mov
	var_83_cvector = var_41_cvector; // 0x89 Mov
	var_84_cvector = var_42_cvector; // 0x8a Mov
	func_158(); // 0x8b NEW_2
	var_85_int = -1; // 0x8d PushI
	var_19_int = var_19_int + var_85_int; // 0x8e Add2
	goto Label_113; // 0x8f Jump
	
Label_144:
	var_86_bool = var_1_bool; // 0x90 PushT
	if(var_86_bool == 0) goto Label_148; // 0x91 JumpB
	var_17_bool = 1; // 0x92 MovB
	return 20; // 0x93 Return
	
Label_148:
	goto Label_113; // 0x94 Jump
	
Label_149:
	var_19_int = 0; // 0x95 MovI
	goto Label_76; // 0x96 Jump
	
Label_69:
	var_87_int = 1; // 0x45 PushI
	var_0_int = var_0_int + var_87_int; // 0x46 Add2
	goto Label_61; // 0x47 Jump
}


func_827(var_0_int)
{
	var_120_object = Obj(); // 0x33b PushV
	var_120_object = var_0_int; // 0x33c MovT
	func_1710(var_120_object); // 0x33d NEW_2
	return 0; // 0x33f Return
}


func_952(var_0_int, var_1_bool, var_156_bool, var_157_object, var_158_float, var_159_float, var_160_bool, var_161_bool)
{
	var_162_bool = 0; var_163_bool = 0; var_164_object = Obj(); var_165_cvector = CVector(0,0,0); var_166_cvector = CVector(0,0,0); var_167_cvector = CVector(0,0,0); var_168_float = 0; var_169_object = Obj(); var_170_bool = 0; var_171_bool = 0; var_172_object = Obj(); var_173_cvector = CVector(0,0,0); var_174_cvector = CVector(0,0,0); var_175_cvector = CVector(0,0,0); var_176_float = 0; var_177_object = Obj(); // 0x3b8 PushV
	var_0_int = 0; // 0x3b9 TMovB
	var_1_bool = var_157_object; // 0x3ba TMov
	var_171_bool = var_161_bool; // 0x3bb Mov
	
Label_956:
	var_178_bool = 0; var_179_object = Obj(); // 0x3bc PushV
	var_179_object = var_157_object; // 0x3bd Mov
	func_1092(var_178_bool, var_179_object); // 0x3be NEW_2
	var_182_bool = var_178_bool == 0; // 0x3c0 Not
	if(var_182_bool == 0) goto Label_964; // 0x3c1 JumpB
	var_156_bool = 0; // 0x3c2 MovB
	return 16; // 0x3c3 Return
	
Label_964:
	GetPosition(var_173_cvector); // 0x3c4 ObjFunc
	GetPosition(var_174_cvector); // 0x3c6 Func
	var_175_cvector = var_173_cvector - var_174_cvector; // 0x3c8 Sub2
	var_176_float = var_175_cvector | var_175_cvector; // 0x3c9 Or2
	var_183_bool = 0; // 0x3ca PushV
	var_183_bool = 0; // 0x3cb MovB
	var_184_int = 0; // 0x3cc PushI
	var_185_bool = var_159_float > var_184_int; // 0x3cd GT
	if(var_185_bool == 0) goto Label_979; // 0x3ce JumpB
	var_186_float = var_159_float * var_159_float; // 0x3cf Mult
	var_187_bool = var_176_float > var_186_float; // 0x3d0 GT
	if(var_187_bool == 0) goto Label_979; // 0x3d1 JumpB
	var_183_bool = 1; // 0x3d2 MovB
	
Label_979:
	if(var_183_bool == 0) goto Label_984; // 0x3d3 JumpB
	Stop(); // 0x3d4 Func
	var_156_bool = 0; // 0x3d6 MovB
	return 16; // 0x3d7 Return
	
Label_984:
	var_188_float = var_158_float * var_158_float; // 0x3d8 Mult
	var_189_bool = var_176_float > var_188_float; // 0x3d9 GT
	if(var_189_bool == 0) goto Label_1046; // 0x3da JumpB
	GetPFPosition(var_173_cvector); // 0x3db ObjFunc
	FindPathTo(var_177_object, var_173_cvector); // 0x3dd Func
	var_190_bool = var_177_object != 0; // 0x3df NullNeq
	if(var_190_bool == 0) goto Label_995; // 0x3e0 JumpB
	var_172_object = var_177_object; // 0x3e1 Mov
	var_177_object = 0; // 0x3e2 SetNull
	
Label_995:
	var_191_bool = var_172_object != 0; // 0x3e3 NullNeq
	if(var_191_bool == 0) goto Label_1028; // 0x3e4 JumpB
	var_192_bool = var_171_bool; // 0x3e5 Push
	if(var_192_bool == 0) goto Label_1005; // 0x3e6 JumpB
	var_171_bool = 0; // 0x3e7 MovB
	RotatePath(var_172_object, var_170_bool); // 0x3e8 Func
	var_193_bool = var_170_bool == 0; // 0x3ea Not
	if(var_193_bool == 0) goto Label_1005; // 0x3eb JumpB
	goto Label_1052; // 0x3ec Jump
	
Label_1052:
	var_156_bool = !var_0_int; // 0x41c Not2
	return 16; // 0x41d Return
	
Label_1005:
	var_194_int = 0; // 0x3ed PushI
	var_195_float = 0.3; // 0x3ee PushF
	SetTimer(var_194_int, var_195_float); // 0x3ef Func
	var_196_string = ""; // 0x3f1 PushV
	func_1099(var_196_string); // 0x3f2 NEW_2
	var_197_string = ""; // 0x3f4 PushV
	func_1101(var_197_string); // 0x3f5 NEW_2
	FollowPath(var_172_object, var_160_bool, var_170_bool, var_196_string, var_197_string); // 0x3f7 Func
	var_198_bool = var_170_bool == 0; // 0x3f9 Not
	if(var_198_bool == 0) goto Label_1026; // 0x3fa JumpB
	var_199_int = var_0_int; // 0x3fb PushT
	if(var_199_int == 0) goto Label_1024; // 0x3fc JumpB
	var_172_object = 0; // 0x3fd SetNull
	goto Label_1052; // 0x3fe Jump
	
Label_1024:
	goto Label_1051; // 0x400 Jump
	
Label_1051:
	goto Label_956; // 0x41b Jump
	
Label_1026:
	var_172_object = 0; // 0x402 SetNull
	goto Label_1044; // 0x403 Jump
	
Label_1044:
	var_177_object = 0; // 0x414 SetNull
	goto Label_1050; // 0x415 Jump
	
Label_1050:
	var_172_object = 0; // 0x41a SetNull
	
Label_1028:
	var_200_int = 0; // 0x404 PushI
	KillTimer(var_200_int); // 0x405 Func
	var_201_float = 0.5; // 0x407 PushF
	Sleep(var_201_float, var_170_bool); // 0x408 Func
	var_202_bool = var_170_bool == 0; // 0x40a Not
	if(var_202_bool == 0) goto Label_1040; // 0x40b JumpB
	var_203_int = var_0_int; // 0x40c PushT
	if(var_203_int == 0) goto Label_1040; // 0x40d JumpB
	var_172_object = 0; // 0x40e SetNull
	goto Label_1052; // 0x40f Jump
	
Label_1040:
	var_204_int = 0; // 0x410 PushI
	var_205_float = 0.3; // 0x411 PushF
	SetTimer(var_204_int, var_205_float); // 0x412 Func
	
Label_1046:
	var_206_int = 0; // 0x416 PushI
	KillTimer(var_206_int); // 0x417 Func
	goto Label_1052; // 0x419 Jump
}


func_1593(var_30_string, var_31_int, var_32_int, var_33_int)
{
	var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_bool = 0; // 0x639 PushV
	var_38_bool = 0; var_39_int = 0; var_40_int = 0; // 0x63a PushV
	var_39_int = var_31_int; // 0x63b Mov
	var_40_int = var_32_int; // 0x63c Mov
	func_1683(var_38_bool, var_39_int, var_40_int); // 0x63d NEW_2
	if(var_38_bool == 0) goto Label_1607; // 0x63f JumpB
	irand(var_36_int, var_33_int); // 0x640 Func
	var_43_int = 0; // 0x642 PushI
	var_44_int = 1; // 0x643 PushI
	var_45_int = var_36_int + var_44_int; // 0x644 Add
	AddItem(var_37_bool, var_30_string, var_43_int, var_45_int); // 0x645 Func
	
Label_1607:
	return 4; // 0x647 Return
}


func_832(var_457_int)
{
	var_457_int = 0; // 0x340 MovI
	return 0; // 0x341 Return
}


func_449(var_0_int, var_382_float, var_383_int)
{
	var_384_object = Obj(); var_385_float = 0; var_386_float = 0; var_387_object = Obj(); var_388_float = 0; var_389_float = 0; // 0x1c1 PushV
	var_390_float = 0.9; // 0x1c2 PushF
	var_391_float = var_382_float * var_390_float; // 0x1c3 Mult
	GetVictim(var_391_float, var_387_object); // 0x1c4 Func
	ReportAttack(var_0_int); // 0x1c6 Func
	var_392_bool = var_387_object == var_0_int; // 0x1c8 Eq
	if(var_392_bool == 0) goto Label_486; // 0x1c9 JumpB
	var_393_float = 0; var_394_object = Obj(); var_395_int = 0; // 0x1ca PushV
	var_394_object = var_387_object; // 0x1cb Mov
	var_395_int = var_383_int; // 0x1cc Mov
	func_179(var_395_int); // 0x1cd NEW_2
	var_388_float = var_393_float; // 0x1ce Mov
	var_396_float = 0; var_397_object = Obj(); var_398_float = 0; var_399_int = 0; // 0x1d0 PushV
	var_397_object = var_387_object; // 0x1d1 Mov
	var_398_float = var_388_float; // 0x1d2 Mov
	var_400_int = 0; var_401_object = Obj(); var_402_int = 0; // 0x1d3 PushV
	var_401_object = var_387_object; // 0x1d4 Mov
	var_402_int = var_383_int; // 0x1d5 Mov
	func_182(var_402_int); // 0x1d6 NEW_2
	var_399_int = var_400_int; // 0x1d7 Mov
	func_1292(var_396_float, var_397_object, var_398_float, var_399_int); // 0x1d9 NEW_2
	var_389_float = var_396_float; // 0x1da Mov
	var_457_int = 0; // 0x1dc PushV
	func_832(var_457_int); // 0x1dd NEW_2
	ReportHit(var_0_int, var_457_int, var_389_float, var_388_float); // 0x1df Func
	var_458_object = Obj(); var_459_float = 0; // 0x1e1 PushV
	var_458_object = var_387_object; // 0x1e2 Mov
	var_459_float = var_389_float; // 0x1e3 Mov
	func_839(); // 0x1e4 NEW_2
	
Label_486:
	return 6; // 0x1e6 Return
}


func_834()
{
	var_253_string = ""; // 0x342 PushV
	var_253_string = "attack_stay"; // 0x343 MovS
	func_1608(var_253_string); // 0x344 NEW_2
	return 0; // 0x346 Return
}


func_1217(var_93_string)
{
	RemoveRTEnvelope(); // 0x4c2 Func
	SetDeathState(); // 0x4c4 Func
	Stop(); // 0x4c6 Func
	StopAsync(); // 0x4c8 Func
	StopSecondaryAnimation(); // 0x4ca Func
	var_94_string = ""; // 0x4cc PushV
	var_94_string = var_93_string; // 0x4cd Mov
	func_1608(var_94_string); // 0x4ce NEW_2
	var_123_string = "all"; // 0x4d0 PushS
	PlayAnimation(var_123_string, var_93_string); // 0x4d1 Func
	WaitForAnimEnd(); // 0x4d3 Func
	var_124_string = "all"; // 0x4d5 PushS
	LockAnimationEnd(var_124_string, var_93_string); // 0x4d6 Func
	RemoveEnvelope(); // 0x4d8 Func
	return 0; // 0x4da Return
}


func_1092(var_22_bool, var_23_object)
{
	var_24_bool = 0; var_25_object = Obj(); // 0x445 PushV
	var_25_object = var_23_object; // 0x446 Mov
	func_1406(var_24_bool, var_25_object); // 0x447 NEW_2
	var_22_bool = var_24_bool; // 0x448 Mov
	return 0; // 0x44a Return
}


func_1730(var_50_int)
{
	var_51_int = 0; var_52_int = 0; // 0x6c2 PushV
	var_53_string = "branch"; // 0x6c3 PushS
	GetVariable(var_53_string, var_52_int); // 0x6c4 Func
	var_50_int = var_52_int; // 0x6c6 Mov
	return 2; // 0x6c7 Return
}


func_839()
{
	return 0; // 0x348 Return
}


func_1608(var_94_string)
{
	var_95_bool = 0; var_96_int = 0; var_97_bool = 0; var_98_int = 0; var_99_bool = 0; var_100_float = 0; var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_bool = 0; var_104_int = 0; var_105_bool = 0; var_106_int = 0; var_107_bool = 0; var_108_float = 0; var_109_cvector = CVector(0,0,0); var_110_cvector = CVector(0,0,0); // 0x648 PushV
	IsExisting3DSound(var_103_bool, var_94_string); // 0x649 Func
	var_111_bool = var_103_bool == 0; // 0x64b Not
	if(var_111_bool == 0) goto Label_1633; // 0x64c JumpB
	var_104_int = 0; // 0x64d MovI
	
Label_1614:
	var_112_int = 1; // 0x64e PushI
	var_113_int = var_104_int + var_112_int; // 0x64f Add
	var_114_int = var_94_string + var_113_int; // 0x650 Add
	IsExisting3DSound(var_105_bool, var_114_int); // 0x651 Func
	var_115_bool = var_105_bool == 0; // 0x653 Not
	if(var_115_bool == 0) goto Label_1622; // 0x654 JumpB
	goto Label_1625; // 0x655 Jump
	
Label_1625:
	var_116_bool = var_104_int == 0; // 0x659 Not
	if(var_116_bool == 0) goto Label_1628; // 0x65a JumpB
	return 16; // 0x65b Return
	
Label_1628:
	irand(var_106_int, var_104_int); // 0x65c Func
	var_117_int = 1; // 0x65e PushI
	var_118_int = var_106_int + var_117_int; // 0x65f Add
	var_94_string = var_94_string + var_118_int; // 0x660 Add2
	
Label_1633:
	Is3DSoundLoaded(var_107_bool, var_94_string); // 0x661 Func
	var_119_bool = var_107_bool; // 0x663 Push
	if(var_119_bool == 0) goto Label_1648; // 0x664 JumpB
	GetEyesHeight(var_108_float); // 0x665 Func
	GetDirection(var_109_cvector); // 0x667 Func
	var_120_int = 50; // 0x669 PushI
	var_110_cvector = var_109_cvector * var_120_int; // 0x66a Mult2
	var_121_float = GetByIndex(var_110_cvector, 1); // 0x66b PushE
	var_121_float = var_121_float + var_108_float; // 0x66c Add2
	SetByIndex(var_110_cvector, 1) = var_121_float; // 0x66d PopE
	PlayGlobalSound(var_94_string, var_110_cvector); // 0x66e Func
	
Label_1648:
	return 16; // 0x670 Return
	
Label_1622:
	var_122_int = 1; // 0x656 PushI
	var_104_int = var_104_int + var_122_int; // 0x657 Add2
	goto Label_1614; // 0x658 Jump
}


func_841(var_482_bool)
{
	var_482_bool = 1; // 0x349 MovB
	return 0; // 0x34a Return
}


func_1736(var_15_object)
{
	var_16_int = 0; // 0x6c9 PushV
	func_1730(var_16_int); // 0x6ca NEW_2
	var_20_int = 1; // 0x6cc PushI
	var_21_bool = var_16_int == var_20_int; // 0x6cd Eq
	if(var_21_bool == 0) goto Label_1746; // 0x6ce JumpB
	WorkWithCorpse(var_15_object); // 0x6cf Func
	goto Label_1748; // 0x6d1 Jump
	
Label_1748:
	return 0; // 0x6d4 Return
	
Label_1746:
	Barter(var_15_object); // 0x6d2 Func
}


func_843(var_378_int)
{
	var_378_int = 1; // 0x34b MovI
	return 0; // 0x34c Return
}


func_1099(var_196_string)
{
	var_196_string = "walk"; // 0x44b MovS
	return 0; // 0x44c Return
}


func_845(var_373_float)
{
	var_373_float = 0.5; // 0x34d MovF
	return 0; // 0x34e Return
}


func_1101(var_197_string)
{
	var_197_string = "run"; // 0x44d MovS
	return 0; // 0x44e Return
}


func_847(var_2_string, var_127_bool, var_128_object, var_129_float, var_130_float, var_131_bool, var_132_bool)
{
	var_136_bool = 0; var_137_bool = 0; var_138_bool = 0; var_139_bool = 0; // 0x34f PushV
	var_140_object = Obj(); // 0x350 PushV
	var_140_object = var_128_object; // 0x351 Mov
	func_1710(var_140_object); // 0x352 NEW_2
	var_141_int = 1; // 0x354 PushI
	var_142_int = 5; // 0x355 PushI
	SetTimer(var_141_int, var_142_int); // 0x356 Func
	CanSee(var_138_bool, var_128_object); // 0x358 Func
	var_143_bool = var_138_bool; // 0x35a Push
	if(var_143_bool == 0) goto Label_866; // 0x35b JumpB
	var_2_string = 1; // 0x35c TMovB
	var_144_object = Obj(); // 0x35d PushV
	var_144_object = var_128_object; // 0x35e Mov
	func_1582(var_144_object); // 0x35f NEW_2
	goto Label_867; // 0x361 Jump
	
Label_867:
	var_151_bool = 0; var_152_object = Obj(); // 0x363 PushV
	var_152_object = var_128_object; // 0x364 Mov
	func_1270(var_151_bool, var_152_object); // 0x365 NEW_2
	if(var_151_bool == 0) goto Label_877; // 0x367 JumpB
	var_155_object = Obj(); // 0x368 PushV
	func_1649(var_155_object); // 0x369 NEW_2
	SendPlayerEnemy(var_128_object, var_155_object); // 0x36b Func
	
Label_877:
	var_156_bool = 0; var_157_object = Obj(); var_158_float = 0; var_159_float = 0; var_160_bool = 0; var_161_bool = 0; // 0x36d PushV
	var_157_object = var_128_object; // 0x36e Mov
	var_158_float = var_129_float; // 0x36f Mov
	var_159_float = var_130_float; // 0x370 Mov
	var_160_bool = var_131_bool; // 0x371 Mov
	var_161_bool = var_132_bool; // 0x372 Mov
	func_952(var_138_bool, var_139_bool, var_156_bool, var_157_object, var_158_float, var_159_float, var_160_bool, var_161_bool); // 0x373 NEW_2
	var_139_bool = var_156_bool; // 0x374 Mov
	var_207_string = var_2_string; // 0x376 PushT
	if(var_207_string == 0) goto Label_891; // 0x377 JumpB
	var_208_string = "head"; // 0x378 PushS
	UnlookAsync(var_208_string); // 0x379 Func
	
Label_891:
	var_209_int = 1; // 0x37b PushI
	KillTimer(var_209_int); // 0x37c Func
	var_127_bool = var_139_bool; // 0x37e Mov
	return 4; // 0x37f Return
	
Label_866:
	var_2_string = 0; // 0x362 TMovB
}


func_1103(var_70_object)
{
	var_71_object = Obj(); // 0x450 PushV
	var_71_object = var_70_object; // 0x451 Mov
	func_1126(var_71_object); // 0x452 NEW_2
	var_151_int = 50; // 0x454 PushI
	var_152_int = 40; // 0x455 PushI
	SetRTEnvelope(var_151_int, var_152_int); // 0x456 Func
	
Label_1112:
	Hold(); // 0x458 Func
	goto Label_1112; // 0x45a Jump
}


func_1484(var_15_object, var_16_int, var_17_float)
{
	var_18_cvector = CVector(0,0,0); var_19_object = Obj(); var_20_int = 0; var_21_bool = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_int = 0; var_25_int = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_object = Obj(); var_29_int = 0; var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_int = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0); // 0x5cc PushV
	var_36_bool = 0; // 0x5cd PushV
	var_36_bool = 0; // 0x5ce MovB
	var_37_bool = 0; // 0x5cf PushV
	var_37_bool = 0; // 0x5d0 MovB
	var_38_object = var_15_object; // 0x5d1 Push
	if(var_38_object == 0) goto Label_1495; // 0x5d2 JumpB
	var_39_int = 4; // 0x5d3 PushI
	var_40_bool = var_16_int != var_39_int; // 0x5d4 Neq
	if(var_40_bool == 0) goto Label_1495; // 0x5d5 JumpB
	var_37_bool = 1; // 0x5d6 MovB
	
Label_1495:
	if(var_37_bool == 0) goto Label_1500; // 0x5d7 JumpB
	var_41_int = 5; // 0x5d8 PushI
	var_42_bool = var_16_int != var_41_int; // 0x5d9 Neq
	if(var_42_bool == 0) goto Label_1500; // 0x5da JumpB
	var_36_bool = 1; // 0x5db MovB
	
Label_1500:
	if(var_36_bool == 0) goto Label_1547; // 0x5dc JumpB
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); // 0x5dd PushV
	var_45_cvector = CVector(0,0,0); var_46_object = Obj(); // 0x5de PushV
	var_46_object = var_15_object; // 0x5df Mov
	func_1263(var_46_object); // 0x5e0 NEW_2
	var_44_cvector = var_45_cvector; // 0x5e1 Mov
	func_1655(var_43_cvector, var_44_cvector); // 0x5e3 NEW_2
	var_27_cvector = var_43_cvector; // 0x5e4 Mov
	CreateVectorVector(var_28_object); // 0x5e6 Func
	var_29_int = 1; // 0x5e8 MovI
	
Label_1513:
	var_56_string = "hit"; // 0x5e9 PushS
	var_57_int = var_56_string + var_29_int; // 0x5ea Add
	GetGeometryLocator(var_57_int, var_30_bool, var_31_cvector, var_32_cvector); // 0x5eb Func
	var_58_bool = var_30_bool == 0; // 0x5ed Not
	if(var_58_bool == 0) goto Label_1520; // 0x5ee JumpB
	goto Label_1529; // 0x5ef Jump
	
Label_1529:
	size(var_33_int); // 0x5f9 ObjFunc
	var_59_int = var_33_int; // 0x5fb Push
	if(var_59_int == 0) goto Label_1546; // 0x5fc JumpB
	irand(var_34_int, var_33_int); // 0x5fd Func
	get(var_35_cvector, var_34_int); // 0x5ff ObjFunc
	var_60_object = Obj(); var_61_int = 0; var_62_float = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); // 0x601 PushV
	var_60_object = var_15_object; // 0x602 Mov
	var_61_int = var_16_int; // 0x603 Mov
	var_62_float = var_17_float; // 0x604 Mov
	var_63_cvector = var_35_cvector; // 0x605 Mov
	var_64_cvector = -var_27_cvector; // 0x606 Neg2
	func_1552(var_62_float, var_63_cvector, var_64_cvector); // 0x607 NEW_2
	return 18; // 0x609 Return
	
Label_1546:
	var_28_object = 0; // 0x60a SetNull
	
Label_1547:
	var_105_object = Obj(); // 0x60b PushV
	var_105_object = var_15_object; // 0x60c Mov
	func_1440(var_105_object); // 0x60d NEW_2
	return 18; // 0x60f Return
	
Label_1520:
	var_106_int = var_32_cvector | var_27_cvector; // 0x5f0 Or
	var_107_float = 0.70711; // 0x5f1 PushF
	var_108_bool = var_106_int >= var_107_float; // 0x5f2 GE
	if(var_108_bool == 0) goto Label_1526; // 0x5f3 JumpB
	add(var_31_cvector); // 0x5f4 ObjFunc
	
Label_1526:
	var_109_int = 1; // 0x5f6 PushI
	var_29_int = var_29_int + var_109_int; // 0x5f7 Add2
	goto Label_1513; // 0x5f8 Jump
}


func_723(var_297_bool)
{
	var_298_bool = 0; // 0x2d3 PushV
	var_298_bool = 0; // 0x2d4 MovB
	var_299_bool = 0; // 0x2d5 PushV
	func_695(var_298_bool, var_299_bool); // 0x2d6 NEW_2
	if(var_299_bool == 0) goto Label_734; // 0x2d8 JumpB
	var_316_bool = 0; // 0x2d9 PushV
	func_739(var_297_bool, var_298_bool, var_316_bool); // 0x2da NEW_2
	if(var_316_bool == 0) goto Label_734; // 0x2dc JumpB
	var_298_bool = 1; // 0x2dd MovB
	
Label_734:
	if(var_298_bool == 0) goto Label_737; // 0x2de JumpB
	var_297_bool = 1; // 0x2df MovB
	return 0; // 0x2e0 Return
	
Label_737:
	var_297_bool = 0; // 0x2e1 MovB
	return 0; // 0x2e2 Return
}


func_1365(var_39_bool)
{
	var_41_bool = 0; var_42_bool = 0; // 0x555 PushV
	IsDead(var_42_bool); // 0x556 ObjFunc
	var_39_bool = var_42_bool; // 0x558 Mov
	return 2; // 0x559 Return
}


func_1749(var_56_string)
{
	var_57_object = Obj(); var_58_int = 0; var_59_bool = 0; var_60_object = Obj(); var_61_int = 0; var_62_bool = 0; // 0x6d5 PushV
	CreateInvItem(var_60_object); // 0x6d6 Func
	SetItemName(var_56_string); // 0x6d8 ObjFunc
	var_63_string = "Organ"; // 0x6da PushS
	var_64_int = 1; // 0x6db PushI
	SetProperty(var_63_string, var_64_int); // 0x6dc ObjFunc
	GetItemID(var_61_int); // 0x6de ObjFunc
	var_65_int = 0; // 0x6e0 PushI
	var_66_int = 1; // 0x6e1 PushI
	AddItem(var_62_bool, var_60_object, var_65_int, var_66_int); // 0x6e2 Func
	return 6; // 0x6e4 Return
}


func_1370(var_28_bool, var_29_object)
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); // 0x55a PushV
	var_34_bool = var_29_object == 0; // 0x55b NullEq
	if(var_34_bool == 0) goto Label_1375; // 0x55c JumpB
	var_28_bool = 0; // 0x55d MovB
	return 4; // 0x55e Return
	
Label_1375:
	var_35_bool = 0; // 0x55f PushV
	var_35_bool = 0; // 0x560 MovB
	var_36_string = "IsDead"; // 0x561 PushS
	var_37_int = 1; // 0x562 PushI
	var_38_bool = IsFuncExist(var_29_object, var_36_string, var_37_int); // 0x563 FuncExist
	if(var_38_bool == 0) goto Label_1387; // 0x564 JumpB
	var_39_bool = 0; var_40_object = Obj(); // 0x565 PushV
	var_40_object = var_29_object; // 0x566 Mov
	func_1365(var_40_object); // 0x567 NEW_2
	if(var_39_bool == 0) goto Label_1387; // 0x569 JumpB
	var_35_bool = 1; // 0x56a MovB
	
Label_1387:
	if(var_35_bool == 0) goto Label_1390; // 0x56b JumpB
	var_28_bool = 0; // 0x56c MovB
	return 4; // 0x56d Return
	
Label_1390:
	GetScene(var_32_object); // 0x56e Func
	var_43_bool = var_32_object == 0; // 0x570 NullEq
	if(var_43_bool == 0) goto Label_1396; // 0x571 JumpB
	var_28_bool = 0; // 0x572 MovB
	return 4; // 0x573 Return
	
Label_1396:
	GetScene(var_33_object); // 0x574 ObjFunc
	var_44_bool = var_32_object != var_33_object; // 0x576 Neq
	if(var_44_bool == 0) goto Label_1402; // 0x577 JumpB
	var_28_bool = 0; // 0x578 MovB
	return 4; // 0x579 Return
	
Label_1402:
	var_28_bool = 1; // 0x57a MovB
	return 4; // 0x57b Return
}


func_1249(var_424_string, var_425_int)
{
	var_426_int = 2; // 0x4e2 PushI
	var_427_bool = var_425_int == var_426_int; // 0x4e3 Eq
	if(var_427_bool == 0) goto Label_1256; // 0x4e4 JumpB
	var_424_string = "fire"; // 0x4e5 MovS
	return 0; // 0x4e6 Return
	
Label_1256:
	var_428_int = 1; // 0x4e8 PushI
	var_429_bool = var_425_int == var_428_int; // 0x4e9 Eq
	if(var_429_bool == 0) goto Label_1261; // 0x4ea JumpB
	var_424_string = "bullet"; // 0x4eb MovS
	return 0; // 0x4ec Return
	
Label_1261:
	var_424_string = "phys"; // 0x4ed MovS
	return 0; // 0x4ee Return
}


func_739(var_0_int, var_4_int, var_316_bool)
{
	var_317_object = Obj(); var_318_bool = 0; var_319_float = 0; var_320_cvector = CVector(0,0,0); var_321_cvector = CVector(0,0,0); var_322_object = Obj(); var_323_bool = 0; var_324_float = 0; var_325_cvector = CVector(0,0,0); var_326_cvector = CVector(0,0,0); // 0x2e3 PushV
	GetScene(var_322_object); // 0x2e4 Func
	var_323_bool = 0; // 0x2e6 MovB
	
Label_743:
	var_327_cvector = CVector(0,0,0); var_328_object = Obj(); // 0x2e7 PushV
	var_328_object = var_0_int; // 0x2e8 MovT
	func_1263(var_328_object); // 0x2e9 NEW_2
	var_333_int = -var_327_cvector; // 0x2eb Neg
	FindDirLength(var_324_float, var_333_int, var_324_float); // 0x2ec Func
	var_334_bool = var_324_float < var_4_int; // 0x2ee LT
	if(var_334_bool == 0) goto Label_753; // 0x2ef JumpB
	goto Label_781; // 0x2f0 Jump
	
Label_781:
	var_316_bool = var_323_bool; // 0x30d Mov
	return 10; // 0x30e Return
	
Label_753:
	Face(var_0_int); // 0x2f1 Func
	var_335_string = "all"; // 0x2f3 PushS
	var_336_string = "bjump"; // 0x2f4 PushS
	PlayAnimation(var_335_string, var_336_string); // 0x2f5 Func
	GetPFPosition(var_325_cvector); // 0x2f7 TObjFunc
	GetPFPosition(var_326_cvector); // 0x2f9 Func
	WaitForAnimEnd(); // 0x2fb Func
	func_827(var_326_cvector); // 0x2fe NEW_2
	StopAsync(); // 0x300 Func
	var_337_cvector = CVector(0.0, 0.0, 0.0); // 0x302 PushVec
	SetSpeed(var_337_cvector); // 0x303 Func
	var_323_bool = 1; // 0x305 MovB
	var_338_bool = 0; // 0x306 PushV
	func_695(var_326_cvector, var_338_bool); // 0x307 NEW_2
	var_339_bool = var_338_bool == 0; // 0x309 Not
	if(var_339_bool == 0) goto Label_780; // 0x30a JumpB
	goto Label_781; // 0x30b Jump
	
Label_780:
	goto Label_743; // 0x30c Jump
}


func_1126(var_71_object)
{
	var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_string = ""; var_77_object = Obj(); var_78_bool = 0; var_79_bool = 0; var_80_float = 0; var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_string = ""; var_87_object = Obj(); var_88_bool = 0; var_89_bool = 0; var_90_float = 0; var_91_cvector = CVector(0,0,0); // 0x466 PushV
	var_92_bool = var_71_object == 0; // 0x467 NullEq
	if(var_92_bool == 0) goto Label_1134; // 0x468 JumpB
	var_93_string = ""; // 0x469 PushV
	var_93_string = "fdie"; // 0x46a MovS
	func_1217(var_93_string); // 0x46b NEW_2
	goto Label_1216; // 0x46d Jump
	
Label_1216:
	return 20; // 0x4c0 Return
	
Label_1134:
	GetPosition(var_82_cvector); // 0x46e ObjFunc
	GetPosition(var_83_cvector); // 0x470 Func
	GetDirection(var_84_cvector); // 0x472 Func
	var_85_cvector = var_83_cvector - var_82_cvector; // 0x474 Sub2
	var_125_float = GetByIndex(var_85_cvector, 0); // 0x475 PushE
	var_126_float = GetByIndex(var_84_cvector, 0); // 0x476 PushE
	var_127_float = var_125_float * var_126_float; // 0x477 Mult
	var_128_float = GetByIndex(var_85_cvector, 2); // 0x478 PushE
	var_129_float = GetByIndex(var_84_cvector, 2); // 0x479 PushE
	var_130_float = var_128_float * var_129_float; // 0x47a Mult
	var_131_int = var_127_float + var_130_float; // 0x47b Add
	var_132_int = 0; // 0x47c PushI
	var_133_bool = var_131_int >= var_132_int; // 0x47d GE
	if(var_133_bool == 0) goto Label_1153; // 0x47e JumpB
	var_86_string = "fdie"; // 0x47f MovS
	goto Label_1154; // 0x480 Jump
	
Label_1154:
	RemoveRTEnvelope(); // 0x482 Func
	SetDeathState(); // 0x484 Func
	Stop(); // 0x486 Func
	StopAsync(); // 0x488 Func
	var_87_object = var_71_object; // 0x48a Mov
	var_134_string = "GetScriptProperty"; // 0x48b PushS
	var_135_int = 2; // 0x48c PushI
	var_136_bool = IsFuncExist(var_71_object, var_134_string, var_135_int); // 0x48d FuncExist
	if(var_136_bool == 0) goto Label_1178; // 0x48e JumpB
	var_137_string = "Owner"; // 0x48f PushS
	HasScriptProperty(var_88_bool, var_137_string); // 0x490 ObjFunc
	var_138_bool = var_88_bool; // 0x492 Push
	if(var_138_bool == 0) goto Label_1178; // 0x493 JumpB
	var_139_string = "Owner"; // 0x494 PushS
	GetScriptProperty(var_87_object, var_139_string); // 0x495 ObjFunc
	var_140_bool = var_87_object == 0; // 0x497 NullEq
	if(var_140_bool == 0) goto Label_1178; // 0x498 JumpB
	var_87_object = var_71_object; // 0x499 Mov
	
Label_1178:
	var_141_string = "@GetEyesHeight"; // 0x49a PushS
	var_142_int = 1; // 0x49b PushI
	var_143_bool = IsFuncExist(var_87_object, var_141_string, var_142_int); // 0x49c FuncExist
	if(var_143_bool == 0) goto Label_1193; // 0x49d JumpB
	GetEyesHeight(var_90_float); // 0x49e ObjFunc
	var_91_cvector = CVector(0.0, 0.0, 0.0); // 0x4a0 MovV
	var_144_float = GetByIndex(var_91_cvector, 1); // 0x4a1 PushE
	var_144_float = var_90_float; // 0x4a2 Mov
	SetByIndex(var_91_cvector, 1) = var_144_float; // 0x4a3 PopE
	var_145_string = "head"; // 0x4a4 PushS
	LookAsync(var_71_object, var_145_string, var_91_cvector); // 0x4a5 Func
	var_89_bool = 1; // 0x4a7 MovB
	goto Label_1194; // 0x4a8 Jump
	
Label_1194:
	var_146_string = ""; // 0x4aa PushV
	var_146_string = var_86_string; // 0x4ab Mov
	func_1608(var_146_string); // 0x4ac NEW_2
	var_147_string = "all"; // 0x4ae PushS
	PlayAnimation(var_147_string, var_86_string); // 0x4af Func
	WaitForAnimEnd(); // 0x4b1 Func
	var_148_bool = var_89_bool; // 0x4b3 Push
	if(var_148_bool == 0) goto Label_1210; // 0x4b4 JumpB
	StopAsync(); // 0x4b5 Func
	var_149_string = "head"; // 0x4b7 PushS
	UnlookAsync(var_149_string); // 0x4b8 Func
	
Label_1210:
	var_150_string = "all"; // 0x4ba PushS
	LockAnimationEnd(var_150_string, var_86_string); // 0x4bb Func
	RemoveEnvelope(); // 0x4bd Func
	var_87_object = 0; // 0x4bf SetNull
	
Label_1193:
	var_89_bool = 0; // 0x4a9 MovB
	
Label_1153:
	var_86_string = "bdie"; // 0x481 MovS
}


func_1766()
{
	var_50_int = 0; // 0x6e6 PushV
	func_1730(var_50_int); // 0x6e7 NEW_2
	var_54_int = 1; // 0x6e9 PushI
	var_55_bool = var_50_int != var_54_int; // 0x6ea Neq
	if(var_55_bool == 0) goto Label_1773; // 0x6eb JumpB
	return 0; // 0x6ec Return
	
Label_1773:
	var_56_string = ""; // 0x6ed PushV
	var_56_string = "liver"; // 0x6ee MovS
	func_1749(var_56_string); // 0x6ef NEW_2
	var_67_string = ""; // 0x6f1 PushV
	var_67_string = "kidney"; // 0x6f2 MovS
	func_1749(var_67_string); // 0x6f3 NEW_2
	var_68_string = ""; // 0x6f5 PushV
	var_68_string = "heart"; // 0x6f6 MovS
	func_1749(var_68_string); // 0x6f7 NEW_2
	var_69_string = ""; // 0x6f9 PushV
	var_69_string = "blood"; // 0x6fa MovS
	func_1749(var_69_string); // 0x6fb NEW_2
	return 0; // 0x6fd Return
}


func_488(var_0_int, var_345_bool, var_346_float)
{
	var_347_int = 0; var_348_bool = 0; var_349_int = 0; var_350_string = ""; var_351_int = 0; var_352_bool = 0; var_353_int = 0; var_354_string = ""; // 0x1e8 PushV
	func_827(var_354_string); // 0x1ea NEW_2
	irand(var_351_int, var_354_string); // 0x1ec Func
	var_355_int = 1; // 0x1ee PushI
	var_351_int = var_351_int + var_355_int; // 0x1ef Add2
	Face(var_0_int); // 0x1f0 Func
	var_356_bool = 1; // 0x1f2 PushB
	SetAttackState(var_356_bool); // 0x1f3 Func
	func_1719(); // 0x1f6 NEW_2
	var_361_string = "all"; // 0x1f8 PushS
	var_362_string = "attack_begin"; // 0x1f9 PushS
	var_363_int = var_362_string + var_351_int; // 0x1fa Add
	PlayAnimation(var_361_string, var_363_int); // 0x1fb Func
	WaitForAnimEnd(); // 0x1fd Func
	func_795(var_353_int, var_354_string); // 0x200 NEW_2
	var_379_bool = 0; var_380_object = Obj(); // 0x202 PushV
	var_380_object = var_0_int; // 0x203 MovT
	func_1406(var_379_bool, var_380_object); // 0x204 NEW_2
	var_381_bool = var_379_bool == 0; // 0x206 Not
	if(var_381_bool == 0) goto Label_524; // 0x207 JumpB
	StopAsync(); // 0x208 Func
	var_345_bool = 0; // 0x20a MovB
	return 8; // 0x20b Return
	
Label_524:
	var_382_float = 0; var_383_int = 0; // 0x20c PushV
	var_382_float = var_346_float; // 0x20d Mov
	var_383_int = var_351_int; // 0x20e Mov
	func_449(var_354_string, var_382_float, var_383_int); // 0x20f NEW_2
	var_460_string = "all"; // 0x211 PushS
	var_461_string = "attack_middle"; // 0x212 PushS
	var_462_int = var_461_string + var_351_int; // 0x213 Add
	HasAnimation(var_352_bool, var_460_string, var_462_int); // 0x214 Func
	var_463_bool = var_352_bool; // 0x216 Push
	if(var_463_bool == 0) goto Label_605; // 0x217 JumpB
	func_1719(); // 0x219 NEW_2
	var_464_string = "all"; // 0x21b PushS
	var_465_string = "attack_middle"; // 0x21c PushS
	var_466_int = var_465_string + var_351_int; // 0x21d Add
	PlayAnimation(var_464_string, var_466_int); // 0x21e Func
	WaitForAnimEnd(); // 0x220 Func
	func_827(var_354_string); // 0x223 NEW_2
	var_467_bool = 0; var_468_object = Obj(); // 0x225 PushV
	var_468_object = var_0_int; // 0x226 MovT
	func_1406(var_467_bool, var_468_object); // 0x227 NEW_2
	var_469_bool = var_467_bool == 0; // 0x229 Not
	if(var_469_bool == 0) goto Label_559; // 0x22a JumpB
	StopAsync(); // 0x22b Func
	var_345_bool = 0; // 0x22d MovB
	return 8; // 0x22e Return
	
Label_559:
	var_470_float = 0; var_471_int = 0; // 0x22f PushV
	var_470_float = var_346_float; // 0x230 Mov
	var_471_int = var_351_int; // 0x231 Mov
	func_449(var_354_string, var_470_float, var_471_int); // 0x232 NEW_2
	var_353_int = 1; // 0x234 MovI
	
Label_565:
	var_472_string = "attack_middle"; // 0x235 PushS
	var_473_int = var_472_string + var_351_int; // 0x236 Add
	var_474_string = "_"; // 0x237 PushS
	var_475_int = var_473_int + var_474_string; // 0x238 Add
	var_354_string = var_475_int + var_353_int; // 0x239 Add2
	var_476_string = "all"; // 0x23a PushS
	HasAnimation(var_352_bool, var_476_string, var_354_string); // 0x23b Func
	var_477_bool = var_352_bool == 0; // 0x23d Not
	if(var_477_bool == 0) goto Label_576; // 0x23e JumpB
	goto Label_605; // 0x23f Jump
	
Label_605:
	var_478_bool = 0; // 0x25d PushB
	SetAttackState(var_478_bool); // 0x25e Func
	var_479_string = "all"; // 0x260 PushS
	var_480_string = "attack_end"; // 0x261 PushS
	var_481_int = var_480_string + var_351_int; // 0x262 Add
	PlayAnimation(var_479_string, var_481_int); // 0x263 Func
	var_482_bool = 0; // 0x265 PushV
	func_841(var_482_bool); // 0x266 NEW_2
	if(var_482_bool == 0) goto Label_623; // 0x268 JumpB
	var_483_bool = 0; var_484_float = 0; // 0x269 PushV
	var_484_float = 0.75; // 0x26a MovF
	func_625(var_483_bool, var_484_float); // 0x26b NEW_2
	StopAsync(); // 0x26d Func
	
Label_623:
	var_345_bool = 1; // 0x26f MovB
	return 8; // 0x270 Return
	
Label_576:
	func_1719(); // 0x241 NEW_2
	var_492_string = "all"; // 0x243 PushS
	PlayAnimation(var_492_string, var_354_string); // 0x244 Func
	WaitForAnimEnd(); // 0x246 Func
	func_827(var_354_string); // 0x249 NEW_2
	var_493_bool = 0; var_494_object = Obj(); // 0x24b PushV
	var_494_object = var_0_int; // 0x24c MovT
	func_1406(var_493_bool, var_494_object); // 0x24d NEW_2
	var_495_bool = var_493_bool == 0; // 0x24f Not
	if(var_495_bool == 0) goto Label_597; // 0x250 JumpB
	StopAsync(); // 0x251 Func
	var_345_bool = 0; // 0x253 MovB
	return 8; // 0x254 Return
	
Label_597:
	var_496_float = 0; var_497_int = 0; // 0x255 PushV
	var_496_float = var_346_float; // 0x256 Mov
	var_497_int = var_351_int; // 0x257 Mov
	func_449(var_354_string, var_496_float, var_497_int); // 0x258 NEW_2
	var_498_int = 1; // 0x25a PushI
	var_353_int = var_353_int + var_498_int; // 0x25b Add2
	goto Label_565; // 0x25c Jump
}


func_1263(var_45_cvector)
{
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); // 0x4ef PushV
	GetPosition(var_49_cvector); // 0x4f0 Func
	GetPosition(var_50_cvector); // 0x4f2 ObjFunc
	var_45_cvector = var_50_cvector - var_49_cvector; // 0x4f4 Sub2
	return 4; // 0x4f5 Return
}


func_1649(var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj(); // 0x671 PushV
	self(var_13_object); // 0x672 Func
	var_11_object = var_13_object; // 0x674 Mov
	return 2; // 0x675 Return
}


func_625(var_483_bool, var_484_float)
{
	var_485_float = 0; var_486_bool = 0; var_487_float = 0; var_488_bool = 0; // 0x271 PushV
	rand(var_487_float); // 0x272 Func
	var_489_bool = var_487_float < var_484_float; // 0x274 LT
	if(var_489_bool == 0) goto Label_645; // 0x275 JumpB
	
Label_630:
	IsAnimationPlaying(var_488_bool); // 0x276 Func
	var_490_bool = var_488_bool == 0; // 0x278 Not
	if(var_490_bool == 0) goto Label_635; // 0x279 JumpB
	goto Label_644; // 0x27a Jump
	
Label_644:
	goto Label_650; // 0x284 Jump
	
Label_650:
	var_483_bool = 0; // 0x28a MovB
	return 4; // 0x28b Return
	
Label_635:
	var_491_bool = 0; // 0x27b PushV
	func_723(var_491_bool); // 0x27c NEW_2
	if(var_491_bool == 0) goto Label_641; // 0x27e JumpB
	var_483_bool = 1; // 0x27f MovB
	return 4; // 0x280 Return
	
Label_641:
	sync(); // 0x281 Func
	goto Label_630; // 0x283 Jump
	
Label_645:
	WaitForAnimEnd(); // 0x285 Func
	func_827(var_488_bool); // 0x288 NEW_2
}


func_1270(var_151_bool, var_152_object)
{
	var_153_bool = 0; var_154_bool = 0; // 0x4f6 PushV
	IsPlayerActor(var_152_object, var_154_bool); // 0x4f7 Func
	var_151_bool = var_154_bool; // 0x4f9 Mov
	return 2; // 0x4fa Return
}


func_1655(var_43_cvector, var_44_cvector)
{
	var_51_float = 0; var_52_float = 0; // 0x677 PushV
	var_53_int = var_44_cvector | var_44_cvector; // 0x678 Or
	var_52_float = sqrt(var_53_int); // 0x679 Sqrt2
	var_54_float = 0.0; // 0x67a PushF
	var_55_bool = var_52_float < var_54_float; // 0x67b LT
	if(var_55_bool == 0) goto Label_1663; // 0x67c JumpB
	var_43_cvector = CVector(0.0, 0.0, 0.0); // 0x67d MovV
	return 2; // 0x67e Return
	
Label_1663:
	var_43_cvector = var_44_cvector / var_44_cvector; // 0x67f Div2
	return 2; // 0x680 Return
}


func_1275(var_46_bool, var_47_object, var_48_string)
{
	var_49_bool = 0; var_50_bool = 0; // 0x4fb PushV
	var_51_string = "HasProperty"; // 0x4fc PushS
	var_52_int = 2; // 0x4fd PushI
	var_53_bool = IsFuncExist(var_47_object, var_51_string, var_52_int); // 0x4fe FuncExist
	var_54_bool = var_53_bool == 0; // 0x4ff Not
	if(var_54_bool == 0) goto Label_1283; // 0x500 JumpB
	var_46_bool = 0; // 0x501 MovB
	return 2; // 0x502 Return
	
Label_1283:
	HasProperty(var_48_string, var_50_bool); // 0x503 ObjFunc
	var_46_bool = var_50_bool; // 0x505 Mov
	return 2; // 0x506 Return
}


func_1406(var_24_bool, var_25_object)
{
	var_26_int = 0; var_27_int = 0; // 0x57e PushV
	var_28_bool = 0; var_29_object = Obj(); // 0x57f PushV
	var_29_object = var_25_object; // 0x580 Mov
	func_1370(var_28_bool, var_29_object); // 0x581 NEW_2
	var_45_bool = var_28_bool == 0; // 0x583 Not
	if(var_45_bool == 0) goto Label_1415; // 0x584 JumpB
	var_24_bool = 0; // 0x585 MovB
	return 2; // 0x586 Return
	
Label_1415:
	var_46_bool = 0; var_47_object = Obj(); var_48_string = ""; // 0x587 PushV
	var_47_object = var_25_object; // 0x588 Mov
	var_48_string = "noaccess"; // 0x589 MovS
	func_1275(var_46_bool, var_47_object, var_48_string); // 0x58a NEW_2
	var_55_bool = var_46_bool == 0; // 0x58c Not
	if(var_55_bool == 0) goto Label_1424; // 0x58d JumpB
	var_24_bool = 1; // 0x58e MovB
	return 2; // 0x58f Return
	
Label_1424:
	var_56_string = "noaccess"; // 0x590 PushS
	GetProperty(var_56_string, var_27_int); // 0x591 ObjFunc
	var_57_int = 0; // 0x593 PushI
	var_24_bool = var_27_int == var_57_int; // 0x594 Eq2
	return 2; // 0x595 Return
}


