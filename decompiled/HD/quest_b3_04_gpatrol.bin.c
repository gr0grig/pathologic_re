task_0_event_3(var_0_cvector, var_1_cvector, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool)
{
	var_12_bool = 0; var_13_bool = 0; // 0x1 PushV
	IsPlayerActor(var_11_bool, var_13_bool); // 0x2 Func
	var_14_bool = var_13_bool; // 0x4 Push
	if(var_14_bool == 0) goto Label_14; // 0x5 JumpB
	func_127(); // 0x7 NEW_2
	TaskCall(1); // 0xa TaskCall
	func_133(); // 0xb NEW_2
	TaskReturn(); // 0xc TaskReturn
	
Label_14:
	return 2; // 0xe Return
}


task_0_event_1(var_0_cvector, var_1_cvector, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool)
{
	var_12_bool = 0; var_13_bool = 0; // 0xf PushV
	IsPlayerActor(var_11_bool, var_13_bool); // 0x10 Func
	var_14_bool = var_13_bool; // 0x12 Push
	if(var_14_bool == 0) goto Label_28; // 0x13 JumpB
	func_127(); // 0x15 NEW_2
	TaskCall(1); // 0x18 TaskCall
	func_133(); // 0x19 NEW_2
	TaskReturn(); // 0x1a TaskReturn
	
Label_28:
	return 2; // 0x1c Return
}


task_0_event_17(var_0_cvector, var_1_cvector, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool)
{
	var_12_bool = 0; var_13_bool = 0; // 0x1d PushV
	IsPlayerActor(var_11_bool, var_13_bool); // 0x1e Func
	var_14_bool = var_13_bool; // 0x20 Push
	if(var_14_bool == 0) goto Label_42; // 0x21 JumpB
	func_127(); // 0x23 NEW_2
	TaskCall(1); // 0x26 TaskCall
	func_133(); // 0x27 NEW_2
	TaskReturn(); // 0x28 TaskReturn
	
Label_42:
	return 2; // 0x2a Return
}


task_2_event_7(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_int)
{
	var_12_int = 1; // 0x362 PushI
	var_13_bool = var_11_int == var_12_int; // 0x363 Eq
	if(var_13_bool == 0) goto Label_874; // 0x364 JumpB
	var_14_object = Obj(); // 0x365 PushV
	var_14_object = var_1_cvector; // 0x366 MovT
	func_1638(var_14_object); // 0x367 NEW_2
	goto Label_878; // 0x369 Jump
	
Label_878:
	return 0; // 0x36e Return
	
Label_874:
	var_19_int = 0; // 0x36a PushV
	var_19_int = var_11_int; // 0x36b Mov
	func_1023(var_10_bool, var_11_int, var_19_int); // 0x36c NEW_2
}


task_2_event_1(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object)
{
	var_12_bool = 0; // 0x37d PushV
	var_12_bool = 0; // 0x37e MovB
	var_13_bool = var_1_cvector == var_11_object; // 0x37f Eq
	if(var_13_bool == 0) goto Label_900; // 0x380 JumpB
	var_14_bool = var_2_object == 0; // 0x381 Not
	if(var_14_bool == 0) goto Label_900; // 0x382 JumpB
	var_12_bool = 1; // 0x383 MovB
	
Label_900:
	if(var_12_bool == 0) goto Label_906; // 0x384 JumpB
	var_2_object = 1; // 0x385 TMovB
	var_15_object = Obj(); // 0x386 PushV
	var_15_object = var_11_object; // 0x387 Mov
	func_1531(var_15_object); // 0x388 NEW_2
	
Label_906:
	return 0; // 0x38a Return
}


task_2_event_2(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object)
{
	var_12_bool = 0; // 0x38c PushV
	var_12_bool = 0; // 0x38d MovB
	var_13_bool = var_1_cvector == var_11_object; // 0x38e Eq
	if(var_13_bool == 0) goto Label_915; // 0x38f JumpB
	var_14_object = var_2_object; // 0x390 PushT
	if(var_14_object == 0) goto Label_915; // 0x391 JumpB
	var_12_bool = 1; // 0x392 MovB
	
Label_915:
	if(var_12_bool == 0) goto Label_920; // 0x393 JumpB
	var_2_object = 0; // 0x394 TMovB
	var_15_string = "head"; // 0x395 PushS
	UnlookAsync(var_15_string); // 0x396 Func
	
Label_920:
	return 0; // 0x398 Return
}


task_2_event_10(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object)
{
	RequestClearPath(var_11_object); // 0x412 Func
	return 0; // 0x414 Return
}


task_2_event_41(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object)
{
	func_879(var_11_object); // 0x41e NEW_2
	var_16_object = Obj(); // 0x420 PushV
	var_16_object = var_11_object; // 0x421 Mov
	func_1783(); // 0x422 NEW_2
	return 0; // 0x424 Return
}


task_3_event_0(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object)
{
	var_12_bool = 0; var_13_bool = 0; // 0x43d PushV
	IsOverrideActive(var_13_bool); // 0x43e Func
	var_14_bool = var_13_bool == 0; // 0x440 Not
	if(var_14_bool == 0) goto Label_1094; // 0x441 JumpB
	var_15_object = Obj(); // 0x442 PushV
	var_15_object = var_11_object; // 0x443 Mov
	func_1664(var_15_object); // 0x444 NEW_2
	
Label_1094:
	return 2; // 0x446 Return
}


task_3_event_22(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_float, var_14_float)
{
	return 0; // 0x4bd Return
}


task_3_event_16(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_string)
{
	return 0; // 0x4bf Return
}


task_3_event_41(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object)
{
	return 0; // 0x4c1 Return
}


event_22(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_float, var_14_float)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0; // 0x6d9 PushV
	var_15_object = var_11_object; // 0x6da Mov
	var_16_int = var_12_int; // 0x6db Mov
	var_17_float = var_13_float; // 0x6dc Mov
	func_1438(var_15_object, var_16_int, var_17_float); // 0x6dd NEW_2
	return 0; // 0x6df Return
}


event_43(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_float, var_14_float, var_15_cvector, var_16_cvector)
{
	var_17_object = Obj(); var_18_int = 0; var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); // 0x6e1 PushV
	var_17_object = var_11_object; // 0x6e2 Mov
	var_18_int = var_12_int; // 0x6e3 Mov
	var_19_float = var_13_float; // 0x6e4 Mov
	var_20_cvector = var_15_cvector; // 0x6e5 Mov
	var_21_cvector = var_16_cvector; // 0x6e6 Mov
	func_1506(var_19_float, var_20_cvector, var_21_cvector); // 0x6e7 NEW_2
	return 0; // 0x6e9 Return
}


event_16(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_string)
{
	var_13_float = 0; var_14_float = 0; // 0x6ea PushV
	var_15_string = "health"; // 0x6eb PushS
	var_16_bool = var_12_string == var_15_string; // 0x6ec Eq
	if(var_16_bool == 0) goto Label_1782; // 0x6ed JumpB
	var_17_string = "health"; // 0x6ee PushS
	GetProperty(var_17_string, var_14_float); // 0x6ef Func
	var_18_int = 0; // 0x6f1 PushI
	var_19_bool = var_14_float <= var_18_int; // 0x6f2 LE
	if(var_19_bool == 0) goto Label_1782; // 0x6f3 JumpB
	SignalDeath(var_11_object); // 0x6f4 Func
	
Label_1782:
	return 2; // 0x6f6 Return
}


event_41(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object)
{
	var_12_object = Obj(); // 0x6f8 PushV
	var_12_object = var_11_object; // 0x6f9 Mov
	func_1728(var_12_object); // 0x6fa NEW_2
	return 0; // 0x6fc Return
}


main(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	var_11_int = 0; var_12_bool = 0; var_13_cvector = CVector(0,0,0); var_14_object = Obj(); var_15_int = 0; var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_object = Obj(); // 0x2b PushV
	GetPFPosition(var_18_object); // 0x2c Func
	GetDirection(var_0_cvector); // 0x2e Func
	
Label_48:
	func_132(); // 0x31 NEW_2
	var_19_int = 10; // 0x33 PushI
	irand(var_15_int, var_19_int); // 0x34 Func
	var_20_int = 5; // 0x36 PushI
	var_21_int = var_15_int + var_20_int; // 0x37 Add
	Sleep(var_21_int, var_16_bool); // 0x38 Func
	var_22_bool = var_16_bool; // 0x3a Push
	if(var_22_bool == 0) goto Label_64; // 0x3b JumpB
	func_0(); // 0x3d NEW_2
	goto Label_125; // 0x3f Jump
	
Label_125:
	goto Label_48; // 0x7d Jump
	
Label_64:
	func_132(); // 0x41 NEW_2
	GetPFPosition(var_17_cvector); // 0x43 Func
	var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); // 0x45 PushV
	var_24_cvector = var_1_cvector; // 0x46 MovT
	var_25_cvector = var_17_cvector; // 0x47 Mov
	func_1599(var_23_float, var_24_cvector, var_25_cvector); // 0x48 NEW_2
	var_28_int = 40000; // 0x4a PushI
	var_29_bool = var_23_float > var_28_int; // 0x4b GT
	if(var_29_bool == 0) goto Label_111; // 0x4c JumpB
	FindPathTo(var_18_object, var_18_object); // 0x4d Func
	var_30_bool = var_18_object != 0; // 0x4f NullNeq
	if(var_30_bool == 0) goto Label_106; // 0x50 JumpB
	RotatePath(var_18_object, var_16_bool); // 0x51 Func
	var_31_bool = var_16_bool == 0; // 0x53 Not
	if(var_31_bool == 0) goto Label_86; // 0x54 JumpB
	goto Label_124; // 0x55 Jump
	
Label_124:
	goto Label_64; // 0x7c Jump
	
Label_86:
	var_32_bool = 0; // 0x56 PushB
	FollowPath(var_18_object, var_32_bool, var_16_bool); // 0x57 Func
	var_33_bool = var_16_bool == 0; // 0x59 Not
	if(var_33_bool == 0) goto Label_92; // 0x5a JumpB
	goto Label_124; // 0x5b Jump
	
Label_92:
	var_34_float = GetByIndex(var_0_cvector, 0); // 0x5c PushE
	var_35_float = GetByIndex(var_0_cvector, 2); // 0x5d PushE
	Rotate(var_34_float, var_35_float, var_16_bool); // 0x5e Func
	var_36_bool = var_16_bool == 0; // 0x60 Not
	if(var_36_bool == 0) goto Label_99; // 0x61 JumpB
	goto Label_124; // 0x62 Jump
	
Label_99:
	WaitForAnimEnd(var_16_bool); // 0x63 Func
	var_37_bool = var_16_bool == 0; // 0x65 Not
	if(var_37_bool == 0) goto Label_104; // 0x66 JumpB
	goto Label_124; // 0x67 Jump
	
Label_104:
	goto Label_125; // 0x68 Jump
	
Label_106:
	var_38_int = 1; // 0x6a PushI
	Sleep(var_38_int); // 0x6b Func
	var_18_object = 0; // 0x6d SetNull
	goto Label_124; // 0x6e Jump
	
Label_111:
	var_39_float = GetByIndex(var_0_cvector, 0); // 0x6f PushE
	var_40_float = GetByIndex(var_0_cvector, 2); // 0x70 PushE
	Rotate(var_39_float, var_40_float, var_16_bool); // 0x71 Func
	var_41_bool = var_16_bool == 0; // 0x73 Not
	if(var_41_bool == 0) goto Label_118; // 0x74 JumpB
	goto Label_124; // 0x75 Jump
	
Label_118:
	WaitForAnimEnd(var_16_bool); // 0x76 Func
	var_42_bool = var_16_bool == 0; // 0x78 Not
	if(var_42_bool == 0) goto Label_123; // 0x79 JumpB
	goto Label_124; // 0x7a Jump
	
Label_123:
	goto Label_125; // 0x7b Jump
}


func_0()
{
	return 0; // 0x0 Return
}


func_1664(var_15_object)
{
	var_16_int = 0; // 0x681 PushV
	func_1658(var_16_int); // 0x682 NEW_2
	var_20_int = 1; // 0x684 PushI
	var_21_bool = var_16_int == var_20_int; // 0x685 Eq
	if(var_21_bool == 0) goto Label_1674; // 0x686 JumpB
	WorkWithCorpse(var_15_object); // 0x687 Func
	goto Label_1676; // 0x689 Jump
	
Label_1676:
	return 0; // 0x68c Return
	
Label_1674:
	Barter(var_15_object); // 0x68a Func
}


func_132()
{
	return 0; // 0x84 Return
}


func_133()
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x85 PushV
	var_23_string = "player"; // 0x86 PushS
	FindActor(var_22_object, var_23_string); // 0x87 Func
	var_24_bool = var_22_object == 0; // 0x89 Not
	if(var_24_bool == 0) goto Label_140; // 0x8a JumpB
	return 2; // 0x8b Return
	
Label_140:
	var_25_object = Obj(); var_26_bool = 0; var_27_float = 0; // 0x8c PushV
	var_25_object = var_22_object; // 0x8d Mov
	var_26_bool = 1; // 0x8e MovB
	var_27_float = 180.0; // 0x8f MovF
	func_154(var_18_bool, var_19_float, var_20_int, var_21_object, var_22_object, var_25_object, var_26_bool, var_27_float); // 0x90 NEW_2
	return 2; // 0x92 Return
}


func_1542(var_70_string)
{
	var_71_bool = 0; var_72_int = 0; var_73_bool = 0; var_74_int = 0; var_75_bool = 0; var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_bool = 0; var_80_int = 0; var_81_bool = 0; var_82_int = 0; var_83_bool = 0; var_84_float = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); // 0x606 PushV
	IsExisting3DSound(var_79_bool, var_70_string); // 0x607 Func
	var_87_bool = var_79_bool == 0; // 0x609 Not
	if(var_87_bool == 0) goto Label_1567; // 0x60a JumpB
	var_80_int = 0; // 0x60b MovI
	
Label_1548:
	var_88_int = 1; // 0x60c PushI
	var_89_int = var_80_int + var_88_int; // 0x60d Add
	var_90_int = var_70_string + var_89_int; // 0x60e Add
	IsExisting3DSound(var_81_bool, var_90_int); // 0x60f Func
	var_91_bool = var_81_bool == 0; // 0x611 Not
	if(var_91_bool == 0) goto Label_1556; // 0x612 JumpB
	goto Label_1559; // 0x613 Jump
	
Label_1559:
	var_92_bool = var_80_int == 0; // 0x617 Not
	if(var_92_bool == 0) goto Label_1562; // 0x618 JumpB
	return 16; // 0x619 Return
	
Label_1562:
	irand(var_82_int, var_80_int); // 0x61a Func
	var_93_int = 1; // 0x61c PushI
	var_94_int = var_82_int + var_93_int; // 0x61d Add
	var_70_string = var_70_string + var_94_int; // 0x61e Add2
	
Label_1567:
	Is3DSoundLoaded(var_83_bool, var_70_string); // 0x61f Func
	var_95_bool = var_83_bool; // 0x621 Push
	if(var_95_bool == 0) goto Label_1582; // 0x622 JumpB
	GetEyesHeight(var_84_float); // 0x623 Func
	GetDirection(var_85_cvector); // 0x625 Func
	var_96_int = 50; // 0x627 PushI
	var_86_cvector = var_85_cvector * var_96_int; // 0x628 Mult2
	var_97_float = GetByIndex(var_86_cvector, 1); // 0x629 PushE
	var_97_float = var_97_float + var_84_float; // 0x62a Add2
	SetByIndex(var_86_cvector, 1) = var_97_float; // 0x62b PopE
	PlayGlobalSound(var_70_string, var_86_cvector); // 0x62c Func
	
Label_1582:
	return 16; // 0x62e Return
	
Label_1556:
	var_98_int = 1; // 0x614 PushI
	var_80_int = var_80_int + var_98_int; // 0x615 Add2
	goto Label_1548; // 0x616 Jump
}


func_764(var_2_object, var_5_int)
{
	var_365_float = 0; var_366_int = 0; var_367_float = 0; var_368_int = 0; // 0x2fc PushV
	var_369_bool = var_2_object == 0; // 0x2fd Not
	if(var_369_bool == 0) goto Label_768; // 0x2fe JumpB
	return 4; // 0x2ff Return
	
Label_768:
	var_370_int = var_5_int; // 0x300 PushT
	if(var_370_int == 0) goto Label_776; // 0x301 JumpB
	var_371_int = -1; // 0x302 PushI
	var_5_int = var_5_int + var_371_int; // 0x303 Add2
	var_372_int = 0; // 0x304 PushI
	var_373_bool = var_5_int > var_372_int; // 0x305 GT
	if(var_373_bool == 0) goto Label_776; // 0x306 JumpB
	return 4; // 0x307 Return
	
Label_776:
	rand(var_367_float); // 0x308 Func
	var_374_float = 0; // 0x30a PushV
	func_814(var_374_float); // 0x30b NEW_2
	var_375_bool = var_367_float < var_374_float; // 0x30d LT
	if(var_375_bool == 0) goto Label_795; // 0x30e JumpB
	irand(var_368_int, var_367_float); // 0x30f Func
	var_376_int = 1; // 0x311 PushI
	var_368_int = var_368_int + var_376_int; // 0x312 Add2
	var_377_string = "attack"; // 0x313 PushS
	var_378_int = var_377_string + var_368_int; // 0x314 Add
	Speak(var_378_int); // 0x315 Func
	var_379_int = 0; // 0x317 PushV
	func_812(var_379_int); // 0x318 NEW_2
	var_5_int = var_379_int; // 0x319 TMov
	
Label_795:
	return 4; // 0x31b Return
}


func_1677(var_27_string)
{
	var_28_object = Obj(); var_29_int = 0; var_30_bool = 0; var_31_object = Obj(); var_32_int = 0; var_33_bool = 0; // 0x68d PushV
	CreateInvItem(var_31_object); // 0x68e Func
	SetItemName(var_27_string); // 0x690 ObjFunc
	var_34_string = "Organ"; // 0x692 PushS
	var_35_int = 1; // 0x693 PushI
	SetProperty(var_34_string, var_35_int); // 0x694 ObjFunc
	GetItemID(var_32_int); // 0x696 ObjFunc
	var_36_int = 0; // 0x698 PushI
	var_37_int = 1; // 0x699 PushI
	AddItem(var_33_bool, var_31_object, var_36_int, var_37_int); // 0x69a Func
	return 6; // 0x69c Return
}


func_148(var_394_float)
{
	var_394_float = 0.15; // 0x95 MovF
	return 0; // 0x96 Return
}


func_1045(var_0_cvector)
{
	var_0_cvector = 1; // 0x415 TMovB
	var_15_int = 0; // 0x416 PushI
	KillTimer(var_15_int); // 0x417 Func
	Stop(); // 0x419 Func
	return 0; // 0x41b Return
}


func_151(var_401_int)
{
	var_401_int = 0; // 0x98 MovI
	return 0; // 0x99 Return
}


func_664(var_0_cvector, var_300_bool)
{
	var_301_cvector = CVector(0,0,0); var_302_cvector = CVector(0,0,0); var_303_cvector = CVector(0,0,0); var_304_float = 0; var_305_float = 0; var_306_cvector = CVector(0,0,0); var_307_cvector = CVector(0,0,0); var_308_cvector = CVector(0,0,0); var_309_float = 0; var_310_float = 0; // 0x298 PushV
	var_311_bool = 0; var_312_object = Obj(); // 0x299 PushV
	var_312_object = var_0_cvector; // 0x29a MovT
	func_1370(var_311_bool, var_312_object); // 0x29b NEW_2
	var_313_bool = var_311_bool == 0; // 0x29d Not
	if(var_313_bool == 0) goto Label_673; // 0x29e JumpB
	var_300_bool = 0; // 0x29f MovB
	return 10; // 0x2a0 Return
	
Label_673:
	var_314_bool = 0; // 0x2a1 PushV
	func_753(var_310_float, var_314_bool); // 0x2a2 NEW_2
	if(var_314_bool == 0) goto Label_690; // 0x2a4 JumpB
	GetPFPosition(var_306_cvector); // 0x2a5 TObjFunc
	GetPFPosition(var_307_cvector); // 0x2a7 Func
	var_308_cvector = var_306_cvector - var_307_cvector; // 0x2a9 Sub2
	var_309_float = var_308_cvector | var_308_cvector; // 0x2aa Or2
	GetAttackDistance(var_310_float); // 0x2ab TObjFunc
	var_315_int = 50; // 0x2ad PushI
	var_310_float = var_310_float + var_315_int; // 0x2ae Add2
	var_316_float = var_310_float * var_310_float; // 0x2af Mult
	var_300_bool = var_309_float <= var_316_float; // 0x2b0 LE2
	return 10; // 0x2b1 Return
	
Label_690:
	var_300_bool = 0; // 0x2b2 MovB
	return 10; // 0x2b3 Return
}


func_921(var_0_cvector, var_1_cvector, var_157_bool, var_158_object, var_159_float, var_160_float, var_161_bool, var_162_bool)
{
	var_163_bool = 0; var_164_bool = 0; var_165_object = Obj(); var_166_cvector = CVector(0,0,0); var_167_cvector = CVector(0,0,0); var_168_cvector = CVector(0,0,0); var_169_float = 0; var_170_object = Obj(); var_171_bool = 0; var_172_bool = 0; var_173_object = Obj(); var_174_cvector = CVector(0,0,0); var_175_cvector = CVector(0,0,0); var_176_cvector = CVector(0,0,0); var_177_float = 0; var_178_object = Obj(); // 0x399 PushV
	var_0_cvector = 0; // 0x39a TMovB
	var_1_cvector = var_158_object; // 0x39b TMov
	var_172_bool = var_162_bool; // 0x39c Mov
	
Label_925:
	var_179_bool = 0; var_180_object = Obj(); // 0x39d PushV
	var_180_object = var_158_object; // 0x39e Mov
	func_1061(var_179_bool, var_180_object); // 0x39f NEW_2
	var_183_bool = var_179_bool == 0; // 0x3a1 Not
	if(var_183_bool == 0) goto Label_933; // 0x3a2 JumpB
	var_157_bool = 0; // 0x3a3 MovB
	return 16; // 0x3a4 Return
	
Label_933:
	GetPosition(var_174_cvector); // 0x3a5 ObjFunc
	GetPosition(var_175_cvector); // 0x3a7 Func
	var_176_cvector = var_174_cvector - var_175_cvector; // 0x3a9 Sub2
	var_177_float = var_176_cvector | var_176_cvector; // 0x3aa Or2
	var_184_bool = 0; // 0x3ab PushV
	var_184_bool = 0; // 0x3ac MovB
	var_185_int = 0; // 0x3ad PushI
	var_186_bool = var_160_float > var_185_int; // 0x3ae GT
	if(var_186_bool == 0) goto Label_948; // 0x3af JumpB
	var_187_float = var_160_float * var_160_float; // 0x3b0 Mult
	var_188_bool = var_177_float > var_187_float; // 0x3b1 GT
	if(var_188_bool == 0) goto Label_948; // 0x3b2 JumpB
	var_184_bool = 1; // 0x3b3 MovB
	
Label_948:
	if(var_184_bool == 0) goto Label_953; // 0x3b4 JumpB
	Stop(); // 0x3b5 Func
	var_157_bool = 0; // 0x3b7 MovB
	return 16; // 0x3b8 Return
	
Label_953:
	var_189_float = var_159_float * var_159_float; // 0x3b9 Mult
	var_190_bool = var_177_float > var_189_float; // 0x3ba GT
	if(var_190_bool == 0) goto Label_1015; // 0x3bb JumpB
	GetPFPosition(var_174_cvector); // 0x3bc ObjFunc
	FindPathTo(var_178_object, var_174_cvector); // 0x3be Func
	var_191_bool = var_178_object != 0; // 0x3c0 NullNeq
	if(var_191_bool == 0) goto Label_964; // 0x3c1 JumpB
	var_173_object = var_178_object; // 0x3c2 Mov
	var_178_object = 0; // 0x3c3 SetNull
	
Label_964:
	var_192_bool = var_173_object != 0; // 0x3c4 NullNeq
	if(var_192_bool == 0) goto Label_997; // 0x3c5 JumpB
	var_193_bool = var_172_bool; // 0x3c6 Push
	if(var_193_bool == 0) goto Label_974; // 0x3c7 JumpB
	var_172_bool = 0; // 0x3c8 MovB
	RotatePath(var_173_object, var_171_bool); // 0x3c9 Func
	var_194_bool = var_171_bool == 0; // 0x3cb Not
	if(var_194_bool == 0) goto Label_974; // 0x3cc JumpB
	goto Label_1021; // 0x3cd Jump
	
Label_1021:
	var_157_bool = !var_0_cvector; // 0x3fd Not2
	return 16; // 0x3fe Return
	
Label_974:
	var_195_int = 0; // 0x3ce PushI
	var_196_float = 0.3; // 0x3cf PushF
	SetTimer(var_195_int, var_196_float); // 0x3d0 Func
	var_197_string = ""; // 0x3d2 PushV
	func_1068(var_197_string); // 0x3d3 NEW_2
	var_198_string = ""; // 0x3d5 PushV
	func_1070(var_198_string); // 0x3d6 NEW_2
	FollowPath(var_173_object, var_161_bool, var_171_bool, var_197_string, var_198_string); // 0x3d8 Func
	var_199_bool = var_171_bool == 0; // 0x3da Not
	if(var_199_bool == 0) goto Label_995; // 0x3db JumpB
	var_200_cvector = var_0_cvector; // 0x3dc PushT
	if(var_200_cvector == 0) goto Label_993; // 0x3dd JumpB
	var_173_object = 0; // 0x3de SetNull
	goto Label_1021; // 0x3df Jump
	
Label_993:
	goto Label_1020; // 0x3e1 Jump
	
Label_1020:
	goto Label_925; // 0x3fc Jump
	
Label_995:
	var_173_object = 0; // 0x3e3 SetNull
	goto Label_1013; // 0x3e4 Jump
	
Label_1013:
	var_178_object = 0; // 0x3f5 SetNull
	goto Label_1019; // 0x3f6 Jump
	
Label_1019:
	var_173_object = 0; // 0x3fb SetNull
	
Label_997:
	var_201_int = 0; // 0x3e5 PushI
	KillTimer(var_201_int); // 0x3e6 Func
	var_202_float = 0.5; // 0x3e8 PushF
	Sleep(var_202_float, var_171_bool); // 0x3e9 Func
	var_203_bool = var_171_bool == 0; // 0x3eb Not
	if(var_203_bool == 0) goto Label_1009; // 0x3ec JumpB
	var_204_cvector = var_0_cvector; // 0x3ed PushT
	if(var_204_cvector == 0) goto Label_1009; // 0x3ee JumpB
	var_173_object = 0; // 0x3ef SetNull
	goto Label_1021; // 0x3f0 Jump
	
Label_1009:
	var_205_int = 0; // 0x3f1 PushI
	var_206_float = 0.3; // 0x3f2 PushF
	SetTimer(var_205_int, var_206_float); // 0x3f3 Func
	
Label_1015:
	var_207_int = 0; // 0x3f7 PushI
	KillTimer(var_207_int); // 0x3f8 Func
	goto Label_1021; // 0x3fa Jump
}


func_154(var_0_cvector, var_3_object, var_5_int, var_25_object, var_26_bool, var_27_float, var_134_bool, var_226_bool)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_bool = 0; var_32_bool = 0; var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_float = 0; var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_float = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_bool = 0; var_43_bool = 0; var_44_float = 0; var_45_cvector = CVector(0,0,0); var_46_float = 0; var_47_cvector = CVector(0,0,0); var_48_bool = 0; var_49_float = 0; // 0x9a PushV
	func_383(var_47_cvector, var_48_bool, var_49_float); // 0x9c NEW_2
	var_5_int = 0; // 0x9e TMovI
	var_72_string = "@GetAttackDistance"; // 0x9f PushS
	var_73_int = 1; // 0xa0 PushI
	var_74_bool = IsFuncExist(var_25_object, var_72_string, var_73_int); // 0xa1 FuncExist
	if(var_74_bool == 0) goto Label_168; // 0xa2 JumpB
	GetAttackDistance(var_39_float); // 0xa3 ObjFunc
	var_75_int = 50; // 0xa5 PushI
	var_39_float = var_39_float + var_75_int; // 0xa6 Add2
	goto Label_169; // 0xa7 Jump
	
Label_169:
	var_76_int = 150; // 0xa9 PushI
	var_77_bool = var_39_float >= var_76_int; // 0xaa GE
	if(var_77_bool == 0) goto Label_173; // 0xab JumpB
	var_39_float = 150; // 0xac MovI
	
Label_173:
	var_3_object = 0; // 0xad TMovB
	var_0_cvector = var_25_object; // 0xae TMov
	IsPlayerActor(var_0_cvector, var_42_bool); // 0xaf Func
	var_78_bool = var_42_bool; // 0xb1 Push
	if(var_78_bool == 0) goto Label_187; // 0xb2 JumpB
	var_79_string = "attack"; // 0xb3 PushS
	PlayGlobalMusic(var_79_string); // 0xb4 Func
	var_80_object = Obj(); // 0xb6 PushV
	func_1583(var_80_object); // 0xb7 NEW_2
	SendPlayerEnemy(var_25_object, var_80_object); // 0xb9 Func
	
Label_187:
	var_83_bool = var_26_bool; // 0xbb Push
	if(var_83_bool == 0) goto Label_191; // 0xbc JumpB
	var_43_bool = 0; // 0xbd MovB
	goto Label_192; // 0xbe Jump
	
Label_192:
	var_84_float = 400.0; // 0xc0 PushF
	var_44_float = var_84_float + var_39_float; // 0xc1 Add2
	
Label_194:
	var_85_bool = 0; // 0xc2 PushV
	var_85_bool = 0; // 0xc3 MovB
	var_86_bool = 0; var_87_object = Obj(); // 0xc4 PushV
	var_87_object = var_0_cvector; // 0xc5 MovT
	func_1370(var_86_bool, var_87_object); // 0xc6 NEW_2
	if(var_86_bool == 0) goto Label_204; // 0xc8 JumpB
	var_120_bool = var_3_object == 0; // 0xc9 Not
	if(var_120_bool == 0) goto Label_204; // 0xca JumpB
	var_85_bool = 1; // 0xcb MovB
	
Label_204:
	if(var_85_bool == 0) goto Label_366; // 0xcc JumpB
	func_796(var_49_float); // 0xce NEW_2
	GetPFPosition(var_40_cvector); // 0xd0 TObjFunc
	GetPFPosition(var_41_cvector); // 0xd2 Func
	var_45_cvector = var_40_cvector - var_41_cvector; // 0xd4 Sub2
	var_46_float = var_45_cvector | var_45_cvector; // 0xd5 Or2
	var_126_float = var_44_float * var_44_float; // 0xd6 Mult
	var_127_bool = var_46_float >= var_126_float; // 0xd7 GE
	if(var_127_bool == 0) goto Label_232; // 0xd8 JumpB
	var_128_bool = 0; var_129_object = Obj(); var_130_float = 0; var_131_float = 0; var_132_bool = 0; var_133_bool = 0; // 0xd9 PushV
	var_129_object = var_0_cvector; // 0xda MovT
	var_130_float = var_39_float; // 0xdb Mov
	var_131_float = 10000.0; // 0xdc MovF
	var_132_bool = 1; // 0xdd MovB
	var_133_bool = 0; // 0xde MovB
	TaskCall(2); // 0xdf TaskCall
	func_816(var_136_bool, var_128_bool, var_129_object, var_130_float, var_131_float, var_132_bool, var_133_bool); // 0xe0 NEW_2
	TaskReturn(); // 0xe1 TaskReturn
	var_211_bool = var_134_bool == 0; // 0xe3 Not
	if(var_211_bool == 0) goto Label_230; // 0xe4 JumpB
	goto Label_366; // 0xe5 Jump
	
Label_366:
	WaitForAnimEnd(); // 0x16e Func
	var_212_object = var_3_object; // 0x170 PushT
	if(var_212_object == 0) goto Label_371; // 0x171 JumpB
	return 22; // 0x172 Return
	
Label_371:
	var_213_string = "all"; // 0x173 PushS
	var_214_string = "attack_off"; // 0x174 PushS
	PlayAnimation(var_213_string, var_214_string); // 0x175 Func
	WaitForAnimEnd(); // 0x177 Func
	var_215_bool = var_42_bool; // 0x179 Push
	if(var_215_bool == 0) goto Label_382; // 0x17a JumpB
	var_216_float = 2.0; // 0x17b PushF
	Sleep(var_216_float); // 0x17c Func
	
Label_382:
	return 22; // 0x17e Return
	
Label_230:
	var_43_bool = 0; // 0xe6 MovB
	goto Label_365; // 0xe7 Jump
	
Label_365:
	goto Label_194; // 0x16d Jump
	
Label_232:
	var_217_float = var_27_float * var_27_float; // 0xe8 Mult
	var_218_bool = var_46_float >= var_217_float; // 0xe9 GE
	if(var_218_bool == 0) goto Label_357; // 0xea JumpB
	GetPFPosition(var_47_cvector); // 0xeb TObjFunc
	CanReachByPF(var_48_bool, var_47_cvector); // 0xed Func
	var_219_bool = var_48_bool == 0; // 0xef Not
	if(var_219_bool == 0) goto Label_256; // 0xf0 JumpB
	var_220_bool = 0; var_221_object = Obj(); var_222_float = 0; var_223_float = 0; var_224_bool = 0; var_225_bool = 0; // 0xf1 PushV
	var_221_object = var_0_cvector; // 0xf2 MovT
	var_222_float = var_39_float; // 0xf3 Mov
	var_223_float = 10000.0; // 0xf4 MovF
	var_224_bool = 1; // 0xf5 MovB
	var_225_bool = 0; // 0xf6 MovB
	TaskCall(2); // 0xf7 TaskCall
	func_816(var_228_bool, var_220_bool, var_221_object, var_222_float, var_223_float, var_224_bool, var_225_bool); // 0xf8 NEW_2
	TaskReturn(); // 0xf9 TaskReturn
	var_229_bool = var_226_bool == 0; // 0xfb Not
	if(var_229_bool == 0) goto Label_254; // 0xfc JumpB
	goto Label_366; // 0xfd Jump
	
Label_254:
	var_43_bool = 0; // 0xfe MovB
	goto Label_194; // 0xff Jump
	
Label_256:
	var_230_bool = var_43_bool == 0; // 0x100 Not
	if(var_230_bool == 0) goto Label_281; // 0x101 JumpB
	var_231_object = Obj(); // 0x102 PushV
	var_231_object = var_0_cvector; // 0x103 MovT
	func_1520(); // 0x104 NEW_2
	var_240_string = "all"; // 0x106 PushS
	var_241_string = "attack_on"; // 0x107 PushS
	PlayAnimation(var_240_string, var_241_string); // 0x108 Func
	WaitForAnimEnd(); // 0x10a Func
	func_796(var_49_float); // 0x10d NEW_2
	StopAsync(); // 0x10f Func
	var_43_bool = 1; // 0x111 MovB
	var_242_bool = 0; var_243_object = Obj(); // 0x112 PushV
	var_243_object = var_0_cvector; // 0x113 MovT
	func_1370(var_242_bool, var_243_object); // 0x114 NEW_2
	var_244_bool = var_242_bool == 0; // 0x116 Not
	if(var_244_bool == 0) goto Label_281; // 0x117 JumpB
	goto Label_366; // 0x118 Jump
	
Label_281:
	rand(var_49_float); // 0x119 Func
	var_245_bool = 0; // 0x11b PushV
	var_245_bool = 1; // 0x11c MovB
	var_246_float = 0.25; // 0x11d PushF
	var_247_bool = var_49_float < var_246_float; // 0x11e LT
	if(var_247_bool == 0) goto Label_293; // 0x11f JumpB
	var_248_bool = 0; // 0x120 PushV
	func_753(var_245_bool, var_248_bool); // 0x121 NEW_2
	if(var_248_bool == 0) goto Label_293; // 0x123 JumpB
	var_245_bool = 0; // 0x124 MovB
	
Label_293:
	if(var_245_bool == 0) goto Label_310; // 0x125 JumpB
	Face(var_0_cvector); // 0x126 Func
	func_803(); // 0x129 NEW_2
	var_283_string = "all"; // 0x12b PushS
	var_284_string = "attack_stay"; // 0x12c PushS
	PlayAnimation(var_283_string, var_284_string); // 0x12d Func
	var_285_bool = 0; var_286_float = 0; // 0x12f PushV
	var_286_float = var_27_float; // 0x130 Mov
	func_621(var_49_float, var_285_bool, var_286_float); // 0x131 NEW_2
	StopAsync(); // 0x133 Func
	goto Label_356; // 0x135 Jump
	
Label_356:
	goto Label_365; // 0x164 Jump
	
Label_310:
	Face(var_0_cvector); // 0x136 Func
	var_504_string = "all"; // 0x138 PushS
	var_505_string = "fjump"; // 0x139 PushS
	PlayAnimation(var_504_string, var_505_string); // 0x13a Func
	WaitForAnimEnd(); // 0x13c Func
	func_796(var_49_float); // 0x13f NEW_2
	var_506_cvector = CVector(0.0, 0.0, 0.0); // 0x141 PushVec
	SetSpeed(var_506_cvector); // 0x142 Func
	Stop(); // 0x144 Func
	StopAsync(); // 0x146 Func
	var_507_bool = 0; // 0x148 PushV
	func_753(var_49_float, var_507_bool); // 0x149 NEW_2
	var_508_bool = var_507_bool == 0; // 0x14b Not
	if(var_508_bool == 0) goto Label_356; // 0x14c JumpB
	var_509_bool = 0; var_510_object = Obj(); // 0x14d PushV
	var_510_object = var_0_cvector; // 0x14e MovT
	func_1370(var_509_bool, var_510_object); // 0x14f NEW_2
	var_511_bool = var_509_bool == 0; // 0x151 Not
	if(var_511_bool == 0) goto Label_340; // 0x152 JumpB
	goto Label_366; // 0x153 Jump
	
Label_340:
	GetPFPosition(var_40_cvector); // 0x154 TObjFunc
	GetPFPosition(var_41_cvector); // 0x156 Func
	var_45_cvector = var_40_cvector - var_41_cvector; // 0x158 Sub2
	var_46_float = var_45_cvector | var_45_cvector; // 0x159 Or2
	var_512_float = var_27_float * var_27_float; // 0x15a Mult
	var_513_bool = var_46_float < var_512_float; // 0x15b LT
	if(var_513_bool == 0) goto Label_356; // 0x15c JumpB
	var_514_bool = 0; var_515_float = 0; // 0x15d PushV
	var_515_float = var_27_float; // 0x15e Mov
	func_457(var_49_float, var_514_bool, var_515_float); // 0x15f NEW_2
	var_516_bool = var_514_bool == 0; // 0x161 Not
	if(var_516_bool == 0) goto Label_356; // 0x162 JumpB
	goto Label_366; // 0x163 Jump
	
Label_357:
	var_517_bool = 0; var_518_float = 0; // 0x165 PushV
	var_518_float = var_27_float; // 0x166 Mov
	func_457(var_49_float, var_517_bool, var_518_float); // 0x167 NEW_2
	var_519_bool = var_517_bool == 0; // 0x169 Not
	if(var_519_bool == 0) goto Label_364; // 0x16a JumpB
	goto Label_366; // 0x16b Jump
	
Label_364:
	var_43_bool = 1; // 0x16c MovB
	
Label_191:
	var_43_bool = 1; // 0xbf MovB
	
Label_168:
	var_39_float = var_27_float; // 0xa8 Mov
}


func_1023(var_0_cvector, var_1_cvector, var_19_int)
{
	var_20_int = 0; // 0x400 PushI
	var_21_bool = var_19_int != var_20_int; // 0x401 Neq
	if(var_21_bool == 0) goto Label_1028; // 0x402 JumpB
	return 0; // 0x403 Return
	
Label_1028:
	var_22_bool = 0; var_23_object = Obj(); // 0x404 PushV
	var_23_object = var_1_cvector; // 0x405 MovT
	func_1061(var_22_bool, var_23_object); // 0x406 NEW_2
	var_58_bool = var_22_bool == 0; // 0x408 Not
	if(var_58_bool == 0) goto Label_1035; // 0x409 JumpB
	var_0_cvector = 1; // 0x40a TMovB
	
Label_1035:
	var_59_int = 0; // 0x40b PushI
	KillTimer(var_59_int); // 0x40c Func
	Stop(); // 0x40e Func
	return 0; // 0x410 Return
}


func_796(var_0_cvector)
{
	var_121_object = Obj(); // 0x31c PushV
	var_121_object = var_0_cvector; // 0x31d MovT
	func_1638(var_121_object); // 0x31e NEW_2
	return 0; // 0x320 Return
}


func_1694()
{
	var_21_int = 0; // 0x69e PushV
	func_1658(var_21_int); // 0x69f NEW_2
	var_25_int = 1; // 0x6a1 PushI
	var_26_bool = var_21_int != var_25_int; // 0x6a2 Neq
	if(var_26_bool == 0) goto Label_1701; // 0x6a3 JumpB
	return 0; // 0x6a4 Return
	
Label_1701:
	var_27_string = ""; // 0x6a5 PushV
	var_27_string = "liver"; // 0x6a6 MovS
	func_1677(var_27_string); // 0x6a7 NEW_2
	var_38_string = ""; // 0x6a9 PushV
	var_38_string = "kidney"; // 0x6aa MovS
	func_1677(var_38_string); // 0x6ab NEW_2
	var_39_string = ""; // 0x6ad PushV
	var_39_string = "heart"; // 0x6ae MovS
	func_1677(var_39_string); // 0x6af NEW_2
	var_40_string = ""; // 0x6b1 PushV
	var_40_string = "blood"; // 0x6b2 MovS
	func_1677(var_40_string); // 0x6b3 NEW_2
	return 0; // 0x6b5 Return
}


func_1438(var_15_object, var_16_int, var_17_float)
{
	var_18_cvector = CVector(0,0,0); var_19_object = Obj(); var_20_int = 0; var_21_bool = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_int = 0; var_25_int = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_object = Obj(); var_29_int = 0; var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_int = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0); // 0x59e PushV
	var_36_bool = 0; // 0x59f PushV
	var_36_bool = 0; // 0x5a0 MovB
	var_37_bool = 0; // 0x5a1 PushV
	var_37_bool = 0; // 0x5a2 MovB
	var_38_object = var_15_object; // 0x5a3 Push
	if(var_38_object == 0) goto Label_1449; // 0x5a4 JumpB
	var_39_int = 4; // 0x5a5 PushI
	var_40_bool = var_16_int != var_39_int; // 0x5a6 Neq
	if(var_40_bool == 0) goto Label_1449; // 0x5a7 JumpB
	var_37_bool = 1; // 0x5a8 MovB
	
Label_1449:
	if(var_37_bool == 0) goto Label_1454; // 0x5a9 JumpB
	var_41_int = 5; // 0x5aa PushI
	var_42_bool = var_16_int != var_41_int; // 0x5ab Neq
	if(var_42_bool == 0) goto Label_1454; // 0x5ac JumpB
	var_36_bool = 1; // 0x5ad MovB
	
Label_1454:
	if(var_36_bool == 0) goto Label_1501; // 0x5ae JumpB
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); // 0x5af PushV
	var_45_cvector = CVector(0,0,0); var_46_object = Obj(); // 0x5b0 PushV
	var_46_object = var_15_object; // 0x5b1 Mov
	func_1232(var_46_object); // 0x5b2 NEW_2
	var_44_cvector = var_45_cvector; // 0x5b3 Mov
	func_1589(var_43_cvector, var_44_cvector); // 0x5b5 NEW_2
	var_27_cvector = var_43_cvector; // 0x5b6 Mov
	CreateVectorVector(var_28_object); // 0x5b8 Func
	var_29_int = 1; // 0x5ba MovI
	
Label_1467:
	var_56_string = "hit"; // 0x5bb PushS
	var_57_int = var_56_string + var_29_int; // 0x5bc Add
	GetGeometryLocator(var_57_int, var_30_bool, var_31_cvector, var_32_cvector); // 0x5bd Func
	var_58_bool = var_30_bool == 0; // 0x5bf Not
	if(var_58_bool == 0) goto Label_1474; // 0x5c0 JumpB
	goto Label_1483; // 0x5c1 Jump
	
Label_1483:
	size(var_33_int); // 0x5cb ObjFunc
	var_59_int = var_33_int; // 0x5cd Push
	if(var_59_int == 0) goto Label_1500; // 0x5ce JumpB
	irand(var_34_int, var_33_int); // 0x5cf Func
	get(var_35_cvector, var_34_int); // 0x5d1 ObjFunc
	var_60_object = Obj(); var_61_int = 0; var_62_float = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); // 0x5d3 PushV
	var_60_object = var_15_object; // 0x5d4 Mov
	var_61_int = var_16_int; // 0x5d5 Mov
	var_62_float = var_17_float; // 0x5d6 Mov
	var_63_cvector = var_35_cvector; // 0x5d7 Mov
	var_64_cvector = -var_27_cvector; // 0x5d8 Neg2
	func_1506(var_62_float, var_63_cvector, var_64_cvector); // 0x5d9 NEW_2
	return 18; // 0x5db Return
	
Label_1500:
	var_28_object = 0; // 0x5dc SetNull
	
Label_1501:
	var_105_object = Obj(); // 0x5dd PushV
	var_105_object = var_15_object; // 0x5de Mov
	func_1394(var_105_object); // 0x5df NEW_2
	return 18; // 0x5e1 Return
	
Label_1474:
	var_106_int = var_32_cvector | var_27_cvector; // 0x5c2 Or
	var_107_float = 0.70711; // 0x5c3 PushF
	var_108_bool = var_106_int >= var_107_float; // 0x5c4 GE
	if(var_108_bool == 0) goto Label_1480; // 0x5c5 JumpB
	add(var_31_cvector); // 0x5c6 ObjFunc
	
Label_1480:
	var_109_int = 1; // 0x5c8 PushI
	var_29_int = var_29_int + var_109_int; // 0x5c9 Add2
	goto Label_1467; // 0x5ca Jump
}


func_801(var_462_int)
{
	var_462_int = 0; // 0x321 MovI
	return 0; // 0x322 Return
}


func_418(var_0_cvector, var_383_float, var_384_int)
{
	var_385_object = Obj(); var_386_float = 0; var_387_float = 0; var_388_object = Obj(); var_389_float = 0; var_390_float = 0; // 0x1a2 PushV
	var_391_float = 0.9; // 0x1a3 PushF
	var_392_float = var_383_float * var_391_float; // 0x1a4 Mult
	GetVictim(var_392_float, var_388_object); // 0x1a5 Func
	ReportAttack(var_0_cvector); // 0x1a7 Func
	var_393_bool = var_388_object == var_0_cvector; // 0x1a9 Eq
	if(var_393_bool == 0) goto Label_455; // 0x1aa JumpB
	var_394_float = 0; var_395_object = Obj(); var_396_int = 0; // 0x1ab PushV
	var_395_object = var_388_object; // 0x1ac Mov
	var_396_int = var_384_int; // 0x1ad Mov
	func_148(var_396_int); // 0x1ae NEW_2
	var_389_float = var_394_float; // 0x1af Mov
	var_397_float = 0; var_398_object = Obj(); var_399_float = 0; var_400_int = 0; // 0x1b1 PushV
	var_398_object = var_388_object; // 0x1b2 Mov
	var_399_float = var_389_float; // 0x1b3 Mov
	var_401_int = 0; var_402_object = Obj(); var_403_int = 0; // 0x1b4 PushV
	var_402_object = var_388_object; // 0x1b5 Mov
	var_403_int = var_384_int; // 0x1b6 Mov
	func_151(var_403_int); // 0x1b7 NEW_2
	var_400_int = var_401_int; // 0x1b8 Mov
	func_1256(var_397_float, var_398_object, var_399_float, var_400_int); // 0x1ba NEW_2
	var_390_float = var_397_float; // 0x1bb Mov
	var_462_int = 0; // 0x1bd PushV
	func_801(var_462_int); // 0x1be NEW_2
	ReportHit(var_0_cvector, var_462_int, var_390_float, var_389_float); // 0x1c0 Func
	var_463_object = Obj(); var_464_float = 0; // 0x1c2 PushV
	var_463_object = var_388_object; // 0x1c3 Mov
	var_464_float = var_390_float; // 0x1c4 Mov
	func_808(); // 0x1c5 NEW_2
	
Label_455:
	return 6; // 0x1c7 Return
}


func_803()
{
	var_254_string = ""; // 0x323 PushV
	var_254_string = "attack_stay"; // 0x324 MovS
	func_1542(var_254_string); // 0x325 NEW_2
	return 0; // 0x327 Return
}


func_1186(var_69_string)
{
	RemoveRTEnvelope(); // 0x4a3 Func
	SetDeathState(); // 0x4a5 Func
	Stop(); // 0x4a7 Func
	StopAsync(); // 0x4a9 Func
	StopSecondaryAnimation(); // 0x4ab Func
	var_70_string = ""; // 0x4ad PushV
	var_70_string = var_69_string; // 0x4ae Mov
	func_1542(var_70_string); // 0x4af NEW_2
	var_99_string = "all"; // 0x4b1 PushS
	PlayAnimation(var_99_string, var_69_string); // 0x4b2 Func
	WaitForAnimEnd(); // 0x4b4 Func
	var_100_string = "all"; // 0x4b6 PushS
	LockAnimationEnd(var_100_string, var_69_string); // 0x4b7 Func
	RemoveEnvelope(); // 0x4b9 Func
	return 0; // 0x4bb Return
}


func_1061(var_22_bool, var_23_object)
{
	var_24_bool = 0; var_25_object = Obj(); // 0x426 PushV
	var_25_object = var_23_object; // 0x427 Mov
	func_1370(var_24_bool, var_25_object); // 0x428 NEW_2
	var_22_bool = var_24_bool; // 0x429 Mov
	return 0; // 0x42b Return
}


func_808()
{
	return 0; // 0x329 Return
}


func_810(var_487_bool)
{
	var_487_bool = 1; // 0x32a MovB
	return 0; // 0x32b Return
}


func_812(var_379_int)
{
	var_379_int = 1; // 0x32c MovI
	return 0; // 0x32d Return
}


func_1068(var_197_string)
{
	var_197_string = "walk"; // 0x42c MovS
	return 0; // 0x42d Return
}


func_814(var_374_float)
{
	var_374_float = 0.5; // 0x32e MovF
	return 0; // 0x32f Return
}


func_1583(var_43_object)
{
	var_44_object = Obj(); var_45_object = Obj(); // 0x62f PushV
	self(var_45_object); // 0x630 Func
	var_43_object = var_45_object; // 0x632 Mov
	return 2; // 0x633 Return
}


func_816(var_2_object, var_128_bool, var_129_object, var_130_float, var_131_float, var_132_bool, var_133_bool)
{
	var_137_bool = 0; var_138_bool = 0; var_139_bool = 0; var_140_bool = 0; // 0x330 PushV
	var_141_object = Obj(); // 0x331 PushV
	var_141_object = var_129_object; // 0x332 Mov
	func_1638(var_141_object); // 0x333 NEW_2
	var_142_int = 1; // 0x335 PushI
	var_143_int = 5; // 0x336 PushI
	SetTimer(var_142_int, var_143_int); // 0x337 Func
	CanSee(var_139_bool, var_129_object); // 0x339 Func
	var_144_bool = var_139_bool; // 0x33b Push
	if(var_144_bool == 0) goto Label_835; // 0x33c JumpB
	var_2_object = 1; // 0x33d TMovB
	var_145_object = Obj(); // 0x33e PushV
	var_145_object = var_129_object; // 0x33f Mov
	func_1531(var_145_object); // 0x340 NEW_2
	goto Label_836; // 0x342 Jump
	
Label_836:
	var_152_bool = 0; var_153_object = Obj(); // 0x344 PushV
	var_153_object = var_129_object; // 0x345 Mov
	func_1239(var_152_bool, var_153_object); // 0x346 NEW_2
	if(var_152_bool == 0) goto Label_846; // 0x348 JumpB
	var_156_object = Obj(); // 0x349 PushV
	func_1583(var_156_object); // 0x34a NEW_2
	SendPlayerEnemy(var_129_object, var_156_object); // 0x34c Func
	
Label_846:
	var_157_bool = 0; var_158_object = Obj(); var_159_float = 0; var_160_float = 0; var_161_bool = 0; var_162_bool = 0; // 0x34e PushV
	var_158_object = var_129_object; // 0x34f Mov
	var_159_float = var_130_float; // 0x350 Mov
	var_160_float = var_131_float; // 0x351 Mov
	var_161_bool = var_132_bool; // 0x352 Mov
	var_162_bool = var_133_bool; // 0x353 Mov
	func_921(var_139_bool, var_140_bool, var_157_bool, var_158_object, var_159_float, var_160_float, var_161_bool, var_162_bool); // 0x354 NEW_2
	var_140_bool = var_157_bool; // 0x355 Mov
	var_208_object = var_2_object; // 0x357 PushT
	if(var_208_object == 0) goto Label_860; // 0x358 JumpB
	var_209_string = "head"; // 0x359 PushS
	UnlookAsync(var_209_string); // 0x35a Func
	
Label_860:
	var_210_int = 1; // 0x35c PushI
	KillTimer(var_210_int); // 0x35d Func
	var_128_bool = var_140_bool; // 0x35f Mov
	return 4; // 0x360 Return
	
Label_835:
	var_2_object = 0; // 0x343 TMovB
}


func_1070(var_198_string)
{
	var_198_string = "run"; // 0x42e MovS
	return 0; // 0x42f Return
}


func_1329(var_39_bool)
{
	var_41_bool = 0; var_42_bool = 0; // 0x531 PushV
	IsDead(var_42_bool); // 0x532 ObjFunc
	var_39_bool = var_42_bool; // 0x534 Mov
	return 2; // 0x535 Return
}


func_1072(var_46_object)
{
	var_47_object = Obj(); // 0x431 PushV
	var_47_object = var_46_object; // 0x432 Mov
	func_1095(var_47_object); // 0x433 NEW_2
	var_127_int = 50; // 0x435 PushI
	var_128_int = 40; // 0x436 PushI
	SetRTEnvelope(var_127_int, var_128_int); // 0x437 Func
	
Label_1081:
	Hold(); // 0x439 Func
	goto Label_1081; // 0x43b Jump
}


func_692(var_298_bool)
{
	var_299_bool = 0; // 0x2b4 PushV
	var_299_bool = 0; // 0x2b5 MovB
	var_300_bool = 0; // 0x2b6 PushV
	func_664(var_299_bool, var_300_bool); // 0x2b7 NEW_2
	if(var_300_bool == 0) goto Label_703; // 0x2b9 JumpB
	var_317_bool = 0; // 0x2ba PushV
	func_708(var_298_bool, var_299_bool, var_317_bool); // 0x2bb NEW_2
	if(var_317_bool == 0) goto Label_703; // 0x2bd JumpB
	var_299_bool = 1; // 0x2be MovB
	
Label_703:
	if(var_299_bool == 0) goto Label_706; // 0x2bf JumpB
	var_298_bool = 1; // 0x2c0 MovB
	return 0; // 0x2c1 Return
	
Label_706:
	var_298_bool = 0; // 0x2c2 MovB
	return 0; // 0x2c3 Return
}


func_1589(var_43_cvector, var_44_cvector)
{
	var_51_float = 0; var_52_float = 0; // 0x635 PushV
	var_53_int = var_44_cvector | var_44_cvector; // 0x636 Or
	var_52_float = sqrt(var_53_int); // 0x637 Sqrt2
	var_54_float = 0.0; // 0x638 PushF
	var_55_bool = var_52_float < var_54_float; // 0x639 LT
	if(var_55_bool == 0) goto Label_1597; // 0x63a JumpB
	var_43_cvector = CVector(0.0, 0.0, 0.0); // 0x63b MovV
	return 2; // 0x63c Return
	
Label_1597:
	var_43_cvector = var_44_cvector / var_44_cvector; // 0x63d Div2
	return 2; // 0x63e Return
}


func_1334(var_28_bool, var_29_object)
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); // 0x536 PushV
	var_34_bool = var_29_object == 0; // 0x537 NullEq
	if(var_34_bool == 0) goto Label_1339; // 0x538 JumpB
	var_28_bool = 0; // 0x539 MovB
	return 4; // 0x53a Return
	
Label_1339:
	var_35_bool = 0; // 0x53b PushV
	var_35_bool = 0; // 0x53c MovB
	var_36_string = "IsDead"; // 0x53d PushS
	var_37_int = 1; // 0x53e PushI
	var_38_bool = IsFuncExist(var_29_object, var_36_string, var_37_int); // 0x53f FuncExist
	if(var_38_bool == 0) goto Label_1351; // 0x540 JumpB
	var_39_bool = 0; var_40_object = Obj(); // 0x541 PushV
	var_40_object = var_29_object; // 0x542 Mov
	func_1329(var_40_object); // 0x543 NEW_2
	if(var_39_bool == 0) goto Label_1351; // 0x545 JumpB
	var_35_bool = 1; // 0x546 MovB
	
Label_1351:
	if(var_35_bool == 0) goto Label_1354; // 0x547 JumpB
	var_28_bool = 0; // 0x548 MovB
	return 4; // 0x549 Return
	
Label_1354:
	GetScene(var_32_object); // 0x54a Func
	var_43_bool = var_32_object == 0; // 0x54c NullEq
	if(var_43_bool == 0) goto Label_1360; // 0x54d JumpB
	var_28_bool = 0; // 0x54e MovB
	return 4; // 0x54f Return
	
Label_1360:
	GetScene(var_33_object); // 0x550 ObjFunc
	var_44_bool = var_32_object != var_33_object; // 0x552 Neq
	if(var_44_bool == 0) goto Label_1366; // 0x553 JumpB
	var_28_bool = 0; // 0x554 MovB
	return 4; // 0x555 Return
	
Label_1366:
	var_28_bool = 1; // 0x556 MovB
	return 4; // 0x557 Return
}


func_1718()
{
	var_41_object = Obj(); var_42_object = Obj(); // 0x6b6 PushV
	GetScene(var_42_object); // 0x6b7 Func
	var_43_object = Obj(); // 0x6b9 PushV
	func_1583(var_43_object); // 0x6ba NEW_2
	RemoveStationaryActor(var_43_object); // 0x6bc ObjFunc
	return 2; // 0x6be Return
}


func_1599(var_23_float, var_24_cvector, var_25_cvector)
{
	var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); // 0x63f PushV
	var_27_cvector = var_25_cvector - var_24_cvector; // 0x640 Sub2
	var_23_float = var_27_cvector | var_27_cvector; // 0x641 Or2
	return 2; // 0x642 Return
}


func_1728(var_12_object)
{
	var_13_bool = 0; var_14_bool = 0; // 0x6c0 PushV
	var_15_string = "revolver_ammo"; // 0x6c1 PushS
	var_16_int = 0; // 0x6c2 PushI
	var_17_int = 2; // 0x6c3 PushI
	AddItem(var_14_bool, var_15_string, var_16_int, var_17_int); // 0x6c4 Func
	var_18_string = "alpha_pills"; // 0x6c6 PushS
	var_19_int = 0; // 0x6c7 PushI
	var_20_int = 12; // 0x6c8 PushI
	AddItem(var_14_bool, var_18_string, var_19_int, var_20_int); // 0x6c9 Func
	func_1694(); // 0x6cc NEW_2
	func_1718(); // 0x6cf NEW_2
	var_46_object = Obj(); // 0x6d1 PushV
	var_46_object = var_12_object; // 0x6d2 Mov
	TaskCall(3); // 0x6d3 TaskCall
	func_1072(var_46_object); // 0x6d4 NEW_2
	TaskReturn(); // 0x6d5 TaskReturn
	return 2; // 0x6d7 Return
}


func_1218(var_425_string, var_426_int)
{
	var_427_int = 2; // 0x4c3 PushI
	var_428_bool = var_426_int == var_427_int; // 0x4c4 Eq
	if(var_428_bool == 0) goto Label_1225; // 0x4c5 JumpB
	var_425_string = "fire"; // 0x4c6 MovS
	return 0; // 0x4c7 Return
	
Label_1225:
	var_429_int = 1; // 0x4c9 PushI
	var_430_bool = var_426_int == var_429_int; // 0x4ca Eq
	if(var_430_bool == 0) goto Label_1230; // 0x4cb JumpB
	var_425_string = "bullet"; // 0x4cc MovS
	return 0; // 0x4cd Return
	
Label_1230:
	var_425_string = "phys"; // 0x4ce MovS
	return 0; // 0x4cf Return
}


func_1603(var_435_float, var_436_float, var_437_float)
{
	var_440_bool = var_436_float < var_437_float; // 0x644 LT
	if(var_440_bool == 0) goto Label_1608; // 0x645 JumpB
	var_435_float = var_436_float; // 0x646 Mov
	goto Label_1609; // 0x647 Jump
	
Label_1609:
	return 0; // 0x649 Return
	
Label_1608:
	var_435_float = var_437_float; // 0x648 Mov
}


func_708(var_0_cvector, var_4_int, var_317_bool)
{
	var_318_object = Obj(); var_319_bool = 0; var_320_float = 0; var_321_cvector = CVector(0,0,0); var_322_cvector = CVector(0,0,0); var_323_object = Obj(); var_324_bool = 0; var_325_float = 0; var_326_cvector = CVector(0,0,0); var_327_cvector = CVector(0,0,0); // 0x2c4 PushV
	GetScene(var_323_object); // 0x2c5 Func
	var_324_bool = 0; // 0x2c7 MovB
	
Label_712:
	var_328_cvector = CVector(0,0,0); var_329_object = Obj(); // 0x2c8 PushV
	var_329_object = var_0_cvector; // 0x2c9 MovT
	func_1232(var_329_object); // 0x2ca NEW_2
	var_334_int = -var_328_cvector; // 0x2cc Neg
	FindDirLength(var_325_float, var_334_int, var_325_float); // 0x2cd Func
	var_335_bool = var_325_float < var_4_int; // 0x2cf LT
	if(var_335_bool == 0) goto Label_722; // 0x2d0 JumpB
	goto Label_750; // 0x2d1 Jump
	
Label_750:
	var_317_bool = var_324_bool; // 0x2ee Mov
	return 10; // 0x2ef Return
	
Label_722:
	Face(var_0_cvector); // 0x2d2 Func
	var_336_string = "all"; // 0x2d4 PushS
	var_337_string = "bjump"; // 0x2d5 PushS
	PlayAnimation(var_336_string, var_337_string); // 0x2d6 Func
	GetPFPosition(var_326_cvector); // 0x2d8 TObjFunc
	GetPFPosition(var_327_cvector); // 0x2da Func
	WaitForAnimEnd(); // 0x2dc Func
	func_796(var_327_cvector); // 0x2df NEW_2
	StopAsync(); // 0x2e1 Func
	var_338_cvector = CVector(0.0, 0.0, 0.0); // 0x2e3 PushVec
	SetSpeed(var_338_cvector); // 0x2e4 Func
	var_324_bool = 1; // 0x2e6 MovB
	var_339_bool = 0; // 0x2e7 PushV
	func_664(var_327_cvector, var_339_bool); // 0x2e8 NEW_2
	var_340_bool = var_339_bool == 0; // 0x2ea Not
	if(var_340_bool == 0) goto Label_749; // 0x2eb JumpB
	goto Label_750; // 0x2ec Jump
	
Label_749:
	goto Label_712; // 0x2ed Jump
}


func_1095(var_47_object)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_string = ""; var_53_object = Obj(); var_54_bool = 0; var_55_bool = 0; var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_string = ""; var_63_object = Obj(); var_64_bool = 0; var_65_bool = 0; var_66_float = 0; var_67_cvector = CVector(0,0,0); // 0x447 PushV
	var_68_bool = var_47_object == 0; // 0x448 NullEq
	if(var_68_bool == 0) goto Label_1103; // 0x449 JumpB
	var_69_string = ""; // 0x44a PushV
	var_69_string = "fdie"; // 0x44b MovS
	func_1186(var_69_string); // 0x44c NEW_2
	goto Label_1185; // 0x44e Jump
	
Label_1185:
	return 20; // 0x4a1 Return
	
Label_1103:
	GetPosition(var_58_cvector); // 0x44f ObjFunc
	GetPosition(var_59_cvector); // 0x451 Func
	GetDirection(var_60_cvector); // 0x453 Func
	var_61_cvector = var_59_cvector - var_58_cvector; // 0x455 Sub2
	var_101_float = GetByIndex(var_61_cvector, 0); // 0x456 PushE
	var_102_float = GetByIndex(var_60_cvector, 0); // 0x457 PushE
	var_103_float = var_101_float * var_102_float; // 0x458 Mult
	var_104_float = GetByIndex(var_61_cvector, 2); // 0x459 PushE
	var_105_float = GetByIndex(var_60_cvector, 2); // 0x45a PushE
	var_106_float = var_104_float * var_105_float; // 0x45b Mult
	var_107_int = var_103_float + var_106_float; // 0x45c Add
	var_108_int = 0; // 0x45d PushI
	var_109_bool = var_107_int >= var_108_int; // 0x45e GE
	if(var_109_bool == 0) goto Label_1122; // 0x45f JumpB
	var_62_string = "fdie"; // 0x460 MovS
	goto Label_1123; // 0x461 Jump
	
Label_1123:
	RemoveRTEnvelope(); // 0x463 Func
	SetDeathState(); // 0x465 Func
	Stop(); // 0x467 Func
	StopAsync(); // 0x469 Func
	var_63_object = var_47_object; // 0x46b Mov
	var_110_string = "GetScriptProperty"; // 0x46c PushS
	var_111_int = 2; // 0x46d PushI
	var_112_bool = IsFuncExist(var_47_object, var_110_string, var_111_int); // 0x46e FuncExist
	if(var_112_bool == 0) goto Label_1147; // 0x46f JumpB
	var_113_string = "Owner"; // 0x470 PushS
	HasScriptProperty(var_64_bool, var_113_string); // 0x471 ObjFunc
	var_114_bool = var_64_bool; // 0x473 Push
	if(var_114_bool == 0) goto Label_1147; // 0x474 JumpB
	var_115_string = "Owner"; // 0x475 PushS
	GetScriptProperty(var_63_object, var_115_string); // 0x476 ObjFunc
	var_116_bool = var_63_object == 0; // 0x478 NullEq
	if(var_116_bool == 0) goto Label_1147; // 0x479 JumpB
	var_63_object = var_47_object; // 0x47a Mov
	
Label_1147:
	var_117_string = "@GetEyesHeight"; // 0x47b PushS
	var_118_int = 1; // 0x47c PushI
	var_119_bool = IsFuncExist(var_63_object, var_117_string, var_118_int); // 0x47d FuncExist
	if(var_119_bool == 0) goto Label_1162; // 0x47e JumpB
	GetEyesHeight(var_66_float); // 0x47f ObjFunc
	var_67_cvector = CVector(0.0, 0.0, 0.0); // 0x481 MovV
	var_120_float = GetByIndex(var_67_cvector, 1); // 0x482 PushE
	var_120_float = var_66_float; // 0x483 Mov
	SetByIndex(var_67_cvector, 1) = var_120_float; // 0x484 PopE
	var_121_string = "head"; // 0x485 PushS
	LookAsync(var_47_object, var_121_string, var_67_cvector); // 0x486 Func
	var_65_bool = 1; // 0x488 MovB
	goto Label_1163; // 0x489 Jump
	
Label_1163:
	var_122_string = ""; // 0x48b PushV
	var_122_string = var_62_string; // 0x48c Mov
	func_1542(var_122_string); // 0x48d NEW_2
	var_123_string = "all"; // 0x48f PushS
	PlayAnimation(var_123_string, var_62_string); // 0x490 Func
	WaitForAnimEnd(); // 0x492 Func
	var_124_bool = var_65_bool; // 0x494 Push
	if(var_124_bool == 0) goto Label_1179; // 0x495 JumpB
	StopAsync(); // 0x496 Func
	var_125_string = "head"; // 0x498 PushS
	UnlookAsync(var_125_string); // 0x499 Func
	
Label_1179:
	var_126_string = "all"; // 0x49b PushS
	LockAnimationEnd(var_126_string, var_62_string); // 0x49c Func
	RemoveEnvelope(); // 0x49e Func
	var_63_object = 0; // 0x4a0 SetNull
	
Label_1162:
	var_65_bool = 0; // 0x48a MovB
	
Label_1122:
	var_62_string = "bdie"; // 0x462 MovS
}


func_457(var_0_cvector, var_346_bool, var_347_float)
{
	var_348_int = 0; var_349_bool = 0; var_350_int = 0; var_351_string = ""; var_352_int = 0; var_353_bool = 0; var_354_int = 0; var_355_string = ""; // 0x1c9 PushV
	func_796(var_355_string); // 0x1cb NEW_2
	irand(var_352_int, var_355_string); // 0x1cd Func
	var_356_int = 1; // 0x1cf PushI
	var_352_int = var_352_int + var_356_int; // 0x1d0 Add2
	Face(var_0_cvector); // 0x1d1 Func
	var_357_bool = 1; // 0x1d3 PushB
	SetAttackState(var_357_bool); // 0x1d4 Func
	func_1647(); // 0x1d7 NEW_2
	var_362_string = "all"; // 0x1d9 PushS
	var_363_string = "attack_begin"; // 0x1da PushS
	var_364_int = var_363_string + var_352_int; // 0x1db Add
	PlayAnimation(var_362_string, var_364_int); // 0x1dc Func
	WaitForAnimEnd(); // 0x1de Func
	func_764(var_354_int, var_355_string); // 0x1e1 NEW_2
	var_380_bool = 0; var_381_object = Obj(); // 0x1e3 PushV
	var_381_object = var_0_cvector; // 0x1e4 MovT
	func_1370(var_380_bool, var_381_object); // 0x1e5 NEW_2
	var_382_bool = var_380_bool == 0; // 0x1e7 Not
	if(var_382_bool == 0) goto Label_493; // 0x1e8 JumpB
	StopAsync(); // 0x1e9 Func
	var_346_bool = 0; // 0x1eb MovB
	return 8; // 0x1ec Return
	
Label_493:
	var_383_float = 0; var_384_int = 0; // 0x1ed PushV
	var_383_float = var_347_float; // 0x1ee Mov
	var_384_int = var_352_int; // 0x1ef Mov
	func_418(var_355_string, var_383_float, var_384_int); // 0x1f0 NEW_2
	var_465_string = "all"; // 0x1f2 PushS
	var_466_string = "attack_middle"; // 0x1f3 PushS
	var_467_int = var_466_string + var_352_int; // 0x1f4 Add
	HasAnimation(var_353_bool, var_465_string, var_467_int); // 0x1f5 Func
	var_468_bool = var_353_bool; // 0x1f7 Push
	if(var_468_bool == 0) goto Label_574; // 0x1f8 JumpB
	func_1647(); // 0x1fa NEW_2
	var_469_string = "all"; // 0x1fc PushS
	var_470_string = "attack_middle"; // 0x1fd PushS
	var_471_int = var_470_string + var_352_int; // 0x1fe Add
	PlayAnimation(var_469_string, var_471_int); // 0x1ff Func
	WaitForAnimEnd(); // 0x201 Func
	func_796(var_355_string); // 0x204 NEW_2
	var_472_bool = 0; var_473_object = Obj(); // 0x206 PushV
	var_473_object = var_0_cvector; // 0x207 MovT
	func_1370(var_472_bool, var_473_object); // 0x208 NEW_2
	var_474_bool = var_472_bool == 0; // 0x20a Not
	if(var_474_bool == 0) goto Label_528; // 0x20b JumpB
	StopAsync(); // 0x20c Func
	var_346_bool = 0; // 0x20e MovB
	return 8; // 0x20f Return
	
Label_528:
	var_475_float = 0; var_476_int = 0; // 0x210 PushV
	var_475_float = var_347_float; // 0x211 Mov
	var_476_int = var_352_int; // 0x212 Mov
	func_418(var_355_string, var_475_float, var_476_int); // 0x213 NEW_2
	var_354_int = 1; // 0x215 MovI
	
Label_534:
	var_477_string = "attack_middle"; // 0x216 PushS
	var_478_int = var_477_string + var_352_int; // 0x217 Add
	var_479_string = "_"; // 0x218 PushS
	var_480_int = var_478_int + var_479_string; // 0x219 Add
	var_355_string = var_480_int + var_354_int; // 0x21a Add2
	var_481_string = "all"; // 0x21b PushS
	HasAnimation(var_353_bool, var_481_string, var_355_string); // 0x21c Func
	var_482_bool = var_353_bool == 0; // 0x21e Not
	if(var_482_bool == 0) goto Label_545; // 0x21f JumpB
	goto Label_574; // 0x220 Jump
	
Label_574:
	var_483_bool = 0; // 0x23e PushB
	SetAttackState(var_483_bool); // 0x23f Func
	var_484_string = "all"; // 0x241 PushS
	var_485_string = "attack_end"; // 0x242 PushS
	var_486_int = var_485_string + var_352_int; // 0x243 Add
	PlayAnimation(var_484_string, var_486_int); // 0x244 Func
	var_487_bool = 0; // 0x246 PushV
	func_810(var_487_bool); // 0x247 NEW_2
	if(var_487_bool == 0) goto Label_592; // 0x249 JumpB
	var_488_bool = 0; var_489_float = 0; // 0x24a PushV
	var_489_float = 0.75; // 0x24b MovF
	func_594(var_488_bool, var_489_float); // 0x24c NEW_2
	StopAsync(); // 0x24e Func
	
Label_592:
	var_346_bool = 1; // 0x250 MovB
	return 8; // 0x251 Return
	
Label_545:
	func_1647(); // 0x222 NEW_2
	var_497_string = "all"; // 0x224 PushS
	PlayAnimation(var_497_string, var_355_string); // 0x225 Func
	WaitForAnimEnd(); // 0x227 Func
	func_796(var_355_string); // 0x22a NEW_2
	var_498_bool = 0; var_499_object = Obj(); // 0x22c PushV
	var_499_object = var_0_cvector; // 0x22d MovT
	func_1370(var_498_bool, var_499_object); // 0x22e NEW_2
	var_500_bool = var_498_bool == 0; // 0x230 Not
	if(var_500_bool == 0) goto Label_566; // 0x231 JumpB
	StopAsync(); // 0x232 Func
	var_346_bool = 0; // 0x234 MovB
	return 8; // 0x235 Return
	
Label_566:
	var_501_float = 0; var_502_int = 0; // 0x236 PushV
	var_501_float = var_347_float; // 0x237 Mov
	var_502_int = var_352_int; // 0x238 Mov
	func_418(var_355_string, var_501_float, var_502_int); // 0x239 NEW_2
	var_503_int = 1; // 0x23b PushI
	var_354_int = var_354_int + var_503_int; // 0x23c Add2
	goto Label_534; // 0x23d Jump
}


func_1610(var_445_float, var_446_float, var_447_float, var_448_float)
{
	var_449_bool = var_446_float < var_447_float; // 0x64b LT
	if(var_449_bool == 0) goto Label_1615; // 0x64c JumpB
	var_445_float = var_447_float; // 0x64d Mov
	return 0; // 0x64e Return
	
Label_1615:
	var_450_bool = var_446_float > var_448_float; // 0x64f GT
	if(var_450_bool == 0) goto Label_1619; // 0x650 JumpB
	var_445_float = var_448_float; // 0x651 Mov
	return 0; // 0x652 Return
	
Label_1619:
	var_445_float = var_446_float; // 0x653 Mov
	return 0; // 0x654 Return
}


func_1232(var_45_cvector)
{
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); // 0x4d0 PushV
	GetPosition(var_49_cvector); // 0x4d1 Func
	GetPosition(var_50_cvector); // 0x4d3 ObjFunc
	var_45_cvector = var_50_cvector - var_49_cvector; // 0x4d5 Sub2
	return 4; // 0x4d6 Return
}


func_594(var_488_bool, var_489_float)
{
	var_490_float = 0; var_491_bool = 0; var_492_float = 0; var_493_bool = 0; // 0x252 PushV
	rand(var_492_float); // 0x253 Func
	var_494_bool = var_492_float < var_489_float; // 0x255 LT
	if(var_494_bool == 0) goto Label_614; // 0x256 JumpB
	
Label_599:
	IsAnimationPlaying(var_493_bool); // 0x257 Func
	var_495_bool = var_493_bool == 0; // 0x259 Not
	if(var_495_bool == 0) goto Label_604; // 0x25a JumpB
	goto Label_613; // 0x25b Jump
	
Label_613:
	goto Label_619; // 0x265 Jump
	
Label_619:
	var_488_bool = 0; // 0x26b MovB
	return 4; // 0x26c Return
	
Label_604:
	var_496_bool = 0; // 0x25c PushV
	func_692(var_496_bool); // 0x25d NEW_2
	if(var_496_bool == 0) goto Label_610; // 0x25f JumpB
	var_488_bool = 1; // 0x260 MovB
	return 4; // 0x261 Return
	
Label_610:
	sync(); // 0x262 Func
	goto Label_599; // 0x264 Jump
	
Label_614:
	WaitForAnimEnd(); // 0x266 Func
	func_796(var_493_bool); // 0x269 NEW_2
}


func_1621(var_453_float)
{
	var_454_object = Obj(); var_455_object = Obj(); // 0x655 PushV
	CreateFloatVector(var_455_object); // 0x656 Func
	add(var_453_float); // 0x658 ObjFunc
	var_456_int = 0; // 0x65a PushI
	var_457_bool = var_453_float < var_456_int; // 0x65b LT
	if(var_457_bool == 0) goto Label_1633; // 0x65c JumpB
	var_458_float = 0.7; // 0x65d PushF
	var_459_int = 500; // 0x65e PushI
	RumblePlay(var_458_float, var_459_int); // 0x65f Func
	
Label_1633:
	var_460_int = 15; // 0x661 PushI
	SendWorldWndMessage(var_460_int, var_455_object); // 0x662 Func
	return 2; // 0x664 Return
}


func_1239(var_152_bool, var_153_object)
{
	var_154_bool = 0; var_155_bool = 0; // 0x4d7 PushV
	IsPlayerActor(var_153_object, var_155_bool); // 0x4d8 Func
	var_152_bool = var_155_bool; // 0x4da Mov
	return 2; // 0x4db Return
}


func_1370(var_24_bool, var_25_object)
{
	var_26_int = 0; var_27_int = 0; // 0x55a PushV
	var_28_bool = 0; var_29_object = Obj(); // 0x55b PushV
	var_29_object = var_25_object; // 0x55c Mov
	func_1334(var_28_bool, var_29_object); // 0x55d NEW_2
	var_45_bool = var_28_bool == 0; // 0x55f Not
	if(var_45_bool == 0) goto Label_1379; // 0x560 JumpB
	var_24_bool = 0; // 0x561 MovB
	return 2; // 0x562 Return
	
Label_1379:
	var_46_bool = 0; var_47_object = Obj(); var_48_string = ""; // 0x563 PushV
	var_47_object = var_25_object; // 0x564 Mov
	var_48_string = "noaccess"; // 0x565 MovS
	func_1244(var_46_bool, var_47_object, var_48_string); // 0x566 NEW_2
	var_55_bool = var_46_bool == 0; // 0x568 Not
	if(var_55_bool == 0) goto Label_1388; // 0x569 JumpB
	var_24_bool = 1; // 0x56a MovB
	return 2; // 0x56b Return
	
Label_1388:
	var_56_string = "noaccess"; // 0x56c PushS
	GetProperty(var_56_string, var_27_int); // 0x56d ObjFunc
	var_57_int = 0; // 0x56f PushI
	var_24_bool = var_27_int == var_57_int; // 0x570 Eq2
	return 2; // 0x571 Return
}


func_1244(var_46_bool, var_47_object, var_48_string)
{
	var_49_bool = 0; var_50_bool = 0; // 0x4dc PushV
	var_51_string = "HasProperty"; // 0x4dd PushS
	var_52_int = 2; // 0x4de PushI
	var_53_bool = IsFuncExist(var_47_object, var_51_string, var_52_int); // 0x4df FuncExist
	var_54_bool = var_53_bool == 0; // 0x4e0 Not
	if(var_54_bool == 0) goto Label_1252; // 0x4e1 JumpB
	var_46_bool = 0; // 0x4e2 MovB
	return 2; // 0x4e3 Return
	
Label_1252:
	HasProperty(var_48_string, var_50_bool); // 0x4e4 ObjFunc
	var_46_bool = var_50_bool; // 0x4e6 Mov
	return 2; // 0x4e7 Return
}


func_1506(var_17_object, var_20_cvector, var_21_cvector)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); // 0x5e2 PushV
	GetScene(var_24_object); // 0x5e3 Func
	var_26_string = "scripted"; // 0x5e5 PushS
	var_27_string = "blood_dir.xml"; // 0x5e6 PushS
	AddActorByType(var_25_object, var_26_string, var_24_object, var_20_cvector, var_21_cvector, var_27_string); // 0x5e7 Func
	var_28_object = Obj(); // 0x5e9 PushV
	var_28_object = var_17_object; // 0x5ea Mov
	func_1394(var_28_object); // 0x5eb NEW_2
	return 4; // 0x5ed Return
}


func_1638(var_14_object)
{
	var_15_bool = 0; var_16_bool = 0; // 0x666 PushV
	IsPlayerActor(var_14_object, var_16_bool); // 0x667 Func
	var_17_bool = var_16_bool; // 0x669 Push
	if(var_17_bool == 0) goto Label_1646; // 0x66a JumpB
	var_18_string = "attack"; // 0x66b PushS
	PlayGlobalMusic(var_18_string); // 0x66c Func
	
Label_1646:
	return 2; // 0x66e Return
}


func_1256(var_397_float, var_398_object, var_399_float, var_400_int)
{
	var_404_int = 0; var_405_string = ""; var_406_int = 0; var_407_float = 0; var_408_float = 0; var_409_float = 0; var_410_int = 0; var_411_string = ""; var_412_int = 0; var_413_float = 0; var_414_float = 0; var_415_float = 0; // 0x4e8 PushV
	var_416_bool = 0; var_417_object = Obj(); var_418_string = ""; // 0x4e9 PushV
	var_417_object = var_398_object; // 0x4ea Mov
	var_418_string = "health"; // 0x4eb MovS
	func_1244(var_416_bool, var_417_object, var_418_string); // 0x4ec NEW_2
	var_419_bool = var_416_bool == 0; // 0x4ee Not
	if(var_419_bool == 0) goto Label_1266; // 0x4ef JumpB
	var_397_float = 0.0; // 0x4f0 MovF
	return 12; // 0x4f1 Return
	
Label_1266:
	var_420_bool = 0; var_421_object = Obj(); var_422_string = ""; // 0x4f2 PushV
	var_421_object = var_398_object; // 0x4f3 Mov
	var_422_string = "armor"; // 0x4f4 MovS
	func_1244(var_420_bool, var_421_object, var_422_string); // 0x4f5 NEW_2
	var_423_bool = var_420_bool == 0; // 0x4f7 Not
	if(var_423_bool == 0) goto Label_1275; // 0x4f8 JumpB
	var_410_int = 0; // 0x4f9 MovI
	goto Label_1278; // 0x4fa Jump
	
Label_1278:
	var_424_string = "armor_"; // 0x4fe PushS
	var_425_string = ""; var_426_int = 0; // 0x4ff PushV
	var_426_int = var_400_int; // 0x500 Mov
	func_1218(var_425_string, var_426_int); // 0x501 NEW_2
	var_411_string = var_424_string + var_425_string; // 0x503 Add2
	var_431_bool = 0; var_432_object = Obj(); var_433_string = ""; // 0x504 PushV
	var_432_object = var_398_object; // 0x505 Mov
	var_433_string = var_411_string; // 0x506 Mov
	func_1244(var_431_bool, var_432_object, var_433_string); // 0x507 NEW_2
	var_434_bool = var_431_bool == 0; // 0x509 Not
	if(var_434_bool == 0) goto Label_1293; // 0x50a JumpB
	var_412_int = 0; // 0x50b MovI
	goto Label_1295; // 0x50c Jump
	
Label_1295:
	var_435_float = 0; var_436_float = 0; var_437_float = 0; // 0x50f PushV
	var_438_int = var_410_int + var_412_int; // 0x510 Add
	var_439_float = 100.0; // 0x511 PushF
	var_436_float = var_438_int / var_438_int; // 0x512 Div2
	var_437_float = 1; // 0x513 MovI
	func_1603(var_435_float, var_436_float, var_437_float); // 0x514 NEW_2
	var_413_float = var_435_float; // 0x515 Mov
	var_441_string = "health"; // 0x517 PushS
	GetProperty(var_441_string, var_414_float); // 0x518 ObjFunc
	var_442_int = 1; // 0x51a PushI
	var_443_int = var_442_int - var_413_float; // 0x51b Sub
	var_415_float = var_399_float * var_443_int; // 0x51c Mult2
	var_444_string = "health"; // 0x51d PushS
	var_445_float = 0; var_446_float = 0; var_447_float = 0; var_448_float = 0; // 0x51e PushV
	var_446_float = var_414_float - var_415_float; // 0x51f Sub2
	var_447_float = 0; // 0x520 MovI
	var_448_float = 1; // 0x521 MovI
	func_1610(var_445_float, var_446_float, var_447_float, var_448_float); // 0x522 NEW_2
	SetProperty(var_444_string, var_445_float); // 0x524 ObjFunc
	var_451_bool = 0; var_452_object = Obj(); // 0x526 PushV
	var_452_object = var_398_object; // 0x527 Mov
	func_1239(var_451_bool, var_452_object); // 0x528 NEW_2
	if(var_451_bool == 0) goto Label_1327; // 0x52a JumpB
	var_453_float = 0; // 0x52b PushV
	var_453_float = -var_415_float; // 0x52c Neg2
	func_1621(var_453_float); // 0x52d NEW_2
	
Label_1327:
	var_397_float = var_415_float; // 0x52f Mov
	return 12; // 0x530 Return
	
Label_1293:
	GetProperty(var_411_string, var_412_int); // 0x50d ObjFunc
	
Label_1275:
	var_461_string = "armor"; // 0x4fb PushS
	GetProperty(var_461_string, var_410_int); // 0x4fc ObjFunc
}


func_621(var_0_cvector, var_285_bool, var_286_float)
{
	var_287_bool = 0; var_288_cvector = CVector(0,0,0); var_289_cvector = CVector(0,0,0); var_290_cvector = CVector(0,0,0); var_291_float = 0; var_292_bool = 0; var_293_cvector = CVector(0,0,0); var_294_cvector = CVector(0,0,0); var_295_cvector = CVector(0,0,0); var_296_float = 0; // 0x26d PushV
	
Label_622:
	IsAnimationPlaying(var_292_bool); // 0x26e Func
	var_297_bool = var_292_bool == 0; // 0x270 Not
	if(var_297_bool == 0) goto Label_627; // 0x271 JumpB
	goto Label_659; // 0x272 Jump
	
Label_659:
	func_796(var_296_float); // 0x294 NEW_2
	var_285_bool = 0; // 0x296 MovB
	return 10; // 0x297 Return
	
Label_627:
	var_298_bool = 0; // 0x273 PushV
	func_692(var_298_bool); // 0x274 NEW_2
	if(var_298_bool == 0) goto Label_633; // 0x276 JumpB
	var_285_bool = 1; // 0x277 MovB
	return 10; // 0x278 Return
	
Label_633:
	var_341_bool = 0; var_342_object = Obj(); // 0x279 PushV
	var_342_object = var_0_cvector; // 0x27a MovT
	func_1370(var_341_bool, var_342_object); // 0x27b NEW_2
	var_343_bool = var_341_bool == 0; // 0x27d Not
	if(var_343_bool == 0) goto Label_641; // 0x27e JumpB
	var_285_bool = 0; // 0x27f MovB
	return 10; // 0x280 Return
	
Label_641:
	GetPFPosition(var_293_cvector); // 0x281 TObjFunc
	GetPFPosition(var_294_cvector); // 0x283 Func
	var_295_cvector = var_293_cvector - var_294_cvector; // 0x285 Sub2
	var_296_float = var_295_cvector | var_295_cvector; // 0x286 Or2
	var_344_float = var_286_float * var_286_float; // 0x287 Mult
	var_345_bool = var_296_float < var_344_float; // 0x288 LT
	if(var_345_bool == 0) goto Label_656; // 0x289 JumpB
	var_346_bool = 0; var_347_float = 0; // 0x28a PushV
	var_347_float = var_286_float; // 0x28b Mov
	func_457(var_296_float, var_346_bool, var_347_float); // 0x28c NEW_2
	var_285_bool = 1; // 0x28e MovB
	return 10; // 0x28f Return
	
Label_656:
	sync(); // 0x290 Func
	goto Label_622; // 0x292 Jump
}


func_1647()
{
	var_358_object = Obj(); var_359_object = Obj(); // 0x66f PushV
	GetScene(var_359_object); // 0x670 Func
	var_360_string = "battle"; // 0x672 PushS
	var_361_object = Obj(); // 0x673 PushV
	func_1583(var_361_object); // 0x674 NEW_2
	BroadcastMessage(var_360_string, var_361_object, var_359_object); // 0x676 Func
	return 2; // 0x678 Return
}


func_1520()
{
	var_232_cvector = CVector(0,0,0); var_233_cvector = CVector(0,0,0); var_234_cvector = CVector(0,0,0); var_235_cvector = CVector(0,0,0); var_236_cvector = CVector(0,0,0); var_237_cvector = CVector(0,0,0); // 0x5f0 PushV
	GetPosition(var_235_cvector); // 0x5f1 ObjFunc
	GetPosition(var_236_cvector); // 0x5f3 Func
	var_237_cvector = var_235_cvector - var_236_cvector; // 0x5f5 Sub2
	var_238_float = GetByIndex(var_237_cvector, 0); // 0x5f6 PushE
	var_239_float = GetByIndex(var_237_cvector, 2); // 0x5f7 PushE
	RotateAsync(var_238_float, var_239_float); // 0x5f8 Func
	return 6; // 0x5fa Return
}


func_753(var_0_cvector, var_248_bool)
{
	var_249_bool = 0; var_250_bool = 0; // 0x2f1 PushV
	var_251_string = "IsAttacking"; // 0x2f2 PushS
	var_252_int = 1; // 0x2f3 PushI
	var_253_bool = IsFuncExist(var_0_cvector, var_251_string, var_252_int); // 0x2f4 FuncExist
	if(var_253_bool == 0) goto Label_762; // 0x2f5 JumpB
	IsAttacking(var_250_bool); // 0x2f6 TObjFunc
	var_248_bool = var_250_bool; // 0x2f8 Mov
	return 2; // 0x2f9 Return
	
Label_762:
	var_248_bool = 0; // 0x2fa MovB
	return 2; // 0x2fb Return
}


func_879(var_2_object)
{
	var_12_int = 1; // 0x36f PushI
	KillTimer(var_12_int); // 0x370 Func
	var_13_object = var_2_object; // 0x372 PushT
	if(var_13_object == 0) goto Label_888; // 0x373 JumpB
	var_2_object = 0; // 0x374 TMovB
	var_14_string = "head"; // 0x375 PushS
	UnlookAsync(var_14_string); // 0x376 Func
	
Label_888:
	func_1045(var_11_object); // 0x379 NEW_2
	return 0; // 0x37b Return
}


func_1394(var_28_object)
{
	var_29_bool = 0; var_30_int = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_string = ""; var_36_bool = 0; var_37_int = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_string = ""; // 0x572 PushV
	var_43_bool = var_28_object == 0; // 0x573 NullEq
	if(var_43_bool == 0) goto Label_1398; // 0x574 JumpB
	return 14; // 0x575 Return
	
Label_1398:
	IsDead(var_36_bool); // 0x576 Func
	var_44_bool = var_36_bool; // 0x578 Push
	if(var_44_bool == 0) goto Label_1403; // 0x579 JumpB
	return 14; // 0x57a Return
	
Label_1403:
	GetSecondaryAnimationType(var_37_int); // 0x57b Func
	var_45_int = 0; // 0x57d PushI
	var_46_bool = var_37_int < var_45_int; // 0x57e LT
	if(var_46_bool == 0) goto Label_1409; // 0x57f JumpB
	return 14; // 0x580 Return
	
Label_1409:
	GetPosition(var_38_cvector); // 0x581 ObjFunc
	GetPosition(var_39_cvector); // 0x583 Func
	GetDirection(var_40_cvector); // 0x585 Func
	var_41_cvector = var_39_cvector - var_38_cvector; // 0x587 Sub2
	var_47_float = GetByIndex(var_41_cvector, 0); // 0x588 PushE
	var_48_float = GetByIndex(var_40_cvector, 0); // 0x589 PushE
	var_49_float = var_47_float * var_48_float; // 0x58a Mult
	var_50_float = GetByIndex(var_41_cvector, 2); // 0x58b PushE
	var_51_float = GetByIndex(var_40_cvector, 2); // 0x58c PushE
	var_52_float = var_50_float * var_51_float; // 0x58d Mult
	var_53_int = var_49_float + var_52_float; // 0x58e Add
	var_54_int = 0; // 0x58f PushI
	var_55_bool = var_53_int >= var_54_int; // 0x590 GE
	if(var_55_bool == 0) goto Label_1428; // 0x591 JumpB
	var_42_string = "fhit"; // 0x592 MovS
	goto Label_1429; // 0x593 Jump
	
Label_1429:
	var_56_string = "hit_react"; // 0x595 PushS
	var_57_string = "1"; // 0x596 PushS
	var_58_int = var_42_string + var_57_string; // 0x597 Add
	var_59_string = "2"; // 0x598 PushS
	var_60_int = var_42_string + var_59_string; // 0x599 Add
	var_61_int = -10; // 0x59a PushI
	FadeSecondaryAnimation(var_56_string, var_58_int, var_60_int, var_61_int); // 0x59b Func
	return 14; // 0x59d Return
	
Label_1428:
	var_42_string = "bhit"; // 0x594 MovS
}


func_1658(var_21_int)
{
	var_22_int = 0; var_23_int = 0; // 0x67a PushV
	var_24_string = "branch"; // 0x67b PushS
	GetVariable(var_24_string, var_23_int); // 0x67c Func
	var_21_int = var_23_int; // 0x67e Mov
	return 2; // 0x67f Return
}


func_1531(var_15_object)
{
	var_16_float = 0; var_17_cvector = CVector(0,0,0); var_18_float = 0; var_19_cvector = CVector(0,0,0); // 0x5fb PushV
	GetEyesHeight(var_18_float); // 0x5fc ObjFunc
	var_19_cvector = CVector(0.0, 0.0, 0.0); // 0x5fe MovV
	var_20_float = GetByIndex(var_19_cvector, 1); // 0x5ff PushE
	var_20_float = var_18_float; // 0x600 Mov
	SetByIndex(var_19_cvector, 1) = var_20_float; // 0x601 PopE
	var_21_string = "head"; // 0x602 PushS
	LookAsync(var_15_object, var_21_string, var_19_cvector); // 0x603 Func
	return 4; // 0x605 Return
}


func_127()
{
	StopGroup0(); // 0x7f Func
	Stop(); // 0x81 Func
	return 0; // 0x83 Return
}


func_383(var_1_cvector, var_2_object, var_4_int)
{
	var_50_bool = 0; var_51_bool = 0; var_52_cvector = CVector(0,0,0); var_53_bool = 0; var_54_bool = 0; var_55_cvector = CVector(0,0,0); // 0x17f PushV
	var_1_cvector = 0; // 0x180 TMovI
	
Label_385:
	var_56_string = "all"; // 0x181 PushS
	var_57_string = "attack_begin"; // 0x182 PushS
	var_58_int = 1; // 0x183 PushI
	var_59_int = var_1_cvector + var_58_int; // 0x184 Add
	var_60_int = var_57_string + var_59_int; // 0x185 Add
	HasAnimation(var_53_bool, var_56_string, var_60_int); // 0x186 Func
	var_61_bool = var_53_bool == 0; // 0x188 Not
	if(var_61_bool == 0) goto Label_395; // 0x189 JumpB
	goto Label_398; // 0x18a Jump
	
Label_398:
	var_2_object = 0; // 0x18e TMovI
	
Label_399:
	var_62_string = "attack"; // 0x18f PushS
	var_63_int = 1; // 0x190 PushI
	var_64_int = var_2_object + var_63_int; // 0x191 Add
	var_65_int = var_62_string + var_64_int; // 0x192 Add
	IsExisting3DSound(var_54_bool, var_65_int); // 0x193 Func
	var_66_bool = var_54_bool == 0; // 0x195 Not
	if(var_66_bool == 0) goto Label_408; // 0x196 JumpB
	goto Label_411; // 0x197 Jump
	
Label_411:
	var_67_string = "all"; // 0x19b PushS
	var_68_string = "bjump"; // 0x19c PushS
	GetAnimationOffset(var_55_cvector, var_67_string, var_68_string); // 0x19d Func
	var_69_float = GetByIndex(var_55_cvector, 2); // 0x19f PushE
	var_4_int = -var_69_float; // 0x1a0 Neg2
	return 6; // 0x1a1 Return
	
Label_408:
	var_70_int = 1; // 0x198 PushI
	var_2_object = var_2_object + var_70_int; // 0x199 Add2
	goto Label_399; // 0x19a Jump
	
Label_395:
	var_71_int = 1; // 0x18b PushI
	var_1_cvector = var_1_cvector + var_71_int; // 0x18c Add2
	goto Label_385; // 0x18d Jump
}


