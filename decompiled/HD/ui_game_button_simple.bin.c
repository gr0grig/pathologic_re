task_0_event_2(var_0_int, var_1_int)
{
	var_2_int = 0; // 0x7 PushI
	SendMessageToParent(var_2_int); // 0x8 Func
	return 0; // 0xa Return
}


main()
{
	var_0_string = "default"; // 0x0 PushS
	SetBackground(var_0_string); // 0x1 Func
	ProcessEvents(); // 0x3 Func
	return 0; // 0x5 Return
}


