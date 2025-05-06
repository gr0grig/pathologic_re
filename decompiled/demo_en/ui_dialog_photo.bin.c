task_0_event_0(var_0_string, var_1_object)
{
	var_2_int = 0; // 0x14 PushI
	var_3_int = 0; // 0x15 PushI
	Blit(var_0_string, var_2_int, var_3_int); // 0x16 Func
	return 0; // 0x18 Return
}


task_0_event_2(var_0_string, var_1_object, var_2_int, var_3_int)
{
	var_4_bool = var_1_object == 0; // 0x1a Not
	if(var_4_bool == 0) goto Label_33; // 0x1b JumpB
	var_5_string = "dialog_photo.xml"; // 0x1c PushS
	var_6_bool = 1; // 0x1d PushB
	CreateWindow(var_5_string, var_6_bool, var_6_bool); // 0x1e Func
	goto Label_35; // 0x20 Jump
	
Label_35:
	return 0; // 0x23 Return
	
Label_33:
	DestroyWindow(); // 0x21 TObjFunc
}


main(var_0_string, var_1_object)
{
	var_2_object = Obj(); var_3_object = Obj(); // 0x0 PushV
	GetConversation(var_3_object); // 0x1 Func
	var_4_bool = var_3_object == 0; // 0x3 NullEq
	if(var_4_bool == 0) goto Label_9; // 0x4 JumpB
	var_5_string = "null conversation"; // 0x5 PushS
	UITrace(var_5_string); // 0x6 Func
	return 2; // 0x8 Return
	
Label_9:
	GetPhoto(var_0_string); // 0x9 ObjFunc
	LoadImage(var_0_string); // 0xb Func
	var_6_bool = 1; // 0xd PushB
	SetOwnerDraw(var_6_bool); // 0xe Func
	ProcessEvents(); // 0x10 Func
	return 2; // 0x12 Return
}


