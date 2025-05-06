main()
{
	var_0_bool = 0; var_1_float = 0; var_2_float = 0; var_3_int = 0; var_4_float = 0; var_5_float = 0; var_6_float = 0; var_7_float = 0; var_8_float = 0; var_9_bool = 0; var_10_float = 0; var_11_float = 0; var_12_int = 0; var_13_float = 0; var_14_float = 0; var_15_float = 0; var_16_float = 0; var_17_float = 0; // 0x0 PushV
	
Label_1:
	var_18_float = 1.0; // 0x1 PushF
	Sleep(var_18_float); // 0x2 Func
	var_19_bool = 0; // 0x4 PushV
	func_148(var_19_bool); // 0x5 NEW_2
	var_9_bool = var_19_bool; // 0x6 Mov
	var_27_bool = var_9_bool; // 0x8 Push
	if(var_27_bool == 0) goto Label_12; // 0x9 JumpB
	var_10_float = 200.0; // 0xa MovF
	goto Label_13; // 0xb Jump
	
Label_13:
	GetGameTimeScale(var_11_float); // 0xd Func
	var_10_float = var_10_float * var_11_float; // 0xf Mult2
	var_28_string = "DiseaseSpeed"; // 0x10 PushS
	GetProperty(var_28_string, var_12_int); // 0x11 Func
	var_29_bool = 0; var_30_string = ""; var_31_float = 0; var_32_float = 0; var_33_float = 0; // 0x13 PushV
	var_30_string = "hunger"; // 0x14 MovS
	var_34_float = 0.04167; // 0x15 PushF
	var_31_float = var_10_float * var_34_float; // 0x16 Mult2
	var_32_float = 0; // 0x17 MovI
	var_33_float = 1; // 0x18 MovI
	func_129(var_29_bool, var_30_string, var_31_float, var_32_float, var_33_float); // 0x19 NEW_2
	var_46_string = "hunger"; // 0x1b PushS
	GetProperty(var_46_string, var_13_float); // 0x1c Func
	var_47_string = "immunity"; // 0x1e PushS
	GetProperty(var_47_string, var_14_float); // 0x1f Func
	var_48_float = 0.5; // 0x21 PushF
	var_49_bool = var_14_float < var_48_float; // 0x22 LT
	if(var_49_bool == 0) goto Label_47; // 0x23 JumpB
	var_50_float = 0.125; // 0x24 PushF
	var_51_float = var_50_float * var_10_float; // 0x25 Mult
	var_14_float = var_14_float + var_51_float; // 0x26 Add2
	var_52_float = 0.5; // 0x27 PushF
	var_53_bool = var_14_float > var_52_float; // 0x28 GT
	if(var_53_bool == 0) goto Label_43; // 0x29 JumpB
	var_14_float = 0.5; // 0x2a MovF
	
Label_43:
	var_54_string = "immunity"; // 0x2b PushS
	SetProperty(var_54_string, var_14_float); // 0x2c Func
	goto Label_60; // 0x2e Jump
	
Label_60:
	var_55_string = "disease"; // 0x3c PushS
	GetProperty(var_55_string, var_15_float); // 0x3d Func
	var_56_float = 0.001; // 0x3f PushF
	var_57_bool = var_15_float < var_56_float; // 0x40 LT
	if(var_57_bool == 0) goto Label_68; // 0x41 JumpB
	var_15_float = 0; // 0x42 MovI
	goto Label_84; // 0x43 Jump
	
Label_84:
	var_58_string = "disease"; // 0x54 PushS
	SetProperty(var_58_string, var_15_float); // 0x55 Func
	var_59_bool = 0; var_60_string = ""; var_61_float = 0; var_62_float = 0; var_63_float = 0; // 0x57 PushV
	var_60_string = "tiredness"; // 0x58 MovS
	var_64_bool = var_9_bool; // 0x59 Push
	if(var_64_bool == 0) goto Label_93; // 0x5a JumpB
	var_65_float = -0.125; // 0x5b PushF
	goto Label_94; // 0x5c Jump
	
Label_94:
	var_61_float = var_10_float * var_65_float; // 0x5e Mult2
	var_62_float = 0; // 0x5f MovI
	var_63_float = 1; // 0x60 MovI
	func_129(var_59_bool, var_60_string, var_61_float, var_62_float, var_63_float); // 0x61 NEW_2
	var_66_string = "tiredness"; // 0x63 PushS
	GetProperty(var_66_string, var_16_float); // 0x64 Func
	var_17_float = 0; // 0x66 MovI
	var_67_float = 0.001; // 0x67 PushF
	var_68_bool = var_15_float >= var_67_float; // 0x68 GE
	if(var_68_bool == 0) goto Label_109; // 0x69 JumpB
	var_69_float = 0.16667; // 0x6a PushF
	var_70_float = var_15_float * var_69_float; // 0x6b Mult
	var_17_float = var_17_float + var_70_float; // 0x6c Add2
	
Label_109:
	var_71_int = 1; // 0x6d PushI
	var_72_bool = var_13_float == var_71_int; // 0x6e Eq
	if(var_72_bool == 0) goto Label_114; // 0x6f JumpB
	var_73_float = 0.33333; // 0x70 PushF
	var_17_float = var_17_float + var_73_float; // 0x71 Add2
	
Label_114:
	var_74_int = 1; // 0x72 PushI
	var_75_bool = var_16_float == var_74_int; // 0x73 Eq
	if(var_75_bool == 0) goto Label_119; // 0x74 JumpB
	var_76_float = 0.16667; // 0x75 PushF
	var_17_float = var_17_float + var_76_float; // 0x76 Add2
	
Label_119:
	var_77_bool = 0; var_78_string = ""; var_79_float = 0; var_80_float = 0; var_81_float = 0; // 0x77 PushV
	var_78_string = "health"; // 0x78 MovS
	var_82_int = -var_10_float; // 0x79 Neg
	var_79_float = var_82_int * var_17_float; // 0x7a Mult2
	var_80_float = 0; // 0x7b MovI
	var_81_float = 1; // 0x7c MovI
	func_129(var_77_bool, var_78_string, var_79_float, var_80_float, var_81_float); // 0x7d NEW_2
	goto Label_1; // 0x7f Jump
	
Label_93:
	var_83_float = 0.0625; // 0x5d PushF
	
Label_68:
	var_84_float = 0.33333; // 0x44 PushF
	var_85_bool = var_15_float < var_84_float; // 0x45 LT
	if(var_85_bool == 0) goto Label_76; // 0x46 JumpB
	var_86_float = 0.00694; // 0x47 PushF
	var_87_float = var_86_float * var_10_float; // 0x48 Mult
	var_88_float = var_87_float / var_12_int; // 0x49 Div
	var_15_float = var_15_float + var_88_float; // 0x4a Add2
	goto Label_80; // 0x4b Jump
	
Label_80:
	var_89_int = 1; // 0x50 PushI
	var_90_bool = var_15_float > var_89_int; // 0x51 GT
	if(var_90_bool == 0) goto Label_84; // 0x52 JumpB
	var_15_float = 1; // 0x53 MovI
	
Label_76:
	var_91_float = 0.04167; // 0x4c PushF
	var_92_float = var_91_float * var_10_float; // 0x4d Mult
	var_93_float = var_92_float / var_12_int; // 0x4e Div
	var_15_float = var_15_float + var_93_float; // 0x4f Add2
	
Label_47:
	var_94_float = 0.5; // 0x2f PushF
	var_95_bool = var_14_float > var_94_float; // 0x30 GT
	if(var_95_bool == 0) goto Label_60; // 0x31 JumpB
	var_96_float = 0.0625; // 0x32 PushF
	var_97_float = var_96_float * var_10_float; // 0x33 Mult
	var_14_float = var_14_float - var_97_float; // 0x34 Sub2
	var_98_int = 0; // 0x35 PushI
	var_99_bool = var_14_float < var_98_int; // 0x36 LT
	if(var_99_bool == 0) goto Label_57; // 0x37 JumpB
	var_14_float = 0; // 0x38 MovI
	
Label_57:
	var_100_string = "immunity"; // 0x39 PushS
	SetProperty(var_100_string, var_14_float); // 0x3a Func
	
Label_12:
	var_10_float = 1.0; // 0xc MovF
}


func_129(var_29_bool, var_30_string, var_31_float, var_32_float, var_33_float)
{
	var_35_bool = 0; var_36_float = 0; var_37_bool = 0; var_38_float = 0; // 0x81 PushV
	HasProperty(var_30_string, var_37_bool); // 0x82 Func
	var_39_bool = var_37_bool == 0; // 0x84 Not
	if(var_39_bool == 0) goto Label_136; // 0x85 JumpB
	var_29_bool = 0; // 0x86 MovB
	return 4; // 0x87 Return
	
Label_136:
	GetProperty(var_30_string, var_38_float); // 0x88 Func
	var_40_float = 0; var_41_float = 0; var_42_float = 0; var_43_float = 0; // 0x8a PushV
	var_41_float = var_38_float + var_31_float; // 0x8b Add2
	var_42_float = var_32_float; // 0x8c Mov
	var_43_float = var_33_float; // 0x8d Mov
	func_161(var_40_float, var_41_float, var_42_float, var_43_float); // 0x8e NEW_2
	SetProperty(var_30_string, var_40_float); // 0x90 Func
	var_29_bool = 1; // 0x92 MovB
	return 4; // 0x93 Return
}


func_161(var_40_float, var_41_float, var_42_float, var_43_float)
{
	var_44_bool = var_41_float < var_42_float; // 0xa2 LT
	if(var_44_bool == 0) goto Label_166; // 0xa3 JumpB
	var_40_float = var_42_float; // 0xa4 Mov
	return 0; // 0xa5 Return
	
Label_166:
	var_45_bool = var_41_float > var_43_float; // 0xa6 GT
	if(var_45_bool == 0) goto Label_170; // 0xa7 JumpB
	var_40_float = var_43_float; // 0xa8 Mov
	return 0; // 0xa9 Return
	
Label_170:
	var_40_float = var_41_float; // 0xaa Mov
	return 0; // 0xab Return
}


func_148(var_19_bool)
{
	var_20_bool = 0; var_21_bool = 0; var_22_bool = 0; var_23_bool = 0; // 0x94 PushV
	var_24_string = "sleeping"; // 0x95 PushS
	HasProperty(var_24_string, var_22_bool); // 0x96 Func
	var_25_bool = var_22_bool == 0; // 0x98 Not
	if(var_25_bool == 0) goto Label_156; // 0x99 JumpB
	var_19_bool = 0; // 0x9a MovB
	return 4; // 0x9b Return
	
Label_156:
	var_26_string = "sleeping"; // 0x9c PushS
	GetProperty(var_26_string, var_23_bool); // 0x9d Func
	var_19_bool = var_23_bool; // 0x9f Mov
	return 4; // 0xa0 Return
}


