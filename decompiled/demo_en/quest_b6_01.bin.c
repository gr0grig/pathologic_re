task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_int, var_7_float)
{
	var_8_int = 0; var_9_int = 0; // 0xc PushV
	var_10_string = "b6q01KlaraVisit"; // 0xd PushS
	GetVariable(var_10_string, var_9_int); // 0xe Func
	var_11_bool = var_9_int == 0; // 0x10 Not
	if(var_11_bool == 0) goto Label_22; // 0x11 JumpB
	var_12_int = 0; var_13_float = 0; // 0x12 PushV
	var_13_float = var_7_float; // 0x13 Mov
	func_428(var_12_int, var_13_float); // 0x14 NEW_2
	
Label_22:
	return 2; // 0x16 Return
}


task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_string)
{
	var_7_object = Obj(); var_8_float = 0; var_9_object = Obj(); var_10_int = 0; var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_string = ""; var_15_string = ""; var_16_int = 0; var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); var_20_object = Obj(); var_21_int = 0; var_22_object = Obj(); var_23_float = 0; var_24_object = Obj(); var_25_int = 0; var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_string = ""; var_30_string = ""; var_31_int = 0; var_32_object = Obj(); var_33_object = Obj(); var_34_object = Obj(); var_35_object = Obj(); var_36_int = 0; // 0x17 PushV
	Trace(var_6_string); // 0x18 Func
	var_37_string = "place_klara"; // 0x1a PushS
	var_38_bool = var_6_string == var_37_string; // 0x1b Eq
	if(var_38_bool == 0) goto Label_49; // 0x1c JumpB
	var_39_string = "storojka"; // 0x1d PushS
	GetSceneByName(var_22_object, var_39_string); // 0x1e Func
	var_40_object = Obj(); var_41_object = Obj(); var_42_string = ""; var_43_string = ""; var_44_string = ""; // 0x20 PushV
	var_41_object = var_22_object; // 0x21 Mov
	var_42_string = "pt_b6q01_klara"; // 0x22 MovS
	var_43_string = "NPC_Klara"; // 0x23 MovS
	var_44_string = "b6q01_klara.xml"; // 0x24 MovS
	func_354(var_40_object, var_41_object, var_42_string, var_43_string, var_44_string); // 0x25 NEW_2
	var_0_object = var_40_object; // 0x26 TMov
	GetGameTime(var_23_float); // 0x28 Func
	var_58_float = 0.4; // 0x2a PushF
	var_23_float = var_23_float + var_58_float; // 0x2b Add2
	var_59_int = 0; // 0x2c PushI
	SetTimeEvent(var_59_int, var_23_float); // 0x2d Func
	var_22_object = 0; // 0x2f SetNull
	goto Label_273; // 0x30 Jump
	
Label_273:
	return 30; // 0x111 Return
	
Label_49:
	var_60_string = "remove_klara"; // 0x31 PushS
	var_61_bool = var_6_string == var_60_string; // 0x32 Eq
	if(var_61_bool == 0) goto Label_56; // 0x33 JumpB
	var_62_string = "cleanup"; // 0x34 PushS
	Trigger(var_0_object, var_62_string); // 0x35 Func
	goto Label_273; // 0x37 Jump
	
Label_56:
	var_63_string = "cutscene"; // 0x38 PushS
	var_64_bool = var_6_string == var_63_string; // 0x39 Eq
	if(var_64_bool == 0) goto Label_64; // 0x3a JumpB
	var_65_object = Obj(); var_66_string = ""; // 0x3b PushV
	var_66_string = "cs_burah_danko_microscope"; // 0x3c MovS
	func_343(var_65_object, var_66_string); // 0x3d NEW_2
	goto Label_273; // 0x3f Jump
	
Label_64:
	var_73_string = "cutscene_end"; // 0x40 PushS
	var_74_bool = var_6_string == var_73_string; // 0x41 Eq
	if(var_74_bool == 0) goto Label_72; // 0x42 JumpB
	var_75_string = "b6q01MicroscopeCS"; // 0x43 PushS
	var_76_int = 1; // 0x44 PushI
	SetVariable(var_75_string, var_76_int); // 0x45 Func
	goto Label_273; // 0x47 Jump
	
Label_72:
	var_77_string = "init_termitnik"; // 0x48 PushS
	var_78_bool = var_6_string == var_77_string; // 0x49 Eq
	if(var_78_bool == 0) goto Label_146; // 0x4a JumpB
	var_79_string = "termitnik2"; // 0x4b PushS
	GetSceneByName(var_24_object, var_79_string); // 0x4c Func
	var_80_object = Obj(); var_81_object = Obj(); var_82_string = ""; var_83_string = ""; var_84_string = ""; // 0x4e PushV
	var_81_object = var_24_object; // 0x4f Mov
	var_82_string = "pt_b6q01_mat"; // 0x50 MovS
	var_83_string = "NPC_Mat"; // 0x51 MovS
	var_84_string = "b6q01_mat.xml"; // 0x52 MovS
	func_354(var_80_object, var_81_object, var_82_string, var_83_string, var_84_string); // 0x53 NEW_2
	var_1_object = var_80_object; // 0x54 TMov
	var_25_int = 1; // 0x56 MovI
	
Label_87:
	var_85_string = "pt_b6q01_agony"; // 0x57 PushS
	var_86_int = var_85_string + var_25_int; // 0x58 Add
	GetLocator(var_86_int, var_26_bool, var_27_cvector, var_28_cvector); // 0x59 ObjFunc
	var_87_bool = var_26_bool == 0; // 0x5b Not
	if(var_87_bool == 0) goto Label_94; // 0x5c JumpB
	goto Label_117; // 0x5d Jump
	
Label_117:
	var_88_object = Obj(); var_89_object = Obj(); var_90_string = ""; var_91_string = ""; var_92_string = ""; // 0x75 PushV
	var_89_object = var_24_object; // 0x76 Mov
	var_90_string = "pt_b6q01_butcher1"; // 0x77 MovS
	var_91_string = "pers_butcher"; // 0x78 MovS
	var_92_string = "b6q01_butcher.xml"; // 0x79 MovS
	func_354(var_88_object, var_89_object, var_90_string, var_91_string, var_92_string); // 0x7a NEW_2
	add(var_88_object); // 0x7c TObjFunc
	var_93_object = Obj(); var_94_object = Obj(); var_95_string = ""; var_96_string = ""; var_97_string = ""; // 0x7e PushV
	var_94_object = var_24_object; // 0x7f Mov
	var_95_string = "pt_b6q01_butcher2"; // 0x80 MovS
	var_96_string = "pers_butcher"; // 0x81 MovS
	var_97_string = "b6q01_butcher.xml"; // 0x82 MovS
	func_354(var_93_object, var_94_object, var_95_string, var_96_string, var_97_string); // 0x83 NEW_2
	add(var_93_object); // 0x85 TObjFunc
	var_98_object = Obj(); var_99_object = Obj(); var_100_string = ""; var_101_string = ""; var_102_string = ""; // 0x87 PushV
	var_99_object = var_24_object; // 0x88 Mov
	var_100_string = "pt_b6q01_butcher3"; // 0x89 MovS
	var_101_string = "pers_butcher"; // 0x8a MovS
	var_102_string = "b6q01_butcher.xml"; // 0x8b MovS
	func_354(var_98_object, var_99_object, var_100_string, var_101_string, var_102_string); // 0x8c NEW_2
	add(var_98_object); // 0x8e TObjFunc
	var_24_object = 0; // 0x90 SetNull
	goto Label_273; // 0x91 Jump
	
Label_94:
	var_103_int = 3; // 0x5e PushI
	irand(var_31_int, var_103_int); // 0x5f Func
	var_104_int = 0; // 0x61 PushI
	var_105_bool = var_31_int == var_104_int; // 0x62 Eq
	if(var_105_bool == 0) goto Label_103; // 0x63 JumpB
	var_29_string = "pers_worker"; // 0x64 MovS
	var_30_string = "agony1_man.xml"; // 0x65 MovS
	goto Label_111; // 0x66 Jump
	
Label_111:
	AddActor(var_32_object, var_29_string, var_24_object, var_27_cvector, var_28_cvector, var_30_string); // 0x6f Func
	var_32_object = 0; // 0x71 SetNull
	var_106_int = 1; // 0x72 PushI
	var_25_int = var_25_int + var_106_int; // 0x73 Add2
	goto Label_87; // 0x74 Jump
	
Label_103:
	var_107_int = 1; // 0x67 PushI
	var_108_bool = var_31_int == var_107_int; // 0x68 Eq
	if(var_108_bool == 0) goto Label_109; // 0x69 JumpB
	var_29_string = "pers_morlok"; // 0x6a MovS
	var_30_string = "agony1_morlok.xml"; // 0x6b MovS
	goto Label_111; // 0x6c Jump
	
Label_109:
	var_29_string = "pers_woman"; // 0x6d MovS
	var_30_string = "agony1_woman.xml"; // 0x6e MovS
	
Label_146:
	var_109_string = "clean_termitnik"; // 0x92 PushS
	var_110_bool = var_6_string == var_109_string; // 0x93 Eq
	if(var_110_bool == 0) goto Label_163; // 0x94 JumpB
	var_111_string = "cleanup"; // 0x95 PushS
	Trigger(var_111_string, var_111_string); // 0x96 Func
	var_112_object = Obj(); var_113_string = ""; // 0x98 PushV
	var_112_object = var_2_object; // 0x99 MovT
	var_113_string = "cleanup"; // 0x9a MovS
	func_409(var_112_object, var_113_string); // 0x9b NEW_2
	var_124_object = Obj(); var_125_string = ""; // 0x9d PushV
	var_124_object = var_3_object; // 0x9e MovT
	var_125_string = "cleanup"; // 0x9f MovS
	func_409(var_124_object, var_125_string); // 0xa0 NEW_2
	goto Label_273; // 0xa2 Jump
	
Label_163:
	var_126_string = "init_altar"; // 0xa3 PushS
	var_127_bool = var_6_string == var_126_string; // 0xa4 Eq
	if(var_127_bool == 0) goto Label_196; // 0xa5 JumpB
	GetMainOutdoorScene(var_33_object); // 0xa6 Func
	var_128_object = Obj(); var_129_object = Obj(); var_130_string = ""; var_131_string = ""; var_132_string = ""; // 0xa8 PushV
	var_129_object = var_33_object; // 0xa9 Mov
	var_130_string = "pt_b6q01_morlok1"; // 0xaa MovS
	var_131_string = "pers_morlok"; // 0xab MovS
	var_132_string = "b6q01_morlok1.xml"; // 0xac MovS
	func_372(var_129_object, var_130_string, var_131_string, var_132_string); // 0xad NEW_2
	var_4_object = var_128_object; // 0xae TMov
	var_146_object = Obj(); var_147_object = Obj(); var_148_string = ""; var_149_string = ""; var_150_string = ""; // 0xb0 PushV
	var_147_object = var_33_object; // 0xb1 Mov
	var_148_string = "pt_b6q01_morlok2"; // 0xb2 MovS
	var_149_string = "pers_morlok"; // 0xb3 MovS
	var_150_string = "b6q01_morlok2.xml"; // 0xb4 MovS
	func_372(var_147_object, var_148_string, var_149_string, var_150_string); // 0xb5 NEW_2
	var_5_object = var_146_object; // 0xb6 TMov
	var_151_object = GlobalVars[0]; // 0xb8 PushGE
	var_152_object = Obj(); var_153_object = Obj(); var_154_string = ""; var_155_string = ""; var_156_string = ""; // 0xb9 PushV
	var_153_object = var_33_object; // 0xba Mov
	var_154_string = "pt_b6q01_bull"; // 0xbb MovS
	var_155_string = "pers_bull"; // 0xbc MovS
	var_156_string = "b6q01_bull.xml"; // 0xbd MovS
	func_354(var_152_object, var_153_object, var_154_string, var_155_string, var_156_string); // 0xbe NEW_2
	var_151_object = var_152_object; // 0xbf Mov
	GlobalVars[0] = var_151_object; // 0xc1 PopGE
	var_33_object = 0; // 0xc2 SetNull
	goto Label_273; // 0xc3 Jump
	
Label_196:
	var_157_string = "sacrifice"; // 0xc4 PushS
	var_158_bool = var_6_string == var_157_string; // 0xc5 Eq
	if(var_158_bool == 0) goto Label_220; // 0xc6 JumpB
	var_159_object = GlobalVars[0]; // 0xc7 PushGE
	RemoveActor(var_159_object); // 0xc8 Func
	GetActor(var_34_object); // 0xca TObjFunc
	RemoveActor(var_34_object); // 0xcc Func
	Remove(); // 0xce TObjFunc
	GetActor(var_34_object); // 0xd0 TObjFunc
	RemoveActor(var_34_object); // 0xd2 Func
	Remove(); // 0xd4 TObjFunc
	var_160_object = Obj(); var_161_string = ""; // 0xd6 PushV
	var_161_string = "quest_b6_01_cutscene"; // 0xd7 MovS
	func_343(var_160_object, var_161_string); // 0xd8 NEW_2
	var_34_object = 0; // 0xda SetNull
	goto Label_273; // 0xdb Jump
	
Label_220:
	var_162_string = "sacrifice_end"; // 0xdc PushS
	var_163_bool = var_6_string == var_162_string; // 0xdd Eq
	if(var_163_bool == 0) goto Label_243; // 0xde JumpB
	GetMainOutdoorScene(var_35_object); // 0xdf Func
	var_164_object = Obj(); var_165_object = Obj(); var_166_string = ""; var_167_string = ""; var_168_string = ""; // 0xe1 PushV
	var_165_object = var_35_object; // 0xe2 Mov
	var_166_string = "pt_b6q01_morlok1"; // 0xe3 MovS
	var_167_string = "pers_morlok"; // 0xe4 MovS
	var_168_string = "b6q01_morlok1.xml"; // 0xe5 MovS
	func_390(var_165_object, var_166_string, var_167_string, var_168_string); // 0xe6 NEW_2
	var_4_object = var_164_object; // 0xe7 TMov
	var_183_object = Obj(); var_184_object = Obj(); var_185_string = ""; var_186_string = ""; var_187_string = ""; // 0xe9 PushV
	var_184_object = var_35_object; // 0xea Mov
	var_185_string = "pt_b6q01_morlok2"; // 0xeb MovS
	var_186_string = "pers_morlok"; // 0xec MovS
	var_187_string = "b6q01_morlok2.xml"; // 0xed MovS
	func_390(var_184_object, var_185_string, var_186_string, var_187_string); // 0xee NEW_2
	var_5_object = var_183_object; // 0xef TMov
	var_35_object = 0; // 0xf1 SetNull
	goto Label_273; // 0xf2 Jump
	
Label_243:
	var_188_string = "cleanup"; // 0xf3 PushS
	var_189_bool = var_6_string == var_188_string; // 0xf4 Eq
	if(var_189_bool == 0) goto Label_260; // 0xf5 JumpB
	var_190_string = "b6q01"; // 0xf6 PushS
	GetVariable(var_190_string, var_36_int); // 0xf7 Func
	var_191_int = 1000; // 0xf9 PushI
	var_192_bool = var_36_int != var_191_int; // 0xfa Neq
	if(var_192_bool == 0) goto Label_256; // 0xfb JumpB
	func_274(); // 0xfd NEW_2
	goto Label_259; // 0xff Jump
	
Label_259:
	goto Label_273; // 0x103 Jump
	
Label_256:
	func_290(var_34_object, var_35_object, var_36_int); // 0x101 NEW_2
	
Label_260:
	var_211_string = "fail"; // 0x104 PushS
	var_212_bool = var_6_string == var_211_string; // 0x105 Eq
	if(var_212_bool == 0) goto Label_267; // 0x106 JumpB
	func_274(); // 0x108 NEW_2
	goto Label_273; // 0x10a Jump
	
Label_267:
	var_213_string = "completed"; // 0x10b PushS
	var_214_bool = var_6_string == var_213_string; // 0x10c Eq
	if(var_214_bool == 0) goto Label_273; // 0x10d JumpB
	func_282(); // 0x10f NEW_2
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object)
{
	var_6_object = Obj(); // 0x0 PushV
	func_337(var_6_object); // 0x1 NEW_2
	var_2_object = var_6_object; // 0x2 TMov
	var_9_object = Obj(); // 0x4 PushV
	func_337(var_9_object); // 0x5 NEW_2
	var_3_object = var_9_object; // 0x6 TMov
	
Label_8:
	Hold(); // 0x8 Func
	goto Label_8; // 0xa Jump
}


func_354(var_40_object, var_41_object, var_42_string, var_43_string, var_44_string)
{
	var_45_bool = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_object = Obj(); var_49_bool = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_object = Obj(); // 0x162 PushV
	GetLocator(var_42_string, var_49_bool, var_50_cvector, var_51_cvector); // 0x163 ObjFunc
	var_53_bool = var_49_bool == 0; // 0x165 Not
	if(var_53_bool == 0) goto Label_367; // 0x166 JumpB
	var_54_string = "Locator "; // 0x167 PushS
	var_55_int = var_54_string + var_42_string; // 0x168 Add
	var_56_string = " doesn't exist"; // 0x169 PushS
	var_57_int = var_55_int + var_56_string; // 0x16a Add
	Trace(var_57_int); // 0x16b Func
	var_52_object = 0; // 0x16d SetNull
	goto Label_369; // 0x16e Jump
	
Label_369:
	var_40_object = var_52_object; // 0x171 Mov
	return 8; // 0x172 Return
	
Label_367:
	AddActor(var_52_object, var_43_string, var_41_object, var_50_cvector, var_51_cvector, var_44_string); // 0x16f Func
}


func_290(var_0_object, var_2_object, var_3_object)
{
	EventDisable(9); // 0x122 EventDisable
	var_195_object = Obj(); var_196_string = ""; // 0x123 PushV
	var_195_object = var_2_object; // 0x124 MovT
	var_196_string = "cleanup"; // 0x125 MovS
	func_409(var_195_object, var_196_string); // 0x126 NEW_2
	var_197_object = Obj(); var_198_string = ""; // 0x128 PushV
	var_197_object = var_3_object; // 0x129 MovT
	var_198_string = "cleanup"; // 0x12a MovS
	func_409(var_197_object, var_198_string); // 0x12b NEW_2
	var_199_object = var_1_object; // 0x12d PushT
	if(var_199_object == 0) goto Label_306; // 0x12e JumpB
	var_200_string = "cleanup"; // 0x12f PushS
	Trigger(var_200_string, var_200_string); // 0x130 Func
	
Label_306:
	var_201_object = var_4_object; // 0x132 PushT
	if(var_201_object == 0) goto Label_310; // 0x133 JumpB
	Remove(); // 0x134 TObjFunc
	
Label_310:
	var_202_object = var_5_object; // 0x136 PushT
	if(var_202_object == 0) goto Label_314; // 0x137 JumpB
	Remove(); // 0x138 TObjFunc
	
Label_314:
	var_203_object = GlobalVars[0]; // 0x13a PushGE
	if(var_203_object == 0) goto Label_320; // 0x13b JumpB
	var_204_object = GlobalVars[0]; // 0x13c PushGE
	var_205_string = "cleanup"; // 0x13d PushS
	Trigger(var_204_object, var_205_string); // 0x13e Func
	
Label_320:
	var_206_object = var_0_object; // 0x140 PushT
	if(var_206_object == 0) goto Label_325; // 0x141 JumpB
	var_207_string = "cleanup"; // 0x142 PushS
	Trigger(var_0_object, var_207_string); // 0x143 Func
	
Label_325:
	var_208_object = Obj(); // 0x145 PushV
	func_331(var_208_object); // 0x146 NEW_2
	RemoveActor(var_208_object); // 0x148 Func
	return 0; // 0x14a Return
}


func_390(var_164_object, var_166_string, var_167_string, var_168_string)
{
	var_169_bool = 0; var_170_cvector = CVector(0,0,0); var_171_cvector = CVector(0,0,0); var_172_object = Obj(); var_173_bool = 0; var_174_cvector = CVector(0,0,0); var_175_cvector = CVector(0,0,0); var_176_object = Obj(); // 0x186 PushV
	GetLocator(var_166_string, var_173_bool, var_174_cvector, var_175_cvector); // 0x187 ObjFunc
	var_177_bool = var_173_bool == 0; // 0x189 Not
	if(var_177_bool == 0) goto Label_403; // 0x18a JumpB
	var_178_string = "Locator "; // 0x18b PushS
	var_179_int = var_178_string + var_166_string; // 0x18c Add
	var_180_string = " doesn't exist"; // 0x18d PushS
	var_181_int = var_179_int + var_180_string; // 0x18e Add
	Trace(var_181_int); // 0x18f Func
	var_176_object = 0; // 0x191 SetNull
	goto Label_406; // 0x192 Jump
	
Label_406:
	var_164_object = var_176_object; // 0x196 Mov
	return 8; // 0x197 Return
	
Label_403:
	var_182_bool = 1; // 0x193 PushB
	AddStationaryActor(var_176_object, var_174_cvector, var_175_cvector, var_167_string, var_168_string, var_182_bool); // 0x194 ObjFunc
}


func_331(var_208_object)
{
	var_209_object = Obj(); var_210_object = Obj(); // 0x14b PushV
	self(var_210_object); // 0x14c Func
	var_208_object = var_210_object; // 0x14e Mov
	return 2; // 0x14f Return
}


func_428(var_12_int, var_13_float)
{
	var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_float = 0; // 0x1ad PushV
	var_15_int = 525670; // 0x1ae MovI
	var_16_int = 525669; // 0x1af MovI
	var_17_float = var_13_float; // 0x1b0 Mov
	func_437(var_14_int, var_15_int, var_16_int, var_17_float); // 0x1b1 NEW_2
	var_12_int = var_14_int; // 0x1b2 Mov
	return 0; // 0x1b4 Return
}


func_337(var_6_object)
{
	var_7_object = Obj(); var_8_object = Obj(); // 0x151 PushV
	CreateObjectVector(var_8_object); // 0x152 Func
	var_6_object = var_8_object; // 0x154 Mov
	return 2; // 0x155 Return
}


func_274()
{
	var_193_string = "b6q01"; // 0x112 PushS
	var_194_int = -1; // 0x113 PushI
	SetVariable(var_193_string, var_194_int); // 0x114 Func
	func_290(var_34_object, var_35_object, var_36_int); // 0x117 NEW_2
	return 0; // 0x119 Return
}


func_372(var_128_object, var_130_string, var_131_string, var_132_string)
{
	var_133_bool = 0; var_134_cvector = CVector(0,0,0); var_135_cvector = CVector(0,0,0); var_136_object = Obj(); var_137_bool = 0; var_138_cvector = CVector(0,0,0); var_139_cvector = CVector(0,0,0); var_140_object = Obj(); // 0x174 PushV
	GetLocator(var_130_string, var_137_bool, var_138_cvector, var_139_cvector); // 0x175 ObjFunc
	var_141_bool = var_137_bool == 0; // 0x177 Not
	if(var_141_bool == 0) goto Label_385; // 0x178 JumpB
	var_142_string = "Locator "; // 0x179 PushS
	var_143_int = var_142_string + var_130_string; // 0x17a Add
	var_144_string = " doesn't exist"; // 0x17b PushS
	var_145_int = var_143_int + var_144_string; // 0x17c Add
	Trace(var_145_int); // 0x17d Func
	var_140_object = 0; // 0x17f SetNull
	goto Label_387; // 0x180 Jump
	
Label_387:
	var_128_object = var_140_object; // 0x183 Mov
	return 8; // 0x184 Return
	
Label_385:
	AddStationaryActor(var_140_object, var_138_cvector, var_139_cvector, var_131_string, var_132_string); // 0x181 ObjFunc
}


func_437(var_14_int, var_15_int, var_16_int, var_17_float)
{
	var_18_int = 0; var_19_int = 0; // 0x1b5 PushV
	AddMessage(var_15_int, var_16_int, var_17_float, var_19_int); // 0x1b6 Func
	var_20_int = 6; // 0x1b8 PushI
	SendWorldWndMessage(var_20_int); // 0x1b9 Func
	var_14_int = var_19_int; // 0x1bb Mov
	return 2; // 0x1bc Return
}


func_343(var_65_object, var_66_string)
{
	var_67_object = Obj(); var_68_object = Obj(); var_69_object = Obj(); var_70_object = Obj(); // 0x157 PushV
	GetMainOutdoorScene(var_69_object); // 0x158 Func
	var_71_string = ".bin"; // 0x15a PushS
	var_72_int = var_66_string + var_71_string; // 0x15b Add
	AddBlankActor(var_70_object, var_69_object, var_66_string, var_72_int); // 0x15c Func
	var_65_object = var_70_object; // 0x15e Mov
	return 4; // 0x15f Return
}


func_409(var_112_object, var_113_string)
{
	var_114_int = 0; var_115_int = 0; var_116_object = Obj(); var_117_int = 0; var_118_int = 0; var_119_object = Obj(); // 0x199 PushV
	var_120_object = var_112_object; // 0x19a Push
	if(var_120_object == 0) goto Label_427; // 0x19b JumpB
	size(var_117_int); // 0x19c ObjFunc
	var_118_int = 0; // 0x19e MovI
	
Label_415:
	var_121_bool = var_118_int < var_117_int; // 0x19f LT
	if(var_121_bool == 0) goto Label_427; // 0x1a0 JumpB
	get(var_119_object, var_118_int); // 0x1a1 ObjFunc
	var_122_object = var_119_object; // 0x1a3 Push
	if(var_122_object == 0) goto Label_423; // 0x1a4 JumpB
	Trigger(var_119_object, var_113_string); // 0x1a5 Func
	
Label_423:
	var_119_object = 0; // 0x1a7 SetNull
	var_123_int = 1; // 0x1a8 PushI
	var_118_int = var_118_int + var_123_int; // 0x1a9 Add2
	goto Label_415; // 0x1aa Jump
	
Label_427:
	return 6; // 0x1ab Return
}


func_282()
{
	var_215_string = "b6q01"; // 0x11a PushS
	var_216_int = 1000; // 0x11b PushI
	SetVariable(var_215_string, var_216_int); // 0x11c Func
	func_290(var_34_object, var_35_object, var_36_int); // 0x11f NEW_2
	return 0; // 0x121 Return
}


