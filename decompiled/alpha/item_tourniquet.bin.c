main()
{
	var_0_bool = 0; var_1_string = ""; var_2_float = 0; var_3_float = 0; var_4_float = 0; // 0x0 PushV
	var_1_string = "health"; // 0x1 MovS
	var_2_float = 0.05; // 0x2 MovF
	var_3_float = 0; // 0x3 MovI
	var_4_float = 1; // 0x4 MovI
	func_8(var_0_bool, var_1_string, var_2_float, var_3_float, var_4_float); // 0x5 Call
	return 0; // 0x7 Return
}


func_8(var_0_bool, var_1_string, var_2_float, var_3_float, var_4_float)
{
	var_5_bool = 0; var_6_float = 0; var_7_bool = 0; var_8_float = 0; // 0x8 PushV
	HasProperty(var_1_string, var_7_bool); // 0x9 Func
	var_9_bool = var_7_bool == 0; // 0xb Not
	if(var_9_bool == 0) goto Label_15; // 0xc JumpB
	var_0_bool = 0; // 0xd MovB
	return 4; // 0xe Return
	
Label_15:
	GetProperty(var_1_string, var_8_float); // 0xf Func
	var_10_float = 0; var_11_float = 0; var_12_float = 0; var_13_float = 0; // 0x11 PushV
	var_11_float = var_8_float + var_2_float; // 0x12 Add2
	var_12_float = var_3_float; // 0x13 Mov
	var_13_float = var_4_float; // 0x14 Mov
	func_27(var_10_float, var_11_float, var_12_float, var_13_float); // 0x15 Call
	SetProperty(var_1_string, var_10_float); // 0x17 Func
	var_0_bool = 1; // 0x19 MovB
	return 4; // 0x1a Return
}


func_27(var_10_float, var_11_float, var_12_float, var_13_float)
{
	var_14_bool = var_11_float < var_12_float; // 0x1c LT
	if(var_14_bool == 0) goto Label_32; // 0x1d JumpB
	var_10_float = var_12_float; // 0x1e Mov
	return 0; // 0x1f Return
	
Label_32:
	var_15_bool = var_11_float > var_13_float; // 0x20 GT
	if(var_15_bool == 0) goto Label_36; // 0x21 JumpB
	var_10_float = var_13_float; // 0x22 Mov
	return 0; // 0x23 Return
	
Label_36:
	var_10_float = var_11_float; // 0x24 Mov
	return 0; // 0x25 Return
}


