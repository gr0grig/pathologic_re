main(var_0_bool)
{
	var_1_float = 0; // 0x0 PushV
	var_1_float = 288; // 0x1 MovI
	func_57(var_1_float); // 0x2 NEW_2
	return 0; // 0x4 Return
}


func_89(var_53_bool, var_54_string, var_55_float, var_56_float, var_57_float)
{
	var_58_bool = 0; var_59_float = 0; var_60_bool = 0; var_61_float = 0; // 0x59 PushV
	HasProperty(var_54_string, var_60_bool); // 0x5a Func
	var_62_bool = var_60_bool == 0; // 0x5c Not
	if(var_62_bool == 0) goto Label_96; // 0x5d JumpB
	var_53_bool = 0; // 0x5e MovB
	return 4; // 0x5f Return
	
Label_96:
	GetProperty(var_54_string, var_61_float); // 0x60 Func
	var_63_float = 0; var_64_float = 0; var_65_float = 0; var_66_float = 0; // 0x62 PushV
	var_64_float = var_61_float + var_55_float; // 0x63 Add2
	var_65_float = var_56_float; // 0x64 Mov
	var_66_float = var_57_float; // 0x65 Mov
	func_121(var_63_float, var_64_float, var_65_float, var_66_float); // 0x66 NEW_2
	SetProperty(var_54_string, var_63_float); // 0x68 Func
	var_53_bool = 1; // 0x6a MovB
	return 4; // 0x6b Return
}


func_132(var_69_float)
{
	var_70_object = Obj(); var_71_object = Obj(); // 0x84 PushV
	CreateFloatVector(var_71_object); // 0x85 Func
	add(var_69_float); // 0x87 ObjFunc
	var_72_int = 16; // 0x89 PushI
	SendWorldWndMessage(var_72_int, var_71_object); // 0x8a Func
	return 2; // 0x8c Return
}


func_5(var_13_bool, var_14_float)
{
	var_15_float = 0; var_16_int = 0; var_17_int = 0; var_18_float = 0; var_19_int = 0; var_20_int = 0; // 0x5 PushV
	var_21_bool = 0; // 0x6 PushV
	func_108(var_21_bool); // 0x7 NEW_2
	var_29_bool = var_21_bool == 0; // 0x9 Not
	if(var_29_bool == 0) goto Label_55; // 0xa JumpB
	var_30_int = -var_14_float; // 0xb Neg
	var_31_float = 36.0; // 0xc PushF
	var_18_float = var_30_int / var_30_int; // 0xd Div2
	var_32_bool = 0; var_33_int = 0; // 0xe PushV
	var_33_int = 6; // 0xf MovI
	func_151(var_32_bool, var_33_int); // 0x10 NEW_2
	if(var_32_bool == 0) goto Label_44; // 0x12 JumpB
	var_40_string = "k6q01"; // 0x13 PushS
	GetVariable(var_40_string, var_19_int); // 0x14 Func
	var_41_int = 1000; // 0x16 PushI
	var_42_bool = var_19_int != var_41_int; // 0x17 Neq
	if(var_42_bool == 0) goto Label_44; // 0x18 JumpB
	var_43_float = 2.0; // 0x19 PushF
	var_18_float = var_18_float * var_43_float; // 0x1a Mult2
	var_44_int = 1; // 0x1b PushI
	var_45_bool = var_19_int >= var_44_int; // 0x1c GE
	if(var_45_bool == 0) goto Label_32; // 0x1d JumpB
	var_46_float = 3.0; // 0x1e PushF
	var_18_float = var_18_float * var_46_float; // 0x1f Mult2
	
Label_32:
	var_47_int = 2; // 0x20 PushI
	var_48_bool = var_19_int >= var_47_int; // 0x21 GE
	if(var_48_bool == 0) goto Label_37; // 0x22 JumpB
	var_49_float = 4.0; // 0x23 PushF
	var_18_float = var_18_float * var_49_float; // 0x24 Mult2
	
Label_37:
	var_50_string = "k6q01ItemsRemoved"; // 0x25 PushS
	GetVariable(var_50_string, var_20_int); // 0x26 Func
	var_51_int = var_20_int; // 0x28 Push
	if(var_51_int == 0) goto Label_44; // 0x29 JumpB
	var_52_float = 4.0; // 0x2a PushF
	var_18_float = var_18_float / var_18_float; // 0x2b Div2
	
Label_44:
	var_53_bool = 0; var_54_string = ""; var_55_float = 0; var_56_float = 0; var_57_float = 0; // 0x2c PushV
	var_54_string = "reputation"; // 0x2d MovS
	var_55_float = var_18_float; // 0x2e Mov
	var_56_float = 0; // 0x2f MovI
	var_57_float = 1; // 0x30 MovI
	func_89(var_53_bool, var_54_string, var_55_float, var_56_float, var_57_float); // 0x31 NEW_2
	var_69_float = 0; // 0x33 PushV
	var_69_float = var_18_float; // 0x34 Mov
	func_132(var_69_float); // 0x35 NEW_2
	
Label_55:
	var_13_bool = 0; // 0x37 MovB
	return 6; // 0x38 Return
}


func_108(var_21_bool)
{
	var_22_bool = 0; var_23_bool = 0; var_24_bool = 0; var_25_bool = 0; // 0x6c PushV
	var_26_string = "sleeping"; // 0x6d PushS
	HasProperty(var_26_string, var_24_bool); // 0x6e Func
	var_27_bool = var_24_bool == 0; // 0x70 Not
	if(var_27_bool == 0) goto Label_116; // 0x71 JumpB
	var_21_bool = 0; // 0x72 MovB
	return 4; // 0x73 Return
	
Label_116:
	var_28_string = "sleeping"; // 0x74 PushS
	GetProperty(var_28_string, var_25_bool); // 0x75 Func
	var_21_bool = var_25_bool; // 0x77 Mov
	return 4; // 0x78 Return
}


func_142(var_34_int)
{
	var_35_float = 0; var_36_float = 0; // 0x8e PushV
	GetGameTime(var_36_float); // 0x8f Func
	var_37_int = 1; // 0x91 PushI
	var_38_int = 0; // 0x92 PushV
	var_39_int = 24; // 0x93 PushI
	var_38_int = var_36_float / var_36_float; // 0x94 Div2
	var_34_int = var_37_int + var_38_int; // 0x95 Add2
	return 2; // 0x96 Return
}


func_151(var_32_bool, var_33_int)
{
	var_34_int = 0; // 0x98 PushV
	func_142(var_34_int); // 0x99 NEW_2
	var_32_bool = var_34_int == var_33_int; // 0x9b Eq2
	return 0; // 0x9c Return
}


func_121(var_63_float, var_64_float, var_65_float, var_66_float)
{
	var_67_bool = var_64_float < var_65_float; // 0x7a LT
	if(var_67_bool == 0) goto Label_126; // 0x7b JumpB
	var_63_float = var_65_float; // 0x7c Mov
	return 0; // 0x7d Return
	
Label_126:
	var_68_bool = var_64_float > var_66_float; // 0x7e GT
	if(var_68_bool == 0) goto Label_130; // 0x7f JumpB
	var_63_float = var_66_float; // 0x80 Mov
	return 0; // 0x81 Return
	
Label_130:
	var_63_float = var_64_float; // 0x82 Mov
	return 0; // 0x83 Return
}


func_57(var_1_float)
{
	var_2_float = 0; var_3_float = 0; var_4_float = 0; var_5_float = 0; var_6_float = 0; var_7_float = 0; var_8_float = 0; var_9_float = 0; // 0x39 PushV
	GetGameTime(var_6_float); // 0x3a Func
	var_7_float = var_6_float + var_1_float; // 0x3c Add2
	var_8_float = var_6_float; // 0x3d Mov
	
Label_62:
	sync(); // 0x3e Func
	var_10_bool = var_0_bool; // 0x40 PushT
	if(var_10_bool == 0) goto Label_67; // 0x41 JumpB
	goto Label_88; // 0x42 Jump
	
Label_88:
	return 8; // 0x58 Return
	
Label_67:
	GetGameTime(var_9_float); // 0x43 Func
	var_11_bool = var_9_float <= var_8_float; // 0x45 LE
	if(var_11_bool == 0) goto Label_72; // 0x46 JumpB
	goto Label_87; // 0x47 Jump
	
Label_87:
	goto Label_62; // 0x57 Jump
	
Label_72:
	var_12_bool = var_9_float >= var_7_float; // 0x48 GE
	if(var_12_bool == 0) goto Label_80; // 0x49 JumpB
	var_13_bool = 0; var_14_float = 0; // 0x4a PushV
	var_14_float = var_7_float - var_8_float; // 0x4b Sub2
	func_5(var_13_bool, var_14_float); // 0x4c NEW_2
	goto Label_88; // 0x4e Jump
	
Label_80:
	var_73_bool = 0; var_74_float = 0; // 0x50 PushV
	var_74_float = var_9_float - var_8_float; // 0x51 Sub2
	func_5(var_73_bool, var_74_float); // 0x52 NEW_2
	if(var_73_bool == 0) goto Label_86; // 0x54 JumpB
	goto Label_88; // 0x55 Jump
	
Label_86:
	var_8_float = var_9_float; // 0x56 Mov
}


