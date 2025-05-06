main()
{
	var_0_string = "eat"; // 0x0 PushS
	PlaySound(var_0_string); // 0x1 Func
	var_1_bool = 0; var_2_string = ""; var_3_float = 0; var_4_float = 0; var_5_float = 0; // 0x3 PushV
	var_2_string = "hunger"; // 0x4 MovS
	var_3_float = -0.16; // 0x5 MovF
	var_4_float = 0; // 0x6 MovI
	var_5_float = 1; // 0x7 MovI
	func_15(var_1_bool, var_2_string, var_3_float, var_4_float, var_5_float); // 0x8 NEW_2
	var_17_float = 0; // 0xa PushV
	var_17_float = -0.16; // 0xb MovF
	func_45(var_17_float); // 0xc NEW_2
	return 0; // 0xe Return
}


func_34(var_11_float, var_12_float, var_13_float, var_14_float)
{
	var_15_bool = var_12_float < var_13_float; // 0x23 LT
	if(var_15_bool == 0) goto Label_39; // 0x24 JumpB
	var_11_float = var_13_float; // 0x25 Mov
	return 0; // 0x26 Return
	
Label_39:
	var_16_bool = var_12_float > var_14_float; // 0x27 GT
	if(var_16_bool == 0) goto Label_43; // 0x28 JumpB
	var_11_float = var_14_float; // 0x29 Mov
	return 0; // 0x2a Return
	
Label_43:
	var_11_float = var_12_float; // 0x2b Mov
	return 0; // 0x2c Return
}


func_45(var_17_float)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x2d PushV
	CreateFloatVector(var_19_object); // 0x2e Func
	add(var_17_float); // 0x30 ObjFunc
	var_20_int = 12; // 0x32 PushI
	SendWorldWndMessage(var_20_int, var_19_object); // 0x33 Func
	return 2; // 0x35 Return
}


func_15(var_1_bool, var_2_string, var_3_float, var_4_float, var_5_float)
{
	var_6_bool = 0; var_7_float = 0; var_8_bool = 0; var_9_float = 0; // 0xf PushV
	HasProperty(var_2_string, var_8_bool); // 0x10 Func
	var_10_bool = var_8_bool == 0; // 0x12 Not
	if(var_10_bool == 0) goto Label_22; // 0x13 JumpB
	var_1_bool = 0; // 0x14 MovB
	return 4; // 0x15 Return
	
Label_22:
	GetProperty(var_2_string, var_9_float); // 0x16 Func
	var_11_float = 0; var_12_float = 0; var_13_float = 0; var_14_float = 0; // 0x18 PushV
	var_12_float = var_9_float + var_3_float; // 0x19 Add2
	var_13_float = var_4_float; // 0x1a Mov
	var_14_float = var_5_float; // 0x1b Mov
	func_34(var_11_float, var_12_float, var_13_float, var_14_float); // 0x1c NEW_2
	SetProperty(var_2_string, var_11_float); // 0x1e Func
	var_1_bool = 1; // 0x20 MovB
	return 4; // 0x21 Return
}


