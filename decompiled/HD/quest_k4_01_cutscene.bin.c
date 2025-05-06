task_0_event_24(var_0_int)
{
	CameraSwitchToNormal(); // 0x3a Func
	return 0; // 0x3c Return
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_object = Obj(); var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj(); // 0x0 PushV
	var_6_string = "warehouse_gangster"; // 0x1 PushS
	GetSceneByName(var_3_object, var_6_string); // 0x2 Func
	var_7_string = "cs_k4q01_grabitel"; // 0x4 PushS
	var_8_string = "cs_play_all.bin"; // 0x5 PushS
	var_9_cvector = CVector(0.0, 0.0, 0.0); // 0x6 PushVec
	AddScriptedActor(var_4_object, var_7_string, var_8_string, var_3_object, var_9_cvector); // 0x7 Func
	ForceGeometryLoad(); // 0x9 ObjFunc
	var_10_string = "player"; // 0xb PushS
	FindActor(var_5_object, var_10_string); // 0xc Func
	func_122(); // 0xf NEW_2
	var_13_object = Obj(); // 0x11 PushV
	var_13_object = var_5_object; // 0x12 Mov
	func_61(var_13_object); // 0x13 NEW_2
	var_27_string = "space"; // 0x15 PushS
	RegisterKeyCallback(var_27_string); // 0x16 Func
	var_28_string = "cs_k4q01_camera.mot"; // 0x18 PushS
	CameraPlay(var_28_string); // 0x19 Func
	CameraWaitForPlayFinish(); // 0x1b Func
	var_29_string = "space"; // 0x1d PushS
	UnregisterKeyCallback(var_29_string); // 0x1e Func
	var_30_object = Obj(); // 0x20 PushV
	var_30_object = var_5_object; // 0x21 Mov
	func_84(var_30_object); // 0x22 NEW_2
	func_127(); // 0x25 NEW_2
	RemoveActor(var_4_object); // 0x27 Func
	CameraSwitchToNormal(); // 0x29 Func
	var_43_bool = 0; var_44_string = ""; var_45_string = ""; // 0x2b PushV
	var_44_string = "quest_k4_01"; // 0x2c MovS
	var_45_string = "cutscene_end"; // 0x2d MovS
	func_110(var_43_bool, var_44_string, var_45_string); // 0x2e NEW_2
	var_49_object = Obj(); // 0x30 PushV
	func_104(var_49_object); // 0x31 NEW_2
	RemoveActor(var_49_object); // 0x33 Func
	return 6; // 0x35 Return
}


func_104(var_49_object)
{
	var_50_object = Obj(); var_51_object = Obj(); // 0x68 PushV
	self(var_51_object); // 0x69 Func
	var_49_object = var_51_object; // 0x6b Mov
	return 2; // 0x6c Return
}


func_110(var_43_bool, var_44_string, var_45_string)
{
	var_46_object = Obj(); var_47_object = Obj(); // 0x6e PushV
	FindActor(var_47_object, var_44_string); // 0x6f Func
	var_48_bool = var_47_object == 0; // 0x71 NullEq
	if(var_48_bool == 0) goto Label_117; // 0x72 JumpB
	var_43_bool = 0; // 0x73 MovB
	return 2; // 0x74 Return
	
Label_117:
	Trigger(var_47_object, var_45_string); // 0x75 Func
	var_43_bool = 1; // 0x77 MovB
	return 2; // 0x78 Return
}


func_84(var_30_object)
{
	var_31_int = 0; var_32_int = 0; // 0x54 PushV
	var_33_bool = var_30_object == 0; // 0x55 Not
	if(var_33_bool == 0) goto Label_88; // 0x56 JumpB
	return 2; // 0x57 Return
	
Label_88:
	var_34_string = "noaccess"; // 0x58 PushS
	GetProperty(var_34_string, var_32_int); // 0x59 ObjFunc
	var_35_int = 1; // 0x5b PushI
	var_36_bool = var_32_int > var_35_int; // 0x5c GT
	if(var_36_bool == 0) goto Label_100; // 0x5d JumpB
	var_37_string = "noaccess"; // 0x5e PushS
	var_38_int = 1; // 0x5f PushI
	var_39_int = var_32_int - var_38_int; // 0x60 Sub
	SetProperty(var_37_string, var_39_int); // 0x61 ObjFunc
	goto Label_103; // 0x63 Jump
	
Label_103:
	return 2; // 0x67 Return
	
Label_100:
	var_40_string = "noaccess"; // 0x64 PushS
	RemoveProperty(var_40_string); // 0x65 ObjFunc
}


func_122()
{
	var_11_float = 0.5; // 0x7a PushF
	var_12_float = 0.886; // 0x7b PushF
	SetSepia(var_11_float, var_12_float); // 0x7c Func
	return 0; // 0x7e Return
}


func_61(var_13_object)
{
	var_14_bool = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; // 0x3d PushV
	var_18_bool = var_13_object == 0; // 0x3e Not
	if(var_18_bool == 0) goto Label_65; // 0x3f JumpB
	return 4; // 0x40 Return
	
Label_65:
	var_19_string = "noaccess"; // 0x41 PushS
	HasProperty(var_19_string, var_16_bool); // 0x42 ObjFunc
	var_20_bool = var_16_bool; // 0x44 Push
	if(var_20_bool == 0) goto Label_79; // 0x45 JumpB
	var_21_string = "noaccess"; // 0x46 PushS
	GetProperty(var_21_string, var_17_int); // 0x47 ObjFunc
	var_22_string = "noaccess"; // 0x49 PushS
	var_23_int = 1; // 0x4a PushI
	var_24_int = var_17_int + var_23_int; // 0x4b Add
	SetProperty(var_22_string, var_24_int); // 0x4c ObjFunc
	goto Label_83; // 0x4e Jump
	
Label_83:
	return 4; // 0x53 Return
	
Label_79:
	var_25_string = "noaccess"; // 0x4f PushS
	var_26_int = 1; // 0x50 PushI
	SetProperty(var_25_string, var_26_int); // 0x51 ObjFunc
}


func_127()
{
	var_41_int = 0; // 0x7f PushI
	var_42_int = 0; // 0x80 PushI
	SetSepia(var_41_int, var_42_int); // 0x81 Func
	return 0; // 0x83 Return
}


