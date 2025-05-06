main()
{
	
Label_0:
	var_0_bool = 1; // 0x0 PushB
	if(var_0_bool == 0) goto Label_7; // 0x1 JumpB
	var_1_string = ""; // 0x2 PushV
	var_1_string = "cry"; // 0x3 MovS
	func_8(var_1_string); // 0x4 NEW_2
	goto Label_0; // 0x6 Jump
	
Label_7:
	return 0; // 0x7 Return
}


func_8(var_1_string)
{
	var_2_bool = 0; var_3_bool = 0; var_4_bool = 0; var_5_bool = 0; // 0x8 PushV
	WaitForAnimEnd(); // 0x9 Func
	var_6_bool = 0; // 0xb PushV
	func_29(var_6_bool); // 0xc NEW_2
	var_9_bool = var_6_bool == 0; // 0xe Not
	if(var_9_bool == 0) goto Label_17; // 0xf JumpB
	return 4; // 0x10 Return
	
Label_17:
	var_10_string = "all"; // 0x11 PushS
	HasAnimation(var_4_bool, var_10_string, var_1_string); // 0x12 Func
	var_11_bool = var_4_bool == 0; // 0x14 Not
	if(var_11_bool == 0) goto Label_23; // 0x15 JumpB
	return 4; // 0x16 Return
	
Label_23:
	var_12_string = "all"; // 0x17 PushS
	PlayAnimation(var_12_string, var_1_string); // 0x18 Func
	WaitForAnimEnd(var_5_bool); // 0x1a Func
	return 4; // 0x1c Return
}


func_29(var_6_bool)
{
	var_7_bool = 0; var_8_bool = 0; // 0x1d PushV
	IsLoaded(var_8_bool); // 0x1e Func
	var_6_bool = var_8_bool; // 0x20 Mov
	return 2; // 0x21 Return
}


