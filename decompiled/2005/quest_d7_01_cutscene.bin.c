task_0_event_24(var_0_int)
{
	CameraSwitchToNormal(); // 0x3d Func
	return 0; // 0x3f Return
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_object = Obj(); var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj(); // 0x0 PushV
	var_8_string = "sobor"; // 0x1 PushS
	GetSceneByName(var_4_object, var_8_string); // 0x2 Func
	var_9_string = "cs_d7q01_Aglaja"; // 0x4 PushS
	var_10_cvector = CVector(0.0, 0.0, 0.0); // 0x5 PushVec
	var_11_cvector = CVector(0.0, 0.0, 1.0); // 0x6 PushVec
	var_12_string = "cs_d7q01_Aglaja.xml"; // 0x7 PushS
	AddActor(var_5_object, var_9_string, var_4_object, var_10_cvector, var_11_cvector, var_12_string); // 0x8 Func
	var_13_string = "cs_d7q01_birdmask"; // 0xa PushS
	var_14_string = "cs_play_all.bin"; // 0xb PushS
	var_15_cvector = CVector(0.0, 0.0, 0.0); // 0xc PushVec
	AddScriptedActor(var_6_object, var_13_string, var_14_string, var_4_object, var_15_cvector); // 0xd Func
	var_16_object = Obj(); // 0xf PushV
	func_64(var_16_object); // 0x10 NEW_2
	var_7_object = var_16_object; // 0x11 Mov
	func_120(); // 0x14 NEW_2
	var_22_object = Obj(); // 0x16 PushV
	var_22_object = var_7_object; // 0x17 Mov
	func_71(var_22_object); // 0x18 NEW_2
	var_36_string = "space"; // 0x1a PushS
	RegisterKeyCallback(var_36_string); // 0x1b Func
	var_37_string = "cs_d7q01.mot"; // 0x1d PushS
	CameraPlay(var_37_string); // 0x1e Func
	CameraWaitForPlayFinish(); // 0x20 Func
	var_38_string = "space"; // 0x22 PushS
	UnregisterKeyCallback(var_38_string); // 0x23 Func
	var_39_object = Obj(); // 0x25 PushV
	var_39_object = var_7_object; // 0x26 Mov
	func_94(var_39_object); // 0x27 NEW_2
	func_125(); // 0x2a NEW_2
	RemoveActor(var_6_object); // 0x2c Func
	RemoveActor(var_5_object); // 0x2e Func
	CameraSwitchToNormal(); // 0x30 Func
	var_52_object = Obj(); // 0x32 PushV
	func_114(var_52_object); // 0x33 NEW_2
	RemoveActor(var_52_object); // 0x35 Func
	return 8; // 0x37 Return
}


func_64(var_16_object)
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x40 PushV
	var_19_string = "player"; // 0x41 PushS
	FindActor(var_18_object, var_19_string); // 0x42 Func
	var_16_object = var_18_object; // 0x44 Mov
	return 2; // 0x45 Return
}


func_71(var_22_object)
{
	var_23_bool = 0; var_24_int = 0; var_25_bool = 0; var_26_int = 0; // 0x47 PushV
	var_27_bool = var_22_object == 0; // 0x48 Not
	if(var_27_bool == 0) goto Label_75; // 0x49 JumpB
	return 4; // 0x4a Return
	
Label_75:
	var_28_string = "noaccess"; // 0x4b PushS
	HasProperty(var_28_string, var_25_bool); // 0x4c ObjFunc
	var_29_bool = var_25_bool; // 0x4e Push
	if(var_29_bool == 0) goto Label_89; // 0x4f JumpB
	var_30_string = "noaccess"; // 0x50 PushS
	GetProperty(var_30_string, var_26_int); // 0x51 ObjFunc
	var_31_string = "noaccess"; // 0x53 PushS
	var_32_int = 1; // 0x54 PushI
	var_33_int = var_26_int + var_32_int; // 0x55 Add
	SetProperty(var_31_string, var_33_int); // 0x56 ObjFunc
	goto Label_93; // 0x58 Jump
	
Label_93:
	return 4; // 0x5d Return
	
Label_89:
	var_34_string = "noaccess"; // 0x59 PushS
	var_35_int = 1; // 0x5a PushI
	SetProperty(var_34_string, var_35_int); // 0x5b ObjFunc
}


func_114(var_52_object)
{
	var_53_object = Obj(); var_54_object = Obj(); // 0x72 PushV
	self(var_54_object); // 0x73 Func
	var_52_object = var_54_object; // 0x75 Mov
	return 2; // 0x76 Return
}


func_120()
{
	var_20_float = 0.5; // 0x78 PushF
	var_21_float = 0.886; // 0x79 PushF
	SetSepia(var_20_float, var_21_float); // 0x7a Func
	return 0; // 0x7c Return
}


func_125()
{
	var_50_int = 0; // 0x7d PushI
	var_51_int = 0; // 0x7e PushI
	SetSepia(var_50_int, var_51_int); // 0x7f Func
	return 0; // 0x81 Return
}


func_94(var_39_object)
{
	var_40_int = 0; var_41_int = 0; // 0x5e PushV
	var_42_bool = var_39_object == 0; // 0x5f Not
	if(var_42_bool == 0) goto Label_98; // 0x60 JumpB
	return 2; // 0x61 Return
	
Label_98:
	var_43_string = "noaccess"; // 0x62 PushS
	GetProperty(var_43_string, var_41_int); // 0x63 ObjFunc
	var_44_int = 1; // 0x65 PushI
	var_45_bool = var_41_int > var_44_int; // 0x66 GT
	if(var_45_bool == 0) goto Label_110; // 0x67 JumpB
	var_46_string = "noaccess"; // 0x68 PushS
	var_47_int = 1; // 0x69 PushI
	var_48_int = var_41_int - var_47_int; // 0x6a Sub
	SetProperty(var_46_string, var_48_int); // 0x6b ObjFunc
	goto Label_113; // 0x6d Jump
	
Label_113:
	return 2; // 0x71 Return
	
Label_110:
	var_49_string = "noaccess"; // 0x6e PushS
	RemoveProperty(var_49_string); // 0x6f ObjFunc
}


