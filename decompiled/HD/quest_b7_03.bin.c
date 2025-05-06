task_0_event_26(var_0_object, var_1_string)
{
	var_2_object = Obj(); var_3_object = Obj(); // 0x5 PushV
	Trace(var_1_string); // 0x6 Func
	var_4_string = "place_birdmask"; // 0x8 PushS
	var_5_bool = var_1_string == var_4_string; // 0x9 Eq
	if(var_5_bool == 0) goto Label_24; // 0xa JumpB
	var_6_string = "theater"; // 0xb PushS
	GetSceneByName(var_3_object, var_6_string); // 0xc Func
	var_7_object = Obj(); var_8_object = Obj(); var_9_string = ""; var_10_string = ""; var_11_string = ""; // 0xe PushV
	var_8_object = var_3_object; // 0xf Mov
	var_9_string = "pt_b7q03_birdmask"; // 0x10 MovS
	var_10_string = "pers_birdmask"; // 0x11 MovS
	var_11_string = "b7q03_birdmask.xml"; // 0x12 MovS
	func_114(var_7_object, var_8_object, var_9_string, var_10_string, var_11_string); // 0x13 NEW_2
	var_0_object = var_7_object; // 0x14 TMov
	var_3_object = 0; // 0x16 SetNull
	goto Label_44; // 0x17 Jump
	
Label_44:
	return 2; // 0x2c Return
	
Label_24:
	var_25_string = "remove_birdmask"; // 0x18 PushS
	var_26_bool = var_1_string == var_25_string; // 0x19 Eq
	if(var_26_bool == 0) goto Label_31; // 0x1a JumpB
	var_27_string = "cleanup"; // 0x1b PushS
	Trigger(var_0_object, var_27_string); // 0x1c Func
	goto Label_44; // 0x1e Jump
	
Label_31:
	var_28_string = "fail"; // 0x1f PushS
	var_29_bool = var_1_string == var_28_string; // 0x20 Eq
	if(var_29_bool == 0) goto Label_38; // 0x21 JumpB
	func_56(); // 0x23 NEW_2
	goto Label_44; // 0x25 Jump
	
Label_38:
	var_37_string = "completed"; // 0x26 PushS
	var_38_bool = var_1_string == var_37_string; // 0x27 Eq
	if(var_38_bool == 0) goto Label_44; // 0x28 JumpB
	func_64(); // 0x2a NEW_2
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_45(); // 0x69 NEW_2
	return 0; // 0x6b Return
}


main(var_0_object)
{
	var_1_int = 0; // 0x0 PushV
	var_1_int = 7; // 0x1 MovI
	func_84(var_1_int); // 0x2 NEW_2
	return 0; // 0x4 Return
}


func_64()
{
	var_39_string = "b7q03"; // 0x40 PushS
	var_40_int = 1000; // 0x41 PushI
	SetVariable(var_39_string, var_40_int); // 0x42 Func
	func_72(var_3_object); // 0x45 NEW_2
	return 0; // 0x47 Return
}


func_72(var_0_object)
{
	EventDisable(26); // 0x48 EventDisable
	var_7_object = var_0_object; // 0x49 PushT
	if(var_7_object == 0) goto Label_78; // 0x4a JumpB
	var_8_string = "cleanup"; // 0x4b PushS
	Trigger(var_0_object, var_8_string); // 0x4c Func
	
Label_78:
	var_9_object = Obj(); // 0x4e PushV
	func_108(var_9_object); // 0x4f NEW_2
	RemoveActor(var_9_object); // 0x51 Func
	return 0; // 0x53 Return
}


func_108(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x6c PushV
	self(var_11_object); // 0x6d Func
	var_9_object = var_11_object; // 0x6f Mov
	return 2; // 0x70 Return
}


func_45()
{
	var_3_int = 0; var_4_int = 0; // 0x2d PushV
	var_5_string = "b7q03"; // 0x2e PushS
	GetVariable(var_5_string, var_4_int); // 0x2f Func
	var_6_int = 1000; // 0x31 PushI
	var_7_bool = var_4_int != var_6_int; // 0x32 Neq
	if(var_7_bool == 0) goto Label_55; // 0x33 JumpB
	func_56(); // 0x35 NEW_2
	
Label_55:
	return 2; // 0x37 Return
}


func_114(var_7_object, var_8_object, var_9_string, var_10_string, var_11_string)
{
	var_12_bool = 0; var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_object = Obj(); var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_object = Obj(); // 0x72 PushV
	GetLocator(var_9_string, var_16_bool, var_17_cvector, var_18_cvector); // 0x73 ObjFunc
	var_20_bool = var_16_bool == 0; // 0x75 Not
	if(var_20_bool == 0) goto Label_127; // 0x76 JumpB
	var_21_string = "Locator "; // 0x77 PushS
	var_22_int = var_21_string + var_9_string; // 0x78 Add
	var_23_string = " doesn't exist"; // 0x79 PushS
	var_24_int = var_22_int + var_23_string; // 0x7a Add
	Trace(var_24_int); // 0x7b Func
	var_19_object = 0; // 0x7d SetNull
	goto Label_129; // 0x7e Jump
	
Label_129:
	var_7_object = var_19_object; // 0x81 Mov
	return 8; // 0x82 Return
	
Label_127:
	AddActor(var_19_object, var_10_string, var_8_object, var_17_cvector, var_18_cvector, var_11_string); // 0x7f Func
}


func_84(var_1_int)
{
	var_2_float = 0; var_3_float = 0; // 0x54 PushV
	GetGameTime(var_3_float); // 0x55 Func
	var_4_int = 24; // 0x57 PushI
	var_5_float = var_1_int * var_4_int; // 0x58 Mult
	var_6_bool = var_3_float >= var_5_float; // 0x59 GE
	if(var_6_bool == 0) goto Label_95; // 0x5a JumpB
	func_72(var_3_float); // 0x5c NEW_2
	goto Label_102; // 0x5e Jump
	
Label_102:
	return 2; // 0x66 Return
	
Label_95:
	var_12_int = 0; // 0x5f PushI
	var_13_int = 24; // 0x60 PushI
	var_14_float = var_1_int * var_13_int; // 0x61 Mult
	SetTimeEvent(var_12_int, var_14_float); // 0x62 Func
	Hold(); // 0x64 Func
}


func_56()
{
	var_8_string = "b7q03"; // 0x38 PushS
	var_9_int = -1; // 0x39 PushI
	SetVariable(var_8_string, var_9_int); // 0x3a Func
	func_72(var_4_int); // 0x3d NEW_2
	return 0; // 0x3f Return
}


