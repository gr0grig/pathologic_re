task_0_event_24(var_0_int)
{
	CameraSwitchToNormal(); // 0x63 Func
	return 0; // 0x65 Return
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_object = Obj(); var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj(); var_10_object = Obj(); var_11_object = Obj(); var_12_object = Obj(); var_13_object = Obj(); // 0x0 PushV
	var_14_string = "uprava_prison"; // 0x1 PushS
	GetSceneByName(var_7_object, var_14_string); // 0x2 Func
	var_15_string = "cs_uprava_prisoner1"; // 0x4 PushS
	var_16_string = "cs_play_all.bin"; // 0x5 PushS
	var_17_cvector = CVector(0.0, 0.0, 0.0); // 0x6 PushVec
	AddScriptedActor(var_8_object, var_15_string, var_16_string, var_7_object, var_17_cvector); // 0x7 Func
	var_18_string = "cs_uprava_prisoner2"; // 0x9 PushS
	var_19_string = "cs_play_all.bin"; // 0xa PushS
	var_20_cvector = CVector(0.0, 0.0, 0.0); // 0xb PushVec
	AddScriptedActor(var_9_object, var_18_string, var_19_string, var_7_object, var_20_cvector); // 0xc Func
	var_21_string = "cs_uprava_prisoner3"; // 0xe PushS
	var_22_string = "cs_play_all.bin"; // 0xf PushS
	var_23_cvector = CVector(0.0, 0.0, 0.0); // 0x10 PushVec
	AddScriptedActor(var_10_object, var_21_string, var_22_string, var_7_object, var_23_cvector); // 0x11 Func
	var_24_string = "cs_uprava_prisoner4"; // 0x13 PushS
	var_25_string = "cs_play_all.bin"; // 0x14 PushS
	var_26_cvector = CVector(0.0, 0.0, 0.0); // 0x15 PushVec
	AddScriptedActor(var_11_object, var_24_string, var_25_string, var_7_object, var_26_cvector); // 0x16 Func
	var_27_string = "cs_uprava_prisoner5"; // 0x18 PushS
	var_28_string = "cs_play_all.bin"; // 0x19 PushS
	var_29_cvector = CVector(0.0, 0.0, 0.0); // 0x1a PushVec
	AddScriptedActor(var_12_object, var_27_string, var_28_string, var_7_object, var_29_cvector); // 0x1b Func
	ForceGeometryLoad(); // 0x1d ObjFunc
	ForceGeometryLoad(); // 0x1f ObjFunc
	ForceGeometryLoad(); // 0x21 ObjFunc
	ForceGeometryLoad(); // 0x23 ObjFunc
	ForceGeometryLoad(); // 0x25 ObjFunc
	var_30_string = "player"; // 0x27 PushS
	FindActor(var_13_object, var_30_string); // 0x28 Func
	func_151(); // 0x2b NEW_2
	var_33_object = Obj(); // 0x2d PushV
	var_33_object = var_13_object; // 0x2e Mov
	func_102(var_33_object); // 0x2f NEW_2
	var_47_string = "space"; // 0x31 PushS
	RegisterKeyCallback(var_47_string); // 0x32 Func
	var_48_string = "cs_uprava_prison1.mot"; // 0x34 PushS
	CameraPlay(var_48_string); // 0x35 Func
	var_49_string = "cs_d5_uprava.ogg"; // 0x37 PushS
	PlayGlobalMusic(var_49_string); // 0x38 Func
	CameraWaitForPlayFinish(); // 0x3a Func
	var_50_string = ""; // 0x3c PushS
	PlayGlobalMusic(var_50_string); // 0x3d Func
	var_51_string = "space"; // 0x3f PushS
	UnregisterKeyCallback(var_51_string); // 0x40 Func
	var_52_object = Obj(); // 0x42 PushV
	var_52_object = var_13_object; // 0x43 Mov
	func_125(var_52_object); // 0x44 NEW_2
	func_156(); // 0x47 NEW_2
	RemoveActor(var_8_object); // 0x49 Func
	RemoveActor(var_9_object); // 0x4b Func
	RemoveActor(var_10_object); // 0x4d Func
	RemoveActor(var_11_object); // 0x4f Func
	RemoveActor(var_12_object); // 0x51 Func
	CameraSwitchToNormal(); // 0x53 Func
	var_65_object = Obj(); // 0x55 PushV
	func_145(var_65_object); // 0x56 NEW_2
	RemoveActor(var_65_object); // 0x58 Func
	return 14; // 0x5a Return
}


func_102(var_33_object)
{
	var_34_bool = 0; var_35_int = 0; var_36_bool = 0; var_37_int = 0; // 0x66 PushV
	var_38_bool = var_33_object == 0; // 0x67 Not
	if(var_38_bool == 0) goto Label_106; // 0x68 JumpB
	return 4; // 0x69 Return
	
Label_106:
	var_39_string = "noaccess"; // 0x6a PushS
	HasProperty(var_39_string, var_36_bool); // 0x6b ObjFunc
	var_40_bool = var_36_bool; // 0x6d Push
	if(var_40_bool == 0) goto Label_120; // 0x6e JumpB
	var_41_string = "noaccess"; // 0x6f PushS
	GetProperty(var_41_string, var_37_int); // 0x70 ObjFunc
	var_42_string = "noaccess"; // 0x72 PushS
	var_43_int = 1; // 0x73 PushI
	var_44_int = var_37_int + var_43_int; // 0x74 Add
	SetProperty(var_42_string, var_44_int); // 0x75 ObjFunc
	goto Label_124; // 0x77 Jump
	
Label_124:
	return 4; // 0x7c Return
	
Label_120:
	var_45_string = "noaccess"; // 0x78 PushS
	var_46_int = 1; // 0x79 PushI
	SetProperty(var_45_string, var_46_int); // 0x7a ObjFunc
}


func_145(var_65_object)
{
	var_66_object = Obj(); var_67_object = Obj(); // 0x91 PushV
	self(var_67_object); // 0x92 Func
	var_65_object = var_67_object; // 0x94 Mov
	return 2; // 0x95 Return
}


func_151()
{
	var_31_float = 0.5; // 0x97 PushF
	var_32_float = 0.886; // 0x98 PushF
	SetSepia(var_31_float, var_32_float); // 0x99 Func
	return 0; // 0x9b Return
}


func_156()
{
	var_63_int = 0; // 0x9c PushI
	var_64_int = 0; // 0x9d PushI
	SetSepia(var_63_int, var_64_int); // 0x9e Func
	return 0; // 0xa0 Return
}


func_125(var_52_object)
{
	var_53_int = 0; var_54_int = 0; // 0x7d PushV
	var_55_bool = var_52_object == 0; // 0x7e Not
	if(var_55_bool == 0) goto Label_129; // 0x7f JumpB
	return 2; // 0x80 Return
	
Label_129:
	var_56_string = "noaccess"; // 0x81 PushS
	GetProperty(var_56_string, var_54_int); // 0x82 ObjFunc
	var_57_int = 1; // 0x84 PushI
	var_58_bool = var_54_int > var_57_int; // 0x85 GT
	if(var_58_bool == 0) goto Label_141; // 0x86 JumpB
	var_59_string = "noaccess"; // 0x87 PushS
	var_60_int = 1; // 0x88 PushI
	var_61_int = var_54_int - var_60_int; // 0x89 Sub
	SetProperty(var_59_string, var_61_int); // 0x8a ObjFunc
	goto Label_144; // 0x8c Jump
	
Label_144:
	return 2; // 0x90 Return
	
Label_141:
	var_62_string = "noaccess"; // 0x8d PushS
	RemoveProperty(var_62_string); // 0x8e ObjFunc
}


