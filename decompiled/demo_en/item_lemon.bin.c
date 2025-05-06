main()
{
	var_0_string = "eat"; // 0x0 PushS
	PlaySound(var_0_string); // 0x1 Func
	var_1_bool = 0; var_2_string = ""; var_3_float = 0; var_4_float = 0; var_5_float = 0; // 0x3 PushV
	var_2_string = "health"; // 0x4 MovS
	var_3_float = 0.0; // 0x5 MovF
	var_4_float = 0; // 0x6 MovI
	var_5_float = 1; // 0x7 MovI
	func_59(var_1_bool, var_2_string, var_3_float, var_4_float, var_5_float); // 0x8 NEW_2
	var_17_float = 0; // 0xa PushV
	var_17_float = 0.0; // 0xb MovF
	func_129(var_17_float); // 0xc NEW_2
	var_21_bool = 0; var_22_string = ""; var_23_float = 0; var_24_float = 0; var_25_float = 0; // 0xe PushV
	var_22_string = "immunity"; // 0xf MovS
	var_23_float = 0.05; // 0x10 MovF
	var_24_float = 0; // 0x11 MovI
	var_25_float = 1; // 0x12 MovI
	func_59(var_21_bool, var_22_string, var_23_float, var_24_float, var_25_float); // 0x13 NEW_2
	var_26_float = 0; // 0x15 PushV
	var_26_float = 0.05; // 0x16 MovF
	func_109(var_26_float); // 0x17 NEW_2
	var_30_bool = 0; var_31_string = ""; var_32_float = 0; var_33_float = 0; var_34_float = 0; // 0x19 PushV
	var_31_string = "disease"; // 0x1a MovS
	var_32_float = 0.0; // 0x1b MovF
	var_33_float = 0; // 0x1c MovI
	var_34_float = 1; // 0x1d MovI
	func_59(var_30_bool, var_31_string, var_32_float, var_33_float, var_34_float); // 0x1e NEW_2
	var_35_float = 0; // 0x20 PushV
	var_35_float = 0.0; // 0x21 MovF
	func_119(var_35_float); // 0x22 NEW_2
	var_39_bool = 0; var_40_string = ""; var_41_float = 0; var_42_float = 0; var_43_float = 0; // 0x24 PushV
	var_40_string = "hunger"; // 0x25 MovS
	var_41_float = 0.1; // 0x26 MovF
	var_42_float = 0; // 0x27 MovI
	var_43_float = 1; // 0x28 MovI
	func_59(var_39_bool, var_40_string, var_41_float, var_42_float, var_43_float); // 0x29 NEW_2
	var_44_float = 0; // 0x2b PushV
	var_44_float = 0.1; // 0x2c MovF
	func_99(var_44_float); // 0x2d NEW_2
	var_48_bool = 0; var_49_string = ""; var_50_float = 0; var_51_float = 0; var_52_float = 0; // 0x2f PushV
	var_49_string = "tiredness"; // 0x30 MovS
	var_50_float = -0.1; // 0x31 MovF
	var_51_float = 0; // 0x32 MovI
	var_52_float = 1; // 0x33 MovI
	func_59(var_48_bool, var_49_string, var_50_float, var_51_float, var_52_float); // 0x34 NEW_2
	var_53_float = 0; // 0x36 PushV
	var_53_float = -0.1; // 0x37 MovF
	func_89(var_53_float); // 0x38 NEW_2
	return 0; // 0x3a Return
}


func_129(var_17_float)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x81 PushV
	CreateFloatVector(var_19_object); // 0x82 Func
	add(var_17_float); // 0x84 ObjFunc
	var_20_int = 15; // 0x86 PushI
	SendWorldWndMessage(var_20_int, var_19_object); // 0x87 Func
	return 2; // 0x89 Return
}


func_99(var_44_float)
{
	var_45_object = Obj(); var_46_object = Obj(); // 0x63 PushV
	CreateFloatVector(var_46_object); // 0x64 Func
	add(var_44_float); // 0x66 ObjFunc
	var_47_int = 12; // 0x68 PushI
	SendWorldWndMessage(var_47_int, var_46_object); // 0x69 Func
	return 2; // 0x6b Return
}


func_109(var_26_float)
{
	var_27_object = Obj(); var_28_object = Obj(); // 0x6d PushV
	CreateFloatVector(var_28_object); // 0x6e Func
	add(var_26_float); // 0x70 ObjFunc
	var_29_int = 13; // 0x72 PushI
	SendWorldWndMessage(var_29_int, var_28_object); // 0x73 Func
	return 2; // 0x75 Return
}


func_78(var_11_float, var_12_float, var_13_float, var_14_float)
{
	var_15_bool = var_12_float < var_13_float; // 0x4f LT
	if(var_15_bool == 0) goto Label_83; // 0x50 JumpB
	var_11_float = var_13_float; // 0x51 Mov
	return 0; // 0x52 Return
	
Label_83:
	var_16_bool = var_12_float > var_14_float; // 0x53 GT
	if(var_16_bool == 0) goto Label_87; // 0x54 JumpB
	var_11_float = var_14_float; // 0x55 Mov
	return 0; // 0x56 Return
	
Label_87:
	var_11_float = var_12_float; // 0x57 Mov
	return 0; // 0x58 Return
}


func_119(var_35_float)
{
	var_36_object = Obj(); var_37_object = Obj(); // 0x77 PushV
	CreateFloatVector(var_37_object); // 0x78 Func
	add(var_35_float); // 0x7a ObjFunc
	var_38_int = 14; // 0x7c PushI
	SendWorldWndMessage(var_38_int, var_37_object); // 0x7d Func
	return 2; // 0x7f Return
}


func_89(var_53_float)
{
	var_54_object = Obj(); var_55_object = Obj(); // 0x59 PushV
	CreateFloatVector(var_55_object); // 0x5a Func
	add(var_53_float); // 0x5c ObjFunc
	var_56_int = 11; // 0x5e PushI
	SendWorldWndMessage(var_56_int, var_55_object); // 0x5f Func
	return 2; // 0x61 Return
}


func_59(var_1_bool, var_2_string, var_3_float, var_4_float, var_5_float)
{
	var_6_bool = 0; var_7_float = 0; var_8_bool = 0; var_9_float = 0; // 0x3b PushV
	HasProperty(var_2_string, var_8_bool); // 0x3c Func
	var_10_bool = var_8_bool == 0; // 0x3e Not
	if(var_10_bool == 0) goto Label_66; // 0x3f JumpB
	var_1_bool = 0; // 0x40 MovB
	return 4; // 0x41 Return
	
Label_66:
	GetProperty(var_2_string, var_9_float); // 0x42 Func
	var_11_float = 0; var_12_float = 0; var_13_float = 0; var_14_float = 0; // 0x44 PushV
	var_12_float = var_9_float + var_3_float; // 0x45 Add2
	var_13_float = var_4_float; // 0x46 Mov
	var_14_float = var_5_float; // 0x47 Mov
	func_78(var_11_float, var_12_float, var_13_float, var_14_float); // 0x48 NEW_2
	SetProperty(var_2_string, var_11_float); // 0x4a Func
	var_1_bool = 1; // 0x4c MovB
	return 4; // 0x4d Return
}


