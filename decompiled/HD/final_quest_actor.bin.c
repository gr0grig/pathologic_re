task_0_event_26(var_0_string)
{
	var_1_float = 0; var_2_float = 0; var_3_float = 0; var_4_float = 0; // 0x4 PushV
	Trace(var_0_string); // 0x5 Func
	var_5_string = "voices"; // 0x7 PushS
	var_6_bool = var_0_string == var_5_string; // 0x8 Eq
	if(var_6_bool == 0) goto Label_14; // 0x9 JumpB
	var_7_string = "voice"; // 0xa PushS
	PlaySound(var_7_string); // 0xb Func
	goto Label_49; // 0xd Jump
	
Label_49:
	return 4; // 0x31 Return
	
Label_14:
	var_8_string = "whiten"; // 0xe PushS
	var_9_bool = var_0_string == var_8_string; // 0xf Eq
	if(var_9_bool == 0) goto Label_49; // 0x10 JumpB
	func_50(); // 0x12 NEW_2
	var_12_string = "final_theater_cam.mot"; // 0x14 PushS
	CameraPlay(var_12_string); // 0x15 Func
	CameraWaitForPlayFinish(); // 0x17 Func
	var_3_float = 0; // 0x19 MovI
	
Label_26:
	var_13_int = 1; // 0x1a PushI
	Trace(var_13_int); // 0x1b Func
	sync(var_4_float); // 0x1d Func
	var_14_float = 1.0; // 0x1f PushF
	var_15_float = var_4_float * var_14_float; // 0x20 Mult
	var_16_float = 2.0; // 0x21 PushF
	var_17_float = var_15_float / var_16_float; // 0x22 Div
	var_3_float = var_3_float + var_17_float; // 0x23 Add2
	ModDarkenLevel(var_3_float); // 0x24 Func
	var_18_int = 1; // 0x26 PushI
	var_19_bool = var_3_float < var_18_int; // 0x27 LT
	if(var_19_bool == 0) goto Label_26; // 0x28 JumpB
	func_55(); // 0x2a NEW_2
	CameraSwitchToNormal(); // 0x2c Func
	var_22_string = "exit"; // 0x2e PushS
	TriggerWorld(var_22_string); // 0x2f Func
}


main()
{
	
Label_0:
	Hold(); // 0x0 Func
	goto Label_0; // 0x2 Jump
}


func_50()
{
	var_10_float = 0.5; // 0x32 PushF
	var_11_float = 0.886; // 0x33 PushF
	SetSepia(var_10_float, var_11_float); // 0x34 Func
	return 0; // 0x36 Return
}


func_55()
{
	var_20_int = 0; // 0x37 PushI
	var_21_int = 0; // 0x38 PushI
	SetSepia(var_20_int, var_21_int); // 0x39 Func
	return 0; // 0x3b Return
}


