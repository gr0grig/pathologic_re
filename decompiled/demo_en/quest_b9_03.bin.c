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
	func_476(var_26_object, var_27_object, var_28_string, var_29_string, var_30_string); // 0x3d NEW_2
	add(var_26_object); // 0x3f TObjFunc
	var_44_object = Obj(); var_45_object = Obj(); var_46_string = ""; var_47_string = ""; var_48_string = ""; // 0x41 PushV
	var_45_object = var_16_object; // 0x42 Mov
	var_46_string = "pt_b9q03_doberman2"; // 0x43 MovS
	var_47_string = "pers_doberman"; // 0x44 MovS
	var_48_string = "b9q03_doberman.xml"; // 0x45 MovS
	func_476(var_44_object, var_45_object, var_46_string, var_47_string, var_48_string); // 0x46 NEW_2
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
	goto Label_341; // 0x56 Jump
	
Label_341:
	return 12; // 0x155 Return
	
Label_87:
	var_53_string = "doberman_attack"; // 0x57 PushS
	var_54_bool = var_9_string == var_53_string; // 0x58 Eq
	if(var_54_bool == 0) goto Label_91; // 0x59 JumpB
	goto Label_341; // 0x5a Jump
	
Label_91:
	var_55_string = "doberman_dead"; // 0x5b PushS
	var_56_bool = var_9_string == var_55_string; // 0x5c Eq
	if(var_56_bool == 0) goto Label_114; // 0x5d JumpB
	var_57_int = 1; // 0x5e PushI
	var_6_int = var_6_int + var_57_int; // 0x5f Add2
	size(var_17_int); // 0x60 TObjFunc
	var_58_bool = var_17_int == var_6_int; // 0x62 Eq
	if(var_58_bool == 0) goto Label_113; // 0x63 JumpB
	var_59_string = ""; var_60_bool = 0; // 0x64 PushV
	var_59_string = "ihouse_spi4ka@door1"; // 0x65 MovS
	var_60_bool = 0; // 0x66 MovB
	func_494(var_59_string, var_60_bool); // 0x67 NEW_2
	var_69_string = ""; var_70_bool = 0; // 0x69 PushV
	var_69_string = "ihouse_spi4ka@door2"; // 0x6a MovS
	var_70_bool = 0; // 0x6b MovB
	func_494(var_69_string, var_70_bool); // 0x6c NEW_2
	var_71_string = "door_open"; // 0x6e PushS
	PlaySound(var_71_string); // 0x6f Func
	
Label_113:
	goto Label_341; // 0x71 Jump
	
Label_114:
	var_72_string = "place_follower"; // 0x72 PushS
	var_73_bool = var_9_string == var_72_string; // 0x73 Eq
	if(var_73_bool == 0) goto Label_133; // 0x74 JumpB
	var_74_bool = var_7_bool; // 0x75 PushT
	if(var_74_bool == 0) goto Label_120; // 0x76 JumpB
	return 12; // 0x77 Return
	
Label_120:
	var_7_bool = 1; // 0x78 TMovB
	GetMainOutdoorScene(var_18_object); // 0x79 Func
	var_75_object = Obj(); var_76_object = Obj(); var_77_string = ""; var_78_string = ""; var_79_string = ""; // 0x7b PushV
	var_76_object = var_18_object; // 0x7c Mov
	var_77_string = "pt_b9q03_follower"; // 0x7d MovS
	var_78_string = "pers_boy"; // 0x7e MovS
	var_79_string = "b9q03_follower.xml"; // 0x7f MovS
	func_476(var_75_object, var_76_object, var_77_string, var_78_string, var_79_string); // 0x80 NEW_2
	var_3_object = var_75_object; // 0x81 TMov
	var_18_object = 0; // 0x83 SetNull
	goto Label_341; // 0x84 Jump
	
Label_133:
	var_80_string = "init_bonefires"; // 0x85 PushS
	var_81_bool = var_9_string == var_80_string; // 0x86 Eq
	if(var_81_bool == 0) goto Label_252; // 0x87 JumpB
	var_82_bool = var_8_bool; // 0x88 PushT
	if(var_82_bool == 0) goto Label_139; // 0x89 JumpB
	return 12; // 0x8a Return
	
Label_139:
	var_8_bool = 1; // 0x8b TMovB
	GetMainOutdoorScene(var_19_object); // 0x8c Func
	var_83_object = Obj(); var_84_object = Obj(); var_85_string = ""; var_86_string = ""; var_87_string = ""; // 0x8e PushV
	var_84_object = var_19_object; // 0x8f Mov
	var_85_string = "pt_b9q03_b1_doberman1"; // 0x90 MovS
	var_86_string = "pers_karlik"; // 0x91 MovS
	var_87_string = "b9q03_e_doberman.xml"; // 0x92 MovS
	func_476(var_83_object, var_84_object, var_85_string, var_86_string, var_87_string); // 0x93 NEW_2
	add(var_83_object); // 0x95 TObjFunc
	var_88_object = Obj(); var_89_object = Obj(); var_90_string = ""; var_91_string = ""; var_92_string = ""; // 0x97 PushV
	var_89_object = var_19_object; // 0x98 Mov
	var_90_string = "pt_b9q03_b1_morlok1"; // 0x99 MovS
	var_91_string = "pers_morlok"; // 0x9a MovS
	var_92_string = "b9q03_e_morlok.xml"; // 0x9b MovS
	func_476(var_88_object, var_89_object, var_90_string, var_91_string, var_92_string); // 0x9c NEW_2
	add(var_88_object); // 0x9e TObjFunc
	var_93_object = Obj(); var_94_object = Obj(); var_95_string = ""; var_96_string = ""; var_97_string = ""; // 0xa0 PushV
	var_94_object = var_19_object; // 0xa1 Mov
	var_95_string = "pt_b9q03_b1_morlok2"; // 0xa2 MovS
	var_96_string = "pers_morlok"; // 0xa3 MovS
	var_97_string = "b9q03_e_morlok.xml"; // 0xa4 MovS
	func_476(var_93_object, var_94_object, var_95_string, var_96_string, var_97_string); // 0xa5 NEW_2
	add(var_93_object); // 0xa7 TObjFunc
	var_98_object = Obj(); var_99_object = Obj(); var_100_string = ""; var_101_string = ""; var_102_string = ""; // 0xa9 PushV
	var_99_object = var_19_object; // 0xaa Mov
	var_100_string = "pt_b9q03_b2_doberman1"; // 0xab MovS
	var_101_string = "pers_karlik"; // 0xac MovS
	var_102_string = "b9q03_e_doberman.xml"; // 0xad MovS
	func_476(var_98_object, var_99_object, var_100_string, var_101_string, var_102_string); // 0xae NEW_2
	add(var_98_object); // 0xb0 TObjFunc
	var_103_object = Obj(); var_104_object = Obj(); var_105_string = ""; var_106_string = ""; var_107_string = ""; // 0xb2 PushV
	var_104_object = var_19_object; // 0xb3 Mov
	var_105_string = "pt_b9q03_b2_grabitel1"; // 0xb4 MovS
	var_106_string = "pers_grabitel"; // 0xb5 MovS
	var_107_string = "b9q03_e_grabitel.xml"; // 0xb6 MovS
	func_476(var_103_object, var_104_object, var_105_string, var_106_string, var_107_string); // 0xb7 NEW_2
	add(var_103_object); // 0xb9 TObjFunc
	var_108_object = Obj(); var_109_object = Obj(); var_110_string = ""; var_111_string = ""; var_112_string = ""; // 0xbb PushV
	var_109_object = var_19_object; // 0xbc Mov
	var_110_string = "pt_b9q03_b2_grabitel2"; // 0xbd MovS
	var_111_string = "pers_grabitel"; // 0xbe MovS
	var_112_string = "b9q03_e_grabitel.xml"; // 0xbf MovS
	func_476(var_108_object, var_109_object, var_110_string, var_111_string, var_112_string); // 0xc0 NEW_2
	add(var_108_object); // 0xc2 TObjFunc
	var_113_object = Obj(); var_114_object = Obj(); var_115_string = ""; var_116_string = ""; var_117_string = ""; // 0xc4 PushV
	var_114_object = var_19_object; // 0xc5 Mov
	var_115_string = "pt_b9q03_b3_doberman1"; // 0xc6 MovS
	var_116_string = "pers_karlik"; // 0xc7 MovS
	var_117_string = "b9q03_e_doberman.xml"; // 0xc8 MovS
	func_476(var_113_object, var_114_object, var_115_string, var_116_string, var_117_string); // 0xc9 NEW_2
	add(var_113_object); // 0xcb TObjFunc
	var_118_object = Obj(); var_119_object = Obj(); var_120_string = ""; var_121_string = ""; var_122_string = ""; // 0xcd PushV
	var_119_object = var_19_object; // 0xce Mov
	var_120_string = "pt_b9q03_b3_wastedmale1"; // 0xcf MovS
	var_121_string = "pers_wasted_male"; // 0xd0 MovS
	var_122_string = "b9q03_e_wasted_male.xml"; // 0xd1 MovS
	func_476(var_118_object, var_119_object, var_120_string, var_121_string, var_122_string); // 0xd2 NEW_2
	add(var_118_object); // 0xd4 TObjFunc
	var_123_object = Obj(); var_124_object = Obj(); var_125_string = ""; var_126_string = ""; var_127_string = ""; // 0xd6 PushV
	var_124_object = var_19_object; // 0xd7 Mov
	var_125_string = "pt_b9q03_b3_hunter1"; // 0xd8 MovS
	var_126_string = "pers_hunter"; // 0xd9 MovS
	var_127_string = "b9q03_e_hunter.xml"; // 0xda MovS
	func_476(var_123_object, var_124_object, var_125_string, var_126_string, var_127_string); // 0xdb NEW_2
	add(var_123_object); // 0xdd TObjFunc
	var_128_object = Obj(); var_129_object = Obj(); var_130_string = ""; var_131_string = ""; var_132_string = ""; // 0xdf PushV
	var_129_object = var_19_object; // 0xe0 Mov
	var_130_string = "pt_b9q03_b4_doberman1"; // 0xe1 MovS
	var_131_string = "pers_karlik"; // 0xe2 MovS
	var_132_string = "b9q03_e_doberman.xml"; // 0xe3 MovS
	func_476(var_128_object, var_129_object, var_130_string, var_131_string, var_132_string); // 0xe4 NEW_2
	add(var_128_object); // 0xe6 TObjFunc
	var_133_object = Obj(); var_134_object = Obj(); var_135_string = ""; var_136_string = ""; var_137_string = ""; // 0xe8 PushV
	var_134_object = var_19_object; // 0xe9 Mov
	var_135_string = "pt_b9q03_b4_doberman2"; // 0xea MovS
	var_136_string = "pers_karlik"; // 0xeb MovS
	var_137_string = "b9q03_e_doberman.xml"; // 0xec MovS
	func_476(var_133_object, var_134_object, var_135_string, var_136_string, var_137_string); // 0xed NEW_2
	add(var_133_object); // 0xef TObjFunc
	var_138_object = Obj(); var_139_object = Obj(); var_140_string = ""; var_141_string = ""; var_142_string = ""; // 0xf1 PushV
	var_139_object = var_19_object; // 0xf2 Mov
	var_140_string = "pt_b9q03_b4_doberman3"; // 0xf3 MovS
	var_141_string = "pers_karlik"; // 0xf4 MovS
	var_142_string = "b9q03_e_doberman.xml"; // 0xf5 MovS
	func_476(var_138_object, var_139_object, var_140_string, var_141_string, var_142_string); // 0xf6 NEW_2
	add(var_138_object); // 0xf8 TObjFunc
	var_19_object = 0; // 0xfa SetNull
	goto Label_341; // 0xfb Jump
	
Label_252:
	var_143_string = "bonfire_burn"; // 0xfc PushS
	var_144_bool = var_9_string == var_143_string; // 0xfd Eq
	if(var_144_bool == 0) goto Label_328; // 0xfe JumpB
	var_145_string = "b9q03BonefiresCount"; // 0xff PushS
	GetVariable(var_145_string, var_20_int); // 0x100 Func
	var_146_int = 0; // 0x102 PushI
	var_147_bool = var_20_int == var_146_int; // 0x103 Eq
	if(var_147_bool == 0) goto Label_265; // 0x104 JumpB
	func_556(); // 0x106 NEW_2
	goto Label_322; // 0x108 Jump
	
Label_322:
	var_171_int = 1; // 0x142 PushI
	var_20_int = var_20_int + var_171_int; // 0x143 Add2
	var_172_string = "b9q03BonefiresCount"; // 0x144 PushS
	SetVariable(var_172_string, var_20_int); // 0x145 Func
	goto Label_341; // 0x147 Jump
	
Label_265:
	var_173_int = 1; // 0x109 PushI
	var_174_bool = var_20_int == var_173_int; // 0x10a Eq
	if(var_174_bool == 0) goto Label_272; // 0x10b JumpB
	func_543(); // 0x10d NEW_2
	goto Label_322; // 0x10f Jump
	
Label_272:
	var_183_int = 2; // 0x110 PushI
	var_184_bool = var_20_int == var_183_int; // 0x111 Eq
	if(var_184_bool == 0) goto Label_279; // 0x112 JumpB
	func_530(); // 0x114 NEW_2
	goto Label_322; // 0x116 Jump
	
Label_279:
	var_193_int = 3; // 0x117 PushI
	var_194_bool = var_20_int == var_193_int; // 0x118 Eq
	if(var_194_bool == 0) goto Label_322; // 0x119 JumpB
	func_569(); // 0x11b NEW_2
	GetMainOutdoorScene(var_21_object); // 0x11d Func
	var_203_object = Obj(); var_204_object = Obj(); var_205_string = ""; var_206_string = ""; var_207_string = ""; // 0x11f PushV
	var_204_object = var_21_object; // 0x120 Mov
	var_205_string = "pt_b9q03_girl"; // 0x121 MovS
	var_206_string = "pers_girl"; // 0x122 MovS
	var_207_string = "b9q03_girl.xml"; // 0x123 MovS
	func_476(var_203_object, var_204_object, var_205_string, var_206_string, var_207_string); // 0x124 NEW_2
	var_5_object = var_203_object; // 0x125 TMov
	var_208_string = "cot_kapella"; // 0x127 PushS
	GetSceneByName(var_21_object, var_208_string); // 0x128 Func
	var_209_object = Obj(); var_210_object = Obj(); var_211_string = ""; var_212_string = ""; var_213_string = ""; // 0x12a PushV
	var_210_object = var_21_object; // 0x12b Mov
	var_211_string = "pt_b9q03_spi4ka"; // 0x12c MovS
	var_212_string = "NPC_Spi4ka"; // 0x12d MovS
	var_213_string = "b9q03_spi4ka.xml"; // 0x12e MovS
	func_476(var_209_object, var_210_object, var_211_string, var_212_string, var_213_string); // 0x12f NEW_2
	var_4_object = var_209_object; // 0x130 TMov
	var_214_string = ""; var_215_bool = 0; // 0x132 PushV
	var_214_string = "house_spi4ka@door1"; // 0x133 MovS
	var_215_bool = 1; // 0x134 MovB
	func_494(var_214_string, var_215_bool); // 0x135 NEW_2
	var_216_string = ""; var_217_bool = 0; // 0x137 PushV
	var_216_string = "house_spi4ka@door2"; // 0x138 MovS
	var_217_bool = 1; // 0x139 MovB
	func_494(var_216_string, var_217_bool); // 0x13a NEW_2
	var_218_object = var_3_object; // 0x13c PushT
	if(var_218_object == 0) goto Label_321; // 0x13d JumpB
	var_219_string = "cleanup"; // 0x13e PushS
	Trigger(var_20_int, var_219_string); // 0x13f Func
	
Label_321:
	var_21_object = 0; // 0x141 SetNull
	
Label_328:
	var_220_string = "fail"; // 0x148 PushS
	var_221_bool = var_9_string == var_220_string; // 0x149 Eq
	if(var_221_bool == 0) goto Label_335; // 0x14a JumpB
	func_353(); // 0x14c NEW_2
	goto Label_341; // 0x14e Jump
	
Label_335:
	var_263_string = "completed"; // 0x14f PushS
	var_264_bool = var_9_string == var_263_string; // 0x150 Eq
	if(var_264_bool == 0) goto Label_341; // 0x151 JumpB
	func_361(); // 0x153 NEW_2
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_int, var_7_bool, var_8_bool, var_9_int, var_10_float)
{
	func_342(); // 0x1cd NEW_2
	return 0; // 0x1cf Return
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_int, var_7_bool, var_8_bool)
{
	var_9_object = Obj(); var_10_object = Obj(); var_11_object = Obj(); var_12_object = Obj(); // 0x0 PushV
	var_7_bool = 0; // 0x1 TMovB
	var_8_bool = 0; // 0x2 TMovB
	var_13_object = Obj(); // 0x3 PushV
	func_470(var_13_object); // 0x4 NEW_2
	var_1_object = var_13_object; // 0x5 TMov
	var_16_object = Obj(); // 0x7 PushV
	func_470(var_16_object); // 0x8 NEW_2
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
	func_440(var_23_int); // 0x27 NEW_2
	return 4; // 0x29 Return
	
Label_29:
	var_79_object = Obj(); var_80_object = Obj(); var_81_string = ""; var_82_string = ""; var_83_string = ""; // 0x1d PushV
	var_80_object = var_11_object; // 0x1e Mov
	var_81_string = "pt_b9q03_aglaja"; // 0x1f MovS
	var_82_string = "NPC_Aglaja"; // 0x20 MovS
	var_83_string = "b9q03_aglaja.xml"; // 0x21 MovS
	func_476(var_79_object, var_80_object, var_81_string, var_82_string, var_83_string); // 0x22 NEW_2
	var_0_object = var_79_object; // 0x23 TMov
}


func_582(var_162_object)
{
	var_163_object = Obj(); var_164_object = Obj(); // 0x246 PushV
	GetDiaryRoot(var_164_object); // 0x247 Func
	var_165_bool = var_164_object == 0; // 0x249 Not
	if(var_165_bool == 0) goto Label_592; // 0x24a JumpB
	var_166_string = "Can't retrieve diary root"; // 0x24b PushS
	Trace(var_166_string); // 0x24c Func
	var_162_object = 0; // 0x24e MovB
	return 2; // 0x24f Return
	
Label_592:
	var_162_object = var_164_object; // 0x250 Mov
	return 2; // 0x251 Return
}


func_464(var_73_object)
{
	var_74_object = Obj(); var_75_object = Obj(); // 0x1d0 PushV
	self(var_75_object); // 0x1d1 Func
	var_73_object = var_75_object; // 0x1d3 Mov
	return 2; // 0x1d4 Return
}


func_530()
{
	var_185_object = Obj(); var_186_object = Obj(); // 0x212 PushV
	var_187_int = 538; // 0x213 PushI
	var_188_int = 2; // 0x214 PushI
	var_189_int = 530350; // 0x215 PushI
	CreateDiaryEntry(var_186_object, var_187_int, var_188_int, var_189_int); // 0x216 Func
	var_190_bool = 0; var_191_object = Obj(); var_192_int = 0; // 0x218 PushV
	var_191_object = var_186_object; // 0x219 Mov
	var_192_int = 532; // 0x21a MovI
	func_595(var_190_bool, var_191_object, var_192_int); // 0x21b NEW_2
	return 2; // 0x21d Return
}


func_595(var_153_bool, var_154_object, var_155_int)
{
	var_156_object = Obj(); var_157_object = Obj(); var_158_int = 0; var_159_object = Obj(); var_160_object = Obj(); var_161_int = 0; // 0x253 PushV
	var_162_object = Obj(); // 0x254 PushV
	func_582(var_162_object); // 0x255 NEW_2
	var_159_object = var_162_object; // 0x256 Mov
	Find(var_155_int, var_160_object); // 0x258 ObjFunc
	var_167_bool = var_160_object == 0; // 0x25a Not
	if(var_167_bool == 0) goto Label_610; // 0x25b JumpB
	var_168_string = "Can't find diary parent with id: "; // 0x25c PushS
	var_169_int = var_168_string + var_155_int; // 0x25d Add
	Trace(var_169_int); // 0x25e Func
	var_153_bool = 0; // 0x260 MovB
	return 6; // 0x261 Return
	
Label_610:
	AddChild(var_154_object); // 0x262 ObjFunc
	var_170_int = 7; // 0x264 PushI
	SendWorldWndMessage(var_170_int); // 0x265 Func
	GetCategory(var_161_int); // 0x267 ObjFunc
	SetDiarySection(var_161_int); // 0x269 Func
	var_153_bool = 0; // 0x26b MovB
	return 6; // 0x26c Return
}


func_470(var_13_object)
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x1d6 PushV
	CreateObjectVector(var_15_object); // 0x1d7 Func
	var_13_object = var_15_object; // 0x1d9 Mov
	return 2; // 0x1da Return
}


func_342()
{
	var_11_int = 0; var_12_int = 0; // 0x156 PushV
	var_13_string = "b9q03"; // 0x157 PushS
	GetVariable(var_13_string, var_12_int); // 0x158 Func
	var_14_int = 1000; // 0x15a PushI
	var_15_bool = var_12_int != var_14_int; // 0x15b Neq
	if(var_15_bool == 0) goto Label_352; // 0x15c JumpB
	func_353(); // 0x15e NEW_2
	
Label_352:
	return 2; // 0x160 Return
}


func_476(var_79_object, var_80_object, var_81_string, var_82_string, var_83_string)
{
	var_84_bool = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_object = Obj(); var_88_bool = 0; var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_object = Obj(); // 0x1dc PushV
	GetLocator(var_81_string, var_88_bool, var_89_cvector, var_90_cvector); // 0x1dd ObjFunc
	var_92_bool = var_88_bool == 0; // 0x1df Not
	if(var_92_bool == 0) goto Label_489; // 0x1e0 JumpB
	var_93_string = "Locator "; // 0x1e1 PushS
	var_94_int = var_93_string + var_81_string; // 0x1e2 Add
	var_95_string = " doesn't exist"; // 0x1e3 PushS
	var_96_int = var_94_int + var_95_string; // 0x1e4 Add
	Trace(var_96_int); // 0x1e5 Func
	var_91_object = 0; // 0x1e7 SetNull
	goto Label_491; // 0x1e8 Jump
	
Label_491:
	var_79_object = var_91_object; // 0x1eb Mov
	return 8; // 0x1ec Return
	
Label_489:
	AddActor(var_91_object, var_82_string, var_80_object, var_89_cvector, var_90_cvector, var_83_string); // 0x1e9 Func
}


func_543()
{
	var_175_object = Obj(); var_176_object = Obj(); // 0x21f PushV
	var_177_int = 537; // 0x220 PushI
	var_178_int = 2; // 0x221 PushI
	var_179_int = 530349; // 0x222 PushI
	CreateDiaryEntry(var_176_object, var_177_int, var_178_int, var_179_int); // 0x223 Func
	var_180_bool = 0; var_181_object = Obj(); var_182_int = 0; // 0x225 PushV
	var_181_object = var_176_object; // 0x226 Mov
	var_182_int = 532; // 0x227 MovI
	func_595(var_180_bool, var_181_object, var_182_int); // 0x228 NEW_2
	return 2; // 0x22a Return
}


func_353()
{
	var_16_string = "b9q03"; // 0x161 PushS
	var_17_int = -1; // 0x162 PushI
	SetVariable(var_16_string, var_17_int); // 0x163 Func
	func_369(var_8_bool, var_9_int, var_10_float, var_11_int, var_12_int); // 0x166 NEW_2
	return 0; // 0x168 Return
}


func_361()
{
	var_265_string = "b9q03"; // 0x169 PushS
	var_266_int = 1000; // 0x16a PushI
	SetVariable(var_265_string, var_266_int); // 0x16b Func
	func_369(var_17_int, var_18_object, var_19_object, var_20_int, var_21_object); // 0x16e NEW_2
	return 0; // 0x170 Return
}


func_556()
{
	var_148_object = Obj(); var_149_object = Obj(); // 0x22c PushV
	var_150_int = 536; // 0x22d PushI
	var_151_int = 2; // 0x22e PushI
	var_152_int = 530348; // 0x22f PushI
	CreateDiaryEntry(var_149_object, var_150_int, var_151_int, var_152_int); // 0x230 Func
	var_153_bool = 0; var_154_object = Obj(); var_155_int = 0; // 0x232 PushV
	var_154_object = var_149_object; // 0x233 Mov
	var_155_int = 532; // 0x234 MovI
	func_595(var_153_bool, var_154_object, var_155_int); // 0x235 NEW_2
	return 2; // 0x237 Return
}


func_494(var_57_string, var_58_bool)
{
	var_59_object = Obj(); var_60_object = Obj(); // 0x1ee PushV
	FindActor(var_60_object, var_57_string); // 0x1ef Func
	var_61_bool = var_60_object == 0; // 0x1f1 Not
	if(var_61_bool == 0) goto Label_506; // 0x1f2 JumpB
	var_62_string = "Door "; // 0x1f3 PushS
	var_63_int = var_62_string + var_57_string; // 0x1f4 Add
	var_64_string = " not found"; // 0x1f5 PushS
	var_65_int = var_63_int + var_64_string; // 0x1f6 Add
	Trace(var_65_int); // 0x1f7 Func
	goto Label_509; // 0x1f9 Jump
	
Label_509:
	return 2; // 0x1fd Return
	
Label_506:
	var_66_string = "locked"; // 0x1fa PushS
	SetProperty(var_66_string, var_58_bool); // 0x1fb ObjFunc
}


func_369(var_0_object, var_1_object, var_2_object, var_24_float, var_25_float)
{
	var_29_object = Obj(); var_30_object = Obj(); // 0x171 PushV
	EventDisable(26); // 0x172 EventDisable
	var_31_string = "sobor"; // 0x173 PushS
	GetSceneByName(var_30_object, var_31_string); // 0x174 Func
	var_32_string = "aglaja"; // 0x176 PushS
	Trigger(var_30_object, var_32_string); // 0x177 Func
	var_33_string = "house_spi4ka"; // 0x179 PushS
	GetSceneByName(var_30_object, var_33_string); // 0x17a Func
	var_34_string = "spi4ka"; // 0x17c PushS
	Trigger(var_30_object, var_34_string); // 0x17d Func
	var_35_object = Obj(); var_36_string = ""; // 0x17f PushV
	var_35_object = var_1_object; // 0x180 MovT
	var_36_string = "cleanup"; // 0x181 MovS
	func_511(var_35_object, var_36_string); // 0x182 NEW_2
	var_47_object = Obj(); var_48_string = ""; // 0x184 PushV
	var_47_object = var_2_object; // 0x185 MovT
	var_48_string = "cleanup"; // 0x186 MovS
	func_511(var_47_object, var_48_string); // 0x187 NEW_2
	var_49_object = var_3_object; // 0x189 PushT
	if(var_49_object == 0) goto Label_398; // 0x18a JumpB
	var_50_string = "cleanup"; // 0x18b PushS
	Trigger(var_29_object, var_50_string); // 0x18c Func
	
Label_398:
	var_51_object = var_0_object; // 0x18e PushT
	if(var_51_object == 0) goto Label_403; // 0x18f JumpB
	var_52_string = "cleanup"; // 0x190 PushS
	Trigger(var_0_object, var_52_string); // 0x191 Func
	
Label_403:
	var_53_object = var_4_object; // 0x193 PushT
	if(var_53_object == 0) goto Label_408; // 0x194 JumpB
	var_54_string = "cleanup"; // 0x195 PushS
	Trigger(var_25_float, var_54_string); // 0x196 Func
	
Label_408:
	var_55_object = var_5_object; // 0x198 PushT
	if(var_55_object == 0) goto Label_413; // 0x199 JumpB
	var_56_string = "cleanup"; // 0x19a PushS
	Trigger(var_24_float, var_56_string); // 0x19b Func
	
Label_413:
	var_57_string = ""; var_58_bool = 0; // 0x19d PushV
	var_57_string = "ihouse_spi4ka@door1"; // 0x19e MovS
	var_58_bool = 0; // 0x19f MovB
	func_494(var_57_string, var_58_bool); // 0x1a0 NEW_2
	var_67_string = ""; var_68_bool = 0; // 0x1a2 PushV
	var_67_string = "ihouse_spi4ka@door2"; // 0x1a3 MovS
	var_68_bool = 0; // 0x1a4 MovB
	func_494(var_67_string, var_68_bool); // 0x1a5 NEW_2
	var_69_string = ""; var_70_bool = 0; // 0x1a7 PushV
	var_69_string = "house_spi4ka@door1"; // 0x1a8 MovS
	var_70_bool = 0; // 0x1a9 MovB
	func_494(var_69_string, var_70_bool); // 0x1aa NEW_2
	var_71_string = ""; var_72_bool = 0; // 0x1ac PushV
	var_71_string = "house_spi4ka@door2"; // 0x1ad MovS
	var_72_bool = 0; // 0x1ae MovB
	func_494(var_71_string, var_72_bool); // 0x1af NEW_2
	var_73_object = Obj(); // 0x1b1 PushV
	func_464(var_73_object); // 0x1b2 NEW_2
	RemoveActor(var_73_object); // 0x1b4 Func
	return 2; // 0x1b6 Return
}


func_440(var_23_int)
{
	var_24_float = 0; var_25_float = 0; // 0x1b8 PushV
	GetGameTime(var_25_float); // 0x1b9 Func
	var_26_int = 24; // 0x1bb PushI
	var_27_float = var_23_int * var_26_int; // 0x1bc Mult
	var_28_bool = var_25_float >= var_27_float; // 0x1bd GE
	if(var_28_bool == 0) goto Label_451; // 0x1be JumpB
	func_369(var_11_object, var_12_object, var_23_int, var_24_float, var_25_float); // 0x1c0 NEW_2
	goto Label_458; // 0x1c2 Jump
	
Label_458:
	return 2; // 0x1ca Return
	
Label_451:
	var_76_int = 0; // 0x1c3 PushI
	var_77_int = 24; // 0x1c4 PushI
	var_78_float = var_23_int * var_77_int; // 0x1c5 Mult
	SetTimeEvent(var_76_int, var_78_float); // 0x1c6 Func
	Hold(); // 0x1c8 Func
}


func_569()
{
	var_195_object = Obj(); var_196_object = Obj(); // 0x239 PushV
	var_197_int = 539; // 0x23a PushI
	var_198_int = 2; // 0x23b PushI
	var_199_int = 530351; // 0x23c PushI
	CreateDiaryEntry(var_196_object, var_197_int, var_198_int, var_199_int); // 0x23d Func
	var_200_bool = 0; var_201_object = Obj(); var_202_int = 0; // 0x23f PushV
	var_201_object = var_196_object; // 0x240 Mov
	var_202_int = 532; // 0x241 MovI
	func_595(var_200_bool, var_201_object, var_202_int); // 0x242 NEW_2
	return 2; // 0x244 Return
}


func_511(var_35_object, var_36_string)
{
	var_37_int = 0; var_38_int = 0; var_39_object = Obj(); var_40_int = 0; var_41_int = 0; var_42_object = Obj(); // 0x1ff PushV
	var_43_object = var_35_object; // 0x200 Push
	if(var_43_object == 0) goto Label_529; // 0x201 JumpB
	size(var_40_int); // 0x202 ObjFunc
	var_41_int = 0; // 0x204 MovI
	
Label_517:
	var_44_bool = var_41_int < var_40_int; // 0x205 LT
	if(var_44_bool == 0) goto Label_529; // 0x206 JumpB
	get(var_42_object, var_41_int); // 0x207 ObjFunc
	var_45_object = var_42_object; // 0x209 Push
	if(var_45_object == 0) goto Label_525; // 0x20a JumpB
	Trigger(var_42_object, var_36_string); // 0x20b Func
	
Label_525:
	var_42_object = 0; // 0x20d SetNull
	var_46_int = 1; // 0x20e PushI
	var_41_int = var_41_int + var_46_int; // 0x20f Add2
	goto Label_517; // 0x210 Jump
	
Label_529:
	return 6; // 0x211 Return
}


