main()
{
	var_0_float = 0; var_1_float = 0; // 0x0 PushV
	var_2_string = "disease"; // 0x1 PushS
	GetProperty(var_2_string, var_1_float); // 0x2 Func
	var_3_string = "disease"; // 0x4 PushS
	var_4_float = 0.2; // 0x5 PushF
	var_5_float = var_1_float * var_4_float; // 0x6 Mult
	SetProperty(var_3_string, var_5_float); // 0x7 Func
	var_6_float = 0; // 0x9 PushV
	var_7_float = 0.2; // 0xa PushF
	var_8_float = var_1_float * var_7_float; // 0xb Mult
	var_6_float = var_1_float - var_8_float; // 0xc Sub2
	func_78(var_6_float); // 0xd NEW_2
	var_12_bool = 0; var_13_string = ""; var_14_float = 0; var_15_float = 0; var_16_float = 0; // 0xf PushV
	var_13_string = "tiredness"; // 0x10 MovS
	var_14_float = 0.3; // 0x11 MovF
	var_15_float = 0; // 0x12 MovI
	var_16_float = 1; // 0x13 MovI
	func_38(var_12_bool, var_13_string, var_14_float, var_15_float, var_16_float); // 0x14 NEW_2
	var_28_float = 0; // 0x16 PushV
	var_28_float = 0.3; // 0x17 MovF
	func_68(var_28_float); // 0x18 NEW_2
	var_32_bool = 0; var_33_string = ""; var_34_float = 0; var_35_float = 0; var_36_float = 0; // 0x1a PushV
	var_33_string = "health"; // 0x1b MovS
	var_34_float = -0.3; // 0x1c MovF
	var_35_float = 0; // 0x1d MovI
	var_36_float = 1; // 0x1e MovI
	func_38(var_32_bool, var_33_string, var_34_float, var_35_float, var_36_float); // 0x1f NEW_2
	var_37_float = 0; // 0x21 PushV
	var_37_float = -0.3; // 0x22 MovF
	func_88(var_37_float); // 0x23 NEW_2
	return 2; // 0x25 Return
}


func_68(var_28_float)
{
	var_29_object = Obj(); var_30_object = Obj(); // 0x44 PushV
	CreateFloatVector(var_30_object); // 0x45 Func
	add(var_28_float); // 0x47 ObjFunc
	var_31_int = 11; // 0x49 PushI
	SendWorldWndMessage(var_31_int, var_30_object); // 0x4a Func
	return 2; // 0x4c Return
}


func_38(var_12_bool, var_13_string, var_14_float, var_15_float, var_16_float)
{
	var_17_bool = 0; var_18_float = 0; var_19_bool = 0; var_20_float = 0; // 0x26 PushV
	HasProperty(var_13_string, var_19_bool); // 0x27 Func
	var_21_bool = var_19_bool == 0; // 0x29 Not
	if(var_21_bool == 0) goto Label_45; // 0x2a JumpB
	var_12_bool = 0; // 0x2b MovB
	return 4; // 0x2c Return
	
Label_45:
	GetProperty(var_13_string, var_20_float); // 0x2d Func
	var_22_float = 0; var_23_float = 0; var_24_float = 0; var_25_float = 0; // 0x2f PushV
	var_23_float = var_20_float + var_14_float; // 0x30 Add2
	var_24_float = var_15_float; // 0x31 Mov
	var_25_float = var_16_float; // 0x32 Mov
	func_57(var_22_float, var_23_float, var_24_float, var_25_float); // 0x33 NEW_2
	SetProperty(var_13_string, var_22_float); // 0x35 Func
	var_12_bool = 1; // 0x37 MovB
	return 4; // 0x38 Return
}


func_78(var_6_float)
{
	var_9_object = Obj(); var_10_object = Obj(); // 0x4e PushV
	CreateFloatVector(var_10_object); // 0x4f Func
	add(var_6_float); // 0x51 ObjFunc
	var_11_int = 14; // 0x53 PushI
	SendWorldWndMessage(var_11_int, var_10_object); // 0x54 Func
	return 2; // 0x56 Return
}


func_88(var_37_float)
{
	var_38_object = Obj(); var_39_object = Obj(); // 0x58 PushV
	CreateFloatVector(var_39_object); // 0x59 Func
	add(var_37_float); // 0x5b ObjFunc
	var_40_int = 0; // 0x5d PushI
	var_41_bool = var_37_float < var_40_int; // 0x5e LT
	if(var_41_bool == 0) goto Label_100; // 0x5f JumpB
	var_42_float = 0.7; // 0x60 PushF
	var_43_int = 500; // 0x61 PushI
	RumblePlay(var_42_float, var_43_int); // 0x62 Func
	
Label_100:
	var_44_int = 15; // 0x64 PushI
	SendWorldWndMessage(var_44_int, var_39_object); // 0x65 Func
	return 2; // 0x67 Return
}


func_57(var_22_float, var_23_float, var_24_float, var_25_float)
{
	var_26_bool = var_23_float < var_24_float; // 0x3a LT
	if(var_26_bool == 0) goto Label_62; // 0x3b JumpB
	var_22_float = var_24_float; // 0x3c Mov
	return 0; // 0x3d Return
	
Label_62:
	var_27_bool = var_23_float > var_25_float; // 0x3e GT
	if(var_27_bool == 0) goto Label_66; // 0x3f JumpB
	var_22_float = var_25_float; // 0x40 Mov
	return 0; // 0x41 Return
	
Label_66:
	var_22_float = var_23_float; // 0x42 Mov
	return 0; // 0x43 Return
}


