task_0_event_5()
{
	StopGroup0(); // 0x3 Func
	return 0; // 0x5 Return
}


task_1_event_6()
{
	TaskCall(0); // 0x1e TaskCall
	func_0(); // 0x1f Call
	TaskReturn(); // 0x20 TaskReturn
	return 0; // 0x22 Return
}


task_1_event_0(var_0_object)
{
	var_1_object = Obj(); // 0x24 PushV
	var_1_object = var_0_object; // 0x25 Mov
	func_94(); // 0x26 Call
	return 0; // 0x28 Return
}


task_1_event_10(var_0_object)
{
	var_1_bool = 0; var_2_object = Obj(); // 0x2a PushV
	var_2_object = var_0_object; // 0x2b Mov
	func_49(var_2_object); // 0x2c Call
	WaitForAnimEnd(); // 0x2e Func
	return 0; // 0x30 Return
}


main()
{
	func_93(); // 0x7 Call
	var_0_bool = 0; // 0x9 PushV
	func_61(var_0_bool); // 0xa Call
	var_3_bool = var_0_bool == 0; // 0xc Not
	if(var_3_bool == 0) goto Label_19; // 0xd JumpB
	TaskCall(0); // 0xf TaskCall
	func_0(); // 0x10 Call
	TaskReturn(); // 0x11 TaskReturn
	
Label_19:
	var_4_string = ""; // 0x13 PushV
	var_4_string = "Neutral"; // 0x14 MovS
	func_66(var_4_string); // 0x15 Call
	lshWaitForAnimEnd(); // 0x17 Func
	goto Label_19; // 0x19 Jump
}


func_0()
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_66(var_4_string)
{
	var_5_float = 0; var_6_float = 0; var_7_float = 0; var_8_float = 0; // 0x42 PushV
	var_9_string = "playing "; // 0x43 PushS
	var_10_int = var_9_string + var_4_string; // 0x44 Add
	Trace(var_10_int); // 0x45 Func
	lshGetAnimTimes(var_4_string, var_7_float, var_8_float); // 0x47 Func
	lshPlayAnimation(var_7_float, var_8_float); // 0x49 Func
	var_11_string = "start: "; // 0x4b PushS
	var_12_int = var_11_string + var_7_float; // 0x4c Add
	Trace(var_12_int); // 0x4d Func
	var_13_string = "end: "; // 0x4f PushS
	var_14_int = var_13_string + var_8_float; // 0x50 Add
	Trace(var_14_int); // 0x51 Func
	return 4; // 0x53 Return
}


func_49(var_1_bool)
{
	var_3_cvector = CVector(0,0,0); var_4_cvector = CVector(0,0,0); var_5_cvector = CVector(0,0,0); var_6_bool = 0; var_7_cvector = CVector(0,0,0); var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0); var_10_bool = 0; // 0x31 PushV
	GetPosition(var_7_cvector); // 0x32 ObjFunc
	GetPosition(var_8_cvector); // 0x34 Func
	var_9_cvector = var_7_cvector - var_8_cvector; // 0x36 Sub2
	var_11_float = GetByIndex(var_9_cvector, 0); // 0x37 PushE
	var_12_float = GetByIndex(var_9_cvector, 2); // 0x38 PushE
	Rotate(var_11_float, var_12_float, var_10_bool); // 0x39 Func
	var_1_bool = var_10_bool; // 0x3b Mov
	return 8; // 0x3c Return
}


func_84(var_2_bool)
{
	var_3_bool = 0; var_4_bool = 0; // 0x54 PushV
	var_5_string = ""; // 0x55 PushV
	var_5_string = "No"; // 0x56 MovS
	func_66(var_5_string); // 0x57 Call
	lshWaitForAnimEnd(var_4_bool); // 0x59 Func
	var_2_bool = var_4_bool; // 0x5b Mov
	return 2; // 0x5c Return
}


func_93()
{
	return 0; // 0x5d Return
}


func_61(var_0_bool)
{
	var_1_bool = 0; var_2_bool = 0; // 0x3d PushV
	IsLoaded(var_2_bool); // 0x3e Func
	var_0_bool = var_2_bool; // 0x40 Mov
	return 2; // 0x41 Return
}


func_94()
{
	var_2_bool = 0; // 0x5f PushV
	func_84(var_2_bool); // 0x60 Call
	return 0; // 0x62 Return
}


