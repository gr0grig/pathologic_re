main()
{
	var_0_bool = 0; var_1_float = 0; var_2_float = 0; var_3_float = 0; var_4_float = 0; var_5_float = 0; var_6_float = 0; var_7_float = 0; var_8_float = 0; var_9_float = 0; var_10_bool = 0; var_11_float = 0; var_12_float = 0; var_13_float = 0; var_14_float = 0; var_15_float = 0; var_16_float = 0; var_17_float = 0; var_18_float = 0; var_19_float = 0; // 0x0 PushV
	
Label_1:
	var_20_float = 1.0; // 0x1 PushF
	Sleep(var_20_float); // 0x2 Func
	var_21_bool = 0; // 0x4 PushV
	func_122(var_21_bool); // 0x5 Call
	var_10_bool = var_21_bool; // 0x6 Mov
	var_29_bool = var_10_bool; // 0x8 Push
	if(var_29_bool == 0) goto Label_12; // 0x9 JumpB
	var_11_float = 200.0; // 0xa MovF
	goto Label_13; // 0xb Jump
	
Label_13:
	GetGameTimeScale(var_12_float); // 0xd Func
	var_11_float = var_11_float * var_12_float; // 0xf Mult2
	var_30_string = "DiseaseSpeed"; // 0x10 PushS
	GetProperty(var_30_string, var_13_float); // 0x11 Func
	var_31_float = 1.0; // 0x13 PushF
	var_13_float = var_31_float / var_31_float; // 0x14 Div2
	var_32_float = 0.7; // 0x15 PushF
	var_14_float = var_13_float * var_32_float; // 0x16 Mult2
	var_33_bool = 0; var_34_string = ""; var_35_float = 0; var_36_float = 0; var_37_float = 0; // 0x17 PushV
	var_34_string = "hunger"; // 0x18 MovS
	var_38_float = 0.04167; // 0x19 PushF
	var_35_float = var_11_float * var_38_float; // 0x1a Mult2
	var_36_float = 0; // 0x1b MovI
	var_37_float = 1; // 0x1c MovI
	func_103(var_33_bool, var_34_string, var_35_float, var_36_float, var_37_float); // 0x1d Call
	var_50_string = "hunger"; // 0x1f PushS
	GetProperty(var_50_string, var_15_float); // 0x20 Func
	var_51_bool = 0; var_52_string = ""; var_53_float = 0; var_54_float = 0; var_55_float = 0; // 0x22 PushV
	var_52_string = "immunity"; // 0x23 MovS
	var_56_int = -var_11_float; // 0x24 Neg
	var_57_float = 0.0625; // 0x25 PushF
	var_53_float = var_56_int * var_57_float; // 0x26 Mult2
	var_54_float = 0; // 0x27 MovI
	var_55_float = 1; // 0x28 MovI
	func_103(var_51_bool, var_52_string, var_53_float, var_54_float, var_55_float); // 0x29 Call
	var_58_string = "immunity"; // 0x2b PushS
	GetProperty(var_58_string, var_16_float); // 0x2c Func
	var_59_string = "disease"; // 0x2e PushS
	GetProperty(var_59_string, var_17_float); // 0x2f Func
	var_60_float = var_16_float * var_14_float; // 0x31 Mult
	var_61_int = var_13_float - var_60_float; // 0x32 Sub
	var_62_float = var_11_float * var_61_int; // 0x33 Mult
	var_63_float = var_62_float * var_17_float; // 0x34 Mult
	var_17_float = var_17_float + var_63_float; // 0x35 Add2
	var_64_float = 0.01; // 0x36 PushF
	var_65_bool = var_17_float < var_64_float; // 0x37 LT
	if(var_65_bool == 0) goto Label_59; // 0x38 JumpB
	var_17_float = 0; // 0x39 MovI
	goto Label_63; // 0x3a Jump
	
Label_63:
	var_66_string = "disease"; // 0x3f PushS
	SetProperty(var_66_string, var_17_float); // 0x40 Func
	var_67_bool = 0; var_68_string = ""; var_69_float = 0; var_70_float = 0; var_71_float = 0; // 0x42 PushV
	var_68_string = "tiredness"; // 0x43 MovS
	var_72_bool = var_10_bool; // 0x44 Push
	if(var_72_bool == 0) goto Label_72; // 0x45 JumpB
	var_73_float = -0.125; // 0x46 PushF
	goto Label_73; // 0x47 Jump
	
Label_73:
	var_69_float = var_11_float * var_73_float; // 0x49 Mult2
	var_70_float = 0; // 0x4a MovI
	var_71_float = 1; // 0x4b MovI
	func_103(var_67_bool, var_68_string, var_69_float, var_70_float, var_71_float); // 0x4c Call
	var_74_string = "tiredness"; // 0x4e PushS
	GetProperty(var_74_string, var_18_float); // 0x4f Func
	var_75_float = 0.16667; // 0x51 PushF
	var_19_float = var_17_float * var_75_float; // 0x52 Mult2
	var_76_int = 1; // 0x53 PushI
	var_77_bool = var_15_float == var_76_int; // 0x54 Eq
	if(var_77_bool == 0) goto Label_88; // 0x55 JumpB
	var_78_float = 0.33333; // 0x56 PushF
	var_19_float = var_19_float + var_78_float; // 0x57 Add2
	
Label_88:
	var_79_int = 1; // 0x58 PushI
	var_80_bool = var_18_float == var_79_int; // 0x59 Eq
	if(var_80_bool == 0) goto Label_93; // 0x5a JumpB
	var_81_float = 0.16667; // 0x5b PushF
	var_19_float = var_19_float + var_81_float; // 0x5c Add2
	
Label_93:
	var_82_bool = 0; var_83_string = ""; var_84_float = 0; var_85_float = 0; var_86_float = 0; // 0x5d PushV
	var_83_string = "health"; // 0x5e MovS
	var_87_int = -var_11_float; // 0x5f Neg
	var_84_float = var_87_int * var_19_float; // 0x60 Mult2
	var_85_float = 0; // 0x61 MovI
	var_86_float = 1; // 0x62 MovI
	func_103(var_82_bool, var_83_string, var_84_float, var_85_float, var_86_float); // 0x63 Call
	goto Label_1; // 0x65 Jump
	
Label_72:
	var_88_float = 0.0625; // 0x48 PushF
	
Label_59:
	var_89_int = 1; // 0x3b PushI
	var_90_bool = var_17_float > var_89_int; // 0x3c GT
	if(var_90_bool == 0) goto Label_63; // 0x3d JumpB
	var_17_float = 1; // 0x3e MovI
	
Label_12:
	var_11_float = 1.0; // 0xc MovF
}


func_135(var_44_float, var_45_float, var_46_float, var_47_float)
{
	var_48_bool = var_45_float < var_46_float; // 0x88 LT
	if(var_48_bool == 0) goto Label_140; // 0x89 JumpB
	var_44_float = var_46_float; // 0x8a Mov
	return 0; // 0x8b Return
	
Label_140:
	var_49_bool = var_45_float > var_47_float; // 0x8c GT
	if(var_49_bool == 0) goto Label_144; // 0x8d JumpB
	var_44_float = var_47_float; // 0x8e Mov
	return 0; // 0x8f Return
	
Label_144:
	var_44_float = var_45_float; // 0x90 Mov
	return 0; // 0x91 Return
}


func_122(var_21_bool)
{
	var_22_bool = 0; var_23_bool = 0; var_24_bool = 0; var_25_bool = 0; // 0x7a PushV
	var_26_string = "sleeping"; // 0x7b PushS
	HasProperty(var_26_string, var_24_bool); // 0x7c Func
	var_27_bool = var_24_bool == 0; // 0x7e Not
	if(var_27_bool == 0) goto Label_130; // 0x7f JumpB
	var_21_bool = 0; // 0x80 MovB
	return 4; // 0x81 Return
	
Label_130:
	var_28_string = "sleeping"; // 0x82 PushS
	GetProperty(var_28_string, var_25_bool); // 0x83 Func
	var_21_bool = var_25_bool; // 0x85 Mov
	return 4; // 0x86 Return
}


func_103(var_33_bool, var_34_string, var_35_float, var_36_float, var_37_float)
{
	var_39_bool = 0; var_40_float = 0; var_41_bool = 0; var_42_float = 0; // 0x67 PushV
	HasProperty(var_34_string, var_41_bool); // 0x68 Func
	var_43_bool = var_41_bool == 0; // 0x6a Not
	if(var_43_bool == 0) goto Label_110; // 0x6b JumpB
	var_33_bool = 0; // 0x6c MovB
	return 4; // 0x6d Return
	
Label_110:
	GetProperty(var_34_string, var_42_float); // 0x6e Func
	var_44_float = 0; var_45_float = 0; var_46_float = 0; var_47_float = 0; // 0x70 PushV
	var_45_float = var_42_float + var_35_float; // 0x71 Add2
	var_46_float = var_36_float; // 0x72 Mov
	var_47_float = var_37_float; // 0x73 Mov
	func_135(var_44_float, var_45_float, var_46_float, var_47_float); // 0x74 Call
	SetProperty(var_34_string, var_44_float); // 0x76 Func
	var_33_bool = 1; // 0x78 MovB
	return 4; // 0x79 Return
}


