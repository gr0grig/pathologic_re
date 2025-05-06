task_0_event_26(var_0_string)
{
	Trace(var_0_string); // 0xa Func
	var_1_string = "fail"; // 0xc PushS
	var_2_bool = var_0_string == var_1_string; // 0xd Eq
	if(var_2_bool == 0) goto Label_19; // 0xe JumpB
	func_37(); // 0x10 Call
	goto Label_25; // 0x12 Jump
	
Label_25:
	return 0; // 0x19 Return
	
Label_19:
	var_8_string = "completed"; // 0x13 PushS
	var_9_bool = var_0_string == var_8_string; // 0x14 Eq
	if(var_9_bool == 0) goto Label_25; // 0x15 JumpB
	func_45(); // 0x17 Call
}


task_0_event_9(var_0_int, var_1_float)
{
	func_26(); // 0x51 Call
	return 0; // 0x53 Return
}


main()
{
	var_0_string = "d9q02"; // 0x0 PushS
	var_1_int = 1; // 0x1 PushI
	SetVariable(var_0_string, var_1_int); // 0x2 Func
	var_2_int = 0; // 0x4 PushV
	var_2_int = 9; // 0x5 MovI
	func_60(var_2_int); // 0x6 Call
	return 0; // 0x8 Return
}


func_37()
{
	var_7_string = "d9q02"; // 0x25 PushS
	var_8_int = -1; // 0x26 PushI
	SetVariable(var_7_string, var_8_int); // 0x27 Func
	func_53(); // 0x2a Call
	return 0; // 0x2c Return
}


func_45()
{
	var_10_string = "d9q02"; // 0x2d PushS
	var_11_int = 1000; // 0x2e PushI
	SetVariable(var_10_string, var_11_int); // 0x2f Func
	func_53(); // 0x32 Call
	return 0; // 0x34 Return
}


func_84(var_8_object)
{
	var_9_object = Obj(); var_10_object = Obj(); // 0x54 PushV
	self(var_10_object); // 0x55 Func
	var_8_object = var_10_object; // 0x57 Mov
	return 2; // 0x58 Return
}


func_53()
{
	EventDisable(26); // 0x35 EventDisable
	var_8_object = Obj(); // 0x36 PushV
	func_84(var_8_object); // 0x37 Call
	RemoveActor(var_8_object); // 0x39 Func
	return 0; // 0x3b Return
}


func_26()
{
	var_2_int = 0; var_3_int = 0; // 0x1a PushV
	var_4_string = "d9q02"; // 0x1b PushS
	GetVariable(var_4_string, var_3_int); // 0x1c Func
	var_5_int = 1000; // 0x1e PushI
	var_6_bool = var_3_int != var_5_int; // 0x1f Neq
	if(var_6_bool == 0) goto Label_36; // 0x20 JumpB
	func_37(); // 0x22 Call
	
Label_36:
	return 2; // 0x24 Return
}


func_60(var_2_int)
{
	var_3_float = 0; var_4_float = 0; // 0x3c PushV
	GetGameTime(var_4_float); // 0x3d Func
	var_5_int = 24; // 0x3f PushI
	var_6_float = var_2_int * var_5_int; // 0x40 Mult
	var_7_bool = var_4_float >= var_6_float; // 0x41 GE
	if(var_7_bool == 0) goto Label_71; // 0x42 JumpB
	func_53(); // 0x44 Call
	goto Label_78; // 0x46 Jump
	
Label_78:
	return 2; // 0x4e Return
	
Label_71:
	var_11_int = 0; // 0x47 PushI
	var_12_int = 24; // 0x48 PushI
	var_13_float = var_2_int * var_12_int; // 0x49 Mult
	SetTimeEvent(var_11_int, var_13_float); // 0x4a Func
	Hold(); // 0x4c Func
}


