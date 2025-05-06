task_0_event_5()
{
	TaskCall(1); // 0x5 TaskCall
	func_10(); // 0x6 Call
	TaskReturn(); // 0x7 TaskReturn
	return 0; // 0x9 Return
}


task_1_event_6()
{
	StopGroup0(); // 0x21 Func
	return 0; // 0x23 Return
}


main()
{
	
Label_0:
	Hold(); // 0x0 Func
	goto Label_0; // 0x2 Jump
}


func_10()
{
	var_0_bool = 0; var_1_cvector = CVector(0,0,0); var_2_bool = 0; var_3_cvector = CVector(0,0,0); // 0xa PushV
	var_4_int = 3; // 0xb PushI
	Sleep(var_4_int, var_2_bool); // 0xc Func
	var_5_bool = var_2_bool == 0; // 0xe Not
	if(var_5_bool == 0) goto Label_17; // 0xf JumpB
	return 4; // 0x10 Return
	
Label_17:
	var_6_int = 0; // 0x11 PushI
	var_7_int = 0; // 0x12 PushI
	GetRandomPFPoint(var_3_cvector, var_6_int, var_7_int); // 0x13 Func
	var_8_cvector = CVector(0,0,0); // 0x15 PushV
	var_8_cvector = var_3_cvector; // 0x16 Mov
	func_36(var_8_cvector); // 0x17 Call
	var_19_int = 30; // 0x19 PushI
	Sleep(var_19_int, var_2_bool); // 0x1a Func
	var_20_bool = var_2_bool == 0; // 0x1c Not
	if(var_20_bool == 0) goto Label_31; // 0x1d JumpB
	goto Label_32; // 0x1e Jump
	
Label_32:
	return 4; // 0x20 Return
	
Label_31:
	goto Label_17; // 0x1f Jump
}


func_51(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x33 PushV
	self(var_16_object); // 0x34 Func
	var_14_object = var_16_object; // 0x36 Mov
	return 2; // 0x37 Return
}


func_36(var_8_cvector)
{
	var_9_object = Obj(); var_10_object = Obj(); // 0x24 PushV
	var_11_string = "New fog at "; // 0x25 PushS
	var_12_int = var_11_string + var_8_cvector; // 0x26 Add
	Trace(var_12_int); // 0x27 Func
	var_13_string = "fog"; // 0x29 PushS
	var_14_object = Obj(); // 0x2a PushV
	func_51(var_14_object); // 0x2b Call
	var_17_cvector = CVector(0.0, 0.0, 1.0); // 0x2d PushVec
	var_18_string = "horror_fog.xml"; // 0x2e PushS
	AddActorByType(var_10_object, var_13_string, var_14_object, var_8_cvector, var_17_cvector, var_18_string); // 0x2f Func
	return 2; // 0x31 Return
}


