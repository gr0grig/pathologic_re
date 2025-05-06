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
	func_112(); // 0x26 Call
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
	func_108(); // 0x7 Call
	var_1_bool = 0; // 0x9 PushV
	func_61(var_1_bool); // 0xa Call
	var_4_bool = var_1_bool == 0; // 0xc Not
	if(var_4_bool == 0) goto Label_19; // 0xd JumpB
	TaskCall(0); // 0xf TaskCall
	func_0(); // 0x10 Call
	TaskReturn(); // 0x11 TaskReturn
	
Label_19:
	var_5_string = ""; // 0x13 PushV
	var_5_string = "Neutral"; // 0x14 MovS
	func_66(var_5_string); // 0x15 Call
	lshWaitForAnimEnd(); // 0x17 Func
	goto Label_19; // 0x19 Jump
}


func_0()
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_66(var_5_string)
{
	var_6_float = 0; var_7_float = 0; var_8_float = 0; var_9_float = 0; // 0x42 PushV
	var_10_string = "playing "; // 0x43 PushS
	var_11_int = var_10_string + var_5_string; // 0x44 Add
	Trace(var_11_int); // 0x45 Func
	lshGetAnimTimes(var_5_string, var_8_float, var_9_float); // 0x47 Func
	lshPlayAnimation(var_8_float, var_9_float); // 0x49 Func
	var_12_string = "start: "; // 0x4b PushS
	var_13_int = var_12_string + var_8_float; // 0x4c Add
	Trace(var_13_int); // 0x4d Func
	var_14_string = "end: "; // 0x4f PushS
	var_15_int = var_14_string + var_9_float; // 0x50 Add
	Trace(var_15_int); // 0x51 Func
	return 4; // 0x53 Return
}


func_99(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0; // 0x63 PushV
	var_15_string = ""; // 0x64 PushV
	var_15_string = "No"; // 0x65 MovS
	func_66(var_15_string); // 0x66 Call
	lshWaitForAnimEnd(var_14_bool); // 0x68 Func
	var_12_bool = var_14_bool; // 0x6a Mov
	return 2; // 0x6b Return
}


func_108()
{
	var_0_bool = GlobalVars[1]; // 0x6c PushGE
	var_0_bool = 0; // 0x6d MovB
	GlobalVars[1] = var_0_bool; // 0x6e PopGE
	return 0; // 0x6f Return
}


func_112()
{
	var_2_bool = GlobalVars[1]; // 0x71 PushGE
	var_3_bool = var_2_bool == 0; // 0x72 Not
	if(var_3_bool == 0) goto Label_116; // 0x73 JumpB
	
Label_116:
	var_4_bool = 0; var_5_int = 0; // 0x74 PushV
	var_5_int = 1; // 0x75 MovI
	func_93(var_4_bool, var_5_int); // 0x76 Call
	if(var_4_bool == 0) goto Label_121; // 0x78 JumpB
	
Label_121:
	var_12_bool = 0; // 0x79 PushV
	func_99(var_12_bool); // 0x7a Call
	return 0; // 0x7c Return
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


func_84(var_6_int)
{
	var_7_float = 0; var_8_float = 0; // 0x54 PushV
	GetGameTime(var_8_float); // 0x55 Func
	var_9_int = 1; // 0x57 PushI
	var_10_int = 0; // 0x58 PushV
	var_11_int = 24; // 0x59 PushI
	var_10_int = var_8_float / var_8_float; // 0x5a Div2
	var_6_int = var_9_int + var_10_int; // 0x5b Add2
	return 2; // 0x5c Return
}


func_93(var_4_bool, var_5_int)
{
	var_6_int = 0; // 0x5e PushV
	func_84(var_6_int); // 0x5f Call
	var_4_bool = var_6_int == var_5_int; // 0x61 Eq2
	return 0; // 0x62 Return
}


func_61(var_1_bool)
{
	var_2_bool = 0; var_3_bool = 0; // 0x3d PushV
	IsLoaded(var_3_bool); // 0x3e Func
	var_1_bool = var_3_bool; // 0x40 Mov
	return 2; // 0x41 Return
}


