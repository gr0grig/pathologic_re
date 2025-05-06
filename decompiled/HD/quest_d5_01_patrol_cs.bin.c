task_2_event_7(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_int)
{
	var_10_int = 1; // 0x2e7 PushI
	var_11_bool = var_9_int == var_10_int; // 0x2e8 Eq
	if(var_11_bool == 0) goto Label_751; // 0x2e9 JumpB
	var_12_object = Obj(); // 0x2ea PushV
	var_12_object = var_1_int; // 0x2eb MovT
	func_1539(var_12_object); // 0x2ec NEW_2
	goto Label_755; // 0x2ee Jump
	
Label_755:
	return 0; // 0x2f3 Return
	
Label_751:
	var_17_int = 0; // 0x2ef PushV
	var_17_int = var_9_int; // 0x2f0 Mov
	func_900(var_8_bool, var_9_int, var_17_int); // 0x2f1 NEW_2
}


task_2_event_1(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_bool = 0; // 0x302 PushV
	var_10_bool = 0; // 0x303 MovB
	var_11_bool = var_1_int == var_9_object; // 0x304 Eq
	if(var_11_bool == 0) goto Label_777; // 0x305 JumpB
	var_12_bool = var_2_int == 0; // 0x306 Not
	if(var_12_bool == 0) goto Label_777; // 0x307 JumpB
	var_10_bool = 1; // 0x308 MovB
	
Label_777:
	if(var_10_bool == 0) goto Label_783; // 0x309 JumpB
	var_2_int = 1; // 0x30a TMovB
	var_13_object = Obj(); // 0x30b PushV
	var_13_object = var_9_object; // 0x30c Mov
	func_1424(var_13_object); // 0x30d NEW_2
	
Label_783:
	return 0; // 0x30f Return
}


task_2_event_2(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_bool = 0; // 0x311 PushV
	var_10_bool = 0; // 0x312 MovB
	var_11_bool = var_1_int == var_9_object; // 0x313 Eq
	if(var_11_bool == 0) goto Label_792; // 0x314 JumpB
	var_12_int = var_2_int; // 0x315 PushT
	if(var_12_int == 0) goto Label_792; // 0x316 JumpB
	var_10_bool = 1; // 0x317 MovB
	
Label_792:
	if(var_10_bool == 0) goto Label_797; // 0x318 JumpB
	var_2_int = 0; // 0x319 TMovB
	var_13_string = "head"; // 0x31a PushS
	UnlookAsync(var_13_string); // 0x31b Func
	
Label_797:
	return 0; // 0x31d Return
}


task_2_event_10(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	RequestClearPath(var_9_object); // 0x397 Func
	return 0; // 0x399 Return
}


task_2_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	func_756(var_9_object); // 0x3a3 NEW_2
	var_14_object = Obj(); // 0x3a5 PushV
	var_14_object = var_9_object; // 0x3a6 Mov
	func_1658(); // 0x3a7 NEW_2
	return 0; // 0x3a9 Return
}


task_3_event_0(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_bool = 0; var_11_bool = 0; // 0x3ca PushV
	IsOverrideActive(var_11_bool); // 0x3cb Func
	var_12_bool = var_11_bool == 0; // 0x3cd Not
	if(var_12_bool == 0) goto Label_979; // 0x3ce JumpB
	var_13_object = Obj(); // 0x3cf PushV
	var_13_object = var_9_object; // 0x3d0 Mov
	func_1565(var_13_object); // 0x3d1 NEW_2
	
Label_979:
	return 2; // 0x3d3 Return
}


task_3_event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	var_9_object = Obj(); // 0x3d4 PushV
	func_1476(var_9_object); // 0x3d5 NEW_2
	RemoveActor(var_9_object); // 0x3d7 Func
	Hold(); // 0x3d9 Func
	return 0; // 0x3db Return
}


task_3_event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float)
{
	return 0; // 0x452 Return
}


task_3_event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_string)
{
	return 0; // 0x454 Return
}


task_3_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	return 0; // 0x456 Return
}


event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float)
{
	var_13_object = Obj(); var_14_int = 0; var_15_float = 0; // 0x65c PushV
	var_13_object = var_9_object; // 0x65d Mov
	var_14_int = var_10_int; // 0x65e Mov
	var_15_float = var_11_float; // 0x65f Mov
	func_1331(var_13_object, var_14_int, var_15_float); // 0x660 NEW_2
	return 0; // 0x662 Return
}


event_43(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float, var_13_cvector, var_14_cvector)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); // 0x664 PushV
	var_15_object = var_9_object; // 0x665 Mov
	var_16_int = var_10_int; // 0x666 Mov
	var_17_float = var_11_float; // 0x667 Mov
	var_18_cvector = var_13_cvector; // 0x668 Mov
	var_19_cvector = var_14_cvector; // 0x669 Mov
	func_1399(var_17_float, var_18_cvector, var_19_cvector); // 0x66a NEW_2
	return 0; // 0x66c Return
}


event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_string)
{
	var_11_float = 0; var_12_float = 0; // 0x66d PushV
	var_13_string = "health"; // 0x66e PushS
	var_14_bool = var_10_string == var_13_string; // 0x66f Eq
	if(var_14_bool == 0) goto Label_1657; // 0x670 JumpB
	var_15_string = "health"; // 0x671 PushS
	GetProperty(var_15_string, var_12_float); // 0x672 Func
	var_16_int = 0; // 0x674 PushI
	var_17_bool = var_12_float <= var_16_int; // 0x675 LE
	if(var_17_bool == 0) goto Label_1657; // 0x676 JumpB
	SignalDeath(var_9_object); // 0x677 Func
	
Label_1657:
	return 2; // 0x679 Return
}


event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_object = Obj(); // 0x67b PushV
	var_10_object = var_9_object; // 0x67c Mov
	func_1619(var_10_object); // 0x67d NEW_2
	return 0; // 0x67f Return
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	
Label_0:
	TaskCall(1); // 0x1 TaskCall
	func_10(); // 0x2 NEW_2
	TaskReturn(); // 0x3 TaskReturn
	var_514_float = 0.5; // 0x5 PushF
	Sleep(var_514_float); // 0x6 Func
	goto Label_0; // 0x8 Jump
}


func_641(var_2_int, var_5_int)
{
	var_359_float = 0; var_360_int = 0; var_361_float = 0; var_362_int = 0; // 0x281 PushV
	var_363_bool = var_2_int == 0; // 0x282 Not
	if(var_363_bool == 0) goto Label_645; // 0x283 JumpB
	return 4; // 0x284 Return
	
Label_645:
	var_364_int = var_5_int; // 0x285 PushT
	if(var_364_int == 0) goto Label_653; // 0x286 JumpB
	var_365_int = -1; // 0x287 PushI
	var_5_int = var_5_int + var_365_int; // 0x288 Add2
	var_366_int = 0; // 0x289 PushI
	var_367_bool = var_5_int > var_366_int; // 0x28a GT
	if(var_367_bool == 0) goto Label_653; // 0x28b JumpB
	return 4; // 0x28c Return
	
Label_653:
	rand(var_361_float); // 0x28d Func
	var_368_float = 0; // 0x28f PushV
	func_691(var_368_float); // 0x290 NEW_2
	var_369_bool = var_361_float < var_368_float; // 0x292 LT
	if(var_369_bool == 0) goto Label_672; // 0x293 JumpB
	irand(var_362_int, var_361_float); // 0x294 Func
	var_370_int = 1; // 0x296 PushI
	var_362_int = var_362_int + var_370_int; // 0x297 Add2
	var_371_string = "attack"; // 0x298 PushS
	var_372_int = var_371_string + var_362_int; // 0x299 Add
	Speak(var_372_int); // 0x29a Func
	var_373_int = 0; // 0x29c PushV
	func_689(var_373_int); // 0x29d NEW_2
	var_5_int = var_373_int; // 0x29e TMov
	
Label_672:
	return 4; // 0x2a0 Return
}


func_1539(var_115_object)
{
	var_116_bool = 0; var_117_bool = 0; // 0x603 PushV
	IsPlayerActor(var_115_object, var_117_bool); // 0x604 Func
	var_118_bool = var_117_bool; // 0x606 Push
	if(var_118_bool == 0) goto Label_1547; // 0x607 JumpB
	var_119_string = "attack"; // 0x608 PushS
	PlayGlobalMusic(var_119_string); // 0x609 Func
	
Label_1547:
	return 2; // 0x60b Return
}


func_260(var_1_int, var_2_int, var_4_float)
{
	var_44_bool = 0; var_45_bool = 0; var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_cvector = CVector(0,0,0); // 0x104 PushV
	var_1_int = 0; // 0x105 TMovI
	
Label_262:
	var_50_string = "all"; // 0x106 PushS
	var_51_string = "attack_begin"; // 0x107 PushS
	var_52_int = 1; // 0x108 PushI
	var_53_int = var_1_int + var_52_int; // 0x109 Add
	var_54_int = var_51_string + var_53_int; // 0x10a Add
	HasAnimation(var_47_bool, var_50_string, var_54_int); // 0x10b Func
	var_55_bool = var_47_bool == 0; // 0x10d Not
	if(var_55_bool == 0) goto Label_272; // 0x10e JumpB
	goto Label_275; // 0x10f Jump
	
Label_275:
	var_2_int = 0; // 0x113 TMovI
	
Label_276:
	var_56_string = "attack"; // 0x114 PushS
	var_57_int = 1; // 0x115 PushI
	var_58_int = var_2_int + var_57_int; // 0x116 Add
	var_59_int = var_56_string + var_58_int; // 0x117 Add
	IsExisting3DSound(var_48_bool, var_59_int); // 0x118 Func
	var_60_bool = var_48_bool == 0; // 0x11a Not
	if(var_60_bool == 0) goto Label_285; // 0x11b JumpB
	goto Label_288; // 0x11c Jump
	
Label_288:
	var_61_string = "all"; // 0x120 PushS
	var_62_string = "bjump"; // 0x121 PushS
	GetAnimationOffset(var_49_cvector, var_61_string, var_62_string); // 0x122 Func
	var_63_float = GetByIndex(var_49_cvector, 2); // 0x124 PushE
	var_4_float = -var_63_float; // 0x125 Neg2
	return 6; // 0x126 Return
	
Label_285:
	var_64_int = 1; // 0x11d PushI
	var_2_int = var_2_int + var_64_int; // 0x11e Add2
	goto Label_276; // 0x11f Jump
	
Label_272:
	var_65_int = 1; // 0x110 PushI
	var_1_int = var_1_int + var_65_int; // 0x111 Add2
	goto Label_262; // 0x112 Jump
}


func_1413()
{
	var_226_cvector = CVector(0,0,0); var_227_cvector = CVector(0,0,0); var_228_cvector = CVector(0,0,0); var_229_cvector = CVector(0,0,0); var_230_cvector = CVector(0,0,0); var_231_cvector = CVector(0,0,0); // 0x585 PushV
	GetPosition(var_229_cvector); // 0x586 ObjFunc
	GetPosition(var_230_cvector); // 0x588 Func
	var_231_cvector = var_229_cvector - var_230_cvector; // 0x58a Sub2
	var_232_float = GetByIndex(var_231_cvector, 0); // 0x58b PushE
	var_233_float = GetByIndex(var_231_cvector, 2); // 0x58c PushE
	RotateAsync(var_232_float, var_233_float); // 0x58d Func
	return 6; // 0x58f Return
}


func_900(var_0_object, var_1_int, var_17_int)
{
	var_18_int = 0; // 0x385 PushI
	var_19_bool = var_17_int != var_18_int; // 0x386 Neq
	if(var_19_bool == 0) goto Label_905; // 0x387 JumpB
	return 0; // 0x388 Return
	
Label_905:
	var_20_bool = 0; var_21_object = Obj(); // 0x389 PushV
	var_21_object = var_1_int; // 0x38a MovT
	func_938(var_20_bool, var_21_object); // 0x38b NEW_2
	var_56_bool = var_20_bool == 0; // 0x38d Not
	if(var_56_bool == 0) goto Label_912; // 0x38e JumpB
	var_0_object = 1; // 0x38f TMovB
	
Label_912:
	var_57_int = 0; // 0x390 PushI
	KillTimer(var_57_int); // 0x391 Func
	Stop(); // 0x393 Func
	return 0; // 0x395 Return
}


func_1287(var_26_object)
{
	var_27_bool = 0; var_28_int = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_string = ""; var_34_bool = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = ""; // 0x507 PushV
	var_41_bool = var_26_object == 0; // 0x508 NullEq
	if(var_41_bool == 0) goto Label_1291; // 0x509 JumpB
	return 14; // 0x50a Return
	
Label_1291:
	IsDead(var_34_bool); // 0x50b Func
	var_42_bool = var_34_bool; // 0x50d Push
	if(var_42_bool == 0) goto Label_1296; // 0x50e JumpB
	return 14; // 0x50f Return
	
Label_1296:
	GetSecondaryAnimationType(var_35_int); // 0x510 Func
	var_43_int = 0; // 0x512 PushI
	var_44_bool = var_35_int < var_43_int; // 0x513 LT
	if(var_44_bool == 0) goto Label_1302; // 0x514 JumpB
	return 14; // 0x515 Return
	
Label_1302:
	GetPosition(var_36_cvector); // 0x516 ObjFunc
	GetPosition(var_37_cvector); // 0x518 Func
	GetDirection(var_38_cvector); // 0x51a Func
	var_39_cvector = var_37_cvector - var_36_cvector; // 0x51c Sub2
	var_45_float = GetByIndex(var_39_cvector, 0); // 0x51d PushE
	var_46_float = GetByIndex(var_38_cvector, 0); // 0x51e PushE
	var_47_float = var_45_float * var_46_float; // 0x51f Mult
	var_48_float = GetByIndex(var_39_cvector, 2); // 0x520 PushE
	var_49_float = GetByIndex(var_38_cvector, 2); // 0x521 PushE
	var_50_float = var_48_float * var_49_float; // 0x522 Mult
	var_51_int = var_47_float + var_50_float; // 0x523 Add
	var_52_int = 0; // 0x524 PushI
	var_53_bool = var_51_int >= var_52_int; // 0x525 GE
	if(var_53_bool == 0) goto Label_1321; // 0x526 JumpB
	var_40_string = "fhit"; // 0x527 MovS
	goto Label_1322; // 0x528 Jump
	
Label_1322:
	var_54_string = "hit_react"; // 0x52a PushS
	var_55_string = "1"; // 0x52b PushS
	var_56_int = var_40_string + var_55_string; // 0x52c Add
	var_57_string = "2"; // 0x52d PushS
	var_58_int = var_40_string + var_57_string; // 0x52e Add
	var_59_int = -10; // 0x52f PushI
	FadeSecondaryAnimation(var_54_string, var_56_int, var_58_int, var_59_int); // 0x530 Func
	return 14; // 0x532 Return
	
Label_1321:
	var_40_string = "bhit"; // 0x529 MovS
}


func_10()
{
	var_15_object = Obj(); var_16_object = Obj(); // 0xa PushV
	var_17_string = "player"; // 0xb PushS
	FindActor(var_16_object, var_17_string); // 0xc Func
	var_18_bool = var_16_object == 0; // 0xe Not
	if(var_18_bool == 0) goto Label_17; // 0xf JumpB
	return 2; // 0x10 Return
	
Label_17:
	var_19_object = Obj(); var_20_bool = 0; var_21_float = 0; // 0x11 PushV
	var_19_object = var_16_object; // 0x12 Mov
	var_20_bool = 1; // 0x13 MovB
	var_21_float = 180.0; // 0x14 MovF
	func_31(var_12_bool, var_13_float, var_14_int, var_15_object, var_16_object, var_19_object, var_20_bool, var_21_float); // 0x15 NEW_2
	return 2; // 0x17 Return
}


func_1548()
{
	var_352_object = Obj(); var_353_object = Obj(); // 0x60c PushV
	GetScene(var_353_object); // 0x60d Func
	var_354_string = "battle"; // 0x60f PushS
	var_355_object = Obj(); // 0x610 PushV
	func_1476(var_355_object); // 0x611 NEW_2
	BroadcastMessage(var_354_string, var_355_object, var_353_object); // 0x613 Func
	return 2; // 0x615 Return
}


func_1424(var_139_object)
{
	var_140_float = 0; var_141_cvector = CVector(0,0,0); var_142_float = 0; var_143_cvector = CVector(0,0,0); // 0x590 PushV
	GetEyesHeight(var_142_float); // 0x591 ObjFunc
	var_143_cvector = CVector(0.0, 0.0, 0.0); // 0x593 MovV
	var_144_float = GetByIndex(var_143_cvector, 1); // 0x594 PushE
	var_144_float = var_142_float; // 0x595 Mov
	SetByIndex(var_143_cvector, 1) = var_144_float; // 0x596 PopE
	var_145_string = "head"; // 0x597 PushS
	LookAsync(var_139_object, var_145_string, var_143_cvector); // 0x598 Func
	return 4; // 0x59a Return
}


func_1559(var_100_int)
{
	var_101_int = 0; var_102_int = 0; // 0x617 PushV
	var_103_string = "branch"; // 0x618 PushS
	GetVariable(var_103_string, var_102_int); // 0x619 Func
	var_100_int = var_102_int; // 0x61b Mov
	return 2; // 0x61c Return
}


func_25(var_388_float)
{
	var_388_float = 0.3; // 0x1a MovF
	return 0; // 0x1b Return
}


func_922(var_0_object)
{
	var_0_object = 1; // 0x39a TMovB
	var_13_int = 0; // 0x39b PushI
	KillTimer(var_13_int); // 0x39c Func
	Stop(); // 0x39e Func
	return 0; // 0x3a0 Return
}


func_1435(var_248_string)
{
	var_249_bool = 0; var_250_int = 0; var_251_bool = 0; var_252_int = 0; var_253_bool = 0; var_254_float = 0; var_255_cvector = CVector(0,0,0); var_256_cvector = CVector(0,0,0); var_257_bool = 0; var_258_int = 0; var_259_bool = 0; var_260_int = 0; var_261_bool = 0; var_262_float = 0; var_263_cvector = CVector(0,0,0); var_264_cvector = CVector(0,0,0); // 0x59b PushV
	IsExisting3DSound(var_257_bool, var_248_string); // 0x59c Func
	var_265_bool = var_257_bool == 0; // 0x59e Not
	if(var_265_bool == 0) goto Label_1460; // 0x59f JumpB
	var_258_int = 0; // 0x5a0 MovI
	
Label_1441:
	var_266_int = 1; // 0x5a1 PushI
	var_267_int = var_258_int + var_266_int; // 0x5a2 Add
	var_268_int = var_248_string + var_267_int; // 0x5a3 Add
	IsExisting3DSound(var_259_bool, var_268_int); // 0x5a4 Func
	var_269_bool = var_259_bool == 0; // 0x5a6 Not
	if(var_269_bool == 0) goto Label_1449; // 0x5a7 JumpB
	goto Label_1452; // 0x5a8 Jump
	
Label_1452:
	var_270_bool = var_258_int == 0; // 0x5ac Not
	if(var_270_bool == 0) goto Label_1455; // 0x5ad JumpB
	return 16; // 0x5ae Return
	
Label_1455:
	irand(var_260_int, var_258_int); // 0x5af Func
	var_271_int = 1; // 0x5b1 PushI
	var_272_int = var_260_int + var_271_int; // 0x5b2 Add
	var_248_string = var_248_string + var_272_int; // 0x5b3 Add2
	
Label_1460:
	Is3DSoundLoaded(var_261_bool, var_248_string); // 0x5b4 Func
	var_273_bool = var_261_bool; // 0x5b6 Push
	if(var_273_bool == 0) goto Label_1475; // 0x5b7 JumpB
	GetEyesHeight(var_262_float); // 0x5b8 Func
	GetDirection(var_263_cvector); // 0x5ba Func
	var_274_int = 50; // 0x5bc PushI
	var_264_cvector = var_263_cvector * var_274_int; // 0x5bd Mult2
	var_275_float = GetByIndex(var_264_cvector, 1); // 0x5be PushE
	var_275_float = var_275_float + var_262_float; // 0x5bf Add2
	SetByIndex(var_264_cvector, 1) = var_275_float; // 0x5c0 PopE
	PlayGlobalSound(var_248_string, var_264_cvector); // 0x5c1 Func
	
Label_1475:
	return 16; // 0x5c3 Return
	
Label_1449:
	var_276_int = 1; // 0x5a9 PushI
	var_258_int = var_258_int + var_276_int; // 0x5aa Add2
	goto Label_1441; // 0x5ab Jump
}


func_28(var_395_int)
{
	var_395_int = 0; // 0x1d MovI
	return 0; // 0x1e Return
}


func_541(var_0_object, var_294_bool)
{
	var_295_cvector = CVector(0,0,0); var_296_cvector = CVector(0,0,0); var_297_cvector = CVector(0,0,0); var_298_float = 0; var_299_float = 0; var_300_cvector = CVector(0,0,0); var_301_cvector = CVector(0,0,0); var_302_cvector = CVector(0,0,0); var_303_float = 0; var_304_float = 0; // 0x21d PushV
	var_305_bool = 0; var_306_object = Obj(); // 0x21e PushV
	var_306_object = var_0_object; // 0x21f MovT
	func_1263(var_305_bool, var_306_object); // 0x220 NEW_2
	var_307_bool = var_305_bool == 0; // 0x222 Not
	if(var_307_bool == 0) goto Label_550; // 0x223 JumpB
	var_294_bool = 0; // 0x224 MovB
	return 10; // 0x225 Return
	
Label_550:
	var_308_bool = 0; // 0x226 PushV
	func_630(var_304_float, var_308_bool); // 0x227 NEW_2
	if(var_308_bool == 0) goto Label_567; // 0x229 JumpB
	GetPFPosition(var_300_cvector); // 0x22a TObjFunc
	GetPFPosition(var_301_cvector); // 0x22c Func
	var_302_cvector = var_300_cvector - var_301_cvector; // 0x22e Sub2
	var_303_float = var_302_cvector | var_302_cvector; // 0x22f Or2
	GetAttackDistance(var_304_float); // 0x230 TObjFunc
	var_309_int = 50; // 0x232 PushI
	var_304_float = var_304_float + var_309_int; // 0x233 Add2
	var_310_float = var_304_float * var_304_float; // 0x234 Mult
	var_294_bool = var_303_float <= var_310_float; // 0x235 LE2
	return 10; // 0x236 Return
	
Label_567:
	var_294_bool = 0; // 0x237 MovB
	return 10; // 0x238 Return
}


func_1565(var_13_object)
{
	var_14_int = 0; // 0x61e PushV
	func_1559(var_14_int); // 0x61f NEW_2
	var_18_int = 1; // 0x621 PushI
	var_19_bool = var_14_int == var_18_int; // 0x622 Eq
	if(var_19_bool == 0) goto Label_1575; // 0x623 JumpB
	WorkWithCorpse(var_13_object); // 0x624 Func
	goto Label_1577; // 0x626 Jump
	
Label_1577:
	return 0; // 0x629 Return
	
Label_1575:
	Barter(var_13_object); // 0x627 Func
}


func_798(var_0_object, var_1_int, var_151_bool, var_152_object, var_153_float, var_154_float, var_155_bool, var_156_bool)
{
	var_157_bool = 0; var_158_bool = 0; var_159_object = Obj(); var_160_cvector = CVector(0,0,0); var_161_cvector = CVector(0,0,0); var_162_cvector = CVector(0,0,0); var_163_float = 0; var_164_object = Obj(); var_165_bool = 0; var_166_bool = 0; var_167_object = Obj(); var_168_cvector = CVector(0,0,0); var_169_cvector = CVector(0,0,0); var_170_cvector = CVector(0,0,0); var_171_float = 0; var_172_object = Obj(); // 0x31e PushV
	var_0_object = 0; // 0x31f TMovB
	var_1_int = var_152_object; // 0x320 TMov
	var_166_bool = var_156_bool; // 0x321 Mov
	
Label_802:
	var_173_bool = 0; var_174_object = Obj(); // 0x322 PushV
	var_174_object = var_152_object; // 0x323 Mov
	func_938(var_173_bool, var_174_object); // 0x324 NEW_2
	var_177_bool = var_173_bool == 0; // 0x326 Not
	if(var_177_bool == 0) goto Label_810; // 0x327 JumpB
	var_151_bool = 0; // 0x328 MovB
	return 16; // 0x329 Return
	
Label_810:
	GetPosition(var_168_cvector); // 0x32a ObjFunc
	GetPosition(var_169_cvector); // 0x32c Func
	var_170_cvector = var_168_cvector - var_169_cvector; // 0x32e Sub2
	var_171_float = var_170_cvector | var_170_cvector; // 0x32f Or2
	var_178_bool = 0; // 0x330 PushV
	var_178_bool = 0; // 0x331 MovB
	var_179_int = 0; // 0x332 PushI
	var_180_bool = var_154_float > var_179_int; // 0x333 GT
	if(var_180_bool == 0) goto Label_825; // 0x334 JumpB
	var_181_float = var_154_float * var_154_float; // 0x335 Mult
	var_182_bool = var_171_float > var_181_float; // 0x336 GT
	if(var_182_bool == 0) goto Label_825; // 0x337 JumpB
	var_178_bool = 1; // 0x338 MovB
	
Label_825:
	if(var_178_bool == 0) goto Label_830; // 0x339 JumpB
	Stop(); // 0x33a Func
	var_151_bool = 0; // 0x33c MovB
	return 16; // 0x33d Return
	
Label_830:
	var_183_float = var_153_float * var_153_float; // 0x33e Mult
	var_184_bool = var_171_float > var_183_float; // 0x33f GT
	if(var_184_bool == 0) goto Label_892; // 0x340 JumpB
	GetPFPosition(var_168_cvector); // 0x341 ObjFunc
	FindPathTo(var_172_object, var_168_cvector); // 0x343 Func
	var_185_bool = var_172_object != 0; // 0x345 NullNeq
	if(var_185_bool == 0) goto Label_841; // 0x346 JumpB
	var_167_object = var_172_object; // 0x347 Mov
	var_172_object = 0; // 0x348 SetNull
	
Label_841:
	var_186_bool = var_167_object != 0; // 0x349 NullNeq
	if(var_186_bool == 0) goto Label_874; // 0x34a JumpB
	var_187_bool = var_166_bool; // 0x34b Push
	if(var_187_bool == 0) goto Label_851; // 0x34c JumpB
	var_166_bool = 0; // 0x34d MovB
	RotatePath(var_167_object, var_165_bool); // 0x34e Func
	var_188_bool = var_165_bool == 0; // 0x350 Not
	if(var_188_bool == 0) goto Label_851; // 0x351 JumpB
	goto Label_898; // 0x352 Jump
	
Label_898:
	var_151_bool = !var_0_object; // 0x382 Not2
	return 16; // 0x383 Return
	
Label_851:
	var_189_int = 0; // 0x353 PushI
	var_190_float = 0.3; // 0x354 PushF
	SetTimer(var_189_int, var_190_float); // 0x355 Func
	var_191_string = ""; // 0x357 PushV
	func_945(var_191_string); // 0x358 NEW_2
	var_192_string = ""; // 0x35a PushV
	func_947(var_192_string); // 0x35b NEW_2
	FollowPath(var_167_object, var_155_bool, var_165_bool, var_191_string, var_192_string); // 0x35d Func
	var_193_bool = var_165_bool == 0; // 0x35f Not
	if(var_193_bool == 0) goto Label_872; // 0x360 JumpB
	var_194_object = var_0_object; // 0x361 PushT
	if(var_194_object == 0) goto Label_870; // 0x362 JumpB
	var_167_object = 0; // 0x363 SetNull
	goto Label_898; // 0x364 Jump
	
Label_870:
	goto Label_897; // 0x366 Jump
	
Label_897:
	goto Label_802; // 0x381 Jump
	
Label_872:
	var_167_object = 0; // 0x368 SetNull
	goto Label_890; // 0x369 Jump
	
Label_890:
	var_172_object = 0; // 0x37a SetNull
	goto Label_896; // 0x37b Jump
	
Label_896:
	var_167_object = 0; // 0x380 SetNull
	
Label_874:
	var_195_int = 0; // 0x36a PushI
	KillTimer(var_195_int); // 0x36b Func
	var_196_float = 0.5; // 0x36d PushF
	Sleep(var_196_float, var_165_bool); // 0x36e Func
	var_197_bool = var_165_bool == 0; // 0x370 Not
	if(var_197_bool == 0) goto Label_886; // 0x371 JumpB
	var_198_object = var_0_object; // 0x372 PushT
	if(var_198_object == 0) goto Label_886; // 0x373 JumpB
	var_167_object = 0; // 0x374 SetNull
	goto Label_898; // 0x375 Jump
	
Label_886:
	var_199_int = 0; // 0x376 PushI
	var_200_float = 0.3; // 0x377 PushF
	SetTimer(var_199_int, var_200_float); // 0x378 Func
	
Label_892:
	var_201_int = 0; // 0x37c PushI
	KillTimer(var_201_int); // 0x37d Func
	goto Label_898; // 0x37f Jump
}


func_31(var_0_object, var_3_bool, var_5_int, var_19_object, var_20_bool, var_21_float, var_128_bool, var_220_bool)
{
	var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_bool = 0; var_26_bool = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_bool = 0; var_32_float = 0; var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; var_37_bool = 0; var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_bool = 0; var_43_float = 0; // 0x1f PushV
	func_260(var_41_cvector, var_42_bool, var_43_float); // 0x21 NEW_2
	var_5_int = 0; // 0x23 TMovI
	var_66_string = "@GetAttackDistance"; // 0x24 PushS
	var_67_int = 1; // 0x25 PushI
	var_68_bool = IsFuncExist(var_19_object, var_66_string, var_67_int); // 0x26 FuncExist
	if(var_68_bool == 0) goto Label_45; // 0x27 JumpB
	GetAttackDistance(var_33_float); // 0x28 ObjFunc
	var_69_int = 50; // 0x2a PushI
	var_33_float = var_33_float + var_69_int; // 0x2b Add2
	goto Label_46; // 0x2c Jump
	
Label_46:
	var_70_int = 150; // 0x2e PushI
	var_71_bool = var_33_float >= var_70_int; // 0x2f GE
	if(var_71_bool == 0) goto Label_50; // 0x30 JumpB
	var_33_float = 150; // 0x31 MovI
	
Label_50:
	var_3_bool = 0; // 0x32 TMovB
	var_0_object = var_19_object; // 0x33 TMov
	IsPlayerActor(var_0_object, var_36_bool); // 0x34 Func
	var_72_bool = var_36_bool; // 0x36 Push
	if(var_72_bool == 0) goto Label_64; // 0x37 JumpB
	var_73_string = "attack"; // 0x38 PushS
	PlayGlobalMusic(var_73_string); // 0x39 Func
	var_74_object = Obj(); // 0x3b PushV
	func_1476(var_74_object); // 0x3c NEW_2
	SendPlayerEnemy(var_19_object, var_74_object); // 0x3e Func
	
Label_64:
	var_77_bool = var_20_bool; // 0x40 Push
	if(var_77_bool == 0) goto Label_68; // 0x41 JumpB
	var_37_bool = 0; // 0x42 MovB
	goto Label_69; // 0x43 Jump
	
Label_69:
	var_78_float = 400.0; // 0x45 PushF
	var_38_float = var_78_float + var_33_float; // 0x46 Add2
	
Label_71:
	var_79_bool = 0; // 0x47 PushV
	var_79_bool = 0; // 0x48 MovB
	var_80_bool = 0; var_81_object = Obj(); // 0x49 PushV
	var_81_object = var_0_object; // 0x4a MovT
	func_1263(var_80_bool, var_81_object); // 0x4b NEW_2
	if(var_80_bool == 0) goto Label_81; // 0x4d JumpB
	var_114_bool = var_3_bool == 0; // 0x4e Not
	if(var_114_bool == 0) goto Label_81; // 0x4f JumpB
	var_79_bool = 1; // 0x50 MovB
	
Label_81:
	if(var_79_bool == 0) goto Label_243; // 0x51 JumpB
	func_673(var_43_float); // 0x53 NEW_2
	GetPFPosition(var_34_cvector); // 0x55 TObjFunc
	GetPFPosition(var_35_cvector); // 0x57 Func
	var_39_cvector = var_34_cvector - var_35_cvector; // 0x59 Sub2
	var_40_float = var_39_cvector | var_39_cvector; // 0x5a Or2
	var_120_float = var_38_float * var_38_float; // 0x5b Mult
	var_121_bool = var_40_float >= var_120_float; // 0x5c GE
	if(var_121_bool == 0) goto Label_109; // 0x5d JumpB
	var_122_bool = 0; var_123_object = Obj(); var_124_float = 0; var_125_float = 0; var_126_bool = 0; var_127_bool = 0; // 0x5e PushV
	var_123_object = var_0_object; // 0x5f MovT
	var_124_float = var_33_float; // 0x60 Mov
	var_125_float = 10000.0; // 0x61 MovF
	var_126_bool = 1; // 0x62 MovB
	var_127_bool = 0; // 0x63 MovB
	TaskCall(2); // 0x64 TaskCall
	func_693(var_130_bool, var_122_bool, var_123_object, var_124_float, var_125_float, var_126_bool, var_127_bool); // 0x65 NEW_2
	TaskReturn(); // 0x66 TaskReturn
	var_205_bool = var_128_bool == 0; // 0x68 Not
	if(var_205_bool == 0) goto Label_107; // 0x69 JumpB
	goto Label_243; // 0x6a Jump
	
Label_243:
	WaitForAnimEnd(); // 0xf3 Func
	var_206_bool = var_3_bool; // 0xf5 PushT
	if(var_206_bool == 0) goto Label_248; // 0xf6 JumpB
	return 22; // 0xf7 Return
	
Label_248:
	var_207_string = "all"; // 0xf8 PushS
	var_208_string = "attack_off"; // 0xf9 PushS
	PlayAnimation(var_207_string, var_208_string); // 0xfa Func
	WaitForAnimEnd(); // 0xfc Func
	var_209_bool = var_36_bool; // 0xfe Push
	if(var_209_bool == 0) goto Label_259; // 0xff JumpB
	var_210_float = 2.0; // 0x100 PushF
	Sleep(var_210_float); // 0x101 Func
	
Label_259:
	return 22; // 0x103 Return
	
Label_107:
	var_37_bool = 0; // 0x6b MovB
	goto Label_242; // 0x6c Jump
	
Label_242:
	goto Label_71; // 0xf2 Jump
	
Label_109:
	var_211_float = var_21_float * var_21_float; // 0x6d Mult
	var_212_bool = var_40_float >= var_211_float; // 0x6e GE
	if(var_212_bool == 0) goto Label_234; // 0x6f JumpB
	GetPFPosition(var_41_cvector); // 0x70 TObjFunc
	CanReachByPF(var_42_bool, var_41_cvector); // 0x72 Func
	var_213_bool = var_42_bool == 0; // 0x74 Not
	if(var_213_bool == 0) goto Label_133; // 0x75 JumpB
	var_214_bool = 0; var_215_object = Obj(); var_216_float = 0; var_217_float = 0; var_218_bool = 0; var_219_bool = 0; // 0x76 PushV
	var_215_object = var_0_object; // 0x77 MovT
	var_216_float = var_33_float; // 0x78 Mov
	var_217_float = 10000.0; // 0x79 MovF
	var_218_bool = 1; // 0x7a MovB
	var_219_bool = 0; // 0x7b MovB
	TaskCall(2); // 0x7c TaskCall
	func_693(var_222_bool, var_214_bool, var_215_object, var_216_float, var_217_float, var_218_bool, var_219_bool); // 0x7d NEW_2
	TaskReturn(); // 0x7e TaskReturn
	var_223_bool = var_220_bool == 0; // 0x80 Not
	if(var_223_bool == 0) goto Label_131; // 0x81 JumpB
	goto Label_243; // 0x82 Jump
	
Label_131:
	var_37_bool = 0; // 0x83 MovB
	goto Label_71; // 0x84 Jump
	
Label_133:
	var_224_bool = var_37_bool == 0; // 0x85 Not
	if(var_224_bool == 0) goto Label_158; // 0x86 JumpB
	var_225_object = Obj(); // 0x87 PushV
	var_225_object = var_0_object; // 0x88 MovT
	func_1413(); // 0x89 NEW_2
	var_234_string = "all"; // 0x8b PushS
	var_235_string = "attack_on"; // 0x8c PushS
	PlayAnimation(var_234_string, var_235_string); // 0x8d Func
	WaitForAnimEnd(); // 0x8f Func
	func_673(var_43_float); // 0x92 NEW_2
	StopAsync(); // 0x94 Func
	var_37_bool = 1; // 0x96 MovB
	var_236_bool = 0; var_237_object = Obj(); // 0x97 PushV
	var_237_object = var_0_object; // 0x98 MovT
	func_1263(var_236_bool, var_237_object); // 0x99 NEW_2
	var_238_bool = var_236_bool == 0; // 0x9b Not
	if(var_238_bool == 0) goto Label_158; // 0x9c JumpB
	goto Label_243; // 0x9d Jump
	
Label_158:
	rand(var_43_float); // 0x9e Func
	var_239_bool = 0; // 0xa0 PushV
	var_239_bool = 1; // 0xa1 MovB
	var_240_float = 0.25; // 0xa2 PushF
	var_241_bool = var_43_float < var_240_float; // 0xa3 LT
	if(var_241_bool == 0) goto Label_170; // 0xa4 JumpB
	var_242_bool = 0; // 0xa5 PushV
	func_630(var_239_bool, var_242_bool); // 0xa6 NEW_2
	if(var_242_bool == 0) goto Label_170; // 0xa8 JumpB
	var_239_bool = 0; // 0xa9 MovB
	
Label_170:
	if(var_239_bool == 0) goto Label_187; // 0xaa JumpB
	Face(var_0_object); // 0xab Func
	func_680(); // 0xae NEW_2
	var_277_string = "all"; // 0xb0 PushS
	var_278_string = "attack_stay"; // 0xb1 PushS
	PlayAnimation(var_277_string, var_278_string); // 0xb2 Func
	var_279_bool = 0; var_280_float = 0; // 0xb4 PushV
	var_280_float = var_21_float; // 0xb5 Mov
	func_498(var_43_float, var_279_bool, var_280_float); // 0xb6 NEW_2
	StopAsync(); // 0xb8 Func
	goto Label_233; // 0xba Jump
	
Label_233:
	goto Label_242; // 0xe9 Jump
	
Label_187:
	Face(var_0_object); // 0xbb Func
	var_498_string = "all"; // 0xbd PushS
	var_499_string = "fjump"; // 0xbe PushS
	PlayAnimation(var_498_string, var_499_string); // 0xbf Func
	WaitForAnimEnd(); // 0xc1 Func
	func_673(var_43_float); // 0xc4 NEW_2
	var_500_cvector = CVector(0.0, 0.0, 0.0); // 0xc6 PushVec
	SetSpeed(var_500_cvector); // 0xc7 Func
	Stop(); // 0xc9 Func
	StopAsync(); // 0xcb Func
	var_501_bool = 0; // 0xcd PushV
	func_630(var_43_float, var_501_bool); // 0xce NEW_2
	var_502_bool = var_501_bool == 0; // 0xd0 Not
	if(var_502_bool == 0) goto Label_233; // 0xd1 JumpB
	var_503_bool = 0; var_504_object = Obj(); // 0xd2 PushV
	var_504_object = var_0_object; // 0xd3 MovT
	func_1263(var_503_bool, var_504_object); // 0xd4 NEW_2
	var_505_bool = var_503_bool == 0; // 0xd6 Not
	if(var_505_bool == 0) goto Label_217; // 0xd7 JumpB
	goto Label_243; // 0xd8 Jump
	
Label_217:
	GetPFPosition(var_34_cvector); // 0xd9 TObjFunc
	GetPFPosition(var_35_cvector); // 0xdb Func
	var_39_cvector = var_34_cvector - var_35_cvector; // 0xdd Sub2
	var_40_float = var_39_cvector | var_39_cvector; // 0xde Or2
	var_506_float = var_21_float * var_21_float; // 0xdf Mult
	var_507_bool = var_40_float < var_506_float; // 0xe0 LT
	if(var_507_bool == 0) goto Label_233; // 0xe1 JumpB
	var_508_bool = 0; var_509_float = 0; // 0xe2 PushV
	var_509_float = var_21_float; // 0xe3 Mov
	func_334(var_43_float, var_508_bool, var_509_float); // 0xe4 NEW_2
	var_510_bool = var_508_bool == 0; // 0xe6 Not
	if(var_510_bool == 0) goto Label_233; // 0xe7 JumpB
	goto Label_243; // 0xe8 Jump
	
Label_234:
	var_511_bool = 0; var_512_float = 0; // 0xea PushV
	var_512_float = var_21_float; // 0xeb Mov
	func_334(var_43_float, var_511_bool, var_512_float); // 0xec NEW_2
	var_513_bool = var_511_bool == 0; // 0xee Not
	if(var_513_bool == 0) goto Label_241; // 0xef JumpB
	goto Label_243; // 0xf0 Jump
	
Label_241:
	var_37_bool = 1; // 0xf1 MovB
	
Label_68:
	var_37_bool = 1; // 0x44 MovB
	
Label_45:
	var_33_float = var_21_float; // 0x2d Mov
}


func_673(var_0_object)
{
	var_115_object = Obj(); // 0x2a1 PushV
	var_115_object = var_0_object; // 0x2a2 MovT
	func_1539(var_115_object); // 0x2a3 NEW_2
	return 0; // 0x2a5 Return
}


func_678(var_456_int)
{
	var_456_int = 0; // 0x2a6 MovI
	return 0; // 0x2a7 Return
}


func_295(var_0_object, var_377_float, var_378_int)
{
	var_379_object = Obj(); var_380_float = 0; var_381_float = 0; var_382_object = Obj(); var_383_float = 0; var_384_float = 0; // 0x127 PushV
	var_385_float = 0.9; // 0x128 PushF
	var_386_float = var_377_float * var_385_float; // 0x129 Mult
	GetVictim(var_386_float, var_382_object); // 0x12a Func
	ReportAttack(var_0_object); // 0x12c Func
	var_387_bool = var_382_object == var_0_object; // 0x12e Eq
	if(var_387_bool == 0) goto Label_332; // 0x12f JumpB
	var_388_float = 0; var_389_object = Obj(); var_390_int = 0; // 0x130 PushV
	var_389_object = var_382_object; // 0x131 Mov
	var_390_int = var_378_int; // 0x132 Mov
	func_25(var_390_int); // 0x133 NEW_2
	var_383_float = var_388_float; // 0x134 Mov
	var_391_float = 0; var_392_object = Obj(); var_393_float = 0; var_394_int = 0; // 0x136 PushV
	var_392_object = var_382_object; // 0x137 Mov
	var_393_float = var_383_float; // 0x138 Mov
	var_395_int = 0; var_396_object = Obj(); var_397_int = 0; // 0x139 PushV
	var_396_object = var_382_object; // 0x13a Mov
	var_397_int = var_378_int; // 0x13b Mov
	func_28(var_397_int); // 0x13c NEW_2
	var_394_int = var_395_int; // 0x13d Mov
	func_1149(var_391_float, var_392_object, var_393_float, var_394_int); // 0x13f NEW_2
	var_384_float = var_391_float; // 0x140 Mov
	var_456_int = 0; // 0x142 PushV
	func_678(var_456_int); // 0x143 NEW_2
	ReportHit(var_0_object, var_456_int, var_384_float, var_383_float); // 0x145 Func
	var_457_object = Obj(); var_458_float = 0; // 0x147 PushV
	var_457_object = var_382_object; // 0x148 Mov
	var_458_float = var_384_float; // 0x149 Mov
	func_685(); // 0x14a NEW_2
	
Label_332:
	return 6; // 0x14c Return
}


func_680()
{
	var_248_string = ""; // 0x2a8 PushV
	var_248_string = "attack_stay"; // 0x2a9 MovS
	func_1435(var_248_string); // 0x2aa NEW_2
	return 0; // 0x2ac Return
}


func_938(var_173_bool, var_174_object)
{
	var_175_bool = 0; var_176_object = Obj(); // 0x3ab PushV
	var_176_object = var_174_object; // 0x3ac Mov
	func_1263(var_175_bool, var_176_object); // 0x3ad NEW_2
	var_173_bool = var_175_bool; // 0x3ae Mov
	return 0; // 0x3b0 Return
}


func_1578(var_106_string)
{
	var_107_object = Obj(); var_108_int = 0; var_109_bool = 0; var_110_object = Obj(); var_111_int = 0; var_112_bool = 0; // 0x62a PushV
	CreateInvItem(var_110_object); // 0x62b Func
	SetItemName(var_106_string); // 0x62d ObjFunc
	var_113_string = "Organ"; // 0x62f PushS
	var_114_int = 1; // 0x630 PushI
	SetProperty(var_113_string, var_114_int); // 0x631 ObjFunc
	GetItemID(var_111_int); // 0x633 ObjFunc
	var_115_int = 0; // 0x635 PushI
	var_116_int = 1; // 0x636 PushI
	AddItem(var_112_bool, var_110_object, var_115_int, var_116_int); // 0x637 Func
	return 6; // 0x639 Return
}


func_685()
{
	return 0; // 0x2ae Return
}


func_687(var_481_bool)
{
	var_481_bool = 1; // 0x2af MovB
	return 0; // 0x2b0 Return
}


func_689(var_373_int)
{
	var_373_int = 1; // 0x2b1 MovI
	return 0; // 0x2b2 Return
}


func_945(var_191_string)
{
	var_191_string = "walk"; // 0x3b1 MovS
	return 0; // 0x3b2 Return
}


func_691(var_368_float)
{
	var_368_float = 0.5; // 0x2b3 MovF
	return 0; // 0x2b4 Return
}


func_947(var_192_string)
{
	var_192_string = "run"; // 0x3b3 MovS
	return 0; // 0x3b4 Return
}


func_693(var_2_int, var_122_bool, var_123_object, var_124_float, var_125_float, var_126_bool, var_127_bool)
{
	var_131_bool = 0; var_132_bool = 0; var_133_bool = 0; var_134_bool = 0; // 0x2b5 PushV
	var_135_object = Obj(); // 0x2b6 PushV
	var_135_object = var_123_object; // 0x2b7 Mov
	func_1539(var_135_object); // 0x2b8 NEW_2
	var_136_int = 1; // 0x2ba PushI
	var_137_int = 5; // 0x2bb PushI
	SetTimer(var_136_int, var_137_int); // 0x2bc Func
	CanSee(var_133_bool, var_123_object); // 0x2be Func
	var_138_bool = var_133_bool; // 0x2c0 Push
	if(var_138_bool == 0) goto Label_712; // 0x2c1 JumpB
	var_2_int = 1; // 0x2c2 TMovB
	var_139_object = Obj(); // 0x2c3 PushV
	var_139_object = var_123_object; // 0x2c4 Mov
	func_1424(var_139_object); // 0x2c5 NEW_2
	goto Label_713; // 0x2c7 Jump
	
Label_713:
	var_146_bool = 0; var_147_object = Obj(); // 0x2c9 PushV
	var_147_object = var_123_object; // 0x2ca Mov
	func_1132(var_146_bool, var_147_object); // 0x2cb NEW_2
	if(var_146_bool == 0) goto Label_723; // 0x2cd JumpB
	var_150_object = Obj(); // 0x2ce PushV
	func_1476(var_150_object); // 0x2cf NEW_2
	SendPlayerEnemy(var_123_object, var_150_object); // 0x2d1 Func
	
Label_723:
	var_151_bool = 0; var_152_object = Obj(); var_153_float = 0; var_154_float = 0; var_155_bool = 0; var_156_bool = 0; // 0x2d3 PushV
	var_152_object = var_123_object; // 0x2d4 Mov
	var_153_float = var_124_float; // 0x2d5 Mov
	var_154_float = var_125_float; // 0x2d6 Mov
	var_155_bool = var_126_bool; // 0x2d7 Mov
	var_156_bool = var_127_bool; // 0x2d8 Mov
	func_798(var_133_bool, var_134_bool, var_151_bool, var_152_object, var_153_float, var_154_float, var_155_bool, var_156_bool); // 0x2d9 NEW_2
	var_134_bool = var_151_bool; // 0x2da Mov
	var_202_int = var_2_int; // 0x2dc PushT
	if(var_202_int == 0) goto Label_737; // 0x2dd JumpB
	var_203_string = "head"; // 0x2de PushS
	UnlookAsync(var_203_string); // 0x2df Func
	
Label_737:
	var_204_int = 1; // 0x2e1 PushI
	KillTimer(var_204_int); // 0x2e2 Func
	var_122_bool = var_134_bool; // 0x2e4 Mov
	return 4; // 0x2e5 Return
	
Label_712:
	var_2_int = 0; // 0x2c8 TMovB
}


func_949(var_11_object)
{
	var_12_bool = 0; var_13_string = ""; var_14_string = ""; // 0x3b6 PushV
	var_13_string = "quest_d5_01"; // 0x3b7 MovS
	var_14_string = "dead"; // 0x3b8 MovS
	func_1527(var_12_bool, var_13_string, var_14_string); // 0x3b9 NEW_2
	var_18_object = Obj(); // 0x3bb PushV
	var_18_object = var_11_object; // 0x3bc Mov
	func_988(var_18_object); // 0x3bd NEW_2
	var_98_int = 50; // 0x3bf PushI
	var_99_int = 40; // 0x3c0 PushI
	SetRTEnvelope(var_98_int, var_99_int); // 0x3c1 Func
	func_1595(); // 0x3c4 NEW_2
	
Label_966:
	Hold(); // 0x3c6 Func
	goto Label_966; // 0x3c8 Jump
}


func_1079(var_40_string)
{
	RemoveRTEnvelope(); // 0x438 Func
	SetDeathState(); // 0x43a Func
	Stop(); // 0x43c Func
	StopAsync(); // 0x43e Func
	StopSecondaryAnimation(); // 0x440 Func
	var_41_string = ""; // 0x442 PushV
	var_41_string = var_40_string; // 0x443 Mov
	func_1435(var_41_string); // 0x444 NEW_2
	var_70_string = "all"; // 0x446 PushS
	PlayAnimation(var_70_string, var_40_string); // 0x447 Func
	WaitForAnimEnd(); // 0x449 Func
	var_71_string = "all"; // 0x44b PushS
	LockAnimationEnd(var_71_string, var_40_string); // 0x44c Func
	RemoveEnvelope(); // 0x44e Func
	return 0; // 0x450 Return
}


func_1331(var_13_object, var_14_int, var_15_float)
{
	var_16_cvector = CVector(0,0,0); var_17_object = Obj(); var_18_int = 0; var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_int = 0; var_23_int = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_object = Obj(); var_27_int = 0; var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_int = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0); // 0x533 PushV
	var_34_bool = 0; // 0x534 PushV
	var_34_bool = 0; // 0x535 MovB
	var_35_bool = 0; // 0x536 PushV
	var_35_bool = 0; // 0x537 MovB
	var_36_object = var_13_object; // 0x538 Push
	if(var_36_object == 0) goto Label_1342; // 0x539 JumpB
	var_37_int = 4; // 0x53a PushI
	var_38_bool = var_14_int != var_37_int; // 0x53b Neq
	if(var_38_bool == 0) goto Label_1342; // 0x53c JumpB
	var_35_bool = 1; // 0x53d MovB
	
Label_1342:
	if(var_35_bool == 0) goto Label_1347; // 0x53e JumpB
	var_39_int = 5; // 0x53f PushI
	var_40_bool = var_14_int != var_39_int; // 0x540 Neq
	if(var_40_bool == 0) goto Label_1347; // 0x541 JumpB
	var_34_bool = 1; // 0x542 MovB
	
Label_1347:
	if(var_34_bool == 0) goto Label_1394; // 0x543 JumpB
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); // 0x544 PushV
	var_43_cvector = CVector(0,0,0); var_44_object = Obj(); // 0x545 PushV
	var_44_object = var_13_object; // 0x546 Mov
	func_1125(var_44_object); // 0x547 NEW_2
	var_42_cvector = var_43_cvector; // 0x548 Mov
	func_1482(var_41_cvector, var_42_cvector); // 0x54a NEW_2
	var_25_cvector = var_41_cvector; // 0x54b Mov
	CreateVectorVector(var_26_object); // 0x54d Func
	var_27_int = 1; // 0x54f MovI
	
Label_1360:
	var_54_string = "hit"; // 0x550 PushS
	var_55_int = var_54_string + var_27_int; // 0x551 Add
	GetGeometryLocator(var_55_int, var_28_bool, var_29_cvector, var_30_cvector); // 0x552 Func
	var_56_bool = var_28_bool == 0; // 0x554 Not
	if(var_56_bool == 0) goto Label_1367; // 0x555 JumpB
	goto Label_1376; // 0x556 Jump
	
Label_1376:
	size(var_31_int); // 0x560 ObjFunc
	var_57_int = var_31_int; // 0x562 Push
	if(var_57_int == 0) goto Label_1393; // 0x563 JumpB
	irand(var_32_int, var_31_int); // 0x564 Func
	get(var_33_cvector, var_32_int); // 0x566 ObjFunc
	var_58_object = Obj(); var_59_int = 0; var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); // 0x568 PushV
	var_58_object = var_13_object; // 0x569 Mov
	var_59_int = var_14_int; // 0x56a Mov
	var_60_float = var_15_float; // 0x56b Mov
	var_61_cvector = var_33_cvector; // 0x56c Mov
	var_62_cvector = -var_25_cvector; // 0x56d Neg2
	func_1399(var_60_float, var_61_cvector, var_62_cvector); // 0x56e NEW_2
	return 18; // 0x570 Return
	
Label_1393:
	var_26_object = 0; // 0x571 SetNull
	
Label_1394:
	var_103_object = Obj(); // 0x572 PushV
	var_103_object = var_13_object; // 0x573 Mov
	func_1287(var_103_object); // 0x574 NEW_2
	return 18; // 0x576 Return
	
Label_1367:
	var_104_int = var_30_cvector | var_25_cvector; // 0x557 Or
	var_105_float = 0.70711; // 0x558 PushF
	var_106_bool = var_104_int >= var_105_float; // 0x559 GE
	if(var_106_bool == 0) goto Label_1373; // 0x55a JumpB
	add(var_29_cvector); // 0x55b ObjFunc
	
Label_1373:
	var_107_int = 1; // 0x55d PushI
	var_27_int = var_27_int + var_107_int; // 0x55e Add2
	goto Label_1360; // 0x55f Jump
}


func_569(var_292_bool)
{
	var_293_bool = 0; // 0x239 PushV
	var_293_bool = 0; // 0x23a MovB
	var_294_bool = 0; // 0x23b PushV
	func_541(var_293_bool, var_294_bool); // 0x23c NEW_2
	if(var_294_bool == 0) goto Label_580; // 0x23e JumpB
	var_311_bool = 0; // 0x23f PushV
	func_585(var_292_bool, var_293_bool, var_311_bool); // 0x240 NEW_2
	if(var_311_bool == 0) goto Label_580; // 0x242 JumpB
	var_293_bool = 1; // 0x243 MovB
	
Label_580:
	if(var_293_bool == 0) goto Label_583; // 0x244 JumpB
	var_292_bool = 1; // 0x245 MovB
	return 0; // 0x246 Return
	
Label_583:
	var_292_bool = 0; // 0x247 MovB
	return 0; // 0x248 Return
}


func_1595()
{
	var_100_int = 0; // 0x63b PushV
	func_1559(var_100_int); // 0x63c NEW_2
	var_104_int = 1; // 0x63e PushI
	var_105_bool = var_100_int != var_104_int; // 0x63f Neq
	if(var_105_bool == 0) goto Label_1602; // 0x640 JumpB
	return 0; // 0x641 Return
	
Label_1602:
	var_106_string = ""; // 0x642 PushV
	var_106_string = "liver"; // 0x643 MovS
	func_1578(var_106_string); // 0x644 NEW_2
	var_117_string = ""; // 0x646 PushV
	var_117_string = "kidney"; // 0x647 MovS
	func_1578(var_117_string); // 0x648 NEW_2
	var_118_string = ""; // 0x64a PushV
	var_118_string = "heart"; // 0x64b MovS
	func_1578(var_118_string); // 0x64c NEW_2
	var_119_string = ""; // 0x64e PushV
	var_119_string = "blood"; // 0x64f MovS
	func_1578(var_119_string); // 0x650 NEW_2
	return 0; // 0x652 Return
}


func_1476(var_74_object)
{
	var_75_object = Obj(); var_76_object = Obj(); // 0x5c4 PushV
	self(var_76_object); // 0x5c5 Func
	var_74_object = var_76_object; // 0x5c7 Mov
	return 2; // 0x5c8 Return
}


func_1222(var_95_bool)
{
	var_97_bool = 0; var_98_bool = 0; // 0x4c6 PushV
	IsDead(var_98_bool); // 0x4c7 ObjFunc
	var_95_bool = var_98_bool; // 0x4c9 Mov
	return 2; // 0x4ca Return
}


func_585(var_0_object, var_4_float, var_311_bool)
{
	var_312_object = Obj(); var_313_bool = 0; var_314_float = 0; var_315_cvector = CVector(0,0,0); var_316_cvector = CVector(0,0,0); var_317_object = Obj(); var_318_bool = 0; var_319_float = 0; var_320_cvector = CVector(0,0,0); var_321_cvector = CVector(0,0,0); // 0x249 PushV
	GetScene(var_317_object); // 0x24a Func
	var_318_bool = 0; // 0x24c MovB
	
Label_589:
	var_322_cvector = CVector(0,0,0); var_323_object = Obj(); // 0x24d PushV
	var_323_object = var_0_object; // 0x24e MovT
	func_1125(var_323_object); // 0x24f NEW_2
	var_328_int = -var_322_cvector; // 0x251 Neg
	FindDirLength(var_319_float, var_328_int, var_319_float); // 0x252 Func
	var_329_bool = var_319_float < var_4_float; // 0x254 LT
	if(var_329_bool == 0) goto Label_599; // 0x255 JumpB
	goto Label_627; // 0x256 Jump
	
Label_627:
	var_311_bool = var_318_bool; // 0x273 Mov
	return 10; // 0x274 Return
	
Label_599:
	Face(var_0_object); // 0x257 Func
	var_330_string = "all"; // 0x259 PushS
	var_331_string = "bjump"; // 0x25a PushS
	PlayAnimation(var_330_string, var_331_string); // 0x25b Func
	GetPFPosition(var_320_cvector); // 0x25d TObjFunc
	GetPFPosition(var_321_cvector); // 0x25f Func
	WaitForAnimEnd(); // 0x261 Func
	func_673(var_321_cvector); // 0x264 NEW_2
	StopAsync(); // 0x266 Func
	var_332_cvector = CVector(0.0, 0.0, 0.0); // 0x268 PushVec
	SetSpeed(var_332_cvector); // 0x269 Func
	var_318_bool = 1; // 0x26b MovB
	var_333_bool = 0; // 0x26c PushV
	func_541(var_321_cvector, var_333_bool); // 0x26d NEW_2
	var_334_bool = var_333_bool == 0; // 0x26f Not
	if(var_334_bool == 0) goto Label_626; // 0x270 JumpB
	goto Label_627; // 0x271 Jump
	
Label_626:
	goto Label_589; // 0x272 Jump
}


func_1482(var_41_cvector, var_42_cvector)
{
	var_49_float = 0; var_50_float = 0; // 0x5ca PushV
	var_51_int = var_42_cvector | var_42_cvector; // 0x5cb Or
	var_50_float = sqrt(var_51_int); // 0x5cc Sqrt2
	var_52_float = 0.0; // 0x5cd PushF
	var_53_bool = var_50_float < var_52_float; // 0x5ce LT
	if(var_53_bool == 0) goto Label_1490; // 0x5cf JumpB
	var_41_cvector = CVector(0.0, 0.0, 0.0); // 0x5d0 MovV
	return 2; // 0x5d1 Return
	
Label_1490:
	var_41_cvector = var_42_cvector / var_42_cvector; // 0x5d2 Div2
	return 2; // 0x5d3 Return
}


func_1227(var_84_bool, var_85_object)
{
	var_86_object = Obj(); var_87_object = Obj(); var_88_object = Obj(); var_89_object = Obj(); // 0x4cb PushV
	var_90_bool = var_85_object == 0; // 0x4cc NullEq
	if(var_90_bool == 0) goto Label_1232; // 0x4cd JumpB
	var_84_bool = 0; // 0x4ce MovB
	return 4; // 0x4cf Return
	
Label_1232:
	var_91_bool = 0; // 0x4d0 PushV
	var_91_bool = 0; // 0x4d1 MovB
	var_92_string = "IsDead"; // 0x4d2 PushS
	var_93_int = 1; // 0x4d3 PushI
	var_94_bool = IsFuncExist(var_85_object, var_92_string, var_93_int); // 0x4d4 FuncExist
	if(var_94_bool == 0) goto Label_1244; // 0x4d5 JumpB
	var_95_bool = 0; var_96_object = Obj(); // 0x4d6 PushV
	var_96_object = var_85_object; // 0x4d7 Mov
	func_1222(var_96_object); // 0x4d8 NEW_2
	if(var_95_bool == 0) goto Label_1244; // 0x4da JumpB
	var_91_bool = 1; // 0x4db MovB
	
Label_1244:
	if(var_91_bool == 0) goto Label_1247; // 0x4dc JumpB
	var_84_bool = 0; // 0x4dd MovB
	return 4; // 0x4de Return
	
Label_1247:
	GetScene(var_88_object); // 0x4df Func
	var_99_bool = var_88_object == 0; // 0x4e1 NullEq
	if(var_99_bool == 0) goto Label_1253; // 0x4e2 JumpB
	var_84_bool = 0; // 0x4e3 MovB
	return 4; // 0x4e4 Return
	
Label_1253:
	GetScene(var_89_object); // 0x4e5 ObjFunc
	var_100_bool = var_88_object != var_89_object; // 0x4e7 Neq
	if(var_100_bool == 0) goto Label_1259; // 0x4e8 JumpB
	var_84_bool = 0; // 0x4e9 MovB
	return 4; // 0x4ea Return
	
Label_1259:
	var_84_bool = 1; // 0x4eb MovB
	return 4; // 0x4ec Return
}


func_334(var_0_object, var_340_bool, var_341_float)
{
	var_342_int = 0; var_343_bool = 0; var_344_int = 0; var_345_string = ""; var_346_int = 0; var_347_bool = 0; var_348_int = 0; var_349_string = ""; // 0x14e PushV
	func_673(var_349_string); // 0x150 NEW_2
	irand(var_346_int, var_349_string); // 0x152 Func
	var_350_int = 1; // 0x154 PushI
	var_346_int = var_346_int + var_350_int; // 0x155 Add2
	Face(var_0_object); // 0x156 Func
	var_351_bool = 1; // 0x158 PushB
	SetAttackState(var_351_bool); // 0x159 Func
	func_1548(); // 0x15c NEW_2
	var_356_string = "all"; // 0x15e PushS
	var_357_string = "attack_begin"; // 0x15f PushS
	var_358_int = var_357_string + var_346_int; // 0x160 Add
	PlayAnimation(var_356_string, var_358_int); // 0x161 Func
	WaitForAnimEnd(); // 0x163 Func
	func_641(var_348_int, var_349_string); // 0x166 NEW_2
	var_374_bool = 0; var_375_object = Obj(); // 0x168 PushV
	var_375_object = var_0_object; // 0x169 MovT
	func_1263(var_374_bool, var_375_object); // 0x16a NEW_2
	var_376_bool = var_374_bool == 0; // 0x16c Not
	if(var_376_bool == 0) goto Label_370; // 0x16d JumpB
	StopAsync(); // 0x16e Func
	var_340_bool = 0; // 0x170 MovB
	return 8; // 0x171 Return
	
Label_370:
	var_377_float = 0; var_378_int = 0; // 0x172 PushV
	var_377_float = var_341_float; // 0x173 Mov
	var_378_int = var_346_int; // 0x174 Mov
	func_295(var_349_string, var_377_float, var_378_int); // 0x175 NEW_2
	var_459_string = "all"; // 0x177 PushS
	var_460_string = "attack_middle"; // 0x178 PushS
	var_461_int = var_460_string + var_346_int; // 0x179 Add
	HasAnimation(var_347_bool, var_459_string, var_461_int); // 0x17a Func
	var_462_bool = var_347_bool; // 0x17c Push
	if(var_462_bool == 0) goto Label_451; // 0x17d JumpB
	func_1548(); // 0x17f NEW_2
	var_463_string = "all"; // 0x181 PushS
	var_464_string = "attack_middle"; // 0x182 PushS
	var_465_int = var_464_string + var_346_int; // 0x183 Add
	PlayAnimation(var_463_string, var_465_int); // 0x184 Func
	WaitForAnimEnd(); // 0x186 Func
	func_673(var_349_string); // 0x189 NEW_2
	var_466_bool = 0; var_467_object = Obj(); // 0x18b PushV
	var_467_object = var_0_object; // 0x18c MovT
	func_1263(var_466_bool, var_467_object); // 0x18d NEW_2
	var_468_bool = var_466_bool == 0; // 0x18f Not
	if(var_468_bool == 0) goto Label_405; // 0x190 JumpB
	StopAsync(); // 0x191 Func
	var_340_bool = 0; // 0x193 MovB
	return 8; // 0x194 Return
	
Label_405:
	var_469_float = 0; var_470_int = 0; // 0x195 PushV
	var_469_float = var_341_float; // 0x196 Mov
	var_470_int = var_346_int; // 0x197 Mov
	func_295(var_349_string, var_469_float, var_470_int); // 0x198 NEW_2
	var_348_int = 1; // 0x19a MovI
	
Label_411:
	var_471_string = "attack_middle"; // 0x19b PushS
	var_472_int = var_471_string + var_346_int; // 0x19c Add
	var_473_string = "_"; // 0x19d PushS
	var_474_int = var_472_int + var_473_string; // 0x19e Add
	var_349_string = var_474_int + var_348_int; // 0x19f Add2
	var_475_string = "all"; // 0x1a0 PushS
	HasAnimation(var_347_bool, var_475_string, var_349_string); // 0x1a1 Func
	var_476_bool = var_347_bool == 0; // 0x1a3 Not
	if(var_476_bool == 0) goto Label_422; // 0x1a4 JumpB
	goto Label_451; // 0x1a5 Jump
	
Label_451:
	var_477_bool = 0; // 0x1c3 PushB
	SetAttackState(var_477_bool); // 0x1c4 Func
	var_478_string = "all"; // 0x1c6 PushS
	var_479_string = "attack_end"; // 0x1c7 PushS
	var_480_int = var_479_string + var_346_int; // 0x1c8 Add
	PlayAnimation(var_478_string, var_480_int); // 0x1c9 Func
	var_481_bool = 0; // 0x1cb PushV
	func_687(var_481_bool); // 0x1cc NEW_2
	if(var_481_bool == 0) goto Label_469; // 0x1ce JumpB
	var_482_bool = 0; var_483_float = 0; // 0x1cf PushV
	var_483_float = 0.75; // 0x1d0 MovF
	func_471(var_482_bool, var_483_float); // 0x1d1 NEW_2
	StopAsync(); // 0x1d3 Func
	
Label_469:
	var_340_bool = 1; // 0x1d5 MovB
	return 8; // 0x1d6 Return
	
Label_422:
	func_1548(); // 0x1a7 NEW_2
	var_491_string = "all"; // 0x1a9 PushS
	PlayAnimation(var_491_string, var_349_string); // 0x1aa Func
	WaitForAnimEnd(); // 0x1ac Func
	func_673(var_349_string); // 0x1af NEW_2
	var_492_bool = 0; var_493_object = Obj(); // 0x1b1 PushV
	var_493_object = var_0_object; // 0x1b2 MovT
	func_1263(var_492_bool, var_493_object); // 0x1b3 NEW_2
	var_494_bool = var_492_bool == 0; // 0x1b5 Not
	if(var_494_bool == 0) goto Label_443; // 0x1b6 JumpB
	StopAsync(); // 0x1b7 Func
	var_340_bool = 0; // 0x1b9 MovB
	return 8; // 0x1ba Return
	
Label_443:
	var_495_float = 0; var_496_int = 0; // 0x1bb PushV
	var_495_float = var_341_float; // 0x1bc Mov
	var_496_int = var_346_int; // 0x1bd Mov
	func_295(var_349_string, var_495_float, var_496_int); // 0x1be NEW_2
	var_497_int = 1; // 0x1c0 PushI
	var_348_int = var_348_int + var_497_int; // 0x1c1 Add2
	goto Label_411; // 0x1c2 Jump
}


func_1619(var_10_object)
{
	var_11_object = Obj(); // 0x654 PushV
	var_11_object = var_10_object; // 0x655 Mov
	TaskCall(3); // 0x656 TaskCall
	func_949(var_11_object); // 0x657 NEW_2
	TaskReturn(); // 0x658 TaskReturn
	return 0; // 0x65a Return
}


func_1492(var_429_float, var_430_float, var_431_float)
{
	var_434_bool = var_430_float < var_431_float; // 0x5d5 LT
	if(var_434_bool == 0) goto Label_1497; // 0x5d6 JumpB
	var_429_float = var_430_float; // 0x5d7 Mov
	goto Label_1498; // 0x5d8 Jump
	
Label_1498:
	return 0; // 0x5da Return
	
Label_1497:
	var_429_float = var_431_float; // 0x5d9 Mov
}


func_471(var_482_bool, var_483_float)
{
	var_484_float = 0; var_485_bool = 0; var_486_float = 0; var_487_bool = 0; // 0x1d7 PushV
	rand(var_486_float); // 0x1d8 Func
	var_488_bool = var_486_float < var_483_float; // 0x1da LT
	if(var_488_bool == 0) goto Label_491; // 0x1db JumpB
	
Label_476:
	IsAnimationPlaying(var_487_bool); // 0x1dc Func
	var_489_bool = var_487_bool == 0; // 0x1de Not
	if(var_489_bool == 0) goto Label_481; // 0x1df JumpB
	goto Label_490; // 0x1e0 Jump
	
Label_490:
	goto Label_496; // 0x1ea Jump
	
Label_496:
	var_482_bool = 0; // 0x1f0 MovB
	return 4; // 0x1f1 Return
	
Label_481:
	var_490_bool = 0; // 0x1e1 PushV
	func_569(var_490_bool); // 0x1e2 NEW_2
	if(var_490_bool == 0) goto Label_487; // 0x1e4 JumpB
	var_482_bool = 1; // 0x1e5 MovB
	return 4; // 0x1e6 Return
	
Label_487:
	sync(); // 0x1e7 Func
	goto Label_476; // 0x1e9 Jump
	
Label_491:
	WaitForAnimEnd(); // 0x1eb Func
	func_673(var_487_bool); // 0x1ee NEW_2
}


func_1111(var_419_string, var_420_int)
{
	var_421_int = 2; // 0x458 PushI
	var_422_bool = var_420_int == var_421_int; // 0x459 Eq
	if(var_422_bool == 0) goto Label_1118; // 0x45a JumpB
	var_419_string = "fire"; // 0x45b MovS
	return 0; // 0x45c Return
	
Label_1118:
	var_423_int = 1; // 0x45e PushI
	var_424_bool = var_420_int == var_423_int; // 0x45f Eq
	if(var_424_bool == 0) goto Label_1123; // 0x460 JumpB
	var_419_string = "bullet"; // 0x461 MovS
	return 0; // 0x462 Return
	
Label_1123:
	var_419_string = "phys"; // 0x463 MovS
	return 0; // 0x464 Return
}


func_1499(var_439_float, var_440_float, var_441_float, var_442_float)
{
	var_443_bool = var_440_float < var_441_float; // 0x5dc LT
	if(var_443_bool == 0) goto Label_1504; // 0x5dd JumpB
	var_439_float = var_441_float; // 0x5de Mov
	return 0; // 0x5df Return
	
Label_1504:
	var_444_bool = var_440_float > var_442_float; // 0x5e0 GT
	if(var_444_bool == 0) goto Label_1508; // 0x5e1 JumpB
	var_439_float = var_442_float; // 0x5e2 Mov
	return 0; // 0x5e3 Return
	
Label_1508:
	var_439_float = var_440_float; // 0x5e4 Mov
	return 0; // 0x5e5 Return
}


func_988(var_18_object)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_string = ""; var_24_object = Obj(); var_25_bool = 0; var_26_bool = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_string = ""; var_34_object = Obj(); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); // 0x3dc PushV
	var_39_bool = var_18_object == 0; // 0x3dd NullEq
	if(var_39_bool == 0) goto Label_996; // 0x3de JumpB
	var_40_string = ""; // 0x3df PushV
	var_40_string = "fdie"; // 0x3e0 MovS
	func_1079(var_40_string); // 0x3e1 NEW_2
	goto Label_1078; // 0x3e3 Jump
	
Label_1078:
	return 20; // 0x436 Return
	
Label_996:
	GetPosition(var_29_cvector); // 0x3e4 ObjFunc
	GetPosition(var_30_cvector); // 0x3e6 Func
	GetDirection(var_31_cvector); // 0x3e8 Func
	var_32_cvector = var_30_cvector - var_29_cvector; // 0x3ea Sub2
	var_72_float = GetByIndex(var_32_cvector, 0); // 0x3eb PushE
	var_73_float = GetByIndex(var_31_cvector, 0); // 0x3ec PushE
	var_74_float = var_72_float * var_73_float; // 0x3ed Mult
	var_75_float = GetByIndex(var_32_cvector, 2); // 0x3ee PushE
	var_76_float = GetByIndex(var_31_cvector, 2); // 0x3ef PushE
	var_77_float = var_75_float * var_76_float; // 0x3f0 Mult
	var_78_int = var_74_float + var_77_float; // 0x3f1 Add
	var_79_int = 0; // 0x3f2 PushI
	var_80_bool = var_78_int >= var_79_int; // 0x3f3 GE
	if(var_80_bool == 0) goto Label_1015; // 0x3f4 JumpB
	var_33_string = "fdie"; // 0x3f5 MovS
	goto Label_1016; // 0x3f6 Jump
	
Label_1016:
	RemoveRTEnvelope(); // 0x3f8 Func
	SetDeathState(); // 0x3fa Func
	Stop(); // 0x3fc Func
	StopAsync(); // 0x3fe Func
	var_34_object = var_18_object; // 0x400 Mov
	var_81_string = "GetScriptProperty"; // 0x401 PushS
	var_82_int = 2; // 0x402 PushI
	var_83_bool = IsFuncExist(var_18_object, var_81_string, var_82_int); // 0x403 FuncExist
	if(var_83_bool == 0) goto Label_1040; // 0x404 JumpB
	var_84_string = "Owner"; // 0x405 PushS
	HasScriptProperty(var_35_bool, var_84_string); // 0x406 ObjFunc
	var_85_bool = var_35_bool; // 0x408 Push
	if(var_85_bool == 0) goto Label_1040; // 0x409 JumpB
	var_86_string = "Owner"; // 0x40a PushS
	GetScriptProperty(var_34_object, var_86_string); // 0x40b ObjFunc
	var_87_bool = var_34_object == 0; // 0x40d NullEq
	if(var_87_bool == 0) goto Label_1040; // 0x40e JumpB
	var_34_object = var_18_object; // 0x40f Mov
	
Label_1040:
	var_88_string = "@GetEyesHeight"; // 0x410 PushS
	var_89_int = 1; // 0x411 PushI
	var_90_bool = IsFuncExist(var_34_object, var_88_string, var_89_int); // 0x412 FuncExist
	if(var_90_bool == 0) goto Label_1055; // 0x413 JumpB
	GetEyesHeight(var_37_float); // 0x414 ObjFunc
	var_38_cvector = CVector(0.0, 0.0, 0.0); // 0x416 MovV
	var_91_float = GetByIndex(var_38_cvector, 1); // 0x417 PushE
	var_91_float = var_37_float; // 0x418 Mov
	SetByIndex(var_38_cvector, 1) = var_91_float; // 0x419 PopE
	var_92_string = "head"; // 0x41a PushS
	LookAsync(var_18_object, var_92_string, var_38_cvector); // 0x41b Func
	var_36_bool = 1; // 0x41d MovB
	goto Label_1056; // 0x41e Jump
	
Label_1056:
	var_93_string = ""; // 0x420 PushV
	var_93_string = var_33_string; // 0x421 Mov
	func_1435(var_93_string); // 0x422 NEW_2
	var_94_string = "all"; // 0x424 PushS
	PlayAnimation(var_94_string, var_33_string); // 0x425 Func
	WaitForAnimEnd(); // 0x427 Func
	var_95_bool = var_36_bool; // 0x429 Push
	if(var_95_bool == 0) goto Label_1072; // 0x42a JumpB
	StopAsync(); // 0x42b Func
	var_96_string = "head"; // 0x42d PushS
	UnlookAsync(var_96_string); // 0x42e Func
	
Label_1072:
	var_97_string = "all"; // 0x430 PushS
	LockAnimationEnd(var_97_string, var_33_string); // 0x431 Func
	RemoveEnvelope(); // 0x433 Func
	var_34_object = 0; // 0x435 SetNull
	
Label_1055:
	var_36_bool = 0; // 0x41f MovB
	
Label_1015:
	var_33_string = "bdie"; // 0x3f7 MovS
}


func_1125(var_322_cvector)
{
	var_324_cvector = CVector(0,0,0); var_325_cvector = CVector(0,0,0); var_326_cvector = CVector(0,0,0); var_327_cvector = CVector(0,0,0); // 0x465 PushV
	GetPosition(var_326_cvector); // 0x466 Func
	GetPosition(var_327_cvector); // 0x468 ObjFunc
	var_322_cvector = var_327_cvector - var_326_cvector; // 0x46a Sub2
	return 4; // 0x46b Return
}


func_1510(var_447_float)
{
	var_448_object = Obj(); var_449_object = Obj(); // 0x5e6 PushV
	CreateFloatVector(var_449_object); // 0x5e7 Func
	add(var_447_float); // 0x5e9 ObjFunc
	var_450_int = 0; // 0x5eb PushI
	var_451_bool = var_447_float < var_450_int; // 0x5ec LT
	if(var_451_bool == 0) goto Label_1522; // 0x5ed JumpB
	var_452_float = 0.7; // 0x5ee PushF
	var_453_int = 500; // 0x5ef PushI
	RumblePlay(var_452_float, var_453_int); // 0x5f0 Func
	
Label_1522:
	var_454_int = 15; // 0x5f2 PushI
	SendWorldWndMessage(var_454_int, var_449_object); // 0x5f3 Func
	return 2; // 0x5f5 Return
}


func_1132(var_146_bool, var_147_object)
{
	var_148_bool = 0; var_149_bool = 0; // 0x46c PushV
	IsPlayerActor(var_147_object, var_149_bool); // 0x46d Func
	var_146_bool = var_149_bool; // 0x46f Mov
	return 2; // 0x470 Return
}


func_1263(var_80_bool, var_81_object)
{
	var_82_int = 0; var_83_int = 0; // 0x4ef PushV
	var_84_bool = 0; var_85_object = Obj(); // 0x4f0 PushV
	var_85_object = var_81_object; // 0x4f1 Mov
	func_1227(var_84_bool, var_85_object); // 0x4f2 NEW_2
	var_101_bool = var_84_bool == 0; // 0x4f4 Not
	if(var_101_bool == 0) goto Label_1272; // 0x4f5 JumpB
	var_80_bool = 0; // 0x4f6 MovB
	return 2; // 0x4f7 Return
	
Label_1272:
	var_102_bool = 0; var_103_object = Obj(); var_104_string = ""; // 0x4f8 PushV
	var_103_object = var_81_object; // 0x4f9 Mov
	var_104_string = "noaccess"; // 0x4fa MovS
	func_1137(var_102_bool, var_103_object, var_104_string); // 0x4fb NEW_2
	var_111_bool = var_102_bool == 0; // 0x4fd Not
	if(var_111_bool == 0) goto Label_1281; // 0x4fe JumpB
	var_80_bool = 1; // 0x4ff MovB
	return 2; // 0x500 Return
	
Label_1281:
	var_112_string = "noaccess"; // 0x501 PushS
	GetProperty(var_112_string, var_83_int); // 0x502 ObjFunc
	var_113_int = 0; // 0x504 PushI
	var_80_bool = var_83_int == var_113_int; // 0x505 Eq2
	return 2; // 0x506 Return
}


func_1137(var_102_bool, var_103_object, var_104_string)
{
	var_105_bool = 0; var_106_bool = 0; // 0x471 PushV
	var_107_string = "HasProperty"; // 0x472 PushS
	var_108_int = 2; // 0x473 PushI
	var_109_bool = IsFuncExist(var_103_object, var_107_string, var_108_int); // 0x474 FuncExist
	var_110_bool = var_109_bool == 0; // 0x475 Not
	if(var_110_bool == 0) goto Label_1145; // 0x476 JumpB
	var_102_bool = 0; // 0x477 MovB
	return 2; // 0x478 Return
	
Label_1145:
	HasProperty(var_104_string, var_106_bool); // 0x479 ObjFunc
	var_102_bool = var_106_bool; // 0x47b Mov
	return 2; // 0x47c Return
}


func_498(var_0_object, var_279_bool, var_280_float)
{
	var_281_bool = 0; var_282_cvector = CVector(0,0,0); var_283_cvector = CVector(0,0,0); var_284_cvector = CVector(0,0,0); var_285_float = 0; var_286_bool = 0; var_287_cvector = CVector(0,0,0); var_288_cvector = CVector(0,0,0); var_289_cvector = CVector(0,0,0); var_290_float = 0; // 0x1f2 PushV
	
Label_499:
	IsAnimationPlaying(var_286_bool); // 0x1f3 Func
	var_291_bool = var_286_bool == 0; // 0x1f5 Not
	if(var_291_bool == 0) goto Label_504; // 0x1f6 JumpB
	goto Label_536; // 0x1f7 Jump
	
Label_536:
	func_673(var_290_float); // 0x219 NEW_2
	var_279_bool = 0; // 0x21b MovB
	return 10; // 0x21c Return
	
Label_504:
	var_292_bool = 0; // 0x1f8 PushV
	func_569(var_292_bool); // 0x1f9 NEW_2
	if(var_292_bool == 0) goto Label_510; // 0x1fb JumpB
	var_279_bool = 1; // 0x1fc MovB
	return 10; // 0x1fd Return
	
Label_510:
	var_335_bool = 0; var_336_object = Obj(); // 0x1fe PushV
	var_336_object = var_0_object; // 0x1ff MovT
	func_1263(var_335_bool, var_336_object); // 0x200 NEW_2
	var_337_bool = var_335_bool == 0; // 0x202 Not
	if(var_337_bool == 0) goto Label_518; // 0x203 JumpB
	var_279_bool = 0; // 0x204 MovB
	return 10; // 0x205 Return
	
Label_518:
	GetPFPosition(var_287_cvector); // 0x206 TObjFunc
	GetPFPosition(var_288_cvector); // 0x208 Func
	var_289_cvector = var_287_cvector - var_288_cvector; // 0x20a Sub2
	var_290_float = var_289_cvector | var_289_cvector; // 0x20b Or2
	var_338_float = var_280_float * var_280_float; // 0x20c Mult
	var_339_bool = var_290_float < var_338_float; // 0x20d LT
	if(var_339_bool == 0) goto Label_533; // 0x20e JumpB
	var_340_bool = 0; var_341_float = 0; // 0x20f PushV
	var_341_float = var_280_float; // 0x210 Mov
	func_334(var_290_float, var_340_bool, var_341_float); // 0x211 NEW_2
	var_279_bool = 1; // 0x213 MovB
	return 10; // 0x214 Return
	
Label_533:
	sync(); // 0x215 Func
	goto Label_499; // 0x217 Jump
}


func_756(var_2_int)
{
	var_10_int = 1; // 0x2f4 PushI
	KillTimer(var_10_int); // 0x2f5 Func
	var_11_int = var_2_int; // 0x2f7 PushT
	if(var_11_int == 0) goto Label_765; // 0x2f8 JumpB
	var_2_int = 0; // 0x2f9 TMovB
	var_12_string = "head"; // 0x2fa PushS
	UnlookAsync(var_12_string); // 0x2fb Func
	
Label_765:
	func_922(var_9_object); // 0x2fe NEW_2
	return 0; // 0x300 Return
}


func_630(var_0_object, var_242_bool)
{
	var_243_bool = 0; var_244_bool = 0; // 0x276 PushV
	var_245_string = "IsAttacking"; // 0x277 PushS
	var_246_int = 1; // 0x278 PushI
	var_247_bool = IsFuncExist(var_0_object, var_245_string, var_246_int); // 0x279 FuncExist
	if(var_247_bool == 0) goto Label_639; // 0x27a JumpB
	IsAttacking(var_244_bool); // 0x27b TObjFunc
	var_242_bool = var_244_bool; // 0x27d Mov
	return 2; // 0x27e Return
	
Label_639:
	var_242_bool = 0; // 0x27f MovB
	return 2; // 0x280 Return
}


func_1527(var_12_bool, var_13_string, var_14_string)
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x5f7 PushV
	FindActor(var_16_object, var_13_string); // 0x5f8 Func
	var_17_bool = var_16_object == 0; // 0x5fa NullEq
	if(var_17_bool == 0) goto Label_1534; // 0x5fb JumpB
	var_12_bool = 0; // 0x5fc MovB
	return 2; // 0x5fd Return
	
Label_1534:
	Trigger(var_16_object, var_14_string); // 0x5fe Func
	var_12_bool = 1; // 0x600 MovB
	return 2; // 0x601 Return
}


func_1149(var_391_float, var_392_object, var_393_float, var_394_int)
{
	var_398_int = 0; var_399_string = ""; var_400_int = 0; var_401_float = 0; var_402_float = 0; var_403_float = 0; var_404_int = 0; var_405_string = ""; var_406_int = 0; var_407_float = 0; var_408_float = 0; var_409_float = 0; // 0x47d PushV
	var_410_bool = 0; var_411_object = Obj(); var_412_string = ""; // 0x47e PushV
	var_411_object = var_392_object; // 0x47f Mov
	var_412_string = "health"; // 0x480 MovS
	func_1137(var_410_bool, var_411_object, var_412_string); // 0x481 NEW_2
	var_413_bool = var_410_bool == 0; // 0x483 Not
	if(var_413_bool == 0) goto Label_1159; // 0x484 JumpB
	var_391_float = 0.0; // 0x485 MovF
	return 12; // 0x486 Return
	
Label_1159:
	var_414_bool = 0; var_415_object = Obj(); var_416_string = ""; // 0x487 PushV
	var_415_object = var_392_object; // 0x488 Mov
	var_416_string = "armor"; // 0x489 MovS
	func_1137(var_414_bool, var_415_object, var_416_string); // 0x48a NEW_2
	var_417_bool = var_414_bool == 0; // 0x48c Not
	if(var_417_bool == 0) goto Label_1168; // 0x48d JumpB
	var_404_int = 0; // 0x48e MovI
	goto Label_1171; // 0x48f Jump
	
Label_1171:
	var_418_string = "armor_"; // 0x493 PushS
	var_419_string = ""; var_420_int = 0; // 0x494 PushV
	var_420_int = var_394_int; // 0x495 Mov
	func_1111(var_419_string, var_420_int); // 0x496 NEW_2
	var_405_string = var_418_string + var_419_string; // 0x498 Add2
	var_425_bool = 0; var_426_object = Obj(); var_427_string = ""; // 0x499 PushV
	var_426_object = var_392_object; // 0x49a Mov
	var_427_string = var_405_string; // 0x49b Mov
	func_1137(var_425_bool, var_426_object, var_427_string); // 0x49c NEW_2
	var_428_bool = var_425_bool == 0; // 0x49e Not
	if(var_428_bool == 0) goto Label_1186; // 0x49f JumpB
	var_406_int = 0; // 0x4a0 MovI
	goto Label_1188; // 0x4a1 Jump
	
Label_1188:
	var_429_float = 0; var_430_float = 0; var_431_float = 0; // 0x4a4 PushV
	var_432_int = var_404_int + var_406_int; // 0x4a5 Add
	var_433_float = 100.0; // 0x4a6 PushF
	var_430_float = var_432_int / var_432_int; // 0x4a7 Div2
	var_431_float = 1; // 0x4a8 MovI
	func_1492(var_429_float, var_430_float, var_431_float); // 0x4a9 NEW_2
	var_407_float = var_429_float; // 0x4aa Mov
	var_435_string = "health"; // 0x4ac PushS
	GetProperty(var_435_string, var_408_float); // 0x4ad ObjFunc
	var_436_int = 1; // 0x4af PushI
	var_437_int = var_436_int - var_407_float; // 0x4b0 Sub
	var_409_float = var_393_float * var_437_int; // 0x4b1 Mult2
	var_438_string = "health"; // 0x4b2 PushS
	var_439_float = 0; var_440_float = 0; var_441_float = 0; var_442_float = 0; // 0x4b3 PushV
	var_440_float = var_408_float - var_409_float; // 0x4b4 Sub2
	var_441_float = 0; // 0x4b5 MovI
	var_442_float = 1; // 0x4b6 MovI
	func_1499(var_439_float, var_440_float, var_441_float, var_442_float); // 0x4b7 NEW_2
	SetProperty(var_438_string, var_439_float); // 0x4b9 ObjFunc
	var_445_bool = 0; var_446_object = Obj(); // 0x4bb PushV
	var_446_object = var_392_object; // 0x4bc Mov
	func_1132(var_445_bool, var_446_object); // 0x4bd NEW_2
	if(var_445_bool == 0) goto Label_1220; // 0x4bf JumpB
	var_447_float = 0; // 0x4c0 PushV
	var_447_float = -var_409_float; // 0x4c1 Neg2
	func_1510(var_447_float); // 0x4c2 NEW_2
	
Label_1220:
	var_391_float = var_409_float; // 0x4c4 Mov
	return 12; // 0x4c5 Return
	
Label_1186:
	GetProperty(var_405_string, var_406_int); // 0x4a2 ObjFunc
	
Label_1168:
	var_455_string = "armor"; // 0x490 PushS
	GetProperty(var_455_string, var_404_int); // 0x491 ObjFunc
}


func_1399(var_15_object, var_18_cvector, var_19_cvector)
{
	var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); // 0x577 PushV
	GetScene(var_22_object); // 0x578 Func
	var_24_string = "scripted"; // 0x57a PushS
	var_25_string = "blood_dir.xml"; // 0x57b PushS
	AddActorByType(var_23_object, var_24_string, var_22_object, var_18_cvector, var_19_cvector, var_25_string); // 0x57c Func
	var_26_object = Obj(); // 0x57e PushV
	var_26_object = var_15_object; // 0x57f Mov
	func_1287(var_26_object); // 0x580 NEW_2
	return 4; // 0x582 Return
}


