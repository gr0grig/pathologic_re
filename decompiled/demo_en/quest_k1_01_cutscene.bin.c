task_0_event_24(var_0_int)
{
	CameraSwitchToNormal(); // 0x4e Func
	return 0; // 0x50 Return
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_object = Obj(); var_3_object = Obj(); var_4_bool = 0; var_5_cvector = CVector(0,0,0); var_6_cvector = CVector(0,0,0); var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj(); var_10_object = Obj(); var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); // 0x0 PushV
	var_14_string = "cot_anna"; // 0x1 PushS
	GetSceneByName(var_7_object, var_14_string); // 0x2 Func
	var_15_object = Obj(); var_16_object = Obj(); var_17_string = ""; var_18_string = ""; // 0x4 PushV
	var_16_object = var_7_object; // 0x5 Mov
	var_17_string = "cs_k1q01_worker"; // 0x6 MovS
	var_18_string = "cs_play_all.bin"; // 0x7 MovS
	func_145(var_15_object, var_16_object, var_17_string, var_18_string); // 0x8 NEW_2
	var_8_object = var_15_object; // 0x9 Mov
	var_23_object = Obj(); var_24_object = Obj(); var_25_string = ""; var_26_string = ""; // 0xb PushV
	var_24_object = var_7_object; // 0xc Mov
	var_25_string = "cs_k1q01_klara"; // 0xd MovS
	var_26_string = "cs_k1q01_klara.xml"; // 0xe MovS
	func_137(var_23_object, var_24_object, var_25_string, var_26_string); // 0xf NEW_2
	var_9_object = var_23_object; // 0x10 Mov
	ForceGeometryLoad(); // 0x12 ObjFunc
	ForceGeometryLoad(); // 0x14 ObjFunc
	var_31_object = Obj(); // 0x16 PushV
	func_81(var_31_object); // 0x17 NEW_2
	var_10_object = var_31_object; // 0x18 Mov
	func_165(); // 0x1b NEW_2
	var_37_object = Obj(); // 0x1d PushV
	var_37_object = var_10_object; // 0x1e Mov
	func_88(var_37_object); // 0x1f NEW_2
	var_51_string = "space"; // 0x21 PushS
	RegisterKeyCallback(var_51_string); // 0x22 Func
	var_52_string = "cs_k1q01.mot"; // 0x24 PushS
	CameraPlay(var_52_string); // 0x25 Func
	CameraWaitForPlayFinish(); // 0x27 Func
	var_53_string = "space"; // 0x29 PushS
	UnregisterKeyCallback(var_53_string); // 0x2a Func
	var_54_object = Obj(); // 0x2c PushV
	var_54_object = var_10_object; // 0x2d Mov
	func_111(var_54_object); // 0x2e NEW_2
	func_170(); // 0x31 NEW_2
	CameraSwitchToNormal(); // 0x33 Func
	var_67_string = "pt_cs_player"; // 0x35 PushS
	GetLocator(var_67_string, var_11_bool, var_12_cvector, var_13_cvector); // 0x36 ObjFunc
	Teleport(var_10_object, var_7_object, var_12_cvector, var_13_cvector); // 0x38 Func
	RemoveActor(var_8_object); // 0x3a Func
	RemoveActor(var_9_object); // 0x3c Func
	var_68_bool = 0; var_69_string = ""; var_70_string = ""; // 0x3e PushV
	var_69_string = "quest_k1_01"; // 0x3f MovS
	var_70_string = "cutscene_end"; // 0x40 MovS
	func_153(var_68_bool, var_69_string, var_70_string); // 0x41 NEW_2
	var_74_object = Obj(); // 0x43 PushV
	func_131(var_74_object); // 0x44 NEW_2
	RemoveActor(var_74_object); // 0x46 Func
	return 14; // 0x48 Return
}


func_131(var_74_object)
{
	var_75_object = Obj(); var_76_object = Obj(); // 0x83 PushV
	self(var_76_object); // 0x84 Func
	var_74_object = var_76_object; // 0x86 Mov
	return 2; // 0x87 Return
}


func_165()
{
	var_35_float = 0.5; // 0xa5 PushF
	var_36_float = 0.886; // 0xa6 PushF
	SetSepia(var_35_float, var_36_float); // 0xa7 Func
	return 0; // 0xa9 Return
}


func_137(var_23_object, var_24_object, var_25_string, var_26_string)
{
	var_27_object = Obj(); var_28_object = Obj(); // 0x89 PushV
	var_29_cvector = CVector(0.0, 0.0, 0.0); // 0x8a PushVec
	var_30_cvector = CVector(0.0, 0.0, 1.0); // 0x8b PushVec
	AddActor(var_28_object, var_25_string, var_24_object, var_29_cvector, var_30_cvector, var_26_string); // 0x8c Func
	var_23_object = var_28_object; // 0x8e Mov
	return 2; // 0x8f Return
}


func_170()
{
	var_65_int = 0; // 0xaa PushI
	var_66_int = 0; // 0xab PushI
	SetSepia(var_65_int, var_66_int); // 0xac Func
	return 0; // 0xae Return
}


func_111(var_54_object)
{
	var_55_int = 0; var_56_int = 0; // 0x6f PushV
	var_57_bool = var_54_object == 0; // 0x70 Not
	if(var_57_bool == 0) goto Label_115; // 0x71 JumpB
	return 2; // 0x72 Return
	
Label_115:
	var_58_string = "noaccess"; // 0x73 PushS
	GetProperty(var_58_string, var_56_int); // 0x74 ObjFunc
	var_59_int = 1; // 0x76 PushI
	var_60_bool = var_56_int > var_59_int; // 0x77 GT
	if(var_60_bool == 0) goto Label_127; // 0x78 JumpB
	var_61_string = "noaccess"; // 0x79 PushS
	var_62_int = 1; // 0x7a PushI
	var_63_int = var_56_int - var_62_int; // 0x7b Sub
	SetProperty(var_61_string, var_63_int); // 0x7c ObjFunc
	goto Label_130; // 0x7e Jump
	
Label_130:
	return 2; // 0x82 Return
	
Label_127:
	var_64_string = "noaccess"; // 0x7f PushS
	RemoveProperty(var_64_string); // 0x80 ObjFunc
}


func_81(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x51 PushV
	var_34_string = "player"; // 0x52 PushS
	FindActor(var_33_object, var_34_string); // 0x53 Func
	var_31_object = var_33_object; // 0x55 Mov
	return 2; // 0x56 Return
}


func_145(var_15_object, var_16_object, var_17_string, var_18_string)
{
	var_19_object = Obj(); var_20_object = Obj(); // 0x91 PushV
	var_21_cvector = CVector(0.0, 0.0, 0.0); // 0x92 PushVec
	var_22_cvector = CVector(0.0, 0.0, 1.0); // 0x93 PushVec
	AddScriptedActor(var_20_object, var_17_string, var_18_string, var_16_object, var_21_cvector, var_22_cvector); // 0x94 Func
	var_15_object = var_20_object; // 0x96 Mov
	return 2; // 0x97 Return
}


func_88(var_37_object)
{
	var_38_bool = 0; var_39_int = 0; var_40_bool = 0; var_41_int = 0; // 0x58 PushV
	var_42_bool = var_37_object == 0; // 0x59 Not
	if(var_42_bool == 0) goto Label_92; // 0x5a JumpB
	return 4; // 0x5b Return
	
Label_92:
	var_43_string = "noaccess"; // 0x5c PushS
	HasProperty(var_43_string, var_40_bool); // 0x5d ObjFunc
	var_44_bool = var_40_bool; // 0x5f Push
	if(var_44_bool == 0) goto Label_106; // 0x60 JumpB
	var_45_string = "noaccess"; // 0x61 PushS
	GetProperty(var_45_string, var_41_int); // 0x62 ObjFunc
	var_46_string = "noaccess"; // 0x64 PushS
	var_47_int = 1; // 0x65 PushI
	var_48_int = var_41_int + var_47_int; // 0x66 Add
	SetProperty(var_46_string, var_48_int); // 0x67 ObjFunc
	goto Label_110; // 0x69 Jump
	
Label_110:
	return 4; // 0x6e Return
	
Label_106:
	var_49_string = "noaccess"; // 0x6a PushS
	var_50_int = 1; // 0x6b PushI
	SetProperty(var_49_string, var_50_int); // 0x6c ObjFunc
}


func_153(var_68_bool, var_69_string, var_70_string)
{
	var_71_object = Obj(); var_72_object = Obj(); // 0x99 PushV
	FindActor(var_72_object, var_69_string); // 0x9a Func
	var_73_bool = var_72_object == 0; // 0x9c NullEq
	if(var_73_bool == 0) goto Label_160; // 0x9d JumpB
	var_68_bool = 0; // 0x9e MovB
	return 2; // 0x9f Return
	
Label_160:
	Trigger(var_72_object, var_70_string); // 0xa0 Func
	var_68_bool = 1; // 0xa2 MovB
	return 2; // 0xa3 Return
}


