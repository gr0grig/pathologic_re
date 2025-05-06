task_0_event_2(var_0_int, var_1_int)
{
	var_2_string = "pressed"; // 0x7 PushS
	SetBackground(var_2_string); // 0x8 Func
	var_3_int = -1; // 0xa PushI
	SendMessageToParent(var_3_int); // 0xb Func
	return 0; // 0xd Return
}


task_0_event_3(var_0_int, var_1_int)
{
	var_2_string = "default"; // 0xf PushS
	SetBackground(var_2_string); // 0x10 Func
	return 0; // 0x12 Return
}


task_0_event_10()
{
	var_0_string = "default"; // 0x13 PushS
	SetBackground(var_0_string); // 0x14 Func
	return 0; // 0x16 Return
}


main()
{
	var_0_string = "default"; // 0x0 PushS
	SetBackground(var_0_string); // 0x1 Func
	ProcessEvents(); // 0x3 Func
	return 0; // 0x5 Return
}


