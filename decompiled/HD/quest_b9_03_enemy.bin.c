task_1_event_7(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_bool, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x1d8 PushV
	var_23_int = 1; // 0x1d9 PushI
	var_24_bool = var_20_bool == var_23_int; // 0x1da Eq
	if(var_24_bool == 0) goto Label_489; // 0x1db JumpB
	GetMainOutdoorScene(var_22_object); // 0x1dc Func
	var_25_string = "b9q03_helpme"; // 0x1de PushS
	var_26_int = GlobalVars[1]; // 0x1df PushGE
	var_27_int = 1; // 0x1e0 PushI
	var_28_int = var_26_int + var_27_int; // 0x1e1 Add
	var_29_int = var_25_string + var_28_int; // 0x1e2 Add
	BroadcastMessage(var_29_int, var_17_bool, var_22_object); // 0x1e3 Func
	var_30_string = "helpme timer"; // 0x1e5 PushS
	Trace(var_30_string); // 0x1e6 Func
	var_22_object = 0; // 0x1e8 SetNull
	
Label_489:
	return 2; // 0x1e9 Return
}


task_1_event_1(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_bool, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_bool = 0; // 0x1eb PushV
	var_21_bool = 0; // 0x1ec MovB
	var_22_bool = 0; var_23_object = Obj(); // 0x1ed PushV
	var_23_object = var_20_bool; // 0x1ee Mov
	func_2808(var_22_bool, var_23_object); // 0x1ef NEW_2
	if(var_22_bool == 0) goto Label_502; // 0x1f1 JumpB
	var_26_object = GlobalVars[8]; // 0x1f2 PushGE
	var_27_bool = var_26_object != var_20_bool; // 0x1f3 Neq
	if(var_27_bool == 0) goto Label_502; // 0x1f4 JumpB
	var_21_bool = 1; // 0x1f5 MovB
	
Label_502:
	if(var_21_bool == 0) goto Label_510; // 0x1f6 JumpB
	func_769(var_20_bool); // 0x1f8 NEW_2
	var_28_bool = 0; var_29_object = Obj(); // 0x1fa PushV
	var_29_object = var_20_bool; // 0x1fb Mov
	func_3701(var_28_bool, var_29_object); // 0x1fc NEW_2
	
Label_510:
	return 0; // 0x1fe Return
}


task_1_event_6(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	func_769(var_19_bool); // 0x200 NEW_2
	var_20_bool = 0; var_21_int = 0; // 0x202 PushV
	var_21_int = 0; // 0x203 MovI
	func_3601(var_20_bool, var_21_int); // 0x204 NEW_2
	return 0; // 0x206 Return
}


task_2_event_7(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x4e1 PushV
	var_23_int = 2; // 0x4e2 PushI
	var_24_bool = var_20_bool == var_23_int; // 0x4e3 Eq
	if(var_24_bool == 0) goto Label_1267; // 0x4e4 JumpB
	GetMainOutdoorScene(var_22_object); // 0x4e5 Func
	var_25_string = "b9q03_helpme"; // 0x4e7 PushS
	var_26_int = GlobalVars[1]; // 0x4e8 PushGE
	var_27_int = 1; // 0x4e9 PushI
	var_28_int = var_26_int + var_27_int; // 0x4ea Add
	var_29_int = var_25_string + var_28_int; // 0x4eb Add
	BroadcastMessage(var_29_int, var_21_object, var_22_object); // 0x4ec Func
	var_30_string = "helpme timer"; // 0x4ee PushS
	Trace(var_30_string); // 0x4ef Func
	var_22_object = 0; // 0x4f1 SetNull
	goto Label_1271; // 0x4f2 Jump
	
Label_1271:
	return 2; // 0x4f7 Return
	
Label_1267:
	var_31_int = 0; // 0x4f3 PushV
	var_31_int = var_20_bool; // 0x4f4 Mov
	func_1329(var_22_object, var_31_int); // 0x4f5 NEW_2
}


task_2_event_6(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	func_1343(var_19_bool); // 0x4f9 NEW_2
	var_24_bool = 0; var_25_int = 0; // 0x4fb PushV
	var_25_int = 0; // 0x4fc MovI
	func_3601(var_24_bool, var_25_int); // 0x4fd NEW_2
	return 0; // 0x4ff Return
}


task_2_event_1(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_object, var_15_bool, var_16_object, var_17_bool, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_bool = 0; // 0x54d PushV
	var_21_bool = 0; // 0x54e MovB
	var_22_bool = var_1_cvector == var_20_bool; // 0x54f Eq
	if(var_22_bool == 0) goto Label_1364; // 0x550 JumpB
	var_23_bool = var_2_object == 0; // 0x551 Not
	if(var_23_bool == 0) goto Label_1364; // 0x552 JumpB
	var_21_bool = 1; // 0x553 MovB
	
Label_1364:
	if(var_21_bool == 0) goto Label_1370; // 0x554 JumpB
	var_2_object = 1; // 0x555 TMovB
	var_24_object = Obj(); // 0x556 PushV
	var_24_object = var_20_bool; // 0x557 Mov
	func_3105(var_24_object); // 0x558 NEW_2
	
Label_1370:
	return 0; // 0x55a Return
}


task_2_event_2(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_object, var_15_bool, var_16_object, var_17_bool, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_bool = 0; // 0x55c PushV
	var_21_bool = 0; // 0x55d MovB
	var_22_bool = var_1_cvector == var_20_bool; // 0x55e Eq
	if(var_22_bool == 0) goto Label_1379; // 0x55f JumpB
	var_23_object = var_2_object; // 0x560 PushT
	if(var_23_object == 0) goto Label_1379; // 0x561 JumpB
	var_21_bool = 1; // 0x562 MovB
	
Label_1379:
	if(var_21_bool == 0) goto Label_1384; // 0x563 JumpB
	var_2_object = 0; // 0x564 TMovB
	var_24_string = "head"; // 0x565 PushS
	UnlookAsync(var_24_string); // 0x566 Func
	
Label_1384:
	return 0; // 0x568 Return
}


task_2_event_10(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_object, var_15_bool, var_16_object, var_17_bool, var_18_bool, var_19_bool, var_20_bool)
{
	RequestClearPath(var_20_bool); // 0x5e2 Func
	return 0; // 0x5e4 Return
}


task_2_event_41(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_object, var_15_bool, var_16_object, var_17_bool, var_18_bool, var_19_bool, var_20_bool)
{
	func_1343(var_20_bool); // 0x5ee NEW_2
	var_25_object = Obj(); // 0x5f0 PushV
	var_25_object = var_20_bool; // 0x5f1 Mov
	func_3800(); // 0x5f2 NEW_2
	return 0; // 0x5f4 Return
}


task_3_event_6(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	func_1768(var_19_bool); // 0x628 NEW_2
	var_2_object = 1; // 0x62a TMovB
	var_21_bool = 0; var_22_int = 0; // 0x62b PushV
	var_22_int = 0; // 0x62c MovI
	func_3601(var_21_bool, var_22_int); // 0x62d NEW_2
	return 0; // 0x62f Return
}


task_3_event_42(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_string, var_19_bool, var_20_bool, var_21_bool)
{
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x631 PushV
	var_23_object = var_20_bool; // 0x632 Mov
	var_24_string = var_21_bool; // 0x633 Mov
	func_3330(var_22_bool, var_23_object, var_24_string); // 0x634 NEW_2
	if(var_22_bool == 0) goto Label_1594; // 0x636 JumpB
	func_1768(var_21_bool); // 0x638 NEW_2
	
Label_1594:
	return 0; // 0x63a Return
}


task_3_event_1(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x63c PushV
	var_22_object = var_20_bool; // 0x63d Mov
	func_3431(var_21_bool, var_22_object); // 0x63e NEW_2
	if(var_21_bool == 0) goto Label_1605; // 0x640 JumpB
	var_2_object = 1; // 0x641 TMovB
	func_1768(var_20_bool); // 0x643 NEW_2
	
Label_1605:
	return 0; // 0x645 Return
}


task_3_event_3(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x647 PushV
	var_22_object = var_20_bool; // 0x648 Mov
	func_3490(var_21_bool, var_22_object); // 0x649 NEW_2
	if(var_21_bool == 0) goto Label_1616; // 0x64b JumpB
	var_2_object = 1; // 0x64c TMovB
	func_1768(var_20_bool); // 0x64e NEW_2
	
Label_1616:
	return 0; // 0x650 Return
}


task_3_event_17(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_bool)
{
	EventDisable(42); // 0x652 EventDisable
	EventDisable(1); // 0x653 EventDisable
	EventDisable(3); // 0x654 EventDisable
	func_1768(var_20_bool); // 0x656 NEW_2
	var_2_object = 1; // 0x658 TMovB
	var_22_bool = 0; var_23_object = Obj(); // 0x659 PushV
	var_23_object = var_20_bool; // 0x65a Mov
	func_3701(var_22_bool, var_23_object); // 0x65b NEW_2
	return 0; // 0x65d Return
}


task_3_event_7(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_int, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_int = 3; // 0x65f PushI
	var_22_bool = var_20_bool == var_21_int; // 0x660 Eq
	if(var_22_bool == 0) goto Label_1639; // 0x661 JumpB
	func_1768(var_20_bool); // 0x663 NEW_2
	var_2_object = 1; // 0x665 TMovB
	return 0; // 0x666 Return
	
Label_1639:
	var_24_int = 0; // 0x667 PushV
	var_24_int = var_20_bool; // 0x668 Mov
	func_1746(var_19_bool, var_20_bool, var_24_int); // 0x669 NEW_2
	return 0; // 0x66b Return
}


task_3_event_10(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_bool)
{
	RequestClearPath(var_20_bool); // 0x6e5 Func
	return 0; // 0x6e7 Return
}


task_3_event_41(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_bool)
{
	func_1768(var_20_bool); // 0x6f1 NEW_2
	var_22_object = Obj(); // 0x6f3 PushV
	var_22_object = var_20_bool; // 0x6f4 Mov
	func_3800(); // 0x6f5 NEW_2
	return 0; // 0x6f7 Return
}


task_4_event_6(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	func_1931(); // 0x708 NEW_2
	var_20_bool = 0; var_21_int = 0; // 0x70a PushV
	var_21_int = 0; // 0x70b MovI
	func_3601(var_20_bool, var_21_int); // 0x70c NEW_2
	return 0; // 0x70e Return
}


task_4_event_42(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_string, var_19_bool, var_20_bool, var_21_bool)
{
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x710 PushV
	var_23_object = var_20_bool; // 0x711 Mov
	var_24_string = var_21_bool; // 0x712 Mov
	func_3330(var_22_bool, var_23_object, var_24_string); // 0x713 NEW_2
	if(var_22_bool == 0) goto Label_1817; // 0x715 JumpB
	func_1931(); // 0x717 NEW_2
	
Label_1817:
	return 0; // 0x719 Return
}


task_4_event_1(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x71b PushV
	var_22_object = var_20_bool; // 0x71c Mov
	func_3431(var_21_bool, var_22_object); // 0x71d NEW_2
	if(var_21_bool == 0) goto Label_1827; // 0x71f JumpB
	func_1931(); // 0x721 NEW_2
	
Label_1827:
	return 0; // 0x723 Return
}


task_4_event_3(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x725 PushV
	var_22_object = var_20_bool; // 0x726 Mov
	func_3490(var_21_bool, var_22_object); // 0x727 NEW_2
	if(var_21_bool == 0) goto Label_1837; // 0x729 JumpB
	func_1931(); // 0x72b NEW_2
	
Label_1837:
	return 0; // 0x72d Return
}


task_4_event_17(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_bool)
{
	EventDisable(42); // 0x72f EventDisable
	EventDisable(1); // 0x730 EventDisable
	EventDisable(3); // 0x731 EventDisable
	func_1931(); // 0x733 NEW_2
	var_21_bool = 0; var_22_object = Obj(); // 0x735 PushV
	var_22_object = var_20_bool; // 0x736 Mov
	func_3701(var_21_bool, var_22_object); // 0x737 NEW_2
	return 0; // 0x739 Return
}


task_5_event_6(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	func_2129(var_19_bool); // 0x7a1 NEW_2
	var_21_bool = 0; var_22_int = 0; // 0x7a3 PushV
	var_22_int = 0; // 0x7a4 MovI
	func_3601(var_21_bool, var_22_int); // 0x7a5 NEW_2
	return 0; // 0x7a7 Return
}


task_5_event_42(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_object, var_19_string, var_20_bool, var_21_bool)
{
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x7a9 PushV
	var_23_object = var_20_bool; // 0x7aa Mov
	var_24_string = var_21_bool; // 0x7ab Mov
	func_3330(var_22_bool, var_23_object, var_24_string); // 0x7ac NEW_2
	if(var_22_bool == 0) goto Label_1970; // 0x7ae JumpB
	func_2129(var_21_bool); // 0x7b0 NEW_2
	
Label_1970:
	return 0; // 0x7b2 Return
}


task_5_event_1(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_object, var_19_bool, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x7b4 PushV
	var_22_object = var_20_bool; // 0x7b5 Mov
	func_3431(var_21_bool, var_22_object); // 0x7b6 NEW_2
	if(var_21_bool == 0) goto Label_1980; // 0x7b8 JumpB
	func_2129(var_20_bool); // 0x7ba NEW_2
	
Label_1980:
	return 0; // 0x7bc Return
}


task_5_event_3(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_object, var_19_bool, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x7be PushV
	var_22_object = var_20_bool; // 0x7bf Mov
	func_3490(var_21_bool, var_22_object); // 0x7c0 NEW_2
	if(var_21_bool == 0) goto Label_1990; // 0x7c2 JumpB
	func_2129(var_20_bool); // 0x7c4 NEW_2
	
Label_1990:
	return 0; // 0x7c6 Return
}


task_5_event_17(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_object, var_19_bool, var_20_bool)
{
	EventDisable(42); // 0x7c8 EventDisable
	EventDisable(1); // 0x7c9 EventDisable
	EventDisable(3); // 0x7ca EventDisable
	func_2129(var_20_bool); // 0x7cc NEW_2
	var_22_bool = 0; var_23_object = Obj(); // 0x7ce PushV
	var_23_object = var_20_bool; // 0x7cf Mov
	func_3701(var_22_bool, var_23_object); // 0x7d0 NEW_2
	return 0; // 0x7d2 Return
}


task_5_event_7(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_int, var_19_bool, var_20_bool)
{
	var_21_int = 0; // 0x83d PushI
	var_22_bool = var_20_bool != var_21_int; // 0x83e Neq
	if(var_22_bool == 0) goto Label_2113; // 0x83f JumpB
	return 0; // 0x840 Return
	
Label_2113:
	var_23_bool = 0; // 0x841 PushV
	func_2003(var_23_bool); // 0x842 NEW_2
	var_24_bool = var_23_bool == 0; // 0x844 Not
	if(var_24_bool == 0) goto Label_2119; // 0x845 JumpB
	var_0_cvector = 1; // 0x846 TMovB
	
Label_2119:
	var_25_int = 0; // 0x847 PushI
	KillTimer(var_25_int); // 0x848 Func
	Stop(); // 0x84a Func
	return 0; // 0x84c Return
}


task_5_event_10(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_object, var_19_bool, var_20_bool)
{
	RequestClearPath(var_20_bool); // 0x84e Func
	return 0; // 0x850 Return
}


task_5_event_41(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_object, var_19_bool, var_20_bool)
{
	func_2129(var_20_bool); // 0x85a NEW_2
	var_22_object = Obj(); // 0x85c PushV
	var_22_object = var_20_bool; // 0x85d Mov
	func_3800(); // 0x85e NEW_2
	return 0; // 0x860 Return
}


task_6_event_42(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_object, var_20_string, var_21_bool)
{
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x87d PushV
	var_23_object = var_20_string; // 0x87e Mov
	var_24_string = var_21_bool; // 0x87f Mov
	func_3330(var_22_bool, var_23_object, var_24_string); // 0x880 NEW_2
	if(var_22_bool == 0) goto Label_2182; // 0x882 JumpB
	func_2365(var_21_bool); // 0x884 NEW_2
	
Label_2182:
	return 0; // 0x886 Return
}


task_6_event_1(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_object, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x888 PushV
	var_22_object = var_20_bool; // 0x889 Mov
	func_3431(var_21_bool, var_22_object); // 0x88a NEW_2
	if(var_21_bool == 0) goto Label_2192; // 0x88c JumpB
	func_2365(var_20_bool); // 0x88e NEW_2
	
Label_2192:
	return 0; // 0x890 Return
}


task_6_event_3(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_object, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x892 PushV
	var_22_object = var_20_bool; // 0x893 Mov
	func_3490(var_21_bool, var_22_object); // 0x894 NEW_2
	if(var_21_bool == 0) goto Label_2202; // 0x896 JumpB
	func_2365(var_20_bool); // 0x898 NEW_2
	
Label_2202:
	return 0; // 0x89a Return
}


task_6_event_17(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_object, var_20_bool)
{
	EventDisable(42); // 0x89c EventDisable
	EventDisable(1); // 0x89d EventDisable
	EventDisable(3); // 0x89e EventDisable
	func_2365(var_20_bool); // 0x8a0 NEW_2
	var_22_bool = 0; var_23_object = Obj(); // 0x8a2 PushV
	var_23_object = var_20_bool; // 0x8a3 Mov
	func_3701(var_22_bool, var_23_object); // 0x8a4 NEW_2
	return 0; // 0x8a6 Return
}


task_6_event_6(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	func_2365(var_19_bool); // 0x8b8 NEW_2
	var_21_bool = 0; var_22_int = 0; // 0x8ba PushV
	var_22_int = 0; // 0x8bb MovI
	func_3601(var_21_bool, var_22_int); // 0x8bc NEW_2
	return 0; // 0x8be Return
}


task_6_event_7(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_int, var_20_bool)
{
	var_21_int = 0; // 0x929 PushI
	var_22_bool = var_20_bool != var_21_int; // 0x92a Neq
	if(var_22_bool == 0) goto Label_2349; // 0x92b JumpB
	return 0; // 0x92c Return
	
Label_2349:
	var_23_bool = 0; // 0x92d PushV
	func_2239(var_23_bool); // 0x92e NEW_2
	var_24_bool = var_23_bool == 0; // 0x930 Not
	if(var_24_bool == 0) goto Label_2355; // 0x931 JumpB
	var_0_cvector = 1; // 0x932 TMovB
	
Label_2355:
	var_25_int = 0; // 0x933 PushI
	KillTimer(var_25_int); // 0x934 Func
	Stop(); // 0x936 Func
	return 0; // 0x938 Return
}


task_6_event_10(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_object, var_20_bool)
{
	RequestClearPath(var_20_bool); // 0x93a Func
	return 0; // 0x93c Return
}


task_6_event_41(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_object, var_20_bool)
{
	func_2365(var_20_bool); // 0x946 NEW_2
	var_22_object = Obj(); // 0x948 PushV
	var_22_object = var_20_bool; // 0x949 Mov
	func_3800(); // 0x94a NEW_2
	return 0; // 0x94c Return
}


task_7_event_6(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	func_2476(); // 0x961 NEW_2
	var_0_cvector = 1; // 0x963 TMovB
	var_20_bool = 0; var_21_int = 0; // 0x964 PushV
	var_21_int = 0; // 0x965 MovI
	func_3601(var_20_bool, var_21_int); // 0x966 NEW_2
	return 0; // 0x968 Return
}


task_7_event_42(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_string)
{
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x96a PushV
	var_23_object = var_20_object; // 0x96b Mov
	var_24_string = var_21_string; // 0x96c Mov
	func_3330(var_22_bool, var_23_object, var_24_string); // 0x96d NEW_2
	if(var_22_bool == 0) goto Label_2420; // 0x96f JumpB
	func_2476(); // 0x971 NEW_2
	var_0_cvector = 1; // 0x973 TMovB
	
Label_2420:
	return 0; // 0x974 Return
}


task_7_event_1(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x976 PushV
	var_22_object = var_20_object; // 0x977 Mov
	func_3431(var_21_bool, var_22_object); // 0x978 NEW_2
	if(var_21_bool == 0) goto Label_2431; // 0x97a JumpB
	func_2476(); // 0x97c NEW_2
	var_0_cvector = 1; // 0x97e TMovB
	
Label_2431:
	return 0; // 0x97f Return
}


task_7_event_3(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x981 PushV
	var_22_object = var_20_object; // 0x982 Mov
	func_3490(var_21_bool, var_22_object); // 0x983 NEW_2
	if(var_21_bool == 0) goto Label_2442; // 0x985 JumpB
	func_2476(); // 0x987 NEW_2
	var_0_cvector = 1; // 0x989 TMovB
	
Label_2442:
	return 0; // 0x98a Return
}


task_7_event_17(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object)
{
	EventDisable(42); // 0x98c EventDisable
	EventDisable(1); // 0x98d EventDisable
	EventDisable(3); // 0x98e EventDisable
	func_2476(); // 0x990 NEW_2
	var_21_bool = 0; var_22_object = Obj(); // 0x992 PushV
	var_22_object = var_20_object; // 0x993 Mov
	func_3701(var_21_bool, var_22_object); // 0x994 NEW_2
	return 0; // 0x996 Return
}


task_8_event_6(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	var_20_object = Obj(); // 0xa24 PushV
	func_3168(var_20_object); // 0xa25 NEW_2
	RemoveActor(var_20_object); // 0xa27 Func
	Hold(); // 0xa29 Func
	return 0; // 0xa2b Return
}


task_8_event_0(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_bool = 0; // 0xa3b PushV
	IsOverrideActive(var_22_bool); // 0xa3c Func
	var_23_bool = var_22_bool == 0; // 0xa3e Not
	if(var_23_bool == 0) goto Label_2628; // 0xa3f JumpB
	var_24_object = Obj(); // 0xa40 PushV
	var_24_object = var_20_object; // 0xa41 Mov
	func_3268(var_24_object); // 0xa42 NEW_2
	
Label_2628:
	return 2; // 0xa44 Return
}


task_8_event_22(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_int, var_22_float, var_23_float)
{
	return 0; // 0xabb Return
}


task_8_event_16(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_string)
{
	return 0; // 0xabd Return
}


task_8_event_41(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object)
{
	return 0; // 0xabf Return
}


task_9_event_26(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_string)
{
	var_21_string = "cleanup"; // 0xad3 PushS
	var_22_bool = var_20_string == var_21_string; // 0xad4 Eq
	if(var_22_bool == 0) goto Label_2781; // 0xad5 JumpB
	var_23_object = Obj(); // 0xad6 PushV
	func_3168(var_23_object); // 0xad7 NEW_2
	RemoveActor(var_23_object); // 0xad9 Func
	Hold(); // 0xadb Func
	
Label_2781:
	return 0; // 0xadd Return
}


task_9_event_5(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	StopGroup0(); // 0xade Func
	sync(); // 0xae0 Func
	return 0; // 0xae2 Return
}


event_26(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_string)
{
	var_21_string = "cleanup"; // 0xcfb PushS
	var_22_bool = var_20_string == var_21_string; // 0xcfc Eq
	if(var_22_bool == 0) goto Label_3329; // 0xcfd JumpB
	var_23_bool = GlobalVars[0]; // 0xcfe PushGE
	var_23_bool = 1; // 0xcff MovB
	GlobalVars[0] = var_23_bool; // 0xd00 PopGE
	
Label_3329:
	return 0; // 0xd01 Return
}


event_22(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_int, var_22_float, var_23_float)
{
	var_24_object = Obj(); var_25_int = 0; var_26_float = 0; // 0xeba PushV
	var_24_object = var_20_object; // 0xebb Mov
	var_25_int = var_21_int; // 0xebc Mov
	var_26_float = var_22_float; // 0xebd Mov
	func_3007(var_24_object, var_25_int, var_26_float); // 0xebe NEW_2
	return 0; // 0xec0 Return
}


event_43(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_int, var_22_float, var_23_float, var_24_cvector, var_25_cvector)
{
	var_26_object = Obj(); var_27_int = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); // 0xec2 PushV
	var_26_object = var_20_object; // 0xec3 Mov
	var_27_int = var_21_int; // 0xec4 Mov
	var_28_float = var_22_float; // 0xec5 Mov
	var_29_cvector = var_24_cvector; // 0xec6 Mov
	var_30_cvector = var_25_cvector; // 0xec7 Mov
	func_3075(var_28_float, var_29_cvector, var_30_cvector); // 0xec8 NEW_2
	return 0; // 0xeca Return
}


event_16(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_string)
{
	var_22_float = 0; var_23_float = 0; // 0xecb PushV
	var_24_string = "health"; // 0xecc PushS
	var_25_bool = var_21_string == var_24_string; // 0xecd Eq
	if(var_25_bool == 0) goto Label_3799; // 0xece JumpB
	var_26_string = "health"; // 0xecf PushS
	GetProperty(var_26_string, var_23_float); // 0xed0 Func
	var_27_int = 0; // 0xed2 PushI
	var_28_bool = var_23_float <= var_27_int; // 0xed3 LE
	if(var_28_bool == 0) goto Label_3799; // 0xed4 JumpB
	SignalDeath(var_20_object); // 0xed5 Func
	
Label_3799:
	return 2; // 0xed7 Return
}


event_41(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object)
{
	var_21_object = Obj(); // 0xed9 PushV
	var_21_object = var_20_object; // 0xeda Mov
	TaskCall(8); // 0xedb TaskCall
	func_2481(var_21_object); // 0xedc NEW_2
	TaskReturn(); // 0xedd TaskReturn
	return 0; // 0xedf Return
}


main(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	var_20_object = Obj(); var_21_int = 0; var_22_bool = 0; var_23_int = 0; var_24_bool = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_int = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_object = Obj(); var_31_object = Obj(); var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_int = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_object = Obj(); // 0x8 PushV
	var_42_bool = 0; // 0x9 PushV
	func_3517(var_42_bool); // 0xa NEW_2
	var_100_bool = var_42_bool == 0; // 0xc Not
	if(var_100_bool == 0) goto Label_23; // 0xd JumpB
	var_101_string = "FSM Init failed"; // 0xe PushS
	Trace(var_101_string); // 0xf Func
	var_102_object = Obj(); // 0x11 PushV
	func_3168(var_102_object); // 0x12 NEW_2
	RemoveActor(var_102_object); // 0x14 Func
	return 22; // 0x16 Return
	
Label_23:
	var_105_string = "noaccess"; // 0x17 PushS
	var_106_int = 0; // 0x18 PushI
	SetProperty(var_105_string, var_106_int); // 0x19 Func
	GetPosition(var_0_cvector); // 0x1b Func
	GetDirection(var_41_object); // 0x1d Func
	var_107_int = GlobalVars[3]; // 0x1f PushGE
	var_107_int = 0; // 0x20 MovI
	GlobalVars[3] = var_107_int; // 0x21 PopGE
	var_108_int = GlobalVars[4]; // 0x22 PushGE
	var_108_int = 2; // 0x23 MovI
	GlobalVars[4] = var_108_int; // 0x24 PopGE
	
Label_37:
	var_109_bool = 1; // 0x25 PushB
	if(var_109_bool == 0) goto Label_444; // 0x26 JumpB
	var_110_int = 0; // 0x27 PushI
	var_111_int = GlobalVars[3]; // 0x28 PushGE
	var_112_bool = var_110_int == var_111_int; // 0x29 Eq
	if(var_112_bool == 0) goto Label_53; // 0x2a JumpB
	TaskCall(9); // 0x2c TaskCall
	func_2752(); // 0x2d NEW_2
	TaskReturn(); // 0x2e TaskReturn
	var_119_bool = 0; var_120_int = 0; // 0x30 PushV
	var_120_int = 2; // 0x31 MovI
	func_3601(var_119_bool, var_120_int); // 0x32 NEW_2
	goto Label_441; // 0x34 Jump
	
Label_441:
	sync(); // 0x1b9 Func
	goto Label_37; // 0x1bb Jump
	
Label_53:
	var_138_int = 7; // 0x35 PushI
	var_139_int = GlobalVars[3]; // 0x36 PushGE
	var_140_bool = var_138_int == var_139_int; // 0x37 Eq
	if(var_140_bool == 0) goto Label_84; // 0x38 JumpB
	var_141_object = Obj(); // 0x39 PushV
	var_142_object = GlobalVars[8]; // 0x3a PushGE
	var_141_object = var_142_object; // 0x3b Mov
	TaskCall(1); // 0x3d TaskCall
	func_445(var_150_object, var_141_object); // 0x3e NEW_2
	TaskReturn(); // 0x3f TaskReturn
	var_674_int = 7; // 0x41 PushI
	var_675_int = GlobalVars[3]; // 0x42 PushGE
	var_676_bool = var_674_int == var_675_int; // 0x43 Eq
	if(var_676_bool == 0) goto Label_83; // 0x44 JumpB
	var_677_int = 0; // 0x45 PushV
	var_677_int = 1; // 0x46 MovI
	TaskCall(7); // 0x47 TaskCall
	func_2385(var_677_int); // 0x48 NEW_2
	TaskReturn(); // 0x49 TaskReturn
	var_694_int = 7; // 0x4b PushI
	var_695_int = GlobalVars[3]; // 0x4c PushGE
	var_696_bool = var_694_int == var_695_int; // 0x4d Eq
	if(var_696_bool == 0) goto Label_83; // 0x4e JumpB
	var_697_bool = 0; var_698_int = 0; // 0x4f PushV
	var_698_int = 2; // 0x50 MovI
	func_3601(var_697_bool, var_698_int); // 0x51 NEW_2
	
Label_83:
	goto Label_441; // 0x53 Jump
	
Label_84:
	var_699_int = 6; // 0x54 PushI
	var_700_int = GlobalVars[3]; // 0x55 PushGE
	var_701_bool = var_699_int == var_700_int; // 0x56 Eq
	if(var_701_bool == 0) goto Label_126; // 0x57 JumpB
	var_702_int = 0; // 0x58 PushV
	var_702_int = 1; // 0x59 MovI
	TaskCall(7); // 0x5a TaskCall
	func_2385(var_702_int); // 0x5b NEW_2
	TaskReturn(); // 0x5c TaskReturn
	var_704_int = 6; // 0x5e PushI
	var_705_int = GlobalVars[3]; // 0x5f PushGE
	var_706_bool = var_704_int == var_705_int; // 0x60 Eq
	if(var_706_bool == 0) goto Label_125; // 0x61 JumpB
	var_707_object = Obj(); var_708_float = 0; // 0x62 PushV
	var_709_object = GlobalVars[7]; // 0x63 PushGE
	var_707_object = var_709_object; // 0x64 Mov
	var_708_float = 8; // 0x66 MovI
	TaskCall(3); // 0x67 TaskCall
	func_1536(var_707_object, var_708_float); // 0x68 NEW_2
	TaskReturn(); // 0x69 TaskReturn
	var_779_int = 6; // 0x6b PushI
	var_780_int = GlobalVars[3]; // 0x6c PushGE
	var_781_bool = var_779_int == var_780_int; // 0x6d Eq
	if(var_781_bool == 0) goto Label_125; // 0x6e JumpB
	var_782_int = 0; // 0x6f PushV
	var_782_int = 1; // 0x70 MovI
	TaskCall(7); // 0x71 TaskCall
	func_2385(var_782_int); // 0x72 NEW_2
	TaskReturn(); // 0x73 TaskReturn
	var_784_int = 6; // 0x75 PushI
	var_785_int = GlobalVars[3]; // 0x76 PushGE
	var_786_bool = var_784_int == var_785_int; // 0x77 Eq
	if(var_786_bool == 0) goto Label_125; // 0x78 JumpB
	var_787_bool = 0; var_788_int = 0; // 0x79 PushV
	var_788_int = 2; // 0x7a MovI
	func_3601(var_787_bool, var_788_int); // 0x7b NEW_2
	
Label_125:
	goto Label_441; // 0x7d Jump
	
Label_126:
	var_789_int = 1; // 0x7e PushI
	var_790_int = GlobalVars[3]; // 0x7f PushGE
	var_791_bool = var_789_int == var_790_int; // 0x80 Eq
	if(var_791_bool == 0) goto Label_173; // 0x81 JumpB
	var_792_bool = 0; // 0x82 PushV
	var_792_bool = 1; // 0x83 MovB
	func_3730(var_792_bool); // 0x84 NEW_2
	var_801_bool = 0; // 0x86 PushV
	TaskCall(6); // 0x87 TaskCall
	func_2149(var_801_bool); // 0x88 NEW_2
	TaskReturn(); // 0x89 TaskReturn
	var_875_int = 1; // 0x8b PushI
	var_876_int = GlobalVars[3]; // 0x8c PushGE
	var_877_bool = var_875_int == var_876_int; // 0x8d Eq
	if(var_877_bool == 0) goto Label_168; // 0x8e JumpB
	TaskCall(4); // 0x90 TaskCall
	func_1795(); // 0x91 NEW_2
	TaskReturn(); // 0x92 TaskReturn
	var_929_int = 1; // 0x94 PushI
	var_930_int = GlobalVars[3]; // 0x95 PushGE
	var_931_bool = var_929_int == var_930_int; // 0x96 Eq
	if(var_931_bool == 0) goto Label_168; // 0x97 JumpB
	var_932_bool = 0; var_933_cvector = CVector(0,0,0); var_934_cvector = CVector(0,0,0); var_935_bool = 0; // 0x98 PushV
	var_933_cvector = var_0_cvector; // 0x99 MovT
	var_934_cvector = var_1_cvector; // 0x9a MovT
	var_935_bool = 0; // 0x9b MovB
	TaskCall(5); // 0x9c TaskCall
	func_1936(var_932_bool, var_933_cvector, var_934_cvector, var_935_bool); // 0x9d NEW_2
	TaskReturn(); // 0x9e TaskReturn
	var_991_int = 1; // 0xa0 PushI
	var_992_int = GlobalVars[3]; // 0xa1 PushGE
	var_993_bool = var_991_int == var_992_int; // 0xa2 Eq
	if(var_993_bool == 0) goto Label_168; // 0xa3 JumpB
	var_994_bool = 0; var_995_int = 0; // 0xa4 PushV
	var_995_int = 2; // 0xa5 MovI
	func_3601(var_994_bool, var_995_int); // 0xa6 NEW_2
	
Label_168:
	var_996_bool = 0; // 0xa8 PushV
	var_996_bool = 0; // 0xa9 MovB
	func_3730(var_996_bool); // 0xaa NEW_2
	goto Label_441; // 0xac Jump
	
Label_173:
	var_997_int = 2; // 0xad PushI
	var_998_int = GlobalVars[3]; // 0xae PushGE
	var_999_bool = var_997_int == var_998_int; // 0xaf Eq
	if(var_999_bool == 0) goto Label_228; // 0xb0 JumpB
	var_1000_bool = 0; // 0xb1 PushV
	func_0(var_41_object, var_1000_bool); // 0xb2 NEW_2
	var_1008_bool = var_1000_bool == 0; // 0xb4 Not
	if(var_1008_bool == 0) goto Label_190; // 0xb5 JumpB
	var_1009_bool = 0; var_1010_cvector = CVector(0,0,0); var_1011_cvector = CVector(0,0,0); var_1012_bool = 0; // 0xb6 PushV
	var_1010_cvector = var_0_cvector; // 0xb7 MovT
	var_1011_cvector = var_1_cvector; // 0xb8 MovT
	var_1012_bool = 0; // 0xb9 MovB
	TaskCall(5); // 0xba TaskCall
	func_1936(var_1009_bool, var_1010_cvector, var_1011_cvector, var_1012_bool); // 0xbb NEW_2
	TaskReturn(); // 0xbc TaskReturn
	
Label_190:
	var_1014_int = 2; // 0xbe PushI
	var_1015_int = GlobalVars[3]; // 0xbf PushGE
	var_1016_bool = var_1014_int == var_1015_int; // 0xc0 Eq
	if(var_1016_bool == 0) goto Label_227; // 0xc1 JumpB
	TaskCall(4); // 0xc3 TaskCall
	func_1795(); // 0xc4 NEW_2
	TaskReturn(); // 0xc5 TaskReturn
	var_1017_int = 2; // 0xc7 PushI
	var_1018_int = GlobalVars[3]; // 0xc8 PushGE
	var_1019_bool = var_1017_int == var_1018_int; // 0xc9 Eq
	if(var_1019_bool == 0) goto Label_227; // 0xca JumpB
	var_1020_bool = 0; // 0xcb PushV
	func_3744(var_1020_bool); // 0xcc NEW_2
	var_1029_bool = var_1020_bool == 0; // 0xce Not
	if(var_1029_bool == 0) goto Label_213; // 0xcf JumpB
	var_1030_bool = 0; var_1031_int = 0; // 0xd0 PushV
	var_1031_int = 3; // 0xd1 MovI
	func_3601(var_1030_bool, var_1031_int); // 0xd2 NEW_2
	goto Label_227; // 0xd4 Jump
	
Label_227:
	goto Label_441; // 0xe3 Jump
	
Label_213:
	var_1032_bool = 0; var_1033_float = 0; // 0xd5 PushV
	var_1033_float = 0.5; // 0xd6 MovF
	func_3202(var_1032_bool, var_1033_float); // 0xd7 NEW_2
	if(var_1032_bool == 0) goto Label_227; // 0xd9 JumpB
	var_1036_bool = 0; // 0xda PushV
	func_3719(var_1036_bool); // 0xdb NEW_2
	var_1045_bool = var_1036_bool == 0; // 0xdd Not
	if(var_1045_bool == 0) goto Label_227; // 0xde JumpB
	var_1046_bool = 0; var_1047_int = 0; // 0xdf PushV
	var_1047_int = 1; // 0xe0 MovI
	func_3601(var_1046_bool, var_1047_int); // 0xe1 NEW_2
	
Label_228:
	var_1048_int = 3; // 0xe4 PushI
	var_1049_int = GlobalVars[3]; // 0xe5 PushGE
	var_1050_bool = var_1048_int == var_1049_int; // 0xe6 Eq
	if(var_1050_bool == 0) goto Label_312; // 0xe7 JumpB
	var_1051_bool = 0; // 0xe8 PushV
	var_1051_bool = 1; // 0xe9 MovB
	func_3755(var_1051_bool); // 0xea NEW_2
	GetMainOutdoorScene(var_31_object); // 0xec Func
	var_1060_int = GlobalVars[2]; // 0xee PushGE
	irand(var_32_int, var_1060_int); // 0xef Func
	var_1061_bool = 0; var_1062_float = 0; // 0xf1 PushV
	var_1062_float = 0.5; // 0xf2 MovF
	func_3202(var_1061_bool, var_1062_float); // 0xf3 NEW_2
	var_33_bool = var_1061_bool; // 0xf4 Mov
	var_34_int = 0; // 0xf6 MovI
	
Label_247:
	var_1063_int = GlobalVars[2]; // 0xf7 PushGE
	var_1064_bool = var_34_int < var_1063_int; // 0xf8 LT
	if(var_1064_bool == 0) goto Label_298; // 0xf9 JumpB
	var_1065_int = var_34_int + var_32_int; // 0xfa Add
	var_1066_int = GlobalVars[2]; // 0xfb PushGE
	var_38_int = var_1065_int % var_1066_int; // 0xfc Mod2
	var_1067_bool = var_33_bool; // 0xfd Push
	if(var_1067_bool == 0) goto Label_259; // 0xfe JumpB
	var_1068_int = GlobalVars[2]; // 0xff PushGE
	var_1069_int = 1; // 0x100 PushI
	var_1070_int = var_1068_int - var_1069_int; // 0x101 Sub
	var_38_int = var_1070_int - var_38_int; // 0x102 Sub2
	
Label_259:
	var_1071_string = "pt_b9q03_bonfire"; // 0x103 PushS
	var_1072_int = GlobalVars[1]; // 0x104 PushGE
	var_1073_int = 1; // 0x105 PushI
	var_1074_int = var_1072_int + var_1073_int; // 0x106 Add
	var_1075_int = var_1071_string + var_1074_int; // 0x107 Add
	var_1076_string = "_patrol"; // 0x108 PushS
	var_1077_int = var_1075_int + var_1076_string; // 0x109 Add
	var_1078_int = 1; // 0x10a PushI
	var_1079_int = var_38_int + var_1078_int; // 0x10b Add
	var_1080_int = var_1077_int + var_1079_int; // 0x10c Add
	GetLocator(var_1080_int, var_35_bool, var_36_cvector, var_37_cvector); // 0x10d ObjFunc
	var_1081_bool = 0; var_1082_cvector = CVector(0,0,0); var_1083_cvector = CVector(0,0,0); var_1084_bool = 0; // 0x10f PushV
	var_1082_cvector = var_36_cvector; // 0x110 Mov
	var_1083_cvector = var_37_cvector; // 0x111 Mov
	var_1084_bool = 0; // 0x112 MovB
	TaskCall(5); // 0x113 TaskCall
	func_1936(var_1081_bool, var_1082_cvector, var_1083_cvector, var_1084_bool); // 0x114 NEW_2
	TaskReturn(); // 0x115 TaskReturn
	var_1086_int = 3; // 0x117 PushI
	var_1087_int = GlobalVars[3]; // 0x118 PushGE
	var_1088_bool = var_1086_int != var_1087_int; // 0x119 Neq
	if(var_1088_bool == 0) goto Label_284; // 0x11a JumpB
	goto Label_298; // 0x11b Jump
	
Label_298:
	var_1089_int = 3; // 0x12a PushI
	var_1090_int = GlobalVars[3]; // 0x12b PushGE
	var_1091_bool = var_1089_int == var_1090_int; // 0x12c Eq
	if(var_1091_bool == 0) goto Label_306; // 0x12d JumpB
	var_1092_bool = 0; var_1093_int = 0; // 0x12e PushV
	var_1093_int = 2; // 0x12f MovI
	func_3601(var_1092_bool, var_1093_int); // 0x130 NEW_2
	
Label_306:
	var_1094_bool = 0; // 0x132 PushV
	var_1094_bool = 0; // 0x133 MovB
	func_3755(var_1094_bool); // 0x134 NEW_2
	var_31_object = 0; // 0x136 SetNull
	goto Label_441; // 0x137 Jump
	
Label_284:
	var_1095_int = 0; // 0x11c PushV
	var_1095_int = 1; // 0x11d MovI
	TaskCall(7); // 0x11e TaskCall
	func_2385(var_1095_int); // 0x11f NEW_2
	TaskReturn(); // 0x120 TaskReturn
	var_1097_int = 3; // 0x122 PushI
	var_1098_int = GlobalVars[3]; // 0x123 PushGE
	var_1099_bool = var_1097_int != var_1098_int; // 0x124 Neq
	if(var_1099_bool == 0) goto Label_295; // 0x125 JumpB
	goto Label_298; // 0x126 Jump
	
Label_295:
	var_1100_int = 1; // 0x127 PushI
	var_34_int = var_34_int + var_1100_int; // 0x128 Add2
	goto Label_247; // 0x129 Jump
	
Label_312:
	var_1101_int = 4; // 0x138 PushI
	var_1102_int = GlobalVars[3]; // 0x139 PushGE
	var_1103_bool = var_1101_int == var_1102_int; // 0x13a Eq
	if(var_1103_bool == 0) goto Label_396; // 0x13b JumpB
	var_1104_object = GlobalVars[5]; // 0x13c PushGE
	GetPosition(var_39_cvector); // 0x13d ObjFunc
	var_1105_object = GlobalVars[5]; // 0x13f PushGE
	GetDirection(var_40_cvector); // 0x140 ObjFunc
	var_1106_bool = 0; var_1107_cvector = CVector(0,0,0); var_1108_cvector = CVector(0,0,0); var_1109_bool = 0; // 0x142 PushV
	var_1107_cvector = var_39_cvector; // 0x143 Mov
	var_1108_cvector = -var_40_cvector; // 0x144 Neg2
	var_1109_bool = 1; // 0x145 MovB
	TaskCall(5); // 0x146 TaskCall
	func_1936(var_1106_bool, var_1107_cvector, var_1108_cvector, var_1109_bool); // 0x147 NEW_2
	TaskReturn(); // 0x148 TaskReturn
	var_1111_int = 4; // 0x14a PushI
	var_1112_int = GlobalVars[3]; // 0x14b PushGE
	var_1113_bool = var_1111_int == var_1112_int; // 0x14c Eq
	if(var_1113_bool == 0) goto Label_395; // 0x14d JumpB
	var_1114_int = 0; // 0x14e PushV
	var_1114_int = 2; // 0x14f MovI
	TaskCall(7); // 0x150 TaskCall
	func_2385(var_1114_int); // 0x151 NEW_2
	TaskReturn(); // 0x152 TaskReturn
	var_1116_int = 4; // 0x154 PushI
	var_1117_int = GlobalVars[3]; // 0x155 PushGE
	var_1118_bool = var_1116_int == var_1117_int; // 0x156 Eq
	if(var_1118_bool == 0) goto Label_395; // 0x157 JumpB
	var_1119_bool = 0; var_1120_cvector = CVector(0,0,0); var_1121_cvector = CVector(0,0,0); var_1122_bool = 0; // 0x158 PushV
	var_1120_cvector = var_0_cvector; // 0x159 MovT
	var_1121_cvector = var_1_cvector; // 0x15a MovT
	var_1122_bool = 1; // 0x15b MovB
	TaskCall(5); // 0x15c TaskCall
	func_1936(var_1119_bool, var_1120_cvector, var_1121_cvector, var_1122_bool); // 0x15d NEW_2
	TaskReturn(); // 0x15e TaskReturn
	var_1124_int = 4; // 0x160 PushI
	var_1125_int = GlobalVars[3]; // 0x161 PushGE
	var_1126_bool = var_1124_int == var_1125_int; // 0x162 Eq
	if(var_1126_bool == 0) goto Label_395; // 0x163 JumpB
	GetMainOutdoorScene(var_41_object); // 0x164 Func
	var_1127_string = "b9q03_corpse"; // 0x166 PushS
	var_1128_int = GlobalVars[1]; // 0x167 PushGE
	var_1129_int = 1; // 0x168 PushI
	var_1130_int = var_1128_int + var_1129_int; // 0x169 Add
	var_1131_int = var_1127_string + var_1130_int; // 0x16a Add
	var_1132_object = Obj(); // 0x16b PushV
	func_3168(var_1132_object); // 0x16c NEW_2
	BroadcastMessage(var_1131_int, var_1132_object, var_41_object); // 0x16e Func
	var_1133_bool = 0; var_1134_cvector = CVector(0,0,0); var_1135_cvector = CVector(0,0,0); var_1136_bool = 0; // 0x170 PushV
	var_1134_cvector = var_39_cvector; // 0x171 Mov
	var_1135_cvector = var_39_cvector; // 0x172 Mov
	var_1136_bool = 1; // 0x173 MovB
	TaskCall(5); // 0x174 TaskCall
	func_1936(var_1133_bool, var_1134_cvector, var_1135_cvector, var_1136_bool); // 0x175 NEW_2
	TaskReturn(); // 0x176 TaskReturn
	var_1138_int = 4; // 0x178 PushI
	var_1139_int = GlobalVars[3]; // 0x179 PushGE
	var_1140_bool = var_1138_int == var_1139_int; // 0x17a Eq
	if(var_1140_bool == 0) goto Label_394; // 0x17b JumpB
	var_1141_int = 0; // 0x17c PushV
	var_1141_int = 3; // 0x17d MovI
	TaskCall(7); // 0x17e TaskCall
	func_2385(var_1141_int); // 0x17f NEW_2
	TaskReturn(); // 0x180 TaskReturn
	var_1143_int = 4; // 0x182 PushI
	var_1144_int = GlobalVars[3]; // 0x183 PushGE
	var_1145_bool = var_1143_int == var_1144_int; // 0x184 Eq
	if(var_1145_bool == 0) goto Label_394; // 0x185 JumpB
	var_1146_bool = 0; var_1147_int = 0; // 0x186 PushV
	var_1147_int = 2; // 0x187 MovI
	func_3601(var_1146_bool, var_1147_int); // 0x188 NEW_2
	
Label_394:
	var_41_object = 0; // 0x18a SetNull
	
Label_395:
	goto Label_441; // 0x18b Jump
	
Label_396:
	var_1148_int = 5; // 0x18c PushI
	var_1149_int = GlobalVars[3]; // 0x18d PushGE
	var_1150_bool = var_1148_int == var_1149_int; // 0x18e Eq
	if(var_1150_bool == 0) goto Label_438; // 0x18f JumpB
	var_1151_int = 0; // 0x190 PushV
	var_1151_int = 1; // 0x191 MovI
	TaskCall(7); // 0x192 TaskCall
	func_2385(var_1151_int); // 0x193 NEW_2
	TaskReturn(); // 0x194 TaskReturn
	var_1153_int = 5; // 0x196 PushI
	var_1154_int = GlobalVars[3]; // 0x197 PushGE
	var_1155_bool = var_1153_int == var_1154_int; // 0x198 Eq
	if(var_1155_bool == 0) goto Label_437; // 0x199 JumpB
	var_1156_object = Obj(); var_1157_float = 0; // 0x19a PushV
	var_1158_object = GlobalVars[6]; // 0x19b PushGE
	var_1156_object = var_1158_object; // 0x19c Mov
	var_1157_float = 8; // 0x19e MovI
	TaskCall(3); // 0x19f TaskCall
	func_1536(var_1156_object, var_1157_float); // 0x1a0 NEW_2
	TaskReturn(); // 0x1a1 TaskReturn
	var_1162_int = 5; // 0x1a3 PushI
	var_1163_int = GlobalVars[3]; // 0x1a4 PushGE
	var_1164_bool = var_1162_int == var_1163_int; // 0x1a5 Eq
	if(var_1164_bool == 0) goto Label_437; // 0x1a6 JumpB
	var_1165_int = 0; // 0x1a7 PushV
	var_1165_int = 2; // 0x1a8 MovI
	TaskCall(7); // 0x1a9 TaskCall
	func_2385(var_1165_int); // 0x1aa NEW_2
	TaskReturn(); // 0x1ab TaskReturn
	var_1167_int = 5; // 0x1ad PushI
	var_1168_int = GlobalVars[3]; // 0x1ae PushGE
	var_1169_bool = var_1167_int == var_1168_int; // 0x1af Eq
	if(var_1169_bool == 0) goto Label_437; // 0x1b0 JumpB
	var_1170_bool = 0; var_1171_int = 0; // 0x1b1 PushV
	var_1171_int = 2; // 0x1b2 MovI
	func_3601(var_1170_bool, var_1171_int); // 0x1b3 NEW_2
	
Label_437:
	goto Label_441; // 0x1b5 Jump
	
Label_438:
	var_1172_string = "Unknown FSM state"; // 0x1b6 PushS
	Trace(var_1172_string); // 0x1b7 Func
	
Label_444:
	return 22; // 0x1bc Return
}


func_1536(var_707_object, var_708_float)
{
	var_713_bool = 0; var_714_object = Obj(); // 0x601 PushV
	var_714_object = var_707_object; // 0x602 Mov
	func_2939(var_713_bool, var_714_object); // 0x603 NEW_2
	var_715_bool = var_713_bool == 0; // 0x605 Not
	if(var_715_bool == 0) goto Label_1548; // 0x606 JumpB
	var_716_bool = 0; var_717_int = 0; // 0x607 PushV
	var_717_int = 2; // 0x608 MovI
	func_3601(var_716_bool, var_717_int); // 0x609 NEW_2
	return 0; // 0x60b Return
	
Label_1548:
	var_718_int = 0; // 0x60c PushI
	var_719_bool = var_708_float > var_718_int; // 0x60d GT
	if(var_719_bool == 0) goto Label_1566; // 0x60e JumpB
	var_720_int = 3; // 0x60f PushI
	SetTimer(var_720_int, var_708_float); // 0x610 Func
	var_721_bool = 0; var_722_object = Obj(); var_723_float = 0; var_724_float = 0; var_725_bool = 0; var_726_bool = 0; // 0x612 PushV
	var_722_object = var_707_object; // 0x613 Mov
	var_723_float = 350.0; // 0x614 MovF
	var_724_float = 6000; // 0x615 MovI
	var_725_bool = 1; // 0x616 MovB
	var_726_bool = 1; // 0x617 MovB
	func_1644(var_707_object, var_708_float, var_721_bool, var_722_object, var_723_float, var_724_float, var_725_bool, var_726_bool); // 0x618 NEW_2
	var_772_int = 3; // 0x61a PushI
	KillTimer(var_772_int); // 0x61b Func
	goto Label_1574; // 0x61d Jump
	
Label_1574:
	return 0; // 0x626 Return
	
Label_1566:
	var_773_bool = 0; var_774_object = Obj(); var_775_float = 0; var_776_float = 0; var_777_bool = 0; var_778_bool = 0; // 0x61e PushV
	var_774_object = var_707_object; // 0x61f Mov
	var_775_float = 350.0; // 0x620 MovF
	var_776_float = 6000; // 0x621 MovI
	var_777_bool = 1; // 0x622 MovB
	var_778_bool = 1; // 0x623 MovB
	func_1644(var_707_object, var_708_float, var_773_bool, var_774_object, var_775_float, var_776_float, var_777_bool, var_778_bool); // 0x624 NEW_2
}


func_0(var_0_cvector, var_1000_bool)
{
	var_1001_cvector = CVector(0,0,0); var_1002_cvector = CVector(0,0,0); var_1003_float = 0; var_1004_cvector = CVector(0,0,0); var_1005_cvector = CVector(0,0,0); var_1006_float = 0; // 0x0 PushV
	GetPosition(var_1004_cvector); // 0x1 Func
	var_1005_cvector = var_1004_cvector - var_0_cvector; // 0x3 Sub2
	var_1006_float = var_1005_cvector | var_1005_cvector; // 0x4 Or2
	var_1007_int = 40000; // 0x5 PushI
	var_1000_bool = var_1006_float < var_1007_int; // 0x6 LT2
	return 6; // 0x7 Return
}


func_1024(var_0_cvector, var_429_bool, var_430_float)
{
	var_431_bool = 0; var_432_cvector = CVector(0,0,0); var_433_cvector = CVector(0,0,0); var_434_cvector = CVector(0,0,0); var_435_float = 0; var_436_bool = 0; var_437_cvector = CVector(0,0,0); var_438_cvector = CVector(0,0,0); var_439_cvector = CVector(0,0,0); var_440_float = 0; // 0x400 PushV
	
Label_1025:
	IsAnimationPlaying(var_436_bool); // 0x401 Func
	var_441_bool = var_436_bool == 0; // 0x403 Not
	if(var_441_bool == 0) goto Label_1030; // 0x404 JumpB
	goto Label_1068; // 0x405 Jump
	
Label_1068:
	func_1211(var_440_float); // 0x42d NEW_2
	var_429_bool = 0; // 0x42f MovB
	return 10; // 0x430 Return
	
Label_1030:
	var_442_bool = 0; // 0x406 PushV
	func_1107(var_442_bool); // 0x407 NEW_2
	if(var_442_bool == 0) goto Label_1036; // 0x409 JumpB
	var_429_bool = 1; // 0x40a MovB
	return 10; // 0x40b Return
	
Label_1036:
	var_487_bool = 0; // 0x40c PushV
	var_487_bool = 1; // 0x40d MovB
	var_488_bool = 0; var_489_object = Obj(); // 0x40e PushV
	var_489_object = var_0_cvector; // 0x40f MovT
	func_2939(var_488_bool, var_489_object); // 0x410 NEW_2
	var_490_bool = var_488_bool == 0; // 0x412 Not
	if(var_490_bool == 0) goto Label_1047; // 0x413 JumpB
	var_491_int = var_4_int; // 0x414 PushT
	if(var_491_int == 0) goto Label_1047; // 0x415 JumpB
	var_487_bool = 0; // 0x416 MovB
	
Label_1047:
	if(var_487_bool == 0) goto Label_1050; // 0x417 JumpB
	var_429_bool = 0; // 0x418 MovB
	return 10; // 0x419 Return
	
Label_1050:
	GetPFPosition(var_437_cvector); // 0x41a TObjFunc
	GetPFPosition(var_438_cvector); // 0x41c Func
	var_439_cvector = var_437_cvector - var_438_cvector; // 0x41e Sub2
	var_440_float = var_439_cvector | var_439_cvector; // 0x41f Or2
	var_492_float = var_430_float * var_430_float; // 0x420 Mult
	var_493_bool = var_440_float < var_492_float; // 0x421 LT
	if(var_493_bool == 0) goto Label_1065; // 0x422 JumpB
	var_494_bool = 0; var_495_float = 0; // 0x423 PushV
	var_495_float = var_430_float; // 0x424 Mov
	func_851(var_440_float, var_494_bool, var_495_float); // 0x425 NEW_2
	var_429_bool = 1; // 0x427 MovB
	return 10; // 0x428 Return
	
Label_1065:
	sync(); // 0x429 Func
	goto Label_1025; // 0x42b Jump
}


func_3075(var_26_object, var_29_cvector, var_30_cvector)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); var_34_object = Obj(); // 0xc03 PushV
	GetScene(var_33_object); // 0xc04 Func
	var_35_string = "scripted"; // 0xc06 PushS
	var_36_string = "blood_dir.xml"; // 0xc07 PushS
	AddActorByType(var_34_object, var_35_string, var_33_object, var_29_cvector, var_30_cvector, var_36_string); // 0xc08 Func
	var_37_object = Obj(); // 0xc0a PushV
	var_37_object = var_26_object; // 0xc0b Mov
	func_2963(var_37_object); // 0xc0c NEW_2
	return 4; // 0xc0e Return
}


func_519(var_0_cvector, var_3_int, var_4_int, var_6_bool, var_153_object, var_154_bool, var_155_float, var_261_bool, var_367_bool)
{
	var_156_float = 0; var_157_cvector = CVector(0,0,0); var_158_cvector = CVector(0,0,0); var_159_bool = 0; var_160_bool = 0; var_161_float = 0; var_162_cvector = CVector(0,0,0); var_163_float = 0; var_164_cvector = CVector(0,0,0); var_165_bool = 0; var_166_float = 0; var_167_float = 0; var_168_cvector = CVector(0,0,0); var_169_cvector = CVector(0,0,0); var_170_bool = 0; var_171_bool = 0; var_172_float = 0; var_173_cvector = CVector(0,0,0); var_174_float = 0; var_175_cvector = CVector(0,0,0); var_176_bool = 0; var_177_float = 0; // 0x207 PushV
	func_777(var_175_cvector, var_176_bool, var_177_float); // 0x209 NEW_2
	var_6_bool = 0; // 0x20b TMovI
	var_200_string = "@GetAttackDistance"; // 0x20c PushS
	var_201_int = 1; // 0x20d PushI
	var_202_bool = IsFuncExist(var_153_object, var_200_string, var_201_int); // 0x20e FuncExist
	if(var_202_bool == 0) goto Label_533; // 0x20f JumpB
	GetAttackDistance(var_167_float); // 0x210 ObjFunc
	var_203_int = 50; // 0x212 PushI
	var_167_float = var_167_float + var_203_int; // 0x213 Add2
	goto Label_534; // 0x214 Jump
	
Label_534:
	var_204_int = 150; // 0x216 PushI
	var_205_bool = var_167_float >= var_204_int; // 0x217 GE
	if(var_205_bool == 0) goto Label_538; // 0x218 JumpB
	var_167_float = 150; // 0x219 MovI
	
Label_538:
	var_3_int = 0; // 0x21a TMovB
	var_0_cvector = var_153_object; // 0x21b TMov
	IsPlayerActor(var_0_cvector, var_170_bool); // 0x21c Func
	var_206_bool = var_170_bool; // 0x21e Push
	if(var_206_bool == 0) goto Label_547; // 0x21f JumpB
	var_207_string = "attack"; // 0x220 PushS
	PlayGlobalMusic(var_207_string); // 0x221 Func
	
Label_547:
	var_208_bool = var_154_bool; // 0x223 Push
	if(var_208_bool == 0) goto Label_551; // 0x224 JumpB
	var_171_bool = 0; // 0x225 MovB
	goto Label_552; // 0x226 Jump
	
Label_552:
	var_209_float = 300.0; // 0x228 PushF
	var_172_float = var_209_float + var_167_float; // 0x229 Add2
	
Label_554:
	var_210_bool = 0; // 0x22a PushV
	var_210_bool = 0; // 0x22b MovB
	var_211_bool = 0; // 0x22c PushV
	var_211_bool = 0; // 0x22d MovB
	var_212_bool = 0; var_213_object = Obj(); // 0x22e PushV
	var_213_object = var_0_cvector; // 0x22f MovT
	func_2939(var_212_bool, var_213_object); // 0x230 NEW_2
	if(var_212_bool == 0) goto Label_566; // 0x232 JumpB
	var_246_bool = var_3_int == 0; // 0x233 Not
	if(var_246_bool == 0) goto Label_566; // 0x234 JumpB
	var_211_bool = 1; // 0x235 MovB
	
Label_566:
	if(var_211_bool == 0) goto Label_570; // 0x236 JumpB
	var_247_bool = var_4_int == 0; // 0x237 Not
	if(var_247_bool == 0) goto Label_570; // 0x238 JumpB
	var_210_bool = 1; // 0x239 MovB
	
Label_570:
	if(var_210_bool == 0) goto Label_746; // 0x23a JumpB
	func_1211(var_177_float); // 0x23c NEW_2
	GetPFPosition(var_168_cvector); // 0x23e TObjFunc
	GetPFPosition(var_169_cvector); // 0x240 Func
	var_173_cvector = var_168_cvector - var_169_cvector; // 0x242 Sub2
	var_174_float = var_173_cvector | var_173_cvector; // 0x243 Or2
	var_253_float = var_172_float * var_172_float; // 0x244 Mult
	var_254_bool = var_174_float >= var_253_float; // 0x245 GE
	if(var_254_bool == 0) goto Label_599; // 0x246 JumpB
	var_255_bool = 0; var_256_object = Obj(); var_257_float = 0; var_258_float = 0; var_259_bool = 0; var_260_bool = 0; // 0x247 PushV
	var_256_object = var_0_cvector; // 0x248 MovT
	var_257_float = var_167_float; // 0x249 Mov
	var_258_float = 2000.0; // 0x24a MovF
	var_259_bool = 1; // 0x24b MovB
	var_260_bool = 0; // 0x24c MovB
	TaskCall(2); // 0x24d TaskCall
	func_1229(var_264_object, var_255_bool, var_256_object, var_257_float, var_258_float, var_259_bool, var_260_bool); // 0x24e NEW_2
	TaskReturn(); // 0x24f TaskReturn
	var_350_bool = var_261_bool == 0; // 0x251 Not
	if(var_350_bool == 0) goto Label_597; // 0x252 JumpB
	var_3_int = 1; // 0x253 TMovB
	goto Label_746; // 0x254 Jump
	
Label_746:
	WaitForAnimEnd(); // 0x2ea Func
	var_351_bool = 0; // 0x2ec PushV
	var_351_bool = 1; // 0x2ed MovB
	var_352_int = var_3_int; // 0x2ee PushT
	if(var_352_int == 0) goto Label_755; // 0x2ef JumpB
	var_353_int = var_4_int; // 0x2f0 PushT
	if(var_353_int == 0) goto Label_755; // 0x2f1 JumpB
	var_351_bool = 0; // 0x2f2 MovB
	
Label_755:
	if(var_351_bool == 0) goto Label_757; // 0x2f3 JumpB
	return 22; // 0x2f4 Return
	
Label_757:
	var_354_string = "all"; // 0x2f5 PushS
	var_355_string = "attack_off"; // 0x2f6 PushS
	PlayAnimation(var_354_string, var_355_string); // 0x2f7 Func
	WaitForAnimEnd(); // 0x2f9 Func
	var_356_bool = var_170_bool; // 0x2fb Push
	if(var_356_bool == 0) goto Label_768; // 0x2fc JumpB
	var_357_float = 2.0; // 0x2fd PushF
	Sleep(var_357_float); // 0x2fe Func
	
Label_768:
	return 22; // 0x300 Return
	
Label_597:
	var_171_bool = 0; // 0x255 MovB
	goto Label_745; // 0x256 Jump
	
Label_745:
	goto Label_554; // 0x2e9 Jump
	
Label_599:
	var_358_float = var_155_float * var_155_float; // 0x257 Mult
	var_359_bool = var_174_float >= var_358_float; // 0x258 GE
	if(var_359_bool == 0) goto Label_737; // 0x259 JumpB
	GetPFPosition(var_175_cvector); // 0x25a TObjFunc
	CanReachByPF(var_176_bool, var_175_cvector); // 0x25c Func
	var_360_bool = var_176_bool == 0; // 0x25e Not
	if(var_360_bool == 0) goto Label_624; // 0x25f JumpB
	var_361_bool = 0; var_362_object = Obj(); var_363_float = 0; var_364_float = 0; var_365_bool = 0; var_366_bool = 0; // 0x260 PushV
	var_362_object = var_0_cvector; // 0x261 MovT
	var_363_float = var_167_float; // 0x262 Mov
	var_364_float = 2000.0; // 0x263 MovF
	var_365_bool = 1; // 0x264 MovB
	var_366_bool = 0; // 0x265 MovB
	TaskCall(2); // 0x266 TaskCall
	func_1229(var_370_object, var_361_bool, var_362_object, var_363_float, var_364_float, var_365_bool, var_366_bool); // 0x267 NEW_2
	TaskReturn(); // 0x268 TaskReturn
	var_371_bool = var_367_bool == 0; // 0x26a Not
	if(var_371_bool == 0) goto Label_622; // 0x26b JumpB
	var_3_int = 1; // 0x26c TMovB
	goto Label_746; // 0x26d Jump
	
Label_622:
	var_171_bool = 0; // 0x26e MovB
	goto Label_554; // 0x26f Jump
	
Label_624:
	var_372_bool = var_171_bool == 0; // 0x270 Not
	if(var_372_bool == 0) goto Label_655; // 0x271 JumpB
	var_373_object = Obj(); // 0x272 PushV
	var_373_object = var_0_cvector; // 0x273 MovT
	func_3089(); // 0x274 NEW_2
	var_382_string = "all"; // 0x276 PushS
	var_383_string = "attack_on"; // 0x277 PushS
	PlayAnimation(var_382_string, var_383_string); // 0x278 Func
	WaitForAnimEnd(); // 0x27a Func
	func_1211(var_177_float); // 0x27d NEW_2
	StopAsync(); // 0x27f Func
	var_171_bool = 1; // 0x281 MovB
	var_384_bool = 0; // 0x282 PushV
	var_384_bool = 1; // 0x283 MovB
	var_385_bool = 0; var_386_object = Obj(); // 0x284 PushV
	var_386_object = var_0_cvector; // 0x285 MovT
	func_2939(var_385_bool, var_386_object); // 0x286 NEW_2
	var_387_bool = var_385_bool == 0; // 0x288 Not
	if(var_387_bool == 0) goto Label_653; // 0x289 JumpB
	var_388_int = var_4_int; // 0x28a PushT
	if(var_388_int == 0) goto Label_653; // 0x28b JumpB
	var_384_bool = 0; // 0x28c MovB
	
Label_653:
	if(var_384_bool == 0) goto Label_655; // 0x28d JumpB
	goto Label_746; // 0x28e Jump
	
Label_655:
	rand(var_177_float); // 0x28f Func
	var_389_bool = 0; // 0x291 PushV
	var_389_bool = 1; // 0x292 MovB
	var_390_float = 0.6; // 0x293 PushF
	var_391_bool = var_177_float < var_390_float; // 0x294 LT
	if(var_391_bool == 0) goto Label_667; // 0x295 JumpB
	var_392_bool = 0; // 0x296 PushV
	func_1168(var_389_bool, var_392_bool); // 0x297 NEW_2
	if(var_392_bool == 0) goto Label_667; // 0x299 JumpB
	var_389_bool = 0; // 0x29a MovB
	
Label_667:
	if(var_389_bool == 0) goto Label_684; // 0x29b JumpB
	Face(var_0_cvector); // 0x29c Func
	func_1216(); // 0x29f NEW_2
	var_427_string = "all"; // 0x2a1 PushS
	var_428_string = "attack_stay"; // 0x2a2 PushS
	PlayAnimation(var_427_string, var_428_string); // 0x2a3 Func
	var_429_bool = 0; var_430_float = 0; // 0x2a5 PushV
	var_430_float = var_155_float; // 0x2a6 Mov
	func_1024(var_177_float, var_429_bool, var_430_float); // 0x2a7 NEW_2
	StopAsync(); // 0x2a9 Func
	goto Label_736; // 0x2ab Jump
	
Label_736:
	goto Label_745; // 0x2e0 Jump
	
Label_684:
	Face(var_0_cvector); // 0x2ac Func
	var_655_string = "all"; // 0x2ae PushS
	var_656_string = "fjump"; // 0x2af PushS
	PlayAnimation(var_655_string, var_656_string); // 0x2b0 Func
	WaitForAnimEnd(); // 0x2b2 Func
	func_1211(var_177_float); // 0x2b5 NEW_2
	var_657_cvector = CVector(0.0, 0.0, 0.0); // 0x2b7 PushVec
	SetSpeed(var_657_cvector); // 0x2b8 Func
	Stop(); // 0x2ba Func
	StopAsync(); // 0x2bc Func
	var_658_bool = 0; // 0x2be PushV
	func_1168(var_177_float, var_658_bool); // 0x2bf NEW_2
	var_659_bool = var_658_bool == 0; // 0x2c1 Not
	if(var_659_bool == 0) goto Label_736; // 0x2c2 JumpB
	var_660_bool = 0; // 0x2c3 PushV
	var_660_bool = 1; // 0x2c4 MovB
	var_661_bool = 0; var_662_object = Obj(); // 0x2c5 PushV
	var_662_object = var_0_cvector; // 0x2c6 MovT
	func_2939(var_661_bool, var_662_object); // 0x2c7 NEW_2
	var_663_bool = var_661_bool == 0; // 0x2c9 Not
	if(var_663_bool == 0) goto Label_718; // 0x2ca JumpB
	var_664_int = var_4_int; // 0x2cb PushT
	if(var_664_int == 0) goto Label_718; // 0x2cc JumpB
	var_660_bool = 0; // 0x2cd MovB
	
Label_718:
	if(var_660_bool == 0) goto Label_720; // 0x2ce JumpB
	goto Label_746; // 0x2cf Jump
	
Label_720:
	GetPFPosition(var_168_cvector); // 0x2d0 TObjFunc
	GetPFPosition(var_169_cvector); // 0x2d2 Func
	var_173_cvector = var_168_cvector - var_169_cvector; // 0x2d4 Sub2
	var_174_float = var_173_cvector | var_173_cvector; // 0x2d5 Or2
	var_665_float = var_155_float * var_155_float; // 0x2d6 Mult
	var_666_bool = var_174_float < var_665_float; // 0x2d7 LT
	if(var_666_bool == 0) goto Label_736; // 0x2d8 JumpB
	var_667_bool = 0; var_668_float = 0; // 0x2d9 PushV
	var_668_float = var_155_float; // 0x2da Mov
	func_851(var_177_float, var_667_bool, var_668_float); // 0x2db NEW_2
	var_669_bool = var_667_bool == 0; // 0x2dd Not
	if(var_669_bool == 0) goto Label_736; // 0x2de JumpB
	goto Label_746; // 0x2df Jump
	
Label_737:
	var_670_bool = 0; var_671_float = 0; // 0x2e1 PushV
	var_671_float = var_155_float; // 0x2e2 Mov
	func_851(var_177_float, var_670_bool, var_671_float); // 0x2e3 NEW_2
	var_672_bool = var_670_bool == 0; // 0x2e5 Not
	if(var_672_bool == 0) goto Label_744; // 0x2e6 JumpB
	goto Label_746; // 0x2e7 Jump
	
Label_744:
	var_171_bool = 1; // 0x2e8 MovB
	
Label_551:
	var_171_bool = 1; // 0x227 MovB
	
Label_533:
	var_167_float = var_155_float; // 0x215 Mov
}


func_3601(var_119_bool, var_120_int)
{
	var_121_int = GlobalVars[3]; // 0xe12 PushGE
	var_122_bool = var_120_int == var_121_int; // 0xe13 Eq
	if(var_122_bool == 0) goto Label_3607; // 0xe14 JumpB
	var_119_bool = 0; // 0xe15 MovB
	return 0; // 0xe16 Return
	
Label_3607:
	var_123_int = 0; // 0xe17 PushI
	var_124_bool = var_120_int == var_123_int; // 0xe18 Eq
	if(var_124_bool == 0) goto Label_3619; // 0xe19 JumpB
	var_125_int = GlobalVars[4]; // 0xe1a PushGE
	var_126_int = GlobalVars[3]; // 0xe1b PushGE
	var_125_int = var_126_int; // 0xe1c Mov
	GlobalVars[4] = var_125_int; // 0xe1e PopGE
	var_127_string = "changing state to c_iStateWaitForLoad"; // 0xe1f PushS
	Trace(var_127_string); // 0xe20 Func
	goto Label_3642; // 0xe22 Jump
	
Label_3642:
	var_128_int = GlobalVars[3]; // 0xe3a PushGE
	var_128_int = var_120_int; // 0xe3b Mov
	GlobalVars[3] = var_128_int; // 0xe3c PopGE
	var_119_bool = 1; // 0xe3d MovB
	return 0; // 0xe3e Return
	
Label_3619:
	var_129_int = 1; // 0xe23 PushI
	var_130_bool = var_120_int == var_129_int; // 0xe24 Eq
	if(var_130_bool == 0) goto Label_3626; // 0xe25 JumpB
	var_131_string = "changing state to c_iStateHeatHands"; // 0xe26 PushS
	Trace(var_131_string); // 0xe27 Func
	goto Label_3642; // 0xe29 Jump
	
Label_3626:
	var_132_int = 2; // 0xe2a PushI
	var_133_bool = var_120_int == var_132_int; // 0xe2b Eq
	if(var_133_bool == 0) goto Label_3633; // 0xe2c JumpB
	var_134_string = "changing state to c_iStateIdle"; // 0xe2d PushS
	Trace(var_134_string); // 0xe2e Func
	goto Label_3642; // 0xe30 Jump
	
Label_3633:
	var_135_int = 3; // 0xe31 PushI
	var_136_bool = var_120_int == var_135_int; // 0xe32 Eq
	if(var_136_bool == 0) goto Label_3640; // 0xe33 JumpB
	var_137_string = "changing state to c_iStatePatrol"; // 0xe34 PushS
	Trace(var_137_string); // 0xe35 Func
	goto Label_3642; // 0xe37 Jump
	
Label_3640:
	var_119_bool = 0; // 0xe38 MovB
	return 0; // 0xe39 Return
}


func_3089()
{
	var_374_cvector = CVector(0,0,0); var_375_cvector = CVector(0,0,0); var_376_cvector = CVector(0,0,0); var_377_cvector = CVector(0,0,0); var_378_cvector = CVector(0,0,0); var_379_cvector = CVector(0,0,0); // 0xc11 PushV
	GetPosition(var_377_cvector); // 0xc12 ObjFunc
	GetPosition(var_378_cvector); // 0xc14 Func
	var_379_cvector = var_377_cvector - var_378_cvector; // 0xc16 Sub2
	var_380_float = GetByIndex(var_379_cvector, 0); // 0xc17 PushE
	var_381_float = GetByIndex(var_379_cvector, 2); // 0xc18 PushE
	RotateAsync(var_380_float, var_381_float); // 0xc19 Func
	return 6; // 0xc1b Return
}


func_3100(var_115_bool)
{
	var_116_bool = 0; var_117_bool = 0; // 0xc1c PushV
	IsLoaded(var_117_bool); // 0xc1d Func
	var_115_bool = var_117_bool; // 0xc1f Mov
	return 2; // 0xc20 Return
}


func_3105(var_283_object)
{
	var_284_float = 0; var_285_cvector = CVector(0,0,0); var_286_float = 0; var_287_cvector = CVector(0,0,0); // 0xc21 PushV
	GetEyesHeight(var_286_float); // 0xc22 ObjFunc
	var_287_cvector = CVector(0.0, 0.0, 0.0); // 0xc24 MovV
	var_288_float = GetByIndex(var_287_cvector, 1); // 0xc25 PushE
	var_288_float = var_286_float; // 0xc26 Mov
	SetByIndex(var_287_cvector, 1) = var_288_float; // 0xc27 PopE
	var_289_string = "head"; // 0xc28 PushS
	LookAsync(var_283_object, var_289_string, var_287_cvector); // 0xc29 Func
	return 4; // 0xc2b Return
}


func_3116(var_47_string, var_48_int, var_49_int)
{
	var_53_bool = 0; var_54_bool = 0; // 0xc2c PushV
	var_55_bool = 0; var_56_int = 0; var_57_int = 0; // 0xc2d PushV
	var_56_int = var_48_int; // 0xc2e Mov
	var_57_int = var_49_int; // 0xc2f Mov
	func_3207(var_55_bool, var_56_int, var_57_int); // 0xc30 NEW_2
	if(var_55_bool == 0) goto Label_3126; // 0xc32 JumpB
	var_60_int = 0; // 0xc33 PushI
	AddItem(var_54_bool, var_47_string, var_60_int); // 0xc34 ObjFunc
	
Label_3126:
	return 2; // 0xc36 Return
}


func_2604(var_121_object)
{
	EventDisable(0); // 0xa2d EventDisable
	var_122_object = Obj(); // 0xa2e PushV
	var_122_object = var_121_object; // 0xa2f Mov
	func_2629(var_122_object); // 0xa30 NEW_2
	var_202_int = 50; // 0xa32 PushI
	var_203_int = 40; // 0xa33 PushI
	SetRTEnvelope(var_202_int, var_203_int); // 0xa34 Func
	EventEnable(0); // 0xa36 EventEnable
	
Label_2615:
	Hold(); // 0xa37 Func
	goto Label_2615; // 0xa39 Jump
}


func_1073(var_0_cvector, var_444_bool)
{
	var_445_cvector = CVector(0,0,0); var_446_cvector = CVector(0,0,0); var_447_cvector = CVector(0,0,0); var_448_float = 0; var_449_float = 0; var_450_cvector = CVector(0,0,0); var_451_cvector = CVector(0,0,0); var_452_cvector = CVector(0,0,0); var_453_float = 0; var_454_float = 0; // 0x431 PushV
	var_455_bool = 0; // 0x432 PushV
	var_455_bool = 1; // 0x433 MovB
	var_456_bool = 0; var_457_object = Obj(); // 0x434 PushV
	var_457_object = var_0_cvector; // 0x435 MovT
	func_2939(var_456_bool, var_457_object); // 0x436 NEW_2
	var_458_bool = var_456_bool == 0; // 0x438 Not
	if(var_458_bool == 0) goto Label_1085; // 0x439 JumpB
	var_459_int = var_4_int; // 0x43a PushT
	if(var_459_int == 0) goto Label_1085; // 0x43b JumpB
	var_455_bool = 0; // 0x43c MovB
	
Label_1085:
	if(var_455_bool == 0) goto Label_1088; // 0x43d JumpB
	var_444_bool = 0; // 0x43e MovB
	return 10; // 0x43f Return
	
Label_1088:
	var_460_bool = 0; // 0x440 PushV
	func_1168(var_454_float, var_460_bool); // 0x441 NEW_2
	if(var_460_bool == 0) goto Label_1105; // 0x443 JumpB
	GetPFPosition(var_450_cvector); // 0x444 TObjFunc
	GetPFPosition(var_451_cvector); // 0x446 Func
	var_452_cvector = var_450_cvector - var_451_cvector; // 0x448 Sub2
	var_453_float = var_452_cvector | var_452_cvector; // 0x449 Or2
	GetAttackDistance(var_454_float); // 0x44a TObjFunc
	var_461_int = 50; // 0x44c PushI
	var_454_float = var_454_float + var_461_int; // 0x44d Add2
	var_462_float = var_454_float * var_454_float; // 0x44e Mult
	var_444_bool = var_453_float <= var_462_float; // 0x44f LE2
	return 10; // 0x450 Return
	
Label_1105:
	var_444_bool = 0; // 0x451 MovB
	return 10; // 0x452 Return
}


func_3127(var_398_string)
{
	var_399_bool = 0; var_400_int = 0; var_401_bool = 0; var_402_int = 0; var_403_bool = 0; var_404_float = 0; var_405_cvector = CVector(0,0,0); var_406_cvector = CVector(0,0,0); var_407_bool = 0; var_408_int = 0; var_409_bool = 0; var_410_int = 0; var_411_bool = 0; var_412_float = 0; var_413_cvector = CVector(0,0,0); var_414_cvector = CVector(0,0,0); // 0xc37 PushV
	IsExisting3DSound(var_407_bool, var_398_string); // 0xc38 Func
	var_415_bool = var_407_bool == 0; // 0xc3a Not
	if(var_415_bool == 0) goto Label_3152; // 0xc3b JumpB
	var_408_int = 0; // 0xc3c MovI
	
Label_3133:
	var_416_int = 1; // 0xc3d PushI
	var_417_int = var_408_int + var_416_int; // 0xc3e Add
	var_418_int = var_398_string + var_417_int; // 0xc3f Add
	IsExisting3DSound(var_409_bool, var_418_int); // 0xc40 Func
	var_419_bool = var_409_bool == 0; // 0xc42 Not
	if(var_419_bool == 0) goto Label_3141; // 0xc43 JumpB
	goto Label_3144; // 0xc44 Jump
	
Label_3144:
	var_420_bool = var_408_int == 0; // 0xc48 Not
	if(var_420_bool == 0) goto Label_3147; // 0xc49 JumpB
	return 16; // 0xc4a Return
	
Label_3147:
	irand(var_410_int, var_408_int); // 0xc4b Func
	var_421_int = 1; // 0xc4d PushI
	var_422_int = var_410_int + var_421_int; // 0xc4e Add
	var_398_string = var_398_string + var_422_int; // 0xc4f Add2
	
Label_3152:
	Is3DSoundLoaded(var_411_bool, var_398_string); // 0xc50 Func
	var_423_bool = var_411_bool; // 0xc52 Push
	if(var_423_bool == 0) goto Label_3167; // 0xc53 JumpB
	GetEyesHeight(var_412_float); // 0xc54 Func
	GetDirection(var_413_cvector); // 0xc56 Func
	var_424_int = 50; // 0xc58 PushI
	var_414_cvector = var_413_cvector * var_424_int; // 0xc59 Mult2
	var_425_float = GetByIndex(var_414_cvector, 1); // 0xc5a PushE
	var_425_float = var_425_float + var_412_float; // 0xc5b Add2
	SetByIndex(var_414_cvector, 1) = var_425_float; // 0xc5c PopE
	PlayGlobalSound(var_398_string, var_414_cvector); // 0xc5d Func
	
Label_3167:
	return 16; // 0xc5f Return
	
Label_3141:
	var_426_int = 1; // 0xc45 PushI
	var_408_int = var_408_int + var_426_int; // 0xc46 Add2
	goto Label_3133; // 0xc47 Jump
}


func_3647(var_42_bool, var_43_object)
{
	var_44_int = GlobalVars[3]; // 0xe40 PushGE
	var_45_int = 4; // 0xe41 PushI
	var_46_bool = var_44_int == var_45_int; // 0xe42 Eq
	if(var_46_bool == 0) goto Label_3654; // 0xe43 JumpB
	var_42_bool = 0; // 0xe44 MovB
	return 0; // 0xe45 Return
	
Label_3654:
	var_47_int = GlobalVars[3]; // 0xe46 PushGE
	var_47_int = 4; // 0xe47 MovI
	GlobalVars[3] = var_47_int; // 0xe48 PopGE
	var_48_string = "changing state to c_iStateAware"; // 0xe49 PushS
	Trace(var_48_string); // 0xe4a Func
	var_49_object = GlobalVars[5]; // 0xe4c PushGE
	var_49_object = var_43_object; // 0xe4d Mov
	GlobalVars[5] = var_49_object; // 0xe4e PopGE
	var_42_bool = 1; // 0xe4f MovB
	return 0; // 0xe50 Return
}


func_2629(var_122_object)
{
	var_123_cvector = CVector(0,0,0); var_124_cvector = CVector(0,0,0); var_125_cvector = CVector(0,0,0); var_126_cvector = CVector(0,0,0); var_127_string = ""; var_128_object = Obj(); var_129_bool = 0; var_130_bool = 0; var_131_float = 0; var_132_cvector = CVector(0,0,0); var_133_cvector = CVector(0,0,0); var_134_cvector = CVector(0,0,0); var_135_cvector = CVector(0,0,0); var_136_cvector = CVector(0,0,0); var_137_string = ""; var_138_object = Obj(); var_139_bool = 0; var_140_bool = 0; var_141_float = 0; var_142_cvector = CVector(0,0,0); // 0xa45 PushV
	var_143_bool = var_122_object == 0; // 0xa46 NullEq
	if(var_143_bool == 0) goto Label_2637; // 0xa47 JumpB
	var_144_string = ""; // 0xa48 PushV
	var_144_string = "fdie"; // 0xa49 MovS
	func_2720(var_144_string); // 0xa4a NEW_2
	goto Label_2719; // 0xa4c Jump
	
Label_2719:
	return 20; // 0xa9f Return
	
Label_2637:
	GetPosition(var_133_cvector); // 0xa4d ObjFunc
	GetPosition(var_134_cvector); // 0xa4f Func
	GetDirection(var_135_cvector); // 0xa51 Func
	var_136_cvector = var_134_cvector - var_133_cvector; // 0xa53 Sub2
	var_176_float = GetByIndex(var_136_cvector, 0); // 0xa54 PushE
	var_177_float = GetByIndex(var_135_cvector, 0); // 0xa55 PushE
	var_178_float = var_176_float * var_177_float; // 0xa56 Mult
	var_179_float = GetByIndex(var_136_cvector, 2); // 0xa57 PushE
	var_180_float = GetByIndex(var_135_cvector, 2); // 0xa58 PushE
	var_181_float = var_179_float * var_180_float; // 0xa59 Mult
	var_182_int = var_178_float + var_181_float; // 0xa5a Add
	var_183_int = 0; // 0xa5b PushI
	var_184_bool = var_182_int >= var_183_int; // 0xa5c GE
	if(var_184_bool == 0) goto Label_2656; // 0xa5d JumpB
	var_137_string = "fdie"; // 0xa5e MovS
	goto Label_2657; // 0xa5f Jump
	
Label_2657:
	RemoveRTEnvelope(); // 0xa61 Func
	SetDeathState(); // 0xa63 Func
	Stop(); // 0xa65 Func
	StopAsync(); // 0xa67 Func
	var_138_object = var_122_object; // 0xa69 Mov
	var_185_string = "GetScriptProperty"; // 0xa6a PushS
	var_186_int = 2; // 0xa6b PushI
	var_187_bool = IsFuncExist(var_122_object, var_185_string, var_186_int); // 0xa6c FuncExist
	if(var_187_bool == 0) goto Label_2681; // 0xa6d JumpB
	var_188_string = "Owner"; // 0xa6e PushS
	HasScriptProperty(var_139_bool, var_188_string); // 0xa6f ObjFunc
	var_189_bool = var_139_bool; // 0xa71 Push
	if(var_189_bool == 0) goto Label_2681; // 0xa72 JumpB
	var_190_string = "Owner"; // 0xa73 PushS
	GetScriptProperty(var_138_object, var_190_string); // 0xa74 ObjFunc
	var_191_bool = var_138_object == 0; // 0xa76 NullEq
	if(var_191_bool == 0) goto Label_2681; // 0xa77 JumpB
	var_138_object = var_122_object; // 0xa78 Mov
	
Label_2681:
	var_192_string = "@GetEyesHeight"; // 0xa79 PushS
	var_193_int = 1; // 0xa7a PushI
	var_194_bool = IsFuncExist(var_138_object, var_192_string, var_193_int); // 0xa7b FuncExist
	if(var_194_bool == 0) goto Label_2696; // 0xa7c JumpB
	GetEyesHeight(var_141_float); // 0xa7d ObjFunc
	var_142_cvector = CVector(0.0, 0.0, 0.0); // 0xa7f MovV
	var_195_float = GetByIndex(var_142_cvector, 1); // 0xa80 PushE
	var_195_float = var_141_float; // 0xa81 Mov
	SetByIndex(var_142_cvector, 1) = var_195_float; // 0xa82 PopE
	var_196_string = "head"; // 0xa83 PushS
	LookAsync(var_122_object, var_196_string, var_142_cvector); // 0xa84 Func
	var_140_bool = 1; // 0xa86 MovB
	goto Label_2697; // 0xa87 Jump
	
Label_2697:
	var_197_string = ""; // 0xa89 PushV
	var_197_string = var_137_string; // 0xa8a Mov
	func_3127(var_197_string); // 0xa8b NEW_2
	var_198_string = "all"; // 0xa8d PushS
	PlayAnimation(var_198_string, var_137_string); // 0xa8e Func
	WaitForAnimEnd(); // 0xa90 Func
	var_199_bool = var_140_bool; // 0xa92 Push
	if(var_199_bool == 0) goto Label_2713; // 0xa93 JumpB
	StopAsync(); // 0xa94 Func
	var_200_string = "head"; // 0xa96 PushS
	UnlookAsync(var_200_string); // 0xa97 Func
	
Label_2713:
	var_201_string = "all"; // 0xa99 PushS
	LockAnimationEnd(var_201_string, var_137_string); // 0xa9a Func
	RemoveEnvelope(); // 0xa9c Func
	var_138_object = 0; // 0xa9e SetNull
	
Label_2696:
	var_140_bool = 0; // 0xa88 MovB
	
Label_2656:
	var_137_string = "bdie"; // 0xa60 MovS
}


func_2129(var_0_cvector)
{
	var_0_cvector = 1; // 0x851 TMovB
	var_21_int = 0; // 0x852 PushI
	KillTimer(var_21_int); // 0x853 Func
	Stop(); // 0x855 Func
	return 0; // 0x857 Return
}


func_3665(var_59_bool, var_60_object)
{
	var_61_int = GlobalVars[3]; // 0xe52 PushGE
	var_62_int = 5; // 0xe53 PushI
	var_63_bool = var_61_int == var_62_int; // 0xe54 Eq
	if(var_63_bool == 0) goto Label_3672; // 0xe55 JumpB
	var_59_bool = 0; // 0xe56 MovB
	return 0; // 0xe57 Return
	
Label_3672:
	var_64_int = GlobalVars[3]; // 0xe58 PushGE
	var_64_int = 5; // 0xe59 MovI
	GlobalVars[3] = var_64_int; // 0xe5a PopGE
	var_65_string = "changing state to c_iStateSearchEnemy"; // 0xe5b PushS
	Trace(var_65_string); // 0xe5c Func
	var_66_object = GlobalVars[6]; // 0xe5e PushGE
	var_66_object = var_60_object; // 0xe5f Mov
	GlobalVars[6] = var_66_object; // 0xe60 PopGE
	var_59_bool = 1; // 0xe61 MovB
	return 0; // 0xe62 Return
}


func_1107(var_442_bool)
{
	var_443_bool = 0; // 0x453 PushV
	var_443_bool = 0; // 0x454 MovB
	var_444_bool = 0; // 0x455 PushV
	func_1073(var_443_bool, var_444_bool); // 0x456 NEW_2
	if(var_444_bool == 0) goto Label_1118; // 0x458 JumpB
	var_463_bool = 0; // 0x459 PushV
	func_1123(var_442_bool, var_443_bool, var_463_bool); // 0x45a NEW_2
	if(var_463_bool == 0) goto Label_1118; // 0x45c JumpB
	var_443_bool = 1; // 0x45d MovB
	
Label_1118:
	if(var_443_bool == 0) goto Label_1121; // 0x45e JumpB
	var_442_bool = 1; // 0x45f MovB
	return 0; // 0x460 Return
	
Label_1121:
	var_442_bool = 0; // 0x461 MovB
	return 0; // 0x462 Return
}


func_3168(var_102_object)
{
	var_103_object = Obj(); var_104_object = Obj(); // 0xc60 PushV
	self(var_104_object); // 0xc61 Func
	var_102_object = var_104_object; // 0xc63 Mov
	return 2; // 0xc64 Return
}


func_2145(var_980_string)
{
	var_980_string = "walk"; // 0x861 MovS
	return 0; // 0x862 Return
}


func_1123(var_0_cvector, var_5_bool, var_463_bool)
{
	var_464_object = Obj(); var_465_bool = 0; var_466_float = 0; var_467_cvector = CVector(0,0,0); var_468_cvector = CVector(0,0,0); var_469_object = Obj(); var_470_bool = 0; var_471_float = 0; var_472_cvector = CVector(0,0,0); var_473_cvector = CVector(0,0,0); // 0x463 PushV
	GetScene(var_469_object); // 0x464 Func
	var_470_bool = 0; // 0x466 MovB
	
Label_1127:
	var_474_cvector = CVector(0,0,0); var_475_object = Obj(); // 0x467 PushV
	var_475_object = var_0_cvector; // 0x468 MovT
	func_2801(var_475_object); // 0x469 NEW_2
	var_480_int = -var_474_cvector; // 0x46b Neg
	FindDirLength(var_471_float, var_480_int, var_470_bool); // 0x46c Func
	var_481_bool = var_471_float < var_5_bool; // 0x46e LT
	if(var_481_bool == 0) goto Label_1137; // 0x46f JumpB
	goto Label_1165; // 0x470 Jump
	
Label_1165:
	var_463_bool = var_470_bool; // 0x48d Mov
	return 10; // 0x48e Return
	
Label_1137:
	Face(var_0_cvector); // 0x471 Func
	var_482_string = "all"; // 0x473 PushS
	var_483_string = "bjump"; // 0x474 PushS
	PlayAnimation(var_482_string, var_483_string); // 0x475 Func
	GetPFPosition(var_472_cvector); // 0x477 TObjFunc
	GetPFPosition(var_473_cvector); // 0x479 Func
	WaitForAnimEnd(); // 0x47b Func
	func_1211(var_473_cvector); // 0x47e NEW_2
	StopAsync(); // 0x480 Func
	var_484_cvector = CVector(0.0, 0.0, 0.0); // 0x482 PushVec
	SetSpeed(var_484_cvector); // 0x483 Func
	var_470_bool = 1; // 0x485 MovB
	var_485_bool = 0; // 0x486 PushV
	func_1073(var_473_cvector, var_485_bool); // 0x487 NEW_2
	var_486_bool = var_485_bool == 0; // 0x489 Not
	if(var_486_bool == 0) goto Label_1164; // 0x48a JumpB
	goto Label_1165; // 0x48b Jump
	
Label_1164:
	goto Label_1127; // 0x48c Jump
}


func_2147(var_981_string)
{
	var_981_string = "run"; // 0x863 MovS
	return 0; // 0x864 Return
}


func_2149(var_801_bool)
{
	var_803_bool = 0; var_804_object = Obj(); var_805_cvector = CVector(0,0,0); var_806_cvector = CVector(0,0,0); var_807_bool = 0; var_808_object = Obj(); var_809_cvector = CVector(0,0,0); var_810_cvector = CVector(0,0,0); // 0x865 PushV
	GetMainOutdoorScene(var_808_object); // 0x866 Func
	var_811_string = "pt_b9q03_bonfire"; // 0x868 PushS
	var_812_int = GlobalVars[1]; // 0x869 PushGE
	var_813_int = 1; // 0x86a PushI
	var_814_int = var_812_int + var_813_int; // 0x86b Add
	var_815_int = var_811_string + var_814_int; // 0x86c Add
	GetLocator(var_815_int, var_807_bool, var_809_cvector, var_810_cvector); // 0x86d ObjFunc
	var_816_bool = var_807_bool == 0; // 0x86f Not
	if(var_816_bool == 0) goto Label_2163; // 0x870 JumpB
	var_801_bool = 0; // 0x871 MovB
	return 8; // 0x872 Return
	
Label_2163:
	var_817_bool = 0; var_818_cvector = CVector(0,0,0); var_819_cvector = CVector(0,0,0); var_820_bool = 0; // 0x873 PushV
	var_818_cvector = var_809_cvector; // 0x874 Mov
	var_819_cvector = var_810_cvector; // 0x875 Mov
	var_820_bool = 0; // 0x876 MovB
	func_2215(var_817_bool, var_818_cvector, var_819_cvector, var_820_bool); // 0x877 NEW_2
	var_801_bool = var_817_bool; // 0x878 Mov
	return 8; // 0x87a Return
}


func_3174(var_52_cvector, var_53_cvector)
{
	var_60_float = 0; var_61_float = 0; // 0xc66 PushV
	var_62_int = var_53_cvector | var_53_cvector; // 0xc67 Or
	var_61_float = sqrt(var_62_int); // 0xc68 Sqrt2
	var_63_float = 0.0; // 0xc69 PushF
	var_64_bool = var_61_float < var_63_float; // 0xc6a LT
	if(var_64_bool == 0) goto Label_3182; // 0xc6b JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0xc6c MovV
	return 2; // 0xc6d Return
	
Label_3182:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0xc6e Div2
	return 2; // 0xc6f Return
}


func_3683(var_27_bool, var_28_object)
{
	var_29_int = GlobalVars[3]; // 0xe64 PushGE
	var_30_int = 6; // 0xe65 PushI
	var_31_bool = var_29_int == var_30_int; // 0xe66 Eq
	if(var_31_bool == 0) goto Label_3690; // 0xe67 JumpB
	var_27_bool = 0; // 0xe68 MovB
	return 0; // 0xe69 Return
	
Label_3690:
	var_32_int = GlobalVars[3]; // 0xe6a PushGE
	var_32_int = 6; // 0xe6b MovI
	GlobalVars[3] = var_32_int; // 0xe6c PopGE
	var_33_string = "changing state to c_iStateHearEnemy"; // 0xe6d PushS
	Trace(var_33_string); // 0xe6e Func
	var_34_object = GlobalVars[7]; // 0xe70 PushGE
	var_34_object = var_28_object; // 0xe71 Mov
	GlobalVars[7] = var_34_object; // 0xe72 PopGE
	var_27_bool = 1; // 0xe73 MovB
	return 0; // 0xe74 Return
}


func_1644(var_0_cvector, var_1_cvector, var_721_bool, var_722_object, var_723_float, var_724_float, var_725_bool, var_726_bool)
{
	var_727_bool = 0; var_728_bool = 0; var_729_object = Obj(); var_730_cvector = CVector(0,0,0); var_731_cvector = CVector(0,0,0); var_732_cvector = CVector(0,0,0); var_733_float = 0; var_734_object = Obj(); var_735_bool = 0; var_736_bool = 0; var_737_object = Obj(); var_738_cvector = CVector(0,0,0); var_739_cvector = CVector(0,0,0); var_740_cvector = CVector(0,0,0); var_741_float = 0; var_742_object = Obj(); // 0x66c PushV
	var_0_cvector = 0; // 0x66d TMovB
	var_1_cvector = var_722_object; // 0x66e TMov
	var_736_bool = var_726_bool; // 0x66f Mov
	
Label_1648:
	var_743_bool = 0; var_744_object = Obj(); // 0x670 PushV
	var_744_object = var_722_object; // 0x671 Mov
	func_1784(var_743_bool, var_744_object); // 0x672 NEW_2
	var_747_bool = var_743_bool == 0; // 0x674 Not
	if(var_747_bool == 0) goto Label_1656; // 0x675 JumpB
	var_721_bool = 0; // 0x676 MovB
	return 16; // 0x677 Return
	
Label_1656:
	GetPosition(var_738_cvector); // 0x678 ObjFunc
	GetPosition(var_739_cvector); // 0x67a Func
	var_740_cvector = var_738_cvector - var_739_cvector; // 0x67c Sub2
	var_741_float = var_740_cvector | var_740_cvector; // 0x67d Or2
	var_748_bool = 0; // 0x67e PushV
	var_748_bool = 0; // 0x67f MovB
	var_749_int = 0; // 0x680 PushI
	var_750_bool = var_724_float > var_749_int; // 0x681 GT
	if(var_750_bool == 0) goto Label_1671; // 0x682 JumpB
	var_751_float = var_724_float * var_724_float; // 0x683 Mult
	var_752_bool = var_741_float > var_751_float; // 0x684 GT
	if(var_752_bool == 0) goto Label_1671; // 0x685 JumpB
	var_748_bool = 1; // 0x686 MovB
	
Label_1671:
	if(var_748_bool == 0) goto Label_1676; // 0x687 JumpB
	Stop(); // 0x688 Func
	var_721_bool = 0; // 0x68a MovB
	return 16; // 0x68b Return
	
Label_1676:
	var_753_float = var_723_float * var_723_float; // 0x68c Mult
	var_754_bool = var_741_float > var_753_float; // 0x68d GT
	if(var_754_bool == 0) goto Label_1738; // 0x68e JumpB
	GetPFPosition(var_738_cvector); // 0x68f ObjFunc
	FindPathTo(var_742_object, var_738_cvector); // 0x691 Func
	var_755_bool = var_742_object != 0; // 0x693 NullNeq
	if(var_755_bool == 0) goto Label_1687; // 0x694 JumpB
	var_737_object = var_742_object; // 0x695 Mov
	var_742_object = 0; // 0x696 SetNull
	
Label_1687:
	var_756_bool = var_737_object != 0; // 0x697 NullNeq
	if(var_756_bool == 0) goto Label_1720; // 0x698 JumpB
	var_757_bool = var_736_bool; // 0x699 Push
	if(var_757_bool == 0) goto Label_1697; // 0x69a JumpB
	var_736_bool = 0; // 0x69b MovB
	RotatePath(var_737_object, var_735_bool); // 0x69c Func
	var_758_bool = var_735_bool == 0; // 0x69e Not
	if(var_758_bool == 0) goto Label_1697; // 0x69f JumpB
	goto Label_1744; // 0x6a0 Jump
	
Label_1744:
	var_721_bool = !var_0_cvector; // 0x6d0 Not2
	return 16; // 0x6d1 Return
	
Label_1697:
	var_759_int = 0; // 0x6a1 PushI
	var_760_float = 0.3; // 0x6a2 PushF
	SetTimer(var_759_int, var_760_float); // 0x6a3 Func
	var_761_string = ""; // 0x6a5 PushV
	func_1791(var_761_string); // 0x6a6 NEW_2
	var_762_string = ""; // 0x6a8 PushV
	func_1793(var_762_string); // 0x6a9 NEW_2
	FollowPath(var_737_object, var_725_bool, var_735_bool, var_761_string, var_762_string); // 0x6ab Func
	var_763_bool = var_735_bool == 0; // 0x6ad Not
	if(var_763_bool == 0) goto Label_1718; // 0x6ae JumpB
	var_764_cvector = var_0_cvector; // 0x6af PushT
	if(var_764_cvector == 0) goto Label_1716; // 0x6b0 JumpB
	var_737_object = 0; // 0x6b1 SetNull
	goto Label_1744; // 0x6b2 Jump
	
Label_1716:
	goto Label_1743; // 0x6b4 Jump
	
Label_1743:
	goto Label_1648; // 0x6cf Jump
	
Label_1718:
	var_737_object = 0; // 0x6b6 SetNull
	goto Label_1736; // 0x6b7 Jump
	
Label_1736:
	var_742_object = 0; // 0x6c8 SetNull
	goto Label_1742; // 0x6c9 Jump
	
Label_1742:
	var_737_object = 0; // 0x6ce SetNull
	
Label_1720:
	var_765_int = 0; // 0x6b8 PushI
	KillTimer(var_765_int); // 0x6b9 Func
	var_766_float = 0.5; // 0x6bb PushF
	Sleep(var_766_float, var_735_bool); // 0x6bc Func
	var_767_bool = var_735_bool == 0; // 0x6be Not
	if(var_767_bool == 0) goto Label_1732; // 0x6bf JumpB
	var_768_cvector = var_0_cvector; // 0x6c0 PushT
	if(var_768_cvector == 0) goto Label_1732; // 0x6c1 JumpB
	var_737_object = 0; // 0x6c2 SetNull
	goto Label_1744; // 0x6c3 Jump
	
Label_1732:
	var_769_int = 0; // 0x6c4 PushI
	var_770_float = 0.3; // 0x6c5 PushF
	SetTimer(var_769_int, var_770_float); // 0x6c6 Func
	
Label_1738:
	var_771_int = 0; // 0x6ca PushI
	KillTimer(var_771_int); // 0x6cb Func
	goto Label_1744; // 0x6cd Jump
}


func_3184(var_581_float, var_582_float, var_583_float)
{
	var_586_bool = var_582_float < var_583_float; // 0xc71 LT
	if(var_586_bool == 0) goto Label_3189; // 0xc72 JumpB
	var_581_float = var_582_float; // 0xc73 Mov
	goto Label_3190; // 0xc74 Jump
	
Label_3190:
	return 0; // 0xc76 Return
	
Label_3189:
	var_581_float = var_583_float; // 0xc75 Mov
}


func_3701(var_21_bool, var_22_object)
{
	var_23_int = GlobalVars[3]; // 0xe76 PushGE
	var_24_int = 7; // 0xe77 PushI
	var_25_bool = var_23_int == var_24_int; // 0xe78 Eq
	if(var_25_bool == 0) goto Label_3708; // 0xe79 JumpB
	var_21_bool = 0; // 0xe7a MovB
	return 0; // 0xe7b Return
	
Label_3708:
	var_26_int = GlobalVars[3]; // 0xe7c PushGE
	var_26_int = 7; // 0xe7d MovI
	GlobalVars[3] = var_26_int; // 0xe7e PopGE
	var_27_string = "changing state to c_iStateAttack"; // 0xe7f PushS
	Trace(var_27_string); // 0xe80 Func
	var_28_object = GlobalVars[8]; // 0xe82 PushGE
	var_28_object = var_22_object; // 0xe83 Mov
	GlobalVars[8] = var_28_object; // 0xe84 PopGE
	var_21_bool = 1; // 0xe85 MovB
	return 0; // 0xe86 Return
}


func_3191(var_591_float, var_592_float, var_593_float, var_594_float)
{
	var_595_bool = var_592_float < var_593_float; // 0xc78 LT
	if(var_595_bool == 0) goto Label_3196; // 0xc79 JumpB
	var_591_float = var_593_float; // 0xc7a Mov
	return 0; // 0xc7b Return
	
Label_3196:
	var_596_bool = var_592_float > var_594_float; // 0xc7c GT
	if(var_596_bool == 0) goto Label_3200; // 0xc7d JumpB
	var_591_float = var_594_float; // 0xc7e Mov
	return 0; // 0xc7f Return
	
Label_3200:
	var_591_float = var_592_float; // 0xc80 Mov
	return 0; // 0xc81 Return
}


func_3202(var_1032_bool, var_1033_float)
{
	var_1034_float = 0; var_1035_float = 0; // 0xc82 PushV
	rand(var_1035_float); // 0xc83 Func
	var_1032_bool = var_1035_float < var_1033_float; // 0xc85 LT2
	return 2; // 0xc86 Return
}


func_3719(var_1036_bool)
{
	var_1037_int = 0; var_1038_int = 0; // 0xe87 PushV
	var_1039_string = "b9q03HandHeatLock"; // 0xe88 PushS
	var_1040_int = GlobalVars[1]; // 0xe89 PushGE
	var_1041_int = 1; // 0xe8a PushI
	var_1042_int = var_1040_int + var_1041_int; // 0xe8b Add
	var_1043_int = var_1039_string + var_1042_int; // 0xe8c Add
	GetVariable(var_1043_int, var_1038_int); // 0xe8d Func
	var_1044_int = 0; // 0xe8f PushI
	var_1036_bool = var_1038_int != var_1044_int; // 0xe90 Neq2
	return 2; // 0xe91 Return
}


func_3207(var_55_bool, var_56_int, var_57_int)
{
	var_58_int = 0; var_59_int = 0; // 0xc87 PushV
	irand(var_59_int, var_57_int); // 0xc88 Func
	var_55_bool = var_59_int < var_56_int; // 0xc8a LT2
	return 2; // 0xc8b Return
}


func_3212(var_599_float)
{
	var_600_object = Obj(); var_601_object = Obj(); // 0xc8c PushV
	CreateFloatVector(var_601_object); // 0xc8d Func
	add(var_599_float); // 0xc8f ObjFunc
	var_602_int = 0; // 0xc91 PushI
	var_603_bool = var_599_float < var_602_int; // 0xc92 LT
	if(var_603_bool == 0) goto Label_3224; // 0xc93 JumpB
	var_604_float = 0.7; // 0xc94 PushF
	var_605_int = 500; // 0xc95 PushI
	RumblePlay(var_604_float, var_605_int); // 0xc96 Func
	
Label_3224:
	var_606_int = 15; // 0xc98 PushI
	SendWorldWndMessage(var_606_int, var_601_object); // 0xc99 Func
	return 2; // 0xc9b Return
}


func_1168(var_0_cvector, var_392_bool)
{
	var_393_bool = 0; var_394_bool = 0; // 0x490 PushV
	var_395_string = "IsAttacking"; // 0x491 PushS
	var_396_int = 1; // 0x492 PushI
	var_397_bool = IsFuncExist(var_0_cvector, var_395_string, var_396_int); // 0x493 FuncExist
	if(var_397_bool == 0) goto Label_1177; // 0x494 JumpB
	IsAttacking(var_394_bool); // 0x495 TObjFunc
	var_392_bool = var_394_bool; // 0x497 Mov
	return 2; // 0x498 Return
	
Label_1177:
	var_392_bool = 0; // 0x499 MovB
	return 2; // 0x49a Return
}


func_3730(var_792_bool)
{
	var_793_string = "b9q03HandHeatLock"; // 0xe93 PushS
	var_794_int = GlobalVars[1]; // 0xe94 PushGE
	var_795_int = 1; // 0xe95 PushI
	var_796_int = var_794_int + var_795_int; // 0xe96 Add
	var_797_int = var_793_string + var_796_int; // 0xe97 Add
	var_798_bool = var_792_bool; // 0xe98 Push
	if(var_798_bool == 0) goto Label_3740; // 0xe99 JumpB
	var_799_int = 1; // 0xe9a PushI
	goto Label_3741; // 0xe9b Jump
	
Label_3741:
	SetVariable(var_797_int, var_799_int); // 0xe9d Func
	return 0; // 0xe9f Return
	
Label_3740:
	var_800_int = 0; // 0xe9c PushI
}


func_1179(var_2_object, var_6_bool)
{
	var_509_float = 0; var_510_int = 0; var_511_float = 0; var_512_int = 0; // 0x49b PushV
	var_513_bool = var_2_object == 0; // 0x49c Not
	if(var_513_bool == 0) goto Label_1183; // 0x49d JumpB
	return 4; // 0x49e Return
	
Label_1183:
	var_514_bool = var_6_bool; // 0x49f PushT
	if(var_514_bool == 0) goto Label_1191; // 0x4a0 JumpB
	var_515_int = -1; // 0x4a1 PushI
	var_6_bool = var_6_bool + var_515_int; // 0x4a2 Add2
	var_516_int = 0; // 0x4a3 PushI
	var_517_bool = var_6_bool > var_516_int; // 0x4a4 GT
	if(var_517_bool == 0) goto Label_1191; // 0x4a5 JumpB
	return 4; // 0x4a6 Return
	
Label_1191:
	rand(var_511_float); // 0x4a7 Func
	var_518_float = 0; // 0x4a9 PushV
	func_1227(var_518_float); // 0x4aa NEW_2
	var_519_bool = var_511_float < var_518_float; // 0x4ac LT
	if(var_519_bool == 0) goto Label_1210; // 0x4ad JumpB
	irand(var_512_int, var_511_float); // 0x4ae Func
	var_520_int = 1; // 0x4b0 PushI
	var_512_int = var_512_int + var_520_int; // 0x4b1 Add2
	var_521_string = "attack"; // 0x4b2 PushS
	var_522_int = var_521_string + var_512_int; // 0x4b3 Add
	Speak(var_522_int); // 0x4b4 Func
	var_523_int = 0; // 0x4b6 PushV
	func_1225(var_523_int); // 0x4b7 NEW_2
	var_6_bool = var_523_int; // 0x4b8 TMov
	
Label_1210:
	return 4; // 0x4ba Return
}


func_3229(var_248_object)
{
	var_249_bool = 0; var_250_bool = 0; // 0xc9d PushV
	IsPlayerActor(var_248_object, var_250_bool); // 0xc9e Func
	var_251_bool = var_250_bool; // 0xca0 Push
	if(var_251_bool == 0) goto Label_3237; // 0xca1 JumpB
	var_252_string = "attack"; // 0xca2 PushS
	PlayGlobalMusic(var_252_string); // 0xca3 Func
	
Label_3237:
	return 2; // 0xca5 Return
}


func_3744(var_1020_bool)
{
	var_1021_int = 0; var_1022_int = 0; // 0xea0 PushV
	var_1023_string = "b9q03PatrolLock"; // 0xea1 PushS
	var_1024_int = GlobalVars[1]; // 0xea2 PushGE
	var_1025_int = 1; // 0xea3 PushI
	var_1026_int = var_1024_int + var_1025_int; // 0xea4 Add
	var_1027_int = var_1023_string + var_1026_int; // 0xea5 Add
	GetVariable(var_1027_int, var_1022_int); // 0xea6 Func
	var_1028_int = 0; // 0xea8 PushI
	var_1020_bool = var_1022_int != var_1028_int; // 0xea9 Neq2
	return 2; // 0xeaa Return
}


func_2720(var_144_string)
{
	RemoveRTEnvelope(); // 0xaa1 Func
	SetDeathState(); // 0xaa3 Func
	Stop(); // 0xaa5 Func
	StopAsync(); // 0xaa7 Func
	StopSecondaryAnimation(); // 0xaa9 Func
	var_145_string = ""; // 0xaab PushV
	var_145_string = var_144_string; // 0xaac Mov
	func_3127(var_145_string); // 0xaad NEW_2
	var_174_string = "all"; // 0xaaf PushS
	PlayAnimation(var_174_string, var_144_string); // 0xab0 Func
	WaitForAnimEnd(); // 0xab2 Func
	var_175_string = "all"; // 0xab4 PushS
	LockAnimationEnd(var_175_string, var_144_string); // 0xab5 Func
	RemoveEnvelope(); // 0xab7 Func
	return 0; // 0xab9 Return
}


func_3238(var_900_string, var_901_int)
{
	var_902_string = ""; var_903_string = ""; // 0xca6 PushV
	var_903_string = "idle"; // 0xca7 MovS
	var_904_int = var_901_int; // 0xca8 Push
	if(var_904_int == 0) goto Label_3243; // 0xca9 JumpB
	var_903_string = var_903_string + var_901_int; // 0xcaa Add2
	
Label_3243:
	var_900_string = var_903_string; // 0xcab Mov
	return 2; // 0xcac Return
}


func_2215(var_817_bool, var_818_cvector, var_819_cvector, var_820_bool)
{
	var_821_float = GetByIndex(var_818_cvector, 1); // 0x8a8 PushE
	var_822_int = 30; // 0x8a9 PushI
	var_821_float = var_821_float + var_822_int; // 0x8aa Add2
	SetByIndex(var_818_cvector, 1) = var_821_float; // 0x8ab PopE
	var_823_bool = 0; var_824_cvector = CVector(0,0,0); var_825_cvector = CVector(0,0,0); var_826_float = 0; var_827_float = 0; var_828_bool = 0; var_829_bool = 0; // 0x8ac PushV
	var_824_cvector = var_818_cvector; // 0x8ad Mov
	var_825_cvector = var_819_cvector; // 0x8ae Mov
	var_826_float = 100; // 0x8af MovI
	var_827_float = 4000; // 0x8b0 MovI
	var_828_bool = var_820_bool; // 0x8b1 Mov
	var_829_bool = 1; // 0x8b2 MovB
	func_2241(var_820_bool, var_823_bool, var_824_cvector, var_825_cvector, var_826_float, var_827_float, var_828_bool, var_829_bool); // 0x8b3 NEW_2
	var_817_bool = var_823_bool; // 0x8b4 Mov
	return 0; // 0x8b6 Return
}


func_3755(var_1051_bool)
{
	var_1052_string = "b9q03PatrolLock"; // 0xeac PushS
	var_1053_int = GlobalVars[1]; // 0xead PushGE
	var_1054_int = 1; // 0xeae PushI
	var_1055_int = var_1053_int + var_1054_int; // 0xeaf Add
	var_1056_int = var_1052_string + var_1055_int; // 0xeb0 Add
	var_1057_bool = var_1051_bool; // 0xeb1 Push
	if(var_1057_bool == 0) goto Label_3765; // 0xeb2 JumpB
	var_1058_int = 1; // 0xeb3 PushI
	goto Label_3766; // 0xeb4 Jump
	
Label_3766:
	SetVariable(var_1056_int, var_1058_int); // 0xeb6 Func
	return 0; // 0xeb8 Return
	
Label_3765:
	var_1059_int = 0; // 0xeb5 PushI
}


func_3245(var_894_int)
{
	var_895_int = 0; var_896_bool = 0; var_897_int = 0; var_898_bool = 0; // 0xcad PushV
	var_897_int = 0; // 0xcae MovI
	
Label_3247:
	var_899_string = "all"; // 0xcaf PushS
	var_900_string = ""; var_901_int = 0; // 0xcb0 PushV
	var_901_int = var_897_int; // 0xcb1 Mov
	func_3238(var_900_string, var_901_int); // 0xcb2 NEW_2
	HasAnimation(var_898_bool, var_899_string, var_900_string); // 0xcb4 Func
	var_905_bool = var_898_bool == 0; // 0xcb6 Not
	if(var_905_bool == 0) goto Label_3257; // 0xcb7 JumpB
	goto Label_3260; // 0xcb8 Jump
	
Label_3260:
	var_894_int = var_897_int; // 0xcbc Mov
	return 4; // 0xcbd Return
	
Label_3257:
	var_906_int = 1; // 0xcb9 PushI
	var_897_int = var_897_int + var_906_int; // 0xcba Add2
	goto Label_3247; // 0xcbb Jump
}


func_1211(var_0_cvector)
{
	var_248_object = Obj(); // 0x4bb PushV
	var_248_object = var_0_cvector; // 0x4bc MovT
	func_3229(var_248_object); // 0x4bd NEW_2
	return 0; // 0x4bf Return
}


func_3262(var_101_int)
{
	var_102_int = 0; var_103_int = 0; // 0xcbe PushV
	var_104_string = "branch"; // 0xcbf PushS
	GetVariable(var_104_string, var_103_int); // 0xcc0 Func
	var_101_int = var_103_int; // 0xcc2 Mov
	return 2; // 0xcc3 Return
}


func_2239(var_846_bool)
{
	var_846_bool = 1; // 0x8bf MovB
	return 0; // 0x8c0 Return
}


func_2752()
{
	var_113_bool = GlobalVars[0]; // 0xac0 PushGE
	if(var_113_bool == 0) goto Label_2761; // 0xac1 JumpB
	var_114_object = Obj(); // 0xac2 PushV
	func_3168(var_114_object); // 0xac3 NEW_2
	RemoveActor(var_114_object); // 0xac5 Func
	Hold(); // 0xac7 Func
	
Label_2761:
	var_115_bool = 0; // 0xac9 PushV
	func_3100(var_115_bool); // 0xaca NEW_2
	var_118_bool = var_115_bool == 0; // 0xacc Not
	if(var_118_bool == 0) goto Label_2769; // 0xacd JumpB
	Hold(); // 0xace Func
	goto Label_2761; // 0xad0 Jump
	
Label_2769:
	return 0; // 0xad1 Return
}


func_1216()
{
	var_398_string = ""; // 0x4c0 PushV
	var_398_string = "attack_stay"; // 0x4c1 MovS
	func_3127(var_398_string); // 0x4c2 NEW_2
	return 0; // 0x4c4 Return
}


func_2241(var_0_cvector, var_823_bool, var_824_cvector, var_825_cvector, var_826_float, var_827_float, var_828_bool, var_829_bool)
{
	var_830_bool = 0; var_831_bool = 0; var_832_object = Obj(); var_833_cvector = CVector(0,0,0); var_834_cvector = CVector(0,0,0); var_835_cvector = CVector(0,0,0); var_836_float = 0; var_837_object = Obj(); var_838_bool = 0; var_839_bool = 0; var_840_object = Obj(); var_841_cvector = CVector(0,0,0); var_842_cvector = CVector(0,0,0); var_843_cvector = CVector(0,0,0); var_844_float = 0; var_845_object = Obj(); // 0x8c1 PushV
	var_0_cvector = 0; // 0x8c2 TMovB
	var_839_bool = var_829_bool; // 0x8c3 Mov
	
Label_2244:
	var_846_bool = 0; // 0x8c4 PushV
	func_2239(var_846_bool); // 0x8c5 NEW_2
	var_847_bool = var_846_bool == 0; // 0x8c7 Not
	if(var_847_bool == 0) goto Label_2251; // 0x8c8 JumpB
	var_823_bool = 0; // 0x8c9 MovB
	return 16; // 0x8ca Return
	
Label_2251:
	var_841_cvector = var_824_cvector; // 0x8cb Mov
	GetPosition(var_842_cvector); // 0x8cc Func
	var_843_cvector = var_841_cvector - var_842_cvector; // 0x8ce Sub2
	var_844_float = var_843_cvector | var_843_cvector; // 0x8cf Or2
	var_848_bool = 0; // 0x8d0 PushV
	var_848_bool = 0; // 0x8d1 MovB
	var_849_int = 0; // 0x8d2 PushI
	var_850_bool = var_827_float > var_849_int; // 0x8d3 GT
	if(var_850_bool == 0) goto Label_2265; // 0x8d4 JumpB
	var_851_float = var_827_float * var_827_float; // 0x8d5 Mult
	var_852_bool = var_844_float > var_851_float; // 0x8d6 GT
	if(var_852_bool == 0) goto Label_2265; // 0x8d7 JumpB
	var_848_bool = 1; // 0x8d8 MovB
	
Label_2265:
	if(var_848_bool == 0) goto Label_2270; // 0x8d9 JumpB
	Stop(); // 0x8da Func
	var_823_bool = 0; // 0x8dc MovB
	return 16; // 0x8dd Return
	
Label_2270:
	var_853_float = var_826_float * var_826_float; // 0x8de Mult
	var_854_bool = var_844_float > var_853_float; // 0x8df GT
	if(var_854_bool == 0) goto Label_2330; // 0x8e0 JumpB
	FindPathTo(var_845_object, var_841_cvector); // 0x8e1 Func
	var_855_bool = var_845_object != 0; // 0x8e3 NullNeq
	if(var_855_bool == 0) goto Label_2279; // 0x8e4 JumpB
	var_840_object = var_845_object; // 0x8e5 Mov
	var_845_object = 0; // 0x8e6 SetNull
	
Label_2279:
	var_856_bool = var_840_object != 0; // 0x8e7 NullNeq
	if(var_856_bool == 0) goto Label_2312; // 0x8e8 JumpB
	var_857_bool = var_839_bool; // 0x8e9 Push
	if(var_857_bool == 0) goto Label_2289; // 0x8ea JumpB
	var_839_bool = 0; // 0x8eb MovB
	RotatePath(var_840_object, var_838_bool); // 0x8ec Func
	var_858_bool = var_838_bool == 0; // 0x8ee Not
	if(var_858_bool == 0) goto Label_2289; // 0x8ef JumpB
	goto Label_2336; // 0x8f0 Jump
	
Label_2336:
	var_859_bool = var_0_cvector == 0; // 0x920 Not
	if(var_859_bool == 0) goto Label_2342; // 0x921 JumpB
	var_860_float = GetByIndex(var_825_cvector, 0); // 0x922 PushE
	var_861_float = GetByIndex(var_825_cvector, 2); // 0x923 PushE
	RotateAsync(var_860_float, var_861_float); // 0x924 Func
	
Label_2342:
	var_823_bool = !var_0_cvector; // 0x926 Not2
	return 16; // 0x927 Return
	
Label_2289:
	var_862_int = 0; // 0x8f1 PushI
	var_863_float = 0.3; // 0x8f2 PushF
	SetTimer(var_862_int, var_863_float); // 0x8f3 Func
	var_864_string = ""; // 0x8f5 PushV
	func_2381(var_864_string); // 0x8f6 NEW_2
	var_865_string = ""; // 0x8f8 PushV
	func_2383(var_865_string); // 0x8f9 NEW_2
	FollowPath(var_840_object, var_828_bool, var_838_bool, var_864_string, var_865_string); // 0x8fb Func
	var_866_bool = var_838_bool == 0; // 0x8fd Not
	if(var_866_bool == 0) goto Label_2310; // 0x8fe JumpB
	var_867_cvector = var_0_cvector; // 0x8ff PushT
	if(var_867_cvector == 0) goto Label_2308; // 0x900 JumpB
	var_840_object = 0; // 0x901 SetNull
	goto Label_2336; // 0x902 Jump
	
Label_2308:
	goto Label_2335; // 0x904 Jump
	
Label_2335:
	goto Label_2244; // 0x91f Jump
	
Label_2310:
	var_840_object = 0; // 0x906 SetNull
	goto Label_2328; // 0x907 Jump
	
Label_2328:
	var_845_object = 0; // 0x918 SetNull
	goto Label_2334; // 0x919 Jump
	
Label_2334:
	var_840_object = 0; // 0x91e SetNull
	
Label_2312:
	var_868_int = 0; // 0x908 PushI
	KillTimer(var_868_int); // 0x909 Func
	var_869_float = 0.5; // 0x90b PushF
	Sleep(var_869_float, var_838_bool); // 0x90c Func
	var_870_bool = var_838_bool == 0; // 0x90e Not
	if(var_870_bool == 0) goto Label_2324; // 0x90f JumpB
	var_871_cvector = var_0_cvector; // 0x910 PushT
	if(var_871_cvector == 0) goto Label_2324; // 0x911 JumpB
	var_840_object = 0; // 0x912 SetNull
	goto Label_2336; // 0x913 Jump
	
Label_2324:
	var_872_int = 0; // 0x914 PushI
	var_873_float = 0.3; // 0x915 PushF
	SetTimer(var_872_int, var_873_float); // 0x916 Func
	
Label_2330:
	var_874_int = 0; // 0x91a PushI
	KillTimer(var_874_int); // 0x91b Func
	goto Label_2336; // 0x91d Jump
}


func_3268(var_24_object)
{
	var_25_int = 0; // 0xcc5 PushV
	func_3262(var_25_int); // 0xcc6 NEW_2
	var_29_int = 1; // 0xcc8 PushI
	var_30_bool = var_25_int == var_29_int; // 0xcc9 Eq
	if(var_30_bool == 0) goto Label_3278; // 0xcca JumpB
	WorkWithCorpse(var_24_object); // 0xccb Func
	goto Label_3280; // 0xccd Jump
	
Label_3280:
	return 0; // 0xcd0 Return
	
Label_3278:
	Barter(var_24_object); // 0xcce Func
}


func_1221()
{
	return 0; // 0x4c6 Return
}


func_1223(var_636_bool)
{
	var_636_bool = 1; // 0x4c7 MovB
	return 0; // 0x4c8 Return
}


func_1225(var_523_int)
{
	var_523_int = 1; // 0x4c9 MovI
	return 0; // 0x4ca Return
}


func_1227(var_518_float)
{
	var_518_float = 0.5; // 0x4cb MovF
	return 0; // 0x4cc Return
}


func_1229(var_3_int, var_255_bool, var_256_object, var_257_float, var_258_float, var_259_bool, var_260_bool)
{
	var_265_bool = 0; var_266_bool = 0; // 0x4cd PushV
	var_3_int = var_256_object; // 0x4ce TMov
	var_267_int = 2; // 0x4cf PushI
	var_268_int = 2; // 0x4d0 PushI
	SetTimer(var_267_int, var_268_int); // 0x4d1 Func
	var_269_bool = 0; var_270_object = Obj(); var_271_float = 0; var_272_float = 0; var_273_bool = 0; var_274_bool = 0; // 0x4d3 PushV
	var_270_object = var_256_object; // 0x4d4 Mov
	var_271_float = var_257_float; // 0x4d5 Mov
	var_272_float = var_258_float; // 0x4d6 Mov
	var_273_bool = var_259_bool; // 0x4d7 Mov
	var_274_bool = var_260_bool; // 0x4d8 Mov
	func_1280(var_266_bool, var_269_bool, var_270_object, var_271_float, var_272_float, var_273_bool, var_274_bool); // 0x4d9 NEW_2
	var_266_bool = var_269_bool; // 0x4da Mov
	var_349_int = 2; // 0x4dc PushI
	KillTimer(var_349_int); // 0x4dd Func
	var_255_bool = var_266_bool; // 0x4df Mov
	return 2; // 0x4e0 Return
}


func_3281(var_107_string)
{
	var_108_object = Obj(); var_109_int = 0; var_110_bool = 0; var_111_object = Obj(); var_112_int = 0; var_113_bool = 0; // 0xcd1 PushV
	CreateInvItem(var_111_object); // 0xcd2 Func
	SetItemName(var_107_string); // 0xcd4 ObjFunc
	var_114_string = "Organ"; // 0xcd6 PushS
	var_115_int = 1; // 0xcd7 PushI
	SetProperty(var_114_string, var_115_int); // 0xcd8 ObjFunc
	GetItemID(var_112_int); // 0xcda ObjFunc
	var_116_int = 0; // 0xcdc PushI
	var_117_int = 1; // 0xcdd PushI
	AddItem(var_113_bool, var_111_object, var_116_int, var_117_int); // 0xcde Func
	return 6; // 0xce0 Return
}


func_1746(var_0_cvector, var_1_cvector, var_24_int)
{
	var_25_int = 0; // 0x6d3 PushI
	var_26_bool = var_24_int != var_25_int; // 0x6d4 Neq
	if(var_26_bool == 0) goto Label_1751; // 0x6d5 JumpB
	return 0; // 0x6d6 Return
	
Label_1751:
	var_27_bool = 0; var_28_object = Obj(); // 0x6d7 PushV
	var_28_object = var_1_cvector; // 0x6d8 MovT
	func_1784(var_27_bool, var_28_object); // 0x6d9 NEW_2
	var_63_bool = var_27_bool == 0; // 0x6db Not
	if(var_63_bool == 0) goto Label_1758; // 0x6dc JumpB
	var_0_cvector = 1; // 0x6dd TMovB
	
Label_1758:
	var_64_int = 0; // 0x6de PushI
	KillTimer(var_64_int); // 0x6df Func
	Stop(); // 0x6e1 Func
	return 0; // 0x6e3 Return
}


func_3808(var_609_int)
{
	var_609_int = 0; // 0xee0 MovI
	return 0; // 0xee1 Return
}


func_3298()
{
	var_101_int = 0; // 0xce2 PushV
	func_3262(var_101_int); // 0xce3 NEW_2
	var_105_int = 1; // 0xce5 PushI
	var_106_bool = var_101_int != var_105_int; // 0xce6 Neq
	if(var_106_bool == 0) goto Label_3305; // 0xce7 JumpB
	return 0; // 0xce8 Return
	
Label_3305:
	var_107_string = ""; // 0xce9 PushV
	var_107_string = "liver"; // 0xcea MovS
	func_3281(var_107_string); // 0xceb NEW_2
	var_118_string = ""; // 0xced PushV
	var_118_string = "kidney"; // 0xcee MovS
	func_3281(var_118_string); // 0xcef NEW_2
	var_119_string = ""; // 0xcf1 PushV
	var_119_string = "heart"; // 0xcf2 MovS
	func_3281(var_119_string); // 0xcf3 NEW_2
	var_120_string = ""; // 0xcf5 PushV
	var_120_string = "blood"; // 0xcf6 MovS
	func_3281(var_120_string); // 0xcf7 NEW_2
	return 0; // 0xcf9 Return
}


func_2787(var_571_string, var_572_int)
{
	var_573_int = 2; // 0xae4 PushI
	var_574_bool = var_572_int == var_573_int; // 0xae5 Eq
	if(var_574_bool == 0) goto Label_2794; // 0xae6 JumpB
	var_571_string = "fire"; // 0xae7 MovS
	return 0; // 0xae8 Return
	
Label_2794:
	var_575_int = 1; // 0xaea PushI
	var_576_bool = var_572_int == var_575_int; // 0xaeb Eq
	if(var_576_bool == 0) goto Label_2799; // 0xaec JumpB
	var_571_string = "bullet"; // 0xaed MovS
	return 0; // 0xaee Return
	
Label_2799:
	var_571_string = "phys"; // 0xaef MovS
	return 0; // 0xaf0 Return
}


func_1768(var_0_cvector)
{
	var_0_cvector = 1; // 0x6e8 TMovB
	var_21_int = 0; // 0x6e9 PushI
	KillTimer(var_21_int); // 0x6ea Func
	Stop(); // 0x6ec Func
	return 0; // 0x6ee Return
}


func_2801(var_474_cvector)
{
	var_476_cvector = CVector(0,0,0); var_477_cvector = CVector(0,0,0); var_478_cvector = CVector(0,0,0); var_479_cvector = CVector(0,0,0); // 0xaf1 PushV
	GetPosition(var_478_cvector); // 0xaf2 Func
	GetPosition(var_479_cvector); // 0xaf4 ObjFunc
	var_474_cvector = var_479_cvector - var_478_cvector; // 0xaf6 Sub2
	return 4; // 0xaf7 Return
}


func_1784(var_743_bool, var_744_object)
{
	var_745_bool = 0; var_746_object = Obj(); // 0x6f9 PushV
	var_746_object = var_744_object; // 0x6fa Mov
	func_2939(var_745_bool, var_746_object); // 0x6fb NEW_2
	var_743_bool = var_745_bool; // 0x6fc Mov
	return 0; // 0x6fe Return
}


func_2808(var_290_bool, var_291_object)
{
	var_292_bool = 0; var_293_bool = 0; // 0xaf8 PushV
	IsPlayerActor(var_291_object, var_293_bool); // 0xaf9 Func
	var_290_bool = var_293_bool; // 0xafb Mov
	return 2; // 0xafc Return
}


func_2813(var_234_bool, var_235_object, var_236_string)
{
	var_237_bool = 0; var_238_bool = 0; // 0xafd PushV
	var_239_string = "HasProperty"; // 0xafe PushS
	var_240_int = 2; // 0xaff PushI
	var_241_bool = IsFuncExist(var_235_object, var_239_string, var_240_int); // 0xb00 FuncExist
	var_242_bool = var_241_bool == 0; // 0xb01 Not
	if(var_242_bool == 0) goto Label_2821; // 0xb02 JumpB
	var_234_bool = 0; // 0xb03 MovB
	return 2; // 0xb04 Return
	
Label_2821:
	HasProperty(var_236_string, var_238_bool); // 0xb05 ObjFunc
	var_234_bool = var_238_bool; // 0xb07 Mov
	return 2; // 0xb08 Return
}


func_1791(var_761_string)
{
	var_761_string = "walk"; // 0x6ff MovS
	return 0; // 0x700 Return
}


func_1280(var_2_object, var_269_bool, var_270_object, var_271_float, var_272_float, var_273_bool, var_274_bool)
{
	var_275_bool = 0; var_276_bool = 0; var_277_bool = 0; var_278_bool = 0; // 0x500 PushV
	var_279_object = Obj(); // 0x501 PushV
	var_279_object = var_270_object; // 0x502 Mov
	func_3229(var_279_object); // 0x503 NEW_2
	var_280_int = 1; // 0x505 PushI
	var_281_int = 5; // 0x506 PushI
	SetTimer(var_280_int, var_281_int); // 0x507 Func
	CanSee(var_277_bool, var_270_object); // 0x509 Func
	var_282_bool = var_277_bool; // 0x50b Push
	if(var_282_bool == 0) goto Label_1299; // 0x50c JumpB
	var_2_object = 1; // 0x50d TMovB
	var_283_object = Obj(); // 0x50e PushV
	var_283_object = var_270_object; // 0x50f Mov
	func_3105(var_283_object); // 0x510 NEW_2
	goto Label_1300; // 0x512 Jump
	
Label_1300:
	var_290_bool = 0; var_291_object = Obj(); // 0x514 PushV
	var_291_object = var_270_object; // 0x515 Mov
	func_2808(var_290_bool, var_291_object); // 0x516 NEW_2
	if(var_290_bool == 0) goto Label_1310; // 0x518 JumpB
	var_294_object = Obj(); // 0x519 PushV
	func_3168(var_294_object); // 0x51a NEW_2
	SendPlayerEnemy(var_270_object, var_294_object); // 0x51c Func
	
Label_1310:
	var_295_bool = 0; var_296_object = Obj(); var_297_float = 0; var_298_float = 0; var_299_bool = 0; var_300_bool = 0; // 0x51e PushV
	var_296_object = var_270_object; // 0x51f Mov
	var_297_float = var_271_float; // 0x520 Mov
	var_298_float = var_272_float; // 0x521 Mov
	var_299_bool = var_273_bool; // 0x522 Mov
	var_300_bool = var_274_bool; // 0x523 Mov
	func_1385(var_277_bool, var_278_bool, var_295_bool, var_296_object, var_297_float, var_298_float, var_299_bool, var_300_bool); // 0x524 NEW_2
	var_278_bool = var_295_bool; // 0x525 Mov
	var_346_object = var_2_object; // 0x527 PushT
	if(var_346_object == 0) goto Label_1324; // 0x528 JumpB
	var_347_string = "head"; // 0x529 PushS
	UnlookAsync(var_347_string); // 0x52a Func
	
Label_1324:
	var_348_int = 1; // 0x52c PushI
	KillTimer(var_348_int); // 0x52d Func
	var_269_bool = var_278_bool; // 0x52f Mov
	return 4; // 0x530 Return
	
Label_1299:
	var_2_object = 0; // 0x513 TMovB
}


func_769(var_4_int)
{
	Stop(); // 0x301 Func
	StopAnimation(); // 0x303 Func
	StopGroup0(); // 0x305 Func
	var_4_int = 1; // 0x307 TMovB
	return 0; // 0x308 Return
}


func_3330(var_22_bool, var_23_object, var_24_string)
{
	var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_float = 0; var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_float = 0; // 0xd02 PushV
	var_49_object = Obj(); // 0xd03 PushV
	func_3168(var_49_object); // 0xd04 NEW_2
	var_52_bool = var_23_object == var_49_object; // 0xd06 Eq
	if(var_52_bool == 0) goto Label_3338; // 0xd07 JumpB
	var_22_bool = 0; // 0xd08 MovB
	return 24; // 0xd09 Return
	
Label_3338:
	var_53_string = "b9q03_corpse"; // 0xd0a PushS
	var_54_int = GlobalVars[1]; // 0xd0b PushGE
	var_55_int = 1; // 0xd0c PushI
	var_56_int = var_54_int + var_55_int; // 0xd0d Add
	var_57_int = var_53_string + var_56_int; // 0xd0e Add
	var_58_bool = var_24_string == var_57_int; // 0xd0f Eq
	if(var_58_bool == 0) goto Label_3353; // 0xd10 JumpB
	var_59_bool = 0; var_60_object = Obj(); // 0xd11 PushV
	var_60_object = var_23_object; // 0xd12 Mov
	func_3665(var_59_bool, var_60_object); // 0xd13 NEW_2
	if(var_59_bool == 0) goto Label_3352; // 0xd15 JumpB
	var_22_bool = 1; // 0xd16 MovB
	return 24; // 0xd17 Return
	
Label_3352:
	goto Label_3429; // 0xd18 Jump
	
Label_3429:
	var_22_bool = 0; // 0xd65 MovB
	return 24; // 0xd66 Return
	
Label_3353:
	var_67_string = "b9q03_helpme"; // 0xd19 PushS
	var_68_int = GlobalVars[1]; // 0xd1a PushGE
	var_69_int = 1; // 0xd1b PushI
	var_70_int = var_68_int + var_69_int; // 0xd1c Add
	var_71_int = var_67_string + var_70_int; // 0xd1d Add
	var_72_bool = var_24_string == var_71_int; // 0xd1e Eq
	if(var_72_bool == 0) goto Label_3377; // 0xd1f JumpB
	GetPosition(var_37_cvector); // 0xd20 ObjFunc
	GetPosition(var_38_cvector); // 0xd22 Func
	var_39_cvector = var_37_cvector - var_38_cvector; // 0xd24 Sub2
	var_40_float = var_39_cvector | var_39_cvector; // 0xd25 Or2
	var_73_float = 4000000.0; // 0xd26 PushF
	var_74_bool = var_40_float < var_73_float; // 0xd27 LT
	if(var_74_bool == 0) goto Label_3376; // 0xd28 JumpB
	var_75_bool = 0; var_76_object = Obj(); // 0xd29 PushV
	var_76_object = var_23_object; // 0xd2a Mov
	func_3701(var_75_bool, var_76_object); // 0xd2b NEW_2
	if(var_75_bool == 0) goto Label_3376; // 0xd2d JumpB
	var_22_bool = 1; // 0xd2e MovB
	return 24; // 0xd2f Return
	
Label_3376:
	goto Label_3429; // 0xd30 Jump
	
Label_3377:
	var_83_string = "player_shot"; // 0xd31 PushS
	var_84_bool = var_24_string == var_83_string; // 0xd32 Eq
	if(var_84_bool == 0) goto Label_3407; // 0xd33 JumpB
	GetPosition(var_41_cvector); // 0xd34 ObjFunc
	GetPosition(var_42_cvector); // 0xd36 Func
	var_43_cvector = var_41_cvector - var_42_cvector; // 0xd38 Sub2
	var_44_float = var_43_cvector | var_43_cvector; // 0xd39 Or2
	var_85_float = 360000.0; // 0xd3a PushF
	var_86_bool = var_44_float < var_85_float; // 0xd3b LT
	if(var_86_bool == 0) goto Label_3396; // 0xd3c JumpB
	var_87_bool = 0; var_88_object = Obj(); // 0xd3d PushV
	var_88_object = var_23_object; // 0xd3e Mov
	func_3701(var_87_bool, var_88_object); // 0xd3f NEW_2
	if(var_87_bool == 0) goto Label_3396; // 0xd41 JumpB
	var_22_bool = 1; // 0xd42 MovB
	return 24; // 0xd43 Return
	
Label_3396:
	var_89_float = 12250000.0; // 0xd44 PushF
	var_90_bool = var_44_float < var_89_float; // 0xd45 LT
	if(var_90_bool == 0) goto Label_3406; // 0xd46 JumpB
	var_91_bool = 0; var_92_object = Obj(); // 0xd47 PushV
	var_92_object = var_23_object; // 0xd48 Mov
	func_3665(var_91_bool, var_92_object); // 0xd49 NEW_2
	if(var_91_bool == 0) goto Label_3406; // 0xd4b JumpB
	var_22_bool = 1; // 0xd4c MovB
	return 24; // 0xd4d Return
	
Label_3406:
	goto Label_3429; // 0xd4e Jump
	
Label_3407:
	var_93_string = "b9q03BonfireBurnedByFollower"; // 0xd4f PushS
	var_94_bool = var_24_string == var_93_string; // 0xd50 Eq
	if(var_94_bool == 0) goto Label_3429; // 0xd51 JumpB
	GetPosition(var_45_cvector); // 0xd52 ObjFunc
	GetPosition(var_46_cvector); // 0xd54 Func
	var_47_cvector = var_45_cvector - var_46_cvector; // 0xd56 Sub2
	var_48_float = var_47_cvector | var_47_cvector; // 0xd57 Or2
	var_95_float = 2250000.0; // 0xd58 PushF
	var_96_bool = var_48_float < var_95_float; // 0xd59 LT
	if(var_96_bool == 0) goto Label_3429; // 0xd5a JumpB
	var_97_bool = 0; var_98_object = Obj(); // 0xd5b PushV
	var_98_object = var_23_object; // 0xd5c Mov
	func_3701(var_97_bool, var_98_object); // 0xd5d NEW_2
	if(var_97_bool == 0) goto Label_3429; // 0xd5f JumpB
	var_99_string = "Attacking follower after he has burned bonefire."; // 0xd60 PushS
	Trace(var_99_string); // 0xd61 Func
	var_22_bool = 1; // 0xd63 MovB
	return 24; // 0xd64 Return
}


func_1795()
{
	func_1850(); // 0x704 NEW_2
	return 0; // 0x706 Return
}


func_1793(var_762_string)
{
	var_762_string = "run"; // 0x701 MovS
	return 0; // 0x702 Return
}


func_777(var_1_cvector, var_2_object, var_5_bool)
{
	var_178_bool = 0; var_179_bool = 0; var_180_cvector = CVector(0,0,0); var_181_bool = 0; var_182_bool = 0; var_183_cvector = CVector(0,0,0); // 0x309 PushV
	var_1_cvector = 0; // 0x30a TMovI
	
Label_779:
	var_184_string = "all"; // 0x30b PushS
	var_185_string = "attack_begin"; // 0x30c PushS
	var_186_int = 1; // 0x30d PushI
	var_187_int = var_1_cvector + var_186_int; // 0x30e Add
	var_188_int = var_185_string + var_187_int; // 0x30f Add
	HasAnimation(var_181_bool, var_184_string, var_188_int); // 0x310 Func
	var_189_bool = var_181_bool == 0; // 0x312 Not
	if(var_189_bool == 0) goto Label_789; // 0x313 JumpB
	goto Label_792; // 0x314 Jump
	
Label_792:
	var_2_object = 0; // 0x318 TMovI
	
Label_793:
	var_190_string = "attack"; // 0x319 PushS
	var_191_int = 1; // 0x31a PushI
	var_192_int = var_2_object + var_191_int; // 0x31b Add
	var_193_int = var_190_string + var_192_int; // 0x31c Add
	IsExisting3DSound(var_182_bool, var_193_int); // 0x31d Func
	var_194_bool = var_182_bool == 0; // 0x31f Not
	if(var_194_bool == 0) goto Label_802; // 0x320 JumpB
	goto Label_805; // 0x321 Jump
	
Label_805:
	var_195_string = "all"; // 0x325 PushS
	var_196_string = "bjump"; // 0x326 PushS
	GetAnimationOffset(var_183_cvector, var_195_string, var_196_string); // 0x327 Func
	var_197_float = GetByIndex(var_183_cvector, 2); // 0x329 PushE
	var_5_bool = -var_197_float; // 0x32a Neg2
	return 6; // 0x32b Return
	
Label_802:
	var_198_int = 1; // 0x322 PushI
	var_2_object = var_2_object + var_198_int; // 0x323 Add2
	goto Label_793; // 0x324 Jump
	
Label_789:
	var_199_int = 1; // 0x315 PushI
	var_1_cvector = var_1_cvector + var_199_int; // 0x316 Add2
	goto Label_779; // 0x317 Jump
}


func_2825(var_543_float, var_544_object, var_545_float, var_546_int)
{
	var_550_int = 0; var_551_string = ""; var_552_int = 0; var_553_float = 0; var_554_float = 0; var_555_float = 0; var_556_int = 0; var_557_string = ""; var_558_int = 0; var_559_float = 0; var_560_float = 0; var_561_float = 0; // 0xb09 PushV
	var_562_bool = 0; var_563_object = Obj(); var_564_string = ""; // 0xb0a PushV
	var_563_object = var_544_object; // 0xb0b Mov
	var_564_string = "health"; // 0xb0c MovS
	func_2813(var_562_bool, var_563_object, var_564_string); // 0xb0d NEW_2
	var_565_bool = var_562_bool == 0; // 0xb0f Not
	if(var_565_bool == 0) goto Label_2835; // 0xb10 JumpB
	var_543_float = 0.0; // 0xb11 MovF
	return 12; // 0xb12 Return
	
Label_2835:
	var_566_bool = 0; var_567_object = Obj(); var_568_string = ""; // 0xb13 PushV
	var_567_object = var_544_object; // 0xb14 Mov
	var_568_string = "armor"; // 0xb15 MovS
	func_2813(var_566_bool, var_567_object, var_568_string); // 0xb16 NEW_2
	var_569_bool = var_566_bool == 0; // 0xb18 Not
	if(var_569_bool == 0) goto Label_2844; // 0xb19 JumpB
	var_556_int = 0; // 0xb1a MovI
	goto Label_2847; // 0xb1b Jump
	
Label_2847:
	var_570_string = "armor_"; // 0xb1f PushS
	var_571_string = ""; var_572_int = 0; // 0xb20 PushV
	var_572_int = var_546_int; // 0xb21 Mov
	func_2787(var_571_string, var_572_int); // 0xb22 NEW_2
	var_557_string = var_570_string + var_571_string; // 0xb24 Add2
	var_577_bool = 0; var_578_object = Obj(); var_579_string = ""; // 0xb25 PushV
	var_578_object = var_544_object; // 0xb26 Mov
	var_579_string = var_557_string; // 0xb27 Mov
	func_2813(var_577_bool, var_578_object, var_579_string); // 0xb28 NEW_2
	var_580_bool = var_577_bool == 0; // 0xb2a Not
	if(var_580_bool == 0) goto Label_2862; // 0xb2b JumpB
	var_558_int = 0; // 0xb2c MovI
	goto Label_2864; // 0xb2d Jump
	
Label_2864:
	var_581_float = 0; var_582_float = 0; var_583_float = 0; // 0xb30 PushV
	var_584_int = var_556_int + var_558_int; // 0xb31 Add
	var_585_float = 100.0; // 0xb32 PushF
	var_582_float = var_584_int / var_584_int; // 0xb33 Div2
	var_583_float = 1; // 0xb34 MovI
	func_3184(var_581_float, var_582_float, var_583_float); // 0xb35 NEW_2
	var_559_float = var_581_float; // 0xb36 Mov
	var_587_string = "health"; // 0xb38 PushS
	GetProperty(var_587_string, var_560_float); // 0xb39 ObjFunc
	var_588_int = 1; // 0xb3b PushI
	var_589_int = var_588_int - var_559_float; // 0xb3c Sub
	var_561_float = var_545_float * var_589_int; // 0xb3d Mult2
	var_590_string = "health"; // 0xb3e PushS
	var_591_float = 0; var_592_float = 0; var_593_float = 0; var_594_float = 0; // 0xb3f PushV
	var_592_float = var_560_float - var_561_float; // 0xb40 Sub2
	var_593_float = 0; // 0xb41 MovI
	var_594_float = 1; // 0xb42 MovI
	func_3191(var_591_float, var_592_float, var_593_float, var_594_float); // 0xb43 NEW_2
	SetProperty(var_590_string, var_591_float); // 0xb45 ObjFunc
	var_597_bool = 0; var_598_object = Obj(); // 0xb47 PushV
	var_598_object = var_544_object; // 0xb48 Mov
	func_2808(var_597_bool, var_598_object); // 0xb49 NEW_2
	if(var_597_bool == 0) goto Label_2896; // 0xb4b JumpB
	var_599_float = 0; // 0xb4c PushV
	var_599_float = -var_561_float; // 0xb4d Neg2
	func_3212(var_599_float); // 0xb4e NEW_2
	
Label_2896:
	var_543_float = var_561_float; // 0xb50 Mov
	return 12; // 0xb51 Return
	
Label_2862:
	GetProperty(var_557_string, var_558_int); // 0xb2e ObjFunc
	
Label_2844:
	var_607_string = "armor"; // 0xb1c PushS
	GetProperty(var_607_string, var_556_int); // 0xb1d ObjFunc
}


func_812(var_0_cvector, var_529_float, var_530_int)
{
	var_531_object = Obj(); var_532_float = 0; var_533_float = 0; var_534_object = Obj(); var_535_float = 0; var_536_float = 0; // 0x32c PushV
	var_537_float = 0.9; // 0x32d PushF
	var_538_float = var_529_float * var_537_float; // 0x32e Mult
	GetVictim(var_538_float, var_534_object); // 0x32f Func
	ReportAttack(var_0_cvector); // 0x331 Func
	var_539_bool = var_534_object == var_0_cvector; // 0x333 Eq
	if(var_539_bool == 0) goto Label_849; // 0x334 JumpB
	var_540_float = 0; var_541_object = Obj(); var_542_int = 0; // 0x335 PushV
	var_541_object = var_534_object; // 0x336 Mov
	var_542_int = var_530_int; // 0x337 Mov
	func_461(var_542_int); // 0x338 NEW_2
	var_535_float = var_540_float; // 0x339 Mov
	var_543_float = 0; var_544_object = Obj(); var_545_float = 0; var_546_int = 0; // 0x33b PushV
	var_544_object = var_534_object; // 0x33c Mov
	var_545_float = var_535_float; // 0x33d Mov
	var_547_int = 0; var_548_object = Obj(); var_549_int = 0; // 0x33e PushV
	var_548_object = var_534_object; // 0x33f Mov
	var_549_int = var_530_int; // 0x340 Mov
	func_464(var_549_int); // 0x341 NEW_2
	var_546_int = var_547_int; // 0x342 Mov
	func_2825(var_543_float, var_544_object, var_545_float, var_546_int); // 0x344 NEW_2
	var_536_float = var_543_float; // 0x345 Mov
	var_608_int = 0; // 0x347 PushV
	func_467(var_608_int); // 0x348 NEW_2
	ReportHit(var_0_cvector, var_608_int, var_536_float, var_535_float); // 0x34a Func
	var_610_object = Obj(); var_611_float = 0; // 0x34c PushV
	var_610_object = var_534_object; // 0x34d Mov
	var_611_float = var_536_float; // 0x34e Mov
	func_1221(); // 0x34f NEW_2
	
Label_849:
	return 6; // 0x351 Return
}


func_1329(var_1_cvector, var_31_int)
{
	var_32_int = 1; // 0x532 PushI
	var_33_bool = var_31_int == var_32_int; // 0x533 Eq
	if(var_33_bool == 0) goto Label_1338; // 0x534 JumpB
	var_34_object = Obj(); // 0x535 PushV
	var_34_object = var_1_cvector; // 0x536 MovT
	func_3229(var_34_object); // 0x537 NEW_2
	goto Label_1342; // 0x539 Jump
	
Label_1342:
	return 0; // 0x53e Return
	
Label_1338:
	var_39_int = 0; // 0x53a PushV
	var_39_int = var_31_int; // 0x53b Mov
	func_1487(var_22_object, var_31_int, var_39_int); // 0x53c NEW_2
}


func_1850()
{
	var_878_int = 0; var_879_int = 0; var_880_int = 0; var_881_int = 0; var_882_bool = 0; var_883_float = 0; var_884_bool = 0; var_885_int = 0; var_886_int = 0; var_887_int = 0; var_888_int = 0; var_889_bool = 0; var_890_float = 0; var_891_bool = 0; // 0x73a PushV
	WaitForAnimEnd(); // 0x73b Func
	var_892_bool = 0; // 0x73d PushV
	func_3100(var_892_bool); // 0x73e NEW_2
	var_893_bool = var_892_bool == 0; // 0x740 Not
	if(var_893_bool == 0) goto Label_1859; // 0x741 JumpB
	return 14; // 0x742 Return
	
Label_1859:
	var_894_int = 0; // 0x743 PushV
	func_3245(var_894_int); // 0x744 NEW_2
	var_885_int = var_894_int; // 0x745 Mov
	var_886_int = 0; // 0x747 MovI
	
Label_1864:
	var_907_bool = 0; // 0x748 PushV
	var_907_bool = 0; // 0x749 MovB
	var_908_int = 5; // 0x74a PushI
	var_909_bool = var_886_int < var_908_int; // 0x74b LT
	if(var_909_bool == 0) goto Label_1874; // 0x74c JumpB
	var_910_bool = 0; // 0x74d PushV
	func_3100(var_910_bool); // 0x74e NEW_2
	if(var_910_bool == 0) goto Label_1874; // 0x750 JumpB
	var_907_bool = 1; // 0x751 MovB
	
Label_1874:
	if(var_907_bool == 0) goto Label_1926; // 0x752 JumpB
	var_911_int = 3; // 0x753 PushI
	irand(var_887_int, var_911_int); // 0x754 Func
	var_912_int = 0; // 0x756 PushI
	var_913_bool = var_887_int == var_912_int; // 0x757 Eq
	if(var_913_bool == 0) goto Label_1898; // 0x758 JumpB
	var_914_int = var_885_int; // 0x759 Push
	if(var_914_int == 0) goto Label_1897; // 0x75a JumpB
	irand(var_888_int, var_885_int); // 0x75b Func
	var_915_string = "all"; // 0x75d PushS
	var_916_string = ""; var_917_int = 0; // 0x75e PushV
	var_917_int = var_888_int; // 0x75f Mov
	func_3238(var_916_string, var_917_int); // 0x760 NEW_2
	PlayAnimation(var_915_string, var_916_string); // 0x762 Func
	WaitForAnimEnd(var_889_bool); // 0x764 Func
	var_918_bool = var_889_bool == 0; // 0x766 Not
	if(var_918_bool == 0) goto Label_1897; // 0x767 JumpB
	goto Label_1926; // 0x768 Jump
	
Label_1926:
	ResetAAS(); // 0x786 Func
	return 14; // 0x788 Return
	
Label_1897:
	goto Label_1915; // 0x769 Jump
	
Label_1915:
	var_919_bool = 0; // 0x77b PushV
	func_1929(var_919_bool); // 0x77c NEW_2
	var_920_bool = var_919_bool == 0; // 0x77e Not
	if(var_920_bool == 0) goto Label_1921; // 0x77f JumpB
	goto Label_1926; // 0x780 Jump
	
Label_1921:
	ResetAAS(); // 0x781 Func
	var_921_int = 1; // 0x783 PushI
	var_886_int = var_886_int + var_921_int; // 0x784 Add2
	goto Label_1864; // 0x785 Jump
	
Label_1898:
	var_922_int = 1; // 0x76a PushI
	var_923_bool = var_887_int == var_922_int; // 0x76b Eq
	if(var_923_bool == 0) goto Label_1912; // 0x76c JumpB
	var_924_int = 4; // 0x76d PushI
	rand(var_890_float, var_924_int); // 0x76e Func
	var_925_int = 1; // 0x770 PushI
	var_926_int = var_890_float + var_925_int; // 0x771 Add
	Sleep(var_926_int, var_891_bool); // 0x772 Func
	var_927_bool = var_891_bool == 0; // 0x774 Not
	if(var_927_bool == 0) goto Label_1911; // 0x775 JumpB
	goto Label_1926; // 0x776 Jump
	
Label_1911:
	goto Label_1915; // 0x777 Jump
	
Label_1912:
	var_928_int = var_886_int; // 0x778 Push
	if(var_928_int == 0) goto Label_1915; // 0x779 JumpB
	goto Label_1926; // 0x77a Jump
}


func_2365(var_0_cvector)
{
	var_0_cvector = 1; // 0x93d TMovB
	var_21_int = 0; // 0x93e PushI
	KillTimer(var_21_int); // 0x93f Func
	Stop(); // 0x941 Func
	return 0; // 0x943 Return
}


func_1343(var_2_object)
{
	var_21_int = 1; // 0x53f PushI
	KillTimer(var_21_int); // 0x540 Func
	var_22_object = var_2_object; // 0x542 PushT
	if(var_22_object == 0) goto Label_1352; // 0x543 JumpB
	var_2_object = 0; // 0x544 TMovB
	var_23_string = "head"; // 0x545 PushS
	UnlookAsync(var_23_string); // 0x546 Func
	
Label_1352:
	func_1509(var_20_bool); // 0x549 NEW_2
	return 0; // 0x54b Return
}


func_2381(var_864_string)
{
	var_864_string = "walk"; // 0x94d MovS
	return 0; // 0x94e Return
}


func_2383(var_865_string)
{
	var_865_string = "run"; // 0x94f MovS
	return 0; // 0x950 Return
}


func_2385(var_677_int)
{
	var_679_int = 0; var_680_int = 0; // 0x951 PushV
	var_680_int = 0; // 0x952 MovI
	
Label_2387:
	var_681_bool = var_680_int < var_677_int; // 0x953 LT
	if(var_681_bool == 0) goto Label_2399; // 0x954 JumpB
	var_682_string = ""; // 0x955 PushV
	var_682_string = "hunt"; // 0x956 MovS
	func_2455(var_682_string); // 0x957 NEW_2
	var_692_cvector = var_0_cvector; // 0x959 PushT
	if(var_692_cvector == 0) goto Label_2396; // 0x95a JumpB
	goto Label_2399; // 0x95b Jump
	
Label_2399:
	return 2; // 0x95f Return
	
Label_2396:
	var_693_int = 1; // 0x95c PushI
	var_680_int = var_680_int + var_693_int; // 0x95d Add2
	goto Label_2387; // 0x95e Jump
}


func_2898(var_227_bool)
{
	var_229_bool = 0; var_230_bool = 0; // 0xb52 PushV
	IsDead(var_230_bool); // 0xb53 ObjFunc
	var_227_bool = var_230_bool; // 0xb55 Mov
	return 2; // 0xb56 Return
}


func_851(var_0_cvector, var_494_bool, var_495_float)
{
	var_496_int = 0; var_497_bool = 0; var_498_int = 0; var_499_string = ""; var_500_int = 0; var_501_bool = 0; var_502_int = 0; var_503_string = ""; // 0x353 PushV
	func_1211(var_503_string); // 0x355 NEW_2
	irand(var_500_int, var_503_string); // 0x357 Func
	var_504_int = 1; // 0x359 PushI
	var_500_int = var_500_int + var_504_int; // 0x35a Add2
	Face(var_0_cvector); // 0x35b Func
	var_505_bool = 1; // 0x35d PushB
	SetAttackState(var_505_bool); // 0x35e Func
	var_506_string = "all"; // 0x360 PushS
	var_507_string = "attack_begin"; // 0x361 PushS
	var_508_int = var_507_string + var_500_int; // 0x362 Add
	PlayAnimation(var_506_string, var_508_int); // 0x363 Func
	WaitForAnimEnd(); // 0x365 Func
	func_1179(var_502_int, var_503_string); // 0x368 NEW_2
	var_524_bool = 0; // 0x36a PushV
	var_524_bool = 1; // 0x36b MovB
	var_525_bool = 0; var_526_object = Obj(); // 0x36c PushV
	var_526_object = var_0_cvector; // 0x36d MovT
	func_2939(var_525_bool, var_526_object); // 0x36e NEW_2
	var_527_bool = var_525_bool == 0; // 0x370 Not
	if(var_527_bool == 0) goto Label_885; // 0x371 JumpB
	var_528_int = var_4_int; // 0x372 PushT
	if(var_528_int == 0) goto Label_885; // 0x373 JumpB
	var_524_bool = 0; // 0x374 MovB
	
Label_885:
	if(var_524_bool == 0) goto Label_890; // 0x375 JumpB
	StopAsync(); // 0x376 Func
	var_494_bool = 0; // 0x378 MovB
	return 8; // 0x379 Return
	
Label_890:
	var_529_float = 0; var_530_int = 0; // 0x37a PushV
	var_529_float = var_495_float; // 0x37b Mov
	var_530_int = var_500_int; // 0x37c Mov
	func_812(var_503_string, var_529_float, var_530_int); // 0x37d NEW_2
	var_612_string = "all"; // 0x37f PushS
	var_613_string = "attack_middle"; // 0x380 PushS
	var_614_int = var_613_string + var_500_int; // 0x381 Add
	HasAnimation(var_501_bool, var_612_string, var_614_int); // 0x382 Func
	var_615_bool = var_501_bool; // 0x384 Push
	if(var_615_bool == 0) goto Label_977; // 0x385 JumpB
	var_616_string = "all"; // 0x386 PushS
	var_617_string = "attack_middle"; // 0x387 PushS
	var_618_int = var_617_string + var_500_int; // 0x388 Add
	PlayAnimation(var_616_string, var_618_int); // 0x389 Func
	WaitForAnimEnd(); // 0x38b Func
	func_1211(var_503_string); // 0x38e NEW_2
	var_619_bool = 0; // 0x390 PushV
	var_619_bool = 1; // 0x391 MovB
	var_620_bool = 0; var_621_object = Obj(); // 0x392 PushV
	var_621_object = var_0_cvector; // 0x393 MovT
	func_2939(var_620_bool, var_621_object); // 0x394 NEW_2
	var_622_bool = var_620_bool == 0; // 0x396 Not
	if(var_622_bool == 0) goto Label_923; // 0x397 JumpB
	var_623_int = var_4_int; // 0x398 PushT
	if(var_623_int == 0) goto Label_923; // 0x399 JumpB
	var_619_bool = 0; // 0x39a MovB
	
Label_923:
	if(var_619_bool == 0) goto Label_928; // 0x39b JumpB
	StopAsync(); // 0x39c Func
	var_494_bool = 0; // 0x39e MovB
	return 8; // 0x39f Return
	
Label_928:
	var_624_float = 0; var_625_int = 0; // 0x3a0 PushV
	var_624_float = var_495_float; // 0x3a1 Mov
	var_625_int = var_500_int; // 0x3a2 Mov
	func_812(var_503_string, var_624_float, var_625_int); // 0x3a3 NEW_2
	var_502_int = 1; // 0x3a5 MovI
	
Label_934:
	var_626_string = "attack_middle"; // 0x3a6 PushS
	var_627_int = var_626_string + var_500_int; // 0x3a7 Add
	var_628_string = "_"; // 0x3a8 PushS
	var_629_int = var_627_int + var_628_string; // 0x3a9 Add
	var_503_string = var_629_int + var_502_int; // 0x3aa Add2
	var_630_string = "all"; // 0x3ab PushS
	HasAnimation(var_501_bool, var_630_string, var_503_string); // 0x3ac Func
	var_631_bool = var_501_bool == 0; // 0x3ae Not
	if(var_631_bool == 0) goto Label_945; // 0x3af JumpB
	goto Label_977; // 0x3b0 Jump
	
Label_977:
	var_632_bool = 0; // 0x3d1 PushB
	SetAttackState(var_632_bool); // 0x3d2 Func
	var_633_string = "all"; // 0x3d4 PushS
	var_634_string = "attack_end"; // 0x3d5 PushS
	var_635_int = var_634_string + var_500_int; // 0x3d6 Add
	PlayAnimation(var_633_string, var_635_int); // 0x3d7 Func
	var_636_bool = 0; // 0x3d9 PushV
	func_1223(var_636_bool); // 0x3da NEW_2
	if(var_636_bool == 0) goto Label_995; // 0x3dc JumpB
	var_637_bool = 0; var_638_float = 0; // 0x3dd PushV
	var_638_float = 0.75; // 0x3de MovF
	func_997(var_637_bool, var_638_float); // 0x3df NEW_2
	StopAsync(); // 0x3e1 Func
	
Label_995:
	var_494_bool = 1; // 0x3e3 MovB
	return 8; // 0x3e4 Return
	
Label_945:
	var_646_string = "all"; // 0x3b1 PushS
	PlayAnimation(var_646_string, var_503_string); // 0x3b2 Func
	WaitForAnimEnd(); // 0x3b4 Func
	func_1211(var_503_string); // 0x3b7 NEW_2
	var_647_bool = 0; // 0x3b9 PushV
	var_647_bool = 1; // 0x3ba MovB
	var_648_bool = 0; var_649_object = Obj(); // 0x3bb PushV
	var_649_object = var_0_cvector; // 0x3bc MovT
	func_2939(var_648_bool, var_649_object); // 0x3bd NEW_2
	var_650_bool = var_648_bool == 0; // 0x3bf Not
	if(var_650_bool == 0) goto Label_964; // 0x3c0 JumpB
	var_651_int = var_4_int; // 0x3c1 PushT
	if(var_651_int == 0) goto Label_964; // 0x3c2 JumpB
	var_647_bool = 0; // 0x3c3 MovB
	
Label_964:
	if(var_647_bool == 0) goto Label_969; // 0x3c4 JumpB
	StopAsync(); // 0x3c5 Func
	var_494_bool = 0; // 0x3c7 MovB
	return 8; // 0x3c8 Return
	
Label_969:
	var_652_float = 0; var_653_int = 0; // 0x3c9 PushV
	var_652_float = var_495_float; // 0x3ca Mov
	var_653_int = var_500_int; // 0x3cb Mov
	func_812(var_503_string, var_652_float, var_653_int); // 0x3cc NEW_2
	var_654_int = 1; // 0x3ce PushI
	var_502_int = var_502_int + var_654_int; // 0x3cf Add2
	goto Label_934; // 0x3d0 Jump
}


func_2903(var_216_bool, var_217_object)
{
	var_218_object = Obj(); var_219_object = Obj(); var_220_object = Obj(); var_221_object = Obj(); // 0xb57 PushV
	var_222_bool = var_217_object == 0; // 0xb58 NullEq
	if(var_222_bool == 0) goto Label_2908; // 0xb59 JumpB
	var_216_bool = 0; // 0xb5a MovB
	return 4; // 0xb5b Return
	
Label_2908:
	var_223_bool = 0; // 0xb5c PushV
	var_223_bool = 0; // 0xb5d MovB
	var_224_string = "IsDead"; // 0xb5e PushS
	var_225_int = 1; // 0xb5f PushI
	var_226_bool = IsFuncExist(var_217_object, var_224_string, var_225_int); // 0xb60 FuncExist
	if(var_226_bool == 0) goto Label_2920; // 0xb61 JumpB
	var_227_bool = 0; var_228_object = Obj(); // 0xb62 PushV
	var_228_object = var_217_object; // 0xb63 Mov
	func_2898(var_228_object); // 0xb64 NEW_2
	if(var_227_bool == 0) goto Label_2920; // 0xb66 JumpB
	var_223_bool = 1; // 0xb67 MovB
	
Label_2920:
	if(var_223_bool == 0) goto Label_2923; // 0xb68 JumpB
	var_216_bool = 0; // 0xb69 MovB
	return 4; // 0xb6a Return
	
Label_2923:
	GetScene(var_220_object); // 0xb6b Func
	var_231_bool = var_220_object == 0; // 0xb6d NullEq
	if(var_231_bool == 0) goto Label_2929; // 0xb6e JumpB
	var_216_bool = 0; // 0xb6f MovB
	return 4; // 0xb70 Return
	
Label_2929:
	GetScene(var_221_object); // 0xb71 ObjFunc
	var_232_bool = var_220_object != var_221_object; // 0xb73 Neq
	if(var_232_bool == 0) goto Label_2935; // 0xb74 JumpB
	var_216_bool = 0; // 0xb75 MovB
	return 4; // 0xb76 Return
	
Label_2935:
	var_216_bool = 1; // 0xb77 MovB
	return 4; // 0xb78 Return
}


func_3431(var_21_bool, var_22_object)
{
	var_23_bool = 0; // 0xd68 PushV
	var_23_bool = 0; // 0xd69 MovB
	var_24_string = "IsDead"; // 0xd6a PushS
	var_25_int = 1; // 0xd6b PushI
	var_26_bool = IsFuncExist(var_22_object, var_24_string, var_25_int); // 0xd6c FuncExist
	if(var_26_bool == 0) goto Label_3444; // 0xd6d JumpB
	var_27_bool = 0; var_28_object = Obj(); // 0xd6e PushV
	var_28_object = var_22_object; // 0xd6f Mov
	func_2898(var_28_object); // 0xd70 NEW_2
	if(var_27_bool == 0) goto Label_3444; // 0xd72 JumpB
	var_23_bool = 1; // 0xd73 MovB
	
Label_3444:
	if(var_23_bool == 0) goto Label_3464; // 0xd74 JumpB
	var_31_bool = 0; var_32_object = Obj(); var_33_string = ""; // 0xd75 PushV
	var_32_object = var_22_object; // 0xd76 Mov
	var_33_string = "b9q03_corpse"; // 0xd77 MovS
	func_2813(var_31_bool, var_32_object, var_33_string); // 0xd78 NEW_2
	if(var_31_bool == 0) goto Label_3453; // 0xd7a JumpB
	var_21_bool = 0; // 0xd7b MovB
	return 0; // 0xd7c Return
	
Label_3453:
	var_40_string = "b9q03_corpse"; // 0xd7d PushS
	var_41_int = 1; // 0xd7e PushI
	SetProperty(var_40_string, var_41_int); // 0xd7f ObjFunc
	var_42_bool = 0; var_43_object = Obj(); // 0xd81 PushV
	var_43_object = var_22_object; // 0xd82 Mov
	func_3647(var_42_bool, var_43_object); // 0xd83 NEW_2
	var_21_bool = var_42_bool; // 0xd84 Mov
	return 0; // 0xd86 Return
	
Label_3464:
	var_50_bool = 0; var_51_object = Obj(); // 0xd88 PushV
	var_51_object = var_22_object; // 0xd89 Mov
	func_2808(var_50_bool, var_51_object); // 0xd8a NEW_2
	if(var_50_bool == 0) goto Label_3476; // 0xd8c JumpB
	var_54_bool = 0; var_55_object = Obj(); // 0xd8d PushV
	var_55_object = var_22_object; // 0xd8e Mov
	func_3701(var_54_bool, var_55_object); // 0xd8f NEW_2
	var_21_bool = var_54_bool; // 0xd90 Mov
	return 0; // 0xd92 Return
	
Label_3476:
	var_62_bool = 0; var_63_object = Obj(); var_64_string = ""; // 0xd94 PushV
	var_63_object = var_22_object; // 0xd95 Mov
	var_64_string = "b9q03"; // 0xd96 MovS
	func_2813(var_62_bool, var_63_object, var_64_string); // 0xd97 NEW_2
	if(var_62_bool == 0) goto Label_3488; // 0xd99 JumpB
	var_65_bool = 0; var_66_object = Obj(); // 0xd9a PushV
	var_66_object = var_22_object; // 0xd9b Mov
	func_3701(var_65_bool, var_66_object); // 0xd9c NEW_2
	var_21_bool = var_65_bool; // 0xd9d Mov
	return 0; // 0xd9f Return
	
Label_3488:
	var_21_bool = 0; // 0xda0 MovB
	return 0; // 0xda1 Return
}


func_1385(var_0_cvector, var_1_cvector, var_295_bool, var_296_object, var_297_float, var_298_float, var_299_bool, var_300_bool)
{
	var_301_bool = 0; var_302_bool = 0; var_303_object = Obj(); var_304_cvector = CVector(0,0,0); var_305_cvector = CVector(0,0,0); var_306_cvector = CVector(0,0,0); var_307_float = 0; var_308_object = Obj(); var_309_bool = 0; var_310_bool = 0; var_311_object = Obj(); var_312_cvector = CVector(0,0,0); var_313_cvector = CVector(0,0,0); var_314_cvector = CVector(0,0,0); var_315_float = 0; var_316_object = Obj(); // 0x569 PushV
	var_0_cvector = 0; // 0x56a TMovB
	var_1_cvector = var_296_object; // 0x56b TMov
	var_310_bool = var_300_bool; // 0x56c Mov
	
Label_1389:
	var_317_bool = 0; var_318_object = Obj(); // 0x56d PushV
	var_318_object = var_296_object; // 0x56e Mov
	func_1525(var_317_bool, var_318_object); // 0x56f NEW_2
	var_321_bool = var_317_bool == 0; // 0x571 Not
	if(var_321_bool == 0) goto Label_1397; // 0x572 JumpB
	var_295_bool = 0; // 0x573 MovB
	return 16; // 0x574 Return
	
Label_1397:
	GetPosition(var_312_cvector); // 0x575 ObjFunc
	GetPosition(var_313_cvector); // 0x577 Func
	var_314_cvector = var_312_cvector - var_313_cvector; // 0x579 Sub2
	var_315_float = var_314_cvector | var_314_cvector; // 0x57a Or2
	var_322_bool = 0; // 0x57b PushV
	var_322_bool = 0; // 0x57c MovB
	var_323_int = 0; // 0x57d PushI
	var_324_bool = var_298_float > var_323_int; // 0x57e GT
	if(var_324_bool == 0) goto Label_1412; // 0x57f JumpB
	var_325_float = var_298_float * var_298_float; // 0x580 Mult
	var_326_bool = var_315_float > var_325_float; // 0x581 GT
	if(var_326_bool == 0) goto Label_1412; // 0x582 JumpB
	var_322_bool = 1; // 0x583 MovB
	
Label_1412:
	if(var_322_bool == 0) goto Label_1417; // 0x584 JumpB
	Stop(); // 0x585 Func
	var_295_bool = 0; // 0x587 MovB
	return 16; // 0x588 Return
	
Label_1417:
	var_327_float = var_297_float * var_297_float; // 0x589 Mult
	var_328_bool = var_315_float > var_327_float; // 0x58a GT
	if(var_328_bool == 0) goto Label_1479; // 0x58b JumpB
	GetPFPosition(var_312_cvector); // 0x58c ObjFunc
	FindPathTo(var_316_object, var_312_cvector); // 0x58e Func
	var_329_bool = var_316_object != 0; // 0x590 NullNeq
	if(var_329_bool == 0) goto Label_1428; // 0x591 JumpB
	var_311_object = var_316_object; // 0x592 Mov
	var_316_object = 0; // 0x593 SetNull
	
Label_1428:
	var_330_bool = var_311_object != 0; // 0x594 NullNeq
	if(var_330_bool == 0) goto Label_1461; // 0x595 JumpB
	var_331_bool = var_310_bool; // 0x596 Push
	if(var_331_bool == 0) goto Label_1438; // 0x597 JumpB
	var_310_bool = 0; // 0x598 MovB
	RotatePath(var_311_object, var_309_bool); // 0x599 Func
	var_332_bool = var_309_bool == 0; // 0x59b Not
	if(var_332_bool == 0) goto Label_1438; // 0x59c JumpB
	goto Label_1485; // 0x59d Jump
	
Label_1485:
	var_295_bool = !var_0_cvector; // 0x5cd Not2
	return 16; // 0x5ce Return
	
Label_1438:
	var_333_int = 0; // 0x59e PushI
	var_334_float = 0.3; // 0x59f PushF
	SetTimer(var_333_int, var_334_float); // 0x5a0 Func
	var_335_string = ""; // 0x5a2 PushV
	func_1532(var_335_string); // 0x5a3 NEW_2
	var_336_string = ""; // 0x5a5 PushV
	func_1534(var_336_string); // 0x5a6 NEW_2
	FollowPath(var_311_object, var_299_bool, var_309_bool, var_335_string, var_336_string); // 0x5a8 Func
	var_337_bool = var_309_bool == 0; // 0x5aa Not
	if(var_337_bool == 0) goto Label_1459; // 0x5ab JumpB
	var_338_cvector = var_0_cvector; // 0x5ac PushT
	if(var_338_cvector == 0) goto Label_1457; // 0x5ad JumpB
	var_311_object = 0; // 0x5ae SetNull
	goto Label_1485; // 0x5af Jump
	
Label_1457:
	goto Label_1484; // 0x5b1 Jump
	
Label_1484:
	goto Label_1389; // 0x5cc Jump
	
Label_1459:
	var_311_object = 0; // 0x5b3 SetNull
	goto Label_1477; // 0x5b4 Jump
	
Label_1477:
	var_316_object = 0; // 0x5c5 SetNull
	goto Label_1483; // 0x5c6 Jump
	
Label_1483:
	var_311_object = 0; // 0x5cb SetNull
	
Label_1461:
	var_339_int = 0; // 0x5b5 PushI
	KillTimer(var_339_int); // 0x5b6 Func
	var_340_float = 0.5; // 0x5b8 PushF
	Sleep(var_340_float, var_309_bool); // 0x5b9 Func
	var_341_bool = var_309_bool == 0; // 0x5bb Not
	if(var_341_bool == 0) goto Label_1473; // 0x5bc JumpB
	var_342_cvector = var_0_cvector; // 0x5bd PushT
	if(var_342_cvector == 0) goto Label_1473; // 0x5be JumpB
	var_311_object = 0; // 0x5bf SetNull
	goto Label_1485; // 0x5c0 Jump
	
Label_1473:
	var_343_int = 0; // 0x5c1 PushI
	var_344_float = 0.3; // 0x5c2 PushF
	SetTimer(var_343_int, var_344_float); // 0x5c3 Func
	
Label_1479:
	var_345_int = 0; // 0x5c7 PushI
	KillTimer(var_345_int); // 0x5c8 Func
	goto Label_1485; // 0x5ca Jump
}


func_2939(var_212_bool, var_213_object)
{
	var_214_int = 0; var_215_int = 0; // 0xb7b PushV
	var_216_bool = 0; var_217_object = Obj(); // 0xb7c PushV
	var_217_object = var_213_object; // 0xb7d Mov
	func_2903(var_216_bool, var_217_object); // 0xb7e NEW_2
	var_233_bool = var_216_bool == 0; // 0xb80 Not
	if(var_233_bool == 0) goto Label_2948; // 0xb81 JumpB
	var_212_bool = 0; // 0xb82 MovB
	return 2; // 0xb83 Return
	
Label_2948:
	var_234_bool = 0; var_235_object = Obj(); var_236_string = ""; // 0xb84 PushV
	var_235_object = var_213_object; // 0xb85 Mov
	var_236_string = "noaccess"; // 0xb86 MovS
	func_2813(var_234_bool, var_235_object, var_236_string); // 0xb87 NEW_2
	var_243_bool = var_234_bool == 0; // 0xb89 Not
	if(var_243_bool == 0) goto Label_2957; // 0xb8a JumpB
	var_212_bool = 1; // 0xb8b MovB
	return 2; // 0xb8c Return
	
Label_2957:
	var_244_string = "noaccess"; // 0xb8d PushS
	GetProperty(var_244_string, var_215_int); // 0xb8e ObjFunc
	var_245_int = 0; // 0xb90 PushI
	var_212_bool = var_215_int == var_245_int; // 0xb91 Eq2
	return 2; // 0xb92 Return
}


func_1929(var_919_bool)
{
	var_919_bool = 1; // 0x789 MovB
	return 0; // 0x78a Return
}


func_1931()
{
	StopAnimation(); // 0x78b Func
	StopGroup0(); // 0x78d Func
	return 0; // 0x78f Return
}


func_1936(var_932_bool, var_933_cvector, var_934_cvector, var_935_bool)
{
	var_937_float = GetByIndex(var_933_cvector, 1); // 0x791 PushE
	var_938_int = 30; // 0x792 PushI
	var_937_float = var_937_float + var_938_int; // 0x793 Add2
	SetByIndex(var_933_cvector, 1) = var_937_float; // 0x794 PopE
	var_939_bool = 0; var_940_cvector = CVector(0,0,0); var_941_cvector = CVector(0,0,0); var_942_float = 0; var_943_float = 0; var_944_bool = 0; var_945_bool = 0; // 0x795 PushV
	var_940_cvector = var_933_cvector; // 0x796 Mov
	var_941_cvector = var_934_cvector; // 0x797 Mov
	var_942_float = 100; // 0x798 MovI
	var_943_float = 4000; // 0x799 MovI
	var_944_bool = var_935_bool; // 0x79a Mov
	var_945_bool = 1; // 0x79b MovB
	func_2005(var_935_bool, var_939_bool, var_940_cvector, var_941_cvector, var_942_float, var_943_float, var_944_bool, var_945_bool); // 0x79c NEW_2
	var_932_bool = var_939_bool; // 0x79d Mov
	return 0; // 0x79f Return
}


func_2963(var_37_object)
{
	var_38_bool = 0; var_39_int = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_string = ""; var_45_bool = 0; var_46_int = 0; var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_string = ""; // 0xb93 PushV
	var_52_bool = var_37_object == 0; // 0xb94 NullEq
	if(var_52_bool == 0) goto Label_2967; // 0xb95 JumpB
	return 14; // 0xb96 Return
	
Label_2967:
	IsDead(var_45_bool); // 0xb97 Func
	var_53_bool = var_45_bool; // 0xb99 Push
	if(var_53_bool == 0) goto Label_2972; // 0xb9a JumpB
	return 14; // 0xb9b Return
	
Label_2972:
	GetSecondaryAnimationType(var_46_int); // 0xb9c Func
	var_54_int = 0; // 0xb9e PushI
	var_55_bool = var_46_int < var_54_int; // 0xb9f LT
	if(var_55_bool == 0) goto Label_2978; // 0xba0 JumpB
	return 14; // 0xba1 Return
	
Label_2978:
	GetPosition(var_47_cvector); // 0xba2 ObjFunc
	GetPosition(var_48_cvector); // 0xba4 Func
	GetDirection(var_49_cvector); // 0xba6 Func
	var_50_cvector = var_48_cvector - var_47_cvector; // 0xba8 Sub2
	var_56_float = GetByIndex(var_50_cvector, 0); // 0xba9 PushE
	var_57_float = GetByIndex(var_49_cvector, 0); // 0xbaa PushE
	var_58_float = var_56_float * var_57_float; // 0xbab Mult
	var_59_float = GetByIndex(var_50_cvector, 2); // 0xbac PushE
	var_60_float = GetByIndex(var_49_cvector, 2); // 0xbad PushE
	var_61_float = var_59_float * var_60_float; // 0xbae Mult
	var_62_int = var_58_float + var_61_float; // 0xbaf Add
	var_63_int = 0; // 0xbb0 PushI
	var_64_bool = var_62_int >= var_63_int; // 0xbb1 GE
	if(var_64_bool == 0) goto Label_2997; // 0xbb2 JumpB
	var_51_string = "fhit"; // 0xbb3 MovS
	goto Label_2998; // 0xbb4 Jump
	
Label_2998:
	var_65_string = "hit_react"; // 0xbb6 PushS
	var_66_string = "1"; // 0xbb7 PushS
	var_67_int = var_51_string + var_66_string; // 0xbb8 Add
	var_68_string = "2"; // 0xbb9 PushS
	var_69_int = var_51_string + var_68_string; // 0xbba Add
	var_70_int = -10; // 0xbbb PushI
	FadeSecondaryAnimation(var_65_string, var_67_int, var_69_int, var_70_int); // 0xbbc Func
	return 14; // 0xbbe Return
	
Label_2997:
	var_51_string = "bhit"; // 0xbb5 MovS
}


func_2455(var_682_string)
{
	var_683_bool = 0; var_684_bool = 0; var_685_bool = 0; var_686_bool = 0; // 0x997 PushV
	WaitForAnimEnd(); // 0x998 Func
	var_687_bool = 0; // 0x99a PushV
	func_3100(var_687_bool); // 0x99b NEW_2
	var_688_bool = var_687_bool == 0; // 0x99d Not
	if(var_688_bool == 0) goto Label_2464; // 0x99e JumpB
	return 4; // 0x99f Return
	
Label_2464:
	var_689_string = "all"; // 0x9a0 PushS
	HasAnimation(var_685_bool, var_689_string, var_682_string); // 0x9a1 Func
	var_690_bool = var_685_bool == 0; // 0x9a3 Not
	if(var_690_bool == 0) goto Label_2470; // 0x9a4 JumpB
	return 4; // 0x9a5 Return
	
Label_2470:
	var_691_string = "all"; // 0x9a6 PushS
	PlayAnimation(var_691_string, var_682_string); // 0x9a7 Func
	WaitForAnimEnd(var_686_bool); // 0x9a9 Func
	return 4; // 0x9ab Return
}


func_3490(var_21_bool, var_22_object)
{
	var_23_bool = 0; var_24_object = Obj(); // 0xda3 PushV
	var_24_object = var_22_object; // 0xda4 Mov
	func_2808(var_23_bool, var_24_object); // 0xda5 NEW_2
	if(var_23_bool == 0) goto Label_3503; // 0xda7 JumpB
	var_27_bool = 0; var_28_object = Obj(); // 0xda8 PushV
	var_28_object = var_22_object; // 0xda9 Mov
	func_3683(var_27_bool, var_28_object); // 0xdaa NEW_2
	var_21_bool = var_27_bool; // 0xdab Mov
	return 0; // 0xdad Return
	
Label_3503:
	var_35_bool = 0; var_36_object = Obj(); var_37_string = ""; // 0xdaf PushV
	var_36_object = var_22_object; // 0xdb0 Mov
	var_37_string = "b9q03"; // 0xdb1 MovS
	func_2813(var_35_bool, var_36_object, var_37_string); // 0xdb2 NEW_2
	if(var_35_bool == 0) goto Label_3515; // 0xdb4 JumpB
	var_44_bool = 0; var_45_object = Obj(); // 0xdb5 PushV
	var_45_object = var_22_object; // 0xdb6 Mov
	func_3683(var_44_bool, var_45_object); // 0xdb7 NEW_2
	var_21_bool = var_44_bool; // 0xdb8 Mov
	return 0; // 0xdba Return
	
Label_3515:
	var_21_bool = 0; // 0xdbb MovB
	return 0; // 0xdbc Return
}


func_2476()
{
	StopAnimation(); // 0x9ac Func
	StopGroup0(); // 0x9ae Func
	return 0; // 0x9b0 Return
}


func_2481(var_21_object)
{
	var_22_int = 1; // 0x9b2 PushI
	var_23_int = GlobalVars[3]; // 0x9b3 PushGE
	var_24_bool = var_22_int == var_23_int; // 0x9b4 Eq
	if(var_24_bool == 0) goto Label_2490; // 0x9b5 JumpB
	var_25_bool = 0; // 0x9b6 PushV
	var_25_bool = 0; // 0x9b7 MovB
	func_3730(var_25_bool); // 0x9b8 NEW_2
	
Label_2490:
	var_34_int = 3; // 0x9ba PushI
	var_35_int = GlobalVars[3]; // 0x9bb PushGE
	var_36_bool = var_34_int == var_35_int; // 0x9bc Eq
	if(var_36_bool == 0) goto Label_2498; // 0x9bd JumpB
	var_37_bool = 0; // 0x9be PushV
	var_37_bool = 0; // 0x9bf MovB
	func_3755(var_37_bool); // 0x9c0 NEW_2
	
Label_2498:
	var_46_object = Obj(); var_47_string = ""; var_48_int = 0; var_49_int = 0; // 0x9c2 PushV
	var_50_object = Obj(); // 0x9c3 PushV
	func_3168(var_50_object); // 0x9c4 NEW_2
	var_46_object = var_50_object; // 0x9c5 Mov
	var_47_string = "coffee"; // 0x9c7 MovS
	var_48_int = 1; // 0x9c8 MovI
	var_49_int = 3; // 0x9c9 MovI
	func_3116(var_47_string, var_48_int, var_49_int); // 0x9ca NEW_2
	var_61_object = Obj(); var_62_string = ""; var_63_int = 0; var_64_int = 0; // 0x9cc PushV
	var_65_object = Obj(); // 0x9cd PushV
	func_3168(var_65_object); // 0x9ce NEW_2
	var_61_object = var_65_object; // 0x9cf Mov
	var_62_string = "tvirin"; // 0x9d1 MovS
	var_63_int = 1; // 0x9d2 MovI
	var_64_int = 6; // 0x9d3 MovI
	func_3116(var_62_string, var_63_int, var_64_int); // 0x9d4 NEW_2
	var_66_object = Obj(); var_67_string = ""; var_68_int = 0; var_69_int = 0; // 0x9d6 PushV
	var_70_object = Obj(); // 0x9d7 PushV
	func_3168(var_70_object); // 0x9d8 NEW_2
	var_66_object = var_70_object; // 0x9d9 Mov
	var_67_string = "silver_ring"; // 0x9db MovS
	var_68_int = 1; // 0x9dc MovI
	var_69_int = 9; // 0x9dd MovI
	func_3116(var_67_string, var_68_int, var_69_int); // 0x9de NEW_2
	var_71_object = Obj(); var_72_string = ""; var_73_int = 0; var_74_int = 0; // 0x9e0 PushV
	var_75_object = Obj(); // 0x9e1 PushV
	func_3168(var_75_object); // 0x9e2 NEW_2
	var_71_object = var_75_object; // 0x9e3 Mov
	var_72_string = "gold_ring"; // 0x9e5 MovS
	var_73_int = 1; // 0x9e6 MovI
	var_74_int = 8; // 0x9e7 MovI
	func_3116(var_72_string, var_73_int, var_74_int); // 0x9e8 NEW_2
	var_76_object = Obj(); var_77_string = ""; var_78_int = 0; var_79_int = 0; // 0x9ea PushV
	var_80_object = Obj(); // 0x9eb PushV
	func_3168(var_80_object); // 0x9ec NEW_2
	var_76_object = var_80_object; // 0x9ed Mov
	var_77_string = "bracelet"; // 0x9ef MovS
	var_78_int = 1; // 0x9f0 MovI
	var_79_int = 6; // 0x9f1 MovI
	func_3116(var_77_string, var_78_int, var_79_int); // 0x9f2 NEW_2
	var_81_object = Obj(); var_82_string = ""; var_83_int = 0; var_84_int = 0; // 0x9f4 PushV
	var_85_object = Obj(); // 0x9f5 PushV
	func_3168(var_85_object); // 0x9f6 NEW_2
	var_81_object = var_85_object; // 0x9f7 Mov
	var_82_string = "watch"; // 0x9f9 MovS
	var_83_int = 1; // 0x9fa MovI
	var_84_int = 9; // 0x9fb MovI
	func_3116(var_82_string, var_83_int, var_84_int); // 0x9fc NEW_2
	var_86_object = Obj(); var_87_string = ""; var_88_int = 0; var_89_int = 0; // 0x9fe PushV
	var_90_object = Obj(); // 0x9ff PushV
	func_3168(var_90_object); // 0xa00 NEW_2
	var_86_object = var_90_object; // 0xa01 Mov
	var_87_string = "beads"; // 0xa03 MovS
	var_88_int = 1; // 0xa04 MovI
	var_89_int = 9; // 0xa05 MovI
	func_3116(var_87_string, var_88_int, var_89_int); // 0xa06 NEW_2
	var_91_object = Obj(); var_92_string = ""; var_93_int = 0; var_94_int = 0; // 0xa08 PushV
	var_95_object = Obj(); // 0xa09 PushV
	func_3168(var_95_object); // 0xa0a NEW_2
	var_91_object = var_95_object; // 0xa0b Mov
	var_92_string = "ear_ring"; // 0xa0d MovS
	var_93_int = 1; // 0xa0e MovI
	var_94_int = 9; // 0xa0f MovI
	func_3116(var_92_string, var_93_int, var_94_int); // 0xa10 NEW_2
	var_96_object = Obj(); var_97_string = ""; var_98_int = 0; var_99_int = 0; // 0xa12 PushV
	var_100_object = Obj(); // 0xa13 PushV
	func_3168(var_100_object); // 0xa14 NEW_2
	var_96_object = var_100_object; // 0xa15 Mov
	var_97_string = "feromicin"; // 0xa17 MovS
	var_98_int = 1; // 0xa18 MovI
	var_99_int = 10; // 0xa19 MovI
	func_3116(var_97_string, var_98_int, var_99_int); // 0xa1a NEW_2
	func_3298(); // 0xa1d NEW_2
	var_121_object = Obj(); // 0xa1f PushV
	var_121_object = var_21_object; // 0xa20 Mov
	func_2604(var_121_object); // 0xa21 NEW_2
	return 0; // 0xa23 Return
}


func_445(var_7_float, var_141_object)
{
	var_7_float = var_141_object; // 0x1be TMov
	var_151_int = 1; // 0x1bf PushI
	var_152_int = 1; // 0x1c0 PushI
	SetTimer(var_151_int, var_152_int); // 0x1c1 Func
	var_153_object = Obj(); var_154_bool = 0; var_155_float = 0; // 0x1c3 PushV
	var_153_object = var_141_object; // 0x1c4 Mov
	var_154_bool = 0; // 0x1c5 MovB
	var_155_float = 150.0; // 0x1c6 MovF
	func_519(var_146_bool, var_147_bool, var_148_float, var_149_int, var_150_object, var_141_object, var_153_object, var_154_bool, var_155_float); // 0x1c7 NEW_2
	var_673_int = 1; // 0x1c9 PushI
	KillTimer(var_673_int); // 0x1ca Func
	return 0; // 0x1cc Return
}


func_3517(var_42_bool)
{
	var_43_object = Obj(); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_float = 0; var_49_int = 0; var_50_cvector = CVector(0,0,0); var_51_float = 0; var_52_object = Obj(); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_float = 0; var_58_int = 0; var_59_cvector = CVector(0,0,0); var_60_float = 0; // 0xdbd PushV
	GetMainOutdoorScene(var_52_object); // 0xdbe Func
	GetPosition(var_53_cvector); // 0xdc0 Func
	var_57_float = 4000000; // 0xdc2 MovI
	var_58_int = 0; // 0xdc3 MovI
	var_61_int = GlobalVars[1]; // 0xdc4 PushGE
	var_61_int = 1; // 0xdc5 MovI
	GlobalVars[1] = var_61_int; // 0xdc6 PopGE
	
Label_3527:
	var_62_bool = 1; // 0xdc7 PushB
	if(var_62_bool == 0) goto Label_3550; // 0xdc8 JumpB
	var_63_string = "pt_b9q03_bonfire"; // 0xdc9 PushS
	var_64_int = GlobalVars[1]; // 0xdca PushGE
	var_65_int = var_63_string + var_64_int; // 0xdcb Add
	GetLocator(var_65_int, var_56_bool, var_54_cvector, var_55_cvector); // 0xdcc ObjFunc
	var_66_bool = var_56_bool == 0; // 0xdce Not
	if(var_66_bool == 0) goto Label_3537; // 0xdcf JumpB
	goto Label_3550; // 0xdd0 Jump
	
Label_3550:
	var_67_int = GlobalVars[1]; // 0xdde PushGE
	var_68_int = 1; // 0xddf PushI
	var_67_int = var_58_int - var_68_int; // 0xde0 Sub2
	GlobalVars[1] = var_67_int; // 0xde1 PopGE
	var_69_int = GlobalVars[1]; // 0xde2 PushGE
	var_70_int = -1; // 0xde3 PushI
	var_71_bool = var_69_int == var_70_int; // 0xde4 Eq
	if(var_71_bool == 0) goto Label_3560; // 0xde5 JumpB
	var_42_bool = 0; // 0xde6 MovB
	return 18; // 0xde7 Return
	
Label_3560:
	var_72_string = "Bonfire index: "; // 0xde8 PushS
	var_73_int = GlobalVars[1]; // 0xde9 PushGE
	var_74_int = 1; // 0xdea PushI
	var_75_int = var_73_int + var_74_int; // 0xdeb Add
	var_76_int = var_72_string + var_75_int; // 0xdec Add
	Trace(var_76_int); // 0xded Func
	var_77_int = GlobalVars[2]; // 0xdef PushGE
	var_77_int = 0; // 0xdf0 MovI
	GlobalVars[2] = var_77_int; // 0xdf1 PopGE
	
Label_3570:
	var_78_bool = 1; // 0xdf2 PushB
	if(var_78_bool == 0) goto Label_3593; // 0xdf3 JumpB
	var_79_string = "pt_b9q03_bonfire"; // 0xdf4 PushS
	var_80_int = GlobalVars[1]; // 0xdf5 PushGE
	var_81_int = 1; // 0xdf6 PushI
	var_82_int = var_80_int + var_81_int; // 0xdf7 Add
	var_83_int = var_79_string + var_82_int; // 0xdf8 Add
	var_84_string = "_patrol"; // 0xdf9 PushS
	var_85_int = var_83_int + var_84_string; // 0xdfa Add
	var_86_int = GlobalVars[2]; // 0xdfb PushGE
	var_87_int = 1; // 0xdfc PushI
	var_88_int = var_86_int + var_87_int; // 0xdfd Add
	var_89_int = var_85_int + var_88_int; // 0xdfe Add
	GetLocator(var_89_int, var_56_bool, var_54_cvector, var_55_cvector); // 0xdff ObjFunc
	var_90_bool = var_56_bool == 0; // 0xe01 Not
	if(var_90_bool == 0) goto Label_3588; // 0xe02 JumpB
	goto Label_3593; // 0xe03 Jump
	
Label_3593:
	var_91_string = "Bonfire pantrol point count: "; // 0xe09 PushS
	var_92_int = GlobalVars[2]; // 0xe0a PushGE
	var_93_int = var_91_string + var_92_int; // 0xe0b Add
	Trace(var_93_int); // 0xe0c Func
	var_42_bool = 1; // 0xe0e MovB
	return 18; // 0xe0f Return
	
Label_3588:
	var_94_int = GlobalVars[2]; // 0xe04 PushGE
	var_95_int = 1; // 0xe05 PushI
	var_94_int = var_94_int + var_95_int; // 0xe06 Add2
	GlobalVars[2] = var_94_int; // 0xe07 PopGE
	goto Label_3570; // 0xe08 Jump
	
Label_3537:
	var_59_cvector = var_53_cvector - var_54_cvector; // 0xdd1 Sub2
	var_60_float = var_59_cvector | var_59_cvector; // 0xdd2 Or2
	var_96_bool = var_60_float < var_57_float; // 0xdd3 LT
	if(var_96_bool == 0) goto Label_3545; // 0xdd4 JumpB
	var_57_float = var_60_float; // 0xdd5 Mov
	var_97_int = GlobalVars[1]; // 0xdd6 PushGE
	var_58_int = var_97_int; // 0xdd7 Mov
	
Label_3545:
	var_98_int = GlobalVars[1]; // 0xdd9 PushGE
	var_99_int = 1; // 0xdda PushI
	var_98_int = var_98_int + var_99_int; // 0xddb Add2
	GlobalVars[1] = var_98_int; // 0xddc PopGE
	goto Label_3527; // 0xddd Jump
}


func_3007(var_24_object, var_25_int, var_26_float)
{
	var_27_cvector = CVector(0,0,0); var_28_object = Obj(); var_29_int = 0; var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_int = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_object = Obj(); var_38_int = 0; var_39_bool = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_int = 0; var_43_int = 0; var_44_cvector = CVector(0,0,0); // 0xbbf PushV
	var_45_bool = 0; // 0xbc0 PushV
	var_45_bool = 0; // 0xbc1 MovB
	var_46_bool = 0; // 0xbc2 PushV
	var_46_bool = 0; // 0xbc3 MovB
	var_47_object = var_24_object; // 0xbc4 Push
	if(var_47_object == 0) goto Label_3018; // 0xbc5 JumpB
	var_48_int = 4; // 0xbc6 PushI
	var_49_bool = var_25_int != var_48_int; // 0xbc7 Neq
	if(var_49_bool == 0) goto Label_3018; // 0xbc8 JumpB
	var_46_bool = 1; // 0xbc9 MovB
	
Label_3018:
	if(var_46_bool == 0) goto Label_3023; // 0xbca JumpB
	var_50_int = 5; // 0xbcb PushI
	var_51_bool = var_25_int != var_50_int; // 0xbcc Neq
	if(var_51_bool == 0) goto Label_3023; // 0xbcd JumpB
	var_45_bool = 1; // 0xbce MovB
	
Label_3023:
	if(var_45_bool == 0) goto Label_3070; // 0xbcf JumpB
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0xbd0 PushV
	var_54_cvector = CVector(0,0,0); var_55_object = Obj(); // 0xbd1 PushV
	var_55_object = var_24_object; // 0xbd2 Mov
	func_2801(var_55_object); // 0xbd3 NEW_2
	var_53_cvector = var_54_cvector; // 0xbd4 Mov
	func_3174(var_52_cvector, var_53_cvector); // 0xbd6 NEW_2
	var_36_cvector = var_52_cvector; // 0xbd7 Mov
	CreateVectorVector(var_37_object); // 0xbd9 Func
	var_38_int = 1; // 0xbdb MovI
	
Label_3036:
	var_65_string = "hit"; // 0xbdc PushS
	var_66_int = var_65_string + var_38_int; // 0xbdd Add
	GetGeometryLocator(var_66_int, var_39_bool, var_40_cvector, var_41_cvector); // 0xbde Func
	var_67_bool = var_39_bool == 0; // 0xbe0 Not
	if(var_67_bool == 0) goto Label_3043; // 0xbe1 JumpB
	goto Label_3052; // 0xbe2 Jump
	
Label_3052:
	size(var_42_int); // 0xbec ObjFunc
	var_68_int = var_42_int; // 0xbee Push
	if(var_68_int == 0) goto Label_3069; // 0xbef JumpB
	irand(var_43_int, var_42_int); // 0xbf0 Func
	get(var_44_cvector, var_43_int); // 0xbf2 ObjFunc
	var_69_object = Obj(); var_70_int = 0; var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); // 0xbf4 PushV
	var_69_object = var_24_object; // 0xbf5 Mov
	var_70_int = var_25_int; // 0xbf6 Mov
	var_71_float = var_26_float; // 0xbf7 Mov
	var_72_cvector = var_44_cvector; // 0xbf8 Mov
	var_73_cvector = -var_36_cvector; // 0xbf9 Neg2
	func_3075(var_71_float, var_72_cvector, var_73_cvector); // 0xbfa NEW_2
	return 18; // 0xbfc Return
	
Label_3069:
	var_37_object = 0; // 0xbfd SetNull
	
Label_3070:
	var_114_object = Obj(); // 0xbfe PushV
	var_114_object = var_24_object; // 0xbff Mov
	func_2963(var_114_object); // 0xc00 NEW_2
	return 18; // 0xc02 Return
	
Label_3043:
	var_115_int = var_41_cvector | var_36_cvector; // 0xbe3 Or
	var_116_float = 0.70711; // 0xbe4 PushF
	var_117_bool = var_115_int >= var_116_float; // 0xbe5 GE
	if(var_117_bool == 0) goto Label_3049; // 0xbe6 JumpB
	add(var_40_cvector); // 0xbe7 ObjFunc
	
Label_3049:
	var_118_int = 1; // 0xbe9 PushI
	var_38_int = var_38_int + var_118_int; // 0xbea Add2
	goto Label_3036; // 0xbeb Jump
}


func_461(var_540_float)
{
	var_540_float = 0.1; // 0x1ce MovF
	return 0; // 0x1cf Return
}


func_1487(var_0_cvector, var_1_cvector, var_39_int)
{
	var_40_int = 0; // 0x5d0 PushI
	var_41_bool = var_39_int != var_40_int; // 0x5d1 Neq
	if(var_41_bool == 0) goto Label_1492; // 0x5d2 JumpB
	return 0; // 0x5d3 Return
	
Label_1492:
	var_42_bool = 0; var_43_object = Obj(); // 0x5d4 PushV
	var_43_object = var_1_cvector; // 0x5d5 MovT
	func_1525(var_42_bool, var_43_object); // 0x5d6 NEW_2
	var_78_bool = var_42_bool == 0; // 0x5d8 Not
	if(var_78_bool == 0) goto Label_1499; // 0x5d9 JumpB
	var_0_cvector = 1; // 0x5da TMovB
	
Label_1499:
	var_79_int = 0; // 0x5db PushI
	KillTimer(var_79_int); // 0x5dc Func
	Stop(); // 0x5de Func
	return 0; // 0x5e0 Return
}


func_464(var_547_int)
{
	var_547_int = 0; // 0x1d1 MovI
	return 0; // 0x1d2 Return
}


func_467(var_608_int)
{
	var_609_int = 0; // 0x1d3 PushV
	func_3808(var_609_int); // 0x1d4 NEW_2
	var_608_int = var_609_int; // 0x1d5 Mov
	return 0; // 0x1d7 Return
}


func_2003(var_962_bool)
{
	var_962_bool = 1; // 0x7d3 MovB
	return 0; // 0x7d4 Return
}


func_2005(var_0_cvector, var_939_bool, var_940_cvector, var_941_cvector, var_942_float, var_943_float, var_944_bool, var_945_bool)
{
	var_946_bool = 0; var_947_bool = 0; var_948_object = Obj(); var_949_cvector = CVector(0,0,0); var_950_cvector = CVector(0,0,0); var_951_cvector = CVector(0,0,0); var_952_float = 0; var_953_object = Obj(); var_954_bool = 0; var_955_bool = 0; var_956_object = Obj(); var_957_cvector = CVector(0,0,0); var_958_cvector = CVector(0,0,0); var_959_cvector = CVector(0,0,0); var_960_float = 0; var_961_object = Obj(); // 0x7d5 PushV
	var_0_cvector = 0; // 0x7d6 TMovB
	var_955_bool = var_945_bool; // 0x7d7 Mov
	
Label_2008:
	var_962_bool = 0; // 0x7d8 PushV
	func_2003(var_962_bool); // 0x7d9 NEW_2
	var_963_bool = var_962_bool == 0; // 0x7db Not
	if(var_963_bool == 0) goto Label_2015; // 0x7dc JumpB
	var_939_bool = 0; // 0x7dd MovB
	return 16; // 0x7de Return
	
Label_2015:
	var_957_cvector = var_940_cvector; // 0x7df Mov
	GetPosition(var_958_cvector); // 0x7e0 Func
	var_959_cvector = var_957_cvector - var_958_cvector; // 0x7e2 Sub2
	var_960_float = var_959_cvector | var_959_cvector; // 0x7e3 Or2
	var_964_bool = 0; // 0x7e4 PushV
	var_964_bool = 0; // 0x7e5 MovB
	var_965_int = 0; // 0x7e6 PushI
	var_966_bool = var_943_float > var_965_int; // 0x7e7 GT
	if(var_966_bool == 0) goto Label_2029; // 0x7e8 JumpB
	var_967_float = var_943_float * var_943_float; // 0x7e9 Mult
	var_968_bool = var_960_float > var_967_float; // 0x7ea GT
	if(var_968_bool == 0) goto Label_2029; // 0x7eb JumpB
	var_964_bool = 1; // 0x7ec MovB
	
Label_2029:
	if(var_964_bool == 0) goto Label_2034; // 0x7ed JumpB
	Stop(); // 0x7ee Func
	var_939_bool = 0; // 0x7f0 MovB
	return 16; // 0x7f1 Return
	
Label_2034:
	var_969_float = var_942_float * var_942_float; // 0x7f2 Mult
	var_970_bool = var_960_float > var_969_float; // 0x7f3 GT
	if(var_970_bool == 0) goto Label_2094; // 0x7f4 JumpB
	FindPathTo(var_961_object, var_957_cvector); // 0x7f5 Func
	var_971_bool = var_961_object != 0; // 0x7f7 NullNeq
	if(var_971_bool == 0) goto Label_2043; // 0x7f8 JumpB
	var_956_object = var_961_object; // 0x7f9 Mov
	var_961_object = 0; // 0x7fa SetNull
	
Label_2043:
	var_972_bool = var_956_object != 0; // 0x7fb NullNeq
	if(var_972_bool == 0) goto Label_2076; // 0x7fc JumpB
	var_973_bool = var_955_bool; // 0x7fd Push
	if(var_973_bool == 0) goto Label_2053; // 0x7fe JumpB
	var_955_bool = 0; // 0x7ff MovB
	RotatePath(var_956_object, var_954_bool); // 0x800 Func
	var_974_bool = var_954_bool == 0; // 0x802 Not
	if(var_974_bool == 0) goto Label_2053; // 0x803 JumpB
	goto Label_2100; // 0x804 Jump
	
Label_2100:
	var_975_bool = var_0_cvector == 0; // 0x834 Not
	if(var_975_bool == 0) goto Label_2106; // 0x835 JumpB
	var_976_float = GetByIndex(var_941_cvector, 0); // 0x836 PushE
	var_977_float = GetByIndex(var_941_cvector, 2); // 0x837 PushE
	RotateAsync(var_976_float, var_977_float); // 0x838 Func
	
Label_2106:
	var_939_bool = !var_0_cvector; // 0x83a Not2
	return 16; // 0x83b Return
	
Label_2053:
	var_978_int = 0; // 0x805 PushI
	var_979_float = 0.3; // 0x806 PushF
	SetTimer(var_978_int, var_979_float); // 0x807 Func
	var_980_string = ""; // 0x809 PushV
	func_2145(var_980_string); // 0x80a NEW_2
	var_981_string = ""; // 0x80c PushV
	func_2147(var_981_string); // 0x80d NEW_2
	FollowPath(var_956_object, var_944_bool, var_954_bool, var_980_string, var_981_string); // 0x80f Func
	var_982_bool = var_954_bool == 0; // 0x811 Not
	if(var_982_bool == 0) goto Label_2074; // 0x812 JumpB
	var_983_cvector = var_0_cvector; // 0x813 PushT
	if(var_983_cvector == 0) goto Label_2072; // 0x814 JumpB
	var_956_object = 0; // 0x815 SetNull
	goto Label_2100; // 0x816 Jump
	
Label_2072:
	goto Label_2099; // 0x818 Jump
	
Label_2099:
	goto Label_2008; // 0x833 Jump
	
Label_2074:
	var_956_object = 0; // 0x81a SetNull
	goto Label_2092; // 0x81b Jump
	
Label_2092:
	var_961_object = 0; // 0x82c SetNull
	goto Label_2098; // 0x82d Jump
	
Label_2098:
	var_956_object = 0; // 0x832 SetNull
	
Label_2076:
	var_984_int = 0; // 0x81c PushI
	KillTimer(var_984_int); // 0x81d Func
	var_985_float = 0.5; // 0x81f PushF
	Sleep(var_985_float, var_954_bool); // 0x820 Func
	var_986_bool = var_954_bool == 0; // 0x822 Not
	if(var_986_bool == 0) goto Label_2088; // 0x823 JumpB
	var_987_cvector = var_0_cvector; // 0x824 PushT
	if(var_987_cvector == 0) goto Label_2088; // 0x825 JumpB
	var_956_object = 0; // 0x826 SetNull
	goto Label_2100; // 0x827 Jump
	
Label_2088:
	var_988_int = 0; // 0x828 PushI
	var_989_float = 0.3; // 0x829 PushF
	SetTimer(var_988_int, var_989_float); // 0x82a Func
	
Label_2094:
	var_990_int = 0; // 0x82e PushI
	KillTimer(var_990_int); // 0x82f Func
	goto Label_2100; // 0x831 Jump
}


func_997(var_637_bool, var_638_float)
{
	var_639_float = 0; var_640_bool = 0; var_641_float = 0; var_642_bool = 0; // 0x3e5 PushV
	rand(var_641_float); // 0x3e6 Func
	var_643_bool = var_641_float < var_638_float; // 0x3e8 LT
	if(var_643_bool == 0) goto Label_1017; // 0x3e9 JumpB
	
Label_1002:
	IsAnimationPlaying(var_642_bool); // 0x3ea Func
	var_644_bool = var_642_bool == 0; // 0x3ec Not
	if(var_644_bool == 0) goto Label_1007; // 0x3ed JumpB
	goto Label_1016; // 0x3ee Jump
	
Label_1016:
	goto Label_1022; // 0x3f8 Jump
	
Label_1022:
	var_637_bool = 0; // 0x3fe MovB
	return 4; // 0x3ff Return
	
Label_1007:
	var_645_bool = 0; // 0x3ef PushV
	func_1107(var_645_bool); // 0x3f0 NEW_2
	if(var_645_bool == 0) goto Label_1013; // 0x3f2 JumpB
	var_637_bool = 1; // 0x3f3 MovB
	return 4; // 0x3f4 Return
	
Label_1013:
	sync(); // 0x3f5 Func
	goto Label_1002; // 0x3f7 Jump
	
Label_1017:
	WaitForAnimEnd(); // 0x3f9 Func
	func_1211(var_642_bool); // 0x3fc NEW_2
}


func_1509(var_0_cvector)
{
	var_0_cvector = 1; // 0x5e5 TMovB
	var_24_int = 0; // 0x5e6 PushI
	KillTimer(var_24_int); // 0x5e7 Func
	Stop(); // 0x5e9 Func
	return 0; // 0x5eb Return
}


func_1525(var_317_bool, var_318_object)
{
	var_319_bool = 0; var_320_object = Obj(); // 0x5f6 PushV
	var_320_object = var_318_object; // 0x5f7 Mov
	func_2939(var_319_bool, var_320_object); // 0x5f8 NEW_2
	var_317_bool = var_319_bool; // 0x5f9 Mov
	return 0; // 0x5fb Return
}


func_1532(var_335_string)
{
	var_335_string = "walk"; // 0x5fc MovS
	return 0; // 0x5fd Return
}


func_1534(var_336_string)
{
	var_336_string = "run"; // 0x5fe MovS
	return 0; // 0x5ff Return
}


