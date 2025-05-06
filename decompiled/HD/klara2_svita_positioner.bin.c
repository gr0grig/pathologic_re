task_0_event_26(var_0_object, var_1_int, var_2_string)
{
	var_3_int = 0; var_4_object = Obj(); var_5_int = 0; var_6_object = Obj(); // 0x17 PushV
	Trace(var_2_string); // 0x18 Func
	var_7_string = "place_svita"; // 0x1a PushS
	var_8_bool = var_2_string == var_7_string; // 0x1b Eq
	if(var_8_bool == 0) goto Label_37; // 0x1c JumpB
	var_9_int = 0; // 0x1d PushV
	var_10_int = 0; // 0x1e PushV
	func_375(var_10_int); // 0x1f NEW_2
	var_9_int = var_10_int; // 0x20 Mov
	func_172(var_6_object, var_9_int); // 0x22 NEW_2
	goto Label_164; // 0x24 Jump
	
Label_164:
	return 4; // 0xa4 Return
	
Label_37:
	var_119_string = "wonder"; // 0x25 PushS
	var_120_bool = var_2_string == var_119_string; // 0x26 Eq
	if(var_120_bool == 0) goto Label_61; // 0x27 JumpB
	var_121_string = "lightning"; // 0x28 PushS
	TriggerWorld(var_121_string); // 0x29 Func
	func_276(var_6_object); // 0x2c NEW_2
	func_282(var_6_object); // 0x2f NEW_2
	var_137_int = -1; // 0x31 PushI
	var_138_bool = var_1_int != var_137_int; // 0x32 Neq
	if(var_138_bool == 0) goto Label_60; // 0x33 JumpB
	var_139_int = 0; var_140_bool = 0; // 0x34 PushV
	var_139_int = var_1_int; // 0x35 MovT
	var_140_bool = 1; // 0x36 MovB
	func_451(var_139_int, var_140_bool); // 0x37 NEW_2
	func_384(); // 0x3a NEW_2
	
Label_60:
	goto Label_164; // 0x3c Jump
	
Label_61:
	var_169_string = "bad_wonder"; // 0x3d PushS
	var_170_bool = var_2_string == var_169_string; // 0x3e Eq
	if(var_170_bool == 0) goto Label_164; // 0x3f JumpB
	var_171_int = 0; // 0x40 PushV
	func_375(var_171_int); // 0x41 NEW_2
	var_5_int = var_171_int; // 0x42 Mov
	GetMainOutdoorScene(var_6_object); // 0x44 Func
	var_172_object = Obj(); var_173_object = Obj(); var_174_string = ""; var_175_string = ""; var_176_string = ""; // 0x46 PushV
	var_173_object = var_6_object; // 0x47 Mov
	var_177_string = "pt_k2system"; // 0x48 PushS
	var_178_int = 0; var_179_int = 0; // 0x49 PushV
	var_179_int = var_5_int; // 0x4a Mov
	func_462(var_178_int, var_179_int); // 0x4b NEW_2
	var_180_int = var_177_string + var_178_int; // 0x4d Add
	var_181_string = "_albinos"; // 0x4e PushS
	var_174_string = var_180_int + var_181_string; // 0x4f Add2
	var_175_string = "pers_rat"; // 0x50 MovS
	var_176_string = "k2system_rat.xml"; // 0x51 MovS
	func_294(var_172_object, var_173_object, var_174_string, var_175_string, var_176_string); // 0x52 NEW_2
	var_195_bool = 0; var_196_float = 0; // 0x54 PushV
	var_196_float = 0.5; // 0x55 MovF
	func_289(var_195_bool, var_196_float); // 0x56 NEW_2
	if(var_195_bool == 0) goto Label_103; // 0x58 JumpB
	var_199_object = Obj(); var_200_object = Obj(); var_201_string = ""; var_202_string = ""; var_203_string = ""; // 0x59 PushV
	var_200_object = var_6_object; // 0x5a Mov
	var_204_string = "pt_k2system"; // 0x5b PushS
	var_205_int = 0; var_206_int = 0; // 0x5c PushV
	var_206_int = var_5_int; // 0x5d Mov
	func_462(var_205_int, var_206_int); // 0x5e NEW_2
	var_207_int = var_204_string + var_205_int; // 0x60 Add
	var_208_string = "_patrol"; // 0x61 PushS
	var_201_string = var_207_int + var_208_string; // 0x62 Add2
	var_202_string = "pers_rat_big"; // 0x63 MovS
	var_203_string = "k2system_rat_big.xml"; // 0x64 MovS
	func_294(var_199_object, var_200_object, var_201_string, var_202_string, var_203_string); // 0x65 NEW_2
	
Label_103:
	var_209_bool = 0; var_210_float = 0; // 0x67 PushV
	var_210_float = 0.5; // 0x68 MovF
	func_289(var_209_bool, var_210_float); // 0x69 NEW_2
	if(var_209_bool == 0) goto Label_122; // 0x6b JumpB
	var_211_object = Obj(); var_212_object = Obj(); var_213_string = ""; var_214_string = ""; var_215_string = ""; // 0x6c PushV
	var_212_object = var_6_object; // 0x6d Mov
	var_216_string = "pt_k2system"; // 0x6e PushS
	var_217_int = 0; var_218_int = 0; // 0x6f PushV
	var_218_int = var_5_int; // 0x70 Mov
	func_462(var_217_int, var_218_int); // 0x71 NEW_2
	var_219_int = var_216_string + var_217_int; // 0x73 Add
	var_220_string = "_nude"; // 0x74 PushS
	var_213_string = var_219_int + var_220_string; // 0x75 Add2
	var_214_string = "pers_rat"; // 0x76 MovS
	var_215_string = "k2system_rat.xml"; // 0x77 MovS
	func_294(var_211_object, var_212_object, var_213_string, var_214_string, var_215_string); // 0x78 NEW_2
	
Label_122:
	var_221_bool = 0; var_222_float = 0; // 0x7a PushV
	var_222_float = 0.5; // 0x7b MovF
	func_289(var_221_bool, var_222_float); // 0x7c NEW_2
	if(var_221_bool == 0) goto Label_141; // 0x7e JumpB
	var_223_object = Obj(); var_224_object = Obj(); var_225_string = ""; var_226_string = ""; var_227_string = ""; // 0x7f PushV
	var_224_object = var_6_object; // 0x80 Mov
	var_228_string = "pt_k2system"; // 0x81 PushS
	var_229_int = 0; var_230_int = 0; // 0x82 PushV
	var_230_int = var_5_int; // 0x83 Mov
	func_462(var_229_int, var_230_int); // 0x84 NEW_2
	var_231_int = var_228_string + var_229_int; // 0x86 Add
	var_232_string = "_dohodyaga1"; // 0x87 PushS
	var_225_string = var_231_int + var_232_string; // 0x88 Add2
	var_226_string = "pers_rat_big"; // 0x89 MovS
	var_227_string = "k2system_rat_big.xml"; // 0x8a MovS
	func_294(var_223_object, var_224_object, var_225_string, var_226_string, var_227_string); // 0x8b NEW_2
	
Label_141:
	var_233_bool = 0; var_234_float = 0; // 0x8d PushV
	var_234_float = 0.5; // 0x8e MovF
	func_289(var_233_bool, var_234_float); // 0x8f NEW_2
	if(var_233_bool == 0) goto Label_160; // 0x91 JumpB
	var_235_object = Obj(); var_236_object = Obj(); var_237_string = ""; var_238_string = ""; var_239_string = ""; // 0x92 PushV
	var_236_object = var_6_object; // 0x93 Mov
	var_240_string = "pt_k2system"; // 0x94 PushS
	var_241_int = 0; var_242_int = 0; // 0x95 PushV
	var_242_int = var_5_int; // 0x96 Mov
	func_462(var_241_int, var_242_int); // 0x97 NEW_2
	var_243_int = var_240_string + var_241_int; // 0x99 Add
	var_244_string = "_dohodyaga2"; // 0x9a PushS
	var_237_string = var_243_int + var_244_string; // 0x9b Add2
	var_238_string = "pers_rat"; // 0x9c MovS
	var_239_string = "k2system_rat.xml"; // 0x9d MovS
	func_294(var_235_object, var_236_object, var_237_string, var_238_string, var_239_string); // 0x9e NEW_2
	
Label_160:
	func_397(); // 0xa1 NEW_2
	var_6_object = 0; // 0xa3 SetNull
}


task_0_event_9(var_0_object, var_1_int, var_2_int, var_3_float)
{
	var_4_bool = var_2_int == var_1_int; // 0xa6 Eq
	if(var_4_bool == 0) goto Label_171; // 0xa7 JumpB
	func_282(var_3_float); // 0xa9 NEW_2
	
Label_171:
	return 0; // 0xab Return
}


main(var_0_object, var_1_int)
{
	var_2_int = 0; var_3_int = 0; // 0x0 PushV
	var_1_int = -1; // 0x1 TMovI
	var_3_int = 0; // 0x2 MovI
	
Label_3:
	var_4_int = 6; // 0x3 PushI
	var_5_bool = var_3_int < var_4_int; // 0x4 LT
	if(var_5_bool == 0) goto Label_17; // 0x5 JumpB
	var_6_int = 6; // 0x6 PushI
	var_7_int = var_6_int + var_3_int; // 0x7 Add
	var_8_int = 6; // 0x8 PushI
	var_9_int = var_3_int + var_8_int; // 0x9 Add
	var_10_int = 24; // 0xa PushI
	var_11_float = var_9_int * var_10_int; // 0xb Mult
	SetTimeEvent(var_7_int, var_11_float); // 0xc Func
	var_12_int = 1; // 0xe PushI
	var_3_int = var_3_int + var_12_int; // 0xf Add2
	goto Label_3; // 0x10 Jump
	
Label_17:
	CreateObjectVector(var_0_object); // 0x11 Func
	
Label_19:
	Hold(); // 0x13 Func
	goto Label_19; // 0x15 Jump
}


func_384()
{
	var_146_object = Obj(); var_147_object = Obj(); // 0x180 PushV
	var_148_int = 727; // 0x181 PushI
	var_149_int = 2; // 0x182 PushI
	var_150_int = 539106; // 0x183 PushI
	CreateDiaryEntry(var_147_object, var_148_int, var_149_int, var_150_int); // 0x184 Func
	var_151_bool = 0; var_152_object = Obj(); var_153_int = 0; // 0x186 PushV
	var_152_object = var_147_object; // 0x187 Mov
	var_153_int = 723; // 0x188 MovI
	func_423(var_151_bool, var_152_object, var_153_int); // 0x189 NEW_2
	return 2; // 0x18b Return
}


func_289(var_195_bool, var_196_float)
{
	var_197_float = 0; var_198_float = 0; // 0x121 PushV
	rand(var_198_float); // 0x122 Func
	var_195_bool = var_198_float < var_196_float; // 0x124 LT2
	return 2; // 0x125 Return
}


func_451(var_139_int, var_140_bool)
{
	var_141_string = "K2SystemSvitaRemoved"; // 0x1c4 PushS
	var_142_int = var_141_string + var_139_int; // 0x1c5 Add
	var_143_bool = var_140_bool; // 0x1c6 Push
	if(var_143_bool == 0) goto Label_458; // 0x1c7 JumpB
	var_144_int = 1; // 0x1c8 PushI
	goto Label_459; // 0x1c9 Jump
	
Label_459:
	SetVariable(var_142_int, var_144_int); // 0x1cb Func
	return 0; // 0x1cd Return
	
Label_458:
	var_145_int = 0; // 0x1ca PushI
}


func_294(var_172_object, var_173_object, var_174_string, var_175_string, var_176_string)
{
	var_182_bool = 0; var_183_cvector = CVector(0,0,0); var_184_cvector = CVector(0,0,0); var_185_object = Obj(); var_186_bool = 0; var_187_cvector = CVector(0,0,0); var_188_cvector = CVector(0,0,0); var_189_object = Obj(); // 0x126 PushV
	GetLocator(var_174_string, var_186_bool, var_187_cvector, var_188_cvector); // 0x127 ObjFunc
	var_190_bool = var_186_bool == 0; // 0x129 Not
	if(var_190_bool == 0) goto Label_307; // 0x12a JumpB
	var_191_string = "Locator "; // 0x12b PushS
	var_192_int = var_191_string + var_174_string; // 0x12c Add
	var_193_string = " doesn't exist"; // 0x12d PushS
	var_194_int = var_192_int + var_193_string; // 0x12e Add
	Trace(var_194_int); // 0x12f Func
	var_189_object = 0; // 0x131 SetNull
	goto Label_309; // 0x132 Jump
	
Label_309:
	var_172_object = var_189_object; // 0x135 Mov
	return 8; // 0x136 Return
	
Label_307:
	AddActor(var_189_object, var_175_string, var_173_object, var_187_cvector, var_188_cvector, var_176_string); // 0x133 Func
}


func_423(var_151_bool, var_152_object, var_153_int)
{
	var_154_object = Obj(); var_155_object = Obj(); var_156_int = 0; var_157_object = Obj(); var_158_object = Obj(); var_159_int = 0; // 0x1a7 PushV
	var_160_object = Obj(); // 0x1a8 PushV
	func_410(var_160_object); // 0x1a9 NEW_2
	var_157_object = var_160_object; // 0x1aa Mov
	Find(var_153_int, var_158_object); // 0x1ac ObjFunc
	var_165_bool = var_158_object == 0; // 0x1ae Not
	if(var_165_bool == 0) goto Label_438; // 0x1af JumpB
	var_166_string = "Can't find diary parent with id: "; // 0x1b0 PushS
	var_167_int = var_166_string + var_153_int; // 0x1b1 Add
	Trace(var_167_int); // 0x1b2 Func
	var_151_bool = 0; // 0x1b4 MovB
	return 6; // 0x1b5 Return
	
Label_438:
	AddChild(var_152_object); // 0x1b6 ObjFunc
	var_168_int = 7; // 0x1b8 PushI
	SendWorldWndMessage(var_168_int); // 0x1b9 Func
	GetCategory(var_159_int); // 0x1bb ObjFunc
	SetDiarySection(var_159_int); // 0x1bd Func
	var_151_bool = 0; // 0x1bf MovB
	return 6; // 0x1c0 Return
}


func_330(var_5_object)
{
	var_6_int = 0; var_7_int = 0; var_8_object = Obj(); var_9_int = 0; var_10_int = 0; var_11_object = Obj(); // 0x14a PushV
	var_12_object = var_5_object; // 0x14b Push
	if(var_12_object == 0) goto Label_350; // 0x14c JumpB
	size(var_9_int); // 0x14d ObjFunc
	var_10_int = 0; // 0x14f MovI
	
Label_336:
	var_13_bool = var_10_int < var_9_int; // 0x150 LT
	if(var_13_bool == 0) goto Label_348; // 0x151 JumpB
	get(var_11_object, var_10_int); // 0x152 ObjFunc
	var_14_object = var_11_object; // 0x154 Push
	if(var_14_object == 0) goto Label_344; // 0x155 JumpB
	Remove(); // 0x156 ObjFunc
	
Label_344:
	var_11_object = 0; // 0x158 SetNull
	var_15_int = 1; // 0x159 PushI
	var_10_int = var_10_int + var_15_int; // 0x15a Add2
	goto Label_336; // 0x15b Jump
	
Label_348:
	clear(); // 0x15c ObjFunc
	
Label_350:
	return 6; // 0x15e Return
}


func_172(var_1_int, var_9_int)
{
	var_16_object = Obj(); var_17_object = Obj(); // 0xac PushV
	GetMainOutdoorScene(var_17_object); // 0xad Func
	func_282(var_17_object); // 0xb0 NEW_2
	var_1_int = var_9_int; // 0xb2 TMov
	var_29_object = Obj(); var_30_object = Obj(); var_31_string = ""; var_32_string = ""; var_33_string = ""; // 0xb3 PushV
	var_30_object = var_17_object; // 0xb4 Mov
	var_34_string = "pt_k2system"; // 0xb5 PushS
	var_35_int = 0; var_36_int = 0; // 0xb6 PushV
	var_36_int = var_9_int; // 0xb7 Mov
	func_462(var_35_int, var_36_int); // 0xb8 NEW_2
	var_49_int = var_34_string + var_35_int; // 0xba Add
	var_50_string = "_albinos"; // 0xbb PushS
	var_31_string = var_49_int + var_50_string; // 0xbc Add2
	var_32_string = "pers_albinos"; // 0xbd MovS
	var_51_string = "k2system"; // 0xbe PushS
	var_52_int = var_51_string + var_9_int; // 0xbf Add
	var_53_string = "_albinos.xml"; // 0xc0 PushS
	var_33_string = var_52_int + var_53_string; // 0xc1 Add2
	func_312(var_30_object, var_31_string, var_32_string, var_33_string); // 0xc2 NEW_2
	add(var_29_object); // 0xc4 TObjFunc
	var_67_object = Obj(); var_68_object = Obj(); var_69_string = ""; var_70_string = ""; var_71_string = ""; // 0xc6 PushV
	var_68_object = var_17_object; // 0xc7 Mov
	var_72_string = "pt_k2system"; // 0xc8 PushS
	var_73_int = 0; var_74_int = 0; // 0xc9 PushV
	var_74_int = var_9_int; // 0xca Mov
	func_462(var_73_int, var_74_int); // 0xcb NEW_2
	var_75_int = var_72_string + var_73_int; // 0xcd Add
	var_76_string = "_patrol"; // 0xce PushS
	var_69_string = var_75_int + var_76_string; // 0xcf Add2
	var_70_string = "pers_patrool"; // 0xd0 MovS
	var_77_string = "k2system"; // 0xd1 PushS
	var_78_int = var_77_string + var_9_int; // 0xd2 Add
	var_79_string = "_patrol.xml"; // 0xd3 PushS
	var_71_string = var_78_int + var_79_string; // 0xd4 Add2
	func_312(var_68_object, var_69_string, var_70_string, var_71_string); // 0xd5 NEW_2
	add(var_67_object); // 0xd7 TObjFunc
	var_80_object = Obj(); var_81_object = Obj(); var_82_string = ""; var_83_string = ""; var_84_string = ""; // 0xd9 PushV
	var_81_object = var_17_object; // 0xda Mov
	var_85_string = "pt_k2system"; // 0xdb PushS
	var_86_int = 0; var_87_int = 0; // 0xdc PushV
	var_87_int = var_9_int; // 0xdd Mov
	func_462(var_86_int, var_87_int); // 0xde NEW_2
	var_88_int = var_85_string + var_86_int; // 0xe0 Add
	var_89_string = "_nude"; // 0xe1 PushS
	var_82_string = var_88_int + var_89_string; // 0xe2 Add2
	var_83_string = "pers_nudegirl"; // 0xe3 MovS
	var_90_string = "k2system"; // 0xe4 PushS
	var_91_int = var_90_string + var_9_int; // 0xe5 Add
	var_92_string = "_nude.xml"; // 0xe6 PushS
	var_84_string = var_91_int + var_92_string; // 0xe7 Add2
	func_312(var_81_object, var_82_string, var_83_string, var_84_string); // 0xe8 NEW_2
	add(var_80_object); // 0xea TObjFunc
	var_93_object = Obj(); var_94_object = Obj(); var_95_string = ""; var_96_string = ""; var_97_string = ""; // 0xec PushV
	var_94_object = var_17_object; // 0xed Mov
	var_98_string = "pt_k2system"; // 0xee PushS
	var_99_int = 0; var_100_int = 0; // 0xef PushV
	var_100_int = var_9_int; // 0xf0 Mov
	func_462(var_99_int, var_100_int); // 0xf1 NEW_2
	var_101_int = var_98_string + var_99_int; // 0xf3 Add
	var_102_string = "_dohodyaga1"; // 0xf4 PushS
	var_95_string = var_101_int + var_102_string; // 0xf5 Add2
	var_96_string = "pers_dohodyaga"; // 0xf6 MovS
	var_103_string = "k2system"; // 0xf7 PushS
	var_104_int = var_103_string + var_9_int; // 0xf8 Add
	var_105_string = "_dohodyaga1.xml"; // 0xf9 PushS
	var_97_string = var_104_int + var_105_string; // 0xfa Add2
	func_312(var_94_object, var_95_string, var_96_string, var_97_string); // 0xfb NEW_2
	add(var_93_object); // 0xfd TObjFunc
	var_106_object = Obj(); var_107_object = Obj(); var_108_string = ""; var_109_string = ""; var_110_string = ""; // 0xff PushV
	var_107_object = var_17_object; // 0x100 Mov
	var_111_string = "pt_k2system"; // 0x101 PushS
	var_112_int = 0; var_113_int = 0; // 0x102 PushV
	var_113_int = var_9_int; // 0x103 Mov
	func_462(var_112_int, var_113_int); // 0x104 NEW_2
	var_114_int = var_111_string + var_112_int; // 0x106 Add
	var_115_string = "_dohodyaga2"; // 0x107 PushS
	var_108_string = var_114_int + var_115_string; // 0x108 Add2
	var_109_string = "pers_dohodyaga"; // 0x109 MovS
	var_116_string = "k2system"; // 0x10a PushS
	var_117_int = var_116_string + var_9_int; // 0x10b Add
	var_118_string = "_dohodyaga2.xml"; // 0x10c PushS
	var_110_string = var_117_int + var_118_string; // 0x10d Add2
	func_312(var_107_object, var_108_string, var_109_string, var_110_string); // 0x10e NEW_2
	add(var_106_object); // 0x110 TObjFunc
	return 2; // 0x112 Return
}


func_397()
{
	var_245_object = Obj(); var_246_object = Obj(); // 0x18d PushV
	var_247_int = 728; // 0x18e PushI
	var_248_int = 2; // 0x18f PushI
	var_249_int = 539107; // 0x190 PushI
	CreateDiaryEntry(var_246_object, var_247_int, var_248_int, var_249_int); // 0x191 Func
	var_250_bool = 0; var_251_object = Obj(); var_252_int = 0; // 0x193 PushV
	var_251_object = var_246_object; // 0x194 Mov
	var_252_int = 723; // 0x195 MovI
	func_423(var_250_bool, var_251_object, var_252_int); // 0x196 NEW_2
	return 2; // 0x198 Return
}


func_462(var_35_int, var_36_int)
{
	var_37_int = 6; // 0x1cf PushI
	var_38_bool = var_36_int == var_37_int; // 0x1d0 Eq
	if(var_38_bool == 0) goto Label_468; // 0x1d1 JumpB
	var_35_int = 7; // 0x1d2 MovI
	return 0; // 0x1d3 Return
	
Label_468:
	var_39_int = 7; // 0x1d4 PushI
	var_40_bool = var_36_int == var_39_int; // 0x1d5 Eq
	if(var_40_bool == 0) goto Label_473; // 0x1d6 JumpB
	var_35_int = 11; // 0x1d7 MovI
	return 0; // 0x1d8 Return
	
Label_473:
	var_41_int = 8; // 0x1d9 PushI
	var_42_bool = var_36_int == var_41_int; // 0x1da Eq
	if(var_42_bool == 0) goto Label_478; // 0x1db JumpB
	var_35_int = 6; // 0x1dc MovI
	return 0; // 0x1dd Return
	
Label_478:
	var_43_int = 9; // 0x1de PushI
	var_44_bool = var_36_int == var_43_int; // 0x1df Eq
	if(var_44_bool == 0) goto Label_483; // 0x1e0 JumpB
	var_35_int = 9; // 0x1e1 MovI
	return 0; // 0x1e2 Return
	
Label_483:
	var_45_int = 10; // 0x1e3 PushI
	var_46_bool = var_36_int == var_45_int; // 0x1e4 Eq
	if(var_46_bool == 0) goto Label_488; // 0x1e5 JumpB
	var_35_int = 10; // 0x1e6 MovI
	return 0; // 0x1e7 Return
	
Label_488:
	var_47_int = 11; // 0x1e8 PushI
	var_48_bool = var_36_int == var_47_int; // 0x1e9 Eq
	if(var_48_bool == 0) goto Label_493; // 0x1ea JumpB
	var_35_int = 8; // 0x1eb MovI
	return 0; // 0x1ec Return
	
Label_493:
	var_35_int = var_36_int; // 0x1ed Mov
	return 0; // 0x1ee Return
}


func_410(var_160_object)
{
	var_161_object = Obj(); var_162_object = Obj(); // 0x19a PushV
	GetDiaryRoot(var_162_object); // 0x19b Func
	var_163_bool = var_162_object == 0; // 0x19d Not
	if(var_163_bool == 0) goto Label_420; // 0x19e JumpB
	var_164_string = "Can't retrieve diary root"; // 0x19f PushS
	Trace(var_164_string); // 0x1a0 Func
	var_160_object = 0; // 0x1a2 MovB
	return 2; // 0x1a3 Return
	
Label_420:
	var_160_object = var_162_object; // 0x1a4 Mov
	return 2; // 0x1a5 Return
}


func_276(var_0_object)
{
	var_122_object = Obj(); var_123_string = ""; // 0x114 PushV
	var_122_object = var_0_object; // 0x115 MovT
	var_123_string = "wonder"; // 0x116 MovS
	func_351(var_122_object, var_123_string); // 0x117 NEW_2
	return 0; // 0x119 Return
}


func_375(var_10_int)
{
	var_11_float = 0; var_12_float = 0; // 0x177 PushV
	GetGameTime(var_12_float); // 0x178 Func
	var_13_int = 1; // 0x17a PushI
	var_14_int = 0; // 0x17b PushV
	var_15_int = 24; // 0x17c PushI
	var_14_int = var_12_float / var_12_float; // 0x17d Div2
	var_10_int = var_13_int + var_14_int; // 0x17e Add2
	return 2; // 0x17f Return
}


func_312(var_29_object, var_31_string, var_32_string, var_33_string)
{
	var_54_bool = 0; var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_object = Obj(); var_58_bool = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_object = Obj(); // 0x138 PushV
	GetLocator(var_31_string, var_58_bool, var_59_cvector, var_60_cvector); // 0x139 ObjFunc
	var_62_bool = var_58_bool == 0; // 0x13b Not
	if(var_62_bool == 0) goto Label_325; // 0x13c JumpB
	var_63_string = "Locator "; // 0x13d PushS
	var_64_int = var_63_string + var_31_string; // 0x13e Add
	var_65_string = " doesn't exist"; // 0x13f PushS
	var_66_int = var_64_int + var_65_string; // 0x140 Add
	Trace(var_66_int); // 0x141 Func
	var_61_object = 0; // 0x143 SetNull
	goto Label_327; // 0x144 Jump
	
Label_327:
	var_29_object = var_61_object; // 0x147 Mov
	return 8; // 0x148 Return
	
Label_325:
	AddStationaryActor(var_61_object, var_59_cvector, var_60_cvector, var_32_string, var_33_string); // 0x145 ObjFunc
}


func_282(var_0_object)
{
	var_5_object = Obj(); // 0x11a PushV
	var_5_object = var_0_object; // 0x11b MovT
	func_330(var_5_object); // 0x11c NEW_2
	clear(); // 0x11e TObjFunc
	return 0; // 0x120 Return
}


func_351(var_122_object, var_123_string)
{
	var_124_int = 0; var_125_int = 0; var_126_object = Obj(); var_127_object = Obj(); var_128_int = 0; var_129_int = 0; var_130_object = Obj(); var_131_object = Obj(); // 0x15f PushV
	var_132_object = var_122_object; // 0x160 Push
	if(var_132_object == 0) goto Label_374; // 0x161 JumpB
	size(var_128_int); // 0x162 ObjFunc
	var_129_int = 0; // 0x164 MovI
	
Label_357:
	var_133_bool = var_129_int < var_128_int; // 0x165 LT
	if(var_133_bool == 0) goto Label_374; // 0x166 JumpB
	get(var_130_object, var_129_int); // 0x167 ObjFunc
	var_134_object = var_130_object; // 0x169 Push
	if(var_134_object == 0) goto Label_370; // 0x16a JumpB
	GetActor(var_131_object); // 0x16b ObjFunc
	var_135_object = var_131_object; // 0x16d Push
	if(var_135_object == 0) goto Label_369; // 0x16e JumpB
	Trigger(var_131_object, var_123_string); // 0x16f Func
	
Label_369:
	var_131_object = 0; // 0x171 SetNull
	
Label_370:
	var_130_object = 0; // 0x172 SetNull
	var_136_int = 1; // 0x173 PushI
	var_129_int = var_129_int + var_136_int; // 0x174 Add2
	goto Label_357; // 0x175 Jump
	
Label_374:
	return 8; // 0x176 Return
}


