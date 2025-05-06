task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xa7 PushI
	if(var_9_int == 0) goto Label_490; // 0xa8 JumpB
	func_1093(); // 0xaa NEW_2
	var_11_int = 36172; // 0xac PushI
	var_12_bool = var_8_bool == var_11_int; // 0xad Eq
	if(var_12_bool == 0) goto Label_180; // 0xae JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xaf PushV
	var_13_object = var_1_object; // 0xb0 MovT
	var_14_object = var_0_object; // 0xb1 MovT
	func_1166(); // 0xb2 NEW_2
	
Label_180:
	var_44_int = 41620; // 0xb4 PushI
	var_45_bool = var_8_bool == var_44_int; // 0xb5 Eq
	if(var_45_bool == 0) goto Label_188; // 0xb6 JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0xb7 PushV
	var_46_object = var_1_object; // 0xb8 MovT
	var_47_object = var_0_object; // 0xb9 MovT
	func_1166(); // 0xba NEW_2
	
Label_188:
	var_48_int = 36173; // 0xbc PushI
	var_49_bool = var_7_cvector == var_48_int; // 0xbd Eq
	if(var_49_bool == 0) goto Label_216; // 0xbe JumpB
	var_50_string = ""; // 0xbf PushV
	var_50_string = "Staring"; // 0xc0 MovS
	func_144(var_8_bool, var_50_string); // 0xc1 NEW_2
	var_67_int = 534532; // 0xc3 PushI
	SetMessage(var_67_int); // 0xc4 TObjFunc
	ClearReplies(); // 0xc6 TObjFunc
	var_68_bool = 0; var_69_object = Obj(); // 0xc8 PushV
	var_69_object = var_1_object; // 0xc9 MovT
	func_1176(var_69_object); // 0xca NEW_2
	if(var_68_bool == 0) goto Label_210; // 0xcc JumpB
	var_76_int = 539632; // 0xcd PushI
	var_77_int = 41601; // 0xce PushI
	var_78_int = 41578; // 0xcf PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0xd0 TObjFunc
	
Label_210:
	var_79_int = 534533; // 0xd2 PushI
	var_80_int = -1; // 0xd3 PushI
	var_81_int = 36174; // 0xd4 PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0xd5 TObjFunc
	return 0; // 0xd7 Return
	
Label_216:
	var_82_int = 41601; // 0xd8 PushI
	var_83_bool = var_7_cvector == var_82_int; // 0xd9 Eq
	if(var_83_bool == 0) goto Label_239; // 0xda JumpB
	var_84_string = ""; // 0xdb PushV
	var_84_string = "Staring"; // 0xdc MovS
	func_144(var_8_bool, var_84_string); // 0xdd NEW_2
	var_85_int = 539655; // 0xdf PushI
	SetMessage(var_85_int); // 0xe0 TObjFunc
	ClearReplies(); // 0xe2 TObjFunc
	var_86_int = 539656; // 0xe4 PushI
	var_87_int = 41603; // 0xe5 PushI
	var_88_int = 41602; // 0xe6 PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0xe7 TObjFunc
	var_89_int = 539669; // 0xe9 PushI
	var_90_int = 41607; // 0xea PushI
	var_91_int = 41615; // 0xeb PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0xec TObjFunc
	return 0; // 0xee Return
	
Label_239:
	var_92_int = 41603; // 0xef PushI
	var_93_bool = var_7_cvector == var_92_int; // 0xf0 Eq
	if(var_93_bool == 0) goto Label_257; // 0xf1 JumpB
	var_94_string = ""; // 0xf2 PushV
	var_94_string = "Mysterious"; // 0xf3 MovS
	func_144(var_8_bool, var_94_string); // 0xf4 NEW_2
	var_95_int = 539657; // 0xf6 PushI
	SetMessage(var_95_int); // 0xf7 TObjFunc
	ClearReplies(); // 0xf9 TObjFunc
	var_96_int = 539658; // 0xfb PushI
	var_97_int = 41605; // 0xfc PushI
	var_98_int = 41604; // 0xfd PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0xfe TObjFunc
	return 0; // 0x100 Return
	
Label_257:
	var_99_int = 41605; // 0x101 PushI
	var_100_bool = var_7_cvector == var_99_int; // 0x102 Eq
	if(var_100_bool == 0) goto Label_280; // 0x103 JumpB
	var_101_string = ""; // 0x104 PushV
	var_101_string = "Mysterious"; // 0x105 MovS
	func_144(var_8_bool, var_101_string); // 0x106 NEW_2
	var_102_int = 539659; // 0x108 PushI
	SetMessage(var_102_int); // 0x109 TObjFunc
	ClearReplies(); // 0x10b TObjFunc
	var_103_int = 539660; // 0x10d PushI
	var_104_int = 41607; // 0x10e PushI
	var_105_int = 41606; // 0x10f PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x110 TObjFunc
	var_106_int = 539670; // 0x112 PushI
	var_107_int = 41607; // 0x113 PushI
	var_108_int = 41616; // 0x114 PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x115 TObjFunc
	return 0; // 0x117 Return
	
Label_280:
	var_109_int = 41607; // 0x118 PushI
	var_110_bool = var_7_cvector == var_109_int; // 0x119 Eq
	if(var_110_bool == 0) goto Label_298; // 0x11a JumpB
	var_111_string = ""; // 0x11b PushV
	var_111_string = "Neutral"; // 0x11c MovS
	func_144(var_8_bool, var_111_string); // 0x11d NEW_2
	var_112_int = 539661; // 0x11f PushI
	SetMessage(var_112_int); // 0x120 TObjFunc
	ClearReplies(); // 0x122 TObjFunc
	var_113_int = 539662; // 0x124 PushI
	var_114_int = 41609; // 0x125 PushI
	var_115_int = 41608; // 0x126 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x127 TObjFunc
	return 0; // 0x129 Return
	
Label_298:
	var_116_int = 41609; // 0x12a PushI
	var_117_bool = var_7_cvector == var_116_int; // 0x12b Eq
	if(var_117_bool == 0) goto Label_316; // 0x12c JumpB
	var_118_string = ""; // 0x12d PushV
	var_118_string = "Neutral"; // 0x12e MovS
	func_144(var_8_bool, var_118_string); // 0x12f NEW_2
	var_119_int = 539663; // 0x131 PushI
	SetMessage(var_119_int); // 0x132 TObjFunc
	ClearReplies(); // 0x134 TObjFunc
	var_120_int = 539664; // 0x136 PushI
	var_121_int = 41579; // 0x137 PushI
	var_122_int = 41610; // 0x138 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x139 TObjFunc
	return 0; // 0x13b Return
	
Label_316:
	var_123_int = 41579; // 0x13c PushI
	var_124_bool = var_7_cvector == var_123_int; // 0x13d Eq
	if(var_124_bool == 0) goto Label_339; // 0x13e JumpB
	var_125_string = ""; // 0x13f PushV
	var_125_string = "Neutral"; // 0x140 MovS
	func_144(var_8_bool, var_125_string); // 0x141 NEW_2
	var_126_int = 539633; // 0x143 PushI
	SetMessage(var_126_int); // 0x144 TObjFunc
	ClearReplies(); // 0x146 TObjFunc
	var_127_int = 539634; // 0x148 PushI
	var_128_int = 41581; // 0x149 PushI
	var_129_int = 41580; // 0x14a PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x14b TObjFunc
	var_130_int = 539675; // 0x14d PushI
	var_131_int = 41623; // 0x14e PushI
	var_132_int = 41622; // 0x14f PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x150 TObjFunc
	return 0; // 0x152 Return
	
Label_339:
	var_133_int = 41623; // 0x153 PushI
	var_134_bool = var_7_cvector == var_133_int; // 0x154 Eq
	if(var_134_bool == 0) goto Label_357; // 0x155 JumpB
	var_135_string = ""; // 0x156 PushV
	var_135_string = "Neutral"; // 0x157 MovS
	func_144(var_8_bool, var_135_string); // 0x158 NEW_2
	var_136_int = 539676; // 0x15a PushI
	SetMessage(var_136_int); // 0x15b TObjFunc
	ClearReplies(); // 0x15d TObjFunc
	var_137_int = 539677; // 0x15f PushI
	var_138_int = 41612; // 0x160 PushI
	var_139_int = 41624; // 0x161 PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x162 TObjFunc
	return 0; // 0x164 Return
	
Label_357:
	var_140_int = 41581; // 0x165 PushI
	var_141_bool = var_7_cvector == var_140_int; // 0x166 Eq
	if(var_141_bool == 0) goto Label_375; // 0x167 JumpB
	var_142_string = ""; // 0x168 PushV
	var_142_string = "Neutral"; // 0x169 MovS
	func_144(var_8_bool, var_142_string); // 0x16a NEW_2
	var_143_int = 539635; // 0x16c PushI
	SetMessage(var_143_int); // 0x16d TObjFunc
	ClearReplies(); // 0x16f TObjFunc
	var_144_int = 539665; // 0x171 PushI
	var_145_int = 41612; // 0x172 PushI
	var_146_int = 41611; // 0x173 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x174 TObjFunc
	return 0; // 0x176 Return
	
Label_375:
	var_147_int = 41612; // 0x177 PushI
	var_148_bool = var_7_cvector == var_147_int; // 0x178 Eq
	if(var_148_bool == 0) goto Label_393; // 0x179 JumpB
	var_149_string = ""; // 0x17a PushV
	var_149_string = "Neutral"; // 0x17b MovS
	func_144(var_8_bool, var_149_string); // 0x17c NEW_2
	var_150_int = 539666; // 0x17e PushI
	SetMessage(var_150_int); // 0x17f TObjFunc
	ClearReplies(); // 0x181 TObjFunc
	var_151_int = 539667; // 0x183 PushI
	var_152_int = 41614; // 0x184 PushI
	var_153_int = 41613; // 0x185 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x186 TObjFunc
	return 0; // 0x188 Return
	
Label_393:
	var_154_int = 41627; // 0x189 PushI
	var_155_bool = var_7_cvector == var_154_int; // 0x18a Eq
	if(var_155_bool == 0) goto Label_396; // 0x18b JumpB
	
Label_396:
	var_156_int = 41629; // 0x18c PushI
	var_157_bool = var_7_cvector == var_156_int; // 0x18d Eq
	if(var_157_bool == 0) goto Label_414; // 0x18e JumpB
	var_158_string = ""; // 0x18f PushV
	var_158_string = "Neutral"; // 0x190 MovS
	func_144(var_8_bool, var_158_string); // 0x191 NEW_2
	var_159_int = 539681; // 0x193 PushI
	SetMessage(var_159_int); // 0x194 TObjFunc
	ClearReplies(); // 0x196 TObjFunc
	var_160_int = 539683; // 0x198 PushI
	var_161_int = 41634; // 0x199 PushI
	var_162_int = 41632; // 0x19a PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x19b TObjFunc
	return 0; // 0x19d Return
	
Label_414:
	var_163_int = 41634; // 0x19e PushI
	var_164_bool = var_7_cvector == var_163_int; // 0x19f Eq
	if(var_164_bool == 0) goto Label_437; // 0x1a0 JumpB
	var_165_string = ""; // 0x1a1 PushV
	var_165_string = "Neutral"; // 0x1a2 MovS
	func_144(var_8_bool, var_165_string); // 0x1a3 NEW_2
	var_166_int = 539684; // 0x1a5 PushI
	SetMessage(var_166_int); // 0x1a6 TObjFunc
	ClearReplies(); // 0x1a8 TObjFunc
	var_167_int = 539685; // 0x1aa PushI
	var_168_int = 41619; // 0x1ab PushI
	var_169_int = 41635; // 0x1ac PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x1ad TObjFunc
	var_170_int = 539686; // 0x1af PushI
	var_171_int = 41619; // 0x1b0 PushI
	var_172_int = 41636; // 0x1b1 PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x1b2 TObjFunc
	return 0; // 0x1b4 Return
	
Label_437:
	var_173_int = 41614; // 0x1b5 PushI
	var_174_bool = var_7_cvector == var_173_int; // 0x1b6 Eq
	if(var_174_bool == 0) goto Label_455; // 0x1b7 JumpB
	var_175_string = ""; // 0x1b8 PushV
	var_175_string = "Mysterious"; // 0x1b9 MovS
	func_144(var_8_bool, var_175_string); // 0x1ba NEW_2
	var_176_int = 539668; // 0x1bc PushI
	SetMessage(var_176_int); // 0x1bd TObjFunc
	ClearReplies(); // 0x1bf TObjFunc
	var_177_int = 539672; // 0x1c1 PushI
	var_178_int = 41619; // 0x1c2 PushI
	var_179_int = 41618; // 0x1c3 PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x1c4 TObjFunc
	return 0; // 0x1c6 Return
	
Label_455:
	var_180_int = 41619; // 0x1c7 PushI
	var_181_bool = var_7_cvector == var_180_int; // 0x1c8 Eq
	if(var_181_bool == 0) goto Label_478; // 0x1c9 JumpB
	var_182_string = ""; // 0x1ca PushV
	var_182_string = "Mysterious"; // 0x1cb MovS
	func_144(var_8_bool, var_182_string); // 0x1cc NEW_2
	var_183_int = 539673; // 0x1ce PushI
	SetMessage(var_183_int); // 0x1cf TObjFunc
	ClearReplies(); // 0x1d1 TObjFunc
	var_184_int = 534531; // 0x1d3 PushI
	var_185_int = -1; // 0x1d4 PushI
	var_186_int = 36172; // 0x1d5 PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x1d6 TObjFunc
	var_187_int = 539674; // 0x1d8 PushI
	var_188_int = -1; // 0x1d9 PushI
	var_189_int = 41620; // 0x1da PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x1db TObjFunc
	return 0; // 0x1dd Return
	
Label_478:
	var_3_string = 1; // 0x1de TMovB
	var_190_bool = 0; // 0x1df PushV
	func_1267(var_190_bool); // 0x1e0 NEW_2
	if(var_190_bool == 0) goto Label_486; // 0x1e2 JumpB
	lshStopAnimation(); // 0x1e3 Func
	goto Label_488; // 0x1e5 Jump
	
Label_488:
	return 0; // 0x1e8 Return
	
Label_486:
	StopAnimation(); // 0x1e6 Func
	
Label_490:
	return 0; // 0x1ea Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x1f7 PushV
	var_10_string = "cleanup"; // 0x1f8 PushS
	var_11_bool = var_7_string == var_10_string; // 0x1f9 Eq
	if(var_11_bool == 0) goto Label_518; // 0x1fa JumpB
	var_1_object = 1; // 0x1fb TMovB
	IsLoaded(var_9_bool); // 0x1fc Func
	var_12_bool = var_9_bool == 0; // 0x1fe Not
	if(var_12_bool == 0) goto Label_517; // 0x1ff JumpB
	var_13_object = Obj(); // 0x200 PushV
	func_1100(var_13_object); // 0x201 NEW_2
	RemoveActor(var_13_object); // 0x203 Func
	
Label_517:
	goto Label_522; // 0x205 Jump
	
Label_522:
	return 2; // 0x20a Return
	
Label_518:
	var_16_string = "restore"; // 0x206 PushS
	var_17_bool = var_7_string == var_16_string; // 0x207 Eq
	if(var_17_bool == 0) goto Label_522; // 0x208 JumpB
	var_1_object = 0; // 0x209 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x20b PushT
	if(var_7_object == 0) goto Label_532; // 0x20c JumpB
	var_8_object = Obj(); // 0x20d PushV
	func_1100(var_8_object); // 0x20e NEW_2
	RemoveActor(var_8_object); // 0x210 Func
	Hold(); // 0x212 Func
	
Label_532:
	func_647(); // 0x215 NEW_2
	return 0; // 0x217 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_662(); // 0x219 NEW_2
	return 0; // 0x21b Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x262 PushI
	var_9_bool = var_7_int == var_8_int; // 0x263 Eq
	if(var_9_bool == 0) goto Label_646; // 0x264 JumpB
	func_605(); // 0x266 NEW_2
	var_11_bool = 0; // 0x268 PushV
	var_11_bool = 0; // 0x269 MovB
	var_12_bool = 0; // 0x26a PushV
	func_819(var_12_bool); // 0x26b NEW_2
	if(var_12_bool == 0) goto Label_627; // 0x26d JumpB
	var_15_bool = 0; // 0x26e PushV
	func_574(var_15_bool); // 0x26f NEW_2
	if(var_15_bool == 0) goto Label_627; // 0x271 JumpB
	var_11_bool = 1; // 0x272 MovB
	
Label_627:
	if(var_11_bool == 0) goto Label_640; // 0x273 JumpB
	var_32_bool = 0; // 0x274 PushV
	func_554(var_32_bool); // 0x275 NEW_2
	if(var_32_bool == 0) goto Label_639; // 0x277 JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x278 PushV
	var_53_object = Obj(); // 0x279 PushV
	func_1100(var_53_object); // 0x27a NEW_2
	var_52_object = var_53_object; // 0x27b Mov
	func_967(var_52_object); // 0x27d NEW_2
	
Label_639:
	goto Label_646; // 0x27f Jump
	
Label_646:
	return 0; // 0x286 Return
	
Label_640:
	func_569(var_7_int); // 0x281 NEW_2
	func_596(); // 0x284 NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x2a4 Push
	if(var_8_bool == 0) goto Label_682; // 0x2a5 JumpB
	func_596(); // 0x2a7 NEW_2
	goto Label_686; // 0x2a9 Jump
	
Label_686:
	return 0; // 0x2ae Return
	
Label_682:
	var_14_string = ""; // 0x2aa PushV
	var_14_string = "Neutral"; // 0x2ab MovS
	func_1047(var_14_string); // 0x2ac NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x2af PushV
	IsOverrideActive(var_9_bool); // 0x2b0 Func
	var_10_bool = var_9_bool == 0; // 0x2b2 Not
	if(var_10_bool == 0) goto Label_715; // 0x2b3 JumpB
	EventDisable(0); // 0x2b4 EventDisable
	func_787(); // 0x2b6 NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x2b8 PushV
	var_12_object = var_7_object; // 0x2b9 Mov
	func_810(var_12_object); // 0x2ba NEW_2
	EventEnable(0); // 0x2bc EventEnable
	var_25_object = Obj(); // 0x2bd PushV
	var_25_object = var_7_object; // 0x2be Mov
	func_491(var_25_object); // 0x2bf NEW_2
	var_257_string = ""; // 0x2c1 PushV
	var_257_string = "Neutral"; // 0x2c2 MovS
	func_1047(var_257_string); // 0x2c3 NEW_2
	func_605(); // 0x2c6 NEW_2
	func_596(); // 0x2c9 NEW_2
	
Label_715:
	return 2; // 0x2cb Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_540(var_6_bool); // 0x1f4 NEW_2
	return 0; // 0x1f6 Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_824(var_38_object, var_39_float); // 0x5 NEW_2
	var_83_bool = var_37_bool == 0; // 0x7 Not
	if(var_83_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_84_int = 0; // 0xd PushV
	func_1261(var_84_int); // 0xe NEW_2
	SetNPCName(var_84_int); // 0x10 ObjFunc
	var_85_int = 0; // 0x12 PushV
	func_1259(var_85_int); // 0x13 NEW_2
	SetNPCDescription(var_85_int); // 0x15 ObjFunc
	var_86_string = ""; // 0x17 PushV
	func_1263(var_86_string); // 0x18 NEW_2
	SetPhoto(var_86_string); // 0x1a ObjFunc
	var_87_string = ""; // 0x1c PushV
	func_1265(var_87_string); // 0x1d NEW_2
	SetPhoto2(var_87_string); // 0x1f ObjFunc
	var_88_int = 0; // 0x21 PushV
	func_1242(var_88_int); // 0x22 NEW_2
	SetPlayerName(var_88_int); // 0x24 ObjFunc
	var_35_int = -1; // 0x26 MovI
	IsOverrideActive(var_34_bool); // 0x27 Func
	var_96_bool = var_34_bool; // 0x29 Push
	if(var_96_bool == 0) goto Label_45; // 0x2a JumpB
	var_26_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_33_object); // 0x2d Func
	var_97_bool = 0; var_98_object = Obj(); // 0x2f PushV
	var_99_object = Obj(); // 0x30 PushV
	func_1100(var_99_object); // 0x31 NEW_2
	var_98_object = var_99_object; // 0x32 Mov
	func_909(var_97_bool, var_98_object); // 0x34 NEW_2
	var_192_object = Obj(); var_193_object = Obj(); // 0x36 PushV
	var_192_object = var_27_object; // 0x37 Mov
	var_193_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_194_object, var_195_object, var_196_string, var_197_bool, var_192_object, var_193_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_249_bool = var_36_bool == 0; // 0x3f Not
	if(var_249_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_250_object = Obj(); // 0x46 PushV
	var_250_object = var_27_object; // 0x47 Mov
	func_892(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_647()
{
	func_787(); // 0x288 NEW_2
	func_605(); // 0x28b NEW_2
	lshStopSpeech(); // 0x28d Func
	lshStopAnimation(); // 0x28f Func
	StopAsync(); // 0x291 Func
	Hold(); // 0x293 Func
	return 0; // 0x295 Return
}


func_909(var_97_bool, var_98_object)
{
	var_102_int = 0; var_103_int = 0; var_104_int = 0; var_105_int = 0; // 0x38d PushV
	var_106_string = "voice_common"; // 0x38e PushS
	GetVariable(var_106_string, var_104_int); // 0x38f Func
	var_107_int = var_104_int; // 0x391 Push
	if(var_107_int == 0) goto Label_947; // 0x392 JumpB
	var_108_bool = 0; var_109_object = Obj(); // 0x393 PushV
	var_109_object = var_98_object; // 0x394 Mov
	func_967(var_109_object); // 0x395 NEW_2
	var_138_bool = var_108_bool == 0; // 0x397 Not
	if(var_138_bool == 0) goto Label_929; // 0x398 JumpB
	var_139_bool = 0; var_140_object = Obj(); // 0x399 PushV
	var_140_object = var_98_object; // 0x39a Mov
	func_1004(var_140_object); // 0x39b NEW_2
	var_174_bool = var_139_bool == 0; // 0x39d Not
	if(var_174_bool == 0) goto Label_929; // 0x39e JumpB
	var_97_bool = 0; // 0x39f MovB
	return 4; // 0x3a0 Return
	
Label_929:
	var_175_int = 2; // 0x3a1 PushI
	irand(var_105_int, var_175_int); // 0x3a2 Func
	var_176_int = var_105_int; // 0x3a4 Push
	if(var_176_int == 0) goto Label_942; // 0x3a5 JumpB
	var_177_string = "voice_common"; // 0x3a6 PushS
	var_178_int = 1; // 0x3a7 PushI
	var_179_int = var_104_int + var_178_int; // 0x3a8 Add
	var_180_int = 3; // 0x3a9 PushI
	var_181_int = var_179_int / var_180_int; // 0x3aa Mod
	SetVariable(var_177_string, var_181_int); // 0x3ab Func
	goto Label_946; // 0x3ad Jump
	
Label_946:
	goto Label_965; // 0x3b2 Jump
	
Label_965:
	var_97_bool = 1; // 0x3c5 MovB
	return 4; // 0x3c6 Return
	
Label_942:
	var_182_string = "voice_common"; // 0x3ae PushS
	var_183_int = 0; // 0x3af PushI
	SetVariable(var_182_string, var_183_int); // 0x3b0 Func
	
Label_947:
	var_184_bool = 0; var_185_object = Obj(); // 0x3b3 PushV
	var_185_object = var_98_object; // 0x3b4 Mov
	func_1004(var_185_object); // 0x3b5 NEW_2
	var_186_bool = var_184_bool == 0; // 0x3b7 Not
	if(var_186_bool == 0) goto Label_961; // 0x3b8 JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0x3b9 PushV
	var_188_object = var_98_object; // 0x3ba Mov
	func_967(var_188_object); // 0x3bb NEW_2
	var_189_bool = var_187_bool == 0; // 0x3bd Not
	if(var_189_bool == 0) goto Label_961; // 0x3be JumpB
	var_97_bool = 0; // 0x3bf MovB
	return 4; // 0x3c0 Return
	
Label_961:
	var_190_string = "voice_common"; // 0x3c1 PushS
	var_191_int = 1; // 0x3c2 PushI
	SetVariable(var_190_string, var_191_int); // 0x3c3 Func
}


func_1166()
{
	func_1188(); // 0x490 NEW_2
	var_38_bool = 0; var_39_string = ""; var_40_string = ""; // 0x492 PushV
	var_39_string = "quest_d11_06"; // 0x493 MovS
	var_40_string = "completed"; // 0x494 MovS
	func_1121(var_38_bool, var_39_string, var_40_string); // 0x495 NEW_2
	return 0; // 0x497 Return
}


func_144(var_2_object, var_199_string)
{
	var_200_bool = 0; // 0x91 PushV
	func_1267(var_200_bool); // 0x92 NEW_2
	var_201_bool = var_200_bool == 0; // 0x94 Not
	if(var_201_bool == 0) goto Label_151; // 0x95 JumpB
	return 0; // 0x96 Return
	
Label_151:
	var_202_bool = var_199_string == var_2_object; // 0x97 Eq
	if(var_202_bool == 0) goto Label_154; // 0x98 JumpB
	return 0; // 0x99 Return
	
Label_154:
	var_203_string = ""; var_204_bool = 0; // 0x9a PushV
	var_203_string = var_199_string; // 0x9b Mov
	var_205_string = ""; // 0x9c PushS
	var_206_bool = var_199_string == var_205_string; // 0x9d Eq
	if(var_206_bool == 0) goto Label_161; // 0x9e JumpB
	var_204_bool = 0; // 0x9f MovB
	goto Label_162; // 0xa0 Jump
	
Label_162:
	func_1063(var_203_string, var_204_bool); // 0xa2 NEW_2
	var_2_object = var_199_string; // 0xa4 TMov
	return 0; // 0xa5 Return
	
Label_161:
	var_204_bool = 1; // 0xa1 MovB
}


func_785(var_45_bool)
{
	var_45_bool = 1; // 0x311 MovB
	return 0; // 0x312 Return
}


func_787()
{
	StopAnimation(); // 0x313 Func
	StopGroup0(); // 0x315 Func
	return 0; // 0x317 Return
}


func_662()
{
	StopGroup0(); // 0x296 Func
	func_605(); // 0x299 NEW_2
	var_8_string = ""; // 0x29b PushV
	var_8_string = "Neutral"; // 0x29c MovS
	func_1047(var_8_string); // 0x29d NEW_2
	func_596(); // 0x2a0 NEW_2
	return 0; // 0x2a2 Return
}


func_1047(var_233_string)
{
	var_234_bool = 0; var_235_float = 0; var_236_float = 0; var_237_bool = 0; var_238_float = 0; var_239_float = 0; // 0x417 PushV
	lshHasAnimation(var_237_bool, var_233_string); // 0x418 Func
	var_240_bool = var_237_bool; // 0x41a Push
	if(var_240_bool == 0) goto Label_1058; // 0x41b JumpB
	lshGetAnimTimes(var_233_string, var_238_float, var_239_float); // 0x41c Func
	var_241_bool = 0; // 0x41e PushB
	lshPlayAnimation(var_238_float, var_239_float, var_241_bool); // 0x41f Func
	goto Label_1062; // 0x421 Jump
	
Label_1062:
	return 6; // 0x426 Return
	
Label_1058:
	var_242_string = "Can't find lsh animation : "; // 0x422 PushS
	var_243_int = var_242_string + var_233_string; // 0x423 Add
	Trace(var_243_int); // 0x424 Func
}


func_792(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x318 PushV
	GetPosition(var_27_cvector); // 0x319 Func
	GetPosition(var_28_cvector); // 0x31b ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x31d Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x31e Or2
	return 6; // 0x31f Return
}


func_1176(var_217_bool)
{
	var_219_int = 0; var_220_string = ""; // 0x499 PushV
	var_220_string = "d11q06"; // 0x49a MovS
	func_1116(var_219_int, var_220_string); // 0x49b NEW_2
	var_223_int = 3; // 0x49d PushI
	var_224_bool = var_219_int == var_223_int; // 0x49e Eq
	if(var_224_bool == 0) goto Label_1186; // 0x49f JumpB
	var_217_bool = 1; // 0x4a0 MovB
	return 0; // 0x4a1 Return
	
Label_1186:
	var_217_bool = 0; // 0x4a2 MovB
	return 0; // 0x4a3 Return
}


func_540(var_0_object)
{
	var_7_bool = 0; // 0x21c PushV
	func_819(var_7_bool); // 0x21d NEW_2
	var_10_bool = var_7_bool == 0; // 0x21f Not
	if(var_10_bool == 0) goto Label_547; // 0x220 JumpB
	Hold(); // 0x221 Func
	
Label_547:
	GetDirection(var_0_object); // 0x223 Func
	
Label_549:
	func_716(); // 0x226 NEW_2
	goto Label_549; // 0x228 Jump
}


func_800(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x320 PushV
	GetPosition(var_20_cvector); // 0x321 Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x323 Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x324 PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x325 PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x326 Func
	var_15_bool = var_22_bool; // 0x328 Mov
	return 6; // 0x329 Return
}


func_1188()
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x4a4 PushV
	var_17_int = 692; // 0x4a5 PushI
	var_18_int = 2; // 0x4a6 PushI
	var_19_int = 534540; // 0x4a7 PushI
	CreateDiaryEntry(var_16_object, var_17_int, var_18_int, var_19_int); // 0x4a8 Func
	var_20_bool = 0; var_21_object = Obj(); var_22_int = 0; // 0x4aa PushV
	var_21_object = var_16_object; // 0x4ab Mov
	var_22_int = 686; // 0x4ac MovI
	func_1214(var_20_bool, var_21_object, var_22_int); // 0x4ad NEW_2
	return 2; // 0x4af Return
}


func_1063(var_203_string, var_204_bool)
{
	var_207_bool = 0; var_208_float = 0; var_209_float = 0; var_210_bool = 0; var_211_float = 0; var_212_float = 0; // 0x427 PushV
	lshHasAnimation(var_210_bool, var_203_string); // 0x428 Func
	var_213_bool = var_210_bool; // 0x42a Push
	if(var_213_bool == 0) goto Label_1073; // 0x42b JumpB
	lshGetAnimTimes(var_203_string, var_211_float, var_212_float); // 0x42c Func
	lshPlayAnimation(var_211_float, var_212_float, var_204_bool); // 0x42e Func
	goto Label_1077; // 0x430 Jump
	
Label_1077:
	return 6; // 0x435 Return
	
Label_1073:
	var_214_string = "Can't find lsh animation : "; // 0x431 PushS
	var_215_int = var_214_string + var_203_string; // 0x432 Add
	Trace(var_215_int); // 0x433 Func
}


func_810(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x32a PushV
	GetPosition(var_14_cvector); // 0x32b ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x32d PushV
	var_16_cvector = var_14_cvector; // 0x32e Mov
	func_800(var_15_bool, var_16_cvector); // 0x32f NEW_2
	var_11_bool = var_15_bool; // 0x330 Mov
	return 2; // 0x332 Return
}


func_554(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x22a PushV
	var_35_string = "player"; // 0x22b PushS
	FindActor(var_34_object, var_35_string); // 0x22c Func
	var_36_bool = var_34_object == 0; // 0x22e Not
	if(var_36_bool == 0) goto Label_562; // 0x22f JumpB
	var_32_bool = 0; // 0x230 MovB
	return 2; // 0x231 Return
	
Label_562:
	var_37_bool = 0; var_38_object = Obj(); // 0x232 PushV
	var_38_object = var_34_object; // 0x233 Mov
	func_810(var_38_object); // 0x234 NEW_2
	var_32_bool = var_37_bool; // 0x235 Mov
	return 2; // 0x237 Return
}


func_1201(var_29_object)
{
	var_30_object = Obj(); var_31_object = Obj(); // 0x4b1 PushV
	GetDiaryRoot(var_31_object); // 0x4b2 Func
	var_32_bool = var_31_object == 0; // 0x4b4 Not
	if(var_32_bool == 0) goto Label_1211; // 0x4b5 JumpB
	var_33_string = "Can't retrieve diary root"; // 0x4b6 PushS
	Trace(var_33_string); // 0x4b7 Func
	var_29_object = 0; // 0x4b9 MovB
	return 2; // 0x4ba Return
	
Label_1211:
	var_29_object = var_31_object; // 0x4bb Mov
	return 2; // 0x4bc Return
}


func_819(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x333 PushV
	IsLoaded(var_9_bool); // 0x334 Func
	var_7_bool = var_9_bool; // 0x336 Mov
	return 2; // 0x337 Return
}


func_1078(var_131_bool, var_132_string)
{
	var_133_bool = 0; var_134_bool = 0; // 0x436 PushV
	var_135_bool = 0; // 0x437 PushV
	func_1267(var_135_bool); // 0x438 NEW_2
	if(var_135_bool == 0) goto Label_1091; // 0x43a JumpB
	lshHasSpeech(var_134_bool, var_132_string); // 0x43b Func
	var_136_bool = var_134_bool; // 0x43d Push
	if(var_136_bool == 0) goto Label_1091; // 0x43e JumpB
	lshPlaySpeech(var_132_string); // 0x43f Func
	var_131_bool = 1; // 0x441 MovB
	return 2; // 0x442 Return
	
Label_1091:
	var_131_bool = 0; // 0x443 MovB
	return 2; // 0x444 Return
}


func_824(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x338 PushV
	GetPosition(var_50_cvector); // 0x339 ObjFunc
	GetEyesHeight(var_49_float); // 0x33b ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x33d PushE
	var_58_float = var_58_float + var_49_float; // 0x33e Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x33f PopE
	GetPosition(var_51_cvector); // 0x340 Func
	GetEyesHeight(var_49_float); // 0x342 Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x344 PushE
	var_59_float = var_59_float + var_49_float; // 0x345 Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x346 PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x347 Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x348 PushE
	var_60_float = 0; // 0x349 MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x34a PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x34b Or
	var_62_float = sqrt(var_61_int); // 0x34c Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x34d Div2
	var_53_cvector = -var_52_cvector; // 0x34e Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x34f Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x350 PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x351 PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x352 Xor2
	func_1106(var_64_cvector, var_65_cvector); // 0x353 NEW_2
	var_72_int = 25; // 0x355 PushI
	var_73_float = var_64_cvector * var_72_int; // 0x356 Mult
	var_74_int = var_63_float + var_73_float; // 0x357 Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x358 PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x359 Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x35a Add2
	IsOverrideActive(var_56_bool); // 0x35b Func
	var_76_bool = var_56_bool; // 0x35d Push
	if(var_76_bool == 0) goto Label_865; // 0x35e JumpB
	var_37_bool = 0; // 0x35f MovB
	return 18; // 0x360 Return
	
Label_865:
	StopWorld(); // 0x361 Func
	CameraTransit(var_55_cvector, var_53_cvector); // 0x363 Func
	var_77_float = GetByIndex(var_54_cvector, 0); // 0x365 PushE
	var_78_float = GetByIndex(var_54_cvector, 2); // 0x366 PushE
	Rotate(var_77_float, var_78_float); // 0x367 Func
	var_79_bool = 0; // 0x369 PushV
	func_1267(var_79_bool); // 0x36a NEW_2
	if(var_79_bool == 0) goto Label_878; // 0x36c JumpB
	goto Label_886; // 0x36d Jump
	
Label_886:
	CameraWaitForPlayFinish(); // 0x376 Func
	ResumeWorld(); // 0x378 Func
	var_37_bool = 1; // 0x37a MovB
	return 18; // 0x37b Return
	
Label_878:
	var_80_string = "head"; // 0x36e PushS
	HasAnimationTrack(var_57_bool, var_80_string); // 0x36f Func
	var_81_bool = var_57_bool; // 0x371 Push
	if(var_81_bool == 0) goto Label_886; // 0x372 JumpB
	var_82_string = "head"; // 0x373 PushS
	LookAsyncCamera(var_82_string); // 0x374 Func
}


func_569(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x239 PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x23a PushE
	RotateAsync(var_84_float, var_85_float); // 0x23b Func
	return 0; // 0x23d Return
}


func_574(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x23e PushV
	var_20_string = "player"; // 0x23f PushS
	FindActor(var_18_object, var_20_string); // 0x240 Func
	var_21_bool = var_18_object == 0; // 0x242 Not
	if(var_21_bool == 0) goto Label_582; // 0x243 JumpB
	var_15_bool = 0; // 0x244 MovB
	return 4; // 0x245 Return
	
Label_582:
	var_22_float = 0; var_23_object = Obj(); // 0x246 PushV
	var_23_object = var_18_object; // 0x247 Mov
	func_792(var_23_object); // 0x248 NEW_2
	var_30_float = 90000.0; // 0x24a PushF
	var_31_bool = var_22_float > var_30_float; // 0x24b GT
	if(var_31_bool == 0) goto Label_591; // 0x24c JumpB
	var_15_bool = 0; // 0x24d MovB
	return 4; // 0x24e Return
	
Label_591:
	CanSee(var_19_bool, var_18_object); // 0x24f Func
	var_15_bool = var_19_bool; // 0x251 Mov
	return 4; // 0x252 Return
}


func_1214(var_20_bool, var_21_object, var_22_int)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_int = 0; var_26_object = Obj(); var_27_object = Obj(); var_28_int = 0; // 0x4be PushV
	var_29_object = Obj(); // 0x4bf PushV
	func_1201(var_29_object); // 0x4c0 NEW_2
	var_26_object = var_29_object; // 0x4c1 Mov
	Find(var_22_int, var_27_object); // 0x4c3 ObjFunc
	var_34_bool = var_27_object == 0; // 0x4c5 Not
	if(var_34_bool == 0) goto Label_1229; // 0x4c6 JumpB
	var_35_string = "Can't find diary parent with id: "; // 0x4c7 PushS
	var_36_int = var_35_string + var_22_int; // 0x4c8 Add
	Trace(var_36_int); // 0x4c9 Func
	var_20_bool = 0; // 0x4cb MovB
	return 6; // 0x4cc Return
	
Label_1229:
	AddChild(var_21_object); // 0x4cd ObjFunc
	var_37_int = 7; // 0x4cf PushI
	SendWorldWndMessage(var_37_int); // 0x4d0 Func
	GetCategory(var_28_int); // 0x4d2 ObjFunc
	SetDiarySection(var_28_int); // 0x4d4 Func
	var_20_bool = 0; // 0x4d6 MovB
	return 6; // 0x4d7 Return
}


func_1093()
{
	var_10_bool = 0; // 0x445 PushV
	func_1267(var_10_bool); // 0x446 NEW_2
	if(var_10_bool == 0) goto Label_1099; // 0x448 JumpB
	lshStopSpeech(); // 0x449 Func
	
Label_1099:
	return 0; // 0x44b Return
}


func_967(var_108_bool)
{
	var_110_string = ""; var_111_int = 0; var_112_bool = 0; var_113_int = 0; var_114_string = ""; var_115_string = ""; var_116_int = 0; var_117_bool = 0; var_118_int = 0; var_119_string = ""; // 0x3c7 PushV
	var_115_string = "c"; // 0x3c8 MovS
	var_116_int = 0; // 0x3c9 MovI
	
Label_970:
	var_120_int = 1; // 0x3ca PushI
	if(var_120_int == 0) goto Label_983; // 0x3cb JumpB
	var_121_int = 1; // 0x3cc PushI
	var_122_int = var_116_int + var_121_int; // 0x3cd Add
	var_123_int = var_115_string + var_122_int; // 0x3ce Add
	HasProperty(var_123_int, var_117_bool); // 0x3cf ObjFunc
	var_124_bool = var_117_bool == 0; // 0x3d1 Not
	if(var_124_bool == 0) goto Label_980; // 0x3d2 JumpB
	goto Label_983; // 0x3d3 Jump
	
Label_983:
	var_125_bool = var_116_int == 0; // 0x3d7 Not
	if(var_125_bool == 0) goto Label_987; // 0x3d8 JumpB
	var_108_bool = 0; // 0x3d9 MovB
	return 10; // 0x3da Return
	
Label_987:
	var_118_int = 0; // 0x3db MovI
	var_126_int = 1; // 0x3dc PushI
	var_127_bool = var_116_int > var_126_int; // 0x3dd GT
	if(var_127_bool == 0) goto Label_993; // 0x3de JumpB
	irand(var_118_int, var_116_int); // 0x3df Func
	
Label_993:
	var_128_int = 1; // 0x3e1 PushI
	var_129_int = var_118_int + var_128_int; // 0x3e2 Add
	var_130_int = var_115_string + var_129_int; // 0x3e3 Add
	GetProperty(var_130_int, var_119_string); // 0x3e4 ObjFunc
	var_131_bool = 0; var_132_string = ""; // 0x3e6 PushV
	var_132_string = var_119_string; // 0x3e7 Mov
	func_1078(var_131_bool, var_132_string); // 0x3e8 NEW_2
	var_108_bool = var_131_bool; // 0x3e9 Mov
	return 10; // 0x3eb Return
	
Label_980:
	var_137_int = 1; // 0x3d4 PushI
	var_116_int = var_116_int + var_137_int; // 0x3d5 Add2
	goto Label_970; // 0x3d6 Jump
}


func_1100(var_99_object)
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x44c PushV
	self(var_101_object); // 0x44d Func
	var_99_object = var_101_object; // 0x44f Mov
	return 2; // 0x450 Return
}


func_716()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; // 0x2cc PushV
	WaitForAnimEnd(); // 0x2cd Func
	var_23_bool = 0; // 0x2cf PushV
	func_819(var_23_bool); // 0x2d0 NEW_2
	var_24_bool = var_23_bool == 0; // 0x2d2 Not
	if(var_24_bool == 0) goto Label_725; // 0x2d3 JumpB
	return 12; // 0x2d4 Return
	
Label_725:
	var_25_int = 0; // 0x2d5 PushV
	func_1149(var_25_int); // 0x2d6 NEW_2
	var_17_int = var_25_int; // 0x2d7 Mov
	var_18_int = 0; // 0x2d9 MovI
	
Label_730:
	var_38_bool = 0; // 0x2da PushV
	var_38_bool = 0; // 0x2db MovB
	var_39_int = 5; // 0x2dc PushI
	var_40_bool = var_18_int < var_39_int; // 0x2dd LT
	if(var_40_bool == 0) goto Label_740; // 0x2de JumpB
	var_41_bool = 0; // 0x2df PushV
	func_819(var_41_bool); // 0x2e0 NEW_2
	if(var_41_bool == 0) goto Label_740; // 0x2e2 JumpB
	var_38_bool = 1; // 0x2e3 MovB
	
Label_740:
	if(var_38_bool == 0) goto Label_782; // 0x2e4 JumpB
	var_42_bool = var_17_int == 0; // 0x2e5 Not
	if(var_42_bool == 0) goto Label_750; // 0x2e6 JumpB
	var_43_int = 3; // 0x2e7 PushI
	Sleep(var_43_int, var_19_bool); // 0x2e8 Func
	var_44_bool = var_19_bool == 0; // 0x2ea Not
	if(var_44_bool == 0) goto Label_749; // 0x2eb JumpB
	goto Label_782; // 0x2ec Jump
	
Label_782:
	ResetAAS(); // 0x30e Func
	return 12; // 0x310 Return
	
Label_749:
	goto Label_771; // 0x2ed Jump
	
Label_771:
	var_45_bool = 0; // 0x303 PushV
	func_785(var_45_bool); // 0x304 NEW_2
	var_46_bool = var_45_bool == 0; // 0x306 Not
	if(var_46_bool == 0) goto Label_777; // 0x307 JumpB
	goto Label_782; // 0x308 Jump
	
Label_777:
	ResetAAS(); // 0x309 Func
	var_47_int = 1; // 0x30b PushI
	var_18_int = var_18_int + var_47_int; // 0x30c Add2
	goto Label_730; // 0x30d Jump
	
Label_750:
	irand(var_20_int, var_17_int); // 0x2ee Func
	var_48_int = 5; // 0x2f0 PushI
	irand(var_21_int, var_48_int); // 0x2f1 Func
	var_49_int = 0; // 0x2f3 PushI
	var_50_bool = var_21_int != var_49_int; // 0x2f4 Neq
	if(var_50_bool == 0) goto Label_759; // 0x2f5 JumpB
	var_20_int = 0; // 0x2f6 MovI
	
Label_759:
	var_51_string = "all"; // 0x2f7 PushS
	var_52_string = ""; var_53_int = 0; // 0x2f8 PushV
	var_53_int = var_20_int; // 0x2f9 Mov
	func_1142(var_52_string, var_53_int); // 0x2fa NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x2fc Func
	WaitForAnimEnd(var_22_bool); // 0x2fe Func
	var_54_bool = var_22_bool == 0; // 0x300 Not
	if(var_54_bool == 0) goto Label_771; // 0x301 JumpB
	goto Label_782; // 0x302 Jump
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_192_object, var_193_object)
{
	var_0_object = var_193_object; // 0x52 TMov
	var_1_object = var_192_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_198_int = 1; // 0x55 PushI
	if(var_198_int == 0) goto Label_114; // 0x56 JumpB
	var_199_string = ""; // 0x57 PushV
	var_199_string = "Staring"; // 0x58 MovS
	func_144(var_193_object, var_199_string); // 0x59 NEW_2
	var_216_int = 534532; // 0x5b PushI
	SetMessage(var_216_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_217_bool = 0; var_218_object = Obj(); // 0x60 PushV
	var_218_object = var_1_object; // 0x61 MovT
	func_1176(var_218_object); // 0x62 NEW_2
	if(var_217_bool == 0) goto Label_106; // 0x64 JumpB
	var_225_int = 539632; // 0x65 PushI
	var_226_int = 41601; // 0x66 PushI
	var_227_int = 41578; // 0x67 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x68 TObjFunc
	
Label_106:
	var_228_int = 534533; // 0x6a PushI
	var_229_int = -1; // 0x6b PushI
	var_230_int = 36174; // 0x6c PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x6d TObjFunc
	goto Label_114; // 0x6f Jump
	
Label_114:
	var_231_bool = 0; // 0x72 PushV
	func_1267(var_231_bool); // 0x73 NEW_2
	if(var_231_bool == 0) goto Label_129; // 0x75 JumpB
	
Label_118:
	lshWaitForAnimEnd(); // 0x76 Func
	var_232_string = var_3_string; // 0x78 PushT
	if(var_232_string == 0) goto Label_123; // 0x79 JumpB
	goto Label_128; // 0x7a Jump
	
Label_128:
	goto Label_143; // 0x80 Jump
	
Label_143:
	return 0; // 0x8f Return
	
Label_123:
	var_233_string = ""; // 0x7b PushV
	var_233_string = var_2_object; // 0x7c MovT
	func_1047(var_233_string); // 0x7d NEW_2
	goto Label_118; // 0x7f Jump
	
Label_129:
	var_244_string = "all"; // 0x81 PushS
	var_245_string = "idle"; // 0x82 PushS
	PlayAnimation(var_244_string, var_245_string); // 0x83 Func
	
Label_133:
	WaitForAnimEnd(); // 0x85 Func
	var_246_string = var_3_string; // 0x87 PushT
	if(var_246_string == 0) goto Label_138; // 0x88 JumpB
	goto Label_143; // 0x89 Jump
	
Label_138:
	var_247_string = "all"; // 0x8a PushS
	var_248_string = "idle"; // 0x8b PushS
	PlayAnimation(var_247_string, var_248_string); // 0x8c Func
	goto Label_133; // 0x8e Jump
}


func_1106(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x452 PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x453 Or
	var_68_float = sqrt(var_69_int); // 0x454 Sqrt2
	var_70_float = 0.0; // 0x455 PushF
	var_71_bool = var_68_float < var_70_float; // 0x456 LT
	if(var_71_bool == 0) goto Label_1114; // 0x457 JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x458 MovV
	return 2; // 0x459 Return
	
Label_1114:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x45a Div2
	return 2; // 0x45b Return
}


func_596()
{
	var_259_float = 0; var_260_float = 0; // 0x254 PushV
	var_261_int = 8; // 0x255 PushI
	var_262_int = 16; // 0x256 PushI
	rand(var_260_float, var_261_int, var_262_int); // 0x257 Func
	var_263_int = 10; // 0x259 PushI
	SetTimer(var_263_int, var_260_float); // 0x25a Func
	return 2; // 0x25c Return
}


func_1242(var_88_int)
{
	var_89_int = 0; var_90_int = 0; // 0x4da PushV
	var_91_string = "branch"; // 0x4db PushS
	GetVariable(var_91_string, var_90_int); // 0x4dc Func
	var_92_int = 0; // 0x4de PushI
	var_93_bool = var_90_int == var_92_int; // 0x4df Eq
	if(var_93_bool == 0) goto Label_1252; // 0x4e0 JumpB
	var_88_int = 1; // 0x4e1 MovI
	return 2; // 0x4e2 Return
	
Label_1252:
	var_94_int = 1; // 0x4e4 PushI
	var_95_bool = var_90_int == var_94_int; // 0x4e5 Eq
	if(var_95_bool == 0) goto Label_1257; // 0x4e6 JumpB
	var_88_int = 2; // 0x4e7 MovI
	return 2; // 0x4e8 Return
	
Label_1257:
	var_88_int = 3; // 0x4e9 MovI
	return 2; // 0x4ea Return
}


func_1116(var_219_int, var_220_string)
{
	var_221_int = 0; var_222_int = 0; // 0x45c PushV
	GetVariable(var_220_string, var_222_int); // 0x45d Func
	var_219_int = var_222_int; // 0x45f Mov
	return 2; // 0x460 Return
}


func_605()
{
	var_258_int = 10; // 0x25d PushI
	KillTimer(var_258_int); // 0x25e Func
	return 0; // 0x260 Return
}


func_1121(var_38_bool, var_39_string, var_40_string)
{
	var_41_object = Obj(); var_42_object = Obj(); // 0x461 PushV
	FindActor(var_42_object, var_39_string); // 0x462 Func
	var_43_bool = var_42_object == 0; // 0x464 NullEq
	if(var_43_bool == 0) goto Label_1128; // 0x465 JumpB
	var_38_bool = 0; // 0x466 MovB
	return 2; // 0x467 Return
	
Label_1128:
	Trigger(var_42_object, var_40_string); // 0x468 Func
	var_38_bool = 1; // 0x46a MovB
	return 2; // 0x46b Return
}


func_1259(var_85_int)
{
	var_85_int = 515543; // 0x4eb MovI
	return 0; // 0x4ec Return
}


func_491(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x1ec PushV
	var_27_object = var_25_object; // 0x1ed Mov
	TaskCall(0); // 0x1ee TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0x1ef NEW_2
	TaskReturn(); // 0x1f0 TaskReturn
	return 0; // 0x1f2 Return
}


func_1261(var_84_int)
{
	var_84_int = 502868; // 0x4ed MovI
	return 0; // 0x4ee Return
}


func_1004(var_139_bool)
{
	var_141_string = ""; var_142_int = 0; var_143_bool = 0; var_144_int = 0; var_145_string = ""; var_146_string = ""; var_147_int = 0; var_148_bool = 0; var_149_int = 0; var_150_string = ""; // 0x3ec PushV
	var_151_string = "d"; // 0x3ed PushS
	var_152_int = 0; // 0x3ee PushV
	func_1133(var_152_int); // 0x3ef NEW_2
	var_158_int = var_151_string + var_152_int; // 0x3f1 Add
	var_159_string = "m"; // 0x3f2 PushS
	var_146_string = var_158_int + var_159_string; // 0x3f3 Add2
	var_147_int = 0; // 0x3f4 MovI
	
Label_1013:
	var_160_int = 1; // 0x3f5 PushI
	if(var_160_int == 0) goto Label_1026; // 0x3f6 JumpB
	var_161_int = 1; // 0x3f7 PushI
	var_162_int = var_147_int + var_161_int; // 0x3f8 Add
	var_163_int = var_146_string + var_162_int; // 0x3f9 Add
	HasProperty(var_163_int, var_148_bool); // 0x3fa ObjFunc
	var_164_bool = var_148_bool == 0; // 0x3fc Not
	if(var_164_bool == 0) goto Label_1023; // 0x3fd JumpB
	goto Label_1026; // 0x3fe Jump
	
Label_1026:
	var_165_bool = var_147_int == 0; // 0x402 Not
	if(var_165_bool == 0) goto Label_1030; // 0x403 JumpB
	var_139_bool = 0; // 0x404 MovB
	return 10; // 0x405 Return
	
Label_1030:
	var_149_int = 0; // 0x406 MovI
	var_166_int = 1; // 0x407 PushI
	var_167_bool = var_147_int > var_166_int; // 0x408 GT
	if(var_167_bool == 0) goto Label_1036; // 0x409 JumpB
	irand(var_149_int, var_147_int); // 0x40a Func
	
Label_1036:
	var_168_int = 1; // 0x40c PushI
	var_169_int = var_149_int + var_168_int; // 0x40d Add
	var_170_int = var_146_string + var_169_int; // 0x40e Add
	GetProperty(var_170_int, var_150_string); // 0x40f ObjFunc
	var_171_bool = 0; var_172_string = ""; // 0x411 PushV
	var_172_string = var_150_string; // 0x412 Mov
	func_1078(var_171_bool, var_172_string); // 0x413 NEW_2
	var_139_bool = var_171_bool; // 0x414 Mov
	return 10; // 0x416 Return
	
Label_1023:
	var_173_int = 1; // 0x3ff PushI
	var_147_int = var_147_int + var_173_int; // 0x400 Add2
	goto Label_1013; // 0x401 Jump
}


func_1263(var_86_string)
{
	var_86_string = "ui/NPC_Maria.png"; // 0x4ef MovS
	return 0; // 0x4f0 Return
}


func_1133(var_152_int)
{
	var_153_float = 0; var_154_float = 0; // 0x46d PushV
	GetGameTime(var_154_float); // 0x46e Func
	var_155_int = 1; // 0x470 PushI
	var_156_int = 0; // 0x471 PushV
	var_157_int = 24; // 0x472 PushI
	var_156_int = var_154_float / var_154_float; // 0x473 Div2
	var_152_int = var_155_int + var_156_int; // 0x474 Add2
	return 2; // 0x475 Return
}


func_1265(var_87_string)
{
	var_87_string = "ui/NPC_Maria_b.png"; // 0x4f1 MovS
	return 0; // 0x4f2 Return
}


func_1267(var_79_bool)
{
	var_79_bool = 1; // 0x4f3 MovB
	return 0; // 0x4f4 Return
}


func_1142(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x476 PushV
	var_34_string = "idle"; // 0x477 MovS
	var_35_int = var_32_int; // 0x478 Push
	if(var_35_int == 0) goto Label_1147; // 0x479 JumpB
	var_34_string = var_34_string + var_32_int; // 0x47a Add2
	
Label_1147:
	var_31_string = var_34_string; // 0x47b Mov
	return 2; // 0x47c Return
}


func_892()
{
	var_251_bool = 0; var_252_bool = 0; // 0x37c PushV
	CameraSwitchToNormal(); // 0x37d Func
	var_253_bool = 0; // 0x37f PushV
	func_1267(var_253_bool); // 0x380 NEW_2
	if(var_253_bool == 0) goto Label_900; // 0x382 JumpB
	goto Label_908; // 0x383 Jump
	
Label_908:
	return 2; // 0x38c Return
	
Label_900:
	var_254_string = "head"; // 0x384 PushS
	HasAnimationTrack(var_252_bool, var_254_string); // 0x385 Func
	var_255_bool = var_252_bool; // 0x387 Push
	if(var_255_bool == 0) goto Label_908; // 0x388 JumpB
	var_256_string = "head"; // 0x389 PushS
	UnlookAsync(var_256_string); // 0x38a Func
}


func_1149(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x47d PushV
	var_28_int = 0; // 0x47e MovI
	
Label_1151:
	var_30_string = "all"; // 0x47f PushS
	var_31_string = ""; var_32_int = 0; // 0x480 PushV
	var_32_int = var_28_int; // 0x481 Mov
	func_1142(var_31_string, var_32_int); // 0x482 NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x484 Func
	var_36_bool = var_29_bool == 0; // 0x486 Not
	if(var_36_bool == 0) goto Label_1161; // 0x487 JumpB
	goto Label_1164; // 0x488 Jump
	
Label_1164:
	var_25_int = var_28_int; // 0x48c Mov
	return 4; // 0x48d Return
	
Label_1161:
	var_37_int = 1; // 0x489 PushI
	var_28_int = var_28_int + var_37_int; // 0x48a Add2
	goto Label_1151; // 0x48b Jump
}


