main()
{
	var_0_string = "drink"; // 0x0 PushS
	PlaySound(var_0_string); // 0x1 Func
	var_1_bool = 0; var_2_string = ""; var_3_float = 0; var_4_float = 0; var_5_float = 0; // 0x3 PushV
	var_2_string = "health"; // 0x4 MovS
	var_3_float = -0.05; // 0x5 MovF
	var_4_float = 0; // 0x6 MovI
	var_5_float = 1; // 0x7 MovI
	func_59(var_1_bool, var_2_string, var_3_float, var_4_float, var_5_float); // 0x8 NEW_2
	var_17_float = 0; // 0xa PushV
	var_17_float = -0.05; // 0xb MovF
	func_129(var_17_float); // 0xc NEW_2
	var_25_bool = 0; var_26_string = ""; var_27_float = 0; var_28_float = 0; var_29_float = 0; // 0xe PushV
	var_26_string = "immunity"; // 0xf MovS
	var_27_float = 0.0; // 0x10 MovF
	var_28_float = 0; // 0x11 MovI
	var_29_float = 1; // 0x12 MovI
	func_59(var_25_bool, var_26_string, var_27_float, var_28_float, var_29_float); // 0x13 NEW_2
	var_30_float = 0; // 0x15 PushV
	var_30_float = 0.0; // 0x16 MovF
	func_109(var_30_float); // 0x17 NEW_2
	var_34_bool = 0; var_35_string = ""; var_36_float = 0; var_37_float = 0; var_38_float = 0; // 0x19 PushV
	var_35_string = "disease"; // 0x1a MovS
	var_36_float = 0.0; // 0x1b MovF
	var_37_float = 0; // 0x1c MovI
	var_38_float = 1; // 0x1d MovI
	func_59(var_34_bool, var_35_string, var_36_float, var_37_float, var_38_float); // 0x1e NEW_2
	var_39_float = 0; // 0x20 PushV
	var_39_float = 0.0; // 0x21 MovF
	func_119(var_39_float); // 0x22 NEW_2
	var_43_bool = 0; var_44_string = ""; var_45_float = 0; var_46_float = 0; var_47_float = 0; // 0x24 PushV
	var_44_string = "hunger"; // 0x25 MovS
	var_45_float = 0.0; // 0x26 MovF
	var_46_float = 0; // 0x27 MovI
	var_47_float = 1; // 0x28 MovI
	func_59(var_43_bool, var_44_string, var_45_float, var_46_float, var_47_float); // 0x29 NEW_2
	var_48_float = 0; // 0x2b PushV
	var_48_float = 0.0; // 0x2c MovF
	func_99(var_48_float); // 0x2d NEW_2
	var_52_bool = 0; var_53_string = ""; var_54_float = 0; var_55_float = 0; var_56_float = 0; // 0x2f PushV
	var_53_string = "tiredness"; // 0x30 MovS
	var_54_float = -0.2; // 0x31 MovF
	var_55_float = 0; // 0x32 MovI
	var_56_float = 1; // 0x33 MovI
	func_59(var_52_bool, var_53_string, var_54_float, var_55_float, var_56_float); // 0x34 NEW_2
	var_57_float = 0; // 0x36 PushV
	var_57_float = -0.2; // 0x37 MovF
	func_89(var_57_float); // 0x38 NEW_2
	return 0; // 0x3a Return
}


func_129(var_17_float)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x81 PushV
	CreateFloatVector(var_19_object); // 0x82 Func
	add(var_17_float); // 0x84 ObjFunc
	var_20_int = 0; // 0x86 PushI
	var_21_bool = var_17_float < var_20_int; // 0x87 LT
	if(var_21_bool == 0) goto Label_141; // 0x88 JumpB
	var_22_float = 0.7; // 0x89 PushF
	var_23_int = 500; // 0x8a PushI
	RumblePlay(var_22_float, var_23_int); // 0x8b Func
	
Label_141:
	var_24_int = 15; // 0x8d PushI
	SendWorldWndMessage(var_24_int, var_19_object); // 0x8e Func
	return 2; // 0x90 Return
}


func_99(var_48_float)
{
	var_49_object = Obj(); var_50_object = Obj(); // 0x63 PushV
	CreateFloatVector(var_50_object); // 0x64 Func
	add(var_48_float); // 0x66 ObjFunc
	var_51_int = 12; // 0x68 PushI
	SendWorldWndMessage(var_51_int, var_50_object); // 0x69 Func
	return 2; // 0x6b Return
}


func_109(var_30_float)
{
	var_31_object = Obj(); var_32_object = Obj(); // 0x6d PushV
	CreateFloatVector(var_32_object); // 0x6e Func
	add(var_30_float); // 0x70 ObjFunc
	var_33_int = 13; // 0x72 PushI
	SendWorldWndMessage(var_33_int, var_32_object); // 0x73 Func
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


func_119(var_39_float)
{
	var_40_object = Obj(); var_41_object = Obj(); // 0x77 PushV
	CreateFloatVector(var_41_object); // 0x78 Func
	add(var_39_float); // 0x7a ObjFunc
	var_42_int = 14; // 0x7c PushI
	SendWorldWndMessage(var_42_int, var_41_object); // 0x7d Func
	return 2; // 0x7f Return
}


func_89(var_57_float)
{
	var_58_object = Obj(); var_59_object = Obj(); // 0x59 PushV
	CreateFloatVector(var_59_object); // 0x5a Func
	add(var_57_float); // 0x5c ObjFunc
	var_60_int = 11; // 0x5e PushI
	SendWorldWndMessage(var_60_int, var_59_object); // 0x5f Func
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


