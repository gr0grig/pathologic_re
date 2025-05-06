task_0_event_100(var_0_int)
{
	DestroyWindow(); // 0xe Func
	return 0; // 0x10 Return
}


task_0_event_200(var_0_int, var_1_string, var_2_object)
{
	return 0; // 0x12 Return
}


main()
{
	var_0_string = "default"; // 0x0 PushS
	SetCursor(var_0_string); // 0x1 Func
	ShowCursor(); // 0x3 Func
	CaptureKeyboard(); // 0x5 Func
	var_1_bool = 0; // 0x7 PushB
	SetOwnerDraw(var_1_bool); // 0x8 Func
	ProcessEvents(); // 0xa Func
	return 0; // 0xc Return
}


