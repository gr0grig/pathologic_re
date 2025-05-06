task_0_event_6()
{
	var_0_bool = 0; var_1_string = ""; var_2_string = ""; // 0x4 PushV
	var_1_string = "quest_d10_01"; // 0x5 MovS
	var_2_string = "house_unload"; // 0x6 MovS
	func_10(var_0_bool, var_1_string, var_2_string); // 0x7 Call
	return 0; // 0x9 Return
}


main()
{
	
Label_0:
	Hold(); // 0x0 Func
	goto Label_0; // 0x2 Jump
}


func_10(var_0_bool, var_1_string, var_2_string)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0xa PushV
	FindActor(var_4_object, var_1_string); // 0xb Func
	var_5_bool = var_4_object == 0; // 0xd NullEq
	if(var_5_bool == 0) goto Label_17; // 0xe JumpB
	var_0_bool = 0; // 0xf MovB
	return 2; // 0x10 Return
	
Label_17:
	Trigger(var_4_object, var_2_string); // 0x11 Func
	var_0_bool = 1; // 0x13 MovB
	return 2; // 0x14 Return
}


