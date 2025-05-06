task_0_event_0(var_0_string, var_1_int, var_2_int)
{
	var_3_int = 0; // 0x16 PushI
	var_4_int = 0; // 0x17 PushI
	StretchBlit(var_0_string, var_3_int, var_4_int, var_4_int, var_3_int); // 0x18 Func
	return 0; // 0x1a Return
}


main(var_0_string, var_1_int, var_2_int)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0x0 PushV
	GetConversation(var_4_object); // 0x1 Func
	var_5_bool = var_4_object == 0; // 0x3 NullEq
	if(var_5_bool == 0) goto Label_9; // 0x4 JumpB
	var_6_string = "null conversation"; // 0x5 PushS
	UITrace(var_6_string); // 0x6 Func
	return 2; // 0x8 Return
	
Label_9:
	GetPhoto2(var_0_string); // 0x9 ObjFunc
	LoadImage(var_0_string); // 0xb Func
	var_7_bool = 1; // 0xd PushB
	SetOwnerDraw(var_7_bool); // 0xe Func
	GetWindowSize(var_4_object, var_3_object); // 0x10 Func
	ProcessEvents(); // 0x12 Func
	return 2; // 0x14 Return
}


