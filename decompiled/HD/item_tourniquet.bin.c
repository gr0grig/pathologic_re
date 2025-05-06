main()
{
	var_0_bool = 0; var_1_string = ""; var_2_float = 0; var_3_float = 0; var_4_float = 0; // 0x0 PushV
	var_1_string = "health"; // 0x1 MovS
	var_2_float = 0.1; // 0x2 MovF
	var_3_float = 0; // 0x3 MovI
	var_4_float = 1; // 0x4 MovI
	func_12(var_0_bool, var_1_string, var_2_float, var_3_float, var_4_float); // 0x5 NEW_2
	var_16_float = 0; // 0x7 PushV
	var_16_float = 0.1; // 0x8 MovF
	func_42(var_16_float); // 0x9 NEW_2
	return 0; // 0xb Return
}


func_42(var_16_float)
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x2a PushV
	CreateFloatVector(var_18_object); // 0x2b Func
	add(var_16_float); // 0x2d ObjFunc
	var_19_int = 0; // 0x2f PushI
	var_20_bool = var_16_float < var_19_int; // 0x30 LT
	if(var_20_bool == 0) goto Label_54; // 0x31 JumpB
	var_21_float = 0.7; // 0x32 PushF
	var_22_int = 500; // 0x33 PushI
	RumblePlay(var_21_float, var_22_int); // 0x34 Func
	
Label_54:
	var_23_int = 15; // 0x36 PushI
	SendWorldWndMessage(var_23_int, var_18_object); // 0x37 Func
	return 2; // 0x39 Return
}


func_12(var_0_bool, var_1_string, var_2_float, var_3_float, var_4_float)
{
	var_5_bool = 0; var_6_float = 0; var_7_bool = 0; var_8_float = 0; // 0xc PushV
	HasProperty(var_1_string, var_7_bool); // 0xd Func
	var_9_bool = var_7_bool == 0; // 0xf Not
	if(var_9_bool == 0) goto Label_19; // 0x10 JumpB
	var_0_bool = 0; // 0x11 MovB
	return 4; // 0x12 Return
	
Label_19:
	GetProperty(var_1_string, var_8_float); // 0x13 Func
	var_10_float = 0; var_11_float = 0; var_12_float = 0; var_13_float = 0; // 0x15 PushV
	var_11_float = var_8_float + var_2_float; // 0x16 Add2
	var_12_float = var_3_float; // 0x17 Mov
	var_13_float = var_4_float; // 0x18 Mov
	func_31(var_10_float, var_11_float, var_12_float, var_13_float); // 0x19 NEW_2
	SetProperty(var_1_string, var_10_float); // 0x1b Func
	var_0_bool = 1; // 0x1d MovB
	return 4; // 0x1e Return
}


func_31(var_10_float, var_11_float, var_12_float, var_13_float)
{
	var_14_bool = var_11_float < var_12_float; // 0x20 LT
	if(var_14_bool == 0) goto Label_36; // 0x21 JumpB
	var_10_float = var_12_float; // 0x22 Mov
	return 0; // 0x23 Return
	
Label_36:
	var_15_bool = var_11_float > var_13_float; // 0x24 GT
	if(var_15_bool == 0) goto Label_40; // 0x25 JumpB
	var_10_float = var_13_float; // 0x26 Mov
	return 0; // 0x27 Return
	
Label_40:
	var_10_float = var_11_float; // 0x28 Mov
	return 0; // 0x29 Return
}


