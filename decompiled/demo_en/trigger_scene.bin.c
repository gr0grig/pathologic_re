task_0_event_23(var_0_object)
{
	var_1_bool = 0; var_2_object = Obj(); var_3_bool = 0; var_4_object = Obj(); // 0x7 PushV
	var_5_bool = GlobalVars[1]; // 0x8 PushGE
	var_6_bool = var_5_bool == 0; // 0x9 Not
	if(var_6_bool == 0) goto Label_12; // 0xa JumpB
	return 4; // 0xb Return
	
Label_12:
	IsPlayerActor(var_0_object, var_3_bool); // 0xc Func
	var_7_bool = var_3_bool; // 0xe Push
	if(var_7_bool == 0) goto Label_25; // 0xf JumpB
	var_8_bool = GlobalVars[1]; // 0x10 PushGE
	var_8_bool = 0; // 0x11 MovB
	GlobalVars[1] = var_8_bool; // 0x12 PopGE
	GetScene(var_4_object); // 0x13 Func
	var_9_string = GlobalVars[0]; // 0x15 PushGE
	Trigger(var_4_object, var_9_string); // 0x16 Func
	var_4_object = 0; // 0x18 SetNull
	
Label_25:
	return 4; // 0x19 Return
}


main()
{
	var_0_bool = GlobalVars[1]; // 0x0 PushGE
	var_0_bool = 1; // 0x1 MovB
	GlobalVars[1] = var_0_bool; // 0x2 PopGE
	
Label_3:
	Hold(); // 0x3 Func
	goto Label_3; // 0x5 Jump
}


