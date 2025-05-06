task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; var_3_bool = 0; var_4_bool = 0; // 0xb PushV
	var_5_bool = 0; // 0xc PushV
	var_5_bool = 1; // 0xd MovB
	var_6_bool = var_0_object == 0; // 0xe Not
	if(var_6_bool == 0) goto Label_22; // 0xf JumpB
	var_7_bool = 0; // 0x10 PushV
	func_37(var_7_bool); // 0x11 NEW_2
	var_11_bool = var_7_bool == 0; // 0x13 Not
	if(var_11_bool == 0) goto Label_22; // 0x14 JumpB
	var_5_bool = 0; // 0x15 MovB
	
Label_22:
	if(var_5_bool == 0) goto Label_24; // 0x16 JumpB
	return 4; // 0x17 Return
	
Label_24:
	IsOnGround(var_3_bool); // 0x18 ObjFunc
	var_12_bool = var_3_bool; // 0x1a Push
	if(var_12_bool == 0) goto Label_36; // 0x1b JumpB
	EventDisable(0); // 0x1c EventDisable
	IsOverrideActive(var_4_bool); // 0x1d Func
	var_13_bool = var_4_bool == 0; // 0x1f Not
	if(var_13_bool == 0) goto Label_35; // 0x20 JumpB
	Barter(var_0_object); // 0x21 Func
	
Label_35:
	EventEnable(0); // 0x23 EventEnable
	
Label_36:
	return 4; // 0x24 Return
}


main()
{
	var_0_bool = 1; // 0x0 PushB
	SetVisibility(var_0_bool); // 0x1 Func
	func_7(); // 0x4 NEW_2
	return 0; // 0x6 Return
}


func_37(var_7_bool)
{
	var_8_int = 0; var_9_int = 0; // 0x25 PushV
	var_10_string = "nouse_container"; // 0x26 PushS
	GetVariable(var_10_string, var_9_int); // 0x27 Func
	var_7_bool = !var_9_int; // 0x29 Not2
	return 2; // 0x2a Return
}


func_7()
{
	
Label_7:
	Hold(); // 0x7 Func
	goto Label_7; // 0x9 Jump
}


