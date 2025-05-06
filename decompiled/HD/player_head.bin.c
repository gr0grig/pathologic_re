task_0_event_21()
{
	StopCameraMotion(); // 0x18 Func
	return 0; // 0x1a Return
}


task_1_event_20()
{
	StopGroup0(); // 0x23 Func
	return 0; // 0x25 Return
}


main()
{
	var_0_bool = 0; var_1_bool = 0; // 0x0 PushV
	
Label_1:
	TaskCall(1); // 0x2 TaskCall
	func_27(); // 0x3 NEW_2
	TaskReturn(); // 0x4 TaskReturn
	
Label_6:
	var_5_string = "head"; // 0x6 PushS
	PlayCameraMotion(var_5_string); // 0x7 Func
	WaitForCameraMotionEnd(); // 0x9 Func
	IsWalking(var_1_bool); // 0xb Func
	var_6_bool = var_1_bool == 0; // 0xd Not
	if(var_6_bool == 0) goto Label_16; // 0xe JumpB
	goto Label_17; // 0xf Jump
	
Label_17:
	TaskCall(2); // 0x12 TaskCall
	func_38(); // 0x13 NEW_2
	TaskReturn(); // 0x14 TaskReturn
	goto Label_1; // 0x16 Jump
	
Label_16:
	goto Label_6; // 0x10 Jump
}


func_27()
{
	var_2_bool = 0; var_3_bool = 0; // 0x1b PushV
	IsWalking(var_3_bool); // 0x1c Func
	var_4_bool = var_3_bool == 0; // 0x1e Not
	if(var_4_bool == 0) goto Label_34; // 0x1f JumpB
	Hold(); // 0x20 Func
	
Label_34:
	return 2; // 0x22 Return
}


func_38()
{
	var_7_float = 0.08727; // 0x26 PushF
	var_8_float = 60.0; // 0x27 PushF
	InterpolateCameraMotion(var_7_float, var_8_float); // 0x28 Func
	WaitForCameraMotionEnd(); // 0x2a Func
	return 0; // 0x2c Return
}


