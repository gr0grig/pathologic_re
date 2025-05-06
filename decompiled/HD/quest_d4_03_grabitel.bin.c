task_0_event_17(var_0_bool, var_1_object, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	var_11_bool = 0; var_12_bool = 0; // 0xe PushV
	IsPlayerActor(var_10_bool, var_12_bool); // 0xf Func
	var_13_bool = var_12_bool; // 0x11 Push
	if(var_13_bool == 0) goto Label_29; // 0x12 JumpB
	var_14_bool = 0; var_15_string = ""; var_16_string = ""; // 0x13 PushV
	var_15_string = "quest_d4_03"; // 0x14 MovS
	var_16_string = "gang_attack"; // 0x15 MovS
	func_1743(var_14_bool, var_15_string, var_16_string); // 0x16 NEW_2
	TaskCall(1); // 0x19 TaskCall
	func_127(); // 0x1a NEW_2
	TaskReturn(); // 0x1b TaskReturn
	
Label_29:
	return 2; // 0x1d Return
}


task_0_event_1(var_0_bool, var_1_object, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	var_11_bool = 0; var_12_bool = 0; // 0x1e PushV
	IsPlayerActor(var_10_bool, var_12_bool); // 0x1f Func
	var_13_bool = var_12_bool; // 0x21 Push
	if(var_13_bool == 0) goto Label_45; // 0x22 JumpB
	var_14_bool = 0; var_15_string = ""; var_16_string = ""; // 0x23 PushV
	var_15_string = "quest_d4_03"; // 0x24 MovS
	var_16_string = "gang_attack"; // 0x25 MovS
	func_1743(var_14_bool, var_15_string, var_16_string); // 0x26 NEW_2
	TaskCall(1); // 0x29 TaskCall
	func_127(); // 0x2a NEW_2
	TaskReturn(); // 0x2b TaskReturn
	
Label_45:
	return 2; // 0x2d Return
}


task_0_event_3(var_0_bool, var_1_object, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	var_11_bool = 0; var_12_bool = 0; // 0x2e PushV
	IsPlayerActor(var_10_bool, var_12_bool); // 0x2f Func
	var_13_bool = var_12_bool; // 0x31 Push
	if(var_13_bool == 0) goto Label_61; // 0x32 JumpB
	var_14_bool = 0; var_15_string = ""; var_16_string = ""; // 0x33 PushV
	var_15_string = "quest_d4_03"; // 0x34 MovS
	var_16_string = "gang_attack"; // 0x35 MovS
	func_1743(var_14_bool, var_15_string, var_16_string); // 0x36 NEW_2
	TaskCall(1); // 0x39 TaskCall
	func_127(); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	
Label_61:
	return 2; // 0x3d Return
}


task_0_event_26(var_0_bool, var_1_string, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	var_11_string = "attack"; // 0x3f PushS
	var_12_bool = var_10_bool == var_11_string; // 0x40 Eq
	if(var_12_bool == 0) goto Label_72; // 0x41 JumpB
	TaskCall(1); // 0x43 TaskCall
	func_127(); // 0x44 NEW_2
	TaskReturn(); // 0x45 TaskReturn
	goto Label_76; // 0x47 Jump
	
Label_76:
	return 0; // 0x4c Return
	
Label_72:
	var_517_string = ""; // 0x48 PushV
	var_517_string = var_10_bool; // 0x49 Mov
	func_81(var_10_bool, var_517_string); // 0x4a NEW_2
}


task_0_event_6(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	var_10_bool = 0; // 0x6d PushV
	var_10_bool = 0; // 0x6e MovB
	var_11_bool = var_0_bool; // 0x6f PushT
	if(var_11_bool == 0) goto Label_118; // 0x70 JumpB
	var_12_bool = 0; // 0x71 PushV
	func_125(var_12_bool); // 0x72 NEW_2
	if(var_12_bool == 0) goto Label_118; // 0x74 JumpB
	var_10_bool = 1; // 0x75 MovB
	
Label_118:
	if(var_10_bool == 0) goto Label_124; // 0x76 JumpB
	var_13_object = Obj(); // 0x77 PushV
	func_1642(var_13_object); // 0x78 NEW_2
	RemoveActor(var_13_object); // 0x7a Func
	
Label_124:
	return 0; // 0x7c Return
}


task_1_event_6(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	var_10_object = Obj(); // 0x91 PushV
	func_1642(var_10_object); // 0x92 NEW_2
	RemoveActor(var_10_object); // 0x94 Func
	Hold(); // 0x96 Func
	return 0; // 0x98 Return
}


task_2_event_6(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	var_10_object = Obj(); // 0x32f PushV
	func_1642(var_10_object); // 0x330 NEW_2
	RemoveActor(var_10_object); // 0x332 Func
	Hold(); // 0x334 Func
	return 0; // 0x336 Return
}


task_2_event_7(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_int)
{
	var_11_int = 1; // 0x369 PushI
	var_12_bool = var_10_int == var_11_int; // 0x36a Eq
	if(var_12_bool == 0) goto Label_881; // 0x36b JumpB
	var_13_object = Obj(); // 0x36c PushV
	var_13_object = var_1_object; // 0x36d MovT
	func_1755(var_13_object); // 0x36e NEW_2
	goto Label_885; // 0x370 Jump
	
Label_885:
	return 0; // 0x375 Return
	
Label_881:
	var_18_int = 0; // 0x371 PushV
	var_18_int = var_10_int; // 0x372 Mov
	func_1030(var_9_bool, var_10_int, var_18_int); // 0x373 NEW_2
}


task_2_event_1(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0; // 0x384 PushV
	var_11_bool = 0; // 0x385 MovB
	var_12_bool = var_1_object == var_10_object; // 0x386 Eq
	if(var_12_bool == 0) goto Label_907; // 0x387 JumpB
	var_13_bool = var_2_int == 0; // 0x388 Not
	if(var_13_bool == 0) goto Label_907; // 0x389 JumpB
	var_11_bool = 1; // 0x38a MovB
	
Label_907:
	if(var_11_bool == 0) goto Label_913; // 0x38b JumpB
	var_2_int = 1; // 0x38c TMovB
	var_14_object = Obj(); // 0x38d PushV
	var_14_object = var_10_object; // 0x38e Mov
	func_1579(var_14_object); // 0x38f NEW_2
	
Label_913:
	return 0; // 0x391 Return
}


task_2_event_2(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0; // 0x393 PushV
	var_11_bool = 0; // 0x394 MovB
	var_12_bool = var_1_object == var_10_object; // 0x395 Eq
	if(var_12_bool == 0) goto Label_922; // 0x396 JumpB
	var_13_int = var_2_int; // 0x397 PushT
	if(var_13_int == 0) goto Label_922; // 0x398 JumpB
	var_11_bool = 1; // 0x399 MovB
	
Label_922:
	if(var_11_bool == 0) goto Label_927; // 0x39a JumpB
	var_2_int = 0; // 0x39b TMovB
	var_14_string = "head"; // 0x39c PushS
	UnlookAsync(var_14_string); // 0x39d Func
	
Label_927:
	return 0; // 0x39f Return
}


task_2_event_10(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	RequestClearPath(var_10_object); // 0x419 Func
	return 0; // 0x41b Return
}


task_2_event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	func_886(var_10_object); // 0x425 NEW_2
	var_15_object = Obj(); // 0x427 PushV
	var_15_object = var_10_object; // 0x428 Mov
	func_1914(); // 0x429 NEW_2
	return 0; // 0x42b Return
}


task_3_event_6(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	var_10_object = Obj(); // 0x440 PushV
	func_1642(var_10_object); // 0x441 NEW_2
	RemoveActor(var_10_object); // 0x443 Func
	Hold(); // 0x445 Func
	return 0; // 0x447 Return
}


task_3_event_0(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0; // 0x457 PushV
	IsOverrideActive(var_12_bool); // 0x458 Func
	var_13_bool = var_12_bool == 0; // 0x45a Not
	if(var_13_bool == 0) goto Label_1120; // 0x45b JumpB
	var_14_object = Obj(); // 0x45c PushV
	var_14_object = var_10_object; // 0x45d Mov
	func_1781(var_14_object); // 0x45e NEW_2
	
Label_1120:
	return 2; // 0x460 Return
}


task_3_event_22(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float)
{
	return 0; // 0x4d7 Return
}


task_3_event_16(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_string)
{
	return 0; // 0x4d9 Return
}


task_3_event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	return 0; // 0x4db Return
}


event_22(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0; // 0x75c PushV
	var_14_object = var_10_object; // 0x75d Mov
	var_15_int = var_11_int; // 0x75e Mov
	var_16_float = var_12_float; // 0x75f Mov
	func_1486(var_14_object, var_15_int, var_16_float); // 0x760 NEW_2
	return 0; // 0x762 Return
}


event_43(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float, var_14_cvector, var_15_cvector)
{
	var_16_object = Obj(); var_17_int = 0; var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); // 0x764 PushV
	var_16_object = var_10_object; // 0x765 Mov
	var_17_int = var_11_int; // 0x766 Mov
	var_18_float = var_12_float; // 0x767 Mov
	var_19_cvector = var_14_cvector; // 0x768 Mov
	var_20_cvector = var_15_cvector; // 0x769 Mov
	func_1554(var_18_float, var_19_cvector, var_20_cvector); // 0x76a NEW_2
	return 0; // 0x76c Return
}


event_16(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_string)
{
	var_12_float = 0; var_13_float = 0; // 0x76d PushV
	var_14_string = "health"; // 0x76e PushS
	var_15_bool = var_11_string == var_14_string; // 0x76f Eq
	if(var_15_bool == 0) goto Label_1913; // 0x770 JumpB
	var_16_string = "health"; // 0x771 PushS
	GetProperty(var_16_string, var_13_float); // 0x772 Func
	var_17_int = 0; // 0x774 PushI
	var_18_bool = var_13_float <= var_17_int; // 0x775 LE
	if(var_18_bool == 0) goto Label_1913; // 0x776 JumpB
	SignalDeath(var_10_object); // 0x777 Func
	
Label_1913:
	return 2; // 0x779 Return
}


event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_object = Obj(); // 0x77b PushV
	var_11_object = var_10_object; // 0x77c Mov
	func_1860(var_11_object); // 0x77d NEW_2
	return 0; // 0x77f Return
}


main(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	var_10_bool = 1; // 0x0 PushB
	SensePlayerOnly(var_10_bool); // 0x1 Func
	EventDisable(3); // 0x3 EventDisable
	EventDisable(1); // 0x4 EventDisable
	var_11_float = 1.5; // 0x5 PushF
	Sleep(var_11_float); // 0x6 Func
	EventEnable(3); // 0x8 EventEnable
	EventEnable(1); // 0x9 EventEnable
	func_77(); // 0xb NEW_2
	return 0; // 0xd Return
}


func_1665(var_51_float, var_52_float, var_53_float, var_54_float)
{
	var_55_bool = var_52_float < var_53_float; // 0x682 LT
	if(var_55_bool == 0) goto Label_1670; // 0x683 JumpB
	var_51_float = var_53_float; // 0x684 Mov
	return 0; // 0x685 Return
	
Label_1670:
	var_56_bool = var_52_float > var_54_float; // 0x686 GT
	if(var_56_bool == 0) goto Label_1674; // 0x687 JumpB
	var_51_float = var_54_float; // 0x688 Mov
	return 0; // 0x689 Return
	
Label_1674:
	var_51_float = var_52_float; // 0x68a Mov
	return 0; // 0x68b Return
}


func_1282(var_33_bool, var_34_object, var_35_string, var_36_float, var_37_float, var_38_float)
{
	var_39_float = 0; var_40_float = 0; // 0x502 PushV
	var_41_bool = 0; var_42_object = Obj(); var_43_string = ""; // 0x503 PushV
	var_42_object = var_34_object; // 0x504 Mov
	var_43_string = var_35_string; // 0x505 Mov
	func_1270(var_41_bool, var_42_object, var_43_string); // 0x506 NEW_2
	var_50_bool = var_41_bool == 0; // 0x508 Not
	if(var_50_bool == 0) goto Label_1292; // 0x509 JumpB
	var_33_bool = 0; // 0x50a MovB
	return 2; // 0x50b Return
	
Label_1292:
	GetProperty(var_35_string, var_40_float); // 0x50c ObjFunc
	var_51_float = 0; var_52_float = 0; var_53_float = 0; var_54_float = 0; // 0x50e PushV
	var_52_float = var_40_float + var_36_float; // 0x50f Add2
	var_53_float = var_37_float; // 0x510 Mov
	var_54_float = var_38_float; // 0x511 Mov
	func_1665(var_51_float, var_52_float, var_53_float, var_54_float); // 0x512 NEW_2
	SetProperty(var_35_string, var_51_float); // 0x514 ObjFunc
	var_33_bool = 1; // 0x516 MovB
	return 2; // 0x517 Return
}


func_1794(var_66_int, var_67_int)
{
	var_68_int = 0; var_69_bool = 0; var_70_int = 0; var_71_bool = 0; // 0x702 PushV
	var_72_bool = var_66_int > var_67_int; // 0x703 GT
	if(var_72_bool == 0) goto Label_1801; // 0x704 JumpB
	var_73_string = "GenerateMoney: iMin > iMax"; // 0x705 PushS
	Trace(var_73_string); // 0x706 Func
	return 4; // 0x708 Return
	
Label_1801:
	var_70_int = 0; // 0x709 MovI
	var_74_bool = var_66_int != var_67_int; // 0x70a Neq
	if(var_74_bool == 0) goto Label_1808; // 0x70b JumpB
	var_75_int = var_67_int - var_66_int; // 0x70c Sub
	irand(var_70_int, var_75_int); // 0x70d Func
	goto Label_1812; // 0x70f Jump
	
Label_1812:
	var_70_int = var_70_int + var_66_int; // 0x714 Add2
	var_76_int = 0; // 0x715 PushI
	var_77_bool = var_70_int == var_76_int; // 0x716 Eq
	if(var_77_bool == 0) goto Label_1817; // 0x717 JumpB
	return 4; // 0x718 Return
	
Label_1817:
	var_78_int = 0; var_79_string = ""; // 0x719 PushV
	var_79_string = "Money"; // 0x71a MovS
	func_1855(var_78_int, var_79_string); // 0x71b NEW_2
	var_82_int = 0; // 0x71d PushI
	AddItem(var_71_bool, var_78_int, var_82_int, var_70_int); // 0x71e Func
	return 4; // 0x720 Return
	
Label_1808:
	var_83_int = 0; // 0x710 PushI
	var_84_bool = var_66_int == var_83_int; // 0x711 Eq
	if(var_84_bool == 0) goto Label_1812; // 0x712 JumpB
	return 4; // 0x713 Return
}


func_1030(var_0_bool, var_1_object, var_18_int)
{
	var_19_int = 0; // 0x407 PushI
	var_20_bool = var_18_int != var_19_int; // 0x408 Neq
	if(var_20_bool == 0) goto Label_1035; // 0x409 JumpB
	return 0; // 0x40a Return
	
Label_1035:
	var_21_bool = 0; var_22_object = Obj(); // 0x40b PushV
	var_22_object = var_1_object; // 0x40c MovT
	func_1068(var_21_bool, var_22_object); // 0x40d NEW_2
	var_57_bool = var_21_bool == 0; // 0x40f Not
	if(var_57_bool == 0) goto Label_1042; // 0x410 JumpB
	var_0_bool = 1; // 0x411 TMovB
	
Label_1042:
	var_58_int = 0; // 0x412 PushI
	KillTimer(var_58_int); // 0x413 Func
	Stop(); // 0x415 Func
	return 0; // 0x417 Return
}


func_1418(var_23_bool, var_24_object)
{
	var_25_int = 0; var_26_int = 0; // 0x58a PushV
	var_27_bool = 0; var_28_object = Obj(); // 0x58b PushV
	var_28_object = var_24_object; // 0x58c Mov
	func_1382(var_27_bool, var_28_object); // 0x58d NEW_2
	var_44_bool = var_27_bool == 0; // 0x58f Not
	if(var_44_bool == 0) goto Label_1427; // 0x590 JumpB
	var_23_bool = 0; // 0x591 MovB
	return 2; // 0x592 Return
	
Label_1427:
	var_45_bool = 0; var_46_object = Obj(); var_47_string = ""; // 0x593 PushV
	var_46_object = var_24_object; // 0x594 Mov
	var_47_string = "noaccess"; // 0x595 MovS
	func_1270(var_45_bool, var_46_object, var_47_string); // 0x596 NEW_2
	var_54_bool = var_45_bool == 0; // 0x598 Not
	if(var_54_bool == 0) goto Label_1436; // 0x599 JumpB
	var_23_bool = 1; // 0x59a MovB
	return 2; // 0x59b Return
	
Label_1436:
	var_55_string = "noaccess"; // 0x59c PushS
	GetProperty(var_55_string, var_26_int); // 0x59d ObjFunc
	var_56_int = 0; // 0x59f PushI
	var_23_bool = var_26_int == var_56_int; // 0x5a0 Eq2
	return 2; // 0x5a1 Return
}


func_139(var_391_float)
{
	var_391_float = 0.1; // 0x8c MovF
	return 0; // 0x8d Return
}


func_1676(var_90_bool, var_91_int, var_92_int)
{
	var_93_int = 0; var_94_int = 0; // 0x68c PushV
	irand(var_94_int, var_92_int); // 0x68d Func
	var_90_bool = var_94_int < var_91_int; // 0x68f LT2
	return 2; // 0x690 Return
}


func_142(var_398_int)
{
	var_398_int = 1; // 0x8f MovI
	return 0; // 0x90 Return
}


func_1681(var_22_bool, var_23_object, var_24_float)
{
	var_25_bool = var_23_object == 0; // 0x692 Not
	if(var_25_bool == 0) goto Label_1686; // 0x693 JumpB
	var_22_bool = 0; // 0x694 MovB
	return 0; // 0x695 Return
	
Label_1686:
	var_26_int = 0; // 0x696 PushI
	var_27_bool = var_24_float > var_26_int; // 0x697 GT
	if(var_27_bool == 0) goto Label_1693; // 0x698 JumpB
	var_28_int = 8; // 0x699 PushI
	SendWorldWndMessage(var_28_int); // 0x69a Func
	goto Label_1702; // 0x69c Jump
	
Label_1702:
	var_29_float = 0; // 0x6a6 PushV
	var_29_float = var_24_float; // 0x6a7 Mov
	func_1733(var_29_float); // 0x6a8 NEW_2
	var_33_bool = 0; var_34_object = Obj(); var_35_string = ""; var_36_float = 0; var_37_float = 0; var_38_float = 0; // 0x6aa PushV
	var_34_object = var_23_object; // 0x6ab Mov
	var_35_string = "reputation"; // 0x6ac MovS
	var_36_float = var_24_float; // 0x6ad Mov
	var_37_float = 0; // 0x6ae MovI
	var_38_float = 1; // 0x6af MovI
	func_1282(var_33_bool, var_34_object, var_35_string, var_36_float, var_37_float, var_38_float); // 0x6b0 NEW_2
	var_22_bool = 1; // 0x6b2 MovB
	return 0; // 0x6b3 Return
	
Label_1693:
	var_57_int = 0; // 0x69d PushI
	var_58_bool = var_24_float < var_57_int; // 0x69e LT
	if(var_58_bool == 0) goto Label_1700; // 0x69f JumpB
	var_59_int = 9; // 0x6a0 PushI
	SendWorldWndMessage(var_59_int); // 0x6a1 Func
	goto Label_1702; // 0x6a3 Jump
	
Label_1700:
	var_22_bool = 0; // 0x6a4 MovB
	return 0; // 0x6a5 Return
}


func_1554(var_16_object, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); // 0x612 PushV
	GetScene(var_23_object); // 0x613 Func
	var_25_string = "scripted"; // 0x615 PushS
	var_26_string = "blood_dir.xml"; // 0x616 PushS
	AddActorByType(var_24_object, var_25_string, var_23_object, var_19_cvector, var_20_cvector, var_26_string); // 0x617 Func
	var_27_object = Obj(); // 0x619 PushV
	var_27_object = var_16_object; // 0x61a Mov
	func_1442(var_27_object); // 0x61b NEW_2
	return 4; // 0x61d Return
}


func_663(var_0_bool, var_297_bool)
{
	var_298_cvector = CVector(0,0,0); var_299_cvector = CVector(0,0,0); var_300_cvector = CVector(0,0,0); var_301_float = 0; var_302_float = 0; var_303_cvector = CVector(0,0,0); var_304_cvector = CVector(0,0,0); var_305_cvector = CVector(0,0,0); var_306_float = 0; var_307_float = 0; // 0x297 PushV
	var_308_bool = 0; var_309_object = Obj(); // 0x298 PushV
	var_309_object = var_0_bool; // 0x299 MovT
	func_1418(var_308_bool, var_309_object); // 0x29a NEW_2
	var_310_bool = var_308_bool == 0; // 0x29c Not
	if(var_310_bool == 0) goto Label_672; // 0x29d JumpB
	var_297_bool = 0; // 0x29e MovB
	return 10; // 0x29f Return
	
Label_672:
	var_311_bool = 0; // 0x2a0 PushV
	func_752(var_307_float, var_311_bool); // 0x2a1 NEW_2
	if(var_311_bool == 0) goto Label_689; // 0x2a3 JumpB
	GetPFPosition(var_303_cvector); // 0x2a4 TObjFunc
	GetPFPosition(var_304_cvector); // 0x2a6 Func
	var_305_cvector = var_303_cvector - var_304_cvector; // 0x2a8 Sub2
	var_306_float = var_305_cvector | var_305_cvector; // 0x2a9 Or2
	GetAttackDistance(var_307_float); // 0x2aa TObjFunc
	var_312_int = 50; // 0x2ac PushI
	var_307_float = var_307_float + var_312_int; // 0x2ad Add2
	var_313_float = var_307_float * var_307_float; // 0x2ae Mult
	var_297_bool = var_306_float <= var_313_float; // 0x2af LE2
	return 10; // 0x2b0 Return
	
Label_689:
	var_297_bool = 0; // 0x2b1 MovB
	return 10; // 0x2b2 Return
}


func_1304(var_394_float, var_395_object, var_396_float, var_397_int)
{
	var_401_int = 0; var_402_string = ""; var_403_int = 0; var_404_float = 0; var_405_float = 0; var_406_float = 0; var_407_int = 0; var_408_string = ""; var_409_int = 0; var_410_float = 0; var_411_float = 0; var_412_float = 0; // 0x518 PushV
	var_413_bool = 0; var_414_object = Obj(); var_415_string = ""; // 0x519 PushV
	var_414_object = var_395_object; // 0x51a Mov
	var_415_string = "health"; // 0x51b MovS
	func_1270(var_413_bool, var_414_object, var_415_string); // 0x51c NEW_2
	var_416_bool = var_413_bool == 0; // 0x51e Not
	if(var_416_bool == 0) goto Label_1314; // 0x51f JumpB
	var_394_float = 0.0; // 0x520 MovF
	return 12; // 0x521 Return
	
Label_1314:
	var_417_bool = 0; var_418_object = Obj(); var_419_string = ""; // 0x522 PushV
	var_418_object = var_395_object; // 0x523 Mov
	var_419_string = "armor"; // 0x524 MovS
	func_1270(var_417_bool, var_418_object, var_419_string); // 0x525 NEW_2
	var_420_bool = var_417_bool == 0; // 0x527 Not
	if(var_420_bool == 0) goto Label_1323; // 0x528 JumpB
	var_407_int = 0; // 0x529 MovI
	goto Label_1326; // 0x52a Jump
	
Label_1326:
	var_421_string = "armor_"; // 0x52e PushS
	var_422_string = ""; var_423_int = 0; // 0x52f PushV
	var_423_int = var_397_int; // 0x530 Mov
	func_1244(var_422_string, var_423_int); // 0x531 NEW_2
	var_408_string = var_421_string + var_422_string; // 0x533 Add2
	var_428_bool = 0; var_429_object = Obj(); var_430_string = ""; // 0x534 PushV
	var_429_object = var_395_object; // 0x535 Mov
	var_430_string = var_408_string; // 0x536 Mov
	func_1270(var_428_bool, var_429_object, var_430_string); // 0x537 NEW_2
	var_431_bool = var_428_bool == 0; // 0x539 Not
	if(var_431_bool == 0) goto Label_1341; // 0x53a JumpB
	var_409_int = 0; // 0x53b MovI
	goto Label_1343; // 0x53c Jump
	
Label_1343:
	var_432_float = 0; var_433_float = 0; var_434_float = 0; // 0x53f PushV
	var_435_int = var_407_int + var_409_int; // 0x540 Add
	var_436_float = 100.0; // 0x541 PushF
	var_433_float = var_435_int / var_435_int; // 0x542 Div2
	var_434_float = 1; // 0x543 MovI
	func_1658(var_432_float, var_433_float, var_434_float); // 0x544 NEW_2
	var_410_float = var_432_float; // 0x545 Mov
	var_438_string = "health"; // 0x547 PushS
	GetProperty(var_438_string, var_411_float); // 0x548 ObjFunc
	var_439_int = 1; // 0x54a PushI
	var_440_int = var_439_int - var_410_float; // 0x54b Sub
	var_412_float = var_396_float * var_440_int; // 0x54c Mult2
	var_441_string = "health"; // 0x54d PushS
	var_442_float = 0; var_443_float = 0; var_444_float = 0; var_445_float = 0; // 0x54e PushV
	var_443_float = var_411_float - var_412_float; // 0x54f Sub2
	var_444_float = 0; // 0x550 MovI
	var_445_float = 1; // 0x551 MovI
	func_1665(var_442_float, var_443_float, var_444_float, var_445_float); // 0x552 NEW_2
	SetProperty(var_441_string, var_442_float); // 0x554 ObjFunc
	var_448_bool = 0; var_449_object = Obj(); // 0x556 PushV
	var_449_object = var_395_object; // 0x557 Mov
	func_1265(var_448_bool, var_449_object); // 0x558 NEW_2
	if(var_448_bool == 0) goto Label_1375; // 0x55a JumpB
	var_450_float = 0; // 0x55b PushV
	var_450_float = -var_412_float; // 0x55c Neg2
	func_1716(var_450_float); // 0x55d NEW_2
	
Label_1375:
	var_394_float = var_412_float; // 0x55f Mov
	return 12; // 0x560 Return
	
Label_1341:
	GetProperty(var_408_string, var_409_int); // 0x53d ObjFunc
	
Label_1323:
	var_458_string = "armor"; // 0x52b PushS
	GetProperty(var_458_string, var_407_int); // 0x52c ObjFunc
}


func_153(var_0_bool, var_3_int, var_5_bool, var_22_object, var_23_bool, var_24_float, var_131_bool, var_223_bool)
{
	var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_bool = 0; var_35_float = 0; var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_bool = 0; var_40_bool = 0; var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_bool = 0; var_46_float = 0; // 0x99 PushV
	func_382(var_44_cvector, var_45_bool, var_46_float); // 0x9b NEW_2
	var_5_bool = 0; // 0x9d TMovI
	var_69_string = "@GetAttackDistance"; // 0x9e PushS
	var_70_int = 1; // 0x9f PushI
	var_71_bool = IsFuncExist(var_22_object, var_69_string, var_70_int); // 0xa0 FuncExist
	if(var_71_bool == 0) goto Label_167; // 0xa1 JumpB
	GetAttackDistance(var_36_float); // 0xa2 ObjFunc
	var_72_int = 50; // 0xa4 PushI
	var_36_float = var_36_float + var_72_int; // 0xa5 Add2
	goto Label_168; // 0xa6 Jump
	
Label_168:
	var_73_int = 150; // 0xa8 PushI
	var_74_bool = var_36_float >= var_73_int; // 0xa9 GE
	if(var_74_bool == 0) goto Label_172; // 0xaa JumpB
	var_36_float = 150; // 0xab MovI
	
Label_172:
	var_3_int = 0; // 0xac TMovB
	var_0_bool = var_22_object; // 0xad TMov
	IsPlayerActor(var_0_bool, var_39_bool); // 0xae Func
	var_75_bool = var_39_bool; // 0xb0 Push
	if(var_75_bool == 0) goto Label_186; // 0xb1 JumpB
	var_76_string = "attack"; // 0xb2 PushS
	PlayGlobalMusic(var_76_string); // 0xb3 Func
	var_77_object = Obj(); // 0xb5 PushV
	func_1642(var_77_object); // 0xb6 NEW_2
	SendPlayerEnemy(var_22_object, var_77_object); // 0xb8 Func
	
Label_186:
	var_80_bool = var_23_bool; // 0xba Push
	if(var_80_bool == 0) goto Label_190; // 0xbb JumpB
	var_40_bool = 0; // 0xbc MovB
	goto Label_191; // 0xbd Jump
	
Label_191:
	var_81_float = 400.0; // 0xbf PushF
	var_41_float = var_81_float + var_36_float; // 0xc0 Add2
	
Label_193:
	var_82_bool = 0; // 0xc1 PushV
	var_82_bool = 0; // 0xc2 MovB
	var_83_bool = 0; var_84_object = Obj(); // 0xc3 PushV
	var_84_object = var_0_bool; // 0xc4 MovT
	func_1418(var_83_bool, var_84_object); // 0xc5 NEW_2
	if(var_83_bool == 0) goto Label_203; // 0xc7 JumpB
	var_117_bool = var_3_int == 0; // 0xc8 Not
	if(var_117_bool == 0) goto Label_203; // 0xc9 JumpB
	var_82_bool = 1; // 0xca MovB
	
Label_203:
	if(var_82_bool == 0) goto Label_365; // 0xcb JumpB
	func_795(var_46_float); // 0xcd NEW_2
	GetPFPosition(var_37_cvector); // 0xcf TObjFunc
	GetPFPosition(var_38_cvector); // 0xd1 Func
	var_42_cvector = var_37_cvector - var_38_cvector; // 0xd3 Sub2
	var_43_float = var_42_cvector | var_42_cvector; // 0xd4 Or2
	var_123_float = var_41_float * var_41_float; // 0xd5 Mult
	var_124_bool = var_43_float >= var_123_float; // 0xd6 GE
	if(var_124_bool == 0) goto Label_231; // 0xd7 JumpB
	var_125_bool = 0; var_126_object = Obj(); var_127_float = 0; var_128_float = 0; var_129_bool = 0; var_130_bool = 0; // 0xd8 PushV
	var_126_object = var_0_bool; // 0xd9 MovT
	var_127_float = var_36_float; // 0xda Mov
	var_128_float = 3000.0; // 0xdb MovF
	var_129_bool = 1; // 0xdc MovB
	var_130_bool = 0; // 0xdd MovB
	TaskCall(2); // 0xde TaskCall
	func_823(var_133_bool, var_125_bool, var_126_object, var_127_float, var_128_float, var_129_bool, var_130_bool); // 0xdf NEW_2
	TaskReturn(); // 0xe0 TaskReturn
	var_208_bool = var_131_bool == 0; // 0xe2 Not
	if(var_208_bool == 0) goto Label_229; // 0xe3 JumpB
	goto Label_365; // 0xe4 Jump
	
Label_365:
	WaitForAnimEnd(); // 0x16d Func
	var_209_int = var_3_int; // 0x16f PushT
	if(var_209_int == 0) goto Label_370; // 0x170 JumpB
	return 22; // 0x171 Return
	
Label_370:
	var_210_string = "all"; // 0x172 PushS
	var_211_string = "attack_off"; // 0x173 PushS
	PlayAnimation(var_210_string, var_211_string); // 0x174 Func
	WaitForAnimEnd(); // 0x176 Func
	var_212_bool = var_39_bool; // 0x178 Push
	if(var_212_bool == 0) goto Label_381; // 0x179 JumpB
	var_213_float = 2.0; // 0x17a PushF
	Sleep(var_213_float); // 0x17b Func
	
Label_381:
	return 22; // 0x17d Return
	
Label_229:
	var_40_bool = 0; // 0xe5 MovB
	goto Label_364; // 0xe6 Jump
	
Label_364:
	goto Label_193; // 0x16c Jump
	
Label_231:
	var_214_float = var_24_float * var_24_float; // 0xe7 Mult
	var_215_bool = var_43_float >= var_214_float; // 0xe8 GE
	if(var_215_bool == 0) goto Label_356; // 0xe9 JumpB
	GetPFPosition(var_44_cvector); // 0xea TObjFunc
	CanReachByPF(var_45_bool, var_44_cvector); // 0xec Func
	var_216_bool = var_45_bool == 0; // 0xee Not
	if(var_216_bool == 0) goto Label_255; // 0xef JumpB
	var_217_bool = 0; var_218_object = Obj(); var_219_float = 0; var_220_float = 0; var_221_bool = 0; var_222_bool = 0; // 0xf0 PushV
	var_218_object = var_0_bool; // 0xf1 MovT
	var_219_float = var_36_float; // 0xf2 Mov
	var_220_float = 3000.0; // 0xf3 MovF
	var_221_bool = 1; // 0xf4 MovB
	var_222_bool = 0; // 0xf5 MovB
	TaskCall(2); // 0xf6 TaskCall
	func_823(var_225_bool, var_217_bool, var_218_object, var_219_float, var_220_float, var_221_bool, var_222_bool); // 0xf7 NEW_2
	TaskReturn(); // 0xf8 TaskReturn
	var_226_bool = var_223_bool == 0; // 0xfa Not
	if(var_226_bool == 0) goto Label_253; // 0xfb JumpB
	goto Label_365; // 0xfc Jump
	
Label_253:
	var_40_bool = 0; // 0xfd MovB
	goto Label_193; // 0xfe Jump
	
Label_255:
	var_227_bool = var_40_bool == 0; // 0xff Not
	if(var_227_bool == 0) goto Label_280; // 0x100 JumpB
	var_228_object = Obj(); // 0x101 PushV
	var_228_object = var_0_bool; // 0x102 MovT
	func_1568(); // 0x103 NEW_2
	var_237_string = "all"; // 0x105 PushS
	var_238_string = "attack_on"; // 0x106 PushS
	PlayAnimation(var_237_string, var_238_string); // 0x107 Func
	WaitForAnimEnd(); // 0x109 Func
	func_795(var_46_float); // 0x10c NEW_2
	StopAsync(); // 0x10e Func
	var_40_bool = 1; // 0x110 MovB
	var_239_bool = 0; var_240_object = Obj(); // 0x111 PushV
	var_240_object = var_0_bool; // 0x112 MovT
	func_1418(var_239_bool, var_240_object); // 0x113 NEW_2
	var_241_bool = var_239_bool == 0; // 0x115 Not
	if(var_241_bool == 0) goto Label_280; // 0x116 JumpB
	goto Label_365; // 0x117 Jump
	
Label_280:
	rand(var_46_float); // 0x118 Func
	var_242_bool = 0; // 0x11a PushV
	var_242_bool = 1; // 0x11b MovB
	var_243_float = 0.25; // 0x11c PushF
	var_244_bool = var_46_float < var_243_float; // 0x11d LT
	if(var_244_bool == 0) goto Label_292; // 0x11e JumpB
	var_245_bool = 0; // 0x11f PushV
	func_752(var_242_bool, var_245_bool); // 0x120 NEW_2
	if(var_245_bool == 0) goto Label_292; // 0x122 JumpB
	var_242_bool = 0; // 0x123 MovB
	
Label_292:
	if(var_242_bool == 0) goto Label_309; // 0x124 JumpB
	Face(var_0_bool); // 0x125 Func
	func_802(); // 0x128 NEW_2
	var_280_string = "all"; // 0x12a PushS
	var_281_string = "attack_stay"; // 0x12b PushS
	PlayAnimation(var_280_string, var_281_string); // 0x12c Func
	var_282_bool = 0; var_283_float = 0; // 0x12e PushV
	var_283_float = var_24_float; // 0x12f Mov
	func_620(var_46_float, var_282_bool, var_283_float); // 0x130 NEW_2
	StopAsync(); // 0x132 Func
	goto Label_355; // 0x134 Jump
	
Label_355:
	goto Label_364; // 0x163 Jump
	
Label_309:
	Face(var_0_bool); // 0x135 Func
	var_501_string = "all"; // 0x137 PushS
	var_502_string = "fjump"; // 0x138 PushS
	PlayAnimation(var_501_string, var_502_string); // 0x139 Func
	WaitForAnimEnd(); // 0x13b Func
	func_795(var_46_float); // 0x13e NEW_2
	var_503_cvector = CVector(0.0, 0.0, 0.0); // 0x140 PushVec
	SetSpeed(var_503_cvector); // 0x141 Func
	Stop(); // 0x143 Func
	StopAsync(); // 0x145 Func
	var_504_bool = 0; // 0x147 PushV
	func_752(var_46_float, var_504_bool); // 0x148 NEW_2
	var_505_bool = var_504_bool == 0; // 0x14a Not
	if(var_505_bool == 0) goto Label_355; // 0x14b JumpB
	var_506_bool = 0; var_507_object = Obj(); // 0x14c PushV
	var_507_object = var_0_bool; // 0x14d MovT
	func_1418(var_506_bool, var_507_object); // 0x14e NEW_2
	var_508_bool = var_506_bool == 0; // 0x150 Not
	if(var_508_bool == 0) goto Label_339; // 0x151 JumpB
	goto Label_365; // 0x152 Jump
	
Label_339:
	GetPFPosition(var_37_cvector); // 0x153 TObjFunc
	GetPFPosition(var_38_cvector); // 0x155 Func
	var_42_cvector = var_37_cvector - var_38_cvector; // 0x157 Sub2
	var_43_float = var_42_cvector | var_42_cvector; // 0x158 Or2
	var_509_float = var_24_float * var_24_float; // 0x159 Mult
	var_510_bool = var_43_float < var_509_float; // 0x15a LT
	if(var_510_bool == 0) goto Label_355; // 0x15b JumpB
	var_511_bool = 0; var_512_float = 0; // 0x15c PushV
	var_512_float = var_24_float; // 0x15d Mov
	func_456(var_46_float, var_511_bool, var_512_float); // 0x15e NEW_2
	var_513_bool = var_511_bool == 0; // 0x160 Not
	if(var_513_bool == 0) goto Label_355; // 0x161 JumpB
	goto Label_365; // 0x162 Jump
	
Label_356:
	var_514_bool = 0; var_515_float = 0; // 0x164 PushV
	var_515_float = var_24_float; // 0x165 Mov
	func_456(var_46_float, var_514_bool, var_515_float); // 0x166 NEW_2
	var_516_bool = var_514_bool == 0; // 0x168 Not
	if(var_516_bool == 0) goto Label_363; // 0x169 JumpB
	goto Label_365; // 0x16a Jump
	
Label_363:
	var_40_bool = 1; // 0x16b MovB
	
Label_190:
	var_40_bool = 1; // 0xbe MovB
	
Label_167:
	var_36_float = var_24_float; // 0xa7 Mov
}


func_795(var_0_bool)
{
	var_118_object = Obj(); // 0x31b PushV
	var_118_object = var_0_bool; // 0x31c MovT
	func_1755(var_118_object); // 0x31d NEW_2
	return 0; // 0x31f Return
}


func_1052(var_0_bool)
{
	var_0_bool = 1; // 0x41c TMovB
	var_14_int = 0; // 0x41d PushI
	KillTimer(var_14_int); // 0x41e Func
	Stop(); // 0x420 Func
	return 0; // 0x422 Return
}


func_1568()
{
	var_229_cvector = CVector(0,0,0); var_230_cvector = CVector(0,0,0); var_231_cvector = CVector(0,0,0); var_232_cvector = CVector(0,0,0); var_233_cvector = CVector(0,0,0); var_234_cvector = CVector(0,0,0); // 0x620 PushV
	GetPosition(var_232_cvector); // 0x621 ObjFunc
	GetPosition(var_233_cvector); // 0x623 Func
	var_234_cvector = var_232_cvector - var_233_cvector; // 0x625 Sub2
	var_235_float = GetByIndex(var_234_cvector, 0); // 0x626 PushE
	var_236_float = GetByIndex(var_234_cvector, 2); // 0x627 PushE
	RotateAsync(var_235_float, var_236_float); // 0x628 Func
	return 6; // 0x62a Return
}


func_800(var_459_int)
{
	var_459_int = 0; // 0x320 MovI
	return 0; // 0x321 Return
}


func_802()
{
	var_251_string = ""; // 0x322 PushV
	var_251_string = "attack_stay"; // 0x323 MovS
	func_1601(var_251_string); // 0x324 NEW_2
	return 0; // 0x326 Return
}


func_417(var_0_bool, var_380_float, var_381_int)
{
	var_382_object = Obj(); var_383_float = 0; var_384_float = 0; var_385_object = Obj(); var_386_float = 0; var_387_float = 0; // 0x1a1 PushV
	var_388_float = 0.9; // 0x1a2 PushF
	var_389_float = var_380_float * var_388_float; // 0x1a3 Mult
	GetVictim(var_389_float, var_385_object); // 0x1a4 Func
	ReportAttack(var_0_bool); // 0x1a6 Func
	var_390_bool = var_385_object == var_0_bool; // 0x1a8 Eq
	if(var_390_bool == 0) goto Label_454; // 0x1a9 JumpB
	var_391_float = 0; var_392_object = Obj(); var_393_int = 0; // 0x1aa PushV
	var_392_object = var_385_object; // 0x1ab Mov
	var_393_int = var_381_int; // 0x1ac Mov
	func_139(var_393_int); // 0x1ad NEW_2
	var_386_float = var_391_float; // 0x1ae Mov
	var_394_float = 0; var_395_object = Obj(); var_396_float = 0; var_397_int = 0; // 0x1b0 PushV
	var_395_object = var_385_object; // 0x1b1 Mov
	var_396_float = var_386_float; // 0x1b2 Mov
	var_398_int = 0; var_399_object = Obj(); var_400_int = 0; // 0x1b3 PushV
	var_399_object = var_385_object; // 0x1b4 Mov
	var_400_int = var_381_int; // 0x1b5 Mov
	func_142(var_400_int); // 0x1b6 NEW_2
	var_397_int = var_398_int; // 0x1b7 Mov
	func_1304(var_394_float, var_395_object, var_396_float, var_397_int); // 0x1b9 NEW_2
	var_387_float = var_394_float; // 0x1ba Mov
	var_459_int = 0; // 0x1bc PushV
	func_800(var_459_int); // 0x1bd NEW_2
	ReportHit(var_0_bool, var_459_int, var_387_float, var_386_float); // 0x1bf Func
	var_460_object = Obj(); var_461_float = 0; // 0x1c1 PushV
	var_460_object = var_385_object; // 0x1c2 Mov
	var_461_float = var_387_float; // 0x1c3 Mov
	func_807(); // 0x1c4 NEW_2
	
Label_454:
	return 6; // 0x1c6 Return
}


func_928(var_0_bool, var_1_string, var_154_bool, var_155_object, var_156_float, var_157_float, var_158_bool, var_159_bool)
{
	var_160_bool = 0; var_161_bool = 0; var_162_object = Obj(); var_163_cvector = CVector(0,0,0); var_164_cvector = CVector(0,0,0); var_165_cvector = CVector(0,0,0); var_166_float = 0; var_167_object = Obj(); var_168_bool = 0; var_169_bool = 0; var_170_object = Obj(); var_171_cvector = CVector(0,0,0); var_172_cvector = CVector(0,0,0); var_173_cvector = CVector(0,0,0); var_174_float = 0; var_175_object = Obj(); // 0x3a0 PushV
	var_0_bool = 0; // 0x3a1 TMovB
	var_1_string = var_155_object; // 0x3a2 TMov
	var_169_bool = var_159_bool; // 0x3a3 Mov
	
Label_932:
	var_176_bool = 0; var_177_object = Obj(); // 0x3a4 PushV
	var_177_object = var_155_object; // 0x3a5 Mov
	func_1068(var_176_bool, var_177_object); // 0x3a6 NEW_2
	var_180_bool = var_176_bool == 0; // 0x3a8 Not
	if(var_180_bool == 0) goto Label_940; // 0x3a9 JumpB
	var_154_bool = 0; // 0x3aa MovB
	return 16; // 0x3ab Return
	
Label_940:
	GetPosition(var_171_cvector); // 0x3ac ObjFunc
	GetPosition(var_172_cvector); // 0x3ae Func
	var_173_cvector = var_171_cvector - var_172_cvector; // 0x3b0 Sub2
	var_174_float = var_173_cvector | var_173_cvector; // 0x3b1 Or2
	var_181_bool = 0; // 0x3b2 PushV
	var_181_bool = 0; // 0x3b3 MovB
	var_182_int = 0; // 0x3b4 PushI
	var_183_bool = var_157_float > var_182_int; // 0x3b5 GT
	if(var_183_bool == 0) goto Label_955; // 0x3b6 JumpB
	var_184_float = var_157_float * var_157_float; // 0x3b7 Mult
	var_185_bool = var_174_float > var_184_float; // 0x3b8 GT
	if(var_185_bool == 0) goto Label_955; // 0x3b9 JumpB
	var_181_bool = 1; // 0x3ba MovB
	
Label_955:
	if(var_181_bool == 0) goto Label_960; // 0x3bb JumpB
	Stop(); // 0x3bc Func
	var_154_bool = 0; // 0x3be MovB
	return 16; // 0x3bf Return
	
Label_960:
	var_186_float = var_156_float * var_156_float; // 0x3c0 Mult
	var_187_bool = var_174_float > var_186_float; // 0x3c1 GT
	if(var_187_bool == 0) goto Label_1022; // 0x3c2 JumpB
	GetPFPosition(var_171_cvector); // 0x3c3 ObjFunc
	FindPathTo(var_175_object, var_171_cvector); // 0x3c5 Func
	var_188_bool = var_175_object != 0; // 0x3c7 NullNeq
	if(var_188_bool == 0) goto Label_971; // 0x3c8 JumpB
	var_170_object = var_175_object; // 0x3c9 Mov
	var_175_object = 0; // 0x3ca SetNull
	
Label_971:
	var_189_bool = var_170_object != 0; // 0x3cb NullNeq
	if(var_189_bool == 0) goto Label_1004; // 0x3cc JumpB
	var_190_bool = var_169_bool; // 0x3cd Push
	if(var_190_bool == 0) goto Label_981; // 0x3ce JumpB
	var_169_bool = 0; // 0x3cf MovB
	RotatePath(var_170_object, var_168_bool); // 0x3d0 Func
	var_191_bool = var_168_bool == 0; // 0x3d2 Not
	if(var_191_bool == 0) goto Label_981; // 0x3d3 JumpB
	goto Label_1028; // 0x3d4 Jump
	
Label_1028:
	var_154_bool = !var_0_bool; // 0x404 Not2
	return 16; // 0x405 Return
	
Label_981:
	var_192_int = 0; // 0x3d5 PushI
	var_193_float = 0.3; // 0x3d6 PushF
	SetTimer(var_192_int, var_193_float); // 0x3d7 Func
	var_194_string = ""; // 0x3d9 PushV
	func_1075(var_194_string); // 0x3da NEW_2
	var_195_string = ""; // 0x3dc PushV
	func_1077(var_195_string); // 0x3dd NEW_2
	FollowPath(var_170_object, var_158_bool, var_168_bool, var_194_string, var_195_string); // 0x3df Func
	var_196_bool = var_168_bool == 0; // 0x3e1 Not
	if(var_196_bool == 0) goto Label_1002; // 0x3e2 JumpB
	var_197_bool = var_0_bool; // 0x3e3 PushT
	if(var_197_bool == 0) goto Label_1000; // 0x3e4 JumpB
	var_170_object = 0; // 0x3e5 SetNull
	goto Label_1028; // 0x3e6 Jump
	
Label_1000:
	goto Label_1027; // 0x3e8 Jump
	
Label_1027:
	goto Label_932; // 0x403 Jump
	
Label_1002:
	var_170_object = 0; // 0x3ea SetNull
	goto Label_1020; // 0x3eb Jump
	
Label_1020:
	var_175_object = 0; // 0x3fc SetNull
	goto Label_1026; // 0x3fd Jump
	
Label_1026:
	var_170_object = 0; // 0x402 SetNull
	
Label_1004:
	var_198_int = 0; // 0x3ec PushI
	KillTimer(var_198_int); // 0x3ed Func
	var_199_float = 0.5; // 0x3ef PushF
	Sleep(var_199_float, var_168_bool); // 0x3f0 Func
	var_200_bool = var_168_bool == 0; // 0x3f2 Not
	if(var_200_bool == 0) goto Label_1016; // 0x3f3 JumpB
	var_201_bool = var_0_bool; // 0x3f4 PushT
	if(var_201_bool == 0) goto Label_1016; // 0x3f5 JumpB
	var_170_object = 0; // 0x3f6 SetNull
	goto Label_1028; // 0x3f7 Jump
	
Label_1016:
	var_202_int = 0; // 0x3f8 PushI
	var_203_float = 0.3; // 0x3f9 PushF
	SetTimer(var_202_int, var_203_float); // 0x3fa Func
	
Label_1022:
	var_204_int = 0; // 0x3fe PushI
	KillTimer(var_204_int); // 0x3ff Func
	goto Label_1028; // 0x401 Jump
}


func_1825()
{
	var_61_int = 0; var_62_bool = 0; var_63_int = 0; var_64_bool = 0; // 0x721 PushV
	var_65_int = 0; // 0x722 PushI
	ClearSubContainer(var_65_int); // 0x723 Func
	var_66_int = 0; var_67_int = 0; // 0x725 PushV
	var_66_int = 300; // 0x726 MovI
	var_67_int = 750; // 0x727 MovI
	func_1794(var_66_int, var_67_int); // 0x728 NEW_2
	var_85_string = ""; var_86_int = 0; var_87_int = 0; // 0x72a PushV
	var_85_string = "Knife"; // 0x72b MovS
	var_86_int = 1; // 0x72c MovI
	var_87_int = 8; // 0x72d MovI
	func_1590(var_85_string, var_86_int, var_87_int); // 0x72e NEW_2
	var_96_string = ""; var_97_int = 0; var_98_int = 0; // 0x730 PushV
	var_96_string = "lockpick"; // 0x731 MovS
	var_97_int = 1; // 0x732 MovI
	var_98_int = 6; // 0x733 MovI
	func_1590(var_96_string, var_97_int, var_98_int); // 0x734 NEW_2
	var_99_int = 0; var_100_string = ""; // 0x736 PushV
	var_100_string = "grabitel_mark"; // 0x737 MovS
	func_1855(var_99_int, var_100_string); // 0x738 NEW_2
	var_101_int = 0; // 0x73a PushI
	var_102_int = 1; // 0x73b PushI
	AddItem(var_64_bool, var_99_int, var_101_int, var_102_int); // 0x73c Func
	return 4; // 0x73e Return
}


func_1442(var_27_object)
{
	var_28_bool = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = ""; var_35_bool = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = ""; // 0x5a2 PushV
	var_42_bool = var_27_object == 0; // 0x5a3 NullEq
	if(var_42_bool == 0) goto Label_1446; // 0x5a4 JumpB
	return 14; // 0x5a5 Return
	
Label_1446:
	IsDead(var_35_bool); // 0x5a6 Func
	var_43_bool = var_35_bool; // 0x5a8 Push
	if(var_43_bool == 0) goto Label_1451; // 0x5a9 JumpB
	return 14; // 0x5aa Return
	
Label_1451:
	GetSecondaryAnimationType(var_36_int); // 0x5ab Func
	var_44_int = 0; // 0x5ad PushI
	var_45_bool = var_36_int < var_44_int; // 0x5ae LT
	if(var_45_bool == 0) goto Label_1457; // 0x5af JumpB
	return 14; // 0x5b0 Return
	
Label_1457:
	GetPosition(var_37_cvector); // 0x5b1 ObjFunc
	GetPosition(var_38_cvector); // 0x5b3 Func
	GetDirection(var_39_cvector); // 0x5b5 Func
	var_40_cvector = var_38_cvector - var_37_cvector; // 0x5b7 Sub2
	var_46_float = GetByIndex(var_40_cvector, 0); // 0x5b8 PushE
	var_47_float = GetByIndex(var_39_cvector, 0); // 0x5b9 PushE
	var_48_float = var_46_float * var_47_float; // 0x5ba Mult
	var_49_float = GetByIndex(var_40_cvector, 2); // 0x5bb PushE
	var_50_float = GetByIndex(var_39_cvector, 2); // 0x5bc PushE
	var_51_float = var_49_float * var_50_float; // 0x5bd Mult
	var_52_int = var_48_float + var_51_float; // 0x5be Add
	var_53_int = 0; // 0x5bf PushI
	var_54_bool = var_52_int >= var_53_int; // 0x5c0 GE
	if(var_54_bool == 0) goto Label_1476; // 0x5c1 JumpB
	var_41_string = "fhit"; // 0x5c2 MovS
	goto Label_1477; // 0x5c3 Jump
	
Label_1477:
	var_55_string = "hit_react"; // 0x5c5 PushS
	var_56_string = "1"; // 0x5c6 PushS
	var_57_int = var_41_string + var_56_string; // 0x5c7 Add
	var_58_string = "2"; // 0x5c8 PushS
	var_59_int = var_41_string + var_58_string; // 0x5c9 Add
	var_60_int = -10; // 0x5ca PushI
	FadeSecondaryAnimation(var_55_string, var_57_int, var_59_int, var_60_int); // 0x5cb Func
	return 14; // 0x5cd Return
	
Label_1476:
	var_41_string = "bhit"; // 0x5c4 MovS
}


func_807()
{
	return 0; // 0x328 Return
}


func_809(var_484_bool)
{
	var_484_bool = 1; // 0x329 MovB
	return 0; // 0x32a Return
}


func_811(var_376_int)
{
	var_376_int = 1; // 0x32b MovI
	return 0; // 0x32c Return
}


func_1579(var_14_object)
{
	var_15_float = 0; var_16_cvector = CVector(0,0,0); var_17_float = 0; var_18_cvector = CVector(0,0,0); // 0x62b PushV
	GetEyesHeight(var_17_float); // 0x62c ObjFunc
	var_18_cvector = CVector(0.0, 0.0, 0.0); // 0x62e MovV
	var_19_float = GetByIndex(var_18_cvector, 1); // 0x62f PushE
	var_19_float = var_17_float; // 0x630 Mov
	SetByIndex(var_18_cvector, 1) = var_19_float; // 0x631 PopE
	var_20_string = "head"; // 0x632 PushS
	LookAsync(var_14_object, var_20_string, var_18_cvector); // 0x633 Func
	return 4; // 0x635 Return
}


func_813(var_371_float)
{
	var_371_float = 0.5; // 0x32d MovF
	return 0; // 0x32e Return
}


func_1068(var_21_bool, var_22_object)
{
	var_23_bool = 0; var_24_object = Obj(); // 0x42d PushV
	var_24_object = var_22_object; // 0x42e Mov
	func_1418(var_23_bool, var_24_object); // 0x42f NEW_2
	var_21_bool = var_23_bool; // 0x430 Mov
	return 0; // 0x432 Return
}


func_691(var_295_bool)
{
	var_296_bool = 0; // 0x2b3 PushV
	var_296_bool = 0; // 0x2b4 MovB
	var_297_bool = 0; // 0x2b5 PushV
	func_663(var_296_bool, var_297_bool); // 0x2b6 NEW_2
	if(var_297_bool == 0) goto Label_702; // 0x2b8 JumpB
	var_314_bool = 0; // 0x2b9 PushV
	func_707(var_295_bool, var_296_bool, var_314_bool); // 0x2ba NEW_2
	if(var_314_bool == 0) goto Label_702; // 0x2bc JumpB
	var_296_bool = 1; // 0x2bd MovB
	
Label_702:
	if(var_296_bool == 0) goto Label_705; // 0x2be JumpB
	var_295_bool = 1; // 0x2bf MovB
	return 0; // 0x2c0 Return
	
Label_705:
	var_295_bool = 0; // 0x2c1 MovB
	return 0; // 0x2c2 Return
}


func_1075(var_194_string)
{
	var_194_string = "walk"; // 0x433 MovS
	return 0; // 0x434 Return
}


func_1077(var_195_string)
{
	var_195_string = "run"; // 0x435 MovS
	return 0; // 0x436 Return
}


func_1716(var_450_float)
{
	var_451_object = Obj(); var_452_object = Obj(); // 0x6b4 PushV
	CreateFloatVector(var_452_object); // 0x6b5 Func
	add(var_450_float); // 0x6b7 ObjFunc
	var_453_int = 0; // 0x6b9 PushI
	var_454_bool = var_450_float < var_453_int; // 0x6ba LT
	if(var_454_bool == 0) goto Label_1728; // 0x6bb JumpB
	var_455_float = 0.7; // 0x6bc PushF
	var_456_int = 500; // 0x6bd PushI
	RumblePlay(var_455_float, var_456_int); // 0x6be Func
	
Label_1728:
	var_457_int = 15; // 0x6c0 PushI
	SendWorldWndMessage(var_457_int, var_452_object); // 0x6c1 Func
	return 2; // 0x6c3 Return
}


func_823(var_2_object, var_125_bool, var_126_object, var_127_float, var_128_float, var_129_bool, var_130_bool)
{
	var_134_bool = 0; var_135_bool = 0; var_136_bool = 0; var_137_bool = 0; // 0x337 PushV
	var_138_object = Obj(); // 0x338 PushV
	var_138_object = var_126_object; // 0x339 Mov
	func_1755(var_138_object); // 0x33a NEW_2
	var_139_int = 1; // 0x33c PushI
	var_140_int = 5; // 0x33d PushI
	SetTimer(var_139_int, var_140_int); // 0x33e Func
	CanSee(var_136_bool, var_126_object); // 0x340 Func
	var_141_bool = var_136_bool; // 0x342 Push
	if(var_141_bool == 0) goto Label_842; // 0x343 JumpB
	var_2_object = 1; // 0x344 TMovB
	var_142_object = Obj(); // 0x345 PushV
	var_142_object = var_126_object; // 0x346 Mov
	func_1579(var_142_object); // 0x347 NEW_2
	goto Label_843; // 0x349 Jump
	
Label_843:
	var_149_bool = 0; var_150_object = Obj(); // 0x34b PushV
	var_150_object = var_126_object; // 0x34c Mov
	func_1265(var_149_bool, var_150_object); // 0x34d NEW_2
	if(var_149_bool == 0) goto Label_853; // 0x34f JumpB
	var_153_object = Obj(); // 0x350 PushV
	func_1642(var_153_object); // 0x351 NEW_2
	SendPlayerEnemy(var_126_object, var_153_object); // 0x353 Func
	
Label_853:
	var_154_bool = 0; var_155_object = Obj(); var_156_float = 0; var_157_float = 0; var_158_bool = 0; var_159_bool = 0; // 0x355 PushV
	var_155_object = var_126_object; // 0x356 Mov
	var_156_float = var_127_float; // 0x357 Mov
	var_157_float = var_128_float; // 0x358 Mov
	var_158_bool = var_129_bool; // 0x359 Mov
	var_159_bool = var_130_bool; // 0x35a Mov
	func_928(var_136_bool, var_137_bool, var_154_bool, var_155_object, var_156_float, var_157_float, var_158_bool, var_159_bool); // 0x35b NEW_2
	var_137_bool = var_154_bool; // 0x35c Mov
	var_205_object = var_2_object; // 0x35e PushT
	if(var_205_object == 0) goto Label_867; // 0x35f JumpB
	var_206_string = "head"; // 0x360 PushS
	UnlookAsync(var_206_string); // 0x361 Func
	
Label_867:
	var_207_int = 1; // 0x363 PushI
	KillTimer(var_207_int); // 0x364 Func
	var_125_bool = var_137_bool; // 0x366 Mov
	return 4; // 0x367 Return
	
Label_842:
	var_2_object = 0; // 0x34a TMovB
}


func_1590(var_85_string, var_86_int, var_87_int)
{
	var_88_bool = 0; var_89_bool = 0; // 0x636 PushV
	var_90_bool = 0; var_91_int = 0; var_92_int = 0; // 0x637 PushV
	var_91_int = var_86_int; // 0x638 Mov
	var_92_int = var_87_int; // 0x639 Mov
	func_1676(var_90_bool, var_91_int, var_92_int); // 0x63a NEW_2
	if(var_90_bool == 0) goto Label_1600; // 0x63c JumpB
	var_95_int = 0; // 0x63d PushI
	AddItem(var_89_bool, var_85_string, var_95_int); // 0x63e Func
	
Label_1600:
	return 2; // 0x640 Return
}


func_1079(var_60_object)
{
	func_1825(); // 0x439 NEW_2
	var_103_object = Obj(); // 0x43b PushV
	var_103_object = var_60_object; // 0x43c Mov
	func_1096(var_103_object); // 0x43d NEW_2
	return 0; // 0x43f Return
}


func_1212(var_126_string)
{
	RemoveRTEnvelope(); // 0x4bd Func
	SetDeathState(); // 0x4bf Func
	Stop(); // 0x4c1 Func
	StopAsync(); // 0x4c3 Func
	StopSecondaryAnimation(); // 0x4c5 Func
	var_127_string = ""; // 0x4c7 PushV
	var_127_string = var_126_string; // 0x4c8 Mov
	func_1601(var_127_string); // 0x4c9 NEW_2
	var_156_string = "all"; // 0x4cb PushS
	PlayAnimation(var_156_string, var_126_string); // 0x4cc Func
	WaitForAnimEnd(); // 0x4ce Func
	var_157_string = "all"; // 0x4d0 PushS
	LockAnimationEnd(var_157_string, var_126_string); // 0x4d1 Func
	RemoveEnvelope(); // 0x4d3 Func
	return 0; // 0x4d5 Return
}


func_1855(var_78_int, var_79_string)
{
	var_80_int = 0; var_81_int = 0; // 0x73f PushV
	GetInvItemByName(var_81_int, var_79_string); // 0x740 Func
	var_78_int = var_81_int; // 0x742 Mov
	return 2; // 0x743 Return
}


func_1601(var_127_string)
{
	var_128_bool = 0; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_bool = 0; var_133_float = 0; var_134_cvector = CVector(0,0,0); var_135_cvector = CVector(0,0,0); var_136_bool = 0; var_137_int = 0; var_138_bool = 0; var_139_int = 0; var_140_bool = 0; var_141_float = 0; var_142_cvector = CVector(0,0,0); var_143_cvector = CVector(0,0,0); // 0x641 PushV
	IsExisting3DSound(var_136_bool, var_127_string); // 0x642 Func
	var_144_bool = var_136_bool == 0; // 0x644 Not
	if(var_144_bool == 0) goto Label_1626; // 0x645 JumpB
	var_137_int = 0; // 0x646 MovI
	
Label_1607:
	var_145_int = 1; // 0x647 PushI
	var_146_int = var_137_int + var_145_int; // 0x648 Add
	var_147_int = var_127_string + var_146_int; // 0x649 Add
	IsExisting3DSound(var_138_bool, var_147_int); // 0x64a Func
	var_148_bool = var_138_bool == 0; // 0x64c Not
	if(var_148_bool == 0) goto Label_1615; // 0x64d JumpB
	goto Label_1618; // 0x64e Jump
	
Label_1618:
	var_149_bool = var_137_int == 0; // 0x652 Not
	if(var_149_bool == 0) goto Label_1621; // 0x653 JumpB
	return 16; // 0x654 Return
	
Label_1621:
	irand(var_139_int, var_137_int); // 0x655 Func
	var_150_int = 1; // 0x657 PushI
	var_151_int = var_139_int + var_150_int; // 0x658 Add
	var_127_string = var_127_string + var_151_int; // 0x659 Add2
	
Label_1626:
	Is3DSoundLoaded(var_140_bool, var_127_string); // 0x65a Func
	var_152_bool = var_140_bool; // 0x65c Push
	if(var_152_bool == 0) goto Label_1641; // 0x65d JumpB
	GetEyesHeight(var_141_float); // 0x65e Func
	GetDirection(var_142_cvector); // 0x660 Func
	var_153_int = 50; // 0x662 PushI
	var_143_cvector = var_142_cvector * var_153_int; // 0x663 Mult2
	var_154_float = GetByIndex(var_143_cvector, 1); // 0x664 PushE
	var_154_float = var_154_float + var_141_float; // 0x665 Add2
	SetByIndex(var_143_cvector, 1) = var_154_float; // 0x666 PopE
	PlayGlobalSound(var_127_string, var_143_cvector); // 0x667 Func
	
Label_1641:
	return 16; // 0x669 Return
	
Label_1615:
	var_155_int = 1; // 0x64f PushI
	var_137_int = var_137_int + var_155_int; // 0x650 Add2
	goto Label_1607; // 0x651 Jump
}


func_707(var_0_bool, var_4_int, var_314_bool)
{
	var_315_object = Obj(); var_316_bool = 0; var_317_float = 0; var_318_cvector = CVector(0,0,0); var_319_cvector = CVector(0,0,0); var_320_object = Obj(); var_321_bool = 0; var_322_float = 0; var_323_cvector = CVector(0,0,0); var_324_cvector = CVector(0,0,0); // 0x2c3 PushV
	GetScene(var_320_object); // 0x2c4 Func
	var_321_bool = 0; // 0x2c6 MovB
	
Label_711:
	var_325_cvector = CVector(0,0,0); var_326_object = Obj(); // 0x2c7 PushV
	var_326_object = var_0_bool; // 0x2c8 MovT
	func_1258(var_326_object); // 0x2c9 NEW_2
	var_331_int = -var_325_cvector; // 0x2cb Neg
	FindDirLength(var_322_float, var_331_int, var_322_float); // 0x2cc Func
	var_332_bool = var_322_float < var_4_int; // 0x2ce LT
	if(var_332_bool == 0) goto Label_721; // 0x2cf JumpB
	goto Label_749; // 0x2d0 Jump
	
Label_749:
	var_314_bool = var_321_bool; // 0x2ed Mov
	return 10; // 0x2ee Return
	
Label_721:
	Face(var_0_bool); // 0x2d1 Func
	var_333_string = "all"; // 0x2d3 PushS
	var_334_string = "bjump"; // 0x2d4 PushS
	PlayAnimation(var_333_string, var_334_string); // 0x2d5 Func
	GetPFPosition(var_323_cvector); // 0x2d7 TObjFunc
	GetPFPosition(var_324_cvector); // 0x2d9 Func
	WaitForAnimEnd(); // 0x2db Func
	func_795(var_324_cvector); // 0x2de NEW_2
	StopAsync(); // 0x2e0 Func
	var_335_cvector = CVector(0.0, 0.0, 0.0); // 0x2e2 PushVec
	SetSpeed(var_335_cvector); // 0x2e3 Func
	var_321_bool = 1; // 0x2e5 MovB
	var_336_bool = 0; // 0x2e6 PushV
	func_663(var_324_cvector, var_336_bool); // 0x2e7 NEW_2
	var_337_bool = var_336_bool == 0; // 0x2e9 Not
	if(var_337_bool == 0) goto Label_748; // 0x2ea JumpB
	goto Label_749; // 0x2eb Jump
	
Label_748:
	goto Label_711; // 0x2ec Jump
}


func_1860(var_11_object)
{
	var_12_bool = 0; var_13_string = ""; var_14_string = ""; // 0x745 PushV
	var_13_string = "quest_d4_03"; // 0x746 MovS
	var_14_string = "death"; // 0x747 MovS
	func_1743(var_12_bool, var_13_string, var_14_string); // 0x748 NEW_2
	var_18_bool = 0; var_19_object = Obj(); // 0x74a PushV
	var_19_object = var_11_object; // 0x74b Mov
	func_1265(var_18_bool, var_19_object); // 0x74c NEW_2
	if(var_18_bool == 0) goto Label_1876; // 0x74e JumpB
	var_22_bool = 0; var_23_object = Obj(); var_24_float = 0; // 0x74f PushV
	var_23_object = var_11_object; // 0x750 Mov
	var_24_float = 0.03; // 0x751 MovF
	func_1681(var_22_bool, var_23_object, var_24_float); // 0x752 NEW_2
	
Label_1876:
	var_60_object = Obj(); // 0x754 PushV
	var_60_object = var_11_object; // 0x755 Mov
	TaskCall(3); // 0x756 TaskCall
	func_1079(var_60_object); // 0x757 NEW_2
	TaskReturn(); // 0x758 TaskReturn
	return 0; // 0x75a Return
}


func_1733(var_29_float)
{
	var_30_object = Obj(); var_31_object = Obj(); // 0x6c5 PushV
	CreateFloatVector(var_31_object); // 0x6c6 Func
	add(var_29_float); // 0x6c8 ObjFunc
	var_32_int = 16; // 0x6ca PushI
	SendWorldWndMessage(var_32_int, var_31_object); // 0x6cb Func
	return 2; // 0x6cd Return
}


func_456(var_0_bool, var_343_bool, var_344_float)
{
	var_345_int = 0; var_346_bool = 0; var_347_int = 0; var_348_string = ""; var_349_int = 0; var_350_bool = 0; var_351_int = 0; var_352_string = ""; // 0x1c8 PushV
	func_795(var_352_string); // 0x1ca NEW_2
	irand(var_349_int, var_352_string); // 0x1cc Func
	var_353_int = 1; // 0x1ce PushI
	var_349_int = var_349_int + var_353_int; // 0x1cf Add2
	Face(var_0_bool); // 0x1d0 Func
	var_354_bool = 1; // 0x1d2 PushB
	SetAttackState(var_354_bool); // 0x1d3 Func
	func_1764(); // 0x1d6 NEW_2
	var_359_string = "all"; // 0x1d8 PushS
	var_360_string = "attack_begin"; // 0x1d9 PushS
	var_361_int = var_360_string + var_349_int; // 0x1da Add
	PlayAnimation(var_359_string, var_361_int); // 0x1db Func
	WaitForAnimEnd(); // 0x1dd Func
	func_763(var_351_int, var_352_string); // 0x1e0 NEW_2
	var_377_bool = 0; var_378_object = Obj(); // 0x1e2 PushV
	var_378_object = var_0_bool; // 0x1e3 MovT
	func_1418(var_377_bool, var_378_object); // 0x1e4 NEW_2
	var_379_bool = var_377_bool == 0; // 0x1e6 Not
	if(var_379_bool == 0) goto Label_492; // 0x1e7 JumpB
	StopAsync(); // 0x1e8 Func
	var_343_bool = 0; // 0x1ea MovB
	return 8; // 0x1eb Return
	
Label_492:
	var_380_float = 0; var_381_int = 0; // 0x1ec PushV
	var_380_float = var_344_float; // 0x1ed Mov
	var_381_int = var_349_int; // 0x1ee Mov
	func_417(var_352_string, var_380_float, var_381_int); // 0x1ef NEW_2
	var_462_string = "all"; // 0x1f1 PushS
	var_463_string = "attack_middle"; // 0x1f2 PushS
	var_464_int = var_463_string + var_349_int; // 0x1f3 Add
	HasAnimation(var_350_bool, var_462_string, var_464_int); // 0x1f4 Func
	var_465_bool = var_350_bool; // 0x1f6 Push
	if(var_465_bool == 0) goto Label_573; // 0x1f7 JumpB
	func_1764(); // 0x1f9 NEW_2
	var_466_string = "all"; // 0x1fb PushS
	var_467_string = "attack_middle"; // 0x1fc PushS
	var_468_int = var_467_string + var_349_int; // 0x1fd Add
	PlayAnimation(var_466_string, var_468_int); // 0x1fe Func
	WaitForAnimEnd(); // 0x200 Func
	func_795(var_352_string); // 0x203 NEW_2
	var_469_bool = 0; var_470_object = Obj(); // 0x205 PushV
	var_470_object = var_0_bool; // 0x206 MovT
	func_1418(var_469_bool, var_470_object); // 0x207 NEW_2
	var_471_bool = var_469_bool == 0; // 0x209 Not
	if(var_471_bool == 0) goto Label_527; // 0x20a JumpB
	StopAsync(); // 0x20b Func
	var_343_bool = 0; // 0x20d MovB
	return 8; // 0x20e Return
	
Label_527:
	var_472_float = 0; var_473_int = 0; // 0x20f PushV
	var_472_float = var_344_float; // 0x210 Mov
	var_473_int = var_349_int; // 0x211 Mov
	func_417(var_352_string, var_472_float, var_473_int); // 0x212 NEW_2
	var_351_int = 1; // 0x214 MovI
	
Label_533:
	var_474_string = "attack_middle"; // 0x215 PushS
	var_475_int = var_474_string + var_349_int; // 0x216 Add
	var_476_string = "_"; // 0x217 PushS
	var_477_int = var_475_int + var_476_string; // 0x218 Add
	var_352_string = var_477_int + var_351_int; // 0x219 Add2
	var_478_string = "all"; // 0x21a PushS
	HasAnimation(var_350_bool, var_478_string, var_352_string); // 0x21b Func
	var_479_bool = var_350_bool == 0; // 0x21d Not
	if(var_479_bool == 0) goto Label_544; // 0x21e JumpB
	goto Label_573; // 0x21f Jump
	
Label_573:
	var_480_bool = 0; // 0x23d PushB
	SetAttackState(var_480_bool); // 0x23e Func
	var_481_string = "all"; // 0x240 PushS
	var_482_string = "attack_end"; // 0x241 PushS
	var_483_int = var_482_string + var_349_int; // 0x242 Add
	PlayAnimation(var_481_string, var_483_int); // 0x243 Func
	var_484_bool = 0; // 0x245 PushV
	func_809(var_484_bool); // 0x246 NEW_2
	if(var_484_bool == 0) goto Label_591; // 0x248 JumpB
	var_485_bool = 0; var_486_float = 0; // 0x249 PushV
	var_486_float = 0.75; // 0x24a MovF
	func_593(var_485_bool, var_486_float); // 0x24b NEW_2
	StopAsync(); // 0x24d Func
	
Label_591:
	var_343_bool = 1; // 0x24f MovB
	return 8; // 0x250 Return
	
Label_544:
	func_1764(); // 0x221 NEW_2
	var_494_string = "all"; // 0x223 PushS
	PlayAnimation(var_494_string, var_352_string); // 0x224 Func
	WaitForAnimEnd(); // 0x226 Func
	func_795(var_352_string); // 0x229 NEW_2
	var_495_bool = 0; var_496_object = Obj(); // 0x22b PushV
	var_496_object = var_0_bool; // 0x22c MovT
	func_1418(var_495_bool, var_496_object); // 0x22d NEW_2
	var_497_bool = var_495_bool == 0; // 0x22f Not
	if(var_497_bool == 0) goto Label_565; // 0x230 JumpB
	StopAsync(); // 0x231 Func
	var_343_bool = 0; // 0x233 MovB
	return 8; // 0x234 Return
	
Label_565:
	var_498_float = 0; var_499_int = 0; // 0x235 PushV
	var_498_float = var_344_float; // 0x236 Mov
	var_499_int = var_349_int; // 0x237 Mov
	func_417(var_352_string, var_498_float, var_499_int); // 0x238 NEW_2
	var_500_int = 1; // 0x23a PushI
	var_351_int = var_351_int + var_500_int; // 0x23b Add2
	goto Label_533; // 0x23c Jump
}


func_1096(var_103_object)
{
	EventDisable(0); // 0x449 EventDisable
	var_104_object = Obj(); // 0x44a PushV
	var_104_object = var_103_object; // 0x44b Mov
	func_1121(var_104_object); // 0x44c NEW_2
	var_184_int = 50; // 0x44e PushI
	var_185_int = 40; // 0x44f PushI
	SetRTEnvelope(var_184_int, var_185_int); // 0x450 Func
	EventEnable(0); // 0x452 EventEnable
	
Label_1107:
	Hold(); // 0x453 Func
	goto Label_1107; // 0x455 Jump
}


func_77()
{
	
Label_77:
	Hold(); // 0x4d Func
	goto Label_77; // 0x4f Jump
}


func_1486(var_14_object, var_15_int, var_16_float)
{
	var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_int = 0; var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_int = 0; var_24_int = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_int = 0; var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_int = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); // 0x5ce PushV
	var_35_bool = 0; // 0x5cf PushV
	var_35_bool = 0; // 0x5d0 MovB
	var_36_bool = 0; // 0x5d1 PushV
	var_36_bool = 0; // 0x5d2 MovB
	var_37_object = var_14_object; // 0x5d3 Push
	if(var_37_object == 0) goto Label_1497; // 0x5d4 JumpB
	var_38_int = 4; // 0x5d5 PushI
	var_39_bool = var_15_int != var_38_int; // 0x5d6 Neq
	if(var_39_bool == 0) goto Label_1497; // 0x5d7 JumpB
	var_36_bool = 1; // 0x5d8 MovB
	
Label_1497:
	if(var_36_bool == 0) goto Label_1502; // 0x5d9 JumpB
	var_40_int = 5; // 0x5da PushI
	var_41_bool = var_15_int != var_40_int; // 0x5db Neq
	if(var_41_bool == 0) goto Label_1502; // 0x5dc JumpB
	var_35_bool = 1; // 0x5dd MovB
	
Label_1502:
	if(var_35_bool == 0) goto Label_1549; // 0x5de JumpB
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x5df PushV
	var_44_cvector = CVector(0,0,0); var_45_object = Obj(); // 0x5e0 PushV
	var_45_object = var_14_object; // 0x5e1 Mov
	func_1258(var_45_object); // 0x5e2 NEW_2
	var_43_cvector = var_44_cvector; // 0x5e3 Mov
	func_1648(var_42_cvector, var_43_cvector); // 0x5e5 NEW_2
	var_26_cvector = var_42_cvector; // 0x5e6 Mov
	CreateVectorVector(var_27_object); // 0x5e8 Func
	var_28_int = 1; // 0x5ea MovI
	
Label_1515:
	var_55_string = "hit"; // 0x5eb PushS
	var_56_int = var_55_string + var_28_int; // 0x5ec Add
	GetGeometryLocator(var_56_int, var_29_bool, var_30_cvector, var_31_cvector); // 0x5ed Func
	var_57_bool = var_29_bool == 0; // 0x5ef Not
	if(var_57_bool == 0) goto Label_1522; // 0x5f0 JumpB
	goto Label_1531; // 0x5f1 Jump
	
Label_1531:
	size(var_32_int); // 0x5fb ObjFunc
	var_58_int = var_32_int; // 0x5fd Push
	if(var_58_int == 0) goto Label_1548; // 0x5fe JumpB
	irand(var_33_int, var_32_int); // 0x5ff Func
	get(var_34_cvector, var_33_int); // 0x601 ObjFunc
	var_59_object = Obj(); var_60_int = 0; var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0x603 PushV
	var_59_object = var_14_object; // 0x604 Mov
	var_60_int = var_15_int; // 0x605 Mov
	var_61_float = var_16_float; // 0x606 Mov
	var_62_cvector = var_34_cvector; // 0x607 Mov
	var_63_cvector = -var_26_cvector; // 0x608 Neg2
	func_1554(var_61_float, var_62_cvector, var_63_cvector); // 0x609 NEW_2
	return 18; // 0x60b Return
	
Label_1548:
	var_27_object = 0; // 0x60c SetNull
	
Label_1549:
	var_104_object = Obj(); // 0x60d PushV
	var_104_object = var_14_object; // 0x60e Mov
	func_1442(var_104_object); // 0x60f NEW_2
	return 18; // 0x611 Return
	
Label_1522:
	var_105_int = var_31_cvector | var_26_cvector; // 0x5f2 Or
	var_106_float = 0.70711; // 0x5f3 PushF
	var_107_bool = var_105_int >= var_106_float; // 0x5f4 GE
	if(var_107_bool == 0) goto Label_1528; // 0x5f5 JumpB
	add(var_30_cvector); // 0x5f6 ObjFunc
	
Label_1528:
	var_108_int = 1; // 0x5f8 PushI
	var_28_int = var_28_int + var_108_int; // 0x5f9 Add2
	goto Label_1515; // 0x5fa Jump
}


func_1743(var_12_bool, var_13_string, var_14_string)
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x6cf PushV
	FindActor(var_16_object, var_13_string); // 0x6d0 Func
	var_17_bool = var_16_object == 0; // 0x6d2 NullEq
	if(var_17_bool == 0) goto Label_1750; // 0x6d3 JumpB
	var_12_bool = 0; // 0x6d4 MovB
	return 2; // 0x6d5 Return
	
Label_1750:
	Trigger(var_16_object, var_14_string); // 0x6d6 Func
	var_12_bool = 1; // 0x6d8 MovB
	return 2; // 0x6d9 Return
}


func_81(var_0_bool, var_517_string)
{
	var_518_bool = 0; var_519_bool = 0; // 0x51 PushV
	var_520_string = "cleanup"; // 0x52 PushS
	var_521_bool = var_517_string == var_520_string; // 0x53 Eq
	if(var_521_bool == 0) goto Label_104; // 0x54 JumpB
	var_0_bool = 1; // 0x55 TMovB
	IsLoaded(var_519_bool); // 0x56 Func
	var_522_bool = 0; // 0x58 PushV
	var_522_bool = 0; // 0x59 MovB
	var_523_bool = var_519_bool == 0; // 0x5a Not
	if(var_523_bool == 0) goto Label_97; // 0x5b JumpB
	var_524_bool = 0; // 0x5c PushV
	func_125(var_524_bool); // 0x5d NEW_2
	if(var_524_bool == 0) goto Label_97; // 0x5f JumpB
	var_522_bool = 1; // 0x60 MovB
	
Label_97:
	if(var_522_bool == 0) goto Label_103; // 0x61 JumpB
	var_525_object = Obj(); // 0x62 PushV
	func_1642(var_525_object); // 0x63 NEW_2
	RemoveActor(var_525_object); // 0x65 Func
	
Label_103:
	goto Label_108; // 0x67 Jump
	
Label_108:
	return 2; // 0x6c Return
	
Label_104:
	var_526_string = "restore"; // 0x68 PushS
	var_527_bool = var_517_string == var_526_string; // 0x69 Eq
	if(var_527_bool == 0) goto Label_108; // 0x6a JumpB
	var_0_bool = 0; // 0x6b TMovB
}


func_593(var_485_bool, var_486_float)
{
	var_487_float = 0; var_488_bool = 0; var_489_float = 0; var_490_bool = 0; // 0x251 PushV
	rand(var_489_float); // 0x252 Func
	var_491_bool = var_489_float < var_486_float; // 0x254 LT
	if(var_491_bool == 0) goto Label_613; // 0x255 JumpB
	
Label_598:
	IsAnimationPlaying(var_490_bool); // 0x256 Func
	var_492_bool = var_490_bool == 0; // 0x258 Not
	if(var_492_bool == 0) goto Label_603; // 0x259 JumpB
	goto Label_612; // 0x25a Jump
	
Label_612:
	goto Label_618; // 0x264 Jump
	
Label_618:
	var_485_bool = 0; // 0x26a MovB
	return 4; // 0x26b Return
	
Label_603:
	var_493_bool = 0; // 0x25b PushV
	func_691(var_493_bool); // 0x25c NEW_2
	if(var_493_bool == 0) goto Label_609; // 0x25e JumpB
	var_485_bool = 1; // 0x25f MovB
	return 4; // 0x260 Return
	
Label_609:
	sync(); // 0x261 Func
	goto Label_598; // 0x263 Jump
	
Label_613:
	WaitForAnimEnd(); // 0x265 Func
	func_795(var_490_bool); // 0x268 NEW_2
}


func_1755(var_13_object)
{
	var_14_bool = 0; var_15_bool = 0; // 0x6db PushV
	IsPlayerActor(var_13_object, var_15_bool); // 0x6dc Func
	var_16_bool = var_15_bool; // 0x6de Push
	if(var_16_bool == 0) goto Label_1763; // 0x6df JumpB
	var_17_string = "attack"; // 0x6e0 PushS
	PlayGlobalMusic(var_17_string); // 0x6e1 Func
	
Label_1763:
	return 2; // 0x6e3 Return
}


func_1244(var_422_string, var_423_int)
{
	var_424_int = 2; // 0x4dd PushI
	var_425_bool = var_423_int == var_424_int; // 0x4de Eq
	if(var_425_bool == 0) goto Label_1251; // 0x4df JumpB
	var_422_string = "fire"; // 0x4e0 MovS
	return 0; // 0x4e1 Return
	
Label_1251:
	var_426_int = 1; // 0x4e3 PushI
	var_427_bool = var_423_int == var_426_int; // 0x4e4 Eq
	if(var_427_bool == 0) goto Label_1256; // 0x4e5 JumpB
	var_422_string = "bullet"; // 0x4e6 MovS
	return 0; // 0x4e7 Return
	
Label_1256:
	var_422_string = "phys"; // 0x4e8 MovS
	return 0; // 0x4e9 Return
}


func_1121(var_104_object)
{
	var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_string = ""; var_110_object = Obj(); var_111_bool = 0; var_112_bool = 0; var_113_float = 0; var_114_cvector = CVector(0,0,0); var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0); var_117_cvector = CVector(0,0,0); var_118_cvector = CVector(0,0,0); var_119_string = ""; var_120_object = Obj(); var_121_bool = 0; var_122_bool = 0; var_123_float = 0; var_124_cvector = CVector(0,0,0); // 0x461 PushV
	var_125_bool = var_104_object == 0; // 0x462 NullEq
	if(var_125_bool == 0) goto Label_1129; // 0x463 JumpB
	var_126_string = ""; // 0x464 PushV
	var_126_string = "fdie"; // 0x465 MovS
	func_1212(var_126_string); // 0x466 NEW_2
	goto Label_1211; // 0x468 Jump
	
Label_1211:
	return 20; // 0x4bb Return
	
Label_1129:
	GetPosition(var_115_cvector); // 0x469 ObjFunc
	GetPosition(var_116_cvector); // 0x46b Func
	GetDirection(var_117_cvector); // 0x46d Func
	var_118_cvector = var_116_cvector - var_115_cvector; // 0x46f Sub2
	var_158_float = GetByIndex(var_118_cvector, 0); // 0x470 PushE
	var_159_float = GetByIndex(var_117_cvector, 0); // 0x471 PushE
	var_160_float = var_158_float * var_159_float; // 0x472 Mult
	var_161_float = GetByIndex(var_118_cvector, 2); // 0x473 PushE
	var_162_float = GetByIndex(var_117_cvector, 2); // 0x474 PushE
	var_163_float = var_161_float * var_162_float; // 0x475 Mult
	var_164_int = var_160_float + var_163_float; // 0x476 Add
	var_165_int = 0; // 0x477 PushI
	var_166_bool = var_164_int >= var_165_int; // 0x478 GE
	if(var_166_bool == 0) goto Label_1148; // 0x479 JumpB
	var_119_string = "fdie"; // 0x47a MovS
	goto Label_1149; // 0x47b Jump
	
Label_1149:
	RemoveRTEnvelope(); // 0x47d Func
	SetDeathState(); // 0x47f Func
	Stop(); // 0x481 Func
	StopAsync(); // 0x483 Func
	var_120_object = var_104_object; // 0x485 Mov
	var_167_string = "GetScriptProperty"; // 0x486 PushS
	var_168_int = 2; // 0x487 PushI
	var_169_bool = IsFuncExist(var_104_object, var_167_string, var_168_int); // 0x488 FuncExist
	if(var_169_bool == 0) goto Label_1173; // 0x489 JumpB
	var_170_string = "Owner"; // 0x48a PushS
	HasScriptProperty(var_121_bool, var_170_string); // 0x48b ObjFunc
	var_171_bool = var_121_bool; // 0x48d Push
	if(var_171_bool == 0) goto Label_1173; // 0x48e JumpB
	var_172_string = "Owner"; // 0x48f PushS
	GetScriptProperty(var_120_object, var_172_string); // 0x490 ObjFunc
	var_173_bool = var_120_object == 0; // 0x492 NullEq
	if(var_173_bool == 0) goto Label_1173; // 0x493 JumpB
	var_120_object = var_104_object; // 0x494 Mov
	
Label_1173:
	var_174_string = "@GetEyesHeight"; // 0x495 PushS
	var_175_int = 1; // 0x496 PushI
	var_176_bool = IsFuncExist(var_120_object, var_174_string, var_175_int); // 0x497 FuncExist
	if(var_176_bool == 0) goto Label_1188; // 0x498 JumpB
	GetEyesHeight(var_123_float); // 0x499 ObjFunc
	var_124_cvector = CVector(0.0, 0.0, 0.0); // 0x49b MovV
	var_177_float = GetByIndex(var_124_cvector, 1); // 0x49c PushE
	var_177_float = var_123_float; // 0x49d Mov
	SetByIndex(var_124_cvector, 1) = var_177_float; // 0x49e PopE
	var_178_string = "head"; // 0x49f PushS
	LookAsync(var_104_object, var_178_string, var_124_cvector); // 0x4a0 Func
	var_122_bool = 1; // 0x4a2 MovB
	goto Label_1189; // 0x4a3 Jump
	
Label_1189:
	var_179_string = ""; // 0x4a5 PushV
	var_179_string = var_119_string; // 0x4a6 Mov
	func_1601(var_179_string); // 0x4a7 NEW_2
	var_180_string = "all"; // 0x4a9 PushS
	PlayAnimation(var_180_string, var_119_string); // 0x4aa Func
	WaitForAnimEnd(); // 0x4ac Func
	var_181_bool = var_122_bool; // 0x4ae Push
	if(var_181_bool == 0) goto Label_1205; // 0x4af JumpB
	StopAsync(); // 0x4b0 Func
	var_182_string = "head"; // 0x4b2 PushS
	UnlookAsync(var_182_string); // 0x4b3 Func
	
Label_1205:
	var_183_string = "all"; // 0x4b5 PushS
	LockAnimationEnd(var_183_string, var_119_string); // 0x4b6 Func
	RemoveEnvelope(); // 0x4b8 Func
	var_120_object = 0; // 0x4ba SetNull
	
Label_1188:
	var_122_bool = 0; // 0x4a4 MovB
	
Label_1148:
	var_119_string = "bdie"; // 0x47c MovS
}


func_1377(var_38_bool)
{
	var_40_bool = 0; var_41_bool = 0; // 0x561 PushV
	IsDead(var_41_bool); // 0x562 ObjFunc
	var_38_bool = var_41_bool; // 0x564 Mov
	return 2; // 0x565 Return
}


func_1764()
{
	var_355_object = Obj(); var_356_object = Obj(); // 0x6e4 PushV
	GetScene(var_356_object); // 0x6e5 Func
	var_357_string = "battle"; // 0x6e7 PushS
	var_358_object = Obj(); // 0x6e8 PushV
	func_1642(var_358_object); // 0x6e9 NEW_2
	BroadcastMessage(var_357_string, var_358_object, var_356_object); // 0x6eb Func
	return 2; // 0x6ed Return
}


func_1382(var_27_bool, var_28_object)
{
	var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); // 0x566 PushV
	var_33_bool = var_28_object == 0; // 0x567 NullEq
	if(var_33_bool == 0) goto Label_1387; // 0x568 JumpB
	var_27_bool = 0; // 0x569 MovB
	return 4; // 0x56a Return
	
Label_1387:
	var_34_bool = 0; // 0x56b PushV
	var_34_bool = 0; // 0x56c MovB
	var_35_string = "IsDead"; // 0x56d PushS
	var_36_int = 1; // 0x56e PushI
	var_37_bool = IsFuncExist(var_28_object, var_35_string, var_36_int); // 0x56f FuncExist
	if(var_37_bool == 0) goto Label_1399; // 0x570 JumpB
	var_38_bool = 0; var_39_object = Obj(); // 0x571 PushV
	var_39_object = var_28_object; // 0x572 Mov
	func_1377(var_39_object); // 0x573 NEW_2
	if(var_38_bool == 0) goto Label_1399; // 0x575 JumpB
	var_34_bool = 1; // 0x576 MovB
	
Label_1399:
	if(var_34_bool == 0) goto Label_1402; // 0x577 JumpB
	var_27_bool = 0; // 0x578 MovB
	return 4; // 0x579 Return
	
Label_1402:
	GetScene(var_31_object); // 0x57a Func
	var_42_bool = var_31_object == 0; // 0x57c NullEq
	if(var_42_bool == 0) goto Label_1408; // 0x57d JumpB
	var_27_bool = 0; // 0x57e MovB
	return 4; // 0x57f Return
	
Label_1408:
	GetScene(var_32_object); // 0x580 ObjFunc
	var_43_bool = var_31_object != var_32_object; // 0x582 Neq
	if(var_43_bool == 0) goto Label_1414; // 0x583 JumpB
	var_27_bool = 0; // 0x584 MovB
	return 4; // 0x585 Return
	
Label_1414:
	var_27_bool = 1; // 0x586 MovB
	return 4; // 0x587 Return
}


func_1642(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0x66a PushV
	self(var_12_object); // 0x66b Func
	var_10_object = var_12_object; // 0x66d Mov
	return 2; // 0x66e Return
}


func_1258(var_44_cvector)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0x4ea PushV
	GetPosition(var_48_cvector); // 0x4eb Func
	GetPosition(var_49_cvector); // 0x4ed ObjFunc
	var_44_cvector = var_49_cvector - var_48_cvector; // 0x4ef Sub2
	return 4; // 0x4f0 Return
}


func_620(var_0_bool, var_282_bool, var_283_float)
{
	var_284_bool = 0; var_285_cvector = CVector(0,0,0); var_286_cvector = CVector(0,0,0); var_287_cvector = CVector(0,0,0); var_288_float = 0; var_289_bool = 0; var_290_cvector = CVector(0,0,0); var_291_cvector = CVector(0,0,0); var_292_cvector = CVector(0,0,0); var_293_float = 0; // 0x26c PushV
	
Label_621:
	IsAnimationPlaying(var_289_bool); // 0x26d Func
	var_294_bool = var_289_bool == 0; // 0x26f Not
	if(var_294_bool == 0) goto Label_626; // 0x270 JumpB
	goto Label_658; // 0x271 Jump
	
Label_658:
	func_795(var_293_float); // 0x293 NEW_2
	var_282_bool = 0; // 0x295 MovB
	return 10; // 0x296 Return
	
Label_626:
	var_295_bool = 0; // 0x272 PushV
	func_691(var_295_bool); // 0x273 NEW_2
	if(var_295_bool == 0) goto Label_632; // 0x275 JumpB
	var_282_bool = 1; // 0x276 MovB
	return 10; // 0x277 Return
	
Label_632:
	var_338_bool = 0; var_339_object = Obj(); // 0x278 PushV
	var_339_object = var_0_bool; // 0x279 MovT
	func_1418(var_338_bool, var_339_object); // 0x27a NEW_2
	var_340_bool = var_338_bool == 0; // 0x27c Not
	if(var_340_bool == 0) goto Label_640; // 0x27d JumpB
	var_282_bool = 0; // 0x27e MovB
	return 10; // 0x27f Return
	
Label_640:
	GetPFPosition(var_290_cvector); // 0x280 TObjFunc
	GetPFPosition(var_291_cvector); // 0x282 Func
	var_292_cvector = var_290_cvector - var_291_cvector; // 0x284 Sub2
	var_293_float = var_292_cvector | var_292_cvector; // 0x285 Or2
	var_341_float = var_283_float * var_283_float; // 0x286 Mult
	var_342_bool = var_293_float < var_341_float; // 0x287 LT
	if(var_342_bool == 0) goto Label_655; // 0x288 JumpB
	var_343_bool = 0; var_344_float = 0; // 0x289 PushV
	var_344_float = var_283_float; // 0x28a Mov
	func_456(var_293_float, var_343_bool, var_344_float); // 0x28b NEW_2
	var_282_bool = 1; // 0x28d MovB
	return 10; // 0x28e Return
	
Label_655:
	sync(); // 0x28f Func
	goto Label_621; // 0x291 Jump
}


func_1775(var_15_int)
{
	var_16_int = 0; var_17_int = 0; // 0x6ef PushV
	var_18_string = "branch"; // 0x6f0 PushS
	GetVariable(var_18_string, var_17_int); // 0x6f1 Func
	var_15_int = var_17_int; // 0x6f3 Mov
	return 2; // 0x6f4 Return
}


func_752(var_0_bool, var_245_bool)
{
	var_246_bool = 0; var_247_bool = 0; // 0x2f0 PushV
	var_248_string = "IsAttacking"; // 0x2f1 PushS
	var_249_int = 1; // 0x2f2 PushI
	var_250_bool = IsFuncExist(var_0_bool, var_248_string, var_249_int); // 0x2f3 FuncExist
	if(var_250_bool == 0) goto Label_761; // 0x2f4 JumpB
	IsAttacking(var_247_bool); // 0x2f5 TObjFunc
	var_245_bool = var_247_bool; // 0x2f7 Mov
	return 2; // 0x2f8 Return
	
Label_761:
	var_245_bool = 0; // 0x2f9 MovB
	return 2; // 0x2fa Return
}


func_1265(var_18_bool, var_19_object)
{
	var_20_bool = 0; var_21_bool = 0; // 0x4f1 PushV
	IsPlayerActor(var_19_object, var_21_bool); // 0x4f2 Func
	var_18_bool = var_21_bool; // 0x4f4 Mov
	return 2; // 0x4f5 Return
}


func_1648(var_42_cvector, var_43_cvector)
{
	var_50_float = 0; var_51_float = 0; // 0x670 PushV
	var_52_int = var_43_cvector | var_43_cvector; // 0x671 Or
	var_51_float = sqrt(var_52_int); // 0x672 Sqrt2
	var_53_float = 0.0; // 0x673 PushF
	var_54_bool = var_51_float < var_53_float; // 0x674 LT
	if(var_54_bool == 0) goto Label_1656; // 0x675 JumpB
	var_42_cvector = CVector(0.0, 0.0, 0.0); // 0x676 MovV
	return 2; // 0x677 Return
	
Label_1656:
	var_42_cvector = var_43_cvector / var_43_cvector; // 0x678 Div2
	return 2; // 0x679 Return
}


func_1781(var_14_object)
{
	var_15_int = 0; // 0x6f6 PushV
	func_1775(var_15_int); // 0x6f7 NEW_2
	var_19_int = 1; // 0x6f9 PushI
	var_20_bool = var_15_int == var_19_int; // 0x6fa Eq
	if(var_20_bool == 0) goto Label_1791; // 0x6fb JumpB
	WorkWithCorpse(var_14_object); // 0x6fc Func
	goto Label_1793; // 0x6fe Jump
	
Label_1793:
	return 0; // 0x701 Return
	
Label_1791:
	Barter(var_14_object); // 0x6ff Func
}


func_886(var_2_int)
{
	var_11_int = 1; // 0x376 PushI
	KillTimer(var_11_int); // 0x377 Func
	var_12_int = var_2_int; // 0x379 PushT
	if(var_12_int == 0) goto Label_895; // 0x37a JumpB
	var_2_int = 0; // 0x37b TMovB
	var_13_string = "head"; // 0x37c PushS
	UnlookAsync(var_13_string); // 0x37d Func
	
Label_895:
	func_1052(var_10_object); // 0x380 NEW_2
	return 0; // 0x382 Return
}


func_1270(var_41_bool, var_42_object, var_43_string)
{
	var_44_bool = 0; var_45_bool = 0; // 0x4f6 PushV
	var_46_string = "HasProperty"; // 0x4f7 PushS
	var_47_int = 2; // 0x4f8 PushI
	var_48_bool = IsFuncExist(var_42_object, var_46_string, var_47_int); // 0x4f9 FuncExist
	var_49_bool = var_48_bool == 0; // 0x4fa Not
	if(var_49_bool == 0) goto Label_1278; // 0x4fb JumpB
	var_41_bool = 0; // 0x4fc MovB
	return 2; // 0x4fd Return
	
Label_1278:
	HasProperty(var_43_string, var_45_bool); // 0x4fe ObjFunc
	var_41_bool = var_45_bool; // 0x500 Mov
	return 2; // 0x501 Return
}


func_1658(var_432_float, var_433_float, var_434_float)
{
	var_437_bool = var_433_float < var_434_float; // 0x67b LT
	if(var_437_bool == 0) goto Label_1663; // 0x67c JumpB
	var_432_float = var_433_float; // 0x67d Mov
	goto Label_1664; // 0x67e Jump
	
Label_1664:
	return 0; // 0x680 Return
	
Label_1663:
	var_432_float = var_434_float; // 0x67f Mov
}


func_763(var_2_object, var_5_bool)
{
	var_362_float = 0; var_363_int = 0; var_364_float = 0; var_365_int = 0; // 0x2fb PushV
	var_366_bool = var_2_object == 0; // 0x2fc Not
	if(var_366_bool == 0) goto Label_767; // 0x2fd JumpB
	return 4; // 0x2fe Return
	
Label_767:
	var_367_bool = var_5_bool; // 0x2ff PushT
	if(var_367_bool == 0) goto Label_775; // 0x300 JumpB
	var_368_int = -1; // 0x301 PushI
	var_5_bool = var_5_bool + var_368_int; // 0x302 Add2
	var_369_int = 0; // 0x303 PushI
	var_370_bool = var_5_bool > var_369_int; // 0x304 GT
	if(var_370_bool == 0) goto Label_775; // 0x305 JumpB
	return 4; // 0x306 Return
	
Label_775:
	rand(var_364_float); // 0x307 Func
	var_371_float = 0; // 0x309 PushV
	func_813(var_371_float); // 0x30a NEW_2
	var_372_bool = var_364_float < var_371_float; // 0x30c LT
	if(var_372_bool == 0) goto Label_794; // 0x30d JumpB
	irand(var_365_int, var_364_float); // 0x30e Func
	var_373_int = 1; // 0x310 PushI
	var_365_int = var_365_int + var_373_int; // 0x311 Add2
	var_374_string = "attack"; // 0x312 PushS
	var_375_int = var_374_string + var_365_int; // 0x313 Add
	Speak(var_375_int); // 0x314 Func
	var_376_int = 0; // 0x316 PushV
	func_811(var_376_int); // 0x317 NEW_2
	var_5_bool = var_376_int; // 0x318 TMov
	
Label_794:
	return 4; // 0x31a Return
}


func_125(var_12_bool)
{
	var_12_bool = 1; // 0x7d MovB
	return 0; // 0x7e Return
}


func_382(var_1_string, var_2_object, var_4_int)
{
	var_47_bool = 0; var_48_bool = 0; var_49_cvector = CVector(0,0,0); var_50_bool = 0; var_51_bool = 0; var_52_cvector = CVector(0,0,0); // 0x17e PushV
	var_1_string = 0; // 0x17f TMovI
	
Label_384:
	var_53_string = "all"; // 0x180 PushS
	var_54_string = "attack_begin"; // 0x181 PushS
	var_55_int = 1; // 0x182 PushI
	var_56_int = var_1_string + var_55_int; // 0x183 Add
	var_57_int = var_54_string + var_56_int; // 0x184 Add
	HasAnimation(var_50_bool, var_53_string, var_57_int); // 0x185 Func
	var_58_bool = var_50_bool == 0; // 0x187 Not
	if(var_58_bool == 0) goto Label_394; // 0x188 JumpB
	goto Label_397; // 0x189 Jump
	
Label_397:
	var_2_object = 0; // 0x18d TMovI
	
Label_398:
	var_59_string = "attack"; // 0x18e PushS
	var_60_int = 1; // 0x18f PushI
	var_61_int = var_2_object + var_60_int; // 0x190 Add
	var_62_int = var_59_string + var_61_int; // 0x191 Add
	IsExisting3DSound(var_51_bool, var_62_int); // 0x192 Func
	var_63_bool = var_51_bool == 0; // 0x194 Not
	if(var_63_bool == 0) goto Label_407; // 0x195 JumpB
	goto Label_410; // 0x196 Jump
	
Label_410:
	var_64_string = "all"; // 0x19a PushS
	var_65_string = "bjump"; // 0x19b PushS
	GetAnimationOffset(var_52_cvector, var_64_string, var_65_string); // 0x19c Func
	var_66_float = GetByIndex(var_52_cvector, 2); // 0x19e PushE
	var_4_int = -var_66_float; // 0x19f Neg2
	return 6; // 0x1a0 Return
	
Label_407:
	var_67_int = 1; // 0x197 PushI
	var_2_object = var_2_object + var_67_int; // 0x198 Add2
	goto Label_398; // 0x199 Jump
	
Label_394:
	var_68_int = 1; // 0x18a PushI
	var_1_string = var_1_string + var_68_int; // 0x18b Add2
	goto Label_384; // 0x18c Jump
}


func_127()
{
	var_19_object = Obj(); var_20_object = Obj(); // 0x7f PushV
	var_21_string = "player"; // 0x80 PushS
	FindActor(var_20_object, var_21_string); // 0x81 Func
	var_22_object = Obj(); var_23_bool = 0; var_24_float = 0; // 0x83 PushV
	var_22_object = var_20_object; // 0x84 Mov
	var_23_bool = 1; // 0x85 MovB
	var_24_float = 180.0; // 0x86 MovF
	func_153(var_16_bool, var_17_float, var_18_int, var_19_object, var_20_object, var_22_object, var_23_bool, var_24_float); // 0x87 NEW_2
	return 2; // 0x89 Return
}


