task_0_event_5()
{
	var_0_bool = 0; var_1_string = ""; var_2_string = ""; // 0x0 PushV
	var_1_string = "quest_b4_02"; // 0x1 MovS
	var_2_string = "house_load"; // 0x2 MovS
	func_156(var_0_bool, var_1_string, var_2_string); // 0x3 NEW_2
	func_23(); // 0x6 NEW_2
	return 0; // 0x8 Return
}


task_1_event_6()
{
	StopGroup0(); // 0x5e Func
	return 0; // 0x60 Return
}


main()
{
	var_0_string = ""; var_1_string = ""; // 0x9 PushV
	var_0_string = "woman"; // 0xa MovS
	var_1_string = "woman"; // 0xb MovS
	func_29(var_0_string, var_1_string); // 0xc NEW_2
	var_34_string = ""; var_35_string = ""; // 0xe PushV
	var_34_string = "worker"; // 0xf MovS
	var_35_string = "man"; // 0x10 MovS
	func_29(var_34_string, var_35_string); // 0x11 NEW_2
	
Label_19:
	Hold(); // 0x13 Func
	goto Label_19; // 0x15 Jump
}


func_97(var_39_cvector)
{
	var_40_object = Obj(); var_41_object = Obj(); // 0x61 PushV
	var_42_string = "New fog at "; // 0x62 PushS
	var_43_int = var_42_string + var_39_cvector; // 0x63 Add
	Trace(var_43_int); // 0x64 Func
	var_44_string = "fog"; // 0x66 PushS
	var_45_object = Obj(); // 0x67 PushV
	func_145(var_45_object); // 0x68 NEW_2
	var_46_cvector = CVector(0.0, 0.0, 1.0); // 0x6a PushVec
	var_47_string = "horror_fog.xml"; // 0x6b PushS
	AddActorByType(var_41_object, var_44_string, var_45_object, var_39_cvector, var_46_cvector, var_47_string); // 0x6c Func
	return 2; // 0x6e Return
}


func_130(var_21_cvector, var_22_cvector)
{
	var_23_object = Obj(); var_24_object = Obj(); // 0x82 PushV
	var_25_bool = 0; var_26_float = 0; // 0x83 PushV
	var_26_float = 0.5; // 0x84 MovF
	func_151(var_25_bool, var_26_float); // 0x85 NEW_2
	if(var_25_bool == 0) goto Label_144; // 0x87 JumpB
	var_29_string = "fog"; // 0x88 PushS
	var_30_object = Obj(); // 0x89 PushV
	func_145(var_30_object); // 0x8a NEW_2
	var_33_string = "fog_stat.xml"; // 0x8c PushS
	AddActorByType(var_24_object, var_29_string, var_30_object, var_21_cvector, var_22_cvector, var_33_string); // 0x8d Func
	var_24_object = 0; // 0x8f SetNull
	
Label_144:
	return 2; // 0x90 Return
}


func_69()
{
	var_6_bool = 0; var_7_cvector = CVector(0,0,0); var_8_bool = 0; var_9_cvector = CVector(0,0,0); // 0x45 PushV
	func_112(); // 0x47 NEW_2
	var_35_int = 3; // 0x49 PushI
	Sleep(var_35_int, var_8_bool); // 0x4a Func
	var_36_bool = var_8_bool; // 0x4c Push
	if(var_36_bool == 0) goto Label_93; // 0x4d JumpB
	
Label_78:
	var_37_int = 0; // 0x4e PushI
	var_38_int = 0; // 0x4f PushI
	GetRandomPFPoint(var_9_cvector, var_37_int, var_38_int); // 0x50 Func
	var_39_cvector = CVector(0,0,0); // 0x52 PushV
	var_39_cvector = var_9_cvector; // 0x53 Mov
	func_97(var_39_cvector); // 0x54 NEW_2
	var_48_int = 30; // 0x56 PushI
	Sleep(var_48_int, var_8_bool); // 0x57 Func
	var_49_bool = var_8_bool == 0; // 0x59 Not
	if(var_49_bool == 0) goto Label_92; // 0x5a JumpB
	goto Label_93; // 0x5b Jump
	
Label_93:
	return 4; // 0x5d Return
	
Label_92:
	goto Label_78; // 0x5c Jump
}


func_112()
{
	var_10_int = 0; var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_int = 0; var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); // 0x70 PushV
	var_14_int = 1; // 0x71 MovI
	
Label_114:
	var_18_string = "pt_fog"; // 0x72 PushS
	var_19_int = var_18_string + var_14_int; // 0x73 Add
	GetLocator(var_19_int, var_15_bool, var_16_cvector, var_17_cvector); // 0x74 Func
	var_20_bool = var_15_bool == 0; // 0x76 Not
	if(var_20_bool == 0) goto Label_121; // 0x77 JumpB
	goto Label_129; // 0x78 Jump
	
Label_129:
	return 8; // 0x81 Return
	
Label_121:
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); // 0x79 PushV
	var_21_cvector = var_16_cvector; // 0x7a Mov
	var_22_cvector = var_17_cvector; // 0x7b Mov
	func_130(var_21_cvector, var_22_cvector); // 0x7c NEW_2
	var_34_int = 1; // 0x7e PushI
	var_14_int = var_14_int + var_34_int; // 0x7f Add2
	goto Label_114; // 0x80 Jump
}


func_145(var_26_object)
{
	var_27_object = Obj(); var_28_object = Obj(); // 0x91 PushV
	self(var_28_object); // 0x92 Func
	var_26_object = var_28_object; // 0x94 Mov
	return 2; // 0x95 Return
}


func_50(var_14_string, var_15_string, var_16_cvector, var_17_cvector)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x32 PushV
	var_20_bool = 0; var_21_float = 0; // 0x33 PushV
	var_21_float = 0.5; // 0x34 MovF
	func_151(var_20_bool, var_21_float); // 0x35 NEW_2
	if(var_20_bool == 0) goto Label_68; // 0x37 JumpB
	var_24_string = "pers_"; // 0x38 PushS
	var_25_int = var_24_string + var_14_string; // 0x39 Add
	var_26_object = Obj(); // 0x3a PushV
	func_145(var_26_object); // 0x3b NEW_2
	var_29_string = "agony1_"; // 0x3d PushS
	var_30_int = var_29_string + var_15_string; // 0x3e Add
	var_31_string = ".xml"; // 0x3f PushS
	var_32_int = var_30_int + var_31_string; // 0x40 Add
	AddActor(var_19_object, var_25_int, var_26_object, var_16_cvector, var_17_cvector, var_32_int); // 0x41 Func
	var_19_object = 0; // 0x43 SetNull
	
Label_68:
	return 2; // 0x44 Return
}


func_23()
{
	TaskCall(1); // 0x18 TaskCall
	func_69(); // 0x19 NEW_2
	TaskReturn(); // 0x1a TaskReturn
	return 0; // 0x1c Return
}


func_151(var_20_bool, var_21_float)
{
	var_22_float = 0; var_23_float = 0; // 0x97 PushV
	rand(var_23_float); // 0x98 Func
	var_20_bool = var_23_float < var_21_float; // 0x9a LT2
	return 2; // 0x9b Return
}


func_156(var_0_bool, var_1_string, var_2_string)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0x9c PushV
	FindActor(var_4_object, var_1_string); // 0x9d Func
	var_5_bool = var_4_object == 0; // 0x9f NullEq
	if(var_5_bool == 0) goto Label_163; // 0xa0 JumpB
	var_0_bool = 0; // 0xa1 MovB
	return 2; // 0xa2 Return
	
Label_163:
	Trigger(var_4_object, var_2_string); // 0xa3 Func
	var_0_bool = 1; // 0xa5 MovB
	return 2; // 0xa6 Return
}


func_29(var_0_string, var_1_string)
{
	var_2_int = 0; var_3_bool = 0; var_4_cvector = CVector(0,0,0); var_5_cvector = CVector(0,0,0); var_6_int = 0; var_7_bool = 0; var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0); // 0x1d PushV
	var_6_int = 1; // 0x1e MovI
	
Label_31:
	var_10_string = "pt_agony_"; // 0x1f PushS
	var_11_int = var_10_string + var_0_string; // 0x20 Add
	var_12_int = var_11_int + var_6_int; // 0x21 Add
	GetLocator(var_12_int, var_7_bool, var_8_cvector, var_9_cvector); // 0x22 Func
	var_13_bool = var_7_bool == 0; // 0x24 Not
	if(var_13_bool == 0) goto Label_39; // 0x25 JumpB
	goto Label_49; // 0x26 Jump
	
Label_49:
	return 8; // 0x31 Return
	
Label_39:
	var_14_string = ""; var_15_string = ""; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); // 0x27 PushV
	var_14_string = var_0_string; // 0x28 Mov
	var_15_string = var_1_string; // 0x29 Mov
	var_16_cvector = var_8_cvector; // 0x2a Mov
	var_17_cvector = var_9_cvector; // 0x2b Mov
	func_50(var_14_string, var_15_string, var_16_cvector, var_17_cvector); // 0x2c NEW_2
	var_33_int = 1; // 0x2e PushI
	var_6_int = var_6_int + var_33_int; // 0x2f Add2
	goto Label_31; // 0x30 Jump
}


