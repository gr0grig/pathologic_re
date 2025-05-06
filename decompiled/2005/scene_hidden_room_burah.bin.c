task_0_event_5()
{
	var_0_bool = 0; var_1_string = ""; var_2_string = ""; // 0x4 PushV
	var_1_string = "quest_b12_01"; // 0x5 MovS
	var_2_string = "hidden_room_load"; // 0x6 MovS
	func_16(var_0_bool, var_1_string, var_2_string); // 0x7 NEW_2
	return 0; // 0x9 Return
}


task_0_event_6()
{
	var_0_bool = 0; var_1_string = ""; var_2_string = ""; // 0xa PushV
	var_1_string = "quest_b12_01"; // 0xb MovS
	var_2_string = "hidden_room_unload"; // 0xc MovS
	func_16(var_0_bool, var_1_string, var_2_string); // 0xd NEW_2
	return 0; // 0xf Return
}


main()
{
	
Label_0:
	Hold(); // 0x0 Func
	goto Label_0; // 0x2 Jump
}


func_16(var_0_bool, var_1_string, var_2_string)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0x10 PushV
	FindActor(var_4_object, var_1_string); // 0x11 Func
	var_5_bool = var_4_object == 0; // 0x13 NullEq
	if(var_5_bool == 0) goto Label_23; // 0x14 JumpB
	var_0_bool = 0; // 0x15 MovB
	return 2; // 0x16 Return
	
Label_23:
	Trigger(var_4_object, var_2_string); // 0x17 Func
	var_0_bool = 1; // 0x19 MovB
	return 2; // 0x1a Return
}


