task_0_event_24(var_0_int)
{
	CameraSwitchToNormal(); // 0x48 Func
	return 0; // 0x4a Return
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_object = Obj(); var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj(); // 0x0 PushV
	GetMainOutdoorScene(var_4_object); // 0x1 Func
	var_8_object = Obj(); var_9_object = Obj(); var_10_string = ""; var_11_string = ""; // 0x3 PushV
	var_9_object = var_4_object; // 0x4 Mov
	var_10_string = "cs_b10q01_burah"; // 0x5 MovS
	var_11_string = "cs_b10q01_burah.xml"; // 0x6 MovS
	func_131(var_8_object, var_9_object, var_10_string, var_11_string); // 0x7 NEW_2
	var_5_object = var_8_object; // 0x8 Mov
	var_16_object = Obj(); var_17_object = Obj(); var_18_string = ""; var_19_string = ""; // 0xa PushV
	var_17_object = var_4_object; // 0xb Mov
	var_18_string = "cs_b10q01_whitemask"; // 0xc MovS
	var_19_string = "cs_play_all.bin"; // 0xd MovS
	func_139(var_16_object, var_17_object, var_18_string, var_19_string); // 0xe NEW_2
	var_6_object = var_16_object; // 0xf Mov
	ForceGeometryLoad(); // 0x11 ObjFunc
	ForceGeometryLoad(); // 0x13 ObjFunc
	var_24_object = Obj(); // 0x15 PushV
	func_75(var_24_object); // 0x16 NEW_2
	var_7_object = var_24_object; // 0x17 Mov
	func_159(); // 0x1a NEW_2
	var_30_object = Obj(); // 0x1c PushV
	var_30_object = var_7_object; // 0x1d Mov
	func_82(var_30_object); // 0x1e NEW_2
	var_44_string = "space"; // 0x20 PushS
	RegisterKeyCallback(var_44_string); // 0x21 Func
	var_45_string = "cs_b10q01.mot"; // 0x23 PushS
	CameraPlay(var_45_string); // 0x24 Func
	CameraWaitForPlayFinish(); // 0x26 Func
	var_46_string = "space"; // 0x28 PushS
	UnregisterKeyCallback(var_46_string); // 0x29 Func
	var_47_object = Obj(); // 0x2b PushV
	var_47_object = var_7_object; // 0x2c Mov
	func_105(var_47_object); // 0x2d NEW_2
	func_164(); // 0x30 NEW_2
	CameraSwitchToNormal(); // 0x32 Func
	RemoveActor(var_5_object); // 0x34 Func
	RemoveActor(var_6_object); // 0x36 Func
	var_60_bool = 0; var_61_string = ""; var_62_string = ""; // 0x38 PushV
	var_61_string = "quest_b10_01"; // 0x39 MovS
	var_62_string = "place_butchers"; // 0x3a MovS
	func_147(var_60_bool, var_61_string, var_62_string); // 0x3b NEW_2
	var_66_object = Obj(); // 0x3d PushV
	func_125(var_66_object); // 0x3e NEW_2
	RemoveActor(var_66_object); // 0x40 Func
	return 8; // 0x42 Return
}


func_131(var_8_object, var_9_object, var_10_string, var_11_string)
{
	var_12_object = Obj(); var_13_object = Obj(); // 0x83 PushV
	var_14_cvector = CVector(0.0, 0.0, 0.0); // 0x84 PushVec
	var_15_cvector = CVector(0.0, 0.0, 1.0); // 0x85 PushVec
	AddActor(var_13_object, var_10_string, var_9_object, var_14_cvector, var_15_cvector, var_11_string); // 0x86 Func
	var_8_object = var_13_object; // 0x88 Mov
	return 2; // 0x89 Return
}


func_164()
{
	var_58_int = 0; // 0xa4 PushI
	var_59_int = 0; // 0xa5 PushI
	SetSepia(var_58_int, var_59_int); // 0xa6 Func
	return 0; // 0xa8 Return
}


func_105(var_47_object)
{
	var_48_int = 0; var_49_int = 0; // 0x69 PushV
	var_50_bool = var_47_object == 0; // 0x6a Not
	if(var_50_bool == 0) goto Label_109; // 0x6b JumpB
	return 2; // 0x6c Return
	
Label_109:
	var_51_string = "noaccess"; // 0x6d PushS
	GetProperty(var_51_string, var_49_int); // 0x6e ObjFunc
	var_52_int = 1; // 0x70 PushI
	var_53_bool = var_49_int > var_52_int; // 0x71 GT
	if(var_53_bool == 0) goto Label_121; // 0x72 JumpB
	var_54_string = "noaccess"; // 0x73 PushS
	var_55_int = 1; // 0x74 PushI
	var_56_int = var_49_int - var_55_int; // 0x75 Sub
	SetProperty(var_54_string, var_56_int); // 0x76 ObjFunc
	goto Label_124; // 0x78 Jump
	
Label_124:
	return 2; // 0x7c Return
	
Label_121:
	var_57_string = "noaccess"; // 0x79 PushS
	RemoveProperty(var_57_string); // 0x7a ObjFunc
}


func_75(var_24_object)
{
	var_25_object = Obj(); var_26_object = Obj(); // 0x4b PushV
	var_27_string = "player"; // 0x4c PushS
	FindActor(var_26_object, var_27_string); // 0x4d Func
	var_24_object = var_26_object; // 0x4f Mov
	return 2; // 0x50 Return
}


func_139(var_16_object, var_17_object, var_18_string, var_19_string)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x8b PushV
	var_22_cvector = CVector(0.0, 0.0, 0.0); // 0x8c PushVec
	var_23_cvector = CVector(0.0, 0.0, 1.0); // 0x8d PushVec
	AddScriptedActor(var_21_object, var_18_string, var_19_string, var_17_object, var_22_cvector, var_23_cvector); // 0x8e Func
	var_16_object = var_21_object; // 0x90 Mov
	return 2; // 0x91 Return
}


func_82(var_30_object)
{
	var_31_bool = 0; var_32_int = 0; var_33_bool = 0; var_34_int = 0; // 0x52 PushV
	var_35_bool = var_30_object == 0; // 0x53 Not
	if(var_35_bool == 0) goto Label_86; // 0x54 JumpB
	return 4; // 0x55 Return
	
Label_86:
	var_36_string = "noaccess"; // 0x56 PushS
	HasProperty(var_36_string, var_33_bool); // 0x57 ObjFunc
	var_37_bool = var_33_bool; // 0x59 Push
	if(var_37_bool == 0) goto Label_100; // 0x5a JumpB
	var_38_string = "noaccess"; // 0x5b PushS
	GetProperty(var_38_string, var_34_int); // 0x5c ObjFunc
	var_39_string = "noaccess"; // 0x5e PushS
	var_40_int = 1; // 0x5f PushI
	var_41_int = var_34_int + var_40_int; // 0x60 Add
	SetProperty(var_39_string, var_41_int); // 0x61 ObjFunc
	goto Label_104; // 0x63 Jump
	
Label_104:
	return 4; // 0x68 Return
	
Label_100:
	var_42_string = "noaccess"; // 0x64 PushS
	var_43_int = 1; // 0x65 PushI
	SetProperty(var_42_string, var_43_int); // 0x66 ObjFunc
}


func_147(var_60_bool, var_61_string, var_62_string)
{
	var_63_object = Obj(); var_64_object = Obj(); // 0x93 PushV
	FindActor(var_64_object, var_61_string); // 0x94 Func
	var_65_bool = var_64_object == 0; // 0x96 NullEq
	if(var_65_bool == 0) goto Label_154; // 0x97 JumpB
	var_60_bool = 0; // 0x98 MovB
	return 2; // 0x99 Return
	
Label_154:
	Trigger(var_64_object, var_62_string); // 0x9a Func
	var_60_bool = 1; // 0x9c MovB
	return 2; // 0x9d Return
}


func_125(var_66_object)
{
	var_67_object = Obj(); var_68_object = Obj(); // 0x7d PushV
	self(var_68_object); // 0x7e Func
	var_66_object = var_68_object; // 0x80 Mov
	return 2; // 0x81 Return
}


func_159()
{
	var_28_float = 0.5; // 0x9f PushF
	var_29_float = 0.886; // 0xa0 PushF
	SetSepia(var_28_float, var_29_float); // 0xa1 Func
	return 0; // 0xa3 Return
}


