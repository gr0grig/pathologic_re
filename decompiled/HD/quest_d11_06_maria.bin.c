task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xa7 PushI
	if(var_9_int == 0) goto Label_515; // 0xa8 JumpB
	func_1120(); // 0xaa NEW_2
	var_11_int = 36172; // 0xac PushI
	var_12_bool = var_8_bool == var_11_int; // 0xad Eq
	if(var_12_bool == 0) goto Label_180; // 0xae JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xaf PushV
	var_13_object = var_1_object; // 0xb0 MovT
	var_14_object = var_0_object; // 0xb1 MovT
	func_1193(); // 0xb2 NEW_2
	
Label_180:
	var_44_int = 41620; // 0xb4 PushI
	var_45_bool = var_8_bool == var_44_int; // 0xb5 Eq
	if(var_45_bool == 0) goto Label_188; // 0xb6 JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0xb7 PushV
	var_46_object = var_1_object; // 0xb8 MovT
	var_47_object = var_0_object; // 0xb9 MovT
	func_1193(); // 0xba NEW_2
	
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
	func_1203(var_69_object); // 0xca NEW_2
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
	if(var_148_bool == 0) goto Label_398; // 0x179 JumpB
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
	var_154_int = 539678; // 0x188 PushI
	var_155_int = 41627; // 0x189 PushI
	var_156_int = 41626; // 0x18a PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x18b TObjFunc
	return 0; // 0x18d Return
	
Label_398:
	var_157_int = 41627; // 0x18e PushI
	var_158_bool = var_7_cvector == var_157_int; // 0x18f Eq
	if(var_158_bool == 0) goto Label_421; // 0x190 JumpB
	var_159_string = ""; // 0x191 PushV
	var_159_string = "Neutral"; // 0x192 MovS
	func_144(var_8_bool, var_159_string); // 0x193 NEW_2
	var_160_int = 539679; // 0x195 PushI
	SetMessage(var_160_int); // 0x196 TObjFunc
	ClearReplies(); // 0x198 TObjFunc
	var_161_int = 539680; // 0x19a PushI
	var_162_int = 41629; // 0x19b PushI
	var_163_int = 41628; // 0x19c PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x19d TObjFunc
	var_164_int = 539682; // 0x19f PushI
	var_165_int = 41614; // 0x1a0 PushI
	var_166_int = 41630; // 0x1a1 PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x1a2 TObjFunc
	return 0; // 0x1a4 Return
	
Label_421:
	var_167_int = 41629; // 0x1a5 PushI
	var_168_bool = var_7_cvector == var_167_int; // 0x1a6 Eq
	if(var_168_bool == 0) goto Label_439; // 0x1a7 JumpB
	var_169_string = ""; // 0x1a8 PushV
	var_169_string = "Neutral"; // 0x1a9 MovS
	func_144(var_8_bool, var_169_string); // 0x1aa NEW_2
	var_170_int = 539681; // 0x1ac PushI
	SetMessage(var_170_int); // 0x1ad TObjFunc
	ClearReplies(); // 0x1af TObjFunc
	var_171_int = 539683; // 0x1b1 PushI
	var_172_int = 41634; // 0x1b2 PushI
	var_173_int = 41632; // 0x1b3 PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x1b4 TObjFunc
	return 0; // 0x1b6 Return
	
Label_439:
	var_174_int = 41634; // 0x1b7 PushI
	var_175_bool = var_7_cvector == var_174_int; // 0x1b8 Eq
	if(var_175_bool == 0) goto Label_462; // 0x1b9 JumpB
	var_176_string = ""; // 0x1ba PushV
	var_176_string = "Neutral"; // 0x1bb MovS
	func_144(var_8_bool, var_176_string); // 0x1bc NEW_2
	var_177_int = 539684; // 0x1be PushI
	SetMessage(var_177_int); // 0x1bf TObjFunc
	ClearReplies(); // 0x1c1 TObjFunc
	var_178_int = 539685; // 0x1c3 PushI
	var_179_int = 41619; // 0x1c4 PushI
	var_180_int = 41635; // 0x1c5 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x1c6 TObjFunc
	var_181_int = 539686; // 0x1c8 PushI
	var_182_int = 41619; // 0x1c9 PushI
	var_183_int = 41636; // 0x1ca PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x1cb TObjFunc
	return 0; // 0x1cd Return
	
Label_462:
	var_184_int = 41614; // 0x1ce PushI
	var_185_bool = var_7_cvector == var_184_int; // 0x1cf Eq
	if(var_185_bool == 0) goto Label_480; // 0x1d0 JumpB
	var_186_string = ""; // 0x1d1 PushV
	var_186_string = "Mysterious"; // 0x1d2 MovS
	func_144(var_8_bool, var_186_string); // 0x1d3 NEW_2
	var_187_int = 539668; // 0x1d5 PushI
	SetMessage(var_187_int); // 0x1d6 TObjFunc
	ClearReplies(); // 0x1d8 TObjFunc
	var_188_int = 539672; // 0x1da PushI
	var_189_int = 41619; // 0x1db PushI
	var_190_int = 41618; // 0x1dc PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x1dd TObjFunc
	return 0; // 0x1df Return
	
Label_480:
	var_191_int = 41619; // 0x1e0 PushI
	var_192_bool = var_7_cvector == var_191_int; // 0x1e1 Eq
	if(var_192_bool == 0) goto Label_503; // 0x1e2 JumpB
	var_193_string = ""; // 0x1e3 PushV
	var_193_string = "Mysterious"; // 0x1e4 MovS
	func_144(var_8_bool, var_193_string); // 0x1e5 NEW_2
	var_194_int = 539673; // 0x1e7 PushI
	SetMessage(var_194_int); // 0x1e8 TObjFunc
	ClearReplies(); // 0x1ea TObjFunc
	var_195_int = 534531; // 0x1ec PushI
	var_196_int = -1; // 0x1ed PushI
	var_197_int = 36172; // 0x1ee PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x1ef TObjFunc
	var_198_int = 539674; // 0x1f1 PushI
	var_199_int = -1; // 0x1f2 PushI
	var_200_int = 41620; // 0x1f3 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x1f4 TObjFunc
	return 0; // 0x1f6 Return
	
Label_503:
	var_3_string = 1; // 0x1f7 TMovB
	var_201_bool = 0; // 0x1f8 PushV
	func_1294(var_201_bool); // 0x1f9 NEW_2
	if(var_201_bool == 0) goto Label_511; // 0x1fb JumpB
	lshStopAnimation(); // 0x1fc Func
	goto Label_513; // 0x1fe Jump
	
Label_513:
	return 0; // 0x201 Return
	
Label_511:
	StopAnimation(); // 0x1ff Func
	
Label_515:
	return 0; // 0x203 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x210 PushV
	var_10_string = "cleanup"; // 0x211 PushS
	var_11_bool = var_7_string == var_10_string; // 0x212 Eq
	if(var_11_bool == 0) goto Label_543; // 0x213 JumpB
	var_1_object = 1; // 0x214 TMovB
	IsLoaded(var_9_bool); // 0x215 Func
	var_12_bool = var_9_bool == 0; // 0x217 Not
	if(var_12_bool == 0) goto Label_542; // 0x218 JumpB
	var_13_object = Obj(); // 0x219 PushV
	func_1127(var_13_object); // 0x21a NEW_2
	RemoveActor(var_13_object); // 0x21c Func
	
Label_542:
	goto Label_547; // 0x21e Jump
	
Label_547:
	return 2; // 0x223 Return
	
Label_543:
	var_16_string = "restore"; // 0x21f PushS
	var_17_bool = var_7_string == var_16_string; // 0x220 Eq
	if(var_17_bool == 0) goto Label_547; // 0x221 JumpB
	var_1_object = 0; // 0x222 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x224 PushT
	if(var_7_object == 0) goto Label_557; // 0x225 JumpB
	var_8_object = Obj(); // 0x226 PushV
	func_1127(var_8_object); // 0x227 NEW_2
	RemoveActor(var_8_object); // 0x229 Func
	Hold(); // 0x22b Func
	
Label_557:
	func_672(); // 0x22e NEW_2
	return 0; // 0x230 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_687(); // 0x232 NEW_2
	return 0; // 0x234 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x27b PushI
	var_9_bool = var_7_int == var_8_int; // 0x27c Eq
	if(var_9_bool == 0) goto Label_671; // 0x27d JumpB
	func_630(); // 0x27f NEW_2
	var_11_bool = 0; // 0x281 PushV
	var_11_bool = 0; // 0x282 MovB
	var_12_bool = 0; // 0x283 PushV
	func_844(var_12_bool); // 0x284 NEW_2
	if(var_12_bool == 0) goto Label_652; // 0x286 JumpB
	var_15_bool = 0; // 0x287 PushV
	func_599(var_15_bool); // 0x288 NEW_2
	if(var_15_bool == 0) goto Label_652; // 0x28a JumpB
	var_11_bool = 1; // 0x28b MovB
	
Label_652:
	if(var_11_bool == 0) goto Label_665; // 0x28c JumpB
	var_32_bool = 0; // 0x28d PushV
	func_579(var_32_bool); // 0x28e NEW_2
	if(var_32_bool == 0) goto Label_664; // 0x290 JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x291 PushV
	var_53_object = Obj(); // 0x292 PushV
	func_1127(var_53_object); // 0x293 NEW_2
	var_52_object = var_53_object; // 0x294 Mov
	func_994(var_52_object); // 0x296 NEW_2
	
Label_664:
	goto Label_671; // 0x298 Jump
	
Label_671:
	return 0; // 0x29f Return
	
Label_665:
	func_594(var_7_int); // 0x29a NEW_2
	func_621(); // 0x29d NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x2bd Push
	if(var_8_bool == 0) goto Label_707; // 0x2be JumpB
	func_621(); // 0x2c0 NEW_2
	goto Label_711; // 0x2c2 Jump
	
Label_711:
	return 0; // 0x2c7 Return
	
Label_707:
	var_14_string = ""; // 0x2c3 PushV
	var_14_string = "Neutral"; // 0x2c4 MovS
	func_1074(var_14_string); // 0x2c5 NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x2c8 PushV
	IsOverrideActive(var_9_bool); // 0x2c9 Func
	var_10_bool = var_9_bool == 0; // 0x2cb Not
	if(var_10_bool == 0) goto Label_740; // 0x2cc JumpB
	EventDisable(0); // 0x2cd EventDisable
	func_812(); // 0x2cf NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x2d1 PushV
	var_12_object = var_7_object; // 0x2d2 Mov
	func_835(var_12_object); // 0x2d3 NEW_2
	EventEnable(0); // 0x2d5 EventEnable
	var_25_object = Obj(); // 0x2d6 PushV
	var_25_object = var_7_object; // 0x2d7 Mov
	func_516(var_25_object); // 0x2d8 NEW_2
	var_259_string = ""; // 0x2da PushV
	var_259_string = "Neutral"; // 0x2db MovS
	func_1074(var_259_string); // 0x2dc NEW_2
	func_630(); // 0x2df NEW_2
	func_621(); // 0x2e2 NEW_2
	
Label_740:
	return 2; // 0x2e4 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_565(var_6_bool); // 0x20d NEW_2
	return 0; // 0x20f Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_849(var_38_object, var_39_float); // 0x5 NEW_2
	var_84_bool = var_37_bool == 0; // 0x7 Not
	if(var_84_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_85_int = 0; // 0xd PushV
	func_1288(var_85_int); // 0xe NEW_2
	SetNPCName(var_85_int); // 0x10 ObjFunc
	var_86_int = 0; // 0x12 PushV
	func_1286(var_86_int); // 0x13 NEW_2
	SetNPCDescription(var_86_int); // 0x15 ObjFunc
	var_87_string = ""; // 0x17 PushV
	func_1290(var_87_string); // 0x18 NEW_2
	SetPhoto(var_87_string); // 0x1a ObjFunc
	var_88_string = ""; // 0x1c PushV
	func_1292(var_88_string); // 0x1d NEW_2
	SetPhoto2(var_88_string); // 0x1f ObjFunc
	var_89_int = 0; // 0x21 PushV
	func_1269(var_89_int); // 0x22 NEW_2
	SetPlayerName(var_89_int); // 0x24 ObjFunc
	var_35_int = -1; // 0x26 MovI
	IsOverrideActive(var_34_bool); // 0x27 Func
	var_97_bool = var_34_bool; // 0x29 Push
	if(var_97_bool == 0) goto Label_45; // 0x2a JumpB
	var_26_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_33_object); // 0x2d Func
	var_98_bool = 0; var_99_object = Obj(); // 0x2f PushV
	var_100_object = Obj(); // 0x30 PushV
	func_1127(var_100_object); // 0x31 NEW_2
	var_99_object = var_100_object; // 0x32 Mov
	func_936(var_98_bool, var_99_object); // 0x34 NEW_2
	var_193_object = Obj(); var_194_object = Obj(); // 0x36 PushV
	var_193_object = var_27_object; // 0x37 Mov
	var_194_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_250_bool = var_36_bool == 0; // 0x3f Not
	if(var_250_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_251_object = Obj(); // 0x46 PushV
	var_251_object = var_27_object; // 0x47 Mov
	func_918(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_516(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x205 PushV
	var_27_object = var_25_object; // 0x206 Mov
	TaskCall(0); // 0x207 TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0x208 NEW_2
	TaskReturn(); // 0x209 TaskReturn
	return 0; // 0x20b Return
}


func_1286(var_86_int)
{
	var_86_int = 515543; // 0x506 MovI
	return 0; // 0x507 Return
}


func_1031(var_140_bool)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = ""; // 0x407 PushV
	var_152_string = "d"; // 0x408 PushS
	var_153_int = 0; // 0x409 PushV
	func_1160(var_153_int); // 0x40a NEW_2
	var_159_int = var_152_string + var_153_int; // 0x40c Add
	var_160_string = "m"; // 0x40d PushS
	var_147_string = var_159_int + var_160_string; // 0x40e Add2
	var_148_int = 0; // 0x40f MovI
	
Label_1040:
	var_161_int = 1; // 0x410 PushI
	if(var_161_int == 0) goto Label_1053; // 0x411 JumpB
	var_162_int = 1; // 0x412 PushI
	var_163_int = var_148_int + var_162_int; // 0x413 Add
	var_164_int = var_147_string + var_163_int; // 0x414 Add
	HasProperty(var_164_int, var_149_bool); // 0x415 ObjFunc
	var_165_bool = var_149_bool == 0; // 0x417 Not
	if(var_165_bool == 0) goto Label_1050; // 0x418 JumpB
	goto Label_1053; // 0x419 Jump
	
Label_1053:
	var_166_bool = var_148_int == 0; // 0x41d Not
	if(var_166_bool == 0) goto Label_1057; // 0x41e JumpB
	var_140_bool = 0; // 0x41f MovB
	return 10; // 0x420 Return
	
Label_1057:
	var_150_int = 0; // 0x421 MovI
	var_167_int = 1; // 0x422 PushI
	var_168_bool = var_148_int > var_167_int; // 0x423 GT
	if(var_168_bool == 0) goto Label_1063; // 0x424 JumpB
	irand(var_150_int, var_148_int); // 0x425 Func
	
Label_1063:
	var_169_int = 1; // 0x427 PushI
	var_170_int = var_150_int + var_169_int; // 0x428 Add
	var_171_int = var_147_string + var_170_int; // 0x429 Add
	GetProperty(var_171_int, var_151_string); // 0x42a ObjFunc
	var_172_bool = 0; var_173_string = ""; // 0x42c PushV
	var_173_string = var_151_string; // 0x42d Mov
	func_1105(var_172_bool, var_173_string); // 0x42e NEW_2
	var_140_bool = var_172_bool; // 0x42f Mov
	return 10; // 0x431 Return
	
Label_1050:
	var_174_int = 1; // 0x41a PushI
	var_148_int = var_148_int + var_174_int; // 0x41b Add2
	goto Label_1040; // 0x41c Jump
}


func_1288(var_85_int)
{
	var_85_int = 502868; // 0x508 MovI
	return 0; // 0x509 Return
}


func_1160(var_153_int)
{
	var_154_float = 0; var_155_float = 0; // 0x488 PushV
	GetGameTime(var_155_float); // 0x489 Func
	var_156_int = 1; // 0x48b PushI
	var_157_int = 0; // 0x48c PushV
	var_158_int = 24; // 0x48d PushI
	var_157_int = var_155_float / var_155_float; // 0x48e Div2
	var_153_int = var_156_int + var_157_int; // 0x48f Add2
	return 2; // 0x490 Return
}


func_1290(var_87_string)
{
	var_87_string = "ui/NPC_Maria.png"; // 0x50a MovS
	return 0; // 0x50b Return
}


func_1292(var_88_string)
{
	var_88_string = "ui/NPC_Maria_b.png"; // 0x50c MovS
	return 0; // 0x50d Return
}


func_1294(var_80_bool)
{
	var_80_bool = 1; // 0x50e MovB
	return 0; // 0x50f Return
}


func_144(var_2_object, var_200_string)
{
	var_201_bool = 0; // 0x91 PushV
	func_1294(var_201_bool); // 0x92 NEW_2
	var_202_bool = var_201_bool == 0; // 0x94 Not
	if(var_202_bool == 0) goto Label_151; // 0x95 JumpB
	return 0; // 0x96 Return
	
Label_151:
	var_203_bool = var_200_string == var_2_object; // 0x97 Eq
	if(var_203_bool == 0) goto Label_154; // 0x98 JumpB
	return 0; // 0x99 Return
	
Label_154:
	var_204_string = ""; var_205_bool = 0; // 0x9a PushV
	var_204_string = var_200_string; // 0x9b Mov
	var_206_string = ""; // 0x9c PushS
	var_207_bool = var_200_string == var_206_string; // 0x9d Eq
	if(var_207_bool == 0) goto Label_161; // 0x9e JumpB
	var_205_bool = 0; // 0x9f MovB
	goto Label_162; // 0xa0 Jump
	
Label_162:
	func_1090(var_204_string, var_205_bool); // 0xa2 NEW_2
	var_2_object = var_200_string; // 0xa4 TMov
	return 0; // 0xa5 Return
	
Label_161:
	var_205_bool = 1; // 0xa1 MovB
}


func_1169(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x491 PushV
	var_34_string = "idle"; // 0x492 MovS
	var_35_int = var_32_int; // 0x493 Push
	if(var_35_int == 0) goto Label_1174; // 0x494 JumpB
	var_34_string = var_34_string + var_32_int; // 0x495 Add2
	
Label_1174:
	var_31_string = var_34_string; // 0x496 Mov
	return 2; // 0x497 Return
}


func_918()
{
	var_252_bool = 0; var_253_bool = 0; // 0x396 PushV
	var_254_bool = 1; // 0x397 PushB
	CameraSwitchToNormal(var_254_bool); // 0x398 Func
	var_255_bool = 0; // 0x39a PushV
	func_1294(var_255_bool); // 0x39b NEW_2
	if(var_255_bool == 0) goto Label_927; // 0x39d JumpB
	goto Label_935; // 0x39e Jump
	
Label_935:
	return 2; // 0x3a7 Return
	
Label_927:
	var_256_string = "head"; // 0x39f PushS
	HasAnimationTrack(var_253_bool, var_256_string); // 0x3a0 Func
	var_257_bool = var_253_bool; // 0x3a2 Push
	if(var_257_bool == 0) goto Label_935; // 0x3a3 JumpB
	var_258_string = "head"; // 0x3a4 PushS
	UnlookAsync(var_258_string); // 0x3a5 Func
}


func_1176(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x498 PushV
	var_28_int = 0; // 0x499 MovI
	
Label_1178:
	var_30_string = "all"; // 0x49a PushS
	var_31_string = ""; var_32_int = 0; // 0x49b PushV
	var_32_int = var_28_int; // 0x49c Mov
	func_1169(var_31_string, var_32_int); // 0x49d NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x49f Func
	var_36_bool = var_29_bool == 0; // 0x4a1 Not
	if(var_36_bool == 0) goto Label_1188; // 0x4a2 JumpB
	goto Label_1191; // 0x4a3 Jump
	
Label_1191:
	var_25_int = var_28_int; // 0x4a7 Mov
	return 4; // 0x4a8 Return
	
Label_1188:
	var_37_int = 1; // 0x4a4 PushI
	var_28_int = var_28_int + var_37_int; // 0x4a5 Add2
	goto Label_1178; // 0x4a6 Jump
}


func_672()
{
	func_812(); // 0x2a1 NEW_2
	func_630(); // 0x2a4 NEW_2
	lshStopSpeech(); // 0x2a6 Func
	lshStopAnimation(); // 0x2a8 Func
	StopAsync(); // 0x2aa Func
	Hold(); // 0x2ac Func
	return 0; // 0x2ae Return
}


func_936(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0; // 0x3a8 PushV
	var_107_string = "voice_common"; // 0x3a9 PushS
	GetVariable(var_107_string, var_105_int); // 0x3aa Func
	var_108_int = var_105_int; // 0x3ac Push
	if(var_108_int == 0) goto Label_974; // 0x3ad JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x3ae PushV
	var_110_object = var_99_object; // 0x3af Mov
	func_994(var_110_object); // 0x3b0 NEW_2
	var_139_bool = var_109_bool == 0; // 0x3b2 Not
	if(var_139_bool == 0) goto Label_956; // 0x3b3 JumpB
	var_140_bool = 0; var_141_object = Obj(); // 0x3b4 PushV
	var_141_object = var_99_object; // 0x3b5 Mov
	func_1031(var_141_object); // 0x3b6 NEW_2
	var_175_bool = var_140_bool == 0; // 0x3b8 Not
	if(var_175_bool == 0) goto Label_956; // 0x3b9 JumpB
	var_98_bool = 0; // 0x3ba MovB
	return 4; // 0x3bb Return
	
Label_956:
	var_176_int = 2; // 0x3bc PushI
	irand(var_106_int, var_176_int); // 0x3bd Func
	var_177_int = var_106_int; // 0x3bf Push
	if(var_177_int == 0) goto Label_969; // 0x3c0 JumpB
	var_178_string = "voice_common"; // 0x3c1 PushS
	var_179_int = 1; // 0x3c2 PushI
	var_180_int = var_105_int + var_179_int; // 0x3c3 Add
	var_181_int = 3; // 0x3c4 PushI
	var_182_int = var_180_int / var_181_int; // 0x3c5 Mod
	SetVariable(var_178_string, var_182_int); // 0x3c6 Func
	goto Label_973; // 0x3c8 Jump
	
Label_973:
	goto Label_992; // 0x3cd Jump
	
Label_992:
	var_98_bool = 1; // 0x3e0 MovB
	return 4; // 0x3e1 Return
	
Label_969:
	var_183_string = "voice_common"; // 0x3c9 PushS
	var_184_int = 0; // 0x3ca PushI
	SetVariable(var_183_string, var_184_int); // 0x3cb Func
	
Label_974:
	var_185_bool = 0; var_186_object = Obj(); // 0x3ce PushV
	var_186_object = var_99_object; // 0x3cf Mov
	func_1031(var_186_object); // 0x3d0 NEW_2
	var_187_bool = var_185_bool == 0; // 0x3d2 Not
	if(var_187_bool == 0) goto Label_988; // 0x3d3 JumpB
	var_188_bool = 0; var_189_object = Obj(); // 0x3d4 PushV
	var_189_object = var_99_object; // 0x3d5 Mov
	func_994(var_189_object); // 0x3d6 NEW_2
	var_190_bool = var_188_bool == 0; // 0x3d8 Not
	if(var_190_bool == 0) goto Label_988; // 0x3d9 JumpB
	var_98_bool = 0; // 0x3da MovB
	return 4; // 0x3db Return
	
Label_988:
	var_191_string = "voice_common"; // 0x3dc PushS
	var_192_int = 1; // 0x3dd PushI
	SetVariable(var_191_string, var_192_int); // 0x3de Func
}


func_1193()
{
	func_1215(); // 0x4ab NEW_2
	var_38_bool = 0; var_39_string = ""; var_40_string = ""; // 0x4ad PushV
	var_39_string = "quest_d11_06"; // 0x4ae MovS
	var_40_string = "completed"; // 0x4af MovS
	func_1148(var_38_bool, var_39_string, var_40_string); // 0x4b0 NEW_2
	return 0; // 0x4b2 Return
}


func_810(var_45_bool)
{
	var_45_bool = 1; // 0x32a MovB
	return 0; // 0x32b Return
}


func_812()
{
	StopAnimation(); // 0x32c Func
	StopGroup0(); // 0x32e Func
	return 0; // 0x330 Return
}


func_687()
{
	StopGroup0(); // 0x2af Func
	func_630(); // 0x2b2 NEW_2
	var_8_string = ""; // 0x2b4 PushV
	var_8_string = "Neutral"; // 0x2b5 MovS
	func_1074(var_8_string); // 0x2b6 NEW_2
	func_621(); // 0x2b9 NEW_2
	return 0; // 0x2bb Return
}


func_817(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x331 PushV
	GetPosition(var_27_cvector); // 0x332 Func
	GetPosition(var_28_cvector); // 0x334 ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x336 Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x337 Or2
	return 6; // 0x338 Return
}


func_1074(var_234_string)
{
	var_235_bool = 0; var_236_float = 0; var_237_float = 0; var_238_bool = 0; var_239_float = 0; var_240_float = 0; // 0x432 PushV
	lshHasAnimation(var_238_bool, var_234_string); // 0x433 Func
	var_241_bool = var_238_bool; // 0x435 Push
	if(var_241_bool == 0) goto Label_1085; // 0x436 JumpB
	lshGetAnimTimes(var_234_string, var_239_float, var_240_float); // 0x437 Func
	var_242_bool = 0; // 0x439 PushB
	lshPlayAnimation(var_239_float, var_240_float, var_242_bool); // 0x43a Func
	goto Label_1089; // 0x43c Jump
	
Label_1089:
	return 6; // 0x441 Return
	
Label_1085:
	var_243_string = "Can't find lsh animation : "; // 0x43d PushS
	var_244_int = var_243_string + var_234_string; // 0x43e Add
	Trace(var_244_int); // 0x43f Func
}


func_1203(var_218_bool)
{
	var_220_int = 0; var_221_string = ""; // 0x4b4 PushV
	var_221_string = "d11q06"; // 0x4b5 MovS
	func_1143(var_220_int, var_221_string); // 0x4b6 NEW_2
	var_224_int = 3; // 0x4b8 PushI
	var_225_bool = var_220_int == var_224_int; // 0x4b9 Eq
	if(var_225_bool == 0) goto Label_1213; // 0x4ba JumpB
	var_218_bool = 1; // 0x4bb MovB
	return 0; // 0x4bc Return
	
Label_1213:
	var_218_bool = 0; // 0x4bd MovB
	return 0; // 0x4be Return
}


func_565(var_0_object)
{
	var_7_bool = 0; // 0x235 PushV
	func_844(var_7_bool); // 0x236 NEW_2
	var_10_bool = var_7_bool == 0; // 0x238 Not
	if(var_10_bool == 0) goto Label_572; // 0x239 JumpB
	Hold(); // 0x23a Func
	
Label_572:
	GetDirection(var_0_object); // 0x23c Func
	
Label_574:
	func_741(); // 0x23f NEW_2
	goto Label_574; // 0x241 Jump
}


func_825(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x339 PushV
	GetPosition(var_20_cvector); // 0x33a Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x33c Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x33d PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x33e PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x33f Func
	var_15_bool = var_22_bool; // 0x341 Mov
	return 6; // 0x342 Return
}


func_1215()
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x4bf PushV
	var_17_int = 692; // 0x4c0 PushI
	var_18_int = 2; // 0x4c1 PushI
	var_19_int = 534540; // 0x4c2 PushI
	CreateDiaryEntry(var_16_object, var_17_int, var_18_int, var_19_int); // 0x4c3 Func
	var_20_bool = 0; var_21_object = Obj(); var_22_int = 0; // 0x4c5 PushV
	var_21_object = var_16_object; // 0x4c6 Mov
	var_22_int = 686; // 0x4c7 MovI
	func_1241(var_20_bool, var_21_object, var_22_int); // 0x4c8 NEW_2
	return 2; // 0x4ca Return
}


func_1090(var_204_string, var_205_bool)
{
	var_208_bool = 0; var_209_float = 0; var_210_float = 0; var_211_bool = 0; var_212_float = 0; var_213_float = 0; // 0x442 PushV
	lshHasAnimation(var_211_bool, var_204_string); // 0x443 Func
	var_214_bool = var_211_bool; // 0x445 Push
	if(var_214_bool == 0) goto Label_1100; // 0x446 JumpB
	lshGetAnimTimes(var_204_string, var_212_float, var_213_float); // 0x447 Func
	lshPlayAnimation(var_212_float, var_213_float, var_205_bool); // 0x449 Func
	goto Label_1104; // 0x44b Jump
	
Label_1104:
	return 6; // 0x450 Return
	
Label_1100:
	var_215_string = "Can't find lsh animation : "; // 0x44c PushS
	var_216_int = var_215_string + var_204_string; // 0x44d Add
	Trace(var_216_int); // 0x44e Func
}


func_835(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x343 PushV
	GetPosition(var_14_cvector); // 0x344 ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x346 PushV
	var_16_cvector = var_14_cvector; // 0x347 Mov
	func_825(var_15_bool, var_16_cvector); // 0x348 NEW_2
	var_11_bool = var_15_bool; // 0x349 Mov
	return 2; // 0x34b Return
}


func_579(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x243 PushV
	var_35_string = "player"; // 0x244 PushS
	FindActor(var_34_object, var_35_string); // 0x245 Func
	var_36_bool = var_34_object == 0; // 0x247 Not
	if(var_36_bool == 0) goto Label_587; // 0x248 JumpB
	var_32_bool = 0; // 0x249 MovB
	return 2; // 0x24a Return
	
Label_587:
	var_37_bool = 0; var_38_object = Obj(); // 0x24b PushV
	var_38_object = var_34_object; // 0x24c Mov
	func_835(var_38_object); // 0x24d NEW_2
	var_32_bool = var_37_bool; // 0x24e Mov
	return 2; // 0x250 Return
}


func_844(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x34c PushV
	IsLoaded(var_9_bool); // 0x34d Func
	var_7_bool = var_9_bool; // 0x34f Mov
	return 2; // 0x350 Return
}


func_1228(var_29_object)
{
	var_30_object = Obj(); var_31_object = Obj(); // 0x4cc PushV
	GetDiaryRoot(var_31_object); // 0x4cd Func
	var_32_bool = var_31_object == 0; // 0x4cf Not
	if(var_32_bool == 0) goto Label_1238; // 0x4d0 JumpB
	var_33_string = "Can't retrieve diary root"; // 0x4d1 PushS
	Trace(var_33_string); // 0x4d2 Func
	var_29_object = 0; // 0x4d4 MovB
	return 2; // 0x4d5 Return
	
Label_1238:
	var_29_object = var_31_object; // 0x4d6 Mov
	return 2; // 0x4d7 Return
}


func_849(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x351 PushV
	GetPosition(var_50_cvector); // 0x352 ObjFunc
	GetEyesHeight(var_49_float); // 0x354 ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x356 PushE
	var_58_float = var_58_float + var_49_float; // 0x357 Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x358 PopE
	GetPosition(var_51_cvector); // 0x359 Func
	GetEyesHeight(var_49_float); // 0x35b Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x35d PushE
	var_59_float = var_59_float + var_49_float; // 0x35e Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x35f PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x360 Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x361 PushE
	var_60_float = 0; // 0x362 MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x363 PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x364 Or
	var_62_float = sqrt(var_61_int); // 0x365 Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x366 Div2
	var_53_cvector = -var_52_cvector; // 0x367 Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x368 Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x369 PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x36a PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x36b Xor2
	func_1133(var_64_cvector, var_65_cvector); // 0x36c NEW_2
	var_72_int = 25; // 0x36e PushI
	var_73_float = var_64_cvector * var_72_int; // 0x36f Mult
	var_74_int = var_63_float + var_73_float; // 0x370 Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x371 PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x372 Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x373 Add2
	IsOverrideActive(var_56_bool); // 0x374 Func
	var_76_bool = var_56_bool; // 0x376 Push
	if(var_76_bool == 0) goto Label_890; // 0x377 JumpB
	var_37_bool = 0; // 0x378 MovB
	return 18; // 0x379 Return
	
Label_890:
	StopWorld(); // 0x37a Func
	var_77_bool = 1; // 0x37c PushB
	CameraTransit(var_55_cvector, var_53_cvector, var_77_bool); // 0x37d Func
	var_78_float = GetByIndex(var_54_cvector, 0); // 0x37f PushE
	var_79_float = GetByIndex(var_54_cvector, 2); // 0x380 PushE
	Rotate(var_78_float, var_79_float); // 0x381 Func
	var_80_bool = 0; // 0x383 PushV
	func_1294(var_80_bool); // 0x384 NEW_2
	if(var_80_bool == 0) goto Label_904; // 0x386 JumpB
	goto Label_912; // 0x387 Jump
	
Label_912:
	CameraWaitForPlayFinish(); // 0x390 Func
	ResumeWorld(); // 0x392 Func
	var_37_bool = 1; // 0x394 MovB
	return 18; // 0x395 Return
	
Label_904:
	var_81_string = "head"; // 0x388 PushS
	HasAnimationTrack(var_57_bool, var_81_string); // 0x389 Func
	var_82_bool = var_57_bool; // 0x38b Push
	if(var_82_bool == 0) goto Label_912; // 0x38c JumpB
	var_83_string = "head"; // 0x38d PushS
	LookAsyncCamera(var_83_string); // 0x38e Func
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object; // 0x52 TMov
	var_1_object = var_193_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_199_int = 1; // 0x55 PushI
	if(var_199_int == 0) goto Label_114; // 0x56 JumpB
	var_200_string = ""; // 0x57 PushV
	var_200_string = "Staring"; // 0x58 MovS
	func_144(var_194_object, var_200_string); // 0x59 NEW_2
	var_217_int = 534532; // 0x5b PushI
	SetMessage(var_217_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_218_bool = 0; var_219_object = Obj(); // 0x60 PushV
	var_219_object = var_1_object; // 0x61 MovT
	func_1203(var_219_object); // 0x62 NEW_2
	if(var_218_bool == 0) goto Label_106; // 0x64 JumpB
	var_226_int = 539632; // 0x65 PushI
	var_227_int = 41601; // 0x66 PushI
	var_228_int = 41578; // 0x67 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x68 TObjFunc
	
Label_106:
	var_229_int = 534533; // 0x6a PushI
	var_230_int = -1; // 0x6b PushI
	var_231_int = 36174; // 0x6c PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x6d TObjFunc
	goto Label_114; // 0x6f Jump
	
Label_114:
	var_232_bool = 0; // 0x72 PushV
	func_1294(var_232_bool); // 0x73 NEW_2
	if(var_232_bool == 0) goto Label_129; // 0x75 JumpB
	
Label_118:
	lshWaitForAnimEnd(); // 0x76 Func
	var_233_string = var_3_string; // 0x78 PushT
	if(var_233_string == 0) goto Label_123; // 0x79 JumpB
	goto Label_128; // 0x7a Jump
	
Label_128:
	goto Label_143; // 0x80 Jump
	
Label_143:
	return 0; // 0x8f Return
	
Label_123:
	var_234_string = ""; // 0x7b PushV
	var_234_string = var_2_object; // 0x7c MovT
	func_1074(var_234_string); // 0x7d NEW_2
	goto Label_118; // 0x7f Jump
	
Label_129:
	var_245_string = "all"; // 0x81 PushS
	var_246_string = "idle"; // 0x82 PushS
	PlayAnimation(var_245_string, var_246_string); // 0x83 Func
	
Label_133:
	WaitForAnimEnd(); // 0x85 Func
	var_247_string = var_3_string; // 0x87 PushT
	if(var_247_string == 0) goto Label_138; // 0x88 JumpB
	goto Label_143; // 0x89 Jump
	
Label_138:
	var_248_string = "all"; // 0x8a PushS
	var_249_string = "idle"; // 0x8b PushS
	PlayAnimation(var_248_string, var_249_string); // 0x8c Func
	goto Label_133; // 0x8e Jump
}


func_594(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x252 PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x253 PushE
	RotateAsync(var_84_float, var_85_float); // 0x254 Func
	return 0; // 0x256 Return
}


func_1105(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0; // 0x451 PushV
	var_136_bool = 0; // 0x452 PushV
	func_1294(var_136_bool); // 0x453 NEW_2
	if(var_136_bool == 0) goto Label_1118; // 0x455 JumpB
	lshHasSpeech(var_135_bool, var_133_string); // 0x456 Func
	var_137_bool = var_135_bool; // 0x458 Push
	if(var_137_bool == 0) goto Label_1118; // 0x459 JumpB
	lshPlaySpeech(var_133_string); // 0x45a Func
	var_132_bool = 1; // 0x45c MovB
	return 2; // 0x45d Return
	
Label_1118:
	var_132_bool = 0; // 0x45e MovB
	return 2; // 0x45f Return
}


func_599(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x257 PushV
	var_20_string = "player"; // 0x258 PushS
	FindActor(var_18_object, var_20_string); // 0x259 Func
	var_21_bool = var_18_object == 0; // 0x25b Not
	if(var_21_bool == 0) goto Label_607; // 0x25c JumpB
	var_15_bool = 0; // 0x25d MovB
	return 4; // 0x25e Return
	
Label_607:
	var_22_float = 0; var_23_object = Obj(); // 0x25f PushV
	var_23_object = var_18_object; // 0x260 Mov
	func_817(var_23_object); // 0x261 NEW_2
	var_30_float = 90000.0; // 0x263 PushF
	var_31_bool = var_22_float > var_30_float; // 0x264 GT
	if(var_31_bool == 0) goto Label_616; // 0x265 JumpB
	var_15_bool = 0; // 0x266 MovB
	return 4; // 0x267 Return
	
Label_616:
	CanSee(var_19_bool, var_18_object); // 0x268 Func
	var_15_bool = var_19_bool; // 0x26a Mov
	return 4; // 0x26b Return
}


func_1241(var_20_bool, var_21_object, var_22_int)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_int = 0; var_26_object = Obj(); var_27_object = Obj(); var_28_int = 0; // 0x4d9 PushV
	var_29_object = Obj(); // 0x4da PushV
	func_1228(var_29_object); // 0x4db NEW_2
	var_26_object = var_29_object; // 0x4dc Mov
	Find(var_22_int, var_27_object); // 0x4de ObjFunc
	var_34_bool = var_27_object == 0; // 0x4e0 Not
	if(var_34_bool == 0) goto Label_1256; // 0x4e1 JumpB
	var_35_string = "Can't find diary parent with id: "; // 0x4e2 PushS
	var_36_int = var_35_string + var_22_int; // 0x4e3 Add
	Trace(var_36_int); // 0x4e4 Func
	var_20_bool = 0; // 0x4e6 MovB
	return 6; // 0x4e7 Return
	
Label_1256:
	AddChild(var_21_object); // 0x4e8 ObjFunc
	var_37_int = 7; // 0x4ea PushI
	SendWorldWndMessage(var_37_int); // 0x4eb Func
	GetCategory(var_28_int); // 0x4ed ObjFunc
	SetDiarySection(var_28_int); // 0x4ef Func
	var_20_bool = 0; // 0x4f1 MovB
	return 6; // 0x4f2 Return
}


func_1120()
{
	var_10_bool = 0; // 0x460 PushV
	func_1294(var_10_bool); // 0x461 NEW_2
	if(var_10_bool == 0) goto Label_1126; // 0x463 JumpB
	lshStopSpeech(); // 0x464 Func
	
Label_1126:
	return 0; // 0x466 Return
}


func_994(var_109_bool)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = ""; // 0x3e2 PushV
	var_116_string = "c"; // 0x3e3 MovS
	var_117_int = 0; // 0x3e4 MovI
	
Label_997:
	var_121_int = 1; // 0x3e5 PushI
	if(var_121_int == 0) goto Label_1010; // 0x3e6 JumpB
	var_122_int = 1; // 0x3e7 PushI
	var_123_int = var_117_int + var_122_int; // 0x3e8 Add
	var_124_int = var_116_string + var_123_int; // 0x3e9 Add
	HasProperty(var_124_int, var_118_bool); // 0x3ea ObjFunc
	var_125_bool = var_118_bool == 0; // 0x3ec Not
	if(var_125_bool == 0) goto Label_1007; // 0x3ed JumpB
	goto Label_1010; // 0x3ee Jump
	
Label_1010:
	var_126_bool = var_117_int == 0; // 0x3f2 Not
	if(var_126_bool == 0) goto Label_1014; // 0x3f3 JumpB
	var_109_bool = 0; // 0x3f4 MovB
	return 10; // 0x3f5 Return
	
Label_1014:
	var_119_int = 0; // 0x3f6 MovI
	var_127_int = 1; // 0x3f7 PushI
	var_128_bool = var_117_int > var_127_int; // 0x3f8 GT
	if(var_128_bool == 0) goto Label_1020; // 0x3f9 JumpB
	irand(var_119_int, var_117_int); // 0x3fa Func
	
Label_1020:
	var_129_int = 1; // 0x3fc PushI
	var_130_int = var_119_int + var_129_int; // 0x3fd Add
	var_131_int = var_116_string + var_130_int; // 0x3fe Add
	GetProperty(var_131_int, var_120_string); // 0x3ff ObjFunc
	var_132_bool = 0; var_133_string = ""; // 0x401 PushV
	var_133_string = var_120_string; // 0x402 Mov
	func_1105(var_132_bool, var_133_string); // 0x403 NEW_2
	var_109_bool = var_132_bool; // 0x404 Mov
	return 10; // 0x406 Return
	
Label_1007:
	var_138_int = 1; // 0x3ef PushI
	var_117_int = var_117_int + var_138_int; // 0x3f0 Add2
	goto Label_997; // 0x3f1 Jump
}


func_741()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; // 0x2e5 PushV
	WaitForAnimEnd(); // 0x2e6 Func
	var_23_bool = 0; // 0x2e8 PushV
	func_844(var_23_bool); // 0x2e9 NEW_2
	var_24_bool = var_23_bool == 0; // 0x2eb Not
	if(var_24_bool == 0) goto Label_750; // 0x2ec JumpB
	return 12; // 0x2ed Return
	
Label_750:
	var_25_int = 0; // 0x2ee PushV
	func_1176(var_25_int); // 0x2ef NEW_2
	var_17_int = var_25_int; // 0x2f0 Mov
	var_18_int = 0; // 0x2f2 MovI
	
Label_755:
	var_38_bool = 0; // 0x2f3 PushV
	var_38_bool = 0; // 0x2f4 MovB
	var_39_int = 5; // 0x2f5 PushI
	var_40_bool = var_18_int < var_39_int; // 0x2f6 LT
	if(var_40_bool == 0) goto Label_765; // 0x2f7 JumpB
	var_41_bool = 0; // 0x2f8 PushV
	func_844(var_41_bool); // 0x2f9 NEW_2
	if(var_41_bool == 0) goto Label_765; // 0x2fb JumpB
	var_38_bool = 1; // 0x2fc MovB
	
Label_765:
	if(var_38_bool == 0) goto Label_807; // 0x2fd JumpB
	var_42_bool = var_17_int == 0; // 0x2fe Not
	if(var_42_bool == 0) goto Label_775; // 0x2ff JumpB
	var_43_int = 3; // 0x300 PushI
	Sleep(var_43_int, var_19_bool); // 0x301 Func
	var_44_bool = var_19_bool == 0; // 0x303 Not
	if(var_44_bool == 0) goto Label_774; // 0x304 JumpB
	goto Label_807; // 0x305 Jump
	
Label_807:
	ResetAAS(); // 0x327 Func
	return 12; // 0x329 Return
	
Label_774:
	goto Label_796; // 0x306 Jump
	
Label_796:
	var_45_bool = 0; // 0x31c PushV
	func_810(var_45_bool); // 0x31d NEW_2
	var_46_bool = var_45_bool == 0; // 0x31f Not
	if(var_46_bool == 0) goto Label_802; // 0x320 JumpB
	goto Label_807; // 0x321 Jump
	
Label_802:
	ResetAAS(); // 0x322 Func
	var_47_int = 1; // 0x324 PushI
	var_18_int = var_18_int + var_47_int; // 0x325 Add2
	goto Label_755; // 0x326 Jump
	
Label_775:
	irand(var_20_int, var_17_int); // 0x307 Func
	var_48_int = 5; // 0x309 PushI
	irand(var_21_int, var_48_int); // 0x30a Func
	var_49_int = 0; // 0x30c PushI
	var_50_bool = var_21_int != var_49_int; // 0x30d Neq
	if(var_50_bool == 0) goto Label_784; // 0x30e JumpB
	var_20_int = 0; // 0x30f MovI
	
Label_784:
	var_51_string = "all"; // 0x310 PushS
	var_52_string = ""; var_53_int = 0; // 0x311 PushV
	var_53_int = var_20_int; // 0x312 Mov
	func_1169(var_52_string, var_53_int); // 0x313 NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x315 Func
	WaitForAnimEnd(var_22_bool); // 0x317 Func
	var_54_bool = var_22_bool == 0; // 0x319 Not
	if(var_54_bool == 0) goto Label_796; // 0x31a JumpB
	goto Label_807; // 0x31b Jump
}


func_1127(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x467 PushV
	self(var_102_object); // 0x468 Func
	var_100_object = var_102_object; // 0x46a Mov
	return 2; // 0x46b Return
}


func_621()
{
	var_261_float = 0; var_262_float = 0; // 0x26d PushV
	var_263_int = 8; // 0x26e PushI
	var_264_int = 16; // 0x26f PushI
	rand(var_262_float, var_263_int, var_264_int); // 0x270 Func
	var_265_int = 10; // 0x272 PushI
	SetTimer(var_265_int, var_262_float); // 0x273 Func
	return 2; // 0x275 Return
}


func_1133(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x46d PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x46e Or
	var_68_float = sqrt(var_69_int); // 0x46f Sqrt2
	var_70_float = 0.0; // 0x470 PushF
	var_71_bool = var_68_float < var_70_float; // 0x471 LT
	if(var_71_bool == 0) goto Label_1141; // 0x472 JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x473 MovV
	return 2; // 0x474 Return
	
Label_1141:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x475 Div2
	return 2; // 0x476 Return
}


func_1269(var_89_int)
{
	var_90_int = 0; var_91_int = 0; // 0x4f5 PushV
	var_92_string = "branch"; // 0x4f6 PushS
	GetVariable(var_92_string, var_91_int); // 0x4f7 Func
	var_93_int = 0; // 0x4f9 PushI
	var_94_bool = var_91_int == var_93_int; // 0x4fa Eq
	if(var_94_bool == 0) goto Label_1279; // 0x4fb JumpB
	var_89_int = 1; // 0x4fc MovI
	return 2; // 0x4fd Return
	
Label_1279:
	var_95_int = 1; // 0x4ff PushI
	var_96_bool = var_91_int == var_95_int; // 0x500 Eq
	if(var_96_bool == 0) goto Label_1284; // 0x501 JumpB
	var_89_int = 2; // 0x502 MovI
	return 2; // 0x503 Return
	
Label_1284:
	var_89_int = 3; // 0x504 MovI
	return 2; // 0x505 Return
}


func_630()
{
	var_260_int = 10; // 0x276 PushI
	KillTimer(var_260_int); // 0x277 Func
	return 0; // 0x279 Return
}


func_1143(var_220_int, var_221_string)
{
	var_222_int = 0; var_223_int = 0; // 0x477 PushV
	GetVariable(var_221_string, var_223_int); // 0x478 Func
	var_220_int = var_223_int; // 0x47a Mov
	return 2; // 0x47b Return
}


func_1148(var_38_bool, var_39_string, var_40_string)
{
	var_41_object = Obj(); var_42_object = Obj(); // 0x47c PushV
	FindActor(var_42_object, var_39_string); // 0x47d Func
	var_43_bool = var_42_object == 0; // 0x47f NullEq
	if(var_43_bool == 0) goto Label_1155; // 0x480 JumpB
	var_38_bool = 0; // 0x481 MovB
	return 2; // 0x482 Return
	
Label_1155:
	Trigger(var_42_object, var_40_string); // 0x483 Func
	var_38_bool = 1; // 0x485 MovB
	return 2; // 0x486 Return
}


