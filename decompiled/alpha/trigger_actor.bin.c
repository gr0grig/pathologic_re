task_0_event_23(var_0_object)
{
	var_1_bool = 0; var_2_string = ""; var_3_bool = 0; var_4_string = ""; // 0x7 PushV
	var_5_bool = GlobalVars[1]; // 0x8 PushGE
	var_6_bool = var_5_bool == 0; // 0x9 Not
	if(var_6_bool == 0) goto Label_12; // 0xa JumpB
	return 4; // 0xb Return
	
Label_12:
	IsPlayerActor(var_0_object, var_3_bool); // 0xc Func
	var_7_bool = var_3_bool; // 0xe Push
	if(var_7_bool == 0) goto Label_28; // 0xf JumpB
	var_8_bool = GlobalVars[1]; // 0x10 PushGE
	var_8_bool = 0; // 0x11 MovB
	GlobalVars[1] = var_8_bool; // 0x12 PopGE
	GetActorName(var_4_string); // 0x13 Func
	var_9_bool = 0; var_10_string = ""; var_11_string = ""; // 0x15 PushV
	var_12_string = GlobalVars[0]; // 0x16 PushGE
	var_10_string = var_12_string; // 0x17 Mov
	var_11_string = var_4_string; // 0x19 Mov
	func_29(var_9_bool, var_10_string, var_11_string); // 0x1a Call
	
Label_28:
	return 4; // 0x1c Return
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


func_29(var_9_bool, var_10_string, var_11_string)
{
	var_13_object = Obj(); var_14_object = Obj(); // 0x1d PushV
	FindActor(var_14_object, var_10_string); // 0x1e Func
	var_15_bool = var_14_object == 0; // 0x20 NullEq
	if(var_15_bool == 0) goto Label_36; // 0x21 JumpB
	var_9_bool = 0; // 0x22 MovB
	return 2; // 0x23 Return
	
Label_36:
	Trigger(var_14_object, var_11_string); // 0x24 Func
	var_9_bool = 1; // 0x26 MovB
	return 2; // 0x27 Return
}


