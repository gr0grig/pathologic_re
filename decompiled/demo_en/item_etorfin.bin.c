main(var_0_bool)
{
	var_1_bool = 0; var_2_string = ""; var_3_float = 0; var_4_float = 0; var_5_float = 0; // 0x0 PushV
	var_2_string = "health"; // 0x1 MovS
	var_3_float = 0.35; // 0x2 MovF
	var_4_float = 0; // 0x3 MovI
	var_5_float = 1; // 0x4 MovI
	func_82(var_1_bool, var_2_string, var_3_float, var_4_float, var_5_float); // 0x5 NEW_2
	var_17_float = 0; // 0x7 PushV
	var_17_float = 0.35; // 0x8 MovF
	func_135(var_17_float); // 0x9 NEW_2
	var_21_bool = 0; var_22_string = ""; var_23_float = 0; var_24_float = 0; var_25_float = 0; // 0xb PushV
	var_22_string = "tiredness"; // 0xc MovS
	var_23_float = 0.35; // 0xd MovF
	var_24_float = 0; // 0xe MovI
	var_25_float = 1; // 0xf MovI
	func_82(var_21_bool, var_22_string, var_23_float, var_24_float, var_25_float); // 0x10 NEW_2
	var_26_float = 0; // 0x12 PushV
	var_26_float = 0.35; // 0x13 MovF
	func_125(var_26_float); // 0x14 NEW_2
	var_30_float = 0; // 0x16 PushV
	var_30_float = 10.0; // 0x17 MovF
	func_50(var_30_float); // 0x18 NEW_2
	return 0; // 0x1a Return
}


func_101(var_44_bool)
{
	var_45_bool = 0; var_46_bool = 0; var_47_bool = 0; var_48_bool = 0; // 0x65 PushV
	var_49_string = "sleeping"; // 0x66 PushS
	HasProperty(var_49_string, var_47_bool); // 0x67 Func
	var_50_bool = var_47_bool == 0; // 0x69 Not
	if(var_50_bool == 0) goto Label_109; // 0x6a JumpB
	var_44_bool = 0; // 0x6b MovB
	return 4; // 0x6c Return
	
Label_109:
	var_51_string = "sleeping"; // 0x6d PushS
	GetProperty(var_51_string, var_48_bool); // 0x6e Func
	var_44_bool = var_48_bool; // 0x70 Mov
	return 4; // 0x71 Return
}


func_135(var_17_float)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x87 PushV
	CreateFloatVector(var_19_object); // 0x88 Func
	add(var_17_float); // 0x8a ObjFunc
	var_20_int = 15; // 0x8c PushI
	SendWorldWndMessage(var_20_int, var_19_object); // 0x8d Func
	return 2; // 0x8f Return
}


func_82(var_1_bool, var_2_string, var_3_float, var_4_float, var_5_float)
{
	var_6_bool = 0; var_7_float = 0; var_8_bool = 0; var_9_float = 0; // 0x52 PushV
	HasProperty(var_2_string, var_8_bool); // 0x53 Func
	var_10_bool = var_8_bool == 0; // 0x55 Not
	if(var_10_bool == 0) goto Label_89; // 0x56 JumpB
	var_1_bool = 0; // 0x57 MovB
	return 4; // 0x58 Return
	
Label_89:
	GetProperty(var_2_string, var_9_float); // 0x59 Func
	var_11_float = 0; var_12_float = 0; var_13_float = 0; var_14_float = 0; // 0x5b PushV
	var_12_float = var_9_float + var_3_float; // 0x5c Add2
	var_13_float = var_4_float; // 0x5d Mov
	var_14_float = var_5_float; // 0x5e Mov
	func_114(var_11_float, var_12_float, var_13_float, var_14_float); // 0x5f NEW_2
	SetProperty(var_2_string, var_11_float); // 0x61 Func
	var_1_bool = 1; // 0x63 MovB
	return 4; // 0x64 Return
}


func_50(var_30_float)
{
	var_31_float = 0; var_32_float = 0; var_33_float = 0; var_34_float = 0; var_35_float = 0; var_36_float = 0; var_37_float = 0; var_38_float = 0; // 0x32 PushV
	GetGameTime(var_35_float); // 0x33 Func
	var_36_float = var_35_float + var_30_float; // 0x35 Add2
	var_37_float = var_35_float; // 0x36 Mov
	
Label_55:
	sync(); // 0x37 Func
	var_39_bool = var_0_bool; // 0x39 PushT
	if(var_39_bool == 0) goto Label_60; // 0x3a JumpB
	goto Label_81; // 0x3b Jump
	
Label_81:
	return 8; // 0x51 Return
	
Label_60:
	GetGameTime(var_38_float); // 0x3c Func
	var_40_bool = var_38_float <= var_37_float; // 0x3e LE
	if(var_40_bool == 0) goto Label_65; // 0x3f JumpB
	goto Label_80; // 0x40 Jump
	
Label_80:
	goto Label_55; // 0x50 Jump
	
Label_65:
	var_41_bool = var_38_float >= var_36_float; // 0x41 GE
	if(var_41_bool == 0) goto Label_73; // 0x42 JumpB
	var_42_bool = 0; var_43_float = 0; // 0x43 PushV
	var_43_float = var_36_float - var_37_float; // 0x44 Sub2
	func_27(var_42_bool, var_43_float); // 0x45 NEW_2
	goto Label_81; // 0x47 Jump
	
Label_73:
	var_64_bool = 0; var_65_float = 0; // 0x49 PushV
	var_65_float = var_38_float - var_37_float; // 0x4a Sub2
	func_27(var_64_bool, var_65_float); // 0x4b NEW_2
	if(var_64_bool == 0) goto Label_79; // 0x4d JumpB
	goto Label_81; // 0x4e Jump
	
Label_79:
	var_37_float = var_38_float; // 0x4f Mov
}


func_114(var_11_float, var_12_float, var_13_float, var_14_float)
{
	var_15_bool = var_12_float < var_13_float; // 0x73 LT
	if(var_15_bool == 0) goto Label_119; // 0x74 JumpB
	var_11_float = var_13_float; // 0x75 Mov
	return 0; // 0x76 Return
	
Label_119:
	var_16_bool = var_12_float > var_14_float; // 0x77 GT
	if(var_16_bool == 0) goto Label_123; // 0x78 JumpB
	var_11_float = var_14_float; // 0x79 Mov
	return 0; // 0x7a Return
	
Label_123:
	var_11_float = var_12_float; // 0x7b Mov
	return 0; // 0x7c Return
}


func_27(var_42_bool, var_43_float)
{
	var_44_bool = 0; // 0x1c PushV
	func_101(var_44_bool); // 0x1d NEW_2
	if(var_44_bool == 0) goto Label_48; // 0x1f JumpB
	var_52_bool = 0; var_53_string = ""; var_54_float = 0; var_55_float = 0; var_56_float = 0; // 0x20 PushV
	var_53_string = "health"; // 0x21 MovS
	var_57_float = 0.3; // 0x22 PushF
	var_54_float = var_43_float * var_57_float; // 0x23 Mult2
	var_55_float = 0; // 0x24 MovI
	var_56_float = 1; // 0x25 MovI
	func_82(var_52_bool, var_53_string, var_54_float, var_55_float, var_56_float); // 0x26 NEW_2
	var_58_bool = 0; var_59_string = ""; var_60_float = 0; var_61_float = 0; var_62_float = 0; // 0x28 PushV
	var_59_string = "tiredness"; // 0x29 MovS
	var_63_float = -0.3; // 0x2a PushF
	var_60_float = var_43_float * var_63_float; // 0x2b Mult2
	var_61_float = 0; // 0x2c MovI
	var_62_float = 1; // 0x2d MovI
	func_82(var_58_bool, var_59_string, var_60_float, var_61_float, var_62_float); // 0x2e NEW_2
	
Label_48:
	var_42_bool = 0; // 0x30 MovB
	return 0; // 0x31 Return
}


func_125(var_26_float)
{
	var_27_object = Obj(); var_28_object = Obj(); // 0x7d PushV
	CreateFloatVector(var_28_object); // 0x7e Func
	add(var_26_float); // 0x80 ObjFunc
	var_29_int = 11; // 0x82 PushI
	SendWorldWndMessage(var_29_int, var_28_object); // 0x83 Func
	return 2; // 0x85 Return
}


