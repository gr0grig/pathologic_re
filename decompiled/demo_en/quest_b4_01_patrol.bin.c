task_0_event_5(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	TaskCall(1); // 0x4 TaskCall
	func_19(); // 0x5 NEW_2
	TaskReturn(); // 0x6 TaskReturn
	return 0; // 0x8 Return
}


task_0_event_26(var_0_string, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	var_10_string = "cleanup"; // 0xa PushS
	var_11_bool = var_9_bool == var_10_string; // 0xb Eq
	if(var_11_bool == 0) goto Label_18; // 0xc JumpB
	var_12_object = Obj(); // 0xd PushV
	func_1459(var_12_object); // 0xe NEW_2
	RemoveActor(var_12_object); // 0x10 Func
	
Label_18:
	return 0; // 0x12 Return
}


task_2_event_7(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_int)
{
	var_10_int = 1; // 0x2f4 PushI
	var_11_bool = var_9_int == var_10_int; // 0x2f5 Eq
	if(var_11_bool == 0) goto Label_764; // 0x2f6 JumpB
	var_12_object = Obj(); // 0x2f7 PushV
	var_12_object = var_1_int; // 0x2f8 MovT
	func_1503(var_12_object); // 0x2f9 NEW_2
	goto Label_768; // 0x2fb Jump
	
Label_768:
	return 0; // 0x300 Return
	
Label_764:
	var_17_int = 0; // 0x2fc PushV
	var_17_int = var_9_int; // 0x2fd Mov
	func_913(var_8_bool, var_9_int, var_17_int); // 0x2fe NEW_2
}


task_2_event_1(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_bool = 0; // 0x30f PushV
	var_10_bool = 0; // 0x310 MovB
	var_11_bool = var_1_int == var_9_object; // 0x311 Eq
	if(var_11_bool == 0) goto Label_790; // 0x312 JumpB
	var_12_bool = var_2_int == 0; // 0x313 Not
	if(var_12_bool == 0) goto Label_790; // 0x314 JumpB
	var_10_bool = 1; // 0x315 MovB
	
Label_790:
	if(var_10_bool == 0) goto Label_796; // 0x316 JumpB
	var_2_int = 1; // 0x317 TMovB
	var_13_object = Obj(); // 0x318 PushV
	var_13_object = var_9_object; // 0x319 Mov
	func_1407(var_13_object); // 0x31a NEW_2
	
Label_796:
	return 0; // 0x31c Return
}


task_2_event_2(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_bool = 0; // 0x31e PushV
	var_10_bool = 0; // 0x31f MovB
	var_11_bool = var_1_int == var_9_object; // 0x320 Eq
	if(var_11_bool == 0) goto Label_805; // 0x321 JumpB
	var_12_int = var_2_int; // 0x322 PushT
	if(var_12_int == 0) goto Label_805; // 0x323 JumpB
	var_10_bool = 1; // 0x324 MovB
	
Label_805:
	if(var_10_bool == 0) goto Label_810; // 0x325 JumpB
	var_2_int = 0; // 0x326 TMovB
	var_13_string = "head"; // 0x327 PushS
	UnlookAsync(var_13_string); // 0x328 Func
	
Label_810:
	return 0; // 0x32a Return
}


task_2_event_10(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	RequestClearPath(var_9_object); // 0x3a4 Func
	return 0; // 0x3a6 Return
}


task_2_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	func_769(var_9_object); // 0x3b0 NEW_2
	var_14_object = Obj(); // 0x3b2 PushV
	var_14_object = var_9_object; // 0x3b3 Mov
	func_1570(); // 0x3b4 NEW_2
	return 0; // 0x3b6 Return
}


task_3_event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float)
{
	return 0; // 0x441 Return
}


task_3_event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_string)
{
	return 0; // 0x443 Return
}


task_3_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	return 0; // 0x445 Return
}


event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	var_9_object = Obj(); // 0x5f3 PushV
	func_1459(var_9_object); // 0x5f4 NEW_2
	RemoveActor(var_9_object); // 0x5f6 Func
	Hold(); // 0x5f8 Func
	return 0; // 0x5fa Return
}


event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float)
{
	var_13_object = Obj(); var_14_int = 0; var_15_float = 0; // 0x604 PushV
	var_13_object = var_9_object; // 0x605 Mov
	var_14_int = var_10_int; // 0x606 Mov
	var_15_float = var_11_float; // 0x607 Mov
	func_1314(var_13_object, var_14_int, var_15_float); // 0x608 NEW_2
	return 0; // 0x60a Return
}


event_43(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float, var_13_cvector, var_14_cvector)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); // 0x60c PushV
	var_15_object = var_9_object; // 0x60d Mov
	var_16_int = var_10_int; // 0x60e Mov
	var_17_float = var_11_float; // 0x60f Mov
	var_18_cvector = var_13_cvector; // 0x610 Mov
	var_19_cvector = var_14_cvector; // 0x611 Mov
	func_1382(var_17_float, var_18_cvector, var_19_cvector); // 0x612 NEW_2
	return 0; // 0x614 Return
}


event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_string)
{
	var_11_float = 0; var_12_float = 0; // 0x615 PushV
	var_13_string = "health"; // 0x616 PushS
	var_14_bool = var_10_string == var_13_string; // 0x617 Eq
	if(var_14_bool == 0) goto Label_1569; // 0x618 JumpB
	var_15_string = "health"; // 0x619 PushS
	GetProperty(var_15_string, var_12_float); // 0x61a Func
	var_16_int = 0; // 0x61c PushI
	var_17_bool = var_12_float <= var_16_int; // 0x61d LE
	if(var_17_bool == 0) goto Label_1569; // 0x61e JumpB
	SignalDeath(var_9_object); // 0x61f Func
	
Label_1569:
	return 2; // 0x621 Return
}


event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_object = Obj(); // 0x623 PushV
	var_10_object = var_9_object; // 0x624 Mov
	func_1531(var_10_object); // 0x625 NEW_2
	return 0; // 0x627 Return
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_769(var_2_int)
{
	var_10_int = 1; // 0x301 PushI
	KillTimer(var_10_int); // 0x302 Func
	var_11_int = var_2_int; // 0x304 PushT
	if(var_11_int == 0) goto Label_778; // 0x305 JumpB
	var_2_int = 0; // 0x306 TMovB
	var_12_string = "head"; // 0x307 PushS
	UnlookAsync(var_12_string); // 0x308 Func
	
Label_778:
	func_935(var_9_object); // 0x30b NEW_2
	return 0; // 0x30d Return
}


func_643(var_0_object, var_242_bool)
{
	var_243_bool = 0; var_244_bool = 0; // 0x283 PushV
	var_245_string = "IsAttacking"; // 0x284 PushS
	var_246_int = 1; // 0x285 PushI
	var_247_bool = IsFuncExist(var_0_object, var_245_string, var_246_int); // 0x286 FuncExist
	if(var_247_bool == 0) goto Label_652; // 0x287 JumpB
	IsAttacking(var_244_bool); // 0x288 TObjFunc
	var_242_bool = var_244_bool; // 0x28a Mov
	return 2; // 0x28b Return
	
Label_652:
	var_242_bool = 0; // 0x28c MovB
	return 2; // 0x28d Return
}


func_1418(var_35_string)
{
	var_36_bool = 0; var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0; var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_int = 0; var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); // 0x58a PushV
	IsExisting3DSound(var_44_bool, var_35_string); // 0x58b Func
	var_52_bool = var_44_bool == 0; // 0x58d Not
	if(var_52_bool == 0) goto Label_1443; // 0x58e JumpB
	var_45_int = 0; // 0x58f MovI
	
Label_1424:
	var_53_int = 1; // 0x590 PushI
	var_54_int = var_45_int + var_53_int; // 0x591 Add
	var_55_int = var_35_string + var_54_int; // 0x592 Add
	IsExisting3DSound(var_46_bool, var_55_int); // 0x593 Func
	var_56_bool = var_46_bool == 0; // 0x595 Not
	if(var_56_bool == 0) goto Label_1432; // 0x596 JumpB
	goto Label_1435; // 0x597 Jump
	
Label_1435:
	var_57_bool = var_45_int == 0; // 0x59b Not
	if(var_57_bool == 0) goto Label_1438; // 0x59c JumpB
	return 16; // 0x59d Return
	
Label_1438:
	irand(var_47_int, var_45_int); // 0x59e Func
	var_58_int = 1; // 0x5a0 PushI
	var_59_int = var_47_int + var_58_int; // 0x5a1 Add
	var_35_string = var_35_string + var_59_int; // 0x5a2 Add2
	
Label_1443:
	Is3DSoundLoaded(var_48_bool, var_35_string); // 0x5a3 Func
	var_60_bool = var_48_bool; // 0x5a5 Push
	if(var_60_bool == 0) goto Label_1458; // 0x5a6 JumpB
	GetEyesHeight(var_49_float); // 0x5a7 Func
	GetDirection(var_50_cvector); // 0x5a9 Func
	var_61_int = 50; // 0x5ab PushI
	var_51_cvector = var_50_cvector * var_61_int; // 0x5ac Mult2
	var_62_float = GetByIndex(var_51_cvector, 1); // 0x5ad PushE
	var_62_float = var_62_float + var_49_float; // 0x5ae Add2
	SetByIndex(var_51_cvector, 1) = var_62_float; // 0x5af PopE
	PlayGlobalSound(var_35_string, var_51_cvector); // 0x5b0 Func
	
Label_1458:
	return 16; // 0x5b2 Return
	
Label_1432:
	var_63_int = 1; // 0x598 PushI
	var_45_int = var_45_int + var_63_int; // 0x599 Add2
	goto Label_1424; // 0x59a Jump
}


func_654(var_2_int, var_5_int)
{
	var_359_float = 0; var_360_int = 0; var_361_float = 0; var_362_int = 0; // 0x28e PushV
	var_363_bool = var_2_int == 0; // 0x28f Not
	if(var_363_bool == 0) goto Label_658; // 0x290 JumpB
	return 4; // 0x291 Return
	
Label_658:
	var_364_int = var_5_int; // 0x292 PushT
	if(var_364_int == 0) goto Label_666; // 0x293 JumpB
	var_365_int = -1; // 0x294 PushI
	var_5_int = var_5_int + var_365_int; // 0x295 Add2
	var_366_int = 0; // 0x296 PushI
	var_367_bool = var_5_int > var_366_int; // 0x297 GT
	if(var_367_bool == 0) goto Label_666; // 0x298 JumpB
	return 4; // 0x299 Return
	
Label_666:
	rand(var_361_float); // 0x29a Func
	var_368_float = 0; // 0x29c PushV
	func_704(var_368_float); // 0x29d NEW_2
	var_369_bool = var_361_float < var_368_float; // 0x29f LT
	if(var_369_bool == 0) goto Label_685; // 0x2a0 JumpB
	irand(var_362_int, var_361_float); // 0x2a1 Func
	var_370_int = 1; // 0x2a3 PushI
	var_362_int = var_362_int + var_370_int; // 0x2a4 Add2
	var_371_string = "attack"; // 0x2a5 PushS
	var_372_int = var_371_string + var_362_int; // 0x2a6 Add
	Speak(var_372_int); // 0x2a7 Func
	var_373_int = 0; // 0x2a9 PushV
	func_702(var_373_int); // 0x2aa NEW_2
	var_5_int = var_373_int; // 0x2ab TMov
	
Label_685:
	return 4; // 0x2ad Return
}


func_273(var_1_int, var_2_int, var_4_float)
{
	var_44_bool = 0; var_45_bool = 0; var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_cvector = CVector(0,0,0); // 0x111 PushV
	var_1_int = 0; // 0x112 TMovI
	
Label_275:
	var_50_string = "all"; // 0x113 PushS
	var_51_string = "attack_begin"; // 0x114 PushS
	var_52_int = 1; // 0x115 PushI
	var_53_int = var_1_int + var_52_int; // 0x116 Add
	var_54_int = var_51_string + var_53_int; // 0x117 Add
	HasAnimation(var_47_bool, var_50_string, var_54_int); // 0x118 Func
	var_55_bool = var_47_bool == 0; // 0x11a Not
	if(var_55_bool == 0) goto Label_285; // 0x11b JumpB
	goto Label_288; // 0x11c Jump
	
Label_288:
	var_2_int = 0; // 0x120 TMovI
	
Label_289:
	var_56_string = "attack"; // 0x121 PushS
	var_57_int = 1; // 0x122 PushI
	var_58_int = var_2_int + var_57_int; // 0x123 Add
	var_59_int = var_56_string + var_58_int; // 0x124 Add
	IsExisting3DSound(var_48_bool, var_59_int); // 0x125 Func
	var_60_bool = var_48_bool == 0; // 0x127 Not
	if(var_60_bool == 0) goto Label_298; // 0x128 JumpB
	goto Label_301; // 0x129 Jump
	
Label_301:
	var_61_string = "all"; // 0x12d PushS
	var_62_string = "bjump"; // 0x12e PushS
	GetAnimationOffset(var_49_cvector, var_61_string, var_62_string); // 0x12f Func
	var_63_float = GetByIndex(var_49_cvector, 2); // 0x131 PushE
	var_4_float = -var_63_float; // 0x132 Neg2
	return 6; // 0x133 Return
	
Label_298:
	var_64_int = 1; // 0x12a PushI
	var_2_int = var_2_int + var_64_int; // 0x12b Add2
	goto Label_289; // 0x12c Jump
	
Label_285:
	var_65_int = 1; // 0x11d PushI
	var_1_int = var_1_int + var_65_int; // 0x11e Add2
	goto Label_275; // 0x11f Jump
}


func_913(var_0_object, var_1_int, var_17_int)
{
	var_18_int = 0; // 0x392 PushI
	var_19_bool = var_17_int != var_18_int; // 0x393 Neq
	if(var_19_bool == 0) goto Label_918; // 0x394 JumpB
	return 0; // 0x395 Return
	
Label_918:
	var_20_bool = 0; var_21_object = Obj(); // 0x396 PushV
	var_21_object = var_1_int; // 0x397 MovT
	func_951(var_20_bool, var_21_object); // 0x398 NEW_2
	var_56_bool = var_20_bool == 0; // 0x39a Not
	if(var_56_bool == 0) goto Label_925; // 0x39b JumpB
	var_0_object = 1; // 0x39c TMovB
	
Label_925:
	var_57_int = 0; // 0x39d PushI
	KillTimer(var_57_int); // 0x39e Func
	Stop(); // 0x3a0 Func
	return 0; // 0x3a2 Return
}


func_19()
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x13 PushV
	var_17_string = "player"; // 0x14 PushS
	FindActor(var_16_object, var_17_string); // 0x15 Func
	var_18_bool = var_16_object == 0; // 0x17 Not
	if(var_18_bool == 0) goto Label_26; // 0x18 JumpB
	return 2; // 0x19 Return
	
Label_26:
	var_19_object = Obj(); var_20_bool = 0; var_21_float = 0; // 0x1a PushV
	var_19_object = var_16_object; // 0x1b Mov
	var_20_bool = 1; // 0x1c MovB
	var_21_float = 180.0; // 0x1d MovF
	func_44(var_12_bool, var_13_float, var_14_int, var_15_object, var_16_object, var_19_object, var_20_bool, var_21_float); // 0x1e NEW_2
	var_510_int = 1; // 0x20 PushI
	Sleep(var_510_int); // 0x21 Func
	goto Label_26; // 0x23 Jump
}


func_1314(var_13_object, var_14_int, var_15_float)
{
	var_16_cvector = CVector(0,0,0); var_17_object = Obj(); var_18_int = 0; var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_int = 0; var_23_int = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_object = Obj(); var_27_int = 0; var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_int = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0); // 0x522 PushV
	var_34_bool = 0; // 0x523 PushV
	var_34_bool = 0; // 0x524 MovB
	var_35_bool = 0; // 0x525 PushV
	var_35_bool = 0; // 0x526 MovB
	var_36_object = var_13_object; // 0x527 Push
	if(var_36_object == 0) goto Label_1325; // 0x528 JumpB
	var_37_int = 4; // 0x529 PushI
	var_38_bool = var_14_int != var_37_int; // 0x52a Neq
	if(var_38_bool == 0) goto Label_1325; // 0x52b JumpB
	var_35_bool = 1; // 0x52c MovB
	
Label_1325:
	if(var_35_bool == 0) goto Label_1330; // 0x52d JumpB
	var_39_int = 5; // 0x52e PushI
	var_40_bool = var_14_int != var_39_int; // 0x52f Neq
	if(var_40_bool == 0) goto Label_1330; // 0x530 JumpB
	var_34_bool = 1; // 0x531 MovB
	
Label_1330:
	if(var_34_bool == 0) goto Label_1377; // 0x532 JumpB
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); // 0x533 PushV
	var_43_cvector = CVector(0,0,0); var_44_object = Obj(); // 0x534 PushV
	var_44_object = var_13_object; // 0x535 Mov
	func_1108(var_44_object); // 0x536 NEW_2
	var_42_cvector = var_43_cvector; // 0x537 Mov
	func_1465(var_41_cvector, var_42_cvector); // 0x539 NEW_2
	var_25_cvector = var_41_cvector; // 0x53a Mov
	CreateVectorVector(var_26_object); // 0x53c Func
	var_27_int = 1; // 0x53e MovI
	
Label_1343:
	var_54_string = "hit"; // 0x53f PushS
	var_55_int = var_54_string + var_27_int; // 0x540 Add
	GetGeometryLocator(var_55_int, var_28_bool, var_29_cvector, var_30_cvector); // 0x541 Func
	var_56_bool = var_28_bool == 0; // 0x543 Not
	if(var_56_bool == 0) goto Label_1350; // 0x544 JumpB
	goto Label_1359; // 0x545 Jump
	
Label_1359:
	size(var_31_int); // 0x54f ObjFunc
	var_57_int = var_31_int; // 0x551 Push
	if(var_57_int == 0) goto Label_1376; // 0x552 JumpB
	irand(var_32_int, var_31_int); // 0x553 Func
	get(var_33_cvector, var_32_int); // 0x555 ObjFunc
	var_58_object = Obj(); var_59_int = 0; var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); // 0x557 PushV
	var_58_object = var_13_object; // 0x558 Mov
	var_59_int = var_14_int; // 0x559 Mov
	var_60_float = var_15_float; // 0x55a Mov
	var_61_cvector = var_33_cvector; // 0x55b Mov
	var_62_cvector = -var_25_cvector; // 0x55c Neg2
	func_1382(var_60_float, var_61_cvector, var_62_cvector); // 0x55d NEW_2
	return 18; // 0x55f Return
	
Label_1376:
	var_26_object = 0; // 0x560 SetNull
	
Label_1377:
	var_103_object = Obj(); // 0x561 PushV
	var_103_object = var_13_object; // 0x562 Mov
	func_1270(var_103_object); // 0x563 NEW_2
	return 18; // 0x565 Return
	
Label_1350:
	var_104_int = var_30_cvector | var_25_cvector; // 0x546 Or
	var_105_float = 0.70711; // 0x547 PushF
	var_106_bool = var_104_int >= var_105_float; // 0x548 GE
	if(var_106_bool == 0) goto Label_1356; // 0x549 JumpB
	add(var_29_cvector); // 0x54a ObjFunc
	
Label_1356:
	var_107_int = 1; // 0x54c PushI
	var_27_int = var_27_int + var_107_int; // 0x54d Add2
	goto Label_1343; // 0x54e Jump
}


func_38(var_388_float)
{
	var_388_float = 0.02; // 0x27 MovF
	return 0; // 0x28 Return
}


func_935(var_0_object)
{
	var_0_object = 1; // 0x3a7 TMovB
	var_13_int = 0; // 0x3a8 PushI
	KillTimer(var_13_int); // 0x3a9 Func
	Stop(); // 0x3ab Func
	return 0; // 0x3ad Return
}


func_1062(var_34_string)
{
	RemoveRTEnvelope(); // 0x427 Func
	SetDeathState(); // 0x429 Func
	Stop(); // 0x42b Func
	StopAsync(); // 0x42d Func
	StopSecondaryAnimation(); // 0x42f Func
	var_35_string = ""; // 0x431 PushV
	var_35_string = var_34_string; // 0x432 Mov
	func_1418(var_35_string); // 0x433 NEW_2
	var_64_string = "all"; // 0x435 PushS
	PlayAnimation(var_64_string, var_34_string); // 0x436 Func
	WaitForAnimEnd(); // 0x438 Func
	var_65_string = "all"; // 0x43a PushS
	LockAnimationEnd(var_65_string, var_34_string); // 0x43b Func
	RemoveEnvelope(); // 0x43d Func
	return 0; // 0x43f Return
}


func_41(var_395_int)
{
	var_395_int = 0; // 0x2a MovI
	return 0; // 0x2b Return
}


func_554(var_0_object, var_294_bool)
{
	var_295_cvector = CVector(0,0,0); var_296_cvector = CVector(0,0,0); var_297_cvector = CVector(0,0,0); var_298_float = 0; var_299_float = 0; var_300_cvector = CVector(0,0,0); var_301_cvector = CVector(0,0,0); var_302_cvector = CVector(0,0,0); var_303_float = 0; var_304_float = 0; // 0x22a PushV
	var_305_bool = 0; var_306_object = Obj(); // 0x22b PushV
	var_306_object = var_0_object; // 0x22c MovT
	func_1246(var_305_bool, var_306_object); // 0x22d NEW_2
	var_307_bool = var_305_bool == 0; // 0x22f Not
	if(var_307_bool == 0) goto Label_563; // 0x230 JumpB
	var_294_bool = 0; // 0x231 MovB
	return 10; // 0x232 Return
	
Label_563:
	var_308_bool = 0; // 0x233 PushV
	func_643(var_304_float, var_308_bool); // 0x234 NEW_2
	if(var_308_bool == 0) goto Label_580; // 0x236 JumpB
	GetPFPosition(var_300_cvector); // 0x237 TObjFunc
	GetPFPosition(var_301_cvector); // 0x239 Func
	var_302_cvector = var_300_cvector - var_301_cvector; // 0x23b Sub2
	var_303_float = var_302_cvector | var_302_cvector; // 0x23c Or2
	GetAttackDistance(var_304_float); // 0x23d TObjFunc
	var_309_int = 50; // 0x23f PushI
	var_304_float = var_304_float + var_309_int; // 0x240 Add2
	var_310_float = var_304_float * var_304_float; // 0x241 Mult
	var_294_bool = var_303_float <= var_310_float; // 0x242 LE2
	return 10; // 0x243 Return
	
Label_580:
	var_294_bool = 0; // 0x244 MovB
	return 10; // 0x245 Return
}


func_811(var_0_object, var_1_int, var_151_bool, var_152_object, var_153_float, var_154_float, var_155_bool, var_156_bool)
{
	var_157_bool = 0; var_158_bool = 0; var_159_object = Obj(); var_160_cvector = CVector(0,0,0); var_161_cvector = CVector(0,0,0); var_162_cvector = CVector(0,0,0); var_163_float = 0; var_164_object = Obj(); var_165_bool = 0; var_166_bool = 0; var_167_object = Obj(); var_168_cvector = CVector(0,0,0); var_169_cvector = CVector(0,0,0); var_170_cvector = CVector(0,0,0); var_171_float = 0; var_172_object = Obj(); // 0x32b PushV
	var_0_object = 0; // 0x32c TMovB
	var_1_int = var_152_object; // 0x32d TMov
	var_166_bool = var_156_bool; // 0x32e Mov
	
Label_815:
	var_173_bool = 0; var_174_object = Obj(); // 0x32f PushV
	var_174_object = var_152_object; // 0x330 Mov
	func_951(var_173_bool, var_174_object); // 0x331 NEW_2
	var_177_bool = var_173_bool == 0; // 0x333 Not
	if(var_177_bool == 0) goto Label_823; // 0x334 JumpB
	var_151_bool = 0; // 0x335 MovB
	return 16; // 0x336 Return
	
Label_823:
	GetPosition(var_168_cvector); // 0x337 ObjFunc
	GetPosition(var_169_cvector); // 0x339 Func
	var_170_cvector = var_168_cvector - var_169_cvector; // 0x33b Sub2
	var_171_float = var_170_cvector | var_170_cvector; // 0x33c Or2
	var_178_bool = 0; // 0x33d PushV
	var_178_bool = 0; // 0x33e MovB
	var_179_int = 0; // 0x33f PushI
	var_180_bool = var_154_float > var_179_int; // 0x340 GT
	if(var_180_bool == 0) goto Label_838; // 0x341 JumpB
	var_181_float = var_154_float * var_154_float; // 0x342 Mult
	var_182_bool = var_171_float > var_181_float; // 0x343 GT
	if(var_182_bool == 0) goto Label_838; // 0x344 JumpB
	var_178_bool = 1; // 0x345 MovB
	
Label_838:
	if(var_178_bool == 0) goto Label_843; // 0x346 JumpB
	Stop(); // 0x347 Func
	var_151_bool = 0; // 0x349 MovB
	return 16; // 0x34a Return
	
Label_843:
	var_183_float = var_153_float * var_153_float; // 0x34b Mult
	var_184_bool = var_171_float > var_183_float; // 0x34c GT
	if(var_184_bool == 0) goto Label_905; // 0x34d JumpB
	GetPFPosition(var_168_cvector); // 0x34e ObjFunc
	FindPathTo(var_172_object, var_168_cvector); // 0x350 Func
	var_185_bool = var_172_object != 0; // 0x352 NullNeq
	if(var_185_bool == 0) goto Label_854; // 0x353 JumpB
	var_167_object = var_172_object; // 0x354 Mov
	var_172_object = 0; // 0x355 SetNull
	
Label_854:
	var_186_bool = var_167_object != 0; // 0x356 NullNeq
	if(var_186_bool == 0) goto Label_887; // 0x357 JumpB
	var_187_bool = var_166_bool; // 0x358 Push
	if(var_187_bool == 0) goto Label_864; // 0x359 JumpB
	var_166_bool = 0; // 0x35a MovB
	RotatePath(var_167_object, var_165_bool); // 0x35b Func
	var_188_bool = var_165_bool == 0; // 0x35d Not
	if(var_188_bool == 0) goto Label_864; // 0x35e JumpB
	goto Label_911; // 0x35f Jump
	
Label_911:
	var_151_bool = !var_0_object; // 0x38f Not2
	return 16; // 0x390 Return
	
Label_864:
	var_189_int = 0; // 0x360 PushI
	var_190_float = 0.3; // 0x361 PushF
	SetTimer(var_189_int, var_190_float); // 0x362 Func
	var_191_string = ""; // 0x364 PushV
	func_958(var_191_string); // 0x365 NEW_2
	var_192_string = ""; // 0x367 PushV
	func_960(var_192_string); // 0x368 NEW_2
	FollowPath(var_167_object, var_155_bool, var_165_bool, var_191_string, var_192_string); // 0x36a Func
	var_193_bool = var_165_bool == 0; // 0x36c Not
	if(var_193_bool == 0) goto Label_885; // 0x36d JumpB
	var_194_object = var_0_object; // 0x36e PushT
	if(var_194_object == 0) goto Label_883; // 0x36f JumpB
	var_167_object = 0; // 0x370 SetNull
	goto Label_911; // 0x371 Jump
	
Label_883:
	goto Label_910; // 0x373 Jump
	
Label_910:
	goto Label_815; // 0x38e Jump
	
Label_885:
	var_167_object = 0; // 0x375 SetNull
	goto Label_903; // 0x376 Jump
	
Label_903:
	var_172_object = 0; // 0x387 SetNull
	goto Label_909; // 0x388 Jump
	
Label_909:
	var_167_object = 0; // 0x38d SetNull
	
Label_887:
	var_195_int = 0; // 0x377 PushI
	KillTimer(var_195_int); // 0x378 Func
	var_196_float = 0.5; // 0x37a PushF
	Sleep(var_196_float, var_165_bool); // 0x37b Func
	var_197_bool = var_165_bool == 0; // 0x37d Not
	if(var_197_bool == 0) goto Label_899; // 0x37e JumpB
	var_198_object = var_0_object; // 0x37f PushT
	if(var_198_object == 0) goto Label_899; // 0x380 JumpB
	var_167_object = 0; // 0x381 SetNull
	goto Label_911; // 0x382 Jump
	
Label_899:
	var_199_int = 0; // 0x383 PushI
	var_200_float = 0.3; // 0x384 PushF
	SetTimer(var_199_int, var_200_float); // 0x385 Func
	
Label_905:
	var_201_int = 0; // 0x389 PushI
	KillTimer(var_201_int); // 0x38a Func
	goto Label_911; // 0x38c Jump
}


func_44(var_0_object, var_3_bool, var_5_int, var_19_object, var_20_bool, var_21_float, var_128_bool, var_220_bool)
{
	var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_bool = 0; var_26_bool = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_bool = 0; var_32_float = 0; var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; var_37_bool = 0; var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_bool = 0; var_43_float = 0; // 0x2c PushV
	func_273(var_41_cvector, var_42_bool, var_43_float); // 0x2e NEW_2
	var_5_int = 0; // 0x30 TMovI
	var_66_string = "@GetAttackDistance"; // 0x31 PushS
	var_67_int = 1; // 0x32 PushI
	var_68_bool = IsFuncExist(var_19_object, var_66_string, var_67_int); // 0x33 FuncExist
	if(var_68_bool == 0) goto Label_58; // 0x34 JumpB
	GetAttackDistance(var_33_float); // 0x35 ObjFunc
	var_69_int = 50; // 0x37 PushI
	var_33_float = var_33_float + var_69_int; // 0x38 Add2
	goto Label_59; // 0x39 Jump
	
Label_59:
	var_70_int = 150; // 0x3b PushI
	var_71_bool = var_33_float >= var_70_int; // 0x3c GE
	if(var_71_bool == 0) goto Label_63; // 0x3d JumpB
	var_33_float = 150; // 0x3e MovI
	
Label_63:
	var_3_bool = 0; // 0x3f TMovB
	var_0_object = var_19_object; // 0x40 TMov
	IsPlayerActor(var_0_object, var_36_bool); // 0x41 Func
	var_72_bool = var_36_bool; // 0x43 Push
	if(var_72_bool == 0) goto Label_77; // 0x44 JumpB
	var_73_string = "attack"; // 0x45 PushS
	PlayGlobalMusic(var_73_string); // 0x46 Func
	var_74_object = Obj(); // 0x48 PushV
	func_1459(var_74_object); // 0x49 NEW_2
	SendPlayerEnemy(var_19_object, var_74_object); // 0x4b Func
	
Label_77:
	var_77_bool = var_20_bool; // 0x4d Push
	if(var_77_bool == 0) goto Label_81; // 0x4e JumpB
	var_37_bool = 0; // 0x4f MovB
	goto Label_82; // 0x50 Jump
	
Label_82:
	var_78_float = 400.0; // 0x52 PushF
	var_38_float = var_78_float + var_33_float; // 0x53 Add2
	
Label_84:
	var_79_bool = 0; // 0x54 PushV
	var_79_bool = 0; // 0x55 MovB
	var_80_bool = 0; var_81_object = Obj(); // 0x56 PushV
	var_81_object = var_0_object; // 0x57 MovT
	func_1246(var_80_bool, var_81_object); // 0x58 NEW_2
	if(var_80_bool == 0) goto Label_94; // 0x5a JumpB
	var_114_bool = var_3_bool == 0; // 0x5b Not
	if(var_114_bool == 0) goto Label_94; // 0x5c JumpB
	var_79_bool = 1; // 0x5d MovB
	
Label_94:
	if(var_79_bool == 0) goto Label_256; // 0x5e JumpB
	func_686(var_43_float); // 0x60 NEW_2
	GetPFPosition(var_34_cvector); // 0x62 TObjFunc
	GetPFPosition(var_35_cvector); // 0x64 Func
	var_39_cvector = var_34_cvector - var_35_cvector; // 0x66 Sub2
	var_40_float = var_39_cvector | var_39_cvector; // 0x67 Or2
	var_120_float = var_38_float * var_38_float; // 0x68 Mult
	var_121_bool = var_40_float >= var_120_float; // 0x69 GE
	if(var_121_bool == 0) goto Label_122; // 0x6a JumpB
	var_122_bool = 0; var_123_object = Obj(); var_124_float = 0; var_125_float = 0; var_126_bool = 0; var_127_bool = 0; // 0x6b PushV
	var_123_object = var_0_object; // 0x6c MovT
	var_124_float = var_33_float; // 0x6d Mov
	var_125_float = 10000.0; // 0x6e MovF
	var_126_bool = 1; // 0x6f MovB
	var_127_bool = 0; // 0x70 MovB
	TaskCall(2); // 0x71 TaskCall
	func_706(var_130_bool, var_122_bool, var_123_object, var_124_float, var_125_float, var_126_bool, var_127_bool); // 0x72 NEW_2
	TaskReturn(); // 0x73 TaskReturn
	var_205_bool = var_128_bool == 0; // 0x75 Not
	if(var_205_bool == 0) goto Label_120; // 0x76 JumpB
	goto Label_256; // 0x77 Jump
	
Label_256:
	WaitForAnimEnd(); // 0x100 Func
	var_206_bool = var_3_bool; // 0x102 PushT
	if(var_206_bool == 0) goto Label_261; // 0x103 JumpB
	return 22; // 0x104 Return
	
Label_261:
	var_207_string = "all"; // 0x105 PushS
	var_208_string = "attack_off"; // 0x106 PushS
	PlayAnimation(var_207_string, var_208_string); // 0x107 Func
	WaitForAnimEnd(); // 0x109 Func
	var_209_bool = var_36_bool; // 0x10b Push
	if(var_209_bool == 0) goto Label_272; // 0x10c JumpB
	var_210_float = 2.0; // 0x10d PushF
	Sleep(var_210_float); // 0x10e Func
	
Label_272:
	return 22; // 0x110 Return
	
Label_120:
	var_37_bool = 0; // 0x78 MovB
	goto Label_255; // 0x79 Jump
	
Label_255:
	goto Label_84; // 0xff Jump
	
Label_122:
	var_211_float = var_21_float * var_21_float; // 0x7a Mult
	var_212_bool = var_40_float >= var_211_float; // 0x7b GE
	if(var_212_bool == 0) goto Label_247; // 0x7c JumpB
	GetPFPosition(var_41_cvector); // 0x7d TObjFunc
	CanReachByPF(var_42_bool, var_41_cvector); // 0x7f Func
	var_213_bool = var_42_bool == 0; // 0x81 Not
	if(var_213_bool == 0) goto Label_146; // 0x82 JumpB
	var_214_bool = 0; var_215_object = Obj(); var_216_float = 0; var_217_float = 0; var_218_bool = 0; var_219_bool = 0; // 0x83 PushV
	var_215_object = var_0_object; // 0x84 MovT
	var_216_float = var_33_float; // 0x85 Mov
	var_217_float = 10000.0; // 0x86 MovF
	var_218_bool = 1; // 0x87 MovB
	var_219_bool = 0; // 0x88 MovB
	TaskCall(2); // 0x89 TaskCall
	func_706(var_222_bool, var_214_bool, var_215_object, var_216_float, var_217_float, var_218_bool, var_219_bool); // 0x8a NEW_2
	TaskReturn(); // 0x8b TaskReturn
	var_223_bool = var_220_bool == 0; // 0x8d Not
	if(var_223_bool == 0) goto Label_144; // 0x8e JumpB
	goto Label_256; // 0x8f Jump
	
Label_144:
	var_37_bool = 0; // 0x90 MovB
	goto Label_84; // 0x91 Jump
	
Label_146:
	var_224_bool = var_37_bool == 0; // 0x92 Not
	if(var_224_bool == 0) goto Label_171; // 0x93 JumpB
	var_225_object = Obj(); // 0x94 PushV
	var_225_object = var_0_object; // 0x95 MovT
	func_1396(); // 0x96 NEW_2
	var_234_string = "all"; // 0x98 PushS
	var_235_string = "attack_on"; // 0x99 PushS
	PlayAnimation(var_234_string, var_235_string); // 0x9a Func
	WaitForAnimEnd(); // 0x9c Func
	func_686(var_43_float); // 0x9f NEW_2
	StopAsync(); // 0xa1 Func
	var_37_bool = 1; // 0xa3 MovB
	var_236_bool = 0; var_237_object = Obj(); // 0xa4 PushV
	var_237_object = var_0_object; // 0xa5 MovT
	func_1246(var_236_bool, var_237_object); // 0xa6 NEW_2
	var_238_bool = var_236_bool == 0; // 0xa8 Not
	if(var_238_bool == 0) goto Label_171; // 0xa9 JumpB
	goto Label_256; // 0xaa Jump
	
Label_171:
	rand(var_43_float); // 0xab Func
	var_239_bool = 0; // 0xad PushV
	var_239_bool = 1; // 0xae MovB
	var_240_float = 0.25; // 0xaf PushF
	var_241_bool = var_43_float < var_240_float; // 0xb0 LT
	if(var_241_bool == 0) goto Label_183; // 0xb1 JumpB
	var_242_bool = 0; // 0xb2 PushV
	func_643(var_239_bool, var_242_bool); // 0xb3 NEW_2
	if(var_242_bool == 0) goto Label_183; // 0xb5 JumpB
	var_239_bool = 0; // 0xb6 MovB
	
Label_183:
	if(var_239_bool == 0) goto Label_200; // 0xb7 JumpB
	Face(var_0_object); // 0xb8 Func
	func_693(); // 0xbb NEW_2
	var_277_string = "all"; // 0xbd PushS
	var_278_string = "attack_stay"; // 0xbe PushS
	PlayAnimation(var_277_string, var_278_string); // 0xbf Func
	var_279_bool = 0; var_280_float = 0; // 0xc1 PushV
	var_280_float = var_21_float; // 0xc2 Mov
	func_511(var_43_float, var_279_bool, var_280_float); // 0xc3 NEW_2
	StopAsync(); // 0xc5 Func
	goto Label_246; // 0xc7 Jump
	
Label_246:
	goto Label_255; // 0xf6 Jump
	
Label_200:
	Face(var_0_object); // 0xc8 Func
	var_494_string = "all"; // 0xca PushS
	var_495_string = "fjump"; // 0xcb PushS
	PlayAnimation(var_494_string, var_495_string); // 0xcc Func
	WaitForAnimEnd(); // 0xce Func
	func_686(var_43_float); // 0xd1 NEW_2
	var_496_cvector = CVector(0.0, 0.0, 0.0); // 0xd3 PushVec
	SetSpeed(var_496_cvector); // 0xd4 Func
	Stop(); // 0xd6 Func
	StopAsync(); // 0xd8 Func
	var_497_bool = 0; // 0xda PushV
	func_643(var_43_float, var_497_bool); // 0xdb NEW_2
	var_498_bool = var_497_bool == 0; // 0xdd Not
	if(var_498_bool == 0) goto Label_246; // 0xde JumpB
	var_499_bool = 0; var_500_object = Obj(); // 0xdf PushV
	var_500_object = var_0_object; // 0xe0 MovT
	func_1246(var_499_bool, var_500_object); // 0xe1 NEW_2
	var_501_bool = var_499_bool == 0; // 0xe3 Not
	if(var_501_bool == 0) goto Label_230; // 0xe4 JumpB
	goto Label_256; // 0xe5 Jump
	
Label_230:
	GetPFPosition(var_34_cvector); // 0xe6 TObjFunc
	GetPFPosition(var_35_cvector); // 0xe8 Func
	var_39_cvector = var_34_cvector - var_35_cvector; // 0xea Sub2
	var_40_float = var_39_cvector | var_39_cvector; // 0xeb Or2
	var_502_float = var_21_float * var_21_float; // 0xec Mult
	var_503_bool = var_40_float < var_502_float; // 0xed LT
	if(var_503_bool == 0) goto Label_246; // 0xee JumpB
	var_504_bool = 0; var_505_float = 0; // 0xef PushV
	var_505_float = var_21_float; // 0xf0 Mov
	func_347(var_43_float, var_504_bool, var_505_float); // 0xf1 NEW_2
	var_506_bool = var_504_bool == 0; // 0xf3 Not
	if(var_506_bool == 0) goto Label_246; // 0xf4 JumpB
	goto Label_256; // 0xf5 Jump
	
Label_247:
	var_507_bool = 0; var_508_float = 0; // 0xf7 PushV
	var_508_float = var_21_float; // 0xf8 Mov
	func_347(var_43_float, var_507_bool, var_508_float); // 0xf9 NEW_2
	var_509_bool = var_507_bool == 0; // 0xfb Not
	if(var_509_bool == 0) goto Label_254; // 0xfc JumpB
	goto Label_256; // 0xfd Jump
	
Label_254:
	var_37_bool = 1; // 0xfe MovB
	
Label_81:
	var_37_bool = 1; // 0x51 MovB
	
Label_58:
	var_33_float = var_21_float; // 0x3a Mov
}


func_1407(var_13_object)
{
	var_14_float = 0; var_15_cvector = CVector(0,0,0); var_16_float = 0; var_17_cvector = CVector(0,0,0); // 0x57f PushV
	GetEyesHeight(var_16_float); // 0x580 ObjFunc
	var_17_cvector = CVector(0.0, 0.0, 0.0); // 0x582 MovV
	var_18_float = GetByIndex(var_17_cvector, 1); // 0x583 PushE
	var_18_float = var_16_float; // 0x584 Mov
	SetByIndex(var_17_cvector, 1) = var_18_float; // 0x585 PopE
	var_19_string = "head"; // 0x586 PushS
	LookAsync(var_13_object, var_19_string, var_17_cvector); // 0x587 Func
	return 4; // 0x589 Return
}


func_686(var_0_object)
{
	var_115_object = Obj(); // 0x2ae PushV
	var_115_object = var_0_object; // 0x2af MovT
	func_1503(var_115_object); // 0x2b0 NEW_2
	return 0; // 0x2b2 Return
}


func_1459(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x5b3 PushV
	self(var_11_object); // 0x5b4 Func
	var_9_object = var_11_object; // 0x5b6 Mov
	return 2; // 0x5b7 Return
}


func_691(var_452_int)
{
	var_452_int = 0; // 0x2b3 MovI
	return 0; // 0x2b4 Return
}


func_693()
{
	var_248_string = ""; // 0x2b5 PushV
	var_248_string = "attack_stay"; // 0x2b6 MovS
	func_1418(var_248_string); // 0x2b7 NEW_2
	return 0; // 0x2b9 Return
}


func_308(var_0_object, var_377_float, var_378_int)
{
	var_379_object = Obj(); var_380_float = 0; var_381_float = 0; var_382_object = Obj(); var_383_float = 0; var_384_float = 0; // 0x134 PushV
	var_385_float = 0.9; // 0x135 PushF
	var_386_float = var_377_float * var_385_float; // 0x136 Mult
	GetVictim(var_386_float, var_382_object); // 0x137 Func
	ReportAttack(var_0_object); // 0x139 Func
	var_387_bool = var_382_object == var_0_object; // 0x13b Eq
	if(var_387_bool == 0) goto Label_345; // 0x13c JumpB
	var_388_float = 0; var_389_object = Obj(); var_390_int = 0; // 0x13d PushV
	var_389_object = var_382_object; // 0x13e Mov
	var_390_int = var_378_int; // 0x13f Mov
	func_38(var_390_int); // 0x140 NEW_2
	var_383_float = var_388_float; // 0x141 Mov
	var_391_float = 0; var_392_object = Obj(); var_393_float = 0; var_394_int = 0; // 0x143 PushV
	var_392_object = var_382_object; // 0x144 Mov
	var_393_float = var_383_float; // 0x145 Mov
	var_395_int = 0; var_396_object = Obj(); var_397_int = 0; // 0x146 PushV
	var_396_object = var_382_object; // 0x147 Mov
	var_397_int = var_378_int; // 0x148 Mov
	func_41(var_397_int); // 0x149 NEW_2
	var_394_int = var_395_int; // 0x14a Mov
	func_1132(var_391_float, var_392_object, var_393_float, var_394_int); // 0x14c NEW_2
	var_384_float = var_391_float; // 0x14d Mov
	var_452_int = 0; // 0x14f PushV
	func_691(var_452_int); // 0x150 NEW_2
	ReportHit(var_0_object, var_452_int, var_384_float, var_383_float); // 0x152 Func
	var_453_object = Obj(); var_454_float = 0; // 0x154 PushV
	var_453_object = var_382_object; // 0x155 Mov
	var_454_float = var_384_float; // 0x156 Mov
	func_698(); // 0x157 NEW_2
	
Label_345:
	return 6; // 0x159 Return
}


func_951(var_20_bool, var_21_object)
{
	var_22_bool = 0; var_23_object = Obj(); // 0x3b8 PushV
	var_23_object = var_21_object; // 0x3b9 Mov
	func_1246(var_22_bool, var_23_object); // 0x3ba NEW_2
	var_20_bool = var_22_bool; // 0x3bb Mov
	return 0; // 0x3bd Return
}


func_1205(var_37_bool)
{
	var_39_bool = 0; var_40_bool = 0; // 0x4b5 PushV
	IsDead(var_40_bool); // 0x4b6 ObjFunc
	var_37_bool = var_40_bool; // 0x4b8 Mov
	return 2; // 0x4b9 Return
}


func_1465(var_41_cvector, var_42_cvector)
{
	var_49_float = 0; var_50_float = 0; // 0x5b9 PushV
	var_51_int = var_42_cvector | var_42_cvector; // 0x5ba Or
	var_50_float = sqrt(var_51_int); // 0x5bb Sqrt2
	var_52_float = 0.0; // 0x5bc PushF
	var_53_bool = var_50_float < var_52_float; // 0x5bd LT
	if(var_53_bool == 0) goto Label_1473; // 0x5be JumpB
	var_41_cvector = CVector(0.0, 0.0, 0.0); // 0x5bf MovV
	return 2; // 0x5c0 Return
	
Label_1473:
	var_41_cvector = var_42_cvector / var_42_cvector; // 0x5c1 Div2
	return 2; // 0x5c2 Return
}


func_698()
{
	return 0; // 0x2bb Return
}


func_1210(var_26_bool, var_27_object)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); // 0x4ba PushV
	var_32_bool = var_27_object == 0; // 0x4bb NullEq
	if(var_32_bool == 0) goto Label_1215; // 0x4bc JumpB
	var_26_bool = 0; // 0x4bd MovB
	return 4; // 0x4be Return
	
Label_1215:
	var_33_bool = 0; // 0x4bf PushV
	var_33_bool = 0; // 0x4c0 MovB
	var_34_string = "IsDead"; // 0x4c1 PushS
	var_35_int = 1; // 0x4c2 PushI
	var_36_bool = IsFuncExist(var_27_object, var_34_string, var_35_int); // 0x4c3 FuncExist
	if(var_36_bool == 0) goto Label_1227; // 0x4c4 JumpB
	var_37_bool = 0; var_38_object = Obj(); // 0x4c5 PushV
	var_38_object = var_27_object; // 0x4c6 Mov
	func_1205(var_38_object); // 0x4c7 NEW_2
	if(var_37_bool == 0) goto Label_1227; // 0x4c9 JumpB
	var_33_bool = 1; // 0x4ca MovB
	
Label_1227:
	if(var_33_bool == 0) goto Label_1230; // 0x4cb JumpB
	var_26_bool = 0; // 0x4cc MovB
	return 4; // 0x4cd Return
	
Label_1230:
	GetScene(var_30_object); // 0x4ce Func
	var_41_bool = var_30_object == 0; // 0x4d0 NullEq
	if(var_41_bool == 0) goto Label_1236; // 0x4d1 JumpB
	var_26_bool = 0; // 0x4d2 MovB
	return 4; // 0x4d3 Return
	
Label_1236:
	GetScene(var_31_object); // 0x4d4 ObjFunc
	var_42_bool = var_30_object != var_31_object; // 0x4d6 Neq
	if(var_42_bool == 0) goto Label_1242; // 0x4d7 JumpB
	var_26_bool = 0; // 0x4d8 MovB
	return 4; // 0x4d9 Return
	
Label_1242:
	var_26_bool = 1; // 0x4da MovB
	return 4; // 0x4db Return
}


func_700(var_477_bool)
{
	var_477_bool = 1; // 0x2bc MovB
	return 0; // 0x2bd Return
}


func_702(var_373_int)
{
	var_373_int = 1; // 0x2be MovI
	return 0; // 0x2bf Return
}


func_958(var_191_string)
{
	var_191_string = "walk"; // 0x3be MovS
	return 0; // 0x3bf Return
}


func_704(var_368_float)
{
	var_368_float = 0.5; // 0x2c0 MovF
	return 0; // 0x2c1 Return
}


func_960(var_192_string)
{
	var_192_string = "run"; // 0x3c0 MovS
	return 0; // 0x3c1 Return
}


func_706(var_2_int, var_122_bool, var_123_object, var_124_float, var_125_float, var_126_bool, var_127_bool)
{
	var_131_bool = 0; var_132_bool = 0; var_133_bool = 0; var_134_bool = 0; // 0x2c2 PushV
	var_135_object = Obj(); // 0x2c3 PushV
	var_135_object = var_123_object; // 0x2c4 Mov
	func_1503(var_135_object); // 0x2c5 NEW_2
	var_136_int = 1; // 0x2c7 PushI
	var_137_int = 5; // 0x2c8 PushI
	SetTimer(var_136_int, var_137_int); // 0x2c9 Func
	CanSee(var_133_bool, var_123_object); // 0x2cb Func
	var_138_bool = var_133_bool; // 0x2cd Push
	if(var_138_bool == 0) goto Label_725; // 0x2ce JumpB
	var_2_int = 1; // 0x2cf TMovB
	var_139_object = Obj(); // 0x2d0 PushV
	var_139_object = var_123_object; // 0x2d1 Mov
	func_1407(var_139_object); // 0x2d2 NEW_2
	goto Label_726; // 0x2d4 Jump
	
Label_726:
	var_146_bool = 0; var_147_object = Obj(); // 0x2d6 PushV
	var_147_object = var_123_object; // 0x2d7 Mov
	func_1115(var_146_bool, var_147_object); // 0x2d8 NEW_2
	if(var_146_bool == 0) goto Label_736; // 0x2da JumpB
	var_150_object = Obj(); // 0x2db PushV
	func_1459(var_150_object); // 0x2dc NEW_2
	SendPlayerEnemy(var_123_object, var_150_object); // 0x2de Func
	
Label_736:
	var_151_bool = 0; var_152_object = Obj(); var_153_float = 0; var_154_float = 0; var_155_bool = 0; var_156_bool = 0; // 0x2e0 PushV
	var_152_object = var_123_object; // 0x2e1 Mov
	var_153_float = var_124_float; // 0x2e2 Mov
	var_154_float = var_125_float; // 0x2e3 Mov
	var_155_bool = var_126_bool; // 0x2e4 Mov
	var_156_bool = var_127_bool; // 0x2e5 Mov
	func_811(var_133_bool, var_134_bool, var_151_bool, var_152_object, var_153_float, var_154_float, var_155_bool, var_156_bool); // 0x2e6 NEW_2
	var_134_bool = var_151_bool; // 0x2e7 Mov
	var_202_int = var_2_int; // 0x2e9 PushT
	if(var_202_int == 0) goto Label_750; // 0x2ea JumpB
	var_203_string = "head"; // 0x2eb PushS
	UnlookAsync(var_203_string); // 0x2ec Func
	
Label_750:
	var_204_int = 1; // 0x2ee PushI
	KillTimer(var_204_int); // 0x2ef Func
	var_122_bool = var_134_bool; // 0x2f1 Mov
	return 4; // 0x2f2 Return
	
Label_725:
	var_2_int = 0; // 0x2d5 TMovB
}


func_1475(var_429_float, var_430_float, var_431_float)
{
	var_434_bool = var_430_float < var_431_float; // 0x5c4 LT
	if(var_434_bool == 0) goto Label_1480; // 0x5c5 JumpB
	var_429_float = var_430_float; // 0x5c6 Mov
	goto Label_1481; // 0x5c7 Jump
	
Label_1481:
	return 0; // 0x5c9 Return
	
Label_1480:
	var_429_float = var_431_float; // 0x5c8 Mov
}


func_962(var_11_object)
{
	var_12_object = Obj(); // 0x3c3 PushV
	var_12_object = var_11_object; // 0x3c4 Mov
	func_971(var_12_object); // 0x3c5 NEW_2
	
Label_967:
	Hold(); // 0x3c7 Func
	goto Label_967; // 0x3c9 Jump
}


func_582(var_292_bool)
{
	var_293_bool = 0; // 0x246 PushV
	var_293_bool = 0; // 0x247 MovB
	var_294_bool = 0; // 0x248 PushV
	func_554(var_293_bool, var_294_bool); // 0x249 NEW_2
	if(var_294_bool == 0) goto Label_593; // 0x24b JumpB
	var_311_bool = 0; // 0x24c PushV
	func_598(var_292_bool, var_293_bool, var_311_bool); // 0x24d NEW_2
	if(var_311_bool == 0) goto Label_593; // 0x24f JumpB
	var_293_bool = 1; // 0x250 MovB
	
Label_593:
	if(var_293_bool == 0) goto Label_596; // 0x251 JumpB
	var_292_bool = 1; // 0x252 MovB
	return 0; // 0x253 Return
	
Label_596:
	var_292_bool = 0; // 0x254 MovB
	return 0; // 0x255 Return
}


func_1094(var_419_string, var_420_int)
{
	var_421_int = 2; // 0x447 PushI
	var_422_bool = var_420_int == var_421_int; // 0x448 Eq
	if(var_422_bool == 0) goto Label_1101; // 0x449 JumpB
	var_419_string = "fire"; // 0x44a MovS
	return 0; // 0x44b Return
	
Label_1101:
	var_423_int = 1; // 0x44d PushI
	var_424_bool = var_420_int == var_423_int; // 0x44e Eq
	if(var_424_bool == 0) goto Label_1106; // 0x44f JumpB
	var_419_string = "bullet"; // 0x450 MovS
	return 0; // 0x451 Return
	
Label_1106:
	var_419_string = "phys"; // 0x452 MovS
	return 0; // 0x453 Return
}


func_1482(var_439_float, var_440_float, var_441_float, var_442_float)
{
	var_443_bool = var_440_float < var_441_float; // 0x5cb LT
	if(var_443_bool == 0) goto Label_1487; // 0x5cc JumpB
	var_439_float = var_441_float; // 0x5cd Mov
	return 0; // 0x5ce Return
	
Label_1487:
	var_444_bool = var_440_float > var_442_float; // 0x5cf GT
	if(var_444_bool == 0) goto Label_1491; // 0x5d0 JumpB
	var_439_float = var_442_float; // 0x5d1 Mov
	return 0; // 0x5d2 Return
	
Label_1491:
	var_439_float = var_440_float; // 0x5d3 Mov
	return 0; // 0x5d4 Return
}


func_971(var_12_object)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_string = ""; var_18_object = Obj(); var_19_bool = 0; var_20_bool = 0; var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_string = ""; var_28_object = Obj(); var_29_bool = 0; var_30_bool = 0; var_31_float = 0; var_32_cvector = CVector(0,0,0); // 0x3cb PushV
	var_33_bool = var_12_object == 0; // 0x3cc NullEq
	if(var_33_bool == 0) goto Label_979; // 0x3cd JumpB
	var_34_string = ""; // 0x3ce PushV
	var_34_string = "fdie"; // 0x3cf MovS
	func_1062(var_34_string); // 0x3d0 NEW_2
	goto Label_1061; // 0x3d2 Jump
	
Label_1061:
	return 20; // 0x425 Return
	
Label_979:
	GetPosition(var_23_cvector); // 0x3d3 ObjFunc
	GetPosition(var_24_cvector); // 0x3d5 Func
	GetDirection(var_25_cvector); // 0x3d7 Func
	var_26_cvector = var_24_cvector - var_23_cvector; // 0x3d9 Sub2
	var_66_float = GetByIndex(var_26_cvector, 0); // 0x3da PushE
	var_67_float = GetByIndex(var_25_cvector, 0); // 0x3db PushE
	var_68_float = var_66_float * var_67_float; // 0x3dc Mult
	var_69_float = GetByIndex(var_26_cvector, 2); // 0x3dd PushE
	var_70_float = GetByIndex(var_25_cvector, 2); // 0x3de PushE
	var_71_float = var_69_float * var_70_float; // 0x3df Mult
	var_72_int = var_68_float + var_71_float; // 0x3e0 Add
	var_73_int = 0; // 0x3e1 PushI
	var_74_bool = var_72_int >= var_73_int; // 0x3e2 GE
	if(var_74_bool == 0) goto Label_998; // 0x3e3 JumpB
	var_27_string = "fdie"; // 0x3e4 MovS
	goto Label_999; // 0x3e5 Jump
	
Label_999:
	RemoveRTEnvelope(); // 0x3e7 Func
	SetDeathState(); // 0x3e9 Func
	Stop(); // 0x3eb Func
	StopAsync(); // 0x3ed Func
	var_28_object = var_12_object; // 0x3ef Mov
	var_75_string = "GetScriptProperty"; // 0x3f0 PushS
	var_76_int = 2; // 0x3f1 PushI
	var_77_bool = IsFuncExist(var_12_object, var_75_string, var_76_int); // 0x3f2 FuncExist
	if(var_77_bool == 0) goto Label_1023; // 0x3f3 JumpB
	var_78_string = "Owner"; // 0x3f4 PushS
	HasScriptProperty(var_29_bool, var_78_string); // 0x3f5 ObjFunc
	var_79_bool = var_29_bool; // 0x3f7 Push
	if(var_79_bool == 0) goto Label_1023; // 0x3f8 JumpB
	var_80_string = "Owner"; // 0x3f9 PushS
	GetScriptProperty(var_28_object, var_80_string); // 0x3fa ObjFunc
	var_81_bool = var_28_object == 0; // 0x3fc NullEq
	if(var_81_bool == 0) goto Label_1023; // 0x3fd JumpB
	var_28_object = var_12_object; // 0x3fe Mov
	
Label_1023:
	var_82_string = "@GetEyesHeight"; // 0x3ff PushS
	var_83_int = 1; // 0x400 PushI
	var_84_bool = IsFuncExist(var_28_object, var_82_string, var_83_int); // 0x401 FuncExist
	if(var_84_bool == 0) goto Label_1038; // 0x402 JumpB
	GetEyesHeight(var_31_float); // 0x403 ObjFunc
	var_32_cvector = CVector(0.0, 0.0, 0.0); // 0x405 MovV
	var_85_float = GetByIndex(var_32_cvector, 1); // 0x406 PushE
	var_85_float = var_31_float; // 0x407 Mov
	SetByIndex(var_32_cvector, 1) = var_85_float; // 0x408 PopE
	var_86_string = "head"; // 0x409 PushS
	LookAsync(var_12_object, var_86_string, var_32_cvector); // 0x40a Func
	var_30_bool = 1; // 0x40c MovB
	goto Label_1039; // 0x40d Jump
	
Label_1039:
	var_87_string = ""; // 0x40f PushV
	var_87_string = var_27_string; // 0x410 Mov
	func_1418(var_87_string); // 0x411 NEW_2
	var_88_string = "all"; // 0x413 PushS
	PlayAnimation(var_88_string, var_27_string); // 0x414 Func
	WaitForAnimEnd(); // 0x416 Func
	var_89_bool = var_30_bool; // 0x418 Push
	if(var_89_bool == 0) goto Label_1055; // 0x419 JumpB
	StopAsync(); // 0x41a Func
	var_90_string = "head"; // 0x41c PushS
	UnlookAsync(var_90_string); // 0x41d Func
	
Label_1055:
	var_91_string = "all"; // 0x41f PushS
	LockAnimationEnd(var_91_string, var_27_string); // 0x420 Func
	RemoveEnvelope(); // 0x422 Func
	var_28_object = 0; // 0x424 SetNull
	
Label_1038:
	var_30_bool = 0; // 0x40e MovB
	
Label_998:
	var_27_string = "bdie"; // 0x3e6 MovS
}


func_1108(var_43_cvector)
{
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0x454 PushV
	GetPosition(var_47_cvector); // 0x455 Func
	GetPosition(var_48_cvector); // 0x457 ObjFunc
	var_43_cvector = var_48_cvector - var_47_cvector; // 0x459 Sub2
	return 4; // 0x45a Return
}


func_1493(var_447_float)
{
	var_448_object = Obj(); var_449_object = Obj(); // 0x5d5 PushV
	CreateFloatVector(var_449_object); // 0x5d6 Func
	add(var_447_float); // 0x5d8 ObjFunc
	var_450_int = 15; // 0x5da PushI
	SendWorldWndMessage(var_450_int, var_449_object); // 0x5db Func
	return 2; // 0x5dd Return
}


func_598(var_0_object, var_4_float, var_311_bool)
{
	var_312_object = Obj(); var_313_bool = 0; var_314_float = 0; var_315_cvector = CVector(0,0,0); var_316_cvector = CVector(0,0,0); var_317_object = Obj(); var_318_bool = 0; var_319_float = 0; var_320_cvector = CVector(0,0,0); var_321_cvector = CVector(0,0,0); // 0x256 PushV
	GetScene(var_317_object); // 0x257 Func
	var_318_bool = 0; // 0x259 MovB
	
Label_602:
	var_322_cvector = CVector(0,0,0); var_323_object = Obj(); // 0x25a PushV
	var_323_object = var_0_object; // 0x25b MovT
	func_1108(var_323_object); // 0x25c NEW_2
	var_328_int = -var_322_cvector; // 0x25e Neg
	FindDirLength(var_319_float, var_328_int, var_319_float); // 0x25f Func
	var_329_bool = var_319_float < var_4_float; // 0x261 LT
	if(var_329_bool == 0) goto Label_612; // 0x262 JumpB
	goto Label_640; // 0x263 Jump
	
Label_640:
	var_311_bool = var_318_bool; // 0x280 Mov
	return 10; // 0x281 Return
	
Label_612:
	Face(var_0_object); // 0x264 Func
	var_330_string = "all"; // 0x266 PushS
	var_331_string = "bjump"; // 0x267 PushS
	PlayAnimation(var_330_string, var_331_string); // 0x268 Func
	GetPFPosition(var_320_cvector); // 0x26a TObjFunc
	GetPFPosition(var_321_cvector); // 0x26c Func
	WaitForAnimEnd(); // 0x26e Func
	func_686(var_321_cvector); // 0x271 NEW_2
	StopAsync(); // 0x273 Func
	var_332_cvector = CVector(0.0, 0.0, 0.0); // 0x275 PushVec
	SetSpeed(var_332_cvector); // 0x276 Func
	var_318_bool = 1; // 0x278 MovB
	var_333_bool = 0; // 0x279 PushV
	func_554(var_321_cvector, var_333_bool); // 0x27a NEW_2
	var_334_bool = var_333_bool == 0; // 0x27c Not
	if(var_334_bool == 0) goto Label_639; // 0x27d JumpB
	goto Label_640; // 0x27e Jump
	
Label_639:
	goto Label_602; // 0x27f Jump
}


func_347(var_0_object, var_340_bool, var_341_float)
{
	var_342_int = 0; var_343_bool = 0; var_344_int = 0; var_345_string = ""; var_346_int = 0; var_347_bool = 0; var_348_int = 0; var_349_string = ""; // 0x15b PushV
	func_686(var_349_string); // 0x15d NEW_2
	irand(var_346_int, var_349_string); // 0x15f Func
	var_350_int = 1; // 0x161 PushI
	var_346_int = var_346_int + var_350_int; // 0x162 Add2
	Face(var_0_object); // 0x163 Func
	var_351_bool = 1; // 0x165 PushB
	SetAttackState(var_351_bool); // 0x166 Func
	func_1512(); // 0x169 NEW_2
	var_356_string = "all"; // 0x16b PushS
	var_357_string = "attack_begin"; // 0x16c PushS
	var_358_int = var_357_string + var_346_int; // 0x16d Add
	PlayAnimation(var_356_string, var_358_int); // 0x16e Func
	WaitForAnimEnd(); // 0x170 Func
	func_654(var_348_int, var_349_string); // 0x173 NEW_2
	var_374_bool = 0; var_375_object = Obj(); // 0x175 PushV
	var_375_object = var_0_object; // 0x176 MovT
	func_1246(var_374_bool, var_375_object); // 0x177 NEW_2
	var_376_bool = var_374_bool == 0; // 0x179 Not
	if(var_376_bool == 0) goto Label_383; // 0x17a JumpB
	StopAsync(); // 0x17b Func
	var_340_bool = 0; // 0x17d MovB
	return 8; // 0x17e Return
	
Label_383:
	var_377_float = 0; var_378_int = 0; // 0x17f PushV
	var_377_float = var_341_float; // 0x180 Mov
	var_378_int = var_346_int; // 0x181 Mov
	func_308(var_349_string, var_377_float, var_378_int); // 0x182 NEW_2
	var_455_string = "all"; // 0x184 PushS
	var_456_string = "attack_middle"; // 0x185 PushS
	var_457_int = var_456_string + var_346_int; // 0x186 Add
	HasAnimation(var_347_bool, var_455_string, var_457_int); // 0x187 Func
	var_458_bool = var_347_bool; // 0x189 Push
	if(var_458_bool == 0) goto Label_464; // 0x18a JumpB
	func_1512(); // 0x18c NEW_2
	var_459_string = "all"; // 0x18e PushS
	var_460_string = "attack_middle"; // 0x18f PushS
	var_461_int = var_460_string + var_346_int; // 0x190 Add
	PlayAnimation(var_459_string, var_461_int); // 0x191 Func
	WaitForAnimEnd(); // 0x193 Func
	func_686(var_349_string); // 0x196 NEW_2
	var_462_bool = 0; var_463_object = Obj(); // 0x198 PushV
	var_463_object = var_0_object; // 0x199 MovT
	func_1246(var_462_bool, var_463_object); // 0x19a NEW_2
	var_464_bool = var_462_bool == 0; // 0x19c Not
	if(var_464_bool == 0) goto Label_418; // 0x19d JumpB
	StopAsync(); // 0x19e Func
	var_340_bool = 0; // 0x1a0 MovB
	return 8; // 0x1a1 Return
	
Label_418:
	var_465_float = 0; var_466_int = 0; // 0x1a2 PushV
	var_465_float = var_341_float; // 0x1a3 Mov
	var_466_int = var_346_int; // 0x1a4 Mov
	func_308(var_349_string, var_465_float, var_466_int); // 0x1a5 NEW_2
	var_348_int = 1; // 0x1a7 MovI
	
Label_424:
	var_467_string = "attack_middle"; // 0x1a8 PushS
	var_468_int = var_467_string + var_346_int; // 0x1a9 Add
	var_469_string = "_"; // 0x1aa PushS
	var_470_int = var_468_int + var_469_string; // 0x1ab Add
	var_349_string = var_470_int + var_348_int; // 0x1ac Add2
	var_471_string = "all"; // 0x1ad PushS
	HasAnimation(var_347_bool, var_471_string, var_349_string); // 0x1ae Func
	var_472_bool = var_347_bool == 0; // 0x1b0 Not
	if(var_472_bool == 0) goto Label_435; // 0x1b1 JumpB
	goto Label_464; // 0x1b2 Jump
	
Label_464:
	var_473_bool = 0; // 0x1d0 PushB
	SetAttackState(var_473_bool); // 0x1d1 Func
	var_474_string = "all"; // 0x1d3 PushS
	var_475_string = "attack_end"; // 0x1d4 PushS
	var_476_int = var_475_string + var_346_int; // 0x1d5 Add
	PlayAnimation(var_474_string, var_476_int); // 0x1d6 Func
	var_477_bool = 0; // 0x1d8 PushV
	func_700(var_477_bool); // 0x1d9 NEW_2
	if(var_477_bool == 0) goto Label_482; // 0x1db JumpB
	var_478_bool = 0; var_479_float = 0; // 0x1dc PushV
	var_479_float = 0.75; // 0x1dd MovF
	func_484(var_478_bool, var_479_float); // 0x1de NEW_2
	StopAsync(); // 0x1e0 Func
	
Label_482:
	var_340_bool = 1; // 0x1e2 MovB
	return 8; // 0x1e3 Return
	
Label_435:
	func_1512(); // 0x1b4 NEW_2
	var_487_string = "all"; // 0x1b6 PushS
	PlayAnimation(var_487_string, var_349_string); // 0x1b7 Func
	WaitForAnimEnd(); // 0x1b9 Func
	func_686(var_349_string); // 0x1bc NEW_2
	var_488_bool = 0; var_489_object = Obj(); // 0x1be PushV
	var_489_object = var_0_object; // 0x1bf MovT
	func_1246(var_488_bool, var_489_object); // 0x1c0 NEW_2
	var_490_bool = var_488_bool == 0; // 0x1c2 Not
	if(var_490_bool == 0) goto Label_456; // 0x1c3 JumpB
	StopAsync(); // 0x1c4 Func
	var_340_bool = 0; // 0x1c6 MovB
	return 8; // 0x1c7 Return
	
Label_456:
	var_491_float = 0; var_492_int = 0; // 0x1c8 PushV
	var_491_float = var_341_float; // 0x1c9 Mov
	var_492_int = var_346_int; // 0x1ca Mov
	func_308(var_349_string, var_491_float, var_492_int); // 0x1cb NEW_2
	var_493_int = 1; // 0x1cd PushI
	var_348_int = var_348_int + var_493_int; // 0x1ce Add2
	goto Label_424; // 0x1cf Jump
}


func_1115(var_146_bool, var_147_object)
{
	var_148_bool = 0; var_149_bool = 0; // 0x45b PushV
	IsPlayerActor(var_147_object, var_149_bool); // 0x45c Func
	var_146_bool = var_149_bool; // 0x45e Mov
	return 2; // 0x45f Return
}


func_1246(var_22_bool, var_23_object)
{
	var_24_int = 0; var_25_int = 0; // 0x4de PushV
	var_26_bool = 0; var_27_object = Obj(); // 0x4df PushV
	var_27_object = var_23_object; // 0x4e0 Mov
	func_1210(var_26_bool, var_27_object); // 0x4e1 NEW_2
	var_43_bool = var_26_bool == 0; // 0x4e3 Not
	if(var_43_bool == 0) goto Label_1255; // 0x4e4 JumpB
	var_22_bool = 0; // 0x4e5 MovB
	return 2; // 0x4e6 Return
	
Label_1255:
	var_44_bool = 0; var_45_object = Obj(); var_46_string = ""; // 0x4e7 PushV
	var_45_object = var_23_object; // 0x4e8 Mov
	var_46_string = "noaccess"; // 0x4e9 MovS
	func_1120(var_44_bool, var_45_object, var_46_string); // 0x4ea NEW_2
	var_53_bool = var_44_bool == 0; // 0x4ec Not
	if(var_53_bool == 0) goto Label_1264; // 0x4ed JumpB
	var_22_bool = 1; // 0x4ee MovB
	return 2; // 0x4ef Return
	
Label_1264:
	var_54_string = "noaccess"; // 0x4f0 PushS
	GetProperty(var_54_string, var_25_int); // 0x4f1 ObjFunc
	var_55_int = 0; // 0x4f3 PushI
	var_22_bool = var_25_int == var_55_int; // 0x4f4 Eq2
	return 2; // 0x4f5 Return
}


func_1503(var_12_object)
{
	var_13_bool = 0; var_14_bool = 0; // 0x5df PushV
	IsPlayerActor(var_12_object, var_14_bool); // 0x5e0 Func
	var_15_bool = var_14_bool; // 0x5e2 Push
	if(var_15_bool == 0) goto Label_1511; // 0x5e3 JumpB
	var_16_string = "attack"; // 0x5e4 PushS
	PlayGlobalMusic(var_16_string); // 0x5e5 Func
	
Label_1511:
	return 2; // 0x5e7 Return
}


func_1120(var_44_bool, var_45_object, var_46_string)
{
	var_47_bool = 0; var_48_bool = 0; // 0x460 PushV
	var_49_string = "HasProperty"; // 0x461 PushS
	var_50_int = 2; // 0x462 PushI
	var_51_bool = IsFuncExist(var_45_object, var_49_string, var_50_int); // 0x463 FuncExist
	var_52_bool = var_51_bool == 0; // 0x464 Not
	if(var_52_bool == 0) goto Label_1128; // 0x465 JumpB
	var_44_bool = 0; // 0x466 MovB
	return 2; // 0x467 Return
	
Label_1128:
	HasProperty(var_46_string, var_48_bool); // 0x468 ObjFunc
	var_44_bool = var_48_bool; // 0x46a Mov
	return 2; // 0x46b Return
}


func_484(var_478_bool, var_479_float)
{
	var_480_float = 0; var_481_bool = 0; var_482_float = 0; var_483_bool = 0; // 0x1e4 PushV
	rand(var_482_float); // 0x1e5 Func
	var_484_bool = var_482_float < var_479_float; // 0x1e7 LT
	if(var_484_bool == 0) goto Label_504; // 0x1e8 JumpB
	
Label_489:
	IsAnimationPlaying(var_483_bool); // 0x1e9 Func
	var_485_bool = var_483_bool == 0; // 0x1eb Not
	if(var_485_bool == 0) goto Label_494; // 0x1ec JumpB
	goto Label_503; // 0x1ed Jump
	
Label_503:
	goto Label_509; // 0x1f7 Jump
	
Label_509:
	var_478_bool = 0; // 0x1fd MovB
	return 4; // 0x1fe Return
	
Label_494:
	var_486_bool = 0; // 0x1ee PushV
	func_582(var_486_bool); // 0x1ef NEW_2
	if(var_486_bool == 0) goto Label_500; // 0x1f1 JumpB
	var_478_bool = 1; // 0x1f2 MovB
	return 4; // 0x1f3 Return
	
Label_500:
	sync(); // 0x1f4 Func
	goto Label_489; // 0x1f6 Jump
	
Label_504:
	WaitForAnimEnd(); // 0x1f8 Func
	func_686(var_483_bool); // 0x1fb NEW_2
}


func_1382(var_15_object, var_18_cvector, var_19_cvector)
{
	var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); // 0x566 PushV
	GetScene(var_22_object); // 0x567 Func
	var_24_string = "scripted"; // 0x569 PushS
	var_25_string = "blood_dir.xml"; // 0x56a PushS
	AddActorByType(var_23_object, var_24_string, var_22_object, var_18_cvector, var_19_cvector, var_25_string); // 0x56b Func
	var_26_object = Obj(); // 0x56d PushV
	var_26_object = var_15_object; // 0x56e Mov
	func_1270(var_26_object); // 0x56f NEW_2
	return 4; // 0x571 Return
}


func_1512()
{
	var_352_object = Obj(); var_353_object = Obj(); // 0x5e8 PushV
	GetScene(var_353_object); // 0x5e9 Func
	var_354_string = "battle"; // 0x5eb PushS
	var_355_object = Obj(); // 0x5ec PushV
	func_1459(var_355_object); // 0x5ed NEW_2
	BroadcastMessage(var_354_string, var_355_object, var_353_object); // 0x5ef Func
	return 2; // 0x5f1 Return
}


func_1132(var_391_float, var_392_object, var_393_float, var_394_int)
{
	var_398_int = 0; var_399_string = ""; var_400_int = 0; var_401_float = 0; var_402_float = 0; var_403_float = 0; var_404_int = 0; var_405_string = ""; var_406_int = 0; var_407_float = 0; var_408_float = 0; var_409_float = 0; // 0x46c PushV
	var_410_bool = 0; var_411_object = Obj(); var_412_string = ""; // 0x46d PushV
	var_411_object = var_392_object; // 0x46e Mov
	var_412_string = "health"; // 0x46f MovS
	func_1120(var_410_bool, var_411_object, var_412_string); // 0x470 NEW_2
	var_413_bool = var_410_bool == 0; // 0x472 Not
	if(var_413_bool == 0) goto Label_1142; // 0x473 JumpB
	var_391_float = 0.0; // 0x474 MovF
	return 12; // 0x475 Return
	
Label_1142:
	var_414_bool = 0; var_415_object = Obj(); var_416_string = ""; // 0x476 PushV
	var_415_object = var_392_object; // 0x477 Mov
	var_416_string = "armor"; // 0x478 MovS
	func_1120(var_414_bool, var_415_object, var_416_string); // 0x479 NEW_2
	var_417_bool = var_414_bool == 0; // 0x47b Not
	if(var_417_bool == 0) goto Label_1151; // 0x47c JumpB
	var_404_int = 0; // 0x47d MovI
	goto Label_1154; // 0x47e Jump
	
Label_1154:
	var_418_string = "armor_"; // 0x482 PushS
	var_419_string = ""; var_420_int = 0; // 0x483 PushV
	var_420_int = var_394_int; // 0x484 Mov
	func_1094(var_419_string, var_420_int); // 0x485 NEW_2
	var_405_string = var_418_string + var_419_string; // 0x487 Add2
	var_425_bool = 0; var_426_object = Obj(); var_427_string = ""; // 0x488 PushV
	var_426_object = var_392_object; // 0x489 Mov
	var_427_string = var_405_string; // 0x48a Mov
	func_1120(var_425_bool, var_426_object, var_427_string); // 0x48b NEW_2
	var_428_bool = var_425_bool == 0; // 0x48d Not
	if(var_428_bool == 0) goto Label_1169; // 0x48e JumpB
	var_406_int = 0; // 0x48f MovI
	goto Label_1171; // 0x490 Jump
	
Label_1171:
	var_429_float = 0; var_430_float = 0; var_431_float = 0; // 0x493 PushV
	var_432_int = var_404_int + var_406_int; // 0x494 Add
	var_433_float = 100.0; // 0x495 PushF
	var_430_float = var_432_int / var_432_int; // 0x496 Div2
	var_431_float = 1; // 0x497 MovI
	func_1475(var_429_float, var_430_float, var_431_float); // 0x498 NEW_2
	var_407_float = var_429_float; // 0x499 Mov
	var_435_string = "health"; // 0x49b PushS
	GetProperty(var_435_string, var_408_float); // 0x49c ObjFunc
	var_436_int = 1; // 0x49e PushI
	var_437_int = var_436_int - var_407_float; // 0x49f Sub
	var_409_float = var_393_float * var_437_int; // 0x4a0 Mult2
	var_438_string = "health"; // 0x4a1 PushS
	var_439_float = 0; var_440_float = 0; var_441_float = 0; var_442_float = 0; // 0x4a2 PushV
	var_440_float = var_408_float - var_409_float; // 0x4a3 Sub2
	var_441_float = 0; // 0x4a4 MovI
	var_442_float = 1; // 0x4a5 MovI
	func_1482(var_439_float, var_440_float, var_441_float, var_442_float); // 0x4a6 NEW_2
	SetProperty(var_438_string, var_439_float); // 0x4a8 ObjFunc
	var_445_bool = 0; var_446_object = Obj(); // 0x4aa PushV
	var_446_object = var_392_object; // 0x4ab Mov
	func_1115(var_445_bool, var_446_object); // 0x4ac NEW_2
	if(var_445_bool == 0) goto Label_1203; // 0x4ae JumpB
	var_447_float = 0; // 0x4af PushV
	var_447_float = -var_409_float; // 0x4b0 Neg2
	func_1493(var_447_float); // 0x4b1 NEW_2
	
Label_1203:
	var_391_float = var_409_float; // 0x4b3 Mov
	return 12; // 0x4b4 Return
	
Label_1169:
	GetProperty(var_405_string, var_406_int); // 0x491 ObjFunc
	
Label_1151:
	var_451_string = "armor"; // 0x47f PushS
	GetProperty(var_451_string, var_404_int); // 0x480 ObjFunc
}


func_1396()
{
	var_226_cvector = CVector(0,0,0); var_227_cvector = CVector(0,0,0); var_228_cvector = CVector(0,0,0); var_229_cvector = CVector(0,0,0); var_230_cvector = CVector(0,0,0); var_231_cvector = CVector(0,0,0); // 0x574 PushV
	GetPosition(var_229_cvector); // 0x575 ObjFunc
	GetPosition(var_230_cvector); // 0x577 Func
	var_231_cvector = var_229_cvector - var_230_cvector; // 0x579 Sub2
	var_232_float = GetByIndex(var_231_cvector, 0); // 0x57a PushE
	var_233_float = GetByIndex(var_231_cvector, 2); // 0x57b PushE
	RotateAsync(var_232_float, var_233_float); // 0x57c Func
	return 6; // 0x57e Return
}


func_1270(var_26_object)
{
	var_27_bool = 0; var_28_int = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_string = ""; var_34_bool = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = ""; // 0x4f6 PushV
	var_41_bool = var_26_object == 0; // 0x4f7 NullEq
	if(var_41_bool == 0) goto Label_1274; // 0x4f8 JumpB
	return 14; // 0x4f9 Return
	
Label_1274:
	IsDead(var_34_bool); // 0x4fa Func
	var_42_bool = var_34_bool; // 0x4fc Push
	if(var_42_bool == 0) goto Label_1279; // 0x4fd JumpB
	return 14; // 0x4fe Return
	
Label_1279:
	GetSecondaryAnimationType(var_35_int); // 0x4ff Func
	var_43_int = 0; // 0x501 PushI
	var_44_bool = var_35_int < var_43_int; // 0x502 LT
	if(var_44_bool == 0) goto Label_1285; // 0x503 JumpB
	return 14; // 0x504 Return
	
Label_1285:
	GetPosition(var_36_cvector); // 0x505 ObjFunc
	GetPosition(var_37_cvector); // 0x507 Func
	GetDirection(var_38_cvector); // 0x509 Func
	var_39_cvector = var_37_cvector - var_36_cvector; // 0x50b Sub2
	var_45_float = GetByIndex(var_39_cvector, 0); // 0x50c PushE
	var_46_float = GetByIndex(var_38_cvector, 0); // 0x50d PushE
	var_47_float = var_45_float * var_46_float; // 0x50e Mult
	var_48_float = GetByIndex(var_39_cvector, 2); // 0x50f PushE
	var_49_float = GetByIndex(var_38_cvector, 2); // 0x510 PushE
	var_50_float = var_48_float * var_49_float; // 0x511 Mult
	var_51_int = var_47_float + var_50_float; // 0x512 Add
	var_52_int = 0; // 0x513 PushI
	var_53_bool = var_51_int >= var_52_int; // 0x514 GE
	if(var_53_bool == 0) goto Label_1304; // 0x515 JumpB
	var_40_string = "fhit"; // 0x516 MovS
	goto Label_1305; // 0x517 Jump
	
Label_1305:
	var_54_string = "hit_react"; // 0x519 PushS
	var_55_string = "1"; // 0x51a PushS
	var_56_int = var_40_string + var_55_string; // 0x51b Add
	var_57_string = "2"; // 0x51c PushS
	var_58_int = var_40_string + var_57_string; // 0x51d Add
	var_59_int = -10; // 0x51e PushI
	FadeSecondaryAnimation(var_54_string, var_56_int, var_58_int, var_59_int); // 0x51f Func
	return 14; // 0x521 Return
	
Label_1304:
	var_40_string = "bhit"; // 0x518 MovS
}


func_1531(var_10_object)
{
	var_11_object = Obj(); // 0x5fc PushV
	var_11_object = var_10_object; // 0x5fd Mov
	TaskCall(3); // 0x5fe TaskCall
	func_962(var_11_object); // 0x5ff NEW_2
	TaskReturn(); // 0x600 TaskReturn
	return 0; // 0x602 Return
}


func_511(var_0_object, var_279_bool, var_280_float)
{
	var_281_bool = 0; var_282_cvector = CVector(0,0,0); var_283_cvector = CVector(0,0,0); var_284_cvector = CVector(0,0,0); var_285_float = 0; var_286_bool = 0; var_287_cvector = CVector(0,0,0); var_288_cvector = CVector(0,0,0); var_289_cvector = CVector(0,0,0); var_290_float = 0; // 0x1ff PushV
	
Label_512:
	IsAnimationPlaying(var_286_bool); // 0x200 Func
	var_291_bool = var_286_bool == 0; // 0x202 Not
	if(var_291_bool == 0) goto Label_517; // 0x203 JumpB
	goto Label_549; // 0x204 Jump
	
Label_549:
	func_686(var_290_float); // 0x226 NEW_2
	var_279_bool = 0; // 0x228 MovB
	return 10; // 0x229 Return
	
Label_517:
	var_292_bool = 0; // 0x205 PushV
	func_582(var_292_bool); // 0x206 NEW_2
	if(var_292_bool == 0) goto Label_523; // 0x208 JumpB
	var_279_bool = 1; // 0x209 MovB
	return 10; // 0x20a Return
	
Label_523:
	var_335_bool = 0; var_336_object = Obj(); // 0x20b PushV
	var_336_object = var_0_object; // 0x20c MovT
	func_1246(var_335_bool, var_336_object); // 0x20d NEW_2
	var_337_bool = var_335_bool == 0; // 0x20f Not
	if(var_337_bool == 0) goto Label_531; // 0x210 JumpB
	var_279_bool = 0; // 0x211 MovB
	return 10; // 0x212 Return
	
Label_531:
	GetPFPosition(var_287_cvector); // 0x213 TObjFunc
	GetPFPosition(var_288_cvector); // 0x215 Func
	var_289_cvector = var_287_cvector - var_288_cvector; // 0x217 Sub2
	var_290_float = var_289_cvector | var_289_cvector; // 0x218 Or2
	var_338_float = var_280_float * var_280_float; // 0x219 Mult
	var_339_bool = var_290_float < var_338_float; // 0x21a LT
	if(var_339_bool == 0) goto Label_546; // 0x21b JumpB
	var_340_bool = 0; var_341_float = 0; // 0x21c PushV
	var_341_float = var_280_float; // 0x21d Mov
	func_347(var_290_float, var_340_bool, var_341_float); // 0x21e NEW_2
	var_279_bool = 1; // 0x220 MovB
	return 10; // 0x221 Return
	
Label_546:
	sync(); // 0x222 Func
	goto Label_512; // 0x224 Jump
}


