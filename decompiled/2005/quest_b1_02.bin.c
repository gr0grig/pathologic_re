task_0_event_26(var_0_object, var_1_string)
{
	Trace(var_1_string); // 0x13 Func
	var_2_string = "agony_dead"; // 0x15 PushS
	var_3_bool = var_1_string == var_2_string; // 0x16 Eq
	if(var_3_bool == 0) goto Label_29; // 0x17 JumpB
	var_4_string = "b1q02_dead"; // 0x18 PushS
	var_5_bool = 1; // 0x19 PushB
	SetVariable(var_4_string, var_5_bool); // 0x1a Func
	goto Label_53; // 0x1c Jump
	
Label_53:
	return 0; // 0x35 Return
	
Label_29:
	var_6_string = "agony_cured"; // 0x1d PushS
	var_7_bool = var_1_string == var_6_string; // 0x1e Eq
	if(var_7_bool == 0) goto Label_40; // 0x1f JumpB
	RemoveActor(var_0_object); // 0x20 Func
	var_0_object = 0; // 0x22 SetNullT
	var_8_object = Obj(); var_9_string = ""; // 0x23 PushV
	var_9_string = "quest_b1_02_cutscene"; // 0x24 MovS
	func_127(var_8_object, var_9_string); // 0x25 NEW_2
	goto Label_53; // 0x27 Jump
	
Label_40:
	var_16_string = "fail"; // 0x28 PushS
	var_17_bool = var_1_string == var_16_string; // 0x29 Eq
	if(var_17_bool == 0) goto Label_47; // 0x2a JumpB
	func_65(); // 0x2c NEW_2
	goto Label_53; // 0x2e Jump
	
Label_47:
	var_25_string = "completed"; // 0x2f PushS
	var_26_bool = var_1_string == var_25_string; // 0x30 Eq
	if(var_26_bool == 0) goto Label_53; // 0x31 JumpB
	func_73(); // 0x33 NEW_2
}


task_0_event_24(var_0_object, var_1_int)
{
	CameraSwitchToNormal(); // 0x5e Func
	return 0; // 0x60 Return
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_54(); // 0x76 NEW_2
	return 0; // 0x78 Return
}


main(var_0_object)
{
	var_1_object = Obj(); var_2_object = Obj(); // 0x0 PushV
	var_3_string = "storojka"; // 0x1 PushS
	GetSceneByName(var_2_object, var_3_string); // 0x2 Func
	var_4_object = Obj(); var_5_object = Obj(); var_6_string = ""; var_7_string = ""; var_8_string = ""; // 0x4 PushV
	var_5_object = var_2_object; // 0x5 Mov
	var_6_string = "pt_b1q02_agony"; // 0x6 MovS
	var_7_string = "pers_worker"; // 0x7 MovS
	var_8_string = "b1q02_agony.xml"; // 0x8 MovS
	func_138(var_4_object, var_5_object, var_6_string, var_7_string, var_8_string); // 0x9 NEW_2
	var_0_object = var_4_object; // 0xa TMov
	var_22_int = 0; // 0xc PushV
	var_22_int = 1; // 0xd MovI
	func_97(var_22_int); // 0xe NEW_2
	return 2; // 0x10 Return
}


func_65()
{
	var_8_string = "b1q02"; // 0x41 PushS
	var_9_int = -1; // 0x42 PushI
	SetVariable(var_8_string, var_9_int); // 0x43 Func
	func_81(var_4_int); // 0x46 NEW_2
	return 0; // 0x48 Return
}


func_97(var_22_int)
{
	var_23_float = 0; var_24_float = 0; // 0x61 PushV
	GetGameTime(var_24_float); // 0x62 Func
	var_25_int = 24; // 0x64 PushI
	var_26_float = var_22_int * var_25_int; // 0x65 Mult
	var_27_bool = var_24_float >= var_26_float; // 0x66 GE
	if(var_27_bool == 0) goto Label_108; // 0x67 JumpB
	func_81(var_24_float); // 0x69 NEW_2
	goto Label_115; // 0x6b Jump
	
Label_115:
	return 2; // 0x73 Return
	
Label_108:
	var_33_int = 0; // 0x6c PushI
	var_34_int = 24; // 0x6d PushI
	var_35_float = var_22_int * var_34_int; // 0x6e Mult
	SetTimeEvent(var_33_int, var_35_float); // 0x6f Func
	Hold(); // 0x71 Func
}


func_73()
{
	var_27_string = "b1q02"; // 0x49 PushS
	var_28_int = 1000; // 0x4a PushI
	SetVariable(var_27_string, var_28_int); // 0x4b Func
	func_81(var_1_string); // 0x4e NEW_2
	return 0; // 0x50 Return
}


func_138(var_4_object, var_5_object, var_6_string, var_7_string, var_8_string)
{
	var_9_bool = 0; var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0); var_12_object = Obj(); var_13_bool = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_object = Obj(); // 0x8a PushV
	GetLocator(var_6_string, var_13_bool, var_14_cvector, var_15_cvector); // 0x8b ObjFunc
	var_17_bool = var_13_bool == 0; // 0x8d Not
	if(var_17_bool == 0) goto Label_151; // 0x8e JumpB
	var_18_string = "Locator "; // 0x8f PushS
	var_19_int = var_18_string + var_6_string; // 0x90 Add
	var_20_string = " doesn't exist"; // 0x91 PushS
	var_21_int = var_19_int + var_20_string; // 0x92 Add
	Trace(var_21_int); // 0x93 Func
	var_16_object = 0; // 0x95 SetNull
	goto Label_153; // 0x96 Jump
	
Label_153:
	var_4_object = var_16_object; // 0x99 Mov
	return 8; // 0x9a Return
	
Label_151:
	AddActor(var_16_object, var_7_string, var_5_object, var_14_cvector, var_15_cvector, var_8_string); // 0x97 Func
}


func_81(var_0_object)
{
	EventDisable(26); // 0x51 EventDisable
	var_28_object = var_0_object; // 0x52 PushT
	if(var_28_object == 0) goto Label_87; // 0x53 JumpB
	var_29_string = "cleanup"; // 0x54 PushS
	Trigger(var_0_object, var_29_string); // 0x55 Func
	
Label_87:
	var_30_object = Obj(); // 0x57 PushV
	func_121(var_30_object); // 0x58 NEW_2
	RemoveActor(var_30_object); // 0x5a Func
	return 0; // 0x5c Return
}


func_54()
{
	var_3_int = 0; var_4_int = 0; // 0x36 PushV
	var_5_string = "b1q02"; // 0x37 PushS
	GetVariable(var_5_string, var_4_int); // 0x38 Func
	var_6_int = 1000; // 0x3a PushI
	var_7_bool = var_4_int != var_6_int; // 0x3b Neq
	if(var_7_bool == 0) goto Label_64; // 0x3c JumpB
	func_65(); // 0x3e NEW_2
	
Label_64:
	return 2; // 0x40 Return
}


func_121(var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj(); // 0x79 PushV
	self(var_32_object); // 0x7a Func
	var_30_object = var_32_object; // 0x7c Mov
	return 2; // 0x7d Return
}


func_127(var_8_object, var_9_string)
{
	var_10_object = Obj(); var_11_object = Obj(); var_12_object = Obj(); var_13_object = Obj(); // 0x7f PushV
	GetMainOutdoorScene(var_12_object); // 0x80 Func
	var_14_string = ".bin"; // 0x82 PushS
	var_15_int = var_9_string + var_14_string; // 0x83 Add
	AddBlankActor(var_13_object, var_12_object, var_9_string, var_15_int); // 0x84 Func
	var_8_object = var_13_object; // 0x86 Mov
	return 4; // 0x87 Return
}


