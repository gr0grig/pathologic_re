task_0_event_26(var_0_object, var_1_string)
{
	Trace(var_1_string); // 0xa Func
	var_2_string = "fail"; // 0xc PushS
	var_3_bool = var_1_string == var_2_string; // 0xd Eq
	if(var_3_bool == 0) goto Label_19; // 0xe JumpB
	func_37(); // 0x10 NEW_2
	goto Label_25; // 0x12 Jump
	
Label_25:
	return 0; // 0x19 Return
	
Label_19:
	var_11_string = "completed"; // 0x13 PushS
	var_12_bool = var_1_string == var_11_string; // 0x14 Eq
	if(var_12_bool == 0) goto Label_25; // 0x15 JumpB
	func_45(); // 0x17 NEW_2
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_26(); // 0x56 NEW_2
	return 0; // 0x58 Return
}


main(var_0_object)
{
	var_1_string = "d11q03"; // 0x0 PushS
	var_2_int = 1; // 0x1 PushI
	SetVariable(var_1_string, var_2_int); // 0x2 Func
	var_3_int = 0; // 0x4 PushV
	var_3_int = 11; // 0x5 MovI
	func_65(var_3_int); // 0x6 NEW_2
	return 0; // 0x8 Return
}


func_65(var_3_int)
{
	var_4_float = 0; var_5_float = 0; // 0x41 PushV
	GetGameTime(var_5_float); // 0x42 Func
	var_6_int = 24; // 0x44 PushI
	var_7_float = var_3_int * var_6_int; // 0x45 Mult
	var_8_bool = var_5_float >= var_7_float; // 0x46 GE
	if(var_8_bool == 0) goto Label_76; // 0x47 JumpB
	func_53(var_5_float); // 0x49 NEW_2
	goto Label_83; // 0x4b Jump
	
Label_83:
	return 2; // 0x53 Return
	
Label_76:
	var_14_int = 0; // 0x4c PushI
	var_15_int = 24; // 0x4d PushI
	var_16_float = var_3_int * var_15_int; // 0x4e Mult
	SetTimeEvent(var_14_int, var_16_float); // 0x4f Func
	Hold(); // 0x51 Func
}


func_37()
{
	var_8_string = "d11q03"; // 0x25 PushS
	var_9_int = -1; // 0x26 PushI
	SetVariable(var_8_string, var_9_int); // 0x27 Func
	func_53(var_4_int); // 0x2a NEW_2
	return 0; // 0x2c Return
}


func_45()
{
	var_13_string = "d11q03"; // 0x2d PushS
	var_14_int = 1000; // 0x2e PushI
	SetVariable(var_13_string, var_14_int); // 0x2f Func
	func_53(var_1_string); // 0x32 NEW_2
	return 0; // 0x34 Return
}


func_53(var_0_object)
{
	EventDisable(26); // 0x35 EventDisable
	var_9_object = var_0_object; // 0x36 PushT
	if(var_9_object == 0) goto Label_59; // 0x37 JumpB
	var_10_string = "cleanup"; // 0x38 PushS
	Trigger(var_0_object, var_10_string); // 0x39 Func
	
Label_59:
	var_11_object = Obj(); // 0x3b PushV
	func_89(var_11_object); // 0x3c NEW_2
	RemoveActor(var_11_object); // 0x3e Func
	return 0; // 0x40 Return
}


func_89(var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj(); // 0x59 PushV
	self(var_13_object); // 0x5a Func
	var_11_object = var_13_object; // 0x5c Mov
	return 2; // 0x5d Return
}


func_26()
{
	var_3_int = 0; var_4_int = 0; // 0x1a PushV
	var_5_string = "d11q03"; // 0x1b PushS
	GetVariable(var_5_string, var_4_int); // 0x1c Func
	var_6_int = 1000; // 0x1e PushI
	var_7_bool = var_4_int != var_6_int; // 0x1f Neq
	if(var_7_bool == 0) goto Label_36; // 0x20 JumpB
	func_37(); // 0x22 NEW_2
	
Label_36:
	return 2; // 0x24 Return
}


