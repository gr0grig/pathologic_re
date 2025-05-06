task_0_event_0()
{
	var_0_string = "default"; // 0x6 PushS
	var_1_int = 15; // 0x7 PushI
	var_2_int = 15; // 0x8 PushI
	var_3_string = ""; var_4_int = 0; // 0x9 PushV
	var_4_int = 102; // 0xa MovI
	func_25(var_3_string, var_4_int); // 0xb NEW_2
	Print(var_0_string, var_1_int, var_2_int, var_3_string); // 0xd Func
	var_7_string = "default"; // 0xf PushS
	var_8_int = 15; // 0x10 PushI
	var_9_int = 98; // 0x11 PushI
	var_10_string = ""; var_11_int = 0; // 0x12 PushV
	var_11_int = 103; // 0x13 MovI
	func_25(var_10_string, var_11_int); // 0x14 NEW_2
	Print(var_7_string, var_8_int, var_9_int, var_10_string); // 0x16 Func
	return 0; // 0x18 Return
}


main()
{
	var_0_bool = 1; // 0x0 PushB
	SetOwnerDraw(var_0_bool); // 0x1 Func
	ProcessEvents(); // 0x3 Func
	return 0; // 0x5 Return
}


func_25(var_3_string, var_4_int)
{
	var_5_string = ""; var_6_string = ""; // 0x19 PushV
	GetStringByID(var_6_string, var_4_int); // 0x1a Func
	var_3_string = var_6_string; // 0x1c Mov
	return 2; // 0x1d Return
}


