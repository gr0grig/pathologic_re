task_0_event_0(var_0_string, var_1_object, var_2_int, var_3_int)
{
	var_4_int = 0; // 0x16 PushI
	var_5_int = 0; // 0x17 PushI
	StretchBlit(var_0_string, var_4_int, var_5_int, var_4_int, var_3_int); // 0x18 Func
	return 0; // 0x1a Return
}


task_0_event_2(var_0_string, var_1_object, var_2_int, var_3_int, var_4_int, var_5_int)
{
	var_6_bool = var_1_object == 0; // 0x1c Not
	if(var_6_bool == 0) goto Label_35; // 0x1d JumpB
	var_7_string = "dialog_photo.xml"; // 0x1e PushS
	var_8_bool = 1; // 0x1f PushB
	CreateWindow(var_7_string, var_8_bool, var_8_bool); // 0x20 Func
	goto Label_37; // 0x22 Jump
	
Label_37:
	return 0; // 0x25 Return
	
Label_35:
	DestroyWindow(); // 0x23 TObjFunc
}


main(var_0_string, var_1_object, var_2_int, var_3_int)
{
	var_4_object = Obj(); var_5_object = Obj(); // 0x0 PushV
	GetConversation(var_5_object); // 0x1 Func
	var_6_bool = var_5_object == 0; // 0x3 NullEq
	if(var_6_bool == 0) goto Label_9; // 0x4 JumpB
	var_7_string = "null conversation"; // 0x5 PushS
	UITrace(var_7_string); // 0x6 Func
	return 2; // 0x8 Return
	
Label_9:
	GetPhoto(var_0_string); // 0x9 ObjFunc
	LoadImage(var_0_string); // 0xb Func
	var_8_bool = 1; // 0xd PushB
	SetOwnerDraw(var_8_bool); // 0xe Func
	GetWindowSize(var_4_object, var_3_int); // 0x10 Func
	ProcessEvents(); // 0x12 Func
	return 2; // 0x14 Return
}


