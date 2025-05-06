task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_string)
{
	var_14_object = Obj(); var_15_object = Obj(); var_16_int = 0; var_17_object = Obj(); var_18_object = Obj(); var_19_int = 0; // 0x47 PushV
	Trace(var_13_string); // 0x48 Func
	var_20_string = "remove_whitemask"; // 0x4a PushS
	var_21_bool = var_13_string == var_20_string; // 0x4b Eq
	if(var_21_bool == 0) goto Label_82; // 0x4c JumpB
	var_22_object = var_1_object; // 0x4d PushT
	if(var_22_object == 0) goto Label_81; // 0x4e JumpB
	Remove(); // 0x4f TObjFunc
	
Label_81:
	goto Label_275; // 0x51 Jump
	
Label_275:
	return 6; // 0x113 Return
	
Label_82:
	var_23_string = "remove_birdmask"; // 0x52 PushS
	var_24_bool = var_13_string == var_23_string; // 0x53 Eq
	if(var_24_bool == 0) goto Label_90; // 0x54 JumpB
	var_25_object = var_0_object; // 0x55 PushT
	if(var_25_object == 0) goto Label_89; // 0x56 JumpB
	Remove(); // 0x57 TObjFunc
	
Label_89:
	goto Label_275; // 0x59 Jump
	
Label_90:
	var_26_string = "remove_katerina"; // 0x5a PushS
	var_27_bool = var_13_string == var_26_string; // 0x5b Eq
	if(var_27_bool == 0) goto Label_109; // 0x5c JumpB
	var_28_object = var_2_object; // 0x5d PushT
	if(var_28_object == 0) goto Label_98; // 0x5e JumpB
	var_29_string = "cleanup"; // 0x5f PushS
	Trigger(var_19_int, var_29_string); // 0x60 Func
	
Label_98:
	var_30_string = ""; var_31_bool = 0; // 0x62 PushV
	var_30_string = "cot_katerina@door1"; // 0x63 MovS
	var_31_bool = 0; // 0x64 MovB
	func_482(var_30_string, var_31_bool); // 0x65 NEW_2
	var_40_string = ""; var_41_bool = 0; // 0x67 PushV
	var_40_string = "cot_alexandr@door1"; // 0x68 MovS
	var_41_bool = 0; // 0x69 MovB
	func_482(var_40_string, var_41_bool); // 0x6a NEW_2
	goto Label_275; // 0x6c Jump
	
Label_109:
	var_42_string = "init_alexandr"; // 0x6d PushS
	var_43_bool = var_13_string == var_42_string; // 0x6e Eq
	if(var_43_bool == 0) goto Label_180; // 0x6f JumpB
	var_44_string = ""; var_45_bool = 0; // 0x70 PushV
	var_44_string = "cot_anna@door1"; // 0x71 MovS
	var_45_bool = 0; // 0x72 MovB
	func_482(var_44_string, var_45_bool); // 0x73 NEW_2
	GetMainOutdoorScene(var_17_object); // 0x75 Func
	var_46_object = Obj(); var_47_object = Obj(); var_48_string = ""; var_49_string = ""; var_50_string = ""; // 0x77 PushV
	var_47_object = var_17_object; // 0x78 Mov
	var_48_string = "pt_k1q01_doberman"; // 0x79 MovS
	var_49_string = "pers_karlik"; // 0x7a MovS
	var_50_string = "k1q01_doberman.xml"; // 0x7b MovS
	func_445(var_47_object, var_48_string, var_49_string, var_50_string); // 0x7c NEW_2
	var_4_object = var_46_object; // 0x7d TMov
	var_64_object = Obj(); var_65_object = Obj(); var_66_string = ""; var_67_string = ""; var_68_string = ""; // 0x7f PushV
	var_65_object = var_17_object; // 0x80 Mov
	var_66_string = "pt_k1q01_dohodyaga"; // 0x81 MovS
	var_67_string = "pers_dohodyaga"; // 0x82 MovS
	var_68_string = "k1q01_dohodyaga.xml"; // 0x83 MovS
	func_445(var_65_object, var_66_string, var_67_string, var_68_string); // 0x84 NEW_2
	var_8_object = var_64_object; // 0x85 TMov
	var_69_string = "cot_anna"; // 0x87 PushS
	GetSceneByName(var_17_object, var_69_string); // 0x88 Func
	var_70_object = Obj(); var_71_object = Obj(); var_72_string = ""; var_73_string = ""; var_74_string = ""; // 0x8a PushV
	var_71_object = var_17_object; // 0x8b Mov
	var_72_string = "pt_k1q01_danko"; // 0x8c MovS
	var_73_string = "NPC_Bakalavr"; // 0x8d MovS
	var_74_string = "k1q01_danko.xml"; // 0x8e MovS
	func_427(var_70_object, var_71_object, var_72_string, var_73_string, var_74_string); // 0x8f NEW_2
	var_3_object = var_70_object; // 0x90 TMov
	var_88_object = Obj(); var_89_object = Obj(); var_90_string = ""; var_91_string = ""; var_92_string = ""; // 0x92 PushV
	var_89_object = var_17_object; // 0x93 Mov
	var_90_string = "pt_k1q01_wastedmale1"; // 0x94 MovS
	var_91_string = "pers_wasted_male"; // 0x95 MovS
	var_92_string = "k1q01_statist.xml"; // 0x96 MovS
	func_427(var_88_object, var_89_object, var_90_string, var_91_string, var_92_string); // 0x97 NEW_2
	var_5_object = var_88_object; // 0x98 TMov
	var_93_object = Obj(); var_94_object = Obj(); var_95_string = ""; var_96_string = ""; var_97_string = ""; // 0x9a PushV
	var_94_object = var_17_object; // 0x9b Mov
	var_95_string = "pt_k1q01_wastedmale2"; // 0x9c MovS
	var_96_string = "pers_wasted_male"; // 0x9d MovS
	var_97_string = "k1q01_statist.xml"; // 0x9e MovS
	func_427(var_93_object, var_94_object, var_95_string, var_96_string, var_97_string); // 0x9f NEW_2
	var_6_object = var_93_object; // 0xa0 TMov
	var_98_object = Obj(); var_99_object = Obj(); var_100_string = ""; var_101_string = ""; var_102_string = ""; // 0xa2 PushV
	var_99_object = var_17_object; // 0xa3 Mov
	var_100_string = "pt_k1q01_woman"; // 0xa4 MovS
	var_101_string = "pers_woman"; // 0xa5 MovS
	var_102_string = "k1q01_statist.xml"; // 0xa6 MovS
	func_427(var_98_object, var_99_object, var_100_string, var_101_string, var_102_string); // 0xa7 NEW_2
	var_9_object = var_98_object; // 0xa8 TMov
	var_103_object = Obj(); var_104_object = Obj(); var_105_string = ""; var_106_string = ""; var_107_string = ""; // 0xaa PushV
	var_104_object = var_17_object; // 0xab Mov
	var_105_string = "pt_k1q01_agony"; // 0xac MovS
	var_106_string = "pers_worker"; // 0xad MovS
	var_107_string = "k1q01_agony.xml"; // 0xae MovS
	func_427(var_103_object, var_104_object, var_105_string, var_106_string, var_107_string); // 0xaf NEW_2
	var_7_object = var_103_object; // 0xb0 TMov
	var_17_object = 0; // 0xb2 SetNull
	goto Label_275; // 0xb3 Jump
	
Label_180:
	var_108_string = "doberman_dead"; // 0xb4 PushS
	var_109_bool = var_13_string == var_108_string; // 0xb5 Eq
	if(var_109_bool == 0) goto Label_195; // 0xb6 JumpB
	var_110_object = var_4_object; // 0xb7 PushT
	if(var_110_object == 0) goto Label_187; // 0xb8 JumpB
	Remove(); // 0xb9 TObjFunc
	
Label_187:
	var_111_string = "k1q01DobermanDead"; // 0xbb PushS
	var_112_int = 1; // 0xbc PushI
	SetVariable(var_111_string, var_112_int); // 0xbd Func
	func_544(); // 0xc0 NEW_2
	goto Label_275; // 0xc2 Jump
	
Label_195:
	var_136_string = "cure_worker"; // 0xc3 PushS
	var_137_bool = var_13_string == var_136_string; // 0xc4 Eq
	if(var_137_bool == 0) goto Label_206; // 0xc5 JumpB
	RemoveActor(var_13_string); // 0xc6 Func
	var_7_object = 0; // 0xc8 SetNullT
	var_138_object = Obj(); var_139_string = ""; // 0xc9 PushV
	var_139_string = "quest_k1_01_cutscene"; // 0xca MovS
	func_416(var_138_object, var_139_string); // 0xcb NEW_2
	goto Label_275; // 0xcd Jump
	
Label_206:
	var_146_string = "cutscene_end"; // 0xce PushS
	var_147_bool = var_13_string == var_146_string; // 0xcf Eq
	if(var_147_bool == 0) goto Label_245; // 0xd0 JumpB
	var_148_string = "cot_anna"; // 0xd1 PushS
	GetSceneByName(var_18_object, var_148_string); // 0xd2 Func
	var_149_object = Obj(); var_150_object = Obj(); var_151_string = ""; var_152_string = ""; var_153_string = ""; // 0xd4 PushV
	var_150_object = var_18_object; // 0xd5 Mov
	var_151_string = "pt_k1q01_worker"; // 0xd6 MovS
	var_152_string = "pers_worker"; // 0xd7 MovS
	var_153_string = "k1q01_worker.xml"; // 0xd8 MovS
	func_427(var_149_object, var_150_object, var_151_string, var_152_string, var_153_string); // 0xd9 NEW_2
	var_10_object = var_149_object; // 0xda TMov
	var_154_string = "k1q01Healed"; // 0xdc PushS
	var_155_int = 1; // 0xdd PushI
	SetVariable(var_154_string, var_155_int); // 0xde Func
	func_557(); // 0xe1 NEW_2
	var_164_bool = 0; var_165_object = Obj(); var_166_float = 0; // 0xe3 PushV
	var_167_object = Obj(); // 0xe4 PushV
	func_358(var_167_object); // 0xe5 NEW_2
	var_165_object = var_167_object; // 0xe6 Mov
	var_166_float = 0.25; // 0xe8 MovF
	func_499(var_164_bool, var_165_object, var_166_float); // 0xe9 NEW_2
	var_206_object = var_4_object; // 0xeb PushT
	if(var_206_object == 0) goto Label_239; // 0xec JumpB
	Remove(); // 0xed TObjFunc
	
Label_239:
	var_207_object = var_8_object; // 0xef PushT
	if(var_207_object == 0) goto Label_243; // 0xf0 JumpB
	Remove(); // 0xf1 TObjFunc
	
Label_243:
	var_18_object = 0; // 0xf3 SetNull
	goto Label_275; // 0xf4 Jump
	
Label_245:
	var_208_string = "cleanup"; // 0xf5 PushS
	var_209_bool = var_13_string == var_208_string; // 0xf6 Eq
	if(var_209_bool == 0) goto Label_262; // 0xf7 JumpB
	var_210_string = "k1q01"; // 0xf8 PushS
	GetVariable(var_210_string, var_19_int); // 0xf9 Func
	var_211_int = 1000; // 0xfb PushI
	var_212_bool = var_19_int != var_211_int; // 0xfc Neq
	if(var_212_bool == 0) goto Label_258; // 0xfd JumpB
	func_276(); // 0xff NEW_2
	goto Label_261; // 0x101 Jump
	
Label_261:
	goto Label_275; // 0x105 Jump
	
Label_258:
	func_292(var_14_object, var_15_object, var_16_int, var_17_object, var_18_object, var_19_int); // 0x103 NEW_2
	
Label_262:
	var_238_string = "fail"; // 0x106 PushS
	var_239_bool = var_13_string == var_238_string; // 0x107 Eq
	if(var_239_bool == 0) goto Label_269; // 0x108 JumpB
	func_276(); // 0x10a NEW_2
	goto Label_275; // 0x10c Jump
	
Label_269:
	var_240_string = "completed"; // 0x10d PushS
	var_241_bool = var_13_string == var_240_string; // 0x10e Eq
	if(var_241_bool == 0) goto Label_275; // 0x10f JumpB
	func_284(); // 0x111 NEW_2
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object)
{
	var_13_object = Obj(); var_14_object = Obj(); // 0x0 PushV
	var_15_string = ""; var_16_bool = 0; // 0x1 PushV
	var_15_string = "storojka@door1"; // 0x2 MovS
	var_16_bool = 0; // 0x3 MovB
	func_482(var_15_string, var_16_bool); // 0x4 NEW_2
	var_25_string = ""; var_26_bool = 0; // 0x6 PushV
	var_25_string = "burah_home@door1"; // 0x7 MovS
	var_26_bool = 0; // 0x8 MovB
	func_482(var_25_string, var_26_bool); // 0x9 NEW_2
	var_27_string = ""; var_28_bool = 0; // 0xb PushV
	var_27_string = "cot_katerina@door1"; // 0xc MovS
	var_28_bool = 1; // 0xd MovB
	func_482(var_27_string, var_28_bool); // 0xe NEW_2
	var_29_string = ""; var_30_bool = 0; // 0x10 PushV
	var_29_string = "cot_alexandr@door1"; // 0x11 MovS
	var_30_bool = 1; // 0x12 MovB
	func_482(var_29_string, var_30_bool); // 0x13 NEW_2
	GetMainOutdoorScene(var_14_object); // 0x15 Func
	var_31_object = Obj(); var_32_object = Obj(); var_33_string = ""; var_34_string = ""; var_35_string = ""; // 0x17 PushV
	var_32_object = var_14_object; // 0x18 Mov
	var_33_string = "pt_k1q01_birdmask"; // 0x19 MovS
	var_34_string = "pers_birdmask"; // 0x1a MovS
	var_35_string = "k1q01_birdmask.xml"; // 0x1b MovS
	func_463(var_32_object, var_33_string, var_34_string, var_35_string); // 0x1c NEW_2
	var_0_object = var_31_object; // 0x1d TMov
	var_50_object = Obj(); var_51_object = Obj(); var_52_string = ""; var_53_string = ""; var_54_string = ""; // 0x1f PushV
	var_51_object = var_14_object; // 0x20 Mov
	var_52_string = "pt_k1q01_whitemask"; // 0x21 MovS
	var_53_string = "pers_whitemask"; // 0x22 MovS
	var_54_string = "k1q01_whitemask.xml"; // 0x23 MovS
	func_463(var_51_object, var_52_string, var_53_string, var_54_string); // 0x24 NEW_2
	var_1_object = var_50_object; // 0x25 TMov
	var_55_object = Obj(); var_56_object = Obj(); var_57_string = ""; var_58_string = ""; var_59_string = ""; // 0x27 PushV
	var_56_object = var_14_object; // 0x28 Mov
	var_57_string = "pt_k1q01_grabitel1"; // 0x29 MovS
	var_58_string = "pers_grabitel"; // 0x2a MovS
	var_59_string = "k1q01_grabitel.xml"; // 0x2b MovS
	func_445(var_56_object, var_57_string, var_58_string, var_59_string); // 0x2c NEW_2
	var_11_object = var_55_object; // 0x2d TMov
	var_73_object = Obj(); var_74_object = Obj(); var_75_string = ""; var_76_string = ""; var_77_string = ""; // 0x2f PushV
	var_74_object = var_14_object; // 0x30 Mov
	var_75_string = "pt_k1q01_grabitel2"; // 0x31 MovS
	var_76_string = "pers_grabitel"; // 0x32 MovS
	var_77_string = "k1q01_grabitel.xml"; // 0x33 MovS
	func_445(var_74_object, var_75_string, var_76_string, var_77_string); // 0x34 NEW_2
	var_12_object = var_73_object; // 0x35 TMov
	var_78_string = "storojka"; // 0x37 PushS
	GetSceneByName(var_14_object, var_78_string); // 0x38 Func
	var_79_object = Obj(); var_80_object = Obj(); var_81_string = ""; var_82_string = ""; var_83_string = ""; // 0x3a PushV
	var_80_object = var_14_object; // 0x3b Mov
	var_81_string = "pt_k1q01_katerina"; // 0x3c MovS
	var_82_string = "NPC_Katerina"; // 0x3d MovS
	var_83_string = "k1q01_katerina.xml"; // 0x3e MovS
	func_427(var_79_object, var_80_object, var_81_string, var_82_string, var_83_string); // 0x3f NEW_2
	var_2_object = var_79_object; // 0x40 TMov
	
Label_66:
	Hold(); // 0x42 Func
	goto Label_66; // 0x44 Jump
}


func_583(var_118_bool, var_119_object, var_120_int)
{
	var_121_object = Obj(); var_122_object = Obj(); var_123_int = 0; var_124_object = Obj(); var_125_object = Obj(); var_126_int = 0; // 0x247 PushV
	var_127_object = Obj(); // 0x248 PushV
	func_570(var_127_object); // 0x249 NEW_2
	var_124_object = var_127_object; // 0x24a Mov
	Find(var_120_int, var_125_object); // 0x24c ObjFunc
	var_132_bool = var_125_object == 0; // 0x24e Not
	if(var_132_bool == 0) goto Label_598; // 0x24f JumpB
	var_133_string = "Can't find diary parent with id: "; // 0x250 PushS
	var_134_int = var_133_string + var_120_int; // 0x251 Add
	Trace(var_134_int); // 0x252 Func
	var_118_bool = 0; // 0x254 MovB
	return 6; // 0x255 Return
	
Label_598:
	AddChild(var_119_object); // 0x256 ObjFunc
	var_135_int = 7; // 0x258 PushI
	SendWorldWndMessage(var_135_int); // 0x259 Func
	GetCategory(var_126_int); // 0x25b ObjFunc
	SetDiarySection(var_126_int); // 0x25d Func
	var_118_bool = 0; // 0x25f MovB
	return 6; // 0x260 Return
}


func_399(var_235_object)
{
	var_236_object = Obj(); var_237_object = Obj(); // 0x18f PushV
	self(var_237_object); // 0x190 Func
	var_235_object = var_237_object; // 0x192 Mov
	return 2; // 0x193 Return
}


func_463(var_31_object, var_33_string, var_34_string, var_35_string)
{
	var_36_bool = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_object = Obj(); var_40_bool = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_object = Obj(); // 0x1cf PushV
	GetLocator(var_33_string, var_40_bool, var_41_cvector, var_42_cvector); // 0x1d0 ObjFunc
	var_44_bool = var_40_bool == 0; // 0x1d2 Not
	if(var_44_bool == 0) goto Label_476; // 0x1d3 JumpB
	var_45_string = "Locator "; // 0x1d4 PushS
	var_46_int = var_45_string + var_33_string; // 0x1d5 Add
	var_47_string = " doesn't exist"; // 0x1d6 PushS
	var_48_int = var_46_int + var_47_string; // 0x1d7 Add
	Trace(var_48_int); // 0x1d8 Func
	var_43_object = 0; // 0x1da SetNull
	goto Label_479; // 0x1db Jump
	
Label_479:
	var_31_object = var_43_object; // 0x1df Mov
	return 8; // 0x1e0 Return
	
Label_476:
	var_49_bool = 1; // 0x1dc PushB
	AddStationaryActor(var_43_object, var_41_cvector, var_42_cvector, var_34_string, var_35_string, var_49_bool); // 0x1dd ObjFunc
}


func_276()
{
	var_213_string = "k1q01"; // 0x114 PushS
	var_214_int = -1; // 0x115 PushI
	SetVariable(var_213_string, var_214_int); // 0x116 Func
	func_292(var_14_object, var_15_object, var_16_int, var_17_object, var_18_object, var_19_int); // 0x119 NEW_2
	return 0; // 0x11b Return
}


func_405(var_197_float, var_198_float, var_199_float, var_200_float)
{
	var_201_bool = var_198_float < var_199_float; // 0x196 LT
	if(var_201_bool == 0) goto Label_410; // 0x197 JumpB
	var_197_float = var_199_float; // 0x198 Mov
	return 0; // 0x199 Return
	
Label_410:
	var_202_bool = var_198_float > var_200_float; // 0x19a GT
	if(var_202_bool == 0) goto Label_414; // 0x19b JumpB
	var_197_float = var_200_float; // 0x19c Mov
	return 0; // 0x19d Return
	
Label_414:
	var_197_float = var_198_float; // 0x19e Mov
	return 0; // 0x19f Return
}


func_534(var_175_float)
{
	var_176_object = Obj(); var_177_object = Obj(); // 0x216 PushV
	CreateFloatVector(var_177_object); // 0x217 Func
	add(var_175_float); // 0x219 ObjFunc
	var_178_int = 16; // 0x21b PushI
	SendWorldWndMessage(var_178_int, var_177_object); // 0x21c Func
	return 2; // 0x21e Return
}


func_284()
{
	var_242_string = "k1q01"; // 0x11c PushS
	var_243_int = 1000; // 0x11d PushI
	SetVariable(var_242_string, var_243_int); // 0x11e Func
	func_292(var_14_object, var_15_object, var_16_int, var_17_object, var_18_object, var_19_int); // 0x121 NEW_2
	return 0; // 0x123 Return
}


func_544()
{
	var_113_object = Obj(); var_114_object = Obj(); // 0x220 PushV
	var_115_int = 325; // 0x221 PushI
	var_116_int = 1; // 0x222 PushI
	var_117_int = 524741; // 0x223 PushI
	CreateDiaryEntry(var_114_object, var_115_int, var_116_int, var_117_int); // 0x224 Func
	var_118_bool = 0; var_119_object = Obj(); var_120_int = 0; // 0x226 PushV
	var_119_object = var_114_object; // 0x227 Mov
	var_120_int = 318; // 0x228 MovI
	func_583(var_118_bool, var_119_object, var_120_int); // 0x229 NEW_2
	return 2; // 0x22b Return
}


func_416(var_138_object, var_139_string)
{
	var_140_object = Obj(); var_141_object = Obj(); var_142_object = Obj(); var_143_object = Obj(); // 0x1a0 PushV
	GetMainOutdoorScene(var_142_object); // 0x1a1 Func
	var_144_string = ".bin"; // 0x1a3 PushS
	var_145_int = var_139_string + var_144_string; // 0x1a4 Add
	AddBlankActor(var_143_object, var_142_object, var_139_string, var_145_int); // 0x1a5 Func
	var_138_object = var_143_object; // 0x1a7 Mov
	return 4; // 0x1a8 Return
}


func_482(var_15_string, var_16_bool)
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x1e2 PushV
	FindActor(var_18_object, var_15_string); // 0x1e3 Func
	var_19_bool = var_18_object == 0; // 0x1e5 Not
	if(var_19_bool == 0) goto Label_494; // 0x1e6 JumpB
	var_20_string = "Door "; // 0x1e7 PushS
	var_21_int = var_20_string + var_15_string; // 0x1e8 Add
	var_22_string = " not found"; // 0x1e9 PushS
	var_23_int = var_21_int + var_22_string; // 0x1ea Add
	Trace(var_23_int); // 0x1eb Func
	goto Label_497; // 0x1ed Jump
	
Label_497:
	return 2; // 0x1f1 Return
	
Label_494:
	var_24_string = "locked"; // 0x1ee PushS
	SetProperty(var_24_string, var_16_bool); // 0x1ef ObjFunc
}


func_292(var_11_object, var_12_object, var_15_object, var_16_int, var_18_object, var_19_int)
{
	EventDisable(26); // 0x124 EventDisable
	var_215_object = var_1_object; // 0x125 PushT
	if(var_215_object == 0) goto Label_297; // 0x126 JumpB
	Remove(); // 0x127 TObjFunc
	
Label_297:
	var_216_object = var_0_object; // 0x129 PushT
	if(var_216_object == 0) goto Label_301; // 0x12a JumpB
	Remove(); // 0x12b TObjFunc
	
Label_301:
	var_217_object = var_11_object; // 0x12d PushT
	if(var_217_object == 0) goto Label_305; // 0x12e JumpB
	Remove(); // 0x12f TObjFunc
	
Label_305:
	var_218_object = var_12_object; // 0x131 PushT
	if(var_218_object == 0) goto Label_309; // 0x132 JumpB
	Remove(); // 0x133 TObjFunc
	
Label_309:
	var_219_object = var_4_object; // 0x135 PushT
	if(var_219_object == 0) goto Label_313; // 0x136 JumpB
	Remove(); // 0x137 TObjFunc
	
Label_313:
	var_220_object = var_8_object; // 0x139 PushT
	if(var_220_object == 0) goto Label_317; // 0x13a JumpB
	Remove(); // 0x13b TObjFunc
	
Label_317:
	var_221_object = var_2_object; // 0x13d PushT
	if(var_221_object == 0) goto Label_322; // 0x13e JumpB
	var_222_string = "cleanup"; // 0x13f PushS
	Trigger(var_19_int, var_222_string); // 0x140 Func
	
Label_322:
	var_223_object = var_3_object; // 0x142 PushT
	if(var_223_object == 0) goto Label_327; // 0x143 JumpB
	var_224_string = "cleanup"; // 0x144 PushS
	Trigger(var_18_object, var_224_string); // 0x145 Func
	
Label_327:
	var_225_object = var_5_object; // 0x147 PushT
	if(var_225_object == 0) goto Label_332; // 0x148 JumpB
	var_226_string = "cleanup"; // 0x149 PushS
	Trigger(var_16_int, var_226_string); // 0x14a Func
	
Label_332:
	var_227_object = var_6_object; // 0x14c PushT
	if(var_227_object == 0) goto Label_337; // 0x14d JumpB
	var_228_string = "cleanup"; // 0x14e PushS
	Trigger(var_15_object, var_228_string); // 0x14f Func
	
Label_337:
	var_229_object = var_9_object; // 0x151 PushT
	if(var_229_object == 0) goto Label_342; // 0x152 JumpB
	var_230_string = "cleanup"; // 0x153 PushS
	Trigger(var_12_object, var_230_string); // 0x154 Func
	
Label_342:
	var_231_object = var_10_object; // 0x156 PushT
	if(var_231_object == 0) goto Label_347; // 0x157 JumpB
	var_232_string = "cleanup"; // 0x158 PushS
	Trigger(var_11_object, var_232_string); // 0x159 Func
	
Label_347:
	var_233_string = ""; var_234_bool = 0; // 0x15b PushV
	var_233_string = "cot_katerina@door1"; // 0x15c MovS
	var_234_bool = 0; // 0x15d MovB
	func_482(var_233_string, var_234_bool); // 0x15e NEW_2
	var_235_object = Obj(); // 0x160 PushV
	func_399(var_235_object); // 0x161 NEW_2
	RemoveActor(var_235_object); // 0x163 Func
	return 0; // 0x165 Return
}


func_358(var_167_object)
{
	var_168_object = Obj(); var_169_object = Obj(); // 0x166 PushV
	var_170_string = "player"; // 0x167 PushS
	FindActor(var_169_object, var_170_string); // 0x168 Func
	var_167_object = var_169_object; // 0x16a Mov
	return 2; // 0x16b Return
}


func_427(var_79_object, var_80_object, var_81_string, var_82_string, var_83_string)
{
	var_84_bool = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_object = Obj(); var_88_bool = 0; var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_object = Obj(); // 0x1ab PushV
	GetLocator(var_81_string, var_88_bool, var_89_cvector, var_90_cvector); // 0x1ac ObjFunc
	var_92_bool = var_88_bool == 0; // 0x1ae Not
	if(var_92_bool == 0) goto Label_440; // 0x1af JumpB
	var_93_string = "Locator "; // 0x1b0 PushS
	var_94_int = var_93_string + var_81_string; // 0x1b1 Add
	var_95_string = " doesn't exist"; // 0x1b2 PushS
	var_96_int = var_94_int + var_95_string; // 0x1b3 Add
	Trace(var_96_int); // 0x1b4 Func
	var_91_object = 0; // 0x1b6 SetNull
	goto Label_442; // 0x1b7 Jump
	
Label_442:
	var_79_object = var_91_object; // 0x1ba Mov
	return 8; // 0x1bb Return
	
Label_440:
	AddActor(var_91_object, var_82_string, var_80_object, var_89_cvector, var_90_cvector, var_83_string); // 0x1b8 Func
}


func_557()
{
	var_156_object = Obj(); var_157_object = Obj(); // 0x22d PushV
	var_158_int = 323; // 0x22e PushI
	var_159_int = 1; // 0x22f PushI
	var_160_int = 524739; // 0x230 PushI
	CreateDiaryEntry(var_157_object, var_158_int, var_159_int, var_160_int); // 0x231 Func
	var_161_bool = 0; var_162_object = Obj(); var_163_int = 0; // 0x233 PushV
	var_162_object = var_157_object; // 0x234 Mov
	var_163_int = 318; // 0x235 MovI
	func_583(var_161_bool, var_162_object, var_163_int); // 0x236 NEW_2
	return 2; // 0x238 Return
}


func_365(var_187_bool, var_188_object, var_189_string)
{
	var_190_bool = 0; var_191_bool = 0; // 0x16d PushV
	var_192_string = "HasProperty"; // 0x16e PushS
	var_193_int = 2; // 0x16f PushI
	var_194_bool = IsFuncExist(var_188_object, var_192_string, var_193_int); // 0x170 FuncExist
	var_195_bool = var_194_bool == 0; // 0x171 Not
	if(var_195_bool == 0) goto Label_373; // 0x172 JumpB
	var_187_bool = 0; // 0x173 MovB
	return 2; // 0x174 Return
	
Label_373:
	HasProperty(var_189_string, var_191_bool); // 0x175 ObjFunc
	var_187_bool = var_191_bool; // 0x177 Mov
	return 2; // 0x178 Return
}


func_499(var_164_bool, var_165_object, var_166_float)
{
	var_171_bool = var_165_object == 0; // 0x1f4 Not
	if(var_171_bool == 0) goto Label_504; // 0x1f5 JumpB
	var_164_bool = 0; // 0x1f6 MovB
	return 0; // 0x1f7 Return
	
Label_504:
	var_172_int = 0; // 0x1f8 PushI
	var_173_bool = var_166_float > var_172_int; // 0x1f9 GT
	if(var_173_bool == 0) goto Label_511; // 0x1fa JumpB
	var_174_int = 8; // 0x1fb PushI
	SendWorldWndMessage(var_174_int); // 0x1fc Func
	goto Label_520; // 0x1fe Jump
	
Label_520:
	var_175_float = 0; // 0x208 PushV
	var_175_float = var_166_float; // 0x209 Mov
	func_534(var_175_float); // 0x20a NEW_2
	var_179_bool = 0; var_180_object = Obj(); var_181_string = ""; var_182_float = 0; var_183_float = 0; var_184_float = 0; // 0x20c PushV
	var_180_object = var_165_object; // 0x20d Mov
	var_181_string = "reputation"; // 0x20e MovS
	var_182_float = var_166_float; // 0x20f Mov
	var_183_float = 0; // 0x210 MovI
	var_184_float = 1; // 0x211 MovI
	func_377(var_179_bool, var_180_object, var_181_string, var_182_float, var_183_float, var_184_float); // 0x212 NEW_2
	var_164_bool = 1; // 0x214 MovB
	return 0; // 0x215 Return
	
Label_511:
	var_203_int = 0; // 0x1ff PushI
	var_204_bool = var_166_float < var_203_int; // 0x200 LT
	if(var_204_bool == 0) goto Label_518; // 0x201 JumpB
	var_205_int = 9; // 0x202 PushI
	SendWorldWndMessage(var_205_int); // 0x203 Func
	goto Label_520; // 0x205 Jump
	
Label_518:
	var_164_bool = 0; // 0x206 MovB
	return 0; // 0x207 Return
}


func_377(var_179_bool, var_180_object, var_181_string, var_182_float, var_183_float, var_184_float)
{
	var_185_float = 0; var_186_float = 0; // 0x179 PushV
	var_187_bool = 0; var_188_object = Obj(); var_189_string = ""; // 0x17a PushV
	var_188_object = var_180_object; // 0x17b Mov
	var_189_string = var_181_string; // 0x17c Mov
	func_365(var_187_bool, var_188_object, var_189_string); // 0x17d NEW_2
	var_196_bool = var_187_bool == 0; // 0x17f Not
	if(var_196_bool == 0) goto Label_387; // 0x180 JumpB
	var_179_bool = 0; // 0x181 MovB
	return 2; // 0x182 Return
	
Label_387:
	GetProperty(var_181_string, var_186_float); // 0x183 ObjFunc
	var_197_float = 0; var_198_float = 0; var_199_float = 0; var_200_float = 0; // 0x185 PushV
	var_198_float = var_186_float + var_182_float; // 0x186 Add2
	var_199_float = var_183_float; // 0x187 Mov
	var_200_float = var_184_float; // 0x188 Mov
	func_405(var_197_float, var_198_float, var_199_float, var_200_float); // 0x189 NEW_2
	SetProperty(var_181_string, var_197_float); // 0x18b ObjFunc
	var_179_bool = 1; // 0x18d MovB
	return 2; // 0x18e Return
}


func_570(var_127_object)
{
	var_128_object = Obj(); var_129_object = Obj(); // 0x23a PushV
	GetDiaryRoot(var_129_object); // 0x23b Func
	var_130_bool = var_129_object == 0; // 0x23d Not
	if(var_130_bool == 0) goto Label_580; // 0x23e JumpB
	var_131_string = "Can't retrieve diary root"; // 0x23f PushS
	Trace(var_131_string); // 0x240 Func
	var_127_object = 0; // 0x242 MovB
	return 2; // 0x243 Return
	
Label_580:
	var_127_object = var_129_object; // 0x244 Mov
	return 2; // 0x245 Return
}


func_445(var_55_object, var_57_string, var_58_string, var_59_string)
{
	var_60_bool = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_object = Obj(); var_64_bool = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_object = Obj(); // 0x1bd PushV
	GetLocator(var_57_string, var_64_bool, var_65_cvector, var_66_cvector); // 0x1be ObjFunc
	var_68_bool = var_64_bool == 0; // 0x1c0 Not
	if(var_68_bool == 0) goto Label_458; // 0x1c1 JumpB
	var_69_string = "Locator "; // 0x1c2 PushS
	var_70_int = var_69_string + var_57_string; // 0x1c3 Add
	var_71_string = " doesn't exist"; // 0x1c4 PushS
	var_72_int = var_70_int + var_71_string; // 0x1c5 Add
	Trace(var_72_int); // 0x1c6 Func
	var_67_object = 0; // 0x1c8 SetNull
	goto Label_460; // 0x1c9 Jump
	
Label_460:
	var_55_object = var_67_object; // 0x1cc Mov
	return 8; // 0x1cd Return
	
Label_458:
	AddStationaryActor(var_67_object, var_65_cvector, var_66_cvector, var_58_string, var_59_string); // 0x1ca ObjFunc
}


