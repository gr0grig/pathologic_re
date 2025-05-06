task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_string)
{
	var_9_object = Obj(); var_10_int = 0; var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_object = Obj(); var_15_int = 0; var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); var_23_int = 0; var_24_object = Obj(); var_25_int = 0; var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_object = Obj(); var_30_int = 0; var_31_bool = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_object = Obj(); var_35_object = Obj(); var_36_object = Obj(); var_37_object = Obj(); var_38_int = 0; // 0x2f PushV
	Trace(var_8_string); // 0x30 Func
	var_39_string = "init_kabak"; // 0x32 PushS
	var_40_bool = var_8_string == var_39_string; // 0x33 Eq
	if(var_40_bool == 0) goto Label_87; // 0x34 JumpB
	var_41_string = "shouse1_kabak"; // 0x35 PushS
	GetSceneByName(var_24_object, var_41_string); // 0x36 Func
	var_25_int = 1; // 0x38 MovI
	
Label_57:
	var_42_string = "pt_k11q01_soldier"; // 0x39 PushS
	var_43_int = var_42_string + var_25_int; // 0x3a Add
	GetLocator(var_43_int, var_26_bool, var_27_cvector, var_28_cvector); // 0x3b ObjFunc
	var_44_bool = var_26_bool == 0; // 0x3d Not
	if(var_44_bool == 0) goto Label_64; // 0x3e JumpB
	goto Label_77; // 0x3f Jump
	
Label_77:
	var_45_object = Obj(); var_46_object = Obj(); var_47_string = ""; var_48_string = ""; var_49_string = ""; // 0x4d PushV
	var_46_object = var_24_object; // 0x4e Mov
	var_47_string = "pt_k11q01_officer"; // 0x4f MovS
	var_48_string = "pers_soldat"; // 0x50 MovS
	var_49_string = "k11q01_kabak_officer.xml"; // 0x51 MovS
	func_349(var_45_object, var_46_object, var_47_string, var_48_string, var_49_string); // 0x52 NEW_2
	var_1_object = var_45_object; // 0x53 TMov
	var_24_object = 0; // 0x55 SetNull
	goto Label_246; // 0x56 Jump
	
Label_246:
	return 30; // 0xf6 Return
	
Label_64:
	var_63_object = Obj(); var_64_object = Obj(); var_65_string = ""; var_66_string = ""; var_67_string = ""; // 0x40 PushV
	var_64_object = var_24_object; // 0x41 Mov
	var_68_string = "pt_k11q01_soldier"; // 0x42 PushS
	var_65_string = var_68_string + var_25_int; // 0x43 Add2
	var_66_string = "pers_soldat"; // 0x44 MovS
	var_67_string = "k11q01_kabak_soldier.xml"; // 0x45 MovS
	func_349(var_63_object, var_64_object, var_65_string, var_66_string, var_67_string); // 0x46 NEW_2
	add(var_63_object); // 0x48 TObjFunc
	var_69_int = 1; // 0x4a PushI
	var_25_int = var_25_int + var_69_int; // 0x4b Add2
	goto Label_57; // 0x4c Jump
	
Label_87:
	var_70_string = "init_gun"; // 0x57 PushS
	var_71_bool = var_8_string == var_70_string; // 0x58 Eq
	if(var_71_bool == 0) goto Label_123; // 0x59 JumpB
	GetMainOutdoorScene(var_29_object); // 0x5a Func
	var_30_int = 1; // 0x5c MovI
	
Label_93:
	var_72_string = "pt_k11q01_soldier"; // 0x5d PushS
	var_73_int = var_72_string + var_30_int; // 0x5e Add
	GetLocator(var_73_int, var_31_bool, var_32_cvector, var_33_cvector); // 0x5f ObjFunc
	var_74_bool = var_31_bool == 0; // 0x61 Not
	if(var_74_bool == 0) goto Label_100; // 0x62 JumpB
	goto Label_113; // 0x63 Jump
	
Label_113:
	var_75_object = Obj(); var_76_object = Obj(); var_77_string = ""; var_78_string = ""; var_79_string = ""; // 0x71 PushV
	var_76_object = var_29_object; // 0x72 Mov
	var_77_string = "pt_k11q01_agony_officer"; // 0x73 MovS
	var_78_string = "pers_soldat"; // 0x74 MovS
	var_79_string = "k11q01_officer_agony.xml"; // 0x75 MovS
	func_367(var_76_object, var_77_string, var_78_string, var_79_string); // 0x76 NEW_2
	var_4_object = var_75_object; // 0x77 TMov
	var_29_object = 0; // 0x79 SetNull
	goto Label_246; // 0x7a Jump
	
Label_100:
	var_93_object = Obj(); var_94_object = Obj(); var_95_string = ""; var_96_string = ""; var_97_string = ""; // 0x64 PushV
	var_94_object = var_29_object; // 0x65 Mov
	var_98_string = "pt_k11q01_soldier"; // 0x66 PushS
	var_95_string = var_98_string + var_30_int; // 0x67 Add2
	var_96_string = "pers_soldat"; // 0x68 MovS
	var_97_string = "k11q01_soldier.xml"; // 0x69 MovS
	func_367(var_94_object, var_95_string, var_96_string, var_97_string); // 0x6a NEW_2
	add(var_93_object); // 0x6c TObjFunc
	var_99_int = 1; // 0x6e PushI
	var_30_int = var_30_int + var_99_int; // 0x6f Add2
	goto Label_93; // 0x70 Jump
	
Label_123:
	var_100_string = "cure_officer"; // 0x7b PushS
	var_101_bool = var_8_string == var_100_string; // 0x7c Eq
	if(var_101_bool == 0) goto Label_144; // 0x7d JumpB
	GetActor(var_34_object); // 0x7e TObjFunc
	var_102_object = var_34_object; // 0x80 Push
	if(var_102_object == 0) goto Label_132; // 0x81 JumpB
	RemoveActor(var_34_object); // 0x82 Func
	
Label_132:
	Remove(); // 0x84 TObjFunc
	var_103_string = "k11q01Cured"; // 0x86 PushS
	var_104_int = 1; // 0x87 PushI
	SetVariable(var_103_string, var_104_int); // 0x88 Func
	var_105_object = Obj(); var_106_string = ""; // 0x8a PushV
	var_106_string = "quest_k11_01_cutscene"; // 0x8b MovS
	func_338(var_105_object, var_106_string); // 0x8c NEW_2
	var_34_object = 0; // 0x8e SetNull
	goto Label_246; // 0x8f Jump
	
Label_144:
	var_113_string = "cutscene_end"; // 0x90 PushS
	var_114_bool = var_8_string == var_113_string; // 0x91 Eq
	if(var_114_bool == 0) goto Label_159; // 0x92 JumpB
	GetMainOutdoorScene(var_35_object); // 0x93 Func
	var_115_object = Obj(); var_116_object = Obj(); var_117_string = ""; var_118_string = ""; var_119_string = ""; // 0x95 PushV
	var_116_object = var_35_object; // 0x96 Mov
	var_117_string = "pt_k11q01_officer"; // 0x97 MovS
	var_118_string = "pers_soldat"; // 0x98 MovS
	var_119_string = "k11q01_officer.xml"; // 0x99 MovS
	func_385(var_116_object, var_117_string, var_118_string, var_119_string); // 0x9a NEW_2
	var_3_object = var_115_object; // 0x9b TMov
	var_35_object = 0; // 0x9d SetNull
	goto Label_246; // 0x9e Jump
	
Label_159:
	var_134_string = "init_house_petr"; // 0x9f PushS
	var_135_bool = var_8_string == var_134_string; // 0xa0 Eq
	if(var_135_bool == 0) goto Label_183; // 0xa1 JumpB
	var_136_string = "house_petr"; // 0xa2 PushS
	GetSceneByName(var_36_object, var_136_string); // 0xa3 Func
	var_137_object = Obj(); var_138_object = Obj(); var_139_string = ""; var_140_string = ""; var_141_string = ""; // 0xa5 PushV
	var_138_object = var_36_object; // 0xa6 Mov
	var_139_string = "pt_k11q01_andrei"; // 0xa7 MovS
	var_140_string = "NPC_Andrei"; // 0xa8 MovS
	var_141_string = "k11q01_andrei.xml"; // 0xa9 MovS
	func_349(var_137_object, var_138_object, var_139_string, var_140_string, var_141_string); // 0xaa NEW_2
	var_7_object = var_137_object; // 0xab TMov
	var_142_object = Obj(); var_143_object = Obj(); var_144_string = ""; var_145_string = ""; var_146_string = ""; // 0xad PushV
	var_143_object = var_36_object; // 0xae Mov
	var_144_string = "pt_k11q01_danko"; // 0xaf MovS
	var_145_string = "NPC_Bakalavr"; // 0xb0 MovS
	var_146_string = "k11q01_danko.xml"; // 0xb1 MovS
	func_349(var_142_object, var_143_object, var_144_string, var_145_string, var_146_string); // 0xb2 NEW_2
	var_5_object = var_142_object; // 0xb3 TMov
	var_36_object = 0; // 0xb5 SetNull
	goto Label_246; // 0xb6 Jump
	
Label_183:
	var_147_string = "place_burah"; // 0xb7 PushS
	var_148_bool = var_8_string == var_147_string; // 0xb8 Eq
	if(var_148_bool == 0) goto Label_205; // 0xb9 JumpB
	var_149_string = "burah_home"; // 0xba PushS
	GetSceneByName(var_37_object, var_149_string); // 0xbb Func
	var_150_string = "noburah"; // 0xbd PushS
	Trigger(var_37_object, var_150_string); // 0xbe Func
	var_151_string = "boiny"; // 0xc0 PushS
	GetSceneByName(var_37_object, var_151_string); // 0xc1 Func
	var_152_object = Obj(); var_153_object = Obj(); var_154_string = ""; var_155_string = ""; var_156_string = ""; // 0xc3 PushV
	var_153_object = var_37_object; // 0xc4 Mov
	var_154_string = "pt_k11q01_burah"; // 0xc5 MovS
	var_155_string = "NPC_Burah"; // 0xc6 MovS
	var_156_string = "k11q01_burah.xml"; // 0xc7 MovS
	func_349(var_152_object, var_153_object, var_154_string, var_155_string, var_156_string); // 0xc8 NEW_2
	var_6_object = var_152_object; // 0xc9 TMov
	var_37_object = 0; // 0xcb SetNull
	goto Label_246; // 0xcc Jump
	
Label_205:
	var_157_string = "fail"; // 0xcd PushS
	var_158_bool = var_8_string == var_157_string; // 0xce Eq
	if(var_158_bool == 0) goto Label_218; // 0xcf JumpB
	func_247(); // 0xd1 NEW_2
	func_494(); // 0xd4 NEW_2
	func_500(); // 0xd7 NEW_2
	goto Label_246; // 0xd9 Jump
	
Label_218:
	var_209_string = "completed"; // 0xda PushS
	var_210_bool = var_8_string == var_209_string; // 0xdb Eq
	if(var_210_bool == 0) goto Label_231; // 0xdc JumpB
	func_255(); // 0xde NEW_2
	func_494(); // 0xe1 NEW_2
	func_500(); // 0xe4 NEW_2
	goto Label_246; // 0xe6 Jump
	
Label_231:
	var_213_string = "cleanup"; // 0xe7 PushS
	var_214_bool = var_8_string == var_213_string; // 0xe8 Eq
	if(var_214_bool == 0) goto Label_246; // 0xe9 JumpB
	var_215_string = "k11q01"; // 0xea PushS
	GetVariable(var_215_string, var_38_int); // 0xeb Func
	var_216_int = 1000; // 0xed PushI
	var_217_bool = var_38_int != var_216_int; // 0xee Neq
	if(var_217_bool == 0) goto Label_243; // 0xef JumpB
	func_247(); // 0xf1 NEW_2
	
Label_243:
	func_311(); // 0xf4 NEW_2
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object)
{
	var_8_object = Obj(); var_9_object = Obj(); // 0x0 PushV
	var_10_object = Obj(); // 0x1 PushV
	func_332(var_10_object); // 0x2 NEW_2
	var_0_object = var_10_object; // 0x3 TMov
	var_13_object = Obj(); // 0x5 PushV
	func_332(var_13_object); // 0x6 NEW_2
	var_2_object = var_13_object; // 0x7 TMov
	var_14_string = "cot_eva"; // 0x9 PushS
	GetSceneByName(var_9_object, var_14_string); // 0xa Func
	var_15_string = "nodanko"; // 0xc PushS
	Trigger(var_9_object, var_15_string); // 0xd Func
	var_16_string = ""; var_17_bool = 0; // 0xf PushV
	var_16_string = "icot_eva_door"; // 0x10 MovS
	var_17_bool = 0; // 0x11 MovB
	func_421(var_16_string, var_17_bool); // 0x12 NEW_2
	var_27_string = "shouse1_kabak"; // 0x14 PushS
	GetSceneByName(var_9_object, var_27_string); // 0x15 Func
	var_28_string = "noandrei"; // 0x17 PushS
	Trigger(var_9_object, var_28_string); // 0x18 Func
	var_29_string = "warehouse_rubin"; // 0x1a PushS
	GetSceneByName(var_9_object, var_29_string); // 0x1b Func
	var_30_string = "rubin"; // 0x1d PushS
	Trigger(var_9_object, var_30_string); // 0x1e Func
	var_31_string = ""; var_32_bool = 0; // 0x20 PushV
	var_31_string = "sobor@door1"; // 0x21 MovS
	var_32_bool = 0; // 0x22 MovB
	func_404(var_31_string, var_32_bool); // 0x23 NEW_2
	var_41_string = ""; var_42_bool = 0; // 0x25 PushV
	var_41_string = "cot_maria@door1"; // 0x26 MovS
	var_42_bool = 1; // 0x27 MovB
	func_404(var_41_string, var_42_bool); // 0x28 NEW_2
	
Label_42:
	Hold(); // 0x2a Func
	goto Label_42; // 0x2c Jump
}


func_385(var_115_object, var_117_string, var_118_string, var_119_string)
{
	var_120_bool = 0; var_121_cvector = CVector(0,0,0); var_122_cvector = CVector(0,0,0); var_123_object = Obj(); var_124_bool = 0; var_125_cvector = CVector(0,0,0); var_126_cvector = CVector(0,0,0); var_127_object = Obj(); // 0x181 PushV
	GetLocator(var_117_string, var_124_bool, var_125_cvector, var_126_cvector); // 0x182 ObjFunc
	var_128_bool = var_124_bool == 0; // 0x184 Not
	if(var_128_bool == 0) goto Label_398; // 0x185 JumpB
	var_129_string = "Locator "; // 0x186 PushS
	var_130_int = var_129_string + var_117_string; // 0x187 Add
	var_131_string = " doesn't exist"; // 0x188 PushS
	var_132_int = var_130_int + var_131_string; // 0x189 Add
	Trace(var_132_int); // 0x18a Func
	var_127_object = 0; // 0x18c SetNull
	goto Label_401; // 0x18d Jump
	
Label_401:
	var_115_object = var_127_object; // 0x191 Mov
	return 8; // 0x192 Return
	
Label_398:
	var_133_bool = 1; // 0x18e PushB
	AddStationaryActor(var_127_object, var_125_cvector, var_126_cvector, var_118_string, var_119_string, var_133_bool); // 0x18f ObjFunc
}


func_454(var_181_object)
{
	var_182_int = 0; var_183_int = 0; var_184_object = Obj(); var_185_int = 0; var_186_int = 0; var_187_object = Obj(); // 0x1c6 PushV
	var_188_object = var_181_object; // 0x1c7 Push
	if(var_188_object == 0) goto Label_474; // 0x1c8 JumpB
	size(var_185_int); // 0x1c9 ObjFunc
	var_186_int = 0; // 0x1cb MovI
	
Label_460:
	var_189_bool = var_186_int < var_185_int; // 0x1cc LT
	if(var_189_bool == 0) goto Label_472; // 0x1cd JumpB
	get(var_187_object, var_186_int); // 0x1ce ObjFunc
	var_190_object = var_187_object; // 0x1d0 Push
	if(var_190_object == 0) goto Label_468; // 0x1d1 JumpB
	Remove(); // 0x1d2 ObjFunc
	
Label_468:
	var_187_object = 0; // 0x1d4 SetNull
	var_191_int = 1; // 0x1d5 PushI
	var_186_int = var_186_int + var_191_int; // 0x1d6 Add2
	goto Label_460; // 0x1d7 Jump
	
Label_472:
	clear(); // 0x1d8 ObjFunc
	
Label_474:
	return 6; // 0x1da Return
}


func_263(var_0_object, var_2_object, var_35_object, var_36_object, var_37_object)
{
	var_161_object = Obj(); var_162_object = Obj(); // 0x107 PushV
	var_163_string = "cot_eva"; // 0x108 PushS
	GetSceneByName(var_162_object, var_163_string); // 0x109 Func
	var_164_string = "danko"; // 0x10b PushS
	Trigger(var_162_object, var_164_string); // 0x10c Func
	var_165_string = "shouse1_kabak"; // 0x10e PushS
	GetSceneByName(var_162_object, var_165_string); // 0x10f Func
	var_166_string = "andrei"; // 0x111 PushS
	Trigger(var_162_object, var_166_string); // 0x112 Func
	var_167_object = Obj(); var_168_string = ""; // 0x114 PushV
	var_167_object = var_0_object; // 0x115 MovT
	var_168_string = "cleanup"; // 0x116 MovS
	func_475(var_167_object, var_168_string); // 0x117 NEW_2
	var_179_object = var_1_object; // 0x119 PushT
	if(var_179_object == 0) goto Label_286; // 0x11a JumpB
	var_180_string = "cleanup"; // 0x11b PushS
	Trigger(var_180_string, var_180_string); // 0x11c Func
	
Label_286:
	var_181_object = Obj(); // 0x11e PushV
	var_181_object = var_2_object; // 0x11f MovT
	func_454(var_181_object); // 0x120 NEW_2
	var_192_object = var_3_object; // 0x122 PushT
	if(var_192_object == 0) goto Label_294; // 0x123 JumpB
	Remove(); // 0x124 TObjFunc
	
Label_294:
	var_193_object = var_5_object; // 0x126 PushT
	if(var_193_object == 0) goto Label_299; // 0x127 JumpB
	var_194_string = "cleanup"; // 0x128 PushS
	Trigger(var_37_object, var_194_string); // 0x129 Func
	
Label_299:
	var_195_object = var_6_object; // 0x12b PushT
	if(var_195_object == 0) goto Label_304; // 0x12c JumpB
	var_196_string = "cleanup"; // 0x12d PushS
	Trigger(var_36_object, var_196_string); // 0x12e Func
	
Label_304:
	var_197_object = var_7_object; // 0x130 PushT
	if(var_197_object == 0) goto Label_309; // 0x131 JumpB
	var_198_string = "cleanup"; // 0x132 PushS
	Trigger(var_35_object, var_198_string); // 0x133 Func
	
Label_309:
	return 2; // 0x135 Return
}


func_326(var_232_object)
{
	var_233_object = Obj(); var_234_object = Obj(); // 0x146 PushV
	self(var_234_object); // 0x147 Func
	var_232_object = var_234_object; // 0x149 Mov
	return 2; // 0x14a Return
}


func_332(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0x14c PushV
	CreateObjectVector(var_12_object); // 0x14d Func
	var_10_object = var_12_object; // 0x14f Mov
	return 2; // 0x150 Return
}


func_338(var_105_object, var_106_string)
{
	var_107_object = Obj(); var_108_object = Obj(); var_109_object = Obj(); var_110_object = Obj(); // 0x152 PushV
	GetMainOutdoorScene(var_109_object); // 0x153 Func
	var_111_string = ".bin"; // 0x155 PushS
	var_112_int = var_106_string + var_111_string; // 0x156 Add
	AddBlankActor(var_110_object, var_109_object, var_106_string, var_112_int); // 0x157 Func
	var_105_object = var_110_object; // 0x159 Mov
	return 4; // 0x15a Return
}


func_404(var_31_string, var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x194 PushV
	FindActor(var_34_object, var_31_string); // 0x195 Func
	var_35_bool = var_34_object == 0; // 0x197 Not
	if(var_35_bool == 0) goto Label_416; // 0x198 JumpB
	var_36_string = "Door "; // 0x199 PushS
	var_37_int = var_36_string + var_31_string; // 0x19a Add
	var_38_string = " not found"; // 0x19b PushS
	var_39_int = var_37_int + var_38_string; // 0x19c Add
	Trace(var_39_int); // 0x19d Func
	goto Label_419; // 0x19f Jump
	
Label_419:
	return 2; // 0x1a3 Return
	
Label_416:
	var_40_string = "locked"; // 0x1a0 PushS
	SetProperty(var_40_string, var_32_bool); // 0x1a1 ObjFunc
}


func_475(var_167_object, var_168_string)
{
	var_169_int = 0; var_170_int = 0; var_171_object = Obj(); var_172_int = 0; var_173_int = 0; var_174_object = Obj(); // 0x1db PushV
	var_175_object = var_167_object; // 0x1dc Push
	if(var_175_object == 0) goto Label_493; // 0x1dd JumpB
	size(var_172_int); // 0x1de ObjFunc
	var_173_int = 0; // 0x1e0 MovI
	
Label_481:
	var_176_bool = var_173_int < var_172_int; // 0x1e1 LT
	if(var_176_bool == 0) goto Label_493; // 0x1e2 JumpB
	get(var_174_object, var_173_int); // 0x1e3 ObjFunc
	var_177_object = var_174_object; // 0x1e5 Push
	if(var_177_object == 0) goto Label_489; // 0x1e6 JumpB
	Trigger(var_174_object, var_168_string); // 0x1e7 Func
	
Label_489:
	var_174_object = 0; // 0x1e9 SetNull
	var_178_int = 1; // 0x1ea PushI
	var_173_int = var_173_int + var_178_int; // 0x1eb Add2
	goto Label_481; // 0x1ec Jump
	
Label_493:
	return 6; // 0x1ed Return
}


func_247()
{
	var_159_string = "k11q01"; // 0xf7 PushS
	var_160_int = -1; // 0xf8 PushI
	SetVariable(var_159_string, var_160_int); // 0xf9 Func
	func_263(var_34_object, var_35_object, var_36_object, var_37_object, var_38_int); // 0xfc NEW_2
	return 0; // 0xfe Return
}


func_349(var_45_object, var_46_object, var_47_string, var_48_string, var_49_string)
{
	var_50_bool = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_object = Obj(); var_54_bool = 0; var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_object = Obj(); // 0x15d PushV
	GetLocator(var_47_string, var_54_bool, var_55_cvector, var_56_cvector); // 0x15e ObjFunc
	var_58_bool = var_54_bool == 0; // 0x160 Not
	if(var_58_bool == 0) goto Label_362; // 0x161 JumpB
	var_59_string = "Locator "; // 0x162 PushS
	var_60_int = var_59_string + var_47_string; // 0x163 Add
	var_61_string = " doesn't exist"; // 0x164 PushS
	var_62_int = var_60_int + var_61_string; // 0x165 Add
	Trace(var_62_int); // 0x166 Func
	var_57_object = 0; // 0x168 SetNull
	goto Label_364; // 0x169 Jump
	
Label_364:
	var_45_object = var_57_object; // 0x16c Mov
	return 8; // 0x16d Return
	
Label_362:
	AddActor(var_57_object, var_48_string, var_46_object, var_55_cvector, var_56_cvector, var_49_string); // 0x16a Func
}


func_421(var_16_string, var_17_bool)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x1a5 PushV
	FindActor(var_19_object, var_16_string); // 0x1a6 Func
	var_20_bool = var_19_object == 0; // 0x1a8 Not
	if(var_20_bool == 0) goto Label_433; // 0x1a9 JumpB
	var_21_string = "Door "; // 0x1aa PushS
	var_22_int = var_21_string + var_16_string; // 0x1ab Add
	var_23_string = " not found"; // 0x1ac PushS
	var_24_int = var_22_int + var_23_string; // 0x1ad Add
	Trace(var_24_int); // 0x1ae Func
	goto Label_440; // 0x1b0 Jump
	
Label_440:
	return 2; // 0x1b8 Return
	
Label_433:
	var_25_bool = var_17_bool; // 0x1b1 Push
	if(var_25_bool == 0) goto Label_437; // 0x1b2 JumpB
	Close(); // 0x1b3 ObjFunc
	
Label_437:
	var_26_string = "locked"; // 0x1b5 PushS
	SetProperty(var_26_string, var_17_bool); // 0x1b6 ObjFunc
}


func_494()
{
	var_199_bool = 0; var_200_string = ""; var_201_string = ""; // 0x1ee PushV
	var_200_string = "klara2_npc_positioner"; // 0x1ef MovS
	var_201_string = "init"; // 0x1f0 MovS
	func_442(var_199_bool, var_200_string, var_201_string); // 0x1f1 NEW_2
	return 0; // 0x1f3 Return
}


func_367(var_75_object, var_77_string, var_78_string, var_79_string)
{
	var_80_bool = 0; var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_object = Obj(); var_84_bool = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_object = Obj(); // 0x16f PushV
	GetLocator(var_77_string, var_84_bool, var_85_cvector, var_86_cvector); // 0x170 ObjFunc
	var_88_bool = var_84_bool == 0; // 0x172 Not
	if(var_88_bool == 0) goto Label_380; // 0x173 JumpB
	var_89_string = "Locator "; // 0x174 PushS
	var_90_int = var_89_string + var_77_string; // 0x175 Add
	var_91_string = " doesn't exist"; // 0x176 PushS
	var_92_int = var_90_int + var_91_string; // 0x177 Add
	Trace(var_92_int); // 0x178 Func
	var_87_object = 0; // 0x17a SetNull
	goto Label_382; // 0x17b Jump
	
Label_382:
	var_75_object = var_87_object; // 0x17e Mov
	return 8; // 0x17f Return
	
Label_380:
	AddStationaryActor(var_87_object, var_85_cvector, var_86_cvector, var_78_string, var_79_string); // 0x17c ObjFunc
}


func_500()
{
	var_205_object = Obj(); var_206_object = Obj(); // 0x1f4 PushV
	var_207_string = "burah_home"; // 0x1f5 PushS
	GetSceneByName(var_206_object, var_207_string); // 0x1f6 Func
	var_208_string = "noburah"; // 0x1f8 PushS
	Trigger(var_206_object, var_208_string); // 0x1f9 Func
	return 2; // 0x1fb Return
}


func_311()
{
	EventDisable(26); // 0x137 EventDisable
	var_218_string = ""; var_219_bool = 0; // 0x138 PushV
	var_218_string = "cot_maria@door1"; // 0x139 MovS
	var_219_bool = 0; // 0x13a MovB
	func_404(var_218_string, var_219_bool); // 0x13b NEW_2
	func_509(); // 0x13e NEW_2
	var_232_object = Obj(); // 0x140 PushV
	func_326(var_232_object); // 0x141 NEW_2
	RemoveActor(var_232_object); // 0x143 Func
	return 0; // 0x145 Return
}


func_442(var_199_bool, var_200_string, var_201_string)
{
	var_202_object = Obj(); var_203_object = Obj(); // 0x1ba PushV
	FindActor(var_203_object, var_200_string); // 0x1bb Func
	var_204_bool = var_203_object == 0; // 0x1bd NullEq
	if(var_204_bool == 0) goto Label_449; // 0x1be JumpB
	var_199_bool = 0; // 0x1bf MovB
	return 2; // 0x1c0 Return
	
Label_449:
	Trigger(var_203_object, var_201_string); // 0x1c1 Func
	var_199_bool = 1; // 0x1c3 MovB
	return 2; // 0x1c4 Return
}


func_509()
{
	var_228_object = Obj(); var_229_object = Obj(); // 0x1fd PushV
	var_230_string = "burah_home"; // 0x1fe PushS
	GetSceneByName(var_229_object, var_230_string); // 0x1ff Func
	var_231_string = "burah"; // 0x201 PushS
	Trigger(var_229_object, var_231_string); // 0x202 Func
	return 2; // 0x204 Return
}


func_255()
{
	var_211_string = "k11q01"; // 0xff PushS
	var_212_int = 1000; // 0x100 PushI
	SetVariable(var_211_string, var_212_int); // 0x101 Func
	func_263(var_34_object, var_35_object, var_36_object, var_37_object, var_38_int); // 0x104 NEW_2
	return 0; // 0x106 Return
}


