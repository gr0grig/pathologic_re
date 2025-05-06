task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0xb0 PushI
	if(var_33_int == 0) goto Label_364; // 0xb1 JumpB
	func_2831(); // 0xb3 NEW_2
	var_35_int = 28414; // 0xb5 PushI
	var_36_bool = var_32_cvector == var_35_int; // 0xb6 Eq
	if(var_36_bool == 0) goto Label_189; // 0xb7 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0xb8 PushV
	var_37_object = var_1_object; // 0xb9 MovT
	var_38_object = var_0_object; // 0xba MovT
	func_2993(); // 0xbb NEW_2
	
Label_189:
	var_41_int = 28413; // 0xbd PushI
	var_42_bool = var_31_bool == var_41_int; // 0xbe Eq
	if(var_42_bool == 0) goto Label_226; // 0xbf JumpB
	var_43_string = ""; // 0xc0 PushV
	var_43_string = "Autizm"; // 0xc1 MovS
	func_153(var_32_cvector, var_43_string); // 0xc2 NEW_2
	var_60_int = 527115; // 0xc4 PushI
	SetMessage(var_60_int); // 0xc5 TObjFunc
	ClearReplies(); // 0xc7 TObjFunc
	var_61_bool = 0; // 0xc9 PushV
	var_61_bool = 0; // 0xca MovB
	var_62_bool = 0; var_63_object = Obj(); // 0xcb PushV
	var_63_object = var_1_object; // 0xcc MovT
	func_3128(var_63_object); // 0xcd NEW_2
	if(var_62_bool == 0) goto Label_214; // 0xcf JumpB
	var_70_bool = 0; var_71_object = Obj(); // 0xd0 PushV
	var_71_object = var_1_object; // 0xd1 MovT
	func_3199(var_71_object); // 0xd2 NEW_2
	if(var_70_bool == 0) goto Label_214; // 0xd4 JumpB
	var_61_bool = 1; // 0xd5 MovB
	
Label_214:
	if(var_61_bool == 0) goto Label_220; // 0xd6 JumpB
	var_76_int = 527116; // 0xd7 PushI
	var_77_int = 28416; // 0xd8 PushI
	var_78_int = 28414; // 0xd9 PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0xda TObjFunc
	
Label_220:
	var_79_int = 527117; // 0xdc PushI
	var_80_int = -1; // 0xdd PushI
	var_81_int = 28415; // 0xde PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0xdf TObjFunc
	return 0; // 0xe1 Return
	
Label_226:
	var_82_int = 28416; // 0xe2 PushI
	var_83_bool = var_31_bool == var_82_int; // 0xe3 Eq
	if(var_83_bool == 0) goto Label_244; // 0xe4 JumpB
	var_84_string = ""; // 0xe5 PushV
	var_84_string = "Autizm"; // 0xe6 MovS
	func_153(var_32_cvector, var_84_string); // 0xe7 NEW_2
	var_85_int = 527118; // 0xe9 PushI
	SetMessage(var_85_int); // 0xea TObjFunc
	ClearReplies(); // 0xec TObjFunc
	var_86_int = 527119; // 0xee PushI
	var_87_int = 28418; // 0xef PushI
	var_88_int = 28417; // 0xf0 PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0xf1 TObjFunc
	return 0; // 0xf3 Return
	
Label_244:
	var_89_int = 28418; // 0xf4 PushI
	var_90_bool = var_31_bool == var_89_int; // 0xf5 Eq
	if(var_90_bool == 0) goto Label_262; // 0xf6 JumpB
	var_91_string = ""; // 0xf7 PushV
	var_91_string = "Fear"; // 0xf8 MovS
	func_153(var_32_cvector, var_91_string); // 0xf9 NEW_2
	var_92_int = 527120; // 0xfb PushI
	SetMessage(var_92_int); // 0xfc TObjFunc
	ClearReplies(); // 0xfe TObjFunc
	var_93_int = 527121; // 0x100 PushI
	var_94_int = 28420; // 0x101 PushI
	var_95_int = 28419; // 0x102 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0x103 TObjFunc
	return 0; // 0x105 Return
	
Label_262:
	var_96_int = 28420; // 0x106 PushI
	var_97_bool = var_31_bool == var_96_int; // 0x107 Eq
	if(var_97_bool == 0) goto Label_280; // 0x108 JumpB
	var_98_string = ""; // 0x109 PushV
	var_98_string = "Fear"; // 0x10a MovS
	func_153(var_32_cvector, var_98_string); // 0x10b NEW_2
	var_99_int = 527122; // 0x10d PushI
	SetMessage(var_99_int); // 0x10e TObjFunc
	ClearReplies(); // 0x110 TObjFunc
	var_100_int = 527123; // 0x112 PushI
	var_101_int = 28422; // 0x113 PushI
	var_102_int = 28421; // 0x114 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x115 TObjFunc
	return 0; // 0x117 Return
	
Label_280:
	var_103_int = 28422; // 0x118 PushI
	var_104_bool = var_31_bool == var_103_int; // 0x119 Eq
	if(var_104_bool == 0) goto Label_298; // 0x11a JumpB
	var_105_string = ""; // 0x11b PushV
	var_105_string = "Suspicion"; // 0x11c MovS
	func_153(var_32_cvector, var_105_string); // 0x11d NEW_2
	var_106_int = 527124; // 0x11f PushI
	SetMessage(var_106_int); // 0x120 TObjFunc
	ClearReplies(); // 0x122 TObjFunc
	var_107_int = 527125; // 0x124 PushI
	var_108_int = 28424; // 0x125 PushI
	var_109_int = 28423; // 0x126 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x127 TObjFunc
	return 0; // 0x129 Return
	
Label_298:
	var_110_int = 28424; // 0x12a PushI
	var_111_bool = var_31_bool == var_110_int; // 0x12b Eq
	if(var_111_bool == 0) goto Label_316; // 0x12c JumpB
	var_112_string = ""; // 0x12d PushV
	var_112_string = "Neutral"; // 0x12e MovS
	func_153(var_32_cvector, var_112_string); // 0x12f NEW_2
	var_113_int = 527126; // 0x131 PushI
	SetMessage(var_113_int); // 0x132 TObjFunc
	ClearReplies(); // 0x134 TObjFunc
	var_114_int = 527127; // 0x136 PushI
	var_115_int = 28426; // 0x137 PushI
	var_116_int = 28425; // 0x138 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x139 TObjFunc
	return 0; // 0x13b Return
	
Label_316:
	var_117_int = 28426; // 0x13c PushI
	var_118_bool = var_31_bool == var_117_int; // 0x13d Eq
	if(var_118_bool == 0) goto Label_334; // 0x13e JumpB
	var_119_string = ""; // 0x13f PushV
	var_119_string = "Neutral"; // 0x140 MovS
	func_153(var_32_cvector, var_119_string); // 0x141 NEW_2
	var_120_int = 527128; // 0x143 PushI
	SetMessage(var_120_int); // 0x144 TObjFunc
	ClearReplies(); // 0x146 TObjFunc
	var_121_int = 527129; // 0x148 PushI
	var_122_int = 28428; // 0x149 PushI
	var_123_int = 28427; // 0x14a PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x14b TObjFunc
	return 0; // 0x14d Return
	
Label_334:
	var_124_int = 28428; // 0x14e PushI
	var_125_bool = var_31_bool == var_124_int; // 0x14f Eq
	if(var_125_bool == 0) goto Label_352; // 0x150 JumpB
	var_126_string = ""; // 0x151 PushV
	var_126_string = "Neutral"; // 0x152 MovS
	func_153(var_32_cvector, var_126_string); // 0x153 NEW_2
	var_127_int = 527130; // 0x155 PushI
	SetMessage(var_127_int); // 0x156 TObjFunc
	ClearReplies(); // 0x158 TObjFunc
	var_128_int = 527131; // 0x15a PushI
	var_129_int = -1; // 0x15b PushI
	var_130_int = 28429; // 0x15c PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x15d TObjFunc
	return 0; // 0x15f Return
	
Label_352:
	var_3_string = 1; // 0x160 TMovB
	var_131_bool = 0; // 0x161 PushV
	func_2974(var_131_bool); // 0x162 NEW_2
	if(var_131_bool == 0) goto Label_360; // 0x164 JumpB
	lshStopAnimation(); // 0x165 Func
	goto Label_362; // 0x167 Jump
	
Label_362:
	return 0; // 0x16a Return
	
Label_360:
	StopAnimation(); // 0x168 Func
	
Label_364:
	return 0; // 0x16c Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0x245 PushI
	if(var_33_int == 0) goto Label_1101; // 0x246 JumpB
	func_2831(); // 0x248 NEW_2
	var_35_int = 32479; // 0x24a PushI
	var_36_bool = var_32_cvector == var_35_int; // 0x24b Eq
	if(var_36_bool == 0) goto Label_599; // 0x24c JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x24d PushV
	var_37_object = var_1_object; // 0x24e MovT
	var_38_object = var_0_object; // 0x24f MovT
	func_3014(); // 0x250 NEW_2
	var_86_object = Obj(); var_87_object = Obj(); // 0x252 PushV
	var_86_object = var_1_object; // 0x253 MovT
	var_87_object = var_0_object; // 0x254 MovT
	func_3042(); // 0x255 NEW_2
	
Label_599:
	var_112_int = 32616; // 0x257 PushI
	var_113_bool = var_32_cvector == var_112_int; // 0x258 Eq
	if(var_113_bool == 0) goto Label_607; // 0x259 JumpB
	var_114_object = Obj(); var_115_object = Obj(); // 0x25a PushV
	var_114_object = var_1_object; // 0x25b MovT
	var_115_object = var_0_object; // 0x25c MovT
	func_3082(); // 0x25d NEW_2
	
Label_607:
	var_127_int = 31854; // 0x25f PushI
	var_128_bool = var_32_cvector == var_127_int; // 0x260 Eq
	if(var_128_bool == 0) goto Label_615; // 0x261 JumpB
	var_129_object = Obj(); var_130_object = Obj(); // 0x262 PushV
	var_129_object = var_1_object; // 0x263 MovT
	var_130_object = var_0_object; // 0x264 MovT
	func_2999(); // 0x265 NEW_2
	
Label_615:
	var_141_int = 32486; // 0x267 PushI
	var_142_bool = var_32_cvector == var_141_int; // 0x268 Eq
	if(var_142_bool == 0) goto Label_638; // 0x269 JumpB
	var_143_object = Obj(); var_144_object = Obj(); // 0x26a PushV
	var_143_object = var_1_object; // 0x26b MovT
	var_144_object = var_0_object; // 0x26c MovT
	func_2976(var_144_object); // 0x26d NEW_2
	var_167_object = Obj(); var_168_object = Obj(); // 0x26f PushV
	var_167_object = var_1_object; // 0x270 MovT
	var_168_object = var_0_object; // 0x271 MovT
	func_3008(); // 0x272 NEW_2
	var_171_object = Obj(); var_172_object = Obj(); // 0x274 PushV
	var_171_object = var_1_object; // 0x275 MovT
	var_172_object = var_0_object; // 0x276 MovT
	func_3092(); // 0x277 NEW_2
	var_177_object = Obj(); var_178_object = Obj(); // 0x279 PushV
	var_177_object = var_1_object; // 0x27a MovT
	var_178_object = var_0_object; // 0x27b MovT
	func_3058(); // 0x27c NEW_2
	
Label_638:
	var_192_int = 32633; // 0x27e PushI
	var_193_bool = var_32_cvector == var_192_int; // 0x27f Eq
	if(var_193_bool == 0) goto Label_661; // 0x280 JumpB
	var_194_object = Obj(); var_195_object = Obj(); // 0x281 PushV
	var_194_object = var_1_object; // 0x282 MovT
	var_195_object = var_0_object; // 0x283 MovT
	func_2976(var_195_object); // 0x284 NEW_2
	var_196_object = Obj(); var_197_object = Obj(); // 0x286 PushV
	var_196_object = var_1_object; // 0x287 MovT
	var_197_object = var_0_object; // 0x288 MovT
	func_3008(); // 0x289 NEW_2
	var_198_object = Obj(); var_199_object = Obj(); // 0x28b PushV
	var_198_object = var_1_object; // 0x28c MovT
	var_199_object = var_0_object; // 0x28d MovT
	func_3092(); // 0x28e NEW_2
	var_200_object = Obj(); var_201_object = Obj(); // 0x290 PushV
	var_200_object = var_1_object; // 0x291 MovT
	var_201_object = var_0_object; // 0x292 MovT
	func_3058(); // 0x293 NEW_2
	
Label_661:
	var_202_int = 32489; // 0x295 PushI
	var_203_bool = var_32_cvector == var_202_int; // 0x296 Eq
	if(var_203_bool == 0) goto Label_669; // 0x297 JumpB
	var_204_object = Obj(); var_205_object = Obj(); // 0x298 PushV
	var_204_object = var_1_object; // 0x299 MovT
	var_205_object = var_0_object; // 0x29a MovT
	func_3072(); // 0x29b NEW_2
	
Label_669:
	var_217_int = 32470; // 0x29d PushI
	var_218_bool = var_31_bool == var_217_int; // 0x29e Eq
	if(var_218_bool == 0) goto Label_746; // 0x29f JumpB
	var_219_bool = 0; var_220_object = Obj(); // 0x2a0 PushV
	var_220_object = var_1_object; // 0x2a1 MovT
	func_3152(var_220_object); // 0x2a2 NEW_2
	if(var_219_bool == 0) goto Label_692; // 0x2a4 JumpB
	var_227_string = ""; // 0x2a5 PushV
	var_227_string = "Suspicion"; // 0x2a6 MovS
	func_558(var_32_cvector, var_227_string); // 0x2a7 NEW_2
	var_244_int = 531162; // 0x2a9 PushI
	SetMessage(var_244_int); // 0x2aa TObjFunc
	ClearReplies(); // 0x2ac TObjFunc
	var_245_int = 531292; // 0x2ae PushI
	var_246_int = 32610; // 0x2af PushI
	var_247_int = 32609; // 0x2b0 PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x2b1 TObjFunc
	return 0; // 0x2b3 Return
	
Label_692:
	var_248_string = ""; // 0x2b4 PushV
	var_248_string = "Neutral"; // 0x2b5 MovS
	func_558(var_32_cvector, var_248_string); // 0x2b6 NEW_2
	var_249_int = 530485; // 0x2b8 PushI
	SetMessage(var_249_int); // 0x2b9 TObjFunc
	ClearReplies(); // 0x2bb TObjFunc
	var_250_bool = 0; var_251_object = Obj(); // 0x2bd PushV
	var_251_object = var_1_object; // 0x2be MovT
	func_3140(var_251_object); // 0x2bf NEW_2
	if(var_250_bool == 0) goto Label_711; // 0x2c1 JumpB
	var_256_int = 530486; // 0x2c2 PushI
	var_257_int = 31853; // 0x2c3 PushI
	var_258_int = 31852; // 0x2c4 PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x2c5 TObjFunc
	
Label_711:
	var_259_bool = 0; // 0x2c7 PushV
	var_259_bool = 0; // 0x2c8 MovB
	var_260_bool = 0; var_261_object = Obj(); // 0x2c9 PushV
	var_261_object = var_1_object; // 0x2ca MovT
	func_3164(var_261_object); // 0x2cb NEW_2
	if(var_260_bool == 0) goto Label_724; // 0x2cd JumpB
	var_266_bool = 0; var_267_object = Obj(); // 0x2ce PushV
	var_267_object = var_1_object; // 0x2cf MovT
	func_3176(var_266_bool, var_267_object); // 0x2d0 NEW_2
	if(var_266_bool == 0) goto Label_724; // 0x2d2 JumpB
	var_259_bool = 1; // 0x2d3 MovB
	
Label_724:
	if(var_259_bool == 0) goto Label_730; // 0x2d4 JumpB
	var_275_int = 531172; // 0x2d5 PushI
	var_276_int = 32623; // 0x2d6 PushI
	var_277_int = 32480; // 0x2d7 PushI
	AddReply(var_275_int, var_276_int, var_277_int); // 0x2d8 TObjFunc
	
Label_730:
	var_278_bool = 0; var_279_object = Obj(); // 0x2da PushV
	var_279_object = var_1_object; // 0x2db MovT
	func_3187(var_279_object); // 0x2dc NEW_2
	if(var_278_bool == 0) goto Label_740; // 0x2de JumpB
	var_284_int = 531179; // 0x2df PushI
	var_285_int = 32617; // 0x2e0 PushI
	var_286_int = 32487; // 0x2e1 PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x2e2 TObjFunc
	
Label_740:
	var_287_int = 530489; // 0x2e4 PushI
	var_288_int = -1; // 0x2e5 PushI
	var_289_int = 31855; // 0x2e6 PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0x2e7 TObjFunc
	return 0; // 0x2e9 Return
	
Label_746:
	var_290_int = 32617; // 0x2ea PushI
	var_291_bool = var_31_bool == var_290_int; // 0x2eb Eq
	if(var_291_bool == 0) goto Label_764; // 0x2ec JumpB
	var_292_string = ""; // 0x2ed PushV
	var_292_string = "Neutral"; // 0x2ee MovS
	func_558(var_32_cvector, var_292_string); // 0x2ef NEW_2
	var_293_int = 531297; // 0x2f1 PushI
	SetMessage(var_293_int); // 0x2f2 TObjFunc
	ClearReplies(); // 0x2f4 TObjFunc
	var_294_int = 531298; // 0x2f6 PushI
	var_295_int = 32488; // 0x2f7 PushI
	var_296_int = 32618; // 0x2f8 PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0x2f9 TObjFunc
	return 0; // 0x2fb Return
	
Label_764:
	var_297_int = 32488; // 0x2fc PushI
	var_298_bool = var_31_bool == var_297_int; // 0x2fd Eq
	if(var_298_bool == 0) goto Label_787; // 0x2fe JumpB
	var_299_string = ""; // 0x2ff PushV
	var_299_string = "Neutral"; // 0x300 MovS
	func_558(var_32_cvector, var_299_string); // 0x301 NEW_2
	var_300_int = 531180; // 0x303 PushI
	SetMessage(var_300_int); // 0x304 TObjFunc
	ClearReplies(); // 0x306 TObjFunc
	var_301_int = 531299; // 0x308 PushI
	var_302_int = 32620; // 0x309 PushI
	var_303_int = 32619; // 0x30a PushI
	AddReply(var_301_int, var_302_int, var_303_int); // 0x30b TObjFunc
	var_304_int = 531301; // 0x30d PushI
	var_305_int = 32620; // 0x30e PushI
	var_306_int = 32621; // 0x30f PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0x310 TObjFunc
	return 0; // 0x312 Return
	
Label_787:
	var_307_int = 32620; // 0x313 PushI
	var_308_bool = var_31_bool == var_307_int; // 0x314 Eq
	if(var_308_bool == 0) goto Label_805; // 0x315 JumpB
	var_309_string = ""; // 0x316 PushV
	var_309_string = "Neutral"; // 0x317 MovS
	func_558(var_32_cvector, var_309_string); // 0x318 NEW_2
	var_310_int = 531300; // 0x31a PushI
	SetMessage(var_310_int); // 0x31b TObjFunc
	ClearReplies(); // 0x31d TObjFunc
	var_311_int = 531181; // 0x31f PushI
	var_312_int = -1; // 0x320 PushI
	var_313_int = 32489; // 0x321 PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0x322 TObjFunc
	return 0; // 0x324 Return
	
Label_805:
	var_314_int = 32623; // 0x325 PushI
	var_315_bool = var_31_bool == var_314_int; // 0x326 Eq
	if(var_315_bool == 0) goto Label_828; // 0x327 JumpB
	var_316_string = ""; // 0x328 PushV
	var_316_string = "Neutral"; // 0x329 MovS
	func_558(var_32_cvector, var_316_string); // 0x32a NEW_2
	var_317_int = 531302; // 0x32c PushI
	SetMessage(var_317_int); // 0x32d TObjFunc
	ClearReplies(); // 0x32f TObjFunc
	var_318_int = 531303; // 0x331 PushI
	var_319_int = 32481; // 0x332 PushI
	var_320_int = 32624; // 0x333 PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0x334 TObjFunc
	var_321_int = 531304; // 0x336 PushI
	var_322_int = 32481; // 0x337 PushI
	var_323_int = 32625; // 0x338 PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0x339 TObjFunc
	return 0; // 0x33b Return
	
Label_828:
	var_324_int = 32481; // 0x33c PushI
	var_325_bool = var_31_bool == var_324_int; // 0x33d Eq
	if(var_325_bool == 0) goto Label_851; // 0x33e JumpB
	var_326_string = ""; // 0x33f PushV
	var_326_string = "Neutral"; // 0x340 MovS
	func_558(var_32_cvector, var_326_string); // 0x341 NEW_2
	var_327_int = 531173; // 0x343 PushI
	SetMessage(var_327_int); // 0x344 TObjFunc
	ClearReplies(); // 0x346 TObjFunc
	var_328_int = 531174; // 0x348 PushI
	var_329_int = 32483; // 0x349 PushI
	var_330_int = 32482; // 0x34a PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0x34b TObjFunc
	var_331_int = 531305; // 0x34d PushI
	var_332_int = 32483; // 0x34e PushI
	var_333_int = 32627; // 0x34f PushI
	AddReply(var_331_int, var_332_int, var_333_int); // 0x350 TObjFunc
	return 0; // 0x352 Return
	
Label_851:
	var_334_int = 32483; // 0x353 PushI
	var_335_bool = var_31_bool == var_334_int; // 0x354 Eq
	if(var_335_bool == 0) goto Label_874; // 0x355 JumpB
	var_336_string = ""; // 0x356 PushV
	var_336_string = "Neutral"; // 0x357 MovS
	func_558(var_32_cvector, var_336_string); // 0x358 NEW_2
	var_337_int = 531175; // 0x35a PushI
	SetMessage(var_337_int); // 0x35b TObjFunc
	ClearReplies(); // 0x35d TObjFunc
	var_338_int = 531176; // 0x35f PushI
	var_339_int = 32485; // 0x360 PushI
	var_340_int = 32484; // 0x361 PushI
	AddReply(var_338_int, var_339_int, var_340_int); // 0x362 TObjFunc
	var_341_int = 531306; // 0x364 PushI
	var_342_int = 32630; // 0x365 PushI
	var_343_int = 32629; // 0x366 PushI
	AddReply(var_341_int, var_342_int, var_343_int); // 0x367 TObjFunc
	return 0; // 0x369 Return
	
Label_874:
	var_344_int = 32630; // 0x36a PushI
	var_345_bool = var_31_bool == var_344_int; // 0x36b Eq
	if(var_345_bool == 0) goto Label_892; // 0x36c JumpB
	var_346_string = ""; // 0x36d PushV
	var_346_string = "Neutral"; // 0x36e MovS
	func_558(var_32_cvector, var_346_string); // 0x36f NEW_2
	var_347_int = 531307; // 0x371 PushI
	SetMessage(var_347_int); // 0x372 TObjFunc
	ClearReplies(); // 0x374 TObjFunc
	var_348_int = 531308; // 0x376 PushI
	var_349_int = 32485; // 0x377 PushI
	var_350_int = 32631; // 0x378 PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0x379 TObjFunc
	return 0; // 0x37b Return
	
Label_892:
	var_351_int = 32485; // 0x37c PushI
	var_352_bool = var_31_bool == var_351_int; // 0x37d Eq
	if(var_352_bool == 0) goto Label_915; // 0x37e JumpB
	var_353_string = ""; // 0x37f PushV
	var_353_string = "Neutral"; // 0x380 MovS
	func_558(var_32_cvector, var_353_string); // 0x381 NEW_2
	var_354_int = 531177; // 0x383 PushI
	SetMessage(var_354_int); // 0x384 TObjFunc
	ClearReplies(); // 0x386 TObjFunc
	var_355_int = 531178; // 0x388 PushI
	var_356_int = -1; // 0x389 PushI
	var_357_int = 32486; // 0x38a PushI
	AddReply(var_355_int, var_356_int, var_357_int); // 0x38b TObjFunc
	var_358_int = 531309; // 0x38d PushI
	var_359_int = -1; // 0x38e PushI
	var_360_int = 32633; // 0x38f PushI
	AddReply(var_358_int, var_359_int, var_360_int); // 0x390 TObjFunc
	return 0; // 0x392 Return
	
Label_915:
	var_361_int = 31853; // 0x393 PushI
	var_362_bool = var_31_bool == var_361_int; // 0x394 Eq
	if(var_362_bool == 0) goto Label_938; // 0x395 JumpB
	var_363_string = ""; // 0x396 PushV
	var_363_string = "Dream"; // 0x397 MovS
	func_558(var_32_cvector, var_363_string); // 0x398 NEW_2
	var_364_int = 530487; // 0x39a PushI
	SetMessage(var_364_int); // 0x39b TObjFunc
	ClearReplies(); // 0x39d TObjFunc
	var_365_int = 531310; // 0x39f PushI
	var_366_int = 32635; // 0x3a0 PushI
	var_367_int = 32634; // 0x3a1 PushI
	AddReply(var_365_int, var_366_int, var_367_int); // 0x3a2 TObjFunc
	var_368_int = 531314; // 0x3a4 PushI
	var_369_int = 32635; // 0x3a5 PushI
	var_370_int = 32638; // 0x3a6 PushI
	AddReply(var_368_int, var_369_int, var_370_int); // 0x3a7 TObjFunc
	return 0; // 0x3a9 Return
	
Label_938:
	var_371_int = 32635; // 0x3aa PushI
	var_372_bool = var_31_bool == var_371_int; // 0x3ab Eq
	if(var_372_bool == 0) goto Label_961; // 0x3ac JumpB
	var_373_string = ""; // 0x3ad PushV
	var_373_string = "Dream"; // 0x3ae MovS
	func_558(var_32_cvector, var_373_string); // 0x3af NEW_2
	var_374_int = 531311; // 0x3b1 PushI
	SetMessage(var_374_int); // 0x3b2 TObjFunc
	ClearReplies(); // 0x3b4 TObjFunc
	var_375_int = 531312; // 0x3b6 PushI
	var_376_int = 32637; // 0x3b7 PushI
	var_377_int = 32636; // 0x3b8 PushI
	AddReply(var_375_int, var_376_int, var_377_int); // 0x3b9 TObjFunc
	var_378_int = 531315; // 0x3bb PushI
	var_379_int = 32637; // 0x3bc PushI
	var_380_int = 32639; // 0x3bd PushI
	AddReply(var_378_int, var_379_int, var_380_int); // 0x3be TObjFunc
	return 0; // 0x3c0 Return
	
Label_961:
	var_381_int = 32637; // 0x3c1 PushI
	var_382_bool = var_31_bool == var_381_int; // 0x3c2 Eq
	if(var_382_bool == 0) goto Label_979; // 0x3c3 JumpB
	var_383_string = ""; // 0x3c4 PushV
	var_383_string = "Dream"; // 0x3c5 MovS
	func_558(var_32_cvector, var_383_string); // 0x3c6 NEW_2
	var_384_int = 531313; // 0x3c8 PushI
	SetMessage(var_384_int); // 0x3c9 TObjFunc
	ClearReplies(); // 0x3cb TObjFunc
	var_385_int = 530488; // 0x3cd PushI
	var_386_int = -1; // 0x3ce PushI
	var_387_int = 31854; // 0x3cf PushI
	AddReply(var_385_int, var_386_int, var_387_int); // 0x3d0 TObjFunc
	return 0; // 0x3d2 Return
	
Label_979:
	var_388_int = 32610; // 0x3d3 PushI
	var_389_bool = var_31_bool == var_388_int; // 0x3d4 Eq
	if(var_389_bool == 0) goto Label_1002; // 0x3d5 JumpB
	var_390_string = ""; // 0x3d6 PushV
	var_390_string = "Suspicion"; // 0x3d7 MovS
	func_558(var_32_cvector, var_390_string); // 0x3d8 NEW_2
	var_391_int = 531293; // 0x3da PushI
	SetMessage(var_391_int); // 0x3db TObjFunc
	ClearReplies(); // 0x3dd TObjFunc
	var_392_int = 531291; // 0x3df PushI
	var_393_int = 32473; // 0x3e0 PushI
	var_394_int = 32608; // 0x3e1 PushI
	AddReply(var_392_int, var_393_int, var_394_int); // 0x3e2 TObjFunc
	var_395_int = 531163; // 0x3e4 PushI
	var_396_int = 32475; // 0x3e5 PushI
	var_397_int = 32471; // 0x3e6 PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0x3e7 TObjFunc
	return 0; // 0x3e9 Return
	
Label_1002:
	var_398_int = 32473; // 0x3ea PushI
	var_399_bool = var_31_bool == var_398_int; // 0x3eb Eq
	if(var_399_bool == 0) goto Label_1025; // 0x3ec JumpB
	var_400_string = ""; // 0x3ed PushV
	var_400_string = "Dream"; // 0x3ee MovS
	func_558(var_32_cvector, var_400_string); // 0x3ef NEW_2
	var_401_int = 531165; // 0x3f1 PushI
	SetMessage(var_401_int); // 0x3f2 TObjFunc
	ClearReplies(); // 0x3f4 TObjFunc
	var_402_int = 531166; // 0x3f6 PushI
	var_403_int = 32475; // 0x3f7 PushI
	var_404_int = 32474; // 0x3f8 PushI
	AddReply(var_402_int, var_403_int, var_404_int); // 0x3f9 TObjFunc
	var_405_int = 531294; // 0x3fb PushI
	var_406_int = 32476; // 0x3fc PushI
	var_407_int = 32612; // 0x3fd PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0x3fe TObjFunc
	return 0; // 0x400 Return
	
Label_1025:
	var_408_int = 32475; // 0x401 PushI
	var_409_bool = var_31_bool == var_408_int; // 0x402 Eq
	if(var_409_bool == 0) goto Label_1048; // 0x403 JumpB
	var_410_string = ""; // 0x404 PushV
	var_410_string = "Dream"; // 0x405 MovS
	func_558(var_32_cvector, var_410_string); // 0x406 NEW_2
	var_411_int = 531167; // 0x408 PushI
	SetMessage(var_411_int); // 0x409 TObjFunc
	ClearReplies(); // 0x40b TObjFunc
	var_412_int = 531164; // 0x40d PushI
	var_413_int = 32476; // 0x40e PushI
	var_414_int = 32472; // 0x40f PushI
	AddReply(var_412_int, var_413_int, var_414_int); // 0x410 TObjFunc
	var_415_int = 531295; // 0x412 PushI
	var_416_int = 32478; // 0x413 PushI
	var_417_int = 32614; // 0x414 PushI
	AddReply(var_415_int, var_416_int, var_417_int); // 0x415 TObjFunc
	return 0; // 0x417 Return
	
Label_1048:
	var_418_int = 32476; // 0x418 PushI
	var_419_bool = var_31_bool == var_418_int; // 0x419 Eq
	if(var_419_bool == 0) goto Label_1066; // 0x41a JumpB
	var_420_string = ""; // 0x41b PushV
	var_420_string = "Dream"; // 0x41c MovS
	func_558(var_32_cvector, var_420_string); // 0x41d NEW_2
	var_421_int = 531168; // 0x41f PushI
	SetMessage(var_421_int); // 0x420 TObjFunc
	ClearReplies(); // 0x422 TObjFunc
	var_422_int = 531169; // 0x424 PushI
	var_423_int = 32478; // 0x425 PushI
	var_424_int = 32477; // 0x426 PushI
	AddReply(var_422_int, var_423_int, var_424_int); // 0x427 TObjFunc
	return 0; // 0x429 Return
	
Label_1066:
	var_425_int = 32478; // 0x42a PushI
	var_426_bool = var_31_bool == var_425_int; // 0x42b Eq
	if(var_426_bool == 0) goto Label_1089; // 0x42c JumpB
	var_427_string = ""; // 0x42d PushV
	var_427_string = "Suspicion"; // 0x42e MovS
	func_558(var_32_cvector, var_427_string); // 0x42f NEW_2
	var_428_int = 531170; // 0x431 PushI
	SetMessage(var_428_int); // 0x432 TObjFunc
	ClearReplies(); // 0x434 TObjFunc
	var_429_int = 531171; // 0x436 PushI
	var_430_int = -1; // 0x437 PushI
	var_431_int = 32479; // 0x438 PushI
	AddReply(var_429_int, var_430_int, var_431_int); // 0x439 TObjFunc
	var_432_int = 531296; // 0x43b PushI
	var_433_int = -1; // 0x43c PushI
	var_434_int = 32616; // 0x43d PushI
	AddReply(var_432_int, var_433_int, var_434_int); // 0x43e TObjFunc
	return 0; // 0x440 Return
	
Label_1089:
	var_3_string = 1; // 0x441 TMovB
	var_435_bool = 0; // 0x442 PushV
	func_2974(var_435_bool); // 0x443 NEW_2
	if(var_435_bool == 0) goto Label_1097; // 0x445 JumpB
	lshStopAnimation(); // 0x446 Func
	goto Label_1099; // 0x448 Jump
	
Label_1099:
	return 0; // 0x44b Return
	
Label_1097:
	StopAnimation(); // 0x449 Func
	
Label_1101:
	return 0; // 0x44d Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0x4fa PushI
	if(var_33_int == 0) goto Label_1401; // 0x4fb JumpB
	func_2831(); // 0x4fd NEW_2
	var_35_int = 36919; // 0x4ff PushI
	var_36_bool = var_32_cvector == var_35_int; // 0x500 Eq
	if(var_36_bool == 0) goto Label_1287; // 0x501 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x502 PushV
	var_37_object = var_1_object; // 0x503 MovT
	var_38_object = var_0_object; // 0x504 MovT
	func_3098(); // 0x505 NEW_2
	
Label_1287:
	var_41_int = 36918; // 0x507 PushI
	var_42_bool = var_31_bool == var_41_int; // 0x508 Eq
	if(var_42_bool == 0) goto Label_1320; // 0x509 JumpB
	var_43_string = ""; // 0x50a PushV
	var_43_string = "Autizm"; // 0x50b MovS
	func_1251(var_32_cvector, var_43_string); // 0x50c NEW_2
	var_60_int = 535243; // 0x50e PushI
	SetMessage(var_60_int); // 0x50f TObjFunc
	ClearReplies(); // 0x511 TObjFunc
	var_61_bool = 0; var_62_object = Obj(); // 0x513 PushV
	var_62_object = var_1_object; // 0x514 MovT
	func_3211(var_62_object); // 0x515 NEW_2
	if(var_61_bool == 0) goto Label_1309; // 0x517 JumpB
	var_69_int = 535244; // 0x518 PushI
	var_70_int = 37054; // 0x519 PushI
	var_71_int = 36919; // 0x51a PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0x51b TObjFunc
	
Label_1309:
	var_72_int = 535367; // 0x51d PushI
	var_73_int = -1; // 0x51e PushI
	var_74_int = 37052; // 0x51f PushI
	AddReply(var_72_int, var_73_int, var_74_int); // 0x520 TObjFunc
	var_75_int = 535368; // 0x522 PushI
	var_76_int = -1; // 0x523 PushI
	var_77_int = 37053; // 0x524 PushI
	AddReply(var_75_int, var_76_int, var_77_int); // 0x525 TObjFunc
	return 0; // 0x527 Return
	
Label_1320:
	var_78_int = 37054; // 0x528 PushI
	var_79_bool = var_31_bool == var_78_int; // 0x529 Eq
	if(var_79_bool == 0) goto Label_1343; // 0x52a JumpB
	var_80_string = ""; // 0x52b PushV
	var_80_string = "Autizm"; // 0x52c MovS
	func_1251(var_32_cvector, var_80_string); // 0x52d NEW_2
	var_81_int = 535369; // 0x52f PushI
	SetMessage(var_81_int); // 0x530 TObjFunc
	ClearReplies(); // 0x532 TObjFunc
	var_82_int = 535370; // 0x534 PushI
	var_83_int = 37056; // 0x535 PushI
	var_84_int = 37055; // 0x536 PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x537 TObjFunc
	var_85_int = 535375; // 0x539 PushI
	var_86_int = -1; // 0x53a PushI
	var_87_int = 37060; // 0x53b PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0x53c TObjFunc
	return 0; // 0x53e Return
	
Label_1343:
	var_88_int = 37056; // 0x53f PushI
	var_89_bool = var_31_bool == var_88_int; // 0x540 Eq
	if(var_89_bool == 0) goto Label_1366; // 0x541 JumpB
	var_90_string = ""; // 0x542 PushV
	var_90_string = "Autizm"; // 0x543 MovS
	func_1251(var_32_cvector, var_90_string); // 0x544 NEW_2
	var_91_int = 535371; // 0x546 PushI
	SetMessage(var_91_int); // 0x547 TObjFunc
	ClearReplies(); // 0x549 TObjFunc
	var_92_int = 535372; // 0x54b PushI
	var_93_int = 37058; // 0x54c PushI
	var_94_int = 37057; // 0x54d PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x54e TObjFunc
	var_95_int = 535376; // 0x550 PushI
	var_96_int = -1; // 0x551 PushI
	var_97_int = 37061; // 0x552 PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0x553 TObjFunc
	return 0; // 0x555 Return
	
Label_1366:
	var_98_int = 37058; // 0x556 PushI
	var_99_bool = var_31_bool == var_98_int; // 0x557 Eq
	if(var_99_bool == 0) goto Label_1389; // 0x558 JumpB
	var_100_string = ""; // 0x559 PushV
	var_100_string = "Dream"; // 0x55a MovS
	func_1251(var_32_cvector, var_100_string); // 0x55b NEW_2
	var_101_int = 535373; // 0x55d PushI
	SetMessage(var_101_int); // 0x55e TObjFunc
	ClearReplies(); // 0x560 TObjFunc
	var_102_int = 535374; // 0x562 PushI
	var_103_int = -1; // 0x563 PushI
	var_104_int = 37059; // 0x564 PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x565 TObjFunc
	var_105_int = 535377; // 0x567 PushI
	var_106_int = -1; // 0x568 PushI
	var_107_int = 37062; // 0x569 PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x56a TObjFunc
	return 0; // 0x56c Return
	
Label_1389:
	var_3_string = 1; // 0x56d TMovB
	var_108_bool = 0; // 0x56e PushV
	func_2974(var_108_bool); // 0x56f NEW_2
	if(var_108_bool == 0) goto Label_1397; // 0x571 JumpB
	lshStopAnimation(); // 0x572 Func
	goto Label_1399; // 0x574 Jump
	
Label_1399:
	return 0; // 0x577 Return
	
Label_1397:
	StopAnimation(); // 0x575 Func
	
Label_1401:
	return 0; // 0x579 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0x61c PushI
	if(var_33_int == 0) goto Label_1640; // 0x61d JumpB
	func_2831(); // 0x61f NEW_2
	var_35_int = 19166; // 0x621 PushI
	var_36_bool = var_31_bool == var_35_int; // 0x622 Eq
	if(var_36_bool == 0) goto Label_1592; // 0x623 JumpB
	var_37_string = ""; // 0x624 PushV
	var_37_string = "Neutral"; // 0x625 MovS
	func_1541(var_32_cvector, var_37_string); // 0x626 NEW_2
	var_54_int = 518033; // 0x628 PushI
	SetMessage(var_54_int); // 0x629 TObjFunc
	ClearReplies(); // 0x62b TObjFunc
	var_55_int = 518034; // 0x62d PushI
	var_56_int = 28430; // 0x62e PushI
	var_57_int = 19167; // 0x62f PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0x630 TObjFunc
	var_58_int = 527134; // 0x632 PushI
	var_59_int = 28433; // 0x633 PushI
	var_60_int = 28432; // 0x634 PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0x635 TObjFunc
	return 0; // 0x637 Return
	
Label_1592:
	var_61_int = 28433; // 0x638 PushI
	var_62_bool = var_31_bool == var_61_int; // 0x639 Eq
	if(var_62_bool == 0) goto Label_1610; // 0x63a JumpB
	var_63_string = ""; // 0x63b PushV
	var_63_string = "Neutral"; // 0x63c MovS
	func_1541(var_32_cvector, var_63_string); // 0x63d NEW_2
	var_64_int = 527135; // 0x63f PushI
	SetMessage(var_64_int); // 0x640 TObjFunc
	ClearReplies(); // 0x642 TObjFunc
	var_65_int = 527137; // 0x644 PushI
	var_66_int = -1; // 0x645 PushI
	var_67_int = 28435; // 0x646 PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0x647 TObjFunc
	return 0; // 0x649 Return
	
Label_1610:
	var_68_int = 28430; // 0x64a PushI
	var_69_bool = var_31_bool == var_68_int; // 0x64b Eq
	if(var_69_bool == 0) goto Label_1628; // 0x64c JumpB
	var_70_string = ""; // 0x64d PushV
	var_70_string = "Neutral"; // 0x64e MovS
	func_1541(var_32_cvector, var_70_string); // 0x64f NEW_2
	var_71_int = 527132; // 0x651 PushI
	SetMessage(var_71_int); // 0x652 TObjFunc
	ClearReplies(); // 0x654 TObjFunc
	var_72_int = 527133; // 0x656 PushI
	var_73_int = -1; // 0x657 PushI
	var_74_int = 28431; // 0x658 PushI
	AddReply(var_72_int, var_73_int, var_74_int); // 0x659 TObjFunc
	return 0; // 0x65b Return
	
Label_1628:
	var_3_string = 1; // 0x65c TMovB
	var_75_bool = 0; // 0x65d PushV
	func_2974(var_75_bool); // 0x65e NEW_2
	if(var_75_bool == 0) goto Label_1636; // 0x660 JumpB
	lshStopAnimation(); // 0x661 Func
	goto Label_1638; // 0x663 Jump
	
Label_1638:
	return 0; // 0x666 Return
	
Label_1636:
	StopAnimation(); // 0x664 Func
	
Label_1640:
	return 0; // 0x668 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0x732 PushI
	if(var_33_int == 0) goto Label_2067; // 0x733 JumpB
	func_2831(); // 0x735 NEW_2
	var_35_int = 22586; // 0x737 PushI
	var_36_bool = var_31_bool == var_35_int; // 0x738 Eq
	if(var_36_bool == 0) goto Label_1909; // 0x739 JumpB
	var_37_bool = 0; // 0x73a PushV
	var_37_bool = 0; // 0x73b MovB
	var_38_bool = 0; var_39_object = Obj(); // 0x73c PushV
	var_39_object = var_1_object; // 0x73d MovT
	func_3104(var_39_object); // 0x73e NEW_2
	if(var_38_bool == 0) goto Label_1863; // 0x740 JumpB
	var_46_bool = 0; var_47_object = Obj(); // 0x741 PushV
	var_47_object = var_1_object; // 0x742 MovT
	func_3116(var_47_object); // 0x743 NEW_2
	if(var_46_bool == 0) goto Label_1863; // 0x745 JumpB
	var_37_bool = 1; // 0x746 MovB
	
Label_1863:
	if(var_37_bool == 0) goto Label_1889; // 0x747 JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0x748 PushV
	var_52_object = var_1_object; // 0x749 MovT
	var_53_object = var_0_object; // 0x74a MovT
	func_2987(); // 0x74b NEW_2
	var_56_string = ""; // 0x74d PushV
	var_56_string = "Fear"; // 0x74e MovS
	func_1819(var_32_cvector, var_56_string); // 0x74f NEW_2
	var_73_int = 521408; // 0x751 PushI
	SetMessage(var_73_int); // 0x752 TObjFunc
	ClearReplies(); // 0x754 TObjFunc
	var_74_int = 521409; // 0x756 PushI
	var_75_int = 25093; // 0x757 PushI
	var_76_int = 22587; // 0x758 PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0x759 TObjFunc
	var_77_int = 523832; // 0x75b PushI
	var_78_int = -1; // 0x75c PushI
	var_79_int = 25104; // 0x75d PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0x75e TObjFunc
	return 0; // 0x760 Return
	
Label_1889:
	var_80_string = ""; // 0x761 PushV
	var_80_string = "Fear"; // 0x762 MovS
	func_1819(var_32_cvector, var_80_string); // 0x763 NEW_2
	var_81_int = 521410; // 0x765 PushI
	SetMessage(var_81_int); // 0x766 TObjFunc
	ClearReplies(); // 0x768 TObjFunc
	var_82_int = 521411; // 0x76a PushI
	var_83_int = 25088; // 0x76b PushI
	var_84_int = 22589; // 0x76c PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x76d TObjFunc
	var_85_int = 523816; // 0x76f PushI
	var_86_int = -1; // 0x770 PushI
	var_87_int = 25087; // 0x771 PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0x772 TObjFunc
	return 0; // 0x774 Return
	
Label_1909:
	var_88_int = 25088; // 0x775 PushI
	var_89_bool = var_31_bool == var_88_int; // 0x776 Eq
	if(var_89_bool == 0) goto Label_1927; // 0x777 JumpB
	var_90_string = ""; // 0x778 PushV
	var_90_string = "Dream"; // 0x779 MovS
	func_1819(var_32_cvector, var_90_string); // 0x77a NEW_2
	var_91_int = 523817; // 0x77c PushI
	SetMessage(var_91_int); // 0x77d TObjFunc
	ClearReplies(); // 0x77f TObjFunc
	var_92_int = 523818; // 0x781 PushI
	var_93_int = 25090; // 0x782 PushI
	var_94_int = 25089; // 0x783 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x784 TObjFunc
	return 0; // 0x786 Return
	
Label_1927:
	var_95_int = 25090; // 0x787 PushI
	var_96_bool = var_31_bool == var_95_int; // 0x788 Eq
	if(var_96_bool == 0) goto Label_1950; // 0x789 JumpB
	var_97_string = ""; // 0x78a PushV
	var_97_string = "Dream"; // 0x78b MovS
	func_1819(var_32_cvector, var_97_string); // 0x78c NEW_2
	var_98_int = 523819; // 0x78e PushI
	SetMessage(var_98_int); // 0x78f TObjFunc
	ClearReplies(); // 0x791 TObjFunc
	var_99_int = 523820; // 0x793 PushI
	var_100_int = -1; // 0x794 PushI
	var_101_int = 25091; // 0x795 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x796 TObjFunc
	var_102_int = 523821; // 0x798 PushI
	var_103_int = -1; // 0x799 PushI
	var_104_int = 25092; // 0x79a PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x79b TObjFunc
	return 0; // 0x79d Return
	
Label_1950:
	var_105_int = 25093; // 0x79e PushI
	var_106_bool = var_31_bool == var_105_int; // 0x79f Eq
	if(var_106_bool == 0) goto Label_1973; // 0x7a0 JumpB
	var_107_string = ""; // 0x7a1 PushV
	var_107_string = "Fear"; // 0x7a2 MovS
	func_1819(var_32_cvector, var_107_string); // 0x7a3 NEW_2
	var_108_int = 523822; // 0x7a5 PushI
	SetMessage(var_108_int); // 0x7a6 TObjFunc
	ClearReplies(); // 0x7a8 TObjFunc
	var_109_int = 523823; // 0x7aa PushI
	var_110_int = 25095; // 0x7ab PushI
	var_111_int = 25094; // 0x7ac PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0x7ad TObjFunc
	var_112_int = 523833; // 0x7af PushI
	var_113_int = 25106; // 0x7b0 PushI
	var_114_int = 25105; // 0x7b1 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x7b2 TObjFunc
	return 0; // 0x7b4 Return
	
Label_1973:
	var_115_int = 25106; // 0x7b5 PushI
	var_116_bool = var_31_bool == var_115_int; // 0x7b6 Eq
	if(var_116_bool == 0) goto Label_1991; // 0x7b7 JumpB
	var_117_string = ""; // 0x7b8 PushV
	var_117_string = "Suspicion"; // 0x7b9 MovS
	func_1819(var_32_cvector, var_117_string); // 0x7ba NEW_2
	var_118_int = 523834; // 0x7bc PushI
	SetMessage(var_118_int); // 0x7bd TObjFunc
	ClearReplies(); // 0x7bf TObjFunc
	var_119_int = 523835; // 0x7c1 PushI
	var_120_int = 25097; // 0x7c2 PushI
	var_121_int = 25107; // 0x7c3 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x7c4 TObjFunc
	return 0; // 0x7c6 Return
	
Label_1991:
	var_122_int = 25095; // 0x7c7 PushI
	var_123_bool = var_31_bool == var_122_int; // 0x7c8 Eq
	if(var_123_bool == 0) goto Label_2014; // 0x7c9 JumpB
	var_124_string = ""; // 0x7ca PushV
	var_124_string = "Suspicion"; // 0x7cb MovS
	func_1819(var_32_cvector, var_124_string); // 0x7cc NEW_2
	var_125_int = 523824; // 0x7ce PushI
	SetMessage(var_125_int); // 0x7cf TObjFunc
	ClearReplies(); // 0x7d1 TObjFunc
	var_126_int = 523825; // 0x7d3 PushI
	var_127_int = 25097; // 0x7d4 PushI
	var_128_int = 25096; // 0x7d5 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x7d6 TObjFunc
	var_129_int = 523827; // 0x7d8 PushI
	var_130_int = 25097; // 0x7d9 PushI
	var_131_int = 25098; // 0x7da PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x7db TObjFunc
	return 0; // 0x7dd Return
	
Label_2014:
	var_132_int = 25097; // 0x7de PushI
	var_133_bool = var_31_bool == var_132_int; // 0x7df Eq
	if(var_133_bool == 0) goto Label_2037; // 0x7e0 JumpB
	var_134_string = ""; // 0x7e1 PushV
	var_134_string = "Suspicion"; // 0x7e2 MovS
	func_1819(var_32_cvector, var_134_string); // 0x7e3 NEW_2
	var_135_int = 523826; // 0x7e5 PushI
	SetMessage(var_135_int); // 0x7e6 TObjFunc
	ClearReplies(); // 0x7e8 TObjFunc
	var_136_int = 523828; // 0x7ea PushI
	var_137_int = 25101; // 0x7eb PushI
	var_138_int = 25100; // 0x7ec PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x7ed TObjFunc
	var_139_int = 523836; // 0x7ef PushI
	var_140_int = -1; // 0x7f0 PushI
	var_141_int = 25109; // 0x7f1 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x7f2 TObjFunc
	return 0; // 0x7f4 Return
	
Label_2037:
	var_142_int = 25101; // 0x7f5 PushI
	var_143_bool = var_31_bool == var_142_int; // 0x7f6 Eq
	if(var_143_bool == 0) goto Label_2055; // 0x7f7 JumpB
	var_144_string = ""; // 0x7f8 PushV
	var_144_string = "Fear"; // 0x7f9 MovS
	func_1819(var_32_cvector, var_144_string); // 0x7fa NEW_2
	var_145_int = 523829; // 0x7fc PushI
	SetMessage(var_145_int); // 0x7fd TObjFunc
	ClearReplies(); // 0x7ff TObjFunc
	var_146_int = 523830; // 0x801 PushI
	var_147_int = -1; // 0x802 PushI
	var_148_int = 25102; // 0x803 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x804 TObjFunc
	return 0; // 0x806 Return
	
Label_2055:
	var_3_string = 1; // 0x807 TMovB
	var_149_bool = 0; // 0x808 PushV
	func_2974(var_149_bool); // 0x809 NEW_2
	if(var_149_bool == 0) goto Label_2063; // 0x80b JumpB
	lshStopAnimation(); // 0x80c Func
	goto Label_2065; // 0x80e Jump
	
Label_2065:
	return 0; // 0x811 Return
	
Label_2063:
	StopAnimation(); // 0x80f Func
	
Label_2067:
	return 0; // 0x813 Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_cvector)
{
	var_33_int = 1; // 0x8b6 PushI
	if(var_33_int == 0) goto Label_2270; // 0x8b7 JumpB
	func_2831(); // 0x8b9 NEW_2
	var_35_int = 42560; // 0x8bb PushI
	var_36_bool = var_31_int == var_35_int; // 0x8bc Eq
	if(var_36_bool == 0) goto Label_2258; // 0x8bd JumpB
	var_37_string = ""; // 0x8be PushV
	var_37_string = "Neutral"; // 0x8bf MovS
	func_2207(var_32_cvector, var_37_string); // 0x8c0 NEW_2
	var_54_int = 540551; // 0x8c2 PushI
	SetMessage(var_54_int); // 0x8c3 TObjFunc
	ClearReplies(); // 0x8c5 TObjFunc
	var_55_int = 540552; // 0x8c7 PushI
	var_56_int = -1; // 0x8c8 PushI
	var_57_int = 42561; // 0x8c9 PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0x8ca TObjFunc
	var_58_int = 540795; // 0x8cc PushI
	var_59_int = -1; // 0x8cd PushI
	var_60_int = 42844; // 0x8ce PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0x8cf TObjFunc
	return 0; // 0x8d1 Return
	
Label_2258:
	var_3_string = 1; // 0x8d2 TMovB
	var_61_bool = 0; // 0x8d3 PushV
	func_2974(var_61_bool); // 0x8d4 NEW_2
	if(var_61_bool == 0) goto Label_2266; // 0x8d6 JumpB
	lshStopAnimation(); // 0x8d7 Func
	goto Label_2268; // 0x8d9 Jump
	
Label_2268:
	return 0; // 0x8dc Return
	
Label_2266:
	StopAnimation(); // 0x8da Func
	
Label_2270:
	return 0; // 0x8de Return
}


task_12_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_int)
{
	var_32_int = 10; // 0x92c PushI
	var_33_bool = var_31_int == var_32_int; // 0x92d Eq
	if(var_33_bool == 0) goto Label_2384; // 0x92e JumpB
	func_2343(); // 0x930 NEW_2
	var_35_bool = 0; // 0x932 PushV
	var_35_bool = 0; // 0x933 MovB
	var_36_bool = 0; // 0x934 PushV
	func_2557(var_36_bool); // 0x935 NEW_2
	if(var_36_bool == 0) goto Label_2365; // 0x937 JumpB
	var_39_bool = 0; // 0x938 PushV
	func_2312(var_39_bool); // 0x939 NEW_2
	if(var_39_bool == 0) goto Label_2365; // 0x93b JumpB
	var_35_bool = 1; // 0x93c MovB
	
Label_2365:
	if(var_35_bool == 0) goto Label_2378; // 0x93d JumpB
	var_56_bool = 0; // 0x93e PushV
	func_2292(var_56_bool); // 0x93f NEW_2
	if(var_56_bool == 0) goto Label_2377; // 0x941 JumpB
	var_75_bool = 0; var_76_object = Obj(); // 0x942 PushV
	var_77_object = Obj(); // 0x943 PushV
	func_2838(var_77_object); // 0x944 NEW_2
	var_76_object = var_77_object; // 0x945 Mov
	func_2705(var_76_object); // 0x947 NEW_2
	
Label_2377:
	goto Label_2384; // 0x949 Jump
	
Label_2384:
	return 0; // 0x950 Return
	
Label_2378:
	func_2307(var_31_int); // 0x94b NEW_2
	func_2334(); // 0x94e NEW_2
}


task_12_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	func_2525(); // 0x952 NEW_2
	func_2343(); // 0x955 NEW_2
	lshStopSpeech(); // 0x957 Func
	lshStopAnimation(); // 0x959 Func
	StopAsync(); // 0x95b Func
	Hold(); // 0x95d Func
	return 0; // 0x95f Return
}


task_12_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	StopGroup0(); // 0x960 Func
	func_2343(); // 0x963 NEW_2
	var_32_string = ""; // 0x965 PushV
	var_32_string = "Neutral"; // 0x966 MovS
	func_2785(var_32_string); // 0x967 NEW_2
	func_2334(); // 0x96a NEW_2
	return 0; // 0x96c Return
}


task_12_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_bool)
{
	var_32_bool = var_31_bool; // 0x96e Push
	if(var_32_bool == 0) goto Label_2420; // 0x96f JumpB
	func_2334(); // 0x971 NEW_2
	goto Label_2424; // 0x973 Jump
	
Label_2424:
	return 0; // 0x978 Return
	
Label_2420:
	var_38_string = ""; // 0x974 PushV
	var_38_string = "Neutral"; // 0x975 MovS
	func_2785(var_38_string); // 0x976 NEW_2
}


task_12_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_object)
{
	var_32_bool = 0; var_33_bool = 0; // 0x979 PushV
	IsOverrideActive(var_33_bool); // 0x97a Func
	var_34_bool = var_33_bool == 0; // 0x97c Not
	if(var_34_bool == 0) goto Label_2453; // 0x97d JumpB
	EventDisable(0); // 0x97e EventDisable
	func_2525(); // 0x980 NEW_2
	var_35_bool = 0; var_36_object = Obj(); // 0x982 PushV
	var_36_object = var_31_object; // 0x983 Mov
	func_2548(var_36_object); // 0x984 NEW_2
	EventEnable(0); // 0x986 EventEnable
	var_49_object = Obj(); // 0x987 PushV
	var_49_object = var_31_object; // 0x988 Mov
	func_3396(var_49_object); // 0x989 NEW_2
	var_659_string = ""; // 0x98b PushV
	var_659_string = "Neutral"; // 0x98c MovS
	func_2785(var_659_string); // 0x98d NEW_2
	func_2343(); // 0x990 NEW_2
	func_2334(); // 0x993 NEW_2
	
Label_2453:
	return 2; // 0x995 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	var_31_bool = GlobalVars[1]; // 0x8df PushGE
	var_31_bool = 0; // 0x8e0 MovB
	GlobalVars[1] = var_31_bool; // 0x8e1 PopGE
	func_2278(var_30_cvector); // 0x8e3 NEW_2
	return 0; // 0x8e5 Return
}


func_3072()
{
	func_3223(); // 0xc02 NEW_2
	var_214_bool = 0; var_215_string = ""; var_216_string = ""; // 0xc04 PushV
	var_215_string = "quest_b10_03"; // 0xc05 MovS
	var_216_string = "completed"; // 0xc06 MovS
	func_2910(var_214_bool, var_215_string, var_216_string); // 0xc07 NEW_2
	return 0; // 0xc09 Return
}


func_0(var_0_object, var_279_int, var_280_object)
{
	var_282_object = Obj(); var_283_bool = 0; var_284_int = 0; var_285_bool = 0; var_286_object = Obj(); var_287_bool = 0; var_288_int = 0; var_289_bool = 0; // 0x0 PushV
	var_0_object = var_280_object; // 0x1 TMov
	var_290_bool = 0; var_291_object = Obj(); var_292_float = 0; // 0x2 PushV
	var_291_object = var_280_object; // 0x3 Mov
	var_292_float = 70.0; // 0x4 MovF
	func_2562(var_291_object, var_292_float); // 0x5 NEW_2
	var_293_bool = var_290_bool == 0; // 0x7 Not
	if(var_293_bool == 0) goto Label_11; // 0x8 JumpB
	var_279_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_286_object); // 0xb Func
	var_294_int = 0; // 0xd PushV
	func_2968(var_294_int); // 0xe NEW_2
	SetNPCName(var_294_int); // 0x10 ObjFunc
	var_295_int = 0; // 0x12 PushV
	func_2966(var_295_int); // 0x13 NEW_2
	SetNPCDescription(var_295_int); // 0x15 ObjFunc
	var_296_string = ""; // 0x17 PushV
	func_2970(var_296_string); // 0x18 NEW_2
	SetPhoto(var_296_string); // 0x1a ObjFunc
	var_297_string = ""; // 0x1c PushV
	func_2972(var_297_string); // 0x1d NEW_2
	SetPhoto2(var_297_string); // 0x1f ObjFunc
	var_298_int = 0; // 0x21 PushV
	func_3379(var_298_int); // 0x22 NEW_2
	SetPlayerName(var_298_int); // 0x24 ObjFunc
	var_288_int = -1; // 0x26 MovI
	IsOverrideActive(var_287_bool); // 0x27 Func
	var_299_bool = var_287_bool; // 0x29 Push
	if(var_299_bool == 0) goto Label_45; // 0x2a JumpB
	var_279_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_286_object); // 0x2d Func
	var_300_bool = 0; var_301_object = Obj(); // 0x2f PushV
	var_302_object = Obj(); // 0x30 PushV
	func_2838(var_302_object); // 0x31 NEW_2
	var_301_object = var_302_object; // 0x32 Mov
	func_2647(var_300_bool, var_301_object); // 0x34 NEW_2
	var_303_object = Obj(); var_304_object = Obj(); // 0x36 PushV
	var_303_object = var_280_object; // 0x37 Mov
	var_304_object = var_286_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_305_object, var_306_object, var_307_string, var_308_bool, var_303_object, var_304_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_289_bool); // 0x3d ObjFunc
	
Label_63:
	var_348_bool = var_289_bool == 0; // 0x3f Not
	if(var_348_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_289_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_349_object = Obj(); // 0x46 PushV
	var_349_object = var_280_object; // 0x47 Mov
	func_2630(); // 0x48 NEW_2
	StopDialog(var_286_object); // 0x4a Func
	GetReturnValue(var_288_int); // 0x4c ObjFunc
	var_279_int = var_288_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_2562(var_63_bool, var_65_float)
{
	var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_bool = 0; var_74_bool = 0; var_75_float = 0; var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_bool = 0; var_83_bool = 0; // 0xa02 PushV
	GetPosition(var_76_cvector); // 0xa03 ObjFunc
	GetEyesHeight(var_75_float); // 0xa05 ObjFunc
	var_84_float = GetByIndex(var_76_cvector, 1); // 0xa07 PushE
	var_84_float = var_84_float + var_75_float; // 0xa08 Add2
	SetByIndex(var_76_cvector, 1) = var_84_float; // 0xa09 PopE
	GetPosition(var_77_cvector); // 0xa0a Func
	GetEyesHeight(var_75_float); // 0xa0c Func
	var_85_float = GetByIndex(var_77_cvector, 1); // 0xa0e PushE
	var_85_float = var_85_float + var_75_float; // 0xa0f Add2
	SetByIndex(var_77_cvector, 1) = var_85_float; // 0xa10 PopE
	var_78_cvector = var_76_cvector - var_77_cvector; // 0xa11 Sub2
	var_86_float = GetByIndex(var_78_cvector, 1); // 0xa12 PushE
	var_86_float = 0; // 0xa13 MovI
	SetByIndex(var_78_cvector, 1) = var_86_float; // 0xa14 PopE
	var_87_int = var_78_cvector | var_78_cvector; // 0xa15 Or
	var_88_float = sqrt(var_87_int); // 0xa16 Sqrt
	var_78_cvector = var_78_cvector / var_78_cvector; // 0xa17 Div2
	var_79_cvector = -var_78_cvector; // 0xa18 Neg2
	var_89_float = var_78_cvector * var_65_float; // 0xa19 Mult
	var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); // 0xa1a PushV
	var_92_cvector = CVector(0.0, 1.0, 0.0); // 0xa1b PushVec
	var_91_cvector = var_79_cvector ^ var_92_cvector; // 0xa1c Xor2
	func_2844(var_90_cvector, var_91_cvector); // 0xa1d NEW_2
	var_98_int = 25; // 0xa1f PushI
	var_99_float = var_90_cvector * var_98_int; // 0xa20 Mult
	var_100_int = var_89_float + var_99_float; // 0xa21 Add
	var_101_cvector = CVector(0.0, 10.0, 0.0); // 0xa22 PushVec
	var_80_cvector = var_100_int - var_101_cvector; // 0xa23 Sub2
	var_81_cvector = var_77_cvector + var_80_cvector; // 0xa24 Add2
	IsOverrideActive(var_82_bool); // 0xa25 Func
	var_102_bool = var_82_bool; // 0xa27 Push
	if(var_102_bool == 0) goto Label_2603; // 0xa28 JumpB
	var_63_bool = 0; // 0xa29 MovB
	return 18; // 0xa2a Return
	
Label_2603:
	StopWorld(); // 0xa2b Func
	CameraTransit(var_81_cvector, var_79_cvector); // 0xa2d Func
	var_103_float = GetByIndex(var_80_cvector, 0); // 0xa2f PushE
	var_104_float = GetByIndex(var_80_cvector, 2); // 0xa30 PushE
	Rotate(var_103_float, var_104_float); // 0xa31 Func
	var_105_bool = 0; // 0xa33 PushV
	func_2974(var_105_bool); // 0xa34 NEW_2
	if(var_105_bool == 0) goto Label_2616; // 0xa36 JumpB
	goto Label_2624; // 0xa37 Jump
	
Label_2624:
	CameraWaitForPlayFinish(); // 0xa40 Func
	ResumeWorld(); // 0xa42 Func
	var_63_bool = 1; // 0xa44 MovB
	return 18; // 0xa45 Return
	
Label_2616:
	var_106_string = "head"; // 0xa38 PushS
	HasAnimationTrack(var_83_bool, var_106_string); // 0xa39 Func
	var_107_bool = var_83_bool; // 0xa3b Push
	if(var_107_bool == 0) goto Label_2624; // 0xa3c JumpB
	var_108_string = "head"; // 0xa3d PushS
	LookAsyncCamera(var_108_string); // 0xa3e Func
}


func_2816(var_157_bool, var_158_string)
{
	var_159_bool = 0; var_160_bool = 0; // 0xb00 PushV
	var_161_bool = 0; // 0xb01 PushV
	func_2974(var_161_bool); // 0xb02 NEW_2
	if(var_161_bool == 0) goto Label_2829; // 0xb04 JumpB
	lshHasSpeech(var_160_bool, var_158_string); // 0xb05 Func
	var_162_bool = var_160_bool; // 0xb07 Push
	if(var_162_bool == 0) goto Label_2829; // 0xb08 JumpB
	lshPlaySpeech(var_158_string); // 0xb09 Func
	var_157_bool = 1; // 0xb0b MovB
	return 2; // 0xb0c Return
	
Label_2829:
	var_157_bool = 0; // 0xb0d MovB
	return 2; // 0xb0e Return
}


func_3329(var_43_object)
{
	var_44_object = Obj(); var_45_object = Obj(); var_46_object = Obj(); var_47_object = Obj(); // 0xd01 PushV
	GetMainOutdoorScene(var_46_object); // 0xd02 Func
	var_48_bool = var_46_object == 0; // 0xd04 NullEq
	if(var_48_bool == 0) goto Label_3340; // 0xd05 JumpB
	var_49_string = "Can't find main outdoor scene"; // 0xd06 PushS
	Trace(var_49_string); // 0xd07 Func
	var_47_object = 0; // 0xd09 SetNull
	var_43_object = var_47_object; // 0xd0a Mov
	return 4; // 0xd0b Return
	
Label_3340:
	GetMap(var_47_object); // 0xd0c ObjFunc
	var_43_object = var_47_object; // 0xd0e Mov
	return 4; // 0xd0f Return
}


func_1541(var_2_object, var_225_string)
{
	var_226_bool = 0; // 0x606 PushV
	func_2974(var_226_bool); // 0x607 NEW_2
	var_227_bool = var_226_bool == 0; // 0x609 Not
	if(var_227_bool == 0) goto Label_1548; // 0x60a JumpB
	return 0; // 0x60b Return
	
Label_1548:
	var_228_bool = var_225_string == var_2_object; // 0x60c Eq
	if(var_228_bool == 0) goto Label_1551; // 0x60d JumpB
	return 0; // 0x60e Return
	
Label_1551:
	var_229_string = ""; var_230_bool = 0; // 0x60f PushV
	var_229_string = var_225_string; // 0x610 Mov
	var_231_string = ""; // 0x611 PushS
	var_232_bool = var_225_string == var_231_string; // 0x612 Eq
	if(var_232_bool == 0) goto Label_1558; // 0x613 JumpB
	var_230_bool = 0; // 0x614 MovB
	goto Label_1559; // 0x615 Jump
	
Label_1559:
	func_2801(var_229_string, var_230_bool); // 0x617 NEW_2
	var_2_object = var_225_string; // 0x619 TMov
	return 0; // 0x61a Return
	
Label_1558:
	var_230_bool = 1; // 0x616 MovB
}


func_2307(var_0_object)
{
	var_108_float = GetByIndex(var_0_object, 0); // 0x903 PushE
	var_109_float = GetByIndex(var_0_object, 2); // 0x904 PushE
	RotateAsync(var_108_float, var_109_float); // 0x905 Func
	return 0; // 0x907 Return
}


func_2312(var_39_bool)
{
	var_40_object = Obj(); var_41_bool = 0; var_42_object = Obj(); var_43_bool = 0; // 0x908 PushV
	var_44_string = "player"; // 0x909 PushS
	FindActor(var_42_object, var_44_string); // 0x90a Func
	var_45_bool = var_42_object == 0; // 0x90c Not
	if(var_45_bool == 0) goto Label_2320; // 0x90d JumpB
	var_39_bool = 0; // 0x90e MovB
	return 4; // 0x90f Return
	
Label_2320:
	var_46_float = 0; var_47_object = Obj(); // 0x910 PushV
	var_47_object = var_42_object; // 0x911 Mov
	func_2530(var_47_object); // 0x912 NEW_2
	var_54_float = 90000.0; // 0x914 PushF
	var_55_bool = var_46_float > var_54_float; // 0x915 GT
	if(var_55_bool == 0) goto Label_2329; // 0x916 JumpB
	var_39_bool = 0; // 0x917 MovB
	return 4; // 0x918 Return
	
Label_2329:
	CanSee(var_43_bool, var_42_object); // 0x919 Func
	var_39_bool = var_43_bool; // 0x91b Mov
	return 4; // 0x91c Return
}


func_3082()
{
	func_3236(); // 0xc0c NEW_2
	var_124_bool = 0; var_125_string = ""; var_126_string = ""; // 0xc0e PushV
	var_125_string = "quest_b10_03"; // 0xc0f MovS
	var_126_string = "fail"; // 0xc10 MovS
	func_2910(var_124_bool, var_125_string, var_126_string); // 0xc11 NEW_2
	return 0; // 0xc13 Return
}


func_2831()
{
	var_34_bool = 0; // 0xb0f PushV
	func_2974(var_34_bool); // 0xb10 NEW_2
	if(var_34_bool == 0) goto Label_2837; // 0xb12 JumpB
	lshStopSpeech(); // 0xb13 Func
	
Label_2837:
	return 0; // 0xb15 Return
}


func_3346(var_88_object, var_89_string, var_90_float)
{
	var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_object = Obj(); var_95_bool = 0; var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_object = Obj(); var_99_bool = 0; // 0xd12 PushV
	GetMainOutdoorScene(var_98_object); // 0xd13 Func
	var_100_bool = var_98_object == 0; // 0xd15 NullEq
	if(var_100_bool == 0) goto Label_3355; // 0xd16 JumpB
	var_101_string = "Can't find main outdoor scene"; // 0xd17 PushS
	Trace(var_101_string); // 0xd18 Func
	return 8; // 0xd1a Return
	
Label_3355:
	GetLocator(var_89_string, var_99_bool, var_96_cvector, var_97_cvector); // 0xd1b ObjFunc
	var_102_bool = var_99_bool == 0; // 0xd1d Not
	if(var_102_bool == 0) goto Label_3365; // 0xd1e JumpB
	var_103_string = "Warning: outdoor scene locator "; // 0xd1f PushS
	var_104_int = var_103_string + var_89_string; // 0xd20 Add
	var_105_string = " doesnt exist"; // 0xd21 PushS
	var_106_int = var_104_int + var_105_string; // 0xd22 Add
	Trace(var_106_int); // 0xd23 Func
	
Label_3365:
	GetMap(var_88_object); // 0xd25 ObjFunc
	var_107_bool = var_88_object == 0; // 0xd27 NullEq
	if(var_107_bool == 0) goto Label_3373; // 0xd28 JumpB
	var_108_string = "Can't find map"; // 0xd29 PushS
	Trace(var_108_string); // 0xd2a Func
	return 8; // 0xd2c Return
	
Label_3373:
	var_109_float = GetByIndex(var_96_cvector, 0); // 0xd2d PushE
	var_110_float = GetByIndex(var_96_cvector, 2); // 0xd2e PushE
	SetMapParams(var_109_float, var_110_float, var_90_float); // 0xd2f ObjFunc
	return 8; // 0xd31 Return
}


func_3092()
{
	var_173_int = 0; var_174_int = 0; // 0xc14 PushV
	var_175_string = "b10q03_toy_burah"; // 0xc15 PushS
	var_176_int = 1; // 0xc16 PushI
	RemoveItemByType(var_174_int, var_175_string, var_176_int); // 0xc17 ObjFunc
	return 2; // 0xc19 Return
}


func_2068(var_0_object, var_603_int, var_604_object)
{
	var_606_object = Obj(); var_607_bool = 0; var_608_int = 0; var_609_bool = 0; var_610_object = Obj(); var_611_bool = 0; var_612_int = 0; var_613_bool = 0; // 0x814 PushV
	var_0_object = var_604_object; // 0x815 TMov
	var_614_bool = 0; var_615_object = Obj(); var_616_float = 0; // 0x816 PushV
	var_615_object = var_604_object; // 0x817 Mov
	var_616_float = 70.0; // 0x818 MovF
	func_2562(var_615_object, var_616_float); // 0x819 NEW_2
	var_617_bool = var_614_bool == 0; // 0x81b Not
	if(var_617_bool == 0) goto Label_2079; // 0x81c JumpB
	var_603_int = -2; // 0x81d MovI
	return 8; // 0x81e Return
	
Label_2079:
	CreateDialog(var_610_object); // 0x81f Func
	var_618_int = 0; // 0x821 PushV
	func_2968(var_618_int); // 0x822 NEW_2
	SetNPCName(var_618_int); // 0x824 ObjFunc
	var_619_int = 0; // 0x826 PushV
	func_2966(var_619_int); // 0x827 NEW_2
	SetNPCDescription(var_619_int); // 0x829 ObjFunc
	var_620_string = ""; // 0x82b PushV
	func_2970(var_620_string); // 0x82c NEW_2
	SetPhoto(var_620_string); // 0x82e ObjFunc
	var_621_string = ""; // 0x830 PushV
	func_2972(var_621_string); // 0x831 NEW_2
	SetPhoto2(var_621_string); // 0x833 ObjFunc
	var_622_int = 0; // 0x835 PushV
	func_3379(var_622_int); // 0x836 NEW_2
	SetPlayerName(var_622_int); // 0x838 ObjFunc
	var_612_int = -1; // 0x83a MovI
	IsOverrideActive(var_611_bool); // 0x83b Func
	var_623_bool = var_611_bool; // 0x83d Push
	if(var_623_bool == 0) goto Label_2113; // 0x83e JumpB
	var_603_int = -2; // 0x83f MovI
	return 8; // 0x840 Return
	
Label_2113:
	DoDialog(var_610_object); // 0x841 Func
	var_624_bool = 0; var_625_object = Obj(); // 0x843 PushV
	var_626_object = Obj(); // 0x844 PushV
	func_2838(var_626_object); // 0x845 NEW_2
	var_625_object = var_626_object; // 0x846 Mov
	func_2647(var_624_bool, var_625_object); // 0x848 NEW_2
	var_627_object = Obj(); var_628_object = Obj(); // 0x84a PushV
	var_627_object = var_604_object; // 0x84b Mov
	var_628_object = var_610_object; // 0x84c Mov
	TaskCall(11); // 0x84d TaskCall
	func_2149(var_629_object, var_630_object, var_631_string, var_632_bool, var_627_object, var_628_object); // 0x84e NEW_2
	TaskReturn(); // 0x84f TaskReturn
	IsDialogEnd(var_613_bool); // 0x851 ObjFunc
	
Label_2131:
	var_657_bool = var_613_bool == 0; // 0x853 Not
	if(var_657_bool == 0) goto Label_2138; // 0x854 JumpB
	sync(); // 0x855 Func
	IsDialogEnd(var_613_bool); // 0x857 ObjFunc
	goto Label_2131; // 0x859 Jump
	
Label_2138:
	var_658_object = Obj(); // 0x85a PushV
	var_658_object = var_604_object; // 0x85b Mov
	func_2630(); // 0x85c NEW_2
	StopDialog(var_610_object); // 0x85e Func
	GetReturnValue(var_612_int); // 0x860 ObjFunc
	var_603_int = var_612_int; // 0x862 Mov
	return 8; // 0x863 Return
}


func_2838(var_125_object)
{
	var_126_object = Obj(); var_127_object = Obj(); // 0xb16 PushV
	self(var_127_object); // 0xb17 Func
	var_125_object = var_127_object; // 0xb19 Mov
	return 2; // 0xb1a Return
}


func_3098()
{
	var_39_string = "oob12Mishka1"; // 0xc1b PushS
	var_40_int = 1; // 0xc1c PushI
	SetVariable(var_39_string, var_40_int); // 0xc1d Func
	return 0; // 0xc1f Return
}


func_1819(var_2_object, var_400_string)
{
	var_401_bool = 0; // 0x71c PushV
	func_2974(var_401_bool); // 0x71d NEW_2
	var_402_bool = var_401_bool == 0; // 0x71f Not
	if(var_402_bool == 0) goto Label_1826; // 0x720 JumpB
	return 0; // 0x721 Return
	
Label_1826:
	var_403_bool = var_400_string == var_2_object; // 0x722 Eq
	if(var_403_bool == 0) goto Label_1829; // 0x723 JumpB
	return 0; // 0x724 Return
	
Label_1829:
	var_404_string = ""; var_405_bool = 0; // 0x725 PushV
	var_404_string = var_400_string; // 0x726 Mov
	var_406_string = ""; // 0x727 PushS
	var_407_bool = var_400_string == var_406_string; // 0x728 Eq
	if(var_407_bool == 0) goto Label_1836; // 0x729 JumpB
	var_405_bool = 0; // 0x72a MovB
	goto Label_1837; // 0x72b Jump
	
Label_1837:
	func_2801(var_404_string, var_405_bool); // 0x72d NEW_2
	var_2_object = var_400_string; // 0x72f TMov
	return 0; // 0x730 Return
	
Label_1836:
	var_405_bool = 1; // 0x72c MovB
}


func_2844(var_90_cvector, var_91_cvector)
{
	var_93_float = 0; var_94_float = 0; // 0xb1c PushV
	var_95_int = var_91_cvector | var_91_cvector; // 0xb1d Or
	var_94_float = sqrt(var_95_int); // 0xb1e Sqrt2
	var_96_float = 0.0; // 0xb1f PushF
	var_97_bool = var_94_float < var_96_float; // 0xb20 LT
	if(var_97_bool == 0) goto Label_2852; // 0xb21 JumpB
	var_90_cvector = CVector(0.0, 0.0, 0.0); // 0xb22 MovV
	return 2; // 0xb23 Return
	
Label_2852:
	var_90_cvector = var_91_cvector / var_91_cvector; // 0xb24 Div2
	return 2; // 0xb25 Return
}


func_2334()
{
	var_661_float = 0; var_662_float = 0; // 0x91e PushV
	var_663_int = 8; // 0x91f PushI
	var_664_int = 16; // 0x920 PushI
	rand(var_662_float, var_663_int, var_664_int); // 0x921 Func
	var_665_int = 10; // 0x923 PushI
	SetTimer(var_665_int, var_662_float); // 0x924 Func
	return 2; // 0x926 Return
}


func_3104(var_384_bool)
{
	var_386_int = 0; var_387_string = ""; // 0xc21 PushV
	var_387_string = "b8q01"; // 0xc22 MovS
	func_2854(var_386_int, var_387_string); // 0xc23 NEW_2
	var_388_int = 2; // 0xc25 PushI
	var_389_bool = var_386_int == var_388_int; // 0xc26 Eq
	if(var_389_bool == 0) goto Label_3114; // 0xc27 JumpB
	var_384_bool = 1; // 0xc28 MovB
	return 0; // 0xc29 Return
	
Label_3114:
	var_384_bool = 0; // 0xc2a MovB
	return 0; // 0xc2b Return
}


func_2854(var_322_int, var_323_string)
{
	var_324_int = 0; var_325_int = 0; // 0xb26 PushV
	GetVariable(var_323_string, var_325_int); // 0xb27 Func
	var_322_int = var_325_int; // 0xb29 Mov
	return 2; // 0xb2a Return
}


func_2343()
{
	var_660_int = 10; // 0x927 PushI
	KillTimer(var_660_int); // 0x928 Func
	return 0; // 0x92a Return
}


func_2859(var_162_int, var_163_int)
{
	var_164_object = Obj(); var_165_object = Obj(); // 0xb2b PushV
	CreateIntVector(var_165_object); // 0xb2c Func
	add(var_162_int); // 0xb2e ObjFunc
	add(var_163_int); // 0xb30 ObjFunc
	var_166_int = 3; // 0xb32 PushI
	SendWorldWndMessage(var_166_int, var_165_object); // 0xb33 Func
	return 2; // 0xb35 Return
}


func_3116(var_390_bool)
{
	var_392_int = 0; var_393_string = ""; // 0xc2d PushV
	var_393_string = "oob8Mishka1"; // 0xc2e MovS
	func_2854(var_392_int, var_393_string); // 0xc2f NEW_2
	var_394_int = 0; // 0xc31 PushI
	var_395_bool = var_392_int == var_394_int; // 0xc32 Eq
	if(var_395_bool == 0) goto Label_3126; // 0xc33 JumpB
	var_390_bool = 1; // 0xc34 MovB
	return 0; // 0xc35 Return
	
Label_3126:
	var_390_bool = 0; // 0xc36 MovB
	return 0; // 0xc37 Return
}


func_558(var_2_object, var_472_string)
{
	var_473_bool = 0; // 0x22f PushV
	func_2974(var_473_bool); // 0x230 NEW_2
	var_474_bool = var_473_bool == 0; // 0x232 Not
	if(var_474_bool == 0) goto Label_565; // 0x233 JumpB
	return 0; // 0x234 Return
	
Label_565:
	var_475_bool = var_472_string == var_2_object; // 0x235 Eq
	if(var_475_bool == 0) goto Label_568; // 0x236 JumpB
	return 0; // 0x237 Return
	
Label_568:
	var_476_string = ""; var_477_bool = 0; // 0x238 PushV
	var_476_string = var_472_string; // 0x239 Mov
	var_478_string = ""; // 0x23a PushS
	var_479_bool = var_472_string == var_478_string; // 0x23b Eq
	if(var_479_bool == 0) goto Label_575; // 0x23c JumpB
	var_477_bool = 0; // 0x23d MovB
	goto Label_576; // 0x23e Jump
	
Label_576:
	func_2801(var_476_string, var_477_bool); // 0x240 NEW_2
	var_2_object = var_472_string; // 0x242 TMov
	return 0; // 0x243 Return
	
Label_575:
	var_477_bool = 1; // 0x23f MovB
}


func_3379(var_114_int)
{
	var_115_int = 0; var_116_int = 0; // 0xd33 PushV
	var_117_string = "branch"; // 0xd34 PushS
	GetVariable(var_117_string, var_116_int); // 0xd35 Func
	var_118_int = 0; // 0xd37 PushI
	var_119_bool = var_116_int == var_118_int; // 0xd38 Eq
	if(var_119_bool == 0) goto Label_3389; // 0xd39 JumpB
	var_114_int = 1; // 0xd3a MovI
	return 2; // 0xd3b Return
	
Label_3389:
	var_120_int = 1; // 0xd3d PushI
	var_121_bool = var_116_int == var_120_int; // 0xd3e Eq
	if(var_121_bool == 0) goto Label_3394; // 0xd3f JumpB
	var_114_int = 2; // 0xd40 MovI
	return 2; // 0xd41 Return
	
Label_3394:
	var_114_int = 3; // 0xd42 MovI
	return 2; // 0xd43 Return
}


func_2871(var_152_object, var_153_int)
{
	var_154_int = 0; var_155_int = 0; var_156_bool = 0; var_157_int = 0; var_158_int = 0; var_159_bool = 0; // 0xb37 PushV
	GetItemID(var_157_int); // 0xb38 ObjFunc
	var_160_string = "Category"; // 0xb3a PushS
	GetInvItemProperty(var_158_int, var_157_int, var_160_string); // 0xb3b Func
	AddItem(var_159_bool, var_152_object, var_158_int, var_153_int); // 0xb3d ObjFunc
	var_161_bool = var_159_bool == 0; // 0xb3f Not
	if(var_161_bool == 0) goto Label_2884; // 0xb40 JumpB
	DropItems(var_152_object, var_153_int); // 0xb41 ObjFunc
	goto Label_2889; // 0xb43 Jump
	
Label_2889:
	return 6; // 0xb49 Return
	
Label_2884:
	var_162_int = 0; var_163_int = 0; // 0xb44 PushV
	var_162_int = var_157_int; // 0xb45 Mov
	var_163_int = var_153_int; // 0xb46 Mov
	func_2859(var_162_int, var_163_int); // 0xb47 NEW_2
}


func_3128(var_320_bool)
{
	var_322_int = 0; var_323_string = ""; // 0xc39 PushV
	var_323_string = "oob1Mishka1"; // 0xc3a MovS
	func_2854(var_322_int, var_323_string); // 0xc3b NEW_2
	var_326_int = 0; // 0xc3d PushI
	var_327_bool = var_322_int == var_326_int; // 0xc3e Eq
	if(var_327_bool == 0) goto Label_3138; // 0xc3f JumpB
	var_320_bool = 1; // 0xc40 MovB
	return 0; // 0xc41 Return
	
Label_3138:
	var_320_bool = 0; // 0xc42 MovB
	return 0; // 0xc43 Return
}


func_3140(var_494_bool)
{
	var_496_int = 0; var_497_string = ""; // 0xc45 PushV
	var_497_string = "b10q04MishkaTalk"; // 0xc46 MovS
	func_2854(var_496_int, var_497_string); // 0xc47 NEW_2
	var_498_int = 1; // 0xc49 PushI
	var_499_bool = var_496_int == var_498_int; // 0xc4a Eq
	if(var_499_bool == 0) goto Label_3150; // 0xc4b JumpB
	var_494_bool = 1; // 0xc4c MovB
	return 0; // 0xc4d Return
	
Label_3150:
	var_494_bool = 0; // 0xc4e MovB
	return 0; // 0xc4f Return
}


func_3396(var_49_object)
{
	var_50_bool = GlobalVars[1]; // 0xd45 PushGE
	var_51_bool = var_50_bool == 0; // 0xd46 Not
	if(var_51_bool == 0) goto Label_3409; // 0xd47 JumpB
	var_52_int = 0; var_53_object = Obj(); // 0xd48 PushV
	var_53_object = var_49_object; // 0xd49 Mov
	TaskCall(6); // 0xd4a TaskCall
	func_1402(var_54_object, var_52_int, var_53_object); // 0xd4b NEW_2
	TaskReturn(); // 0xd4c TaskReturn
	var_275_bool = GlobalVars[1]; // 0xd4e PushGE
	var_275_bool = 1; // 0xd4f MovB
	GlobalVars[1] = var_275_bool; // 0xd50 PopGE
	
Label_3409:
	var_276_bool = 0; var_277_int = 0; // 0xd51 PushV
	var_277_int = 1; // 0xd52 MovI
	func_2936(var_276_bool, var_277_int); // 0xd53 NEW_2
	if(var_276_bool == 0) goto Label_3421; // 0xd55 JumpB
	var_279_int = 0; var_280_object = Obj(); // 0xd56 PushV
	var_280_object = var_49_object; // 0xd57 Mov
	TaskCall(0); // 0xd58 TaskCall
	func_0(var_281_object, var_279_int, var_280_object); // 0xd59 NEW_2
	TaskReturn(); // 0xd5a TaskReturn
	return 0; // 0xd5c Return
	
Label_3421:
	var_350_bool = 0; var_351_int = 0; // 0xd5d PushV
	var_351_int = 8; // 0xd5e MovI
	func_2936(var_350_bool, var_351_int); // 0xd5f NEW_2
	if(var_350_bool == 0) goto Label_3433; // 0xd61 JumpB
	var_352_int = 0; var_353_object = Obj(); // 0xd62 PushV
	var_353_object = var_49_object; // 0xd63 Mov
	TaskCall(8); // 0xd64 TaskCall
	func_1641(var_354_object, var_352_int, var_353_object); // 0xd65 NEW_2
	TaskReturn(); // 0xd66 TaskReturn
	return 0; // 0xd68 Return
	
Label_3433:
	var_433_bool = 0; var_434_int = 0; // 0xd69 PushV
	var_434_int = 10; // 0xd6a MovI
	func_2936(var_433_bool, var_434_int); // 0xd6b NEW_2
	if(var_433_bool == 0) goto Label_3445; // 0xd6d JumpB
	var_435_int = 0; var_436_object = Obj(); // 0xd6e PushV
	var_436_object = var_49_object; // 0xd6f Mov
	TaskCall(2); // 0xd70 TaskCall
	func_365(var_437_object, var_435_int, var_436_object); // 0xd71 NEW_2
	TaskReturn(); // 0xd72 TaskReturn
	return 0; // 0xd74 Return
	
Label_3445:
	var_536_bool = 0; var_537_int = 0; // 0xd75 PushV
	var_537_int = 12; // 0xd76 MovI
	func_2936(var_536_bool, var_537_int); // 0xd77 NEW_2
	if(var_536_bool == 0) goto Label_3457; // 0xd79 JumpB
	var_538_int = 0; var_539_object = Obj(); // 0xd7a PushV
	var_539_object = var_49_object; // 0xd7b Mov
	TaskCall(4); // 0xd7c TaskCall
	func_1102(var_540_object, var_538_int, var_539_object); // 0xd7d NEW_2
	TaskReturn(); // 0xd7e TaskReturn
	return 0; // 0xd80 Return
	
Label_3457:
	var_603_int = 0; var_604_object = Obj(); // 0xd81 PushV
	var_604_object = var_49_object; // 0xd82 Mov
	TaskCall(10); // 0xd83 TaskCall
	func_2068(var_605_object, var_603_int, var_604_object); // 0xd84 NEW_2
	TaskReturn(); // 0xd85 TaskReturn
	return 0; // 0xd87 Return
}


func_2630()
{
	var_269_bool = 0; var_270_bool = 0; // 0xa46 PushV
	CameraSwitchToNormal(); // 0xa47 Func
	var_271_bool = 0; // 0xa49 PushV
	func_2974(var_271_bool); // 0xa4a NEW_2
	if(var_271_bool == 0) goto Label_2638; // 0xa4c JumpB
	goto Label_2646; // 0xa4d Jump
	
Label_2646:
	return 2; // 0xa56 Return
	
Label_2638:
	var_272_string = "head"; // 0xa4e PushS
	HasAnimationTrack(var_270_bool, var_272_string); // 0xa4f Func
	var_273_bool = var_270_bool; // 0xa51 Push
	if(var_273_bool == 0) goto Label_2646; // 0xa52 JumpB
	var_274_string = "head"; // 0xa53 PushS
	UnlookAsync(var_274_string); // 0xa54 Func
}


func_2890(var_146_object, var_147_string, var_148_int)
{
	var_149_object = Obj(); var_150_object = Obj(); // 0xb4a PushV
	CreateInvItem(var_150_object); // 0xb4b Func
	SetItemName(var_147_string); // 0xb4d ObjFunc
	var_151_object = Obj(); var_152_object = Obj(); var_153_int = 0; // 0xb4f PushV
	var_151_object = var_146_object; // 0xb50 Mov
	var_152_object = var_150_object; // 0xb51 Mov
	var_153_int = var_148_int; // 0xb52 Mov
	func_2871(var_152_object, var_153_int); // 0xb53 NEW_2
	return 2; // 0xb55 Return
}


func_1102(var_0_object, var_538_int, var_539_object)
{
	var_541_object = Obj(); var_542_bool = 0; var_543_int = 0; var_544_bool = 0; var_545_object = Obj(); var_546_bool = 0; var_547_int = 0; var_548_bool = 0; // 0x44e PushV
	var_0_object = var_539_object; // 0x44f TMov
	var_549_bool = 0; var_550_object = Obj(); var_551_float = 0; // 0x450 PushV
	var_550_object = var_539_object; // 0x451 Mov
	var_551_float = 70.0; // 0x452 MovF
	func_2562(var_550_object, var_551_float); // 0x453 NEW_2
	var_552_bool = var_549_bool == 0; // 0x455 Not
	if(var_552_bool == 0) goto Label_1113; // 0x456 JumpB
	var_538_int = -2; // 0x457 MovI
	return 8; // 0x458 Return
	
Label_1113:
	CreateDialog(var_545_object); // 0x459 Func
	var_553_int = 0; // 0x45b PushV
	func_2968(var_553_int); // 0x45c NEW_2
	SetNPCName(var_553_int); // 0x45e ObjFunc
	var_554_int = 0; // 0x460 PushV
	func_2966(var_554_int); // 0x461 NEW_2
	SetNPCDescription(var_554_int); // 0x463 ObjFunc
	var_555_string = ""; // 0x465 PushV
	func_2970(var_555_string); // 0x466 NEW_2
	SetPhoto(var_555_string); // 0x468 ObjFunc
	var_556_string = ""; // 0x46a PushV
	func_2972(var_556_string); // 0x46b NEW_2
	SetPhoto2(var_556_string); // 0x46d ObjFunc
	var_557_int = 0; // 0x46f PushV
	func_3379(var_557_int); // 0x470 NEW_2
	SetPlayerName(var_557_int); // 0x472 ObjFunc
	var_547_int = -1; // 0x474 MovI
	IsOverrideActive(var_546_bool); // 0x475 Func
	var_558_bool = var_546_bool; // 0x477 Push
	if(var_558_bool == 0) goto Label_1147; // 0x478 JumpB
	var_538_int = -2; // 0x479 MovI
	return 8; // 0x47a Return
	
Label_1147:
	DoDialog(var_545_object); // 0x47b Func
	var_559_bool = 0; var_560_object = Obj(); // 0x47d PushV
	var_561_object = Obj(); // 0x47e PushV
	func_2838(var_561_object); // 0x47f NEW_2
	var_560_object = var_561_object; // 0x480 Mov
	func_2647(var_559_bool, var_560_object); // 0x482 NEW_2
	var_562_object = Obj(); var_563_object = Obj(); // 0x484 PushV
	var_562_object = var_539_object; // 0x485 Mov
	var_563_object = var_545_object; // 0x486 Mov
	TaskCall(5); // 0x487 TaskCall
	func_1183(var_564_object, var_565_object, var_566_string, var_567_bool, var_562_object, var_563_object); // 0x488 NEW_2
	TaskReturn(); // 0x489 TaskReturn
	IsDialogEnd(var_548_bool); // 0x48b ObjFunc
	
Label_1165:
	var_601_bool = var_548_bool == 0; // 0x48d Not
	if(var_601_bool == 0) goto Label_1172; // 0x48e JumpB
	sync(); // 0x48f Func
	IsDialogEnd(var_548_bool); // 0x491 ObjFunc
	goto Label_1165; // 0x493 Jump
	
Label_1172:
	var_602_object = Obj(); // 0x494 PushV
	var_602_object = var_539_object; // 0x495 Mov
	func_2630(); // 0x496 NEW_2
	StopDialog(var_545_object); // 0x498 Func
	GetReturnValue(var_547_int); // 0x49a ObjFunc
	var_538_int = var_547_int; // 0x49c Mov
	return 8; // 0x49d Return
}


func_3152(var_466_bool)
{
	var_468_int = 0; var_469_string = ""; // 0xc51 PushV
	var_469_string = "b10q03"; // 0xc52 MovS
	func_2854(var_468_int, var_469_string); // 0xc53 NEW_2
	var_470_int = 1; // 0xc55 PushI
	var_471_bool = var_468_int == var_470_int; // 0xc56 Eq
	if(var_471_bool == 0) goto Label_3162; // 0xc57 JumpB
	var_466_bool = 1; // 0xc58 MovB
	return 0; // 0xc59 Return
	
Label_3162:
	var_466_bool = 0; // 0xc5a MovB
	return 0; // 0xc5b Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_303_object, var_304_object)
{
	var_0_object = var_304_object; // 0x52 TMov
	var_1_object = var_303_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_309_int = 1; // 0x55 PushI
	if(var_309_int == 0) goto Label_123; // 0x56 JumpB
	var_310_string = ""; // 0x57 PushV
	var_310_string = "Autizm"; // 0x58 MovS
	func_153(var_304_object, var_310_string); // 0x59 NEW_2
	var_318_int = 527115; // 0x5b PushI
	SetMessage(var_318_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_319_bool = 0; // 0x60 PushV
	var_319_bool = 0; // 0x61 MovB
	var_320_bool = 0; var_321_object = Obj(); // 0x62 PushV
	var_321_object = var_1_object; // 0x63 MovT
	func_3128(var_321_object); // 0x64 NEW_2
	if(var_320_bool == 0) goto Label_109; // 0x66 JumpB
	var_328_bool = 0; var_329_object = Obj(); // 0x67 PushV
	var_329_object = var_1_object; // 0x68 MovT
	func_3199(var_329_object); // 0x69 NEW_2
	if(var_328_bool == 0) goto Label_109; // 0x6b JumpB
	var_319_bool = 1; // 0x6c MovB
	
Label_109:
	if(var_319_bool == 0) goto Label_115; // 0x6d JumpB
	var_334_int = 527116; // 0x6e PushI
	var_335_int = 28416; // 0x6f PushI
	var_336_int = 28414; // 0x70 PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0x71 TObjFunc
	
Label_115:
	var_337_int = 527117; // 0x73 PushI
	var_338_int = -1; // 0x74 PushI
	var_339_int = 28415; // 0x75 PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0x76 TObjFunc
	goto Label_123; // 0x78 Jump
	
Label_123:
	var_340_bool = 0; // 0x7b PushV
	func_2974(var_340_bool); // 0x7c NEW_2
	if(var_340_bool == 0) goto Label_138; // 0x7e JumpB
	
Label_127:
	lshWaitForAnimEnd(); // 0x7f Func
	var_341_string = var_3_string; // 0x81 PushT
	if(var_341_string == 0) goto Label_132; // 0x82 JumpB
	goto Label_137; // 0x83 Jump
	
Label_137:
	goto Label_152; // 0x89 Jump
	
Label_152:
	return 0; // 0x98 Return
	
Label_132:
	var_342_string = ""; // 0x84 PushV
	var_342_string = var_2_object; // 0x85 MovT
	func_2785(var_342_string); // 0x86 NEW_2
	goto Label_127; // 0x88 Jump
	
Label_138:
	var_343_string = "all"; // 0x8a PushS
	var_344_string = "idle"; // 0x8b PushS
	PlayAnimation(var_343_string, var_344_string); // 0x8c Func
	
Label_142:
	WaitForAnimEnd(); // 0x8e Func
	var_345_string = var_3_string; // 0x90 PushT
	if(var_345_string == 0) goto Label_147; // 0x91 JumpB
	goto Label_152; // 0x92 Jump
	
Label_147:
	var_346_string = "all"; // 0x93 PushS
	var_347_string = "idle"; // 0x94 PushS
	PlayAnimation(var_346_string, var_347_string); // 0x95 Func
	goto Label_142; // 0x97 Jump
}


func_2647(var_123_bool, var_124_object)
{
	var_128_int = 0; var_129_int = 0; var_130_int = 0; var_131_int = 0; // 0xa57 PushV
	var_132_string = "voice_common"; // 0xa58 PushS
	GetVariable(var_132_string, var_130_int); // 0xa59 Func
	var_133_int = var_130_int; // 0xa5b Push
	if(var_133_int == 0) goto Label_2685; // 0xa5c JumpB
	var_134_bool = 0; var_135_object = Obj(); // 0xa5d PushV
	var_135_object = var_124_object; // 0xa5e Mov
	func_2705(var_135_object); // 0xa5f NEW_2
	var_164_bool = var_134_bool == 0; // 0xa61 Not
	if(var_164_bool == 0) goto Label_2667; // 0xa62 JumpB
	var_165_bool = 0; var_166_object = Obj(); // 0xa63 PushV
	var_166_object = var_124_object; // 0xa64 Mov
	func_2742(var_166_object); // 0xa65 NEW_2
	var_200_bool = var_165_bool == 0; // 0xa67 Not
	if(var_200_bool == 0) goto Label_2667; // 0xa68 JumpB
	var_123_bool = 0; // 0xa69 MovB
	return 4; // 0xa6a Return
	
Label_2667:
	var_201_int = 2; // 0xa6b PushI
	irand(var_131_int, var_201_int); // 0xa6c Func
	var_202_int = var_131_int; // 0xa6e Push
	if(var_202_int == 0) goto Label_2680; // 0xa6f JumpB
	var_203_string = "voice_common"; // 0xa70 PushS
	var_204_int = 1; // 0xa71 PushI
	var_205_int = var_130_int + var_204_int; // 0xa72 Add
	var_206_int = 3; // 0xa73 PushI
	var_207_int = var_205_int / var_206_int; // 0xa74 Mod
	SetVariable(var_203_string, var_207_int); // 0xa75 Func
	goto Label_2684; // 0xa77 Jump
	
Label_2684:
	goto Label_2703; // 0xa7c Jump
	
Label_2703:
	var_123_bool = 1; // 0xa8f MovB
	return 4; // 0xa90 Return
	
Label_2680:
	var_208_string = "voice_common"; // 0xa78 PushS
	var_209_int = 0; // 0xa79 PushI
	SetVariable(var_208_string, var_209_int); // 0xa7a Func
	
Label_2685:
	var_210_bool = 0; var_211_object = Obj(); // 0xa7d PushV
	var_211_object = var_124_object; // 0xa7e Mov
	func_2742(var_211_object); // 0xa7f NEW_2
	var_212_bool = var_210_bool == 0; // 0xa81 Not
	if(var_212_bool == 0) goto Label_2699; // 0xa82 JumpB
	var_213_bool = 0; var_214_object = Obj(); // 0xa83 PushV
	var_214_object = var_124_object; // 0xa84 Mov
	func_2705(var_214_object); // 0xa85 NEW_2
	var_215_bool = var_213_bool == 0; // 0xa87 Not
	if(var_215_bool == 0) goto Label_2699; // 0xa88 JumpB
	var_123_bool = 0; // 0xa89 MovB
	return 4; // 0xa8a Return
	
Label_2699:
	var_216_string = "voice_common"; // 0xa8b PushS
	var_217_int = 1; // 0xa8c PushI
	SetVariable(var_216_string, var_217_int); // 0xa8d Func
}


func_2903(var_512_bool, var_514_string)
{
	var_515_int = 0; var_516_bool = 0; var_517_int = 0; var_518_bool = 0; // 0xb57 PushV
	GetInvItemByName(var_517_int, var_514_string); // 0xb58 Func
	HasItem(var_517_int, var_518_bool); // 0xb5a ObjFunc
	var_512_bool = var_518_bool; // 0xb5c Mov
	return 4; // 0xb5d Return
}


func_3164(var_504_bool)
{
	var_506_int = 0; var_507_string = ""; // 0xc5d PushV
	var_507_string = "b10q03"; // 0xc5e MovS
	func_2854(var_506_int, var_507_string); // 0xc5f NEW_2
	var_508_int = 2; // 0xc61 PushI
	var_509_bool = var_506_int == var_508_int; // 0xc62 Eq
	if(var_509_bool == 0) goto Label_3174; // 0xc63 JumpB
	var_504_bool = 1; // 0xc64 MovB
	return 0; // 0xc65 Return
	
Label_3174:
	var_504_bool = 0; // 0xc66 MovB
	return 0; // 0xc67 Return
}


func_2910(var_80_bool, var_81_string, var_82_string)
{
	var_83_object = Obj(); var_84_object = Obj(); // 0xb5e PushV
	FindActor(var_84_object, var_81_string); // 0xb5f Func
	var_85_bool = var_84_object == 0; // 0xb61 NullEq
	if(var_85_bool == 0) goto Label_2917; // 0xb62 JumpB
	var_80_bool = 0; // 0xb63 MovB
	return 2; // 0xb64 Return
	
Label_2917:
	Trigger(var_84_object, var_82_string); // 0xb65 Func
	var_80_bool = 1; // 0xb67 MovB
	return 2; // 0xb68 Return
}


func_2149(var_0_object, var_1_object, var_2_object, var_3_string, var_627_object, var_628_object)
{
	var_0_object = var_628_object; // 0x866 TMov
	var_1_object = var_627_object; // 0x867 TMov
	var_3_string = 0; // 0x868 TMovB
	var_633_int = 1; // 0x869 PushI
	if(var_633_int == 0) goto Label_2177; // 0x86a JumpB
	var_634_string = ""; // 0x86b PushV
	var_634_string = "Neutral"; // 0x86c MovS
	func_2207(var_628_object, var_634_string); // 0x86d NEW_2
	var_642_int = 540551; // 0x86f PushI
	SetMessage(var_642_int); // 0x870 TObjFunc
	ClearReplies(); // 0x872 TObjFunc
	var_643_int = 540552; // 0x874 PushI
	var_644_int = -1; // 0x875 PushI
	var_645_int = 42561; // 0x876 PushI
	AddReply(var_643_int, var_644_int, var_645_int); // 0x877 TObjFunc
	var_646_int = 540795; // 0x879 PushI
	var_647_int = -1; // 0x87a PushI
	var_648_int = 42844; // 0x87b PushI
	AddReply(var_646_int, var_647_int, var_648_int); // 0x87c TObjFunc
	goto Label_2177; // 0x87e Jump
	
Label_2177:
	var_649_bool = 0; // 0x881 PushV
	func_2974(var_649_bool); // 0x882 NEW_2
	if(var_649_bool == 0) goto Label_2192; // 0x884 JumpB
	
Label_2181:
	lshWaitForAnimEnd(); // 0x885 Func
	var_650_string = var_3_string; // 0x887 PushT
	if(var_650_string == 0) goto Label_2186; // 0x888 JumpB
	goto Label_2191; // 0x889 Jump
	
Label_2191:
	goto Label_2206; // 0x88f Jump
	
Label_2206:
	return 0; // 0x89e Return
	
Label_2186:
	var_651_string = ""; // 0x88a PushV
	var_651_string = var_2_object; // 0x88b MovT
	func_2785(var_651_string); // 0x88c NEW_2
	goto Label_2181; // 0x88e Jump
	
Label_2192:
	var_652_string = "all"; // 0x890 PushS
	var_653_string = "idle"; // 0x891 PushS
	PlayAnimation(var_652_string, var_653_string); // 0x892 Func
	
Label_2196:
	WaitForAnimEnd(); // 0x894 Func
	var_654_string = var_3_string; // 0x896 PushT
	if(var_654_string == 0) goto Label_2201; // 0x897 JumpB
	goto Label_2206; // 0x898 Jump
	
Label_2201:
	var_655_string = "all"; // 0x899 PushS
	var_656_string = "idle"; // 0x89a PushS
	PlayAnimation(var_655_string, var_656_string); // 0x89b Func
	goto Label_2196; // 0x89d Jump
}


func_3176(var_510_bool, var_511_object)
{
	var_512_bool = 0; var_513_object = Obj(); var_514_string = ""; // 0xc69 PushV
	var_513_object = var_511_object; // 0xc6a Mov
	var_514_string = "b10q03_toy_burah"; // 0xc6b MovS
	func_2903(var_513_object, var_514_string); // 0xc6c NEW_2
	if(var_512_bool == 0) goto Label_3185; // 0xc6e JumpB
	var_510_bool = 1; // 0xc6f MovB
	return 0; // 0xc70 Return
	
Label_3185:
	var_510_bool = 0; // 0xc71 MovB
	return 0; // 0xc72 Return
}


func_1641(var_0_object, var_352_int, var_353_object)
{
	var_355_object = Obj(); var_356_bool = 0; var_357_int = 0; var_358_bool = 0; var_359_object = Obj(); var_360_bool = 0; var_361_int = 0; var_362_bool = 0; // 0x669 PushV
	var_0_object = var_353_object; // 0x66a TMov
	var_363_bool = 0; var_364_object = Obj(); var_365_float = 0; // 0x66b PushV
	var_364_object = var_353_object; // 0x66c Mov
	var_365_float = 70.0; // 0x66d MovF
	func_2562(var_364_object, var_365_float); // 0x66e NEW_2
	var_366_bool = var_363_bool == 0; // 0x670 Not
	if(var_366_bool == 0) goto Label_1652; // 0x671 JumpB
	var_352_int = -2; // 0x672 MovI
	return 8; // 0x673 Return
	
Label_1652:
	CreateDialog(var_359_object); // 0x674 Func
	var_367_int = 0; // 0x676 PushV
	func_2968(var_367_int); // 0x677 NEW_2
	SetNPCName(var_367_int); // 0x679 ObjFunc
	var_368_int = 0; // 0x67b PushV
	func_2966(var_368_int); // 0x67c NEW_2
	SetNPCDescription(var_368_int); // 0x67e ObjFunc
	var_369_string = ""; // 0x680 PushV
	func_2970(var_369_string); // 0x681 NEW_2
	SetPhoto(var_369_string); // 0x683 ObjFunc
	var_370_string = ""; // 0x685 PushV
	func_2972(var_370_string); // 0x686 NEW_2
	SetPhoto2(var_370_string); // 0x688 ObjFunc
	var_371_int = 0; // 0x68a PushV
	func_3379(var_371_int); // 0x68b NEW_2
	SetPlayerName(var_371_int); // 0x68d ObjFunc
	var_361_int = -1; // 0x68f MovI
	IsOverrideActive(var_360_bool); // 0x690 Func
	var_372_bool = var_360_bool; // 0x692 Push
	if(var_372_bool == 0) goto Label_1686; // 0x693 JumpB
	var_352_int = -2; // 0x694 MovI
	return 8; // 0x695 Return
	
Label_1686:
	DoDialog(var_359_object); // 0x696 Func
	var_373_bool = 0; var_374_object = Obj(); // 0x698 PushV
	var_375_object = Obj(); // 0x699 PushV
	func_2838(var_375_object); // 0x69a NEW_2
	var_374_object = var_375_object; // 0x69b Mov
	func_2647(var_373_bool, var_374_object); // 0x69d NEW_2
	var_376_object = Obj(); var_377_object = Obj(); // 0x69f PushV
	var_376_object = var_353_object; // 0x6a0 Mov
	var_377_object = var_359_object; // 0x6a1 Mov
	TaskCall(9); // 0x6a2 TaskCall
	func_1722(var_378_object, var_379_object, var_380_string, var_381_bool, var_376_object, var_377_object); // 0x6a3 NEW_2
	TaskReturn(); // 0x6a4 TaskReturn
	IsDialogEnd(var_362_bool); // 0x6a6 ObjFunc
	
Label_1704:
	var_431_bool = var_362_bool == 0; // 0x6a8 Not
	if(var_431_bool == 0) goto Label_1711; // 0x6a9 JumpB
	sync(); // 0x6aa Func
	IsDialogEnd(var_362_bool); // 0x6ac ObjFunc
	goto Label_1704; // 0x6ae Jump
	
Label_1711:
	var_432_object = Obj(); // 0x6af PushV
	var_432_object = var_353_object; // 0x6b0 Mov
	func_2630(); // 0x6b1 NEW_2
	StopDialog(var_359_object); // 0x6b3 Func
	GetReturnValue(var_361_int); // 0x6b5 ObjFunc
	var_352_int = var_361_int; // 0x6b7 Mov
	return 8; // 0x6b8 Return
}


func_2922(var_54_float)
{
	var_55_float = 0; var_56_float = 0; // 0xb6a PushV
	GetGameTime(var_56_float); // 0xb6b Func
	var_54_float = var_56_float; // 0xb6d Mov
	return 2; // 0xb6e Return
}


func_365(var_0_object, var_435_int, var_436_object)
{
	var_438_object = Obj(); var_439_bool = 0; var_440_int = 0; var_441_bool = 0; var_442_object = Obj(); var_443_bool = 0; var_444_int = 0; var_445_bool = 0; // 0x16d PushV
	var_0_object = var_436_object; // 0x16e TMov
	var_446_bool = 0; var_447_object = Obj(); var_448_float = 0; // 0x16f PushV
	var_447_object = var_436_object; // 0x170 Mov
	var_448_float = 70.0; // 0x171 MovF
	func_2562(var_447_object, var_448_float); // 0x172 NEW_2
	var_449_bool = var_446_bool == 0; // 0x174 Not
	if(var_449_bool == 0) goto Label_376; // 0x175 JumpB
	var_435_int = -2; // 0x176 MovI
	return 8; // 0x177 Return
	
Label_376:
	CreateDialog(var_442_object); // 0x178 Func
	var_450_int = 0; // 0x17a PushV
	func_2968(var_450_int); // 0x17b NEW_2
	SetNPCName(var_450_int); // 0x17d ObjFunc
	var_451_int = 0; // 0x17f PushV
	func_2966(var_451_int); // 0x180 NEW_2
	SetNPCDescription(var_451_int); // 0x182 ObjFunc
	var_452_string = ""; // 0x184 PushV
	func_2970(var_452_string); // 0x185 NEW_2
	SetPhoto(var_452_string); // 0x187 ObjFunc
	var_453_string = ""; // 0x189 PushV
	func_2972(var_453_string); // 0x18a NEW_2
	SetPhoto2(var_453_string); // 0x18c ObjFunc
	var_454_int = 0; // 0x18e PushV
	func_3379(var_454_int); // 0x18f NEW_2
	SetPlayerName(var_454_int); // 0x191 ObjFunc
	var_444_int = -1; // 0x193 MovI
	IsOverrideActive(var_443_bool); // 0x194 Func
	var_455_bool = var_443_bool; // 0x196 Push
	if(var_455_bool == 0) goto Label_410; // 0x197 JumpB
	var_435_int = -2; // 0x198 MovI
	return 8; // 0x199 Return
	
Label_410:
	DoDialog(var_442_object); // 0x19a Func
	var_456_bool = 0; var_457_object = Obj(); // 0x19c PushV
	var_458_object = Obj(); // 0x19d PushV
	func_2838(var_458_object); // 0x19e NEW_2
	var_457_object = var_458_object; // 0x19f Mov
	func_2647(var_456_bool, var_457_object); // 0x1a1 NEW_2
	var_459_object = Obj(); var_460_object = Obj(); // 0x1a3 PushV
	var_459_object = var_436_object; // 0x1a4 Mov
	var_460_object = var_442_object; // 0x1a5 Mov
	TaskCall(3); // 0x1a6 TaskCall
	func_446(var_461_object, var_462_object, var_463_string, var_464_bool, var_459_object, var_460_object); // 0x1a7 NEW_2
	TaskReturn(); // 0x1a8 TaskReturn
	IsDialogEnd(var_445_bool); // 0x1aa ObjFunc
	
Label_428:
	var_534_bool = var_445_bool == 0; // 0x1ac Not
	if(var_534_bool == 0) goto Label_435; // 0x1ad JumpB
	sync(); // 0x1ae Func
	IsDialogEnd(var_445_bool); // 0x1b0 ObjFunc
	goto Label_428; // 0x1b2 Jump
	
Label_435:
	var_535_object = Obj(); // 0x1b3 PushV
	var_535_object = var_436_object; // 0x1b4 Mov
	func_2630(); // 0x1b5 NEW_2
	StopDialog(var_442_object); // 0x1b7 Func
	GetReturnValue(var_444_int); // 0x1b9 ObjFunc
	var_435_int = var_444_int; // 0x1bb Mov
	return 8; // 0x1bc Return
}


func_2927(var_178_int)
{
	var_179_float = 0; var_180_float = 0; // 0xb6f PushV
	GetGameTime(var_180_float); // 0xb70 Func
	var_181_int = 1; // 0xb72 PushI
	var_182_int = 0; // 0xb73 PushV
	var_183_int = 24; // 0xb74 PushI
	var_182_int = var_180_float / var_180_float; // 0xb75 Div2
	var_178_int = var_181_int + var_182_int; // 0xb76 Add2
	return 2; // 0xb77 Return
}


func_3187(var_522_bool)
{
	var_524_int = 0; var_525_string = ""; // 0xc74 PushV
	var_525_string = "b10q03"; // 0xc75 MovS
	func_2854(var_524_int, var_525_string); // 0xc76 NEW_2
	var_526_int = 4; // 0xc78 PushI
	var_527_bool = var_524_int == var_526_int; // 0xc79 Eq
	if(var_527_bool == 0) goto Label_3197; // 0xc7a JumpB
	var_522_bool = 1; // 0xc7b MovB
	return 0; // 0xc7c Return
	
Label_3197:
	var_522_bool = 0; // 0xc7d MovB
	return 0; // 0xc7e Return
}


func_2936(var_276_bool, var_277_int)
{
	var_278_int = 0; // 0xb79 PushV
	func_2927(var_278_int); // 0xb7a NEW_2
	var_276_bool = var_278_int == var_277_int; // 0xb7c Eq2
	return 0; // 0xb7d Return
}


func_1402(var_0_object, var_52_int, var_53_object)
{
	var_55_object = Obj(); var_56_bool = 0; var_57_int = 0; var_58_bool = 0; var_59_object = Obj(); var_60_bool = 0; var_61_int = 0; var_62_bool = 0; // 0x57a PushV
	var_0_object = var_53_object; // 0x57b TMov
	var_63_bool = 0; var_64_object = Obj(); var_65_float = 0; // 0x57c PushV
	var_64_object = var_53_object; // 0x57d Mov
	var_65_float = 70.0; // 0x57e MovF
	func_2562(var_64_object, var_65_float); // 0x57f NEW_2
	var_109_bool = var_63_bool == 0; // 0x581 Not
	if(var_109_bool == 0) goto Label_1413; // 0x582 JumpB
	var_52_int = -2; // 0x583 MovI
	return 8; // 0x584 Return
	
Label_1413:
	CreateDialog(var_59_object); // 0x585 Func
	var_110_int = 0; // 0x587 PushV
	func_2968(var_110_int); // 0x588 NEW_2
	SetNPCName(var_110_int); // 0x58a ObjFunc
	var_111_int = 0; // 0x58c PushV
	func_2966(var_111_int); // 0x58d NEW_2
	SetNPCDescription(var_111_int); // 0x58f ObjFunc
	var_112_string = ""; // 0x591 PushV
	func_2970(var_112_string); // 0x592 NEW_2
	SetPhoto(var_112_string); // 0x594 ObjFunc
	var_113_string = ""; // 0x596 PushV
	func_2972(var_113_string); // 0x597 NEW_2
	SetPhoto2(var_113_string); // 0x599 ObjFunc
	var_114_int = 0; // 0x59b PushV
	func_3379(var_114_int); // 0x59c NEW_2
	SetPlayerName(var_114_int); // 0x59e ObjFunc
	var_61_int = -1; // 0x5a0 MovI
	IsOverrideActive(var_60_bool); // 0x5a1 Func
	var_122_bool = var_60_bool; // 0x5a3 Push
	if(var_122_bool == 0) goto Label_1447; // 0x5a4 JumpB
	var_52_int = -2; // 0x5a5 MovI
	return 8; // 0x5a6 Return
	
Label_1447:
	DoDialog(var_59_object); // 0x5a7 Func
	var_123_bool = 0; var_124_object = Obj(); // 0x5a9 PushV
	var_125_object = Obj(); // 0x5aa PushV
	func_2838(var_125_object); // 0x5ab NEW_2
	var_124_object = var_125_object; // 0x5ac Mov
	func_2647(var_123_bool, var_124_object); // 0x5ae NEW_2
	var_218_object = Obj(); var_219_object = Obj(); // 0x5b0 PushV
	var_218_object = var_53_object; // 0x5b1 Mov
	var_219_object = var_59_object; // 0x5b2 Mov
	TaskCall(7); // 0x5b3 TaskCall
	func_1483(var_220_object, var_221_object, var_222_string, var_223_bool, var_218_object, var_219_object); // 0x5b4 NEW_2
	TaskReturn(); // 0x5b5 TaskReturn
	IsDialogEnd(var_62_bool); // 0x5b7 ObjFunc
	
Label_1465:
	var_267_bool = var_62_bool == 0; // 0x5b9 Not
	if(var_267_bool == 0) goto Label_1472; // 0x5ba JumpB
	sync(); // 0x5bb Func
	IsDialogEnd(var_62_bool); // 0x5bd ObjFunc
	goto Label_1465; // 0x5bf Jump
	
Label_1472:
	var_268_object = Obj(); // 0x5c0 PushV
	var_268_object = var_53_object; // 0x5c1 Mov
	func_2630(); // 0x5c2 NEW_2
	StopDialog(var_59_object); // 0x5c4 Func
	GetReturnValue(var_61_int); // 0x5c6 ObjFunc
	var_52_int = var_61_int; // 0x5c8 Mov
	return 8; // 0x5c9 Return
}


func_2942(var_56_string, var_57_int)
{
	var_58_string = ""; var_59_string = ""; // 0xb7e PushV
	var_59_string = "idle"; // 0xb7f MovS
	var_60_int = var_57_int; // 0xb80 Push
	if(var_60_int == 0) goto Label_2947; // 0xb81 JumpB
	var_59_string = var_59_string + var_57_int; // 0xb82 Add2
	
Label_2947:
	var_56_string = var_59_string; // 0xb83 Mov
	return 2; // 0xb84 Return
}


func_3199(var_328_bool)
{
	var_330_int = 0; var_331_string = ""; // 0xc80 PushV
	var_331_string = "b1q05"; // 0xc81 MovS
	func_2854(var_330_int, var_331_string); // 0xc82 NEW_2
	var_332_int = 1000; // 0xc84 PushI
	var_333_bool = var_330_int == var_332_int; // 0xc85 Eq
	if(var_333_bool == 0) goto Label_3209; // 0xc86 JumpB
	var_328_bool = 1; // 0xc87 MovB
	return 0; // 0xc88 Return
	
Label_3209:
	var_328_bool = 0; // 0xc89 MovB
	return 0; // 0xc8a Return
}


func_2949(var_50_int)
{
	var_51_int = 0; var_52_bool = 0; var_53_int = 0; var_54_bool = 0; // 0xb85 PushV
	var_53_int = 0; // 0xb86 MovI
	
Label_2951:
	var_55_string = "all"; // 0xb87 PushS
	var_56_string = ""; var_57_int = 0; // 0xb88 PushV
	var_57_int = var_53_int; // 0xb89 Mov
	func_2942(var_56_string, var_57_int); // 0xb8a NEW_2
	HasAnimation(var_54_bool, var_55_string, var_56_string); // 0xb8c Func
	var_61_bool = var_54_bool == 0; // 0xb8e Not
	if(var_61_bool == 0) goto Label_2961; // 0xb8f JumpB
	goto Label_2964; // 0xb90 Jump
	
Label_2964:
	var_50_int = var_53_int; // 0xb94 Mov
	return 4; // 0xb95 Return
	
Label_2961:
	var_62_int = 1; // 0xb91 PushI
	var_53_int = var_53_int + var_62_int; // 0xb92 Add2
	goto Label_2951; // 0xb93 Jump
}


func_3211(var_578_bool)
{
	var_580_int = 0; var_581_string = ""; // 0xc8c PushV
	var_581_string = "oob12Mishka1"; // 0xc8d MovS
	func_2854(var_580_int, var_581_string); // 0xc8e NEW_2
	var_582_int = 0; // 0xc90 PushI
	var_583_bool = var_580_int == var_582_int; // 0xc91 Eq
	if(var_583_bool == 0) goto Label_3221; // 0xc92 JumpB
	var_578_bool = 1; // 0xc93 MovB
	return 0; // 0xc94 Return
	
Label_3221:
	var_578_bool = 0; // 0xc95 MovB
	return 0; // 0xc96 Return
}


func_2705(var_134_bool)
{
	var_136_string = ""; var_137_int = 0; var_138_bool = 0; var_139_int = 0; var_140_string = ""; var_141_string = ""; var_142_int = 0; var_143_bool = 0; var_144_int = 0; var_145_string = ""; // 0xa91 PushV
	var_141_string = "c"; // 0xa92 MovS
	var_142_int = 0; // 0xa93 MovI
	
Label_2708:
	var_146_int = 1; // 0xa94 PushI
	if(var_146_int == 0) goto Label_2721; // 0xa95 JumpB
	var_147_int = 1; // 0xa96 PushI
	var_148_int = var_142_int + var_147_int; // 0xa97 Add
	var_149_int = var_141_string + var_148_int; // 0xa98 Add
	HasProperty(var_149_int, var_143_bool); // 0xa99 ObjFunc
	var_150_bool = var_143_bool == 0; // 0xa9b Not
	if(var_150_bool == 0) goto Label_2718; // 0xa9c JumpB
	goto Label_2721; // 0xa9d Jump
	
Label_2721:
	var_151_bool = var_142_int == 0; // 0xaa1 Not
	if(var_151_bool == 0) goto Label_2725; // 0xaa2 JumpB
	var_134_bool = 0; // 0xaa3 MovB
	return 10; // 0xaa4 Return
	
Label_2725:
	var_144_int = 0; // 0xaa5 MovI
	var_152_int = 1; // 0xaa6 PushI
	var_153_bool = var_142_int > var_152_int; // 0xaa7 GT
	if(var_153_bool == 0) goto Label_2731; // 0xaa8 JumpB
	irand(var_144_int, var_142_int); // 0xaa9 Func
	
Label_2731:
	var_154_int = 1; // 0xaab PushI
	var_155_int = var_144_int + var_154_int; // 0xaac Add
	var_156_int = var_141_string + var_155_int; // 0xaad Add
	GetProperty(var_156_int, var_145_string); // 0xaae ObjFunc
	var_157_bool = 0; var_158_string = ""; // 0xab0 PushV
	var_158_string = var_145_string; // 0xab1 Mov
	func_2816(var_157_bool, var_158_string); // 0xab2 NEW_2
	var_134_bool = var_157_bool; // 0xab3 Mov
	return 10; // 0xab5 Return
	
Label_2718:
	var_163_int = 1; // 0xa9e PushI
	var_142_int = var_142_int + var_163_int; // 0xa9f Add2
	goto Label_2708; // 0xaa0 Jump
}


func_2966(var_111_int)
{
	var_111_int = 515546; // 0xb96 MovI
	return 0; // 0xb97 Return
}


func_3223()
{
	var_206_object = Obj(); var_207_object = Obj(); // 0xc97 PushV
	var_208_int = 605; // 0xc98 PushI
	var_209_int = 2; // 0xc99 PushI
	var_210_int = 531184; // 0xc9a PushI
	CreateDiaryEntry(var_207_object, var_208_int, var_209_int, var_210_int); // 0xc9b Func
	var_211_bool = 0; var_212_object = Obj(); var_213_int = 0; // 0xc9d PushV
	var_212_object = var_207_object; // 0xc9e Mov
	var_213_int = 594; // 0xc9f MovI
	func_3301(var_211_bool, var_212_object, var_213_int); // 0xca0 NEW_2
	return 2; // 0xca2 Return
}


func_2454()
{
	var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_int = 0; var_44_bool = 0; var_45_int = 0; var_46_int = 0; var_47_bool = 0; // 0x996 PushV
	WaitForAnimEnd(); // 0x997 Func
	var_48_bool = 0; // 0x999 PushV
	func_2557(var_48_bool); // 0x99a NEW_2
	var_49_bool = var_48_bool == 0; // 0x99c Not
	if(var_49_bool == 0) goto Label_2463; // 0x99d JumpB
	return 12; // 0x99e Return
	
Label_2463:
	var_50_int = 0; // 0x99f PushV
	func_2949(var_50_int); // 0x9a0 NEW_2
	var_42_int = var_50_int; // 0x9a1 Mov
	var_43_int = 0; // 0x9a3 MovI
	
Label_2468:
	var_63_bool = 0; // 0x9a4 PushV
	var_63_bool = 0; // 0x9a5 MovB
	var_64_int = 5; // 0x9a6 PushI
	var_65_bool = var_43_int < var_64_int; // 0x9a7 LT
	if(var_65_bool == 0) goto Label_2478; // 0x9a8 JumpB
	var_66_bool = 0; // 0x9a9 PushV
	func_2557(var_66_bool); // 0x9aa NEW_2
	if(var_66_bool == 0) goto Label_2478; // 0x9ac JumpB
	var_63_bool = 1; // 0x9ad MovB
	
Label_2478:
	if(var_63_bool == 0) goto Label_2520; // 0x9ae JumpB
	var_67_bool = var_42_int == 0; // 0x9af Not
	if(var_67_bool == 0) goto Label_2488; // 0x9b0 JumpB
	var_68_int = 3; // 0x9b1 PushI
	Sleep(var_68_int, var_44_bool); // 0x9b2 Func
	var_69_bool = var_44_bool == 0; // 0x9b4 Not
	if(var_69_bool == 0) goto Label_2487; // 0x9b5 JumpB
	goto Label_2520; // 0x9b6 Jump
	
Label_2520:
	ResetAAS(); // 0x9d8 Func
	return 12; // 0x9da Return
	
Label_2487:
	goto Label_2509; // 0x9b7 Jump
	
Label_2509:
	var_70_bool = 0; // 0x9cd PushV
	func_2523(var_70_bool); // 0x9ce NEW_2
	var_71_bool = var_70_bool == 0; // 0x9d0 Not
	if(var_71_bool == 0) goto Label_2515; // 0x9d1 JumpB
	goto Label_2520; // 0x9d2 Jump
	
Label_2515:
	ResetAAS(); // 0x9d3 Func
	var_72_int = 1; // 0x9d5 PushI
	var_43_int = var_43_int + var_72_int; // 0x9d6 Add2
	goto Label_2468; // 0x9d7 Jump
	
Label_2488:
	irand(var_45_int, var_42_int); // 0x9b8 Func
	var_73_int = 5; // 0x9ba PushI
	irand(var_46_int, var_73_int); // 0x9bb Func
	var_74_int = 0; // 0x9bd PushI
	var_75_bool = var_46_int != var_74_int; // 0x9be Neq
	if(var_75_bool == 0) goto Label_2497; // 0x9bf JumpB
	var_45_int = 0; // 0x9c0 MovI
	
Label_2497:
	var_76_string = "all"; // 0x9c1 PushS
	var_77_string = ""; var_78_int = 0; // 0x9c2 PushV
	var_78_int = var_45_int; // 0x9c3 Mov
	func_2942(var_77_string, var_78_int); // 0x9c4 NEW_2
	PlayAnimation(var_76_string, var_77_string); // 0x9c6 Func
	WaitForAnimEnd(var_47_bool); // 0x9c8 Func
	var_79_bool = var_47_bool == 0; // 0x9ca Not
	if(var_79_bool == 0) goto Label_2509; // 0x9cb JumpB
	goto Label_2520; // 0x9cc Jump
}


func_153(var_2_object, var_310_string)
{
	var_311_bool = 0; // 0x9a PushV
	func_2974(var_311_bool); // 0x9b NEW_2
	var_312_bool = var_311_bool == 0; // 0x9d Not
	if(var_312_bool == 0) goto Label_160; // 0x9e JumpB
	return 0; // 0x9f Return
	
Label_160:
	var_313_bool = var_310_string == var_2_object; // 0xa0 Eq
	if(var_313_bool == 0) goto Label_163; // 0xa1 JumpB
	return 0; // 0xa2 Return
	
Label_163:
	var_314_string = ""; var_315_bool = 0; // 0xa3 PushV
	var_314_string = var_310_string; // 0xa4 Mov
	var_316_string = ""; // 0xa5 PushS
	var_317_bool = var_310_string == var_316_string; // 0xa6 Eq
	if(var_317_bool == 0) goto Label_170; // 0xa7 JumpB
	var_315_bool = 0; // 0xa8 MovB
	goto Label_171; // 0xa9 Jump
	
Label_171:
	func_2801(var_314_string, var_315_bool); // 0xab NEW_2
	var_2_object = var_310_string; // 0xad TMov
	return 0; // 0xae Return
	
Label_170:
	var_315_bool = 1; // 0xaa MovB
}


func_2968(var_110_int)
{
	var_110_int = 502871; // 0xb98 MovI
	return 0; // 0xb99 Return
}


func_2970(var_112_string)
{
	var_112_string = "ui/NPC_Mishka.png"; // 0xb9a MovS
	return 0; // 0xb9b Return
}


func_2972(var_113_string)
{
	var_113_string = "ui/NPC_Mishka_b.png"; // 0xb9c MovS
	return 0; // 0xb9d Return
}


func_2974(var_105_bool)
{
	var_105_bool = 1; // 0xb9e MovB
	return 0; // 0xb9f Return
}


func_1183(var_0_object, var_1_object, var_2_object, var_3_string, var_562_object, var_563_object)
{
	var_0_object = var_563_object; // 0x4a0 TMov
	var_1_object = var_562_object; // 0x4a1 TMov
	var_3_string = 0; // 0x4a2 TMovB
	var_568_int = 1; // 0x4a3 PushI
	if(var_568_int == 0) goto Label_1221; // 0x4a4 JumpB
	var_569_string = ""; // 0x4a5 PushV
	var_569_string = "Autizm"; // 0x4a6 MovS
	func_1251(var_563_object, var_569_string); // 0x4a7 NEW_2
	var_577_int = 535243; // 0x4a9 PushI
	SetMessage(var_577_int); // 0x4aa TObjFunc
	ClearReplies(); // 0x4ac TObjFunc
	var_578_bool = 0; var_579_object = Obj(); // 0x4ae PushV
	var_579_object = var_1_object; // 0x4af MovT
	func_3211(var_579_object); // 0x4b0 NEW_2
	if(var_578_bool == 0) goto Label_1208; // 0x4b2 JumpB
	var_584_int = 535244; // 0x4b3 PushI
	var_585_int = 37054; // 0x4b4 PushI
	var_586_int = 36919; // 0x4b5 PushI
	AddReply(var_584_int, var_585_int, var_586_int); // 0x4b6 TObjFunc
	
Label_1208:
	var_587_int = 535367; // 0x4b8 PushI
	var_588_int = -1; // 0x4b9 PushI
	var_589_int = 37052; // 0x4ba PushI
	AddReply(var_587_int, var_588_int, var_589_int); // 0x4bb TObjFunc
	var_590_int = 535368; // 0x4bd PushI
	var_591_int = -1; // 0x4be PushI
	var_592_int = 37053; // 0x4bf PushI
	AddReply(var_590_int, var_591_int, var_592_int); // 0x4c0 TObjFunc
	goto Label_1221; // 0x4c2 Jump
	
Label_1221:
	var_593_bool = 0; // 0x4c5 PushV
	func_2974(var_593_bool); // 0x4c6 NEW_2
	if(var_593_bool == 0) goto Label_1236; // 0x4c8 JumpB
	
Label_1225:
	lshWaitForAnimEnd(); // 0x4c9 Func
	var_594_string = var_3_string; // 0x4cb PushT
	if(var_594_string == 0) goto Label_1230; // 0x4cc JumpB
	goto Label_1235; // 0x4cd Jump
	
Label_1235:
	goto Label_1250; // 0x4d3 Jump
	
Label_1250:
	return 0; // 0x4e2 Return
	
Label_1230:
	var_595_string = ""; // 0x4ce PushV
	var_595_string = var_2_object; // 0x4cf MovT
	func_2785(var_595_string); // 0x4d0 NEW_2
	goto Label_1225; // 0x4d2 Jump
	
Label_1236:
	var_596_string = "all"; // 0x4d4 PushS
	var_597_string = "idle"; // 0x4d5 PushS
	PlayAnimation(var_596_string, var_597_string); // 0x4d6 Func
	
Label_1240:
	WaitForAnimEnd(); // 0x4d8 Func
	var_598_string = var_3_string; // 0x4da PushT
	if(var_598_string == 0) goto Label_1245; // 0x4db JumpB
	goto Label_1250; // 0x4dc Jump
	
Label_1245:
	var_599_string = "all"; // 0x4dd PushS
	var_600_string = "idle"; // 0x4de PushS
	PlayAnimation(var_599_string, var_600_string); // 0x4df Func
	goto Label_1240; // 0x4e1 Jump
}


func_2207(var_2_object, var_634_string)
{
	var_635_bool = 0; // 0x8a0 PushV
	func_2974(var_635_bool); // 0x8a1 NEW_2
	var_636_bool = var_635_bool == 0; // 0x8a3 Not
	if(var_636_bool == 0) goto Label_2214; // 0x8a4 JumpB
	return 0; // 0x8a5 Return
	
Label_2214:
	var_637_bool = var_634_string == var_2_object; // 0x8a6 Eq
	if(var_637_bool == 0) goto Label_2217; // 0x8a7 JumpB
	return 0; // 0x8a8 Return
	
Label_2217:
	var_638_string = ""; var_639_bool = 0; // 0x8a9 PushV
	var_638_string = var_634_string; // 0x8aa Mov
	var_640_string = ""; // 0x8ab PushS
	var_641_bool = var_634_string == var_640_string; // 0x8ac Eq
	if(var_641_bool == 0) goto Label_2224; // 0x8ad JumpB
	var_639_bool = 0; // 0x8ae MovB
	goto Label_2225; // 0x8af Jump
	
Label_2225:
	func_2801(var_638_string, var_639_bool); // 0x8b1 NEW_2
	var_2_object = var_634_string; // 0x8b3 TMov
	return 0; // 0x8b4 Return
	
Label_2224:
	var_639_bool = 1; // 0x8b0 MovB
}


func_2976(var_143_object)
{
	var_145_string = "avroks blood is given"; // 0xba1 PushS
	Trace(var_145_string); // 0xba2 Func
	var_146_object = Obj(); var_147_string = ""; var_148_int = 0; // 0xba4 PushV
	var_146_object = var_143_object; // 0xba5 Mov
	var_147_string = "avroks_blood"; // 0xba6 MovS
	var_148_int = 1; // 0xba7 MovI
	func_2890(var_146_object, var_147_string, var_148_int); // 0xba8 NEW_2
	return 0; // 0xbaa Return
}


func_3236()
{
	var_116_object = Obj(); var_117_object = Obj(); // 0xca4 PushV
	var_118_int = 607; // 0xca5 PushI
	var_119_int = 2; // 0xca6 PushI
	var_120_int = 531500; // 0xca7 PushI
	CreateDiaryEntry(var_117_object, var_118_int, var_119_int, var_120_int); // 0xca8 Func
	var_121_bool = 0; var_122_object = Obj(); var_123_int = 0; // 0xcaa PushV
	var_122_object = var_117_object; // 0xcab Mov
	var_123_int = 594; // 0xcac MovI
	func_3301(var_121_bool, var_122_object, var_123_int); // 0xcad NEW_2
	return 2; // 0xcaf Return
}


func_2987()
{
	var_398_string = "oob8Mishka1"; // 0xbac PushS
	var_399_int = 1; // 0xbad PushI
	SetVariable(var_398_string, var_399_int); // 0xbae Func
	return 0; // 0xbb0 Return
}


func_3249()
{
	var_57_object = Obj(); var_58_object = Obj(); // 0xcb1 PushV
	var_59_int = 596; // 0xcb2 PushI
	var_60_int = 2; // 0xcb3 PushI
	var_61_int = 531147; // 0xcb4 PushI
	CreateDiaryEntry(var_58_object, var_59_int, var_60_int, var_61_int); // 0xcb5 Func
	var_62_bool = 0; var_63_object = Obj(); var_64_int = 0; // 0xcb7 PushV
	var_63_object = var_58_object; // 0xcb8 Mov
	var_64_int = 594; // 0xcb9 MovI
	func_3301(var_62_bool, var_63_object, var_64_int); // 0xcba NEW_2
	return 2; // 0xcbc Return
}


func_2993()
{
	var_39_string = "oob1Mishka1"; // 0xbb2 PushS
	var_40_int = 1; // 0xbb3 PushI
	SetVariable(var_39_string, var_40_int); // 0xbb4 Func
	return 0; // 0xbb6 Return
}


func_2742(var_165_bool)
{
	var_167_string = ""; var_168_int = 0; var_169_bool = 0; var_170_int = 0; var_171_string = ""; var_172_string = ""; var_173_int = 0; var_174_bool = 0; var_175_int = 0; var_176_string = ""; // 0xab6 PushV
	var_177_string = "d"; // 0xab7 PushS
	var_178_int = 0; // 0xab8 PushV
	func_2927(var_178_int); // 0xab9 NEW_2
	var_184_int = var_177_string + var_178_int; // 0xabb Add
	var_185_string = "m"; // 0xabc PushS
	var_172_string = var_184_int + var_185_string; // 0xabd Add2
	var_173_int = 0; // 0xabe MovI
	
Label_2751:
	var_186_int = 1; // 0xabf PushI
	if(var_186_int == 0) goto Label_2764; // 0xac0 JumpB
	var_187_int = 1; // 0xac1 PushI
	var_188_int = var_173_int + var_187_int; // 0xac2 Add
	var_189_int = var_172_string + var_188_int; // 0xac3 Add
	HasProperty(var_189_int, var_174_bool); // 0xac4 ObjFunc
	var_190_bool = var_174_bool == 0; // 0xac6 Not
	if(var_190_bool == 0) goto Label_2761; // 0xac7 JumpB
	goto Label_2764; // 0xac8 Jump
	
Label_2764:
	var_191_bool = var_173_int == 0; // 0xacc Not
	if(var_191_bool == 0) goto Label_2768; // 0xacd JumpB
	var_165_bool = 0; // 0xace MovB
	return 10; // 0xacf Return
	
Label_2768:
	var_175_int = 0; // 0xad0 MovI
	var_192_int = 1; // 0xad1 PushI
	var_193_bool = var_173_int > var_192_int; // 0xad2 GT
	if(var_193_bool == 0) goto Label_2774; // 0xad3 JumpB
	irand(var_175_int, var_173_int); // 0xad4 Func
	
Label_2774:
	var_194_int = 1; // 0xad6 PushI
	var_195_int = var_175_int + var_194_int; // 0xad7 Add
	var_196_int = var_172_string + var_195_int; // 0xad8 Add
	GetProperty(var_196_int, var_176_string); // 0xad9 ObjFunc
	var_197_bool = 0; var_198_string = ""; // 0xadb PushV
	var_198_string = var_176_string; // 0xadc Mov
	func_2816(var_197_bool, var_198_string); // 0xadd NEW_2
	var_165_bool = var_197_bool; // 0xade Mov
	return 10; // 0xae0 Return
	
Label_2761:
	var_199_int = 1; // 0xac9 PushI
	var_173_int = var_173_int + var_199_int; // 0xaca Add2
	goto Label_2751; // 0xacb Jump
}


func_2999()
{
	var_131_string = "b10q04MishkaTalk"; // 0xbb8 PushS
	var_132_int = 9; // 0xbb9 PushI
	SetVariable(var_131_string, var_132_int); // 0xbba Func
	func_3275(); // 0xbbd NEW_2
	return 0; // 0xbbf Return
}


func_1722(var_0_object, var_1_object, var_2_object, var_3_string, var_376_object, var_377_object)
{
	var_0_object = var_377_object; // 0x6bb TMov
	var_1_object = var_376_object; // 0x6bc TMov
	var_3_string = 0; // 0x6bd TMovB
	var_382_int = 1; // 0x6be PushI
	if(var_382_int == 0) goto Label_1789; // 0x6bf JumpB
	var_383_bool = 0; // 0x6c0 PushV
	var_383_bool = 0; // 0x6c1 MovB
	var_384_bool = 0; var_385_object = Obj(); // 0x6c2 PushV
	var_385_object = var_1_object; // 0x6c3 MovT
	func_3104(var_385_object); // 0x6c4 NEW_2
	if(var_384_bool == 0) goto Label_1741; // 0x6c6 JumpB
	var_390_bool = 0; var_391_object = Obj(); // 0x6c7 PushV
	var_391_object = var_1_object; // 0x6c8 MovT
	func_3116(var_391_object); // 0x6c9 NEW_2
	if(var_390_bool == 0) goto Label_1741; // 0x6cb JumpB
	var_383_bool = 1; // 0x6cc MovB
	
Label_1741:
	if(var_383_bool == 0) goto Label_1767; // 0x6cd JumpB
	var_396_object = Obj(); var_397_object = Obj(); // 0x6ce PushV
	var_396_object = var_1_object; // 0x6cf MovT
	var_397_object = var_0_object; // 0x6d0 MovT
	func_2987(); // 0x6d1 NEW_2
	var_400_string = ""; // 0x6d3 PushV
	var_400_string = "Fear"; // 0x6d4 MovS
	func_1819(var_377_object, var_400_string); // 0x6d5 NEW_2
	var_408_int = 521408; // 0x6d7 PushI
	SetMessage(var_408_int); // 0x6d8 TObjFunc
	ClearReplies(); // 0x6da TObjFunc
	var_409_int = 521409; // 0x6dc PushI
	var_410_int = 25093; // 0x6dd PushI
	var_411_int = 22587; // 0x6de PushI
	AddReply(var_409_int, var_410_int, var_411_int); // 0x6df TObjFunc
	var_412_int = 523832; // 0x6e1 PushI
	var_413_int = -1; // 0x6e2 PushI
	var_414_int = 25104; // 0x6e3 PushI
	AddReply(var_412_int, var_413_int, var_414_int); // 0x6e4 TObjFunc
	goto Label_1789; // 0x6e6 Jump
	
Label_1789:
	var_415_bool = 0; // 0x6fd PushV
	func_2974(var_415_bool); // 0x6fe NEW_2
	if(var_415_bool == 0) goto Label_1804; // 0x700 JumpB
	
Label_1793:
	lshWaitForAnimEnd(); // 0x701 Func
	var_416_string = var_3_string; // 0x703 PushT
	if(var_416_string == 0) goto Label_1798; // 0x704 JumpB
	goto Label_1803; // 0x705 Jump
	
Label_1803:
	goto Label_1818; // 0x70b Jump
	
Label_1818:
	return 0; // 0x71a Return
	
Label_1798:
	var_417_string = ""; // 0x706 PushV
	var_417_string = var_2_object; // 0x707 MovT
	func_2785(var_417_string); // 0x708 NEW_2
	goto Label_1793; // 0x70a Jump
	
Label_1804:
	var_418_string = "all"; // 0x70c PushS
	var_419_string = "idle"; // 0x70d PushS
	PlayAnimation(var_418_string, var_419_string); // 0x70e Func
	
Label_1808:
	WaitForAnimEnd(); // 0x710 Func
	var_420_string = var_3_string; // 0x712 PushT
	if(var_420_string == 0) goto Label_1813; // 0x713 JumpB
	goto Label_1818; // 0x714 Jump
	
Label_1813:
	var_421_string = "all"; // 0x715 PushS
	var_422_string = "idle"; // 0x716 PushS
	PlayAnimation(var_421_string, var_422_string); // 0x717 Func
	goto Label_1808; // 0x719 Jump
	
Label_1767:
	var_423_string = ""; // 0x6e7 PushV
	var_423_string = "Fear"; // 0x6e8 MovS
	func_1819(var_377_object, var_423_string); // 0x6e9 NEW_2
	var_424_int = 521410; // 0x6eb PushI
	SetMessage(var_424_int); // 0x6ec TObjFunc
	ClearReplies(); // 0x6ee TObjFunc
	var_425_int = 521411; // 0x6f0 PushI
	var_426_int = 25088; // 0x6f1 PushI
	var_427_int = 22589; // 0x6f2 PushI
	AddReply(var_425_int, var_426_int, var_427_int); // 0x6f3 TObjFunc
	var_428_int = 523816; // 0x6f5 PushI
	var_429_int = -1; // 0x6f6 PushI
	var_430_int = 25087; // 0x6f7 PushI
	AddReply(var_428_int, var_429_int, var_430_int); // 0x6f8 TObjFunc
	goto Label_1789; // 0x6fa Jump
}


func_3262()
{
	var_181_object = Obj(); var_182_object = Obj(); // 0xcbe PushV
	var_183_int = 603; // 0xcbf PushI
	var_184_int = 2; // 0xcc0 PushI
	var_185_int = 531182; // 0xcc1 PushI
	CreateDiaryEntry(var_182_object, var_183_int, var_184_int, var_185_int); // 0xcc2 Func
	var_186_bool = 0; var_187_object = Obj(); var_188_int = 0; // 0xcc4 PushV
	var_187_object = var_182_object; // 0xcc5 Mov
	var_188_int = 594; // 0xcc6 MovI
	func_3301(var_186_bool, var_187_object, var_188_int); // 0xcc7 NEW_2
	return 2; // 0xcc9 Return
}


func_446(var_0_object, var_1_object, var_2_object, var_3_string, var_459_object, var_460_object)
{
	var_0_object = var_460_object; // 0x1bf TMov
	var_1_object = var_459_object; // 0x1c0 TMov
	var_3_string = 0; // 0x1c1 TMovB
	var_465_int = 1; // 0x1c2 PushI
	if(var_465_int == 0) goto Label_528; // 0x1c3 JumpB
	var_466_bool = 0; var_467_object = Obj(); // 0x1c4 PushV
	var_467_object = var_1_object; // 0x1c5 MovT
	func_3152(var_467_object); // 0x1c6 NEW_2
	if(var_466_bool == 0) goto Label_472; // 0x1c8 JumpB
	var_472_string = ""; // 0x1c9 PushV
	var_472_string = "Suspicion"; // 0x1ca MovS
	func_558(var_460_object, var_472_string); // 0x1cb NEW_2
	var_480_int = 531162; // 0x1cd PushI
	SetMessage(var_480_int); // 0x1ce TObjFunc
	ClearReplies(); // 0x1d0 TObjFunc
	var_481_int = 531292; // 0x1d2 PushI
	var_482_int = 32610; // 0x1d3 PushI
	var_483_int = 32609; // 0x1d4 PushI
	AddReply(var_481_int, var_482_int, var_483_int); // 0x1d5 TObjFunc
	goto Label_528; // 0x1d7 Jump
	
Label_528:
	var_484_bool = 0; // 0x210 PushV
	func_2974(var_484_bool); // 0x211 NEW_2
	if(var_484_bool == 0) goto Label_543; // 0x213 JumpB
	
Label_532:
	lshWaitForAnimEnd(); // 0x214 Func
	var_485_string = var_3_string; // 0x216 PushT
	if(var_485_string == 0) goto Label_537; // 0x217 JumpB
	goto Label_542; // 0x218 Jump
	
Label_542:
	goto Label_557; // 0x21e Jump
	
Label_557:
	return 0; // 0x22d Return
	
Label_537:
	var_486_string = ""; // 0x219 PushV
	var_486_string = var_2_object; // 0x21a MovT
	func_2785(var_486_string); // 0x21b NEW_2
	goto Label_532; // 0x21d Jump
	
Label_543:
	var_487_string = "all"; // 0x21f PushS
	var_488_string = "idle"; // 0x220 PushS
	PlayAnimation(var_487_string, var_488_string); // 0x221 Func
	
Label_547:
	WaitForAnimEnd(); // 0x223 Func
	var_489_string = var_3_string; // 0x225 PushT
	if(var_489_string == 0) goto Label_552; // 0x226 JumpB
	goto Label_557; // 0x227 Jump
	
Label_552:
	var_490_string = "all"; // 0x228 PushS
	var_491_string = "idle"; // 0x229 PushS
	PlayAnimation(var_490_string, var_491_string); // 0x22a Func
	goto Label_547; // 0x22c Jump
	
Label_472:
	var_492_string = ""; // 0x1d8 PushV
	var_492_string = "Neutral"; // 0x1d9 MovS
	func_558(var_460_object, var_492_string); // 0x1da NEW_2
	var_493_int = 530485; // 0x1dc PushI
	SetMessage(var_493_int); // 0x1dd TObjFunc
	ClearReplies(); // 0x1df TObjFunc
	var_494_bool = 0; var_495_object = Obj(); // 0x1e1 PushV
	var_495_object = var_1_object; // 0x1e2 MovT
	func_3140(var_495_object); // 0x1e3 NEW_2
	if(var_494_bool == 0) goto Label_491; // 0x1e5 JumpB
	var_500_int = 530486; // 0x1e6 PushI
	var_501_int = 31853; // 0x1e7 PushI
	var_502_int = 31852; // 0x1e8 PushI
	AddReply(var_500_int, var_501_int, var_502_int); // 0x1e9 TObjFunc
	
Label_491:
	var_503_bool = 0; // 0x1eb PushV
	var_503_bool = 0; // 0x1ec MovB
	var_504_bool = 0; var_505_object = Obj(); // 0x1ed PushV
	var_505_object = var_1_object; // 0x1ee MovT
	func_3164(var_505_object); // 0x1ef NEW_2
	if(var_504_bool == 0) goto Label_504; // 0x1f1 JumpB
	var_510_bool = 0; var_511_object = Obj(); // 0x1f2 PushV
	var_511_object = var_1_object; // 0x1f3 MovT
	func_3176(var_510_bool, var_511_object); // 0x1f4 NEW_2
	if(var_510_bool == 0) goto Label_504; // 0x1f6 JumpB
	var_503_bool = 1; // 0x1f7 MovB
	
Label_504:
	if(var_503_bool == 0) goto Label_510; // 0x1f8 JumpB
	var_519_int = 531172; // 0x1f9 PushI
	var_520_int = 32623; // 0x1fa PushI
	var_521_int = 32480; // 0x1fb PushI
	AddReply(var_519_int, var_520_int, var_521_int); // 0x1fc TObjFunc
	
Label_510:
	var_522_bool = 0; var_523_object = Obj(); // 0x1fe PushV
	var_523_object = var_1_object; // 0x1ff MovT
	func_3187(var_523_object); // 0x200 NEW_2
	if(var_522_bool == 0) goto Label_520; // 0x202 JumpB
	var_528_int = 531179; // 0x203 PushI
	var_529_int = 32617; // 0x204 PushI
	var_530_int = 32487; // 0x205 PushI
	AddReply(var_528_int, var_529_int, var_530_int); // 0x206 TObjFunc
	
Label_520:
	var_531_int = 530489; // 0x208 PushI
	var_532_int = -1; // 0x209 PushI
	var_533_int = 31855; // 0x20a PushI
	AddReply(var_531_int, var_532_int, var_533_int); // 0x20b TObjFunc
	goto Label_528; // 0x20d Jump
}


func_3008()
{
	var_169_string = "playsound"; // 0xbc1 PushS
	var_170_string = "giveitem"; // 0xbc2 PushS
	TriggerWorld(var_169_string, var_170_string); // 0xbc3 Func
	return 0; // 0xbc5 Return
}


func_3014()
{
	var_39_object = Obj(); var_40_object = Obj(); // 0xbc6 PushV
	var_41_string = "b10q03"; // 0xbc7 PushS
	var_42_int = 2; // 0xbc8 PushI
	SetVariable(var_41_string, var_42_int); // 0xbc9 Func
	var_43_object = Obj(); // 0xbcb PushV
	func_3329(var_43_object); // 0xbcc NEW_2
	var_40_object = var_43_object; // 0xbcd Mov
	var_50_string = "b10q03MishkaGotoDoll"; // 0xbcf PushS
	var_51_string = "pt_b10q03_plant1"; // 0xbd0 PushS
	var_52_int = 0; // 0xbd1 PushI
	var_53_int = 531262; // 0xbd2 PushI
	var_54_float = 0; // 0xbd3 PushV
	func_2922(var_54_float); // 0xbd4 NEW_2
	AddMark(var_50_string, var_51_string, var_52_int, var_53_int, var_54_float); // 0xbd6 ObjFunc
	func_3249(); // 0xbd9 NEW_2
	var_80_bool = 0; var_81_string = ""; var_82_string = ""; // 0xbdb PushV
	var_81_string = "quest_b10_03"; // 0xbdc MovS
	var_82_string = "place_doll"; // 0xbdd MovS
	func_2910(var_80_bool, var_81_string, var_82_string); // 0xbde NEW_2
	return 2; // 0xbe0 Return
}


func_3275()
{
	var_133_object = Obj(); var_134_object = Obj(); // 0xccb PushV
	var_135_int = 558; // 0xccc PushI
	var_136_int = 2; // 0xccd PushI
	var_137_int = 530537; // 0xcce PushI
	CreateDiaryEntry(var_134_object, var_135_int, var_136_int, var_137_int); // 0xccf Func
	var_138_bool = 0; var_139_object = Obj(); var_140_int = 0; // 0xcd1 PushV
	var_139_object = var_134_object; // 0xcd2 Mov
	var_140_int = 549; // 0xcd3 MovI
	func_3301(var_138_bool, var_139_object, var_140_int); // 0xcd4 NEW_2
	return 2; // 0xcd6 Return
}


func_1483(var_0_object, var_1_object, var_2_object, var_3_string, var_218_object, var_219_object)
{
	var_0_object = var_219_object; // 0x5cc TMov
	var_1_object = var_218_object; // 0x5cd TMov
	var_3_string = 0; // 0x5ce TMovB
	var_224_int = 1; // 0x5cf PushI
	if(var_224_int == 0) goto Label_1511; // 0x5d0 JumpB
	var_225_string = ""; // 0x5d1 PushV
	var_225_string = "Neutral"; // 0x5d2 MovS
	func_1541(var_219_object, var_225_string); // 0x5d3 NEW_2
	var_242_int = 518033; // 0x5d5 PushI
	SetMessage(var_242_int); // 0x5d6 TObjFunc
	ClearReplies(); // 0x5d8 TObjFunc
	var_243_int = 518034; // 0x5da PushI
	var_244_int = 28430; // 0x5db PushI
	var_245_int = 19167; // 0x5dc PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x5dd TObjFunc
	var_246_int = 527134; // 0x5df PushI
	var_247_int = 28433; // 0x5e0 PushI
	var_248_int = 28432; // 0x5e1 PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x5e2 TObjFunc
	goto Label_1511; // 0x5e4 Jump
	
Label_1511:
	var_249_bool = 0; // 0x5e7 PushV
	func_2974(var_249_bool); // 0x5e8 NEW_2
	if(var_249_bool == 0) goto Label_1526; // 0x5ea JumpB
	
Label_1515:
	lshWaitForAnimEnd(); // 0x5eb Func
	var_250_string = var_3_string; // 0x5ed PushT
	if(var_250_string == 0) goto Label_1520; // 0x5ee JumpB
	goto Label_1525; // 0x5ef Jump
	
Label_1525:
	goto Label_1540; // 0x5f5 Jump
	
Label_1540:
	return 0; // 0x604 Return
	
Label_1520:
	var_251_string = ""; // 0x5f0 PushV
	var_251_string = var_2_object; // 0x5f1 MovT
	func_2785(var_251_string); // 0x5f2 NEW_2
	goto Label_1515; // 0x5f4 Jump
	
Label_1526:
	var_262_string = "all"; // 0x5f6 PushS
	var_263_string = "idle"; // 0x5f7 PushS
	PlayAnimation(var_262_string, var_263_string); // 0x5f8 Func
	
Label_1530:
	WaitForAnimEnd(); // 0x5fa Func
	var_264_string = var_3_string; // 0x5fc PushT
	if(var_264_string == 0) goto Label_1535; // 0x5fd JumpB
	goto Label_1540; // 0x5fe Jump
	
Label_1535:
	var_265_string = "all"; // 0x5ff PushS
	var_266_string = "idle"; // 0x600 PushS
	PlayAnimation(var_265_string, var_266_string); // 0x601 Func
	goto Label_1530; // 0x603 Jump
}


func_3288(var_71_object)
{
	var_72_object = Obj(); var_73_object = Obj(); // 0xcd8 PushV
	GetDiaryRoot(var_73_object); // 0xcd9 Func
	var_74_bool = var_73_object == 0; // 0xcdb Not
	if(var_74_bool == 0) goto Label_3298; // 0xcdc JumpB
	var_75_string = "Can't retrieve diary root"; // 0xcdd PushS
	Trace(var_75_string); // 0xcde Func
	var_71_object = 0; // 0xce0 MovB
	return 2; // 0xce1 Return
	
Label_3298:
	var_71_object = var_73_object; // 0xce2 Mov
	return 2; // 0xce3 Return
}


func_2523(var_70_bool)
{
	var_70_bool = 1; // 0x9db MovB
	return 0; // 0x9dc Return
}


func_2525()
{
	StopAnimation(); // 0x9dd Func
	StopGroup0(); // 0x9df Func
	return 0; // 0x9e1 Return
}


func_2785(var_251_string)
{
	var_252_bool = 0; var_253_float = 0; var_254_float = 0; var_255_bool = 0; var_256_float = 0; var_257_float = 0; // 0xae1 PushV
	lshHasAnimation(var_255_bool, var_251_string); // 0xae2 Func
	var_258_bool = var_255_bool; // 0xae4 Push
	if(var_258_bool == 0) goto Label_2796; // 0xae5 JumpB
	lshGetAnimTimes(var_251_string, var_256_float, var_257_float); // 0xae6 Func
	var_259_bool = 0; // 0xae8 PushB
	lshPlayAnimation(var_256_float, var_257_float, var_259_bool); // 0xae9 Func
	goto Label_2800; // 0xaeb Jump
	
Label_2800:
	return 6; // 0xaf0 Return
	
Label_2796:
	var_260_string = "Can't find lsh animation : "; // 0xaec PushS
	var_261_int = var_260_string + var_251_string; // 0xaed Add
	Trace(var_261_int); // 0xaee Func
}


func_3042()
{
	var_88_object = Obj(); var_89_string = ""; var_90_float = 0; // 0xbe3 PushV
	var_91_object = Obj(); // 0xbe4 PushV
	func_3329(var_91_object); // 0xbe5 NEW_2
	var_88_object = var_91_object; // 0xbe6 Mov
	var_89_string = "pt_b10q03_plant1"; // 0xbe8 MovS
	var_90_float = 2; // 0xbe9 MovI
	func_3346(var_88_object, var_89_string, var_90_float); // 0xbea NEW_2
	var_111_object = Obj(); // 0xbec PushV
	func_3329(var_111_object); // 0xbed NEW_2
	ShowMap(var_111_object); // 0xbef ObjFunc
	return 0; // 0xbf1 Return
}


func_1251(var_2_object, var_569_string)
{
	var_570_bool = 0; // 0x4e4 PushV
	func_2974(var_570_bool); // 0x4e5 NEW_2
	var_571_bool = var_570_bool == 0; // 0x4e7 Not
	if(var_571_bool == 0) goto Label_1258; // 0x4e8 JumpB
	return 0; // 0x4e9 Return
	
Label_1258:
	var_572_bool = var_569_string == var_2_object; // 0x4ea Eq
	if(var_572_bool == 0) goto Label_1261; // 0x4eb JumpB
	return 0; // 0x4ec Return
	
Label_1261:
	var_573_string = ""; var_574_bool = 0; // 0x4ed PushV
	var_573_string = var_569_string; // 0x4ee Mov
	var_575_string = ""; // 0x4ef PushS
	var_576_bool = var_569_string == var_575_string; // 0x4f0 Eq
	if(var_576_bool == 0) goto Label_1268; // 0x4f1 JumpB
	var_574_bool = 0; // 0x4f2 MovB
	goto Label_1269; // 0x4f3 Jump
	
Label_1269:
	func_2801(var_573_string, var_574_bool); // 0x4f5 NEW_2
	var_2_object = var_569_string; // 0x4f7 TMov
	return 0; // 0x4f8 Return
	
Label_1268:
	var_574_bool = 1; // 0x4f4 MovB
}


func_2530(var_46_float)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x9e2 PushV
	GetPosition(var_51_cvector); // 0x9e3 Func
	GetPosition(var_52_cvector); // 0x9e5 ObjFunc
	var_53_cvector = var_52_cvector - var_51_cvector; // 0x9e7 Sub2
	var_46_float = var_53_cvector | var_53_cvector; // 0x9e8 Or2
	return 6; // 0x9e9 Return
}


func_3301(var_62_bool, var_63_object, var_64_int)
{
	var_65_object = Obj(); var_66_object = Obj(); var_67_int = 0; var_68_object = Obj(); var_69_object = Obj(); var_70_int = 0; // 0xce5 PushV
	var_71_object = Obj(); // 0xce6 PushV
	func_3288(var_71_object); // 0xce7 NEW_2
	var_68_object = var_71_object; // 0xce8 Mov
	Find(var_64_int, var_69_object); // 0xcea ObjFunc
	var_76_bool = var_69_object == 0; // 0xcec Not
	if(var_76_bool == 0) goto Label_3316; // 0xced JumpB
	var_77_string = "Can't find diary parent with id: "; // 0xcee PushS
	var_78_int = var_77_string + var_64_int; // 0xcef Add
	Trace(var_78_int); // 0xcf0 Func
	var_62_bool = 0; // 0xcf2 MovB
	return 6; // 0xcf3 Return
	
Label_3316:
	AddChild(var_63_object); // 0xcf4 ObjFunc
	var_79_int = 7; // 0xcf6 PushI
	SendWorldWndMessage(var_79_int); // 0xcf7 Func
	GetCategory(var_70_int); // 0xcf9 ObjFunc
	SetDiarySection(var_70_int); // 0xcfb Func
	var_62_bool = 0; // 0xcfd MovB
	return 6; // 0xcfe Return
}


func_2278(var_0_object)
{
	var_32_bool = 0; // 0x8e6 PushV
	func_2557(var_32_bool); // 0x8e7 NEW_2
	var_35_bool = var_32_bool == 0; // 0x8e9 Not
	if(var_35_bool == 0) goto Label_2285; // 0x8ea JumpB
	Hold(); // 0x8eb Func
	
Label_2285:
	GetDirection(var_0_object); // 0x8ed Func
	
Label_2287:
	func_2454(); // 0x8f0 NEW_2
	goto Label_2287; // 0x8f2 Jump
}


func_2538(var_39_bool, var_40_cvector)
{
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_bool = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; // 0x9ea PushV
	GetPosition(var_44_cvector); // 0x9eb Func
	var_45_cvector = var_40_cvector - var_44_cvector; // 0x9ed Sub2
	var_47_float = GetByIndex(var_45_cvector, 0); // 0x9ee PushE
	var_48_float = GetByIndex(var_45_cvector, 2); // 0x9ef PushE
	Rotate(var_47_float, var_48_float, var_46_bool); // 0x9f0 Func
	var_39_bool = var_46_bool; // 0x9f2 Mov
	return 6; // 0x9f3 Return
}


func_2801(var_229_string, var_230_bool)
{
	var_233_bool = 0; var_234_float = 0; var_235_float = 0; var_236_bool = 0; var_237_float = 0; var_238_float = 0; // 0xaf1 PushV
	lshHasAnimation(var_236_bool, var_229_string); // 0xaf2 Func
	var_239_bool = var_236_bool; // 0xaf4 Push
	if(var_239_bool == 0) goto Label_2811; // 0xaf5 JumpB
	lshGetAnimTimes(var_229_string, var_237_float, var_238_float); // 0xaf6 Func
	lshPlayAnimation(var_237_float, var_238_float, var_230_bool); // 0xaf8 Func
	goto Label_2815; // 0xafa Jump
	
Label_2815:
	return 6; // 0xaff Return
	
Label_2811:
	var_240_string = "Can't find lsh animation : "; // 0xafb PushS
	var_241_int = var_240_string + var_229_string; // 0xafc Add
	Trace(var_241_int); // 0xafd Func
}


func_3058()
{
	var_179_string = "b10q03"; // 0xbf3 PushS
	var_180_int = 3; // 0xbf4 PushI
	SetVariable(var_179_string, var_180_int); // 0xbf5 Func
	func_3262(); // 0xbf8 NEW_2
	var_189_bool = 0; var_190_string = ""; var_191_string = ""; // 0xbfa PushV
	var_190_string = "quest_b10_03"; // 0xbfb MovS
	var_191_string = "place_blood"; // 0xbfc MovS
	func_2910(var_189_bool, var_190_string, var_191_string); // 0xbfd NEW_2
	return 0; // 0xbff Return
}


func_2292(var_56_bool)
{
	var_57_object = Obj(); var_58_object = Obj(); // 0x8f4 PushV
	var_59_string = "player"; // 0x8f5 PushS
	FindActor(var_58_object, var_59_string); // 0x8f6 Func
	var_60_bool = var_58_object == 0; // 0x8f8 Not
	if(var_60_bool == 0) goto Label_2300; // 0x8f9 JumpB
	var_56_bool = 0; // 0x8fa MovB
	return 2; // 0x8fb Return
	
Label_2300:
	var_61_bool = 0; var_62_object = Obj(); // 0x8fc PushV
	var_62_object = var_58_object; // 0x8fd Mov
	func_2548(var_62_object); // 0x8fe NEW_2
	var_56_bool = var_61_bool; // 0x8ff Mov
	return 2; // 0x901 Return
}


func_2548(var_35_bool)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); // 0x9f4 PushV
	GetPosition(var_38_cvector); // 0x9f5 ObjFunc
	var_39_bool = 0; var_40_cvector = CVector(0,0,0); // 0x9f7 PushV
	var_40_cvector = var_38_cvector; // 0x9f8 Mov
	func_2538(var_39_bool, var_40_cvector); // 0x9f9 NEW_2
	var_35_bool = var_39_bool; // 0x9fa Mov
	return 2; // 0x9fc Return
}


func_2557(var_32_bool)
{
	var_33_bool = 0; var_34_bool = 0; // 0x9fd PushV
	IsLoaded(var_34_bool); // 0x9fe Func
	var_32_bool = var_34_bool; // 0xa00 Mov
	return 2; // 0xa01 Return
}


