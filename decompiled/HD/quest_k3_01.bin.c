task_0_event_26(var_0_string)
{
	var_1_int = 0; var_2_int = 0; // 0xc PushV
	Trace(var_0_string); // 0xd Func
	var_3_string = "cleanup"; // 0xf PushS
	var_4_bool = var_0_string == var_3_string; // 0x10 Eq
	if(var_4_bool == 0) goto Label_32; // 0x11 JumpB
	var_5_string = "k3q01"; // 0x12 PushS
	GetVariable(var_5_string, var_2_int); // 0x13 Func
	var_6_int = 1000; // 0x15 PushI
	var_7_bool = var_2_int != var_6_int; // 0x16 Neq
	if(var_7_bool == 0) goto Label_28; // 0x17 JumpB
	func_46(); // 0x19 NEW_2
	goto Label_31; // 0x1b Jump
	
Label_31:
	goto Label_45; // 0x1f Jump
	
Label_45:
	return 2; // 0x2d Return
	
Label_28:
	func_62(); // 0x1d NEW_2
	
Label_32:
	var_17_string = "fail"; // 0x20 PushS
	var_18_bool = var_0_string == var_17_string; // 0x21 Eq
	if(var_18_bool == 0) goto Label_39; // 0x22 JumpB
	func_46(); // 0x24 NEW_2
	goto Label_45; // 0x26 Jump
	
Label_39:
	var_19_string = "completed"; // 0x27 PushS
	var_20_bool = var_0_string == var_19_string; // 0x28 Eq
	if(var_20_bool == 0) goto Label_45; // 0x29 JumpB
	func_54(); // 0x2b NEW_2
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); // 0x0 PushV
	var_2_string = "cot_eva"; // 0x1 PushS
	GetSceneByName(var_1_object, var_2_string); // 0x2 Func
	var_3_string = "nodanko"; // 0x4 PushS
	Trigger(var_1_object, var_3_string); // 0x5 Func
	
Label_7:
	Hold(); // 0x7 Func
	goto Label_7; // 0x9 Jump
}


func_46()
{
	var_8_string = "k3q01"; // 0x2e PushS
	var_9_int = -1; // 0x2f PushI
	SetVariable(var_8_string, var_9_int); // 0x30 Func
	func_62(); // 0x33 NEW_2
	return 0; // 0x35 Return
}


func_62()
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x3e PushV
	EventDisable(26); // 0x3f EventDisable
	var_12_string = "cot_eva"; // 0x40 PushS
	GetSceneByName(var_11_object, var_12_string); // 0x41 Func
	var_13_string = "danko"; // 0x43 PushS
	Trigger(var_11_object, var_13_string); // 0x44 Func
	var_14_object = Obj(); // 0x46 PushV
	func_77(var_14_object); // 0x47 NEW_2
	RemoveActor(var_14_object); // 0x49 Func
	return 2; // 0x4b Return
}


func_77(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x4d PushV
	self(var_16_object); // 0x4e Func
	var_14_object = var_16_object; // 0x50 Mov
	return 2; // 0x51 Return
}


func_54()
{
	var_21_string = "k3q01"; // 0x36 PushS
	var_22_int = 1000; // 0x37 PushI
	SetVariable(var_21_string, var_22_int); // 0x38 Func
	func_62(); // 0x3b NEW_2
	return 0; // 0x3d Return
}


