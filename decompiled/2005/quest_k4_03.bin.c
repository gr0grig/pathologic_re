task_0_event_26(var_0_object, var_1_string)
{
	var_2_object = Obj(); var_3_object = Obj(); // 0xe PushV
	Trace(var_1_string); // 0xf Func
	var_4_string = "place_burah"; // 0x11 PushS
	var_5_bool = var_1_string == var_4_string; // 0x12 Eq
	if(var_5_bool == 0) goto Label_32; // 0x13 JumpB
	var_6_string = "house5_08"; // 0x14 PushS
	GetSceneByName(var_3_object, var_6_string); // 0x15 Func
	var_7_object = Obj(); var_8_object = Obj(); var_9_string = ""; var_10_string = ""; var_11_string = ""; // 0x17 PushV
	var_8_object = var_3_object; // 0x18 Mov
	var_9_string = "pt_k4q03_burah"; // 0x19 MovS
	var_10_string = "NPC_Burah"; // 0x1a MovS
	var_11_string = "k4q03_burah.xml"; // 0x1b MovS
	func_113(var_7_object, var_8_object, var_9_string, var_10_string, var_11_string); // 0x1c NEW_2
	var_0_object = var_7_object; // 0x1d TMov
	var_3_object = 0; // 0x1f SetNull
	
Label_32:
	var_25_string = "completed"; // 0x20 PushS
	var_26_bool = var_1_string == var_25_string; // 0x21 Eq
	if(var_26_bool == 0) goto Label_38; // 0x22 JumpB
	func_58(); // 0x24 NEW_2
	
Label_38:
	return 2; // 0x26 Return
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_39(); // 0x68 NEW_2
	return 0; // 0x6a Return
}


main(var_0_object)
{
	var_1_string = ""; var_2_bool = 0; // 0x0 PushV
	var_1_string = "burah_home@door1"; // 0x1 MovS
	var_2_bool = 1; // 0x2 MovB
	func_131(var_1_string, var_2_bool); // 0x3 NEW_2
	var_11_string = "k4q03"; // 0x5 PushS
	var_12_int = 1; // 0x6 PushI
	SetVariable(var_11_string, var_12_int); // 0x7 Func
	var_13_int = 0; // 0x9 PushV
	var_13_int = 4; // 0xa MovI
	func_83(var_13_int); // 0xb NEW_2
	return 0; // 0xd Return
}


func_66(var_0_object)
{
	EventDisable(26); // 0x42 EventDisable
	var_19_string = ""; var_20_bool = 0; // 0x43 PushV
	var_19_string = "burah_home@door1"; // 0x44 MovS
	var_20_bool = 0; // 0x45 MovB
	func_131(var_19_string, var_20_bool); // 0x46 NEW_2
	var_21_object = var_0_object; // 0x48 PushT
	if(var_21_object == 0) goto Label_77; // 0x49 JumpB
	var_22_string = "cleanup"; // 0x4a PushS
	Trigger(var_0_object, var_22_string); // 0x4b Func
	
Label_77:
	var_23_object = Obj(); // 0x4d PushV
	func_107(var_23_object); // 0x4e NEW_2
	RemoveActor(var_23_object); // 0x50 Func
	return 0; // 0x52 Return
}


func_131(var_1_string, var_2_bool)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0x83 PushV
	FindActor(var_4_object, var_1_string); // 0x84 Func
	var_5_bool = var_4_object == 0; // 0x86 Not
	if(var_5_bool == 0) goto Label_143; // 0x87 JumpB
	var_6_string = "Door "; // 0x88 PushS
	var_7_int = var_6_string + var_1_string; // 0x89 Add
	var_8_string = " not found"; // 0x8a PushS
	var_9_int = var_7_int + var_8_string; // 0x8b Add
	Trace(var_9_int); // 0x8c Func
	goto Label_146; // 0x8e Jump
	
Label_146:
	return 2; // 0x92 Return
	
Label_143:
	var_10_string = "locked"; // 0x8f PushS
	SetProperty(var_10_string, var_2_bool); // 0x90 ObjFunc
}


func_39()
{
	var_3_int = 0; var_4_int = 0; // 0x27 PushV
	var_5_string = "k4q03"; // 0x28 PushS
	GetVariable(var_5_string, var_4_int); // 0x29 Func
	var_6_int = 1000; // 0x2b PushI
	var_7_bool = var_4_int != var_6_int; // 0x2c Neq
	if(var_7_bool == 0) goto Label_49; // 0x2d JumpB
	func_50(); // 0x2f NEW_2
	
Label_49:
	return 2; // 0x31 Return
}


func_107(var_23_object)
{
	var_24_object = Obj(); var_25_object = Obj(); // 0x6b PushV
	self(var_25_object); // 0x6c Func
	var_23_object = var_25_object; // 0x6e Mov
	return 2; // 0x6f Return
}


func_113(var_7_object, var_8_object, var_9_string, var_10_string, var_11_string)
{
	var_12_bool = 0; var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_object = Obj(); var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_object = Obj(); // 0x71 PushV
	GetLocator(var_9_string, var_16_bool, var_17_cvector, var_18_cvector); // 0x72 ObjFunc
	var_20_bool = var_16_bool == 0; // 0x74 Not
	if(var_20_bool == 0) goto Label_126; // 0x75 JumpB
	var_21_string = "Locator "; // 0x76 PushS
	var_22_int = var_21_string + var_9_string; // 0x77 Add
	var_23_string = " doesn't exist"; // 0x78 PushS
	var_24_int = var_22_int + var_23_string; // 0x79 Add
	Trace(var_24_int); // 0x7a Func
	var_19_object = 0; // 0x7c SetNull
	goto Label_128; // 0x7d Jump
	
Label_128:
	var_7_object = var_19_object; // 0x80 Mov
	return 8; // 0x81 Return
	
Label_126:
	AddActor(var_19_object, var_10_string, var_8_object, var_17_cvector, var_18_cvector, var_11_string); // 0x7e Func
}


func_50()
{
	var_8_string = "k4q03"; // 0x32 PushS
	var_9_int = -1; // 0x33 PushI
	SetVariable(var_8_string, var_9_int); // 0x34 Func
	func_66(var_4_int); // 0x37 NEW_2
	return 0; // 0x39 Return
}


func_83(var_13_int)
{
	var_14_float = 0; var_15_float = 0; // 0x53 PushV
	GetGameTime(var_15_float); // 0x54 Func
	var_16_int = 24; // 0x56 PushI
	var_17_float = var_13_int * var_16_int; // 0x57 Mult
	var_18_bool = var_15_float >= var_17_float; // 0x58 GE
	if(var_18_bool == 0) goto Label_94; // 0x59 JumpB
	func_66(var_15_float); // 0x5b NEW_2
	goto Label_101; // 0x5d Jump
	
Label_101:
	return 2; // 0x65 Return
	
Label_94:
	var_26_int = 0; // 0x5e PushI
	var_27_int = 24; // 0x5f PushI
	var_28_float = var_13_int * var_27_int; // 0x60 Mult
	SetTimeEvent(var_26_int, var_28_float); // 0x61 Func
	Hold(); // 0x63 Func
}


func_58()
{
	var_27_string = "k4q03"; // 0x3a PushS
	var_28_int = 1000; // 0x3b PushI
	SetVariable(var_27_string, var_28_int); // 0x3c Func
	func_66(var_3_object); // 0x3f NEW_2
	return 0; // 0x41 Return
}


