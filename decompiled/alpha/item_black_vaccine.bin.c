main()
{
	var_0_float = 0; var_1_float = 0; // 0x0 PushV
	var_2_string = "immunity"; // 0x1 PushS
	GetProperty(var_2_string, var_1_float); // 0x2 Func
	var_3_float = 0.6; // 0x4 PushF
	var_4_bool = var_1_float < var_3_float; // 0x5 LT
	if(var_4_bool == 0) goto Label_11; // 0x6 JumpB
	var_5_string = "immunity"; // 0x7 PushS
	var_6_float = 0.6; // 0x8 PushF
	SetProperty(var_5_string, var_6_float); // 0x9 Func
	
Label_11:
	var_7_float = 0; // 0xb PushV
	var_7_float = 6.0; // 0xc MovF
	func_27(var_7_float); // 0xd Call
	return 2; // 0xf Return
}


func_56(var_20_bool, var_21_string, var_22_float, var_23_float, var_24_float)
{
	var_26_bool = 0; var_27_float = 0; var_28_bool = 0; var_29_float = 0; // 0x38 PushV
	HasProperty(var_21_string, var_28_bool); // 0x39 Func
	var_30_bool = var_28_bool == 0; // 0x3b Not
	if(var_30_bool == 0) goto Label_63; // 0x3c JumpB
	var_20_bool = 0; // 0x3d MovB
	return 4; // 0x3e Return
	
Label_63:
	GetProperty(var_21_string, var_29_float); // 0x3f Func
	var_31_float = 0; var_32_float = 0; var_33_float = 0; var_34_float = 0; // 0x41 PushV
	var_32_float = var_29_float + var_22_float; // 0x42 Add2
	var_33_float = var_23_float; // 0x43 Mov
	var_34_float = var_24_float; // 0x44 Mov
	func_75(var_31_float, var_32_float, var_33_float, var_34_float); // 0x45 Call
	SetProperty(var_21_string, var_31_float); // 0x47 Func
	var_20_bool = 1; // 0x49 MovB
	return 4; // 0x4a Return
}


func_16(var_18_bool, var_19_float)
{
	var_20_bool = 0; var_21_string = ""; var_22_float = 0; var_23_float = 0; var_24_float = 0; // 0x11 PushV
	var_21_string = "immunity"; // 0x12 MovS
	var_25_float = 0.6; // 0x13 PushF
	var_22_float = var_19_float * var_25_float; // 0x14 Mult2
	var_23_float = 0; // 0x15 MovI
	var_24_float = 0.6; // 0x16 MovF
	func_56(var_20_bool, var_21_string, var_22_float, var_23_float, var_24_float); // 0x17 Call
	var_18_bool = 0; // 0x19 MovB
	return 0; // 0x1a Return
}


func_75(var_31_float, var_32_float, var_33_float, var_34_float)
{
	var_35_bool = var_32_float < var_33_float; // 0x4c LT
	if(var_35_bool == 0) goto Label_80; // 0x4d JumpB
	var_31_float = var_33_float; // 0x4e Mov
	return 0; // 0x4f Return
	
Label_80:
	var_36_bool = var_32_float > var_34_float; // 0x50 GT
	if(var_36_bool == 0) goto Label_84; // 0x51 JumpB
	var_31_float = var_34_float; // 0x52 Mov
	return 0; // 0x53 Return
	
Label_84:
	var_31_float = var_32_float; // 0x54 Mov
	return 0; // 0x55 Return
}


func_27(var_7_float)
{
	var_8_float = 0; var_9_float = 0; var_10_float = 0; var_11_float = 0; var_12_float = 0; var_13_float = 0; var_14_float = 0; var_15_float = 0; // 0x1b PushV
	GetGameTime(var_12_float); // 0x1c Func
	var_13_float = var_12_float + var_7_float; // 0x1e Add2
	var_14_float = var_12_float; // 0x1f Mov
	
Label_32:
	sync(); // 0x20 Func
	GetGameTime(var_15_float); // 0x22 Func
	var_16_bool = var_15_float <= var_14_float; // 0x24 LE
	if(var_16_bool == 0) goto Label_39; // 0x25 JumpB
	goto Label_54; // 0x26 Jump
	
Label_54:
	goto Label_32; // 0x36 Jump
	
Label_39:
	var_17_bool = var_15_float >= var_13_float; // 0x27 GE
	if(var_17_bool == 0) goto Label_47; // 0x28 JumpB
	var_18_bool = 0; var_19_float = 0; // 0x29 PushV
	var_19_float = var_13_float - var_14_float; // 0x2a Sub2
	func_16(var_18_bool, var_19_float); // 0x2b Call
	goto Label_55; // 0x2d Jump
	
Label_55:
	return 8; // 0x37 Return
	
Label_47:
	var_37_bool = 0; var_38_float = 0; // 0x2f PushV
	var_38_float = var_15_float - var_14_float; // 0x30 Sub2
	func_16(var_37_bool, var_38_float); // 0x31 Call
	if(var_37_bool == 0) goto Label_53; // 0x33 JumpB
	goto Label_55; // 0x34 Jump
	
Label_53:
	var_14_float = var_15_float; // 0x35 Mov
}


