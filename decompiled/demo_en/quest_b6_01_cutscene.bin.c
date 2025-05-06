task_0_event_24(var_0_int)
{
	CameraSwitchToNormal(); // 0x67 Func
	return 0; // 0x69 Return
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_object = Obj(); var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj(); var_10_object = Obj(); var_11_object = Obj(); // 0x0 PushV
	GetMainOutdoorScene(var_6_object); // 0x1 Func
	var_12_object = Obj(); var_13_object = Obj(); var_14_string = ""; var_15_string = ""; // 0x3 PushV
	var_13_object = var_6_object; // 0x4 Mov
	var_14_string = "cs_b6q01_morlok1"; // 0x5 MovS
	var_15_string = "cs_play_all.bin"; // 0x6 MovS
	func_162(var_12_object, var_13_object, var_14_string, var_15_string); // 0x7 NEW_2
	var_7_object = var_12_object; // 0x8 Mov
	var_20_object = Obj(); var_21_object = Obj(); var_22_string = ""; var_23_string = ""; // 0xa PushV
	var_21_object = var_6_object; // 0xb Mov
	var_22_string = "cs_b6q01_morlok2"; // 0xc MovS
	var_23_string = "cs_play_all.bin"; // 0xd MovS
	func_162(var_20_object, var_21_object, var_22_string, var_23_string); // 0xe NEW_2
	var_8_object = var_20_object; // 0xf Mov
	var_24_object = Obj(); var_25_object = Obj(); var_26_string = ""; var_27_string = ""; // 0x11 PushV
	var_25_object = var_6_object; // 0x12 Mov
	var_26_string = "cs_b6q01_bull"; // 0x13 MovS
	var_27_string = "cs_play_all.bin"; // 0x14 MovS
	func_162(var_24_object, var_25_object, var_26_string, var_27_string); // 0x15 NEW_2
	var_9_object = var_24_object; // 0x16 Mov
	ForceGeometryLoad(); // 0x18 ObjFunc
	ForceGeometryLoad(); // 0x1a ObjFunc
	ForceGeometryLoad(); // 0x1c ObjFunc
	var_28_object = Obj(); // 0x1e PushV
	func_106(var_28_object); // 0x1f NEW_2
	var_10_object = var_28_object; // 0x20 Mov
	func_170(); // 0x23 NEW_2
	var_34_object = Obj(); // 0x25 PushV
	var_34_object = var_10_object; // 0x26 Mov
	func_113(var_34_object); // 0x27 NEW_2
	var_48_string = "space"; // 0x29 PushS
	RegisterKeyCallback(var_48_string); // 0x2a Func
	var_49_string = "cs_b6q01.mot"; // 0x2c PushS
	CameraPlay(var_49_string); // 0x2d Func
	CameraWaitForPlayFinish(); // 0x2f Func
	var_50_string = "space"; // 0x31 PushS
	UnregisterKeyCallback(var_50_string); // 0x32 Func
	var_51_object = Obj(); // 0x34 PushV
	var_51_object = var_10_object; // 0x35 Mov
	func_136(var_51_object); // 0x36 NEW_2
	CameraSwitchToNormal(); // 0x38 Func
	func_175(); // 0x3b NEW_2
	RemoveActor(var_7_object); // 0x3d Func
	RemoveActor(var_8_object); // 0x3f Func
	RemoveActor(var_9_object); // 0x41 Func
	var_64_string = "b6q01_bull"; // 0x43 PushS
	var_65_cvector = CVector(0.0, 0.0, 0.0); // 0x44 PushVec
	var_66_cvector = CVector(0.0, 0.0, 1.0); // 0x45 PushVec
	var_67_string = "b6q01_dead_bull.xml"; // 0x46 PushS
	AddActor(var_9_object, var_64_string, var_6_object, var_65_cvector, var_66_cvector, var_67_string); // 0x47 Func
	var_68_string = "quest_b6_01"; // 0x49 PushS
	FindActor(var_11_object, var_68_string); // 0x4a Func
	var_69_object = var_11_object; // 0x4c Push
	if(var_69_object == 0) goto Label_85; // 0x4d JumpB
	var_70_string = "Bull"; // 0x4e PushS
	SetScriptProperty(var_70_string, var_9_object); // 0x4f ObjFunc
	var_71_string = "sacrifice_end"; // 0x51 PushS
	Trigger(var_11_object, var_71_string); // 0x52 Func
	goto Label_90; // 0x54 Jump
	
Label_90:
	var_72_object = Obj(); // 0x5a PushV
	func_156(var_72_object); // 0x5b NEW_2
	RemoveActor(var_72_object); // 0x5d Func
	return 12; // 0x5f Return
	
Label_85:
	sync(); // 0x55 Func
	var_75_string = "cleanup"; // 0x57 PushS
	Trigger(var_9_object, var_75_string); // 0x58 Func
}


func_162(var_12_object, var_13_object, var_14_string, var_15_string)
{
	var_16_object = Obj(); var_17_object = Obj(); // 0xa2 PushV
	var_18_cvector = CVector(0.0, 0.0, 0.0); // 0xa3 PushVec
	var_19_cvector = CVector(0.0, 0.0, 1.0); // 0xa4 PushVec
	AddScriptedActor(var_17_object, var_14_string, var_15_string, var_13_object, var_18_cvector, var_19_cvector); // 0xa5 Func
	var_12_object = var_17_object; // 0xa7 Mov
	return 2; // 0xa8 Return
}


func_136(var_51_object)
{
	var_52_int = 0; var_53_int = 0; // 0x88 PushV
	var_54_bool = var_51_object == 0; // 0x89 Not
	if(var_54_bool == 0) goto Label_140; // 0x8a JumpB
	return 2; // 0x8b Return
	
Label_140:
	var_55_string = "noaccess"; // 0x8c PushS
	GetProperty(var_55_string, var_53_int); // 0x8d ObjFunc
	var_56_int = 1; // 0x8f PushI
	var_57_bool = var_53_int > var_56_int; // 0x90 GT
	if(var_57_bool == 0) goto Label_152; // 0x91 JumpB
	var_58_string = "noaccess"; // 0x92 PushS
	var_59_int = 1; // 0x93 PushI
	var_60_int = var_53_int - var_59_int; // 0x94 Sub
	SetProperty(var_58_string, var_60_int); // 0x95 ObjFunc
	goto Label_155; // 0x97 Jump
	
Label_155:
	return 2; // 0x9b Return
	
Label_152:
	var_61_string = "noaccess"; // 0x98 PushS
	RemoveProperty(var_61_string); // 0x99 ObjFunc
}


func_170()
{
	var_32_float = 0.5; // 0xaa PushF
	var_33_float = 0.886; // 0xab PushF
	SetSepia(var_32_float, var_33_float); // 0xac Func
	return 0; // 0xae Return
}


func_106(var_28_object)
{
	var_29_object = Obj(); var_30_object = Obj(); // 0x6a PushV
	var_31_string = "player"; // 0x6b PushS
	FindActor(var_30_object, var_31_string); // 0x6c Func
	var_28_object = var_30_object; // 0x6e Mov
	return 2; // 0x6f Return
}


func_175()
{
	var_62_int = 0; // 0xaf PushI
	var_63_int = 0; // 0xb0 PushI
	SetSepia(var_62_int, var_63_int); // 0xb1 Func
	return 0; // 0xb3 Return
}


func_113(var_34_object)
{
	var_35_bool = 0; var_36_int = 0; var_37_bool = 0; var_38_int = 0; // 0x71 PushV
	var_39_bool = var_34_object == 0; // 0x72 Not
	if(var_39_bool == 0) goto Label_117; // 0x73 JumpB
	return 4; // 0x74 Return
	
Label_117:
	var_40_string = "noaccess"; // 0x75 PushS
	HasProperty(var_40_string, var_37_bool); // 0x76 ObjFunc
	var_41_bool = var_37_bool; // 0x78 Push
	if(var_41_bool == 0) goto Label_131; // 0x79 JumpB
	var_42_string = "noaccess"; // 0x7a PushS
	GetProperty(var_42_string, var_38_int); // 0x7b ObjFunc
	var_43_string = "noaccess"; // 0x7d PushS
	var_44_int = 1; // 0x7e PushI
	var_45_int = var_38_int + var_44_int; // 0x7f Add
	SetProperty(var_43_string, var_45_int); // 0x80 ObjFunc
	goto Label_135; // 0x82 Jump
	
Label_135:
	return 4; // 0x87 Return
	
Label_131:
	var_46_string = "noaccess"; // 0x83 PushS
	var_47_int = 1; // 0x84 PushI
	SetProperty(var_46_string, var_47_int); // 0x85 ObjFunc
}


func_156(var_72_object)
{
	var_73_object = Obj(); var_74_object = Obj(); // 0x9c PushV
	self(var_74_object); // 0x9d Func
	var_72_object = var_74_object; // 0x9f Mov
	return 2; // 0xa0 Return
}


