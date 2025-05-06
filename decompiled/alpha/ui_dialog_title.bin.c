task_0_event_0(var_0_string)
{
	var_1_string = "default"; // 0x16 PushS
	var_2_int = 0; // 0x17 PushI
	var_3_int = 0; // 0x18 PushI
	var_4_float = 1.0; // 0x19 PushF
	var_5_float = 1.0; // 0x1a PushF
	var_6_float = 1.0; // 0x1b PushF
	Print(var_1_string, var_2_int, var_3_int, var_0_string, var_4_float, var_5_float, var_6_float); // 0x1c Func
	return 0; // 0x1e Return
}


main(var_0_string)
{
	var_1_object = Obj(); var_2_object = Obj(); // 0x0 PushV
	ShowCursor(); // 0x1 Func
	var_3_bool = 1; // 0x3 PushB
	SetOwnerDraw(var_3_bool); // 0x4 Func
	GetConversation(var_2_object); // 0x6 Func
	var_4_bool = var_2_object == 0; // 0x8 NullEq
	if(var_4_bool == 0) goto Label_14; // 0x9 JumpB
	var_5_string = "null conversation"; // 0xa PushS
	UITrace(var_5_string); // 0xb Func
	return 2; // 0xd Return
	
Label_14:
	GetNPCName(var_0_string); // 0xe ObjFunc
	_strupr(var_0_string); // 0x10 Func
	ProcessEvents(); // 0x12 Func
	return 2; // 0x14 Return
}


