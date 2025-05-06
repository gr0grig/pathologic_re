task_0_event_24(var_0_int)
{
	CameraSwitchToNormal(); // 0x42 Func
	return 0; // 0x44 Return
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_object = Obj(); var_3_bool = 0; var_4_cvector = CVector(0,0,0); var_5_cvector = CVector(0,0,0); var_6_object = Obj(); var_7_object = Obj(); var_8_object = Obj(); var_9_bool = 0; var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0); // 0x0 PushV
	var_12_string = "storojka"; // 0x1 PushS
	GetSceneByName(var_6_object, var_12_string); // 0x2 Func
	var_13_object = Obj(); var_14_object = Obj(); var_15_string = ""; var_16_string = ""; // 0x4 PushV
	var_14_object = var_6_object; // 0x5 Mov
	var_15_string = "cs_b1q02_worker"; // 0x6 MovS
	var_16_string = "cs_play_all.bin"; // 0x7 MovS
	func_143(var_13_object, var_14_object, var_15_string, var_16_string); // 0x8 NEW_2
	var_7_object = var_13_object; // 0x9 Mov
	var_21_object = Obj(); // 0xb PushV
	func_69(var_21_object); // 0xc NEW_2
	var_8_object = var_21_object; // 0xd Mov
	func_151(); // 0x10 NEW_2
	var_27_object = Obj(); // 0x12 PushV
	var_27_object = var_8_object; // 0x13 Mov
	func_76(var_27_object); // 0x14 NEW_2
	var_41_string = "space"; // 0x16 PushS
	RegisterKeyCallback(var_41_string); // 0x17 Func
	var_42_string = "cs_b1q02.mot"; // 0x19 PushS
	CameraPlay(var_42_string); // 0x1a Func
	CameraWaitForPlayFinish(); // 0x1c Func
	var_43_string = "space"; // 0x1e PushS
	UnregisterKeyCallback(var_43_string); // 0x1f Func
	var_44_object = Obj(); // 0x21 PushV
	var_44_object = var_8_object; // 0x22 Mov
	func_99(var_44_object); // 0x23 NEW_2
	CameraSwitchToNormal(); // 0x25 Func
	func_156(); // 0x28 NEW_2
	var_57_string = "pt_cs_player"; // 0x2a PushS
	GetLocator(var_57_string, var_9_bool, var_10_cvector, var_11_cvector); // 0x2b ObjFunc
	Teleport(var_8_object, var_6_object, var_10_cvector, var_11_cvector); // 0x2d Func
	RemoveActor(var_7_object); // 0x2f Func
	var_58_object = Obj(); var_59_object = Obj(); var_60_string = ""; var_61_string = ""; var_62_string = ""; // 0x31 PushV
	var_59_object = var_6_object; // 0x32 Mov
	var_60_string = "pt_b1q02_worker"; // 0x33 MovS
	var_61_string = "pers_worker"; // 0x34 MovS
	var_62_string = "b1q02_worker.xml"; // 0x35 MovS
	func_125(var_58_object, var_59_object, var_60_string, var_61_string, var_62_string); // 0x36 NEW_2
	var_76_object = Obj(); // 0x38 PushV
	func_119(var_76_object); // 0x39 NEW_2
	RemoveActor(var_76_object); // 0x3b Func
	return 12; // 0x3d Return
}


func_99(var_44_object)
{
	var_45_int = 0; var_46_int = 0; // 0x63 PushV
	var_47_bool = var_44_object == 0; // 0x64 Not
	if(var_47_bool == 0) goto Label_103; // 0x65 JumpB
	return 2; // 0x66 Return
	
Label_103:
	var_48_string = "noaccess"; // 0x67 PushS
	GetProperty(var_48_string, var_46_int); // 0x68 ObjFunc
	var_49_int = 1; // 0x6a PushI
	var_50_bool = var_46_int > var_49_int; // 0x6b GT
	if(var_50_bool == 0) goto Label_115; // 0x6c JumpB
	var_51_string = "noaccess"; // 0x6d PushS
	var_52_int = 1; // 0x6e PushI
	var_53_int = var_46_int - var_52_int; // 0x6f Sub
	SetProperty(var_51_string, var_53_int); // 0x70 ObjFunc
	goto Label_118; // 0x72 Jump
	
Label_118:
	return 2; // 0x76 Return
	
Label_115:
	var_54_string = "noaccess"; // 0x73 PushS
	RemoveProperty(var_54_string); // 0x74 ObjFunc
}


func_69(var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj(); // 0x45 PushV
	var_24_string = "player"; // 0x46 PushS
	FindActor(var_23_object, var_24_string); // 0x47 Func
	var_21_object = var_23_object; // 0x49 Mov
	return 2; // 0x4a Return
}


func_76(var_27_object)
{
	var_28_bool = 0; var_29_int = 0; var_30_bool = 0; var_31_int = 0; // 0x4c PushV
	var_32_bool = var_27_object == 0; // 0x4d Not
	if(var_32_bool == 0) goto Label_80; // 0x4e JumpB
	return 4; // 0x4f Return
	
Label_80:
	var_33_string = "noaccess"; // 0x50 PushS
	HasProperty(var_33_string, var_30_bool); // 0x51 ObjFunc
	var_34_bool = var_30_bool; // 0x53 Push
	if(var_34_bool == 0) goto Label_94; // 0x54 JumpB
	var_35_string = "noaccess"; // 0x55 PushS
	GetProperty(var_35_string, var_31_int); // 0x56 ObjFunc
	var_36_string = "noaccess"; // 0x58 PushS
	var_37_int = 1; // 0x59 PushI
	var_38_int = var_31_int + var_37_int; // 0x5a Add
	SetProperty(var_36_string, var_38_int); // 0x5b ObjFunc
	goto Label_98; // 0x5d Jump
	
Label_98:
	return 4; // 0x62 Return
	
Label_94:
	var_39_string = "noaccess"; // 0x5e PushS
	var_40_int = 1; // 0x5f PushI
	SetProperty(var_39_string, var_40_int); // 0x60 ObjFunc
}


func_143(var_13_object, var_14_object, var_15_string, var_16_string)
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x8f PushV
	var_19_cvector = CVector(0.0, 0.0, 0.0); // 0x90 PushVec
	var_20_cvector = CVector(0.0, 0.0, 1.0); // 0x91 PushVec
	AddScriptedActor(var_18_object, var_15_string, var_16_string, var_14_object, var_19_cvector, var_20_cvector); // 0x92 Func
	var_13_object = var_18_object; // 0x94 Mov
	return 2; // 0x95 Return
}


func_119(var_76_object)
{
	var_77_object = Obj(); var_78_object = Obj(); // 0x77 PushV
	self(var_78_object); // 0x78 Func
	var_76_object = var_78_object; // 0x7a Mov
	return 2; // 0x7b Return
}


func_151()
{
	var_25_float = 0.5; // 0x97 PushF
	var_26_float = 0.886; // 0x98 PushF
	SetSepia(var_25_float, var_26_float); // 0x99 Func
	return 0; // 0x9b Return
}


func_156()
{
	var_55_int = 0; // 0x9c PushI
	var_56_int = 0; // 0x9d PushI
	SetSepia(var_55_int, var_56_int); // 0x9e Func
	return 0; // 0xa0 Return
}


func_125(var_58_object, var_59_object, var_60_string, var_61_string, var_62_string)
{
	var_63_bool = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_object = Obj(); var_67_bool = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_object = Obj(); // 0x7d PushV
	GetLocator(var_60_string, var_67_bool, var_68_cvector, var_69_cvector); // 0x7e ObjFunc
	var_71_bool = var_67_bool == 0; // 0x80 Not
	if(var_71_bool == 0) goto Label_138; // 0x81 JumpB
	var_72_string = "Locator "; // 0x82 PushS
	var_73_int = var_72_string + var_60_string; // 0x83 Add
	var_74_string = " doesn't exist"; // 0x84 PushS
	var_75_int = var_73_int + var_74_string; // 0x85 Add
	Trace(var_75_int); // 0x86 Func
	var_70_object = 0; // 0x88 SetNull
	goto Label_140; // 0x89 Jump
	
Label_140:
	var_58_object = var_70_object; // 0x8c Mov
	return 8; // 0x8d Return
	
Label_138:
	AddActor(var_70_object, var_61_string, var_59_object, var_68_cvector, var_69_cvector, var_62_string); // 0x8a Func
}


