task_0_event_26(var_0_object, var_1_string)
{
	Trace(var_1_string); // 0x14 Func
	var_2_string = "completed"; // 0x16 PushS
	var_3_bool = var_1_string == var_2_string; // 0x17 Eq
	if(var_3_bool == 0) goto Label_28; // 0x18 JumpB
	func_48(); // 0x1a Call
	
Label_28:
	return 0; // 0x1c Return
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_29(); // 0x59 Call
	return 0; // 0x5b Return
}


main(var_0_object)
{
	var_1_object = Obj(); var_2_object = Obj(); // 0x0 PushV
	var_3_string = "d1q02"; // 0x1 PushS
	var_4_int = 1; // 0x2 PushI
	SetVariable(var_3_string, var_4_int); // 0x3 Func
	var_5_string = "cot_anna"; // 0x5 PushS
	GetSceneByName(var_2_object, var_5_string); // 0x6 Func
	var_6_string = "cot_anna_corpse"; // 0x8 PushS
	var_7_string = "actor_disp.bin"; // 0x9 PushS
	var_8_cvector = CVector(0.0, 0.0, 0.0); // 0xa PushVec
	AddScriptedActor(var_0_object, var_6_string, var_7_string, var_2_object, var_8_cvector); // 0xb Func
	var_9_int = 0; // 0xd PushV
	var_9_int = 1; // 0xe MovI
	func_68(var_9_int); // 0xf Call
	return 2; // 0x11 Return
}


func_68(var_9_int)
{
	var_10_float = 0; var_11_float = 0; // 0x44 PushV
	GetGameTime(var_11_float); // 0x45 Func
	var_12_int = 24; // 0x47 PushI
	var_13_float = var_9_int * var_12_int; // 0x48 Mult
	var_14_bool = var_11_float >= var_13_float; // 0x49 GE
	if(var_14_bool == 0) goto Label_79; // 0x4a JumpB
	func_56(var_11_float); // 0x4c Call
	goto Label_86; // 0x4e Jump
	
Label_86:
	return 2; // 0x56 Return
	
Label_79:
	var_20_int = 0; // 0x4f PushI
	var_21_int = 24; // 0x50 PushI
	var_22_float = var_9_int * var_21_int; // 0x51 Mult
	SetTimeEvent(var_20_int, var_22_float); // 0x52 Func
	Hold(); // 0x54 Func
}


func_40()
{
	var_8_string = "d1q02"; // 0x28 PushS
	var_9_int = -1; // 0x29 PushI
	SetVariable(var_8_string, var_9_int); // 0x2a Func
	func_56(var_4_int); // 0x2d Call
	return 0; // 0x2f Return
}


func_48()
{
	var_4_string = "d1q02"; // 0x30 PushS
	var_5_int = 1000; // 0x31 PushI
	SetVariable(var_4_string, var_5_int); // 0x32 Func
	func_56(var_1_string); // 0x35 Call
	return 0; // 0x37 Return
}


func_56(var_0_object)
{
	EventDisable(26); // 0x38 EventDisable
	var_15_object = var_0_object; // 0x39 PushT
	if(var_15_object == 0) goto Label_62; // 0x3a JumpB
	var_16_string = "cleanup"; // 0x3b PushS
	Trigger(var_0_object, var_16_string); // 0x3c Func
	
Label_62:
	var_17_object = Obj(); // 0x3e PushV
	func_92(var_17_object); // 0x3f Call
	RemoveActor(var_17_object); // 0x41 Func
	return 0; // 0x43 Return
}


func_92(var_17_object)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x5c PushV
	self(var_19_object); // 0x5d Func
	var_17_object = var_19_object; // 0x5f Mov
	return 2; // 0x60 Return
}


func_29()
{
	var_3_int = 0; var_4_int = 0; // 0x1d PushV
	var_5_string = "d1q02"; // 0x1e PushS
	GetVariable(var_5_string, var_4_int); // 0x1f Func
	var_6_int = 1000; // 0x21 PushI
	var_7_bool = var_4_int != var_6_int; // 0x22 Neq
	if(var_7_bool == 0) goto Label_39; // 0x23 JumpB
	func_40(); // 0x25 Call
	
Label_39:
	return 2; // 0x27 Return
}


