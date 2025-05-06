task_0_event_26(var_0_object, var_1_object, var_2_string)
{
	Trace(var_2_string); // 0x42 Func
	var_3_string = "abinos_unload"; // 0x44 PushS
	var_4_bool = var_2_string == var_3_string; // 0x45 Eq
	if(var_4_bool == 0) goto Label_75; // 0x46 JumpB
	func_99(var_2_string); // 0x48 NEW_2
	goto Label_81; // 0x4a Jump
	
Label_81:
	return 0; // 0x51 Return
	
Label_75:
	var_121_string = "completed"; // 0x4b PushS
	var_122_bool = var_2_string == var_121_string; // 0x4c Eq
	if(var_122_bool == 0) goto Label_81; // 0x4d JumpB
	func_169(); // 0x4f NEW_2
}


task_0_event_9(var_0_object, var_1_object, var_2_int, var_3_float)
{
	var_4_int = 1; // 0x53 PushI
	var_5_bool = var_2_int == var_4_int; // 0x54 Eq
	if(var_5_bool == 0) goto Label_93; // 0x55 JumpB
	var_6_string = "spawning albinos"; // 0x56 PushS
	Trace(var_6_string); // 0x57 Func
	func_99(var_3_float); // 0x5a NEW_2
	goto Label_98; // 0x5c Jump
	
Label_98:
	return 0; // 0x62 Return
	
Label_93:
	var_123_int = 0; var_124_float = 0; // 0x5d PushV
	var_123_int = var_2_int; // 0x5e Mov
	var_124_float = var_3_float; // 0x5f Mov
	func_213(); // 0x60 NEW_2
}


main(var_0_object, var_1_object)
{
	var_2_object = Obj(); var_3_object = Obj(); // 0x0 PushV
	var_4_string = "k5q03"; // 0x1 PushS
	var_5_int = 1; // 0x2 PushI
	SetVariable(var_4_string, var_5_int); // 0x3 Func
	var_6_int = 0; // 0x5 PushV
	func_303(var_6_int); // 0x6 NEW_2
	var_11_int = 21; // 0x8 PushI
	var_12_bool = var_6_int < var_11_int; // 0x9 LT
	if(var_12_bool == 0) goto Label_16; // 0xa JumpB
	var_13_int = 1; // 0xb PushI
	var_14_int = 117; // 0xc PushI
	SetTimeEvent(var_13_int, var_14_int); // 0xd Func
	goto Label_19; // 0xf Jump
	
Label_19:
	CreateObjectVector(var_3_object); // 0x13 Func
	GetMainOutdoorScene(var_3_object); // 0x15 Func
	var_15_object = Obj(); var_16_object = Obj(); var_17_string = ""; var_18_string = ""; var_19_string = ""; // 0x17 PushV
	var_16_object = var_3_object; // 0x18 Mov
	var_17_string = "pt_k5q03_enemy1"; // 0x19 MovS
	var_18_string = "pers_hunter"; // 0x1a MovS
	var_19_string = "k5q03_e_hunter.xml"; // 0x1b MovS
	func_229(var_15_object, var_16_object, var_17_string, var_18_string, var_19_string); // 0x1c NEW_2
	add(var_15_object); // 0x1e TObjFunc
	var_33_object = Obj(); var_34_object = Obj(); var_35_string = ""; var_36_string = ""; var_37_string = ""; // 0x20 PushV
	var_34_object = var_3_object; // 0x21 Mov
	var_35_string = "pt_k5q03_enemy2"; // 0x22 MovS
	var_36_string = "pers_hunter"; // 0x23 MovS
	var_37_string = "k5q03_e_hunter.xml"; // 0x24 MovS
	func_229(var_33_object, var_34_object, var_35_string, var_36_string, var_37_string); // 0x25 NEW_2
	add(var_33_object); // 0x27 TObjFunc
	var_38_object = Obj(); var_39_object = Obj(); var_40_string = ""; var_41_string = ""; var_42_string = ""; // 0x29 PushV
	var_39_object = var_3_object; // 0x2a Mov
	var_40_string = "pt_k5q03_enemy3"; // 0x2b MovS
	var_41_string = "pers_hunter"; // 0x2c MovS
	var_42_string = "k5q03_e_hunter.xml"; // 0x2d MovS
	func_229(var_38_object, var_39_object, var_40_string, var_41_string, var_42_string); // 0x2e NEW_2
	add(var_38_object); // 0x30 TObjFunc
	var_43_object = Obj(); var_44_object = Obj(); var_45_string = ""; var_46_string = ""; var_47_string = ""; // 0x32 PushV
	var_44_object = var_3_object; // 0x33 Mov
	var_45_string = "pt_k5q03_enemy4"; // 0x34 MovS
	var_46_string = "pers_hunter"; // 0x35 MovS
	var_47_string = "k5q03_e_hunter.xml"; // 0x36 MovS
	func_229(var_43_object, var_44_object, var_45_string, var_46_string, var_47_string); // 0x37 NEW_2
	add(var_43_object); // 0x39 TObjFunc
	var_48_int = 0; // 0x3b PushV
	var_48_int = 5; // 0x3c MovI
	func_194(var_48_int); // 0x3d NEW_2
	return 2; // 0x3f Return
	
Label_16:
	func_99(var_3_object); // 0x11 NEW_2
}


func_386(var_88_int, var_89_string)
{
	var_90_object = Obj(); var_91_int = 0; var_92_bool = 0; var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_object = Obj(); var_96_int = 0; var_97_bool = 0; var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); // 0x182 PushV
	GetMainOutdoorScene(var_95_object); // 0x183 Func
	var_96_int = 0; // 0x185 MovI
	
Label_390:
	var_100_int = 1; // 0x186 PushI
	var_101_int = var_96_int + var_100_int; // 0x187 Add
	var_102_int = var_89_string + var_101_int; // 0x188 Add
	GetLocator(var_102_int, var_97_bool, var_98_cvector, var_99_cvector); // 0x189 ObjFunc
	var_103_bool = var_97_bool == 0; // 0x18b Not
	if(var_103_bool == 0) goto Label_398; // 0x18c JumpB
	goto Label_401; // 0x18d Jump
	
Label_401:
	var_88_int = var_96_int; // 0x191 Mov
	return 10; // 0x192 Return
	
Label_398:
	var_104_int = 1; // 0x18e PushI
	var_96_int = var_96_int + var_104_int; // 0x18f Add2
	goto Label_390; // 0x190 Jump
}


func_194(var_48_int)
{
	var_49_float = 0; var_50_float = 0; // 0xc2 PushV
	GetGameTime(var_50_float); // 0xc3 Func
	var_51_int = 24; // 0xc5 PushI
	var_52_float = var_48_int * var_51_int; // 0xc6 Mult
	var_53_bool = var_50_float >= var_52_float; // 0xc7 GE
	if(var_53_bool == 0) goto Label_205; // 0xc8 JumpB
	func_177(var_50_float); // 0xca NEW_2
	goto Label_212; // 0xcc Jump
	
Label_212:
	return 2; // 0xd4 Return
	
Label_205:
	var_70_int = 0; // 0xcd PushI
	var_71_int = 24; // 0xce PushI
	var_72_float = var_48_int * var_71_int; // 0xcf Mult
	SetTimeEvent(var_70_int, var_72_float); // 0xd0 Func
	Hold(); // 0xd2 Func
}


func_327(var_146_float, var_147_cvector)
{
	var_148_object = Obj(); var_149_cvector = CVector(0,0,0); var_150_object = Obj(); var_151_cvector = CVector(0,0,0); // 0x147 PushV
	var_152_string = "player"; // 0x148 PushS
	FindActor(var_150_object, var_152_string); // 0x149 Func
	var_153_bool = var_150_object == 0; // 0x14b Not
	if(var_153_bool == 0) goto Label_335; // 0x14c JumpB
	var_146_float = 0; // 0x14d MovI
	return 4; // 0x14e Return
	
Label_335:
	var_154_cvector = CVector(0,0,0); var_155_object = Obj(); // 0x14f PushV
	var_155_object = var_150_object; // 0x150 Mov
	func_218(var_155_object); // 0x151 NEW_2
	var_151_cvector = var_154_cvector - var_147_cvector; // 0x153 Sub2
	var_146_float = var_151_cvector | var_151_cvector; // 0x154 Or2
	return 4; // 0x155 Return
}


func_265(var_167_object, var_169_string, var_170_string, var_171_string)
{
	var_175_bool = 0; var_176_cvector = CVector(0,0,0); var_177_cvector = CVector(0,0,0); var_178_object = Obj(); var_179_bool = 0; var_180_cvector = CVector(0,0,0); var_181_cvector = CVector(0,0,0); var_182_object = Obj(); // 0x109 PushV
	GetLocator(var_169_string, var_179_bool, var_180_cvector, var_181_cvector); // 0x10a ObjFunc
	var_183_bool = var_179_bool == 0; // 0x10c Not
	if(var_183_bool == 0) goto Label_278; // 0x10d JumpB
	var_184_string = "Locator "; // 0x10e PushS
	var_185_int = var_184_string + var_169_string; // 0x10f Add
	var_186_string = " doesn't exist"; // 0x110 PushS
	var_187_int = var_185_int + var_186_string; // 0x111 Add
	Trace(var_187_int); // 0x112 Func
	var_182_object = 0; // 0x114 SetNull
	goto Label_281; // 0x115 Jump
	
Label_281:
	var_167_object = var_182_object; // 0x119 Mov
	return 8; // 0x11a Return
	
Label_278:
	var_188_bool = 1; // 0x116 PushB
	AddStationaryActor(var_182_object, var_180_cvector, var_181_cvector, var_170_string, var_171_string, var_188_bool); // 0x117 ObjFunc
}


func_213()
{
	func_150(); // 0xd7 NEW_2
	return 0; // 0xd9 Return
}


func_150()
{
	var_125_int = 0; var_126_int = 0; // 0x96 PushV
	var_127_string = "k5q03"; // 0x97 PushS
	GetVariable(var_127_string, var_126_int); // 0x98 Func
	var_128_int = 1000; // 0x9a PushI
	var_129_bool = var_126_int != var_128_int; // 0x9b Neq
	if(var_129_bool == 0) goto Label_160; // 0x9c JumpB
	func_161(); // 0x9e NEW_2
	
Label_160:
	return 2; // 0xa0 Return
}


func_343(var_120_int, var_121_string)
{
	var_122_cvector = CVector(0,0,0); var_123_int = 0; var_124_object = Obj(); var_125_int = 0; var_126_bool = 0; var_127_cvector = CVector(0,0,0); var_128_cvector = CVector(0,0,0); var_129_cvector = CVector(0,0,0); var_130_int = 0; var_131_object = Obj(); var_132_int = 0; var_133_bool = 0; var_134_cvector = CVector(0,0,0); var_135_cvector = CVector(0,0,0); // 0x157 PushV
	var_130_int = -1; // 0x158 MovI
	GetMainOutdoorScene(var_131_object); // 0x159 Func
	var_132_int = -1; // 0x15b MovI
	
Label_348:
	var_136_int = 1; // 0x15c PushI
	var_132_int = var_132_int + var_136_int; // 0x15d Add2
	var_137_int = 1; // 0x15e PushI
	var_138_int = var_132_int + var_137_int; // 0x15f Add
	var_139_int = var_121_string + var_138_int; // 0x160 Add
	GetLocator(var_139_int, var_133_bool, var_134_cvector, var_135_cvector); // 0x161 ObjFunc
	var_140_bool = var_133_bool == 0; // 0x163 Not
	if(var_140_bool == 0) goto Label_358; // 0x164 JumpB
	goto Label_377; // 0x165 Jump
	
Label_377:
	var_141_int = -1; // 0x179 PushI
	var_142_bool = var_130_int == var_141_int; // 0x17a Eq
	if(var_142_bool == 0) goto Label_383; // 0x17b JumpB
	var_143_int = 1; // 0x17c PushI
	var_120_int = var_132_int - var_143_int; // 0x17d Sub2
	goto Label_384; // 0x17e Jump
	
Label_384:
	return 14; // 0x180 Return
	
Label_383:
	var_120_int = var_130_int; // 0x17f Mov
	
Label_358:
	var_144_bool = 0; var_145_cvector = CVector(0,0,0); // 0x166 PushV
	var_145_cvector = var_134_cvector; // 0x167 Mov
	func_311(var_144_bool, var_145_cvector); // 0x168 NEW_2
	var_159_bool = var_144_bool == 0; // 0x16a Not
	if(var_159_bool == 0) goto Label_365; // 0x16b JumpB
	goto Label_376; // 0x16c Jump
	
Label_376:
	goto Label_348; // 0x178 Jump
	
Label_365:
	var_160_bool = 0; var_161_cvector = CVector(0,0,0); // 0x16d PushV
	var_161_cvector = var_134_cvector; // 0x16e Mov
	func_319(var_160_bool, var_161_cvector); // 0x16f NEW_2
	if(var_160_bool == 0) goto Label_371; // 0x171 JumpB
	goto Label_376; // 0x172 Jump
	
Label_371:
	var_165_bool = var_132_int < var_130_int; // 0x173 LT
	if(var_165_bool == 0) goto Label_374; // 0x174 JumpB
	goto Label_376; // 0x175 Jump
	
Label_374:
	var_130_int = var_132_int; // 0x176 Mov
	var_129_cvector = var_134_cvector; // 0x177 Mov
}


func_218(var_154_cvector)
{
	var_156_cvector = CVector(0,0,0); var_157_cvector = CVector(0,0,0); // 0xda PushV
	GetPosition(var_157_cvector); // 0xdb ObjFunc
	var_154_cvector = var_157_cvector; // 0xdd Mov
	return 2; // 0xde Return
}


func_247(var_82_object, var_84_string, var_85_string, var_86_string)
{
	var_107_bool = 0; var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); var_110_object = Obj(); var_111_bool = 0; var_112_cvector = CVector(0,0,0); var_113_cvector = CVector(0,0,0); var_114_object = Obj(); // 0xf7 PushV
	GetLocator(var_84_string, var_111_bool, var_112_cvector, var_113_cvector); // 0xf8 ObjFunc
	var_115_bool = var_111_bool == 0; // 0xfa Not
	if(var_115_bool == 0) goto Label_260; // 0xfb JumpB
	var_116_string = "Locator "; // 0xfc PushS
	var_117_int = var_116_string + var_84_string; // 0xfd Add
	var_118_string = " doesn't exist"; // 0xfe PushS
	var_119_int = var_117_int + var_118_string; // 0xff Add
	Trace(var_119_int); // 0x100 Func
	var_114_object = 0; // 0x102 SetNull
	goto Label_262; // 0x103 Jump
	
Label_262:
	var_82_object = var_114_object; // 0x106 Mov
	return 8; // 0x107 Return
	
Label_260:
	AddStationaryActor(var_114_object, var_112_cvector, var_113_cvector, var_85_string, var_86_string); // 0x104 ObjFunc
}


func_284(var_54_object, var_55_string)
{
	var_56_int = 0; var_57_int = 0; var_58_object = Obj(); var_59_int = 0; var_60_int = 0; var_61_object = Obj(); // 0x11c PushV
	var_62_object = var_54_object; // 0x11d Push
	if(var_62_object == 0) goto Label_302; // 0x11e JumpB
	size(var_59_int); // 0x11f ObjFunc
	var_60_int = 0; // 0x121 MovI
	
Label_290:
	var_63_bool = var_60_int < var_59_int; // 0x122 LT
	if(var_63_bool == 0) goto Label_302; // 0x123 JumpB
	get(var_61_object, var_60_int); // 0x124 ObjFunc
	var_64_object = var_61_object; // 0x126 Push
	if(var_64_object == 0) goto Label_298; // 0x127 JumpB
	Trigger(var_61_object, var_55_string); // 0x128 Func
	
Label_298:
	var_61_object = 0; // 0x12a SetNull
	var_65_int = 1; // 0x12b PushI
	var_60_int = var_60_int + var_65_int; // 0x12c Add2
	goto Label_290; // 0x12d Jump
	
Label_302:
	return 6; // 0x12e Return
}


func_223(var_67_object)
{
	var_68_object = Obj(); var_69_object = Obj(); // 0xdf PushV
	self(var_69_object); // 0xe0 Func
	var_67_object = var_69_object; // 0xe2 Mov
	return 2; // 0xe3 Return
}


func_161()
{
	var_130_string = "k5q03"; // 0xa1 PushS
	var_131_int = -1; // 0xa2 PushI
	SetVariable(var_130_string, var_131_int); // 0xa3 Func
	func_177(var_126_int); // 0xa6 NEW_2
	return 0; // 0xa8 Return
}


func_99(var_0_object)
{
	var_73_object = Obj(); var_74_object = Obj(); var_75_int = 0; var_76_object = Obj(); var_77_object = Obj(); var_78_int = 0; // 0x63 PushV
	GetMainOutdoorScene(var_76_object); // 0x64 Func
	GetScene(var_77_object); // 0x66 Func
	var_79_bool = var_76_object != var_77_object; // 0x68 Neq
	if(var_79_bool == 0) goto Label_126; // 0x69 JumpB
	var_80_string = "pt_k5q03_albinos_path"; // 0x6a PushS
	var_81_int = -1; // 0x6b PushI
	SetVariable(var_80_string, var_81_int); // 0x6c Func
	var_82_object = Obj(); var_83_object = Obj(); var_84_string = ""; var_85_string = ""; var_86_string = ""; // 0x6e PushV
	var_83_object = var_76_object; // 0x6f Mov
	var_87_string = "pt_k5q03_albinos_path"; // 0x70 PushS
	var_88_int = 0; var_89_string = ""; // 0x71 PushV
	var_89_string = "pt_k5q03_albinos_path"; // 0x72 MovS
	func_386(var_88_int, var_89_string); // 0x73 NEW_2
	var_105_int = 1; // 0x75 PushI
	var_106_int = var_88_int + var_105_int; // 0x76 Add
	var_84_string = var_87_string + var_106_int; // 0x77 Add2
	var_85_string = "pers_albinos"; // 0x78 MovS
	var_86_string = "k5q03_albinos.xml"; // 0x79 MovS
	func_247(var_83_object, var_84_string, var_85_string, var_86_string); // 0x7a NEW_2
	var_0_object = var_82_object; // 0x7b TMov
	goto Label_147; // 0x7d Jump
	
Label_147:
	return 6; // 0x93 Return
	
Label_126:
	var_120_int = 0; var_121_string = ""; // 0x7e PushV
	var_121_string = "pt_k5q03_albinos_path"; // 0x7f MovS
	func_343(var_120_int, var_121_string); // 0x80 NEW_2
	var_78_int = var_120_int; // 0x81 Mov
	Trace(var_78_int); // 0x83 Func
	var_166_string = "pt_k5q03_albinos_path"; // 0x85 PushS
	SetVariable(var_166_string, var_78_int); // 0x86 Func
	var_167_object = Obj(); var_168_object = Obj(); var_169_string = ""; var_170_string = ""; var_171_string = ""; // 0x88 PushV
	var_168_object = var_76_object; // 0x89 Mov
	var_172_string = "pt_k5q03_albinos_path"; // 0x8a PushS
	var_173_int = 1; // 0x8b PushI
	var_174_int = var_78_int + var_173_int; // 0x8c Add
	var_169_string = var_172_string + var_174_int; // 0x8d Add2
	var_170_string = "pers_albinos"; // 0x8e MovS
	var_171_string = "k5q03_albinos.xml"; // 0x8f MovS
	func_265(var_168_object, var_169_string, var_170_string, var_171_string); // 0x90 NEW_2
	var_0_object = var_167_object; // 0x91 TMov
}


func_229(var_15_object, var_16_object, var_17_string, var_18_string, var_19_string)
{
	var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_object = Obj(); var_24_bool = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_object = Obj(); // 0xe5 PushV
	GetLocator(var_17_string, var_24_bool, var_25_cvector, var_26_cvector); // 0xe6 ObjFunc
	var_28_bool = var_24_bool == 0; // 0xe8 Not
	if(var_28_bool == 0) goto Label_242; // 0xe9 JumpB
	var_29_string = "Locator "; // 0xea PushS
	var_30_int = var_29_string + var_17_string; // 0xeb Add
	var_31_string = " doesn't exist"; // 0xec PushS
	var_32_int = var_30_int + var_31_string; // 0xed Add
	Trace(var_32_int); // 0xee Func
	var_27_object = 0; // 0xf0 SetNull
	goto Label_244; // 0xf1 Jump
	
Label_244:
	var_15_object = var_27_object; // 0xf4 Mov
	return 8; // 0xf5 Return
	
Label_242:
	AddActor(var_27_object, var_18_string, var_16_object, var_25_cvector, var_26_cvector, var_19_string); // 0xf2 Func
}


func_169()
{
	var_123_string = "k5q03"; // 0xa9 PushS
	var_124_int = 1000; // 0xaa PushI
	SetVariable(var_123_string, var_124_int); // 0xab Func
	func_177(var_2_string); // 0xae NEW_2
	return 0; // 0xb0 Return
}


func_303(var_6_int)
{
	var_7_float = 0; var_8_float = 0; // 0x12f PushV
	GetGameTime(var_8_float); // 0x130 Func
	var_9_int = 0; // 0x132 PushV
	var_9_int = var_8_float; // 0x133 Mov
	var_10_int = 24; // 0x134 PushI
	var_6_int = var_9_int % var_10_int; // 0x135 Mod2
	return 2; // 0x136 Return
}


func_177(var_1_object)
{
	EventDisable(26); // 0xb1 EventDisable
	EventDisable(9); // 0xb2 EventDisable
	var_54_object = Obj(); var_55_string = ""; // 0xb3 PushV
	var_54_object = var_1_object; // 0xb4 MovT
	var_55_string = "cleanup"; // 0xb5 MovS
	func_284(var_54_object, var_55_string); // 0xb6 NEW_2
	var_66_object = var_0_object; // 0xb8 PushT
	if(var_66_object == 0) goto Label_188; // 0xb9 JumpB
	Remove(); // 0xba TObjFunc
	
Label_188:
	var_67_object = Obj(); // 0xbc PushV
	func_223(var_67_object); // 0xbd NEW_2
	RemoveActor(var_67_object); // 0xbf Func
	return 0; // 0xc1 Return
}


func_311(var_144_bool, var_145_cvector)
{
	var_146_float = 0; var_147_cvector = CVector(0,0,0); // 0x138 PushV
	var_147_cvector = var_145_cvector; // 0x139 Mov
	func_327(var_146_float, var_147_cvector); // 0x13a NEW_2
	var_158_float = 12250000.0; // 0x13c PushF
	var_144_bool = var_146_float < var_158_float; // 0x13d LT2
	return 0; // 0x13e Return
}


func_319(var_160_bool, var_161_cvector)
{
	var_162_float = 0; var_163_cvector = CVector(0,0,0); // 0x140 PushV
	var_163_cvector = var_161_cvector; // 0x141 Mov
	func_327(var_162_float, var_163_cvector); // 0x142 NEW_2
	var_164_float = 4000000.0; // 0x144 PushF
	var_160_bool = var_162_float < var_164_float; // 0x145 LT2
	return 0; // 0x146 Return
}


