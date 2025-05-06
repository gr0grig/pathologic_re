main()
{
	var_0_float = 0; var_1_float = 0; var_2_float = 0; var_3_float = 0; var_4_float = 0; var_5_float = 0; // 0x0 PushV
	var_6_bool = 0; var_7_string = ""; var_8_float = 0; var_9_float = 0; var_10_float = 0; // 0x1 PushV
	var_7_string = "health"; // 0x2 MovS
	var_8_float = -0.25; // 0x3 MovF
	var_9_float = 0; // 0x4 MovI
	var_10_float = 1; // 0x5 MovI
	func_119(var_6_bool, var_7_string, var_8_float, var_9_float, var_10_float); // 0x6 Call
	var_22_bool = 0; // 0x8 PushV
	func_44(var_22_bool); // 0x9 Call
	var_46_string = "disease"; // 0xb PushS
	GetProperty(var_46_string, var_3_float); // 0xc Func
	var_47_string = "disease"; // 0xe PushS
	var_48_float = 0.5; // 0xf PushF
	var_49_float = var_3_float * var_48_float; // 0x10 Mult
	SetProperty(var_47_string, var_49_float); // 0x11 Func
	var_50_string = "DiseaseSpeed"; // 0x13 PushS
	GetProperty(var_50_string, var_4_float); // 0x14 Func
	var_51_float = 0.5; // 0x16 PushF
	var_5_float = var_4_float * var_51_float; // 0x17 Mult2
	var_52_string = "DiseaseSpeed"; // 0x18 PushS
	var_53_int = var_4_float - var_5_float; // 0x19 Sub
	SetProperty(var_52_string, var_53_int); // 0x1a Func
	func_39(); // 0x1d Call
	var_75_string = "DiseaseSpeed"; // 0x1f PushS
	GetProperty(var_75_string, var_4_float); // 0x20 Func
	var_76_string = "DiseaseSpeed"; // 0x22 PushS
	var_77_int = var_4_float + var_5_float; // 0x23 Add
	SetProperty(var_76_string, var_77_int); // 0x24 Func
	return 6; // 0x26 Return
}


func_39()
{
	var_54_float = 0; // 0x27 PushV
	var_54_float = 6.0; // 0x28 MovF
	func_90(var_54_float); // 0x29 Call
	return 0; // 0x2b Return
}


func_138(var_16_float, var_17_float, var_18_float, var_19_float)
{
	var_20_bool = var_17_float < var_18_float; // 0x8b LT
	if(var_20_bool == 0) goto Label_143; // 0x8c JumpB
	var_16_float = var_18_float; // 0x8d Mov
	return 0; // 0x8e Return
	
Label_143:
	var_21_bool = var_17_float > var_19_float; // 0x8f GT
	if(var_21_bool == 0) goto Label_147; // 0x90 JumpB
	var_16_float = var_19_float; // 0x91 Mov
	return 0; // 0x92 Return
	
Label_147:
	var_16_float = var_17_float; // 0x93 Mov
	return 0; // 0x94 Return
}


func_44(var_22_bool)
{
	var_23_float = 0; var_24_float = 0; var_25_float = 0; var_26_float = 0; var_27_float = 0; var_28_float = 0; var_29_float = 0; var_30_float = 0; // 0x2c PushV
	var_31_string = "disease"; // 0x2d PushS
	GetProperty(var_31_string, var_27_float); // 0x2e Func
	var_32_bool = 0; // 0x30 PushV
	var_32_bool = 0; // 0x31 MovB
	var_33_float = 0.8; // 0x32 PushF
	var_34_bool = var_27_float >= var_33_float; // 0x33 GE
	if(var_34_bool == 0) goto Label_57; // 0x34 JumpB
	var_35_float = 0.95; // 0x35 PushF
	var_36_bool = var_27_float <= var_35_float; // 0x36 LE
	if(var_36_bool == 0) goto Label_57; // 0x37 JumpB
	var_32_bool = 1; // 0x38 MovB
	
Label_57:
	if(var_32_bool == 0) goto Label_77; // 0x39 JumpB
	var_37_string = "hunger"; // 0x3a PushS
	GetProperty(var_37_string, var_28_float); // 0x3b Func
	var_38_float = 0.33; // 0x3d PushF
	var_39_int = 1; // 0x3e PushI
	var_40_float = 1.0; // 0x3f PushF
	var_41_float = var_40_float * var_28_float; // 0x40 Mult
	var_42_int = var_39_int + var_41_float; // 0x41 Add
	var_29_float = var_38_float * var_42_int; // 0x42 Mult2
	rand(var_30_float); // 0x43 Func
	var_43_bool = var_30_float < var_29_float; // 0x45 LT
	if(var_43_bool == 0) goto Label_77; // 0x46 JumpB
	var_44_string = "disease"; // 0x47 PushS
	var_45_int = 0; // 0x48 PushI
	SetProperty(var_44_string, var_45_int); // 0x49 Func
	var_22_bool = 1; // 0x4b MovB
	return 8; // 0x4c Return
	
Label_77:
	var_22_bool = 0; // 0x4d MovB
	return 8; // 0x4e Return
}


func_79(var_65_bool, var_66_float)
{
	var_67_bool = 0; var_68_string = ""; var_69_float = 0; var_70_float = 0; var_71_float = 0; // 0x50 PushV
	var_68_string = "health"; // 0x51 MovS
	var_72_float = -0.05; // 0x52 PushF
	var_69_float = var_66_float * var_72_float; // 0x53 Mult2
	var_70_float = 0; // 0x54 MovI
	var_71_float = 1; // 0x55 MovI
	func_119(var_67_bool, var_68_string, var_69_float, var_70_float, var_71_float); // 0x56 Call
	var_65_bool = 0; // 0x58 MovB
	return 0; // 0x59 Return
}


func_119(var_6_bool, var_7_string, var_8_float, var_9_float, var_10_float)
{
	var_11_bool = 0; var_12_float = 0; var_13_bool = 0; var_14_float = 0; // 0x77 PushV
	HasProperty(var_7_string, var_13_bool); // 0x78 Func
	var_15_bool = var_13_bool == 0; // 0x7a Not
	if(var_15_bool == 0) goto Label_126; // 0x7b JumpB
	var_6_bool = 0; // 0x7c MovB
	return 4; // 0x7d Return
	
Label_126:
	GetProperty(var_7_string, var_14_float); // 0x7e Func
	var_16_float = 0; var_17_float = 0; var_18_float = 0; var_19_float = 0; // 0x80 PushV
	var_17_float = var_14_float + var_8_float; // 0x81 Add2
	var_18_float = var_9_float; // 0x82 Mov
	var_19_float = var_10_float; // 0x83 Mov
	func_138(var_16_float, var_17_float, var_18_float, var_19_float); // 0x84 Call
	SetProperty(var_7_string, var_16_float); // 0x86 Func
	var_6_bool = 1; // 0x88 MovB
	return 4; // 0x89 Return
}


func_90(var_54_float)
{
	var_55_float = 0; var_56_float = 0; var_57_float = 0; var_58_float = 0; var_59_float = 0; var_60_float = 0; var_61_float = 0; var_62_float = 0; // 0x5a PushV
	GetGameTime(var_59_float); // 0x5b Func
	var_60_float = var_59_float + var_54_float; // 0x5d Add2
	var_61_float = var_59_float; // 0x5e Mov
	
Label_95:
	sync(); // 0x5f Func
	GetGameTime(var_62_float); // 0x61 Func
	var_63_bool = var_62_float <= var_61_float; // 0x63 LE
	if(var_63_bool == 0) goto Label_102; // 0x64 JumpB
	goto Label_117; // 0x65 Jump
	
Label_117:
	goto Label_95; // 0x75 Jump
	
Label_102:
	var_64_bool = var_62_float >= var_60_float; // 0x66 GE
	if(var_64_bool == 0) goto Label_110; // 0x67 JumpB
	var_65_bool = 0; var_66_float = 0; // 0x68 PushV
	var_66_float = var_60_float - var_61_float; // 0x69 Sub2
	func_79(var_65_bool, var_66_float); // 0x6a Call
	goto Label_118; // 0x6c Jump
	
Label_118:
	return 8; // 0x76 Return
	
Label_110:
	var_73_bool = 0; var_74_float = 0; // 0x6e PushV
	var_74_float = var_62_float - var_61_float; // 0x6f Sub2
	func_79(var_73_bool, var_74_float); // 0x70 Call
	if(var_73_bool == 0) goto Label_116; // 0x72 JumpB
	goto Label_118; // 0x73 Jump
	
Label_116:
	var_61_float = var_62_float; // 0x74 Mov
}


