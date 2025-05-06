task_0_event_5()
{
	var_0_bool = 0; var_1_string = ""; var_2_string = ""; // 0x0 PushV
	var_1_string = "quest_d4_02"; // 0x1 MovS
	var_2_string = "scene_load"; // 0x2 MovS
	func_81(var_0_bool, var_1_string, var_2_string); // 0x3 Call
	func_19(); // 0x6 Call
	return 0; // 0x8 Return
}


task_0_event_6()
{
	var_0_bool = 0; var_1_string = ""; var_2_string = ""; // 0x9 PushV
	var_1_string = "quest_d4_02"; // 0xa MovS
	var_2_string = "scene_unload"; // 0xb MovS
	func_81(var_0_bool, var_1_string, var_2_string); // 0xc Call
	return 0; // 0xe Return
}


task_1_event_6()
{
	var_0_bool = 0; var_1_string = ""; var_2_string = ""; // 0x19 PushV
	var_1_string = "quest_d4_02"; // 0x1a MovS
	var_2_string = "scene_unload"; // 0x1b MovS
	func_81(var_0_bool, var_1_string, var_2_string); // 0x1c Call
	func_57(); // 0x1f Call
	return 0; // 0x21 Return
}


main()
{
	
Label_15:
	Hold(); // 0xf Func
	goto Label_15; // 0x11 Jump
}


func_34()
{
	var_6_bool = 0; var_7_cvector = CVector(0,0,0); var_8_bool = 0; var_9_cvector = CVector(0,0,0); // 0x22 PushV
	var_10_int = 3; // 0x23 PushI
	Sleep(var_10_int, var_8_bool); // 0x24 Func
	var_11_bool = var_8_bool == 0; // 0x26 Not
	if(var_11_bool == 0) goto Label_41; // 0x27 JumpB
	return 4; // 0x28 Return
	
Label_41:
	var_12_int = 0; // 0x29 PushI
	var_13_int = 0; // 0x2a PushI
	GetRandomPFPoint(var_9_cvector, var_12_int, var_13_int); // 0x2b Func
	var_14_cvector = CVector(0,0,0); // 0x2d PushV
	var_14_cvector = var_9_cvector; // 0x2e Mov
	func_60(var_14_cvector); // 0x2f Call
	var_25_int = 30; // 0x31 PushI
	Sleep(var_25_int, var_8_bool); // 0x32 Func
	var_26_bool = var_8_bool == 0; // 0x34 Not
	if(var_26_bool == 0) goto Label_55; // 0x35 JumpB
	goto Label_56; // 0x36 Jump
	
Label_56:
	return 4; // 0x38 Return
	
Label_55:
	goto Label_41; // 0x37 Jump
}


func_75(var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x4b PushV
	self(var_22_object); // 0x4c Func
	var_20_object = var_22_object; // 0x4e Mov
	return 2; // 0x4f Return
}


func_81(var_0_bool, var_1_string, var_2_string)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0x51 PushV
	FindActor(var_4_object, var_1_string); // 0x52 Func
	var_5_bool = var_4_object == 0; // 0x54 NullEq
	if(var_5_bool == 0) goto Label_88; // 0x55 JumpB
	var_0_bool = 0; // 0x56 MovB
	return 2; // 0x57 Return
	
Label_88:
	Trigger(var_4_object, var_2_string); // 0x58 Func
	var_0_bool = 1; // 0x5a MovB
	return 2; // 0x5b Return
}


func_19()
{
	TaskCall(1); // 0x14 TaskCall
	func_34(); // 0x15 Call
	TaskReturn(); // 0x16 TaskReturn
	return 0; // 0x18 Return
}


func_57()
{
	StopGroup0(); // 0x39 Func
	return 0; // 0x3b Return
}


func_60(var_14_cvector)
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x3c PushV
	var_17_string = "New fog at "; // 0x3d PushS
	var_18_int = var_17_string + var_14_cvector; // 0x3e Add
	Trace(var_18_int); // 0x3f Func
	var_19_string = "fog"; // 0x41 PushS
	var_20_object = Obj(); // 0x42 PushV
	func_75(var_20_object); // 0x43 Call
	var_23_cvector = CVector(0.0, 0.0, 1.0); // 0x45 PushVec
	var_24_string = "horror_fog.xml"; // 0x46 PushS
	AddActorByType(var_16_object, var_19_string, var_20_object, var_14_cvector, var_23_cvector, var_24_string); // 0x47 Func
	return 2; // 0x49 Return
}


