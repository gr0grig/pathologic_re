main()
{
	var_0_float = 0; var_1_float = 0; var_2_float = 0; var_3_float = 0; // 0x0 PushV
	var_4_bool = 0; // 0x1 PushV
	func_36(var_4_bool); // 0x2 Call
	var_28_bool = 0; var_29_string = ""; var_30_float = 0; var_31_float = 0; var_32_float = 0; // 0x4 PushV
	var_29_string = "health"; // 0x5 MovS
	var_30_float = -0.05; // 0x6 MovF
	var_31_float = 0; // 0x7 MovI
	var_32_float = 1; // 0x8 MovI
	func_111(var_28_bool, var_29_string, var_30_float, var_31_float, var_32_float); // 0x9 Call
	var_44_string = "DiseaseSpeed"; // 0xb PushS
	GetProperty(var_44_string, var_2_float); // 0xc Func
	var_45_float = 0.5; // 0xe PushF
	var_3_float = var_2_float * var_45_float; // 0xf Mult2
	var_46_string = "DiseaseSpeed"; // 0x10 PushS
	var_47_int = var_2_float - var_3_float; // 0x11 Sub
	SetProperty(var_46_string, var_47_int); // 0x12 Func
	func_31(); // 0x15 Call
	var_69_string = "DiseaseSpeed"; // 0x17 PushS
	GetProperty(var_69_string, var_2_float); // 0x18 Func
	var_70_string = "DiseaseSpeed"; // 0x1a PushS
	var_71_int = var_2_float + var_3_float; // 0x1b Add
	SetProperty(var_70_string, var_71_int); // 0x1c Func
	return 4; // 0x1e Return
}


func_130(var_38_float, var_39_float, var_40_float, var_41_float)
{
	var_42_bool = var_39_float < var_40_float; // 0x83 LT
	if(var_42_bool == 0) goto Label_135; // 0x84 JumpB
	var_38_float = var_40_float; // 0x85 Mov
	return 0; // 0x86 Return
	
Label_135:
	var_43_bool = var_39_float > var_41_float; // 0x87 GT
	if(var_43_bool == 0) goto Label_139; // 0x88 JumpB
	var_38_float = var_41_float; // 0x89 Mov
	return 0; // 0x8a Return
	
Label_139:
	var_38_float = var_39_float; // 0x8b Mov
	return 0; // 0x8c Return
}


func_36(var_4_bool)
{
	var_5_float = 0; var_6_float = 0; var_7_float = 0; var_8_float = 0; var_9_float = 0; var_10_float = 0; var_11_float = 0; var_12_float = 0; // 0x24 PushV
	var_13_string = "disease"; // 0x25 PushS
	GetProperty(var_13_string, var_9_float); // 0x26 Func
	var_14_bool = 0; // 0x28 PushV
	var_14_bool = 0; // 0x29 MovB
	var_15_float = 0.3; // 0x2a PushF
	var_16_bool = var_9_float >= var_15_float; // 0x2b GE
	if(var_16_bool == 0) goto Label_49; // 0x2c JumpB
	var_17_float = 0.6; // 0x2d PushF
	var_18_bool = var_9_float <= var_17_float; // 0x2e LE
	if(var_18_bool == 0) goto Label_49; // 0x2f JumpB
	var_14_bool = 1; // 0x30 MovB
	
Label_49:
	if(var_14_bool == 0) goto Label_69; // 0x31 JumpB
	var_19_string = "hunger"; // 0x32 PushS
	GetProperty(var_19_string, var_10_float); // 0x33 Func
	var_20_float = 0.25; // 0x35 PushF
	var_21_int = 1; // 0x36 PushI
	var_22_float = 2.0; // 0x37 PushF
	var_23_float = var_22_float * var_10_float; // 0x38 Mult
	var_24_int = var_21_int + var_23_float; // 0x39 Add
	var_11_float = var_20_float * var_24_int; // 0x3a Mult2
	rand(var_12_float); // 0x3b Func
	var_25_bool = var_12_float < var_11_float; // 0x3d LT
	if(var_25_bool == 0) goto Label_69; // 0x3e JumpB
	var_26_string = "disease"; // 0x3f PushS
	var_27_int = 0; // 0x40 PushI
	SetProperty(var_26_string, var_27_int); // 0x41 Func
	var_4_bool = 1; // 0x43 MovB
	return 8; // 0x44 Return
	
Label_69:
	var_4_bool = 0; // 0x45 MovB
	return 8; // 0x46 Return
}


func_71(var_59_bool, var_60_float)
{
	var_61_bool = 0; var_62_string = ""; var_63_float = 0; var_64_float = 0; var_65_float = 0; // 0x48 PushV
	var_62_string = "health"; // 0x49 MovS
	var_66_float = -0.05; // 0x4a PushF
	var_63_float = var_60_float * var_66_float; // 0x4b Mult2
	var_64_float = 0; // 0x4c MovI
	var_65_float = 1; // 0x4d MovI
	func_111(var_61_bool, var_62_string, var_63_float, var_64_float, var_65_float); // 0x4e Call
	var_59_bool = 0; // 0x50 MovB
	return 0; // 0x51 Return
}


func_111(var_28_bool, var_29_string, var_30_float, var_31_float, var_32_float)
{
	var_33_bool = 0; var_34_float = 0; var_35_bool = 0; var_36_float = 0; // 0x6f PushV
	HasProperty(var_29_string, var_35_bool); // 0x70 Func
	var_37_bool = var_35_bool == 0; // 0x72 Not
	if(var_37_bool == 0) goto Label_118; // 0x73 JumpB
	var_28_bool = 0; // 0x74 MovB
	return 4; // 0x75 Return
	
Label_118:
	GetProperty(var_29_string, var_36_float); // 0x76 Func
	var_38_float = 0; var_39_float = 0; var_40_float = 0; var_41_float = 0; // 0x78 PushV
	var_39_float = var_36_float + var_30_float; // 0x79 Add2
	var_40_float = var_31_float; // 0x7a Mov
	var_41_float = var_32_float; // 0x7b Mov
	func_130(var_38_float, var_39_float, var_40_float, var_41_float); // 0x7c Call
	SetProperty(var_29_string, var_38_float); // 0x7e Func
	var_28_bool = 1; // 0x80 MovB
	return 4; // 0x81 Return
}


func_82(var_48_float)
{
	var_49_float = 0; var_50_float = 0; var_51_float = 0; var_52_float = 0; var_53_float = 0; var_54_float = 0; var_55_float = 0; var_56_float = 0; // 0x52 PushV
	GetGameTime(var_53_float); // 0x53 Func
	var_54_float = var_53_float + var_48_float; // 0x55 Add2
	var_55_float = var_53_float; // 0x56 Mov
	
Label_87:
	sync(); // 0x57 Func
	GetGameTime(var_56_float); // 0x59 Func
	var_57_bool = var_56_float <= var_55_float; // 0x5b LE
	if(var_57_bool == 0) goto Label_94; // 0x5c JumpB
	goto Label_109; // 0x5d Jump
	
Label_109:
	goto Label_87; // 0x6d Jump
	
Label_94:
	var_58_bool = var_56_float >= var_54_float; // 0x5e GE
	if(var_58_bool == 0) goto Label_102; // 0x5f JumpB
	var_59_bool = 0; var_60_float = 0; // 0x60 PushV
	var_60_float = var_54_float - var_55_float; // 0x61 Sub2
	func_71(var_59_bool, var_60_float); // 0x62 Call
	goto Label_110; // 0x64 Jump
	
Label_110:
	return 8; // 0x6e Return
	
Label_102:
	var_67_bool = 0; var_68_float = 0; // 0x66 PushV
	var_68_float = var_56_float - var_55_float; // 0x67 Sub2
	func_71(var_67_bool, var_68_float); // 0x68 Call
	if(var_67_bool == 0) goto Label_108; // 0x6a JumpB
	goto Label_110; // 0x6b Jump
	
Label_108:
	var_55_float = var_56_float; // 0x6c Mov
}


func_31()
{
	var_48_float = 0; // 0x1f PushV
	var_48_float = 6.0; // 0x20 MovF
	func_82(var_48_float); // 0x21 Call
	return 0; // 0x23 Return
}


