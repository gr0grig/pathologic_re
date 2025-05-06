task_0_event_5(var_0_object, var_1_object)
{
	var_2_object = Obj(); var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj(); // 0x4 PushV
	var_6_object = Obj(); var_7_object = Obj(); var_8_string = ""; var_9_string = ""; var_10_string = ""; // 0x5 PushV
	var_11_object = Obj(); // 0x6 PushV
	func_128(var_11_object); // 0x7 NEW_2
	var_7_object = var_11_object; // 0x8 Mov
	var_8_string = "pt_avrox"; // 0xa MovS
	var_9_string = "pers_avrox"; // 0xb MovS
	var_10_string = "b11q01_avrox.xml"; // 0xc MovS
	func_134(var_6_object, var_7_object, var_8_string, var_9_string, var_10_string); // 0xd NEW_2
	var_1_object = var_6_object; // 0xe TMov
	var_27_object = Obj(); var_28_object = Obj(); var_29_string = ""; var_30_string = ""; // 0x10 PushV
	var_31_object = Obj(); // 0x11 PushV
	func_128(var_31_object); // 0x12 NEW_2
	var_28_object = var_31_object; // 0x13 Mov
	var_29_string = "cs_b11q01_starshina"; // 0x15 MovS
	var_30_string = "cs_play_all.bin"; // 0x16 MovS
	func_152(var_27_object, var_28_object, var_29_string, var_30_string); // 0x17 NEW_2
	var_4_object = var_27_object; // 0x18 Mov
	var_36_object = Obj(); // 0x1a PushV
	func_78(var_36_object); // 0x1b NEW_2
	var_5_object = var_36_object; // 0x1c Mov
	func_160(); // 0x1f NEW_2
	var_42_object = Obj(); // 0x21 PushV
	var_42_object = var_5_object; // 0x22 Mov
	func_85(var_42_object); // 0x23 NEW_2
	var_56_string = "cs_b11q01.mot"; // 0x25 PushS
	CameraPlay(var_56_string); // 0x26 Func
	CameraWaitForPlayFinish(); // 0x28 Func
	var_57_object = Obj(); // 0x2a PushV
	var_57_object = var_5_object; // 0x2b Mov
	func_108(var_57_object); // 0x2c NEW_2
	CameraSwitchToNormal(); // 0x2e Func
	func_165(); // 0x31 NEW_2
	RemoveActor(var_4_object); // 0x33 Func
	sync(); // 0x35 Func
	var_70_object = Obj(); var_71_object = Obj(); var_72_string = ""; var_73_string = ""; var_74_string = ""; // 0x37 PushV
	var_75_object = Obj(); // 0x38 PushV
	func_128(var_75_object); // 0x39 NEW_2
	var_71_object = var_75_object; // 0x3a Mov
	var_72_string = "pt_Starshina"; // 0x3c MovS
	var_73_string = "pers_starshina_fight"; // 0x3d MovS
	var_74_string = "b11q01_starshina.xml"; // 0x3e MovS
	func_134(var_70_object, var_71_object, var_72_string, var_73_string, var_74_string); // 0x3f NEW_2
	var_0_object = var_70_object; // 0x40 TMov
	return 4; // 0x42 Return
}


task_0_event_6(var_0_object, var_1_object)
{
	var_2_object = var_0_object; // 0x45 PushT
	if(var_2_object == 0) goto Label_73; // 0x46 JumpB
	RemoveActor(var_0_object); // 0x47 Func
	
Label_73:
	var_3_object = var_1_object; // 0x49 PushT
	if(var_3_object == 0) goto Label_77; // 0x4a JumpB
	RemoveActor(var_1_object); // 0x4b Func
	
Label_77:
	return 0; // 0x4d Return
}


main(var_0_object, var_1_object)
{
	
Label_0:
	Hold(); // 0x0 Func
	goto Label_0; // 0x2 Jump
}


func_128(var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj(); // 0x80 PushV
	self(var_13_object); // 0x81 Func
	var_11_object = var_13_object; // 0x83 Mov
	return 2; // 0x84 Return
}


func_160()
{
	var_40_float = 0.5; // 0xa0 PushF
	var_41_float = 0.886; // 0xa1 PushF
	SetSepia(var_40_float, var_41_float); // 0xa2 Func
	return 0; // 0xa4 Return
}


func_165()
{
	var_68_int = 0; // 0xa5 PushI
	var_69_int = 0; // 0xa6 PushI
	SetSepia(var_68_int, var_69_int); // 0xa7 Func
	return 0; // 0xa9 Return
}


func_134(var_6_object, var_7_object, var_8_string, var_9_string, var_10_string)
{
	var_14_bool = 0; var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_object = Obj(); var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_object = Obj(); // 0x86 PushV
	GetLocator(var_8_string, var_18_bool, var_19_cvector, var_20_cvector); // 0x87 ObjFunc
	var_22_bool = var_18_bool == 0; // 0x89 Not
	if(var_22_bool == 0) goto Label_147; // 0x8a JumpB
	var_23_string = "Locator "; // 0x8b PushS
	var_24_int = var_23_string + var_8_string; // 0x8c Add
	var_25_string = " doesn't exist"; // 0x8d PushS
	var_26_int = var_24_int + var_25_string; // 0x8e Add
	Trace(var_26_int); // 0x8f Func
	var_21_object = 0; // 0x91 SetNull
	goto Label_149; // 0x92 Jump
	
Label_149:
	var_6_object = var_21_object; // 0x95 Mov
	return 8; // 0x96 Return
	
Label_147:
	AddActor(var_21_object, var_9_string, var_7_object, var_19_cvector, var_20_cvector, var_10_string); // 0x93 Func
}


func_108(var_57_object)
{
	var_58_int = 0; var_59_int = 0; // 0x6c PushV
	var_60_bool = var_57_object == 0; // 0x6d Not
	if(var_60_bool == 0) goto Label_112; // 0x6e JumpB
	return 2; // 0x6f Return
	
Label_112:
	var_61_string = "noaccess"; // 0x70 PushS
	GetProperty(var_61_string, var_59_int); // 0x71 ObjFunc
	var_62_int = 1; // 0x73 PushI
	var_63_bool = var_59_int > var_62_int; // 0x74 GT
	if(var_63_bool == 0) goto Label_124; // 0x75 JumpB
	var_64_string = "noaccess"; // 0x76 PushS
	var_65_int = 1; // 0x77 PushI
	var_66_int = var_59_int - var_65_int; // 0x78 Sub
	SetProperty(var_64_string, var_66_int); // 0x79 ObjFunc
	goto Label_127; // 0x7b Jump
	
Label_127:
	return 2; // 0x7f Return
	
Label_124:
	var_67_string = "noaccess"; // 0x7c PushS
	RemoveProperty(var_67_string); // 0x7d ObjFunc
}


func_78(var_36_object)
{
	var_37_object = Obj(); var_38_object = Obj(); // 0x4e PushV
	var_39_string = "player"; // 0x4f PushS
	FindActor(var_38_object, var_39_string); // 0x50 Func
	var_36_object = var_38_object; // 0x52 Mov
	return 2; // 0x53 Return
}


func_85(var_42_object)
{
	var_43_bool = 0; var_44_int = 0; var_45_bool = 0; var_46_int = 0; // 0x55 PushV
	var_47_bool = var_42_object == 0; // 0x56 Not
	if(var_47_bool == 0) goto Label_89; // 0x57 JumpB
	return 4; // 0x58 Return
	
Label_89:
	var_48_string = "noaccess"; // 0x59 PushS
	HasProperty(var_48_string, var_45_bool); // 0x5a ObjFunc
	var_49_bool = var_45_bool; // 0x5c Push
	if(var_49_bool == 0) goto Label_103; // 0x5d JumpB
	var_50_string = "noaccess"; // 0x5e PushS
	GetProperty(var_50_string, var_46_int); // 0x5f ObjFunc
	var_51_string = "noaccess"; // 0x61 PushS
	var_52_int = 1; // 0x62 PushI
	var_53_int = var_46_int + var_52_int; // 0x63 Add
	SetProperty(var_51_string, var_53_int); // 0x64 ObjFunc
	goto Label_107; // 0x66 Jump
	
Label_107:
	return 4; // 0x6b Return
	
Label_103:
	var_54_string = "noaccess"; // 0x67 PushS
	var_55_int = 1; // 0x68 PushI
	SetProperty(var_54_string, var_55_int); // 0x69 ObjFunc
}


func_152(var_27_object, var_28_object, var_29_string, var_30_string)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x98 PushV
	var_34_cvector = CVector(0.0, 0.0, 0.0); // 0x99 PushVec
	var_35_cvector = CVector(0.0, 0.0, 1.0); // 0x9a PushVec
	AddScriptedActor(var_33_object, var_29_string, var_30_string, var_28_object, var_34_cvector, var_35_cvector); // 0x9b Func
	var_27_object = var_33_object; // 0x9d Mov
	return 2; // 0x9e Return
}


