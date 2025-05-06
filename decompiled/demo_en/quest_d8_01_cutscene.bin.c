task_0_event_24(var_0_int)
{
	CameraSwitchToNormal(); // 0xba Func
	return 0; // 0xbc Return
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_object = Obj(); var_6_bool = 0; var_7_cvector = CVector(0,0,0); var_8_cvector = CVector(0,0,0); var_9_float = 0; var_10_object = Obj(); var_11_object = Obj(); var_12_int = 0; var_13_int = 0; var_14_object = Obj(); var_15_object = Obj(); var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_float = 0; // 0x0 PushV
	var_20_string = "boiny"; // 0x1 PushS
	GetSceneByName(var_10_object, var_20_string); // 0x2 Func
	var_21_object = Obj(); // 0x4 PushV
	func_245(var_21_object); // 0x5 NEW_2
	var_11_object = var_21_object; // 0x6 Mov
	var_24_object = Obj(); var_25_object = Obj(); var_26_string = ""; var_27_string = ""; // 0x8 PushV
	var_25_object = var_10_object; // 0x9 Mov
	var_26_string = "cs_d8q01_bakalavr"; // 0xa MovS
	var_27_string = "cs_d8q01_bakalavr.xml"; // 0xb MovS
	func_251(var_24_object, var_25_object, var_26_string, var_27_string); // 0xc NEW_2
	add(var_24_object); // 0xe ObjFunc
	var_32_object = Obj(); var_33_object = Obj(); var_34_string = ""; var_35_string = ""; // 0x10 PushV
	var_33_object = var_10_object; // 0x11 Mov
	var_34_string = "cs_d8q01_butcher1"; // 0x12 MovS
	var_35_string = "cs_play_all.bin"; // 0x13 MovS
	func_259(var_32_object, var_33_object, var_34_string, var_35_string); // 0x14 NEW_2
	add(var_32_object); // 0x16 ObjFunc
	var_40_object = Obj(); var_41_object = Obj(); var_42_string = ""; var_43_string = ""; // 0x18 PushV
	var_41_object = var_10_object; // 0x19 Mov
	var_42_string = "cs_d8q01_butcher2"; // 0x1a MovS
	var_43_string = "cs_play_all.bin"; // 0x1b MovS
	func_259(var_40_object, var_41_object, var_42_string, var_43_string); // 0x1c NEW_2
	add(var_40_object); // 0x1e ObjFunc
	var_44_object = Obj(); var_45_object = Obj(); var_46_string = ""; var_47_string = ""; // 0x20 PushV
	var_45_object = var_10_object; // 0x21 Mov
	var_46_string = "cs_d8q01_butcher3"; // 0x22 MovS
	var_47_string = "cs_play_all.bin"; // 0x23 MovS
	func_259(var_44_object, var_45_object, var_46_string, var_47_string); // 0x24 NEW_2
	add(var_44_object); // 0x26 ObjFunc
	var_48_object = Obj(); var_49_object = Obj(); var_50_string = ""; var_51_string = ""; // 0x28 PushV
	var_49_object = var_10_object; // 0x29 Mov
	var_50_string = "cs_d8q01_butcher4"; // 0x2a MovS
	var_51_string = "cs_play_all.bin"; // 0x2b MovS
	func_259(var_48_object, var_49_object, var_50_string, var_51_string); // 0x2c NEW_2
	add(var_48_object); // 0x2e ObjFunc
	var_52_object = Obj(); var_53_object = Obj(); var_54_string = ""; var_55_string = ""; // 0x30 PushV
	var_53_object = var_10_object; // 0x31 Mov
	var_54_string = "cs_d8q01_butcher5"; // 0x32 MovS
	var_55_string = "cs_play_all.bin"; // 0x33 MovS
	func_259(var_52_object, var_53_object, var_54_string, var_55_string); // 0x34 NEW_2
	add(var_52_object); // 0x36 ObjFunc
	size(var_12_int); // 0x38 ObjFunc
	var_13_int = 0; // 0x3a MovI
	
Label_59:
	var_56_bool = var_13_int < var_12_int; // 0x3b LT
	if(var_56_bool == 0) goto Label_69; // 0x3c JumpB
	get(var_14_object, var_13_int); // 0x3d ObjFunc
	ForceGeometryLoad(); // 0x3f ObjFunc
	var_14_object = 0; // 0x41 SetNull
	var_57_int = 1; // 0x42 PushI
	var_13_int = var_13_int + var_57_int; // 0x43 Add2
	goto Label_59; // 0x44 Jump
	
Label_69:
	var_58_object = Obj(); var_59_object = Obj(); var_60_string = ""; var_61_string = ""; // 0x45 PushV
	var_59_object = var_10_object; // 0x46 Mov
	var_60_string = "cs_d8q01_soldier1"; // 0x47 MovS
	var_61_string = "cs_play_all.bin"; // 0x48 MovS
	func_259(var_58_object, var_59_object, var_60_string, var_61_string); // 0x49 NEW_2
	add(var_58_object); // 0x4b ObjFunc
	var_62_object = Obj(); var_63_object = Obj(); var_64_string = ""; var_65_string = ""; // 0x4d PushV
	var_63_object = var_10_object; // 0x4e Mov
	var_64_string = "cs_d8q01_soldier2"; // 0x4f MovS
	var_65_string = "cs_play_all.bin"; // 0x50 MovS
	func_259(var_62_object, var_63_object, var_64_string, var_65_string); // 0x51 NEW_2
	add(var_62_object); // 0x53 ObjFunc
	var_66_object = Obj(); var_67_object = Obj(); var_68_string = ""; var_69_string = ""; // 0x55 PushV
	var_67_object = var_10_object; // 0x56 Mov
	var_68_string = "cs_d8q01_soldier3"; // 0x57 MovS
	var_69_string = "cs_play_all.bin"; // 0x58 MovS
	func_259(var_66_object, var_67_object, var_68_string, var_69_string); // 0x59 NEW_2
	add(var_66_object); // 0x5b ObjFunc
	var_70_object = Obj(); var_71_object = Obj(); var_72_string = ""; var_73_string = ""; // 0x5d PushV
	var_71_object = var_10_object; // 0x5e Mov
	var_72_string = "cs_d8q01_soldier4"; // 0x5f MovS
	var_73_string = "cs_play_all.bin"; // 0x60 MovS
	func_259(var_70_object, var_71_object, var_72_string, var_73_string); // 0x61 NEW_2
	add(var_70_object); // 0x63 ObjFunc
	var_74_object = Obj(); var_75_object = Obj(); var_76_string = ""; var_77_string = ""; // 0x65 PushV
	var_75_object = var_10_object; // 0x66 Mov
	var_76_string = "cs_d8q01_Block"; // 0x67 MovS
	var_77_string = "cs_d8q01_Block.xml"; // 0x68 MovS
	func_251(var_74_object, var_75_object, var_76_string, var_77_string); // 0x69 NEW_2
	add(var_74_object); // 0x6b ObjFunc
	var_78_object = Obj(); // 0x6d PushV
	func_189(var_78_object); // 0x6e NEW_2
	var_15_object = var_78_object; // 0x6f Mov
	func_300(); // 0x72 NEW_2
	var_84_object = Obj(); // 0x74 PushV
	var_84_object = var_15_object; // 0x75 Mov
	func_196(var_84_object); // 0x76 NEW_2
	var_98_string = "space"; // 0x78 PushS
	RegisterKeyCallback(var_98_string); // 0x79 Func
	var_99_string = "cs_d8q01.mot"; // 0x7b PushS
	CameraPlay(var_99_string); // 0x7c Func
	CameraWaitForPlayFinish(); // 0x7e Func
	var_100_string = "space"; // 0x80 PushS
	UnregisterKeyCallback(var_100_string); // 0x81 Func
	var_101_object = Obj(); // 0x83 PushV
	var_101_object = var_15_object; // 0x84 Mov
	func_219(var_101_object); // 0x85 NEW_2
	func_305(); // 0x88 NEW_2
	CameraSwitchToNormal(); // 0x8a Func
	var_114_object = Obj(); // 0x8c PushV
	var_114_object = var_11_object; // 0x8d Mov
	func_279(var_114_object); // 0x8e NEW_2
	var_11_object = 0; // 0x90 SetNull
	var_125_bool = 0; var_126_string = ""; var_127_string = ""; // 0x91 PushV
	var_126_string = "quest_d8_01"; // 0x92 MovS
	var_127_string = "completed"; // 0x93 MovS
	func_267(var_125_bool, var_126_string, var_127_string); // 0x94 NEW_2
	sync(); // 0x96 Func
	var_131_string = "uprava_admin"; // 0x98 PushS
	GetSceneByName(var_10_object, var_131_string); // 0x99 Func
	var_132_string = "uprava_admin_army_danko.isc"; // 0x9b PushS
	ReplaceScene(var_10_object, var_132_string); // 0x9c Func
	sync(); // 0x9e Func
	var_133_string = "uprava_admin"; // 0xa0 PushS
	GetSceneByName(var_10_object, var_133_string); // 0xa1 Func
	var_134_string = "pt_d8q01_boiny_teleport"; // 0xa3 PushS
	GetLocator(var_134_string, var_16_bool, var_17_cvector, var_18_cvector); // 0xa4 ObjFunc
	Teleport(var_15_object, var_10_object, var_17_cvector, var_18_cvector); // 0xa6 Func
	GetGameTime(var_19_float); // 0xa8 Func
	var_135_int = 206; // 0xaa PushI
	var_136_int = var_135_int - var_19_float; // 0xab Sub
	AdvanceGameTime(var_136_int); // 0xac Func
	sync(); // 0xae Func
	var_137_object = Obj(); // 0xb0 PushV
	func_239(var_137_object); // 0xb1 NEW_2
	RemoveActor(var_137_object); // 0xb3 Func
	return 20; // 0xb5 Return
}


func_259(var_32_object, var_33_object, var_34_string, var_35_string)
{
	var_36_object = Obj(); var_37_object = Obj(); // 0x103 PushV
	var_38_cvector = CVector(0.0, 0.0, 0.0); // 0x104 PushVec
	var_39_cvector = CVector(0.0, 0.0, 1.0); // 0x105 PushVec
	AddScriptedActor(var_37_object, var_34_string, var_35_string, var_33_object, var_38_cvector, var_39_cvector); // 0x106 Func
	var_32_object = var_37_object; // 0x108 Mov
	return 2; // 0x109 Return
}


func_196(var_84_object)
{
	var_85_bool = 0; var_86_int = 0; var_87_bool = 0; var_88_int = 0; // 0xc4 PushV
	var_89_bool = var_84_object == 0; // 0xc5 Not
	if(var_89_bool == 0) goto Label_200; // 0xc6 JumpB
	return 4; // 0xc7 Return
	
Label_200:
	var_90_string = "noaccess"; // 0xc8 PushS
	HasProperty(var_90_string, var_87_bool); // 0xc9 ObjFunc
	var_91_bool = var_87_bool; // 0xcb Push
	if(var_91_bool == 0) goto Label_214; // 0xcc JumpB
	var_92_string = "noaccess"; // 0xcd PushS
	GetProperty(var_92_string, var_88_int); // 0xce ObjFunc
	var_93_string = "noaccess"; // 0xd0 PushS
	var_94_int = 1; // 0xd1 PushI
	var_95_int = var_88_int + var_94_int; // 0xd2 Add
	SetProperty(var_93_string, var_95_int); // 0xd3 ObjFunc
	goto Label_218; // 0xd5 Jump
	
Label_218:
	return 4; // 0xda Return
	
Label_214:
	var_96_string = "noaccess"; // 0xd6 PushS
	var_97_int = 1; // 0xd7 PushI
	SetProperty(var_96_string, var_97_int); // 0xd8 ObjFunc
}


func_267(var_125_bool, var_126_string, var_127_string)
{
	var_128_object = Obj(); var_129_object = Obj(); // 0x10b PushV
	FindActor(var_129_object, var_126_string); // 0x10c Func
	var_130_bool = var_129_object == 0; // 0x10e NullEq
	if(var_130_bool == 0) goto Label_274; // 0x10f JumpB
	var_125_bool = 0; // 0x110 MovB
	return 2; // 0x111 Return
	
Label_274:
	Trigger(var_129_object, var_127_string); // 0x112 Func
	var_125_bool = 1; // 0x114 MovB
	return 2; // 0x115 Return
}


func_300()
{
	var_82_float = 0.5; // 0x12c PushF
	var_83_float = 0.886; // 0x12d PushF
	SetSepia(var_82_float, var_83_float); // 0x12e Func
	return 0; // 0x130 Return
}


func_219(var_101_object)
{
	var_102_int = 0; var_103_int = 0; // 0xdb PushV
	var_104_bool = var_101_object == 0; // 0xdc Not
	if(var_104_bool == 0) goto Label_223; // 0xdd JumpB
	return 2; // 0xde Return
	
Label_223:
	var_105_string = "noaccess"; // 0xdf PushS
	GetProperty(var_105_string, var_103_int); // 0xe0 ObjFunc
	var_106_int = 1; // 0xe2 PushI
	var_107_bool = var_103_int > var_106_int; // 0xe3 GT
	if(var_107_bool == 0) goto Label_235; // 0xe4 JumpB
	var_108_string = "noaccess"; // 0xe5 PushS
	var_109_int = 1; // 0xe6 PushI
	var_110_int = var_103_int - var_109_int; // 0xe7 Sub
	SetProperty(var_108_string, var_110_int); // 0xe8 ObjFunc
	goto Label_238; // 0xea Jump
	
Label_238:
	return 2; // 0xee Return
	
Label_235:
	var_111_string = "noaccess"; // 0xeb PushS
	RemoveProperty(var_111_string); // 0xec ObjFunc
}


func_239(var_137_object)
{
	var_138_object = Obj(); var_139_object = Obj(); // 0xef PushV
	self(var_139_object); // 0xf0 Func
	var_137_object = var_139_object; // 0xf2 Mov
	return 2; // 0xf3 Return
}


func_305()
{
	var_112_int = 0; // 0x131 PushI
	var_113_int = 0; // 0x132 PushI
	SetSepia(var_112_int, var_113_int); // 0x133 Func
	return 0; // 0x135 Return
}


func_245(var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj(); // 0xf5 PushV
	CreateObjectVector(var_23_object); // 0xf6 Func
	var_21_object = var_23_object; // 0xf8 Mov
	return 2; // 0xf9 Return
}


func_279(var_114_object)
{
	var_115_int = 0; var_116_int = 0; var_117_object = Obj(); var_118_int = 0; var_119_int = 0; var_120_object = Obj(); // 0x117 PushV
	var_121_object = var_114_object; // 0x118 Push
	if(var_121_object == 0) goto Label_299; // 0x119 JumpB
	size(var_118_int); // 0x11a ObjFunc
	var_119_int = 0; // 0x11c MovI
	
Label_285:
	var_122_bool = var_119_int < var_118_int; // 0x11d LT
	if(var_122_bool == 0) goto Label_297; // 0x11e JumpB
	get(var_120_object, var_119_int); // 0x11f ObjFunc
	var_123_object = var_120_object; // 0x121 Push
	if(var_123_object == 0) goto Label_293; // 0x122 JumpB
	RemoveActor(var_120_object); // 0x123 Func
	
Label_293:
	var_120_object = 0; // 0x125 SetNull
	var_124_int = 1; // 0x126 PushI
	var_119_int = var_119_int + var_124_int; // 0x127 Add2
	goto Label_285; // 0x128 Jump
	
Label_297:
	clear(); // 0x129 ObjFunc
	
Label_299:
	return 6; // 0x12b Return
}


func_251(var_24_object, var_25_object, var_26_string, var_27_string)
{
	var_28_object = Obj(); var_29_object = Obj(); // 0xfb PushV
	var_30_cvector = CVector(0.0, 0.0, 0.0); // 0xfc PushVec
	var_31_cvector = CVector(0.0, 0.0, 1.0); // 0xfd PushVec
	AddActor(var_29_object, var_26_string, var_25_object, var_30_cvector, var_31_cvector, var_27_string); // 0xfe Func
	var_24_object = var_29_object; // 0x100 Mov
	return 2; // 0x101 Return
}


func_189(var_78_object)
{
	var_79_object = Obj(); var_80_object = Obj(); // 0xbd PushV
	var_81_string = "player"; // 0xbe PushS
	FindActor(var_80_object, var_81_string); // 0xbf Func
	var_78_object = var_80_object; // 0xc1 Mov
	return 2; // 0xc2 Return
}


