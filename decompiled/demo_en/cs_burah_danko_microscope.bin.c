task_0_event_24(var_0_int)
{
	CameraSwitchToNormal(); // 0x4e Func
	return 0; // 0x50 Return
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_object = Obj(); var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj(); // 0x0 PushV
	var_6_string = "cot_eva"; // 0x1 PushS
	GetSceneByName(var_3_object, var_6_string); // 0x2 Func
	var_7_string = "cs_burah_danko_microscope"; // 0x4 PushS
	var_8_cvector = CVector(0.0, 0.0, 0.0); // 0x5 PushVec
	var_9_cvector = CVector(0.0, 0.0, 1.0); // 0x6 PushVec
	var_10_string = "cs_burah_danko_microscope.xml"; // 0x7 PushS
	AddActor(var_4_object, var_7_string, var_3_object, var_8_cvector, var_9_cvector, var_10_string); // 0x8 Func
	var_11_object = Obj(); // 0xa PushV
	func_81(var_11_object); // 0xb NEW_2
	var_5_object = var_11_object; // 0xc Mov
	func_149(); // 0xf NEW_2
	var_17_object = Obj(); // 0x11 PushV
	var_17_object = var_5_object; // 0x12 Mov
	func_88(var_17_object); // 0x13 NEW_2
	var_31_string = "space"; // 0x15 PushS
	RegisterKeyCallback(var_31_string); // 0x16 Func
	var_32_string = "cs_burah_danko_microscope.mot"; // 0x18 PushS
	CameraPlay(var_32_string); // 0x19 Func
	CameraWaitForPlayFinish(); // 0x1b Func
	var_33_string = "space"; // 0x1d PushS
	UnregisterKeyCallback(var_33_string); // 0x1e Func
	var_34_object = Obj(); // 0x20 PushV
	var_34_object = var_5_object; // 0x21 Mov
	func_111(var_34_object); // 0x22 NEW_2
	func_154(); // 0x25 NEW_2
	RemoveActor(var_4_object); // 0x27 Func
	CameraSwitchToNormal(); // 0x29 Func
	var_47_bool = 0; var_48_string = ""; var_49_string = ""; // 0x2b PushV
	var_48_string = "quest_b2_01"; // 0x2c MovS
	var_49_string = "cutscene_end"; // 0x2d MovS
	func_137(var_47_bool, var_48_string, var_49_string); // 0x2e NEW_2
	var_53_bool = 0; var_54_string = ""; var_55_string = ""; // 0x30 PushV
	var_54_string = "quest_b3_01"; // 0x31 MovS
	var_55_string = "cutscene_end"; // 0x32 MovS
	func_137(var_53_bool, var_54_string, var_55_string); // 0x33 NEW_2
	var_56_bool = 0; var_57_string = ""; var_58_string = ""; // 0x35 PushV
	var_57_string = "quest_b4_01"; // 0x36 MovS
	var_58_string = "cutscene_end"; // 0x37 MovS
	func_137(var_56_bool, var_57_string, var_58_string); // 0x38 NEW_2
	var_59_bool = 0; var_60_string = ""; var_61_string = ""; // 0x3a PushV
	var_60_string = "quest_b5_01"; // 0x3b MovS
	var_61_string = "cutscene_end"; // 0x3c MovS
	func_137(var_59_bool, var_60_string, var_61_string); // 0x3d NEW_2
	var_62_bool = 0; var_63_string = ""; var_64_string = ""; // 0x3f PushV
	var_63_string = "quest_b6_01"; // 0x40 MovS
	var_64_string = "cutscene_end"; // 0x41 MovS
	func_137(var_62_bool, var_63_string, var_64_string); // 0x42 NEW_2
	var_65_object = Obj(); // 0x44 PushV
	func_131(var_65_object); // 0x45 NEW_2
	RemoveActor(var_65_object); // 0x47 Func
	return 6; // 0x49 Return
}


func_131(var_65_object)
{
	var_66_object = Obj(); var_67_object = Obj(); // 0x83 PushV
	self(var_67_object); // 0x84 Func
	var_65_object = var_67_object; // 0x86 Mov
	return 2; // 0x87 Return
}


func_137(var_47_bool, var_48_string, var_49_string)
{
	var_50_object = Obj(); var_51_object = Obj(); // 0x89 PushV
	FindActor(var_51_object, var_48_string); // 0x8a Func
	var_52_bool = var_51_object == 0; // 0x8c NullEq
	if(var_52_bool == 0) goto Label_144; // 0x8d JumpB
	var_47_bool = 0; // 0x8e MovB
	return 2; // 0x8f Return
	
Label_144:
	Trigger(var_51_object, var_49_string); // 0x90 Func
	var_47_bool = 1; // 0x92 MovB
	return 2; // 0x93 Return
}


func_111(var_34_object)
{
	var_35_int = 0; var_36_int = 0; // 0x6f PushV
	var_37_bool = var_34_object == 0; // 0x70 Not
	if(var_37_bool == 0) goto Label_115; // 0x71 JumpB
	return 2; // 0x72 Return
	
Label_115:
	var_38_string = "noaccess"; // 0x73 PushS
	GetProperty(var_38_string, var_36_int); // 0x74 ObjFunc
	var_39_int = 1; // 0x76 PushI
	var_40_bool = var_36_int > var_39_int; // 0x77 GT
	if(var_40_bool == 0) goto Label_127; // 0x78 JumpB
	var_41_string = "noaccess"; // 0x79 PushS
	var_42_int = 1; // 0x7a PushI
	var_43_int = var_36_int - var_42_int; // 0x7b Sub
	SetProperty(var_41_string, var_43_int); // 0x7c ObjFunc
	goto Label_130; // 0x7e Jump
	
Label_130:
	return 2; // 0x82 Return
	
Label_127:
	var_44_string = "noaccess"; // 0x7f PushS
	RemoveProperty(var_44_string); // 0x80 ObjFunc
}


func_81(var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj(); // 0x51 PushV
	var_14_string = "player"; // 0x52 PushS
	FindActor(var_13_object, var_14_string); // 0x53 Func
	var_11_object = var_13_object; // 0x55 Mov
	return 2; // 0x56 Return
}


func_149()
{
	var_15_float = 0.5; // 0x95 PushF
	var_16_float = 0.886; // 0x96 PushF
	SetSepia(var_15_float, var_16_float); // 0x97 Func
	return 0; // 0x99 Return
}


func_88(var_17_object)
{
	var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_int = 0; // 0x58 PushV
	var_22_bool = var_17_object == 0; // 0x59 Not
	if(var_22_bool == 0) goto Label_92; // 0x5a JumpB
	return 4; // 0x5b Return
	
Label_92:
	var_23_string = "noaccess"; // 0x5c PushS
	HasProperty(var_23_string, var_20_bool); // 0x5d ObjFunc
	var_24_bool = var_20_bool; // 0x5f Push
	if(var_24_bool == 0) goto Label_106; // 0x60 JumpB
	var_25_string = "noaccess"; // 0x61 PushS
	GetProperty(var_25_string, var_21_int); // 0x62 ObjFunc
	var_26_string = "noaccess"; // 0x64 PushS
	var_27_int = 1; // 0x65 PushI
	var_28_int = var_21_int + var_27_int; // 0x66 Add
	SetProperty(var_26_string, var_28_int); // 0x67 ObjFunc
	goto Label_110; // 0x69 Jump
	
Label_110:
	return 4; // 0x6e Return
	
Label_106:
	var_29_string = "noaccess"; // 0x6a PushS
	var_30_int = 1; // 0x6b PushI
	SetProperty(var_29_string, var_30_int); // 0x6c ObjFunc
}


func_154()
{
	var_45_int = 0; // 0x9a PushI
	var_46_int = 0; // 0x9b PushI
	SetSepia(var_45_int, var_46_int); // 0x9c Func
	return 0; // 0x9e Return
}


