task_0_event_17(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	var_10_bool = 0; var_11_bool = 0; // 0xc PushV
	IsPlayerActor(var_9_bool, var_11_bool); // 0xd Func
	var_12_bool = var_11_bool; // 0xf Push
	if(var_12_bool == 0) goto Label_22; // 0x10 JumpB
	TaskCall(1); // 0x12 TaskCall
	func_29(); // 0x13 NEW_2
	TaskReturn(); // 0x14 TaskReturn
	
Label_22:
	return 2; // 0x16 Return
}


task_0_event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	var_9_object = Obj(); // 0x17 PushV
	func_1502(var_9_object); // 0x18 NEW_2
	RemoveActor(var_9_object); // 0x1a Func
	return 0; // 0x1c Return
}


task_1_event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	var_9_object = Obj(); // 0x2f PushV
	func_1502(var_9_object); // 0x30 NEW_2
	RemoveActor(var_9_object); // 0x32 Func
	return 0; // 0x34 Return
}


task_2_event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	var_9_object = Obj(); // 0x2cb PushV
	func_1502(var_9_object); // 0x2cc NEW_2
	RemoveActor(var_9_object); // 0x2ce Func
	return 0; // 0x2d0 Return
}


task_2_event_7(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_int)
{
	var_10_int = 1; // 0x303 PushI
	var_11_bool = var_9_int == var_10_int; // 0x304 Eq
	if(var_11_bool == 0) goto Label_779; // 0x305 JumpB
	var_12_object = Obj(); // 0x306 PushV
	var_12_object = var_1_int; // 0x307 MovT
	func_1598(var_12_object); // 0x308 NEW_2
	goto Label_783; // 0x30a Jump
	
Label_783:
	return 0; // 0x30f Return
	
Label_779:
	var_17_int = 0; // 0x30b PushV
	var_17_int = var_9_int; // 0x30c Mov
	func_928(var_8_bool, var_9_int, var_17_int); // 0x30d NEW_2
}


task_2_event_1(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_bool = 0; // 0x31e PushV
	var_10_bool = 0; // 0x31f MovB
	var_11_bool = var_1_int == var_9_object; // 0x320 Eq
	if(var_11_bool == 0) goto Label_805; // 0x321 JumpB
	var_12_bool = var_2_int == 0; // 0x322 Not
	if(var_12_bool == 0) goto Label_805; // 0x323 JumpB
	var_10_bool = 1; // 0x324 MovB
	
Label_805:
	if(var_10_bool == 0) goto Label_811; // 0x325 JumpB
	var_2_int = 1; // 0x326 TMovB
	var_13_object = Obj(); // 0x327 PushV
	var_13_object = var_9_object; // 0x328 Mov
	func_1450(var_13_object); // 0x329 NEW_2
	
Label_811:
	return 0; // 0x32b Return
}


task_2_event_2(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_bool = 0; // 0x32d PushV
	var_10_bool = 0; // 0x32e MovB
	var_11_bool = var_1_int == var_9_object; // 0x32f Eq
	if(var_11_bool == 0) goto Label_820; // 0x330 JumpB
	var_12_int = var_2_int; // 0x331 PushT
	if(var_12_int == 0) goto Label_820; // 0x332 JumpB
	var_10_bool = 1; // 0x333 MovB
	
Label_820:
	if(var_10_bool == 0) goto Label_825; // 0x334 JumpB
	var_2_int = 0; // 0x335 TMovB
	var_13_string = "head"; // 0x336 PushS
	UnlookAsync(var_13_string); // 0x337 Func
	
Label_825:
	return 0; // 0x339 Return
}


task_2_event_10(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	RequestClearPath(var_9_object); // 0x3b3 Func
	return 0; // 0x3b5 Return
}


task_2_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	func_784(var_9_object); // 0x3bf NEW_2
	var_14_object = Obj(); // 0x3c1 PushV
	var_14_object = var_9_object; // 0x3c2 Mov
	func_1667(); // 0x3c3 NEW_2
	return 0; // 0x3c5 Return
}


task_3_event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	var_9_object = Obj(); // 0x3d1 PushV
	func_1502(var_9_object); // 0x3d2 NEW_2
	RemoveActor(var_9_object); // 0x3d4 Func
	return 0; // 0x3d6 Return
}


task_3_event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float)
{
	return 0; // 0x456 Return
}


task_3_event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_string)
{
	return 0; // 0x458 Return
}


task_3_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	return 0; // 0x45a Return
}


event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float)
{
	var_13_object = Obj(); var_14_int = 0; var_15_float = 0; // 0x665 PushV
	var_13_object = var_9_object; // 0x666 Mov
	var_14_int = var_10_int; // 0x667 Mov
	var_15_float = var_11_float; // 0x668 Mov
	func_1357(var_13_object, var_14_int, var_15_float); // 0x669 NEW_2
	return 0; // 0x66b Return
}


event_43(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float, var_13_cvector, var_14_cvector)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); // 0x66d PushV
	var_15_object = var_9_object; // 0x66e Mov
	var_16_int = var_10_int; // 0x66f Mov
	var_17_float = var_11_float; // 0x670 Mov
	var_18_cvector = var_13_cvector; // 0x671 Mov
	var_19_cvector = var_14_cvector; // 0x672 Mov
	func_1425(var_17_float, var_18_cvector, var_19_cvector); // 0x673 NEW_2
	return 0; // 0x675 Return
}


event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_string)
{
	var_11_float = 0; var_12_float = 0; // 0x676 PushV
	var_13_string = "health"; // 0x677 PushS
	var_14_bool = var_10_string == var_13_string; // 0x678 Eq
	if(var_14_bool == 0) goto Label_1666; // 0x679 JumpB
	var_15_string = "health"; // 0x67a PushS
	GetProperty(var_15_string, var_12_float); // 0x67b Func
	var_16_int = 0; // 0x67d PushI
	var_17_bool = var_12_float <= var_16_int; // 0x67e LE
	if(var_17_bool == 0) goto Label_1666; // 0x67f JumpB
	SignalDeath(var_9_object); // 0x680 Func
	
Label_1666:
	return 2; // 0x682 Return
}


event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_object = Obj(); // 0x684 PushV
	var_10_object = var_9_object; // 0x685 Mov
	func_1618(var_10_object); // 0x686 NEW_2
	return 0; // 0x688 Return
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	var_9_bool = 1; // 0x0 PushB
	SensePlayerOnly(var_9_bool); // 0x1 Func
	TaskCall(1); // 0x4 TaskCall
	func_29(); // 0x5 NEW_2
	TaskReturn(); // 0x6 TaskReturn
	
Label_8:
	Hold(); // 0x8 Func
	goto Label_8; // 0xa Jump
}


func_1536(var_15_bool, var_16_object, var_17_float)
{
	var_18_bool = var_16_object == 0; // 0x601 Not
	if(var_18_bool == 0) goto Label_1541; // 0x602 JumpB
	var_15_bool = 0; // 0x603 MovB
	return 0; // 0x604 Return
	
Label_1541:
	var_19_int = 0; // 0x605 PushI
	var_20_bool = var_17_float > var_19_int; // 0x606 GT
	if(var_20_bool == 0) goto Label_1548; // 0x607 JumpB
	var_21_int = 8; // 0x608 PushI
	SendWorldWndMessage(var_21_int); // 0x609 Func
	goto Label_1557; // 0x60b Jump
	
Label_1557:
	var_22_float = 0; // 0x615 PushV
	var_22_float = var_17_float; // 0x616 Mov
	func_1588(var_22_float); // 0x617 NEW_2
	var_26_bool = 0; var_27_object = Obj(); var_28_string = ""; var_29_float = 0; var_30_float = 0; var_31_float = 0; // 0x619 PushV
	var_27_object = var_16_object; // 0x61a Mov
	var_28_string = "reputation"; // 0x61b MovS
	var_29_float = var_17_float; // 0x61c Mov
	var_30_float = 0; // 0x61d MovI
	var_31_float = 1; // 0x61e MovI
	func_1153(var_26_bool, var_27_object, var_28_string, var_29_float, var_30_float, var_31_float); // 0x61f NEW_2
	var_15_bool = 1; // 0x621 MovB
	return 0; // 0x622 Return
	
Label_1548:
	var_50_int = 0; // 0x60c PushI
	var_51_bool = var_17_float < var_50_int; // 0x60d LT
	if(var_51_bool == 0) goto Label_1555; // 0x60e JumpB
	var_52_int = 9; // 0x60f PushI
	SendWorldWndMessage(var_52_int); // 0x610 Func
	goto Label_1557; // 0x612 Jump
	
Label_1555:
	var_15_bool = 0; // 0x613 MovB
	return 0; // 0x614 Return
}


func_1153(var_26_bool, var_27_object, var_28_string, var_29_float, var_30_float, var_31_float)
{
	var_32_float = 0; var_33_float = 0; // 0x481 PushV
	var_34_bool = 0; var_35_object = Obj(); var_36_string = ""; // 0x482 PushV
	var_35_object = var_27_object; // 0x483 Mov
	var_36_string = var_28_string; // 0x484 Mov
	func_1141(var_34_bool, var_35_object, var_36_string); // 0x485 NEW_2
	var_43_bool = var_34_bool == 0; // 0x487 Not
	if(var_43_bool == 0) goto Label_1163; // 0x488 JumpB
	var_26_bool = 0; // 0x489 MovB
	return 2; // 0x48a Return
	
Label_1163:
	GetProperty(var_28_string, var_33_float); // 0x48b ObjFunc
	var_44_float = 0; var_45_float = 0; var_46_float = 0; var_47_float = 0; // 0x48d PushV
	var_45_float = var_33_float + var_29_float; // 0x48e Add2
	var_46_float = var_30_float; // 0x48f Mov
	var_47_float = var_31_float; // 0x490 Mov
	func_1525(var_44_float, var_45_float, var_46_float, var_47_float); // 0x491 NEW_2
	SetProperty(var_28_string, var_44_float); // 0x493 ObjFunc
	var_26_bool = 1; // 0x495 MovB
	return 2; // 0x496 Return
}


func_520(var_0_object, var_279_bool, var_280_float)
{
	var_281_bool = 0; var_282_cvector = CVector(0,0,0); var_283_cvector = CVector(0,0,0); var_284_cvector = CVector(0,0,0); var_285_float = 0; var_286_bool = 0; var_287_cvector = CVector(0,0,0); var_288_cvector = CVector(0,0,0); var_289_cvector = CVector(0,0,0); var_290_float = 0; // 0x208 PushV
	
Label_521:
	IsAnimationPlaying(var_286_bool); // 0x209 Func
	var_291_bool = var_286_bool == 0; // 0x20b Not
	if(var_291_bool == 0) goto Label_526; // 0x20c JumpB
	goto Label_558; // 0x20d Jump
	
Label_558:
	func_695(var_290_float); // 0x22f NEW_2
	var_279_bool = 0; // 0x231 MovB
	return 10; // 0x232 Return
	
Label_526:
	var_292_bool = 0; // 0x20e PushV
	func_591(var_292_bool); // 0x20f NEW_2
	if(var_292_bool == 0) goto Label_532; // 0x211 JumpB
	var_279_bool = 1; // 0x212 MovB
	return 10; // 0x213 Return
	
Label_532:
	var_335_bool = 0; var_336_object = Obj(); // 0x214 PushV
	var_336_object = var_0_object; // 0x215 MovT
	func_1289(var_335_bool, var_336_object); // 0x216 NEW_2
	var_337_bool = var_335_bool == 0; // 0x218 Not
	if(var_337_bool == 0) goto Label_540; // 0x219 JumpB
	var_279_bool = 0; // 0x21a MovB
	return 10; // 0x21b Return
	
Label_540:
	GetPFPosition(var_287_cvector); // 0x21c TObjFunc
	GetPFPosition(var_288_cvector); // 0x21e Func
	var_289_cvector = var_287_cvector - var_288_cvector; // 0x220 Sub2
	var_290_float = var_289_cvector | var_289_cvector; // 0x221 Or2
	var_338_float = var_280_float * var_280_float; // 0x222 Mult
	var_339_bool = var_290_float < var_338_float; // 0x223 LT
	if(var_339_bool == 0) goto Label_555; // 0x224 JumpB
	var_340_bool = 0; var_341_float = 0; // 0x225 PushV
	var_341_float = var_280_float; // 0x226 Mov
	func_356(var_290_float, var_340_bool, var_341_float); // 0x227 NEW_2
	var_279_bool = 1; // 0x229 MovB
	return 10; // 0x22a Return
	
Label_555:
	sync(); // 0x22b Func
	goto Label_521; // 0x22d Jump
}


func_1289(var_80_bool, var_81_object)
{
	var_82_int = 0; var_83_int = 0; // 0x509 PushV
	var_84_bool = 0; var_85_object = Obj(); // 0x50a PushV
	var_85_object = var_81_object; // 0x50b Mov
	func_1253(var_84_bool, var_85_object); // 0x50c NEW_2
	var_101_bool = var_84_bool == 0; // 0x50e Not
	if(var_101_bool == 0) goto Label_1298; // 0x50f JumpB
	var_80_bool = 0; // 0x510 MovB
	return 2; // 0x511 Return
	
Label_1298:
	var_102_bool = 0; var_103_object = Obj(); var_104_string = ""; // 0x512 PushV
	var_103_object = var_81_object; // 0x513 Mov
	var_104_string = "noaccess"; // 0x514 MovS
	func_1141(var_102_bool, var_103_object, var_104_string); // 0x515 NEW_2
	var_111_bool = var_102_bool == 0; // 0x517 Not
	if(var_111_bool == 0) goto Label_1307; // 0x518 JumpB
	var_80_bool = 1; // 0x519 MovB
	return 2; // 0x51a Return
	
Label_1307:
	var_112_string = "noaccess"; // 0x51b PushS
	GetProperty(var_112_string, var_83_int); // 0x51c ObjFunc
	var_113_int = 0; // 0x51e PushI
	var_80_bool = var_83_int == var_113_int; // 0x51f Eq2
	return 2; // 0x520 Return
}


func_652(var_0_object, var_242_bool)
{
	var_243_bool = 0; var_244_bool = 0; // 0x28c PushV
	var_245_string = "IsAttacking"; // 0x28d PushS
	var_246_int = 1; // 0x28e PushI
	var_247_bool = IsFuncExist(var_0_object, var_245_string, var_246_int); // 0x28f FuncExist
	if(var_247_bool == 0) goto Label_661; // 0x290 JumpB
	IsAttacking(var_244_bool); // 0x291 TObjFunc
	var_242_bool = var_244_bool; // 0x293 Mov
	return 2; // 0x294 Return
	
Label_661:
	var_242_bool = 0; // 0x295 MovB
	return 2; // 0x296 Return
}


func_784(var_2_int)
{
	var_10_int = 1; // 0x310 PushI
	KillTimer(var_10_int); // 0x311 Func
	var_11_int = var_2_int; // 0x313 PushT
	if(var_11_int == 0) goto Label_793; // 0x314 JumpB
	var_2_int = 0; // 0x315 TMovB
	var_12_string = "head"; // 0x316 PushS
	UnlookAsync(var_12_string); // 0x317 Func
	
Label_793:
	func_950(var_9_object); // 0x31a NEW_2
	return 0; // 0x31c Return
}


func_1425(var_15_object, var_18_cvector, var_19_cvector)
{
	var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); // 0x591 PushV
	GetScene(var_22_object); // 0x592 Func
	var_24_string = "scripted"; // 0x594 PushS
	var_25_string = "blood_dir.xml"; // 0x595 PushS
	AddActorByType(var_23_object, var_24_string, var_22_object, var_18_cvector, var_19_cvector, var_25_string); // 0x596 Func
	var_26_object = Obj(); // 0x598 PushV
	var_26_object = var_15_object; // 0x599 Mov
	func_1313(var_26_object); // 0x59a NEW_2
	return 4; // 0x59c Return
}


func_663(var_2_int, var_5_int)
{
	var_359_float = 0; var_360_int = 0; var_361_float = 0; var_362_int = 0; // 0x297 PushV
	var_363_bool = var_2_int == 0; // 0x298 Not
	if(var_363_bool == 0) goto Label_667; // 0x299 JumpB
	return 4; // 0x29a Return
	
Label_667:
	var_364_int = var_5_int; // 0x29b PushT
	if(var_364_int == 0) goto Label_675; // 0x29c JumpB
	var_365_int = -1; // 0x29d PushI
	var_5_int = var_5_int + var_365_int; // 0x29e Add2
	var_366_int = 0; // 0x29f PushI
	var_367_bool = var_5_int > var_366_int; // 0x2a0 GT
	if(var_367_bool == 0) goto Label_675; // 0x2a1 JumpB
	return 4; // 0x2a2 Return
	
Label_675:
	rand(var_361_float); // 0x2a3 Func
	var_368_float = 0; // 0x2a5 PushV
	func_713(var_368_float); // 0x2a6 NEW_2
	var_369_bool = var_361_float < var_368_float; // 0x2a8 LT
	if(var_369_bool == 0) goto Label_694; // 0x2a9 JumpB
	irand(var_362_int, var_361_float); // 0x2aa Func
	var_370_int = 1; // 0x2ac PushI
	var_362_int = var_362_int + var_370_int; // 0x2ad Add2
	var_371_string = "attack"; // 0x2ae PushS
	var_372_int = var_371_string + var_362_int; // 0x2af Add
	Speak(var_372_int); // 0x2b0 Func
	var_373_int = 0; // 0x2b2 PushV
	func_711(var_373_int); // 0x2b3 NEW_2
	var_5_int = var_373_int; // 0x2b4 TMov
	
Label_694:
	return 4; // 0x2b6 Return
}


func_1175(var_391_float, var_392_object, var_393_float, var_394_int)
{
	var_398_int = 0; var_399_string = ""; var_400_int = 0; var_401_float = 0; var_402_float = 0; var_403_float = 0; var_404_int = 0; var_405_string = ""; var_406_int = 0; var_407_float = 0; var_408_float = 0; var_409_float = 0; // 0x497 PushV
	var_410_bool = 0; var_411_object = Obj(); var_412_string = ""; // 0x498 PushV
	var_411_object = var_392_object; // 0x499 Mov
	var_412_string = "health"; // 0x49a MovS
	func_1141(var_410_bool, var_411_object, var_412_string); // 0x49b NEW_2
	var_413_bool = var_410_bool == 0; // 0x49d Not
	if(var_413_bool == 0) goto Label_1185; // 0x49e JumpB
	var_391_float = 0.0; // 0x49f MovF
	return 12; // 0x4a0 Return
	
Label_1185:
	var_414_bool = 0; var_415_object = Obj(); var_416_string = ""; // 0x4a1 PushV
	var_415_object = var_392_object; // 0x4a2 Mov
	var_416_string = "armor"; // 0x4a3 MovS
	func_1141(var_414_bool, var_415_object, var_416_string); // 0x4a4 NEW_2
	var_417_bool = var_414_bool == 0; // 0x4a6 Not
	if(var_417_bool == 0) goto Label_1194; // 0x4a7 JumpB
	var_404_int = 0; // 0x4a8 MovI
	goto Label_1197; // 0x4a9 Jump
	
Label_1197:
	var_418_string = "armor_"; // 0x4ad PushS
	var_419_string = ""; var_420_int = 0; // 0x4ae PushV
	var_420_int = var_394_int; // 0x4af Mov
	func_1115(var_419_string, var_420_int); // 0x4b0 NEW_2
	var_405_string = var_418_string + var_419_string; // 0x4b2 Add2
	var_425_bool = 0; var_426_object = Obj(); var_427_string = ""; // 0x4b3 PushV
	var_426_object = var_392_object; // 0x4b4 Mov
	var_427_string = var_405_string; // 0x4b5 Mov
	func_1141(var_425_bool, var_426_object, var_427_string); // 0x4b6 NEW_2
	var_428_bool = var_425_bool == 0; // 0x4b8 Not
	if(var_428_bool == 0) goto Label_1212; // 0x4b9 JumpB
	var_406_int = 0; // 0x4ba MovI
	goto Label_1214; // 0x4bb Jump
	
Label_1214:
	var_429_float = 0; var_430_float = 0; var_431_float = 0; // 0x4be PushV
	var_432_int = var_404_int + var_406_int; // 0x4bf Add
	var_433_float = 100.0; // 0x4c0 PushF
	var_430_float = var_432_int / var_432_int; // 0x4c1 Div2
	var_431_float = 1; // 0x4c2 MovI
	func_1518(var_429_float, var_430_float, var_431_float); // 0x4c3 NEW_2
	var_407_float = var_429_float; // 0x4c4 Mov
	var_435_string = "health"; // 0x4c6 PushS
	GetProperty(var_435_string, var_408_float); // 0x4c7 ObjFunc
	var_436_int = 1; // 0x4c9 PushI
	var_437_int = var_436_int - var_407_float; // 0x4ca Sub
	var_409_float = var_393_float * var_437_int; // 0x4cb Mult2
	var_438_string = "health"; // 0x4cc PushS
	var_439_float = 0; var_440_float = 0; var_441_float = 0; var_442_float = 0; // 0x4cd PushV
	var_440_float = var_408_float - var_409_float; // 0x4ce Sub2
	var_441_float = 0; // 0x4cf MovI
	var_442_float = 1; // 0x4d0 MovI
	func_1525(var_439_float, var_440_float, var_441_float, var_442_float); // 0x4d1 NEW_2
	SetProperty(var_438_string, var_439_float); // 0x4d3 ObjFunc
	var_445_bool = 0; var_446_object = Obj(); // 0x4d5 PushV
	var_446_object = var_392_object; // 0x4d6 Mov
	func_1136(var_445_bool, var_446_object); // 0x4d7 NEW_2
	if(var_445_bool == 0) goto Label_1246; // 0x4d9 JumpB
	var_447_float = 0; // 0x4da PushV
	var_447_float = -var_409_float; // 0x4db Neg2
	func_1571(var_447_float); // 0x4dc NEW_2
	
Label_1246:
	var_391_float = var_409_float; // 0x4de Mov
	return 12; // 0x4df Return
	
Label_1212:
	GetProperty(var_405_string, var_406_int); // 0x4bc ObjFunc
	
Label_1194:
	var_455_string = "armor"; // 0x4aa PushS
	GetProperty(var_455_string, var_404_int); // 0x4ab ObjFunc
}


func_282(var_1_int, var_2_int, var_4_float)
{
	var_44_bool = 0; var_45_bool = 0; var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_cvector = CVector(0,0,0); // 0x11a PushV
	var_1_int = 0; // 0x11b TMovI
	
Label_284:
	var_50_string = "all"; // 0x11c PushS
	var_51_string = "attack_begin"; // 0x11d PushS
	var_52_int = 1; // 0x11e PushI
	var_53_int = var_1_int + var_52_int; // 0x11f Add
	var_54_int = var_51_string + var_53_int; // 0x120 Add
	HasAnimation(var_47_bool, var_50_string, var_54_int); // 0x121 Func
	var_55_bool = var_47_bool == 0; // 0x123 Not
	if(var_55_bool == 0) goto Label_294; // 0x124 JumpB
	goto Label_297; // 0x125 Jump
	
Label_297:
	var_2_int = 0; // 0x129 TMovI
	
Label_298:
	var_56_string = "attack"; // 0x12a PushS
	var_57_int = 1; // 0x12b PushI
	var_58_int = var_2_int + var_57_int; // 0x12c Add
	var_59_int = var_56_string + var_58_int; // 0x12d Add
	IsExisting3DSound(var_48_bool, var_59_int); // 0x12e Func
	var_60_bool = var_48_bool == 0; // 0x130 Not
	if(var_60_bool == 0) goto Label_307; // 0x131 JumpB
	goto Label_310; // 0x132 Jump
	
Label_310:
	var_61_string = "all"; // 0x136 PushS
	var_62_string = "bjump"; // 0x137 PushS
	GetAnimationOffset(var_49_cvector, var_61_string, var_62_string); // 0x138 Func
	var_63_float = GetByIndex(var_49_cvector, 2); // 0x13a PushE
	var_4_float = -var_63_float; // 0x13b Neg2
	return 6; // 0x13c Return
	
Label_307:
	var_64_int = 1; // 0x133 PushI
	var_2_int = var_2_int + var_64_int; // 0x134 Add2
	goto Label_298; // 0x135 Jump
	
Label_294:
	var_65_int = 1; // 0x126 PushI
	var_1_int = var_1_int + var_65_int; // 0x127 Add2
	goto Label_284; // 0x128 Jump
}


func_29()
{
	var_16_object = Obj(); var_17_object = Obj(); // 0x1d PushV
	var_18_string = "player"; // 0x1e PushS
	FindActor(var_17_object, var_18_string); // 0x1f Func
	var_19_object = Obj(); var_20_bool = 0; var_21_float = 0; // 0x21 PushV
	var_19_object = var_17_object; // 0x22 Mov
	var_20_bool = 1; // 0x23 MovB
	var_21_float = 180.0; // 0x24 MovF
	func_53(var_13_bool, var_14_float, var_15_int, var_16_object, var_17_object, var_19_object, var_20_bool, var_21_float); // 0x25 NEW_2
	return 2; // 0x27 Return
}


func_1439()
{
	var_226_cvector = CVector(0,0,0); var_227_cvector = CVector(0,0,0); var_228_cvector = CVector(0,0,0); var_229_cvector = CVector(0,0,0); var_230_cvector = CVector(0,0,0); var_231_cvector = CVector(0,0,0); // 0x59f PushV
	GetPosition(var_229_cvector); // 0x5a0 ObjFunc
	GetPosition(var_230_cvector); // 0x5a2 Func
	var_231_cvector = var_229_cvector - var_230_cvector; // 0x5a4 Sub2
	var_232_float = GetByIndex(var_231_cvector, 0); // 0x5a5 PushE
	var_233_float = GetByIndex(var_231_cvector, 2); // 0x5a6 PushE
	RotateAsync(var_232_float, var_233_float); // 0x5a7 Func
	return 6; // 0x5a9 Return
}


func_928(var_0_object, var_1_int, var_17_int)
{
	var_18_int = 0; // 0x3a1 PushI
	var_19_bool = var_17_int != var_18_int; // 0x3a2 Neq
	if(var_19_bool == 0) goto Label_933; // 0x3a3 JumpB
	return 0; // 0x3a4 Return
	
Label_933:
	var_20_bool = 0; var_21_object = Obj(); // 0x3a5 PushV
	var_21_object = var_1_int; // 0x3a6 MovT
	func_966(var_20_bool, var_21_object); // 0x3a7 NEW_2
	var_56_bool = var_20_bool == 0; // 0x3a9 Not
	if(var_56_bool == 0) goto Label_940; // 0x3aa JumpB
	var_0_object = 1; // 0x3ab TMovB
	
Label_940:
	var_57_int = 0; // 0x3ac PushI
	KillTimer(var_57_int); // 0x3ad Func
	Stop(); // 0x3af Func
	return 0; // 0x3b1 Return
}


func_1313(var_26_object)
{
	var_27_bool = 0; var_28_int = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_string = ""; var_34_bool = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = ""; // 0x521 PushV
	var_41_bool = var_26_object == 0; // 0x522 NullEq
	if(var_41_bool == 0) goto Label_1317; // 0x523 JumpB
	return 14; // 0x524 Return
	
Label_1317:
	IsDead(var_34_bool); // 0x525 Func
	var_42_bool = var_34_bool; // 0x527 Push
	if(var_42_bool == 0) goto Label_1322; // 0x528 JumpB
	return 14; // 0x529 Return
	
Label_1322:
	GetSecondaryAnimationType(var_35_int); // 0x52a Func
	var_43_int = 0; // 0x52c PushI
	var_44_bool = var_35_int < var_43_int; // 0x52d LT
	if(var_44_bool == 0) goto Label_1328; // 0x52e JumpB
	return 14; // 0x52f Return
	
Label_1328:
	GetPosition(var_36_cvector); // 0x530 ObjFunc
	GetPosition(var_37_cvector); // 0x532 Func
	GetDirection(var_38_cvector); // 0x534 Func
	var_39_cvector = var_37_cvector - var_36_cvector; // 0x536 Sub2
	var_45_float = GetByIndex(var_39_cvector, 0); // 0x537 PushE
	var_46_float = GetByIndex(var_38_cvector, 0); // 0x538 PushE
	var_47_float = var_45_float * var_46_float; // 0x539 Mult
	var_48_float = GetByIndex(var_39_cvector, 2); // 0x53a PushE
	var_49_float = GetByIndex(var_38_cvector, 2); // 0x53b PushE
	var_50_float = var_48_float * var_49_float; // 0x53c Mult
	var_51_int = var_47_float + var_50_float; // 0x53d Add
	var_52_int = 0; // 0x53e PushI
	var_53_bool = var_51_int >= var_52_int; // 0x53f GE
	if(var_53_bool == 0) goto Label_1347; // 0x540 JumpB
	var_40_string = "fhit"; // 0x541 MovS
	goto Label_1348; // 0x542 Jump
	
Label_1348:
	var_54_string = "hit_react"; // 0x544 PushS
	var_55_string = "1"; // 0x545 PushS
	var_56_int = var_40_string + var_55_string; // 0x546 Add
	var_57_string = "2"; // 0x547 PushS
	var_58_int = var_40_string + var_57_string; // 0x548 Add
	var_59_int = -10; // 0x549 PushI
	FadeSecondaryAnimation(var_54_string, var_56_int, var_58_int, var_59_int); // 0x54a Func
	return 14; // 0x54c Return
	
Label_1347:
	var_40_string = "bhit"; // 0x543 MovS
}


func_1571(var_447_float)
{
	var_448_object = Obj(); var_449_object = Obj(); // 0x623 PushV
	CreateFloatVector(var_449_object); // 0x624 Func
	add(var_447_float); // 0x626 ObjFunc
	var_450_int = 0; // 0x628 PushI
	var_451_bool = var_447_float < var_450_int; // 0x629 LT
	if(var_451_bool == 0) goto Label_1583; // 0x62a JumpB
	var_452_float = 0.7; // 0x62b PushF
	var_453_int = 500; // 0x62c PushI
	RumblePlay(var_452_float, var_453_int); // 0x62d Func
	
Label_1583:
	var_454_int = 15; // 0x62f PushI
	SendWorldWndMessage(var_454_int, var_449_object); // 0x630 Func
	return 2; // 0x632 Return
}


func_41(var_388_float)
{
	var_388_float = 0.1; // 0x2a MovF
	return 0; // 0x2b Return
}


func_1450(var_139_object)
{
	var_140_float = 0; var_141_cvector = CVector(0,0,0); var_142_float = 0; var_143_cvector = CVector(0,0,0); // 0x5aa PushV
	GetEyesHeight(var_142_float); // 0x5ab ObjFunc
	var_143_cvector = CVector(0.0, 0.0, 0.0); // 0x5ad MovV
	var_144_float = GetByIndex(var_143_cvector, 1); // 0x5ae PushE
	var_144_float = var_142_float; // 0x5af Mov
	SetByIndex(var_143_cvector, 1) = var_144_float; // 0x5b0 PopE
	var_145_string = "head"; // 0x5b1 PushS
	LookAsync(var_139_object, var_145_string, var_143_cvector); // 0x5b2 Func
	return 4; // 0x5b4 Return
}


func_44(var_395_int)
{
	var_395_int = 0; // 0x2d MovI
	return 0; // 0x2e Return
}


func_563(var_0_object, var_294_bool)
{
	var_295_cvector = CVector(0,0,0); var_296_cvector = CVector(0,0,0); var_297_cvector = CVector(0,0,0); var_298_float = 0; var_299_float = 0; var_300_cvector = CVector(0,0,0); var_301_cvector = CVector(0,0,0); var_302_cvector = CVector(0,0,0); var_303_float = 0; var_304_float = 0; // 0x233 PushV
	var_305_bool = 0; var_306_object = Obj(); // 0x234 PushV
	var_306_object = var_0_object; // 0x235 MovT
	func_1289(var_305_bool, var_306_object); // 0x236 NEW_2
	var_307_bool = var_305_bool == 0; // 0x238 Not
	if(var_307_bool == 0) goto Label_572; // 0x239 JumpB
	var_294_bool = 0; // 0x23a MovB
	return 10; // 0x23b Return
	
Label_572:
	var_308_bool = 0; // 0x23c PushV
	func_652(var_304_float, var_308_bool); // 0x23d NEW_2
	if(var_308_bool == 0) goto Label_589; // 0x23f JumpB
	GetPFPosition(var_300_cvector); // 0x240 TObjFunc
	GetPFPosition(var_301_cvector); // 0x242 Func
	var_302_cvector = var_300_cvector - var_301_cvector; // 0x244 Sub2
	var_303_float = var_302_cvector | var_302_cvector; // 0x245 Or2
	GetAttackDistance(var_304_float); // 0x246 TObjFunc
	var_309_int = 50; // 0x248 PushI
	var_304_float = var_304_float + var_309_int; // 0x249 Add2
	var_310_float = var_304_float * var_304_float; // 0x24a Mult
	var_294_bool = var_303_float <= var_310_float; // 0x24b LE2
	return 10; // 0x24c Return
	
Label_589:
	var_294_bool = 0; // 0x24d MovB
	return 10; // 0x24e Return
}


func_1588(var_22_float)
{
	var_23_object = Obj(); var_24_object = Obj(); // 0x634 PushV
	CreateFloatVector(var_24_object); // 0x635 Func
	add(var_22_float); // 0x637 ObjFunc
	var_25_int = 16; // 0x639 PushI
	SendWorldWndMessage(var_25_int, var_24_object); // 0x63a Func
	return 2; // 0x63c Return
}


func_53(var_0_object, var_3_bool, var_5_int, var_19_object, var_20_bool, var_21_float, var_128_bool, var_220_bool)
{
	var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_bool = 0; var_26_bool = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_bool = 0; var_32_float = 0; var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; var_37_bool = 0; var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_bool = 0; var_43_float = 0; // 0x35 PushV
	func_282(var_41_cvector, var_42_bool, var_43_float); // 0x37 NEW_2
	var_5_int = 0; // 0x39 TMovI
	var_66_string = "@GetAttackDistance"; // 0x3a PushS
	var_67_int = 1; // 0x3b PushI
	var_68_bool = IsFuncExist(var_19_object, var_66_string, var_67_int); // 0x3c FuncExist
	if(var_68_bool == 0) goto Label_67; // 0x3d JumpB
	GetAttackDistance(var_33_float); // 0x3e ObjFunc
	var_69_int = 50; // 0x40 PushI
	var_33_float = var_33_float + var_69_int; // 0x41 Add2
	goto Label_68; // 0x42 Jump
	
Label_68:
	var_70_int = 150; // 0x44 PushI
	var_71_bool = var_33_float >= var_70_int; // 0x45 GE
	if(var_71_bool == 0) goto Label_72; // 0x46 JumpB
	var_33_float = 150; // 0x47 MovI
	
Label_72:
	var_3_bool = 0; // 0x48 TMovB
	var_0_object = var_19_object; // 0x49 TMov
	IsPlayerActor(var_0_object, var_36_bool); // 0x4a Func
	var_72_bool = var_36_bool; // 0x4c Push
	if(var_72_bool == 0) goto Label_86; // 0x4d JumpB
	var_73_string = "attack"; // 0x4e PushS
	PlayGlobalMusic(var_73_string); // 0x4f Func
	var_74_object = Obj(); // 0x51 PushV
	func_1502(var_74_object); // 0x52 NEW_2
	SendPlayerEnemy(var_19_object, var_74_object); // 0x54 Func
	
Label_86:
	var_77_bool = var_20_bool; // 0x56 Push
	if(var_77_bool == 0) goto Label_90; // 0x57 JumpB
	var_37_bool = 0; // 0x58 MovB
	goto Label_91; // 0x59 Jump
	
Label_91:
	var_78_float = 400.0; // 0x5b PushF
	var_38_float = var_78_float + var_33_float; // 0x5c Add2
	
Label_93:
	var_79_bool = 0; // 0x5d PushV
	var_79_bool = 0; // 0x5e MovB
	var_80_bool = 0; var_81_object = Obj(); // 0x5f PushV
	var_81_object = var_0_object; // 0x60 MovT
	func_1289(var_80_bool, var_81_object); // 0x61 NEW_2
	if(var_80_bool == 0) goto Label_103; // 0x63 JumpB
	var_114_bool = var_3_bool == 0; // 0x64 Not
	if(var_114_bool == 0) goto Label_103; // 0x65 JumpB
	var_79_bool = 1; // 0x66 MovB
	
Label_103:
	if(var_79_bool == 0) goto Label_265; // 0x67 JumpB
	func_695(var_43_float); // 0x69 NEW_2
	GetPFPosition(var_34_cvector); // 0x6b TObjFunc
	GetPFPosition(var_35_cvector); // 0x6d Func
	var_39_cvector = var_34_cvector - var_35_cvector; // 0x6f Sub2
	var_40_float = var_39_cvector | var_39_cvector; // 0x70 Or2
	var_120_float = var_38_float * var_38_float; // 0x71 Mult
	var_121_bool = var_40_float >= var_120_float; // 0x72 GE
	if(var_121_bool == 0) goto Label_131; // 0x73 JumpB
	var_122_bool = 0; var_123_object = Obj(); var_124_float = 0; var_125_float = 0; var_126_bool = 0; var_127_bool = 0; // 0x74 PushV
	var_123_object = var_0_object; // 0x75 MovT
	var_124_float = var_33_float; // 0x76 Mov
	var_125_float = 3000.0; // 0x77 MovF
	var_126_bool = 1; // 0x78 MovB
	var_127_bool = 0; // 0x79 MovB
	TaskCall(2); // 0x7a TaskCall
	func_721(var_130_bool, var_122_bool, var_123_object, var_124_float, var_125_float, var_126_bool, var_127_bool); // 0x7b NEW_2
	TaskReturn(); // 0x7c TaskReturn
	var_205_bool = var_128_bool == 0; // 0x7e Not
	if(var_205_bool == 0) goto Label_129; // 0x7f JumpB
	goto Label_265; // 0x80 Jump
	
Label_265:
	WaitForAnimEnd(); // 0x109 Func
	var_206_bool = var_3_bool; // 0x10b PushT
	if(var_206_bool == 0) goto Label_270; // 0x10c JumpB
	return 22; // 0x10d Return
	
Label_270:
	var_207_string = "all"; // 0x10e PushS
	var_208_string = "attack_off"; // 0x10f PushS
	PlayAnimation(var_207_string, var_208_string); // 0x110 Func
	WaitForAnimEnd(); // 0x112 Func
	var_209_bool = var_36_bool; // 0x114 Push
	if(var_209_bool == 0) goto Label_281; // 0x115 JumpB
	var_210_float = 2.0; // 0x116 PushF
	Sleep(var_210_float); // 0x117 Func
	
Label_281:
	return 22; // 0x119 Return
	
Label_129:
	var_37_bool = 0; // 0x81 MovB
	goto Label_264; // 0x82 Jump
	
Label_264:
	goto Label_93; // 0x108 Jump
	
Label_131:
	var_211_float = var_21_float * var_21_float; // 0x83 Mult
	var_212_bool = var_40_float >= var_211_float; // 0x84 GE
	if(var_212_bool == 0) goto Label_256; // 0x85 JumpB
	GetPFPosition(var_41_cvector); // 0x86 TObjFunc
	CanReachByPF(var_42_bool, var_41_cvector); // 0x88 Func
	var_213_bool = var_42_bool == 0; // 0x8a Not
	if(var_213_bool == 0) goto Label_155; // 0x8b JumpB
	var_214_bool = 0; var_215_object = Obj(); var_216_float = 0; var_217_float = 0; var_218_bool = 0; var_219_bool = 0; // 0x8c PushV
	var_215_object = var_0_object; // 0x8d MovT
	var_216_float = var_33_float; // 0x8e Mov
	var_217_float = 3000.0; // 0x8f MovF
	var_218_bool = 1; // 0x90 MovB
	var_219_bool = 0; // 0x91 MovB
	TaskCall(2); // 0x92 TaskCall
	func_721(var_222_bool, var_214_bool, var_215_object, var_216_float, var_217_float, var_218_bool, var_219_bool); // 0x93 NEW_2
	TaskReturn(); // 0x94 TaskReturn
	var_223_bool = var_220_bool == 0; // 0x96 Not
	if(var_223_bool == 0) goto Label_153; // 0x97 JumpB
	goto Label_265; // 0x98 Jump
	
Label_153:
	var_37_bool = 0; // 0x99 MovB
	goto Label_93; // 0x9a Jump
	
Label_155:
	var_224_bool = var_37_bool == 0; // 0x9b Not
	if(var_224_bool == 0) goto Label_180; // 0x9c JumpB
	var_225_object = Obj(); // 0x9d PushV
	var_225_object = var_0_object; // 0x9e MovT
	func_1439(); // 0x9f NEW_2
	var_234_string = "all"; // 0xa1 PushS
	var_235_string = "attack_on"; // 0xa2 PushS
	PlayAnimation(var_234_string, var_235_string); // 0xa3 Func
	WaitForAnimEnd(); // 0xa5 Func
	func_695(var_43_float); // 0xa8 NEW_2
	StopAsync(); // 0xaa Func
	var_37_bool = 1; // 0xac MovB
	var_236_bool = 0; var_237_object = Obj(); // 0xad PushV
	var_237_object = var_0_object; // 0xae MovT
	func_1289(var_236_bool, var_237_object); // 0xaf NEW_2
	var_238_bool = var_236_bool == 0; // 0xb1 Not
	if(var_238_bool == 0) goto Label_180; // 0xb2 JumpB
	goto Label_265; // 0xb3 Jump
	
Label_180:
	rand(var_43_float); // 0xb4 Func
	var_239_bool = 0; // 0xb6 PushV
	var_239_bool = 1; // 0xb7 MovB
	var_240_float = 0.25; // 0xb8 PushF
	var_241_bool = var_43_float < var_240_float; // 0xb9 LT
	if(var_241_bool == 0) goto Label_192; // 0xba JumpB
	var_242_bool = 0; // 0xbb PushV
	func_652(var_239_bool, var_242_bool); // 0xbc NEW_2
	if(var_242_bool == 0) goto Label_192; // 0xbe JumpB
	var_239_bool = 0; // 0xbf MovB
	
Label_192:
	if(var_239_bool == 0) goto Label_209; // 0xc0 JumpB
	Face(var_0_object); // 0xc1 Func
	func_702(); // 0xc4 NEW_2
	var_277_string = "all"; // 0xc6 PushS
	var_278_string = "attack_stay"; // 0xc7 PushS
	PlayAnimation(var_277_string, var_278_string); // 0xc8 Func
	var_279_bool = 0; var_280_float = 0; // 0xca PushV
	var_280_float = var_21_float; // 0xcb Mov
	func_520(var_43_float, var_279_bool, var_280_float); // 0xcc NEW_2
	StopAsync(); // 0xce Func
	goto Label_255; // 0xd0 Jump
	
Label_255:
	goto Label_264; // 0xff Jump
	
Label_209:
	Face(var_0_object); // 0xd1 Func
	var_498_string = "all"; // 0xd3 PushS
	var_499_string = "fjump"; // 0xd4 PushS
	PlayAnimation(var_498_string, var_499_string); // 0xd5 Func
	WaitForAnimEnd(); // 0xd7 Func
	func_695(var_43_float); // 0xda NEW_2
	var_500_cvector = CVector(0.0, 0.0, 0.0); // 0xdc PushVec
	SetSpeed(var_500_cvector); // 0xdd Func
	Stop(); // 0xdf Func
	StopAsync(); // 0xe1 Func
	var_501_bool = 0; // 0xe3 PushV
	func_652(var_43_float, var_501_bool); // 0xe4 NEW_2
	var_502_bool = var_501_bool == 0; // 0xe6 Not
	if(var_502_bool == 0) goto Label_255; // 0xe7 JumpB
	var_503_bool = 0; var_504_object = Obj(); // 0xe8 PushV
	var_504_object = var_0_object; // 0xe9 MovT
	func_1289(var_503_bool, var_504_object); // 0xea NEW_2
	var_505_bool = var_503_bool == 0; // 0xec Not
	if(var_505_bool == 0) goto Label_239; // 0xed JumpB
	goto Label_265; // 0xee Jump
	
Label_239:
	GetPFPosition(var_34_cvector); // 0xef TObjFunc
	GetPFPosition(var_35_cvector); // 0xf1 Func
	var_39_cvector = var_34_cvector - var_35_cvector; // 0xf3 Sub2
	var_40_float = var_39_cvector | var_39_cvector; // 0xf4 Or2
	var_506_float = var_21_float * var_21_float; // 0xf5 Mult
	var_507_bool = var_40_float < var_506_float; // 0xf6 LT
	if(var_507_bool == 0) goto Label_255; // 0xf7 JumpB
	var_508_bool = 0; var_509_float = 0; // 0xf8 PushV
	var_509_float = var_21_float; // 0xf9 Mov
	func_356(var_43_float, var_508_bool, var_509_float); // 0xfa NEW_2
	var_510_bool = var_508_bool == 0; // 0xfc Not
	if(var_510_bool == 0) goto Label_255; // 0xfd JumpB
	goto Label_265; // 0xfe Jump
	
Label_256:
	var_511_bool = 0; var_512_float = 0; // 0x100 PushV
	var_512_float = var_21_float; // 0x101 Mov
	func_356(var_43_float, var_511_bool, var_512_float); // 0x102 NEW_2
	var_513_bool = var_511_bool == 0; // 0x104 Not
	if(var_513_bool == 0) goto Label_263; // 0x105 JumpB
	goto Label_265; // 0x106 Jump
	
Label_263:
	var_37_bool = 1; // 0x107 MovB
	
Label_90:
	var_37_bool = 1; // 0x5a MovB
	
Label_67:
	var_33_float = var_21_float; // 0x43 Mov
}


func_1461(var_248_string)
{
	var_249_bool = 0; var_250_int = 0; var_251_bool = 0; var_252_int = 0; var_253_bool = 0; var_254_float = 0; var_255_cvector = CVector(0,0,0); var_256_cvector = CVector(0,0,0); var_257_bool = 0; var_258_int = 0; var_259_bool = 0; var_260_int = 0; var_261_bool = 0; var_262_float = 0; var_263_cvector = CVector(0,0,0); var_264_cvector = CVector(0,0,0); // 0x5b5 PushV
	IsExisting3DSound(var_257_bool, var_248_string); // 0x5b6 Func
	var_265_bool = var_257_bool == 0; // 0x5b8 Not
	if(var_265_bool == 0) goto Label_1486; // 0x5b9 JumpB
	var_258_int = 0; // 0x5ba MovI
	
Label_1467:
	var_266_int = 1; // 0x5bb PushI
	var_267_int = var_258_int + var_266_int; // 0x5bc Add
	var_268_int = var_248_string + var_267_int; // 0x5bd Add
	IsExisting3DSound(var_259_bool, var_268_int); // 0x5be Func
	var_269_bool = var_259_bool == 0; // 0x5c0 Not
	if(var_269_bool == 0) goto Label_1475; // 0x5c1 JumpB
	goto Label_1478; // 0x5c2 Jump
	
Label_1478:
	var_270_bool = var_258_int == 0; // 0x5c6 Not
	if(var_270_bool == 0) goto Label_1481; // 0x5c7 JumpB
	return 16; // 0x5c8 Return
	
Label_1481:
	irand(var_260_int, var_258_int); // 0x5c9 Func
	var_271_int = 1; // 0x5cb PushI
	var_272_int = var_260_int + var_271_int; // 0x5cc Add
	var_248_string = var_248_string + var_272_int; // 0x5cd Add2
	
Label_1486:
	Is3DSoundLoaded(var_261_bool, var_248_string); // 0x5ce Func
	var_273_bool = var_261_bool; // 0x5d0 Push
	if(var_273_bool == 0) goto Label_1501; // 0x5d1 JumpB
	GetEyesHeight(var_262_float); // 0x5d2 Func
	GetDirection(var_263_cvector); // 0x5d4 Func
	var_274_int = 50; // 0x5d6 PushI
	var_264_cvector = var_263_cvector * var_274_int; // 0x5d7 Mult2
	var_275_float = GetByIndex(var_264_cvector, 1); // 0x5d8 PushE
	var_275_float = var_275_float + var_262_float; // 0x5d9 Add2
	SetByIndex(var_264_cvector, 1) = var_275_float; // 0x5da PopE
	PlayGlobalSound(var_248_string, var_264_cvector); // 0x5db Func
	
Label_1501:
	return 16; // 0x5dd Return
	
Label_1475:
	var_276_int = 1; // 0x5c3 PushI
	var_258_int = var_258_int + var_276_int; // 0x5c4 Add2
	goto Label_1467; // 0x5c5 Jump
}


func_695(var_0_object)
{
	var_115_object = Obj(); // 0x2b7 PushV
	var_115_object = var_0_object; // 0x2b8 MovT
	func_1598(var_115_object); // 0x2b9 NEW_2
	return 0; // 0x2bb Return
}


func_950(var_0_object)
{
	var_0_object = 1; // 0x3b6 TMovB
	var_13_int = 0; // 0x3b7 PushI
	KillTimer(var_13_int); // 0x3b8 Func
	Stop(); // 0x3ba Func
	return 0; // 0x3bc Return
}


func_826(var_0_object, var_1_int, var_151_bool, var_152_object, var_153_float, var_154_float, var_155_bool, var_156_bool)
{
	var_157_bool = 0; var_158_bool = 0; var_159_object = Obj(); var_160_cvector = CVector(0,0,0); var_161_cvector = CVector(0,0,0); var_162_cvector = CVector(0,0,0); var_163_float = 0; var_164_object = Obj(); var_165_bool = 0; var_166_bool = 0; var_167_object = Obj(); var_168_cvector = CVector(0,0,0); var_169_cvector = CVector(0,0,0); var_170_cvector = CVector(0,0,0); var_171_float = 0; var_172_object = Obj(); // 0x33a PushV
	var_0_object = 0; // 0x33b TMovB
	var_1_int = var_152_object; // 0x33c TMov
	var_166_bool = var_156_bool; // 0x33d Mov
	
Label_830:
	var_173_bool = 0; var_174_object = Obj(); // 0x33e PushV
	var_174_object = var_152_object; // 0x33f Mov
	func_966(var_173_bool, var_174_object); // 0x340 NEW_2
	var_177_bool = var_173_bool == 0; // 0x342 Not
	if(var_177_bool == 0) goto Label_838; // 0x343 JumpB
	var_151_bool = 0; // 0x344 MovB
	return 16; // 0x345 Return
	
Label_838:
	GetPosition(var_168_cvector); // 0x346 ObjFunc
	GetPosition(var_169_cvector); // 0x348 Func
	var_170_cvector = var_168_cvector - var_169_cvector; // 0x34a Sub2
	var_171_float = var_170_cvector | var_170_cvector; // 0x34b Or2
	var_178_bool = 0; // 0x34c PushV
	var_178_bool = 0; // 0x34d MovB
	var_179_int = 0; // 0x34e PushI
	var_180_bool = var_154_float > var_179_int; // 0x34f GT
	if(var_180_bool == 0) goto Label_853; // 0x350 JumpB
	var_181_float = var_154_float * var_154_float; // 0x351 Mult
	var_182_bool = var_171_float > var_181_float; // 0x352 GT
	if(var_182_bool == 0) goto Label_853; // 0x353 JumpB
	var_178_bool = 1; // 0x354 MovB
	
Label_853:
	if(var_178_bool == 0) goto Label_858; // 0x355 JumpB
	Stop(); // 0x356 Func
	var_151_bool = 0; // 0x358 MovB
	return 16; // 0x359 Return
	
Label_858:
	var_183_float = var_153_float * var_153_float; // 0x35a Mult
	var_184_bool = var_171_float > var_183_float; // 0x35b GT
	if(var_184_bool == 0) goto Label_920; // 0x35c JumpB
	GetPFPosition(var_168_cvector); // 0x35d ObjFunc
	FindPathTo(var_172_object, var_168_cvector); // 0x35f Func
	var_185_bool = var_172_object != 0; // 0x361 NullNeq
	if(var_185_bool == 0) goto Label_869; // 0x362 JumpB
	var_167_object = var_172_object; // 0x363 Mov
	var_172_object = 0; // 0x364 SetNull
	
Label_869:
	var_186_bool = var_167_object != 0; // 0x365 NullNeq
	if(var_186_bool == 0) goto Label_902; // 0x366 JumpB
	var_187_bool = var_166_bool; // 0x367 Push
	if(var_187_bool == 0) goto Label_879; // 0x368 JumpB
	var_166_bool = 0; // 0x369 MovB
	RotatePath(var_167_object, var_165_bool); // 0x36a Func
	var_188_bool = var_165_bool == 0; // 0x36c Not
	if(var_188_bool == 0) goto Label_879; // 0x36d JumpB
	goto Label_926; // 0x36e Jump
	
Label_926:
	var_151_bool = !var_0_object; // 0x39e Not2
	return 16; // 0x39f Return
	
Label_879:
	var_189_int = 0; // 0x36f PushI
	var_190_float = 0.3; // 0x370 PushF
	SetTimer(var_189_int, var_190_float); // 0x371 Func
	var_191_string = ""; // 0x373 PushV
	func_973(var_191_string); // 0x374 NEW_2
	var_192_string = ""; // 0x376 PushV
	func_975(var_192_string); // 0x377 NEW_2
	FollowPath(var_167_object, var_155_bool, var_165_bool, var_191_string, var_192_string); // 0x379 Func
	var_193_bool = var_165_bool == 0; // 0x37b Not
	if(var_193_bool == 0) goto Label_900; // 0x37c JumpB
	var_194_object = var_0_object; // 0x37d PushT
	if(var_194_object == 0) goto Label_898; // 0x37e JumpB
	var_167_object = 0; // 0x37f SetNull
	goto Label_926; // 0x380 Jump
	
Label_898:
	goto Label_925; // 0x382 Jump
	
Label_925:
	goto Label_830; // 0x39d Jump
	
Label_900:
	var_167_object = 0; // 0x384 SetNull
	goto Label_918; // 0x385 Jump
	
Label_918:
	var_172_object = 0; // 0x396 SetNull
	goto Label_924; // 0x397 Jump
	
Label_924:
	var_167_object = 0; // 0x39c SetNull
	
Label_902:
	var_195_int = 0; // 0x386 PushI
	KillTimer(var_195_int); // 0x387 Func
	var_196_float = 0.5; // 0x389 PushF
	Sleep(var_196_float, var_165_bool); // 0x38a Func
	var_197_bool = var_165_bool == 0; // 0x38c Not
	if(var_197_bool == 0) goto Label_914; // 0x38d JumpB
	var_198_object = var_0_object; // 0x38e PushT
	if(var_198_object == 0) goto Label_914; // 0x38f JumpB
	var_167_object = 0; // 0x390 SetNull
	goto Label_926; // 0x391 Jump
	
Label_914:
	var_199_int = 0; // 0x392 PushI
	var_200_float = 0.3; // 0x393 PushF
	SetTimer(var_199_int, var_200_float); // 0x394 Func
	
Label_920:
	var_201_int = 0; // 0x398 PushI
	KillTimer(var_201_int); // 0x399 Func
	goto Label_926; // 0x39b Jump
}


func_1083(var_76_string)
{
	RemoveRTEnvelope(); // 0x43c Func
	SetDeathState(); // 0x43e Func
	Stop(); // 0x440 Func
	StopAsync(); // 0x442 Func
	StopSecondaryAnimation(); // 0x444 Func
	var_77_string = ""; // 0x446 PushV
	var_77_string = var_76_string; // 0x447 Mov
	func_1461(var_77_string); // 0x448 NEW_2
	var_106_string = "all"; // 0x44a PushS
	PlayAnimation(var_106_string, var_76_string); // 0x44b Func
	WaitForAnimEnd(); // 0x44d Func
	var_107_string = "all"; // 0x44f PushS
	LockAnimationEnd(var_107_string, var_76_string); // 0x450 Func
	RemoveEnvelope(); // 0x452 Func
	return 0; // 0x454 Return
}


func_700(var_456_int)
{
	var_456_int = 0; // 0x2bc MovI
	return 0; // 0x2bd Return
}


func_317(var_0_object, var_377_float, var_378_int)
{
	var_379_object = Obj(); var_380_float = 0; var_381_float = 0; var_382_object = Obj(); var_383_float = 0; var_384_float = 0; // 0x13d PushV
	var_385_float = 0.9; // 0x13e PushF
	var_386_float = var_377_float * var_385_float; // 0x13f Mult
	GetVictim(var_386_float, var_382_object); // 0x140 Func
	ReportAttack(var_0_object); // 0x142 Func
	var_387_bool = var_382_object == var_0_object; // 0x144 Eq
	if(var_387_bool == 0) goto Label_354; // 0x145 JumpB
	var_388_float = 0; var_389_object = Obj(); var_390_int = 0; // 0x146 PushV
	var_389_object = var_382_object; // 0x147 Mov
	var_390_int = var_378_int; // 0x148 Mov
	func_41(var_390_int); // 0x149 NEW_2
	var_383_float = var_388_float; // 0x14a Mov
	var_391_float = 0; var_392_object = Obj(); var_393_float = 0; var_394_int = 0; // 0x14c PushV
	var_392_object = var_382_object; // 0x14d Mov
	var_393_float = var_383_float; // 0x14e Mov
	var_395_int = 0; var_396_object = Obj(); var_397_int = 0; // 0x14f PushV
	var_396_object = var_382_object; // 0x150 Mov
	var_397_int = var_378_int; // 0x151 Mov
	func_44(var_397_int); // 0x152 NEW_2
	var_394_int = var_395_int; // 0x153 Mov
	func_1175(var_391_float, var_392_object, var_393_float, var_394_int); // 0x155 NEW_2
	var_384_float = var_391_float; // 0x156 Mov
	var_456_int = 0; // 0x158 PushV
	func_700(var_456_int); // 0x159 NEW_2
	ReportHit(var_0_object, var_456_int, var_384_float, var_383_float); // 0x15b Func
	var_457_object = Obj(); var_458_float = 0; // 0x15d PushV
	var_457_object = var_382_object; // 0x15e Mov
	var_458_float = var_384_float; // 0x15f Mov
	func_707(); // 0x160 NEW_2
	
Label_354:
	return 6; // 0x162 Return
}


func_702()
{
	var_248_string = ""; // 0x2be PushV
	var_248_string = "attack_stay"; // 0x2bf MovS
	func_1461(var_248_string); // 0x2c0 NEW_2
	return 0; // 0x2c2 Return
}


func_1598(var_115_object)
{
	var_116_bool = 0; var_117_bool = 0; // 0x63e PushV
	IsPlayerActor(var_115_object, var_117_bool); // 0x63f Func
	var_118_bool = var_117_bool; // 0x641 Push
	if(var_118_bool == 0) goto Label_1606; // 0x642 JumpB
	var_119_string = "attack"; // 0x643 PushS
	PlayGlobalMusic(var_119_string); // 0x644 Func
	
Label_1606:
	return 2; // 0x646 Return
}


func_707()
{
	return 0; // 0x2c4 Return
}


func_709(var_481_bool)
{
	var_481_bool = 1; // 0x2c5 MovB
	return 0; // 0x2c6 Return
}


func_966(var_173_bool, var_174_object)
{
	var_175_bool = 0; var_176_object = Obj(); // 0x3c7 PushV
	var_176_object = var_174_object; // 0x3c8 Mov
	func_1289(var_175_bool, var_176_object); // 0x3c9 NEW_2
	var_173_bool = var_175_bool; // 0x3ca Mov
	return 0; // 0x3cc Return
}


func_1607()
{
	var_352_object = Obj(); var_353_object = Obj(); // 0x647 PushV
	GetScene(var_353_object); // 0x648 Func
	var_354_string = "battle"; // 0x64a PushS
	var_355_object = Obj(); // 0x64b PushV
	func_1502(var_355_object); // 0x64c NEW_2
	BroadcastMessage(var_354_string, var_355_object, var_353_object); // 0x64e Func
	return 2; // 0x650 Return
}


func_711(var_373_int)
{
	var_373_int = 1; // 0x2c7 MovI
	return 0; // 0x2c8 Return
}


func_713(var_368_float)
{
	var_368_float = 0.5; // 0x2c9 MovF
	return 0; // 0x2ca Return
}


func_973(var_191_string)
{
	var_191_string = "walk"; // 0x3cd MovS
	return 0; // 0x3ce Return
}


func_1357(var_13_object, var_14_int, var_15_float)
{
	var_16_cvector = CVector(0,0,0); var_17_object = Obj(); var_18_int = 0; var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_int = 0; var_23_int = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_object = Obj(); var_27_int = 0; var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_int = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0); // 0x54d PushV
	var_34_bool = 0; // 0x54e PushV
	var_34_bool = 0; // 0x54f MovB
	var_35_bool = 0; // 0x550 PushV
	var_35_bool = 0; // 0x551 MovB
	var_36_object = var_13_object; // 0x552 Push
	if(var_36_object == 0) goto Label_1368; // 0x553 JumpB
	var_37_int = 4; // 0x554 PushI
	var_38_bool = var_14_int != var_37_int; // 0x555 Neq
	if(var_38_bool == 0) goto Label_1368; // 0x556 JumpB
	var_35_bool = 1; // 0x557 MovB
	
Label_1368:
	if(var_35_bool == 0) goto Label_1373; // 0x558 JumpB
	var_39_int = 5; // 0x559 PushI
	var_40_bool = var_14_int != var_39_int; // 0x55a Neq
	if(var_40_bool == 0) goto Label_1373; // 0x55b JumpB
	var_34_bool = 1; // 0x55c MovB
	
Label_1373:
	if(var_34_bool == 0) goto Label_1420; // 0x55d JumpB
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); // 0x55e PushV
	var_43_cvector = CVector(0,0,0); var_44_object = Obj(); // 0x55f PushV
	var_44_object = var_13_object; // 0x560 Mov
	func_1129(var_44_object); // 0x561 NEW_2
	var_42_cvector = var_43_cvector; // 0x562 Mov
	func_1508(var_41_cvector, var_42_cvector); // 0x564 NEW_2
	var_25_cvector = var_41_cvector; // 0x565 Mov
	CreateVectorVector(var_26_object); // 0x567 Func
	var_27_int = 1; // 0x569 MovI
	
Label_1386:
	var_54_string = "hit"; // 0x56a PushS
	var_55_int = var_54_string + var_27_int; // 0x56b Add
	GetGeometryLocator(var_55_int, var_28_bool, var_29_cvector, var_30_cvector); // 0x56c Func
	var_56_bool = var_28_bool == 0; // 0x56e Not
	if(var_56_bool == 0) goto Label_1393; // 0x56f JumpB
	goto Label_1402; // 0x570 Jump
	
Label_1402:
	size(var_31_int); // 0x57a ObjFunc
	var_57_int = var_31_int; // 0x57c Push
	if(var_57_int == 0) goto Label_1419; // 0x57d JumpB
	irand(var_32_int, var_31_int); // 0x57e Func
	get(var_33_cvector, var_32_int); // 0x580 ObjFunc
	var_58_object = Obj(); var_59_int = 0; var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); // 0x582 PushV
	var_58_object = var_13_object; // 0x583 Mov
	var_59_int = var_14_int; // 0x584 Mov
	var_60_float = var_15_float; // 0x585 Mov
	var_61_cvector = var_33_cvector; // 0x586 Mov
	var_62_cvector = -var_25_cvector; // 0x587 Neg2
	func_1425(var_60_float, var_61_cvector, var_62_cvector); // 0x588 NEW_2
	return 18; // 0x58a Return
	
Label_1419:
	var_26_object = 0; // 0x58b SetNull
	
Label_1420:
	var_103_object = Obj(); // 0x58c PushV
	var_103_object = var_13_object; // 0x58d Mov
	func_1313(var_103_object); // 0x58e NEW_2
	return 18; // 0x590 Return
	
Label_1393:
	var_104_int = var_30_cvector | var_25_cvector; // 0x571 Or
	var_105_float = 0.70711; // 0x572 PushF
	var_106_bool = var_104_int >= var_105_float; // 0x573 GE
	if(var_106_bool == 0) goto Label_1399; // 0x574 JumpB
	add(var_29_cvector); // 0x575 ObjFunc
	
Label_1399:
	var_107_int = 1; // 0x577 PushI
	var_27_int = var_27_int + var_107_int; // 0x578 Add2
	goto Label_1386; // 0x579 Jump
}


func_591(var_292_bool)
{
	var_293_bool = 0; // 0x24f PushV
	var_293_bool = 0; // 0x250 MovB
	var_294_bool = 0; // 0x251 PushV
	func_563(var_293_bool, var_294_bool); // 0x252 NEW_2
	if(var_294_bool == 0) goto Label_602; // 0x254 JumpB
	var_311_bool = 0; // 0x255 PushV
	func_607(var_292_bool, var_293_bool, var_311_bool); // 0x256 NEW_2
	if(var_311_bool == 0) goto Label_602; // 0x258 JumpB
	var_293_bool = 1; // 0x259 MovB
	
Label_602:
	if(var_293_bool == 0) goto Label_605; // 0x25a JumpB
	var_292_bool = 1; // 0x25b MovB
	return 0; // 0x25c Return
	
Label_605:
	var_292_bool = 0; // 0x25d MovB
	return 0; // 0x25e Return
}


func_975(var_192_string)
{
	var_192_string = "run"; // 0x3cf MovS
	return 0; // 0x3d0 Return
}


func_721(var_2_int, var_122_bool, var_123_object, var_124_float, var_125_float, var_126_bool, var_127_bool)
{
	var_131_bool = 0; var_132_bool = 0; var_133_bool = 0; var_134_bool = 0; // 0x2d1 PushV
	var_135_object = Obj(); // 0x2d2 PushV
	var_135_object = var_123_object; // 0x2d3 Mov
	func_1598(var_135_object); // 0x2d4 NEW_2
	var_136_int = 1; // 0x2d6 PushI
	var_137_int = 5; // 0x2d7 PushI
	SetTimer(var_136_int, var_137_int); // 0x2d8 Func
	CanSee(var_133_bool, var_123_object); // 0x2da Func
	var_138_bool = var_133_bool; // 0x2dc Push
	if(var_138_bool == 0) goto Label_740; // 0x2dd JumpB
	var_2_int = 1; // 0x2de TMovB
	var_139_object = Obj(); // 0x2df PushV
	var_139_object = var_123_object; // 0x2e0 Mov
	func_1450(var_139_object); // 0x2e1 NEW_2
	goto Label_741; // 0x2e3 Jump
	
Label_741:
	var_146_bool = 0; var_147_object = Obj(); // 0x2e5 PushV
	var_147_object = var_123_object; // 0x2e6 Mov
	func_1136(var_146_bool, var_147_object); // 0x2e7 NEW_2
	if(var_146_bool == 0) goto Label_751; // 0x2e9 JumpB
	var_150_object = Obj(); // 0x2ea PushV
	func_1502(var_150_object); // 0x2eb NEW_2
	SendPlayerEnemy(var_123_object, var_150_object); // 0x2ed Func
	
Label_751:
	var_151_bool = 0; var_152_object = Obj(); var_153_float = 0; var_154_float = 0; var_155_bool = 0; var_156_bool = 0; // 0x2ef PushV
	var_152_object = var_123_object; // 0x2f0 Mov
	var_153_float = var_124_float; // 0x2f1 Mov
	var_154_float = var_125_float; // 0x2f2 Mov
	var_155_bool = var_126_bool; // 0x2f3 Mov
	var_156_bool = var_127_bool; // 0x2f4 Mov
	func_826(var_133_bool, var_134_bool, var_151_bool, var_152_object, var_153_float, var_154_float, var_155_bool, var_156_bool); // 0x2f5 NEW_2
	var_134_bool = var_151_bool; // 0x2f6 Mov
	var_202_int = var_2_int; // 0x2f8 PushT
	if(var_202_int == 0) goto Label_765; // 0x2f9 JumpB
	var_203_string = "head"; // 0x2fa PushS
	UnlookAsync(var_203_string); // 0x2fb Func
	
Label_765:
	var_204_int = 1; // 0x2fd PushI
	KillTimer(var_204_int); // 0x2fe Func
	var_122_bool = var_134_bool; // 0x300 Mov
	return 4; // 0x301 Return
	
Label_740:
	var_2_int = 0; // 0x2e4 TMovB
}


func_1618(var_10_object)
{
	var_11_bool = 0; var_12_object = Obj(); // 0x653 PushV
	var_12_object = var_10_object; // 0x654 Mov
	func_1136(var_11_bool, var_12_object); // 0x655 NEW_2
	if(var_11_bool == 0) goto Label_1629; // 0x657 JumpB
	var_15_bool = 0; var_16_object = Obj(); var_17_float = 0; // 0x658 PushV
	var_16_object = var_10_object; // 0x659 Mov
	var_17_float = 0.05; // 0x65a MovF
	func_1536(var_15_bool, var_16_object, var_17_float); // 0x65b NEW_2
	
Label_1629:
	var_53_object = Obj(); // 0x65d PushV
	var_53_object = var_10_object; // 0x65e Mov
	TaskCall(3); // 0x65f TaskCall
	func_983(var_53_object); // 0x660 NEW_2
	TaskReturn(); // 0x661 TaskReturn
	return 0; // 0x663 Return
}


func_983(var_53_object)
{
	var_54_object = Obj(); // 0x3d8 PushV
	var_54_object = var_53_object; // 0x3d9 Mov
	func_992(var_54_object); // 0x3da NEW_2
	
Label_988:
	Hold(); // 0x3dc Func
	goto Label_988; // 0x3de Jump
}


func_1115(var_419_string, var_420_int)
{
	var_421_int = 2; // 0x45c PushI
	var_422_bool = var_420_int == var_421_int; // 0x45d Eq
	if(var_422_bool == 0) goto Label_1122; // 0x45e JumpB
	var_419_string = "fire"; // 0x45f MovS
	return 0; // 0x460 Return
	
Label_1122:
	var_423_int = 1; // 0x462 PushI
	var_424_bool = var_420_int == var_423_int; // 0x463 Eq
	if(var_424_bool == 0) goto Label_1127; // 0x464 JumpB
	var_419_string = "bullet"; // 0x465 MovS
	return 0; // 0x466 Return
	
Label_1127:
	var_419_string = "phys"; // 0x467 MovS
	return 0; // 0x468 Return
}


func_1502(var_74_object)
{
	var_75_object = Obj(); var_76_object = Obj(); // 0x5de PushV
	self(var_76_object); // 0x5df Func
	var_74_object = var_76_object; // 0x5e1 Mov
	return 2; // 0x5e2 Return
}


func_607(var_0_object, var_4_float, var_311_bool)
{
	var_312_object = Obj(); var_313_bool = 0; var_314_float = 0; var_315_cvector = CVector(0,0,0); var_316_cvector = CVector(0,0,0); var_317_object = Obj(); var_318_bool = 0; var_319_float = 0; var_320_cvector = CVector(0,0,0); var_321_cvector = CVector(0,0,0); // 0x25f PushV
	GetScene(var_317_object); // 0x260 Func
	var_318_bool = 0; // 0x262 MovB
	
Label_611:
	var_322_cvector = CVector(0,0,0); var_323_object = Obj(); // 0x263 PushV
	var_323_object = var_0_object; // 0x264 MovT
	func_1129(var_323_object); // 0x265 NEW_2
	var_328_int = -var_322_cvector; // 0x267 Neg
	FindDirLength(var_319_float, var_328_int, var_319_float); // 0x268 Func
	var_329_bool = var_319_float < var_4_float; // 0x26a LT
	if(var_329_bool == 0) goto Label_621; // 0x26b JumpB
	goto Label_649; // 0x26c Jump
	
Label_649:
	var_311_bool = var_318_bool; // 0x289 Mov
	return 10; // 0x28a Return
	
Label_621:
	Face(var_0_object); // 0x26d Func
	var_330_string = "all"; // 0x26f PushS
	var_331_string = "bjump"; // 0x270 PushS
	PlayAnimation(var_330_string, var_331_string); // 0x271 Func
	GetPFPosition(var_320_cvector); // 0x273 TObjFunc
	GetPFPosition(var_321_cvector); // 0x275 Func
	WaitForAnimEnd(); // 0x277 Func
	func_695(var_321_cvector); // 0x27a NEW_2
	StopAsync(); // 0x27c Func
	var_332_cvector = CVector(0.0, 0.0, 0.0); // 0x27e PushVec
	SetSpeed(var_332_cvector); // 0x27f Func
	var_318_bool = 1; // 0x281 MovB
	var_333_bool = 0; // 0x282 PushV
	func_563(var_321_cvector, var_333_bool); // 0x283 NEW_2
	var_334_bool = var_333_bool == 0; // 0x285 Not
	if(var_334_bool == 0) goto Label_648; // 0x286 JumpB
	goto Label_649; // 0x287 Jump
	
Label_648:
	goto Label_611; // 0x288 Jump
}


func_992(var_54_object)
{
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_string = ""; var_60_object = Obj(); var_61_bool = 0; var_62_bool = 0; var_63_float = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_string = ""; var_70_object = Obj(); var_71_bool = 0; var_72_bool = 0; var_73_float = 0; var_74_cvector = CVector(0,0,0); // 0x3e0 PushV
	var_75_bool = var_54_object == 0; // 0x3e1 NullEq
	if(var_75_bool == 0) goto Label_1000; // 0x3e2 JumpB
	var_76_string = ""; // 0x3e3 PushV
	var_76_string = "fdie"; // 0x3e4 MovS
	func_1083(var_76_string); // 0x3e5 NEW_2
	goto Label_1082; // 0x3e7 Jump
	
Label_1082:
	return 20; // 0x43a Return
	
Label_1000:
	GetPosition(var_65_cvector); // 0x3e8 ObjFunc
	GetPosition(var_66_cvector); // 0x3ea Func
	GetDirection(var_67_cvector); // 0x3ec Func
	var_68_cvector = var_66_cvector - var_65_cvector; // 0x3ee Sub2
	var_108_float = GetByIndex(var_68_cvector, 0); // 0x3ef PushE
	var_109_float = GetByIndex(var_67_cvector, 0); // 0x3f0 PushE
	var_110_float = var_108_float * var_109_float; // 0x3f1 Mult
	var_111_float = GetByIndex(var_68_cvector, 2); // 0x3f2 PushE
	var_112_float = GetByIndex(var_67_cvector, 2); // 0x3f3 PushE
	var_113_float = var_111_float * var_112_float; // 0x3f4 Mult
	var_114_int = var_110_float + var_113_float; // 0x3f5 Add
	var_115_int = 0; // 0x3f6 PushI
	var_116_bool = var_114_int >= var_115_int; // 0x3f7 GE
	if(var_116_bool == 0) goto Label_1019; // 0x3f8 JumpB
	var_69_string = "fdie"; // 0x3f9 MovS
	goto Label_1020; // 0x3fa Jump
	
Label_1020:
	RemoveRTEnvelope(); // 0x3fc Func
	SetDeathState(); // 0x3fe Func
	Stop(); // 0x400 Func
	StopAsync(); // 0x402 Func
	var_70_object = var_54_object; // 0x404 Mov
	var_117_string = "GetScriptProperty"; // 0x405 PushS
	var_118_int = 2; // 0x406 PushI
	var_119_bool = IsFuncExist(var_54_object, var_117_string, var_118_int); // 0x407 FuncExist
	if(var_119_bool == 0) goto Label_1044; // 0x408 JumpB
	var_120_string = "Owner"; // 0x409 PushS
	HasScriptProperty(var_71_bool, var_120_string); // 0x40a ObjFunc
	var_121_bool = var_71_bool; // 0x40c Push
	if(var_121_bool == 0) goto Label_1044; // 0x40d JumpB
	var_122_string = "Owner"; // 0x40e PushS
	GetScriptProperty(var_70_object, var_122_string); // 0x40f ObjFunc
	var_123_bool = var_70_object == 0; // 0x411 NullEq
	if(var_123_bool == 0) goto Label_1044; // 0x412 JumpB
	var_70_object = var_54_object; // 0x413 Mov
	
Label_1044:
	var_124_string = "@GetEyesHeight"; // 0x414 PushS
	var_125_int = 1; // 0x415 PushI
	var_126_bool = IsFuncExist(var_70_object, var_124_string, var_125_int); // 0x416 FuncExist
	if(var_126_bool == 0) goto Label_1059; // 0x417 JumpB
	GetEyesHeight(var_73_float); // 0x418 ObjFunc
	var_74_cvector = CVector(0.0, 0.0, 0.0); // 0x41a MovV
	var_127_float = GetByIndex(var_74_cvector, 1); // 0x41b PushE
	var_127_float = var_73_float; // 0x41c Mov
	SetByIndex(var_74_cvector, 1) = var_127_float; // 0x41d PopE
	var_128_string = "head"; // 0x41e PushS
	LookAsync(var_54_object, var_128_string, var_74_cvector); // 0x41f Func
	var_72_bool = 1; // 0x421 MovB
	goto Label_1060; // 0x422 Jump
	
Label_1060:
	var_129_string = ""; // 0x424 PushV
	var_129_string = var_69_string; // 0x425 Mov
	func_1461(var_129_string); // 0x426 NEW_2
	var_130_string = "all"; // 0x428 PushS
	PlayAnimation(var_130_string, var_69_string); // 0x429 Func
	WaitForAnimEnd(); // 0x42b Func
	var_131_bool = var_72_bool; // 0x42d Push
	if(var_131_bool == 0) goto Label_1076; // 0x42e JumpB
	StopAsync(); // 0x42f Func
	var_132_string = "head"; // 0x431 PushS
	UnlookAsync(var_132_string); // 0x432 Func
	
Label_1076:
	var_133_string = "all"; // 0x434 PushS
	LockAnimationEnd(var_133_string, var_69_string); // 0x435 Func
	RemoveEnvelope(); // 0x437 Func
	var_70_object = 0; // 0x439 SetNull
	
Label_1059:
	var_72_bool = 0; // 0x423 MovB
	
Label_1019:
	var_69_string = "bdie"; // 0x3fb MovS
}


func_1248(var_95_bool)
{
	var_97_bool = 0; var_98_bool = 0; // 0x4e0 PushV
	IsDead(var_98_bool); // 0x4e1 ObjFunc
	var_95_bool = var_98_bool; // 0x4e3 Mov
	return 2; // 0x4e4 Return
}


func_356(var_0_object, var_340_bool, var_341_float)
{
	var_342_int = 0; var_343_bool = 0; var_344_int = 0; var_345_string = ""; var_346_int = 0; var_347_bool = 0; var_348_int = 0; var_349_string = ""; // 0x164 PushV
	func_695(var_349_string); // 0x166 NEW_2
	irand(var_346_int, var_349_string); // 0x168 Func
	var_350_int = 1; // 0x16a PushI
	var_346_int = var_346_int + var_350_int; // 0x16b Add2
	Face(var_0_object); // 0x16c Func
	var_351_bool = 1; // 0x16e PushB
	SetAttackState(var_351_bool); // 0x16f Func
	func_1607(); // 0x172 NEW_2
	var_356_string = "all"; // 0x174 PushS
	var_357_string = "attack_begin"; // 0x175 PushS
	var_358_int = var_357_string + var_346_int; // 0x176 Add
	PlayAnimation(var_356_string, var_358_int); // 0x177 Func
	WaitForAnimEnd(); // 0x179 Func
	func_663(var_348_int, var_349_string); // 0x17c NEW_2
	var_374_bool = 0; var_375_object = Obj(); // 0x17e PushV
	var_375_object = var_0_object; // 0x17f MovT
	func_1289(var_374_bool, var_375_object); // 0x180 NEW_2
	var_376_bool = var_374_bool == 0; // 0x182 Not
	if(var_376_bool == 0) goto Label_392; // 0x183 JumpB
	StopAsync(); // 0x184 Func
	var_340_bool = 0; // 0x186 MovB
	return 8; // 0x187 Return
	
Label_392:
	var_377_float = 0; var_378_int = 0; // 0x188 PushV
	var_377_float = var_341_float; // 0x189 Mov
	var_378_int = var_346_int; // 0x18a Mov
	func_317(var_349_string, var_377_float, var_378_int); // 0x18b NEW_2
	var_459_string = "all"; // 0x18d PushS
	var_460_string = "attack_middle"; // 0x18e PushS
	var_461_int = var_460_string + var_346_int; // 0x18f Add
	HasAnimation(var_347_bool, var_459_string, var_461_int); // 0x190 Func
	var_462_bool = var_347_bool; // 0x192 Push
	if(var_462_bool == 0) goto Label_473; // 0x193 JumpB
	func_1607(); // 0x195 NEW_2
	var_463_string = "all"; // 0x197 PushS
	var_464_string = "attack_middle"; // 0x198 PushS
	var_465_int = var_464_string + var_346_int; // 0x199 Add
	PlayAnimation(var_463_string, var_465_int); // 0x19a Func
	WaitForAnimEnd(); // 0x19c Func
	func_695(var_349_string); // 0x19f NEW_2
	var_466_bool = 0; var_467_object = Obj(); // 0x1a1 PushV
	var_467_object = var_0_object; // 0x1a2 MovT
	func_1289(var_466_bool, var_467_object); // 0x1a3 NEW_2
	var_468_bool = var_466_bool == 0; // 0x1a5 Not
	if(var_468_bool == 0) goto Label_427; // 0x1a6 JumpB
	StopAsync(); // 0x1a7 Func
	var_340_bool = 0; // 0x1a9 MovB
	return 8; // 0x1aa Return
	
Label_427:
	var_469_float = 0; var_470_int = 0; // 0x1ab PushV
	var_469_float = var_341_float; // 0x1ac Mov
	var_470_int = var_346_int; // 0x1ad Mov
	func_317(var_349_string, var_469_float, var_470_int); // 0x1ae NEW_2
	var_348_int = 1; // 0x1b0 MovI
	
Label_433:
	var_471_string = "attack_middle"; // 0x1b1 PushS
	var_472_int = var_471_string + var_346_int; // 0x1b2 Add
	var_473_string = "_"; // 0x1b3 PushS
	var_474_int = var_472_int + var_473_string; // 0x1b4 Add
	var_349_string = var_474_int + var_348_int; // 0x1b5 Add2
	var_475_string = "all"; // 0x1b6 PushS
	HasAnimation(var_347_bool, var_475_string, var_349_string); // 0x1b7 Func
	var_476_bool = var_347_bool == 0; // 0x1b9 Not
	if(var_476_bool == 0) goto Label_444; // 0x1ba JumpB
	goto Label_473; // 0x1bb Jump
	
Label_473:
	var_477_bool = 0; // 0x1d9 PushB
	SetAttackState(var_477_bool); // 0x1da Func
	var_478_string = "all"; // 0x1dc PushS
	var_479_string = "attack_end"; // 0x1dd PushS
	var_480_int = var_479_string + var_346_int; // 0x1de Add
	PlayAnimation(var_478_string, var_480_int); // 0x1df Func
	var_481_bool = 0; // 0x1e1 PushV
	func_709(var_481_bool); // 0x1e2 NEW_2
	if(var_481_bool == 0) goto Label_491; // 0x1e4 JumpB
	var_482_bool = 0; var_483_float = 0; // 0x1e5 PushV
	var_483_float = 0.75; // 0x1e6 MovF
	func_493(var_482_bool, var_483_float); // 0x1e7 NEW_2
	StopAsync(); // 0x1e9 Func
	
Label_491:
	var_340_bool = 1; // 0x1eb MovB
	return 8; // 0x1ec Return
	
Label_444:
	func_1607(); // 0x1bd NEW_2
	var_491_string = "all"; // 0x1bf PushS
	PlayAnimation(var_491_string, var_349_string); // 0x1c0 Func
	WaitForAnimEnd(); // 0x1c2 Func
	func_695(var_349_string); // 0x1c5 NEW_2
	var_492_bool = 0; var_493_object = Obj(); // 0x1c7 PushV
	var_493_object = var_0_object; // 0x1c8 MovT
	func_1289(var_492_bool, var_493_object); // 0x1c9 NEW_2
	var_494_bool = var_492_bool == 0; // 0x1cb Not
	if(var_494_bool == 0) goto Label_465; // 0x1cc JumpB
	StopAsync(); // 0x1cd Func
	var_340_bool = 0; // 0x1cf MovB
	return 8; // 0x1d0 Return
	
Label_465:
	var_495_float = 0; var_496_int = 0; // 0x1d1 PushV
	var_495_float = var_341_float; // 0x1d2 Mov
	var_496_int = var_346_int; // 0x1d3 Mov
	func_317(var_349_string, var_495_float, var_496_int); // 0x1d4 NEW_2
	var_497_int = 1; // 0x1d6 PushI
	var_348_int = var_348_int + var_497_int; // 0x1d7 Add2
	goto Label_433; // 0x1d8 Jump
}


func_1253(var_84_bool, var_85_object)
{
	var_86_object = Obj(); var_87_object = Obj(); var_88_object = Obj(); var_89_object = Obj(); // 0x4e5 PushV
	var_90_bool = var_85_object == 0; // 0x4e6 NullEq
	if(var_90_bool == 0) goto Label_1258; // 0x4e7 JumpB
	var_84_bool = 0; // 0x4e8 MovB
	return 4; // 0x4e9 Return
	
Label_1258:
	var_91_bool = 0; // 0x4ea PushV
	var_91_bool = 0; // 0x4eb MovB
	var_92_string = "IsDead"; // 0x4ec PushS
	var_93_int = 1; // 0x4ed PushI
	var_94_bool = IsFuncExist(var_85_object, var_92_string, var_93_int); // 0x4ee FuncExist
	if(var_94_bool == 0) goto Label_1270; // 0x4ef JumpB
	var_95_bool = 0; var_96_object = Obj(); // 0x4f0 PushV
	var_96_object = var_85_object; // 0x4f1 Mov
	func_1248(var_96_object); // 0x4f2 NEW_2
	if(var_95_bool == 0) goto Label_1270; // 0x4f4 JumpB
	var_91_bool = 1; // 0x4f5 MovB
	
Label_1270:
	if(var_91_bool == 0) goto Label_1273; // 0x4f6 JumpB
	var_84_bool = 0; // 0x4f7 MovB
	return 4; // 0x4f8 Return
	
Label_1273:
	GetScene(var_88_object); // 0x4f9 Func
	var_99_bool = var_88_object == 0; // 0x4fb NullEq
	if(var_99_bool == 0) goto Label_1279; // 0x4fc JumpB
	var_84_bool = 0; // 0x4fd MovB
	return 4; // 0x4fe Return
	
Label_1279:
	GetScene(var_89_object); // 0x4ff ObjFunc
	var_100_bool = var_88_object != var_89_object; // 0x501 Neq
	if(var_100_bool == 0) goto Label_1285; // 0x502 JumpB
	var_84_bool = 0; // 0x503 MovB
	return 4; // 0x504 Return
	
Label_1285:
	var_84_bool = 1; // 0x505 MovB
	return 4; // 0x506 Return
}


func_1508(var_41_cvector, var_42_cvector)
{
	var_49_float = 0; var_50_float = 0; // 0x5e4 PushV
	var_51_int = var_42_cvector | var_42_cvector; // 0x5e5 Or
	var_50_float = sqrt(var_51_int); // 0x5e6 Sqrt2
	var_52_float = 0.0; // 0x5e7 PushF
	var_53_bool = var_50_float < var_52_float; // 0x5e8 LT
	if(var_53_bool == 0) goto Label_1516; // 0x5e9 JumpB
	var_41_cvector = CVector(0.0, 0.0, 0.0); // 0x5ea MovV
	return 2; // 0x5eb Return
	
Label_1516:
	var_41_cvector = var_42_cvector / var_42_cvector; // 0x5ec Div2
	return 2; // 0x5ed Return
}


func_1129(var_322_cvector)
{
	var_324_cvector = CVector(0,0,0); var_325_cvector = CVector(0,0,0); var_326_cvector = CVector(0,0,0); var_327_cvector = CVector(0,0,0); // 0x469 PushV
	GetPosition(var_326_cvector); // 0x46a Func
	GetPosition(var_327_cvector); // 0x46c ObjFunc
	var_322_cvector = var_327_cvector - var_326_cvector; // 0x46e Sub2
	return 4; // 0x46f Return
}


func_493(var_482_bool, var_483_float)
{
	var_484_float = 0; var_485_bool = 0; var_486_float = 0; var_487_bool = 0; // 0x1ed PushV
	rand(var_486_float); // 0x1ee Func
	var_488_bool = var_486_float < var_483_float; // 0x1f0 LT
	if(var_488_bool == 0) goto Label_513; // 0x1f1 JumpB
	
Label_498:
	IsAnimationPlaying(var_487_bool); // 0x1f2 Func
	var_489_bool = var_487_bool == 0; // 0x1f4 Not
	if(var_489_bool == 0) goto Label_503; // 0x1f5 JumpB
	goto Label_512; // 0x1f6 Jump
	
Label_512:
	goto Label_518; // 0x200 Jump
	
Label_518:
	var_482_bool = 0; // 0x206 MovB
	return 4; // 0x207 Return
	
Label_503:
	var_490_bool = 0; // 0x1f7 PushV
	func_591(var_490_bool); // 0x1f8 NEW_2
	if(var_490_bool == 0) goto Label_509; // 0x1fa JumpB
	var_482_bool = 1; // 0x1fb MovB
	return 4; // 0x1fc Return
	
Label_509:
	sync(); // 0x1fd Func
	goto Label_498; // 0x1ff Jump
	
Label_513:
	WaitForAnimEnd(); // 0x201 Func
	func_695(var_487_bool); // 0x204 NEW_2
}


func_1518(var_429_float, var_430_float, var_431_float)
{
	var_434_bool = var_430_float < var_431_float; // 0x5ef LT
	if(var_434_bool == 0) goto Label_1523; // 0x5f0 JumpB
	var_429_float = var_430_float; // 0x5f1 Mov
	goto Label_1524; // 0x5f2 Jump
	
Label_1524:
	return 0; // 0x5f4 Return
	
Label_1523:
	var_429_float = var_431_float; // 0x5f3 Mov
}


func_1136(var_146_bool, var_147_object)
{
	var_148_bool = 0; var_149_bool = 0; // 0x470 PushV
	IsPlayerActor(var_147_object, var_149_bool); // 0x471 Func
	var_146_bool = var_149_bool; // 0x473 Mov
	return 2; // 0x474 Return
}


func_1141(var_102_bool, var_103_object, var_104_string)
{
	var_105_bool = 0; var_106_bool = 0; // 0x475 PushV
	var_107_string = "HasProperty"; // 0x476 PushS
	var_108_int = 2; // 0x477 PushI
	var_109_bool = IsFuncExist(var_103_object, var_107_string, var_108_int); // 0x478 FuncExist
	var_110_bool = var_109_bool == 0; // 0x479 Not
	if(var_110_bool == 0) goto Label_1149; // 0x47a JumpB
	var_102_bool = 0; // 0x47b MovB
	return 2; // 0x47c Return
	
Label_1149:
	HasProperty(var_104_string, var_106_bool); // 0x47d ObjFunc
	var_102_bool = var_106_bool; // 0x47f Mov
	return 2; // 0x480 Return
}


func_1525(var_439_float, var_440_float, var_441_float, var_442_float)
{
	var_443_bool = var_440_float < var_441_float; // 0x5f6 LT
	if(var_443_bool == 0) goto Label_1530; // 0x5f7 JumpB
	var_439_float = var_441_float; // 0x5f8 Mov
	return 0; // 0x5f9 Return
	
Label_1530:
	var_444_bool = var_440_float > var_442_float; // 0x5fa GT
	if(var_444_bool == 0) goto Label_1534; // 0x5fb JumpB
	var_439_float = var_442_float; // 0x5fc Mov
	return 0; // 0x5fd Return
	
Label_1534:
	var_439_float = var_440_float; // 0x5fe Mov
	return 0; // 0x5ff Return
}


