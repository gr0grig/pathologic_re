task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; var_3_bool = 0; var_4_bool = 0; // 0xb PushV
	var_5_bool = 0; // 0xc PushV
	func_31(var_5_bool); // 0xd Call
	var_9_bool = var_5_bool == 0; // 0xf Not
	if(var_9_bool == 0) goto Label_18; // 0x10 JumpB
	return 4; // 0x11 Return
	
Label_18:
	IsOnGround(var_3_bool); // 0x12 ObjFunc
	var_10_bool = var_3_bool; // 0x14 Push
	if(var_10_bool == 0) goto Label_30; // 0x15 JumpB
	EventDisable(0); // 0x16 EventDisable
	IsOverrideActive(var_4_bool); // 0x17 Func
	var_11_bool = var_4_bool == 0; // 0x19 Not
	if(var_11_bool == 0) goto Label_29; // 0x1a JumpB
	Barter(var_0_object); // 0x1b Func
	
Label_29:
	EventEnable(0); // 0x1d EventEnable
	
Label_30:
	return 4; // 0x1e Return
}


main()
{
	var_0_bool = 1; // 0x0 PushB
	SetVisibility(var_0_bool); // 0x1 Func
	func_7(); // 0x4 Call
	return 0; // 0x6 Return
}


func_31(var_5_bool)
{
	var_6_int = 0; var_7_int = 0; // 0x1f PushV
	var_8_string = "nouse_container"; // 0x20 PushS
	GetVariable(var_8_string, var_7_int); // 0x21 Func
	var_5_bool = !var_7_int; // 0x23 Not2
	return 2; // 0x24 Return
}


func_7()
{
	
Label_7:
	Hold(); // 0x7 Func
	goto Label_7; // 0x9 Jump
}


