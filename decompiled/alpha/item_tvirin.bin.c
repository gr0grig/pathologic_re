main()
{
	var_0_bool = 0; var_1_string = ""; var_2_float = 0; var_3_float = 0; var_4_float = 0; // 0x0 PushV
	var_1_string = "health"; // 0x1 MovS
	var_2_float = 0.05; // 0x2 MovF
	var_3_float = 0; // 0x3 MovI
	var_4_float = 1; // 0x4 MovI
	func_70(var_0_bool, var_1_string, var_2_float, var_3_float, var_4_float); // 0x5 Call
	var_16_bool = 0; var_17_string = ""; var_18_float = 0; var_19_float = 0; var_20_float = 0; // 0x7 PushV
	var_17_string = "immunity"; // 0x8 MovS
	var_18_float = 0.05; // 0x9 MovF
	var_19_float = 0; // 0xa MovI
	var_20_float = 1; // 0xb MovI
	func_70(var_16_bool, var_17_string, var_18_float, var_19_float, var_20_float); // 0xc Call
	var_21_bool = 0; var_22_string = ""; var_23_float = 0; var_24_float = 0; var_25_float = 0; // 0xe PushV
	var_22_string = "tiredness"; // 0xf MovS
	var_23_float = 0.05; // 0x10 MovF
	var_24_float = 0; // 0x11 MovI
	var_25_float = 1; // 0x12 MovI
	func_70(var_21_bool, var_22_string, var_23_float, var_24_float, var_25_float); // 0x13 Call
	var_26_float = 0; // 0x15 PushV
	var_26_float = 12.0; // 0x16 MovF
	func_41(var_26_float); // 0x17 Call
	return 0; // 0x19 Return
}


func_102(var_10_float, var_11_float, var_12_float, var_13_float)
{
	var_14_bool = var_11_float < var_12_float; // 0x67 LT
	if(var_14_bool == 0) goto Label_107; // 0x68 JumpB
	var_10_float = var_12_float; // 0x69 Mov
	return 0; // 0x6a Return
	
Label_107:
	var_15_bool = var_11_float > var_13_float; // 0x6b GT
	if(var_15_bool == 0) goto Label_111; // 0x6c JumpB
	var_10_float = var_13_float; // 0x6d Mov
	return 0; // 0x6e Return
	
Label_111:
	var_10_float = var_11_float; // 0x6f Mov
	return 0; // 0x70 Return
}


func_70(var_0_bool, var_1_string, var_2_float, var_3_float, var_4_float)
{
	var_5_bool = 0; var_6_float = 0; var_7_bool = 0; var_8_float = 0; // 0x46 PushV
	HasProperty(var_1_string, var_7_bool); // 0x47 Func
	var_9_bool = var_7_bool == 0; // 0x49 Not
	if(var_9_bool == 0) goto Label_77; // 0x4a JumpB
	var_0_bool = 0; // 0x4b MovB
	return 4; // 0x4c Return
	
Label_77:
	GetProperty(var_1_string, var_8_float); // 0x4d Func
	var_10_float = 0; var_11_float = 0; var_12_float = 0; var_13_float = 0; // 0x4f PushV
	var_11_float = var_8_float + var_2_float; // 0x50 Add2
	var_12_float = var_3_float; // 0x51 Mov
	var_13_float = var_4_float; // 0x52 Mov
	func_102(var_10_float, var_11_float, var_12_float, var_13_float); // 0x53 Call
	SetProperty(var_1_string, var_10_float); // 0x55 Func
	var_0_bool = 1; // 0x57 MovB
	return 4; // 0x58 Return
}


func_41(var_26_float)
{
	var_27_float = 0; var_28_float = 0; var_29_float = 0; var_30_float = 0; var_31_float = 0; var_32_float = 0; var_33_float = 0; var_34_float = 0; // 0x29 PushV
	GetGameTime(var_31_float); // 0x2a Func
	var_32_float = var_31_float + var_26_float; // 0x2c Add2
	var_33_float = var_31_float; // 0x2d Mov
	
Label_46:
	sync(); // 0x2e Func
	GetGameTime(var_34_float); // 0x30 Func
	var_35_bool = var_34_float <= var_33_float; // 0x32 LE
	if(var_35_bool == 0) goto Label_53; // 0x33 JumpB
	goto Label_68; // 0x34 Jump
	
Label_68:
	goto Label_46; // 0x44 Jump
	
Label_53:
	var_36_bool = var_34_float >= var_32_float; // 0x35 GE
	if(var_36_bool == 0) goto Label_61; // 0x36 JumpB
	var_37_bool = 0; var_38_float = 0; // 0x37 PushV
	var_38_float = var_32_float - var_33_float; // 0x38 Sub2
	func_26(var_37_bool, var_38_float); // 0x39 Call
	goto Label_69; // 0x3b Jump
	
Label_69:
	return 8; // 0x45 Return
	
Label_61:
	var_53_bool = 0; var_54_float = 0; // 0x3d PushV
	var_54_float = var_34_float - var_33_float; // 0x3e Sub2
	func_26(var_53_bool, var_54_float); // 0x3f Call
	if(var_53_bool == 0) goto Label_67; // 0x41 JumpB
	goto Label_69; // 0x42 Jump
	
Label_67:
	var_33_float = var_34_float; // 0x43 Mov
}


func_89(var_39_bool)
{
	var_40_bool = 0; var_41_bool = 0; var_42_bool = 0; var_43_bool = 0; // 0x59 PushV
	var_44_string = "sleeping"; // 0x5a PushS
	HasProperty(var_44_string, var_42_bool); // 0x5b Func
	var_45_bool = var_42_bool == 0; // 0x5d Not
	if(var_45_bool == 0) goto Label_97; // 0x5e JumpB
	var_39_bool = 0; // 0x5f MovB
	return 4; // 0x60 Return
	
Label_97:
	var_46_string = "sleeping"; // 0x61 PushS
	GetProperty(var_46_string, var_43_bool); // 0x62 Func
	var_39_bool = var_43_bool; // 0x64 Mov
	return 4; // 0x65 Return
}


func_26(var_37_bool, var_38_float)
{
	var_39_bool = 0; // 0x1b PushV
	func_89(var_39_bool); // 0x1c Call
	if(var_39_bool == 0) goto Label_39; // 0x1e JumpB
	var_47_bool = 0; var_48_string = ""; var_49_float = 0; var_50_float = 0; var_51_float = 0; // 0x1f PushV
	var_48_string = "tiredness"; // 0x20 MovS
	var_52_float = -0.1; // 0x21 PushF
	var_49_float = var_38_float * var_52_float; // 0x22 Mult2
	var_50_float = 0; // 0x23 MovI
	var_51_float = 1; // 0x24 MovI
	func_70(var_47_bool, var_48_string, var_49_float, var_50_float, var_51_float); // 0x25 Call
	
Label_39:
	var_37_bool = 0; // 0x27 MovB
	return 0; // 0x28 Return
}


