main()
{
	var_0_float = 0; var_1_float = 0; // 0x0 PushV
	var_2_string = "disease"; // 0x1 PushS
	GetProperty(var_2_string, var_1_float); // 0x2 Func
	var_3_string = "disease"; // 0x4 PushS
	var_4_int = 0; // 0x5 PushI
	SetProperty(var_3_string, var_4_int); // 0x6 Func
	var_5_float = 0; // 0x8 PushV
	var_5_float = -var_1_float; // 0x9 Neg2
	func_13(var_5_float); // 0xa NEW_2
	return 2; // 0xc Return
}


func_13(var_5_float)
{
	var_6_object = Obj(); var_7_object = Obj(); // 0xd PushV
	CreateFloatVector(var_7_object); // 0xe Func
	add(var_5_float); // 0x10 ObjFunc
	var_8_int = 14; // 0x12 PushI
	SendWorldWndMessage(var_8_int, var_7_object); // 0x13 Func
	return 2; // 0x15 Return
}


