task_1_event_7(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_int)
{
	var_10_int = 1; // 0x2dd PushI
	var_11_bool = var_9_int == var_10_int; // 0x2de Eq
	if(var_11_bool == 0) goto Label_741; // 0x2df JumpB
	var_12_object = Obj(); // 0x2e0 PushV
	var_12_object = var_1_int; // 0x2e1 MovT
	func_1645(var_12_object); // 0x2e2 NEW_2
	goto Label_745; // 0x2e4 Jump
	
Label_745:
	return 0; // 0x2e9 Return
	
Label_741:
	var_17_int = 0; // 0x2e5 PushV
	var_17_int = var_9_int; // 0x2e6 Mov
	func_890(var_8_bool, var_9_int, var_17_int); // 0x2e7 NEW_2
}


task_1_event_1(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_bool = 0; // 0x2f8 PushV
	var_10_bool = 0; // 0x2f9 MovB
	var_11_bool = var_1_int == var_9_object; // 0x2fa Eq
	if(var_11_bool == 0) goto Label_767; // 0x2fb JumpB
	var_12_bool = var_2_int == 0; // 0x2fc Not
	if(var_12_bool == 0) goto Label_767; // 0x2fd JumpB
	var_10_bool = 1; // 0x2fe MovB
	
Label_767:
	if(var_10_bool == 0) goto Label_773; // 0x2ff JumpB
	var_2_int = 1; // 0x300 TMovB
	var_13_object = Obj(); // 0x301 PushV
	var_13_object = var_9_object; // 0x302 Mov
	func_1485(var_13_object); // 0x303 NEW_2
	
Label_773:
	return 0; // 0x305 Return
}


task_1_event_2(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_bool = 0; // 0x307 PushV
	var_10_bool = 0; // 0x308 MovB
	var_11_bool = var_1_int == var_9_object; // 0x309 Eq
	if(var_11_bool == 0) goto Label_782; // 0x30a JumpB
	var_12_int = var_2_int; // 0x30b PushT
	if(var_12_int == 0) goto Label_782; // 0x30c JumpB
	var_10_bool = 1; // 0x30d MovB
	
Label_782:
	if(var_10_bool == 0) goto Label_787; // 0x30e JumpB
	var_2_int = 0; // 0x30f TMovB
	var_13_string = "head"; // 0x310 PushS
	UnlookAsync(var_13_string); // 0x311 Func
	
Label_787:
	return 0; // 0x313 Return
}


task_1_event_10(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	RequestClearPath(var_9_object); // 0x38d Func
	return 0; // 0x38f Return
}


task_1_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	func_746(var_9_object); // 0x399 NEW_2
	var_14_object = Obj(); // 0x39b PushV
	var_14_object = var_9_object; // 0x39c Mov
	func_1756(); // 0x39d NEW_2
	return 0; // 0x39f Return
}


task_2_event_0(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_bool = 0; var_11_bool = 0; // 0x3ca PushV
	IsOverrideActive(var_11_bool); // 0x3cb Func
	var_12_bool = var_11_bool == 0; // 0x3cd Not
	if(var_12_bool == 0) goto Label_979; // 0x3ce JumpB
	var_13_object = Obj(); // 0x3cf PushV
	var_13_object = var_9_object; // 0x3d0 Mov
	func_1671(var_13_object); // 0x3d1 NEW_2
	
Label_979:
	return 2; // 0x3d3 Return
}


task_2_event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	var_9_object = Obj(); // 0x3d4 PushV
	func_1537(var_9_object); // 0x3d5 NEW_2
	RemoveActor(var_9_object); // 0x3d7 Func
	Hold(); // 0x3d9 Func
	return 0; // 0x3db Return
}


task_2_event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float)
{
	return 0; // 0x452 Return
}


task_2_event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_string)
{
	return 0; // 0x454 Return
}


task_2_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	return 0; // 0x456 Return
}


task_3_event_0(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_bool = 0; // 0x45e PushV
	func_1127(var_10_bool); // 0x45f NEW_2
	if(var_10_bool == 0) goto Label_1126; // 0x461 JumpB
	var_11_object = Obj(); // 0x462 PushV
	var_11_object = var_9_object; // 0x463 Mov
	func_1111(); // 0x464 NEW_2
	
Label_1126:
	return 0; // 0x466 Return
}


task_3_event_17(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_bool = 0; var_11_bool = 0; // 0x469 PushV
	IsPlayerActor(var_9_object, var_11_bool); // 0x46a Func
	var_12_bool = var_11_bool; // 0x46c Push
	if(var_12_bool == 0) goto Label_1139; // 0x46d JumpB
	var_13_bool = 0; var_14_string = ""; var_15_string = ""; // 0x46e PushV
	var_14_string = "quest_b9_01"; // 0x46f MovS
	var_15_string = "factory_fight"; // 0x470 MovS
	func_1633(var_13_bool, var_14_string, var_15_string); // 0x471 NEW_2
	
Label_1139:
	return 2; // 0x473 Return
}


task_3_event_26(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_string)
{
	var_10_string = "attack"; // 0x475 PushS
	var_11_bool = var_9_string == var_10_string; // 0x476 Eq
	if(var_11_bool == 0) goto Label_1149; // 0x477 JumpB
	TaskCall(0); // 0x479 TaskCall
	func_0(); // 0x47a NEW_2
	TaskReturn(); // 0x47b TaskReturn
	
Label_1149:
	return 0; // 0x47d Return
}


event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float)
{
	var_13_object = Obj(); var_14_int = 0; var_15_float = 0; // 0x6be PushV
	var_13_object = var_9_object; // 0x6bf Mov
	var_14_int = var_10_int; // 0x6c0 Mov
	var_15_float = var_11_float; // 0x6c1 Mov
	func_1392(var_13_object, var_14_int, var_15_float); // 0x6c2 NEW_2
	return 0; // 0x6c4 Return
}


event_43(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float, var_13_cvector, var_14_cvector)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); // 0x6c6 PushV
	var_15_object = var_9_object; // 0x6c7 Mov
	var_16_int = var_10_int; // 0x6c8 Mov
	var_17_float = var_11_float; // 0x6c9 Mov
	var_18_cvector = var_13_cvector; // 0x6ca Mov
	var_19_cvector = var_14_cvector; // 0x6cb Mov
	func_1460(var_17_float, var_18_cvector, var_19_cvector); // 0x6cc NEW_2
	return 0; // 0x6ce Return
}


event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_string)
{
	var_11_float = 0; var_12_float = 0; // 0x6cf PushV
	var_13_string = "health"; // 0x6d0 PushS
	var_14_bool = var_10_string == var_13_string; // 0x6d1 Eq
	if(var_14_bool == 0) goto Label_1755; // 0x6d2 JumpB
	var_15_string = "health"; // 0x6d3 PushS
	GetProperty(var_15_string, var_12_float); // 0x6d4 Func
	var_16_int = 0; // 0x6d6 PushI
	var_17_bool = var_12_float <= var_16_int; // 0x6d7 LE
	if(var_17_bool == 0) goto Label_1755; // 0x6d8 JumpB
	SignalDeath(var_9_object); // 0x6d9 Func
	
Label_1755:
	return 2; // 0x6db Return
}


event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_object = Obj(); // 0x6dd PushV
	var_10_object = var_9_object; // 0x6de Mov
	func_1762(var_10_object); // 0x6df NEW_2
	return 0; // 0x6e1 Return
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	
Label_1113:
	Hold(); // 0x459 Func
	goto Label_1113; // 0x45b Jump
}


func_0()
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x0 PushV
	var_20_string = "player"; // 0x1 PushS
	FindActor(var_19_object, var_20_string); // 0x2 Func
	var_21_bool = var_19_object == 0; // 0x4 Not
	if(var_21_bool == 0) goto Label_7; // 0x5 JumpB
	return 2; // 0x6 Return
	
Label_7:
	var_22_object = Obj(); var_23_bool = 0; var_24_float = 0; // 0x7 PushV
	var_22_object = var_19_object; // 0x8 Mov
	var_23_bool = 1; // 0x9 MovB
	var_24_float = 180.0; // 0xa MovF
	func_21(var_15_bool, var_16_float, var_17_int, var_18_object, var_19_object, var_22_object, var_23_bool, var_24_float); // 0xb NEW_2
	return 2; // 0xd Return
}


func_1537(var_77_object)
{
	var_78_object = Obj(); var_79_object = Obj(); // 0x601 PushV
	self(var_79_object); // 0x602 Func
	var_77_object = var_79_object; // 0x604 Mov
	return 2; // 0x605 Return
}


func_1665(var_100_int)
{
	var_101_int = 0; var_102_int = 0; // 0x681 PushV
	var_103_string = "branch"; // 0x682 PushS
	GetVariable(var_103_string, var_102_int); // 0x683 Func
	var_100_int = var_102_int; // 0x685 Mov
	return 2; // 0x686 Return
}


func_1283(var_98_bool)
{
	var_100_bool = 0; var_101_bool = 0; // 0x503 PushV
	IsDead(var_101_bool); // 0x504 ObjFunc
	var_98_bool = var_101_bool; // 0x506 Mov
	return 2; // 0x507 Return
}


func_1671(var_13_object)
{
	var_14_int = 0; // 0x688 PushV
	func_1665(var_14_int); // 0x689 NEW_2
	var_18_int = 1; // 0x68b PushI
	var_19_bool = var_14_int == var_18_int; // 0x68c Eq
	if(var_19_bool == 0) goto Label_1681; // 0x68d JumpB
	WorkWithCorpse(var_13_object); // 0x68e Func
	goto Label_1683; // 0x690 Jump
	
Label_1683:
	return 0; // 0x693 Return
	
Label_1681:
	Barter(var_13_object); // 0x691 Func
}


func_1288(var_87_bool, var_88_object)
{
	var_89_object = Obj(); var_90_object = Obj(); var_91_object = Obj(); var_92_object = Obj(); // 0x508 PushV
	var_93_bool = var_88_object == 0; // 0x509 NullEq
	if(var_93_bool == 0) goto Label_1293; // 0x50a JumpB
	var_87_bool = 0; // 0x50b MovB
	return 4; // 0x50c Return
	
Label_1293:
	var_94_bool = 0; // 0x50d PushV
	var_94_bool = 0; // 0x50e MovB
	var_95_string = "IsDead"; // 0x50f PushS
	var_96_int = 1; // 0x510 PushI
	var_97_bool = IsFuncExist(var_88_object, var_95_string, var_96_int); // 0x511 FuncExist
	if(var_97_bool == 0) goto Label_1305; // 0x512 JumpB
	var_98_bool = 0; var_99_object = Obj(); // 0x513 PushV
	var_99_object = var_88_object; // 0x514 Mov
	func_1283(var_99_object); // 0x515 NEW_2
	if(var_98_bool == 0) goto Label_1305; // 0x517 JumpB
	var_94_bool = 1; // 0x518 MovB
	
Label_1305:
	if(var_94_bool == 0) goto Label_1308; // 0x519 JumpB
	var_87_bool = 0; // 0x51a MovB
	return 4; // 0x51b Return
	
Label_1308:
	GetScene(var_91_object); // 0x51c Func
	var_102_bool = var_91_object == 0; // 0x51e NullEq
	if(var_102_bool == 0) goto Label_1314; // 0x51f JumpB
	var_87_bool = 0; // 0x520 MovB
	return 4; // 0x521 Return
	
Label_1314:
	GetScene(var_92_object); // 0x522 ObjFunc
	var_103_bool = var_91_object != var_92_object; // 0x524 Neq
	if(var_103_bool == 0) goto Label_1320; // 0x525 JumpB
	var_87_bool = 0; // 0x526 MovB
	return 4; // 0x527 Return
	
Label_1320:
	var_87_bool = 1; // 0x528 MovB
	return 4; // 0x529 Return
}


func_1543(var_41_cvector, var_42_cvector)
{
	var_49_float = 0; var_50_float = 0; // 0x607 PushV
	var_51_int = var_42_cvector | var_42_cvector; // 0x608 Or
	var_50_float = sqrt(var_51_int); // 0x609 Sqrt2
	var_52_float = 0.0; // 0x60a PushF
	var_53_bool = var_50_float < var_52_float; // 0x60b LT
	if(var_53_bool == 0) goto Label_1551; // 0x60c JumpB
	var_41_cvector = CVector(0.0, 0.0, 0.0); // 0x60d MovV
	return 2; // 0x60e Return
	
Label_1551:
	var_41_cvector = var_42_cvector / var_42_cvector; // 0x60f Div2
	return 2; // 0x610 Return
}


func_1164(var_43_cvector)
{
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0x48c PushV
	GetPosition(var_47_cvector); // 0x48d Func
	GetPosition(var_48_cvector); // 0x48f ObjFunc
	var_43_cvector = var_48_cvector - var_47_cvector; // 0x491 Sub2
	return 4; // 0x492 Return
}


func_15(var_391_float)
{
	var_391_float = 0.3; // 0x10 MovF
	return 0; // 0x11 Return
}


func_912(var_0_object)
{
	var_0_object = 1; // 0x390 TMovB
	var_13_int = 0; // 0x391 PushI
	KillTimer(var_13_int); // 0x392 Func
	Stop(); // 0x394 Func
	return 0; // 0x396 Return
}


func_1553(var_432_float, var_433_float, var_434_float)
{
	var_437_bool = var_433_float < var_434_float; // 0x612 LT
	if(var_437_bool == 0) goto Label_1558; // 0x613 JumpB
	var_432_float = var_433_float; // 0x614 Mov
	goto Label_1559; // 0x615 Jump
	
Label_1559:
	return 0; // 0x617 Return
	
Label_1558:
	var_432_float = var_434_float; // 0x616 Mov
}


func_18(var_398_int)
{
	var_398_int = 0; // 0x13 MovI
	return 0; // 0x14 Return
}


func_531(var_0_object, var_297_bool)
{
	var_298_cvector = CVector(0,0,0); var_299_cvector = CVector(0,0,0); var_300_cvector = CVector(0,0,0); var_301_float = 0; var_302_float = 0; var_303_cvector = CVector(0,0,0); var_304_cvector = CVector(0,0,0); var_305_cvector = CVector(0,0,0); var_306_float = 0; var_307_float = 0; // 0x213 PushV
	var_308_bool = 0; var_309_object = Obj(); // 0x214 PushV
	var_309_object = var_0_object; // 0x215 MovT
	func_1324(var_308_bool, var_309_object); // 0x216 NEW_2
	var_310_bool = var_308_bool == 0; // 0x218 Not
	if(var_310_bool == 0) goto Label_540; // 0x219 JumpB
	var_297_bool = 0; // 0x21a MovB
	return 10; // 0x21b Return
	
Label_540:
	var_311_bool = 0; // 0x21c PushV
	func_620(var_307_float, var_311_bool); // 0x21d NEW_2
	if(var_311_bool == 0) goto Label_557; // 0x21f JumpB
	GetPFPosition(var_303_cvector); // 0x220 TObjFunc
	GetPFPosition(var_304_cvector); // 0x222 Func
	var_305_cvector = var_303_cvector - var_304_cvector; // 0x224 Sub2
	var_306_float = var_305_cvector | var_305_cvector; // 0x225 Or2
	GetAttackDistance(var_307_float); // 0x226 TObjFunc
	var_312_int = 50; // 0x228 PushI
	var_307_float = var_307_float + var_312_int; // 0x229 Add2
	var_313_float = var_307_float * var_307_float; // 0x22a Mult
	var_297_bool = var_306_float <= var_313_float; // 0x22b LE2
	return 10; // 0x22c Return
	
Label_557:
	var_297_bool = 0; // 0x22d MovB
	return 10; // 0x22e Return
}


func_1171(var_120_bool, var_121_object)
{
	var_122_bool = 0; var_123_bool = 0; // 0x493 PushV
	IsPlayerActor(var_121_object, var_123_bool); // 0x494 Func
	var_120_bool = var_123_bool; // 0x496 Mov
	return 2; // 0x497 Return
}


func_21(var_0_object, var_3_bool, var_5_int, var_22_object, var_23_bool, var_24_float, var_131_bool, var_223_bool)
{
	var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_bool = 0; var_35_float = 0; var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_bool = 0; var_40_bool = 0; var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_bool = 0; var_46_float = 0; // 0x15 PushV
	func_250(var_44_cvector, var_45_bool, var_46_float); // 0x17 NEW_2
	var_5_int = 0; // 0x19 TMovI
	var_69_string = "@GetAttackDistance"; // 0x1a PushS
	var_70_int = 1; // 0x1b PushI
	var_71_bool = IsFuncExist(var_22_object, var_69_string, var_70_int); // 0x1c FuncExist
	if(var_71_bool == 0) goto Label_35; // 0x1d JumpB
	GetAttackDistance(var_36_float); // 0x1e ObjFunc
	var_72_int = 50; // 0x20 PushI
	var_36_float = var_36_float + var_72_int; // 0x21 Add2
	goto Label_36; // 0x22 Jump
	
Label_36:
	var_73_int = 150; // 0x24 PushI
	var_74_bool = var_36_float >= var_73_int; // 0x25 GE
	if(var_74_bool == 0) goto Label_40; // 0x26 JumpB
	var_36_float = 150; // 0x27 MovI
	
Label_40:
	var_3_bool = 0; // 0x28 TMovB
	var_0_object = var_22_object; // 0x29 TMov
	IsPlayerActor(var_0_object, var_39_bool); // 0x2a Func
	var_75_bool = var_39_bool; // 0x2c Push
	if(var_75_bool == 0) goto Label_54; // 0x2d JumpB
	var_76_string = "attack"; // 0x2e PushS
	PlayGlobalMusic(var_76_string); // 0x2f Func
	var_77_object = Obj(); // 0x31 PushV
	func_1537(var_77_object); // 0x32 NEW_2
	SendPlayerEnemy(var_22_object, var_77_object); // 0x34 Func
	
Label_54:
	var_80_bool = var_23_bool; // 0x36 Push
	if(var_80_bool == 0) goto Label_58; // 0x37 JumpB
	var_40_bool = 0; // 0x38 MovB
	goto Label_59; // 0x39 Jump
	
Label_59:
	var_81_float = 400.0; // 0x3b PushF
	var_41_float = var_81_float + var_36_float; // 0x3c Add2
	
Label_61:
	var_82_bool = 0; // 0x3d PushV
	var_82_bool = 0; // 0x3e MovB
	var_83_bool = 0; var_84_object = Obj(); // 0x3f PushV
	var_84_object = var_0_object; // 0x40 MovT
	func_1324(var_83_bool, var_84_object); // 0x41 NEW_2
	if(var_83_bool == 0) goto Label_71; // 0x43 JumpB
	var_117_bool = var_3_bool == 0; // 0x44 Not
	if(var_117_bool == 0) goto Label_71; // 0x45 JumpB
	var_82_bool = 1; // 0x46 MovB
	
Label_71:
	if(var_82_bool == 0) goto Label_233; // 0x47 JumpB
	func_663(var_46_float); // 0x49 NEW_2
	GetPFPosition(var_37_cvector); // 0x4b TObjFunc
	GetPFPosition(var_38_cvector); // 0x4d Func
	var_42_cvector = var_37_cvector - var_38_cvector; // 0x4f Sub2
	var_43_float = var_42_cvector | var_42_cvector; // 0x50 Or2
	var_123_float = var_41_float * var_41_float; // 0x51 Mult
	var_124_bool = var_43_float >= var_123_float; // 0x52 GE
	if(var_124_bool == 0) goto Label_99; // 0x53 JumpB
	var_125_bool = 0; var_126_object = Obj(); var_127_float = 0; var_128_float = 0; var_129_bool = 0; var_130_bool = 0; // 0x54 PushV
	var_126_object = var_0_object; // 0x55 MovT
	var_127_float = var_36_float; // 0x56 Mov
	var_128_float = 10000.0; // 0x57 MovF
	var_129_bool = 1; // 0x58 MovB
	var_130_bool = 0; // 0x59 MovB
	TaskCall(1); // 0x5a TaskCall
	func_683(var_133_bool, var_125_bool, var_126_object, var_127_float, var_128_float, var_129_bool, var_130_bool); // 0x5b NEW_2
	TaskReturn(); // 0x5c TaskReturn
	var_208_bool = var_131_bool == 0; // 0x5e Not
	if(var_208_bool == 0) goto Label_97; // 0x5f JumpB
	goto Label_233; // 0x60 Jump
	
Label_233:
	WaitForAnimEnd(); // 0xe9 Func
	var_209_bool = var_3_bool; // 0xeb PushT
	if(var_209_bool == 0) goto Label_238; // 0xec JumpB
	return 22; // 0xed Return
	
Label_238:
	var_210_string = "all"; // 0xee PushS
	var_211_string = "attack_off"; // 0xef PushS
	PlayAnimation(var_210_string, var_211_string); // 0xf0 Func
	WaitForAnimEnd(); // 0xf2 Func
	var_212_bool = var_39_bool; // 0xf4 Push
	if(var_212_bool == 0) goto Label_249; // 0xf5 JumpB
	var_213_float = 2.0; // 0xf6 PushF
	Sleep(var_213_float); // 0xf7 Func
	
Label_249:
	return 22; // 0xf9 Return
	
Label_97:
	var_40_bool = 0; // 0x61 MovB
	goto Label_232; // 0x62 Jump
	
Label_232:
	goto Label_61; // 0xe8 Jump
	
Label_99:
	var_214_float = var_24_float * var_24_float; // 0x63 Mult
	var_215_bool = var_43_float >= var_214_float; // 0x64 GE
	if(var_215_bool == 0) goto Label_224; // 0x65 JumpB
	GetPFPosition(var_44_cvector); // 0x66 TObjFunc
	CanReachByPF(var_45_bool, var_44_cvector); // 0x68 Func
	var_216_bool = var_45_bool == 0; // 0x6a Not
	if(var_216_bool == 0) goto Label_123; // 0x6b JumpB
	var_217_bool = 0; var_218_object = Obj(); var_219_float = 0; var_220_float = 0; var_221_bool = 0; var_222_bool = 0; // 0x6c PushV
	var_218_object = var_0_object; // 0x6d MovT
	var_219_float = var_36_float; // 0x6e Mov
	var_220_float = 10000.0; // 0x6f MovF
	var_221_bool = 1; // 0x70 MovB
	var_222_bool = 0; // 0x71 MovB
	TaskCall(1); // 0x72 TaskCall
	func_683(var_225_bool, var_217_bool, var_218_object, var_219_float, var_220_float, var_221_bool, var_222_bool); // 0x73 NEW_2
	TaskReturn(); // 0x74 TaskReturn
	var_226_bool = var_223_bool == 0; // 0x76 Not
	if(var_226_bool == 0) goto Label_121; // 0x77 JumpB
	goto Label_233; // 0x78 Jump
	
Label_121:
	var_40_bool = 0; // 0x79 MovB
	goto Label_61; // 0x7a Jump
	
Label_123:
	var_227_bool = var_40_bool == 0; // 0x7b Not
	if(var_227_bool == 0) goto Label_148; // 0x7c JumpB
	var_228_object = Obj(); // 0x7d PushV
	var_228_object = var_0_object; // 0x7e MovT
	func_1474(); // 0x7f NEW_2
	var_237_string = "all"; // 0x81 PushS
	var_238_string = "attack_on"; // 0x82 PushS
	PlayAnimation(var_237_string, var_238_string); // 0x83 Func
	WaitForAnimEnd(); // 0x85 Func
	func_663(var_46_float); // 0x88 NEW_2
	StopAsync(); // 0x8a Func
	var_40_bool = 1; // 0x8c MovB
	var_239_bool = 0; var_240_object = Obj(); // 0x8d PushV
	var_240_object = var_0_object; // 0x8e MovT
	func_1324(var_239_bool, var_240_object); // 0x8f NEW_2
	var_241_bool = var_239_bool == 0; // 0x91 Not
	if(var_241_bool == 0) goto Label_148; // 0x92 JumpB
	goto Label_233; // 0x93 Jump
	
Label_148:
	rand(var_46_float); // 0x94 Func
	var_242_bool = 0; // 0x96 PushV
	var_242_bool = 1; // 0x97 MovB
	var_243_float = 0.25; // 0x98 PushF
	var_244_bool = var_46_float < var_243_float; // 0x99 LT
	if(var_244_bool == 0) goto Label_160; // 0x9a JumpB
	var_245_bool = 0; // 0x9b PushV
	func_620(var_242_bool, var_245_bool); // 0x9c NEW_2
	if(var_245_bool == 0) goto Label_160; // 0x9e JumpB
	var_242_bool = 0; // 0x9f MovB
	
Label_160:
	if(var_242_bool == 0) goto Label_177; // 0xa0 JumpB
	Face(var_0_object); // 0xa1 Func
	func_670(); // 0xa4 NEW_2
	var_280_string = "all"; // 0xa6 PushS
	var_281_string = "attack_stay"; // 0xa7 PushS
	PlayAnimation(var_280_string, var_281_string); // 0xa8 Func
	var_282_bool = 0; var_283_float = 0; // 0xaa PushV
	var_283_float = var_24_float; // 0xab Mov
	func_488(var_46_float, var_282_bool, var_283_float); // 0xac NEW_2
	StopAsync(); // 0xae Func
	goto Label_223; // 0xb0 Jump
	
Label_223:
	goto Label_232; // 0xdf Jump
	
Label_177:
	Face(var_0_object); // 0xb1 Func
	var_501_string = "all"; // 0xb3 PushS
	var_502_string = "fjump"; // 0xb4 PushS
	PlayAnimation(var_501_string, var_502_string); // 0xb5 Func
	WaitForAnimEnd(); // 0xb7 Func
	func_663(var_46_float); // 0xba NEW_2
	var_503_cvector = CVector(0.0, 0.0, 0.0); // 0xbc PushVec
	SetSpeed(var_503_cvector); // 0xbd Func
	Stop(); // 0xbf Func
	StopAsync(); // 0xc1 Func
	var_504_bool = 0; // 0xc3 PushV
	func_620(var_46_float, var_504_bool); // 0xc4 NEW_2
	var_505_bool = var_504_bool == 0; // 0xc6 Not
	if(var_505_bool == 0) goto Label_223; // 0xc7 JumpB
	var_506_bool = 0; var_507_object = Obj(); // 0xc8 PushV
	var_507_object = var_0_object; // 0xc9 MovT
	func_1324(var_506_bool, var_507_object); // 0xca NEW_2
	var_508_bool = var_506_bool == 0; // 0xcc Not
	if(var_508_bool == 0) goto Label_207; // 0xcd JumpB
	goto Label_233; // 0xce Jump
	
Label_207:
	GetPFPosition(var_37_cvector); // 0xcf TObjFunc
	GetPFPosition(var_38_cvector); // 0xd1 Func
	var_42_cvector = var_37_cvector - var_38_cvector; // 0xd3 Sub2
	var_43_float = var_42_cvector | var_42_cvector; // 0xd4 Or2
	var_509_float = var_24_float * var_24_float; // 0xd5 Mult
	var_510_bool = var_43_float < var_509_float; // 0xd6 LT
	if(var_510_bool == 0) goto Label_223; // 0xd7 JumpB
	var_511_bool = 0; var_512_float = 0; // 0xd8 PushV
	var_512_float = var_24_float; // 0xd9 Mov
	func_324(var_46_float, var_511_bool, var_512_float); // 0xda NEW_2
	var_513_bool = var_511_bool == 0; // 0xdc Not
	if(var_513_bool == 0) goto Label_223; // 0xdd JumpB
	goto Label_233; // 0xde Jump
	
Label_224:
	var_514_bool = 0; var_515_float = 0; // 0xe0 PushV
	var_515_float = var_24_float; // 0xe1 Mov
	func_324(var_46_float, var_514_bool, var_515_float); // 0xe2 NEW_2
	var_516_bool = var_514_bool == 0; // 0xe4 Not
	if(var_516_bool == 0) goto Label_231; // 0xe5 JumpB
	goto Label_233; // 0xe6 Jump
	
Label_231:
	var_40_bool = 1; // 0xe7 MovB
	
Label_58:
	var_40_bool = 1; // 0x3a MovB
	
Label_35:
	var_36_float = var_24_float; // 0x23 Mov
}


func_788(var_0_object, var_1_int, var_154_bool, var_155_object, var_156_float, var_157_float, var_158_bool, var_159_bool)
{
	var_160_bool = 0; var_161_bool = 0; var_162_object = Obj(); var_163_cvector = CVector(0,0,0); var_164_cvector = CVector(0,0,0); var_165_cvector = CVector(0,0,0); var_166_float = 0; var_167_object = Obj(); var_168_bool = 0; var_169_bool = 0; var_170_object = Obj(); var_171_cvector = CVector(0,0,0); var_172_cvector = CVector(0,0,0); var_173_cvector = CVector(0,0,0); var_174_float = 0; var_175_object = Obj(); // 0x314 PushV
	var_0_object = 0; // 0x315 TMovB
	var_1_int = var_155_object; // 0x316 TMov
	var_169_bool = var_159_bool; // 0x317 Mov
	
Label_792:
	var_176_bool = 0; var_177_object = Obj(); // 0x318 PushV
	var_177_object = var_155_object; // 0x319 Mov
	func_928(var_176_bool, var_177_object); // 0x31a NEW_2
	var_180_bool = var_176_bool == 0; // 0x31c Not
	if(var_180_bool == 0) goto Label_800; // 0x31d JumpB
	var_154_bool = 0; // 0x31e MovB
	return 16; // 0x31f Return
	
Label_800:
	GetPosition(var_171_cvector); // 0x320 ObjFunc
	GetPosition(var_172_cvector); // 0x322 Func
	var_173_cvector = var_171_cvector - var_172_cvector; // 0x324 Sub2
	var_174_float = var_173_cvector | var_173_cvector; // 0x325 Or2
	var_181_bool = 0; // 0x326 PushV
	var_181_bool = 0; // 0x327 MovB
	var_182_int = 0; // 0x328 PushI
	var_183_bool = var_157_float > var_182_int; // 0x329 GT
	if(var_183_bool == 0) goto Label_815; // 0x32a JumpB
	var_184_float = var_157_float * var_157_float; // 0x32b Mult
	var_185_bool = var_174_float > var_184_float; // 0x32c GT
	if(var_185_bool == 0) goto Label_815; // 0x32d JumpB
	var_181_bool = 1; // 0x32e MovB
	
Label_815:
	if(var_181_bool == 0) goto Label_820; // 0x32f JumpB
	Stop(); // 0x330 Func
	var_154_bool = 0; // 0x332 MovB
	return 16; // 0x333 Return
	
Label_820:
	var_186_float = var_156_float * var_156_float; // 0x334 Mult
	var_187_bool = var_174_float > var_186_float; // 0x335 GT
	if(var_187_bool == 0) goto Label_882; // 0x336 JumpB
	GetPFPosition(var_171_cvector); // 0x337 ObjFunc
	FindPathTo(var_175_object, var_171_cvector); // 0x339 Func
	var_188_bool = var_175_object != 0; // 0x33b NullNeq
	if(var_188_bool == 0) goto Label_831; // 0x33c JumpB
	var_170_object = var_175_object; // 0x33d Mov
	var_175_object = 0; // 0x33e SetNull
	
Label_831:
	var_189_bool = var_170_object != 0; // 0x33f NullNeq
	if(var_189_bool == 0) goto Label_864; // 0x340 JumpB
	var_190_bool = var_169_bool; // 0x341 Push
	if(var_190_bool == 0) goto Label_841; // 0x342 JumpB
	var_169_bool = 0; // 0x343 MovB
	RotatePath(var_170_object, var_168_bool); // 0x344 Func
	var_191_bool = var_168_bool == 0; // 0x346 Not
	if(var_191_bool == 0) goto Label_841; // 0x347 JumpB
	goto Label_888; // 0x348 Jump
	
Label_888:
	var_154_bool = !var_0_object; // 0x378 Not2
	return 16; // 0x379 Return
	
Label_841:
	var_192_int = 0; // 0x349 PushI
	var_193_float = 0.3; // 0x34a PushF
	SetTimer(var_192_int, var_193_float); // 0x34b Func
	var_194_string = ""; // 0x34d PushV
	func_935(var_194_string); // 0x34e NEW_2
	var_195_string = ""; // 0x350 PushV
	func_937(var_195_string); // 0x351 NEW_2
	FollowPath(var_170_object, var_158_bool, var_168_bool, var_194_string, var_195_string); // 0x353 Func
	var_196_bool = var_168_bool == 0; // 0x355 Not
	if(var_196_bool == 0) goto Label_862; // 0x356 JumpB
	var_197_object = var_0_object; // 0x357 PushT
	if(var_197_object == 0) goto Label_860; // 0x358 JumpB
	var_170_object = 0; // 0x359 SetNull
	goto Label_888; // 0x35a Jump
	
Label_860:
	goto Label_887; // 0x35c Jump
	
Label_887:
	goto Label_792; // 0x377 Jump
	
Label_862:
	var_170_object = 0; // 0x35e SetNull
	goto Label_880; // 0x35f Jump
	
Label_880:
	var_175_object = 0; // 0x370 SetNull
	goto Label_886; // 0x371 Jump
	
Label_886:
	var_170_object = 0; // 0x376 SetNull
	
Label_864:
	var_198_int = 0; // 0x360 PushI
	KillTimer(var_198_int); // 0x361 Func
	var_199_float = 0.5; // 0x363 PushF
	Sleep(var_199_float, var_168_bool); // 0x364 Func
	var_200_bool = var_168_bool == 0; // 0x366 Not
	if(var_200_bool == 0) goto Label_876; // 0x367 JumpB
	var_201_object = var_0_object; // 0x368 PushT
	if(var_201_object == 0) goto Label_876; // 0x369 JumpB
	var_170_object = 0; // 0x36a SetNull
	goto Label_888; // 0x36b Jump
	
Label_876:
	var_202_int = 0; // 0x36c PushI
	var_203_float = 0.3; // 0x36d PushF
	SetTimer(var_202_int, var_203_float); // 0x36e Func
	
Label_882:
	var_204_int = 0; // 0x372 PushI
	KillTimer(var_204_int); // 0x373 Func
	goto Label_888; // 0x375 Jump
}


func_663(var_0_object)
{
	var_118_object = Obj(); // 0x297 PushV
	var_118_object = var_0_object; // 0x298 MovT
	func_1645(var_118_object); // 0x299 NEW_2
	return 0; // 0x29b Return
}


func_1560(var_153_float, var_154_float, var_155_float, var_156_float)
{
	var_157_bool = var_154_float < var_155_float; // 0x619 LT
	if(var_157_bool == 0) goto Label_1565; // 0x61a JumpB
	var_153_float = var_155_float; // 0x61b Mov
	return 0; // 0x61c Return
	
Label_1565:
	var_158_bool = var_154_float > var_156_float; // 0x61d GT
	if(var_158_bool == 0) goto Label_1569; // 0x61e JumpB
	var_153_float = var_156_float; // 0x61f Mov
	return 0; // 0x620 Return
	
Label_1569:
	var_153_float = var_154_float; // 0x621 Mov
	return 0; // 0x622 Return
}


func_1176(var_143_bool, var_144_object, var_145_string)
{
	var_146_bool = 0; var_147_bool = 0; // 0x498 PushV
	var_148_string = "HasProperty"; // 0x499 PushS
	var_149_int = 2; // 0x49a PushI
	var_150_bool = IsFuncExist(var_144_object, var_148_string, var_149_int); // 0x49b FuncExist
	var_151_bool = var_150_bool == 0; // 0x49c Not
	if(var_151_bool == 0) goto Label_1184; // 0x49d JumpB
	var_143_bool = 0; // 0x49e MovB
	return 2; // 0x49f Return
	
Label_1184:
	HasProperty(var_145_string, var_147_bool); // 0x4a0 ObjFunc
	var_143_bool = var_147_bool; // 0x4a2 Mov
	return 2; // 0x4a3 Return
}


func_1684(var_106_string)
{
	var_107_object = Obj(); var_108_int = 0; var_109_bool = 0; var_110_object = Obj(); var_111_int = 0; var_112_bool = 0; // 0x694 PushV
	CreateInvItem(var_110_object); // 0x695 Func
	SetItemName(var_106_string); // 0x697 ObjFunc
	var_113_string = "Organ"; // 0x699 PushS
	var_114_int = 1; // 0x69a PushI
	SetProperty(var_113_string, var_114_int); // 0x69b ObjFunc
	GetItemID(var_111_int); // 0x69d ObjFunc
	var_115_int = 0; // 0x69f PushI
	var_116_int = 1; // 0x6a0 PushI
	AddItem(var_112_bool, var_110_object, var_115_int, var_116_int); // 0x6a1 Func
	return 6; // 0x6a3 Return
}


func_668(var_459_int)
{
	var_459_int = 0; // 0x29c MovI
	return 0; // 0x29d Return
}


func_285(var_0_object, var_380_float, var_381_int)
{
	var_382_object = Obj(); var_383_float = 0; var_384_float = 0; var_385_object = Obj(); var_386_float = 0; var_387_float = 0; // 0x11d PushV
	var_388_float = 0.9; // 0x11e PushF
	var_389_float = var_380_float * var_388_float; // 0x11f Mult
	GetVictim(var_389_float, var_385_object); // 0x120 Func
	ReportAttack(var_0_object); // 0x122 Func
	var_390_bool = var_385_object == var_0_object; // 0x124 Eq
	if(var_390_bool == 0) goto Label_322; // 0x125 JumpB
	var_391_float = 0; var_392_object = Obj(); var_393_int = 0; // 0x126 PushV
	var_392_object = var_385_object; // 0x127 Mov
	var_393_int = var_381_int; // 0x128 Mov
	func_15(var_393_int); // 0x129 NEW_2
	var_386_float = var_391_float; // 0x12a Mov
	var_394_float = 0; var_395_object = Obj(); var_396_float = 0; var_397_int = 0; // 0x12c PushV
	var_395_object = var_385_object; // 0x12d Mov
	var_396_float = var_386_float; // 0x12e Mov
	var_398_int = 0; var_399_object = Obj(); var_400_int = 0; // 0x12f PushV
	var_399_object = var_385_object; // 0x130 Mov
	var_400_int = var_381_int; // 0x131 Mov
	func_18(var_400_int); // 0x132 NEW_2
	var_397_int = var_398_int; // 0x133 Mov
	func_1210(var_394_float, var_395_object, var_396_float, var_397_int); // 0x135 NEW_2
	var_387_float = var_394_float; // 0x136 Mov
	var_459_int = 0; // 0x138 PushV
	func_668(var_459_int); // 0x139 NEW_2
	ReportHit(var_0_object, var_459_int, var_387_float, var_386_float); // 0x13b Func
	var_460_object = Obj(); var_461_float = 0; // 0x13d PushV
	var_460_object = var_385_object; // 0x13e Mov
	var_461_float = var_387_float; // 0x13f Mov
	func_675(); // 0x140 NEW_2
	
Label_322:
	return 6; // 0x142 Return
}


func_670()
{
	var_251_string = ""; // 0x29e PushV
	var_251_string = "attack_stay"; // 0x29f MovS
	func_1496(var_251_string); // 0x2a0 NEW_2
	return 0; // 0x2a2 Return
}


func_928(var_176_bool, var_177_object)
{
	var_178_bool = 0; var_179_object = Obj(); // 0x3a1 PushV
	var_179_object = var_177_object; // 0x3a2 Mov
	func_1324(var_178_bool, var_179_object); // 0x3a3 NEW_2
	var_176_bool = var_178_bool; // 0x3a4 Mov
	return 0; // 0x3a6 Return
}


func_675()
{
	return 0; // 0x2a4 Return
}


func_1571(var_124_bool, var_125_object, var_126_float)
{
	var_127_bool = var_125_object == 0; // 0x624 Not
	if(var_127_bool == 0) goto Label_1576; // 0x625 JumpB
	var_124_bool = 0; // 0x626 MovB
	return 0; // 0x627 Return
	
Label_1576:
	var_128_int = 0; // 0x628 PushI
	var_129_bool = var_126_float > var_128_int; // 0x629 GT
	if(var_129_bool == 0) goto Label_1583; // 0x62a JumpB
	var_130_int = 8; // 0x62b PushI
	SendWorldWndMessage(var_130_int); // 0x62c Func
	goto Label_1592; // 0x62e Jump
	
Label_1592:
	var_131_float = 0; // 0x638 PushV
	var_131_float = var_126_float; // 0x639 Mov
	func_1623(var_131_float); // 0x63a NEW_2
	var_135_bool = 0; var_136_object = Obj(); var_137_string = ""; var_138_float = 0; var_139_float = 0; var_140_float = 0; // 0x63c PushV
	var_136_object = var_125_object; // 0x63d Mov
	var_137_string = "reputation"; // 0x63e MovS
	var_138_float = var_126_float; // 0x63f Mov
	var_139_float = 0; // 0x640 MovI
	var_140_float = 1; // 0x641 MovI
	func_1188(var_135_bool, var_136_object, var_137_string, var_138_float, var_139_float, var_140_float); // 0x642 NEW_2
	var_124_bool = 1; // 0x644 MovB
	return 0; // 0x645 Return
	
Label_1583:
	var_159_int = 0; // 0x62f PushI
	var_160_bool = var_126_float < var_159_int; // 0x630 LT
	if(var_160_bool == 0) goto Label_1590; // 0x631 JumpB
	var_161_int = 9; // 0x632 PushI
	SendWorldWndMessage(var_161_int); // 0x633 Func
	goto Label_1592; // 0x635 Jump
	
Label_1590:
	var_124_bool = 0; // 0x636 MovB
	return 0; // 0x637 Return
}


func_677(var_484_bool)
{
	var_484_bool = 1; // 0x2a5 MovB
	return 0; // 0x2a6 Return
}


func_1701()
{
	var_100_int = 0; // 0x6a5 PushV
	func_1665(var_100_int); // 0x6a6 NEW_2
	var_104_int = 1; // 0x6a8 PushI
	var_105_bool = var_100_int != var_104_int; // 0x6a9 Neq
	if(var_105_bool == 0) goto Label_1708; // 0x6aa JumpB
	return 0; // 0x6ab Return
	
Label_1708:
	var_106_string = ""; // 0x6ac PushV
	var_106_string = "liver"; // 0x6ad MovS
	func_1684(var_106_string); // 0x6ae NEW_2
	var_117_string = ""; // 0x6b0 PushV
	var_117_string = "kidney"; // 0x6b1 MovS
	func_1684(var_117_string); // 0x6b2 NEW_2
	var_118_string = ""; // 0x6b4 PushV
	var_118_string = "heart"; // 0x6b5 MovS
	func_1684(var_118_string); // 0x6b6 NEW_2
	var_119_string = ""; // 0x6b8 PushV
	var_119_string = "blood"; // 0x6b9 MovS
	func_1684(var_119_string); // 0x6ba NEW_2
	return 0; // 0x6bc Return
}


func_679(var_376_int)
{
	var_376_int = 1; // 0x2a7 MovI
	return 0; // 0x2a8 Return
}


func_935(var_194_string)
{
	var_194_string = "walk"; // 0x3a7 MovS
	return 0; // 0x3a8 Return
}


func_681(var_371_float)
{
	var_371_float = 0.5; // 0x2a9 MovF
	return 0; // 0x2aa Return
}


func_937(var_195_string)
{
	var_195_string = "run"; // 0x3a9 MovS
	return 0; // 0x3aa Return
}


func_683(var_2_int, var_125_bool, var_126_object, var_127_float, var_128_float, var_129_bool, var_130_bool)
{
	var_134_bool = 0; var_135_bool = 0; var_136_bool = 0; var_137_bool = 0; // 0x2ab PushV
	var_138_object = Obj(); // 0x2ac PushV
	var_138_object = var_126_object; // 0x2ad Mov
	func_1645(var_138_object); // 0x2ae NEW_2
	var_139_int = 1; // 0x2b0 PushI
	var_140_int = 5; // 0x2b1 PushI
	SetTimer(var_139_int, var_140_int); // 0x2b2 Func
	CanSee(var_136_bool, var_126_object); // 0x2b4 Func
	var_141_bool = var_136_bool; // 0x2b6 Push
	if(var_141_bool == 0) goto Label_702; // 0x2b7 JumpB
	var_2_int = 1; // 0x2b8 TMovB
	var_142_object = Obj(); // 0x2b9 PushV
	var_142_object = var_126_object; // 0x2ba Mov
	func_1485(var_142_object); // 0x2bb NEW_2
	goto Label_703; // 0x2bd Jump
	
Label_703:
	var_149_bool = 0; var_150_object = Obj(); // 0x2bf PushV
	var_150_object = var_126_object; // 0x2c0 Mov
	func_1171(var_149_bool, var_150_object); // 0x2c1 NEW_2
	if(var_149_bool == 0) goto Label_713; // 0x2c3 JumpB
	var_153_object = Obj(); // 0x2c4 PushV
	func_1537(var_153_object); // 0x2c5 NEW_2
	SendPlayerEnemy(var_126_object, var_153_object); // 0x2c7 Func
	
Label_713:
	var_154_bool = 0; var_155_object = Obj(); var_156_float = 0; var_157_float = 0; var_158_bool = 0; var_159_bool = 0; // 0x2c9 PushV
	var_155_object = var_126_object; // 0x2ca Mov
	var_156_float = var_127_float; // 0x2cb Mov
	var_157_float = var_128_float; // 0x2cc Mov
	var_158_bool = var_129_bool; // 0x2cd Mov
	var_159_bool = var_130_bool; // 0x2ce Mov
	func_788(var_136_bool, var_137_bool, var_154_bool, var_155_object, var_156_float, var_157_float, var_158_bool, var_159_bool); // 0x2cf NEW_2
	var_137_bool = var_154_bool; // 0x2d0 Mov
	var_205_int = var_2_int; // 0x2d2 PushT
	if(var_205_int == 0) goto Label_727; // 0x2d3 JumpB
	var_206_string = "head"; // 0x2d4 PushS
	UnlookAsync(var_206_string); // 0x2d5 Func
	
Label_727:
	var_207_int = 1; // 0x2d7 PushI
	KillTimer(var_207_int); // 0x2d8 Func
	var_125_bool = var_137_bool; // 0x2da Mov
	return 4; // 0x2db Return
	
Label_702:
	var_2_int = 0; // 0x2be TMovB
}


func_1324(var_83_bool, var_84_object)
{
	var_85_int = 0; var_86_int = 0; // 0x52c PushV
	var_87_bool = 0; var_88_object = Obj(); // 0x52d PushV
	var_88_object = var_84_object; // 0x52e Mov
	func_1288(var_87_bool, var_88_object); // 0x52f NEW_2
	var_104_bool = var_87_bool == 0; // 0x531 Not
	if(var_104_bool == 0) goto Label_1333; // 0x532 JumpB
	var_83_bool = 0; // 0x533 MovB
	return 2; // 0x534 Return
	
Label_1333:
	var_105_bool = 0; var_106_object = Obj(); var_107_string = ""; // 0x535 PushV
	var_106_object = var_84_object; // 0x536 Mov
	var_107_string = "noaccess"; // 0x537 MovS
	func_1176(var_105_bool, var_106_object, var_107_string); // 0x538 NEW_2
	var_114_bool = var_105_bool == 0; // 0x53a Not
	if(var_114_bool == 0) goto Label_1342; // 0x53b JumpB
	var_83_bool = 1; // 0x53c MovB
	return 2; // 0x53d Return
	
Label_1342:
	var_115_string = "noaccess"; // 0x53e PushS
	GetProperty(var_115_string, var_86_int); // 0x53f ObjFunc
	var_116_int = 0; // 0x541 PushI
	var_83_bool = var_86_int == var_116_int; // 0x542 Eq2
	return 2; // 0x543 Return
}


func_1188(var_135_bool, var_136_object, var_137_string, var_138_float, var_139_float, var_140_float)
{
	var_141_float = 0; var_142_float = 0; // 0x4a4 PushV
	var_143_bool = 0; var_144_object = Obj(); var_145_string = ""; // 0x4a5 PushV
	var_144_object = var_136_object; // 0x4a6 Mov
	var_145_string = var_137_string; // 0x4a7 Mov
	func_1176(var_143_bool, var_144_object, var_145_string); // 0x4a8 NEW_2
	var_152_bool = var_143_bool == 0; // 0x4aa Not
	if(var_152_bool == 0) goto Label_1198; // 0x4ab JumpB
	var_135_bool = 0; // 0x4ac MovB
	return 2; // 0x4ad Return
	
Label_1198:
	GetProperty(var_137_string, var_142_float); // 0x4ae ObjFunc
	var_153_float = 0; var_154_float = 0; var_155_float = 0; var_156_float = 0; // 0x4b0 PushV
	var_154_float = var_142_float + var_138_float; // 0x4b1 Add2
	var_155_float = var_139_float; // 0x4b2 Mov
	var_156_float = var_140_float; // 0x4b3 Mov
	func_1560(var_153_float, var_154_float, var_155_float, var_156_float); // 0x4b4 NEW_2
	SetProperty(var_137_string, var_153_float); // 0x4b6 ObjFunc
	var_135_bool = 1; // 0x4b8 MovB
	return 2; // 0x4b9 Return
}


func_939(var_11_object)
{
	var_12_bool = 0; var_13_string = ""; var_14_string = ""; // 0x3ac PushV
	var_13_string = "quest_b9_01"; // 0x3ad MovS
	var_14_string = "doberman_dead"; // 0x3ae MovS
	func_1633(var_12_bool, var_13_string, var_14_string); // 0x3af NEW_2
	var_18_object = Obj(); // 0x3b1 PushV
	var_18_object = var_11_object; // 0x3b2 Mov
	func_988(var_18_object); // 0x3b3 NEW_2
	var_98_int = 50; // 0x3b5 PushI
	var_99_int = 40; // 0x3b6 PushI
	SetRTEnvelope(var_98_int, var_99_int); // 0x3b7 Func
	func_1701(); // 0x3ba NEW_2
	var_120_bool = 0; var_121_object = Obj(); // 0x3bc PushV
	var_121_object = var_11_object; // 0x3bd Mov
	func_1171(var_120_bool, var_121_object); // 0x3be NEW_2
	if(var_120_bool == 0) goto Label_966; // 0x3c0 JumpB
	var_124_bool = 0; var_125_object = Obj(); var_126_float = 0; // 0x3c1 PushV
	var_125_object = var_11_object; // 0x3c2 Mov
	var_126_float = -0.03; // 0x3c3 MovF
	func_1571(var_124_bool, var_125_object, var_126_float); // 0x3c4 NEW_2
	
Label_966:
	Hold(); // 0x3c6 Func
	goto Label_966; // 0x3c8 Jump
}


func_559(var_295_bool)
{
	var_296_bool = 0; // 0x22f PushV
	var_296_bool = 0; // 0x230 MovB
	var_297_bool = 0; // 0x231 PushV
	func_531(var_296_bool, var_297_bool); // 0x232 NEW_2
	if(var_297_bool == 0) goto Label_570; // 0x234 JumpB
	var_314_bool = 0; // 0x235 PushV
	func_575(var_295_bool, var_296_bool, var_314_bool); // 0x236 NEW_2
	if(var_314_bool == 0) goto Label_570; // 0x238 JumpB
	var_296_bool = 1; // 0x239 MovB
	
Label_570:
	if(var_296_bool == 0) goto Label_573; // 0x23a JumpB
	var_295_bool = 1; // 0x23b MovB
	return 0; // 0x23c Return
	
Label_573:
	var_295_bool = 0; // 0x23d MovB
	return 0; // 0x23e Return
}


func_1460(var_15_object, var_18_cvector, var_19_cvector)
{
	var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); // 0x5b4 PushV
	GetScene(var_22_object); // 0x5b5 Func
	var_24_string = "scripted"; // 0x5b7 PushS
	var_25_string = "blood_dir.xml"; // 0x5b8 PushS
	AddActorByType(var_23_object, var_24_string, var_22_object, var_18_cvector, var_19_cvector, var_25_string); // 0x5b9 Func
	var_26_object = Obj(); // 0x5bb PushV
	var_26_object = var_15_object; // 0x5bc Mov
	func_1348(var_26_object); // 0x5bd NEW_2
	return 4; // 0x5bf Return
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
	func_1496(var_41_string); // 0x444 NEW_2
	var_70_string = "all"; // 0x446 PushS
	PlayAnimation(var_70_string, var_40_string); // 0x447 Func
	WaitForAnimEnd(); // 0x449 Func
	var_71_string = "all"; // 0x44b PushS
	LockAnimationEnd(var_71_string, var_40_string); // 0x44c Func
	RemoveEnvelope(); // 0x44e Func
	return 0; // 0x450 Return
}


func_1210(var_394_float, var_395_object, var_396_float, var_397_int)
{
	var_401_int = 0; var_402_string = ""; var_403_int = 0; var_404_float = 0; var_405_float = 0; var_406_float = 0; var_407_int = 0; var_408_string = ""; var_409_int = 0; var_410_float = 0; var_411_float = 0; var_412_float = 0; // 0x4ba PushV
	var_413_bool = 0; var_414_object = Obj(); var_415_string = ""; // 0x4bb PushV
	var_414_object = var_395_object; // 0x4bc Mov
	var_415_string = "health"; // 0x4bd MovS
	func_1176(var_413_bool, var_414_object, var_415_string); // 0x4be NEW_2
	var_416_bool = var_413_bool == 0; // 0x4c0 Not
	if(var_416_bool == 0) goto Label_1220; // 0x4c1 JumpB
	var_394_float = 0.0; // 0x4c2 MovF
	return 12; // 0x4c3 Return
	
Label_1220:
	var_417_bool = 0; var_418_object = Obj(); var_419_string = ""; // 0x4c4 PushV
	var_418_object = var_395_object; // 0x4c5 Mov
	var_419_string = "armor"; // 0x4c6 MovS
	func_1176(var_417_bool, var_418_object, var_419_string); // 0x4c7 NEW_2
	var_420_bool = var_417_bool == 0; // 0x4c9 Not
	if(var_420_bool == 0) goto Label_1229; // 0x4ca JumpB
	var_407_int = 0; // 0x4cb MovI
	goto Label_1232; // 0x4cc Jump
	
Label_1232:
	var_421_string = "armor_"; // 0x4d0 PushS
	var_422_string = ""; var_423_int = 0; // 0x4d1 PushV
	var_423_int = var_397_int; // 0x4d2 Mov
	func_1150(var_422_string, var_423_int); // 0x4d3 NEW_2
	var_408_string = var_421_string + var_422_string; // 0x4d5 Add2
	var_428_bool = 0; var_429_object = Obj(); var_430_string = ""; // 0x4d6 PushV
	var_429_object = var_395_object; // 0x4d7 Mov
	var_430_string = var_408_string; // 0x4d8 Mov
	func_1176(var_428_bool, var_429_object, var_430_string); // 0x4d9 NEW_2
	var_431_bool = var_428_bool == 0; // 0x4db Not
	if(var_431_bool == 0) goto Label_1247; // 0x4dc JumpB
	var_409_int = 0; // 0x4dd MovI
	goto Label_1249; // 0x4de Jump
	
Label_1249:
	var_432_float = 0; var_433_float = 0; var_434_float = 0; // 0x4e1 PushV
	var_435_int = var_407_int + var_409_int; // 0x4e2 Add
	var_436_float = 100.0; // 0x4e3 PushF
	var_433_float = var_435_int / var_435_int; // 0x4e4 Div2
	var_434_float = 1; // 0x4e5 MovI
	func_1553(var_432_float, var_433_float, var_434_float); // 0x4e6 NEW_2
	var_410_float = var_432_float; // 0x4e7 Mov
	var_438_string = "health"; // 0x4e9 PushS
	GetProperty(var_438_string, var_411_float); // 0x4ea ObjFunc
	var_439_int = 1; // 0x4ec PushI
	var_440_int = var_439_int - var_410_float; // 0x4ed Sub
	var_412_float = var_396_float * var_440_int; // 0x4ee Mult2
	var_441_string = "health"; // 0x4ef PushS
	var_442_float = 0; var_443_float = 0; var_444_float = 0; var_445_float = 0; // 0x4f0 PushV
	var_443_float = var_411_float - var_412_float; // 0x4f1 Sub2
	var_444_float = 0; // 0x4f2 MovI
	var_445_float = 1; // 0x4f3 MovI
	func_1560(var_442_float, var_443_float, var_444_float, var_445_float); // 0x4f4 NEW_2
	SetProperty(var_441_string, var_442_float); // 0x4f6 ObjFunc
	var_448_bool = 0; var_449_object = Obj(); // 0x4f8 PushV
	var_449_object = var_395_object; // 0x4f9 Mov
	func_1171(var_448_bool, var_449_object); // 0x4fa NEW_2
	if(var_448_bool == 0) goto Label_1281; // 0x4fc JumpB
	var_450_float = 0; // 0x4fd PushV
	var_450_float = -var_412_float; // 0x4fe Neg2
	func_1606(var_450_float); // 0x4ff NEW_2
	
Label_1281:
	var_394_float = var_412_float; // 0x501 Mov
	return 12; // 0x502 Return
	
Label_1247:
	GetProperty(var_408_string, var_409_int); // 0x4df ObjFunc
	
Label_1229:
	var_458_string = "armor"; // 0x4cd PushS
	GetProperty(var_458_string, var_407_int); // 0x4ce ObjFunc
}


func_575(var_0_object, var_4_float, var_314_bool)
{
	var_315_object = Obj(); var_316_bool = 0; var_317_float = 0; var_318_cvector = CVector(0,0,0); var_319_cvector = CVector(0,0,0); var_320_object = Obj(); var_321_bool = 0; var_322_float = 0; var_323_cvector = CVector(0,0,0); var_324_cvector = CVector(0,0,0); // 0x23f PushV
	GetScene(var_320_object); // 0x240 Func
	var_321_bool = 0; // 0x242 MovB
	
Label_579:
	var_325_cvector = CVector(0,0,0); var_326_object = Obj(); // 0x243 PushV
	var_326_object = var_0_object; // 0x244 MovT
	func_1164(var_326_object); // 0x245 NEW_2
	var_331_int = -var_325_cvector; // 0x247 Neg
	FindDirLength(var_322_float, var_331_int, var_322_float); // 0x248 Func
	var_332_bool = var_322_float < var_4_float; // 0x24a LT
	if(var_332_bool == 0) goto Label_589; // 0x24b JumpB
	goto Label_617; // 0x24c Jump
	
Label_617:
	var_314_bool = var_321_bool; // 0x269 Mov
	return 10; // 0x26a Return
	
Label_589:
	Face(var_0_object); // 0x24d Func
	var_333_string = "all"; // 0x24f PushS
	var_334_string = "bjump"; // 0x250 PushS
	PlayAnimation(var_333_string, var_334_string); // 0x251 Func
	GetPFPosition(var_323_cvector); // 0x253 TObjFunc
	GetPFPosition(var_324_cvector); // 0x255 Func
	WaitForAnimEnd(); // 0x257 Func
	func_663(var_324_cvector); // 0x25a NEW_2
	StopAsync(); // 0x25c Func
	var_335_cvector = CVector(0.0, 0.0, 0.0); // 0x25e PushVec
	SetSpeed(var_335_cvector); // 0x25f Func
	var_321_bool = 1; // 0x261 MovB
	var_336_bool = 0; // 0x262 PushV
	func_531(var_324_cvector, var_336_bool); // 0x263 NEW_2
	var_337_bool = var_336_bool == 0; // 0x265 Not
	if(var_337_bool == 0) goto Label_616; // 0x266 JumpB
	goto Label_617; // 0x267 Jump
	
Label_616:
	goto Label_579; // 0x268 Jump
}


func_1474()
{
	var_229_cvector = CVector(0,0,0); var_230_cvector = CVector(0,0,0); var_231_cvector = CVector(0,0,0); var_232_cvector = CVector(0,0,0); var_233_cvector = CVector(0,0,0); var_234_cvector = CVector(0,0,0); // 0x5c2 PushV
	GetPosition(var_232_cvector); // 0x5c3 ObjFunc
	GetPosition(var_233_cvector); // 0x5c5 Func
	var_234_cvector = var_232_cvector - var_233_cvector; // 0x5c7 Sub2
	var_235_float = GetByIndex(var_234_cvector, 0); // 0x5c8 PushE
	var_236_float = GetByIndex(var_234_cvector, 2); // 0x5c9 PushE
	RotateAsync(var_235_float, var_236_float); // 0x5ca Func
	return 6; // 0x5cc Return
}


func_324(var_0_object, var_343_bool, var_344_float)
{
	var_345_int = 0; var_346_bool = 0; var_347_int = 0; var_348_string = ""; var_349_int = 0; var_350_bool = 0; var_351_int = 0; var_352_string = ""; // 0x144 PushV
	func_663(var_352_string); // 0x146 NEW_2
	irand(var_349_int, var_352_string); // 0x148 Func
	var_353_int = 1; // 0x14a PushI
	var_349_int = var_349_int + var_353_int; // 0x14b Add2
	Face(var_0_object); // 0x14c Func
	var_354_bool = 1; // 0x14e PushB
	SetAttackState(var_354_bool); // 0x14f Func
	func_1654(); // 0x152 NEW_2
	var_359_string = "all"; // 0x154 PushS
	var_360_string = "attack_begin"; // 0x155 PushS
	var_361_int = var_360_string + var_349_int; // 0x156 Add
	PlayAnimation(var_359_string, var_361_int); // 0x157 Func
	WaitForAnimEnd(); // 0x159 Func
	func_631(var_351_int, var_352_string); // 0x15c NEW_2
	var_377_bool = 0; var_378_object = Obj(); // 0x15e PushV
	var_378_object = var_0_object; // 0x15f MovT
	func_1324(var_377_bool, var_378_object); // 0x160 NEW_2
	var_379_bool = var_377_bool == 0; // 0x162 Not
	if(var_379_bool == 0) goto Label_360; // 0x163 JumpB
	StopAsync(); // 0x164 Func
	var_343_bool = 0; // 0x166 MovB
	return 8; // 0x167 Return
	
Label_360:
	var_380_float = 0; var_381_int = 0; // 0x168 PushV
	var_380_float = var_344_float; // 0x169 Mov
	var_381_int = var_349_int; // 0x16a Mov
	func_285(var_352_string, var_380_float, var_381_int); // 0x16b NEW_2
	var_462_string = "all"; // 0x16d PushS
	var_463_string = "attack_middle"; // 0x16e PushS
	var_464_int = var_463_string + var_349_int; // 0x16f Add
	HasAnimation(var_350_bool, var_462_string, var_464_int); // 0x170 Func
	var_465_bool = var_350_bool; // 0x172 Push
	if(var_465_bool == 0) goto Label_441; // 0x173 JumpB
	func_1654(); // 0x175 NEW_2
	var_466_string = "all"; // 0x177 PushS
	var_467_string = "attack_middle"; // 0x178 PushS
	var_468_int = var_467_string + var_349_int; // 0x179 Add
	PlayAnimation(var_466_string, var_468_int); // 0x17a Func
	WaitForAnimEnd(); // 0x17c Func
	func_663(var_352_string); // 0x17f NEW_2
	var_469_bool = 0; var_470_object = Obj(); // 0x181 PushV
	var_470_object = var_0_object; // 0x182 MovT
	func_1324(var_469_bool, var_470_object); // 0x183 NEW_2
	var_471_bool = var_469_bool == 0; // 0x185 Not
	if(var_471_bool == 0) goto Label_395; // 0x186 JumpB
	StopAsync(); // 0x187 Func
	var_343_bool = 0; // 0x189 MovB
	return 8; // 0x18a Return
	
Label_395:
	var_472_float = 0; var_473_int = 0; // 0x18b PushV
	var_472_float = var_344_float; // 0x18c Mov
	var_473_int = var_349_int; // 0x18d Mov
	func_285(var_352_string, var_472_float, var_473_int); // 0x18e NEW_2
	var_351_int = 1; // 0x190 MovI
	
Label_401:
	var_474_string = "attack_middle"; // 0x191 PushS
	var_475_int = var_474_string + var_349_int; // 0x192 Add
	var_476_string = "_"; // 0x193 PushS
	var_477_int = var_475_int + var_476_string; // 0x194 Add
	var_352_string = var_477_int + var_351_int; // 0x195 Add2
	var_478_string = "all"; // 0x196 PushS
	HasAnimation(var_350_bool, var_478_string, var_352_string); // 0x197 Func
	var_479_bool = var_350_bool == 0; // 0x199 Not
	if(var_479_bool == 0) goto Label_412; // 0x19a JumpB
	goto Label_441; // 0x19b Jump
	
Label_441:
	var_480_bool = 0; // 0x1b9 PushB
	SetAttackState(var_480_bool); // 0x1ba Func
	var_481_string = "all"; // 0x1bc PushS
	var_482_string = "attack_end"; // 0x1bd PushS
	var_483_int = var_482_string + var_349_int; // 0x1be Add
	PlayAnimation(var_481_string, var_483_int); // 0x1bf Func
	var_484_bool = 0; // 0x1c1 PushV
	func_677(var_484_bool); // 0x1c2 NEW_2
	if(var_484_bool == 0) goto Label_459; // 0x1c4 JumpB
	var_485_bool = 0; var_486_float = 0; // 0x1c5 PushV
	var_486_float = 0.75; // 0x1c6 MovF
	func_461(var_485_bool, var_486_float); // 0x1c7 NEW_2
	StopAsync(); // 0x1c9 Func
	
Label_459:
	var_343_bool = 1; // 0x1cb MovB
	return 8; // 0x1cc Return
	
Label_412:
	func_1654(); // 0x19d NEW_2
	var_494_string = "all"; // 0x19f PushS
	PlayAnimation(var_494_string, var_352_string); // 0x1a0 Func
	WaitForAnimEnd(); // 0x1a2 Func
	func_663(var_352_string); // 0x1a5 NEW_2
	var_495_bool = 0; var_496_object = Obj(); // 0x1a7 PushV
	var_496_object = var_0_object; // 0x1a8 MovT
	func_1324(var_495_bool, var_496_object); // 0x1a9 NEW_2
	var_497_bool = var_495_bool == 0; // 0x1ab Not
	if(var_497_bool == 0) goto Label_433; // 0x1ac JumpB
	StopAsync(); // 0x1ad Func
	var_343_bool = 0; // 0x1af MovB
	return 8; // 0x1b0 Return
	
Label_433:
	var_498_float = 0; var_499_int = 0; // 0x1b1 PushV
	var_498_float = var_344_float; // 0x1b2 Mov
	var_499_int = var_349_int; // 0x1b3 Mov
	func_285(var_352_string, var_498_float, var_499_int); // 0x1b4 NEW_2
	var_500_int = 1; // 0x1b6 PushI
	var_351_int = var_351_int + var_500_int; // 0x1b7 Add2
	goto Label_401; // 0x1b8 Jump
}


func_1348(var_26_object)
{
	var_27_bool = 0; var_28_int = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_string = ""; var_34_bool = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = ""; // 0x544 PushV
	var_41_bool = var_26_object == 0; // 0x545 NullEq
	if(var_41_bool == 0) goto Label_1352; // 0x546 JumpB
	return 14; // 0x547 Return
	
Label_1352:
	IsDead(var_34_bool); // 0x548 Func
	var_42_bool = var_34_bool; // 0x54a Push
	if(var_42_bool == 0) goto Label_1357; // 0x54b JumpB
	return 14; // 0x54c Return
	
Label_1357:
	GetSecondaryAnimationType(var_35_int); // 0x54d Func
	var_43_int = 0; // 0x54f PushI
	var_44_bool = var_35_int < var_43_int; // 0x550 LT
	if(var_44_bool == 0) goto Label_1363; // 0x551 JumpB
	return 14; // 0x552 Return
	
Label_1363:
	GetPosition(var_36_cvector); // 0x553 ObjFunc
	GetPosition(var_37_cvector); // 0x555 Func
	GetDirection(var_38_cvector); // 0x557 Func
	var_39_cvector = var_37_cvector - var_36_cvector; // 0x559 Sub2
	var_45_float = GetByIndex(var_39_cvector, 0); // 0x55a PushE
	var_46_float = GetByIndex(var_38_cvector, 0); // 0x55b PushE
	var_47_float = var_45_float * var_46_float; // 0x55c Mult
	var_48_float = GetByIndex(var_39_cvector, 2); // 0x55d PushE
	var_49_float = GetByIndex(var_38_cvector, 2); // 0x55e PushE
	var_50_float = var_48_float * var_49_float; // 0x55f Mult
	var_51_int = var_47_float + var_50_float; // 0x560 Add
	var_52_int = 0; // 0x561 PushI
	var_53_bool = var_51_int >= var_52_int; // 0x562 GE
	if(var_53_bool == 0) goto Label_1382; // 0x563 JumpB
	var_40_string = "fhit"; // 0x564 MovS
	goto Label_1383; // 0x565 Jump
	
Label_1383:
	var_54_string = "hit_react"; // 0x567 PushS
	var_55_string = "1"; // 0x568 PushS
	var_56_int = var_40_string + var_55_string; // 0x569 Add
	var_57_string = "2"; // 0x56a PushS
	var_58_int = var_40_string + var_57_string; // 0x56b Add
	var_59_int = -10; // 0x56c PushI
	FadeSecondaryAnimation(var_54_string, var_56_int, var_58_int, var_59_int); // 0x56d Func
	return 14; // 0x56f Return
	
Label_1382:
	var_40_string = "bhit"; // 0x566 MovS
}


func_1606(var_450_float)
{
	var_451_object = Obj(); var_452_object = Obj(); // 0x646 PushV
	CreateFloatVector(var_452_object); // 0x647 Func
	add(var_450_float); // 0x649 ObjFunc
	var_453_int = 0; // 0x64b PushI
	var_454_bool = var_450_float < var_453_int; // 0x64c LT
	if(var_454_bool == 0) goto Label_1618; // 0x64d JumpB
	var_455_float = 0.7; // 0x64e PushF
	var_456_int = 500; // 0x64f PushI
	RumblePlay(var_455_float, var_456_int); // 0x650 Func
	
Label_1618:
	var_457_int = 15; // 0x652 PushI
	SendWorldWndMessage(var_457_int, var_452_object); // 0x653 Func
	return 2; // 0x655 Return
}


func_461(var_485_bool, var_486_float)
{
	var_487_float = 0; var_488_bool = 0; var_489_float = 0; var_490_bool = 0; // 0x1cd PushV
	rand(var_489_float); // 0x1ce Func
	var_491_bool = var_489_float < var_486_float; // 0x1d0 LT
	if(var_491_bool == 0) goto Label_481; // 0x1d1 JumpB
	
Label_466:
	IsAnimationPlaying(var_490_bool); // 0x1d2 Func
	var_492_bool = var_490_bool == 0; // 0x1d4 Not
	if(var_492_bool == 0) goto Label_471; // 0x1d5 JumpB
	goto Label_480; // 0x1d6 Jump
	
Label_480:
	goto Label_486; // 0x1e0 Jump
	
Label_486:
	var_485_bool = 0; // 0x1e6 MovB
	return 4; // 0x1e7 Return
	
Label_471:
	var_493_bool = 0; // 0x1d7 PushV
	func_559(var_493_bool); // 0x1d8 NEW_2
	if(var_493_bool == 0) goto Label_477; // 0x1da JumpB
	var_485_bool = 1; // 0x1db MovB
	return 4; // 0x1dc Return
	
Label_477:
	sync(); // 0x1dd Func
	goto Label_466; // 0x1df Jump
	
Label_481:
	WaitForAnimEnd(); // 0x1e1 Func
	func_663(var_490_bool); // 0x1e4 NEW_2
}


func_1485(var_142_object)
{
	var_143_float = 0; var_144_cvector = CVector(0,0,0); var_145_float = 0; var_146_cvector = CVector(0,0,0); // 0x5cd PushV
	GetEyesHeight(var_145_float); // 0x5ce ObjFunc
	var_146_cvector = CVector(0.0, 0.0, 0.0); // 0x5d0 MovV
	var_147_float = GetByIndex(var_146_cvector, 1); // 0x5d1 PushE
	var_147_float = var_145_float; // 0x5d2 Mov
	SetByIndex(var_146_cvector, 1) = var_147_float; // 0x5d3 PopE
	var_148_string = "head"; // 0x5d4 PushS
	LookAsync(var_142_object, var_148_string, var_146_cvector); // 0x5d5 Func
	return 4; // 0x5d7 Return
}


func_1111()
{
	return 0; // 0x458 Return
}


func_1496(var_41_string)
{
	var_42_bool = 0; var_43_int = 0; var_44_bool = 0; var_45_int = 0; var_46_bool = 0; var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_bool = 0; var_51_int = 0; var_52_bool = 0; var_53_int = 0; var_54_bool = 0; var_55_float = 0; var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); // 0x5d8 PushV
	IsExisting3DSound(var_50_bool, var_41_string); // 0x5d9 Func
	var_58_bool = var_50_bool == 0; // 0x5db Not
	if(var_58_bool == 0) goto Label_1521; // 0x5dc JumpB
	var_51_int = 0; // 0x5dd MovI
	
Label_1502:
	var_59_int = 1; // 0x5de PushI
	var_60_int = var_51_int + var_59_int; // 0x5df Add
	var_61_int = var_41_string + var_60_int; // 0x5e0 Add
	IsExisting3DSound(var_52_bool, var_61_int); // 0x5e1 Func
	var_62_bool = var_52_bool == 0; // 0x5e3 Not
	if(var_62_bool == 0) goto Label_1510; // 0x5e4 JumpB
	goto Label_1513; // 0x5e5 Jump
	
Label_1513:
	var_63_bool = var_51_int == 0; // 0x5e9 Not
	if(var_63_bool == 0) goto Label_1516; // 0x5ea JumpB
	return 16; // 0x5eb Return
	
Label_1516:
	irand(var_53_int, var_51_int); // 0x5ec Func
	var_64_int = 1; // 0x5ee PushI
	var_65_int = var_53_int + var_64_int; // 0x5ef Add
	var_41_string = var_41_string + var_65_int; // 0x5f0 Add2
	
Label_1521:
	Is3DSoundLoaded(var_54_bool, var_41_string); // 0x5f1 Func
	var_66_bool = var_54_bool; // 0x5f3 Push
	if(var_66_bool == 0) goto Label_1536; // 0x5f4 JumpB
	GetEyesHeight(var_55_float); // 0x5f5 Func
	GetDirection(var_56_cvector); // 0x5f7 Func
	var_67_int = 50; // 0x5f9 PushI
	var_57_cvector = var_56_cvector * var_67_int; // 0x5fa Mult2
	var_68_float = GetByIndex(var_57_cvector, 1); // 0x5fb PushE
	var_68_float = var_68_float + var_55_float; // 0x5fc Add2
	SetByIndex(var_57_cvector, 1) = var_68_float; // 0x5fd PopE
	PlayGlobalSound(var_41_string, var_57_cvector); // 0x5fe Func
	
Label_1536:
	return 16; // 0x600 Return
	
Label_1510:
	var_69_int = 1; // 0x5e6 PushI
	var_51_int = var_51_int + var_69_int; // 0x5e7 Add2
	goto Label_1502; // 0x5e8 Jump
}


func_1623(var_131_float)
{
	var_132_object = Obj(); var_133_object = Obj(); // 0x657 PushV
	CreateFloatVector(var_133_object); // 0x658 Func
	add(var_131_float); // 0x65a ObjFunc
	var_134_int = 16; // 0x65c PushI
	SendWorldWndMessage(var_134_int, var_133_object); // 0x65d Func
	return 2; // 0x65f Return
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
	func_1496(var_93_string); // 0x422 NEW_2
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


func_1633(var_12_bool, var_13_string, var_14_string)
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x661 PushV
	FindActor(var_16_object, var_13_string); // 0x662 Func
	var_17_bool = var_16_object == 0; // 0x664 NullEq
	if(var_17_bool == 0) goto Label_1640; // 0x665 JumpB
	var_12_bool = 0; // 0x666 MovB
	return 2; // 0x667 Return
	
Label_1640:
	Trigger(var_16_object, var_14_string); // 0x668 Func
	var_12_bool = 1; // 0x66a MovB
	return 2; // 0x66b Return
}


func_1762(var_10_object)
{
	var_11_object = Obj(); // 0x6e3 PushV
	var_11_object = var_10_object; // 0x6e4 Mov
	TaskCall(2); // 0x6e5 TaskCall
	func_939(var_11_object); // 0x6e6 NEW_2
	TaskReturn(); // 0x6e7 TaskReturn
	return 0; // 0x6e9 Return
}


func_1127(var_10_bool)
{
	var_10_bool = 1; // 0x467 MovB
	return 0; // 0x468 Return
}


func_488(var_0_object, var_282_bool, var_283_float)
{
	var_284_bool = 0; var_285_cvector = CVector(0,0,0); var_286_cvector = CVector(0,0,0); var_287_cvector = CVector(0,0,0); var_288_float = 0; var_289_bool = 0; var_290_cvector = CVector(0,0,0); var_291_cvector = CVector(0,0,0); var_292_cvector = CVector(0,0,0); var_293_float = 0; // 0x1e8 PushV
	
Label_489:
	IsAnimationPlaying(var_289_bool); // 0x1e9 Func
	var_294_bool = var_289_bool == 0; // 0x1eb Not
	if(var_294_bool == 0) goto Label_494; // 0x1ec JumpB
	goto Label_526; // 0x1ed Jump
	
Label_526:
	func_663(var_293_float); // 0x20f NEW_2
	var_282_bool = 0; // 0x211 MovB
	return 10; // 0x212 Return
	
Label_494:
	var_295_bool = 0; // 0x1ee PushV
	func_559(var_295_bool); // 0x1ef NEW_2
	if(var_295_bool == 0) goto Label_500; // 0x1f1 JumpB
	var_282_bool = 1; // 0x1f2 MovB
	return 10; // 0x1f3 Return
	
Label_500:
	var_338_bool = 0; var_339_object = Obj(); // 0x1f4 PushV
	var_339_object = var_0_object; // 0x1f5 MovT
	func_1324(var_338_bool, var_339_object); // 0x1f6 NEW_2
	var_340_bool = var_338_bool == 0; // 0x1f8 Not
	if(var_340_bool == 0) goto Label_508; // 0x1f9 JumpB
	var_282_bool = 0; // 0x1fa MovB
	return 10; // 0x1fb Return
	
Label_508:
	GetPFPosition(var_290_cvector); // 0x1fc TObjFunc
	GetPFPosition(var_291_cvector); // 0x1fe Func
	var_292_cvector = var_290_cvector - var_291_cvector; // 0x200 Sub2
	var_293_float = var_292_cvector | var_292_cvector; // 0x201 Or2
	var_341_float = var_283_float * var_283_float; // 0x202 Mult
	var_342_bool = var_293_float < var_341_float; // 0x203 LT
	if(var_342_bool == 0) goto Label_523; // 0x204 JumpB
	var_343_bool = 0; var_344_float = 0; // 0x205 PushV
	var_344_float = var_283_float; // 0x206 Mov
	func_324(var_293_float, var_343_bool, var_344_float); // 0x207 NEW_2
	var_282_bool = 1; // 0x209 MovB
	return 10; // 0x20a Return
	
Label_523:
	sync(); // 0x20b Func
	goto Label_489; // 0x20d Jump
}


func_746(var_2_int)
{
	var_10_int = 1; // 0x2ea PushI
	KillTimer(var_10_int); // 0x2eb Func
	var_11_int = var_2_int; // 0x2ed PushT
	if(var_11_int == 0) goto Label_755; // 0x2ee JumpB
	var_2_int = 0; // 0x2ef TMovB
	var_12_string = "head"; // 0x2f0 PushS
	UnlookAsync(var_12_string); // 0x2f1 Func
	
Label_755:
	func_912(var_9_object); // 0x2f4 NEW_2
	return 0; // 0x2f6 Return
}


func_250(var_1_int, var_2_int, var_4_float)
{
	var_47_bool = 0; var_48_bool = 0; var_49_cvector = CVector(0,0,0); var_50_bool = 0; var_51_bool = 0; var_52_cvector = CVector(0,0,0); // 0xfa PushV
	var_1_int = 0; // 0xfb TMovI
	
Label_252:
	var_53_string = "all"; // 0xfc PushS
	var_54_string = "attack_begin"; // 0xfd PushS
	var_55_int = 1; // 0xfe PushI
	var_56_int = var_1_int + var_55_int; // 0xff Add
	var_57_int = var_54_string + var_56_int; // 0x100 Add
	HasAnimation(var_50_bool, var_53_string, var_57_int); // 0x101 Func
	var_58_bool = var_50_bool == 0; // 0x103 Not
	if(var_58_bool == 0) goto Label_262; // 0x104 JumpB
	goto Label_265; // 0x105 Jump
	
Label_265:
	var_2_int = 0; // 0x109 TMovI
	
Label_266:
	var_59_string = "attack"; // 0x10a PushS
	var_60_int = 1; // 0x10b PushI
	var_61_int = var_2_int + var_60_int; // 0x10c Add
	var_62_int = var_59_string + var_61_int; // 0x10d Add
	IsExisting3DSound(var_51_bool, var_62_int); // 0x10e Func
	var_63_bool = var_51_bool == 0; // 0x110 Not
	if(var_63_bool == 0) goto Label_275; // 0x111 JumpB
	goto Label_278; // 0x112 Jump
	
Label_278:
	var_64_string = "all"; // 0x116 PushS
	var_65_string = "bjump"; // 0x117 PushS
	GetAnimationOffset(var_52_cvector, var_64_string, var_65_string); // 0x118 Func
	var_66_float = GetByIndex(var_52_cvector, 2); // 0x11a PushE
	var_4_float = -var_66_float; // 0x11b Neg2
	return 6; // 0x11c Return
	
Label_275:
	var_67_int = 1; // 0x113 PushI
	var_2_int = var_2_int + var_67_int; // 0x114 Add2
	goto Label_266; // 0x115 Jump
	
Label_262:
	var_68_int = 1; // 0x106 PushI
	var_1_int = var_1_int + var_68_int; // 0x107 Add2
	goto Label_252; // 0x108 Jump
}


func_620(var_0_object, var_245_bool)
{
	var_246_bool = 0; var_247_bool = 0; // 0x26c PushV
	var_248_string = "IsAttacking"; // 0x26d PushS
	var_249_int = 1; // 0x26e PushI
	var_250_bool = IsFuncExist(var_0_object, var_248_string, var_249_int); // 0x26f FuncExist
	if(var_250_bool == 0) goto Label_629; // 0x270 JumpB
	IsAttacking(var_247_bool); // 0x271 TObjFunc
	var_245_bool = var_247_bool; // 0x273 Mov
	return 2; // 0x274 Return
	
Label_629:
	var_245_bool = 0; // 0x275 MovB
	return 2; // 0x276 Return
}


func_1645(var_118_object)
{
	var_119_bool = 0; var_120_bool = 0; // 0x66d PushV
	IsPlayerActor(var_118_object, var_120_bool); // 0x66e Func
	var_121_bool = var_120_bool; // 0x670 Push
	if(var_121_bool == 0) goto Label_1653; // 0x671 JumpB
	var_122_string = "attack"; // 0x672 PushS
	PlayGlobalMusic(var_122_string); // 0x673 Func
	
Label_1653:
	return 2; // 0x675 Return
}


func_1392(var_13_object, var_14_int, var_15_float)
{
	var_16_cvector = CVector(0,0,0); var_17_object = Obj(); var_18_int = 0; var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_int = 0; var_23_int = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_object = Obj(); var_27_int = 0; var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_int = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0); // 0x570 PushV
	var_34_bool = 0; // 0x571 PushV
	var_34_bool = 0; // 0x572 MovB
	var_35_bool = 0; // 0x573 PushV
	var_35_bool = 0; // 0x574 MovB
	var_36_object = var_13_object; // 0x575 Push
	if(var_36_object == 0) goto Label_1403; // 0x576 JumpB
	var_37_int = 4; // 0x577 PushI
	var_38_bool = var_14_int != var_37_int; // 0x578 Neq
	if(var_38_bool == 0) goto Label_1403; // 0x579 JumpB
	var_35_bool = 1; // 0x57a MovB
	
Label_1403:
	if(var_35_bool == 0) goto Label_1408; // 0x57b JumpB
	var_39_int = 5; // 0x57c PushI
	var_40_bool = var_14_int != var_39_int; // 0x57d Neq
	if(var_40_bool == 0) goto Label_1408; // 0x57e JumpB
	var_34_bool = 1; // 0x57f MovB
	
Label_1408:
	if(var_34_bool == 0) goto Label_1455; // 0x580 JumpB
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); // 0x581 PushV
	var_43_cvector = CVector(0,0,0); var_44_object = Obj(); // 0x582 PushV
	var_44_object = var_13_object; // 0x583 Mov
	func_1164(var_44_object); // 0x584 NEW_2
	var_42_cvector = var_43_cvector; // 0x585 Mov
	func_1543(var_41_cvector, var_42_cvector); // 0x587 NEW_2
	var_25_cvector = var_41_cvector; // 0x588 Mov
	CreateVectorVector(var_26_object); // 0x58a Func
	var_27_int = 1; // 0x58c MovI
	
Label_1421:
	var_54_string = "hit"; // 0x58d PushS
	var_55_int = var_54_string + var_27_int; // 0x58e Add
	GetGeometryLocator(var_55_int, var_28_bool, var_29_cvector, var_30_cvector); // 0x58f Func
	var_56_bool = var_28_bool == 0; // 0x591 Not
	if(var_56_bool == 0) goto Label_1428; // 0x592 JumpB
	goto Label_1437; // 0x593 Jump
	
Label_1437:
	size(var_31_int); // 0x59d ObjFunc
	var_57_int = var_31_int; // 0x59f Push
	if(var_57_int == 0) goto Label_1454; // 0x5a0 JumpB
	irand(var_32_int, var_31_int); // 0x5a1 Func
	get(var_33_cvector, var_32_int); // 0x5a3 ObjFunc
	var_58_object = Obj(); var_59_int = 0; var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); // 0x5a5 PushV
	var_58_object = var_13_object; // 0x5a6 Mov
	var_59_int = var_14_int; // 0x5a7 Mov
	var_60_float = var_15_float; // 0x5a8 Mov
	var_61_cvector = var_33_cvector; // 0x5a9 Mov
	var_62_cvector = -var_25_cvector; // 0x5aa Neg2
	func_1460(var_60_float, var_61_cvector, var_62_cvector); // 0x5ab NEW_2
	return 18; // 0x5ad Return
	
Label_1454:
	var_26_object = 0; // 0x5ae SetNull
	
Label_1455:
	var_103_object = Obj(); // 0x5af PushV
	var_103_object = var_13_object; // 0x5b0 Mov
	func_1348(var_103_object); // 0x5b1 NEW_2
	return 18; // 0x5b3 Return
	
Label_1428:
	var_104_int = var_30_cvector | var_25_cvector; // 0x594 Or
	var_105_float = 0.70711; // 0x595 PushF
	var_106_bool = var_104_int >= var_105_float; // 0x596 GE
	if(var_106_bool == 0) goto Label_1434; // 0x597 JumpB
	add(var_29_cvector); // 0x598 ObjFunc
	
Label_1434:
	var_107_int = 1; // 0x59a PushI
	var_27_int = var_27_int + var_107_int; // 0x59b Add2
	goto Label_1421; // 0x59c Jump
}


func_1654()
{
	var_355_object = Obj(); var_356_object = Obj(); // 0x676 PushV
	GetScene(var_356_object); // 0x677 Func
	var_357_string = "battle"; // 0x679 PushS
	var_358_object = Obj(); // 0x67a PushV
	func_1537(var_358_object); // 0x67b NEW_2
	BroadcastMessage(var_357_string, var_358_object, var_356_object); // 0x67d Func
	return 2; // 0x67f Return
}


func_631(var_2_int, var_5_int)
{
	var_362_float = 0; var_363_int = 0; var_364_float = 0; var_365_int = 0; // 0x277 PushV
	var_366_bool = var_2_int == 0; // 0x278 Not
	if(var_366_bool == 0) goto Label_635; // 0x279 JumpB
	return 4; // 0x27a Return
	
Label_635:
	var_367_int = var_5_int; // 0x27b PushT
	if(var_367_int == 0) goto Label_643; // 0x27c JumpB
	var_368_int = -1; // 0x27d PushI
	var_5_int = var_5_int + var_368_int; // 0x27e Add2
	var_369_int = 0; // 0x27f PushI
	var_370_bool = var_5_int > var_369_int; // 0x280 GT
	if(var_370_bool == 0) goto Label_643; // 0x281 JumpB
	return 4; // 0x282 Return
	
Label_643:
	rand(var_364_float); // 0x283 Func
	var_371_float = 0; // 0x285 PushV
	func_681(var_371_float); // 0x286 NEW_2
	var_372_bool = var_364_float < var_371_float; // 0x288 LT
	if(var_372_bool == 0) goto Label_662; // 0x289 JumpB
	irand(var_365_int, var_364_float); // 0x28a Func
	var_373_int = 1; // 0x28c PushI
	var_365_int = var_365_int + var_373_int; // 0x28d Add2
	var_374_string = "attack"; // 0x28e PushS
	var_375_int = var_374_string + var_365_int; // 0x28f Add
	Speak(var_375_int); // 0x290 Func
	var_376_int = 0; // 0x292 PushV
	func_679(var_376_int); // 0x293 NEW_2
	var_5_int = var_376_int; // 0x294 TMov
	
Label_662:
	return 4; // 0x296 Return
}


func_890(var_0_object, var_1_int, var_17_int)
{
	var_18_int = 0; // 0x37b PushI
	var_19_bool = var_17_int != var_18_int; // 0x37c Neq
	if(var_19_bool == 0) goto Label_895; // 0x37d JumpB
	return 0; // 0x37e Return
	
Label_895:
	var_20_bool = 0; var_21_object = Obj(); // 0x37f PushV
	var_21_object = var_1_int; // 0x380 MovT
	func_928(var_20_bool, var_21_object); // 0x381 NEW_2
	var_56_bool = var_20_bool == 0; // 0x383 Not
	if(var_56_bool == 0) goto Label_902; // 0x384 JumpB
	var_0_object = 1; // 0x385 TMovB
	
Label_902:
	var_57_int = 0; // 0x386 PushI
	KillTimer(var_57_int); // 0x387 Func
	Stop(); // 0x389 Func
	return 0; // 0x38b Return
}


func_1150(var_422_string, var_423_int)
{
	var_424_int = 2; // 0x47f PushI
	var_425_bool = var_423_int == var_424_int; // 0x480 Eq
	if(var_425_bool == 0) goto Label_1157; // 0x481 JumpB
	var_422_string = "fire"; // 0x482 MovS
	return 0; // 0x483 Return
	
Label_1157:
	var_426_int = 1; // 0x485 PushI
	var_427_bool = var_423_int == var_426_int; // 0x486 Eq
	if(var_427_bool == 0) goto Label_1162; // 0x487 JumpB
	var_422_string = "bullet"; // 0x488 MovS
	return 0; // 0x489 Return
	
Label_1162:
	var_422_string = "phys"; // 0x48a MovS
	return 0; // 0x48b Return
}


