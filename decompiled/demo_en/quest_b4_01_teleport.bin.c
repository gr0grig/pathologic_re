main()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_cvector = CVector(0,0,0); var_3_cvector = CVector(0,0,0); var_4_bool = 0; var_5_float = 0; var_6_int = 0; var_7_int = 0; var_8_object = Obj(); var_9_int = 0; var_10_bool = 0; var_11_int = 0; var_12_float = 0; var_13_float = 0; var_14_float = 0; var_15_object = Obj(); var_16_object = Obj(); var_17_object = Obj(); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_bool = 0; var_21_float = 0; var_22_int = 0; var_23_int = 0; var_24_object = Obj(); var_25_int = 0; var_26_bool = 0; var_27_int = 0; var_28_float = 0; var_29_float = 0; var_30_float = 0; var_31_object = Obj(); // 0x0 PushV
	var_32_float = 2.5; // 0x1 PushF
	Sleep(var_32_float); // 0x2 Func
	var_33_float = 0; var_34_float = 0; var_35_float = 0; // 0x4 PushV
	var_33_float = 0; // 0x5 MovI
	var_34_float = 1; // 0x6 MovI
	var_35_float = 2.0; // 0x7 MovF
	func_267(var_34_float, var_35_float); // 0x8 NEW_2
	var_47_string = "player"; // 0xa PushS
	FindActor(var_16_object, var_47_string); // 0xb Func
	var_48_object = var_16_object; // 0xd Push
	if(var_48_object == 0) goto Label_124; // 0xe JumpB
	var_49_string = "factory"; // 0xf PushS
	GetSceneByName(var_17_object, var_49_string); // 0x10 Func
	var_50_string = "pt_b4q01_teleport"; // 0x12 PushS
	GetLocator(var_50_string, var_20_bool, var_18_cvector, var_19_cvector); // 0x13 ObjFunc
	Teleport(var_16_object, var_17_object, var_18_cvector, var_19_cvector); // 0x15 Func
	GetGameTime(var_21_float); // 0x17 Func
	var_51_int = 110; // 0x19 PushI
	var_52_int = var_51_int - var_21_float; // 0x1a Sub
	AdvanceGameTime(var_52_int); // 0x1b Func
	var_53_int = 0; // 0x1d PushI
	GetItemCount(var_22_int, var_53_int); // 0x1e ObjFunc
	var_23_int = var_22_int; // 0x20 Mov
	
Label_33:
	var_54_int = var_23_int; // 0x21 Push
	if(var_54_int == 0) goto Label_65; // 0x22 JumpB
	var_55_int = 1; // 0x23 PushI
	var_56_int = var_23_int - var_55_int; // 0x24 Sub
	var_57_int = 0; // 0x25 PushI
	GetItem(var_24_object, var_56_int, var_57_int); // 0x26 ObjFunc
	GetItemID(var_25_int); // 0x28 ObjFunc
	var_58_string = "Weapon"; // 0x2a PushS
	HasInvItemProperty(var_26_bool, var_25_int, var_58_string); // 0x2b Func
	var_59_bool = var_26_bool == 0; // 0x2d Not
	if(var_59_bool == 0) goto Label_53; // 0x2e JumpB
	var_60_string = "Ammo"; // 0x2f PushS
	HasInvItemProperty(var_26_bool, var_25_int, var_60_string); // 0x30 Func
	var_61_bool = var_26_bool == 0; // 0x32 Not
	if(var_61_bool == 0) goto Label_53; // 0x33 JumpB
	goto Label_62; // 0x34 Jump
	
Label_62:
	var_62_int = -1; // 0x3e PushI
	var_23_int = var_23_int + var_62_int; // 0x3f Add2
	goto Label_33; // 0x40 Jump
	
Label_53:
	var_63_int = 1; // 0x35 PushI
	var_64_int = var_23_int - var_63_int; // 0x36 Sub
	GetItemAmount(var_27_int, var_64_int); // 0x37 ObjFunc
	var_65_int = 1; // 0x39 PushI
	var_66_int = var_23_int - var_65_int; // 0x3a Sub
	RemoveItem(var_66_int, var_27_int); // 0x3b ObjFunc
	var_24_object = 0; // 0x3d SetNull
	
Label_65:
	SelectWeapon(); // 0x41 ObjFunc
	var_67_string = "health"; // 0x43 PushS
	var_68_float = 0.3; // 0x44 PushF
	SetProperty(var_67_string, var_68_float); // 0x45 ObjFunc
	var_69_string = "tiredness"; // 0x47 PushS
	GetProperty(var_69_string, var_28_float); // 0x48 ObjFunc
	var_70_float = 0.8; // 0x4a PushF
	var_71_bool = var_28_float > var_70_float; // 0x4b GT
	if(var_71_bool == 0) goto Label_86; // 0x4c JumpB
	var_72_string = "tiredness"; // 0x4d PushS
	var_73_float = 0.8; // 0x4e PushF
	SetProperty(var_72_string, var_73_float); // 0x4f ObjFunc
	var_74_float = 0; // 0x51 PushV
	var_75_float = 0.8; // 0x52 PushF
	var_74_float = var_75_float - var_28_float; // 0x53 Sub2
	func_247(var_74_float); // 0x54 NEW_2
	
Label_86:
	var_79_string = "hunger"; // 0x56 PushS
	GetProperty(var_79_string, var_29_float); // 0x57 ObjFunc
	var_80_float = 0.8; // 0x59 PushF
	var_81_bool = var_29_float > var_80_float; // 0x5a GT
	if(var_81_bool == 0) goto Label_96; // 0x5b JumpB
	var_82_string = "hunger"; // 0x5c PushS
	var_83_float = 0.8; // 0x5d PushF
	SetProperty(var_82_string, var_83_float); // 0x5e ObjFunc
	
Label_96:
	var_84_string = "reputation"; // 0x60 PushS
	GetProperty(var_84_string, var_30_float); // 0x61 ObjFunc
	var_85_float = 0.2; // 0x63 PushF
	var_86_bool = var_30_float > var_85_float; // 0x64 GT
	if(var_86_bool == 0) goto Label_108; // 0x65 JumpB
	var_87_bool = 0; var_88_object = Obj(); var_89_float = 0; // 0x66 PushV
	var_88_object = var_16_object; // 0x67 Mov
	var_90_float = 0.2; // 0x68 PushF
	var_89_float = var_90_float - var_30_float; // 0x69 Sub2
	func_212(var_87_bool, var_88_object, var_89_float); // 0x6a NEW_2
	
Label_108:
	var_126_string = ""; var_127_bool = 0; // 0x6c PushV
	var_126_string = "ifactory@door1"; // 0x6d MovS
	var_127_bool = 1; // 0x6e MovB
	func_195(var_126_string, var_127_bool); // 0x6f NEW_2
	var_136_string = "ifactory_grid_door"; // 0x71 PushS
	FindActor(var_31_object, var_136_string); // 0x72 Func
	var_137_string = "locked"; // 0x74 PushS
	var_138_bool = 1; // 0x75 PushB
	SetProperty(var_137_string, var_138_bool); // 0x76 ObjFunc
	Close(); // 0x78 ObjFunc
	var_31_object = 0; // 0x7a SetNull
	var_17_object = 0; // 0x7b SetNull
	
Label_124:
	sync(); // 0x7c Func
	var_139_string = ""; var_140_bool = 0; // 0x7e PushV
	var_139_string = "warehouse_gangster@door1"; // 0x7f MovS
	var_140_bool = 0; // 0x80 MovB
	func_195(var_139_string, var_140_bool); // 0x81 NEW_2
	var_141_float = 0; var_142_float = 0; var_143_float = 0; // 0x83 PushV
	var_141_float = 1; // 0x84 MovI
	var_142_float = 0; // 0x85 MovI
	var_143_float = 1.0; // 0x86 MovF
	func_267(var_142_float, var_143_float); // 0x87 NEW_2
	var_144_object = Obj(); // 0x89 PushV
	func_178(var_144_object); // 0x8a NEW_2
	RemoveActor(var_144_object); // 0x8c Func
	return 32; // 0x8e Return
}


func_257(var_95_float)
{
	var_96_object = Obj(); var_97_object = Obj(); // 0x101 PushV
	CreateFloatVector(var_97_object); // 0x102 Func
	add(var_95_float); // 0x104 ObjFunc
	var_98_int = 16; // 0x106 PushI
	SendWorldWndMessage(var_98_int, var_97_object); // 0x107 Func
	return 2; // 0x109 Return
}


func_195(var_126_string, var_127_bool)
{
	var_128_object = Obj(); var_129_object = Obj(); // 0xc3 PushV
	FindActor(var_129_object, var_126_string); // 0xc4 Func
	var_130_bool = var_129_object == 0; // 0xc6 Not
	if(var_130_bool == 0) goto Label_207; // 0xc7 JumpB
	var_131_string = "Door "; // 0xc8 PushS
	var_132_int = var_131_string + var_126_string; // 0xc9 Add
	var_133_string = " not found"; // 0xca PushS
	var_134_int = var_132_int + var_133_string; // 0xcb Add
	Trace(var_134_int); // 0xcc Func
	goto Label_210; // 0xce Jump
	
Label_210:
	return 2; // 0xd2 Return
	
Label_207:
	var_135_string = "locked"; // 0xcf PushS
	SetProperty(var_135_string, var_127_bool); // 0xd0 ObjFunc
}


func_267(var_33_float, var_34_float)
{
	var_36_bool = 0; var_37_float = 0; var_38_float = 0; var_39_bool = 0; var_40_float = 0; var_41_float = 0; // 0x10b PushV
	var_39_bool = var_34_float > var_33_float; // 0x10c GT2
	var_42_int = var_34_float - var_33_float; // 0x10d Sub
	var_40_float = var_42_int / var_42_int; // 0x10e Div2
	
Label_271:
	var_43_bool = var_39_bool; // 0x10f Push
	if(var_43_bool == 0) goto Label_275; // 0x110 JumpB
	var_44_bool = var_33_float < var_34_float; // 0x111 LT
	goto Label_276; // 0x112 Jump
	
Label_276:
	if(var_44_bool == 0) goto Label_284; // 0x114 JumpB
	ModDarkenLevel(var_33_float); // 0x115 Func
	sync(var_41_float); // 0x117 Func
	var_45_float = var_41_float * var_40_float; // 0x119 Mult
	var_33_float = var_33_float + var_45_float; // 0x11a Add2
	goto Label_271; // 0x11b Jump
	
Label_284:
	ModDarkenLevel(var_34_float); // 0x11c Func
	return 6; // 0x11e Return
	
Label_275:
	var_46_bool = var_34_float < var_33_float; // 0x113 LT
}


func_144(var_107_bool, var_108_object, var_109_string)
{
	var_110_bool = 0; var_111_bool = 0; // 0x90 PushV
	var_112_string = "HasProperty"; // 0x91 PushS
	var_113_int = 2; // 0x92 PushI
	var_114_bool = IsFuncExist(var_108_object, var_112_string, var_113_int); // 0x93 FuncExist
	var_115_bool = var_114_bool == 0; // 0x94 Not
	if(var_115_bool == 0) goto Label_152; // 0x95 JumpB
	var_107_bool = 0; // 0x96 MovB
	return 2; // 0x97 Return
	
Label_152:
	HasProperty(var_109_string, var_111_bool); // 0x98 ObjFunc
	var_107_bool = var_111_bool; // 0x9a Mov
	return 2; // 0x9b Return
}


func_178(var_144_object)
{
	var_145_object = Obj(); var_146_object = Obj(); // 0xb2 PushV
	self(var_146_object); // 0xb3 Func
	var_144_object = var_146_object; // 0xb5 Mov
	return 2; // 0xb6 Return
}


func_212(var_87_bool, var_88_object, var_89_float)
{
	var_91_bool = var_88_object == 0; // 0xd5 Not
	if(var_91_bool == 0) goto Label_217; // 0xd6 JumpB
	var_87_bool = 0; // 0xd7 MovB
	return 0; // 0xd8 Return
	
Label_217:
	var_92_int = 0; // 0xd9 PushI
	var_93_bool = var_89_float > var_92_int; // 0xda GT
	if(var_93_bool == 0) goto Label_224; // 0xdb JumpB
	var_94_int = 8; // 0xdc PushI
	SendWorldWndMessage(var_94_int); // 0xdd Func
	goto Label_233; // 0xdf Jump
	
Label_233:
	var_95_float = 0; // 0xe9 PushV
	var_95_float = var_89_float; // 0xea Mov
	func_257(var_95_float); // 0xeb NEW_2
	var_99_bool = 0; var_100_object = Obj(); var_101_string = ""; var_102_float = 0; var_103_float = 0; var_104_float = 0; // 0xed PushV
	var_100_object = var_88_object; // 0xee Mov
	var_101_string = "reputation"; // 0xef MovS
	var_102_float = var_89_float; // 0xf0 Mov
	var_103_float = 0; // 0xf1 MovI
	var_104_float = 1; // 0xf2 MovI
	func_156(var_99_bool, var_100_object, var_101_string, var_102_float, var_103_float, var_104_float); // 0xf3 NEW_2
	var_87_bool = 1; // 0xf5 MovB
	return 0; // 0xf6 Return
	
Label_224:
	var_123_int = 0; // 0xe0 PushI
	var_124_bool = var_89_float < var_123_int; // 0xe1 LT
	if(var_124_bool == 0) goto Label_231; // 0xe2 JumpB
	var_125_int = 9; // 0xe3 PushI
	SendWorldWndMessage(var_125_int); // 0xe4 Func
	goto Label_233; // 0xe6 Jump
	
Label_231:
	var_87_bool = 0; // 0xe7 MovB
	return 0; // 0xe8 Return
}


func_247(var_74_float)
{
	var_76_object = Obj(); var_77_object = Obj(); // 0xf7 PushV
	CreateFloatVector(var_77_object); // 0xf8 Func
	add(var_74_float); // 0xfa ObjFunc
	var_78_int = 11; // 0xfc PushI
	SendWorldWndMessage(var_78_int, var_77_object); // 0xfd Func
	return 2; // 0xff Return
}


func_184(var_117_float, var_118_float, var_119_float, var_120_float)
{
	var_121_bool = var_118_float < var_119_float; // 0xb9 LT
	if(var_121_bool == 0) goto Label_189; // 0xba JumpB
	var_117_float = var_119_float; // 0xbb Mov
	return 0; // 0xbc Return
	
Label_189:
	var_122_bool = var_118_float > var_120_float; // 0xbd GT
	if(var_122_bool == 0) goto Label_193; // 0xbe JumpB
	var_117_float = var_120_float; // 0xbf Mov
	return 0; // 0xc0 Return
	
Label_193:
	var_117_float = var_118_float; // 0xc1 Mov
	return 0; // 0xc2 Return
}


func_156(var_99_bool, var_100_object, var_101_string, var_102_float, var_103_float, var_104_float)
{
	var_105_float = 0; var_106_float = 0; // 0x9c PushV
	var_107_bool = 0; var_108_object = Obj(); var_109_string = ""; // 0x9d PushV
	var_108_object = var_100_object; // 0x9e Mov
	var_109_string = var_101_string; // 0x9f Mov
	func_144(var_107_bool, var_108_object, var_109_string); // 0xa0 NEW_2
	var_116_bool = var_107_bool == 0; // 0xa2 Not
	if(var_116_bool == 0) goto Label_166; // 0xa3 JumpB
	var_99_bool = 0; // 0xa4 MovB
	return 2; // 0xa5 Return
	
Label_166:
	GetProperty(var_101_string, var_106_float); // 0xa6 ObjFunc
	var_117_float = 0; var_118_float = 0; var_119_float = 0; var_120_float = 0; // 0xa8 PushV
	var_118_float = var_106_float + var_102_float; // 0xa9 Add2
	var_119_float = var_103_float; // 0xaa Mov
	var_120_float = var_104_float; // 0xab Mov
	func_184(var_117_float, var_118_float, var_119_float, var_120_float); // 0xac NEW_2
	SetProperty(var_101_string, var_117_float); // 0xae ObjFunc
	var_99_bool = 1; // 0xb0 MovB
	return 2; // 0xb1 Return
}


