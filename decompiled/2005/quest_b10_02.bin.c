task_0_event_26(var_0_object, var_1_object, var_2_string)
{
	var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); // 0x5 PushV
	Trace(var_2_string); // 0x6 Func
	var_7_string = "place_trigger"; // 0x8 PushS
	var_8_bool = var_2_string == var_7_string; // 0x9 Eq
	if(var_8_bool == 0) goto Label_22; // 0xa JumpB
	GetMainOutdoorScene(var_5_object); // 0xb Func
	var_9_object = Obj(); var_10_object = Obj(); var_11_string = ""; var_12_string = ""; // 0xd PushV
	var_10_object = var_5_object; // 0xe Mov
	var_11_string = "b10q02_trigger"; // 0xf MovS
	var_12_string = "b10q02_trigger.xml"; // 0x10 MovS
	func_131(var_9_object, var_10_object, var_11_string, var_12_string); // 0x11 NEW_2
	var_0_object = var_9_object; // 0x12 TMov
	var_5_object = 0; // 0x14 SetNull
	goto Label_56; // 0x15 Jump
	
Label_56:
	return 4; // 0x38 Return
	
Label_22:
	var_17_string = "place_bomb"; // 0x16 PushS
	var_18_bool = var_2_string == var_17_string; // 0x17 Eq
	if(var_18_bool == 0) goto Label_36; // 0x18 JumpB
	GetMainOutdoorScene(var_6_object); // 0x19 Func
	var_19_object = Obj(); var_20_object = Obj(); var_21_string = ""; var_22_string = ""; // 0x1b PushV
	var_20_object = var_6_object; // 0x1c Mov
	var_21_string = "b10q02_bomb"; // 0x1d MovS
	var_22_string = "b10q02_bomb.xml"; // 0x1e MovS
	func_131(var_19_object, var_20_object, var_21_string, var_22_string); // 0x1f NEW_2
	var_1_object = var_19_object; // 0x20 TMov
	var_6_object = 0; // 0x22 SetNull
	goto Label_56; // 0x23 Jump
	
Label_36:
	var_23_string = "remove_bomb"; // 0x24 PushS
	var_24_bool = var_2_string == var_23_string; // 0x25 Eq
	if(var_24_bool == 0) goto Label_43; // 0x26 JumpB
	var_25_string = "cleanup"; // 0x27 PushS
	Trigger(var_25_string, var_25_string); // 0x28 Func
	goto Label_56; // 0x2a Jump
	
Label_43:
	var_26_string = "fail"; // 0x2b PushS
	var_27_bool = var_2_string == var_26_string; // 0x2c Eq
	if(var_27_bool == 0) goto Label_50; // 0x2d JumpB
	func_68(); // 0x2f NEW_2
	goto Label_56; // 0x31 Jump
	
Label_50:
	var_37_string = "completed"; // 0x32 PushS
	var_38_bool = var_2_string == var_37_string; // 0x33 Eq
	if(var_38_bool == 0) goto Label_56; // 0x34 JumpB
	func_76(); // 0x36 NEW_2
}


task_0_event_9(var_0_object, var_1_object, var_2_int, var_3_float)
{
	func_57(); // 0x7a NEW_2
	return 0; // 0x7c Return
}


main(var_0_object, var_1_object)
{
	var_2_int = 0; // 0x0 PushV
	var_2_int = 10; // 0x1 MovI
	func_101(var_2_int); // 0x2 NEW_2
	return 0; // 0x4 Return
}


func_131(var_9_object, var_10_object, var_11_string, var_12_string)
{
	var_13_object = Obj(); var_14_object = Obj(); // 0x83 PushV
	var_15_cvector = CVector(0.0, 0.0, 0.0); // 0x84 PushVec
	var_16_cvector = CVector(0.0, 0.0, 1.0); // 0x85 PushVec
	AddActor(var_14_object, var_11_string, var_10_object, var_15_cvector, var_16_cvector, var_12_string); // 0x86 Func
	var_9_object = var_14_object; // 0x88 Mov
	return 2; // 0x89 Return
}


func_68()
{
	var_9_string = "b10q02"; // 0x44 PushS
	var_10_int = -1; // 0x45 PushI
	SetVariable(var_9_string, var_10_int); // 0x46 Func
	func_84(var_5_int); // 0x49 NEW_2
	return 0; // 0x4b Return
}


func_101(var_2_int)
{
	var_3_float = 0; var_4_float = 0; // 0x65 PushV
	GetGameTime(var_4_float); // 0x66 Func
	var_5_int = 24; // 0x68 PushI
	var_6_float = var_2_int * var_5_int; // 0x69 Mult
	var_7_bool = var_4_float >= var_6_float; // 0x6a GE
	if(var_7_bool == 0) goto Label_112; // 0x6b JumpB
	func_84(var_4_float); // 0x6d NEW_2
	goto Label_119; // 0x6f Jump
	
Label_119:
	return 2; // 0x77 Return
	
Label_112:
	var_15_int = 0; // 0x70 PushI
	var_16_int = 24; // 0x71 PushI
	var_17_float = var_2_int * var_16_int; // 0x72 Mult
	SetTimeEvent(var_15_int, var_17_float); // 0x73 Func
	Hold(); // 0x75 Func
}


func_76()
{
	var_39_string = "b10q02"; // 0x4c PushS
	var_40_int = 1000; // 0x4d PushI
	SetVariable(var_39_string, var_40_int); // 0x4e Func
	func_84(var_6_object); // 0x51 NEW_2
	return 0; // 0x53 Return
}


func_84(var_0_object)
{
	EventDisable(26); // 0x54 EventDisable
	var_8_object = var_0_object; // 0x55 PushT
	if(var_8_object == 0) goto Label_90; // 0x56 JumpB
	var_9_string = "cleanup"; // 0x57 PushS
	Trigger(var_0_object, var_9_string); // 0x58 Func
	
Label_90:
	var_10_object = var_1_object; // 0x5a PushT
	if(var_10_object == 0) goto Label_95; // 0x5b JumpB
	var_11_string = "cleanup"; // 0x5c PushS
	Trigger(var_11_string, var_11_string); // 0x5d Func
	
Label_95:
	var_12_object = Obj(); // 0x5f PushV
	func_125(var_12_object); // 0x60 NEW_2
	RemoveActor(var_12_object); // 0x62 Func
	return 0; // 0x64 Return
}


func_57()
{
	var_4_int = 0; var_5_int = 0; // 0x39 PushV
	var_6_string = "b10q02"; // 0x3a PushS
	GetVariable(var_6_string, var_5_int); // 0x3b Func
	var_7_int = 1000; // 0x3d PushI
	var_8_bool = var_5_int != var_7_int; // 0x3e Neq
	if(var_8_bool == 0) goto Label_67; // 0x3f JumpB
	func_68(); // 0x41 NEW_2
	
Label_67:
	return 2; // 0x43 Return
}


func_125(var_12_object)
{
	var_13_object = Obj(); var_14_object = Obj(); // 0x7d PushV
	self(var_14_object); // 0x7e Func
	var_12_object = var_14_object; // 0x80 Mov
	return 2; // 0x81 Return
}


