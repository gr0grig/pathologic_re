main()
{
	var_0_float = 0; var_1_float = 0; // 0x0 PushV
	var_2_string = "immunity"; // 0x1 PushS
	GetProperty(var_2_string, var_1_float); // 0x2 Func
	var_3_float = 0.99; // 0x4 PushF
	var_4_bool = var_1_float < var_3_float; // 0x5 LT
	if(var_4_bool == 0) goto Label_11; // 0x6 JumpB
	var_5_string = "immunity"; // 0x7 PushS
	var_6_float = 0.99; // 0x8 PushF
	SetProperty(var_5_string, var_6_float); // 0x9 Func
	
Label_11:
	var_7_bool = 0; var_8_string = ""; var_9_float = 0; var_10_float = 0; var_11_float = 0; // 0xb PushV
	var_8_string = "health"; // 0xc MovS
	var_9_float = 0.05; // 0xd MovF
	var_10_float = 0; // 0xe MovI
	var_11_float = 1; // 0xf MovI
	func_71(var_7_bool, var_8_string, var_9_float, var_10_float, var_11_float); // 0x10 Call
	var_23_float = 0; // 0x12 PushV
	var_23_float = 12.0; // 0x13 MovF
	func_42(var_23_float); // 0x14 Call
	return 2; // 0x16 Return
}


func_42(var_23_float)
{
	var_24_float = 0; var_25_float = 0; var_26_float = 0; var_27_float = 0; var_28_float = 0; var_29_float = 0; var_30_float = 0; var_31_float = 0; // 0x2a PushV
	GetGameTime(var_28_float); // 0x2b Func
	var_29_float = var_28_float + var_23_float; // 0x2d Add2
	var_30_float = var_28_float; // 0x2e Mov
	
Label_47:
	sync(); // 0x2f Func
	GetGameTime(var_31_float); // 0x31 Func
	var_32_bool = var_31_float <= var_30_float; // 0x33 LE
	if(var_32_bool == 0) goto Label_54; // 0x34 JumpB
	goto Label_69; // 0x35 Jump
	
Label_69:
	goto Label_47; // 0x45 Jump
	
Label_54:
	var_33_bool = var_31_float >= var_29_float; // 0x36 GE
	if(var_33_bool == 0) goto Label_62; // 0x37 JumpB
	var_34_bool = 0; var_35_float = 0; // 0x38 PushV
	var_35_float = var_29_float - var_30_float; // 0x39 Sub2
	func_23(var_34_bool, var_35_float); // 0x3a Call
	goto Label_70; // 0x3c Jump
	
Label_70:
	return 8; // 0x46 Return
	
Label_62:
	var_48_bool = 0; var_49_float = 0; // 0x3e PushV
	var_49_float = var_31_float - var_30_float; // 0x3f Sub2
	func_23(var_48_bool, var_49_float); // 0x40 Call
	if(var_48_bool == 0) goto Label_68; // 0x42 JumpB
	goto Label_70; // 0x43 Jump
	
Label_68:
	var_30_float = var_31_float; // 0x44 Mov
}


func_23(var_34_bool, var_35_float)
{
	var_36_bool = 0; var_37_string = ""; var_38_float = 0; var_39_float = 0; var_40_float = 0; // 0x18 PushV
	var_37_string = "immunity"; // 0x19 MovS
	var_41_float = 2.0; // 0x1a PushF
	var_38_float = var_35_float * var_41_float; // 0x1b Mult2
	var_39_float = 0; // 0x1c MovI
	var_40_float = 0.99; // 0x1d MovF
	func_71(var_36_bool, var_37_string, var_38_float, var_39_float, var_40_float); // 0x1e Call
	var_42_bool = 0; var_43_string = ""; var_44_float = 0; var_45_float = 0; var_46_float = 0; // 0x20 PushV
	var_43_string = "health"; // 0x21 MovS
	var_47_float = -0.05; // 0x22 PushF
	var_44_float = var_35_float * var_47_float; // 0x23 Mult2
	var_45_float = 0; // 0x24 MovI
	var_46_float = 1; // 0x25 MovI
	func_71(var_42_bool, var_43_string, var_44_float, var_45_float, var_46_float); // 0x26 Call
	var_34_bool = 0; // 0x28 MovB
	return 0; // 0x29 Return
}


func_90(var_17_float, var_18_float, var_19_float, var_20_float)
{
	var_21_bool = var_18_float < var_19_float; // 0x5b LT
	if(var_21_bool == 0) goto Label_95; // 0x5c JumpB
	var_17_float = var_19_float; // 0x5d Mov
	return 0; // 0x5e Return
	
Label_95:
	var_22_bool = var_18_float > var_20_float; // 0x5f GT
	if(var_22_bool == 0) goto Label_99; // 0x60 JumpB
	var_17_float = var_20_float; // 0x61 Mov
	return 0; // 0x62 Return
	
Label_99:
	var_17_float = var_18_float; // 0x63 Mov
	return 0; // 0x64 Return
}


func_71(var_7_bool, var_8_string, var_9_float, var_10_float, var_11_float)
{
	var_12_bool = 0; var_13_float = 0; var_14_bool = 0; var_15_float = 0; // 0x47 PushV
	HasProperty(var_8_string, var_14_bool); // 0x48 Func
	var_16_bool = var_14_bool == 0; // 0x4a Not
	if(var_16_bool == 0) goto Label_78; // 0x4b JumpB
	var_7_bool = 0; // 0x4c MovB
	return 4; // 0x4d Return
	
Label_78:
	GetProperty(var_8_string, var_15_float); // 0x4e Func
	var_17_float = 0; var_18_float = 0; var_19_float = 0; var_20_float = 0; // 0x50 PushV
	var_18_float = var_15_float + var_9_float; // 0x51 Add2
	var_19_float = var_10_float; // 0x52 Mov
	var_20_float = var_11_float; // 0x53 Mov
	func_90(var_17_float, var_18_float, var_19_float, var_20_float); // 0x54 Call
	SetProperty(var_8_string, var_17_float); // 0x56 Func
	var_7_bool = 1; // 0x58 MovB
	return 4; // 0x59 Return
}


