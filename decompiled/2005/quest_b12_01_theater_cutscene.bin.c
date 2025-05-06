task_0_event_24(var_0_int)
{
	CameraSwitchToNormal(); // 0x42 Func
	return 0; // 0x44 Return
}


main()
{
	func_14(); // 0x1 NEW_2
	var_46_bool = 0; var_47_string = ""; var_48_string = ""; // 0x3 PushV
	var_47_string = "quest_b12_01"; // 0x4 MovS
	var_48_string = "theater_cutscene_end"; // 0x5 MovS
	func_118(var_46_bool, var_47_string, var_48_string); // 0x6 NEW_2
	var_52_object = Obj(); // 0x8 PushV
	func_112(var_52_object); // 0x9 NEW_2
	RemoveActor(var_52_object); // 0xb Func
	return 0; // 0xd Return
}


func_130()
{
	var_16_float = 0.5; // 0x82 PushF
	var_17_float = 0.886; // 0x83 PushF
	SetSepia(var_16_float, var_17_float); // 0x84 Func
	return 0; // 0x86 Return
}


func_69(var_18_object)
{
	var_19_bool = 0; var_20_int = 0; var_21_bool = 0; var_22_int = 0; // 0x45 PushV
	var_23_bool = var_18_object == 0; // 0x46 Not
	if(var_23_bool == 0) goto Label_73; // 0x47 JumpB
	return 4; // 0x48 Return
	
Label_73:
	var_24_string = "noaccess"; // 0x49 PushS
	HasProperty(var_24_string, var_21_bool); // 0x4a ObjFunc
	var_25_bool = var_21_bool; // 0x4c Push
	if(var_25_bool == 0) goto Label_87; // 0x4d JumpB
	var_26_string = "noaccess"; // 0x4e PushS
	GetProperty(var_26_string, var_22_int); // 0x4f ObjFunc
	var_27_string = "noaccess"; // 0x51 PushS
	var_28_int = 1; // 0x52 PushI
	var_29_int = var_22_int + var_28_int; // 0x53 Add
	SetProperty(var_27_string, var_29_int); // 0x54 ObjFunc
	goto Label_91; // 0x56 Jump
	
Label_91:
	return 4; // 0x5b Return
	
Label_87:
	var_30_string = "noaccess"; // 0x57 PushS
	var_31_int = 1; // 0x58 PushI
	SetProperty(var_30_string, var_31_int); // 0x59 ObjFunc
}


func_135()
{
	var_44_int = 0; // 0x87 PushI
	var_45_int = 0; // 0x88 PushI
	SetSepia(var_44_int, var_45_int); // 0x89 Func
	return 0; // 0x8b Return
}


func_14()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_object = Obj(); var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj(); // 0xe PushV
	var_8_string = "theater"; // 0xf PushS
	GetSceneByName(var_4_object, var_8_string); // 0x10 Func
	var_9_string = "cs_d12_theater_birdmask"; // 0x12 PushS
	var_10_string = "cs_play_all.bin"; // 0x13 PushS
	var_11_cvector = CVector(0.0, 0.0, 0.0); // 0x14 PushVec
	AddScriptedActor(var_5_object, var_9_string, var_10_string, var_4_object, var_11_cvector); // 0x15 Func
	var_12_string = "cs_d12_theater_whitemask"; // 0x17 PushS
	var_13_string = "cs_play_all.bin"; // 0x18 PushS
	var_14_cvector = CVector(0.0, 0.0, 0.0); // 0x19 PushVec
	AddScriptedActor(var_6_object, var_12_string, var_13_string, var_4_object, var_14_cvector); // 0x1a Func
	ForceGeometryLoad(); // 0x1c ObjFunc
	ForceGeometryLoad(); // 0x1e ObjFunc
	var_15_string = "player"; // 0x20 PushS
	FindActor(var_7_object, var_15_string); // 0x21 Func
	func_130(); // 0x24 NEW_2
	var_18_object = Obj(); // 0x26 PushV
	var_18_object = var_7_object; // 0x27 Mov
	func_69(var_18_object); // 0x28 NEW_2
	var_32_string = "cs_d12_theater.mot"; // 0x2a PushS
	CameraPlay(var_32_string); // 0x2b Func
	CameraWaitForPlayFinish(); // 0x2d Func
	var_33_object = Obj(); // 0x2f PushV
	var_33_object = var_7_object; // 0x30 Mov
	func_92(var_33_object); // 0x31 NEW_2
	func_135(); // 0x34 NEW_2
	RemoveActor(var_5_object); // 0x36 Func
	RemoveActor(var_6_object); // 0x38 Func
	CameraSwitchToNormal(); // 0x3a Func
	return 8; // 0x3c Return
}


func_112(var_52_object)
{
	var_53_object = Obj(); var_54_object = Obj(); // 0x70 PushV
	self(var_54_object); // 0x71 Func
	var_52_object = var_54_object; // 0x73 Mov
	return 2; // 0x74 Return
}


func_118(var_46_bool, var_47_string, var_48_string)
{
	var_49_object = Obj(); var_50_object = Obj(); // 0x76 PushV
	FindActor(var_50_object, var_47_string); // 0x77 Func
	var_51_bool = var_50_object == 0; // 0x79 NullEq
	if(var_51_bool == 0) goto Label_125; // 0x7a JumpB
	var_46_bool = 0; // 0x7b MovB
	return 2; // 0x7c Return
	
Label_125:
	Trigger(var_50_object, var_48_string); // 0x7d Func
	var_46_bool = 1; // 0x7f MovB
	return 2; // 0x80 Return
}


func_92(var_33_object)
{
	var_34_int = 0; var_35_int = 0; // 0x5c PushV
	var_36_bool = var_33_object == 0; // 0x5d Not
	if(var_36_bool == 0) goto Label_96; // 0x5e JumpB
	return 2; // 0x5f Return
	
Label_96:
	var_37_string = "noaccess"; // 0x60 PushS
	GetProperty(var_37_string, var_35_int); // 0x61 ObjFunc
	var_38_int = 1; // 0x63 PushI
	var_39_bool = var_35_int > var_38_int; // 0x64 GT
	if(var_39_bool == 0) goto Label_108; // 0x65 JumpB
	var_40_string = "noaccess"; // 0x66 PushS
	var_41_int = 1; // 0x67 PushI
	var_42_int = var_35_int - var_41_int; // 0x68 Sub
	SetProperty(var_40_string, var_42_int); // 0x69 ObjFunc
	goto Label_111; // 0x6b Jump
	
Label_111:
	return 2; // 0x6f Return
	
Label_108:
	var_43_string = "noaccess"; // 0x6c PushS
	RemoveProperty(var_43_string); // 0x6d ObjFunc
}


