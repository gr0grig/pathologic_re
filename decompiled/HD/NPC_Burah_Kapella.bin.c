task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	var_53_int = 1; // 0xa7 PushI
	if(var_53_int == 0) goto Label_379; // 0xa8 JumpB
	func_6100(); // 0xaa NEW_2
	var_55_int = 20654; // 0xac PushI
	var_56_bool = var_52_cvector == var_55_int; // 0xad Eq
	if(var_56_bool == 0) goto Label_180; // 0xae JumpB
	var_57_object = Obj(); var_58_object = Obj(); // 0xaf PushV
	var_57_object = var_1_object; // 0xb0 MovT
	var_58_object = var_0_object; // 0xb1 MovT
	func_6341(); // 0xb2 NEW_2
	
Label_180:
	var_61_int = 19384; // 0xb4 PushI
	var_62_bool = var_51_bool == var_61_int; // 0xb5 Eq
	if(var_62_bool == 0) goto Label_208; // 0xb6 JumpB
	var_63_string = ""; // 0xb7 PushV
	var_63_string = "Neutral"; // 0xb8 MovS
	func_144(var_52_cvector, var_63_string); // 0xb9 NEW_2
	var_80_int = 518275; // 0xbb PushI
	SetMessage(var_80_int); // 0xbc TObjFunc
	ClearReplies(); // 0xbe TObjFunc
	var_81_bool = 0; var_82_object = Obj(); // 0xc0 PushV
	var_82_object = var_1_object; // 0xc1 MovT
	func_7117(var_82_object); // 0xc2 NEW_2
	if(var_81_bool == 0) goto Label_202; // 0xc4 JumpB
	var_89_int = 519482; // 0xc5 PushI
	var_90_int = 20655; // 0xc6 PushI
	var_91_int = 20654; // 0xc7 PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0xc8 TObjFunc
	
Label_202:
	var_92_int = 518276; // 0xca PushI
	var_93_int = -1; // 0xcb PushI
	var_94_int = 19385; // 0xcc PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0xcd TObjFunc
	return 0; // 0xcf Return
	
Label_208:
	var_95_int = 20655; // 0xd0 PushI
	var_96_bool = var_51_bool == var_95_int; // 0xd1 Eq
	if(var_96_bool == 0) goto Label_231; // 0xd2 JumpB
	var_97_string = ""; // 0xd3 PushV
	var_97_string = "Strength"; // 0xd4 MovS
	func_144(var_52_cvector, var_97_string); // 0xd5 NEW_2
	var_98_int = 519483; // 0xd7 PushI
	SetMessage(var_98_int); // 0xd8 TObjFunc
	ClearReplies(); // 0xda TObjFunc
	var_99_int = 519484; // 0xdc PushI
	var_100_int = 20662; // 0xdd PushI
	var_101_int = 20656; // 0xde PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0xdf TObjFunc
	var_102_int = 519485; // 0xe1 PushI
	var_103_int = 20658; // 0xe2 PushI
	var_104_int = 20657; // 0xe3 PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0xe4 TObjFunc
	return 0; // 0xe6 Return
	
Label_231:
	var_105_int = 20658; // 0xe7 PushI
	var_106_bool = var_51_bool == var_105_int; // 0xe8 Eq
	if(var_106_bool == 0) goto Label_254; // 0xe9 JumpB
	var_107_string = ""; // 0xea PushV
	var_107_string = "Fear"; // 0xeb MovS
	func_144(var_52_cvector, var_107_string); // 0xec NEW_2
	var_108_int = 519486; // 0xee PushI
	SetMessage(var_108_int); // 0xef TObjFunc
	ClearReplies(); // 0xf1 TObjFunc
	var_109_int = 519487; // 0xf3 PushI
	var_110_int = 20660; // 0xf4 PushI
	var_111_int = 20659; // 0xf5 PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0xf6 TObjFunc
	var_112_int = 527738; // 0xf8 PushI
	var_113_int = 29091; // 0xf9 PushI
	var_114_int = 29090; // 0xfa PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0xfb TObjFunc
	return 0; // 0xfd Return
	
Label_254:
	var_115_int = 29091; // 0xfe PushI
	var_116_bool = var_51_bool == var_115_int; // 0xff Eq
	if(var_116_bool == 0) goto Label_272; // 0x100 JumpB
	var_117_string = ""; // 0x101 PushV
	var_117_string = "Neutral"; // 0x102 MovS
	func_144(var_52_cvector, var_117_string); // 0x103 NEW_2
	var_118_int = 527739; // 0x105 PushI
	SetMessage(var_118_int); // 0x106 TObjFunc
	ClearReplies(); // 0x108 TObjFunc
	var_119_int = 527740; // 0x10a PushI
	var_120_int = 20660; // 0x10b PushI
	var_121_int = 29092; // 0x10c PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x10d TObjFunc
	return 0; // 0x10f Return
	
Label_272:
	var_122_int = 20660; // 0x110 PushI
	var_123_bool = var_51_bool == var_122_int; // 0x111 Eq
	if(var_123_bool == 0) goto Label_290; // 0x112 JumpB
	var_124_string = ""; // 0x113 PushV
	var_124_string = "Fear"; // 0x114 MovS
	func_144(var_52_cvector, var_124_string); // 0x115 NEW_2
	var_125_int = 519488; // 0x117 PushI
	SetMessage(var_125_int); // 0x118 TObjFunc
	ClearReplies(); // 0x11a TObjFunc
	var_126_int = 519489; // 0x11c PushI
	var_127_int = 20662; // 0x11d PushI
	var_128_int = 20661; // 0x11e PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x11f TObjFunc
	return 0; // 0x121 Return
	
Label_290:
	var_129_int = 20662; // 0x122 PushI
	var_130_bool = var_51_bool == var_129_int; // 0x123 Eq
	if(var_130_bool == 0) goto Label_313; // 0x124 JumpB
	var_131_string = ""; // 0x125 PushV
	var_131_string = "Strength"; // 0x126 MovS
	func_144(var_52_cvector, var_131_string); // 0x127 NEW_2
	var_132_int = 519490; // 0x129 PushI
	SetMessage(var_132_int); // 0x12a TObjFunc
	ClearReplies(); // 0x12c TObjFunc
	var_133_int = 527741; // 0x12e PushI
	var_134_int = 29096; // 0x12f PushI
	var_135_int = 29094; // 0x130 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x131 TObjFunc
	var_136_int = 527742; // 0x133 PushI
	var_137_int = 29096; // 0x134 PushI
	var_138_int = 29095; // 0x135 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x136 TObjFunc
	return 0; // 0x138 Return
	
Label_313:
	var_139_int = 29096; // 0x139 PushI
	var_140_bool = var_51_bool == var_139_int; // 0x13a Eq
	if(var_140_bool == 0) goto Label_331; // 0x13b JumpB
	var_141_string = ""; // 0x13c PushV
	var_141_string = "Neutral"; // 0x13d MovS
	func_144(var_52_cvector, var_141_string); // 0x13e NEW_2
	var_142_int = 527743; // 0x140 PushI
	SetMessage(var_142_int); // 0x141 TObjFunc
	ClearReplies(); // 0x143 TObjFunc
	var_143_int = 527744; // 0x145 PushI
	var_144_int = 29098; // 0x146 PushI
	var_145_int = 29097; // 0x147 PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x148 TObjFunc
	return 0; // 0x14a Return
	
Label_331:
	var_146_int = 29098; // 0x14b PushI
	var_147_bool = var_51_bool == var_146_int; // 0x14c Eq
	if(var_147_bool == 0) goto Label_349; // 0x14d JumpB
	var_148_string = ""; // 0x14e PushV
	var_148_string = "Neutral"; // 0x14f MovS
	func_144(var_52_cvector, var_148_string); // 0x150 NEW_2
	var_149_int = 527745; // 0x152 PushI
	SetMessage(var_149_int); // 0x153 TObjFunc
	ClearReplies(); // 0x155 TObjFunc
	var_150_int = 519491; // 0x157 PushI
	var_151_int = 20665; // 0x158 PushI
	var_152_int = 20664; // 0x159 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x15a TObjFunc
	return 0; // 0x15c Return
	
Label_349:
	var_153_int = 20665; // 0x15d PushI
	var_154_bool = var_51_bool == var_153_int; // 0x15e Eq
	if(var_154_bool == 0) goto Label_367; // 0x15f JumpB
	var_155_string = ""; // 0x160 PushV
	var_155_string = "Neutral"; // 0x161 MovS
	func_144(var_52_cvector, var_155_string); // 0x162 NEW_2
	var_156_int = 519492; // 0x164 PushI
	SetMessage(var_156_int); // 0x165 TObjFunc
	ClearReplies(); // 0x167 TObjFunc
	var_157_int = 519493; // 0x169 PushI
	var_158_int = -1; // 0x16a PushI
	var_159_int = 20666; // 0x16b PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x16c TObjFunc
	return 0; // 0x16e Return
	
Label_367:
	var_3_string = 1; // 0x16f TMovB
	var_160_bool = 0; // 0x170 PushV
	func_6274(var_160_bool); // 0x171 NEW_2
	if(var_160_bool == 0) goto Label_375; // 0x173 JumpB
	lshStopAnimation(); // 0x174 Func
	goto Label_377; // 0x176 Jump
	
Label_377:
	return 0; // 0x179 Return
	
Label_375:
	StopAnimation(); // 0x177 Func
	
Label_379:
	return 0; // 0x17b Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	var_53_int = 1; // 0x263 PushI
	if(var_53_int == 0) goto Label_1029; // 0x264 JumpB
	func_6100(); // 0x266 NEW_2
	var_55_int = 19479; // 0x268 PushI
	var_56_bool = var_52_cvector == var_55_int; // 0x269 Eq
	if(var_56_bool == 0) goto Label_624; // 0x26a JumpB
	var_57_object = Obj(); var_58_object = Obj(); // 0x26b PushV
	var_57_object = var_1_object; // 0x26c MovT
	var_58_object = var_0_object; // 0x26d MovT
	func_6743(); // 0x26e NEW_2
	
Label_624:
	var_61_int = 19482; // 0x270 PushI
	var_62_bool = var_52_cvector == var_61_int; // 0x271 Eq
	if(var_62_bool == 0) goto Label_637; // 0x272 JumpB
	var_63_object = Obj(); var_64_object = Obj(); // 0x273 PushV
	var_63_object = var_1_object; // 0x274 MovT
	var_64_object = var_0_object; // 0x275 MovT
	func_6712(); // 0x276 NEW_2
	var_126_object = Obj(); var_127_object = Obj(); // 0x278 PushV
	var_126_object = var_1_object; // 0x279 MovT
	var_127_object = var_0_object; // 0x27a MovT
	func_6276(); // 0x27b NEW_2
	
Label_637:
	var_152_int = 19486; // 0x27d PushI
	var_153_bool = var_52_cvector == var_152_int; // 0x27e Eq
	if(var_153_bool == 0) goto Label_650; // 0x27f JumpB
	var_154_object = Obj(); var_155_object = Obj(); // 0x280 PushV
	var_154_object = var_1_object; // 0x281 MovT
	var_155_object = var_0_object; // 0x282 MovT
	func_6712(); // 0x283 NEW_2
	var_156_object = Obj(); var_157_object = Obj(); // 0x285 PushV
	var_156_object = var_1_object; // 0x286 MovT
	var_157_object = var_0_object; // 0x287 MovT
	func_6276(); // 0x288 NEW_2
	
Label_650:
	var_158_int = 19489; // 0x28a PushI
	var_159_bool = var_52_cvector == var_158_int; // 0x28b Eq
	if(var_159_bool == 0) goto Label_668; // 0x28c JumpB
	var_160_object = Obj(); var_161_object = Obj(); // 0x28d PushV
	var_160_object = var_1_object; // 0x28e MovT
	var_161_object = var_0_object; // 0x28f MovT
	func_6749(); // 0x290 NEW_2
	var_173_object = Obj(); var_174_object = Obj(); // 0x292 PushV
	var_173_object = var_1_object; // 0x293 MovT
	var_174_object = var_0_object; // 0x294 MovT
	func_6688(var_174_object); // 0x295 NEW_2
	var_194_object = Obj(); var_195_object = Obj(); // 0x297 PushV
	var_194_object = var_1_object; // 0x298 MovT
	var_195_object = var_0_object; // 0x299 MovT
	func_6460(); // 0x29a NEW_2
	
Label_668:
	var_198_int = 20330; // 0x29c PushI
	var_199_bool = var_52_cvector == var_198_int; // 0x29d Eq
	if(var_199_bool == 0) goto Label_676; // 0x29e JumpB
	var_200_object = Obj(); var_201_object = Obj(); // 0x29f PushV
	var_200_object = var_1_object; // 0x2a0 MovT
	var_201_object = var_0_object; // 0x2a1 MovT
	func_6749(); // 0x2a2 NEW_2
	
Label_676:
	var_202_int = 19492; // 0x2a4 PushI
	var_203_bool = var_52_cvector == var_202_int; // 0x2a5 Eq
	if(var_203_bool == 0) goto Label_694; // 0x2a6 JumpB
	var_204_object = Obj(); var_205_object = Obj(); // 0x2a7 PushV
	var_204_object = var_1_object; // 0x2a8 MovT
	var_205_object = var_0_object; // 0x2a9 MovT
	func_6749(); // 0x2aa NEW_2
	var_206_object = Obj(); var_207_object = Obj(); // 0x2ac PushV
	var_206_object = var_1_object; // 0x2ad MovT
	var_207_object = var_0_object; // 0x2ae MovT
	func_6393(var_207_object); // 0x2af NEW_2
	var_211_object = Obj(); var_212_object = Obj(); // 0x2b1 PushV
	var_211_object = var_1_object; // 0x2b2 MovT
	var_212_object = var_0_object; // 0x2b3 MovT
	func_6460(); // 0x2b4 NEW_2
	
Label_694:
	var_213_int = 20325; // 0x2b6 PushI
	var_214_bool = var_52_cvector == var_213_int; // 0x2b7 Eq
	if(var_214_bool == 0) goto Label_702; // 0x2b8 JumpB
	var_215_object = Obj(); var_216_object = Obj(); // 0x2b9 PushV
	var_215_object = var_1_object; // 0x2ba MovT
	var_216_object = var_0_object; // 0x2bb MovT
	func_6749(); // 0x2bc NEW_2
	
Label_702:
	var_217_int = 19478; // 0x2be PushI
	var_218_bool = var_51_bool == var_217_int; // 0x2bf Eq
	if(var_218_bool == 0) goto Label_794; // 0x2c0 JumpB
	var_219_object = Obj(); var_220_object = Obj(); // 0x2c1 PushV
	var_219_object = var_1_object; // 0x2c2 MovT
	var_220_object = var_0_object; // 0x2c3 MovT
	func_6508(); // 0x2c4 NEW_2
	var_223_string = ""; // 0x2c6 PushV
	var_223_string = "Neutral"; // 0x2c7 MovS
	func_588(var_52_cvector, var_223_string); // 0x2c8 NEW_2
	var_240_int = 518365; // 0x2ca PushI
	SetMessage(var_240_int); // 0x2cb TObjFunc
	ClearReplies(); // 0x2cd TObjFunc
	var_241_bool = 0; var_242_object = Obj(); // 0x2cf PushV
	var_242_object = var_1_object; // 0x2d0 MovT
	func_7021(var_242_object); // 0x2d1 NEW_2
	if(var_241_bool == 0) goto Label_729; // 0x2d3 JumpB
	var_249_int = 518366; // 0x2d4 PushI
	var_250_int = 19481; // 0x2d5 PushI
	var_251_int = 19479; // 0x2d6 PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x2d7 TObjFunc
	
Label_729:
	var_252_bool = 0; // 0x2d9 PushV
	var_252_bool = 0; // 0x2da MovB
	var_253_bool = 0; var_254_object = Obj(); // 0x2db PushV
	var_254_object = var_1_object; // 0x2dc MovT
	func_7021(var_254_object); // 0x2dd NEW_2
	var_255_bool = var_253_bool == 0; // 0x2df Not
	if(var_255_bool == 0) goto Label_743; // 0x2e0 JumpB
	var_256_bool = 0; var_257_object = Obj(); // 0x2e1 PushV
	var_257_object = var_1_object; // 0x2e2 MovT
	func_7009(var_257_object); // 0x2e3 NEW_2
	if(var_256_bool == 0) goto Label_743; // 0x2e5 JumpB
	var_252_bool = 1; // 0x2e6 MovB
	
Label_743:
	if(var_252_bool == 0) goto Label_749; // 0x2e7 JumpB
	var_262_int = 518371; // 0x2e8 PushI
	var_263_int = 19485; // 0x2e9 PushI
	var_264_int = 19484; // 0x2ea PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0x2eb TObjFunc
	
Label_749:
	var_265_bool = 0; // 0x2ed PushV
	var_265_bool = 0; // 0x2ee MovB
	var_266_bool = 0; var_267_object = Obj(); // 0x2ef PushV
	var_267_object = var_1_object; // 0x2f0 MovT
	func_7033(var_267_object); // 0x2f1 NEW_2
	if(var_266_bool == 0) goto Label_762; // 0x2f3 JumpB
	var_272_bool = 0; var_273_object = Obj(); // 0x2f4 PushV
	var_273_object = var_1_object; // 0x2f5 MovT
	func_7045(var_273_object); // 0x2f6 NEW_2
	if(var_272_bool == 0) goto Label_762; // 0x2f8 JumpB
	var_265_bool = 1; // 0x2f9 MovB
	
Label_762:
	if(var_265_bool == 0) goto Label_768; // 0x2fa JumpB
	var_278_int = 518374; // 0x2fb PushI
	var_279_int = 19488; // 0x2fc PushI
	var_280_int = 19487; // 0x2fd PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x2fe TObjFunc
	
Label_768:
	var_281_bool = 0; // 0x300 PushV
	var_281_bool = 0; // 0x301 MovB
	var_282_bool = 0; var_283_object = Obj(); // 0x302 PushV
	var_283_object = var_1_object; // 0x303 MovT
	func_7033(var_283_object); // 0x304 NEW_2
	if(var_282_bool == 0) goto Label_782; // 0x306 JumpB
	var_284_bool = 0; var_285_object = Obj(); // 0x307 PushV
	var_285_object = var_1_object; // 0x308 MovT
	func_7045(var_285_object); // 0x309 NEW_2
	var_286_bool = var_284_bool == 0; // 0x30b Not
	if(var_286_bool == 0) goto Label_782; // 0x30c JumpB
	var_281_bool = 1; // 0x30d MovB
	
Label_782:
	if(var_281_bool == 0) goto Label_788; // 0x30e JumpB
	var_287_int = 518377; // 0x30f PushI
	var_288_int = 19491; // 0x310 PushI
	var_289_int = 19490; // 0x311 PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0x312 TObjFunc
	
Label_788:
	var_290_int = 518367; // 0x314 PushI
	var_291_int = -1; // 0x315 PushI
	var_292_int = 19480; // 0x316 PushI
	AddReply(var_290_int, var_291_int, var_292_int); // 0x317 TObjFunc
	return 0; // 0x319 Return
	
Label_794:
	var_293_int = 19491; // 0x31a PushI
	var_294_bool = var_51_bool == var_293_int; // 0x31b Eq
	if(var_294_bool == 0) goto Label_812; // 0x31c JumpB
	var_295_string = ""; // 0x31d PushV
	var_295_string = "Impatience"; // 0x31e MovS
	func_588(var_52_cvector, var_295_string); // 0x31f NEW_2
	var_296_int = 518378; // 0x321 PushI
	SetMessage(var_296_int); // 0x322 TObjFunc
	ClearReplies(); // 0x324 TObjFunc
	var_297_int = 519177; // 0x326 PushI
	var_298_int = 20319; // 0x327 PushI
	var_299_int = 20318; // 0x328 PushI
	AddReply(var_297_int, var_298_int, var_299_int); // 0x329 TObjFunc
	return 0; // 0x32b Return
	
Label_812:
	var_300_int = 20319; // 0x32c PushI
	var_301_bool = var_51_bool == var_300_int; // 0x32d Eq
	if(var_301_bool == 0) goto Label_830; // 0x32e JumpB
	var_302_string = ""; // 0x32f PushV
	var_302_string = "Impatience"; // 0x330 MovS
	func_588(var_52_cvector, var_302_string); // 0x331 NEW_2
	var_303_int = 519178; // 0x333 PushI
	SetMessage(var_303_int); // 0x334 TObjFunc
	ClearReplies(); // 0x336 TObjFunc
	var_304_int = 519179; // 0x338 PushI
	var_305_int = 20321; // 0x339 PushI
	var_306_int = 20320; // 0x33a PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0x33b TObjFunc
	return 0; // 0x33d Return
	
Label_830:
	var_307_int = 20321; // 0x33e PushI
	var_308_bool = var_51_bool == var_307_int; // 0x33f Eq
	if(var_308_bool == 0) goto Label_848; // 0x340 JumpB
	var_309_string = ""; // 0x341 PushV
	var_309_string = "Strength"; // 0x342 MovS
	func_588(var_52_cvector, var_309_string); // 0x343 NEW_2
	var_310_int = 519180; // 0x345 PushI
	SetMessage(var_310_int); // 0x346 TObjFunc
	ClearReplies(); // 0x348 TObjFunc
	var_311_int = 519181; // 0x34a PushI
	var_312_int = 20323; // 0x34b PushI
	var_313_int = 20322; // 0x34c PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0x34d TObjFunc
	return 0; // 0x34f Return
	
Label_848:
	var_314_int = 20323; // 0x350 PushI
	var_315_bool = var_51_bool == var_314_int; // 0x351 Eq
	if(var_315_bool == 0) goto Label_871; // 0x352 JumpB
	var_316_string = ""; // 0x353 PushV
	var_316_string = "Neutral"; // 0x354 MovS
	func_588(var_52_cvector, var_316_string); // 0x355 NEW_2
	var_317_int = 519182; // 0x357 PushI
	SetMessage(var_317_int); // 0x358 TObjFunc
	ClearReplies(); // 0x35a TObjFunc
	var_318_int = 518379; // 0x35c PushI
	var_319_int = -1; // 0x35d PushI
	var_320_int = 19492; // 0x35e PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0x35f TObjFunc
	var_321_int = 519184; // 0x361 PushI
	var_322_int = -1; // 0x362 PushI
	var_323_int = 20325; // 0x363 PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0x364 TObjFunc
	return 0; // 0x366 Return
	
Label_871:
	var_324_int = 19488; // 0x367 PushI
	var_325_bool = var_51_bool == var_324_int; // 0x368 Eq
	if(var_325_bool == 0) goto Label_889; // 0x369 JumpB
	var_326_string = ""; // 0x36a PushV
	var_326_string = "Impatience"; // 0x36b MovS
	func_588(var_52_cvector, var_326_string); // 0x36c NEW_2
	var_327_int = 518375; // 0x36e PushI
	SetMessage(var_327_int); // 0x36f TObjFunc
	ClearReplies(); // 0x371 TObjFunc
	var_328_int = 519185; // 0x373 PushI
	var_329_int = 20327; // 0x374 PushI
	var_330_int = 20326; // 0x375 PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0x376 TObjFunc
	return 0; // 0x378 Return
	
Label_889:
	var_331_int = 20327; // 0x379 PushI
	var_332_bool = var_51_bool == var_331_int; // 0x37a Eq
	if(var_332_bool == 0) goto Label_907; // 0x37b JumpB
	var_333_string = ""; // 0x37c PushV
	var_333_string = "Neutral"; // 0x37d MovS
	func_588(var_52_cvector, var_333_string); // 0x37e NEW_2
	var_334_int = 519186; // 0x380 PushI
	SetMessage(var_334_int); // 0x381 TObjFunc
	ClearReplies(); // 0x383 TObjFunc
	var_335_int = 519187; // 0x385 PushI
	var_336_int = 20329; // 0x386 PushI
	var_337_int = 20328; // 0x387 PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0x388 TObjFunc
	return 0; // 0x38a Return
	
Label_907:
	var_338_int = 20329; // 0x38b PushI
	var_339_bool = var_51_bool == var_338_int; // 0x38c Eq
	if(var_339_bool == 0) goto Label_930; // 0x38d JumpB
	var_340_string = ""; // 0x38e PushV
	var_340_string = "Neutral"; // 0x38f MovS
	func_588(var_52_cvector, var_340_string); // 0x390 NEW_2
	var_341_int = 519188; // 0x392 PushI
	SetMessage(var_341_int); // 0x393 TObjFunc
	ClearReplies(); // 0x395 TObjFunc
	var_342_int = 518376; // 0x397 PushI
	var_343_int = -1; // 0x398 PushI
	var_344_int = 19489; // 0x399 PushI
	AddReply(var_342_int, var_343_int, var_344_int); // 0x39a TObjFunc
	var_345_int = 519189; // 0x39c PushI
	var_346_int = -1; // 0x39d PushI
	var_347_int = 20330; // 0x39e PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0x39f TObjFunc
	return 0; // 0x3a1 Return
	
Label_930:
	var_348_int = 19485; // 0x3a2 PushI
	var_349_bool = var_51_bool == var_348_int; // 0x3a3 Eq
	if(var_349_bool == 0) goto Label_948; // 0x3a4 JumpB
	var_350_string = ""; // 0x3a5 PushV
	var_350_string = "Impatience"; // 0x3a6 MovS
	func_588(var_52_cvector, var_350_string); // 0x3a7 NEW_2
	var_351_int = 518372; // 0x3a9 PushI
	SetMessage(var_351_int); // 0x3aa TObjFunc
	ClearReplies(); // 0x3ac TObjFunc
	var_352_int = 518373; // 0x3ae PushI
	var_353_int = -1; // 0x3af PushI
	var_354_int = 19486; // 0x3b0 PushI
	AddReply(var_352_int, var_353_int, var_354_int); // 0x3b1 TObjFunc
	return 0; // 0x3b3 Return
	
Label_948:
	var_355_int = 19481; // 0x3b4 PushI
	var_356_bool = var_51_bool == var_355_int; // 0x3b5 Eq
	if(var_356_bool == 0) goto Label_971; // 0x3b6 JumpB
	var_357_string = ""; // 0x3b7 PushV
	var_357_string = "Fear"; // 0x3b8 MovS
	func_588(var_52_cvector, var_357_string); // 0x3b9 NEW_2
	var_358_int = 518368; // 0x3bb PushI
	SetMessage(var_358_int); // 0x3bc TObjFunc
	ClearReplies(); // 0x3be TObjFunc
	var_359_int = 519191; // 0x3c0 PushI
	var_360_int = 20333; // 0x3c1 PushI
	var_361_int = 20332; // 0x3c2 PushI
	AddReply(var_359_int, var_360_int, var_361_int); // 0x3c3 TObjFunc
	var_362_int = 519193; // 0x3c5 PushI
	var_363_int = 20335; // 0x3c6 PushI
	var_364_int = 20334; // 0x3c7 PushI
	AddReply(var_362_int, var_363_int, var_364_int); // 0x3c8 TObjFunc
	return 0; // 0x3ca Return
	
Label_971:
	var_365_int = 20335; // 0x3cb PushI
	var_366_bool = var_51_bool == var_365_int; // 0x3cc Eq
	if(var_366_bool == 0) goto Label_994; // 0x3cd JumpB
	var_367_string = ""; // 0x3ce PushV
	var_367_string = "Fear"; // 0x3cf MovS
	func_588(var_52_cvector, var_367_string); // 0x3d0 NEW_2
	var_368_int = 519194; // 0x3d2 PushI
	SetMessage(var_368_int); // 0x3d3 TObjFunc
	ClearReplies(); // 0x3d5 TObjFunc
	var_369_int = 519195; // 0x3d7 PushI
	var_370_int = 20333; // 0x3d8 PushI
	var_371_int = 20336; // 0x3d9 PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0x3da TObjFunc
	var_372_int = 519196; // 0x3dc PushI
	var_373_int = -1; // 0x3dd PushI
	var_374_int = 20338; // 0x3de PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0x3df TObjFunc
	return 0; // 0x3e1 Return
	
Label_994:
	var_375_int = 20333; // 0x3e2 PushI
	var_376_bool = var_51_bool == var_375_int; // 0x3e3 Eq
	if(var_376_bool == 0) goto Label_1017; // 0x3e4 JumpB
	var_377_string = ""; // 0x3e5 PushV
	var_377_string = "Fear"; // 0x3e6 MovS
	func_588(var_52_cvector, var_377_string); // 0x3e7 NEW_2
	var_378_int = 519192; // 0x3e9 PushI
	SetMessage(var_378_int); // 0x3ea TObjFunc
	ClearReplies(); // 0x3ec TObjFunc
	var_379_int = 518369; // 0x3ee PushI
	var_380_int = -1; // 0x3ef PushI
	var_381_int = 19482; // 0x3f0 PushI
	AddReply(var_379_int, var_380_int, var_381_int); // 0x3f1 TObjFunc
	var_382_int = 518370; // 0x3f3 PushI
	var_383_int = -1; // 0x3f4 PushI
	var_384_int = 19483; // 0x3f5 PushI
	AddReply(var_382_int, var_383_int, var_384_int); // 0x3f6 TObjFunc
	return 0; // 0x3f8 Return
	
Label_1017:
	var_3_string = 1; // 0x3f9 TMovB
	var_385_bool = 0; // 0x3fa PushV
	func_6274(var_385_bool); // 0x3fb NEW_2
	if(var_385_bool == 0) goto Label_1025; // 0x3fd JumpB
	lshStopAnimation(); // 0x3fe Func
	goto Label_1027; // 0x400 Jump
	
Label_1027:
	return 0; // 0x403 Return
	
Label_1025:
	StopAnimation(); // 0x401 Func
	
Label_1029:
	return 0; // 0x405 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	var_53_int = 1; // 0x4f8 PushI
	if(var_53_int == 0) goto Label_2114; // 0x4f9 JumpB
	func_6100(); // 0x4fb NEW_2
	var_55_int = 21023; // 0x4fd PushI
	var_56_bool = var_52_cvector == var_55_int; // 0x4fe Eq
	if(var_56_bool == 0) goto Label_1295; // 0x4ff JumpB
	var_57_object = Obj(); var_58_object = Obj(); // 0x500 PushV
	var_57_object = var_1_object; // 0x501 MovT
	var_58_object = var_0_object; // 0x502 MovT
	func_6698(); // 0x503 NEW_2
	var_95_object = Obj(); var_96_object = Obj(); // 0x505 PushV
	var_95_object = var_1_object; // 0x506 MovT
	var_96_object = var_0_object; // 0x507 MovT
	func_6707(); // 0x508 NEW_2
	var_98_object = Obj(); var_99_object = Obj(); // 0x50a PushV
	var_98_object = var_1_object; // 0x50b MovT
	var_99_object = var_0_object; // 0x50c MovT
	func_6387(); // 0x50d NEW_2
	
Label_1295:
	var_102_int = 21026; // 0x50f PushI
	var_103_bool = var_52_cvector == var_102_int; // 0x510 Eq
	if(var_103_bool == 0) goto Label_1313; // 0x511 JumpB
	var_104_object = Obj(); var_105_object = Obj(); // 0x512 PushV
	var_104_object = var_1_object; // 0x513 MovT
	var_105_object = var_0_object; // 0x514 MovT
	func_6698(); // 0x515 NEW_2
	var_106_object = Obj(); var_107_object = Obj(); // 0x517 PushV
	var_106_object = var_1_object; // 0x518 MovT
	var_107_object = var_0_object; // 0x519 MovT
	func_6707(); // 0x51a NEW_2
	var_108_object = Obj(); var_109_object = Obj(); // 0x51c PushV
	var_108_object = var_1_object; // 0x51d MovT
	var_109_object = var_0_object; // 0x51e MovT
	func_6387(); // 0x51f NEW_2
	
Label_1313:
	var_110_int = 21029; // 0x521 PushI
	var_111_bool = var_52_cvector == var_110_int; // 0x522 Eq
	if(var_111_bool == 0) goto Label_1331; // 0x523 JumpB
	var_112_object = Obj(); var_113_object = Obj(); // 0x524 PushV
	var_112_object = var_1_object; // 0x525 MovT
	var_113_object = var_0_object; // 0x526 MovT
	func_6698(); // 0x527 NEW_2
	var_114_object = Obj(); var_115_object = Obj(); // 0x529 PushV
	var_114_object = var_1_object; // 0x52a MovT
	var_115_object = var_0_object; // 0x52b MovT
	func_6707(); // 0x52c NEW_2
	var_116_object = Obj(); var_117_object = Obj(); // 0x52e PushV
	var_116_object = var_1_object; // 0x52f MovT
	var_117_object = var_0_object; // 0x530 MovT
	func_6387(); // 0x531 NEW_2
	
Label_1331:
	var_118_int = 21032; // 0x533 PushI
	var_119_bool = var_52_cvector == var_118_int; // 0x534 Eq
	if(var_119_bool == 0) goto Label_1349; // 0x535 JumpB
	var_120_object = Obj(); var_121_object = Obj(); // 0x536 PushV
	var_120_object = var_1_object; // 0x537 MovT
	var_121_object = var_0_object; // 0x538 MovT
	func_6698(); // 0x539 NEW_2
	var_122_object = Obj(); var_123_object = Obj(); // 0x53b PushV
	var_122_object = var_1_object; // 0x53c MovT
	var_123_object = var_0_object; // 0x53d MovT
	func_6707(); // 0x53e NEW_2
	var_124_object = Obj(); var_125_object = Obj(); // 0x540 PushV
	var_124_object = var_1_object; // 0x541 MovT
	var_125_object = var_0_object; // 0x542 MovT
	func_6387(); // 0x543 NEW_2
	
Label_1349:
	var_126_int = 20978; // 0x545 PushI
	var_127_bool = var_52_cvector == var_126_int; // 0x546 Eq
	if(var_127_bool == 0) goto Label_1357; // 0x547 JumpB
	var_128_object = Obj(); var_129_object = Obj(); // 0x548 PushV
	var_128_object = var_1_object; // 0x549 MovT
	var_129_object = var_0_object; // 0x54a MovT
	func_6298(); // 0x54b NEW_2
	
Label_1357:
	var_132_int = 20990; // 0x54d PushI
	var_133_bool = var_52_cvector == var_132_int; // 0x54e Eq
	if(var_133_bool == 0) goto Label_1370; // 0x54f JumpB
	var_134_object = Obj(); var_135_object = Obj(); // 0x550 PushV
	var_134_object = var_1_object; // 0x551 MovT
	var_135_object = var_0_object; // 0x552 MovT
	func_6304(); // 0x553 NEW_2
	var_138_object = Obj(); var_139_object = Obj(); // 0x555 PushV
	var_138_object = var_1_object; // 0x556 MovT
	var_139_object = var_0_object; // 0x557 MovT
	func_6310(); // 0x558 NEW_2
	
Label_1370:
	var_161_int = 21002; // 0x55a PushI
	var_162_bool = var_52_cvector == var_161_int; // 0x55b Eq
	if(var_162_bool == 0) goto Label_1383; // 0x55c JumpB
	var_163_object = Obj(); var_164_object = Obj(); // 0x55d PushV
	var_163_object = var_1_object; // 0x55e MovT
	var_164_object = var_0_object; // 0x55f MovT
	func_6666(); // 0x560 NEW_2
	var_167_object = Obj(); var_168_object = Obj(); // 0x562 PushV
	var_167_object = var_1_object; // 0x563 MovT
	var_168_object = var_0_object; // 0x564 MovT
	func_6643(); // 0x565 NEW_2
	
Label_1383:
	var_198_int = 21003; // 0x567 PushI
	var_199_bool = var_52_cvector == var_198_int; // 0x568 Eq
	if(var_199_bool == 0) goto Label_1396; // 0x569 JumpB
	var_200_object = Obj(); var_201_object = Obj(); // 0x56a PushV
	var_200_object = var_1_object; // 0x56b MovT
	var_201_object = var_0_object; // 0x56c MovT
	func_6666(); // 0x56d NEW_2
	var_202_object = Obj(); var_203_object = Obj(); // 0x56f PushV
	var_202_object = var_1_object; // 0x570 MovT
	var_203_object = var_0_object; // 0x571 MovT
	func_6643(); // 0x572 NEW_2
	
Label_1396:
	var_204_int = 21004; // 0x574 PushI
	var_205_bool = var_52_cvector == var_204_int; // 0x575 Eq
	if(var_205_bool == 0) goto Label_1409; // 0x576 JumpB
	var_206_object = Obj(); var_207_object = Obj(); // 0x577 PushV
	var_206_object = var_1_object; // 0x578 MovT
	var_207_object = var_0_object; // 0x579 MovT
	func_6666(); // 0x57a NEW_2
	var_208_object = Obj(); var_209_object = Obj(); // 0x57c PushV
	var_208_object = var_1_object; // 0x57d MovT
	var_209_object = var_0_object; // 0x57e MovT
	func_6643(); // 0x57f NEW_2
	
Label_1409:
	var_210_int = 21662; // 0x581 PushI
	var_211_bool = var_52_cvector == var_210_int; // 0x582 Eq
	if(var_211_bool == 0) goto Label_1417; // 0x583 JumpB
	var_212_object = Obj(); var_213_object = Obj(); // 0x584 PushV
	var_212_object = var_1_object; // 0x585 MovT
	var_213_object = var_0_object; // 0x586 MovT
	func_6335(); // 0x587 NEW_2
	
Label_1417:
	var_216_int = 21668; // 0x589 PushI
	var_217_bool = var_52_cvector == var_216_int; // 0x58a Eq
	if(var_217_bool == 0) goto Label_1430; // 0x58b JumpB
	var_218_object = Obj(); var_219_object = Obj(); // 0x58c PushV
	var_218_object = var_1_object; // 0x58d MovT
	var_219_object = var_0_object; // 0x58e MovT
	func_6514(); // 0x58f NEW_2
	var_234_object = Obj(); var_235_object = Obj(); // 0x591 PushV
	var_234_object = var_1_object; // 0x592 MovT
	var_235_object = var_0_object; // 0x593 MovT
	func_6541(); // 0x594 NEW_2
	
Label_1430:
	var_260_int = 21672; // 0x596 PushI
	var_261_bool = var_52_cvector == var_260_int; // 0x597 Eq
	if(var_261_bool == 0) goto Label_1443; // 0x598 JumpB
	var_262_object = Obj(); var_263_object = Obj(); // 0x599 PushV
	var_262_object = var_1_object; // 0x59a MovT
	var_263_object = var_0_object; // 0x59b MovT
	func_6514(); // 0x59c NEW_2
	var_264_object = Obj(); var_265_object = Obj(); // 0x59e PushV
	var_264_object = var_1_object; // 0x59f MovT
	var_265_object = var_0_object; // 0x5a0 MovT
	func_6541(); // 0x5a1 NEW_2
	
Label_1443:
	var_266_int = 20972; // 0x5a3 PushI
	var_267_bool = var_51_bool == var_266_int; // 0x5a4 Eq
	if(var_267_bool == 0) goto Label_1546; // 0x5a5 JumpB
	var_268_bool = 0; var_269_object = Obj(); // 0x5a6 PushV
	var_269_object = var_1_object; // 0x5a7 MovT
	func_7057(var_269_object); // 0x5a8 NEW_2
	if(var_268_bool == 0) goto Label_1476; // 0x5aa JumpB
	var_274_string = ""; // 0x5ab PushV
	var_274_string = "Sympathy"; // 0x5ac MovS
	func_1249(var_52_cvector, var_274_string); // 0x5ad NEW_2
	var_291_int = 519812; // 0x5af PushI
	SetMessage(var_291_int); // 0x5b0 TObjFunc
	ClearReplies(); // 0x5b2 TObjFunc
	var_292_int = 519813; // 0x5b4 PushI
	var_293_int = 20974; // 0x5b5 PushI
	var_294_int = 20973; // 0x5b6 PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0x5b7 TObjFunc
	var_295_int = 527076; // 0x5b9 PushI
	var_296_int = 28374; // 0x5ba PushI
	var_297_int = 28373; // 0x5bb PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x5bc TObjFunc
	var_298_int = 519816; // 0x5be PushI
	var_299_int = -1; // 0x5bf PushI
	var_300_int = 20976; // 0x5c0 PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0x5c1 TObjFunc
	return 0; // 0x5c3 Return
	
Label_1476:
	var_301_bool = 0; var_302_object = Obj(); // 0x5c4 PushV
	var_302_object = var_1_object; // 0x5c5 MovT
	func_7069(var_302_object); // 0x5c6 NEW_2
	if(var_301_bool == 0) goto Label_1501; // 0x5c8 JumpB
	var_307_object = Obj(); var_308_object = Obj(); // 0x5c9 PushV
	var_307_object = var_1_object; // 0x5ca MovT
	var_308_object = var_0_object; // 0x5cb MovT
	func_6292(); // 0x5cc NEW_2
	var_311_string = ""; // 0x5ce PushV
	var_311_string = "Neutral"; // 0x5cf MovS
	func_1249(var_52_cvector, var_311_string); // 0x5d0 NEW_2
	var_312_int = 519851; // 0x5d2 PushI
	SetMessage(var_312_int); // 0x5d3 TObjFunc
	ClearReplies(); // 0x5d5 TObjFunc
	var_313_int = 527084; // 0x5d7 PushI
	var_314_int = 28383; // 0x5d8 PushI
	var_315_int = 28382; // 0x5d9 PushI
	AddReply(var_313_int, var_314_int, var_315_int); // 0x5da TObjFunc
	return 0; // 0x5dc Return
	
Label_1501:
	var_316_string = ""; // 0x5dd PushV
	var_316_string = "Neutral"; // 0x5de MovS
	func_1249(var_52_cvector, var_316_string); // 0x5df NEW_2
	var_317_int = 519817; // 0x5e1 PushI
	SetMessage(var_317_int); // 0x5e2 TObjFunc
	ClearReplies(); // 0x5e4 TObjFunc
	var_318_bool = 0; var_319_object = Obj(); // 0x5e6 PushV
	var_319_object = var_1_object; // 0x5e7 MovT
	func_7081(var_319_object); // 0x5e8 NEW_2
	if(var_318_bool == 0) goto Label_1520; // 0x5ea JumpB
	var_324_int = 519818; // 0x5eb PushI
	var_325_int = 20979; // 0x5ec PushI
	var_326_int = 20978; // 0x5ed PushI
	AddReply(var_324_int, var_325_int, var_326_int); // 0x5ee TObjFunc
	
Label_1520:
	var_327_bool = 0; var_328_object = Obj(); // 0x5f0 PushV
	var_328_object = var_1_object; // 0x5f1 MovT
	func_7093(var_328_object); // 0x5f2 NEW_2
	if(var_327_bool == 0) goto Label_1530; // 0x5f4 JumpB
	var_333_int = 519830; // 0x5f5 PushI
	var_334_int = 20991; // 0x5f6 PushI
	var_335_int = 20990; // 0x5f7 PushI
	AddReply(var_333_int, var_334_int, var_335_int); // 0x5f8 TObjFunc
	
Label_1530:
	var_336_bool = 0; var_337_object = Obj(); // 0x5fa PushV
	var_337_object = var_1_object; // 0x5fb MovT
	func_7105(var_337_object); // 0x5fc NEW_2
	if(var_336_bool == 0) goto Label_1540; // 0x5fe JumpB
	var_342_int = 520449; // 0x5ff PushI
	var_343_int = 21663; // 0x600 PushI
	var_344_int = 21662; // 0x601 PushI
	AddReply(var_342_int, var_343_int, var_344_int); // 0x602 TObjFunc
	
Label_1540:
	var_345_int = 519850; // 0x604 PushI
	var_346_int = -1; // 0x605 PushI
	var_347_int = 21011; // 0x606 PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0x607 TObjFunc
	return 0; // 0x609 Return
	
Label_1546:
	var_348_int = 21663; // 0x60a PushI
	var_349_bool = var_51_bool == var_348_int; // 0x60b Eq
	if(var_349_bool == 0) goto Label_1564; // 0x60c JumpB
	var_350_string = ""; // 0x60d PushV
	var_350_string = "Strength"; // 0x60e MovS
	func_1249(var_52_cvector, var_350_string); // 0x60f NEW_2
	var_351_int = 520450; // 0x611 PushI
	SetMessage(var_351_int); // 0x612 TObjFunc
	ClearReplies(); // 0x614 TObjFunc
	var_352_int = 520451; // 0x616 PushI
	var_353_int = 21665; // 0x617 PushI
	var_354_int = 21664; // 0x618 PushI
	AddReply(var_352_int, var_353_int, var_354_int); // 0x619 TObjFunc
	return 0; // 0x61b Return
	
Label_1564:
	var_355_int = 21665; // 0x61c PushI
	var_356_bool = var_51_bool == var_355_int; // 0x61d Eq
	if(var_356_bool == 0) goto Label_1587; // 0x61e JumpB
	var_357_string = ""; // 0x61f PushV
	var_357_string = "Neutral"; // 0x620 MovS
	func_1249(var_52_cvector, var_357_string); // 0x621 NEW_2
	var_358_int = 520452; // 0x623 PushI
	SetMessage(var_358_int); // 0x624 TObjFunc
	ClearReplies(); // 0x626 TObjFunc
	var_359_int = 520453; // 0x628 PushI
	var_360_int = 21667; // 0x629 PushI
	var_361_int = 21666; // 0x62a PushI
	AddReply(var_359_int, var_360_int, var_361_int); // 0x62b TObjFunc
	var_362_int = 520458; // 0x62d PushI
	var_363_int = -1; // 0x62e PushI
	var_364_int = 21672; // 0x62f PushI
	AddReply(var_362_int, var_363_int, var_364_int); // 0x630 TObjFunc
	return 0; // 0x632 Return
	
Label_1587:
	var_365_int = 21667; // 0x633 PushI
	var_366_bool = var_51_bool == var_365_int; // 0x634 Eq
	if(var_366_bool == 0) goto Label_1605; // 0x635 JumpB
	var_367_string = ""; // 0x636 PushV
	var_367_string = "Fear"; // 0x637 MovS
	func_1249(var_52_cvector, var_367_string); // 0x638 NEW_2
	var_368_int = 520454; // 0x63a PushI
	SetMessage(var_368_int); // 0x63b TObjFunc
	ClearReplies(); // 0x63d TObjFunc
	var_369_int = 520455; // 0x63f PushI
	var_370_int = -1; // 0x640 PushI
	var_371_int = 21668; // 0x641 PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0x642 TObjFunc
	return 0; // 0x644 Return
	
Label_1605:
	var_372_int = 20991; // 0x645 PushI
	var_373_bool = var_51_bool == var_372_int; // 0x646 Eq
	if(var_373_bool == 0) goto Label_1628; // 0x647 JumpB
	var_374_string = ""; // 0x648 PushV
	var_374_string = "Neutral"; // 0x649 MovS
	func_1249(var_52_cvector, var_374_string); // 0x64a NEW_2
	var_375_int = 519831; // 0x64c PushI
	SetMessage(var_375_int); // 0x64d TObjFunc
	ClearReplies(); // 0x64f TObjFunc
	var_376_int = 519832; // 0x651 PushI
	var_377_int = 20993; // 0x652 PushI
	var_378_int = 20992; // 0x653 PushI
	AddReply(var_376_int, var_377_int, var_378_int); // 0x654 TObjFunc
	var_379_int = 519846; // 0x656 PushI
	var_380_int = 21007; // 0x657 PushI
	var_381_int = 21006; // 0x658 PushI
	AddReply(var_379_int, var_380_int, var_381_int); // 0x659 TObjFunc
	return 0; // 0x65b Return
	
Label_1628:
	var_382_int = 21007; // 0x65c PushI
	var_383_bool = var_51_bool == var_382_int; // 0x65d Eq
	if(var_383_bool == 0) goto Label_1651; // 0x65e JumpB
	var_384_string = ""; // 0x65f PushV
	var_384_string = "Neutral"; // 0x660 MovS
	func_1249(var_52_cvector, var_384_string); // 0x661 NEW_2
	var_385_int = 519847; // 0x663 PushI
	SetMessage(var_385_int); // 0x664 TObjFunc
	ClearReplies(); // 0x666 TObjFunc
	var_386_int = 519848; // 0x668 PushI
	var_387_int = 20999; // 0x669 PushI
	var_388_int = 21008; // 0x66a PushI
	AddReply(var_386_int, var_387_int, var_388_int); // 0x66b TObjFunc
	var_389_int = 519849; // 0x66d PushI
	var_390_int = 20999; // 0x66e PushI
	var_391_int = 21010; // 0x66f PushI
	AddReply(var_389_int, var_390_int, var_391_int); // 0x670 TObjFunc
	return 0; // 0x672 Return
	
Label_1651:
	var_392_int = 20993; // 0x673 PushI
	var_393_bool = var_51_bool == var_392_int; // 0x674 Eq
	if(var_393_bool == 0) goto Label_1669; // 0x675 JumpB
	var_394_string = ""; // 0x676 PushV
	var_394_string = "Sympathy"; // 0x677 MovS
	func_1249(var_52_cvector, var_394_string); // 0x678 NEW_2
	var_395_int = 519833; // 0x67a PushI
	SetMessage(var_395_int); // 0x67b TObjFunc
	ClearReplies(); // 0x67d TObjFunc
	var_396_int = 519834; // 0x67f PushI
	var_397_int = 20995; // 0x680 PushI
	var_398_int = 20994; // 0x681 PushI
	AddReply(var_396_int, var_397_int, var_398_int); // 0x682 TObjFunc
	return 0; // 0x684 Return
	
Label_1669:
	var_399_int = 20995; // 0x685 PushI
	var_400_bool = var_51_bool == var_399_int; // 0x686 Eq
	if(var_400_bool == 0) goto Label_1687; // 0x687 JumpB
	var_401_string = ""; // 0x688 PushV
	var_401_string = "Sympathy"; // 0x689 MovS
	func_1249(var_52_cvector, var_401_string); // 0x68a NEW_2
	var_402_int = 519835; // 0x68c PushI
	SetMessage(var_402_int); // 0x68d TObjFunc
	ClearReplies(); // 0x68f TObjFunc
	var_403_int = 519836; // 0x691 PushI
	var_404_int = 20997; // 0x692 PushI
	var_405_int = 20996; // 0x693 PushI
	AddReply(var_403_int, var_404_int, var_405_int); // 0x694 TObjFunc
	return 0; // 0x696 Return
	
Label_1687:
	var_406_int = 20997; // 0x697 PushI
	var_407_bool = var_51_bool == var_406_int; // 0x698 Eq
	if(var_407_bool == 0) goto Label_1710; // 0x699 JumpB
	var_408_string = ""; // 0x69a PushV
	var_408_string = "Neutral"; // 0x69b MovS
	func_1249(var_52_cvector, var_408_string); // 0x69c NEW_2
	var_409_int = 519837; // 0x69e PushI
	SetMessage(var_409_int); // 0x69f TObjFunc
	ClearReplies(); // 0x6a1 TObjFunc
	var_410_int = 519838; // 0x6a3 PushI
	var_411_int = 20999; // 0x6a4 PushI
	var_412_int = 20998; // 0x6a5 PushI
	AddReply(var_410_int, var_411_int, var_412_int); // 0x6a6 TObjFunc
	var_413_int = 519845; // 0x6a8 PushI
	var_414_int = 20999; // 0x6a9 PushI
	var_415_int = 21005; // 0x6aa PushI
	AddReply(var_413_int, var_414_int, var_415_int); // 0x6ab TObjFunc
	return 0; // 0x6ad Return
	
Label_1710:
	var_416_int = 20999; // 0x6ae PushI
	var_417_bool = var_51_bool == var_416_int; // 0x6af Eq
	if(var_417_bool == 0) goto Label_1733; // 0x6b0 JumpB
	var_418_string = ""; // 0x6b1 PushV
	var_418_string = "Neutral"; // 0x6b2 MovS
	func_1249(var_52_cvector, var_418_string); // 0x6b3 NEW_2
	var_419_int = 519839; // 0x6b5 PushI
	SetMessage(var_419_int); // 0x6b6 TObjFunc
	ClearReplies(); // 0x6b8 TObjFunc
	var_420_int = 519840; // 0x6ba PushI
	var_421_int = 21001; // 0x6bb PushI
	var_422_int = 21000; // 0x6bc PushI
	AddReply(var_420_int, var_421_int, var_422_int); // 0x6bd TObjFunc
	var_423_int = 519844; // 0x6bf PushI
	var_424_int = -1; // 0x6c0 PushI
	var_425_int = 21004; // 0x6c1 PushI
	AddReply(var_423_int, var_424_int, var_425_int); // 0x6c2 TObjFunc
	return 0; // 0x6c4 Return
	
Label_1733:
	var_426_int = 21001; // 0x6c5 PushI
	var_427_bool = var_51_bool == var_426_int; // 0x6c6 Eq
	if(var_427_bool == 0) goto Label_1756; // 0x6c7 JumpB
	var_428_string = ""; // 0x6c8 PushV
	var_428_string = "Neutral"; // 0x6c9 MovS
	func_1249(var_52_cvector, var_428_string); // 0x6ca NEW_2
	var_429_int = 519841; // 0x6cc PushI
	SetMessage(var_429_int); // 0x6cd TObjFunc
	ClearReplies(); // 0x6cf TObjFunc
	var_430_int = 519842; // 0x6d1 PushI
	var_431_int = -1; // 0x6d2 PushI
	var_432_int = 21002; // 0x6d3 PushI
	AddReply(var_430_int, var_431_int, var_432_int); // 0x6d4 TObjFunc
	var_433_int = 519843; // 0x6d6 PushI
	var_434_int = -1; // 0x6d7 PushI
	var_435_int = 21003; // 0x6d8 PushI
	AddReply(var_433_int, var_434_int, var_435_int); // 0x6d9 TObjFunc
	return 0; // 0x6db Return
	
Label_1756:
	var_436_int = 20979; // 0x6dc PushI
	var_437_bool = var_51_bool == var_436_int; // 0x6dd Eq
	if(var_437_bool == 0) goto Label_1774; // 0x6de JumpB
	var_438_string = ""; // 0x6df PushV
	var_438_string = "Strength"; // 0x6e0 MovS
	func_1249(var_52_cvector, var_438_string); // 0x6e1 NEW_2
	var_439_int = 519819; // 0x6e3 PushI
	SetMessage(var_439_int); // 0x6e4 TObjFunc
	ClearReplies(); // 0x6e6 TObjFunc
	var_440_int = 519820; // 0x6e8 PushI
	var_441_int = 20981; // 0x6e9 PushI
	var_442_int = 20980; // 0x6ea PushI
	AddReply(var_440_int, var_441_int, var_442_int); // 0x6eb TObjFunc
	return 0; // 0x6ed Return
	
Label_1774:
	var_443_int = 20981; // 0x6ee PushI
	var_444_bool = var_51_bool == var_443_int; // 0x6ef Eq
	if(var_444_bool == 0) goto Label_1792; // 0x6f0 JumpB
	var_445_string = ""; // 0x6f1 PushV
	var_445_string = "Strength"; // 0x6f2 MovS
	func_1249(var_52_cvector, var_445_string); // 0x6f3 NEW_2
	var_446_int = 519821; // 0x6f5 PushI
	SetMessage(var_446_int); // 0x6f6 TObjFunc
	ClearReplies(); // 0x6f8 TObjFunc
	var_447_int = 519822; // 0x6fa PushI
	var_448_int = 20983; // 0x6fb PushI
	var_449_int = 20982; // 0x6fc PushI
	AddReply(var_447_int, var_448_int, var_449_int); // 0x6fd TObjFunc
	return 0; // 0x6ff Return
	
Label_1792:
	var_450_int = 20983; // 0x700 PushI
	var_451_bool = var_51_bool == var_450_int; // 0x701 Eq
	if(var_451_bool == 0) goto Label_1815; // 0x702 JumpB
	var_452_string = ""; // 0x703 PushV
	var_452_string = "Neutral"; // 0x704 MovS
	func_1249(var_52_cvector, var_452_string); // 0x705 NEW_2
	var_453_int = 519823; // 0x707 PushI
	SetMessage(var_453_int); // 0x708 TObjFunc
	ClearReplies(); // 0x70a TObjFunc
	var_454_int = 519824; // 0x70c PushI
	var_455_int = 20985; // 0x70d PushI
	var_456_int = 20984; // 0x70e PushI
	AddReply(var_454_int, var_455_int, var_456_int); // 0x70f TObjFunc
	var_457_int = 519829; // 0x711 PushI
	var_458_int = -1; // 0x712 PushI
	var_459_int = 20989; // 0x713 PushI
	AddReply(var_457_int, var_458_int, var_459_int); // 0x714 TObjFunc
	return 0; // 0x716 Return
	
Label_1815:
	var_460_int = 20985; // 0x717 PushI
	var_461_bool = var_51_bool == var_460_int; // 0x718 Eq
	if(var_461_bool == 0) goto Label_1833; // 0x719 JumpB
	var_462_string = ""; // 0x71a PushV
	var_462_string = "Fear"; // 0x71b MovS
	func_1249(var_52_cvector, var_462_string); // 0x71c NEW_2
	var_463_int = 519825; // 0x71e PushI
	SetMessage(var_463_int); // 0x71f TObjFunc
	ClearReplies(); // 0x721 TObjFunc
	var_464_int = 519826; // 0x723 PushI
	var_465_int = 20987; // 0x724 PushI
	var_466_int = 20986; // 0x725 PushI
	AddReply(var_464_int, var_465_int, var_466_int); // 0x726 TObjFunc
	return 0; // 0x728 Return
	
Label_1833:
	var_467_int = 20987; // 0x729 PushI
	var_468_bool = var_51_bool == var_467_int; // 0x72a Eq
	if(var_468_bool == 0) goto Label_1856; // 0x72b JumpB
	var_469_string = ""; // 0x72c PushV
	var_469_string = "Neutral"; // 0x72d MovS
	func_1249(var_52_cvector, var_469_string); // 0x72e NEW_2
	var_470_int = 519827; // 0x730 PushI
	SetMessage(var_470_int); // 0x731 TObjFunc
	ClearReplies(); // 0x733 TObjFunc
	var_471_int = 519828; // 0x735 PushI
	var_472_int = -1; // 0x736 PushI
	var_473_int = 20988; // 0x737 PushI
	AddReply(var_471_int, var_472_int, var_473_int); // 0x738 TObjFunc
	var_474_int = 527075; // 0x73a PushI
	var_475_int = -1; // 0x73b PushI
	var_476_int = 28372; // 0x73c PushI
	AddReply(var_474_int, var_475_int, var_476_int); // 0x73d TObjFunc
	return 0; // 0x73f Return
	
Label_1856:
	var_477_int = 28383; // 0x740 PushI
	var_478_bool = var_51_bool == var_477_int; // 0x741 Eq
	if(var_478_bool == 0) goto Label_1874; // 0x742 JumpB
	var_479_string = ""; // 0x743 PushV
	var_479_string = "Neutral"; // 0x744 MovS
	func_1249(var_52_cvector, var_479_string); // 0x745 NEW_2
	var_480_int = 527085; // 0x747 PushI
	SetMessage(var_480_int); // 0x748 TObjFunc
	ClearReplies(); // 0x74a TObjFunc
	var_481_int = 527086; // 0x74c PushI
	var_482_int = 28385; // 0x74d PushI
	var_483_int = 28384; // 0x74e PushI
	AddReply(var_481_int, var_482_int, var_483_int); // 0x74f TObjFunc
	return 0; // 0x751 Return
	
Label_1874:
	var_484_int = 28385; // 0x752 PushI
	var_485_bool = var_51_bool == var_484_int; // 0x753 Eq
	if(var_485_bool == 0) goto Label_1892; // 0x754 JumpB
	var_486_string = ""; // 0x755 PushV
	var_486_string = "Strength"; // 0x756 MovS
	func_1249(var_52_cvector, var_486_string); // 0x757 NEW_2
	var_487_int = 527087; // 0x759 PushI
	SetMessage(var_487_int); // 0x75a TObjFunc
	ClearReplies(); // 0x75c TObjFunc
	var_488_int = 527088; // 0x75e PushI
	var_489_int = 21014; // 0x75f PushI
	var_490_int = 28386; // 0x760 PushI
	AddReply(var_488_int, var_489_int, var_490_int); // 0x761 TObjFunc
	return 0; // 0x763 Return
	
Label_1892:
	var_491_int = 21014; // 0x764 PushI
	var_492_bool = var_51_bool == var_491_int; // 0x765 Eq
	if(var_492_bool == 0) goto Label_1915; // 0x766 JumpB
	var_493_string = ""; // 0x767 PushV
	var_493_string = "Strength"; // 0x768 MovS
	func_1249(var_52_cvector, var_493_string); // 0x769 NEW_2
	var_494_int = 519853; // 0x76b PushI
	SetMessage(var_494_int); // 0x76c TObjFunc
	ClearReplies(); // 0x76e TObjFunc
	var_495_int = 519854; // 0x770 PushI
	var_496_int = 21016; // 0x771 PushI
	var_497_int = 21015; // 0x772 PushI
	AddReply(var_495_int, var_496_int, var_497_int); // 0x773 TObjFunc
	var_498_int = 519871; // 0x775 PushI
	var_499_int = 21016; // 0x776 PushI
	var_500_int = 21033; // 0x777 PushI
	AddReply(var_498_int, var_499_int, var_500_int); // 0x778 TObjFunc
	return 0; // 0x77a Return
	
Label_1915:
	var_501_int = 21016; // 0x77b PushI
	var_502_bool = var_51_bool == var_501_int; // 0x77c Eq
	if(var_502_bool == 0) goto Label_1933; // 0x77d JumpB
	var_503_string = ""; // 0x77e PushV
	var_503_string = "Fear"; // 0x77f MovS
	func_1249(var_52_cvector, var_503_string); // 0x780 NEW_2
	var_504_int = 519855; // 0x782 PushI
	SetMessage(var_504_int); // 0x783 TObjFunc
	ClearReplies(); // 0x785 TObjFunc
	var_505_int = 519856; // 0x787 PushI
	var_506_int = 21018; // 0x788 PushI
	var_507_int = 21017; // 0x789 PushI
	AddReply(var_505_int, var_506_int, var_507_int); // 0x78a TObjFunc
	return 0; // 0x78c Return
	
Label_1933:
	var_508_int = 21018; // 0x78d PushI
	var_509_bool = var_51_bool == var_508_int; // 0x78e Eq
	if(var_509_bool == 0) goto Label_1956; // 0x78f JumpB
	var_510_string = ""; // 0x790 PushV
	var_510_string = "Fear"; // 0x791 MovS
	func_1249(var_52_cvector, var_510_string); // 0x792 NEW_2
	var_511_int = 519857; // 0x794 PushI
	SetMessage(var_511_int); // 0x795 TObjFunc
	ClearReplies(); // 0x797 TObjFunc
	var_512_int = 519858; // 0x799 PushI
	var_513_int = 21020; // 0x79a PushI
	var_514_int = 21019; // 0x79b PushI
	AddReply(var_512_int, var_513_int, var_514_int); // 0x79c TObjFunc
	var_515_int = 527143; // 0x79e PushI
	var_516_int = 28443; // 0x79f PushI
	var_517_int = 28442; // 0x7a0 PushI
	AddReply(var_515_int, var_516_int, var_517_int); // 0x7a1 TObjFunc
	return 0; // 0x7a3 Return
	
Label_1956:
	var_518_int = 28443; // 0x7a4 PushI
	var_519_bool = var_51_bool == var_518_int; // 0x7a5 Eq
	if(var_519_bool == 0) goto Label_1974; // 0x7a6 JumpB
	var_520_string = ""; // 0x7a7 PushV
	var_520_string = "Neutral"; // 0x7a8 MovS
	func_1249(var_52_cvector, var_520_string); // 0x7a9 NEW_2
	var_521_int = 527144; // 0x7ab PushI
	SetMessage(var_521_int); // 0x7ac TObjFunc
	ClearReplies(); // 0x7ae TObjFunc
	var_522_int = 527145; // 0x7b0 PushI
	var_523_int = 21020; // 0x7b1 PushI
	var_524_int = 28444; // 0x7b2 PushI
	AddReply(var_522_int, var_523_int, var_524_int); // 0x7b3 TObjFunc
	return 0; // 0x7b5 Return
	
Label_1974:
	var_525_int = 21020; // 0x7b6 PushI
	var_526_bool = var_51_bool == var_525_int; // 0x7b7 Eq
	if(var_526_bool == 0) goto Label_2002; // 0x7b8 JumpB
	var_527_string = ""; // 0x7b9 PushV
	var_527_string = "Impatience"; // 0x7ba MovS
	func_1249(var_52_cvector, var_527_string); // 0x7bb NEW_2
	var_528_int = 519859; // 0x7bd PushI
	SetMessage(var_528_int); // 0x7be TObjFunc
	ClearReplies(); // 0x7c0 TObjFunc
	var_529_int = 519860; // 0x7c2 PushI
	var_530_int = 21022; // 0x7c3 PushI
	var_531_int = 21021; // 0x7c4 PushI
	AddReply(var_529_int, var_530_int, var_531_int); // 0x7c5 TObjFunc
	var_532_int = 519866; // 0x7c7 PushI
	var_533_int = 21028; // 0x7c8 PushI
	var_534_int = 21027; // 0x7c9 PushI
	AddReply(var_532_int, var_533_int, var_534_int); // 0x7ca TObjFunc
	var_535_int = 519870; // 0x7cc PushI
	var_536_int = -1; // 0x7cd PushI
	var_537_int = 21032; // 0x7ce PushI
	AddReply(var_535_int, var_536_int, var_537_int); // 0x7cf TObjFunc
	return 0; // 0x7d1 Return
	
Label_2002:
	var_538_int = 21028; // 0x7d2 PushI
	var_539_bool = var_51_bool == var_538_int; // 0x7d3 Eq
	if(var_539_bool == 0) goto Label_2025; // 0x7d4 JumpB
	var_540_string = ""; // 0x7d5 PushV
	var_540_string = "Neutral"; // 0x7d6 MovS
	func_1249(var_52_cvector, var_540_string); // 0x7d7 NEW_2
	var_541_int = 519867; // 0x7d9 PushI
	SetMessage(var_541_int); // 0x7da TObjFunc
	ClearReplies(); // 0x7dc TObjFunc
	var_542_int = 519868; // 0x7de PushI
	var_543_int = -1; // 0x7df PushI
	var_544_int = 21029; // 0x7e0 PushI
	AddReply(var_542_int, var_543_int, var_544_int); // 0x7e1 TObjFunc
	var_545_int = 519869; // 0x7e3 PushI
	var_546_int = 21025; // 0x7e4 PushI
	var_547_int = 21030; // 0x7e5 PushI
	AddReply(var_545_int, var_546_int, var_547_int); // 0x7e6 TObjFunc
	return 0; // 0x7e8 Return
	
Label_2025:
	var_548_int = 21022; // 0x7e9 PushI
	var_549_bool = var_51_bool == var_548_int; // 0x7ea Eq
	if(var_549_bool == 0) goto Label_2048; // 0x7eb JumpB
	var_550_string = ""; // 0x7ec PushV
	var_550_string = "Neutral"; // 0x7ed MovS
	func_1249(var_52_cvector, var_550_string); // 0x7ee NEW_2
	var_551_int = 519861; // 0x7f0 PushI
	SetMessage(var_551_int); // 0x7f1 TObjFunc
	ClearReplies(); // 0x7f3 TObjFunc
	var_552_int = 519862; // 0x7f5 PushI
	var_553_int = -1; // 0x7f6 PushI
	var_554_int = 21023; // 0x7f7 PushI
	AddReply(var_552_int, var_553_int, var_554_int); // 0x7f8 TObjFunc
	var_555_int = 519863; // 0x7fa PushI
	var_556_int = 21025; // 0x7fb PushI
	var_557_int = 21024; // 0x7fc PushI
	AddReply(var_555_int, var_556_int, var_557_int); // 0x7fd TObjFunc
	return 0; // 0x7ff Return
	
Label_2048:
	var_558_int = 21025; // 0x800 PushI
	var_559_bool = var_51_bool == var_558_int; // 0x801 Eq
	if(var_559_bool == 0) goto Label_2066; // 0x802 JumpB
	var_560_string = ""; // 0x803 PushV
	var_560_string = "Neutral"; // 0x804 MovS
	func_1249(var_52_cvector, var_560_string); // 0x805 NEW_2
	var_561_int = 519864; // 0x807 PushI
	SetMessage(var_561_int); // 0x808 TObjFunc
	ClearReplies(); // 0x80a TObjFunc
	var_562_int = 519865; // 0x80c PushI
	var_563_int = -1; // 0x80d PushI
	var_564_int = 21026; // 0x80e PushI
	AddReply(var_562_int, var_563_int, var_564_int); // 0x80f TObjFunc
	return 0; // 0x811 Return
	
Label_2066:
	var_565_int = 28374; // 0x812 PushI
	var_566_bool = var_51_bool == var_565_int; // 0x813 Eq
	if(var_566_bool == 0) goto Label_2084; // 0x814 JumpB
	var_567_string = ""; // 0x815 PushV
	var_567_string = "Sympathy"; // 0x816 MovS
	func_1249(var_52_cvector, var_567_string); // 0x817 NEW_2
	var_568_int = 527077; // 0x819 PushI
	SetMessage(var_568_int); // 0x81a TObjFunc
	ClearReplies(); // 0x81c TObjFunc
	var_569_int = 527078; // 0x81e PushI
	var_570_int = -1; // 0x81f PushI
	var_571_int = 28375; // 0x820 PushI
	AddReply(var_569_int, var_570_int, var_571_int); // 0x821 TObjFunc
	return 0; // 0x823 Return
	
Label_2084:
	var_572_int = 20974; // 0x824 PushI
	var_573_bool = var_51_bool == var_572_int; // 0x825 Eq
	if(var_573_bool == 0) goto Label_2102; // 0x826 JumpB
	var_574_string = ""; // 0x827 PushV
	var_574_string = "Sympathy"; // 0x828 MovS
	func_1249(var_52_cvector, var_574_string); // 0x829 NEW_2
	var_575_int = 519814; // 0x82b PushI
	SetMessage(var_575_int); // 0x82c TObjFunc
	ClearReplies(); // 0x82e TObjFunc
	var_576_int = 519815; // 0x830 PushI
	var_577_int = -1; // 0x831 PushI
	var_578_int = 20975; // 0x832 PushI
	AddReply(var_576_int, var_577_int, var_578_int); // 0x833 TObjFunc
	return 0; // 0x835 Return
	
Label_2102:
	var_3_string = 1; // 0x836 TMovB
	var_579_bool = 0; // 0x837 PushV
	func_6274(var_579_bool); // 0x838 NEW_2
	if(var_579_bool == 0) goto Label_2110; // 0x83a JumpB
	lshStopAnimation(); // 0x83b Func
	goto Label_2112; // 0x83d Jump
	
Label_2112:
	return 0; // 0x840 Return
	
Label_2110:
	StopAnimation(); // 0x83e Func
	
Label_2114:
	return 0; // 0x842 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	var_53_int = 1; // 0x8e5 PushI
	if(var_53_int == 0) goto Label_2386; // 0x8e6 JumpB
	func_6100(); // 0x8e8 NEW_2
	var_55_int = 28309; // 0x8ea PushI
	var_56_bool = var_51_bool == var_55_int; // 0x8eb Eq
	if(var_56_bool == 0) goto Label_2305; // 0x8ec JumpB
	var_57_string = ""; // 0x8ed PushV
	var_57_string = "Neutral"; // 0x8ee MovS
	func_2254(var_52_cvector, var_57_string); // 0x8ef NEW_2
	var_74_int = 527023; // 0x8f1 PushI
	SetMessage(var_74_int); // 0x8f2 TObjFunc
	ClearReplies(); // 0x8f4 TObjFunc
	var_75_int = 527024; // 0x8f6 PushI
	var_76_int = 21951; // 0x8f7 PushI
	var_77_int = 28310; // 0x8f8 PushI
	AddReply(var_75_int, var_76_int, var_77_int); // 0x8f9 TObjFunc
	var_78_int = 527025; // 0x8fb PushI
	var_79_int = 21951; // 0x8fc PushI
	var_80_int = 28311; // 0x8fd PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0x8fe TObjFunc
	return 0; // 0x900 Return
	
Label_2305:
	var_81_int = 21951; // 0x901 PushI
	var_82_bool = var_51_bool == var_81_int; // 0x902 Eq
	if(var_82_bool == 0) goto Label_2328; // 0x903 JumpB
	var_83_string = ""; // 0x904 PushV
	var_83_string = "Neutral"; // 0x905 MovS
	func_2254(var_52_cvector, var_83_string); // 0x906 NEW_2
	var_84_int = 520740; // 0x908 PushI
	SetMessage(var_84_int); // 0x909 TObjFunc
	ClearReplies(); // 0x90b TObjFunc
	var_85_int = 520741; // 0x90d PushI
	var_86_int = 21953; // 0x90e PushI
	var_87_int = 21952; // 0x90f PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0x910 TObjFunc
	var_88_int = 520748; // 0x912 PushI
	var_89_int = 21955; // 0x913 PushI
	var_90_int = 21960; // 0x914 PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0x915 TObjFunc
	return 0; // 0x917 Return
	
Label_2328:
	var_91_int = 21953; // 0x918 PushI
	var_92_bool = var_51_bool == var_91_int; // 0x919 Eq
	if(var_92_bool == 0) goto Label_2351; // 0x91a JumpB
	var_93_string = ""; // 0x91b PushV
	var_93_string = "Neutral"; // 0x91c MovS
	func_2254(var_52_cvector, var_93_string); // 0x91d NEW_2
	var_94_int = 520742; // 0x91f PushI
	SetMessage(var_94_int); // 0x920 TObjFunc
	ClearReplies(); // 0x922 TObjFunc
	var_95_int = 520743; // 0x924 PushI
	var_96_int = 21955; // 0x925 PushI
	var_97_int = 21954; // 0x926 PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0x927 TObjFunc
	var_98_int = 520747; // 0x929 PushI
	var_99_int = 21955; // 0x92a PushI
	var_100_int = 21958; // 0x92b PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x92c TObjFunc
	return 0; // 0x92e Return
	
Label_2351:
	var_101_int = 21955; // 0x92f PushI
	var_102_bool = var_51_bool == var_101_int; // 0x930 Eq
	if(var_102_bool == 0) goto Label_2374; // 0x931 JumpB
	var_103_string = ""; // 0x932 PushV
	var_103_string = "Neutral"; // 0x933 MovS
	func_2254(var_52_cvector, var_103_string); // 0x934 NEW_2
	var_104_int = 520744; // 0x936 PushI
	SetMessage(var_104_int); // 0x937 TObjFunc
	ClearReplies(); // 0x939 TObjFunc
	var_105_int = 520745; // 0x93b PushI
	var_106_int = -1; // 0x93c PushI
	var_107_int = 21956; // 0x93d PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x93e TObjFunc
	var_108_int = 520746; // 0x940 PushI
	var_109_int = -1; // 0x941 PushI
	var_110_int = 21957; // 0x942 PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x943 TObjFunc
	return 0; // 0x945 Return
	
Label_2374:
	var_3_string = 1; // 0x946 TMovB
	var_111_bool = 0; // 0x947 PushV
	func_6274(var_111_bool); // 0x948 NEW_2
	if(var_111_bool == 0) goto Label_2382; // 0x94a JumpB
	lshStopAnimation(); // 0x94b Func
	goto Label_2384; // 0x94d Jump
	
Label_2384:
	return 0; // 0x950 Return
	
Label_2382:
	StopAnimation(); // 0x94e Func
	
Label_2386:
	return 0; // 0x952 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	var_53_int = 1; // 0xa21 PushI
	if(var_53_int == 0) goto Label_2921; // 0xa22 JumpB
	func_6100(); // 0xa24 NEW_2
	var_55_int = 22569; // 0xa26 PushI
	var_56_bool = var_52_cvector == var_55_int; // 0xa27 Eq
	if(var_56_bool == 0) goto Label_2606; // 0xa28 JumpB
	var_57_object = Obj(); var_58_object = Obj(); // 0xa29 PushV
	var_57_object = var_1_object; // 0xa2a MovT
	var_58_object = var_0_object; // 0xa2b MovT
	func_6353(); // 0xa2c NEW_2
	
Label_2606:
	var_61_int = 22571; // 0xa2e PushI
	var_62_bool = var_52_cvector == var_61_int; // 0xa2f Eq
	if(var_62_bool == 0) goto Label_2619; // 0xa30 JumpB
	var_63_object = Obj(); var_64_object = Obj(); // 0xa31 PushV
	var_63_object = var_1_object; // 0xa32 MovT
	var_64_object = var_0_object; // 0xa33 MovT
	func_6359(); // 0xa34 NEW_2
	var_81_object = Obj(); var_82_object = Obj(); // 0xa36 PushV
	var_81_object = var_1_object; // 0xa37 MovT
	var_82_object = var_0_object; // 0xa38 MovT
	func_6666(); // 0xa39 NEW_2
	
Label_2619:
	var_85_int = 22566; // 0xa3b PushI
	var_86_bool = var_51_bool == var_85_int; // 0xa3c Eq
	if(var_86_bool == 0) goto Label_2686; // 0xa3d JumpB
	var_87_bool = 0; var_88_object = Obj(); // 0xa3e PushV
	var_88_object = var_1_object; // 0xa3f MovT
	func_6771(var_88_object); // 0xa40 NEW_2
	if(var_87_bool == 0) goto Label_2652; // 0xa42 JumpB
	var_95_object = Obj(); var_96_object = Obj(); // 0xa43 PushV
	var_95_object = var_1_object; // 0xa44 MovT
	var_96_object = var_0_object; // 0xa45 MovT
	func_6347(); // 0xa46 NEW_2
	var_99_string = ""; // 0xa48 PushV
	var_99_string = "Sympathy"; // 0xa49 MovS
	func_2570(var_52_cvector, var_99_string); // 0xa4a NEW_2
	var_116_int = 521388; // 0xa4c PushI
	SetMessage(var_116_int); // 0xa4d TObjFunc
	ClearReplies(); // 0xa4f TObjFunc
	var_117_int = 521389; // 0xa51 PushI
	var_118_int = 25279; // 0xa52 PushI
	var_119_int = 22567; // 0xa53 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0xa54 TObjFunc
	var_120_int = 523995; // 0xa56 PushI
	var_121_int = 25286; // 0xa57 PushI
	var_122_int = 25285; // 0xa58 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0xa59 TObjFunc
	return 0; // 0xa5b Return
	
Label_2652:
	var_123_string = ""; // 0xa5c PushV
	var_123_string = "Neutral"; // 0xa5d MovS
	func_2570(var_52_cvector, var_123_string); // 0xa5e NEW_2
	var_124_int = 521390; // 0xa60 PushI
	SetMessage(var_124_int); // 0xa61 TObjFunc
	ClearReplies(); // 0xa63 TObjFunc
	var_125_bool = 0; // 0xa65 PushV
	var_125_bool = 0; // 0xa66 MovB
	var_126_bool = 0; var_127_object = Obj(); // 0xa67 PushV
	var_127_object = var_1_object; // 0xa68 MovT
	func_6759(var_127_object); // 0xa69 NEW_2
	if(var_126_bool == 0) goto Label_2674; // 0xa6b JumpB
	var_132_bool = 0; var_133_object = Obj(); // 0xa6c PushV
	var_133_object = var_1_object; // 0xa6d MovT
	func_6783(var_133_object); // 0xa6e NEW_2
	if(var_132_bool == 0) goto Label_2674; // 0xa70 JumpB
	var_125_bool = 1; // 0xa71 MovB
	
Label_2674:
	if(var_125_bool == 0) goto Label_2680; // 0xa72 JumpB
	var_138_int = 521391; // 0xa73 PushI
	var_139_int = 22570; // 0xa74 PushI
	var_140_int = 22569; // 0xa75 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0xa76 TObjFunc
	
Label_2680:
	var_141_int = 521394; // 0xa78 PushI
	var_142_int = -1; // 0xa79 PushI
	var_143_int = 22572; // 0xa7a PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0xa7b TObjFunc
	return 0; // 0xa7d Return
	
Label_2686:
	var_144_int = 22570; // 0xa7e PushI
	var_145_bool = var_51_bool == var_144_int; // 0xa7f Eq
	if(var_145_bool == 0) goto Label_2704; // 0xa80 JumpB
	var_146_string = ""; // 0xa81 PushV
	var_146_string = "Neutral"; // 0xa82 MovS
	func_2570(var_52_cvector, var_146_string); // 0xa83 NEW_2
	var_147_int = 521392; // 0xa85 PushI
	SetMessage(var_147_int); // 0xa86 TObjFunc
	ClearReplies(); // 0xa88 TObjFunc
	var_148_int = 521393; // 0xa8a PushI
	var_149_int = -1; // 0xa8b PushI
	var_150_int = 22571; // 0xa8c PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0xa8d TObjFunc
	return 0; // 0xa8f Return
	
Label_2704:
	var_151_int = 25286; // 0xa90 PushI
	var_152_bool = var_51_bool == var_151_int; // 0xa91 Eq
	if(var_152_bool == 0) goto Label_2722; // 0xa92 JumpB
	var_153_string = ""; // 0xa93 PushV
	var_153_string = "Strength"; // 0xa94 MovS
	func_2570(var_52_cvector, var_153_string); // 0xa95 NEW_2
	var_154_int = 523996; // 0xa97 PushI
	SetMessage(var_154_int); // 0xa98 TObjFunc
	ClearReplies(); // 0xa9a TObjFunc
	var_155_int = 523997; // 0xa9c PushI
	var_156_int = 25288; // 0xa9d PushI
	var_157_int = 25287; // 0xa9e PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0xa9f TObjFunc
	return 0; // 0xaa1 Return
	
Label_2722:
	var_158_int = 25288; // 0xaa2 PushI
	var_159_bool = var_51_bool == var_158_int; // 0xaa3 Eq
	if(var_159_bool == 0) goto Label_2745; // 0xaa4 JumpB
	var_160_string = ""; // 0xaa5 PushV
	var_160_string = "Strength"; // 0xaa6 MovS
	func_2570(var_52_cvector, var_160_string); // 0xaa7 NEW_2
	var_161_int = 523998; // 0xaa9 PushI
	SetMessage(var_161_int); // 0xaaa TObjFunc
	ClearReplies(); // 0xaac TObjFunc
	var_162_int = 523999; // 0xaae PushI
	var_163_int = 25279; // 0xaaf PushI
	var_164_int = 25289; // 0xab0 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0xab1 TObjFunc
	var_165_int = 524000; // 0xab3 PushI
	var_166_int = 25279; // 0xab4 PushI
	var_167_int = 25290; // 0xab5 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0xab6 TObjFunc
	return 0; // 0xab8 Return
	
Label_2745:
	var_168_int = 25279; // 0xab9 PushI
	var_169_bool = var_51_bool == var_168_int; // 0xaba Eq
	if(var_169_bool == 0) goto Label_2763; // 0xabb JumpB
	var_170_string = ""; // 0xabc PushV
	var_170_string = "Neutral"; // 0xabd MovS
	func_2570(var_52_cvector, var_170_string); // 0xabe NEW_2
	var_171_int = 523989; // 0xac0 PushI
	SetMessage(var_171_int); // 0xac1 TObjFunc
	ClearReplies(); // 0xac3 TObjFunc
	var_172_int = 523990; // 0xac5 PushI
	var_173_int = 25281; // 0xac6 PushI
	var_174_int = 25280; // 0xac7 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0xac8 TObjFunc
	return 0; // 0xaca Return
	
Label_2763:
	var_175_int = 25281; // 0xacb PushI
	var_176_bool = var_51_bool == var_175_int; // 0xacc Eq
	if(var_176_bool == 0) goto Label_2786; // 0xacd JumpB
	var_177_string = ""; // 0xace PushV
	var_177_string = "Fear"; // 0xacf MovS
	func_2570(var_52_cvector, var_177_string); // 0xad0 NEW_2
	var_178_int = 523991; // 0xad2 PushI
	SetMessage(var_178_int); // 0xad3 TObjFunc
	ClearReplies(); // 0xad5 TObjFunc
	var_179_int = 523992; // 0xad7 PushI
	var_180_int = 25283; // 0xad8 PushI
	var_181_int = 25282; // 0xad9 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0xada TObjFunc
	var_182_int = 524001; // 0xadc PushI
	var_183_int = 25294; // 0xadd PushI
	var_184_int = 25293; // 0xade PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0xadf TObjFunc
	return 0; // 0xae1 Return
	
Label_2786:
	var_185_int = 25294; // 0xae2 PushI
	var_186_bool = var_51_bool == var_185_int; // 0xae3 Eq
	if(var_186_bool == 0) goto Label_2809; // 0xae4 JumpB
	var_187_string = ""; // 0xae5 PushV
	var_187_string = "Fear"; // 0xae6 MovS
	func_2570(var_52_cvector, var_187_string); // 0xae7 NEW_2
	var_188_int = 524002; // 0xae9 PushI
	SetMessage(var_188_int); // 0xaea TObjFunc
	ClearReplies(); // 0xaec TObjFunc
	var_189_int = 524003; // 0xaee PushI
	var_190_int = 25283; // 0xaef PushI
	var_191_int = 25295; // 0xaf0 PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0xaf1 TObjFunc
	var_192_int = 524004; // 0xaf3 PushI
	var_193_int = 25297; // 0xaf4 PushI
	var_194_int = 25296; // 0xaf5 PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0xaf6 TObjFunc
	return 0; // 0xaf8 Return
	
Label_2809:
	var_195_int = 25297; // 0xaf9 PushI
	var_196_bool = var_51_bool == var_195_int; // 0xafa Eq
	if(var_196_bool == 0) goto Label_2827; // 0xafb JumpB
	var_197_string = ""; // 0xafc PushV
	var_197_string = "Strength"; // 0xafd MovS
	func_2570(var_52_cvector, var_197_string); // 0xafe NEW_2
	var_198_int = 524005; // 0xb00 PushI
	SetMessage(var_198_int); // 0xb01 TObjFunc
	ClearReplies(); // 0xb03 TObjFunc
	var_199_int = 530821; // 0xb05 PushI
	var_200_int = 32132; // 0xb06 PushI
	var_201_int = 32131; // 0xb07 PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0xb08 TObjFunc
	return 0; // 0xb0a Return
	
Label_2827:
	var_202_int = 32132; // 0xb0b PushI
	var_203_bool = var_51_bool == var_202_int; // 0xb0c Eq
	if(var_203_bool == 0) goto Label_2845; // 0xb0d JumpB
	var_204_string = ""; // 0xb0e PushV
	var_204_string = "Fear"; // 0xb0f MovS
	func_2570(var_52_cvector, var_204_string); // 0xb10 NEW_2
	var_205_int = 530822; // 0xb12 PushI
	SetMessage(var_205_int); // 0xb13 TObjFunc
	ClearReplies(); // 0xb15 TObjFunc
	var_206_int = 530823; // 0xb17 PushI
	var_207_int = 25283; // 0xb18 PushI
	var_208_int = 32133; // 0xb19 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0xb1a TObjFunc
	return 0; // 0xb1c Return
	
Label_2845:
	var_209_int = 25283; // 0xb1d PushI
	var_210_bool = var_51_bool == var_209_int; // 0xb1e Eq
	if(var_210_bool == 0) goto Label_2863; // 0xb1f JumpB
	var_211_string = ""; // 0xb20 PushV
	var_211_string = "Fear"; // 0xb21 MovS
	func_2570(var_52_cvector, var_211_string); // 0xb22 NEW_2
	var_212_int = 523993; // 0xb24 PushI
	SetMessage(var_212_int); // 0xb25 TObjFunc
	ClearReplies(); // 0xb27 TObjFunc
	var_213_int = 523994; // 0xb29 PushI
	var_214_int = 25299; // 0xb2a PushI
	var_215_int = 25284; // 0xb2b PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0xb2c TObjFunc
	return 0; // 0xb2e Return
	
Label_2863:
	var_216_int = 25299; // 0xb2f PushI
	var_217_bool = var_51_bool == var_216_int; // 0xb30 Eq
	if(var_217_bool == 0) goto Label_2881; // 0xb31 JumpB
	var_218_string = ""; // 0xb32 PushV
	var_218_string = "Impatience"; // 0xb33 MovS
	func_2570(var_52_cvector, var_218_string); // 0xb34 NEW_2
	var_219_int = 524006; // 0xb36 PushI
	SetMessage(var_219_int); // 0xb37 TObjFunc
	ClearReplies(); // 0xb39 TObjFunc
	var_220_int = 524007; // 0xb3b PushI
	var_221_int = 25301; // 0xb3c PushI
	var_222_int = 25300; // 0xb3d PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0xb3e TObjFunc
	return 0; // 0xb40 Return
	
Label_2881:
	var_223_int = 25301; // 0xb41 PushI
	var_224_bool = var_51_bool == var_223_int; // 0xb42 Eq
	if(var_224_bool == 0) goto Label_2909; // 0xb43 JumpB
	var_225_string = ""; // 0xb44 PushV
	var_225_string = "Strength"; // 0xb45 MovS
	func_2570(var_52_cvector, var_225_string); // 0xb46 NEW_2
	var_226_int = 524008; // 0xb48 PushI
	SetMessage(var_226_int); // 0xb49 TObjFunc
	ClearReplies(); // 0xb4b TObjFunc
	var_227_int = 524009; // 0xb4d PushI
	var_228_int = -1; // 0xb4e PushI
	var_229_int = 25302; // 0xb4f PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0xb50 TObjFunc
	var_230_int = 524010; // 0xb52 PushI
	var_231_int = -1; // 0xb53 PushI
	var_232_int = 25303; // 0xb54 PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0xb55 TObjFunc
	var_233_int = 524011; // 0xb57 PushI
	var_234_int = -1; // 0xb58 PushI
	var_235_int = 25304; // 0xb59 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0xb5a TObjFunc
	return 0; // 0xb5c Return
	
Label_2909:
	var_3_string = 1; // 0xb5d TMovB
	var_236_bool = 0; // 0xb5e PushV
	func_6274(var_236_bool); // 0xb5f NEW_2
	if(var_236_bool == 0) goto Label_2917; // 0xb61 JumpB
	lshStopAnimation(); // 0xb62 Func
	goto Label_2919; // 0xb64 Jump
	
Label_2919:
	return 0; // 0xb67 Return
	
Label_2917:
	StopAnimation(); // 0xb65 Func
	
Label_2921:
	return 0; // 0xb69 Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	var_53_int = 1; // 0xc65 PushI
	if(var_53_int == 0) goto Label_3737; // 0xc66 JumpB
	func_6100(); // 0xc68 NEW_2
	var_55_int = 32465; // 0xc6a PushI
	var_56_bool = var_52_cvector == var_55_int; // 0xc6b Eq
	if(var_56_bool == 0) goto Label_3191; // 0xc6c JumpB
	var_57_object = Obj(); var_58_object = Obj(); // 0xc6d PushV
	var_57_object = var_1_object; // 0xc6e MovT
	var_58_object = var_0_object; // 0xc6f MovT
	func_6595(); // 0xc70 NEW_2
	var_116_object = Obj(); var_117_object = Obj(); // 0xc72 PushV
	var_116_object = var_1_object; // 0xc73 MovT
	var_117_object = var_0_object; // 0xc74 MovT
	func_6666(); // 0xc75 NEW_2
	
Label_3191:
	var_120_int = 23102; // 0xc77 PushI
	var_121_bool = var_52_cvector == var_120_int; // 0xc78 Eq
	if(var_121_bool == 0) goto Label_3199; // 0xc79 JumpB
	var_122_object = Obj(); var_123_object = Obj(); // 0xc7a PushV
	var_122_object = var_1_object; // 0xc7b MovT
	var_123_object = var_0_object; // 0xc7c MovT
	func_6375(); // 0xc7d NEW_2
	
Label_3199:
	var_126_int = 32866; // 0xc7f PushI
	var_127_bool = var_52_cvector == var_126_int; // 0xc80 Eq
	if(var_127_bool == 0) goto Label_3207; // 0xc81 JumpB
	var_128_object = Obj(); var_129_object = Obj(); // 0xc82 PushV
	var_128_object = var_1_object; // 0xc83 MovT
	var_129_object = var_0_object; // 0xc84 MovT
	func_6375(); // 0xc85 NEW_2
	
Label_3207:
	var_130_int = 23651; // 0xc87 PushI
	var_131_bool = var_52_cvector == var_130_int; // 0xc88 Eq
	if(var_131_bool == 0) goto Label_3215; // 0xc89 JumpB
	var_132_object = Obj(); var_133_object = Obj(); // 0xc8a PushV
	var_132_object = var_1_object; // 0xc8b MovT
	var_133_object = var_0_object; // 0xc8c MovT
	func_6625(); // 0xc8d NEW_2
	
Label_3215:
	var_136_int = 31814; // 0xc8f PushI
	var_137_bool = var_52_cvector == var_136_int; // 0xc90 Eq
	if(var_137_bool == 0) goto Label_3223; // 0xc91 JumpB
	var_138_object = Obj(); var_139_object = Obj(); // 0xc92 PushV
	var_138_object = var_1_object; // 0xc93 MovT
	var_139_object = var_0_object; // 0xc94 MovT
	func_6381(); // 0xc95 NEW_2
	
Label_3223:
	var_142_int = 31818; // 0xc97 PushI
	var_143_bool = var_52_cvector == var_142_int; // 0xc98 Eq
	if(var_143_bool == 0) goto Label_3236; // 0xc99 JumpB
	var_144_object = Obj(); var_145_object = Obj(); // 0xc9a PushV
	var_144_object = var_1_object; // 0xc9b MovT
	var_145_object = var_0_object; // 0xc9c MovT
	func_6472(); // 0xc9d NEW_2
	var_156_object = Obj(); var_157_object = Obj(); // 0xc9f PushV
	var_156_object = var_1_object; // 0xca0 MovT
	var_157_object = var_0_object; // 0xca1 MovT
	func_6492(); // 0xca2 NEW_2
	
Label_3236:
	var_182_int = 32469; // 0xca4 PushI
	var_183_bool = var_52_cvector == var_182_int; // 0xca5 Eq
	if(var_183_bool == 0) goto Label_3249; // 0xca6 JumpB
	var_184_object = Obj(); var_185_object = Obj(); // 0xca7 PushV
	var_184_object = var_1_object; // 0xca8 MovT
	var_185_object = var_0_object; // 0xca9 MovT
	func_6595(); // 0xcaa NEW_2
	var_186_object = Obj(); var_187_object = Obj(); // 0xcac PushV
	var_186_object = var_1_object; // 0xcad MovT
	var_187_object = var_0_object; // 0xcae MovT
	func_6666(); // 0xcaf NEW_2
	
Label_3249:
	var_188_int = 32462; // 0xcb1 PushI
	var_189_bool = var_51_bool == var_188_int; // 0xcb2 Eq
	if(var_189_bool == 0) goto Label_3361; // 0xcb3 JumpB
	var_190_bool = 0; var_191_object = Obj(); // 0xcb4 PushV
	var_191_object = var_1_object; // 0xcb5 MovT
	func_6961(var_191_object); // 0xcb6 NEW_2
	if(var_190_bool == 0) goto Label_3282; // 0xcb8 JumpB
	var_198_object = Obj(); var_199_object = Obj(); // 0xcb9 PushV
	var_198_object = var_1_object; // 0xcba MovT
	var_199_object = var_0_object; // 0xcbb MovT
	func_6589(); // 0xcbc NEW_2
	var_202_object = Obj(); var_203_object = Obj(); // 0xcbe PushV
	var_202_object = var_1_object; // 0xcbf MovT
	var_203_object = var_0_object; // 0xcc0 MovT
	func_6631(); // 0xcc1 NEW_2
	var_206_string = ""; // 0xcc3 PushV
	var_206_string = "Neutral"; // 0xcc4 MovS
	func_3150(var_52_cvector, var_206_string); // 0xcc5 NEW_2
	var_223_int = 531154; // 0xcc7 PushI
	SetMessage(var_223_int); // 0xcc8 TObjFunc
	ClearReplies(); // 0xcca TObjFunc
	var_224_int = 531276; // 0xccc PushI
	var_225_int = 32591; // 0xccd PushI
	var_226_int = 32590; // 0xcce PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0xccf TObjFunc
	return 0; // 0xcd1 Return
	
Label_3282:
	var_227_string = ""; // 0xcd2 PushV
	var_227_string = "Neutral"; // 0xcd3 MovS
	func_3150(var_52_cvector, var_227_string); // 0xcd4 NEW_2
	var_228_int = 521924; // 0xcd6 PushI
	SetMessage(var_228_int); // 0xcd7 TObjFunc
	ClearReplies(); // 0xcd9 TObjFunc
	var_229_bool = 0; // 0xcdb PushV
	var_229_bool = 0; // 0xcdc MovB
	var_230_bool = 0; var_231_object = Obj(); // 0xcdd PushV
	var_231_object = var_1_object; // 0xcde MovT
	func_6795(var_231_object); // 0xcdf NEW_2
	if(var_230_bool == 0) goto Label_3305; // 0xce1 JumpB
	var_236_bool = 0; var_237_object = Obj(); // 0xce2 PushV
	var_237_object = var_1_object; // 0xce3 MovT
	func_6807(var_237_object); // 0xce4 NEW_2
	var_242_bool = var_236_bool == 0; // 0xce6 Not
	if(var_242_bool == 0) goto Label_3305; // 0xce7 JumpB
	var_229_bool = 1; // 0xce8 MovB
	
Label_3305:
	if(var_229_bool == 0) goto Label_3311; // 0xce9 JumpB
	var_243_int = 521925; // 0xcea PushI
	var_244_int = 23656; // 0xceb PushI
	var_245_int = 23099; // 0xcec PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0xced TObjFunc
	
Label_3311:
	var_246_bool = 0; var_247_object = Obj(); // 0xcef PushV
	var_247_object = var_1_object; // 0xcf0 MovT
	func_6985(var_247_object); // 0xcf1 NEW_2
	if(var_246_bool == 0) goto Label_3321; // 0xcf3 JumpB
	var_252_int = 522478; // 0xcf4 PushI
	var_253_int = 23652; // 0xcf5 PushI
	var_254_int = 23651; // 0xcf6 PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0xcf7 TObjFunc
	
Label_3321:
	var_255_bool = 0; // 0xcf9 PushV
	var_255_bool = 0; // 0xcfa MovB
	var_256_bool = 0; var_257_object = Obj(); // 0xcfb PushV
	var_257_object = var_1_object; // 0xcfc MovT
	func_6913(var_257_object); // 0xcfd NEW_2
	if(var_256_bool == 0) goto Label_3334; // 0xcff JumpB
	var_262_bool = 0; var_263_object = Obj(); // 0xd00 PushV
	var_263_object = var_1_object; // 0xd01 MovT
	func_6819(var_263_object); // 0xd02 NEW_2
	if(var_262_bool == 0) goto Label_3334; // 0xd04 JumpB
	var_255_bool = 1; // 0xd05 MovB
	
Label_3334:
	if(var_255_bool == 0) goto Label_3340; // 0xd06 JumpB
	var_268_int = 530448; // 0xd07 PushI
	var_269_int = 31815; // 0xd08 PushI
	var_270_int = 31814; // 0xd09 PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0xd0a TObjFunc
	
Label_3340:
	var_271_bool = 0; var_272_object = Obj(); // 0xd0c PushV
	var_272_object = var_1_object; // 0xd0d MovT
	func_6973(var_272_object); // 0xd0e NEW_2
	if(var_271_bool == 0) goto Label_3350; // 0xd10 JumpB
	var_277_int = 531159; // 0xd11 PushI
	var_278_int = 32468; // 0xd12 PushI
	var_279_int = 32467; // 0xd13 PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0xd14 TObjFunc
	
Label_3350:
	var_280_int = 521926; // 0xd16 PushI
	var_281_int = -1; // 0xd17 PushI
	var_282_int = 23100; // 0xd18 PushI
	AddReply(var_280_int, var_281_int, var_282_int); // 0xd19 TObjFunc
	var_283_int = 531282; // 0xd1b PushI
	var_284_int = -1; // 0xd1c PushI
	var_285_int = 32597; // 0xd1d PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0xd1e TObjFunc
	return 0; // 0xd20 Return
	
Label_3361:
	var_286_int = 32468; // 0xd21 PushI
	var_287_bool = var_51_bool == var_286_int; // 0xd22 Eq
	if(var_287_bool == 0) goto Label_3379; // 0xd23 JumpB
	var_288_string = ""; // 0xd24 PushV
	var_288_string = "Neutral"; // 0xd25 MovS
	func_3150(var_52_cvector, var_288_string); // 0xd26 NEW_2
	var_289_int = 531160; // 0xd28 PushI
	SetMessage(var_289_int); // 0xd29 TObjFunc
	ClearReplies(); // 0xd2b TObjFunc
	var_290_int = 531161; // 0xd2d PushI
	var_291_int = -1; // 0xd2e PushI
	var_292_int = 32469; // 0xd2f PushI
	AddReply(var_290_int, var_291_int, var_292_int); // 0xd30 TObjFunc
	return 0; // 0xd32 Return
	
Label_3379:
	var_293_int = 31815; // 0xd33 PushI
	var_294_bool = var_51_bool == var_293_int; // 0xd34 Eq
	if(var_294_bool == 0) goto Label_3402; // 0xd35 JumpB
	var_295_string = ""; // 0xd36 PushV
	var_295_string = "Fear"; // 0xd37 MovS
	func_3150(var_52_cvector, var_295_string); // 0xd38 NEW_2
	var_296_int = 530449; // 0xd3a PushI
	SetMessage(var_296_int); // 0xd3b TObjFunc
	ClearReplies(); // 0xd3d TObjFunc
	var_297_int = 530450; // 0xd3f PushI
	var_298_int = 31817; // 0xd40 PushI
	var_299_int = 31816; // 0xd41 PushI
	AddReply(var_297_int, var_298_int, var_299_int); // 0xd42 TObjFunc
	var_300_int = 531283; // 0xd44 PushI
	var_301_int = 32601; // 0xd45 PushI
	var_302_int = 32598; // 0xd46 PushI
	AddReply(var_300_int, var_301_int, var_302_int); // 0xd47 TObjFunc
	return 0; // 0xd49 Return
	
Label_3402:
	var_303_int = 32601; // 0xd4a PushI
	var_304_bool = var_51_bool == var_303_int; // 0xd4b Eq
	if(var_304_bool == 0) goto Label_3420; // 0xd4c JumpB
	var_305_string = ""; // 0xd4d PushV
	var_305_string = "Neutral"; // 0xd4e MovS
	func_3150(var_52_cvector, var_305_string); // 0xd4f NEW_2
	var_306_int = 531286; // 0xd51 PushI
	SetMessage(var_306_int); // 0xd52 TObjFunc
	ClearReplies(); // 0xd54 TObjFunc
	var_307_int = 531289; // 0xd56 PushI
	var_308_int = 32603; // 0xd57 PushI
	var_309_int = 32604; // 0xd58 PushI
	AddReply(var_307_int, var_308_int, var_309_int); // 0xd59 TObjFunc
	return 0; // 0xd5b Return
	
Label_3420:
	var_310_int = 31817; // 0xd5c PushI
	var_311_bool = var_51_bool == var_310_int; // 0xd5d Eq
	if(var_311_bool == 0) goto Label_3443; // 0xd5e JumpB
	var_312_string = ""; // 0xd5f PushV
	var_312_string = "Fear"; // 0xd60 MovS
	func_3150(var_52_cvector, var_312_string); // 0xd61 NEW_2
	var_313_int = 530451; // 0xd63 PushI
	SetMessage(var_313_int); // 0xd64 TObjFunc
	ClearReplies(); // 0xd66 TObjFunc
	var_314_int = 531287; // 0xd68 PushI
	var_315_int = 32603; // 0xd69 PushI
	var_316_int = 32602; // 0xd6a PushI
	AddReply(var_314_int, var_315_int, var_316_int); // 0xd6b TObjFunc
	var_317_int = 531284; // 0xd6d PushI
	var_318_int = 32600; // 0xd6e PushI
	var_319_int = 32599; // 0xd6f PushI
	AddReply(var_317_int, var_318_int, var_319_int); // 0xd70 TObjFunc
	return 0; // 0xd72 Return
	
Label_3443:
	var_320_int = 32600; // 0xd73 PushI
	var_321_bool = var_51_bool == var_320_int; // 0xd74 Eq
	if(var_321_bool == 0) goto Label_3461; // 0xd75 JumpB
	var_322_string = ""; // 0xd76 PushV
	var_322_string = "Impatience"; // 0xd77 MovS
	func_3150(var_52_cvector, var_322_string); // 0xd78 NEW_2
	var_323_int = 531285; // 0xd7a PushI
	SetMessage(var_323_int); // 0xd7b TObjFunc
	ClearReplies(); // 0xd7d TObjFunc
	var_324_int = 531290; // 0xd7f PushI
	var_325_int = 32603; // 0xd80 PushI
	var_326_int = 32606; // 0xd81 PushI
	AddReply(var_324_int, var_325_int, var_326_int); // 0xd82 TObjFunc
	return 0; // 0xd84 Return
	
Label_3461:
	var_327_int = 32603; // 0xd85 PushI
	var_328_bool = var_51_bool == var_327_int; // 0xd86 Eq
	if(var_328_bool == 0) goto Label_3479; // 0xd87 JumpB
	var_329_string = ""; // 0xd88 PushV
	var_329_string = "Impatience"; // 0xd89 MovS
	func_3150(var_52_cvector, var_329_string); // 0xd8a NEW_2
	var_330_int = 531288; // 0xd8c PushI
	SetMessage(var_330_int); // 0xd8d TObjFunc
	ClearReplies(); // 0xd8f TObjFunc
	var_331_int = 530452; // 0xd91 PushI
	var_332_int = -1; // 0xd92 PushI
	var_333_int = 31818; // 0xd93 PushI
	AddReply(var_331_int, var_332_int, var_333_int); // 0xd94 TObjFunc
	return 0; // 0xd96 Return
	
Label_3479:
	var_334_int = 23652; // 0xd97 PushI
	var_335_bool = var_51_bool == var_334_int; // 0xd98 Eq
	if(var_335_bool == 0) goto Label_3497; // 0xd99 JumpB
	var_336_string = ""; // 0xd9a PushV
	var_336_string = "Fear"; // 0xd9b MovS
	func_3150(var_52_cvector, var_336_string); // 0xd9c NEW_2
	var_337_int = 522479; // 0xd9e PushI
	SetMessage(var_337_int); // 0xd9f TObjFunc
	ClearReplies(); // 0xda1 TObjFunc
	var_338_int = 522480; // 0xda3 PushI
	var_339_int = 23654; // 0xda4 PushI
	var_340_int = 23653; // 0xda5 PushI
	AddReply(var_338_int, var_339_int, var_340_int); // 0xda6 TObjFunc
	return 0; // 0xda8 Return
	
Label_3497:
	var_341_int = 23654; // 0xda9 PushI
	var_342_bool = var_51_bool == var_341_int; // 0xdaa Eq
	if(var_342_bool == 0) goto Label_3515; // 0xdab JumpB
	var_343_string = ""; // 0xdac PushV
	var_343_string = "Fear"; // 0xdad MovS
	func_3150(var_52_cvector, var_343_string); // 0xdae NEW_2
	var_344_int = 522481; // 0xdb0 PushI
	SetMessage(var_344_int); // 0xdb1 TObjFunc
	ClearReplies(); // 0xdb3 TObjFunc
	var_345_int = 522482; // 0xdb5 PushI
	var_346_int = -1; // 0xdb6 PushI
	var_347_int = 23655; // 0xdb7 PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0xdb8 TObjFunc
	return 0; // 0xdba Return
	
Label_3515:
	var_348_int = 23656; // 0xdbb PushI
	var_349_bool = var_51_bool == var_348_int; // 0xdbc Eq
	if(var_349_bool == 0) goto Label_3538; // 0xdbd JumpB
	var_350_string = ""; // 0xdbe PushV
	var_350_string = "Strength"; // 0xdbf MovS
	func_3150(var_52_cvector, var_350_string); // 0xdc0 NEW_2
	var_351_int = 522483; // 0xdc2 PushI
	SetMessage(var_351_int); // 0xdc3 TObjFunc
	ClearReplies(); // 0xdc5 TObjFunc
	var_352_int = 522484; // 0xdc7 PushI
	var_353_int = 23658; // 0xdc8 PushI
	var_354_int = 23657; // 0xdc9 PushI
	AddReply(var_352_int, var_353_int, var_354_int); // 0xdca TObjFunc
	var_355_int = 522492; // 0xdcc PushI
	var_356_int = 23666; // 0xdcd PushI
	var_357_int = 23665; // 0xdce PushI
	AddReply(var_355_int, var_356_int, var_357_int); // 0xdcf TObjFunc
	return 0; // 0xdd1 Return
	
Label_3538:
	var_358_int = 23666; // 0xdd2 PushI
	var_359_bool = var_51_bool == var_358_int; // 0xdd3 Eq
	if(var_359_bool == 0) goto Label_3556; // 0xdd4 JumpB
	var_360_string = ""; // 0xdd5 PushV
	var_360_string = "Neutral"; // 0xdd6 MovS
	func_3150(var_52_cvector, var_360_string); // 0xdd7 NEW_2
	var_361_int = 522493; // 0xdd9 PushI
	SetMessage(var_361_int); // 0xdda TObjFunc
	ClearReplies(); // 0xddc TObjFunc
	var_362_int = 522494; // 0xdde PushI
	var_363_int = 23658; // 0xddf PushI
	var_364_int = 23667; // 0xde0 PushI
	AddReply(var_362_int, var_363_int, var_364_int); // 0xde1 TObjFunc
	return 0; // 0xde3 Return
	
Label_3556:
	var_365_int = 23658; // 0xde4 PushI
	var_366_bool = var_51_bool == var_365_int; // 0xde5 Eq
	if(var_366_bool == 0) goto Label_3579; // 0xde6 JumpB
	var_367_string = ""; // 0xde7 PushV
	var_367_string = "Strength"; // 0xde8 MovS
	func_3150(var_52_cvector, var_367_string); // 0xde9 NEW_2
	var_368_int = 522485; // 0xdeb PushI
	SetMessage(var_368_int); // 0xdec TObjFunc
	ClearReplies(); // 0xdee TObjFunc
	var_369_int = 522486; // 0xdf0 PushI
	var_370_int = 23660; // 0xdf1 PushI
	var_371_int = 23659; // 0xdf2 PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0xdf3 TObjFunc
	var_372_int = 522495; // 0xdf5 PushI
	var_373_int = 23670; // 0xdf6 PushI
	var_374_int = 23669; // 0xdf7 PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0xdf8 TObjFunc
	return 0; // 0xdfa Return
	
Label_3579:
	var_375_int = 23670; // 0xdfb PushI
	var_376_bool = var_51_bool == var_375_int; // 0xdfc Eq
	if(var_376_bool == 0) goto Label_3597; // 0xdfd JumpB
	var_377_string = ""; // 0xdfe PushV
	var_377_string = "Neutral"; // 0xdff MovS
	func_3150(var_52_cvector, var_377_string); // 0xe00 NEW_2
	var_378_int = 522496; // 0xe02 PushI
	SetMessage(var_378_int); // 0xe03 TObjFunc
	ClearReplies(); // 0xe05 TObjFunc
	var_379_int = 522497; // 0xe07 PushI
	var_380_int = 23662; // 0xe08 PushI
	var_381_int = 23671; // 0xe09 PushI
	AddReply(var_379_int, var_380_int, var_381_int); // 0xe0a TObjFunc
	return 0; // 0xe0c Return
	
Label_3597:
	var_382_int = 23660; // 0xe0d PushI
	var_383_bool = var_51_bool == var_382_int; // 0xe0e Eq
	if(var_383_bool == 0) goto Label_3615; // 0xe0f JumpB
	var_384_string = ""; // 0xe10 PushV
	var_384_string = "Strength"; // 0xe11 MovS
	func_3150(var_52_cvector, var_384_string); // 0xe12 NEW_2
	var_385_int = 522487; // 0xe14 PushI
	SetMessage(var_385_int); // 0xe15 TObjFunc
	ClearReplies(); // 0xe17 TObjFunc
	var_386_int = 522488; // 0xe19 PushI
	var_387_int = 23662; // 0xe1a PushI
	var_388_int = 23661; // 0xe1b PushI
	AddReply(var_386_int, var_387_int, var_388_int); // 0xe1c TObjFunc
	return 0; // 0xe1e Return
	
Label_3615:
	var_389_int = 23662; // 0xe1f PushI
	var_390_bool = var_51_bool == var_389_int; // 0xe20 Eq
	if(var_390_bool == 0) goto Label_3638; // 0xe21 JumpB
	var_391_string = ""; // 0xe22 PushV
	var_391_string = "Neutral"; // 0xe23 MovS
	func_3150(var_52_cvector, var_391_string); // 0xe24 NEW_2
	var_392_int = 522489; // 0xe26 PushI
	SetMessage(var_392_int); // 0xe27 TObjFunc
	ClearReplies(); // 0xe29 TObjFunc
	var_393_int = 522490; // 0xe2b PushI
	var_394_int = 23664; // 0xe2c PushI
	var_395_int = 23663; // 0xe2d PushI
	AddReply(var_393_int, var_394_int, var_395_int); // 0xe2e TObjFunc
	var_396_int = 531512; // 0xe30 PushI
	var_397_int = -1; // 0xe31 PushI
	var_398_int = 32866; // 0xe32 PushI
	AddReply(var_396_int, var_397_int, var_398_int); // 0xe33 TObjFunc
	return 0; // 0xe35 Return
	
Label_3638:
	var_399_int = 23664; // 0xe36 PushI
	var_400_bool = var_51_bool == var_399_int; // 0xe37 Eq
	if(var_400_bool == 0) goto Label_3656; // 0xe38 JumpB
	var_401_string = ""; // 0xe39 PushV
	var_401_string = "Neutral"; // 0xe3a MovS
	func_3150(var_52_cvector, var_401_string); // 0xe3b NEW_2
	var_402_int = 522491; // 0xe3d PushI
	SetMessage(var_402_int); // 0xe3e TObjFunc
	ClearReplies(); // 0xe40 TObjFunc
	var_403_int = 521928; // 0xe42 PushI
	var_404_int = -1; // 0xe43 PushI
	var_405_int = 23102; // 0xe44 PushI
	AddReply(var_403_int, var_404_int, var_405_int); // 0xe45 TObjFunc
	return 0; // 0xe47 Return
	
Label_3656:
	var_406_int = 32591; // 0xe48 PushI
	var_407_bool = var_51_bool == var_406_int; // 0xe49 Eq
	if(var_407_bool == 0) goto Label_3679; // 0xe4a JumpB
	var_408_string = ""; // 0xe4b PushV
	var_408_string = "Fear"; // 0xe4c MovS
	func_3150(var_52_cvector, var_408_string); // 0xe4d NEW_2
	var_409_int = 531277; // 0xe4f PushI
	SetMessage(var_409_int); // 0xe50 TObjFunc
	ClearReplies(); // 0xe52 TObjFunc
	var_410_int = 531278; // 0xe54 PushI
	var_411_int = 32593; // 0xe55 PushI
	var_412_int = 32592; // 0xe56 PushI
	AddReply(var_410_int, var_411_int, var_412_int); // 0xe57 TObjFunc
	var_413_int = 531281; // 0xe59 PushI
	var_414_int = 32464; // 0xe5a PushI
	var_415_int = 32595; // 0xe5b PushI
	AddReply(var_413_int, var_414_int, var_415_int); // 0xe5c TObjFunc
	return 0; // 0xe5e Return
	
Label_3679:
	var_416_int = 32593; // 0xe5f PushI
	var_417_bool = var_51_bool == var_416_int; // 0xe60 Eq
	if(var_417_bool == 0) goto Label_3702; // 0xe61 JumpB
	var_418_string = ""; // 0xe62 PushV
	var_418_string = "Impatience"; // 0xe63 MovS
	func_3150(var_52_cvector, var_418_string); // 0xe64 NEW_2
	var_419_int = 531279; // 0xe66 PushI
	SetMessage(var_419_int); // 0xe67 TObjFunc
	ClearReplies(); // 0xe69 TObjFunc
	var_420_int = 531155; // 0xe6b PushI
	var_421_int = 32464; // 0xe6c PushI
	var_422_int = 32463; // 0xe6d PushI
	AddReply(var_420_int, var_421_int, var_422_int); // 0xe6e TObjFunc
	var_423_int = 531280; // 0xe70 PushI
	var_424_int = -1; // 0xe71 PushI
	var_425_int = 32594; // 0xe72 PushI
	AddReply(var_423_int, var_424_int, var_425_int); // 0xe73 TObjFunc
	return 0; // 0xe75 Return
	
Label_3702:
	var_426_int = 32464; // 0xe76 PushI
	var_427_bool = var_51_bool == var_426_int; // 0xe77 Eq
	if(var_427_bool == 0) goto Label_3725; // 0xe78 JumpB
	var_428_string = ""; // 0xe79 PushV
	var_428_string = "Sympathy"; // 0xe7a MovS
	func_3150(var_52_cvector, var_428_string); // 0xe7b NEW_2
	var_429_int = 531156; // 0xe7d PushI
	SetMessage(var_429_int); // 0xe7e TObjFunc
	ClearReplies(); // 0xe80 TObjFunc
	var_430_int = 531157; // 0xe82 PushI
	var_431_int = -1; // 0xe83 PushI
	var_432_int = 32465; // 0xe84 PushI
	AddReply(var_430_int, var_431_int, var_432_int); // 0xe85 TObjFunc
	var_433_int = 531158; // 0xe87 PushI
	var_434_int = -1; // 0xe88 PushI
	var_435_int = 32466; // 0xe89 PushI
	AddReply(var_433_int, var_434_int, var_435_int); // 0xe8a TObjFunc
	return 0; // 0xe8c Return
	
Label_3725:
	var_3_string = 1; // 0xe8d TMovB
	var_436_bool = 0; // 0xe8e PushV
	func_6274(var_436_bool); // 0xe8f NEW_2
	if(var_436_bool == 0) goto Label_3733; // 0xe91 JumpB
	lshStopAnimation(); // 0xe92 Func
	goto Label_3735; // 0xe94 Jump
	
Label_3735:
	return 0; // 0xe97 Return
	
Label_3733:
	StopAnimation(); // 0xe95 Func
	
Label_3737:
	return 0; // 0xe99 Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	var_53_int = 1; // 0xfb1 PushI
	if(var_53_int == 0) goto Label_4418; // 0xfb2 JumpB
	func_6100(); // 0xfb4 NEW_2
	var_55_int = 31688; // 0xfb6 PushI
	var_56_bool = var_52_cvector == var_55_int; // 0xfb7 Eq
	if(var_56_bool == 0) goto Label_4035; // 0xfb8 JumpB
	var_57_object = Obj(); var_58_object = Obj(); // 0xfb9 PushV
	var_57_object = var_1_object; // 0xfba MovT
	var_58_object = var_0_object; // 0xfbb MovT
	func_6409(); // 0xfbc NEW_2
	var_120_object = Obj(); var_121_object = Obj(); // 0xfbe PushV
	var_120_object = var_1_object; // 0xfbf MovT
	var_121_object = var_0_object; // 0xfc0 MovT
	func_6672(); // 0xfc1 NEW_2
	
Label_4035:
	var_146_int = 31693; // 0xfc3 PushI
	var_147_bool = var_52_cvector == var_146_int; // 0xfc4 Eq
	if(var_147_bool == 0) goto Label_4048; // 0xfc5 JumpB
	var_148_object = Obj(); var_149_object = Obj(); // 0xfc6 PushV
	var_148_object = var_1_object; // 0xfc7 MovT
	var_149_object = var_0_object; // 0xfc8 MovT
	func_6409(); // 0xfc9 NEW_2
	var_150_object = Obj(); var_151_object = Obj(); // 0xfcb PushV
	var_150_object = var_1_object; // 0xfcc MovT
	var_151_object = var_0_object; // 0xfcd MovT
	func_6672(); // 0xfce NEW_2
	
Label_4048:
	var_152_int = 31722; // 0xfd0 PushI
	var_153_bool = var_52_cvector == var_152_int; // 0xfd1 Eq
	if(var_153_bool == 0) goto Label_4056; // 0xfd2 JumpB
	var_154_object = Obj(); var_155_object = Obj(); // 0xfd3 PushV
	var_154_object = var_1_object; // 0xfd4 MovT
	var_155_object = var_0_object; // 0xfd5 MovT
	func_6450(); // 0xfd6 NEW_2
	
Label_4056:
	var_167_int = 31679; // 0xfd8 PushI
	var_168_bool = var_51_bool == var_167_int; // 0xfd9 Eq
	if(var_168_bool == 0) goto Label_4196; // 0xfda JumpB
	var_169_bool = 0; // 0xfdb PushV
	var_169_bool = 0; // 0xfdc MovB
	var_170_bool = 0; // 0xfdd PushV
	var_170_bool = 0; // 0xfde MovB
	var_171_bool = 0; var_172_object = Obj(); // 0xfdf PushV
	var_172_object = var_1_object; // 0xfe0 MovT
	func_6831(var_172_object); // 0xfe1 NEW_2
	var_179_bool = var_171_bool == 0; // 0xfe3 Not
	if(var_179_bool == 0) goto Label_4076; // 0xfe4 JumpB
	var_180_bool = 0; var_181_object = Obj(); // 0xfe5 PushV
	var_181_object = var_1_object; // 0xfe6 MovT
	func_6867(var_181_object); // 0xfe7 NEW_2
	var_186_bool = var_180_bool == 0; // 0xfe9 Not
	if(var_186_bool == 0) goto Label_4076; // 0xfea JumpB
	var_170_bool = 1; // 0xfeb MovB
	
Label_4076:
	if(var_170_bool == 0) goto Label_4083; // 0xfec JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0xfed PushV
	var_188_object = var_1_object; // 0xfee MovT
	func_6903(var_187_bool, var_188_object); // 0xfef NEW_2
	if(var_187_bool == 0) goto Label_4083; // 0xff1 JumpB
	var_169_bool = 1; // 0xff2 MovB
	
Label_4083:
	if(var_169_bool == 0) goto Label_4104; // 0xff3 JumpB
	var_198_string = ""; // 0xff4 PushV
	var_198_string = "Neutral"; // 0xff5 MovS
	func_3994(var_52_cvector, var_198_string); // 0xff6 NEW_2
	var_215_int = 530291; // 0xff8 PushI
	SetMessage(var_215_int); // 0xff9 TObjFunc
	ClearReplies(); // 0xffb TObjFunc
	var_216_int = 531185; // 0xffd PushI
	var_217_int = -1; // 0xffe PushI
	var_218_int = 32490; // 0xfff PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x1000 TObjFunc
	var_219_int = 530292; // 0x1002 PushI
	var_220_int = -1; // 0x1003 PushI
	var_221_int = 31680; // 0x1004 PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x1005 TObjFunc
	return 0; // 0x1007 Return
	
Label_4104:
	var_222_bool = 0; // 0x1008 PushV
	var_222_bool = 0; // 0x1009 MovB
	var_223_bool = 0; var_224_object = Obj(); // 0x100a PushV
	var_224_object = var_1_object; // 0x100b MovT
	func_6843(var_224_object); // 0x100c NEW_2
	if(var_223_bool == 0) goto Label_4117; // 0x100e JumpB
	var_229_bool = 0; var_230_object = Obj(); // 0x100f PushV
	var_230_object = var_1_object; // 0x1010 MovT
	func_6903(var_229_bool, var_230_object); // 0x1011 NEW_2
	if(var_229_bool == 0) goto Label_4117; // 0x1013 JumpB
	var_222_bool = 1; // 0x1014 MovB
	
Label_4117:
	if(var_222_bool == 0) goto Label_4143; // 0x1015 JumpB
	var_231_object = Obj(); var_232_object = Obj(); // 0x1016 PushV
	var_231_object = var_1_object; // 0x1017 MovT
	var_232_object = var_0_object; // 0x1018 MovT
	func_6403(); // 0x1019 NEW_2
	var_235_string = ""; // 0x101b PushV
	var_235_string = "Impatience"; // 0x101c MovS
	func_3994(var_52_cvector, var_235_string); // 0x101d NEW_2
	var_236_int = 530293; // 0x101f PushI
	SetMessage(var_236_int); // 0x1020 TObjFunc
	ClearReplies(); // 0x1022 TObjFunc
	var_237_int = 531188; // 0x1024 PushI
	var_238_int = 32494; // 0x1025 PushI
	var_239_int = 32493; // 0x1026 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x1027 TObjFunc
	var_240_int = 531193; // 0x1029 PushI
	var_241_int = 32496; // 0x102a PushI
	var_242_int = 32498; // 0x102b PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x102c TObjFunc
	return 0; // 0x102e Return
	
Label_4143:
	var_243_string = ""; // 0x102f PushV
	var_243_string = "Neutral"; // 0x1030 MovS
	func_3994(var_52_cvector, var_243_string); // 0x1031 NEW_2
	var_244_int = 530302; // 0x1033 PushI
	SetMessage(var_244_int); // 0x1034 TObjFunc
	ClearReplies(); // 0x1036 TObjFunc
	var_245_bool = 0; // 0x1038 PushV
	var_245_bool = 0; // 0x1039 MovB
	var_246_bool = 0; var_247_object = Obj(); // 0x103a PushV
	var_247_object = var_1_object; // 0x103b MovT
	func_6855(var_247_object); // 0x103c NEW_2
	if(var_246_bool == 0) goto Label_4165; // 0x103e JumpB
	var_252_bool = 0; var_253_object = Obj(); // 0x103f PushV
	var_253_object = var_1_object; // 0x1040 MovT
	func_6903(var_252_bool, var_253_object); // 0x1041 NEW_2
	if(var_252_bool == 0) goto Label_4165; // 0x1043 JumpB
	var_245_bool = 1; // 0x1044 MovB
	
Label_4165:
	if(var_245_bool == 0) goto Label_4171; // 0x1045 JumpB
	var_254_int = 530303; // 0x1046 PushI
	var_255_int = 31692; // 0x1047 PushI
	var_256_int = 31691; // 0x1048 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x1049 TObjFunc
	
Label_4171:
	var_257_bool = 0; // 0x104b PushV
	var_257_bool = 0; // 0x104c MovB
	var_258_bool = 0; var_259_object = Obj(); // 0x104d PushV
	var_259_object = var_1_object; // 0x104e MovT
	func_6879(var_259_object); // 0x104f NEW_2
	if(var_258_bool == 0) goto Label_4184; // 0x1051 JumpB
	var_264_bool = 0; var_265_object = Obj(); // 0x1052 PushV
	var_265_object = var_1_object; // 0x1053 MovT
	func_6891(var_265_object); // 0x1054 NEW_2
	if(var_264_bool == 0) goto Label_4184; // 0x1056 JumpB
	var_257_bool = 1; // 0x1057 MovB
	
Label_4184:
	if(var_257_bool == 0) goto Label_4190; // 0x1058 JumpB
	var_270_int = 530333; // 0x1059 PushI
	var_271_int = 31721; // 0x105a PushI
	var_272_int = 31720; // 0x105b PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0x105c TObjFunc
	
Label_4190:
	var_273_int = 530306; // 0x105e PushI
	var_274_int = -1; // 0x105f PushI
	var_275_int = 31694; // 0x1060 PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0x1061 TObjFunc
	return 0; // 0x1063 Return
	
Label_4196:
	var_276_int = 31721; // 0x1064 PushI
	var_277_bool = var_51_bool == var_276_int; // 0x1065 Eq
	if(var_277_bool == 0) goto Label_4214; // 0x1066 JumpB
	var_278_string = ""; // 0x1067 PushV
	var_278_string = "Neutral"; // 0x1068 MovS
	func_3994(var_52_cvector, var_278_string); // 0x1069 NEW_2
	var_279_int = 530334; // 0x106b PushI
	SetMessage(var_279_int); // 0x106c TObjFunc
	ClearReplies(); // 0x106e TObjFunc
	var_280_int = 531186; // 0x1070 PushI
	var_281_int = 32492; // 0x1071 PushI
	var_282_int = 32491; // 0x1072 PushI
	AddReply(var_280_int, var_281_int, var_282_int); // 0x1073 TObjFunc
	return 0; // 0x1075 Return
	
Label_4214:
	var_283_int = 32492; // 0x1076 PushI
	var_284_bool = var_51_bool == var_283_int; // 0x1077 Eq
	if(var_284_bool == 0) goto Label_4232; // 0x1078 JumpB
	var_285_string = ""; // 0x1079 PushV
	var_285_string = "Neutral"; // 0x107a MovS
	func_3994(var_52_cvector, var_285_string); // 0x107b NEW_2
	var_286_int = 531187; // 0x107d PushI
	SetMessage(var_286_int); // 0x107e TObjFunc
	ClearReplies(); // 0x1080 TObjFunc
	var_287_int = 530335; // 0x1082 PushI
	var_288_int = -1; // 0x1083 PushI
	var_289_int = 31722; // 0x1084 PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0x1085 TObjFunc
	return 0; // 0x1087 Return
	
Label_4232:
	var_290_int = 31692; // 0x1088 PushI
	var_291_bool = var_51_bool == var_290_int; // 0x1089 Eq
	if(var_291_bool == 0) goto Label_4250; // 0x108a JumpB
	var_292_string = ""; // 0x108b PushV
	var_292_string = "Sympathy"; // 0x108c MovS
	func_3994(var_52_cvector, var_292_string); // 0x108d NEW_2
	var_293_int = 530304; // 0x108f PushI
	SetMessage(var_293_int); // 0x1090 TObjFunc
	ClearReplies(); // 0x1092 TObjFunc
	var_294_int = 530305; // 0x1094 PushI
	var_295_int = -1; // 0x1095 PushI
	var_296_int = 31693; // 0x1096 PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0x1097 TObjFunc
	return 0; // 0x1099 Return
	
Label_4250:
	var_297_int = 32494; // 0x109a PushI
	var_298_bool = var_51_bool == var_297_int; // 0x109b Eq
	if(var_298_bool == 0) goto Label_4273; // 0x109c JumpB
	var_299_string = ""; // 0x109d PushV
	var_299_string = "Impatience"; // 0x109e MovS
	func_3994(var_52_cvector, var_299_string); // 0x109f NEW_2
	var_300_int = 531189; // 0x10a1 PushI
	SetMessage(var_300_int); // 0x10a2 TObjFunc
	ClearReplies(); // 0x10a4 TObjFunc
	var_301_int = 531190; // 0x10a6 PushI
	var_302_int = 32496; // 0x10a7 PushI
	var_303_int = 32495; // 0x10a8 PushI
	AddReply(var_301_int, var_302_int, var_303_int); // 0x10a9 TObjFunc
	var_304_int = 531192; // 0x10ab PushI
	var_305_int = 32500; // 0x10ac PushI
	var_306_int = 32497; // 0x10ad PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0x10ae TObjFunc
	return 0; // 0x10b0 Return
	
Label_4273:
	var_307_int = 32500; // 0x10b1 PushI
	var_308_bool = var_51_bool == var_307_int; // 0x10b2 Eq
	if(var_308_bool == 0) goto Label_4296; // 0x10b3 JumpB
	var_309_string = ""; // 0x10b4 PushV
	var_309_string = "Neutral"; // 0x10b5 MovS
	func_3994(var_52_cvector, var_309_string); // 0x10b6 NEW_2
	var_310_int = 531194; // 0x10b8 PushI
	SetMessage(var_310_int); // 0x10b9 TObjFunc
	ClearReplies(); // 0x10bb TObjFunc
	var_311_int = 531196; // 0x10bd PushI
	var_312_int = 32496; // 0x10be PushI
	var_313_int = 32502; // 0x10bf PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0x10c0 TObjFunc
	var_314_int = 531195; // 0x10c2 PushI
	var_315_int = -1; // 0x10c3 PushI
	var_316_int = 32501; // 0x10c4 PushI
	AddReply(var_314_int, var_315_int, var_316_int); // 0x10c5 TObjFunc
	return 0; // 0x10c7 Return
	
Label_4296:
	var_317_int = 32496; // 0x10c8 PushI
	var_318_bool = var_51_bool == var_317_int; // 0x10c9 Eq
	if(var_318_bool == 0) goto Label_4319; // 0x10ca JumpB
	var_319_string = ""; // 0x10cb PushV
	var_319_string = "Impatience"; // 0x10cc MovS
	func_3994(var_52_cvector, var_319_string); // 0x10cd NEW_2
	var_320_int = 531191; // 0x10cf PushI
	SetMessage(var_320_int); // 0x10d0 TObjFunc
	ClearReplies(); // 0x10d2 TObjFunc
	var_321_int = 530294; // 0x10d4 PushI
	var_322_int = 31683; // 0x10d5 PushI
	var_323_int = 31682; // 0x10d6 PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0x10d7 TObjFunc
	var_324_int = 531197; // 0x10d9 PushI
	var_325_int = 31685; // 0x10da PushI
	var_326_int = 32504; // 0x10db PushI
	AddReply(var_324_int, var_325_int, var_326_int); // 0x10dc TObjFunc
	return 0; // 0x10de Return
	
Label_4319:
	var_327_int = 31683; // 0x10df PushI
	var_328_bool = var_51_bool == var_327_int; // 0x10e0 Eq
	if(var_328_bool == 0) goto Label_4337; // 0x10e1 JumpB
	var_329_string = ""; // 0x10e2 PushV
	var_329_string = "Neutral"; // 0x10e3 MovS
	func_3994(var_52_cvector, var_329_string); // 0x10e4 NEW_2
	var_330_int = 530295; // 0x10e6 PushI
	SetMessage(var_330_int); // 0x10e7 TObjFunc
	ClearReplies(); // 0x10e9 TObjFunc
	var_331_int = 530296; // 0x10eb PushI
	var_332_int = 31685; // 0x10ec PushI
	var_333_int = 31684; // 0x10ed PushI
	AddReply(var_331_int, var_332_int, var_333_int); // 0x10ee TObjFunc
	return 0; // 0x10f0 Return
	
Label_4337:
	var_334_int = 31685; // 0x10f1 PushI
	var_335_bool = var_51_bool == var_334_int; // 0x10f2 Eq
	if(var_335_bool == 0) goto Label_4360; // 0x10f3 JumpB
	var_336_string = ""; // 0x10f4 PushV
	var_336_string = "Neutral"; // 0x10f5 MovS
	func_3994(var_52_cvector, var_336_string); // 0x10f6 NEW_2
	var_337_int = 530297; // 0x10f8 PushI
	SetMessage(var_337_int); // 0x10f9 TObjFunc
	ClearReplies(); // 0x10fb TObjFunc
	var_338_int = 530298; // 0x10fd PushI
	var_339_int = 31687; // 0x10fe PushI
	var_340_int = 31686; // 0x10ff PushI
	AddReply(var_338_int, var_339_int, var_340_int); // 0x1100 TObjFunc
	var_341_int = 531198; // 0x1102 PushI
	var_342_int = 32507; // 0x1103 PushI
	var_343_int = 32506; // 0x1104 PushI
	AddReply(var_341_int, var_342_int, var_343_int); // 0x1105 TObjFunc
	return 0; // 0x1107 Return
	
Label_4360:
	var_344_int = 32507; // 0x1108 PushI
	var_345_bool = var_51_bool == var_344_int; // 0x1109 Eq
	if(var_345_bool == 0) goto Label_4383; // 0x110a JumpB
	var_346_string = ""; // 0x110b PushV
	var_346_string = "Neutral"; // 0x110c MovS
	func_3994(var_52_cvector, var_346_string); // 0x110d NEW_2
	var_347_int = 531199; // 0x110f PushI
	SetMessage(var_347_int); // 0x1110 TObjFunc
	ClearReplies(); // 0x1112 TObjFunc
	var_348_int = 531200; // 0x1114 PushI
	var_349_int = 31687; // 0x1115 PushI
	var_350_int = 32508; // 0x1116 PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0x1117 TObjFunc
	var_351_int = 531201; // 0x1119 PushI
	var_352_int = -1; // 0x111a PushI
	var_353_int = 32509; // 0x111b PushI
	AddReply(var_351_int, var_352_int, var_353_int); // 0x111c TObjFunc
	return 0; // 0x111e Return
	
Label_4383:
	var_354_int = 31687; // 0x111f PushI
	var_355_bool = var_51_bool == var_354_int; // 0x1120 Eq
	if(var_355_bool == 0) goto Label_4406; // 0x1121 JumpB
	var_356_string = ""; // 0x1122 PushV
	var_356_string = "Neutral"; // 0x1123 MovS
	func_3994(var_52_cvector, var_356_string); // 0x1124 NEW_2
	var_357_int = 530299; // 0x1126 PushI
	SetMessage(var_357_int); // 0x1127 TObjFunc
	ClearReplies(); // 0x1129 TObjFunc
	var_358_int = 530300; // 0x112b PushI
	var_359_int = -1; // 0x112c PushI
	var_360_int = 31688; // 0x112d PushI
	AddReply(var_358_int, var_359_int, var_360_int); // 0x112e TObjFunc
	var_361_int = 530301; // 0x1130 PushI
	var_362_int = -1; // 0x1131 PushI
	var_363_int = 31689; // 0x1132 PushI
	AddReply(var_361_int, var_362_int, var_363_int); // 0x1133 TObjFunc
	return 0; // 0x1135 Return
	
Label_4406:
	var_3_string = 1; // 0x1136 TMovB
	var_364_bool = 0; // 0x1137 PushV
	func_6274(var_364_bool); // 0x1138 NEW_2
	if(var_364_bool == 0) goto Label_4414; // 0x113a JumpB
	lshStopAnimation(); // 0x113b Func
	goto Label_4416; // 0x113d Jump
	
Label_4416:
	return 0; // 0x1140 Return
	
Label_4414:
	StopAnimation(); // 0x113e Func
	
Label_4418:
	return 0; // 0x1142 Return
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	var_53_int = 1; // 0x1212 PushI
	if(var_53_int == 0) goto Label_4973; // 0x1213 JumpB
	func_6100(); // 0x1215 NEW_2
	var_55_int = 32424; // 0x1217 PushI
	var_56_bool = var_52_cvector == var_55_int; // 0x1218 Eq
	if(var_56_bool == 0) goto Label_4639; // 0x1219 JumpB
	var_57_object = Obj(); var_58_object = Obj(); // 0x121a PushV
	var_57_object = var_1_object; // 0x121b MovT
	var_58_object = var_0_object; // 0x121c MovT
	func_6563(); // 0x121d NEW_2
	
Label_4639:
	var_100_int = 32430; // 0x121f PushI
	var_101_bool = var_52_cvector == var_100_int; // 0x1220 Eq
	if(var_101_bool == 0) goto Label_4647; // 0x1221 JumpB
	var_102_object = Obj(); var_103_object = Obj(); // 0x1222 PushV
	var_102_object = var_1_object; // 0x1223 MovT
	var_103_object = var_0_object; // 0x1224 MovT
	func_6563(); // 0x1225 NEW_2
	
Label_4647:
	var_104_int = 32449; // 0x1227 PushI
	var_105_bool = var_52_cvector == var_104_int; // 0x1228 Eq
	if(var_105_bool == 0) goto Label_4665; // 0x1229 JumpB
	var_106_object = Obj(); var_107_object = Obj(); // 0x122a PushV
	var_106_object = var_1_object; // 0x122b MovT
	var_107_object = var_0_object; // 0x122c MovT
	func_6579(); // 0x122d NEW_2
	var_122_object = Obj(); var_123_object = Obj(); // 0x122f PushV
	var_122_object = var_1_object; // 0x1230 MovT
	var_123_object = var_0_object; // 0x1231 MovT
	func_6655(var_123_object); // 0x1232 NEW_2
	var_146_object = Obj(); var_147_object = Obj(); // 0x1234 PushV
	var_146_object = var_1_object; // 0x1235 MovT
	var_147_object = var_0_object; // 0x1236 MovT
	func_6466(); // 0x1237 NEW_2
	
Label_4665:
	var_150_int = 32423; // 0x1239 PushI
	var_151_bool = var_51_bool == var_150_int; // 0x123a Eq
	if(var_151_bool == 0) goto Label_4733; // 0x123b JumpB
	var_152_bool = 0; var_153_object = Obj(); // 0x123c PushV
	var_153_object = var_1_object; // 0x123d MovT
	func_6925(var_153_object); // 0x123e NEW_2
	if(var_152_bool == 0) goto Label_4698; // 0x1240 JumpB
	var_160_object = Obj(); var_161_object = Obj(); // 0x1241 PushV
	var_160_object = var_1_object; // 0x1242 MovT
	var_161_object = var_0_object; // 0x1243 MovT
	func_6557(); // 0x1244 NEW_2
	var_164_string = ""; // 0x1246 PushV
	var_164_string = "Neutral"; // 0x1247 MovS
	func_4603(var_52_cvector, var_164_string); // 0x1248 NEW_2
	var_181_int = 531105; // 0x124a PushI
	SetMessage(var_181_int); // 0x124b TObjFunc
	ClearReplies(); // 0x124d TObjFunc
	var_182_int = 531107; // 0x124f PushI
	var_183_int = 32678; // 0x1250 PushI
	var_184_int = 32425; // 0x1251 PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x1252 TObjFunc
	var_185_int = 531353; // 0x1254 PushI
	var_186_int = 32678; // 0x1255 PushI
	var_187_int = 32685; // 0x1256 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x1257 TObjFunc
	return 0; // 0x1259 Return
	
Label_4698:
	var_188_string = ""; // 0x125a PushV
	var_188_string = "Neutral"; // 0x125b MovS
	func_4603(var_52_cvector, var_188_string); // 0x125c NEW_2
	var_189_int = 531108; // 0x125e PushI
	SetMessage(var_189_int); // 0x125f TObjFunc
	ClearReplies(); // 0x1261 TObjFunc
	var_190_bool = 0; var_191_object = Obj(); // 0x1263 PushV
	var_191_object = var_1_object; // 0x1264 MovT
	func_6937(var_191_object); // 0x1265 NEW_2
	if(var_190_bool == 0) goto Label_4717; // 0x1267 JumpB
	var_196_int = 531109; // 0x1268 PushI
	var_197_int = 32429; // 0x1269 PushI
	var_198_int = 32427; // 0x126a PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x126b TObjFunc
	
Label_4717:
	var_199_bool = 0; var_200_object = Obj(); // 0x126d PushV
	var_200_object = var_1_object; // 0x126e MovT
	func_6949(var_200_object); // 0x126f NEW_2
	if(var_199_bool == 0) goto Label_4727; // 0x1271 JumpB
	var_205_int = 531129; // 0x1272 PushI
	var_206_int = 32448; // 0x1273 PushI
	var_207_int = 32447; // 0x1274 PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x1275 TObjFunc
	
Label_4727:
	var_208_int = 531110; // 0x1277 PushI
	var_209_int = -1; // 0x1278 PushI
	var_210_int = 32428; // 0x1279 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x127a TObjFunc
	return 0; // 0x127c Return
	
Label_4733:
	var_211_int = 32448; // 0x127d PushI
	var_212_bool = var_51_bool == var_211_int; // 0x127e Eq
	if(var_212_bool == 0) goto Label_4751; // 0x127f JumpB
	var_213_string = ""; // 0x1280 PushV
	var_213_string = "Neutral"; // 0x1281 MovS
	func_4603(var_52_cvector, var_213_string); // 0x1282 NEW_2
	var_214_int = 531130; // 0x1284 PushI
	SetMessage(var_214_int); // 0x1285 TObjFunc
	ClearReplies(); // 0x1287 TObjFunc
	var_215_int = 531365; // 0x1289 PushI
	var_216_int = 32702; // 0x128a PushI
	var_217_int = 32701; // 0x128b PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x128c TObjFunc
	return 0; // 0x128e Return
	
Label_4751:
	var_218_int = 32702; // 0x128f PushI
	var_219_bool = var_51_bool == var_218_int; // 0x1290 Eq
	if(var_219_bool == 0) goto Label_4774; // 0x1291 JumpB
	var_220_string = ""; // 0x1292 PushV
	var_220_string = "Sympathy"; // 0x1293 MovS
	func_4603(var_52_cvector, var_220_string); // 0x1294 NEW_2
	var_221_int = 531366; // 0x1296 PushI
	SetMessage(var_221_int); // 0x1297 TObjFunc
	ClearReplies(); // 0x1299 TObjFunc
	var_222_int = 531367; // 0x129b PushI
	var_223_int = 32704; // 0x129c PushI
	var_224_int = 32703; // 0x129d PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x129e TObjFunc
	var_225_int = 531369; // 0x12a0 PushI
	var_226_int = 32704; // 0x12a1 PushI
	var_227_int = 32705; // 0x12a2 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x12a3 TObjFunc
	return 0; // 0x12a5 Return
	
Label_4774:
	var_228_int = 32704; // 0x12a6 PushI
	var_229_bool = var_51_bool == var_228_int; // 0x12a7 Eq
	if(var_229_bool == 0) goto Label_4792; // 0x12a8 JumpB
	var_230_string = ""; // 0x12a9 PushV
	var_230_string = "Fear"; // 0x12aa MovS
	func_4603(var_52_cvector, var_230_string); // 0x12ab NEW_2
	var_231_int = 531368; // 0x12ad PushI
	SetMessage(var_231_int); // 0x12ae TObjFunc
	ClearReplies(); // 0x12b0 TObjFunc
	var_232_int = 531131; // 0x12b2 PushI
	var_233_int = -1; // 0x12b3 PushI
	var_234_int = 32449; // 0x12b4 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x12b5 TObjFunc
	return 0; // 0x12b7 Return
	
Label_4792:
	var_235_int = 32429; // 0x12b8 PushI
	var_236_bool = var_51_bool == var_235_int; // 0x12b9 Eq
	if(var_236_bool == 0) goto Label_4810; // 0x12ba JumpB
	var_237_string = ""; // 0x12bb PushV
	var_237_string = "Neutral"; // 0x12bc MovS
	func_4603(var_52_cvector, var_237_string); // 0x12bd NEW_2
	var_238_int = 531111; // 0x12bf PushI
	SetMessage(var_238_int); // 0x12c0 TObjFunc
	ClearReplies(); // 0x12c2 TObjFunc
	var_239_int = 531112; // 0x12c4 PushI
	var_240_int = -1; // 0x12c5 PushI
	var_241_int = 32430; // 0x12c6 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x12c7 TObjFunc
	return 0; // 0x12c9 Return
	
Label_4810:
	var_242_int = 32678; // 0x12ca PushI
	var_243_bool = var_51_bool == var_242_int; // 0x12cb Eq
	if(var_243_bool == 0) goto Label_4833; // 0x12cc JumpB
	var_244_string = ""; // 0x12cd PushV
	var_244_string = "Fear"; // 0x12ce MovS
	func_4603(var_52_cvector, var_244_string); // 0x12cf NEW_2
	var_245_int = 531346; // 0x12d1 PushI
	SetMessage(var_245_int); // 0x12d2 TObjFunc
	ClearReplies(); // 0x12d4 TObjFunc
	var_246_int = 531347; // 0x12d6 PushI
	var_247_int = 32680; // 0x12d7 PushI
	var_248_int = 32679; // 0x12d8 PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x12d9 TObjFunc
	var_249_int = 531354; // 0x12db PushI
	var_250_int = 32687; // 0x12dc PushI
	var_251_int = 32686; // 0x12dd PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x12de TObjFunc
	return 0; // 0x12e0 Return
	
Label_4833:
	var_252_int = 32687; // 0x12e1 PushI
	var_253_bool = var_51_bool == var_252_int; // 0x12e2 Eq
	if(var_253_bool == 0) goto Label_4856; // 0x12e3 JumpB
	var_254_string = ""; // 0x12e4 PushV
	var_254_string = "Neutral"; // 0x12e5 MovS
	func_4603(var_52_cvector, var_254_string); // 0x12e6 NEW_2
	var_255_int = 531355; // 0x12e8 PushI
	SetMessage(var_255_int); // 0x12e9 TObjFunc
	ClearReplies(); // 0x12eb TObjFunc
	var_256_int = 531356; // 0x12ed PushI
	var_257_int = 32680; // 0x12ee PushI
	var_258_int = 32688; // 0x12ef PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x12f0 TObjFunc
	var_259_int = 531357; // 0x12f2 PushI
	var_260_int = -1; // 0x12f3 PushI
	var_261_int = 32689; // 0x12f4 PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x12f5 TObjFunc
	return 0; // 0x12f7 Return
	
Label_4856:
	var_262_int = 32680; // 0x12f8 PushI
	var_263_bool = var_51_bool == var_262_int; // 0x12f9 Eq
	if(var_263_bool == 0) goto Label_4879; // 0x12fa JumpB
	var_264_string = ""; // 0x12fb PushV
	var_264_string = "Fear"; // 0x12fc MovS
	func_4603(var_52_cvector, var_264_string); // 0x12fd NEW_2
	var_265_int = 531348; // 0x12ff PushI
	SetMessage(var_265_int); // 0x1300 TObjFunc
	ClearReplies(); // 0x1302 TObjFunc
	var_266_int = 531349; // 0x1304 PushI
	var_267_int = 32682; // 0x1305 PushI
	var_268_int = 32681; // 0x1306 PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x1307 TObjFunc
	var_269_int = 531358; // 0x1309 PushI
	var_270_int = 32692; // 0x130a PushI
	var_271_int = 32691; // 0x130b PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0x130c TObjFunc
	return 0; // 0x130e Return
	
Label_4879:
	var_272_int = 32692; // 0x130f PushI
	var_273_bool = var_51_bool == var_272_int; // 0x1310 Eq
	if(var_273_bool == 0) goto Label_4897; // 0x1311 JumpB
	var_274_string = ""; // 0x1312 PushV
	var_274_string = "Impatience"; // 0x1313 MovS
	func_4603(var_52_cvector, var_274_string); // 0x1314 NEW_2
	var_275_int = 531359; // 0x1316 PushI
	SetMessage(var_275_int); // 0x1317 TObjFunc
	ClearReplies(); // 0x1319 TObjFunc
	var_276_int = 531360; // 0x131b PushI
	var_277_int = 32682; // 0x131c PushI
	var_278_int = 32693; // 0x131d PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x131e TObjFunc
	return 0; // 0x1320 Return
	
Label_4897:
	var_279_int = 32682; // 0x1321 PushI
	var_280_bool = var_51_bool == var_279_int; // 0x1322 Eq
	if(var_280_bool == 0) goto Label_4920; // 0x1323 JumpB
	var_281_string = ""; // 0x1324 PushV
	var_281_string = "Strength"; // 0x1325 MovS
	func_4603(var_52_cvector, var_281_string); // 0x1326 NEW_2
	var_282_int = 531350; // 0x1328 PushI
	SetMessage(var_282_int); // 0x1329 TObjFunc
	ClearReplies(); // 0x132b TObjFunc
	var_283_int = 531351; // 0x132d PushI
	var_284_int = 32684; // 0x132e PushI
	var_285_int = 32683; // 0x132f PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0x1330 TObjFunc
	var_286_int = 531362; // 0x1332 PushI
	var_287_int = 32697; // 0x1333 PushI
	var_288_int = 32696; // 0x1334 PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x1335 TObjFunc
	return 0; // 0x1337 Return
	
Label_4920:
	var_289_int = 32697; // 0x1338 PushI
	var_290_bool = var_51_bool == var_289_int; // 0x1339 Eq
	if(var_290_bool == 0) goto Label_4938; // 0x133a JumpB
	var_291_string = ""; // 0x133b PushV
	var_291_string = "Neutral"; // 0x133c MovS
	func_4603(var_52_cvector, var_291_string); // 0x133d NEW_2
	var_292_int = 531363; // 0x133f PushI
	SetMessage(var_292_int); // 0x1340 TObjFunc
	ClearReplies(); // 0x1342 TObjFunc
	var_293_int = 531364; // 0x1344 PushI
	var_294_int = 32684; // 0x1345 PushI
	var_295_int = 32698; // 0x1346 PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0x1347 TObjFunc
	return 0; // 0x1349 Return
	
Label_4938:
	var_296_int = 32684; // 0x134a PushI
	var_297_bool = var_51_bool == var_296_int; // 0x134b Eq
	if(var_297_bool == 0) goto Label_4961; // 0x134c JumpB
	var_298_string = ""; // 0x134d PushV
	var_298_string = "Strength"; // 0x134e MovS
	func_4603(var_52_cvector, var_298_string); // 0x134f NEW_2
	var_299_int = 531352; // 0x1351 PushI
	SetMessage(var_299_int); // 0x1352 TObjFunc
	ClearReplies(); // 0x1354 TObjFunc
	var_300_int = 531106; // 0x1356 PushI
	var_301_int = -1; // 0x1357 PushI
	var_302_int = 32424; // 0x1358 PushI
	AddReply(var_300_int, var_301_int, var_302_int); // 0x1359 TObjFunc
	var_303_int = 531361; // 0x135b PushI
	var_304_int = -1; // 0x135c PushI
	var_305_int = 32695; // 0x135d PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x135e TObjFunc
	return 0; // 0x1360 Return
	
Label_4961:
	var_3_string = 1; // 0x1361 TMovB
	var_306_bool = 0; // 0x1362 PushV
	func_6274(var_306_bool); // 0x1363 NEW_2
	if(var_306_bool == 0) goto Label_4969; // 0x1365 JumpB
	lshStopAnimation(); // 0x1366 Func
	goto Label_4971; // 0x1368 Jump
	
Label_4971:
	return 0; // 0x136b Return
	
Label_4969:
	StopAnimation(); // 0x1369 Func
	
Label_4973:
	return 0; // 0x136d Return
}


task_17_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_int, var_46_int, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	var_53_int = 1; // 0x1415 PushI
	if(var_53_int == 0) goto Label_5327; // 0x1416 JumpB
	func_6100(); // 0x1418 NEW_2
	var_55_int = 36934; // 0x141a PushI
	var_56_bool = var_52_cvector == var_55_int; // 0x141b Eq
	if(var_56_bool == 0) goto Label_5154; // 0x141c JumpB
	var_57_object = Obj(); var_58_object = Obj(); // 0x141d PushV
	var_57_object = var_1_object; // 0x141e MovT
	var_58_object = var_0_object; // 0x141f MovT
	func_6637(); // 0x1420 NEW_2
	
Label_5154:
	var_61_int = 36933; // 0x1422 PushI
	var_62_bool = var_51_bool == var_61_int; // 0x1423 Eq
	if(var_62_bool == 0) goto Label_5182; // 0x1424 JumpB
	var_63_string = ""; // 0x1425 PushV
	var_63_string = "Neutral"; // 0x1426 MovS
	func_5118(var_52_cvector, var_63_string); // 0x1427 NEW_2
	var_80_int = 535258; // 0x1429 PushI
	SetMessage(var_80_int); // 0x142a TObjFunc
	ClearReplies(); // 0x142c TObjFunc
	var_81_bool = 0; var_82_object = Obj(); // 0x142e PushV
	var_82_object = var_1_object; // 0x142f MovT
	func_6997(var_82_object); // 0x1430 NEW_2
	if(var_81_bool == 0) goto Label_5176; // 0x1432 JumpB
	var_89_int = 535259; // 0x1433 PushI
	var_90_int = 36983; // 0x1434 PushI
	var_91_int = 36934; // 0x1435 PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x1436 TObjFunc
	
Label_5176:
	var_92_int = 535304; // 0x1438 PushI
	var_93_int = -1; // 0x1439 PushI
	var_94_int = 36982; // 0x143a PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x143b TObjFunc
	return 0; // 0x143d Return
	
Label_5182:
	var_95_int = 36983; // 0x143e PushI
	var_96_bool = var_51_bool == var_95_int; // 0x143f Eq
	if(var_96_bool == 0) goto Label_5205; // 0x1440 JumpB
	var_97_string = ""; // 0x1441 PushV
	var_97_string = "Strength"; // 0x1442 MovS
	func_5118(var_52_cvector, var_97_string); // 0x1443 NEW_2
	var_98_int = 535305; // 0x1445 PushI
	SetMessage(var_98_int); // 0x1446 TObjFunc
	ClearReplies(); // 0x1448 TObjFunc
	var_99_int = 535306; // 0x144a PushI
	var_100_int = 36985; // 0x144b PushI
	var_101_int = 36984; // 0x144c PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x144d TObjFunc
	var_102_int = 535318; // 0x144f PushI
	var_103_int = 36998; // 0x1450 PushI
	var_104_int = 36997; // 0x1451 PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x1452 TObjFunc
	return 0; // 0x1454 Return
	
Label_5205:
	var_105_int = 36998; // 0x1455 PushI
	var_106_bool = var_51_bool == var_105_int; // 0x1456 Eq
	if(var_106_bool == 0) goto Label_5228; // 0x1457 JumpB
	var_107_string = ""; // 0x1458 PushV
	var_107_string = "Neutral"; // 0x1459 MovS
	func_5118(var_52_cvector, var_107_string); // 0x145a NEW_2
	var_108_int = 535319; // 0x145c PushI
	SetMessage(var_108_int); // 0x145d TObjFunc
	ClearReplies(); // 0x145f TObjFunc
	var_109_int = 535320; // 0x1461 PushI
	var_110_int = 36990; // 0x1462 PushI
	var_111_int = 36999; // 0x1463 PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0x1464 TObjFunc
	var_112_int = 535321; // 0x1466 PushI
	var_113_int = 36985; // 0x1467 PushI
	var_114_int = 37001; // 0x1468 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x1469 TObjFunc
	return 0; // 0x146b Return
	
Label_5228:
	var_115_int = 36985; // 0x146c PushI
	var_116_bool = var_51_bool == var_115_int; // 0x146d Eq
	if(var_116_bool == 0) goto Label_5246; // 0x146e JumpB
	var_117_string = ""; // 0x146f PushV
	var_117_string = "Strength"; // 0x1470 MovS
	func_5118(var_52_cvector, var_117_string); // 0x1471 NEW_2
	var_118_int = 535307; // 0x1473 PushI
	SetMessage(var_118_int); // 0x1474 TObjFunc
	ClearReplies(); // 0x1476 TObjFunc
	var_119_int = 535308; // 0x1478 PushI
	var_120_int = 36987; // 0x1479 PushI
	var_121_int = 36986; // 0x147a PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x147b TObjFunc
	return 0; // 0x147d Return
	
Label_5246:
	var_122_int = 36987; // 0x147e PushI
	var_123_bool = var_51_bool == var_122_int; // 0x147f Eq
	if(var_123_bool == 0) goto Label_5269; // 0x1480 JumpB
	var_124_string = ""; // 0x1481 PushV
	var_124_string = "Strength"; // 0x1482 MovS
	func_5118(var_52_cvector, var_124_string); // 0x1483 NEW_2
	var_125_int = 535309; // 0x1485 PushI
	SetMessage(var_125_int); // 0x1486 TObjFunc
	ClearReplies(); // 0x1488 TObjFunc
	var_126_int = 535311; // 0x148a PushI
	var_127_int = 36990; // 0x148b PushI
	var_128_int = 36989; // 0x148c PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x148d TObjFunc
	var_129_int = 535313; // 0x148f PushI
	var_130_int = 36990; // 0x1490 PushI
	var_131_int = 36991; // 0x1491 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x1492 TObjFunc
	return 0; // 0x1494 Return
	
Label_5269:
	var_132_int = 36990; // 0x1495 PushI
	var_133_bool = var_51_bool == var_132_int; // 0x1496 Eq
	if(var_133_bool == 0) goto Label_5292; // 0x1497 JumpB
	var_134_string = ""; // 0x1498 PushV
	var_134_string = "Sympathy"; // 0x1499 MovS
	func_5118(var_52_cvector, var_134_string); // 0x149a NEW_2
	var_135_int = 535312; // 0x149c PushI
	SetMessage(var_135_int); // 0x149d TObjFunc
	ClearReplies(); // 0x149f TObjFunc
	var_136_int = 535310; // 0x14a1 PushI
	var_137_int = 36994; // 0x14a2 PushI
	var_138_int = 36988; // 0x14a3 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x14a4 TObjFunc
	var_139_int = 535314; // 0x14a6 PushI
	var_140_int = -1; // 0x14a7 PushI
	var_141_int = 36993; // 0x14a8 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x14a9 TObjFunc
	return 0; // 0x14ab Return
	
Label_5292:
	var_142_int = 36994; // 0x14ac PushI
	var_143_bool = var_51_bool == var_142_int; // 0x14ad Eq
	if(var_143_bool == 0) goto Label_5315; // 0x14ae JumpB
	var_144_string = ""; // 0x14af PushV
	var_144_string = "Sympathy"; // 0x14b0 MovS
	func_5118(var_52_cvector, var_144_string); // 0x14b1 NEW_2
	var_145_int = 535315; // 0x14b3 PushI
	SetMessage(var_145_int); // 0x14b4 TObjFunc
	ClearReplies(); // 0x14b6 TObjFunc
	var_146_int = 535316; // 0x14b8 PushI
	var_147_int = -1; // 0x14b9 PushI
	var_148_int = 36995; // 0x14ba PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x14bb TObjFunc
	var_149_int = 535317; // 0x14bd PushI
	var_150_int = -1; // 0x14be PushI
	var_151_int = 36996; // 0x14bf PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x14c0 TObjFunc
	return 0; // 0x14c2 Return
	
Label_5315:
	var_3_string = 1; // 0x14c3 TMovB
	var_152_bool = 0; // 0x14c4 PushV
	func_6274(var_152_bool); // 0x14c5 NEW_2
	if(var_152_bool == 0) goto Label_5323; // 0x14c7 JumpB
	lshStopAnimation(); // 0x14c8 Func
	goto Label_5325; // 0x14ca Jump
	
Label_5325:
	return 0; // 0x14cd Return
	
Label_5323:
	StopAnimation(); // 0x14cb Func
	
Label_5327:
	return 0; // 0x14cf Return
}


task_19_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_int, var_51_int, var_52_cvector)
{
	var_53_int = 1; // 0x1572 PushI
	if(var_53_int == 0) goto Label_5530; // 0x1573 JumpB
	func_6100(); // 0x1575 NEW_2
	var_55_int = 42560; // 0x1577 PushI
	var_56_bool = var_51_int == var_55_int; // 0x1578 Eq
	if(var_56_bool == 0) goto Label_5518; // 0x1579 JumpB
	var_57_string = ""; // 0x157a PushV
	var_57_string = "Neutral"; // 0x157b MovS
	func_5467(var_52_cvector, var_57_string); // 0x157c NEW_2
	var_74_int = 540551; // 0x157e PushI
	SetMessage(var_74_int); // 0x157f TObjFunc
	ClearReplies(); // 0x1581 TObjFunc
	var_75_int = 540552; // 0x1583 PushI
	var_76_int = -1; // 0x1584 PushI
	var_77_int = 42561; // 0x1585 PushI
	AddReply(var_75_int, var_76_int, var_77_int); // 0x1586 TObjFunc
	var_78_int = 540795; // 0x1588 PushI
	var_79_int = -1; // 0x1589 PushI
	var_80_int = 42844; // 0x158a PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0x158b TObjFunc
	return 0; // 0x158d Return
	
Label_5518:
	var_3_string = 1; // 0x158e TMovB
	var_81_bool = 0; // 0x158f PushV
	func_6274(var_81_bool); // 0x1590 NEW_2
	if(var_81_bool == 0) goto Label_5526; // 0x1592 JumpB
	lshStopAnimation(); // 0x1593 Func
	goto Label_5528; // 0x1595 Jump
	
Label_5528:
	return 0; // 0x1598 Return
	
Label_5526:
	StopAnimation(); // 0x1596 Func
	
Label_5530:
	return 0; // 0x159a Return
}


task_20_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_cvector, var_51_int)
{
	var_52_int = 10; // 0x15e8 PushI
	var_53_bool = var_51_int == var_52_int; // 0x15e9 Eq
	if(var_53_bool == 0) goto Label_5644; // 0x15ea JumpB
	func_5603(); // 0x15ec NEW_2
	var_55_bool = 0; // 0x15ee PushV
	var_55_bool = 0; // 0x15ef MovB
	var_56_bool = 0; // 0x15f0 PushV
	func_5824(var_56_bool); // 0x15f1 NEW_2
	if(var_56_bool == 0) goto Label_5625; // 0x15f3 JumpB
	var_59_bool = 0; // 0x15f4 PushV
	func_5572(var_59_bool); // 0x15f5 NEW_2
	if(var_59_bool == 0) goto Label_5625; // 0x15f7 JumpB
	var_55_bool = 1; // 0x15f8 MovB
	
Label_5625:
	if(var_55_bool == 0) goto Label_5638; // 0x15f9 JumpB
	var_76_bool = 0; // 0x15fa PushV
	func_5552(var_76_bool); // 0x15fb NEW_2
	if(var_76_bool == 0) goto Label_5637; // 0x15fd JumpB
	var_95_bool = 0; var_96_object = Obj(); // 0x15fe PushV
	var_97_object = Obj(); // 0x15ff PushV
	func_6107(var_97_object); // 0x1600 NEW_2
	var_96_object = var_97_object; // 0x1601 Mov
	func_5974(var_96_object); // 0x1603 NEW_2
	
Label_5637:
	goto Label_5644; // 0x1605 Jump
	
Label_5644:
	return 0; // 0x160c Return
	
Label_5638:
	func_5567(var_51_int); // 0x1607 NEW_2
	func_5594(); // 0x160a NEW_2
}


task_20_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_cvector)
{
	func_5785(); // 0x160e NEW_2
	func_5603(); // 0x1611 NEW_2
	lshStopSpeech(); // 0x1613 Func
	lshStopAnimation(); // 0x1615 Func
	StopAsync(); // 0x1617 Func
	Hold(); // 0x1619 Func
	return 0; // 0x161b Return
}


task_20_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_cvector)
{
	StopGroup0(); // 0x161c Func
	func_5603(); // 0x161f NEW_2
	var_52_string = ""; // 0x1621 PushV
	var_52_string = "Neutral"; // 0x1622 MovS
	func_6054(var_52_string); // 0x1623 NEW_2
	func_5594(); // 0x1626 NEW_2
	return 0; // 0x1628 Return
}


task_20_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_cvector, var_51_bool)
{
	var_52_bool = var_51_bool; // 0x162a Push
	if(var_52_bool == 0) goto Label_5680; // 0x162b JumpB
	func_5594(); // 0x162d NEW_2
	goto Label_5684; // 0x162f Jump
	
Label_5684:
	return 0; // 0x1634 Return
	
Label_5680:
	var_58_string = ""; // 0x1630 PushV
	var_58_string = "Neutral"; // 0x1631 MovS
	func_6054(var_58_string); // 0x1632 NEW_2
}


task_20_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_cvector, var_51_object)
{
	var_52_bool = 0; var_53_bool = 0; // 0x1635 PushV
	IsOverrideActive(var_53_bool); // 0x1636 Func
	var_54_bool = var_53_bool == 0; // 0x1638 Not
	if(var_54_bool == 0) goto Label_5713; // 0x1639 JumpB
	EventDisable(0); // 0x163a EventDisable
	func_5785(); // 0x163c NEW_2
	var_55_bool = 0; var_56_object = Obj(); // 0x163e PushV
	var_56_object = var_51_object; // 0x163f Mov
	func_5815(var_56_object); // 0x1640 NEW_2
	EventEnable(0); // 0x1642 EventEnable
	var_69_object = Obj(); // 0x1643 PushV
	var_69_object = var_51_object; // 0x1644 Mov
	func_7478(var_53_bool, var_69_object); // 0x1645 NEW_2
	var_1156_string = ""; // 0x1647 PushV
	var_1156_string = "Neutral"; // 0x1648 MovS
	func_6054(var_1156_string); // 0x1649 NEW_2
	func_5603(); // 0x164c NEW_2
	func_5594(); // 0x164f NEW_2
	
Label_5713:
	return 2; // 0x1651 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_cvector)
{
	var_51_bool = GlobalVars[1]; // 0x159b PushGE
	var_51_bool = 0; // 0x159c MovB
	GlobalVars[1] = var_51_bool; // 0x159d PopGE
	func_5538(var_50_cvector); // 0x159f NEW_2
	return 0; // 0x15a1 Return
}


func_0(var_0_object, var_421_int, var_422_object)
{
	var_424_object = Obj(); var_425_bool = 0; var_426_int = 0; var_427_bool = 0; var_428_object = Obj(); var_429_bool = 0; var_430_int = 0; var_431_bool = 0; // 0x0 PushV
	var_0_object = var_422_object; // 0x1 TMov
	var_432_bool = 0; var_433_object = Obj(); var_434_float = 0; // 0x2 PushV
	var_433_object = var_422_object; // 0x3 Mov
	var_434_float = 70.0; // 0x4 MovF
	func_5829(var_433_object, var_434_float); // 0x5 NEW_2
	var_435_bool = var_432_bool == 0; // 0x7 Not
	if(var_435_bool == 0) goto Label_11; // 0x8 JumpB
	var_421_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_428_object); // 0xb Func
	var_436_int = 0; // 0xd PushV
	func_6268(var_436_int); // 0xe NEW_2
	SetNPCName(var_436_int); // 0x10 ObjFunc
	var_437_int = 0; // 0x12 PushV
	func_6266(var_437_int); // 0x13 NEW_2
	SetNPCDescription(var_437_int); // 0x15 ObjFunc
	var_438_string = ""; // 0x17 PushV
	func_6270(var_438_string); // 0x18 NEW_2
	SetPhoto(var_438_string); // 0x1a ObjFunc
	var_439_string = ""; // 0x1c PushV
	func_6272(var_439_string); // 0x1d NEW_2
	SetPhoto2(var_439_string); // 0x1f ObjFunc
	var_440_int = 0; // 0x21 PushV
	func_7387(var_440_int); // 0x22 NEW_2
	SetPlayerName(var_440_int); // 0x24 ObjFunc
	var_430_int = -1; // 0x26 MovI
	IsOverrideActive(var_429_bool); // 0x27 Func
	var_441_bool = var_429_bool; // 0x29 Push
	if(var_441_bool == 0) goto Label_45; // 0x2a JumpB
	var_421_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_428_object); // 0x2d Func
	var_442_bool = 0; var_443_object = Obj(); // 0x2f PushV
	var_444_object = Obj(); // 0x30 PushV
	func_6107(var_444_object); // 0x31 NEW_2
	var_443_object = var_444_object; // 0x32 Mov
	func_5916(var_442_bool, var_443_object); // 0x34 NEW_2
	var_445_object = Obj(); var_446_object = Obj(); // 0x36 PushV
	var_445_object = var_422_object; // 0x37 Mov
	var_446_object = var_428_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_447_object, var_448_object, var_449_string, var_450_bool, var_445_object, var_446_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_431_bool); // 0x3d ObjFunc
	
Label_63:
	var_481_bool = var_431_bool == 0; // 0x3f Not
	if(var_481_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_431_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_482_object = Obj(); // 0x46 PushV
	var_482_object = var_422_object; // 0x47 Mov
	func_5898(); // 0x48 NEW_2
	StopDialog(var_428_object); // 0x4a Func
	GetReturnValue(var_430_int); // 0x4c ObjFunc
	var_421_int = var_430_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1030(var_0_object, var_302_int, var_303_object)
{
	var_305_object = Obj(); var_306_bool = 0; var_307_int = 0; var_308_bool = 0; var_309_object = Obj(); var_310_bool = 0; var_311_int = 0; var_312_bool = 0; // 0x406 PushV
	var_0_object = var_303_object; // 0x407 TMov
	var_313_bool = 0; var_314_object = Obj(); var_315_float = 0; // 0x408 PushV
	var_314_object = var_303_object; // 0x409 Mov
	var_315_float = 70.0; // 0x40a MovF
	func_5829(var_314_object, var_315_float); // 0x40b NEW_2
	var_316_bool = var_313_bool == 0; // 0x40d Not
	if(var_316_bool == 0) goto Label_1041; // 0x40e JumpB
	var_302_int = -2; // 0x40f MovI
	return 8; // 0x410 Return
	
Label_1041:
	CreateDialog(var_309_object); // 0x411 Func
	var_317_int = 0; // 0x413 PushV
	func_6268(var_317_int); // 0x414 NEW_2
	SetNPCName(var_317_int); // 0x416 ObjFunc
	var_318_int = 0; // 0x418 PushV
	func_6266(var_318_int); // 0x419 NEW_2
	SetNPCDescription(var_318_int); // 0x41b ObjFunc
	var_319_string = ""; // 0x41d PushV
	func_6270(var_319_string); // 0x41e NEW_2
	SetPhoto(var_319_string); // 0x420 ObjFunc
	var_320_string = ""; // 0x422 PushV
	func_6272(var_320_string); // 0x423 NEW_2
	SetPhoto2(var_320_string); // 0x425 ObjFunc
	var_321_int = 0; // 0x427 PushV
	func_7387(var_321_int); // 0x428 NEW_2
	SetPlayerName(var_321_int); // 0x42a ObjFunc
	var_311_int = -1; // 0x42c MovI
	IsOverrideActive(var_310_bool); // 0x42d Func
	var_322_bool = var_310_bool; // 0x42f Push
	if(var_322_bool == 0) goto Label_1075; // 0x430 JumpB
	var_302_int = -2; // 0x431 MovI
	return 8; // 0x432 Return
	
Label_1075:
	DoDialog(var_309_object); // 0x433 Func
	var_323_bool = 0; var_324_object = Obj(); // 0x435 PushV
	var_325_object = Obj(); // 0x436 PushV
	func_6107(var_325_object); // 0x437 NEW_2
	var_324_object = var_325_object; // 0x438 Mov
	func_5916(var_323_bool, var_324_object); // 0x43a NEW_2
	var_326_object = Obj(); var_327_object = Obj(); // 0x43c PushV
	var_326_object = var_303_object; // 0x43d Mov
	var_327_object = var_309_object; // 0x43e Mov
	TaskCall(5); // 0x43f TaskCall
	func_1111(var_328_object, var_329_object, var_330_string, var_331_bool, var_326_object, var_327_object); // 0x440 NEW_2
	TaskReturn(); // 0x441 TaskReturn
	IsDialogEnd(var_312_bool); // 0x443 ObjFunc
	
Label_1093:
	var_414_bool = var_312_bool == 0; // 0x445 Not
	if(var_414_bool == 0) goto Label_1100; // 0x446 JumpB
	sync(); // 0x447 Func
	IsDialogEnd(var_312_bool); // 0x449 ObjFunc
	goto Label_1093; // 0x44b Jump
	
Label_1100:
	var_415_object = Obj(); // 0x44c PushV
	var_415_object = var_303_object; // 0x44d Mov
	func_5898(); // 0x44e NEW_2
	StopDialog(var_309_object); // 0x450 Func
	GetReturnValue(var_311_int); // 0x452 ObjFunc
	var_302_int = var_311_int; // 0x454 Mov
	return 8; // 0x455 Return
}


func_6151(var_176_object, var_177_int)
{
	var_178_int = 0; var_179_int = 0; // 0x1807 PushV
	var_180_object = Obj(); var_181_string = ""; var_182_int = 0; // 0x1808 PushV
	var_180_object = var_176_object; // 0x1809 Mov
	var_181_string = "money"; // 0x180a MovS
	var_182_int = var_177_int; // 0x180b Mov
	func_5798(var_181_string, var_182_int); // 0x180c NEW_2
	var_186_int = 0; // 0x180e PushI
	var_187_bool = var_177_int > var_186_int; // 0x180f GT
	if(var_187_bool == 0) goto Label_6169; // 0x1810 JumpB
	var_188_string = "Money"; // 0x1811 PushS
	GetInvItemByName(var_179_int, var_188_string); // 0x1812 Func
	var_189_int = 0; var_190_int = 0; // 0x1814 PushV
	var_189_int = var_179_int; // 0x1815 Mov
	var_190_int = var_177_int; // 0x1816 Mov
	func_6139(var_189_int, var_190_int); // 0x1817 NEW_2
	
Label_6169:
	return 2; // 0x1819 Return
}


func_6666()
{
	var_118_string = "playsound"; // 0x1a0b PushS
	var_119_string = "mapmark"; // 0x1a0c PushS
	TriggerWorld(var_118_string, var_119_string); // 0x1a0d Func
	return 0; // 0x1a0f Return
}


func_2570(var_2_object, var_632_string)
{
	var_633_bool = 0; // 0xa0b PushV
	func_6274(var_633_bool); // 0xa0c NEW_2
	var_634_bool = var_633_bool == 0; // 0xa0e Not
	if(var_634_bool == 0) goto Label_2577; // 0xa0f JumpB
	return 0; // 0xa10 Return
	
Label_2577:
	var_635_bool = var_632_string == var_2_object; // 0xa11 Eq
	if(var_635_bool == 0) goto Label_2580; // 0xa12 JumpB
	return 0; // 0xa13 Return
	
Label_2580:
	var_636_string = ""; var_637_bool = 0; // 0xa14 PushV
	var_636_string = var_632_string; // 0xa15 Mov
	var_638_string = ""; // 0xa16 PushS
	var_639_bool = var_632_string == var_638_string; // 0xa17 Eq
	if(var_639_bool == 0) goto Label_2587; // 0xa18 JumpB
	var_637_bool = 0; // 0xa19 MovB
	goto Label_2588; // 0xa1a Jump
	
Label_2588:
	func_6070(var_636_string, var_637_bool); // 0xa1c NEW_2
	var_2_object = var_632_string; // 0xa1e TMov
	return 0; // 0xa1f Return
	
Label_2587:
	var_637_bool = 1; // 0xa1b MovB
}


func_7179()
{
	var_108_object = Obj(); var_109_object = Obj(); // 0x1c0b PushV
	var_110_int = 602; // 0x1c0c PushI
	var_111_int = 2; // 0x1c0d PushI
	var_112_int = 531153; // 0x1c0e PushI
	CreateDiaryEntry(var_109_object, var_110_int, var_111_int, var_112_int); // 0x1c0f Func
	var_113_bool = 0; var_114_object = Obj(); var_115_int = 0; // 0x1c11 PushV
	var_114_object = var_109_object; // 0x1c12 Mov
	var_115_int = 598; // 0x1c13 MovI
	func_7309(var_113_bool, var_114_object, var_115_int); // 0x1c14 NEW_2
	return 2; // 0x1c16 Return
}


func_6672()
{
	var_122_object = Obj(); var_123_string = ""; var_124_float = 0; // 0x1a11 PushV
	var_125_object = Obj(); // 0x1a12 PushV
	func_7337(var_125_object); // 0x1a13 NEW_2
	var_122_object = var_125_object; // 0x1a14 Mov
	var_123_string = "pt_map_spi4ka"; // 0x1a16 MovS
	var_124_float = 2; // 0x1a17 MovI
	func_7354(var_122_object, var_123_string, var_124_float); // 0x1a18 NEW_2
	var_145_object = Obj(); // 0x1a1a PushV
	func_7337(var_145_object); // 0x1a1b NEW_2
	ShowMap(var_145_object); // 0x1a1d ObjFunc
	return 0; // 0x1a1f Return
}


func_7192()
{
	var_84_object = Obj(); var_85_object = Obj(); // 0x1c18 PushV
	var_86_int = 599; // 0x1c19 PushI
	var_87_int = 2; // 0x1c1a PushI
	var_88_int = 531150; // 0x1c1b PushI
	CreateDiaryEntry(var_85_object, var_86_int, var_87_int, var_88_int); // 0x1c1c Func
	var_89_bool = 0; var_90_object = Obj(); var_91_int = 0; // 0x1c1e PushV
	var_90_object = var_85_object; // 0x1c1f Mov
	var_91_int = 598; // 0x1c20 MovI
	func_7309(var_89_bool, var_90_object, var_91_int); // 0x1c21 NEW_2
	return 2; // 0x1c23 Return
}


func_6170(var_131_object, var_132_int)
{
	var_133_int = 0; var_134_int = 0; var_135_bool = 0; var_136_int = 0; var_137_int = 0; var_138_bool = 0; // 0x181a PushV
	GetItemID(var_136_int); // 0x181b ObjFunc
	var_139_string = "Category"; // 0x181d PushS
	GetInvItemProperty(var_137_int, var_136_int, var_139_string); // 0x181e Func
	AddItem(var_138_bool, var_131_object, var_137_int, var_132_int); // 0x1820 ObjFunc
	var_140_bool = var_138_bool == 0; // 0x1822 Not
	if(var_140_bool == 0) goto Label_6183; // 0x1823 JumpB
	DropItems(var_131_object, var_132_int); // 0x1824 ObjFunc
	goto Label_6188; // 0x1826 Jump
	
Label_6188:
	return 6; // 0x182c Return
	
Label_6183:
	var_141_int = 0; var_142_int = 0; // 0x1827 PushV
	var_141_int = var_136_int; // 0x1828 Mov
	var_142_int = var_132_int; // 0x1829 Mov
	func_6139(var_141_int, var_142_int); // 0x182a NEW_2
}


func_6688(var_173_object)
{
	var_175_string = "money3000 is given"; // 0x1a21 PushS
	Trace(var_175_string); // 0x1a22 Func
	var_176_object = Obj(); var_177_int = 0; // 0x1a24 PushV
	var_176_object = var_173_object; // 0x1a25 Mov
	var_177_int = 3000; // 0x1a26 MovI
	func_6151(var_176_object, var_177_int); // 0x1a27 NEW_2
	return 0; // 0x1a29 Return
}


func_7205()
{
	var_175_object = Obj(); var_176_object = Obj(); // 0x1c25 PushV
	var_177_int = 717; // 0x1c26 PushI
	var_178_int = 1; // 0x1c27 PushI
	var_179_int = 538493; // 0x1c28 PushI
	CreateDiaryEntry(var_176_object, var_177_int, var_178_int, var_179_int); // 0x1c29 Func
	var_180_bool = 0; var_181_object = Obj(); var_182_int = 0; // 0x1c2b PushV
	var_181_object = var_176_object; // 0x1c2c Mov
	var_182_int = 242; // 0x1c2d MovI
	func_7309(var_180_bool, var_181_object, var_182_int); // 0x1c2e NEW_2
	return 2; // 0x1c30 Return
}


func_6698()
{
	var_59_string = "resque_list"; // 0x1a2b PushS
	var_60_int = 1; // 0x1a2c PushI
	SetVariable(var_59_string, var_60_int); // 0x1a2d Func
	func_7474(); // 0x1a30 NEW_2
	return 0; // 0x1a32 Return
}


func_6189(var_125_object, var_126_string, var_127_int)
{
	var_128_object = Obj(); var_129_object = Obj(); // 0x182d PushV
	CreateInvItem(var_129_object); // 0x182e Func
	SetItemName(var_126_string); // 0x1830 ObjFunc
	var_130_object = Obj(); var_131_object = Obj(); var_132_int = 0; // 0x1832 PushV
	var_130_object = var_125_object; // 0x1833 Mov
	var_131_object = var_129_object; // 0x1834 Mov
	var_132_int = var_127_int; // 0x1835 Mov
	func_6170(var_131_object, var_132_int); // 0x1836 NEW_2
	return 2; // 0x1838 Return
}


func_7218()
{
	var_81_object = Obj(); var_82_object = Obj(); // 0x1c32 PushV
	var_83_int = 227; // 0x1c33 PushI
	var_84_int = 2; // 0x1c34 PushI
	var_85_int = 519655; // 0x1c35 PushI
	CreateDiaryEntry(var_82_object, var_83_int, var_84_int, var_85_int); // 0x1c36 Func
	var_86_bool = 0; var_87_object = Obj(); var_88_int = 0; // 0x1c38 PushV
	var_87_object = var_82_object; // 0x1c39 Mov
	var_88_int = -1; // 0x1c3a MovI
	func_7309(var_86_bool, var_87_object, var_88_int); // 0x1c3b NEW_2
	return 2; // 0x1c3d Return
}


func_6707()
{
	var_97_int = 2000; // 0x1a34 PushI
	SetReturnValue(var_97_int); // 0x1a35 ObjFunc
	return 0; // 0x1a37 Return
}


func_6712()
{
	var_65_object = Obj(); var_66_object = Obj(); // 0x1a38 PushV
	var_67_object = Obj(); // 0x1a39 PushV
	func_7337(var_67_object); // 0x1a3a NEW_2
	var_66_object = var_67_object; // 0x1a3b Mov
	var_74_string = "b3q02KapellaGotoNotkin"; // 0x1a3d PushS
	var_75_string = "pt_map_notkin"; // 0x1a3e PushS
	var_76_int = 0; // 0x1a3f PushI
	var_77_int = 519652; // 0x1a40 PushI
	var_78_float = 0; // 0x1a41 PushV
	func_6214(var_78_float); // 0x1a42 NEW_2
	AddMark(var_74_string, var_75_string, var_76_int, var_77_int, var_78_float); // 0x1a44 ObjFunc
	func_7218(); // 0x1a47 NEW_2
	func_7244(); // 0x1a4a NEW_2
	var_112_object = Obj(); var_113_string = ""; // 0x1a4c PushV
	var_113_string = "quest_b3_02"; // 0x1a4d MovS
	func_6128(var_112_object, var_113_string); // 0x1a4e NEW_2
	var_120_bool = 0; var_121_string = ""; var_122_string = ""; // 0x1a50 PushV
	var_121_string = "quest_b3_02"; // 0x1a51 MovS
	var_122_string = "place_grabitel1"; // 0x1a52 MovS
	func_6202(var_120_bool, var_121_string, var_122_string); // 0x1a53 NEW_2
	return 2; // 0x1a55 Return
}


func_6202(var_116_bool, var_117_string, var_118_string)
{
	var_119_object = Obj(); var_120_object = Obj(); // 0x183a PushV
	FindActor(var_120_object, var_117_string); // 0x183b Func
	var_121_bool = var_120_object == 0; // 0x183d NullEq
	if(var_121_bool == 0) goto Label_6209; // 0x183e JumpB
	var_116_bool = 0; // 0x183f MovB
	return 2; // 0x1840 Return
	
Label_6209:
	Trigger(var_120_object, var_118_string); // 0x1841 Func
	var_116_bool = 1; // 0x1843 MovB
	return 2; // 0x1844 Return
}


func_7231()
{
	var_162_object = Obj(); var_163_object = Obj(); // 0x1c3f PushV
	var_164_int = 233; // 0x1c40 PushI
	var_165_int = 2; // 0x1c41 PushI
	var_166_int = 519661; // 0x1c42 PushI
	CreateDiaryEntry(var_163_object, var_164_int, var_165_int, var_166_int); // 0x1c43 Func
	var_167_bool = 0; var_168_object = Obj(); var_169_int = 0; // 0x1c45 PushV
	var_168_object = var_163_object; // 0x1c46 Mov
	var_169_int = 227; // 0x1c47 MovI
	func_7309(var_167_bool, var_168_object, var_169_int); // 0x1c48 NEW_2
	return 2; // 0x1c4a Return
}


func_2115(var_0_object, var_72_int, var_73_object)
{
	var_75_object = Obj(); var_76_bool = 0; var_77_int = 0; var_78_bool = 0; var_79_object = Obj(); var_80_bool = 0; var_81_int = 0; var_82_bool = 0; // 0x843 PushV
	var_0_object = var_73_object; // 0x844 TMov
	var_83_bool = 0; var_84_object = Obj(); var_85_float = 0; // 0x845 PushV
	var_84_object = var_73_object; // 0x846 Mov
	var_85_float = 70.0; // 0x847 MovF
	func_5829(var_84_object, var_85_float); // 0x848 NEW_2
	var_130_bool = var_83_bool == 0; // 0x84a Not
	if(var_130_bool == 0) goto Label_2126; // 0x84b JumpB
	var_72_int = -2; // 0x84c MovI
	return 8; // 0x84d Return
	
Label_2126:
	CreateDialog(var_79_object); // 0x84e Func
	var_131_int = 0; // 0x850 PushV
	func_6268(var_131_int); // 0x851 NEW_2
	SetNPCName(var_131_int); // 0x853 ObjFunc
	var_132_int = 0; // 0x855 PushV
	func_6266(var_132_int); // 0x856 NEW_2
	SetNPCDescription(var_132_int); // 0x858 ObjFunc
	var_133_string = ""; // 0x85a PushV
	func_6270(var_133_string); // 0x85b NEW_2
	SetPhoto(var_133_string); // 0x85d ObjFunc
	var_134_string = ""; // 0x85f PushV
	func_6272(var_134_string); // 0x860 NEW_2
	SetPhoto2(var_134_string); // 0x862 ObjFunc
	var_135_int = 0; // 0x864 PushV
	func_7387(var_135_int); // 0x865 NEW_2
	SetPlayerName(var_135_int); // 0x867 ObjFunc
	var_81_int = -1; // 0x869 MovI
	IsOverrideActive(var_80_bool); // 0x86a Func
	var_143_bool = var_80_bool; // 0x86c Push
	if(var_143_bool == 0) goto Label_2160; // 0x86d JumpB
	var_72_int = -2; // 0x86e MovI
	return 8; // 0x86f Return
	
Label_2160:
	DoDialog(var_79_object); // 0x870 Func
	var_144_bool = 0; var_145_object = Obj(); // 0x872 PushV
	var_146_object = Obj(); // 0x873 PushV
	func_6107(var_146_object); // 0x874 NEW_2
	var_145_object = var_146_object; // 0x875 Mov
	func_5916(var_144_bool, var_145_object); // 0x877 NEW_2
	var_239_object = Obj(); var_240_object = Obj(); // 0x879 PushV
	var_239_object = var_73_object; // 0x87a Mov
	var_240_object = var_79_object; // 0x87b Mov
	TaskCall(7); // 0x87c TaskCall
	func_2196(var_241_object, var_242_object, var_243_string, var_244_bool, var_239_object, var_240_object); // 0x87d NEW_2
	TaskReturn(); // 0x87e TaskReturn
	IsDialogEnd(var_82_bool); // 0x880 ObjFunc
	
Label_2178:
	var_288_bool = var_82_bool == 0; // 0x882 Not
	if(var_288_bool == 0) goto Label_2185; // 0x883 JumpB
	sync(); // 0x884 Func
	IsDialogEnd(var_82_bool); // 0x886 ObjFunc
	goto Label_2178; // 0x888 Jump
	
Label_2185:
	var_289_object = Obj(); // 0x889 PushV
	var_289_object = var_73_object; // 0x88a Mov
	func_5898(); // 0x88b NEW_2
	StopDialog(var_79_object); // 0x88d Func
	GetReturnValue(var_81_int); // 0x88f ObjFunc
	var_72_int = var_81_int; // 0x891 Mov
	return 8; // 0x892 Return
}


func_6214(var_74_float)
{
	var_75_float = 0; var_76_float = 0; // 0x1846 PushV
	GetGameTime(var_76_float); // 0x1847 Func
	var_74_float = var_76_float; // 0x1849 Mov
	return 2; // 0x184a Return
}


func_6219(var_199_int)
{
	var_200_float = 0; var_201_float = 0; // 0x184b PushV
	GetGameTime(var_201_float); // 0x184c Func
	var_202_int = 1; // 0x184e PushI
	var_203_int = 0; // 0x184f PushV
	var_204_int = 24; // 0x1850 PushI
	var_203_int = var_201_float / var_201_float; // 0x1851 Div2
	var_199_int = var_202_int + var_203_int; // 0x1852 Add2
	return 2; // 0x1853 Return
}


func_588(var_2_object, var_520_string)
{
	var_521_bool = 0; // 0x24d PushV
	func_6274(var_521_bool); // 0x24e NEW_2
	var_522_bool = var_521_bool == 0; // 0x250 Not
	if(var_522_bool == 0) goto Label_595; // 0x251 JumpB
	return 0; // 0x252 Return
	
Label_595:
	var_523_bool = var_520_string == var_2_object; // 0x253 Eq
	if(var_523_bool == 0) goto Label_598; // 0x254 JumpB
	return 0; // 0x255 Return
	
Label_598:
	var_524_string = ""; var_525_bool = 0; // 0x256 PushV
	var_524_string = var_520_string; // 0x257 Mov
	var_526_string = ""; // 0x258 PushS
	var_527_bool = var_520_string == var_526_string; // 0x259 Eq
	if(var_527_bool == 0) goto Label_605; // 0x25a JumpB
	var_525_bool = 0; // 0x25b MovB
	goto Label_606; // 0x25c Jump
	
Label_606:
	func_6070(var_524_string, var_525_bool); // 0x25e NEW_2
	var_2_object = var_520_string; // 0x260 TMov
	return 0; // 0x261 Return
	
Label_605:
	var_525_bool = 1; // 0x25d MovB
}


func_7244()
{
	var_104_object = Obj(); var_105_object = Obj(); // 0x1c4c PushV
	var_106_int = 228; // 0x1c4d PushI
	var_107_int = 2; // 0x1c4e PushI
	var_108_int = 519656; // 0x1c4f PushI
	CreateDiaryEntry(var_105_object, var_106_int, var_107_int, var_108_int); // 0x1c50 Func
	var_109_bool = 0; var_110_object = Obj(); var_111_int = 0; // 0x1c52 PushV
	var_110_object = var_105_object; // 0x1c53 Mov
	var_111_int = 227; // 0x1c54 MovI
	func_7309(var_109_bool, var_110_object, var_111_int); // 0x1c55 NEW_2
	return 2; // 0x1c57 Return
}


func_3150(var_2_object, var_864_string)
{
	var_865_bool = 0; // 0xc4f PushV
	func_6274(var_865_bool); // 0xc50 NEW_2
	var_866_bool = var_865_bool == 0; // 0xc52 Not
	if(var_866_bool == 0) goto Label_3157; // 0xc53 JumpB
	return 0; // 0xc54 Return
	
Label_3157:
	var_867_bool = var_864_string == var_2_object; // 0xc55 Eq
	if(var_867_bool == 0) goto Label_3160; // 0xc56 JumpB
	return 0; // 0xc57 Return
	
Label_3160:
	var_868_string = ""; var_869_bool = 0; // 0xc58 PushV
	var_868_string = var_864_string; // 0xc59 Mov
	var_870_string = ""; // 0xc5a PushS
	var_871_bool = var_864_string == var_870_string; // 0xc5b Eq
	if(var_871_bool == 0) goto Label_3167; // 0xc5c JumpB
	var_869_bool = 0; // 0xc5d MovB
	goto Label_3168; // 0xc5e Jump
	
Label_3168:
	func_6070(var_868_string, var_869_bool); // 0xc60 NEW_2
	var_2_object = var_864_string; // 0xc62 TMov
	return 0; // 0xc63 Return
	
Label_3167:
	var_869_bool = 1; // 0xc5f MovB
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_445_object, var_446_object)
{
	var_0_object = var_446_object; // 0x52 TMov
	var_1_object = var_445_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_451_int = 1; // 0x55 PushI
	if(var_451_int == 0) goto Label_114; // 0x56 JumpB
	var_452_string = ""; // 0x57 PushV
	var_452_string = "Neutral"; // 0x58 MovS
	func_144(var_446_object, var_452_string); // 0x59 NEW_2
	var_460_int = 518275; // 0x5b PushI
	SetMessage(var_460_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_461_bool = 0; var_462_object = Obj(); // 0x60 PushV
	var_462_object = var_1_object; // 0x61 MovT
	func_7117(var_462_object); // 0x62 NEW_2
	if(var_461_bool == 0) goto Label_106; // 0x64 JumpB
	var_467_int = 519482; // 0x65 PushI
	var_468_int = 20655; // 0x66 PushI
	var_469_int = 20654; // 0x67 PushI
	AddReply(var_467_int, var_468_int, var_469_int); // 0x68 TObjFunc
	
Label_106:
	var_470_int = 518276; // 0x6a PushI
	var_471_int = -1; // 0x6b PushI
	var_472_int = 19385; // 0x6c PushI
	AddReply(var_470_int, var_471_int, var_472_int); // 0x6d TObjFunc
	goto Label_114; // 0x6f Jump
	
Label_114:
	var_473_bool = 0; // 0x72 PushV
	func_6274(var_473_bool); // 0x73 NEW_2
	if(var_473_bool == 0) goto Label_129; // 0x75 JumpB
	
Label_118:
	lshWaitForAnimEnd(); // 0x76 Func
	var_474_string = var_3_string; // 0x78 PushT
	if(var_474_string == 0) goto Label_123; // 0x79 JumpB
	goto Label_128; // 0x7a Jump
	
Label_128:
	goto Label_143; // 0x80 Jump
	
Label_143:
	return 0; // 0x8f Return
	
Label_123:
	var_475_string = ""; // 0x7b PushV
	var_475_string = var_2_object; // 0x7c MovT
	func_6054(var_475_string); // 0x7d NEW_2
	goto Label_118; // 0x7f Jump
	
Label_129:
	var_476_string = "all"; // 0x81 PushS
	var_477_string = "idle"; // 0x82 PushS
	PlayAnimation(var_476_string, var_477_string); // 0x83 Func
	
Label_133:
	WaitForAnimEnd(); // 0x85 Func
	var_478_string = var_3_string; // 0x87 PushT
	if(var_478_string == 0) goto Label_138; // 0x88 JumpB
	goto Label_143; // 0x89 Jump
	
Label_138:
	var_479_string = "all"; // 0x8a PushS
	var_480_string = "idle"; // 0x8b PushS
	PlayAnimation(var_479_string, var_480_string); // 0x8c Func
	goto Label_133; // 0x8e Jump
}


func_5714()
{
	var_56_int = 0; var_57_int = 0; var_58_bool = 0; var_59_int = 0; var_60_int = 0; var_61_bool = 0; var_62_int = 0; var_63_int = 0; var_64_bool = 0; var_65_int = 0; var_66_int = 0; var_67_bool = 0; // 0x1652 PushV
	WaitForAnimEnd(); // 0x1653 Func
	var_68_bool = 0; // 0x1655 PushV
	func_5824(var_68_bool); // 0x1656 NEW_2
	var_69_bool = var_68_bool == 0; // 0x1658 Not
	if(var_69_bool == 0) goto Label_5723; // 0x1659 JumpB
	return 12; // 0x165a Return
	
Label_5723:
	var_70_int = 0; // 0x165b PushV
	func_6249(var_70_int); // 0x165c NEW_2
	var_62_int = var_70_int; // 0x165d Mov
	var_63_int = 0; // 0x165f MovI
	
Label_5728:
	var_83_bool = 0; // 0x1660 PushV
	var_83_bool = 0; // 0x1661 MovB
	var_84_int = 5; // 0x1662 PushI
	var_85_bool = var_63_int < var_84_int; // 0x1663 LT
	if(var_85_bool == 0) goto Label_5738; // 0x1664 JumpB
	var_86_bool = 0; // 0x1665 PushV
	func_5824(var_86_bool); // 0x1666 NEW_2
	if(var_86_bool == 0) goto Label_5738; // 0x1668 JumpB
	var_83_bool = 1; // 0x1669 MovB
	
Label_5738:
	if(var_83_bool == 0) goto Label_5780; // 0x166a JumpB
	var_87_bool = var_62_int == 0; // 0x166b Not
	if(var_87_bool == 0) goto Label_5748; // 0x166c JumpB
	var_88_int = 3; // 0x166d PushI
	Sleep(var_88_int, var_64_bool); // 0x166e Func
	var_89_bool = var_64_bool == 0; // 0x1670 Not
	if(var_89_bool == 0) goto Label_5747; // 0x1671 JumpB
	goto Label_5780; // 0x1672 Jump
	
Label_5780:
	ResetAAS(); // 0x1694 Func
	return 12; // 0x1696 Return
	
Label_5747:
	goto Label_5769; // 0x1673 Jump
	
Label_5769:
	var_90_bool = 0; // 0x1689 PushV
	func_5783(var_90_bool); // 0x168a NEW_2
	var_91_bool = var_90_bool == 0; // 0x168c Not
	if(var_91_bool == 0) goto Label_5775; // 0x168d JumpB
	goto Label_5780; // 0x168e Jump
	
Label_5775:
	ResetAAS(); // 0x168f Func
	var_92_int = 1; // 0x1691 PushI
	var_63_int = var_63_int + var_92_int; // 0x1692 Add2
	goto Label_5728; // 0x1693 Jump
	
Label_5748:
	irand(var_65_int, var_62_int); // 0x1674 Func
	var_93_int = 5; // 0x1676 PushI
	irand(var_66_int, var_93_int); // 0x1677 Func
	var_94_int = 0; // 0x1679 PushI
	var_95_bool = var_66_int != var_94_int; // 0x167a Neq
	if(var_95_bool == 0) goto Label_5757; // 0x167b JumpB
	var_65_int = 0; // 0x167c MovI
	
Label_5757:
	var_96_string = "all"; // 0x167d PushS
	var_97_string = ""; var_98_int = 0; // 0x167e PushV
	var_98_int = var_65_int; // 0x167f Mov
	func_6242(var_97_string, var_98_int); // 0x1680 NEW_2
	PlayAnimation(var_96_string, var_97_string); // 0x1682 Func
	WaitForAnimEnd(var_67_bool); // 0x1684 Func
	var_99_bool = var_67_bool == 0; // 0x1686 Not
	if(var_99_bool == 0) goto Label_5769; // 0x1687 JumpB
	goto Label_5780; // 0x1688 Jump
}


func_6228(var_731_int)
{
	var_732_float = 0; var_733_float = 0; // 0x1854 PushV
	GetGameTime(var_733_float); // 0x1855 Func
	var_734_int = 0; // 0x1857 PushV
	var_734_int = var_733_float; // 0x1858 Mov
	var_735_int = 24; // 0x1859 PushI
	var_731_int = var_734_int % var_735_int; // 0x185a Mod2
	return 2; // 0x185b Return
}


func_6743()
{
	var_59_string = "oob3Kapella1"; // 0x1a58 PushS
	var_60_int = 1; // 0x1a59 PushI
	SetVariable(var_59_string, var_60_int); // 0x1a5a Func
	return 0; // 0x1a5c Return
}


func_1111(var_0_object, var_1_object, var_2_object, var_3_string, var_326_object, var_327_object)
{
	var_0_object = var_327_object; // 0x458 TMov
	var_1_object = var_326_object; // 0x459 TMov
	var_3_string = 0; // 0x45a TMovB
	var_332_int = 1; // 0x45b PushI
	if(var_332_int == 0) goto Label_1219; // 0x45c JumpB
	var_333_bool = 0; var_334_object = Obj(); // 0x45d PushV
	var_334_object = var_1_object; // 0x45e MovT
	func_7057(var_334_object); // 0x45f NEW_2
	if(var_333_bool == 0) goto Label_1147; // 0x461 JumpB
	var_341_string = ""; // 0x462 PushV
	var_341_string = "Sympathy"; // 0x463 MovS
	func_1249(var_327_object, var_341_string); // 0x464 NEW_2
	var_349_int = 519812; // 0x466 PushI
	SetMessage(var_349_int); // 0x467 TObjFunc
	ClearReplies(); // 0x469 TObjFunc
	var_350_int = 519813; // 0x46b PushI
	var_351_int = 20974; // 0x46c PushI
	var_352_int = 20973; // 0x46d PushI
	AddReply(var_350_int, var_351_int, var_352_int); // 0x46e TObjFunc
	var_353_int = 527076; // 0x470 PushI
	var_354_int = 28374; // 0x471 PushI
	var_355_int = 28373; // 0x472 PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0x473 TObjFunc
	var_356_int = 519816; // 0x475 PushI
	var_357_int = -1; // 0x476 PushI
	var_358_int = 20976; // 0x477 PushI
	AddReply(var_356_int, var_357_int, var_358_int); // 0x478 TObjFunc
	goto Label_1219; // 0x47a Jump
	
Label_1219:
	var_359_bool = 0; // 0x4c3 PushV
	func_6274(var_359_bool); // 0x4c4 NEW_2
	if(var_359_bool == 0) goto Label_1234; // 0x4c6 JumpB
	
Label_1223:
	lshWaitForAnimEnd(); // 0x4c7 Func
	var_360_string = var_3_string; // 0x4c9 PushT
	if(var_360_string == 0) goto Label_1228; // 0x4ca JumpB
	goto Label_1233; // 0x4cb Jump
	
Label_1233:
	goto Label_1248; // 0x4d1 Jump
	
Label_1248:
	return 0; // 0x4e0 Return
	
Label_1228:
	var_361_string = ""; // 0x4cc PushV
	var_361_string = var_2_object; // 0x4cd MovT
	func_6054(var_361_string); // 0x4ce NEW_2
	goto Label_1223; // 0x4d0 Jump
	
Label_1234:
	var_362_string = "all"; // 0x4d2 PushS
	var_363_string = "idle"; // 0x4d3 PushS
	PlayAnimation(var_362_string, var_363_string); // 0x4d4 Func
	
Label_1238:
	WaitForAnimEnd(); // 0x4d6 Func
	var_364_string = var_3_string; // 0x4d8 PushT
	if(var_364_string == 0) goto Label_1243; // 0x4d9 JumpB
	goto Label_1248; // 0x4da Jump
	
Label_1243:
	var_365_string = "all"; // 0x4db PushS
	var_366_string = "idle"; // 0x4dc PushS
	PlayAnimation(var_365_string, var_366_string); // 0x4dd Func
	goto Label_1238; // 0x4df Jump
	
Label_1147:
	var_367_bool = 0; var_368_object = Obj(); // 0x47b PushV
	var_368_object = var_1_object; // 0x47c MovT
	func_7069(var_368_object); // 0x47d NEW_2
	if(var_367_bool == 0) goto Label_1172; // 0x47f JumpB
	var_373_object = Obj(); var_374_object = Obj(); // 0x480 PushV
	var_373_object = var_1_object; // 0x481 MovT
	var_374_object = var_0_object; // 0x482 MovT
	func_6292(); // 0x483 NEW_2
	var_377_string = ""; // 0x485 PushV
	var_377_string = "Neutral"; // 0x486 MovS
	func_1249(var_327_object, var_377_string); // 0x487 NEW_2
	var_378_int = 519851; // 0x489 PushI
	SetMessage(var_378_int); // 0x48a TObjFunc
	ClearReplies(); // 0x48c TObjFunc
	var_379_int = 527084; // 0x48e PushI
	var_380_int = 28383; // 0x48f PushI
	var_381_int = 28382; // 0x490 PushI
	AddReply(var_379_int, var_380_int, var_381_int); // 0x491 TObjFunc
	goto Label_1219; // 0x493 Jump
	
Label_1172:
	var_382_string = ""; // 0x494 PushV
	var_382_string = "Neutral"; // 0x495 MovS
	func_1249(var_327_object, var_382_string); // 0x496 NEW_2
	var_383_int = 519817; // 0x498 PushI
	SetMessage(var_383_int); // 0x499 TObjFunc
	ClearReplies(); // 0x49b TObjFunc
	var_384_bool = 0; var_385_object = Obj(); // 0x49d PushV
	var_385_object = var_1_object; // 0x49e MovT
	func_7081(var_385_object); // 0x49f NEW_2
	if(var_384_bool == 0) goto Label_1191; // 0x4a1 JumpB
	var_390_int = 519818; // 0x4a2 PushI
	var_391_int = 20979; // 0x4a3 PushI
	var_392_int = 20978; // 0x4a4 PushI
	AddReply(var_390_int, var_391_int, var_392_int); // 0x4a5 TObjFunc
	
Label_1191:
	var_393_bool = 0; var_394_object = Obj(); // 0x4a7 PushV
	var_394_object = var_1_object; // 0x4a8 MovT
	func_7093(var_394_object); // 0x4a9 NEW_2
	if(var_393_bool == 0) goto Label_1201; // 0x4ab JumpB
	var_399_int = 519830; // 0x4ac PushI
	var_400_int = 20991; // 0x4ad PushI
	var_401_int = 20990; // 0x4ae PushI
	AddReply(var_399_int, var_400_int, var_401_int); // 0x4af TObjFunc
	
Label_1201:
	var_402_bool = 0; var_403_object = Obj(); // 0x4b1 PushV
	var_403_object = var_1_object; // 0x4b2 MovT
	func_7105(var_403_object); // 0x4b3 NEW_2
	if(var_402_bool == 0) goto Label_1211; // 0x4b5 JumpB
	var_408_int = 520449; // 0x4b6 PushI
	var_409_int = 21663; // 0x4b7 PushI
	var_410_int = 21662; // 0x4b8 PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0x4b9 TObjFunc
	
Label_1211:
	var_411_int = 519850; // 0x4bb PushI
	var_412_int = -1; // 0x4bc PushI
	var_413_int = 21011; // 0x4bd PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0x4be TObjFunc
	goto Label_1219; // 0x4c0 Jump
}


func_7257()
{
	var_77_object = Obj(); var_78_object = Obj(); // 0x1c59 PushV
	var_79_int = 532; // 0x1c5a PushI
	var_80_int = 2; // 0x1c5b PushI
	var_81_int = 530344; // 0x1c5c PushI
	CreateDiaryEntry(var_78_object, var_79_int, var_80_int, var_81_int); // 0x1c5d Func
	var_82_bool = 0; var_83_object = Obj(); var_84_int = 0; // 0x1c5f PushV
	var_83_object = var_78_object; // 0x1c60 Mov
	var_84_int = -1; // 0x1c61 MovI
	func_7309(var_82_bool, var_83_object, var_84_int); // 0x1c62 NEW_2
	return 2; // 0x1c64 Return
}


func_6236(var_298_bool, var_299_int)
{
	var_300_int = 0; // 0x185d PushV
	func_6219(var_300_int); // 0x185e NEW_2
	var_298_bool = var_300_int == var_299_int; // 0x1860 Eq2
	return 0; // 0x1861 Return
}


func_6749()
{
	func_7231(); // 0x1a5f NEW_2
	var_170_bool = 0; var_171_string = ""; var_172_string = ""; // 0x1a61 PushV
	var_171_string = "quest_b3_02"; // 0x1a62 MovS
	var_172_string = "completed"; // 0x1a63 MovS
	func_6202(var_170_bool, var_171_string, var_172_string); // 0x1a64 NEW_2
	return 0; // 0x1a66 Return
}


func_6242(var_76_string, var_77_int)
{
	var_78_string = ""; var_79_string = ""; // 0x1862 PushV
	var_79_string = "idle"; // 0x1863 MovS
	var_80_int = var_77_int; // 0x1864 Push
	if(var_80_int == 0) goto Label_6247; // 0x1865 JumpB
	var_79_string = var_79_string + var_77_int; // 0x1866 Add2
	
Label_6247:
	var_76_string = var_79_string; // 0x1867 Mov
	return 2; // 0x1868 Return
}


func_7270()
{
	var_156_object = Obj(); var_157_object = Obj(); // 0x1c66 PushV
	var_158_int = 541; // 0x1c67 PushI
	var_159_int = 2; // 0x1c68 PushI
	var_160_int = 530353; // 0x1c69 PushI
	CreateDiaryEntry(var_157_object, var_158_int, var_159_int, var_160_int); // 0x1c6a Func
	var_161_bool = 0; var_162_object = Obj(); var_163_int = 0; // 0x1c6c PushV
	var_162_object = var_157_object; // 0x1c6d Mov
	var_163_int = 532; // 0x1c6e MovI
	func_7309(var_161_bool, var_162_object, var_163_int); // 0x1c6f NEW_2
	return 2; // 0x1c71 Return
}


func_6759(var_658_bool)
{
	var_660_int = 0; var_661_string = ""; // 0x1a68 PushV
	var_661_string = "b8q01"; // 0x1a69 MovS
	func_6123(var_660_int, var_661_string); // 0x1a6a NEW_2
	var_662_int = 2; // 0x1a6c PushI
	var_663_bool = var_660_int == var_662_int; // 0x1a6d Eq
	if(var_663_bool == 0) goto Label_6769; // 0x1a6e JumpB
	var_658_bool = 1; // 0x1a6f MovB
	return 0; // 0x1a70 Return
	
Label_6769:
	var_658_bool = 0; // 0x1a71 MovB
	return 0; // 0x1a72 Return
}


func_6249(var_70_int)
{
	var_71_int = 0; var_72_bool = 0; var_73_int = 0; var_74_bool = 0; // 0x1869 PushV
	var_73_int = 0; // 0x186a MovI
	
Label_6251:
	var_75_string = "all"; // 0x186b PushS
	var_76_string = ""; var_77_int = 0; // 0x186c PushV
	var_77_int = var_73_int; // 0x186d Mov
	func_6242(var_76_string, var_77_int); // 0x186e NEW_2
	HasAnimation(var_74_bool, var_75_string, var_76_string); // 0x1870 Func
	var_81_bool = var_74_bool == 0; // 0x1872 Not
	if(var_81_bool == 0) goto Label_6261; // 0x1873 JumpB
	goto Label_6264; // 0x1874 Jump
	
Label_6264:
	var_70_int = var_73_int; // 0x1878 Mov
	return 4; // 0x1879 Return
	
Label_6261:
	var_82_int = 1; // 0x1875 PushI
	var_73_int = var_73_int + var_82_int; // 0x1876 Add2
	goto Label_6251; // 0x1877 Jump
}


func_6771(var_622_bool)
{
	var_624_int = 0; var_625_string = ""; // 0x1a74 PushV
	var_625_string = "oob8Kapella1"; // 0x1a75 MovS
	func_6123(var_624_int, var_625_string); // 0x1a76 NEW_2
	var_626_int = 0; // 0x1a78 PushI
	var_627_bool = var_624_int == var_626_int; // 0x1a79 Eq
	if(var_627_bool == 0) goto Label_6781; // 0x1a7a JumpB
	var_622_bool = 1; // 0x1a7b MovB
	return 0; // 0x1a7c Return
	
Label_6781:
	var_622_bool = 0; // 0x1a7d MovB
	return 0; // 0x1a7e Return
}


func_7283()
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x1c73 PushV
	var_102_int = 533; // 0x1c74 PushI
	var_103_int = 2; // 0x1c75 PushI
	var_104_int = 530345; // 0x1c76 PushI
	CreateDiaryEntry(var_101_object, var_102_int, var_103_int, var_104_int); // 0x1c77 Func
	var_105_bool = 0; var_106_object = Obj(); var_107_int = 0; // 0x1c79 PushV
	var_106_object = var_101_object; // 0x1c7a Mov
	var_107_int = 532; // 0x1c7b MovI
	func_7309(var_105_bool, var_106_object, var_107_int); // 0x1c7c NEW_2
	return 2; // 0x1c7e Return
}


func_4603(var_2_object, var_988_string)
{
	var_989_bool = 0; // 0x11fc PushV
	func_6274(var_989_bool); // 0x11fd NEW_2
	var_990_bool = var_989_bool == 0; // 0x11ff Not
	if(var_990_bool == 0) goto Label_4610; // 0x1200 JumpB
	return 0; // 0x1201 Return
	
Label_4610:
	var_991_bool = var_988_string == var_2_object; // 0x1202 Eq
	if(var_991_bool == 0) goto Label_4613; // 0x1203 JumpB
	return 0; // 0x1204 Return
	
Label_4613:
	var_992_string = ""; var_993_bool = 0; // 0x1205 PushV
	var_992_string = var_988_string; // 0x1206 Mov
	var_994_string = ""; // 0x1207 PushS
	var_995_bool = var_988_string == var_994_string; // 0x1208 Eq
	if(var_995_bool == 0) goto Label_4620; // 0x1209 JumpB
	var_993_bool = 0; // 0x120a MovB
	goto Label_4621; // 0x120b Jump
	
Label_4621:
	func_6070(var_992_string, var_993_bool); // 0x120d NEW_2
	var_2_object = var_988_string; // 0x120f TMov
	return 0; // 0x1210 Return
	
Label_4620:
	var_993_bool = 1; // 0x120c MovB
}


func_6266(var_132_int)
{
	var_132_int = 515538; // 0x187a MovI
	return 0; // 0x187b Return
}


func_6268(var_131_int)
{
	var_131_int = 502863; // 0x187c MovI
	return 0; // 0x187d Return
}


func_6270(var_133_string)
{
	var_133_string = "ui/NPC_Kapella.png"; // 0x187e MovS
	return 0; // 0x187f Return
}


func_6783(var_664_bool)
{
	var_666_int = 0; var_667_string = ""; // 0x1a80 PushV
	var_667_string = "oob8Kapella2"; // 0x1a81 MovS
	func_6123(var_666_int, var_667_string); // 0x1a82 NEW_2
	var_668_int = 0; // 0x1a84 PushI
	var_669_bool = var_666_int == var_668_int; // 0x1a85 Eq
	if(var_669_bool == 0) goto Label_6793; // 0x1a86 JumpB
	var_664_bool = 1; // 0x1a87 MovB
	return 0; // 0x1a88 Return
	
Label_6793:
	var_664_bool = 0; // 0x1a89 MovB
	return 0; // 0x1a8a Return
}


func_6272(var_134_string)
{
	var_134_string = "ui/NPC_Kapella_b.png"; // 0x1880 MovS
	return 0; // 0x1881 Return
}


func_7296(var_75_object)
{
	var_76_object = Obj(); var_77_object = Obj(); // 0x1c80 PushV
	GetDiaryRoot(var_77_object); // 0x1c81 Func
	var_78_bool = var_77_object == 0; // 0x1c83 Not
	if(var_78_bool == 0) goto Label_7306; // 0x1c84 JumpB
	var_79_string = "Can't retrieve diary root"; // 0x1c85 PushS
	Trace(var_79_string); // 0x1c86 Func
	var_75_object = 0; // 0x1c88 MovB
	return 2; // 0x1c89 Return
	
Label_7306:
	var_75_object = var_77_object; // 0x1c8a Mov
	return 2; // 0x1c8b Return
}


func_6274(var_126_bool)
{
	var_126_bool = 1; // 0x1882 MovB
	return 0; // 0x1883 Return
}


func_6276()
{
	var_128_object = Obj(); var_129_string = ""; var_130_float = 0; // 0x1885 PushV
	var_131_object = Obj(); // 0x1886 PushV
	func_7337(var_131_object); // 0x1887 NEW_2
	var_128_object = var_131_object; // 0x1888 Mov
	var_129_string = "pt_map_notkin"; // 0x188a MovS
	var_130_float = 2; // 0x188b MovI
	func_7354(var_128_object, var_129_string, var_130_float); // 0x188c NEW_2
	var_151_object = Obj(); // 0x188e PushV
	func_7337(var_151_object); // 0x188f NEW_2
	ShowMap(var_151_object); // 0x1891 ObjFunc
	return 0; // 0x1893 Return
}


func_6795(var_887_bool)
{
	var_889_int = 0; var_890_string = ""; // 0x1a8c PushV
	var_890_string = "b10q01"; // 0x1a8d MovS
	func_6123(var_889_int, var_890_string); // 0x1a8e NEW_2
	var_891_int = 4; // 0x1a90 PushI
	var_892_bool = var_889_int == var_891_int; // 0x1a91 Eq
	if(var_892_bool == 0) goto Label_6805; // 0x1a92 JumpB
	var_887_bool = 1; // 0x1a93 MovB
	return 0; // 0x1a94 Return
	
Label_6805:
	var_887_bool = 0; // 0x1a95 MovB
	return 0; // 0x1a96 Return
}


func_7309(var_66_bool, var_67_object, var_68_int)
{
	var_69_object = Obj(); var_70_object = Obj(); var_71_int = 0; var_72_object = Obj(); var_73_object = Obj(); var_74_int = 0; // 0x1c8d PushV
	var_75_object = Obj(); // 0x1c8e PushV
	func_7296(var_75_object); // 0x1c8f NEW_2
	var_72_object = var_75_object; // 0x1c90 Mov
	Find(var_68_int, var_73_object); // 0x1c92 ObjFunc
	var_80_bool = var_73_object == 0; // 0x1c94 Not
	if(var_80_bool == 0) goto Label_7324; // 0x1c95 JumpB
	var_81_string = "Can't find diary parent with id: "; // 0x1c96 PushS
	var_82_int = var_81_string + var_68_int; // 0x1c97 Add
	Trace(var_82_int); // 0x1c98 Func
	var_66_bool = 0; // 0x1c9a MovB
	return 6; // 0x1c9b Return
	
Label_7324:
	AddChild(var_67_object); // 0x1c9c ObjFunc
	var_83_int = 7; // 0x1c9e PushI
	SendWorldWndMessage(var_83_int); // 0x1c9f Func
	GetCategory(var_74_int); // 0x1ca1 ObjFunc
	SetDiarySection(var_74_int); // 0x1ca3 Func
	var_66_bool = 0; // 0x1ca5 MovB
	return 6; // 0x1ca6 Return
}


func_144(var_2_object, var_452_string)
{
	var_453_bool = 0; // 0x91 PushV
	func_6274(var_453_bool); // 0x92 NEW_2
	var_454_bool = var_453_bool == 0; // 0x94 Not
	if(var_454_bool == 0) goto Label_151; // 0x95 JumpB
	return 0; // 0x96 Return
	
Label_151:
	var_455_bool = var_452_string == var_2_object; // 0x97 Eq
	if(var_455_bool == 0) goto Label_154; // 0x98 JumpB
	return 0; // 0x99 Return
	
Label_154:
	var_456_string = ""; var_457_bool = 0; // 0x9a PushV
	var_456_string = var_452_string; // 0x9b Mov
	var_458_string = ""; // 0x9c PushS
	var_459_bool = var_452_string == var_458_string; // 0x9d Eq
	if(var_459_bool == 0) goto Label_161; // 0x9e JumpB
	var_457_bool = 0; // 0x9f MovB
	goto Label_162; // 0xa0 Jump
	
Label_162:
	func_6070(var_456_string, var_457_bool); // 0xa2 NEW_2
	var_2_object = var_452_string; // 0xa4 TMov
	return 0; // 0xa5 Return
	
Label_161:
	var_457_bool = 1; // 0xa1 MovB
}


func_6292()
{
	var_375_string = "oob1Kapella1"; // 0x1895 PushS
	var_376_int = 1; // 0x1896 PushI
	SetVariable(var_375_string, var_376_int); // 0x1897 Func
	return 0; // 0x1899 Return
}


func_2196(var_0_object, var_1_object, var_2_object, var_3_string, var_239_object, var_240_object)
{
	var_0_object = var_240_object; // 0x895 TMov
	var_1_object = var_239_object; // 0x896 TMov
	var_3_string = 0; // 0x897 TMovB
	var_245_int = 1; // 0x898 PushI
	if(var_245_int == 0) goto Label_2224; // 0x899 JumpB
	var_246_string = ""; // 0x89a PushV
	var_246_string = "Neutral"; // 0x89b MovS
	func_2254(var_240_object, var_246_string); // 0x89c NEW_2
	var_263_int = 527023; // 0x89e PushI
	SetMessage(var_263_int); // 0x89f TObjFunc
	ClearReplies(); // 0x8a1 TObjFunc
	var_264_int = 527024; // 0x8a3 PushI
	var_265_int = 21951; // 0x8a4 PushI
	var_266_int = 28310; // 0x8a5 PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0x8a6 TObjFunc
	var_267_int = 527025; // 0x8a8 PushI
	var_268_int = 21951; // 0x8a9 PushI
	var_269_int = 28311; // 0x8aa PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0x8ab TObjFunc
	goto Label_2224; // 0x8ad Jump
	
Label_2224:
	var_270_bool = 0; // 0x8b0 PushV
	func_6274(var_270_bool); // 0x8b1 NEW_2
	if(var_270_bool == 0) goto Label_2239; // 0x8b3 JumpB
	
Label_2228:
	lshWaitForAnimEnd(); // 0x8b4 Func
	var_271_string = var_3_string; // 0x8b6 PushT
	if(var_271_string == 0) goto Label_2233; // 0x8b7 JumpB
	goto Label_2238; // 0x8b8 Jump
	
Label_2238:
	goto Label_2253; // 0x8be Jump
	
Label_2253:
	return 0; // 0x8cd Return
	
Label_2233:
	var_272_string = ""; // 0x8b9 PushV
	var_272_string = var_2_object; // 0x8ba MovT
	func_6054(var_272_string); // 0x8bb NEW_2
	goto Label_2228; // 0x8bd Jump
	
Label_2239:
	var_283_string = "all"; // 0x8bf PushS
	var_284_string = "idle"; // 0x8c0 PushS
	PlayAnimation(var_283_string, var_284_string); // 0x8c1 Func
	
Label_2243:
	WaitForAnimEnd(); // 0x8c3 Func
	var_285_string = var_3_string; // 0x8c5 PushT
	if(var_285_string == 0) goto Label_2248; // 0x8c6 JumpB
	goto Label_2253; // 0x8c7 Jump
	
Label_2248:
	var_286_string = "all"; // 0x8c8 PushS
	var_287_string = "idle"; // 0x8c9 PushS
	PlayAnimation(var_286_string, var_287_string); // 0x8ca Func
	goto Label_2243; // 0x8cc Jump
}


func_5118(var_2_object, var_1069_string)
{
	var_1070_bool = 0; // 0x13ff PushV
	func_6274(var_1070_bool); // 0x1400 NEW_2
	var_1071_bool = var_1070_bool == 0; // 0x1402 Not
	if(var_1071_bool == 0) goto Label_5125; // 0x1403 JumpB
	return 0; // 0x1404 Return
	
Label_5125:
	var_1072_bool = var_1069_string == var_2_object; // 0x1405 Eq
	if(var_1072_bool == 0) goto Label_5128; // 0x1406 JumpB
	return 0; // 0x1407 Return
	
Label_5128:
	var_1073_string = ""; var_1074_bool = 0; // 0x1408 PushV
	var_1073_string = var_1069_string; // 0x1409 Mov
	var_1075_string = ""; // 0x140a PushS
	var_1076_bool = var_1069_string == var_1075_string; // 0x140b Eq
	if(var_1076_bool == 0) goto Label_5135; // 0x140c JumpB
	var_1074_bool = 0; // 0x140d MovB
	goto Label_5136; // 0x140e Jump
	
Label_5136:
	func_6070(var_1073_string, var_1074_bool); // 0x1410 NEW_2
	var_2_object = var_1069_string; // 0x1412 TMov
	return 0; // 0x1413 Return
	
Label_5135:
	var_1074_bool = 1; // 0x140f MovB
}


func_6807(var_893_bool)
{
	var_895_int = 0; var_896_string = ""; // 0x1a98 PushV
	var_896_string = "b10q01TalkKapella"; // 0x1a99 MovS
	func_6123(var_895_int, var_896_string); // 0x1a9a NEW_2
	var_897_int = 1; // 0x1a9c PushI
	var_898_bool = var_895_int == var_897_int; // 0x1a9d Eq
	if(var_898_bool == 0) goto Label_6817; // 0x1a9e JumpB
	var_893_bool = 1; // 0x1a9f MovB
	return 0; // 0x1aa0 Return
	
Label_6817:
	var_893_bool = 0; // 0x1aa1 MovB
	return 0; // 0x1aa2 Return
}


func_5783(var_90_bool)
{
	var_90_bool = 1; // 0x1697 MovB
	return 0; // 0x1698 Return
}


func_5785()
{
	StopAnimation(); // 0x1699 Func
	StopGroup0(); // 0x169b Func
	return 0; // 0x169d Return
}


func_6298()
{
	var_130_string = "oob1Kapella2"; // 0x189b PushS
	var_131_int = 1; // 0x189c PushI
	SetVariable(var_130_string, var_131_int); // 0x189d Func
	return 0; // 0x189f Return
}


func_3738(var_0_object, var_680_int, var_681_object)
{
	var_683_object = Obj(); var_684_bool = 0; var_685_int = 0; var_686_bool = 0; var_687_object = Obj(); var_688_bool = 0; var_689_int = 0; var_690_bool = 0; // 0xe9a PushV
	var_0_object = var_681_object; // 0xe9b TMov
	var_691_bool = 0; var_692_object = Obj(); var_693_float = 0; // 0xe9c PushV
	var_692_object = var_681_object; // 0xe9d Mov
	var_693_float = 70.0; // 0xe9e MovF
	func_5829(var_692_object, var_693_float); // 0xe9f NEW_2
	var_694_bool = var_691_bool == 0; // 0xea1 Not
	if(var_694_bool == 0) goto Label_3749; // 0xea2 JumpB
	var_680_int = -2; // 0xea3 MovI
	return 8; // 0xea4 Return
	
Label_3749:
	CreateDialog(var_687_object); // 0xea5 Func
	var_695_int = 0; // 0xea7 PushV
	func_6268(var_695_int); // 0xea8 NEW_2
	SetNPCName(var_695_int); // 0xeaa ObjFunc
	var_696_int = 0; // 0xeac PushV
	func_6266(var_696_int); // 0xead NEW_2
	SetNPCDescription(var_696_int); // 0xeaf ObjFunc
	var_697_string = ""; // 0xeb1 PushV
	func_6270(var_697_string); // 0xeb2 NEW_2
	SetPhoto(var_697_string); // 0xeb4 ObjFunc
	var_698_string = ""; // 0xeb6 PushV
	func_6272(var_698_string); // 0xeb7 NEW_2
	SetPhoto2(var_698_string); // 0xeb9 ObjFunc
	var_699_int = 0; // 0xebb PushV
	func_7387(var_699_int); // 0xebc NEW_2
	SetPlayerName(var_699_int); // 0xebe ObjFunc
	var_689_int = -1; // 0xec0 MovI
	IsOverrideActive(var_688_bool); // 0xec1 Func
	var_700_bool = var_688_bool; // 0xec3 Push
	if(var_700_bool == 0) goto Label_3783; // 0xec4 JumpB
	var_680_int = -2; // 0xec5 MovI
	return 8; // 0xec6 Return
	
Label_3783:
	DoDialog(var_687_object); // 0xec7 Func
	var_701_bool = 0; var_702_object = Obj(); // 0xec9 PushV
	var_703_object = Obj(); // 0xeca PushV
	func_6107(var_703_object); // 0xecb NEW_2
	var_702_object = var_703_object; // 0xecc Mov
	func_5916(var_701_bool, var_702_object); // 0xece NEW_2
	var_704_object = Obj(); var_705_object = Obj(); // 0xed0 PushV
	var_704_object = var_681_object; // 0xed1 Mov
	var_705_object = var_687_object; // 0xed2 Mov
	TaskCall(13); // 0xed3 TaskCall
	func_3819(var_706_object, var_707_object, var_708_string, var_709_bool, var_704_object, var_705_object); // 0xed4 NEW_2
	TaskReturn(); // 0xed5 TaskReturn
	IsDialogEnd(var_690_bool); // 0xed7 ObjFunc
	
Label_3801:
	var_815_bool = var_690_bool == 0; // 0xed9 Not
	if(var_815_bool == 0) goto Label_3808; // 0xeda JumpB
	sync(); // 0xedb Func
	IsDialogEnd(var_690_bool); // 0xedd ObjFunc
	goto Label_3801; // 0xedf Jump
	
Label_3808:
	var_816_object = Obj(); // 0xee0 PushV
	var_816_object = var_681_object; // 0xee1 Mov
	func_5898(); // 0xee2 NEW_2
	StopDialog(var_687_object); // 0xee4 Func
	GetReturnValue(var_689_int); // 0xee6 ObjFunc
	var_680_int = var_689_int; // 0xee8 Mov
	return 8; // 0xee9 Return
}


func_5790(var_66_float)
{
	var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); // 0x169e PushV
	GetPosition(var_71_cvector); // 0x169f Func
	GetPosition(var_72_cvector); // 0x16a1 ObjFunc
	var_73_cvector = var_72_cvector - var_71_cvector; // 0x16a3 Sub2
	var_66_float = var_73_cvector | var_73_cvector; // 0x16a4 Or2
	return 6; // 0x16a5 Return
}


func_6304()
{
	var_136_string = "oob1Kapella3"; // 0x18a1 PushS
	var_137_int = 1; // 0x18a2 PushI
	SetVariable(var_136_string, var_137_int); // 0x18a3 Func
	return 0; // 0x18a5 Return
}


func_6819(var_919_bool)
{
	var_921_int = 0; var_922_string = ""; // 0x1aa4 PushV
	var_922_string = "oob10Kapella1"; // 0x1aa5 MovS
	func_6123(var_921_int, var_922_string); // 0x1aa6 NEW_2
	var_923_int = 0; // 0x1aa8 PushI
	var_924_bool = var_921_int == var_923_int; // 0x1aa9 Eq
	if(var_924_bool == 0) goto Label_6829; // 0x1aaa JumpB
	var_919_bool = 1; // 0x1aab MovB
	return 0; // 0x1aac Return
	
Label_6829:
	var_919_bool = 0; // 0x1aad MovB
	return 0; // 0x1aae Return
}


func_6310()
{
	var_140_object = Obj(); var_141_object = Obj(); // 0x18a6 PushV
	var_142_object = Obj(); // 0x18a7 PushV
	func_7337(var_142_object); // 0x18a8 NEW_2
	var_141_object = var_142_object; // 0x18a9 Mov
	var_149_string = "b1KapellaGotoLaska"; // 0x18ab PushS
	var_150_string = "pt_map_laska"; // 0x18ac PushS
	var_151_int = 3; // 0x18ad PushI
	var_152_int = 520037; // 0x18ae PushI
	var_153_float = 0; // 0x18af PushV
	func_6214(var_153_float); // 0x18b0 NEW_2
	AddMark(var_149_string, var_150_string, var_151_int, var_152_int, var_153_float); // 0x18b2 ObjFunc
	var_156_string = "b1KapellaGotoNotkin"; // 0x18b4 PushS
	var_157_string = "pt_map_notkin"; // 0x18b5 PushS
	var_158_int = 3; // 0x18b6 PushI
	var_159_int = 520038; // 0x18b7 PushI
	var_160_float = 0; // 0x18b8 PushV
	func_6214(var_160_float); // 0x18b9 NEW_2
	AddMark(var_156_string, var_157_string, var_158_int, var_159_int, var_160_float); // 0x18bb ObjFunc
	return 2; // 0x18bd Return
}


func_5798(var_181_string, var_182_int)
{
	var_183_int = 0; var_184_int = 0; // 0x16a6 PushV
	GetProperty(var_181_string, var_184_int); // 0x16a7 ObjFunc
	var_185_int = var_184_int + var_182_int; // 0x16a9 Add
	SetProperty(var_181_string, var_185_int); // 0x16aa ObjFunc
	return 2; // 0x16ac Return
}


func_7337(var_63_object)
{
	var_64_object = Obj(); var_65_object = Obj(); var_66_object = Obj(); var_67_object = Obj(); // 0x1ca9 PushV
	GetMainOutdoorScene(var_66_object); // 0x1caa Func
	var_68_bool = var_66_object == 0; // 0x1cac NullEq
	if(var_68_bool == 0) goto Label_7348; // 0x1cad JumpB
	var_69_string = "Can't find main outdoor scene"; // 0x1cae PushS
	Trace(var_69_string); // 0x1caf Func
	var_67_object = 0; // 0x1cb1 SetNull
	var_63_object = var_67_object; // 0x1cb2 Mov
	return 4; // 0x1cb3 Return
	
Label_7348:
	GetMap(var_67_object); // 0x1cb4 ObjFunc
	var_63_object = var_67_object; // 0x1cb6 Mov
	return 4; // 0x1cb7 Return
}


func_5805(var_59_bool, var_60_cvector)
{
	var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_bool = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_bool = 0; // 0x16ad PushV
	GetPosition(var_64_cvector); // 0x16ae Func
	var_65_cvector = var_60_cvector - var_64_cvector; // 0x16b0 Sub2
	var_67_float = GetByIndex(var_65_cvector, 0); // 0x16b1 PushE
	var_68_float = GetByIndex(var_65_cvector, 2); // 0x16b2 PushE
	Rotate(var_67_float, var_68_float, var_66_bool); // 0x16b3 Func
	var_59_bool = var_66_bool; // 0x16b5 Mov
	return 6; // 0x16b6 Return
}


func_6831(var_713_bool)
{
	var_715_int = 0; var_716_string = ""; // 0x1ab0 PushV
	var_716_string = "b9q03AglajaTalk"; // 0x1ab1 MovS
	func_6123(var_715_int, var_716_string); // 0x1ab2 NEW_2
	var_717_int = 0; // 0x1ab4 PushI
	var_718_bool = var_715_int != var_717_int; // 0x1ab5 Neq
	if(var_718_bool == 0) goto Label_6841; // 0x1ab6 JumpB
	var_713_bool = 1; // 0x1ab7 MovB
	return 0; // 0x1ab8 Return
	
Label_6841:
	var_713_bool = 0; // 0x1ab9 MovB
	return 0; // 0x1aba Return
}


func_5815(var_55_bool)
{
	var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); // 0x16b7 PushV
	GetPosition(var_58_cvector); // 0x16b8 ObjFunc
	var_59_bool = 0; var_60_cvector = CVector(0,0,0); // 0x16ba PushV
	var_60_cvector = var_58_cvector; // 0x16bb Mov
	func_5805(var_59_bool, var_60_cvector); // 0x16bc NEW_2
	var_55_bool = var_59_bool; // 0x16bd Mov
	return 2; // 0x16bf Return
}


func_7354(var_122_object, var_123_string, var_124_float)
{
	var_126_cvector = CVector(0,0,0); var_127_cvector = CVector(0,0,0); var_128_object = Obj(); var_129_bool = 0; var_130_cvector = CVector(0,0,0); var_131_cvector = CVector(0,0,0); var_132_object = Obj(); var_133_bool = 0; // 0x1cba PushV
	GetMainOutdoorScene(var_132_object); // 0x1cbb Func
	var_134_bool = var_132_object == 0; // 0x1cbd NullEq
	if(var_134_bool == 0) goto Label_7363; // 0x1cbe JumpB
	var_135_string = "Can't find main outdoor scene"; // 0x1cbf PushS
	Trace(var_135_string); // 0x1cc0 Func
	return 8; // 0x1cc2 Return
	
Label_7363:
	GetLocator(var_123_string, var_133_bool, var_130_cvector, var_131_cvector); // 0x1cc3 ObjFunc
	var_136_bool = var_133_bool == 0; // 0x1cc5 Not
	if(var_136_bool == 0) goto Label_7373; // 0x1cc6 JumpB
	var_137_string = "Warning: outdoor scene locator "; // 0x1cc7 PushS
	var_138_int = var_137_string + var_123_string; // 0x1cc8 Add
	var_139_string = " doesnt exist"; // 0x1cc9 PushS
	var_140_int = var_138_int + var_139_string; // 0x1cca Add
	Trace(var_140_int); // 0x1ccb Func
	
Label_7373:
	GetMap(var_122_object); // 0x1ccd ObjFunc
	var_141_bool = var_122_object == 0; // 0x1ccf NullEq
	if(var_141_bool == 0) goto Label_7381; // 0x1cd0 JumpB
	var_142_string = "Can't find map"; // 0x1cd1 PushS
	Trace(var_142_string); // 0x1cd2 Func
	return 8; // 0x1cd4 Return
	
Label_7381:
	var_143_float = GetByIndex(var_130_cvector, 0); // 0x1cd5 PushE
	var_144_float = GetByIndex(var_130_cvector, 2); // 0x1cd6 PushE
	SetMapParams(var_143_float, var_144_float, var_124_float); // 0x1cd7 ObjFunc
	return 8; // 0x1cd9 Return
}


func_6843(var_762_bool)
{
	var_764_int = 0; var_765_string = ""; // 0x1abc PushV
	var_765_string = "oob9Kapella1"; // 0x1abd MovS
	func_6123(var_764_int, var_765_string); // 0x1abe NEW_2
	var_766_int = 0; // 0x1ac0 PushI
	var_767_bool = var_764_int == var_766_int; // 0x1ac1 Eq
	if(var_767_bool == 0) goto Label_6853; // 0x1ac2 JumpB
	var_762_bool = 1; // 0x1ac3 MovB
	return 0; // 0x1ac4 Return
	
Label_6853:
	var_762_bool = 0; // 0x1ac5 MovB
	return 0; // 0x1ac6 Return
}


func_6335()
{
	var_214_string = "oob1Kapella4"; // 0x18c0 PushS
	var_215_int = 1; // 0x18c1 PushI
	SetVariable(var_214_string, var_215_int); // 0x18c2 Func
	return 0; // 0x18c4 Return
}


func_5824(var_52_bool)
{
	var_53_bool = 0; var_54_bool = 0; // 0x16c0 PushV
	IsLoaded(var_54_bool); // 0x16c1 Func
	var_52_bool = var_54_bool; // 0x16c3 Mov
	return 2; // 0x16c4 Return
}


func_5829(var_83_bool, var_85_float)
{
	var_86_float = 0; var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_bool = 0; var_94_bool = 0; var_95_float = 0; var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_bool = 0; var_103_bool = 0; // 0x16c5 PushV
	GetPosition(var_96_cvector); // 0x16c6 ObjFunc
	GetEyesHeight(var_95_float); // 0x16c8 ObjFunc
	var_104_float = GetByIndex(var_96_cvector, 1); // 0x16ca PushE
	var_104_float = var_104_float + var_95_float; // 0x16cb Add2
	SetByIndex(var_96_cvector, 1) = var_104_float; // 0x16cc PopE
	GetPosition(var_97_cvector); // 0x16cd Func
	GetEyesHeight(var_95_float); // 0x16cf Func
	var_105_float = GetByIndex(var_97_cvector, 1); // 0x16d1 PushE
	var_105_float = var_105_float + var_95_float; // 0x16d2 Add2
	SetByIndex(var_97_cvector, 1) = var_105_float; // 0x16d3 PopE
	var_98_cvector = var_96_cvector - var_97_cvector; // 0x16d4 Sub2
	var_106_float = GetByIndex(var_98_cvector, 1); // 0x16d5 PushE
	var_106_float = 0; // 0x16d6 MovI
	SetByIndex(var_98_cvector, 1) = var_106_float; // 0x16d7 PopE
	var_107_int = var_98_cvector | var_98_cvector; // 0x16d8 Or
	var_108_float = sqrt(var_107_int); // 0x16d9 Sqrt
	var_98_cvector = var_98_cvector / var_98_cvector; // 0x16da Div2
	var_99_cvector = -var_98_cvector; // 0x16db Neg2
	var_109_float = var_98_cvector * var_85_float; // 0x16dc Mult
	var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0); // 0x16dd PushV
	var_112_cvector = CVector(0.0, 1.0, 0.0); // 0x16de PushVec
	var_111_cvector = var_99_cvector ^ var_112_cvector; // 0x16df Xor2
	func_6113(var_110_cvector, var_111_cvector); // 0x16e0 NEW_2
	var_118_int = 25; // 0x16e2 PushI
	var_119_float = var_110_cvector * var_118_int; // 0x16e3 Mult
	var_120_int = var_109_float + var_119_float; // 0x16e4 Add
	var_121_cvector = CVector(0.0, 10.0, 0.0); // 0x16e5 PushVec
	var_100_cvector = var_120_int - var_121_cvector; // 0x16e6 Sub2
	var_101_cvector = var_97_cvector + var_100_cvector; // 0x16e7 Add2
	IsOverrideActive(var_102_bool); // 0x16e8 Func
	var_122_bool = var_102_bool; // 0x16ea Push
	if(var_122_bool == 0) goto Label_5870; // 0x16eb JumpB
	var_83_bool = 0; // 0x16ec MovB
	return 18; // 0x16ed Return
	
Label_5870:
	StopWorld(); // 0x16ee Func
	var_123_bool = 1; // 0x16f0 PushB
	CameraTransit(var_101_cvector, var_99_cvector, var_123_bool); // 0x16f1 Func
	var_124_float = GetByIndex(var_100_cvector, 0); // 0x16f3 PushE
	var_125_float = GetByIndex(var_100_cvector, 2); // 0x16f4 PushE
	Rotate(var_124_float, var_125_float); // 0x16f5 Func
	var_126_bool = 0; // 0x16f7 PushV
	func_6274(var_126_bool); // 0x16f8 NEW_2
	if(var_126_bool == 0) goto Label_5884; // 0x16fa JumpB
	goto Label_5892; // 0x16fb Jump
	
Label_5892:
	CameraWaitForPlayFinish(); // 0x1704 Func
	ResumeWorld(); // 0x1706 Func
	var_83_bool = 1; // 0x1708 MovB
	return 18; // 0x1709 Return
	
Label_5884:
	var_127_string = "head"; // 0x16fc PushS
	HasAnimationTrack(var_103_bool, var_127_string); // 0x16fd Func
	var_128_bool = var_103_bool; // 0x16ff Push
	if(var_128_bool == 0) goto Label_5892; // 0x1700 JumpB
	var_129_string = "head"; // 0x1701 PushS
	LookAsyncCamera(var_129_string); // 0x1702 Func
}


func_6341()
{
	var_59_string = "oob2Kapella1"; // 0x18c6 PushS
	var_60_int = 1; // 0x18c7 PushI
	SetVariable(var_59_string, var_60_int); // 0x18c8 Func
	return 0; // 0x18ca Return
}


func_6855(var_785_bool)
{
	var_787_int = 0; var_788_string = ""; // 0x1ac8 PushV
	var_788_string = "b9q03"; // 0x1ac9 MovS
	func_6123(var_787_int, var_788_string); // 0x1aca NEW_2
	var_789_int = 0; // 0x1acc PushI
	var_790_bool = var_787_int == var_789_int; // 0x1acd Eq
	if(var_790_bool == 0) goto Label_6865; // 0x1ace JumpB
	var_785_bool = 1; // 0x1acf MovB
	return 0; // 0x1ad0 Return
	
Label_6865:
	var_785_bool = 0; // 0x1ad1 MovB
	return 0; // 0x1ad2 Return
}


func_6347()
{
	var_630_string = "oob8Kapella1"; // 0x18cc PushS
	var_631_int = 1; // 0x18cd PushI
	SetVariable(var_630_string, var_631_int); // 0x18ce Func
	return 0; // 0x18d0 Return
}


func_2254(var_2_object, var_246_string)
{
	var_247_bool = 0; // 0x8cf PushV
	func_6274(var_247_bool); // 0x8d0 NEW_2
	var_248_bool = var_247_bool == 0; // 0x8d2 Not
	if(var_248_bool == 0) goto Label_2261; // 0x8d3 JumpB
	return 0; // 0x8d4 Return
	
Label_2261:
	var_249_bool = var_246_string == var_2_object; // 0x8d5 Eq
	if(var_249_bool == 0) goto Label_2264; // 0x8d6 JumpB
	return 0; // 0x8d7 Return
	
Label_2264:
	var_250_string = ""; var_251_bool = 0; // 0x8d8 PushV
	var_250_string = var_246_string; // 0x8d9 Mov
	var_252_string = ""; // 0x8da PushS
	var_253_bool = var_246_string == var_252_string; // 0x8db Eq
	if(var_253_bool == 0) goto Label_2271; // 0x8dc JumpB
	var_251_bool = 0; // 0x8dd MovB
	goto Label_2272; // 0x8de Jump
	
Label_2272:
	func_6070(var_250_string, var_251_bool); // 0x8e0 NEW_2
	var_2_object = var_246_string; // 0x8e2 TMov
	return 0; // 0x8e3 Return
	
Label_2271:
	var_251_bool = 1; // 0x8df MovB
}


func_5328(var_0_object, var_1100_int, var_1101_object)
{
	var_1103_object = Obj(); var_1104_bool = 0; var_1105_int = 0; var_1106_bool = 0; var_1107_object = Obj(); var_1108_bool = 0; var_1109_int = 0; var_1110_bool = 0; // 0x14d0 PushV
	var_0_object = var_1101_object; // 0x14d1 TMov
	var_1111_bool = 0; var_1112_object = Obj(); var_1113_float = 0; // 0x14d2 PushV
	var_1112_object = var_1101_object; // 0x14d3 Mov
	var_1113_float = 70.0; // 0x14d4 MovF
	func_5829(var_1112_object, var_1113_float); // 0x14d5 NEW_2
	var_1114_bool = var_1111_bool == 0; // 0x14d7 Not
	if(var_1114_bool == 0) goto Label_5339; // 0x14d8 JumpB
	var_1100_int = -2; // 0x14d9 MovI
	return 8; // 0x14da Return
	
Label_5339:
	CreateDialog(var_1107_object); // 0x14db Func
	var_1115_int = 0; // 0x14dd PushV
	func_6268(var_1115_int); // 0x14de NEW_2
	SetNPCName(var_1115_int); // 0x14e0 ObjFunc
	var_1116_int = 0; // 0x14e2 PushV
	func_6266(var_1116_int); // 0x14e3 NEW_2
	SetNPCDescription(var_1116_int); // 0x14e5 ObjFunc
	var_1117_string = ""; // 0x14e7 PushV
	func_6270(var_1117_string); // 0x14e8 NEW_2
	SetPhoto(var_1117_string); // 0x14ea ObjFunc
	var_1118_string = ""; // 0x14ec PushV
	func_6272(var_1118_string); // 0x14ed NEW_2
	SetPhoto2(var_1118_string); // 0x14ef ObjFunc
	var_1119_int = 0; // 0x14f1 PushV
	func_7387(var_1119_int); // 0x14f2 NEW_2
	SetPlayerName(var_1119_int); // 0x14f4 ObjFunc
	var_1109_int = -1; // 0x14f6 MovI
	IsOverrideActive(var_1108_bool); // 0x14f7 Func
	var_1120_bool = var_1108_bool; // 0x14f9 Push
	if(var_1120_bool == 0) goto Label_5373; // 0x14fa JumpB
	var_1100_int = -2; // 0x14fb MovI
	return 8; // 0x14fc Return
	
Label_5373:
	DoDialog(var_1107_object); // 0x14fd Func
	var_1121_bool = 0; var_1122_object = Obj(); // 0x14ff PushV
	var_1123_object = Obj(); // 0x1500 PushV
	func_6107(var_1123_object); // 0x1501 NEW_2
	var_1122_object = var_1123_object; // 0x1502 Mov
	func_5916(var_1121_bool, var_1122_object); // 0x1504 NEW_2
	var_1124_object = Obj(); var_1125_object = Obj(); // 0x1506 PushV
	var_1124_object = var_1101_object; // 0x1507 Mov
	var_1125_object = var_1107_object; // 0x1508 Mov
	TaskCall(19); // 0x1509 TaskCall
	func_5409(var_1126_object, var_1127_object, var_1128_string, var_1129_bool, var_1124_object, var_1125_object); // 0x150a NEW_2
	TaskReturn(); // 0x150b TaskReturn
	IsDialogEnd(var_1110_bool); // 0x150d ObjFunc
	
Label_5391:
	var_1154_bool = var_1110_bool == 0; // 0x150f Not
	if(var_1154_bool == 0) goto Label_5398; // 0x1510 JumpB
	sync(); // 0x1511 Func
	IsDialogEnd(var_1110_bool); // 0x1513 ObjFunc
	goto Label_5391; // 0x1515 Jump
	
Label_5398:
	var_1155_object = Obj(); // 0x1516 PushV
	var_1155_object = var_1101_object; // 0x1517 Mov
	func_5898(); // 0x1518 NEW_2
	StopDialog(var_1107_object); // 0x151a Func
	GetReturnValue(var_1109_int); // 0x151c ObjFunc
	var_1100_int = var_1109_int; // 0x151e Mov
	return 8; // 0x151f Return
}


func_6353()
{
	var_59_string = "oob8Kapella2"; // 0x18d2 PushS
	var_60_int = 1; // 0x18d3 PushI
	SetVariable(var_59_string, var_60_int); // 0x18d4 Func
	return 0; // 0x18d6 Return
}


func_6867(var_720_bool)
{
	var_722_int = 0; var_723_string = ""; // 0x1ad4 PushV
	var_723_string = "b9q03BadInit"; // 0x1ad5 MovS
	func_6123(var_722_int, var_723_string); // 0x1ad6 NEW_2
	var_724_int = 0; // 0x1ad8 PushI
	var_725_bool = var_722_int != var_724_int; // 0x1ad9 Neq
	if(var_725_bool == 0) goto Label_6877; // 0x1ada JumpB
	var_720_bool = 1; // 0x1adb MovB
	return 0; // 0x1adc Return
	
Label_6877:
	var_720_bool = 0; // 0x1add MovB
	return 0; // 0x1ade Return
}


func_6359()
{
	var_65_object = Obj(); var_66_object = Obj(); // 0x18d7 PushV
	var_67_object = Obj(); // 0x18d8 PushV
	func_7337(var_67_object); // 0x18d9 NEW_2
	var_66_object = var_67_object; // 0x18da Mov
	var_74_string = "b8q01KapellaGotoKlara"; // 0x18dc PushS
	var_75_string = "pt_map_mishka"; // 0x18dd PushS
	var_76_int = 3; // 0x18de PushI
	var_77_int = 521465; // 0x18df PushI
	var_78_float = 0; // 0x18e0 PushV
	func_6214(var_78_float); // 0x18e1 NEW_2
	AddMark(var_74_string, var_75_string, var_76_int, var_77_int, var_78_float); // 0x18e3 ObjFunc
	return 2; // 0x18e5 Return
}


func_7387(var_135_int)
{
	var_136_int = 0; var_137_int = 0; // 0x1cdb PushV
	var_138_string = "branch"; // 0x1cdc PushS
	GetVariable(var_138_string, var_137_int); // 0x1cdd Func
	var_139_int = 0; // 0x1cdf PushI
	var_140_bool = var_137_int == var_139_int; // 0x1ce0 Eq
	if(var_140_bool == 0) goto Label_7397; // 0x1ce1 JumpB
	var_135_int = 1; // 0x1ce2 MovI
	return 2; // 0x1ce3 Return
	
Label_7397:
	var_141_int = 1; // 0x1ce5 PushI
	var_142_bool = var_137_int == var_141_int; // 0x1ce6 Eq
	if(var_142_bool == 0) goto Label_7402; // 0x1ce7 JumpB
	var_135_int = 2; // 0x1ce8 MovI
	return 2; // 0x1ce9 Return
	
Label_7402:
	var_135_int = 3; // 0x1cea MovI
	return 2; // 0x1ceb Return
}


func_6879(var_797_bool)
{
	var_799_int = 0; var_800_string = ""; // 0x1ae0 PushV
	var_800_string = "b9q03BonefiresCount"; // 0x1ae1 MovS
	func_6123(var_799_int, var_800_string); // 0x1ae2 NEW_2
	var_801_int = 4; // 0x1ae4 PushI
	var_802_bool = var_799_int == var_801_int; // 0x1ae5 Eq
	if(var_802_bool == 0) goto Label_6889; // 0x1ae6 JumpB
	var_797_bool = 1; // 0x1ae7 MovB
	return 0; // 0x1ae8 Return
	
Label_6889:
	var_797_bool = 0; // 0x1ae9 MovB
	return 0; // 0x1aea Return
}


func_1249(var_2_object, var_341_string)
{
	var_342_bool = 0; // 0x4e2 PushV
	func_6274(var_342_bool); // 0x4e3 NEW_2
	var_343_bool = var_342_bool == 0; // 0x4e5 Not
	if(var_343_bool == 0) goto Label_1256; // 0x4e6 JumpB
	return 0; // 0x4e7 Return
	
Label_1256:
	var_344_bool = var_341_string == var_2_object; // 0x4e8 Eq
	if(var_344_bool == 0) goto Label_1259; // 0x4e9 JumpB
	return 0; // 0x4ea Return
	
Label_1259:
	var_345_string = ""; var_346_bool = 0; // 0x4eb PushV
	var_345_string = var_341_string; // 0x4ec Mov
	var_347_string = ""; // 0x4ed PushS
	var_348_bool = var_341_string == var_347_string; // 0x4ee Eq
	if(var_348_bool == 0) goto Label_1266; // 0x4ef JumpB
	var_346_bool = 0; // 0x4f0 MovB
	goto Label_1267; // 0x4f1 Jump
	
Label_1267:
	func_6070(var_345_string, var_346_bool); // 0x4f3 NEW_2
	var_2_object = var_341_string; // 0x4f5 TMov
	return 0; // 0x4f6 Return
	
Label_1266:
	var_346_bool = 1; // 0x4f2 MovB
}


func_6375()
{
	var_124_string = "b10q01TalkKapella"; // 0x18e8 PushS
	var_125_int = 1; // 0x18e9 PushI
	SetVariable(var_124_string, var_125_int); // 0x18ea Func
	return 0; // 0x18ec Return
}


func_3819(var_0_object, var_1_object, var_2_object, var_3_string, var_704_object, var_705_object)
{
	var_0_object = var_705_object; // 0xeec TMov
	var_1_object = var_704_object; // 0xeed TMov
	var_3_string = 0; // 0xeee TMovB
	var_710_int = 1; // 0xeef PushI
	if(var_710_int == 0) goto Label_3964; // 0xef0 JumpB
	var_711_bool = 0; // 0xef1 PushV
	var_711_bool = 0; // 0xef2 MovB
	var_712_bool = 0; // 0xef3 PushV
	var_712_bool = 0; // 0xef4 MovB
	var_713_bool = 0; var_714_object = Obj(); // 0xef5 PushV
	var_714_object = var_1_object; // 0xef6 MovT
	func_6831(var_714_object); // 0xef7 NEW_2
	var_719_bool = var_713_bool == 0; // 0xef9 Not
	if(var_719_bool == 0) goto Label_3842; // 0xefa JumpB
	var_720_bool = 0; var_721_object = Obj(); // 0xefb PushV
	var_721_object = var_1_object; // 0xefc MovT
	func_6867(var_721_object); // 0xefd NEW_2
	var_726_bool = var_720_bool == 0; // 0xeff Not
	if(var_726_bool == 0) goto Label_3842; // 0xf00 JumpB
	var_712_bool = 1; // 0xf01 MovB
	
Label_3842:
	if(var_712_bool == 0) goto Label_3849; // 0xf02 JumpB
	var_727_bool = 0; var_728_object = Obj(); // 0xf03 PushV
	var_728_object = var_1_object; // 0xf04 MovT
	func_6903(var_727_bool, var_728_object); // 0xf05 NEW_2
	if(var_727_bool == 0) goto Label_3849; // 0xf07 JumpB
	var_711_bool = 1; // 0xf08 MovB
	
Label_3849:
	if(var_711_bool == 0) goto Label_3870; // 0xf09 JumpB
	var_738_string = ""; // 0xf0a PushV
	var_738_string = "Neutral"; // 0xf0b MovS
	func_3994(var_705_object, var_738_string); // 0xf0c NEW_2
	var_746_int = 530291; // 0xf0e PushI
	SetMessage(var_746_int); // 0xf0f TObjFunc
	ClearReplies(); // 0xf11 TObjFunc
	var_747_int = 531185; // 0xf13 PushI
	var_748_int = -1; // 0xf14 PushI
	var_749_int = 32490; // 0xf15 PushI
	AddReply(var_747_int, var_748_int, var_749_int); // 0xf16 TObjFunc
	var_750_int = 530292; // 0xf18 PushI
	var_751_int = -1; // 0xf19 PushI
	var_752_int = 31680; // 0xf1a PushI
	AddReply(var_750_int, var_751_int, var_752_int); // 0xf1b TObjFunc
	goto Label_3964; // 0xf1d Jump
	
Label_3964:
	var_753_bool = 0; // 0xf7c PushV
	func_6274(var_753_bool); // 0xf7d NEW_2
	if(var_753_bool == 0) goto Label_3979; // 0xf7f JumpB
	
Label_3968:
	lshWaitForAnimEnd(); // 0xf80 Func
	var_754_string = var_3_string; // 0xf82 PushT
	if(var_754_string == 0) goto Label_3973; // 0xf83 JumpB
	goto Label_3978; // 0xf84 Jump
	
Label_3978:
	goto Label_3993; // 0xf8a Jump
	
Label_3993:
	return 0; // 0xf99 Return
	
Label_3973:
	var_755_string = ""; // 0xf85 PushV
	var_755_string = var_2_object; // 0xf86 MovT
	func_6054(var_755_string); // 0xf87 NEW_2
	goto Label_3968; // 0xf89 Jump
	
Label_3979:
	var_756_string = "all"; // 0xf8b PushS
	var_757_string = "idle"; // 0xf8c PushS
	PlayAnimation(var_756_string, var_757_string); // 0xf8d Func
	
Label_3983:
	WaitForAnimEnd(); // 0xf8f Func
	var_758_string = var_3_string; // 0xf91 PushT
	if(var_758_string == 0) goto Label_3988; // 0xf92 JumpB
	goto Label_3993; // 0xf93 Jump
	
Label_3988:
	var_759_string = "all"; // 0xf94 PushS
	var_760_string = "idle"; // 0xf95 PushS
	PlayAnimation(var_759_string, var_760_string); // 0xf96 Func
	goto Label_3983; // 0xf98 Jump
	
Label_3870:
	var_761_bool = 0; // 0xf1e PushV
	var_761_bool = 0; // 0xf1f MovB
	var_762_bool = 0; var_763_object = Obj(); // 0xf20 PushV
	var_763_object = var_1_object; // 0xf21 MovT
	func_6843(var_763_object); // 0xf22 NEW_2
	if(var_762_bool == 0) goto Label_3883; // 0xf24 JumpB
	var_768_bool = 0; var_769_object = Obj(); // 0xf25 PushV
	var_769_object = var_1_object; // 0xf26 MovT
	func_6903(var_768_bool, var_769_object); // 0xf27 NEW_2
	if(var_768_bool == 0) goto Label_3883; // 0xf29 JumpB
	var_761_bool = 1; // 0xf2a MovB
	
Label_3883:
	if(var_761_bool == 0) goto Label_3909; // 0xf2b JumpB
	var_770_object = Obj(); var_771_object = Obj(); // 0xf2c PushV
	var_770_object = var_1_object; // 0xf2d MovT
	var_771_object = var_0_object; // 0xf2e MovT
	func_6403(); // 0xf2f NEW_2
	var_774_string = ""; // 0xf31 PushV
	var_774_string = "Impatience"; // 0xf32 MovS
	func_3994(var_705_object, var_774_string); // 0xf33 NEW_2
	var_775_int = 530293; // 0xf35 PushI
	SetMessage(var_775_int); // 0xf36 TObjFunc
	ClearReplies(); // 0xf38 TObjFunc
	var_776_int = 531188; // 0xf3a PushI
	var_777_int = 32494; // 0xf3b PushI
	var_778_int = 32493; // 0xf3c PushI
	AddReply(var_776_int, var_777_int, var_778_int); // 0xf3d TObjFunc
	var_779_int = 531193; // 0xf3f PushI
	var_780_int = 32496; // 0xf40 PushI
	var_781_int = 32498; // 0xf41 PushI
	AddReply(var_779_int, var_780_int, var_781_int); // 0xf42 TObjFunc
	goto Label_3964; // 0xf44 Jump
	
Label_3909:
	var_782_string = ""; // 0xf45 PushV
	var_782_string = "Neutral"; // 0xf46 MovS
	func_3994(var_705_object, var_782_string); // 0xf47 NEW_2
	var_783_int = 530302; // 0xf49 PushI
	SetMessage(var_783_int); // 0xf4a TObjFunc
	ClearReplies(); // 0xf4c TObjFunc
	var_784_bool = 0; // 0xf4e PushV
	var_784_bool = 0; // 0xf4f MovB
	var_785_bool = 0; var_786_object = Obj(); // 0xf50 PushV
	var_786_object = var_1_object; // 0xf51 MovT
	func_6855(var_786_object); // 0xf52 NEW_2
	if(var_785_bool == 0) goto Label_3931; // 0xf54 JumpB
	var_791_bool = 0; var_792_object = Obj(); // 0xf55 PushV
	var_792_object = var_1_object; // 0xf56 MovT
	func_6903(var_791_bool, var_792_object); // 0xf57 NEW_2
	if(var_791_bool == 0) goto Label_3931; // 0xf59 JumpB
	var_784_bool = 1; // 0xf5a MovB
	
Label_3931:
	if(var_784_bool == 0) goto Label_3937; // 0xf5b JumpB
	var_793_int = 530303; // 0xf5c PushI
	var_794_int = 31692; // 0xf5d PushI
	var_795_int = 31691; // 0xf5e PushI
	AddReply(var_793_int, var_794_int, var_795_int); // 0xf5f TObjFunc
	
Label_3937:
	var_796_bool = 0; // 0xf61 PushV
	var_796_bool = 0; // 0xf62 MovB
	var_797_bool = 0; var_798_object = Obj(); // 0xf63 PushV
	var_798_object = var_1_object; // 0xf64 MovT
	func_6879(var_798_object); // 0xf65 NEW_2
	if(var_797_bool == 0) goto Label_3950; // 0xf67 JumpB
	var_803_bool = 0; var_804_object = Obj(); // 0xf68 PushV
	var_804_object = var_1_object; // 0xf69 MovT
	func_6891(var_804_object); // 0xf6a NEW_2
	if(var_803_bool == 0) goto Label_3950; // 0xf6c JumpB
	var_796_bool = 1; // 0xf6d MovB
	
Label_3950:
	if(var_796_bool == 0) goto Label_3956; // 0xf6e JumpB
	var_809_int = 530333; // 0xf6f PushI
	var_810_int = 31721; // 0xf70 PushI
	var_811_int = 31720; // 0xf71 PushI
	AddReply(var_809_int, var_810_int, var_811_int); // 0xf72 TObjFunc
	
Label_3956:
	var_812_int = 530306; // 0xf74 PushI
	var_813_int = -1; // 0xf75 PushI
	var_814_int = 31694; // 0xf76 PushI
	AddReply(var_812_int, var_813_int, var_814_int); // 0xf77 TObjFunc
	goto Label_3964; // 0xf79 Jump
}


func_6891(var_803_bool)
{
	var_805_int = 0; var_806_string = ""; // 0x1aec PushV
	var_806_string = "b9q03"; // 0x1aed MovS
	func_6123(var_805_int, var_806_string); // 0x1aee NEW_2
	var_807_int = 1; // 0x1af0 PushI
	var_808_bool = var_805_int == var_807_int; // 0x1af1 Eq
	if(var_808_bool == 0) goto Label_6901; // 0x1af2 JumpB
	var_803_bool = 1; // 0x1af3 MovB
	return 0; // 0x1af4 Return
	
Label_6901:
	var_803_bool = 0; // 0x1af5 MovB
	return 0; // 0x1af6 Return
}


func_6381()
{
	var_140_string = "oob10Kapella1"; // 0x18ee PushS
	var_141_int = 1; // 0x18ef PushI
	SetVariable(var_140_string, var_141_int); // 0x18f0 Func
	return 0; // 0x18f2 Return
}


func_7404(var_70_bool, var_71_int)
{
	var_72_int = 18; // 0x1ced PushI
	add(var_72_int); // 0x1cee ObjFunc
	var_73_int = 24; // 0x1cf0 PushI
	add(var_73_int); // 0x1cf1 ObjFunc
	var_74_int = 20; // 0x1cf3 PushI
	add(var_74_int); // 0x1cf4 ObjFunc
	var_75_int = 14; // 0x1cf6 PushI
	add(var_75_int); // 0x1cf7 ObjFunc
	var_76_bool = 0; // 0x1cf9 PushB
	var_77_bool = var_70_bool == var_76_bool; // 0x1cfa Eq
	if(var_77_bool == 0) goto Label_7430; // 0x1cfb JumpB
	var_78_int = 10; // 0x1cfc PushI
	add(var_78_int); // 0x1cfd ObjFunc
	var_79_int = 17; // 0x1cff PushI
	add(var_79_int); // 0x1d00 ObjFunc
	var_80_int = 8; // 0x1d02 PushI
	add(var_80_int); // 0x1d03 ObjFunc
	goto Label_7436; // 0x1d05 Jump
	
Label_7436:
	return 0; // 0x1d0c Return
	
Label_7430:
	var_81_int = 1; // 0x1d06 PushI
	var_82_bool = var_71_int != var_81_int; // 0x1d07 Neq
	if(var_82_bool == 0) goto Label_7436; // 0x1d08 JumpB
	var_83_int = 10; // 0x1d09 PushI
	add(var_83_int); // 0x1d0a ObjFunc
}


func_6387()
{
	var_100_string = "b1ResqueList"; // 0x18f4 PushS
	var_101_int = 1; // 0x18f5 PushI
	SetVariable(var_100_string, var_101_int); // 0x18f6 Func
	return 0; // 0x18f8 Return
}


func_6903(var_727_bool, var_728_object)
{
	var_729_bool = 0; var_730_object = Obj(); // 0x1af8 PushV
	var_730_object = var_728_object; // 0x1af9 Mov
	func_7129(var_730_object); // 0x1afa NEW_2
	if(var_729_bool == 0) goto Label_6911; // 0x1afc JumpB
	var_727_bool = 1; // 0x1afd MovB
	return 0; // 0x1afe Return
	
Label_6911:
	var_727_bool = 0; // 0x1aff MovB
	return 0; // 0x1b00 Return
}


func_6393(var_206_object)
{
	var_208_string = "money1000 is given"; // 0x18fa PushS
	Trace(var_208_string); // 0x18fb Func
	var_209_object = Obj(); var_210_int = 0; // 0x18fd PushV
	var_209_object = var_206_object; // 0x18fe Mov
	var_210_int = 1000; // 0x18ff MovI
	func_6151(var_209_object, var_210_int); // 0x1900 NEW_2
	return 0; // 0x1902 Return
}


func_6913(var_913_bool)
{
	var_915_int = 0; var_916_string = ""; // 0x1b02 PushV
	var_916_string = "b10q04GirlGotoKapella"; // 0x1b03 MovS
	func_6123(var_915_int, var_916_string); // 0x1b04 NEW_2
	var_917_int = 0; // 0x1b06 PushI
	var_918_bool = var_915_int != var_917_int; // 0x1b07 Neq
	if(var_918_bool == 0) goto Label_6923; // 0x1b08 JumpB
	var_913_bool = 1; // 0x1b09 MovB
	return 0; // 0x1b0a Return
	
Label_6923:
	var_913_bool = 0; // 0x1b0b MovB
	return 0; // 0x1b0c Return
}


func_6403()
{
	var_772_string = "oob9Kapella1"; // 0x1904 PushS
	var_773_int = 1; // 0x1905 PushI
	SetVariable(var_772_string, var_773_int); // 0x1906 Func
	return 0; // 0x1908 Return
}


func_6409()
{
	var_59_object = Obj(); var_60_object = Obj(); // 0x1909 PushV
	var_61_string = "b9q03"; // 0x190a PushS
	var_62_int = 1; // 0x190b PushI
	SetVariable(var_61_string, var_62_int); // 0x190c Func
	var_63_object = Obj(); // 0x190e PushV
	func_7337(var_63_object); // 0x190f NEW_2
	var_60_object = var_63_object; // 0x1910 Mov
	var_70_string = "b9q03KapellaGotoSpi4ka"; // 0x1912 PushS
	var_71_string = "pt_map_spi4ka"; // 0x1913 PushS
	var_72_int = 0; // 0x1914 PushI
	var_73_int = 530307; // 0x1915 PushI
	var_74_float = 0; // 0x1916 PushV
	func_6214(var_74_float); // 0x1917 NEW_2
	AddMark(var_70_string, var_71_string, var_72_int, var_73_int, var_74_float); // 0x1919 ObjFunc
	func_7257(); // 0x191c NEW_2
	func_7283(); // 0x191f NEW_2
	var_108_bool = 0; var_109_string = ""; var_110_string = ""; // 0x1921 PushV
	var_109_string = "quest_b9_03"; // 0x1922 MovS
	var_110_string = "init_house_spi4ka"; // 0x1923 MovS
	func_6202(var_108_bool, var_109_string, var_110_string); // 0x1924 NEW_2
	var_114_bool = 0; var_115_string = ""; var_116_string = ""; // 0x1926 PushV
	var_115_string = "quest_b9_03"; // 0x1927 MovS
	var_116_string = "place_follower"; // 0x1928 MovS
	func_6202(var_114_bool, var_115_string, var_116_string); // 0x1929 NEW_2
	var_117_bool = 0; var_118_string = ""; var_119_string = ""; // 0x192b PushV
	var_118_string = "quest_b9_03"; // 0x192c MovS
	var_119_string = "init_bonefires"; // 0x192d MovS
	func_6202(var_117_bool, var_118_string, var_119_string); // 0x192e NEW_2
	return 2; // 0x1930 Return
}


func_5898()
{
	var_290_bool = 0; var_291_bool = 0; // 0x170a PushV
	var_292_bool = 1; // 0x170b PushB
	CameraSwitchToNormal(var_292_bool); // 0x170c Func
	var_293_bool = 0; // 0x170e PushV
	func_6274(var_293_bool); // 0x170f NEW_2
	if(var_293_bool == 0) goto Label_5907; // 0x1711 JumpB
	goto Label_5915; // 0x1712 Jump
	
Label_5915:
	return 2; // 0x171b Return
	
Label_5907:
	var_294_string = "head"; // 0x1713 PushS
	HasAnimationTrack(var_291_bool, var_294_string); // 0x1714 Func
	var_295_bool = var_291_bool; // 0x1716 Push
	if(var_295_bool == 0) goto Label_5915; // 0x1717 JumpB
	var_296_string = "head"; // 0x1718 PushS
	UnlookAsync(var_296_string); // 0x1719 Func
}


func_6925(var_978_bool)
{
	var_980_int = 0; var_981_string = ""; // 0x1b0e PushV
	var_981_string = "oob11Kapella1"; // 0x1b0f MovS
	func_6123(var_980_int, var_981_string); // 0x1b10 NEW_2
	var_982_int = 0; // 0x1b12 PushI
	var_983_bool = var_980_int == var_982_int; // 0x1b13 Eq
	if(var_983_bool == 0) goto Label_6935; // 0x1b14 JumpB
	var_978_bool = 1; // 0x1b15 MovB
	return 0; // 0x1b16 Return
	
Label_6935:
	var_978_bool = 0; // 0x1b17 MovB
	return 0; // 0x1b18 Return
}


func_7437(var_85_int)
{
	var_86_int = 0; var_87_int = 0; // 0x1d0d PushV
	var_88_string = "vol_"; // 0x1d0e PushS
	var_89_int = var_88_string + var_85_int; // 0x1d0f Add
	GetVariable(var_89_int, var_87_int); // 0x1d10 Func
	var_90_string = "vol_"; // 0x1d12 PushS
	var_91_int = var_90_string + var_85_int; // 0x1d13 Add
	var_92_int = 8; // 0x1d14 PushI
	var_93_int = var_87_int | var_92_int; // 0x1d15 Or
	SetVariable(var_91_int, var_93_int); // 0x1d16 Func
	return 2; // 0x1d18 Return
}


func_6937(var_1013_bool)
{
	var_1015_int = 0; var_1016_string = ""; // 0x1b1a PushV
	var_1016_string = "b11q02"; // 0x1b1b MovS
	func_6123(var_1015_int, var_1016_string); // 0x1b1c NEW_2
	var_1017_int = 0; // 0x1b1e PushI
	var_1018_bool = var_1015_int == var_1017_int; // 0x1b1f Eq
	if(var_1018_bool == 0) goto Label_6947; // 0x1b20 JumpB
	var_1013_bool = 1; // 0x1b21 MovB
	return 0; // 0x1b22 Return
	
Label_6947:
	var_1013_bool = 0; // 0x1b23 MovB
	return 0; // 0x1b24 Return
}


func_7449()
{
	var_61_object = Obj(); var_62_int = 0; var_63_int = 0; var_64_int = 0; var_65_object = Obj(); var_66_int = 0; var_67_int = 0; var_68_int = 0; // 0x1d19 PushV
	CreateIntVector(var_65_object); // 0x1d1a Func
	var_69_object = Obj(); var_70_bool = 0; var_71_int = 0; // 0x1d1c PushV
	var_69_object = var_65_object; // 0x1d1d Mov
	var_70_bool = 0; // 0x1d1e MovB
	var_71_int = -1; // 0x1d1f MovI
	func_7404(var_70_bool, var_71_int); // 0x1d20 NEW_2
	size(var_66_int); // 0x1d22 ObjFunc
	var_67_int = 0; // 0x1d24 MovI
	
Label_7461:
	var_84_bool = var_67_int < var_66_int; // 0x1d25 LT
	if(var_84_bool == 0) goto Label_7472; // 0x1d26 JumpB
	get(var_68_int, var_67_int); // 0x1d27 ObjFunc
	var_85_int = 0; // 0x1d29 PushV
	var_85_int = var_68_int; // 0x1d2a Mov
	func_7437(var_85_int); // 0x1d2b NEW_2
	var_94_int = 1; // 0x1d2d PushI
	var_67_int = var_67_int + var_94_int; // 0x1d2e Add2
	goto Label_7461; // 0x1d2f Jump
	
Label_7472:
	return 8; // 0x1d30 Return
}


func_5916(var_144_bool, var_145_object)
{
	var_149_int = 0; var_150_int = 0; var_151_int = 0; var_152_int = 0; // 0x171c PushV
	var_153_string = "voice_common"; // 0x171d PushS
	GetVariable(var_153_string, var_151_int); // 0x171e Func
	var_154_int = var_151_int; // 0x1720 Push
	if(var_154_int == 0) goto Label_5954; // 0x1721 JumpB
	var_155_bool = 0; var_156_object = Obj(); // 0x1722 PushV
	var_156_object = var_145_object; // 0x1723 Mov
	func_5974(var_156_object); // 0x1724 NEW_2
	var_185_bool = var_155_bool == 0; // 0x1726 Not
	if(var_185_bool == 0) goto Label_5936; // 0x1727 JumpB
	var_186_bool = 0; var_187_object = Obj(); // 0x1728 PushV
	var_187_object = var_145_object; // 0x1729 Mov
	func_6011(var_187_object); // 0x172a NEW_2
	var_221_bool = var_186_bool == 0; // 0x172c Not
	if(var_221_bool == 0) goto Label_5936; // 0x172d JumpB
	var_144_bool = 0; // 0x172e MovB
	return 4; // 0x172f Return
	
Label_5936:
	var_222_int = 2; // 0x1730 PushI
	irand(var_152_int, var_222_int); // 0x1731 Func
	var_223_int = var_152_int; // 0x1733 Push
	if(var_223_int == 0) goto Label_5949; // 0x1734 JumpB
	var_224_string = "voice_common"; // 0x1735 PushS
	var_225_int = 1; // 0x1736 PushI
	var_226_int = var_151_int + var_225_int; // 0x1737 Add
	var_227_int = 3; // 0x1738 PushI
	var_228_int = var_226_int / var_227_int; // 0x1739 Mod
	SetVariable(var_224_string, var_228_int); // 0x173a Func
	goto Label_5953; // 0x173c Jump
	
Label_5953:
	goto Label_5972; // 0x1741 Jump
	
Label_5972:
	var_144_bool = 1; // 0x1754 MovB
	return 4; // 0x1755 Return
	
Label_5949:
	var_229_string = "voice_common"; // 0x173d PushS
	var_230_int = 0; // 0x173e PushI
	SetVariable(var_229_string, var_230_int); // 0x173f Func
	
Label_5954:
	var_231_bool = 0; var_232_object = Obj(); // 0x1742 PushV
	var_232_object = var_145_object; // 0x1743 Mov
	func_6011(var_232_object); // 0x1744 NEW_2
	var_233_bool = var_231_bool == 0; // 0x1746 Not
	if(var_233_bool == 0) goto Label_5968; // 0x1747 JumpB
	var_234_bool = 0; var_235_object = Obj(); // 0x1748 PushV
	var_235_object = var_145_object; // 0x1749 Mov
	func_5974(var_235_object); // 0x174a NEW_2
	var_236_bool = var_234_bool == 0; // 0x174c Not
	if(var_236_bool == 0) goto Label_5968; // 0x174d JumpB
	var_144_bool = 0; // 0x174e MovB
	return 4; // 0x174f Return
	
Label_5968:
	var_237_string = "voice_common"; // 0x1750 PushS
	var_238_int = 1; // 0x1751 PushI
	SetVariable(var_237_string, var_238_int); // 0x1752 Func
}


func_5409(var_0_object, var_1_object, var_2_object, var_3_string, var_1124_object, var_1125_object)
{
	var_0_object = var_1125_object; // 0x1522 TMov
	var_1_object = var_1124_object; // 0x1523 TMov
	var_3_string = 0; // 0x1524 TMovB
	var_1130_int = 1; // 0x1525 PushI
	if(var_1130_int == 0) goto Label_5437; // 0x1526 JumpB
	var_1131_string = ""; // 0x1527 PushV
	var_1131_string = "Neutral"; // 0x1528 MovS
	func_5467(var_1125_object, var_1131_string); // 0x1529 NEW_2
	var_1139_int = 540551; // 0x152b PushI
	SetMessage(var_1139_int); // 0x152c TObjFunc
	ClearReplies(); // 0x152e TObjFunc
	var_1140_int = 540552; // 0x1530 PushI
	var_1141_int = -1; // 0x1531 PushI
	var_1142_int = 42561; // 0x1532 PushI
	AddReply(var_1140_int, var_1141_int, var_1142_int); // 0x1533 TObjFunc
	var_1143_int = 540795; // 0x1535 PushI
	var_1144_int = -1; // 0x1536 PushI
	var_1145_int = 42844; // 0x1537 PushI
	AddReply(var_1143_int, var_1144_int, var_1145_int); // 0x1538 TObjFunc
	goto Label_5437; // 0x153a Jump
	
Label_5437:
	var_1146_bool = 0; // 0x153d PushV
	func_6274(var_1146_bool); // 0x153e NEW_2
	if(var_1146_bool == 0) goto Label_5452; // 0x1540 JumpB
	
Label_5441:
	lshWaitForAnimEnd(); // 0x1541 Func
	var_1147_string = var_3_string; // 0x1543 PushT
	if(var_1147_string == 0) goto Label_5446; // 0x1544 JumpB
	goto Label_5451; // 0x1545 Jump
	
Label_5451:
	goto Label_5466; // 0x154b Jump
	
Label_5466:
	return 0; // 0x155a Return
	
Label_5446:
	var_1148_string = ""; // 0x1546 PushV
	var_1148_string = var_2_object; // 0x1547 MovT
	func_6054(var_1148_string); // 0x1548 NEW_2
	goto Label_5441; // 0x154a Jump
	
Label_5452:
	var_1149_string = "all"; // 0x154c PushS
	var_1150_string = "idle"; // 0x154d PushS
	PlayAnimation(var_1149_string, var_1150_string); // 0x154e Func
	
Label_5456:
	WaitForAnimEnd(); // 0x1550 Func
	var_1151_string = var_3_string; // 0x1552 PushT
	if(var_1151_string == 0) goto Label_5461; // 0x1553 JumpB
	goto Label_5466; // 0x1554 Jump
	
Label_5461:
	var_1152_string = "all"; // 0x1555 PushS
	var_1153_string = "idle"; // 0x1556 PushS
	PlayAnimation(var_1152_string, var_1153_string); // 0x1557 Func
	goto Label_5456; // 0x1559 Jump
}


func_6949(var_1022_bool)
{
	var_1024_int = 0; var_1025_string = ""; // 0x1b26 PushV
	var_1025_string = "b11q02"; // 0x1b27 MovS
	func_6123(var_1024_int, var_1025_string); // 0x1b28 NEW_2
	var_1026_int = 4; // 0x1b2a PushI
	var_1027_bool = var_1024_int == var_1026_int; // 0x1b2b Eq
	if(var_1027_bool == 0) goto Label_6959; // 0x1b2c JumpB
	var_1022_bool = 1; // 0x1b2d MovB
	return 0; // 0x1b2e Return
	
Label_6959:
	var_1022_bool = 0; // 0x1b2f MovB
	return 0; // 0x1b30 Return
}


func_6961(var_850_bool)
{
	var_852_int = 0; var_853_string = ""; // 0x1b32 PushV
	var_853_string = "oob10Kapella2"; // 0x1b33 MovS
	func_6123(var_852_int, var_853_string); // 0x1b34 NEW_2
	var_854_int = 0; // 0x1b36 PushI
	var_855_bool = var_852_int == var_854_int; // 0x1b37 Eq
	if(var_855_bool == 0) goto Label_6971; // 0x1b38 JumpB
	var_850_bool = 1; // 0x1b39 MovB
	return 0; // 0x1b3a Return
	
Label_6971:
	var_850_bool = 0; // 0x1b3b MovB
	return 0; // 0x1b3c Return
}


func_6450()
{
	func_7270(); // 0x1934 NEW_2
	var_164_bool = 0; var_165_string = ""; var_166_string = ""; // 0x1936 PushV
	var_165_string = "quest_b9_03"; // 0x1937 MovS
	var_166_string = "completed"; // 0x1938 MovS
	func_6202(var_164_bool, var_165_string, var_166_string); // 0x1939 NEW_2
	return 0; // 0x193b Return
}


func_7474()
{
	func_7449(); // 0x1d33 NEW_2
	return 0; // 0x1d35 Return
}


func_7478(var_69_object, var_304_object)
{
	var_70_bool = GlobalVars[1]; // 0x1d37 PushGE
	var_71_bool = var_70_bool == 0; // 0x1d38 Not
	if(var_71_bool == 0) goto Label_7491; // 0x1d39 JumpB
	var_72_int = 0; var_73_object = Obj(); // 0x1d3a PushV
	var_73_object = var_69_object; // 0x1d3b Mov
	TaskCall(6); // 0x1d3c TaskCall
	func_2115(var_74_object, var_72_int, var_73_object); // 0x1d3d NEW_2
	TaskReturn(); // 0x1d3e TaskReturn
	var_297_bool = GlobalVars[1]; // 0x1d40 PushGE
	var_297_bool = 1; // 0x1d41 MovB
	GlobalVars[1] = var_297_bool; // 0x1d42 PopGE
	
Label_7491:
	var_298_bool = 0; var_299_int = 0; // 0x1d43 PushV
	var_299_int = 1; // 0x1d44 MovI
	func_6236(var_298_bool, var_299_int); // 0x1d45 NEW_2
	if(var_298_bool == 0) goto Label_7510; // 0x1d47 JumpB
	var_301_int = 2000; // 0x1d48 PushI
	var_302_int = 0; var_303_object = Obj(); // 0x1d49 PushV
	var_303_object = var_69_object; // 0x1d4a Mov
	TaskCall(4); // 0x1d4b TaskCall
	func_1030(var_304_object, var_302_int, var_303_object); // 0x1d4c NEW_2
	TaskReturn(); // 0x1d4d TaskReturn
	var_416_bool = var_301_int == var_304_object; // 0x1d4f Eq
	if(var_416_bool == 0) goto Label_7509; // 0x1d50 JumpB
	var_417_string = "people.xml"; // 0x1d51 PushS
	var_418_bool = 1; // 0x1d52 PushB
	ShowWindow(var_417_string, var_418_bool); // 0x1d53 Func
	
Label_7509:
	return 0; // 0x1d55 Return
	
Label_7510:
	var_419_bool = 0; var_420_int = 0; // 0x1d56 PushV
	var_420_int = 2; // 0x1d57 MovI
	func_6236(var_419_bool, var_420_int); // 0x1d58 NEW_2
	if(var_419_bool == 0) goto Label_7522; // 0x1d5a JumpB
	var_421_int = 0; var_422_object = Obj(); // 0x1d5b PushV
	var_422_object = var_69_object; // 0x1d5c Mov
	TaskCall(0); // 0x1d5d TaskCall
	func_0(var_423_object, var_421_int, var_422_object); // 0x1d5e NEW_2
	TaskReturn(); // 0x1d5f TaskReturn
	return 0; // 0x1d61 Return
	
Label_7522:
	var_483_bool = 0; var_484_int = 0; // 0x1d62 PushV
	var_484_int = 3; // 0x1d63 MovI
	func_6236(var_483_bool, var_484_int); // 0x1d64 NEW_2
	if(var_483_bool == 0) goto Label_7534; // 0x1d66 JumpB
	var_485_int = 0; var_486_object = Obj(); // 0x1d67 PushV
	var_486_object = var_69_object; // 0x1d68 Mov
	TaskCall(2); // 0x1d69 TaskCall
	func_380(var_487_object, var_485_int, var_486_object); // 0x1d6a NEW_2
	TaskReturn(); // 0x1d6b TaskReturn
	return 0; // 0x1d6d Return
	
Label_7534:
	var_589_bool = 0; var_590_int = 0; // 0x1d6e PushV
	var_590_int = 8; // 0x1d6f MovI
	func_6236(var_589_bool, var_590_int); // 0x1d70 NEW_2
	if(var_589_bool == 0) goto Label_7546; // 0x1d72 JumpB
	var_591_int = 0; var_592_object = Obj(); // 0x1d73 PushV
	var_592_object = var_69_object; // 0x1d74 Mov
	TaskCall(8); // 0x1d75 TaskCall
	func_2387(var_593_object, var_591_int, var_592_object); // 0x1d76 NEW_2
	TaskReturn(); // 0x1d77 TaskReturn
	return 0; // 0x1d79 Return
	
Label_7546:
	var_678_bool = 0; var_679_int = 0; // 0x1d7a PushV
	var_679_int = 9; // 0x1d7b MovI
	func_6236(var_678_bool, var_679_int); // 0x1d7c NEW_2
	if(var_678_bool == 0) goto Label_7558; // 0x1d7e JumpB
	var_680_int = 0; var_681_object = Obj(); // 0x1d7f PushV
	var_681_object = var_69_object; // 0x1d80 Mov
	TaskCall(12); // 0x1d81 TaskCall
	func_3738(var_682_object, var_680_int, var_681_object); // 0x1d82 NEW_2
	TaskReturn(); // 0x1d83 TaskReturn
	return 0; // 0x1d85 Return
	
Label_7558:
	var_817_bool = 0; var_818_int = 0; // 0x1d86 PushV
	var_818_int = 10; // 0x1d87 MovI
	func_6236(var_817_bool, var_818_int); // 0x1d88 NEW_2
	if(var_817_bool == 0) goto Label_7570; // 0x1d8a JumpB
	var_819_int = 0; var_820_object = Obj(); // 0x1d8b PushV
	var_820_object = var_69_object; // 0x1d8c Mov
	TaskCall(10); // 0x1d8d TaskCall
	func_2922(var_821_object, var_819_int, var_820_object); // 0x1d8e NEW_2
	TaskReturn(); // 0x1d8f TaskReturn
	return 0; // 0x1d91 Return
	
Label_7570:
	var_945_bool = 0; var_946_int = 0; // 0x1d92 PushV
	var_946_int = 11; // 0x1d93 MovI
	func_6236(var_945_bool, var_946_int); // 0x1d94 NEW_2
	if(var_945_bool == 0) goto Label_7582; // 0x1d96 JumpB
	var_947_int = 0; var_948_object = Obj(); // 0x1d97 PushV
	var_948_object = var_69_object; // 0x1d98 Mov
	TaskCall(14); // 0x1d99 TaskCall
	func_4419(var_949_object, var_947_int, var_948_object); // 0x1d9a NEW_2
	TaskReturn(); // 0x1d9b TaskReturn
	return 0; // 0x1d9d Return
	
Label_7582:
	var_1036_bool = 0; var_1037_int = 0; // 0x1d9e PushV
	var_1037_int = 12; // 0x1d9f MovI
	func_6236(var_1036_bool, var_1037_int); // 0x1da0 NEW_2
	if(var_1036_bool == 0) goto Label_7594; // 0x1da2 JumpB
	var_1038_int = 0; var_1039_object = Obj(); // 0x1da3 PushV
	var_1039_object = var_69_object; // 0x1da4 Mov
	TaskCall(16); // 0x1da5 TaskCall
	func_4974(var_1040_object, var_1038_int, var_1039_object); // 0x1da6 NEW_2
	TaskReturn(); // 0x1da7 TaskReturn
	return 0; // 0x1da9 Return
	
Label_7594:
	var_1100_int = 0; var_1101_object = Obj(); // 0x1daa PushV
	var_1101_object = var_69_object; // 0x1dab Mov
	TaskCall(18); // 0x1dac TaskCall
	func_5328(var_1102_object, var_1100_int, var_1101_object); // 0x1dad NEW_2
	TaskReturn(); // 0x1dae TaskReturn
	return 0; // 0x1db0 Return
}


func_6460()
{
	var_196_string = "playsound"; // 0x193d PushS
	var_197_string = "givemoney"; // 0x193e PushS
	TriggerWorld(var_196_string, var_197_string); // 0x193f Func
	return 0; // 0x1941 Return
}


func_6973(var_928_bool)
{
	var_930_int = 0; var_931_string = ""; // 0x1b3e PushV
	var_931_string = "b10q03"; // 0x1b3f MovS
	func_6123(var_930_int, var_931_string); // 0x1b40 NEW_2
	var_932_int = 0; // 0x1b42 PushI
	var_933_bool = var_930_int == var_932_int; // 0x1b43 Eq
	if(var_933_bool == 0) goto Label_6983; // 0x1b44 JumpB
	var_928_bool = 1; // 0x1b45 MovB
	return 0; // 0x1b46 Return
	
Label_6983:
	var_928_bool = 0; // 0x1b47 MovB
	return 0; // 0x1b48 Return
}


func_6466()
{
	var_148_string = "playsound"; // 0x1943 PushS
	var_149_string = "giveitem"; // 0x1944 PushS
	TriggerWorld(var_148_string, var_149_string); // 0x1945 Func
	return 0; // 0x1947 Return
}


func_4419(var_0_object, var_947_int, var_948_object)
{
	var_950_object = Obj(); var_951_bool = 0; var_952_int = 0; var_953_bool = 0; var_954_object = Obj(); var_955_bool = 0; var_956_int = 0; var_957_bool = 0; // 0x1143 PushV
	var_0_object = var_948_object; // 0x1144 TMov
	var_958_bool = 0; var_959_object = Obj(); var_960_float = 0; // 0x1145 PushV
	var_959_object = var_948_object; // 0x1146 Mov
	var_960_float = 70.0; // 0x1147 MovF
	func_5829(var_959_object, var_960_float); // 0x1148 NEW_2
	var_961_bool = var_958_bool == 0; // 0x114a Not
	if(var_961_bool == 0) goto Label_4430; // 0x114b JumpB
	var_947_int = -2; // 0x114c MovI
	return 8; // 0x114d Return
	
Label_4430:
	CreateDialog(var_954_object); // 0x114e Func
	var_962_int = 0; // 0x1150 PushV
	func_6268(var_962_int); // 0x1151 NEW_2
	SetNPCName(var_962_int); // 0x1153 ObjFunc
	var_963_int = 0; // 0x1155 PushV
	func_6266(var_963_int); // 0x1156 NEW_2
	SetNPCDescription(var_963_int); // 0x1158 ObjFunc
	var_964_string = ""; // 0x115a PushV
	func_6270(var_964_string); // 0x115b NEW_2
	SetPhoto(var_964_string); // 0x115d ObjFunc
	var_965_string = ""; // 0x115f PushV
	func_6272(var_965_string); // 0x1160 NEW_2
	SetPhoto2(var_965_string); // 0x1162 ObjFunc
	var_966_int = 0; // 0x1164 PushV
	func_7387(var_966_int); // 0x1165 NEW_2
	SetPlayerName(var_966_int); // 0x1167 ObjFunc
	var_956_int = -1; // 0x1169 MovI
	IsOverrideActive(var_955_bool); // 0x116a Func
	var_967_bool = var_955_bool; // 0x116c Push
	if(var_967_bool == 0) goto Label_4464; // 0x116d JumpB
	var_947_int = -2; // 0x116e MovI
	return 8; // 0x116f Return
	
Label_4464:
	DoDialog(var_954_object); // 0x1170 Func
	var_968_bool = 0; var_969_object = Obj(); // 0x1172 PushV
	var_970_object = Obj(); // 0x1173 PushV
	func_6107(var_970_object); // 0x1174 NEW_2
	var_969_object = var_970_object; // 0x1175 Mov
	func_5916(var_968_bool, var_969_object); // 0x1177 NEW_2
	var_971_object = Obj(); var_972_object = Obj(); // 0x1179 PushV
	var_971_object = var_948_object; // 0x117a Mov
	var_972_object = var_954_object; // 0x117b Mov
	TaskCall(15); // 0x117c TaskCall
	func_4500(var_973_object, var_974_object, var_975_string, var_976_bool, var_971_object, var_972_object); // 0x117d NEW_2
	TaskReturn(); // 0x117e TaskReturn
	IsDialogEnd(var_957_bool); // 0x1180 ObjFunc
	
Label_4482:
	var_1034_bool = var_957_bool == 0; // 0x1182 Not
	if(var_1034_bool == 0) goto Label_4489; // 0x1183 JumpB
	sync(); // 0x1184 Func
	IsDialogEnd(var_957_bool); // 0x1186 ObjFunc
	goto Label_4482; // 0x1188 Jump
	
Label_4489:
	var_1035_object = Obj(); // 0x1189 PushV
	var_1035_object = var_948_object; // 0x118a Mov
	func_5898(); // 0x118b NEW_2
	StopDialog(var_954_object); // 0x118d Func
	GetReturnValue(var_956_int); // 0x118f ObjFunc
	var_947_int = var_956_int; // 0x1191 Mov
	return 8; // 0x1192 Return
}


func_6472()
{
	var_146_object = Obj(); var_147_object = Obj(); // 0x1948 PushV
	var_148_string = "b10q04KapellaGotoBlock"; // 0x1949 PushS
	var_149_int = 1; // 0x194a PushI
	SetVariable(var_148_string, var_149_int); // 0x194b Func
	var_150_object = Obj(); // 0x194d PushV
	func_7337(var_150_object); // 0x194e NEW_2
	var_147_object = var_150_object; // 0x194f Mov
	var_151_string = "b10q04KapellaGotoBlock"; // 0x1951 PushS
	var_152_string = "pt_map_uprava_admin"; // 0x1952 PushS
	var_153_int = 0; // 0x1953 PushI
	var_154_int = 530548; // 0x1954 PushI
	var_155_float = 0; // 0x1955 PushV
	func_6214(var_155_float); // 0x1956 NEW_2
	AddMark(var_151_string, var_152_string, var_153_int, var_154_int, var_155_float); // 0x1958 ObjFunc
	return 2; // 0x195a Return
}


func_6985(var_903_bool)
{
	var_905_int = 0; var_906_string = ""; // 0x1b4a PushV
	var_906_string = "oob10Kapella3"; // 0x1b4b MovS
	func_6123(var_905_int, var_906_string); // 0x1b4c NEW_2
	var_907_int = 0; // 0x1b4e PushI
	var_908_bool = var_905_int == var_907_int; // 0x1b4f Eq
	if(var_908_bool == 0) goto Label_6995; // 0x1b50 JumpB
	var_903_bool = 1; // 0x1b51 MovB
	return 0; // 0x1b52 Return
	
Label_6995:
	var_903_bool = 0; // 0x1b53 MovB
	return 0; // 0x1b54 Return
}


func_2387(var_0_object, var_591_int, var_592_object)
{
	var_594_object = Obj(); var_595_bool = 0; var_596_int = 0; var_597_bool = 0; var_598_object = Obj(); var_599_bool = 0; var_600_int = 0; var_601_bool = 0; // 0x953 PushV
	var_0_object = var_592_object; // 0x954 TMov
	var_602_bool = 0; var_603_object = Obj(); var_604_float = 0; // 0x955 PushV
	var_603_object = var_592_object; // 0x956 Mov
	var_604_float = 70.0; // 0x957 MovF
	func_5829(var_603_object, var_604_float); // 0x958 NEW_2
	var_605_bool = var_602_bool == 0; // 0x95a Not
	if(var_605_bool == 0) goto Label_2398; // 0x95b JumpB
	var_591_int = -2; // 0x95c MovI
	return 8; // 0x95d Return
	
Label_2398:
	CreateDialog(var_598_object); // 0x95e Func
	var_606_int = 0; // 0x960 PushV
	func_6268(var_606_int); // 0x961 NEW_2
	SetNPCName(var_606_int); // 0x963 ObjFunc
	var_607_int = 0; // 0x965 PushV
	func_6266(var_607_int); // 0x966 NEW_2
	SetNPCDescription(var_607_int); // 0x968 ObjFunc
	var_608_string = ""; // 0x96a PushV
	func_6270(var_608_string); // 0x96b NEW_2
	SetPhoto(var_608_string); // 0x96d ObjFunc
	var_609_string = ""; // 0x96f PushV
	func_6272(var_609_string); // 0x970 NEW_2
	SetPhoto2(var_609_string); // 0x972 ObjFunc
	var_610_int = 0; // 0x974 PushV
	func_7387(var_610_int); // 0x975 NEW_2
	SetPlayerName(var_610_int); // 0x977 ObjFunc
	var_600_int = -1; // 0x979 MovI
	IsOverrideActive(var_599_bool); // 0x97a Func
	var_611_bool = var_599_bool; // 0x97c Push
	if(var_611_bool == 0) goto Label_2432; // 0x97d JumpB
	var_591_int = -2; // 0x97e MovI
	return 8; // 0x97f Return
	
Label_2432:
	DoDialog(var_598_object); // 0x980 Func
	var_612_bool = 0; var_613_object = Obj(); // 0x982 PushV
	var_614_object = Obj(); // 0x983 PushV
	func_6107(var_614_object); // 0x984 NEW_2
	var_613_object = var_614_object; // 0x985 Mov
	func_5916(var_612_bool, var_613_object); // 0x987 NEW_2
	var_615_object = Obj(); var_616_object = Obj(); // 0x989 PushV
	var_615_object = var_592_object; // 0x98a Mov
	var_616_object = var_598_object; // 0x98b Mov
	TaskCall(9); // 0x98c TaskCall
	func_2468(var_617_object, var_618_object, var_619_string, var_620_bool, var_615_object, var_616_object); // 0x98d NEW_2
	TaskReturn(); // 0x98e TaskReturn
	IsDialogEnd(var_601_bool); // 0x990 ObjFunc
	
Label_2450:
	var_676_bool = var_601_bool == 0; // 0x992 Not
	if(var_676_bool == 0) goto Label_2457; // 0x993 JumpB
	sync(); // 0x994 Func
	IsDialogEnd(var_601_bool); // 0x996 ObjFunc
	goto Label_2450; // 0x998 Jump
	
Label_2457:
	var_677_object = Obj(); // 0x999 PushV
	var_677_object = var_592_object; // 0x99a Mov
	func_5898(); // 0x99b NEW_2
	StopDialog(var_598_object); // 0x99d Func
	GetReturnValue(var_600_int); // 0x99f ObjFunc
	var_591_int = var_600_int; // 0x9a1 Mov
	return 8; // 0x9a2 Return
}


func_6997(var_1078_bool)
{
	var_1080_int = 0; var_1081_string = ""; // 0x1b56 PushV
	var_1081_string = "oob12Kapella1"; // 0x1b57 MovS
	func_6123(var_1080_int, var_1081_string); // 0x1b58 NEW_2
	var_1082_int = 0; // 0x1b5a PushI
	var_1083_bool = var_1080_int == var_1082_int; // 0x1b5b Eq
	if(var_1083_bool == 0) goto Label_7007; // 0x1b5c JumpB
	var_1078_bool = 1; // 0x1b5d MovB
	return 0; // 0x1b5e Return
	
Label_7007:
	var_1078_bool = 0; // 0x1b5f MovB
	return 0; // 0x1b60 Return
}


func_5974(var_155_bool)
{
	var_157_string = ""; var_158_int = 0; var_159_bool = 0; var_160_int = 0; var_161_string = ""; var_162_string = ""; var_163_int = 0; var_164_bool = 0; var_165_int = 0; var_166_string = ""; // 0x1756 PushV
	var_162_string = "c"; // 0x1757 MovS
	var_163_int = 0; // 0x1758 MovI
	
Label_5977:
	var_167_int = 1; // 0x1759 PushI
	if(var_167_int == 0) goto Label_5990; // 0x175a JumpB
	var_168_int = 1; // 0x175b PushI
	var_169_int = var_163_int + var_168_int; // 0x175c Add
	var_170_int = var_162_string + var_169_int; // 0x175d Add
	HasProperty(var_170_int, var_164_bool); // 0x175e ObjFunc
	var_171_bool = var_164_bool == 0; // 0x1760 Not
	if(var_171_bool == 0) goto Label_5987; // 0x1761 JumpB
	goto Label_5990; // 0x1762 Jump
	
Label_5990:
	var_172_bool = var_163_int == 0; // 0x1766 Not
	if(var_172_bool == 0) goto Label_5994; // 0x1767 JumpB
	var_155_bool = 0; // 0x1768 MovB
	return 10; // 0x1769 Return
	
Label_5994:
	var_165_int = 0; // 0x176a MovI
	var_173_int = 1; // 0x176b PushI
	var_174_bool = var_163_int > var_173_int; // 0x176c GT
	if(var_174_bool == 0) goto Label_6000; // 0x176d JumpB
	irand(var_165_int, var_163_int); // 0x176e Func
	
Label_6000:
	var_175_int = 1; // 0x1770 PushI
	var_176_int = var_165_int + var_175_int; // 0x1771 Add
	var_177_int = var_162_string + var_176_int; // 0x1772 Add
	GetProperty(var_177_int, var_166_string); // 0x1773 ObjFunc
	var_178_bool = 0; var_179_string = ""; // 0x1775 PushV
	var_179_string = var_166_string; // 0x1776 Mov
	func_6085(var_178_bool, var_179_string); // 0x1777 NEW_2
	var_155_bool = var_178_bool; // 0x1778 Mov
	return 10; // 0x177a Return
	
Label_5987:
	var_184_int = 1; // 0x1763 PushI
	var_163_int = var_163_int + var_184_int; // 0x1764 Add2
	goto Label_5977; // 0x1765 Jump
}


func_5467(var_2_object, var_1131_string)
{
	var_1132_bool = 0; // 0x155c PushV
	func_6274(var_1132_bool); // 0x155d NEW_2
	var_1133_bool = var_1132_bool == 0; // 0x155f Not
	if(var_1133_bool == 0) goto Label_5474; // 0x1560 JumpB
	return 0; // 0x1561 Return
	
Label_5474:
	var_1134_bool = var_1131_string == var_2_object; // 0x1562 Eq
	if(var_1134_bool == 0) goto Label_5477; // 0x1563 JumpB
	return 0; // 0x1564 Return
	
Label_5477:
	var_1135_string = ""; var_1136_bool = 0; // 0x1565 PushV
	var_1135_string = var_1131_string; // 0x1566 Mov
	var_1137_string = ""; // 0x1567 PushS
	var_1138_bool = var_1131_string == var_1137_string; // 0x1568 Eq
	if(var_1138_bool == 0) goto Label_5484; // 0x1569 JumpB
	var_1136_bool = 0; // 0x156a MovB
	goto Label_5485; // 0x156b Jump
	
Label_5485:
	func_6070(var_1135_string, var_1136_bool); // 0x156d NEW_2
	var_2_object = var_1131_string; // 0x156f TMov
	return 0; // 0x1570 Return
	
Label_5484:
	var_1136_bool = 1; // 0x156c MovB
}


func_6492()
{
	var_158_object = Obj(); var_159_string = ""; var_160_float = 0; // 0x195d PushV
	var_161_object = Obj(); // 0x195e PushV
	func_7337(var_161_object); // 0x195f NEW_2
	var_158_object = var_161_object; // 0x1960 Mov
	var_159_string = "pt_map_uprava_admin"; // 0x1962 MovS
	var_160_float = 2; // 0x1963 MovI
	func_7354(var_158_object, var_159_string, var_160_float); // 0x1964 NEW_2
	var_181_object = Obj(); // 0x1966 PushV
	func_7337(var_181_object); // 0x1967 NEW_2
	ShowMap(var_181_object); // 0x1969 ObjFunc
	return 0; // 0x196b Return
}


func_7009(var_542_bool)
{
	var_544_int = 0; var_545_string = ""; // 0x1b62 PushV
	var_545_string = "b3q02"; // 0x1b63 MovS
	func_6123(var_544_int, var_545_string); // 0x1b64 NEW_2
	var_546_int = 0; // 0x1b66 PushI
	var_547_bool = var_544_int == var_546_int; // 0x1b67 Eq
	if(var_547_bool == 0) goto Label_7019; // 0x1b68 JumpB
	var_542_bool = 1; // 0x1b69 MovB
	return 0; // 0x1b6a Return
	
Label_7019:
	var_542_bool = 0; // 0x1b6b MovB
	return 0; // 0x1b6c Return
}


func_2922(var_0_object, var_819_int, var_820_object)
{
	var_822_object = Obj(); var_823_bool = 0; var_824_int = 0; var_825_bool = 0; var_826_object = Obj(); var_827_bool = 0; var_828_int = 0; var_829_bool = 0; // 0xb6a PushV
	var_0_object = var_820_object; // 0xb6b TMov
	var_830_bool = 0; var_831_object = Obj(); var_832_float = 0; // 0xb6c PushV
	var_831_object = var_820_object; // 0xb6d Mov
	var_832_float = 70.0; // 0xb6e MovF
	func_5829(var_831_object, var_832_float); // 0xb6f NEW_2
	var_833_bool = var_830_bool == 0; // 0xb71 Not
	if(var_833_bool == 0) goto Label_2933; // 0xb72 JumpB
	var_819_int = -2; // 0xb73 MovI
	return 8; // 0xb74 Return
	
Label_2933:
	CreateDialog(var_826_object); // 0xb75 Func
	var_834_int = 0; // 0xb77 PushV
	func_6268(var_834_int); // 0xb78 NEW_2
	SetNPCName(var_834_int); // 0xb7a ObjFunc
	var_835_int = 0; // 0xb7c PushV
	func_6266(var_835_int); // 0xb7d NEW_2
	SetNPCDescription(var_835_int); // 0xb7f ObjFunc
	var_836_string = ""; // 0xb81 PushV
	func_6270(var_836_string); // 0xb82 NEW_2
	SetPhoto(var_836_string); // 0xb84 ObjFunc
	var_837_string = ""; // 0xb86 PushV
	func_6272(var_837_string); // 0xb87 NEW_2
	SetPhoto2(var_837_string); // 0xb89 ObjFunc
	var_838_int = 0; // 0xb8b PushV
	func_7387(var_838_int); // 0xb8c NEW_2
	SetPlayerName(var_838_int); // 0xb8e ObjFunc
	var_828_int = -1; // 0xb90 MovI
	IsOverrideActive(var_827_bool); // 0xb91 Func
	var_839_bool = var_827_bool; // 0xb93 Push
	if(var_839_bool == 0) goto Label_2967; // 0xb94 JumpB
	var_819_int = -2; // 0xb95 MovI
	return 8; // 0xb96 Return
	
Label_2967:
	DoDialog(var_826_object); // 0xb97 Func
	var_840_bool = 0; var_841_object = Obj(); // 0xb99 PushV
	var_842_object = Obj(); // 0xb9a PushV
	func_6107(var_842_object); // 0xb9b NEW_2
	var_841_object = var_842_object; // 0xb9c Mov
	func_5916(var_840_bool, var_841_object); // 0xb9e NEW_2
	var_843_object = Obj(); var_844_object = Obj(); // 0xba0 PushV
	var_843_object = var_820_object; // 0xba1 Mov
	var_844_object = var_826_object; // 0xba2 Mov
	TaskCall(11); // 0xba3 TaskCall
	func_3003(var_845_object, var_846_object, var_847_string, var_848_bool, var_843_object, var_844_object); // 0xba4 NEW_2
	TaskReturn(); // 0xba5 TaskReturn
	IsDialogEnd(var_829_bool); // 0xba7 ObjFunc
	
Label_2985:
	var_943_bool = var_829_bool == 0; // 0xba9 Not
	if(var_943_bool == 0) goto Label_2992; // 0xbaa JumpB
	sync(); // 0xbab Func
	IsDialogEnd(var_829_bool); // 0xbad ObjFunc
	goto Label_2985; // 0xbaf Jump
	
Label_2992:
	var_944_object = Obj(); // 0xbb0 PushV
	var_944_object = var_820_object; // 0xbb1 Mov
	func_5898(); // 0xbb2 NEW_2
	StopDialog(var_826_object); // 0xbb4 Func
	GetReturnValue(var_828_int); // 0xbb6 ObjFunc
	var_819_int = var_828_int; // 0xbb8 Mov
	return 8; // 0xbb9 Return
}


func_6508()
{
	var_518_string = "b3KapellaVisit"; // 0x196d PushS
	var_519_int = 1; // 0x196e PushI
	SetVariable(var_518_string, var_519_int); // 0x196f Func
	return 0; // 0x1971 Return
}


func_7021(var_529_bool)
{
	var_531_int = 0; var_532_string = ""; // 0x1b6e PushV
	var_532_string = "oob3Kapella1"; // 0x1b6f MovS
	func_6123(var_531_int, var_532_string); // 0x1b70 NEW_2
	var_533_int = 0; // 0x1b72 PushI
	var_534_bool = var_531_int == var_533_int; // 0x1b73 Eq
	if(var_534_bool == 0) goto Label_7031; // 0x1b74 JumpB
	var_529_bool = 1; // 0x1b75 MovB
	return 0; // 0x1b76 Return
	
Label_7031:
	var_529_bool = 0; // 0x1b77 MovB
	return 0; // 0x1b78 Return
}


func_4974(var_0_object, var_1038_int, var_1039_object)
{
	var_1041_object = Obj(); var_1042_bool = 0; var_1043_int = 0; var_1044_bool = 0; var_1045_object = Obj(); var_1046_bool = 0; var_1047_int = 0; var_1048_bool = 0; // 0x136e PushV
	var_0_object = var_1039_object; // 0x136f TMov
	var_1049_bool = 0; var_1050_object = Obj(); var_1051_float = 0; // 0x1370 PushV
	var_1050_object = var_1039_object; // 0x1371 Mov
	var_1051_float = 70.0; // 0x1372 MovF
	func_5829(var_1050_object, var_1051_float); // 0x1373 NEW_2
	var_1052_bool = var_1049_bool == 0; // 0x1375 Not
	if(var_1052_bool == 0) goto Label_4985; // 0x1376 JumpB
	var_1038_int = -2; // 0x1377 MovI
	return 8; // 0x1378 Return
	
Label_4985:
	CreateDialog(var_1045_object); // 0x1379 Func
	var_1053_int = 0; // 0x137b PushV
	func_6268(var_1053_int); // 0x137c NEW_2
	SetNPCName(var_1053_int); // 0x137e ObjFunc
	var_1054_int = 0; // 0x1380 PushV
	func_6266(var_1054_int); // 0x1381 NEW_2
	SetNPCDescription(var_1054_int); // 0x1383 ObjFunc
	var_1055_string = ""; // 0x1385 PushV
	func_6270(var_1055_string); // 0x1386 NEW_2
	SetPhoto(var_1055_string); // 0x1388 ObjFunc
	var_1056_string = ""; // 0x138a PushV
	func_6272(var_1056_string); // 0x138b NEW_2
	SetPhoto2(var_1056_string); // 0x138d ObjFunc
	var_1057_int = 0; // 0x138f PushV
	func_7387(var_1057_int); // 0x1390 NEW_2
	SetPlayerName(var_1057_int); // 0x1392 ObjFunc
	var_1047_int = -1; // 0x1394 MovI
	IsOverrideActive(var_1046_bool); // 0x1395 Func
	var_1058_bool = var_1046_bool; // 0x1397 Push
	if(var_1058_bool == 0) goto Label_5019; // 0x1398 JumpB
	var_1038_int = -2; // 0x1399 MovI
	return 8; // 0x139a Return
	
Label_5019:
	DoDialog(var_1045_object); // 0x139b Func
	var_1059_bool = 0; var_1060_object = Obj(); // 0x139d PushV
	var_1061_object = Obj(); // 0x139e PushV
	func_6107(var_1061_object); // 0x139f NEW_2
	var_1060_object = var_1061_object; // 0x13a0 Mov
	func_5916(var_1059_bool, var_1060_object); // 0x13a2 NEW_2
	var_1062_object = Obj(); var_1063_object = Obj(); // 0x13a4 PushV
	var_1062_object = var_1039_object; // 0x13a5 Mov
	var_1063_object = var_1045_object; // 0x13a6 Mov
	TaskCall(17); // 0x13a7 TaskCall
	func_5055(var_1064_object, var_1065_object, var_1066_string, var_1067_bool, var_1062_object, var_1063_object); // 0x13a8 NEW_2
	TaskReturn(); // 0x13a9 TaskReturn
	IsDialogEnd(var_1048_bool); // 0x13ab ObjFunc
	
Label_5037:
	var_1098_bool = var_1048_bool == 0; // 0x13ad Not
	if(var_1098_bool == 0) goto Label_5044; // 0x13ae JumpB
	sync(); // 0x13af Func
	IsDialogEnd(var_1048_bool); // 0x13b1 ObjFunc
	goto Label_5037; // 0x13b3 Jump
	
Label_5044:
	var_1099_object = Obj(); // 0x13b4 PushV
	var_1099_object = var_1039_object; // 0x13b5 Mov
	func_5898(); // 0x13b6 NEW_2
	StopDialog(var_1045_object); // 0x13b8 Func
	GetReturnValue(var_1047_int); // 0x13ba ObjFunc
	var_1038_int = var_1047_int; // 0x13bc Mov
	return 8; // 0x13bd Return
}


func_6514()
{
	var_220_object = Obj(); var_221_object = Obj(); // 0x1972 PushV
	var_222_int = 0; var_223_string = ""; // 0x1973 PushV
	var_223_string = "b1BurahHome"; // 0x1974 MovS
	func_6123(var_222_int, var_223_string); // 0x1975 NEW_2
	var_224_int = 0; // 0x1977 PushI
	var_225_bool = var_222_int == var_224_int; // 0x1978 Eq
	if(var_225_bool == 0) goto Label_6540; // 0x1979 JumpB
	var_226_string = "b1BurahHome"; // 0x197a PushS
	var_227_int = 1; // 0x197b PushI
	SetVariable(var_226_string, var_227_int); // 0x197c Func
	var_228_object = Obj(); // 0x197e PushV
	func_7337(var_228_object); // 0x197f NEW_2
	var_221_object = var_228_object; // 0x1980 Mov
	var_229_string = "b1BurahFatherHome"; // 0x1982 PushS
	var_230_string = "pt_b1q05_patrol_house"; // 0x1983 PushS
	var_231_int = 3; // 0x1984 PushI
	var_232_int = 530957; // 0x1985 PushI
	var_233_float = 0; // 0x1986 PushV
	func_6214(var_233_float); // 0x1987 NEW_2
	AddMark(var_229_string, var_230_string, var_231_int, var_232_int, var_233_float); // 0x1989 ObjFunc
	var_221_object = 0; // 0x198b SetNull
	
Label_6540:
	return 2; // 0x198c Return
}


func_7033(var_552_bool)
{
	var_554_int = 0; var_555_string = ""; // 0x1b7a PushV
	var_555_string = "b3q02"; // 0x1b7b MovS
	func_6123(var_554_int, var_555_string); // 0x1b7c NEW_2
	var_556_int = 5; // 0x1b7e PushI
	var_557_bool = var_554_int == var_556_int; // 0x1b7f Eq
	if(var_557_bool == 0) goto Label_7043; // 0x1b80 JumpB
	var_552_bool = 1; // 0x1b81 MovB
	return 0; // 0x1b82 Return
	
Label_7043:
	var_552_bool = 0; // 0x1b83 MovB
	return 0; // 0x1b84 Return
}


func_6011(var_186_bool)
{
	var_188_string = ""; var_189_int = 0; var_190_bool = 0; var_191_int = 0; var_192_string = ""; var_193_string = ""; var_194_int = 0; var_195_bool = 0; var_196_int = 0; var_197_string = ""; // 0x177b PushV
	var_198_string = "d"; // 0x177c PushS
	var_199_int = 0; // 0x177d PushV
	func_6219(var_199_int); // 0x177e NEW_2
	var_205_int = var_198_string + var_199_int; // 0x1780 Add
	var_206_string = "m"; // 0x1781 PushS
	var_193_string = var_205_int + var_206_string; // 0x1782 Add2
	var_194_int = 0; // 0x1783 MovI
	
Label_6020:
	var_207_int = 1; // 0x1784 PushI
	if(var_207_int == 0) goto Label_6033; // 0x1785 JumpB
	var_208_int = 1; // 0x1786 PushI
	var_209_int = var_194_int + var_208_int; // 0x1787 Add
	var_210_int = var_193_string + var_209_int; // 0x1788 Add
	HasProperty(var_210_int, var_195_bool); // 0x1789 ObjFunc
	var_211_bool = var_195_bool == 0; // 0x178b Not
	if(var_211_bool == 0) goto Label_6030; // 0x178c JumpB
	goto Label_6033; // 0x178d Jump
	
Label_6033:
	var_212_bool = var_194_int == 0; // 0x1791 Not
	if(var_212_bool == 0) goto Label_6037; // 0x1792 JumpB
	var_186_bool = 0; // 0x1793 MovB
	return 10; // 0x1794 Return
	
Label_6037:
	var_196_int = 0; // 0x1795 MovI
	var_213_int = 1; // 0x1796 PushI
	var_214_bool = var_194_int > var_213_int; // 0x1797 GT
	if(var_214_bool == 0) goto Label_6043; // 0x1798 JumpB
	irand(var_196_int, var_194_int); // 0x1799 Func
	
Label_6043:
	var_215_int = 1; // 0x179b PushI
	var_216_int = var_196_int + var_215_int; // 0x179c Add
	var_217_int = var_193_string + var_216_int; // 0x179d Add
	GetProperty(var_217_int, var_197_string); // 0x179e ObjFunc
	var_218_bool = 0; var_219_string = ""; // 0x17a0 PushV
	var_219_string = var_197_string; // 0x17a1 Mov
	func_6085(var_218_bool, var_219_string); // 0x17a2 NEW_2
	var_186_bool = var_218_bool; // 0x17a3 Mov
	return 10; // 0x17a5 Return
	
Label_6030:
	var_220_int = 1; // 0x178e PushI
	var_194_int = var_194_int + var_220_int; // 0x178f Add2
	goto Label_6020; // 0x1790 Jump
}


func_380(var_0_object, var_485_int, var_486_object)
{
	var_488_object = Obj(); var_489_bool = 0; var_490_int = 0; var_491_bool = 0; var_492_object = Obj(); var_493_bool = 0; var_494_int = 0; var_495_bool = 0; // 0x17c PushV
	var_0_object = var_486_object; // 0x17d TMov
	var_496_bool = 0; var_497_object = Obj(); var_498_float = 0; // 0x17e PushV
	var_497_object = var_486_object; // 0x17f Mov
	var_498_float = 70.0; // 0x180 MovF
	func_5829(var_497_object, var_498_float); // 0x181 NEW_2
	var_499_bool = var_496_bool == 0; // 0x183 Not
	if(var_499_bool == 0) goto Label_391; // 0x184 JumpB
	var_485_int = -2; // 0x185 MovI
	return 8; // 0x186 Return
	
Label_391:
	CreateDialog(var_492_object); // 0x187 Func
	var_500_int = 0; // 0x189 PushV
	func_6268(var_500_int); // 0x18a NEW_2
	SetNPCName(var_500_int); // 0x18c ObjFunc
	var_501_int = 0; // 0x18e PushV
	func_6266(var_501_int); // 0x18f NEW_2
	SetNPCDescription(var_501_int); // 0x191 ObjFunc
	var_502_string = ""; // 0x193 PushV
	func_6270(var_502_string); // 0x194 NEW_2
	SetPhoto(var_502_string); // 0x196 ObjFunc
	var_503_string = ""; // 0x198 PushV
	func_6272(var_503_string); // 0x199 NEW_2
	SetPhoto2(var_503_string); // 0x19b ObjFunc
	var_504_int = 0; // 0x19d PushV
	func_7387(var_504_int); // 0x19e NEW_2
	SetPlayerName(var_504_int); // 0x1a0 ObjFunc
	var_494_int = -1; // 0x1a2 MovI
	IsOverrideActive(var_493_bool); // 0x1a3 Func
	var_505_bool = var_493_bool; // 0x1a5 Push
	if(var_505_bool == 0) goto Label_425; // 0x1a6 JumpB
	var_485_int = -2; // 0x1a7 MovI
	return 8; // 0x1a8 Return
	
Label_425:
	DoDialog(var_492_object); // 0x1a9 Func
	var_506_bool = 0; var_507_object = Obj(); // 0x1ab PushV
	var_508_object = Obj(); // 0x1ac PushV
	func_6107(var_508_object); // 0x1ad NEW_2
	var_507_object = var_508_object; // 0x1ae Mov
	func_5916(var_506_bool, var_507_object); // 0x1b0 NEW_2
	var_509_object = Obj(); var_510_object = Obj(); // 0x1b2 PushV
	var_509_object = var_486_object; // 0x1b3 Mov
	var_510_object = var_492_object; // 0x1b4 Mov
	TaskCall(3); // 0x1b5 TaskCall
	func_461(var_511_object, var_512_object, var_513_string, var_514_bool, var_509_object, var_510_object); // 0x1b6 NEW_2
	TaskReturn(); // 0x1b7 TaskReturn
	IsDialogEnd(var_495_bool); // 0x1b9 ObjFunc
	
Label_443:
	var_587_bool = var_495_bool == 0; // 0x1bb Not
	if(var_587_bool == 0) goto Label_450; // 0x1bc JumpB
	sync(); // 0x1bd Func
	IsDialogEnd(var_495_bool); // 0x1bf ObjFunc
	goto Label_443; // 0x1c1 Jump
	
Label_450:
	var_588_object = Obj(); // 0x1c2 PushV
	var_588_object = var_486_object; // 0x1c3 Mov
	func_5898(); // 0x1c4 NEW_2
	StopDialog(var_492_object); // 0x1c6 Func
	GetReturnValue(var_494_int); // 0x1c8 ObjFunc
	var_485_int = var_494_int; // 0x1ca Mov
	return 8; // 0x1cb Return
}


func_7045(var_558_bool)
{
	var_560_int = 0; var_561_string = ""; // 0x1b86 PushV
	var_561_string = "b3q02Dead"; // 0x1b87 MovS
	func_6123(var_560_int, var_561_string); // 0x1b88 NEW_2
	var_562_int = 0; // 0x1b8a PushI
	var_563_bool = var_560_int != var_562_int; // 0x1b8b Neq
	if(var_563_bool == 0) goto Label_7055; // 0x1b8c JumpB
	var_558_bool = 1; // 0x1b8d MovB
	return 0; // 0x1b8e Return
	
Label_7055:
	var_558_bool = 0; // 0x1b8f MovB
	return 0; // 0x1b90 Return
}


func_6541()
{
	var_236_object = Obj(); var_237_string = ""; var_238_float = 0; // 0x198e PushV
	var_239_object = Obj(); // 0x198f PushV
	func_7337(var_239_object); // 0x1990 NEW_2
	var_236_object = var_239_object; // 0x1991 Mov
	var_237_string = "pt_b1q05_patrol_house"; // 0x1993 MovS
	var_238_float = 2; // 0x1994 MovI
	func_7354(var_236_object, var_237_string, var_238_float); // 0x1995 NEW_2
	var_259_object = Obj(); // 0x1997 PushV
	func_7337(var_259_object); // 0x1998 NEW_2
	ShowMap(var_259_object); // 0x199a ObjFunc
	return 0; // 0x199c Return
}


func_7057(var_333_bool)
{
	var_335_int = 0; var_336_string = ""; // 0x1b92 PushV
	var_336_string = "b1q01"; // 0x1b93 MovS
	func_6123(var_335_int, var_336_string); // 0x1b94 NEW_2
	var_339_int = 0; // 0x1b96 PushI
	var_340_bool = var_335_int == var_339_int; // 0x1b97 Eq
	if(var_340_bool == 0) goto Label_7067; // 0x1b98 JumpB
	var_333_bool = 1; // 0x1b99 MovB
	return 0; // 0x1b9a Return
	
Label_7067:
	var_333_bool = 0; // 0x1b9b MovB
	return 0; // 0x1b9c Return
}


func_4500(var_0_object, var_1_object, var_2_object, var_3_string, var_971_object, var_972_object)
{
	var_0_object = var_972_object; // 0x1195 TMov
	var_1_object = var_971_object; // 0x1196 TMov
	var_3_string = 0; // 0x1197 TMovB
	var_977_int = 1; // 0x1198 PushI
	if(var_977_int == 0) goto Label_4573; // 0x1199 JumpB
	var_978_bool = 0; var_979_object = Obj(); // 0x119a PushV
	var_979_object = var_1_object; // 0x119b MovT
	func_6925(var_979_object); // 0x119c NEW_2
	if(var_978_bool == 0) goto Label_4536; // 0x119e JumpB
	var_984_object = Obj(); var_985_object = Obj(); // 0x119f PushV
	var_984_object = var_1_object; // 0x11a0 MovT
	var_985_object = var_0_object; // 0x11a1 MovT
	func_6557(); // 0x11a2 NEW_2
	var_988_string = ""; // 0x11a4 PushV
	var_988_string = "Neutral"; // 0x11a5 MovS
	func_4603(var_972_object, var_988_string); // 0x11a6 NEW_2
	var_996_int = 531105; // 0x11a8 PushI
	SetMessage(var_996_int); // 0x11a9 TObjFunc
	ClearReplies(); // 0x11ab TObjFunc
	var_997_int = 531107; // 0x11ad PushI
	var_998_int = 32678; // 0x11ae PushI
	var_999_int = 32425; // 0x11af PushI
	AddReply(var_997_int, var_998_int, var_999_int); // 0x11b0 TObjFunc
	var_1000_int = 531353; // 0x11b2 PushI
	var_1001_int = 32678; // 0x11b3 PushI
	var_1002_int = 32685; // 0x11b4 PushI
	AddReply(var_1000_int, var_1001_int, var_1002_int); // 0x11b5 TObjFunc
	goto Label_4573; // 0x11b7 Jump
	
Label_4573:
	var_1003_bool = 0; // 0x11dd PushV
	func_6274(var_1003_bool); // 0x11de NEW_2
	if(var_1003_bool == 0) goto Label_4588; // 0x11e0 JumpB
	
Label_4577:
	lshWaitForAnimEnd(); // 0x11e1 Func
	var_1004_string = var_3_string; // 0x11e3 PushT
	if(var_1004_string == 0) goto Label_4582; // 0x11e4 JumpB
	goto Label_4587; // 0x11e5 Jump
	
Label_4587:
	goto Label_4602; // 0x11eb Jump
	
Label_4602:
	return 0; // 0x11fa Return
	
Label_4582:
	var_1005_string = ""; // 0x11e6 PushV
	var_1005_string = var_2_object; // 0x11e7 MovT
	func_6054(var_1005_string); // 0x11e8 NEW_2
	goto Label_4577; // 0x11ea Jump
	
Label_4588:
	var_1006_string = "all"; // 0x11ec PushS
	var_1007_string = "idle"; // 0x11ed PushS
	PlayAnimation(var_1006_string, var_1007_string); // 0x11ee Func
	
Label_4592:
	WaitForAnimEnd(); // 0x11f0 Func
	var_1008_string = var_3_string; // 0x11f2 PushT
	if(var_1008_string == 0) goto Label_4597; // 0x11f3 JumpB
	goto Label_4602; // 0x11f4 Jump
	
Label_4597:
	var_1009_string = "all"; // 0x11f5 PushS
	var_1010_string = "idle"; // 0x11f6 PushS
	PlayAnimation(var_1009_string, var_1010_string); // 0x11f7 Func
	goto Label_4592; // 0x11f9 Jump
	
Label_4536:
	var_1011_string = ""; // 0x11b8 PushV
	var_1011_string = "Neutral"; // 0x11b9 MovS
	func_4603(var_972_object, var_1011_string); // 0x11ba NEW_2
	var_1012_int = 531108; // 0x11bc PushI
	SetMessage(var_1012_int); // 0x11bd TObjFunc
	ClearReplies(); // 0x11bf TObjFunc
	var_1013_bool = 0; var_1014_object = Obj(); // 0x11c1 PushV
	var_1014_object = var_1_object; // 0x11c2 MovT
	func_6937(var_1014_object); // 0x11c3 NEW_2
	if(var_1013_bool == 0) goto Label_4555; // 0x11c5 JumpB
	var_1019_int = 531109; // 0x11c6 PushI
	var_1020_int = 32429; // 0x11c7 PushI
	var_1021_int = 32427; // 0x11c8 PushI
	AddReply(var_1019_int, var_1020_int, var_1021_int); // 0x11c9 TObjFunc
	
Label_4555:
	var_1022_bool = 0; var_1023_object = Obj(); // 0x11cb PushV
	var_1023_object = var_1_object; // 0x11cc MovT
	func_6949(var_1023_object); // 0x11cd NEW_2
	if(var_1022_bool == 0) goto Label_4565; // 0x11cf JumpB
	var_1028_int = 531129; // 0x11d0 PushI
	var_1029_int = 32448; // 0x11d1 PushI
	var_1030_int = 32447; // 0x11d2 PushI
	AddReply(var_1028_int, var_1029_int, var_1030_int); // 0x11d3 TObjFunc
	
Label_4565:
	var_1031_int = 531110; // 0x11d5 PushI
	var_1032_int = -1; // 0x11d6 PushI
	var_1033_int = 32428; // 0x11d7 PushI
	AddReply(var_1031_int, var_1032_int, var_1033_int); // 0x11d8 TObjFunc
	goto Label_4573; // 0x11da Jump
}


func_3994(var_2_object, var_738_string)
{
	var_739_bool = 0; // 0xf9b PushV
	func_6274(var_739_bool); // 0xf9c NEW_2
	var_740_bool = var_739_bool == 0; // 0xf9e Not
	if(var_740_bool == 0) goto Label_4001; // 0xf9f JumpB
	return 0; // 0xfa0 Return
	
Label_4001:
	var_741_bool = var_738_string == var_2_object; // 0xfa1 Eq
	if(var_741_bool == 0) goto Label_4004; // 0xfa2 JumpB
	return 0; // 0xfa3 Return
	
Label_4004:
	var_742_string = ""; var_743_bool = 0; // 0xfa4 PushV
	var_742_string = var_738_string; // 0xfa5 Mov
	var_744_string = ""; // 0xfa6 PushS
	var_745_bool = var_738_string == var_744_string; // 0xfa7 Eq
	if(var_745_bool == 0) goto Label_4011; // 0xfa8 JumpB
	var_743_bool = 0; // 0xfa9 MovB
	goto Label_4012; // 0xfaa Jump
	
Label_4012:
	func_6070(var_742_string, var_743_bool); // 0xfac NEW_2
	var_2_object = var_738_string; // 0xfae TMov
	return 0; // 0xfaf Return
	
Label_4011:
	var_743_bool = 1; // 0xfab MovB
}


func_7069(var_367_bool)
{
	var_369_int = 0; var_370_string = ""; // 0x1b9e PushV
	var_370_string = "oob1Kapella1"; // 0x1b9f MovS
	func_6123(var_369_int, var_370_string); // 0x1ba0 NEW_2
	var_371_int = 0; // 0x1ba2 PushI
	var_372_bool = var_369_int == var_371_int; // 0x1ba3 Eq
	if(var_372_bool == 0) goto Label_7079; // 0x1ba4 JumpB
	var_367_bool = 1; // 0x1ba5 MovB
	return 0; // 0x1ba6 Return
	
Label_7079:
	var_367_bool = 0; // 0x1ba7 MovB
	return 0; // 0x1ba8 Return
}


func_6557()
{
	var_986_string = "oob11Kapella1"; // 0x199e PushS
	var_987_int = 1; // 0x199f PushI
	SetVariable(var_986_string, var_987_int); // 0x19a0 Func
	return 0; // 0x19a2 Return
}


func_5538(var_0_object)
{
	var_52_bool = 0; // 0x15a2 PushV
	func_5824(var_52_bool); // 0x15a3 NEW_2
	var_55_bool = var_52_bool == 0; // 0x15a5 Not
	if(var_55_bool == 0) goto Label_5545; // 0x15a6 JumpB
	Hold(); // 0x15a7 Func
	
Label_5545:
	GetDirection(var_0_object); // 0x15a9 Func
	
Label_5547:
	func_5714(); // 0x15ac NEW_2
	goto Label_5547; // 0x15ae Jump
}


func_6563()
{
	var_59_string = "b11q02"; // 0x19a4 PushS
	var_60_int = 1; // 0x19a5 PushI
	SetVariable(var_59_string, var_60_int); // 0x19a6 Func
	func_7166(); // 0x19a9 NEW_2
	func_7192(); // 0x19ac NEW_2
	var_92_object = Obj(); var_93_string = ""; // 0x19ae PushV
	var_93_string = "quest_b11_02"; // 0x19af MovS
	func_6128(var_92_object, var_93_string); // 0x19b0 NEW_2
	return 0; // 0x19b2 Return
}


func_2468(var_0_object, var_1_object, var_2_object, var_3_string, var_615_object, var_616_object)
{
	var_0_object = var_616_object; // 0x9a5 TMov
	var_1_object = var_615_object; // 0x9a6 TMov
	var_3_string = 0; // 0x9a7 TMovB
	var_621_int = 1; // 0x9a8 PushI
	if(var_621_int == 0) goto Label_2540; // 0x9a9 JumpB
	var_622_bool = 0; var_623_object = Obj(); // 0x9aa PushV
	var_623_object = var_1_object; // 0x9ab MovT
	func_6771(var_623_object); // 0x9ac NEW_2
	if(var_622_bool == 0) goto Label_2504; // 0x9ae JumpB
	var_628_object = Obj(); var_629_object = Obj(); // 0x9af PushV
	var_628_object = var_1_object; // 0x9b0 MovT
	var_629_object = var_0_object; // 0x9b1 MovT
	func_6347(); // 0x9b2 NEW_2
	var_632_string = ""; // 0x9b4 PushV
	var_632_string = "Sympathy"; // 0x9b5 MovS
	func_2570(var_616_object, var_632_string); // 0x9b6 NEW_2
	var_640_int = 521388; // 0x9b8 PushI
	SetMessage(var_640_int); // 0x9b9 TObjFunc
	ClearReplies(); // 0x9bb TObjFunc
	var_641_int = 521389; // 0x9bd PushI
	var_642_int = 25279; // 0x9be PushI
	var_643_int = 22567; // 0x9bf PushI
	AddReply(var_641_int, var_642_int, var_643_int); // 0x9c0 TObjFunc
	var_644_int = 523995; // 0x9c2 PushI
	var_645_int = 25286; // 0x9c3 PushI
	var_646_int = 25285; // 0x9c4 PushI
	AddReply(var_644_int, var_645_int, var_646_int); // 0x9c5 TObjFunc
	goto Label_2540; // 0x9c7 Jump
	
Label_2540:
	var_647_bool = 0; // 0x9ec PushV
	func_6274(var_647_bool); // 0x9ed NEW_2
	if(var_647_bool == 0) goto Label_2555; // 0x9ef JumpB
	
Label_2544:
	lshWaitForAnimEnd(); // 0x9f0 Func
	var_648_string = var_3_string; // 0x9f2 PushT
	if(var_648_string == 0) goto Label_2549; // 0x9f3 JumpB
	goto Label_2554; // 0x9f4 Jump
	
Label_2554:
	goto Label_2569; // 0x9fa Jump
	
Label_2569:
	return 0; // 0xa09 Return
	
Label_2549:
	var_649_string = ""; // 0x9f5 PushV
	var_649_string = var_2_object; // 0x9f6 MovT
	func_6054(var_649_string); // 0x9f7 NEW_2
	goto Label_2544; // 0x9f9 Jump
	
Label_2555:
	var_650_string = "all"; // 0x9fb PushS
	var_651_string = "idle"; // 0x9fc PushS
	PlayAnimation(var_650_string, var_651_string); // 0x9fd Func
	
Label_2559:
	WaitForAnimEnd(); // 0x9ff Func
	var_652_string = var_3_string; // 0xa01 PushT
	if(var_652_string == 0) goto Label_2564; // 0xa02 JumpB
	goto Label_2569; // 0xa03 Jump
	
Label_2564:
	var_653_string = "all"; // 0xa04 PushS
	var_654_string = "idle"; // 0xa05 PushS
	PlayAnimation(var_653_string, var_654_string); // 0xa06 Func
	goto Label_2559; // 0xa08 Jump
	
Label_2504:
	var_655_string = ""; // 0x9c8 PushV
	var_655_string = "Neutral"; // 0x9c9 MovS
	func_2570(var_616_object, var_655_string); // 0x9ca NEW_2
	var_656_int = 521390; // 0x9cc PushI
	SetMessage(var_656_int); // 0x9cd TObjFunc
	ClearReplies(); // 0x9cf TObjFunc
	var_657_bool = 0; // 0x9d1 PushV
	var_657_bool = 0; // 0x9d2 MovB
	var_658_bool = 0; var_659_object = Obj(); // 0x9d3 PushV
	var_659_object = var_1_object; // 0x9d4 MovT
	func_6759(var_659_object); // 0x9d5 NEW_2
	if(var_658_bool == 0) goto Label_2526; // 0x9d7 JumpB
	var_664_bool = 0; var_665_object = Obj(); // 0x9d8 PushV
	var_665_object = var_1_object; // 0x9d9 MovT
	func_6783(var_665_object); // 0x9da NEW_2
	if(var_664_bool == 0) goto Label_2526; // 0x9dc JumpB
	var_657_bool = 1; // 0x9dd MovB
	
Label_2526:
	if(var_657_bool == 0) goto Label_2532; // 0x9de JumpB
	var_670_int = 521391; // 0x9df PushI
	var_671_int = 22570; // 0x9e0 PushI
	var_672_int = 22569; // 0x9e1 PushI
	AddReply(var_670_int, var_671_int, var_672_int); // 0x9e2 TObjFunc
	
Label_2532:
	var_673_int = 521394; // 0x9e4 PushI
	var_674_int = -1; // 0x9e5 PushI
	var_675_int = 22572; // 0x9e6 PushI
	AddReply(var_673_int, var_674_int, var_675_int); // 0x9e7 TObjFunc
	goto Label_2540; // 0x9e9 Jump
}


func_6054(var_272_string)
{
	var_273_bool = 0; var_274_float = 0; var_275_float = 0; var_276_bool = 0; var_277_float = 0; var_278_float = 0; // 0x17a6 PushV
	lshHasAnimation(var_276_bool, var_272_string); // 0x17a7 Func
	var_279_bool = var_276_bool; // 0x17a9 Push
	if(var_279_bool == 0) goto Label_6065; // 0x17aa JumpB
	lshGetAnimTimes(var_272_string, var_277_float, var_278_float); // 0x17ab Func
	var_280_bool = 0; // 0x17ad PushB
	lshPlayAnimation(var_277_float, var_278_float, var_280_bool); // 0x17ae Func
	goto Label_6069; // 0x17b0 Jump
	
Label_6069:
	return 6; // 0x17b5 Return
	
Label_6065:
	var_281_string = "Can't find lsh animation : "; // 0x17b1 PushS
	var_282_int = var_281_string + var_272_string; // 0x17b2 Add
	Trace(var_282_int); // 0x17b3 Func
}


func_7081(var_384_bool)
{
	var_386_int = 0; var_387_string = ""; // 0x1baa PushV
	var_387_string = "oob1Kapella2"; // 0x1bab MovS
	func_6123(var_386_int, var_387_string); // 0x1bac NEW_2
	var_388_int = 0; // 0x1bae PushI
	var_389_bool = var_386_int == var_388_int; // 0x1baf Eq
	if(var_389_bool == 0) goto Label_7091; // 0x1bb0 JumpB
	var_384_bool = 1; // 0x1bb1 MovB
	return 0; // 0x1bb2 Return
	
Label_7091:
	var_384_bool = 0; // 0x1bb3 MovB
	return 0; // 0x1bb4 Return
}


func_5552(var_76_bool)
{
	var_77_object = Obj(); var_78_object = Obj(); // 0x15b0 PushV
	var_79_string = "player"; // 0x15b1 PushS
	FindActor(var_78_object, var_79_string); // 0x15b2 Func
	var_80_bool = var_78_object == 0; // 0x15b4 Not
	if(var_80_bool == 0) goto Label_5560; // 0x15b5 JumpB
	var_76_bool = 0; // 0x15b6 MovB
	return 2; // 0x15b7 Return
	
Label_5560:
	var_81_bool = 0; var_82_object = Obj(); // 0x15b8 PushV
	var_82_object = var_78_object; // 0x15b9 Mov
	func_5815(var_82_object); // 0x15ba NEW_2
	var_76_bool = var_81_bool; // 0x15bb Mov
	return 2; // 0x15bd Return
}


func_6579()
{
	func_7179(); // 0x19b5 NEW_2
	var_116_bool = 0; var_117_string = ""; var_118_string = ""; // 0x19b7 PushV
	var_117_string = "quest_b11_02"; // 0x19b8 MovS
	var_118_string = "completed"; // 0x19b9 MovS
	func_6202(var_116_bool, var_117_string, var_118_string); // 0x19ba NEW_2
	return 0; // 0x19bc Return
}


func_7093(var_393_bool)
{
	var_395_int = 0; var_396_string = ""; // 0x1bb6 PushV
	var_396_string = "oob1Kapella3"; // 0x1bb7 MovS
	func_6123(var_395_int, var_396_string); // 0x1bb8 NEW_2
	var_397_int = 0; // 0x1bba PushI
	var_398_bool = var_395_int == var_397_int; // 0x1bbb Eq
	if(var_398_bool == 0) goto Label_7103; // 0x1bbc JumpB
	var_393_bool = 1; // 0x1bbd MovB
	return 0; // 0x1bbe Return
	
Label_7103:
	var_393_bool = 0; // 0x1bbf MovB
	return 0; // 0x1bc0 Return
}


func_6070(var_250_string, var_251_bool)
{
	var_254_bool = 0; var_255_float = 0; var_256_float = 0; var_257_bool = 0; var_258_float = 0; var_259_float = 0; // 0x17b6 PushV
	lshHasAnimation(var_257_bool, var_250_string); // 0x17b7 Func
	var_260_bool = var_257_bool; // 0x17b9 Push
	if(var_260_bool == 0) goto Label_6080; // 0x17ba JumpB
	lshGetAnimTimes(var_250_string, var_258_float, var_259_float); // 0x17bb Func
	lshPlayAnimation(var_258_float, var_259_float, var_251_bool); // 0x17bd Func
	goto Label_6084; // 0x17bf Jump
	
Label_6084:
	return 6; // 0x17c4 Return
	
Label_6080:
	var_261_string = "Can't find lsh animation : "; // 0x17c0 PushS
	var_262_int = var_261_string + var_250_string; // 0x17c1 Add
	Trace(var_262_int); // 0x17c2 Func
}


func_3003(var_0_object, var_1_object, var_2_object, var_3_string, var_843_object, var_844_object)
{
	var_0_object = var_844_object; // 0xbbc TMov
	var_1_object = var_843_object; // 0xbbd TMov
	var_3_string = 0; // 0xbbe TMovB
	var_849_int = 1; // 0xbbf PushI
	if(var_849_int == 0) goto Label_3120; // 0xbc0 JumpB
	var_850_bool = 0; var_851_object = Obj(); // 0xbc1 PushV
	var_851_object = var_1_object; // 0xbc2 MovT
	func_6961(var_851_object); // 0xbc3 NEW_2
	if(var_850_bool == 0) goto Label_3039; // 0xbc5 JumpB
	var_856_object = Obj(); var_857_object = Obj(); // 0xbc6 PushV
	var_856_object = var_1_object; // 0xbc7 MovT
	var_857_object = var_0_object; // 0xbc8 MovT
	func_6589(); // 0xbc9 NEW_2
	var_860_object = Obj(); var_861_object = Obj(); // 0xbcb PushV
	var_860_object = var_1_object; // 0xbcc MovT
	var_861_object = var_0_object; // 0xbcd MovT
	func_6631(); // 0xbce NEW_2
	var_864_string = ""; // 0xbd0 PushV
	var_864_string = "Neutral"; // 0xbd1 MovS
	func_3150(var_844_object, var_864_string); // 0xbd2 NEW_2
	var_872_int = 531154; // 0xbd4 PushI
	SetMessage(var_872_int); // 0xbd5 TObjFunc
	ClearReplies(); // 0xbd7 TObjFunc
	var_873_int = 531276; // 0xbd9 PushI
	var_874_int = 32591; // 0xbda PushI
	var_875_int = 32590; // 0xbdb PushI
	AddReply(var_873_int, var_874_int, var_875_int); // 0xbdc TObjFunc
	goto Label_3120; // 0xbde Jump
	
Label_3120:
	var_876_bool = 0; // 0xc30 PushV
	func_6274(var_876_bool); // 0xc31 NEW_2
	if(var_876_bool == 0) goto Label_3135; // 0xc33 JumpB
	
Label_3124:
	lshWaitForAnimEnd(); // 0xc34 Func
	var_877_string = var_3_string; // 0xc36 PushT
	if(var_877_string == 0) goto Label_3129; // 0xc37 JumpB
	goto Label_3134; // 0xc38 Jump
	
Label_3134:
	goto Label_3149; // 0xc3e Jump
	
Label_3149:
	return 0; // 0xc4d Return
	
Label_3129:
	var_878_string = ""; // 0xc39 PushV
	var_878_string = var_2_object; // 0xc3a MovT
	func_6054(var_878_string); // 0xc3b NEW_2
	goto Label_3124; // 0xc3d Jump
	
Label_3135:
	var_879_string = "all"; // 0xc3f PushS
	var_880_string = "idle"; // 0xc40 PushS
	PlayAnimation(var_879_string, var_880_string); // 0xc41 Func
	
Label_3139:
	WaitForAnimEnd(); // 0xc43 Func
	var_881_string = var_3_string; // 0xc45 PushT
	if(var_881_string == 0) goto Label_3144; // 0xc46 JumpB
	goto Label_3149; // 0xc47 Jump
	
Label_3144:
	var_882_string = "all"; // 0xc48 PushS
	var_883_string = "idle"; // 0xc49 PushS
	PlayAnimation(var_882_string, var_883_string); // 0xc4a Func
	goto Label_3139; // 0xc4c Jump
	
Label_3039:
	var_884_string = ""; // 0xbdf PushV
	var_884_string = "Neutral"; // 0xbe0 MovS
	func_3150(var_844_object, var_884_string); // 0xbe1 NEW_2
	var_885_int = 521924; // 0xbe3 PushI
	SetMessage(var_885_int); // 0xbe4 TObjFunc
	ClearReplies(); // 0xbe6 TObjFunc
	var_886_bool = 0; // 0xbe8 PushV
	var_886_bool = 0; // 0xbe9 MovB
	var_887_bool = 0; var_888_object = Obj(); // 0xbea PushV
	var_888_object = var_1_object; // 0xbeb MovT
	func_6795(var_888_object); // 0xbec NEW_2
	if(var_887_bool == 0) goto Label_3062; // 0xbee JumpB
	var_893_bool = 0; var_894_object = Obj(); // 0xbef PushV
	var_894_object = var_1_object; // 0xbf0 MovT
	func_6807(var_894_object); // 0xbf1 NEW_2
	var_899_bool = var_893_bool == 0; // 0xbf3 Not
	if(var_899_bool == 0) goto Label_3062; // 0xbf4 JumpB
	var_886_bool = 1; // 0xbf5 MovB
	
Label_3062:
	if(var_886_bool == 0) goto Label_3068; // 0xbf6 JumpB
	var_900_int = 521925; // 0xbf7 PushI
	var_901_int = 23656; // 0xbf8 PushI
	var_902_int = 23099; // 0xbf9 PushI
	AddReply(var_900_int, var_901_int, var_902_int); // 0xbfa TObjFunc
	
Label_3068:
	var_903_bool = 0; var_904_object = Obj(); // 0xbfc PushV
	var_904_object = var_1_object; // 0xbfd MovT
	func_6985(var_904_object); // 0xbfe NEW_2
	if(var_903_bool == 0) goto Label_3078; // 0xc00 JumpB
	var_909_int = 522478; // 0xc01 PushI
	var_910_int = 23652; // 0xc02 PushI
	var_911_int = 23651; // 0xc03 PushI
	AddReply(var_909_int, var_910_int, var_911_int); // 0xc04 TObjFunc
	
Label_3078:
	var_912_bool = 0; // 0xc06 PushV
	var_912_bool = 0; // 0xc07 MovB
	var_913_bool = 0; var_914_object = Obj(); // 0xc08 PushV
	var_914_object = var_1_object; // 0xc09 MovT
	func_6913(var_914_object); // 0xc0a NEW_2
	if(var_913_bool == 0) goto Label_3091; // 0xc0c JumpB
	var_919_bool = 0; var_920_object = Obj(); // 0xc0d PushV
	var_920_object = var_1_object; // 0xc0e MovT
	func_6819(var_920_object); // 0xc0f NEW_2
	if(var_919_bool == 0) goto Label_3091; // 0xc11 JumpB
	var_912_bool = 1; // 0xc12 MovB
	
Label_3091:
	if(var_912_bool == 0) goto Label_3097; // 0xc13 JumpB
	var_925_int = 530448; // 0xc14 PushI
	var_926_int = 31815; // 0xc15 PushI
	var_927_int = 31814; // 0xc16 PushI
	AddReply(var_925_int, var_926_int, var_927_int); // 0xc17 TObjFunc
	
Label_3097:
	var_928_bool = 0; var_929_object = Obj(); // 0xc19 PushV
	var_929_object = var_1_object; // 0xc1a MovT
	func_6973(var_929_object); // 0xc1b NEW_2
	if(var_928_bool == 0) goto Label_3107; // 0xc1d JumpB
	var_934_int = 531159; // 0xc1e PushI
	var_935_int = 32468; // 0xc1f PushI
	var_936_int = 32467; // 0xc20 PushI
	AddReply(var_934_int, var_935_int, var_936_int); // 0xc21 TObjFunc
	
Label_3107:
	var_937_int = 521926; // 0xc23 PushI
	var_938_int = -1; // 0xc24 PushI
	var_939_int = 23100; // 0xc25 PushI
	AddReply(var_937_int, var_938_int, var_939_int); // 0xc26 TObjFunc
	var_940_int = 531282; // 0xc28 PushI
	var_941_int = -1; // 0xc29 PushI
	var_942_int = 32597; // 0xc2a PushI
	AddReply(var_940_int, var_941_int, var_942_int); // 0xc2b TObjFunc
	goto Label_3120; // 0xc2d Jump
}


func_6589()
{
	var_858_string = "oob10Kapella2"; // 0x19be PushS
	var_859_int = 1; // 0x19bf PushI
	SetVariable(var_858_string, var_859_int); // 0x19c0 Func
	return 0; // 0x19c2 Return
}


func_5055(var_0_object, var_1_object, var_2_object, var_3_string, var_1062_object, var_1063_object)
{
	var_0_object = var_1063_object; // 0x13c0 TMov
	var_1_object = var_1062_object; // 0x13c1 TMov
	var_3_string = 0; // 0x13c2 TMovB
	var_1068_int = 1; // 0x13c3 PushI
	if(var_1068_int == 0) goto Label_5088; // 0x13c4 JumpB
	var_1069_string = ""; // 0x13c5 PushV
	var_1069_string = "Neutral"; // 0x13c6 MovS
	func_5118(var_1063_object, var_1069_string); // 0x13c7 NEW_2
	var_1077_int = 535258; // 0x13c9 PushI
	SetMessage(var_1077_int); // 0x13ca TObjFunc
	ClearReplies(); // 0x13cc TObjFunc
	var_1078_bool = 0; var_1079_object = Obj(); // 0x13ce PushV
	var_1079_object = var_1_object; // 0x13cf MovT
	func_6997(var_1079_object); // 0x13d0 NEW_2
	if(var_1078_bool == 0) goto Label_5080; // 0x13d2 JumpB
	var_1084_int = 535259; // 0x13d3 PushI
	var_1085_int = 36983; // 0x13d4 PushI
	var_1086_int = 36934; // 0x13d5 PushI
	AddReply(var_1084_int, var_1085_int, var_1086_int); // 0x13d6 TObjFunc
	
Label_5080:
	var_1087_int = 535304; // 0x13d8 PushI
	var_1088_int = -1; // 0x13d9 PushI
	var_1089_int = 36982; // 0x13da PushI
	AddReply(var_1087_int, var_1088_int, var_1089_int); // 0x13db TObjFunc
	goto Label_5088; // 0x13dd Jump
	
Label_5088:
	var_1090_bool = 0; // 0x13e0 PushV
	func_6274(var_1090_bool); // 0x13e1 NEW_2
	if(var_1090_bool == 0) goto Label_5103; // 0x13e3 JumpB
	
Label_5092:
	lshWaitForAnimEnd(); // 0x13e4 Func
	var_1091_string = var_3_string; // 0x13e6 PushT
	if(var_1091_string == 0) goto Label_5097; // 0x13e7 JumpB
	goto Label_5102; // 0x13e8 Jump
	
Label_5102:
	goto Label_5117; // 0x13ee Jump
	
Label_5117:
	return 0; // 0x13fd Return
	
Label_5097:
	var_1092_string = ""; // 0x13e9 PushV
	var_1092_string = var_2_object; // 0x13ea MovT
	func_6054(var_1092_string); // 0x13eb NEW_2
	goto Label_5092; // 0x13ed Jump
	
Label_5103:
	var_1093_string = "all"; // 0x13ef PushS
	var_1094_string = "idle"; // 0x13f0 PushS
	PlayAnimation(var_1093_string, var_1094_string); // 0x13f1 Func
	
Label_5107:
	WaitForAnimEnd(); // 0x13f3 Func
	var_1095_string = var_3_string; // 0x13f5 PushT
	if(var_1095_string == 0) goto Label_5112; // 0x13f6 JumpB
	goto Label_5117; // 0x13f7 Jump
	
Label_5112:
	var_1096_string = "all"; // 0x13f8 PushS
	var_1097_string = "idle"; // 0x13f9 PushS
	PlayAnimation(var_1096_string, var_1097_string); // 0x13fa Func
	goto Label_5107; // 0x13fc Jump
}


func_5567(var_0_object)
{
	var_128_float = GetByIndex(var_0_object, 0); // 0x15bf PushE
	var_129_float = GetByIndex(var_0_object, 2); // 0x15c0 PushE
	RotateAsync(var_128_float, var_129_float); // 0x15c1 Func
	return 0; // 0x15c3 Return
}


func_7105(var_402_bool)
{
	var_404_int = 0; var_405_string = ""; // 0x1bc2 PushV
	var_405_string = "oob1Kapella4"; // 0x1bc3 MovS
	func_6123(var_404_int, var_405_string); // 0x1bc4 NEW_2
	var_406_int = 0; // 0x1bc6 PushI
	var_407_bool = var_404_int == var_406_int; // 0x1bc7 Eq
	if(var_407_bool == 0) goto Label_7115; // 0x1bc8 JumpB
	var_402_bool = 1; // 0x1bc9 MovB
	return 0; // 0x1bca Return
	
Label_7115:
	var_402_bool = 0; // 0x1bcb MovB
	return 0; // 0x1bcc Return
}


func_6595()
{
	var_59_object = Obj(); var_60_object = Obj(); // 0x19c3 PushV
	var_61_string = "b10q03"; // 0x19c4 PushS
	var_62_int = 1; // 0x19c5 PushI
	SetVariable(var_61_string, var_62_int); // 0x19c6 Func
	var_63_object = Obj(); // 0x19c8 PushV
	func_7337(var_63_object); // 0x19c9 NEW_2
	var_60_object = var_63_object; // 0x19ca Mov
	var_70_string = "b10q03KapellaGotoMishka"; // 0x19cc PushS
	var_71_string = "pt_map_mishka"; // 0x19cd PushS
	var_72_int = 0; // 0x19ce PushI
	var_73_int = 531261; // 0x19cf PushI
	var_74_float = 0; // 0x19d0 PushV
	func_6214(var_74_float); // 0x19d1 NEW_2
	AddMark(var_70_string, var_71_string, var_72_int, var_73_int, var_74_float); // 0x19d3 ObjFunc
	func_7140(); // 0x19d6 NEW_2
	func_7153(); // 0x19d9 NEW_2
	var_108_object = Obj(); var_109_string = ""; // 0x19db PushV
	var_109_string = "quest_b10_03"; // 0x19dc MovS
	func_6128(var_108_object, var_109_string); // 0x19dd NEW_2
	return 2; // 0x19df Return
}


func_5572(var_59_bool)
{
	var_60_object = Obj(); var_61_bool = 0; var_62_object = Obj(); var_63_bool = 0; // 0x15c4 PushV
	var_64_string = "player"; // 0x15c5 PushS
	FindActor(var_62_object, var_64_string); // 0x15c6 Func
	var_65_bool = var_62_object == 0; // 0x15c8 Not
	if(var_65_bool == 0) goto Label_5580; // 0x15c9 JumpB
	var_59_bool = 0; // 0x15ca MovB
	return 4; // 0x15cb Return
	
Label_5580:
	var_66_float = 0; var_67_object = Obj(); // 0x15cc PushV
	var_67_object = var_62_object; // 0x15cd Mov
	func_5790(var_67_object); // 0x15ce NEW_2
	var_74_float = 90000.0; // 0x15d0 PushF
	var_75_bool = var_66_float > var_74_float; // 0x15d1 GT
	if(var_75_bool == 0) goto Label_5589; // 0x15d2 JumpB
	var_59_bool = 0; // 0x15d3 MovB
	return 4; // 0x15d4 Return
	
Label_5589:
	CanSee(var_63_bool, var_62_object); // 0x15d5 Func
	var_59_bool = var_63_bool; // 0x15d7 Mov
	return 4; // 0x15d8 Return
}


func_6085(var_178_bool, var_179_string)
{
	var_180_bool = 0; var_181_bool = 0; // 0x17c5 PushV
	var_182_bool = 0; // 0x17c6 PushV
	func_6274(var_182_bool); // 0x17c7 NEW_2
	if(var_182_bool == 0) goto Label_6098; // 0x17c9 JumpB
	lshHasSpeech(var_181_bool, var_179_string); // 0x17ca Func
	var_183_bool = var_181_bool; // 0x17cc Push
	if(var_183_bool == 0) goto Label_6098; // 0x17cd JumpB
	lshPlaySpeech(var_179_string); // 0x17ce Func
	var_178_bool = 1; // 0x17d0 MovB
	return 2; // 0x17d1 Return
	
Label_6098:
	var_178_bool = 0; // 0x17d2 MovB
	return 2; // 0x17d3 Return
}


func_7117(var_461_bool)
{
	var_463_int = 0; var_464_string = ""; // 0x1bce PushV
	var_464_string = "oob2Kapella1"; // 0x1bcf MovS
	func_6123(var_463_int, var_464_string); // 0x1bd0 NEW_2
	var_465_int = 0; // 0x1bd2 PushI
	var_466_bool = var_463_int == var_465_int; // 0x1bd3 Eq
	if(var_466_bool == 0) goto Label_7127; // 0x1bd4 JumpB
	var_461_bool = 1; // 0x1bd5 MovB
	return 0; // 0x1bd6 Return
	
Label_7127:
	var_461_bool = 0; // 0x1bd7 MovB
	return 0; // 0x1bd8 Return
}


func_461(var_0_object, var_1_object, var_2_object, var_3_string, var_509_object, var_510_object)
{
	var_0_object = var_510_object; // 0x1ce TMov
	var_1_object = var_509_object; // 0x1cf TMov
	var_3_string = 0; // 0x1d0 TMovB
	var_515_int = 1; // 0x1d1 PushI
	if(var_515_int == 0) goto Label_558; // 0x1d2 JumpB
	var_516_object = Obj(); var_517_object = Obj(); // 0x1d3 PushV
	var_516_object = var_1_object; // 0x1d4 MovT
	var_517_object = var_0_object; // 0x1d5 MovT
	func_6508(); // 0x1d6 NEW_2
	var_520_string = ""; // 0x1d8 PushV
	var_520_string = "Neutral"; // 0x1d9 MovS
	func_588(var_510_object, var_520_string); // 0x1da NEW_2
	var_528_int = 518365; // 0x1dc PushI
	SetMessage(var_528_int); // 0x1dd TObjFunc
	ClearReplies(); // 0x1df TObjFunc
	var_529_bool = 0; var_530_object = Obj(); // 0x1e1 PushV
	var_530_object = var_1_object; // 0x1e2 MovT
	func_7021(var_530_object); // 0x1e3 NEW_2
	if(var_529_bool == 0) goto Label_491; // 0x1e5 JumpB
	var_535_int = 518366; // 0x1e6 PushI
	var_536_int = 19481; // 0x1e7 PushI
	var_537_int = 19479; // 0x1e8 PushI
	AddReply(var_535_int, var_536_int, var_537_int); // 0x1e9 TObjFunc
	
Label_491:
	var_538_bool = 0; // 0x1eb PushV
	var_538_bool = 0; // 0x1ec MovB
	var_539_bool = 0; var_540_object = Obj(); // 0x1ed PushV
	var_540_object = var_1_object; // 0x1ee MovT
	func_7021(var_540_object); // 0x1ef NEW_2
	var_541_bool = var_539_bool == 0; // 0x1f1 Not
	if(var_541_bool == 0) goto Label_505; // 0x1f2 JumpB
	var_542_bool = 0; var_543_object = Obj(); // 0x1f3 PushV
	var_543_object = var_1_object; // 0x1f4 MovT
	func_7009(var_543_object); // 0x1f5 NEW_2
	if(var_542_bool == 0) goto Label_505; // 0x1f7 JumpB
	var_538_bool = 1; // 0x1f8 MovB
	
Label_505:
	if(var_538_bool == 0) goto Label_511; // 0x1f9 JumpB
	var_548_int = 518371; // 0x1fa PushI
	var_549_int = 19485; // 0x1fb PushI
	var_550_int = 19484; // 0x1fc PushI
	AddReply(var_548_int, var_549_int, var_550_int); // 0x1fd TObjFunc
	
Label_511:
	var_551_bool = 0; // 0x1ff PushV
	var_551_bool = 0; // 0x200 MovB
	var_552_bool = 0; var_553_object = Obj(); // 0x201 PushV
	var_553_object = var_1_object; // 0x202 MovT
	func_7033(var_553_object); // 0x203 NEW_2
	if(var_552_bool == 0) goto Label_524; // 0x205 JumpB
	var_558_bool = 0; var_559_object = Obj(); // 0x206 PushV
	var_559_object = var_1_object; // 0x207 MovT
	func_7045(var_559_object); // 0x208 NEW_2
	if(var_558_bool == 0) goto Label_524; // 0x20a JumpB
	var_551_bool = 1; // 0x20b MovB
	
Label_524:
	if(var_551_bool == 0) goto Label_530; // 0x20c JumpB
	var_564_int = 518374; // 0x20d PushI
	var_565_int = 19488; // 0x20e PushI
	var_566_int = 19487; // 0x20f PushI
	AddReply(var_564_int, var_565_int, var_566_int); // 0x210 TObjFunc
	
Label_530:
	var_567_bool = 0; // 0x212 PushV
	var_567_bool = 0; // 0x213 MovB
	var_568_bool = 0; var_569_object = Obj(); // 0x214 PushV
	var_569_object = var_1_object; // 0x215 MovT
	func_7033(var_569_object); // 0x216 NEW_2
	if(var_568_bool == 0) goto Label_544; // 0x218 JumpB
	var_570_bool = 0; var_571_object = Obj(); // 0x219 PushV
	var_571_object = var_1_object; // 0x21a MovT
	func_7045(var_571_object); // 0x21b NEW_2
	var_572_bool = var_570_bool == 0; // 0x21d Not
	if(var_572_bool == 0) goto Label_544; // 0x21e JumpB
	var_567_bool = 1; // 0x21f MovB
	
Label_544:
	if(var_567_bool == 0) goto Label_550; // 0x220 JumpB
	var_573_int = 518377; // 0x221 PushI
	var_574_int = 19491; // 0x222 PushI
	var_575_int = 19490; // 0x223 PushI
	AddReply(var_573_int, var_574_int, var_575_int); // 0x224 TObjFunc
	
Label_550:
	var_576_int = 518367; // 0x226 PushI
	var_577_int = -1; // 0x227 PushI
	var_578_int = 19480; // 0x228 PushI
	AddReply(var_576_int, var_577_int, var_578_int); // 0x229 TObjFunc
	goto Label_558; // 0x22b Jump
	
Label_558:
	var_579_bool = 0; // 0x22e PushV
	func_6274(var_579_bool); // 0x22f NEW_2
	if(var_579_bool == 0) goto Label_573; // 0x231 JumpB
	
Label_562:
	lshWaitForAnimEnd(); // 0x232 Func
	var_580_string = var_3_string; // 0x234 PushT
	if(var_580_string == 0) goto Label_567; // 0x235 JumpB
	goto Label_572; // 0x236 Jump
	
Label_572:
	goto Label_587; // 0x23c Jump
	
Label_587:
	return 0; // 0x24b Return
	
Label_567:
	var_581_string = ""; // 0x237 PushV
	var_581_string = var_2_object; // 0x238 MovT
	func_6054(var_581_string); // 0x239 NEW_2
	goto Label_562; // 0x23b Jump
	
Label_573:
	var_582_string = "all"; // 0x23d PushS
	var_583_string = "idle"; // 0x23e PushS
	PlayAnimation(var_582_string, var_583_string); // 0x23f Func
	
Label_577:
	WaitForAnimEnd(); // 0x241 Func
	var_584_string = var_3_string; // 0x243 PushT
	if(var_584_string == 0) goto Label_582; // 0x244 JumpB
	goto Label_587; // 0x245 Jump
	
Label_582:
	var_585_string = "all"; // 0x246 PushS
	var_586_string = "idle"; // 0x247 PushS
	PlayAnimation(var_585_string, var_586_string); // 0x248 Func
	goto Label_577; // 0x24a Jump
}


func_6100()
{
	var_54_bool = 0; // 0x17d4 PushV
	func_6274(var_54_bool); // 0x17d5 NEW_2
	if(var_54_bool == 0) goto Label_6106; // 0x17d7 JumpB
	lshStopSpeech(); // 0x17d8 Func
	
Label_6106:
	return 0; // 0x17da Return
}


func_7129(var_729_bool)
{
	var_731_int = 0; // 0x1bda PushV
	func_6228(var_731_int); // 0x1bdb NEW_2
	var_736_int = 18; // 0x1bdd PushI
	var_737_bool = var_731_int >= var_736_int; // 0x1bde GE
	if(var_737_bool == 0) goto Label_7138; // 0x1bdf JumpB
	var_729_bool = 1; // 0x1be0 MovB
	return 0; // 0x1be1 Return
	
Label_7138:
	var_729_bool = 0; // 0x1be2 MovB
	return 0; // 0x1be3 Return
}


func_5594()
{
	var_1158_float = 0; var_1159_float = 0; // 0x15da PushV
	var_1160_int = 8; // 0x15db PushI
	var_1161_int = 16; // 0x15dc PushI
	rand(var_1159_float, var_1160_int, var_1161_int); // 0x15dd Func
	var_1162_int = 10; // 0x15df PushI
	SetTimer(var_1162_int, var_1159_float); // 0x15e0 Func
	return 2; // 0x15e2 Return
}


func_6107(var_146_object)
{
	var_147_object = Obj(); var_148_object = Obj(); // 0x17db PushV
	self(var_148_object); // 0x17dc Func
	var_146_object = var_148_object; // 0x17de Mov
	return 2; // 0x17df Return
}


func_6625()
{
	var_134_string = "oob10Kapella3"; // 0x19e2 PushS
	var_135_int = 1; // 0x19e3 PushI
	SetVariable(var_134_string, var_135_int); // 0x19e4 Func
	return 0; // 0x19e6 Return
}


func_6113(var_110_cvector, var_111_cvector)
{
	var_113_float = 0; var_114_float = 0; // 0x17e1 PushV
	var_115_int = var_111_cvector | var_111_cvector; // 0x17e2 Or
	var_114_float = sqrt(var_115_int); // 0x17e3 Sqrt2
	var_116_float = 0.0; // 0x17e4 PushF
	var_117_bool = var_114_float < var_116_float; // 0x17e5 LT
	if(var_117_bool == 0) goto Label_6121; // 0x17e6 JumpB
	var_110_cvector = CVector(0.0, 0.0, 0.0); // 0x17e7 MovV
	return 2; // 0x17e8 Return
	
Label_6121:
	var_110_cvector = var_111_cvector / var_111_cvector; // 0x17e9 Div2
	return 2; // 0x17ea Return
}


func_5603()
{
	var_1157_int = 10; // 0x15e3 PushI
	KillTimer(var_1157_int); // 0x15e4 Func
	return 0; // 0x15e6 Return
}


func_7140()
{
	var_77_object = Obj(); var_78_object = Obj(); // 0x1be4 PushV
	var_79_int = 594; // 0x1be5 PushI
	var_80_int = 2; // 0x1be6 PushI
	var_81_int = 531145; // 0x1be7 PushI
	CreateDiaryEntry(var_78_object, var_79_int, var_80_int, var_81_int); // 0x1be8 Func
	var_82_bool = 0; var_83_object = Obj(); var_84_int = 0; // 0x1bea PushV
	var_83_object = var_78_object; // 0x1beb Mov
	var_84_int = -1; // 0x1bec MovI
	func_7309(var_82_bool, var_83_object, var_84_int); // 0x1bed NEW_2
	return 2; // 0x1bef Return
}


func_6631()
{
	var_862_string = "b10KapellaVisit"; // 0x19e8 PushS
	var_863_int = 1; // 0x19e9 PushI
	SetVariable(var_862_string, var_863_int); // 0x19ea Func
	return 0; // 0x19ec Return
}


func_6123(var_335_int, var_336_string)
{
	var_337_int = 0; var_338_int = 0; // 0x17eb PushV
	GetVariable(var_336_string, var_338_int); // 0x17ec Func
	var_335_int = var_338_int; // 0x17ee Mov
	return 2; // 0x17ef Return
}


func_6637()
{
	var_59_string = "oob12Kapella1"; // 0x19ee PushS
	var_60_int = 1; // 0x19ef PushI
	SetVariable(var_59_string, var_60_int); // 0x19f0 Func
	return 0; // 0x19f2 Return
}


func_6128(var_92_object, var_93_string)
{
	var_94_object = Obj(); var_95_object = Obj(); var_96_object = Obj(); var_97_object = Obj(); // 0x17f0 PushV
	GetMainOutdoorScene(var_96_object); // 0x17f1 Func
	var_98_string = ".bin"; // 0x17f3 PushS
	var_99_int = var_93_string + var_98_string; // 0x17f4 Add
	AddBlankActor(var_97_object, var_96_object, var_93_string, var_99_int); // 0x17f5 Func
	var_92_object = var_97_object; // 0x17f7 Mov
	return 4; // 0x17f8 Return
}


func_7153()
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x1bf1 PushV
	var_102_int = 595; // 0x1bf2 PushI
	var_103_int = 2; // 0x1bf3 PushI
	var_104_int = 531146; // 0x1bf4 PushI
	CreateDiaryEntry(var_101_object, var_102_int, var_103_int, var_104_int); // 0x1bf5 Func
	var_105_bool = 0; var_106_object = Obj(); var_107_int = 0; // 0x1bf7 PushV
	var_106_object = var_101_object; // 0x1bf8 Mov
	var_107_int = 594; // 0x1bf9 MovI
	func_7309(var_105_bool, var_106_object, var_107_int); // 0x1bfa NEW_2
	return 2; // 0x1bfc Return
}


func_6643()
{
	var_169_int = 0; var_170_string = ""; // 0x19f4 PushV
	var_170_string = "b1q01"; // 0x19f5 MovS
	func_6123(var_169_int, var_170_string); // 0x19f6 NEW_2
	var_173_int = 1; // 0x19f8 PushI
	var_174_bool = var_169_int == var_173_int; // 0x19f9 Eq
	if(var_174_bool == 0) goto Label_6654; // 0x19fa JumpB
	func_7205(); // 0x19fc NEW_2
	
Label_6654:
	return 0; // 0x19fe Return
}


func_6139(var_141_int, var_142_int)
{
	var_143_object = Obj(); var_144_object = Obj(); // 0x17fb PushV
	CreateIntVector(var_144_object); // 0x17fc Func
	add(var_141_int); // 0x17fe ObjFunc
	add(var_142_int); // 0x1800 ObjFunc
	var_145_int = 3; // 0x1802 PushI
	SendWorldWndMessage(var_145_int, var_144_object); // 0x1803 Func
	return 2; // 0x1805 Return
}


func_7166()
{
	var_61_object = Obj(); var_62_object = Obj(); // 0x1bfe PushV
	var_63_int = 598; // 0x1bff PushI
	var_64_int = 2; // 0x1c00 PushI
	var_65_int = 531149; // 0x1c01 PushI
	CreateDiaryEntry(var_62_object, var_63_int, var_64_int, var_65_int); // 0x1c02 Func
	var_66_bool = 0; var_67_object = Obj(); var_68_int = 0; // 0x1c04 PushV
	var_67_object = var_62_object; // 0x1c05 Mov
	var_68_int = -1; // 0x1c06 MovI
	func_7309(var_66_bool, var_67_object, var_68_int); // 0x1c07 NEW_2
	return 2; // 0x1c09 Return
}


func_6655(var_122_object)
{
	var_124_string = "kapella beads is given"; // 0x1a00 PushS
	Trace(var_124_string); // 0x1a01 Func
	var_125_object = Obj(); var_126_string = ""; var_127_int = 0; // 0x1a03 PushV
	var_125_object = var_122_object; // 0x1a04 Mov
	var_126_string = "d11q06KapellaBeads"; // 0x1a05 MovS
	var_127_int = 1; // 0x1a06 MovI
	func_6189(var_125_object, var_126_string, var_127_int); // 0x1a07 NEW_2
	return 0; // 0x1a09 Return
}


