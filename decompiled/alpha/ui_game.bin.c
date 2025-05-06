task_0_event_0()
{
	return 0; // 0x11 Return
}


task_0_event_200(var_0_int, var_1_string, var_2_object)
{
	var_3_string = "start"; // 0x13 PushS
	var_4_bool = var_1_string == var_3_string; // 0x14 Eq
	if(var_4_bool == 0) goto Label_31; // 0x15 JumpB
	var_5_bool = 0; // 0x16 PushB
	ShowCursor(var_5_bool); // 0x17 Func
	var_6_string = "world_danko.xml"; // 0x19 PushS
	var_7_string = "player_danko.xml"; // 0x1a PushS
	NewGame(var_6_string, var_7_string); // 0x1b Func
	DestroyWindow(); // 0x1d Func
	
Label_31:
	var_8_string = "loadgame_button"; // 0x1f PushS
	var_9_bool = var_1_string == var_8_string; // 0x20 Eq
	if(var_9_bool == 0) goto Label_36; // 0x21 JumpB
	DestroyWindow(); // 0x22 Func
	
Label_36:
	var_10_string = "savegame_button"; // 0x24 PushS
	var_11_bool = var_1_string == var_10_string; // 0x25 Eq
	if(var_11_bool == 0) goto Label_41; // 0x26 JumpB
	DestroyWindow(); // 0x27 Func
	
Label_41:
	var_12_string = "danko_button"; // 0x29 PushS
	var_13_bool = var_1_string == var_12_string; // 0x2a Eq
	if(var_13_bool == 0) goto Label_53; // 0x2b JumpB
	var_14_bool = 0; // 0x2c PushB
	ShowCursor(var_14_bool); // 0x2d Func
	var_15_string = "world_danko.xml"; // 0x2f PushS
	var_16_string = "player_danko.xml"; // 0x30 PushS
	NewGame(var_15_string, var_16_string); // 0x31 Func
	DestroyWindow(); // 0x33 Func
	
Label_53:
	return 0; // 0x35 Return
}


main()
{
	ShowCursor(); // 0x0 Func
	var_0_bool = 0; // 0x2 PushB
	SetOwnerDraw(var_0_bool); // 0x3 Func
	var_1_string = "default"; // 0x5 PushS
	SetCursor(var_1_string); // 0x6 Func
	var_2_string = "default"; // 0x8 PushS
	SetBackground(var_2_string); // 0x9 Func
	var_3_string = "menumusic"; // 0xb PushS
	PlaySound(var_3_string); // 0xc Func
	ProcessEvents(); // 0xe Func
	return 0; // 0x10 Return
}


