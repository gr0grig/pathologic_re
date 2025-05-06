task_0_event_24(var_0_int)
{
	CameraSwitchToNormal(); // 0x88 Func
	return 0; // 0x8a Return
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_object = Obj(); var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj(); var_10_object = Obj(); var_11_object = Obj(); var_12_object = Obj(); var_13_object = Obj(); // 0x0 PushV
	var_14_string = "sobor"; // 0x1 PushS
	GetSceneByName(var_7_object, var_14_string); // 0x2 Func
	var_15_object = Obj(); // 0x4 PushV
	func_139(var_15_object); // 0x5 NEW_2
	var_8_object = var_15_object; // 0x6 Mov
	func_215(); // 0x9 NEW_2
	var_21_object = Obj(); // 0xb PushV
	var_21_object = var_8_object; // 0xc Mov
	func_146(var_21_object); // 0xd NEW_2
	var_35_object = Obj(); var_36_object = Obj(); var_37_string = ""; var_38_string = ""; // 0xf PushV
	var_36_object = var_7_object; // 0x10 Mov
	var_37_string = "cs_d12_sobor_aglaja"; // 0x11 MovS
	var_38_string = "cs_d12_aglaja.xml"; // 0x12 MovS
	func_195(var_35_object, var_36_object, var_37_string, var_38_string); // 0x13 NEW_2
	var_9_object = var_35_object; // 0x14 Mov
	var_43_object = Obj(); var_44_object = Obj(); var_45_string = ""; var_46_string = ""; // 0x16 PushV
	var_44_object = var_7_object; // 0x17 Mov
	var_45_string = "cs_d12_sobor_block"; // 0x18 MovS
	var_46_string = "cs_d12_block.xml"; // 0x19 MovS
	func_195(var_43_object, var_44_object, var_45_string, var_46_string); // 0x1a NEW_2
	var_10_object = var_43_object; // 0x1b Mov
	ForceGeometryLoad(); // 0x1d ObjFunc
	ForceGeometryLoad(); // 0x1f ObjFunc
	var_47_string = "cs_d12_sobor_aglaja_block.mot"; // 0x21 PushS
	CameraPlay(var_47_string); // 0x22 Func
	CameraWaitForPlayFinish(); // 0x24 Func
	var_48_object = var_9_object; // 0x26 Push
	if(var_48_object == 0) goto Label_42; // 0x27 JumpB
	RemoveActor(var_9_object); // 0x28 Func
	
Label_42:
	var_49_object = var_10_object; // 0x2a Push
	if(var_49_object == 0) goto Label_46; // 0x2b JumpB
	RemoveActor(var_10_object); // 0x2c Func
	
Label_46:
	var_50_bool = 0; // 0x2e PushV
	func_225(var_50_bool); // 0x2f NEW_2
	if(var_50_bool == 0) goto Label_69; // 0x31 JumpB
	var_55_object = Obj(); var_56_object = Obj(); var_57_string = ""; var_58_string = ""; // 0x32 PushV
	var_56_object = var_7_object; // 0x33 Mov
	var_57_string = "cs_d12_sobor_klara"; // 0x34 MovS
	var_58_string = "cs_d12_klara.xml"; // 0x35 MovS
	func_195(var_55_object, var_56_object, var_57_string, var_58_string); // 0x36 NEW_2
	var_11_object = var_55_object; // 0x37 Mov
	ForceGeometryLoad(); // 0x39 ObjFunc
	var_59_string = "cs_d12_sobor_klara.mot"; // 0x3b PushS
	CameraPlay(var_59_string); // 0x3c Func
	CameraWaitForPlayFinish(); // 0x3e Func
	var_60_object = var_11_object; // 0x40 Push
	if(var_60_object == 0) goto Label_68; // 0x41 JumpB
	RemoveActor(var_11_object); // 0x42 Func
	
Label_68:
	var_11_object = 0; // 0x44 SetNull
	
Label_69:
	var_61_bool = 0; // 0x45 PushV
	func_232(var_61_bool); // 0x46 NEW_2
	if(var_61_bool == 0) goto Label_92; // 0x48 JumpB
	var_66_object = Obj(); var_67_object = Obj(); var_68_string = ""; var_69_string = ""; // 0x49 PushV
	var_67_object = var_7_object; // 0x4a Mov
	var_68_string = "cs_d12_sobor_burah"; // 0x4b MovS
	var_69_string = "cs_d12_burah.xml"; // 0x4c MovS
	func_195(var_66_object, var_67_object, var_68_string, var_69_string); // 0x4d NEW_2
	var_12_object = var_66_object; // 0x4e Mov
	ForceGeometryLoad(); // 0x50 ObjFunc
	var_70_string = "cs_d12_sobor_burah.mot"; // 0x52 PushS
	CameraPlay(var_70_string); // 0x53 Func
	CameraWaitForPlayFinish(); // 0x55 Func
	var_71_object = var_12_object; // 0x57 Push
	if(var_71_object == 0) goto Label_91; // 0x58 JumpB
	RemoveActor(var_12_object); // 0x59 Func
	
Label_91:
	var_12_object = 0; // 0x5b SetNull
	
Label_92:
	var_72_object = Obj(); var_73_object = Obj(); var_74_string = ""; var_75_string = ""; // 0x5c PushV
	var_73_object = var_7_object; // 0x5d Mov
	var_74_string = "cs_d12_sobor_maria"; // 0x5e MovS
	var_75_string = "cs_d12_maria.xml"; // 0x5f MovS
	func_195(var_72_object, var_73_object, var_74_string, var_75_string); // 0x60 NEW_2
	var_13_object = var_72_object; // 0x61 Mov
	ForceGeometryLoad(); // 0x63 ObjFunc
	var_76_string = "cs_d12_sobor_maria.mot"; // 0x65 PushS
	CameraPlay(var_76_string); // 0x66 Func
	CameraWaitForPlayFinish(); // 0x68 Func
	var_77_object = Obj(); // 0x6a PushV
	var_77_object = var_8_object; // 0x6b Mov
	func_169(var_77_object); // 0x6c NEW_2
	func_220(); // 0x6f NEW_2
	CameraSwitchToNormal(); // 0x71 Func
	var_90_object = var_13_object; // 0x73 Push
	if(var_90_object == 0) goto Label_119; // 0x74 JumpB
	RemoveActor(var_13_object); // 0x75 Func
	
Label_119:
	var_91_bool = 0; var_92_string = ""; var_93_string = ""; // 0x77 PushV
	var_92_string = "quest_d12_01"; // 0x78 MovS
	var_93_string = "sobor_cutscene_end"; // 0x79 MovS
	func_203(var_91_bool, var_92_string, var_93_string); // 0x7a NEW_2
	var_97_object = Obj(); // 0x7c PushV
	func_189(var_97_object); // 0x7d NEW_2
	RemoveActor(var_97_object); // 0x7f Func
	return 14; // 0x81 Return
}


func_225(var_50_bool)
{
	var_51_int = 0; var_52_int = 0; // 0xe1 PushV
	var_53_string = "d12q01KlaraInSobor"; // 0xe2 PushS
	GetVariable(var_53_string, var_52_int); // 0xe3 Func
	var_54_int = 0; // 0xe5 PushI
	var_50_bool = var_52_int != var_54_int; // 0xe6 Neq2
	return 2; // 0xe7 Return
}


func_195(var_35_object, var_36_object, var_37_string, var_38_string)
{
	var_39_object = Obj(); var_40_object = Obj(); // 0xc3 PushV
	var_41_cvector = CVector(0.0, 0.0, 0.0); // 0xc4 PushVec
	var_42_cvector = CVector(0.0, 0.0, 1.0); // 0xc5 PushVec
	AddActor(var_40_object, var_37_string, var_36_object, var_41_cvector, var_42_cvector, var_38_string); // 0xc6 Func
	var_35_object = var_40_object; // 0xc8 Mov
	return 2; // 0xc9 Return
}


func_232(var_61_bool)
{
	var_62_int = 0; var_63_int = 0; // 0xe8 PushV
	var_64_string = "d12q01BurahInSobor"; // 0xe9 PushS
	GetVariable(var_64_string, var_63_int); // 0xea Func
	var_65_int = 0; // 0xec PushI
	var_61_bool = var_63_int != var_65_int; // 0xed Neq2
	return 2; // 0xee Return
}


func_169(var_77_object)
{
	var_78_int = 0; var_79_int = 0; // 0xa9 PushV
	var_80_bool = var_77_object == 0; // 0xaa Not
	if(var_80_bool == 0) goto Label_173; // 0xab JumpB
	return 2; // 0xac Return
	
Label_173:
	var_81_string = "noaccess"; // 0xad PushS
	GetProperty(var_81_string, var_79_int); // 0xae ObjFunc
	var_82_int = 1; // 0xb0 PushI
	var_83_bool = var_79_int > var_82_int; // 0xb1 GT
	if(var_83_bool == 0) goto Label_185; // 0xb2 JumpB
	var_84_string = "noaccess"; // 0xb3 PushS
	var_85_int = 1; // 0xb4 PushI
	var_86_int = var_79_int - var_85_int; // 0xb5 Sub
	SetProperty(var_84_string, var_86_int); // 0xb6 ObjFunc
	goto Label_188; // 0xb8 Jump
	
Label_188:
	return 2; // 0xbc Return
	
Label_185:
	var_87_string = "noaccess"; // 0xb9 PushS
	RemoveProperty(var_87_string); // 0xba ObjFunc
}


func_139(var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj(); // 0x8b PushV
	var_18_string = "player"; // 0x8c PushS
	FindActor(var_17_object, var_18_string); // 0x8d Func
	var_15_object = var_17_object; // 0x8f Mov
	return 2; // 0x90 Return
}


func_203(var_91_bool, var_92_string, var_93_string)
{
	var_94_object = Obj(); var_95_object = Obj(); // 0xcb PushV
	FindActor(var_95_object, var_92_string); // 0xcc Func
	var_96_bool = var_95_object == 0; // 0xce NullEq
	if(var_96_bool == 0) goto Label_210; // 0xcf JumpB
	var_91_bool = 0; // 0xd0 MovB
	return 2; // 0xd1 Return
	
Label_210:
	Trigger(var_95_object, var_93_string); // 0xd2 Func
	var_91_bool = 1; // 0xd4 MovB
	return 2; // 0xd5 Return
}


func_146(var_21_object)
{
	var_22_bool = 0; var_23_int = 0; var_24_bool = 0; var_25_int = 0; // 0x92 PushV
	var_26_bool = var_21_object == 0; // 0x93 Not
	if(var_26_bool == 0) goto Label_150; // 0x94 JumpB
	return 4; // 0x95 Return
	
Label_150:
	var_27_string = "noaccess"; // 0x96 PushS
	HasProperty(var_27_string, var_24_bool); // 0x97 ObjFunc
	var_28_bool = var_24_bool; // 0x99 Push
	if(var_28_bool == 0) goto Label_164; // 0x9a JumpB
	var_29_string = "noaccess"; // 0x9b PushS
	GetProperty(var_29_string, var_25_int); // 0x9c ObjFunc
	var_30_string = "noaccess"; // 0x9e PushS
	var_31_int = 1; // 0x9f PushI
	var_32_int = var_25_int + var_31_int; // 0xa0 Add
	SetProperty(var_30_string, var_32_int); // 0xa1 ObjFunc
	goto Label_168; // 0xa3 Jump
	
Label_168:
	return 4; // 0xa8 Return
	
Label_164:
	var_33_string = "noaccess"; // 0xa4 PushS
	var_34_int = 1; // 0xa5 PushI
	SetProperty(var_33_string, var_34_int); // 0xa6 ObjFunc
}


func_215()
{
	var_19_float = 0.5; // 0xd7 PushF
	var_20_float = 0.886; // 0xd8 PushF
	SetSepia(var_19_float, var_20_float); // 0xd9 Func
	return 0; // 0xdb Return
}


func_220()
{
	var_88_int = 0; // 0xdc PushI
	var_89_int = 0; // 0xdd PushI
	SetSepia(var_88_int, var_89_int); // 0xde Func
	return 0; // 0xe0 Return
}


func_189(var_97_object)
{
	var_98_object = Obj(); var_99_object = Obj(); // 0xbd PushV
	self(var_99_object); // 0xbe Func
	var_97_object = var_99_object; // 0xc0 Mov
	return 2; // 0xc1 Return
}


