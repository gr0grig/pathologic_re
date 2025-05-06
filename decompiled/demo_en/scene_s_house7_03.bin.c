task_0_event_5()
{
	var_0_bool = 0; var_1_string = ""; var_2_string = ""; // 0x0 PushV
	var_1_string = "quest_d4_02"; // 0x1 MovS
	var_2_string = "scene_load"; // 0x2 MovS
	func_171(var_0_bool, var_1_string, var_2_string); // 0x3 NEW_2
	func_29(); // 0x6 NEW_2
	return 0; // 0x8 Return
}


task_0_event_6()
{
	var_0_bool = 0; var_1_string = ""; var_2_string = ""; // 0x9 PushV
	var_1_string = "quest_d4_02"; // 0xa MovS
	var_2_string = "scene_unload"; // 0xb MovS
	func_171(var_0_bool, var_1_string, var_2_string); // 0xc NEW_2
	return 0; // 0xe Return
}


task_1_event_6()
{
	var_0_bool = 0; var_1_string = ""; var_2_string = ""; // 0x4b PushV
	var_1_string = "quest_d4_02"; // 0x4c MovS
	var_2_string = "scene_unload"; // 0x4d MovS
	func_171(var_0_bool, var_1_string, var_2_string); // 0x4e NEW_2
	func_109(); // 0x51 NEW_2
	return 0; // 0x53 Return
}


main()
{
	var_0_string = ""; var_1_string = ""; // 0xf PushV
	var_0_string = "woman"; // 0x10 MovS
	var_1_string = "woman"; // 0x11 MovS
	func_35(var_0_string, var_1_string); // 0x12 NEW_2
	var_34_string = ""; var_35_string = ""; // 0x14 PushV
	var_34_string = "worker"; // 0x15 MovS
	var_35_string = "man"; // 0x16 MovS
	func_35(var_34_string, var_35_string); // 0x17 NEW_2
	
Label_25:
	Hold(); // 0x19 Func
	goto Label_25; // 0x1b Jump
}


func_160(var_26_object)
{
	var_27_object = Obj(); var_28_object = Obj(); // 0xa0 PushV
	self(var_28_object); // 0xa1 Func
	var_26_object = var_28_object; // 0xa3 Mov
	return 2; // 0xa4 Return
}


func_35(var_0_string, var_1_string)
{
	var_2_int = 0; var_3_bool = 0; var_4_cvector = CVector(0,0,0); var_5_cvector = CVector(0,0,0); var_6_int = 0; var_7_bool = 0; var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0); // 0x23 PushV
	var_6_int = 1; // 0x24 MovI
	
Label_37:
	var_10_string = "pt_agony_"; // 0x25 PushS
	var_11_int = var_10_string + var_0_string; // 0x26 Add
	var_12_int = var_11_int + var_6_int; // 0x27 Add
	GetLocator(var_12_int, var_7_bool, var_8_cvector, var_9_cvector); // 0x28 Func
	var_13_bool = var_7_bool == 0; // 0x2a Not
	if(var_13_bool == 0) goto Label_45; // 0x2b JumpB
	goto Label_55; // 0x2c Jump
	
Label_55:
	return 8; // 0x37 Return
	
Label_45:
	var_14_string = ""; var_15_string = ""; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); // 0x2d PushV
	var_14_string = var_0_string; // 0x2e Mov
	var_15_string = var_1_string; // 0x2f Mov
	var_16_cvector = var_8_cvector; // 0x30 Mov
	var_17_cvector = var_9_cvector; // 0x31 Mov
	func_56(var_14_string, var_15_string, var_16_cvector, var_17_cvector); // 0x32 NEW_2
	var_33_int = 1; // 0x34 PushI
	var_6_int = var_6_int + var_33_int; // 0x35 Add2
	goto Label_37; // 0x36 Jump
}


func_166(var_20_bool, var_21_float)
{
	var_22_float = 0; var_23_float = 0; // 0xa6 PushV
	rand(var_23_float); // 0xa7 Func
	var_20_bool = var_23_float < var_21_float; // 0xa9 LT2
	return 2; // 0xaa Return
}


func_171(var_0_bool, var_1_string, var_2_string)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0xab PushV
	FindActor(var_4_object, var_1_string); // 0xac Func
	var_5_bool = var_4_object == 0; // 0xae NullEq
	if(var_5_bool == 0) goto Label_178; // 0xaf JumpB
	var_0_bool = 0; // 0xb0 MovB
	return 2; // 0xb1 Return
	
Label_178:
	Trigger(var_4_object, var_2_string); // 0xb2 Func
	var_0_bool = 1; // 0xb4 MovB
	return 2; // 0xb5 Return
}


func_109()
{
	StopGroup0(); // 0x6d Func
	return 0; // 0x6f Return
}


func_112(var_39_cvector)
{
	var_40_object = Obj(); var_41_object = Obj(); // 0x70 PushV
	var_42_string = "New fog at "; // 0x71 PushS
	var_43_int = var_42_string + var_39_cvector; // 0x72 Add
	Trace(var_43_int); // 0x73 Func
	var_44_string = "fog"; // 0x75 PushS
	var_45_object = Obj(); // 0x76 PushV
	func_160(var_45_object); // 0x77 NEW_2
	var_46_cvector = CVector(0.0, 0.0, 1.0); // 0x79 PushVec
	var_47_string = "horror_fog.xml"; // 0x7a PushS
	AddActorByType(var_41_object, var_44_string, var_45_object, var_39_cvector, var_46_cvector, var_47_string); // 0x7b Func
	return 2; // 0x7d Return
}


func_145(var_21_cvector, var_22_cvector)
{
	var_23_object = Obj(); var_24_object = Obj(); // 0x91 PushV
	var_25_bool = 0; var_26_float = 0; // 0x92 PushV
	var_26_float = 0.5; // 0x93 MovF
	func_166(var_25_bool, var_26_float); // 0x94 NEW_2
	if(var_25_bool == 0) goto Label_159; // 0x96 JumpB
	var_29_string = "fog"; // 0x97 PushS
	var_30_object = Obj(); // 0x98 PushV
	func_160(var_30_object); // 0x99 NEW_2
	var_33_string = "fog_stat.xml"; // 0x9b PushS
	AddActorByType(var_24_object, var_29_string, var_30_object, var_21_cvector, var_22_cvector, var_33_string); // 0x9c Func
	var_24_object = 0; // 0x9e SetNull
	
Label_159:
	return 2; // 0x9f Return
}


func_84()
{
	var_6_bool = 0; var_7_cvector = CVector(0,0,0); var_8_bool = 0; var_9_cvector = CVector(0,0,0); // 0x54 PushV
	func_127(); // 0x56 NEW_2
	var_35_int = 3; // 0x58 PushI
	Sleep(var_35_int, var_8_bool); // 0x59 Func
	var_36_bool = var_8_bool; // 0x5b Push
	if(var_36_bool == 0) goto Label_108; // 0x5c JumpB
	
Label_93:
	var_37_int = 0; // 0x5d PushI
	var_38_int = 0; // 0x5e PushI
	GetRandomPFPoint(var_9_cvector, var_37_int, var_38_int); // 0x5f Func
	var_39_cvector = CVector(0,0,0); // 0x61 PushV
	var_39_cvector = var_9_cvector; // 0x62 Mov
	func_112(var_39_cvector); // 0x63 NEW_2
	var_48_int = 30; // 0x65 PushI
	Sleep(var_48_int, var_8_bool); // 0x66 Func
	var_49_bool = var_8_bool == 0; // 0x68 Not
	if(var_49_bool == 0) goto Label_107; // 0x69 JumpB
	goto Label_108; // 0x6a Jump
	
Label_108:
	return 4; // 0x6c Return
	
Label_107:
	goto Label_93; // 0x6b Jump
}


func_56(var_14_string, var_15_string, var_16_cvector, var_17_cvector)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x38 PushV
	var_20_bool = 0; var_21_float = 0; // 0x39 PushV
	var_21_float = 0.5; // 0x3a MovF
	func_166(var_20_bool, var_21_float); // 0x3b NEW_2
	if(var_20_bool == 0) goto Label_74; // 0x3d JumpB
	var_24_string = "pers_"; // 0x3e PushS
	var_25_int = var_24_string + var_14_string; // 0x3f Add
	var_26_object = Obj(); // 0x40 PushV
	func_160(var_26_object); // 0x41 NEW_2
	var_29_string = "agony1_"; // 0x43 PushS
	var_30_int = var_29_string + var_15_string; // 0x44 Add
	var_31_string = ".xml"; // 0x45 PushS
	var_32_int = var_30_int + var_31_string; // 0x46 Add
	AddActor(var_19_object, var_25_int, var_26_object, var_16_cvector, var_17_cvector, var_32_int); // 0x47 Func
	var_19_object = 0; // 0x49 SetNull
	
Label_74:
	return 2; // 0x4a Return
}


func_29()
{
	TaskCall(1); // 0x1e TaskCall
	func_84(); // 0x1f NEW_2
	TaskReturn(); // 0x20 TaskReturn
	return 0; // 0x22 Return
}


func_127()
{
	var_10_int = 0; var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_int = 0; var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); // 0x7f PushV
	var_14_int = 1; // 0x80 MovI
	
Label_129:
	var_18_string = "pt_fog"; // 0x81 PushS
	var_19_int = var_18_string + var_14_int; // 0x82 Add
	GetLocator(var_19_int, var_15_bool, var_16_cvector, var_17_cvector); // 0x83 Func
	var_20_bool = var_15_bool == 0; // 0x85 Not
	if(var_20_bool == 0) goto Label_136; // 0x86 JumpB
	goto Label_144; // 0x87 Jump
	
Label_144:
	return 8; // 0x90 Return
	
Label_136:
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); // 0x88 PushV
	var_21_cvector = var_16_cvector; // 0x89 Mov
	var_22_cvector = var_17_cvector; // 0x8a Mov
	func_145(var_21_cvector, var_22_cvector); // 0x8b NEW_2
	var_34_int = 1; // 0x8d PushI
	var_14_int = var_14_int + var_34_int; // 0x8e Add2
	goto Label_129; // 0x8f Jump
}


