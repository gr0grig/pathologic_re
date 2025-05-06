main()
{
	var_0_bool = 0; var_1_string = ""; var_2_float = 0; var_3_float = 0; var_4_float = 0; // 0x0 PushV
	var_1_string = "health"; // 0x1 MovS
	var_2_float = -0.015; // 0x2 MovF
	var_3_float = 0; // 0x3 MovI
	var_4_float = 1; // 0x4 MovI
	func_56(var_0_bool, var_1_string, var_2_float, var_3_float, var_4_float); // 0x5 NEW_2
	var_16_float = 0; // 0x7 PushV
	var_16_float = -0.015; // 0x8 MovF
	func_126(var_16_float); // 0x9 NEW_2
	var_24_bool = 0; var_25_string = ""; var_26_float = 0; var_27_float = 0; var_28_float = 0; // 0xb PushV
	var_25_string = "immunity"; // 0xc MovS
	var_26_float = 0.1; // 0xd MovF
	var_27_float = 0; // 0xe MovI
	var_28_float = 1; // 0xf MovI
	func_56(var_24_bool, var_25_string, var_26_float, var_27_float, var_28_float); // 0x10 NEW_2
	var_29_float = 0; // 0x12 PushV
	var_29_float = 0.1; // 0x13 MovF
	func_106(var_29_float); // 0x14 NEW_2
	var_33_bool = 0; var_34_string = ""; var_35_float = 0; var_36_float = 0; var_37_float = 0; // 0x16 PushV
	var_34_string = "disease"; // 0x17 MovS
	var_35_float = 0.0; // 0x18 MovF
	var_36_float = 0; // 0x19 MovI
	var_37_float = 1; // 0x1a MovI
	func_56(var_33_bool, var_34_string, var_35_float, var_36_float, var_37_float); // 0x1b NEW_2
	var_38_float = 0; // 0x1d PushV
	var_38_float = 0.0; // 0x1e MovF
	func_116(var_38_float); // 0x1f NEW_2
	var_42_bool = 0; var_43_string = ""; var_44_float = 0; var_45_float = 0; var_46_float = 0; // 0x21 PushV
	var_43_string = "hunger"; // 0x22 MovS
	var_44_float = 0.0; // 0x23 MovF
	var_45_float = 0; // 0x24 MovI
	var_46_float = 1; // 0x25 MovI
	func_56(var_42_bool, var_43_string, var_44_float, var_45_float, var_46_float); // 0x26 NEW_2
	var_47_float = 0; // 0x28 PushV
	var_47_float = 0.0; // 0x29 MovF
	func_96(var_47_float); // 0x2a NEW_2
	var_51_bool = 0; var_52_string = ""; var_53_float = 0; var_54_float = 0; var_55_float = 0; // 0x2c PushV
	var_52_string = "tiredness"; // 0x2d MovS
	var_53_float = 0.0; // 0x2e MovF
	var_54_float = 0; // 0x2f MovI
	var_55_float = 1; // 0x30 MovI
	func_56(var_51_bool, var_52_string, var_53_float, var_54_float, var_55_float); // 0x31 NEW_2
	var_56_float = 0; // 0x33 PushV
	var_56_float = 0.0; // 0x34 MovF
	func_86(var_56_float); // 0x35 NEW_2
	return 0; // 0x37 Return
}


func_96(var_47_float)
{
	var_48_object = Obj(); var_49_object = Obj(); // 0x60 PushV
	CreateFloatVector(var_49_object); // 0x61 Func
	add(var_47_float); // 0x63 ObjFunc
	var_50_int = 12; // 0x65 PushI
	SendWorldWndMessage(var_50_int, var_49_object); // 0x66 Func
	return 2; // 0x68 Return
}


func_106(var_29_float)
{
	var_30_object = Obj(); var_31_object = Obj(); // 0x6a PushV
	CreateFloatVector(var_31_object); // 0x6b Func
	add(var_29_float); // 0x6d ObjFunc
	var_32_int = 13; // 0x6f PushI
	SendWorldWndMessage(var_32_int, var_31_object); // 0x70 Func
	return 2; // 0x72 Return
}


func_75(var_10_float, var_11_float, var_12_float, var_13_float)
{
	var_14_bool = var_11_float < var_12_float; // 0x4c LT
	if(var_14_bool == 0) goto Label_80; // 0x4d JumpB
	var_10_float = var_12_float; // 0x4e Mov
	return 0; // 0x4f Return
	
Label_80:
	var_15_bool = var_11_float > var_13_float; // 0x50 GT
	if(var_15_bool == 0) goto Label_84; // 0x51 JumpB
	var_10_float = var_13_float; // 0x52 Mov
	return 0; // 0x53 Return
	
Label_84:
	var_10_float = var_11_float; // 0x54 Mov
	return 0; // 0x55 Return
}


func_116(var_38_float)
{
	var_39_object = Obj(); var_40_object = Obj(); // 0x74 PushV
	CreateFloatVector(var_40_object); // 0x75 Func
	add(var_38_float); // 0x77 ObjFunc
	var_41_int = 14; // 0x79 PushI
	SendWorldWndMessage(var_41_int, var_40_object); // 0x7a Func
	return 2; // 0x7c Return
}


func_86(var_56_float)
{
	var_57_object = Obj(); var_58_object = Obj(); // 0x56 PushV
	CreateFloatVector(var_58_object); // 0x57 Func
	add(var_56_float); // 0x59 ObjFunc
	var_59_int = 11; // 0x5b PushI
	SendWorldWndMessage(var_59_int, var_58_object); // 0x5c Func
	return 2; // 0x5e Return
}


func_56(var_0_bool, var_1_string, var_2_float, var_3_float, var_4_float)
{
	var_5_bool = 0; var_6_float = 0; var_7_bool = 0; var_8_float = 0; // 0x38 PushV
	HasProperty(var_1_string, var_7_bool); // 0x39 Func
	var_9_bool = var_7_bool == 0; // 0x3b Not
	if(var_9_bool == 0) goto Label_63; // 0x3c JumpB
	var_0_bool = 0; // 0x3d MovB
	return 4; // 0x3e Return
	
Label_63:
	GetProperty(var_1_string, var_8_float); // 0x3f Func
	var_10_float = 0; var_11_float = 0; var_12_float = 0; var_13_float = 0; // 0x41 PushV
	var_11_float = var_8_float + var_2_float; // 0x42 Add2
	var_12_float = var_3_float; // 0x43 Mov
	var_13_float = var_4_float; // 0x44 Mov
	func_75(var_10_float, var_11_float, var_12_float, var_13_float); // 0x45 NEW_2
	SetProperty(var_1_string, var_10_float); // 0x47 Func
	var_0_bool = 1; // 0x49 MovB
	return 4; // 0x4a Return
}


func_126(var_16_float)
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x7e PushV
	CreateFloatVector(var_18_object); // 0x7f Func
	add(var_16_float); // 0x81 ObjFunc
	var_19_int = 0; // 0x83 PushI
	var_20_bool = var_16_float < var_19_int; // 0x84 LT
	if(var_20_bool == 0) goto Label_138; // 0x85 JumpB
	var_21_float = 0.7; // 0x86 PushF
	var_22_int = 500; // 0x87 PushI
	RumblePlay(var_21_float, var_22_int); // 0x88 Func
	
Label_138:
	var_23_int = 15; // 0x8a PushI
	SendWorldWndMessage(var_23_int, var_18_object); // 0x8b Func
	return 2; // 0x8d Return
}


