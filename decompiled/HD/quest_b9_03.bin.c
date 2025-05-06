task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_int, var_7_bool, var_8_bool, var_9_string)
{
	var_10_object = Obj(); var_11_int = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_int = 0; var_15_object = Obj(); var_16_object = Obj(); var_17_int = 0; var_18_object = Obj(); var_19_object = Obj(); var_20_int = 0; var_21_object = Obj(); // 0x2c PushV
	Trace(var_9_string); // 0x2d Func
	var_22_string = "init_house_spi4ka"; // 0x2f PushS
	var_23_bool = var_9_string == var_22_string; // 0x30 Eq
	if(var_23_bool == 0) goto Label_87; // 0x31 JumpB
	var_24_string = "house_spi4ka"; // 0x32 PushS
	GetSceneByName(var_16_object, var_24_string); // 0x33 Func
	var_25_string = "nospi4ka"; // 0x35 PushS
	Trigger(var_16_object, var_25_string); // 0x36 Func
	var_26_object = Obj(); var_27_object = Obj(); var_28_string = ""; var_29_string = ""; var_30_string = ""; // 0x38 PushV
	var_27_object = var_16_object; // 0x39 Mov
	var_28_string = "pt_b9q03_doberman1"; // 0x3a MovS
	var_29_string = "pers_doberman"; // 0x3b MovS
	var_30_string = "b9q03_doberman.xml"; // 0x3c MovS
	func_494(var_26_object, var_27_object, var_28_string, var_29_string, var_30_string); // 0x3d NEW_2
	add(var_26_object); // 0x3f TObjFunc
	var_44_object = Obj(); var_45_object = Obj(); var_46_string = ""; var_47_string = ""; var_48_string = ""; // 0x41 PushV
	var_45_object = var_16_object; // 0x42 Mov
	var_46_string = "pt_b9q03_doberman2"; // 0x43 MovS
	var_47_string = "pers_doberman"; // 0x44 MovS
	var_48_string = "b9q03_doberman.xml"; // 0x45 MovS
	func_494(var_44_object, var_45_object, var_46_string, var_47_string, var_48_string); // 0x46 NEW_2
	add(var_44_object); // 0x48 TObjFunc
	var_49_object = var_0_object; // 0x4a PushT
	if(var_49_object == 0) goto Label_79; // 0x4b JumpB
	var_50_string = "cleanup"; // 0x4c PushS
	Trigger(var_0_object, var_50_string); // 0x4d Func
	
Label_79:
	var_51_string = "sobor"; // 0x4f PushS
	GetSceneByName(var_16_object, var_51_string); // 0x50 Func
	var_52_string = "aglaja"; // 0x52 PushS
	Trigger(var_16_object, var_52_string); // 0x53 Func
	var_16_object = 0; // 0x55 SetNull
	goto Label_359; // 0x56 Jump
	
Label_359:
	return 12; // 0x167 Return
	
Label_87:
	var_53_string = "doberman_attack"; // 0x57 PushS
	var_54_bool = var_9_string == var_53_string; // 0x58 Eq
	if(var_54_bool == 0) goto Label_109; // 0x59 JumpB
	var_55_object = Obj(); var_56_string = ""; // 0x5a PushV
	var_55_object = var_1_object; // 0x5b MovT
	var_56_string = "attack"; // 0x5c MovS
	func_529(var_55_object, var_56_string); // 0x5d NEW_2
	var_67_string = ""; var_68_bool = 0; // 0x5f PushV
	var_67_string = "ihouse_spi4ka@door1"; // 0x60 MovS
	var_68_bool = 1; // 0x61 MovB
	func_512(var_67_string, var_68_bool); // 0x62 NEW_2
	var_77_string = ""; var_78_bool = 0; // 0x64 PushV
	var_77_string = "ihouse_spi4ka@door2"; // 0x65 MovS
	var_78_bool = 1; // 0x66 MovB
	func_512(var_77_string, var_78_bool); // 0x67 NEW_2
	var_79_string = "door_close"; // 0x69 PushS
	PlaySound(var_79_string); // 0x6a Func
	goto Label_359; // 0x6c Jump
	
Label_109:
	var_80_string = "doberman_dead"; // 0x6d PushS
	var_81_bool = var_9_string == var_80_string; // 0x6e Eq
	if(var_81_bool == 0) goto Label_132; // 0x6f JumpB
	var_82_int = 1; // 0x70 PushI
	var_6_int = var_6_int + var_82_int; // 0x71 Add2
	size(var_17_int); // 0x72 TObjFunc
	var_83_bool = var_17_int == var_6_int; // 0x74 Eq
	if(var_83_bool == 0) goto Label_131; // 0x75 JumpB
	var_84_string = ""; var_85_bool = 0; // 0x76 PushV
	var_84_string = "ihouse_spi4ka@door1"; // 0x77 MovS
	var_85_bool = 0; // 0x78 MovB
	func_512(var_84_string, var_85_bool); // 0x79 NEW_2
	var_86_string = ""; var_87_bool = 0; // 0x7b PushV
	var_86_string = "ihouse_spi4ka@door2"; // 0x7c MovS
	var_87_bool = 0; // 0x7d MovB
	func_512(var_86_string, var_87_bool); // 0x7e NEW_2
	var_88_string = "door_open"; // 0x80 PushS
	PlaySound(var_88_string); // 0x81 Func
	
Label_131:
	goto Label_359; // 0x83 Jump
	
Label_132:
	var_89_string = "place_follower"; // 0x84 PushS
	var_90_bool = var_9_string == var_89_string; // 0x85 Eq
	if(var_90_bool == 0) goto Label_151; // 0x86 JumpB
	var_91_bool = var_7_bool; // 0x87 PushT
	if(var_91_bool == 0) goto Label_138; // 0x88 JumpB
	return 12; // 0x89 Return
	
Label_138:
	var_7_bool = 1; // 0x8a TMovB
	GetMainOutdoorScene(var_18_object); // 0x8b Func
	var_92_object = Obj(); var_93_object = Obj(); var_94_string = ""; var_95_string = ""; var_96_string = ""; // 0x8d PushV
	var_93_object = var_18_object; // 0x8e Mov
	var_94_string = "pt_b9q03_follower"; // 0x8f MovS
	var_95_string = "pers_boy"; // 0x90 MovS
	var_96_string = "b9q03_follower.xml"; // 0x91 MovS
	func_494(var_92_object, var_93_object, var_94_string, var_95_string, var_96_string); // 0x92 NEW_2
	var_3_object = var_92_object; // 0x93 TMov
	var_18_object = 0; // 0x95 SetNull
	goto Label_359; // 0x96 Jump
	
Label_151:
	var_97_string = "init_bonefires"; // 0x97 PushS
	var_98_bool = var_9_string == var_97_string; // 0x98 Eq
	if(var_98_bool == 0) goto Label_270; // 0x99 JumpB
	var_99_bool = var_8_bool; // 0x9a PushT
	if(var_99_bool == 0) goto Label_157; // 0x9b JumpB
	return 12; // 0x9c Return
	
Label_157:
	var_8_bool = 1; // 0x9d TMovB
	GetMainOutdoorScene(var_19_object); // 0x9e Func
	var_100_object = Obj(); var_101_object = Obj(); var_102_string = ""; var_103_string = ""; var_104_string = ""; // 0xa0 PushV
	var_101_object = var_19_object; // 0xa1 Mov
	var_102_string = "pt_b9q03_b1_doberman1"; // 0xa2 MovS
	var_103_string = "pers_doberman"; // 0xa3 MovS
	var_104_string = "b9q03_e_doberman.xml"; // 0xa4 MovS
	func_494(var_100_object, var_101_object, var_102_string, var_103_string, var_104_string); // 0xa5 NEW_2
	add(var_100_object); // 0xa7 TObjFunc
	var_105_object = Obj(); var_106_object = Obj(); var_107_string = ""; var_108_string = ""; var_109_string = ""; // 0xa9 PushV
	var_106_object = var_19_object; // 0xaa Mov
	var_107_string = "pt_b9q03_b1_morlok1"; // 0xab MovS
	var_108_string = "pers_morlok"; // 0xac MovS
	var_109_string = "b9q03_e_morlok.xml"; // 0xad MovS
	func_494(var_105_object, var_106_object, var_107_string, var_108_string, var_109_string); // 0xae NEW_2
	add(var_105_object); // 0xb0 TObjFunc
	var_110_object = Obj(); var_111_object = Obj(); var_112_string = ""; var_113_string = ""; var_114_string = ""; // 0xb2 PushV
	var_111_object = var_19_object; // 0xb3 Mov
	var_112_string = "pt_b9q03_b1_morlok2"; // 0xb4 MovS
	var_113_string = "pers_morlok"; // 0xb5 MovS
	var_114_string = "b9q03_e_morlok.xml"; // 0xb6 MovS
	func_494(var_110_object, var_111_object, var_112_string, var_113_string, var_114_string); // 0xb7 NEW_2
	add(var_110_object); // 0xb9 TObjFunc
	var_115_object = Obj(); var_116_object = Obj(); var_117_string = ""; var_118_string = ""; var_119_string = ""; // 0xbb PushV
	var_116_object = var_19_object; // 0xbc Mov
	var_117_string = "pt_b9q03_b2_doberman1"; // 0xbd MovS
	var_118_string = "pers_doberman"; // 0xbe MovS
	var_119_string = "b9q03_e_doberman.xml"; // 0xbf MovS
	func_494(var_115_object, var_116_object, var_117_string, var_118_string, var_119_string); // 0xc0 NEW_2
	add(var_115_object); // 0xc2 TObjFunc
	var_120_object = Obj(); var_121_object = Obj(); var_122_string = ""; var_123_string = ""; var_124_string = ""; // 0xc4 PushV
	var_121_object = var_19_object; // 0xc5 Mov
	var_122_string = "pt_b9q03_b2_grabitel1"; // 0xc6 MovS
	var_123_string = "pers_grabitel"; // 0xc7 MovS
	var_124_string = "b9q03_e_grabitel.xml"; // 0xc8 MovS
	func_494(var_120_object, var_121_object, var_122_string, var_123_string, var_124_string); // 0xc9 NEW_2
	add(var_120_object); // 0xcb TObjFunc
	var_125_object = Obj(); var_126_object = Obj(); var_127_string = ""; var_128_string = ""; var_129_string = ""; // 0xcd PushV
	var_126_object = var_19_object; // 0xce Mov
	var_127_string = "pt_b9q03_b2_grabitel2"; // 0xcf MovS
	var_128_string = "pers_grabitel"; // 0xd0 MovS
	var_129_string = "b9q03_e_grabitel.xml"; // 0xd1 MovS
	func_494(var_125_object, var_126_object, var_127_string, var_128_string, var_129_string); // 0xd2 NEW_2
	add(var_125_object); // 0xd4 TObjFunc
	var_130_object = Obj(); var_131_object = Obj(); var_132_string = ""; var_133_string = ""; var_134_string = ""; // 0xd6 PushV
	var_131_object = var_19_object; // 0xd7 Mov
	var_132_string = "pt_b9q03_b3_doberman1"; // 0xd8 MovS
	var_133_string = "pers_doberman"; // 0xd9 MovS
	var_134_string = "b9q03_e_doberman.xml"; // 0xda MovS
	func_494(var_130_object, var_131_object, var_132_string, var_133_string, var_134_string); // 0xdb NEW_2
	add(var_130_object); // 0xdd TObjFunc
	var_135_object = Obj(); var_136_object = Obj(); var_137_string = ""; var_138_string = ""; var_139_string = ""; // 0xdf PushV
	var_136_object = var_19_object; // 0xe0 Mov
	var_137_string = "pt_b9q03_b3_wastedmale1"; // 0xe1 MovS
	var_138_string = "pers_wasted_male"; // 0xe2 MovS
	var_139_string = "b9q03_e_wasted_male.xml"; // 0xe3 MovS
	func_494(var_135_object, var_136_object, var_137_string, var_138_string, var_139_string); // 0xe4 NEW_2
	add(var_135_object); // 0xe6 TObjFunc
	var_140_object = Obj(); var_141_object = Obj(); var_142_string = ""; var_143_string = ""; var_144_string = ""; // 0xe8 PushV
	var_141_object = var_19_object; // 0xe9 Mov
	var_142_string = "pt_b9q03_b3_hunter1"; // 0xea MovS
	var_143_string = "pers_hunter"; // 0xeb MovS
	var_144_string = "b9q03_e_hunter.xml"; // 0xec MovS
	func_494(var_140_object, var_141_object, var_142_string, var_143_string, var_144_string); // 0xed NEW_2
	add(var_140_object); // 0xef TObjFunc
	var_145_object = Obj(); var_146_object = Obj(); var_147_string = ""; var_148_string = ""; var_149_string = ""; // 0xf1 PushV
	var_146_object = var_19_object; // 0xf2 Mov
	var_147_string = "pt_b9q03_b4_doberman1"; // 0xf3 MovS
	var_148_string = "pers_doberman"; // 0xf4 MovS
	var_149_string = "b9q03_e_doberman.xml"; // 0xf5 MovS
	func_494(var_145_object, var_146_object, var_147_string, var_148_string, var_149_string); // 0xf6 NEW_2
	add(var_145_object); // 0xf8 TObjFunc
	var_150_object = Obj(); var_151_object = Obj(); var_152_string = ""; var_153_string = ""; var_154_string = ""; // 0xfa PushV
	var_151_object = var_19_object; // 0xfb Mov
	var_152_string = "pt_b9q03_b4_doberman2"; // 0xfc MovS
	var_153_string = "pers_doberman"; // 0xfd MovS
	var_154_string = "b9q03_e_doberman.xml"; // 0xfe MovS
	func_494(var_150_object, var_151_object, var_152_string, var_153_string, var_154_string); // 0xff NEW_2
	add(var_150_object); // 0x101 TObjFunc
	var_155_object = Obj(); var_156_object = Obj(); var_157_string = ""; var_158_string = ""; var_159_string = ""; // 0x103 PushV
	var_156_object = var_19_object; // 0x104 Mov
	var_157_string = "pt_b9q03_b4_doberman3"; // 0x105 MovS
	var_158_string = "pers_doberman"; // 0x106 MovS
	var_159_string = "b9q03_e_doberman.xml"; // 0x107 MovS
	func_494(var_155_object, var_156_object, var_157_string, var_158_string, var_159_string); // 0x108 NEW_2
	add(var_155_object); // 0x10a TObjFunc
	var_19_object = 0; // 0x10c SetNull
	goto Label_359; // 0x10d Jump
	
Label_270:
	var_160_string = "bonfire_burn"; // 0x10e PushS
	var_161_bool = var_9_string == var_160_string; // 0x10f Eq
	if(var_161_bool == 0) goto Label_346; // 0x110 JumpB
	var_162_string = "b9q03BonefiresCount"; // 0x111 PushS
	GetVariable(var_162_string, var_20_int); // 0x112 Func
	var_163_int = 0; // 0x114 PushI
	var_164_bool = var_20_int == var_163_int; // 0x115 Eq
	if(var_164_bool == 0) goto Label_283; // 0x116 JumpB
	func_574(); // 0x118 NEW_2
	goto Label_340; // 0x11a Jump
	
Label_340:
	var_188_int = 1; // 0x154 PushI
	var_20_int = var_20_int + var_188_int; // 0x155 Add2
	var_189_string = "b9q03BonefiresCount"; // 0x156 PushS
	SetVariable(var_189_string, var_20_int); // 0x157 Func
	goto Label_359; // 0x159 Jump
	
Label_283:
	var_190_int = 1; // 0x11b PushI
	var_191_bool = var_20_int == var_190_int; // 0x11c Eq
	if(var_191_bool == 0) goto Label_290; // 0x11d JumpB
	func_561(); // 0x11f NEW_2
	goto Label_340; // 0x121 Jump
	
Label_290:
	var_200_int = 2; // 0x122 PushI
	var_201_bool = var_20_int == var_200_int; // 0x123 Eq
	if(var_201_bool == 0) goto Label_297; // 0x124 JumpB
	func_548(); // 0x126 NEW_2
	goto Label_340; // 0x128 Jump
	
Label_297:
	var_210_int = 3; // 0x129 PushI
	var_211_bool = var_20_int == var_210_int; // 0x12a Eq
	if(var_211_bool == 0) goto Label_340; // 0x12b JumpB
	func_587(); // 0x12d NEW_2
	GetMainOutdoorScene(var_21_object); // 0x12f Func
	var_220_object = Obj(); var_221_object = Obj(); var_222_string = ""; var_223_string = ""; var_224_string = ""; // 0x131 PushV
	var_221_object = var_21_object; // 0x132 Mov
	var_222_string = "pt_b9q03_girl"; // 0x133 MovS
	var_223_string = "pers_girl"; // 0x134 MovS
	var_224_string = "b9q03_girl.xml"; // 0x135 MovS
	func_494(var_220_object, var_221_object, var_222_string, var_223_string, var_224_string); // 0x136 NEW_2
	var_5_object = var_220_object; // 0x137 TMov
	var_225_string = "cot_kapella"; // 0x139 PushS
	GetSceneByName(var_21_object, var_225_string); // 0x13a Func
	var_226_object = Obj(); var_227_object = Obj(); var_228_string = ""; var_229_string = ""; var_230_string = ""; // 0x13c PushV
	var_227_object = var_21_object; // 0x13d Mov
	var_228_string = "pt_b9q03_spi4ka"; // 0x13e MovS
	var_229_string = "NPC_Spi4ka"; // 0x13f MovS
	var_230_string = "b9q03_spi4ka.xml"; // 0x140 MovS
	func_494(var_226_object, var_227_object, var_228_string, var_229_string, var_230_string); // 0x141 NEW_2
	var_4_object = var_226_object; // 0x142 TMov
	var_231_string = ""; var_232_bool = 0; // 0x144 PushV
	var_231_string = "house_spi4ka@door1"; // 0x145 MovS
	var_232_bool = 1; // 0x146 MovB
	func_512(var_231_string, var_232_bool); // 0x147 NEW_2
	var_233_string = ""; var_234_bool = 0; // 0x149 PushV
	var_233_string = "house_spi4ka@door2"; // 0x14a MovS
	var_234_bool = 1; // 0x14b MovB
	func_512(var_233_string, var_234_bool); // 0x14c NEW_2
	var_235_object = var_3_object; // 0x14e PushT
	if(var_235_object == 0) goto Label_339; // 0x14f JumpB
	var_236_string = "cleanup"; // 0x150 PushS
	Trigger(var_20_int, var_236_string); // 0x151 Func
	
Label_339:
	var_21_object = 0; // 0x153 SetNull
	
Label_346:
	var_237_string = "fail"; // 0x15a PushS
	var_238_bool = var_9_string == var_237_string; // 0x15b Eq
	if(var_238_bool == 0) goto Label_353; // 0x15c JumpB
	func_371(); // 0x15e NEW_2
	goto Label_359; // 0x160 Jump
	
Label_353:
	var_270_string = "completed"; // 0x161 PushS
	var_271_bool = var_9_string == var_270_string; // 0x162 Eq
	if(var_271_bool == 0) goto Label_359; // 0x163 JumpB
	func_379(); // 0x165 NEW_2
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_int, var_7_bool, var_8_bool, var_9_int, var_10_float)
{
	func_360(); // 0x1df NEW_2
	return 0; // 0x1e1 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_int, var_7_bool, var_8_bool)
{
	var_9_object = Obj(); var_10_object = Obj(); var_11_object = Obj(); var_12_object = Obj(); // 0x0 PushV
	var_7_bool = 0; // 0x1 TMovB
	var_8_bool = 0; // 0x2 TMovB
	var_13_object = Obj(); // 0x3 PushV
	func_488(var_13_object); // 0x4 NEW_2
	var_1_object = var_13_object; // 0x5 TMov
	var_16_object = Obj(); // 0x7 PushV
	func_488(var_16_object); // 0x8 NEW_2
	var_2_object = var_16_object; // 0x9 TMov
	var_17_string = "sobor"; // 0xb PushS
	GetSceneByName(var_11_object, var_17_string); // 0xc Func
	var_18_string = "noaglaja"; // 0xe PushS
	Trigger(var_11_object, var_18_string); // 0xf Func
	var_19_string = "cot_kapella"; // 0x11 PushS
	GetSceneByName(var_11_object, var_19_string); // 0x12 Func
	GetActiveScene(var_12_object); // 0x14 Func
	var_20_bool = var_12_object == var_11_object; // 0x16 Eq
	if(var_20_bool == 0) goto Label_29; // 0x17 JumpB
	var_21_string = "b9q03BadInit"; // 0x18 PushS
	var_22_int = 1; // 0x19 PushI
	SetVariable(var_21_string, var_22_int); // 0x1a Func
	goto Label_37; // 0x1c Jump
	
Label_37:
	var_23_int = 0; // 0x25 PushV
	var_23_int = 9; // 0x26 MovI
	func_458(var_23_int); // 0x27 NEW_2
	return 4; // 0x29 Return
	
Label_29:
	var_79_object = Obj(); var_80_object = Obj(); var_81_string = ""; var_82_string = ""; var_83_string = ""; // 0x1d PushV
	var_80_object = var_11_object; // 0x1e Mov
	var_81_string = "pt_b9q03_aglaja"; // 0x1f MovS
	var_82_string = "NPC_Aglaja"; // 0x20 MovS
	var_83_string = "b9q03_aglaja.xml"; // 0x21 MovS
	func_494(var_79_object, var_80_object, var_81_string, var_82_string, var_83_string); // 0x22 NEW_2
	var_0_object = var_79_object; // 0x23 TMov
}


func_512(var_57_string, var_58_bool)
{
	var_59_object = Obj(); var_60_object = Obj(); // 0x200 PushV
	FindActor(var_60_object, var_57_string); // 0x201 Func
	var_61_bool = var_60_object == 0; // 0x203 Not
	if(var_61_bool == 0) goto Label_524; // 0x204 JumpB
	var_62_string = "Door "; // 0x205 PushS
	var_63_int = var_62_string + var_57_string; // 0x206 Add
	var_64_string = " not found"; // 0x207 PushS
	var_65_int = var_63_int + var_64_string; // 0x208 Add
	Trace(var_65_int); // 0x209 Func
	goto Label_527; // 0x20b Jump
	
Label_527:
	return 2; // 0x20f Return
	
Label_524:
	var_66_string = "locked"; // 0x20c PushS
	SetProperty(var_66_string, var_58_bool); // 0x20d ObjFunc
}


func_387(var_0_object, var_1_object, var_2_object, var_24_float, var_25_float)
{
	var_29_object = Obj(); var_30_object = Obj(); // 0x183 PushV
	EventDisable(26); // 0x184 EventDisable
	var_31_string = "sobor"; // 0x185 PushS
	GetSceneByName(var_30_object, var_31_string); // 0x186 Func
	var_32_string = "aglaja"; // 0x188 PushS
	Trigger(var_30_object, var_32_string); // 0x189 Func
	var_33_string = "house_spi4ka"; // 0x18b PushS
	GetSceneByName(var_30_object, var_33_string); // 0x18c Func
	var_34_string = "spi4ka"; // 0x18e PushS
	Trigger(var_30_object, var_34_string); // 0x18f Func
	var_35_object = Obj(); var_36_string = ""; // 0x191 PushV
	var_35_object = var_1_object; // 0x192 MovT
	var_36_string = "cleanup"; // 0x193 MovS
	func_529(var_35_object, var_36_string); // 0x194 NEW_2
	var_47_object = Obj(); var_48_string = ""; // 0x196 PushV
	var_47_object = var_2_object; // 0x197 MovT
	var_48_string = "cleanup"; // 0x198 MovS
	func_529(var_47_object, var_48_string); // 0x199 NEW_2
	var_49_object = var_3_object; // 0x19b PushT
	if(var_49_object == 0) goto Label_416; // 0x19c JumpB
	var_50_string = "cleanup"; // 0x19d PushS
	Trigger(var_29_object, var_50_string); // 0x19e Func
	
Label_416:
	var_51_object = var_0_object; // 0x1a0 PushT
	if(var_51_object == 0) goto Label_421; // 0x1a1 JumpB
	var_52_string = "cleanup"; // 0x1a2 PushS
	Trigger(var_0_object, var_52_string); // 0x1a3 Func
	
Label_421:
	var_53_object = var_4_object; // 0x1a5 PushT
	if(var_53_object == 0) goto Label_426; // 0x1a6 JumpB
	var_54_string = "cleanup"; // 0x1a7 PushS
	Trigger(var_25_float, var_54_string); // 0x1a8 Func
	
Label_426:
	var_55_object = var_5_object; // 0x1aa PushT
	if(var_55_object == 0) goto Label_431; // 0x1ab JumpB
	var_56_string = "cleanup"; // 0x1ac PushS
	Trigger(var_24_float, var_56_string); // 0x1ad Func
	
Label_431:
	var_57_string = ""; var_58_bool = 0; // 0x1af PushV
	var_57_string = "ihouse_spi4ka@door1"; // 0x1b0 MovS
	var_58_bool = 0; // 0x1b1 MovB
	func_512(var_57_string, var_58_bool); // 0x1b2 NEW_2
	var_67_string = ""; var_68_bool = 0; // 0x1b4 PushV
	var_67_string = "ihouse_spi4ka@door2"; // 0x1b5 MovS
	var_68_bool = 0; // 0x1b6 MovB
	func_512(var_67_string, var_68_bool); // 0x1b7 NEW_2
	var_69_string = ""; var_70_bool = 0; // 0x1b9 PushV
	var_69_string = "house_spi4ka@door1"; // 0x1ba MovS
	var_70_bool = 0; // 0x1bb MovB
	func_512(var_69_string, var_70_bool); // 0x1bc NEW_2
	var_71_string = ""; var_72_bool = 0; // 0x1be PushV
	var_71_string = "house_spi4ka@door2"; // 0x1bf MovS
	var_72_bool = 0; // 0x1c0 MovB
	func_512(var_71_string, var_72_bool); // 0x1c1 NEW_2
	var_73_object = Obj(); // 0x1c3 PushV
	func_482(var_73_object); // 0x1c4 NEW_2
	RemoveActor(var_73_object); // 0x1c6 Func
	return 2; // 0x1c8 Return
}


func_458(var_23_int)
{
	var_24_float = 0; var_25_float = 0; // 0x1ca PushV
	GetGameTime(var_25_float); // 0x1cb Func
	var_26_int = 24; // 0x1cd PushI
	var_27_float = var_23_int * var_26_int; // 0x1ce Mult
	var_28_bool = var_25_float >= var_27_float; // 0x1cf GE
	if(var_28_bool == 0) goto Label_469; // 0x1d0 JumpB
	func_387(var_11_object, var_12_object, var_23_int, var_24_float, var_25_float); // 0x1d2 NEW_2
	goto Label_476; // 0x1d4 Jump
	
Label_476:
	return 2; // 0x1dc Return
	
Label_469:
	var_76_int = 0; // 0x1d5 PushI
	var_77_int = 24; // 0x1d6 PushI
	var_78_float = var_23_int * var_77_int; // 0x1d7 Mult
	SetTimeEvent(var_76_int, var_78_float); // 0x1d8 Func
	Hold(); // 0x1da Func
}


func_587()
{
	var_212_object = Obj(); var_213_object = Obj(); // 0x24b PushV
	var_214_int = 539; // 0x24c PushI
	var_215_int = 2; // 0x24d PushI
	var_216_int = 530351; // 0x24e PushI
	CreateDiaryEntry(var_213_object, var_214_int, var_215_int, var_216_int); // 0x24f Func
	var_217_bool = 0; var_218_object = Obj(); var_219_int = 0; // 0x251 PushV
	var_218_object = var_213_object; // 0x252 Mov
	var_219_int = 532; // 0x253 MovI
	func_613(var_217_bool, var_218_object, var_219_int); // 0x254 NEW_2
	return 2; // 0x256 Return
}


func_529(var_35_object, var_36_string)
{
	var_37_int = 0; var_38_int = 0; var_39_object = Obj(); var_40_int = 0; var_41_int = 0; var_42_object = Obj(); // 0x211 PushV
	var_43_object = var_35_object; // 0x212 Push
	if(var_43_object == 0) goto Label_547; // 0x213 JumpB
	size(var_40_int); // 0x214 ObjFunc
	var_41_int = 0; // 0x216 MovI
	
Label_535:
	var_44_bool = var_41_int < var_40_int; // 0x217 LT
	if(var_44_bool == 0) goto Label_547; // 0x218 JumpB
	get(var_42_object, var_41_int); // 0x219 ObjFunc
	var_45_object = var_42_object; // 0x21b Push
	if(var_45_object == 0) goto Label_543; // 0x21c JumpB
	Trigger(var_42_object, var_36_string); // 0x21d Func
	
Label_543:
	var_42_object = 0; // 0x21f SetNull
	var_46_int = 1; // 0x220 PushI
	var_41_int = var_41_int + var_46_int; // 0x221 Add2
	goto Label_535; // 0x222 Jump
	
Label_547:
	return 6; // 0x223 Return
}


func_600(var_179_object)
{
	var_180_object = Obj(); var_181_object = Obj(); // 0x258 PushV
	GetDiaryRoot(var_181_object); // 0x259 Func
	var_182_bool = var_181_object == 0; // 0x25b Not
	if(var_182_bool == 0) goto Label_610; // 0x25c JumpB
	var_183_string = "Can't retrieve diary root"; // 0x25d PushS
	Trace(var_183_string); // 0x25e Func
	var_179_object = 0; // 0x260 MovB
	return 2; // 0x261 Return
	
Label_610:
	var_179_object = var_181_object; // 0x262 Mov
	return 2; // 0x263 Return
}


func_482(var_73_object)
{
	var_74_object = Obj(); var_75_object = Obj(); // 0x1e2 PushV
	self(var_75_object); // 0x1e3 Func
	var_73_object = var_75_object; // 0x1e5 Mov
	return 2; // 0x1e6 Return
}


func_548()
{
	var_202_object = Obj(); var_203_object = Obj(); // 0x224 PushV
	var_204_int = 538; // 0x225 PushI
	var_205_int = 2; // 0x226 PushI
	var_206_int = 530350; // 0x227 PushI
	CreateDiaryEntry(var_203_object, var_204_int, var_205_int, var_206_int); // 0x228 Func
	var_207_bool = 0; var_208_object = Obj(); var_209_int = 0; // 0x22a PushV
	var_208_object = var_203_object; // 0x22b Mov
	var_209_int = 532; // 0x22c MovI
	func_613(var_207_bool, var_208_object, var_209_int); // 0x22d NEW_2
	return 2; // 0x22f Return
}


func_613(var_170_bool, var_171_object, var_172_int)
{
	var_173_object = Obj(); var_174_object = Obj(); var_175_int = 0; var_176_object = Obj(); var_177_object = Obj(); var_178_int = 0; // 0x265 PushV
	var_179_object = Obj(); // 0x266 PushV
	func_600(var_179_object); // 0x267 NEW_2
	var_176_object = var_179_object; // 0x268 Mov
	Find(var_172_int, var_177_object); // 0x26a ObjFunc
	var_184_bool = var_177_object == 0; // 0x26c Not
	if(var_184_bool == 0) goto Label_628; // 0x26d JumpB
	var_185_string = "Can't find diary parent with id: "; // 0x26e PushS
	var_186_int = var_185_string + var_172_int; // 0x26f Add
	Trace(var_186_int); // 0x270 Func
	var_170_bool = 0; // 0x272 MovB
	return 6; // 0x273 Return
	
Label_628:
	AddChild(var_171_object); // 0x274 ObjFunc
	var_187_int = 7; // 0x276 PushI
	SendWorldWndMessage(var_187_int); // 0x277 Func
	GetCategory(var_178_int); // 0x279 ObjFunc
	SetDiarySection(var_178_int); // 0x27b Func
	var_170_bool = 0; // 0x27d MovB
	return 6; // 0x27e Return
}


func_488(var_13_object)
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x1e8 PushV
	CreateObjectVector(var_15_object); // 0x1e9 Func
	var_13_object = var_15_object; // 0x1eb Mov
	return 2; // 0x1ec Return
}


func_360()
{
	var_11_int = 0; var_12_int = 0; // 0x168 PushV
	var_13_string = "b9q03"; // 0x169 PushS
	GetVariable(var_13_string, var_12_int); // 0x16a Func
	var_14_int = 1000; // 0x16c PushI
	var_15_bool = var_12_int != var_14_int; // 0x16d Neq
	if(var_15_bool == 0) goto Label_370; // 0x16e JumpB
	func_371(); // 0x170 NEW_2
	
Label_370:
	return 2; // 0x172 Return
}


func_494(var_79_object, var_80_object, var_81_string, var_82_string, var_83_string)
{
	var_84_bool = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_object = Obj(); var_88_bool = 0; var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_object = Obj(); // 0x1ee PushV
	GetLocator(var_81_string, var_88_bool, var_89_cvector, var_90_cvector); // 0x1ef ObjFunc
	var_92_bool = var_88_bool == 0; // 0x1f1 Not
	if(var_92_bool == 0) goto Label_507; // 0x1f2 JumpB
	var_93_string = "Locator "; // 0x1f3 PushS
	var_94_int = var_93_string + var_81_string; // 0x1f4 Add
	var_95_string = " doesn't exist"; // 0x1f5 PushS
	var_96_int = var_94_int + var_95_string; // 0x1f6 Add
	Trace(var_96_int); // 0x1f7 Func
	var_91_object = 0; // 0x1f9 SetNull
	goto Label_509; // 0x1fa Jump
	
Label_509:
	var_79_object = var_91_object; // 0x1fd Mov
	return 8; // 0x1fe Return
	
Label_507:
	AddActor(var_91_object, var_82_string, var_80_object, var_89_cvector, var_90_cvector, var_83_string); // 0x1fb Func
}


func_561()
{
	var_192_object = Obj(); var_193_object = Obj(); // 0x231 PushV
	var_194_int = 537; // 0x232 PushI
	var_195_int = 2; // 0x233 PushI
	var_196_int = 530349; // 0x234 PushI
	CreateDiaryEntry(var_193_object, var_194_int, var_195_int, var_196_int); // 0x235 Func
	var_197_bool = 0; var_198_object = Obj(); var_199_int = 0; // 0x237 PushV
	var_198_object = var_193_object; // 0x238 Mov
	var_199_int = 532; // 0x239 MovI
	func_613(var_197_bool, var_198_object, var_199_int); // 0x23a NEW_2
	return 2; // 0x23c Return
}


func_371()
{
	var_16_string = "b9q03"; // 0x173 PushS
	var_17_int = -1; // 0x174 PushI
	SetVariable(var_16_string, var_17_int); // 0x175 Func
	func_387(var_8_bool, var_9_int, var_10_float, var_11_int, var_12_int); // 0x178 NEW_2
	return 0; // 0x17a Return
}


func_379()
{
	var_272_string = "b9q03"; // 0x17b PushS
	var_273_int = 1000; // 0x17c PushI
	SetVariable(var_272_string, var_273_int); // 0x17d Func
	func_387(var_17_int, var_18_object, var_19_object, var_20_int, var_21_object); // 0x180 NEW_2
	return 0; // 0x182 Return
}


func_574()
{
	var_165_object = Obj(); var_166_object = Obj(); // 0x23e PushV
	var_167_int = 536; // 0x23f PushI
	var_168_int = 2; // 0x240 PushI
	var_169_int = 530348; // 0x241 PushI
	CreateDiaryEntry(var_166_object, var_167_int, var_168_int, var_169_int); // 0x242 Func
	var_170_bool = 0; var_171_object = Obj(); var_172_int = 0; // 0x244 PushV
	var_171_object = var_166_object; // 0x245 Mov
	var_172_int = 532; // 0x246 MovI
	func_613(var_170_bool, var_171_object, var_172_int); // 0x247 NEW_2
	return 2; // 0x249 Return
}


