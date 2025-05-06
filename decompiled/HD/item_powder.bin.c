main()
{
	var_0_float = 0; var_1_float = 0; var_2_float = 0; var_3_float = 0; // 0x0 PushV
	var_4_string = "health"; // 0x1 PushS
	GetProperty(var_4_string, var_2_float); // 0x2 Func
	var_5_float = 0.05; // 0x4 PushF
	var_6_bool = var_2_float > var_5_float; // 0x5 GT
	if(var_6_bool == 0) goto Label_16; // 0x6 JumpB
	var_7_string = "health"; // 0x7 PushS
	var_8_float = 0.05; // 0x8 PushF
	SetProperty(var_7_string, var_8_float); // 0x9 Func
	var_9_float = 0; // 0xb PushV
	var_10_float = 0.05; // 0xc PushF
	var_9_float = var_10_float - var_2_float; // 0xd Sub2
	func_38(var_9_float); // 0xe NEW_2
	
Label_16:
	var_18_string = "disease"; // 0x10 PushS
	GetProperty(var_18_string, var_3_float); // 0x11 Func
	var_19_string = "disease"; // 0x13 PushS
	var_20_int = 0; // 0x14 PushI
	SetProperty(var_19_string, var_20_int); // 0x15 Func
	var_21_float = 0; // 0x17 PushV
	var_21_float = -var_3_float; // 0x18 Neg2
	func_28(var_21_float); // 0x19 NEW_2
	return 4; // 0x1b Return
}


func_28(var_21_float)
{
	var_22_object = Obj(); var_23_object = Obj(); // 0x1c PushV
	CreateFloatVector(var_23_object); // 0x1d Func
	add(var_21_float); // 0x1f ObjFunc
	var_24_int = 14; // 0x21 PushI
	SendWorldWndMessage(var_24_int, var_23_object); // 0x22 Func
	return 2; // 0x24 Return
}


func_38(var_9_float)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0x26 PushV
	CreateFloatVector(var_12_object); // 0x27 Func
	add(var_9_float); // 0x29 ObjFunc
	var_13_int = 0; // 0x2b PushI
	var_14_bool = var_9_float < var_13_int; // 0x2c LT
	if(var_14_bool == 0) goto Label_50; // 0x2d JumpB
	var_15_float = 0.7; // 0x2e PushF
	var_16_int = 500; // 0x2f PushI
	RumblePlay(var_15_float, var_16_int); // 0x30 Func
	
Label_50:
	var_17_int = 15; // 0x32 PushI
	SendWorldWndMessage(var_17_int, var_12_object); // 0x33 Func
	return 2; // 0x35 Return
}


