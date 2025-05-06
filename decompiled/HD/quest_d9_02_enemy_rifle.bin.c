task_1_event_7(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_bool, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x1cb PushV
	var_23_int = 1; // 0x1cc PushI
	var_24_bool = var_20_bool == var_23_int; // 0x1cd Eq
	if(var_24_bool == 0) goto Label_474; // 0x1ce JumpB
	GetMainOutdoorScene(var_22_object); // 0x1cf Func
	var_25_string = ""; // 0x1d1 PushV
	func_3634(var_25_string); // 0x1d2 NEW_2
	BroadcastMessage(var_25_string, var_17_bool, var_22_object); // 0x1d4 Func
	var_26_string = "helpme timer"; // 0x1d6 PushS
	Trace(var_26_string); // 0x1d7 Func
	var_22_object = 0; // 0x1d9 SetNull
	
Label_474:
	return 2; // 0x1da Return
}


task_1_event_1(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_bool, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_bool = 0; // 0x1dc PushV
	var_21_bool = 0; // 0x1dd MovB
	var_22_bool = 0; var_23_object = Obj(); // 0x1de PushV
	var_23_object = var_20_bool; // 0x1df Mov
	func_2706(var_22_bool, var_23_object); // 0x1e0 NEW_2
	if(var_22_bool == 0) goto Label_487; // 0x1e2 JumpB
	var_26_object = GlobalVars[7]; // 0x1e3 PushGE
	var_27_bool = var_26_object != var_20_bool; // 0x1e4 Neq
	if(var_27_bool == 0) goto Label_487; // 0x1e5 JumpB
	var_21_bool = 1; // 0x1e6 MovB
	
Label_487:
	if(var_21_bool == 0) goto Label_495; // 0x1e7 JumpB
	func_754(var_20_bool); // 0x1e9 NEW_2
	var_28_bool = 0; var_29_object = Obj(); // 0x1eb PushV
	var_29_object = var_20_bool; // 0x1ec Mov
	func_3514(var_28_bool, var_29_object); // 0x1ed NEW_2
	
Label_495:
	return 0; // 0x1ef Return
}


task_1_event_6(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	func_754(var_19_bool); // 0x1f1 NEW_2
	var_20_bool = 0; var_21_int = 0; // 0x1f3 PushV
	var_21_int = 0; // 0x1f4 MovI
	func_3414(var_20_bool, var_21_int); // 0x1f5 NEW_2
	return 0; // 0x1f7 Return
}


task_2_event_7(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x4d2 PushV
	var_23_int = 2; // 0x4d3 PushI
	var_24_bool = var_20_bool == var_23_int; // 0x4d4 Eq
	if(var_24_bool == 0) goto Label_1250; // 0x4d5 JumpB
	GetMainOutdoorScene(var_22_object); // 0x4d6 Func
	var_25_string = ""; // 0x4d8 PushV
	func_3634(var_25_string); // 0x4d9 NEW_2
	BroadcastMessage(var_25_string, var_21_object, var_22_object); // 0x4db Func
	var_26_string = "helpme timer"; // 0x4dd PushS
	Trace(var_26_string); // 0x4de Func
	var_22_object = 0; // 0x4e0 SetNull
	goto Label_1254; // 0x4e1 Jump
	
Label_1254:
	return 2; // 0x4e6 Return
	
Label_1250:
	var_27_int = 0; // 0x4e2 PushV
	var_27_int = var_20_bool; // 0x4e3 Mov
	func_1312(var_22_object, var_27_int); // 0x4e4 NEW_2
}


task_2_event_6(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	func_1326(var_19_bool); // 0x4e8 NEW_2
	var_24_bool = 0; var_25_int = 0; // 0x4ea PushV
	var_25_int = 0; // 0x4eb MovI
	func_3414(var_24_bool, var_25_int); // 0x4ec NEW_2
	return 0; // 0x4ee Return
}


task_2_event_1(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_object, var_15_bool, var_16_object, var_17_bool, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_bool = 0; // 0x53c PushV
	var_21_bool = 0; // 0x53d MovB
	var_22_bool = var_1_cvector == var_20_bool; // 0x53e Eq
	if(var_22_bool == 0) goto Label_1347; // 0x53f JumpB
	var_23_bool = var_2_object == 0; // 0x540 Not
	if(var_23_bool == 0) goto Label_1347; // 0x541 JumpB
	var_21_bool = 1; // 0x542 MovB
	
Label_1347:
	if(var_21_bool == 0) goto Label_1353; // 0x543 JumpB
	var_2_object = 1; // 0x544 TMovB
	var_24_object = Obj(); // 0x545 PushV
	var_24_object = var_20_bool; // 0x546 Mov
	func_3025(var_24_object); // 0x547 NEW_2
	
Label_1353:
	return 0; // 0x549 Return
}


task_2_event_2(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_object, var_15_bool, var_16_object, var_17_bool, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_bool = 0; // 0x54b PushV
	var_21_bool = 0; // 0x54c MovB
	var_22_bool = var_1_cvector == var_20_bool; // 0x54d Eq
	if(var_22_bool == 0) goto Label_1362; // 0x54e JumpB
	var_23_object = var_2_object; // 0x54f PushT
	if(var_23_object == 0) goto Label_1362; // 0x550 JumpB
	var_21_bool = 1; // 0x551 MovB
	
Label_1362:
	if(var_21_bool == 0) goto Label_1367; // 0x552 JumpB
	var_2_object = 0; // 0x553 TMovB
	var_24_string = "head"; // 0x554 PushS
	UnlookAsync(var_24_string); // 0x555 Func
	
Label_1367:
	return 0; // 0x557 Return
}


task_2_event_10(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_object, var_15_bool, var_16_object, var_17_bool, var_18_bool, var_19_bool, var_20_bool)
{
	RequestClearPath(var_20_bool); // 0x5d1 Func
	return 0; // 0x5d3 Return
}


task_2_event_41(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_object, var_15_bool, var_16_object, var_17_bool, var_18_bool, var_19_bool, var_20_bool)
{
	func_1326(var_20_bool); // 0x5dd NEW_2
	var_25_object = Obj(); // 0x5df PushV
	var_25_object = var_20_bool; // 0x5e0 Mov
	func_3624(); // 0x5e1 NEW_2
	return 0; // 0x5e3 Return
}


task_3_event_6(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	func_1751(var_19_bool); // 0x617 NEW_2
	var_2_object = 1; // 0x619 TMovB
	var_21_bool = 0; var_22_int = 0; // 0x61a PushV
	var_22_int = 0; // 0x61b MovI
	func_3414(var_21_bool, var_22_int); // 0x61c NEW_2
	return 0; // 0x61e Return
}


task_3_event_42(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_string, var_19_bool, var_20_bool, var_21_bool)
{
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x620 PushV
	var_23_object = var_20_bool; // 0x621 Mov
	var_24_string = var_21_bool; // 0x622 Mov
	func_3238(var_22_bool, var_23_object, var_24_string); // 0x623 NEW_2
	if(var_22_bool == 0) goto Label_1577; // 0x625 JumpB
	func_1751(var_21_bool); // 0x627 NEW_2
	
Label_1577:
	return 0; // 0x629 Return
}


task_3_event_1(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x62b PushV
	var_22_object = var_20_bool; // 0x62c Mov
	func_3312(var_21_bool, var_22_object); // 0x62d NEW_2
	if(var_21_bool == 0) goto Label_1588; // 0x62f JumpB
	var_2_object = 1; // 0x630 TMovB
	func_1751(var_20_bool); // 0x632 NEW_2
	
Label_1588:
	return 0; // 0x634 Return
}


task_3_event_3(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x636 PushV
	var_22_object = var_20_bool; // 0x637 Mov
	func_3363(var_21_bool, var_22_object); // 0x638 NEW_2
	if(var_21_bool == 0) goto Label_1599; // 0x63a JumpB
	var_2_object = 1; // 0x63b TMovB
	func_1751(var_20_bool); // 0x63d NEW_2
	
Label_1599:
	return 0; // 0x63f Return
}


task_3_event_17(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_bool)
{
	EventDisable(42); // 0x641 EventDisable
	EventDisable(1); // 0x642 EventDisable
	EventDisable(3); // 0x643 EventDisable
	func_1751(var_20_bool); // 0x645 NEW_2
	var_2_object = 1; // 0x647 TMovB
	var_22_bool = 0; var_23_object = Obj(); // 0x648 PushV
	var_23_object = var_20_bool; // 0x649 Mov
	func_3514(var_22_bool, var_23_object); // 0x64a NEW_2
	return 0; // 0x64c Return
}


task_3_event_7(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_int, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_int = 3; // 0x64e PushI
	var_22_bool = var_20_bool == var_21_int; // 0x64f Eq
	if(var_22_bool == 0) goto Label_1622; // 0x650 JumpB
	func_1751(var_20_bool); // 0x652 NEW_2
	var_2_object = 1; // 0x654 TMovB
	return 0; // 0x655 Return
	
Label_1622:
	var_24_int = 0; // 0x656 PushV
	var_24_int = var_20_bool; // 0x657 Mov
	func_1729(var_19_bool, var_20_bool, var_24_int); // 0x658 NEW_2
	return 0; // 0x65a Return
}


task_3_event_10(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_bool)
{
	RequestClearPath(var_20_bool); // 0x6d4 Func
	return 0; // 0x6d6 Return
}


task_3_event_41(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_bool)
{
	func_1751(var_20_bool); // 0x6e0 NEW_2
	var_22_object = Obj(); // 0x6e2 PushV
	var_22_object = var_20_bool; // 0x6e3 Mov
	func_3624(); // 0x6e4 NEW_2
	return 0; // 0x6e6 Return
}


task_4_event_6(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	func_1914(); // 0x6f7 NEW_2
	var_20_bool = 0; var_21_int = 0; // 0x6f9 PushV
	var_21_int = 0; // 0x6fa MovI
	func_3414(var_20_bool, var_21_int); // 0x6fb NEW_2
	return 0; // 0x6fd Return
}


task_4_event_42(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_string, var_19_bool, var_20_bool, var_21_bool)
{
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x6ff PushV
	var_23_object = var_20_bool; // 0x700 Mov
	var_24_string = var_21_bool; // 0x701 Mov
	func_3238(var_22_bool, var_23_object, var_24_string); // 0x702 NEW_2
	if(var_22_bool == 0) goto Label_1800; // 0x704 JumpB
	func_1914(); // 0x706 NEW_2
	
Label_1800:
	return 0; // 0x708 Return
}


task_4_event_1(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x70a PushV
	var_22_object = var_20_bool; // 0x70b Mov
	func_3312(var_21_bool, var_22_object); // 0x70c NEW_2
	if(var_21_bool == 0) goto Label_1810; // 0x70e JumpB
	func_1914(); // 0x710 NEW_2
	
Label_1810:
	return 0; // 0x712 Return
}


task_4_event_3(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x714 PushV
	var_22_object = var_20_bool; // 0x715 Mov
	func_3363(var_21_bool, var_22_object); // 0x716 NEW_2
	if(var_21_bool == 0) goto Label_1820; // 0x718 JumpB
	func_1914(); // 0x71a NEW_2
	
Label_1820:
	return 0; // 0x71c Return
}


task_4_event_17(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_bool)
{
	EventDisable(42); // 0x71e EventDisable
	EventDisable(1); // 0x71f EventDisable
	EventDisable(3); // 0x720 EventDisable
	func_1914(); // 0x722 NEW_2
	var_21_bool = 0; var_22_object = Obj(); // 0x724 PushV
	var_22_object = var_20_bool; // 0x725 Mov
	func_3514(var_21_bool, var_22_object); // 0x726 NEW_2
	return 0; // 0x728 Return
}


task_5_event_6(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	func_2112(var_19_bool); // 0x790 NEW_2
	var_21_bool = 0; var_22_int = 0; // 0x792 PushV
	var_22_int = 0; // 0x793 MovI
	func_3414(var_21_bool, var_22_int); // 0x794 NEW_2
	return 0; // 0x796 Return
}


task_5_event_42(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_object, var_19_string, var_20_bool, var_21_bool)
{
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x798 PushV
	var_23_object = var_20_bool; // 0x799 Mov
	var_24_string = var_21_bool; // 0x79a Mov
	func_3238(var_22_bool, var_23_object, var_24_string); // 0x79b NEW_2
	if(var_22_bool == 0) goto Label_1953; // 0x79d JumpB
	func_2112(var_21_bool); // 0x79f NEW_2
	
Label_1953:
	return 0; // 0x7a1 Return
}


task_5_event_1(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_object, var_19_bool, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x7a3 PushV
	var_22_object = var_20_bool; // 0x7a4 Mov
	func_3312(var_21_bool, var_22_object); // 0x7a5 NEW_2
	if(var_21_bool == 0) goto Label_1963; // 0x7a7 JumpB
	func_2112(var_20_bool); // 0x7a9 NEW_2
	
Label_1963:
	return 0; // 0x7ab Return
}


task_5_event_3(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_object, var_19_bool, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x7ad PushV
	var_22_object = var_20_bool; // 0x7ae Mov
	func_3363(var_21_bool, var_22_object); // 0x7af NEW_2
	if(var_21_bool == 0) goto Label_1973; // 0x7b1 JumpB
	func_2112(var_20_bool); // 0x7b3 NEW_2
	
Label_1973:
	return 0; // 0x7b5 Return
}


task_5_event_17(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_object, var_19_bool, var_20_bool)
{
	EventDisable(42); // 0x7b7 EventDisable
	EventDisable(1); // 0x7b8 EventDisable
	EventDisable(3); // 0x7b9 EventDisable
	func_2112(var_20_bool); // 0x7bb NEW_2
	var_22_bool = 0; var_23_object = Obj(); // 0x7bd PushV
	var_23_object = var_20_bool; // 0x7be Mov
	func_3514(var_22_bool, var_23_object); // 0x7bf NEW_2
	return 0; // 0x7c1 Return
}


task_5_event_7(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_int, var_19_bool, var_20_bool)
{
	var_21_int = 0; // 0x82c PushI
	var_22_bool = var_20_bool != var_21_int; // 0x82d Neq
	if(var_22_bool == 0) goto Label_2096; // 0x82e JumpB
	return 0; // 0x82f Return
	
Label_2096:
	var_23_bool = 0; // 0x830 PushV
	func_1986(var_23_bool); // 0x831 NEW_2
	var_24_bool = var_23_bool == 0; // 0x833 Not
	if(var_24_bool == 0) goto Label_2102; // 0x834 JumpB
	var_0_cvector = 1; // 0x835 TMovB
	
Label_2102:
	var_25_int = 0; // 0x836 PushI
	KillTimer(var_25_int); // 0x837 Func
	Stop(); // 0x839 Func
	return 0; // 0x83b Return
}


task_5_event_10(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_object, var_19_bool, var_20_bool)
{
	RequestClearPath(var_20_bool); // 0x83d Func
	return 0; // 0x83f Return
}


task_5_event_41(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_object, var_19_bool, var_20_bool)
{
	func_2112(var_20_bool); // 0x849 NEW_2
	var_22_object = Obj(); // 0x84b PushV
	var_22_object = var_20_bool; // 0x84c Mov
	func_3624(); // 0x84d NEW_2
	return 0; // 0x84f Return
}


task_6_event_42(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_object, var_20_string, var_21_bool)
{
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x86a PushV
	var_23_object = var_20_string; // 0x86b Mov
	var_24_string = var_21_bool; // 0x86c Mov
	func_3238(var_22_bool, var_23_object, var_24_string); // 0x86d NEW_2
	if(var_22_bool == 0) goto Label_2163; // 0x86f JumpB
	func_2346(var_21_bool); // 0x871 NEW_2
	
Label_2163:
	return 0; // 0x873 Return
}


task_6_event_1(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_object, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x875 PushV
	var_22_object = var_20_bool; // 0x876 Mov
	func_3312(var_21_bool, var_22_object); // 0x877 NEW_2
	if(var_21_bool == 0) goto Label_2173; // 0x879 JumpB
	func_2346(var_20_bool); // 0x87b NEW_2
	
Label_2173:
	return 0; // 0x87d Return
}


task_6_event_3(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_object, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x87f PushV
	var_22_object = var_20_bool; // 0x880 Mov
	func_3363(var_21_bool, var_22_object); // 0x881 NEW_2
	if(var_21_bool == 0) goto Label_2183; // 0x883 JumpB
	func_2346(var_20_bool); // 0x885 NEW_2
	
Label_2183:
	return 0; // 0x887 Return
}


task_6_event_17(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_object, var_20_bool)
{
	EventDisable(42); // 0x889 EventDisable
	EventDisable(1); // 0x88a EventDisable
	EventDisable(3); // 0x88b EventDisable
	func_2346(var_20_bool); // 0x88d NEW_2
	var_22_bool = 0; var_23_object = Obj(); // 0x88f PushV
	var_23_object = var_20_bool; // 0x890 Mov
	func_3514(var_22_bool, var_23_object); // 0x891 NEW_2
	return 0; // 0x893 Return
}


task_6_event_6(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	func_2346(var_19_bool); // 0x8a5 NEW_2
	var_21_bool = 0; var_22_int = 0; // 0x8a7 PushV
	var_22_int = 0; // 0x8a8 MovI
	func_3414(var_21_bool, var_22_int); // 0x8a9 NEW_2
	return 0; // 0x8ab Return
}


task_6_event_7(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_int, var_20_bool)
{
	var_21_int = 0; // 0x916 PushI
	var_22_bool = var_20_bool != var_21_int; // 0x917 Neq
	if(var_22_bool == 0) goto Label_2330; // 0x918 JumpB
	return 0; // 0x919 Return
	
Label_2330:
	var_23_bool = 0; // 0x91a PushV
	func_2220(var_23_bool); // 0x91b NEW_2
	var_24_bool = var_23_bool == 0; // 0x91d Not
	if(var_24_bool == 0) goto Label_2336; // 0x91e JumpB
	var_0_cvector = 1; // 0x91f TMovB
	
Label_2336:
	var_25_int = 0; // 0x920 PushI
	KillTimer(var_25_int); // 0x921 Func
	Stop(); // 0x923 Func
	return 0; // 0x925 Return
}


task_6_event_10(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_object, var_20_bool)
{
	RequestClearPath(var_20_bool); // 0x927 Func
	return 0; // 0x929 Return
}


task_6_event_41(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_object, var_20_bool)
{
	func_2346(var_20_bool); // 0x933 NEW_2
	var_22_object = Obj(); // 0x935 PushV
	var_22_object = var_20_bool; // 0x936 Mov
	func_3624(); // 0x937 NEW_2
	return 0; // 0x939 Return
}


task_7_event_6(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	func_2457(); // 0x94e NEW_2
	var_0_cvector = 1; // 0x950 TMovB
	var_20_bool = 0; var_21_int = 0; // 0x951 PushV
	var_21_int = 0; // 0x952 MovI
	func_3414(var_20_bool, var_21_int); // 0x953 NEW_2
	return 0; // 0x955 Return
}


task_7_event_42(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_string)
{
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x957 PushV
	var_23_object = var_20_object; // 0x958 Mov
	var_24_string = var_21_string; // 0x959 Mov
	func_3238(var_22_bool, var_23_object, var_24_string); // 0x95a NEW_2
	if(var_22_bool == 0) goto Label_2401; // 0x95c JumpB
	func_2457(); // 0x95e NEW_2
	var_0_cvector = 1; // 0x960 TMovB
	
Label_2401:
	return 0; // 0x961 Return
}


task_7_event_1(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x963 PushV
	var_22_object = var_20_object; // 0x964 Mov
	func_3312(var_21_bool, var_22_object); // 0x965 NEW_2
	if(var_21_bool == 0) goto Label_2412; // 0x967 JumpB
	func_2457(); // 0x969 NEW_2
	var_0_cvector = 1; // 0x96b TMovB
	
Label_2412:
	return 0; // 0x96c Return
}


task_7_event_3(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x96e PushV
	var_22_object = var_20_object; // 0x96f Mov
	func_3363(var_21_bool, var_22_object); // 0x970 NEW_2
	if(var_21_bool == 0) goto Label_2423; // 0x972 JumpB
	func_2457(); // 0x974 NEW_2
	var_0_cvector = 1; // 0x976 TMovB
	
Label_2423:
	return 0; // 0x977 Return
}


task_7_event_17(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object)
{
	EventDisable(42); // 0x979 EventDisable
	EventDisable(1); // 0x97a EventDisable
	EventDisable(3); // 0x97b EventDisable
	func_2457(); // 0x97d NEW_2
	var_21_bool = 0; var_22_object = Obj(); // 0x97f PushV
	var_22_object = var_20_object; // 0x980 Mov
	func_3514(var_21_bool, var_22_object); // 0x981 NEW_2
	return 0; // 0x983 Return
}


task_8_event_6(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	var_20_object = Obj(); // 0x9b7 PushV
	func_3077(var_20_object); // 0x9b8 NEW_2
	RemoveActor(var_20_object); // 0x9ba Func
	Hold(); // 0x9bc Func
	return 0; // 0x9be Return
}


task_8_event_0(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_bool = 0; // 0x9ce PushV
	IsOverrideActive(var_22_bool); // 0x9cf Func
	var_23_bool = var_22_bool == 0; // 0x9d1 Not
	if(var_23_bool == 0) goto Label_2519; // 0x9d2 JumpB
	var_24_object = Obj(); // 0x9d3 PushV
	var_24_object = var_20_object; // 0x9d4 Mov
	func_3217(var_24_object); // 0x9d5 NEW_2
	
Label_2519:
	return 2; // 0x9d7 Return
}


task_8_event_22(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_int, var_22_float, var_23_float)
{
	return 0; // 0xa4e Return
}


task_8_event_16(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_string)
{
	return 0; // 0xa50 Return
}


task_8_event_41(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object)
{
	return 0; // 0xa52 Return
}


task_9_event_26(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_string)
{
	var_21_string = "cleanup"; // 0xa66 PushS
	var_22_bool = var_20_string == var_21_string; // 0xa67 Eq
	if(var_22_bool == 0) goto Label_2672; // 0xa68 JumpB
	var_23_object = Obj(); // 0xa69 PushV
	func_3077(var_23_object); // 0xa6a NEW_2
	RemoveActor(var_23_object); // 0xa6c Func
	Hold(); // 0xa6e Func
	
Label_2672:
	return 0; // 0xa70 Return
}


task_9_event_5(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	StopGroup0(); // 0xa71 Func
	sync(); // 0xa73 Func
	return 0; // 0xa75 Return
}


event_26(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_string)
{
	var_21_string = "cleanup"; // 0xc9f PushS
	var_22_bool = var_20_string == var_21_string; // 0xca0 Eq
	if(var_22_bool == 0) goto Label_3237; // 0xca1 JumpB
	var_23_bool = GlobalVars[0]; // 0xca2 PushGE
	var_23_bool = 1; // 0xca3 MovB
	GlobalVars[0] = var_23_bool; // 0xca4 PopGE
	
Label_3237:
	return 0; // 0xca5 Return
}


event_22(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_int, var_22_float, var_23_float)
{
	var_24_object = Obj(); var_25_int = 0; var_26_float = 0; // 0xe0a PushV
	var_24_object = var_20_object; // 0xe0b Mov
	var_25_int = var_21_int; // 0xe0c Mov
	var_26_float = var_22_float; // 0xe0d Mov
	func_2927(var_24_object, var_25_int, var_26_float); // 0xe0e NEW_2
	return 0; // 0xe10 Return
}


event_43(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_int, var_22_float, var_23_float, var_24_cvector, var_25_cvector)
{
	var_26_object = Obj(); var_27_int = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); // 0xe12 PushV
	var_26_object = var_20_object; // 0xe13 Mov
	var_27_int = var_21_int; // 0xe14 Mov
	var_28_float = var_22_float; // 0xe15 Mov
	var_29_cvector = var_24_cvector; // 0xe16 Mov
	var_30_cvector = var_25_cvector; // 0xe17 Mov
	func_2995(var_28_float, var_29_cvector, var_30_cvector); // 0xe18 NEW_2
	return 0; // 0xe1a Return
}


event_16(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object, var_21_string)
{
	var_22_float = 0; var_23_float = 0; // 0xe1b PushV
	var_24_string = "health"; // 0xe1c PushS
	var_25_bool = var_21_string == var_24_string; // 0xe1d Eq
	if(var_25_bool == 0) goto Label_3623; // 0xe1e JumpB
	var_26_string = "health"; // 0xe1f PushS
	GetProperty(var_26_string, var_23_float); // 0xe20 Func
	var_27_int = 0; // 0xe22 PushI
	var_28_bool = var_23_float <= var_27_int; // 0xe23 LE
	if(var_28_bool == 0) goto Label_3623; // 0xe24 JumpB
	SignalDeath(var_20_object); // 0xe25 Func
	
Label_3623:
	return 2; // 0xe27 Return
}


event_41(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool, var_20_object)
{
	var_21_object = Obj(); // 0xe29 PushV
	var_21_object = var_20_object; // 0xe2a Mov
	TaskCall(8); // 0xe2b TaskCall
	func_2462(var_21_object); // 0xe2c NEW_2
	TaskReturn(); // 0xe2d TaskReturn
	return 0; // 0xe2f Return
}


main(var_0_cvector, var_1_cvector, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_bool, var_7_float, var_8_int, var_9_object, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	var_20_object = Obj(); var_21_int = 0; var_22_bool = 0; var_23_int = 0; var_24_bool = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_int = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_object = Obj(); var_31_object = Obj(); var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_int = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_object = Obj(); // 0x8 PushV
	var_42_bool = 0; // 0x9 PushV
	func_3377(var_42_bool); // 0xa NEW_2
	var_70_bool = var_42_bool == 0; // 0xc Not
	if(var_70_bool == 0) goto Label_23; // 0xd JumpB
	var_71_string = "FSM Init failed"; // 0xe PushS
	Trace(var_71_string); // 0xf Func
	var_72_object = Obj(); // 0x11 PushV
	func_3077(var_72_object); // 0x12 NEW_2
	RemoveActor(var_72_object); // 0x14 Func
	return 22; // 0x16 Return
	
Label_23:
	GetPosition(var_0_cvector); // 0x17 Func
	GetDirection(var_41_object); // 0x19 Func
	var_75_int = GlobalVars[2]; // 0x1b PushGE
	var_75_int = 0; // 0x1c MovI
	GlobalVars[2] = var_75_int; // 0x1d PopGE
	var_76_int = GlobalVars[3]; // 0x1e PushGE
	var_76_int = 2; // 0x1f MovI
	GlobalVars[3] = var_76_int; // 0x20 PopGE
	
Label_33:
	var_77_bool = 1; // 0x21 PushB
	if(var_77_bool == 0) goto Label_434; // 0x22 JumpB
	var_78_int = 0; // 0x23 PushI
	var_79_int = GlobalVars[2]; // 0x24 PushGE
	var_80_bool = var_78_int == var_79_int; // 0x25 Eq
	if(var_80_bool == 0) goto Label_49; // 0x26 JumpB
	TaskCall(9); // 0x28 TaskCall
	func_2643(); // 0x29 NEW_2
	TaskReturn(); // 0x2a TaskReturn
	var_87_bool = 0; var_88_int = 0; // 0x2c PushV
	var_88_int = 2; // 0x2d MovI
	func_3414(var_87_bool, var_88_int); // 0x2e NEW_2
	goto Label_431; // 0x30 Jump
	
Label_431:
	sync(); // 0x1af Func
	goto Label_33; // 0x1b1 Jump
	
Label_49:
	var_106_int = 7; // 0x31 PushI
	var_107_int = GlobalVars[2]; // 0x32 PushGE
	var_108_bool = var_106_int == var_107_int; // 0x33 Eq
	if(var_108_bool == 0) goto Label_80; // 0x34 JumpB
	var_109_object = Obj(); // 0x35 PushV
	var_110_object = GlobalVars[7]; // 0x36 PushGE
	var_109_object = var_110_object; // 0x37 Mov
	TaskCall(1); // 0x39 TaskCall
	func_435(var_118_object, var_109_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	var_641_int = 7; // 0x3d PushI
	var_642_int = GlobalVars[2]; // 0x3e PushGE
	var_643_bool = var_641_int == var_642_int; // 0x3f Eq
	if(var_643_bool == 0) goto Label_79; // 0x40 JumpB
	var_644_int = 0; // 0x41 PushV
	var_644_int = 1; // 0x42 MovI
	TaskCall(7); // 0x43 TaskCall
	func_2366(var_644_int); // 0x44 NEW_2
	TaskReturn(); // 0x45 TaskReturn
	var_661_int = 7; // 0x47 PushI
	var_662_int = GlobalVars[2]; // 0x48 PushGE
	var_663_bool = var_661_int == var_662_int; // 0x49 Eq
	if(var_663_bool == 0) goto Label_79; // 0x4a JumpB
	var_664_bool = 0; var_665_int = 0; // 0x4b PushV
	var_665_int = 2; // 0x4c MovI
	func_3414(var_664_bool, var_665_int); // 0x4d NEW_2
	
Label_79:
	goto Label_431; // 0x4f Jump
	
Label_80:
	var_666_int = 6; // 0x50 PushI
	var_667_int = GlobalVars[2]; // 0x51 PushGE
	var_668_bool = var_666_int == var_667_int; // 0x52 Eq
	if(var_668_bool == 0) goto Label_122; // 0x53 JumpB
	var_669_int = 0; // 0x54 PushV
	var_669_int = 1; // 0x55 MovI
	TaskCall(7); // 0x56 TaskCall
	func_2366(var_669_int); // 0x57 NEW_2
	TaskReturn(); // 0x58 TaskReturn
	var_671_int = 6; // 0x5a PushI
	var_672_int = GlobalVars[2]; // 0x5b PushGE
	var_673_bool = var_671_int == var_672_int; // 0x5c Eq
	if(var_673_bool == 0) goto Label_121; // 0x5d JumpB
	var_674_object = Obj(); var_675_float = 0; // 0x5e PushV
	var_676_object = GlobalVars[6]; // 0x5f PushGE
	var_674_object = var_676_object; // 0x60 Mov
	var_675_float = 8; // 0x62 MovI
	TaskCall(3); // 0x63 TaskCall
	func_1519(var_674_object, var_675_float); // 0x64 NEW_2
	TaskReturn(); // 0x65 TaskReturn
	var_746_int = 6; // 0x67 PushI
	var_747_int = GlobalVars[2]; // 0x68 PushGE
	var_748_bool = var_746_int == var_747_int; // 0x69 Eq
	if(var_748_bool == 0) goto Label_121; // 0x6a JumpB
	var_749_int = 0; // 0x6b PushV
	var_749_int = 1; // 0x6c MovI
	TaskCall(7); // 0x6d TaskCall
	func_2366(var_749_int); // 0x6e NEW_2
	TaskReturn(); // 0x6f TaskReturn
	var_751_int = 6; // 0x71 PushI
	var_752_int = GlobalVars[2]; // 0x72 PushGE
	var_753_bool = var_751_int == var_752_int; // 0x73 Eq
	if(var_753_bool == 0) goto Label_121; // 0x74 JumpB
	var_754_bool = 0; var_755_int = 0; // 0x75 PushV
	var_755_int = 2; // 0x76 MovI
	func_3414(var_754_bool, var_755_int); // 0x77 NEW_2
	
Label_121:
	goto Label_431; // 0x79 Jump
	
Label_122:
	var_756_int = 1; // 0x7a PushI
	var_757_int = GlobalVars[2]; // 0x7b PushGE
	var_758_bool = var_756_int == var_757_int; // 0x7c Eq
	if(var_758_bool == 0) goto Label_169; // 0x7d JumpB
	var_759_bool = 0; // 0x7e PushV
	var_759_bool = 1; // 0x7f MovB
	func_3543(var_759_bool); // 0x80 NEW_2
	var_766_bool = 0; // 0x82 PushV
	TaskCall(6); // 0x83 TaskCall
	func_2132(var_766_bool); // 0x84 NEW_2
	TaskReturn(); // 0x85 TaskReturn
	var_836_int = 1; // 0x87 PushI
	var_837_int = GlobalVars[2]; // 0x88 PushGE
	var_838_bool = var_836_int == var_837_int; // 0x89 Eq
	if(var_838_bool == 0) goto Label_164; // 0x8a JumpB
	TaskCall(4); // 0x8c TaskCall
	func_1778(); // 0x8d NEW_2
	TaskReturn(); // 0x8e TaskReturn
	var_890_int = 1; // 0x90 PushI
	var_891_int = GlobalVars[2]; // 0x91 PushGE
	var_892_bool = var_890_int == var_891_int; // 0x92 Eq
	if(var_892_bool == 0) goto Label_164; // 0x93 JumpB
	var_893_bool = 0; var_894_cvector = CVector(0,0,0); var_895_cvector = CVector(0,0,0); var_896_bool = 0; // 0x94 PushV
	var_894_cvector = var_0_cvector; // 0x95 MovT
	var_895_cvector = var_1_cvector; // 0x96 MovT
	var_896_bool = 0; // 0x97 MovB
	TaskCall(5); // 0x98 TaskCall
	func_1919(var_893_bool, var_894_cvector, var_895_cvector, var_896_bool); // 0x99 NEW_2
	TaskReturn(); // 0x9a TaskReturn
	var_952_int = 1; // 0x9c PushI
	var_953_int = GlobalVars[2]; // 0x9d PushGE
	var_954_bool = var_952_int == var_953_int; // 0x9e Eq
	if(var_954_bool == 0) goto Label_164; // 0x9f JumpB
	var_955_bool = 0; var_956_int = 0; // 0xa0 PushV
	var_956_int = 2; // 0xa1 MovI
	func_3414(var_955_bool, var_956_int); // 0xa2 NEW_2
	
Label_164:
	var_957_bool = 0; // 0xa4 PushV
	var_957_bool = 0; // 0xa5 MovB
	func_3543(var_957_bool); // 0xa6 NEW_2
	goto Label_431; // 0xa8 Jump
	
Label_169:
	var_958_int = 2; // 0xa9 PushI
	var_959_int = GlobalVars[2]; // 0xaa PushGE
	var_960_bool = var_958_int == var_959_int; // 0xab Eq
	if(var_960_bool == 0) goto Label_224; // 0xac JumpB
	var_961_bool = 0; // 0xad PushV
	func_0(var_41_object, var_961_bool); // 0xae NEW_2
	var_969_bool = var_961_bool == 0; // 0xb0 Not
	if(var_969_bool == 0) goto Label_186; // 0xb1 JumpB
	var_970_bool = 0; var_971_cvector = CVector(0,0,0); var_972_cvector = CVector(0,0,0); var_973_bool = 0; // 0xb2 PushV
	var_971_cvector = var_0_cvector; // 0xb3 MovT
	var_972_cvector = var_1_cvector; // 0xb4 MovT
	var_973_bool = 0; // 0xb5 MovB
	TaskCall(5); // 0xb6 TaskCall
	func_1919(var_970_bool, var_971_cvector, var_972_cvector, var_973_bool); // 0xb7 NEW_2
	TaskReturn(); // 0xb8 TaskReturn
	
Label_186:
	var_975_int = 2; // 0xba PushI
	var_976_int = GlobalVars[2]; // 0xbb PushGE
	var_977_bool = var_975_int == var_976_int; // 0xbc Eq
	if(var_977_bool == 0) goto Label_223; // 0xbd JumpB
	TaskCall(4); // 0xbf TaskCall
	func_1778(); // 0xc0 NEW_2
	TaskReturn(); // 0xc1 TaskReturn
	var_978_int = 2; // 0xc3 PushI
	var_979_int = GlobalVars[2]; // 0xc4 PushGE
	var_980_bool = var_978_int == var_979_int; // 0xc5 Eq
	if(var_980_bool == 0) goto Label_223; // 0xc6 JumpB
	var_981_bool = 0; // 0xc7 PushV
	func_3557(var_981_bool); // 0xc8 NEW_2
	var_988_bool = var_981_bool == 0; // 0xca Not
	if(var_988_bool == 0) goto Label_209; // 0xcb JumpB
	var_989_bool = 0; var_990_int = 0; // 0xcc PushV
	var_990_int = 3; // 0xcd MovI
	func_3414(var_989_bool, var_990_int); // 0xce NEW_2
	goto Label_223; // 0xd0 Jump
	
Label_223:
	goto Label_431; // 0xdf Jump
	
Label_209:
	var_991_bool = 0; var_992_float = 0; // 0xd1 PushV
	var_992_float = 0.5; // 0xd2 MovF
	func_3111(var_991_bool, var_992_float); // 0xd3 NEW_2
	if(var_991_bool == 0) goto Label_223; // 0xd5 JumpB
	var_995_bool = 0; // 0xd6 PushV
	func_3532(var_995_bool); // 0xd7 NEW_2
	var_1002_bool = var_995_bool == 0; // 0xd9 Not
	if(var_1002_bool == 0) goto Label_223; // 0xda JumpB
	var_1003_bool = 0; var_1004_int = 0; // 0xdb PushV
	var_1004_int = 1; // 0xdc MovI
	func_3414(var_1003_bool, var_1004_int); // 0xdd NEW_2
	
Label_224:
	var_1005_int = 3; // 0xe0 PushI
	var_1006_int = GlobalVars[2]; // 0xe1 PushGE
	var_1007_bool = var_1005_int == var_1006_int; // 0xe2 Eq
	if(var_1007_bool == 0) goto Label_304; // 0xe3 JumpB
	var_1008_bool = 0; // 0xe4 PushV
	var_1008_bool = 1; // 0xe5 MovB
	func_3570(var_1008_bool); // 0xe6 NEW_2
	GetMainOutdoorScene(var_31_object); // 0xe8 Func
	var_1020_int = GlobalVars[1]; // 0xea PushGE
	irand(var_32_int, var_1020_int); // 0xeb Func
	var_1021_bool = 0; var_1022_float = 0; // 0xed PushV
	var_1022_float = 0.5; // 0xee MovF
	func_3111(var_1021_bool, var_1022_float); // 0xef NEW_2
	var_33_bool = var_1021_bool; // 0xf0 Mov
	var_34_int = 0; // 0xf2 MovI
	
Label_243:
	var_1023_int = GlobalVars[1]; // 0xf3 PushGE
	var_1024_bool = var_34_int < var_1023_int; // 0xf4 LT
	if(var_1024_bool == 0) goto Label_290; // 0xf5 JumpB
	var_1025_int = var_34_int + var_32_int; // 0xf6 Add
	var_1026_int = GlobalVars[1]; // 0xf7 PushGE
	var_38_int = var_1025_int % var_1026_int; // 0xf8 Mod2
	var_1027_bool = var_33_bool; // 0xf9 Push
	if(var_1027_bool == 0) goto Label_255; // 0xfa JumpB
	var_1028_int = GlobalVars[1]; // 0xfb PushGE
	var_1029_int = 1; // 0xfc PushI
	var_1030_int = var_1028_int - var_1029_int; // 0xfd Sub
	var_38_int = var_1030_int - var_38_int; // 0xfe Sub2
	
Label_255:
	var_1031_string = ""; // 0xff PushV
	func_3632(var_1031_string); // 0x100 NEW_2
	var_1032_int = 1; // 0x102 PushI
	var_1033_int = var_38_int + var_1032_int; // 0x103 Add
	var_1034_int = var_1031_string + var_1033_int; // 0x104 Add
	GetLocator(var_1034_int, var_35_bool, var_36_cvector, var_37_cvector); // 0x105 ObjFunc
	var_1035_bool = 0; var_1036_cvector = CVector(0,0,0); var_1037_cvector = CVector(0,0,0); var_1038_bool = 0; // 0x107 PushV
	var_1036_cvector = var_36_cvector; // 0x108 Mov
	var_1037_cvector = var_37_cvector; // 0x109 Mov
	var_1038_bool = 0; // 0x10a MovB
	TaskCall(5); // 0x10b TaskCall
	func_1919(var_1035_bool, var_1036_cvector, var_1037_cvector, var_1038_bool); // 0x10c NEW_2
	TaskReturn(); // 0x10d TaskReturn
	var_1040_int = 3; // 0x10f PushI
	var_1041_int = GlobalVars[2]; // 0x110 PushGE
	var_1042_bool = var_1040_int != var_1041_int; // 0x111 Neq
	if(var_1042_bool == 0) goto Label_276; // 0x112 JumpB
	goto Label_290; // 0x113 Jump
	
Label_290:
	var_1043_int = 3; // 0x122 PushI
	var_1044_int = GlobalVars[2]; // 0x123 PushGE
	var_1045_bool = var_1043_int == var_1044_int; // 0x124 Eq
	if(var_1045_bool == 0) goto Label_298; // 0x125 JumpB
	var_1046_bool = 0; var_1047_int = 0; // 0x126 PushV
	var_1047_int = 2; // 0x127 MovI
	func_3414(var_1046_bool, var_1047_int); // 0x128 NEW_2
	
Label_298:
	var_1048_bool = 0; // 0x12a PushV
	var_1048_bool = 0; // 0x12b MovB
	func_3570(var_1048_bool); // 0x12c NEW_2
	var_31_object = 0; // 0x12e SetNull
	goto Label_431; // 0x12f Jump
	
Label_276:
	var_1049_int = 0; // 0x114 PushV
	var_1049_int = 1; // 0x115 MovI
	TaskCall(7); // 0x116 TaskCall
	func_2366(var_1049_int); // 0x117 NEW_2
	TaskReturn(); // 0x118 TaskReturn
	var_1051_int = 3; // 0x11a PushI
	var_1052_int = GlobalVars[2]; // 0x11b PushGE
	var_1053_bool = var_1051_int != var_1052_int; // 0x11c Neq
	if(var_1053_bool == 0) goto Label_287; // 0x11d JumpB
	goto Label_290; // 0x11e Jump
	
Label_287:
	var_1054_int = 1; // 0x11f PushI
	var_34_int = var_34_int + var_1054_int; // 0x120 Add2
	goto Label_243; // 0x121 Jump
	
Label_304:
	var_1055_int = 4; // 0x130 PushI
	var_1056_int = GlobalVars[2]; // 0x131 PushGE
	var_1057_bool = var_1055_int == var_1056_int; // 0x132 Eq
	if(var_1057_bool == 0) goto Label_386; // 0x133 JumpB
	var_1058_object = GlobalVars[4]; // 0x134 PushGE
	GetPosition(var_39_cvector); // 0x135 ObjFunc
	var_1059_object = GlobalVars[4]; // 0x137 PushGE
	GetDirection(var_40_cvector); // 0x138 ObjFunc
	var_1060_bool = 0; var_1061_cvector = CVector(0,0,0); var_1062_cvector = CVector(0,0,0); var_1063_bool = 0; // 0x13a PushV
	var_1061_cvector = var_39_cvector; // 0x13b Mov
	var_1062_cvector = -var_40_cvector; // 0x13c Neg2
	var_1063_bool = 1; // 0x13d MovB
	TaskCall(5); // 0x13e TaskCall
	func_1919(var_1060_bool, var_1061_cvector, var_1062_cvector, var_1063_bool); // 0x13f NEW_2
	TaskReturn(); // 0x140 TaskReturn
	var_1065_int = 4; // 0x142 PushI
	var_1066_int = GlobalVars[2]; // 0x143 PushGE
	var_1067_bool = var_1065_int == var_1066_int; // 0x144 Eq
	if(var_1067_bool == 0) goto Label_385; // 0x145 JumpB
	var_1068_int = 0; // 0x146 PushV
	var_1068_int = 2; // 0x147 MovI
	TaskCall(7); // 0x148 TaskCall
	func_2366(var_1068_int); // 0x149 NEW_2
	TaskReturn(); // 0x14a TaskReturn
	var_1070_int = 4; // 0x14c PushI
	var_1071_int = GlobalVars[2]; // 0x14d PushGE
	var_1072_bool = var_1070_int == var_1071_int; // 0x14e Eq
	if(var_1072_bool == 0) goto Label_385; // 0x14f JumpB
	var_1073_bool = 0; var_1074_cvector = CVector(0,0,0); var_1075_cvector = CVector(0,0,0); var_1076_bool = 0; // 0x150 PushV
	var_1074_cvector = var_0_cvector; // 0x151 MovT
	var_1075_cvector = var_1_cvector; // 0x152 MovT
	var_1076_bool = 1; // 0x153 MovB
	TaskCall(5); // 0x154 TaskCall
	func_1919(var_1073_bool, var_1074_cvector, var_1075_cvector, var_1076_bool); // 0x155 NEW_2
	TaskReturn(); // 0x156 TaskReturn
	var_1078_int = 4; // 0x158 PushI
	var_1079_int = GlobalVars[2]; // 0x159 PushGE
	var_1080_bool = var_1078_int == var_1079_int; // 0x15a Eq
	if(var_1080_bool == 0) goto Label_385; // 0x15b JumpB
	GetMainOutdoorScene(var_41_object); // 0x15c Func
	var_1081_string = ""; // 0x15e PushV
	func_3636(var_1081_string); // 0x15f NEW_2
	var_1082_object = Obj(); // 0x161 PushV
	func_3077(var_1082_object); // 0x162 NEW_2
	BroadcastMessage(var_1081_string, var_1082_object, var_41_object); // 0x164 Func
	var_1083_bool = 0; var_1084_cvector = CVector(0,0,0); var_1085_cvector = CVector(0,0,0); var_1086_bool = 0; // 0x166 PushV
	var_1084_cvector = var_39_cvector; // 0x167 Mov
	var_1085_cvector = var_39_cvector; // 0x168 Mov
	var_1086_bool = 1; // 0x169 MovB
	TaskCall(5); // 0x16a TaskCall
	func_1919(var_1083_bool, var_1084_cvector, var_1085_cvector, var_1086_bool); // 0x16b NEW_2
	TaskReturn(); // 0x16c TaskReturn
	var_1088_int = 4; // 0x16e PushI
	var_1089_int = GlobalVars[2]; // 0x16f PushGE
	var_1090_bool = var_1088_int == var_1089_int; // 0x170 Eq
	if(var_1090_bool == 0) goto Label_384; // 0x171 JumpB
	var_1091_int = 0; // 0x172 PushV
	var_1091_int = 3; // 0x173 MovI
	TaskCall(7); // 0x174 TaskCall
	func_2366(var_1091_int); // 0x175 NEW_2
	TaskReturn(); // 0x176 TaskReturn
	var_1093_int = 4; // 0x178 PushI
	var_1094_int = GlobalVars[2]; // 0x179 PushGE
	var_1095_bool = var_1093_int == var_1094_int; // 0x17a Eq
	if(var_1095_bool == 0) goto Label_384; // 0x17b JumpB
	var_1096_bool = 0; var_1097_int = 0; // 0x17c PushV
	var_1097_int = 2; // 0x17d MovI
	func_3414(var_1096_bool, var_1097_int); // 0x17e NEW_2
	
Label_384:
	var_41_object = 0; // 0x180 SetNull
	
Label_385:
	goto Label_431; // 0x181 Jump
	
Label_386:
	var_1098_int = 5; // 0x182 PushI
	var_1099_int = GlobalVars[2]; // 0x183 PushGE
	var_1100_bool = var_1098_int == var_1099_int; // 0x184 Eq
	if(var_1100_bool == 0) goto Label_428; // 0x185 JumpB
	var_1101_int = 0; // 0x186 PushV
	var_1101_int = 1; // 0x187 MovI
	TaskCall(7); // 0x188 TaskCall
	func_2366(var_1101_int); // 0x189 NEW_2
	TaskReturn(); // 0x18a TaskReturn
	var_1103_int = 5; // 0x18c PushI
	var_1104_int = GlobalVars[2]; // 0x18d PushGE
	var_1105_bool = var_1103_int == var_1104_int; // 0x18e Eq
	if(var_1105_bool == 0) goto Label_427; // 0x18f JumpB
	var_1106_object = Obj(); var_1107_float = 0; // 0x190 PushV
	var_1108_object = GlobalVars[5]; // 0x191 PushGE
	var_1106_object = var_1108_object; // 0x192 Mov
	var_1107_float = 8; // 0x194 MovI
	TaskCall(3); // 0x195 TaskCall
	func_1519(var_1106_object, var_1107_float); // 0x196 NEW_2
	TaskReturn(); // 0x197 TaskReturn
	var_1112_int = 5; // 0x199 PushI
	var_1113_int = GlobalVars[2]; // 0x19a PushGE
	var_1114_bool = var_1112_int == var_1113_int; // 0x19b Eq
	if(var_1114_bool == 0) goto Label_427; // 0x19c JumpB
	var_1115_int = 0; // 0x19d PushV
	var_1115_int = 2; // 0x19e MovI
	TaskCall(7); // 0x19f TaskCall
	func_2366(var_1115_int); // 0x1a0 NEW_2
	TaskReturn(); // 0x1a1 TaskReturn
	var_1117_int = 5; // 0x1a3 PushI
	var_1118_int = GlobalVars[2]; // 0x1a4 PushGE
	var_1119_bool = var_1117_int == var_1118_int; // 0x1a5 Eq
	if(var_1119_bool == 0) goto Label_427; // 0x1a6 JumpB
	var_1120_bool = 0; var_1121_int = 0; // 0x1a7 PushV
	var_1121_int = 2; // 0x1a8 MovI
	func_3414(var_1120_bool, var_1121_int); // 0x1a9 NEW_2
	
Label_427:
	goto Label_431; // 0x1ab Jump
	
Label_428:
	var_1122_string = "Unknown FSM state"; // 0x1ac PushS
	Trace(var_1122_string); // 0x1ad Func
	
Label_434:
	return 22; // 0x1b2 Return
}


func_0(var_0_cvector, var_961_bool)
{
	var_962_cvector = CVector(0,0,0); var_963_cvector = CVector(0,0,0); var_964_float = 0; var_965_cvector = CVector(0,0,0); var_966_cvector = CVector(0,0,0); var_967_float = 0; // 0x0 PushV
	GetPosition(var_965_cvector); // 0x1 Func
	var_966_cvector = var_965_cvector - var_0_cvector; // 0x3 Sub2
	var_967_float = var_966_cvector | var_966_cvector; // 0x4 Or2
	var_968_int = 40000; // 0x5 PushI
	var_961_bool = var_967_float < var_968_int; // 0x6 LT2
	return 6; // 0x7 Return
}


func_3077(var_72_object)
{
	var_73_object = Obj(); var_74_object = Obj(); // 0xc05 PushV
	self(var_74_object); // 0xc06 Func
	var_72_object = var_74_object; // 0xc08 Mov
	return 2; // 0xc09 Return
}


func_3083(var_52_cvector, var_53_cvector)
{
	var_60_float = 0; var_61_float = 0; // 0xc0b PushV
	var_62_int = var_53_cvector | var_53_cvector; // 0xc0c Or
	var_61_float = sqrt(var_62_int); // 0xc0d Sqrt2
	var_63_float = 0.0; // 0xc0e PushF
	var_64_bool = var_61_float < var_63_float; // 0xc0f LT
	if(var_64_bool == 0) goto Label_3091; // 0xc10 JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0xc11 MovV
	return 2; // 0xc12 Return
	
Label_3091:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0xc13 Div2
	return 2; // 0xc14 Return
}


func_3093(var_549_float, var_550_float, var_551_float)
{
	var_554_bool = var_550_float < var_551_float; // 0xc16 LT
	if(var_554_bool == 0) goto Label_3098; // 0xc17 JumpB
	var_549_float = var_550_float; // 0xc18 Mov
	goto Label_3099; // 0xc19 Jump
	
Label_3099:
	return 0; // 0xc1b Return
	
Label_3098:
	var_549_float = var_551_float; // 0xc1a Mov
}


func_3100(var_559_float, var_560_float, var_561_float, var_562_float)
{
	var_563_bool = var_560_float < var_561_float; // 0xc1d LT
	if(var_563_bool == 0) goto Label_3105; // 0xc1e JumpB
	var_559_float = var_561_float; // 0xc1f Mov
	return 0; // 0xc20 Return
	
Label_3105:
	var_564_bool = var_560_float > var_562_float; // 0xc21 GT
	if(var_564_bool == 0) goto Label_3109; // 0xc22 JumpB
	var_559_float = var_562_float; // 0xc23 Mov
	return 0; // 0xc24 Return
	
Label_3109:
	var_559_float = var_560_float; // 0xc25 Mov
	return 0; // 0xc26 Return
}


func_1058(var_0_cvector, var_412_bool)
{
	var_413_cvector = CVector(0,0,0); var_414_cvector = CVector(0,0,0); var_415_cvector = CVector(0,0,0); var_416_float = 0; var_417_float = 0; var_418_cvector = CVector(0,0,0); var_419_cvector = CVector(0,0,0); var_420_cvector = CVector(0,0,0); var_421_float = 0; var_422_float = 0; // 0x422 PushV
	var_423_bool = 0; // 0x423 PushV
	var_423_bool = 1; // 0x424 MovB
	var_424_bool = 0; var_425_object = Obj(); // 0x425 PushV
	var_425_object = var_0_cvector; // 0x426 MovT
	func_2859(var_424_bool, var_425_object); // 0x427 NEW_2
	var_426_bool = var_424_bool == 0; // 0x429 Not
	if(var_426_bool == 0) goto Label_1070; // 0x42a JumpB
	var_427_int = var_4_int; // 0x42b PushT
	if(var_427_int == 0) goto Label_1070; // 0x42c JumpB
	var_423_bool = 0; // 0x42d MovB
	
Label_1070:
	if(var_423_bool == 0) goto Label_1073; // 0x42e JumpB
	var_412_bool = 0; // 0x42f MovB
	return 10; // 0x430 Return
	
Label_1073:
	var_428_bool = 0; // 0x431 PushV
	func_1153(var_422_float, var_428_bool); // 0x432 NEW_2
	if(var_428_bool == 0) goto Label_1090; // 0x434 JumpB
	GetPFPosition(var_418_cvector); // 0x435 TObjFunc
	GetPFPosition(var_419_cvector); // 0x437 Func
	var_420_cvector = var_418_cvector - var_419_cvector; // 0x439 Sub2
	var_421_float = var_420_cvector | var_420_cvector; // 0x43a Or2
	GetAttackDistance(var_422_float); // 0x43b TObjFunc
	var_429_int = 50; // 0x43d PushI
	var_422_float = var_422_float + var_429_int; // 0x43e Add2
	var_430_float = var_422_float * var_422_float; // 0x43f Mult
	var_412_bool = var_421_float <= var_430_float; // 0x440 LE2
	return 10; // 0x441 Return
	
Label_1090:
	var_412_bool = 0; // 0x442 MovB
	return 10; // 0x443 Return
}


func_3111(var_991_bool, var_992_float)
{
	var_993_float = 0; var_994_float = 0; // 0xc27 PushV
	rand(var_994_float); // 0xc28 Func
	var_991_bool = var_994_float < var_992_float; // 0xc2a LT2
	return 2; // 0xc2b Return
}


func_3116(var_52_bool, var_53_object, var_54_float)
{
	var_59_bool = var_53_object == 0; // 0xc2d Not
	if(var_59_bool == 0) goto Label_3121; // 0xc2e JumpB
	var_52_bool = 0; // 0xc2f MovB
	return 0; // 0xc30 Return
	
Label_3121:
	var_60_int = 0; // 0xc31 PushI
	var_61_bool = var_54_float > var_60_int; // 0xc32 GT
	if(var_61_bool == 0) goto Label_3128; // 0xc33 JumpB
	var_62_int = 8; // 0xc34 PushI
	SendWorldWndMessage(var_62_int); // 0xc35 Func
	goto Label_3137; // 0xc37 Jump
	
Label_3137:
	var_63_float = 0; // 0xc41 PushV
	var_63_float = var_54_float; // 0xc42 Mov
	func_3168(var_63_float); // 0xc43 NEW_2
	var_67_bool = 0; var_68_object = Obj(); var_69_string = ""; var_70_float = 0; var_71_float = 0; var_72_float = 0; // 0xc45 PushV
	var_68_object = var_53_object; // 0xc46 Mov
	var_69_string = "reputation"; // 0xc47 MovS
	var_70_float = var_54_float; // 0xc48 Mov
	var_71_float = 0; // 0xc49 MovI
	var_72_float = 1; // 0xc4a MovI
	func_2723(var_67_bool, var_68_object, var_69_string, var_70_float, var_71_float, var_72_float); // 0xc4b NEW_2
	var_52_bool = 1; // 0xc4d MovB
	return 0; // 0xc4e Return
	
Label_3128:
	var_91_int = 0; // 0xc38 PushI
	var_92_bool = var_54_float < var_91_int; // 0xc39 LT
	if(var_92_bool == 0) goto Label_3135; // 0xc3a JumpB
	var_93_int = 9; // 0xc3b PushI
	SendWorldWndMessage(var_93_int); // 0xc3c Func
	goto Label_3137; // 0xc3e Jump
	
Label_3135:
	var_52_bool = 0; // 0xc3f MovB
	return 0; // 0xc40 Return
}


func_3632(var_59_string)
{
	var_59_string = "pt_d9q02_patrol"; // 0xe30 MovS
	return 0; // 0xe31 Return
}


func_3634(var_55_string)
{
	var_55_string = "d9q02_helpme"; // 0xe32 MovS
	return 0; // 0xe33 Return
}


func_2611(var_117_string)
{
	RemoveRTEnvelope(); // 0xa34 Func
	SetDeathState(); // 0xa36 Func
	Stop(); // 0xa38 Func
	StopAsync(); // 0xa3a Func
	StopSecondaryAnimation(); // 0xa3c Func
	var_118_string = ""; // 0xa3e PushV
	var_118_string = var_117_string; // 0xa3f Mov
	func_3036(var_118_string); // 0xa40 NEW_2
	var_147_string = "all"; // 0xa42 PushS
	PlayAnimation(var_147_string, var_117_string); // 0xa43 Func
	WaitForAnimEnd(); // 0xa45 Func
	var_148_string = "all"; // 0xa47 PushS
	LockAnimationEnd(var_148_string, var_117_string); // 0xa48 Func
	RemoveEnvelope(); // 0xa4a Func
	return 0; // 0xa4c Return
}


func_3636(var_1081_string)
{
	var_1081_string = "d9q02_corpse"; // 0xe34 MovS
	return 0; // 0xe35 Return
}


func_3638(var_760_string)
{
	var_760_string = "pt_d9q02_center"; // 0xe36 MovS
	return 0; // 0xe37 Return
}


func_3640(var_987_int)
{
	var_987_int = 2; // 0xe38 MovI
	return 0; // 0xe39 Return
}


func_3642()
{
	var_47_bool = 0; var_48_bool = 0; // 0xe3a PushV
	var_49_string = "Rifle"; // 0xe3b PushS
	var_50_int = 0; // 0xe3c PushI
	var_51_int = 1; // 0xe3d PushI
	AddItem(var_48_bool, var_49_string, var_50_int, var_51_int); // 0xe3e Func
	var_52_bool = 0; var_53_object = Obj(); var_54_float = 0; // 0xe40 PushV
	var_55_object = Obj(); // 0xe41 PushV
	func_2699(var_55_object); // 0xe42 NEW_2
	var_53_object = var_55_object; // 0xe43 Mov
	var_54_float = -0.03; // 0xe45 MovF
	func_3116(var_52_bool, var_53_object, var_54_float); // 0xe46 NEW_2
	return 2; // 0xe48 Return
}


func_2112(var_0_cvector)
{
	var_0_cvector = 1; // 0x840 TMovB
	var_21_int = 0; // 0x841 PushI
	KillTimer(var_21_int); // 0x842 Func
	Stop(); // 0x844 Func
	return 0; // 0x846 Return
}


func_1092(var_410_bool)
{
	var_411_bool = 0; // 0x444 PushV
	var_411_bool = 0; // 0x445 MovB
	var_412_bool = 0; // 0x446 PushV
	func_1058(var_411_bool, var_412_bool); // 0x447 NEW_2
	if(var_412_bool == 0) goto Label_1103; // 0x449 JumpB
	var_431_bool = 0; // 0x44a PushV
	func_1108(var_410_bool, var_411_bool, var_431_bool); // 0x44b NEW_2
	if(var_431_bool == 0) goto Label_1103; // 0x44d JumpB
	var_411_bool = 1; // 0x44e MovB
	
Label_1103:
	if(var_411_bool == 0) goto Label_1106; // 0x44f JumpB
	var_410_bool = 1; // 0x450 MovB
	return 0; // 0x451 Return
	
Label_1106:
	var_410_bool = 0; // 0x452 MovB
	return 0; // 0x453 Return
}


func_3151(var_567_float)
{
	var_568_object = Obj(); var_569_object = Obj(); // 0xc4f PushV
	CreateFloatVector(var_569_object); // 0xc50 Func
	add(var_567_float); // 0xc52 ObjFunc
	var_570_int = 0; // 0xc54 PushI
	var_571_bool = var_567_float < var_570_int; // 0xc55 LT
	if(var_571_bool == 0) goto Label_3163; // 0xc56 JumpB
	var_572_float = 0.7; // 0xc57 PushF
	var_573_int = 500; // 0xc58 PushI
	RumblePlay(var_572_float, var_573_int); // 0xc59 Func
	
Label_3163:
	var_574_int = 15; // 0xc5b PushI
	SendWorldWndMessage(var_574_int, var_569_object); // 0xc5c Func
	return 2; // 0xc5e Return
}


func_2128(var_941_string)
{
	var_941_string = "walk"; // 0x850 MovS
	return 0; // 0x851 Return
}


func_2130(var_942_string)
{
	var_942_string = "run"; // 0x852 MovS
	return 0; // 0x853 Return
}


func_2643()
{
	var_81_bool = GlobalVars[0]; // 0xa53 PushGE
	if(var_81_bool == 0) goto Label_2652; // 0xa54 JumpB
	var_82_object = Obj(); // 0xa55 PushV
	func_3077(var_82_object); // 0xa56 NEW_2
	RemoveActor(var_82_object); // 0xa58 Func
	Hold(); // 0xa5a Func
	
Label_2652:
	var_83_bool = 0; // 0xa5c PushV
	func_3020(var_83_bool); // 0xa5d NEW_2
	var_86_bool = var_83_bool == 0; // 0xa5f Not
	if(var_86_bool == 0) goto Label_2660; // 0xa60 JumpB
	Hold(); // 0xa61 Func
	goto Label_2652; // 0xa63 Jump
	
Label_2660:
	return 0; // 0xa64 Return
}


func_2132(var_766_bool)
{
	var_768_bool = 0; var_769_object = Obj(); var_770_cvector = CVector(0,0,0); var_771_cvector = CVector(0,0,0); var_772_bool = 0; var_773_object = Obj(); var_774_cvector = CVector(0,0,0); var_775_cvector = CVector(0,0,0); // 0x854 PushV
	GetMainOutdoorScene(var_773_object); // 0x855 Func
	var_776_string = ""; // 0x857 PushV
	func_3638(var_776_string); // 0x858 NEW_2
	GetLocator(var_776_string, var_772_bool, var_774_cvector, var_775_cvector); // 0x85a ObjFunc
	var_777_bool = var_772_bool == 0; // 0x85c Not
	if(var_777_bool == 0) goto Label_2144; // 0x85d JumpB
	var_766_bool = 0; // 0x85e MovB
	return 8; // 0x85f Return
	
Label_2144:
	var_778_bool = 0; var_779_cvector = CVector(0,0,0); var_780_cvector = CVector(0,0,0); var_781_bool = 0; // 0x860 PushV
	var_779_cvector = var_774_cvector; // 0x861 Mov
	var_780_cvector = var_775_cvector; // 0x862 Mov
	var_781_bool = 0; // 0x863 MovB
	func_2196(var_778_bool, var_779_cvector, var_780_cvector, var_781_bool); // 0x864 NEW_2
	var_766_bool = var_778_bool; // 0x865 Mov
	return 8; // 0x867 Return
}


func_1108(var_0_cvector, var_5_bool, var_431_bool)
{
	var_432_object = Obj(); var_433_bool = 0; var_434_float = 0; var_435_cvector = CVector(0,0,0); var_436_cvector = CVector(0,0,0); var_437_object = Obj(); var_438_bool = 0; var_439_float = 0; var_440_cvector = CVector(0,0,0); var_441_cvector = CVector(0,0,0); // 0x454 PushV
	GetScene(var_437_object); // 0x455 Func
	var_438_bool = 0; // 0x457 MovB
	
Label_1112:
	var_442_cvector = CVector(0,0,0); var_443_object = Obj(); // 0x458 PushV
	var_443_object = var_0_cvector; // 0x459 MovT
	func_2692(var_443_object); // 0x45a NEW_2
	var_448_int = -var_442_cvector; // 0x45c Neg
	FindDirLength(var_439_float, var_448_int, var_438_bool); // 0x45d Func
	var_449_bool = var_439_float < var_5_bool; // 0x45f LT
	if(var_449_bool == 0) goto Label_1122; // 0x460 JumpB
	goto Label_1150; // 0x461 Jump
	
Label_1150:
	var_431_bool = var_438_bool; // 0x47e Mov
	return 10; // 0x47f Return
	
Label_1122:
	Face(var_0_cvector); // 0x462 Func
	var_450_string = "all"; // 0x464 PushS
	var_451_string = "bjump"; // 0x465 PushS
	PlayAnimation(var_450_string, var_451_string); // 0x466 Func
	GetPFPosition(var_440_cvector); // 0x468 TObjFunc
	GetPFPosition(var_441_cvector); // 0x46a Func
	WaitForAnimEnd(); // 0x46c Func
	func_1196(var_441_cvector); // 0x46f NEW_2
	StopAsync(); // 0x471 Func
	var_452_cvector = CVector(0.0, 0.0, 0.0); // 0x473 PushVec
	SetSpeed(var_452_cvector); // 0x474 Func
	var_438_bool = 1; // 0x476 MovB
	var_453_bool = 0; // 0x477 PushV
	func_1058(var_441_cvector, var_453_bool); // 0x478 NEW_2
	var_454_bool = var_453_bool == 0; // 0x47a Not
	if(var_454_bool == 0) goto Label_1149; // 0x47b JumpB
	goto Label_1150; // 0x47c Jump
	
Label_1149:
	goto Label_1112; // 0x47d Jump
}


func_1627(var_0_cvector, var_1_cvector, var_688_bool, var_689_object, var_690_float, var_691_float, var_692_bool, var_693_bool)
{
	var_694_bool = 0; var_695_bool = 0; var_696_object = Obj(); var_697_cvector = CVector(0,0,0); var_698_cvector = CVector(0,0,0); var_699_cvector = CVector(0,0,0); var_700_float = 0; var_701_object = Obj(); var_702_bool = 0; var_703_bool = 0; var_704_object = Obj(); var_705_cvector = CVector(0,0,0); var_706_cvector = CVector(0,0,0); var_707_cvector = CVector(0,0,0); var_708_float = 0; var_709_object = Obj(); // 0x65b PushV
	var_0_cvector = 0; // 0x65c TMovB
	var_1_cvector = var_689_object; // 0x65d TMov
	var_703_bool = var_693_bool; // 0x65e Mov
	
Label_1631:
	var_710_bool = 0; var_711_object = Obj(); // 0x65f PushV
	var_711_object = var_689_object; // 0x660 Mov
	func_1767(var_710_bool, var_711_object); // 0x661 NEW_2
	var_714_bool = var_710_bool == 0; // 0x663 Not
	if(var_714_bool == 0) goto Label_1639; // 0x664 JumpB
	var_688_bool = 0; // 0x665 MovB
	return 16; // 0x666 Return
	
Label_1639:
	GetPosition(var_705_cvector); // 0x667 ObjFunc
	GetPosition(var_706_cvector); // 0x669 Func
	var_707_cvector = var_705_cvector - var_706_cvector; // 0x66b Sub2
	var_708_float = var_707_cvector | var_707_cvector; // 0x66c Or2
	var_715_bool = 0; // 0x66d PushV
	var_715_bool = 0; // 0x66e MovB
	var_716_int = 0; // 0x66f PushI
	var_717_bool = var_691_float > var_716_int; // 0x670 GT
	if(var_717_bool == 0) goto Label_1654; // 0x671 JumpB
	var_718_float = var_691_float * var_691_float; // 0x672 Mult
	var_719_bool = var_708_float > var_718_float; // 0x673 GT
	if(var_719_bool == 0) goto Label_1654; // 0x674 JumpB
	var_715_bool = 1; // 0x675 MovB
	
Label_1654:
	if(var_715_bool == 0) goto Label_1659; // 0x676 JumpB
	Stop(); // 0x677 Func
	var_688_bool = 0; // 0x679 MovB
	return 16; // 0x67a Return
	
Label_1659:
	var_720_float = var_690_float * var_690_float; // 0x67b Mult
	var_721_bool = var_708_float > var_720_float; // 0x67c GT
	if(var_721_bool == 0) goto Label_1721; // 0x67d JumpB
	GetPFPosition(var_705_cvector); // 0x67e ObjFunc
	FindPathTo(var_709_object, var_705_cvector); // 0x680 Func
	var_722_bool = var_709_object != 0; // 0x682 NullNeq
	if(var_722_bool == 0) goto Label_1670; // 0x683 JumpB
	var_704_object = var_709_object; // 0x684 Mov
	var_709_object = 0; // 0x685 SetNull
	
Label_1670:
	var_723_bool = var_704_object != 0; // 0x686 NullNeq
	if(var_723_bool == 0) goto Label_1703; // 0x687 JumpB
	var_724_bool = var_703_bool; // 0x688 Push
	if(var_724_bool == 0) goto Label_1680; // 0x689 JumpB
	var_703_bool = 0; // 0x68a MovB
	RotatePath(var_704_object, var_702_bool); // 0x68b Func
	var_725_bool = var_702_bool == 0; // 0x68d Not
	if(var_725_bool == 0) goto Label_1680; // 0x68e JumpB
	goto Label_1727; // 0x68f Jump
	
Label_1727:
	var_688_bool = !var_0_cvector; // 0x6bf Not2
	return 16; // 0x6c0 Return
	
Label_1680:
	var_726_int = 0; // 0x690 PushI
	var_727_float = 0.3; // 0x691 PushF
	SetTimer(var_726_int, var_727_float); // 0x692 Func
	var_728_string = ""; // 0x694 PushV
	func_1774(var_728_string); // 0x695 NEW_2
	var_729_string = ""; // 0x697 PushV
	func_1776(var_729_string); // 0x698 NEW_2
	FollowPath(var_704_object, var_692_bool, var_702_bool, var_728_string, var_729_string); // 0x69a Func
	var_730_bool = var_702_bool == 0; // 0x69c Not
	if(var_730_bool == 0) goto Label_1701; // 0x69d JumpB
	var_731_cvector = var_0_cvector; // 0x69e PushT
	if(var_731_cvector == 0) goto Label_1699; // 0x69f JumpB
	var_704_object = 0; // 0x6a0 SetNull
	goto Label_1727; // 0x6a1 Jump
	
Label_1699:
	goto Label_1726; // 0x6a3 Jump
	
Label_1726:
	goto Label_1631; // 0x6be Jump
	
Label_1701:
	var_704_object = 0; // 0x6a5 SetNull
	goto Label_1719; // 0x6a6 Jump
	
Label_1719:
	var_709_object = 0; // 0x6b7 SetNull
	goto Label_1725; // 0x6b8 Jump
	
Label_1725:
	var_704_object = 0; // 0x6bd SetNull
	
Label_1703:
	var_732_int = 0; // 0x6a7 PushI
	KillTimer(var_732_int); // 0x6a8 Func
	var_733_float = 0.5; // 0x6aa PushF
	Sleep(var_733_float, var_702_bool); // 0x6ab Func
	var_734_bool = var_702_bool == 0; // 0x6ad Not
	if(var_734_bool == 0) goto Label_1715; // 0x6ae JumpB
	var_735_cvector = var_0_cvector; // 0x6af PushT
	if(var_735_cvector == 0) goto Label_1715; // 0x6b0 JumpB
	var_704_object = 0; // 0x6b1 SetNull
	goto Label_1727; // 0x6b2 Jump
	
Label_1715:
	var_736_int = 0; // 0x6b3 PushI
	var_737_float = 0.3; // 0x6b4 PushF
	SetTimer(var_736_int, var_737_float); // 0x6b5 Func
	
Label_1721:
	var_738_int = 0; // 0x6b9 PushI
	KillTimer(var_738_int); // 0x6ba Func
	goto Label_1727; // 0x6bc Jump
}


func_3168(var_63_float)
{
	var_64_object = Obj(); var_65_object = Obj(); // 0xc60 PushV
	CreateFloatVector(var_65_object); // 0xc61 Func
	add(var_63_float); // 0xc63 ObjFunc
	var_66_int = 16; // 0xc65 PushI
	SendWorldWndMessage(var_66_int, var_65_object); // 0xc66 Func
	return 2; // 0xc68 Return
}


func_3178(var_216_object)
{
	var_217_bool = 0; var_218_bool = 0; // 0xc6a PushV
	IsPlayerActor(var_216_object, var_218_bool); // 0xc6b Func
	var_219_bool = var_218_bool; // 0xc6d Push
	if(var_219_bool == 0) goto Label_3186; // 0xc6e JumpB
	var_220_string = "attack"; // 0xc6f PushS
	PlayGlobalMusic(var_220_string); // 0xc70 Func
	
Label_3186:
	return 2; // 0xc72 Return
}


func_3187(var_861_string, var_862_int)
{
	var_863_string = ""; var_864_string = ""; // 0xc73 PushV
	var_864_string = "idle"; // 0xc74 MovS
	var_865_int = var_862_int; // 0xc75 Push
	if(var_865_int == 0) goto Label_3192; // 0xc76 JumpB
	var_864_string = var_864_string + var_862_int; // 0xc77 Add2
	
Label_3192:
	var_861_string = var_864_string; // 0xc78 Mov
	return 2; // 0xc79 Return
}


func_2678(var_539_string, var_540_int)
{
	var_541_int = 2; // 0xa77 PushI
	var_542_bool = var_540_int == var_541_int; // 0xa78 Eq
	if(var_542_bool == 0) goto Label_2685; // 0xa79 JumpB
	var_539_string = "fire"; // 0xa7a MovS
	return 0; // 0xa7b Return
	
Label_2685:
	var_543_int = 1; // 0xa7d PushI
	var_544_bool = var_540_int == var_543_int; // 0xa7e Eq
	if(var_544_bool == 0) goto Label_2690; // 0xa7f JumpB
	var_539_string = "bullet"; // 0xa80 MovS
	return 0; // 0xa81 Return
	
Label_2690:
	var_539_string = "phys"; // 0xa82 MovS
	return 0; // 0xa83 Return
}


func_3194(var_855_int)
{
	var_856_int = 0; var_857_bool = 0; var_858_int = 0; var_859_bool = 0; // 0xc7a PushV
	var_858_int = 0; // 0xc7b MovI
	
Label_3196:
	var_860_string = "all"; // 0xc7c PushS
	var_861_string = ""; var_862_int = 0; // 0xc7d PushV
	var_862_int = var_858_int; // 0xc7e Mov
	func_3187(var_861_string, var_862_int); // 0xc7f NEW_2
	HasAnimation(var_859_bool, var_860_string, var_861_string); // 0xc81 Func
	var_866_bool = var_859_bool == 0; // 0xc83 Not
	if(var_866_bool == 0) goto Label_3206; // 0xc84 JumpB
	goto Label_3209; // 0xc85 Jump
	
Label_3209:
	var_855_int = var_858_int; // 0xc89 Mov
	return 4; // 0xc8a Return
	
Label_3206:
	var_867_int = 1; // 0xc86 PushI
	var_858_int = var_858_int + var_867_int; // 0xc87 Add2
	goto Label_3196; // 0xc88 Jump
}


func_1153(var_0_cvector, var_360_bool)
{
	var_361_bool = 0; var_362_bool = 0; // 0x481 PushV
	var_363_string = "IsAttacking"; // 0x482 PushS
	var_364_int = 1; // 0x483 PushI
	var_365_bool = IsFuncExist(var_0_cvector, var_363_string, var_364_int); // 0x484 FuncExist
	if(var_365_bool == 0) goto Label_1162; // 0x485 JumpB
	IsAttacking(var_362_bool); // 0x486 TObjFunc
	var_360_bool = var_362_bool; // 0x488 Mov
	return 2; // 0x489 Return
	
Label_1162:
	var_360_bool = 0; // 0x48a MovB
	return 2; // 0x48b Return
}


func_2692(var_442_cvector)
{
	var_444_cvector = CVector(0,0,0); var_445_cvector = CVector(0,0,0); var_446_cvector = CVector(0,0,0); var_447_cvector = CVector(0,0,0); // 0xa84 PushV
	GetPosition(var_446_cvector); // 0xa85 Func
	GetPosition(var_447_cvector); // 0xa87 ObjFunc
	var_442_cvector = var_447_cvector - var_446_cvector; // 0xa89 Sub2
	return 4; // 0xa8a Return
}


func_3211(var_25_int)
{
	var_26_int = 0; var_27_int = 0; // 0xc8b PushV
	var_28_string = "branch"; // 0xc8c PushS
	GetVariable(var_28_string, var_27_int); // 0xc8d Func
	var_25_int = var_27_int; // 0xc8f Mov
	return 2; // 0xc90 Return
}


func_1164(var_2_object, var_6_bool)
{
	var_477_float = 0; var_478_int = 0; var_479_float = 0; var_480_int = 0; // 0x48c PushV
	var_481_bool = var_2_object == 0; // 0x48d Not
	if(var_481_bool == 0) goto Label_1168; // 0x48e JumpB
	return 4; // 0x48f Return
	
Label_1168:
	var_482_bool = var_6_bool; // 0x490 PushT
	if(var_482_bool == 0) goto Label_1176; // 0x491 JumpB
	var_483_int = -1; // 0x492 PushI
	var_6_bool = var_6_bool + var_483_int; // 0x493 Add2
	var_484_int = 0; // 0x494 PushI
	var_485_bool = var_6_bool > var_484_int; // 0x495 GT
	if(var_485_bool == 0) goto Label_1176; // 0x496 JumpB
	return 4; // 0x497 Return
	
Label_1176:
	rand(var_479_float); // 0x498 Func
	var_486_float = 0; // 0x49a PushV
	func_1212(var_486_float); // 0x49b NEW_2
	var_487_bool = var_479_float < var_486_float; // 0x49d LT
	if(var_487_bool == 0) goto Label_1195; // 0x49e JumpB
	irand(var_480_int, var_479_float); // 0x49f Func
	var_488_int = 1; // 0x4a1 PushI
	var_480_int = var_480_int + var_488_int; // 0x4a2 Add2
	var_489_string = "attack"; // 0x4a3 PushS
	var_490_int = var_489_string + var_480_int; // 0x4a4 Add
	Speak(var_490_int); // 0x4a5 Func
	var_491_int = 0; // 0x4a7 PushV
	func_1210(var_491_int); // 0x4a8 NEW_2
	var_6_bool = var_491_int; // 0x4a9 TMov
	
Label_1195:
	return 4; // 0x4ab Return
}


func_2699(var_55_object)
{
	var_56_object = Obj(); var_57_object = Obj(); // 0xa8b PushV
	var_58_string = "player"; // 0xa8c PushS
	FindActor(var_57_object, var_58_string); // 0xa8d Func
	var_55_object = var_57_object; // 0xa8f Mov
	return 2; // 0xa90 Return
}


func_3217(var_24_object)
{
	var_25_int = 0; // 0xc92 PushV
	func_3211(var_25_int); // 0xc93 NEW_2
	var_29_int = 1; // 0xc95 PushI
	var_30_bool = var_25_int == var_29_int; // 0xc96 Eq
	if(var_30_bool == 0) goto Label_3227; // 0xc97 JumpB
	WorkWithCorpse(var_24_object); // 0xc98 Func
	goto Label_3229; // 0xc9a Jump
	
Label_3229:
	return 0; // 0xc9d Return
	
Label_3227:
	Barter(var_24_object); // 0xc9b Func
}


func_2706(var_258_bool, var_259_object)
{
	var_260_bool = 0; var_261_bool = 0; // 0xa92 PushV
	IsPlayerActor(var_259_object, var_261_bool); // 0xa93 Func
	var_258_bool = var_261_bool; // 0xa95 Mov
	return 2; // 0xa96 Return
}


func_2196(var_778_bool, var_779_cvector, var_780_cvector, var_781_bool)
{
	var_782_float = GetByIndex(var_779_cvector, 1); // 0x895 PushE
	var_783_int = 30; // 0x896 PushI
	var_782_float = var_782_float + var_783_int; // 0x897 Add2
	SetByIndex(var_779_cvector, 1) = var_782_float; // 0x898 PopE
	var_784_bool = 0; var_785_cvector = CVector(0,0,0); var_786_cvector = CVector(0,0,0); var_787_float = 0; var_788_float = 0; var_789_bool = 0; var_790_bool = 0; // 0x899 PushV
	var_785_cvector = var_779_cvector; // 0x89a Mov
	var_786_cvector = var_780_cvector; // 0x89b Mov
	var_787_float = 100; // 0x89c MovI
	var_788_float = 4000; // 0x89d MovI
	var_789_bool = var_781_bool; // 0x89e Mov
	var_790_bool = 1; // 0x89f MovB
	func_2222(var_781_bool, var_784_bool, var_785_cvector, var_786_cvector, var_787_float, var_788_float, var_789_bool, var_790_bool); // 0x8a0 NEW_2
	var_778_bool = var_784_bool; // 0x8a1 Mov
	return 0; // 0x8a3 Return
}


func_2711(var_202_bool, var_203_object, var_204_string)
{
	var_205_bool = 0; var_206_bool = 0; // 0xa97 PushV
	var_207_string = "HasProperty"; // 0xa98 PushS
	var_208_int = 2; // 0xa99 PushI
	var_209_bool = IsFuncExist(var_203_object, var_207_string, var_208_int); // 0xa9a FuncExist
	var_210_bool = var_209_bool == 0; // 0xa9b Not
	if(var_210_bool == 0) goto Label_2719; // 0xa9c JumpB
	var_202_bool = 0; // 0xa9d MovB
	return 2; // 0xa9e Return
	
Label_2719:
	HasProperty(var_204_string, var_206_bool); // 0xa9f ObjFunc
	var_202_bool = var_206_bool; // 0xaa1 Mov
	return 2; // 0xaa2 Return
}


func_2723(var_67_bool, var_68_object, var_69_string, var_70_float, var_71_float, var_72_float)
{
	var_73_float = 0; var_74_float = 0; // 0xaa3 PushV
	var_75_bool = 0; var_76_object = Obj(); var_77_string = ""; // 0xaa4 PushV
	var_76_object = var_68_object; // 0xaa5 Mov
	var_77_string = var_69_string; // 0xaa6 Mov
	func_2711(var_75_bool, var_76_object, var_77_string); // 0xaa7 NEW_2
	var_84_bool = var_75_bool == 0; // 0xaa9 Not
	if(var_84_bool == 0) goto Label_2733; // 0xaaa JumpB
	var_67_bool = 0; // 0xaab MovB
	return 2; // 0xaac Return
	
Label_2733:
	GetProperty(var_69_string, var_74_float); // 0xaad ObjFunc
	var_85_float = 0; var_86_float = 0; var_87_float = 0; var_88_float = 0; // 0xaaf PushV
	var_86_float = var_74_float + var_70_float; // 0xab0 Add2
	var_87_float = var_71_float; // 0xab1 Mov
	var_88_float = var_72_float; // 0xab2 Mov
	func_3100(var_85_float, var_86_float, var_87_float, var_88_float); // 0xab3 NEW_2
	SetProperty(var_69_string, var_85_float); // 0xab5 ObjFunc
	var_67_bool = 1; // 0xab7 MovB
	return 2; // 0xab8 Return
}


func_3238(var_22_bool, var_23_object, var_24_string)
{
	var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_float = 0; // 0xca6 PushV
	var_41_object = Obj(); // 0xca7 PushV
	func_3077(var_41_object); // 0xca8 NEW_2
	var_44_bool = var_23_object == var_41_object; // 0xcaa Eq
	if(var_44_bool == 0) goto Label_3246; // 0xcab JumpB
	var_22_bool = 0; // 0xcac MovB
	return 16; // 0xcad Return
	
Label_3246:
	var_45_string = ""; // 0xcae PushV
	func_3636(var_45_string); // 0xcaf NEW_2
	var_46_bool = var_24_string == var_45_string; // 0xcb1 Eq
	if(var_46_bool == 0) goto Label_3259; // 0xcb2 JumpB
	var_47_bool = 0; var_48_object = Obj(); // 0xcb3 PushV
	var_48_object = var_23_object; // 0xcb4 Mov
	func_3478(var_47_bool, var_48_object); // 0xcb5 NEW_2
	if(var_47_bool == 0) goto Label_3258; // 0xcb7 JumpB
	var_22_bool = 1; // 0xcb8 MovB
	return 16; // 0xcb9 Return
	
Label_3258:
	goto Label_3310; // 0xcba Jump
	
Label_3310:
	var_22_bool = 0; // 0xcee MovB
	return 16; // 0xcef Return
	
Label_3259:
	var_55_string = ""; // 0xcbb PushV
	func_3634(var_55_string); // 0xcbc NEW_2
	var_56_bool = var_24_string == var_55_string; // 0xcbe Eq
	if(var_56_bool == 0) goto Label_3281; // 0xcbf JumpB
	GetPosition(var_33_cvector); // 0xcc0 ObjFunc
	GetPosition(var_34_cvector); // 0xcc2 Func
	var_35_cvector = var_33_cvector - var_34_cvector; // 0xcc4 Sub2
	var_36_float = var_35_cvector | var_35_cvector; // 0xcc5 Or2
	var_57_float = 4000000.0; // 0xcc6 PushF
	var_58_bool = var_36_float < var_57_float; // 0xcc7 LT
	if(var_58_bool == 0) goto Label_3280; // 0xcc8 JumpB
	var_59_bool = 0; var_60_object = Obj(); // 0xcc9 PushV
	var_60_object = var_23_object; // 0xcca Mov
	func_3514(var_59_bool, var_60_object); // 0xccb NEW_2
	if(var_59_bool == 0) goto Label_3280; // 0xccd JumpB
	var_22_bool = 1; // 0xcce MovB
	return 16; // 0xccf Return
	
Label_3280:
	goto Label_3310; // 0xcd0 Jump
	
Label_3281:
	var_67_string = "player_shot"; // 0xcd1 PushS
	var_68_bool = var_24_string == var_67_string; // 0xcd2 Eq
	if(var_68_bool == 0) goto Label_3310; // 0xcd3 JumpB
	GetPosition(var_37_cvector); // 0xcd4 ObjFunc
	GetPosition(var_38_cvector); // 0xcd6 Func
	var_39_cvector = var_37_cvector - var_38_cvector; // 0xcd8 Sub2
	var_40_float = var_39_cvector | var_39_cvector; // 0xcd9 Or2
	var_69_float = 360000.0; // 0xcda PushF
	var_70_bool = var_40_float < var_69_float; // 0xcdb LT
	if(var_70_bool == 0) goto Label_3300; // 0xcdc JumpB
	var_71_bool = 0; var_72_object = Obj(); // 0xcdd PushV
	var_72_object = var_23_object; // 0xcde Mov
	func_3514(var_71_bool, var_72_object); // 0xcdf NEW_2
	if(var_71_bool == 0) goto Label_3300; // 0xce1 JumpB
	var_22_bool = 1; // 0xce2 MovB
	return 16; // 0xce3 Return
	
Label_3300:
	var_73_float = 12250000.0; // 0xce4 PushF
	var_74_bool = var_40_float < var_73_float; // 0xce5 LT
	if(var_74_bool == 0) goto Label_3310; // 0xce6 JumpB
	var_75_bool = 0; var_76_object = Obj(); // 0xce7 PushV
	var_76_object = var_23_object; // 0xce8 Mov
	func_3478(var_75_bool, var_76_object); // 0xce9 NEW_2
	if(var_75_bool == 0) goto Label_3310; // 0xceb JumpB
	var_22_bool = 1; // 0xcec MovB
	return 16; // 0xced Return
}


func_1196(var_0_cvector)
{
	var_216_object = Obj(); // 0x4ac PushV
	var_216_object = var_0_cvector; // 0x4ad MovT
	func_3178(var_216_object); // 0x4ae NEW_2
	return 0; // 0x4b0 Return
}


func_2220(var_807_bool)
{
	var_807_bool = 1; // 0x8ac MovB
	return 0; // 0x8ad Return
}


func_2222(var_0_cvector, var_784_bool, var_785_cvector, var_786_cvector, var_787_float, var_788_float, var_789_bool, var_790_bool)
{
	var_791_bool = 0; var_792_bool = 0; var_793_object = Obj(); var_794_cvector = CVector(0,0,0); var_795_cvector = CVector(0,0,0); var_796_cvector = CVector(0,0,0); var_797_float = 0; var_798_object = Obj(); var_799_bool = 0; var_800_bool = 0; var_801_object = Obj(); var_802_cvector = CVector(0,0,0); var_803_cvector = CVector(0,0,0); var_804_cvector = CVector(0,0,0); var_805_float = 0; var_806_object = Obj(); // 0x8ae PushV
	var_0_cvector = 0; // 0x8af TMovB
	var_800_bool = var_790_bool; // 0x8b0 Mov
	
Label_2225:
	var_807_bool = 0; // 0x8b1 PushV
	func_2220(var_807_bool); // 0x8b2 NEW_2
	var_808_bool = var_807_bool == 0; // 0x8b4 Not
	if(var_808_bool == 0) goto Label_2232; // 0x8b5 JumpB
	var_784_bool = 0; // 0x8b6 MovB
	return 16; // 0x8b7 Return
	
Label_2232:
	var_802_cvector = var_785_cvector; // 0x8b8 Mov
	GetPosition(var_803_cvector); // 0x8b9 Func
	var_804_cvector = var_802_cvector - var_803_cvector; // 0x8bb Sub2
	var_805_float = var_804_cvector | var_804_cvector; // 0x8bc Or2
	var_809_bool = 0; // 0x8bd PushV
	var_809_bool = 0; // 0x8be MovB
	var_810_int = 0; // 0x8bf PushI
	var_811_bool = var_788_float > var_810_int; // 0x8c0 GT
	if(var_811_bool == 0) goto Label_2246; // 0x8c1 JumpB
	var_812_float = var_788_float * var_788_float; // 0x8c2 Mult
	var_813_bool = var_805_float > var_812_float; // 0x8c3 GT
	if(var_813_bool == 0) goto Label_2246; // 0x8c4 JumpB
	var_809_bool = 1; // 0x8c5 MovB
	
Label_2246:
	if(var_809_bool == 0) goto Label_2251; // 0x8c6 JumpB
	Stop(); // 0x8c7 Func
	var_784_bool = 0; // 0x8c9 MovB
	return 16; // 0x8ca Return
	
Label_2251:
	var_814_float = var_787_float * var_787_float; // 0x8cb Mult
	var_815_bool = var_805_float > var_814_float; // 0x8cc GT
	if(var_815_bool == 0) goto Label_2311; // 0x8cd JumpB
	FindPathTo(var_806_object, var_802_cvector); // 0x8ce Func
	var_816_bool = var_806_object != 0; // 0x8d0 NullNeq
	if(var_816_bool == 0) goto Label_2260; // 0x8d1 JumpB
	var_801_object = var_806_object; // 0x8d2 Mov
	var_806_object = 0; // 0x8d3 SetNull
	
Label_2260:
	var_817_bool = var_801_object != 0; // 0x8d4 NullNeq
	if(var_817_bool == 0) goto Label_2293; // 0x8d5 JumpB
	var_818_bool = var_800_bool; // 0x8d6 Push
	if(var_818_bool == 0) goto Label_2270; // 0x8d7 JumpB
	var_800_bool = 0; // 0x8d8 MovB
	RotatePath(var_801_object, var_799_bool); // 0x8d9 Func
	var_819_bool = var_799_bool == 0; // 0x8db Not
	if(var_819_bool == 0) goto Label_2270; // 0x8dc JumpB
	goto Label_2317; // 0x8dd Jump
	
Label_2317:
	var_820_bool = var_0_cvector == 0; // 0x90d Not
	if(var_820_bool == 0) goto Label_2323; // 0x90e JumpB
	var_821_float = GetByIndex(var_786_cvector, 0); // 0x90f PushE
	var_822_float = GetByIndex(var_786_cvector, 2); // 0x910 PushE
	RotateAsync(var_821_float, var_822_float); // 0x911 Func
	
Label_2323:
	var_784_bool = !var_0_cvector; // 0x913 Not2
	return 16; // 0x914 Return
	
Label_2270:
	var_823_int = 0; // 0x8de PushI
	var_824_float = 0.3; // 0x8df PushF
	SetTimer(var_823_int, var_824_float); // 0x8e0 Func
	var_825_string = ""; // 0x8e2 PushV
	func_2362(var_825_string); // 0x8e3 NEW_2
	var_826_string = ""; // 0x8e5 PushV
	func_2364(var_826_string); // 0x8e6 NEW_2
	FollowPath(var_801_object, var_789_bool, var_799_bool, var_825_string, var_826_string); // 0x8e8 Func
	var_827_bool = var_799_bool == 0; // 0x8ea Not
	if(var_827_bool == 0) goto Label_2291; // 0x8eb JumpB
	var_828_cvector = var_0_cvector; // 0x8ec PushT
	if(var_828_cvector == 0) goto Label_2289; // 0x8ed JumpB
	var_801_object = 0; // 0x8ee SetNull
	goto Label_2317; // 0x8ef Jump
	
Label_2289:
	goto Label_2316; // 0x8f1 Jump
	
Label_2316:
	goto Label_2225; // 0x90c Jump
	
Label_2291:
	var_801_object = 0; // 0x8f3 SetNull
	goto Label_2309; // 0x8f4 Jump
	
Label_2309:
	var_806_object = 0; // 0x905 SetNull
	goto Label_2315; // 0x906 Jump
	
Label_2315:
	var_801_object = 0; // 0x90b SetNull
	
Label_2293:
	var_829_int = 0; // 0x8f5 PushI
	KillTimer(var_829_int); // 0x8f6 Func
	var_830_float = 0.5; // 0x8f8 PushF
	Sleep(var_830_float, var_799_bool); // 0x8f9 Func
	var_831_bool = var_799_bool == 0; // 0x8fb Not
	if(var_831_bool == 0) goto Label_2305; // 0x8fc JumpB
	var_832_cvector = var_0_cvector; // 0x8fd PushT
	if(var_832_cvector == 0) goto Label_2305; // 0x8fe JumpB
	var_801_object = 0; // 0x8ff SetNull
	goto Label_2317; // 0x900 Jump
	
Label_2305:
	var_833_int = 0; // 0x901 PushI
	var_834_float = 0.3; // 0x902 PushF
	SetTimer(var_833_int, var_834_float); // 0x903 Func
	
Label_2311:
	var_835_int = 0; // 0x907 PushI
	KillTimer(var_835_int); // 0x908 Func
	goto Label_2317; // 0x90a Jump
}


func_1201()
{
	var_366_string = ""; // 0x4b1 PushV
	var_366_string = "attack_stay"; // 0x4b2 MovS
	func_3036(var_366_string); // 0x4b3 NEW_2
	return 0; // 0x4b5 Return
}


func_1206()
{
	return 0; // 0x4b7 Return
}


func_1208(var_603_bool)
{
	var_603_bool = 1; // 0x4b8 MovB
	return 0; // 0x4b9 Return
}


func_2745(var_511_float, var_512_object, var_513_float, var_514_int)
{
	var_518_int = 0; var_519_string = ""; var_520_int = 0; var_521_float = 0; var_522_float = 0; var_523_float = 0; var_524_int = 0; var_525_string = ""; var_526_int = 0; var_527_float = 0; var_528_float = 0; var_529_float = 0; // 0xab9 PushV
	var_530_bool = 0; var_531_object = Obj(); var_532_string = ""; // 0xaba PushV
	var_531_object = var_512_object; // 0xabb Mov
	var_532_string = "health"; // 0xabc MovS
	func_2711(var_530_bool, var_531_object, var_532_string); // 0xabd NEW_2
	var_533_bool = var_530_bool == 0; // 0xabf Not
	if(var_533_bool == 0) goto Label_2755; // 0xac0 JumpB
	var_511_float = 0.0; // 0xac1 MovF
	return 12; // 0xac2 Return
	
Label_2755:
	var_534_bool = 0; var_535_object = Obj(); var_536_string = ""; // 0xac3 PushV
	var_535_object = var_512_object; // 0xac4 Mov
	var_536_string = "armor"; // 0xac5 MovS
	func_2711(var_534_bool, var_535_object, var_536_string); // 0xac6 NEW_2
	var_537_bool = var_534_bool == 0; // 0xac8 Not
	if(var_537_bool == 0) goto Label_2764; // 0xac9 JumpB
	var_524_int = 0; // 0xaca MovI
	goto Label_2767; // 0xacb Jump
	
Label_2767:
	var_538_string = "armor_"; // 0xacf PushS
	var_539_string = ""; var_540_int = 0; // 0xad0 PushV
	var_540_int = var_514_int; // 0xad1 Mov
	func_2678(var_539_string, var_540_int); // 0xad2 NEW_2
	var_525_string = var_538_string + var_539_string; // 0xad4 Add2
	var_545_bool = 0; var_546_object = Obj(); var_547_string = ""; // 0xad5 PushV
	var_546_object = var_512_object; // 0xad6 Mov
	var_547_string = var_525_string; // 0xad7 Mov
	func_2711(var_545_bool, var_546_object, var_547_string); // 0xad8 NEW_2
	var_548_bool = var_545_bool == 0; // 0xada Not
	if(var_548_bool == 0) goto Label_2782; // 0xadb JumpB
	var_526_int = 0; // 0xadc MovI
	goto Label_2784; // 0xadd Jump
	
Label_2784:
	var_549_float = 0; var_550_float = 0; var_551_float = 0; // 0xae0 PushV
	var_552_int = var_524_int + var_526_int; // 0xae1 Add
	var_553_float = 100.0; // 0xae2 PushF
	var_550_float = var_552_int / var_552_int; // 0xae3 Div2
	var_551_float = 1; // 0xae4 MovI
	func_3093(var_549_float, var_550_float, var_551_float); // 0xae5 NEW_2
	var_527_float = var_549_float; // 0xae6 Mov
	var_555_string = "health"; // 0xae8 PushS
	GetProperty(var_555_string, var_528_float); // 0xae9 ObjFunc
	var_556_int = 1; // 0xaeb PushI
	var_557_int = var_556_int - var_527_float; // 0xaec Sub
	var_529_float = var_513_float * var_557_int; // 0xaed Mult2
	var_558_string = "health"; // 0xaee PushS
	var_559_float = 0; var_560_float = 0; var_561_float = 0; var_562_float = 0; // 0xaef PushV
	var_560_float = var_528_float - var_529_float; // 0xaf0 Sub2
	var_561_float = 0; // 0xaf1 MovI
	var_562_float = 1; // 0xaf2 MovI
	func_3100(var_559_float, var_560_float, var_561_float, var_562_float); // 0xaf3 NEW_2
	SetProperty(var_558_string, var_559_float); // 0xaf5 ObjFunc
	var_565_bool = 0; var_566_object = Obj(); // 0xaf7 PushV
	var_566_object = var_512_object; // 0xaf8 Mov
	func_2706(var_565_bool, var_566_object); // 0xaf9 NEW_2
	if(var_565_bool == 0) goto Label_2816; // 0xafb JumpB
	var_567_float = 0; // 0xafc PushV
	var_567_float = -var_529_float; // 0xafd Neg2
	func_3151(var_567_float); // 0xafe NEW_2
	
Label_2816:
	var_511_float = var_529_float; // 0xb00 Mov
	return 12; // 0xb01 Return
	
Label_2782:
	GetProperty(var_525_string, var_526_int); // 0xade ObjFunc
	
Label_2764:
	var_575_string = "armor"; // 0xacc PushS
	GetProperty(var_575_string, var_524_int); // 0xacd ObjFunc
}


func_1210(var_491_int)
{
	var_491_int = 1; // 0x4ba MovI
	return 0; // 0x4bb Return
}


func_1212(var_486_float)
{
	var_486_float = 0.5; // 0x4bc MovF
	return 0; // 0x4bd Return
}


func_1214(var_3_int, var_223_bool, var_224_object, var_225_float, var_226_float, var_227_bool, var_228_bool)
{
	var_233_bool = 0; var_234_bool = 0; // 0x4be PushV
	var_3_int = var_224_object; // 0x4bf TMov
	var_235_int = 2; // 0x4c0 PushI
	var_236_int = 2; // 0x4c1 PushI
	SetTimer(var_235_int, var_236_int); // 0x4c2 Func
	var_237_bool = 0; var_238_object = Obj(); var_239_float = 0; var_240_float = 0; var_241_bool = 0; var_242_bool = 0; // 0x4c4 PushV
	var_238_object = var_224_object; // 0x4c5 Mov
	var_239_float = var_225_float; // 0x4c6 Mov
	var_240_float = var_226_float; // 0x4c7 Mov
	var_241_bool = var_227_bool; // 0x4c8 Mov
	var_242_bool = var_228_bool; // 0x4c9 Mov
	func_1263(var_234_bool, var_237_bool, var_238_object, var_239_float, var_240_float, var_241_bool, var_242_bool); // 0x4ca NEW_2
	var_234_bool = var_237_bool; // 0x4cb Mov
	var_317_int = 2; // 0x4cd PushI
	KillTimer(var_317_int); // 0x4ce Func
	var_223_bool = var_234_bool; // 0x4d0 Mov
	return 2; // 0x4d1 Return
}


func_1729(var_0_cvector, var_1_cvector, var_24_int)
{
	var_25_int = 0; // 0x6c2 PushI
	var_26_bool = var_24_int != var_25_int; // 0x6c3 Neq
	if(var_26_bool == 0) goto Label_1734; // 0x6c4 JumpB
	return 0; // 0x6c5 Return
	
Label_1734:
	var_27_bool = 0; var_28_object = Obj(); // 0x6c6 PushV
	var_28_object = var_1_cvector; // 0x6c7 MovT
	func_1767(var_27_bool, var_28_object); // 0x6c8 NEW_2
	var_63_bool = var_27_bool == 0; // 0x6ca Not
	if(var_63_bool == 0) goto Label_1741; // 0x6cb JumpB
	var_0_cvector = 1; // 0x6cc TMovB
	
Label_1741:
	var_64_int = 0; // 0x6cd PushI
	KillTimer(var_64_int); // 0x6ce Func
	Stop(); // 0x6d0 Func
	return 0; // 0x6d2 Return
}


func_1751(var_0_cvector)
{
	var_0_cvector = 1; // 0x6d7 TMovB
	var_21_int = 0; // 0x6d8 PushI
	KillTimer(var_21_int); // 0x6d9 Func
	Stop(); // 0x6db Func
	return 0; // 0x6dd Return
}


func_1767(var_710_bool, var_711_object)
{
	var_712_bool = 0; var_713_object = Obj(); // 0x6e8 PushV
	var_713_object = var_711_object; // 0x6e9 Mov
	func_2859(var_712_bool, var_713_object); // 0x6ea NEW_2
	var_710_bool = var_712_bool; // 0x6eb Mov
	return 0; // 0x6ed Return
}


func_1774(var_728_string)
{
	var_728_string = "walk"; // 0x6ee MovS
	return 0; // 0x6ef Return
}


func_1263(var_2_object, var_237_bool, var_238_object, var_239_float, var_240_float, var_241_bool, var_242_bool)
{
	var_243_bool = 0; var_244_bool = 0; var_245_bool = 0; var_246_bool = 0; // 0x4ef PushV
	var_247_object = Obj(); // 0x4f0 PushV
	var_247_object = var_238_object; // 0x4f1 Mov
	func_3178(var_247_object); // 0x4f2 NEW_2
	var_248_int = 1; // 0x4f4 PushI
	var_249_int = 5; // 0x4f5 PushI
	SetTimer(var_248_int, var_249_int); // 0x4f6 Func
	CanSee(var_245_bool, var_238_object); // 0x4f8 Func
	var_250_bool = var_245_bool; // 0x4fa Push
	if(var_250_bool == 0) goto Label_1282; // 0x4fb JumpB
	var_2_object = 1; // 0x4fc TMovB
	var_251_object = Obj(); // 0x4fd PushV
	var_251_object = var_238_object; // 0x4fe Mov
	func_3025(var_251_object); // 0x4ff NEW_2
	goto Label_1283; // 0x501 Jump
	
Label_1283:
	var_258_bool = 0; var_259_object = Obj(); // 0x503 PushV
	var_259_object = var_238_object; // 0x504 Mov
	func_2706(var_258_bool, var_259_object); // 0x505 NEW_2
	if(var_258_bool == 0) goto Label_1293; // 0x507 JumpB
	var_262_object = Obj(); // 0x508 PushV
	func_3077(var_262_object); // 0x509 NEW_2
	SendPlayerEnemy(var_238_object, var_262_object); // 0x50b Func
	
Label_1293:
	var_263_bool = 0; var_264_object = Obj(); var_265_float = 0; var_266_float = 0; var_267_bool = 0; var_268_bool = 0; // 0x50d PushV
	var_264_object = var_238_object; // 0x50e Mov
	var_265_float = var_239_float; // 0x50f Mov
	var_266_float = var_240_float; // 0x510 Mov
	var_267_bool = var_241_bool; // 0x511 Mov
	var_268_bool = var_242_bool; // 0x512 Mov
	func_1368(var_245_bool, var_246_bool, var_263_bool, var_264_object, var_265_float, var_266_float, var_267_bool, var_268_bool); // 0x513 NEW_2
	var_246_bool = var_263_bool; // 0x514 Mov
	var_314_object = var_2_object; // 0x516 PushT
	if(var_314_object == 0) goto Label_1307; // 0x517 JumpB
	var_315_string = "head"; // 0x518 PushS
	UnlookAsync(var_315_string); // 0x519 Func
	
Label_1307:
	var_316_int = 1; // 0x51b PushI
	KillTimer(var_316_int); // 0x51c Func
	var_237_bool = var_246_bool; // 0x51e Mov
	return 4; // 0x51f Return
	
Label_1282:
	var_2_object = 0; // 0x502 TMovB
}


func_3312(var_21_bool, var_22_object)
{
	var_23_bool = 0; // 0xcf1 PushV
	var_23_bool = 0; // 0xcf2 MovB
	var_24_string = "IsDead"; // 0xcf3 PushS
	var_25_int = 1; // 0xcf4 PushI
	var_26_bool = IsFuncExist(var_22_object, var_24_string, var_25_int); // 0xcf5 FuncExist
	if(var_26_bool == 0) goto Label_3325; // 0xcf6 JumpB
	var_27_bool = 0; var_28_object = Obj(); // 0xcf7 PushV
	var_28_object = var_22_object; // 0xcf8 Mov
	func_2818(var_28_object); // 0xcf9 NEW_2
	if(var_27_bool == 0) goto Label_3325; // 0xcfb JumpB
	var_23_bool = 1; // 0xcfc MovB
	
Label_3325:
	if(var_23_bool == 0) goto Label_3350; // 0xcfd JumpB
	var_31_bool = 0; var_32_object = Obj(); var_33_string = ""; // 0xcfe PushV
	var_32_object = var_22_object; // 0xcff Mov
	var_34_string = ""; // 0xd00 PushV
	func_3636(var_34_string); // 0xd01 NEW_2
	var_33_string = var_34_string; // 0xd02 Mov
	func_2711(var_31_bool, var_32_object, var_33_string); // 0xd04 NEW_2
	if(var_31_bool == 0) goto Label_3337; // 0xd06 JumpB
	var_21_bool = 0; // 0xd07 MovB
	return 0; // 0xd08 Return
	
Label_3337:
	var_41_string = ""; // 0xd09 PushV
	func_3636(var_41_string); // 0xd0a NEW_2
	var_42_int = 1; // 0xd0c PushI
	SetProperty(var_41_string, var_42_int); // 0xd0d ObjFunc
	var_43_bool = 0; var_44_object = Obj(); // 0xd0f PushV
	var_44_object = var_22_object; // 0xd10 Mov
	func_3460(var_43_bool, var_44_object); // 0xd11 NEW_2
	var_21_bool = var_43_bool; // 0xd12 Mov
	return 0; // 0xd14 Return
	
Label_3350:
	var_51_bool = 0; var_52_object = Obj(); // 0xd16 PushV
	var_52_object = var_22_object; // 0xd17 Mov
	func_2706(var_51_bool, var_52_object); // 0xd18 NEW_2
	if(var_51_bool == 0) goto Label_3361; // 0xd1a JumpB
	var_55_bool = 0; var_56_object = Obj(); // 0xd1b PushV
	var_56_object = var_22_object; // 0xd1c Mov
	func_3514(var_55_bool, var_56_object); // 0xd1d NEW_2
	var_21_bool = var_55_bool; // 0xd1e Mov
	return 0; // 0xd20 Return
	
Label_3361:
	var_21_bool = 0; // 0xd21 MovB
	return 0; // 0xd22 Return
}


func_1776(var_729_string)
{
	var_729_string = "run"; // 0x6f0 MovS
	return 0; // 0x6f1 Return
}


func_1778()
{
	func_1833(); // 0x6f3 NEW_2
	return 0; // 0x6f5 Return
}


func_754(var_4_int)
{
	Stop(); // 0x2f2 Func
	StopAnimation(); // 0x2f4 Func
	StopGroup0(); // 0x2f6 Func
	var_4_int = 1; // 0x2f8 TMovB
	return 0; // 0x2f9 Return
}


func_762(var_1_cvector, var_2_object, var_5_bool)
{
	var_146_bool = 0; var_147_bool = 0; var_148_cvector = CVector(0,0,0); var_149_bool = 0; var_150_bool = 0; var_151_cvector = CVector(0,0,0); // 0x2fa PushV
	var_1_cvector = 0; // 0x2fb TMovI
	
Label_764:
	var_152_string = "all"; // 0x2fc PushS
	var_153_string = "attack_begin"; // 0x2fd PushS
	var_154_int = 1; // 0x2fe PushI
	var_155_int = var_1_cvector + var_154_int; // 0x2ff Add
	var_156_int = var_153_string + var_155_int; // 0x300 Add
	HasAnimation(var_149_bool, var_152_string, var_156_int); // 0x301 Func
	var_157_bool = var_149_bool == 0; // 0x303 Not
	if(var_157_bool == 0) goto Label_774; // 0x304 JumpB
	goto Label_777; // 0x305 Jump
	
Label_777:
	var_2_object = 0; // 0x309 TMovI
	
Label_778:
	var_158_string = "attack"; // 0x30a PushS
	var_159_int = 1; // 0x30b PushI
	var_160_int = var_2_object + var_159_int; // 0x30c Add
	var_161_int = var_158_string + var_160_int; // 0x30d Add
	IsExisting3DSound(var_150_bool, var_161_int); // 0x30e Func
	var_162_bool = var_150_bool == 0; // 0x310 Not
	if(var_162_bool == 0) goto Label_787; // 0x311 JumpB
	goto Label_790; // 0x312 Jump
	
Label_790:
	var_163_string = "all"; // 0x316 PushS
	var_164_string = "bjump"; // 0x317 PushS
	GetAnimationOffset(var_151_cvector, var_163_string, var_164_string); // 0x318 Func
	var_165_float = GetByIndex(var_151_cvector, 2); // 0x31a PushE
	var_5_bool = -var_165_float; // 0x31b Neg2
	return 6; // 0x31c Return
	
Label_787:
	var_166_int = 1; // 0x313 PushI
	var_2_object = var_2_object + var_166_int; // 0x314 Add2
	goto Label_778; // 0x315 Jump
	
Label_774:
	var_167_int = 1; // 0x306 PushI
	var_1_cvector = var_1_cvector + var_167_int; // 0x307 Add2
	goto Label_764; // 0x308 Jump
}


func_2818(var_195_bool)
{
	var_197_bool = 0; var_198_bool = 0; // 0xb02 PushV
	IsDead(var_198_bool); // 0xb03 ObjFunc
	var_195_bool = var_198_bool; // 0xb05 Mov
	return 2; // 0xb06 Return
}


func_2823(var_184_bool, var_185_object)
{
	var_186_object = Obj(); var_187_object = Obj(); var_188_object = Obj(); var_189_object = Obj(); // 0xb07 PushV
	var_190_bool = var_185_object == 0; // 0xb08 NullEq
	if(var_190_bool == 0) goto Label_2828; // 0xb09 JumpB
	var_184_bool = 0; // 0xb0a MovB
	return 4; // 0xb0b Return
	
Label_2828:
	var_191_bool = 0; // 0xb0c PushV
	var_191_bool = 0; // 0xb0d MovB
	var_192_string = "IsDead"; // 0xb0e PushS
	var_193_int = 1; // 0xb0f PushI
	var_194_bool = IsFuncExist(var_185_object, var_192_string, var_193_int); // 0xb10 FuncExist
	if(var_194_bool == 0) goto Label_2840; // 0xb11 JumpB
	var_195_bool = 0; var_196_object = Obj(); // 0xb12 PushV
	var_196_object = var_185_object; // 0xb13 Mov
	func_2818(var_196_object); // 0xb14 NEW_2
	if(var_195_bool == 0) goto Label_2840; // 0xb16 JumpB
	var_191_bool = 1; // 0xb17 MovB
	
Label_2840:
	if(var_191_bool == 0) goto Label_2843; // 0xb18 JumpB
	var_184_bool = 0; // 0xb19 MovB
	return 4; // 0xb1a Return
	
Label_2843:
	GetScene(var_188_object); // 0xb1b Func
	var_199_bool = var_188_object == 0; // 0xb1d NullEq
	if(var_199_bool == 0) goto Label_2849; // 0xb1e JumpB
	var_184_bool = 0; // 0xb1f MovB
	return 4; // 0xb20 Return
	
Label_2849:
	GetScene(var_189_object); // 0xb21 ObjFunc
	var_200_bool = var_188_object != var_189_object; // 0xb23 Neq
	if(var_200_bool == 0) goto Label_2855; // 0xb24 JumpB
	var_184_bool = 0; // 0xb25 MovB
	return 4; // 0xb26 Return
	
Label_2855:
	var_184_bool = 1; // 0xb27 MovB
	return 4; // 0xb28 Return
}


func_797(var_0_cvector, var_497_float, var_498_int)
{
	var_499_object = Obj(); var_500_float = 0; var_501_float = 0; var_502_object = Obj(); var_503_float = 0; var_504_float = 0; // 0x31d PushV
	var_505_float = 0.9; // 0x31e PushF
	var_506_float = var_497_float * var_505_float; // 0x31f Mult
	GetVictim(var_506_float, var_502_object); // 0x320 Func
	ReportAttack(var_0_cvector); // 0x322 Func
	var_507_bool = var_502_object == var_0_cvector; // 0x324 Eq
	if(var_507_bool == 0) goto Label_834; // 0x325 JumpB
	var_508_float = 0; var_509_object = Obj(); var_510_int = 0; // 0x326 PushV
	var_509_object = var_502_object; // 0x327 Mov
	var_510_int = var_498_int; // 0x328 Mov
	func_451(var_510_int); // 0x329 NEW_2
	var_503_float = var_508_float; // 0x32a Mov
	var_511_float = 0; var_512_object = Obj(); var_513_float = 0; var_514_int = 0; // 0x32c PushV
	var_512_object = var_502_object; // 0x32d Mov
	var_513_float = var_503_float; // 0x32e Mov
	var_515_int = 0; var_516_object = Obj(); var_517_int = 0; // 0x32f PushV
	var_516_object = var_502_object; // 0x330 Mov
	var_517_int = var_498_int; // 0x331 Mov
	func_454(var_517_int); // 0x332 NEW_2
	var_514_int = var_515_int; // 0x333 Mov
	func_2745(var_511_float, var_512_object, var_513_float, var_514_int); // 0x335 NEW_2
	var_504_float = var_511_float; // 0x336 Mov
	var_576_int = 0; // 0x338 PushV
	func_457(var_576_int); // 0x339 NEW_2
	ReportHit(var_0_cvector, var_576_int, var_504_float, var_503_float); // 0x33b Func
	var_577_object = Obj(); var_578_float = 0; // 0x33d PushV
	var_577_object = var_502_object; // 0x33e Mov
	var_578_float = var_504_float; // 0x33f Mov
	func_1206(); // 0x340 NEW_2
	
Label_834:
	return 6; // 0x342 Return
}


func_1312(var_1_cvector, var_27_int)
{
	var_28_int = 1; // 0x521 PushI
	var_29_bool = var_27_int == var_28_int; // 0x522 Eq
	if(var_29_bool == 0) goto Label_1321; // 0x523 JumpB
	var_30_object = Obj(); // 0x524 PushV
	var_30_object = var_1_cvector; // 0x525 MovT
	func_3178(var_30_object); // 0x526 NEW_2
	goto Label_1325; // 0x528 Jump
	
Label_1325:
	return 0; // 0x52d Return
	
Label_1321:
	var_35_int = 0; // 0x529 PushV
	var_35_int = var_27_int; // 0x52a Mov
	func_1470(var_22_object, var_27_int, var_35_int); // 0x52b NEW_2
}


func_3363(var_21_bool, var_22_object)
{
	var_23_bool = 0; var_24_object = Obj(); // 0xd24 PushV
	var_24_object = var_22_object; // 0xd25 Mov
	func_2706(var_23_bool, var_24_object); // 0xd26 NEW_2
	if(var_23_bool == 0) goto Label_3375; // 0xd28 JumpB
	var_27_bool = 0; var_28_object = Obj(); // 0xd29 PushV
	var_28_object = var_22_object; // 0xd2a Mov
	func_3496(var_27_bool, var_28_object); // 0xd2b NEW_2
	var_21_bool = var_27_bool; // 0xd2c Mov
	return 0; // 0xd2e Return
	
Label_3375:
	var_21_bool = 0; // 0xd2f MovB
	return 0; // 0xd30 Return
}


func_1833()
{
	var_839_int = 0; var_840_int = 0; var_841_int = 0; var_842_int = 0; var_843_bool = 0; var_844_float = 0; var_845_bool = 0; var_846_int = 0; var_847_int = 0; var_848_int = 0; var_849_int = 0; var_850_bool = 0; var_851_float = 0; var_852_bool = 0; // 0x729 PushV
	WaitForAnimEnd(); // 0x72a Func
	var_853_bool = 0; // 0x72c PushV
	func_3020(var_853_bool); // 0x72d NEW_2
	var_854_bool = var_853_bool == 0; // 0x72f Not
	if(var_854_bool == 0) goto Label_1842; // 0x730 JumpB
	return 14; // 0x731 Return
	
Label_1842:
	var_855_int = 0; // 0x732 PushV
	func_3194(var_855_int); // 0x733 NEW_2
	var_846_int = var_855_int; // 0x734 Mov
	var_847_int = 0; // 0x736 MovI
	
Label_1847:
	var_868_bool = 0; // 0x737 PushV
	var_868_bool = 0; // 0x738 MovB
	var_869_int = 5; // 0x739 PushI
	var_870_bool = var_847_int < var_869_int; // 0x73a LT
	if(var_870_bool == 0) goto Label_1857; // 0x73b JumpB
	var_871_bool = 0; // 0x73c PushV
	func_3020(var_871_bool); // 0x73d NEW_2
	if(var_871_bool == 0) goto Label_1857; // 0x73f JumpB
	var_868_bool = 1; // 0x740 MovB
	
Label_1857:
	if(var_868_bool == 0) goto Label_1909; // 0x741 JumpB
	var_872_int = 3; // 0x742 PushI
	irand(var_848_int, var_872_int); // 0x743 Func
	var_873_int = 0; // 0x745 PushI
	var_874_bool = var_848_int == var_873_int; // 0x746 Eq
	if(var_874_bool == 0) goto Label_1881; // 0x747 JumpB
	var_875_int = var_846_int; // 0x748 Push
	if(var_875_int == 0) goto Label_1880; // 0x749 JumpB
	irand(var_849_int, var_846_int); // 0x74a Func
	var_876_string = "all"; // 0x74c PushS
	var_877_string = ""; var_878_int = 0; // 0x74d PushV
	var_878_int = var_849_int; // 0x74e Mov
	func_3187(var_877_string, var_878_int); // 0x74f NEW_2
	PlayAnimation(var_876_string, var_877_string); // 0x751 Func
	WaitForAnimEnd(var_850_bool); // 0x753 Func
	var_879_bool = var_850_bool == 0; // 0x755 Not
	if(var_879_bool == 0) goto Label_1880; // 0x756 JumpB
	goto Label_1909; // 0x757 Jump
	
Label_1909:
	ResetAAS(); // 0x775 Func
	return 14; // 0x777 Return
	
Label_1880:
	goto Label_1898; // 0x758 Jump
	
Label_1898:
	var_880_bool = 0; // 0x76a PushV
	func_1912(var_880_bool); // 0x76b NEW_2
	var_881_bool = var_880_bool == 0; // 0x76d Not
	if(var_881_bool == 0) goto Label_1904; // 0x76e JumpB
	goto Label_1909; // 0x76f Jump
	
Label_1904:
	ResetAAS(); // 0x770 Func
	var_882_int = 1; // 0x772 PushI
	var_847_int = var_847_int + var_882_int; // 0x773 Add2
	goto Label_1847; // 0x774 Jump
	
Label_1881:
	var_883_int = 1; // 0x759 PushI
	var_884_bool = var_848_int == var_883_int; // 0x75a Eq
	if(var_884_bool == 0) goto Label_1895; // 0x75b JumpB
	var_885_int = 4; // 0x75c PushI
	rand(var_851_float, var_885_int); // 0x75d Func
	var_886_int = 1; // 0x75f PushI
	var_887_int = var_851_float + var_886_int; // 0x760 Add
	Sleep(var_887_int, var_852_bool); // 0x761 Func
	var_888_bool = var_852_bool == 0; // 0x763 Not
	if(var_888_bool == 0) goto Label_1894; // 0x764 JumpB
	goto Label_1909; // 0x765 Jump
	
Label_1894:
	goto Label_1898; // 0x766 Jump
	
Label_1895:
	var_889_int = var_847_int; // 0x767 Push
	if(var_889_int == 0) goto Label_1898; // 0x768 JumpB
	goto Label_1909; // 0x769 Jump
}


func_2346(var_0_cvector)
{
	var_0_cvector = 1; // 0x92a TMovB
	var_21_int = 0; // 0x92b PushI
	KillTimer(var_21_int); // 0x92c Func
	Stop(); // 0x92e Func
	return 0; // 0x930 Return
}


func_2859(var_180_bool, var_181_object)
{
	var_182_int = 0; var_183_int = 0; // 0xb2b PushV
	var_184_bool = 0; var_185_object = Obj(); // 0xb2c PushV
	var_185_object = var_181_object; // 0xb2d Mov
	func_2823(var_184_bool, var_185_object); // 0xb2e NEW_2
	var_201_bool = var_184_bool == 0; // 0xb30 Not
	if(var_201_bool == 0) goto Label_2868; // 0xb31 JumpB
	var_180_bool = 0; // 0xb32 MovB
	return 2; // 0xb33 Return
	
Label_2868:
	var_202_bool = 0; var_203_object = Obj(); var_204_string = ""; // 0xb34 PushV
	var_203_object = var_181_object; // 0xb35 Mov
	var_204_string = "noaccess"; // 0xb36 MovS
	func_2711(var_202_bool, var_203_object, var_204_string); // 0xb37 NEW_2
	var_211_bool = var_202_bool == 0; // 0xb39 Not
	if(var_211_bool == 0) goto Label_2877; // 0xb3a JumpB
	var_180_bool = 1; // 0xb3b MovB
	return 2; // 0xb3c Return
	
Label_2877:
	var_212_string = "noaccess"; // 0xb3d PushS
	GetProperty(var_212_string, var_183_int); // 0xb3e ObjFunc
	var_213_int = 0; // 0xb40 PushI
	var_180_bool = var_183_int == var_213_int; // 0xb41 Eq2
	return 2; // 0xb42 Return
}


func_1326(var_2_object)
{
	var_21_int = 1; // 0x52e PushI
	KillTimer(var_21_int); // 0x52f Func
	var_22_object = var_2_object; // 0x531 PushT
	if(var_22_object == 0) goto Label_1335; // 0x532 JumpB
	var_2_object = 0; // 0x533 TMovB
	var_23_string = "head"; // 0x534 PushS
	UnlookAsync(var_23_string); // 0x535 Func
	
Label_1335:
	func_1492(var_20_bool); // 0x538 NEW_2
	return 0; // 0x53a Return
}


func_3377(var_42_bool)
{
	var_43_object = Obj(); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_float = 0; var_49_int = 0; var_50_object = Obj(); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_bool = 0; var_55_float = 0; var_56_int = 0; // 0xd31 PushV
	GetMainOutdoorScene(var_50_object); // 0xd32 Func
	GetPosition(var_51_cvector); // 0xd34 Func
	var_55_float = 4000000; // 0xd36 MovI
	var_56_int = 0; // 0xd37 MovI
	var_57_int = GlobalVars[1]; // 0xd38 PushGE
	var_57_int = 0; // 0xd39 MovI
	GlobalVars[1] = var_57_int; // 0xd3a PopGE
	
Label_3387:
	var_58_bool = 1; // 0xd3b PushB
	if(var_58_bool == 0) goto Label_3406; // 0xd3c JumpB
	var_59_string = ""; // 0xd3d PushV
	func_3632(var_59_string); // 0xd3e NEW_2
	var_60_int = GlobalVars[1]; // 0xd40 PushGE
	var_61_int = 1; // 0xd41 PushI
	var_62_int = var_60_int + var_61_int; // 0xd42 Add
	var_63_int = var_59_string + var_62_int; // 0xd43 Add
	GetLocator(var_63_int, var_54_bool, var_52_cvector, var_53_cvector); // 0xd44 ObjFunc
	var_64_bool = var_54_bool == 0; // 0xd46 Not
	if(var_64_bool == 0) goto Label_3401; // 0xd47 JumpB
	goto Label_3406; // 0xd48 Jump
	
Label_3406:
	var_65_string = "Pantrol point count: "; // 0xd4e PushS
	var_66_int = GlobalVars[1]; // 0xd4f PushGE
	var_67_int = var_65_string + var_66_int; // 0xd50 Add
	Trace(var_67_int); // 0xd51 Func
	var_42_bool = 1; // 0xd53 MovB
	return 14; // 0xd54 Return
	
Label_3401:
	var_68_int = GlobalVars[1]; // 0xd49 PushGE
	var_69_int = 1; // 0xd4a PushI
	var_68_int = var_68_int + var_69_int; // 0xd4b Add2
	GlobalVars[1] = var_68_int; // 0xd4c PopGE
	goto Label_3387; // 0xd4d Jump
}


func_2362(var_825_string)
{
	var_825_string = "walk"; // 0x93a MovS
	return 0; // 0x93b Return
}


func_2364(var_826_string)
{
	var_826_string = "run"; // 0x93c MovS
	return 0; // 0x93d Return
}


func_2366(var_644_int)
{
	var_646_int = 0; var_647_int = 0; // 0x93e PushV
	var_647_int = 0; // 0x93f MovI
	
Label_2368:
	var_648_bool = var_647_int < var_644_int; // 0x940 LT
	if(var_648_bool == 0) goto Label_2380; // 0x941 JumpB
	var_649_string = ""; // 0x942 PushV
	var_649_string = "hunt"; // 0x943 MovS
	func_2436(var_649_string); // 0x944 NEW_2
	var_659_cvector = var_0_cvector; // 0x946 PushT
	if(var_659_cvector == 0) goto Label_2377; // 0x947 JumpB
	goto Label_2380; // 0x948 Jump
	
Label_2380:
	return 2; // 0x94c Return
	
Label_2377:
	var_660_int = 1; // 0x949 PushI
	var_647_int = var_647_int + var_660_int; // 0x94a Add2
	goto Label_2368; // 0x94b Jump
}


func_2883(var_37_object)
{
	var_38_bool = 0; var_39_int = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_string = ""; var_45_bool = 0; var_46_int = 0; var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_string = ""; // 0xb43 PushV
	var_52_bool = var_37_object == 0; // 0xb44 NullEq
	if(var_52_bool == 0) goto Label_2887; // 0xb45 JumpB
	return 14; // 0xb46 Return
	
Label_2887:
	IsDead(var_45_bool); // 0xb47 Func
	var_53_bool = var_45_bool; // 0xb49 Push
	if(var_53_bool == 0) goto Label_2892; // 0xb4a JumpB
	return 14; // 0xb4b Return
	
Label_2892:
	GetSecondaryAnimationType(var_46_int); // 0xb4c Func
	var_54_int = 0; // 0xb4e PushI
	var_55_bool = var_46_int < var_54_int; // 0xb4f LT
	if(var_55_bool == 0) goto Label_2898; // 0xb50 JumpB
	return 14; // 0xb51 Return
	
Label_2898:
	GetPosition(var_47_cvector); // 0xb52 ObjFunc
	GetPosition(var_48_cvector); // 0xb54 Func
	GetDirection(var_49_cvector); // 0xb56 Func
	var_50_cvector = var_48_cvector - var_47_cvector; // 0xb58 Sub2
	var_56_float = GetByIndex(var_50_cvector, 0); // 0xb59 PushE
	var_57_float = GetByIndex(var_49_cvector, 0); // 0xb5a PushE
	var_58_float = var_56_float * var_57_float; // 0xb5b Mult
	var_59_float = GetByIndex(var_50_cvector, 2); // 0xb5c PushE
	var_60_float = GetByIndex(var_49_cvector, 2); // 0xb5d PushE
	var_61_float = var_59_float * var_60_float; // 0xb5e Mult
	var_62_int = var_58_float + var_61_float; // 0xb5f Add
	var_63_int = 0; // 0xb60 PushI
	var_64_bool = var_62_int >= var_63_int; // 0xb61 GE
	if(var_64_bool == 0) goto Label_2917; // 0xb62 JumpB
	var_51_string = "fhit"; // 0xb63 MovS
	goto Label_2918; // 0xb64 Jump
	
Label_2918:
	var_65_string = "hit_react"; // 0xb66 PushS
	var_66_string = "1"; // 0xb67 PushS
	var_67_int = var_51_string + var_66_string; // 0xb68 Add
	var_68_string = "2"; // 0xb69 PushS
	var_69_int = var_51_string + var_68_string; // 0xb6a Add
	var_70_int = -10; // 0xb6b PushI
	FadeSecondaryAnimation(var_65_string, var_67_int, var_69_int, var_70_int); // 0xb6c Func
	return 14; // 0xb6e Return
	
Label_2917:
	var_51_string = "bhit"; // 0xb65 MovS
}


func_836(var_0_cvector, var_462_bool, var_463_float)
{
	var_464_int = 0; var_465_bool = 0; var_466_int = 0; var_467_string = ""; var_468_int = 0; var_469_bool = 0; var_470_int = 0; var_471_string = ""; // 0x344 PushV
	func_1196(var_471_string); // 0x346 NEW_2
	irand(var_468_int, var_471_string); // 0x348 Func
	var_472_int = 1; // 0x34a PushI
	var_468_int = var_468_int + var_472_int; // 0x34b Add2
	Face(var_0_cvector); // 0x34c Func
	var_473_bool = 1; // 0x34e PushB
	SetAttackState(var_473_bool); // 0x34f Func
	var_474_string = "all"; // 0x351 PushS
	var_475_string = "attack_begin"; // 0x352 PushS
	var_476_int = var_475_string + var_468_int; // 0x353 Add
	PlayAnimation(var_474_string, var_476_int); // 0x354 Func
	WaitForAnimEnd(); // 0x356 Func
	func_1164(var_470_int, var_471_string); // 0x359 NEW_2
	var_492_bool = 0; // 0x35b PushV
	var_492_bool = 1; // 0x35c MovB
	var_493_bool = 0; var_494_object = Obj(); // 0x35d PushV
	var_494_object = var_0_cvector; // 0x35e MovT
	func_2859(var_493_bool, var_494_object); // 0x35f NEW_2
	var_495_bool = var_493_bool == 0; // 0x361 Not
	if(var_495_bool == 0) goto Label_870; // 0x362 JumpB
	var_496_int = var_4_int; // 0x363 PushT
	if(var_496_int == 0) goto Label_870; // 0x364 JumpB
	var_492_bool = 0; // 0x365 MovB
	
Label_870:
	if(var_492_bool == 0) goto Label_875; // 0x366 JumpB
	StopAsync(); // 0x367 Func
	var_462_bool = 0; // 0x369 MovB
	return 8; // 0x36a Return
	
Label_875:
	var_497_float = 0; var_498_int = 0; // 0x36b PushV
	var_497_float = var_463_float; // 0x36c Mov
	var_498_int = var_468_int; // 0x36d Mov
	func_797(var_471_string, var_497_float, var_498_int); // 0x36e NEW_2
	var_579_string = "all"; // 0x370 PushS
	var_580_string = "attack_middle"; // 0x371 PushS
	var_581_int = var_580_string + var_468_int; // 0x372 Add
	HasAnimation(var_469_bool, var_579_string, var_581_int); // 0x373 Func
	var_582_bool = var_469_bool; // 0x375 Push
	if(var_582_bool == 0) goto Label_962; // 0x376 JumpB
	var_583_string = "all"; // 0x377 PushS
	var_584_string = "attack_middle"; // 0x378 PushS
	var_585_int = var_584_string + var_468_int; // 0x379 Add
	PlayAnimation(var_583_string, var_585_int); // 0x37a Func
	WaitForAnimEnd(); // 0x37c Func
	func_1196(var_471_string); // 0x37f NEW_2
	var_586_bool = 0; // 0x381 PushV
	var_586_bool = 1; // 0x382 MovB
	var_587_bool = 0; var_588_object = Obj(); // 0x383 PushV
	var_588_object = var_0_cvector; // 0x384 MovT
	func_2859(var_587_bool, var_588_object); // 0x385 NEW_2
	var_589_bool = var_587_bool == 0; // 0x387 Not
	if(var_589_bool == 0) goto Label_908; // 0x388 JumpB
	var_590_int = var_4_int; // 0x389 PushT
	if(var_590_int == 0) goto Label_908; // 0x38a JumpB
	var_586_bool = 0; // 0x38b MovB
	
Label_908:
	if(var_586_bool == 0) goto Label_913; // 0x38c JumpB
	StopAsync(); // 0x38d Func
	var_462_bool = 0; // 0x38f MovB
	return 8; // 0x390 Return
	
Label_913:
	var_591_float = 0; var_592_int = 0; // 0x391 PushV
	var_591_float = var_463_float; // 0x392 Mov
	var_592_int = var_468_int; // 0x393 Mov
	func_797(var_471_string, var_591_float, var_592_int); // 0x394 NEW_2
	var_470_int = 1; // 0x396 MovI
	
Label_919:
	var_593_string = "attack_middle"; // 0x397 PushS
	var_594_int = var_593_string + var_468_int; // 0x398 Add
	var_595_string = "_"; // 0x399 PushS
	var_596_int = var_594_int + var_595_string; // 0x39a Add
	var_471_string = var_596_int + var_470_int; // 0x39b Add2
	var_597_string = "all"; // 0x39c PushS
	HasAnimation(var_469_bool, var_597_string, var_471_string); // 0x39d Func
	var_598_bool = var_469_bool == 0; // 0x39f Not
	if(var_598_bool == 0) goto Label_930; // 0x3a0 JumpB
	goto Label_962; // 0x3a1 Jump
	
Label_962:
	var_599_bool = 0; // 0x3c2 PushB
	SetAttackState(var_599_bool); // 0x3c3 Func
	var_600_string = "all"; // 0x3c5 PushS
	var_601_string = "attack_end"; // 0x3c6 PushS
	var_602_int = var_601_string + var_468_int; // 0x3c7 Add
	PlayAnimation(var_600_string, var_602_int); // 0x3c8 Func
	var_603_bool = 0; // 0x3ca PushV
	func_1208(var_603_bool); // 0x3cb NEW_2
	if(var_603_bool == 0) goto Label_980; // 0x3cd JumpB
	var_604_bool = 0; var_605_float = 0; // 0x3ce PushV
	var_605_float = 0.75; // 0x3cf MovF
	func_982(var_604_bool, var_605_float); // 0x3d0 NEW_2
	StopAsync(); // 0x3d2 Func
	
Label_980:
	var_462_bool = 1; // 0x3d4 MovB
	return 8; // 0x3d5 Return
	
Label_930:
	var_613_string = "all"; // 0x3a2 PushS
	PlayAnimation(var_613_string, var_471_string); // 0x3a3 Func
	WaitForAnimEnd(); // 0x3a5 Func
	func_1196(var_471_string); // 0x3a8 NEW_2
	var_614_bool = 0; // 0x3aa PushV
	var_614_bool = 1; // 0x3ab MovB
	var_615_bool = 0; var_616_object = Obj(); // 0x3ac PushV
	var_616_object = var_0_cvector; // 0x3ad MovT
	func_2859(var_615_bool, var_616_object); // 0x3ae NEW_2
	var_617_bool = var_615_bool == 0; // 0x3b0 Not
	if(var_617_bool == 0) goto Label_949; // 0x3b1 JumpB
	var_618_int = var_4_int; // 0x3b2 PushT
	if(var_618_int == 0) goto Label_949; // 0x3b3 JumpB
	var_614_bool = 0; // 0x3b4 MovB
	
Label_949:
	if(var_614_bool == 0) goto Label_954; // 0x3b5 JumpB
	StopAsync(); // 0x3b6 Func
	var_462_bool = 0; // 0x3b8 MovB
	return 8; // 0x3b9 Return
	
Label_954:
	var_619_float = 0; var_620_int = 0; // 0x3ba PushV
	var_619_float = var_463_float; // 0x3bb Mov
	var_620_int = var_468_int; // 0x3bc Mov
	func_797(var_471_string, var_619_float, var_620_int); // 0x3bd NEW_2
	var_621_int = 1; // 0x3bf PushI
	var_470_int = var_470_int + var_621_int; // 0x3c0 Add2
	goto Label_919; // 0x3c1 Jump
}


func_3414(var_87_bool, var_88_int)
{
	var_89_int = GlobalVars[2]; // 0xd57 PushGE
	var_90_bool = var_88_int == var_89_int; // 0xd58 Eq
	if(var_90_bool == 0) goto Label_3420; // 0xd59 JumpB
	var_87_bool = 0; // 0xd5a MovB
	return 0; // 0xd5b Return
	
Label_3420:
	var_91_int = 0; // 0xd5c PushI
	var_92_bool = var_88_int == var_91_int; // 0xd5d Eq
	if(var_92_bool == 0) goto Label_3432; // 0xd5e JumpB
	var_93_int = GlobalVars[3]; // 0xd5f PushGE
	var_94_int = GlobalVars[2]; // 0xd60 PushGE
	var_93_int = var_94_int; // 0xd61 Mov
	GlobalVars[3] = var_93_int; // 0xd63 PopGE
	var_95_string = "changing state to c_iStateWaitForLoad"; // 0xd64 PushS
	Trace(var_95_string); // 0xd65 Func
	goto Label_3455; // 0xd67 Jump
	
Label_3455:
	var_96_int = GlobalVars[2]; // 0xd7f PushGE
	var_96_int = var_88_int; // 0xd80 Mov
	GlobalVars[2] = var_96_int; // 0xd81 PopGE
	var_87_bool = 1; // 0xd82 MovB
	return 0; // 0xd83 Return
	
Label_3432:
	var_97_int = 1; // 0xd68 PushI
	var_98_bool = var_88_int == var_97_int; // 0xd69 Eq
	if(var_98_bool == 0) goto Label_3439; // 0xd6a JumpB
	var_99_string = "changing state to c_iStateHeatHands"; // 0xd6b PushS
	Trace(var_99_string); // 0xd6c Func
	goto Label_3455; // 0xd6e Jump
	
Label_3439:
	var_100_int = 2; // 0xd6f PushI
	var_101_bool = var_88_int == var_100_int; // 0xd70 Eq
	if(var_101_bool == 0) goto Label_3446; // 0xd71 JumpB
	var_102_string = "changing state to c_iStateIdle"; // 0xd72 PushS
	Trace(var_102_string); // 0xd73 Func
	goto Label_3455; // 0xd75 Jump
	
Label_3446:
	var_103_int = 3; // 0xd76 PushI
	var_104_bool = var_88_int == var_103_int; // 0xd77 Eq
	if(var_104_bool == 0) goto Label_3453; // 0xd78 JumpB
	var_105_string = "changing state to c_iStatePatrol"; // 0xd79 PushS
	Trace(var_105_string); // 0xd7a Func
	goto Label_3455; // 0xd7c Jump
	
Label_3453:
	var_87_bool = 0; // 0xd7d MovB
	return 0; // 0xd7e Return
}


func_1368(var_0_cvector, var_1_cvector, var_263_bool, var_264_object, var_265_float, var_266_float, var_267_bool, var_268_bool)
{
	var_269_bool = 0; var_270_bool = 0; var_271_object = Obj(); var_272_cvector = CVector(0,0,0); var_273_cvector = CVector(0,0,0); var_274_cvector = CVector(0,0,0); var_275_float = 0; var_276_object = Obj(); var_277_bool = 0; var_278_bool = 0; var_279_object = Obj(); var_280_cvector = CVector(0,0,0); var_281_cvector = CVector(0,0,0); var_282_cvector = CVector(0,0,0); var_283_float = 0; var_284_object = Obj(); // 0x558 PushV
	var_0_cvector = 0; // 0x559 TMovB
	var_1_cvector = var_264_object; // 0x55a TMov
	var_278_bool = var_268_bool; // 0x55b Mov
	
Label_1372:
	var_285_bool = 0; var_286_object = Obj(); // 0x55c PushV
	var_286_object = var_264_object; // 0x55d Mov
	func_1508(var_285_bool, var_286_object); // 0x55e NEW_2
	var_289_bool = var_285_bool == 0; // 0x560 Not
	if(var_289_bool == 0) goto Label_1380; // 0x561 JumpB
	var_263_bool = 0; // 0x562 MovB
	return 16; // 0x563 Return
	
Label_1380:
	GetPosition(var_280_cvector); // 0x564 ObjFunc
	GetPosition(var_281_cvector); // 0x566 Func
	var_282_cvector = var_280_cvector - var_281_cvector; // 0x568 Sub2
	var_283_float = var_282_cvector | var_282_cvector; // 0x569 Or2
	var_290_bool = 0; // 0x56a PushV
	var_290_bool = 0; // 0x56b MovB
	var_291_int = 0; // 0x56c PushI
	var_292_bool = var_266_float > var_291_int; // 0x56d GT
	if(var_292_bool == 0) goto Label_1395; // 0x56e JumpB
	var_293_float = var_266_float * var_266_float; // 0x56f Mult
	var_294_bool = var_283_float > var_293_float; // 0x570 GT
	if(var_294_bool == 0) goto Label_1395; // 0x571 JumpB
	var_290_bool = 1; // 0x572 MovB
	
Label_1395:
	if(var_290_bool == 0) goto Label_1400; // 0x573 JumpB
	Stop(); // 0x574 Func
	var_263_bool = 0; // 0x576 MovB
	return 16; // 0x577 Return
	
Label_1400:
	var_295_float = var_265_float * var_265_float; // 0x578 Mult
	var_296_bool = var_283_float > var_295_float; // 0x579 GT
	if(var_296_bool == 0) goto Label_1462; // 0x57a JumpB
	GetPFPosition(var_280_cvector); // 0x57b ObjFunc
	FindPathTo(var_284_object, var_280_cvector); // 0x57d Func
	var_297_bool = var_284_object != 0; // 0x57f NullNeq
	if(var_297_bool == 0) goto Label_1411; // 0x580 JumpB
	var_279_object = var_284_object; // 0x581 Mov
	var_284_object = 0; // 0x582 SetNull
	
Label_1411:
	var_298_bool = var_279_object != 0; // 0x583 NullNeq
	if(var_298_bool == 0) goto Label_1444; // 0x584 JumpB
	var_299_bool = var_278_bool; // 0x585 Push
	if(var_299_bool == 0) goto Label_1421; // 0x586 JumpB
	var_278_bool = 0; // 0x587 MovB
	RotatePath(var_279_object, var_277_bool); // 0x588 Func
	var_300_bool = var_277_bool == 0; // 0x58a Not
	if(var_300_bool == 0) goto Label_1421; // 0x58b JumpB
	goto Label_1468; // 0x58c Jump
	
Label_1468:
	var_263_bool = !var_0_cvector; // 0x5bc Not2
	return 16; // 0x5bd Return
	
Label_1421:
	var_301_int = 0; // 0x58d PushI
	var_302_float = 0.3; // 0x58e PushF
	SetTimer(var_301_int, var_302_float); // 0x58f Func
	var_303_string = ""; // 0x591 PushV
	func_1515(var_303_string); // 0x592 NEW_2
	var_304_string = ""; // 0x594 PushV
	func_1517(var_304_string); // 0x595 NEW_2
	FollowPath(var_279_object, var_267_bool, var_277_bool, var_303_string, var_304_string); // 0x597 Func
	var_305_bool = var_277_bool == 0; // 0x599 Not
	if(var_305_bool == 0) goto Label_1442; // 0x59a JumpB
	var_306_cvector = var_0_cvector; // 0x59b PushT
	if(var_306_cvector == 0) goto Label_1440; // 0x59c JumpB
	var_279_object = 0; // 0x59d SetNull
	goto Label_1468; // 0x59e Jump
	
Label_1440:
	goto Label_1467; // 0x5a0 Jump
	
Label_1467:
	goto Label_1372; // 0x5bb Jump
	
Label_1442:
	var_279_object = 0; // 0x5a2 SetNull
	goto Label_1460; // 0x5a3 Jump
	
Label_1460:
	var_284_object = 0; // 0x5b4 SetNull
	goto Label_1466; // 0x5b5 Jump
	
Label_1466:
	var_279_object = 0; // 0x5ba SetNull
	
Label_1444:
	var_307_int = 0; // 0x5a4 PushI
	KillTimer(var_307_int); // 0x5a5 Func
	var_308_float = 0.5; // 0x5a7 PushF
	Sleep(var_308_float, var_277_bool); // 0x5a8 Func
	var_309_bool = var_277_bool == 0; // 0x5aa Not
	if(var_309_bool == 0) goto Label_1456; // 0x5ab JumpB
	var_310_cvector = var_0_cvector; // 0x5ac PushT
	if(var_310_cvector == 0) goto Label_1456; // 0x5ad JumpB
	var_279_object = 0; // 0x5ae SetNull
	goto Label_1468; // 0x5af Jump
	
Label_1456:
	var_311_int = 0; // 0x5b0 PushI
	var_312_float = 0.3; // 0x5b1 PushF
	SetTimer(var_311_int, var_312_float); // 0x5b2 Func
	
Label_1462:
	var_313_int = 0; // 0x5b6 PushI
	KillTimer(var_313_int); // 0x5b7 Func
	goto Label_1468; // 0x5b9 Jump
}


func_2927(var_24_object, var_25_int, var_26_float)
{
	var_27_cvector = CVector(0,0,0); var_28_object = Obj(); var_29_int = 0; var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_int = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_object = Obj(); var_38_int = 0; var_39_bool = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_int = 0; var_43_int = 0; var_44_cvector = CVector(0,0,0); // 0xb6f PushV
	var_45_bool = 0; // 0xb70 PushV
	var_45_bool = 0; // 0xb71 MovB
	var_46_bool = 0; // 0xb72 PushV
	var_46_bool = 0; // 0xb73 MovB
	var_47_object = var_24_object; // 0xb74 Push
	if(var_47_object == 0) goto Label_2938; // 0xb75 JumpB
	var_48_int = 4; // 0xb76 PushI
	var_49_bool = var_25_int != var_48_int; // 0xb77 Neq
	if(var_49_bool == 0) goto Label_2938; // 0xb78 JumpB
	var_46_bool = 1; // 0xb79 MovB
	
Label_2938:
	if(var_46_bool == 0) goto Label_2943; // 0xb7a JumpB
	var_50_int = 5; // 0xb7b PushI
	var_51_bool = var_25_int != var_50_int; // 0xb7c Neq
	if(var_51_bool == 0) goto Label_2943; // 0xb7d JumpB
	var_45_bool = 1; // 0xb7e MovB
	
Label_2943:
	if(var_45_bool == 0) goto Label_2990; // 0xb7f JumpB
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0xb80 PushV
	var_54_cvector = CVector(0,0,0); var_55_object = Obj(); // 0xb81 PushV
	var_55_object = var_24_object; // 0xb82 Mov
	func_2692(var_55_object); // 0xb83 NEW_2
	var_53_cvector = var_54_cvector; // 0xb84 Mov
	func_3083(var_52_cvector, var_53_cvector); // 0xb86 NEW_2
	var_36_cvector = var_52_cvector; // 0xb87 Mov
	CreateVectorVector(var_37_object); // 0xb89 Func
	var_38_int = 1; // 0xb8b MovI
	
Label_2956:
	var_65_string = "hit"; // 0xb8c PushS
	var_66_int = var_65_string + var_38_int; // 0xb8d Add
	GetGeometryLocator(var_66_int, var_39_bool, var_40_cvector, var_41_cvector); // 0xb8e Func
	var_67_bool = var_39_bool == 0; // 0xb90 Not
	if(var_67_bool == 0) goto Label_2963; // 0xb91 JumpB
	goto Label_2972; // 0xb92 Jump
	
Label_2972:
	size(var_42_int); // 0xb9c ObjFunc
	var_68_int = var_42_int; // 0xb9e Push
	if(var_68_int == 0) goto Label_2989; // 0xb9f JumpB
	irand(var_43_int, var_42_int); // 0xba0 Func
	get(var_44_cvector, var_43_int); // 0xba2 ObjFunc
	var_69_object = Obj(); var_70_int = 0; var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); // 0xba4 PushV
	var_69_object = var_24_object; // 0xba5 Mov
	var_70_int = var_25_int; // 0xba6 Mov
	var_71_float = var_26_float; // 0xba7 Mov
	var_72_cvector = var_44_cvector; // 0xba8 Mov
	var_73_cvector = -var_36_cvector; // 0xba9 Neg2
	func_2995(var_71_float, var_72_cvector, var_73_cvector); // 0xbaa NEW_2
	return 18; // 0xbac Return
	
Label_2989:
	var_37_object = 0; // 0xbad SetNull
	
Label_2990:
	var_114_object = Obj(); // 0xbae PushV
	var_114_object = var_24_object; // 0xbaf Mov
	func_2883(var_114_object); // 0xbb0 NEW_2
	return 18; // 0xbb2 Return
	
Label_2963:
	var_115_int = var_41_cvector | var_36_cvector; // 0xb93 Or
	var_116_float = 0.70711; // 0xb94 PushF
	var_117_bool = var_115_int >= var_116_float; // 0xb95 GE
	if(var_117_bool == 0) goto Label_2969; // 0xb96 JumpB
	add(var_40_cvector); // 0xb97 ObjFunc
	
Label_2969:
	var_118_int = 1; // 0xb99 PushI
	var_38_int = var_38_int + var_118_int; // 0xb9a Add2
	goto Label_2956; // 0xb9b Jump
}


func_1912(var_880_bool)
{
	var_880_bool = 1; // 0x778 MovB
	return 0; // 0x779 Return
}


func_1914()
{
	StopAnimation(); // 0x77a Func
	StopGroup0(); // 0x77c Func
	return 0; // 0x77e Return
}


func_1919(var_893_bool, var_894_cvector, var_895_cvector, var_896_bool)
{
	var_898_float = GetByIndex(var_894_cvector, 1); // 0x780 PushE
	var_899_int = 30; // 0x781 PushI
	var_898_float = var_898_float + var_899_int; // 0x782 Add2
	SetByIndex(var_894_cvector, 1) = var_898_float; // 0x783 PopE
	var_900_bool = 0; var_901_cvector = CVector(0,0,0); var_902_cvector = CVector(0,0,0); var_903_float = 0; var_904_float = 0; var_905_bool = 0; var_906_bool = 0; // 0x784 PushV
	var_901_cvector = var_894_cvector; // 0x785 Mov
	var_902_cvector = var_895_cvector; // 0x786 Mov
	var_903_float = 100; // 0x787 MovI
	var_904_float = 4000; // 0x788 MovI
	var_905_bool = var_896_bool; // 0x789 Mov
	var_906_bool = 1; // 0x78a MovB
	func_1988(var_896_bool, var_900_bool, var_901_cvector, var_902_cvector, var_903_float, var_904_float, var_905_bool, var_906_bool); // 0x78b NEW_2
	var_893_bool = var_900_bool; // 0x78c Mov
	return 0; // 0x78e Return
}


func_2436(var_649_string)
{
	var_650_bool = 0; var_651_bool = 0; var_652_bool = 0; var_653_bool = 0; // 0x984 PushV
	WaitForAnimEnd(); // 0x985 Func
	var_654_bool = 0; // 0x987 PushV
	func_3020(var_654_bool); // 0x988 NEW_2
	var_655_bool = var_654_bool == 0; // 0x98a Not
	if(var_655_bool == 0) goto Label_2445; // 0x98b JumpB
	return 4; // 0x98c Return
	
Label_2445:
	var_656_string = "all"; // 0x98d PushS
	HasAnimation(var_652_bool, var_656_string, var_649_string); // 0x98e Func
	var_657_bool = var_652_bool == 0; // 0x990 Not
	if(var_657_bool == 0) goto Label_2451; // 0x991 JumpB
	return 4; // 0x992 Return
	
Label_2451:
	var_658_string = "all"; // 0x993 PushS
	PlayAnimation(var_658_string, var_649_string); // 0x994 Func
	WaitForAnimEnd(var_653_bool); // 0x996 Func
	return 4; // 0x998 Return
}


func_3460(var_43_bool, var_44_object)
{
	var_45_int = GlobalVars[2]; // 0xd85 PushGE
	var_46_int = 4; // 0xd86 PushI
	var_47_bool = var_45_int == var_46_int; // 0xd87 Eq
	if(var_47_bool == 0) goto Label_3467; // 0xd88 JumpB
	var_43_bool = 0; // 0xd89 MovB
	return 0; // 0xd8a Return
	
Label_3467:
	var_48_int = GlobalVars[2]; // 0xd8b PushGE
	var_48_int = 4; // 0xd8c MovI
	GlobalVars[2] = var_48_int; // 0xd8d PopGE
	var_49_string = "changing state to c_iStateAware"; // 0xd8e PushS
	Trace(var_49_string); // 0xd8f Func
	var_50_object = GlobalVars[4]; // 0xd91 PushGE
	var_50_object = var_44_object; // 0xd92 Mov
	GlobalVars[4] = var_50_object; // 0xd93 PopGE
	var_43_bool = 1; // 0xd94 MovB
	return 0; // 0xd95 Return
}


func_3478(var_47_bool, var_48_object)
{
	var_49_int = GlobalVars[2]; // 0xd97 PushGE
	var_50_int = 5; // 0xd98 PushI
	var_51_bool = var_49_int == var_50_int; // 0xd99 Eq
	if(var_51_bool == 0) goto Label_3485; // 0xd9a JumpB
	var_47_bool = 0; // 0xd9b MovB
	return 0; // 0xd9c Return
	
Label_3485:
	var_52_int = GlobalVars[2]; // 0xd9d PushGE
	var_52_int = 5; // 0xd9e MovI
	GlobalVars[2] = var_52_int; // 0xd9f PopGE
	var_53_string = "changing state to c_iStateSearchEnemy"; // 0xda0 PushS
	Trace(var_53_string); // 0xda1 Func
	var_54_object = GlobalVars[5]; // 0xda3 PushGE
	var_54_object = var_48_object; // 0xda4 Mov
	GlobalVars[5] = var_54_object; // 0xda5 PopGE
	var_47_bool = 1; // 0xda6 MovB
	return 0; // 0xda7 Return
}


func_2457()
{
	StopAnimation(); // 0x999 Func
	StopGroup0(); // 0x99b Func
	return 0; // 0x99d Return
}


func_2462(var_21_object)
{
	var_22_int = 1; // 0x99f PushI
	var_23_int = GlobalVars[2]; // 0x9a0 PushGE
	var_24_bool = var_22_int == var_23_int; // 0x9a1 Eq
	if(var_24_bool == 0) goto Label_2471; // 0x9a2 JumpB
	var_25_bool = 0; // 0x9a3 PushV
	var_25_bool = 0; // 0x9a4 MovB
	func_3543(var_25_bool); // 0x9a5 NEW_2
	
Label_2471:
	var_32_int = 3; // 0x9a7 PushI
	var_33_int = GlobalVars[2]; // 0x9a8 PushGE
	var_34_bool = var_32_int == var_33_int; // 0x9a9 Eq
	if(var_34_bool == 0) goto Label_2479; // 0x9aa JumpB
	var_35_bool = 0; // 0x9ab PushV
	var_35_bool = 0; // 0x9ac MovB
	func_3570(var_35_bool); // 0x9ad NEW_2
	
Label_2479:
	func_3642(); // 0x9b0 NEW_2
	var_94_object = Obj(); // 0x9b2 PushV
	var_94_object = var_21_object; // 0x9b3 Mov
	func_2495(var_94_object); // 0x9b4 NEW_2
	return 0; // 0x9b6 Return
}


func_3496(var_27_bool, var_28_object)
{
	var_29_int = GlobalVars[2]; // 0xda9 PushGE
	var_30_int = 6; // 0xdaa PushI
	var_31_bool = var_29_int == var_30_int; // 0xdab Eq
	if(var_31_bool == 0) goto Label_3503; // 0xdac JumpB
	var_27_bool = 0; // 0xdad MovB
	return 0; // 0xdae Return
	
Label_3503:
	var_32_int = GlobalVars[2]; // 0xdaf PushGE
	var_32_int = 6; // 0xdb0 MovI
	GlobalVars[2] = var_32_int; // 0xdb1 PopGE
	var_33_string = "changing state to c_iStateHearEnemy"; // 0xdb2 PushS
	Trace(var_33_string); // 0xdb3 Func
	var_34_object = GlobalVars[6]; // 0xdb5 PushGE
	var_34_object = var_28_object; // 0xdb6 Mov
	GlobalVars[6] = var_34_object; // 0xdb7 PopGE
	var_27_bool = 1; // 0xdb8 MovB
	return 0; // 0xdb9 Return
}


func_435(var_7_float, var_109_object)
{
	var_7_float = var_109_object; // 0x1b4 TMov
	var_119_int = 1; // 0x1b5 PushI
	var_120_int = 1; // 0x1b6 PushI
	SetTimer(var_119_int, var_120_int); // 0x1b7 Func
	var_121_object = Obj(); var_122_bool = 0; var_123_float = 0; // 0x1b9 PushV
	var_121_object = var_109_object; // 0x1ba Mov
	var_122_bool = 1; // 0x1bb MovB
	var_123_float = 150.0; // 0x1bc MovF
	func_504(var_114_bool, var_115_bool, var_116_float, var_117_int, var_118_object, var_109_object, var_121_object, var_122_bool, var_123_float); // 0x1bd NEW_2
	var_640_int = 1; // 0x1bf PushI
	KillTimer(var_640_int); // 0x1c0 Func
	return 0; // 0x1c2 Return
}


func_2995(var_26_object, var_29_cvector, var_30_cvector)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); var_34_object = Obj(); // 0xbb3 PushV
	GetScene(var_33_object); // 0xbb4 Func
	var_35_string = "scripted"; // 0xbb6 PushS
	var_36_string = "blood_dir.xml"; // 0xbb7 PushS
	AddActorByType(var_34_object, var_35_string, var_33_object, var_29_cvector, var_30_cvector, var_36_string); // 0xbb8 Func
	var_37_object = Obj(); // 0xbba PushV
	var_37_object = var_26_object; // 0xbbb Mov
	func_2883(var_37_object); // 0xbbc NEW_2
	return 4; // 0xbbe Return
}


func_3514(var_21_bool, var_22_object)
{
	var_23_int = GlobalVars[2]; // 0xdbb PushGE
	var_24_int = 7; // 0xdbc PushI
	var_25_bool = var_23_int == var_24_int; // 0xdbd Eq
	if(var_25_bool == 0) goto Label_3521; // 0xdbe JumpB
	var_21_bool = 0; // 0xdbf MovB
	return 0; // 0xdc0 Return
	
Label_3521:
	var_26_int = GlobalVars[2]; // 0xdc1 PushGE
	var_26_int = 7; // 0xdc2 MovI
	GlobalVars[2] = var_26_int; // 0xdc3 PopGE
	var_27_string = "changing state to c_iStateAttack"; // 0xdc4 PushS
	Trace(var_27_string); // 0xdc5 Func
	var_28_object = GlobalVars[7]; // 0xdc7 PushGE
	var_28_object = var_22_object; // 0xdc8 Mov
	GlobalVars[7] = var_28_object; // 0xdc9 PopGE
	var_21_bool = 1; // 0xdca MovB
	return 0; // 0xdcb Return
}


func_1470(var_0_cvector, var_1_cvector, var_35_int)
{
	var_36_int = 0; // 0x5bf PushI
	var_37_bool = var_35_int != var_36_int; // 0x5c0 Neq
	if(var_37_bool == 0) goto Label_1475; // 0x5c1 JumpB
	return 0; // 0x5c2 Return
	
Label_1475:
	var_38_bool = 0; var_39_object = Obj(); // 0x5c3 PushV
	var_39_object = var_1_cvector; // 0x5c4 MovT
	func_1508(var_38_bool, var_39_object); // 0x5c5 NEW_2
	var_74_bool = var_38_bool == 0; // 0x5c7 Not
	if(var_74_bool == 0) goto Label_1482; // 0x5c8 JumpB
	var_0_cvector = 1; // 0x5c9 TMovB
	
Label_1482:
	var_75_int = 0; // 0x5ca PushI
	KillTimer(var_75_int); // 0x5cb Func
	Stop(); // 0x5cd Func
	return 0; // 0x5cf Return
}


func_2495(var_94_object)
{
	EventDisable(0); // 0x9c0 EventDisable
	var_95_object = Obj(); // 0x9c1 PushV
	var_95_object = var_94_object; // 0x9c2 Mov
	func_2520(var_95_object); // 0x9c3 NEW_2
	var_175_int = 50; // 0x9c5 PushI
	var_176_int = 40; // 0x9c6 PushI
	SetRTEnvelope(var_175_int, var_176_int); // 0x9c7 Func
	EventEnable(0); // 0x9c9 EventEnable
	
Label_2506:
	Hold(); // 0x9ca Func
	goto Label_2506; // 0x9cc Jump
}


func_3009()
{
	var_342_cvector = CVector(0,0,0); var_343_cvector = CVector(0,0,0); var_344_cvector = CVector(0,0,0); var_345_cvector = CVector(0,0,0); var_346_cvector = CVector(0,0,0); var_347_cvector = CVector(0,0,0); // 0xbc1 PushV
	GetPosition(var_345_cvector); // 0xbc2 ObjFunc
	GetPosition(var_346_cvector); // 0xbc4 Func
	var_347_cvector = var_345_cvector - var_346_cvector; // 0xbc6 Sub2
	var_348_float = GetByIndex(var_347_cvector, 0); // 0xbc7 PushE
	var_349_float = GetByIndex(var_347_cvector, 2); // 0xbc8 PushE
	RotateAsync(var_348_float, var_349_float); // 0xbc9 Func
	return 6; // 0xbcb Return
}


func_1986(var_923_bool)
{
	var_923_bool = 1; // 0x7c2 MovB
	return 0; // 0x7c3 Return
}


func_451(var_508_float)
{
	var_508_float = 0.1; // 0x1c4 MovF
	return 0; // 0x1c5 Return
}


func_1988(var_0_cvector, var_900_bool, var_901_cvector, var_902_cvector, var_903_float, var_904_float, var_905_bool, var_906_bool)
{
	var_907_bool = 0; var_908_bool = 0; var_909_object = Obj(); var_910_cvector = CVector(0,0,0); var_911_cvector = CVector(0,0,0); var_912_cvector = CVector(0,0,0); var_913_float = 0; var_914_object = Obj(); var_915_bool = 0; var_916_bool = 0; var_917_object = Obj(); var_918_cvector = CVector(0,0,0); var_919_cvector = CVector(0,0,0); var_920_cvector = CVector(0,0,0); var_921_float = 0; var_922_object = Obj(); // 0x7c4 PushV
	var_0_cvector = 0; // 0x7c5 TMovB
	var_916_bool = var_906_bool; // 0x7c6 Mov
	
Label_1991:
	var_923_bool = 0; // 0x7c7 PushV
	func_1986(var_923_bool); // 0x7c8 NEW_2
	var_924_bool = var_923_bool == 0; // 0x7ca Not
	if(var_924_bool == 0) goto Label_1998; // 0x7cb JumpB
	var_900_bool = 0; // 0x7cc MovB
	return 16; // 0x7cd Return
	
Label_1998:
	var_918_cvector = var_901_cvector; // 0x7ce Mov
	GetPosition(var_919_cvector); // 0x7cf Func
	var_920_cvector = var_918_cvector - var_919_cvector; // 0x7d1 Sub2
	var_921_float = var_920_cvector | var_920_cvector; // 0x7d2 Or2
	var_925_bool = 0; // 0x7d3 PushV
	var_925_bool = 0; // 0x7d4 MovB
	var_926_int = 0; // 0x7d5 PushI
	var_927_bool = var_904_float > var_926_int; // 0x7d6 GT
	if(var_927_bool == 0) goto Label_2012; // 0x7d7 JumpB
	var_928_float = var_904_float * var_904_float; // 0x7d8 Mult
	var_929_bool = var_921_float > var_928_float; // 0x7d9 GT
	if(var_929_bool == 0) goto Label_2012; // 0x7da JumpB
	var_925_bool = 1; // 0x7db MovB
	
Label_2012:
	if(var_925_bool == 0) goto Label_2017; // 0x7dc JumpB
	Stop(); // 0x7dd Func
	var_900_bool = 0; // 0x7df MovB
	return 16; // 0x7e0 Return
	
Label_2017:
	var_930_float = var_903_float * var_903_float; // 0x7e1 Mult
	var_931_bool = var_921_float > var_930_float; // 0x7e2 GT
	if(var_931_bool == 0) goto Label_2077; // 0x7e3 JumpB
	FindPathTo(var_922_object, var_918_cvector); // 0x7e4 Func
	var_932_bool = var_922_object != 0; // 0x7e6 NullNeq
	if(var_932_bool == 0) goto Label_2026; // 0x7e7 JumpB
	var_917_object = var_922_object; // 0x7e8 Mov
	var_922_object = 0; // 0x7e9 SetNull
	
Label_2026:
	var_933_bool = var_917_object != 0; // 0x7ea NullNeq
	if(var_933_bool == 0) goto Label_2059; // 0x7eb JumpB
	var_934_bool = var_916_bool; // 0x7ec Push
	if(var_934_bool == 0) goto Label_2036; // 0x7ed JumpB
	var_916_bool = 0; // 0x7ee MovB
	RotatePath(var_917_object, var_915_bool); // 0x7ef Func
	var_935_bool = var_915_bool == 0; // 0x7f1 Not
	if(var_935_bool == 0) goto Label_2036; // 0x7f2 JumpB
	goto Label_2083; // 0x7f3 Jump
	
Label_2083:
	var_936_bool = var_0_cvector == 0; // 0x823 Not
	if(var_936_bool == 0) goto Label_2089; // 0x824 JumpB
	var_937_float = GetByIndex(var_902_cvector, 0); // 0x825 PushE
	var_938_float = GetByIndex(var_902_cvector, 2); // 0x826 PushE
	RotateAsync(var_937_float, var_938_float); // 0x827 Func
	
Label_2089:
	var_900_bool = !var_0_cvector; // 0x829 Not2
	return 16; // 0x82a Return
	
Label_2036:
	var_939_int = 0; // 0x7f4 PushI
	var_940_float = 0.3; // 0x7f5 PushF
	SetTimer(var_939_int, var_940_float); // 0x7f6 Func
	var_941_string = ""; // 0x7f8 PushV
	func_2128(var_941_string); // 0x7f9 NEW_2
	var_942_string = ""; // 0x7fb PushV
	func_2130(var_942_string); // 0x7fc NEW_2
	FollowPath(var_917_object, var_905_bool, var_915_bool, var_941_string, var_942_string); // 0x7fe Func
	var_943_bool = var_915_bool == 0; // 0x800 Not
	if(var_943_bool == 0) goto Label_2057; // 0x801 JumpB
	var_944_cvector = var_0_cvector; // 0x802 PushT
	if(var_944_cvector == 0) goto Label_2055; // 0x803 JumpB
	var_917_object = 0; // 0x804 SetNull
	goto Label_2083; // 0x805 Jump
	
Label_2055:
	goto Label_2082; // 0x807 Jump
	
Label_2082:
	goto Label_1991; // 0x822 Jump
	
Label_2057:
	var_917_object = 0; // 0x809 SetNull
	goto Label_2075; // 0x80a Jump
	
Label_2075:
	var_922_object = 0; // 0x81b SetNull
	goto Label_2081; // 0x81c Jump
	
Label_2081:
	var_917_object = 0; // 0x821 SetNull
	
Label_2059:
	var_945_int = 0; // 0x80b PushI
	KillTimer(var_945_int); // 0x80c Func
	var_946_float = 0.5; // 0x80e PushF
	Sleep(var_946_float, var_915_bool); // 0x80f Func
	var_947_bool = var_915_bool == 0; // 0x811 Not
	if(var_947_bool == 0) goto Label_2071; // 0x812 JumpB
	var_948_cvector = var_0_cvector; // 0x813 PushT
	if(var_948_cvector == 0) goto Label_2071; // 0x814 JumpB
	var_917_object = 0; // 0x815 SetNull
	goto Label_2083; // 0x816 Jump
	
Label_2071:
	var_949_int = 0; // 0x817 PushI
	var_950_float = 0.3; // 0x818 PushF
	SetTimer(var_949_int, var_950_float); // 0x819 Func
	
Label_2077:
	var_951_int = 0; // 0x81d PushI
	KillTimer(var_951_int); // 0x81e Func
	goto Label_2083; // 0x820 Jump
}


func_454(var_515_int)
{
	var_515_int = 0; // 0x1c7 MovI
	return 0; // 0x1c8 Return
}


func_457(var_576_int)
{
	var_576_int = 0; // 0x1c9 MovI
	return 0; // 0x1ca Return
}


func_3532(var_995_bool)
{
	var_996_int = 0; var_997_int = 0; // 0xdcc PushV
	var_998_string = ""; // 0xdcd PushV
	func_3638(var_998_string); // 0xdce NEW_2
	var_999_string = "_locked"; // 0xdd0 PushS
	var_1000_int = var_998_string + var_999_string; // 0xdd1 Add
	GetVariable(var_1000_int, var_997_int); // 0xdd2 Func
	var_1001_int = 0; // 0xdd4 PushI
	var_995_bool = var_997_int != var_1001_int; // 0xdd5 Neq2
	return 2; // 0xdd6 Return
}


func_3020(var_83_bool)
{
	var_84_bool = 0; var_85_bool = 0; // 0xbcc PushV
	IsLoaded(var_85_bool); // 0xbcd Func
	var_83_bool = var_85_bool; // 0xbcf Mov
	return 2; // 0xbd0 Return
}


func_3025(var_251_object)
{
	var_252_float = 0; var_253_cvector = CVector(0,0,0); var_254_float = 0; var_255_cvector = CVector(0,0,0); // 0xbd1 PushV
	GetEyesHeight(var_254_float); // 0xbd2 ObjFunc
	var_255_cvector = CVector(0.0, 0.0, 0.0); // 0xbd4 MovV
	var_256_float = GetByIndex(var_255_cvector, 1); // 0xbd5 PushE
	var_256_float = var_254_float; // 0xbd6 Mov
	SetByIndex(var_255_cvector, 1) = var_256_float; // 0xbd7 PopE
	var_257_string = "head"; // 0xbd8 PushS
	LookAsync(var_251_object, var_257_string, var_255_cvector); // 0xbd9 Func
	return 4; // 0xbdb Return
}


func_1492(var_0_cvector)
{
	var_0_cvector = 1; // 0x5d4 TMovB
	var_24_int = 0; // 0x5d5 PushI
	KillTimer(var_24_int); // 0x5d6 Func
	Stop(); // 0x5d8 Func
	return 0; // 0x5da Return
}


func_982(var_604_bool, var_605_float)
{
	var_606_float = 0; var_607_bool = 0; var_608_float = 0; var_609_bool = 0; // 0x3d6 PushV
	rand(var_608_float); // 0x3d7 Func
	var_610_bool = var_608_float < var_605_float; // 0x3d9 LT
	if(var_610_bool == 0) goto Label_1002; // 0x3da JumpB
	
Label_987:
	IsAnimationPlaying(var_609_bool); // 0x3db Func
	var_611_bool = var_609_bool == 0; // 0x3dd Not
	if(var_611_bool == 0) goto Label_992; // 0x3de JumpB
	goto Label_1001; // 0x3df Jump
	
Label_1001:
	goto Label_1007; // 0x3e9 Jump
	
Label_1007:
	var_604_bool = 0; // 0x3ef MovB
	return 4; // 0x3f0 Return
	
Label_992:
	var_612_bool = 0; // 0x3e0 PushV
	func_1092(var_612_bool); // 0x3e1 NEW_2
	if(var_612_bool == 0) goto Label_998; // 0x3e3 JumpB
	var_604_bool = 1; // 0x3e4 MovB
	return 4; // 0x3e5 Return
	
Label_998:
	sync(); // 0x3e6 Func
	goto Label_987; // 0x3e8 Jump
	
Label_1002:
	WaitForAnimEnd(); // 0x3ea Func
	func_1196(var_609_bool); // 0x3ed NEW_2
}


func_3543(var_759_bool)
{
	var_760_string = ""; // 0xdd8 PushV
	func_3638(var_760_string); // 0xdd9 NEW_2
	var_761_string = "_locked"; // 0xddb PushS
	var_762_int = var_760_string + var_761_string; // 0xddc Add
	var_763_bool = var_759_bool; // 0xddd Push
	if(var_763_bool == 0) goto Label_3553; // 0xdde JumpB
	var_764_int = 1; // 0xddf PushI
	goto Label_3554; // 0xde0 Jump
	
Label_3554:
	SetVariable(var_762_int, var_764_int); // 0xde2 Func
	return 0; // 0xde4 Return
	
Label_3553:
	var_765_int = 0; // 0xde1 PushI
}


func_2520(var_95_object)
{
	var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_string = ""; var_101_object = Obj(); var_102_bool = 0; var_103_bool = 0; var_104_float = 0; var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); var_110_string = ""; var_111_object = Obj(); var_112_bool = 0; var_113_bool = 0; var_114_float = 0; var_115_cvector = CVector(0,0,0); // 0x9d8 PushV
	var_116_bool = var_95_object == 0; // 0x9d9 NullEq
	if(var_116_bool == 0) goto Label_2528; // 0x9da JumpB
	var_117_string = ""; // 0x9db PushV
	var_117_string = "fdie"; // 0x9dc MovS
	func_2611(var_117_string); // 0x9dd NEW_2
	goto Label_2610; // 0x9df Jump
	
Label_2610:
	return 20; // 0xa32 Return
	
Label_2528:
	GetPosition(var_106_cvector); // 0x9e0 ObjFunc
	GetPosition(var_107_cvector); // 0x9e2 Func
	GetDirection(var_108_cvector); // 0x9e4 Func
	var_109_cvector = var_107_cvector - var_106_cvector; // 0x9e6 Sub2
	var_149_float = GetByIndex(var_109_cvector, 0); // 0x9e7 PushE
	var_150_float = GetByIndex(var_108_cvector, 0); // 0x9e8 PushE
	var_151_float = var_149_float * var_150_float; // 0x9e9 Mult
	var_152_float = GetByIndex(var_109_cvector, 2); // 0x9ea PushE
	var_153_float = GetByIndex(var_108_cvector, 2); // 0x9eb PushE
	var_154_float = var_152_float * var_153_float; // 0x9ec Mult
	var_155_int = var_151_float + var_154_float; // 0x9ed Add
	var_156_int = 0; // 0x9ee PushI
	var_157_bool = var_155_int >= var_156_int; // 0x9ef GE
	if(var_157_bool == 0) goto Label_2547; // 0x9f0 JumpB
	var_110_string = "fdie"; // 0x9f1 MovS
	goto Label_2548; // 0x9f2 Jump
	
Label_2548:
	RemoveRTEnvelope(); // 0x9f4 Func
	SetDeathState(); // 0x9f6 Func
	Stop(); // 0x9f8 Func
	StopAsync(); // 0x9fa Func
	var_111_object = var_95_object; // 0x9fc Mov
	var_158_string = "GetScriptProperty"; // 0x9fd PushS
	var_159_int = 2; // 0x9fe PushI
	var_160_bool = IsFuncExist(var_95_object, var_158_string, var_159_int); // 0x9ff FuncExist
	if(var_160_bool == 0) goto Label_2572; // 0xa00 JumpB
	var_161_string = "Owner"; // 0xa01 PushS
	HasScriptProperty(var_112_bool, var_161_string); // 0xa02 ObjFunc
	var_162_bool = var_112_bool; // 0xa04 Push
	if(var_162_bool == 0) goto Label_2572; // 0xa05 JumpB
	var_163_string = "Owner"; // 0xa06 PushS
	GetScriptProperty(var_111_object, var_163_string); // 0xa07 ObjFunc
	var_164_bool = var_111_object == 0; // 0xa09 NullEq
	if(var_164_bool == 0) goto Label_2572; // 0xa0a JumpB
	var_111_object = var_95_object; // 0xa0b Mov
	
Label_2572:
	var_165_string = "@GetEyesHeight"; // 0xa0c PushS
	var_166_int = 1; // 0xa0d PushI
	var_167_bool = IsFuncExist(var_111_object, var_165_string, var_166_int); // 0xa0e FuncExist
	if(var_167_bool == 0) goto Label_2587; // 0xa0f JumpB
	GetEyesHeight(var_114_float); // 0xa10 ObjFunc
	var_115_cvector = CVector(0.0, 0.0, 0.0); // 0xa12 MovV
	var_168_float = GetByIndex(var_115_cvector, 1); // 0xa13 PushE
	var_168_float = var_114_float; // 0xa14 Mov
	SetByIndex(var_115_cvector, 1) = var_168_float; // 0xa15 PopE
	var_169_string = "head"; // 0xa16 PushS
	LookAsync(var_95_object, var_169_string, var_115_cvector); // 0xa17 Func
	var_113_bool = 1; // 0xa19 MovB
	goto Label_2588; // 0xa1a Jump
	
Label_2588:
	var_170_string = ""; // 0xa1c PushV
	var_170_string = var_110_string; // 0xa1d Mov
	func_3036(var_170_string); // 0xa1e NEW_2
	var_171_string = "all"; // 0xa20 PushS
	PlayAnimation(var_171_string, var_110_string); // 0xa21 Func
	WaitForAnimEnd(); // 0xa23 Func
	var_172_bool = var_113_bool; // 0xa25 Push
	if(var_172_bool == 0) goto Label_2604; // 0xa26 JumpB
	StopAsync(); // 0xa27 Func
	var_173_string = "head"; // 0xa29 PushS
	UnlookAsync(var_173_string); // 0xa2a Func
	
Label_2604:
	var_174_string = "all"; // 0xa2c PushS
	LockAnimationEnd(var_174_string, var_110_string); // 0xa2d Func
	RemoveEnvelope(); // 0xa2f Func
	var_111_object = 0; // 0xa31 SetNull
	
Label_2587:
	var_113_bool = 0; // 0xa1b MovB
	
Label_2547:
	var_110_string = "bdie"; // 0x9f3 MovS
}


func_3036(var_366_string)
{
	var_367_bool = 0; var_368_int = 0; var_369_bool = 0; var_370_int = 0; var_371_bool = 0; var_372_float = 0; var_373_cvector = CVector(0,0,0); var_374_cvector = CVector(0,0,0); var_375_bool = 0; var_376_int = 0; var_377_bool = 0; var_378_int = 0; var_379_bool = 0; var_380_float = 0; var_381_cvector = CVector(0,0,0); var_382_cvector = CVector(0,0,0); // 0xbdc PushV
	IsExisting3DSound(var_375_bool, var_366_string); // 0xbdd Func
	var_383_bool = var_375_bool == 0; // 0xbdf Not
	if(var_383_bool == 0) goto Label_3061; // 0xbe0 JumpB
	var_376_int = 0; // 0xbe1 MovI
	
Label_3042:
	var_384_int = 1; // 0xbe2 PushI
	var_385_int = var_376_int + var_384_int; // 0xbe3 Add
	var_386_int = var_366_string + var_385_int; // 0xbe4 Add
	IsExisting3DSound(var_377_bool, var_386_int); // 0xbe5 Func
	var_387_bool = var_377_bool == 0; // 0xbe7 Not
	if(var_387_bool == 0) goto Label_3050; // 0xbe8 JumpB
	goto Label_3053; // 0xbe9 Jump
	
Label_3053:
	var_388_bool = var_376_int == 0; // 0xbed Not
	if(var_388_bool == 0) goto Label_3056; // 0xbee JumpB
	return 16; // 0xbef Return
	
Label_3056:
	irand(var_378_int, var_376_int); // 0xbf0 Func
	var_389_int = 1; // 0xbf2 PushI
	var_390_int = var_378_int + var_389_int; // 0xbf3 Add
	var_366_string = var_366_string + var_390_int; // 0xbf4 Add2
	
Label_3061:
	Is3DSoundLoaded(var_379_bool, var_366_string); // 0xbf5 Func
	var_391_bool = var_379_bool; // 0xbf7 Push
	if(var_391_bool == 0) goto Label_3076; // 0xbf8 JumpB
	GetEyesHeight(var_380_float); // 0xbf9 Func
	GetDirection(var_381_cvector); // 0xbfb Func
	var_392_int = 50; // 0xbfd PushI
	var_382_cvector = var_381_cvector * var_392_int; // 0xbfe Mult2
	var_393_float = GetByIndex(var_382_cvector, 1); // 0xbff PushE
	var_393_float = var_393_float + var_380_float; // 0xc00 Add2
	SetByIndex(var_382_cvector, 1) = var_393_float; // 0xc01 PopE
	PlayGlobalSound(var_366_string, var_382_cvector); // 0xc02 Func
	
Label_3076:
	return 16; // 0xc04 Return
	
Label_3050:
	var_394_int = 1; // 0xbea PushI
	var_376_int = var_376_int + var_394_int; // 0xbeb Add2
	goto Label_3042; // 0xbec Jump
}


func_1508(var_285_bool, var_286_object)
{
	var_287_bool = 0; var_288_object = Obj(); // 0x5e5 PushV
	var_288_object = var_286_object; // 0x5e6 Mov
	func_2859(var_287_bool, var_288_object); // 0x5e7 NEW_2
	var_285_bool = var_287_bool; // 0x5e8 Mov
	return 0; // 0x5ea Return
}


func_3557(var_981_bool)
{
	var_982_int = 0; var_983_int = 0; // 0xde5 PushV
	var_984_string = ""; // 0xde6 PushV
	func_3632(var_984_string); // 0xde7 NEW_2
	var_985_string = "_locked"; // 0xde9 PushS
	var_986_int = var_984_string + var_985_string; // 0xdea Add
	GetVariable(var_986_int, var_983_int); // 0xdeb Func
	var_987_int = 0; // 0xded PushV
	func_3640(var_987_int); // 0xdee NEW_2
	var_981_bool = var_983_int >= var_987_int; // 0xdf0 GE2
	return 2; // 0xdf1 Return
}


func_1515(var_303_string)
{
	var_303_string = "walk"; // 0x5eb MovS
	return 0; // 0x5ec Return
}


func_1517(var_304_string)
{
	var_304_string = "run"; // 0x5ed MovS
	return 0; // 0x5ee Return
}


func_1519(var_674_object, var_675_float)
{
	var_680_bool = 0; var_681_object = Obj(); // 0x5f0 PushV
	var_681_object = var_674_object; // 0x5f1 Mov
	func_2859(var_680_bool, var_681_object); // 0x5f2 NEW_2
	var_682_bool = var_680_bool == 0; // 0x5f4 Not
	if(var_682_bool == 0) goto Label_1531; // 0x5f5 JumpB
	var_683_bool = 0; var_684_int = 0; // 0x5f6 PushV
	var_684_int = 2; // 0x5f7 MovI
	func_3414(var_683_bool, var_684_int); // 0x5f8 NEW_2
	return 0; // 0x5fa Return
	
Label_1531:
	var_685_int = 0; // 0x5fb PushI
	var_686_bool = var_675_float > var_685_int; // 0x5fc GT
	if(var_686_bool == 0) goto Label_1549; // 0x5fd JumpB
	var_687_int = 3; // 0x5fe PushI
	SetTimer(var_687_int, var_675_float); // 0x5ff Func
	var_688_bool = 0; var_689_object = Obj(); var_690_float = 0; var_691_float = 0; var_692_bool = 0; var_693_bool = 0; // 0x601 PushV
	var_689_object = var_674_object; // 0x602 Mov
	var_690_float = 350.0; // 0x603 MovF
	var_691_float = 6000; // 0x604 MovI
	var_692_bool = 1; // 0x605 MovB
	var_693_bool = 1; // 0x606 MovB
	func_1627(var_674_object, var_675_float, var_688_bool, var_689_object, var_690_float, var_691_float, var_692_bool, var_693_bool); // 0x607 NEW_2
	var_739_int = 3; // 0x609 PushI
	KillTimer(var_739_int); // 0x60a Func
	goto Label_1557; // 0x60c Jump
	
Label_1557:
	return 0; // 0x615 Return
	
Label_1549:
	var_740_bool = 0; var_741_object = Obj(); var_742_float = 0; var_743_float = 0; var_744_bool = 0; var_745_bool = 0; // 0x60d PushV
	var_741_object = var_674_object; // 0x60e Mov
	var_742_float = 350.0; // 0x60f MovF
	var_743_float = 6000; // 0x610 MovI
	var_744_bool = 1; // 0x611 MovB
	var_745_bool = 1; // 0x612 MovB
	func_1627(var_674_object, var_675_float, var_740_bool, var_741_object, var_742_float, var_743_float, var_744_bool, var_745_bool); // 0x613 NEW_2
}


func_1009(var_0_cvector, var_397_bool, var_398_float)
{
	var_399_bool = 0; var_400_cvector = CVector(0,0,0); var_401_cvector = CVector(0,0,0); var_402_cvector = CVector(0,0,0); var_403_float = 0; var_404_bool = 0; var_405_cvector = CVector(0,0,0); var_406_cvector = CVector(0,0,0); var_407_cvector = CVector(0,0,0); var_408_float = 0; // 0x3f1 PushV
	
Label_1010:
	IsAnimationPlaying(var_404_bool); // 0x3f2 Func
	var_409_bool = var_404_bool == 0; // 0x3f4 Not
	if(var_409_bool == 0) goto Label_1015; // 0x3f5 JumpB
	goto Label_1053; // 0x3f6 Jump
	
Label_1053:
	func_1196(var_408_float); // 0x41e NEW_2
	var_397_bool = 0; // 0x420 MovB
	return 10; // 0x421 Return
	
Label_1015:
	var_410_bool = 0; // 0x3f7 PushV
	func_1092(var_410_bool); // 0x3f8 NEW_2
	if(var_410_bool == 0) goto Label_1021; // 0x3fa JumpB
	var_397_bool = 1; // 0x3fb MovB
	return 10; // 0x3fc Return
	
Label_1021:
	var_455_bool = 0; // 0x3fd PushV
	var_455_bool = 1; // 0x3fe MovB
	var_456_bool = 0; var_457_object = Obj(); // 0x3ff PushV
	var_457_object = var_0_cvector; // 0x400 MovT
	func_2859(var_456_bool, var_457_object); // 0x401 NEW_2
	var_458_bool = var_456_bool == 0; // 0x403 Not
	if(var_458_bool == 0) goto Label_1032; // 0x404 JumpB
	var_459_int = var_4_int; // 0x405 PushT
	if(var_459_int == 0) goto Label_1032; // 0x406 JumpB
	var_455_bool = 0; // 0x407 MovB
	
Label_1032:
	if(var_455_bool == 0) goto Label_1035; // 0x408 JumpB
	var_397_bool = 0; // 0x409 MovB
	return 10; // 0x40a Return
	
Label_1035:
	GetPFPosition(var_405_cvector); // 0x40b TObjFunc
	GetPFPosition(var_406_cvector); // 0x40d Func
	var_407_cvector = var_405_cvector - var_406_cvector; // 0x40f Sub2
	var_408_float = var_407_cvector | var_407_cvector; // 0x410 Or2
	var_460_float = var_398_float * var_398_float; // 0x411 Mult
	var_461_bool = var_408_float < var_460_float; // 0x412 LT
	if(var_461_bool == 0) goto Label_1050; // 0x413 JumpB
	var_462_bool = 0; var_463_float = 0; // 0x414 PushV
	var_463_float = var_398_float; // 0x415 Mov
	func_836(var_408_float, var_462_bool, var_463_float); // 0x416 NEW_2
	var_397_bool = 1; // 0x418 MovB
	return 10; // 0x419 Return
	
Label_1050:
	sync(); // 0x41a Func
	goto Label_1010; // 0x41c Jump
}


func_3570(var_1008_bool)
{
	var_1009_int = 0; var_1010_int = 0; // 0xdf2 PushV
	var_1011_string = ""; // 0xdf3 PushV
	func_3632(var_1011_string); // 0xdf4 NEW_2
	var_1012_string = "_locked"; // 0xdf6 PushS
	var_1013_int = var_1011_string + var_1012_string; // 0xdf7 Add
	GetVariable(var_1013_int, var_1010_int); // 0xdf8 Func
	var_1014_bool = var_1008_bool; // 0xdfa Push
	if(var_1014_bool == 0) goto Label_3583; // 0xdfb JumpB
	var_1015_int = 1; // 0xdfc PushI
	var_1010_int = var_1010_int + var_1015_int; // 0xdfd Add2
	goto Label_3585; // 0xdfe Jump
	
Label_3585:
	var_1016_string = ""; // 0xe01 PushV
	func_3632(var_1016_string); // 0xe02 NEW_2
	var_1017_string = "_locked"; // 0xe04 PushS
	var_1018_int = var_1016_string + var_1017_string; // 0xe05 Add
	SetVariable(var_1018_int, var_1010_int); // 0xe06 Func
	return 2; // 0xe08 Return
	
Label_3583:
	var_1019_int = -1; // 0xdff PushI
	var_1010_int = var_1010_int + var_1019_int; // 0xe00 Add2
}


func_504(var_0_cvector, var_3_int, var_4_int, var_6_bool, var_121_object, var_122_bool, var_123_float, var_229_bool, var_335_bool)
{
	var_124_float = 0; var_125_cvector = CVector(0,0,0); var_126_cvector = CVector(0,0,0); var_127_bool = 0; var_128_bool = 0; var_129_float = 0; var_130_cvector = CVector(0,0,0); var_131_float = 0; var_132_cvector = CVector(0,0,0); var_133_bool = 0; var_134_float = 0; var_135_float = 0; var_136_cvector = CVector(0,0,0); var_137_cvector = CVector(0,0,0); var_138_bool = 0; var_139_bool = 0; var_140_float = 0; var_141_cvector = CVector(0,0,0); var_142_float = 0; var_143_cvector = CVector(0,0,0); var_144_bool = 0; var_145_float = 0; // 0x1f8 PushV
	func_762(var_143_cvector, var_144_bool, var_145_float); // 0x1fa NEW_2
	var_6_bool = 0; // 0x1fc TMovI
	var_168_string = "@GetAttackDistance"; // 0x1fd PushS
	var_169_int = 1; // 0x1fe PushI
	var_170_bool = IsFuncExist(var_121_object, var_168_string, var_169_int); // 0x1ff FuncExist
	if(var_170_bool == 0) goto Label_518; // 0x200 JumpB
	GetAttackDistance(var_135_float); // 0x201 ObjFunc
	var_171_int = 50; // 0x203 PushI
	var_135_float = var_135_float + var_171_int; // 0x204 Add2
	goto Label_519; // 0x205 Jump
	
Label_519:
	var_172_int = 150; // 0x207 PushI
	var_173_bool = var_135_float >= var_172_int; // 0x208 GE
	if(var_173_bool == 0) goto Label_523; // 0x209 JumpB
	var_135_float = 150; // 0x20a MovI
	
Label_523:
	var_3_int = 0; // 0x20b TMovB
	var_0_cvector = var_121_object; // 0x20c TMov
	IsPlayerActor(var_0_cvector, var_138_bool); // 0x20d Func
	var_174_bool = var_138_bool; // 0x20f Push
	if(var_174_bool == 0) goto Label_532; // 0x210 JumpB
	var_175_string = "attack"; // 0x211 PushS
	PlayGlobalMusic(var_175_string); // 0x212 Func
	
Label_532:
	var_176_bool = var_122_bool; // 0x214 Push
	if(var_176_bool == 0) goto Label_536; // 0x215 JumpB
	var_139_bool = 0; // 0x216 MovB
	goto Label_537; // 0x217 Jump
	
Label_537:
	var_177_float = 300.0; // 0x219 PushF
	var_140_float = var_177_float + var_135_float; // 0x21a Add2
	
Label_539:
	var_178_bool = 0; // 0x21b PushV
	var_178_bool = 0; // 0x21c MovB
	var_179_bool = 0; // 0x21d PushV
	var_179_bool = 0; // 0x21e MovB
	var_180_bool = 0; var_181_object = Obj(); // 0x21f PushV
	var_181_object = var_0_cvector; // 0x220 MovT
	func_2859(var_180_bool, var_181_object); // 0x221 NEW_2
	if(var_180_bool == 0) goto Label_551; // 0x223 JumpB
	var_214_bool = var_3_int == 0; // 0x224 Not
	if(var_214_bool == 0) goto Label_551; // 0x225 JumpB
	var_179_bool = 1; // 0x226 MovB
	
Label_551:
	if(var_179_bool == 0) goto Label_555; // 0x227 JumpB
	var_215_bool = var_4_int == 0; // 0x228 Not
	if(var_215_bool == 0) goto Label_555; // 0x229 JumpB
	var_178_bool = 1; // 0x22a MovB
	
Label_555:
	if(var_178_bool == 0) goto Label_731; // 0x22b JumpB
	func_1196(var_145_float); // 0x22d NEW_2
	GetPFPosition(var_136_cvector); // 0x22f TObjFunc
	GetPFPosition(var_137_cvector); // 0x231 Func
	var_141_cvector = var_136_cvector - var_137_cvector; // 0x233 Sub2
	var_142_float = var_141_cvector | var_141_cvector; // 0x234 Or2
	var_221_float = var_140_float * var_140_float; // 0x235 Mult
	var_222_bool = var_142_float >= var_221_float; // 0x236 GE
	if(var_222_bool == 0) goto Label_584; // 0x237 JumpB
	var_223_bool = 0; var_224_object = Obj(); var_225_float = 0; var_226_float = 0; var_227_bool = 0; var_228_bool = 0; // 0x238 PushV
	var_224_object = var_0_cvector; // 0x239 MovT
	var_225_float = var_135_float; // 0x23a Mov
	var_226_float = 2000.0; // 0x23b MovF
	var_227_bool = 1; // 0x23c MovB
	var_228_bool = 0; // 0x23d MovB
	TaskCall(2); // 0x23e TaskCall
	func_1214(var_232_object, var_223_bool, var_224_object, var_225_float, var_226_float, var_227_bool, var_228_bool); // 0x23f NEW_2
	TaskReturn(); // 0x240 TaskReturn
	var_318_bool = var_229_bool == 0; // 0x242 Not
	if(var_318_bool == 0) goto Label_582; // 0x243 JumpB
	var_3_int = 1; // 0x244 TMovB
	goto Label_731; // 0x245 Jump
	
Label_731:
	WaitForAnimEnd(); // 0x2db Func
	var_319_bool = 0; // 0x2dd PushV
	var_319_bool = 1; // 0x2de MovB
	var_320_int = var_3_int; // 0x2df PushT
	if(var_320_int == 0) goto Label_740; // 0x2e0 JumpB
	var_321_int = var_4_int; // 0x2e1 PushT
	if(var_321_int == 0) goto Label_740; // 0x2e2 JumpB
	var_319_bool = 0; // 0x2e3 MovB
	
Label_740:
	if(var_319_bool == 0) goto Label_742; // 0x2e4 JumpB
	return 22; // 0x2e5 Return
	
Label_742:
	var_322_string = "all"; // 0x2e6 PushS
	var_323_string = "attack_off"; // 0x2e7 PushS
	PlayAnimation(var_322_string, var_323_string); // 0x2e8 Func
	WaitForAnimEnd(); // 0x2ea Func
	var_324_bool = var_138_bool; // 0x2ec Push
	if(var_324_bool == 0) goto Label_753; // 0x2ed JumpB
	var_325_float = 2.0; // 0x2ee PushF
	Sleep(var_325_float); // 0x2ef Func
	
Label_753:
	return 22; // 0x2f1 Return
	
Label_582:
	var_139_bool = 0; // 0x246 MovB
	goto Label_730; // 0x247 Jump
	
Label_730:
	goto Label_539; // 0x2da Jump
	
Label_584:
	var_326_float = var_123_float * var_123_float; // 0x248 Mult
	var_327_bool = var_142_float >= var_326_float; // 0x249 GE
	if(var_327_bool == 0) goto Label_722; // 0x24a JumpB
	GetPFPosition(var_143_cvector); // 0x24b TObjFunc
	CanReachByPF(var_144_bool, var_143_cvector); // 0x24d Func
	var_328_bool = var_144_bool == 0; // 0x24f Not
	if(var_328_bool == 0) goto Label_609; // 0x250 JumpB
	var_329_bool = 0; var_330_object = Obj(); var_331_float = 0; var_332_float = 0; var_333_bool = 0; var_334_bool = 0; // 0x251 PushV
	var_330_object = var_0_cvector; // 0x252 MovT
	var_331_float = var_135_float; // 0x253 Mov
	var_332_float = 2000.0; // 0x254 MovF
	var_333_bool = 1; // 0x255 MovB
	var_334_bool = 0; // 0x256 MovB
	TaskCall(2); // 0x257 TaskCall
	func_1214(var_338_object, var_329_bool, var_330_object, var_331_float, var_332_float, var_333_bool, var_334_bool); // 0x258 NEW_2
	TaskReturn(); // 0x259 TaskReturn
	var_339_bool = var_335_bool == 0; // 0x25b Not
	if(var_339_bool == 0) goto Label_607; // 0x25c JumpB
	var_3_int = 1; // 0x25d TMovB
	goto Label_731; // 0x25e Jump
	
Label_607:
	var_139_bool = 0; // 0x25f MovB
	goto Label_539; // 0x260 Jump
	
Label_609:
	var_340_bool = var_139_bool == 0; // 0x261 Not
	if(var_340_bool == 0) goto Label_640; // 0x262 JumpB
	var_341_object = Obj(); // 0x263 PushV
	var_341_object = var_0_cvector; // 0x264 MovT
	func_3009(); // 0x265 NEW_2
	var_350_string = "all"; // 0x267 PushS
	var_351_string = "attack_on"; // 0x268 PushS
	PlayAnimation(var_350_string, var_351_string); // 0x269 Func
	WaitForAnimEnd(); // 0x26b Func
	func_1196(var_145_float); // 0x26e NEW_2
	StopAsync(); // 0x270 Func
	var_139_bool = 1; // 0x272 MovB
	var_352_bool = 0; // 0x273 PushV
	var_352_bool = 1; // 0x274 MovB
	var_353_bool = 0; var_354_object = Obj(); // 0x275 PushV
	var_354_object = var_0_cvector; // 0x276 MovT
	func_2859(var_353_bool, var_354_object); // 0x277 NEW_2
	var_355_bool = var_353_bool == 0; // 0x279 Not
	if(var_355_bool == 0) goto Label_638; // 0x27a JumpB
	var_356_int = var_4_int; // 0x27b PushT
	if(var_356_int == 0) goto Label_638; // 0x27c JumpB
	var_352_bool = 0; // 0x27d MovB
	
Label_638:
	if(var_352_bool == 0) goto Label_640; // 0x27e JumpB
	goto Label_731; // 0x27f Jump
	
Label_640:
	rand(var_145_float); // 0x280 Func
	var_357_bool = 0; // 0x282 PushV
	var_357_bool = 1; // 0x283 MovB
	var_358_float = 0.6; // 0x284 PushF
	var_359_bool = var_145_float < var_358_float; // 0x285 LT
	if(var_359_bool == 0) goto Label_652; // 0x286 JumpB
	var_360_bool = 0; // 0x287 PushV
	func_1153(var_357_bool, var_360_bool); // 0x288 NEW_2
	if(var_360_bool == 0) goto Label_652; // 0x28a JumpB
	var_357_bool = 0; // 0x28b MovB
	
Label_652:
	if(var_357_bool == 0) goto Label_669; // 0x28c JumpB
	Face(var_0_cvector); // 0x28d Func
	func_1201(); // 0x290 NEW_2
	var_395_string = "all"; // 0x292 PushS
	var_396_string = "attack_stay"; // 0x293 PushS
	PlayAnimation(var_395_string, var_396_string); // 0x294 Func
	var_397_bool = 0; var_398_float = 0; // 0x296 PushV
	var_398_float = var_123_float; // 0x297 Mov
	func_1009(var_145_float, var_397_bool, var_398_float); // 0x298 NEW_2
	StopAsync(); // 0x29a Func
	goto Label_721; // 0x29c Jump
	
Label_721:
	goto Label_730; // 0x2d1 Jump
	
Label_669:
	Face(var_0_cvector); // 0x29d Func
	var_622_string = "all"; // 0x29f PushS
	var_623_string = "fjump"; // 0x2a0 PushS
	PlayAnimation(var_622_string, var_623_string); // 0x2a1 Func
	WaitForAnimEnd(); // 0x2a3 Func
	func_1196(var_145_float); // 0x2a6 NEW_2
	var_624_cvector = CVector(0.0, 0.0, 0.0); // 0x2a8 PushVec
	SetSpeed(var_624_cvector); // 0x2a9 Func
	Stop(); // 0x2ab Func
	StopAsync(); // 0x2ad Func
	var_625_bool = 0; // 0x2af PushV
	func_1153(var_145_float, var_625_bool); // 0x2b0 NEW_2
	var_626_bool = var_625_bool == 0; // 0x2b2 Not
	if(var_626_bool == 0) goto Label_721; // 0x2b3 JumpB
	var_627_bool = 0; // 0x2b4 PushV
	var_627_bool = 1; // 0x2b5 MovB
	var_628_bool = 0; var_629_object = Obj(); // 0x2b6 PushV
	var_629_object = var_0_cvector; // 0x2b7 MovT
	func_2859(var_628_bool, var_629_object); // 0x2b8 NEW_2
	var_630_bool = var_628_bool == 0; // 0x2ba Not
	if(var_630_bool == 0) goto Label_703; // 0x2bb JumpB
	var_631_int = var_4_int; // 0x2bc PushT
	if(var_631_int == 0) goto Label_703; // 0x2bd JumpB
	var_627_bool = 0; // 0x2be MovB
	
Label_703:
	if(var_627_bool == 0) goto Label_705; // 0x2bf JumpB
	goto Label_731; // 0x2c0 Jump
	
Label_705:
	GetPFPosition(var_136_cvector); // 0x2c1 TObjFunc
	GetPFPosition(var_137_cvector); // 0x2c3 Func
	var_141_cvector = var_136_cvector - var_137_cvector; // 0x2c5 Sub2
	var_142_float = var_141_cvector | var_141_cvector; // 0x2c6 Or2
	var_632_float = var_123_float * var_123_float; // 0x2c7 Mult
	var_633_bool = var_142_float < var_632_float; // 0x2c8 LT
	if(var_633_bool == 0) goto Label_721; // 0x2c9 JumpB
	var_634_bool = 0; var_635_float = 0; // 0x2ca PushV
	var_635_float = var_123_float; // 0x2cb Mov
	func_836(var_145_float, var_634_bool, var_635_float); // 0x2cc NEW_2
	var_636_bool = var_634_bool == 0; // 0x2ce Not
	if(var_636_bool == 0) goto Label_721; // 0x2cf JumpB
	goto Label_731; // 0x2d0 Jump
	
Label_722:
	var_637_bool = 0; var_638_float = 0; // 0x2d2 PushV
	var_638_float = var_123_float; // 0x2d3 Mov
	func_836(var_145_float, var_637_bool, var_638_float); // 0x2d4 NEW_2
	var_639_bool = var_637_bool == 0; // 0x2d6 Not
	if(var_639_bool == 0) goto Label_729; // 0x2d7 JumpB
	goto Label_731; // 0x2d8 Jump
	
Label_729:
	var_139_bool = 1; // 0x2d9 MovB
	
Label_536:
	var_139_bool = 1; // 0x218 MovB
	
Label_518:
	var_135_float = var_123_float; // 0x206 Mov
}


