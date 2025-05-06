task_1_event_7(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_bool, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x1d4 PushV
	var_23_int = 1; // 0x1d5 PushI
	var_24_bool = var_20_bool == var_23_int; // 0x1d6 Eq
	if(var_24_bool == 0) goto Label_485; // 0x1d7 JumpB
	GetMainOutdoorScene(var_22_object); // 0x1d8 Func
	var_25_string = "b9q03_helpme"; // 0x1da PushS
	var_26_int = GlobalVars[1]; // 0x1db PushGE
	var_27_int = 1; // 0x1dc PushI
	var_28_int = var_26_int + var_27_int; // 0x1dd Add
	var_29_int = var_25_string + var_28_int; // 0x1de Add
	BroadcastMessage(var_29_int, var_17_bool, var_22_object); // 0x1df Func
	var_30_string = "helpme timer"; // 0x1e1 PushS
	Trace(var_30_string); // 0x1e2 Func
	var_22_object = 0; // 0x1e4 SetNull
	
Label_485:
	return 2; // 0x1e5 Return
}


task_1_event_1(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_bool, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_bool = 0; // 0x1e7 PushV
	var_21_bool = 0; // 0x1e8 MovB
	var_22_bool = 0; var_23_object = Obj(); // 0x1e9 PushV
	var_23_object = var_20_bool; // 0x1ea Mov
	func_2804(var_22_bool, var_23_object); // 0x1eb NEW_2
	if(var_22_bool == 0) goto Label_498; // 0x1ed JumpB
	var_26_object = GlobalVars[8]; // 0x1ee PushGE
	var_27_bool = var_26_object != var_20_bool; // 0x1ef Neq
	if(var_27_bool == 0) goto Label_498; // 0x1f0 JumpB
	var_21_bool = 1; // 0x1f1 MovB
	
Label_498:
	if(var_21_bool == 0) goto Label_506; // 0x1f2 JumpB
	func_765(var_20_bool); // 0x1f4 NEW_2
	var_28_bool = 0; var_29_object = Obj(); // 0x1f6 PushV
	var_29_object = var_20_bool; // 0x1f7 Mov
	func_3667(var_28_bool, var_29_object); // 0x1f8 NEW_2
	
Label_506:
	return 0; // 0x1fa Return
}


task_1_event_6(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	func_765(var_19_bool); // 0x1fc NEW_2
	var_20_bool = 0; var_21_int = 0; // 0x1fe PushV
	var_21_int = 0; // 0x1ff MovI
	func_3567(var_20_bool, var_21_int); // 0x200 NEW_2
	return 0; // 0x202 Return
}


task_2_event_7(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x4dd PushV
	var_23_int = 2; // 0x4de PushI
	var_24_bool = var_20_bool == var_23_int; // 0x4df Eq
	if(var_24_bool == 0) goto Label_1263; // 0x4e0 JumpB
	GetMainOutdoorScene(var_22_object); // 0x4e1 Func
	var_25_string = "b9q03_helpme"; // 0x4e3 PushS
	var_26_int = GlobalVars[1]; // 0x4e4 PushGE
	var_27_int = 1; // 0x4e5 PushI
	var_28_int = var_26_int + var_27_int; // 0x4e6 Add
	var_29_int = var_25_string + var_28_int; // 0x4e7 Add
	BroadcastMessage(var_29_int, var_21_object, var_22_object); // 0x4e8 Func
	var_30_string = "helpme timer"; // 0x4ea PushS
	Trace(var_30_string); // 0x4eb Func
	var_22_object = 0; // 0x4ed SetNull
	goto Label_1267; // 0x4ee Jump
	
Label_1267:
	return 2; // 0x4f3 Return
	
Label_1263:
	var_31_int = 0; // 0x4ef PushV
	var_31_int = var_20_bool; // 0x4f0 Mov
	func_1325(var_22_object, var_31_int); // 0x4f1 NEW_2
}


task_2_event_6(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	func_1339(var_19_bool); // 0x4f5 NEW_2
	var_24_bool = 0; var_25_int = 0; // 0x4f7 PushV
	var_25_int = 0; // 0x4f8 MovI
	func_3567(var_24_bool, var_25_int); // 0x4f9 NEW_2
	return 0; // 0x4fb Return
}


task_2_event_1(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_object, var_15_bool, var_16_object, var_17_bool, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_bool = 0; // 0x549 PushV
	var_21_bool = 0; // 0x54a MovB
	var_22_bool = var_1_cvector == var_20_bool; // 0x54b Eq
	if(var_22_bool == 0) goto Label_1360; // 0x54c JumpB
	var_23_bool = var_2_object == 0; // 0x54d Not
	if(var_23_bool == 0) goto Label_1360; // 0x54e JumpB
	var_21_bool = 1; // 0x54f MovB
	
Label_1360:
	if(var_21_bool == 0) goto Label_1366; // 0x550 JumpB
	var_2_object = 1; // 0x551 TMovB
	var_24_object = Obj(); // 0x552 PushV
	var_24_object = var_20_bool; // 0x553 Mov
	func_3101(var_24_object); // 0x554 NEW_2
	
Label_1366:
	return 0; // 0x556 Return
}


task_2_event_2(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_object, var_15_bool, var_16_object, var_17_bool, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_bool = 0; // 0x558 PushV
	var_21_bool = 0; // 0x559 MovB
	var_22_bool = var_1_cvector == var_20_bool; // 0x55a Eq
	if(var_22_bool == 0) goto Label_1375; // 0x55b JumpB
	var_23_object = var_2_object; // 0x55c PushT
	if(var_23_object == 0) goto Label_1375; // 0x55d JumpB
	var_21_bool = 1; // 0x55e MovB
	
Label_1375:
	if(var_21_bool == 0) goto Label_1380; // 0x55f JumpB
	var_2_object = 0; // 0x560 TMovB
	var_24_string = "head"; // 0x561 PushS
	UnlookAsync(var_24_string); // 0x562 Func
	
Label_1380:
	return 0; // 0x564 Return
}


task_2_event_10(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_object, var_15_bool, var_16_object, var_17_bool, var_18_bool, var_19_bool, var_20_bool)
{
	RequestClearPath(var_20_bool); // 0x5de Func
	return 0; // 0x5e0 Return
}


task_2_event_41(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_object, var_15_bool, var_16_object, var_17_bool, var_18_bool, var_19_bool, var_20_bool)
{
	func_1339(var_20_bool); // 0x5ea NEW_2
	var_25_object = Obj(); // 0x5ec PushV
	var_25_object = var_20_bool; // 0x5ed Mov
	func_3766(); // 0x5ee NEW_2
	return 0; // 0x5f0 Return
}


task_3_event_6(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	func_1764(var_19_bool); // 0x624 NEW_2
	var_2_object = 1; // 0x626 TMovB
	var_21_bool = 0; var_22_int = 0; // 0x627 PushV
	var_22_int = 0; // 0x628 MovI
	func_3567(var_21_bool, var_22_int); // 0x629 NEW_2
	return 0; // 0x62b Return
}


task_3_event_42(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_string, var_19_bool, var_20_bool, var_21_bool)
{
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x62d PushV
	var_23_object = var_20_bool; // 0x62e Mov
	var_24_string = var_21_bool; // 0x62f Mov
	func_3319(var_22_bool, var_23_object, var_24_string); // 0x630 NEW_2
	if(var_22_bool == 0) goto Label_1590; // 0x632 JumpB
	func_1764(var_21_bool); // 0x634 NEW_2
	
Label_1590:
	return 0; // 0x636 Return
}


task_3_event_1(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x638 PushV
	var_22_object = var_20_bool; // 0x639 Mov
	func_3397(var_21_bool, var_22_object); // 0x63a NEW_2
	if(var_21_bool == 0) goto Label_1601; // 0x63c JumpB
	var_2_object = 1; // 0x63d TMovB
	func_1764(var_20_bool); // 0x63f NEW_2
	
Label_1601:
	return 0; // 0x641 Return
}


task_3_event_3(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x643 PushV
	var_22_object = var_20_bool; // 0x644 Mov
	func_3456(var_21_bool, var_22_object); // 0x645 NEW_2
	if(var_21_bool == 0) goto Label_1612; // 0x647 JumpB
	var_2_object = 1; // 0x648 TMovB
	func_1764(var_20_bool); // 0x64a NEW_2
	
Label_1612:
	return 0; // 0x64c Return
}


task_3_event_17(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_bool)
{
	EventDisable(42); // 0x64e EventDisable
	EventDisable(1); // 0x64f EventDisable
	EventDisable(3); // 0x650 EventDisable
	func_1764(var_20_bool); // 0x652 NEW_2
	var_2_object = 1; // 0x654 TMovB
	var_22_bool = 0; var_23_object = Obj(); // 0x655 PushV
	var_23_object = var_20_bool; // 0x656 Mov
	func_3667(var_22_bool, var_23_object); // 0x657 NEW_2
	return 0; // 0x659 Return
}


task_3_event_7(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_int, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_int = 3; // 0x65b PushI
	var_22_bool = var_20_bool == var_21_int; // 0x65c Eq
	if(var_22_bool == 0) goto Label_1635; // 0x65d JumpB
	func_1764(var_20_bool); // 0x65f NEW_2
	var_2_object = 1; // 0x661 TMovB
	return 0; // 0x662 Return
	
Label_1635:
	var_24_int = 0; // 0x663 PushV
	var_24_int = var_20_bool; // 0x664 Mov
	func_1742(var_19_bool, var_20_bool, var_24_int); // 0x665 NEW_2
	return 0; // 0x667 Return
}


task_3_event_10(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_bool)
{
	RequestClearPath(var_20_bool); // 0x6e1 Func
	return 0; // 0x6e3 Return
}


task_3_event_41(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_bool)
{
	func_1764(var_20_bool); // 0x6ed NEW_2
	var_22_object = Obj(); // 0x6ef PushV
	var_22_object = var_20_bool; // 0x6f0 Mov
	func_3766(); // 0x6f1 NEW_2
	return 0; // 0x6f3 Return
}


task_4_event_6(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	func_1927(); // 0x704 NEW_2
	var_20_bool = 0; var_21_int = 0; // 0x706 PushV
	var_21_int = 0; // 0x707 MovI
	func_3567(var_20_bool, var_21_int); // 0x708 NEW_2
	return 0; // 0x70a Return
}


task_4_event_42(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_string, var_19_bool, var_20_bool, var_21_bool)
{
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x70c PushV
	var_23_object = var_20_bool; // 0x70d Mov
	var_24_string = var_21_bool; // 0x70e Mov
	func_3319(var_22_bool, var_23_object, var_24_string); // 0x70f NEW_2
	if(var_22_bool == 0) goto Label_1813; // 0x711 JumpB
	func_1927(); // 0x713 NEW_2
	
Label_1813:
	return 0; // 0x715 Return
}


task_4_event_1(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x717 PushV
	var_22_object = var_20_bool; // 0x718 Mov
	func_3397(var_21_bool, var_22_object); // 0x719 NEW_2
	if(var_21_bool == 0) goto Label_1823; // 0x71b JumpB
	func_1927(); // 0x71d NEW_2
	
Label_1823:
	return 0; // 0x71f Return
}


task_4_event_3(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x721 PushV
	var_22_object = var_20_bool; // 0x722 Mov
	func_3456(var_21_bool, var_22_object); // 0x723 NEW_2
	if(var_21_bool == 0) goto Label_1833; // 0x725 JumpB
	func_1927(); // 0x727 NEW_2
	
Label_1833:
	return 0; // 0x729 Return
}


task_4_event_17(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_bool)
{
	EventDisable(42); // 0x72b EventDisable
	EventDisable(1); // 0x72c EventDisable
	EventDisable(3); // 0x72d EventDisable
	func_1927(); // 0x72f NEW_2
	var_21_bool = 0; var_22_object = Obj(); // 0x731 PushV
	var_22_object = var_20_bool; // 0x732 Mov
	func_3667(var_21_bool, var_22_object); // 0x733 NEW_2
	return 0; // 0x735 Return
}


task_5_event_6(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	func_2125(var_19_bool); // 0x79d NEW_2
	var_21_bool = 0; var_22_int = 0; // 0x79f PushV
	var_22_int = 0; // 0x7a0 MovI
	func_3567(var_21_bool, var_22_int); // 0x7a1 NEW_2
	return 0; // 0x7a3 Return
}


task_5_event_42(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_object, var_19_string, var_20_bool, var_21_bool)
{
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x7a5 PushV
	var_23_object = var_20_bool; // 0x7a6 Mov
	var_24_string = var_21_bool; // 0x7a7 Mov
	func_3319(var_22_bool, var_23_object, var_24_string); // 0x7a8 NEW_2
	if(var_22_bool == 0) goto Label_1966; // 0x7aa JumpB
	func_2125(var_21_bool); // 0x7ac NEW_2
	
Label_1966:
	return 0; // 0x7ae Return
}


task_5_event_1(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_object, var_19_bool, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x7b0 PushV
	var_22_object = var_20_bool; // 0x7b1 Mov
	func_3397(var_21_bool, var_22_object); // 0x7b2 NEW_2
	if(var_21_bool == 0) goto Label_1976; // 0x7b4 JumpB
	func_2125(var_20_bool); // 0x7b6 NEW_2
	
Label_1976:
	return 0; // 0x7b8 Return
}


task_5_event_3(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_object, var_19_bool, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x7ba PushV
	var_22_object = var_20_bool; // 0x7bb Mov
	func_3456(var_21_bool, var_22_object); // 0x7bc NEW_2
	if(var_21_bool == 0) goto Label_1986; // 0x7be JumpB
	func_2125(var_20_bool); // 0x7c0 NEW_2
	
Label_1986:
	return 0; // 0x7c2 Return
}


task_5_event_17(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_object, var_19_bool, var_20_bool)
{
	EventDisable(42); // 0x7c4 EventDisable
	EventDisable(1); // 0x7c5 EventDisable
	EventDisable(3); // 0x7c6 EventDisable
	func_2125(var_20_bool); // 0x7c8 NEW_2
	var_22_bool = 0; var_23_object = Obj(); // 0x7ca PushV
	var_23_object = var_20_bool; // 0x7cb Mov
	func_3667(var_22_bool, var_23_object); // 0x7cc NEW_2
	return 0; // 0x7ce Return
}


task_5_event_7(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_int, var_19_bool, var_20_bool)
{
	var_21_int = 0; // 0x839 PushI
	var_22_bool = var_20_bool != var_21_int; // 0x83a Neq
	if(var_22_bool == 0) goto Label_2109; // 0x83b JumpB
	return 0; // 0x83c Return
	
Label_2109:
	var_23_bool = 0; // 0x83d PushV
	func_1999(var_23_bool); // 0x83e NEW_2
	var_24_bool = var_23_bool == 0; // 0x840 Not
	if(var_24_bool == 0) goto Label_2115; // 0x841 JumpB
	var_0_cvector = 1; // 0x842 TMovB
	
Label_2115:
	var_25_int = 0; // 0x843 PushI
	KillTimer(var_25_int); // 0x844 Func
	Stop(); // 0x846 Func
	return 0; // 0x848 Return
}


task_5_event_10(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_object, var_19_bool, var_20_bool)
{
	RequestClearPath(var_20_bool); // 0x84a Func
	return 0; // 0x84c Return
}


task_5_event_41(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_object, var_19_bool, var_20_bool)
{
	func_2125(var_20_bool); // 0x856 NEW_2
	var_22_object = Obj(); // 0x858 PushV
	var_22_object = var_20_bool; // 0x859 Mov
	func_3766(); // 0x85a NEW_2
	return 0; // 0x85c Return
}


task_6_event_42(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_object, var_20_string, var_21_bool)
{
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x879 PushV
	var_23_object = var_20_string; // 0x87a Mov
	var_24_string = var_21_bool; // 0x87b Mov
	func_3319(var_22_bool, var_23_object, var_24_string); // 0x87c NEW_2
	if(var_22_bool == 0) goto Label_2178; // 0x87e JumpB
	func_2361(var_21_bool); // 0x880 NEW_2
	
Label_2178:
	return 0; // 0x882 Return
}


task_6_event_1(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_object, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x884 PushV
	var_22_object = var_20_bool; // 0x885 Mov
	func_3397(var_21_bool, var_22_object); // 0x886 NEW_2
	if(var_21_bool == 0) goto Label_2188; // 0x888 JumpB
	func_2361(var_20_bool); // 0x88a NEW_2
	
Label_2188:
	return 0; // 0x88c Return
}


task_6_event_3(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_object, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x88e PushV
	var_22_object = var_20_bool; // 0x88f Mov
	func_3456(var_21_bool, var_22_object); // 0x890 NEW_2
	if(var_21_bool == 0) goto Label_2198; // 0x892 JumpB
	func_2361(var_20_bool); // 0x894 NEW_2
	
Label_2198:
	return 0; // 0x896 Return
}


task_6_event_17(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_object, var_20_bool)
{
	EventDisable(42); // 0x898 EventDisable
	EventDisable(1); // 0x899 EventDisable
	EventDisable(3); // 0x89a EventDisable
	func_2361(var_20_bool); // 0x89c NEW_2
	var_22_bool = 0; var_23_object = Obj(); // 0x89e PushV
	var_23_object = var_20_bool; // 0x89f Mov
	func_3667(var_22_bool, var_23_object); // 0x8a0 NEW_2
	return 0; // 0x8a2 Return
}


task_6_event_6(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	func_2361(var_19_bool); // 0x8b4 NEW_2
	var_21_bool = 0; var_22_int = 0; // 0x8b6 PushV
	var_22_int = 0; // 0x8b7 MovI
	func_3567(var_21_bool, var_22_int); // 0x8b8 NEW_2
	return 0; // 0x8ba Return
}


task_6_event_7(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_int, var_20_bool)
{
	var_21_int = 0; // 0x925 PushI
	var_22_bool = var_20_bool != var_21_int; // 0x926 Neq
	if(var_22_bool == 0) goto Label_2345; // 0x927 JumpB
	return 0; // 0x928 Return
	
Label_2345:
	var_23_bool = 0; // 0x929 PushV
	func_2235(var_23_bool); // 0x92a NEW_2
	var_24_bool = var_23_bool == 0; // 0x92c Not
	if(var_24_bool == 0) goto Label_2351; // 0x92d JumpB
	var_0_cvector = 1; // 0x92e TMovB
	
Label_2351:
	var_25_int = 0; // 0x92f PushI
	KillTimer(var_25_int); // 0x930 Func
	Stop(); // 0x932 Func
	return 0; // 0x934 Return
}


task_6_event_10(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_object, var_20_bool)
{
	RequestClearPath(var_20_bool); // 0x936 Func
	return 0; // 0x938 Return
}


task_6_event_41(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_object, var_20_bool)
{
	func_2361(var_20_bool); // 0x942 NEW_2
	var_22_object = Obj(); // 0x944 PushV
	var_22_object = var_20_bool; // 0x945 Mov
	func_3766(); // 0x946 NEW_2
	return 0; // 0x948 Return
}


task_7_event_6(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	func_2472(); // 0x95d NEW_2
	var_0_cvector = 1; // 0x95f TMovB
	var_20_bool = 0; var_21_int = 0; // 0x960 PushV
	var_21_int = 0; // 0x961 MovI
	func_3567(var_20_bool, var_21_int); // 0x962 NEW_2
	return 0; // 0x964 Return
}


task_7_event_42(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_string)
{
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x966 PushV
	var_23_object = var_20_object; // 0x967 Mov
	var_24_string = var_21_string; // 0x968 Mov
	func_3319(var_22_bool, var_23_object, var_24_string); // 0x969 NEW_2
	if(var_22_bool == 0) goto Label_2416; // 0x96b JumpB
	func_2472(); // 0x96d NEW_2
	var_0_cvector = 1; // 0x96f TMovB
	
Label_2416:
	return 0; // 0x970 Return
}


task_7_event_1(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x972 PushV
	var_22_object = var_20_object; // 0x973 Mov
	func_3397(var_21_bool, var_22_object); // 0x974 NEW_2
	if(var_21_bool == 0) goto Label_2427; // 0x976 JumpB
	func_2472(); // 0x978 NEW_2
	var_0_cvector = 1; // 0x97a TMovB
	
Label_2427:
	return 0; // 0x97b Return
}


task_7_event_3(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x97d PushV
	var_22_object = var_20_object; // 0x97e Mov
	func_3456(var_21_bool, var_22_object); // 0x97f NEW_2
	if(var_21_bool == 0) goto Label_2438; // 0x981 JumpB
	func_2472(); // 0x983 NEW_2
	var_0_cvector = 1; // 0x985 TMovB
	
Label_2438:
	return 0; // 0x986 Return
}


task_7_event_17(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object)
{
	EventDisable(42); // 0x988 EventDisable
	EventDisable(1); // 0x989 EventDisable
	EventDisable(3); // 0x98a EventDisable
	func_2472(); // 0x98c NEW_2
	var_21_bool = 0; var_22_object = Obj(); // 0x98e PushV
	var_22_object = var_20_object; // 0x98f Mov
	func_3667(var_21_bool, var_22_object); // 0x990 NEW_2
	return 0; // 0x992 Return
}


task_8_event_6(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	var_20_object = Obj(); // 0xa20 PushV
	func_3164(var_20_object); // 0xa21 NEW_2
	RemoveActor(var_20_object); // 0xa23 Func
	Hold(); // 0xa25 Func
	return 0; // 0xa27 Return
}


task_8_event_0(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_bool = 0; // 0xa37 PushV
	IsOverrideActive(var_22_bool); // 0xa38 Func
	var_23_bool = var_22_bool == 0; // 0xa3a Not
	if(var_23_bool == 0) goto Label_2624; // 0xa3b JumpB
	var_24_object = Obj(); // 0xa3c PushV
	var_24_object = var_20_object; // 0xa3d Mov
	func_3257(var_24_object); // 0xa3e NEW_2
	
Label_2624:
	return 2; // 0xa40 Return
}


task_8_event_22(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_int, var_22_float, var_23_float)
{
	return 0; // 0xab7 Return
}


task_8_event_16(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_string)
{
	return 0; // 0xab9 Return
}


task_8_event_41(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object)
{
	return 0; // 0xabb Return
}


task_9_event_26(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_string)
{
	var_21_string = "cleanup"; // 0xacf PushS
	var_22_bool = var_20_string == var_21_string; // 0xad0 Eq
	if(var_22_bool == 0) goto Label_2777; // 0xad1 JumpB
	var_23_object = Obj(); // 0xad2 PushV
	func_3164(var_23_object); // 0xad3 NEW_2
	RemoveActor(var_23_object); // 0xad5 Func
	Hold(); // 0xad7 Func
	
Label_2777:
	return 0; // 0xad9 Return
}


task_9_event_5(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	StopGroup0(); // 0xada Func
	sync(); // 0xadc Func
	return 0; // 0xade Return
}


event_26(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_string)
{
	var_21_string = "cleanup"; // 0xcf0 PushS
	var_22_bool = var_20_string == var_21_string; // 0xcf1 Eq
	if(var_22_bool == 0) goto Label_3318; // 0xcf2 JumpB
	var_23_bool = GlobalVars[0]; // 0xcf3 PushGE
	var_23_bool = 1; // 0xcf4 MovB
	GlobalVars[0] = var_23_bool; // 0xcf5 PopGE
	
Label_3318:
	return 0; // 0xcf6 Return
}


event_22(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_int, var_22_float, var_23_float)
{
	var_24_object = Obj(); var_25_int = 0; var_26_float = 0; // 0xe98 PushV
	var_24_object = var_20_object; // 0xe99 Mov
	var_25_int = var_21_int; // 0xe9a Mov
	var_26_float = var_22_float; // 0xe9b Mov
	func_3003(var_24_object, var_25_int, var_26_float); // 0xe9c NEW_2
	return 0; // 0xe9e Return
}


event_43(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_int, var_22_float, var_23_float, var_24_cvector, var_25_cvector)
{
	var_26_object = Obj(); var_27_int = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); // 0xea0 PushV
	var_26_object = var_20_object; // 0xea1 Mov
	var_27_int = var_21_int; // 0xea2 Mov
	var_28_float = var_22_float; // 0xea3 Mov
	var_29_cvector = var_24_cvector; // 0xea4 Mov
	var_30_cvector = var_25_cvector; // 0xea5 Mov
	func_3071(var_28_float, var_29_cvector, var_30_cvector); // 0xea6 NEW_2
	return 0; // 0xea8 Return
}


event_16(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_string)
{
	var_22_float = 0; var_23_float = 0; // 0xea9 PushV
	var_24_string = "health"; // 0xeaa PushS
	var_25_bool = var_21_string == var_24_string; // 0xeab Eq
	if(var_25_bool == 0) goto Label_3765; // 0xeac JumpB
	var_26_string = "health"; // 0xead PushS
	GetProperty(var_26_string, var_23_float); // 0xeae Func
	var_27_int = 0; // 0xeb0 PushI
	var_28_bool = var_23_float <= var_27_int; // 0xeb1 LE
	if(var_28_bool == 0) goto Label_3765; // 0xeb2 JumpB
	SignalDeath(var_20_object); // 0xeb3 Func
	
Label_3765:
	return 2; // 0xeb5 Return
}


event_41(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object)
{
	var_21_object = Obj(); // 0xeb7 PushV
	var_21_object = var_20_object; // 0xeb8 Mov
	TaskCall(8); // 0xeb9 TaskCall
	func_2477(var_21_object); // 0xeba NEW_2
	TaskReturn(); // 0xebb TaskReturn
	return 0; // 0xebd Return
}


main(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	var_20_object = Obj(); var_21_int = 0; var_22_bool = 0; var_23_int = 0; var_24_bool = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_int = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_object = Obj(); var_31_object = Obj(); var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_int = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_object = Obj(); // 0x8 PushV
	var_42_bool = 0; // 0x9 PushV
	func_3483(var_42_bool); // 0xa NEW_2
	var_100_bool = var_42_bool == 0; // 0xc Not
	if(var_100_bool == 0) goto Label_23; // 0xd JumpB
	var_101_string = "FSM Init failed"; // 0xe PushS
	Trace(var_101_string); // 0xf Func
	var_102_object = Obj(); // 0x11 PushV
	func_3164(var_102_object); // 0x12 NEW_2
	RemoveActor(var_102_object); // 0x14 Func
	return 22; // 0x16 Return
	
Label_23:
	GetPosition(var_0_cvector); // 0x17 Func
	GetDirection(var_41_object); // 0x19 Func
	var_105_int = GlobalVars[3]; // 0x1b PushGE
	var_105_int = 0; // 0x1c MovI
	GlobalVars[3] = var_105_int; // 0x1d PopGE
	var_106_int = GlobalVars[4]; // 0x1e PushGE
	var_106_int = 2; // 0x1f MovI
	GlobalVars[4] = var_106_int; // 0x20 PopGE
	
Label_33:
	var_107_bool = 1; // 0x21 PushB
	if(var_107_bool == 0) goto Label_440; // 0x22 JumpB
	var_108_int = 0; // 0x23 PushI
	var_109_int = GlobalVars[3]; // 0x24 PushGE
	var_110_bool = var_108_int == var_109_int; // 0x25 Eq
	if(var_110_bool == 0) goto Label_49; // 0x26 JumpB
	TaskCall(9); // 0x28 TaskCall
	func_2748(); // 0x29 NEW_2
	TaskReturn(); // 0x2a TaskReturn
	var_117_bool = 0; var_118_int = 0; // 0x2c PushV
	var_118_int = 2; // 0x2d MovI
	func_3567(var_117_bool, var_118_int); // 0x2e NEW_2
	goto Label_437; // 0x30 Jump
	
Label_437:
	sync(); // 0x1b5 Func
	goto Label_33; // 0x1b7 Jump
	
Label_49:
	var_136_int = 7; // 0x31 PushI
	var_137_int = GlobalVars[3]; // 0x32 PushGE
	var_138_bool = var_136_int == var_137_int; // 0x33 Eq
	if(var_138_bool == 0) goto Label_80; // 0x34 JumpB
	var_139_object = Obj(); // 0x35 PushV
	var_140_object = GlobalVars[8]; // 0x36 PushGE
	var_139_object = var_140_object; // 0x37 Mov
	TaskCall(1); // 0x39 TaskCall
	func_441(var_148_object, var_139_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	var_668_int = 7; // 0x3d PushI
	var_669_int = GlobalVars[3]; // 0x3e PushGE
	var_670_bool = var_668_int == var_669_int; // 0x3f Eq
	if(var_670_bool == 0) goto Label_79; // 0x40 JumpB
	var_671_int = 0; // 0x41 PushV
	var_671_int = 1; // 0x42 MovI
	TaskCall(7); // 0x43 TaskCall
	func_2381(var_671_int); // 0x44 NEW_2
	TaskReturn(); // 0x45 TaskReturn
	var_688_int = 7; // 0x47 PushI
	var_689_int = GlobalVars[3]; // 0x48 PushGE
	var_690_bool = var_688_int == var_689_int; // 0x49 Eq
	if(var_690_bool == 0) goto Label_79; // 0x4a JumpB
	var_691_bool = 0; var_692_int = 0; // 0x4b PushV
	var_692_int = 2; // 0x4c MovI
	func_3567(var_691_bool, var_692_int); // 0x4d NEW_2
	
Label_79:
	goto Label_437; // 0x4f Jump
	
Label_80:
	var_693_int = 6; // 0x50 PushI
	var_694_int = GlobalVars[3]; // 0x51 PushGE
	var_695_bool = var_693_int == var_694_int; // 0x52 Eq
	if(var_695_bool == 0) goto Label_122; // 0x53 JumpB
	var_696_int = 0; // 0x54 PushV
	var_696_int = 1; // 0x55 MovI
	TaskCall(7); // 0x56 TaskCall
	func_2381(var_696_int); // 0x57 NEW_2
	TaskReturn(); // 0x58 TaskReturn
	var_698_int = 6; // 0x5a PushI
	var_699_int = GlobalVars[3]; // 0x5b PushGE
	var_700_bool = var_698_int == var_699_int; // 0x5c Eq
	if(var_700_bool == 0) goto Label_121; // 0x5d JumpB
	var_701_object = Obj(); var_702_float = 0; // 0x5e PushV
	var_703_object = GlobalVars[7]; // 0x5f PushGE
	var_701_object = var_703_object; // 0x60 Mov
	var_702_float = 8; // 0x62 MovI
	TaskCall(3); // 0x63 TaskCall
	func_1532(var_701_object, var_702_float); // 0x64 NEW_2
	TaskReturn(); // 0x65 TaskReturn
	var_773_int = 6; // 0x67 PushI
	var_774_int = GlobalVars[3]; // 0x68 PushGE
	var_775_bool = var_773_int == var_774_int; // 0x69 Eq
	if(var_775_bool == 0) goto Label_121; // 0x6a JumpB
	var_776_int = 0; // 0x6b PushV
	var_776_int = 1; // 0x6c MovI
	TaskCall(7); // 0x6d TaskCall
	func_2381(var_776_int); // 0x6e NEW_2
	TaskReturn(); // 0x6f TaskReturn
	var_778_int = 6; // 0x71 PushI
	var_779_int = GlobalVars[3]; // 0x72 PushGE
	var_780_bool = var_778_int == var_779_int; // 0x73 Eq
	if(var_780_bool == 0) goto Label_121; // 0x74 JumpB
	var_781_bool = 0; var_782_int = 0; // 0x75 PushV
	var_782_int = 2; // 0x76 MovI
	func_3567(var_781_bool, var_782_int); // 0x77 NEW_2
	
Label_121:
	goto Label_437; // 0x79 Jump
	
Label_122:
	var_783_int = 1; // 0x7a PushI
	var_784_int = GlobalVars[3]; // 0x7b PushGE
	var_785_bool = var_783_int == var_784_int; // 0x7c Eq
	if(var_785_bool == 0) goto Label_169; // 0x7d JumpB
	var_786_bool = 0; // 0x7e PushV
	var_786_bool = 1; // 0x7f MovB
	func_3696(var_786_bool); // 0x80 NEW_2
	var_795_bool = 0; // 0x82 PushV
	TaskCall(6); // 0x83 TaskCall
	func_2145(var_795_bool); // 0x84 NEW_2
	TaskReturn(); // 0x85 TaskReturn
	var_869_int = 1; // 0x87 PushI
	var_870_int = GlobalVars[3]; // 0x88 PushGE
	var_871_bool = var_869_int == var_870_int; // 0x89 Eq
	if(var_871_bool == 0) goto Label_164; // 0x8a JumpB
	TaskCall(4); // 0x8c TaskCall
	func_1791(); // 0x8d NEW_2
	TaskReturn(); // 0x8e TaskReturn
	var_923_int = 1; // 0x90 PushI
	var_924_int = GlobalVars[3]; // 0x91 PushGE
	var_925_bool = var_923_int == var_924_int; // 0x92 Eq
	if(var_925_bool == 0) goto Label_164; // 0x93 JumpB
	var_926_bool = 0; var_927_cvector = CVector(0,0,0); var_928_cvector = CVector(0,0,0); var_929_bool = 0; // 0x94 PushV
	var_927_cvector = var_0_cvector; // 0x95 MovT
	var_928_cvector = var_1_cvector; // 0x96 MovT
	var_929_bool = 0; // 0x97 MovB
	TaskCall(5); // 0x98 TaskCall
	func_1932(var_926_bool, var_927_cvector, var_928_cvector, var_929_bool); // 0x99 NEW_2
	TaskReturn(); // 0x9a TaskReturn
	var_985_int = 1; // 0x9c PushI
	var_986_int = GlobalVars[3]; // 0x9d PushGE
	var_987_bool = var_985_int == var_986_int; // 0x9e Eq
	if(var_987_bool == 0) goto Label_164; // 0x9f JumpB
	var_988_bool = 0; var_989_int = 0; // 0xa0 PushV
	var_989_int = 2; // 0xa1 MovI
	func_3567(var_988_bool, var_989_int); // 0xa2 NEW_2
	
Label_164:
	var_990_bool = 0; // 0xa4 PushV
	var_990_bool = 0; // 0xa5 MovB
	func_3696(var_990_bool); // 0xa6 NEW_2
	goto Label_437; // 0xa8 Jump
	
Label_169:
	var_991_int = 2; // 0xa9 PushI
	var_992_int = GlobalVars[3]; // 0xaa PushGE
	var_993_bool = var_991_int == var_992_int; // 0xab Eq
	if(var_993_bool == 0) goto Label_224; // 0xac JumpB
	var_994_bool = 0; // 0xad PushV
	func_0(var_41_object, var_994_bool); // 0xae NEW_2
	var_1002_bool = var_994_bool == 0; // 0xb0 Not
	if(var_1002_bool == 0) goto Label_186; // 0xb1 JumpB
	var_1003_bool = 0; var_1004_cvector = CVector(0,0,0); var_1005_cvector = CVector(0,0,0); var_1006_bool = 0; // 0xb2 PushV
	var_1004_cvector = var_0_cvector; // 0xb3 MovT
	var_1005_cvector = var_1_cvector; // 0xb4 MovT
	var_1006_bool = 0; // 0xb5 MovB
	TaskCall(5); // 0xb6 TaskCall
	func_1932(var_1003_bool, var_1004_cvector, var_1005_cvector, var_1006_bool); // 0xb7 NEW_2
	TaskReturn(); // 0xb8 TaskReturn
	
Label_186:
	var_1008_int = 2; // 0xba PushI
	var_1009_int = GlobalVars[3]; // 0xbb PushGE
	var_1010_bool = var_1008_int == var_1009_int; // 0xbc Eq
	if(var_1010_bool == 0) goto Label_223; // 0xbd JumpB
	TaskCall(4); // 0xbf TaskCall
	func_1791(); // 0xc0 NEW_2
	TaskReturn(); // 0xc1 TaskReturn
	var_1011_int = 2; // 0xc3 PushI
	var_1012_int = GlobalVars[3]; // 0xc4 PushGE
	var_1013_bool = var_1011_int == var_1012_int; // 0xc5 Eq
	if(var_1013_bool == 0) goto Label_223; // 0xc6 JumpB
	var_1014_bool = 0; // 0xc7 PushV
	func_3710(var_1014_bool); // 0xc8 NEW_2
	var_1023_bool = var_1014_bool == 0; // 0xca Not
	if(var_1023_bool == 0) goto Label_209; // 0xcb JumpB
	var_1024_bool = 0; var_1025_int = 0; // 0xcc PushV
	var_1025_int = 3; // 0xcd MovI
	func_3567(var_1024_bool, var_1025_int); // 0xce NEW_2
	goto Label_223; // 0xd0 Jump
	
Label_223:
	goto Label_437; // 0xdf Jump
	
Label_209:
	var_1026_bool = 0; var_1027_float = 0; // 0xd1 PushV
	var_1027_float = 0.5; // 0xd2 MovF
	func_3198(var_1026_bool, var_1027_float); // 0xd3 NEW_2
	if(var_1026_bool == 0) goto Label_223; // 0xd5 JumpB
	var_1030_bool = 0; // 0xd6 PushV
	func_3685(var_1030_bool); // 0xd7 NEW_2
	var_1039_bool = var_1030_bool == 0; // 0xd9 Not
	if(var_1039_bool == 0) goto Label_223; // 0xda JumpB
	var_1040_bool = 0; var_1041_int = 0; // 0xdb PushV
	var_1041_int = 1; // 0xdc MovI
	func_3567(var_1040_bool, var_1041_int); // 0xdd NEW_2
	
Label_224:
	var_1042_int = 3; // 0xe0 PushI
	var_1043_int = GlobalVars[3]; // 0xe1 PushGE
	var_1044_bool = var_1042_int == var_1043_int; // 0xe2 Eq
	if(var_1044_bool == 0) goto Label_308; // 0xe3 JumpB
	var_1045_bool = 0; // 0xe4 PushV
	var_1045_bool = 1; // 0xe5 MovB
	func_3721(var_1045_bool); // 0xe6 NEW_2
	GetMainOutdoorScene(var_31_object); // 0xe8 Func
	var_1054_int = GlobalVars[2]; // 0xea PushGE
	irand(var_32_int, var_1054_int); // 0xeb Func
	var_1055_bool = 0; var_1056_float = 0; // 0xed PushV
	var_1056_float = 0.5; // 0xee MovF
	func_3198(var_1055_bool, var_1056_float); // 0xef NEW_2
	var_33_bool = var_1055_bool; // 0xf0 Mov
	var_34_int = 0; // 0xf2 MovI
	
Label_243:
	var_1057_int = GlobalVars[2]; // 0xf3 PushGE
	var_1058_bool = var_34_int < var_1057_int; // 0xf4 LT
	if(var_1058_bool == 0) goto Label_294; // 0xf5 JumpB
	var_1059_int = var_34_int + var_32_int; // 0xf6 Add
	var_1060_int = GlobalVars[2]; // 0xf7 PushGE
	var_38_int = var_1059_int % var_1060_int; // 0xf8 Mod2
	var_1061_bool = var_33_bool; // 0xf9 Push
	if(var_1061_bool == 0) goto Label_255; // 0xfa JumpB
	var_1062_int = GlobalVars[2]; // 0xfb PushGE
	var_1063_int = 1; // 0xfc PushI
	var_1064_int = var_1062_int - var_1063_int; // 0xfd Sub
	var_38_int = var_1064_int - var_38_int; // 0xfe Sub2
	
Label_255:
	var_1065_string = "pt_b9q03_bonfire"; // 0xff PushS
	var_1066_int = GlobalVars[1]; // 0x100 PushGE
	var_1067_int = 1; // 0x101 PushI
	var_1068_int = var_1066_int + var_1067_int; // 0x102 Add
	var_1069_int = var_1065_string + var_1068_int; // 0x103 Add
	var_1070_string = "_patrol"; // 0x104 PushS
	var_1071_int = var_1069_int + var_1070_string; // 0x105 Add
	var_1072_int = 1; // 0x106 PushI
	var_1073_int = var_38_int + var_1072_int; // 0x107 Add
	var_1074_int = var_1071_int + var_1073_int; // 0x108 Add
	GetLocator(var_1074_int, var_35_bool, var_36_cvector, var_37_cvector); // 0x109 ObjFunc
	var_1075_bool = 0; var_1076_cvector = CVector(0,0,0); var_1077_cvector = CVector(0,0,0); var_1078_bool = 0; // 0x10b PushV
	var_1076_cvector = var_36_cvector; // 0x10c Mov
	var_1077_cvector = var_37_cvector; // 0x10d Mov
	var_1078_bool = 0; // 0x10e MovB
	TaskCall(5); // 0x10f TaskCall
	func_1932(var_1075_bool, var_1076_cvector, var_1077_cvector, var_1078_bool); // 0x110 NEW_2
	TaskReturn(); // 0x111 TaskReturn
	var_1080_int = 3; // 0x113 PushI
	var_1081_int = GlobalVars[3]; // 0x114 PushGE
	var_1082_bool = var_1080_int != var_1081_int; // 0x115 Neq
	if(var_1082_bool == 0) goto Label_280; // 0x116 JumpB
	goto Label_294; // 0x117 Jump
	
Label_294:
	var_1083_int = 3; // 0x126 PushI
	var_1084_int = GlobalVars[3]; // 0x127 PushGE
	var_1085_bool = var_1083_int == var_1084_int; // 0x128 Eq
	if(var_1085_bool == 0) goto Label_302; // 0x129 JumpB
	var_1086_bool = 0; var_1087_int = 0; // 0x12a PushV
	var_1087_int = 2; // 0x12b MovI
	func_3567(var_1086_bool, var_1087_int); // 0x12c NEW_2
	
Label_302:
	var_1088_bool = 0; // 0x12e PushV
	var_1088_bool = 0; // 0x12f MovB
	func_3721(var_1088_bool); // 0x130 NEW_2
	var_31_object = 0; // 0x132 SetNull
	goto Label_437; // 0x133 Jump
	
Label_280:
	var_1089_int = 0; // 0x118 PushV
	var_1089_int = 1; // 0x119 MovI
	TaskCall(7); // 0x11a TaskCall
	func_2381(var_1089_int); // 0x11b NEW_2
	TaskReturn(); // 0x11c TaskReturn
	var_1091_int = 3; // 0x11e PushI
	var_1092_int = GlobalVars[3]; // 0x11f PushGE
	var_1093_bool = var_1091_int != var_1092_int; // 0x120 Neq
	if(var_1093_bool == 0) goto Label_291; // 0x121 JumpB
	goto Label_294; // 0x122 Jump
	
Label_291:
	var_1094_int = 1; // 0x123 PushI
	var_34_int = var_34_int + var_1094_int; // 0x124 Add2
	goto Label_243; // 0x125 Jump
	
Label_308:
	var_1095_int = 4; // 0x134 PushI
	var_1096_int = GlobalVars[3]; // 0x135 PushGE
	var_1097_bool = var_1095_int == var_1096_int; // 0x136 Eq
	if(var_1097_bool == 0) goto Label_392; // 0x137 JumpB
	var_1098_object = GlobalVars[5]; // 0x138 PushGE
	GetPosition(var_39_cvector); // 0x139 ObjFunc
	var_1099_object = GlobalVars[5]; // 0x13b PushGE
	GetDirection(var_40_cvector); // 0x13c ObjFunc
	var_1100_bool = 0; var_1101_cvector = CVector(0,0,0); var_1102_cvector = CVector(0,0,0); var_1103_bool = 0; // 0x13e PushV
	var_1101_cvector = var_39_cvector; // 0x13f Mov
	var_1102_cvector = -var_40_cvector; // 0x140 Neg2
	var_1103_bool = 1; // 0x141 MovB
	TaskCall(5); // 0x142 TaskCall
	func_1932(var_1100_bool, var_1101_cvector, var_1102_cvector, var_1103_bool); // 0x143 NEW_2
	TaskReturn(); // 0x144 TaskReturn
	var_1105_int = 4; // 0x146 PushI
	var_1106_int = GlobalVars[3]; // 0x147 PushGE
	var_1107_bool = var_1105_int == var_1106_int; // 0x148 Eq
	if(var_1107_bool == 0) goto Label_391; // 0x149 JumpB
	var_1108_int = 0; // 0x14a PushV
	var_1108_int = 2; // 0x14b MovI
	TaskCall(7); // 0x14c TaskCall
	func_2381(var_1108_int); // 0x14d NEW_2
	TaskReturn(); // 0x14e TaskReturn
	var_1110_int = 4; // 0x150 PushI
	var_1111_int = GlobalVars[3]; // 0x151 PushGE
	var_1112_bool = var_1110_int == var_1111_int; // 0x152 Eq
	if(var_1112_bool == 0) goto Label_391; // 0x153 JumpB
	var_1113_bool = 0; var_1114_cvector = CVector(0,0,0); var_1115_cvector = CVector(0,0,0); var_1116_bool = 0; // 0x154 PushV
	var_1114_cvector = var_0_cvector; // 0x155 MovT
	var_1115_cvector = var_1_cvector; // 0x156 MovT
	var_1116_bool = 1; // 0x157 MovB
	TaskCall(5); // 0x158 TaskCall
	func_1932(var_1113_bool, var_1114_cvector, var_1115_cvector, var_1116_bool); // 0x159 NEW_2
	TaskReturn(); // 0x15a TaskReturn
	var_1118_int = 4; // 0x15c PushI
	var_1119_int = GlobalVars[3]; // 0x15d PushGE
	var_1120_bool = var_1118_int == var_1119_int; // 0x15e Eq
	if(var_1120_bool == 0) goto Label_391; // 0x15f JumpB
	GetMainOutdoorScene(var_41_object); // 0x160 Func
	var_1121_string = "b9q03_corpse"; // 0x162 PushS
	var_1122_int = GlobalVars[1]; // 0x163 PushGE
	var_1123_int = 1; // 0x164 PushI
	var_1124_int = var_1122_int + var_1123_int; // 0x165 Add
	var_1125_int = var_1121_string + var_1124_int; // 0x166 Add
	var_1126_object = Obj(); // 0x167 PushV
	func_3164(var_1126_object); // 0x168 NEW_2
	BroadcastMessage(var_1125_int, var_1126_object, var_41_object); // 0x16a Func
	var_1127_bool = 0; var_1128_cvector = CVector(0,0,0); var_1129_cvector = CVector(0,0,0); var_1130_bool = 0; // 0x16c PushV
	var_1128_cvector = var_39_cvector; // 0x16d Mov
	var_1129_cvector = var_39_cvector; // 0x16e Mov
	var_1130_bool = 1; // 0x16f MovB
	TaskCall(5); // 0x170 TaskCall
	func_1932(var_1127_bool, var_1128_cvector, var_1129_cvector, var_1130_bool); // 0x171 NEW_2
	TaskReturn(); // 0x172 TaskReturn
	var_1132_int = 4; // 0x174 PushI
	var_1133_int = GlobalVars[3]; // 0x175 PushGE
	var_1134_bool = var_1132_int == var_1133_int; // 0x176 Eq
	if(var_1134_bool == 0) goto Label_390; // 0x177 JumpB
	var_1135_int = 0; // 0x178 PushV
	var_1135_int = 3; // 0x179 MovI
	TaskCall(7); // 0x17a TaskCall
	func_2381(var_1135_int); // 0x17b NEW_2
	TaskReturn(); // 0x17c TaskReturn
	var_1137_int = 4; // 0x17e PushI
	var_1138_int = GlobalVars[3]; // 0x17f PushGE
	var_1139_bool = var_1137_int == var_1138_int; // 0x180 Eq
	if(var_1139_bool == 0) goto Label_390; // 0x181 JumpB
	var_1140_bool = 0; var_1141_int = 0; // 0x182 PushV
	var_1141_int = 2; // 0x183 MovI
	func_3567(var_1140_bool, var_1141_int); // 0x184 NEW_2
	
Label_390:
	var_41_object = 0; // 0x186 SetNull
	
Label_391:
	goto Label_437; // 0x187 Jump
	
Label_392:
	var_1142_int = 5; // 0x188 PushI
	var_1143_int = GlobalVars[3]; // 0x189 PushGE
	var_1144_bool = var_1142_int == var_1143_int; // 0x18a Eq
	if(var_1144_bool == 0) goto Label_434; // 0x18b JumpB
	var_1145_int = 0; // 0x18c PushV
	var_1145_int = 1; // 0x18d MovI
	TaskCall(7); // 0x18e TaskCall
	func_2381(var_1145_int); // 0x18f NEW_2
	TaskReturn(); // 0x190 TaskReturn
	var_1147_int = 5; // 0x192 PushI
	var_1148_int = GlobalVars[3]; // 0x193 PushGE
	var_1149_bool = var_1147_int == var_1148_int; // 0x194 Eq
	if(var_1149_bool == 0) goto Label_433; // 0x195 JumpB
	var_1150_object = Obj(); var_1151_float = 0; // 0x196 PushV
	var_1152_object = GlobalVars[6]; // 0x197 PushGE
	var_1150_object = var_1152_object; // 0x198 Mov
	var_1151_float = 8; // 0x19a MovI
	TaskCall(3); // 0x19b TaskCall
	func_1532(var_1150_object, var_1151_float); // 0x19c NEW_2
	TaskReturn(); // 0x19d TaskReturn
	var_1156_int = 5; // 0x19f PushI
	var_1157_int = GlobalVars[3]; // 0x1a0 PushGE
	var_1158_bool = var_1156_int == var_1157_int; // 0x1a1 Eq
	if(var_1158_bool == 0) goto Label_433; // 0x1a2 JumpB
	var_1159_int = 0; // 0x1a3 PushV
	var_1159_int = 2; // 0x1a4 MovI
	TaskCall(7); // 0x1a5 TaskCall
	func_2381(var_1159_int); // 0x1a6 NEW_2
	TaskReturn(); // 0x1a7 TaskReturn
	var_1161_int = 5; // 0x1a9 PushI
	var_1162_int = GlobalVars[3]; // 0x1aa PushGE
	var_1163_bool = var_1161_int == var_1162_int; // 0x1ab Eq
	if(var_1163_bool == 0) goto Label_433; // 0x1ac JumpB
	var_1164_bool = 0; var_1165_int = 0; // 0x1ad PushV
	var_1165_int = 2; // 0x1ae MovI
	func_3567(var_1164_bool, var_1165_int); // 0x1af NEW_2
	
Label_433:
	goto Label_437; // 0x1b1 Jump
	
Label_434:
	var_1166_string = "Unknown FSM state"; // 0x1b2 PushS
	Trace(var_1166_string); // 0x1b3 Func
	
Label_440:
	return 22; // 0x1b8 Return
}


func_0(var_0_cvector, var_994_bool)
{
	var_995_cvector = CVector(0,0,0); var_996_cvector = CVector(0,0,0); var_997_float = 0; var_998_cvector = CVector(0,0,0); var_999_cvector = CVector(0,0,0); var_1000_float = 0; // 0x0 PushV
	GetPosition(var_998_cvector); // 0x1 Func
	var_999_cvector = var_998_cvector - var_0_cvector; // 0x3 Sub2
	var_1000_float = var_999_cvector | var_999_cvector; // 0x4 Or2
	var_1001_int = 40000; // 0x5 PushI
	var_994_bool = var_1000_float < var_1001_int; // 0x6 LT2
	return 6; // 0x7 Return
}


func_515(var_0_cvector, var_3_int, var_4_int, var_6_bool, var_151_object, var_152_bool, var_153_float, var_259_bool, var_365_bool)
{
	var_154_float = 0; var_155_cvector = CVector(0,0,0); var_156_cvector = CVector(0,0,0); var_157_bool = 0; var_158_bool = 0; var_159_float = 0; var_160_cvector = CVector(0,0,0); var_161_float = 0; var_162_cvector = CVector(0,0,0); var_163_bool = 0; var_164_float = 0; var_165_float = 0; var_166_cvector = CVector(0,0,0); var_167_cvector = CVector(0,0,0); var_168_bool = 0; var_169_bool = 0; var_170_float = 0; var_171_cvector = CVector(0,0,0); var_172_float = 0; var_173_cvector = CVector(0,0,0); var_174_bool = 0; var_175_float = 0; // 0x203 PushV
	func_773(var_173_cvector, var_174_bool, var_175_float); // 0x205 NEW_2
	var_6_bool = 0; // 0x207 TMovI
	var_198_string = "@GetAttackDistance"; // 0x208 PushS
	var_199_int = 1; // 0x209 PushI
	var_200_bool = IsFuncExist(var_151_object, var_198_string, var_199_int); // 0x20a FuncExist
	if(var_200_bool == 0) goto Label_529; // 0x20b JumpB
	GetAttackDistance(var_165_float); // 0x20c ObjFunc
	var_201_int = 50; // 0x20e PushI
	var_165_float = var_165_float + var_201_int; // 0x20f Add2
	goto Label_530; // 0x210 Jump
	
Label_530:
	var_202_int = 150; // 0x212 PushI
	var_203_bool = var_165_float >= var_202_int; // 0x213 GE
	if(var_203_bool == 0) goto Label_534; // 0x214 JumpB
	var_165_float = 150; // 0x215 MovI
	
Label_534:
	var_3_int = 0; // 0x216 TMovB
	var_0_cvector = var_151_object; // 0x217 TMov
	IsPlayerActor(var_0_cvector, var_168_bool); // 0x218 Func
	var_204_bool = var_168_bool; // 0x21a Push
	if(var_204_bool == 0) goto Label_543; // 0x21b JumpB
	var_205_string = "attack"; // 0x21c PushS
	PlayGlobalMusic(var_205_string); // 0x21d Func
	
Label_543:
	var_206_bool = var_152_bool; // 0x21f Push
	if(var_206_bool == 0) goto Label_547; // 0x220 JumpB
	var_169_bool = 0; // 0x221 MovB
	goto Label_548; // 0x222 Jump
	
Label_548:
	var_207_float = 300.0; // 0x224 PushF
	var_170_float = var_207_float + var_165_float; // 0x225 Add2
	
Label_550:
	var_208_bool = 0; // 0x226 PushV
	var_208_bool = 0; // 0x227 MovB
	var_209_bool = 0; // 0x228 PushV
	var_209_bool = 0; // 0x229 MovB
	var_210_bool = 0; var_211_object = Obj(); // 0x22a PushV
	var_211_object = var_0_cvector; // 0x22b MovT
	func_2935(var_210_bool, var_211_object); // 0x22c NEW_2
	if(var_210_bool == 0) goto Label_562; // 0x22e JumpB
	var_244_bool = var_3_int == 0; // 0x22f Not
	if(var_244_bool == 0) goto Label_562; // 0x230 JumpB
	var_209_bool = 1; // 0x231 MovB
	
Label_562:
	if(var_209_bool == 0) goto Label_566; // 0x232 JumpB
	var_245_bool = var_4_int == 0; // 0x233 Not
	if(var_245_bool == 0) goto Label_566; // 0x234 JumpB
	var_208_bool = 1; // 0x235 MovB
	
Label_566:
	if(var_208_bool == 0) goto Label_742; // 0x236 JumpB
	func_1207(var_175_float); // 0x238 NEW_2
	GetPFPosition(var_166_cvector); // 0x23a TObjFunc
	GetPFPosition(var_167_cvector); // 0x23c Func
	var_171_cvector = var_166_cvector - var_167_cvector; // 0x23e Sub2
	var_172_float = var_171_cvector | var_171_cvector; // 0x23f Or2
	var_251_float = var_170_float * var_170_float; // 0x240 Mult
	var_252_bool = var_172_float >= var_251_float; // 0x241 GE
	if(var_252_bool == 0) goto Label_595; // 0x242 JumpB
	var_253_bool = 0; var_254_object = Obj(); var_255_float = 0; var_256_float = 0; var_257_bool = 0; var_258_bool = 0; // 0x243 PushV
	var_254_object = var_0_cvector; // 0x244 MovT
	var_255_float = var_165_float; // 0x245 Mov
	var_256_float = 2000.0; // 0x246 MovF
	var_257_bool = 1; // 0x247 MovB
	var_258_bool = 0; // 0x248 MovB
	TaskCall(2); // 0x249 TaskCall
	func_1225(var_262_object, var_253_bool, var_254_object, var_255_float, var_256_float, var_257_bool, var_258_bool); // 0x24a NEW_2
	TaskReturn(); // 0x24b TaskReturn
	var_348_bool = var_259_bool == 0; // 0x24d Not
	if(var_348_bool == 0) goto Label_593; // 0x24e JumpB
	var_3_int = 1; // 0x24f TMovB
	goto Label_742; // 0x250 Jump
	
Label_742:
	WaitForAnimEnd(); // 0x2e6 Func
	var_349_bool = 0; // 0x2e8 PushV
	var_349_bool = 1; // 0x2e9 MovB
	var_350_int = var_3_int; // 0x2ea PushT
	if(var_350_int == 0) goto Label_751; // 0x2eb JumpB
	var_351_int = var_4_int; // 0x2ec PushT
	if(var_351_int == 0) goto Label_751; // 0x2ed JumpB
	var_349_bool = 0; // 0x2ee MovB
	
Label_751:
	if(var_349_bool == 0) goto Label_753; // 0x2ef JumpB
	return 22; // 0x2f0 Return
	
Label_753:
	var_352_string = "all"; // 0x2f1 PushS
	var_353_string = "attack_off"; // 0x2f2 PushS
	PlayAnimation(var_352_string, var_353_string); // 0x2f3 Func
	WaitForAnimEnd(); // 0x2f5 Func
	var_354_bool = var_168_bool; // 0x2f7 Push
	if(var_354_bool == 0) goto Label_764; // 0x2f8 JumpB
	var_355_float = 2.0; // 0x2f9 PushF
	Sleep(var_355_float); // 0x2fa Func
	
Label_764:
	return 22; // 0x2fc Return
	
Label_593:
	var_169_bool = 0; // 0x251 MovB
	goto Label_741; // 0x252 Jump
	
Label_741:
	goto Label_550; // 0x2e5 Jump
	
Label_595:
	var_356_float = var_153_float * var_153_float; // 0x253 Mult
	var_357_bool = var_172_float >= var_356_float; // 0x254 GE
	if(var_357_bool == 0) goto Label_733; // 0x255 JumpB
	GetPFPosition(var_173_cvector); // 0x256 TObjFunc
	CanReachByPF(var_174_bool, var_173_cvector); // 0x258 Func
	var_358_bool = var_174_bool == 0; // 0x25a Not
	if(var_358_bool == 0) goto Label_620; // 0x25b JumpB
	var_359_bool = 0; var_360_object = Obj(); var_361_float = 0; var_362_float = 0; var_363_bool = 0; var_364_bool = 0; // 0x25c PushV
	var_360_object = var_0_cvector; // 0x25d MovT
	var_361_float = var_165_float; // 0x25e Mov
	var_362_float = 2000.0; // 0x25f MovF
	var_363_bool = 1; // 0x260 MovB
	var_364_bool = 0; // 0x261 MovB
	TaskCall(2); // 0x262 TaskCall
	func_1225(var_368_object, var_359_bool, var_360_object, var_361_float, var_362_float, var_363_bool, var_364_bool); // 0x263 NEW_2
	TaskReturn(); // 0x264 TaskReturn
	var_369_bool = var_365_bool == 0; // 0x266 Not
	if(var_369_bool == 0) goto Label_618; // 0x267 JumpB
	var_3_int = 1; // 0x268 TMovB
	goto Label_742; // 0x269 Jump
	
Label_618:
	var_169_bool = 0; // 0x26a MovB
	goto Label_550; // 0x26b Jump
	
Label_620:
	var_370_bool = var_169_bool == 0; // 0x26c Not
	if(var_370_bool == 0) goto Label_651; // 0x26d JumpB
	var_371_object = Obj(); // 0x26e PushV
	var_371_object = var_0_cvector; // 0x26f MovT
	func_3085(); // 0x270 NEW_2
	var_380_string = "all"; // 0x272 PushS
	var_381_string = "attack_on"; // 0x273 PushS
	PlayAnimation(var_380_string, var_381_string); // 0x274 Func
	WaitForAnimEnd(); // 0x276 Func
	func_1207(var_175_float); // 0x279 NEW_2
	StopAsync(); // 0x27b Func
	var_169_bool = 1; // 0x27d MovB
	var_382_bool = 0; // 0x27e PushV
	var_382_bool = 1; // 0x27f MovB
	var_383_bool = 0; var_384_object = Obj(); // 0x280 PushV
	var_384_object = var_0_cvector; // 0x281 MovT
	func_2935(var_383_bool, var_384_object); // 0x282 NEW_2
	var_385_bool = var_383_bool == 0; // 0x284 Not
	if(var_385_bool == 0) goto Label_649; // 0x285 JumpB
	var_386_int = var_4_int; // 0x286 PushT
	if(var_386_int == 0) goto Label_649; // 0x287 JumpB
	var_382_bool = 0; // 0x288 MovB
	
Label_649:
	if(var_382_bool == 0) goto Label_651; // 0x289 JumpB
	goto Label_742; // 0x28a Jump
	
Label_651:
	rand(var_175_float); // 0x28b Func
	var_387_bool = 0; // 0x28d PushV
	var_387_bool = 1; // 0x28e MovB
	var_388_float = 0.6; // 0x28f PushF
	var_389_bool = var_175_float < var_388_float; // 0x290 LT
	if(var_389_bool == 0) goto Label_663; // 0x291 JumpB
	var_390_bool = 0; // 0x292 PushV
	func_1164(var_387_bool, var_390_bool); // 0x293 NEW_2
	if(var_390_bool == 0) goto Label_663; // 0x295 JumpB
	var_387_bool = 0; // 0x296 MovB
	
Label_663:
	if(var_387_bool == 0) goto Label_680; // 0x297 JumpB
	Face(var_0_cvector); // 0x298 Func
	func_1212(); // 0x29b NEW_2
	var_425_string = "all"; // 0x29d PushS
	var_426_string = "attack_stay"; // 0x29e PushS
	PlayAnimation(var_425_string, var_426_string); // 0x29f Func
	var_427_bool = 0; var_428_float = 0; // 0x2a1 PushV
	var_428_float = var_153_float; // 0x2a2 Mov
	func_1020(var_175_float, var_427_bool, var_428_float); // 0x2a3 NEW_2
	StopAsync(); // 0x2a5 Func
	goto Label_732; // 0x2a7 Jump
	
Label_732:
	goto Label_741; // 0x2dc Jump
	
Label_680:
	Face(var_0_cvector); // 0x2a8 Func
	var_649_string = "all"; // 0x2aa PushS
	var_650_string = "fjump"; // 0x2ab PushS
	PlayAnimation(var_649_string, var_650_string); // 0x2ac Func
	WaitForAnimEnd(); // 0x2ae Func
	func_1207(var_175_float); // 0x2b1 NEW_2
	var_651_cvector = CVector(0.0, 0.0, 0.0); // 0x2b3 PushVec
	SetSpeed(var_651_cvector); // 0x2b4 Func
	Stop(); // 0x2b6 Func
	StopAsync(); // 0x2b8 Func
	var_652_bool = 0; // 0x2ba PushV
	func_1164(var_175_float, var_652_bool); // 0x2bb NEW_2
	var_653_bool = var_652_bool == 0; // 0x2bd Not
	if(var_653_bool == 0) goto Label_732; // 0x2be JumpB
	var_654_bool = 0; // 0x2bf PushV
	var_654_bool = 1; // 0x2c0 MovB
	var_655_bool = 0; var_656_object = Obj(); // 0x2c1 PushV
	var_656_object = var_0_cvector; // 0x2c2 MovT
	func_2935(var_655_bool, var_656_object); // 0x2c3 NEW_2
	var_657_bool = var_655_bool == 0; // 0x2c5 Not
	if(var_657_bool == 0) goto Label_714; // 0x2c6 JumpB
	var_658_int = var_4_int; // 0x2c7 PushT
	if(var_658_int == 0) goto Label_714; // 0x2c8 JumpB
	var_654_bool = 0; // 0x2c9 MovB
	
Label_714:
	if(var_654_bool == 0) goto Label_716; // 0x2ca JumpB
	goto Label_742; // 0x2cb Jump
	
Label_716:
	GetPFPosition(var_166_cvector); // 0x2cc TObjFunc
	GetPFPosition(var_167_cvector); // 0x2ce Func
	var_171_cvector = var_166_cvector - var_167_cvector; // 0x2d0 Sub2
	var_172_float = var_171_cvector | var_171_cvector; // 0x2d1 Or2
	var_659_float = var_153_float * var_153_float; // 0x2d2 Mult
	var_660_bool = var_172_float < var_659_float; // 0x2d3 LT
	if(var_660_bool == 0) goto Label_732; // 0x2d4 JumpB
	var_661_bool = 0; var_662_float = 0; // 0x2d5 PushV
	var_662_float = var_153_float; // 0x2d6 Mov
	func_847(var_175_float, var_661_bool, var_662_float); // 0x2d7 NEW_2
	var_663_bool = var_661_bool == 0; // 0x2d9 Not
	if(var_663_bool == 0) goto Label_732; // 0x2da JumpB
	goto Label_742; // 0x2db Jump
	
Label_733:
	var_664_bool = 0; var_665_float = 0; // 0x2dd PushV
	var_665_float = var_153_float; // 0x2de Mov
	func_847(var_175_float, var_664_bool, var_665_float); // 0x2df NEW_2
	var_666_bool = var_664_bool == 0; // 0x2e1 Not
	if(var_666_bool == 0) goto Label_740; // 0x2e2 JumpB
	goto Label_742; // 0x2e3 Jump
	
Label_740:
	var_169_bool = 1; // 0x2e4 MovB
	
Label_547:
	var_169_bool = 1; // 0x223 MovB
	
Label_529:
	var_165_float = var_153_float; // 0x211 Mov
}


func_3085()
{
	var_372_cvector = CVector(0,0,0); var_373_cvector = CVector(0,0,0); var_374_cvector = CVector(0,0,0); var_375_cvector = CVector(0,0,0); var_376_cvector = CVector(0,0,0); var_377_cvector = CVector(0,0,0); // 0xc0d PushV
	GetPosition(var_375_cvector); // 0xc0e ObjFunc
	GetPosition(var_376_cvector); // 0xc10 Func
	var_377_cvector = var_375_cvector - var_376_cvector; // 0xc12 Sub2
	var_378_float = GetByIndex(var_377_cvector, 0); // 0xc13 PushE
	var_379_float = GetByIndex(var_377_cvector, 2); // 0xc14 PushE
	RotateAsync(var_378_float, var_379_float); // 0xc15 Func
	return 6; // 0xc17 Return
}


func_3096(var_113_bool)
{
	var_114_bool = 0; var_115_bool = 0; // 0xc18 PushV
	IsLoaded(var_115_bool); // 0xc19 Func
	var_113_bool = var_115_bool; // 0xc1b Mov
	return 2; // 0xc1c Return
}


func_1532(var_701_object, var_702_float)
{
	var_707_bool = 0; var_708_object = Obj(); // 0x5fd PushV
	var_708_object = var_701_object; // 0x5fe Mov
	func_2935(var_707_bool, var_708_object); // 0x5ff NEW_2
	var_709_bool = var_707_bool == 0; // 0x601 Not
	if(var_709_bool == 0) goto Label_1544; // 0x602 JumpB
	var_710_bool = 0; var_711_int = 0; // 0x603 PushV
	var_711_int = 2; // 0x604 MovI
	func_3567(var_710_bool, var_711_int); // 0x605 NEW_2
	return 0; // 0x607 Return
	
Label_1544:
	var_712_int = 0; // 0x608 PushI
	var_713_bool = var_702_float > var_712_int; // 0x609 GT
	if(var_713_bool == 0) goto Label_1562; // 0x60a JumpB
	var_714_int = 3; // 0x60b PushI
	SetTimer(var_714_int, var_702_float); // 0x60c Func
	var_715_bool = 0; var_716_object = Obj(); var_717_float = 0; var_718_float = 0; var_719_bool = 0; var_720_bool = 0; // 0x60e PushV
	var_716_object = var_701_object; // 0x60f Mov
	var_717_float = 350.0; // 0x610 MovF
	var_718_float = 6000; // 0x611 MovI
	var_719_bool = 1; // 0x612 MovB
	var_720_bool = 1; // 0x613 MovB
	func_1640(var_701_object, var_702_float, var_715_bool, var_716_object, var_717_float, var_718_float, var_719_bool, var_720_bool); // 0x614 NEW_2
	var_766_int = 3; // 0x616 PushI
	KillTimer(var_766_int); // 0x617 Func
	goto Label_1570; // 0x619 Jump
	
Label_1570:
	return 0; // 0x622 Return
	
Label_1562:
	var_767_bool = 0; var_768_object = Obj(); var_769_float = 0; var_770_float = 0; var_771_bool = 0; var_772_bool = 0; // 0x61a PushV
	var_768_object = var_701_object; // 0x61b Mov
	var_769_float = 350.0; // 0x61c MovF
	var_770_float = 6000; // 0x61d MovI
	var_771_bool = 1; // 0x61e MovB
	var_772_bool = 1; // 0x61f MovB
	func_1640(var_701_object, var_702_float, var_767_bool, var_768_object, var_769_float, var_770_float, var_771_bool, var_772_bool); // 0x620 NEW_2
}


func_3101(var_281_object)
{
	var_282_float = 0; var_283_cvector = CVector(0,0,0); var_284_float = 0; var_285_cvector = CVector(0,0,0); // 0xc1d PushV
	GetEyesHeight(var_284_float); // 0xc1e ObjFunc
	var_285_cvector = CVector(0.0, 0.0, 0.0); // 0xc20 MovV
	var_286_float = GetByIndex(var_285_cvector, 1); // 0xc21 PushE
	var_286_float = var_284_float; // 0xc22 Mov
	SetByIndex(var_285_cvector, 1) = var_286_float; // 0xc23 PopE
	var_287_string = "head"; // 0xc24 PushS
	LookAsync(var_281_object, var_287_string, var_285_cvector); // 0xc25 Func
	return 4; // 0xc27 Return
}


func_3613(var_42_bool, var_43_object)
{
	var_44_int = GlobalVars[3]; // 0xe1e PushGE
	var_45_int = 4; // 0xe1f PushI
	var_46_bool = var_44_int == var_45_int; // 0xe20 Eq
	if(var_46_bool == 0) goto Label_3620; // 0xe21 JumpB
	var_42_bool = 0; // 0xe22 MovB
	return 0; // 0xe23 Return
	
Label_3620:
	var_47_int = GlobalVars[3]; // 0xe24 PushGE
	var_47_int = 4; // 0xe25 MovI
	GlobalVars[3] = var_47_int; // 0xe26 PopGE
	var_48_string = "changing state to c_iStateAware"; // 0xe27 PushS
	Trace(var_48_string); // 0xe28 Func
	var_49_object = GlobalVars[5]; // 0xe2a PushGE
	var_49_object = var_43_object; // 0xe2b Mov
	GlobalVars[5] = var_49_object; // 0xe2c PopGE
	var_42_bool = 1; // 0xe2d MovB
	return 0; // 0xe2e Return
}


func_3112(var_47_string, var_48_int, var_49_int)
{
	var_53_bool = 0; var_54_bool = 0; // 0xc28 PushV
	var_55_bool = 0; var_56_int = 0; var_57_int = 0; // 0xc29 PushV
	var_56_int = var_48_int; // 0xc2a Mov
	var_57_int = var_49_int; // 0xc2b Mov
	func_3203(var_55_bool, var_56_int, var_57_int); // 0xc2c NEW_2
	if(var_55_bool == 0) goto Label_3122; // 0xc2e JumpB
	var_60_int = 0; // 0xc2f PushI
	AddItem(var_54_bool, var_47_string, var_60_int); // 0xc30 ObjFunc
	
Label_3122:
	return 2; // 0xc32 Return
}


func_2600(var_121_object)
{
	EventDisable(0); // 0xa29 EventDisable
	var_122_object = Obj(); // 0xa2a PushV
	var_122_object = var_121_object; // 0xa2b Mov
	func_2625(var_122_object); // 0xa2c NEW_2
	var_202_int = 50; // 0xa2e PushI
	var_203_int = 40; // 0xa2f PushI
	SetRTEnvelope(var_202_int, var_203_int); // 0xa30 Func
	EventEnable(0); // 0xa32 EventEnable
	
Label_2611:
	Hold(); // 0xa33 Func
	goto Label_2611; // 0xa35 Jump
}


func_1069(var_0_cvector, var_442_bool)
{
	var_443_cvector = CVector(0,0,0); var_444_cvector = CVector(0,0,0); var_445_cvector = CVector(0,0,0); var_446_float = 0; var_447_float = 0; var_448_cvector = CVector(0,0,0); var_449_cvector = CVector(0,0,0); var_450_cvector = CVector(0,0,0); var_451_float = 0; var_452_float = 0; // 0x42d PushV
	var_453_bool = 0; // 0x42e PushV
	var_453_bool = 1; // 0x42f MovB
	var_454_bool = 0; var_455_object = Obj(); // 0x430 PushV
	var_455_object = var_0_cvector; // 0x431 MovT
	func_2935(var_454_bool, var_455_object); // 0x432 NEW_2
	var_456_bool = var_454_bool == 0; // 0x434 Not
	if(var_456_bool == 0) goto Label_1081; // 0x435 JumpB
	var_457_int = var_4_int; // 0x436 PushT
	if(var_457_int == 0) goto Label_1081; // 0x437 JumpB
	var_453_bool = 0; // 0x438 MovB
	
Label_1081:
	if(var_453_bool == 0) goto Label_1084; // 0x439 JumpB
	var_442_bool = 0; // 0x43a MovB
	return 10; // 0x43b Return
	
Label_1084:
	var_458_bool = 0; // 0x43c PushV
	func_1164(var_452_float, var_458_bool); // 0x43d NEW_2
	if(var_458_bool == 0) goto Label_1101; // 0x43f JumpB
	GetPFPosition(var_448_cvector); // 0x440 TObjFunc
	GetPFPosition(var_449_cvector); // 0x442 Func
	var_450_cvector = var_448_cvector - var_449_cvector; // 0x444 Sub2
	var_451_float = var_450_cvector | var_450_cvector; // 0x445 Or2
	GetAttackDistance(var_452_float); // 0x446 TObjFunc
	var_459_int = 50; // 0x448 PushI
	var_452_float = var_452_float + var_459_int; // 0x449 Add2
	var_460_float = var_452_float * var_452_float; // 0x44a Mult
	var_442_bool = var_451_float <= var_460_float; // 0x44b LE2
	return 10; // 0x44c Return
	
Label_1101:
	var_442_bool = 0; // 0x44d MovB
	return 10; // 0x44e Return
}


func_3631(var_51_bool, var_52_object)
{
	var_53_int = GlobalVars[3]; // 0xe30 PushGE
	var_54_int = 5; // 0xe31 PushI
	var_55_bool = var_53_int == var_54_int; // 0xe32 Eq
	if(var_55_bool == 0) goto Label_3638; // 0xe33 JumpB
	var_51_bool = 0; // 0xe34 MovB
	return 0; // 0xe35 Return
	
Label_3638:
	var_56_int = GlobalVars[3]; // 0xe36 PushGE
	var_56_int = 5; // 0xe37 MovI
	GlobalVars[3] = var_56_int; // 0xe38 PopGE
	var_57_string = "changing state to c_iStateSearchEnemy"; // 0xe39 PushS
	Trace(var_57_string); // 0xe3a Func
	var_58_object = GlobalVars[6]; // 0xe3c PushGE
	var_58_object = var_52_object; // 0xe3d Mov
	GlobalVars[6] = var_58_object; // 0xe3e PopGE
	var_51_bool = 1; // 0xe3f MovB
	return 0; // 0xe40 Return
}


func_3123(var_396_string)
{
	var_397_bool = 0; var_398_int = 0; var_399_bool = 0; var_400_int = 0; var_401_bool = 0; var_402_float = 0; var_403_cvector = CVector(0,0,0); var_404_cvector = CVector(0,0,0); var_405_bool = 0; var_406_int = 0; var_407_bool = 0; var_408_int = 0; var_409_bool = 0; var_410_float = 0; var_411_cvector = CVector(0,0,0); var_412_cvector = CVector(0,0,0); // 0xc33 PushV
	IsExisting3DSound(var_405_bool, var_396_string); // 0xc34 Func
	var_413_bool = var_405_bool == 0; // 0xc36 Not
	if(var_413_bool == 0) goto Label_3148; // 0xc37 JumpB
	var_406_int = 0; // 0xc38 MovI
	
Label_3129:
	var_414_int = 1; // 0xc39 PushI
	var_415_int = var_406_int + var_414_int; // 0xc3a Add
	var_416_int = var_396_string + var_415_int; // 0xc3b Add
	IsExisting3DSound(var_407_bool, var_416_int); // 0xc3c Func
	var_417_bool = var_407_bool == 0; // 0xc3e Not
	if(var_417_bool == 0) goto Label_3137; // 0xc3f JumpB
	goto Label_3140; // 0xc40 Jump
	
Label_3140:
	var_418_bool = var_406_int == 0; // 0xc44 Not
	if(var_418_bool == 0) goto Label_3143; // 0xc45 JumpB
	return 16; // 0xc46 Return
	
Label_3143:
	irand(var_408_int, var_406_int); // 0xc47 Func
	var_419_int = 1; // 0xc49 PushI
	var_420_int = var_408_int + var_419_int; // 0xc4a Add
	var_396_string = var_396_string + var_420_int; // 0xc4b Add2
	
Label_3148:
	Is3DSoundLoaded(var_409_bool, var_396_string); // 0xc4c Func
	var_421_bool = var_409_bool; // 0xc4e Push
	if(var_421_bool == 0) goto Label_3163; // 0xc4f JumpB
	GetEyesHeight(var_410_float); // 0xc50 Func
	GetDirection(var_411_cvector); // 0xc52 Func
	var_422_int = 50; // 0xc54 PushI
	var_412_cvector = var_411_cvector * var_422_int; // 0xc55 Mult2
	var_423_float = GetByIndex(var_412_cvector, 1); // 0xc56 PushE
	var_423_float = var_423_float + var_410_float; // 0xc57 Add2
	SetByIndex(var_412_cvector, 1) = var_423_float; // 0xc58 PopE
	PlayGlobalSound(var_396_string, var_412_cvector); // 0xc59 Func
	
Label_3163:
	return 16; // 0xc5b Return
	
Label_3137:
	var_424_int = 1; // 0xc41 PushI
	var_406_int = var_406_int + var_424_int; // 0xc42 Add2
	goto Label_3129; // 0xc43 Jump
}


func_2625(var_122_object)
{
	var_123_cvector = CVector(0,0,0); var_124_cvector = CVector(0,0,0); var_125_cvector = CVector(0,0,0); var_126_cvector = CVector(0,0,0); var_127_string = ""; var_128_object = Obj(); var_129_bool = 0; var_130_bool = 0; var_131_float = 0; var_132_cvector = CVector(0,0,0); var_133_cvector = CVector(0,0,0); var_134_cvector = CVector(0,0,0); var_135_cvector = CVector(0,0,0); var_136_cvector = CVector(0,0,0); var_137_string = ""; var_138_object = Obj(); var_139_bool = 0; var_140_bool = 0; var_141_float = 0; var_142_cvector = CVector(0,0,0); // 0xa41 PushV
	var_143_bool = var_122_object == 0; // 0xa42 NullEq
	if(var_143_bool == 0) goto Label_2633; // 0xa43 JumpB
	var_144_string = ""; // 0xa44 PushV
	var_144_string = "fdie"; // 0xa45 MovS
	func_2716(var_144_string); // 0xa46 NEW_2
	goto Label_2715; // 0xa48 Jump
	
Label_2715:
	return 20; // 0xa9b Return
	
Label_2633:
	GetPosition(var_133_cvector); // 0xa49 ObjFunc
	GetPosition(var_134_cvector); // 0xa4b Func
	GetDirection(var_135_cvector); // 0xa4d Func
	var_136_cvector = var_134_cvector - var_133_cvector; // 0xa4f Sub2
	var_176_float = GetByIndex(var_136_cvector, 0); // 0xa50 PushE
	var_177_float = GetByIndex(var_135_cvector, 0); // 0xa51 PushE
	var_178_float = var_176_float * var_177_float; // 0xa52 Mult
	var_179_float = GetByIndex(var_136_cvector, 2); // 0xa53 PushE
	var_180_float = GetByIndex(var_135_cvector, 2); // 0xa54 PushE
	var_181_float = var_179_float * var_180_float; // 0xa55 Mult
	var_182_int = var_178_float + var_181_float; // 0xa56 Add
	var_183_int = 0; // 0xa57 PushI
	var_184_bool = var_182_int >= var_183_int; // 0xa58 GE
	if(var_184_bool == 0) goto Label_2652; // 0xa59 JumpB
	var_137_string = "fdie"; // 0xa5a MovS
	goto Label_2653; // 0xa5b Jump
	
Label_2653:
	RemoveRTEnvelope(); // 0xa5d Func
	SetDeathState(); // 0xa5f Func
	Stop(); // 0xa61 Func
	StopAsync(); // 0xa63 Func
	var_138_object = var_122_object; // 0xa65 Mov
	var_185_string = "GetScriptProperty"; // 0xa66 PushS
	var_186_int = 2; // 0xa67 PushI
	var_187_bool = IsFuncExist(var_122_object, var_185_string, var_186_int); // 0xa68 FuncExist
	if(var_187_bool == 0) goto Label_2677; // 0xa69 JumpB
	var_188_string = "Owner"; // 0xa6a PushS
	HasScriptProperty(var_139_bool, var_188_string); // 0xa6b ObjFunc
	var_189_bool = var_139_bool; // 0xa6d Push
	if(var_189_bool == 0) goto Label_2677; // 0xa6e JumpB
	var_190_string = "Owner"; // 0xa6f PushS
	GetScriptProperty(var_138_object, var_190_string); // 0xa70 ObjFunc
	var_191_bool = var_138_object == 0; // 0xa72 NullEq
	if(var_191_bool == 0) goto Label_2677; // 0xa73 JumpB
	var_138_object = var_122_object; // 0xa74 Mov
	
Label_2677:
	var_192_string = "@GetEyesHeight"; // 0xa75 PushS
	var_193_int = 1; // 0xa76 PushI
	var_194_bool = IsFuncExist(var_138_object, var_192_string, var_193_int); // 0xa77 FuncExist
	if(var_194_bool == 0) goto Label_2692; // 0xa78 JumpB
	GetEyesHeight(var_141_float); // 0xa79 ObjFunc
	var_142_cvector = CVector(0.0, 0.0, 0.0); // 0xa7b MovV
	var_195_float = GetByIndex(var_142_cvector, 1); // 0xa7c PushE
	var_195_float = var_141_float; // 0xa7d Mov
	SetByIndex(var_142_cvector, 1) = var_195_float; // 0xa7e PopE
	var_196_string = "head"; // 0xa7f PushS
	LookAsync(var_122_object, var_196_string, var_142_cvector); // 0xa80 Func
	var_140_bool = 1; // 0xa82 MovB
	goto Label_2693; // 0xa83 Jump
	
Label_2693:
	var_197_string = ""; // 0xa85 PushV
	var_197_string = var_137_string; // 0xa86 Mov
	func_3123(var_197_string); // 0xa87 NEW_2
	var_198_string = "all"; // 0xa89 PushS
	PlayAnimation(var_198_string, var_137_string); // 0xa8a Func
	WaitForAnimEnd(); // 0xa8c Func
	var_199_bool = var_140_bool; // 0xa8e Push
	if(var_199_bool == 0) goto Label_2709; // 0xa8f JumpB
	StopAsync(); // 0xa90 Func
	var_200_string = "head"; // 0xa92 PushS
	UnlookAsync(var_200_string); // 0xa93 Func
	
Label_2709:
	var_201_string = "all"; // 0xa95 PushS
	LockAnimationEnd(var_201_string, var_137_string); // 0xa96 Func
	RemoveEnvelope(); // 0xa98 Func
	var_138_object = 0; // 0xa9a SetNull
	
Label_2692:
	var_140_bool = 0; // 0xa84 MovB
	
Label_2652:
	var_137_string = "bdie"; // 0xa5c MovS
}


func_3649(var_27_bool, var_28_object)
{
	var_29_int = GlobalVars[3]; // 0xe42 PushGE
	var_30_int = 6; // 0xe43 PushI
	var_31_bool = var_29_int == var_30_int; // 0xe44 Eq
	if(var_31_bool == 0) goto Label_3656; // 0xe45 JumpB
	var_27_bool = 0; // 0xe46 MovB
	return 0; // 0xe47 Return
	
Label_3656:
	var_32_int = GlobalVars[3]; // 0xe48 PushGE
	var_32_int = 6; // 0xe49 MovI
	GlobalVars[3] = var_32_int; // 0xe4a PopGE
	var_33_string = "changing state to c_iStateHearEnemy"; // 0xe4b PushS
	Trace(var_33_string); // 0xe4c Func
	var_34_object = GlobalVars[7]; // 0xe4e PushGE
	var_34_object = var_28_object; // 0xe4f Mov
	GlobalVars[7] = var_34_object; // 0xe50 PopGE
	var_27_bool = 1; // 0xe51 MovB
	return 0; // 0xe52 Return
}


func_2125(var_0_cvector)
{
	var_0_cvector = 1; // 0x84d TMovB
	var_21_int = 0; // 0x84e PushI
	KillTimer(var_21_int); // 0x84f Func
	Stop(); // 0x851 Func
	return 0; // 0x853 Return
}


func_1103(var_440_bool)
{
	var_441_bool = 0; // 0x44f PushV
	var_441_bool = 0; // 0x450 MovB
	var_442_bool = 0; // 0x451 PushV
	func_1069(var_441_bool, var_442_bool); // 0x452 NEW_2
	if(var_442_bool == 0) goto Label_1114; // 0x454 JumpB
	var_461_bool = 0; // 0x455 PushV
	func_1119(var_440_bool, var_441_bool, var_461_bool); // 0x456 NEW_2
	if(var_461_bool == 0) goto Label_1114; // 0x458 JumpB
	var_441_bool = 1; // 0x459 MovB
	
Label_1114:
	if(var_441_bool == 0) goto Label_1117; // 0x45a JumpB
	var_440_bool = 1; // 0x45b MovB
	return 0; // 0x45c Return
	
Label_1117:
	var_440_bool = 0; // 0x45d MovB
	return 0; // 0x45e Return
}


func_3667(var_21_bool, var_22_object)
{
	var_23_int = GlobalVars[3]; // 0xe54 PushGE
	var_24_int = 7; // 0xe55 PushI
	var_25_bool = var_23_int == var_24_int; // 0xe56 Eq
	if(var_25_bool == 0) goto Label_3674; // 0xe57 JumpB
	var_21_bool = 0; // 0xe58 MovB
	return 0; // 0xe59 Return
	
Label_3674:
	var_26_int = GlobalVars[3]; // 0xe5a PushGE
	var_26_int = 7; // 0xe5b MovI
	GlobalVars[3] = var_26_int; // 0xe5c PopGE
	var_27_string = "changing state to c_iStateAttack"; // 0xe5d PushS
	Trace(var_27_string); // 0xe5e Func
	var_28_object = GlobalVars[8]; // 0xe60 PushGE
	var_28_object = var_22_object; // 0xe61 Mov
	GlobalVars[8] = var_28_object; // 0xe62 PopGE
	var_21_bool = 1; // 0xe63 MovB
	return 0; // 0xe64 Return
}


func_3164(var_102_object)
{
	var_103_object = Obj(); var_104_object = Obj(); // 0xc5c PushV
	self(var_104_object); // 0xc5d Func
	var_102_object = var_104_object; // 0xc5f Mov
	return 2; // 0xc60 Return
}


func_2141(var_974_string)
{
	var_974_string = "walk"; // 0x85d MovS
	return 0; // 0x85e Return
}


func_1119(var_0_cvector, var_5_bool, var_461_bool)
{
	var_462_object = Obj(); var_463_bool = 0; var_464_float = 0; var_465_cvector = CVector(0,0,0); var_466_cvector = CVector(0,0,0); var_467_object = Obj(); var_468_bool = 0; var_469_float = 0; var_470_cvector = CVector(0,0,0); var_471_cvector = CVector(0,0,0); // 0x45f PushV
	GetScene(var_467_object); // 0x460 Func
	var_468_bool = 0; // 0x462 MovB
	
Label_1123:
	var_472_cvector = CVector(0,0,0); var_473_object = Obj(); // 0x463 PushV
	var_473_object = var_0_cvector; // 0x464 MovT
	func_2797(var_473_object); // 0x465 NEW_2
	var_478_int = -var_472_cvector; // 0x467 Neg
	FindDirLength(var_469_float, var_478_int, var_468_bool); // 0x468 Func
	var_479_bool = var_469_float < var_5_bool; // 0x46a LT
	if(var_479_bool == 0) goto Label_1133; // 0x46b JumpB
	goto Label_1161; // 0x46c Jump
	
Label_1161:
	var_461_bool = var_468_bool; // 0x489 Mov
	return 10; // 0x48a Return
	
Label_1133:
	Face(var_0_cvector); // 0x46d Func
	var_480_string = "all"; // 0x46f PushS
	var_481_string = "bjump"; // 0x470 PushS
	PlayAnimation(var_480_string, var_481_string); // 0x471 Func
	GetPFPosition(var_470_cvector); // 0x473 TObjFunc
	GetPFPosition(var_471_cvector); // 0x475 Func
	WaitForAnimEnd(); // 0x477 Func
	func_1207(var_471_cvector); // 0x47a NEW_2
	StopAsync(); // 0x47c Func
	var_482_cvector = CVector(0.0, 0.0, 0.0); // 0x47e PushVec
	SetSpeed(var_482_cvector); // 0x47f Func
	var_468_bool = 1; // 0x481 MovB
	var_483_bool = 0; // 0x482 PushV
	func_1069(var_471_cvector, var_483_bool); // 0x483 NEW_2
	var_484_bool = var_483_bool == 0; // 0x485 Not
	if(var_484_bool == 0) goto Label_1160; // 0x486 JumpB
	goto Label_1161; // 0x487 Jump
	
Label_1160:
	goto Label_1123; // 0x488 Jump
}


func_2143(var_975_string)
{
	var_975_string = "run"; // 0x85f MovS
	return 0; // 0x860 Return
}


func_2145(var_795_bool)
{
	var_797_bool = 0; var_798_object = Obj(); var_799_cvector = CVector(0,0,0); var_800_cvector = CVector(0,0,0); var_801_bool = 0; var_802_object = Obj(); var_803_cvector = CVector(0,0,0); var_804_cvector = CVector(0,0,0); // 0x861 PushV
	GetMainOutdoorScene(var_802_object); // 0x862 Func
	var_805_string = "pt_b9q03_bonfire"; // 0x864 PushS
	var_806_int = GlobalVars[1]; // 0x865 PushGE
	var_807_int = 1; // 0x866 PushI
	var_808_int = var_806_int + var_807_int; // 0x867 Add
	var_809_int = var_805_string + var_808_int; // 0x868 Add
	GetLocator(var_809_int, var_801_bool, var_803_cvector, var_804_cvector); // 0x869 ObjFunc
	var_810_bool = var_801_bool == 0; // 0x86b Not
	if(var_810_bool == 0) goto Label_2159; // 0x86c JumpB
	var_795_bool = 0; // 0x86d MovB
	return 8; // 0x86e Return
	
Label_2159:
	var_811_bool = 0; var_812_cvector = CVector(0,0,0); var_813_cvector = CVector(0,0,0); var_814_bool = 0; // 0x86f PushV
	var_812_cvector = var_803_cvector; // 0x870 Mov
	var_813_cvector = var_804_cvector; // 0x871 Mov
	var_814_bool = 0; // 0x872 MovB
	func_2211(var_811_bool, var_812_cvector, var_813_cvector, var_814_bool); // 0x873 NEW_2
	var_795_bool = var_811_bool; // 0x874 Mov
	return 8; // 0x876 Return
}


func_3170(var_52_cvector, var_53_cvector)
{
	var_60_float = 0; var_61_float = 0; // 0xc62 PushV
	var_62_int = var_53_cvector | var_53_cvector; // 0xc63 Or
	var_61_float = sqrt(var_62_int); // 0xc64 Sqrt2
	var_63_float = 0.0; // 0xc65 PushF
	var_64_bool = var_61_float < var_63_float; // 0xc66 LT
	if(var_64_bool == 0) goto Label_3178; // 0xc67 JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0xc68 MovV
	return 2; // 0xc69 Return
	
Label_3178:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0xc6a Div2
	return 2; // 0xc6b Return
}


func_3685(var_1030_bool)
{
	var_1031_int = 0; var_1032_int = 0; // 0xe65 PushV
	var_1033_string = "b9q03HandHeatLock"; // 0xe66 PushS
	var_1034_int = GlobalVars[1]; // 0xe67 PushGE
	var_1035_int = 1; // 0xe68 PushI
	var_1036_int = var_1034_int + var_1035_int; // 0xe69 Add
	var_1037_int = var_1033_string + var_1036_int; // 0xe6a Add
	GetVariable(var_1037_int, var_1032_int); // 0xe6b Func
	var_1038_int = 0; // 0xe6d PushI
	var_1030_bool = var_1032_int != var_1038_int; // 0xe6e Neq2
	return 2; // 0xe6f Return
}


func_1640(var_0_cvector, var_1_cvector, var_715_bool, var_716_object, var_717_float, var_718_float, var_719_bool, var_720_bool)
{
	var_721_bool = 0; var_722_bool = 0; var_723_object = Obj(); var_724_cvector = CVector(0,0,0); var_725_cvector = CVector(0,0,0); var_726_cvector = CVector(0,0,0); var_727_float = 0; var_728_object = Obj(); var_729_bool = 0; var_730_bool = 0; var_731_object = Obj(); var_732_cvector = CVector(0,0,0); var_733_cvector = CVector(0,0,0); var_734_cvector = CVector(0,0,0); var_735_float = 0; var_736_object = Obj(); // 0x668 PushV
	var_0_cvector = 0; // 0x669 TMovB
	var_1_cvector = var_716_object; // 0x66a TMov
	var_730_bool = var_720_bool; // 0x66b Mov
	
Label_1644:
	var_737_bool = 0; var_738_object = Obj(); // 0x66c PushV
	var_738_object = var_716_object; // 0x66d Mov
	func_1780(var_737_bool, var_738_object); // 0x66e NEW_2
	var_741_bool = var_737_bool == 0; // 0x670 Not
	if(var_741_bool == 0) goto Label_1652; // 0x671 JumpB
	var_715_bool = 0; // 0x672 MovB
	return 16; // 0x673 Return
	
Label_1652:
	GetPosition(var_732_cvector); // 0x674 ObjFunc
	GetPosition(var_733_cvector); // 0x676 Func
	var_734_cvector = var_732_cvector - var_733_cvector; // 0x678 Sub2
	var_735_float = var_734_cvector | var_734_cvector; // 0x679 Or2
	var_742_bool = 0; // 0x67a PushV
	var_742_bool = 0; // 0x67b MovB
	var_743_int = 0; // 0x67c PushI
	var_744_bool = var_718_float > var_743_int; // 0x67d GT
	if(var_744_bool == 0) goto Label_1667; // 0x67e JumpB
	var_745_float = var_718_float * var_718_float; // 0x67f Mult
	var_746_bool = var_735_float > var_745_float; // 0x680 GT
	if(var_746_bool == 0) goto Label_1667; // 0x681 JumpB
	var_742_bool = 1; // 0x682 MovB
	
Label_1667:
	if(var_742_bool == 0) goto Label_1672; // 0x683 JumpB
	Stop(); // 0x684 Func
	var_715_bool = 0; // 0x686 MovB
	return 16; // 0x687 Return
	
Label_1672:
	var_747_float = var_717_float * var_717_float; // 0x688 Mult
	var_748_bool = var_735_float > var_747_float; // 0x689 GT
	if(var_748_bool == 0) goto Label_1734; // 0x68a JumpB
	GetPFPosition(var_732_cvector); // 0x68b ObjFunc
	FindPathTo(var_736_object, var_732_cvector); // 0x68d Func
	var_749_bool = var_736_object != 0; // 0x68f NullNeq
	if(var_749_bool == 0) goto Label_1683; // 0x690 JumpB
	var_731_object = var_736_object; // 0x691 Mov
	var_736_object = 0; // 0x692 SetNull
	
Label_1683:
	var_750_bool = var_731_object != 0; // 0x693 NullNeq
	if(var_750_bool == 0) goto Label_1716; // 0x694 JumpB
	var_751_bool = var_730_bool; // 0x695 Push
	if(var_751_bool == 0) goto Label_1693; // 0x696 JumpB
	var_730_bool = 0; // 0x697 MovB
	RotatePath(var_731_object, var_729_bool); // 0x698 Func
	var_752_bool = var_729_bool == 0; // 0x69a Not
	if(var_752_bool == 0) goto Label_1693; // 0x69b JumpB
	goto Label_1740; // 0x69c Jump
	
Label_1740:
	var_715_bool = !var_0_cvector; // 0x6cc Not2
	return 16; // 0x6cd Return
	
Label_1693:
	var_753_int = 0; // 0x69d PushI
	var_754_float = 0.3; // 0x69e PushF
	SetTimer(var_753_int, var_754_float); // 0x69f Func
	var_755_string = ""; // 0x6a1 PushV
	func_1787(var_755_string); // 0x6a2 NEW_2
	var_756_string = ""; // 0x6a4 PushV
	func_1789(var_756_string); // 0x6a5 NEW_2
	FollowPath(var_731_object, var_719_bool, var_729_bool, var_755_string, var_756_string); // 0x6a7 Func
	var_757_bool = var_729_bool == 0; // 0x6a9 Not
	if(var_757_bool == 0) goto Label_1714; // 0x6aa JumpB
	var_758_cvector = var_0_cvector; // 0x6ab PushT
	if(var_758_cvector == 0) goto Label_1712; // 0x6ac JumpB
	var_731_object = 0; // 0x6ad SetNull
	goto Label_1740; // 0x6ae Jump
	
Label_1712:
	goto Label_1739; // 0x6b0 Jump
	
Label_1739:
	goto Label_1644; // 0x6cb Jump
	
Label_1714:
	var_731_object = 0; // 0x6b2 SetNull
	goto Label_1732; // 0x6b3 Jump
	
Label_1732:
	var_736_object = 0; // 0x6c4 SetNull
	goto Label_1738; // 0x6c5 Jump
	
Label_1738:
	var_731_object = 0; // 0x6ca SetNull
	
Label_1716:
	var_759_int = 0; // 0x6b4 PushI
	KillTimer(var_759_int); // 0x6b5 Func
	var_760_float = 0.5; // 0x6b7 PushF
	Sleep(var_760_float, var_729_bool); // 0x6b8 Func
	var_761_bool = var_729_bool == 0; // 0x6ba Not
	if(var_761_bool == 0) goto Label_1728; // 0x6bb JumpB
	var_762_cvector = var_0_cvector; // 0x6bc PushT
	if(var_762_cvector == 0) goto Label_1728; // 0x6bd JumpB
	var_731_object = 0; // 0x6be SetNull
	goto Label_1740; // 0x6bf Jump
	
Label_1728:
	var_763_int = 0; // 0x6c0 PushI
	var_764_float = 0.3; // 0x6c1 PushF
	SetTimer(var_763_int, var_764_float); // 0x6c2 Func
	
Label_1734:
	var_765_int = 0; // 0x6c6 PushI
	KillTimer(var_765_int); // 0x6c7 Func
	goto Label_1740; // 0x6c9 Jump
}


func_3180(var_579_float, var_580_float, var_581_float)
{
	var_584_bool = var_580_float < var_581_float; // 0xc6d LT
	if(var_584_bool == 0) goto Label_3185; // 0xc6e JumpB
	var_579_float = var_580_float; // 0xc6f Mov
	goto Label_3186; // 0xc70 Jump
	
Label_3186:
	return 0; // 0xc72 Return
	
Label_3185:
	var_579_float = var_581_float; // 0xc71 Mov
}


func_3696(var_786_bool)
{
	var_787_string = "b9q03HandHeatLock"; // 0xe71 PushS
	var_788_int = GlobalVars[1]; // 0xe72 PushGE
	var_789_int = 1; // 0xe73 PushI
	var_790_int = var_788_int + var_789_int; // 0xe74 Add
	var_791_int = var_787_string + var_790_int; // 0xe75 Add
	var_792_bool = var_786_bool; // 0xe76 Push
	if(var_792_bool == 0) goto Label_3706; // 0xe77 JumpB
	var_793_int = 1; // 0xe78 PushI
	goto Label_3707; // 0xe79 Jump
	
Label_3707:
	SetVariable(var_791_int, var_793_int); // 0xe7b Func
	return 0; // 0xe7d Return
	
Label_3706:
	var_794_int = 0; // 0xe7a PushI
}


func_3187(var_589_float, var_590_float, var_591_float, var_592_float)
{
	var_593_bool = var_590_float < var_591_float; // 0xc74 LT
	if(var_593_bool == 0) goto Label_3192; // 0xc75 JumpB
	var_589_float = var_591_float; // 0xc76 Mov
	return 0; // 0xc77 Return
	
Label_3192:
	var_594_bool = var_590_float > var_592_float; // 0xc78 GT
	if(var_594_bool == 0) goto Label_3196; // 0xc79 JumpB
	var_589_float = var_592_float; // 0xc7a Mov
	return 0; // 0xc7b Return
	
Label_3196:
	var_589_float = var_590_float; // 0xc7c Mov
	return 0; // 0xc7d Return
}


func_3710(var_1014_bool)
{
	var_1015_int = 0; var_1016_int = 0; // 0xe7e PushV
	var_1017_string = "b9q03PatrolLock"; // 0xe7f PushS
	var_1018_int = GlobalVars[1]; // 0xe80 PushGE
	var_1019_int = 1; // 0xe81 PushI
	var_1020_int = var_1018_int + var_1019_int; // 0xe82 Add
	var_1021_int = var_1017_string + var_1020_int; // 0xe83 Add
	GetVariable(var_1021_int, var_1016_int); // 0xe84 Func
	var_1022_int = 0; // 0xe86 PushI
	var_1014_bool = var_1016_int != var_1022_int; // 0xe87 Neq2
	return 2; // 0xe88 Return
}


func_3198(var_1026_bool, var_1027_float)
{
	var_1028_float = 0; var_1029_float = 0; // 0xc7e PushV
	rand(var_1029_float); // 0xc7f Func
	var_1026_bool = var_1029_float < var_1027_float; // 0xc81 LT2
	return 2; // 0xc82 Return
}


func_3203(var_55_bool, var_56_int, var_57_int)
{
	var_58_int = 0; var_59_int = 0; // 0xc83 PushV
	irand(var_59_int, var_57_int); // 0xc84 Func
	var_55_bool = var_59_int < var_56_int; // 0xc86 LT2
	return 2; // 0xc87 Return
}


func_3208(var_597_float)
{
	var_598_object = Obj(); var_599_object = Obj(); // 0xc88 PushV
	CreateFloatVector(var_599_object); // 0xc89 Func
	add(var_597_float); // 0xc8b ObjFunc
	var_600_int = 15; // 0xc8d PushI
	SendWorldWndMessage(var_600_int, var_599_object); // 0xc8e Func
	return 2; // 0xc90 Return
}


func_3721(var_1045_bool)
{
	var_1046_string = "b9q03PatrolLock"; // 0xe8a PushS
	var_1047_int = GlobalVars[1]; // 0xe8b PushGE
	var_1048_int = 1; // 0xe8c PushI
	var_1049_int = var_1047_int + var_1048_int; // 0xe8d Add
	var_1050_int = var_1046_string + var_1049_int; // 0xe8e Add
	var_1051_bool = var_1045_bool; // 0xe8f Push
	if(var_1051_bool == 0) goto Label_3731; // 0xe90 JumpB
	var_1052_int = 1; // 0xe91 PushI
	goto Label_3732; // 0xe92 Jump
	
Label_3732:
	SetVariable(var_1050_int, var_1052_int); // 0xe94 Func
	return 0; // 0xe96 Return
	
Label_3731:
	var_1053_int = 0; // 0xe93 PushI
}


func_1164(var_0_cvector, var_390_bool)
{
	var_391_bool = 0; var_392_bool = 0; // 0x48c PushV
	var_393_string = "IsAttacking"; // 0x48d PushS
	var_394_int = 1; // 0x48e PushI
	var_395_bool = IsFuncExist(var_0_cvector, var_393_string, var_394_int); // 0x48f FuncExist
	if(var_395_bool == 0) goto Label_1173; // 0x490 JumpB
	IsAttacking(var_392_bool); // 0x491 TObjFunc
	var_390_bool = var_392_bool; // 0x493 Mov
	return 2; // 0x494 Return
	
Label_1173:
	var_390_bool = 0; // 0x495 MovB
	return 2; // 0x496 Return
}


func_3218(var_246_object)
{
	var_247_bool = 0; var_248_bool = 0; // 0xc92 PushV
	IsPlayerActor(var_246_object, var_248_bool); // 0xc93 Func
	var_249_bool = var_248_bool; // 0xc95 Push
	if(var_249_bool == 0) goto Label_3226; // 0xc96 JumpB
	var_250_string = "attack"; // 0xc97 PushS
	PlayGlobalMusic(var_250_string); // 0xc98 Func
	
Label_3226:
	return 2; // 0xc9a Return
}


func_1175(var_2_object, var_6_bool)
{
	var_507_float = 0; var_508_int = 0; var_509_float = 0; var_510_int = 0; // 0x497 PushV
	var_511_bool = var_2_object == 0; // 0x498 Not
	if(var_511_bool == 0) goto Label_1179; // 0x499 JumpB
	return 4; // 0x49a Return
	
Label_1179:
	var_512_bool = var_6_bool; // 0x49b PushT
	if(var_512_bool == 0) goto Label_1187; // 0x49c JumpB
	var_513_int = -1; // 0x49d PushI
	var_6_bool = var_6_bool + var_513_int; // 0x49e Add2
	var_514_int = 0; // 0x49f PushI
	var_515_bool = var_6_bool > var_514_int; // 0x4a0 GT
	if(var_515_bool == 0) goto Label_1187; // 0x4a1 JumpB
	return 4; // 0x4a2 Return
	
Label_1187:
	rand(var_509_float); // 0x4a3 Func
	var_516_float = 0; // 0x4a5 PushV
	func_1223(var_516_float); // 0x4a6 NEW_2
	var_517_bool = var_509_float < var_516_float; // 0x4a8 LT
	if(var_517_bool == 0) goto Label_1206; // 0x4a9 JumpB
	irand(var_510_int, var_509_float); // 0x4aa Func
	var_518_int = 1; // 0x4ac PushI
	var_510_int = var_510_int + var_518_int; // 0x4ad Add2
	var_519_string = "attack"; // 0x4ae PushS
	var_520_int = var_519_string + var_510_int; // 0x4af Add
	Speak(var_520_int); // 0x4b0 Func
	var_521_int = 0; // 0x4b2 PushV
	func_1221(var_521_int); // 0x4b3 NEW_2
	var_6_bool = var_521_int; // 0x4b4 TMov
	
Label_1206:
	return 4; // 0x4b6 Return
}


func_3227(var_894_string, var_895_int)
{
	var_896_string = ""; var_897_string = ""; // 0xc9b PushV
	var_897_string = "idle"; // 0xc9c MovS
	var_898_int = var_895_int; // 0xc9d Push
	if(var_898_int == 0) goto Label_3232; // 0xc9e JumpB
	var_897_string = var_897_string + var_895_int; // 0xc9f Add2
	
Label_3232:
	var_894_string = var_897_string; // 0xca0 Mov
	return 2; // 0xca1 Return
}


func_2716(var_144_string)
{
	RemoveRTEnvelope(); // 0xa9d Func
	SetDeathState(); // 0xa9f Func
	Stop(); // 0xaa1 Func
	StopAsync(); // 0xaa3 Func
	StopSecondaryAnimation(); // 0xaa5 Func
	var_145_string = ""; // 0xaa7 PushV
	var_145_string = var_144_string; // 0xaa8 Mov
	func_3123(var_145_string); // 0xaa9 NEW_2
	var_174_string = "all"; // 0xaab PushS
	PlayAnimation(var_174_string, var_144_string); // 0xaac Func
	WaitForAnimEnd(); // 0xaae Func
	var_175_string = "all"; // 0xab0 PushS
	LockAnimationEnd(var_175_string, var_144_string); // 0xab1 Func
	RemoveEnvelope(); // 0xab3 Func
	return 0; // 0xab5 Return
}


func_3234(var_888_int)
{
	var_889_int = 0; var_890_bool = 0; var_891_int = 0; var_892_bool = 0; // 0xca2 PushV
	var_891_int = 0; // 0xca3 MovI
	
Label_3236:
	var_893_string = "all"; // 0xca4 PushS
	var_894_string = ""; var_895_int = 0; // 0xca5 PushV
	var_895_int = var_891_int; // 0xca6 Mov
	func_3227(var_894_string, var_895_int); // 0xca7 NEW_2
	HasAnimation(var_892_bool, var_893_string, var_894_string); // 0xca9 Func
	var_899_bool = var_892_bool == 0; // 0xcab Not
	if(var_899_bool == 0) goto Label_3246; // 0xcac JumpB
	goto Label_3249; // 0xcad Jump
	
Label_3249:
	var_888_int = var_891_int; // 0xcb1 Mov
	return 4; // 0xcb2 Return
	
Label_3246:
	var_900_int = 1; // 0xcae PushI
	var_891_int = var_891_int + var_900_int; // 0xcaf Add2
	goto Label_3236; // 0xcb0 Jump
}


func_2211(var_811_bool, var_812_cvector, var_813_cvector, var_814_bool)
{
	var_815_float = GetByIndex(var_812_cvector, 1); // 0x8a4 PushE
	var_816_int = 30; // 0x8a5 PushI
	var_815_float = var_815_float + var_816_int; // 0x8a6 Add2
	SetByIndex(var_812_cvector, 1) = var_815_float; // 0x8a7 PopE
	var_817_bool = 0; var_818_cvector = CVector(0,0,0); var_819_cvector = CVector(0,0,0); var_820_float = 0; var_821_float = 0; var_822_bool = 0; var_823_bool = 0; // 0x8a8 PushV
	var_818_cvector = var_812_cvector; // 0x8a9 Mov
	var_819_cvector = var_813_cvector; // 0x8aa Mov
	var_820_float = 100; // 0x8ab MovI
	var_821_float = 4000; // 0x8ac MovI
	var_822_bool = var_814_bool; // 0x8ad Mov
	var_823_bool = 1; // 0x8ae MovB
	func_2237(var_814_bool, var_817_bool, var_818_cvector, var_819_cvector, var_820_float, var_821_float, var_822_bool, var_823_bool); // 0x8af NEW_2
	var_811_bool = var_817_bool; // 0x8b0 Mov
	return 0; // 0x8b2 Return
}


func_3251(var_101_int)
{
	var_102_int = 0; var_103_int = 0; // 0xcb3 PushV
	var_104_string = "branch"; // 0xcb4 PushS
	GetVariable(var_104_string, var_103_int); // 0xcb5 Func
	var_101_int = var_103_int; // 0xcb7 Mov
	return 2; // 0xcb8 Return
}


func_1207(var_0_cvector)
{
	var_246_object = Obj(); // 0x4b7 PushV
	var_246_object = var_0_cvector; // 0x4b8 MovT
	func_3218(var_246_object); // 0x4b9 NEW_2
	return 0; // 0x4bb Return
}


func_3257(var_24_object)
{
	var_25_int = 0; // 0xcba PushV
	func_3251(var_25_int); // 0xcbb NEW_2
	var_29_int = 1; // 0xcbd PushI
	var_30_bool = var_25_int == var_29_int; // 0xcbe Eq
	if(var_30_bool == 0) goto Label_3267; // 0xcbf JumpB
	WorkWithCorpse(var_24_object); // 0xcc0 Func
	goto Label_3269; // 0xcc2 Jump
	
Label_3269:
	return 0; // 0xcc5 Return
	
Label_3267:
	Barter(var_24_object); // 0xcc3 Func
}


func_2235(var_840_bool)
{
	var_840_bool = 1; // 0x8bb MovB
	return 0; // 0x8bc Return
}


func_2748()
{
	var_111_bool = GlobalVars[0]; // 0xabc PushGE
	if(var_111_bool == 0) goto Label_2757; // 0xabd JumpB
	var_112_object = Obj(); // 0xabe PushV
	func_3164(var_112_object); // 0xabf NEW_2
	RemoveActor(var_112_object); // 0xac1 Func
	Hold(); // 0xac3 Func
	
Label_2757:
	var_113_bool = 0; // 0xac5 PushV
	func_3096(var_113_bool); // 0xac6 NEW_2
	var_116_bool = var_113_bool == 0; // 0xac8 Not
	if(var_116_bool == 0) goto Label_2765; // 0xac9 JumpB
	Hold(); // 0xaca Func
	goto Label_2757; // 0xacc Jump
	
Label_2765:
	return 0; // 0xacd Return
}


func_1212()
{
	var_396_string = ""; // 0x4bc PushV
	var_396_string = "attack_stay"; // 0x4bd MovS
	func_3123(var_396_string); // 0x4be NEW_2
	return 0; // 0x4c0 Return
}


func_3774(var_603_int)
{
	var_603_int = 0; // 0xebe MovI
	return 0; // 0xebf Return
}


func_2237(var_0_cvector, var_817_bool, var_818_cvector, var_819_cvector, var_820_float, var_821_float, var_822_bool, var_823_bool)
{
	var_824_bool = 0; var_825_bool = 0; var_826_object = Obj(); var_827_cvector = CVector(0,0,0); var_828_cvector = CVector(0,0,0); var_829_cvector = CVector(0,0,0); var_830_float = 0; var_831_object = Obj(); var_832_bool = 0; var_833_bool = 0; var_834_object = Obj(); var_835_cvector = CVector(0,0,0); var_836_cvector = CVector(0,0,0); var_837_cvector = CVector(0,0,0); var_838_float = 0; var_839_object = Obj(); // 0x8bd PushV
	var_0_cvector = 0; // 0x8be TMovB
	var_833_bool = var_823_bool; // 0x8bf Mov
	
Label_2240:
	var_840_bool = 0; // 0x8c0 PushV
	func_2235(var_840_bool); // 0x8c1 NEW_2
	var_841_bool = var_840_bool == 0; // 0x8c3 Not
	if(var_841_bool == 0) goto Label_2247; // 0x8c4 JumpB
	var_817_bool = 0; // 0x8c5 MovB
	return 16; // 0x8c6 Return
	
Label_2247:
	var_835_cvector = var_818_cvector; // 0x8c7 Mov
	GetPosition(var_836_cvector); // 0x8c8 Func
	var_837_cvector = var_835_cvector - var_836_cvector; // 0x8ca Sub2
	var_838_float = var_837_cvector | var_837_cvector; // 0x8cb Or2
	var_842_bool = 0; // 0x8cc PushV
	var_842_bool = 0; // 0x8cd MovB
	var_843_int = 0; // 0x8ce PushI
	var_844_bool = var_821_float > var_843_int; // 0x8cf GT
	if(var_844_bool == 0) goto Label_2261; // 0x8d0 JumpB
	var_845_float = var_821_float * var_821_float; // 0x8d1 Mult
	var_846_bool = var_838_float > var_845_float; // 0x8d2 GT
	if(var_846_bool == 0) goto Label_2261; // 0x8d3 JumpB
	var_842_bool = 1; // 0x8d4 MovB
	
Label_2261:
	if(var_842_bool == 0) goto Label_2266; // 0x8d5 JumpB
	Stop(); // 0x8d6 Func
	var_817_bool = 0; // 0x8d8 MovB
	return 16; // 0x8d9 Return
	
Label_2266:
	var_847_float = var_820_float * var_820_float; // 0x8da Mult
	var_848_bool = var_838_float > var_847_float; // 0x8db GT
	if(var_848_bool == 0) goto Label_2326; // 0x8dc JumpB
	FindPathTo(var_839_object, var_835_cvector); // 0x8dd Func
	var_849_bool = var_839_object != 0; // 0x8df NullNeq
	if(var_849_bool == 0) goto Label_2275; // 0x8e0 JumpB
	var_834_object = var_839_object; // 0x8e1 Mov
	var_839_object = 0; // 0x8e2 SetNull
	
Label_2275:
	var_850_bool = var_834_object != 0; // 0x8e3 NullNeq
	if(var_850_bool == 0) goto Label_2308; // 0x8e4 JumpB
	var_851_bool = var_833_bool; // 0x8e5 Push
	if(var_851_bool == 0) goto Label_2285; // 0x8e6 JumpB
	var_833_bool = 0; // 0x8e7 MovB
	RotatePath(var_834_object, var_832_bool); // 0x8e8 Func
	var_852_bool = var_832_bool == 0; // 0x8ea Not
	if(var_852_bool == 0) goto Label_2285; // 0x8eb JumpB
	goto Label_2332; // 0x8ec Jump
	
Label_2332:
	var_853_bool = var_0_cvector == 0; // 0x91c Not
	if(var_853_bool == 0) goto Label_2338; // 0x91d JumpB
	var_854_float = GetByIndex(var_819_cvector, 0); // 0x91e PushE
	var_855_float = GetByIndex(var_819_cvector, 2); // 0x91f PushE
	RotateAsync(var_854_float, var_855_float); // 0x920 Func
	
Label_2338:
	var_817_bool = !var_0_cvector; // 0x922 Not2
	return 16; // 0x923 Return
	
Label_2285:
	var_856_int = 0; // 0x8ed PushI
	var_857_float = 0.3; // 0x8ee PushF
	SetTimer(var_856_int, var_857_float); // 0x8ef Func
	var_858_string = ""; // 0x8f1 PushV
	func_2377(var_858_string); // 0x8f2 NEW_2
	var_859_string = ""; // 0x8f4 PushV
	func_2379(var_859_string); // 0x8f5 NEW_2
	FollowPath(var_834_object, var_822_bool, var_832_bool, var_858_string, var_859_string); // 0x8f7 Func
	var_860_bool = var_832_bool == 0; // 0x8f9 Not
	if(var_860_bool == 0) goto Label_2306; // 0x8fa JumpB
	var_861_cvector = var_0_cvector; // 0x8fb PushT
	if(var_861_cvector == 0) goto Label_2304; // 0x8fc JumpB
	var_834_object = 0; // 0x8fd SetNull
	goto Label_2332; // 0x8fe Jump
	
Label_2304:
	goto Label_2331; // 0x900 Jump
	
Label_2331:
	goto Label_2240; // 0x91b Jump
	
Label_2306:
	var_834_object = 0; // 0x902 SetNull
	goto Label_2324; // 0x903 Jump
	
Label_2324:
	var_839_object = 0; // 0x914 SetNull
	goto Label_2330; // 0x915 Jump
	
Label_2330:
	var_834_object = 0; // 0x91a SetNull
	
Label_2308:
	var_862_int = 0; // 0x904 PushI
	KillTimer(var_862_int); // 0x905 Func
	var_863_float = 0.5; // 0x907 PushF
	Sleep(var_863_float, var_832_bool); // 0x908 Func
	var_864_bool = var_832_bool == 0; // 0x90a Not
	if(var_864_bool == 0) goto Label_2320; // 0x90b JumpB
	var_865_cvector = var_0_cvector; // 0x90c PushT
	if(var_865_cvector == 0) goto Label_2320; // 0x90d JumpB
	var_834_object = 0; // 0x90e SetNull
	goto Label_2332; // 0x90f Jump
	
Label_2320:
	var_866_int = 0; // 0x910 PushI
	var_867_float = 0.3; // 0x911 PushF
	SetTimer(var_866_int, var_867_float); // 0x912 Func
	
Label_2326:
	var_868_int = 0; // 0x916 PushI
	KillTimer(var_868_int); // 0x917 Func
	goto Label_2332; // 0x919 Jump
}


func_1217()
{
	return 0; // 0x4c2 Return
}


func_1219(var_630_bool)
{
	var_630_bool = 1; // 0x4c3 MovB
	return 0; // 0x4c4 Return
}


func_1221(var_521_int)
{
	var_521_int = 1; // 0x4c5 MovI
	return 0; // 0x4c6 Return
}


func_3270(var_107_string)
{
	var_108_object = Obj(); var_109_int = 0; var_110_bool = 0; var_111_object = Obj(); var_112_int = 0; var_113_bool = 0; // 0xcc6 PushV
	CreateInvItem(var_111_object); // 0xcc7 Func
	SetItemName(var_107_string); // 0xcc9 ObjFunc
	var_114_string = "Organ"; // 0xccb PushS
	var_115_int = 1; // 0xccc PushI
	SetProperty(var_114_string, var_115_int); // 0xccd ObjFunc
	GetItemID(var_112_int); // 0xccf ObjFunc
	var_116_int = 0; // 0xcd1 PushI
	var_117_int = 1; // 0xcd2 PushI
	AddItem(var_113_bool, var_111_object, var_116_int, var_117_int); // 0xcd3 Func
	return 6; // 0xcd5 Return
}


func_1223(var_516_float)
{
	var_516_float = 0.5; // 0x4c7 MovF
	return 0; // 0x4c8 Return
}


func_1225(var_3_int, var_253_bool, var_254_object, var_255_float, var_256_float, var_257_bool, var_258_bool)
{
	var_263_bool = 0; var_264_bool = 0; // 0x4c9 PushV
	var_3_int = var_254_object; // 0x4ca TMov
	var_265_int = 2; // 0x4cb PushI
	var_266_int = 2; // 0x4cc PushI
	SetTimer(var_265_int, var_266_int); // 0x4cd Func
	var_267_bool = 0; var_268_object = Obj(); var_269_float = 0; var_270_float = 0; var_271_bool = 0; var_272_bool = 0; // 0x4cf PushV
	var_268_object = var_254_object; // 0x4d0 Mov
	var_269_float = var_255_float; // 0x4d1 Mov
	var_270_float = var_256_float; // 0x4d2 Mov
	var_271_bool = var_257_bool; // 0x4d3 Mov
	var_272_bool = var_258_bool; // 0x4d4 Mov
	func_1276(var_264_bool, var_267_bool, var_268_object, var_269_float, var_270_float, var_271_bool, var_272_bool); // 0x4d5 NEW_2
	var_264_bool = var_267_bool; // 0x4d6 Mov
	var_347_int = 2; // 0x4d8 PushI
	KillTimer(var_347_int); // 0x4d9 Func
	var_253_bool = var_264_bool; // 0x4db Mov
	return 2; // 0x4dc Return
}


func_1742(var_0_cvector, var_1_cvector, var_24_int)
{
	var_25_int = 0; // 0x6cf PushI
	var_26_bool = var_24_int != var_25_int; // 0x6d0 Neq
	if(var_26_bool == 0) goto Label_1747; // 0x6d1 JumpB
	return 0; // 0x6d2 Return
	
Label_1747:
	var_27_bool = 0; var_28_object = Obj(); // 0x6d3 PushV
	var_28_object = var_1_cvector; // 0x6d4 MovT
	func_1780(var_27_bool, var_28_object); // 0x6d5 NEW_2
	var_63_bool = var_27_bool == 0; // 0x6d7 Not
	if(var_63_bool == 0) goto Label_1754; // 0x6d8 JumpB
	var_0_cvector = 1; // 0x6d9 TMovB
	
Label_1754:
	var_64_int = 0; // 0x6da PushI
	KillTimer(var_64_int); // 0x6db Func
	Stop(); // 0x6dd Func
	return 0; // 0x6df Return
}


func_3287()
{
	var_101_int = 0; // 0xcd7 PushV
	func_3251(var_101_int); // 0xcd8 NEW_2
	var_105_int = 1; // 0xcda PushI
	var_106_bool = var_101_int != var_105_int; // 0xcdb Neq
	if(var_106_bool == 0) goto Label_3294; // 0xcdc JumpB
	return 0; // 0xcdd Return
	
Label_3294:
	var_107_string = ""; // 0xcde PushV
	var_107_string = "liver"; // 0xcdf MovS
	func_3270(var_107_string); // 0xce0 NEW_2
	var_118_string = ""; // 0xce2 PushV
	var_118_string = "kidney"; // 0xce3 MovS
	func_3270(var_118_string); // 0xce4 NEW_2
	var_119_string = ""; // 0xce6 PushV
	var_119_string = "heart"; // 0xce7 MovS
	func_3270(var_119_string); // 0xce8 NEW_2
	var_120_string = ""; // 0xcea PushV
	var_120_string = "blood"; // 0xceb MovS
	func_3270(var_120_string); // 0xcec NEW_2
	return 0; // 0xcee Return
}


func_2783(var_569_string, var_570_int)
{
	var_571_int = 2; // 0xae0 PushI
	var_572_bool = var_570_int == var_571_int; // 0xae1 Eq
	if(var_572_bool == 0) goto Label_2790; // 0xae2 JumpB
	var_569_string = "fire"; // 0xae3 MovS
	return 0; // 0xae4 Return
	
Label_2790:
	var_573_int = 1; // 0xae6 PushI
	var_574_bool = var_570_int == var_573_int; // 0xae7 Eq
	if(var_574_bool == 0) goto Label_2795; // 0xae8 JumpB
	var_569_string = "bullet"; // 0xae9 MovS
	return 0; // 0xaea Return
	
Label_2795:
	var_569_string = "phys"; // 0xaeb MovS
	return 0; // 0xaec Return
}


func_1764(var_0_cvector)
{
	var_0_cvector = 1; // 0x6e4 TMovB
	var_21_int = 0; // 0x6e5 PushI
	KillTimer(var_21_int); // 0x6e6 Func
	Stop(); // 0x6e8 Func
	return 0; // 0x6ea Return
}


func_2797(var_472_cvector)
{
	var_474_cvector = CVector(0,0,0); var_475_cvector = CVector(0,0,0); var_476_cvector = CVector(0,0,0); var_477_cvector = CVector(0,0,0); // 0xaed PushV
	GetPosition(var_476_cvector); // 0xaee Func
	GetPosition(var_477_cvector); // 0xaf0 ObjFunc
	var_472_cvector = var_477_cvector - var_476_cvector; // 0xaf2 Sub2
	return 4; // 0xaf3 Return
}


func_2804(var_288_bool, var_289_object)
{
	var_290_bool = 0; var_291_bool = 0; // 0xaf4 PushV
	IsPlayerActor(var_289_object, var_291_bool); // 0xaf5 Func
	var_288_bool = var_291_bool; // 0xaf7 Mov
	return 2; // 0xaf8 Return
}


func_1780(var_737_bool, var_738_object)
{
	var_739_bool = 0; var_740_object = Obj(); // 0x6f5 PushV
	var_740_object = var_738_object; // 0x6f6 Mov
	func_2935(var_739_bool, var_740_object); // 0x6f7 NEW_2
	var_737_bool = var_739_bool; // 0x6f8 Mov
	return 0; // 0x6fa Return
}


func_3319(var_22_bool, var_23_object, var_24_string)
{
	var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_float = 0; // 0xcf7 PushV
	var_41_object = Obj(); // 0xcf8 PushV
	func_3164(var_41_object); // 0xcf9 NEW_2
	var_44_bool = var_23_object == var_41_object; // 0xcfb Eq
	if(var_44_bool == 0) goto Label_3327; // 0xcfc JumpB
	var_22_bool = 0; // 0xcfd MovB
	return 16; // 0xcfe Return
	
Label_3327:
	var_45_string = "b9q03_corpse"; // 0xcff PushS
	var_46_int = GlobalVars[1]; // 0xd00 PushGE
	var_47_int = 1; // 0xd01 PushI
	var_48_int = var_46_int + var_47_int; // 0xd02 Add
	var_49_int = var_45_string + var_48_int; // 0xd03 Add
	var_50_bool = var_24_string == var_49_int; // 0xd04 Eq
	if(var_50_bool == 0) goto Label_3342; // 0xd05 JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0xd06 PushV
	var_52_object = var_23_object; // 0xd07 Mov
	func_3631(var_51_bool, var_52_object); // 0xd08 NEW_2
	if(var_51_bool == 0) goto Label_3341; // 0xd0a JumpB
	var_22_bool = 1; // 0xd0b MovB
	return 16; // 0xd0c Return
	
Label_3341:
	goto Label_3395; // 0xd0d Jump
	
Label_3395:
	var_22_bool = 0; // 0xd43 MovB
	return 16; // 0xd44 Return
	
Label_3342:
	var_59_string = "b9q03_helpme"; // 0xd0e PushS
	var_60_int = GlobalVars[1]; // 0xd0f PushGE
	var_61_int = 1; // 0xd10 PushI
	var_62_int = var_60_int + var_61_int; // 0xd11 Add
	var_63_int = var_59_string + var_62_int; // 0xd12 Add
	var_64_bool = var_24_string == var_63_int; // 0xd13 Eq
	if(var_64_bool == 0) goto Label_3366; // 0xd14 JumpB
	GetPosition(var_33_cvector); // 0xd15 ObjFunc
	GetPosition(var_34_cvector); // 0xd17 Func
	var_35_cvector = var_33_cvector - var_34_cvector; // 0xd19 Sub2
	var_36_float = var_35_cvector | var_35_cvector; // 0xd1a Or2
	var_65_float = 4000000.0; // 0xd1b PushF
	var_66_bool = var_36_float < var_65_float; // 0xd1c LT
	if(var_66_bool == 0) goto Label_3365; // 0xd1d JumpB
	var_67_bool = 0; var_68_object = Obj(); // 0xd1e PushV
	var_68_object = var_23_object; // 0xd1f Mov
	func_3667(var_67_bool, var_68_object); // 0xd20 NEW_2
	if(var_67_bool == 0) goto Label_3365; // 0xd22 JumpB
	var_22_bool = 1; // 0xd23 MovB
	return 16; // 0xd24 Return
	
Label_3365:
	goto Label_3395; // 0xd25 Jump
	
Label_3366:
	var_75_string = "player_shot"; // 0xd26 PushS
	var_76_bool = var_24_string == var_75_string; // 0xd27 Eq
	if(var_76_bool == 0) goto Label_3395; // 0xd28 JumpB
	GetPosition(var_37_cvector); // 0xd29 ObjFunc
	GetPosition(var_38_cvector); // 0xd2b Func
	var_39_cvector = var_37_cvector - var_38_cvector; // 0xd2d Sub2
	var_40_float = var_39_cvector | var_39_cvector; // 0xd2e Or2
	var_77_float = 360000.0; // 0xd2f PushF
	var_78_bool = var_40_float < var_77_float; // 0xd30 LT
	if(var_78_bool == 0) goto Label_3385; // 0xd31 JumpB
	var_79_bool = 0; var_80_object = Obj(); // 0xd32 PushV
	var_80_object = var_23_object; // 0xd33 Mov
	func_3667(var_79_bool, var_80_object); // 0xd34 NEW_2
	if(var_79_bool == 0) goto Label_3385; // 0xd36 JumpB
	var_22_bool = 1; // 0xd37 MovB
	return 16; // 0xd38 Return
	
Label_3385:
	var_81_float = 12250000.0; // 0xd39 PushF
	var_82_bool = var_40_float < var_81_float; // 0xd3a LT
	if(var_82_bool == 0) goto Label_3395; // 0xd3b JumpB
	var_83_bool = 0; var_84_object = Obj(); // 0xd3c PushV
	var_84_object = var_23_object; // 0xd3d Mov
	func_3631(var_83_bool, var_84_object); // 0xd3e NEW_2
	if(var_83_bool == 0) goto Label_3395; // 0xd40 JumpB
	var_22_bool = 1; // 0xd41 MovB
	return 16; // 0xd42 Return
}


func_2809(var_232_bool, var_233_object, var_234_string)
{
	var_235_bool = 0; var_236_bool = 0; // 0xaf9 PushV
	var_237_string = "HasProperty"; // 0xafa PushS
	var_238_int = 2; // 0xafb PushI
	var_239_bool = IsFuncExist(var_233_object, var_237_string, var_238_int); // 0xafc FuncExist
	var_240_bool = var_239_bool == 0; // 0xafd Not
	if(var_240_bool == 0) goto Label_2817; // 0xafe JumpB
	var_232_bool = 0; // 0xaff MovB
	return 2; // 0xb00 Return
	
Label_2817:
	HasProperty(var_234_string, var_236_bool); // 0xb01 ObjFunc
	var_232_bool = var_236_bool; // 0xb03 Mov
	return 2; // 0xb04 Return
}


func_1787(var_755_string)
{
	var_755_string = "walk"; // 0x6fb MovS
	return 0; // 0x6fc Return
}


func_1276(var_2_object, var_267_bool, var_268_object, var_269_float, var_270_float, var_271_bool, var_272_bool)
{
	var_273_bool = 0; var_274_bool = 0; var_275_bool = 0; var_276_bool = 0; // 0x4fc PushV
	var_277_object = Obj(); // 0x4fd PushV
	var_277_object = var_268_object; // 0x4fe Mov
	func_3218(var_277_object); // 0x4ff NEW_2
	var_278_int = 1; // 0x501 PushI
	var_279_int = 5; // 0x502 PushI
	SetTimer(var_278_int, var_279_int); // 0x503 Func
	CanSee(var_275_bool, var_268_object); // 0x505 Func
	var_280_bool = var_275_bool; // 0x507 Push
	if(var_280_bool == 0) goto Label_1295; // 0x508 JumpB
	var_2_object = 1; // 0x509 TMovB
	var_281_object = Obj(); // 0x50a PushV
	var_281_object = var_268_object; // 0x50b Mov
	func_3101(var_281_object); // 0x50c NEW_2
	goto Label_1296; // 0x50e Jump
	
Label_1296:
	var_288_bool = 0; var_289_object = Obj(); // 0x510 PushV
	var_289_object = var_268_object; // 0x511 Mov
	func_2804(var_288_bool, var_289_object); // 0x512 NEW_2
	if(var_288_bool == 0) goto Label_1306; // 0x514 JumpB
	var_292_object = Obj(); // 0x515 PushV
	func_3164(var_292_object); // 0x516 NEW_2
	SendPlayerEnemy(var_268_object, var_292_object); // 0x518 Func
	
Label_1306:
	var_293_bool = 0; var_294_object = Obj(); var_295_float = 0; var_296_float = 0; var_297_bool = 0; var_298_bool = 0; // 0x51a PushV
	var_294_object = var_268_object; // 0x51b Mov
	var_295_float = var_269_float; // 0x51c Mov
	var_296_float = var_270_float; // 0x51d Mov
	var_297_bool = var_271_bool; // 0x51e Mov
	var_298_bool = var_272_bool; // 0x51f Mov
	func_1381(var_275_bool, var_276_bool, var_293_bool, var_294_object, var_295_float, var_296_float, var_297_bool, var_298_bool); // 0x520 NEW_2
	var_276_bool = var_293_bool; // 0x521 Mov
	var_344_object = var_2_object; // 0x523 PushT
	if(var_344_object == 0) goto Label_1320; // 0x524 JumpB
	var_345_string = "head"; // 0x525 PushS
	UnlookAsync(var_345_string); // 0x526 Func
	
Label_1320:
	var_346_int = 1; // 0x528 PushI
	KillTimer(var_346_int); // 0x529 Func
	var_267_bool = var_276_bool; // 0x52b Mov
	return 4; // 0x52c Return
	
Label_1295:
	var_2_object = 0; // 0x50f TMovB
}


func_1789(var_756_string)
{
	var_756_string = "run"; // 0x6fd MovS
	return 0; // 0x6fe Return
}


func_765(var_4_int)
{
	Stop(); // 0x2fd Func
	StopAnimation(); // 0x2ff Func
	StopGroup0(); // 0x301 Func
	var_4_int = 1; // 0x303 TMovB
	return 0; // 0x304 Return
}


func_1791()
{
	func_1846(); // 0x700 NEW_2
	return 0; // 0x702 Return
}


func_773(var_1_cvector, var_2_object, var_5_bool)
{
	var_176_bool = 0; var_177_bool = 0; var_178_cvector = CVector(0,0,0); var_179_bool = 0; var_180_bool = 0; var_181_cvector = CVector(0,0,0); // 0x305 PushV
	var_1_cvector = 0; // 0x306 TMovI
	
Label_775:
	var_182_string = "all"; // 0x307 PushS
	var_183_string = "attack_begin"; // 0x308 PushS
	var_184_int = 1; // 0x309 PushI
	var_185_int = var_1_cvector + var_184_int; // 0x30a Add
	var_186_int = var_183_string + var_185_int; // 0x30b Add
	HasAnimation(var_179_bool, var_182_string, var_186_int); // 0x30c Func
	var_187_bool = var_179_bool == 0; // 0x30e Not
	if(var_187_bool == 0) goto Label_785; // 0x30f JumpB
	goto Label_788; // 0x310 Jump
	
Label_788:
	var_2_object = 0; // 0x314 TMovI
	
Label_789:
	var_188_string = "attack"; // 0x315 PushS
	var_189_int = 1; // 0x316 PushI
	var_190_int = var_2_object + var_189_int; // 0x317 Add
	var_191_int = var_188_string + var_190_int; // 0x318 Add
	IsExisting3DSound(var_180_bool, var_191_int); // 0x319 Func
	var_192_bool = var_180_bool == 0; // 0x31b Not
	if(var_192_bool == 0) goto Label_798; // 0x31c JumpB
	goto Label_801; // 0x31d Jump
	
Label_801:
	var_193_string = "all"; // 0x321 PushS
	var_194_string = "bjump"; // 0x322 PushS
	GetAnimationOffset(var_181_cvector, var_193_string, var_194_string); // 0x323 Func
	var_195_float = GetByIndex(var_181_cvector, 2); // 0x325 PushE
	var_5_bool = -var_195_float; // 0x326 Neg2
	return 6; // 0x327 Return
	
Label_798:
	var_196_int = 1; // 0x31e PushI
	var_2_object = var_2_object + var_196_int; // 0x31f Add2
	goto Label_789; // 0x320 Jump
	
Label_785:
	var_197_int = 1; // 0x311 PushI
	var_1_cvector = var_1_cvector + var_197_int; // 0x312 Add2
	goto Label_775; // 0x313 Jump
}


func_2821(var_541_float, var_542_object, var_543_float, var_544_int)
{
	var_548_int = 0; var_549_string = ""; var_550_int = 0; var_551_float = 0; var_552_float = 0; var_553_float = 0; var_554_int = 0; var_555_string = ""; var_556_int = 0; var_557_float = 0; var_558_float = 0; var_559_float = 0; // 0xb05 PushV
	var_560_bool = 0; var_561_object = Obj(); var_562_string = ""; // 0xb06 PushV
	var_561_object = var_542_object; // 0xb07 Mov
	var_562_string = "health"; // 0xb08 MovS
	func_2809(var_560_bool, var_561_object, var_562_string); // 0xb09 NEW_2
	var_563_bool = var_560_bool == 0; // 0xb0b Not
	if(var_563_bool == 0) goto Label_2831; // 0xb0c JumpB
	var_541_float = 0.0; // 0xb0d MovF
	return 12; // 0xb0e Return
	
Label_2831:
	var_564_bool = 0; var_565_object = Obj(); var_566_string = ""; // 0xb0f PushV
	var_565_object = var_542_object; // 0xb10 Mov
	var_566_string = "armor"; // 0xb11 MovS
	func_2809(var_564_bool, var_565_object, var_566_string); // 0xb12 NEW_2
	var_567_bool = var_564_bool == 0; // 0xb14 Not
	if(var_567_bool == 0) goto Label_2840; // 0xb15 JumpB
	var_554_int = 0; // 0xb16 MovI
	goto Label_2843; // 0xb17 Jump
	
Label_2843:
	var_568_string = "armor_"; // 0xb1b PushS
	var_569_string = ""; var_570_int = 0; // 0xb1c PushV
	var_570_int = var_544_int; // 0xb1d Mov
	func_2783(var_569_string, var_570_int); // 0xb1e NEW_2
	var_555_string = var_568_string + var_569_string; // 0xb20 Add2
	var_575_bool = 0; var_576_object = Obj(); var_577_string = ""; // 0xb21 PushV
	var_576_object = var_542_object; // 0xb22 Mov
	var_577_string = var_555_string; // 0xb23 Mov
	func_2809(var_575_bool, var_576_object, var_577_string); // 0xb24 NEW_2
	var_578_bool = var_575_bool == 0; // 0xb26 Not
	if(var_578_bool == 0) goto Label_2858; // 0xb27 JumpB
	var_556_int = 0; // 0xb28 MovI
	goto Label_2860; // 0xb29 Jump
	
Label_2860:
	var_579_float = 0; var_580_float = 0; var_581_float = 0; // 0xb2c PushV
	var_582_int = var_554_int + var_556_int; // 0xb2d Add
	var_583_float = 100.0; // 0xb2e PushF
	var_580_float = var_582_int / var_582_int; // 0xb2f Div2
	var_581_float = 1; // 0xb30 MovI
	func_3180(var_579_float, var_580_float, var_581_float); // 0xb31 NEW_2
	var_557_float = var_579_float; // 0xb32 Mov
	var_585_string = "health"; // 0xb34 PushS
	GetProperty(var_585_string, var_558_float); // 0xb35 ObjFunc
	var_586_int = 1; // 0xb37 PushI
	var_587_int = var_586_int - var_557_float; // 0xb38 Sub
	var_559_float = var_543_float * var_587_int; // 0xb39 Mult2
	var_588_string = "health"; // 0xb3a PushS
	var_589_float = 0; var_590_float = 0; var_591_float = 0; var_592_float = 0; // 0xb3b PushV
	var_590_float = var_558_float - var_559_float; // 0xb3c Sub2
	var_591_float = 0; // 0xb3d MovI
	var_592_float = 1; // 0xb3e MovI
	func_3187(var_589_float, var_590_float, var_591_float, var_592_float); // 0xb3f NEW_2
	SetProperty(var_588_string, var_589_float); // 0xb41 ObjFunc
	var_595_bool = 0; var_596_object = Obj(); // 0xb43 PushV
	var_596_object = var_542_object; // 0xb44 Mov
	func_2804(var_595_bool, var_596_object); // 0xb45 NEW_2
	if(var_595_bool == 0) goto Label_2892; // 0xb47 JumpB
	var_597_float = 0; // 0xb48 PushV
	var_597_float = -var_559_float; // 0xb49 Neg2
	func_3208(var_597_float); // 0xb4a NEW_2
	
Label_2892:
	var_541_float = var_559_float; // 0xb4c Mov
	return 12; // 0xb4d Return
	
Label_2858:
	GetProperty(var_555_string, var_556_int); // 0xb2a ObjFunc
	
Label_2840:
	var_601_string = "armor"; // 0xb18 PushS
	GetProperty(var_601_string, var_554_int); // 0xb19 ObjFunc
}


func_808(var_0_cvector, var_527_float, var_528_int)
{
	var_529_object = Obj(); var_530_float = 0; var_531_float = 0; var_532_object = Obj(); var_533_float = 0; var_534_float = 0; // 0x328 PushV
	var_535_float = 0.9; // 0x329 PushF
	var_536_float = var_527_float * var_535_float; // 0x32a Mult
	GetVictim(var_536_float, var_532_object); // 0x32b Func
	ReportAttack(var_0_cvector); // 0x32d Func
	var_537_bool = var_532_object == var_0_cvector; // 0x32f Eq
	if(var_537_bool == 0) goto Label_845; // 0x330 JumpB
	var_538_float = 0; var_539_object = Obj(); var_540_int = 0; // 0x331 PushV
	var_539_object = var_532_object; // 0x332 Mov
	var_540_int = var_528_int; // 0x333 Mov
	func_457(var_540_int); // 0x334 NEW_2
	var_533_float = var_538_float; // 0x335 Mov
	var_541_float = 0; var_542_object = Obj(); var_543_float = 0; var_544_int = 0; // 0x337 PushV
	var_542_object = var_532_object; // 0x338 Mov
	var_543_float = var_533_float; // 0x339 Mov
	var_545_int = 0; var_546_object = Obj(); var_547_int = 0; // 0x33a PushV
	var_546_object = var_532_object; // 0x33b Mov
	var_547_int = var_528_int; // 0x33c Mov
	func_460(var_547_int); // 0x33d NEW_2
	var_544_int = var_545_int; // 0x33e Mov
	func_2821(var_541_float, var_542_object, var_543_float, var_544_int); // 0x340 NEW_2
	var_534_float = var_541_float; // 0x341 Mov
	var_602_int = 0; // 0x343 PushV
	func_463(var_602_int); // 0x344 NEW_2
	ReportHit(var_0_cvector, var_602_int, var_534_float, var_533_float); // 0x346 Func
	var_604_object = Obj(); var_605_float = 0; // 0x348 PushV
	var_604_object = var_532_object; // 0x349 Mov
	var_605_float = var_534_float; // 0x34a Mov
	func_1217(); // 0x34b NEW_2
	
Label_845:
	return 6; // 0x34d Return
}


func_1325(var_1_cvector, var_31_int)
{
	var_32_int = 1; // 0x52e PushI
	var_33_bool = var_31_int == var_32_int; // 0x52f Eq
	if(var_33_bool == 0) goto Label_1334; // 0x530 JumpB
	var_34_object = Obj(); // 0x531 PushV
	var_34_object = var_1_cvector; // 0x532 MovT
	func_3218(var_34_object); // 0x533 NEW_2
	goto Label_1338; // 0x535 Jump
	
Label_1338:
	return 0; // 0x53a Return
	
Label_1334:
	var_39_int = 0; // 0x536 PushV
	var_39_int = var_31_int; // 0x537 Mov
	func_1483(var_22_object, var_31_int, var_39_int); // 0x538 NEW_2
}


func_1846()
{
	var_872_int = 0; var_873_int = 0; var_874_int = 0; var_875_int = 0; var_876_bool = 0; var_877_float = 0; var_878_bool = 0; var_879_int = 0; var_880_int = 0; var_881_int = 0; var_882_int = 0; var_883_bool = 0; var_884_float = 0; var_885_bool = 0; // 0x736 PushV
	WaitForAnimEnd(); // 0x737 Func
	var_886_bool = 0; // 0x739 PushV
	func_3096(var_886_bool); // 0x73a NEW_2
	var_887_bool = var_886_bool == 0; // 0x73c Not
	if(var_887_bool == 0) goto Label_1855; // 0x73d JumpB
	return 14; // 0x73e Return
	
Label_1855:
	var_888_int = 0; // 0x73f PushV
	func_3234(var_888_int); // 0x740 NEW_2
	var_879_int = var_888_int; // 0x741 Mov
	var_880_int = 0; // 0x743 MovI
	
Label_1860:
	var_901_bool = 0; // 0x744 PushV
	var_901_bool = 0; // 0x745 MovB
	var_902_int = 5; // 0x746 PushI
	var_903_bool = var_880_int < var_902_int; // 0x747 LT
	if(var_903_bool == 0) goto Label_1870; // 0x748 JumpB
	var_904_bool = 0; // 0x749 PushV
	func_3096(var_904_bool); // 0x74a NEW_2
	if(var_904_bool == 0) goto Label_1870; // 0x74c JumpB
	var_901_bool = 1; // 0x74d MovB
	
Label_1870:
	if(var_901_bool == 0) goto Label_1922; // 0x74e JumpB
	var_905_int = 3; // 0x74f PushI
	irand(var_881_int, var_905_int); // 0x750 Func
	var_906_int = 0; // 0x752 PushI
	var_907_bool = var_881_int == var_906_int; // 0x753 Eq
	if(var_907_bool == 0) goto Label_1894; // 0x754 JumpB
	var_908_int = var_879_int; // 0x755 Push
	if(var_908_int == 0) goto Label_1893; // 0x756 JumpB
	irand(var_882_int, var_879_int); // 0x757 Func
	var_909_string = "all"; // 0x759 PushS
	var_910_string = ""; var_911_int = 0; // 0x75a PushV
	var_911_int = var_882_int; // 0x75b Mov
	func_3227(var_910_string, var_911_int); // 0x75c NEW_2
	PlayAnimation(var_909_string, var_910_string); // 0x75e Func
	WaitForAnimEnd(var_883_bool); // 0x760 Func
	var_912_bool = var_883_bool == 0; // 0x762 Not
	if(var_912_bool == 0) goto Label_1893; // 0x763 JumpB
	goto Label_1922; // 0x764 Jump
	
Label_1922:
	ResetAAS(); // 0x782 Func
	return 14; // 0x784 Return
	
Label_1893:
	goto Label_1911; // 0x765 Jump
	
Label_1911:
	var_913_bool = 0; // 0x777 PushV
	func_1925(var_913_bool); // 0x778 NEW_2
	var_914_bool = var_913_bool == 0; // 0x77a Not
	if(var_914_bool == 0) goto Label_1917; // 0x77b JumpB
	goto Label_1922; // 0x77c Jump
	
Label_1917:
	ResetAAS(); // 0x77d Func
	var_915_int = 1; // 0x77f PushI
	var_880_int = var_880_int + var_915_int; // 0x780 Add2
	goto Label_1860; // 0x781 Jump
	
Label_1894:
	var_916_int = 1; // 0x766 PushI
	var_917_bool = var_881_int == var_916_int; // 0x767 Eq
	if(var_917_bool == 0) goto Label_1908; // 0x768 JumpB
	var_918_int = 4; // 0x769 PushI
	rand(var_884_float, var_918_int); // 0x76a Func
	var_919_int = 1; // 0x76c PushI
	var_920_int = var_884_float + var_919_int; // 0x76d Add
	Sleep(var_920_int, var_885_bool); // 0x76e Func
	var_921_bool = var_885_bool == 0; // 0x770 Not
	if(var_921_bool == 0) goto Label_1907; // 0x771 JumpB
	goto Label_1922; // 0x772 Jump
	
Label_1907:
	goto Label_1911; // 0x773 Jump
	
Label_1908:
	var_922_int = var_880_int; // 0x774 Push
	if(var_922_int == 0) goto Label_1911; // 0x775 JumpB
	goto Label_1922; // 0x776 Jump
}


func_2361(var_0_cvector)
{
	var_0_cvector = 1; // 0x939 TMovB
	var_21_int = 0; // 0x93a PushI
	KillTimer(var_21_int); // 0x93b Func
	Stop(); // 0x93d Func
	return 0; // 0x93f Return
}


func_1339(var_2_object)
{
	var_21_int = 1; // 0x53b PushI
	KillTimer(var_21_int); // 0x53c Func
	var_22_object = var_2_object; // 0x53e PushT
	if(var_22_object == 0) goto Label_1348; // 0x53f JumpB
	var_2_object = 0; // 0x540 TMovB
	var_23_string = "head"; // 0x541 PushS
	UnlookAsync(var_23_string); // 0x542 Func
	
Label_1348:
	func_1505(var_20_bool); // 0x545 NEW_2
	return 0; // 0x547 Return
}


func_3397(var_21_bool, var_22_object)
{
	var_23_bool = 0; // 0xd46 PushV
	var_23_bool = 0; // 0xd47 MovB
	var_24_string = "IsDead"; // 0xd48 PushS
	var_25_int = 1; // 0xd49 PushI
	var_26_bool = IsFuncExist(var_22_object, var_24_string, var_25_int); // 0xd4a FuncExist
	if(var_26_bool == 0) goto Label_3410; // 0xd4b JumpB
	var_27_bool = 0; var_28_object = Obj(); // 0xd4c PushV
	var_28_object = var_22_object; // 0xd4d Mov
	func_2894(var_28_object); // 0xd4e NEW_2
	if(var_27_bool == 0) goto Label_3410; // 0xd50 JumpB
	var_23_bool = 1; // 0xd51 MovB
	
Label_3410:
	if(var_23_bool == 0) goto Label_3430; // 0xd52 JumpB
	var_31_bool = 0; var_32_object = Obj(); var_33_string = ""; // 0xd53 PushV
	var_32_object = var_22_object; // 0xd54 Mov
	var_33_string = "b9q03_corpse"; // 0xd55 MovS
	func_2809(var_31_bool, var_32_object, var_33_string); // 0xd56 NEW_2
	if(var_31_bool == 0) goto Label_3419; // 0xd58 JumpB
	var_21_bool = 0; // 0xd59 MovB
	return 0; // 0xd5a Return
	
Label_3419:
	var_40_string = "b9q03_corpse"; // 0xd5b PushS
	var_41_int = 1; // 0xd5c PushI
	SetProperty(var_40_string, var_41_int); // 0xd5d ObjFunc
	var_42_bool = 0; var_43_object = Obj(); // 0xd5f PushV
	var_43_object = var_22_object; // 0xd60 Mov
	func_3613(var_42_bool, var_43_object); // 0xd61 NEW_2
	var_21_bool = var_42_bool; // 0xd62 Mov
	return 0; // 0xd64 Return
	
Label_3430:
	var_50_bool = 0; var_51_object = Obj(); // 0xd66 PushV
	var_51_object = var_22_object; // 0xd67 Mov
	func_2804(var_50_bool, var_51_object); // 0xd68 NEW_2
	if(var_50_bool == 0) goto Label_3442; // 0xd6a JumpB
	var_54_bool = 0; var_55_object = Obj(); // 0xd6b PushV
	var_55_object = var_22_object; // 0xd6c Mov
	func_3667(var_54_bool, var_55_object); // 0xd6d NEW_2
	var_21_bool = var_54_bool; // 0xd6e Mov
	return 0; // 0xd70 Return
	
Label_3442:
	var_62_bool = 0; var_63_object = Obj(); var_64_string = ""; // 0xd72 PushV
	var_63_object = var_22_object; // 0xd73 Mov
	var_64_string = "b9q03"; // 0xd74 MovS
	func_2809(var_62_bool, var_63_object, var_64_string); // 0xd75 NEW_2
	if(var_62_bool == 0) goto Label_3454; // 0xd77 JumpB
	var_65_bool = 0; var_66_object = Obj(); // 0xd78 PushV
	var_66_object = var_22_object; // 0xd79 Mov
	func_3667(var_65_bool, var_66_object); // 0xd7a NEW_2
	var_21_bool = var_65_bool; // 0xd7b Mov
	return 0; // 0xd7d Return
	
Label_3454:
	var_21_bool = 0; // 0xd7e MovB
	return 0; // 0xd7f Return
}


func_2377(var_858_string)
{
	var_858_string = "walk"; // 0x949 MovS
	return 0; // 0x94a Return
}


func_2379(var_859_string)
{
	var_859_string = "run"; // 0x94b MovS
	return 0; // 0x94c Return
}


func_2381(var_671_int)
{
	var_673_int = 0; var_674_int = 0; // 0x94d PushV
	var_674_int = 0; // 0x94e MovI
	
Label_2383:
	var_675_bool = var_674_int < var_671_int; // 0x94f LT
	if(var_675_bool == 0) goto Label_2395; // 0x950 JumpB
	var_676_string = ""; // 0x951 PushV
	var_676_string = "hunt"; // 0x952 MovS
	func_2451(var_676_string); // 0x953 NEW_2
	var_686_cvector = var_0_cvector; // 0x955 PushT
	if(var_686_cvector == 0) goto Label_2392; // 0x956 JumpB
	goto Label_2395; // 0x957 Jump
	
Label_2395:
	return 2; // 0x95b Return
	
Label_2392:
	var_687_int = 1; // 0x958 PushI
	var_674_int = var_674_int + var_687_int; // 0x959 Add2
	goto Label_2383; // 0x95a Jump
}


func_2894(var_225_bool)
{
	var_227_bool = 0; var_228_bool = 0; // 0xb4e PushV
	IsDead(var_228_bool); // 0xb4f ObjFunc
	var_225_bool = var_228_bool; // 0xb51 Mov
	return 2; // 0xb52 Return
}


func_847(var_0_cvector, var_492_bool, var_493_float)
{
	var_494_int = 0; var_495_bool = 0; var_496_int = 0; var_497_string = ""; var_498_int = 0; var_499_bool = 0; var_500_int = 0; var_501_string = ""; // 0x34f PushV
	func_1207(var_501_string); // 0x351 NEW_2
	irand(var_498_int, var_501_string); // 0x353 Func
	var_502_int = 1; // 0x355 PushI
	var_498_int = var_498_int + var_502_int; // 0x356 Add2
	Face(var_0_cvector); // 0x357 Func
	var_503_bool = 1; // 0x359 PushB
	SetAttackState(var_503_bool); // 0x35a Func
	var_504_string = "all"; // 0x35c PushS
	var_505_string = "attack_begin"; // 0x35d PushS
	var_506_int = var_505_string + var_498_int; // 0x35e Add
	PlayAnimation(var_504_string, var_506_int); // 0x35f Func
	WaitForAnimEnd(); // 0x361 Func
	func_1175(var_500_int, var_501_string); // 0x364 NEW_2
	var_522_bool = 0; // 0x366 PushV
	var_522_bool = 1; // 0x367 MovB
	var_523_bool = 0; var_524_object = Obj(); // 0x368 PushV
	var_524_object = var_0_cvector; // 0x369 MovT
	func_2935(var_523_bool, var_524_object); // 0x36a NEW_2
	var_525_bool = var_523_bool == 0; // 0x36c Not
	if(var_525_bool == 0) goto Label_881; // 0x36d JumpB
	var_526_int = var_4_int; // 0x36e PushT
	if(var_526_int == 0) goto Label_881; // 0x36f JumpB
	var_522_bool = 0; // 0x370 MovB
	
Label_881:
	if(var_522_bool == 0) goto Label_886; // 0x371 JumpB
	StopAsync(); // 0x372 Func
	var_492_bool = 0; // 0x374 MovB
	return 8; // 0x375 Return
	
Label_886:
	var_527_float = 0; var_528_int = 0; // 0x376 PushV
	var_527_float = var_493_float; // 0x377 Mov
	var_528_int = var_498_int; // 0x378 Mov
	func_808(var_501_string, var_527_float, var_528_int); // 0x379 NEW_2
	var_606_string = "all"; // 0x37b PushS
	var_607_string = "attack_middle"; // 0x37c PushS
	var_608_int = var_607_string + var_498_int; // 0x37d Add
	HasAnimation(var_499_bool, var_606_string, var_608_int); // 0x37e Func
	var_609_bool = var_499_bool; // 0x380 Push
	if(var_609_bool == 0) goto Label_973; // 0x381 JumpB
	var_610_string = "all"; // 0x382 PushS
	var_611_string = "attack_middle"; // 0x383 PushS
	var_612_int = var_611_string + var_498_int; // 0x384 Add
	PlayAnimation(var_610_string, var_612_int); // 0x385 Func
	WaitForAnimEnd(); // 0x387 Func
	func_1207(var_501_string); // 0x38a NEW_2
	var_613_bool = 0; // 0x38c PushV
	var_613_bool = 1; // 0x38d MovB
	var_614_bool = 0; var_615_object = Obj(); // 0x38e PushV
	var_615_object = var_0_cvector; // 0x38f MovT
	func_2935(var_614_bool, var_615_object); // 0x390 NEW_2
	var_616_bool = var_614_bool == 0; // 0x392 Not
	if(var_616_bool == 0) goto Label_919; // 0x393 JumpB
	var_617_int = var_4_int; // 0x394 PushT
	if(var_617_int == 0) goto Label_919; // 0x395 JumpB
	var_613_bool = 0; // 0x396 MovB
	
Label_919:
	if(var_613_bool == 0) goto Label_924; // 0x397 JumpB
	StopAsync(); // 0x398 Func
	var_492_bool = 0; // 0x39a MovB
	return 8; // 0x39b Return
	
Label_924:
	var_618_float = 0; var_619_int = 0; // 0x39c PushV
	var_618_float = var_493_float; // 0x39d Mov
	var_619_int = var_498_int; // 0x39e Mov
	func_808(var_501_string, var_618_float, var_619_int); // 0x39f NEW_2
	var_500_int = 1; // 0x3a1 MovI
	
Label_930:
	var_620_string = "attack_middle"; // 0x3a2 PushS
	var_621_int = var_620_string + var_498_int; // 0x3a3 Add
	var_622_string = "_"; // 0x3a4 PushS
	var_623_int = var_621_int + var_622_string; // 0x3a5 Add
	var_501_string = var_623_int + var_500_int; // 0x3a6 Add2
	var_624_string = "all"; // 0x3a7 PushS
	HasAnimation(var_499_bool, var_624_string, var_501_string); // 0x3a8 Func
	var_625_bool = var_499_bool == 0; // 0x3aa Not
	if(var_625_bool == 0) goto Label_941; // 0x3ab JumpB
	goto Label_973; // 0x3ac Jump
	
Label_973:
	var_626_bool = 0; // 0x3cd PushB
	SetAttackState(var_626_bool); // 0x3ce Func
	var_627_string = "all"; // 0x3d0 PushS
	var_628_string = "attack_end"; // 0x3d1 PushS
	var_629_int = var_628_string + var_498_int; // 0x3d2 Add
	PlayAnimation(var_627_string, var_629_int); // 0x3d3 Func
	var_630_bool = 0; // 0x3d5 PushV
	func_1219(var_630_bool); // 0x3d6 NEW_2
	if(var_630_bool == 0) goto Label_991; // 0x3d8 JumpB
	var_631_bool = 0; var_632_float = 0; // 0x3d9 PushV
	var_632_float = 0.75; // 0x3da MovF
	func_993(var_631_bool, var_632_float); // 0x3db NEW_2
	StopAsync(); // 0x3dd Func
	
Label_991:
	var_492_bool = 1; // 0x3df MovB
	return 8; // 0x3e0 Return
	
Label_941:
	var_640_string = "all"; // 0x3ad PushS
	PlayAnimation(var_640_string, var_501_string); // 0x3ae Func
	WaitForAnimEnd(); // 0x3b0 Func
	func_1207(var_501_string); // 0x3b3 NEW_2
	var_641_bool = 0; // 0x3b5 PushV
	var_641_bool = 1; // 0x3b6 MovB
	var_642_bool = 0; var_643_object = Obj(); // 0x3b7 PushV
	var_643_object = var_0_cvector; // 0x3b8 MovT
	func_2935(var_642_bool, var_643_object); // 0x3b9 NEW_2
	var_644_bool = var_642_bool == 0; // 0x3bb Not
	if(var_644_bool == 0) goto Label_960; // 0x3bc JumpB
	var_645_int = var_4_int; // 0x3bd PushT
	if(var_645_int == 0) goto Label_960; // 0x3be JumpB
	var_641_bool = 0; // 0x3bf MovB
	
Label_960:
	if(var_641_bool == 0) goto Label_965; // 0x3c0 JumpB
	StopAsync(); // 0x3c1 Func
	var_492_bool = 0; // 0x3c3 MovB
	return 8; // 0x3c4 Return
	
Label_965:
	var_646_float = 0; var_647_int = 0; // 0x3c5 PushV
	var_646_float = var_493_float; // 0x3c6 Mov
	var_647_int = var_498_int; // 0x3c7 Mov
	func_808(var_501_string, var_646_float, var_647_int); // 0x3c8 NEW_2
	var_648_int = 1; // 0x3ca PushI
	var_500_int = var_500_int + var_648_int; // 0x3cb Add2
	goto Label_930; // 0x3cc Jump
}


func_2899(var_214_bool, var_215_object)
{
	var_216_object = Obj(); var_217_object = Obj(); var_218_object = Obj(); var_219_object = Obj(); // 0xb53 PushV
	var_220_bool = var_215_object == 0; // 0xb54 NullEq
	if(var_220_bool == 0) goto Label_2904; // 0xb55 JumpB
	var_214_bool = 0; // 0xb56 MovB
	return 4; // 0xb57 Return
	
Label_2904:
	var_221_bool = 0; // 0xb58 PushV
	var_221_bool = 0; // 0xb59 MovB
	var_222_string = "IsDead"; // 0xb5a PushS
	var_223_int = 1; // 0xb5b PushI
	var_224_bool = IsFuncExist(var_215_object, var_222_string, var_223_int); // 0xb5c FuncExist
	if(var_224_bool == 0) goto Label_2916; // 0xb5d JumpB
	var_225_bool = 0; var_226_object = Obj(); // 0xb5e PushV
	var_226_object = var_215_object; // 0xb5f Mov
	func_2894(var_226_object); // 0xb60 NEW_2
	if(var_225_bool == 0) goto Label_2916; // 0xb62 JumpB
	var_221_bool = 1; // 0xb63 MovB
	
Label_2916:
	if(var_221_bool == 0) goto Label_2919; // 0xb64 JumpB
	var_214_bool = 0; // 0xb65 MovB
	return 4; // 0xb66 Return
	
Label_2919:
	GetScene(var_218_object); // 0xb67 Func
	var_229_bool = var_218_object == 0; // 0xb69 NullEq
	if(var_229_bool == 0) goto Label_2925; // 0xb6a JumpB
	var_214_bool = 0; // 0xb6b MovB
	return 4; // 0xb6c Return
	
Label_2925:
	GetScene(var_219_object); // 0xb6d ObjFunc
	var_230_bool = var_218_object != var_219_object; // 0xb6f Neq
	if(var_230_bool == 0) goto Label_2931; // 0xb70 JumpB
	var_214_bool = 0; // 0xb71 MovB
	return 4; // 0xb72 Return
	
Label_2931:
	var_214_bool = 1; // 0xb73 MovB
	return 4; // 0xb74 Return
}


func_1381(var_0_cvector, var_1_cvector, var_293_bool, var_294_object, var_295_float, var_296_float, var_297_bool, var_298_bool)
{
	var_299_bool = 0; var_300_bool = 0; var_301_object = Obj(); var_302_cvector = CVector(0,0,0); var_303_cvector = CVector(0,0,0); var_304_cvector = CVector(0,0,0); var_305_float = 0; var_306_object = Obj(); var_307_bool = 0; var_308_bool = 0; var_309_object = Obj(); var_310_cvector = CVector(0,0,0); var_311_cvector = CVector(0,0,0); var_312_cvector = CVector(0,0,0); var_313_float = 0; var_314_object = Obj(); // 0x565 PushV
	var_0_cvector = 0; // 0x566 TMovB
	var_1_cvector = var_294_object; // 0x567 TMov
	var_308_bool = var_298_bool; // 0x568 Mov
	
Label_1385:
	var_315_bool = 0; var_316_object = Obj(); // 0x569 PushV
	var_316_object = var_294_object; // 0x56a Mov
	func_1521(var_315_bool, var_316_object); // 0x56b NEW_2
	var_319_bool = var_315_bool == 0; // 0x56d Not
	if(var_319_bool == 0) goto Label_1393; // 0x56e JumpB
	var_293_bool = 0; // 0x56f MovB
	return 16; // 0x570 Return
	
Label_1393:
	GetPosition(var_310_cvector); // 0x571 ObjFunc
	GetPosition(var_311_cvector); // 0x573 Func
	var_312_cvector = var_310_cvector - var_311_cvector; // 0x575 Sub2
	var_313_float = var_312_cvector | var_312_cvector; // 0x576 Or2
	var_320_bool = 0; // 0x577 PushV
	var_320_bool = 0; // 0x578 MovB
	var_321_int = 0; // 0x579 PushI
	var_322_bool = var_296_float > var_321_int; // 0x57a GT
	if(var_322_bool == 0) goto Label_1408; // 0x57b JumpB
	var_323_float = var_296_float * var_296_float; // 0x57c Mult
	var_324_bool = var_313_float > var_323_float; // 0x57d GT
	if(var_324_bool == 0) goto Label_1408; // 0x57e JumpB
	var_320_bool = 1; // 0x57f MovB
	
Label_1408:
	if(var_320_bool == 0) goto Label_1413; // 0x580 JumpB
	Stop(); // 0x581 Func
	var_293_bool = 0; // 0x583 MovB
	return 16; // 0x584 Return
	
Label_1413:
	var_325_float = var_295_float * var_295_float; // 0x585 Mult
	var_326_bool = var_313_float > var_325_float; // 0x586 GT
	if(var_326_bool == 0) goto Label_1475; // 0x587 JumpB
	GetPFPosition(var_310_cvector); // 0x588 ObjFunc
	FindPathTo(var_314_object, var_310_cvector); // 0x58a Func
	var_327_bool = var_314_object != 0; // 0x58c NullNeq
	if(var_327_bool == 0) goto Label_1424; // 0x58d JumpB
	var_309_object = var_314_object; // 0x58e Mov
	var_314_object = 0; // 0x58f SetNull
	
Label_1424:
	var_328_bool = var_309_object != 0; // 0x590 NullNeq
	if(var_328_bool == 0) goto Label_1457; // 0x591 JumpB
	var_329_bool = var_308_bool; // 0x592 Push
	if(var_329_bool == 0) goto Label_1434; // 0x593 JumpB
	var_308_bool = 0; // 0x594 MovB
	RotatePath(var_309_object, var_307_bool); // 0x595 Func
	var_330_bool = var_307_bool == 0; // 0x597 Not
	if(var_330_bool == 0) goto Label_1434; // 0x598 JumpB
	goto Label_1481; // 0x599 Jump
	
Label_1481:
	var_293_bool = !var_0_cvector; // 0x5c9 Not2
	return 16; // 0x5ca Return
	
Label_1434:
	var_331_int = 0; // 0x59a PushI
	var_332_float = 0.3; // 0x59b PushF
	SetTimer(var_331_int, var_332_float); // 0x59c Func
	var_333_string = ""; // 0x59e PushV
	func_1528(var_333_string); // 0x59f NEW_2
	var_334_string = ""; // 0x5a1 PushV
	func_1530(var_334_string); // 0x5a2 NEW_2
	FollowPath(var_309_object, var_297_bool, var_307_bool, var_333_string, var_334_string); // 0x5a4 Func
	var_335_bool = var_307_bool == 0; // 0x5a6 Not
	if(var_335_bool == 0) goto Label_1455; // 0x5a7 JumpB
	var_336_cvector = var_0_cvector; // 0x5a8 PushT
	if(var_336_cvector == 0) goto Label_1453; // 0x5a9 JumpB
	var_309_object = 0; // 0x5aa SetNull
	goto Label_1481; // 0x5ab Jump
	
Label_1453:
	goto Label_1480; // 0x5ad Jump
	
Label_1480:
	goto Label_1385; // 0x5c8 Jump
	
Label_1455:
	var_309_object = 0; // 0x5af SetNull
	goto Label_1473; // 0x5b0 Jump
	
Label_1473:
	var_314_object = 0; // 0x5c1 SetNull
	goto Label_1479; // 0x5c2 Jump
	
Label_1479:
	var_309_object = 0; // 0x5c7 SetNull
	
Label_1457:
	var_337_int = 0; // 0x5b1 PushI
	KillTimer(var_337_int); // 0x5b2 Func
	var_338_float = 0.5; // 0x5b4 PushF
	Sleep(var_338_float, var_307_bool); // 0x5b5 Func
	var_339_bool = var_307_bool == 0; // 0x5b7 Not
	if(var_339_bool == 0) goto Label_1469; // 0x5b8 JumpB
	var_340_cvector = var_0_cvector; // 0x5b9 PushT
	if(var_340_cvector == 0) goto Label_1469; // 0x5ba JumpB
	var_309_object = 0; // 0x5bb SetNull
	goto Label_1481; // 0x5bc Jump
	
Label_1469:
	var_341_int = 0; // 0x5bd PushI
	var_342_float = 0.3; // 0x5be PushF
	SetTimer(var_341_int, var_342_float); // 0x5bf Func
	
Label_1475:
	var_343_int = 0; // 0x5c3 PushI
	KillTimer(var_343_int); // 0x5c4 Func
	goto Label_1481; // 0x5c6 Jump
}


func_2935(var_210_bool, var_211_object)
{
	var_212_int = 0; var_213_int = 0; // 0xb77 PushV
	var_214_bool = 0; var_215_object = Obj(); // 0xb78 PushV
	var_215_object = var_211_object; // 0xb79 Mov
	func_2899(var_214_bool, var_215_object); // 0xb7a NEW_2
	var_231_bool = var_214_bool == 0; // 0xb7c Not
	if(var_231_bool == 0) goto Label_2944; // 0xb7d JumpB
	var_210_bool = 0; // 0xb7e MovB
	return 2; // 0xb7f Return
	
Label_2944:
	var_232_bool = 0; var_233_object = Obj(); var_234_string = ""; // 0xb80 PushV
	var_233_object = var_211_object; // 0xb81 Mov
	var_234_string = "noaccess"; // 0xb82 MovS
	func_2809(var_232_bool, var_233_object, var_234_string); // 0xb83 NEW_2
	var_241_bool = var_232_bool == 0; // 0xb85 Not
	if(var_241_bool == 0) goto Label_2953; // 0xb86 JumpB
	var_210_bool = 1; // 0xb87 MovB
	return 2; // 0xb88 Return
	
Label_2953:
	var_242_string = "noaccess"; // 0xb89 PushS
	GetProperty(var_242_string, var_213_int); // 0xb8a ObjFunc
	var_243_int = 0; // 0xb8c PushI
	var_210_bool = var_213_int == var_243_int; // 0xb8d Eq2
	return 2; // 0xb8e Return
}


func_3456(var_21_bool, var_22_object)
{
	var_23_bool = 0; var_24_object = Obj(); // 0xd81 PushV
	var_24_object = var_22_object; // 0xd82 Mov
	func_2804(var_23_bool, var_24_object); // 0xd83 NEW_2
	if(var_23_bool == 0) goto Label_3469; // 0xd85 JumpB
	var_27_bool = 0; var_28_object = Obj(); // 0xd86 PushV
	var_28_object = var_22_object; // 0xd87 Mov
	func_3649(var_27_bool, var_28_object); // 0xd88 NEW_2
	var_21_bool = var_27_bool; // 0xd89 Mov
	return 0; // 0xd8b Return
	
Label_3469:
	var_35_bool = 0; var_36_object = Obj(); var_37_string = ""; // 0xd8d PushV
	var_36_object = var_22_object; // 0xd8e Mov
	var_37_string = "b9q03"; // 0xd8f MovS
	func_2809(var_35_bool, var_36_object, var_37_string); // 0xd90 NEW_2
	if(var_35_bool == 0) goto Label_3481; // 0xd92 JumpB
	var_44_bool = 0; var_45_object = Obj(); // 0xd93 PushV
	var_45_object = var_22_object; // 0xd94 Mov
	func_3649(var_44_bool, var_45_object); // 0xd95 NEW_2
	var_21_bool = var_44_bool; // 0xd96 Mov
	return 0; // 0xd98 Return
	
Label_3481:
	var_21_bool = 0; // 0xd99 MovB
	return 0; // 0xd9a Return
}


func_1925(var_913_bool)
{
	var_913_bool = 1; // 0x785 MovB
	return 0; // 0x786 Return
}


func_1927()
{
	StopAnimation(); // 0x787 Func
	StopGroup0(); // 0x789 Func
	return 0; // 0x78b Return
}


func_1932(var_926_bool, var_927_cvector, var_928_cvector, var_929_bool)
{
	var_931_float = GetByIndex(var_927_cvector, 1); // 0x78d PushE
	var_932_int = 30; // 0x78e PushI
	var_931_float = var_931_float + var_932_int; // 0x78f Add2
	SetByIndex(var_927_cvector, 1) = var_931_float; // 0x790 PopE
	var_933_bool = 0; var_934_cvector = CVector(0,0,0); var_935_cvector = CVector(0,0,0); var_936_float = 0; var_937_float = 0; var_938_bool = 0; var_939_bool = 0; // 0x791 PushV
	var_934_cvector = var_927_cvector; // 0x792 Mov
	var_935_cvector = var_928_cvector; // 0x793 Mov
	var_936_float = 100; // 0x794 MovI
	var_937_float = 4000; // 0x795 MovI
	var_938_bool = var_929_bool; // 0x796 Mov
	var_939_bool = 1; // 0x797 MovB
	func_2001(var_929_bool, var_933_bool, var_934_cvector, var_935_cvector, var_936_float, var_937_float, var_938_bool, var_939_bool); // 0x798 NEW_2
	var_926_bool = var_933_bool; // 0x799 Mov
	return 0; // 0x79b Return
}


func_2959(var_37_object)
{
	var_38_bool = 0; var_39_int = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_string = ""; var_45_bool = 0; var_46_int = 0; var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_string = ""; // 0xb8f PushV
	var_52_bool = var_37_object == 0; // 0xb90 NullEq
	if(var_52_bool == 0) goto Label_2963; // 0xb91 JumpB
	return 14; // 0xb92 Return
	
Label_2963:
	IsDead(var_45_bool); // 0xb93 Func
	var_53_bool = var_45_bool; // 0xb95 Push
	if(var_53_bool == 0) goto Label_2968; // 0xb96 JumpB
	return 14; // 0xb97 Return
	
Label_2968:
	GetSecondaryAnimationType(var_46_int); // 0xb98 Func
	var_54_int = 0; // 0xb9a PushI
	var_55_bool = var_46_int < var_54_int; // 0xb9b LT
	if(var_55_bool == 0) goto Label_2974; // 0xb9c JumpB
	return 14; // 0xb9d Return
	
Label_2974:
	GetPosition(var_47_cvector); // 0xb9e ObjFunc
	GetPosition(var_48_cvector); // 0xba0 Func
	GetDirection(var_49_cvector); // 0xba2 Func
	var_50_cvector = var_48_cvector - var_47_cvector; // 0xba4 Sub2
	var_56_float = GetByIndex(var_50_cvector, 0); // 0xba5 PushE
	var_57_float = GetByIndex(var_49_cvector, 0); // 0xba6 PushE
	var_58_float = var_56_float * var_57_float; // 0xba7 Mult
	var_59_float = GetByIndex(var_50_cvector, 2); // 0xba8 PushE
	var_60_float = GetByIndex(var_49_cvector, 2); // 0xba9 PushE
	var_61_float = var_59_float * var_60_float; // 0xbaa Mult
	var_62_int = var_58_float + var_61_float; // 0xbab Add
	var_63_int = 0; // 0xbac PushI
	var_64_bool = var_62_int >= var_63_int; // 0xbad GE
	if(var_64_bool == 0) goto Label_2993; // 0xbae JumpB
	var_51_string = "fhit"; // 0xbaf MovS
	goto Label_2994; // 0xbb0 Jump
	
Label_2994:
	var_65_string = "hit_react"; // 0xbb2 PushS
	var_66_string = "1"; // 0xbb3 PushS
	var_67_int = var_51_string + var_66_string; // 0xbb4 Add
	var_68_string = "2"; // 0xbb5 PushS
	var_69_int = var_51_string + var_68_string; // 0xbb6 Add
	var_70_int = -10; // 0xbb7 PushI
	FadeSecondaryAnimation(var_65_string, var_67_int, var_69_int, var_70_int); // 0xbb8 Func
	return 14; // 0xbba Return
	
Label_2993:
	var_51_string = "bhit"; // 0xbb1 MovS
}


func_2451(var_676_string)
{
	var_677_bool = 0; var_678_bool = 0; var_679_bool = 0; var_680_bool = 0; // 0x993 PushV
	WaitForAnimEnd(); // 0x994 Func
	var_681_bool = 0; // 0x996 PushV
	func_3096(var_681_bool); // 0x997 NEW_2
	var_682_bool = var_681_bool == 0; // 0x999 Not
	if(var_682_bool == 0) goto Label_2460; // 0x99a JumpB
	return 4; // 0x99b Return
	
Label_2460:
	var_683_string = "all"; // 0x99c PushS
	HasAnimation(var_679_bool, var_683_string, var_676_string); // 0x99d Func
	var_684_bool = var_679_bool == 0; // 0x99f Not
	if(var_684_bool == 0) goto Label_2466; // 0x9a0 JumpB
	return 4; // 0x9a1 Return
	
Label_2466:
	var_685_string = "all"; // 0x9a2 PushS
	PlayAnimation(var_685_string, var_676_string); // 0x9a3 Func
	WaitForAnimEnd(var_680_bool); // 0x9a5 Func
	return 4; // 0x9a7 Return
}


func_3483(var_42_bool)
{
	var_43_object = Obj(); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_float = 0; var_49_int = 0; var_50_cvector = CVector(0,0,0); var_51_float = 0; var_52_object = Obj(); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_float = 0; var_58_int = 0; var_59_cvector = CVector(0,0,0); var_60_float = 0; // 0xd9b PushV
	GetMainOutdoorScene(var_52_object); // 0xd9c Func
	GetPosition(var_53_cvector); // 0xd9e Func
	var_57_float = 4000000; // 0xda0 MovI
	var_58_int = 0; // 0xda1 MovI
	var_61_int = GlobalVars[1]; // 0xda2 PushGE
	var_61_int = 1; // 0xda3 MovI
	GlobalVars[1] = var_61_int; // 0xda4 PopGE
	
Label_3493:
	var_62_bool = 1; // 0xda5 PushB
	if(var_62_bool == 0) goto Label_3516; // 0xda6 JumpB
	var_63_string = "pt_b9q03_bonfire"; // 0xda7 PushS
	var_64_int = GlobalVars[1]; // 0xda8 PushGE
	var_65_int = var_63_string + var_64_int; // 0xda9 Add
	GetLocator(var_65_int, var_56_bool, var_54_cvector, var_55_cvector); // 0xdaa ObjFunc
	var_66_bool = var_56_bool == 0; // 0xdac Not
	if(var_66_bool == 0) goto Label_3503; // 0xdad JumpB
	goto Label_3516; // 0xdae Jump
	
Label_3516:
	var_67_int = GlobalVars[1]; // 0xdbc PushGE
	var_68_int = 1; // 0xdbd PushI
	var_67_int = var_58_int - var_68_int; // 0xdbe Sub2
	GlobalVars[1] = var_67_int; // 0xdbf PopGE
	var_69_int = GlobalVars[1]; // 0xdc0 PushGE
	var_70_int = -1; // 0xdc1 PushI
	var_71_bool = var_69_int == var_70_int; // 0xdc2 Eq
	if(var_71_bool == 0) goto Label_3526; // 0xdc3 JumpB
	var_42_bool = 0; // 0xdc4 MovB
	return 18; // 0xdc5 Return
	
Label_3526:
	var_72_string = "Bonfire index: "; // 0xdc6 PushS
	var_73_int = GlobalVars[1]; // 0xdc7 PushGE
	var_74_int = 1; // 0xdc8 PushI
	var_75_int = var_73_int + var_74_int; // 0xdc9 Add
	var_76_int = var_72_string + var_75_int; // 0xdca Add
	Trace(var_76_int); // 0xdcb Func
	var_77_int = GlobalVars[2]; // 0xdcd PushGE
	var_77_int = 0; // 0xdce MovI
	GlobalVars[2] = var_77_int; // 0xdcf PopGE
	
Label_3536:
	var_78_bool = 1; // 0xdd0 PushB
	if(var_78_bool == 0) goto Label_3559; // 0xdd1 JumpB
	var_79_string = "pt_b9q03_bonfire"; // 0xdd2 PushS
	var_80_int = GlobalVars[1]; // 0xdd3 PushGE
	var_81_int = 1; // 0xdd4 PushI
	var_82_int = var_80_int + var_81_int; // 0xdd5 Add
	var_83_int = var_79_string + var_82_int; // 0xdd6 Add
	var_84_string = "_patrol"; // 0xdd7 PushS
	var_85_int = var_83_int + var_84_string; // 0xdd8 Add
	var_86_int = GlobalVars[2]; // 0xdd9 PushGE
	var_87_int = 1; // 0xdda PushI
	var_88_int = var_86_int + var_87_int; // 0xddb Add
	var_89_int = var_85_int + var_88_int; // 0xddc Add
	GetLocator(var_89_int, var_56_bool, var_54_cvector, var_55_cvector); // 0xddd ObjFunc
	var_90_bool = var_56_bool == 0; // 0xddf Not
	if(var_90_bool == 0) goto Label_3554; // 0xde0 JumpB
	goto Label_3559; // 0xde1 Jump
	
Label_3559:
	var_91_string = "Bonfire pantrol point count: "; // 0xde7 PushS
	var_92_int = GlobalVars[2]; // 0xde8 PushGE
	var_93_int = var_91_string + var_92_int; // 0xde9 Add
	Trace(var_93_int); // 0xdea Func
	var_42_bool = 1; // 0xdec MovB
	return 18; // 0xded Return
	
Label_3554:
	var_94_int = GlobalVars[2]; // 0xde2 PushGE
	var_95_int = 1; // 0xde3 PushI
	var_94_int = var_94_int + var_95_int; // 0xde4 Add2
	GlobalVars[2] = var_94_int; // 0xde5 PopGE
	goto Label_3536; // 0xde6 Jump
	
Label_3503:
	var_59_cvector = var_53_cvector - var_54_cvector; // 0xdaf Sub2
	var_60_float = var_59_cvector | var_59_cvector; // 0xdb0 Or2
	var_96_bool = var_60_float < var_57_float; // 0xdb1 LT
	if(var_96_bool == 0) goto Label_3511; // 0xdb2 JumpB
	var_57_float = var_60_float; // 0xdb3 Mov
	var_97_int = GlobalVars[1]; // 0xdb4 PushGE
	var_58_int = var_97_int; // 0xdb5 Mov
	
Label_3511:
	var_98_int = GlobalVars[1]; // 0xdb7 PushGE
	var_99_int = 1; // 0xdb8 PushI
	var_98_int = var_98_int + var_99_int; // 0xdb9 Add2
	GlobalVars[1] = var_98_int; // 0xdba PopGE
	goto Label_3493; // 0xdbb Jump
}


func_2472()
{
	StopAnimation(); // 0x9a8 Func
	StopGroup0(); // 0x9aa Func
	return 0; // 0x9ac Return
}


func_2477(var_21_object)
{
	var_22_int = 1; // 0x9ae PushI
	var_23_int = GlobalVars[3]; // 0x9af PushGE
	var_24_bool = var_22_int == var_23_int; // 0x9b0 Eq
	if(var_24_bool == 0) goto Label_2486; // 0x9b1 JumpB
	var_25_bool = 0; // 0x9b2 PushV
	var_25_bool = 0; // 0x9b3 MovB
	func_3696(var_25_bool); // 0x9b4 NEW_2
	
Label_2486:
	var_34_int = 3; // 0x9b6 PushI
	var_35_int = GlobalVars[3]; // 0x9b7 PushGE
	var_36_bool = var_34_int == var_35_int; // 0x9b8 Eq
	if(var_36_bool == 0) goto Label_2494; // 0x9b9 JumpB
	var_37_bool = 0; // 0x9ba PushV
	var_37_bool = 0; // 0x9bb MovB
	func_3721(var_37_bool); // 0x9bc NEW_2
	
Label_2494:
	var_46_object = Obj(); var_47_string = ""; var_48_int = 0; var_49_int = 0; // 0x9be PushV
	var_50_object = Obj(); // 0x9bf PushV
	func_3164(var_50_object); // 0x9c0 NEW_2
	var_46_object = var_50_object; // 0x9c1 Mov
	var_47_string = "coffee"; // 0x9c3 MovS
	var_48_int = 1; // 0x9c4 MovI
	var_49_int = 3; // 0x9c5 MovI
	func_3112(var_47_string, var_48_int, var_49_int); // 0x9c6 NEW_2
	var_61_object = Obj(); var_62_string = ""; var_63_int = 0; var_64_int = 0; // 0x9c8 PushV
	var_65_object = Obj(); // 0x9c9 PushV
	func_3164(var_65_object); // 0x9ca NEW_2
	var_61_object = var_65_object; // 0x9cb Mov
	var_62_string = "tvirin"; // 0x9cd MovS
	var_63_int = 1; // 0x9ce MovI
	var_64_int = 6; // 0x9cf MovI
	func_3112(var_62_string, var_63_int, var_64_int); // 0x9d0 NEW_2
	var_66_object = Obj(); var_67_string = ""; var_68_int = 0; var_69_int = 0; // 0x9d2 PushV
	var_70_object = Obj(); // 0x9d3 PushV
	func_3164(var_70_object); // 0x9d4 NEW_2
	var_66_object = var_70_object; // 0x9d5 Mov
	var_67_string = "silver_ring"; // 0x9d7 MovS
	var_68_int = 1; // 0x9d8 MovI
	var_69_int = 9; // 0x9d9 MovI
	func_3112(var_67_string, var_68_int, var_69_int); // 0x9da NEW_2
	var_71_object = Obj(); var_72_string = ""; var_73_int = 0; var_74_int = 0; // 0x9dc PushV
	var_75_object = Obj(); // 0x9dd PushV
	func_3164(var_75_object); // 0x9de NEW_2
	var_71_object = var_75_object; // 0x9df Mov
	var_72_string = "gold_ring"; // 0x9e1 MovS
	var_73_int = 1; // 0x9e2 MovI
	var_74_int = 8; // 0x9e3 MovI
	func_3112(var_72_string, var_73_int, var_74_int); // 0x9e4 NEW_2
	var_76_object = Obj(); var_77_string = ""; var_78_int = 0; var_79_int = 0; // 0x9e6 PushV
	var_80_object = Obj(); // 0x9e7 PushV
	func_3164(var_80_object); // 0x9e8 NEW_2
	var_76_object = var_80_object; // 0x9e9 Mov
	var_77_string = "bracelet"; // 0x9eb MovS
	var_78_int = 1; // 0x9ec MovI
	var_79_int = 6; // 0x9ed MovI
	func_3112(var_77_string, var_78_int, var_79_int); // 0x9ee NEW_2
	var_81_object = Obj(); var_82_string = ""; var_83_int = 0; var_84_int = 0; // 0x9f0 PushV
	var_85_object = Obj(); // 0x9f1 PushV
	func_3164(var_85_object); // 0x9f2 NEW_2
	var_81_object = var_85_object; // 0x9f3 Mov
	var_82_string = "watch"; // 0x9f5 MovS
	var_83_int = 1; // 0x9f6 MovI
	var_84_int = 9; // 0x9f7 MovI
	func_3112(var_82_string, var_83_int, var_84_int); // 0x9f8 NEW_2
	var_86_object = Obj(); var_87_string = ""; var_88_int = 0; var_89_int = 0; // 0x9fa PushV
	var_90_object = Obj(); // 0x9fb PushV
	func_3164(var_90_object); // 0x9fc NEW_2
	var_86_object = var_90_object; // 0x9fd Mov
	var_87_string = "beads"; // 0x9ff MovS
	var_88_int = 1; // 0xa00 MovI
	var_89_int = 9; // 0xa01 MovI
	func_3112(var_87_string, var_88_int, var_89_int); // 0xa02 NEW_2
	var_91_object = Obj(); var_92_string = ""; var_93_int = 0; var_94_int = 0; // 0xa04 PushV
	var_95_object = Obj(); // 0xa05 PushV
	func_3164(var_95_object); // 0xa06 NEW_2
	var_91_object = var_95_object; // 0xa07 Mov
	var_92_string = "ear_ring"; // 0xa09 MovS
	var_93_int = 1; // 0xa0a MovI
	var_94_int = 9; // 0xa0b MovI
	func_3112(var_92_string, var_93_int, var_94_int); // 0xa0c NEW_2
	var_96_object = Obj(); var_97_string = ""; var_98_int = 0; var_99_int = 0; // 0xa0e PushV
	var_100_object = Obj(); // 0xa0f PushV
	func_3164(var_100_object); // 0xa10 NEW_2
	var_96_object = var_100_object; // 0xa11 Mov
	var_97_string = "feromicin"; // 0xa13 MovS
	var_98_int = 1; // 0xa14 MovI
	var_99_int = 10; // 0xa15 MovI
	func_3112(var_97_string, var_98_int, var_99_int); // 0xa16 NEW_2
	func_3287(); // 0xa19 NEW_2
	var_121_object = Obj(); // 0xa1b PushV
	var_121_object = var_21_object; // 0xa1c Mov
	func_2600(var_121_object); // 0xa1d NEW_2
	return 0; // 0xa1f Return
}


func_441(var_7_float, var_139_object)
{
	var_7_float = var_139_object; // 0x1ba TMov
	var_149_int = 1; // 0x1bb PushI
	var_150_int = 1; // 0x1bc PushI
	SetTimer(var_149_int, var_150_int); // 0x1bd Func
	var_151_object = Obj(); var_152_bool = 0; var_153_float = 0; // 0x1bf PushV
	var_151_object = var_139_object; // 0x1c0 Mov
	var_152_bool = 0; // 0x1c1 MovB
	var_153_float = 150.0; // 0x1c2 MovF
	func_515(var_144_bool, var_145_bool, var_146_float, var_147_int, var_148_object, var_139_object, var_151_object, var_152_bool, var_153_float); // 0x1c3 NEW_2
	var_667_int = 1; // 0x1c5 PushI
	KillTimer(var_667_int); // 0x1c6 Func
	return 0; // 0x1c8 Return
}


func_3003(var_24_object, var_25_int, var_26_float)
{
	var_27_cvector = CVector(0,0,0); var_28_object = Obj(); var_29_int = 0; var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_int = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_object = Obj(); var_38_int = 0; var_39_bool = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_int = 0; var_43_int = 0; var_44_cvector = CVector(0,0,0); // 0xbbb PushV
	var_45_bool = 0; // 0xbbc PushV
	var_45_bool = 0; // 0xbbd MovB
	var_46_bool = 0; // 0xbbe PushV
	var_46_bool = 0; // 0xbbf MovB
	var_47_object = var_24_object; // 0xbc0 Push
	if(var_47_object == 0) goto Label_3014; // 0xbc1 JumpB
	var_48_int = 4; // 0xbc2 PushI
	var_49_bool = var_25_int != var_48_int; // 0xbc3 Neq
	if(var_49_bool == 0) goto Label_3014; // 0xbc4 JumpB
	var_46_bool = 1; // 0xbc5 MovB
	
Label_3014:
	if(var_46_bool == 0) goto Label_3019; // 0xbc6 JumpB
	var_50_int = 5; // 0xbc7 PushI
	var_51_bool = var_25_int != var_50_int; // 0xbc8 Neq
	if(var_51_bool == 0) goto Label_3019; // 0xbc9 JumpB
	var_45_bool = 1; // 0xbca MovB
	
Label_3019:
	if(var_45_bool == 0) goto Label_3066; // 0xbcb JumpB
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0xbcc PushV
	var_54_cvector = CVector(0,0,0); var_55_object = Obj(); // 0xbcd PushV
	var_55_object = var_24_object; // 0xbce Mov
	func_2797(var_55_object); // 0xbcf NEW_2
	var_53_cvector = var_54_cvector; // 0xbd0 Mov
	func_3170(var_52_cvector, var_53_cvector); // 0xbd2 NEW_2
	var_36_cvector = var_52_cvector; // 0xbd3 Mov
	CreateVectorVector(var_37_object); // 0xbd5 Func
	var_38_int = 1; // 0xbd7 MovI
	
Label_3032:
	var_65_string = "hit"; // 0xbd8 PushS
	var_66_int = var_65_string + var_38_int; // 0xbd9 Add
	GetGeometryLocator(var_66_int, var_39_bool, var_40_cvector, var_41_cvector); // 0xbda Func
	var_67_bool = var_39_bool == 0; // 0xbdc Not
	if(var_67_bool == 0) goto Label_3039; // 0xbdd JumpB
	goto Label_3048; // 0xbde Jump
	
Label_3048:
	size(var_42_int); // 0xbe8 ObjFunc
	var_68_int = var_42_int; // 0xbea Push
	if(var_68_int == 0) goto Label_3065; // 0xbeb JumpB
	irand(var_43_int, var_42_int); // 0xbec Func
	get(var_44_cvector, var_43_int); // 0xbee ObjFunc
	var_69_object = Obj(); var_70_int = 0; var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); // 0xbf0 PushV
	var_69_object = var_24_object; // 0xbf1 Mov
	var_70_int = var_25_int; // 0xbf2 Mov
	var_71_float = var_26_float; // 0xbf3 Mov
	var_72_cvector = var_44_cvector; // 0xbf4 Mov
	var_73_cvector = -var_36_cvector; // 0xbf5 Neg2
	func_3071(var_71_float, var_72_cvector, var_73_cvector); // 0xbf6 NEW_2
	return 18; // 0xbf8 Return
	
Label_3065:
	var_37_object = 0; // 0xbf9 SetNull
	
Label_3066:
	var_114_object = Obj(); // 0xbfa PushV
	var_114_object = var_24_object; // 0xbfb Mov
	func_2959(var_114_object); // 0xbfc NEW_2
	return 18; // 0xbfe Return
	
Label_3039:
	var_115_int = var_41_cvector | var_36_cvector; // 0xbdf Or
	var_116_float = 0.70711; // 0xbe0 PushF
	var_117_bool = var_115_int >= var_116_float; // 0xbe1 GE
	if(var_117_bool == 0) goto Label_3045; // 0xbe2 JumpB
	add(var_40_cvector); // 0xbe3 ObjFunc
	
Label_3045:
	var_118_int = 1; // 0xbe5 PushI
	var_38_int = var_38_int + var_118_int; // 0xbe6 Add2
	goto Label_3032; // 0xbe7 Jump
}


func_457(var_538_float)
{
	var_538_float = 0.1; // 0x1ca MovF
	return 0; // 0x1cb Return
}


func_1483(var_0_cvector, var_1_cvector, var_39_int)
{
	var_40_int = 0; // 0x5cc PushI
	var_41_bool = var_39_int != var_40_int; // 0x5cd Neq
	if(var_41_bool == 0) goto Label_1488; // 0x5ce JumpB
	return 0; // 0x5cf Return
	
Label_1488:
	var_42_bool = 0; var_43_object = Obj(); // 0x5d0 PushV
	var_43_object = var_1_cvector; // 0x5d1 MovT
	func_1521(var_42_bool, var_43_object); // 0x5d2 NEW_2
	var_78_bool = var_42_bool == 0; // 0x5d4 Not
	if(var_78_bool == 0) goto Label_1495; // 0x5d5 JumpB
	var_0_cvector = 1; // 0x5d6 TMovB
	
Label_1495:
	var_79_int = 0; // 0x5d7 PushI
	KillTimer(var_79_int); // 0x5d8 Func
	Stop(); // 0x5da Func
	return 0; // 0x5dc Return
}


func_460(var_545_int)
{
	var_545_int = 0; // 0x1cd MovI
	return 0; // 0x1ce Return
}


func_463(var_602_int)
{
	var_603_int = 0; // 0x1cf PushV
	func_3774(var_603_int); // 0x1d0 NEW_2
	var_602_int = var_603_int; // 0x1d1 Mov
	return 0; // 0x1d3 Return
}


func_1999(var_956_bool)
{
	var_956_bool = 1; // 0x7cf MovB
	return 0; // 0x7d0 Return
}


func_2001(var_0_cvector, var_933_bool, var_934_cvector, var_935_cvector, var_936_float, var_937_float, var_938_bool, var_939_bool)
{
	var_940_bool = 0; var_941_bool = 0; var_942_object = Obj(); var_943_cvector = CVector(0,0,0); var_944_cvector = CVector(0,0,0); var_945_cvector = CVector(0,0,0); var_946_float = 0; var_947_object = Obj(); var_948_bool = 0; var_949_bool = 0; var_950_object = Obj(); var_951_cvector = CVector(0,0,0); var_952_cvector = CVector(0,0,0); var_953_cvector = CVector(0,0,0); var_954_float = 0; var_955_object = Obj(); // 0x7d1 PushV
	var_0_cvector = 0; // 0x7d2 TMovB
	var_949_bool = var_939_bool; // 0x7d3 Mov
	
Label_2004:
	var_956_bool = 0; // 0x7d4 PushV
	func_1999(var_956_bool); // 0x7d5 NEW_2
	var_957_bool = var_956_bool == 0; // 0x7d7 Not
	if(var_957_bool == 0) goto Label_2011; // 0x7d8 JumpB
	var_933_bool = 0; // 0x7d9 MovB
	return 16; // 0x7da Return
	
Label_2011:
	var_951_cvector = var_934_cvector; // 0x7db Mov
	GetPosition(var_952_cvector); // 0x7dc Func
	var_953_cvector = var_951_cvector - var_952_cvector; // 0x7de Sub2
	var_954_float = var_953_cvector | var_953_cvector; // 0x7df Or2
	var_958_bool = 0; // 0x7e0 PushV
	var_958_bool = 0; // 0x7e1 MovB
	var_959_int = 0; // 0x7e2 PushI
	var_960_bool = var_937_float > var_959_int; // 0x7e3 GT
	if(var_960_bool == 0) goto Label_2025; // 0x7e4 JumpB
	var_961_float = var_937_float * var_937_float; // 0x7e5 Mult
	var_962_bool = var_954_float > var_961_float; // 0x7e6 GT
	if(var_962_bool == 0) goto Label_2025; // 0x7e7 JumpB
	var_958_bool = 1; // 0x7e8 MovB
	
Label_2025:
	if(var_958_bool == 0) goto Label_2030; // 0x7e9 JumpB
	Stop(); // 0x7ea Func
	var_933_bool = 0; // 0x7ec MovB
	return 16; // 0x7ed Return
	
Label_2030:
	var_963_float = var_936_float * var_936_float; // 0x7ee Mult
	var_964_bool = var_954_float > var_963_float; // 0x7ef GT
	if(var_964_bool == 0) goto Label_2090; // 0x7f0 JumpB
	FindPathTo(var_955_object, var_951_cvector); // 0x7f1 Func
	var_965_bool = var_955_object != 0; // 0x7f3 NullNeq
	if(var_965_bool == 0) goto Label_2039; // 0x7f4 JumpB
	var_950_object = var_955_object; // 0x7f5 Mov
	var_955_object = 0; // 0x7f6 SetNull
	
Label_2039:
	var_966_bool = var_950_object != 0; // 0x7f7 NullNeq
	if(var_966_bool == 0) goto Label_2072; // 0x7f8 JumpB
	var_967_bool = var_949_bool; // 0x7f9 Push
	if(var_967_bool == 0) goto Label_2049; // 0x7fa JumpB
	var_949_bool = 0; // 0x7fb MovB
	RotatePath(var_950_object, var_948_bool); // 0x7fc Func
	var_968_bool = var_948_bool == 0; // 0x7fe Not
	if(var_968_bool == 0) goto Label_2049; // 0x7ff JumpB
	goto Label_2096; // 0x800 Jump
	
Label_2096:
	var_969_bool = var_0_cvector == 0; // 0x830 Not
	if(var_969_bool == 0) goto Label_2102; // 0x831 JumpB
	var_970_float = GetByIndex(var_935_cvector, 0); // 0x832 PushE
	var_971_float = GetByIndex(var_935_cvector, 2); // 0x833 PushE
	RotateAsync(var_970_float, var_971_float); // 0x834 Func
	
Label_2102:
	var_933_bool = !var_0_cvector; // 0x836 Not2
	return 16; // 0x837 Return
	
Label_2049:
	var_972_int = 0; // 0x801 PushI
	var_973_float = 0.3; // 0x802 PushF
	SetTimer(var_972_int, var_973_float); // 0x803 Func
	var_974_string = ""; // 0x805 PushV
	func_2141(var_974_string); // 0x806 NEW_2
	var_975_string = ""; // 0x808 PushV
	func_2143(var_975_string); // 0x809 NEW_2
	FollowPath(var_950_object, var_938_bool, var_948_bool, var_974_string, var_975_string); // 0x80b Func
	var_976_bool = var_948_bool == 0; // 0x80d Not
	if(var_976_bool == 0) goto Label_2070; // 0x80e JumpB
	var_977_cvector = var_0_cvector; // 0x80f PushT
	if(var_977_cvector == 0) goto Label_2068; // 0x810 JumpB
	var_950_object = 0; // 0x811 SetNull
	goto Label_2096; // 0x812 Jump
	
Label_2068:
	goto Label_2095; // 0x814 Jump
	
Label_2095:
	goto Label_2004; // 0x82f Jump
	
Label_2070:
	var_950_object = 0; // 0x816 SetNull
	goto Label_2088; // 0x817 Jump
	
Label_2088:
	var_955_object = 0; // 0x828 SetNull
	goto Label_2094; // 0x829 Jump
	
Label_2094:
	var_950_object = 0; // 0x82e SetNull
	
Label_2072:
	var_978_int = 0; // 0x818 PushI
	KillTimer(var_978_int); // 0x819 Func
	var_979_float = 0.5; // 0x81b PushF
	Sleep(var_979_float, var_948_bool); // 0x81c Func
	var_980_bool = var_948_bool == 0; // 0x81e Not
	if(var_980_bool == 0) goto Label_2084; // 0x81f JumpB
	var_981_cvector = var_0_cvector; // 0x820 PushT
	if(var_981_cvector == 0) goto Label_2084; // 0x821 JumpB
	var_950_object = 0; // 0x822 SetNull
	goto Label_2096; // 0x823 Jump
	
Label_2084:
	var_982_int = 0; // 0x824 PushI
	var_983_float = 0.3; // 0x825 PushF
	SetTimer(var_982_int, var_983_float); // 0x826 Func
	
Label_2090:
	var_984_int = 0; // 0x82a PushI
	KillTimer(var_984_int); // 0x82b Func
	goto Label_2096; // 0x82d Jump
}


func_993(var_631_bool, var_632_float)
{
	var_633_float = 0; var_634_bool = 0; var_635_float = 0; var_636_bool = 0; // 0x3e1 PushV
	rand(var_635_float); // 0x3e2 Func
	var_637_bool = var_635_float < var_632_float; // 0x3e4 LT
	if(var_637_bool == 0) goto Label_1013; // 0x3e5 JumpB
	
Label_998:
	IsAnimationPlaying(var_636_bool); // 0x3e6 Func
	var_638_bool = var_636_bool == 0; // 0x3e8 Not
	if(var_638_bool == 0) goto Label_1003; // 0x3e9 JumpB
	goto Label_1012; // 0x3ea Jump
	
Label_1012:
	goto Label_1018; // 0x3f4 Jump
	
Label_1018:
	var_631_bool = 0; // 0x3fa MovB
	return 4; // 0x3fb Return
	
Label_1003:
	var_639_bool = 0; // 0x3eb PushV
	func_1103(var_639_bool); // 0x3ec NEW_2
	if(var_639_bool == 0) goto Label_1009; // 0x3ee JumpB
	var_631_bool = 1; // 0x3ef MovB
	return 4; // 0x3f0 Return
	
Label_1009:
	sync(); // 0x3f1 Func
	goto Label_998; // 0x3f3 Jump
	
Label_1013:
	WaitForAnimEnd(); // 0x3f5 Func
	func_1207(var_636_bool); // 0x3f8 NEW_2
}


func_1505(var_0_cvector)
{
	var_0_cvector = 1; // 0x5e1 TMovB
	var_24_int = 0; // 0x5e2 PushI
	KillTimer(var_24_int); // 0x5e3 Func
	Stop(); // 0x5e5 Func
	return 0; // 0x5e7 Return
}


func_3567(var_117_bool, var_118_int)
{
	var_119_int = GlobalVars[3]; // 0xdf0 PushGE
	var_120_bool = var_118_int == var_119_int; // 0xdf1 Eq
	if(var_120_bool == 0) goto Label_3573; // 0xdf2 JumpB
	var_117_bool = 0; // 0xdf3 MovB
	return 0; // 0xdf4 Return
	
Label_3573:
	var_121_int = 0; // 0xdf5 PushI
	var_122_bool = var_118_int == var_121_int; // 0xdf6 Eq
	if(var_122_bool == 0) goto Label_3585; // 0xdf7 JumpB
	var_123_int = GlobalVars[4]; // 0xdf8 PushGE
	var_124_int = GlobalVars[3]; // 0xdf9 PushGE
	var_123_int = var_124_int; // 0xdfa Mov
	GlobalVars[4] = var_123_int; // 0xdfc PopGE
	var_125_string = "changing state to c_iStateWaitForLoad"; // 0xdfd PushS
	Trace(var_125_string); // 0xdfe Func
	goto Label_3608; // 0xe00 Jump
	
Label_3608:
	var_126_int = GlobalVars[3]; // 0xe18 PushGE
	var_126_int = var_118_int; // 0xe19 Mov
	GlobalVars[3] = var_126_int; // 0xe1a PopGE
	var_117_bool = 1; // 0xe1b MovB
	return 0; // 0xe1c Return
	
Label_3585:
	var_127_int = 1; // 0xe01 PushI
	var_128_bool = var_118_int == var_127_int; // 0xe02 Eq
	if(var_128_bool == 0) goto Label_3592; // 0xe03 JumpB
	var_129_string = "changing state to c_iStateHeatHands"; // 0xe04 PushS
	Trace(var_129_string); // 0xe05 Func
	goto Label_3608; // 0xe07 Jump
	
Label_3592:
	var_130_int = 2; // 0xe08 PushI
	var_131_bool = var_118_int == var_130_int; // 0xe09 Eq
	if(var_131_bool == 0) goto Label_3599; // 0xe0a JumpB
	var_132_string = "changing state to c_iStateIdle"; // 0xe0b PushS
	Trace(var_132_string); // 0xe0c Func
	goto Label_3608; // 0xe0e Jump
	
Label_3599:
	var_133_int = 3; // 0xe0f PushI
	var_134_bool = var_118_int == var_133_int; // 0xe10 Eq
	if(var_134_bool == 0) goto Label_3606; // 0xe11 JumpB
	var_135_string = "changing state to c_iStatePatrol"; // 0xe12 PushS
	Trace(var_135_string); // 0xe13 Func
	goto Label_3608; // 0xe15 Jump
	
Label_3606:
	var_117_bool = 0; // 0xe16 MovB
	return 0; // 0xe17 Return
}


func_1521(var_315_bool, var_316_object)
{
	var_317_bool = 0; var_318_object = Obj(); // 0x5f2 PushV
	var_318_object = var_316_object; // 0x5f3 Mov
	func_2935(var_317_bool, var_318_object); // 0x5f4 NEW_2
	var_315_bool = var_317_bool; // 0x5f5 Mov
	return 0; // 0x5f7 Return
}


func_1528(var_333_string)
{
	var_333_string = "walk"; // 0x5f8 MovS
	return 0; // 0x5f9 Return
}


func_1530(var_334_string)
{
	var_334_string = "run"; // 0x5fa MovS
	return 0; // 0x5fb Return
}


func_1020(var_0_cvector, var_427_bool, var_428_float)
{
	var_429_bool = 0; var_430_cvector = CVector(0,0,0); var_431_cvector = CVector(0,0,0); var_432_cvector = CVector(0,0,0); var_433_float = 0; var_434_bool = 0; var_435_cvector = CVector(0,0,0); var_436_cvector = CVector(0,0,0); var_437_cvector = CVector(0,0,0); var_438_float = 0; // 0x3fc PushV
	
Label_1021:
	IsAnimationPlaying(var_434_bool); // 0x3fd Func
	var_439_bool = var_434_bool == 0; // 0x3ff Not
	if(var_439_bool == 0) goto Label_1026; // 0x400 JumpB
	goto Label_1064; // 0x401 Jump
	
Label_1064:
	func_1207(var_438_float); // 0x429 NEW_2
	var_427_bool = 0; // 0x42b MovB
	return 10; // 0x42c Return
	
Label_1026:
	var_440_bool = 0; // 0x402 PushV
	func_1103(var_440_bool); // 0x403 NEW_2
	if(var_440_bool == 0) goto Label_1032; // 0x405 JumpB
	var_427_bool = 1; // 0x406 MovB
	return 10; // 0x407 Return
	
Label_1032:
	var_485_bool = 0; // 0x408 PushV
	var_485_bool = 1; // 0x409 MovB
	var_486_bool = 0; var_487_object = Obj(); // 0x40a PushV
	var_487_object = var_0_cvector; // 0x40b MovT
	func_2935(var_486_bool, var_487_object); // 0x40c NEW_2
	var_488_bool = var_486_bool == 0; // 0x40e Not
	if(var_488_bool == 0) goto Label_1043; // 0x40f JumpB
	var_489_int = var_4_int; // 0x410 PushT
	if(var_489_int == 0) goto Label_1043; // 0x411 JumpB
	var_485_bool = 0; // 0x412 MovB
	
Label_1043:
	if(var_485_bool == 0) goto Label_1046; // 0x413 JumpB
	var_427_bool = 0; // 0x414 MovB
	return 10; // 0x415 Return
	
Label_1046:
	GetPFPosition(var_435_cvector); // 0x416 TObjFunc
	GetPFPosition(var_436_cvector); // 0x418 Func
	var_437_cvector = var_435_cvector - var_436_cvector; // 0x41a Sub2
	var_438_float = var_437_cvector | var_437_cvector; // 0x41b Or2
	var_490_float = var_428_float * var_428_float; // 0x41c Mult
	var_491_bool = var_438_float < var_490_float; // 0x41d LT
	if(var_491_bool == 0) goto Label_1061; // 0x41e JumpB
	var_492_bool = 0; var_493_float = 0; // 0x41f PushV
	var_493_float = var_428_float; // 0x420 Mov
	func_847(var_438_float, var_492_bool, var_493_float); // 0x421 NEW_2
	var_427_bool = 1; // 0x423 MovB
	return 10; // 0x424 Return
	
Label_1061:
	sync(); // 0x425 Func
	goto Label_1021; // 0x427 Jump
}


func_3071(var_26_object, var_29_cvector, var_30_cvector)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); var_34_object = Obj(); // 0xbff PushV
	GetScene(var_33_object); // 0xc00 Func
	var_35_string = "scripted"; // 0xc02 PushS
	var_36_string = "blood_dir.xml"; // 0xc03 PushS
	AddActorByType(var_34_object, var_35_string, var_33_object, var_29_cvector, var_30_cvector, var_36_string); // 0xc04 Func
	var_37_object = Obj(); // 0xc06 PushV
	var_37_object = var_26_object; // 0xc07 Mov
	func_2959(var_37_object); // 0xc08 NEW_2
	return 4; // 0xc0a Return
}


