main()
{
	var_0_float = 0; var_1_float = 0; var_2_bool = 0; var_3_bool = 0; var_4_int = 0; var_5_int = 0; var_6_float = 0; var_7_float = 0; var_8_bool = 0; var_9_bool = 0; var_10_int = 0; var_11_int = 0; // 0x0 PushV
	var_6_float = 0; // 0x1 MovI
	
Label_2:
	sync(var_7_float); // 0x2 Func
	IsVisirOn(var_8_bool); // 0x4 Func
	var_12_bool = var_8_bool; // 0x6 Push
	if(var_12_bool == 0) goto Label_18; // 0x7 JumpB
	var_13_bool = 0; // 0x8 PushV
	func_115(var_13_bool); // 0x9 NEW_2
	var_21_bool = var_13_bool == 0; // 0xb Not
	if(var_21_bool == 0) goto Label_17; // 0xc JumpB
	func_48(); // 0xe NEW_2
	var_6_float = 0; // 0x10 MovI
	
Label_17:
	goto Label_46; // 0x11 Jump
	
Label_46:
	goto Label_2; // 0x2e Jump
	
Label_18:
	var_55_string = "visir"; // 0x12 PushS
	GetProperty(var_55_string, var_9_bool); // 0x13 Func
	var_56_bool = var_9_bool; // 0x15 Push
	if(var_56_bool == 0) goto Label_45; // 0x16 JumpB
	var_6_float = var_6_float + var_7_float; // 0x17 Add2
	var_57_int = 0; // 0x18 PushV
	var_57_int = var_6_float; // 0x19 Mov
	var_58_int = 3; // 0x1a PushI
	var_10_int = var_57_int / var_57_int; // 0x1b Div2
	var_59_int = var_10_int; // 0x1c Push
	if(var_59_int == 0) goto Label_44; // 0x1d JumpB
	var_60_string = "vcharge"; // 0x1e PushS
	GetProperty(var_60_string, var_11_int); // 0x1f Func
	var_61_string = "vcharge"; // 0x21 PushS
	var_62_int = 0; var_63_int = 0; var_64_int = 0; var_65_int = 0; // 0x22 PushV
	var_63_int = var_11_int + var_10_int; // 0x23 Add2
	var_64_int = 0; // 0x24 MovI
	var_65_int = 100; // 0x25 MovI
	func_128(var_62_int, var_63_int, var_64_int, var_65_int); // 0x26 NEW_2
	SetProperty(var_61_string, var_62_int); // 0x28 Func
	var_66_int = 3; // 0x2a PushI
	var_6_float = var_6_float % var_66_int; // 0x2b Mod2
	
Label_44:
	goto Label_46; // 0x2c Jump
	
Label_45:
	var_6_float = 0; // 0x2d MovI
}


func_48()
{
	var_22_float = 0; var_23_float = 0; var_24_bool = 0; var_25_int = 0; var_26_float = 0; var_27_float = 0; var_28_bool = 0; var_29_int = 0; // 0x30 PushV
	var_30_bool = 0; var_31_int = 0; // 0x31 PushV
	var_31_int = 5; // 0x32 MovI
	func_99(var_30_bool, var_31_int); // 0x33 NEW_2
	if(var_30_bool == 0) goto Label_92; // 0x35 JumpB
	var_26_float = 0; // 0x36 MovI
	
Label_55:
	sync(var_27_float); // 0x37 Func
	IsVisirOn(var_28_bool); // 0x39 Func
	var_42_bool = 0; // 0x3b PushV
	var_42_bool = 1; // 0x3c MovB
	var_43_bool = var_28_bool == 0; // 0x3d Not
	if(var_43_bool == 0) goto Label_68; // 0x3e JumpB
	var_44_bool = 0; // 0x3f PushV
	func_115(var_44_bool); // 0x40 NEW_2
	if(var_44_bool == 0) goto Label_68; // 0x42 JumpB
	var_42_bool = 0; // 0x43 MovB
	
Label_68:
	if(var_42_bool == 0) goto Label_70; // 0x44 JumpB
	return 8; // 0x45 Return
	
Label_70:
	var_26_float = var_26_float + var_27_float; // 0x46 Add2
	var_45_int = 0; // 0x47 PushV
	var_45_int = var_26_float; // 0x48 Mov
	var_46_int = 1; // 0x49 PushI
	var_47_bool = var_45_int >= var_46_int; // 0x4a GE
	if(var_47_bool == 0) goto Label_77; // 0x4b JumpB
	goto Label_78; // 0x4c Jump
	
Label_78:
	var_48_int = 0; // 0x4e PushV
	var_48_int = var_26_float; // 0x4f Mov
	var_29_int = var_48_int; // 0x50 Mov
	var_49_bool = 0; var_50_int = 0; // 0x52 PushV
	var_50_int = var_29_int; // 0x53 Mov
	func_99(var_49_bool, var_50_int); // 0x54 NEW_2
	var_51_bool = var_49_bool == 0; // 0x56 Not
	if(var_51_bool == 0) goto Label_89; // 0x57 JumpB
	goto Label_92; // 0x58 Jump
	
Label_92:
	var_52_bool = 0; // 0x5c PushB
	SwitchVisir(var_52_bool); // 0x5d Func
	var_53_int = 2; // 0x5f PushI
	SendWorldWndMessage(var_53_int); // 0x60 Func
	return 8; // 0x62 Return
	
Label_89:
	var_54_int = 1; // 0x59 PushI
	var_26_float = var_26_float % var_54_int; // 0x5a Mod2
	goto Label_55; // 0x5b Jump
	
Label_77:
	goto Label_55; // 0x4d Jump
}


func_99(var_30_bool, var_31_int)
{
	var_32_int = 0; var_33_int = 0; // 0x63 PushV
	var_34_string = "vcharge"; // 0x64 PushS
	GetProperty(var_34_string, var_33_int); // 0x65 Func
	var_35_int = 0; var_36_int = 0; var_37_int = 0; var_38_int = 0; // 0x67 PushV
	var_36_int = var_33_int - var_31_int; // 0x68 Sub2
	var_37_int = 0; // 0x69 MovI
	var_38_int = 100; // 0x6a MovI
	func_128(var_35_int, var_36_int, var_37_int, var_38_int); // 0x6b NEW_2
	var_33_int = var_35_int; // 0x6c Mov
	var_41_string = "vcharge"; // 0x6e PushS
	SetProperty(var_41_string, var_33_int); // 0x6f Func
	var_30_bool = var_33_int; // 0x71 Mov
	return 2; // 0x72 Return
}


func_115(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0; var_16_bool = 0; var_17_bool = 0; // 0x73 PushV
	var_18_string = "sleeping"; // 0x74 PushS
	HasProperty(var_18_string, var_16_bool); // 0x75 Func
	var_19_bool = var_16_bool == 0; // 0x77 Not
	if(var_19_bool == 0) goto Label_123; // 0x78 JumpB
	var_13_bool = 0; // 0x79 MovB
	return 4; // 0x7a Return
	
Label_123:
	var_20_string = "sleeping"; // 0x7b PushS
	GetProperty(var_20_string, var_17_bool); // 0x7c Func
	var_13_bool = var_17_bool; // 0x7e Mov
	return 4; // 0x7f Return
}


func_128(var_35_int, var_36_int, var_37_int, var_38_int)
{
	var_39_bool = var_36_int < var_37_int; // 0x81 LT
	if(var_39_bool == 0) goto Label_133; // 0x82 JumpB
	var_35_int = var_37_int; // 0x83 Mov
	return 0; // 0x84 Return
	
Label_133:
	var_40_bool = var_36_int > var_38_int; // 0x85 GT
	if(var_40_bool == 0) goto Label_137; // 0x86 JumpB
	var_35_int = var_38_int; // 0x87 Mov
	return 0; // 0x88 Return
	
Label_137:
	var_35_int = var_36_int; // 0x89 Mov
	return 0; // 0x8a Return
}


