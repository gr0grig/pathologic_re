task_0_event_26(var_0_object, var_1_object, var_2_string)
{
	Trace(var_2_string); // 0x31 Func
	var_3_string = "abinos_unload"; // 0x33 PushS
	var_4_bool = var_2_string == var_3_string; // 0x34 Eq
	if(var_4_bool == 0) goto Label_58; // 0x35 JumpB
	func_82(var_2_string); // 0x37 NEW_2
	goto Label_64; // 0x39 Jump
	
Label_64:
	return 0; // 0x40 Return
	
Label_58:
	var_121_string = "completed"; // 0x3a PushS
	var_122_bool = var_2_string == var_121_string; // 0x3b Eq
	if(var_122_bool == 0) goto Label_64; // 0x3c JumpB
	func_152(); // 0x3e NEW_2
}


task_0_event_9(var_0_object, var_1_object, var_2_int, var_3_float)
{
	var_4_int = 1; // 0x42 PushI
	var_5_bool = var_2_int == var_4_int; // 0x43 Eq
	if(var_5_bool == 0) goto Label_76; // 0x44 JumpB
	var_6_string = "spawning albinos"; // 0x45 PushS
	Trace(var_6_string); // 0x46 Func
	func_82(var_3_float); // 0x49 NEW_2
	goto Label_81; // 0x4b Jump
	
Label_81:
	return 0; // 0x51 Return
	
Label_76:
	var_123_int = 0; var_124_float = 0; // 0x4c PushV
	var_123_int = var_2_int; // 0x4d Mov
	var_124_float = var_3_float; // 0x4e Mov
	func_194(); // 0x4f NEW_2
}


main(var_0_object, var_1_object)
{
	var_2_object = Obj(); var_3_int = 0; var_4_object = Obj(); var_5_int = 0; // 0x0 PushV
	CreateObjectVector(var_5_int); // 0x1 Func
	GetMainOutdoorScene(var_4_object); // 0x3 Func
	var_5_int = 0; // 0x5 MovI
	
Label_6:
	var_6_int = 5; // 0x6 PushI
	var_7_bool = var_5_int < var_6_int; // 0x7 LT
	if(var_7_bool == 0) goto Label_24; // 0x8 JumpB
	var_8_object = Obj(); var_9_object = Obj(); var_10_string = ""; var_11_string = ""; var_12_string = ""; // 0x9 PushV
	var_9_object = var_4_object; // 0xa Mov
	var_13_string = "pt_k6q03_bomber"; // 0xb PushS
	var_14_int = 1; // 0xc PushI
	var_15_int = var_5_int + var_14_int; // 0xd Add
	var_10_string = var_13_string + var_15_int; // 0xe Add2
	var_11_string = "pers_bomber"; // 0xf MovS
	var_12_string = "k6q03_bomber.xml"; // 0x10 MovS
	func_210(var_9_object, var_10_string, var_11_string, var_12_string); // 0x11 NEW_2
	add(var_8_object); // 0x13 TObjFunc
	var_29_int = 1; // 0x15 PushI
	var_5_int = var_5_int + var_29_int; // 0x16 Add2
	goto Label_6; // 0x17 Jump
	
Label_24:
	var_30_string = "k6q03"; // 0x18 PushS
	var_31_int = 1; // 0x19 PushI
	SetVariable(var_30_string, var_31_int); // 0x1a Func
	var_32_int = 0; // 0x1c PushV
	func_268(var_32_int); // 0x1d NEW_2
	var_37_int = 21; // 0x1f PushI
	var_38_bool = var_32_int < var_37_int; // 0x20 LT
	if(var_38_bool == 0) goto Label_39; // 0x21 JumpB
	var_39_int = 1; // 0x22 PushI
	var_40_int = 141; // 0x23 PushI
	SetTimeEvent(var_39_int, var_40_int); // 0x24 Func
	goto Label_42; // 0x26 Jump
	
Label_42:
	var_41_int = 0; // 0x2a PushV
	var_41_int = 6; // 0x2b MovI
	func_175(var_41_int); // 0x2c NEW_2
	return 4; // 0x2e Return
	
Label_39:
	func_82(var_5_int); // 0x28 NEW_2
}


func_194()
{
	func_133(); // 0xc4 NEW_2
	return 0; // 0xc6 Return
}


func_133()
{
	var_125_int = 0; var_126_int = 0; // 0x85 PushV
	var_127_string = "k6q03"; // 0x86 PushS
	GetVariable(var_127_string, var_126_int); // 0x87 Func
	var_128_int = 1000; // 0x89 PushI
	var_129_bool = var_126_int != var_128_int; // 0x8a Neq
	if(var_129_bool == 0) goto Label_143; // 0x8b JumpB
	func_144(); // 0x8d NEW_2
	
Label_143:
	return 2; // 0x8f Return
}


func_199(var_133_cvector)
{
	var_135_cvector = CVector(0,0,0); var_136_cvector = CVector(0,0,0); // 0xc7 PushV
	GetPosition(var_136_cvector); // 0xc8 ObjFunc
	var_133_cvector = var_136_cvector; // 0xca Mov
	return 2; // 0xcb Return
}


func_268(var_32_int)
{
	var_33_float = 0; var_34_float = 0; // 0x10c PushV
	GetGameTime(var_34_float); // 0x10d Func
	var_35_int = 0; // 0x10f PushV
	var_35_int = var_34_float; // 0x110 Mov
	var_36_int = 24; // 0x111 PushI
	var_32_int = var_35_int % var_36_int; // 0x112 Mod2
	return 2; // 0x113 Return
}


func_204(var_59_object)
{
	var_60_object = Obj(); var_61_object = Obj(); // 0xcc PushV
	self(var_61_object); // 0xcd Func
	var_59_object = var_61_object; // 0xcf Mov
	return 2; // 0xd0 Return
}


func_144()
{
	var_130_string = "k6q03"; // 0x90 PushS
	var_131_int = -1; // 0x91 PushI
	SetVariable(var_130_string, var_131_int); // 0x92 Func
	func_160(var_126_int); // 0x95 NEW_2
	return 0; // 0x97 Return
}


func_210(var_8_object, var_10_string, var_11_string, var_12_string)
{
	var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_object = Obj(); var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_object = Obj(); // 0xd2 PushV
	GetLocator(var_10_string, var_20_bool, var_21_cvector, var_22_cvector); // 0xd3 ObjFunc
	var_24_bool = var_20_bool == 0; // 0xd5 Not
	if(var_24_bool == 0) goto Label_223; // 0xd6 JumpB
	var_25_string = "Locator "; // 0xd7 PushS
	var_26_int = var_25_string + var_10_string; // 0xd8 Add
	var_27_string = " doesn't exist"; // 0xd9 PushS
	var_28_int = var_26_int + var_27_string; // 0xda Add
	Trace(var_28_int); // 0xdb Func
	var_23_object = 0; // 0xdd SetNull
	goto Label_225; // 0xde Jump
	
Label_225:
	var_8_object = var_23_object; // 0xe1 Mov
	return 8; // 0xe2 Return
	
Label_223:
	AddStationaryActor(var_23_object, var_21_cvector, var_22_cvector, var_11_string, var_12_string); // 0xdf ObjFunc
}


func_82(var_0_object)
{
	var_65_object = Obj(); var_66_object = Obj(); var_67_int = 0; var_68_object = Obj(); var_69_object = Obj(); var_70_int = 0; // 0x52 PushV
	GetMainOutdoorScene(var_68_object); // 0x53 Func
	GetScene(var_69_object); // 0x55 Func
	var_71_bool = var_68_object != var_69_object; // 0x57 Neq
	if(var_71_bool == 0) goto Label_109; // 0x58 JumpB
	var_72_string = "pt_k6q03_albinos_path"; // 0x59 PushS
	var_73_int = -1; // 0x5a PushI
	SetVariable(var_72_string, var_73_int); // 0x5b Func
	var_74_object = Obj(); var_75_object = Obj(); var_76_string = ""; var_77_string = ""; var_78_string = ""; // 0x5d PushV
	var_75_object = var_68_object; // 0x5e Mov
	var_79_string = "pt_k6q03_albinos_path"; // 0x5f PushS
	var_80_int = 0; var_81_string = ""; // 0x60 PushV
	var_81_string = "pt_k6q03_albinos_path"; // 0x61 MovS
	func_351(var_80_int, var_81_string); // 0x62 NEW_2
	var_97_int = 1; // 0x64 PushI
	var_98_int = var_80_int + var_97_int; // 0x65 Add
	var_76_string = var_79_string + var_98_int; // 0x66 Add2
	var_77_string = "pers_albinos"; // 0x67 MovS
	var_78_string = "k6q03_albinos.xml"; // 0x68 MovS
	func_210(var_75_object, var_76_string, var_77_string, var_78_string); // 0x69 NEW_2
	var_0_object = var_74_object; // 0x6a TMov
	goto Label_130; // 0x6c Jump
	
Label_130:
	return 6; // 0x82 Return
	
Label_109:
	var_99_int = 0; var_100_string = ""; // 0x6d PushV
	var_100_string = "pt_k6q03_albinos_path"; // 0x6e MovS
	func_308(var_99_int, var_100_string); // 0x6f NEW_2
	var_70_int = var_99_int; // 0x70 Mov
	Trace(var_70_int); // 0x72 Func
	var_145_string = "pt_k6q03_albinos_path"; // 0x74 PushS
	SetVariable(var_145_string, var_70_int); // 0x75 Func
	var_146_object = Obj(); var_147_object = Obj(); var_148_string = ""; var_149_string = ""; var_150_string = ""; // 0x77 PushV
	var_147_object = var_68_object; // 0x78 Mov
	var_151_string = "pt_k6q03_albinos_path"; // 0x79 PushS
	var_152_int = 1; // 0x7a PushI
	var_153_int = var_70_int + var_152_int; // 0x7b Add
	var_148_string = var_151_string + var_153_int; // 0x7c Add2
	var_149_string = "pers_albinos"; // 0x7d MovS
	var_150_string = "k6q03_albinos.xml"; // 0x7e MovS
	func_228(var_147_object, var_148_string, var_149_string, var_150_string); // 0x7f NEW_2
	var_0_object = var_146_object; // 0x80 TMov
}


func_276(var_123_bool, var_124_cvector)
{
	var_125_float = 0; var_126_cvector = CVector(0,0,0); // 0x115 PushV
	var_126_cvector = var_124_cvector; // 0x116 Mov
	func_292(var_125_float, var_126_cvector); // 0x117 NEW_2
	var_137_float = 12250000.0; // 0x119 PushF
	var_123_bool = var_125_float < var_137_float; // 0x11a LT2
	return 0; // 0x11b Return
}


func_152()
{
	var_123_string = "k6q03"; // 0x98 PushS
	var_124_int = 1000; // 0x99 PushI
	SetVariable(var_123_string, var_124_int); // 0x9a Func
	func_160(var_2_string); // 0x9d NEW_2
	return 0; // 0x9f Return
}


func_284(var_139_bool, var_140_cvector)
{
	var_141_float = 0; var_142_cvector = CVector(0,0,0); // 0x11d PushV
	var_142_cvector = var_140_cvector; // 0x11e Mov
	func_292(var_141_float, var_142_cvector); // 0x11f NEW_2
	var_143_float = 4000000.0; // 0x121 PushF
	var_139_bool = var_141_float < var_143_float; // 0x122 LT2
	return 0; // 0x123 Return
}


func_351(var_80_int, var_81_string)
{
	var_82_object = Obj(); var_83_int = 0; var_84_bool = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_object = Obj(); var_88_int = 0; var_89_bool = 0; var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); // 0x15f PushV
	GetMainOutdoorScene(var_87_object); // 0x160 Func
	var_88_int = 0; // 0x162 MovI
	
Label_355:
	var_92_int = 1; // 0x163 PushI
	var_93_int = var_88_int + var_92_int; // 0x164 Add
	var_94_int = var_81_string + var_93_int; // 0x165 Add
	GetLocator(var_94_int, var_89_bool, var_90_cvector, var_91_cvector); // 0x166 ObjFunc
	var_95_bool = var_89_bool == 0; // 0x168 Not
	if(var_95_bool == 0) goto Label_363; // 0x169 JumpB
	goto Label_366; // 0x16a Jump
	
Label_366:
	var_80_int = var_88_int; // 0x16e Mov
	return 10; // 0x16f Return
	
Label_363:
	var_96_int = 1; // 0x16b PushI
	var_88_int = var_88_int + var_96_int; // 0x16c Add2
	goto Label_355; // 0x16d Jump
}


func_160(var_1_object)
{
	EventDisable(26); // 0xa0 EventDisable
	var_47_object = var_0_object; // 0xa1 PushT
	if(var_47_object == 0) goto Label_165; // 0xa2 JumpB
	Remove(); // 0xa3 TObjFunc
	
Label_165:
	var_48_object = Obj(); // 0xa5 PushV
	var_48_object = var_1_object; // 0xa6 MovT
	func_247(var_48_object); // 0xa7 NEW_2
	var_59_object = Obj(); // 0xa9 PushV
	func_204(var_59_object); // 0xaa NEW_2
	RemoveActor(var_59_object); // 0xac Func
	return 0; // 0xae Return
}


func_228(var_146_object, var_148_string, var_149_string, var_150_string)
{
	var_154_bool = 0; var_155_cvector = CVector(0,0,0); var_156_cvector = CVector(0,0,0); var_157_object = Obj(); var_158_bool = 0; var_159_cvector = CVector(0,0,0); var_160_cvector = CVector(0,0,0); var_161_object = Obj(); // 0xe4 PushV
	GetLocator(var_148_string, var_158_bool, var_159_cvector, var_160_cvector); // 0xe5 ObjFunc
	var_162_bool = var_158_bool == 0; // 0xe7 Not
	if(var_162_bool == 0) goto Label_241; // 0xe8 JumpB
	var_163_string = "Locator "; // 0xe9 PushS
	var_164_int = var_163_string + var_148_string; // 0xea Add
	var_165_string = " doesn't exist"; // 0xeb PushS
	var_166_int = var_164_int + var_165_string; // 0xec Add
	Trace(var_166_int); // 0xed Func
	var_161_object = 0; // 0xef SetNull
	goto Label_244; // 0xf0 Jump
	
Label_244:
	var_146_object = var_161_object; // 0xf4 Mov
	return 8; // 0xf5 Return
	
Label_241:
	var_167_bool = 1; // 0xf1 PushB
	AddStationaryActor(var_161_object, var_159_cvector, var_160_cvector, var_149_string, var_150_string, var_167_bool); // 0xf2 ObjFunc
}


func_292(var_125_float, var_126_cvector)
{
	var_127_object = Obj(); var_128_cvector = CVector(0,0,0); var_129_object = Obj(); var_130_cvector = CVector(0,0,0); // 0x124 PushV
	var_131_string = "player"; // 0x125 PushS
	FindActor(var_129_object, var_131_string); // 0x126 Func
	var_132_bool = var_129_object == 0; // 0x128 Not
	if(var_132_bool == 0) goto Label_300; // 0x129 JumpB
	var_125_float = 0; // 0x12a MovI
	return 4; // 0x12b Return
	
Label_300:
	var_133_cvector = CVector(0,0,0); var_134_object = Obj(); // 0x12c PushV
	var_134_object = var_129_object; // 0x12d Mov
	func_199(var_134_object); // 0x12e NEW_2
	var_130_cvector = var_133_cvector - var_126_cvector; // 0x130 Sub2
	var_125_float = var_130_cvector | var_130_cvector; // 0x131 Or2
	return 4; // 0x132 Return
}


func_175(var_41_int)
{
	var_42_float = 0; var_43_float = 0; // 0xaf PushV
	GetGameTime(var_43_float); // 0xb0 Func
	var_44_int = 24; // 0xb2 PushI
	var_45_float = var_41_int * var_44_int; // 0xb3 Mult
	var_46_bool = var_43_float >= var_45_float; // 0xb4 GE
	if(var_46_bool == 0) goto Label_186; // 0xb5 JumpB
	func_160(var_43_float); // 0xb7 NEW_2
	goto Label_193; // 0xb9 Jump
	
Label_193:
	return 2; // 0xc1 Return
	
Label_186:
	var_62_int = 0; // 0xba PushI
	var_63_int = 24; // 0xbb PushI
	var_64_float = var_41_int * var_63_int; // 0xbc Mult
	SetTimeEvent(var_62_int, var_64_float); // 0xbd Func
	Hold(); // 0xbf Func
}


func_308(var_99_int, var_100_string)
{
	var_101_cvector = CVector(0,0,0); var_102_int = 0; var_103_object = Obj(); var_104_int = 0; var_105_bool = 0; var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_int = 0; var_110_object = Obj(); var_111_int = 0; var_112_bool = 0; var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0); // 0x134 PushV
	var_109_int = -1; // 0x135 MovI
	GetMainOutdoorScene(var_110_object); // 0x136 Func
	var_111_int = -1; // 0x138 MovI
	
Label_313:
	var_115_int = 1; // 0x139 PushI
	var_111_int = var_111_int + var_115_int; // 0x13a Add2
	var_116_int = 1; // 0x13b PushI
	var_117_int = var_111_int + var_116_int; // 0x13c Add
	var_118_int = var_100_string + var_117_int; // 0x13d Add
	GetLocator(var_118_int, var_112_bool, var_113_cvector, var_114_cvector); // 0x13e ObjFunc
	var_119_bool = var_112_bool == 0; // 0x140 Not
	if(var_119_bool == 0) goto Label_323; // 0x141 JumpB
	goto Label_342; // 0x142 Jump
	
Label_342:
	var_120_int = -1; // 0x156 PushI
	var_121_bool = var_109_int == var_120_int; // 0x157 Eq
	if(var_121_bool == 0) goto Label_348; // 0x158 JumpB
	var_122_int = 1; // 0x159 PushI
	var_99_int = var_111_int - var_122_int; // 0x15a Sub2
	goto Label_349; // 0x15b Jump
	
Label_349:
	return 14; // 0x15d Return
	
Label_348:
	var_99_int = var_109_int; // 0x15c Mov
	
Label_323:
	var_123_bool = 0; var_124_cvector = CVector(0,0,0); // 0x143 PushV
	var_124_cvector = var_113_cvector; // 0x144 Mov
	func_276(var_123_bool, var_124_cvector); // 0x145 NEW_2
	var_138_bool = var_123_bool == 0; // 0x147 Not
	if(var_138_bool == 0) goto Label_330; // 0x148 JumpB
	goto Label_341; // 0x149 Jump
	
Label_341:
	goto Label_313; // 0x155 Jump
	
Label_330:
	var_139_bool = 0; var_140_cvector = CVector(0,0,0); // 0x14a PushV
	var_140_cvector = var_113_cvector; // 0x14b Mov
	func_284(var_139_bool, var_140_cvector); // 0x14c NEW_2
	if(var_139_bool == 0) goto Label_336; // 0x14e JumpB
	goto Label_341; // 0x14f Jump
	
Label_336:
	var_144_bool = var_111_int < var_109_int; // 0x150 LT
	if(var_144_bool == 0) goto Label_339; // 0x151 JumpB
	goto Label_341; // 0x152 Jump
	
Label_339:
	var_109_int = var_111_int; // 0x153 Mov
	var_108_cvector = var_113_cvector; // 0x154 Mov
}


func_247(var_48_object)
{
	var_49_int = 0; var_50_int = 0; var_51_object = Obj(); var_52_int = 0; var_53_int = 0; var_54_object = Obj(); // 0xf7 PushV
	var_55_object = var_48_object; // 0xf8 Push
	if(var_55_object == 0) goto Label_267; // 0xf9 JumpB
	size(var_52_int); // 0xfa ObjFunc
	var_53_int = 0; // 0xfc MovI
	
Label_253:
	var_56_bool = var_53_int < var_52_int; // 0xfd LT
	if(var_56_bool == 0) goto Label_265; // 0xfe JumpB
	get(var_54_object, var_53_int); // 0xff ObjFunc
	var_57_object = var_54_object; // 0x101 Push
	if(var_57_object == 0) goto Label_261; // 0x102 JumpB
	Remove(); // 0x103 ObjFunc
	
Label_261:
	var_54_object = 0; // 0x105 SetNull
	var_58_int = 1; // 0x106 PushI
	var_53_int = var_53_int + var_58_int; // 0x107 Add2
	goto Label_253; // 0x108 Jump
	
Label_265:
	clear(); // 0x109 ObjFunc
	
Label_267:
	return 6; // 0x10b Return
}


