task_0_event_200(var_0_int, var_1_string, var_2_object)
{
	var_3_string = "scalpel"; // 0xa PushS
	var_4_bool = var_1_string == var_3_string; // 0xb Eq
	if(var_4_bool == 0) goto Label_21; // 0xc JumpB
	var_5_bool = 0; // 0xd PushV
	func_32(var_5_bool); // 0xe Call
	if(var_5_bool == 0) goto Label_20; // 0x10 JumpB
	var_11_string = "has slot"; // 0x11 PushS
	UITrace(var_11_string); // 0x12 Func
	
Label_20:
	goto Label_31; // 0x14 Jump
	
Label_31:
	return 0; // 0x1f Return
	
Label_21:
	var_12_string = "squirt"; // 0x15 PushS
	var_13_bool = var_1_string == var_12_string; // 0x16 Eq
	if(var_13_bool == 0) goto Label_31; // 0x17 JumpB
	var_14_bool = 0; // 0x18 PushV
	func_32(var_14_bool); // 0x19 Call
	if(var_14_bool == 0) goto Label_31; // 0x1b JumpB
	var_15_string = "has slot"; // 0x1c PushS
	UITrace(var_15_string); // 0x1d Func
}


main()
{
	var_0_bool = 0; // 0x0 PushB
	SetOwnerDraw(var_0_bool); // 0x1 Func
	func_43(); // 0x4 Call
	ProcessEvents(); // 0x6 Func
	return 0; // 0x8 Return
}


func_32(var_5_bool)
{
	var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0; // 0x20 PushV
	GetContainerItemCount(var_8_int); // 0x21 Func
	GetContainerSize(var_9_int); // 0x23 Func
	var_10_bool = var_8_int >= var_9_int; // 0x25 GE
	if(var_10_bool == 0) goto Label_41; // 0x26 JumpB
	var_5_bool = 0; // 0x27 MovB
	return 4; // 0x28 Return
	
Label_41:
	var_5_bool = 1; // 0x29 MovB
	return 4; // 0x2a Return
}


func_43()
{
	return 0; // 0x2b Return
}


