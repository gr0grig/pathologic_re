task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0xa7 PushI
	if(var_48_int == 0) goto Label_440; // 0xa8 JumpB
	func_6621(); // 0xaa NEW_2
	var_50_int = 35708; // 0xac PushI
	var_51_bool = var_47_cvector == var_50_int; // 0xad Eq
	if(var_51_bool == 0) goto Label_185; // 0xae JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0xaf PushV
	var_52_object = var_1_object; // 0xb0 MovT
	var_53_object = var_0_object; // 0xb1 MovT
	func_6885(); // 0xb2 NEW_2
	var_95_object = Obj(); var_96_object = Obj(); // 0xb4 PushV
	var_95_object = var_1_object; // 0xb5 MovT
	var_96_object = var_0_object; // 0xb6 MovT
	func_6767(); // 0xb7 NEW_2
	
Label_185:
	var_121_int = 35709; // 0xb9 PushI
	var_122_bool = var_47_cvector == var_121_int; // 0xba Eq
	if(var_122_bool == 0) goto Label_198; // 0xbb JumpB
	var_123_object = Obj(); var_124_object = Obj(); // 0xbc PushV
	var_123_object = var_1_object; // 0xbd MovT
	var_124_object = var_0_object; // 0xbe MovT
	func_6885(); // 0xbf NEW_2
	var_125_object = Obj(); var_126_object = Obj(); // 0xc1 PushV
	var_125_object = var_1_object; // 0xc2 MovT
	var_126_object = var_0_object; // 0xc3 MovT
	func_6767(); // 0xc4 NEW_2
	
Label_198:
	var_127_int = 35702; // 0xc6 PushI
	var_128_bool = var_46_bool == var_127_int; // 0xc7 Eq
	if(var_128_bool == 0) goto Label_226; // 0xc8 JumpB
	var_129_string = ""; // 0xc9 PushV
	var_129_string = "Neutral"; // 0xca MovS
	func_144(var_47_cvector, var_129_string); // 0xcb NEW_2
	var_146_int = 534109; // 0xcd PushI
	SetMessage(var_146_int); // 0xce TObjFunc
	ClearReplies(); // 0xd0 TObjFunc
	var_147_bool = 0; var_148_object = Obj(); // 0xd2 PushV
	var_148_object = var_1_object; // 0xd3 MovT
	func_7165(var_148_object); // 0xd4 NEW_2
	if(var_147_bool == 0) goto Label_220; // 0xd6 JumpB
	var_155_int = 534110; // 0xd7 PushI
	var_156_int = 38263; // 0xd8 PushI
	var_157_int = 35703; // 0xd9 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0xda TObjFunc
	
Label_220:
	var_158_int = 534111; // 0xdc PushI
	var_159_int = -1; // 0xdd PushI
	var_160_int = 35704; // 0xde PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0xdf TObjFunc
	return 0; // 0xe1 Return
	
Label_226:
	var_161_int = 38263; // 0xe2 PushI
	var_162_bool = var_46_bool == var_161_int; // 0xe3 Eq
	if(var_162_bool == 0) goto Label_249; // 0xe4 JumpB
	var_163_string = ""; // 0xe5 PushV
	var_163_string = "Grin"; // 0xe6 MovS
	func_144(var_47_cvector, var_163_string); // 0xe7 NEW_2
	var_164_int = 536470; // 0xe9 PushI
	SetMessage(var_164_int); // 0xea TObjFunc
	ClearReplies(); // 0xec TObjFunc
	var_165_int = 536471; // 0xee PushI
	var_166_int = 38265; // 0xef PushI
	var_167_int = 38264; // 0xf0 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0xf1 TObjFunc
	var_168_int = 536477; // 0xf3 PushI
	var_169_int = 38271; // 0xf4 PushI
	var_170_int = 38270; // 0xf5 PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0xf6 TObjFunc
	return 0; // 0xf8 Return
	
Label_249:
	var_171_int = 38271; // 0xf9 PushI
	var_172_bool = var_46_bool == var_171_int; // 0xfa Eq
	if(var_172_bool == 0) goto Label_272; // 0xfb JumpB
	var_173_string = ""; // 0xfc PushV
	var_173_string = "Neutral"; // 0xfd MovS
	func_144(var_47_cvector, var_173_string); // 0xfe NEW_2
	var_174_int = 536478; // 0x100 PushI
	SetMessage(var_174_int); // 0x101 TObjFunc
	ClearReplies(); // 0x103 TObjFunc
	var_175_int = 536481; // 0x105 PushI
	var_176_int = 38267; // 0x106 PushI
	var_177_int = 38274; // 0x107 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x108 TObjFunc
	var_178_int = 536480; // 0x10a PushI
	var_179_int = 35705; // 0x10b PushI
	var_180_int = 38273; // 0x10c PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x10d TObjFunc
	return 0; // 0x10f Return
	
Label_272:
	var_181_int = 38265; // 0x110 PushI
	var_182_bool = var_46_bool == var_181_int; // 0x111 Eq
	if(var_182_bool == 0) goto Label_295; // 0x112 JumpB
	var_183_string = ""; // 0x113 PushV
	var_183_string = "Jeer"; // 0x114 MovS
	func_144(var_47_cvector, var_183_string); // 0x115 NEW_2
	var_184_int = 536472; // 0x117 PushI
	SetMessage(var_184_int); // 0x118 TObjFunc
	ClearReplies(); // 0x11a TObjFunc
	var_185_int = 536473; // 0x11c PushI
	var_186_int = 38267; // 0x11d PushI
	var_187_int = 38266; // 0x11e PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x11f TObjFunc
	var_188_int = 536479; // 0x121 PushI
	var_189_int = 35705; // 0x122 PushI
	var_190_int = 38272; // 0x123 PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x124 TObjFunc
	return 0; // 0x126 Return
	
Label_295:
	var_191_int = 38267; // 0x127 PushI
	var_192_bool = var_46_bool == var_191_int; // 0x128 Eq
	if(var_192_bool == 0) goto Label_318; // 0x129 JumpB
	var_193_string = ""; // 0x12a PushV
	var_193_string = "Neutral"; // 0x12b MovS
	func_144(var_47_cvector, var_193_string); // 0x12c NEW_2
	var_194_int = 536474; // 0x12e PushI
	SetMessage(var_194_int); // 0x12f TObjFunc
	ClearReplies(); // 0x131 TObjFunc
	var_195_int = 536475; // 0x133 PushI
	var_196_int = 35705; // 0x134 PushI
	var_197_int = 38268; // 0x135 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x136 TObjFunc
	var_198_int = 536482; // 0x138 PushI
	var_199_int = 38279; // 0x139 PushI
	var_200_int = 38278; // 0x13a PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x13b TObjFunc
	return 0; // 0x13d Return
	
Label_318:
	var_201_int = 38279; // 0x13e PushI
	var_202_bool = var_46_bool == var_201_int; // 0x13f Eq
	if(var_202_bool == 0) goto Label_341; // 0x140 JumpB
	var_203_string = ""; // 0x141 PushV
	var_203_string = "Neutral"; // 0x142 MovS
	func_144(var_47_cvector, var_203_string); // 0x143 NEW_2
	var_204_int = 536483; // 0x145 PushI
	SetMessage(var_204_int); // 0x146 TObjFunc
	ClearReplies(); // 0x148 TObjFunc
	var_205_int = 536484; // 0x14a PushI
	var_206_int = 35705; // 0x14b PushI
	var_207_int = 38280; // 0x14c PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x14d TObjFunc
	var_208_int = 536485; // 0x14f PushI
	var_209_int = 35705; // 0x150 PushI
	var_210_int = 38281; // 0x151 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x152 TObjFunc
	return 0; // 0x154 Return
	
Label_341:
	var_211_int = 35705; // 0x155 PushI
	var_212_bool = var_46_bool == var_211_int; // 0x156 Eq
	if(var_212_bool == 0) goto Label_364; // 0x157 JumpB
	var_213_string = ""; // 0x158 PushV
	var_213_string = "Grin"; // 0x159 MovS
	func_144(var_47_cvector, var_213_string); // 0x15a NEW_2
	var_214_int = 534112; // 0x15c PushI
	SetMessage(var_214_int); // 0x15d TObjFunc
	ClearReplies(); // 0x15f TObjFunc
	var_215_int = 534445; // 0x161 PushI
	var_216_int = 38305; // 0x162 PushI
	var_217_int = 36078; // 0x163 PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x164 TObjFunc
	var_218_int = 536486; // 0x166 PushI
	var_219_int = 36079; // 0x167 PushI
	var_220_int = 38284; // 0x168 PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x169 TObjFunc
	return 0; // 0x16b Return
	
Label_364:
	var_221_int = 38305; // 0x16c PushI
	var_222_bool = var_46_bool == var_221_int; // 0x16d Eq
	if(var_222_bool == 0) goto Label_387; // 0x16e JumpB
	var_223_string = ""; // 0x16f PushV
	var_223_string = "Neutral"; // 0x170 MovS
	func_144(var_47_cvector, var_223_string); // 0x171 NEW_2
	var_224_int = 536505; // 0x173 PushI
	SetMessage(var_224_int); // 0x174 TObjFunc
	ClearReplies(); // 0x176 TObjFunc
	var_225_int = 536506; // 0x178 PushI
	var_226_int = 36079; // 0x179 PushI
	var_227_int = 38306; // 0x17a PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x17b TObjFunc
	var_228_int = 536507; // 0x17d PushI
	var_229_int = 36079; // 0x17e PushI
	var_230_int = 38307; // 0x17f PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x180 TObjFunc
	return 0; // 0x182 Return
	
Label_387:
	var_231_int = 36079; // 0x183 PushI
	var_232_bool = var_46_bool == var_231_int; // 0x184 Eq
	if(var_232_bool == 0) goto Label_405; // 0x185 JumpB
	var_233_string = ""; // 0x186 PushV
	var_233_string = "Grin"; // 0x187 MovS
	func_144(var_47_cvector, var_233_string); // 0x188 NEW_2
	var_234_int = 534446; // 0x18a PushI
	SetMessage(var_234_int); // 0x18b TObjFunc
	ClearReplies(); // 0x18d TObjFunc
	var_235_int = 534113; // 0x18f PushI
	var_236_int = 35707; // 0x190 PushI
	var_237_int = 35706; // 0x191 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x192 TObjFunc
	return 0; // 0x194 Return
	
Label_405:
	var_238_int = 35707; // 0x195 PushI
	var_239_bool = var_46_bool == var_238_int; // 0x196 Eq
	if(var_239_bool == 0) goto Label_428; // 0x197 JumpB
	var_240_string = ""; // 0x198 PushV
	var_240_string = "Grin"; // 0x199 MovS
	func_144(var_47_cvector, var_240_string); // 0x19a NEW_2
	var_241_int = 534114; // 0x19c PushI
	SetMessage(var_241_int); // 0x19d TObjFunc
	ClearReplies(); // 0x19f TObjFunc
	var_242_int = 534115; // 0x1a1 PushI
	var_243_int = -1; // 0x1a2 PushI
	var_244_int = 35708; // 0x1a3 PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x1a4 TObjFunc
	var_245_int = 534116; // 0x1a6 PushI
	var_246_int = -1; // 0x1a7 PushI
	var_247_int = 35709; // 0x1a8 PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x1a9 TObjFunc
	return 0; // 0x1ab Return
	
Label_428:
	var_3_string = 1; // 0x1ac TMovB
	var_248_bool = 0; // 0x1ad PushV
	func_6755(var_248_bool); // 0x1ae NEW_2
	if(var_248_bool == 0) goto Label_436; // 0x1b0 JumpB
	lshStopAnimation(); // 0x1b1 Func
	goto Label_438; // 0x1b3 Jump
	
Label_438:
	return 0; // 0x1b6 Return
	
Label_436:
	StopAnimation(); // 0x1b4 Func
	
Label_440:
	return 0; // 0x1b8 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0x260 PushI
	if(var_48_int == 0) goto Label_763; // 0x261 JumpB
	func_6621(); // 0x263 NEW_2
	var_50_int = 37348; // 0x265 PushI
	var_51_bool = var_46_bool == var_50_int; // 0x266 Eq
	if(var_51_bool == 0) goto Label_641; // 0x267 JumpB
	var_52_string = ""; // 0x268 PushV
	var_52_string = "Neutral"; // 0x269 MovS
	func_585(var_47_cvector, var_52_string); // 0x26a NEW_2
	var_69_int = 535662; // 0x26c PushI
	SetMessage(var_69_int); // 0x26d TObjFunc
	ClearReplies(); // 0x26f TObjFunc
	var_70_int = 535663; // 0x271 PushI
	var_71_int = 42111; // 0x272 PushI
	var_72_int = 37349; // 0x273 PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0x274 TObjFunc
	var_73_int = 540003; // 0x276 PushI
	var_74_int = -1; // 0x277 PushI
	var_75_int = 41974; // 0x278 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x279 TObjFunc
	var_76_int = 540138; // 0x27b PushI
	var_77_int = -1; // 0x27c PushI
	var_78_int = 42110; // 0x27d PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0x27e TObjFunc
	return 0; // 0x280 Return
	
Label_641:
	var_79_int = 42111; // 0x281 PushI
	var_80_bool = var_46_bool == var_79_int; // 0x282 Eq
	if(var_80_bool == 0) goto Label_664; // 0x283 JumpB
	var_81_string = ""; // 0x284 PushV
	var_81_string = "Grin"; // 0x285 MovS
	func_585(var_47_cvector, var_81_string); // 0x286 NEW_2
	var_82_int = 540139; // 0x288 PushI
	SetMessage(var_82_int); // 0x289 TObjFunc
	ClearReplies(); // 0x28b TObjFunc
	var_83_int = 540219; // 0x28d PushI
	var_84_int = 42200; // 0x28e PushI
	var_85_int = 42199; // 0x28f PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x290 TObjFunc
	var_86_int = 540221; // 0x292 PushI
	var_87_int = 42202; // 0x293 PushI
	var_88_int = 42201; // 0x294 PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x295 TObjFunc
	return 0; // 0x297 Return
	
Label_664:
	var_89_int = 42202; // 0x298 PushI
	var_90_bool = var_46_bool == var_89_int; // 0x299 Eq
	if(var_90_bool == 0) goto Label_682; // 0x29a JumpB
	var_91_string = ""; // 0x29b PushV
	var_91_string = "Grin"; // 0x29c MovS
	func_585(var_47_cvector, var_91_string); // 0x29d NEW_2
	var_92_int = 540222; // 0x29f PushI
	SetMessage(var_92_int); // 0x2a0 TObjFunc
	ClearReplies(); // 0x2a2 TObjFunc
	var_93_int = 540223; // 0x2a4 PushI
	var_94_int = 42200; // 0x2a5 PushI
	var_95_int = 42203; // 0x2a6 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0x2a7 TObjFunc
	return 0; // 0x2a9 Return
	
Label_682:
	var_96_int = 42200; // 0x2aa PushI
	var_97_bool = var_46_bool == var_96_int; // 0x2ab Eq
	if(var_97_bool == 0) goto Label_705; // 0x2ac JumpB
	var_98_string = ""; // 0x2ad PushV
	var_98_string = "Neutral"; // 0x2ae MovS
	func_585(var_47_cvector, var_98_string); // 0x2af NEW_2
	var_99_int = 540220; // 0x2b1 PushI
	SetMessage(var_99_int); // 0x2b2 TObjFunc
	ClearReplies(); // 0x2b4 TObjFunc
	var_100_int = 540224; // 0x2b6 PushI
	var_101_int = 42209; // 0x2b7 PushI
	var_102_int = 42205; // 0x2b8 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x2b9 TObjFunc
	var_103_int = 540225; // 0x2bb PushI
	var_104_int = 42207; // 0x2bc PushI
	var_105_int = 42206; // 0x2bd PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x2be TObjFunc
	return 0; // 0x2c0 Return
	
Label_705:
	var_106_int = 42207; // 0x2c1 PushI
	var_107_bool = var_46_bool == var_106_int; // 0x2c2 Eq
	if(var_107_bool == 0) goto Label_728; // 0x2c3 JumpB
	var_108_string = ""; // 0x2c4 PushV
	var_108_string = "Neutral"; // 0x2c5 MovS
	func_585(var_47_cvector, var_108_string); // 0x2c6 NEW_2
	var_109_int = 540226; // 0x2c8 PushI
	SetMessage(var_109_int); // 0x2c9 TObjFunc
	ClearReplies(); // 0x2cb TObjFunc
	var_110_int = 540227; // 0x2cd PushI
	var_111_int = -1; // 0x2ce PushI
	var_112_int = 42208; // 0x2cf PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x2d0 TObjFunc
	var_113_int = 540231; // 0x2d2 PushI
	var_114_int = -1; // 0x2d3 PushI
	var_115_int = 42212; // 0x2d4 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x2d5 TObjFunc
	return 0; // 0x2d7 Return
	
Label_728:
	var_116_int = 42209; // 0x2d8 PushI
	var_117_bool = var_46_bool == var_116_int; // 0x2d9 Eq
	if(var_117_bool == 0) goto Label_751; // 0x2da JumpB
	var_118_string = ""; // 0x2db PushV
	var_118_string = "Neutral"; // 0x2dc MovS
	func_585(var_47_cvector, var_118_string); // 0x2dd NEW_2
	var_119_int = 540228; // 0x2df PushI
	SetMessage(var_119_int); // 0x2e0 TObjFunc
	ClearReplies(); // 0x2e2 TObjFunc
	var_120_int = 540229; // 0x2e4 PushI
	var_121_int = -1; // 0x2e5 PushI
	var_122_int = 42210; // 0x2e6 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x2e7 TObjFunc
	var_123_int = 540230; // 0x2e9 PushI
	var_124_int = -1; // 0x2ea PushI
	var_125_int = 42211; // 0x2eb PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x2ec TObjFunc
	return 0; // 0x2ee Return
	
Label_751:
	var_3_string = 1; // 0x2ef TMovB
	var_126_bool = 0; // 0x2f0 PushV
	func_6755(var_126_bool); // 0x2f1 NEW_2
	if(var_126_bool == 0) goto Label_759; // 0x2f3 JumpB
	lshStopAnimation(); // 0x2f4 Func
	goto Label_761; // 0x2f6 Jump
	
Label_761:
	return 0; // 0x2f9 Return
	
Label_759:
	StopAnimation(); // 0x2f7 Func
	
Label_763:
	return 0; // 0x2fb Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0x3d4 PushI
	if(var_48_int == 0) goto Label_1262; // 0x3d5 JumpB
	func_6621(); // 0x3d7 NEW_2
	var_50_int = 13228; // 0x3d9 PushI
	var_51_bool = var_47_cvector == var_50_int; // 0x3da Eq
	if(var_51_bool == 0) goto Label_993; // 0x3db JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0x3dc PushV
	var_52_object = var_1_object; // 0x3dd MovT
	var_53_object = var_0_object; // 0x3de MovT
	func_7099(); // 0x3df NEW_2
	
Label_993:
	var_56_int = 13232; // 0x3e1 PushI
	var_57_bool = var_47_cvector == var_56_int; // 0x3e2 Eq
	if(var_57_bool == 0) goto Label_1001; // 0x3e3 JumpB
	var_58_object = Obj(); var_59_object = Obj(); // 0x3e4 PushV
	var_58_object = var_1_object; // 0x3e5 MovT
	var_59_object = var_0_object; // 0x3e6 MovT
	func_7093(); // 0x3e7 NEW_2
	
Label_1001:
	var_62_int = 13227; // 0x3e9 PushI
	var_63_bool = var_46_bool == var_62_int; // 0x3ea Eq
	if(var_63_bool == 0) goto Label_1078; // 0x3eb JumpB
	var_64_string = ""; // 0x3ec PushV
	var_64_string = "Neutral"; // 0x3ed MovS
	func_957(var_47_cvector, var_64_string); // 0x3ee NEW_2
	var_81_int = 512009; // 0x3f0 PushI
	SetMessage(var_81_int); // 0x3f1 TObjFunc
	ClearReplies(); // 0x3f3 TObjFunc
	var_82_bool = 0; // 0x3f5 PushV
	var_82_bool = 0; // 0x3f6 MovB
	var_83_bool = 0; var_84_object = Obj(); // 0x3f7 PushV
	var_84_object = var_1_object; // 0x3f8 MovT
	func_7478(var_84_object); // 0x3f9 NEW_2
	if(var_83_bool == 0) goto Label_1026; // 0x3fb JumpB
	var_91_bool = 0; var_92_object = Obj(); // 0x3fc PushV
	var_92_object = var_1_object; // 0x3fd MovT
	func_7490(var_92_object); // 0x3fe NEW_2
	if(var_91_bool == 0) goto Label_1026; // 0x400 JumpB
	var_82_bool = 1; // 0x401 MovB
	
Label_1026:
	if(var_82_bool == 0) goto Label_1032; // 0x402 JumpB
	var_97_int = 512010; // 0x403 PushI
	var_98_int = 13230; // 0x404 PushI
	var_99_int = 13228; // 0x405 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x406 TObjFunc
	
Label_1032:
	var_100_bool = 0; // 0x408 PushV
	var_100_bool = 0; // 0x409 MovB
	var_101_bool = 0; // 0x40a PushV
	var_101_bool = 0; // 0x40b MovB
	var_102_bool = 0; // 0x40c PushV
	var_102_bool = 0; // 0x40d MovB
	var_103_bool = 0; var_104_object = Obj(); // 0x40e PushV
	var_104_object = var_1_object; // 0x40f MovT
	func_7430(var_104_object); // 0x410 NEW_2
	var_109_bool = var_103_bool == 0; // 0x412 Not
	if(var_109_bool == 0) goto Label_1051; // 0x413 JumpB
	var_110_bool = 0; var_111_object = Obj(); // 0x414 PushV
	var_111_object = var_1_object; // 0x415 MovT
	func_7442(var_111_object); // 0x416 NEW_2
	var_116_bool = var_110_bool == 0; // 0x418 Not
	if(var_116_bool == 0) goto Label_1051; // 0x419 JumpB
	var_102_bool = 1; // 0x41a MovB
	
Label_1051:
	if(var_102_bool == 0) goto Label_1059; // 0x41b JumpB
	var_117_bool = 0; var_118_object = Obj(); // 0x41c PushV
	var_118_object = var_1_object; // 0x41d MovT
	func_7454(var_118_object); // 0x41e NEW_2
	var_123_bool = var_117_bool == 0; // 0x420 Not
	if(var_123_bool == 0) goto Label_1059; // 0x421 JumpB
	var_101_bool = 1; // 0x422 MovB
	
Label_1059:
	if(var_101_bool == 0) goto Label_1066; // 0x423 JumpB
	var_124_bool = 0; var_125_object = Obj(); // 0x424 PushV
	var_125_object = var_1_object; // 0x425 MovT
	func_7466(var_125_object); // 0x426 NEW_2
	if(var_124_bool == 0) goto Label_1066; // 0x428 JumpB
	var_100_bool = 1; // 0x429 MovB
	
Label_1066:
	if(var_100_bool == 0) goto Label_1072; // 0x42a JumpB
	var_130_int = 512014; // 0x42b PushI
	var_131_int = 13233; // 0x42c PushI
	var_132_int = 13232; // 0x42d PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x42e TObjFunc
	
Label_1072:
	var_133_int = 512011; // 0x430 PushI
	var_134_int = -1; // 0x431 PushI
	var_135_int = 13229; // 0x432 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x433 TObjFunc
	return 0; // 0x435 Return
	
Label_1078:
	var_136_int = 3560; // 0x436 PushI
	var_137_bool = var_46_bool == var_136_int; // 0x437 Eq
	if(var_137_bool == 0) goto Label_1081; // 0x438 JumpB
	
Label_1081:
	var_138_int = 3572; // 0x439 PushI
	var_139_bool = var_46_bool == var_138_int; // 0x43a Eq
	if(var_139_bool == 0) goto Label_1104; // 0x43b JumpB
	var_140_string = ""; // 0x43c PushV
	var_140_string = "Neutral"; // 0x43d MovS
	func_957(var_47_cvector, var_140_string); // 0x43e NEW_2
	var_141_int = 503299; // 0x440 PushI
	SetMessage(var_141_int); // 0x441 TObjFunc
	ClearReplies(); // 0x443 TObjFunc
	var_142_int = 503300; // 0x445 PushI
	var_143_int = 3562; // 0x446 PushI
	var_144_int = 3573; // 0x447 PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x448 TObjFunc
	var_145_int = 503301; // 0x44a PushI
	var_146_int = 3564; // 0x44b PushI
	var_147_int = 3575; // 0x44c PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x44d TObjFunc
	return 0; // 0x44f Return
	
Label_1104:
	var_148_int = 3562; // 0x450 PushI
	var_149_bool = var_46_bool == var_148_int; // 0x451 Eq
	if(var_149_bool == 0) goto Label_1127; // 0x452 JumpB
	var_150_string = ""; // 0x453 PushV
	var_150_string = "Neutral"; // 0x454 MovS
	func_957(var_47_cvector, var_150_string); // 0x455 NEW_2
	var_151_int = 503291; // 0x457 PushI
	SetMessage(var_151_int); // 0x458 TObjFunc
	ClearReplies(); // 0x45a TObjFunc
	var_152_int = 503292; // 0x45c PushI
	var_153_int = 3564; // 0x45d PushI
	var_154_int = 3563; // 0x45e PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x45f TObjFunc
	var_155_int = 503295; // 0x461 PushI
	var_156_int = 3564; // 0x462 PushI
	var_157_int = 3566; // 0x463 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x464 TObjFunc
	return 0; // 0x466 Return
	
Label_1127:
	var_158_int = 3564; // 0x467 PushI
	var_159_bool = var_46_bool == var_158_int; // 0x468 Eq
	if(var_159_bool == 0) goto Label_1150; // 0x469 JumpB
	var_160_string = ""; // 0x46a PushV
	var_160_string = "Distrust"; // 0x46b MovS
	func_957(var_47_cvector, var_160_string); // 0x46c NEW_2
	var_161_int = 503293; // 0x46e PushI
	SetMessage(var_161_int); // 0x46f TObjFunc
	ClearReplies(); // 0x471 TObjFunc
	var_162_int = 503294; // 0x473 PushI
	var_163_int = 3568; // 0x474 PushI
	var_164_int = 3565; // 0x475 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x476 TObjFunc
	var_165_int = 503297; // 0x478 PushI
	var_166_int = 3568; // 0x479 PushI
	var_167_int = 3569; // 0x47a PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x47b TObjFunc
	return 0; // 0x47d Return
	
Label_1150:
	var_168_int = 3568; // 0x47e PushI
	var_169_bool = var_46_bool == var_168_int; // 0x47f Eq
	if(var_169_bool == 0) goto Label_1173; // 0x480 JumpB
	var_170_string = ""; // 0x481 PushV
	var_170_string = "Neutral"; // 0x482 MovS
	func_957(var_47_cvector, var_170_string); // 0x483 NEW_2
	var_171_int = 503296; // 0x485 PushI
	SetMessage(var_171_int); // 0x486 TObjFunc
	ClearReplies(); // 0x488 TObjFunc
	var_172_int = 503302; // 0x48a PushI
	var_173_int = 3578; // 0x48b PushI
	var_174_int = 3577; // 0x48c PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x48d TObjFunc
	var_175_int = 503305; // 0x48f PushI
	var_176_int = 3578; // 0x490 PushI
	var_177_int = 3580; // 0x491 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x492 TObjFunc
	return 0; // 0x494 Return
	
Label_1173:
	var_178_int = 3578; // 0x495 PushI
	var_179_bool = var_46_bool == var_178_int; // 0x496 Eq
	if(var_179_bool == 0) goto Label_1191; // 0x497 JumpB
	var_180_string = ""; // 0x498 PushV
	var_180_string = "Neutral"; // 0x499 MovS
	func_957(var_47_cvector, var_180_string); // 0x49a NEW_2
	var_181_int = 503303; // 0x49c PushI
	SetMessage(var_181_int); // 0x49d TObjFunc
	ClearReplies(); // 0x49f TObjFunc
	var_182_int = 503304; // 0x4a1 PushI
	var_183_int = -1; // 0x4a2 PushI
	var_184_int = 3579; // 0x4a3 PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x4a4 TObjFunc
	return 0; // 0x4a6 Return
	
Label_1191:
	var_185_int = 13233; // 0x4a7 PushI
	var_186_bool = var_46_bool == var_185_int; // 0x4a8 Eq
	if(var_186_bool == 0) goto Label_1209; // 0x4a9 JumpB
	var_187_string = ""; // 0x4aa PushV
	var_187_string = "Neutral"; // 0x4ab MovS
	func_957(var_47_cvector, var_187_string); // 0x4ac NEW_2
	var_188_int = 512015; // 0x4ae PushI
	SetMessage(var_188_int); // 0x4af TObjFunc
	ClearReplies(); // 0x4b1 TObjFunc
	var_189_int = 512016; // 0x4b3 PushI
	var_190_int = 13235; // 0x4b4 PushI
	var_191_int = 13234; // 0x4b5 PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x4b6 TObjFunc
	return 0; // 0x4b8 Return
	
Label_1209:
	var_192_int = 13235; // 0x4b9 PushI
	var_193_bool = var_46_bool == var_192_int; // 0x4ba Eq
	if(var_193_bool == 0) goto Label_1232; // 0x4bb JumpB
	var_194_string = ""; // 0x4bc PushV
	var_194_string = "Neutral"; // 0x4bd MovS
	func_957(var_47_cvector, var_194_string); // 0x4be NEW_2
	var_195_int = 512017; // 0x4c0 PushI
	SetMessage(var_195_int); // 0x4c1 TObjFunc
	ClearReplies(); // 0x4c3 TObjFunc
	var_196_int = 536134; // 0x4c5 PushI
	var_197_int = -1; // 0x4c6 PushI
	var_198_int = 37893; // 0x4c7 PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x4c8 TObjFunc
	var_199_int = 536135; // 0x4ca PushI
	var_200_int = -1; // 0x4cb PushI
	var_201_int = 37894; // 0x4cc PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x4cd TObjFunc
	return 0; // 0x4cf Return
	
Label_1232:
	var_202_int = 13230; // 0x4d0 PushI
	var_203_bool = var_46_bool == var_202_int; // 0x4d1 Eq
	if(var_203_bool == 0) goto Label_1250; // 0x4d2 JumpB
	var_204_string = ""; // 0x4d3 PushV
	var_204_string = "Anger"; // 0x4d4 MovS
	func_957(var_47_cvector, var_204_string); // 0x4d5 NEW_2
	var_205_int = 512012; // 0x4d7 PushI
	SetMessage(var_205_int); // 0x4d8 TObjFunc
	ClearReplies(); // 0x4da TObjFunc
	var_206_int = 512013; // 0x4dc PushI
	var_207_int = -1; // 0x4dd PushI
	var_208_int = 13231; // 0x4de PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x4df TObjFunc
	return 0; // 0x4e1 Return
	
Label_1250:
	var_3_string = 1; // 0x4e2 TMovB
	var_209_bool = 0; // 0x4e3 PushV
	func_6755(var_209_bool); // 0x4e4 NEW_2
	if(var_209_bool == 0) goto Label_1258; // 0x4e6 JumpB
	lshStopAnimation(); // 0x4e7 Func
	goto Label_1260; // 0x4e9 Jump
	
Label_1260:
	return 0; // 0x4ec Return
	
Label_1258:
	StopAnimation(); // 0x4ea Func
	
Label_1262:
	return 0; // 0x4ee Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0x626 PushI
	if(var_48_int == 0) goto Label_3190; // 0x627 JumpB
	func_6621(); // 0x629 NEW_2
	var_50_int = 32944; // 0x62b PushI
	var_51_bool = var_47_cvector == var_50_int; // 0x62c Eq
	if(var_51_bool == 0) goto Label_1592; // 0x62d JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0x62e PushV
	var_52_object = var_1_object; // 0x62f MovT
	var_53_object = var_0_object; // 0x630 MovT
	func_6783(); // 0x631 NEW_2
	var_108_object = Obj(); var_109_object = Obj(); // 0x633 PushV
	var_108_object = var_1_object; // 0x634 MovT
	var_109_object = var_0_object; // 0x635 MovT
	func_7017(); // 0x636 NEW_2
	
Label_1592:
	var_134_int = 32945; // 0x638 PushI
	var_135_bool = var_47_cvector == var_134_int; // 0x639 Eq
	if(var_135_bool == 0) goto Label_1605; // 0x63a JumpB
	var_136_object = Obj(); var_137_object = Obj(); // 0x63b PushV
	var_136_object = var_1_object; // 0x63c MovT
	var_137_object = var_0_object; // 0x63d MovT
	func_6783(); // 0x63e NEW_2
	var_138_object = Obj(); var_139_object = Obj(); // 0x640 PushV
	var_138_object = var_1_object; // 0x641 MovT
	var_139_object = var_0_object; // 0x642 MovT
	func_7017(); // 0x643 NEW_2
	
Label_1605:
	var_140_int = 34603; // 0x645 PushI
	var_141_bool = var_47_cvector == var_140_int; // 0x646 Eq
	if(var_141_bool == 0) goto Label_1618; // 0x647 JumpB
	var_142_object = Obj(); var_143_object = Obj(); // 0x648 PushV
	var_142_object = var_1_object; // 0x649 MovT
	var_143_object = var_0_object; // 0x64a MovT
	func_6783(); // 0x64b NEW_2
	var_144_object = Obj(); var_145_object = Obj(); // 0x64d PushV
	var_144_object = var_1_object; // 0x64e MovT
	var_145_object = var_0_object; // 0x64f MovT
	func_7017(); // 0x650 NEW_2
	
Label_1618:
	var_146_int = 23067; // 0x652 PushI
	var_147_bool = var_47_cvector == var_146_int; // 0x653 Eq
	if(var_147_bool == 0) goto Label_1626; // 0x654 JumpB
	var_148_object = Obj(); var_149_object = Obj(); // 0x655 PushV
	var_148_object = var_1_object; // 0x656 MovT
	var_149_object = var_0_object; // 0x657 MovT
	func_6818(); // 0x658 NEW_2
	
Label_1626:
	var_164_int = 23065; // 0x65a PushI
	var_165_bool = var_47_cvector == var_164_int; // 0x65b Eq
	if(var_165_bool == 0) goto Label_1634; // 0x65c JumpB
	var_166_object = Obj(); var_167_object = Obj(); // 0x65d PushV
	var_166_object = var_1_object; // 0x65e MovT
	var_167_object = var_0_object; // 0x65f MovT
	func_6818(); // 0x660 NEW_2
	
Label_1634:
	var_168_int = 5360; // 0x662 PushI
	var_169_bool = var_47_cvector == var_168_int; // 0x663 Eq
	if(var_169_bool == 0) goto Label_1647; // 0x664 JumpB
	var_170_object = Obj(); var_171_object = Obj(); // 0x665 PushV
	var_170_object = var_1_object; // 0x666 MovT
	var_171_object = var_0_object; // 0x667 MovT
	func_6828(); // 0x668 NEW_2
	var_174_object = Obj(); var_175_object = Obj(); // 0x66a PushV
	var_174_object = var_1_object; // 0x66b MovT
	var_175_object = var_0_object; // 0x66c MovT
	func_6818(); // 0x66d NEW_2
	
Label_1647:
	var_176_int = 5359; // 0x66f PushI
	var_177_bool = var_47_cvector == var_176_int; // 0x670 Eq
	if(var_177_bool == 0) goto Label_1660; // 0x671 JumpB
	var_178_object = Obj(); var_179_object = Obj(); // 0x672 PushV
	var_178_object = var_1_object; // 0x673 MovT
	var_179_object = var_0_object; // 0x674 MovT
	func_6828(); // 0x675 NEW_2
	var_180_object = Obj(); var_181_object = Obj(); // 0x677 PushV
	var_180_object = var_1_object; // 0x678 MovT
	var_181_object = var_0_object; // 0x679 MovT
	func_6818(); // 0x67a NEW_2
	
Label_1660:
	var_182_int = 32991; // 0x67c PushI
	var_183_bool = var_47_cvector == var_182_int; // 0x67d Eq
	if(var_183_bool == 0) goto Label_1673; // 0x67e JumpB
	var_184_object = Obj(); var_185_object = Obj(); // 0x67f PushV
	var_184_object = var_1_object; // 0x680 MovT
	var_185_object = var_0_object; // 0x681 MovT
	func_6783(); // 0x682 NEW_2
	var_186_object = Obj(); var_187_object = Obj(); // 0x684 PushV
	var_186_object = var_1_object; // 0x685 MovT
	var_187_object = var_0_object; // 0x686 MovT
	func_7017(); // 0x687 NEW_2
	
Label_1673:
	var_188_int = 5341; // 0x689 PushI
	var_189_bool = var_47_cvector == var_188_int; // 0x68a Eq
	if(var_189_bool == 0) goto Label_1681; // 0x68b JumpB
	var_190_object = Obj(); var_191_object = Obj(); // 0x68c PushV
	var_190_object = var_1_object; // 0x68d MovT
	var_191_object = var_0_object; // 0x68e MovT
	func_7045(); // 0x68f NEW_2
	
Label_1681:
	var_194_int = 5342; // 0x691 PushI
	var_195_bool = var_47_cvector == var_194_int; // 0x692 Eq
	if(var_195_bool == 0) goto Label_1689; // 0x693 JumpB
	var_196_object = Obj(); var_197_object = Obj(); // 0x694 PushV
	var_196_object = var_1_object; // 0x695 MovT
	var_197_object = var_0_object; // 0x696 MovT
	func_7045(); // 0x697 NEW_2
	
Label_1689:
	var_198_int = 5347; // 0x699 PushI
	var_199_bool = var_47_cvector == var_198_int; // 0x69a Eq
	if(var_199_bool == 0) goto Label_1697; // 0x69b JumpB
	var_200_object = Obj(); var_201_object = Obj(); // 0x69c PushV
	var_200_object = var_1_object; // 0x69d MovT
	var_201_object = var_0_object; // 0x69e MovT
	func_7045(); // 0x69f NEW_2
	
Label_1697:
	var_202_int = 8440; // 0x6a1 PushI
	var_203_bool = var_47_cvector == var_202_int; // 0x6a2 Eq
	if(var_203_bool == 0) goto Label_1705; // 0x6a3 JumpB
	var_204_object = Obj(); var_205_object = Obj(); // 0x6a4 PushV
	var_204_object = var_1_object; // 0x6a5 MovT
	var_205_object = var_0_object; // 0x6a6 MovT
	func_7045(); // 0x6a7 NEW_2
	
Label_1705:
	var_206_int = 32992; // 0x6a9 PushI
	var_207_bool = var_47_cvector == var_206_int; // 0x6aa Eq
	if(var_207_bool == 0) goto Label_1713; // 0x6ab JumpB
	var_208_object = Obj(); var_209_object = Obj(); // 0x6ac PushV
	var_208_object = var_1_object; // 0x6ad MovT
	var_209_object = var_0_object; // 0x6ae MovT
	func_6929(); // 0x6af NEW_2
	
Label_1713:
	var_212_int = 32994; // 0x6b1 PushI
	var_213_bool = var_47_cvector == var_212_int; // 0x6b2 Eq
	if(var_213_bool == 0) goto Label_1721; // 0x6b3 JumpB
	var_214_object = Obj(); var_215_object = Obj(); // 0x6b4 PushV
	var_214_object = var_1_object; // 0x6b5 MovT
	var_215_object = var_0_object; // 0x6b6 MovT
	func_6879(); // 0x6b7 NEW_2
	
Label_1721:
	var_218_int = 32925; // 0x6b9 PushI
	var_219_bool = var_46_bool == var_218_int; // 0x6ba Eq
	if(var_219_bool == 0) goto Label_1893; // 0x6bb JumpB
	var_220_bool = 0; var_221_object = Obj(); // 0x6bc PushV
	var_221_object = var_1_object; // 0x6bd MovT
	func_7310(var_221_object); // 0x6be NEW_2
	if(var_220_bool == 0) goto Label_1764; // 0x6c0 JumpB
	var_228_object = Obj(); var_229_object = Obj(); // 0x6c1 PushV
	var_228_object = var_1_object; // 0x6c2 MovT
	var_229_object = var_0_object; // 0x6c3 MovT
	func_7039(); // 0x6c4 NEW_2
	var_232_object = Obj(); var_233_object = Obj(); // 0x6c6 PushV
	var_232_object = var_1_object; // 0x6c7 MovT
	var_233_object = var_0_object; // 0x6c8 MovT
	func_6834(); // 0x6c9 NEW_2
	var_242_string = ""; // 0x6cb PushV
	var_242_string = "Anger"; // 0x6cc MovS
	func_1551(var_47_cvector, var_242_string); // 0x6cd NEW_2
	var_259_int = 531566; // 0x6cf PushI
	SetMessage(var_259_int); // 0x6d0 TObjFunc
	ClearReplies(); // 0x6d2 TObjFunc
	var_260_int = 531567; // 0x6d4 PushI
	var_261_int = 32927; // 0x6d5 PushI
	var_262_int = 32926; // 0x6d6 PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x6d7 TObjFunc
	var_263_int = 531608; // 0x6d9 PushI
	var_264_int = 32978; // 0x6da PushI
	var_265_int = 32977; // 0x6db PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0x6dc TObjFunc
	var_266_int = 531614; // 0x6de PushI
	var_267_int = 32986; // 0x6df PushI
	var_268_int = 32985; // 0x6e0 PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x6e1 TObjFunc
	return 0; // 0x6e3 Return
	
Label_1764:
	var_269_bool = 0; var_270_object = Obj(); // 0x6e4 PushV
	var_270_object = var_1_object; // 0x6e5 MovT
	func_7141(var_270_object); // 0x6e6 NEW_2
	if(var_269_bool == 0) goto Label_1789; // 0x6e8 JumpB
	var_275_string = ""; // 0x6e9 PushV
	var_275_string = "Neutral"; // 0x6ea MovS
	func_1551(var_47_cvector, var_275_string); // 0x6eb NEW_2
	var_276_int = 504850; // 0x6ed PushI
	SetMessage(var_276_int); // 0x6ee TObjFunc
	ClearReplies(); // 0x6f0 TObjFunc
	var_277_int = 504879; // 0x6f2 PushI
	var_278_int = 5370; // 0x6f3 PushI
	var_279_int = 5353; // 0x6f4 PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x6f5 TObjFunc
	var_280_int = 504890; // 0x6f7 PushI
	var_281_int = 5354; // 0x6f8 PushI
	var_282_int = 5367; // 0x6f9 PushI
	AddReply(var_280_int, var_281_int, var_282_int); // 0x6fa TObjFunc
	return 0; // 0x6fc Return
	
Label_1789:
	var_283_string = ""; // 0x6fd PushV
	var_283_string = "Neutral"; // 0x6fe MovS
	func_1551(var_47_cvector, var_283_string); // 0x6ff NEW_2
	var_284_int = 507627; // 0x701 PushI
	SetMessage(var_284_int); // 0x702 TObjFunc
	ClearReplies(); // 0x704 TObjFunc
	var_285_bool = 0; var_286_object = Obj(); // 0x706 PushV
	var_286_object = var_1_object; // 0x707 MovT
	func_7129(var_286_object); // 0x708 NEW_2
	if(var_285_bool == 0) goto Label_1808; // 0x70a JumpB
	var_291_int = 531617; // 0x70b PushI
	var_292_int = 32990; // 0x70c PushI
	var_293_int = 32989; // 0x70d PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0x70e TObjFunc
	
Label_1808:
	var_294_bool = 0; // 0x710 PushV
	var_294_bool = 0; // 0x711 MovB
	var_295_bool = 0; // 0x712 PushV
	var_295_bool = 0; // 0x713 MovB
	var_296_bool = 0; var_297_object = Obj(); // 0x714 PushV
	var_297_object = var_1_object; // 0x715 MovT
	func_7322(var_297_object); // 0x716 NEW_2
	if(var_296_bool == 0) goto Label_1824; // 0x718 JumpB
	var_302_bool = 0; var_303_object = Obj(); // 0x719 PushV
	var_303_object = var_1_object; // 0x71a MovT
	func_7117(var_303_object); // 0x71b NEW_2
	var_308_bool = var_302_bool == 0; // 0x71d Not
	if(var_308_bool == 0) goto Label_1824; // 0x71e JumpB
	var_295_bool = 1; // 0x71f MovB
	
Label_1824:
	if(var_295_bool == 0) goto Label_1832; // 0x720 JumpB
	var_309_bool = 0; var_310_object = Obj(); // 0x721 PushV
	var_310_object = var_1_object; // 0x722 MovT
	func_7129(var_310_object); // 0x723 NEW_2
	var_311_bool = var_309_bool == 0; // 0x725 Not
	if(var_311_bool == 0) goto Label_1832; // 0x726 JumpB
	var_294_bool = 1; // 0x727 MovB
	
Label_1832:
	if(var_294_bool == 0) goto Label_1838; // 0x728 JumpB
	var_312_int = 507632; // 0x729 PushI
	var_313_int = 5334; // 0x72a PushI
	var_314_int = 8421; // 0x72b PushI
	AddReply(var_312_int, var_313_int, var_314_int); // 0x72c TObjFunc
	
Label_1838:
	var_315_bool = 0; // 0x72e PushV
	var_315_bool = 0; // 0x72f MovB
	var_316_bool = 0; // 0x730 PushV
	var_316_bool = 0; // 0x731 MovB
	var_317_bool = 0; var_318_object = Obj(); // 0x732 PushV
	var_318_object = var_1_object; // 0x733 MovT
	func_7286(var_318_object); // 0x734 NEW_2
	if(var_317_bool == 0) goto Label_1854; // 0x736 JumpB
	var_323_bool = 0; var_324_object = Obj(); // 0x737 PushV
	var_324_object = var_1_object; // 0x738 MovT
	func_7129(var_324_object); // 0x739 NEW_2
	var_325_bool = var_323_bool == 0; // 0x73b Not
	if(var_325_bool == 0) goto Label_1854; // 0x73c JumpB
	var_316_bool = 1; // 0x73d MovB
	
Label_1854:
	if(var_316_bool == 0) goto Label_1862; // 0x73e JumpB
	var_326_bool = 0; var_327_object = Obj(); // 0x73f PushV
	var_327_object = var_1_object; // 0x740 MovT
	func_7117(var_327_object); // 0x741 NEW_2
	var_328_bool = var_326_bool == 0; // 0x743 Not
	if(var_328_bool == 0) goto Label_1862; // 0x744 JumpB
	var_315_bool = 1; // 0x745 MovB
	
Label_1862:
	if(var_315_bool == 0) goto Label_1868; // 0x746 JumpB
	var_329_int = 531620; // 0x747 PushI
	var_330_int = 32993; // 0x748 PushI
	var_331_int = 32992; // 0x749 PushI
	AddReply(var_329_int, var_330_int, var_331_int); // 0x74a TObjFunc
	
Label_1868:
	var_332_bool = 0; // 0x74c PushV
	var_332_bool = 0; // 0x74d MovB
	var_333_bool = 0; var_334_object = Obj(); // 0x74e PushV
	var_334_object = var_1_object; // 0x74f MovT
	func_7153(var_334_object); // 0x750 NEW_2
	if(var_333_bool == 0) goto Label_1881; // 0x752 JumpB
	var_339_bool = 0; var_340_object = Obj(); // 0x753 PushV
	var_340_object = var_1_object; // 0x754 MovT
	func_7298(var_340_object); // 0x755 NEW_2
	if(var_339_bool == 0) goto Label_1881; // 0x757 JumpB
	var_332_bool = 1; // 0x758 MovB
	
Label_1881:
	if(var_332_bool == 0) goto Label_1887; // 0x759 JumpB
	var_345_int = 531622; // 0x75a PushI
	var_346_int = 32995; // 0x75b PushI
	var_347_int = 32994; // 0x75c PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0x75d TObjFunc
	
Label_1887:
	var_348_int = 507658; // 0x75f PushI
	var_349_int = -1; // 0x760 PushI
	var_350_int = 8451; // 0x761 PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0x762 TObjFunc
	return 0; // 0x764 Return
	
Label_1893:
	var_351_int = 32995; // 0x765 PushI
	var_352_bool = var_46_bool == var_351_int; // 0x766 Eq
	if(var_352_bool == 0) goto Label_1911; // 0x767 JumpB
	var_353_string = ""; // 0x768 PushV
	var_353_string = "Neutral"; // 0x769 MovS
	func_1551(var_47_cvector, var_353_string); // 0x76a NEW_2
	var_354_int = 531623; // 0x76c PushI
	SetMessage(var_354_int); // 0x76d TObjFunc
	ClearReplies(); // 0x76f TObjFunc
	var_355_int = 531624; // 0x771 PushI
	var_356_int = 34337; // 0x772 PushI
	var_357_int = 32996; // 0x773 PushI
	AddReply(var_355_int, var_356_int, var_357_int); // 0x774 TObjFunc
	return 0; // 0x776 Return
	
Label_1911:
	var_358_int = 34337; // 0x777 PushI
	var_359_bool = var_46_bool == var_358_int; // 0x778 Eq
	if(var_359_bool == 0) goto Label_1929; // 0x779 JumpB
	var_360_string = ""; // 0x77a PushV
	var_360_string = "Neutral"; // 0x77b MovS
	func_1551(var_47_cvector, var_360_string); // 0x77c NEW_2
	var_361_int = 532852; // 0x77e PushI
	SetMessage(var_361_int); // 0x77f TObjFunc
	ClearReplies(); // 0x781 TObjFunc
	var_362_int = 532853; // 0x783 PushI
	var_363_int = -1; // 0x784 PushI
	var_364_int = 34338; // 0x785 PushI
	AddReply(var_362_int, var_363_int, var_364_int); // 0x786 TObjFunc
	return 0; // 0x788 Return
	
Label_1929:
	var_365_int = 32993; // 0x789 PushI
	var_366_bool = var_46_bool == var_365_int; // 0x78a Eq
	if(var_366_bool == 0) goto Label_1952; // 0x78b JumpB
	var_367_string = ""; // 0x78c PushV
	var_367_string = "Jeer"; // 0x78d MovS
	func_1551(var_47_cvector, var_367_string); // 0x78e NEW_2
	var_368_int = 531621; // 0x790 PushI
	SetMessage(var_368_int); // 0x791 TObjFunc
	ClearReplies(); // 0x793 TObjFunc
	var_369_int = 507630; // 0x795 PushI
	var_370_int = 8420; // 0x796 PushI
	var_371_int = 8419; // 0x797 PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0x798 TObjFunc
	var_372_int = 532849; // 0x79a PushI
	var_373_int = 34334; // 0x79b PushI
	var_374_int = 34333; // 0x79c PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0x79d TObjFunc
	return 0; // 0x79f Return
	
Label_1952:
	var_375_int = 8420; // 0x7a0 PushI
	var_376_bool = var_46_bool == var_375_int; // 0x7a1 Eq
	if(var_376_bool == 0) goto Label_1970; // 0x7a2 JumpB
	var_377_string = ""; // 0x7a3 PushV
	var_377_string = "Jeer"; // 0x7a4 MovS
	func_1551(var_47_cvector, var_377_string); // 0x7a5 NEW_2
	var_378_int = 507631; // 0x7a7 PushI
	SetMessage(var_378_int); // 0x7a8 TObjFunc
	ClearReplies(); // 0x7aa TObjFunc
	var_379_int = 507633; // 0x7ac PushI
	var_380_int = 34334; // 0x7ad PushI
	var_381_int = 8422; // 0x7ae PushI
	AddReply(var_379_int, var_380_int, var_381_int); // 0x7af TObjFunc
	return 0; // 0x7b1 Return
	
Label_1970:
	var_382_int = 34334; // 0x7b2 PushI
	var_383_bool = var_46_bool == var_382_int; // 0x7b3 Eq
	if(var_383_bool == 0) goto Label_1988; // 0x7b4 JumpB
	var_384_string = ""; // 0x7b5 PushV
	var_384_string = "Neutral"; // 0x7b6 MovS
	func_1551(var_47_cvector, var_384_string); // 0x7b7 NEW_2
	var_385_int = 532850; // 0x7b9 PushI
	SetMessage(var_385_int); // 0x7ba TObjFunc
	ClearReplies(); // 0x7bc TObjFunc
	var_386_int = 532851; // 0x7be PushI
	var_387_int = -1; // 0x7bf PushI
	var_388_int = 34336; // 0x7c0 PushI
	AddReply(var_386_int, var_387_int, var_388_int); // 0x7c1 TObjFunc
	return 0; // 0x7c3 Return
	
Label_1988:
	var_389_int = 5334; // 0x7c4 PushI
	var_390_bool = var_46_bool == var_389_int; // 0x7c5 Eq
	if(var_390_bool == 0) goto Label_2027; // 0x7c6 JumpB
	var_391_object = Obj(); var_392_object = Obj(); // 0x7c7 PushV
	var_391_object = var_1_object; // 0x7c8 MovT
	var_392_object = var_0_object; // 0x7c9 MovT
	func_7051(); // 0x7ca NEW_2
	var_395_string = ""; // 0x7cc PushV
	var_395_string = "Neutral"; // 0x7cd MovS
	func_1551(var_47_cvector, var_395_string); // 0x7ce NEW_2
	var_396_int = 504862; // 0x7d0 PushI
	SetMessage(var_396_int); // 0x7d1 TObjFunc
	ClearReplies(); // 0x7d3 TObjFunc
	var_397_int = 504863; // 0x7d5 PushI
	var_398_int = 5336; // 0x7d6 PushI
	var_399_int = 5335; // 0x7d7 PushI
	AddReply(var_397_int, var_398_int, var_399_int); // 0x7d8 TObjFunc
	var_400_int = 504875; // 0x7da PushI
	var_401_int = 5414; // 0x7db PushI
	var_402_int = 5348; // 0x7dc PushI
	AddReply(var_400_int, var_401_int, var_402_int); // 0x7dd TObjFunc
	var_403_bool = 0; var_404_object = Obj(); // 0x7df PushV
	var_404_object = var_1_object; // 0x7e0 MovT
	func_7274(var_404_object); // 0x7e1 NEW_2
	var_409_bool = var_403_bool == 0; // 0x7e3 Not
	if(var_409_bool == 0) goto Label_2026; // 0x7e4 JumpB
	var_410_int = 507643; // 0x7e5 PushI
	var_411_int = 8435; // 0x7e6 PushI
	var_412_int = 8434; // 0x7e7 PushI
	AddReply(var_410_int, var_411_int, var_412_int); // 0x7e8 TObjFunc
	
Label_2026:
	return 0; // 0x7ea Return
	
Label_2027:
	var_413_int = 8435; // 0x7eb PushI
	var_414_bool = var_46_bool == var_413_int; // 0x7ec Eq
	if(var_414_bool == 0) goto Label_2045; // 0x7ed JumpB
	var_415_string = ""; // 0x7ee PushV
	var_415_string = "Neutral"; // 0x7ef MovS
	func_1551(var_47_cvector, var_415_string); // 0x7f0 NEW_2
	var_416_int = 507644; // 0x7f2 PushI
	SetMessage(var_416_int); // 0x7f3 TObjFunc
	ClearReplies(); // 0x7f5 TObjFunc
	var_417_int = 507645; // 0x7f7 PushI
	var_418_int = 8437; // 0x7f8 PushI
	var_419_int = 8436; // 0x7f9 PushI
	AddReply(var_417_int, var_418_int, var_419_int); // 0x7fa TObjFunc
	return 0; // 0x7fc Return
	
Label_2045:
	var_420_int = 8437; // 0x7fd PushI
	var_421_bool = var_46_bool == var_420_int; // 0x7fe Eq
	if(var_421_bool == 0) goto Label_2063; // 0x7ff JumpB
	var_422_string = ""; // 0x800 PushV
	var_422_string = "Jeer"; // 0x801 MovS
	func_1551(var_47_cvector, var_422_string); // 0x802 NEW_2
	var_423_int = 507646; // 0x804 PushI
	SetMessage(var_423_int); // 0x805 TObjFunc
	ClearReplies(); // 0x807 TObjFunc
	var_424_int = 507647; // 0x809 PushI
	var_425_int = 5336; // 0x80a PushI
	var_426_int = 8438; // 0x80b PushI
	AddReply(var_424_int, var_425_int, var_426_int); // 0x80c TObjFunc
	return 0; // 0x80e Return
	
Label_2063:
	var_427_int = 5414; // 0x80f PushI
	var_428_bool = var_46_bool == var_427_int; // 0x810 Eq
	if(var_428_bool == 0) goto Label_2086; // 0x811 JumpB
	var_429_string = ""; // 0x812 PushV
	var_429_string = "Neutral"; // 0x813 MovS
	func_1551(var_47_cvector, var_429_string); // 0x814 NEW_2
	var_430_int = 504926; // 0x816 PushI
	SetMessage(var_430_int); // 0x817 TObjFunc
	ClearReplies(); // 0x819 TObjFunc
	var_431_int = 504927; // 0x81b PushI
	var_432_int = 8441; // 0x81c PushI
	var_433_int = 5415; // 0x81d PushI
	AddReply(var_431_int, var_432_int, var_433_int); // 0x81e TObjFunc
	var_434_int = 507648; // 0x820 PushI
	var_435_int = -1; // 0x821 PushI
	var_436_int = 8440; // 0x822 PushI
	AddReply(var_434_int, var_435_int, var_436_int); // 0x823 TObjFunc
	return 0; // 0x825 Return
	
Label_2086:
	var_437_int = 8441; // 0x826 PushI
	var_438_bool = var_46_bool == var_437_int; // 0x827 Eq
	if(var_438_bool == 0) goto Label_2104; // 0x828 JumpB
	var_439_string = ""; // 0x829 PushV
	var_439_string = "Neutral"; // 0x82a MovS
	func_1551(var_47_cvector, var_439_string); // 0x82b NEW_2
	var_440_int = 507649; // 0x82d PushI
	SetMessage(var_440_int); // 0x82e TObjFunc
	ClearReplies(); // 0x830 TObjFunc
	var_441_int = 507650; // 0x832 PushI
	var_442_int = 5338; // 0x833 PushI
	var_443_int = 8442; // 0x834 PushI
	AddReply(var_441_int, var_442_int, var_443_int); // 0x835 TObjFunc
	return 0; // 0x837 Return
	
Label_2104:
	var_444_int = 5336; // 0x838 PushI
	var_445_bool = var_46_bool == var_444_int; // 0x839 Eq
	if(var_445_bool == 0) goto Label_2127; // 0x83a JumpB
	var_446_string = ""; // 0x83b PushV
	var_446_string = "Distrust"; // 0x83c MovS
	func_1551(var_47_cvector, var_446_string); // 0x83d NEW_2
	var_447_int = 504864; // 0x83f PushI
	SetMessage(var_447_int); // 0x840 TObjFunc
	ClearReplies(); // 0x842 TObjFunc
	var_448_int = 504865; // 0x844 PushI
	var_449_int = 5338; // 0x845 PushI
	var_450_int = 5337; // 0x846 PushI
	AddReply(var_448_int, var_449_int, var_450_int); // 0x847 TObjFunc
	var_451_int = 504871; // 0x849 PushI
	var_452_int = 5344; // 0x84a PushI
	var_453_int = 5343; // 0x84b PushI
	AddReply(var_451_int, var_452_int, var_453_int); // 0x84c TObjFunc
	return 0; // 0x84e Return
	
Label_2127:
	var_454_int = 5344; // 0x84f PushI
	var_455_bool = var_46_bool == var_454_int; // 0x850 Eq
	if(var_455_bool == 0) goto Label_2150; // 0x851 JumpB
	var_456_string = ""; // 0x852 PushV
	var_456_string = "Anger"; // 0x853 MovS
	func_1551(var_47_cvector, var_456_string); // 0x854 NEW_2
	var_457_int = 504872; // 0x856 PushI
	SetMessage(var_457_int); // 0x857 TObjFunc
	ClearReplies(); // 0x859 TObjFunc
	var_458_int = 504873; // 0x85b PushI
	var_459_int = 5338; // 0x85c PushI
	var_460_int = 5345; // 0x85d PushI
	AddReply(var_458_int, var_459_int, var_460_int); // 0x85e TObjFunc
	var_461_int = 504874; // 0x860 PushI
	var_462_int = -1; // 0x861 PushI
	var_463_int = 5347; // 0x862 PushI
	AddReply(var_461_int, var_462_int, var_463_int); // 0x863 TObjFunc
	return 0; // 0x865 Return
	
Label_2150:
	var_464_int = 5338; // 0x866 PushI
	var_465_bool = var_46_bool == var_464_int; // 0x867 Eq
	if(var_465_bool == 0) goto Label_2168; // 0x868 JumpB
	var_466_string = ""; // 0x869 PushV
	var_466_string = "Distrust"; // 0x86a MovS
	func_1551(var_47_cvector, var_466_string); // 0x86b NEW_2
	var_467_int = 504866; // 0x86d PushI
	SetMessage(var_467_int); // 0x86e TObjFunc
	ClearReplies(); // 0x870 TObjFunc
	var_468_int = 504867; // 0x872 PushI
	var_469_int = 5340; // 0x873 PushI
	var_470_int = 5339; // 0x874 PushI
	AddReply(var_468_int, var_469_int, var_470_int); // 0x875 TObjFunc
	return 0; // 0x877 Return
	
Label_2168:
	var_471_int = 5340; // 0x878 PushI
	var_472_bool = var_46_bool == var_471_int; // 0x879 Eq
	if(var_472_bool == 0) goto Label_2191; // 0x87a JumpB
	var_473_string = ""; // 0x87b PushV
	var_473_string = "Neutral"; // 0x87c MovS
	func_1551(var_47_cvector, var_473_string); // 0x87d NEW_2
	var_474_int = 504868; // 0x87f PushI
	SetMessage(var_474_int); // 0x880 TObjFunc
	ClearReplies(); // 0x882 TObjFunc
	var_475_int = 504869; // 0x884 PushI
	var_476_int = -1; // 0x885 PushI
	var_477_int = 5341; // 0x886 PushI
	AddReply(var_475_int, var_476_int, var_477_int); // 0x887 TObjFunc
	var_478_int = 504870; // 0x889 PushI
	var_479_int = -1; // 0x88a PushI
	var_480_int = 5342; // 0x88b PushI
	AddReply(var_478_int, var_479_int, var_480_int); // 0x88c TObjFunc
	return 0; // 0x88e Return
	
Label_2191:
	var_481_int = 5329; // 0x88f PushI
	var_482_bool = var_46_bool == var_481_int; // 0x890 Eq
	if(var_482_bool == 0) goto Label_2194; // 0x891 JumpB
	
Label_2194:
	var_483_int = 5374; // 0x892 PushI
	var_484_bool = var_46_bool == var_483_int; // 0x893 Eq
	if(var_484_bool == 0) goto Label_2217; // 0x894 JumpB
	var_485_string = ""; // 0x895 PushV
	var_485_string = "Jeer"; // 0x896 MovS
	func_1551(var_47_cvector, var_485_string); // 0x897 NEW_2
	var_486_int = 504895; // 0x899 PushI
	SetMessage(var_486_int); // 0x89a TObjFunc
	ClearReplies(); // 0x89c TObjFunc
	var_487_int = 504896; // 0x89e PushI
	var_488_int = 5377; // 0x89f PushI
	var_489_int = 5375; // 0x8a0 PushI
	AddReply(var_487_int, var_488_int, var_489_int); // 0x8a1 TObjFunc
	var_490_int = 504897; // 0x8a3 PushI
	var_491_int = 5377; // 0x8a4 PushI
	var_492_int = 5376; // 0x8a5 PushI
	AddReply(var_490_int, var_491_int, var_492_int); // 0x8a6 TObjFunc
	return 0; // 0x8a8 Return
	
Label_2217:
	var_493_int = 5377; // 0x8a9 PushI
	var_494_bool = var_46_bool == var_493_int; // 0x8aa Eq
	if(var_494_bool == 0) goto Label_2240; // 0x8ab JumpB
	var_495_string = ""; // 0x8ac PushV
	var_495_string = "Jeer"; // 0x8ad MovS
	func_1551(var_47_cvector, var_495_string); // 0x8ae NEW_2
	var_496_int = 504898; // 0x8b0 PushI
	SetMessage(var_496_int); // 0x8b1 TObjFunc
	ClearReplies(); // 0x8b3 TObjFunc
	var_497_int = 504899; // 0x8b5 PushI
	var_498_int = 5380; // 0x8b6 PushI
	var_499_int = 5378; // 0x8b7 PushI
	AddReply(var_497_int, var_498_int, var_499_int); // 0x8b8 TObjFunc
	var_500_int = 504913; // 0x8ba PushI
	var_501_int = 5396; // 0x8bb PushI
	var_502_int = 5395; // 0x8bc PushI
	AddReply(var_500_int, var_501_int, var_502_int); // 0x8bd TObjFunc
	return 0; // 0x8bf Return
	
Label_2240:
	var_503_int = 5396; // 0x8c0 PushI
	var_504_bool = var_46_bool == var_503_int; // 0x8c1 Eq
	if(var_504_bool == 0) goto Label_2263; // 0x8c2 JumpB
	var_505_string = ""; // 0x8c3 PushV
	var_505_string = "Neutral"; // 0x8c4 MovS
	func_1551(var_47_cvector, var_505_string); // 0x8c5 NEW_2
	var_506_int = 504914; // 0x8c7 PushI
	SetMessage(var_506_int); // 0x8c8 TObjFunc
	ClearReplies(); // 0x8ca TObjFunc
	var_507_int = 504915; // 0x8cc PushI
	var_508_int = 5380; // 0x8cd PushI
	var_509_int = 5397; // 0x8ce PushI
	AddReply(var_507_int, var_508_int, var_509_int); // 0x8cf TObjFunc
	var_510_int = 532846; // 0x8d1 PushI
	var_511_int = -1; // 0x8d2 PushI
	var_512_int = 34330; // 0x8d3 PushI
	AddReply(var_510_int, var_511_int, var_512_int); // 0x8d4 TObjFunc
	return 0; // 0x8d6 Return
	
Label_2263:
	var_513_int = 5380; // 0x8d7 PushI
	var_514_bool = var_46_bool == var_513_int; // 0x8d8 Eq
	if(var_514_bool == 0) goto Label_2291; // 0x8d9 JumpB
	var_515_string = ""; // 0x8da PushV
	var_515_string = "Neutral"; // 0x8db MovS
	func_1551(var_47_cvector, var_515_string); // 0x8dc NEW_2
	var_516_int = 504900; // 0x8de PushI
	SetMessage(var_516_int); // 0x8df TObjFunc
	ClearReplies(); // 0x8e1 TObjFunc
	var_517_int = 504901; // 0x8e3 PushI
	var_518_int = 5382; // 0x8e4 PushI
	var_519_int = 5381; // 0x8e5 PushI
	AddReply(var_517_int, var_518_int, var_519_int); // 0x8e6 TObjFunc
	var_520_int = 504916; // 0x8e8 PushI
	var_521_int = 5382; // 0x8e9 PushI
	var_522_int = 5399; // 0x8ea PushI
	AddReply(var_520_int, var_521_int, var_522_int); // 0x8eb TObjFunc
	var_523_int = 504917; // 0x8ed PushI
	var_524_int = 5402; // 0x8ee PushI
	var_525_int = 5401; // 0x8ef PushI
	AddReply(var_523_int, var_524_int, var_525_int); // 0x8f0 TObjFunc
	return 0; // 0x8f2 Return
	
Label_2291:
	var_526_int = 5402; // 0x8f3 PushI
	var_527_bool = var_46_bool == var_526_int; // 0x8f4 Eq
	if(var_527_bool == 0) goto Label_2314; // 0x8f5 JumpB
	var_528_string = ""; // 0x8f6 PushV
	var_528_string = "Neutral"; // 0x8f7 MovS
	func_1551(var_47_cvector, var_528_string); // 0x8f8 NEW_2
	var_529_int = 504918; // 0x8fa PushI
	SetMessage(var_529_int); // 0x8fb TObjFunc
	ClearReplies(); // 0x8fd TObjFunc
	var_530_int = 504919; // 0x8ff PushI
	var_531_int = 5382; // 0x900 PushI
	var_532_int = 5403; // 0x901 PushI
	AddReply(var_530_int, var_531_int, var_532_int); // 0x902 TObjFunc
	var_533_int = 532847; // 0x904 PushI
	var_534_int = -1; // 0x905 PushI
	var_535_int = 34331; // 0x906 PushI
	AddReply(var_533_int, var_534_int, var_535_int); // 0x907 TObjFunc
	return 0; // 0x909 Return
	
Label_2314:
	var_536_int = 5382; // 0x90a PushI
	var_537_bool = var_46_bool == var_536_int; // 0x90b Eq
	if(var_537_bool == 0) goto Label_2367; // 0x90c JumpB
	var_538_object = Obj(); var_539_object = Obj(); // 0x90d PushV
	var_538_object = var_1_object; // 0x90e MovT
	var_539_object = var_0_object; // 0x90f MovT
	func_7069(); // 0x910 NEW_2
	var_542_object = Obj(); var_543_object = Obj(); // 0x912 PushV
	var_542_object = var_1_object; // 0x913 MovT
	var_543_object = var_0_object; // 0x914 MovT
	func_7063(); // 0x915 NEW_2
	var_546_object = Obj(); var_547_object = Obj(); // 0x917 PushV
	var_546_object = var_1_object; // 0x918 MovT
	var_547_object = var_0_object; // 0x919 MovT
	func_7057(); // 0x91a NEW_2
	var_550_object = Obj(); var_551_object = Obj(); // 0x91c PushV
	var_550_object = var_1_object; // 0x91d MovT
	var_551_object = var_0_object; // 0x91e MovT
	func_7081(); // 0x91f NEW_2
	var_554_object = Obj(); var_555_object = Obj(); // 0x921 PushV
	var_554_object = var_1_object; // 0x922 MovT
	var_555_object = var_0_object; // 0x923 MovT
	func_7087(); // 0x924 NEW_2
	var_558_string = ""; // 0x926 PushV
	var_558_string = "Anger"; // 0x927 MovS
	func_1551(var_47_cvector, var_558_string); // 0x928 NEW_2
	var_559_int = 504902; // 0x92a PushI
	SetMessage(var_559_int); // 0x92b TObjFunc
	ClearReplies(); // 0x92d TObjFunc
	var_560_int = 504903; // 0x92f PushI
	var_561_int = 5385; // 0x930 PushI
	var_562_int = 5383; // 0x931 PushI
	AddReply(var_560_int, var_561_int, var_562_int); // 0x932 TObjFunc
	var_563_int = 504925; // 0x934 PushI
	var_564_int = 5409; // 0x935 PushI
	var_565_int = 5412; // 0x936 PushI
	AddReply(var_563_int, var_564_int, var_565_int); // 0x937 TObjFunc
	var_566_int = 504920; // 0x939 PushI
	var_567_int = 5385; // 0x93a PushI
	var_568_int = 5405; // 0x93b PushI
	AddReply(var_566_int, var_567_int, var_568_int); // 0x93c TObjFunc
	return 0; // 0x93e Return
	
Label_2367:
	var_569_int = 5385; // 0x93f PushI
	var_570_bool = var_46_bool == var_569_int; // 0x940 Eq
	if(var_570_bool == 0) goto Label_2395; // 0x941 JumpB
	var_571_string = ""; // 0x942 PushV
	var_571_string = "Anger"; // 0x943 MovS
	func_1551(var_47_cvector, var_571_string); // 0x944 NEW_2
	var_572_int = 504905; // 0x946 PushI
	SetMessage(var_572_int); // 0x947 TObjFunc
	ClearReplies(); // 0x949 TObjFunc
	var_573_int = 504906; // 0x94b PushI
	var_574_int = 5388; // 0x94c PushI
	var_575_int = 5386; // 0x94d PushI
	AddReply(var_573_int, var_574_int, var_575_int); // 0x94e TObjFunc
	var_576_int = 504907; // 0x950 PushI
	var_577_int = 5388; // 0x951 PushI
	var_578_int = 5387; // 0x952 PushI
	AddReply(var_576_int, var_577_int, var_578_int); // 0x953 TObjFunc
	var_579_int = 504922; // 0x955 PushI
	var_580_int = 5409; // 0x956 PushI
	var_581_int = 5408; // 0x957 PushI
	AddReply(var_579_int, var_580_int, var_581_int); // 0x958 TObjFunc
	return 0; // 0x95a Return
	
Label_2395:
	var_582_int = 5409; // 0x95b PushI
	var_583_bool = var_46_bool == var_582_int; // 0x95c Eq
	if(var_583_bool == 0) goto Label_2413; // 0x95d JumpB
	var_584_string = ""; // 0x95e PushV
	var_584_string = "Neutral"; // 0x95f MovS
	func_1551(var_47_cvector, var_584_string); // 0x960 NEW_2
	var_585_int = 504923; // 0x962 PushI
	SetMessage(var_585_int); // 0x963 TObjFunc
	ClearReplies(); // 0x965 TObjFunc
	var_586_int = 504924; // 0x967 PushI
	var_587_int = 5388; // 0x968 PushI
	var_588_int = 5410; // 0x969 PushI
	AddReply(var_586_int, var_587_int, var_588_int); // 0x96a TObjFunc
	return 0; // 0x96c Return
	
Label_2413:
	var_589_int = 5388; // 0x96d PushI
	var_590_bool = var_46_bool == var_589_int; // 0x96e Eq
	if(var_590_bool == 0) goto Label_2436; // 0x96f JumpB
	var_591_string = ""; // 0x970 PushV
	var_591_string = "Neutral"; // 0x971 MovS
	func_1551(var_47_cvector, var_591_string); // 0x972 NEW_2
	var_592_int = 504908; // 0x974 PushI
	SetMessage(var_592_int); // 0x975 TObjFunc
	ClearReplies(); // 0x977 TObjFunc
	var_593_int = 504909; // 0x979 PushI
	var_594_int = 5392; // 0x97a PushI
	var_595_int = 5390; // 0x97b PushI
	AddReply(var_593_int, var_594_int, var_595_int); // 0x97c TObjFunc
	var_596_int = 504910; // 0x97e PushI
	var_597_int = 5392; // 0x97f PushI
	var_598_int = 5391; // 0x980 PushI
	AddReply(var_596_int, var_597_int, var_598_int); // 0x981 TObjFunc
	return 0; // 0x983 Return
	
Label_2436:
	var_599_int = 5392; // 0x984 PushI
	var_600_bool = var_46_bool == var_599_int; // 0x985 Eq
	if(var_600_bool == 0) goto Label_2459; // 0x986 JumpB
	var_601_string = ""; // 0x987 PushV
	var_601_string = "Neutral"; // 0x988 MovS
	func_1551(var_47_cvector, var_601_string); // 0x989 NEW_2
	var_602_int = 504911; // 0x98b PushI
	SetMessage(var_602_int); // 0x98c TObjFunc
	ClearReplies(); // 0x98e TObjFunc
	var_603_int = 504912; // 0x990 PushI
	var_604_int = -1; // 0x991 PushI
	var_605_int = 5394; // 0x992 PushI
	AddReply(var_603_int, var_604_int, var_605_int); // 0x993 TObjFunc
	var_606_int = 504921; // 0x995 PushI
	var_607_int = -1; // 0x996 PushI
	var_608_int = 5407; // 0x997 PushI
	AddReply(var_606_int, var_607_int, var_608_int); // 0x998 TObjFunc
	return 0; // 0x99a Return
	
Label_2459:
	var_609_int = 32990; // 0x99b PushI
	var_610_bool = var_46_bool == var_609_int; // 0x99c Eq
	if(var_610_bool == 0) goto Label_2482; // 0x99d JumpB
	var_611_string = ""; // 0x99e PushV
	var_611_string = "Distrust"; // 0x99f MovS
	func_1551(var_47_cvector, var_611_string); // 0x9a0 NEW_2
	var_612_int = 531618; // 0x9a2 PushI
	SetMessage(var_612_int); // 0x9a3 TObjFunc
	ClearReplies(); // 0x9a5 TObjFunc
	var_613_int = 532837; // 0x9a7 PushI
	var_614_int = 34319; // 0x9a8 PushI
	var_615_int = 34318; // 0x9a9 PushI
	AddReply(var_613_int, var_614_int, var_615_int); // 0x9aa TObjFunc
	var_616_int = 532833; // 0x9ac PushI
	var_617_int = 34315; // 0x9ad PushI
	var_618_int = 34314; // 0x9ae PushI
	AddReply(var_616_int, var_617_int, var_618_int); // 0x9af TObjFunc
	return 0; // 0x9b1 Return
	
Label_2482:
	var_619_int = 34315; // 0x9b2 PushI
	var_620_bool = var_46_bool == var_619_int; // 0x9b3 Eq
	if(var_620_bool == 0) goto Label_2505; // 0x9b4 JumpB
	var_621_string = ""; // 0x9b5 PushV
	var_621_string = "Neutral"; // 0x9b6 MovS
	func_1551(var_47_cvector, var_621_string); // 0x9b7 NEW_2
	var_622_int = 532834; // 0x9b9 PushI
	SetMessage(var_622_int); // 0x9ba TObjFunc
	ClearReplies(); // 0x9bc TObjFunc
	var_623_int = 532843; // 0x9be PushI
	var_624_int = 34327; // 0x9bf PushI
	var_625_int = 34326; // 0x9c0 PushI
	AddReply(var_623_int, var_624_int, var_625_int); // 0x9c1 TObjFunc
	var_626_int = 532839; // 0x9c3 PushI
	var_627_int = 34321; // 0x9c4 PushI
	var_628_int = 34320; // 0x9c5 PushI
	AddReply(var_626_int, var_627_int, var_628_int); // 0x9c6 TObjFunc
	return 0; // 0x9c8 Return
	
Label_2505:
	var_629_int = 34327; // 0x9c9 PushI
	var_630_bool = var_46_bool == var_629_int; // 0x9ca Eq
	if(var_630_bool == 0) goto Label_2523; // 0x9cb JumpB
	var_631_string = ""; // 0x9cc PushV
	var_631_string = "Neutral"; // 0x9cd MovS
	func_1551(var_47_cvector, var_631_string); // 0x9ce NEW_2
	var_632_int = 532844; // 0x9d0 PushI
	SetMessage(var_632_int); // 0x9d1 TObjFunc
	ClearReplies(); // 0x9d3 TObjFunc
	var_633_int = 532845; // 0x9d5 PushI
	var_634_int = 34319; // 0x9d6 PushI
	var_635_int = 34328; // 0x9d7 PushI
	AddReply(var_633_int, var_634_int, var_635_int); // 0x9d8 TObjFunc
	return 0; // 0x9da Return
	
Label_2523:
	var_636_int = 34319; // 0x9db PushI
	var_637_bool = var_46_bool == var_636_int; // 0x9dc Eq
	if(var_637_bool == 0) goto Label_2541; // 0x9dd JumpB
	var_638_string = ""; // 0x9de PushV
	var_638_string = "Distrust"; // 0x9df MovS
	func_1551(var_47_cvector, var_638_string); // 0x9e0 NEW_2
	var_639_int = 532838; // 0x9e2 PushI
	SetMessage(var_639_int); // 0x9e3 TObjFunc
	ClearReplies(); // 0x9e5 TObjFunc
	var_640_int = 532835; // 0x9e7 PushI
	var_641_int = 34321; // 0x9e8 PushI
	var_642_int = 34316; // 0x9e9 PushI
	AddReply(var_640_int, var_641_int, var_642_int); // 0x9ea TObjFunc
	return 0; // 0x9ec Return
	
Label_2541:
	var_643_int = 34321; // 0x9ed PushI
	var_644_bool = var_46_bool == var_643_int; // 0x9ee Eq
	if(var_644_bool == 0) goto Label_2564; // 0x9ef JumpB
	var_645_string = ""; // 0x9f0 PushV
	var_645_string = "Neutral"; // 0x9f1 MovS
	func_1551(var_47_cvector, var_645_string); // 0x9f2 NEW_2
	var_646_int = 532840; // 0x9f4 PushI
	SetMessage(var_646_int); // 0x9f5 TObjFunc
	ClearReplies(); // 0x9f7 TObjFunc
	var_647_int = 531619; // 0x9f9 PushI
	var_648_int = -1; // 0x9fa PushI
	var_649_int = 32991; // 0x9fb PushI
	AddReply(var_647_int, var_648_int, var_649_int); // 0x9fc TObjFunc
	var_650_int = 532842; // 0x9fe PushI
	var_651_int = -1; // 0x9ff PushI
	var_652_int = 34325; // 0xa00 PushI
	AddReply(var_650_int, var_651_int, var_652_int); // 0xa01 TObjFunc
	return 0; // 0xa03 Return
	
Label_2564:
	var_653_int = 5354; // 0xa04 PushI
	var_654_bool = var_46_bool == var_653_int; // 0xa05 Eq
	if(var_654_bool == 0) goto Label_2587; // 0xa06 JumpB
	var_655_string = ""; // 0xa07 PushV
	var_655_string = "Distrust"; // 0xa08 MovS
	func_1551(var_47_cvector, var_655_string); // 0xa09 NEW_2
	var_656_int = 504880; // 0xa0b PushI
	SetMessage(var_656_int); // 0xa0c TObjFunc
	ClearReplies(); // 0xa0e TObjFunc
	var_657_int = 504881; // 0xa10 PushI
	var_658_int = 5356; // 0xa11 PushI
	var_659_int = 5355; // 0xa12 PushI
	AddReply(var_657_int, var_658_int, var_659_int); // 0xa13 TObjFunc
	var_660_int = 504889; // 0xa15 PushI
	var_661_int = 5356; // 0xa16 PushI
	var_662_int = 5365; // 0xa17 PushI
	AddReply(var_660_int, var_661_int, var_662_int); // 0xa18 TObjFunc
	return 0; // 0xa1a Return
	
Label_2587:
	var_663_int = 5356; // 0xa1b PushI
	var_664_bool = var_46_bool == var_663_int; // 0xa1c Eq
	if(var_664_bool == 0) goto Label_2610; // 0xa1d JumpB
	var_665_string = ""; // 0xa1e PushV
	var_665_string = "Anger"; // 0xa1f MovS
	func_1551(var_47_cvector, var_665_string); // 0xa20 NEW_2
	var_666_int = 504882; // 0xa22 PushI
	SetMessage(var_666_int); // 0xa23 TObjFunc
	ClearReplies(); // 0xa25 TObjFunc
	var_667_int = 504883; // 0xa27 PushI
	var_668_int = 5358; // 0xa28 PushI
	var_669_int = 5357; // 0xa29 PushI
	AddReply(var_667_int, var_668_int, var_669_int); // 0xa2a TObjFunc
	var_670_int = 504887; // 0xa2c PushI
	var_671_int = 5358; // 0xa2d PushI
	var_672_int = 5361; // 0xa2e PushI
	AddReply(var_670_int, var_671_int, var_672_int); // 0xa2f TObjFunc
	return 0; // 0xa31 Return
	
Label_2610:
	var_673_int = 5358; // 0xa32 PushI
	var_674_bool = var_46_bool == var_673_int; // 0xa33 Eq
	if(var_674_bool == 0) goto Label_2628; // 0xa34 JumpB
	var_675_string = ""; // 0xa35 PushV
	var_675_string = "Anger"; // 0xa36 MovS
	func_1551(var_47_cvector, var_675_string); // 0xa37 NEW_2
	var_676_int = 504884; // 0xa39 PushI
	SetMessage(var_676_int); // 0xa3a TObjFunc
	ClearReplies(); // 0xa3c TObjFunc
	var_677_int = 521895; // 0xa3e PushI
	var_678_int = 23069; // 0xa3f PushI
	var_679_int = 23068; // 0xa40 PushI
	AddReply(var_677_int, var_678_int, var_679_int); // 0xa41 TObjFunc
	return 0; // 0xa43 Return
	
Label_2628:
	var_680_int = 23069; // 0xa44 PushI
	var_681_bool = var_46_bool == var_680_int; // 0xa45 Eq
	if(var_681_bool == 0) goto Label_2651; // 0xa46 JumpB
	var_682_string = ""; // 0xa47 PushV
	var_682_string = "Distrust"; // 0xa48 MovS
	func_1551(var_47_cvector, var_682_string); // 0xa49 NEW_2
	var_683_int = 521896; // 0xa4b PushI
	SetMessage(var_683_int); // 0xa4c TObjFunc
	ClearReplies(); // 0xa4e TObjFunc
	var_684_int = 504886; // 0xa50 PushI
	var_685_int = -1; // 0xa51 PushI
	var_686_int = 5360; // 0xa52 PushI
	AddReply(var_684_int, var_685_int, var_686_int); // 0xa53 TObjFunc
	var_687_int = 504885; // 0xa55 PushI
	var_688_int = -1; // 0xa56 PushI
	var_689_int = 5359; // 0xa57 PushI
	AddReply(var_687_int, var_688_int, var_689_int); // 0xa58 TObjFunc
	return 0; // 0xa5a Return
	
Label_2651:
	var_690_int = 5370; // 0xa5b PushI
	var_691_bool = var_46_bool == var_690_int; // 0xa5c Eq
	if(var_691_bool == 0) goto Label_2674; // 0xa5d JumpB
	var_692_string = ""; // 0xa5e PushV
	var_692_string = "Neutral"; // 0xa5f MovS
	func_1551(var_47_cvector, var_692_string); // 0xa60 NEW_2
	var_693_int = 504892; // 0xa62 PushI
	SetMessage(var_693_int); // 0xa63 TObjFunc
	ClearReplies(); // 0xa65 TObjFunc
	var_694_int = 504928; // 0xa67 PushI
	var_695_int = 5421; // 0xa68 PushI
	var_696_int = 5416; // 0xa69 PushI
	AddReply(var_694_int, var_695_int, var_696_int); // 0xa6a TObjFunc
	var_697_int = 504929; // 0xa6c PushI
	var_698_int = 5418; // 0xa6d PushI
	var_699_int = 5417; // 0xa6e PushI
	AddReply(var_697_int, var_698_int, var_699_int); // 0xa6f TObjFunc
	return 0; // 0xa71 Return
	
Label_2674:
	var_700_int = 5418; // 0xa72 PushI
	var_701_bool = var_46_bool == var_700_int; // 0xa73 Eq
	if(var_701_bool == 0) goto Label_2692; // 0xa74 JumpB
	var_702_string = ""; // 0xa75 PushV
	var_702_string = "Neutral"; // 0xa76 MovS
	func_1551(var_47_cvector, var_702_string); // 0xa77 NEW_2
	var_703_int = 504930; // 0xa79 PushI
	SetMessage(var_703_int); // 0xa7a TObjFunc
	ClearReplies(); // 0xa7c TObjFunc
	var_704_int = 504931; // 0xa7e PushI
	var_705_int = 5358; // 0xa7f PushI
	var_706_int = 5419; // 0xa80 PushI
	AddReply(var_704_int, var_705_int, var_706_int); // 0xa81 TObjFunc
	return 0; // 0xa83 Return
	
Label_2692:
	var_707_int = 5421; // 0xa84 PushI
	var_708_bool = var_46_bool == var_707_int; // 0xa85 Eq
	if(var_708_bool == 0) goto Label_2715; // 0xa86 JumpB
	var_709_string = ""; // 0xa87 PushV
	var_709_string = "Neutral"; // 0xa88 MovS
	func_1551(var_47_cvector, var_709_string); // 0xa89 NEW_2
	var_710_int = 504932; // 0xa8b PushI
	SetMessage(var_710_int); // 0xa8c TObjFunc
	ClearReplies(); // 0xa8e TObjFunc
	var_711_int = 521889; // 0xa90 PushI
	var_712_int = 23062; // 0xa91 PushI
	var_713_int = 23061; // 0xa92 PushI
	AddReply(var_711_int, var_712_int, var_713_int); // 0xa93 TObjFunc
	var_714_int = 521891; // 0xa95 PushI
	var_715_int = 23062; // 0xa96 PushI
	var_716_int = 23063; // 0xa97 PushI
	AddReply(var_714_int, var_715_int, var_716_int); // 0xa98 TObjFunc
	return 0; // 0xa9a Return
	
Label_2715:
	var_717_int = 23062; // 0xa9b PushI
	var_718_bool = var_46_bool == var_717_int; // 0xa9c Eq
	if(var_718_bool == 0) goto Label_2738; // 0xa9d JumpB
	var_719_string = ""; // 0xa9e PushV
	var_719_string = "Neutral"; // 0xa9f MovS
	func_1551(var_47_cvector, var_719_string); // 0xaa0 NEW_2
	var_720_int = 521890; // 0xaa2 PushI
	SetMessage(var_720_int); // 0xaa3 TObjFunc
	ClearReplies(); // 0xaa5 TObjFunc
	var_721_int = 504893; // 0xaa7 PushI
	var_722_int = 5354; // 0xaa8 PushI
	var_723_int = 5371; // 0xaa9 PushI
	AddReply(var_721_int, var_722_int, var_723_int); // 0xaaa TObjFunc
	var_724_int = 504933; // 0xaac PushI
	var_725_int = 5423; // 0xaad PushI
	var_726_int = 5422; // 0xaae PushI
	AddReply(var_724_int, var_725_int, var_726_int); // 0xaaf TObjFunc
	return 0; // 0xab1 Return
	
Label_2738:
	var_727_int = 5423; // 0xab2 PushI
	var_728_bool = var_46_bool == var_727_int; // 0xab3 Eq
	if(var_728_bool == 0) goto Label_2761; // 0xab4 JumpB
	var_729_string = ""; // 0xab5 PushV
	var_729_string = "Neutral"; // 0xab6 MovS
	func_1551(var_47_cvector, var_729_string); // 0xab7 NEW_2
	var_730_int = 504934; // 0xab9 PushI
	SetMessage(var_730_int); // 0xaba TObjFunc
	ClearReplies(); // 0xabc TObjFunc
	var_731_int = 504935; // 0xabe PushI
	var_732_int = 23066; // 0xabf PushI
	var_733_int = 5424; // 0xac0 PushI
	AddReply(var_731_int, var_732_int, var_733_int); // 0xac1 TObjFunc
	var_734_int = 521892; // 0xac3 PushI
	var_735_int = -1; // 0xac4 PushI
	var_736_int = 23065; // 0xac5 PushI
	AddReply(var_734_int, var_735_int, var_736_int); // 0xac6 TObjFunc
	return 0; // 0xac8 Return
	
Label_2761:
	var_737_int = 23066; // 0xac9 PushI
	var_738_bool = var_46_bool == var_737_int; // 0xaca Eq
	if(var_738_bool == 0) goto Label_2784; // 0xacb JumpB
	var_739_string = ""; // 0xacc PushV
	var_739_string = "Neutral"; // 0xacd MovS
	func_1551(var_47_cvector, var_739_string); // 0xace NEW_2
	var_740_int = 521893; // 0xad0 PushI
	SetMessage(var_740_int); // 0xad1 TObjFunc
	ClearReplies(); // 0xad3 TObjFunc
	var_741_int = 521894; // 0xad5 PushI
	var_742_int = -1; // 0xad6 PushI
	var_743_int = 23067; // 0xad7 PushI
	AddReply(var_741_int, var_742_int, var_743_int); // 0xad8 TObjFunc
	var_744_int = 542997; // 0xada PushI
	var_745_int = -1; // 0xadb PushI
	var_746_int = 45445; // 0xadc PushI
	AddReply(var_744_int, var_745_int, var_746_int); // 0xadd TObjFunc
	return 0; // 0xadf Return
	
Label_2784:
	var_747_int = 32986; // 0xae0 PushI
	var_748_bool = var_46_bool == var_747_int; // 0xae1 Eq
	if(var_748_bool == 0) goto Label_2802; // 0xae2 JumpB
	var_749_string = ""; // 0xae3 PushV
	var_749_string = "Neutral"; // 0xae4 MovS
	func_1551(var_47_cvector, var_749_string); // 0xae5 NEW_2
	var_750_int = 531615; // 0xae7 PushI
	SetMessage(var_750_int); // 0xae8 TObjFunc
	ClearReplies(); // 0xaea TObjFunc
	var_751_int = 531616; // 0xaec PushI
	var_752_int = 32927; // 0xaed PushI
	var_753_int = 32987; // 0xaee PushI
	AddReply(var_751_int, var_752_int, var_753_int); // 0xaef TObjFunc
	return 0; // 0xaf1 Return
	
Label_2802:
	var_754_int = 32978; // 0xaf2 PushI
	var_755_bool = var_46_bool == var_754_int; // 0xaf3 Eq
	if(var_755_bool == 0) goto Label_2820; // 0xaf4 JumpB
	var_756_string = ""; // 0xaf5 PushV
	var_756_string = "Anger"; // 0xaf6 MovS
	func_1551(var_47_cvector, var_756_string); // 0xaf7 NEW_2
	var_757_int = 531609; // 0xaf9 PushI
	SetMessage(var_757_int); // 0xafa TObjFunc
	ClearReplies(); // 0xafc TObjFunc
	var_758_int = 531610; // 0xafe PushI
	var_759_int = 32980; // 0xaff PushI
	var_760_int = 32979; // 0xb00 PushI
	AddReply(var_758_int, var_759_int, var_760_int); // 0xb01 TObjFunc
	return 0; // 0xb03 Return
	
Label_2820:
	var_761_int = 32980; // 0xb04 PushI
	var_762_bool = var_46_bool == var_761_int; // 0xb05 Eq
	if(var_762_bool == 0) goto Label_2843; // 0xb06 JumpB
	var_763_string = ""; // 0xb07 PushV
	var_763_string = "Neutral"; // 0xb08 MovS
	func_1551(var_47_cvector, var_763_string); // 0xb09 NEW_2
	var_764_int = 531611; // 0xb0b PushI
	SetMessage(var_764_int); // 0xb0c TObjFunc
	ClearReplies(); // 0xb0e TObjFunc
	var_765_int = 531612; // 0xb10 PushI
	var_766_int = 32927; // 0xb11 PushI
	var_767_int = 32981; // 0xb12 PushI
	AddReply(var_765_int, var_766_int, var_767_int); // 0xb13 TObjFunc
	var_768_int = 531613; // 0xb15 PushI
	var_769_int = 32931; // 0xb16 PushI
	var_770_int = 32983; // 0xb17 PushI
	AddReply(var_768_int, var_769_int, var_770_int); // 0xb18 TObjFunc
	return 0; // 0xb1a Return
	
Label_2843:
	var_771_int = 32927; // 0xb1b PushI
	var_772_bool = var_46_bool == var_771_int; // 0xb1c Eq
	if(var_772_bool == 0) goto Label_2866; // 0xb1d JumpB
	var_773_string = ""; // 0xb1e PushV
	var_773_string = "Anger"; // 0xb1f MovS
	func_1551(var_47_cvector, var_773_string); // 0xb20 NEW_2
	var_774_int = 531568; // 0xb22 PushI
	SetMessage(var_774_int); // 0xb23 TObjFunc
	ClearReplies(); // 0xb25 TObjFunc
	var_775_int = 531569; // 0xb27 PushI
	var_776_int = 32929; // 0xb28 PushI
	var_777_int = 32928; // 0xb29 PushI
	AddReply(var_775_int, var_776_int, var_777_int); // 0xb2a TObjFunc
	var_778_int = 531595; // 0xb2c PushI
	var_779_int = 32960; // 0xb2d PushI
	var_780_int = 32959; // 0xb2e PushI
	AddReply(var_778_int, var_779_int, var_780_int); // 0xb2f TObjFunc
	return 0; // 0xb31 Return
	
Label_2866:
	var_781_int = 32960; // 0xb32 PushI
	var_782_bool = var_46_bool == var_781_int; // 0xb33 Eq
	if(var_782_bool == 0) goto Label_2889; // 0xb34 JumpB
	var_783_string = ""; // 0xb35 PushV
	var_783_string = "Neutral"; // 0xb36 MovS
	func_1551(var_47_cvector, var_783_string); // 0xb37 NEW_2
	var_784_int = 531596; // 0xb39 PushI
	SetMessage(var_784_int); // 0xb3a TObjFunc
	ClearReplies(); // 0xb3c TObjFunc
	var_785_int = 531597; // 0xb3e PushI
	var_786_int = 32962; // 0xb3f PushI
	var_787_int = 32961; // 0xb40 PushI
	AddReply(var_785_int, var_786_int, var_787_int); // 0xb41 TObjFunc
	var_788_int = 531607; // 0xb43 PushI
	var_789_int = 32962; // 0xb44 PushI
	var_790_int = 32975; // 0xb45 PushI
	AddReply(var_788_int, var_789_int, var_790_int); // 0xb46 TObjFunc
	return 0; // 0xb48 Return
	
Label_2889:
	var_791_int = 32962; // 0xb49 PushI
	var_792_bool = var_46_bool == var_791_int; // 0xb4a Eq
	if(var_792_bool == 0) goto Label_2912; // 0xb4b JumpB
	var_793_string = ""; // 0xb4c PushV
	var_793_string = "Anger"; // 0xb4d MovS
	func_1551(var_47_cvector, var_793_string); // 0xb4e NEW_2
	var_794_int = 531598; // 0xb50 PushI
	SetMessage(var_794_int); // 0xb51 TObjFunc
	ClearReplies(); // 0xb53 TObjFunc
	var_795_int = 531599; // 0xb55 PushI
	var_796_int = 32964; // 0xb56 PushI
	var_797_int = 32963; // 0xb57 PushI
	AddReply(var_795_int, var_796_int, var_797_int); // 0xb58 TObjFunc
	var_798_int = 531606; // 0xb5a PushI
	var_799_int = 32933; // 0xb5b PushI
	var_800_int = 32973; // 0xb5c PushI
	AddReply(var_798_int, var_799_int, var_800_int); // 0xb5d TObjFunc
	return 0; // 0xb5f Return
	
Label_2912:
	var_801_int = 32964; // 0xb60 PushI
	var_802_bool = var_46_bool == var_801_int; // 0xb61 Eq
	if(var_802_bool == 0) goto Label_2935; // 0xb62 JumpB
	var_803_string = ""; // 0xb63 PushV
	var_803_string = "Anger"; // 0xb64 MovS
	func_1551(var_47_cvector, var_803_string); // 0xb65 NEW_2
	var_804_int = 531600; // 0xb67 PushI
	SetMessage(var_804_int); // 0xb68 TObjFunc
	ClearReplies(); // 0xb6a TObjFunc
	var_805_int = 531601; // 0xb6c PushI
	var_806_int = 32966; // 0xb6d PushI
	var_807_int = 32965; // 0xb6e PushI
	AddReply(var_805_int, var_806_int, var_807_int); // 0xb6f TObjFunc
	var_808_int = 531605; // 0xb71 PushI
	var_809_int = 32966; // 0xb72 PushI
	var_810_int = 32971; // 0xb73 PushI
	AddReply(var_808_int, var_809_int, var_810_int); // 0xb74 TObjFunc
	return 0; // 0xb76 Return
	
Label_2935:
	var_811_int = 32966; // 0xb77 PushI
	var_812_bool = var_46_bool == var_811_int; // 0xb78 Eq
	if(var_812_bool == 0) goto Label_2958; // 0xb79 JumpB
	var_813_string = ""; // 0xb7a PushV
	var_813_string = "Neutral"; // 0xb7b MovS
	func_1551(var_47_cvector, var_813_string); // 0xb7c NEW_2
	var_814_int = 531602; // 0xb7e PushI
	SetMessage(var_814_int); // 0xb7f TObjFunc
	ClearReplies(); // 0xb81 TObjFunc
	var_815_int = 531603; // 0xb83 PushI
	var_816_int = 32931; // 0xb84 PushI
	var_817_int = 32967; // 0xb85 PushI
	AddReply(var_815_int, var_816_int, var_817_int); // 0xb86 TObjFunc
	var_818_int = 531604; // 0xb88 PushI
	var_819_int = 32931; // 0xb89 PushI
	var_820_int = 32969; // 0xb8a PushI
	AddReply(var_818_int, var_819_int, var_820_int); // 0xb8b TObjFunc
	return 0; // 0xb8d Return
	
Label_2958:
	var_821_int = 32929; // 0xb8e PushI
	var_822_bool = var_46_bool == var_821_int; // 0xb8f Eq
	if(var_822_bool == 0) goto Label_2981; // 0xb90 JumpB
	var_823_string = ""; // 0xb91 PushV
	var_823_string = "Anger"; // 0xb92 MovS
	func_1551(var_47_cvector, var_823_string); // 0xb93 NEW_2
	var_824_int = 531570; // 0xb95 PushI
	SetMessage(var_824_int); // 0xb96 TObjFunc
	ClearReplies(); // 0xb98 TObjFunc
	var_825_int = 531571; // 0xb9a PushI
	var_826_int = 32931; // 0xb9b PushI
	var_827_int = 32930; // 0xb9c PushI
	AddReply(var_825_int, var_826_int, var_827_int); // 0xb9d TObjFunc
	var_828_int = 531594; // 0xb9f PushI
	var_829_int = 32931; // 0xba0 PushI
	var_830_int = 32957; // 0xba1 PushI
	AddReply(var_828_int, var_829_int, var_830_int); // 0xba2 TObjFunc
	return 0; // 0xba4 Return
	
Label_2981:
	var_831_int = 32931; // 0xba5 PushI
	var_832_bool = var_46_bool == var_831_int; // 0xba6 Eq
	if(var_832_bool == 0) goto Label_3004; // 0xba7 JumpB
	var_833_string = ""; // 0xba8 PushV
	var_833_string = "Neutral"; // 0xba9 MovS
	func_1551(var_47_cvector, var_833_string); // 0xbaa NEW_2
	var_834_int = 531572; // 0xbac PushI
	SetMessage(var_834_int); // 0xbad TObjFunc
	ClearReplies(); // 0xbaf TObjFunc
	var_835_int = 531573; // 0xbb1 PushI
	var_836_int = 32933; // 0xbb2 PushI
	var_837_int = 32932; // 0xbb3 PushI
	AddReply(var_835_int, var_836_int, var_837_int); // 0xbb4 TObjFunc
	var_838_int = 531593; // 0xbb6 PushI
	var_839_int = 32933; // 0xbb7 PushI
	var_840_int = 32955; // 0xbb8 PushI
	AddReply(var_838_int, var_839_int, var_840_int); // 0xbb9 TObjFunc
	return 0; // 0xbbb Return
	
Label_3004:
	var_841_int = 32933; // 0xbbc PushI
	var_842_bool = var_46_bool == var_841_int; // 0xbbd Eq
	if(var_842_bool == 0) goto Label_3027; // 0xbbe JumpB
	var_843_string = ""; // 0xbbf PushV
	var_843_string = "Neutral"; // 0xbc0 MovS
	func_1551(var_47_cvector, var_843_string); // 0xbc1 NEW_2
	var_844_int = 531574; // 0xbc3 PushI
	SetMessage(var_844_int); // 0xbc4 TObjFunc
	ClearReplies(); // 0xbc6 TObjFunc
	var_845_int = 531575; // 0xbc8 PushI
	var_846_int = 32935; // 0xbc9 PushI
	var_847_int = 32934; // 0xbca PushI
	AddReply(var_845_int, var_846_int, var_847_int); // 0xbcb TObjFunc
	var_848_int = 531590; // 0xbcd PushI
	var_849_int = 32952; // 0xbce PushI
	var_850_int = 32951; // 0xbcf PushI
	AddReply(var_848_int, var_849_int, var_850_int); // 0xbd0 TObjFunc
	return 0; // 0xbd2 Return
	
Label_3027:
	var_851_int = 32952; // 0xbd3 PushI
	var_852_bool = var_46_bool == var_851_int; // 0xbd4 Eq
	if(var_852_bool == 0) goto Label_3045; // 0xbd5 JumpB
	var_853_string = ""; // 0xbd6 PushV
	var_853_string = "Neutral"; // 0xbd7 MovS
	func_1551(var_47_cvector, var_853_string); // 0xbd8 NEW_2
	var_854_int = 531591; // 0xbda PushI
	SetMessage(var_854_int); // 0xbdb TObjFunc
	ClearReplies(); // 0xbdd TObjFunc
	var_855_int = 531592; // 0xbdf PushI
	var_856_int = 32935; // 0xbe0 PushI
	var_857_int = 32953; // 0xbe1 PushI
	AddReply(var_855_int, var_856_int, var_857_int); // 0xbe2 TObjFunc
	return 0; // 0xbe4 Return
	
Label_3045:
	var_858_int = 32935; // 0xbe5 PushI
	var_859_bool = var_46_bool == var_858_int; // 0xbe6 Eq
	if(var_859_bool == 0) goto Label_3068; // 0xbe7 JumpB
	var_860_string = ""; // 0xbe8 PushV
	var_860_string = "Neutral"; // 0xbe9 MovS
	func_1551(var_47_cvector, var_860_string); // 0xbea NEW_2
	var_861_int = 531576; // 0xbec PushI
	SetMessage(var_861_int); // 0xbed TObjFunc
	ClearReplies(); // 0xbef TObjFunc
	var_862_int = 531577; // 0xbf1 PushI
	var_863_int = 32937; // 0xbf2 PushI
	var_864_int = 32936; // 0xbf3 PushI
	AddReply(var_862_int, var_863_int, var_864_int); // 0xbf4 TObjFunc
	var_865_int = 531589; // 0xbf6 PushI
	var_866_int = 32941; // 0xbf7 PushI
	var_867_int = 32949; // 0xbf8 PushI
	AddReply(var_865_int, var_866_int, var_867_int); // 0xbf9 TObjFunc
	return 0; // 0xbfb Return
	
Label_3068:
	var_868_int = 32937; // 0xbfc PushI
	var_869_bool = var_46_bool == var_868_int; // 0xbfd Eq
	if(var_869_bool == 0) goto Label_3091; // 0xbfe JumpB
	var_870_string = ""; // 0xbff PushV
	var_870_string = "Neutral"; // 0xc00 MovS
	func_1551(var_47_cvector, var_870_string); // 0xc01 NEW_2
	var_871_int = 531578; // 0xc03 PushI
	SetMessage(var_871_int); // 0xc04 TObjFunc
	ClearReplies(); // 0xc06 TObjFunc
	var_872_int = 531579; // 0xc08 PushI
	var_873_int = 32939; // 0xc09 PushI
	var_874_int = 32938; // 0xc0a PushI
	AddReply(var_872_int, var_873_int, var_874_int); // 0xc0b TObjFunc
	var_875_int = 531588; // 0xc0d PushI
	var_876_int = 32941; // 0xc0e PushI
	var_877_int = 32947; // 0xc0f PushI
	AddReply(var_875_int, var_876_int, var_877_int); // 0xc10 TObjFunc
	return 0; // 0xc12 Return
	
Label_3091:
	var_878_int = 32939; // 0xc13 PushI
	var_879_bool = var_46_bool == var_878_int; // 0xc14 Eq
	if(var_879_bool == 0) goto Label_3109; // 0xc15 JumpB
	var_880_string = ""; // 0xc16 PushV
	var_880_string = "Neutral"; // 0xc17 MovS
	func_1551(var_47_cvector, var_880_string); // 0xc18 NEW_2
	var_881_int = 531580; // 0xc1a PushI
	SetMessage(var_881_int); // 0xc1b TObjFunc
	ClearReplies(); // 0xc1d TObjFunc
	var_882_int = 531581; // 0xc1f PushI
	var_883_int = 32941; // 0xc20 PushI
	var_884_int = 32940; // 0xc21 PushI
	AddReply(var_882_int, var_883_int, var_884_int); // 0xc22 TObjFunc
	return 0; // 0xc24 Return
	
Label_3109:
	var_885_int = 32941; // 0xc25 PushI
	var_886_bool = var_46_bool == var_885_int; // 0xc26 Eq
	if(var_886_bool == 0) goto Label_3132; // 0xc27 JumpB
	var_887_string = ""; // 0xc28 PushV
	var_887_string = "Anger"; // 0xc29 MovS
	func_1551(var_47_cvector, var_887_string); // 0xc2a NEW_2
	var_888_int = 531582; // 0xc2c PushI
	SetMessage(var_888_int); // 0xc2d TObjFunc
	ClearReplies(); // 0xc2f TObjFunc
	var_889_int = 531583; // 0xc31 PushI
	var_890_int = 34601; // 0xc32 PushI
	var_891_int = 32942; // 0xc33 PushI
	AddReply(var_889_int, var_890_int, var_891_int); // 0xc34 TObjFunc
	var_892_int = 531587; // 0xc36 PushI
	var_893_int = -1; // 0xc37 PushI
	var_894_int = 32946; // 0xc38 PushI
	AddReply(var_892_int, var_893_int, var_894_int); // 0xc39 TObjFunc
	return 0; // 0xc3b Return
	
Label_3132:
	var_895_int = 34601; // 0xc3c PushI
	var_896_bool = var_46_bool == var_895_int; // 0xc3d Eq
	if(var_896_bool == 0) goto Label_3155; // 0xc3e JumpB
	var_897_string = ""; // 0xc3f PushV
	var_897_string = "Jeer"; // 0xc40 MovS
	func_1551(var_47_cvector, var_897_string); // 0xc41 NEW_2
	var_898_int = 533090; // 0xc43 PushI
	SetMessage(var_898_int); // 0xc44 TObjFunc
	ClearReplies(); // 0xc46 TObjFunc
	var_899_int = 533091; // 0xc48 PushI
	var_900_int = 32943; // 0xc49 PushI
	var_901_int = 34602; // 0xc4a PushI
	AddReply(var_899_int, var_900_int, var_901_int); // 0xc4b TObjFunc
	var_902_int = 533092; // 0xc4d PushI
	var_903_int = -1; // 0xc4e PushI
	var_904_int = 34603; // 0xc4f PushI
	AddReply(var_902_int, var_903_int, var_904_int); // 0xc50 TObjFunc
	return 0; // 0xc52 Return
	
Label_3155:
	var_905_int = 32943; // 0xc53 PushI
	var_906_bool = var_46_bool == var_905_int; // 0xc54 Eq
	if(var_906_bool == 0) goto Label_3178; // 0xc55 JumpB
	var_907_string = ""; // 0xc56 PushV
	var_907_string = "Jeer"; // 0xc57 MovS
	func_1551(var_47_cvector, var_907_string); // 0xc58 NEW_2
	var_908_int = 531584; // 0xc5a PushI
	SetMessage(var_908_int); // 0xc5b TObjFunc
	ClearReplies(); // 0xc5d TObjFunc
	var_909_int = 531585; // 0xc5f PushI
	var_910_int = -1; // 0xc60 PushI
	var_911_int = 32944; // 0xc61 PushI
	AddReply(var_909_int, var_910_int, var_911_int); // 0xc62 TObjFunc
	var_912_int = 531586; // 0xc64 PushI
	var_913_int = -1; // 0xc65 PushI
	var_914_int = 32945; // 0xc66 PushI
	AddReply(var_912_int, var_913_int, var_914_int); // 0xc67 TObjFunc
	return 0; // 0xc69 Return
	
Label_3178:
	var_3_string = 1; // 0xc6a TMovB
	var_915_bool = 0; // 0xc6b PushV
	func_6755(var_915_bool); // 0xc6c NEW_2
	if(var_915_bool == 0) goto Label_3186; // 0xc6e JumpB
	lshStopAnimation(); // 0xc6f Func
	goto Label_3188; // 0xc71 Jump
	
Label_3188:
	return 0; // 0xc74 Return
	
Label_3186:
	StopAnimation(); // 0xc72 Func
	
Label_3190:
	return 0; // 0xc76 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0xd58 PushI
	if(var_48_int == 0) goto Label_3855; // 0xd59 JumpB
	func_6621(); // 0xd5b NEW_2
	var_50_int = 7538; // 0xd5d PushI
	var_51_bool = var_47_cvector == var_50_int; // 0xd5e Eq
	if(var_51_bool == 0) goto Label_3439; // 0xd5f JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0xd60 PushV
	var_52_object = var_1_object; // 0xd61 MovT
	var_53_object = var_0_object; // 0xd62 MovT
	func_6908(); // 0xd63 NEW_2
	var_56_object = Obj(); var_57_object = Obj(); // 0xd65 PushV
	var_56_object = var_1_object; // 0xd66 MovT
	var_57_object = var_0_object; // 0xd67 MovT
	func_6920(); // 0xd68 NEW_2
	var_83_object = Obj(); var_84_object = Obj(); // 0xd6a PushV
	var_83_object = var_1_object; // 0xd6b MovT
	var_84_object = var_0_object; // 0xd6c MovT
	func_6850(); // 0xd6d NEW_2
	
Label_3439:
	var_104_int = 7539; // 0xd6f PushI
	var_105_bool = var_47_cvector == var_104_int; // 0xd70 Eq
	if(var_105_bool == 0) goto Label_3457; // 0xd71 JumpB
	var_106_object = Obj(); var_107_object = Obj(); // 0xd72 PushV
	var_106_object = var_1_object; // 0xd73 MovT
	var_107_object = var_0_object; // 0xd74 MovT
	func_6908(); // 0xd75 NEW_2
	var_108_object = Obj(); var_109_object = Obj(); // 0xd77 PushV
	var_108_object = var_1_object; // 0xd78 MovT
	var_109_object = var_0_object; // 0xd79 MovT
	func_6920(); // 0xd7a NEW_2
	var_110_object = Obj(); var_111_object = Obj(); // 0xd7c PushV
	var_110_object = var_1_object; // 0xd7d MovT
	var_111_object = var_0_object; // 0xd7e MovT
	func_6850(); // 0xd7f NEW_2
	
Label_3457:
	var_112_int = 7542; // 0xd81 PushI
	var_113_bool = var_47_cvector == var_112_int; // 0xd82 Eq
	if(var_113_bool == 0) goto Label_3475; // 0xd83 JumpB
	var_114_object = Obj(); var_115_object = Obj(); // 0xd84 PushV
	var_114_object = var_1_object; // 0xd85 MovT
	var_115_object = var_0_object; // 0xd86 MovT
	func_6908(); // 0xd87 NEW_2
	var_116_object = Obj(); var_117_object = Obj(); // 0xd89 PushV
	var_116_object = var_1_object; // 0xd8a MovT
	var_117_object = var_0_object; // 0xd8b MovT
	func_6920(); // 0xd8c NEW_2
	var_118_object = Obj(); var_119_object = Obj(); // 0xd8e PushV
	var_118_object = var_1_object; // 0xd8f MovT
	var_119_object = var_0_object; // 0xd90 MovT
	func_6850(); // 0xd91 NEW_2
	
Label_3475:
	var_120_int = 7543; // 0xd93 PushI
	var_121_bool = var_47_cvector == var_120_int; // 0xd94 Eq
	if(var_121_bool == 0) goto Label_3493; // 0xd95 JumpB
	var_122_object = Obj(); var_123_object = Obj(); // 0xd96 PushV
	var_122_object = var_1_object; // 0xd97 MovT
	var_123_object = var_0_object; // 0xd98 MovT
	func_6908(); // 0xd99 NEW_2
	var_124_object = Obj(); var_125_object = Obj(); // 0xd9b PushV
	var_124_object = var_1_object; // 0xd9c MovT
	var_125_object = var_0_object; // 0xd9d MovT
	func_6920(); // 0xd9e NEW_2
	var_126_object = Obj(); var_127_object = Obj(); // 0xda0 PushV
	var_126_object = var_1_object; // 0xda1 MovT
	var_127_object = var_0_object; // 0xda2 MovT
	func_6850(); // 0xda3 NEW_2
	
Label_3493:
	var_128_int = 7557; // 0xda5 PushI
	var_129_bool = var_47_cvector == var_128_int; // 0xda6 Eq
	if(var_129_bool == 0) goto Label_3501; // 0xda7 JumpB
	var_130_object = Obj(); var_131_object = Obj(); // 0xda8 PushV
	var_130_object = var_1_object; // 0xda9 MovT
	var_131_object = var_0_object; // 0xdaa MovT
	func_6914(); // 0xdab NEW_2
	
Label_3501:
	var_134_int = 7839; // 0xdad PushI
	var_135_bool = var_47_cvector == var_134_int; // 0xdae Eq
	if(var_135_bool == 0) goto Label_3514; // 0xdaf JumpB
	var_136_object = Obj(); var_137_object = Obj(); // 0xdb0 PushV
	var_136_object = var_1_object; // 0xdb1 MovT
	var_137_object = var_0_object; // 0xdb2 MovT
	func_6914(); // 0xdb3 NEW_2
	var_138_object = Obj(); var_139_object = Obj(); // 0xdb5 PushV
	var_138_object = var_1_object; // 0xdb6 MovT
	var_139_object = var_0_object; // 0xdb7 MovT
	func_6920(); // 0xdb8 NEW_2
	
Label_3514:
	var_140_int = 7843; // 0xdba PushI
	var_141_bool = var_47_cvector == var_140_int; // 0xdbb Eq
	if(var_141_bool == 0) goto Label_3527; // 0xdbc JumpB
	var_142_object = Obj(); var_143_object = Obj(); // 0xdbd PushV
	var_142_object = var_1_object; // 0xdbe MovT
	var_143_object = var_0_object; // 0xdbf MovT
	func_6914(); // 0xdc0 NEW_2
	var_144_object = Obj(); var_145_object = Obj(); // 0xdc2 PushV
	var_144_object = var_1_object; // 0xdc3 MovT
	var_145_object = var_0_object; // 0xdc4 MovT
	func_6920(); // 0xdc5 NEW_2
	
Label_3527:
	var_146_int = 7529; // 0xdc7 PushI
	var_147_bool = var_46_bool == var_146_int; // 0xdc8 Eq
	if(var_147_bool == 0) goto Label_3613; // 0xdc9 JumpB
	var_148_bool = 0; // 0xdca PushV
	var_148_bool = 0; // 0xdcb MovB
	var_149_bool = 0; var_150_object = Obj(); // 0xdcc PushV
	var_150_object = var_1_object; // 0xdcd MovT
	func_7226(var_150_object); // 0xdce NEW_2
	if(var_149_bool == 0) goto Label_3543; // 0xdd0 JumpB
	var_155_bool = 0; var_156_object = Obj(); // 0xdd1 PushV
	var_156_object = var_1_object; // 0xdd2 MovT
	func_7262(var_156_object); // 0xdd3 NEW_2
	if(var_155_bool == 0) goto Label_3543; // 0xdd5 JumpB
	var_148_bool = 1; // 0xdd6 MovB
	
Label_3543:
	if(var_148_bool == 0) goto Label_3574; // 0xdd7 JumpB
	var_161_string = ""; // 0xdd8 PushV
	var_161_string = "Neutral"; // 0xdd9 MovS
	func_3393(var_47_cvector, var_161_string); // 0xdda NEW_2
	var_178_int = 506829; // 0xddc PushI
	SetMessage(var_178_int); // 0xddd TObjFunc
	ClearReplies(); // 0xddf TObjFunc
	var_179_int = 506830; // 0xde1 PushI
	var_180_int = 7531; // 0xde2 PushI
	var_181_int = 7530; // 0xde3 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0xde4 TObjFunc
	var_182_int = 506844; // 0xde6 PushI
	var_183_int = 7547; // 0xde7 PushI
	var_184_int = 7546; // 0xde8 PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0xde9 TObjFunc
	var_185_int = 506849; // 0xdeb PushI
	var_186_int = 7535; // 0xdec PushI
	var_187_int = 7554; // 0xded PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0xdee TObjFunc
	var_188_int = 506848; // 0xdf0 PushI
	var_189_int = 7547; // 0xdf1 PushI
	var_190_int = 7552; // 0xdf2 PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0xdf3 TObjFunc
	return 0; // 0xdf5 Return
	
Label_3574:
	var_191_string = ""; // 0xdf6 PushV
	var_191_string = "Neutral"; // 0xdf7 MovS
	func_3393(var_47_cvector, var_191_string); // 0xdf8 NEW_2
	var_192_int = 506850; // 0xdfa PushI
	SetMessage(var_192_int); // 0xdfb TObjFunc
	ClearReplies(); // 0xdfd TObjFunc
	var_193_bool = 0; // 0xdff PushV
	var_193_bool = 0; // 0xe00 MovB
	var_194_bool = 0; var_195_object = Obj(); // 0xe01 PushV
	var_195_object = var_1_object; // 0xe02 MovT
	func_7238(var_195_object); // 0xe03 NEW_2
	if(var_194_bool == 0) goto Label_3596; // 0xe05 JumpB
	var_200_bool = 0; var_201_object = Obj(); // 0xe06 PushV
	var_201_object = var_1_object; // 0xe07 MovT
	func_7250(var_201_object); // 0xe08 NEW_2
	if(var_200_bool == 0) goto Label_3596; // 0xe0a JumpB
	var_193_bool = 1; // 0xe0b MovB
	
Label_3596:
	if(var_193_bool == 0) goto Label_3602; // 0xe0c JumpB
	var_206_int = 506851; // 0xe0d PushI
	var_207_int = 7835; // 0xe0e PushI
	var_208_int = 7557; // 0xe0f PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0xe10 TObjFunc
	
Label_3602:
	var_209_int = 507536; // 0xe12 PushI
	var_210_int = -1; // 0xe13 PushI
	var_211_int = 8318; // 0xe14 PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0xe15 TObjFunc
	var_212_int = 533836; // 0xe17 PushI
	var_213_int = -1; // 0xe18 PushI
	var_214_int = 35386; // 0xe19 PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0xe1a TObjFunc
	return 0; // 0xe1c Return
	
Label_3613:
	var_215_int = 7835; // 0xe1d PushI
	var_216_bool = var_46_bool == var_215_int; // 0xe1e Eq
	if(var_216_bool == 0) goto Label_3636; // 0xe1f JumpB
	var_217_string = ""; // 0xe20 PushV
	var_217_string = "Anger"; // 0xe21 MovS
	func_3393(var_47_cvector, var_217_string); // 0xe22 NEW_2
	var_218_int = 507116; // 0xe24 PushI
	SetMessage(var_218_int); // 0xe25 TObjFunc
	ClearReplies(); // 0xe27 TObjFunc
	var_219_int = 507117; // 0xe29 PushI
	var_220_int = 7840; // 0xe2a PushI
	var_221_int = 7836; // 0xe2b PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0xe2c TObjFunc
	var_222_int = 507118; // 0xe2e PushI
	var_223_int = 7838; // 0xe2f PushI
	var_224_int = 7837; // 0xe30 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0xe31 TObjFunc
	return 0; // 0xe33 Return
	
Label_3636:
	var_225_int = 7838; // 0xe34 PushI
	var_226_bool = var_46_bool == var_225_int; // 0xe35 Eq
	if(var_226_bool == 0) goto Label_3659; // 0xe36 JumpB
	var_227_string = ""; // 0xe37 PushV
	var_227_string = "Neutral"; // 0xe38 MovS
	func_3393(var_47_cvector, var_227_string); // 0xe39 NEW_2
	var_228_int = 507119; // 0xe3b PushI
	SetMessage(var_228_int); // 0xe3c TObjFunc
	ClearReplies(); // 0xe3e TObjFunc
	var_229_int = 507120; // 0xe40 PushI
	var_230_int = -1; // 0xe41 PushI
	var_231_int = 7839; // 0xe42 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0xe43 TObjFunc
	var_232_int = 507124; // 0xe45 PushI
	var_233_int = -1; // 0xe46 PushI
	var_234_int = 7843; // 0xe47 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0xe48 TObjFunc
	return 0; // 0xe4a Return
	
Label_3659:
	var_235_int = 7840; // 0xe4b PushI
	var_236_bool = var_46_bool == var_235_int; // 0xe4c Eq
	if(var_236_bool == 0) goto Label_3682; // 0xe4d JumpB
	var_237_string = ""; // 0xe4e PushV
	var_237_string = "Neutral"; // 0xe4f MovS
	func_3393(var_47_cvector, var_237_string); // 0xe50 NEW_2
	var_238_int = 507121; // 0xe52 PushI
	SetMessage(var_238_int); // 0xe53 TObjFunc
	ClearReplies(); // 0xe55 TObjFunc
	var_239_int = 507125; // 0xe57 PushI
	var_240_int = 7845; // 0xe58 PushI
	var_241_int = 7844; // 0xe59 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0xe5a TObjFunc
	var_242_int = 507127; // 0xe5c PushI
	var_243_int = 7847; // 0xe5d PushI
	var_244_int = 7846; // 0xe5e PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0xe5f TObjFunc
	return 0; // 0xe61 Return
	
Label_3682:
	var_245_int = 7847; // 0xe62 PushI
	var_246_bool = var_46_bool == var_245_int; // 0xe63 Eq
	if(var_246_bool == 0) goto Label_3700; // 0xe64 JumpB
	var_247_string = ""; // 0xe65 PushV
	var_247_string = "Neutral"; // 0xe66 MovS
	func_3393(var_47_cvector, var_247_string); // 0xe67 NEW_2
	var_248_int = 507128; // 0xe69 PushI
	SetMessage(var_248_int); // 0xe6a TObjFunc
	ClearReplies(); // 0xe6c TObjFunc
	var_249_int = 507129; // 0xe6e PushI
	var_250_int = 7845; // 0xe6f PushI
	var_251_int = 7848; // 0xe70 PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0xe71 TObjFunc
	return 0; // 0xe73 Return
	
Label_3700:
	var_252_int = 7845; // 0xe74 PushI
	var_253_bool = var_46_bool == var_252_int; // 0xe75 Eq
	if(var_253_bool == 0) goto Label_3723; // 0xe76 JumpB
	var_254_string = ""; // 0xe77 PushV
	var_254_string = "Neutral"; // 0xe78 MovS
	func_3393(var_47_cvector, var_254_string); // 0xe79 NEW_2
	var_255_int = 507126; // 0xe7b PushI
	SetMessage(var_255_int); // 0xe7c TObjFunc
	ClearReplies(); // 0xe7e TObjFunc
	var_256_int = 507122; // 0xe80 PushI
	var_257_int = -1; // 0xe81 PushI
	var_258_int = 7841; // 0xe82 PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0xe83 TObjFunc
	var_259_int = 507123; // 0xe85 PushI
	var_260_int = -1; // 0xe86 PushI
	var_261_int = 7842; // 0xe87 PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0xe88 TObjFunc
	return 0; // 0xe8a Return
	
Label_3723:
	var_262_int = 7547; // 0xe8b PushI
	var_263_bool = var_46_bool == var_262_int; // 0xe8c Eq
	if(var_263_bool == 0) goto Label_3746; // 0xe8d JumpB
	var_264_string = ""; // 0xe8e PushV
	var_264_string = "Anger"; // 0xe8f MovS
	func_3393(var_47_cvector, var_264_string); // 0xe90 NEW_2
	var_265_int = 506845; // 0xe92 PushI
	SetMessage(var_265_int); // 0xe93 TObjFunc
	ClearReplies(); // 0xe95 TObjFunc
	var_266_int = 506846; // 0xe97 PushI
	var_267_int = 7533; // 0xe98 PushI
	var_268_int = 7548; // 0xe99 PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0xe9a TObjFunc
	var_269_int = 506847; // 0xe9c PushI
	var_270_int = 7533; // 0xe9d PushI
	var_271_int = 7550; // 0xe9e PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0xe9f TObjFunc
	return 0; // 0xea1 Return
	
Label_3746:
	var_272_int = 7531; // 0xea2 PushI
	var_273_bool = var_46_bool == var_272_int; // 0xea3 Eq
	if(var_273_bool == 0) goto Label_3764; // 0xea4 JumpB
	var_274_string = ""; // 0xea5 PushV
	var_274_string = "Anger"; // 0xea6 MovS
	func_3393(var_47_cvector, var_274_string); // 0xea7 NEW_2
	var_275_int = 506831; // 0xea9 PushI
	SetMessage(var_275_int); // 0xeaa TObjFunc
	ClearReplies(); // 0xeac TObjFunc
	var_276_int = 506832; // 0xeae PushI
	var_277_int = 7533; // 0xeaf PushI
	var_278_int = 7532; // 0xeb0 PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0xeb1 TObjFunc
	return 0; // 0xeb3 Return
	
Label_3764:
	var_279_int = 7533; // 0xeb4 PushI
	var_280_bool = var_46_bool == var_279_int; // 0xeb5 Eq
	if(var_280_bool == 0) goto Label_3792; // 0xeb6 JumpB
	var_281_string = ""; // 0xeb7 PushV
	var_281_string = "Anger"; // 0xeb8 MovS
	func_3393(var_47_cvector, var_281_string); // 0xeb9 NEW_2
	var_282_int = 506833; // 0xebb PushI
	SetMessage(var_282_int); // 0xebc TObjFunc
	ClearReplies(); // 0xebe TObjFunc
	var_283_int = 506834; // 0xec0 PushI
	var_284_int = 7535; // 0xec1 PushI
	var_285_int = 7534; // 0xec2 PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0xec3 TObjFunc
	var_286_int = 506843; // 0xec5 PushI
	var_287_int = 7535; // 0xec6 PushI
	var_288_int = 7544; // 0xec7 PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0xec8 TObjFunc
	var_289_int = 506842; // 0xeca PushI
	var_290_int = -1; // 0xecb PushI
	var_291_int = 7543; // 0xecc PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0xecd TObjFunc
	return 0; // 0xecf Return
	
Label_3792:
	var_292_int = 7535; // 0xed0 PushI
	var_293_bool = var_46_bool == var_292_int; // 0xed1 Eq
	if(var_293_bool == 0) goto Label_3820; // 0xed2 JumpB
	var_294_string = ""; // 0xed3 PushV
	var_294_string = "Distrust"; // 0xed4 MovS
	func_3393(var_47_cvector, var_294_string); // 0xed5 NEW_2
	var_295_int = 506835; // 0xed7 PushI
	SetMessage(var_295_int); // 0xed8 TObjFunc
	ClearReplies(); // 0xeda TObjFunc
	var_296_int = 506836; // 0xedc PushI
	var_297_int = 7537; // 0xedd PushI
	var_298_int = 7536; // 0xede PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0xedf TObjFunc
	var_299_int = 506840; // 0xee1 PushI
	var_300_int = 7537; // 0xee2 PushI
	var_301_int = 7540; // 0xee3 PushI
	AddReply(var_299_int, var_300_int, var_301_int); // 0xee4 TObjFunc
	var_302_int = 506841; // 0xee6 PushI
	var_303_int = -1; // 0xee7 PushI
	var_304_int = 7542; // 0xee8 PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0xee9 TObjFunc
	return 0; // 0xeeb Return
	
Label_3820:
	var_305_int = 7537; // 0xeec PushI
	var_306_bool = var_46_bool == var_305_int; // 0xeed Eq
	if(var_306_bool == 0) goto Label_3843; // 0xeee JumpB
	var_307_string = ""; // 0xeef PushV
	var_307_string = "Neutral"; // 0xef0 MovS
	func_3393(var_47_cvector, var_307_string); // 0xef1 NEW_2
	var_308_int = 506837; // 0xef3 PushI
	SetMessage(var_308_int); // 0xef4 TObjFunc
	ClearReplies(); // 0xef6 TObjFunc
	var_309_int = 506838; // 0xef8 PushI
	var_310_int = -1; // 0xef9 PushI
	var_311_int = 7538; // 0xefa PushI
	AddReply(var_309_int, var_310_int, var_311_int); // 0xefb TObjFunc
	var_312_int = 506839; // 0xefd PushI
	var_313_int = -1; // 0xefe PushI
	var_314_int = 7539; // 0xeff PushI
	AddReply(var_312_int, var_313_int, var_314_int); // 0xf00 TObjFunc
	return 0; // 0xf02 Return
	
Label_3843:
	var_3_string = 1; // 0xf03 TMovB
	var_315_bool = 0; // 0xf04 PushV
	func_6755(var_315_bool); // 0xf05 NEW_2
	if(var_315_bool == 0) goto Label_3851; // 0xf07 JumpB
	lshStopAnimation(); // 0xf08 Func
	goto Label_3853; // 0xf0a Jump
	
Label_3853:
	return 0; // 0xf0d Return
	
Label_3851:
	StopAnimation(); // 0xf0b Func
	
Label_3855:
	return 0; // 0xf0f Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0x101c PushI
	if(var_48_int == 0) goto Label_4900; // 0x101d JumpB
	func_6621(); // 0x101f NEW_2
	var_50_int = 11255; // 0x1021 PushI
	var_51_bool = var_47_cvector == var_50_int; // 0x1022 Eq
	if(var_51_bool == 0) goto Label_4137; // 0x1023 JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0x1024 PushV
	var_52_object = var_1_object; // 0x1025 MovT
	var_53_object = var_0_object; // 0x1026 MovT
	func_6977(); // 0x1027 NEW_2
	
Label_4137:
	var_111_int = 9939; // 0x1029 PushI
	var_112_bool = var_47_cvector == var_111_int; // 0x102a Eq
	if(var_112_bool == 0) goto Label_4145; // 0x102b JumpB
	var_113_object = Obj(); var_114_object = Obj(); // 0x102c PushV
	var_113_object = var_1_object; // 0x102d MovT
	var_114_object = var_0_object; // 0x102e MovT
	func_6977(); // 0x102f NEW_2
	
Label_4145:
	var_115_int = 35971; // 0x1031 PushI
	var_116_bool = var_47_cvector == var_115_int; // 0x1032 Eq
	if(var_116_bool == 0) goto Label_4163; // 0x1033 JumpB
	var_117_object = Obj(); var_118_object = Obj(); // 0x1034 PushV
	var_117_object = var_1_object; // 0x1035 MovT
	var_118_object = var_0_object; // 0x1036 MovT
	func_6935(var_118_object); // 0x1037 NEW_2
	var_138_object = Obj(); var_139_object = Obj(); // 0x1039 PushV
	var_138_object = var_1_object; // 0x103a MovT
	var_139_object = var_0_object; // 0x103b MovT
	func_6873(); // 0x103c NEW_2
	var_142_object = Obj(); var_143_object = Obj(); // 0x103e PushV
	var_142_object = var_1_object; // 0x103f MovT
	var_143_object = var_0_object; // 0x1040 MovT
	func_6945(); // 0x1041 NEW_2
	
Label_4163:
	var_164_int = 35972; // 0x1043 PushI
	var_165_bool = var_47_cvector == var_164_int; // 0x1044 Eq
	if(var_165_bool == 0) goto Label_4171; // 0x1045 JumpB
	var_166_object = Obj(); var_167_object = Obj(); // 0x1046 PushV
	var_166_object = var_1_object; // 0x1047 MovT
	var_167_object = var_0_object; // 0x1048 MovT
	func_6945(); // 0x1049 NEW_2
	
Label_4171:
	var_168_int = 11275; // 0x104b PushI
	var_169_bool = var_47_cvector == var_168_int; // 0x104c Eq
	if(var_169_bool == 0) goto Label_4179; // 0x104d JumpB
	var_170_object = Obj(); var_171_object = Obj(); // 0x104e PushV
	var_170_object = var_1_object; // 0x104f MovT
	var_171_object = var_0_object; // 0x1050 MovT
	func_6945(); // 0x1051 NEW_2
	
Label_4179:
	var_172_int = 9905; // 0x1053 PushI
	var_173_bool = var_47_cvector == var_172_int; // 0x1054 Eq
	if(var_173_bool == 0) goto Label_4187; // 0x1055 JumpB
	var_174_object = Obj(); var_175_object = Obj(); // 0x1056 PushV
	var_174_object = var_1_object; // 0x1057 MovT
	var_175_object = var_0_object; // 0x1058 MovT
	func_6977(); // 0x1059 NEW_2
	
Label_4187:
	var_176_int = 12577; // 0x105b PushI
	var_177_bool = var_47_cvector == var_176_int; // 0x105c Eq
	if(var_177_bool == 0) goto Label_4195; // 0x105d JumpB
	var_178_object = Obj(); var_179_object = Obj(); // 0x105e PushV
	var_178_object = var_1_object; // 0x105f MovT
	var_179_object = var_0_object; // 0x1060 MovT
	func_6977(); // 0x1061 NEW_2
	
Label_4195:
	var_180_int = 9918; // 0x1063 PushI
	var_181_bool = var_47_cvector == var_180_int; // 0x1064 Eq
	if(var_181_bool == 0) goto Label_4203; // 0x1065 JumpB
	var_182_object = Obj(); var_183_object = Obj(); // 0x1066 PushV
	var_182_object = var_1_object; // 0x1067 MovT
	var_183_object = var_0_object; // 0x1068 MovT
	func_6965(); // 0x1069 NEW_2
	
Label_4203:
	var_186_int = 11511; // 0x106b PushI
	var_187_bool = var_47_cvector == var_186_int; // 0x106c Eq
	if(var_187_bool == 0) goto Label_4211; // 0x106d JumpB
	var_188_object = Obj(); var_189_object = Obj(); // 0x106e PushV
	var_188_object = var_1_object; // 0x106f MovT
	var_189_object = var_0_object; // 0x1070 MovT
	func_7033(); // 0x1071 NEW_2
	
Label_4211:
	var_192_int = 11515; // 0x1073 PushI
	var_193_bool = var_47_cvector == var_192_int; // 0x1074 Eq
	if(var_193_bool == 0) goto Label_4229; // 0x1075 JumpB
	var_194_object = Obj(); var_195_object = Obj(); // 0x1076 PushV
	var_194_object = var_1_object; // 0x1077 MovT
	var_195_object = var_0_object; // 0x1078 MovT
	func_6873(); // 0x1079 NEW_2
	var_196_object = Obj(); var_197_object = Obj(); // 0x107b PushV
	var_196_object = var_1_object; // 0x107c MovT
	var_197_object = var_0_object; // 0x107d MovT
	func_7007(); // 0x107e NEW_2
	var_209_object = Obj(); var_210_object = Obj(); // 0x1080 PushV
	var_209_object = var_1_object; // 0x1081 MovT
	var_210_object = var_0_object; // 0x1082 MovT
	func_6757(var_210_object); // 0x1083 NEW_2
	
Label_4229:
	var_214_int = 35973; // 0x1085 PushI
	var_215_bool = var_47_cvector == var_214_int; // 0x1086 Eq
	if(var_215_bool == 0) goto Label_4247; // 0x1087 JumpB
	var_216_object = Obj(); var_217_object = Obj(); // 0x1088 PushV
	var_216_object = var_1_object; // 0x1089 MovT
	var_217_object = var_0_object; // 0x108a MovT
	func_6757(var_217_object); // 0x108b NEW_2
	var_218_object = Obj(); var_219_object = Obj(); // 0x108d PushV
	var_218_object = var_1_object; // 0x108e MovT
	var_219_object = var_0_object; // 0x108f MovT
	func_6873(); // 0x1090 NEW_2
	var_220_object = Obj(); var_221_object = Obj(); // 0x1092 PushV
	var_220_object = var_1_object; // 0x1093 MovT
	var_221_object = var_0_object; // 0x1094 MovT
	func_7007(); // 0x1095 NEW_2
	
Label_4247:
	var_222_int = 9915; // 0x1097 PushI
	var_223_bool = var_47_cvector == var_222_int; // 0x1098 Eq
	if(var_223_bool == 0) goto Label_4265; // 0x1099 JumpB
	var_224_object = Obj(); var_225_object = Obj(); // 0x109a PushV
	var_224_object = var_1_object; // 0x109b MovT
	var_225_object = var_0_object; // 0x109c MovT
	func_6873(); // 0x109d NEW_2
	var_226_object = Obj(); var_227_object = Obj(); // 0x109f PushV
	var_226_object = var_1_object; // 0x10a0 MovT
	var_227_object = var_0_object; // 0x10a1 MovT
	func_6935(var_227_object); // 0x10a2 NEW_2
	var_228_object = Obj(); var_229_object = Obj(); // 0x10a4 PushV
	var_228_object = var_1_object; // 0x10a5 MovT
	var_229_object = var_0_object; // 0x10a6 MovT
	func_6945(); // 0x10a7 NEW_2
	
Label_4265:
	var_230_int = 9916; // 0x10a9 PushI
	var_231_bool = var_47_cvector == var_230_int; // 0x10aa Eq
	if(var_231_bool == 0) goto Label_4273; // 0x10ab JumpB
	var_232_object = Obj(); var_233_object = Obj(); // 0x10ac PushV
	var_232_object = var_1_object; // 0x10ad MovT
	var_233_object = var_0_object; // 0x10ae MovT
	func_6945(); // 0x10af NEW_2
	
Label_4273:
	var_234_int = 9919; // 0x10b1 PushI
	var_235_bool = var_46_bool == var_234_int; // 0x10b2 Eq
	if(var_235_bool == 0) goto Label_4402; // 0x10b3 JumpB
	var_236_bool = 0; var_237_object = Obj(); // 0x10b4 PushV
	var_237_object = var_1_object; // 0x10b5 MovT
	func_7346(var_237_object); // 0x10b6 NEW_2
	if(var_236_bool == 0) goto Label_4306; // 0x10b8 JumpB
	var_244_object = Obj(); var_245_object = Obj(); // 0x10b9 PushV
	var_244_object = var_1_object; // 0x10ba MovT
	var_245_object = var_0_object; // 0x10bb MovT
	func_7111(); // 0x10bc NEW_2
	var_248_object = Obj(); var_249_object = Obj(); // 0x10be PushV
	var_248_object = var_1_object; // 0x10bf MovT
	var_249_object = var_0_object; // 0x10c0 MovT
	func_6971(); // 0x10c1 NEW_2
	var_252_string = ""; // 0x10c3 PushV
	var_252_string = "Neutral"; // 0x10c4 MovS
	func_4101(var_47_cvector, var_252_string); // 0x10c5 NEW_2
	var_269_int = 509043; // 0x10c7 PushI
	SetMessage(var_269_int); // 0x10c8 TObjFunc
	ClearReplies(); // 0x10ca TObjFunc
	var_270_int = 509044; // 0x10cc PushI
	var_271_int = 9921; // 0x10cd PushI
	var_272_int = 9920; // 0x10ce PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0x10cf TObjFunc
	return 0; // 0x10d1 Return
	
Label_4306:
	var_273_object = Obj(); var_274_object = Obj(); // 0x10d2 PushV
	var_273_object = var_1_object; // 0x10d3 MovT
	var_274_object = var_0_object; // 0x10d4 MovT
	func_7111(); // 0x10d5 NEW_2
	var_275_string = ""; // 0x10d7 PushV
	var_275_string = "Neutral"; // 0x10d8 MovS
	func_4101(var_47_cvector, var_275_string); // 0x10d9 NEW_2
	var_276_int = 509024; // 0x10db PushI
	SetMessage(var_276_int); // 0x10dc TObjFunc
	ClearReplies(); // 0x10de TObjFunc
	var_277_bool = 0; var_278_object = Obj(); // 0x10e0 PushV
	var_278_object = var_1_object; // 0x10e1 MovT
	func_7370(var_278_object); // 0x10e2 NEW_2
	if(var_277_bool == 0) goto Label_4330; // 0x10e4 JumpB
	var_283_int = 511376; // 0x10e5 PushI
	var_284_int = 9899; // 0x10e6 PushI
	var_285_int = 12575; // 0x10e7 PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0x10e8 TObjFunc
	
Label_4330:
	var_286_bool = 0; // 0x10ea PushV
	var_286_bool = 0; // 0x10eb MovB
	var_287_bool = 0; var_288_object = Obj(); // 0x10ec PushV
	var_288_object = var_1_object; // 0x10ed MovT
	func_7334(var_288_object); // 0x10ee NEW_2
	if(var_287_bool == 0) goto Label_4343; // 0x10f0 JumpB
	var_293_bool = 0; var_294_object = Obj(); // 0x10f1 PushV
	var_294_object = var_1_object; // 0x10f2 MovT
	func_7177(var_294_object); // 0x10f3 NEW_2
	if(var_293_bool == 0) goto Label_4343; // 0x10f5 JumpB
	var_286_bool = 1; // 0x10f6 MovB
	
Label_4343:
	if(var_286_bool == 0) goto Label_4349; // 0x10f7 JumpB
	var_299_int = 509042; // 0x10f8 PushI
	var_300_int = 9941; // 0x10f9 PushI
	var_301_int = 9918; // 0x10fa PushI
	AddReply(var_299_int, var_300_int, var_301_int); // 0x10fb TObjFunc
	
Label_4349:
	var_302_bool = 0; // 0x10fd PushV
	var_302_bool = 0; // 0x10fe MovB
	var_303_bool = 0; // 0x10ff PushV
	var_303_bool = 0; // 0x1100 MovB
	var_304_bool = 0; var_305_object = Obj(); // 0x1101 PushV
	var_305_object = var_1_object; // 0x1102 MovT
	func_7382(var_305_object); // 0x1103 NEW_2
	if(var_304_bool == 0) goto Label_4364; // 0x1105 JumpB
	var_310_bool = 0; var_311_object = Obj(); // 0x1106 PushV
	var_311_object = var_1_object; // 0x1107 MovT
	func_7394(var_311_object); // 0x1108 NEW_2
	if(var_310_bool == 0) goto Label_4364; // 0x110a JumpB
	var_303_bool = 1; // 0x110b MovB
	
Label_4364:
	if(var_303_bool == 0) goto Label_4371; // 0x110c JumpB
	var_316_bool = 0; var_317_object = Obj(); // 0x110d PushV
	var_317_object = var_1_object; // 0x110e MovT
	func_7189(var_317_object); // 0x110f NEW_2
	if(var_316_bool == 0) goto Label_4371; // 0x1111 JumpB
	var_302_bool = 1; // 0x1112 MovB
	
Label_4371:
	if(var_302_bool == 0) goto Label_4377; // 0x1113 JumpB
	var_335_int = 510442; // 0x1114 PushI
	var_336_int = 11512; // 0x1115 PushI
	var_337_int = 11511; // 0x1116 PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0x1117 TObjFunc
	
Label_4377:
	var_338_bool = 0; // 0x1119 PushV
	var_338_bool = 0; // 0x111a MovB
	var_339_bool = 0; var_340_object = Obj(); // 0x111b PushV
	var_340_object = var_1_object; // 0x111c MovT
	func_7358(var_340_object); // 0x111d NEW_2
	if(var_339_bool == 0) goto Label_4390; // 0x111f JumpB
	var_345_bool = 0; var_346_object = Obj(); // 0x1120 PushV
	var_346_object = var_1_object; // 0x1121 MovT
	func_7189(var_346_object); // 0x1122 NEW_2
	if(var_345_bool == 0) goto Label_4390; // 0x1124 JumpB
	var_338_bool = 1; // 0x1125 MovB
	
Label_4390:
	if(var_338_bool == 0) goto Label_4396; // 0x1126 JumpB
	var_347_int = 509034; // 0x1127 PushI
	var_348_int = 9910; // 0x1128 PushI
	var_349_int = 9909; // 0x1129 PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0x112a TObjFunc
	
Label_4396:
	var_350_int = 511147; // 0x112c PushI
	var_351_int = -1; // 0x112d PushI
	var_352_int = 12337; // 0x112e PushI
	AddReply(var_350_int, var_351_int, var_352_int); // 0x112f TObjFunc
	return 0; // 0x1131 Return
	
Label_4402:
	var_353_int = 9910; // 0x1132 PushI
	var_354_bool = var_46_bool == var_353_int; // 0x1133 Eq
	if(var_354_bool == 0) goto Label_4425; // 0x1134 JumpB
	var_355_string = ""; // 0x1135 PushV
	var_355_string = "Neutral"; // 0x1136 MovS
	func_4101(var_47_cvector, var_355_string); // 0x1137 NEW_2
	var_356_int = 509035; // 0x1139 PushI
	SetMessage(var_356_int); // 0x113a TObjFunc
	ClearReplies(); // 0x113c TObjFunc
	var_357_int = 509036; // 0x113e PushI
	var_358_int = 9914; // 0x113f PushI
	var_359_int = 9911; // 0x1140 PushI
	AddReply(var_357_int, var_358_int, var_359_int); // 0x1141 TObjFunc
	var_360_int = 509037; // 0x1143 PushI
	var_361_int = 9914; // 0x1144 PushI
	var_362_int = 9913; // 0x1145 PushI
	AddReply(var_360_int, var_361_int, var_362_int); // 0x1146 TObjFunc
	return 0; // 0x1148 Return
	
Label_4425:
	var_363_int = 9914; // 0x1149 PushI
	var_364_bool = var_46_bool == var_363_int; // 0x114a Eq
	if(var_364_bool == 0) goto Label_4448; // 0x114b JumpB
	var_365_string = ""; // 0x114c PushV
	var_365_string = "Anger"; // 0x114d MovS
	func_4101(var_47_cvector, var_365_string); // 0x114e NEW_2
	var_366_int = 509038; // 0x1150 PushI
	SetMessage(var_366_int); // 0x1151 TObjFunc
	ClearReplies(); // 0x1153 TObjFunc
	var_367_int = 509039; // 0x1155 PushI
	var_368_int = -1; // 0x1156 PushI
	var_369_int = 9915; // 0x1157 PushI
	AddReply(var_367_int, var_368_int, var_369_int); // 0x1158 TObjFunc
	var_370_int = 509040; // 0x115a PushI
	var_371_int = -1; // 0x115b PushI
	var_372_int = 9916; // 0x115c PushI
	AddReply(var_370_int, var_371_int, var_372_int); // 0x115d TObjFunc
	return 0; // 0x115f Return
	
Label_4448:
	var_373_int = 11512; // 0x1160 PushI
	var_374_bool = var_46_bool == var_373_int; // 0x1161 Eq
	if(var_374_bool == 0) goto Label_4466; // 0x1162 JumpB
	var_375_string = ""; // 0x1163 PushV
	var_375_string = "Neutral"; // 0x1164 MovS
	func_4101(var_47_cvector, var_375_string); // 0x1165 NEW_2
	var_376_int = 510443; // 0x1167 PushI
	SetMessage(var_376_int); // 0x1168 TObjFunc
	ClearReplies(); // 0x116a TObjFunc
	var_377_int = 510444; // 0x116c PushI
	var_378_int = 11514; // 0x116d PushI
	var_379_int = 11513; // 0x116e PushI
	AddReply(var_377_int, var_378_int, var_379_int); // 0x116f TObjFunc
	return 0; // 0x1171 Return
	
Label_4466:
	var_380_int = 11514; // 0x1172 PushI
	var_381_bool = var_46_bool == var_380_int; // 0x1173 Eq
	if(var_381_bool == 0) goto Label_4489; // 0x1174 JumpB
	var_382_string = ""; // 0x1175 PushV
	var_382_string = "Neutral"; // 0x1176 MovS
	func_4101(var_47_cvector, var_382_string); // 0x1177 NEW_2
	var_383_int = 510445; // 0x1179 PushI
	SetMessage(var_383_int); // 0x117a TObjFunc
	ClearReplies(); // 0x117c TObjFunc
	var_384_int = 510446; // 0x117e PushI
	var_385_int = -1; // 0x117f PushI
	var_386_int = 11515; // 0x1180 PushI
	AddReply(var_384_int, var_385_int, var_386_int); // 0x1181 TObjFunc
	var_387_int = 534367; // 0x1183 PushI
	var_388_int = -1; // 0x1184 PushI
	var_389_int = 35973; // 0x1185 PushI
	AddReply(var_387_int, var_388_int, var_389_int); // 0x1186 TObjFunc
	return 0; // 0x1188 Return
	
Label_4489:
	var_390_int = 9941; // 0x1189 PushI
	var_391_bool = var_46_bool == var_390_int; // 0x118a Eq
	if(var_391_bool == 0) goto Label_4507; // 0x118b JumpB
	var_392_string = ""; // 0x118c PushV
	var_392_string = "Neutral"; // 0x118d MovS
	func_4101(var_47_cvector, var_392_string); // 0x118e NEW_2
	var_393_int = 509064; // 0x1190 PushI
	SetMessage(var_393_int); // 0x1191 TObjFunc
	ClearReplies(); // 0x1193 TObjFunc
	var_394_int = 509065; // 0x1195 PushI
	var_395_int = 9943; // 0x1196 PushI
	var_396_int = 9942; // 0x1197 PushI
	AddReply(var_394_int, var_395_int, var_396_int); // 0x1198 TObjFunc
	return 0; // 0x119a Return
	
Label_4507:
	var_397_int = 9943; // 0x119b PushI
	var_398_bool = var_46_bool == var_397_int; // 0x119c Eq
	if(var_398_bool == 0) goto Label_4530; // 0x119d JumpB
	var_399_string = ""; // 0x119e PushV
	var_399_string = "Anger"; // 0x119f MovS
	func_4101(var_47_cvector, var_399_string); // 0x11a0 NEW_2
	var_400_int = 509066; // 0x11a2 PushI
	SetMessage(var_400_int); // 0x11a3 TObjFunc
	ClearReplies(); // 0x11a5 TObjFunc
	var_401_int = 509067; // 0x11a7 PushI
	var_402_int = 9946; // 0x11a8 PushI
	var_403_int = 9944; // 0x11a9 PushI
	AddReply(var_401_int, var_402_int, var_403_int); // 0x11aa TObjFunc
	var_404_int = 509068; // 0x11ac PushI
	var_405_int = 9949; // 0x11ad PushI
	var_406_int = 9945; // 0x11ae PushI
	AddReply(var_404_int, var_405_int, var_406_int); // 0x11af TObjFunc
	return 0; // 0x11b1 Return
	
Label_4530:
	var_407_int = 9949; // 0x11b2 PushI
	var_408_bool = var_46_bool == var_407_int; // 0x11b3 Eq
	if(var_408_bool == 0) goto Label_4548; // 0x11b4 JumpB
	var_409_string = ""; // 0x11b5 PushV
	var_409_string = "Neutral"; // 0x11b6 MovS
	func_4101(var_47_cvector, var_409_string); // 0x11b7 NEW_2
	var_410_int = 509072; // 0x11b9 PushI
	SetMessage(var_410_int); // 0x11ba TObjFunc
	ClearReplies(); // 0x11bc TObjFunc
	var_411_int = 509073; // 0x11be PushI
	var_412_int = 9948; // 0x11bf PushI
	var_413_int = 9950; // 0x11c0 PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0x11c1 TObjFunc
	return 0; // 0x11c3 Return
	
Label_4548:
	var_414_int = 9946; // 0x11c4 PushI
	var_415_bool = var_46_bool == var_414_int; // 0x11c5 Eq
	if(var_415_bool == 0) goto Label_4571; // 0x11c6 JumpB
	var_416_string = ""; // 0x11c7 PushV
	var_416_string = "Neutral"; // 0x11c8 MovS
	func_4101(var_47_cvector, var_416_string); // 0x11c9 NEW_2
	var_417_int = 509069; // 0x11cb PushI
	SetMessage(var_417_int); // 0x11cc TObjFunc
	ClearReplies(); // 0x11ce TObjFunc
	var_418_int = 509074; // 0x11d0 PushI
	var_419_int = 9953; // 0x11d1 PushI
	var_420_int = 9952; // 0x11d2 PushI
	AddReply(var_418_int, var_419_int, var_420_int); // 0x11d3 TObjFunc
	var_421_int = 509070; // 0x11d5 PushI
	var_422_int = 9948; // 0x11d6 PushI
	var_423_int = 9947; // 0x11d7 PushI
	AddReply(var_421_int, var_422_int, var_423_int); // 0x11d8 TObjFunc
	return 0; // 0x11da Return
	
Label_4571:
	var_424_int = 9948; // 0x11db PushI
	var_425_bool = var_46_bool == var_424_int; // 0x11dc Eq
	if(var_425_bool == 0) goto Label_4589; // 0x11dd JumpB
	var_426_string = ""; // 0x11de PushV
	var_426_string = "Neutral"; // 0x11df MovS
	func_4101(var_47_cvector, var_426_string); // 0x11e0 NEW_2
	var_427_int = 509071; // 0x11e2 PushI
	SetMessage(var_427_int); // 0x11e3 TObjFunc
	ClearReplies(); // 0x11e5 TObjFunc
	var_428_int = 511149; // 0x11e7 PushI
	var_429_int = -1; // 0x11e8 PushI
	var_430_int = 12338; // 0x11e9 PushI
	AddReply(var_428_int, var_429_int, var_430_int); // 0x11ea TObjFunc
	return 0; // 0x11ec Return
	
Label_4589:
	var_431_int = 9953; // 0x11ed PushI
	var_432_bool = var_46_bool == var_431_int; // 0x11ee Eq
	if(var_432_bool == 0) goto Label_4612; // 0x11ef JumpB
	var_433_string = ""; // 0x11f0 PushV
	var_433_string = "Anger"; // 0x11f1 MovS
	func_4101(var_47_cvector, var_433_string); // 0x11f2 NEW_2
	var_434_int = 509075; // 0x11f4 PushI
	SetMessage(var_434_int); // 0x11f5 TObjFunc
	ClearReplies(); // 0x11f7 TObjFunc
	var_435_int = 509076; // 0x11f9 PushI
	var_436_int = -1; // 0x11fa PushI
	var_437_int = 9954; // 0x11fb PushI
	AddReply(var_435_int, var_436_int, var_437_int); // 0x11fc TObjFunc
	var_438_int = 509077; // 0x11fe PushI
	var_439_int = -1; // 0x11ff PushI
	var_440_int = 9955; // 0x1200 PushI
	AddReply(var_438_int, var_439_int, var_440_int); // 0x1201 TObjFunc
	return 0; // 0x1203 Return
	
Label_4612:
	var_441_int = 9899; // 0x1204 PushI
	var_442_bool = var_46_bool == var_441_int; // 0x1205 Eq
	if(var_442_bool == 0) goto Label_4635; // 0x1206 JumpB
	var_443_string = ""; // 0x1207 PushV
	var_443_string = "Neutral"; // 0x1208 MovS
	func_4101(var_47_cvector, var_443_string); // 0x1209 NEW_2
	var_444_int = 509025; // 0x120b PushI
	SetMessage(var_444_int); // 0x120c TObjFunc
	ClearReplies(); // 0x120e TObjFunc
	var_445_int = 509026; // 0x1210 PushI
	var_446_int = 9901; // 0x1211 PushI
	var_447_int = 9900; // 0x1212 PushI
	AddReply(var_445_int, var_446_int, var_447_int); // 0x1213 TObjFunc
	var_448_int = 509033; // 0x1215 PushI
	var_449_int = 9901; // 0x1216 PushI
	var_450_int = 9908; // 0x1217 PushI
	AddReply(var_448_int, var_449_int, var_450_int); // 0x1218 TObjFunc
	return 0; // 0x121a Return
	
Label_4635:
	var_451_int = 9901; // 0x121b PushI
	var_452_bool = var_46_bool == var_451_int; // 0x121c Eq
	if(var_452_bool == 0) goto Label_4658; // 0x121d JumpB
	var_453_string = ""; // 0x121e PushV
	var_453_string = "Distrust"; // 0x121f MovS
	func_4101(var_47_cvector, var_453_string); // 0x1220 NEW_2
	var_454_int = 509027; // 0x1222 PushI
	SetMessage(var_454_int); // 0x1223 TObjFunc
	ClearReplies(); // 0x1225 TObjFunc
	var_455_int = 509028; // 0x1227 PushI
	var_456_int = 9903; // 0x1228 PushI
	var_457_int = 9902; // 0x1229 PushI
	AddReply(var_455_int, var_456_int, var_457_int); // 0x122a TObjFunc
	var_458_int = 509032; // 0x122c PushI
	var_459_int = 9903; // 0x122d PushI
	var_460_int = 9906; // 0x122e PushI
	AddReply(var_458_int, var_459_int, var_460_int); // 0x122f TObjFunc
	return 0; // 0x1231 Return
	
Label_4658:
	var_461_int = 9903; // 0x1232 PushI
	var_462_bool = var_46_bool == var_461_int; // 0x1233 Eq
	if(var_462_bool == 0) goto Label_4681; // 0x1234 JumpB
	var_463_string = ""; // 0x1235 PushV
	var_463_string = "Neutral"; // 0x1236 MovS
	func_4101(var_47_cvector, var_463_string); // 0x1237 NEW_2
	var_464_int = 509029; // 0x1239 PushI
	SetMessage(var_464_int); // 0x123a TObjFunc
	ClearReplies(); // 0x123c TObjFunc
	var_465_int = 509031; // 0x123e PushI
	var_466_int = -1; // 0x123f PushI
	var_467_int = 9905; // 0x1240 PushI
	AddReply(var_465_int, var_466_int, var_467_int); // 0x1241 TObjFunc
	var_468_int = 511378; // 0x1243 PushI
	var_469_int = -1; // 0x1244 PushI
	var_470_int = 12577; // 0x1245 PushI
	AddReply(var_468_int, var_469_int, var_470_int); // 0x1246 TObjFunc
	return 0; // 0x1248 Return
	
Label_4681:
	var_471_int = 9921; // 0x1249 PushI
	var_472_bool = var_46_bool == var_471_int; // 0x124a Eq
	if(var_472_bool == 0) goto Label_4699; // 0x124b JumpB
	var_473_string = ""; // 0x124c PushV
	var_473_string = "Neutral"; // 0x124d MovS
	func_4101(var_47_cvector, var_473_string); // 0x124e NEW_2
	var_474_int = 509045; // 0x1250 PushI
	SetMessage(var_474_int); // 0x1251 TObjFunc
	ClearReplies(); // 0x1253 TObjFunc
	var_475_int = 510222; // 0x1255 PushI
	var_476_int = 11270; // 0x1256 PushI
	var_477_int = 11269; // 0x1257 PushI
	AddReply(var_475_int, var_476_int, var_477_int); // 0x1258 TObjFunc
	return 0; // 0x125a Return
	
Label_4699:
	var_478_int = 11270; // 0x125b PushI
	var_479_bool = var_46_bool == var_478_int; // 0x125c Eq
	if(var_479_bool == 0) goto Label_4732; // 0x125d JumpB
	var_480_string = ""; // 0x125e PushV
	var_480_string = "Distrust"; // 0x125f MovS
	func_4101(var_47_cvector, var_480_string); // 0x1260 NEW_2
	var_481_int = 510223; // 0x1262 PushI
	SetMessage(var_481_int); // 0x1263 TObjFunc
	ClearReplies(); // 0x1265 TObjFunc
	var_482_int = 509046; // 0x1267 PushI
	var_483_int = 11280; // 0x1268 PushI
	var_484_int = 9922; // 0x1269 PushI
	AddReply(var_482_int, var_483_int, var_484_int); // 0x126a TObjFunc
	var_485_int = 510224; // 0x126c PushI
	var_486_int = 9929; // 0x126d PushI
	var_487_int = 11271; // 0x126e PushI
	AddReply(var_485_int, var_486_int, var_487_int); // 0x126f TObjFunc
	var_488_bool = 0; var_489_object = Obj(); // 0x1271 PushV
	var_489_object = var_1_object; // 0x1272 MovT
	func_7358(var_489_object); // 0x1273 NEW_2
	if(var_488_bool == 0) goto Label_4731; // 0x1275 JumpB
	var_490_int = 509047; // 0x1276 PushI
	var_491_int = 9924; // 0x1277 PushI
	var_492_int = 9923; // 0x1278 PushI
	AddReply(var_490_int, var_491_int, var_492_int); // 0x1279 TObjFunc
	
Label_4731:
	return 0; // 0x127b Return
	
Label_4732:
	var_493_int = 9924; // 0x127c PushI
	var_494_bool = var_46_bool == var_493_int; // 0x127d Eq
	if(var_494_bool == 0) goto Label_4755; // 0x127e JumpB
	var_495_string = ""; // 0x127f PushV
	var_495_string = "Neutral"; // 0x1280 MovS
	func_4101(var_47_cvector, var_495_string); // 0x1281 NEW_2
	var_496_int = 509048; // 0x1283 PushI
	SetMessage(var_496_int); // 0x1284 TObjFunc
	ClearReplies(); // 0x1286 TObjFunc
	var_497_int = 509049; // 0x1288 PushI
	var_498_int = 9929; // 0x1289 PushI
	var_499_int = 9925; // 0x128a PushI
	AddReply(var_497_int, var_498_int, var_499_int); // 0x128b TObjFunc
	var_500_int = 510225; // 0x128d PushI
	var_501_int = 11273; // 0x128e PushI
	var_502_int = 11272; // 0x128f PushI
	AddReply(var_500_int, var_501_int, var_502_int); // 0x1290 TObjFunc
	return 0; // 0x1292 Return
	
Label_4755:
	var_503_int = 11273; // 0x1293 PushI
	var_504_bool = var_46_bool == var_503_int; // 0x1294 Eq
	if(var_504_bool == 0) goto Label_4778; // 0x1295 JumpB
	var_505_string = ""; // 0x1296 PushV
	var_505_string = "Neutral"; // 0x1297 MovS
	func_4101(var_47_cvector, var_505_string); // 0x1298 NEW_2
	var_506_int = 510226; // 0x129a PushI
	SetMessage(var_506_int); // 0x129b TObjFunc
	ClearReplies(); // 0x129d TObjFunc
	var_507_int = 510227; // 0x129f PushI
	var_508_int = 35970; // 0x12a0 PushI
	var_509_int = 11274; // 0x12a1 PushI
	AddReply(var_507_int, var_508_int, var_509_int); // 0x12a2 TObjFunc
	var_510_int = 510228; // 0x12a4 PushI
	var_511_int = -1; // 0x12a5 PushI
	var_512_int = 11275; // 0x12a6 PushI
	AddReply(var_510_int, var_511_int, var_512_int); // 0x12a7 TObjFunc
	return 0; // 0x12a9 Return
	
Label_4778:
	var_513_int = 35970; // 0x12aa PushI
	var_514_bool = var_46_bool == var_513_int; // 0x12ab Eq
	if(var_514_bool == 0) goto Label_4801; // 0x12ac JumpB
	var_515_string = ""; // 0x12ad PushV
	var_515_string = "Neutral"; // 0x12ae MovS
	func_4101(var_47_cvector, var_515_string); // 0x12af NEW_2
	var_516_int = 534364; // 0x12b1 PushI
	SetMessage(var_516_int); // 0x12b2 TObjFunc
	ClearReplies(); // 0x12b4 TObjFunc
	var_517_int = 534365; // 0x12b6 PushI
	var_518_int = -1; // 0x12b7 PushI
	var_519_int = 35971; // 0x12b8 PushI
	AddReply(var_517_int, var_518_int, var_519_int); // 0x12b9 TObjFunc
	var_520_int = 534366; // 0x12bb PushI
	var_521_int = -1; // 0x12bc PushI
	var_522_int = 35972; // 0x12bd PushI
	AddReply(var_520_int, var_521_int, var_522_int); // 0x12be TObjFunc
	return 0; // 0x12c0 Return
	
Label_4801:
	var_523_int = 9929; // 0x12c1 PushI
	var_524_bool = var_46_bool == var_523_int; // 0x12c2 Eq
	if(var_524_bool == 0) goto Label_4819; // 0x12c3 JumpB
	var_525_string = ""; // 0x12c4 PushV
	var_525_string = "Neutral"; // 0x12c5 MovS
	func_4101(var_47_cvector, var_525_string); // 0x12c6 NEW_2
	var_526_int = 509053; // 0x12c8 PushI
	SetMessage(var_526_int); // 0x12c9 TObjFunc
	ClearReplies(); // 0x12cb TObjFunc
	var_527_int = 509060; // 0x12cd PushI
	var_528_int = 9938; // 0x12ce PushI
	var_529_int = 9937; // 0x12cf PushI
	AddReply(var_527_int, var_528_int, var_529_int); // 0x12d0 TObjFunc
	return 0; // 0x12d2 Return
	
Label_4819:
	var_530_int = 9938; // 0x12d3 PushI
	var_531_bool = var_46_bool == var_530_int; // 0x12d4 Eq
	if(var_531_bool == 0) goto Label_4842; // 0x12d5 JumpB
	var_532_string = ""; // 0x12d6 PushV
	var_532_string = "Anger"; // 0x12d7 MovS
	func_4101(var_47_cvector, var_532_string); // 0x12d8 NEW_2
	var_533_int = 509061; // 0x12da PushI
	SetMessage(var_533_int); // 0x12db TObjFunc
	ClearReplies(); // 0x12dd TObjFunc
	var_534_int = 509063; // 0x12df PushI
	var_535_int = 11254; // 0x12e0 PushI
	var_536_int = 9940; // 0x12e1 PushI
	AddReply(var_534_int, var_535_int, var_536_int); // 0x12e2 TObjFunc
	var_537_int = 509062; // 0x12e4 PushI
	var_538_int = -1; // 0x12e5 PushI
	var_539_int = 9939; // 0x12e6 PushI
	AddReply(var_537_int, var_538_int, var_539_int); // 0x12e7 TObjFunc
	return 0; // 0x12e9 Return
	
Label_4842:
	var_540_int = 11254; // 0x12ea PushI
	var_541_bool = var_46_bool == var_540_int; // 0x12eb Eq
	if(var_541_bool == 0) goto Label_4865; // 0x12ec JumpB
	var_542_string = ""; // 0x12ed PushV
	var_542_string = "Neutral"; // 0x12ee MovS
	func_4101(var_47_cvector, var_542_string); // 0x12ef NEW_2
	var_543_int = 510208; // 0x12f1 PushI
	SetMessage(var_543_int); // 0x12f2 TObjFunc
	ClearReplies(); // 0x12f4 TObjFunc
	var_544_int = 510209; // 0x12f6 PushI
	var_545_int = -1; // 0x12f7 PushI
	var_546_int = 11255; // 0x12f8 PushI
	AddReply(var_544_int, var_545_int, var_546_int); // 0x12f9 TObjFunc
	var_547_int = 510231; // 0x12fb PushI
	var_548_int = -1; // 0x12fc PushI
	var_549_int = 11278; // 0x12fd PushI
	AddReply(var_547_int, var_548_int, var_549_int); // 0x12fe TObjFunc
	return 0; // 0x1300 Return
	
Label_4865:
	var_550_int = 11280; // 0x1301 PushI
	var_551_bool = var_46_bool == var_550_int; // 0x1302 Eq
	if(var_551_bool == 0) goto Label_4888; // 0x1303 JumpB
	var_552_string = ""; // 0x1304 PushV
	var_552_string = "Neutral"; // 0x1305 MovS
	func_4101(var_47_cvector, var_552_string); // 0x1306 NEW_2
	var_553_int = 510232; // 0x1308 PushI
	SetMessage(var_553_int); // 0x1309 TObjFunc
	ClearReplies(); // 0x130b TObjFunc
	var_554_int = 510233; // 0x130d PushI
	var_555_int = 9938; // 0x130e PushI
	var_556_int = 11281; // 0x130f PushI
	AddReply(var_554_int, var_555_int, var_556_int); // 0x1310 TObjFunc
	var_557_int = 510234; // 0x1312 PushI
	var_558_int = 9938; // 0x1313 PushI
	var_559_int = 11282; // 0x1314 PushI
	AddReply(var_557_int, var_558_int, var_559_int); // 0x1315 TObjFunc
	return 0; // 0x1317 Return
	
Label_4888:
	var_3_string = 1; // 0x1318 TMovB
	var_560_bool = 0; // 0x1319 PushV
	func_6755(var_560_bool); // 0x131a NEW_2
	if(var_560_bool == 0) goto Label_4896; // 0x131c JumpB
	lshStopAnimation(); // 0x131d Func
	goto Label_4898; // 0x131f Jump
	
Label_4898:
	return 0; // 0x1322 Return
	
Label_4896:
	StopAnimation(); // 0x1320 Func
	
Label_4900:
	return 0; // 0x1324 Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0x13d5 PushI
	if(var_48_int == 0) goto Label_5371; // 0x13d6 JumpB
	func_6621(); // 0x13d8 NEW_2
	var_50_int = 13011; // 0x13da PushI
	var_51_bool = var_47_cvector == var_50_int; // 0x13db Eq
	if(var_51_bool == 0) goto Label_5090; // 0x13dc JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0x13dd PushV
	var_52_object = var_1_object; // 0x13de MovT
	var_53_object = var_0_object; // 0x13df MovT
	func_7075(); // 0x13e0 NEW_2
	
Label_5090:
	var_56_int = 16781; // 0x13e2 PushI
	var_57_bool = var_47_cvector == var_56_int; // 0x13e3 Eq
	if(var_57_bool == 0) goto Label_5098; // 0x13e4 JumpB
	var_58_object = Obj(); var_59_object = Obj(); // 0x13e5 PushV
	var_58_object = var_1_object; // 0x13e6 MovT
	var_59_object = var_0_object; // 0x13e7 MovT
	func_7075(); // 0x13e8 NEW_2
	
Label_5098:
	var_60_int = 16782; // 0x13ea PushI
	var_61_bool = var_47_cvector == var_60_int; // 0x13eb Eq
	if(var_61_bool == 0) goto Label_5106; // 0x13ec JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0x13ed PushV
	var_62_object = var_1_object; // 0x13ee MovT
	var_63_object = var_0_object; // 0x13ef MovT
	func_7075(); // 0x13f0 NEW_2
	
Label_5106:
	var_64_int = 16772; // 0x13f2 PushI
	var_65_bool = var_47_cvector == var_64_int; // 0x13f3 Eq
	if(var_65_bool == 0) goto Label_5114; // 0x13f4 JumpB
	var_66_object = Obj(); var_67_object = Obj(); // 0x13f5 PushV
	var_66_object = var_1_object; // 0x13f6 MovT
	var_67_object = var_0_object; // 0x13f7 MovT
	func_7075(); // 0x13f8 NEW_2
	
Label_5114:
	var_68_int = 13001; // 0x13fa PushI
	var_69_bool = var_46_bool == var_68_int; // 0x13fb Eq
	if(var_69_bool == 0) goto Label_5151; // 0x13fc JumpB
	var_70_string = ""; // 0x13fd PushV
	var_70_string = "Neutral"; // 0x13fe MovS
	func_5054(var_47_cvector, var_70_string); // 0x13ff NEW_2
	var_87_int = 511791; // 0x1401 PushI
	SetMessage(var_87_int); // 0x1402 TObjFunc
	ClearReplies(); // 0x1404 TObjFunc
	var_88_bool = 0; // 0x1406 PushV
	var_88_bool = 0; // 0x1407 MovB
	var_89_bool = 0; var_90_object = Obj(); // 0x1408 PushV
	var_90_object = var_1_object; // 0x1409 MovT
	func_7418(var_90_object); // 0x140a NEW_2
	if(var_89_bool == 0) goto Label_5139; // 0x140c JumpB
	var_97_bool = 0; var_98_object = Obj(); // 0x140d PushV
	var_98_object = var_1_object; // 0x140e MovT
	func_7406(var_98_object); // 0x140f NEW_2
	if(var_97_bool == 0) goto Label_5139; // 0x1411 JumpB
	var_88_bool = 1; // 0x1412 MovB
	
Label_5139:
	if(var_88_bool == 0) goto Label_5145; // 0x1413 JumpB
	var_103_int = 511792; // 0x1414 PushI
	var_104_int = 13003; // 0x1415 PushI
	var_105_int = 13002; // 0x1416 PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x1417 TObjFunc
	
Label_5145:
	var_106_int = 511794; // 0x1419 PushI
	var_107_int = -1; // 0x141a PushI
	var_108_int = 13004; // 0x141b PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x141c TObjFunc
	return 0; // 0x141e Return
	
Label_5151:
	var_109_int = 16770; // 0x141f PushI
	var_110_bool = var_46_bool == var_109_int; // 0x1420 Eq
	if(var_110_bool == 0) goto Label_5154; // 0x1421 JumpB
	
Label_5154:
	var_111_int = 16774; // 0x1422 PushI
	var_112_bool = var_46_bool == var_111_int; // 0x1423 Eq
	if(var_112_bool == 0) goto Label_5172; // 0x1424 JumpB
	var_113_string = ""; // 0x1425 PushV
	var_113_string = "Jeer"; // 0x1426 MovS
	func_5054(var_47_cvector, var_113_string); // 0x1427 NEW_2
	var_114_int = 515718; // 0x1429 PushI
	SetMessage(var_114_int); // 0x142a TObjFunc
	ClearReplies(); // 0x142c TObjFunc
	var_115_int = 515726; // 0x142e PushI
	var_116_int = 16784; // 0x142f PushI
	var_117_int = 16783; // 0x1430 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x1431 TObjFunc
	return 0; // 0x1433 Return
	
Label_5172:
	var_118_int = 16784; // 0x1434 PushI
	var_119_bool = var_46_bool == var_118_int; // 0x1435 Eq
	if(var_119_bool == 0) goto Label_5190; // 0x1436 JumpB
	var_120_string = ""; // 0x1437 PushV
	var_120_string = "Jeer"; // 0x1438 MovS
	func_5054(var_47_cvector, var_120_string); // 0x1439 NEW_2
	var_121_int = 515727; // 0x143b PushI
	SetMessage(var_121_int); // 0x143c TObjFunc
	ClearReplies(); // 0x143e TObjFunc
	var_122_int = 515728; // 0x1440 PushI
	var_123_int = 16787; // 0x1441 PushI
	var_124_int = 16786; // 0x1442 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x1443 TObjFunc
	return 0; // 0x1445 Return
	
Label_5190:
	var_125_int = 16787; // 0x1446 PushI
	var_126_bool = var_46_bool == var_125_int; // 0x1447 Eq
	if(var_126_bool == 0) goto Label_5213; // 0x1448 JumpB
	var_127_string = ""; // 0x1449 PushV
	var_127_string = "Neutral"; // 0x144a MovS
	func_5054(var_47_cvector, var_127_string); // 0x144b NEW_2
	var_128_int = 515729; // 0x144d PushI
	SetMessage(var_128_int); // 0x144e TObjFunc
	ClearReplies(); // 0x1450 TObjFunc
	var_129_int = 515730; // 0x1452 PushI
	var_130_int = -1; // 0x1453 PushI
	var_131_int = 16788; // 0x1454 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x1455 TObjFunc
	var_132_int = 515731; // 0x1457 PushI
	var_133_int = -1; // 0x1458 PushI
	var_134_int = 16789; // 0x1459 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x145a TObjFunc
	return 0; // 0x145c Return
	
Label_5213:
	var_135_int = 13003; // 0x145d PushI
	var_136_bool = var_46_bool == var_135_int; // 0x145e Eq
	if(var_136_bool == 0) goto Label_5236; // 0x145f JumpB
	var_137_string = ""; // 0x1460 PushV
	var_137_string = "Jeer"; // 0x1461 MovS
	func_5054(var_47_cvector, var_137_string); // 0x1462 NEW_2
	var_138_int = 511793; // 0x1464 PushI
	SetMessage(var_138_int); // 0x1465 TObjFunc
	ClearReplies(); // 0x1467 TObjFunc
	var_139_int = 511795; // 0x1469 PushI
	var_140_int = 13006; // 0x146a PushI
	var_141_int = 13005; // 0x146b PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x146c TObjFunc
	var_142_int = 515711; // 0x146e PushI
	var_143_int = 16768; // 0x146f PushI
	var_144_int = 16767; // 0x1470 PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x1471 TObjFunc
	return 0; // 0x1473 Return
	
Label_5236:
	var_145_int = 16768; // 0x1474 PushI
	var_146_bool = var_46_bool == var_145_int; // 0x1475 Eq
	if(var_146_bool == 0) goto Label_5259; // 0x1476 JumpB
	var_147_string = ""; // 0x1477 PushV
	var_147_string = "Neutral"; // 0x1478 MovS
	func_5054(var_47_cvector, var_147_string); // 0x1479 NEW_2
	var_148_int = 515712; // 0x147b PushI
	SetMessage(var_148_int); // 0x147c TObjFunc
	ClearReplies(); // 0x147e TObjFunc
	var_149_int = 515715; // 0x1480 PushI
	var_150_int = 13006; // 0x1481 PushI
	var_151_int = 16771; // 0x1482 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x1483 TObjFunc
	var_152_int = 515716; // 0x1485 PushI
	var_153_int = -1; // 0x1486 PushI
	var_154_int = 16772; // 0x1487 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x1488 TObjFunc
	return 0; // 0x148a Return
	
Label_5259:
	var_155_int = 13006; // 0x148b PushI
	var_156_bool = var_46_bool == var_155_int; // 0x148c Eq
	if(var_156_bool == 0) goto Label_5277; // 0x148d JumpB
	var_157_string = ""; // 0x148e PushV
	var_157_string = "Distrust"; // 0x148f MovS
	func_5054(var_47_cvector, var_157_string); // 0x1490 NEW_2
	var_158_int = 511796; // 0x1492 PushI
	SetMessage(var_158_int); // 0x1493 TObjFunc
	ClearReplies(); // 0x1495 TObjFunc
	var_159_int = 511797; // 0x1497 PushI
	var_160_int = 13008; // 0x1498 PushI
	var_161_int = 13007; // 0x1499 PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x149a TObjFunc
	return 0; // 0x149c Return
	
Label_5277:
	var_162_int = 13008; // 0x149d PushI
	var_163_bool = var_46_bool == var_162_int; // 0x149e Eq
	if(var_163_bool == 0) goto Label_5300; // 0x149f JumpB
	var_164_string = ""; // 0x14a0 PushV
	var_164_string = "Distrust"; // 0x14a1 MovS
	func_5054(var_47_cvector, var_164_string); // 0x14a2 NEW_2
	var_165_int = 511798; // 0x14a4 PushI
	SetMessage(var_165_int); // 0x14a5 TObjFunc
	ClearReplies(); // 0x14a7 TObjFunc
	var_166_int = 511799; // 0x14a9 PushI
	var_167_int = 13010; // 0x14aa PushI
	var_168_int = 13009; // 0x14ab PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x14ac TObjFunc
	var_169_int = 515720; // 0x14ae PushI
	var_170_int = 16778; // 0x14af PushI
	var_171_int = 16777; // 0x14b0 PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x14b1 TObjFunc
	return 0; // 0x14b3 Return
	
Label_5300:
	var_172_int = 16778; // 0x14b4 PushI
	var_173_bool = var_46_bool == var_172_int; // 0x14b5 Eq
	if(var_173_bool == 0) goto Label_5318; // 0x14b6 JumpB
	var_174_string = ""; // 0x14b7 PushV
	var_174_string = "Neutral"; // 0x14b8 MovS
	func_5054(var_47_cvector, var_174_string); // 0x14b9 NEW_2
	var_175_int = 515721; // 0x14bb PushI
	SetMessage(var_175_int); // 0x14bc TObjFunc
	ClearReplies(); // 0x14be TObjFunc
	var_176_int = 515722; // 0x14c0 PushI
	var_177_int = 16780; // 0x14c1 PushI
	var_178_int = 16779; // 0x14c2 PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x14c3 TObjFunc
	return 0; // 0x14c5 Return
	
Label_5318:
	var_179_int = 16780; // 0x14c6 PushI
	var_180_bool = var_46_bool == var_179_int; // 0x14c7 Eq
	if(var_180_bool == 0) goto Label_5341; // 0x14c8 JumpB
	var_181_string = ""; // 0x14c9 PushV
	var_181_string = "Neutral"; // 0x14ca MovS
	func_5054(var_47_cvector, var_181_string); // 0x14cb NEW_2
	var_182_int = 515723; // 0x14cd PushI
	SetMessage(var_182_int); // 0x14ce TObjFunc
	ClearReplies(); // 0x14d0 TObjFunc
	var_183_int = 515724; // 0x14d2 PushI
	var_184_int = -1; // 0x14d3 PushI
	var_185_int = 16781; // 0x14d4 PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x14d5 TObjFunc
	var_186_int = 515725; // 0x14d7 PushI
	var_187_int = -1; // 0x14d8 PushI
	var_188_int = 16782; // 0x14d9 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x14da TObjFunc
	return 0; // 0x14dc Return
	
Label_5341:
	var_189_int = 13010; // 0x14dd PushI
	var_190_bool = var_46_bool == var_189_int; // 0x14de Eq
	if(var_190_bool == 0) goto Label_5359; // 0x14df JumpB
	var_191_string = ""; // 0x14e0 PushV
	var_191_string = "Neutral"; // 0x14e1 MovS
	func_5054(var_47_cvector, var_191_string); // 0x14e2 NEW_2
	var_192_int = 511800; // 0x14e4 PushI
	SetMessage(var_192_int); // 0x14e5 TObjFunc
	ClearReplies(); // 0x14e7 TObjFunc
	var_193_int = 511801; // 0x14e9 PushI
	var_194_int = -1; // 0x14ea PushI
	var_195_int = 13011; // 0x14eb PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x14ec TObjFunc
	return 0; // 0x14ee Return
	
Label_5359:
	var_3_string = 1; // 0x14ef TMovB
	var_196_bool = 0; // 0x14f0 PushV
	func_6755(var_196_bool); // 0x14f1 NEW_2
	if(var_196_bool == 0) goto Label_5367; // 0x14f3 JumpB
	lshStopAnimation(); // 0x14f4 Func
	goto Label_5369; // 0x14f6 Jump
	
Label_5369:
	return 0; // 0x14f9 Return
	
Label_5367:
	StopAnimation(); // 0x14f7 Func
	
Label_5371:
	return 0; // 0x14fb Return
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0x15c5 PushI
	if(var_48_int == 0) goto Label_5850; // 0x15c6 JumpB
	func_6621(); // 0x15c8 NEW_2
	var_50_int = 13415; // 0x15ca PushI
	var_51_bool = var_46_bool == var_50_int; // 0x15cb Eq
	if(var_51_bool == 0) goto Label_5640; // 0x15cc JumpB
	var_52_bool = 0; // 0x15cd PushV
	var_52_bool = 0; // 0x15ce MovB
	var_53_bool = 0; var_54_object = Obj(); // 0x15cf PushV
	var_54_object = var_1_object; // 0x15d0 MovT
	func_7502(var_54_object); // 0x15d1 NEW_2
	if(var_53_bool == 0) goto Label_5594; // 0x15d3 JumpB
	var_61_bool = 0; var_62_object = Obj(); // 0x15d4 PushV
	var_62_object = var_1_object; // 0x15d5 MovT
	func_7514(var_62_object); // 0x15d6 NEW_2
	if(var_61_bool == 0) goto Label_5594; // 0x15d8 JumpB
	var_52_bool = 1; // 0x15d9 MovB
	
Label_5594:
	if(var_52_bool == 0) goto Label_5620; // 0x15da JumpB
	var_67_object = Obj(); var_68_object = Obj(); // 0x15db PushV
	var_67_object = var_1_object; // 0x15dc MovT
	var_68_object = var_0_object; // 0x15dd MovT
	func_7105(); // 0x15de NEW_2
	var_71_string = ""; // 0x15e0 PushV
	var_71_string = "Neutral"; // 0x15e1 MovS
	func_5550(var_47_cvector, var_71_string); // 0x15e2 NEW_2
	var_88_int = 512258; // 0x15e4 PushI
	SetMessage(var_88_int); // 0x15e5 TObjFunc
	ClearReplies(); // 0x15e7 TObjFunc
	var_89_int = 512259; // 0x15e9 PushI
	var_90_int = 13417; // 0x15ea PushI
	var_91_int = 13416; // 0x15eb PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x15ec TObjFunc
	var_92_int = 541804; // 0x15ee PushI
	var_93_int = -1; // 0x15ef PushI
	var_94_int = 44016; // 0x15f0 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x15f1 TObjFunc
	return 0; // 0x15f3 Return
	
Label_5620:
	var_95_string = ""; // 0x15f4 PushV
	var_95_string = "Neutral"; // 0x15f5 MovS
	func_5550(var_47_cvector, var_95_string); // 0x15f6 NEW_2
	var_96_int = 513775; // 0x15f8 PushI
	SetMessage(var_96_int); // 0x15f9 TObjFunc
	ClearReplies(); // 0x15fb TObjFunc
	var_97_int = 513776; // 0x15fd PushI
	var_98_int = -1; // 0x15fe PushI
	var_99_int = 15012; // 0x15ff PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x1600 TObjFunc
	var_100_int = 541596; // 0x1602 PushI
	var_101_int = -1; // 0x1603 PushI
	var_102_int = 43760; // 0x1604 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x1605 TObjFunc
	return 0; // 0x1607 Return
	
Label_5640:
	var_103_int = 13417; // 0x1608 PushI
	var_104_bool = var_46_bool == var_103_int; // 0x1609 Eq
	if(var_104_bool == 0) goto Label_5663; // 0x160a JumpB
	var_105_string = ""; // 0x160b PushV
	var_105_string = "Neutral"; // 0x160c MovS
	func_5550(var_47_cvector, var_105_string); // 0x160d NEW_2
	var_106_int = 512260; // 0x160f PushI
	SetMessage(var_106_int); // 0x1610 TObjFunc
	ClearReplies(); // 0x1612 TObjFunc
	var_107_int = 512261; // 0x1614 PushI
	var_108_int = 13419; // 0x1615 PushI
	var_109_int = 13418; // 0x1616 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x1617 TObjFunc
	var_110_int = 541805; // 0x1619 PushI
	var_111_int = 44029; // 0x161a PushI
	var_112_int = 44017; // 0x161b PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x161c TObjFunc
	return 0; // 0x161e Return
	
Label_5663:
	var_113_int = 44029; // 0x161f PushI
	var_114_bool = var_46_bool == var_113_int; // 0x1620 Eq
	if(var_114_bool == 0) goto Label_5681; // 0x1621 JumpB
	var_115_string = ""; // 0x1622 PushV
	var_115_string = "Anger"; // 0x1623 MovS
	func_5550(var_47_cvector, var_115_string); // 0x1624 NEW_2
	var_116_int = 541817; // 0x1626 PushI
	SetMessage(var_116_int); // 0x1627 TObjFunc
	ClearReplies(); // 0x1629 TObjFunc
	var_117_int = 541818; // 0x162b PushI
	var_118_int = 13421; // 0x162c PushI
	var_119_int = 44030; // 0x162d PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x162e TObjFunc
	return 0; // 0x1630 Return
	
Label_5681:
	var_120_int = 13419; // 0x1631 PushI
	var_121_bool = var_46_bool == var_120_int; // 0x1632 Eq
	if(var_121_bool == 0) goto Label_5699; // 0x1633 JumpB
	var_122_string = ""; // 0x1634 PushV
	var_122_string = "Neutral"; // 0x1635 MovS
	func_5550(var_47_cvector, var_122_string); // 0x1636 NEW_2
	var_123_int = 512262; // 0x1638 PushI
	SetMessage(var_123_int); // 0x1639 TObjFunc
	ClearReplies(); // 0x163b TObjFunc
	var_124_int = 512263; // 0x163d PushI
	var_125_int = 13421; // 0x163e PushI
	var_126_int = 13420; // 0x163f PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x1640 TObjFunc
	return 0; // 0x1642 Return
	
Label_5699:
	var_127_int = 13421; // 0x1643 PushI
	var_128_bool = var_46_bool == var_127_int; // 0x1644 Eq
	if(var_128_bool == 0) goto Label_5717; // 0x1645 JumpB
	var_129_string = ""; // 0x1646 PushV
	var_129_string = "Neutral"; // 0x1647 MovS
	func_5550(var_47_cvector, var_129_string); // 0x1648 NEW_2
	var_130_int = 512264; // 0x164a PushI
	SetMessage(var_130_int); // 0x164b TObjFunc
	ClearReplies(); // 0x164d TObjFunc
	var_131_int = 512265; // 0x164f PushI
	var_132_int = 13423; // 0x1650 PushI
	var_133_int = 13422; // 0x1651 PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x1652 TObjFunc
	return 0; // 0x1654 Return
	
Label_5717:
	var_134_int = 13423; // 0x1655 PushI
	var_135_bool = var_46_bool == var_134_int; // 0x1656 Eq
	if(var_135_bool == 0) goto Label_5735; // 0x1657 JumpB
	var_136_string = ""; // 0x1658 PushV
	var_136_string = "Neutral"; // 0x1659 MovS
	func_5550(var_47_cvector, var_136_string); // 0x165a NEW_2
	var_137_int = 512266; // 0x165c PushI
	SetMessage(var_137_int); // 0x165d TObjFunc
	ClearReplies(); // 0x165f TObjFunc
	var_138_int = 512267; // 0x1661 PushI
	var_139_int = 13425; // 0x1662 PushI
	var_140_int = 13424; // 0x1663 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x1664 TObjFunc
	return 0; // 0x1666 Return
	
Label_5735:
	var_141_int = 44033; // 0x1667 PushI
	var_142_bool = var_46_bool == var_141_int; // 0x1668 Eq
	if(var_142_bool == 0) goto Label_5738; // 0x1669 JumpB
	
Label_5738:
	var_143_int = 44035; // 0x166a PushI
	var_144_bool = var_46_bool == var_143_int; // 0x166b Eq
	if(var_144_bool == 0) goto Label_5761; // 0x166c JumpB
	var_145_string = ""; // 0x166d PushV
	var_145_string = "Neutral"; // 0x166e MovS
	func_5550(var_47_cvector, var_145_string); // 0x166f NEW_2
	var_146_int = 541822; // 0x1671 PushI
	SetMessage(var_146_int); // 0x1672 TObjFunc
	ClearReplies(); // 0x1674 TObjFunc
	var_147_int = 541823; // 0x1676 PushI
	var_148_int = 44037; // 0x1677 PushI
	var_149_int = 44036; // 0x1678 PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x1679 TObjFunc
	var_150_int = 541826; // 0x167b PushI
	var_151_int = 13425; // 0x167c PushI
	var_152_int = 44039; // 0x167d PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x167e TObjFunc
	return 0; // 0x1680 Return
	
Label_5761:
	var_153_int = 44037; // 0x1681 PushI
	var_154_bool = var_46_bool == var_153_int; // 0x1682 Eq
	if(var_154_bool == 0) goto Label_5779; // 0x1683 JumpB
	var_155_string = ""; // 0x1684 PushV
	var_155_string = "Neutral"; // 0x1685 MovS
	func_5550(var_47_cvector, var_155_string); // 0x1686 NEW_2
	var_156_int = 541824; // 0x1688 PushI
	SetMessage(var_156_int); // 0x1689 TObjFunc
	ClearReplies(); // 0x168b TObjFunc
	var_157_int = 541825; // 0x168d PushI
	var_158_int = 13425; // 0x168e PushI
	var_159_int = 44038; // 0x168f PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x1690 TObjFunc
	return 0; // 0x1692 Return
	
Label_5779:
	var_160_int = 13425; // 0x1693 PushI
	var_161_bool = var_46_bool == var_160_int; // 0x1694 Eq
	if(var_161_bool == 0) goto Label_5797; // 0x1695 JumpB
	var_162_string = ""; // 0x1696 PushV
	var_162_string = "Anger"; // 0x1697 MovS
	func_5550(var_47_cvector, var_162_string); // 0x1698 NEW_2
	var_163_int = 512268; // 0x169a PushI
	SetMessage(var_163_int); // 0x169b TObjFunc
	ClearReplies(); // 0x169d TObjFunc
	var_164_int = 512269; // 0x169f PushI
	var_165_int = 13427; // 0x16a0 PushI
	var_166_int = 13426; // 0x16a1 PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x16a2 TObjFunc
	return 0; // 0x16a4 Return
	
Label_5797:
	var_167_int = 13427; // 0x16a5 PushI
	var_168_bool = var_46_bool == var_167_int; // 0x16a6 Eq
	if(var_168_bool == 0) goto Label_5815; // 0x16a7 JumpB
	var_169_string = ""; // 0x16a8 PushV
	var_169_string = "Anger"; // 0x16a9 MovS
	func_5550(var_47_cvector, var_169_string); // 0x16aa NEW_2
	var_170_int = 512270; // 0x16ac PushI
	SetMessage(var_170_int); // 0x16ad TObjFunc
	ClearReplies(); // 0x16af TObjFunc
	var_171_int = 512271; // 0x16b1 PushI
	var_172_int = 13429; // 0x16b2 PushI
	var_173_int = 13428; // 0x16b3 PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x16b4 TObjFunc
	return 0; // 0x16b6 Return
	
Label_5815:
	var_174_int = 13429; // 0x16b7 PushI
	var_175_bool = var_46_bool == var_174_int; // 0x16b8 Eq
	if(var_175_bool == 0) goto Label_5838; // 0x16b9 JumpB
	var_176_string = ""; // 0x16ba PushV
	var_176_string = "Neutral"; // 0x16bb MovS
	func_5550(var_47_cvector, var_176_string); // 0x16bc NEW_2
	var_177_int = 512272; // 0x16be PushI
	SetMessage(var_177_int); // 0x16bf TObjFunc
	ClearReplies(); // 0x16c1 TObjFunc
	var_178_int = 512273; // 0x16c3 PushI
	var_179_int = -1; // 0x16c4 PushI
	var_180_int = 13430; // 0x16c5 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x16c6 TObjFunc
	var_181_int = 541827; // 0x16c8 PushI
	var_182_int = -1; // 0x16c9 PushI
	var_183_int = 44042; // 0x16ca PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x16cb TObjFunc
	return 0; // 0x16cd Return
	
Label_5838:
	var_3_string = 1; // 0x16ce TMovB
	var_184_bool = 0; // 0x16cf PushV
	func_6755(var_184_bool); // 0x16d0 NEW_2
	if(var_184_bool == 0) goto Label_5846; // 0x16d2 JumpB
	lshStopAnimation(); // 0x16d3 Func
	goto Label_5848; // 0x16d5 Jump
	
Label_5848:
	return 0; // 0x16d8 Return
	
Label_5846:
	StopAnimation(); // 0x16d6 Func
	
Label_5850:
	return 0; // 0x16da Return
}


task_17_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_int, var_46_int, var_47_cvector)
{
	var_48_int = 1; // 0x177d PushI
	if(var_48_int == 0) goto Label_6053; // 0x177e JumpB
	func_6621(); // 0x1780 NEW_2
	var_50_int = 42551; // 0x1782 PushI
	var_51_bool = var_46_int == var_50_int; // 0x1783 Eq
	if(var_51_bool == 0) goto Label_6041; // 0x1784 JumpB
	var_52_string = ""; // 0x1785 PushV
	var_52_string = "Neutral"; // 0x1786 MovS
	func_5990(var_47_cvector, var_52_string); // 0x1787 NEW_2
	var_69_int = 540542; // 0x1789 PushI
	SetMessage(var_69_int); // 0x178a TObjFunc
	ClearReplies(); // 0x178c TObjFunc
	var_70_int = 540543; // 0x178e PushI
	var_71_int = -1; // 0x178f PushI
	var_72_int = 42552; // 0x1790 PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0x1791 TObjFunc
	var_73_int = 540796; // 0x1793 PushI
	var_74_int = -1; // 0x1794 PushI
	var_75_int = 42845; // 0x1795 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x1796 TObjFunc
	return 0; // 0x1798 Return
	
Label_6041:
	var_3_string = 1; // 0x1799 TMovB
	var_76_bool = 0; // 0x179a PushV
	func_6755(var_76_bool); // 0x179b NEW_2
	if(var_76_bool == 0) goto Label_6049; // 0x179d JumpB
	lshStopAnimation(); // 0x179e Func
	goto Label_6051; // 0x17a0 Jump
	
Label_6051:
	return 0; // 0x17a3 Return
	
Label_6049:
	StopAnimation(); // 0x17a1 Func
	
Label_6053:
	return 0; // 0x17a5 Return
}


task_18_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector, var_46_int)
{
	var_47_int = 10; // 0x17f3 PushI
	var_48_bool = var_46_int == var_47_int; // 0x17f4 Eq
	if(var_48_bool == 0) goto Label_6167; // 0x17f5 JumpB
	func_6126(); // 0x17f7 NEW_2
	var_50_bool = 0; // 0x17f9 PushV
	var_50_bool = 0; // 0x17fa MovB
	var_51_bool = 0; // 0x17fb PushV
	func_6347(var_51_bool); // 0x17fc NEW_2
	if(var_51_bool == 0) goto Label_6148; // 0x17fe JumpB
	var_54_bool = 0; // 0x17ff PushV
	func_6095(var_54_bool); // 0x1800 NEW_2
	if(var_54_bool == 0) goto Label_6148; // 0x1802 JumpB
	var_50_bool = 1; // 0x1803 MovB
	
Label_6148:
	if(var_50_bool == 0) goto Label_6161; // 0x1804 JumpB
	var_71_bool = 0; // 0x1805 PushV
	func_6075(var_71_bool); // 0x1806 NEW_2
	if(var_71_bool == 0) goto Label_6160; // 0x1808 JumpB
	var_90_bool = 0; var_91_object = Obj(); // 0x1809 PushV
	var_92_object = Obj(); // 0x180a PushV
	func_6628(var_92_object); // 0x180b NEW_2
	var_91_object = var_92_object; // 0x180c Mov
	func_6495(var_91_object); // 0x180e NEW_2
	
Label_6160:
	goto Label_6167; // 0x1810 Jump
	
Label_6167:
	return 0; // 0x1817 Return
	
Label_6161:
	func_6090(var_46_int); // 0x1812 NEW_2
	func_6117(); // 0x1815 NEW_2
}


task_18_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector)
{
	func_6308(); // 0x1819 NEW_2
	func_6126(); // 0x181c NEW_2
	lshStopSpeech(); // 0x181e Func
	lshStopAnimation(); // 0x1820 Func
	StopAsync(); // 0x1822 Func
	Hold(); // 0x1824 Func
	return 0; // 0x1826 Return
}


task_18_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector)
{
	StopGroup0(); // 0x1827 Func
	func_6126(); // 0x182a NEW_2
	var_47_string = ""; // 0x182c PushV
	var_47_string = "Neutral"; // 0x182d MovS
	func_6575(var_47_string); // 0x182e NEW_2
	func_6117(); // 0x1831 NEW_2
	return 0; // 0x1833 Return
}


task_18_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector, var_46_bool)
{
	var_47_bool = var_46_bool; // 0x1835 Push
	if(var_47_bool == 0) goto Label_6203; // 0x1836 JumpB
	func_6117(); // 0x1838 NEW_2
	goto Label_6207; // 0x183a Jump
	
Label_6207:
	return 0; // 0x183f Return
	
Label_6203:
	var_53_string = ""; // 0x183b PushV
	var_53_string = "Neutral"; // 0x183c MovS
	func_6575(var_53_string); // 0x183d NEW_2
}


task_18_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector, var_46_object)
{
	var_47_bool = 0; var_48_bool = 0; // 0x1840 PushV
	IsOverrideActive(var_48_bool); // 0x1841 Func
	var_49_bool = var_48_bool == 0; // 0x1843 Not
	if(var_49_bool == 0) goto Label_6236; // 0x1844 JumpB
	EventDisable(0); // 0x1845 EventDisable
	func_6308(); // 0x1847 NEW_2
	var_50_bool = 0; var_51_object = Obj(); // 0x1849 PushV
	var_51_object = var_46_object; // 0x184a Mov
	func_6338(var_51_object); // 0x184b NEW_2
	EventEnable(0); // 0x184d EventEnable
	var_64_object = Obj(); // 0x184e PushV
	var_64_object = var_46_object; // 0x184f Mov
	func_7764(var_64_object); // 0x1850 NEW_2
	var_1090_string = ""; // 0x1852 PushV
	var_1090_string = "Neutral"; // 0x1853 MovS
	func_6575(var_1090_string); // 0x1854 NEW_2
	func_6126(); // 0x1857 NEW_2
	func_6117(); // 0x185a NEW_2
	
Label_6236:
	return 2; // 0x185c Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector)
{
	var_46_bool = GlobalVars[1]; // 0x17a6 PushGE
	var_46_bool = 0; // 0x17a7 MovB
	GlobalVars[1] = var_46_bool; // 0x17a8 PopGE
	func_6061(var_45_cvector); // 0x17aa NEW_2
	return 0; // 0x17ac Return
}


func_0(var_0_object, var_911_int, var_912_object)
{
	var_914_object = Obj(); var_915_bool = 0; var_916_int = 0; var_917_bool = 0; var_918_object = Obj(); var_919_bool = 0; var_920_int = 0; var_921_bool = 0; // 0x0 PushV
	var_0_object = var_912_object; // 0x1 TMov
	var_922_bool = 0; var_923_object = Obj(); var_924_float = 0; // 0x2 PushV
	var_923_object = var_912_object; // 0x3 Mov
	var_924_float = 70.0; // 0x4 MovF
	func_6352(var_923_object, var_924_float); // 0x5 NEW_2
	var_925_bool = var_922_bool == 0; // 0x7 Not
	if(var_925_bool == 0) goto Label_11; // 0x8 JumpB
	var_911_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_918_object); // 0xb Func
	var_926_int = 0; // 0xd PushV
	func_6749(var_926_int); // 0xe NEW_2
	SetNPCName(var_926_int); // 0x10 ObjFunc
	var_927_int = 0; // 0x12 PushV
	func_6747(var_927_int); // 0x13 NEW_2
	SetNPCDescription(var_927_int); // 0x15 ObjFunc
	var_928_string = ""; // 0x17 PushV
	func_6751(var_928_string); // 0x18 NEW_2
	SetPhoto(var_928_string); // 0x1a ObjFunc
	var_929_string = ""; // 0x1c PushV
	func_6753(var_929_string); // 0x1d NEW_2
	SetPhoto2(var_929_string); // 0x1f ObjFunc
	var_930_int = 0; // 0x21 PushV
	func_7747(var_930_int); // 0x22 NEW_2
	SetPlayerName(var_930_int); // 0x24 ObjFunc
	var_920_int = -1; // 0x26 MovI
	IsOverrideActive(var_919_bool); // 0x27 Func
	var_931_bool = var_919_bool; // 0x29 Push
	if(var_931_bool == 0) goto Label_45; // 0x2a JumpB
	var_911_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_918_object); // 0x2d Func
	var_932_bool = 0; var_933_object = Obj(); // 0x2f PushV
	var_934_object = Obj(); // 0x30 PushV
	func_6628(var_934_object); // 0x31 NEW_2
	var_933_object = var_934_object; // 0x32 Mov
	func_6437(var_932_bool, var_933_object); // 0x34 NEW_2
	var_935_object = Obj(); var_936_object = Obj(); // 0x36 PushV
	var_935_object = var_912_object; // 0x37 Mov
	var_936_object = var_918_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_937_object, var_938_object, var_939_string, var_940_bool, var_935_object, var_936_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_921_bool); // 0x3d ObjFunc
	
Label_63:
	var_971_bool = var_921_bool == 0; // 0x3f Not
	if(var_971_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_921_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_972_object = Obj(); // 0x46 PushV
	var_972_object = var_912_object; // 0x47 Mov
	func_6420(); // 0x48 NEW_2
	StopDialog(var_918_object); // 0x4a Func
	GetReturnValue(var_920_int); // 0x4c ObjFunc
	var_911_int = var_920_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_6660(var_133_int, var_134_int)
{
	var_135_object = Obj(); var_136_object = Obj(); // 0x1a04 PushV
	CreateIntVector(var_136_object); // 0x1a05 Func
	add(var_133_int); // 0x1a07 ObjFunc
	add(var_134_int); // 0x1a09 ObjFunc
	var_137_int = 3; // 0x1a0b PushI
	SendWorldWndMessage(var_137_int, var_136_object); // 0x1a0c Func
	return 2; // 0x1a0e Return
}


func_4101(var_2_object, var_549_string)
{
	var_550_bool = 0; // 0x1006 PushV
	func_6755(var_550_bool); // 0x1007 NEW_2
	var_551_bool = var_550_bool == 0; // 0x1009 Not
	if(var_551_bool == 0) goto Label_4108; // 0x100a JumpB
	return 0; // 0x100b Return
	
Label_4108:
	var_552_bool = var_549_string == var_2_object; // 0x100c Eq
	if(var_552_bool == 0) goto Label_4111; // 0x100d JumpB
	return 0; // 0x100e Return
	
Label_4111:
	var_553_string = ""; var_554_bool = 0; // 0x100f PushV
	var_553_string = var_549_string; // 0x1010 Mov
	var_555_string = ""; // 0x1011 PushS
	var_556_bool = var_549_string == var_555_string; // 0x1012 Eq
	if(var_556_bool == 0) goto Label_4118; // 0x1013 JumpB
	var_554_bool = 0; // 0x1014 MovB
	goto Label_4119; // 0x1015 Jump
	
Label_4119:
	func_6591(var_553_string, var_554_bool); // 0x1017 NEW_2
	var_2_object = var_549_string; // 0x1019 TMov
	return 0; // 0x101a Return
	
Label_4118:
	var_554_bool = 1; // 0x1016 MovB
}


func_7177(var_589_bool)
{
	var_591_int = 0; var_592_string = ""; // 0x1c0a PushV
	var_592_string = "d3q01HelpBurah"; // 0x1c0b MovS
	func_6644(var_591_int, var_592_string); // 0x1c0c NEW_2
	var_593_int = 0; // 0x1c0e PushI
	var_594_bool = var_591_int != var_593_int; // 0x1c0f Neq
	if(var_594_bool == 0) goto Label_7187; // 0x1c10 JumpB
	var_589_bool = 1; // 0x1c11 MovB
	return 0; // 0x1c12 Return
	
Label_7187:
	var_589_bool = 0; // 0x1c13 MovB
	return 0; // 0x1c14 Return
}


func_522(var_0_object, var_1_object, var_2_object, var_3_string, var_999_object, var_1000_object)
{
	var_0_object = var_1000_object; // 0x20b TMov
	var_1_object = var_999_object; // 0x20c TMov
	var_3_string = 0; // 0x20d TMovB
	var_1005_int = 1; // 0x20e PushI
	if(var_1005_int == 0) goto Label_555; // 0x20f JumpB
	var_1006_string = ""; // 0x210 PushV
	var_1006_string = "Neutral"; // 0x211 MovS
	func_585(var_1000_object, var_1006_string); // 0x212 NEW_2
	var_1014_int = 535662; // 0x214 PushI
	SetMessage(var_1014_int); // 0x215 TObjFunc
	ClearReplies(); // 0x217 TObjFunc
	var_1015_int = 535663; // 0x219 PushI
	var_1016_int = 42111; // 0x21a PushI
	var_1017_int = 37349; // 0x21b PushI
	AddReply(var_1015_int, var_1016_int, var_1017_int); // 0x21c TObjFunc
	var_1018_int = 540003; // 0x21e PushI
	var_1019_int = -1; // 0x21f PushI
	var_1020_int = 41974; // 0x220 PushI
	AddReply(var_1018_int, var_1019_int, var_1020_int); // 0x221 TObjFunc
	var_1021_int = 540138; // 0x223 PushI
	var_1022_int = -1; // 0x224 PushI
	var_1023_int = 42110; // 0x225 PushI
	AddReply(var_1021_int, var_1022_int, var_1023_int); // 0x226 TObjFunc
	goto Label_555; // 0x228 Jump
	
Label_555:
	var_1024_bool = 0; // 0x22b PushV
	func_6755(var_1024_bool); // 0x22c NEW_2
	if(var_1024_bool == 0) goto Label_570; // 0x22e JumpB
	
Label_559:
	lshWaitForAnimEnd(); // 0x22f Func
	var_1025_string = var_3_string; // 0x231 PushT
	if(var_1025_string == 0) goto Label_564; // 0x232 JumpB
	goto Label_569; // 0x233 Jump
	
Label_569:
	goto Label_584; // 0x239 Jump
	
Label_584:
	return 0; // 0x248 Return
	
Label_564:
	var_1026_string = ""; // 0x234 PushV
	var_1026_string = var_2_object; // 0x235 MovT
	func_6575(var_1026_string); // 0x236 NEW_2
	goto Label_559; // 0x238 Jump
	
Label_570:
	var_1027_string = "all"; // 0x23a PushS
	var_1028_string = "idle"; // 0x23b PushS
	PlayAnimation(var_1027_string, var_1028_string); // 0x23c Func
	
Label_574:
	WaitForAnimEnd(); // 0x23e Func
	var_1029_string = var_3_string; // 0x240 PushT
	if(var_1029_string == 0) goto Label_579; // 0x241 JumpB
	goto Label_584; // 0x242 Jump
	
Label_579:
	var_1030_string = "all"; // 0x243 PushS
	var_1031_string = "idle"; // 0x244 PushS
	PlayAnimation(var_1030_string, var_1031_string); // 0x245 Func
	goto Label_574; // 0x247 Jump
}


func_1551(var_2_object, var_266_string)
{
	var_267_bool = 0; // 0x610 PushV
	func_6755(var_267_bool); // 0x611 NEW_2
	var_268_bool = var_267_bool == 0; // 0x613 Not
	if(var_268_bool == 0) goto Label_1558; // 0x614 JumpB
	return 0; // 0x615 Return
	
Label_1558:
	var_269_bool = var_266_string == var_2_object; // 0x616 Eq
	if(var_269_bool == 0) goto Label_1561; // 0x617 JumpB
	return 0; // 0x618 Return
	
Label_1561:
	var_270_string = ""; var_271_bool = 0; // 0x619 PushV
	var_270_string = var_266_string; // 0x61a Mov
	var_272_string = ""; // 0x61b PushS
	var_273_bool = var_266_string == var_272_string; // 0x61c Eq
	if(var_273_bool == 0) goto Label_1568; // 0x61d JumpB
	var_271_bool = 0; // 0x61e MovB
	goto Label_1569; // 0x61f Jump
	
Label_1569:
	func_6591(var_270_string, var_271_bool); // 0x621 NEW_2
	var_2_object = var_266_string; // 0x623 TMov
	return 0; // 0x624 Return
	
Label_1568:
	var_271_bool = 1; // 0x620 MovB
}


func_6672(var_120_object, var_121_int)
{
	var_122_int = 0; var_123_int = 0; // 0x1a10 PushV
	var_124_object = Obj(); var_125_string = ""; var_126_int = 0; // 0x1a11 PushV
	var_124_object = var_120_object; // 0x1a12 Mov
	var_125_string = "money"; // 0x1a13 MovS
	var_126_int = var_121_int; // 0x1a14 Mov
	func_6321(var_125_string, var_126_int); // 0x1a15 NEW_2
	var_130_int = 0; // 0x1a17 PushI
	var_131_bool = var_121_int > var_130_int; // 0x1a18 GT
	if(var_131_bool == 0) goto Label_6690; // 0x1a19 JumpB
	var_132_string = "Money"; // 0x1a1a PushS
	GetInvItemByName(var_123_int, var_132_string); // 0x1a1b Func
	var_133_int = 0; var_134_int = 0; // 0x1a1d PushV
	var_133_int = var_123_int; // 0x1a1e Mov
	var_134_int = var_121_int; // 0x1a1f Mov
	func_6660(var_133_int, var_134_int); // 0x1a20 NEW_2
	
Label_6690:
	return 2; // 0x1a22 Return
}


func_7697(var_58_object)
{
	var_59_object = Obj(); var_60_object = Obj(); var_61_object = Obj(); var_62_object = Obj(); // 0x1e11 PushV
	GetMainOutdoorScene(var_61_object); // 0x1e12 Func
	var_63_bool = var_61_object == 0; // 0x1e14 NullEq
	if(var_63_bool == 0) goto Label_7708; // 0x1e15 JumpB
	var_64_string = "Can't find main outdoor scene"; // 0x1e16 PushS
	Trace(var_64_string); // 0x1e17 Func
	var_62_object = 0; // 0x1e19 SetNull
	var_58_object = var_62_object; // 0x1e1a Mov
	return 4; // 0x1e1b Return
	
Label_7708:
	GetMap(var_62_object); // 0x1e1c ObjFunc
	var_58_object = var_62_object; // 0x1e1e Mov
	return 4; // 0x1e1f Return
}


func_7189(var_612_bool)
{
	var_614_bool = 0; // 0x1c16 PushV
	var_614_bool = 0; // 0x1c17 MovB
	var_615_bool = 0; // 0x1c18 PushV
	var_615_bool = 0; // 0x1c19 MovB
	var_616_int = 0; var_617_string = ""; // 0x1c1a PushV
	var_617_string = "d3q02"; // 0x1c1b MovS
	func_6644(var_616_int, var_617_string); // 0x1c1c NEW_2
	var_618_int = 1000; // 0x1c1e PushI
	var_619_bool = var_616_int == var_618_int; // 0x1c1f Eq
	var_620_bool = var_619_bool == 0; // 0x1c20 Not
	if(var_620_bool == 0) goto Label_7211; // 0x1c21 JumpB
	var_621_int = 0; var_622_string = ""; // 0x1c22 PushV
	var_622_string = "d3q02"; // 0x1c23 MovS
	func_6644(var_621_int, var_622_string); // 0x1c24 NEW_2
	var_623_int = 0; // 0x1c26 PushI
	var_624_bool = var_621_int == var_623_int; // 0x1c27 Eq
	var_625_bool = var_624_bool == 0; // 0x1c28 Not
	if(var_625_bool == 0) goto Label_7211; // 0x1c29 JumpB
	var_615_bool = 1; // 0x1c2a MovB
	
Label_7211:
	if(var_615_bool == 0) goto Label_7221; // 0x1c2b JumpB
	var_626_int = 0; var_627_string = ""; // 0x1c2c PushV
	var_627_string = "d3q02"; // 0x1c2d MovS
	func_6644(var_626_int, var_627_string); // 0x1c2e NEW_2
	var_628_int = -1; // 0x1c30 PushI
	var_629_bool = var_626_int == var_628_int; // 0x1c31 Eq
	var_630_bool = var_629_bool == 0; // 0x1c32 Not
	if(var_630_bool == 0) goto Label_7221; // 0x1c33 JumpB
	var_614_bool = 1; // 0x1c34 MovB
	
Label_7221:
	if(var_614_bool == 0) goto Label_7224; // 0x1c35 JumpB
	var_612_bool = 1; // 0x1c36 MovB
	return 0; // 0x1c37 Return
	
Label_7224:
	var_612_bool = 0; // 0x1c38 MovB
	return 0; // 0x1c39 Return
}


func_7714(var_110_object, var_111_string, var_112_float)
{
	var_114_cvector = CVector(0,0,0); var_115_cvector = CVector(0,0,0); var_116_object = Obj(); var_117_bool = 0; var_118_cvector = CVector(0,0,0); var_119_cvector = CVector(0,0,0); var_120_object = Obj(); var_121_bool = 0; // 0x1e22 PushV
	GetMainOutdoorScene(var_120_object); // 0x1e23 Func
	var_122_bool = var_120_object == 0; // 0x1e25 NullEq
	if(var_122_bool == 0) goto Label_7723; // 0x1e26 JumpB
	var_123_string = "Can't find main outdoor scene"; // 0x1e27 PushS
	Trace(var_123_string); // 0x1e28 Func
	return 8; // 0x1e2a Return
	
Label_7723:
	GetLocator(var_111_string, var_121_bool, var_118_cvector, var_119_cvector); // 0x1e2b ObjFunc
	var_124_bool = var_121_bool == 0; // 0x1e2d Not
	if(var_124_bool == 0) goto Label_7733; // 0x1e2e JumpB
	var_125_string = "Warning: outdoor scene locator "; // 0x1e2f PushS
	var_126_int = var_125_string + var_111_string; // 0x1e30 Add
	var_127_string = " doesnt exist"; // 0x1e31 PushS
	var_128_int = var_126_int + var_127_string; // 0x1e32 Add
	Trace(var_128_int); // 0x1e33 Func
	
Label_7733:
	GetMap(var_110_object); // 0x1e35 ObjFunc
	var_129_bool = var_110_object == 0; // 0x1e37 NullEq
	if(var_129_bool == 0) goto Label_7741; // 0x1e38 JumpB
	var_130_string = "Can't find map"; // 0x1e39 PushS
	Trace(var_130_string); // 0x1e3a Func
	return 8; // 0x1e3c Return
	
Label_7741:
	var_131_float = GetByIndex(var_118_cvector, 0); // 0x1e3d PushE
	var_132_float = GetByIndex(var_118_cvector, 2); // 0x1e3e PushE
	SetMapParams(var_131_float, var_132_float, var_112_float); // 0x1e3f ObjFunc
	return 8; // 0x1e41 Return
}


func_6691(var_257_bool, var_258_string, var_259_string)
{
	var_260_object = Obj(); var_261_object = Obj(); // 0x1a23 PushV
	FindActor(var_261_object, var_258_string); // 0x1a24 Func
	var_262_bool = var_261_object == 0; // 0x1a26 NullEq
	if(var_262_bool == 0) goto Label_6698; // 0x1a27 JumpB
	var_257_bool = 0; // 0x1a28 MovB
	return 2; // 0x1a29 Return
	
Label_6698:
	Trigger(var_261_object, var_259_string); // 0x1a2a Func
	var_257_bool = 1; // 0x1a2c MovB
	return 2; // 0x1a2d Return
}


func_6703(var_69_float)
{
	var_70_float = 0; var_71_float = 0; // 0x1a2f PushV
	GetGameTime(var_71_float); // 0x1a30 Func
	var_69_float = var_71_float; // 0x1a32 Mov
	return 2; // 0x1a33 Return
}


func_6708(var_67_int)
{
	var_68_float = 0; var_69_float = 0; // 0x1a34 PushV
	GetGameTime(var_69_float); // 0x1a35 Func
	var_70_int = 1; // 0x1a37 PushI
	var_71_int = 0; // 0x1a38 PushV
	var_72_int = 24; // 0x1a39 PushI
	var_71_int = var_69_float / var_69_float; // 0x1a3a Div2
	var_67_int = var_70_int + var_71_int; // 0x1a3b Add2
	return 2; // 0x1a3c Return
}


func_7226(var_435_bool)
{
	var_437_int = 0; var_438_string = ""; // 0x1c3b PushV
	var_438_string = "ood2Georg1"; // 0x1c3c MovS
	func_6644(var_437_int, var_438_string); // 0x1c3d NEW_2
	var_439_int = 0; // 0x1c3f PushI
	var_440_bool = var_437_int == var_439_int; // 0x1c40 Eq
	if(var_440_bool == 0) goto Label_7236; // 0x1c41 JumpB
	var_435_bool = 1; // 0x1c42 MovB
	return 0; // 0x1c43 Return
	
Label_7236:
	var_435_bool = 0; // 0x1c44 MovB
	return 0; // 0x1c45 Return
}


func_6717(var_65_bool, var_66_int)
{
	var_67_int = 0; // 0x1a3e PushV
	func_6708(var_67_int); // 0x1a3f NEW_2
	var_65_bool = var_67_int == var_66_int; // 0x1a41 Eq2
	return 0; // 0x1a42 Return
}


func_7747(var_135_int)
{
	var_136_int = 0; var_137_int = 0; // 0x1e43 PushV
	var_138_string = "branch"; // 0x1e44 PushS
	GetVariable(var_138_string, var_137_int); // 0x1e45 Func
	var_139_int = 0; // 0x1e47 PushI
	var_140_bool = var_137_int == var_139_int; // 0x1e48 Eq
	if(var_140_bool == 0) goto Label_7757; // 0x1e49 JumpB
	var_135_int = 1; // 0x1e4a MovI
	return 2; // 0x1e4b Return
	
Label_7757:
	var_141_int = 1; // 0x1e4d PushI
	var_142_bool = var_137_int == var_141_int; // 0x1e4e Eq
	if(var_142_bool == 0) goto Label_7762; // 0x1e4f JumpB
	var_135_int = 2; // 0x1e50 MovI
	return 2; // 0x1e51 Return
	
Label_7762:
	var_135_int = 3; // 0x1e52 MovI
	return 2; // 0x1e53 Return
}


func_6723(var_71_string, var_72_int)
{
	var_73_string = ""; var_74_string = ""; // 0x1a43 PushV
	var_74_string = "idle"; // 0x1a44 MovS
	var_75_int = var_72_int; // 0x1a45 Push
	if(var_75_int == 0) goto Label_6728; // 0x1a46 JumpB
	var_74_string = var_74_string + var_72_int; // 0x1a47 Add2
	
Label_6728:
	var_71_string = var_74_string; // 0x1a48 Mov
	return 2; // 0x1a49 Return
}


func_7238(var_479_bool)
{
	var_481_int = 0; var_482_string = ""; // 0x1c47 PushV
	var_482_string = "ood2Georg2"; // 0x1c48 MovS
	func_6644(var_481_int, var_482_string); // 0x1c49 NEW_2
	var_483_int = 0; // 0x1c4b PushI
	var_484_bool = var_481_int == var_483_int; // 0x1c4c Eq
	if(var_484_bool == 0) goto Label_7248; // 0x1c4d JumpB
	var_479_bool = 1; // 0x1c4e MovB
	return 0; // 0x1c4f Return
	
Label_7248:
	var_479_bool = 0; // 0x1c50 MovB
	return 0; // 0x1c51 Return
}


func_585(var_2_object, var_1006_string)
{
	var_1007_bool = 0; // 0x24a PushV
	func_6755(var_1007_bool); // 0x24b NEW_2
	var_1008_bool = var_1007_bool == 0; // 0x24d Not
	if(var_1008_bool == 0) goto Label_592; // 0x24e JumpB
	return 0; // 0x24f Return
	
Label_592:
	var_1009_bool = var_1006_string == var_2_object; // 0x250 Eq
	if(var_1009_bool == 0) goto Label_595; // 0x251 JumpB
	return 0; // 0x252 Return
	
Label_595:
	var_1010_string = ""; var_1011_bool = 0; // 0x253 PushV
	var_1010_string = var_1006_string; // 0x254 Mov
	var_1012_string = ""; // 0x255 PushS
	var_1013_bool = var_1006_string == var_1012_string; // 0x256 Eq
	if(var_1013_bool == 0) goto Label_602; // 0x257 JumpB
	var_1011_bool = 0; // 0x258 MovB
	goto Label_603; // 0x259 Jump
	
Label_603:
	func_6591(var_1010_string, var_1011_bool); // 0x25b NEW_2
	var_2_object = var_1006_string; // 0x25d TMov
	return 0; // 0x25e Return
	
Label_602:
	var_1011_bool = 1; // 0x25a MovB
}


func_6730(var_65_int)
{
	var_66_int = 0; var_67_bool = 0; var_68_int = 0; var_69_bool = 0; // 0x1a4a PushV
	var_68_int = 0; // 0x1a4b MovI
	
Label_6732:
	var_70_string = "all"; // 0x1a4c PushS
	var_71_string = ""; var_72_int = 0; // 0x1a4d PushV
	var_72_int = var_68_int; // 0x1a4e Mov
	func_6723(var_71_string, var_72_int); // 0x1a4f NEW_2
	HasAnimation(var_69_bool, var_70_string, var_71_string); // 0x1a51 Func
	var_76_bool = var_69_bool == 0; // 0x1a53 Not
	if(var_76_bool == 0) goto Label_6742; // 0x1a54 JumpB
	goto Label_6745; // 0x1a55 Jump
	
Label_6745:
	var_65_int = var_68_int; // 0x1a59 Mov
	return 4; // 0x1a5a Return
	
Label_6742:
	var_77_int = 1; // 0x1a56 PushI
	var_68_int = var_68_int + var_77_int; // 0x1a57 Add2
	goto Label_6732; // 0x1a58 Jump
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_935_object, var_936_object)
{
	var_0_object = var_936_object; // 0x52 TMov
	var_1_object = var_935_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_941_int = 1; // 0x55 PushI
	if(var_941_int == 0) goto Label_114; // 0x56 JumpB
	var_942_string = ""; // 0x57 PushV
	var_942_string = "Neutral"; // 0x58 MovS
	func_144(var_936_object, var_942_string); // 0x59 NEW_2
	var_950_int = 534109; // 0x5b PushI
	SetMessage(var_950_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_951_bool = 0; var_952_object = Obj(); // 0x60 PushV
	var_952_object = var_1_object; // 0x61 MovT
	func_7165(var_952_object); // 0x62 NEW_2
	if(var_951_bool == 0) goto Label_106; // 0x64 JumpB
	var_957_int = 534110; // 0x65 PushI
	var_958_int = 38263; // 0x66 PushI
	var_959_int = 35703; // 0x67 PushI
	AddReply(var_957_int, var_958_int, var_959_int); // 0x68 TObjFunc
	
Label_106:
	var_960_int = 534111; // 0x6a PushI
	var_961_int = -1; // 0x6b PushI
	var_962_int = 35704; // 0x6c PushI
	AddReply(var_960_int, var_961_int, var_962_int); // 0x6d TObjFunc
	goto Label_114; // 0x6f Jump
	
Label_114:
	var_963_bool = 0; // 0x72 PushV
	func_6755(var_963_bool); // 0x73 NEW_2
	if(var_963_bool == 0) goto Label_129; // 0x75 JumpB
	
Label_118:
	lshWaitForAnimEnd(); // 0x76 Func
	var_964_string = var_3_string; // 0x78 PushT
	if(var_964_string == 0) goto Label_123; // 0x79 JumpB
	goto Label_128; // 0x7a Jump
	
Label_128:
	goto Label_143; // 0x80 Jump
	
Label_143:
	return 0; // 0x8f Return
	
Label_123:
	var_965_string = ""; // 0x7b PushV
	var_965_string = var_2_object; // 0x7c MovT
	func_6575(var_965_string); // 0x7d NEW_2
	goto Label_118; // 0x7f Jump
	
Label_129:
	var_966_string = "all"; // 0x81 PushS
	var_967_string = "idle"; // 0x82 PushS
	PlayAnimation(var_966_string, var_967_string); // 0x83 Func
	
Label_133:
	WaitForAnimEnd(); // 0x85 Func
	var_968_string = var_3_string; // 0x87 PushT
	if(var_968_string == 0) goto Label_138; // 0x88 JumpB
	goto Label_143; // 0x89 Jump
	
Label_138:
	var_969_string = "all"; // 0x8a PushS
	var_970_string = "idle"; // 0x8b PushS
	PlayAnimation(var_969_string, var_970_string); // 0x8c Func
	goto Label_133; // 0x8e Jump
}


func_7250(var_485_bool)
{
	var_487_int = 0; var_488_string = ""; // 0x1c53 PushV
	var_488_string = "d2q01"; // 0x1c54 MovS
	func_6644(var_487_int, var_488_string); // 0x1c55 NEW_2
	var_489_int = 0; // 0x1c57 PushI
	var_490_bool = var_487_int == var_489_int; // 0x1c58 Eq
	if(var_490_bool == 0) goto Label_7260; // 0x1c59 JumpB
	var_485_bool = 1; // 0x1c5a MovB
	return 0; // 0x1c5b Return
	
Label_7260:
	var_485_bool = 0; // 0x1c5c MovB
	return 0; // 0x1c5d Return
}


func_7764(var_64_object)
{
	var_65_bool = 0; var_66_int = 0; // 0x1e55 PushV
	var_66_int = 1; // 0x1e56 MovI
	func_6717(var_65_bool, var_66_int); // 0x1e57 NEW_2
	if(var_65_bool == 0) goto Label_7777; // 0x1e59 JumpB
	var_73_int = 0; var_74_object = Obj(); // 0x1e5a PushV
	var_74_object = var_64_object; // 0x1e5b Mov
	TaskCall(6); // 0x1e5c TaskCall
	func_1263(var_75_object, var_73_int, var_74_object); // 0x1e5d NEW_2
	TaskReturn(); // 0x1e5e TaskReturn
	return 0; // 0x1e60 Return
	
Label_7777:
	var_401_bool = 0; var_402_int = 0; // 0x1e61 PushV
	var_402_int = 2; // 0x1e62 MovI
	func_6717(var_401_bool, var_402_int); // 0x1e63 NEW_2
	if(var_401_bool == 0) goto Label_7789; // 0x1e65 JumpB
	var_403_int = 0; var_404_object = Obj(); // 0x1e66 PushV
	var_404_object = var_64_object; // 0x1e67 Mov
	TaskCall(8); // 0x1e68 TaskCall
	func_3191(var_405_object, var_403_int, var_404_object); // 0x1e69 NEW_2
	TaskReturn(); // 0x1e6a TaskReturn
	return 0; // 0x1e6c Return
	
Label_7789:
	var_502_bool = 0; var_503_int = 0; // 0x1e6d PushV
	var_503_int = 3; // 0x1e6e MovI
	func_6717(var_502_bool, var_503_int); // 0x1e6f NEW_2
	if(var_502_bool == 0) goto Label_7801; // 0x1e71 JumpB
	var_504_int = 0; var_505_object = Obj(); // 0x1e72 PushV
	var_505_object = var_64_object; // 0x1e73 Mov
	TaskCall(10); // 0x1e74 TaskCall
	func_3856(var_506_object, var_504_int, var_505_object); // 0x1e75 NEW_2
	TaskReturn(); // 0x1e76 TaskReturn
	return 0; // 0x1e78 Return
	
Label_7801:
	var_651_bool = 0; var_652_int = 0; // 0x1e79 PushV
	var_652_int = 5; // 0x1e7a MovI
	func_6717(var_651_bool, var_652_int); // 0x1e7b NEW_2
	if(var_651_bool == 0) goto Label_7813; // 0x1e7d JumpB
	var_653_int = 0; var_654_object = Obj(); // 0x1e7e PushV
	var_654_object = var_64_object; // 0x1e7f Mov
	TaskCall(12); // 0x1e80 TaskCall
	func_4901(var_655_object, var_653_int, var_654_object); // 0x1e81 NEW_2
	TaskReturn(); // 0x1e82 TaskReturn
	return 0; // 0x1e84 Return
	
Label_7813:
	var_722_bool = 0; var_723_int = 0; // 0x1e85 PushV
	var_723_int = 6; // 0x1e86 MovI
	func_6717(var_722_bool, var_723_int); // 0x1e87 NEW_2
	if(var_722_bool == 0) goto Label_7825; // 0x1e89 JumpB
	var_724_int = 0; var_725_object = Obj(); // 0x1e8a PushV
	var_725_object = var_64_object; // 0x1e8b Mov
	TaskCall(4); // 0x1e8c TaskCall
	func_764(var_726_object, var_724_int, var_725_object); // 0x1e8d NEW_2
	TaskReturn(); // 0x1e8e TaskReturn
	return 0; // 0x1e90 Return
	
Label_7825:
	var_826_bool = 0; var_827_int = 0; // 0x1e91 PushV
	var_827_int = 8; // 0x1e92 MovI
	func_6717(var_826_bool, var_827_int); // 0x1e93 NEW_2
	if(var_826_bool == 0) goto Label_7837; // 0x1e95 JumpB
	var_828_int = 0; var_829_object = Obj(); // 0x1e96 PushV
	var_829_object = var_64_object; // 0x1e97 Mov
	TaskCall(14); // 0x1e98 TaskCall
	func_5372(var_830_object, var_828_int, var_829_object); // 0x1e99 NEW_2
	TaskReturn(); // 0x1e9a TaskReturn
	return 0; // 0x1e9c Return
	
Label_7837:
	var_909_bool = 0; var_910_int = 0; // 0x1e9d PushV
	var_910_int = 10; // 0x1e9e MovI
	func_6717(var_909_bool, var_910_int); // 0x1e9f NEW_2
	if(var_909_bool == 0) goto Label_7849; // 0x1ea1 JumpB
	var_911_int = 0; var_912_object = Obj(); // 0x1ea2 PushV
	var_912_object = var_64_object; // 0x1ea3 Mov
	TaskCall(0); // 0x1ea4 TaskCall
	func_0(var_913_object, var_911_int, var_912_object); // 0x1ea5 NEW_2
	TaskReturn(); // 0x1ea6 TaskReturn
	return 0; // 0x1ea8 Return
	
Label_7849:
	var_973_bool = 0; var_974_int = 0; // 0x1ea9 PushV
	var_974_int = 12; // 0x1eaa MovI
	func_6717(var_973_bool, var_974_int); // 0x1eab NEW_2
	if(var_973_bool == 0) goto Label_7861; // 0x1ead JumpB
	var_975_int = 0; var_976_object = Obj(); // 0x1eae PushV
	var_976_object = var_64_object; // 0x1eaf Mov
	TaskCall(2); // 0x1eb0 TaskCall
	func_441(var_977_object, var_975_int, var_976_object); // 0x1eb1 NEW_2
	TaskReturn(); // 0x1eb2 TaskReturn
	return 0; // 0x1eb4 Return
	
Label_7861:
	var_1034_int = 0; var_1035_object = Obj(); // 0x1eb5 PushV
	var_1035_object = var_64_object; // 0x1eb6 Mov
	TaskCall(16); // 0x1eb7 TaskCall
	func_5851(var_1036_object, var_1034_int, var_1035_object); // 0x1eb8 NEW_2
	TaskReturn(); // 0x1eb9 TaskReturn
	return 0; // 0x1ebb Return
}


func_6747(var_132_int)
{
	var_132_int = 515534; // 0x1a5b MovI
	return 0; // 0x1a5c Return
}


func_6749(var_131_int)
{
	var_131_int = 502859; // 0x1a5d MovI
	return 0; // 0x1a5e Return
}


func_7262(var_441_bool)
{
	var_443_int = 0; var_444_string = ""; // 0x1c5f PushV
	var_444_string = "d2q01"; // 0x1c60 MovS
	func_6644(var_443_int, var_444_string); // 0x1c61 NEW_2
	var_445_int = 6; // 0x1c63 PushI
	var_446_bool = var_443_int == var_445_int; // 0x1c64 Eq
	if(var_446_bool == 0) goto Label_7272; // 0x1c65 JumpB
	var_441_bool = 1; // 0x1c66 MovB
	return 0; // 0x1c67 Return
	
Label_7272:
	var_441_bool = 0; // 0x1c68 MovB
	return 0; // 0x1c69 Return
}


func_6751(var_133_string)
{
	var_133_string = "ui/NPC_Georg.png"; // 0x1a5f MovS
	return 0; // 0x1a60 Return
}


func_6237()
{
	var_51_int = 0; var_52_int = 0; var_53_bool = 0; var_54_int = 0; var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_int = 0; var_59_bool = 0; var_60_int = 0; var_61_int = 0; var_62_bool = 0; // 0x185d PushV
	WaitForAnimEnd(); // 0x185e Func
	var_63_bool = 0; // 0x1860 PushV
	func_6347(var_63_bool); // 0x1861 NEW_2
	var_64_bool = var_63_bool == 0; // 0x1863 Not
	if(var_64_bool == 0) goto Label_6246; // 0x1864 JumpB
	return 12; // 0x1865 Return
	
Label_6246:
	var_65_int = 0; // 0x1866 PushV
	func_6730(var_65_int); // 0x1867 NEW_2
	var_57_int = var_65_int; // 0x1868 Mov
	var_58_int = 0; // 0x186a MovI
	
Label_6251:
	var_78_bool = 0; // 0x186b PushV
	var_78_bool = 0; // 0x186c MovB
	var_79_int = 5; // 0x186d PushI
	var_80_bool = var_58_int < var_79_int; // 0x186e LT
	if(var_80_bool == 0) goto Label_6261; // 0x186f JumpB
	var_81_bool = 0; // 0x1870 PushV
	func_6347(var_81_bool); // 0x1871 NEW_2
	if(var_81_bool == 0) goto Label_6261; // 0x1873 JumpB
	var_78_bool = 1; // 0x1874 MovB
	
Label_6261:
	if(var_78_bool == 0) goto Label_6303; // 0x1875 JumpB
	var_82_bool = var_57_int == 0; // 0x1876 Not
	if(var_82_bool == 0) goto Label_6271; // 0x1877 JumpB
	var_83_int = 3; // 0x1878 PushI
	Sleep(var_83_int, var_59_bool); // 0x1879 Func
	var_84_bool = var_59_bool == 0; // 0x187b Not
	if(var_84_bool == 0) goto Label_6270; // 0x187c JumpB
	goto Label_6303; // 0x187d Jump
	
Label_6303:
	ResetAAS(); // 0x189f Func
	return 12; // 0x18a1 Return
	
Label_6270:
	goto Label_6292; // 0x187e Jump
	
Label_6292:
	var_85_bool = 0; // 0x1894 PushV
	func_6306(var_85_bool); // 0x1895 NEW_2
	var_86_bool = var_85_bool == 0; // 0x1897 Not
	if(var_86_bool == 0) goto Label_6298; // 0x1898 JumpB
	goto Label_6303; // 0x1899 Jump
	
Label_6298:
	ResetAAS(); // 0x189a Func
	var_87_int = 1; // 0x189c PushI
	var_58_int = var_58_int + var_87_int; // 0x189d Add2
	goto Label_6251; // 0x189e Jump
	
Label_6271:
	irand(var_60_int, var_57_int); // 0x187f Func
	var_88_int = 5; // 0x1881 PushI
	irand(var_61_int, var_88_int); // 0x1882 Func
	var_89_int = 0; // 0x1884 PushI
	var_90_bool = var_61_int != var_89_int; // 0x1885 Neq
	if(var_90_bool == 0) goto Label_6280; // 0x1886 JumpB
	var_60_int = 0; // 0x1887 MovI
	
Label_6280:
	var_91_string = "all"; // 0x1888 PushS
	var_92_string = ""; var_93_int = 0; // 0x1889 PushV
	var_93_int = var_60_int; // 0x188a Mov
	func_6723(var_92_string, var_93_int); // 0x188b NEW_2
	PlayAnimation(var_91_string, var_92_string); // 0x188d Func
	WaitForAnimEnd(var_62_bool); // 0x188f Func
	var_94_bool = var_62_bool == 0; // 0x1891 Not
	if(var_94_bool == 0) goto Label_6292; // 0x1892 JumpB
	goto Label_6303; // 0x1893 Jump
}


func_6753(var_134_string)
{
	var_134_string = "ui/NPC_Georg_b.png"; // 0x1a61 MovS
	return 0; // 0x1a62 Return
}


func_6755(var_126_bool)
{
	var_126_bool = 1; // 0x1a63 MovB
	return 0; // 0x1a64 Return
}


func_6757(var_209_object)
{
	var_211_string = "money 4000 is given"; // 0x1a66 PushS
	Trace(var_211_string); // 0x1a67 Func
	var_212_object = Obj(); var_213_int = 0; // 0x1a69 PushV
	var_212_object = var_209_object; // 0x1a6a Mov
	var_213_int = 4000; // 0x1a6b MovI
	func_6672(var_212_object, var_213_int); // 0x1a6c NEW_2
	return 0; // 0x1a6e Return
}


func_7274(var_403_bool)
{
	var_405_int = 0; var_406_string = ""; // 0x1c6b PushV
	var_406_string = "KnowBurahDead"; // 0x1c6c MovS
	func_6644(var_405_int, var_406_string); // 0x1c6d NEW_2
	var_407_int = 1; // 0x1c6f PushI
	var_408_bool = var_405_int == var_407_int; // 0x1c70 Eq
	if(var_408_bool == 0) goto Label_7284; // 0x1c71 JumpB
	var_403_bool = 1; // 0x1c72 MovB
	return 0; // 0x1c73 Return
	
Label_7284:
	var_403_bool = 0; // 0x1c74 MovB
	return 0; // 0x1c75 Return
}


func_6767()
{
	var_97_object = Obj(); var_98_string = ""; var_99_float = 0; // 0x1a70 PushV
	var_100_object = Obj(); // 0x1a71 PushV
	func_7697(var_100_object); // 0x1a72 NEW_2
	var_97_object = var_100_object; // 0x1a73 Mov
	var_98_string = "pt_map_aglaja"; // 0x1a75 MovS
	var_99_float = 2; // 0x1a76 MovI
	func_7714(var_97_object, var_98_string, var_99_float); // 0x1a77 NEW_2
	var_120_object = Obj(); // 0x1a79 PushV
	func_7697(var_120_object); // 0x1a7a NEW_2
	ShowMap(var_120_object); // 0x1a7c ObjFunc
	return 0; // 0x1a7e Return
}


func_7286(var_359_bool)
{
	var_361_int = 0; var_362_string = ""; // 0x1c77 PushV
	var_362_string = "ood1Georg4"; // 0x1c78 MovS
	func_6644(var_361_int, var_362_string); // 0x1c79 NEW_2
	var_363_int = 0; // 0x1c7b PushI
	var_364_bool = var_361_int == var_363_int; // 0x1c7c Eq
	if(var_364_bool == 0) goto Label_7296; // 0x1c7d JumpB
	var_359_bool = 1; // 0x1c7e MovB
	return 0; // 0x1c7f Return
	
Label_7296:
	var_359_bool = 0; // 0x1c80 MovB
	return 0; // 0x1c81 Return
}


func_3191(var_0_object, var_403_int, var_404_object)
{
	var_406_object = Obj(); var_407_bool = 0; var_408_int = 0; var_409_bool = 0; var_410_object = Obj(); var_411_bool = 0; var_412_int = 0; var_413_bool = 0; // 0xc77 PushV
	var_0_object = var_404_object; // 0xc78 TMov
	var_414_bool = 0; var_415_object = Obj(); var_416_float = 0; // 0xc79 PushV
	var_415_object = var_404_object; // 0xc7a Mov
	var_416_float = 70.0; // 0xc7b MovF
	func_6352(var_415_object, var_416_float); // 0xc7c NEW_2
	var_417_bool = var_414_bool == 0; // 0xc7e Not
	if(var_417_bool == 0) goto Label_3202; // 0xc7f JumpB
	var_403_int = -2; // 0xc80 MovI
	return 8; // 0xc81 Return
	
Label_3202:
	CreateDialog(var_410_object); // 0xc82 Func
	var_418_int = 0; // 0xc84 PushV
	func_6749(var_418_int); // 0xc85 NEW_2
	SetNPCName(var_418_int); // 0xc87 ObjFunc
	var_419_int = 0; // 0xc89 PushV
	func_6747(var_419_int); // 0xc8a NEW_2
	SetNPCDescription(var_419_int); // 0xc8c ObjFunc
	var_420_string = ""; // 0xc8e PushV
	func_6751(var_420_string); // 0xc8f NEW_2
	SetPhoto(var_420_string); // 0xc91 ObjFunc
	var_421_string = ""; // 0xc93 PushV
	func_6753(var_421_string); // 0xc94 NEW_2
	SetPhoto2(var_421_string); // 0xc96 ObjFunc
	var_422_int = 0; // 0xc98 PushV
	func_7747(var_422_int); // 0xc99 NEW_2
	SetPlayerName(var_422_int); // 0xc9b ObjFunc
	var_412_int = -1; // 0xc9d MovI
	IsOverrideActive(var_411_bool); // 0xc9e Func
	var_423_bool = var_411_bool; // 0xca0 Push
	if(var_423_bool == 0) goto Label_3236; // 0xca1 JumpB
	var_403_int = -2; // 0xca2 MovI
	return 8; // 0xca3 Return
	
Label_3236:
	DoDialog(var_410_object); // 0xca4 Func
	var_424_bool = 0; var_425_object = Obj(); // 0xca6 PushV
	var_426_object = Obj(); // 0xca7 PushV
	func_6628(var_426_object); // 0xca8 NEW_2
	var_425_object = var_426_object; // 0xca9 Mov
	func_6437(var_424_bool, var_425_object); // 0xcab NEW_2
	var_427_object = Obj(); var_428_object = Obj(); // 0xcad PushV
	var_427_object = var_404_object; // 0xcae Mov
	var_428_object = var_410_object; // 0xcaf Mov
	TaskCall(9); // 0xcb0 TaskCall
	func_3272(var_429_object, var_430_object, var_431_string, var_432_bool, var_427_object, var_428_object); // 0xcb1 NEW_2
	TaskReturn(); // 0xcb2 TaskReturn
	IsDialogEnd(var_413_bool); // 0xcb4 ObjFunc
	
Label_3254:
	var_500_bool = var_413_bool == 0; // 0xcb6 Not
	if(var_500_bool == 0) goto Label_3261; // 0xcb7 JumpB
	sync(); // 0xcb8 Func
	IsDialogEnd(var_413_bool); // 0xcba ObjFunc
	goto Label_3254; // 0xcbc Jump
	
Label_3261:
	var_501_object = Obj(); // 0xcbd PushV
	var_501_object = var_404_object; // 0xcbe Mov
	func_6420(); // 0xcbf NEW_2
	StopDialog(var_410_object); // 0xcc1 Func
	GetReturnValue(var_412_int); // 0xcc3 ObjFunc
	var_403_int = var_412_int; // 0xcc5 Mov
	return 8; // 0xcc6 Return
}


func_6783()
{
	var_54_object = Obj(); var_55_object = Obj(); // 0x1a7f PushV
	var_56_string = "d1q01"; // 0x1a80 PushS
	var_57_int = 1; // 0x1a81 PushI
	SetVariable(var_56_string, var_57_int); // 0x1a82 Func
	var_58_object = Obj(); // 0x1a84 PushV
	func_7697(var_58_object); // 0x1a85 NEW_2
	var_55_object = var_58_object; // 0x1a86 Mov
	var_65_string = "d1GeorgInfo"; // 0x1a88 PushS
	var_66_string = "pt_map_georg"; // 0x1a89 PushS
	var_67_int = 3; // 0x1a8a PushI
	var_68_int = 508631; // 0x1a8b PushI
	var_69_float = 0; // 0x1a8c PushV
	func_6703(var_69_float); // 0x1a8d NEW_2
	AddMark(var_65_string, var_66_string, var_67_int, var_68_int, var_69_float); // 0x1a8f ObjFunc
	var_72_string = "d1q01GeorgGotoViktor"; // 0x1a91 PushS
	var_73_string = "pt_map_viktor"; // 0x1a92 PushS
	var_74_int = 1; // 0x1a93 PushI
	var_75_int = 508629; // 0x1a94 PushI
	var_76_float = 0; // 0x1a95 PushV
	func_6703(var_76_float); // 0x1a96 NEW_2
	AddMark(var_72_string, var_73_string, var_74_int, var_75_int, var_76_float); // 0x1a98 ObjFunc
	func_7539(); // 0x1a9b NEW_2
	func_7565(); // 0x1a9e NEW_2
	return 2; // 0x1aa0 Return
}


func_7298(var_381_bool)
{
	var_383_int = 0; var_384_string = ""; // 0x1c83 PushV
	var_384_string = "d1q01"; // 0x1c84 MovS
	func_6644(var_383_int, var_384_string); // 0x1c85 NEW_2
	var_385_int = 1; // 0x1c87 PushI
	var_386_bool = var_383_int == var_385_int; // 0x1c88 Eq
	if(var_386_bool == 0) goto Label_7308; // 0x1c89 JumpB
	var_381_bool = 1; // 0x1c8a MovB
	return 0; // 0x1c8b Return
	
Label_7308:
	var_381_bool = 0; // 0x1c8c MovB
	return 0; // 0x1c8d Return
}


func_7310(var_241_bool)
{
	var_243_int = 0; var_244_string = ""; // 0x1c8f PushV
	var_244_string = "ood1Georg1"; // 0x1c90 MovS
	func_6644(var_243_int, var_244_string); // 0x1c91 NEW_2
	var_247_int = 0; // 0x1c93 PushI
	var_248_bool = var_243_int == var_247_int; // 0x1c94 Eq
	if(var_248_bool == 0) goto Label_7320; // 0x1c95 JumpB
	var_241_bool = 1; // 0x1c96 MovB
	return 0; // 0x1c97 Return
	
Label_7320:
	var_241_bool = 0; // 0x1c98 MovB
	return 0; // 0x1c99 Return
}


func_144(var_2_object, var_942_string)
{
	var_943_bool = 0; // 0x91 PushV
	func_6755(var_943_bool); // 0x92 NEW_2
	var_944_bool = var_943_bool == 0; // 0x94 Not
	if(var_944_bool == 0) goto Label_151; // 0x95 JumpB
	return 0; // 0x96 Return
	
Label_151:
	var_945_bool = var_942_string == var_2_object; // 0x97 Eq
	if(var_945_bool == 0) goto Label_154; // 0x98 JumpB
	return 0; // 0x99 Return
	
Label_154:
	var_946_string = ""; var_947_bool = 0; // 0x9a PushV
	var_946_string = var_942_string; // 0x9b Mov
	var_948_string = ""; // 0x9c PushS
	var_949_bool = var_942_string == var_948_string; // 0x9d Eq
	if(var_949_bool == 0) goto Label_161; // 0x9e JumpB
	var_947_bool = 0; // 0x9f MovB
	goto Label_162; // 0xa0 Jump
	
Label_162:
	func_6591(var_946_string, var_947_bool); // 0xa2 NEW_2
	var_2_object = var_942_string; // 0xa4 TMov
	return 0; // 0xa5 Return
	
Label_161:
	var_947_bool = 1; // 0xa1 MovB
}


func_7322(var_338_bool)
{
	var_340_int = 0; var_341_string = ""; // 0x1c9b PushV
	var_341_string = "ood1Georg3"; // 0x1c9c MovS
	func_6644(var_340_int, var_341_string); // 0x1c9d NEW_2
	var_342_int = 0; // 0x1c9f PushI
	var_343_bool = var_340_int == var_342_int; // 0x1ca0 Eq
	if(var_343_bool == 0) goto Label_7332; // 0x1ca1 JumpB
	var_338_bool = 1; // 0x1ca2 MovB
	return 0; // 0x1ca3 Return
	
Label_7332:
	var_338_bool = 0; // 0x1ca4 MovB
	return 0; // 0x1ca5 Return
}


func_6818()
{
	func_7552(); // 0x1aa4 NEW_2
	var_158_bool = 0; var_159_string = ""; var_160_string = ""; // 0x1aa6 PushV
	var_159_string = "quest_d1_01"; // 0x1aa7 MovS
	var_160_string = "completed"; // 0x1aa8 MovS
	func_6691(var_158_bool, var_159_string, var_160_string); // 0x1aa9 NEW_2
	return 0; // 0x1aab Return
}


func_6306(var_85_bool)
{
	var_85_bool = 1; // 0x18a2 MovB
	return 0; // 0x18a3 Return
}


func_6308()
{
	StopAnimation(); // 0x18a4 Func
	StopGroup0(); // 0x18a6 Func
	return 0; // 0x18a8 Return
}


func_7334(var_583_bool)
{
	var_585_int = 0; var_586_string = ""; // 0x1ca7 PushV
	var_586_string = "ood3Georg1"; // 0x1ca8 MovS
	func_6644(var_585_int, var_586_string); // 0x1ca9 NEW_2
	var_587_int = 0; // 0x1cab PushI
	var_588_bool = var_585_int == var_587_int; // 0x1cac Eq
	if(var_588_bool == 0) goto Label_7344; // 0x1cad JumpB
	var_583_bool = 1; // 0x1cae MovB
	return 0; // 0x1caf Return
	
Label_7344:
	var_583_bool = 0; // 0x1cb0 MovB
	return 0; // 0x1cb1 Return
}


func_6313(var_61_float)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); // 0x18a9 PushV
	GetPosition(var_66_cvector); // 0x18aa Func
	GetPosition(var_67_cvector); // 0x18ac ObjFunc
	var_68_cvector = var_67_cvector - var_66_cvector; // 0x18ae Sub2
	var_61_float = var_68_cvector | var_68_cvector; // 0x18af Or2
	return 6; // 0x18b0 Return
}


func_6828()
{
	var_172_string = "d1q01TeloNedostupno"; // 0x1aad PushS
	var_173_int = 1; // 0x1aae PushI
	SetVariable(var_172_string, var_173_int); // 0x1aaf Func
	return 0; // 0x1ab1 Return
}


func_6321(var_125_string, var_126_int)
{
	var_127_int = 0; var_128_int = 0; // 0x18b1 PushV
	GetProperty(var_125_string, var_128_int); // 0x18b2 ObjFunc
	var_129_int = var_128_int + var_126_int; // 0x18b4 Add
	SetProperty(var_125_string, var_129_int); // 0x18b5 ObjFunc
	return 2; // 0x18b7 Return
}


func_6834()
{
	var_255_string = "d1q01FirstGeorgVisit"; // 0x1ab3 PushS
	var_256_int = 1; // 0x1ab4 PushI
	SetVariable(var_255_string, var_256_int); // 0x1ab5 Func
	var_257_bool = 0; var_258_string = ""; var_259_string = ""; // 0x1ab7 PushV
	var_258_string = "quest_d1_01"; // 0x1ab8 MovS
	var_259_string = "remove_cutscene"; // 0x1ab9 MovS
	func_6691(var_257_bool, var_258_string, var_259_string); // 0x1aba NEW_2
	var_263_bool = 0; var_264_string = ""; var_265_string = ""; // 0x1abc PushV
	var_264_string = "quest_d1_01"; // 0x1abd MovS
	var_265_string = "unlock_doors"; // 0x1abe MovS
	func_6691(var_263_bool, var_264_string, var_265_string); // 0x1abf NEW_2
	return 0; // 0x1ac1 Return
}


func_7346(var_535_bool)
{
	var_537_int = 0; var_538_string = ""; // 0x1cb3 PushV
	var_538_string = "ood3Georg2"; // 0x1cb4 MovS
	func_6644(var_537_int, var_538_string); // 0x1cb5 NEW_2
	var_539_int = 0; // 0x1cb7 PushI
	var_540_bool = var_537_int == var_539_int; // 0x1cb8 Eq
	if(var_540_bool == 0) goto Label_7356; // 0x1cb9 JumpB
	var_535_bool = 1; // 0x1cba MovB
	return 0; // 0x1cbb Return
	
Label_7356:
	var_535_bool = 0; // 0x1cbc MovB
	return 0; // 0x1cbd Return
}


func_6328(var_54_bool, var_55_cvector)
{
	var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_bool = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_bool = 0; // 0x18b8 PushV
	GetPosition(var_59_cvector); // 0x18b9 Func
	var_60_cvector = var_55_cvector - var_59_cvector; // 0x18bb Sub2
	var_62_float = GetByIndex(var_60_cvector, 0); // 0x18bc PushE
	var_63_float = GetByIndex(var_60_cvector, 2); // 0x18bd PushE
	Rotate(var_62_float, var_63_float, var_61_bool); // 0x18be Func
	var_54_bool = var_61_bool; // 0x18c0 Mov
	return 6; // 0x18c1 Return
}


func_7358(var_635_bool)
{
	var_637_int = 0; var_638_string = ""; // 0x1cbf PushV
	var_638_string = "d3RubinToldWhereIsSimon"; // 0x1cc0 MovS
	func_6644(var_637_int, var_638_string); // 0x1cc1 NEW_2
	var_639_int = 1; // 0x1cc3 PushI
	var_640_bool = var_637_int == var_639_int; // 0x1cc4 Eq
	if(var_640_bool == 0) goto Label_7368; // 0x1cc5 JumpB
	var_635_bool = 1; // 0x1cc6 MovB
	return 0; // 0x1cc7 Return
	
Label_7368:
	var_635_bool = 0; // 0x1cc8 MovB
	return 0; // 0x1cc9 Return
}


func_6850()
{
	var_85_bool = 0; // 0x1ac3 PushV
	var_85_bool = 0; // 0x1ac4 MovB
	var_86_int = 0; var_87_string = ""; // 0x1ac5 PushV
	var_87_string = "d2q01BigVladVisit"; // 0x1ac6 MovS
	func_6644(var_86_int, var_87_string); // 0x1ac7 NEW_2
	var_90_int = 0; // 0x1ac9 PushI
	var_91_bool = var_86_int != var_90_int; // 0x1aca Neq
	if(var_91_bool == 0) goto Label_6868; // 0x1acb JumpB
	var_92_int = 0; var_93_string = ""; // 0x1acc PushV
	var_93_string = "d2q01GeorgVisit"; // 0x1acd MovS
	func_6644(var_92_int, var_93_string); // 0x1ace NEW_2
	var_94_int = 0; // 0x1ad0 PushI
	var_95_bool = var_92_int != var_94_int; // 0x1ad1 Neq
	if(var_95_bool == 0) goto Label_6868; // 0x1ad2 JumpB
	var_85_bool = 1; // 0x1ad3 MovB
	
Label_6868:
	if(var_85_bool == 0) goto Label_6872; // 0x1ad4 JumpB
	func_7578(); // 0x1ad6 NEW_2
	
Label_6872:
	return 0; // 0x1ad8 Return
}


func_6338(var_50_bool)
{
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x18c2 PushV
	GetPosition(var_53_cvector); // 0x18c3 ObjFunc
	var_54_bool = 0; var_55_cvector = CVector(0,0,0); // 0x18c5 PushV
	var_55_cvector = var_53_cvector; // 0x18c6 Mov
	func_6328(var_54_bool, var_55_cvector); // 0x18c7 NEW_2
	var_50_bool = var_54_bool; // 0x18c8 Mov
	return 2; // 0x18ca Return
}


func_3272(var_0_object, var_1_object, var_2_object, var_3_string, var_427_object, var_428_object)
{
	var_0_object = var_428_object; // 0xcc9 TMov
	var_1_object = var_427_object; // 0xcca TMov
	var_3_string = 0; // 0xccb TMovB
	var_433_int = 1; // 0xccc PushI
	if(var_433_int == 0) goto Label_3363; // 0xccd JumpB
	var_434_bool = 0; // 0xcce PushV
	var_434_bool = 0; // 0xccf MovB
	var_435_bool = 0; var_436_object = Obj(); // 0xcd0 PushV
	var_436_object = var_1_object; // 0xcd1 MovT
	func_7226(var_436_object); // 0xcd2 NEW_2
	if(var_435_bool == 0) goto Label_3291; // 0xcd4 JumpB
	var_441_bool = 0; var_442_object = Obj(); // 0xcd5 PushV
	var_442_object = var_1_object; // 0xcd6 MovT
	func_7262(var_442_object); // 0xcd7 NEW_2
	if(var_441_bool == 0) goto Label_3291; // 0xcd9 JumpB
	var_434_bool = 1; // 0xcda MovB
	
Label_3291:
	if(var_434_bool == 0) goto Label_3322; // 0xcdb JumpB
	var_447_string = ""; // 0xcdc PushV
	var_447_string = "Neutral"; // 0xcdd MovS
	func_3393(var_428_object, var_447_string); // 0xcde NEW_2
	var_455_int = 506829; // 0xce0 PushI
	SetMessage(var_455_int); // 0xce1 TObjFunc
	ClearReplies(); // 0xce3 TObjFunc
	var_456_int = 506830; // 0xce5 PushI
	var_457_int = 7531; // 0xce6 PushI
	var_458_int = 7530; // 0xce7 PushI
	AddReply(var_456_int, var_457_int, var_458_int); // 0xce8 TObjFunc
	var_459_int = 506844; // 0xcea PushI
	var_460_int = 7547; // 0xceb PushI
	var_461_int = 7546; // 0xcec PushI
	AddReply(var_459_int, var_460_int, var_461_int); // 0xced TObjFunc
	var_462_int = 506849; // 0xcef PushI
	var_463_int = 7535; // 0xcf0 PushI
	var_464_int = 7554; // 0xcf1 PushI
	AddReply(var_462_int, var_463_int, var_464_int); // 0xcf2 TObjFunc
	var_465_int = 506848; // 0xcf4 PushI
	var_466_int = 7547; // 0xcf5 PushI
	var_467_int = 7552; // 0xcf6 PushI
	AddReply(var_465_int, var_466_int, var_467_int); // 0xcf7 TObjFunc
	goto Label_3363; // 0xcf9 Jump
	
Label_3363:
	var_468_bool = 0; // 0xd23 PushV
	func_6755(var_468_bool); // 0xd24 NEW_2
	if(var_468_bool == 0) goto Label_3378; // 0xd26 JumpB
	
Label_3367:
	lshWaitForAnimEnd(); // 0xd27 Func
	var_469_string = var_3_string; // 0xd29 PushT
	if(var_469_string == 0) goto Label_3372; // 0xd2a JumpB
	goto Label_3377; // 0xd2b Jump
	
Label_3377:
	goto Label_3392; // 0xd31 Jump
	
Label_3392:
	return 0; // 0xd40 Return
	
Label_3372:
	var_470_string = ""; // 0xd2c PushV
	var_470_string = var_2_object; // 0xd2d MovT
	func_6575(var_470_string); // 0xd2e NEW_2
	goto Label_3367; // 0xd30 Jump
	
Label_3378:
	var_471_string = "all"; // 0xd32 PushS
	var_472_string = "idle"; // 0xd33 PushS
	PlayAnimation(var_471_string, var_472_string); // 0xd34 Func
	
Label_3382:
	WaitForAnimEnd(); // 0xd36 Func
	var_473_string = var_3_string; // 0xd38 PushT
	if(var_473_string == 0) goto Label_3387; // 0xd39 JumpB
	goto Label_3392; // 0xd3a Jump
	
Label_3387:
	var_474_string = "all"; // 0xd3b PushS
	var_475_string = "idle"; // 0xd3c PushS
	PlayAnimation(var_474_string, var_475_string); // 0xd3d Func
	goto Label_3382; // 0xd3f Jump
	
Label_3322:
	var_476_string = ""; // 0xcfa PushV
	var_476_string = "Neutral"; // 0xcfb MovS
	func_3393(var_428_object, var_476_string); // 0xcfc NEW_2
	var_477_int = 506850; // 0xcfe PushI
	SetMessage(var_477_int); // 0xcff TObjFunc
	ClearReplies(); // 0xd01 TObjFunc
	var_478_bool = 0; // 0xd03 PushV
	var_478_bool = 0; // 0xd04 MovB
	var_479_bool = 0; var_480_object = Obj(); // 0xd05 PushV
	var_480_object = var_1_object; // 0xd06 MovT
	func_7238(var_480_object); // 0xd07 NEW_2
	if(var_479_bool == 0) goto Label_3344; // 0xd09 JumpB
	var_485_bool = 0; var_486_object = Obj(); // 0xd0a PushV
	var_486_object = var_1_object; // 0xd0b MovT
	func_7250(var_486_object); // 0xd0c NEW_2
	if(var_485_bool == 0) goto Label_3344; // 0xd0e JumpB
	var_478_bool = 1; // 0xd0f MovB
	
Label_3344:
	if(var_478_bool == 0) goto Label_3350; // 0xd10 JumpB
	var_491_int = 506851; // 0xd11 PushI
	var_492_int = 7835; // 0xd12 PushI
	var_493_int = 7557; // 0xd13 PushI
	AddReply(var_491_int, var_492_int, var_493_int); // 0xd14 TObjFunc
	
Label_3350:
	var_494_int = 507536; // 0xd16 PushI
	var_495_int = -1; // 0xd17 PushI
	var_496_int = 8318; // 0xd18 PushI
	AddReply(var_494_int, var_495_int, var_496_int); // 0xd19 TObjFunc
	var_497_int = 533836; // 0xd1b PushI
	var_498_int = -1; // 0xd1c PushI
	var_499_int = 35386; // 0xd1d PushI
	AddReply(var_497_int, var_498_int, var_499_int); // 0xd1e TObjFunc
	goto Label_3363; // 0xd20 Jump
}


func_7370(var_573_bool)
{
	var_575_int = 0; var_576_string = ""; // 0x1ccb PushV
	var_576_string = "d3q02"; // 0x1ccc MovS
	func_6644(var_575_int, var_576_string); // 0x1ccd NEW_2
	var_577_int = 0; // 0x1ccf PushI
	var_578_bool = var_575_int == var_577_int; // 0x1cd0 Eq
	if(var_578_bool == 0) goto Label_7380; // 0x1cd1 JumpB
	var_573_bool = 1; // 0x1cd2 MovB
	return 0; // 0x1cd3 Return
	
Label_7380:
	var_573_bool = 0; // 0x1cd4 MovB
	return 0; // 0x1cd5 Return
}


func_6347(var_47_bool)
{
	var_48_bool = 0; var_49_bool = 0; // 0x18cb PushV
	IsLoaded(var_49_bool); // 0x18cc Func
	var_47_bool = var_49_bool; // 0x18ce Mov
	return 2; // 0x18cf Return
}


func_6352(var_84_bool, var_86_float)
{
	var_87_float = 0; var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_bool = 0; var_95_bool = 0; var_96_float = 0; var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_bool = 0; var_104_bool = 0; // 0x18d0 PushV
	GetPosition(var_97_cvector); // 0x18d1 ObjFunc
	GetEyesHeight(var_96_float); // 0x18d3 ObjFunc
	var_105_float = GetByIndex(var_97_cvector, 1); // 0x18d5 PushE
	var_105_float = var_105_float + var_96_float; // 0x18d6 Add2
	SetByIndex(var_97_cvector, 1) = var_105_float; // 0x18d7 PopE
	GetPosition(var_98_cvector); // 0x18d8 Func
	GetEyesHeight(var_96_float); // 0x18da Func
	var_106_float = GetByIndex(var_98_cvector, 1); // 0x18dc PushE
	var_106_float = var_106_float + var_96_float; // 0x18dd Add2
	SetByIndex(var_98_cvector, 1) = var_106_float; // 0x18de PopE
	var_99_cvector = var_97_cvector - var_98_cvector; // 0x18df Sub2
	var_107_float = GetByIndex(var_99_cvector, 1); // 0x18e0 PushE
	var_107_float = 0; // 0x18e1 MovI
	SetByIndex(var_99_cvector, 1) = var_107_float; // 0x18e2 PopE
	var_108_int = var_99_cvector | var_99_cvector; // 0x18e3 Or
	var_109_float = sqrt(var_108_int); // 0x18e4 Sqrt
	var_99_cvector = var_99_cvector / var_99_cvector; // 0x18e5 Div2
	var_100_cvector = -var_99_cvector; // 0x18e6 Neg2
	var_110_float = var_99_cvector * var_86_float; // 0x18e7 Mult
	var_111_cvector = CVector(0,0,0); var_112_cvector = CVector(0,0,0); // 0x18e8 PushV
	var_113_cvector = CVector(0.0, 1.0, 0.0); // 0x18e9 PushVec
	var_112_cvector = var_100_cvector ^ var_113_cvector; // 0x18ea Xor2
	func_6634(var_111_cvector, var_112_cvector); // 0x18eb NEW_2
	var_119_int = 25; // 0x18ed PushI
	var_120_float = var_111_cvector * var_119_int; // 0x18ee Mult
	var_121_int = var_110_float + var_120_float; // 0x18ef Add
	var_122_cvector = CVector(0.0, 10.0, 0.0); // 0x18f0 PushVec
	var_101_cvector = var_121_int - var_122_cvector; // 0x18f1 Sub2
	var_102_cvector = var_98_cvector + var_101_cvector; // 0x18f2 Add2
	IsOverrideActive(var_103_bool); // 0x18f3 Func
	var_123_bool = var_103_bool; // 0x18f5 Push
	if(var_123_bool == 0) goto Label_6393; // 0x18f6 JumpB
	var_84_bool = 0; // 0x18f7 MovB
	return 18; // 0x18f8 Return
	
Label_6393:
	StopWorld(); // 0x18f9 Func
	CameraTransit(var_102_cvector, var_100_cvector); // 0x18fb Func
	var_124_float = GetByIndex(var_101_cvector, 0); // 0x18fd PushE
	var_125_float = GetByIndex(var_101_cvector, 2); // 0x18fe PushE
	Rotate(var_124_float, var_125_float); // 0x18ff Func
	var_126_bool = 0; // 0x1901 PushV
	func_6755(var_126_bool); // 0x1902 NEW_2
	if(var_126_bool == 0) goto Label_6406; // 0x1904 JumpB
	goto Label_6414; // 0x1905 Jump
	
Label_6414:
	CameraWaitForPlayFinish(); // 0x190e Func
	ResumeWorld(); // 0x1910 Func
	var_84_bool = 1; // 0x1912 MovB
	return 18; // 0x1913 Return
	
Label_6406:
	var_127_string = "head"; // 0x1906 PushS
	HasAnimationTrack(var_104_bool, var_127_string); // 0x1907 Func
	var_128_bool = var_104_bool; // 0x1909 Push
	if(var_128_bool == 0) goto Label_6414; // 0x190a JumpB
	var_129_string = "head"; // 0x190b PushS
	LookAsyncCamera(var_129_string); // 0x190c Func
}


func_7382(var_600_bool)
{
	var_602_int = 0; var_603_string = ""; // 0x1cd7 PushV
	var_603_string = "ood3Georg3"; // 0x1cd8 MovS
	func_6644(var_602_int, var_603_string); // 0x1cd9 NEW_2
	var_604_int = 0; // 0x1cdb PushI
	var_605_bool = var_602_int == var_604_int; // 0x1cdc Eq
	if(var_605_bool == 0) goto Label_7392; // 0x1cdd JumpB
	var_600_bool = 1; // 0x1cde MovB
	return 0; // 0x1cdf Return
	
Label_7392:
	var_600_bool = 0; // 0x1ce0 MovB
	return 0; // 0x1ce1 Return
}


func_6873()
{
	var_140_string = "playsound"; // 0x1ada PushS
	var_141_string = "givemoney"; // 0x1adb PushS
	TriggerWorld(var_140_string, var_141_string); // 0x1adc Func
	return 0; // 0x1ade Return
}


func_5851(var_0_object, var_1034_int, var_1035_object)
{
	var_1037_object = Obj(); var_1038_bool = 0; var_1039_int = 0; var_1040_bool = 0; var_1041_object = Obj(); var_1042_bool = 0; var_1043_int = 0; var_1044_bool = 0; // 0x16db PushV
	var_0_object = var_1035_object; // 0x16dc TMov
	var_1045_bool = 0; var_1046_object = Obj(); var_1047_float = 0; // 0x16dd PushV
	var_1046_object = var_1035_object; // 0x16de Mov
	var_1047_float = 70.0; // 0x16df MovF
	func_6352(var_1046_object, var_1047_float); // 0x16e0 NEW_2
	var_1048_bool = var_1045_bool == 0; // 0x16e2 Not
	if(var_1048_bool == 0) goto Label_5862; // 0x16e3 JumpB
	var_1034_int = -2; // 0x16e4 MovI
	return 8; // 0x16e5 Return
	
Label_5862:
	CreateDialog(var_1041_object); // 0x16e6 Func
	var_1049_int = 0; // 0x16e8 PushV
	func_6749(var_1049_int); // 0x16e9 NEW_2
	SetNPCName(var_1049_int); // 0x16eb ObjFunc
	var_1050_int = 0; // 0x16ed PushV
	func_6747(var_1050_int); // 0x16ee NEW_2
	SetNPCDescription(var_1050_int); // 0x16f0 ObjFunc
	var_1051_string = ""; // 0x16f2 PushV
	func_6751(var_1051_string); // 0x16f3 NEW_2
	SetPhoto(var_1051_string); // 0x16f5 ObjFunc
	var_1052_string = ""; // 0x16f7 PushV
	func_6753(var_1052_string); // 0x16f8 NEW_2
	SetPhoto2(var_1052_string); // 0x16fa ObjFunc
	var_1053_int = 0; // 0x16fc PushV
	func_7747(var_1053_int); // 0x16fd NEW_2
	SetPlayerName(var_1053_int); // 0x16ff ObjFunc
	var_1043_int = -1; // 0x1701 MovI
	IsOverrideActive(var_1042_bool); // 0x1702 Func
	var_1054_bool = var_1042_bool; // 0x1704 Push
	if(var_1054_bool == 0) goto Label_5896; // 0x1705 JumpB
	var_1034_int = -2; // 0x1706 MovI
	return 8; // 0x1707 Return
	
Label_5896:
	DoDialog(var_1041_object); // 0x1708 Func
	var_1055_bool = 0; var_1056_object = Obj(); // 0x170a PushV
	var_1057_object = Obj(); // 0x170b PushV
	func_6628(var_1057_object); // 0x170c NEW_2
	var_1056_object = var_1057_object; // 0x170d Mov
	func_6437(var_1055_bool, var_1056_object); // 0x170f NEW_2
	var_1058_object = Obj(); var_1059_object = Obj(); // 0x1711 PushV
	var_1058_object = var_1035_object; // 0x1712 Mov
	var_1059_object = var_1041_object; // 0x1713 Mov
	TaskCall(17); // 0x1714 TaskCall
	func_5932(var_1060_object, var_1061_object, var_1062_string, var_1063_bool, var_1058_object, var_1059_object); // 0x1715 NEW_2
	TaskReturn(); // 0x1716 TaskReturn
	IsDialogEnd(var_1044_bool); // 0x1718 ObjFunc
	
Label_5914:
	var_1088_bool = var_1044_bool == 0; // 0x171a Not
	if(var_1088_bool == 0) goto Label_5921; // 0x171b JumpB
	sync(); // 0x171c Func
	IsDialogEnd(var_1044_bool); // 0x171e ObjFunc
	goto Label_5914; // 0x1720 Jump
	
Label_5921:
	var_1089_object = Obj(); // 0x1721 PushV
	var_1089_object = var_1035_object; // 0x1722 Mov
	func_6420(); // 0x1723 NEW_2
	StopDialog(var_1041_object); // 0x1725 Func
	GetReturnValue(var_1043_int); // 0x1727 ObjFunc
	var_1034_int = var_1043_int; // 0x1729 Mov
	return 8; // 0x172a Return
}


func_6879()
{
	var_216_string = "ood1Georg5"; // 0x1ae0 PushS
	var_217_int = 1; // 0x1ae1 PushI
	SetVariable(var_216_string, var_217_int); // 0x1ae2 Func
	return 0; // 0x1ae4 Return
}


func_7394(var_606_bool)
{
	var_608_int = 0; var_609_string = ""; // 0x1ce3 PushV
	var_609_string = "d3q02SeeCorpse"; // 0x1ce4 MovS
	func_6644(var_608_int, var_609_string); // 0x1ce5 NEW_2
	var_610_int = 1; // 0x1ce7 PushI
	var_611_bool = var_608_int == var_610_int; // 0x1ce8 Eq
	if(var_611_bool == 0) goto Label_7404; // 0x1ce9 JumpB
	var_606_bool = 1; // 0x1cea MovB
	return 0; // 0x1ceb Return
	
Label_7404:
	var_606_bool = 0; // 0x1cec MovB
	return 0; // 0x1ced Return
}


func_6885()
{
	var_54_object = Obj(); var_55_object = Obj(); // 0x1ae5 PushV
	var_56_string = "d10q02"; // 0x1ae6 PushS
	var_57_int = 4; // 0x1ae7 PushI
	SetVariable(var_56_string, var_57_int); // 0x1ae8 Func
	var_58_object = Obj(); // 0x1aea PushV
	func_7697(var_58_object); // 0x1aeb NEW_2
	var_55_object = var_58_object; // 0x1aec Mov
	var_65_string = "d10q02GeorgGotoAglaja"; // 0x1aee PushS
	var_66_string = "pt_map_aglaja"; // 0x1aef PushS
	var_67_int = 0; // 0x1af0 PushI
	var_68_int = 515299; // 0x1af1 PushI
	var_69_float = 0; // 0x1af2 PushV
	func_6703(var_69_float); // 0x1af3 NEW_2
	AddMark(var_65_string, var_66_string, var_67_int, var_68_int, var_69_float); // 0x1af5 ObjFunc
	func_7526(); // 0x1af8 NEW_2
	return 2; // 0x1afa Return
}


func_7406(var_700_bool)
{
	var_702_int = 0; var_703_string = ""; // 0x1cef PushV
	var_703_string = "d5q03"; // 0x1cf0 MovS
	func_6644(var_702_int, var_703_string); // 0x1cf1 NEW_2
	var_704_int = 1000; // 0x1cf3 PushI
	var_705_bool = var_702_int == var_704_int; // 0x1cf4 Eq
	if(var_705_bool == 0) goto Label_7416; // 0x1cf5 JumpB
	var_700_bool = 1; // 0x1cf6 MovB
	return 0; // 0x1cf7 Return
	
Label_7416:
	var_700_bool = 0; // 0x1cf8 MovB
	return 0; // 0x1cf9 Return
}


func_1263(var_0_object, var_73_int, var_74_object)
{
	var_76_object = Obj(); var_77_bool = 0; var_78_int = 0; var_79_bool = 0; var_80_object = Obj(); var_81_bool = 0; var_82_int = 0; var_83_bool = 0; // 0x4ef PushV
	var_0_object = var_74_object; // 0x4f0 TMov
	var_84_bool = 0; var_85_object = Obj(); var_86_float = 0; // 0x4f1 PushV
	var_85_object = var_74_object; // 0x4f2 Mov
	var_86_float = 70.0; // 0x4f3 MovF
	func_6352(var_85_object, var_86_float); // 0x4f4 NEW_2
	var_130_bool = var_84_bool == 0; // 0x4f6 Not
	if(var_130_bool == 0) goto Label_1274; // 0x4f7 JumpB
	var_73_int = -2; // 0x4f8 MovI
	return 8; // 0x4f9 Return
	
Label_1274:
	CreateDialog(var_80_object); // 0x4fa Func
	var_131_int = 0; // 0x4fc PushV
	func_6749(var_131_int); // 0x4fd NEW_2
	SetNPCName(var_131_int); // 0x4ff ObjFunc
	var_132_int = 0; // 0x501 PushV
	func_6747(var_132_int); // 0x502 NEW_2
	SetNPCDescription(var_132_int); // 0x504 ObjFunc
	var_133_string = ""; // 0x506 PushV
	func_6751(var_133_string); // 0x507 NEW_2
	SetPhoto(var_133_string); // 0x509 ObjFunc
	var_134_string = ""; // 0x50b PushV
	func_6753(var_134_string); // 0x50c NEW_2
	SetPhoto2(var_134_string); // 0x50e ObjFunc
	var_135_int = 0; // 0x510 PushV
	func_7747(var_135_int); // 0x511 NEW_2
	SetPlayerName(var_135_int); // 0x513 ObjFunc
	var_82_int = -1; // 0x515 MovI
	IsOverrideActive(var_81_bool); // 0x516 Func
	var_143_bool = var_81_bool; // 0x518 Push
	if(var_143_bool == 0) goto Label_1308; // 0x519 JumpB
	var_73_int = -2; // 0x51a MovI
	return 8; // 0x51b Return
	
Label_1308:
	DoDialog(var_80_object); // 0x51c Func
	var_144_bool = 0; var_145_object = Obj(); // 0x51e PushV
	var_146_object = Obj(); // 0x51f PushV
	func_6628(var_146_object); // 0x520 NEW_2
	var_145_object = var_146_object; // 0x521 Mov
	func_6437(var_144_bool, var_145_object); // 0x523 NEW_2
	var_234_object = Obj(); var_235_object = Obj(); // 0x525 PushV
	var_234_object = var_74_object; // 0x526 Mov
	var_235_object = var_80_object; // 0x527 Mov
	TaskCall(7); // 0x528 TaskCall
	func_1344(var_236_object, var_237_object, var_238_string, var_239_bool, var_234_object, var_235_object); // 0x529 NEW_2
	TaskReturn(); // 0x52a TaskReturn
	IsDialogEnd(var_83_bool); // 0x52c ObjFunc
	
Label_1326:
	var_393_bool = var_83_bool == 0; // 0x52e Not
	if(var_393_bool == 0) goto Label_1333; // 0x52f JumpB
	sync(); // 0x530 Func
	IsDialogEnd(var_83_bool); // 0x532 ObjFunc
	goto Label_1326; // 0x534 Jump
	
Label_1333:
	var_394_object = Obj(); // 0x535 PushV
	var_394_object = var_74_object; // 0x536 Mov
	func_6420(); // 0x537 NEW_2
	StopDialog(var_80_object); // 0x539 Func
	GetReturnValue(var_82_int); // 0x53b ObjFunc
	var_73_int = var_82_int; // 0x53d Mov
	return 8; // 0x53e Return
}


func_7418(var_694_bool)
{
	var_696_int = 0; var_697_string = ""; // 0x1cfb PushV
	var_697_string = "ood5Georg1"; // 0x1cfc MovS
	func_6644(var_696_int, var_697_string); // 0x1cfd NEW_2
	var_698_int = 0; // 0x1cff PushI
	var_699_bool = var_696_int == var_698_int; // 0x1d00 Eq
	if(var_699_bool == 0) goto Label_7428; // 0x1d01 JumpB
	var_694_bool = 1; // 0x1d02 MovB
	return 0; // 0x1d03 Return
	
Label_7428:
	var_694_bool = 0; // 0x1d04 MovB
	return 0; // 0x1d05 Return
}


func_764(var_0_object, var_724_int, var_725_object)
{
	var_727_object = Obj(); var_728_bool = 0; var_729_int = 0; var_730_bool = 0; var_731_object = Obj(); var_732_bool = 0; var_733_int = 0; var_734_bool = 0; // 0x2fc PushV
	var_0_object = var_725_object; // 0x2fd TMov
	var_735_bool = 0; var_736_object = Obj(); var_737_float = 0; // 0x2fe PushV
	var_736_object = var_725_object; // 0x2ff Mov
	var_737_float = 70.0; // 0x300 MovF
	func_6352(var_736_object, var_737_float); // 0x301 NEW_2
	var_738_bool = var_735_bool == 0; // 0x303 Not
	if(var_738_bool == 0) goto Label_775; // 0x304 JumpB
	var_724_int = -2; // 0x305 MovI
	return 8; // 0x306 Return
	
Label_775:
	CreateDialog(var_731_object); // 0x307 Func
	var_739_int = 0; // 0x309 PushV
	func_6749(var_739_int); // 0x30a NEW_2
	SetNPCName(var_739_int); // 0x30c ObjFunc
	var_740_int = 0; // 0x30e PushV
	func_6747(var_740_int); // 0x30f NEW_2
	SetNPCDescription(var_740_int); // 0x311 ObjFunc
	var_741_string = ""; // 0x313 PushV
	func_6751(var_741_string); // 0x314 NEW_2
	SetPhoto(var_741_string); // 0x316 ObjFunc
	var_742_string = ""; // 0x318 PushV
	func_6753(var_742_string); // 0x319 NEW_2
	SetPhoto2(var_742_string); // 0x31b ObjFunc
	var_743_int = 0; // 0x31d PushV
	func_7747(var_743_int); // 0x31e NEW_2
	SetPlayerName(var_743_int); // 0x320 ObjFunc
	var_733_int = -1; // 0x322 MovI
	IsOverrideActive(var_732_bool); // 0x323 Func
	var_744_bool = var_732_bool; // 0x325 Push
	if(var_744_bool == 0) goto Label_809; // 0x326 JumpB
	var_724_int = -2; // 0x327 MovI
	return 8; // 0x328 Return
	
Label_809:
	DoDialog(var_731_object); // 0x329 Func
	var_745_bool = 0; var_746_object = Obj(); // 0x32b PushV
	var_747_object = Obj(); // 0x32c PushV
	func_6628(var_747_object); // 0x32d NEW_2
	var_746_object = var_747_object; // 0x32e Mov
	func_6437(var_745_bool, var_746_object); // 0x330 NEW_2
	var_748_object = Obj(); var_749_object = Obj(); // 0x332 PushV
	var_748_object = var_725_object; // 0x333 Mov
	var_749_object = var_731_object; // 0x334 Mov
	TaskCall(5); // 0x335 TaskCall
	func_845(var_750_object, var_751_object, var_752_string, var_753_bool, var_748_object, var_749_object); // 0x336 NEW_2
	TaskReturn(); // 0x337 TaskReturn
	IsDialogEnd(var_734_bool); // 0x339 ObjFunc
	
Label_827:
	var_824_bool = var_734_bool == 0; // 0x33b Not
	if(var_824_bool == 0) goto Label_834; // 0x33c JumpB
	sync(); // 0x33d Func
	IsDialogEnd(var_734_bool); // 0x33f ObjFunc
	goto Label_827; // 0x341 Jump
	
Label_834:
	var_825_object = Obj(); // 0x342 PushV
	var_825_object = var_725_object; // 0x343 Mov
	func_6420(); // 0x344 NEW_2
	StopDialog(var_731_object); // 0x346 Func
	GetReturnValue(var_733_int); // 0x348 ObjFunc
	var_724_int = var_733_int; // 0x34a Mov
	return 8; // 0x34b Return
}


func_5372(var_0_object, var_828_int, var_829_object)
{
	var_831_object = Obj(); var_832_bool = 0; var_833_int = 0; var_834_bool = 0; var_835_object = Obj(); var_836_bool = 0; var_837_int = 0; var_838_bool = 0; // 0x14fc PushV
	var_0_object = var_829_object; // 0x14fd TMov
	var_839_bool = 0; var_840_object = Obj(); var_841_float = 0; // 0x14fe PushV
	var_840_object = var_829_object; // 0x14ff Mov
	var_841_float = 70.0; // 0x1500 MovF
	func_6352(var_840_object, var_841_float); // 0x1501 NEW_2
	var_842_bool = var_839_bool == 0; // 0x1503 Not
	if(var_842_bool == 0) goto Label_5383; // 0x1504 JumpB
	var_828_int = -2; // 0x1505 MovI
	return 8; // 0x1506 Return
	
Label_5383:
	CreateDialog(var_835_object); // 0x1507 Func
	var_843_int = 0; // 0x1509 PushV
	func_6749(var_843_int); // 0x150a NEW_2
	SetNPCName(var_843_int); // 0x150c ObjFunc
	var_844_int = 0; // 0x150e PushV
	func_6747(var_844_int); // 0x150f NEW_2
	SetNPCDescription(var_844_int); // 0x1511 ObjFunc
	var_845_string = ""; // 0x1513 PushV
	func_6751(var_845_string); // 0x1514 NEW_2
	SetPhoto(var_845_string); // 0x1516 ObjFunc
	var_846_string = ""; // 0x1518 PushV
	func_6753(var_846_string); // 0x1519 NEW_2
	SetPhoto2(var_846_string); // 0x151b ObjFunc
	var_847_int = 0; // 0x151d PushV
	func_7747(var_847_int); // 0x151e NEW_2
	SetPlayerName(var_847_int); // 0x1520 ObjFunc
	var_837_int = -1; // 0x1522 MovI
	IsOverrideActive(var_836_bool); // 0x1523 Func
	var_848_bool = var_836_bool; // 0x1525 Push
	if(var_848_bool == 0) goto Label_5417; // 0x1526 JumpB
	var_828_int = -2; // 0x1527 MovI
	return 8; // 0x1528 Return
	
Label_5417:
	DoDialog(var_835_object); // 0x1529 Func
	var_849_bool = 0; var_850_object = Obj(); // 0x152b PushV
	var_851_object = Obj(); // 0x152c PushV
	func_6628(var_851_object); // 0x152d NEW_2
	var_850_object = var_851_object; // 0x152e Mov
	func_6437(var_849_bool, var_850_object); // 0x1530 NEW_2
	var_852_object = Obj(); var_853_object = Obj(); // 0x1532 PushV
	var_852_object = var_829_object; // 0x1533 Mov
	var_853_object = var_835_object; // 0x1534 Mov
	TaskCall(15); // 0x1535 TaskCall
	func_5453(var_854_object, var_855_object, var_856_string, var_857_bool, var_852_object, var_853_object); // 0x1536 NEW_2
	TaskReturn(); // 0x1537 TaskReturn
	IsDialogEnd(var_838_bool); // 0x1539 ObjFunc
	
Label_5435:
	var_907_bool = var_838_bool == 0; // 0x153b Not
	if(var_907_bool == 0) goto Label_5442; // 0x153c JumpB
	sync(); // 0x153d Func
	IsDialogEnd(var_838_bool); // 0x153f ObjFunc
	goto Label_5435; // 0x1541 Jump
	
Label_5442:
	var_908_object = Obj(); // 0x1542 PushV
	var_908_object = var_829_object; // 0x1543 Mov
	func_6420(); // 0x1544 NEW_2
	StopDialog(var_835_object); // 0x1546 Func
	GetReturnValue(var_837_int); // 0x1548 ObjFunc
	var_828_int = var_837_int; // 0x154a Mov
	return 8; // 0x154b Return
}


func_6908()
{
	var_54_string = "ood2Georg1"; // 0x1afd PushS
	var_55_int = 1; // 0x1afe PushI
	SetVariable(var_54_string, var_55_int); // 0x1aff Func
	return 0; // 0x1b01 Return
}


func_6914()
{
	var_132_string = "ood2Georg2"; // 0x1b03 PushS
	var_133_int = 1; // 0x1b04 PushI
	SetVariable(var_132_string, var_133_int); // 0x1b05 Func
	return 0; // 0x1b07 Return
}


func_7430(var_783_bool)
{
	var_785_int = 0; var_786_string = ""; // 0x1d07 PushV
	var_786_string = "d6q01"; // 0x1d08 MovS
	func_6644(var_785_int, var_786_string); // 0x1d09 NEW_2
	var_787_int = 0; // 0x1d0b PushI
	var_788_bool = var_785_int == var_787_int; // 0x1d0c Eq
	if(var_788_bool == 0) goto Label_7440; // 0x1d0d JumpB
	var_783_bool = 1; // 0x1d0e MovB
	return 0; // 0x1d0f Return
	
Label_7440:
	var_783_bool = 0; // 0x1d10 MovB
	return 0; // 0x1d11 Return
}


func_6920()
{
	var_58_string = "d2q01GeorgVisit"; // 0x1b09 PushS
	var_59_int = 1; // 0x1b0a PushI
	SetVariable(var_58_string, var_59_int); // 0x1b0b Func
	func_7591(); // 0x1b0e NEW_2
	return 0; // 0x1b10 Return
}


func_3856(var_0_object, var_504_int, var_505_object)
{
	var_507_object = Obj(); var_508_bool = 0; var_509_int = 0; var_510_bool = 0; var_511_object = Obj(); var_512_bool = 0; var_513_int = 0; var_514_bool = 0; // 0xf10 PushV
	var_0_object = var_505_object; // 0xf11 TMov
	var_515_bool = 0; var_516_object = Obj(); var_517_float = 0; // 0xf12 PushV
	var_516_object = var_505_object; // 0xf13 Mov
	var_517_float = 70.0; // 0xf14 MovF
	func_6352(var_516_object, var_517_float); // 0xf15 NEW_2
	var_518_bool = var_515_bool == 0; // 0xf17 Not
	if(var_518_bool == 0) goto Label_3867; // 0xf18 JumpB
	var_504_int = -2; // 0xf19 MovI
	return 8; // 0xf1a Return
	
Label_3867:
	CreateDialog(var_511_object); // 0xf1b Func
	var_519_int = 0; // 0xf1d PushV
	func_6749(var_519_int); // 0xf1e NEW_2
	SetNPCName(var_519_int); // 0xf20 ObjFunc
	var_520_int = 0; // 0xf22 PushV
	func_6747(var_520_int); // 0xf23 NEW_2
	SetNPCDescription(var_520_int); // 0xf25 ObjFunc
	var_521_string = ""; // 0xf27 PushV
	func_6751(var_521_string); // 0xf28 NEW_2
	SetPhoto(var_521_string); // 0xf2a ObjFunc
	var_522_string = ""; // 0xf2c PushV
	func_6753(var_522_string); // 0xf2d NEW_2
	SetPhoto2(var_522_string); // 0xf2f ObjFunc
	var_523_int = 0; // 0xf31 PushV
	func_7747(var_523_int); // 0xf32 NEW_2
	SetPlayerName(var_523_int); // 0xf34 ObjFunc
	var_513_int = -1; // 0xf36 MovI
	IsOverrideActive(var_512_bool); // 0xf37 Func
	var_524_bool = var_512_bool; // 0xf39 Push
	if(var_524_bool == 0) goto Label_3901; // 0xf3a JumpB
	var_504_int = -2; // 0xf3b MovI
	return 8; // 0xf3c Return
	
Label_3901:
	DoDialog(var_511_object); // 0xf3d Func
	var_525_bool = 0; var_526_object = Obj(); // 0xf3f PushV
	var_527_object = Obj(); // 0xf40 PushV
	func_6628(var_527_object); // 0xf41 NEW_2
	var_526_object = var_527_object; // 0xf42 Mov
	func_6437(var_525_bool, var_526_object); // 0xf44 NEW_2
	var_528_object = Obj(); var_529_object = Obj(); // 0xf46 PushV
	var_528_object = var_505_object; // 0xf47 Mov
	var_529_object = var_511_object; // 0xf48 Mov
	TaskCall(11); // 0xf49 TaskCall
	func_3937(var_530_object, var_531_object, var_532_string, var_533_bool, var_528_object, var_529_object); // 0xf4a NEW_2
	TaskReturn(); // 0xf4b TaskReturn
	IsDialogEnd(var_514_bool); // 0xf4d ObjFunc
	
Label_3919:
	var_649_bool = var_514_bool == 0; // 0xf4f Not
	if(var_649_bool == 0) goto Label_3926; // 0xf50 JumpB
	sync(); // 0xf51 Func
	IsDialogEnd(var_514_bool); // 0xf53 ObjFunc
	goto Label_3919; // 0xf55 Jump
	
Label_3926:
	var_650_object = Obj(); // 0xf56 PushV
	var_650_object = var_505_object; // 0xf57 Mov
	func_6420(); // 0xf58 NEW_2
	StopDialog(var_511_object); // 0xf5a Func
	GetReturnValue(var_513_int); // 0xf5c ObjFunc
	var_504_int = var_513_int; // 0xf5e Mov
	return 8; // 0xf5f Return
}


func_6929()
{
	var_210_string = "ood1Georg4"; // 0x1b12 PushS
	var_211_int = 1; // 0x1b13 PushI
	SetVariable(var_210_string, var_211_int); // 0x1b14 Func
	return 0; // 0x1b16 Return
}


func_7442(var_790_bool)
{
	var_792_int = 0; var_793_string = ""; // 0x1d13 PushV
	var_793_string = "d6q01"; // 0x1d14 MovS
	func_6644(var_792_int, var_793_string); // 0x1d15 NEW_2
	var_794_int = 1000; // 0x1d17 PushI
	var_795_bool = var_792_int == var_794_int; // 0x1d18 Eq
	if(var_795_bool == 0) goto Label_7452; // 0x1d19 JumpB
	var_790_bool = 1; // 0x1d1a MovB
	return 0; // 0x1d1b Return
	
Label_7452:
	var_790_bool = 0; // 0x1d1c MovB
	return 0; // 0x1d1d Return
}


func_6420()
{
	var_395_bool = 0; var_396_bool = 0; // 0x1914 PushV
	CameraSwitchToNormal(); // 0x1915 Func
	var_397_bool = 0; // 0x1917 PushV
	func_6755(var_397_bool); // 0x1918 NEW_2
	if(var_397_bool == 0) goto Label_6428; // 0x191a JumpB
	goto Label_6436; // 0x191b Jump
	
Label_6436:
	return 2; // 0x1924 Return
	
Label_6428:
	var_398_string = "head"; // 0x191c PushS
	HasAnimationTrack(var_396_bool, var_398_string); // 0x191d Func
	var_399_bool = var_396_bool; // 0x191f Push
	if(var_399_bool == 0) goto Label_6436; // 0x1920 JumpB
	var_400_string = "head"; // 0x1921 PushS
	UnlookAsync(var_400_string); // 0x1922 Func
}


func_6935(var_117_object)
{
	var_119_string = "money 5000 is given"; // 0x1b18 PushS
	Trace(var_119_string); // 0x1b19 Func
	var_120_object = Obj(); var_121_int = 0; // 0x1b1b PushV
	var_120_object = var_117_object; // 0x1b1c Mov
	var_121_int = 5000; // 0x1b1d MovI
	func_6672(var_120_object, var_121_int); // 0x1b1e NEW_2
	return 0; // 0x1b20 Return
}


func_7454(var_797_bool)
{
	var_799_int = 0; var_800_string = ""; // 0x1d1f PushV
	var_800_string = "d6q01"; // 0x1d20 MovS
	func_6644(var_799_int, var_800_string); // 0x1d21 NEW_2
	var_801_int = -1; // 0x1d23 PushI
	var_802_bool = var_799_int == var_801_int; // 0x1d24 Eq
	if(var_802_bool == 0) goto Label_7464; // 0x1d25 JumpB
	var_797_bool = 1; // 0x1d26 MovB
	return 0; // 0x1d27 Return
	
Label_7464:
	var_797_bool = 0; // 0x1d28 MovB
	return 0; // 0x1d29 Return
}


func_6945()
{
	var_144_int = 0; var_145_int = 0; // 0x1b21 PushV
	func_7617(); // 0x1b23 NEW_2
	var_154_string = "d3q02"; // 0x1b25 PushS
	GetVariable(var_154_string, var_145_int); // 0x1b26 Func
	var_155_int = var_145_int; // 0x1b28 Push
	if(var_155_int == 0) goto Label_6960; // 0x1b29 JumpB
	var_156_bool = 0; var_157_string = ""; var_158_string = ""; // 0x1b2a PushV
	var_157_string = "quest_d3_02"; // 0x1b2b MovS
	var_158_string = "completed"; // 0x1b2c MovS
	func_6691(var_156_bool, var_157_string, var_158_string); // 0x1b2d NEW_2
	goto Label_6964; // 0x1b2f Jump
	
Label_6964:
	return 2; // 0x1b34 Return
	
Label_6960:
	var_162_string = "d3q02"; // 0x1b30 PushS
	var_163_int = 1000; // 0x1b31 PushI
	SetVariable(var_162_string, var_163_int); // 0x1b32 Func
}


func_6437(var_144_bool, var_145_object)
{
	var_149_int = 0; var_150_int = 0; var_151_int = 0; var_152_int = 0; // 0x1925 PushV
	var_153_string = "voice_common"; // 0x1926 PushS
	GetVariable(var_153_string, var_151_int); // 0x1927 Func
	var_154_int = var_151_int; // 0x1929 Push
	if(var_154_int == 0) goto Label_6475; // 0x192a JumpB
	var_155_bool = 0; var_156_object = Obj(); // 0x192b PushV
	var_156_object = var_145_object; // 0x192c Mov
	func_6495(var_156_object); // 0x192d NEW_2
	var_185_bool = var_155_bool == 0; // 0x192f Not
	if(var_185_bool == 0) goto Label_6457; // 0x1930 JumpB
	var_186_bool = 0; var_187_object = Obj(); // 0x1931 PushV
	var_187_object = var_145_object; // 0x1932 Mov
	func_6532(var_187_object); // 0x1933 NEW_2
	var_216_bool = var_186_bool == 0; // 0x1935 Not
	if(var_216_bool == 0) goto Label_6457; // 0x1936 JumpB
	var_144_bool = 0; // 0x1937 MovB
	return 4; // 0x1938 Return
	
Label_6457:
	var_217_int = 2; // 0x1939 PushI
	irand(var_152_int, var_217_int); // 0x193a Func
	var_218_int = var_152_int; // 0x193c Push
	if(var_218_int == 0) goto Label_6470; // 0x193d JumpB
	var_219_string = "voice_common"; // 0x193e PushS
	var_220_int = 1; // 0x193f PushI
	var_221_int = var_151_int + var_220_int; // 0x1940 Add
	var_222_int = 3; // 0x1941 PushI
	var_223_int = var_221_int / var_222_int; // 0x1942 Mod
	SetVariable(var_219_string, var_223_int); // 0x1943 Func
	goto Label_6474; // 0x1945 Jump
	
Label_6474:
	goto Label_6493; // 0x194a Jump
	
Label_6493:
	var_144_bool = 1; // 0x195d MovB
	return 4; // 0x195e Return
	
Label_6470:
	var_224_string = "voice_common"; // 0x1946 PushS
	var_225_int = 0; // 0x1947 PushI
	SetVariable(var_224_string, var_225_int); // 0x1948 Func
	
Label_6475:
	var_226_bool = 0; var_227_object = Obj(); // 0x194b PushV
	var_227_object = var_145_object; // 0x194c Mov
	func_6532(var_227_object); // 0x194d NEW_2
	var_228_bool = var_226_bool == 0; // 0x194f Not
	if(var_228_bool == 0) goto Label_6489; // 0x1950 JumpB
	var_229_bool = 0; var_230_object = Obj(); // 0x1951 PushV
	var_230_object = var_145_object; // 0x1952 Mov
	func_6495(var_230_object); // 0x1953 NEW_2
	var_231_bool = var_229_bool == 0; // 0x1955 Not
	if(var_231_bool == 0) goto Label_6489; // 0x1956 JumpB
	var_144_bool = 0; // 0x1957 MovB
	return 4; // 0x1958 Return
	
Label_6489:
	var_232_string = "voice_common"; // 0x1959 PushS
	var_233_int = 1; // 0x195a PushI
	SetVariable(var_232_string, var_233_int); // 0x195b Func
}


func_4901(var_0_object, var_653_int, var_654_object)
{
	var_656_object = Obj(); var_657_bool = 0; var_658_int = 0; var_659_bool = 0; var_660_object = Obj(); var_661_bool = 0; var_662_int = 0; var_663_bool = 0; // 0x1325 PushV
	var_0_object = var_654_object; // 0x1326 TMov
	var_664_bool = 0; var_665_object = Obj(); var_666_float = 0; // 0x1327 PushV
	var_665_object = var_654_object; // 0x1328 Mov
	var_666_float = 70.0; // 0x1329 MovF
	func_6352(var_665_object, var_666_float); // 0x132a NEW_2
	var_667_bool = var_664_bool == 0; // 0x132c Not
	if(var_667_bool == 0) goto Label_4912; // 0x132d JumpB
	var_653_int = -2; // 0x132e MovI
	return 8; // 0x132f Return
	
Label_4912:
	CreateDialog(var_660_object); // 0x1330 Func
	var_668_int = 0; // 0x1332 PushV
	func_6749(var_668_int); // 0x1333 NEW_2
	SetNPCName(var_668_int); // 0x1335 ObjFunc
	var_669_int = 0; // 0x1337 PushV
	func_6747(var_669_int); // 0x1338 NEW_2
	SetNPCDescription(var_669_int); // 0x133a ObjFunc
	var_670_string = ""; // 0x133c PushV
	func_6751(var_670_string); // 0x133d NEW_2
	SetPhoto(var_670_string); // 0x133f ObjFunc
	var_671_string = ""; // 0x1341 PushV
	func_6753(var_671_string); // 0x1342 NEW_2
	SetPhoto2(var_671_string); // 0x1344 ObjFunc
	var_672_int = 0; // 0x1346 PushV
	func_7747(var_672_int); // 0x1347 NEW_2
	SetPlayerName(var_672_int); // 0x1349 ObjFunc
	var_662_int = -1; // 0x134b MovI
	IsOverrideActive(var_661_bool); // 0x134c Func
	var_673_bool = var_661_bool; // 0x134e Push
	if(var_673_bool == 0) goto Label_4946; // 0x134f JumpB
	var_653_int = -2; // 0x1350 MovI
	return 8; // 0x1351 Return
	
Label_4946:
	DoDialog(var_660_object); // 0x1352 Func
	var_674_bool = 0; var_675_object = Obj(); // 0x1354 PushV
	var_676_object = Obj(); // 0x1355 PushV
	func_6628(var_676_object); // 0x1356 NEW_2
	var_675_object = var_676_object; // 0x1357 Mov
	func_6437(var_674_bool, var_675_object); // 0x1359 NEW_2
	var_677_object = Obj(); var_678_object = Obj(); // 0x135b PushV
	var_677_object = var_654_object; // 0x135c Mov
	var_678_object = var_660_object; // 0x135d Mov
	TaskCall(13); // 0x135e TaskCall
	func_4982(var_679_object, var_680_object, var_681_string, var_682_bool, var_677_object, var_678_object); // 0x135f NEW_2
	TaskReturn(); // 0x1360 TaskReturn
	IsDialogEnd(var_663_bool); // 0x1362 ObjFunc
	
Label_4964:
	var_720_bool = var_663_bool == 0; // 0x1364 Not
	if(var_720_bool == 0) goto Label_4971; // 0x1365 JumpB
	sync(); // 0x1366 Func
	IsDialogEnd(var_663_bool); // 0x1368 ObjFunc
	goto Label_4964; // 0x136a Jump
	
Label_4971:
	var_721_object = Obj(); // 0x136b PushV
	var_721_object = var_654_object; // 0x136c Mov
	func_6420(); // 0x136d NEW_2
	StopDialog(var_660_object); // 0x136f Func
	GetReturnValue(var_662_int); // 0x1371 ObjFunc
	var_653_int = var_662_int; // 0x1373 Mov
	return 8; // 0x1374 Return
}


func_7466(var_804_bool)
{
	var_806_int = 0; var_807_string = ""; // 0x1d2b PushV
	var_807_string = "ood6Georg1"; // 0x1d2c MovS
	func_6644(var_806_int, var_807_string); // 0x1d2d NEW_2
	var_808_int = 0; // 0x1d2f PushI
	var_809_bool = var_806_int == var_808_int; // 0x1d30 Eq
	if(var_809_bool == 0) goto Label_7476; // 0x1d31 JumpB
	var_804_bool = 1; // 0x1d32 MovB
	return 0; // 0x1d33 Return
	
Label_7476:
	var_804_bool = 0; // 0x1d34 MovB
	return 0; // 0x1d35 Return
}


func_5932(var_0_object, var_1_object, var_2_object, var_3_string, var_1058_object, var_1059_object)
{
	var_0_object = var_1059_object; // 0x172d TMov
	var_1_object = var_1058_object; // 0x172e TMov
	var_3_string = 0; // 0x172f TMovB
	var_1064_int = 1; // 0x1730 PushI
	if(var_1064_int == 0) goto Label_5960; // 0x1731 JumpB
	var_1065_string = ""; // 0x1732 PushV
	var_1065_string = "Neutral"; // 0x1733 MovS
	func_5990(var_1059_object, var_1065_string); // 0x1734 NEW_2
	var_1073_int = 540542; // 0x1736 PushI
	SetMessage(var_1073_int); // 0x1737 TObjFunc
	ClearReplies(); // 0x1739 TObjFunc
	var_1074_int = 540543; // 0x173b PushI
	var_1075_int = -1; // 0x173c PushI
	var_1076_int = 42552; // 0x173d PushI
	AddReply(var_1074_int, var_1075_int, var_1076_int); // 0x173e TObjFunc
	var_1077_int = 540796; // 0x1740 PushI
	var_1078_int = -1; // 0x1741 PushI
	var_1079_int = 42845; // 0x1742 PushI
	AddReply(var_1077_int, var_1078_int, var_1079_int); // 0x1743 TObjFunc
	goto Label_5960; // 0x1745 Jump
	
Label_5960:
	var_1080_bool = 0; // 0x1748 PushV
	func_6755(var_1080_bool); // 0x1749 NEW_2
	if(var_1080_bool == 0) goto Label_5975; // 0x174b JumpB
	
Label_5964:
	lshWaitForAnimEnd(); // 0x174c Func
	var_1081_string = var_3_string; // 0x174e PushT
	if(var_1081_string == 0) goto Label_5969; // 0x174f JumpB
	goto Label_5974; // 0x1750 Jump
	
Label_5974:
	goto Label_5989; // 0x1756 Jump
	
Label_5989:
	return 0; // 0x1765 Return
	
Label_5969:
	var_1082_string = ""; // 0x1751 PushV
	var_1082_string = var_2_object; // 0x1752 MovT
	func_6575(var_1082_string); // 0x1753 NEW_2
	goto Label_5964; // 0x1755 Jump
	
Label_5975:
	var_1083_string = "all"; // 0x1757 PushS
	var_1084_string = "idle"; // 0x1758 PushS
	PlayAnimation(var_1083_string, var_1084_string); // 0x1759 Func
	
Label_5979:
	WaitForAnimEnd(); // 0x175b Func
	var_1085_string = var_3_string; // 0x175d PushT
	if(var_1085_string == 0) goto Label_5984; // 0x175e JumpB
	goto Label_5989; // 0x175f Jump
	
Label_5984:
	var_1086_string = "all"; // 0x1760 PushS
	var_1087_string = "idle"; // 0x1761 PushS
	PlayAnimation(var_1086_string, var_1087_string); // 0x1762 Func
	goto Label_5979; // 0x1764 Jump
}


func_6965()
{
	var_184_string = "ood3Georg1"; // 0x1b36 PushS
	var_185_int = 1; // 0x1b37 PushI
	SetVariable(var_184_string, var_185_int); // 0x1b38 Func
	return 0; // 0x1b3a Return
}


func_7478(var_765_bool)
{
	var_767_int = 0; var_768_string = ""; // 0x1d37 PushV
	var_768_string = "d6RubinGoesToGeorg"; // 0x1d38 MovS
	func_6644(var_767_int, var_768_string); // 0x1d39 NEW_2
	var_769_int = 0; // 0x1d3b PushI
	var_770_bool = var_767_int != var_769_int; // 0x1d3c Neq
	if(var_770_bool == 0) goto Label_7488; // 0x1d3d JumpB
	var_765_bool = 1; // 0x1d3e MovB
	return 0; // 0x1d3f Return
	
Label_7488:
	var_765_bool = 0; // 0x1d40 MovB
	return 0; // 0x1d41 Return
}


func_6971()
{
	var_547_string = "ood3Georg2"; // 0x1b3c PushS
	var_548_int = 1; // 0x1b3d PushI
	SetVariable(var_547_string, var_548_int); // 0x1b3e Func
	return 0; // 0x1b40 Return
}


func_1344(var_0_object, var_1_object, var_2_object, var_3_string, var_234_object, var_235_object)
{
	var_0_object = var_235_object; // 0x541 TMov
	var_1_object = var_234_object; // 0x542 TMov
	var_3_string = 0; // 0x543 TMovB
	var_240_int = 1; // 0x544 PushI
	if(var_240_int == 0) goto Label_1521; // 0x545 JumpB
	var_241_bool = 0; var_242_object = Obj(); // 0x546 PushV
	var_242_object = var_1_object; // 0x547 MovT
	func_7310(var_242_object); // 0x548 NEW_2
	if(var_241_bool == 0) goto Label_1390; // 0x54a JumpB
	var_249_object = Obj(); var_250_object = Obj(); // 0x54b PushV
	var_249_object = var_1_object; // 0x54c MovT
	var_250_object = var_0_object; // 0x54d MovT
	func_7039(); // 0x54e NEW_2
	var_253_object = Obj(); var_254_object = Obj(); // 0x550 PushV
	var_253_object = var_1_object; // 0x551 MovT
	var_254_object = var_0_object; // 0x552 MovT
	func_6834(); // 0x553 NEW_2
	var_266_string = ""; // 0x555 PushV
	var_266_string = "Anger"; // 0x556 MovS
	func_1551(var_235_object, var_266_string); // 0x557 NEW_2
	var_283_int = 531566; // 0x559 PushI
	SetMessage(var_283_int); // 0x55a TObjFunc
	ClearReplies(); // 0x55c TObjFunc
	var_284_int = 531567; // 0x55e PushI
	var_285_int = 32927; // 0x55f PushI
	var_286_int = 32926; // 0x560 PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x561 TObjFunc
	var_287_int = 531608; // 0x563 PushI
	var_288_int = 32978; // 0x564 PushI
	var_289_int = 32977; // 0x565 PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0x566 TObjFunc
	var_290_int = 531614; // 0x568 PushI
	var_291_int = 32986; // 0x569 PushI
	var_292_int = 32985; // 0x56a PushI
	AddReply(var_290_int, var_291_int, var_292_int); // 0x56b TObjFunc
	goto Label_1521; // 0x56d Jump
	
Label_1521:
	var_293_bool = 0; // 0x5f1 PushV
	func_6755(var_293_bool); // 0x5f2 NEW_2
	if(var_293_bool == 0) goto Label_1536; // 0x5f4 JumpB
	
Label_1525:
	lshWaitForAnimEnd(); // 0x5f5 Func
	var_294_string = var_3_string; // 0x5f7 PushT
	if(var_294_string == 0) goto Label_1530; // 0x5f8 JumpB
	goto Label_1535; // 0x5f9 Jump
	
Label_1535:
	goto Label_1550; // 0x5ff Jump
	
Label_1550:
	return 0; // 0x60e Return
	
Label_1530:
	var_295_string = ""; // 0x5fa PushV
	var_295_string = var_2_object; // 0x5fb MovT
	func_6575(var_295_string); // 0x5fc NEW_2
	goto Label_1525; // 0x5fe Jump
	
Label_1536:
	var_306_string = "all"; // 0x600 PushS
	var_307_string = "idle"; // 0x601 PushS
	PlayAnimation(var_306_string, var_307_string); // 0x602 Func
	
Label_1540:
	WaitForAnimEnd(); // 0x604 Func
	var_308_string = var_3_string; // 0x606 PushT
	if(var_308_string == 0) goto Label_1545; // 0x607 JumpB
	goto Label_1550; // 0x608 Jump
	
Label_1545:
	var_309_string = "all"; // 0x609 PushS
	var_310_string = "idle"; // 0x60a PushS
	PlayAnimation(var_309_string, var_310_string); // 0x60b Func
	goto Label_1540; // 0x60d Jump
	
Label_1390:
	var_311_bool = 0; var_312_object = Obj(); // 0x56e PushV
	var_312_object = var_1_object; // 0x56f MovT
	func_7141(var_312_object); // 0x570 NEW_2
	if(var_311_bool == 0) goto Label_1415; // 0x572 JumpB
	var_317_string = ""; // 0x573 PushV
	var_317_string = "Neutral"; // 0x574 MovS
	func_1551(var_235_object, var_317_string); // 0x575 NEW_2
	var_318_int = 504850; // 0x577 PushI
	SetMessage(var_318_int); // 0x578 TObjFunc
	ClearReplies(); // 0x57a TObjFunc
	var_319_int = 504879; // 0x57c PushI
	var_320_int = 5370; // 0x57d PushI
	var_321_int = 5353; // 0x57e PushI
	AddReply(var_319_int, var_320_int, var_321_int); // 0x57f TObjFunc
	var_322_int = 504890; // 0x581 PushI
	var_323_int = 5354; // 0x582 PushI
	var_324_int = 5367; // 0x583 PushI
	AddReply(var_322_int, var_323_int, var_324_int); // 0x584 TObjFunc
	goto Label_1521; // 0x586 Jump
	
Label_1415:
	var_325_string = ""; // 0x587 PushV
	var_325_string = "Neutral"; // 0x588 MovS
	func_1551(var_235_object, var_325_string); // 0x589 NEW_2
	var_326_int = 507627; // 0x58b PushI
	SetMessage(var_326_int); // 0x58c TObjFunc
	ClearReplies(); // 0x58e TObjFunc
	var_327_bool = 0; var_328_object = Obj(); // 0x590 PushV
	var_328_object = var_1_object; // 0x591 MovT
	func_7129(var_328_object); // 0x592 NEW_2
	if(var_327_bool == 0) goto Label_1434; // 0x594 JumpB
	var_333_int = 531617; // 0x595 PushI
	var_334_int = 32990; // 0x596 PushI
	var_335_int = 32989; // 0x597 PushI
	AddReply(var_333_int, var_334_int, var_335_int); // 0x598 TObjFunc
	
Label_1434:
	var_336_bool = 0; // 0x59a PushV
	var_336_bool = 0; // 0x59b MovB
	var_337_bool = 0; // 0x59c PushV
	var_337_bool = 0; // 0x59d MovB
	var_338_bool = 0; var_339_object = Obj(); // 0x59e PushV
	var_339_object = var_1_object; // 0x59f MovT
	func_7322(var_339_object); // 0x5a0 NEW_2
	if(var_338_bool == 0) goto Label_1450; // 0x5a2 JumpB
	var_344_bool = 0; var_345_object = Obj(); // 0x5a3 PushV
	var_345_object = var_1_object; // 0x5a4 MovT
	func_7117(var_345_object); // 0x5a5 NEW_2
	var_350_bool = var_344_bool == 0; // 0x5a7 Not
	if(var_350_bool == 0) goto Label_1450; // 0x5a8 JumpB
	var_337_bool = 1; // 0x5a9 MovB
	
Label_1450:
	if(var_337_bool == 0) goto Label_1458; // 0x5aa JumpB
	var_351_bool = 0; var_352_object = Obj(); // 0x5ab PushV
	var_352_object = var_1_object; // 0x5ac MovT
	func_7129(var_352_object); // 0x5ad NEW_2
	var_353_bool = var_351_bool == 0; // 0x5af Not
	if(var_353_bool == 0) goto Label_1458; // 0x5b0 JumpB
	var_336_bool = 1; // 0x5b1 MovB
	
Label_1458:
	if(var_336_bool == 0) goto Label_1464; // 0x5b2 JumpB
	var_354_int = 507632; // 0x5b3 PushI
	var_355_int = 5334; // 0x5b4 PushI
	var_356_int = 8421; // 0x5b5 PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0x5b6 TObjFunc
	
Label_1464:
	var_357_bool = 0; // 0x5b8 PushV
	var_357_bool = 0; // 0x5b9 MovB
	var_358_bool = 0; // 0x5ba PushV
	var_358_bool = 0; // 0x5bb MovB
	var_359_bool = 0; var_360_object = Obj(); // 0x5bc PushV
	var_360_object = var_1_object; // 0x5bd MovT
	func_7286(var_360_object); // 0x5be NEW_2
	if(var_359_bool == 0) goto Label_1480; // 0x5c0 JumpB
	var_365_bool = 0; var_366_object = Obj(); // 0x5c1 PushV
	var_366_object = var_1_object; // 0x5c2 MovT
	func_7129(var_366_object); // 0x5c3 NEW_2
	var_367_bool = var_365_bool == 0; // 0x5c5 Not
	if(var_367_bool == 0) goto Label_1480; // 0x5c6 JumpB
	var_358_bool = 1; // 0x5c7 MovB
	
Label_1480:
	if(var_358_bool == 0) goto Label_1488; // 0x5c8 JumpB
	var_368_bool = 0; var_369_object = Obj(); // 0x5c9 PushV
	var_369_object = var_1_object; // 0x5ca MovT
	func_7117(var_369_object); // 0x5cb NEW_2
	var_370_bool = var_368_bool == 0; // 0x5cd Not
	if(var_370_bool == 0) goto Label_1488; // 0x5ce JumpB
	var_357_bool = 1; // 0x5cf MovB
	
Label_1488:
	if(var_357_bool == 0) goto Label_1494; // 0x5d0 JumpB
	var_371_int = 531620; // 0x5d1 PushI
	var_372_int = 32993; // 0x5d2 PushI
	var_373_int = 32992; // 0x5d3 PushI
	AddReply(var_371_int, var_372_int, var_373_int); // 0x5d4 TObjFunc
	
Label_1494:
	var_374_bool = 0; // 0x5d6 PushV
	var_374_bool = 0; // 0x5d7 MovB
	var_375_bool = 0; var_376_object = Obj(); // 0x5d8 PushV
	var_376_object = var_1_object; // 0x5d9 MovT
	func_7153(var_376_object); // 0x5da NEW_2
	if(var_375_bool == 0) goto Label_1507; // 0x5dc JumpB
	var_381_bool = 0; var_382_object = Obj(); // 0x5dd PushV
	var_382_object = var_1_object; // 0x5de MovT
	func_7298(var_382_object); // 0x5df NEW_2
	if(var_381_bool == 0) goto Label_1507; // 0x5e1 JumpB
	var_374_bool = 1; // 0x5e2 MovB
	
Label_1507:
	if(var_374_bool == 0) goto Label_1513; // 0x5e3 JumpB
	var_387_int = 531622; // 0x5e4 PushI
	var_388_int = 32995; // 0x5e5 PushI
	var_389_int = 32994; // 0x5e6 PushI
	AddReply(var_387_int, var_388_int, var_389_int); // 0x5e7 TObjFunc
	
Label_1513:
	var_390_int = 507658; // 0x5e9 PushI
	var_391_int = -1; // 0x5ea PushI
	var_392_int = 8451; // 0x5eb PushI
	AddReply(var_390_int, var_391_int, var_392_int); // 0x5ec TObjFunc
	goto Label_1521; // 0x5ee Jump
}


func_3393(var_2_object, var_447_string)
{
	var_448_bool = 0; // 0xd42 PushV
	func_6755(var_448_bool); // 0xd43 NEW_2
	var_449_bool = var_448_bool == 0; // 0xd45 Not
	if(var_449_bool == 0) goto Label_3400; // 0xd46 JumpB
	return 0; // 0xd47 Return
	
Label_3400:
	var_450_bool = var_447_string == var_2_object; // 0xd48 Eq
	if(var_450_bool == 0) goto Label_3403; // 0xd49 JumpB
	return 0; // 0xd4a Return
	
Label_3403:
	var_451_string = ""; var_452_bool = 0; // 0xd4b PushV
	var_451_string = var_447_string; // 0xd4c Mov
	var_453_string = ""; // 0xd4d PushS
	var_454_bool = var_447_string == var_453_string; // 0xd4e Eq
	if(var_454_bool == 0) goto Label_3410; // 0xd4f JumpB
	var_452_bool = 0; // 0xd50 MovB
	goto Label_3411; // 0xd51 Jump
	
Label_3411:
	func_6591(var_451_string, var_452_bool); // 0xd53 NEW_2
	var_2_object = var_447_string; // 0xd55 TMov
	return 0; // 0xd56 Return
	
Label_3410:
	var_452_bool = 1; // 0xd52 MovB
}


func_7490(var_771_bool)
{
	var_773_int = 0; var_774_string = ""; // 0x1d43 PushV
	var_774_string = "ood6Georg3"; // 0x1d44 MovS
	func_6644(var_773_int, var_774_string); // 0x1d45 NEW_2
	var_775_int = 0; // 0x1d47 PushI
	var_776_bool = var_773_int == var_775_int; // 0x1d48 Eq
	if(var_776_bool == 0) goto Label_7500; // 0x1d49 JumpB
	var_771_bool = 1; // 0x1d4a MovB
	return 0; // 0x1d4b Return
	
Label_7500:
	var_771_bool = 0; // 0x1d4c MovB
	return 0; // 0x1d4d Return
}


func_6977()
{
	var_54_object = Obj(); var_55_object = Obj(); // 0x1b41 PushV
	var_56_string = "d3q02"; // 0x1b42 PushS
	var_57_int = 1; // 0x1b43 PushI
	SetVariable(var_56_string, var_57_int); // 0x1b44 Func
	var_58_object = Obj(); // 0x1b46 PushV
	func_7697(var_58_object); // 0x1b47 NEW_2
	var_55_object = var_58_object; // 0x1b48 Mov
	var_65_string = "d3q02GeorgGotoViktor"; // 0x1b4a PushS
	var_66_string = "pt_map_viktor"; // 0x1b4b PushS
	var_67_int = 0; // 0x1b4c PushI
	var_68_int = 511379; // 0x1b4d PushI
	var_69_float = 0; // 0x1b4e PushV
	func_6703(var_69_float); // 0x1b4f NEW_2
	AddMark(var_65_string, var_66_string, var_67_int, var_68_int, var_69_float); // 0x1b51 ObjFunc
	func_7604(); // 0x1b54 NEW_2
	func_7630(); // 0x1b57 NEW_2
	var_103_object = Obj(); var_104_string = ""; // 0x1b59 PushV
	var_104_string = "quest_d3_02"; // 0x1b5a MovS
	func_6649(var_103_object, var_104_string); // 0x1b5b NEW_2
	return 2; // 0x1b5d Return
}


func_845(var_0_object, var_1_object, var_2_object, var_3_string, var_748_object, var_749_object)
{
	var_0_object = var_749_object; // 0x34e TMov
	var_1_object = var_748_object; // 0x34f TMov
	var_3_string = 0; // 0x350 TMovB
	var_754_int = 1; // 0x351 PushI
	if(var_754_int == 0) goto Label_927; // 0x352 JumpB
	var_755_string = ""; // 0x353 PushV
	var_755_string = "Neutral"; // 0x354 MovS
	func_957(var_749_object, var_755_string); // 0x355 NEW_2
	var_763_int = 512009; // 0x357 PushI
	SetMessage(var_763_int); // 0x358 TObjFunc
	ClearReplies(); // 0x35a TObjFunc
	var_764_bool = 0; // 0x35c PushV
	var_764_bool = 0; // 0x35d MovB
	var_765_bool = 0; var_766_object = Obj(); // 0x35e PushV
	var_766_object = var_1_object; // 0x35f MovT
	func_7478(var_766_object); // 0x360 NEW_2
	if(var_765_bool == 0) goto Label_873; // 0x362 JumpB
	var_771_bool = 0; var_772_object = Obj(); // 0x363 PushV
	var_772_object = var_1_object; // 0x364 MovT
	func_7490(var_772_object); // 0x365 NEW_2
	if(var_771_bool == 0) goto Label_873; // 0x367 JumpB
	var_764_bool = 1; // 0x368 MovB
	
Label_873:
	if(var_764_bool == 0) goto Label_879; // 0x369 JumpB
	var_777_int = 512010; // 0x36a PushI
	var_778_int = 13230; // 0x36b PushI
	var_779_int = 13228; // 0x36c PushI
	AddReply(var_777_int, var_778_int, var_779_int); // 0x36d TObjFunc
	
Label_879:
	var_780_bool = 0; // 0x36f PushV
	var_780_bool = 0; // 0x370 MovB
	var_781_bool = 0; // 0x371 PushV
	var_781_bool = 0; // 0x372 MovB
	var_782_bool = 0; // 0x373 PushV
	var_782_bool = 0; // 0x374 MovB
	var_783_bool = 0; var_784_object = Obj(); // 0x375 PushV
	var_784_object = var_1_object; // 0x376 MovT
	func_7430(var_784_object); // 0x377 NEW_2
	var_789_bool = var_783_bool == 0; // 0x379 Not
	if(var_789_bool == 0) goto Label_898; // 0x37a JumpB
	var_790_bool = 0; var_791_object = Obj(); // 0x37b PushV
	var_791_object = var_1_object; // 0x37c MovT
	func_7442(var_791_object); // 0x37d NEW_2
	var_796_bool = var_790_bool == 0; // 0x37f Not
	if(var_796_bool == 0) goto Label_898; // 0x380 JumpB
	var_782_bool = 1; // 0x381 MovB
	
Label_898:
	if(var_782_bool == 0) goto Label_906; // 0x382 JumpB
	var_797_bool = 0; var_798_object = Obj(); // 0x383 PushV
	var_798_object = var_1_object; // 0x384 MovT
	func_7454(var_798_object); // 0x385 NEW_2
	var_803_bool = var_797_bool == 0; // 0x387 Not
	if(var_803_bool == 0) goto Label_906; // 0x388 JumpB
	var_781_bool = 1; // 0x389 MovB
	
Label_906:
	if(var_781_bool == 0) goto Label_913; // 0x38a JumpB
	var_804_bool = 0; var_805_object = Obj(); // 0x38b PushV
	var_805_object = var_1_object; // 0x38c MovT
	func_7466(var_805_object); // 0x38d NEW_2
	if(var_804_bool == 0) goto Label_913; // 0x38f JumpB
	var_780_bool = 1; // 0x390 MovB
	
Label_913:
	if(var_780_bool == 0) goto Label_919; // 0x391 JumpB
	var_810_int = 512014; // 0x392 PushI
	var_811_int = 13233; // 0x393 PushI
	var_812_int = 13232; // 0x394 PushI
	AddReply(var_810_int, var_811_int, var_812_int); // 0x395 TObjFunc
	
Label_919:
	var_813_int = 512011; // 0x397 PushI
	var_814_int = -1; // 0x398 PushI
	var_815_int = 13229; // 0x399 PushI
	AddReply(var_813_int, var_814_int, var_815_int); // 0x39a TObjFunc
	goto Label_927; // 0x39c Jump
	
Label_927:
	var_816_bool = 0; // 0x39f PushV
	func_6755(var_816_bool); // 0x3a0 NEW_2
	if(var_816_bool == 0) goto Label_942; // 0x3a2 JumpB
	
Label_931:
	lshWaitForAnimEnd(); // 0x3a3 Func
	var_817_string = var_3_string; // 0x3a5 PushT
	if(var_817_string == 0) goto Label_936; // 0x3a6 JumpB
	goto Label_941; // 0x3a7 Jump
	
Label_941:
	goto Label_956; // 0x3ad Jump
	
Label_956:
	return 0; // 0x3bc Return
	
Label_936:
	var_818_string = ""; // 0x3a8 PushV
	var_818_string = var_2_object; // 0x3a9 MovT
	func_6575(var_818_string); // 0x3aa NEW_2
	goto Label_931; // 0x3ac Jump
	
Label_942:
	var_819_string = "all"; // 0x3ae PushS
	var_820_string = "idle"; // 0x3af PushS
	PlayAnimation(var_819_string, var_820_string); // 0x3b0 Func
	
Label_946:
	WaitForAnimEnd(); // 0x3b2 Func
	var_821_string = var_3_string; // 0x3b4 PushT
	if(var_821_string == 0) goto Label_951; // 0x3b5 JumpB
	goto Label_956; // 0x3b6 Jump
	
Label_951:
	var_822_string = "all"; // 0x3b7 PushS
	var_823_string = "idle"; // 0x3b8 PushS
	PlayAnimation(var_822_string, var_823_string); // 0x3b9 Func
	goto Label_946; // 0x3bb Jump
}


func_5453(var_0_object, var_1_object, var_2_object, var_3_string, var_852_object, var_853_object)
{
	var_0_object = var_853_object; // 0x154e TMov
	var_1_object = var_852_object; // 0x154f TMov
	var_3_string = 0; // 0x1550 TMovB
	var_858_int = 1; // 0x1551 PushI
	if(var_858_int == 0) goto Label_5520; // 0x1552 JumpB
	var_859_bool = 0; // 0x1553 PushV
	var_859_bool = 0; // 0x1554 MovB
	var_860_bool = 0; var_861_object = Obj(); // 0x1555 PushV
	var_861_object = var_1_object; // 0x1556 MovT
	func_7502(var_861_object); // 0x1557 NEW_2
	if(var_860_bool == 0) goto Label_5472; // 0x1559 JumpB
	var_866_bool = 0; var_867_object = Obj(); // 0x155a PushV
	var_867_object = var_1_object; // 0x155b MovT
	func_7514(var_867_object); // 0x155c NEW_2
	if(var_866_bool == 0) goto Label_5472; // 0x155e JumpB
	var_859_bool = 1; // 0x155f MovB
	
Label_5472:
	if(var_859_bool == 0) goto Label_5498; // 0x1560 JumpB
	var_872_object = Obj(); var_873_object = Obj(); // 0x1561 PushV
	var_872_object = var_1_object; // 0x1562 MovT
	var_873_object = var_0_object; // 0x1563 MovT
	func_7105(); // 0x1564 NEW_2
	var_876_string = ""; // 0x1566 PushV
	var_876_string = "Neutral"; // 0x1567 MovS
	func_5550(var_853_object, var_876_string); // 0x1568 NEW_2
	var_884_int = 512258; // 0x156a PushI
	SetMessage(var_884_int); // 0x156b TObjFunc
	ClearReplies(); // 0x156d TObjFunc
	var_885_int = 512259; // 0x156f PushI
	var_886_int = 13417; // 0x1570 PushI
	var_887_int = 13416; // 0x1571 PushI
	AddReply(var_885_int, var_886_int, var_887_int); // 0x1572 TObjFunc
	var_888_int = 541804; // 0x1574 PushI
	var_889_int = -1; // 0x1575 PushI
	var_890_int = 44016; // 0x1576 PushI
	AddReply(var_888_int, var_889_int, var_890_int); // 0x1577 TObjFunc
	goto Label_5520; // 0x1579 Jump
	
Label_5520:
	var_891_bool = 0; // 0x1590 PushV
	func_6755(var_891_bool); // 0x1591 NEW_2
	if(var_891_bool == 0) goto Label_5535; // 0x1593 JumpB
	
Label_5524:
	lshWaitForAnimEnd(); // 0x1594 Func
	var_892_string = var_3_string; // 0x1596 PushT
	if(var_892_string == 0) goto Label_5529; // 0x1597 JumpB
	goto Label_5534; // 0x1598 Jump
	
Label_5534:
	goto Label_5549; // 0x159e Jump
	
Label_5549:
	return 0; // 0x15ad Return
	
Label_5529:
	var_893_string = ""; // 0x1599 PushV
	var_893_string = var_2_object; // 0x159a MovT
	func_6575(var_893_string); // 0x159b NEW_2
	goto Label_5524; // 0x159d Jump
	
Label_5535:
	var_894_string = "all"; // 0x159f PushS
	var_895_string = "idle"; // 0x15a0 PushS
	PlayAnimation(var_894_string, var_895_string); // 0x15a1 Func
	
Label_5539:
	WaitForAnimEnd(); // 0x15a3 Func
	var_896_string = var_3_string; // 0x15a5 PushT
	if(var_896_string == 0) goto Label_5544; // 0x15a6 JumpB
	goto Label_5549; // 0x15a7 Jump
	
Label_5544:
	var_897_string = "all"; // 0x15a8 PushS
	var_898_string = "idle"; // 0x15a9 PushS
	PlayAnimation(var_897_string, var_898_string); // 0x15aa Func
	goto Label_5539; // 0x15ac Jump
	
Label_5498:
	var_899_string = ""; // 0x157a PushV
	var_899_string = "Neutral"; // 0x157b MovS
	func_5550(var_853_object, var_899_string); // 0x157c NEW_2
	var_900_int = 513775; // 0x157e PushI
	SetMessage(var_900_int); // 0x157f TObjFunc
	ClearReplies(); // 0x1581 TObjFunc
	var_901_int = 513776; // 0x1583 PushI
	var_902_int = -1; // 0x1584 PushI
	var_903_int = 15012; // 0x1585 PushI
	AddReply(var_901_int, var_902_int, var_903_int); // 0x1586 TObjFunc
	var_904_int = 541596; // 0x1588 PushI
	var_905_int = -1; // 0x1589 PushI
	var_906_int = 43760; // 0x158a PushI
	AddReply(var_904_int, var_905_int, var_906_int); // 0x158b TObjFunc
	goto Label_5520; // 0x158d Jump
}


func_7502(var_860_bool)
{
	var_862_int = 0; var_863_string = ""; // 0x1d4f PushV
	var_863_string = "d8KainIsReason"; // 0x1d50 MovS
	func_6644(var_862_int, var_863_string); // 0x1d51 NEW_2
	var_864_int = 1; // 0x1d53 PushI
	var_865_bool = var_862_int == var_864_int; // 0x1d54 Eq
	if(var_865_bool == 0) goto Label_7512; // 0x1d55 JumpB
	var_860_bool = 1; // 0x1d56 MovB
	return 0; // 0x1d57 Return
	
Label_7512:
	var_860_bool = 0; // 0x1d58 MovB
	return 0; // 0x1d59 Return
}


func_7514(var_866_bool)
{
	var_868_int = 0; var_869_string = ""; // 0x1d5b PushV
	var_869_string = "ood8Georg1"; // 0x1d5c MovS
	func_6644(var_868_int, var_869_string); // 0x1d5d NEW_2
	var_870_int = 0; // 0x1d5f PushI
	var_871_bool = var_868_int == var_870_int; // 0x1d60 Eq
	if(var_871_bool == 0) goto Label_7524; // 0x1d61 JumpB
	var_866_bool = 1; // 0x1d62 MovB
	return 0; // 0x1d63 Return
	
Label_7524:
	var_866_bool = 0; // 0x1d64 MovB
	return 0; // 0x1d65 Return
}


func_7007()
{
	func_7643(); // 0x1b61 NEW_2
	var_206_bool = 0; var_207_string = ""; var_208_string = ""; // 0x1b63 PushV
	var_207_string = "quest_d3_02"; // 0x1b64 MovS
	var_208_string = "completed"; // 0x1b65 MovS
	func_6691(var_206_bool, var_207_string, var_208_string); // 0x1b66 NEW_2
	return 0; // 0x1b68 Return
}


func_6495(var_155_bool)
{
	var_157_string = ""; var_158_int = 0; var_159_bool = 0; var_160_int = 0; var_161_string = ""; var_162_string = ""; var_163_int = 0; var_164_bool = 0; var_165_int = 0; var_166_string = ""; // 0x195f PushV
	var_162_string = "c"; // 0x1960 MovS
	var_163_int = 0; // 0x1961 MovI
	
Label_6498:
	var_167_int = 1; // 0x1962 PushI
	if(var_167_int == 0) goto Label_6511; // 0x1963 JumpB
	var_168_int = 1; // 0x1964 PushI
	var_169_int = var_163_int + var_168_int; // 0x1965 Add
	var_170_int = var_162_string + var_169_int; // 0x1966 Add
	HasProperty(var_170_int, var_164_bool); // 0x1967 ObjFunc
	var_171_bool = var_164_bool == 0; // 0x1969 Not
	if(var_171_bool == 0) goto Label_6508; // 0x196a JumpB
	goto Label_6511; // 0x196b Jump
	
Label_6511:
	var_172_bool = var_163_int == 0; // 0x196f Not
	if(var_172_bool == 0) goto Label_6515; // 0x1970 JumpB
	var_155_bool = 0; // 0x1971 MovB
	return 10; // 0x1972 Return
	
Label_6515:
	var_165_int = 0; // 0x1973 MovI
	var_173_int = 1; // 0x1974 PushI
	var_174_bool = var_163_int > var_173_int; // 0x1975 GT
	if(var_174_bool == 0) goto Label_6521; // 0x1976 JumpB
	irand(var_165_int, var_163_int); // 0x1977 Func
	
Label_6521:
	var_175_int = 1; // 0x1979 PushI
	var_176_int = var_165_int + var_175_int; // 0x197a Add
	var_177_int = var_162_string + var_176_int; // 0x197b Add
	GetProperty(var_177_int, var_166_string); // 0x197c ObjFunc
	var_178_bool = 0; var_179_string = ""; // 0x197e PushV
	var_179_string = var_166_string; // 0x197f Mov
	func_6606(var_178_bool, var_179_string); // 0x1980 NEW_2
	var_155_bool = var_178_bool; // 0x1981 Mov
	return 10; // 0x1983 Return
	
Label_6508:
	var_184_int = 1; // 0x196c PushI
	var_163_int = var_163_int + var_184_int; // 0x196d Add2
	goto Label_6498; // 0x196e Jump
}


func_3937(var_0_object, var_1_object, var_2_object, var_3_string, var_528_object, var_529_object)
{
	var_0_object = var_529_object; // 0xf62 TMov
	var_1_object = var_528_object; // 0xf63 TMov
	var_3_string = 0; // 0xf64 TMovB
	var_534_int = 1; // 0xf65 PushI
	if(var_534_int == 0) goto Label_4071; // 0xf66 JumpB
	var_535_bool = 0; var_536_object = Obj(); // 0xf67 PushV
	var_536_object = var_1_object; // 0xf68 MovT
	func_7346(var_536_object); // 0xf69 NEW_2
	if(var_535_bool == 0) goto Label_3973; // 0xf6b JumpB
	var_541_object = Obj(); var_542_object = Obj(); // 0xf6c PushV
	var_541_object = var_1_object; // 0xf6d MovT
	var_542_object = var_0_object; // 0xf6e MovT
	func_7111(); // 0xf6f NEW_2
	var_545_object = Obj(); var_546_object = Obj(); // 0xf71 PushV
	var_545_object = var_1_object; // 0xf72 MovT
	var_546_object = var_0_object; // 0xf73 MovT
	func_6971(); // 0xf74 NEW_2
	var_549_string = ""; // 0xf76 PushV
	var_549_string = "Neutral"; // 0xf77 MovS
	func_4101(var_529_object, var_549_string); // 0xf78 NEW_2
	var_557_int = 509043; // 0xf7a PushI
	SetMessage(var_557_int); // 0xf7b TObjFunc
	ClearReplies(); // 0xf7d TObjFunc
	var_558_int = 509044; // 0xf7f PushI
	var_559_int = 9921; // 0xf80 PushI
	var_560_int = 9920; // 0xf81 PushI
	AddReply(var_558_int, var_559_int, var_560_int); // 0xf82 TObjFunc
	goto Label_4071; // 0xf84 Jump
	
Label_4071:
	var_561_bool = 0; // 0xfe7 PushV
	func_6755(var_561_bool); // 0xfe8 NEW_2
	if(var_561_bool == 0) goto Label_4086; // 0xfea JumpB
	
Label_4075:
	lshWaitForAnimEnd(); // 0xfeb Func
	var_562_string = var_3_string; // 0xfed PushT
	if(var_562_string == 0) goto Label_4080; // 0xfee JumpB
	goto Label_4085; // 0xfef Jump
	
Label_4085:
	goto Label_4100; // 0xff5 Jump
	
Label_4100:
	return 0; // 0x1004 Return
	
Label_4080:
	var_563_string = ""; // 0xff0 PushV
	var_563_string = var_2_object; // 0xff1 MovT
	func_6575(var_563_string); // 0xff2 NEW_2
	goto Label_4075; // 0xff4 Jump
	
Label_4086:
	var_564_string = "all"; // 0xff6 PushS
	var_565_string = "idle"; // 0xff7 PushS
	PlayAnimation(var_564_string, var_565_string); // 0xff8 Func
	
Label_4090:
	WaitForAnimEnd(); // 0xffa Func
	var_566_string = var_3_string; // 0xffc PushT
	if(var_566_string == 0) goto Label_4095; // 0xffd JumpB
	goto Label_4100; // 0xffe Jump
	
Label_4095:
	var_567_string = "all"; // 0xfff PushS
	var_568_string = "idle"; // 0x1000 PushS
	PlayAnimation(var_567_string, var_568_string); // 0x1001 Func
	goto Label_4090; // 0x1003 Jump
	
Label_3973:
	var_569_object = Obj(); var_570_object = Obj(); // 0xf85 PushV
	var_569_object = var_1_object; // 0xf86 MovT
	var_570_object = var_0_object; // 0xf87 MovT
	func_7111(); // 0xf88 NEW_2
	var_571_string = ""; // 0xf8a PushV
	var_571_string = "Neutral"; // 0xf8b MovS
	func_4101(var_529_object, var_571_string); // 0xf8c NEW_2
	var_572_int = 509024; // 0xf8e PushI
	SetMessage(var_572_int); // 0xf8f TObjFunc
	ClearReplies(); // 0xf91 TObjFunc
	var_573_bool = 0; var_574_object = Obj(); // 0xf93 PushV
	var_574_object = var_1_object; // 0xf94 MovT
	func_7370(var_574_object); // 0xf95 NEW_2
	if(var_573_bool == 0) goto Label_3997; // 0xf97 JumpB
	var_579_int = 511376; // 0xf98 PushI
	var_580_int = 9899; // 0xf99 PushI
	var_581_int = 12575; // 0xf9a PushI
	AddReply(var_579_int, var_580_int, var_581_int); // 0xf9b TObjFunc
	
Label_3997:
	var_582_bool = 0; // 0xf9d PushV
	var_582_bool = 0; // 0xf9e MovB
	var_583_bool = 0; var_584_object = Obj(); // 0xf9f PushV
	var_584_object = var_1_object; // 0xfa0 MovT
	func_7334(var_584_object); // 0xfa1 NEW_2
	if(var_583_bool == 0) goto Label_4010; // 0xfa3 JumpB
	var_589_bool = 0; var_590_object = Obj(); // 0xfa4 PushV
	var_590_object = var_1_object; // 0xfa5 MovT
	func_7177(var_590_object); // 0xfa6 NEW_2
	if(var_589_bool == 0) goto Label_4010; // 0xfa8 JumpB
	var_582_bool = 1; // 0xfa9 MovB
	
Label_4010:
	if(var_582_bool == 0) goto Label_4016; // 0xfaa JumpB
	var_595_int = 509042; // 0xfab PushI
	var_596_int = 9941; // 0xfac PushI
	var_597_int = 9918; // 0xfad PushI
	AddReply(var_595_int, var_596_int, var_597_int); // 0xfae TObjFunc
	
Label_4016:
	var_598_bool = 0; // 0xfb0 PushV
	var_598_bool = 0; // 0xfb1 MovB
	var_599_bool = 0; // 0xfb2 PushV
	var_599_bool = 0; // 0xfb3 MovB
	var_600_bool = 0; var_601_object = Obj(); // 0xfb4 PushV
	var_601_object = var_1_object; // 0xfb5 MovT
	func_7382(var_601_object); // 0xfb6 NEW_2
	if(var_600_bool == 0) goto Label_4031; // 0xfb8 JumpB
	var_606_bool = 0; var_607_object = Obj(); // 0xfb9 PushV
	var_607_object = var_1_object; // 0xfba MovT
	func_7394(var_607_object); // 0xfbb NEW_2
	if(var_606_bool == 0) goto Label_4031; // 0xfbd JumpB
	var_599_bool = 1; // 0xfbe MovB
	
Label_4031:
	if(var_599_bool == 0) goto Label_4038; // 0xfbf JumpB
	var_612_bool = 0; var_613_object = Obj(); // 0xfc0 PushV
	var_613_object = var_1_object; // 0xfc1 MovT
	func_7189(var_613_object); // 0xfc2 NEW_2
	if(var_612_bool == 0) goto Label_4038; // 0xfc4 JumpB
	var_598_bool = 1; // 0xfc5 MovB
	
Label_4038:
	if(var_598_bool == 0) goto Label_4044; // 0xfc6 JumpB
	var_631_int = 510442; // 0xfc7 PushI
	var_632_int = 11512; // 0xfc8 PushI
	var_633_int = 11511; // 0xfc9 PushI
	AddReply(var_631_int, var_632_int, var_633_int); // 0xfca TObjFunc
	
Label_4044:
	var_634_bool = 0; // 0xfcc PushV
	var_634_bool = 0; // 0xfcd MovB
	var_635_bool = 0; var_636_object = Obj(); // 0xfce PushV
	var_636_object = var_1_object; // 0xfcf MovT
	func_7358(var_636_object); // 0xfd0 NEW_2
	if(var_635_bool == 0) goto Label_4057; // 0xfd2 JumpB
	var_641_bool = 0; var_642_object = Obj(); // 0xfd3 PushV
	var_642_object = var_1_object; // 0xfd4 MovT
	func_7189(var_642_object); // 0xfd5 NEW_2
	if(var_641_bool == 0) goto Label_4057; // 0xfd7 JumpB
	var_634_bool = 1; // 0xfd8 MovB
	
Label_4057:
	if(var_634_bool == 0) goto Label_4063; // 0xfd9 JumpB
	var_643_int = 509034; // 0xfda PushI
	var_644_int = 9910; // 0xfdb PushI
	var_645_int = 9909; // 0xfdc PushI
	AddReply(var_643_int, var_644_int, var_645_int); // 0xfdd TObjFunc
	
Label_4063:
	var_646_int = 511147; // 0xfdf PushI
	var_647_int = -1; // 0xfe0 PushI
	var_648_int = 12337; // 0xfe1 PushI
	AddReply(var_646_int, var_647_int, var_648_int); // 0xfe2 TObjFunc
	goto Label_4071; // 0xfe4 Jump
}


func_5990(var_2_object, var_1065_string)
{
	var_1066_bool = 0; // 0x1767 PushV
	func_6755(var_1066_bool); // 0x1768 NEW_2
	var_1067_bool = var_1066_bool == 0; // 0x176a Not
	if(var_1067_bool == 0) goto Label_5997; // 0x176b JumpB
	return 0; // 0x176c Return
	
Label_5997:
	var_1068_bool = var_1065_string == var_2_object; // 0x176d Eq
	if(var_1068_bool == 0) goto Label_6000; // 0x176e JumpB
	return 0; // 0x176f Return
	
Label_6000:
	var_1069_string = ""; var_1070_bool = 0; // 0x1770 PushV
	var_1069_string = var_1065_string; // 0x1771 Mov
	var_1071_string = ""; // 0x1772 PushS
	var_1072_bool = var_1065_string == var_1071_string; // 0x1773 Eq
	if(var_1072_bool == 0) goto Label_6007; // 0x1774 JumpB
	var_1070_bool = 0; // 0x1775 MovB
	goto Label_6008; // 0x1776 Jump
	
Label_6008:
	func_6591(var_1069_string, var_1070_bool); // 0x1778 NEW_2
	var_2_object = var_1065_string; // 0x177a TMov
	return 0; // 0x177b Return
	
Label_6007:
	var_1070_bool = 1; // 0x1777 MovB
}


func_7526()
{
	var_72_object = Obj(); var_73_object = Obj(); // 0x1d66 PushV
	var_74_int = 670; // 0x1d67 PushI
	var_75_int = 2; // 0x1d68 PushI
	var_76_int = 534124; // 0x1d69 PushI
	CreateDiaryEntry(var_73_object, var_74_int, var_75_int, var_76_int); // 0x1d6a Func
	var_77_bool = 0; var_78_object = Obj(); var_79_int = 0; // 0x1d6c PushV
	var_78_object = var_73_object; // 0x1d6d Mov
	var_79_int = 666; // 0x1d6e MovI
	func_7669(var_77_bool, var_78_object, var_79_int); // 0x1d6f NEW_2
	return 2; // 0x1d71 Return
}


func_7017()
{
	var_110_object = Obj(); var_111_string = ""; var_112_float = 0; // 0x1b6a PushV
	var_113_object = Obj(); // 0x1b6b PushV
	func_7697(var_113_object); // 0x1b6c NEW_2
	var_110_object = var_113_object; // 0x1b6d Mov
	var_111_string = "pt_map_viktor"; // 0x1b6f MovS
	var_112_float = 2; // 0x1b70 MovI
	func_7714(var_110_object, var_111_string, var_112_float); // 0x1b71 NEW_2
	var_133_object = Obj(); // 0x1b73 PushV
	func_7697(var_133_object); // 0x1b74 NEW_2
	ShowMap(var_133_object); // 0x1b76 ObjFunc
	return 0; // 0x1b78 Return
}


func_7539()
{
	var_77_object = Obj(); var_78_object = Obj(); // 0x1d73 PushV
	var_79_int = 2; // 0x1d74 PushI
	var_80_int = 1; // 0x1d75 PushI
	var_81_int = 503073; // 0x1d76 PushI
	CreateDiaryEntry(var_78_object, var_79_int, var_80_int, var_81_int); // 0x1d77 Func
	var_82_bool = 0; var_83_object = Obj(); var_84_int = 0; // 0x1d79 PushV
	var_83_object = var_78_object; // 0x1d7a Mov
	var_84_int = -1; // 0x1d7b MovI
	func_7669(var_82_bool, var_83_object, var_84_int); // 0x1d7c NEW_2
	return 2; // 0x1d7e Return
}


func_4982(var_0_object, var_1_object, var_2_object, var_3_string, var_677_object, var_678_object)
{
	var_0_object = var_678_object; // 0x1377 TMov
	var_1_object = var_677_object; // 0x1378 TMov
	var_3_string = 0; // 0x1379 TMovB
	var_683_int = 1; // 0x137a PushI
	if(var_683_int == 0) goto Label_5024; // 0x137b JumpB
	var_684_string = ""; // 0x137c PushV
	var_684_string = "Neutral"; // 0x137d MovS
	func_5054(var_678_object, var_684_string); // 0x137e NEW_2
	var_692_int = 511791; // 0x1380 PushI
	SetMessage(var_692_int); // 0x1381 TObjFunc
	ClearReplies(); // 0x1383 TObjFunc
	var_693_bool = 0; // 0x1385 PushV
	var_693_bool = 0; // 0x1386 MovB
	var_694_bool = 0; var_695_object = Obj(); // 0x1387 PushV
	var_695_object = var_1_object; // 0x1388 MovT
	func_7418(var_695_object); // 0x1389 NEW_2
	if(var_694_bool == 0) goto Label_5010; // 0x138b JumpB
	var_700_bool = 0; var_701_object = Obj(); // 0x138c PushV
	var_701_object = var_1_object; // 0x138d MovT
	func_7406(var_701_object); // 0x138e NEW_2
	if(var_700_bool == 0) goto Label_5010; // 0x1390 JumpB
	var_693_bool = 1; // 0x1391 MovB
	
Label_5010:
	if(var_693_bool == 0) goto Label_5016; // 0x1392 JumpB
	var_706_int = 511792; // 0x1393 PushI
	var_707_int = 13003; // 0x1394 PushI
	var_708_int = 13002; // 0x1395 PushI
	AddReply(var_706_int, var_707_int, var_708_int); // 0x1396 TObjFunc
	
Label_5016:
	var_709_int = 511794; // 0x1398 PushI
	var_710_int = -1; // 0x1399 PushI
	var_711_int = 13004; // 0x139a PushI
	AddReply(var_709_int, var_710_int, var_711_int); // 0x139b TObjFunc
	goto Label_5024; // 0x139d Jump
	
Label_5024:
	var_712_bool = 0; // 0x13a0 PushV
	func_6755(var_712_bool); // 0x13a1 NEW_2
	if(var_712_bool == 0) goto Label_5039; // 0x13a3 JumpB
	
Label_5028:
	lshWaitForAnimEnd(); // 0x13a4 Func
	var_713_string = var_3_string; // 0x13a6 PushT
	if(var_713_string == 0) goto Label_5033; // 0x13a7 JumpB
	goto Label_5038; // 0x13a8 Jump
	
Label_5038:
	goto Label_5053; // 0x13ae Jump
	
Label_5053:
	return 0; // 0x13bd Return
	
Label_5033:
	var_714_string = ""; // 0x13a9 PushV
	var_714_string = var_2_object; // 0x13aa MovT
	func_6575(var_714_string); // 0x13ab NEW_2
	goto Label_5028; // 0x13ad Jump
	
Label_5039:
	var_715_string = "all"; // 0x13af PushS
	var_716_string = "idle"; // 0x13b0 PushS
	PlayAnimation(var_715_string, var_716_string); // 0x13b1 Func
	
Label_5043:
	WaitForAnimEnd(); // 0x13b3 Func
	var_717_string = var_3_string; // 0x13b5 PushT
	if(var_717_string == 0) goto Label_5048; // 0x13b6 JumpB
	goto Label_5053; // 0x13b7 Jump
	
Label_5048:
	var_718_string = "all"; // 0x13b8 PushS
	var_719_string = "idle"; // 0x13b9 PushS
	PlayAnimation(var_718_string, var_719_string); // 0x13ba Func
	goto Label_5043; // 0x13bc Jump
}


func_7033()
{
	var_190_string = "ood3Georg3"; // 0x1b7a PushS
	var_191_int = 1; // 0x1b7b PushI
	SetVariable(var_190_string, var_191_int); // 0x1b7c Func
	return 0; // 0x1b7e Return
}


func_7039()
{
	var_251_string = "ood1Georg1"; // 0x1b80 PushS
	var_252_int = 1; // 0x1b81 PushI
	SetVariable(var_251_string, var_252_int); // 0x1b82 Func
	return 0; // 0x1b84 Return
}


func_7552()
{
	var_150_object = Obj(); var_151_object = Obj(); // 0x1d80 PushV
	var_152_int = 622; // 0x1d81 PushI
	var_153_int = 1; // 0x1d82 PushI
	var_154_int = 532196; // 0x1d83 PushI
	CreateDiaryEntry(var_151_object, var_152_int, var_153_int, var_154_int); // 0x1d84 Func
	var_155_bool = 0; var_156_object = Obj(); var_157_int = 0; // 0x1d86 PushV
	var_156_object = var_151_object; // 0x1d87 Mov
	var_157_int = 2; // 0x1d88 MovI
	func_7669(var_155_bool, var_156_object, var_157_int); // 0x1d89 NEW_2
	return 2; // 0x1d8b Return
}


func_6532(var_186_bool)
{
	var_188_string = ""; var_189_int = 0; var_190_bool = 0; var_191_int = 0; var_192_string = ""; var_193_string = ""; var_194_int = 0; var_195_bool = 0; var_196_int = 0; var_197_string = ""; // 0x1984 PushV
	var_198_string = "d"; // 0x1985 PushS
	var_199_int = 0; // 0x1986 PushV
	func_6708(var_199_int); // 0x1987 NEW_2
	var_200_int = var_198_string + var_199_int; // 0x1989 Add
	var_201_string = "m"; // 0x198a PushS
	var_193_string = var_200_int + var_201_string; // 0x198b Add2
	var_194_int = 0; // 0x198c MovI
	
Label_6541:
	var_202_int = 1; // 0x198d PushI
	if(var_202_int == 0) goto Label_6554; // 0x198e JumpB
	var_203_int = 1; // 0x198f PushI
	var_204_int = var_194_int + var_203_int; // 0x1990 Add
	var_205_int = var_193_string + var_204_int; // 0x1991 Add
	HasProperty(var_205_int, var_195_bool); // 0x1992 ObjFunc
	var_206_bool = var_195_bool == 0; // 0x1994 Not
	if(var_206_bool == 0) goto Label_6551; // 0x1995 JumpB
	goto Label_6554; // 0x1996 Jump
	
Label_6554:
	var_207_bool = var_194_int == 0; // 0x199a Not
	if(var_207_bool == 0) goto Label_6558; // 0x199b JumpB
	var_186_bool = 0; // 0x199c MovB
	return 10; // 0x199d Return
	
Label_6558:
	var_196_int = 0; // 0x199e MovI
	var_208_int = 1; // 0x199f PushI
	var_209_bool = var_194_int > var_208_int; // 0x19a0 GT
	if(var_209_bool == 0) goto Label_6564; // 0x19a1 JumpB
	irand(var_196_int, var_194_int); // 0x19a2 Func
	
Label_6564:
	var_210_int = 1; // 0x19a4 PushI
	var_211_int = var_196_int + var_210_int; // 0x19a5 Add
	var_212_int = var_193_string + var_211_int; // 0x19a6 Add
	GetProperty(var_212_int, var_197_string); // 0x19a7 ObjFunc
	var_213_bool = 0; var_214_string = ""; // 0x19a9 PushV
	var_214_string = var_197_string; // 0x19aa Mov
	func_6606(var_213_bool, var_214_string); // 0x19ab NEW_2
	var_186_bool = var_213_bool; // 0x19ac Mov
	return 10; // 0x19ae Return
	
Label_6551:
	var_215_int = 1; // 0x1997 PushI
	var_194_int = var_194_int + var_215_int; // 0x1998 Add2
	goto Label_6541; // 0x1999 Jump
}


func_7045()
{
	var_192_string = "ood1Georg3"; // 0x1b86 PushS
	var_193_int = 1; // 0x1b87 PushI
	SetVariable(var_192_string, var_193_int); // 0x1b88 Func
	return 0; // 0x1b8a Return
}


func_7051()
{
	var_393_string = "KnowRubin"; // 0x1b8c PushS
	var_394_int = 1; // 0x1b8d PushI
	SetVariable(var_393_string, var_394_int); // 0x1b8e Func
	return 0; // 0x1b90 Return
}


func_7565()
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x1d8d PushV
	var_102_int = 31; // 0x1d8e PushI
	var_103_int = 1; // 0x1d8f PushI
	var_104_int = 512113; // 0x1d90 PushI
	CreateDiaryEntry(var_101_object, var_102_int, var_103_int, var_104_int); // 0x1d91 Func
	var_105_bool = 0; var_106_object = Obj(); var_107_int = 0; // 0x1d93 PushV
	var_106_object = var_101_object; // 0x1d94 Mov
	var_107_int = 2; // 0x1d95 MovI
	func_7669(var_105_bool, var_106_object, var_107_int); // 0x1d96 NEW_2
	return 2; // 0x1d98 Return
}


func_7057()
{
	var_548_string = "KnowSaburivClan"; // 0x1b92 PushS
	var_549_int = 1; // 0x1b93 PushI
	SetVariable(var_548_string, var_549_int); // 0x1b94 Func
	return 0; // 0x1b96 Return
}


func_7063()
{
	var_544_string = "KnowOlgimskiClan"; // 0x1b98 PushS
	var_545_int = 1; // 0x1b99 PushI
	SetVariable(var_544_string, var_545_int); // 0x1b9a Func
	return 0; // 0x1b9c Return
}


func_7578()
{
	var_96_object = Obj(); var_97_object = Obj(); // 0x1d9a PushV
	var_98_int = 628; // 0x1d9b PushI
	var_99_int = 1; // 0x1d9c PushI
	var_100_int = 532757; // 0x1d9d PushI
	CreateDiaryEntry(var_97_object, var_98_int, var_99_int, var_100_int); // 0x1d9e Func
	var_101_bool = 0; var_102_object = Obj(); var_103_int = 0; // 0x1da0 PushV
	var_102_object = var_97_object; // 0x1da1 Mov
	var_103_int = 10; // 0x1da2 MovI
	func_7669(var_101_bool, var_102_object, var_103_int); // 0x1da3 NEW_2
	return 2; // 0x1da5 Return
}


func_7069()
{
	var_540_string = "KnowKainClan"; // 0x1b9e PushS
	var_541_int = 1; // 0x1b9f PushI
	SetVariable(var_540_string, var_541_int); // 0x1ba0 Func
	return 0; // 0x1ba2 Return
}


func_7075()
{
	var_54_string = "ood5Georg1"; // 0x1ba4 PushS
	var_55_int = 1; // 0x1ba5 PushI
	SetVariable(var_54_string, var_55_int); // 0x1ba6 Func
	return 0; // 0x1ba8 Return
}


func_7591()
{
	var_60_object = Obj(); var_61_object = Obj(); // 0x1da7 PushV
	var_62_int = 626; // 0x1da8 PushI
	var_63_int = 1; // 0x1da9 PushI
	var_64_int = 532755; // 0x1daa PushI
	CreateDiaryEntry(var_61_object, var_62_int, var_63_int, var_64_int); // 0x1dab Func
	var_65_bool = 0; var_66_object = Obj(); var_67_int = 0; // 0x1dad PushV
	var_66_object = var_61_object; // 0x1dae Mov
	var_67_int = 10; // 0x1daf MovI
	func_7669(var_65_bool, var_66_object, var_67_int); // 0x1db0 NEW_2
	return 2; // 0x1db2 Return
}


func_7081()
{
	var_552_string = "KnowAlexandr"; // 0x1baa PushS
	var_553_int = 1; // 0x1bab PushI
	SetVariable(var_552_string, var_553_int); // 0x1bac Func
	return 0; // 0x1bae Return
}


func_6061(var_0_object)
{
	var_47_bool = 0; // 0x17ad PushV
	func_6347(var_47_bool); // 0x17ae NEW_2
	var_50_bool = var_47_bool == 0; // 0x17b0 Not
	if(var_50_bool == 0) goto Label_6068; // 0x17b1 JumpB
	Hold(); // 0x17b2 Func
	
Label_6068:
	GetDirection(var_0_object); // 0x17b4 Func
	
Label_6070:
	func_6237(); // 0x17b7 NEW_2
	goto Label_6070; // 0x17b9 Jump
}


func_5550(var_2_object, var_876_string)
{
	var_877_bool = 0; // 0x15af PushV
	func_6755(var_877_bool); // 0x15b0 NEW_2
	var_878_bool = var_877_bool == 0; // 0x15b2 Not
	if(var_878_bool == 0) goto Label_5557; // 0x15b3 JumpB
	return 0; // 0x15b4 Return
	
Label_5557:
	var_879_bool = var_876_string == var_2_object; // 0x15b5 Eq
	if(var_879_bool == 0) goto Label_5560; // 0x15b6 JumpB
	return 0; // 0x15b7 Return
	
Label_5560:
	var_880_string = ""; var_881_bool = 0; // 0x15b8 PushV
	var_880_string = var_876_string; // 0x15b9 Mov
	var_882_string = ""; // 0x15ba PushS
	var_883_bool = var_876_string == var_882_string; // 0x15bb Eq
	if(var_883_bool == 0) goto Label_5567; // 0x15bc JumpB
	var_881_bool = 0; // 0x15bd MovB
	goto Label_5568; // 0x15be Jump
	
Label_5568:
	func_6591(var_880_string, var_881_bool); // 0x15c0 NEW_2
	var_2_object = var_876_string; // 0x15c2 TMov
	return 0; // 0x15c3 Return
	
Label_5567:
	var_881_bool = 1; // 0x15bf MovB
}


func_6575(var_295_string)
{
	var_296_bool = 0; var_297_float = 0; var_298_float = 0; var_299_bool = 0; var_300_float = 0; var_301_float = 0; // 0x19af PushV
	lshHasAnimation(var_299_bool, var_295_string); // 0x19b0 Func
	var_302_bool = var_299_bool; // 0x19b2 Push
	if(var_302_bool == 0) goto Label_6586; // 0x19b3 JumpB
	lshGetAnimTimes(var_295_string, var_300_float, var_301_float); // 0x19b4 Func
	var_303_bool = 0; // 0x19b6 PushB
	lshPlayAnimation(var_300_float, var_301_float, var_303_bool); // 0x19b7 Func
	goto Label_6590; // 0x19b9 Jump
	
Label_6590:
	return 6; // 0x19be Return
	
Label_6586:
	var_304_string = "Can't find lsh animation : "; // 0x19ba PushS
	var_305_int = var_304_string + var_295_string; // 0x19bb Add
	Trace(var_305_int); // 0x19bc Func
}


func_7087()
{
	var_556_string = "KnowBigVlad"; // 0x1bb0 PushS
	var_557_int = 1; // 0x1bb1 PushI
	SetVariable(var_556_string, var_557_int); // 0x1bb2 Func
	return 0; // 0x1bb4 Return
}


func_7604()
{
	var_72_object = Obj(); var_73_object = Obj(); // 0x1db4 PushV
	var_74_int = 26; // 0x1db5 PushI
	var_75_int = 2; // 0x1db6 PushI
	var_76_int = 503366; // 0x1db7 PushI
	CreateDiaryEntry(var_73_object, var_74_int, var_75_int, var_76_int); // 0x1db8 Func
	var_77_bool = 0; var_78_object = Obj(); var_79_int = 0; // 0x1dba PushV
	var_78_object = var_73_object; // 0x1dbb Mov
	var_79_int = -1; // 0x1dbc MovI
	func_7669(var_77_bool, var_78_object, var_79_int); // 0x1dbd NEW_2
	return 2; // 0x1dbf Return
}


func_7093()
{
	var_60_string = "ood6Georg1"; // 0x1bb6 PushS
	var_61_int = 1; // 0x1bb7 PushI
	SetVariable(var_60_string, var_61_int); // 0x1bb8 Func
	return 0; // 0x1bba Return
}


func_441(var_0_object, var_975_int, var_976_object)
{
	var_978_object = Obj(); var_979_bool = 0; var_980_int = 0; var_981_bool = 0; var_982_object = Obj(); var_983_bool = 0; var_984_int = 0; var_985_bool = 0; // 0x1b9 PushV
	var_0_object = var_976_object; // 0x1ba TMov
	var_986_bool = 0; var_987_object = Obj(); var_988_float = 0; // 0x1bb PushV
	var_987_object = var_976_object; // 0x1bc Mov
	var_988_float = 70.0; // 0x1bd MovF
	func_6352(var_987_object, var_988_float); // 0x1be NEW_2
	var_989_bool = var_986_bool == 0; // 0x1c0 Not
	if(var_989_bool == 0) goto Label_452; // 0x1c1 JumpB
	var_975_int = -2; // 0x1c2 MovI
	return 8; // 0x1c3 Return
	
Label_452:
	CreateDialog(var_982_object); // 0x1c4 Func
	var_990_int = 0; // 0x1c6 PushV
	func_6749(var_990_int); // 0x1c7 NEW_2
	SetNPCName(var_990_int); // 0x1c9 ObjFunc
	var_991_int = 0; // 0x1cb PushV
	func_6747(var_991_int); // 0x1cc NEW_2
	SetNPCDescription(var_991_int); // 0x1ce ObjFunc
	var_992_string = ""; // 0x1d0 PushV
	func_6751(var_992_string); // 0x1d1 NEW_2
	SetPhoto(var_992_string); // 0x1d3 ObjFunc
	var_993_string = ""; // 0x1d5 PushV
	func_6753(var_993_string); // 0x1d6 NEW_2
	SetPhoto2(var_993_string); // 0x1d8 ObjFunc
	var_994_int = 0; // 0x1da PushV
	func_7747(var_994_int); // 0x1db NEW_2
	SetPlayerName(var_994_int); // 0x1dd ObjFunc
	var_984_int = -1; // 0x1df MovI
	IsOverrideActive(var_983_bool); // 0x1e0 Func
	var_995_bool = var_983_bool; // 0x1e2 Push
	if(var_995_bool == 0) goto Label_486; // 0x1e3 JumpB
	var_975_int = -2; // 0x1e4 MovI
	return 8; // 0x1e5 Return
	
Label_486:
	DoDialog(var_982_object); // 0x1e6 Func
	var_996_bool = 0; var_997_object = Obj(); // 0x1e8 PushV
	var_998_object = Obj(); // 0x1e9 PushV
	func_6628(var_998_object); // 0x1ea NEW_2
	var_997_object = var_998_object; // 0x1eb Mov
	func_6437(var_996_bool, var_997_object); // 0x1ed NEW_2
	var_999_object = Obj(); var_1000_object = Obj(); // 0x1ef PushV
	var_999_object = var_976_object; // 0x1f0 Mov
	var_1000_object = var_982_object; // 0x1f1 Mov
	TaskCall(3); // 0x1f2 TaskCall
	func_522(var_1001_object, var_1002_object, var_1003_string, var_1004_bool, var_999_object, var_1000_object); // 0x1f3 NEW_2
	TaskReturn(); // 0x1f4 TaskReturn
	IsDialogEnd(var_985_bool); // 0x1f6 ObjFunc
	
Label_504:
	var_1032_bool = var_985_bool == 0; // 0x1f8 Not
	if(var_1032_bool == 0) goto Label_511; // 0x1f9 JumpB
	sync(); // 0x1fa Func
	IsDialogEnd(var_985_bool); // 0x1fc ObjFunc
	goto Label_504; // 0x1fe Jump
	
Label_511:
	var_1033_object = Obj(); // 0x1ff PushV
	var_1033_object = var_976_object; // 0x200 Mov
	func_6420(); // 0x201 NEW_2
	StopDialog(var_982_object); // 0x203 Func
	GetReturnValue(var_984_int); // 0x205 ObjFunc
	var_975_int = var_984_int; // 0x207 Mov
	return 8; // 0x208 Return
}


func_7099()
{
	var_54_string = "ood6Georg3"; // 0x1bbc PushS
	var_55_int = 1; // 0x1bbd PushI
	SetVariable(var_54_string, var_55_int); // 0x1bbe Func
	return 0; // 0x1bc0 Return
}


func_6075(var_71_bool)
{
	var_72_object = Obj(); var_73_object = Obj(); // 0x17bb PushV
	var_74_string = "player"; // 0x17bc PushS
	FindActor(var_73_object, var_74_string); // 0x17bd Func
	var_75_bool = var_73_object == 0; // 0x17bf Not
	if(var_75_bool == 0) goto Label_6083; // 0x17c0 JumpB
	var_71_bool = 0; // 0x17c1 MovB
	return 2; // 0x17c2 Return
	
Label_6083:
	var_76_bool = 0; var_77_object = Obj(); // 0x17c3 PushV
	var_77_object = var_73_object; // 0x17c4 Mov
	func_6338(var_77_object); // 0x17c5 NEW_2
	var_71_bool = var_76_bool; // 0x17c6 Mov
	return 2; // 0x17c8 Return
}


func_957(var_2_object, var_755_string)
{
	var_756_bool = 0; // 0x3be PushV
	func_6755(var_756_bool); // 0x3bf NEW_2
	var_757_bool = var_756_bool == 0; // 0x3c1 Not
	if(var_757_bool == 0) goto Label_964; // 0x3c2 JumpB
	return 0; // 0x3c3 Return
	
Label_964:
	var_758_bool = var_755_string == var_2_object; // 0x3c4 Eq
	if(var_758_bool == 0) goto Label_967; // 0x3c5 JumpB
	return 0; // 0x3c6 Return
	
Label_967:
	var_759_string = ""; var_760_bool = 0; // 0x3c7 PushV
	var_759_string = var_755_string; // 0x3c8 Mov
	var_761_string = ""; // 0x3c9 PushS
	var_762_bool = var_755_string == var_761_string; // 0x3ca Eq
	if(var_762_bool == 0) goto Label_974; // 0x3cb JumpB
	var_760_bool = 0; // 0x3cc MovB
	goto Label_975; // 0x3cd Jump
	
Label_975:
	func_6591(var_759_string, var_760_bool); // 0x3cf NEW_2
	var_2_object = var_755_string; // 0x3d1 TMov
	return 0; // 0x3d2 Return
	
Label_974:
	var_760_bool = 1; // 0x3ce MovB
}


func_5054(var_2_object, var_684_string)
{
	var_685_bool = 0; // 0x13bf PushV
	func_6755(var_685_bool); // 0x13c0 NEW_2
	var_686_bool = var_685_bool == 0; // 0x13c2 Not
	if(var_686_bool == 0) goto Label_5061; // 0x13c3 JumpB
	return 0; // 0x13c4 Return
	
Label_5061:
	var_687_bool = var_684_string == var_2_object; // 0x13c5 Eq
	if(var_687_bool == 0) goto Label_5064; // 0x13c6 JumpB
	return 0; // 0x13c7 Return
	
Label_5064:
	var_688_string = ""; var_689_bool = 0; // 0x13c8 PushV
	var_688_string = var_684_string; // 0x13c9 Mov
	var_690_string = ""; // 0x13ca PushS
	var_691_bool = var_684_string == var_690_string; // 0x13cb Eq
	if(var_691_bool == 0) goto Label_5071; // 0x13cc JumpB
	var_689_bool = 0; // 0x13cd MovB
	goto Label_5072; // 0x13ce Jump
	
Label_5072:
	func_6591(var_688_string, var_689_bool); // 0x13d0 NEW_2
	var_2_object = var_684_string; // 0x13d2 TMov
	return 0; // 0x13d3 Return
	
Label_5071:
	var_689_bool = 1; // 0x13cf MovB
}


func_6591(var_270_string, var_271_bool)
{
	var_274_bool = 0; var_275_float = 0; var_276_float = 0; var_277_bool = 0; var_278_float = 0; var_279_float = 0; // 0x19bf PushV
	lshHasAnimation(var_277_bool, var_270_string); // 0x19c0 Func
	var_280_bool = var_277_bool; // 0x19c2 Push
	if(var_280_bool == 0) goto Label_6601; // 0x19c3 JumpB
	lshGetAnimTimes(var_270_string, var_278_float, var_279_float); // 0x19c4 Func
	lshPlayAnimation(var_278_float, var_279_float, var_271_bool); // 0x19c6 Func
	goto Label_6605; // 0x19c8 Jump
	
Label_6605:
	return 6; // 0x19cd Return
	
Label_6601:
	var_281_string = "Can't find lsh animation : "; // 0x19c9 PushS
	var_282_int = var_281_string + var_270_string; // 0x19ca Add
	Trace(var_282_int); // 0x19cb Func
}


func_7105()
{
	var_874_string = "ood8Georg1"; // 0x1bc2 PushS
	var_875_int = 1; // 0x1bc3 PushI
	SetVariable(var_874_string, var_875_int); // 0x1bc4 Func
	return 0; // 0x1bc6 Return
}


func_7617()
{
	var_146_object = Obj(); var_147_object = Obj(); // 0x1dc1 PushV
	var_148_int = 678; // 0x1dc2 PushI
	var_149_int = 2; // 0x1dc3 PushI
	var_150_int = 534417; // 0x1dc4 PushI
	CreateDiaryEntry(var_147_object, var_148_int, var_149_int, var_150_int); // 0x1dc5 Func
	var_151_bool = 0; var_152_object = Obj(); var_153_int = 0; // 0x1dc7 PushV
	var_152_object = var_147_object; // 0x1dc8 Mov
	var_153_int = 26; // 0x1dc9 MovI
	func_7669(var_151_bool, var_152_object, var_153_int); // 0x1dca NEW_2
	return 2; // 0x1dcc Return
}


func_7111()
{
	var_543_string = "d3GeorgVisit"; // 0x1bc8 PushS
	var_544_int = 1; // 0x1bc9 PushI
	SetVariable(var_543_string, var_544_int); // 0x1bca Func
	return 0; // 0x1bcc Return
}


func_6090(var_0_object)
{
	var_123_float = GetByIndex(var_0_object, 0); // 0x17ca PushE
	var_124_float = GetByIndex(var_0_object, 2); // 0x17cb PushE
	RotateAsync(var_123_float, var_124_float); // 0x17cc Func
	return 0; // 0x17ce Return
}


func_7117(var_344_bool)
{
	var_346_int = 0; var_347_string = ""; // 0x1bce PushV
	var_347_string = "d1q01"; // 0x1bcf MovS
	func_6644(var_346_int, var_347_string); // 0x1bd0 NEW_2
	var_348_int = 1000; // 0x1bd2 PushI
	var_349_bool = var_346_int == var_348_int; // 0x1bd3 Eq
	if(var_349_bool == 0) goto Label_7127; // 0x1bd4 JumpB
	var_344_bool = 1; // 0x1bd5 MovB
	return 0; // 0x1bd6 Return
	
Label_7127:
	var_344_bool = 0; // 0x1bd7 MovB
	return 0; // 0x1bd8 Return
}


func_6606(var_178_bool, var_179_string)
{
	var_180_bool = 0; var_181_bool = 0; // 0x19ce PushV
	var_182_bool = 0; // 0x19cf PushV
	func_6755(var_182_bool); // 0x19d0 NEW_2
	if(var_182_bool == 0) goto Label_6619; // 0x19d2 JumpB
	lshHasSpeech(var_181_bool, var_179_string); // 0x19d3 Func
	var_183_bool = var_181_bool; // 0x19d5 Push
	if(var_183_bool == 0) goto Label_6619; // 0x19d6 JumpB
	lshPlaySpeech(var_179_string); // 0x19d7 Func
	var_178_bool = 1; // 0x19d9 MovB
	return 2; // 0x19da Return
	
Label_6619:
	var_178_bool = 0; // 0x19db MovB
	return 2; // 0x19dc Return
}


func_6095(var_54_bool)
{
	var_55_object = Obj(); var_56_bool = 0; var_57_object = Obj(); var_58_bool = 0; // 0x17cf PushV
	var_59_string = "player"; // 0x17d0 PushS
	FindActor(var_57_object, var_59_string); // 0x17d1 Func
	var_60_bool = var_57_object == 0; // 0x17d3 Not
	if(var_60_bool == 0) goto Label_6103; // 0x17d4 JumpB
	var_54_bool = 0; // 0x17d5 MovB
	return 4; // 0x17d6 Return
	
Label_6103:
	var_61_float = 0; var_62_object = Obj(); // 0x17d7 PushV
	var_62_object = var_57_object; // 0x17d8 Mov
	func_6313(var_62_object); // 0x17d9 NEW_2
	var_69_float = 90000.0; // 0x17db PushF
	var_70_bool = var_61_float > var_69_float; // 0x17dc GT
	if(var_70_bool == 0) goto Label_6112; // 0x17dd JumpB
	var_54_bool = 0; // 0x17de MovB
	return 4; // 0x17df Return
	
Label_6112:
	CanSee(var_58_bool, var_57_object); // 0x17e0 Func
	var_54_bool = var_58_bool; // 0x17e2 Mov
	return 4; // 0x17e3 Return
}


func_7630()
{
	var_95_object = Obj(); var_96_object = Obj(); // 0x1dce PushV
	var_97_int = 76; // 0x1dcf PushI
	var_98_int = 2; // 0x1dd0 PushI
	var_99_int = 512158; // 0x1dd1 PushI
	CreateDiaryEntry(var_96_object, var_97_int, var_98_int, var_99_int); // 0x1dd2 Func
	var_100_bool = 0; var_101_object = Obj(); var_102_int = 0; // 0x1dd4 PushV
	var_101_object = var_96_object; // 0x1dd5 Mov
	var_102_int = 26; // 0x1dd6 MovI
	func_7669(var_100_bool, var_101_object, var_102_int); // 0x1dd7 NEW_2
	return 2; // 0x1dd9 Return
}


func_7129(var_327_bool)
{
	var_329_int = 0; var_330_string = ""; // 0x1bda PushV
	var_330_string = "d1q01"; // 0x1bdb MovS
	func_6644(var_329_int, var_330_string); // 0x1bdc NEW_2
	var_331_int = 0; // 0x1bde PushI
	var_332_bool = var_329_int == var_331_int; // 0x1bdf Eq
	if(var_332_bool == 0) goto Label_7139; // 0x1be0 JumpB
	var_327_bool = 1; // 0x1be1 MovB
	return 0; // 0x1be2 Return
	
Label_7139:
	var_327_bool = 0; // 0x1be3 MovB
	return 0; // 0x1be4 Return
}


func_7643()
{
	var_198_object = Obj(); var_199_object = Obj(); // 0x1ddb PushV
	var_200_int = 81; // 0x1ddc PushI
	var_201_int = 2; // 0x1ddd PushI
	var_202_int = 512163; // 0x1dde PushI
	CreateDiaryEntry(var_199_object, var_200_int, var_201_int, var_202_int); // 0x1ddf Func
	var_203_bool = 0; var_204_object = Obj(); var_205_int = 0; // 0x1de1 PushV
	var_204_object = var_199_object; // 0x1de2 Mov
	var_205_int = 26; // 0x1de3 MovI
	func_7669(var_203_bool, var_204_object, var_205_int); // 0x1de4 NEW_2
	return 2; // 0x1de6 Return
}


func_6621()
{
	var_49_bool = 0; // 0x19dd PushV
	func_6755(var_49_bool); // 0x19de NEW_2
	if(var_49_bool == 0) goto Label_6627; // 0x19e0 JumpB
	lshStopSpeech(); // 0x19e1 Func
	
Label_6627:
	return 0; // 0x19e3 Return
}


func_6628(var_146_object)
{
	var_147_object = Obj(); var_148_object = Obj(); // 0x19e4 PushV
	self(var_148_object); // 0x19e5 Func
	var_146_object = var_148_object; // 0x19e7 Mov
	return 2; // 0x19e8 Return
}


func_7141(var_311_bool)
{
	var_313_int = 0; var_314_string = ""; // 0x1be6 PushV
	var_314_string = "d1q01"; // 0x1be7 MovS
	func_6644(var_313_int, var_314_string); // 0x1be8 NEW_2
	var_315_int = 8; // 0x1bea PushI
	var_316_bool = var_313_int == var_315_int; // 0x1beb Eq
	if(var_316_bool == 0) goto Label_7151; // 0x1bec JumpB
	var_311_bool = 1; // 0x1bed MovB
	return 0; // 0x1bee Return
	
Label_7151:
	var_311_bool = 0; // 0x1bef MovB
	return 0; // 0x1bf0 Return
}


func_6117()
{
	var_1092_float = 0; var_1093_float = 0; // 0x17e5 PushV
	var_1094_int = 8; // 0x17e6 PushI
	var_1095_int = 16; // 0x17e7 PushI
	rand(var_1093_float, var_1094_int, var_1095_int); // 0x17e8 Func
	var_1096_int = 10; // 0x17ea PushI
	SetTimer(var_1096_int, var_1093_float); // 0x17eb Func
	return 2; // 0x17ed Return
}


func_7656(var_86_object)
{
	var_87_object = Obj(); var_88_object = Obj(); // 0x1de8 PushV
	GetDiaryRoot(var_88_object); // 0x1de9 Func
	var_89_bool = var_88_object == 0; // 0x1deb Not
	if(var_89_bool == 0) goto Label_7666; // 0x1dec JumpB
	var_90_string = "Can't retrieve diary root"; // 0x1ded PushS
	Trace(var_90_string); // 0x1dee Func
	var_86_object = 0; // 0x1df0 MovB
	return 2; // 0x1df1 Return
	
Label_7666:
	var_86_object = var_88_object; // 0x1df2 Mov
	return 2; // 0x1df3 Return
}


func_6634(var_111_cvector, var_112_cvector)
{
	var_114_float = 0; var_115_float = 0; // 0x19ea PushV
	var_116_int = var_112_cvector | var_112_cvector; // 0x19eb Or
	var_115_float = sqrt(var_116_int); // 0x19ec Sqrt2
	var_117_float = 0.0; // 0x19ed PushF
	var_118_bool = var_115_float < var_117_float; // 0x19ee LT
	if(var_118_bool == 0) goto Label_6642; // 0x19ef JumpB
	var_111_cvector = CVector(0.0, 0.0, 0.0); // 0x19f0 MovV
	return 2; // 0x19f1 Return
	
Label_6642:
	var_111_cvector = var_112_cvector / var_112_cvector; // 0x19f2 Div2
	return 2; // 0x19f3 Return
}


func_6126()
{
	var_1091_int = 10; // 0x17ee PushI
	KillTimer(var_1091_int); // 0x17ef Func
	return 0; // 0x17f1 Return
}


func_7153(var_375_bool)
{
	var_377_int = 0; var_378_string = ""; // 0x1bf2 PushV
	var_378_string = "ood1Georg5"; // 0x1bf3 MovS
	func_6644(var_377_int, var_378_string); // 0x1bf4 NEW_2
	var_379_int = 0; // 0x1bf6 PushI
	var_380_bool = var_377_int == var_379_int; // 0x1bf7 Eq
	if(var_380_bool == 0) goto Label_7163; // 0x1bf8 JumpB
	var_375_bool = 1; // 0x1bf9 MovB
	return 0; // 0x1bfa Return
	
Label_7163:
	var_375_bool = 0; // 0x1bfb MovB
	return 0; // 0x1bfc Return
}


func_6644(var_243_int, var_244_string)
{
	var_245_int = 0; var_246_int = 0; // 0x19f4 PushV
	GetVariable(var_244_string, var_246_int); // 0x19f5 Func
	var_243_int = var_246_int; // 0x19f7 Mov
	return 2; // 0x19f8 Return
}


func_7669(var_77_bool, var_78_object, var_79_int)
{
	var_80_object = Obj(); var_81_object = Obj(); var_82_int = 0; var_83_object = Obj(); var_84_object = Obj(); var_85_int = 0; // 0x1df5 PushV
	var_86_object = Obj(); // 0x1df6 PushV
	func_7656(var_86_object); // 0x1df7 NEW_2
	var_83_object = var_86_object; // 0x1df8 Mov
	Find(var_79_int, var_84_object); // 0x1dfa ObjFunc
	var_91_bool = var_84_object == 0; // 0x1dfc Not
	if(var_91_bool == 0) goto Label_7684; // 0x1dfd JumpB
	var_92_string = "Can't find diary parent with id: "; // 0x1dfe PushS
	var_93_int = var_92_string + var_79_int; // 0x1dff Add
	Trace(var_93_int); // 0x1e00 Func
	var_77_bool = 0; // 0x1e02 MovB
	return 6; // 0x1e03 Return
	
Label_7684:
	AddChild(var_78_object); // 0x1e04 ObjFunc
	var_94_int = 7; // 0x1e06 PushI
	SendWorldWndMessage(var_94_int); // 0x1e07 Func
	GetCategory(var_85_int); // 0x1e09 ObjFunc
	SetDiarySection(var_85_int); // 0x1e0b Func
	var_77_bool = 0; // 0x1e0d MovB
	return 6; // 0x1e0e Return
}


func_6649(var_103_object, var_104_string)
{
	var_105_object = Obj(); var_106_object = Obj(); var_107_object = Obj(); var_108_object = Obj(); // 0x19f9 PushV
	GetMainOutdoorScene(var_107_object); // 0x19fa Func
	var_109_string = ".bin"; // 0x19fc PushS
	var_110_int = var_104_string + var_109_string; // 0x19fd Add
	AddBlankActor(var_108_object, var_107_object, var_104_string, var_110_int); // 0x19fe Func
	var_103_object = var_108_object; // 0x1a00 Mov
	return 4; // 0x1a01 Return
}


func_7165(var_951_bool)
{
	var_953_int = 0; var_954_string = ""; // 0x1bfe PushV
	var_954_string = "d10q02"; // 0x1bff MovS
	func_6644(var_953_int, var_954_string); // 0x1c00 NEW_2
	var_955_int = 3; // 0x1c02 PushI
	var_956_bool = var_953_int == var_955_int; // 0x1c03 Eq
	if(var_956_bool == 0) goto Label_7175; // 0x1c04 JumpB
	var_951_bool = 1; // 0x1c05 MovB
	return 0; // 0x1c06 Return
	
Label_7175:
	var_951_bool = 0; // 0x1c07 MovB
	return 0; // 0x1c08 Return
}


