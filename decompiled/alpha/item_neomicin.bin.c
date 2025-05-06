main()
{
	var_0_float = 0; var_1_float = 0; // 0x0 PushV
	var_2_bool = 0; // 0x1 PushV
	func_23(var_2_bool); // 0x2 Call
	var_26_bool = var_2_bool == 0; // 0x4 Not
	if(var_26_bool == 0) goto Label_14; // 0x5 JumpB
	var_27_string = "disease"; // 0x6 PushS
	GetProperty(var_27_string, var_1_float); // 0x7 Func
	var_28_string = "disease"; // 0x9 PushS
	var_29_float = 0.5; // 0xa PushF
	var_30_float = var_1_float * var_29_float; // 0xb Mult
	SetProperty(var_28_string, var_30_float); // 0xc Func
	
Label_14:
	func_18(); // 0xf Call
	return 2; // 0x11 Return
}


func_98(var_44_bool, var_45_string, var_46_float, var_47_float, var_48_float)
{
	var_50_bool = 0; var_51_float = 0; var_52_bool = 0; var_53_float = 0; // 0x62 PushV
	HasProperty(var_45_string, var_52_bool); // 0x63 Func
	var_54_bool = var_52_bool == 0; // 0x65 Not
	if(var_54_bool == 0) goto Label_105; // 0x66 JumpB
	var_44_bool = 0; // 0x67 MovB
	return 4; // 0x68 Return
	
Label_105:
	GetProperty(var_45_string, var_53_float); // 0x69 Func
	var_55_float = 0; var_56_float = 0; var_57_float = 0; var_58_float = 0; // 0x6b PushV
	var_56_float = var_53_float + var_46_float; // 0x6c Add2
	var_57_float = var_47_float; // 0x6d Mov
	var_58_float = var_48_float; // 0x6e Mov
	func_117(var_55_float, var_56_float, var_57_float, var_58_float); // 0x6f Call
	SetProperty(var_45_string, var_55_float); // 0x71 Func
	var_44_bool = 1; // 0x73 MovB
	return 4; // 0x74 Return
}


func_69(var_31_float)
{
	var_32_float = 0; var_33_float = 0; var_34_float = 0; var_35_float = 0; var_36_float = 0; var_37_float = 0; var_38_float = 0; var_39_float = 0; // 0x45 PushV
	GetGameTime(var_36_float); // 0x46 Func
	var_37_float = var_36_float + var_31_float; // 0x48 Add2
	var_38_float = var_36_float; // 0x49 Mov
	
Label_74:
	sync(); // 0x4a Func
	GetGameTime(var_39_float); // 0x4c Func
	var_40_bool = var_39_float <= var_38_float; // 0x4e LE
	if(var_40_bool == 0) goto Label_81; // 0x4f JumpB
	goto Label_96; // 0x50 Jump
	
Label_96:
	goto Label_74; // 0x60 Jump
	
Label_81:
	var_41_bool = var_39_float >= var_37_float; // 0x51 GE
	if(var_41_bool == 0) goto Label_89; // 0x52 JumpB
	var_42_bool = 0; var_43_float = 0; // 0x53 PushV
	var_43_float = var_37_float - var_38_float; // 0x54 Sub2
	func_58(var_42_bool, var_43_float); // 0x55 Call
	goto Label_97; // 0x57 Jump
	
Label_97:
	return 8; // 0x61 Return
	
Label_89:
	var_61_bool = 0; var_62_float = 0; // 0x59 PushV
	var_62_float = var_39_float - var_38_float; // 0x5a Sub2
	func_58(var_61_bool, var_62_float); // 0x5b Call
	if(var_61_bool == 0) goto Label_95; // 0x5d JumpB
	goto Label_97; // 0x5e Jump
	
Label_95:
	var_38_float = var_39_float; // 0x5f Mov
}


func_18()
{
	var_31_float = 0; // 0x12 PushV
	var_31_float = 12.0; // 0x13 MovF
	func_69(var_31_float); // 0x14 Call
	return 0; // 0x16 Return
}


func_117(var_55_float, var_56_float, var_57_float, var_58_float)
{
	var_59_bool = var_56_float < var_57_float; // 0x76 LT
	if(var_59_bool == 0) goto Label_122; // 0x77 JumpB
	var_55_float = var_57_float; // 0x78 Mov
	return 0; // 0x79 Return
	
Label_122:
	var_60_bool = var_56_float > var_58_float; // 0x7a GT
	if(var_60_bool == 0) goto Label_126; // 0x7b JumpB
	var_55_float = var_58_float; // 0x7c Mov
	return 0; // 0x7d Return
	
Label_126:
	var_55_float = var_56_float; // 0x7e Mov
	return 0; // 0x7f Return
}


func_23(var_2_bool)
{
	var_3_float = 0; var_4_float = 0; var_5_float = 0; var_6_float = 0; var_7_float = 0; var_8_float = 0; var_9_float = 0; var_10_float = 0; // 0x17 PushV
	var_11_string = "disease"; // 0x18 PushS
	GetProperty(var_11_string, var_7_float); // 0x19 Func
	var_12_bool = 0; // 0x1b PushV
	var_12_bool = 0; // 0x1c MovB
	var_13_float = 0.0; // 0x1d PushF
	var_14_bool = var_7_float >= var_13_float; // 0x1e GE
	if(var_14_bool == 0) goto Label_36; // 0x1f JumpB
	var_15_float = 0.4; // 0x20 PushF
	var_16_bool = var_7_float <= var_15_float; // 0x21 LE
	if(var_16_bool == 0) goto Label_36; // 0x22 JumpB
	var_12_bool = 1; // 0x23 MovB
	
Label_36:
	if(var_12_bool == 0) goto Label_56; // 0x24 JumpB
	var_17_string = "hunger"; // 0x25 PushS
	GetProperty(var_17_string, var_8_float); // 0x26 Func
	var_18_float = 0.15; // 0x28 PushF
	var_19_int = 1; // 0x29 PushI
	var_20_float = 2.0; // 0x2a PushF
	var_21_float = var_20_float * var_8_float; // 0x2b Mult
	var_22_int = var_19_int + var_21_float; // 0x2c Add
	var_9_float = var_18_float * var_22_int; // 0x2d Mult2
	rand(var_10_float); // 0x2e Func
	var_23_bool = var_10_float < var_9_float; // 0x30 LT
	if(var_23_bool == 0) goto Label_56; // 0x31 JumpB
	var_24_string = "disease"; // 0x32 PushS
	var_25_int = 0; // 0x33 PushI
	SetProperty(var_24_string, var_25_int); // 0x34 Func
	var_2_bool = 1; // 0x36 MovB
	return 8; // 0x37 Return
	
Label_56:
	var_2_bool = 0; // 0x38 MovB
	return 8; // 0x39 Return
}


func_58(var_42_bool, var_43_float)
{
	var_44_bool = 0; var_45_string = ""; var_46_float = 0; var_47_float = 0; var_48_float = 0; // 0x3b PushV
	var_45_string = "health"; // 0x3c MovS
	var_49_float = -0.01; // 0x3d PushF
	var_46_float = var_43_float * var_49_float; // 0x3e Mult2
	var_47_float = 0; // 0x3f MovI
	var_48_float = 1; // 0x40 MovI
	func_98(var_44_bool, var_45_string, var_46_float, var_47_float, var_48_float); // 0x41 Call
	var_42_bool = 0; // 0x43 MovB
	return 0; // 0x44 Return
}


