task_0_event_26(var_0_object, var_1_string)
{
	Trace(var_1_string); // 0x13 Func
	var_2_string = "init_soldiers"; // 0x15 PushS
	var_3_bool = var_1_string == var_2_string; // 0x16 Eq
	if(var_3_bool == 0) goto Label_25; // 0x17 JumpB
	goto Label_38; // 0x18 Jump
	
Label_38:
	return 0; // 0x26 Return
	
Label_25:
	var_4_string = "fail"; // 0x19 PushS
	var_5_bool = var_1_string == var_4_string; // 0x1a Eq
	if(var_5_bool == 0) goto Label_32; // 0x1b JumpB
	func_50(); // 0x1d NEW_2
	goto Label_38; // 0x1f Jump
	
Label_32:
	var_13_string = "completed"; // 0x20 PushS
	var_14_bool = var_1_string == var_13_string; // 0x21 Eq
	if(var_14_bool == 0) goto Label_38; // 0x22 JumpB
	func_58(); // 0x24 NEW_2
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_39(); // 0x63 NEW_2
	return 0; // 0x65 Return
}


main(var_0_object)
{
	var_1_object = Obj(); var_2_object = Obj(); // 0x0 PushV
	var_3_string = "termitnik"; // 0x1 PushS
	GetSceneByName(var_2_object, var_3_string); // 0x2 Func
	var_4_object = Obj(); var_5_object = Obj(); var_6_string = ""; var_7_string = ""; var_8_string = ""; // 0x4 PushV
	var_5_object = var_2_object; // 0x5 Mov
	var_6_string = "pt_d9q03_burah"; // 0x6 MovS
	var_7_string = "NPC_Burah"; // 0x7 MovS
	var_8_string = "d9q05_burah.xml"; // 0x8 MovS
	func_108(var_4_object, var_5_object, var_6_string, var_7_string, var_8_string); // 0x9 NEW_2
	var_0_object = var_4_object; // 0xa TMov
	var_22_int = 0; // 0xc PushV
	var_22_int = 9; // 0xd MovI
	func_78(var_22_int); // 0xe NEW_2
	return 2; // 0x10 Return
}


func_66(var_0_object)
{
	EventDisable(26); // 0x42 EventDisable
	var_28_object = var_0_object; // 0x43 PushT
	if(var_28_object == 0) goto Label_72; // 0x44 JumpB
	var_29_string = "cleanup"; // 0x45 PushS
	Trigger(var_0_object, var_29_string); // 0x46 Func
	
Label_72:
	var_30_object = Obj(); // 0x48 PushV
	func_102(var_30_object); // 0x49 NEW_2
	RemoveActor(var_30_object); // 0x4b Func
	return 0; // 0x4d Return
}


func_102(var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj(); // 0x66 PushV
	self(var_32_object); // 0x67 Func
	var_30_object = var_32_object; // 0x69 Mov
	return 2; // 0x6a Return
}


func_39()
{
	var_3_int = 0; var_4_int = 0; // 0x27 PushV
	var_5_string = "d9q05"; // 0x28 PushS
	GetVariable(var_5_string, var_4_int); // 0x29 Func
	var_6_int = 1000; // 0x2b PushI
	var_7_bool = var_4_int != var_6_int; // 0x2c Neq
	if(var_7_bool == 0) goto Label_49; // 0x2d JumpB
	func_50(); // 0x2f NEW_2
	
Label_49:
	return 2; // 0x31 Return
}


func_108(var_4_object, var_5_object, var_6_string, var_7_string, var_8_string)
{
	var_9_bool = 0; var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0); var_12_object = Obj(); var_13_bool = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_object = Obj(); // 0x6c PushV
	GetLocator(var_6_string, var_13_bool, var_14_cvector, var_15_cvector); // 0x6d ObjFunc
	var_17_bool = var_13_bool == 0; // 0x6f Not
	if(var_17_bool == 0) goto Label_121; // 0x70 JumpB
	var_18_string = "Locator "; // 0x71 PushS
	var_19_int = var_18_string + var_6_string; // 0x72 Add
	var_20_string = " doesn't exist"; // 0x73 PushS
	var_21_int = var_19_int + var_20_string; // 0x74 Add
	Trace(var_21_int); // 0x75 Func
	var_16_object = 0; // 0x77 SetNull
	goto Label_123; // 0x78 Jump
	
Label_123:
	var_4_object = var_16_object; // 0x7b Mov
	return 8; // 0x7c Return
	
Label_121:
	AddActor(var_16_object, var_7_string, var_5_object, var_14_cvector, var_15_cvector, var_8_string); // 0x79 Func
}


func_78(var_22_int)
{
	var_23_float = 0; var_24_float = 0; // 0x4e PushV
	GetGameTime(var_24_float); // 0x4f Func
	var_25_int = 24; // 0x51 PushI
	var_26_float = var_22_int * var_25_int; // 0x52 Mult
	var_27_bool = var_24_float >= var_26_float; // 0x53 GE
	if(var_27_bool == 0) goto Label_89; // 0x54 JumpB
	func_66(var_24_float); // 0x56 NEW_2
	goto Label_96; // 0x58 Jump
	
Label_96:
	return 2; // 0x60 Return
	
Label_89:
	var_33_int = 0; // 0x59 PushI
	var_34_int = 24; // 0x5a PushI
	var_35_float = var_22_int * var_34_int; // 0x5b Mult
	SetTimeEvent(var_33_int, var_35_float); // 0x5c Func
	Hold(); // 0x5e Func
}


func_50()
{
	var_8_string = "d9q05"; // 0x32 PushS
	var_9_int = -1; // 0x33 PushI
	SetVariable(var_8_string, var_9_int); // 0x34 Func
	func_66(var_4_int); // 0x37 NEW_2
	return 0; // 0x39 Return
}


func_58()
{
	var_15_string = "d9q05"; // 0x3a PushS
	var_16_int = 1000; // 0x3b PushI
	SetVariable(var_15_string, var_16_int); // 0x3c Func
	func_66(var_1_string); // 0x3f NEW_2
	return 0; // 0x41 Return
}


