task_0_event_24(var_0_int)
{
	CameraSwitchToNormal(); // 0x13 Func
	return 0; // 0x15 Return
}


task_1_event_26(var_0_string)
{
	var_1_string = "@Trigger : "; // 0x27 PushS
	var_2_int = var_1_string + var_0_string; // 0x28 Add
	Trace(var_2_int); // 0x29 Func
	var_3_string = "d2q01_trigger"; // 0x2b PushS
	var_4_bool = var_0_string == var_3_string; // 0x2c Eq
	if(var_4_bool == 0) goto Label_52; // 0x2d JumpB
	var_5_string = ""; // 0x2e PushV
	var_5_string = "scenes/d2q01_trigger.mot"; // 0x2f MovS
	TaskCall(0); // 0x30 TaskCall
	func_0(var_5_string); // 0x31 Call
	TaskReturn(); // 0x32 TaskReturn
	
Label_52:
	return 0; // 0x34 Return
}


main()
{
	
Label_34:
	Hold(); // 0x22 Func
	goto Label_34; // 0x24 Jump
}


func_0(var_5_string)
{
	var_6_string = "space"; // 0x1 PushS
	RegisterKeyCallback(var_6_string); // 0x2 Func
	var_7_string = "escape"; // 0x4 PushS
	RegisterKeyCallback(var_7_string); // 0x5 Func
	var_8_string = ""; // 0x7 PushV
	var_8_string = var_5_string; // 0x8 Mov
	func_22(var_8_string); // 0x9 Call
	var_11_string = "escape"; // 0xb PushS
	UnregisterKeyCallback(var_11_string); // 0xc Func
	var_12_string = "space"; // 0xe PushS
	UnregisterKeyCallback(var_12_string); // 0xf Func
	return 0; // 0x11 Return
}


func_22(var_8_string)
{
	var_9_string = "playing: "; // 0x17 PushS
	var_10_int = var_9_string + var_8_string; // 0x18 Add
	Trace(var_10_int); // 0x19 Func
	CameraPlay(var_8_string); // 0x1b Func
	CameraWaitForPlayFinish(); // 0x1d Func
	CameraSwitchToNormal(); // 0x1f Func
	return 0; // 0x21 Return
}


