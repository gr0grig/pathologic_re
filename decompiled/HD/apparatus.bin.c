task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; // 0x7 PushV
	var_3_int = 0; // 0x8 PushV
	func_36(var_3_int); // 0x9 NEW_2
	var_7_int = 1; // 0xb PushI
	var_8_bool = var_3_int != var_7_int; // 0xc Neq
	if(var_8_bool == 0) goto Label_15; // 0xd JumpB
	return 2; // 0xe Return
	
Label_15:
	EventDisable(0); // 0xf EventDisable
	IsOverrideActive(var_2_bool); // 0x10 Func
	var_9_bool = var_2_bool == 0; // 0x12 Not
	if(var_9_bool == 0) goto Label_29; // 0x13 JumpB
	var_10_string = "apparatus.xml"; // 0x14 PushS
	var_11_bool = 0; // 0x15 PushB
	var_12_bool = 0; // 0x16 PushB
	var_13_object = Obj(); // 0x17 PushV
	func_30(var_13_object); // 0x18 NEW_2
	ShowWindow(var_10_string, var_11_bool, var_12_bool, var_13_object); // 0x1a Func
	EventEnable(0); // 0x1c EventEnable
	
Label_29:
	return 2; // 0x1d Return
}


main()
{
	var_0_bool = 1; // 0x0 PushB
	SetVisibility(var_0_bool); // 0x1 Func
	
Label_3:
	Hold(); // 0x3 Func
	goto Label_3; // 0x5 Jump
}


func_36(var_3_int)
{
	var_4_int = 0; var_5_int = 0; // 0x24 PushV
	var_6_string = "branch"; // 0x25 PushS
	GetVariable(var_6_string, var_5_int); // 0x26 Func
	var_3_int = var_5_int; // 0x28 Mov
	return 2; // 0x29 Return
}


func_30(var_13_object)
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x1e PushV
	self(var_15_object); // 0x1f Func
	var_13_object = var_15_object; // 0x21 Mov
	return 2; // 0x22 Return
}


