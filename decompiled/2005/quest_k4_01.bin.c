task_0_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_string)
{
	var_6_object = Obj(); var_7_int = 0; var_8_bool = 0; var_9_cvector = CVector(0,0,0); var_10_cvector = CVector(0,0,0); var_11_object = Obj(); var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); var_15_int = 0; var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_object = Obj(); var_20_int = 0; var_21_object = Obj(); var_22_int = 0; var_23_bool = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; var_31_bool = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_object = Obj(); var_35_int = 0; // 0x12 PushV
	Trace(var_5_string); // 0x13 Func
	var_36_string = "init_volnica"; // 0x15 PushS
	var_37_bool = var_5_string == var_36_string; // 0x16 Eq
	if(var_37_bool == 0) goto Label_54; // 0x17 JumpB
	GetMainOutdoorScene(var_21_object); // 0x18 Func
	var_22_int = 1; // 0x1a MovI
	
Label_27:
	var_38_string = "pt_k4q01_grabitel"; // 0x1b PushS
	var_39_int = var_38_string + var_22_int; // 0x1c Add
	GetLocator(var_39_int, var_23_bool, var_24_cvector, var_25_cvector); // 0x1d ObjFunc
	var_40_bool = var_23_bool == 0; // 0x1f Not
	if(var_40_bool == 0) goto Label_34; // 0x20 JumpB
	goto Label_44; // 0x21 Jump
	
Label_44:
	var_41_object = Obj(); var_42_object = Obj(); var_43_string = ""; var_44_string = ""; var_45_string = ""; // 0x2c PushV
	var_42_object = var_21_object; // 0x2d Mov
	var_43_string = "pt_k4q01_grabitel"; // 0x2e MovS
	var_44_string = "pers_grabitel"; // 0x2f MovS
	var_45_string = "k4q01_grabitel_e.xml"; // 0x30 MovS
	func_316(var_42_object, var_43_string, var_44_string, var_45_string); // 0x31 NEW_2
	var_2_object = var_41_object; // 0x32 TMov
	var_21_object = 0; // 0x34 SetNull
	goto Label_207; // 0x35 Jump
	
Label_207:
	return 30; // 0xcf Return
	
Label_34:
	var_59_string = "pers_grabitel"; // 0x22 PushS
	var_60_string = "k4q01_grabitel.xml"; // 0x23 PushS
	AddStationaryActor(var_26_object, var_24_cvector, var_25_cvector, var_59_string, var_60_string); // 0x24 ObjFunc
	add(var_26_object); // 0x26 TObjFunc
	var_26_object = 0; // 0x28 SetNull
	var_61_int = 1; // 0x29 PushI
	var_22_int = var_22_int + var_61_int; // 0x2a Add2
	goto Label_27; // 0x2b Jump
	
Label_54:
	var_62_string = "grabitel_entrance_dead"; // 0x36 PushS
	var_63_bool = var_5_string == var_62_string; // 0x37 Eq
	if(var_63_bool == 0) goto Label_82; // 0x38 JumpB
	var_64_string = ""; var_65_bool = 0; // 0x39 PushV
	var_64_string = "warehouse_gangster@door1"; // 0x3a MovS
	var_65_bool = 0; // 0x3b MovB
	func_334(var_64_string, var_65_bool); // 0x3c NEW_2
	var_74_object = var_2_object; // 0x3e PushT
	if(var_74_object == 0) goto Label_66; // 0x3f JumpB
	Remove(); // 0x40 TObjFunc
	
Label_66:
	var_75_string = "warehouse_gangster"; // 0x42 PushS
	GetSceneByName(var_27_object, var_75_string); // 0x43 Func
	var_76_object = Obj(); var_77_object = Obj(); var_78_string = ""; var_79_string = ""; var_80_string = ""; // 0x45 PushV
	var_77_object = var_27_object; // 0x46 Mov
	var_78_string = "pt_britva"; // 0x47 MovS
	var_79_string = "pers_grabitel"; // 0x48 MovS
	var_80_string = "k4q01_britva.xml"; // 0x49 MovS
	func_280(var_76_object, var_77_object, var_78_string, var_79_string, var_80_string); // 0x4a NEW_2
	var_4_object = var_76_object; // 0x4b TMov
	var_94_string = "door_open"; // 0x4d PushS
	PlaySound(var_94_string); // 0x4e Func
	var_27_object = 0; // 0x50 SetNull
	goto Label_207; // 0x51 Jump
	
Label_82:
	var_95_string = "cutscene"; // 0x52 PushS
	var_96_bool = var_5_string == var_95_string; // 0x53 Eq
	if(var_96_bool == 0) goto Label_114; // 0x54 JumpB
	var_97_object = var_4_object; // 0x55 PushT
	if(var_97_object == 0) goto Label_89; // 0x56 JumpB
	RemoveActor(var_32_cvector); // 0x57 Func
	
Label_89:
	var_98_string = "warehouse_gangster"; // 0x59 PushS
	GetSceneByName(var_28_object, var_98_string); // 0x5a Func
	var_99_string = "door_close"; // 0x5c PushS
	PlaySound(var_99_string); // 0x5d Func
	var_100_string = ""; var_101_bool = 0; // 0x5f PushV
	var_100_string = "iwarehouse_gangster@door1"; // 0x60 MovS
	var_101_bool = 1; // 0x61 MovB
	func_334(var_100_string, var_101_bool); // 0x62 NEW_2
	var_102_object = Obj(); var_103_object = Obj(); var_104_string = ""; var_105_string = ""; var_106_string = ""; // 0x64 PushV
	var_103_object = var_28_object; // 0x65 Mov
	var_104_string = "pt_k4q01_meshok"; // 0x66 MovS
	var_105_string = "scripted_container"; // 0x67 MovS
	var_106_string = "k4q01_meshok.xml"; // 0x68 MovS
	func_298(var_102_object, var_103_object, var_104_string, var_105_string, var_106_string); // 0x69 NEW_2
	var_3_object = var_102_object; // 0x6a TMov
	var_120_object = Obj(); var_121_string = ""; // 0x6c PushV
	var_121_string = "quest_k4_01_cutscene"; // 0x6d MovS
	func_269(var_120_object, var_121_string); // 0x6e NEW_2
	var_28_object = 0; // 0x70 SetNull
	goto Label_207; // 0x71 Jump
	
Label_114:
	var_128_string = "cutscene_end"; // 0x72 PushS
	var_129_bool = var_5_string == var_128_string; // 0x73 Eq
	if(var_129_bool == 0) goto Label_146; // 0x74 JumpB
	var_130_string = "warehouse_gangster"; // 0x75 PushS
	GetSceneByName(var_29_object, var_130_string); // 0x76 Func
	var_131_object = Obj(); var_132_object = Obj(); var_133_string = ""; var_134_string = ""; var_135_string = ""; // 0x78 PushV
	var_132_object = var_29_object; // 0x79 Mov
	var_133_string = "pt_britva_attack"; // 0x7a MovS
	var_134_string = "pers_grabitel"; // 0x7b MovS
	var_135_string = "k4q01_britva_attack.xml"; // 0x7c MovS
	func_280(var_131_object, var_132_object, var_133_string, var_134_string, var_135_string); // 0x7d NEW_2
	var_30_int = 1; // 0x7f MovI
	
Label_128:
	var_136_string = "pt_k4q01_rat"; // 0x80 PushS
	var_137_int = var_136_string + var_30_int; // 0x81 Add
	GetLocator(var_137_int, var_31_bool, var_32_cvector, var_33_cvector); // 0x82 ObjFunc
	var_138_bool = var_31_bool == 0; // 0x84 Not
	if(var_138_bool == 0) goto Label_135; // 0x85 JumpB
	goto Label_143; // 0x86 Jump
	
Label_143:
	var_0_bool = 1; // 0x8f TMovB
	var_29_object = 0; // 0x90 SetNull
	goto Label_207; // 0x91 Jump
	
Label_135:
	var_139_string = "pers_rat"; // 0x87 PushS
	var_140_string = "rat_indoor.xml"; // 0x88 PushS
	AddActor(var_34_object, var_139_string, var_29_object, var_32_cvector, var_33_cvector, var_140_string); // 0x89 Func
	var_34_object = 0; // 0x8b SetNull
	var_141_int = 1; // 0x8c PushI
	var_30_int = var_30_int + var_141_int; // 0x8d Add2
	goto Label_128; // 0x8e Jump
	
Label_146:
	var_142_string = "meshok_taken"; // 0x92 PushS
	var_143_bool = var_5_string == var_142_string; // 0x93 Eq
	if(var_143_bool == 0) goto Label_161; // 0x94 JumpB
	var_144_string = ""; var_145_bool = 0; // 0x95 PushV
	var_144_string = "iwarehouse_gangster@door1"; // 0x96 MovS
	var_145_bool = 0; // 0x97 MovB
	func_334(var_144_string, var_145_bool); // 0x98 NEW_2
	func_372(); // 0x9b NEW_2
	var_169_string = "door_open"; // 0x9d PushS
	PlaySound(var_169_string); // 0x9e Func
	goto Label_207; // 0xa0 Jump
	
Label_161:
	var_170_string = "warehouse_gangster_unload"; // 0xa1 PushS
	var_171_bool = var_5_string == var_170_string; // 0xa2 Eq
	if(var_171_bool == 0) goto Label_177; // 0xa3 JumpB
	var_172_bool = var_0_bool; // 0xa4 PushT
	if(var_172_bool == 0) goto Label_176; // 0xa5 JumpB
	var_173_string = ""; var_174_bool = 0; // 0xa6 PushV
	var_173_string = "warehouse_gangster@door1"; // 0xa7 MovS
	var_174_bool = 1; // 0xa8 MovB
	func_334(var_173_string, var_174_bool); // 0xa9 NEW_2
	var_175_object = var_4_object; // 0xab PushT
	if(var_175_object == 0) goto Label_176; // 0xac JumpB
	var_176_string = "cleanup"; // 0xad PushS
	Trigger(var_33_cvector, var_176_string); // 0xae Func
	
Label_176:
	goto Label_207; // 0xb0 Jump
	
Label_177:
	var_177_string = "fail"; // 0xb1 PushS
	var_178_bool = var_5_string == var_177_string; // 0xb2 Eq
	if(var_178_bool == 0) goto Label_184; // 0xb3 JumpB
	func_208(); // 0xb5 NEW_2
	goto Label_207; // 0xb7 Jump
	
Label_184:
	var_203_string = "completed"; // 0xb8 PushS
	var_204_bool = var_5_string == var_203_string; // 0xb9 Eq
	if(var_204_bool == 0) goto Label_191; // 0xba JumpB
	func_216(); // 0xbc NEW_2
	goto Label_207; // 0xbe Jump
	
Label_191:
	var_207_string = "cleanup"; // 0xbf PushS
	var_208_bool = var_5_string == var_207_string; // 0xc0 Eq
	if(var_208_bool == 0) goto Label_207; // 0xc1 JumpB
	var_209_string = "k4q01"; // 0xc2 PushS
	GetVariable(var_209_string, var_35_int); // 0xc3 Func
	var_210_int = 1000; // 0xc5 PushI
	var_211_bool = var_35_int != var_210_int; // 0xc6 Neq
	if(var_211_bool == 0) goto Label_204; // 0xc7 JumpB
	func_208(); // 0xc9 NEW_2
	goto Label_207; // 0xcb Jump
	
Label_204:
	func_224(var_33_cvector, var_34_object, var_35_int); // 0xcd NEW_2
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object)
{
	var_5_object = Obj(); // 0x0 PushV
	func_263(var_5_object); // 0x1 NEW_2
	var_1_object = var_5_object; // 0x2 TMov
	var_8_string = ""; var_9_bool = 0; // 0x4 PushV
	var_8_string = "warehouse_gangster@door1"; // 0x5 MovS
	var_9_bool = 1; // 0x6 MovB
	func_334(var_8_string, var_9_bool); // 0x7 NEW_2
	var_18_string = ""; var_19_bool = 0; // 0x9 PushV
	var_18_string = "cot_alexandr@door1"; // 0xa MovS
	var_19_bool = 0; // 0xb MovB
	func_334(var_18_string, var_19_bool); // 0xc NEW_2
	
Label_14:
	Hold(); // 0xe Func
	goto Label_14; // 0x10 Jump
}


func_224(var_1_object, var_33_cvector, var_34_object)
{
	EventDisable(26); // 0xe0 EventDisable
	var_181_object = var_1_object; // 0xe1 PushT
	if(var_181_object == 0) goto Label_232; // 0xe2 JumpB
	var_182_object = Obj(); // 0xe3 PushV
	var_182_object = var_1_object; // 0xe4 MovT
	func_351(var_182_object); // 0xe5 NEW_2
	var_1_object = 0; // 0xe7 SetNullT
	
Label_232:
	var_193_object = var_2_object; // 0xe8 PushT
	if(var_193_object == 0) goto Label_236; // 0xe9 JumpB
	Remove(); // 0xea TObjFunc
	
Label_236:
	var_194_object = var_3_object; // 0xec PushT
	if(var_194_object == 0) goto Label_241; // 0xed JumpB
	var_195_string = "cleanup"; // 0xee PushS
	Trigger(var_34_object, var_195_string); // 0xef Func
	
Label_241:
	var_196_object = var_4_object; // 0xf1 PushT
	if(var_196_object == 0) goto Label_246; // 0xf2 JumpB
	var_197_string = "cleanup"; // 0xf3 PushS
	Trigger(var_33_cvector, var_197_string); // 0xf4 Func
	
Label_246:
	var_198_string = ""; var_199_bool = 0; // 0xf6 PushV
	var_198_string = "iwarehouse_gangster@door1"; // 0xf7 MovS
	var_199_bool = 0; // 0xf8 MovB
	func_334(var_198_string, var_199_bool); // 0xf9 NEW_2
	var_200_object = Obj(); // 0xfb PushV
	func_257(var_200_object); // 0xfc NEW_2
	RemoveActor(var_200_object); // 0xfe Func
	return 0; // 0x100 Return
}


func_257(var_200_object)
{
	var_201_object = Obj(); var_202_object = Obj(); // 0x101 PushV
	self(var_202_object); // 0x102 Func
	var_200_object = var_202_object; // 0x104 Mov
	return 2; // 0x105 Return
}


func_385(var_160_object)
{
	var_161_object = Obj(); var_162_object = Obj(); // 0x181 PushV
	GetDiaryRoot(var_162_object); // 0x182 Func
	var_163_bool = var_162_object == 0; // 0x184 Not
	if(var_163_bool == 0) goto Label_395; // 0x185 JumpB
	var_164_string = "Can't retrieve diary root"; // 0x186 PushS
	Trace(var_164_string); // 0x187 Func
	var_160_object = 0; // 0x189 MovB
	return 2; // 0x18a Return
	
Label_395:
	var_160_object = var_162_object; // 0x18b Mov
	return 2; // 0x18c Return
}


func_263(var_5_object)
{
	var_6_object = Obj(); var_7_object = Obj(); // 0x107 PushV
	CreateObjectVector(var_7_object); // 0x108 Func
	var_5_object = var_7_object; // 0x10a Mov
	return 2; // 0x10b Return
}


func_298(var_102_object, var_103_object, var_104_string, var_105_string, var_106_string)
{
	var_107_bool = 0; var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); var_110_object = Obj(); var_111_bool = 0; var_112_cvector = CVector(0,0,0); var_113_cvector = CVector(0,0,0); var_114_object = Obj(); // 0x12a PushV
	GetLocator(var_104_string, var_111_bool, var_112_cvector, var_113_cvector); // 0x12b ObjFunc
	var_115_bool = var_111_bool == 0; // 0x12d Not
	if(var_115_bool == 0) goto Label_311; // 0x12e JumpB
	var_116_string = "Locator "; // 0x12f PushS
	var_117_int = var_116_string + var_104_string; // 0x130 Add
	var_118_string = " doesn't exist"; // 0x131 PushS
	var_119_int = var_117_int + var_118_string; // 0x132 Add
	Trace(var_119_int); // 0x133 Func
	var_114_object = 0; // 0x135 SetNull
	goto Label_313; // 0x136 Jump
	
Label_313:
	var_102_object = var_114_object; // 0x139 Mov
	return 8; // 0x13a Return
	
Label_311:
	AddActorByType(var_114_object, var_105_string, var_103_object, var_112_cvector, var_113_cvector, var_106_string); // 0x137 Func
}


func_269(var_120_object, var_121_string)
{
	var_122_object = Obj(); var_123_object = Obj(); var_124_object = Obj(); var_125_object = Obj(); // 0x10d PushV
	GetMainOutdoorScene(var_124_object); // 0x10e Func
	var_126_string = ".bin"; // 0x110 PushS
	var_127_int = var_121_string + var_126_string; // 0x111 Add
	AddBlankActor(var_125_object, var_124_object, var_121_string, var_127_int); // 0x112 Func
	var_120_object = var_125_object; // 0x114 Mov
	return 4; // 0x115 Return
}


func_334(var_8_string, var_9_bool)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x14e PushV
	FindActor(var_11_object, var_8_string); // 0x14f Func
	var_12_bool = var_11_object == 0; // 0x151 Not
	if(var_12_bool == 0) goto Label_346; // 0x152 JumpB
	var_13_string = "Door "; // 0x153 PushS
	var_14_int = var_13_string + var_8_string; // 0x154 Add
	var_15_string = " not found"; // 0x155 PushS
	var_16_int = var_14_int + var_15_string; // 0x156 Add
	Trace(var_16_int); // 0x157 Func
	goto Label_349; // 0x159 Jump
	
Label_349:
	return 2; // 0x15d Return
	
Label_346:
	var_17_string = "locked"; // 0x15a PushS
	SetProperty(var_17_string, var_9_bool); // 0x15b ObjFunc
}


func_398(var_151_bool, var_152_object, var_153_int)
{
	var_154_object = Obj(); var_155_object = Obj(); var_156_int = 0; var_157_object = Obj(); var_158_object = Obj(); var_159_int = 0; // 0x18e PushV
	var_160_object = Obj(); // 0x18f PushV
	func_385(var_160_object); // 0x190 NEW_2
	var_157_object = var_160_object; // 0x191 Mov
	Find(var_153_int, var_158_object); // 0x193 ObjFunc
	var_165_bool = var_158_object == 0; // 0x195 Not
	if(var_165_bool == 0) goto Label_413; // 0x196 JumpB
	var_166_string = "Can't find diary parent with id: "; // 0x197 PushS
	var_167_int = var_166_string + var_153_int; // 0x198 Add
	Trace(var_167_int); // 0x199 Func
	var_151_bool = 0; // 0x19b MovB
	return 6; // 0x19c Return
	
Label_413:
	AddChild(var_152_object); // 0x19d ObjFunc
	var_168_int = 7; // 0x19f PushI
	SendWorldWndMessage(var_168_int); // 0x1a0 Func
	GetCategory(var_159_int); // 0x1a2 ObjFunc
	SetDiarySection(var_159_int); // 0x1a4 Func
	var_151_bool = 0; // 0x1a6 MovB
	return 6; // 0x1a7 Return
}


func_208()
{
	var_179_string = "k4q01"; // 0xd0 PushS
	var_180_int = -1; // 0xd1 PushI
	SetVariable(var_179_string, var_180_int); // 0xd2 Func
	func_224(var_33_cvector, var_34_object, var_35_int); // 0xd5 NEW_2
	return 0; // 0xd7 Return
}


func_216()
{
	var_205_string = "k4q01"; // 0xd8 PushS
	var_206_int = 1000; // 0xd9 PushI
	SetVariable(var_205_string, var_206_int); // 0xda Func
	func_224(var_33_cvector, var_34_object, var_35_int); // 0xdd NEW_2
	return 0; // 0xdf Return
}


func_372()
{
	var_146_object = Obj(); var_147_object = Obj(); // 0x174 PushV
	var_148_int = 373; // 0x175 PushI
	var_149_int = 1; // 0x176 PushI
	var_150_int = 525730; // 0x177 PushI
	CreateDiaryEntry(var_147_object, var_148_int, var_149_int, var_150_int); // 0x178 Func
	var_151_bool = 0; var_152_object = Obj(); var_153_int = 0; // 0x17a PushV
	var_152_object = var_147_object; // 0x17b Mov
	var_153_int = 368; // 0x17c MovI
	func_398(var_151_bool, var_152_object, var_153_int); // 0x17d NEW_2
	return 2; // 0x17f Return
}


func_280(var_76_object, var_77_object, var_78_string, var_79_string, var_80_string)
{
	var_81_bool = 0; var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_object = Obj(); var_85_bool = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_object = Obj(); // 0x118 PushV
	GetLocator(var_78_string, var_85_bool, var_86_cvector, var_87_cvector); // 0x119 ObjFunc
	var_89_bool = var_85_bool == 0; // 0x11b Not
	if(var_89_bool == 0) goto Label_293; // 0x11c JumpB
	var_90_string = "Locator "; // 0x11d PushS
	var_91_int = var_90_string + var_78_string; // 0x11e Add
	var_92_string = " doesn't exist"; // 0x11f PushS
	var_93_int = var_91_int + var_92_string; // 0x120 Add
	Trace(var_93_int); // 0x121 Func
	var_88_object = 0; // 0x123 SetNull
	goto Label_295; // 0x124 Jump
	
Label_295:
	var_76_object = var_88_object; // 0x127 Mov
	return 8; // 0x128 Return
	
Label_293:
	AddActor(var_88_object, var_79_string, var_77_object, var_86_cvector, var_87_cvector, var_80_string); // 0x125 Func
}


func_316(var_41_object, var_43_string, var_44_string, var_45_string)
{
	var_46_bool = 0; var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_object = Obj(); var_50_bool = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_object = Obj(); // 0x13c PushV
	GetLocator(var_43_string, var_50_bool, var_51_cvector, var_52_cvector); // 0x13d ObjFunc
	var_54_bool = var_50_bool == 0; // 0x13f Not
	if(var_54_bool == 0) goto Label_329; // 0x140 JumpB
	var_55_string = "Locator "; // 0x141 PushS
	var_56_int = var_55_string + var_43_string; // 0x142 Add
	var_57_string = " doesn't exist"; // 0x143 PushS
	var_58_int = var_56_int + var_57_string; // 0x144 Add
	Trace(var_58_int); // 0x145 Func
	var_53_object = 0; // 0x147 SetNull
	goto Label_331; // 0x148 Jump
	
Label_331:
	var_41_object = var_53_object; // 0x14b Mov
	return 8; // 0x14c Return
	
Label_329:
	AddStationaryActor(var_53_object, var_51_cvector, var_52_cvector, var_44_string, var_45_string); // 0x149 ObjFunc
}


func_351(var_182_object)
{
	var_183_int = 0; var_184_int = 0; var_185_object = Obj(); var_186_int = 0; var_187_int = 0; var_188_object = Obj(); // 0x15f PushV
	var_189_object = var_182_object; // 0x160 Push
	if(var_189_object == 0) goto Label_371; // 0x161 JumpB
	size(var_186_int); // 0x162 ObjFunc
	var_187_int = 0; // 0x164 MovI
	
Label_357:
	var_190_bool = var_187_int < var_186_int; // 0x165 LT
	if(var_190_bool == 0) goto Label_369; // 0x166 JumpB
	get(var_188_object, var_187_int); // 0x167 ObjFunc
	var_191_object = var_188_object; // 0x169 Push
	if(var_191_object == 0) goto Label_365; // 0x16a JumpB
	Remove(); // 0x16b ObjFunc
	
Label_365:
	var_188_object = 0; // 0x16d SetNull
	var_192_int = 1; // 0x16e PushI
	var_187_int = var_187_int + var_192_int; // 0x16f Add2
	goto Label_357; // 0x170 Jump
	
Label_369:
	clear(); // 0x171 ObjFunc
	
Label_371:
	return 6; // 0x173 Return
}


