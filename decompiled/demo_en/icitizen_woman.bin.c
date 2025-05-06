task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 1; // 0x20b PushI
	if(var_22_int == 0) goto Label_1175; // 0x20c JumpB
	func_3066(); // 0x20e NEW_2
	var_24_int = 45638; // 0x210 PushI
	var_25_bool = var_21_bool == var_24_int; // 0x211 Eq
	if(var_25_bool == 0) goto Label_536; // 0x212 JumpB
	var_26_object = Obj(); var_27_object = Obj(); // 0x213 PushV
	var_26_object = var_1_object; // 0x214 MovT
	var_27_object = var_0_object; // 0x215 MovT
	func_3194(); // 0x216 NEW_2
	
Label_536:
	var_29_int = 45639; // 0x218 PushI
	var_30_bool = var_21_bool == var_29_int; // 0x219 Eq
	if(var_30_bool == 0) goto Label_544; // 0x21a JumpB
	var_31_object = Obj(); var_32_object = Obj(); // 0x21b PushV
	var_31_object = var_1_object; // 0x21c MovT
	var_32_object = var_0_object; // 0x21d MovT
	func_3194(); // 0x21e NEW_2
	
Label_544:
	var_33_int = 45643; // 0x220 PushI
	var_34_bool = var_21_bool == var_33_int; // 0x221 Eq
	if(var_34_bool == 0) goto Label_552; // 0x222 JumpB
	var_35_object = Obj(); var_36_object = Obj(); // 0x223 PushV
	var_35_object = var_1_object; // 0x224 MovT
	var_36_object = var_0_object; // 0x225 MovT
	func_3194(); // 0x226 NEW_2
	
Label_552:
	var_37_int = 45664; // 0x228 PushI
	var_38_bool = var_21_bool == var_37_int; // 0x229 Eq
	if(var_38_bool == 0) goto Label_560; // 0x22a JumpB
	var_39_object = Obj(); var_40_object = Obj(); // 0x22b PushV
	var_39_object = var_1_object; // 0x22c MovT
	var_40_object = var_0_object; // 0x22d MovT
	func_3194(); // 0x22e NEW_2
	
Label_560:
	var_41_int = 40043; // 0x230 PushI
	var_42_bool = var_21_bool == var_41_int; // 0x231 Eq
	if(var_42_bool == 0) goto Label_568; // 0x232 JumpB
	var_43_object = Obj(); var_44_object = Obj(); // 0x233 PushV
	var_43_object = var_1_object; // 0x234 MovT
	var_44_object = var_0_object; // 0x235 MovT
	func_3194(); // 0x236 NEW_2
	
Label_568:
	var_45_int = 45636; // 0x238 PushI
	var_46_bool = var_20_cvector == var_45_int; // 0x239 Eq
	if(var_46_bool == 0) goto Label_959; // 0x23a JumpB
	var_47_bool = 0; var_48_object = Obj(); // 0x23b PushV
	var_48_object = var_1_object; // 0x23c MovT
	func_3223(var_48_object); // 0x23d NEW_2
	if(var_47_bool == 0) goto Label_901; // 0x23f JumpB
	var_55_string = ""; // 0x240 PushV
	var_55_string = "Neutral"; // 0x241 MovS
	func_500(var_21_bool, var_55_string); // 0x242 NEW_2
	var_72_int = 543180; // 0x244 PushI
	SetMessage(var_72_int); // 0x245 TObjFunc
	ClearReplies(); // 0x247 TObjFunc
	var_73_bool = 0; // 0x249 PushV
	var_73_bool = 1; // 0x24a MovB
	var_74_bool = 0; // 0x24b PushV
	var_74_bool = 1; // 0x24c MovB
	var_75_bool = 0; var_76_object = Obj(); // 0x24d PushV
	var_76_object = var_1_object; // 0x24e MovT
	func_3235(var_75_bool, var_76_object); // 0x24f NEW_2
	if(var_75_bool == 0) goto Label_600; // 0x251 JumpB
	var_86_bool = 0; var_87_object = Obj(); // 0x252 PushV
	var_87_object = var_1_object; // 0x253 MovT
	func_3245(var_86_bool, var_87_object); // 0x254 NEW_2
	if(var_86_bool == 0) goto Label_600; // 0x256 JumpB
	var_74_bool = 0; // 0x257 MovB
	
Label_600:
	if(var_74_bool == 0) goto Label_607; // 0x258 JumpB
	var_92_bool = 0; var_93_object = Obj(); // 0x259 PushV
	var_93_object = var_1_object; // 0x25a MovT
	func_3255(var_92_bool, var_93_object); // 0x25b NEW_2
	if(var_92_bool == 0) goto Label_607; // 0x25d JumpB
	var_73_bool = 0; // 0x25e MovB
	
Label_607:
	if(var_73_bool == 0) goto Label_613; // 0x25f JumpB
	var_98_int = 543182; // 0x260 PushI
	var_99_int = -1; // 0x261 PushI
	var_100_int = 45638; // 0x262 PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x263 TObjFunc
	
Label_613:
	var_101_bool = 0; // 0x265 PushV
	var_101_bool = 1; // 0x266 MovB
	var_102_bool = 0; // 0x267 PushV
	var_102_bool = 1; // 0x268 MovB
	var_103_bool = 0; // 0x269 PushV
	var_103_bool = 1; // 0x26a MovB
	var_104_bool = 0; var_105_object = Obj(); // 0x26b PushV
	var_105_object = var_1_object; // 0x26c MovT
	func_3235(var_104_bool, var_105_object); // 0x26d NEW_2
	if(var_104_bool == 0) goto Label_630; // 0x26f JumpB
	var_106_bool = 0; var_107_object = Obj(); // 0x270 PushV
	var_107_object = var_1_object; // 0x271 MovT
	func_3245(var_106_bool, var_107_object); // 0x272 NEW_2
	if(var_106_bool == 0) goto Label_630; // 0x274 JumpB
	var_103_bool = 0; // 0x275 MovB
	
Label_630:
	if(var_103_bool == 0) goto Label_637; // 0x276 JumpB
	var_108_bool = 0; var_109_object = Obj(); // 0x277 PushV
	var_109_object = var_1_object; // 0x278 MovT
	func_3255(var_108_bool, var_109_object); // 0x279 NEW_2
	if(var_108_bool == 0) goto Label_637; // 0x27b JumpB
	var_102_bool = 0; // 0x27c MovB
	
Label_637:
	if(var_102_bool == 0) goto Label_644; // 0x27d JumpB
	var_110_bool = 0; var_111_object = Obj(); // 0x27e PushV
	var_111_object = var_1_object; // 0x27f MovT
	func_3265(var_110_bool, var_111_object); // 0x280 NEW_2
	if(var_110_bool == 0) goto Label_644; // 0x282 JumpB
	var_101_bool = 0; // 0x283 MovB
	
Label_644:
	if(var_101_bool == 0) goto Label_650; // 0x284 JumpB
	var_116_int = 543183; // 0x285 PushI
	var_117_int = -1; // 0x286 PushI
	var_118_int = 45639; // 0x287 PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x288 TObjFunc
	
Label_650:
	var_119_bool = 0; // 0x28a PushV
	var_119_bool = 1; // 0x28b MovB
	var_120_bool = 0; // 0x28c PushV
	var_120_bool = 1; // 0x28d MovB
	var_121_bool = 0; // 0x28e PushV
	var_121_bool = 1; // 0x28f MovB
	var_122_bool = 0; // 0x290 PushV
	var_122_bool = 1; // 0x291 MovB
	var_123_bool = 0; var_124_object = Obj(); // 0x292 PushV
	var_124_object = var_1_object; // 0x293 MovT
	func_3265(var_123_bool, var_124_object); // 0x294 NEW_2
	if(var_123_bool == 0) goto Label_669; // 0x296 JumpB
	var_125_bool = 0; var_126_object = Obj(); // 0x297 PushV
	var_126_object = var_1_object; // 0x298 MovT
	func_3275(var_125_bool, var_126_object); // 0x299 NEW_2
	if(var_125_bool == 0) goto Label_669; // 0x29b JumpB
	var_122_bool = 0; // 0x29c MovB
	
Label_669:
	if(var_122_bool == 0) goto Label_676; // 0x29d JumpB
	var_131_bool = 0; var_132_object = Obj(); // 0x29e PushV
	var_132_object = var_1_object; // 0x29f MovT
	func_3285(var_131_bool, var_132_object); // 0x2a0 NEW_2
	if(var_131_bool == 0) goto Label_676; // 0x2a2 JumpB
	var_121_bool = 0; // 0x2a3 MovB
	
Label_676:
	if(var_121_bool == 0) goto Label_683; // 0x2a4 JumpB
	var_137_bool = 0; var_138_object = Obj(); // 0x2a5 PushV
	var_138_object = var_1_object; // 0x2a6 MovT
	func_3295(var_137_bool, var_138_object); // 0x2a7 NEW_2
	if(var_137_bool == 0) goto Label_683; // 0x2a9 JumpB
	var_120_bool = 0; // 0x2aa MovB
	
Label_683:
	if(var_120_bool == 0) goto Label_690; // 0x2ab JumpB
	var_143_bool = 0; var_144_object = Obj(); // 0x2ac PushV
	var_144_object = var_1_object; // 0x2ad MovT
	func_3305(var_143_bool, var_144_object); // 0x2ae NEW_2
	if(var_143_bool == 0) goto Label_690; // 0x2b0 JumpB
	var_119_bool = 0; // 0x2b1 MovB
	
Label_690:
	if(var_119_bool == 0) goto Label_696; // 0x2b2 JumpB
	var_149_int = 543187; // 0x2b3 PushI
	var_150_int = -1; // 0x2b4 PushI
	var_151_int = 45643; // 0x2b5 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x2b6 TObjFunc
	
Label_696:
	var_152_bool = 0; // 0x2b8 PushV
	var_152_bool = 1; // 0x2b9 MovB
	var_153_bool = 0; // 0x2ba PushV
	var_153_bool = 1; // 0x2bb MovB
	var_154_bool = 0; // 0x2bc PushV
	var_154_bool = 1; // 0x2bd MovB
	var_155_bool = 0; var_156_object = Obj(); // 0x2be PushV
	var_156_object = var_1_object; // 0x2bf MovT
	func_3315(var_155_bool, var_156_object); // 0x2c0 NEW_2
	if(var_155_bool == 0) goto Label_713; // 0x2c2 JumpB
	var_161_bool = 0; var_162_object = Obj(); // 0x2c3 PushV
	var_162_object = var_1_object; // 0x2c4 MovT
	func_3325(var_161_bool, var_162_object); // 0x2c5 NEW_2
	if(var_161_bool == 0) goto Label_713; // 0x2c7 JumpB
	var_154_bool = 0; // 0x2c8 MovB
	
Label_713:
	if(var_154_bool == 0) goto Label_720; // 0x2c9 JumpB
	var_167_bool = 0; var_168_object = Obj(); // 0x2ca PushV
	var_168_object = var_1_object; // 0x2cb MovT
	func_3335(var_167_bool, var_168_object); // 0x2cc NEW_2
	if(var_167_bool == 0) goto Label_720; // 0x2ce JumpB
	var_153_bool = 0; // 0x2cf MovB
	
Label_720:
	if(var_153_bool == 0) goto Label_727; // 0x2d0 JumpB
	var_173_bool = 0; var_174_object = Obj(); // 0x2d1 PushV
	var_174_object = var_1_object; // 0x2d2 MovT
	func_3345(var_173_bool, var_174_object); // 0x2d3 NEW_2
	if(var_173_bool == 0) goto Label_727; // 0x2d5 JumpB
	var_152_bool = 0; // 0x2d6 MovB
	
Label_727:
	if(var_152_bool == 0) goto Label_733; // 0x2d7 JumpB
	var_179_int = 543208; // 0x2d8 PushI
	var_180_int = -1; // 0x2d9 PushI
	var_181_int = 45664; // 0x2da PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x2db TObjFunc
	
Label_733:
	var_182_bool = 0; // 0x2dd PushV
	var_182_bool = 1; // 0x2de MovB
	var_183_bool = 0; // 0x2df PushV
	var_183_bool = 1; // 0x2e0 MovB
	var_184_bool = 0; var_185_object = Obj(); // 0x2e1 PushV
	var_185_object = var_1_object; // 0x2e2 MovT
	func_3235(var_184_bool, var_185_object); // 0x2e3 NEW_2
	if(var_184_bool == 0) goto Label_748; // 0x2e5 JumpB
	var_186_bool = 0; var_187_object = Obj(); // 0x2e6 PushV
	var_187_object = var_1_object; // 0x2e7 MovT
	func_3245(var_186_bool, var_187_object); // 0x2e8 NEW_2
	if(var_186_bool == 0) goto Label_748; // 0x2ea JumpB
	var_183_bool = 0; // 0x2eb MovB
	
Label_748:
	if(var_183_bool == 0) goto Label_755; // 0x2ec JumpB
	var_188_bool = 0; var_189_object = Obj(); // 0x2ed PushV
	var_189_object = var_1_object; // 0x2ee MovT
	func_3255(var_188_bool, var_189_object); // 0x2ef NEW_2
	if(var_188_bool == 0) goto Label_755; // 0x2f1 JumpB
	var_182_bool = 0; // 0x2f2 MovB
	
Label_755:
	if(var_182_bool == 0) goto Label_761; // 0x2f3 JumpB
	var_190_int = 543181; // 0x2f4 PushI
	var_191_int = -1; // 0x2f5 PushI
	var_192_int = 45637; // 0x2f6 PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x2f7 TObjFunc
	
Label_761:
	var_193_bool = 0; // 0x2f9 PushV
	var_193_bool = 1; // 0x2fa MovB
	var_194_bool = 0; // 0x2fb PushV
	var_194_bool = 1; // 0x2fc MovB
	var_195_bool = 0; var_196_object = Obj(); // 0x2fd PushV
	var_196_object = var_1_object; // 0x2fe MovT
	func_3265(var_195_bool, var_196_object); // 0x2ff NEW_2
	if(var_195_bool == 0) goto Label_776; // 0x301 JumpB
	var_197_bool = 0; var_198_object = Obj(); // 0x302 PushV
	var_198_object = var_1_object; // 0x303 MovT
	func_3275(var_197_bool, var_198_object); // 0x304 NEW_2
	if(var_197_bool == 0) goto Label_776; // 0x306 JumpB
	var_194_bool = 0; // 0x307 MovB
	
Label_776:
	if(var_194_bool == 0) goto Label_783; // 0x308 JumpB
	var_199_bool = 0; var_200_object = Obj(); // 0x309 PushV
	var_200_object = var_1_object; // 0x30a MovT
	func_3285(var_199_bool, var_200_object); // 0x30b NEW_2
	if(var_199_bool == 0) goto Label_783; // 0x30d JumpB
	var_193_bool = 0; // 0x30e MovB
	
Label_783:
	if(var_193_bool == 0) goto Label_789; // 0x30f JumpB
	var_201_int = 543184; // 0x310 PushI
	var_202_int = -1; // 0x311 PushI
	var_203_int = 45640; // 0x312 PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x313 TObjFunc
	
Label_789:
	var_204_bool = 0; // 0x315 PushV
	var_204_bool = 1; // 0x316 MovB
	var_205_bool = 0; // 0x317 PushV
	var_205_bool = 1; // 0x318 MovB
	var_206_bool = 0; // 0x319 PushV
	var_206_bool = 1; // 0x31a MovB
	var_207_bool = 0; var_208_object = Obj(); // 0x31b PushV
	var_208_object = var_1_object; // 0x31c MovT
	func_3255(var_207_bool, var_208_object); // 0x31d NEW_2
	if(var_207_bool == 0) goto Label_806; // 0x31f JumpB
	var_209_bool = 0; var_210_object = Obj(); // 0x320 PushV
	var_210_object = var_1_object; // 0x321 MovT
	func_3285(var_209_bool, var_210_object); // 0x322 NEW_2
	if(var_209_bool == 0) goto Label_806; // 0x324 JumpB
	var_206_bool = 0; // 0x325 MovB
	
Label_806:
	if(var_206_bool == 0) goto Label_813; // 0x326 JumpB
	var_211_bool = 0; var_212_object = Obj(); // 0x327 PushV
	var_212_object = var_1_object; // 0x328 MovT
	func_3295(var_211_bool, var_212_object); // 0x329 NEW_2
	if(var_211_bool == 0) goto Label_813; // 0x32b JumpB
	var_205_bool = 0; // 0x32c MovB
	
Label_813:
	if(var_205_bool == 0) goto Label_820; // 0x32d JumpB
	var_213_bool = 0; var_214_object = Obj(); // 0x32e PushV
	var_214_object = var_1_object; // 0x32f MovT
	func_3305(var_213_bool, var_214_object); // 0x330 NEW_2
	if(var_213_bool == 0) goto Label_820; // 0x332 JumpB
	var_204_bool = 0; // 0x333 MovB
	
Label_820:
	if(var_204_bool == 0) goto Label_826; // 0x334 JumpB
	var_215_int = 543185; // 0x335 PushI
	var_216_int = -1; // 0x336 PushI
	var_217_int = 45641; // 0x337 PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x338 TObjFunc
	
Label_826:
	var_218_bool = 0; // 0x33a PushV
	var_218_bool = 1; // 0x33b MovB
	var_219_bool = 0; // 0x33c PushV
	var_219_bool = 1; // 0x33d MovB
	var_220_bool = 0; var_221_object = Obj(); // 0x33e PushV
	var_221_object = var_1_object; // 0x33f MovT
	func_3315(var_220_bool, var_221_object); // 0x340 NEW_2
	if(var_220_bool == 0) goto Label_841; // 0x342 JumpB
	var_222_bool = 0; var_223_object = Obj(); // 0x343 PushV
	var_223_object = var_1_object; // 0x344 MovT
	func_3325(var_222_bool, var_223_object); // 0x345 NEW_2
	if(var_222_bool == 0) goto Label_841; // 0x347 JumpB
	var_219_bool = 0; // 0x348 MovB
	
Label_841:
	if(var_219_bool == 0) goto Label_848; // 0x349 JumpB
	var_224_bool = 0; var_225_object = Obj(); // 0x34a PushV
	var_225_object = var_1_object; // 0x34b MovT
	func_3335(var_224_bool, var_225_object); // 0x34c NEW_2
	if(var_224_bool == 0) goto Label_848; // 0x34e JumpB
	var_218_bool = 0; // 0x34f MovB
	
Label_848:
	if(var_218_bool == 0) goto Label_854; // 0x350 JumpB
	var_226_int = 543186; // 0x351 PushI
	var_227_int = -1; // 0x352 PushI
	var_228_int = 45642; // 0x353 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x354 TObjFunc
	
Label_854:
	var_229_bool = 0; // 0x356 PushV
	var_229_bool = 1; // 0x357 MovB
	var_230_bool = 0; // 0x358 PushV
	var_230_bool = 1; // 0x359 MovB
	var_231_bool = 0; // 0x35a PushV
	var_231_bool = 1; // 0x35b MovB
	var_232_bool = 0; // 0x35c PushV
	var_232_bool = 1; // 0x35d MovB
	var_233_bool = 0; var_234_object = Obj(); // 0x35e PushV
	var_234_object = var_1_object; // 0x35f MovT
	func_3285(var_233_bool, var_234_object); // 0x360 NEW_2
	if(var_233_bool == 0) goto Label_873; // 0x362 JumpB
	var_235_bool = 0; var_236_object = Obj(); // 0x363 PushV
	var_236_object = var_1_object; // 0x364 MovT
	func_3305(var_235_bool, var_236_object); // 0x365 NEW_2
	if(var_235_bool == 0) goto Label_873; // 0x367 JumpB
	var_232_bool = 0; // 0x368 MovB
	
Label_873:
	if(var_232_bool == 0) goto Label_880; // 0x369 JumpB
	var_237_bool = 0; var_238_object = Obj(); // 0x36a PushV
	var_238_object = var_1_object; // 0x36b MovT
	func_3315(var_237_bool, var_238_object); // 0x36c NEW_2
	if(var_237_bool == 0) goto Label_880; // 0x36e JumpB
	var_231_bool = 0; // 0x36f MovB
	
Label_880:
	if(var_231_bool == 0) goto Label_887; // 0x370 JumpB
	var_239_bool = 0; var_240_object = Obj(); // 0x371 PushV
	var_240_object = var_1_object; // 0x372 MovT
	func_3345(var_239_bool, var_240_object); // 0x373 NEW_2
	if(var_239_bool == 0) goto Label_887; // 0x375 JumpB
	var_230_bool = 0; // 0x376 MovB
	
Label_887:
	if(var_230_bool == 0) goto Label_894; // 0x377 JumpB
	var_241_bool = 0; var_242_object = Obj(); // 0x378 PushV
	var_242_object = var_1_object; // 0x379 MovT
	func_3325(var_241_bool, var_242_object); // 0x37a NEW_2
	if(var_241_bool == 0) goto Label_894; // 0x37c JumpB
	var_229_bool = 0; // 0x37d MovB
	
Label_894:
	if(var_229_bool == 0) goto Label_900; // 0x37e JumpB
	var_243_int = 543188; // 0x37f PushI
	var_244_int = -1; // 0x380 PushI
	var_245_int = 45644; // 0x381 PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x382 TObjFunc
	
Label_900:
	return 0; // 0x384 Return
	
Label_901:
	var_246_string = ""; // 0x385 PushV
	var_246_string = "Neutral"; // 0x386 MovS
	func_500(var_21_bool, var_246_string); // 0x387 NEW_2
	var_247_int = 538167; // 0x389 PushI
	SetMessage(var_247_int); // 0x38a TObjFunc
	ClearReplies(); // 0x38c TObjFunc
	var_248_int = 538168; // 0x38e PushI
	var_249_int = -1; // 0x38f PushI
	var_250_int = 40043; // 0x390 PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x391 TObjFunc
	var_251_bool = 0; // 0x393 PushV
	var_251_bool = 0; // 0x394 MovB
	var_252_bool = 0; var_253_object = Obj(); // 0x395 PushV
	var_253_object = var_1_object; // 0x396 MovT
	func_3235(var_252_bool, var_253_object); // 0x397 NEW_2
	if(var_252_bool == 0) goto Label_928; // 0x399 JumpB
	var_254_bool = 0; var_255_object = Obj(); // 0x39a PushV
	var_255_object = var_1_object; // 0x39b MovT
	func_3199(var_255_object); // 0x39c NEW_2
	if(var_254_bool == 0) goto Label_928; // 0x39e JumpB
	var_251_bool = 1; // 0x39f MovB
	
Label_928:
	if(var_251_bool == 0) goto Label_934; // 0x3a0 JumpB
	var_260_int = 538169; // 0x3a1 PushI
	var_261_int = 40045; // 0x3a2 PushI
	var_262_int = 40044; // 0x3a3 PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x3a4 TObjFunc
	
Label_934:
	var_263_bool = 0; // 0x3a6 PushV
	var_263_bool = 1; // 0x3a7 MovB
	var_264_bool = 0; var_265_object = Obj(); // 0x3a8 PushV
	var_265_object = var_1_object; // 0x3a9 MovT
	func_3199(var_265_object); // 0x3aa NEW_2
	if(var_264_bool == 0) goto Label_947; // 0x3ac JumpB
	var_266_bool = 0; var_267_object = Obj(); // 0x3ad PushV
	var_267_object = var_1_object; // 0x3ae MovT
	func_3211(var_267_object); // 0x3af NEW_2
	if(var_266_bool == 0) goto Label_947; // 0x3b1 JumpB
	var_263_bool = 0; // 0x3b2 MovB
	
Label_947:
	if(var_263_bool == 0) goto Label_953; // 0x3b3 JumpB
	var_272_int = 538204; // 0x3b4 PushI
	var_273_int = -1; // 0x3b5 PushI
	var_274_int = 40081; // 0x3b6 PushI
	AddReply(var_272_int, var_273_int, var_274_int); // 0x3b7 TObjFunc
	
Label_953:
	var_275_int = 538205; // 0x3b9 PushI
	var_276_int = -1; // 0x3ba PushI
	var_277_int = 40082; // 0x3bb PushI
	AddReply(var_275_int, var_276_int, var_277_int); // 0x3bc TObjFunc
	return 0; // 0x3be Return
	
Label_959:
	var_278_int = 40067; // 0x3bf PushI
	var_279_bool = var_20_cvector == var_278_int; // 0x3c0 Eq
	if(var_279_bool == 0) goto Label_962; // 0x3c1 JumpB
	
Label_962:
	var_280_int = 40069; // 0x3c2 PushI
	var_281_bool = var_20_cvector == var_280_int; // 0x3c3 Eq
	if(var_281_bool == 0) goto Label_985; // 0x3c4 JumpB
	var_282_string = ""; // 0x3c5 PushV
	var_282_string = "Neutral"; // 0x3c6 MovS
	func_500(var_21_bool, var_282_string); // 0x3c7 NEW_2
	var_283_int = 538193; // 0x3c9 PushI
	SetMessage(var_283_int); // 0x3ca TObjFunc
	ClearReplies(); // 0x3cc TObjFunc
	var_284_int = 538194; // 0x3ce PushI
	var_285_int = 40071; // 0x3cf PushI
	var_286_int = 40070; // 0x3d0 PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x3d1 TObjFunc
	var_287_int = 538202; // 0x3d3 PushI
	var_288_int = -1; // 0x3d4 PushI
	var_289_int = 40078; // 0x3d5 PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0x3d6 TObjFunc
	return 0; // 0x3d8 Return
	
Label_985:
	var_290_int = 40071; // 0x3d9 PushI
	var_291_bool = var_20_cvector == var_290_int; // 0x3da Eq
	if(var_291_bool == 0) goto Label_1008; // 0x3db JumpB
	var_292_string = ""; // 0x3dc PushV
	var_292_string = "Neutral"; // 0x3dd MovS
	func_500(var_21_bool, var_292_string); // 0x3de NEW_2
	var_293_int = 538195; // 0x3e0 PushI
	SetMessage(var_293_int); // 0x3e1 TObjFunc
	ClearReplies(); // 0x3e3 TObjFunc
	var_294_int = 538196; // 0x3e5 PushI
	var_295_int = 40073; // 0x3e6 PushI
	var_296_int = 40072; // 0x3e7 PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0x3e8 TObjFunc
	var_297_int = 538201; // 0x3ea PushI
	var_298_int = -1; // 0x3eb PushI
	var_299_int = 40077; // 0x3ec PushI
	AddReply(var_297_int, var_298_int, var_299_int); // 0x3ed TObjFunc
	return 0; // 0x3ef Return
	
Label_1008:
	var_300_int = 40073; // 0x3f0 PushI
	var_301_bool = var_20_cvector == var_300_int; // 0x3f1 Eq
	if(var_301_bool == 0) goto Label_1036; // 0x3f2 JumpB
	var_302_string = ""; // 0x3f3 PushV
	var_302_string = "Neutral"; // 0x3f4 MovS
	func_500(var_21_bool, var_302_string); // 0x3f5 NEW_2
	var_303_int = 538197; // 0x3f7 PushI
	SetMessage(var_303_int); // 0x3f8 TObjFunc
	ClearReplies(); // 0x3fa TObjFunc
	var_304_int = 538198; // 0x3fc PushI
	var_305_int = -1; // 0x3fd PushI
	var_306_int = 40074; // 0x3fe PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0x3ff TObjFunc
	var_307_int = 538199; // 0x401 PushI
	var_308_int = -1; // 0x402 PushI
	var_309_int = 40075; // 0x403 PushI
	AddReply(var_307_int, var_308_int, var_309_int); // 0x404 TObjFunc
	var_310_int = 538200; // 0x406 PushI
	var_311_int = -1; // 0x407 PushI
	var_312_int = 40076; // 0x408 PushI
	AddReply(var_310_int, var_311_int, var_312_int); // 0x409 TObjFunc
	return 0; // 0x40b Return
	
Label_1036:
	var_313_int = 40055; // 0x40c PushI
	var_314_bool = var_20_cvector == var_313_int; // 0x40d Eq
	if(var_314_bool == 0) goto Label_1039; // 0x40e JumpB
	
Label_1039:
	var_315_int = 40057; // 0x40f PushI
	var_316_bool = var_20_cvector == var_315_int; // 0x410 Eq
	if(var_316_bool == 0) goto Label_1062; // 0x411 JumpB
	var_317_string = ""; // 0x412 PushV
	var_317_string = "Neutral"; // 0x413 MovS
	func_500(var_21_bool, var_317_string); // 0x414 NEW_2
	var_318_int = 538182; // 0x416 PushI
	SetMessage(var_318_int); // 0x417 TObjFunc
	ClearReplies(); // 0x419 TObjFunc
	var_319_int = 538183; // 0x41b PushI
	var_320_int = 40059; // 0x41c PushI
	var_321_int = 40058; // 0x41d PushI
	AddReply(var_319_int, var_320_int, var_321_int); // 0x41e TObjFunc
	var_322_int = 538187; // 0x420 PushI
	var_323_int = -1; // 0x421 PushI
	var_324_int = 40062; // 0x422 PushI
	AddReply(var_322_int, var_323_int, var_324_int); // 0x423 TObjFunc
	return 0; // 0x425 Return
	
Label_1062:
	var_325_int = 40059; // 0x426 PushI
	var_326_bool = var_20_cvector == var_325_int; // 0x427 Eq
	if(var_326_bool == 0) goto Label_1085; // 0x428 JumpB
	var_327_string = ""; // 0x429 PushV
	var_327_string = "Neutral"; // 0x42a MovS
	func_500(var_21_bool, var_327_string); // 0x42b NEW_2
	var_328_int = 538184; // 0x42d PushI
	SetMessage(var_328_int); // 0x42e TObjFunc
	ClearReplies(); // 0x430 TObjFunc
	var_329_int = 538185; // 0x432 PushI
	var_330_int = -1; // 0x433 PushI
	var_331_int = 40060; // 0x434 PushI
	AddReply(var_329_int, var_330_int, var_331_int); // 0x435 TObjFunc
	var_332_int = 538186; // 0x437 PushI
	var_333_int = -1; // 0x438 PushI
	var_334_int = 40061; // 0x439 PushI
	AddReply(var_332_int, var_333_int, var_334_int); // 0x43a TObjFunc
	return 0; // 0x43c Return
	
Label_1085:
	var_335_int = 40045; // 0x43d PushI
	var_336_bool = var_20_cvector == var_335_int; // 0x43e Eq
	if(var_336_bool == 0) goto Label_1113; // 0x43f JumpB
	var_337_string = ""; // 0x440 PushV
	var_337_string = "Neutral"; // 0x441 MovS
	func_500(var_21_bool, var_337_string); // 0x442 NEW_2
	var_338_int = 538170; // 0x444 PushI
	SetMessage(var_338_int); // 0x445 TObjFunc
	ClearReplies(); // 0x447 TObjFunc
	var_339_int = 538171; // 0x449 PushI
	var_340_int = 40047; // 0x44a PushI
	var_341_int = 40046; // 0x44b PushI
	AddReply(var_339_int, var_340_int, var_341_int); // 0x44c TObjFunc
	var_342_int = 538175; // 0x44e PushI
	var_343_int = 40051; // 0x44f PushI
	var_344_int = 40050; // 0x450 PushI
	AddReply(var_342_int, var_343_int, var_344_int); // 0x451 TObjFunc
	var_345_int = 538178; // 0x453 PushI
	var_346_int = -1; // 0x454 PushI
	var_347_int = 40053; // 0x455 PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0x456 TObjFunc
	return 0; // 0x458 Return
	
Label_1113:
	var_348_int = 40051; // 0x459 PushI
	var_349_bool = var_20_cvector == var_348_int; // 0x45a Eq
	if(var_349_bool == 0) goto Label_1131; // 0x45b JumpB
	var_350_string = ""; // 0x45c PushV
	var_350_string = "Neutral"; // 0x45d MovS
	func_500(var_21_bool, var_350_string); // 0x45e NEW_2
	var_351_int = 538176; // 0x460 PushI
	SetMessage(var_351_int); // 0x461 TObjFunc
	ClearReplies(); // 0x463 TObjFunc
	var_352_int = 538177; // 0x465 PushI
	var_353_int = -1; // 0x466 PushI
	var_354_int = 40052; // 0x467 PushI
	AddReply(var_352_int, var_353_int, var_354_int); // 0x468 TObjFunc
	return 0; // 0x46a Return
	
Label_1131:
	var_355_int = 40047; // 0x46b PushI
	var_356_bool = var_20_cvector == var_355_int; // 0x46c Eq
	if(var_356_bool == 0) goto Label_1154; // 0x46d JumpB
	var_357_string = ""; // 0x46e PushV
	var_357_string = "Neutral"; // 0x46f MovS
	func_500(var_21_bool, var_357_string); // 0x470 NEW_2
	var_358_int = 538172; // 0x472 PushI
	SetMessage(var_358_int); // 0x473 TObjFunc
	ClearReplies(); // 0x475 TObjFunc
	var_359_int = 538173; // 0x477 PushI
	var_360_int = -1; // 0x478 PushI
	var_361_int = 40048; // 0x479 PushI
	AddReply(var_359_int, var_360_int, var_361_int); // 0x47a TObjFunc
	var_362_int = 538174; // 0x47c PushI
	var_363_int = -1; // 0x47d PushI
	var_364_int = 40049; // 0x47e PushI
	AddReply(var_362_int, var_363_int, var_364_int); // 0x47f TObjFunc
	return 0; // 0x481 Return
	
Label_1154:
	var_365_int = 45656; // 0x482 PushI
	var_366_bool = var_20_cvector == var_365_int; // 0x483 Eq
	if(var_366_bool == 0) goto Label_1157; // 0x484 JumpB
	
Label_1157:
	var_367_int = 45655; // 0x485 PushI
	var_368_bool = var_20_cvector == var_367_int; // 0x486 Eq
	if(var_368_bool == 0) goto Label_1160; // 0x487 JumpB
	
Label_1160:
	var_369_int = 45648; // 0x488 PushI
	var_370_bool = var_20_cvector == var_369_int; // 0x489 Eq
	if(var_370_bool == 0) goto Label_1163; // 0x48a JumpB
	
Label_1163:
	var_3_string = 1; // 0x48b TMovB
	var_371_bool = 0; // 0x48c PushV
	func_4372(var_371_bool); // 0x48d NEW_2
	if(var_371_bool == 0) goto Label_1171; // 0x48f JumpB
	lshStopAnimation(); // 0x490 Func
	goto Label_1173; // 0x492 Jump
	
Label_1173:
	return 0; // 0x495 Return
	
Label_1171:
	StopAnimation(); // 0x493 Func
	
Label_1175:
	return 0; // 0x497 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0x4a7 PushV
	var_23_int = 0; var_24_object = Obj(); // 0x4a8 PushV
	var_24_object = var_20_bool; // 0x4a9 Mov
	func_4088(var_24_object); // 0x4aa NEW_2
	var_22_int = var_23_int; // 0x4ab Mov
	var_25_int = 0; // 0x4ad PushI
	var_26_bool = var_22_int > var_25_int; // 0x4ae GT
	if(var_26_bool == 0) goto Label_1204; // 0x4af JumpB
	var_27_object = Obj(); // 0x4b0 PushV
	var_27_object = var_20_bool; // 0x4b1 Mov
	func_4091(var_27_object); // 0x4b2 NEW_2
	
Label_1204:
	return 2; // 0x4b4 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool)
{
	func_4097(); // 0x4b6 NEW_2
	return 0; // 0x4b8 Return
}


task_2_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_float, var_8_float, var_9_bool, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_object, var_22_cvector, var_23_bool)
{
	return 0; // 0x52f Return
}


task_2_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_string, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	return 0; // 0x531 Return
}


task_2_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	return 0; // 0x533 Return
}


task_3_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0x55f PushV
	var_23_int = 0; var_24_object = Obj(); // 0x560 PushV
	var_24_object = var_20_bool; // 0x561 Mov
	func_4088(var_24_object); // 0x562 NEW_2
	var_22_int = var_23_int; // 0x563 Mov
	var_25_int = 0; // 0x565 PushI
	var_26_bool = var_22_int > var_25_int; // 0x566 GT
	if(var_26_bool == 0) goto Label_1394; // 0x567 JumpB
	var_27_int = 1; // 0x568 PushI
	var_28_bool = var_22_int > var_27_int; // 0x569 GT
	if(var_28_bool == 0) goto Label_1390; // 0x56a JumpB
	func_1568(var_22_int); // 0x56c NEW_2
	
Label_1390:
	var_31_object = Obj(); // 0x56e PushV
	var_31_object = var_20_bool; // 0x56f Mov
	func_4091(var_31_object); // 0x570 NEW_2
	
Label_1394:
	return 2; // 0x572 Return
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0x573 PushV
	var_23_object = Obj(); // 0x574 PushV
	var_23_object = var_20_bool; // 0x575 Mov
	func_3927(var_23_object); // 0x576 NEW_2
	var_32_int = 0; var_33_object = Obj(); // 0x578 PushV
	var_33_object = var_20_bool; // 0x579 Mov
	func_3986(var_32_int, var_33_object); // 0x57a NEW_2
	var_22_int = var_32_int; // 0x57b Mov
	var_68_int = 0; // 0x57d PushI
	var_69_bool = var_22_int > var_68_int; // 0x57e GT
	if(var_69_bool == 0) goto Label_1418; // 0x57f JumpB
	var_70_int = 1; // 0x580 PushI
	var_71_bool = var_22_int > var_70_int; // 0x581 GT
	if(var_71_bool == 0) goto Label_1414; // 0x582 JumpB
	func_1568(var_22_int); // 0x584 NEW_2
	
Label_1414:
	var_74_object = Obj(); // 0x586 PushV
	var_74_object = var_20_bool; // 0x587 Mov
	func_3996(var_74_object); // 0x588 NEW_2
	
Label_1418:
	return 2; // 0x58a Return
}


task_3_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x58b PushV
	var_25_bool = 0; var_26_object = Obj(); var_27_object = Obj(); var_28_bool = 0; // 0x58c PushV
	var_26_object = var_20_object; // 0x58d Mov
	var_27_object = var_21_cvector; // 0x58e Mov
	var_28_bool = var_22_bool; // 0x58f Mov
	func_4432(var_26_object, var_27_object, var_28_bool); // 0x590 NEW_2
	if(var_25_bool == 0) goto Label_1446; // 0x592 JumpB
	var_74_int = 0; var_75_object = Obj(); var_76_bool = 0; // 0x593 PushV
	var_75_object = var_20_object; // 0x594 Mov
	var_76_bool = var_22_bool; // 0x595 Mov
	func_4004(var_75_object, var_76_bool); // 0x596 NEW_2
	var_24_int = var_74_int; // 0x597 Mov
	var_105_int = 0; // 0x599 PushI
	var_106_bool = var_24_int > var_105_int; // 0x59a GT
	if(var_106_bool == 0) goto Label_1446; // 0x59b JumpB
	var_107_int = 1; // 0x59c PushI
	var_108_bool = var_24_int > var_107_int; // 0x59d GT
	if(var_108_bool == 0) goto Label_1442; // 0x59e JumpB
	func_1568(var_24_int); // 0x5a0 NEW_2
	
Label_1442:
	var_111_object = Obj(); // 0x5a2 PushV
	var_111_object = var_20_object; // 0x5a3 Mov
	func_4014(var_111_object); // 0x5a4 NEW_2
	
Label_1446:
	return 2; // 0x5a6 Return
}


task_3_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0x5a7 PushV
	var_23_int = 0; var_24_object = Obj(); // 0x5a8 PushV
	var_24_object = var_20_bool; // 0x5a9 Mov
	func_4098(var_23_int, var_24_object); // 0x5aa NEW_2
	var_22_int = var_23_int; // 0x5ab Mov
	var_65_int = 0; // 0x5ad PushI
	var_66_bool = var_22_int > var_65_int; // 0x5ae GT
	if(var_66_bool == 0) goto Label_1466; // 0x5af JumpB
	var_67_int = 1; // 0x5b0 PushI
	var_68_bool = var_22_int > var_67_int; // 0x5b1 GT
	if(var_68_bool == 0) goto Label_1462; // 0x5b2 JumpB
	func_1568(var_22_int); // 0x5b4 NEW_2
	
Label_1462:
	var_71_object = Obj(); // 0x5b6 PushV
	var_71_object = var_20_bool; // 0x5b7 Mov
	func_4114(var_71_object); // 0x5b8 NEW_2
	
Label_1466:
	return 2; // 0x5ba Return
}


task_3_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_string, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0; // 0x5bb PushV
	var_24_bool = 0; var_25_object = Obj(); var_26_string = ""; // 0x5bc PushV
	var_25_object = var_20_cvector; // 0x5bd Mov
	var_26_string = var_21_bool; // 0x5be Mov
	func_3841(var_24_bool, var_25_object, var_26_string); // 0x5bf NEW_2
	if(var_24_bool == 0) goto Label_1483; // 0x5c1 JumpB
	func_1568(var_23_int); // 0x5c3 NEW_2
	var_58_object = Obj(); var_59_string = ""; // 0x5c5 PushV
	var_58_object = var_20_cvector; // 0x5c6 Mov
	var_59_string = var_21_bool; // 0x5c7 Mov
	func_3873(var_58_object, var_59_string); // 0x5c8 NEW_2
	goto Label_1503; // 0x5ca Jump
	
Label_1503:
	return 2; // 0x5df Return
	
Label_1483:
	var_207_int = 0; var_208_string = ""; var_209_object = Obj(); // 0x5cb PushV
	var_208_string = var_21_bool; // 0x5cc Mov
	var_209_object = var_20_cvector; // 0x5cd Mov
	func_4120(var_209_object); // 0x5ce NEW_2
	var_23_int = var_207_int; // 0x5cf Mov
	var_210_int = 0; // 0x5d1 PushI
	var_211_bool = var_23_int > var_210_int; // 0x5d2 GT
	if(var_211_bool == 0) goto Label_1503; // 0x5d3 JumpB
	var_212_int = 1; // 0x5d4 PushI
	var_213_bool = var_23_int > var_212_int; // 0x5d5 GT
	if(var_213_bool == 0) goto Label_1498; // 0x5d6 JumpB
	func_1568(var_23_int); // 0x5d8 NEW_2
	
Label_1498:
	var_214_string = ""; var_215_object = Obj(); // 0x5da PushV
	var_214_string = var_21_bool; // 0x5db Mov
	var_215_object = var_20_cvector; // 0x5dc Mov
	func_4123(); // 0x5dd NEW_2
}


task_3_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_bool = 0; var_22_string = ""; // 0x5e1 PushV
	var_22_string = var_20_bool; // 0x5e2 Mov
	func_3940(var_21_bool, var_22_string); // 0x5e3 NEW_2
	if(var_21_bool == 0) goto Label_1517; // 0x5e5 JumpB
	func_1568(var_20_bool); // 0x5e7 NEW_2
	var_32_string = ""; // 0x5e9 PushV
	var_32_string = var_20_bool; // 0x5ea Mov
	func_3956(var_32_string); // 0x5eb NEW_2
	
Label_1517:
	return 0; // 0x5ed Return
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_object = var_0_object; // 0x5ef PushT
	if(var_21_object == 0) goto Label_1522; // 0x5f0 JumpB
	return 0; // 0x5f1 Return
	
Label_1522:
	var_22_bool = 0; var_23_object = Obj(); // 0x5f2 PushV
	var_23_object = var_20_bool; // 0x5f3 Mov
	func_3898(var_22_bool, var_23_object); // 0x5f4 NEW_2
	if(var_22_bool == 0) goto Label_1535; // 0x5f6 JumpB
	func_1568(var_20_bool); // 0x5f8 NEW_2
	var_38_object = Obj(); // 0x5fa PushV
	var_38_object = var_20_bool; // 0x5fb Mov
	func_3921(var_38_object); // 0x5fc NEW_2
	goto Label_1539; // 0x5fe Jump
	
Label_1539:
	return 0; // 0x603 Return
	
Label_1535:
	var_112_object = Obj(); // 0x5ff PushV
	var_112_object = var_20_bool; // 0x600 Mov
	func_1590(var_20_bool, var_112_object); // 0x601 NEW_2
}


task_3_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_object = var_0_object; // 0x605 PushT
	if(var_21_object == 0) goto Label_1544; // 0x606 JumpB
	return 0; // 0x607 Return
	
Label_1544:
	var_22_object = Obj(); // 0x608 PushV
	var_22_object = var_20_bool; // 0x609 Mov
	func_1590(var_20_bool, var_22_object); // 0x60a NEW_2
	return 0; // 0x60c Return
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_int, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_int = 110; // 0x60e PushI
	var_22_bool = var_20_bool != var_21_int; // 0x60f Neq
	if(var_22_bool == 0) goto Label_1554; // 0x610 JumpB
	return 0; // 0x611 Return
	
Label_1554:
	var_1_object = 0; // 0x612 TMovB
	var_23_int = 110; // 0x613 PushI
	KillTimer(var_23_int); // 0x614 Func
	ResetAAS(); // 0x616 Func
	return 0; // 0x618 Return
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool)
{
	func_1568(var_19_bool); // 0x61a NEW_2
	func_4097(); // 0x61d NEW_2
	return 0; // 0x61f Return
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	func_1568(var_20_bool); // 0x62f NEW_2
	var_23_object = Obj(); // 0x631 PushV
	var_23_object = var_20_bool; // 0x632 Mov
	func_3817(); // 0x633 NEW_2
	return 0; // 0x635 Return
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0x68f PushV
	var_23_int = 0; var_24_object = Obj(); // 0x690 PushV
	var_24_object = var_20_bool; // 0x691 Mov
	func_4088(var_24_object); // 0x692 NEW_2
	var_22_int = var_23_int; // 0x693 Mov
	var_25_int = 0; // 0x695 PushI
	var_26_bool = var_22_int > var_25_int; // 0x696 GT
	if(var_26_bool == 0) goto Label_1698; // 0x697 JumpB
	var_27_int = 1; // 0x698 PushI
	var_28_bool = var_22_int > var_27_int; // 0x699 GT
	if(var_28_bool == 0) goto Label_1694; // 0x69a JumpB
	func_1822(); // 0x69c NEW_2
	
Label_1694:
	var_31_object = Obj(); // 0x69e PushV
	var_31_object = var_20_bool; // 0x69f Mov
	func_4091(var_31_object); // 0x6a0 NEW_2
	
Label_1698:
	return 2; // 0x6a2 Return
}


task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0x6a3 PushV
	var_23_object = Obj(); // 0x6a4 PushV
	var_23_object = var_20_bool; // 0x6a5 Mov
	func_3927(var_23_object); // 0x6a6 NEW_2
	var_32_int = 0; var_33_object = Obj(); // 0x6a8 PushV
	var_33_object = var_20_bool; // 0x6a9 Mov
	func_3986(var_32_int, var_33_object); // 0x6aa NEW_2
	var_22_int = var_32_int; // 0x6ab Mov
	var_68_int = 0; // 0x6ad PushI
	var_69_bool = var_22_int > var_68_int; // 0x6ae GT
	if(var_69_bool == 0) goto Label_1722; // 0x6af JumpB
	var_70_int = 1; // 0x6b0 PushI
	var_71_bool = var_22_int > var_70_int; // 0x6b1 GT
	if(var_71_bool == 0) goto Label_1718; // 0x6b2 JumpB
	func_1822(); // 0x6b4 NEW_2
	
Label_1718:
	var_74_object = Obj(); // 0x6b6 PushV
	var_74_object = var_20_bool; // 0x6b7 Mov
	func_3996(var_74_object); // 0x6b8 NEW_2
	
Label_1722:
	return 2; // 0x6ba Return
}


task_4_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x6bb PushV
	var_25_bool = 0; var_26_object = Obj(); var_27_object = Obj(); var_28_bool = 0; // 0x6bc PushV
	var_26_object = var_20_object; // 0x6bd Mov
	var_27_object = var_21_cvector; // 0x6be Mov
	var_28_bool = var_22_bool; // 0x6bf Mov
	func_4432(var_26_object, var_27_object, var_28_bool); // 0x6c0 NEW_2
	if(var_25_bool == 0) goto Label_1750; // 0x6c2 JumpB
	var_74_int = 0; var_75_object = Obj(); var_76_bool = 0; // 0x6c3 PushV
	var_75_object = var_20_object; // 0x6c4 Mov
	var_76_bool = var_22_bool; // 0x6c5 Mov
	func_4004(var_75_object, var_76_bool); // 0x6c6 NEW_2
	var_24_int = var_74_int; // 0x6c7 Mov
	var_105_int = 0; // 0x6c9 PushI
	var_106_bool = var_24_int > var_105_int; // 0x6ca GT
	if(var_106_bool == 0) goto Label_1750; // 0x6cb JumpB
	var_107_int = 1; // 0x6cc PushI
	var_108_bool = var_24_int > var_107_int; // 0x6cd GT
	if(var_108_bool == 0) goto Label_1746; // 0x6ce JumpB
	func_1822(); // 0x6d0 NEW_2
	
Label_1746:
	var_111_object = Obj(); // 0x6d2 PushV
	var_111_object = var_20_object; // 0x6d3 Mov
	func_4014(var_111_object); // 0x6d4 NEW_2
	
Label_1750:
	return 2; // 0x6d6 Return
}


task_4_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0x6d7 PushV
	var_23_int = 0; var_24_object = Obj(); // 0x6d8 PushV
	var_24_object = var_20_bool; // 0x6d9 Mov
	func_4098(var_23_int, var_24_object); // 0x6da NEW_2
	var_22_int = var_23_int; // 0x6db Mov
	var_65_int = 0; // 0x6dd PushI
	var_66_bool = var_22_int > var_65_int; // 0x6de GT
	if(var_66_bool == 0) goto Label_1770; // 0x6df JumpB
	var_67_int = 1; // 0x6e0 PushI
	var_68_bool = var_22_int > var_67_int; // 0x6e1 GT
	if(var_68_bool == 0) goto Label_1766; // 0x6e2 JumpB
	func_1822(); // 0x6e4 NEW_2
	
Label_1766:
	var_71_object = Obj(); // 0x6e6 PushV
	var_71_object = var_20_bool; // 0x6e7 Mov
	func_4114(var_71_object); // 0x6e8 NEW_2
	
Label_1770:
	return 2; // 0x6ea Return
}


task_4_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_string, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0; // 0x6eb PushV
	var_24_bool = 0; var_25_object = Obj(); var_26_string = ""; // 0x6ec PushV
	var_25_object = var_20_cvector; // 0x6ed Mov
	var_26_string = var_21_bool; // 0x6ee Mov
	func_3841(var_24_bool, var_25_object, var_26_string); // 0x6ef NEW_2
	if(var_24_bool == 0) goto Label_1787; // 0x6f1 JumpB
	func_1822(); // 0x6f3 NEW_2
	var_58_object = Obj(); var_59_string = ""; // 0x6f5 PushV
	var_58_object = var_20_cvector; // 0x6f6 Mov
	var_59_string = var_21_bool; // 0x6f7 Mov
	func_3873(var_58_object, var_59_string); // 0x6f8 NEW_2
	goto Label_1807; // 0x6fa Jump
	
Label_1807:
	return 2; // 0x70f Return
	
Label_1787:
	var_207_int = 0; var_208_string = ""; var_209_object = Obj(); // 0x6fb PushV
	var_208_string = var_21_bool; // 0x6fc Mov
	var_209_object = var_20_cvector; // 0x6fd Mov
	func_4120(var_209_object); // 0x6fe NEW_2
	var_23_int = var_207_int; // 0x6ff Mov
	var_210_int = 0; // 0x701 PushI
	var_211_bool = var_23_int > var_210_int; // 0x702 GT
	if(var_211_bool == 0) goto Label_1807; // 0x703 JumpB
	var_212_int = 1; // 0x704 PushI
	var_213_bool = var_23_int > var_212_int; // 0x705 GT
	if(var_213_bool == 0) goto Label_1802; // 0x706 JumpB
	func_1822(); // 0x708 NEW_2
	
Label_1802:
	var_214_string = ""; var_215_object = Obj(); // 0x70a PushV
	var_214_string = var_21_bool; // 0x70b Mov
	var_215_object = var_20_cvector; // 0x70c Mov
	func_4123(); // 0x70d NEW_2
}


task_4_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_string, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_bool = 0; var_22_string = ""; // 0x711 PushV
	var_22_string = var_20_bool; // 0x712 Mov
	func_3940(var_21_bool, var_22_string); // 0x713 NEW_2
	if(var_21_bool == 0) goto Label_1821; // 0x715 JumpB
	func_1822(); // 0x717 NEW_2
	var_32_string = ""; // 0x719 PushV
	var_32_string = var_20_bool; // 0x71a Mov
	func_3956(var_32_string); // 0x71b NEW_2
	
Label_1821:
	return 0; // 0x71d Return
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	func_1822(); // 0x72b NEW_2
	var_23_object = Obj(); // 0x72d PushV
	var_23_object = var_20_bool; // 0x72e Mov
	func_3817(); // 0x72f NEW_2
	return 0; // 0x731 Return
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x732 PushV
	var_25_int = 111; // 0x733 PushI
	var_26_bool = var_20_bool != var_25_int; // 0x734 Neq
	if(var_26_bool == 0) goto Label_1847; // 0x735 JumpB
	return 4; // 0x736 Return
	
Label_1847:
	var_27_bool = 0; var_28_object = Obj(); // 0x737 PushV
	var_28_object = var_0_object; // 0x738 MovT
	func_2773(var_27_bool, var_28_object); // 0x739 NEW_2
	var_61_bool = var_27_bool == 0; // 0x73b Not
	if(var_61_bool == 0) goto Label_1857; // 0x73c JumpB
	func_1822(); // 0x73e NEW_2
	return 4; // 0x740 Return
	
Label_1857:
	GetDirection(var_23_cvector); // 0x741 Func
	var_64_cvector = CVector(0,0,0); var_65_object = Obj(); // 0x743 PushV
	var_65_object = var_0_object; // 0x744 MovT
	func_2700(var_65_object); // 0x745 NEW_2
	var_24_cvector = var_64_cvector; // 0x746 Mov
	var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); // 0x748 PushV
	var_71_cvector = var_23_cvector; // 0x749 Mov
	var_72_cvector = var_24_cvector; // 0x74a Mov
	func_3163(var_70_float, var_71_cvector, var_72_cvector); // 0x74b NEW_2
	var_94_float = 0.5; // 0x74d PushF
	var_95_bool = var_70_float < var_94_float; // 0x74e LT
	if(var_95_bool == 0) goto Label_1876; // 0x74f JumpB
	var_96_object = Obj(); // 0x750 PushV
	var_96_object = var_0_object; // 0x751 MovT
	func_2923(); // 0x752 NEW_2
	
Label_1876:
	return 4; // 0x754 Return
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool)
{
	func_1822(); // 0x756 NEW_2
	func_4097(); // 0x759 NEW_2
	return 0; // 0x75b Return
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x75d PushV
	var_22_object = var_20_bool; // 0x75e Mov
	func_3898(var_21_bool, var_22_object); // 0x75f NEW_2
	if(var_21_bool == 0) goto Label_1897; // 0x761 JumpB
	func_1822(); // 0x763 NEW_2
	var_37_object = Obj(); // 0x765 PushV
	var_37_object = var_20_bool; // 0x766 Mov
	func_3921(var_37_object); // 0x767 NEW_2
	
Label_1897:
	return 0; // 0x769 Return
}


task_5_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool)
{
	func_2088(var_19_bool); // 0x787 NEW_2
	func_4097(); // 0x78a NEW_2
	return 0; // 0x78c Return
}


task_5_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_float = 0; // 0x7f4 PushV
	var_29_int = 120; // 0x7f5 PushI
	var_30_bool = var_20_bool != var_29_int; // 0x7f6 Neq
	if(var_30_bool == 0) goto Label_2041; // 0x7f7 JumpB
	return 8; // 0x7f8 Return
	
Label_2041:
	var_31_bool = var_0_object == 0; // 0x7f9 NullEq
	if(var_31_bool == 0) goto Label_2050; // 0x7fa JumpB
	Stop(); // 0x7fb Func
	var_32_int = 1; // 0x7fd PushI
	KillTimer(var_32_int); // 0x7fe Func
	var_2_object = 1; // 0x800 TMovB
	goto Label_2087; // 0x801 Jump
	
Label_2087:
	return 8; // 0x827 Return
	
Label_2050:
	GetDirection(var_25_cvector); // 0x802 Func
	var_33_float = 7000.0; // 0x804 PushF
	FindDirLength(var_26_float, var_25_cvector, var_33_float); // 0x805 Func
	var_34_cvector = CVector(0,0,0); var_35_float = 0; // 0x807 PushV
	var_35_float = 1.74533; // 0x808 MovF
	func_1933(var_34_cvector, var_35_float); // 0x809 NEW_2
	var_27_cvector = var_34_cvector; // 0x80a Mov
	var_28_float = var_27_cvector | var_27_cvector; // 0x80c Or2
	var_64_bool = 0; // 0x80d PushV
	var_64_bool = 0; // 0x80e MovB
	var_65_float = 2500.0; // 0x80f PushF
	var_66_bool = var_28_float >= var_65_float; // 0x810 GE
	if(var_66_bool == 0) goto Label_2080; // 0x811 JumpB
	var_67_bool = 0; // 0x812 PushV
	var_67_bool = 1; // 0x813 MovB
	var_68_float = var_26_float * var_26_float; // 0x814 Mult
	var_69_float = 2.25; // 0x815 PushF
	var_70_float = var_68_float * var_69_float; // 0x816 Mult
	var_71_bool = var_28_float >= var_70_float; // 0x817 GE
	if(var_71_bool == 0) goto Label_2078; // 0x818 JumpB
	var_72_bool = 0; // 0x819 PushV
	func_2104(var_67_bool, var_72_bool); // 0x81a NEW_2
	if(var_72_bool == 0) goto Label_2078; // 0x81c JumpB
	var_67_bool = 0; // 0x81d MovB
	
Label_2078:
	if(var_67_bool == 0) goto Label_2080; // 0x81e JumpB
	var_64_bool = 1; // 0x81f MovB
	
Label_2080:
	if(var_64_bool == 0) goto Label_2087; // 0x820 JumpB
	Stop(); // 0x821 Func
	var_92_cvector = CVector(0,0,0); // 0x823 PushV
	func_2695(var_92_cvector); // 0x824 NEW_2
	var_1_object = var_92_cvector + var_27_cvector; // 0x826 Add2
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	func_2088(var_20_bool); // 0x831 NEW_2
	var_22_object = Obj(); // 0x833 PushV
	var_22_object = var_20_bool; // 0x834 Mov
	func_3817(); // 0x835 NEW_2
	return 0; // 0x837 Return
}


task_6_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_int, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_float = 0; // 0x8af PushV
	var_29_int = 120; // 0x8b0 PushI
	var_30_bool = var_20_bool != var_29_int; // 0x8b1 Neq
	if(var_30_bool == 0) goto Label_2228; // 0x8b2 JumpB
	return 8; // 0x8b3 Return
	
Label_2228:
	var_31_bool = var_0_object == 0; // 0x8b4 NullEq
	if(var_31_bool == 0) goto Label_2237; // 0x8b5 JumpB
	Stop(); // 0x8b6 Func
	var_32_int = 1; // 0x8b8 PushI
	KillTimer(var_32_int); // 0x8b9 Func
	var_2_object = 1; // 0x8bb TMovB
	goto Label_2274; // 0x8bc Jump
	
Label_2274:
	return 8; // 0x8e2 Return
	
Label_2237:
	GetDirection(var_25_cvector); // 0x8bd Func
	var_33_float = 7000.0; // 0x8bf PushF
	FindDirLength(var_26_float, var_25_cvector, var_33_float); // 0x8c0 Func
	var_34_cvector = CVector(0,0,0); var_35_float = 0; // 0x8c2 PushV
	var_35_float = 1.74533; // 0x8c3 MovF
	func_2120(var_34_cvector, var_35_float); // 0x8c4 NEW_2
	var_27_cvector = var_34_cvector; // 0x8c5 Mov
	var_28_float = var_27_cvector | var_27_cvector; // 0x8c7 Or2
	var_64_bool = 0; // 0x8c8 PushV
	var_64_bool = 0; // 0x8c9 MovB
	var_65_float = 2500.0; // 0x8ca PushF
	var_66_bool = var_28_float >= var_65_float; // 0x8cb GE
	if(var_66_bool == 0) goto Label_2267; // 0x8cc JumpB
	var_67_bool = 0; // 0x8cd PushV
	var_67_bool = 1; // 0x8ce MovB
	var_68_float = var_26_float * var_26_float; // 0x8cf Mult
	var_69_float = 2.25; // 0x8d0 PushF
	var_70_float = var_68_float * var_69_float; // 0x8d1 Mult
	var_71_bool = var_28_float >= var_70_float; // 0x8d2 GE
	if(var_71_bool == 0) goto Label_2265; // 0x8d3 JumpB
	var_72_bool = 0; // 0x8d4 PushV
	func_2291(var_67_bool, var_72_bool); // 0x8d5 NEW_2
	if(var_72_bool == 0) goto Label_2265; // 0x8d7 JumpB
	var_67_bool = 0; // 0x8d8 MovB
	
Label_2265:
	if(var_67_bool == 0) goto Label_2267; // 0x8d9 JumpB
	var_64_bool = 1; // 0x8da MovB
	
Label_2267:
	if(var_64_bool == 0) goto Label_2274; // 0x8db JumpB
	Stop(); // 0x8dc Func
	var_92_cvector = CVector(0,0,0); // 0x8de PushV
	func_2695(var_92_cvector); // 0x8df NEW_2
	var_1_object = var_92_cvector + var_27_cvector; // 0x8e1 Add2
}


task_6_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	func_2275(var_20_bool); // 0x8ec NEW_2
	var_22_object = Obj(); // 0x8ee PushV
	var_22_object = var_20_bool; // 0x8ef Mov
	func_3817(); // 0x8f0 NEW_2
	return 0; // 0x8f2 Return
}


task_7_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool)
{
	func_2469(var_19_bool); // 0x904 NEW_2
	func_4097(); // 0x907 NEW_2
	return 0; // 0x909 Return
}


task_7_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_int, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_float = 0; // 0x971 PushV
	var_29_int = 120; // 0x972 PushI
	var_30_bool = var_20_bool != var_29_int; // 0x973 Neq
	if(var_30_bool == 0) goto Label_2422; // 0x974 JumpB
	return 8; // 0x975 Return
	
Label_2422:
	var_31_bool = var_0_object == 0; // 0x976 NullEq
	if(var_31_bool == 0) goto Label_2431; // 0x977 JumpB
	Stop(); // 0x978 Func
	var_32_int = 1; // 0x97a PushI
	KillTimer(var_32_int); // 0x97b Func
	var_2_object = 1; // 0x97d TMovB
	goto Label_2468; // 0x97e Jump
	
Label_2468:
	return 8; // 0x9a4 Return
	
Label_2431:
	GetDirection(var_25_cvector); // 0x97f Func
	var_33_float = 7000.0; // 0x981 PushF
	FindDirLength(var_26_float, var_25_cvector, var_33_float); // 0x982 Func
	var_34_cvector = CVector(0,0,0); var_35_float = 0; // 0x984 PushV
	var_35_float = 1.74533; // 0x985 MovF
	func_2314(var_34_cvector, var_35_float); // 0x986 NEW_2
	var_27_cvector = var_34_cvector; // 0x987 Mov
	var_28_float = var_27_cvector | var_27_cvector; // 0x989 Or2
	var_64_bool = 0; // 0x98a PushV
	var_64_bool = 0; // 0x98b MovB
	var_65_float = 2500.0; // 0x98c PushF
	var_66_bool = var_28_float >= var_65_float; // 0x98d GE
	if(var_66_bool == 0) goto Label_2461; // 0x98e JumpB
	var_67_bool = 0; // 0x98f PushV
	var_67_bool = 1; // 0x990 MovB
	var_68_float = var_26_float * var_26_float; // 0x991 Mult
	var_69_float = 2.25; // 0x992 PushF
	var_70_float = var_68_float * var_69_float; // 0x993 Mult
	var_71_bool = var_28_float >= var_70_float; // 0x994 GE
	if(var_71_bool == 0) goto Label_2459; // 0x995 JumpB
	var_72_bool = 0; // 0x996 PushV
	func_2485(var_67_bool, var_72_bool); // 0x997 NEW_2
	if(var_72_bool == 0) goto Label_2459; // 0x999 JumpB
	var_67_bool = 0; // 0x99a MovB
	
Label_2459:
	if(var_67_bool == 0) goto Label_2461; // 0x99b JumpB
	var_64_bool = 1; // 0x99c MovB
	
Label_2461:
	if(var_64_bool == 0) goto Label_2468; // 0x99d JumpB
	Stop(); // 0x99e Func
	var_92_cvector = CVector(0,0,0); // 0x9a0 PushV
	func_2695(var_92_cvector); // 0x9a1 NEW_2
	var_1_object = var_92_cvector + var_27_cvector; // 0x9a3 Add2
}


task_7_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_cvector, var_20_bool)
{
	func_2469(var_20_bool); // 0x9ae NEW_2
	var_22_object = Obj(); // 0x9b0 PushV
	var_22_object = var_20_bool; // 0x9b1 Mov
	func_3817(); // 0x9b2 NEW_2
	return 0; // 0x9b4 Return
}


task_8_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool)
{
	func_2663(var_19_bool); // 0x9c6 NEW_2
	func_4097(); // 0x9c9 NEW_2
	return 0; // 0x9cb Return
}


task_8_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_int)
{
	var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_float = 0; // 0xa33 PushV
	var_29_int = 120; // 0xa34 PushI
	var_30_bool = var_20_int != var_29_int; // 0xa35 Neq
	if(var_30_bool == 0) goto Label_2616; // 0xa36 JumpB
	return 8; // 0xa37 Return
	
Label_2616:
	var_31_bool = var_0_object == 0; // 0xa38 NullEq
	if(var_31_bool == 0) goto Label_2625; // 0xa39 JumpB
	Stop(); // 0xa3a Func
	var_32_int = 1; // 0xa3c PushI
	KillTimer(var_32_int); // 0xa3d Func
	var_2_object = 1; // 0xa3f TMovB
	goto Label_2662; // 0xa40 Jump
	
Label_2662:
	return 8; // 0xa66 Return
	
Label_2625:
	GetDirection(var_25_cvector); // 0xa41 Func
	var_33_float = 7000.0; // 0xa43 PushF
	FindDirLength(var_26_float, var_25_cvector, var_33_float); // 0xa44 Func
	var_34_cvector = CVector(0,0,0); var_35_float = 0; // 0xa46 PushV
	var_35_float = 1.74533; // 0xa47 MovF
	func_2508(var_34_cvector, var_35_float); // 0xa48 NEW_2
	var_27_cvector = var_34_cvector; // 0xa49 Mov
	var_28_float = var_27_cvector | var_27_cvector; // 0xa4b Or2
	var_64_bool = 0; // 0xa4c PushV
	var_64_bool = 0; // 0xa4d MovB
	var_65_float = 2500.0; // 0xa4e PushF
	var_66_bool = var_28_float >= var_65_float; // 0xa4f GE
	if(var_66_bool == 0) goto Label_2655; // 0xa50 JumpB
	var_67_bool = 0; // 0xa51 PushV
	var_67_bool = 1; // 0xa52 MovB
	var_68_float = var_26_float * var_26_float; // 0xa53 Mult
	var_69_float = 2.25; // 0xa54 PushF
	var_70_float = var_68_float * var_69_float; // 0xa55 Mult
	var_71_bool = var_28_float >= var_70_float; // 0xa56 GE
	if(var_71_bool == 0) goto Label_2653; // 0xa57 JumpB
	var_72_bool = 0; // 0xa58 PushV
	func_2679(var_67_bool, var_72_bool); // 0xa59 NEW_2
	if(var_72_bool == 0) goto Label_2653; // 0xa5b JumpB
	var_67_bool = 0; // 0xa5c MovB
	
Label_2653:
	if(var_67_bool == 0) goto Label_2655; // 0xa5d JumpB
	var_64_bool = 1; // 0xa5e MovB
	
Label_2655:
	if(var_64_bool == 0) goto Label_2662; // 0xa5f JumpB
	Stop(); // 0xa60 Func
	var_92_cvector = CVector(0,0,0); // 0xa62 PushV
	func_2695(var_92_cvector); // 0xa63 NEW_2
	var_1_object = var_92_cvector + var_27_cvector; // 0xa65 Add2
}


task_8_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object)
{
	func_2663(var_20_object); // 0xa70 NEW_2
	var_22_object = Obj(); // 0xa72 PushV
	var_22_object = var_20_object; // 0xa73 Mov
	func_3817(); // 0xa74 NEW_2
	return 0; // 0xa76 Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_string)
{
	var_22_float = 0; var_23_float = 0; // 0xedc PushV
	var_24_string = "health"; // 0xedd PushS
	var_25_bool = var_21_string == var_24_string; // 0xede Eq
	if(var_25_bool == 0) goto Label_3816; // 0xedf JumpB
	var_26_string = "health"; // 0xee0 PushS
	GetProperty(var_26_string, var_23_float); // 0xee1 Func
	var_27_int = 0; // 0xee3 PushI
	var_28_bool = var_23_float <= var_27_int; // 0xee4 LE
	if(var_28_bool == 0) goto Label_3816; // 0xee5 JumpB
	SignalDeath(var_20_object); // 0xee6 Func
	
Label_3816:
	return 2; // 0xee8 Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object)
{
	var_21_object = Obj(); // 0xeea PushV
	var_21_object = var_20_object; // 0xeeb Mov
	func_3796(var_21_object); // 0xeec NEW_2
	return 0; // 0xeee Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_int, var_22_float, var_23_float)
{
	var_24_object = Obj(); var_25_int = 0; var_26_float = 0; // 0xef0 PushV
	var_24_object = var_20_object; // 0xef1 Mov
	var_25_int = var_21_int; // 0xef2 Mov
	var_26_float = var_22_float; // 0xef3 Mov
	func_2841(var_24_object, var_25_int, var_26_float); // 0xef4 NEW_2
	return 0; // 0xef6 Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_int, var_22_float, var_23_float, var_24_cvector, var_25_cvector)
{
	var_26_object = Obj(); var_27_int = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); // 0xef8 PushV
	var_26_object = var_20_object; // 0xef9 Mov
	var_27_int = var_21_int; // 0xefa Mov
	var_28_float = var_22_float; // 0xefb Mov
	var_29_cvector = var_24_cvector; // 0xefc Mov
	var_30_cvector = var_25_cvector; // 0xefd Mov
	func_2909(var_28_float, var_29_cvector, var_30_cvector); // 0xefe NEW_2
	return 0; // 0xf00 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; // 0x534 PushV
	var_0_object = 0; // 0x535 TMovB
	var_24_bool = 1; // 0x536 PushB
	SensePlayerOnly(var_24_bool); // 0x537 Func
	func_4374(); // 0x53a NEW_2
	func_1366(); // 0x53d NEW_2
	
Label_1343:
	var_144_int = 2; // 0x53f PushI
	irand(var_22_int, var_144_int); // 0x540 Func
	var_145_int = 0; // 0x542 PushI
	var_146_bool = var_22_int == var_145_int; // 0x543 Eq
	if(var_146_bool == 0) goto Label_1357; // 0x544 JumpB
	var_0_object = 1; // 0x545 TMovB
	func_4400(); // 0x547 NEW_2
	var_0_object = 0; // 0x549 TMovB
	ResetAAS(); // 0x54a Func
	goto Label_1364; // 0x54c Jump
	
Label_1364:
	goto Label_1343; // 0x554 Jump
	
Label_1357:
	var_164_int = 4; // 0x54d PushI
	irand(var_23_int, var_164_int); // 0x54e Func
	var_165_int = 1; // 0x550 PushI
	var_166_int = var_23_int + var_165_int; // 0x551 Add
	Sleep(var_166_int); // 0x552 Func
}


func_0(var_0_object, var_45_int, var_46_object)
{
	var_48_object = Obj(); var_49_bool = 0; var_50_int = 0; var_51_bool = 0; var_52_object = Obj(); var_53_bool = 0; var_54_int = 0; var_55_bool = 0; // 0x0 PushV
	var_0_object = var_46_object; // 0x1 TMov
	var_56_bool = 0; var_57_object = Obj(); var_58_float = 0; // 0x2 PushV
	var_57_object = var_46_object; // 0x3 Mov
	var_58_float = 70.0; // 0x4 MovF
	func_2939(var_57_object, var_58_float); // 0x5 NEW_2
	var_102_bool = var_56_bool == 0; // 0x7 Not
	if(var_102_bool == 0) goto Label_11; // 0x8 JumpB
	var_45_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_52_object); // 0xb Func
	var_103_int = 0; // 0xd PushV
	func_4366(var_103_int); // 0xe NEW_2
	SetNPCName(var_103_int); // 0x10 ObjFunc
	var_104_int = 0; // 0x12 PushV
	func_4364(var_104_int); // 0x13 NEW_2
	SetNPCDescription(var_104_int); // 0x15 ObjFunc
	var_105_string = ""; // 0x17 PushV
	func_4368(var_105_string); // 0x18 NEW_2
	SetPhoto(var_105_string); // 0x1a ObjFunc
	var_106_string = ""; // 0x1c PushV
	func_4370(var_106_string); // 0x1d NEW_2
	SetPhoto2(var_106_string); // 0x1f ObjFunc
	var_107_int = 0; // 0x21 PushV
	func_3439(var_107_int); // 0x22 NEW_2
	SetPlayerName(var_107_int); // 0x24 ObjFunc
	var_54_int = -1; // 0x26 MovI
	IsOverrideActive(var_53_bool); // 0x27 Func
	var_115_bool = var_53_bool; // 0x29 Push
	if(var_115_bool == 0) goto Label_45; // 0x2a JumpB
	var_45_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_52_object); // 0x2d Func
	var_116_object = Obj(); var_117_object = Obj(); // 0x2f PushV
	var_116_object = var_46_object; // 0x30 Mov
	var_117_object = var_52_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_118_object, var_119_object, var_120_string, var_121_bool, var_116_object, var_117_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_55_bool); // 0x36 ObjFunc
	
Label_56:
	var_372_bool = var_55_bool == 0; // 0x38 Not
	if(var_372_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_55_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_373_object = Obj(); // 0x3f PushV
	var_373_object = var_46_object; // 0x40 Mov
	func_3007(); // 0x41 NEW_2
	StopDialog(var_52_object); // 0x43 Func
	GetReturnValue(var_54_int); // 0x45 ObjFunc
	var_45_int = var_54_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_4097()
{
	return 0; // 0x1001 Return
}


func_4098(var_23_int, var_24_object)
{
	var_25_bool = 0; var_26_bool = 0; // 0x1002 PushV
	var_27_string = "Received steal"; // 0x1003 PushS
	Trace(var_27_string); // 0x1004 Func
	CanSee(var_26_bool, var_24_object); // 0x1006 Func
	var_28_bool = var_26_bool; // 0x1008 Push
	if(var_28_bool == 0) goto Label_4112; // 0x1009 JumpB
	var_29_int = 0; var_30_object = Obj(); // 0x100a PushV
	var_30_object = var_24_object; // 0x100b Mov
	func_3986(var_29_int, var_30_object); // 0x100c NEW_2
	var_23_int = var_29_int; // 0x100d Mov
	return 2; // 0x100f Return
	
Label_4112:
	var_23_int = 0; // 0x1010 MovI
	return 2; // 0x1011 Return
}


func_3073(var_46_string)
{
	var_47_bool = 0; var_48_int = 0; var_49_bool = 0; var_50_int = 0; var_51_bool = 0; var_52_float = 0; var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_bool = 0; var_56_int = 0; var_57_bool = 0; var_58_int = 0; var_59_bool = 0; var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); // 0xc01 PushV
	IsExisting3DSound(var_55_bool, var_46_string); // 0xc02 Func
	var_63_bool = var_55_bool == 0; // 0xc04 Not
	if(var_63_bool == 0) goto Label_3098; // 0xc05 JumpB
	var_56_int = 0; // 0xc06 MovI
	
Label_3079:
	var_64_int = 1; // 0xc07 PushI
	var_65_int = var_56_int + var_64_int; // 0xc08 Add
	var_66_int = var_46_string + var_65_int; // 0xc09 Add
	IsExisting3DSound(var_57_bool, var_66_int); // 0xc0a Func
	var_67_bool = var_57_bool == 0; // 0xc0c Not
	if(var_67_bool == 0) goto Label_3087; // 0xc0d JumpB
	goto Label_3090; // 0xc0e Jump
	
Label_3090:
	var_68_bool = var_56_int == 0; // 0xc12 Not
	if(var_68_bool == 0) goto Label_3093; // 0xc13 JumpB
	return 16; // 0xc14 Return
	
Label_3093:
	irand(var_58_int, var_56_int); // 0xc15 Func
	var_69_int = 1; // 0xc17 PushI
	var_70_int = var_58_int + var_69_int; // 0xc18 Add
	var_46_string = var_46_string + var_70_int; // 0xc19 Add2
	
Label_3098:
	Is3DSoundLoaded(var_59_bool, var_46_string); // 0xc1a Func
	var_71_bool = var_59_bool; // 0xc1c Push
	if(var_71_bool == 0) goto Label_3113; // 0xc1d JumpB
	GetEyesHeight(var_60_float); // 0xc1e Func
	GetDirection(var_61_cvector); // 0xc20 Func
	var_72_int = 50; // 0xc22 PushI
	var_62_cvector = var_61_cvector * var_72_int; // 0xc23 Mult2
	var_73_float = GetByIndex(var_62_cvector, 1); // 0xc24 PushE
	var_73_float = var_73_float + var_60_float; // 0xc25 Add2
	SetByIndex(var_62_cvector, 1) = var_73_float; // 0xc26 PopE
	PlayGlobalSound(var_46_string, var_62_cvector); // 0xc27 Func
	
Label_3113:
	return 16; // 0xc29 Return
	
Label_3087:
	var_74_int = 1; // 0xc0f PushI
	var_56_int = var_56_int + var_74_int; // 0xc10 Add2
	goto Label_3079; // 0xc11 Jump
}


func_3592()
{
	var_227_int = 0; // 0xe08 PushV
	func_3456(var_227_int); // 0xe09 NEW_2
	var_231_int = 1; // 0xe0b PushI
	var_232_bool = var_227_int != var_231_int; // 0xe0c Neq
	if(var_232_bool == 0) goto Label_3599; // 0xe0d JumpB
	return 0; // 0xe0e Return
	
Label_3599:
	var_233_string = ""; // 0xe0f PushV
	var_233_string = "liver"; // 0xe10 MovS
	func_3575(var_233_string); // 0xe11 NEW_2
	var_244_string = ""; // 0xe13 PushV
	var_244_string = "kidney"; // 0xe14 MovS
	func_3575(var_244_string); // 0xe15 NEW_2
	var_245_string = ""; // 0xe17 PushV
	var_245_string = "heart"; // 0xe18 MovS
	func_3575(var_245_string); // 0xe19 NEW_2
	var_246_string = ""; // 0xe1b PushV
	var_246_string = "blood"; // 0xe1c MovS
	func_3575(var_246_string); // 0xe1d NEW_2
	return 0; // 0xe1f Return
}


func_4114(var_71_object)
{
	var_72_object = Obj(); // 0x1013 PushV
	var_72_object = var_71_object; // 0x1014 Mov
	func_3996(var_72_object); // 0x1015 NEW_2
	return 0; // 0x1017 Return
}


func_4120(var_207_int)
{
	var_207_int = 0; // 0x1019 MovI
	return 0; // 0x101a Return
}


func_4123()
{
	return 0; // 0x101c Return
}


func_4125(var_26_bool, var_27_object)
{
	var_28_bool = 0; var_29_bool = 0; // 0x101d PushV
	CanSee(var_29_bool, var_27_object); // 0x101e Func
	var_26_bool = var_29_bool; // 0x1020 Mov
	return 2; // 0x1021 Return
}


func_1568(var_1_object)
{
	var_21_int = 110; // 0x620 PushI
	KillTimer(var_21_int); // 0x621 Func
	var_1_object = 0; // 0x623 TMovB
	var_22_object = var_0_object; // 0x624 PushT
	if(var_22_object == 0) goto Label_1578; // 0x625 JumpB
	func_4427(); // 0x627 NEW_2
	goto Label_1580; // 0x629 Jump
	
Label_1580:
	return 0; // 0x62c Return
	
Label_1578:
	Stop(); // 0x62a Func
}


func_3616(var_26_bool)
{
	var_27_int = 0; var_28_bool = 0; var_29_int = 0; var_30_bool = 0; // 0xe20 PushV
	var_31_bool = var_26_bool; // 0xe21 Push
	if(var_31_bool == 0) goto Label_3705; // 0xe22 JumpB
	var_32_int = 0; var_33_int = 0; // 0xe23 PushV
	var_32_int = 0; // 0xe24 MovI
	var_34_int = 100; // 0xe25 PushI
	var_35_int = 0; // 0xe26 PushV
	func_3185(var_35_int); // 0xe27 NEW_2
	var_41_int = 100; // 0xe29 PushI
	var_42_float = var_35_int * var_41_int; // 0xe2a Mult
	var_33_int = var_34_int + var_42_float; // 0xe2b Add2
	func_3544(var_32_int, var_33_int); // 0xe2c NEW_2
	var_60_int = 8; // 0xe2e PushI
	irand(var_29_int, var_60_int); // 0xe2f Func
	var_61_int = 0; // 0xe31 PushI
	var_62_bool = var_29_int == var_61_int; // 0xe32 Eq
	if(var_62_bool == 0) goto Label_3645; // 0xe33 JumpB
	var_63_int = 0; var_64_string = ""; // 0xe34 PushV
	var_64_string = "lemon"; // 0xe35 MovS
	func_3791(var_63_int, var_64_string); // 0xe36 NEW_2
	var_65_int = 0; // 0xe38 PushI
	var_66_int = 1; // 0xe39 PushI
	AddItem(var_30_bool, var_63_int, var_65_int, var_66_int); // 0xe3a Func
	goto Label_3704; // 0xe3c Jump
	
Label_3704:
	goto Label_3790; // 0xe78 Jump
	
Label_3790:
	return 4; // 0xece Return
	
Label_3645:
	var_67_int = 1; // 0xe3d PushI
	var_68_bool = var_29_int == var_67_int; // 0xe3e Eq
	if(var_68_bool == 0) goto Label_3657; // 0xe3f JumpB
	var_69_int = 0; var_70_string = ""; // 0xe40 PushV
	var_70_string = "rusk"; // 0xe41 MovS
	func_3791(var_69_int, var_70_string); // 0xe42 NEW_2
	var_71_int = 0; // 0xe44 PushI
	var_72_int = 1; // 0xe45 PushI
	AddItem(var_30_bool, var_69_int, var_71_int, var_72_int); // 0xe46 Func
	goto Label_3704; // 0xe48 Jump
	
Label_3657:
	var_73_int = 2; // 0xe49 PushI
	var_74_bool = var_29_int == var_73_int; // 0xe4a Eq
	if(var_74_bool == 0) goto Label_3669; // 0xe4b JumpB
	var_75_int = 0; var_76_string = ""; // 0xe4c PushV
	var_76_string = "hook"; // 0xe4d MovS
	func_3791(var_75_int, var_76_string); // 0xe4e NEW_2
	var_77_int = 0; // 0xe50 PushI
	var_78_int = 1; // 0xe51 PushI
	AddItem(var_30_bool, var_75_int, var_77_int, var_78_int); // 0xe52 Func
	goto Label_3704; // 0xe54 Jump
	
Label_3669:
	var_79_int = 4; // 0xe55 PushI
	var_80_bool = var_29_int == var_79_int; // 0xe56 Eq
	if(var_80_bool == 0) goto Label_3681; // 0xe57 JumpB
	var_81_int = 0; var_82_string = ""; // 0xe58 PushV
	var_82_string = "syringe"; // 0xe59 MovS
	func_3791(var_81_int, var_82_string); // 0xe5a NEW_2
	var_83_int = 0; // 0xe5c PushI
	var_84_int = 1; // 0xe5d PushI
	AddItem(var_30_bool, var_81_int, var_83_int, var_84_int); // 0xe5e Func
	goto Label_3704; // 0xe60 Jump
	
Label_3681:
	var_85_int = 5; // 0xe61 PushI
	var_86_bool = var_29_int == var_85_int; // 0xe62 Eq
	if(var_86_bool == 0) goto Label_3693; // 0xe63 JumpB
	var_87_int = 0; var_88_string = ""; // 0xe64 PushV
	var_88_string = "watch"; // 0xe65 MovS
	func_3791(var_87_int, var_88_string); // 0xe66 NEW_2
	var_89_int = 0; // 0xe68 PushI
	var_90_int = 1; // 0xe69 PushI
	AddItem(var_30_bool, var_87_int, var_89_int, var_90_int); // 0xe6a Func
	goto Label_3704; // 0xe6c Jump
	
Label_3693:
	var_91_int = 6; // 0xe6d PushI
	var_92_bool = var_29_int == var_91_int; // 0xe6e Eq
	if(var_92_bool == 0) goto Label_3704; // 0xe6f JumpB
	var_93_int = 0; var_94_string = ""; // 0xe70 PushV
	var_94_string = "razor"; // 0xe71 MovS
	func_3791(var_93_int, var_94_string); // 0xe72 NEW_2
	var_95_int = 0; // 0xe74 PushI
	var_96_int = 1; // 0xe75 PushI
	AddItem(var_30_bool, var_93_int, var_95_int, var_96_int); // 0xe76 Func
	
Label_3705:
	var_97_int = 0; var_98_int = 0; // 0xe79 PushV
	var_97_int = 0; // 0xe7a MovI
	var_99_int = 50; // 0xe7b PushI
	var_100_int = 0; // 0xe7c PushV
	func_3185(var_100_int); // 0xe7d NEW_2
	var_101_int = 50; // 0xe7f PushI
	var_102_float = var_100_int * var_101_int; // 0xe80 Mult
	var_98_int = var_99_int + var_102_float; // 0xe81 Add2
	func_3544(var_97_int, var_98_int); // 0xe82 NEW_2
	var_103_int = 7; // 0xe84 PushI
	irand(var_29_int, var_103_int); // 0xe85 Func
	var_104_int = 0; // 0xe87 PushI
	var_105_bool = var_29_int == var_104_int; // 0xe88 Eq
	if(var_105_bool == 0) goto Label_3731; // 0xe89 JumpB
	var_106_int = 0; var_107_string = ""; // 0xe8a PushV
	var_107_string = "beads"; // 0xe8b MovS
	func_3791(var_106_int, var_107_string); // 0xe8c NEW_2
	var_108_int = 0; // 0xe8e PushI
	var_109_int = 1; // 0xe8f PushI
	AddItem(var_30_bool, var_106_int, var_108_int, var_109_int); // 0xe90 Func
	goto Label_3790; // 0xe92 Jump
	
Label_3731:
	var_110_int = 1; // 0xe93 PushI
	var_111_bool = var_29_int == var_110_int; // 0xe94 Eq
	if(var_111_bool == 0) goto Label_3743; // 0xe95 JumpB
	var_112_int = 0; var_113_string = ""; // 0xe96 PushV
	var_113_string = "bracelet"; // 0xe97 MovS
	func_3791(var_112_int, var_113_string); // 0xe98 NEW_2
	var_114_int = 0; // 0xe9a PushI
	var_115_int = 1; // 0xe9b PushI
	AddItem(var_30_bool, var_112_int, var_114_int, var_115_int); // 0xe9c Func
	goto Label_3790; // 0xe9e Jump
	
Label_3743:
	var_116_int = 2; // 0xe9f PushI
	var_117_bool = var_29_int == var_116_int; // 0xea0 Eq
	if(var_117_bool == 0) goto Label_3755; // 0xea1 JumpB
	var_118_int = 0; var_119_string = ""; // 0xea2 PushV
	var_119_string = "ear_ring"; // 0xea3 MovS
	func_3791(var_118_int, var_119_string); // 0xea4 NEW_2
	var_120_int = 0; // 0xea6 PushI
	var_121_int = 1; // 0xea7 PushI
	AddItem(var_30_bool, var_118_int, var_120_int, var_121_int); // 0xea8 Func
	goto Label_3790; // 0xeaa Jump
	
Label_3755:
	var_122_int = 3; // 0xeab PushI
	var_123_bool = var_29_int == var_122_int; // 0xeac Eq
	if(var_123_bool == 0) goto Label_3767; // 0xead JumpB
	var_124_int = 0; var_125_string = ""; // 0xeae PushV
	var_125_string = "gold_ring"; // 0xeaf MovS
	func_3791(var_124_int, var_125_string); // 0xeb0 NEW_2
	var_126_int = 0; // 0xeb2 PushI
	var_127_int = 1; // 0xeb3 PushI
	AddItem(var_30_bool, var_124_int, var_126_int, var_127_int); // 0xeb4 Func
	goto Label_3790; // 0xeb6 Jump
	
Label_3767:
	var_128_int = 4; // 0xeb7 PushI
	var_129_bool = var_29_int == var_128_int; // 0xeb8 Eq
	if(var_129_bool == 0) goto Label_3779; // 0xeb9 JumpB
	var_130_int = 0; var_131_string = ""; // 0xeba PushV
	var_131_string = "silver_ring"; // 0xebb MovS
	func_3791(var_130_int, var_131_string); // 0xebc NEW_2
	var_132_int = 0; // 0xebe PushI
	var_133_int = 1; // 0xebf PushI
	AddItem(var_30_bool, var_130_int, var_132_int, var_133_int); // 0xec0 Func
	goto Label_3790; // 0xec2 Jump
	
Label_3779:
	var_134_int = 5; // 0xec3 PushI
	var_135_bool = var_29_int == var_134_int; // 0xec4 Eq
	if(var_135_bool == 0) goto Label_3790; // 0xec5 JumpB
	var_136_int = 0; var_137_string = ""; // 0xec6 PushV
	var_137_string = "flower"; // 0xec7 MovS
	func_3791(var_136_int, var_137_string); // 0xec8 NEW_2
	var_138_int = 0; // 0xeca PushI
	var_139_int = 1; // 0xecb PushI
	AddItem(var_30_bool, var_136_int, var_138_int, var_139_int); // 0xecc Func
}


func_4130(var_38_object)
{
	var_39_object = Obj(); // 0x1023 PushV
	var_39_object = var_38_object; // 0x1024 Mov
	TaskCall(7); // 0x1025 TaskCall
	func_2344(var_40_object, var_41_cvector, var_42_bool, var_39_object); // 0x1026 NEW_2
	TaskReturn(); // 0x1027 TaskReturn
	return 0; // 0x1029 Return
}


func_2088(var_2_object)
{
	Stop(); // 0x828 Func
	var_21_int = 120; // 0x82a PushI
	KillTimer(var_21_int); // 0x82b Func
	var_2_object = 1; // 0x82d TMovB
	return 0; // 0x82e Return
}


func_4138(var_35_bool, var_36_object)
{
	var_37_bool = 0; var_38_bool = 0; // 0x102a PushV
	CanSee(var_38_bool, var_36_object); // 0x102b Func
	var_35_bool = 1; // 0x102d MovB
	var_39_bool = var_38_bool; // 0x102e Push
	if(var_39_bool == 0) goto Label_4152; // 0x102f JumpB
	var_40_float = 0; var_41_object = Obj(); // 0x1030 PushV
	var_41_object = var_36_object; // 0x1031 Mov
	func_2707(var_41_object); // 0x1032 NEW_2
	var_48_int = 4000000; // 0x1034 PushI
	var_49_bool = var_40_float <= var_48_int; // 0x1035 LE
	if(var_49_bool == 0) goto Label_4152; // 0x1036 JumpB
	var_35_bool = 0; // 0x1037 MovB
	
Label_4152:
	return 2; // 0x1038 Return
}


func_3114(var_108_object)
{
	var_109_object = Obj(); var_110_object = Obj(); // 0xc2a PushV
	self(var_110_object); // 0xc2b Func
	var_108_object = var_110_object; // 0xc2d Mov
	return 2; // 0xc2e Return
}


func_3120(var_52_cvector, var_53_cvector)
{
	var_60_float = 0; var_61_float = 0; // 0xc30 PushV
	var_62_int = var_53_cvector | var_53_cvector; // 0xc31 Or
	var_61_float = sqrt(var_62_int); // 0xc32 Sqrt2
	var_63_float = 0.0; // 0xc33 PushF
	var_64_bool = var_61_float < var_63_float; // 0xc34 LT
	if(var_64_bool == 0) goto Label_3128; // 0xc35 JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0xc36 MovV
	return 2; // 0xc37 Return
	
Label_3128:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0xc38 Div2
	return 2; // 0xc39 Return
}


func_1590(var_1_object, var_22_object)
{
	var_23_bool = 0; var_24_int = 0; var_25_bool = 0; var_26_int = 0; // 0x636 PushV
	var_27_object = var_1_object; // 0x637 PushT
	if(var_27_object == 0) goto Label_1594; // 0x638 JumpB
	return 4; // 0x639 Return
	
Label_1594:
	IsPlayerActor(var_22_object, var_25_bool); // 0x63a Func
	var_28_bool = var_25_bool == 0; // 0x63c Not
	if(var_28_bool == 0) goto Label_1599; // 0x63d JumpB
	return 4; // 0x63e Return
	
Label_1599:
	var_29_int = 0; var_30_object = Obj(); // 0x63f PushV
	var_30_object = var_22_object; // 0x640 Mov
	func_3969(var_30_object); // 0x641 NEW_2
	var_26_int = var_29_int; // 0x642 Mov
	var_32_int = 0; // 0x644 PushI
	var_33_bool = var_26_int > var_32_int; // 0x645 GT
	if(var_33_bool == 0) goto Label_1622; // 0x646 JumpB
	var_34_int = 1; // 0x647 PushI
	var_35_bool = var_26_int > var_34_int; // 0x648 GT
	if(var_35_bool == 0) goto Label_1613; // 0x649 JumpB
	func_1568(var_26_int); // 0x64b NEW_2
	
Label_1613:
	var_38_object = Obj(); // 0x64d PushV
	var_38_object = var_22_object; // 0x64e Mov
	func_3978(var_38_object); // 0x64f NEW_2
	var_1_object = 1; // 0x651 TMovB
	var_103_int = 110; // 0x652 PushI
	var_104_float = 5.0; // 0x653 PushF
	SetTimer(var_103_int, var_104_float); // 0x654 Func
	
Label_1622:
	return 4; // 0x656 Return
}


func_2104(var_0_object, var_72_bool)
{
	var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); // 0x838 PushV
	GetDirection(var_75_cvector); // 0x839 Func
	var_77_cvector = CVector(0,0,0); var_78_object = Obj(); // 0x83b PushV
	var_78_object = var_0_object; // 0x83c MovT
	func_2700(var_78_object); // 0x83d NEW_2
	var_76_cvector = var_77_cvector; // 0x83e Mov
	var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); // 0x840 PushV
	var_84_cvector = var_75_cvector; // 0x841 Mov
	var_85_cvector = var_76_cvector; // 0x842 Mov
	func_3136(var_83_float, var_84_cvector, var_85_cvector); // 0x843 NEW_2
	var_91_float = -0.34202; // 0x845 PushF
	var_72_bool = var_83_float >= var_91_float; // 0x846 GE2
	return 4; // 0x847 Return
}


func_4153(var_137_object)
{
	var_138_object = Obj(); // 0x103a PushV
	var_138_object = var_137_object; // 0x103b Mov
	TaskCall(8); // 0x103c TaskCall
	func_2538(var_139_object, var_140_cvector, var_141_bool, var_138_object); // 0x103d NEW_2
	TaskReturn(); // 0x103e TaskReturn
	return 0; // 0x1040 Return
}


func_3130(var_435_object)
{
	var_436_object = Obj(); var_437_object = Obj(); // 0xc3a PushV
	CreateObjectVector(var_437_object); // 0xc3b Func
	var_435_object = var_437_object; // 0xc3d Mov
	return 2; // 0xc3e Return
}


func_3136(var_83_float, var_84_cvector, var_85_cvector)
{
	var_86_int = var_84_cvector | var_85_cvector; // 0xc41 Or
	var_87_int = var_84_cvector | var_84_cvector; // 0xc42 Or
	var_88_int = var_85_cvector | var_85_cvector; // 0xc43 Or
	var_89_float = var_87_int * var_88_int; // 0xc44 Mult
	var_90_float = sqrt(var_89_float); // 0xc45 Sqrt
	var_83_float = var_86_int / var_86_int; // 0xc46 Div2
	return 0; // 0xc47 Return
}


func_4161(var_52_bool, var_53_object)
{
	var_54_bool = 0; var_55_object = Obj(); // 0x1042 PushV
	var_55_object = var_53_object; // 0x1043 Mov
	func_4138(var_54_bool, var_55_object); // 0x1044 NEW_2
	var_52_bool = var_54_bool; // 0x1045 Mov
	return 0; // 0x1047 Return
}


func_2120(var_34_cvector, var_35_float)
{
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_float = 0; // 0x848 PushV
	GetPosition(var_42_cvector); // 0x849 Func
	GetPosition(var_43_cvector); // 0x84b TObjFunc
	GetDirection(var_44_cvector); // 0x84d Func
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0x84f PushV
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); // 0x850 PushV
	var_51_cvector = var_42_cvector - var_43_cvector; // 0x851 Sub2
	func_3120(var_50_cvector, var_51_cvector); // 0x852 NEW_2
	var_57_float = 0.75; // 0x854 PushF
	var_58_float = var_44_cvector * var_57_float; // 0x855 Mult
	var_49_cvector = var_50_cvector + var_58_float; // 0x856 Add2
	func_3120(var_48_cvector, var_49_cvector); // 0x857 NEW_2
	var_45_cvector = var_48_cvector; // 0x858 Mov
	var_59_int = 32; // 0x85a PushI
	var_60_float = 7000.0; // 0x85b PushF
	FindLongestDir(var_46_cvector, var_47_float, var_45_cvector, var_35_float, var_59_int, var_60_float); // 0x85c Func
	var_61_int = 100; // 0x85e PushI
	var_47_float = var_47_float - var_61_int; // 0x85f Sub2
	var_62_int = 0; // 0x860 PushI
	var_63_bool = var_47_float < var_62_int; // 0x861 LT
	if(var_63_bool == 0) goto Label_2148; // 0x862 JumpB
	var_47_float = 0; // 0x863 MovI
	
Label_2148:
	var_34_cvector = var_46_cvector * var_47_float; // 0x864 Mult2
	return 12; // 0x865 Return
}


func_3144(var_73_float, var_74_cvector, var_75_cvector)
{
	var_76_float = GetByIndex(var_74_cvector, 0); // 0xc49 PushE
	var_77_float = GetByIndex(var_75_cvector, 0); // 0xc4a PushE
	var_78_float = var_76_float * var_77_float; // 0xc4b Mult
	var_79_float = GetByIndex(var_74_cvector, 2); // 0xc4c PushE
	var_80_float = GetByIndex(var_75_cvector, 2); // 0xc4d PushE
	var_81_float = var_79_float * var_80_float; // 0xc4e Mult
	var_73_float = var_78_float + var_81_float; // 0xc4f Add2
	return 0; // 0xc50 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_116_object, var_117_object)
{
	var_0_object = var_117_object; // 0x4b TMov
	var_1_object = var_116_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_122_int = 1; // 0x4e PushI
	if(var_122_int == 0) goto Label_470; // 0x4f JumpB
	var_123_bool = 0; var_124_object = Obj(); // 0x50 PushV
	var_124_object = var_1_object; // 0x51 MovT
	func_3223(var_124_object); // 0x52 NEW_2
	if(var_123_bool == 0) goto Label_410; // 0x54 JumpB
	var_131_string = ""; // 0x55 PushV
	var_131_string = "Neutral"; // 0x56 MovS
	func_500(var_117_object, var_131_string); // 0x57 NEW_2
	var_148_int = 543180; // 0x59 PushI
	SetMessage(var_148_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_149_bool = 0; // 0x5e PushV
	var_149_bool = 1; // 0x5f MovB
	var_150_bool = 0; // 0x60 PushV
	var_150_bool = 1; // 0x61 MovB
	var_151_bool = 0; var_152_object = Obj(); // 0x62 PushV
	var_152_object = var_1_object; // 0x63 MovT
	func_3235(var_151_bool, var_152_object); // 0x64 NEW_2
	if(var_151_bool == 0) goto Label_109; // 0x66 JumpB
	var_162_bool = 0; var_163_object = Obj(); // 0x67 PushV
	var_163_object = var_1_object; // 0x68 MovT
	func_3245(var_162_bool, var_163_object); // 0x69 NEW_2
	if(var_162_bool == 0) goto Label_109; // 0x6b JumpB
	var_150_bool = 0; // 0x6c MovB
	
Label_109:
	if(var_150_bool == 0) goto Label_116; // 0x6d JumpB
	var_168_bool = 0; var_169_object = Obj(); // 0x6e PushV
	var_169_object = var_1_object; // 0x6f MovT
	func_3255(var_168_bool, var_169_object); // 0x70 NEW_2
	if(var_168_bool == 0) goto Label_116; // 0x72 JumpB
	var_149_bool = 0; // 0x73 MovB
	
Label_116:
	if(var_149_bool == 0) goto Label_122; // 0x74 JumpB
	var_174_int = 543182; // 0x75 PushI
	var_175_int = -1; // 0x76 PushI
	var_176_int = 45638; // 0x77 PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x78 TObjFunc
	
Label_122:
	var_177_bool = 0; // 0x7a PushV
	var_177_bool = 1; // 0x7b MovB
	var_178_bool = 0; // 0x7c PushV
	var_178_bool = 1; // 0x7d MovB
	var_179_bool = 0; // 0x7e PushV
	var_179_bool = 1; // 0x7f MovB
	var_180_bool = 0; var_181_object = Obj(); // 0x80 PushV
	var_181_object = var_1_object; // 0x81 MovT
	func_3235(var_180_bool, var_181_object); // 0x82 NEW_2
	if(var_180_bool == 0) goto Label_139; // 0x84 JumpB
	var_182_bool = 0; var_183_object = Obj(); // 0x85 PushV
	var_183_object = var_1_object; // 0x86 MovT
	func_3245(var_182_bool, var_183_object); // 0x87 NEW_2
	if(var_182_bool == 0) goto Label_139; // 0x89 JumpB
	var_179_bool = 0; // 0x8a MovB
	
Label_139:
	if(var_179_bool == 0) goto Label_146; // 0x8b JumpB
	var_184_bool = 0; var_185_object = Obj(); // 0x8c PushV
	var_185_object = var_1_object; // 0x8d MovT
	func_3255(var_184_bool, var_185_object); // 0x8e NEW_2
	if(var_184_bool == 0) goto Label_146; // 0x90 JumpB
	var_178_bool = 0; // 0x91 MovB
	
Label_146:
	if(var_178_bool == 0) goto Label_153; // 0x92 JumpB
	var_186_bool = 0; var_187_object = Obj(); // 0x93 PushV
	var_187_object = var_1_object; // 0x94 MovT
	func_3265(var_186_bool, var_187_object); // 0x95 NEW_2
	if(var_186_bool == 0) goto Label_153; // 0x97 JumpB
	var_177_bool = 0; // 0x98 MovB
	
Label_153:
	if(var_177_bool == 0) goto Label_159; // 0x99 JumpB
	var_192_int = 543183; // 0x9a PushI
	var_193_int = -1; // 0x9b PushI
	var_194_int = 45639; // 0x9c PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x9d TObjFunc
	
Label_159:
	var_195_bool = 0; // 0x9f PushV
	var_195_bool = 1; // 0xa0 MovB
	var_196_bool = 0; // 0xa1 PushV
	var_196_bool = 1; // 0xa2 MovB
	var_197_bool = 0; // 0xa3 PushV
	var_197_bool = 1; // 0xa4 MovB
	var_198_bool = 0; // 0xa5 PushV
	var_198_bool = 1; // 0xa6 MovB
	var_199_bool = 0; var_200_object = Obj(); // 0xa7 PushV
	var_200_object = var_1_object; // 0xa8 MovT
	func_3265(var_199_bool, var_200_object); // 0xa9 NEW_2
	if(var_199_bool == 0) goto Label_178; // 0xab JumpB
	var_201_bool = 0; var_202_object = Obj(); // 0xac PushV
	var_202_object = var_1_object; // 0xad MovT
	func_3275(var_201_bool, var_202_object); // 0xae NEW_2
	if(var_201_bool == 0) goto Label_178; // 0xb0 JumpB
	var_198_bool = 0; // 0xb1 MovB
	
Label_178:
	if(var_198_bool == 0) goto Label_185; // 0xb2 JumpB
	var_207_bool = 0; var_208_object = Obj(); // 0xb3 PushV
	var_208_object = var_1_object; // 0xb4 MovT
	func_3285(var_207_bool, var_208_object); // 0xb5 NEW_2
	if(var_207_bool == 0) goto Label_185; // 0xb7 JumpB
	var_197_bool = 0; // 0xb8 MovB
	
Label_185:
	if(var_197_bool == 0) goto Label_192; // 0xb9 JumpB
	var_213_bool = 0; var_214_object = Obj(); // 0xba PushV
	var_214_object = var_1_object; // 0xbb MovT
	func_3295(var_213_bool, var_214_object); // 0xbc NEW_2
	if(var_213_bool == 0) goto Label_192; // 0xbe JumpB
	var_196_bool = 0; // 0xbf MovB
	
Label_192:
	if(var_196_bool == 0) goto Label_199; // 0xc0 JumpB
	var_219_bool = 0; var_220_object = Obj(); // 0xc1 PushV
	var_220_object = var_1_object; // 0xc2 MovT
	func_3305(var_219_bool, var_220_object); // 0xc3 NEW_2
	if(var_219_bool == 0) goto Label_199; // 0xc5 JumpB
	var_195_bool = 0; // 0xc6 MovB
	
Label_199:
	if(var_195_bool == 0) goto Label_205; // 0xc7 JumpB
	var_225_int = 543187; // 0xc8 PushI
	var_226_int = -1; // 0xc9 PushI
	var_227_int = 45643; // 0xca PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0xcb TObjFunc
	
Label_205:
	var_228_bool = 0; // 0xcd PushV
	var_228_bool = 1; // 0xce MovB
	var_229_bool = 0; // 0xcf PushV
	var_229_bool = 1; // 0xd0 MovB
	var_230_bool = 0; // 0xd1 PushV
	var_230_bool = 1; // 0xd2 MovB
	var_231_bool = 0; var_232_object = Obj(); // 0xd3 PushV
	var_232_object = var_1_object; // 0xd4 MovT
	func_3315(var_231_bool, var_232_object); // 0xd5 NEW_2
	if(var_231_bool == 0) goto Label_222; // 0xd7 JumpB
	var_237_bool = 0; var_238_object = Obj(); // 0xd8 PushV
	var_238_object = var_1_object; // 0xd9 MovT
	func_3325(var_237_bool, var_238_object); // 0xda NEW_2
	if(var_237_bool == 0) goto Label_222; // 0xdc JumpB
	var_230_bool = 0; // 0xdd MovB
	
Label_222:
	if(var_230_bool == 0) goto Label_229; // 0xde JumpB
	var_243_bool = 0; var_244_object = Obj(); // 0xdf PushV
	var_244_object = var_1_object; // 0xe0 MovT
	func_3335(var_243_bool, var_244_object); // 0xe1 NEW_2
	if(var_243_bool == 0) goto Label_229; // 0xe3 JumpB
	var_229_bool = 0; // 0xe4 MovB
	
Label_229:
	if(var_229_bool == 0) goto Label_236; // 0xe5 JumpB
	var_249_bool = 0; var_250_object = Obj(); // 0xe6 PushV
	var_250_object = var_1_object; // 0xe7 MovT
	func_3345(var_249_bool, var_250_object); // 0xe8 NEW_2
	if(var_249_bool == 0) goto Label_236; // 0xea JumpB
	var_228_bool = 0; // 0xeb MovB
	
Label_236:
	if(var_228_bool == 0) goto Label_242; // 0xec JumpB
	var_255_int = 543208; // 0xed PushI
	var_256_int = -1; // 0xee PushI
	var_257_int = 45664; // 0xef PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0xf0 TObjFunc
	
Label_242:
	var_258_bool = 0; // 0xf2 PushV
	var_258_bool = 1; // 0xf3 MovB
	var_259_bool = 0; // 0xf4 PushV
	var_259_bool = 1; // 0xf5 MovB
	var_260_bool = 0; var_261_object = Obj(); // 0xf6 PushV
	var_261_object = var_1_object; // 0xf7 MovT
	func_3235(var_260_bool, var_261_object); // 0xf8 NEW_2
	if(var_260_bool == 0) goto Label_257; // 0xfa JumpB
	var_262_bool = 0; var_263_object = Obj(); // 0xfb PushV
	var_263_object = var_1_object; // 0xfc MovT
	func_3245(var_262_bool, var_263_object); // 0xfd NEW_2
	if(var_262_bool == 0) goto Label_257; // 0xff JumpB
	var_259_bool = 0; // 0x100 MovB
	
Label_257:
	if(var_259_bool == 0) goto Label_264; // 0x101 JumpB
	var_264_bool = 0; var_265_object = Obj(); // 0x102 PushV
	var_265_object = var_1_object; // 0x103 MovT
	func_3255(var_264_bool, var_265_object); // 0x104 NEW_2
	if(var_264_bool == 0) goto Label_264; // 0x106 JumpB
	var_258_bool = 0; // 0x107 MovB
	
Label_264:
	if(var_258_bool == 0) goto Label_270; // 0x108 JumpB
	var_266_int = 543181; // 0x109 PushI
	var_267_int = -1; // 0x10a PushI
	var_268_int = 45637; // 0x10b PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x10c TObjFunc
	
Label_270:
	var_269_bool = 0; // 0x10e PushV
	var_269_bool = 1; // 0x10f MovB
	var_270_bool = 0; // 0x110 PushV
	var_270_bool = 1; // 0x111 MovB
	var_271_bool = 0; var_272_object = Obj(); // 0x112 PushV
	var_272_object = var_1_object; // 0x113 MovT
	func_3265(var_271_bool, var_272_object); // 0x114 NEW_2
	if(var_271_bool == 0) goto Label_285; // 0x116 JumpB
	var_273_bool = 0; var_274_object = Obj(); // 0x117 PushV
	var_274_object = var_1_object; // 0x118 MovT
	func_3275(var_273_bool, var_274_object); // 0x119 NEW_2
	if(var_273_bool == 0) goto Label_285; // 0x11b JumpB
	var_270_bool = 0; // 0x11c MovB
	
Label_285:
	if(var_270_bool == 0) goto Label_292; // 0x11d JumpB
	var_275_bool = 0; var_276_object = Obj(); // 0x11e PushV
	var_276_object = var_1_object; // 0x11f MovT
	func_3285(var_275_bool, var_276_object); // 0x120 NEW_2
	if(var_275_bool == 0) goto Label_292; // 0x122 JumpB
	var_269_bool = 0; // 0x123 MovB
	
Label_292:
	if(var_269_bool == 0) goto Label_298; // 0x124 JumpB
	var_277_int = 543184; // 0x125 PushI
	var_278_int = -1; // 0x126 PushI
	var_279_int = 45640; // 0x127 PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x128 TObjFunc
	
Label_298:
	var_280_bool = 0; // 0x12a PushV
	var_280_bool = 1; // 0x12b MovB
	var_281_bool = 0; // 0x12c PushV
	var_281_bool = 1; // 0x12d MovB
	var_282_bool = 0; // 0x12e PushV
	var_282_bool = 1; // 0x12f MovB
	var_283_bool = 0; var_284_object = Obj(); // 0x130 PushV
	var_284_object = var_1_object; // 0x131 MovT
	func_3255(var_283_bool, var_284_object); // 0x132 NEW_2
	if(var_283_bool == 0) goto Label_315; // 0x134 JumpB
	var_285_bool = 0; var_286_object = Obj(); // 0x135 PushV
	var_286_object = var_1_object; // 0x136 MovT
	func_3285(var_285_bool, var_286_object); // 0x137 NEW_2
	if(var_285_bool == 0) goto Label_315; // 0x139 JumpB
	var_282_bool = 0; // 0x13a MovB
	
Label_315:
	if(var_282_bool == 0) goto Label_322; // 0x13b JumpB
	var_287_bool = 0; var_288_object = Obj(); // 0x13c PushV
	var_288_object = var_1_object; // 0x13d MovT
	func_3295(var_287_bool, var_288_object); // 0x13e NEW_2
	if(var_287_bool == 0) goto Label_322; // 0x140 JumpB
	var_281_bool = 0; // 0x141 MovB
	
Label_322:
	if(var_281_bool == 0) goto Label_329; // 0x142 JumpB
	var_289_bool = 0; var_290_object = Obj(); // 0x143 PushV
	var_290_object = var_1_object; // 0x144 MovT
	func_3305(var_289_bool, var_290_object); // 0x145 NEW_2
	if(var_289_bool == 0) goto Label_329; // 0x147 JumpB
	var_280_bool = 0; // 0x148 MovB
	
Label_329:
	if(var_280_bool == 0) goto Label_335; // 0x149 JumpB
	var_291_int = 543185; // 0x14a PushI
	var_292_int = -1; // 0x14b PushI
	var_293_int = 45641; // 0x14c PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0x14d TObjFunc
	
Label_335:
	var_294_bool = 0; // 0x14f PushV
	var_294_bool = 1; // 0x150 MovB
	var_295_bool = 0; // 0x151 PushV
	var_295_bool = 1; // 0x152 MovB
	var_296_bool = 0; var_297_object = Obj(); // 0x153 PushV
	var_297_object = var_1_object; // 0x154 MovT
	func_3315(var_296_bool, var_297_object); // 0x155 NEW_2
	if(var_296_bool == 0) goto Label_350; // 0x157 JumpB
	var_298_bool = 0; var_299_object = Obj(); // 0x158 PushV
	var_299_object = var_1_object; // 0x159 MovT
	func_3325(var_298_bool, var_299_object); // 0x15a NEW_2
	if(var_298_bool == 0) goto Label_350; // 0x15c JumpB
	var_295_bool = 0; // 0x15d MovB
	
Label_350:
	if(var_295_bool == 0) goto Label_357; // 0x15e JumpB
	var_300_bool = 0; var_301_object = Obj(); // 0x15f PushV
	var_301_object = var_1_object; // 0x160 MovT
	func_3335(var_300_bool, var_301_object); // 0x161 NEW_2
	if(var_300_bool == 0) goto Label_357; // 0x163 JumpB
	var_294_bool = 0; // 0x164 MovB
	
Label_357:
	if(var_294_bool == 0) goto Label_363; // 0x165 JumpB
	var_302_int = 543186; // 0x166 PushI
	var_303_int = -1; // 0x167 PushI
	var_304_int = 45642; // 0x168 PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0x169 TObjFunc
	
Label_363:
	var_305_bool = 0; // 0x16b PushV
	var_305_bool = 1; // 0x16c MovB
	var_306_bool = 0; // 0x16d PushV
	var_306_bool = 1; // 0x16e MovB
	var_307_bool = 0; // 0x16f PushV
	var_307_bool = 1; // 0x170 MovB
	var_308_bool = 0; // 0x171 PushV
	var_308_bool = 1; // 0x172 MovB
	var_309_bool = 0; var_310_object = Obj(); // 0x173 PushV
	var_310_object = var_1_object; // 0x174 MovT
	func_3285(var_309_bool, var_310_object); // 0x175 NEW_2
	if(var_309_bool == 0) goto Label_382; // 0x177 JumpB
	var_311_bool = 0; var_312_object = Obj(); // 0x178 PushV
	var_312_object = var_1_object; // 0x179 MovT
	func_3305(var_311_bool, var_312_object); // 0x17a NEW_2
	if(var_311_bool == 0) goto Label_382; // 0x17c JumpB
	var_308_bool = 0; // 0x17d MovB
	
Label_382:
	if(var_308_bool == 0) goto Label_389; // 0x17e JumpB
	var_313_bool = 0; var_314_object = Obj(); // 0x17f PushV
	var_314_object = var_1_object; // 0x180 MovT
	func_3315(var_313_bool, var_314_object); // 0x181 NEW_2
	if(var_313_bool == 0) goto Label_389; // 0x183 JumpB
	var_307_bool = 0; // 0x184 MovB
	
Label_389:
	if(var_307_bool == 0) goto Label_396; // 0x185 JumpB
	var_315_bool = 0; var_316_object = Obj(); // 0x186 PushV
	var_316_object = var_1_object; // 0x187 MovT
	func_3345(var_315_bool, var_316_object); // 0x188 NEW_2
	if(var_315_bool == 0) goto Label_396; // 0x18a JumpB
	var_306_bool = 0; // 0x18b MovB
	
Label_396:
	if(var_306_bool == 0) goto Label_403; // 0x18c JumpB
	var_317_bool = 0; var_318_object = Obj(); // 0x18d PushV
	var_318_object = var_1_object; // 0x18e MovT
	func_3325(var_317_bool, var_318_object); // 0x18f NEW_2
	if(var_317_bool == 0) goto Label_403; // 0x191 JumpB
	var_305_bool = 0; // 0x192 MovB
	
Label_403:
	if(var_305_bool == 0) goto Label_409; // 0x193 JumpB
	var_319_int = 543188; // 0x194 PushI
	var_320_int = -1; // 0x195 PushI
	var_321_int = 45644; // 0x196 PushI
	AddReply(var_319_int, var_320_int, var_321_int); // 0x197 TObjFunc
	
Label_409:
	goto Label_470; // 0x199 Jump
	
Label_470:
	var_322_bool = 0; // 0x1d6 PushV
	func_4372(var_322_bool); // 0x1d7 NEW_2
	if(var_322_bool == 0) goto Label_485; // 0x1d9 JumpB
	
Label_474:
	lshWaitForAnimEnd(); // 0x1da Func
	var_323_string = var_3_string; // 0x1dc PushT
	if(var_323_string == 0) goto Label_479; // 0x1dd JumpB
	goto Label_484; // 0x1de Jump
	
Label_484:
	goto Label_499; // 0x1e4 Jump
	
Label_499:
	return 0; // 0x1f3 Return
	
Label_479:
	var_324_string = ""; // 0x1df PushV
	var_324_string = var_2_object; // 0x1e0 MovT
	func_3024(var_324_string); // 0x1e1 NEW_2
	goto Label_474; // 0x1e3 Jump
	
Label_485:
	var_335_string = "all"; // 0x1e5 PushS
	var_336_string = "idle"; // 0x1e6 PushS
	PlayAnimation(var_335_string, var_336_string); // 0x1e7 Func
	
Label_489:
	WaitForAnimEnd(); // 0x1e9 Func
	var_337_string = var_3_string; // 0x1eb PushT
	if(var_337_string == 0) goto Label_494; // 0x1ec JumpB
	goto Label_499; // 0x1ed Jump
	
Label_494:
	var_338_string = "all"; // 0x1ee PushS
	var_339_string = "idle"; // 0x1ef PushS
	PlayAnimation(var_338_string, var_339_string); // 0x1f0 Func
	goto Label_489; // 0x1f2 Jump
	
Label_410:
	var_340_string = ""; // 0x19a PushV
	var_340_string = "Neutral"; // 0x19b MovS
	func_500(var_117_object, var_340_string); // 0x19c NEW_2
	var_341_int = 538167; // 0x19e PushI
	SetMessage(var_341_int); // 0x19f TObjFunc
	ClearReplies(); // 0x1a1 TObjFunc
	var_342_int = 538168; // 0x1a3 PushI
	var_343_int = -1; // 0x1a4 PushI
	var_344_int = 40043; // 0x1a5 PushI
	AddReply(var_342_int, var_343_int, var_344_int); // 0x1a6 TObjFunc
	var_345_bool = 0; // 0x1a8 PushV
	var_345_bool = 0; // 0x1a9 MovB
	var_346_bool = 0; var_347_object = Obj(); // 0x1aa PushV
	var_347_object = var_1_object; // 0x1ab MovT
	func_3235(var_346_bool, var_347_object); // 0x1ac NEW_2
	if(var_346_bool == 0) goto Label_437; // 0x1ae JumpB
	var_348_bool = 0; var_349_object = Obj(); // 0x1af PushV
	var_349_object = var_1_object; // 0x1b0 MovT
	func_3199(var_349_object); // 0x1b1 NEW_2
	if(var_348_bool == 0) goto Label_437; // 0x1b3 JumpB
	var_345_bool = 1; // 0x1b4 MovB
	
Label_437:
	if(var_345_bool == 0) goto Label_443; // 0x1b5 JumpB
	var_354_int = 538169; // 0x1b6 PushI
	var_355_int = 40045; // 0x1b7 PushI
	var_356_int = 40044; // 0x1b8 PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0x1b9 TObjFunc
	
Label_443:
	var_357_bool = 0; // 0x1bb PushV
	var_357_bool = 1; // 0x1bc MovB
	var_358_bool = 0; var_359_object = Obj(); // 0x1bd PushV
	var_359_object = var_1_object; // 0x1be MovT
	func_3199(var_359_object); // 0x1bf NEW_2
	if(var_358_bool == 0) goto Label_456; // 0x1c1 JumpB
	var_360_bool = 0; var_361_object = Obj(); // 0x1c2 PushV
	var_361_object = var_1_object; // 0x1c3 MovT
	func_3211(var_361_object); // 0x1c4 NEW_2
	if(var_360_bool == 0) goto Label_456; // 0x1c6 JumpB
	var_357_bool = 0; // 0x1c7 MovB
	
Label_456:
	if(var_357_bool == 0) goto Label_462; // 0x1c8 JumpB
	var_366_int = 538204; // 0x1c9 PushI
	var_367_int = -1; // 0x1ca PushI
	var_368_int = 40081; // 0x1cb PushI
	AddReply(var_366_int, var_367_int, var_368_int); // 0x1cc TObjFunc
	
Label_462:
	var_369_int = 538205; // 0x1ce PushI
	var_370_int = -1; // 0x1cf PushI
	var_371_int = 40082; // 0x1d0 PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0x1d1 TObjFunc
	goto Label_470; // 0x1d3 Jump
}


func_4168(var_205_object)
{
	var_206_object = Obj(); // 0x1049 PushV
	var_206_object = var_205_object; // 0x104a Mov
	func_4153(var_206_object); // 0x104b NEW_2
	return 0; // 0x104d Return
}


func_4174(var_28_bool)
{
	var_28_bool = 0; // 0x104f MovB
	return 0; // 0x1050 Return
}


func_3153(var_82_float, var_83_cvector)
{
	var_84_float = GetByIndex(var_83_cvector, 0); // 0xc52 PushE
	var_85_float = GetByIndex(var_83_cvector, 0); // 0xc53 PushE
	var_86_float = var_84_float * var_85_float; // 0xc54 Mult
	var_87_float = GetByIndex(var_83_cvector, 2); // 0xc55 PushE
	var_88_float = GetByIndex(var_83_cvector, 2); // 0xc56 PushE
	var_89_float = var_87_float * var_88_float; // 0xc57 Mult
	var_90_int = var_86_float + var_89_float; // 0xc58 Add
	var_82_float = sqrt(var_90_int); // 0xc59 Sqrt2
	return 0; // 0xc5a Return
}


func_4177()
{
	return 0; // 0x1052 Return
}


func_4179()
{
	var_383_object = Obj(); var_384_object = Obj(); var_385_object = Obj(); var_386_object = Obj(); var_387_int = 0; var_388_int = 0; var_389_int = 0; var_390_int = 0; var_391_object = Obj(); var_392_int = 0; var_393_bool = 0; var_394_int = 0; var_395_float = 0; var_396_int = 0; var_397_object = Obj(); var_398_int = 0; var_399_int = 0; var_400_int = 0; var_401_int = 0; var_402_int = 0; var_403_int = 0; var_404_int = 0; var_405_int = 0; var_406_int = 0; var_407_int = 0; var_408_object = Obj(); var_409_object = Obj(); var_410_object = Obj(); var_411_object = Obj(); var_412_object = Obj(); var_413_int = 0; var_414_int = 0; var_415_int = 0; var_416_int = 0; var_417_object = Obj(); var_418_int = 0; var_419_bool = 0; var_420_int = 0; var_421_float = 0; var_422_int = 0; var_423_object = Obj(); var_424_int = 0; var_425_int = 0; var_426_int = 0; var_427_int = 0; var_428_int = 0; var_429_int = 0; var_430_int = 0; var_431_int = 0; var_432_int = 0; var_433_int = 0; var_434_object = Obj(); // 0x1053 PushV
	var_435_object = Obj(); // 0x1054 PushV
	func_3130(var_435_object); // 0x1055 NEW_2
	var_409_object = var_435_object; // 0x1056 Mov
	CreateIntVector(var_410_object); // 0x1058 Func
	CreateIntVector(var_411_object); // 0x105a Func
	CreateIntVector(var_412_object); // 0x105c Func
	GetSubContainerCount(var_413_int); // 0x105e ObjFunc
	var_414_int = 0; // 0x1060 MovI
	
Label_4193:
	var_438_bool = var_414_int < var_413_int; // 0x1061 LT
	if(var_438_bool == 0) goto Label_4265; // 0x1062 JumpB
	GetItemCount(var_415_int, var_414_int); // 0x1063 ObjFunc
	var_416_int = 0; // 0x1065 MovI
	
Label_4198:
	var_439_bool = var_416_int < var_415_int; // 0x1066 LT
	if(var_439_bool == 0) goto Label_4262; // 0x1067 JumpB
	GetItem(var_417_object, var_416_int, var_414_int); // 0x1068 ObjFunc
	GetItemID(var_418_int); // 0x106a ObjFunc
	var_440_string = "HasDurability"; // 0x106c PushS
	HasInvItemProperty(var_419_bool, var_418_int, var_440_string); // 0x106d Func
	var_441_bool = var_419_bool; // 0x106f Push
	if(var_441_bool == 0) goto Label_4258; // 0x1070 JumpB
	var_442_string = "durability"; // 0x1071 PushS
	HasProperty(var_419_bool, var_442_string); // 0x1072 ObjFunc
	var_443_bool = var_419_bool; // 0x1074 Push
	if(var_443_bool == 0) goto Label_4258; // 0x1075 JumpB
	var_444_string = "durability"; // 0x1076 PushS
	GetProperty(var_420_int, var_444_string); // 0x1077 ObjFunc
	var_445_bool = 0; // 0x1079 PushV
	var_445_bool = 0; // 0x107a MovB
	var_446_int = 100; // 0x107b PushI
	var_447_bool = var_420_int < var_446_int; // 0x107c LT
	if(var_447_bool == 0) goto Label_4228; // 0x107d JumpB
	var_448_bool = 0; var_449_object = Obj(); // 0x107e PushV
	var_449_object = var_417_object; // 0x107f Mov
	func_4326(var_449_object); // 0x1080 NEW_2
	if(var_448_bool == 0) goto Label_4228; // 0x1082 JumpB
	var_445_bool = 1; // 0x1083 MovB
	
Label_4228:
	if(var_445_bool == 0) goto Label_4258; // 0x1084 JumpB
	add(var_417_object); // 0x1085 ObjFunc
	add(var_414_int); // 0x1087 ObjFunc
	add(var_416_int); // 0x1089 ObjFunc
	var_460_int = 0; var_461_object = Obj(); var_462_int = 0; // 0x108b PushV
	var_461_object = var_417_object; // 0x108c Mov
	var_462_int = 0; // 0x108d MovI
	func_3467(var_460_int, var_461_object, var_462_int); // 0x108e NEW_2
	var_421_float = var_460_int; // 0x108f Mov
	var_502_float = 1.0; // 0x1091 PushF
	var_503_float = 2.0; // 0x1092 PushF
	var_504_float = var_503_float * var_420_int; // 0x1093 Mult
	var_505_float = 100.0; // 0x1094 PushF
	var_506_float = var_504_float / var_505_float; // 0x1095 Div
	var_507_int = var_502_float + var_506_float; // 0x1096 Add
	var_508_float = var_421_float * var_507_int; // 0x1097 Mult
	var_509_int = 100; // 0x1098 PushI
	var_510_int = var_509_int - var_420_int; // 0x1099 Sub
	var_511_float = var_508_float * var_510_int; // 0x109a Mult
	var_512_int = 300; // 0x109b PushI
	var_422_int = var_511_float / var_511_float; // 0x109c Div2
	var_513_bool = var_422_int == 0; // 0x109d Not
	if(var_513_bool == 0) goto Label_4256; // 0x109e JumpB
	var_422_int = 1; // 0x109f MovI
	
Label_4256:
	add(var_422_int); // 0x10a0 ObjFunc
	
Label_4258:
	var_417_object = 0; // 0x10a2 SetNull
	var_514_int = 1; // 0x10a3 PushI
	var_416_int = var_416_int + var_514_int; // 0x10a4 Add2
	goto Label_4198; // 0x10a5 Jump
	
Label_4262:
	var_515_int = 1; // 0x10a6 PushI
	var_414_int = var_414_int + var_515_int; // 0x10a7 Add2
	goto Label_4193; // 0x10a8 Jump
	
Label_4265:
	CreateIntVector(var_423_object); // 0x10a9 Func
	var_516_string = "repair.xml"; // 0x10ab PushS
	ChooseItem(var_409_object, var_423_object, var_412_object, var_516_string); // 0x10ac Func
	size(var_424_int); // 0x10ae ObjFunc
	var_517_bool = var_424_int == 0; // 0x10b0 Not
	if(var_517_bool == 0) goto Label_4275; // 0x10b1 JumpB
	return 52; // 0x10b2 Return
	
Label_4275:
	var_425_int = 0; // 0x10b3 MovI
	var_426_int = 0; // 0x10b4 MovI
	
Label_4277:
	var_518_bool = var_426_int < var_424_int; // 0x10b5 LT
	if(var_518_bool == 0) goto Label_4287; // 0x10b6 JumpB
	get(var_427_int, var_426_int); // 0x10b7 ObjFunc
	get(var_428_int, var_427_int); // 0x10b9 ObjFunc
	var_425_int = var_425_int + var_428_int; // 0x10bb Add2
	var_519_int = 1; // 0x10bc PushI
	var_426_int = var_426_int + var_519_int; // 0x10bd Add2
	goto Label_4277; // 0x10be Jump
	
Label_4287:
	var_520_string = "money"; // 0x10bf PushS
	GetProperty(var_520_string, var_429_int); // 0x10c0 ObjFunc
	var_429_int = var_429_int - var_425_int; // 0x10c2 Sub2
	var_521_int = 0; // 0x10c3 PushI
	var_522_bool = var_429_int < var_521_int; // 0x10c4 LT
	if(var_522_bool == 0) goto Label_4295; // 0x10c5 JumpB
	return 52; // 0x10c6 Return
	
Label_4295:
	var_523_string = "money"; // 0x10c7 PushS
	SetProperty(var_523_string, var_429_int); // 0x10c8 ObjFunc
	var_430_int = 0; // 0x10ca MovI
	
Label_4299:
	var_524_bool = var_430_int < var_424_int; // 0x10cb LT
	if(var_524_bool == 0) goto Label_4320; // 0x10cc JumpB
	get(var_431_int, var_430_int); // 0x10cd ObjFunc
	get(var_432_int, var_431_int); // 0x10cf ObjFunc
	get(var_433_int, var_431_int); // 0x10d1 ObjFunc
	GetItem(var_434_object, var_433_int, var_432_int); // 0x10d3 ObjFunc
	var_525_string = "durability"; // 0x10d5 PushS
	var_526_int = 100; // 0x10d6 PushI
	SetProperty(var_525_string, var_526_int); // 0x10d7 ObjFunc
	var_527_int = 1; // 0x10d9 PushI
	SetItem(var_434_object, var_527_int, var_433_int, var_432_int); // 0x10da ObjFunc
	var_434_object = 0; // 0x10dc SetNull
	var_528_int = 1; // 0x10dd PushI
	var_430_int = var_430_int + var_528_int; // 0x10de Add2
	goto Label_4299; // 0x10df Jump
	
Label_4320:
	return 52; // 0x10e0 Return
}


func_1623(var_0_object, var_39_object)
{
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_bool = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; // 0x657 PushV
	var_0_object = var_39_object; // 0x658 TMov
	func_1674(var_46_bool); // 0x65a NEW_2
	GetDirection(var_44_cvector); // 0x65c Func
	var_54_cvector = CVector(0,0,0); var_55_object = Obj(); // 0x65e PushV
	var_55_object = var_0_object; // 0x65f MovT
	func_2700(var_55_object); // 0x660 NEW_2
	var_45_cvector = var_54_cvector; // 0x661 Mov
	var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); // 0x663 PushV
	var_61_cvector = var_44_cvector; // 0x664 Mov
	var_62_cvector = var_45_cvector; // 0x665 Mov
	func_3163(var_60_float, var_61_cvector, var_62_cvector); // 0x666 NEW_2
	var_84_int = 0; // 0x668 PushI
	var_85_bool = var_60_float < var_84_int; // 0x669 LT
	if(var_85_bool == 0) goto Label_1649; // 0x66a JumpB
	var_86_object = Obj(); // 0x66b PushV
	var_86_object = var_0_object; // 0x66c MovT
	func_2923(); // 0x66d NEW_2
	var_46_bool = 1; // 0x66f MovB
	goto Label_1652; // 0x670 Jump
	
Label_1652:
	var_95_bool = var_46_bool; // 0x674 Push
	if(var_95_bool == 0) goto Label_1668; // 0x675 JumpB
	var_96_object = Obj(); // 0x676 PushV
	var_96_object = var_0_object; // 0x677 MovT
	func_2923(); // 0x678 NEW_2
	var_97_int = 111; // 0x67a PushI
	var_98_float = 0.5; // 0x67b PushF
	SetTimer(var_97_int, var_98_float); // 0x67c Func
	var_99_float = 5.0; // 0x67e PushF
	Sleep(var_99_float); // 0x67f Func
	var_100_int = 111; // 0x681 PushI
	KillTimer(var_100_int); // 0x682 Func
	
Label_1668:
	StopAsync(); // 0x684 Func
	var_101_string = "head"; // 0x686 PushS
	UnlookAsync(var_101_string); // 0x687 Func
	return 6; // 0x689 Return
	
Label_1649:
	var_102_float = 1.5; // 0x671 PushF
	Sleep(var_102_float, var_46_bool); // 0x672 Func
}


func_3163(var_70_float, var_71_cvector, var_72_cvector)
{
	var_73_float = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); // 0xc5c PushV
	var_74_cvector = var_71_cvector; // 0xc5d Mov
	var_75_cvector = var_72_cvector; // 0xc5e Mov
	func_3144(var_73_float, var_74_cvector, var_75_cvector); // 0xc5f NEW_2
	var_82_float = 0; var_83_cvector = CVector(0,0,0); // 0xc61 PushV
	var_83_cvector = var_71_cvector; // 0xc62 Mov
	func_3153(var_82_float, var_83_cvector); // 0xc63 NEW_2
	var_91_float = 0; var_92_cvector = CVector(0,0,0); // 0xc65 PushV
	var_92_cvector = var_72_cvector; // 0xc66 Mov
	func_3153(var_91_float, var_92_cvector); // 0xc67 NEW_2
	var_93_float = var_82_float * var_91_float; // 0xc69 Mult
	var_70_float = var_73_float / var_73_float; // 0xc6a Div2
	return 0; // 0xc6b Return
}


func_2150(var_0_object, var_1_object, var_2_object, var_112_object)
{
	var_116_cvector = CVector(0,0,0); var_117_float = 0; var_118_bool = 0; var_119_cvector = CVector(0,0,0); var_120_float = 0; var_121_cvector = CVector(0,0,0); var_122_float = 0; var_123_bool = 0; var_124_cvector = CVector(0,0,0); var_125_float = 0; // 0x866 PushV
	var_0_object = var_112_object; // 0x867 TMov
	var_126_cvector = CVector(0,0,0); var_127_float = 0; // 0x868 PushV
	var_127_float = 1.74533; // 0x869 MovF
	func_2120(var_126_cvector, var_127_float); // 0x86a NEW_2
	var_121_cvector = var_126_cvector; // 0x86b Mov
	var_122_float = var_121_cvector | var_121_cvector; // 0x86d Or2
	var_156_float = 2500.0; // 0x86e PushF
	var_157_bool = var_122_float < var_156_float; // 0x86f LT
	if(var_157_bool == 0) goto Label_2179; // 0x870 JumpB
	var_158_cvector = CVector(0,0,0); var_159_float = 0; // 0x871 PushV
	var_159_float = 2.61799; // 0x872 MovF
	func_2120(var_158_cvector, var_159_float); // 0x873 NEW_2
	var_121_cvector = var_158_cvector; // 0x874 Mov
	var_122_float = var_121_cvector | var_121_cvector; // 0x876 Or2
	var_160_float = 2500.0; // 0x877 PushF
	var_161_bool = var_122_float < var_160_float; // 0x878 LT
	if(var_161_bool == 0) goto Label_2179; // 0x879 JumpB
	var_162_string = "Can't retreat, distance: "; // 0x87a PushS
	var_163_float = sqrt(var_122_float); // 0x87b Sqrt
	var_164_int = var_162_string + var_163_float; // 0x87c Add
	Trace(var_164_int); // 0x87d Func
	var_165_float = 0.5; // 0x87f PushF
	Sleep(var_165_float); // 0x880 Func
	return 10; // 0x882 Return
	
Label_2179:
	var_166_float = GetByIndex(var_121_cvector, 0); // 0x883 PushE
	var_167_float = GetByIndex(var_121_cvector, 2); // 0x884 PushE
	Rotate(var_166_float, var_167_float); // 0x885 Func
	var_168_cvector = CVector(0,0,0); // 0x887 PushV
	func_2695(var_168_cvector); // 0x888 NEW_2
	var_1_object = var_168_cvector + var_121_cvector; // 0x88a Add2
	var_171_int = 120; // 0x88b PushI
	var_172_float = 0.5; // 0x88c PushF
	SetTimer(var_171_int, var_172_float); // 0x88d Func
	var_2_object = 0; // 0x88f TMovB
	
Label_2192:
	var_173_int = 1; // 0x890 PushI
	MovePoint(var_173_int, var_173_int, var_123_bool); // 0x891 Func
	var_174_bool = var_123_bool; // 0x893 Push
	if(var_174_bool == 0) goto Label_2220; // 0x894 JumpB
	var_175_bool = var_0_object == 0; // 0x895 NullEq
	if(var_175_bool == 0) goto Label_2201; // 0x896 JumpB
	goto Label_2222; // 0x897 Jump
	
Label_2222:
	return 10; // 0x8ae Return
	
Label_2201:
	var_176_cvector = CVector(0,0,0); var_177_float = 0; // 0x899 PushV
	var_177_float = 2.61799; // 0x89a MovF
	func_2120(var_176_cvector, var_177_float); // 0x89b NEW_2
	var_124_cvector = var_176_cvector; // 0x89c Mov
	var_125_float = var_124_cvector | var_124_cvector; // 0x89e Or2
	var_178_float = 2500.0; // 0x89f PushF
	var_179_bool = var_125_float >= var_178_float; // 0x8a0 GE
	if(var_179_bool == 0) goto Label_2219; // 0x8a1 JumpB
	var_180_cvector = CVector(0,0,0); // 0x8a2 PushV
	func_2695(var_180_cvector); // 0x8a3 NEW_2
	var_1_object = var_180_cvector + var_124_cvector; // 0x8a5 Add2
	var_181_int = 120; // 0x8a6 PushI
	var_182_float = 0.5; // 0x8a7 PushF
	SetTimer(var_181_int, var_182_float); // 0x8a8 Func
	goto Label_2220; // 0x8aa Jump
	
Label_2220:
	var_183_bool = var_2_object == 0; // 0x8ac Not
	if(var_183_bool == 0) goto Label_2192; // 0x8ad JumpB
	
Label_2219:
	goto Label_2222; // 0x8ab Jump
}


func_2663(var_2_object)
{
	Stop(); // 0xa67 Func
	var_21_int = 120; // 0xa69 PushI
	KillTimer(var_21_int); // 0xa6a Func
	var_2_object = 1; // 0xa6c TMovB
	return 0; // 0xa6d Return
}


func_3180(var_125_int, var_126_string)
{
	var_127_int = 0; var_128_int = 0; // 0xc6c PushV
	GetVariable(var_126_string, var_128_int); // 0xc6d Func
	var_125_int = var_128_int; // 0xc6f Mov
	return 2; // 0xc70 Return
}


func_3185(var_35_int)
{
	var_36_float = 0; var_37_float = 0; // 0xc71 PushV
	GetGameTime(var_37_float); // 0xc72 Func
	var_38_int = 1; // 0xc74 PushI
	var_39_int = 0; // 0xc75 PushV
	var_40_int = 24; // 0xc76 PushI
	var_39_int = var_37_float / var_37_float; // 0xc77 Div2
	var_35_int = var_38_int + var_39_int; // 0xc78 Add2
	return 2; // 0xc79 Return
}


func_2679(var_0_object, var_72_bool)
{
	var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); // 0xa77 PushV
	GetDirection(var_75_cvector); // 0xa78 Func
	var_77_cvector = CVector(0,0,0); var_78_object = Obj(); // 0xa7a PushV
	var_78_object = var_0_object; // 0xa7b MovT
	func_2700(var_78_object); // 0xa7c NEW_2
	var_76_cvector = var_77_cvector; // 0xa7d Mov
	var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); // 0xa7f PushV
	var_84_cvector = var_75_cvector; // 0xa80 Mov
	var_85_cvector = var_76_cvector; // 0xa81 Mov
	func_3136(var_83_float, var_84_cvector, var_85_cvector); // 0xa82 NEW_2
	var_91_float = -0.34202; // 0xa84 PushF
	var_72_bool = var_83_float >= var_91_float; // 0xa85 GE2
	return 4; // 0xa86 Return
}


func_3194()
{
	var_28_int = 100; // 0xc7b PushI
	SetReturnValue(var_28_int); // 0xc7c ObjFunc
	return 0; // 0xc7e Return
}


func_3199(var_348_bool)
{
	var_350_int = 0; var_351_string = ""; // 0xc80 PushV
	var_351_string = "branch"; // 0xc81 MovS
	func_3180(var_350_int, var_351_string); // 0xc82 NEW_2
	var_352_int = 0; // 0xc84 PushI
	var_353_bool = var_350_int == var_352_int; // 0xc85 Eq
	if(var_353_bool == 0) goto Label_3209; // 0xc86 JumpB
	var_348_bool = 1; // 0xc87 MovB
	return 0; // 0xc88 Return
	
Label_3209:
	var_348_bool = 0; // 0xc89 MovB
	return 0; // 0xc8a Return
}


func_2695(var_92_cvector)
{
	var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); // 0xa87 PushV
	GetPosition(var_94_cvector); // 0xa88 Func
	var_92_cvector = var_94_cvector; // 0xa8a Mov
	return 2; // 0xa8b Return
}


func_1674(var_0_object)
{
	var_47_object = Obj(); // 0x68a PushV
	var_47_object = var_0_object; // 0x68b MovT
	func_3055(var_47_object); // 0x68c NEW_2
	return 0; // 0x68e Return
}


func_3211(var_360_bool)
{
	var_362_int = 0; var_363_string = ""; // 0xc8c PushV
	var_363_string = "branch"; // 0xc8d MovS
	func_3180(var_362_int, var_363_string); // 0xc8e NEW_2
	var_364_int = 1; // 0xc90 PushI
	var_365_bool = var_362_int == var_364_int; // 0xc91 Eq
	if(var_365_bool == 0) goto Label_3221; // 0xc92 JumpB
	var_360_bool = 1; // 0xc93 MovB
	return 0; // 0xc94 Return
	
Label_3221:
	var_360_bool = 0; // 0xc95 MovB
	return 0; // 0xc96 Return
}


func_2700(var_54_cvector)
{
	var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); // 0xa8c PushV
	GetPosition(var_58_cvector); // 0xa8d Func
	GetPosition(var_59_cvector); // 0xa8f ObjFunc
	var_54_cvector = var_59_cvector - var_58_cvector; // 0xa91 Sub2
	return 4; // 0xa92 Return
}


func_2707(var_40_float)
{
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); // 0xa93 PushV
	GetPosition(var_45_cvector); // 0xa94 Func
	GetPosition(var_46_cvector); // 0xa96 ObjFunc
	var_47_cvector = var_46_cvector - var_45_cvector; // 0xa98 Sub2
	var_40_float = var_47_cvector | var_47_cvector; // 0xa99 Or2
	return 6; // 0xa9a Return
}


func_3223(var_123_bool)
{
	var_125_int = 0; var_126_string = ""; // 0xc98 PushV
	var_126_string = "branch"; // 0xc99 MovS
	func_3180(var_125_int, var_126_string); // 0xc9a NEW_2
	var_129_int = 2; // 0xc9c PushI
	var_130_bool = var_125_int == var_129_int; // 0xc9d Eq
	if(var_130_bool == 0) goto Label_3233; // 0xc9e JumpB
	var_123_bool = 1; // 0xc9f MovB
	return 0; // 0xca0 Return
	
Label_3233:
	var_123_bool = 0; // 0xca1 MovB
	return 0; // 0xca2 Return
}


func_1176(var_22_object)
{
	EventDisable(0); // 0x499 EventDisable
	var_23_object = Obj(); // 0x49a PushV
	var_23_object = var_22_object; // 0x49b Mov
	func_1209(var_23_object); // 0x49c NEW_2
	var_103_object = Obj(); // 0x49e PushV
	var_103_object = var_22_object; // 0x49f Mov
	func_4448(var_103_object); // 0x4a0 NEW_2
	EventEnable(0); // 0x4a2 EventEnable
	
Label_1187:
	Hold(); // 0x4a3 Func
	goto Label_1187; // 0x4a5 Jump
}


func_2715(var_104_bool, var_105_object)
{
	var_106_bool = 0; var_107_bool = 0; // 0xa9b PushV
	IsPlayerActor(var_105_object, var_107_bool); // 0xa9c Func
	var_104_bool = var_107_bool; // 0xa9e Mov
	return 2; // 0xa9f Return
}


func_2720(var_49_bool, var_50_object, var_51_string)
{
	var_52_bool = 0; var_53_bool = 0; // 0xaa0 PushV
	var_54_string = "HasProperty"; // 0xaa1 PushS
	var_55_int = 2; // 0xaa2 PushI
	var_56_bool = IsFuncExist(var_50_object, var_54_string, var_55_int); // 0xaa3 FuncExist
	var_57_bool = var_56_bool == 0; // 0xaa4 Not
	if(var_57_bool == 0) goto Label_2728; // 0xaa5 JumpB
	var_49_bool = 0; // 0xaa6 MovB
	return 2; // 0xaa7 Return
	
Label_2728:
	HasProperty(var_51_string, var_53_bool); // 0xaa8 ObjFunc
	var_49_bool = var_53_bool; // 0xaaa Mov
	return 2; // 0xaab Return
}


func_3235(var_151_bool, var_152_object)
{
	var_153_bool = 0; var_154_object = Obj(); // 0xca4 PushV
	var_154_object = var_152_object; // 0xca5 Mov
	func_3355(var_154_object); // 0xca6 NEW_2
	if(var_153_bool == 0) goto Label_3243; // 0xca8 JumpB
	var_151_bool = 1; // 0xca9 MovB
	return 0; // 0xcaa Return
	
Label_3243:
	var_151_bool = 0; // 0xcab MovB
	return 0; // 0xcac Return
}


func_2732(var_42_bool)
{
	var_44_bool = 0; var_45_bool = 0; // 0xaac PushV
	IsDead(var_45_bool); // 0xaad ObjFunc
	var_42_bool = var_45_bool; // 0xaaf Mov
	return 2; // 0xab0 Return
}


func_3245(var_162_bool, var_163_object)
{
	var_164_bool = 0; var_165_object = Obj(); // 0xcae PushV
	var_165_object = var_163_object; // 0xcaf Mov
	func_3362(var_165_object); // 0xcb0 NEW_2
	if(var_164_bool == 0) goto Label_3253; // 0xcb2 JumpB
	var_162_bool = 1; // 0xcb3 MovB
	return 0; // 0xcb4 Return
	
Label_3253:
	var_162_bool = 0; // 0xcb5 MovB
	return 0; // 0xcb6 Return
}


func_2737(var_31_bool, var_32_object)
{
	var_33_object = Obj(); var_34_object = Obj(); var_35_object = Obj(); var_36_object = Obj(); // 0xab1 PushV
	var_37_bool = var_32_object == 0; // 0xab2 NullEq
	if(var_37_bool == 0) goto Label_2742; // 0xab3 JumpB
	var_31_bool = 0; // 0xab4 MovB
	return 4; // 0xab5 Return
	
Label_2742:
	var_38_bool = 0; // 0xab6 PushV
	var_38_bool = 0; // 0xab7 MovB
	var_39_string = "IsDead"; // 0xab8 PushS
	var_40_int = 1; // 0xab9 PushI
	var_41_bool = IsFuncExist(var_32_object, var_39_string, var_40_int); // 0xaba FuncExist
	if(var_41_bool == 0) goto Label_2754; // 0xabb JumpB
	var_42_bool = 0; var_43_object = Obj(); // 0xabc PushV
	var_43_object = var_32_object; // 0xabd Mov
	func_2732(var_43_object); // 0xabe NEW_2
	if(var_42_bool == 0) goto Label_2754; // 0xac0 JumpB
	var_38_bool = 1; // 0xac1 MovB
	
Label_2754:
	if(var_38_bool == 0) goto Label_2757; // 0xac2 JumpB
	var_31_bool = 0; // 0xac3 MovB
	return 4; // 0xac4 Return
	
Label_2757:
	GetScene(var_35_object); // 0xac5 Func
	var_46_bool = var_35_object == 0; // 0xac7 NullEq
	if(var_46_bool == 0) goto Label_2763; // 0xac8 JumpB
	var_31_bool = 0; // 0xac9 MovB
	return 4; // 0xaca Return
	
Label_2763:
	GetScene(var_36_object); // 0xacb ObjFunc
	var_47_bool = var_35_object != var_36_object; // 0xacd Neq
	if(var_47_bool == 0) goto Label_2769; // 0xace JumpB
	var_31_bool = 0; // 0xacf MovB
	return 4; // 0xad0 Return
	
Label_2769:
	var_31_bool = 1; // 0xad1 MovB
	return 4; // 0xad2 Return
}


func_3255(var_168_bool, var_169_object)
{
	var_170_bool = 0; var_171_object = Obj(); // 0xcb8 PushV
	var_171_object = var_169_object; // 0xcb9 Mov
	func_3369(var_171_object); // 0xcba NEW_2
	if(var_170_bool == 0) goto Label_3263; // 0xcbc JumpB
	var_168_bool = 1; // 0xcbd MovB
	return 0; // 0xcbe Return
	
Label_3263:
	var_168_bool = 0; // 0xcbf MovB
	return 0; // 0xcc0 Return
}


func_1209(var_23_object)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_string = ""; var_29_object = Obj(); var_30_bool = 0; var_31_bool = 0; var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_string = ""; var_39_object = Obj(); var_40_bool = 0; var_41_bool = 0; var_42_float = 0; var_43_cvector = CVector(0,0,0); // 0x4b9 PushV
	var_44_bool = var_23_object == 0; // 0x4ba NullEq
	if(var_44_bool == 0) goto Label_1217; // 0x4bb JumpB
	var_45_string = ""; // 0x4bc PushV
	var_45_string = "fdie"; // 0x4bd MovS
	func_1300(var_45_string); // 0x4be NEW_2
	goto Label_1299; // 0x4c0 Jump
	
Label_1299:
	return 20; // 0x513 Return
	
Label_1217:
	GetPosition(var_34_cvector); // 0x4c1 ObjFunc
	GetPosition(var_35_cvector); // 0x4c3 Func
	GetDirection(var_36_cvector); // 0x4c5 Func
	var_37_cvector = var_35_cvector - var_34_cvector; // 0x4c7 Sub2
	var_77_float = GetByIndex(var_37_cvector, 0); // 0x4c8 PushE
	var_78_float = GetByIndex(var_36_cvector, 0); // 0x4c9 PushE
	var_79_float = var_77_float * var_78_float; // 0x4ca Mult
	var_80_float = GetByIndex(var_37_cvector, 2); // 0x4cb PushE
	var_81_float = GetByIndex(var_36_cvector, 2); // 0x4cc PushE
	var_82_float = var_80_float * var_81_float; // 0x4cd Mult
	var_83_int = var_79_float + var_82_float; // 0x4ce Add
	var_84_int = 0; // 0x4cf PushI
	var_85_bool = var_83_int >= var_84_int; // 0x4d0 GE
	if(var_85_bool == 0) goto Label_1236; // 0x4d1 JumpB
	var_38_string = "fdie"; // 0x4d2 MovS
	goto Label_1237; // 0x4d3 Jump
	
Label_1237:
	RemoveRTEnvelope(); // 0x4d5 Func
	SetDeathState(); // 0x4d7 Func
	Stop(); // 0x4d9 Func
	StopAsync(); // 0x4db Func
	var_39_object = var_23_object; // 0x4dd Mov
	var_86_string = "GetScriptProperty"; // 0x4de PushS
	var_87_int = 2; // 0x4df PushI
	var_88_bool = IsFuncExist(var_23_object, var_86_string, var_87_int); // 0x4e0 FuncExist
	if(var_88_bool == 0) goto Label_1261; // 0x4e1 JumpB
	var_89_string = "Owner"; // 0x4e2 PushS
	HasScriptProperty(var_40_bool, var_89_string); // 0x4e3 ObjFunc
	var_90_bool = var_40_bool; // 0x4e5 Push
	if(var_90_bool == 0) goto Label_1261; // 0x4e6 JumpB
	var_91_string = "Owner"; // 0x4e7 PushS
	GetScriptProperty(var_39_object, var_91_string); // 0x4e8 ObjFunc
	var_92_bool = var_39_object == 0; // 0x4ea NullEq
	if(var_92_bool == 0) goto Label_1261; // 0x4eb JumpB
	var_39_object = var_23_object; // 0x4ec Mov
	
Label_1261:
	var_93_string = "@GetEyesHeight"; // 0x4ed PushS
	var_94_int = 1; // 0x4ee PushI
	var_95_bool = IsFuncExist(var_39_object, var_93_string, var_94_int); // 0x4ef FuncExist
	if(var_95_bool == 0) goto Label_1276; // 0x4f0 JumpB
	GetEyesHeight(var_42_float); // 0x4f1 ObjFunc
	var_43_cvector = CVector(0.0, 0.0, 0.0); // 0x4f3 MovV
	var_96_float = GetByIndex(var_43_cvector, 1); // 0x4f4 PushE
	var_96_float = var_42_float; // 0x4f5 Mov
	SetByIndex(var_43_cvector, 1) = var_96_float; // 0x4f6 PopE
	var_97_string = "head"; // 0x4f7 PushS
	LookAsync(var_23_object, var_97_string, var_43_cvector); // 0x4f8 Func
	var_41_bool = 1; // 0x4fa MovB
	goto Label_1277; // 0x4fb Jump
	
Label_1277:
	var_98_string = ""; // 0x4fd PushV
	var_98_string = var_38_string; // 0x4fe Mov
	func_3073(var_98_string); // 0x4ff NEW_2
	var_99_string = "all"; // 0x501 PushS
	PlayAnimation(var_99_string, var_38_string); // 0x502 Func
	WaitForAnimEnd(); // 0x504 Func
	var_100_bool = var_41_bool; // 0x506 Push
	if(var_100_bool == 0) goto Label_1293; // 0x507 JumpB
	StopAsync(); // 0x508 Func
	var_101_string = "head"; // 0x50a PushS
	UnlookAsync(var_101_string); // 0x50b Func
	
Label_1293:
	var_102_string = "all"; // 0x50d PushS
	LockAnimationEnd(var_102_string, var_38_string); // 0x50e Func
	RemoveEnvelope(); // 0x510 Func
	var_39_object = 0; // 0x512 SetNull
	
Label_1276:
	var_41_bool = 0; // 0x4fc MovB
	
Label_1236:
	var_38_string = "bdie"; // 0x4d4 MovS
}


func_3265(var_186_bool, var_187_object)
{
	var_188_bool = 0; var_189_object = Obj(); // 0xcc2 PushV
	var_189_object = var_187_object; // 0xcc3 Mov
	func_3376(var_189_object); // 0xcc4 NEW_2
	if(var_188_bool == 0) goto Label_3273; // 0xcc6 JumpB
	var_186_bool = 1; // 0xcc7 MovB
	return 0; // 0xcc8 Return
	
Label_3273:
	var_186_bool = 0; // 0xcc9 MovB
	return 0; // 0xcca Return
}


func_3275(var_201_bool, var_202_object)
{
	var_203_bool = 0; var_204_object = Obj(); // 0xccc PushV
	var_204_object = var_202_object; // 0xccd Mov
	func_3383(var_204_object); // 0xcce NEW_2
	if(var_203_bool == 0) goto Label_3283; // 0xcd0 JumpB
	var_201_bool = 1; // 0xcd1 MovB
	return 0; // 0xcd2 Return
	
Label_3283:
	var_201_bool = 0; // 0xcd3 MovB
	return 0; // 0xcd4 Return
}


func_3791(var_53_int, var_54_string)
{
	var_55_int = 0; var_56_int = 0; // 0xecf PushV
	GetInvItemByName(var_56_int, var_54_string); // 0xed0 Func
	var_53_int = var_56_int; // 0xed2 Mov
	return 2; // 0xed3 Return
}


func_3796(var_21_object)
{
	var_22_object = Obj(); // 0xed5 PushV
	var_22_object = var_21_object; // 0xed6 Mov
	TaskCall(2); // 0xed7 TaskCall
	func_1176(var_22_object); // 0xed8 NEW_2
	TaskReturn(); // 0xed9 TaskReturn
	return 0; // 0xedb Return
}


func_3285(var_207_bool, var_208_object)
{
	var_209_bool = 0; var_210_object = Obj(); // 0xcd6 PushV
	var_210_object = var_208_object; // 0xcd7 Mov
	func_3390(var_210_object); // 0xcd8 NEW_2
	if(var_209_bool == 0) goto Label_3293; // 0xcda JumpB
	var_207_bool = 1; // 0xcdb MovB
	return 0; // 0xcdc Return
	
Label_3293:
	var_207_bool = 0; // 0xcdd MovB
	return 0; // 0xcde Return
}


func_2773(var_27_bool, var_28_object)
{
	var_29_int = 0; var_30_int = 0; // 0xad5 PushV
	var_31_bool = 0; var_32_object = Obj(); // 0xad6 PushV
	var_32_object = var_28_object; // 0xad7 Mov
	func_2737(var_31_bool, var_32_object); // 0xad8 NEW_2
	var_48_bool = var_31_bool == 0; // 0xada Not
	if(var_48_bool == 0) goto Label_2782; // 0xadb JumpB
	var_27_bool = 0; // 0xadc MovB
	return 2; // 0xadd Return
	
Label_2782:
	var_49_bool = 0; var_50_object = Obj(); var_51_string = ""; // 0xade PushV
	var_50_object = var_28_object; // 0xadf Mov
	var_51_string = "noaccess"; // 0xae0 MovS
	func_2720(var_49_bool, var_50_object, var_51_string); // 0xae1 NEW_2
	var_58_bool = var_49_bool == 0; // 0xae3 Not
	if(var_58_bool == 0) goto Label_2791; // 0xae4 JumpB
	var_27_bool = 1; // 0xae5 MovB
	return 2; // 0xae6 Return
	
Label_2791:
	var_59_string = "noaccess"; // 0xae7 PushS
	GetProperty(var_59_string, var_30_int); // 0xae8 ObjFunc
	var_60_int = 0; // 0xaea PushI
	var_27_bool = var_30_int == var_60_int; // 0xaeb Eq2
	return 2; // 0xaec Return
}


func_3295(var_213_bool, var_214_object)
{
	var_215_bool = 0; var_216_object = Obj(); // 0xce0 PushV
	var_216_object = var_214_object; // 0xce1 Mov
	func_3397(var_216_object); // 0xce2 NEW_2
	if(var_215_bool == 0) goto Label_3303; // 0xce4 JumpB
	var_213_bool = 1; // 0xce5 MovB
	return 0; // 0xce6 Return
	
Label_3303:
	var_213_bool = 0; // 0xce7 MovB
	return 0; // 0xce8 Return
}


func_2275(var_2_object)
{
	Stop(); // 0x8e3 Func
	var_21_int = 120; // 0x8e5 PushI
	KillTimer(var_21_int); // 0x8e6 Func
	var_2_object = 1; // 0x8e8 TMovB
	return 0; // 0x8e9 Return
}


func_4326(var_448_bool)
{
	var_450_int = 0; var_451_bool = 0; var_452_int = 0; var_453_int = 0; var_454_bool = 0; var_455_int = 0; // 0x10e6 PushV
	GetItemID(var_453_int); // 0x10e7 ObjFunc
	var_456_string = "Category"; // 0x10e9 PushS
	HasInvItemProperty(var_454_bool, var_453_int, var_456_string); // 0x10ea Func
	var_457_bool = var_454_bool == 0; // 0x10ec Not
	if(var_457_bool == 0) goto Label_4336; // 0x10ed JumpB
	var_448_bool = 0; // 0x10ee MovB
	return 6; // 0x10ef Return
	
Label_4336:
	var_458_string = "Category"; // 0x10f0 PushS
	GetInvItemProperty(var_455_int, var_453_int, var_458_string); // 0x10f1 Func
	var_459_int = 1; // 0x10f3 PushI
	var_448_bool = var_455_int == var_459_int; // 0x10f4 Eq2
	return 6; // 0x10f5 Return
}


func_3305(var_219_bool, var_220_object)
{
	var_221_bool = 0; var_222_object = Obj(); // 0xcea PushV
	var_222_object = var_220_object; // 0xceb Mov
	func_3404(var_222_object); // 0xcec NEW_2
	if(var_221_bool == 0) goto Label_3313; // 0xcee JumpB
	var_219_bool = 1; // 0xcef MovB
	return 0; // 0xcf0 Return
	
Label_3313:
	var_219_bool = 0; // 0xcf1 MovB
	return 0; // 0xcf2 Return
}


func_2797(var_37_object)
{
	var_38_bool = 0; var_39_int = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_string = ""; var_45_bool = 0; var_46_int = 0; var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_string = ""; // 0xaed PushV
	var_52_bool = var_37_object == 0; // 0xaee NullEq
	if(var_52_bool == 0) goto Label_2801; // 0xaef JumpB
	return 14; // 0xaf0 Return
	
Label_2801:
	IsDead(var_45_bool); // 0xaf1 Func
	var_53_bool = var_45_bool; // 0xaf3 Push
	if(var_53_bool == 0) goto Label_2806; // 0xaf4 JumpB
	return 14; // 0xaf5 Return
	
Label_2806:
	GetSecondaryAnimationType(var_46_int); // 0xaf6 Func
	var_54_int = 0; // 0xaf8 PushI
	var_55_bool = var_46_int < var_54_int; // 0xaf9 LT
	if(var_55_bool == 0) goto Label_2812; // 0xafa JumpB
	return 14; // 0xafb Return
	
Label_2812:
	GetPosition(var_47_cvector); // 0xafc ObjFunc
	GetPosition(var_48_cvector); // 0xafe Func
	GetDirection(var_49_cvector); // 0xb00 Func
	var_50_cvector = var_48_cvector - var_47_cvector; // 0xb02 Sub2
	var_56_float = GetByIndex(var_50_cvector, 0); // 0xb03 PushE
	var_57_float = GetByIndex(var_49_cvector, 0); // 0xb04 PushE
	var_58_float = var_56_float * var_57_float; // 0xb05 Mult
	var_59_float = GetByIndex(var_50_cvector, 2); // 0xb06 PushE
	var_60_float = GetByIndex(var_49_cvector, 2); // 0xb07 PushE
	var_61_float = var_59_float * var_60_float; // 0xb08 Mult
	var_62_int = var_58_float + var_61_float; // 0xb09 Add
	var_63_int = 0; // 0xb0a PushI
	var_64_bool = var_62_int >= var_63_int; // 0xb0b GE
	if(var_64_bool == 0) goto Label_2831; // 0xb0c JumpB
	var_51_string = "fhit"; // 0xb0d MovS
	goto Label_2832; // 0xb0e Jump
	
Label_2832:
	var_65_string = "hit_react"; // 0xb10 PushS
	var_66_string = "1"; // 0xb11 PushS
	var_67_int = var_51_string + var_66_string; // 0xb12 Add
	var_68_string = "2"; // 0xb13 PushS
	var_69_int = var_51_string + var_68_string; // 0xb14 Add
	var_70_int = -10; // 0xb15 PushI
	FadeSecondaryAnimation(var_65_string, var_67_int, var_69_int, var_70_int); // 0xb16 Func
	return 14; // 0xb18 Return
	
Label_2831:
	var_51_string = "bhit"; // 0xb0f MovS
}


func_3315(var_231_bool, var_232_object)
{
	var_233_bool = 0; var_234_object = Obj(); // 0xcf4 PushV
	var_234_object = var_232_object; // 0xcf5 Mov
	func_3411(var_234_object); // 0xcf6 NEW_2
	if(var_233_bool == 0) goto Label_3323; // 0xcf8 JumpB
	var_231_bool = 1; // 0xcf9 MovB
	return 0; // 0xcfa Return
	
Label_3323:
	var_231_bool = 0; // 0xcfb MovB
	return 0; // 0xcfc Return
}


func_2291(var_0_object, var_72_bool)
{
	var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); // 0x8f3 PushV
	GetDirection(var_75_cvector); // 0x8f4 Func
	var_77_cvector = CVector(0,0,0); var_78_object = Obj(); // 0x8f6 PushV
	var_78_object = var_0_object; // 0x8f7 MovT
	func_2700(var_78_object); // 0x8f8 NEW_2
	var_76_cvector = var_77_cvector; // 0x8f9 Mov
	var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); // 0x8fb PushV
	var_84_cvector = var_75_cvector; // 0x8fc Mov
	var_85_cvector = var_76_cvector; // 0x8fd Mov
	func_3136(var_83_float, var_84_cvector, var_85_cvector); // 0x8fe NEW_2
	var_91_float = -0.34202; // 0x900 PushF
	var_72_bool = var_83_float >= var_91_float; // 0x901 GE2
	return 4; // 0x902 Return
}


func_4342(var_44_object, var_47_object)
{
	var_45_int = 0; var_46_object = Obj(); // 0x10f7 PushV
	var_46_object = var_44_object; // 0x10f8 Mov
	TaskCall(0); // 0x10f9 TaskCall
	func_0(var_47_object, var_45_int, var_46_object); // 0x10fa NEW_2
	TaskReturn(); // 0x10fb TaskReturn
	var_380_int = 100; // 0x10fd PushI
	var_381_bool = var_47_object == var_380_int; // 0x10fe Eq
	if(var_381_bool == 0) goto Label_4356; // 0x10ff JumpB
	var_382_object = Obj(); // 0x1100 PushV
	var_382_object = var_44_object; // 0x1101 Mov
	func_4179(); // 0x1102 NEW_2
	
Label_4356:
	return 0; // 0x1104 Return
}


func_3325(var_237_bool, var_238_object)
{
	var_239_bool = 0; var_240_object = Obj(); // 0xcfe PushV
	var_240_object = var_238_object; // 0xcff Mov
	func_3418(var_240_object); // 0xd00 NEW_2
	if(var_239_bool == 0) goto Label_3333; // 0xd02 JumpB
	var_237_bool = 1; // 0xd03 MovB
	return 0; // 0xd04 Return
	
Label_3333:
	var_237_bool = 0; // 0xd05 MovB
	return 0; // 0xd06 Return
}


func_3841(var_24_bool, var_25_object, var_26_string)
{
	var_27_string = "unholster"; // 0xf02 PushS
	var_28_bool = var_26_string == var_27_string; // 0xf03 Eq
	if(var_28_bool == 0) goto Label_3852; // 0xf04 JumpB
	var_29_bool = 0; var_30_object = Obj(); // 0xf05 PushV
	var_30_object = var_25_object; // 0xf06 Mov
	func_4125(var_29_bool, var_30_object); // 0xf07 NEW_2
	var_24_bool = var_29_bool; // 0xf08 Mov
	return 0; // 0xf0a Return
	
Label_3852:
	var_33_string = "player_shot"; // 0xf0c PushS
	var_34_bool = var_26_string == var_33_string; // 0xf0d Eq
	if(var_34_bool == 0) goto Label_3862; // 0xf0e JumpB
	var_35_bool = 0; var_36_object = Obj(); // 0xf0f PushV
	var_36_object = var_25_object; // 0xf10 Mov
	func_4138(var_35_bool, var_36_object); // 0xf11 NEW_2
	var_24_bool = var_35_bool; // 0xf12 Mov
	return 0; // 0xf14 Return
	
Label_3862:
	var_50_string = "battle"; // 0xf16 PushS
	var_51_bool = var_26_string == var_50_string; // 0xf17 Eq
	if(var_51_bool == 0) goto Label_3871; // 0xf18 JumpB
	var_52_bool = 0; var_53_object = Obj(); // 0xf19 PushV
	var_53_object = var_25_object; // 0xf1a Mov
	func_4161(var_52_bool, var_53_object); // 0xf1b NEW_2
	var_24_bool = var_52_bool; // 0xf1c Mov
	return 0; // 0xf1e Return
	
Label_3871:
	var_24_bool = 0; // 0xf1f MovB
	return 0; // 0xf20 Return
}


func_4357(var_154_string, var_155_int)
{
	var_156_string = ""; var_157_string = ""; // 0x1105 PushV
	var_157_string = "idle"; // 0x1106 MovS
	var_158_int = var_155_int; // 0x1107 Push
	if(var_158_int == 0) goto Label_4362; // 0x1108 JumpB
	var_157_string = var_157_string + var_155_int; // 0x1109 Add2
	
Label_4362:
	var_154_string = var_157_string; // 0x110a Mov
	return 2; // 0x110b Return
}


func_3335(var_243_bool, var_244_object)
{
	var_245_bool = 0; var_246_object = Obj(); // 0xd08 PushV
	var_246_object = var_244_object; // 0xd09 Mov
	func_3425(var_246_object); // 0xd0a NEW_2
	if(var_245_bool == 0) goto Label_3343; // 0xd0c JumpB
	var_243_bool = 1; // 0xd0d MovB
	return 0; // 0xd0e Return
	
Label_3343:
	var_243_bool = 0; // 0xd0f MovB
	return 0; // 0xd10 Return
}


func_2314(var_34_cvector, var_35_float)
{
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_float = 0; // 0x90a PushV
	GetPosition(var_42_cvector); // 0x90b Func
	GetPosition(var_43_cvector); // 0x90d TObjFunc
	GetDirection(var_44_cvector); // 0x90f Func
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0x911 PushV
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); // 0x912 PushV
	var_51_cvector = var_42_cvector - var_43_cvector; // 0x913 Sub2
	func_3120(var_50_cvector, var_51_cvector); // 0x914 NEW_2
	var_57_float = 0.75; // 0x916 PushF
	var_58_float = var_44_cvector * var_57_float; // 0x917 Mult
	var_49_cvector = var_50_cvector + var_58_float; // 0x918 Add2
	func_3120(var_48_cvector, var_49_cvector); // 0x919 NEW_2
	var_45_cvector = var_48_cvector; // 0x91a Mov
	var_59_int = 32; // 0x91c PushI
	var_60_float = 7000.0; // 0x91d PushF
	FindLongestDir(var_46_cvector, var_47_float, var_45_cvector, var_35_float, var_59_int, var_60_float); // 0x91e Func
	var_61_int = 100; // 0x920 PushI
	var_47_float = var_47_float - var_61_int; // 0x921 Sub2
	var_62_int = 0; // 0x922 PushI
	var_63_bool = var_47_float < var_62_int; // 0x923 LT
	if(var_63_bool == 0) goto Label_2342; // 0x924 JumpB
	var_47_float = 0; // 0x925 MovI
	
Label_2342:
	var_34_cvector = var_46_cvector * var_47_float; // 0x926 Mult2
	return 12; // 0x927 Return
}


func_4364(var_104_int)
{
	var_104_int = 515567; // 0x110c MovI
	return 0; // 0x110d Return
}


func_4366(var_103_int)
{
	var_103_int = 503352; // 0x110e MovI
	return 0; // 0x110f Return
}


func_4368(var_105_string)
{
	var_105_string = "ui/NPC_Citizen3.png"; // 0x1110 MovS
	return 0; // 0x1111 Return
}


func_3345(var_249_bool, var_250_object)
{
	var_251_bool = 0; var_252_object = Obj(); // 0xd12 PushV
	var_252_object = var_250_object; // 0xd13 Mov
	func_3432(var_252_object); // 0xd14 NEW_2
	if(var_251_bool == 0) goto Label_3353; // 0xd16 JumpB
	var_249_bool = 1; // 0xd17 MovB
	return 0; // 0xd18 Return
	
Label_3353:
	var_249_bool = 0; // 0xd19 MovB
	return 0; // 0xd1a Return
}


func_4370(var_106_string)
{
	var_106_string = "ui/NPC_Citizen3_b.png"; // 0x1112 MovS
	return 0; // 0x1113 Return
}


func_4372(var_98_bool)
{
	var_98_bool = 0; // 0x1114 MovB
	return 0; // 0x1115 Return
}


func_1300(var_45_string)
{
	RemoveRTEnvelope(); // 0x515 Func
	SetDeathState(); // 0x517 Func
	Stop(); // 0x519 Func
	StopAsync(); // 0x51b Func
	StopSecondaryAnimation(); // 0x51d Func
	var_46_string = ""; // 0x51f PushV
	var_46_string = var_45_string; // 0x520 Mov
	func_3073(var_46_string); // 0x521 NEW_2
	var_75_string = "all"; // 0x523 PushS
	PlayAnimation(var_75_string, var_45_string); // 0x524 Func
	WaitForAnimEnd(); // 0x526 Func
	var_76_string = "all"; // 0x528 PushS
	LockAnimationEnd(var_76_string, var_45_string); // 0x529 Func
	RemoveEnvelope(); // 0x52b Func
	return 0; // 0x52d Return
}


func_4374()
{
	var_25_bool = GlobalVars[0]; // 0x1116 PushGE
	var_25_bool = 0; // 0x1117 MovB
	GlobalVars[0] = var_25_bool; // 0x1118 PopGE
	var_26_bool = 0; // 0x1119 PushV
	var_26_bool = 0; // 0x111a MovB
	func_3616(var_26_bool); // 0x111b NEW_2
	return 0; // 0x111d Return
}


func_2841(var_24_object, var_25_int, var_26_float)
{
	var_27_cvector = CVector(0,0,0); var_28_object = Obj(); var_29_int = 0; var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_int = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_object = Obj(); var_38_int = 0; var_39_bool = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_int = 0; var_43_int = 0; var_44_cvector = CVector(0,0,0); // 0xb19 PushV
	var_45_bool = 0; // 0xb1a PushV
	var_45_bool = 0; // 0xb1b MovB
	var_46_bool = 0; // 0xb1c PushV
	var_46_bool = 0; // 0xb1d MovB
	var_47_object = var_24_object; // 0xb1e Push
	if(var_47_object == 0) goto Label_2852; // 0xb1f JumpB
	var_48_int = 4; // 0xb20 PushI
	var_49_bool = var_25_int != var_48_int; // 0xb21 Neq
	if(var_49_bool == 0) goto Label_2852; // 0xb22 JumpB
	var_46_bool = 1; // 0xb23 MovB
	
Label_2852:
	if(var_46_bool == 0) goto Label_2857; // 0xb24 JumpB
	var_50_int = 5; // 0xb25 PushI
	var_51_bool = var_25_int != var_50_int; // 0xb26 Neq
	if(var_51_bool == 0) goto Label_2857; // 0xb27 JumpB
	var_45_bool = 1; // 0xb28 MovB
	
Label_2857:
	if(var_45_bool == 0) goto Label_2904; // 0xb29 JumpB
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0xb2a PushV
	var_54_cvector = CVector(0,0,0); var_55_object = Obj(); // 0xb2b PushV
	var_55_object = var_24_object; // 0xb2c Mov
	func_2700(var_55_object); // 0xb2d NEW_2
	var_53_cvector = var_54_cvector; // 0xb2e Mov
	func_3120(var_52_cvector, var_53_cvector); // 0xb30 NEW_2
	var_36_cvector = var_52_cvector; // 0xb31 Mov
	CreateVectorVector(var_37_object); // 0xb33 Func
	var_38_int = 1; // 0xb35 MovI
	
Label_2870:
	var_65_string = "hit"; // 0xb36 PushS
	var_66_int = var_65_string + var_38_int; // 0xb37 Add
	GetGeometryLocator(var_66_int, var_39_bool, var_40_cvector, var_41_cvector); // 0xb38 Func
	var_67_bool = var_39_bool == 0; // 0xb3a Not
	if(var_67_bool == 0) goto Label_2877; // 0xb3b JumpB
	goto Label_2886; // 0xb3c Jump
	
Label_2886:
	size(var_42_int); // 0xb46 ObjFunc
	var_68_int = var_42_int; // 0xb48 Push
	if(var_68_int == 0) goto Label_2903; // 0xb49 JumpB
	irand(var_43_int, var_42_int); // 0xb4a Func
	get(var_44_cvector, var_43_int); // 0xb4c ObjFunc
	var_69_object = Obj(); var_70_int = 0; var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); // 0xb4e PushV
	var_69_object = var_24_object; // 0xb4f Mov
	var_70_int = var_25_int; // 0xb50 Mov
	var_71_float = var_26_float; // 0xb51 Mov
	var_72_cvector = var_44_cvector; // 0xb52 Mov
	var_73_cvector = -var_36_cvector; // 0xb53 Neg2
	func_2909(var_71_float, var_72_cvector, var_73_cvector); // 0xb54 NEW_2
	return 18; // 0xb56 Return
	
Label_2903:
	var_37_object = 0; // 0xb57 SetNull
	
Label_2904:
	var_114_object = Obj(); // 0xb58 PushV
	var_114_object = var_24_object; // 0xb59 Mov
	func_2797(var_114_object); // 0xb5a NEW_2
	return 18; // 0xb5c Return
	
Label_2877:
	var_115_int = var_41_cvector | var_36_cvector; // 0xb3d Or
	var_116_float = 0.70711; // 0xb3e PushF
	var_117_bool = var_115_int >= var_116_float; // 0xb3f GE
	if(var_117_bool == 0) goto Label_2883; // 0xb40 JumpB
	add(var_40_cvector); // 0xb41 ObjFunc
	
Label_2883:
	var_118_int = 1; // 0xb43 PushI
	var_38_int = var_38_int + var_118_int; // 0xb44 Add2
	goto Label_2870; // 0xb45 Jump
}


func_3355(var_153_bool)
{
	var_155_int = 0; // 0xd1c PushV
	func_3185(var_155_int); // 0xd1d NEW_2
	var_161_int = 1; // 0xd1f PushI
	var_153_bool = var_155_int == var_161_int; // 0xd20 Eq2
	return 0; // 0xd21 Return
}


func_1822()
{
	StopGroup0(); // 0x71e Func
	StopAsync(); // 0x720 Func
	var_35_string = "head"; // 0x722 PushS
	UnlookAsync(var_35_string); // 0x723 Func
	var_36_int = 111; // 0x725 PushI
	KillTimer(var_36_int); // 0x726 Func
	return 0; // 0x728 Return
}


func_4382(var_32_object)
{
	var_33_bool = 0; var_34_bool = 0; // 0x111e PushV
	var_35_bool = GlobalVars[0]; // 0x111f PushGE
	if(var_35_bool == 0) goto Label_4395; // 0x1120 JumpB
	IsOverrideActive(var_34_bool); // 0x1121 Func
	var_36_bool = var_34_bool == 0; // 0x1123 Not
	if(var_36_bool == 0) goto Label_4393; // 0x1124 JumpB
	var_37_object = Obj(); // 0x1125 PushV
	var_37_object = var_32_object; // 0x1126 Mov
	func_3531(var_37_object); // 0x1127 NEW_2
	
Label_4393:
	return 2; // 0x1129 Return
	
Label_4395:
	var_44_object = Obj(); // 0x112b PushV
	var_44_object = var_32_object; // 0x112c Mov
	func_4342(var_34_bool, var_44_object); // 0x112d NEW_2
	return 2; // 0x112f Return
}


func_3873(var_58_object, var_59_string)
{
	var_60_string = "unholster"; // 0xf22 PushS
	var_61_bool = var_59_string == var_60_string; // 0xf23 Eq
	if(var_61_bool == 0) goto Label_3882; // 0xf24 JumpB
	var_62_object = Obj(); // 0xf25 PushV
	var_62_object = var_58_object; // 0xf26 Mov
	func_4130(var_62_object); // 0xf27 NEW_2
	goto Label_3897; // 0xf29 Jump
	
Label_3897:
	return 0; // 0xf39 Return
	
Label_3882:
	var_135_string = "player_shot"; // 0xf2a PushS
	var_136_bool = var_59_string == var_135_string; // 0xf2b Eq
	if(var_136_bool == 0) goto Label_3890; // 0xf2c JumpB
	var_137_object = Obj(); // 0xf2d PushV
	var_137_object = var_58_object; // 0xf2e Mov
	func_4153(var_137_object); // 0xf2f NEW_2
	goto Label_3897; // 0xf31 Jump
	
Label_3890:
	var_203_string = "battle"; // 0xf32 PushS
	var_204_bool = var_59_string == var_203_string; // 0xf33 Eq
	if(var_204_bool == 0) goto Label_3897; // 0xf34 JumpB
	var_205_object = Obj(); // 0xf35 PushV
	var_205_object = var_58_object; // 0xf36 Mov
	func_4168(var_205_object); // 0xf37 NEW_2
}


func_3362(var_164_bool)
{
	var_166_int = 0; // 0xd23 PushV
	func_3185(var_166_int); // 0xd24 NEW_2
	var_167_int = 2; // 0xd26 PushI
	var_164_bool = var_166_int == var_167_int; // 0xd27 Eq2
	return 0; // 0xd28 Return
}


func_2344(var_0_object, var_1_object, var_2_object, var_39_object)
{
	var_43_cvector = CVector(0,0,0); var_44_float = 0; var_45_bool = 0; var_46_cvector = CVector(0,0,0); var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_float = 0; var_50_bool = 0; var_51_cvector = CVector(0,0,0); var_52_float = 0; // 0x928 PushV
	var_0_object = var_39_object; // 0x929 TMov
	var_53_cvector = CVector(0,0,0); var_54_float = 0; // 0x92a PushV
	var_54_float = 1.74533; // 0x92b MovF
	func_2314(var_53_cvector, var_54_float); // 0x92c NEW_2
	var_48_cvector = var_53_cvector; // 0x92d Mov
	var_49_float = var_48_cvector | var_48_cvector; // 0x92f Or2
	var_83_float = 2500.0; // 0x930 PushF
	var_84_bool = var_49_float < var_83_float; // 0x931 LT
	if(var_84_bool == 0) goto Label_2373; // 0x932 JumpB
	var_85_cvector = CVector(0,0,0); var_86_float = 0; // 0x933 PushV
	var_86_float = 2.61799; // 0x934 MovF
	func_2314(var_85_cvector, var_86_float); // 0x935 NEW_2
	var_48_cvector = var_85_cvector; // 0x936 Mov
	var_49_float = var_48_cvector | var_48_cvector; // 0x938 Or2
	var_87_float = 2500.0; // 0x939 PushF
	var_88_bool = var_49_float < var_87_float; // 0x93a LT
	if(var_88_bool == 0) goto Label_2373; // 0x93b JumpB
	var_89_string = "Can't retreat, distance: "; // 0x93c PushS
	var_90_float = sqrt(var_49_float); // 0x93d Sqrt
	var_91_int = var_89_string + var_90_float; // 0x93e Add
	Trace(var_91_int); // 0x93f Func
	var_92_float = 0.5; // 0x941 PushF
	Sleep(var_92_float); // 0x942 Func
	return 10; // 0x944 Return
	
Label_2373:
	var_93_float = GetByIndex(var_48_cvector, 0); // 0x945 PushE
	var_94_float = GetByIndex(var_48_cvector, 2); // 0x946 PushE
	Rotate(var_93_float, var_94_float); // 0x947 Func
	var_95_cvector = CVector(0,0,0); // 0x949 PushV
	func_2695(var_95_cvector); // 0x94a NEW_2
	var_1_object = var_95_cvector + var_48_cvector; // 0x94c Add2
	var_98_int = 120; // 0x94d PushI
	var_99_float = 0.5; // 0x94e PushF
	SetTimer(var_98_int, var_99_float); // 0x94f Func
	var_2_object = 0; // 0x951 TMovB
	
Label_2386:
	var_100_int = 1; // 0x952 PushI
	MovePoint(var_100_int, var_100_int, var_50_bool); // 0x953 Func
	var_101_bool = var_50_bool; // 0x955 Push
	if(var_101_bool == 0) goto Label_2414; // 0x956 JumpB
	var_102_bool = var_0_object == 0; // 0x957 NullEq
	if(var_102_bool == 0) goto Label_2395; // 0x958 JumpB
	goto Label_2416; // 0x959 Jump
	
Label_2416:
	return 10; // 0x970 Return
	
Label_2395:
	var_103_cvector = CVector(0,0,0); var_104_float = 0; // 0x95b PushV
	var_104_float = 2.61799; // 0x95c MovF
	func_2314(var_103_cvector, var_104_float); // 0x95d NEW_2
	var_51_cvector = var_103_cvector; // 0x95e Mov
	var_52_float = var_51_cvector | var_51_cvector; // 0x960 Or2
	var_105_float = 2500.0; // 0x961 PushF
	var_106_bool = var_52_float >= var_105_float; // 0x962 GE
	if(var_106_bool == 0) goto Label_2413; // 0x963 JumpB
	var_107_cvector = CVector(0,0,0); // 0x964 PushV
	func_2695(var_107_cvector); // 0x965 NEW_2
	var_1_object = var_107_cvector + var_51_cvector; // 0x967 Add2
	var_108_int = 120; // 0x968 PushI
	var_109_float = 0.5; // 0x969 PushF
	SetTimer(var_108_int, var_109_float); // 0x96a Func
	goto Label_2414; // 0x96c Jump
	
Label_2414:
	var_110_bool = var_2_object == 0; // 0x96e Not
	if(var_110_bool == 0) goto Label_2386; // 0x96f JumpB
	
Label_2413:
	goto Label_2416; // 0x96d Jump
}


func_3369(var_170_bool)
{
	var_172_int = 0; // 0xd2a PushV
	func_3185(var_172_int); // 0xd2b NEW_2
	var_173_int = 3; // 0xd2d PushI
	var_170_bool = var_172_int == var_173_int; // 0xd2e Eq2
	return 0; // 0xd2f Return
}


func_4400()
{
	var_147_int = 0; var_148_bool = 0; var_149_int = 0; var_150_int = 0; var_151_bool = 0; var_152_int = 0; // 0x1130 PushV
	var_150_int = 0; // 0x1131 MovI
	
Label_4402:
	var_153_string = "all"; // 0x1132 PushS
	var_154_string = ""; var_155_int = 0; // 0x1133 PushV
	var_155_int = var_150_int; // 0x1134 Mov
	func_4357(var_154_string, var_155_int); // 0x1135 NEW_2
	HasAnimation(var_151_bool, var_153_string, var_154_string); // 0x1137 Func
	var_159_bool = var_151_bool == 0; // 0x1139 Not
	if(var_159_bool == 0) goto Label_4412; // 0x113a JumpB
	goto Label_4415; // 0x113b Jump
	
Label_4415:
	irand(var_152_int, var_150_int); // 0x113f Func
	var_160_string = "all"; // 0x1141 PushS
	var_161_string = ""; var_162_int = 0; // 0x1142 PushV
	var_162_int = var_152_int; // 0x1143 Mov
	func_4357(var_161_string, var_162_int); // 0x1144 NEW_2
	PlayAnimation(var_160_string, var_161_string); // 0x1146 Func
	WaitForAnimEnd(); // 0x1148 Func
	return 6; // 0x114a Return
	
Label_4412:
	var_163_int = 1; // 0x113c PushI
	var_150_int = var_150_int + var_163_int; // 0x113d Add2
	goto Label_4402; // 0x113e Jump
}


func_3376(var_188_bool)
{
	var_190_int = 0; // 0xd31 PushV
	func_3185(var_190_int); // 0xd32 NEW_2
	var_191_int = 4; // 0xd34 PushI
	var_188_bool = var_190_int == var_191_int; // 0xd35 Eq2
	return 0; // 0xd36 Return
}


func_3383(var_203_bool)
{
	var_205_int = 0; // 0xd38 PushV
	func_3185(var_205_int); // 0xd39 NEW_2
	var_206_int = 5; // 0xd3b PushI
	var_203_bool = var_205_int == var_206_int; // 0xd3c Eq2
	return 0; // 0xd3d Return
}


func_3898(var_21_bool, var_22_object)
{
	var_23_bool = 0; var_24_bool = 0; // 0xf3a PushV
	var_25_bool = 0; // 0xf3b PushV
	var_25_bool = 0; // 0xf3c MovB
	var_26_bool = 0; var_27_object = Obj(); // 0xf3d PushV
	var_27_object = var_22_object; // 0xf3e Mov
	func_4125(var_26_bool, var_27_object); // 0xf3f NEW_2
	if(var_26_bool == 0) goto Label_3912; // 0xf41 JumpB
	var_30_bool = 0; var_31_object = Obj(); // 0xf42 PushV
	var_31_object = var_22_object; // 0xf43 Mov
	func_2715(var_30_bool, var_31_object); // 0xf44 NEW_2
	if(var_30_bool == 0) goto Label_3912; // 0xf46 JumpB
	var_25_bool = 1; // 0xf47 MovB
	
Label_3912:
	if(var_25_bool == 0) goto Label_3919; // 0xf48 JumpB
	IsWeaponHolstered(var_24_bool); // 0xf49 ObjFunc
	var_34_bool = var_24_bool == 0; // 0xf4b Not
	if(var_34_bool == 0) goto Label_3919; // 0xf4c JumpB
	var_21_bool = 1; // 0xf4d MovB
	return 2; // 0xf4e Return
	
Label_3919:
	var_21_bool = 0; // 0xf4f MovB
	return 2; // 0xf50 Return
}


func_3390(var_209_bool)
{
	var_211_int = 0; // 0xd3f PushV
	func_3185(var_211_int); // 0xd40 NEW_2
	var_212_int = 6; // 0xd42 PushI
	var_209_bool = var_211_int == var_212_int; // 0xd43 Eq2
	return 0; // 0xd44 Return
}


func_3397(var_215_bool)
{
	var_217_int = 0; // 0xd46 PushV
	func_3185(var_217_int); // 0xd47 NEW_2
	var_218_int = 7; // 0xd49 PushI
	var_215_bool = var_217_int == var_218_int; // 0xd4a Eq2
	return 0; // 0xd4b Return
}


func_4427()
{
	StopAnimation(); // 0x114b Func
	return 0; // 0x114d Return
}


func_3404(var_221_bool)
{
	var_223_int = 0; // 0xd4d PushV
	func_3185(var_223_int); // 0xd4e NEW_2
	var_224_int = 8; // 0xd50 PushI
	var_221_bool = var_223_int == var_224_int; // 0xd51 Eq2
	return 0; // 0xd52 Return
}


func_4430(var_31_bool)
{
	var_31_bool = 1; // 0x114e MovB
	return 0; // 0x114f Return
}


func_4432(var_25_bool, var_26_object, var_27_object)
{
	var_29_bool = 0; var_30_object = Obj(); var_31_object = Obj(); var_32_float = 0; // 0x1151 PushV
	var_30_object = var_26_object; // 0x1152 Mov
	var_31_object = var_27_object; // 0x1153 Mov
	var_32_float = 500.0; // 0x1154 MovF
	func_4022(var_29_bool, var_30_object, var_31_object, var_32_float); // 0x1155 NEW_2
	if(var_29_bool == 0) goto Label_4446; // 0x1157 JumpB
	var_72_string = "ToDie"; // 0x1158 PushS
	var_73_bool = 1; // 0x1159 PushB
	SetProperty(var_72_string, var_73_bool); // 0x115a Func
	var_25_bool = 1; // 0x115c MovB
	return 0; // 0x115d Return
	
Label_4446:
	var_25_bool = 0; // 0x115e MovB
	return 0; // 0x115f Return
}


func_3921(var_37_object)
{
	var_38_object = Obj(); // 0xf52 PushV
	var_38_object = var_37_object; // 0xf53 Mov
	func_4130(var_38_object); // 0xf54 NEW_2
	return 0; // 0xf56 Return
}


func_3411(var_233_bool)
{
	var_235_int = 0; // 0xd54 PushV
	func_3185(var_235_int); // 0xd55 NEW_2
	var_236_int = 9; // 0xd57 PushI
	var_233_bool = var_235_int == var_236_int; // 0xd58 Eq2
	return 0; // 0xd59 Return
}


func_1366()
{
	var_140_bool = 0; // 0x556 PushV
	func_2934(var_140_bool); // 0x557 NEW_2
	var_143_bool = var_140_bool == 0; // 0x559 Not
	if(var_143_bool == 0) goto Label_1374; // 0x55a JumpB
	func_4097(); // 0x55c NEW_2
	
Label_1374:
	return 0; // 0x55e Return
}


func_3927(var_23_object)
{
	var_24_bool = 0; var_25_object = Obj(); // 0xf58 PushV
	var_25_object = var_23_object; // 0xf59 Mov
	func_2715(var_24_bool, var_25_object); // 0xf5a NEW_2
	if(var_24_bool == 0) goto Label_3939; // 0xf5c JumpB
	var_28_object = Obj(); // 0xf5d PushV
	func_3114(var_28_object); // 0xf5e NEW_2
	var_31_float = -0.05; // 0xf60 PushF
	ReportReputationChange(var_23_object, var_28_object, var_31_float); // 0xf61 Func
	
Label_3939:
	return 0; // 0xf63 Return
}


func_3418(var_239_bool)
{
	var_241_int = 0; // 0xd5b PushV
	func_3185(var_241_int); // 0xd5c NEW_2
	var_242_int = 10; // 0xd5e PushI
	var_239_bool = var_241_int == var_242_int; // 0xd5f Eq2
	return 0; // 0xd60 Return
}


func_2909(var_26_object, var_29_cvector, var_30_cvector)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); var_34_object = Obj(); // 0xb5d PushV
	GetScene(var_33_object); // 0xb5e Func
	var_35_string = "scripted"; // 0xb60 PushS
	var_36_string = "blood_dir.xml"; // 0xb61 PushS
	AddActorByType(var_34_object, var_35_string, var_33_object, var_29_cvector, var_30_cvector, var_36_string); // 0xb62 Func
	var_37_object = Obj(); // 0xb64 PushV
	var_37_object = var_26_object; // 0xb65 Mov
	func_2797(var_37_object); // 0xb66 NEW_2
	return 4; // 0xb68 Return
}


func_4448(var_103_object)
{
	var_104_bool = 0; var_105_object = Obj(); // 0x1161 PushV
	var_105_object = var_103_object; // 0x1162 Mov
	func_2715(var_104_bool, var_105_object); // 0x1163 NEW_2
	if(var_104_bool == 0) goto Label_4465; // 0x1165 JumpB
	var_108_object = Obj(); // 0x1166 PushV
	func_3114(var_108_object); // 0x1167 NEW_2
	var_111_float = -0.1; // 0x1169 PushF
	var_112_bool = 1; // 0x116a PushB
	ReportReputationChange(var_103_object, var_108_object, var_111_float, var_112_bool); // 0x116b Func
	var_113_bool = 0; // 0x116d PushV
	var_113_bool = 0; // 0x116e MovB
	func_3616(var_113_bool); // 0x116f NEW_2
	
Label_4465:
	func_3592(); // 0x1172 NEW_2
	var_247_bool = GlobalVars[0]; // 0x1174 PushGE
	var_247_bool = 1; // 0x1175 MovB
	GlobalVars[0] = var_247_bool; // 0x1176 PopGE
	var_248_int = 50; // 0x1177 PushI
	var_249_int = 40; // 0x1178 PushI
	SetRTEnvelope(var_248_int, var_249_int); // 0x1179 Func
	return 0; // 0x117b Return
}


func_3425(var_245_bool)
{
	var_247_int = 0; // 0xd62 PushV
	func_3185(var_247_int); // 0xd63 NEW_2
	var_248_int = 11; // 0xd65 PushI
	var_245_bool = var_247_int == var_248_int; // 0xd66 Eq2
	return 0; // 0xd67 Return
}


func_3940(var_21_bool, var_22_string)
{
	var_23_object = Obj(); var_24_object = Obj(); // 0xf64 PushV
	var_25_string = "heal"; // 0xf65 PushS
	var_26_bool = var_22_string == var_25_string; // 0xf66 Eq
	if(var_26_bool == 0) goto Label_3954; // 0xf67 JumpB
	var_27_string = "player"; // 0xf68 PushS
	FindActor(var_24_object, var_27_string); // 0xf69 Func
	var_28_bool = 0; var_29_object = Obj(); // 0xf6b PushV
	var_29_object = var_24_object; // 0xf6c Mov
	func_4174(var_29_object); // 0xf6d NEW_2
	var_21_bool = var_28_bool; // 0xf6e Mov
	return 2; // 0xf70 Return
	
Label_3954:
	var_21_bool = 0; // 0xf72 MovB
	return 2; // 0xf73 Return
}


func_3432(var_251_bool)
{
	var_253_int = 0; // 0xd69 PushV
	func_3185(var_253_int); // 0xd6a NEW_2
	var_254_int = 12; // 0xd6c PushI
	var_251_bool = var_253_int == var_254_int; // 0xd6d Eq2
	return 0; // 0xd6e Return
}


func_1898(var_73_object)
{
	Face(var_73_object); // 0x76b Func
	var_77_string = "all"; // 0x76d PushS
	var_78_string = "attack_on"; // 0x76e PushS
	PlayAnimation(var_77_string, var_78_string); // 0x76f Func
	WaitForAnimEnd(); // 0x771 Func
	var_79_string = "all"; // 0x773 PushS
	var_80_string = "attack_stay"; // 0x774 PushS
	PlayAnimation(var_79_string, var_80_string); // 0x775 Func
	WaitForAnimEnd(); // 0x777 Func
	var_81_string = "all"; // 0x779 PushS
	var_82_string = "attack_off"; // 0x77a PushS
	PlayAnimation(var_81_string, var_82_string); // 0x77b Func
	WaitForAnimEnd(); // 0x77d Func
	StopAsync(); // 0x77f Func
	var_83_object = Obj(); // 0x781 PushV
	var_83_object = var_73_object; // 0x782 Mov
	func_1963(var_75_cvector, var_76_bool, var_73_object, var_83_object); // 0x783 NEW_2
	return 0; // 0x785 Return
}


func_2923()
{
	var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); // 0xb6b PushV
	GetPosition(var_100_cvector); // 0xb6c ObjFunc
	GetPosition(var_101_cvector); // 0xb6e Func
	var_102_cvector = var_100_cvector - var_101_cvector; // 0xb70 Sub2
	var_103_float = GetByIndex(var_102_cvector, 0); // 0xb71 PushE
	var_104_float = GetByIndex(var_102_cvector, 2); // 0xb72 PushE
	RotateAsync(var_103_float, var_104_float); // 0xb73 Func
	return 6; // 0xb75 Return
}


func_3439(var_107_int)
{
	var_108_int = 0; var_109_int = 0; // 0xd6f PushV
	var_110_string = "branch"; // 0xd70 PushS
	GetVariable(var_110_string, var_109_int); // 0xd71 Func
	var_111_int = 0; // 0xd73 PushI
	var_112_bool = var_109_int == var_111_int; // 0xd74 Eq
	if(var_112_bool == 0) goto Label_3449; // 0xd75 JumpB
	var_107_int = 1; // 0xd76 MovI
	return 2; // 0xd77 Return
	
Label_3449:
	var_113_int = 1; // 0xd79 PushI
	var_114_bool = var_109_int == var_113_int; // 0xd7a Eq
	if(var_114_bool == 0) goto Label_3454; // 0xd7b JumpB
	var_107_int = 2; // 0xd7c MovI
	return 2; // 0xd7d Return
	
Label_3454:
	var_107_int = 3; // 0xd7e MovI
	return 2; // 0xd7f Return
}


func_3956(var_32_string)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0xf74 PushV
	var_35_string = "heal"; // 0xf75 PushS
	var_36_bool = var_32_string == var_35_string; // 0xf76 Eq
	if(var_36_bool == 0) goto Label_3968; // 0xf77 JumpB
	var_37_string = "player"; // 0xf78 PushS
	FindActor(var_34_object, var_37_string); // 0xf79 Func
	var_38_object = Obj(); // 0xf7b PushV
	var_38_object = var_34_object; // 0xf7c Mov
	func_4177(); // 0xf7d NEW_2
	var_34_object = 0; // 0xf7f SetNull
	
Label_3968:
	return 2; // 0xf80 Return
}


func_2934(var_140_bool)
{
	var_141_bool = 0; var_142_bool = 0; // 0xb76 PushV
	IsLoaded(var_142_bool); // 0xb77 Func
	var_140_bool = var_142_bool; // 0xb79 Mov
	return 2; // 0xb7a Return
}


func_2939(var_56_bool, var_58_float)
{
	var_59_float = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_bool = 0; var_67_bool = 0; var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_bool = 0; var_76_bool = 0; // 0xb7b PushV
	GetPosition(var_69_cvector); // 0xb7c ObjFunc
	GetEyesHeight(var_68_float); // 0xb7e ObjFunc
	var_77_float = GetByIndex(var_69_cvector, 1); // 0xb80 PushE
	var_77_float = var_77_float + var_68_float; // 0xb81 Add2
	SetByIndex(var_69_cvector, 1) = var_77_float; // 0xb82 PopE
	GetPosition(var_70_cvector); // 0xb83 Func
	GetEyesHeight(var_68_float); // 0xb85 Func
	var_78_float = GetByIndex(var_70_cvector, 1); // 0xb87 PushE
	var_78_float = var_78_float + var_68_float; // 0xb88 Add2
	SetByIndex(var_70_cvector, 1) = var_78_float; // 0xb89 PopE
	var_71_cvector = var_69_cvector - var_70_cvector; // 0xb8a Sub2
	var_79_float = GetByIndex(var_71_cvector, 1); // 0xb8b PushE
	var_79_float = 0; // 0xb8c MovI
	SetByIndex(var_71_cvector, 1) = var_79_float; // 0xb8d PopE
	var_80_int = var_71_cvector | var_71_cvector; // 0xb8e Or
	var_81_float = sqrt(var_80_int); // 0xb8f Sqrt
	var_71_cvector = var_71_cvector / var_71_cvector; // 0xb90 Div2
	var_72_cvector = -var_71_cvector; // 0xb91 Neg2
	var_82_float = var_71_cvector * var_58_float; // 0xb92 Mult
	var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); // 0xb93 PushV
	var_85_cvector = CVector(0.0, 1.0, 0.0); // 0xb94 PushVec
	var_84_cvector = var_72_cvector ^ var_85_cvector; // 0xb95 Xor2
	func_3120(var_83_cvector, var_84_cvector); // 0xb96 NEW_2
	var_91_int = 25; // 0xb98 PushI
	var_92_float = var_83_cvector * var_91_int; // 0xb99 Mult
	var_93_int = var_82_float + var_92_float; // 0xb9a Add
	var_94_cvector = CVector(0.0, 10.0, 0.0); // 0xb9b PushVec
	var_73_cvector = var_93_int - var_94_cvector; // 0xb9c Sub2
	var_74_cvector = var_70_cvector + var_73_cvector; // 0xb9d Add2
	IsOverrideActive(var_75_bool); // 0xb9e Func
	var_95_bool = var_75_bool; // 0xba0 Push
	if(var_95_bool == 0) goto Label_2980; // 0xba1 JumpB
	var_56_bool = 0; // 0xba2 MovB
	return 18; // 0xba3 Return
	
Label_2980:
	StopWorld(); // 0xba4 Func
	CameraTransit(var_74_cvector, var_72_cvector); // 0xba6 Func
	var_96_float = GetByIndex(var_73_cvector, 0); // 0xba8 PushE
	var_97_float = GetByIndex(var_73_cvector, 2); // 0xba9 PushE
	Rotate(var_96_float, var_97_float); // 0xbaa Func
	var_98_bool = 0; // 0xbac PushV
	func_4372(var_98_bool); // 0xbad NEW_2
	if(var_98_bool == 0) goto Label_2993; // 0xbaf JumpB
	goto Label_3001; // 0xbb0 Jump
	
Label_3001:
	CameraWaitForPlayFinish(); // 0xbb9 Func
	ResumeWorld(); // 0xbbb Func
	var_56_bool = 1; // 0xbbd MovB
	return 18; // 0xbbe Return
	
Label_2993:
	var_99_string = "head"; // 0xbb1 PushS
	HasAnimationTrack(var_76_bool, var_99_string); // 0xbb2 Func
	var_100_bool = var_76_bool; // 0xbb4 Push
	if(var_100_bool == 0) goto Label_3001; // 0xbb5 JumpB
	var_101_string = "head"; // 0xbb6 PushS
	LookAsyncCamera(var_101_string); // 0xbb7 Func
}


func_3456(var_227_int)
{
	var_228_int = 0; var_229_int = 0; // 0xd80 PushV
	var_230_string = "branch"; // 0xd81 PushS
	GetVariable(var_230_string, var_229_int); // 0xd82 Func
	var_227_int = var_229_int; // 0xd84 Mov
	return 2; // 0xd85 Return
}


func_3969(var_29_int)
{
	var_31_bool = 0; // 0xf82 PushV
	func_4430(var_31_bool); // 0xf83 NEW_2
	if(var_31_bool == 0) goto Label_3976; // 0xf85 JumpB
	var_29_int = 2; // 0xf86 MovI
	goto Label_3977; // 0xf87 Jump
	
Label_3977:
	return 0; // 0xf89 Return
	
Label_3976:
	var_29_int = 0; // 0xf88 MovI
}


func_3462(var_483_int)
{
	var_485_int = 0; var_486_int = 0; // 0xd86 PushV
	GetItemID(var_486_int); // 0xd87 ObjFunc
	var_483_int = var_486_int; // 0xd89 Mov
	return 2; // 0xd8a Return
}


func_3978(var_38_object)
{
	var_39_object = Obj(); // 0xf8b PushV
	var_39_object = var_38_object; // 0xf8c Mov
	TaskCall(4); // 0xf8d TaskCall
	func_1623(var_40_object, var_39_object); // 0xf8e NEW_2
	TaskReturn(); // 0xf8f TaskReturn
	return 0; // 0xf91 Return
}


func_3467(var_460_int, var_461_object, var_462_int)
{
	var_463_int = 0; var_464_int = 0; var_465_int = 0; var_466_string = ""; var_467_bool = 0; var_468_bool = 0; var_469_int = 0; var_470_int = 0; var_471_int = 0; var_472_int = 0; var_473_string = ""; var_474_bool = 0; var_475_bool = 0; var_476_int = 0; // 0xd8b PushV
	var_477_int = 0; // 0xd8c PushI
	var_478_bool = var_462_int == var_477_int; // 0xd8d Eq
	if(var_478_bool == 0) goto Label_3504; // 0xd8e JumpB
	var_479_int = 0; // 0xd8f PushV
	func_3185(var_479_int); // 0xd90 NEW_2
	var_470_int = var_479_int; // 0xd91 Mov
	var_471_int = 0; // 0xd93 MovI
	var_472_int = 1; // 0xd94 MovI
	
Label_3477:
	var_480_bool = var_472_int <= var_470_int; // 0xd95 LE
	if(var_480_bool == 0) goto Label_3502; // 0xd96 JumpB
	var_473_string = "Price"; // 0xd97 MovS
	var_481_int = 1; // 0xd98 PushI
	var_482_bool = var_472_int != var_481_int; // 0xd99 Neq
	if(var_482_bool == 0) goto Label_3484; // 0xd9a JumpB
	var_473_string = var_473_string + var_472_int; // 0xd9b Add2
	
Label_3484:
	var_483_int = 0; var_484_object = Obj(); // 0xd9c PushV
	var_484_object = var_461_object; // 0xd9d Mov
	func_3462(var_484_object); // 0xd9e NEW_2
	HasInvItemProperty(var_474_bool, var_483_int, var_473_string); // 0xda0 Func
	var_487_bool = var_474_bool == 0; // 0xda2 Not
	if(var_487_bool == 0) goto Label_3493; // 0xda3 JumpB
	goto Label_3499; // 0xda4 Jump
	
Label_3499:
	var_488_int = 1; // 0xdab PushI
	var_472_int = var_472_int + var_488_int; // 0xdac Add2
	goto Label_3477; // 0xdad Jump
	
Label_3493:
	var_489_int = 0; var_490_object = Obj(); // 0xda5 PushV
	var_490_object = var_461_object; // 0xda6 Mov
	func_3462(var_490_object); // 0xda7 NEW_2
	GetInvItemProperty(var_471_int, var_489_int, var_473_string); // 0xda9 Func
	
Label_3502:
	var_460_int = var_471_int; // 0xdae Mov
	return 14; // 0xdaf Return
	
Label_3504:
	var_491_int = 0; var_492_object = Obj(); // 0xdb0 PushV
	var_492_object = var_461_object; // 0xdb1 Mov
	func_3462(var_492_object); // 0xdb2 NEW_2
	var_493_string = "BarterPrice"; // 0xdb4 PushS
	var_494_int = var_493_string + var_462_int; // 0xdb5 Add
	HasInvItemProperty(var_475_bool, var_491_int, var_494_int); // 0xdb6 Func
	var_495_bool = var_475_bool == 0; // 0xdb8 Not
	if(var_495_bool == 0) goto Label_3516; // 0xdb9 JumpB
	var_460_int = 0; // 0xdba MovI
	return 14; // 0xdbb Return
	
Label_3516:
	var_496_int = 0; var_497_object = Obj(); // 0xdbc PushV
	var_497_object = var_461_object; // 0xdbd Mov
	func_3462(var_497_object); // 0xdbe NEW_2
	var_498_string = "BarterPrice"; // 0xdc0 PushS
	var_499_int = var_498_string + var_462_int; // 0xdc1 Add
	GetInvItemProperty(var_476_int, var_496_int, var_499_int); // 0xdc2 Func
	var_500_int = 0; // 0xdc4 PushI
	var_501_bool = var_476_int > var_500_int; // 0xdc5 GT
	if(var_501_bool == 0) goto Label_3529; // 0xdc6 JumpB
	var_460_int = var_476_int; // 0xdc7 Mov
	return 14; // 0xdc8 Return
	
Label_3529:
	var_460_int = -var_476_int; // 0xdc9 Neg2
	return 14; // 0xdca Return
}


func_1933(var_34_cvector, var_35_float)
{
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_float = 0; // 0x78d PushV
	GetPosition(var_42_cvector); // 0x78e Func
	GetPosition(var_43_cvector); // 0x790 TObjFunc
	GetDirection(var_44_cvector); // 0x792 Func
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0x794 PushV
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); // 0x795 PushV
	var_51_cvector = var_42_cvector - var_43_cvector; // 0x796 Sub2
	func_3120(var_50_cvector, var_51_cvector); // 0x797 NEW_2
	var_57_float = 0.75; // 0x799 PushF
	var_58_float = var_44_cvector * var_57_float; // 0x79a Mult
	var_49_cvector = var_50_cvector + var_58_float; // 0x79b Add2
	func_3120(var_48_cvector, var_49_cvector); // 0x79c NEW_2
	var_45_cvector = var_48_cvector; // 0x79d Mov
	var_59_int = 32; // 0x79f PushI
	var_60_float = 7000.0; // 0x7a0 PushF
	FindLongestDir(var_46_cvector, var_47_float, var_45_cvector, var_35_float, var_59_int, var_60_float); // 0x7a1 Func
	var_61_int = 100; // 0x7a3 PushI
	var_47_float = var_47_float - var_61_int; // 0x7a4 Sub2
	var_62_int = 0; // 0x7a5 PushI
	var_63_bool = var_47_float < var_62_int; // 0x7a6 LT
	if(var_63_bool == 0) goto Label_1961; // 0x7a7 JumpB
	var_47_float = 0; // 0x7a8 MovI
	
Label_1961:
	var_34_cvector = var_46_cvector * var_47_float; // 0x7a9 Mult2
	return 12; // 0x7aa Return
}


func_3986(var_29_int, var_30_object)
{
	var_31_bool = 0; var_32_object = Obj(); // 0xf93 PushV
	var_32_object = var_30_object; // 0xf94 Mov
	func_2773(var_31_bool, var_32_object); // 0xf95 NEW_2
	if(var_31_bool == 0) goto Label_3994; // 0xf97 JumpB
	var_29_int = 2; // 0xf98 MovI
	goto Label_3995; // 0xf99 Jump
	
Label_3995:
	return 0; // 0xf9b Return
	
Label_3994:
	var_29_int = 0; // 0xf9a MovI
}


func_3996(var_72_object)
{
	var_73_object = Obj(); // 0xf9d PushV
	var_73_object = var_72_object; // 0xf9e Mov
	TaskCall(5); // 0xf9f TaskCall
	func_1898(var_73_object); // 0xfa0 NEW_2
	TaskReturn(); // 0xfa1 TaskReturn
	return 0; // 0xfa3 Return
}


func_4004(var_74_int, var_75_object)
{
	var_77_bool = 0; var_78_object = Obj(); // 0xfa5 PushV
	var_78_object = var_75_object; // 0xfa6 Mov
	func_2773(var_77_bool, var_78_object); // 0xfa7 NEW_2
	if(var_77_bool == 0) goto Label_4012; // 0xfa9 JumpB
	var_74_int = 2; // 0xfaa MovI
	goto Label_4013; // 0xfab Jump
	
Label_4013:
	return 0; // 0xfad Return
	
Label_4012:
	var_74_int = 0; // 0xfac MovI
}


func_2469(var_2_object)
{
	Stop(); // 0x9a5 Func
	var_21_int = 120; // 0x9a7 PushI
	KillTimer(var_21_int); // 0x9a8 Func
	var_2_object = 1; // 0x9aa TMovB
	return 0; // 0x9ab Return
}


func_1963(var_0_object, var_1_object, var_2_object, var_83_object)
{
	var_84_cvector = CVector(0,0,0); var_85_float = 0; var_86_bool = 0; var_87_cvector = CVector(0,0,0); var_88_float = 0; var_89_cvector = CVector(0,0,0); var_90_float = 0; var_91_bool = 0; var_92_cvector = CVector(0,0,0); var_93_float = 0; // 0x7ab PushV
	var_0_object = var_83_object; // 0x7ac TMov
	var_94_cvector = CVector(0,0,0); var_95_float = 0; // 0x7ad PushV
	var_95_float = 1.74533; // 0x7ae MovF
	func_1933(var_94_cvector, var_95_float); // 0x7af NEW_2
	var_89_cvector = var_94_cvector; // 0x7b0 Mov
	var_90_float = var_89_cvector | var_89_cvector; // 0x7b2 Or2
	var_124_float = 2500.0; // 0x7b3 PushF
	var_125_bool = var_90_float < var_124_float; // 0x7b4 LT
	if(var_125_bool == 0) goto Label_1992; // 0x7b5 JumpB
	var_126_cvector = CVector(0,0,0); var_127_float = 0; // 0x7b6 PushV
	var_127_float = 2.61799; // 0x7b7 MovF
	func_1933(var_126_cvector, var_127_float); // 0x7b8 NEW_2
	var_89_cvector = var_126_cvector; // 0x7b9 Mov
	var_90_float = var_89_cvector | var_89_cvector; // 0x7bb Or2
	var_128_float = 2500.0; // 0x7bc PushF
	var_129_bool = var_90_float < var_128_float; // 0x7bd LT
	if(var_129_bool == 0) goto Label_1992; // 0x7be JumpB
	var_130_string = "Can't retreat, distance: "; // 0x7bf PushS
	var_131_float = sqrt(var_90_float); // 0x7c0 Sqrt
	var_132_int = var_130_string + var_131_float; // 0x7c1 Add
	Trace(var_132_int); // 0x7c2 Func
	var_133_float = 0.5; // 0x7c4 PushF
	Sleep(var_133_float); // 0x7c5 Func
	return 10; // 0x7c7 Return
	
Label_1992:
	var_134_float = GetByIndex(var_89_cvector, 0); // 0x7c8 PushE
	var_135_float = GetByIndex(var_89_cvector, 2); // 0x7c9 PushE
	Rotate(var_134_float, var_135_float); // 0x7ca Func
	var_136_cvector = CVector(0,0,0); // 0x7cc PushV
	func_2695(var_136_cvector); // 0x7cd NEW_2
	var_1_object = var_136_cvector + var_89_cvector; // 0x7cf Add2
	var_139_int = 120; // 0x7d0 PushI
	var_140_float = 0.5; // 0x7d1 PushF
	SetTimer(var_139_int, var_140_float); // 0x7d2 Func
	var_2_object = 0; // 0x7d4 TMovB
	
Label_2005:
	var_141_int = 1; // 0x7d5 PushI
	MovePoint(var_141_int, var_141_int, var_91_bool); // 0x7d6 Func
	var_142_bool = var_91_bool; // 0x7d8 Push
	if(var_142_bool == 0) goto Label_2033; // 0x7d9 JumpB
	var_143_bool = var_0_object == 0; // 0x7da NullEq
	if(var_143_bool == 0) goto Label_2014; // 0x7db JumpB
	goto Label_2035; // 0x7dc Jump
	
Label_2035:
	return 10; // 0x7f3 Return
	
Label_2014:
	var_144_cvector = CVector(0,0,0); var_145_float = 0; // 0x7de PushV
	var_145_float = 2.61799; // 0x7df MovF
	func_1933(var_144_cvector, var_145_float); // 0x7e0 NEW_2
	var_92_cvector = var_144_cvector; // 0x7e1 Mov
	var_93_float = var_92_cvector | var_92_cvector; // 0x7e3 Or2
	var_146_float = 2500.0; // 0x7e4 PushF
	var_147_bool = var_93_float >= var_146_float; // 0x7e5 GE
	if(var_147_bool == 0) goto Label_2032; // 0x7e6 JumpB
	var_148_cvector = CVector(0,0,0); // 0x7e7 PushV
	func_2695(var_148_cvector); // 0x7e8 NEW_2
	var_1_object = var_148_cvector + var_92_cvector; // 0x7ea Add2
	var_149_int = 120; // 0x7eb PushI
	var_150_float = 0.5; // 0x7ec PushF
	SetTimer(var_149_int, var_150_float); // 0x7ed Func
	goto Label_2033; // 0x7ef Jump
	
Label_2033:
	var_151_bool = var_2_object == 0; // 0x7f1 Not
	if(var_151_bool == 0) goto Label_2005; // 0x7f2 JumpB
	
Label_2032:
	goto Label_2035; // 0x7f0 Jump
}


func_4014(var_111_object)
{
	var_112_object = Obj(); // 0xfaf PushV
	var_112_object = var_111_object; // 0xfb0 Mov
	TaskCall(6); // 0xfb1 TaskCall
	func_2150(var_113_object, var_114_cvector, var_115_bool, var_112_object); // 0xfb2 NEW_2
	TaskReturn(); // 0xfb3 TaskReturn
	return 0; // 0xfb5 Return
}


func_2485(var_0_object, var_72_bool)
{
	var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); // 0x9b5 PushV
	GetDirection(var_75_cvector); // 0x9b6 Func
	var_77_cvector = CVector(0,0,0); var_78_object = Obj(); // 0x9b8 PushV
	var_78_object = var_0_object; // 0x9b9 MovT
	func_2700(var_78_object); // 0x9ba NEW_2
	var_76_cvector = var_77_cvector; // 0x9bb Mov
	var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); // 0x9bd PushV
	var_84_cvector = var_75_cvector; // 0x9be Mov
	var_85_cvector = var_76_cvector; // 0x9bf Mov
	func_3136(var_83_float, var_84_cvector, var_85_cvector); // 0x9c0 NEW_2
	var_91_float = -0.34202; // 0x9c2 PushF
	var_72_bool = var_83_float >= var_91_float; // 0x9c3 GE2
	return 4; // 0x9c4 Return
}


func_4022(var_29_bool, var_30_object, var_31_object, var_32_float)
{
	var_33_string = ""; var_34_bool = 0; var_35_string = ""; var_36_bool = 0; // 0xfb6 PushV
	var_37_bool = 0; var_38_object = Obj(); var_39_string = ""; // 0xfb7 PushV
	var_38_object = var_31_object; // 0xfb8 Mov
	var_39_string = "class"; // 0xfb9 MovS
	func_2720(var_37_bool, var_38_object, var_39_string); // 0xfba NEW_2
	var_46_bool = var_37_bool == 0; // 0xfbc Not
	if(var_46_bool == 0) goto Label_4032; // 0xfbd JumpB
	var_29_bool = 0; // 0xfbe MovB
	return 4; // 0xfbf Return
	
Label_4032:
	var_47_string = "class"; // 0xfc0 PushS
	GetProperty(var_47_string, var_35_string); // 0xfc1 ObjFunc
	var_48_string = "rat"; // 0xfc3 PushS
	var_49_bool = var_35_string == var_48_string; // 0xfc4 Eq
	if(var_49_bool == 0) goto Label_4041; // 0xfc5 JumpB
	var_29_bool = 0; // 0xfc6 MovB
	return 4; // 0xfc7 Return
	
Label_4041:
	var_50_string = "rat_big"; // 0xfc9 PushS
	var_51_bool = var_35_string == var_50_string; // 0xfca Eq
	if(var_51_bool == 0) goto Label_4047; // 0xfcb JumpB
	var_29_bool = 0; // 0xfcc MovB
	return 4; // 0xfcd Return
	
Label_4047:
	var_52_string = "dog"; // 0xfcf PushS
	var_53_bool = var_35_string == var_52_string; // 0xfd0 Eq
	if(var_53_bool == 0) goto Label_4052; // 0xfd1 JumpB
	var_29_bool = 0; // 0xfd2 MovB
	return 4; // 0xfd3 Return
	
Label_4052:
	CanSee(var_36_bool, var_30_object); // 0xfd4 Func
	var_54_bool = 0; // 0xfd6 PushV
	var_54_bool = 1; // 0xfd7 MovB
	var_55_bool = var_36_bool; // 0xfd8 Push
	if(var_55_bool == 0) goto Label_4066; // 0xfd9 JumpB
	var_56_float = 0; var_57_object = Obj(); // 0xfda PushV
	var_57_object = var_30_object; // 0xfdb Mov
	func_2707(var_57_object); // 0xfdc NEW_2
	var_64_float = var_32_float * var_32_float; // 0xfde Mult
	var_65_bool = var_56_float <= var_64_float; // 0xfdf LE
	if(var_65_bool == 0) goto Label_4066; // 0xfe0 JumpB
	var_54_bool = 0; // 0xfe1 MovB
	
Label_4066:
	if(var_54_bool == 0) goto Label_4069; // 0xfe2 JumpB
	var_29_bool = 1; // 0xfe3 MovB
	return 4; // 0xfe4 Return
	
Label_4069:
	CanSee(var_36_bool, var_31_object); // 0xfe5 Func
	var_66_bool = 0; // 0xfe7 PushV
	var_66_bool = 1; // 0xfe8 MovB
	var_67_bool = var_36_bool; // 0xfe9 Push
	if(var_67_bool == 0) goto Label_4083; // 0xfea JumpB
	var_68_float = 0; var_69_object = Obj(); // 0xfeb PushV
	var_69_object = var_31_object; // 0xfec Mov
	func_2707(var_69_object); // 0xfed NEW_2
	var_70_float = var_32_float * var_32_float; // 0xfef Mult
	var_71_bool = var_68_float <= var_70_float; // 0xff0 LE
	if(var_71_bool == 0) goto Label_4083; // 0xff1 JumpB
	var_66_bool = 0; // 0xff2 MovB
	
Label_4083:
	if(var_66_bool == 0) goto Label_4086; // 0xff3 JumpB
	var_29_bool = 1; // 0xff4 MovB
	return 4; // 0xff5 Return
	
Label_4086:
	var_29_bool = 0; // 0xff6 MovB
	return 4; // 0xff7 Return
}


func_3007()
{
	var_374_bool = 0; var_375_bool = 0; // 0xbbf PushV
	CameraSwitchToNormal(); // 0xbc0 Func
	var_376_bool = 0; // 0xbc2 PushV
	func_4372(var_376_bool); // 0xbc3 NEW_2
	if(var_376_bool == 0) goto Label_3015; // 0xbc5 JumpB
	goto Label_3023; // 0xbc6 Jump
	
Label_3023:
	return 2; // 0xbcf Return
	
Label_3015:
	var_377_string = "head"; // 0xbc7 PushS
	HasAnimationTrack(var_375_bool, var_377_string); // 0xbc8 Func
	var_378_bool = var_375_bool; // 0xbca Push
	if(var_378_bool == 0) goto Label_3023; // 0xbcb JumpB
	var_379_string = "head"; // 0xbcc PushS
	UnlookAsync(var_379_string); // 0xbcd Func
}


func_3531(var_37_object)
{
	var_38_int = 0; // 0xdcc PushV
	func_3456(var_38_int); // 0xdcd NEW_2
	var_42_int = 1; // 0xdcf PushI
	var_43_bool = var_38_int == var_42_int; // 0xdd0 Eq
	if(var_43_bool == 0) goto Label_3541; // 0xdd1 JumpB
	WorkWithCorpse(var_37_object); // 0xdd2 Func
	goto Label_3543; // 0xdd4 Jump
	
Label_3543:
	return 0; // 0xdd7 Return
	
Label_3541:
	Barter(var_37_object); // 0xdd5 Func
}


func_2508(var_34_cvector, var_35_float)
{
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_float = 0; // 0x9cc PushV
	GetPosition(var_42_cvector); // 0x9cd Func
	GetPosition(var_43_cvector); // 0x9cf TObjFunc
	GetDirection(var_44_cvector); // 0x9d1 Func
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0x9d3 PushV
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); // 0x9d4 PushV
	var_51_cvector = var_42_cvector - var_43_cvector; // 0x9d5 Sub2
	func_3120(var_50_cvector, var_51_cvector); // 0x9d6 NEW_2
	var_57_float = 0.75; // 0x9d8 PushF
	var_58_float = var_44_cvector * var_57_float; // 0x9d9 Mult
	var_49_cvector = var_50_cvector + var_58_float; // 0x9da Add2
	func_3120(var_48_cvector, var_49_cvector); // 0x9db NEW_2
	var_45_cvector = var_48_cvector; // 0x9dc Mov
	var_59_int = 32; // 0x9de PushI
	var_60_float = 7000.0; // 0x9df PushF
	FindLongestDir(var_46_cvector, var_47_float, var_45_cvector, var_35_float, var_59_int, var_60_float); // 0x9e0 Func
	var_61_int = 100; // 0x9e2 PushI
	var_47_float = var_47_float - var_61_int; // 0x9e3 Sub2
	var_62_int = 0; // 0x9e4 PushI
	var_63_bool = var_47_float < var_62_int; // 0x9e5 LT
	if(var_63_bool == 0) goto Label_2536; // 0x9e6 JumpB
	var_47_float = 0; // 0x9e7 MovI
	
Label_2536:
	var_34_cvector = var_46_cvector * var_47_float; // 0x9e8 Mult2
	return 12; // 0x9e9 Return
}


func_3024(var_324_string)
{
	var_325_bool = 0; var_326_float = 0; var_327_float = 0; var_328_bool = 0; var_329_float = 0; var_330_float = 0; // 0xbd0 PushV
	lshHasAnimation(var_328_bool, var_324_string); // 0xbd1 Func
	var_331_bool = var_328_bool; // 0xbd3 Push
	if(var_331_bool == 0) goto Label_3035; // 0xbd4 JumpB
	lshGetAnimTimes(var_324_string, var_329_float, var_330_float); // 0xbd5 Func
	var_332_bool = 0; // 0xbd7 PushB
	lshPlayAnimation(var_329_float, var_330_float, var_332_bool); // 0xbd8 Func
	goto Label_3039; // 0xbda Jump
	
Label_3039:
	return 6; // 0xbdf Return
	
Label_3035:
	var_333_string = "Can't find lsh animation : "; // 0xbdb PushS
	var_334_int = var_333_string + var_324_string; // 0xbdc Add
	Trace(var_334_int); // 0xbdd Func
}


func_3544(var_32_int, var_33_int)
{
	var_43_int = 0; var_44_bool = 0; var_45_int = 0; var_46_bool = 0; // 0xdd8 PushV
	var_47_bool = var_32_int > var_33_int; // 0xdd9 GT
	if(var_47_bool == 0) goto Label_3551; // 0xdda JumpB
	var_48_string = "GenerateMoney: iMin > iMax"; // 0xddb PushS
	Trace(var_48_string); // 0xddc Func
	return 4; // 0xdde Return
	
Label_3551:
	var_45_int = 0; // 0xddf MovI
	var_49_bool = var_32_int != var_33_int; // 0xde0 Neq
	if(var_49_bool == 0) goto Label_3558; // 0xde1 JumpB
	var_50_int = var_33_int - var_32_int; // 0xde2 Sub
	irand(var_45_int, var_50_int); // 0xde3 Func
	goto Label_3562; // 0xde5 Jump
	
Label_3562:
	var_45_int = var_45_int + var_32_int; // 0xdea Add2
	var_51_int = 0; // 0xdeb PushI
	var_52_bool = var_45_int == var_51_int; // 0xdec Eq
	if(var_52_bool == 0) goto Label_3567; // 0xded JumpB
	return 4; // 0xdee Return
	
Label_3567:
	var_53_int = 0; var_54_string = ""; // 0xdef PushV
	var_54_string = "Money"; // 0xdf0 MovS
	func_3791(var_53_int, var_54_string); // 0xdf1 NEW_2
	var_57_int = 0; // 0xdf3 PushI
	AddItem(var_46_bool, var_53_int, var_57_int, var_45_int); // 0xdf4 Func
	return 4; // 0xdf6 Return
	
Label_3558:
	var_58_int = 0; // 0xde6 PushI
	var_59_bool = var_32_int == var_58_int; // 0xde7 Eq
	if(var_59_bool == 0) goto Label_3562; // 0xde8 JumpB
	return 4; // 0xde9 Return
}


func_3040(var_135_string, var_136_bool)
{
	var_139_bool = 0; var_140_float = 0; var_141_float = 0; var_142_bool = 0; var_143_float = 0; var_144_float = 0; // 0xbe0 PushV
	lshHasAnimation(var_142_bool, var_135_string); // 0xbe1 Func
	var_145_bool = var_142_bool; // 0xbe3 Push
	if(var_145_bool == 0) goto Label_3050; // 0xbe4 JumpB
	lshGetAnimTimes(var_135_string, var_143_float, var_144_float); // 0xbe5 Func
	lshPlayAnimation(var_143_float, var_144_float, var_136_bool); // 0xbe7 Func
	goto Label_3054; // 0xbe9 Jump
	
Label_3054:
	return 6; // 0xbee Return
	
Label_3050:
	var_146_string = "Can't find lsh animation : "; // 0xbea PushS
	var_147_int = var_146_string + var_135_string; // 0xbeb Add
	Trace(var_147_int); // 0xbec Func
}


func_2538(var_0_object, var_1_object, var_2_object, var_138_object)
{
	var_142_cvector = CVector(0,0,0); var_143_float = 0; var_144_bool = 0; var_145_cvector = CVector(0,0,0); var_146_float = 0; var_147_cvector = CVector(0,0,0); var_148_float = 0; var_149_bool = 0; var_150_cvector = CVector(0,0,0); var_151_float = 0; // 0x9ea PushV
	var_0_object = var_138_object; // 0x9eb TMov
	var_152_cvector = CVector(0,0,0); var_153_float = 0; // 0x9ec PushV
	var_153_float = 1.74533; // 0x9ed MovF
	func_2508(var_152_cvector, var_153_float); // 0x9ee NEW_2
	var_147_cvector = var_152_cvector; // 0x9ef Mov
	var_148_float = var_147_cvector | var_147_cvector; // 0x9f1 Or2
	var_177_float = 2500.0; // 0x9f2 PushF
	var_178_bool = var_148_float < var_177_float; // 0x9f3 LT
	if(var_178_bool == 0) goto Label_2567; // 0x9f4 JumpB
	var_179_cvector = CVector(0,0,0); var_180_float = 0; // 0x9f5 PushV
	var_180_float = 2.61799; // 0x9f6 MovF
	func_2508(var_179_cvector, var_180_float); // 0x9f7 NEW_2
	var_147_cvector = var_179_cvector; // 0x9f8 Mov
	var_148_float = var_147_cvector | var_147_cvector; // 0x9fa Or2
	var_181_float = 2500.0; // 0x9fb PushF
	var_182_bool = var_148_float < var_181_float; // 0x9fc LT
	if(var_182_bool == 0) goto Label_2567; // 0x9fd JumpB
	var_183_string = "Can't retreat, distance: "; // 0x9fe PushS
	var_184_float = sqrt(var_148_float); // 0x9ff Sqrt
	var_185_int = var_183_string + var_184_float; // 0xa00 Add
	Trace(var_185_int); // 0xa01 Func
	var_186_float = 0.5; // 0xa03 PushF
	Sleep(var_186_float); // 0xa04 Func
	return 10; // 0xa06 Return
	
Label_2567:
	var_187_float = GetByIndex(var_147_cvector, 0); // 0xa07 PushE
	var_188_float = GetByIndex(var_147_cvector, 2); // 0xa08 PushE
	Rotate(var_187_float, var_188_float); // 0xa09 Func
	var_189_cvector = CVector(0,0,0); // 0xa0b PushV
	func_2695(var_189_cvector); // 0xa0c NEW_2
	var_1_object = var_189_cvector + var_147_cvector; // 0xa0e Add2
	var_190_int = 120; // 0xa0f PushI
	var_191_float = 0.5; // 0xa10 PushF
	SetTimer(var_190_int, var_191_float); // 0xa11 Func
	var_2_object = 0; // 0xa13 TMovB
	
Label_2580:
	var_192_int = 1; // 0xa14 PushI
	MovePoint(var_192_int, var_192_int, var_149_bool); // 0xa15 Func
	var_193_bool = var_149_bool; // 0xa17 Push
	if(var_193_bool == 0) goto Label_2608; // 0xa18 JumpB
	var_194_bool = var_0_object == 0; // 0xa19 NullEq
	if(var_194_bool == 0) goto Label_2589; // 0xa1a JumpB
	goto Label_2610; // 0xa1b Jump
	
Label_2610:
	return 10; // 0xa32 Return
	
Label_2589:
	var_195_cvector = CVector(0,0,0); var_196_float = 0; // 0xa1d PushV
	var_196_float = 2.61799; // 0xa1e MovF
	func_2508(var_195_cvector, var_196_float); // 0xa1f NEW_2
	var_150_cvector = var_195_cvector; // 0xa20 Mov
	var_151_float = var_150_cvector | var_150_cvector; // 0xa22 Or2
	var_197_float = 2500.0; // 0xa23 PushF
	var_198_bool = var_151_float >= var_197_float; // 0xa24 GE
	if(var_198_bool == 0) goto Label_2607; // 0xa25 JumpB
	var_199_cvector = CVector(0,0,0); // 0xa26 PushV
	func_2695(var_199_cvector); // 0xa27 NEW_2
	var_1_object = var_199_cvector + var_150_cvector; // 0xa29 Add2
	var_200_int = 120; // 0xa2a PushI
	var_201_float = 0.5; // 0xa2b PushF
	SetTimer(var_200_int, var_201_float); // 0xa2c Func
	goto Label_2608; // 0xa2e Jump
	
Label_2608:
	var_202_bool = var_2_object == 0; // 0xa30 Not
	if(var_202_bool == 0) goto Label_2580; // 0xa31 JumpB
	
Label_2607:
	goto Label_2610; // 0xa2f Jump
}


func_3055(var_47_object)
{
	var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_float = 0; var_51_cvector = CVector(0,0,0); // 0xbef PushV
	GetEyesHeight(var_50_float); // 0xbf0 ObjFunc
	var_51_cvector = CVector(0.0, 0.0, 0.0); // 0xbf2 MovV
	var_52_float = GetByIndex(var_51_cvector, 1); // 0xbf3 PushE
	var_52_float = var_50_float; // 0xbf4 Mov
	SetByIndex(var_51_cvector, 1) = var_52_float; // 0xbf5 PopE
	var_53_string = "head"; // 0xbf6 PushS
	LookAsync(var_47_object, var_53_string, var_51_cvector); // 0xbf7 Func
	return 4; // 0xbf9 Return
}


func_500(var_2_object, var_131_string)
{
	var_132_bool = 0; // 0x1f5 PushV
	func_4372(var_132_bool); // 0x1f6 NEW_2
	var_133_bool = var_132_bool == 0; // 0x1f8 Not
	if(var_133_bool == 0) goto Label_507; // 0x1f9 JumpB
	return 0; // 0x1fa Return
	
Label_507:
	var_134_bool = var_131_string == var_2_object; // 0x1fb Eq
	if(var_134_bool == 0) goto Label_510; // 0x1fc JumpB
	return 0; // 0x1fd Return
	
Label_510:
	var_135_string = ""; var_136_bool = 0; // 0x1fe PushV
	var_135_string = var_131_string; // 0x1ff Mov
	var_137_string = ""; // 0x200 PushS
	var_138_bool = var_131_string == var_137_string; // 0x201 Eq
	if(var_138_bool == 0) goto Label_517; // 0x202 JumpB
	var_136_bool = 0; // 0x203 MovB
	goto Label_518; // 0x204 Jump
	
Label_518:
	func_3040(var_135_string, var_136_bool); // 0x206 NEW_2
	var_2_object = var_131_string; // 0x208 TMov
	return 0; // 0x209 Return
	
Label_517:
	var_136_bool = 1; // 0x205 MovB
}


func_3575(var_233_string)
{
	var_234_object = Obj(); var_235_int = 0; var_236_bool = 0; var_237_object = Obj(); var_238_int = 0; var_239_bool = 0; // 0xdf7 PushV
	CreateInvItem(var_237_object); // 0xdf8 Func
	SetItemName(var_233_string); // 0xdfa ObjFunc
	var_240_string = "Organ"; // 0xdfc PushS
	var_241_int = 1; // 0xdfd PushI
	SetProperty(var_240_string, var_241_int); // 0xdfe ObjFunc
	GetItemID(var_238_int); // 0xe00 ObjFunc
	var_242_int = 0; // 0xe02 PushI
	var_243_int = 1; // 0xe03 PushI
	AddItem(var_239_bool, var_237_object, var_242_int, var_243_int); // 0xe04 Func
	return 6; // 0xe06 Return
}


func_4088(var_23_int)
{
	var_23_int = 2; // 0xff9 MovI
	return 0; // 0xffa Return
}


func_3066()
{
	var_23_bool = 0; // 0xbfa PushV
	func_4372(var_23_bool); // 0xbfb NEW_2
	if(var_23_bool == 0) goto Label_3072; // 0xbfd JumpB
	lshStopSpeech(); // 0xbfe Func
	
Label_3072:
	return 0; // 0xc00 Return
}


func_4091(var_31_object)
{
	var_32_object = Obj(); // 0xffc PushV
	var_32_object = var_31_object; // 0xffd Mov
	func_4382(var_32_object); // 0xffe NEW_2
	return 0; // 0x1000 Return
}


