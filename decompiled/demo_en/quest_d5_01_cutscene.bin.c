task_0_event_24(var_0_int)
{
	CameraSwitchToNormal(); // 0x64 Func
	return 0; // 0x66 Return
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_object = Obj(); var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj(); var_10_object = Obj(); var_11_object = Obj(); var_12_object = Obj(); var_13_object = Obj(); // 0x0 PushV
	var_14_string = "factory"; // 0x1 PushS
	GetSceneByName(var_7_object, var_14_string); // 0x2 Func
	var_15_string = "cs_factory_grabitel1"; // 0x4 PushS
	var_16_string = "cs_play_all.bin"; // 0x5 PushS
	var_17_cvector = CVector(0.0, 0.0, 0.0); // 0x6 PushVec
	AddScriptedActor(var_8_object, var_15_string, var_16_string, var_7_object, var_17_cvector); // 0x7 Func
	var_18_string = "cs_factory_grabitel2"; // 0x9 PushS
	var_19_string = "cs_play_all.bin"; // 0xa PushS
	var_20_cvector = CVector(0.0, 0.0, 0.0); // 0xb PushVec
	AddScriptedActor(var_9_object, var_18_string, var_19_string, var_7_object, var_20_cvector); // 0xc Func
	var_21_string = "cs_factory_patrol1"; // 0xe PushS
	var_22_string = "cs_play_all.bin"; // 0xf PushS
	var_23_cvector = CVector(0.0, 0.0, 0.0); // 0x10 PushVec
	AddScriptedActor(var_10_object, var_21_string, var_22_string, var_7_object, var_23_cvector); // 0x11 Func
	var_24_string = "cs_factory_patrol2"; // 0x13 PushS
	var_25_string = "cs_play_all.bin"; // 0x14 PushS
	var_26_cvector = CVector(0.0, 0.0, 0.0); // 0x15 PushVec
	AddScriptedActor(var_11_object, var_24_string, var_25_string, var_7_object, var_26_cvector); // 0x16 Func
	var_27_string = "cs_factory_patrol3"; // 0x18 PushS
	var_28_string = "cs_play_all.bin"; // 0x19 PushS
	var_29_cvector = CVector(0.0, 0.0, 0.0); // 0x1a PushVec
	AddScriptedActor(var_12_object, var_27_string, var_28_string, var_7_object, var_29_cvector); // 0x1b Func
	ForceGeometryLoad(); // 0x1d ObjFunc
	ForceGeometryLoad(); // 0x1f ObjFunc
	ForceGeometryLoad(); // 0x21 ObjFunc
	var_30_string = "player"; // 0x23 PushS
	FindActor(var_13_object, var_30_string); // 0x24 Func
	func_164(); // 0x27 NEW_2
	var_33_object = Obj(); // 0x29 PushV
	var_33_object = var_13_object; // 0x2a Mov
	func_103(var_33_object); // 0x2b NEW_2
	var_47_string = "space"; // 0x2d PushS
	RegisterKeyCallback(var_47_string); // 0x2e Func
	var_48_string = "cs_factory1.mot"; // 0x30 PushS
	CameraPlay(var_48_string); // 0x31 Func
	var_49_string = "cs_d5_factory.ogg"; // 0x33 PushS
	PlayGlobalMusic(var_49_string); // 0x34 Func
	CameraWaitForPlayFinish(); // 0x36 Func
	var_50_string = ""; // 0x38 PushS
	PlayGlobalMusic(var_50_string); // 0x39 Func
	var_51_string = "space"; // 0x3b PushS
	UnregisterKeyCallback(var_51_string); // 0x3c Func
	var_52_object = Obj(); // 0x3e PushV
	var_52_object = var_13_object; // 0x3f Mov
	func_126(var_52_object); // 0x40 NEW_2
	func_169(); // 0x43 NEW_2
	RemoveActor(var_8_object); // 0x45 Func
	RemoveActor(var_9_object); // 0x47 Func
	RemoveActor(var_10_object); // 0x49 Func
	RemoveActor(var_11_object); // 0x4b Func
	RemoveActor(var_12_object); // 0x4d Func
	CameraSwitchToNormal(); // 0x4f Func
	var_65_bool = 0; var_66_string = ""; var_67_string = ""; // 0x51 PushV
	var_66_string = "quest_d5_01"; // 0x52 MovS
	var_67_string = "cutscene_end"; // 0x53 MovS
	func_152(var_65_bool, var_66_string, var_67_string); // 0x54 NEW_2
	var_71_object = Obj(); // 0x56 PushV
	func_146(var_71_object); // 0x57 NEW_2
	RemoveActor(var_71_object); // 0x59 Func
	return 14; // 0x5b Return
}


func_164()
{
	var_31_float = 0.5; // 0xa4 PushF
	var_32_float = 0.886; // 0xa5 PushF
	SetSepia(var_31_float, var_32_float); // 0xa6 Func
	return 0; // 0xa8 Return
}


func_103(var_33_object)
{
	var_34_bool = 0; var_35_int = 0; var_36_bool = 0; var_37_int = 0; // 0x67 PushV
	var_38_bool = var_33_object == 0; // 0x68 Not
	if(var_38_bool == 0) goto Label_107; // 0x69 JumpB
	return 4; // 0x6a Return
	
Label_107:
	var_39_string = "noaccess"; // 0x6b PushS
	HasProperty(var_39_string, var_36_bool); // 0x6c ObjFunc
	var_40_bool = var_36_bool; // 0x6e Push
	if(var_40_bool == 0) goto Label_121; // 0x6f JumpB
	var_41_string = "noaccess"; // 0x70 PushS
	GetProperty(var_41_string, var_37_int); // 0x71 ObjFunc
	var_42_string = "noaccess"; // 0x73 PushS
	var_43_int = 1; // 0x74 PushI
	var_44_int = var_37_int + var_43_int; // 0x75 Add
	SetProperty(var_42_string, var_44_int); // 0x76 ObjFunc
	goto Label_125; // 0x78 Jump
	
Label_125:
	return 4; // 0x7d Return
	
Label_121:
	var_45_string = "noaccess"; // 0x79 PushS
	var_46_int = 1; // 0x7a PushI
	SetProperty(var_45_string, var_46_int); // 0x7b ObjFunc
}


func_169()
{
	var_63_int = 0; // 0xa9 PushI
	var_64_int = 0; // 0xaa PushI
	SetSepia(var_63_int, var_64_int); // 0xab Func
	return 0; // 0xad Return
}


func_146(var_71_object)
{
	var_72_object = Obj(); var_73_object = Obj(); // 0x92 PushV
	self(var_73_object); // 0x93 Func
	var_71_object = var_73_object; // 0x95 Mov
	return 2; // 0x96 Return
}


func_152(var_65_bool, var_66_string, var_67_string)
{
	var_68_object = Obj(); var_69_object = Obj(); // 0x98 PushV
	FindActor(var_69_object, var_66_string); // 0x99 Func
	var_70_bool = var_69_object == 0; // 0x9b NullEq
	if(var_70_bool == 0) goto Label_159; // 0x9c JumpB
	var_65_bool = 0; // 0x9d MovB
	return 2; // 0x9e Return
	
Label_159:
	Trigger(var_69_object, var_67_string); // 0x9f Func
	var_65_bool = 1; // 0xa1 MovB
	return 2; // 0xa2 Return
}


func_126(var_52_object)
{
	var_53_int = 0; var_54_int = 0; // 0x7e PushV
	var_55_bool = var_52_object == 0; // 0x7f Not
	if(var_55_bool == 0) goto Label_130; // 0x80 JumpB
	return 2; // 0x81 Return
	
Label_130:
	var_56_string = "noaccess"; // 0x82 PushS
	GetProperty(var_56_string, var_54_int); // 0x83 ObjFunc
	var_57_int = 1; // 0x85 PushI
	var_58_bool = var_54_int > var_57_int; // 0x86 GT
	if(var_58_bool == 0) goto Label_142; // 0x87 JumpB
	var_59_string = "noaccess"; // 0x88 PushS
	var_60_int = 1; // 0x89 PushI
	var_61_int = var_54_int - var_60_int; // 0x8a Sub
	SetProperty(var_59_string, var_61_int); // 0x8b ObjFunc
	goto Label_145; // 0x8d Jump
	
Label_145:
	return 2; // 0x91 Return
	
Label_142:
	var_62_string = "noaccess"; // 0x8e PushS
	RemoveProperty(var_62_string); // 0x8f ObjFunc
}


