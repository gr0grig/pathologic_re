main()
{
	var_0_bool = 0; var_1_string = ""; var_2_float = 0; var_3_float = 0; var_4_float = 0; // 0x0 PushV
	var_1_string = "health"; // 0x1 MovS
	var_2_float = 0.0; // 0x2 MovF
	var_3_float = 0; // 0x3 MovI
	var_4_float = 1; // 0x4 MovI
	func_36(var_0_bool, var_1_string, var_2_float, var_3_float, var_4_float); // 0x5 Call
	var_16_bool = 0; var_17_string = ""; var_18_float = 0; var_19_float = 0; var_20_float = 0; // 0x7 PushV
	var_17_string = "immunity"; // 0x8 MovS
	var_18_float = 0.15; // 0x9 MovF
	var_19_float = 0; // 0xa MovI
	var_20_float = 1; // 0xb MovI
	func_36(var_16_bool, var_17_string, var_18_float, var_19_float, var_20_float); // 0xc Call
	var_21_bool = 0; var_22_string = ""; var_23_float = 0; var_24_float = 0; var_25_float = 0; // 0xe PushV
	var_22_string = "disease"; // 0xf MovS
	var_23_float = 0.0; // 0x10 MovF
	var_24_float = 0; // 0x11 MovI
	var_25_float = 1; // 0x12 MovI
	func_36(var_21_bool, var_22_string, var_23_float, var_24_float, var_25_float); // 0x13 Call
	var_26_bool = 0; var_27_string = ""; var_28_float = 0; var_29_float = 0; var_30_float = 0; // 0x15 PushV
	var_27_string = "hunger"; // 0x16 MovS
	var_28_float = -0.1; // 0x17 MovF
	var_29_float = 0; // 0x18 MovI
	var_30_float = 1; // 0x19 MovI
	func_36(var_26_bool, var_27_string, var_28_float, var_29_float, var_30_float); // 0x1a Call
	var_31_bool = 0; var_32_string = ""; var_33_float = 0; var_34_float = 0; var_35_float = 0; // 0x1c PushV
	var_32_string = "tiredness"; // 0x1d MovS
	var_33_float = 0.0; // 0x1e MovF
	var_34_float = 0; // 0x1f MovI
	var_35_float = 1; // 0x20 MovI
	func_36(var_31_bool, var_32_string, var_33_float, var_34_float, var_35_float); // 0x21 Call
	return 0; // 0x23 Return
}


func_36(var_0_bool, var_1_string, var_2_float, var_3_float, var_4_float)
{
	var_5_bool = 0; var_6_float = 0; var_7_bool = 0; var_8_float = 0; // 0x24 PushV
	HasProperty(var_1_string, var_7_bool); // 0x25 Func
	var_9_bool = var_7_bool == 0; // 0x27 Not
	if(var_9_bool == 0) goto Label_43; // 0x28 JumpB
	var_0_bool = 0; // 0x29 MovB
	return 4; // 0x2a Return
	
Label_43:
	GetProperty(var_1_string, var_8_float); // 0x2b Func
	var_10_float = 0; var_11_float = 0; var_12_float = 0; var_13_float = 0; // 0x2d PushV
	var_11_float = var_8_float + var_2_float; // 0x2e Add2
	var_12_float = var_3_float; // 0x2f Mov
	var_13_float = var_4_float; // 0x30 Mov
	func_55(var_10_float, var_11_float, var_12_float, var_13_float); // 0x31 Call
	SetProperty(var_1_string, var_10_float); // 0x33 Func
	var_0_bool = 1; // 0x35 MovB
	return 4; // 0x36 Return
}


func_55(var_10_float, var_11_float, var_12_float, var_13_float)
{
	var_14_bool = var_11_float < var_12_float; // 0x38 LT
	if(var_14_bool == 0) goto Label_60; // 0x39 JumpB
	var_10_float = var_12_float; // 0x3a Mov
	return 0; // 0x3b Return
	
Label_60:
	var_15_bool = var_11_float > var_13_float; // 0x3c GT
	if(var_15_bool == 0) goto Label_64; // 0x3d JumpB
	var_10_float = var_13_float; // 0x3e Mov
	return 0; // 0x3f Return
	
Label_64:
	var_10_float = var_11_float; // 0x40 Mov
	return 0; // 0x41 Return
}


