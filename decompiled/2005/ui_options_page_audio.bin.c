task_0_event_0()
{
	var_0_string = "default"; // 0x6 PushS
	var_1_int = 15; // 0x7 PushI
	var_2_int = 15; // 0x8 PushI
	var_3_string = ""; var_4_int = 0; // 0x9 PushV
	var_4_int = 104; // 0xa MovI
	func_43(var_3_string, var_4_int); // 0xb NEW_2
	Print(var_0_string, var_1_int, var_2_int, var_3_string); // 0xd Func
	var_7_string = "default"; // 0xf PushS
	var_8_int = 15; // 0x10 PushI
	var_9_int = 98; // 0x11 PushI
	var_10_string = ""; var_11_int = 0; // 0x12 PushV
	var_11_int = 105; // 0x13 MovI
	func_43(var_10_string, var_11_int); // 0x14 NEW_2
	Print(var_7_string, var_8_int, var_9_int, var_10_string); // 0x16 Func
	var_12_string = "default"; // 0x18 PushS
	var_13_int = 16; // 0x19 PushI
	var_14_int = 182; // 0x1a PushI
	var_15_string = ""; var_16_int = 0; // 0x1b PushV
	var_16_int = 106; // 0x1c MovI
	func_43(var_15_string, var_16_int); // 0x1d NEW_2
	Print(var_12_string, var_13_int, var_14_int, var_15_string); // 0x1f Func
	var_17_string = "default"; // 0x21 PushS
	var_18_int = 16; // 0x22 PushI
	var_19_int = 265; // 0x23 PushI
	var_20_string = ""; var_21_int = 0; // 0x24 PushV
	var_21_int = 107; // 0x25 MovI
	func_43(var_20_string, var_21_int); // 0x26 NEW_2
	Print(var_17_string, var_18_int, var_19_int, var_20_string); // 0x28 Func
	return 0; // 0x2a Return
}


main()
{
	var_0_bool = 1; // 0x0 PushB
	SetOwnerDraw(var_0_bool); // 0x1 Func
	ProcessEvents(); // 0x3 Func
	return 0; // 0x5 Return
}


func_43(var_3_string, var_4_int)
{
	var_5_string = ""; var_6_string = ""; // 0x2b PushV
	GetStringByID(var_6_string, var_4_int); // 0x2c Func
	var_3_string = var_6_string; // 0x2e Mov
	return 2; // 0x2f Return
}


