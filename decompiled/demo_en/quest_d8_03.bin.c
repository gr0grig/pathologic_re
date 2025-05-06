task_0_event_26(var_0_object, var_1_bool, var_2_string)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0x5 PushV
	Trace(var_2_string); // 0x6 Func
	var_5_bool = 0; // 0x8 PushV
	var_5_bool = 0; // 0x9 MovB
	var_6_string = "termitnik_load"; // 0xa PushS
	var_7_bool = var_2_string == var_6_string; // 0xb Eq
	if(var_7_bool == 0) goto Label_16; // 0xc JumpB
	var_8_bool = var_1_bool == 0; // 0xd Not
	if(var_8_bool == 0) goto Label_16; // 0xe JumpB
	var_5_bool = 1; // 0xf MovB
	
Label_16:
	if(var_5_bool == 0) goto Label_31; // 0x10 JumpB
	var_9_string = "termitnik"; // 0x11 PushS
	GetSceneByName(var_4_object, var_9_string); // 0x12 Func
	var_10_object = Obj(); var_11_object = Obj(); var_12_string = ""; var_13_string = ""; var_14_string = ""; // 0x14 PushV
	var_11_object = var_4_object; // 0x15 Mov
	var_12_string = "pt_d8q03_burah"; // 0x16 MovS
	var_13_string = "NPC_Burah"; // 0x17 MovS
	var_14_string = "d8q03_burah.xml"; // 0x18 MovS
	func_114(var_10_object, var_11_object, var_12_string, var_13_string, var_14_string); // 0x19 NEW_2
	var_0_object = var_10_object; // 0x1a TMov
	var_1_bool = 1; // 0x1c TMovB
	var_4_object = 0; // 0x1d SetNull
	goto Label_44; // 0x1e Jump
	
Label_44:
	return 2; // 0x2c Return
	
Label_31:
	var_28_string = "fail"; // 0x1f PushS
	var_29_bool = var_2_string == var_28_string; // 0x20 Eq
	if(var_29_bool == 0) goto Label_38; // 0x21 JumpB
	func_56(); // 0x23 NEW_2
	goto Label_44; // 0x25 Jump
	
Label_38:
	var_37_string = "completed"; // 0x26 PushS
	var_38_bool = var_2_string == var_37_string; // 0x27 Eq
	if(var_38_bool == 0) goto Label_44; // 0x28 JumpB
	func_64(); // 0x2a NEW_2
}


task_0_event_9(var_0_object, var_1_bool, var_2_int, var_3_float)
{
	func_45(); // 0x69 NEW_2
	return 0; // 0x6b Return
}


main(var_0_object, var_1_bool)
{
	var_2_int = 0; // 0x0 PushV
	var_2_int = 8; // 0x1 MovI
	func_84(var_2_int); // 0x2 NEW_2
	return 0; // 0x4 Return
}


func_64()
{
	var_39_string = "d8q03"; // 0x40 PushS
	var_40_int = 1000; // 0x41 PushI
	SetVariable(var_39_string, var_40_int); // 0x42 Func
	func_72(var_4_object); // 0x45 NEW_2
	return 0; // 0x47 Return
}


func_72(var_0_object)
{
	EventDisable(26); // 0x48 EventDisable
	var_8_object = var_0_object; // 0x49 PushT
	if(var_8_object == 0) goto Label_78; // 0x4a JumpB
	var_9_string = "cleanup"; // 0x4b PushS
	Trigger(var_0_object, var_9_string); // 0x4c Func
	
Label_78:
	var_10_object = Obj(); // 0x4e PushV
	func_108(var_10_object); // 0x4f NEW_2
	RemoveActor(var_10_object); // 0x51 Func
	return 0; // 0x53 Return
}


func_108(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0x6c PushV
	self(var_12_object); // 0x6d Func
	var_10_object = var_12_object; // 0x6f Mov
	return 2; // 0x70 Return
}


func_45()
{
	var_4_int = 0; var_5_int = 0; // 0x2d PushV
	var_6_string = "d8q03"; // 0x2e PushS
	GetVariable(var_6_string, var_5_int); // 0x2f Func
	var_7_int = 1000; // 0x31 PushI
	var_8_bool = var_5_int != var_7_int; // 0x32 Neq
	if(var_8_bool == 0) goto Label_55; // 0x33 JumpB
	func_56(); // 0x35 NEW_2
	
Label_55:
	return 2; // 0x37 Return
}


func_114(var_10_object, var_11_object, var_12_string, var_13_string, var_14_string)
{
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_object = Obj(); // 0x72 PushV
	GetLocator(var_12_string, var_19_bool, var_20_cvector, var_21_cvector); // 0x73 ObjFunc
	var_23_bool = var_19_bool == 0; // 0x75 Not
	if(var_23_bool == 0) goto Label_127; // 0x76 JumpB
	var_24_string = "Locator "; // 0x77 PushS
	var_25_int = var_24_string + var_12_string; // 0x78 Add
	var_26_string = " doesn't exist"; // 0x79 PushS
	var_27_int = var_25_int + var_26_string; // 0x7a Add
	Trace(var_27_int); // 0x7b Func
	var_22_object = 0; // 0x7d SetNull
	goto Label_129; // 0x7e Jump
	
Label_129:
	var_10_object = var_22_object; // 0x81 Mov
	return 8; // 0x82 Return
	
Label_127:
	AddActor(var_22_object, var_13_string, var_11_object, var_20_cvector, var_21_cvector, var_14_string); // 0x7f Func
}


func_84(var_2_int)
{
	var_3_float = 0; var_4_float = 0; // 0x54 PushV
	GetGameTime(var_4_float); // 0x55 Func
	var_5_int = 24; // 0x57 PushI
	var_6_float = var_2_int * var_5_int; // 0x58 Mult
	var_7_bool = var_4_float >= var_6_float; // 0x59 GE
	if(var_7_bool == 0) goto Label_95; // 0x5a JumpB
	func_72(var_4_float); // 0x5c NEW_2
	goto Label_102; // 0x5e Jump
	
Label_102:
	return 2; // 0x66 Return
	
Label_95:
	var_13_int = 0; // 0x5f PushI
	var_14_int = 24; // 0x60 PushI
	var_15_float = var_2_int * var_14_int; // 0x61 Mult
	SetTimeEvent(var_13_int, var_15_float); // 0x62 Func
	Hold(); // 0x64 Func
}


func_56()
{
	var_9_string = "d8q03"; // 0x38 PushS
	var_10_int = -1; // 0x39 PushI
	SetVariable(var_9_string, var_10_int); // 0x3a Func
	func_72(var_5_int); // 0x3d NEW_2
	return 0; // 0x3f Return
}


