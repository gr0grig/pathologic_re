task_0_event_0(var_0_string, var_1_int, var_2_int)
{
	var_3_int = 0; var_4_int = 0; // 0xb PushV
	var_5_string = "default"; // 0xc PushS
	var_6_int = 0; // 0xd PushI
	var_7_int = -1; // 0xe PushI
	var_8_float = 0.37255; // 0xf PushF
	var_9_float = 0.37255; // 0x10 PushF
	var_10_float = 0.37255; // 0x11 PushF
	PrintInWidth(var_4_int, var_5_string, var_6_int, var_7_int, var_10_float, var_0_string, var_8_float, var_9_float, var_10_float); // 0x12 Func
	return 2; // 0x14 Return
}


main(var_0_string, var_1_int, var_2_int)
{
	GetWindowSize(var_2_int, var_1_int); // 0x0 Func
	var_3_int = 725; // 0x2 PushI
	GetStringByID(var_0_string, var_3_int); // 0x3 Func
	var_4_bool = 1; // 0x5 PushB
	SetOwnerDraw(var_4_bool); // 0x6 Func
	ProcessEvents(); // 0x8 Func
	return 0; // 0xa Return
}


