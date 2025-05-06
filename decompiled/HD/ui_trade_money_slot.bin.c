task_0_event_0(var_0_int)
{
	var_1_string = "default"; // 0xa PushS
	var_2_int = 2; // 0xb PushI
	var_3_int = 35; // 0xc PushI
	Print(var_1_string, var_2_int, var_3_int, var_0_int); // 0xd Func
	return 0; // 0xf Return
}


task_0_event_200(var_0_int, var_1_int, var_2_string, var_3_object)
{
	var_0_int = var_1_int; // 0x11 TMov
	return 0; // 0x12 Return
}


main(var_0_int)
{
	var_0_int = 0; // 0x0 TMovI
	var_1_string = "default"; // 0x1 PushS
	SetBackground(var_1_string); // 0x2 Func
	var_2_bool = 1; // 0x4 PushB
	SetOwnerDraw(var_2_bool); // 0x5 Func
	ProcessEvents(); // 0x7 Func
	return 0; // 0x9 Return
}


