main()
{
	
Label_0:
	var_0_bool = 1; // 0x0 PushB
	if(var_0_bool == 0) goto Label_7; // 0x1 JumpB
	var_1_string = ""; // 0x2 PushV
	var_1_string = "sobor_idle"; // 0x3 MovS
	func_8(var_1_string); // 0x4 NEW_2
	goto Label_0; // 0x6 Jump
	
Label_7:
	return 0; // 0x7 Return
}


func_8(var_1_string)
{
	var_2_bool = 0; var_3_bool = 0; var_4_bool = 0; var_5_bool = 0; // 0x8 PushV
	var_6_string = "all"; // 0x9 PushS
	HasAnimation(var_4_bool, var_6_string, var_1_string); // 0xa Func
	var_7_bool = var_4_bool == 0; // 0xc Not
	if(var_7_bool == 0) goto Label_15; // 0xd JumpB
	return 4; // 0xe Return
	
Label_15:
	var_8_string = "all"; // 0xf PushS
	PlayAnimation(var_8_string, var_1_string); // 0x10 Func
	WaitForAnimEnd(var_5_bool); // 0x12 Func
	var_9_string = "all"; // 0x14 PushS
	LockAnimationEnd(var_9_string, var_1_string); // 0x15 Func
	return 4; // 0x17 Return
}


