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
	var_9_string = "pers_karlik"; // 0x19 MovS
	var_10_string = "b1q03_doberman.xml"; // 0x1a MovS
	func_108(var_7_object, var_8_string, var_9_string, var_10_string); // 0x1b NEW_2
	var_0_object = var_6_object; // 0x1c TMov
	var_3_object = 0; // 0x1e SetNull
	goto Label_46; // 0x1f Jump
	
Label_46:
	return 2; // 0x2e Return
	
Label_32:
	var_24_string = "doberman_dead"; // 0x20 PushS
	var_25_bool = var_1_string == var_24_string; // 0x21 Eq
	if(var_25_bool == 0) goto Label_40; // 0x22 JumpB
	var_26_string = "b1q03_dead"; // 0x23 PushS
	var_27_int = 1; // 0x24 PushI
	SetVariable(var_26_string, var_27_int); // 0x25 Func
	goto Label_46; // 0x27 Jump
	
Label_40:
	var_28_string = "cleanup"; // 0x28 PushS
	var_29_bool = var_1_string == var_28_string; // 0x29 Eq
	if(var_29_bool == 0) goto Label_46; // 0x2a JumpB
	func_66(var_3_object); // 0x2c NEW_2
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_47(); // 0x63 NEW_2
	return 0; // 0x65 Return
}


main(var_0_object)
{
	var_1_bool = 0; var_2_string = ""; var_3_string = ""; // 0x0 PushV
	var_2_string = "quest_b1_01"; // 0x1 MovS
	var_3_string = "remove_cutscene"; // 0x2 MovS
	func_126(var_1_bool, var_2_string, var_3_string); // 0x3 NEW_2
	var_7_string = "b1q03"; // 0x5 PushS
	var_8_int = 1; // 0x6 PushI
	SetVariable(var_7_string, var_8_int); // 0x7 Func
	var_9_int = 0; // 0x9 PushV
	var_9_int = 1; // 0xa MovI
	func_78(var_9_int); // 0xb NEW_2
	return 0; // 0xd Return
}


func_66(var_0_object)
{
	EventDisable(26); // 0x42 EventDisable
	var_15_object = var_0_object; // 0x43 PushT
	if(var_15_object == 0) goto Label_72; // 0x44 JumpB
	Remove(); // 0x45 TObjFunc
	var_0_object = 0; // 0x47 SetNullT
	
Label_72:
	var_16_object = Obj(); // 0x48 PushV
	func_102(var_16_object); // 0x49 NEW_2
	RemoveActor(var_16_object); // 0x4b Func
	return 0; // 0x4d Return
}


func_102(var_16_object)
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x66 PushV
	self(var_18_object); // 0x67 Func
	var_16_object = var_18_object; // 0x69 Mov
	return 2; // 0x6a Return
}


func_108(var_6_object, var_8_string, var_9_string, var_10_string)
{
	var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_object = Obj(); var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_object = Obj(); // 0x6c PushV
	GetLocator(var_8_string, var_15_bool, var_16_cvector, var_17_cvector); // 0x6d ObjFunc
	var_19_bool = var_15_bool == 0; // 0x6f Not
	if(var_19_bool == 0) goto Label_121; // 0x70 JumpB
	var_20_string = "Locator "; // 0x71 PushS
	var_21_int = var_20_string + var_8_string; // 0x72 Add
	var_22_string = " doesn't exist"; // 0x73 PushS
	var_23_int = var_21_int + var_22_string; // 0x74 Add
	Trace(var_23_int); // 0x75 Func
	var_18_object = 0; // 0x77 SetNull
	goto Label_123; // 0x78 Jump
	
Label_123:
	var_6_object = var_18_object; // 0x7b Mov
	return 8; // 0x7c Return
	
Label_121:
	AddStationaryActor(var_18_object, var_16_cvector, var_17_cvector, var_9_string, var_10_string); // 0x79 ObjFunc
}


func_78(var_9_int)
{
	var_10_float = 0; var_11_float = 0; // 0x4e PushV
	GetGameTime(var_11_float); // 0x4f Func
	var_12_int = 24; // 0x51 PushI
	var_13_float = var_9_int * var_12_int; // 0x52 Mult
	var_14_bool = var_11_float >= var_13_float; // 0x53 GE
	if(var_14_bool == 0) goto Label_89; // 0x54 JumpB
	func_66(var_11_float); // 0x56 NEW_2
	goto Label_96; // 0x58 Jump
	
Label_96:
	return 2; // 0x60 Return
	
Label_89:
	var_19_int = 0; // 0x59 PushI
	var_20_int = 24; // 0x5a PushI
	var_21_float = var_9_int * var_20_int; // 0x5b Mult
	SetTimeEvent(var_19_int, var_21_float); // 0x5c Func
	Hold(); // 0x5e Func
}


func_47()
{
	var_3_int = 0; var_4_int = 0; // 0x2f PushV
	var_5_string = "b1q03"; // 0x30 PushS
	GetVariable(var_5_string, var_4_int); // 0x31 Func
	var_6_int = 1000; // 0x33 PushI
	var_7_bool = var_4_int != var_6_int; // 0x34 Neq
	if(var_7_bool == 0) goto Label_57; // 0x35 JumpB
	func_58(); // 0x37 NEW_2
	
Label_57:
	return 2; // 0x39 Return
}


func_58()
{
	var_8_string = "b1q03"; // 0x3a PushS
	var_9_int = -1; // 0x3b PushI
	SetVariable(var_8_string, var_9_int); // 0x3c Func
	func_66(var_4_int); // 0x3f NEW_2
	return 0; // 0x41 Return
}


func_126(var_1_bool, var_2_string, var_3_string)
{
	var_4_object = Obj(); var_5_object = Obj(); // 0x7e PushV
	FindActor(var_5_object, var_2_string); // 0x7f Func
	var_6_bool = var_5_object == 0; // 0x81 NullEq
	if(var_6_bool == 0) goto Label_133; // 0x82 JumpB
	var_1_bool = 0; // 0x83 MovB
	return 2; // 0x84 Return
	
Label_133:
	Trigger(var_5_object, var_3_string); // 0x85 Func
	var_1_bool = 1; // 0x87 MovB
	return 2; // 0x88 Return
}


