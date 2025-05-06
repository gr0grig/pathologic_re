main()
{
	var_0_bool = 0; var_1_string = ""; var_2_float = 0; var_3_float = 0; var_4_float = 0; // 0x0 PushV
	var_1_string = "health"; // 0x1 MovS
	var_2_float = 0.03; // 0x2 MovF
	var_3_float = 0; // 0x3 MovI
	var_4_float = 1; // 0x4 MovI
	func_71(var_0_bool, var_1_string, var_2_float, var_3_float, var_4_float); // 0x5 Call
	var_16_bool = 0; var_17_string = ""; var_18_float = 0; var_19_float = 0; var_20_float = 0; // 0x7 PushV
	var_17_string = "tiredness"; // 0x8 MovS
	var_18_float = 0.25; // 0x9 MovF
	var_19_float = 0; // 0xa MovI
	var_20_float = 1; // 0xb MovI
	func_71(var_16_bool, var_17_string, var_18_float, var_19_float, var_20_float); // 0xc Call
	var_21_float = 0; // 0xe PushV
	var_21_float = 5.0; // 0xf MovF
	func_42(var_21_float); // 0x10 Call
	return 0; // 0x12 Return
}


func_103(var_10_float, var_11_float, var_12_float, var_13_float)
{
	var_14_bool = var_11_float < var_12_float; // 0x68 LT
	if(var_14_bool == 0) goto Label_108; // 0x69 JumpB
	var_10_float = var_12_float; // 0x6a Mov
	return 0; // 0x6b Return
	
Label_108:
	var_15_bool = var_11_float > var_13_float; // 0x6c GT
	if(var_15_bool == 0) goto Label_112; // 0x6d JumpB
	var_10_float = var_13_float; // 0x6e Mov
	return 0; // 0x6f Return
	
Label_112:
	var_10_float = var_11_float; // 0x70 Mov
	return 0; // 0x71 Return
}


func_71(var_0_bool, var_1_string, var_2_float, var_3_float, var_4_float)
{
	var_5_bool = 0; var_6_float = 0; var_7_bool = 0; var_8_float = 0; // 0x47 PushV
	HasProperty(var_1_string, var_7_bool); // 0x48 Func
	var_9_bool = var_7_bool == 0; // 0x4a Not
	if(var_9_bool == 0) goto Label_78; // 0x4b JumpB
	var_0_bool = 0; // 0x4c MovB
	return 4; // 0x4d Return
	
Label_78:
	GetProperty(var_1_string, var_8_float); // 0x4e Func
	var_10_float = 0; var_11_float = 0; var_12_float = 0; var_13_float = 0; // 0x50 PushV
	var_11_float = var_8_float + var_2_float; // 0x51 Add2
	var_12_float = var_3_float; // 0x52 Mov
	var_13_float = var_4_float; // 0x53 Mov
	func_103(var_10_float, var_11_float, var_12_float, var_13_float); // 0x54 Call
	SetProperty(var_1_string, var_10_float); // 0x56 Func
	var_0_bool = 1; // 0x58 MovB
	return 4; // 0x59 Return
}


func_42(var_21_float)
{
	var_22_float = 0; var_23_float = 0; var_24_float = 0; var_25_float = 0; var_26_float = 0; var_27_float = 0; var_28_float = 0; var_29_float = 0; // 0x2a PushV
	GetGameTime(var_26_float); // 0x2b Func
	var_27_float = var_26_float + var_21_float; // 0x2d Add2
	var_28_float = var_26_float; // 0x2e Mov
	
Label_47:
	sync(); // 0x2f Func
	GetGameTime(var_29_float); // 0x31 Func
	var_30_bool = var_29_float <= var_28_float; // 0x33 LE
	if(var_30_bool == 0) goto Label_54; // 0x34 JumpB
	goto Label_69; // 0x35 Jump
	
Label_69:
	goto Label_47; // 0x45 Jump
	
Label_54:
	var_31_bool = var_29_float >= var_27_float; // 0x36 GE
	if(var_31_bool == 0) goto Label_62; // 0x37 JumpB
	var_32_bool = 0; var_33_float = 0; // 0x38 PushV
	var_33_float = var_27_float - var_28_float; // 0x39 Sub2
	func_19(var_32_bool, var_33_float); // 0x3a Call
	goto Label_70; // 0x3c Jump
	
Label_70:
	return 8; // 0x46 Return
	
Label_62:
	var_54_bool = 0; var_55_float = 0; // 0x3e PushV
	var_55_float = var_29_float - var_28_float; // 0x3f Sub2
	func_19(var_54_bool, var_55_float); // 0x40 Call
	if(var_54_bool == 0) goto Label_68; // 0x42 JumpB
	goto Label_70; // 0x43 Jump
	
Label_68:
	var_28_float = var_29_float; // 0x44 Mov
}


func_19(var_32_bool, var_33_float)
{
	var_34_bool = 0; // 0x14 PushV
	func_90(var_34_bool); // 0x15 Call
	if(var_34_bool == 0) goto Label_40; // 0x17 JumpB
	var_42_bool = 0; var_43_string = ""; var_44_float = 0; var_45_float = 0; var_46_float = 0; // 0x18 PushV
	var_43_string = "health"; // 0x19 MovS
	var_47_float = 0.1; // 0x1a PushF
	var_44_float = var_33_float * var_47_float; // 0x1b Mult2
	var_45_float = 0; // 0x1c MovI
	var_46_float = 1; // 0x1d MovI
	func_71(var_42_bool, var_43_string, var_44_float, var_45_float, var_46_float); // 0x1e Call
	var_48_bool = 0; var_49_string = ""; var_50_float = 0; var_51_float = 0; var_52_float = 0; // 0x20 PushV
	var_49_string = "tiredness"; // 0x21 MovS
	var_53_float = -0.1; // 0x22 PushF
	var_50_float = var_33_float * var_53_float; // 0x23 Mult2
	var_51_float = 0; // 0x24 MovI
	var_52_float = 1; // 0x25 MovI
	func_71(var_48_bool, var_49_string, var_50_float, var_51_float, var_52_float); // 0x26 Call
	
Label_40:
	var_32_bool = 0; // 0x28 MovB
	return 0; // 0x29 Return
}


func_90(var_34_bool)
{
	var_35_bool = 0; var_36_bool = 0; var_37_bool = 0; var_38_bool = 0; // 0x5a PushV
	var_39_string = "sleeping"; // 0x5b PushS
	HasProperty(var_39_string, var_37_bool); // 0x5c Func
	var_40_bool = var_37_bool == 0; // 0x5e Not
	if(var_40_bool == 0) goto Label_98; // 0x5f JumpB
	var_34_bool = 0; // 0x60 MovB
	return 4; // 0x61 Return
	
Label_98:
	var_41_string = "sleeping"; // 0x62 PushS
	GetProperty(var_41_string, var_38_bool); // 0x63 Func
	var_34_bool = var_38_bool; // 0x65 Mov
	return 4; // 0x66 Return
}


