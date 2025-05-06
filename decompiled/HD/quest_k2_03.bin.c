task_0_event_26(var_0_object, var_1_object, var_2_string)
{
	var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); // 0x9 PushV
	Trace(var_2_string); // 0xa Func
	var_7_string = "place_arfist"; // 0xc PushS
	var_8_bool = var_2_string == var_7_string; // 0xd Eq
	if(var_8_bool == 0) goto Label_28; // 0xe JumpB
	var_9_string = "r4_house_2_02"; // 0xf PushS
	GetSceneByName(var_5_object, var_9_string); // 0x10 Func
	var_10_object = Obj(); var_11_object = Obj(); var_12_string = ""; var_13_string = ""; var_14_string = ""; // 0x12 PushV
	var_11_object = var_5_object; // 0x13 Mov
	var_12_string = "pt_k2q03_arfist"; // 0x14 MovS
	var_13_string = "pers_wasted_male"; // 0x15 MovS
	var_14_string = "k2q03_arfist.xml"; // 0x16 MovS
	func_135(var_10_object, var_11_object, var_12_string, var_13_string, var_14_string); // 0x17 NEW_2
	var_0_object = var_10_object; // 0x18 TMov
	var_5_object = 0; // 0x1a SetNull
	goto Label_55; // 0x1b Jump
	
Label_55:
	return 4; // 0x37 Return
	
Label_28:
	var_28_string = "place_danko"; // 0x1c PushS
	var_29_bool = var_2_string == var_28_string; // 0x1d Eq
	if(var_29_bool == 0) goto Label_49; // 0x1e JumpB
	var_30_string = ""; var_31_bool = 0; // 0x1f PushV
	var_30_string = "icot_eva_door"; // 0x20 MovS
	var_31_bool = 1; // 0x21 MovB
	func_153(var_30_string, var_31_bool); // 0x22 NEW_2
	var_41_string = "r4_house_2_02"; // 0x24 PushS
	GetSceneByName(var_6_object, var_41_string); // 0x25 Func
	var_42_object = Obj(); var_43_object = Obj(); var_44_string = ""; var_45_string = ""; var_46_string = ""; // 0x27 PushV
	var_43_object = var_6_object; // 0x28 Mov
	var_44_string = "pt_k2q03_danko"; // 0x29 MovS
	var_45_string = "NPC_Bakalavr"; // 0x2a MovS
	var_46_string = "k2q03_danko.xml"; // 0x2b MovS
	func_135(var_42_object, var_43_object, var_44_string, var_45_string, var_46_string); // 0x2c NEW_2
	var_1_object = var_42_object; // 0x2d TMov
	var_6_object = 0; // 0x2f SetNull
	goto Label_55; // 0x30 Jump
	
Label_49:
	var_47_string = "completed"; // 0x31 PushS
	var_48_bool = var_2_string == var_47_string; // 0x32 Eq
	if(var_48_bool == 0) goto Label_55; // 0x33 JumpB
	func_75(); // 0x35 NEW_2
}


task_0_event_9(var_0_object, var_1_object, var_2_int, var_3_float)
{
	func_56(); // 0x7e NEW_2
	return 0; // 0x80 Return
}


main(var_0_object, var_1_object)
{
	var_2_string = "k2q03"; // 0x0 PushS
	var_3_int = 1; // 0x1 PushI
	SetVariable(var_2_string, var_3_int); // 0x2 Func
	var_4_int = 0; // 0x4 PushV
	var_4_int = 2; // 0x5 MovI
	func_105(var_4_int); // 0x6 NEW_2
	return 0; // 0x8 Return
}


func_129(var_25_object)
{
	var_26_object = Obj(); var_27_object = Obj(); // 0x81 PushV
	self(var_27_object); // 0x82 Func
	var_25_object = var_27_object; // 0x84 Mov
	return 2; // 0x85 Return
}


func_67()
{
	var_9_string = "k2q03"; // 0x43 PushS
	var_10_int = -1; // 0x44 PushI
	SetVariable(var_9_string, var_10_int); // 0x45 Func
	func_83(var_5_int); // 0x48 NEW_2
	return 0; // 0x4a Return
}


func_135(var_10_object, var_11_object, var_12_string, var_13_string, var_14_string)
{
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_object = Obj(); // 0x87 PushV
	GetLocator(var_12_string, var_19_bool, var_20_cvector, var_21_cvector); // 0x88 ObjFunc
	var_23_bool = var_19_bool == 0; // 0x8a Not
	if(var_23_bool == 0) goto Label_148; // 0x8b JumpB
	var_24_string = "Locator "; // 0x8c PushS
	var_25_int = var_24_string + var_12_string; // 0x8d Add
	var_26_string = " doesn't exist"; // 0x8e PushS
	var_27_int = var_25_int + var_26_string; // 0x8f Add
	Trace(var_27_int); // 0x90 Func
	var_22_object = 0; // 0x92 SetNull
	goto Label_150; // 0x93 Jump
	
Label_150:
	var_10_object = var_22_object; // 0x96 Mov
	return 8; // 0x97 Return
	
Label_148:
	AddActor(var_22_object, var_13_string, var_11_object, var_20_cvector, var_21_cvector, var_14_string); // 0x94 Func
}


func_105(var_4_int)
{
	var_5_float = 0; var_6_float = 0; // 0x69 PushV
	GetGameTime(var_6_float); // 0x6a Func
	var_7_int = 24; // 0x6c PushI
	var_8_float = var_4_int * var_7_int; // 0x6d Mult
	var_9_bool = var_6_float >= var_8_float; // 0x6e GE
	if(var_9_bool == 0) goto Label_116; // 0x6f JumpB
	func_83(var_6_float); // 0x71 NEW_2
	goto Label_123; // 0x73 Jump
	
Label_123:
	return 2; // 0x7b Return
	
Label_116:
	var_28_int = 0; // 0x74 PushI
	var_29_int = 24; // 0x75 PushI
	var_30_float = var_4_int * var_29_int; // 0x76 Mult
	SetTimeEvent(var_28_int, var_30_float); // 0x77 Func
	Hold(); // 0x79 Func
}


func_75()
{
	var_49_string = "k2q03"; // 0x4b PushS
	var_50_int = 1000; // 0x4c PushI
	SetVariable(var_49_string, var_50_int); // 0x4d Func
	func_83(var_6_object); // 0x50 NEW_2
	return 0; // 0x52 Return
}


func_83(var_0_object)
{
	EventDisable(26); // 0x53 EventDisable
	var_10_string = ""; var_11_bool = 0; // 0x54 PushV
	var_10_string = "icot_eva_door"; // 0x55 MovS
	var_11_bool = 0; // 0x56 MovB
	func_153(var_10_string, var_11_bool); // 0x57 NEW_2
	var_21_object = var_0_object; // 0x59 PushT
	if(var_21_object == 0) goto Label_94; // 0x5a JumpB
	var_22_string = "cleanup"; // 0x5b PushS
	Trigger(var_0_object, var_22_string); // 0x5c Func
	
Label_94:
	var_23_object = var_1_object; // 0x5e PushT
	if(var_23_object == 0) goto Label_99; // 0x5f JumpB
	var_24_string = "cleanup"; // 0x60 PushS
	Trigger(var_24_string, var_24_string); // 0x61 Func
	
Label_99:
	var_25_object = Obj(); // 0x63 PushV
	func_129(var_25_object); // 0x64 NEW_2
	RemoveActor(var_25_object); // 0x66 Func
	return 0; // 0x68 Return
}


func_56()
{
	var_4_int = 0; var_5_int = 0; // 0x38 PushV
	var_6_string = "k2q03"; // 0x39 PushS
	GetVariable(var_6_string, var_5_int); // 0x3a Func
	var_7_int = 1000; // 0x3c PushI
	var_8_bool = var_5_int != var_7_int; // 0x3d Neq
	if(var_8_bool == 0) goto Label_66; // 0x3e JumpB
	func_67(); // 0x40 NEW_2
	
Label_66:
	return 2; // 0x42 Return
}


func_153(var_10_string, var_11_bool)
{
	var_12_object = Obj(); var_13_object = Obj(); // 0x99 PushV
	FindActor(var_13_object, var_10_string); // 0x9a Func
	var_14_bool = var_13_object == 0; // 0x9c Not
	if(var_14_bool == 0) goto Label_165; // 0x9d JumpB
	var_15_string = "Door "; // 0x9e PushS
	var_16_int = var_15_string + var_10_string; // 0x9f Add
	var_17_string = " not found"; // 0xa0 PushS
	var_18_int = var_16_int + var_17_string; // 0xa1 Add
	Trace(var_18_int); // 0xa2 Func
	goto Label_172; // 0xa4 Jump
	
Label_172:
	return 2; // 0xac Return
	
Label_165:
	var_19_bool = var_11_bool; // 0xa5 Push
	if(var_19_bool == 0) goto Label_169; // 0xa6 JumpB
	Close(); // 0xa7 ObjFunc
	
Label_169:
	var_20_string = "locked"; // 0xa9 PushS
	SetProperty(var_20_string, var_11_bool); // 0xaa ObjFunc
}


