task_0_event_26(var_0_object, var_1_string)
{
	var_2_object = Obj(); var_3_object = Obj(); // 0xe PushV
	Trace(var_1_string); // 0xf Func
	var_4_string = "place_doberman"; // 0x11 PushS
	var_5_bool = var_1_string == var_4_string; // 0x12 Eq
	if(var_5_bool == 0) goto Label_32; // 0x13 JumpB
	GetMainOutdoorScene(var_3_object); // 0x14 Func
	var_6_object = Obj(); var_7_object = Obj(); var_8_string = ""; var_9_string = ""; var_10_string = ""; // 0x16 PushV
	var_7_object = var_3_object; // 0x17 Mov
	var_8_string = "pt_b1q03_doberman"; // 0x18 MovS
	var_9_string = "pers_doberman"; // 0x19 MovS
	var_10_string = "b1q03_doberman.xml"; // 0x1a MovS
	func_111(var_7_object, var_8_string, var_9_string, var_10_string); // 0x1b NEW_2
	var_0_object = var_6_object; // 0x1c TMov
	var_3_object = 0; // 0x1e SetNull
	goto Label_49; // 0x1f Jump
	
Label_49:
	return 2; // 0x31 Return
	
Label_32:
	var_24_string = "doberman_dead"; // 0x20 PushS
	var_25_bool = var_1_string == var_24_string; // 0x21 Eq
	if(var_25_bool == 0) goto Label_43; // 0x22 JumpB
	var_26_string = "b1q03_dead"; // 0x23 PushS
	var_27_int = 1; // 0x24 PushI
	SetVariable(var_26_string, var_27_int); // 0x25 Func
	var_28_string = "ACHIEVEMENT_DONT"; // 0x27 PushS
	UnlockAchievement(var_28_string); // 0x28 Func
	goto Label_49; // 0x2a Jump
	
Label_43:
	var_29_string = "cleanup"; // 0x2b PushS
	var_30_bool = var_1_string == var_29_string; // 0x2c Eq
	if(var_30_bool == 0) goto Label_49; // 0x2d JumpB
	func_69(var_3_object); // 0x2f NEW_2
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_50(); // 0x66 NEW_2
	return 0; // 0x68 Return
}


main(var_0_object)
{
	var_1_bool = 0; var_2_string = ""; var_3_string = ""; // 0x0 PushV
	var_2_string = "quest_b1_01"; // 0x1 MovS
	var_3_string = "remove_cutscene"; // 0x2 MovS
	func_129(var_1_bool, var_2_string, var_3_string); // 0x3 NEW_2
	var_7_string = "b1q03"; // 0x5 PushS
	var_8_int = 1; // 0x6 PushI
	SetVariable(var_7_string, var_8_int); // 0x7 Func
	var_9_int = 0; // 0x9 PushV
	var_9_int = 1; // 0xa MovI
	func_81(var_9_int); // 0xb NEW_2
	return 0; // 0xd Return
}


func_129(var_1_bool, var_2_string, var_3_string)
{
	var_4_object = Obj(); var_5_object = Obj(); // 0x81 PushV
	FindActor(var_5_object, var_2_string); // 0x82 Func
	var_6_bool = var_5_object == 0; // 0x84 NullEq
	if(var_6_bool == 0) goto Label_136; // 0x85 JumpB
	var_1_bool = 0; // 0x86 MovB
	return 2; // 0x87 Return
	
Label_136:
	Trigger(var_5_object, var_3_string); // 0x88 Func
	var_1_bool = 1; // 0x8a MovB
	return 2; // 0x8b Return
}


func_69(var_0_object)
{
	EventDisable(26); // 0x45 EventDisable
	var_15_object = var_0_object; // 0x46 PushT
	if(var_15_object == 0) goto Label_75; // 0x47 JumpB
	Remove(); // 0x48 TObjFunc
	var_0_object = 0; // 0x4a SetNullT
	
Label_75:
	var_16_object = Obj(); // 0x4b PushV
	func_105(var_16_object); // 0x4c NEW_2
	RemoveActor(var_16_object); // 0x4e Func
	return 0; // 0x50 Return
}


func_105(var_16_object)
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x69 PushV
	self(var_18_object); // 0x6a Func
	var_16_object = var_18_object; // 0x6c Mov
	return 2; // 0x6d Return
}


func_111(var_6_object, var_8_string, var_9_string, var_10_string)
{
	var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_object = Obj(); var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_object = Obj(); // 0x6f PushV
	GetLocator(var_8_string, var_15_bool, var_16_cvector, var_17_cvector); // 0x70 ObjFunc
	var_19_bool = var_15_bool == 0; // 0x72 Not
	if(var_19_bool == 0) goto Label_124; // 0x73 JumpB
	var_20_string = "Locator "; // 0x74 PushS
	var_21_int = var_20_string + var_8_string; // 0x75 Add
	var_22_string = " doesn't exist"; // 0x76 PushS
	var_23_int = var_21_int + var_22_string; // 0x77 Add
	Trace(var_23_int); // 0x78 Func
	var_18_object = 0; // 0x7a SetNull
	goto Label_126; // 0x7b Jump
	
Label_126:
	var_6_object = var_18_object; // 0x7e Mov
	return 8; // 0x7f Return
	
Label_124:
	AddStationaryActor(var_18_object, var_16_cvector, var_17_cvector, var_9_string, var_10_string); // 0x7c ObjFunc
}


func_81(var_9_int)
{
	var_10_float = 0; var_11_float = 0; // 0x51 PushV
	GetGameTime(var_11_float); // 0x52 Func
	var_12_int = 24; // 0x54 PushI
	var_13_float = var_9_int * var_12_int; // 0x55 Mult
	var_14_bool = var_11_float >= var_13_float; // 0x56 GE
	if(var_14_bool == 0) goto Label_92; // 0x57 JumpB
	func_69(var_11_float); // 0x59 NEW_2
	goto Label_99; // 0x5b Jump
	
Label_99:
	return 2; // 0x63 Return
	
Label_92:
	var_19_int = 0; // 0x5c PushI
	var_20_int = 24; // 0x5d PushI
	var_21_float = var_9_int * var_20_int; // 0x5e Mult
	SetTimeEvent(var_19_int, var_21_float); // 0x5f Func
	Hold(); // 0x61 Func
}


func_50()
{
	var_3_int = 0; var_4_int = 0; // 0x32 PushV
	var_5_string = "b1q03"; // 0x33 PushS
	GetVariable(var_5_string, var_4_int); // 0x34 Func
	var_6_int = 1000; // 0x36 PushI
	var_7_bool = var_4_int != var_6_int; // 0x37 Neq
	if(var_7_bool == 0) goto Label_60; // 0x38 JumpB
	func_61(); // 0x3a NEW_2
	
Label_60:
	return 2; // 0x3c Return
}


func_61()
{
	var_8_string = "b1q03"; // 0x3d PushS
	var_9_int = -1; // 0x3e PushI
	SetVariable(var_8_string, var_9_int); // 0x3f Func
	func_69(var_4_int); // 0x42 NEW_2
	return 0; // 0x44 Return
}


