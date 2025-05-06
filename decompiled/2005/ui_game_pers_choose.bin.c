task_0_event_200(var_0_int, var_1_string, var_2_object)
{
	var_3_string = "danko_button"; // 0xa PushS
	var_4_bool = var_1_string == var_3_string; // 0xb Eq
	if(var_4_bool == 0) goto Label_18; // 0xc JumpB
	var_5_int = 0; // 0xd PushI
	SendToParent(var_5_int); // 0xe Func
	DestroyWindow(); // 0x10 Func
	
Label_18:
	var_6_string = "klara_button"; // 0x12 PushS
	var_7_bool = var_1_string == var_6_string; // 0x13 Eq
	if(var_7_bool == 0) goto Label_24; // 0x14 JumpB
	var_8_int = 1; // 0x15 PushI
	SendToParent(var_8_int); // 0x16 Func
	
Label_24:
	var_9_string = "burah_button"; // 0x18 PushS
	var_10_bool = var_1_string == var_9_string; // 0x19 Eq
	if(var_10_bool == 0) goto Label_30; // 0x1a JumpB
	var_11_int = 2; // 0x1b PushI
	SendToParent(var_11_int); // 0x1c Func
	
Label_30:
	return 0; // 0x1e Return
}


main()
{
	var_0_bool = 0; // 0x0 PushB
	SetOwnerDraw(var_0_bool); // 0x1 Func
	var_1_bool = 1; // 0x3 PushB
	SetModal(var_1_bool); // 0x4 Func
	ProcessEvents(); // 0x6 Func
	return 0; // 0x8 Return
}


