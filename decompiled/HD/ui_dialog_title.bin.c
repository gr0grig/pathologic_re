task_0_event_0(var_0_string, var_1_int, var_2_int)
{
	var_3_int = 0; var_4_int = 0; // 0x16 PushV
	var_5_string = "default"; // 0x17 PushS
	var_6_int = 0; // 0x18 PushI
	var_7_int = 0; // 0x19 PushI
	var_8_float = 0.50196; // 0x1a PushF
	var_9_float = 0.50196; // 0x1b PushF
	var_10_float = 0.50196; // 0x1c PushF
	PrintInWidth(var_4_int, var_5_string, var_6_int, var_7_int, var_10_float, var_0_string, var_8_float, var_9_float, var_10_float); // 0x1d Func
	return 2; // 0x1f Return
}


main(var_0_string, var_1_int, var_2_int)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0x0 PushV
	ShowCursor(); // 0x1 Func
	var_5_bool = 1; // 0x3 PushB
	SetOwnerDraw(var_5_bool); // 0x4 Func
	GetWindowSize(var_4_object, var_3_object); // 0x6 Func
	GetConversation(var_4_object); // 0x8 Func
	var_6_bool = var_4_object == 0; // 0xa NullEq
	if(var_6_bool == 0) goto Label_16; // 0xb JumpB
	var_7_string = "null conversation"; // 0xc PushS
	UITrace(var_7_string); // 0xd Func
	return 2; // 0xf Return
	
Label_16:
	GetNPCName(var_0_string); // 0x10 ObjFunc
	ProcessEvents(); // 0x12 Func
	return 2; // 0x14 Return
}


