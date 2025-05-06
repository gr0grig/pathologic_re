task_0_event_101(var_0_int)
{
	var_1_int = 267; // 0xe PushI
	var_2_bool = var_0_int == var_1_int; // 0xf Eq
	if(var_2_bool == 0) goto Label_22; // 0x10 JumpB
	var_3_int = 1001; // 0x11 PushI
	var_4_string = "text"; // 0x12 PushS
	SendMessage(var_3_int, var_4_string); // 0x13 Func
	goto Label_29; // 0x15 Jump
	
Label_29:
	return 0; // 0x1d Return
	
Label_22:
	var_5_int = 268; // 0x16 PushI
	var_6_bool = var_0_int == var_5_int; // 0x17 Eq
	if(var_6_bool == 0) goto Label_29; // 0x18 JumpB
	var_7_int = 1000; // 0x19 PushI
	var_8_string = "text"; // 0x1a PushS
	SendMessage(var_7_int, var_8_string); // 0x1b Func
}


task_0_event_102(var_0_int)
{
	var_1_int = 272; // 0x1f PushI
	var_2_bool = var_0_int == var_1_int; // 0x20 Eq
	if(var_2_bool == 0) goto Label_39; // 0x21 JumpB
	var_3_int = 1001; // 0x22 PushI
	var_4_string = "text"; // 0x23 PushS
	SendMessage(var_3_int, var_4_string); // 0x24 Func
	goto Label_46; // 0x26 Jump
	
Label_46:
	return 0; // 0x2e Return
	
Label_39:
	var_5_int = 274; // 0x27 PushI
	var_6_bool = var_0_int == var_5_int; // 0x28 Eq
	if(var_6_bool == 0) goto Label_46; // 0x29 JumpB
	var_7_int = 1000; // 0x2a PushI
	var_8_string = "text"; // 0x2b PushS
	SendMessage(var_7_int, var_8_string); // 0x2c Func
}


task_0_event_100(var_0_int)
{
	DestroyWindow(); // 0x30 Func
	return 0; // 0x32 Return
}


task_0_event_200(var_0_int, var_1_string, var_2_object)
{
	return 0; // 0x34 Return
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


