task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_cvector, var_9_cvector, var_10_string)
{
	var_11_object = Obj(); var_12_int = 0; var_13_bool = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_object = Obj(); var_17_int = 0; var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_bool = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); var_27_cvector = CVector(0,0,0); var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; var_31_object = Obj(); var_32_int = 0; var_33_bool = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_object = Obj(); var_37_int = 0; var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_object = Obj(); var_45_object = Obj(); var_46_object = Obj(); var_47_cvector = CVector(0,0,0); var_48_object = Obj(); var_49_object = Obj(); var_50_int = 0; // 0x2f PushV
	Trace(var_10_string); // 0x30 Func
	var_51_string = "init_kabak"; // 0x32 PushS
	var_52_bool = var_10_string == var_51_string; // 0x33 Eq
	if(var_52_bool == 0) goto Label_87; // 0x34 JumpB
	var_53_string = "shouse1_kabak"; // 0x35 PushS
	GetSceneByName(var_31_object, var_53_string); // 0x36 Func
	var_32_int = 1; // 0x38 MovI
	
Label_57:
	var_54_string = "pt_k11q01_soldier"; // 0x39 PushS
	var_55_int = var_54_string + var_32_int; // 0x3a Add
	GetLocator(var_55_int, var_33_bool, var_34_cvector, var_35_cvector); // 0x3b ObjFunc
	var_56_bool = var_33_bool == 0; // 0x3d Not
	if(var_56_bool == 0) goto Label_64; // 0x3e JumpB
	goto Label_77; // 0x3f Jump
	
Label_77:
	var_57_object = Obj(); var_58_object = Obj(); var_59_string = ""; var_60_string = ""; var_61_string = ""; // 0x4d PushV
	var_58_object = var_31_object; // 0x4e Mov
	var_59_string = "pt_k11q01_officer"; // 0x4f MovS
	var_60_string = "pers_soldat"; // 0x50 MovS
	var_61_string = "k11q01_kabak_officer.xml"; // 0x51 MovS
	func_380(var_57_object, var_58_object, var_59_string, var_60_string, var_61_string); // 0x52 NEW_2
	var_1_object = var_57_object; // 0x53 TMov
	var_31_object = 0; // 0x55 SetNull
	goto Label_267; // 0x56 Jump
	
Label_267:
	return 40; // 0x10b Return
	
Label_64:
	var_75_object = Obj(); var_76_object = Obj(); var_77_string = ""; var_78_string = ""; var_79_string = ""; // 0x40 PushV
	var_76_object = var_31_object; // 0x41 Mov
	var_80_string = "pt_k11q01_soldier"; // 0x42 PushS
	var_77_string = var_80_string + var_32_int; // 0x43 Add2
	var_78_string = "pers_soldat"; // 0x44 MovS
	var_79_string = "k11q01_kabak_soldier.xml"; // 0x45 MovS
	func_380(var_75_object, var_76_object, var_77_string, var_78_string, var_79_string); // 0x46 NEW_2
	add(var_75_object); // 0x48 TObjFunc
	var_81_int = 1; // 0x4a PushI
	var_32_int = var_32_int + var_81_int; // 0x4b Add2
	goto Label_57; // 0x4c Jump
	
Label_87:
	var_82_string = "init_gun"; // 0x57 PushS
	var_83_bool = var_10_string == var_82_string; // 0x58 Eq
	if(var_83_bool == 0) goto Label_125; // 0x59 JumpB
	GetMainOutdoorScene(var_36_object); // 0x5a Func
	var_37_int = 1; // 0x5c MovI
	
Label_93:
	var_84_string = "pt_k11q01_soldier"; // 0x5d PushS
	var_85_int = var_84_string + var_37_int; // 0x5e Add
	GetLocator(var_85_int, var_38_bool, var_39_cvector, var_40_cvector); // 0x5f ObjFunc
	var_86_bool = var_38_bool == 0; // 0x61 Not
	if(var_86_bool == 0) goto Label_100; // 0x62 JumpB
	goto Label_113; // 0x63 Jump
	
Label_113:
	var_87_string = "pt_k11q01_agony_officer"; // 0x71 PushS
	GetLocator(var_87_string, var_41_bool, var_42_cvector, var_43_cvector); // 0x72 ObjFunc
	var_88_cvector = CVector(0.0, 7.0, 0.0); // 0x74 PushVec
	var_42_cvector = var_42_cvector + var_88_cvector; // 0x75 Add2
	var_89_string = "pers_soldat"; // 0x76 PushS
	var_90_string = "k11q01_officer_agony.xml"; // 0x77 PushS
	var_91_bool = 1; // 0x78 PushB
	AddStationaryActor(var_50_int, var_42_cvector, var_43_cvector, var_89_string, var_90_string, var_91_bool); // 0x79 ObjFunc
	var_36_object = 0; // 0x7b SetNull
	goto Label_267; // 0x7c Jump
	
Label_100:
	var_92_object = Obj(); var_93_object = Obj(); var_94_string = ""; var_95_string = ""; var_96_string = ""; // 0x64 PushV
	var_93_object = var_36_object; // 0x65 Mov
	var_97_string = "pt_k11q01_soldier"; // 0x66 PushS
	var_94_string = var_97_string + var_37_int; // 0x67 Add2
	var_95_string = "pers_soldat"; // 0x68 MovS
	var_96_string = "k11q01_soldier.xml"; // 0x69 MovS
	func_398(var_93_object, var_94_string, var_95_string, var_96_string); // 0x6a NEW_2
	add(var_92_object); // 0x6c TObjFunc
	var_111_int = 1; // 0x6e PushI
	var_37_int = var_37_int + var_111_int; // 0x6f Add2
	goto Label_93; // 0x70 Jump
	
Label_125:
	var_112_string = "cure_officer"; // 0x7d PushS
	var_113_bool = var_10_string == var_112_string; // 0x7e Eq
	if(var_113_bool == 0) goto Label_162; // 0x7f JumpB
	var_114_string = "player"; // 0x80 PushS
	FindActor(var_44_object, var_114_string); // 0x81 Func
	GetPosition(var_43_cvector); // 0x83 ObjFunc
	GetDirection(var_42_cvector); // 0x85 ObjFunc
	var_115_float = GetByIndex(var_42_cvector, 1); // 0x87 PushE
	var_115_float = 0; // 0x88 MovI
	SetByIndex(var_9_cvector, 1) = var_115_float; // 0x89 PopE
	var_116_cvector = CVector(0,0,0); var_117_cvector = CVector(0,0,0); // 0x8a PushV
	var_117_cvector = var_9_cvector; // 0x8b MovT
	func_353(var_116_cvector, var_117_cvector); // 0x8c NEW_2
	var_9_cvector = var_116_cvector; // 0x8d TMov
	GetActor(var_45_object); // 0x8f TObjFunc
	var_123_object = var_45_object; // 0x91 Push
	if(var_123_object == 0) goto Label_149; // 0x92 JumpB
	RemoveActor(var_45_object); // 0x93 Func
	
Label_149:
	Remove(); // 0x95 TObjFunc
	var_124_string = "k11q01Cured"; // 0x97 PushS
	var_125_int = 1; // 0x98 PushI
	SetVariable(var_124_string, var_125_int); // 0x99 Func
	var_126_object = Obj(); var_127_string = ""; // 0x9b PushV
	var_127_string = "quest_k11_01_cutscene"; // 0x9c MovS
	func_369(var_126_object, var_127_string); // 0x9d NEW_2
	var_45_object = 0; // 0x9f SetNull
	var_44_object = 0; // 0xa0 SetNull
	goto Label_267; // 0xa1 Jump
	
Label_162:
	var_134_string = "cutscene_end"; // 0xa2 PushS
	var_135_bool = var_10_string == var_134_string; // 0xa3 Eq
	if(var_135_bool == 0) goto Label_180; // 0xa4 JumpB
	GetMainOutdoorScene(var_46_object); // 0xa5 Func
	var_136_float = 150.0; // 0xa7 PushF
	var_137_float = var_9_cvector * var_136_float; // 0xa8 Mult
	var_138_int = var_8_cvector + var_137_float; // 0xa9 Add
	var_139_cvector = CVector(0.0, 10.0, 0.0); // 0xaa PushVec
	var_47_cvector = var_138_int + var_139_cvector; // 0xab Add2
	var_140_int = -var_9_cvector; // 0xac Neg
	var_141_string = "pers_soldat"; // 0xad PushS
	var_142_string = "k11q01_officer.xml"; // 0xae PushS
	var_143_bool = 1; // 0xaf PushB
	AddStationaryActor(var_141_string, var_47_cvector, var_140_int, var_141_string, var_142_string, var_143_bool); // 0xb0 ObjFunc
	var_46_object = 0; // 0xb2 SetNull
	goto Label_267; // 0xb3 Jump
	
Label_180:
	var_144_string = "init_house_petr"; // 0xb4 PushS
	var_145_bool = var_10_string == var_144_string; // 0xb5 Eq
	if(var_145_bool == 0) goto Label_204; // 0xb6 JumpB
	var_146_string = "house_petr"; // 0xb7 PushS
	GetSceneByName(var_48_object, var_146_string); // 0xb8 Func
	var_147_object = Obj(); var_148_object = Obj(); var_149_string = ""; var_150_string = ""; var_151_string = ""; // 0xba PushV
	var_148_object = var_48_object; // 0xbb Mov
	var_149_string = "pt_k11q01_andrei"; // 0xbc MovS
	var_150_string = "NPC_Andrei"; // 0xbd MovS
	var_151_string = "k11q01_andrei.xml"; // 0xbe MovS
	func_380(var_147_object, var_148_object, var_149_string, var_150_string, var_151_string); // 0xbf NEW_2
	var_7_object = var_147_object; // 0xc0 TMov
	var_152_object = Obj(); var_153_object = Obj(); var_154_string = ""; var_155_string = ""; var_156_string = ""; // 0xc2 PushV
	var_153_object = var_48_object; // 0xc3 Mov
	var_154_string = "pt_k11q01_danko"; // 0xc4 MovS
	var_155_string = "NPC_Bakalavr"; // 0xc5 MovS
	var_156_string = "k11q01_danko.xml"; // 0xc6 MovS
	func_380(var_152_object, var_153_object, var_154_string, var_155_string, var_156_string); // 0xc7 NEW_2
	var_5_object = var_152_object; // 0xc8 TMov
	var_48_object = 0; // 0xca SetNull
	goto Label_267; // 0xcb Jump
	
Label_204:
	var_157_string = "place_burah"; // 0xcc PushS
	var_158_bool = var_10_string == var_157_string; // 0xcd Eq
	if(var_158_bool == 0) goto Label_226; // 0xce JumpB
	var_159_string = "burah_home"; // 0xcf PushS
	GetSceneByName(var_49_object, var_159_string); // 0xd0 Func
	var_160_string = "noburah"; // 0xd2 PushS
	Trigger(var_49_object, var_160_string); // 0xd3 Func
	var_161_string = "boiny"; // 0xd5 PushS
	GetSceneByName(var_49_object, var_161_string); // 0xd6 Func
	var_162_object = Obj(); var_163_object = Obj(); var_164_string = ""; var_165_string = ""; var_166_string = ""; // 0xd8 PushV
	var_163_object = var_49_object; // 0xd9 Mov
	var_164_string = "pt_k11q01_burah"; // 0xda MovS
	var_165_string = "NPC_Burah"; // 0xdb MovS
	var_166_string = "k11q01_burah.xml"; // 0xdc MovS
	func_380(var_162_object, var_163_object, var_164_string, var_165_string, var_166_string); // 0xdd NEW_2
	var_6_object = var_162_object; // 0xde TMov
	var_49_object = 0; // 0xe0 SetNull
	goto Label_267; // 0xe1 Jump
	
Label_226:
	var_167_string = "fail"; // 0xe2 PushS
	var_168_bool = var_10_string == var_167_string; // 0xe3 Eq
	if(var_168_bool == 0) goto Label_239; // 0xe4 JumpB
	func_268(); // 0xe6 NEW_2
	func_506(); // 0xe9 NEW_2
	func_512(); // 0xec NEW_2
	goto Label_267; // 0xee Jump
	
Label_239:
	var_219_string = "completed"; // 0xef PushS
	var_220_bool = var_10_string == var_219_string; // 0xf0 Eq
	if(var_220_bool == 0) goto Label_252; // 0xf1 JumpB
	func_276(); // 0xf3 NEW_2
	func_506(); // 0xf6 NEW_2
	func_512(); // 0xf9 NEW_2
	goto Label_267; // 0xfb Jump
	
Label_252:
	var_223_string = "cleanup"; // 0xfc PushS
	var_224_bool = var_10_string == var_223_string; // 0xfd Eq
	if(var_224_bool == 0) goto Label_267; // 0xfe JumpB
	var_225_string = "k11q01"; // 0xff PushS
	GetVariable(var_225_string, var_50_int); // 0x100 Func
	var_226_int = 1000; // 0x102 PushI
	var_227_bool = var_50_int != var_226_int; // 0x103 Neq
	if(var_227_bool == 0) goto Label_264; // 0x104 JumpB
	func_268(); // 0x106 NEW_2
	
Label_264:
	func_332(); // 0x109 NEW_2
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_cvector, var_9_cvector)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x0 PushV
	var_12_object = Obj(); // 0x1 PushV
	func_363(var_12_object); // 0x2 NEW_2
	var_0_object = var_12_object; // 0x3 TMov
	var_15_object = Obj(); // 0x5 PushV
	func_363(var_15_object); // 0x6 NEW_2
	var_2_object = var_15_object; // 0x7 TMov
	var_16_string = "cot_eva"; // 0x9 PushS
	GetSceneByName(var_11_object, var_16_string); // 0xa Func
	var_17_string = "nodanko"; // 0xc PushS
	Trigger(var_11_object, var_17_string); // 0xd Func
	var_18_string = ""; var_19_bool = 0; // 0xf PushV
	var_18_string = "icot_eva_door"; // 0x10 MovS
	var_19_bool = 0; // 0x11 MovB
	func_433(var_18_string, var_19_bool); // 0x12 NEW_2
	var_29_string = "shouse1_kabak"; // 0x14 PushS
	GetSceneByName(var_11_object, var_29_string); // 0x15 Func
	var_30_string = "noandrei"; // 0x17 PushS
	Trigger(var_11_object, var_30_string); // 0x18 Func
	var_31_string = "warehouse_rubin"; // 0x1a PushS
	GetSceneByName(var_11_object, var_31_string); // 0x1b Func
	var_32_string = "rubin"; // 0x1d PushS
	Trigger(var_11_object, var_32_string); // 0x1e Func
	var_33_string = ""; var_34_bool = 0; // 0x20 PushV
	var_33_string = "sobor@door1"; // 0x21 MovS
	var_34_bool = 0; // 0x22 MovB
	func_416(var_33_string, var_34_bool); // 0x23 NEW_2
	var_43_string = ""; var_44_bool = 0; // 0x25 PushV
	var_43_string = "cot_maria@door1"; // 0x26 MovS
	var_44_bool = 1; // 0x27 MovB
	func_416(var_43_string, var_44_bool); // 0x28 NEW_2
	
Label_42:
	Hold(); // 0x2a Func
	goto Label_42; // 0x2c Jump
}


func_512()
{
	var_215_object = Obj(); var_216_object = Obj(); // 0x200 PushV
	var_217_string = "burah_home"; // 0x201 PushS
	GetSceneByName(var_216_object, var_217_string); // 0x202 Func
	var_218_string = "noburah"; // 0x204 PushS
	Trigger(var_216_object, var_218_string); // 0x205 Func
	return 2; // 0x207 Return
}


func_454(var_209_bool, var_210_string, var_211_string)
{
	var_212_object = Obj(); var_213_object = Obj(); // 0x1c6 PushV
	FindActor(var_213_object, var_210_string); // 0x1c7 Func
	var_214_bool = var_213_object == 0; // 0x1c9 NullEq
	if(var_214_bool == 0) goto Label_461; // 0x1ca JumpB
	var_209_bool = 0; // 0x1cb MovB
	return 2; // 0x1cc Return
	
Label_461:
	Trigger(var_213_object, var_211_string); // 0x1cd Func
	var_209_bool = 1; // 0x1cf MovB
	return 2; // 0x1d0 Return
}


func_521()
{
	var_238_object = Obj(); var_239_object = Obj(); // 0x209 PushV
	var_240_string = "burah_home"; // 0x20a PushS
	GetSceneByName(var_239_object, var_240_string); // 0x20b Func
	var_241_string = "burah"; // 0x20d PushS
	Trigger(var_239_object, var_241_string); // 0x20e Func
	return 2; // 0x210 Return
}


func_268()
{
	var_169_string = "k11q01"; // 0x10c PushS
	var_170_int = -1; // 0x10d PushI
	SetVariable(var_169_string, var_170_int); // 0x10e Func
	func_284(var_46_object, var_47_cvector, var_48_object, var_49_object, var_50_int); // 0x111 NEW_2
	return 0; // 0x113 Return
}


func_332()
{
	EventDisable(26); // 0x14c EventDisable
	var_228_string = ""; var_229_bool = 0; // 0x14d PushV
	var_228_string = "cot_maria@door1"; // 0x14e MovS
	var_229_bool = 0; // 0x14f MovB
	func_416(var_228_string, var_229_bool); // 0x150 NEW_2
	func_521(); // 0x153 NEW_2
	var_242_object = Obj(); // 0x155 PushV
	func_347(var_242_object); // 0x156 NEW_2
	RemoveActor(var_242_object); // 0x158 Func
	return 0; // 0x15a Return
}


func_398(var_92_object, var_94_string, var_95_string, var_96_string)
{
	var_98_bool = 0; var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_object = Obj(); var_102_bool = 0; var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); var_105_object = Obj(); // 0x18e PushV
	GetLocator(var_94_string, var_102_bool, var_103_cvector, var_104_cvector); // 0x18f ObjFunc
	var_106_bool = var_102_bool == 0; // 0x191 Not
	if(var_106_bool == 0) goto Label_411; // 0x192 JumpB
	var_107_string = "Locator "; // 0x193 PushS
	var_108_int = var_107_string + var_94_string; // 0x194 Add
	var_109_string = " doesn't exist"; // 0x195 PushS
	var_110_int = var_108_int + var_109_string; // 0x196 Add
	Trace(var_110_int); // 0x197 Func
	var_105_object = 0; // 0x199 SetNull
	goto Label_413; // 0x19a Jump
	
Label_413:
	var_92_object = var_105_object; // 0x19d Mov
	return 8; // 0x19e Return
	
Label_411:
	AddStationaryActor(var_105_object, var_103_cvector, var_104_cvector, var_95_string, var_96_string); // 0x19b ObjFunc
}


func_466(var_191_object)
{
	var_192_int = 0; var_193_int = 0; var_194_object = Obj(); var_195_int = 0; var_196_int = 0; var_197_object = Obj(); // 0x1d2 PushV
	var_198_object = var_191_object; // 0x1d3 Push
	if(var_198_object == 0) goto Label_486; // 0x1d4 JumpB
	size(var_195_int); // 0x1d5 ObjFunc
	var_196_int = 0; // 0x1d7 MovI
	
Label_472:
	var_199_bool = var_196_int < var_195_int; // 0x1d8 LT
	if(var_199_bool == 0) goto Label_484; // 0x1d9 JumpB
	get(var_197_object, var_196_int); // 0x1da ObjFunc
	var_200_object = var_197_object; // 0x1dc Push
	if(var_200_object == 0) goto Label_480; // 0x1dd JumpB
	Remove(); // 0x1de ObjFunc
	
Label_480:
	var_197_object = 0; // 0x1e0 SetNull
	var_201_int = 1; // 0x1e1 PushI
	var_196_int = var_196_int + var_201_int; // 0x1e2 Add2
	goto Label_472; // 0x1e3 Jump
	
Label_484:
	clear(); // 0x1e4 ObjFunc
	
Label_486:
	return 6; // 0x1e6 Return
}


func_276()
{
	var_221_string = "k11q01"; // 0x114 PushS
	var_222_int = 1000; // 0x115 PushI
	SetVariable(var_221_string, var_222_int); // 0x116 Func
	func_284(var_46_object, var_47_cvector, var_48_object, var_49_object, var_50_int); // 0x119 NEW_2
	return 0; // 0x11b Return
}


func_347(var_242_object)
{
	var_243_object = Obj(); var_244_object = Obj(); // 0x15b PushV
	self(var_244_object); // 0x15c Func
	var_242_object = var_244_object; // 0x15e Mov
	return 2; // 0x15f Return
}


func_284(var_0_object, var_2_object, var_47_cvector, var_48_object, var_49_object)
{
	var_171_object = Obj(); var_172_object = Obj(); // 0x11c PushV
	var_173_string = "cot_eva"; // 0x11d PushS
	GetSceneByName(var_172_object, var_173_string); // 0x11e Func
	var_174_string = "danko"; // 0x120 PushS
	Trigger(var_172_object, var_174_string); // 0x121 Func
	var_175_string = "shouse1_kabak"; // 0x123 PushS
	GetSceneByName(var_172_object, var_175_string); // 0x124 Func
	var_176_string = "andrei"; // 0x126 PushS
	Trigger(var_172_object, var_176_string); // 0x127 Func
	var_177_object = Obj(); var_178_string = ""; // 0x129 PushV
	var_177_object = var_0_object; // 0x12a MovT
	var_178_string = "cleanup"; // 0x12b MovS
	func_487(var_177_object, var_178_string); // 0x12c NEW_2
	var_189_object = var_1_object; // 0x12e PushT
	if(var_189_object == 0) goto Label_307; // 0x12f JumpB
	var_190_string = "cleanup"; // 0x130 PushS
	Trigger(var_190_string, var_190_string); // 0x131 Func
	
Label_307:
	var_191_object = Obj(); // 0x133 PushV
	var_191_object = var_2_object; // 0x134 MovT
	func_466(var_191_object); // 0x135 NEW_2
	var_202_object = var_3_object; // 0x137 PushT
	if(var_202_object == 0) goto Label_315; // 0x138 JumpB
	Remove(); // 0x139 TObjFunc
	
Label_315:
	var_203_object = var_5_object; // 0x13b PushT
	if(var_203_object == 0) goto Label_320; // 0x13c JumpB
	var_204_string = "cleanup"; // 0x13d PushS
	Trigger(var_49_object, var_204_string); // 0x13e Func
	
Label_320:
	var_205_object = var_6_object; // 0x140 PushT
	if(var_205_object == 0) goto Label_325; // 0x141 JumpB
	var_206_string = "cleanup"; // 0x142 PushS
	Trigger(var_48_object, var_206_string); // 0x143 Func
	
Label_325:
	var_207_object = var_7_object; // 0x145 PushT
	if(var_207_object == 0) goto Label_330; // 0x146 JumpB
	var_208_string = "cleanup"; // 0x147 PushS
	Trigger(var_47_cvector, var_208_string); // 0x148 Func
	
Label_330:
	return 2; // 0x14a Return
}


func_416(var_33_string, var_34_bool)
{
	var_35_object = Obj(); var_36_object = Obj(); // 0x1a0 PushV
	FindActor(var_36_object, var_33_string); // 0x1a1 Func
	var_37_bool = var_36_object == 0; // 0x1a3 Not
	if(var_37_bool == 0) goto Label_428; // 0x1a4 JumpB
	var_38_string = "Door "; // 0x1a5 PushS
	var_39_int = var_38_string + var_33_string; // 0x1a6 Add
	var_40_string = " not found"; // 0x1a7 PushS
	var_41_int = var_39_int + var_40_string; // 0x1a8 Add
	Trace(var_41_int); // 0x1a9 Func
	goto Label_431; // 0x1ab Jump
	
Label_431:
	return 2; // 0x1af Return
	
Label_428:
	var_42_string = "locked"; // 0x1ac PushS
	SetProperty(var_42_string, var_34_bool); // 0x1ad ObjFunc
}


func_353(var_116_cvector, var_117_cvector)
{
	var_118_float = 0; var_119_float = 0; // 0x161 PushV
	var_120_int = var_117_cvector | var_117_cvector; // 0x162 Or
	var_119_float = sqrt(var_120_int); // 0x163 Sqrt2
	var_121_float = 0.0; // 0x164 PushF
	var_122_bool = var_119_float < var_121_float; // 0x165 LT
	if(var_122_bool == 0) goto Label_361; // 0x166 JumpB
	var_116_cvector = CVector(0.0, 0.0, 0.0); // 0x167 MovV
	return 2; // 0x168 Return
	
Label_361:
	var_116_cvector = var_117_cvector / var_117_cvector; // 0x169 Div2
	return 2; // 0x16a Return
}


func_487(var_177_object, var_178_string)
{
	var_179_int = 0; var_180_int = 0; var_181_object = Obj(); var_182_int = 0; var_183_int = 0; var_184_object = Obj(); // 0x1e7 PushV
	var_185_object = var_177_object; // 0x1e8 Push
	if(var_185_object == 0) goto Label_505; // 0x1e9 JumpB
	size(var_182_int); // 0x1ea ObjFunc
	var_183_int = 0; // 0x1ec MovI
	
Label_493:
	var_186_bool = var_183_int < var_182_int; // 0x1ed LT
	if(var_186_bool == 0) goto Label_505; // 0x1ee JumpB
	get(var_184_object, var_183_int); // 0x1ef ObjFunc
	var_187_object = var_184_object; // 0x1f1 Push
	if(var_187_object == 0) goto Label_501; // 0x1f2 JumpB
	Trigger(var_184_object, var_178_string); // 0x1f3 Func
	
Label_501:
	var_184_object = 0; // 0x1f5 SetNull
	var_188_int = 1; // 0x1f6 PushI
	var_183_int = var_183_int + var_188_int; // 0x1f7 Add2
	goto Label_493; // 0x1f8 Jump
	
Label_505:
	return 6; // 0x1f9 Return
}


func_363(var_12_object)
{
	var_13_object = Obj(); var_14_object = Obj(); // 0x16b PushV
	CreateObjectVector(var_14_object); // 0x16c Func
	var_12_object = var_14_object; // 0x16e Mov
	return 2; // 0x16f Return
}


func_433(var_18_string, var_19_bool)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x1b1 PushV
	FindActor(var_21_object, var_18_string); // 0x1b2 Func
	var_22_bool = var_21_object == 0; // 0x1b4 Not
	if(var_22_bool == 0) goto Label_445; // 0x1b5 JumpB
	var_23_string = "Door "; // 0x1b6 PushS
	var_24_int = var_23_string + var_18_string; // 0x1b7 Add
	var_25_string = " not found"; // 0x1b8 PushS
	var_26_int = var_24_int + var_25_string; // 0x1b9 Add
	Trace(var_26_int); // 0x1ba Func
	goto Label_452; // 0x1bc Jump
	
Label_452:
	return 2; // 0x1c4 Return
	
Label_445:
	var_27_bool = var_19_bool; // 0x1bd Push
	if(var_27_bool == 0) goto Label_449; // 0x1be JumpB
	Close(); // 0x1bf ObjFunc
	
Label_449:
	var_28_string = "locked"; // 0x1c1 PushS
	SetProperty(var_28_string, var_19_bool); // 0x1c2 ObjFunc
}


func_369(var_126_object, var_127_string)
{
	var_128_object = Obj(); var_129_object = Obj(); var_130_object = Obj(); var_131_object = Obj(); // 0x171 PushV
	GetMainOutdoorScene(var_130_object); // 0x172 Func
	var_132_string = ".bin"; // 0x174 PushS
	var_133_int = var_127_string + var_132_string; // 0x175 Add
	AddBlankActor(var_131_object, var_130_object, var_127_string, var_133_int); // 0x176 Func
	var_126_object = var_131_object; // 0x178 Mov
	return 4; // 0x179 Return
}


func_506()
{
	var_209_bool = 0; var_210_string = ""; var_211_string = ""; // 0x1fa PushV
	var_210_string = "klara2_npc_positioner"; // 0x1fb MovS
	var_211_string = "init"; // 0x1fc MovS
	func_454(var_209_bool, var_210_string, var_211_string); // 0x1fd NEW_2
	return 0; // 0x1ff Return
}


func_380(var_57_object, var_58_object, var_59_string, var_60_string, var_61_string)
{
	var_62_bool = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_object = Obj(); var_66_bool = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_object = Obj(); // 0x17c PushV
	GetLocator(var_59_string, var_66_bool, var_67_cvector, var_68_cvector); // 0x17d ObjFunc
	var_70_bool = var_66_bool == 0; // 0x17f Not
	if(var_70_bool == 0) goto Label_393; // 0x180 JumpB
	var_71_string = "Locator "; // 0x181 PushS
	var_72_int = var_71_string + var_59_string; // 0x182 Add
	var_73_string = " doesn't exist"; // 0x183 PushS
	var_74_int = var_72_int + var_73_string; // 0x184 Add
	Trace(var_74_int); // 0x185 Func
	var_69_object = 0; // 0x187 SetNull
	goto Label_395; // 0x188 Jump
	
Label_395:
	var_57_object = var_69_object; // 0x18b Mov
	return 8; // 0x18c Return
	
Label_393:
	AddActor(var_69_object, var_60_string, var_58_object, var_67_cvector, var_68_cvector, var_61_string); // 0x189 Func
}


