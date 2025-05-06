task_0_event_24(var_0_int)
{
	CameraSwitchToNormal(); // 0x13 Func
	return 0; // 0x15 Return
}


task_1_event_26(var_0_string)
{
	var_1_string = "@Trigger : "; // 0x2d PushS
	var_2_int = var_1_string + var_0_string; // 0x2e Add
	Trace(var_2_int); // 0x2f Func
	var_3_string = "d2q01_trigger"; // 0x31 PushS
	var_4_bool = var_0_string == var_3_string; // 0x32 Eq
	if(var_4_bool == 0) goto Label_58; // 0x33 JumpB
	var_5_string = ""; // 0x34 PushV
	var_5_string = "scenes/d2q01_trigger.mot"; // 0x35 MovS
	TaskCall(0); // 0x36 TaskCall
	func_0(var_5_string); // 0x37 NEW_2
	TaskReturn(); // 0x38 TaskReturn
	
Label_58:
	return 0; // 0x3a Return
}


task_1_event_5()
{
	var_0_bool = 0; var_1_string = ""; var_2_string = ""; // 0x3b PushV
	var_1_string = "quest_b1_05"; // 0x3c MovS
	var_2_string = "house_load"; // 0x3d MovS
	func_66(var_0_bool, var_1_string, var_2_string); // 0x3e NEW_2
	return 0; // 0x40 Return
}


task_1_event_6()
{
	return 0; // 0x41 Return
}


main()
{
	
Label_40:
	Hold(); // 0x28 Func
	goto Label_40; // 0x2a Jump
}


func_0(var_5_string)
{
	var_6_string = "space"; // 0x1 PushS
	RegisterKeyCallback(var_6_string); // 0x2 Func
	var_7_string = "escape"; // 0x4 PushS
	RegisterKeyCallback(var_7_string); // 0x5 Func
	var_8_string = ""; // 0x7 PushV
	var_8_string = var_5_string; // 0x8 Mov
	func_22(var_8_string); // 0x9 NEW_2
	var_15_string = "escape"; // 0xb PushS
	UnregisterKeyCallback(var_15_string); // 0xc Func
	var_16_string = "space"; // 0xe PushS
	UnregisterKeyCallback(var_16_string); // 0xf Func
	return 0; // 0x11 Return
}


func_66(var_0_bool, var_1_string, var_2_string)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0x42 PushV
	FindActor(var_4_object, var_1_string); // 0x43 Func
	var_5_bool = var_4_object == 0; // 0x45 NullEq
	if(var_5_bool == 0) goto Label_73; // 0x46 JumpB
	var_0_bool = 0; // 0x47 MovB
	return 2; // 0x48 Return
	
Label_73:
	Trigger(var_4_object, var_2_string); // 0x49 Func
	var_0_bool = 1; // 0x4b MovB
	return 2; // 0x4c Return
}


func_78()
{
	var_11_float = 0.5; // 0x4e PushF
	var_12_float = 0.886; // 0x4f PushF
	SetSepia(var_11_float, var_12_float); // 0x50 Func
	return 0; // 0x52 Return
}


func_83()
{
	var_13_int = 0; // 0x53 PushI
	var_14_int = 0; // 0x54 PushI
	SetSepia(var_13_int, var_14_int); // 0x55 Func
	return 0; // 0x57 Return
}


func_22(var_8_string)
{
	var_9_string = "playing: "; // 0x17 PushS
	var_10_int = var_9_string + var_8_string; // 0x18 Add
	Trace(var_10_int); // 0x19 Func
	func_78(); // 0x1c NEW_2
	CameraPlay(var_8_string); // 0x1e Func
	CameraWaitForPlayFinish(); // 0x20 Func
	func_83(); // 0x23 NEW_2
	CameraSwitchToNormal(); // 0x25 Func
	return 0; // 0x27 Return
}


