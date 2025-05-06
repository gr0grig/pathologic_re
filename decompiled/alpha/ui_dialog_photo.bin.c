task_0_event_0(var_0_string)
{
	var_1_int = 0; // 0x14 PushI
	var_2_int = 0; // 0x15 PushI
	Blit(var_0_string, var_1_int, var_2_int); // 0x16 Func
	return 0; // 0x18 Return
}


main(var_0_string)
{
	var_1_object = Obj(); var_2_object = Obj(); // 0x0 PushV
	GetConversation(var_2_object); // 0x1 Func
	var_3_bool = var_2_object == 0; // 0x3 NullEq
	if(var_3_bool == 0) goto Label_9; // 0x4 JumpB
	var_4_string = "null conversation"; // 0x5 PushS
	UITrace(var_4_string); // 0x6 Func
	return 2; // 0x8 Return
	
Label_9:
	GetPhoto(var_0_string); // 0x9 ObjFunc
	LoadImage(var_0_string); // 0xb Func
	var_5_bool = 1; // 0xd PushB
	SetOwnerDraw(var_5_bool); // 0xe Func
	ProcessEvents(); // 0x10 Func
	return 2; // 0x12 Return
}


