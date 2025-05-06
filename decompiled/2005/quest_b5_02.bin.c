task_0_event_26(var_0_object, var_1_string)
{
	var_2_object = Obj(); var_3_object = Obj(); // 0x5 PushV
	Trace(var_1_string); // 0x6 Func
	var_4_string = "place_prophet"; // 0x8 PushS
	var_5_bool = var_1_string == var_4_string; // 0x9 Eq
	if(var_5_bool == 0) goto Label_24; // 0xa JumpB
	var_6_string = "house_vlad"; // 0xb PushS
	GetSceneByName(var_3_object, var_6_string); // 0xc Func
	var_7_object = Obj(); var_8_object = Obj(); var_9_string = ""; var_10_string = ""; var_11_string = ""; // 0xe PushV
	var_8_object = var_3_object; // 0xf Mov
	var_9_string = "pt_prorok"; // 0x10 MovS
	var_10_string = "pers_krysa"; // 0x11 MovS
	var_11_string = "b5q02_prorok.xml"; // 0x12 MovS
	func_134(var_7_object, var_8_object, var_9_string, var_10_string, var_11_string); // 0x13 NEW_2
	var_0_object = var_7_object; // 0x14 TMov
	var_3_object = 0; // 0x16 SetNull
	goto Label_57; // 0x17 Jump
	
Label_57:
	return 2; // 0x39 Return
	
Label_24:
	var_25_string = "remove_prophet"; // 0x18 PushS
	var_26_bool = var_1_string == var_25_string; // 0x19 Eq
	if(var_26_bool == 0) goto Label_31; // 0x1a JumpB
	var_27_string = "cleanup"; // 0x1b PushS
	Trigger(var_0_object, var_27_string); // 0x1c Func
	goto Label_57; // 0x1e Jump
	
Label_31:
	var_28_string = "maze_start"; // 0x1f PushS
	var_29_bool = var_1_string == var_28_string; // 0x20 Eq
	if(var_29_bool == 0) goto Label_44; // 0x21 JumpB
	var_30_object = Obj(); var_31_string = ""; var_32_string = ""; // 0x22 PushV
	var_33_object = Obj(); // 0x23 PushV
	func_121(var_33_object); // 0x24 NEW_2
	var_30_object = var_33_object; // 0x25 Mov
	var_31_string = "house_vlad"; // 0x27 MovS
	var_32_string = "pt_maze_start"; // 0x28 MovS
	func_152(var_30_object, var_31_string, var_32_string); // 0x29 NEW_2
	goto Label_57; // 0x2b Jump
	
Label_44:
	var_54_string = "fail"; // 0x2c PushS
	var_55_bool = var_1_string == var_54_string; // 0x2d Eq
	if(var_55_bool == 0) goto Label_51; // 0x2e JumpB
	func_69(); // 0x30 NEW_2
	goto Label_57; // 0x32 Jump
	
Label_51:
	var_63_string = "completed"; // 0x33 PushS
	var_64_bool = var_1_string == var_63_string; // 0x34 Eq
	if(var_64_bool == 0) goto Label_57; // 0x35 JumpB
	func_77(); // 0x37 NEW_2
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_58(); // 0x76 NEW_2
	return 0; // 0x78 Return
}


main(var_0_object)
{
	var_1_int = 0; // 0x0 PushV
	var_1_int = 5; // 0x1 MovI
	func_97(var_1_int); // 0x2 NEW_2
	return 0; // 0x4 Return
}


func_128(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x80 PushV
	self(var_11_object); // 0x81 Func
	var_9_object = var_11_object; // 0x83 Mov
	return 2; // 0x84 Return
}


func_97(var_1_int)
{
	var_2_float = 0; var_3_float = 0; // 0x61 PushV
	GetGameTime(var_3_float); // 0x62 Func
	var_4_int = 24; // 0x64 PushI
	var_5_float = var_1_int * var_4_int; // 0x65 Mult
	var_6_bool = var_3_float >= var_5_float; // 0x66 GE
	if(var_6_bool == 0) goto Label_108; // 0x67 JumpB
	func_85(var_3_float); // 0x69 NEW_2
	goto Label_115; // 0x6b Jump
	
Label_115:
	return 2; // 0x73 Return
	
Label_108:
	var_12_int = 0; // 0x6c PushI
	var_13_int = 24; // 0x6d PushI
	var_14_float = var_1_int * var_13_int; // 0x6e Mult
	SetTimeEvent(var_12_int, var_14_float); // 0x6f Func
	Hold(); // 0x71 Func
}


func_69()
{
	var_8_string = "b5q02"; // 0x45 PushS
	var_9_int = -1; // 0x46 PushI
	SetVariable(var_8_string, var_9_int); // 0x47 Func
	func_85(var_4_int); // 0x4a NEW_2
	return 0; // 0x4c Return
}


func_134(var_7_object, var_8_object, var_9_string, var_10_string, var_11_string)
{
	var_12_bool = 0; var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_object = Obj(); var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_object = Obj(); // 0x86 PushV
	GetLocator(var_9_string, var_16_bool, var_17_cvector, var_18_cvector); // 0x87 ObjFunc
	var_20_bool = var_16_bool == 0; // 0x89 Not
	if(var_20_bool == 0) goto Label_147; // 0x8a JumpB
	var_21_string = "Locator "; // 0x8b PushS
	var_22_int = var_21_string + var_9_string; // 0x8c Add
	var_23_string = " doesn't exist"; // 0x8d PushS
	var_24_int = var_22_int + var_23_string; // 0x8e Add
	Trace(var_24_int); // 0x8f Func
	var_19_object = 0; // 0x91 SetNull
	goto Label_149; // 0x92 Jump
	
Label_149:
	var_7_object = var_19_object; // 0x95 Mov
	return 8; // 0x96 Return
	
Label_147:
	AddActor(var_19_object, var_10_string, var_8_object, var_17_cvector, var_18_cvector, var_11_string); // 0x93 Func
}


func_77()
{
	var_65_string = "b5q02"; // 0x4d PushS
	var_66_int = 1000; // 0x4e PushI
	SetVariable(var_65_string, var_66_int); // 0x4f Func
	func_85(var_3_object); // 0x52 NEW_2
	return 0; // 0x54 Return
}


func_85(var_0_object)
{
	EventDisable(26); // 0x55 EventDisable
	var_7_object = var_0_object; // 0x56 PushT
	if(var_7_object == 0) goto Label_91; // 0x57 JumpB
	var_8_string = "cleanup"; // 0x58 PushS
	Trigger(var_0_object, var_8_string); // 0x59 Func
	
Label_91:
	var_9_object = Obj(); // 0x5b PushV
	func_128(var_9_object); // 0x5c NEW_2
	RemoveActor(var_9_object); // 0x5e Func
	return 0; // 0x60 Return
}


func_152(var_30_object, var_31_string, var_32_string)
{
	var_37_object = Obj(); var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_object = Obj(); var_42_bool = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); // 0x98 PushV
	var_45_bool = var_30_object == 0; // 0x99 Not
	if(var_45_bool == 0) goto Label_156; // 0x9a JumpB
	return 8; // 0x9b Return
	
Label_156:
	GetSceneByName(var_41_object, var_31_string); // 0x9c Func
	GetLocator(var_32_string, var_42_bool, var_43_cvector, var_44_cvector); // 0x9e ObjFunc
	var_46_bool = var_42_bool == 0; // 0xa0 Not
	if(var_46_bool == 0) goto Label_172; // 0xa1 JumpB
	var_47_string = "Teleport location '"; // 0xa2 PushS
	var_48_int = var_47_string + var_32_string; // 0xa3 Add
	var_49_string = "' not found in scene '"; // 0xa4 PushS
	var_50_int = var_48_int + var_49_string; // 0xa5 Add
	var_51_int = var_50_int + var_31_string; // 0xa6 Add
	var_52_string = "'"; // 0xa7 PushS
	var_53_int = var_51_int + var_52_string; // 0xa8 Add
	Trace(var_53_int); // 0xa9 Func
	goto Label_174; // 0xab Jump
	
Label_174:
	return 8; // 0xae Return
	
Label_172:
	Teleport(var_30_object, var_41_object, var_43_cvector, var_44_cvector); // 0xac Func
}


func_121(var_33_object)
{
	var_34_object = Obj(); var_35_object = Obj(); // 0x79 PushV
	var_36_string = "player"; // 0x7a PushS
	FindActor(var_35_object, var_36_string); // 0x7b Func
	var_33_object = var_35_object; // 0x7d Mov
	return 2; // 0x7e Return
}


func_58()
{
	var_3_int = 0; var_4_int = 0; // 0x3a PushV
	var_5_string = "b5q02"; // 0x3b PushS
	GetVariable(var_5_string, var_4_int); // 0x3c Func
	var_6_int = 1000; // 0x3e PushI
	var_7_bool = var_4_int != var_6_int; // 0x3f Neq
	if(var_7_bool == 0) goto Label_68; // 0x40 JumpB
	func_69(); // 0x42 NEW_2
	
Label_68:
	return 2; // 0x44 Return
}


