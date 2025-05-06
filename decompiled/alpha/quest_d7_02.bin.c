task_0_event_26(var_0_object, var_1_string)
{
	var_2_object = Obj(); var_3_object = Obj(); // 0x9 PushV
	Trace(var_1_string); // 0xa Func
	var_4_string = "completed"; // 0xc PushS
	var_5_bool = var_1_string == var_4_string; // 0xd Eq
	if(var_5_bool == 0) goto Label_19; // 0xe JumpB
	func_58(); // 0x10 Call
	goto Label_38; // 0x12 Jump
	
Label_38:
	return 2; // 0x26 Return
	
Label_19:
	var_21_string = "fail"; // 0x13 PushS
	var_22_bool = var_1_string == var_21_string; // 0x14 Eq
	if(var_22_bool == 0) goto Label_26; // 0x15 JumpB
	func_50(); // 0x17 Call
	goto Label_38; // 0x19 Jump
	
Label_26:
	var_25_string = "place_corpse"; // 0x1a PushS
	var_26_bool = var_1_string == var_25_string; // 0x1b Eq
	if(var_26_bool == 0) goto Label_38; // 0x1c JumpB
	GetMainOutdoorScene(var_3_object); // 0x1d Func
	var_27_string = "d7q02_corpse"; // 0x1f PushS
	var_28_cvector = CVector(0.0, 0.0, 0.0); // 0x20 PushVec
	var_29_cvector = CVector(0.0, 0.0, 1.0); // 0x21 PushVec
	var_30_string = "d7q02_corpse.xml"; // 0x22 PushS
	AddActor(var_0_object, var_27_string, var_3_object, var_28_cvector, var_29_cvector, var_30_string); // 0x23 Func
	var_3_object = 0; // 0x25 SetNull
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_39(); // 0x71 Call
	return 0; // 0x73 Return
}


main(var_0_object)
{
	var_1_string = "d7q02"; // 0x0 PushS
	var_2_int = 1; // 0x1 PushI
	SetVariable(var_1_string, var_2_int); // 0x2 Func
	var_3_int = 0; // 0x4 PushV
	var_3_int = 7; // 0x5 MovI
	func_92(var_3_int); // 0x6 Call
	return 0; // 0x8 Return
}


func_39()
{
	var_3_int = 0; var_4_int = 0; // 0x27 PushV
	var_5_string = "d7q02"; // 0x28 PushS
	GetVariable(var_5_string, var_4_int); // 0x29 Func
	var_6_int = 1000; // 0x2b PushI
	var_7_bool = var_4_int != var_6_int; // 0x2c Neq
	if(var_7_bool == 0) goto Label_49; // 0x2d JumpB
	func_50(); // 0x2f Call
	
Label_49:
	return 2; // 0x31 Return
}


func_80(var_0_object)
{
	EventDisable(26); // 0x50 EventDisable
	var_9_object = var_0_object; // 0x51 PushT
	if(var_9_object == 0) goto Label_86; // 0x52 JumpB
	var_10_string = "cleanup"; // 0x53 PushS
	Trigger(var_0_object, var_10_string); // 0x54 Func
	
Label_86:
	var_11_object = Obj(); // 0x56 PushV
	func_116(var_11_object); // 0x57 Call
	RemoveActor(var_11_object); // 0x59 Func
	return 0; // 0x5b Return
}


func_50()
{
	var_8_string = "d7q02"; // 0x32 PushS
	var_9_int = -1; // 0x33 PushI
	SetVariable(var_8_string, var_9_int); // 0x34 Func
	func_80(var_4_int); // 0x37 Call
	return 0; // 0x39 Return
}


func_116(var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj(); // 0x74 PushV
	self(var_13_object); // 0x75 Func
	var_11_object = var_13_object; // 0x77 Mov
	return 2; // 0x78 Return
}


func_58()
{
	var_6_int = 0; var_7_int = 0; // 0x3a PushV
	var_8_string = "d7q02"; // 0x3b PushS
	GetVariable(var_8_string, var_7_int); // 0x3c Func
	var_9_bool = 0; // 0x3e PushV
	var_9_bool = 0; // 0x3f MovB
	var_10_int = 1000; // 0x40 PushI
	var_11_bool = var_7_int != var_10_int; // 0x41 Neq
	if(var_11_bool == 0) goto Label_71; // 0x42 JumpB
	var_12_int = -1; // 0x43 PushI
	var_13_bool = var_7_int != var_12_int; // 0x44 Neq
	if(var_13_bool == 0) goto Label_71; // 0x45 JumpB
	var_9_bool = 1; // 0x46 MovB
	
Label_71:
	if(var_9_bool == 0) goto Label_79; // 0x47 JumpB
	var_14_string = "d7q02"; // 0x48 PushS
	var_15_int = 1000; // 0x49 PushI
	SetVariable(var_14_string, var_15_int); // 0x4a Func
	func_80(var_7_int); // 0x4d Call
	
Label_79:
	return 2; // 0x4f Return
}


func_92(var_3_int)
{
	var_4_float = 0; var_5_float = 0; // 0x5c PushV
	GetGameTime(var_5_float); // 0x5d Func
	var_6_int = 24; // 0x5f PushI
	var_7_float = var_3_int * var_6_int; // 0x60 Mult
	var_8_bool = var_5_float >= var_7_float; // 0x61 GE
	if(var_8_bool == 0) goto Label_103; // 0x62 JumpB
	func_80(var_5_float); // 0x64 Call
	goto Label_110; // 0x66 Jump
	
Label_110:
	return 2; // 0x6e Return
	
Label_103:
	var_14_int = 0; // 0x67 PushI
	var_15_int = 24; // 0x68 PushI
	var_16_float = var_3_int * var_15_int; // 0x69 Mult
	SetTimeEvent(var_14_int, var_16_float); // 0x6a Func
	Hold(); // 0x6c Func
}


