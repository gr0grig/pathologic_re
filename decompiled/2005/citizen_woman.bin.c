task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 1; // 0x20b PushI
	if(var_23_int == 0) goto Label_1175; // 0x20c JumpB
	func_3394(); // 0x20e NEW_2
	var_25_int = 45638; // 0x210 PushI
	var_26_bool = var_22_bool == var_25_int; // 0x211 Eq
	if(var_26_bool == 0) goto Label_536; // 0x212 JumpB
	var_27_object = Obj(); var_28_object = Obj(); // 0x213 PushV
	var_27_object = var_1_object; // 0x214 MovT
	var_28_object = var_0_object; // 0x215 MovT
	func_3522(); // 0x216 NEW_2
	
Label_536:
	var_30_int = 45639; // 0x218 PushI
	var_31_bool = var_22_bool == var_30_int; // 0x219 Eq
	if(var_31_bool == 0) goto Label_544; // 0x21a JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0x21b PushV
	var_32_object = var_1_object; // 0x21c MovT
	var_33_object = var_0_object; // 0x21d MovT
	func_3522(); // 0x21e NEW_2
	
Label_544:
	var_34_int = 45643; // 0x220 PushI
	var_35_bool = var_22_bool == var_34_int; // 0x221 Eq
	if(var_35_bool == 0) goto Label_552; // 0x222 JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0x223 PushV
	var_36_object = var_1_object; // 0x224 MovT
	var_37_object = var_0_object; // 0x225 MovT
	func_3522(); // 0x226 NEW_2
	
Label_552:
	var_38_int = 45664; // 0x228 PushI
	var_39_bool = var_22_bool == var_38_int; // 0x229 Eq
	if(var_39_bool == 0) goto Label_560; // 0x22a JumpB
	var_40_object = Obj(); var_41_object = Obj(); // 0x22b PushV
	var_40_object = var_1_object; // 0x22c MovT
	var_41_object = var_0_object; // 0x22d MovT
	func_3522(); // 0x22e NEW_2
	
Label_560:
	var_42_int = 40043; // 0x230 PushI
	var_43_bool = var_22_bool == var_42_int; // 0x231 Eq
	if(var_43_bool == 0) goto Label_568; // 0x232 JumpB
	var_44_object = Obj(); var_45_object = Obj(); // 0x233 PushV
	var_44_object = var_1_object; // 0x234 MovT
	var_45_object = var_0_object; // 0x235 MovT
	func_3522(); // 0x236 NEW_2
	
Label_568:
	var_46_int = 45636; // 0x238 PushI
	var_47_bool = var_21_cvector == var_46_int; // 0x239 Eq
	if(var_47_bool == 0) goto Label_959; // 0x23a JumpB
	var_48_bool = 0; var_49_object = Obj(); // 0x23b PushV
	var_49_object = var_1_object; // 0x23c MovT
	func_3551(var_49_object); // 0x23d NEW_2
	if(var_48_bool == 0) goto Label_901; // 0x23f JumpB
	var_56_string = ""; // 0x240 PushV
	var_56_string = "Neutral"; // 0x241 MovS
	func_500(var_22_bool, var_56_string); // 0x242 NEW_2
	var_73_int = 543180; // 0x244 PushI
	SetMessage(var_73_int); // 0x245 TObjFunc
	ClearReplies(); // 0x247 TObjFunc
	var_74_bool = 0; // 0x249 PushV
	var_74_bool = 1; // 0x24a MovB
	var_75_bool = 0; // 0x24b PushV
	var_75_bool = 1; // 0x24c MovB
	var_76_bool = 0; var_77_object = Obj(); // 0x24d PushV
	var_77_object = var_1_object; // 0x24e MovT
	func_3563(var_76_bool, var_77_object); // 0x24f NEW_2
	if(var_76_bool == 0) goto Label_600; // 0x251 JumpB
	var_87_bool = 0; var_88_object = Obj(); // 0x252 PushV
	var_88_object = var_1_object; // 0x253 MovT
	func_3573(var_87_bool, var_88_object); // 0x254 NEW_2
	if(var_87_bool == 0) goto Label_600; // 0x256 JumpB
	var_75_bool = 0; // 0x257 MovB
	
Label_600:
	if(var_75_bool == 0) goto Label_607; // 0x258 JumpB
	var_93_bool = 0; var_94_object = Obj(); // 0x259 PushV
	var_94_object = var_1_object; // 0x25a MovT
	func_3583(var_93_bool, var_94_object); // 0x25b NEW_2
	if(var_93_bool == 0) goto Label_607; // 0x25d JumpB
	var_74_bool = 0; // 0x25e MovB
	
Label_607:
	if(var_74_bool == 0) goto Label_613; // 0x25f JumpB
	var_99_int = 543182; // 0x260 PushI
	var_100_int = -1; // 0x261 PushI
	var_101_int = 45638; // 0x262 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x263 TObjFunc
	
Label_613:
	var_102_bool = 0; // 0x265 PushV
	var_102_bool = 1; // 0x266 MovB
	var_103_bool = 0; // 0x267 PushV
	var_103_bool = 1; // 0x268 MovB
	var_104_bool = 0; // 0x269 PushV
	var_104_bool = 1; // 0x26a MovB
	var_105_bool = 0; var_106_object = Obj(); // 0x26b PushV
	var_106_object = var_1_object; // 0x26c MovT
	func_3563(var_105_bool, var_106_object); // 0x26d NEW_2
	if(var_105_bool == 0) goto Label_630; // 0x26f JumpB
	var_107_bool = 0; var_108_object = Obj(); // 0x270 PushV
	var_108_object = var_1_object; // 0x271 MovT
	func_3573(var_107_bool, var_108_object); // 0x272 NEW_2
	if(var_107_bool == 0) goto Label_630; // 0x274 JumpB
	var_104_bool = 0; // 0x275 MovB
	
Label_630:
	if(var_104_bool == 0) goto Label_637; // 0x276 JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x277 PushV
	var_110_object = var_1_object; // 0x278 MovT
	func_3583(var_109_bool, var_110_object); // 0x279 NEW_2
	if(var_109_bool == 0) goto Label_637; // 0x27b JumpB
	var_103_bool = 0; // 0x27c MovB
	
Label_637:
	if(var_103_bool == 0) goto Label_644; // 0x27d JumpB
	var_111_bool = 0; var_112_object = Obj(); // 0x27e PushV
	var_112_object = var_1_object; // 0x27f MovT
	func_3593(var_111_bool, var_112_object); // 0x280 NEW_2
	if(var_111_bool == 0) goto Label_644; // 0x282 JumpB
	var_102_bool = 0; // 0x283 MovB
	
Label_644:
	if(var_102_bool == 0) goto Label_650; // 0x284 JumpB
	var_117_int = 543183; // 0x285 PushI
	var_118_int = -1; // 0x286 PushI
	var_119_int = 45639; // 0x287 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x288 TObjFunc
	
Label_650:
	var_120_bool = 0; // 0x28a PushV
	var_120_bool = 1; // 0x28b MovB
	var_121_bool = 0; // 0x28c PushV
	var_121_bool = 1; // 0x28d MovB
	var_122_bool = 0; // 0x28e PushV
	var_122_bool = 1; // 0x28f MovB
	var_123_bool = 0; // 0x290 PushV
	var_123_bool = 1; // 0x291 MovB
	var_124_bool = 0; var_125_object = Obj(); // 0x292 PushV
	var_125_object = var_1_object; // 0x293 MovT
	func_3593(var_124_bool, var_125_object); // 0x294 NEW_2
	if(var_124_bool == 0) goto Label_669; // 0x296 JumpB
	var_126_bool = 0; var_127_object = Obj(); // 0x297 PushV
	var_127_object = var_1_object; // 0x298 MovT
	func_3603(var_126_bool, var_127_object); // 0x299 NEW_2
	if(var_126_bool == 0) goto Label_669; // 0x29b JumpB
	var_123_bool = 0; // 0x29c MovB
	
Label_669:
	if(var_123_bool == 0) goto Label_676; // 0x29d JumpB
	var_132_bool = 0; var_133_object = Obj(); // 0x29e PushV
	var_133_object = var_1_object; // 0x29f MovT
	func_3613(var_132_bool, var_133_object); // 0x2a0 NEW_2
	if(var_132_bool == 0) goto Label_676; // 0x2a2 JumpB
	var_122_bool = 0; // 0x2a3 MovB
	
Label_676:
	if(var_122_bool == 0) goto Label_683; // 0x2a4 JumpB
	var_138_bool = 0; var_139_object = Obj(); // 0x2a5 PushV
	var_139_object = var_1_object; // 0x2a6 MovT
	func_3623(var_138_bool, var_139_object); // 0x2a7 NEW_2
	if(var_138_bool == 0) goto Label_683; // 0x2a9 JumpB
	var_121_bool = 0; // 0x2aa MovB
	
Label_683:
	if(var_121_bool == 0) goto Label_690; // 0x2ab JumpB
	var_144_bool = 0; var_145_object = Obj(); // 0x2ac PushV
	var_145_object = var_1_object; // 0x2ad MovT
	func_3633(var_144_bool, var_145_object); // 0x2ae NEW_2
	if(var_144_bool == 0) goto Label_690; // 0x2b0 JumpB
	var_120_bool = 0; // 0x2b1 MovB
	
Label_690:
	if(var_120_bool == 0) goto Label_696; // 0x2b2 JumpB
	var_150_int = 543187; // 0x2b3 PushI
	var_151_int = -1; // 0x2b4 PushI
	var_152_int = 45643; // 0x2b5 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x2b6 TObjFunc
	
Label_696:
	var_153_bool = 0; // 0x2b8 PushV
	var_153_bool = 1; // 0x2b9 MovB
	var_154_bool = 0; // 0x2ba PushV
	var_154_bool = 1; // 0x2bb MovB
	var_155_bool = 0; // 0x2bc PushV
	var_155_bool = 1; // 0x2bd MovB
	var_156_bool = 0; var_157_object = Obj(); // 0x2be PushV
	var_157_object = var_1_object; // 0x2bf MovT
	func_3643(var_156_bool, var_157_object); // 0x2c0 NEW_2
	if(var_156_bool == 0) goto Label_713; // 0x2c2 JumpB
	var_162_bool = 0; var_163_object = Obj(); // 0x2c3 PushV
	var_163_object = var_1_object; // 0x2c4 MovT
	func_3653(var_162_bool, var_163_object); // 0x2c5 NEW_2
	if(var_162_bool == 0) goto Label_713; // 0x2c7 JumpB
	var_155_bool = 0; // 0x2c8 MovB
	
Label_713:
	if(var_155_bool == 0) goto Label_720; // 0x2c9 JumpB
	var_168_bool = 0; var_169_object = Obj(); // 0x2ca PushV
	var_169_object = var_1_object; // 0x2cb MovT
	func_3663(var_168_bool, var_169_object); // 0x2cc NEW_2
	if(var_168_bool == 0) goto Label_720; // 0x2ce JumpB
	var_154_bool = 0; // 0x2cf MovB
	
Label_720:
	if(var_154_bool == 0) goto Label_727; // 0x2d0 JumpB
	var_174_bool = 0; var_175_object = Obj(); // 0x2d1 PushV
	var_175_object = var_1_object; // 0x2d2 MovT
	func_3673(var_174_bool, var_175_object); // 0x2d3 NEW_2
	if(var_174_bool == 0) goto Label_727; // 0x2d5 JumpB
	var_153_bool = 0; // 0x2d6 MovB
	
Label_727:
	if(var_153_bool == 0) goto Label_733; // 0x2d7 JumpB
	var_180_int = 543208; // 0x2d8 PushI
	var_181_int = -1; // 0x2d9 PushI
	var_182_int = 45664; // 0x2da PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x2db TObjFunc
	
Label_733:
	var_183_bool = 0; // 0x2dd PushV
	var_183_bool = 1; // 0x2de MovB
	var_184_bool = 0; // 0x2df PushV
	var_184_bool = 1; // 0x2e0 MovB
	var_185_bool = 0; var_186_object = Obj(); // 0x2e1 PushV
	var_186_object = var_1_object; // 0x2e2 MovT
	func_3563(var_185_bool, var_186_object); // 0x2e3 NEW_2
	if(var_185_bool == 0) goto Label_748; // 0x2e5 JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0x2e6 PushV
	var_188_object = var_1_object; // 0x2e7 MovT
	func_3573(var_187_bool, var_188_object); // 0x2e8 NEW_2
	if(var_187_bool == 0) goto Label_748; // 0x2ea JumpB
	var_184_bool = 0; // 0x2eb MovB
	
Label_748:
	if(var_184_bool == 0) goto Label_755; // 0x2ec JumpB
	var_189_bool = 0; var_190_object = Obj(); // 0x2ed PushV
	var_190_object = var_1_object; // 0x2ee MovT
	func_3583(var_189_bool, var_190_object); // 0x2ef NEW_2
	if(var_189_bool == 0) goto Label_755; // 0x2f1 JumpB
	var_183_bool = 0; // 0x2f2 MovB
	
Label_755:
	if(var_183_bool == 0) goto Label_761; // 0x2f3 JumpB
	var_191_int = 543181; // 0x2f4 PushI
	var_192_int = -1; // 0x2f5 PushI
	var_193_int = 45637; // 0x2f6 PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x2f7 TObjFunc
	
Label_761:
	var_194_bool = 0; // 0x2f9 PushV
	var_194_bool = 1; // 0x2fa MovB
	var_195_bool = 0; // 0x2fb PushV
	var_195_bool = 1; // 0x2fc MovB
	var_196_bool = 0; var_197_object = Obj(); // 0x2fd PushV
	var_197_object = var_1_object; // 0x2fe MovT
	func_3593(var_196_bool, var_197_object); // 0x2ff NEW_2
	if(var_196_bool == 0) goto Label_776; // 0x301 JumpB
	var_198_bool = 0; var_199_object = Obj(); // 0x302 PushV
	var_199_object = var_1_object; // 0x303 MovT
	func_3603(var_198_bool, var_199_object); // 0x304 NEW_2
	if(var_198_bool == 0) goto Label_776; // 0x306 JumpB
	var_195_bool = 0; // 0x307 MovB
	
Label_776:
	if(var_195_bool == 0) goto Label_783; // 0x308 JumpB
	var_200_bool = 0; var_201_object = Obj(); // 0x309 PushV
	var_201_object = var_1_object; // 0x30a MovT
	func_3613(var_200_bool, var_201_object); // 0x30b NEW_2
	if(var_200_bool == 0) goto Label_783; // 0x30d JumpB
	var_194_bool = 0; // 0x30e MovB
	
Label_783:
	if(var_194_bool == 0) goto Label_789; // 0x30f JumpB
	var_202_int = 543184; // 0x310 PushI
	var_203_int = -1; // 0x311 PushI
	var_204_int = 45640; // 0x312 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x313 TObjFunc
	
Label_789:
	var_205_bool = 0; // 0x315 PushV
	var_205_bool = 1; // 0x316 MovB
	var_206_bool = 0; // 0x317 PushV
	var_206_bool = 1; // 0x318 MovB
	var_207_bool = 0; // 0x319 PushV
	var_207_bool = 1; // 0x31a MovB
	var_208_bool = 0; var_209_object = Obj(); // 0x31b PushV
	var_209_object = var_1_object; // 0x31c MovT
	func_3583(var_208_bool, var_209_object); // 0x31d NEW_2
	if(var_208_bool == 0) goto Label_806; // 0x31f JumpB
	var_210_bool = 0; var_211_object = Obj(); // 0x320 PushV
	var_211_object = var_1_object; // 0x321 MovT
	func_3613(var_210_bool, var_211_object); // 0x322 NEW_2
	if(var_210_bool == 0) goto Label_806; // 0x324 JumpB
	var_207_bool = 0; // 0x325 MovB
	
Label_806:
	if(var_207_bool == 0) goto Label_813; // 0x326 JumpB
	var_212_bool = 0; var_213_object = Obj(); // 0x327 PushV
	var_213_object = var_1_object; // 0x328 MovT
	func_3623(var_212_bool, var_213_object); // 0x329 NEW_2
	if(var_212_bool == 0) goto Label_813; // 0x32b JumpB
	var_206_bool = 0; // 0x32c MovB
	
Label_813:
	if(var_206_bool == 0) goto Label_820; // 0x32d JumpB
	var_214_bool = 0; var_215_object = Obj(); // 0x32e PushV
	var_215_object = var_1_object; // 0x32f MovT
	func_3633(var_214_bool, var_215_object); // 0x330 NEW_2
	if(var_214_bool == 0) goto Label_820; // 0x332 JumpB
	var_205_bool = 0; // 0x333 MovB
	
Label_820:
	if(var_205_bool == 0) goto Label_826; // 0x334 JumpB
	var_216_int = 543185; // 0x335 PushI
	var_217_int = -1; // 0x336 PushI
	var_218_int = 45641; // 0x337 PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x338 TObjFunc
	
Label_826:
	var_219_bool = 0; // 0x33a PushV
	var_219_bool = 1; // 0x33b MovB
	var_220_bool = 0; // 0x33c PushV
	var_220_bool = 1; // 0x33d MovB
	var_221_bool = 0; var_222_object = Obj(); // 0x33e PushV
	var_222_object = var_1_object; // 0x33f MovT
	func_3643(var_221_bool, var_222_object); // 0x340 NEW_2
	if(var_221_bool == 0) goto Label_841; // 0x342 JumpB
	var_223_bool = 0; var_224_object = Obj(); // 0x343 PushV
	var_224_object = var_1_object; // 0x344 MovT
	func_3653(var_223_bool, var_224_object); // 0x345 NEW_2
	if(var_223_bool == 0) goto Label_841; // 0x347 JumpB
	var_220_bool = 0; // 0x348 MovB
	
Label_841:
	if(var_220_bool == 0) goto Label_848; // 0x349 JumpB
	var_225_bool = 0; var_226_object = Obj(); // 0x34a PushV
	var_226_object = var_1_object; // 0x34b MovT
	func_3663(var_225_bool, var_226_object); // 0x34c NEW_2
	if(var_225_bool == 0) goto Label_848; // 0x34e JumpB
	var_219_bool = 0; // 0x34f MovB
	
Label_848:
	if(var_219_bool == 0) goto Label_854; // 0x350 JumpB
	var_227_int = 543186; // 0x351 PushI
	var_228_int = -1; // 0x352 PushI
	var_229_int = 45642; // 0x353 PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0x354 TObjFunc
	
Label_854:
	var_230_bool = 0; // 0x356 PushV
	var_230_bool = 1; // 0x357 MovB
	var_231_bool = 0; // 0x358 PushV
	var_231_bool = 1; // 0x359 MovB
	var_232_bool = 0; // 0x35a PushV
	var_232_bool = 1; // 0x35b MovB
	var_233_bool = 0; // 0x35c PushV
	var_233_bool = 1; // 0x35d MovB
	var_234_bool = 0; var_235_object = Obj(); // 0x35e PushV
	var_235_object = var_1_object; // 0x35f MovT
	func_3613(var_234_bool, var_235_object); // 0x360 NEW_2
	if(var_234_bool == 0) goto Label_873; // 0x362 JumpB
	var_236_bool = 0; var_237_object = Obj(); // 0x363 PushV
	var_237_object = var_1_object; // 0x364 MovT
	func_3633(var_236_bool, var_237_object); // 0x365 NEW_2
	if(var_236_bool == 0) goto Label_873; // 0x367 JumpB
	var_233_bool = 0; // 0x368 MovB
	
Label_873:
	if(var_233_bool == 0) goto Label_880; // 0x369 JumpB
	var_238_bool = 0; var_239_object = Obj(); // 0x36a PushV
	var_239_object = var_1_object; // 0x36b MovT
	func_3643(var_238_bool, var_239_object); // 0x36c NEW_2
	if(var_238_bool == 0) goto Label_880; // 0x36e JumpB
	var_232_bool = 0; // 0x36f MovB
	
Label_880:
	if(var_232_bool == 0) goto Label_887; // 0x370 JumpB
	var_240_bool = 0; var_241_object = Obj(); // 0x371 PushV
	var_241_object = var_1_object; // 0x372 MovT
	func_3673(var_240_bool, var_241_object); // 0x373 NEW_2
	if(var_240_bool == 0) goto Label_887; // 0x375 JumpB
	var_231_bool = 0; // 0x376 MovB
	
Label_887:
	if(var_231_bool == 0) goto Label_894; // 0x377 JumpB
	var_242_bool = 0; var_243_object = Obj(); // 0x378 PushV
	var_243_object = var_1_object; // 0x379 MovT
	func_3653(var_242_bool, var_243_object); // 0x37a NEW_2
	if(var_242_bool == 0) goto Label_894; // 0x37c JumpB
	var_230_bool = 0; // 0x37d MovB
	
Label_894:
	if(var_230_bool == 0) goto Label_900; // 0x37e JumpB
	var_244_int = 543188; // 0x37f PushI
	var_245_int = -1; // 0x380 PushI
	var_246_int = 45644; // 0x381 PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x382 TObjFunc
	
Label_900:
	return 0; // 0x384 Return
	
Label_901:
	var_247_string = ""; // 0x385 PushV
	var_247_string = "Neutral"; // 0x386 MovS
	func_500(var_22_bool, var_247_string); // 0x387 NEW_2
	var_248_int = 538167; // 0x389 PushI
	SetMessage(var_248_int); // 0x38a TObjFunc
	ClearReplies(); // 0x38c TObjFunc
	var_249_int = 538168; // 0x38e PushI
	var_250_int = -1; // 0x38f PushI
	var_251_int = 40043; // 0x390 PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x391 TObjFunc
	var_252_bool = 0; // 0x393 PushV
	var_252_bool = 0; // 0x394 MovB
	var_253_bool = 0; var_254_object = Obj(); // 0x395 PushV
	var_254_object = var_1_object; // 0x396 MovT
	func_3563(var_253_bool, var_254_object); // 0x397 NEW_2
	if(var_253_bool == 0) goto Label_928; // 0x399 JumpB
	var_255_bool = 0; var_256_object = Obj(); // 0x39a PushV
	var_256_object = var_1_object; // 0x39b MovT
	func_3527(var_256_object); // 0x39c NEW_2
	if(var_255_bool == 0) goto Label_928; // 0x39e JumpB
	var_252_bool = 1; // 0x39f MovB
	
Label_928:
	if(var_252_bool == 0) goto Label_934; // 0x3a0 JumpB
	var_261_int = 538169; // 0x3a1 PushI
	var_262_int = 40045; // 0x3a2 PushI
	var_263_int = 40044; // 0x3a3 PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x3a4 TObjFunc
	
Label_934:
	var_264_bool = 0; // 0x3a6 PushV
	var_264_bool = 1; // 0x3a7 MovB
	var_265_bool = 0; var_266_object = Obj(); // 0x3a8 PushV
	var_266_object = var_1_object; // 0x3a9 MovT
	func_3527(var_266_object); // 0x3aa NEW_2
	if(var_265_bool == 0) goto Label_947; // 0x3ac JumpB
	var_267_bool = 0; var_268_object = Obj(); // 0x3ad PushV
	var_268_object = var_1_object; // 0x3ae MovT
	func_3539(var_268_object); // 0x3af NEW_2
	if(var_267_bool == 0) goto Label_947; // 0x3b1 JumpB
	var_264_bool = 0; // 0x3b2 MovB
	
Label_947:
	if(var_264_bool == 0) goto Label_953; // 0x3b3 JumpB
	var_273_int = 538204; // 0x3b4 PushI
	var_274_int = -1; // 0x3b5 PushI
	var_275_int = 40081; // 0x3b6 PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0x3b7 TObjFunc
	
Label_953:
	var_276_int = 538205; // 0x3b9 PushI
	var_277_int = -1; // 0x3ba PushI
	var_278_int = 40082; // 0x3bb PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x3bc TObjFunc
	return 0; // 0x3be Return
	
Label_959:
	var_279_int = 40067; // 0x3bf PushI
	var_280_bool = var_21_cvector == var_279_int; // 0x3c0 Eq
	if(var_280_bool == 0) goto Label_962; // 0x3c1 JumpB
	
Label_962:
	var_281_int = 40069; // 0x3c2 PushI
	var_282_bool = var_21_cvector == var_281_int; // 0x3c3 Eq
	if(var_282_bool == 0) goto Label_985; // 0x3c4 JumpB
	var_283_string = ""; // 0x3c5 PushV
	var_283_string = "Neutral"; // 0x3c6 MovS
	func_500(var_22_bool, var_283_string); // 0x3c7 NEW_2
	var_284_int = 538193; // 0x3c9 PushI
	SetMessage(var_284_int); // 0x3ca TObjFunc
	ClearReplies(); // 0x3cc TObjFunc
	var_285_int = 538194; // 0x3ce PushI
	var_286_int = 40071; // 0x3cf PushI
	var_287_int = 40070; // 0x3d0 PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0x3d1 TObjFunc
	var_288_int = 538202; // 0x3d3 PushI
	var_289_int = -1; // 0x3d4 PushI
	var_290_int = 40078; // 0x3d5 PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0x3d6 TObjFunc
	return 0; // 0x3d8 Return
	
Label_985:
	var_291_int = 40071; // 0x3d9 PushI
	var_292_bool = var_21_cvector == var_291_int; // 0x3da Eq
	if(var_292_bool == 0) goto Label_1008; // 0x3db JumpB
	var_293_string = ""; // 0x3dc PushV
	var_293_string = "Neutral"; // 0x3dd MovS
	func_500(var_22_bool, var_293_string); // 0x3de NEW_2
	var_294_int = 538195; // 0x3e0 PushI
	SetMessage(var_294_int); // 0x3e1 TObjFunc
	ClearReplies(); // 0x3e3 TObjFunc
	var_295_int = 538196; // 0x3e5 PushI
	var_296_int = 40073; // 0x3e6 PushI
	var_297_int = 40072; // 0x3e7 PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x3e8 TObjFunc
	var_298_int = 538201; // 0x3ea PushI
	var_299_int = -1; // 0x3eb PushI
	var_300_int = 40077; // 0x3ec PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0x3ed TObjFunc
	return 0; // 0x3ef Return
	
Label_1008:
	var_301_int = 40073; // 0x3f0 PushI
	var_302_bool = var_21_cvector == var_301_int; // 0x3f1 Eq
	if(var_302_bool == 0) goto Label_1036; // 0x3f2 JumpB
	var_303_string = ""; // 0x3f3 PushV
	var_303_string = "Neutral"; // 0x3f4 MovS
	func_500(var_22_bool, var_303_string); // 0x3f5 NEW_2
	var_304_int = 538197; // 0x3f7 PushI
	SetMessage(var_304_int); // 0x3f8 TObjFunc
	ClearReplies(); // 0x3fa TObjFunc
	var_305_int = 538198; // 0x3fc PushI
	var_306_int = -1; // 0x3fd PushI
	var_307_int = 40074; // 0x3fe PushI
	AddReply(var_305_int, var_306_int, var_307_int); // 0x3ff TObjFunc
	var_308_int = 538199; // 0x401 PushI
	var_309_int = -1; // 0x402 PushI
	var_310_int = 40075; // 0x403 PushI
	AddReply(var_308_int, var_309_int, var_310_int); // 0x404 TObjFunc
	var_311_int = 538200; // 0x406 PushI
	var_312_int = -1; // 0x407 PushI
	var_313_int = 40076; // 0x408 PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0x409 TObjFunc
	return 0; // 0x40b Return
	
Label_1036:
	var_314_int = 40055; // 0x40c PushI
	var_315_bool = var_21_cvector == var_314_int; // 0x40d Eq
	if(var_315_bool == 0) goto Label_1039; // 0x40e JumpB
	
Label_1039:
	var_316_int = 40057; // 0x40f PushI
	var_317_bool = var_21_cvector == var_316_int; // 0x410 Eq
	if(var_317_bool == 0) goto Label_1062; // 0x411 JumpB
	var_318_string = ""; // 0x412 PushV
	var_318_string = "Neutral"; // 0x413 MovS
	func_500(var_22_bool, var_318_string); // 0x414 NEW_2
	var_319_int = 538182; // 0x416 PushI
	SetMessage(var_319_int); // 0x417 TObjFunc
	ClearReplies(); // 0x419 TObjFunc
	var_320_int = 538183; // 0x41b PushI
	var_321_int = 40059; // 0x41c PushI
	var_322_int = 40058; // 0x41d PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0x41e TObjFunc
	var_323_int = 538187; // 0x420 PushI
	var_324_int = -1; // 0x421 PushI
	var_325_int = 40062; // 0x422 PushI
	AddReply(var_323_int, var_324_int, var_325_int); // 0x423 TObjFunc
	return 0; // 0x425 Return
	
Label_1062:
	var_326_int = 40059; // 0x426 PushI
	var_327_bool = var_21_cvector == var_326_int; // 0x427 Eq
	if(var_327_bool == 0) goto Label_1085; // 0x428 JumpB
	var_328_string = ""; // 0x429 PushV
	var_328_string = "Neutral"; // 0x42a MovS
	func_500(var_22_bool, var_328_string); // 0x42b NEW_2
	var_329_int = 538184; // 0x42d PushI
	SetMessage(var_329_int); // 0x42e TObjFunc
	ClearReplies(); // 0x430 TObjFunc
	var_330_int = 538185; // 0x432 PushI
	var_331_int = -1; // 0x433 PushI
	var_332_int = 40060; // 0x434 PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0x435 TObjFunc
	var_333_int = 538186; // 0x437 PushI
	var_334_int = -1; // 0x438 PushI
	var_335_int = 40061; // 0x439 PushI
	AddReply(var_333_int, var_334_int, var_335_int); // 0x43a TObjFunc
	return 0; // 0x43c Return
	
Label_1085:
	var_336_int = 40045; // 0x43d PushI
	var_337_bool = var_21_cvector == var_336_int; // 0x43e Eq
	if(var_337_bool == 0) goto Label_1113; // 0x43f JumpB
	var_338_string = ""; // 0x440 PushV
	var_338_string = "Neutral"; // 0x441 MovS
	func_500(var_22_bool, var_338_string); // 0x442 NEW_2
	var_339_int = 538170; // 0x444 PushI
	SetMessage(var_339_int); // 0x445 TObjFunc
	ClearReplies(); // 0x447 TObjFunc
	var_340_int = 538171; // 0x449 PushI
	var_341_int = 40047; // 0x44a PushI
	var_342_int = 40046; // 0x44b PushI
	AddReply(var_340_int, var_341_int, var_342_int); // 0x44c TObjFunc
	var_343_int = 538175; // 0x44e PushI
	var_344_int = 40051; // 0x44f PushI
	var_345_int = 40050; // 0x450 PushI
	AddReply(var_343_int, var_344_int, var_345_int); // 0x451 TObjFunc
	var_346_int = 538178; // 0x453 PushI
	var_347_int = -1; // 0x454 PushI
	var_348_int = 40053; // 0x455 PushI
	AddReply(var_346_int, var_347_int, var_348_int); // 0x456 TObjFunc
	return 0; // 0x458 Return
	
Label_1113:
	var_349_int = 40051; // 0x459 PushI
	var_350_bool = var_21_cvector == var_349_int; // 0x45a Eq
	if(var_350_bool == 0) goto Label_1131; // 0x45b JumpB
	var_351_string = ""; // 0x45c PushV
	var_351_string = "Neutral"; // 0x45d MovS
	func_500(var_22_bool, var_351_string); // 0x45e NEW_2
	var_352_int = 538176; // 0x460 PushI
	SetMessage(var_352_int); // 0x461 TObjFunc
	ClearReplies(); // 0x463 TObjFunc
	var_353_int = 538177; // 0x465 PushI
	var_354_int = -1; // 0x466 PushI
	var_355_int = 40052; // 0x467 PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0x468 TObjFunc
	return 0; // 0x46a Return
	
Label_1131:
	var_356_int = 40047; // 0x46b PushI
	var_357_bool = var_21_cvector == var_356_int; // 0x46c Eq
	if(var_357_bool == 0) goto Label_1154; // 0x46d JumpB
	var_358_string = ""; // 0x46e PushV
	var_358_string = "Neutral"; // 0x46f MovS
	func_500(var_22_bool, var_358_string); // 0x470 NEW_2
	var_359_int = 538172; // 0x472 PushI
	SetMessage(var_359_int); // 0x473 TObjFunc
	ClearReplies(); // 0x475 TObjFunc
	var_360_int = 538173; // 0x477 PushI
	var_361_int = -1; // 0x478 PushI
	var_362_int = 40048; // 0x479 PushI
	AddReply(var_360_int, var_361_int, var_362_int); // 0x47a TObjFunc
	var_363_int = 538174; // 0x47c PushI
	var_364_int = -1; // 0x47d PushI
	var_365_int = 40049; // 0x47e PushI
	AddReply(var_363_int, var_364_int, var_365_int); // 0x47f TObjFunc
	return 0; // 0x481 Return
	
Label_1154:
	var_366_int = 45656; // 0x482 PushI
	var_367_bool = var_21_cvector == var_366_int; // 0x483 Eq
	if(var_367_bool == 0) goto Label_1157; // 0x484 JumpB
	
Label_1157:
	var_368_int = 45655; // 0x485 PushI
	var_369_bool = var_21_cvector == var_368_int; // 0x486 Eq
	if(var_369_bool == 0) goto Label_1160; // 0x487 JumpB
	
Label_1160:
	var_370_int = 45648; // 0x488 PushI
	var_371_bool = var_21_cvector == var_370_int; // 0x489 Eq
	if(var_371_bool == 0) goto Label_1163; // 0x48a JumpB
	
Label_1163:
	var_3_string = 1; // 0x48b TMovB
	var_372_bool = 0; // 0x48c PushV
	func_4714(var_372_bool); // 0x48d NEW_2
	if(var_372_bool == 0) goto Label_1171; // 0x48f JumpB
	lshStopAnimation(); // 0x490 Func
	goto Label_1173; // 0x492 Jump
	
Label_1173:
	return 0; // 0x495 Return
	
Label_1171:
	StopAnimation(); // 0x493 Func
	
Label_1175:
	return 0; // 0x497 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0; // 0x4a7 PushV
	var_24_int = 0; var_25_object = Obj(); // 0x4a8 PushV
	var_25_object = var_21_bool; // 0x4a9 Mov
	func_4464(var_25_object); // 0x4aa NEW_2
	var_23_int = var_24_int; // 0x4ab Mov
	var_26_int = 0; // 0x4ad PushI
	var_27_bool = var_23_int > var_26_int; // 0x4ae GT
	if(var_27_bool == 0) goto Label_1204; // 0x4af JumpB
	var_28_object = Obj(); // 0x4b0 PushV
	var_28_object = var_21_bool; // 0x4b1 Mov
	func_4467(var_28_object); // 0x4b2 NEW_2
	
Label_1204:
	return 2; // 0x4b4 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	func_4473(); // 0x4b6 NEW_2
	return 0; // 0x4b8 Return
}


task_2_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_float, var_8_float, var_9_bool, var_10_bool, var_11_bool, var_12_object, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool, var_22_object, var_23_cvector, var_24_bool)
{
	return 0; // 0x52f Return
}


task_2_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_string, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	return 0; // 0x531 Return
}


task_2_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	return 0; // 0x533 Return
}


task_3_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0; // 0x54c PushV
	var_24_int = 0; var_25_object = Obj(); // 0x54d PushV
	var_25_object = var_21_bool; // 0x54e Mov
	func_4464(var_25_object); // 0x54f NEW_2
	var_23_int = var_24_int; // 0x550 Mov
	var_26_int = 0; // 0x552 PushI
	var_27_bool = var_23_int > var_26_int; // 0x553 GT
	if(var_27_bool == 0) goto Label_1375; // 0x554 JumpB
	var_28_int = 1; // 0x555 PushI
	var_29_bool = var_23_int > var_28_int; // 0x556 GT
	if(var_29_bool == 0) goto Label_1371; // 0x557 JumpB
	func_1543(var_23_int); // 0x559 NEW_2
	
Label_1371:
	var_31_object = Obj(); // 0x55b PushV
	var_31_object = var_21_bool; // 0x55c Mov
	func_4467(var_31_object); // 0x55d NEW_2
	
Label_1375:
	return 2; // 0x55f Return
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0; // 0x560 PushV
	var_24_object = Obj(); // 0x561 PushV
	var_24_object = var_21_bool; // 0x562 Mov
	func_4269(var_24_object); // 0x563 NEW_2
	var_33_int = 0; var_34_object = Obj(); // 0x565 PushV
	var_34_object = var_21_bool; // 0x566 Mov
	func_4352(var_33_int, var_34_object); // 0x567 NEW_2
	var_23_int = var_33_int; // 0x568 Mov
	var_69_int = 0; // 0x56a PushI
	var_70_bool = var_23_int > var_69_int; // 0x56b GT
	if(var_70_bool == 0) goto Label_1399; // 0x56c JumpB
	var_71_int = 1; // 0x56d PushI
	var_72_bool = var_23_int > var_71_int; // 0x56e GT
	if(var_72_bool == 0) goto Label_1395; // 0x56f JumpB
	func_1543(var_23_int); // 0x571 NEW_2
	
Label_1395:
	var_74_object = Obj(); // 0x573 PushV
	var_74_object = var_21_bool; // 0x574 Mov
	func_4362(var_74_object); // 0x575 NEW_2
	
Label_1399:
	return 2; // 0x577 Return
}


task_3_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_object, var_22_cvector, var_23_bool)
{
	var_24_int = 0; var_25_int = 0; // 0x578 PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_object = Obj(); var_29_bool = 0; // 0x579 PushV
	var_27_object = var_21_object; // 0x57a Mov
	var_28_object = var_22_cvector; // 0x57b Mov
	var_29_bool = var_23_bool; // 0x57c Mov
	func_4744(var_27_object, var_28_object, var_29_bool); // 0x57d NEW_2
	if(var_26_bool == 0) goto Label_1427; // 0x57f JumpB
	var_73_int = 0; var_74_object = Obj(); var_75_bool = 0; // 0x580 PushV
	var_74_object = var_21_object; // 0x581 Mov
	var_75_bool = var_23_bool; // 0x582 Mov
	func_4370(var_74_object, var_75_bool); // 0x583 NEW_2
	var_25_int = var_73_int; // 0x584 Mov
	var_104_int = 0; // 0x586 PushI
	var_105_bool = var_25_int > var_104_int; // 0x587 GT
	if(var_105_bool == 0) goto Label_1427; // 0x588 JumpB
	var_106_int = 1; // 0x589 PushI
	var_107_bool = var_25_int > var_106_int; // 0x58a GT
	if(var_107_bool == 0) goto Label_1423; // 0x58b JumpB
	func_1543(var_25_int); // 0x58d NEW_2
	
Label_1423:
	var_109_object = Obj(); // 0x58f PushV
	var_109_object = var_21_object; // 0x590 Mov
	func_4380(var_109_object); // 0x591 NEW_2
	
Label_1427:
	return 2; // 0x593 Return
}


task_3_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0; // 0x594 PushV
	var_24_int = 0; var_25_object = Obj(); // 0x595 PushV
	var_25_object = var_21_bool; // 0x596 Mov
	func_4454(var_25_object); // 0x597 NEW_2
	var_23_int = var_24_int; // 0x598 Mov
	var_26_int = 0; // 0x59a PushI
	var_27_bool = var_23_int > var_26_int; // 0x59b GT
	if(var_27_bool == 0) goto Label_1447; // 0x59c JumpB
	var_28_int = 1; // 0x59d PushI
	var_29_bool = var_23_int > var_28_int; // 0x59e GT
	if(var_29_bool == 0) goto Label_1443; // 0x59f JumpB
	func_1543(var_23_int); // 0x5a1 NEW_2
	
Label_1443:
	var_31_object = Obj(); // 0x5a3 PushV
	var_31_object = var_21_bool; // 0x5a4 Mov
	func_4457(); // 0x5a5 NEW_2
	
Label_1447:
	return 2; // 0x5a7 Return
}


task_3_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x5a8 PushV
	var_25_bool = 0; var_26_object = Obj(); var_27_string = ""; // 0x5a9 PushV
	var_26_object = var_21_cvector; // 0x5aa Mov
	var_27_string = var_22_bool; // 0x5ab Mov
	func_4183(var_25_bool, var_26_object, var_27_string); // 0x5ac NEW_2
	if(var_25_bool == 0) goto Label_1464; // 0x5ae JumpB
	func_1543(var_24_int); // 0x5b0 NEW_2
	var_58_object = Obj(); var_59_string = ""; // 0x5b2 PushV
	var_58_object = var_21_cvector; // 0x5b3 Mov
	var_59_string = var_22_bool; // 0x5b4 Mov
	func_4215(var_58_object, var_59_string); // 0x5b5 NEW_2
	goto Label_1484; // 0x5b7 Jump
	
Label_1484:
	return 2; // 0x5cc Return
	
Label_1464:
	var_207_int = 0; var_208_string = ""; var_209_object = Obj(); // 0x5b8 PushV
	var_208_string = var_22_bool; // 0x5b9 Mov
	var_209_object = var_21_cvector; // 0x5ba Mov
	func_4459(var_209_object); // 0x5bb NEW_2
	var_24_int = var_207_int; // 0x5bc Mov
	var_210_int = 0; // 0x5be PushI
	var_211_bool = var_24_int > var_210_int; // 0x5bf GT
	if(var_211_bool == 0) goto Label_1484; // 0x5c0 JumpB
	var_212_int = 1; // 0x5c1 PushI
	var_213_bool = var_24_int > var_212_int; // 0x5c2 GT
	if(var_213_bool == 0) goto Label_1479; // 0x5c3 JumpB
	func_1543(var_24_int); // 0x5c5 NEW_2
	
Label_1479:
	var_214_string = ""; var_215_object = Obj(); // 0x5c7 PushV
	var_214_string = var_22_bool; // 0x5c8 Mov
	var_215_object = var_21_cvector; // 0x5c9 Mov
	func_4462(); // 0x5ca NEW_2
}


task_3_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_string, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_bool = 0; var_23_string = ""; // 0x5ce PushV
	var_23_string = var_21_bool; // 0x5cf Mov
	func_4282(var_22_bool, var_23_string); // 0x5d0 NEW_2
	if(var_22_bool == 0) goto Label_1498; // 0x5d2 JumpB
	func_1543(var_21_bool); // 0x5d4 NEW_2
	var_32_string = ""; // 0x5d6 PushV
	var_32_string = var_21_bool; // 0x5d7 Mov
	func_4298(var_32_string); // 0x5d8 NEW_2
	
Label_1498:
	return 0; // 0x5da Return
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_bool = 0; var_23_object = Obj(); // 0x5dc PushV
	var_23_object = var_21_bool; // 0x5dd Mov
	func_4240(var_22_bool, var_23_object); // 0x5de NEW_2
	if(var_22_bool == 0) goto Label_1513; // 0x5e0 JumpB
	func_1543(var_21_bool); // 0x5e2 NEW_2
	var_37_object = Obj(); // 0x5e4 PushV
	var_37_object = var_21_bool; // 0x5e5 Mov
	func_4263(var_37_object); // 0x5e6 NEW_2
	goto Label_1517; // 0x5e8 Jump
	
Label_1517:
	return 0; // 0x5ed Return
	
Label_1513:
	var_111_object = Obj(); // 0x5e9 PushV
	var_111_object = var_21_bool; // 0x5ea Mov
	func_1568(var_21_bool, var_111_object); // 0x5eb NEW_2
}


task_3_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_object = Obj(); // 0x5ef PushV
	var_22_object = var_21_bool; // 0x5f0 Mov
	func_1568(var_21_bool, var_22_object); // 0x5f1 NEW_2
	return 0; // 0x5f3 Return
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_int, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 110; // 0x5f5 PushI
	var_23_bool = var_21_bool != var_22_int; // 0x5f6 Neq
	if(var_23_bool == 0) goto Label_1529; // 0x5f7 JumpB
	return 0; // 0x5f8 Return
	
Label_1529:
	var_2_object = 0; // 0x5f9 TMovB
	var_24_int = 110; // 0x5fa PushI
	KillTimer(var_24_int); // 0x5fb Func
	ResetAAS(); // 0x5fd Func
	return 0; // 0x5ff Return
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	func_1543(var_20_bool); // 0x601 NEW_2
	func_4473(); // 0x604 NEW_2
	return 0; // 0x606 Return
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	func_1543(var_21_bool); // 0x619 NEW_2
	var_23_object = Obj(); // 0x61b PushV
	var_23_object = var_21_bool; // 0x61c Mov
	func_4159(); // 0x61d NEW_2
	return 0; // 0x61f Return
}


task_3_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	RequestClearPath(var_21_bool); // 0x689 Func
	return 0; // 0x68b Return
}


task_3_event_28(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	Stop(); // 0x68c Func
	return 0; // 0x68e Return
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0; // 0x6a5 PushV
	var_24_int = 0; var_25_object = Obj(); // 0x6a6 PushV
	var_25_object = var_21_bool; // 0x6a7 Mov
	func_4464(var_25_object); // 0x6a8 NEW_2
	var_23_int = var_24_int; // 0x6a9 Mov
	var_26_int = 0; // 0x6ab PushI
	var_27_bool = var_23_int > var_26_int; // 0x6ac GT
	if(var_27_bool == 0) goto Label_1720; // 0x6ad JumpB
	var_28_int = 1; // 0x6ae PushI
	var_29_bool = var_23_int > var_28_int; // 0x6af GT
	if(var_29_bool == 0) goto Label_1716; // 0x6b0 JumpB
	func_1946(); // 0x6b2 NEW_2
	
Label_1716:
	var_30_object = Obj(); // 0x6b4 PushV
	var_30_object = var_21_bool; // 0x6b5 Mov
	func_4467(var_30_object); // 0x6b6 NEW_2
	
Label_1720:
	return 2; // 0x6b8 Return
}


task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0; // 0x6b9 PushV
	var_24_object = Obj(); // 0x6ba PushV
	var_24_object = var_21_bool; // 0x6bb Mov
	func_4269(var_24_object); // 0x6bc NEW_2
	var_33_int = 0; var_34_object = Obj(); // 0x6be PushV
	var_34_object = var_21_bool; // 0x6bf Mov
	func_4352(var_33_int, var_34_object); // 0x6c0 NEW_2
	var_23_int = var_33_int; // 0x6c1 Mov
	var_69_int = 0; // 0x6c3 PushI
	var_70_bool = var_23_int > var_69_int; // 0x6c4 GT
	if(var_70_bool == 0) goto Label_1744; // 0x6c5 JumpB
	var_71_int = 1; // 0x6c6 PushI
	var_72_bool = var_23_int > var_71_int; // 0x6c7 GT
	if(var_72_bool == 0) goto Label_1740; // 0x6c8 JumpB
	func_1946(); // 0x6ca NEW_2
	
Label_1740:
	var_73_object = Obj(); // 0x6cc PushV
	var_73_object = var_21_bool; // 0x6cd Mov
	func_4362(var_73_object); // 0x6ce NEW_2
	
Label_1744:
	return 2; // 0x6d0 Return
}


task_4_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_object, var_22_cvector, var_23_bool)
{
	var_24_int = 0; var_25_int = 0; // 0x6d1 PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_object = Obj(); var_29_bool = 0; // 0x6d2 PushV
	var_27_object = var_21_object; // 0x6d3 Mov
	var_28_object = var_22_cvector; // 0x6d4 Mov
	var_29_bool = var_23_bool; // 0x6d5 Mov
	func_4744(var_27_object, var_28_object, var_29_bool); // 0x6d6 NEW_2
	if(var_26_bool == 0) goto Label_1772; // 0x6d8 JumpB
	var_73_int = 0; var_74_object = Obj(); var_75_bool = 0; // 0x6d9 PushV
	var_74_object = var_21_object; // 0x6da Mov
	var_75_bool = var_23_bool; // 0x6db Mov
	func_4370(var_74_object, var_75_bool); // 0x6dc NEW_2
	var_25_int = var_73_int; // 0x6dd Mov
	var_104_int = 0; // 0x6df PushI
	var_105_bool = var_25_int > var_104_int; // 0x6e0 GT
	if(var_105_bool == 0) goto Label_1772; // 0x6e1 JumpB
	var_106_int = 1; // 0x6e2 PushI
	var_107_bool = var_25_int > var_106_int; // 0x6e3 GT
	if(var_107_bool == 0) goto Label_1768; // 0x6e4 JumpB
	func_1946(); // 0x6e6 NEW_2
	
Label_1768:
	var_108_object = Obj(); // 0x6e8 PushV
	var_108_object = var_21_object; // 0x6e9 Mov
	func_4380(var_108_object); // 0x6ea NEW_2
	
Label_1772:
	return 2; // 0x6ec Return
}


task_4_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0; // 0x6ed PushV
	var_24_int = 0; var_25_object = Obj(); // 0x6ee PushV
	var_25_object = var_21_bool; // 0x6ef Mov
	func_4454(var_25_object); // 0x6f0 NEW_2
	var_23_int = var_24_int; // 0x6f1 Mov
	var_26_int = 0; // 0x6f3 PushI
	var_27_bool = var_23_int > var_26_int; // 0x6f4 GT
	if(var_27_bool == 0) goto Label_1792; // 0x6f5 JumpB
	var_28_int = 1; // 0x6f6 PushI
	var_29_bool = var_23_int > var_28_int; // 0x6f7 GT
	if(var_29_bool == 0) goto Label_1788; // 0x6f8 JumpB
	func_1946(); // 0x6fa NEW_2
	
Label_1788:
	var_30_object = Obj(); // 0x6fc PushV
	var_30_object = var_21_bool; // 0x6fd Mov
	func_4457(); // 0x6fe NEW_2
	
Label_1792:
	return 2; // 0x700 Return
}


task_4_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x701 PushV
	var_25_bool = 0; var_26_object = Obj(); var_27_string = ""; // 0x702 PushV
	var_26_object = var_21_cvector; // 0x703 Mov
	var_27_string = var_22_bool; // 0x704 Mov
	func_4183(var_25_bool, var_26_object, var_27_string); // 0x705 NEW_2
	if(var_25_bool == 0) goto Label_1809; // 0x707 JumpB
	func_1946(); // 0x709 NEW_2
	var_57_object = Obj(); var_58_string = ""; // 0x70b PushV
	var_57_object = var_21_cvector; // 0x70c Mov
	var_58_string = var_22_bool; // 0x70d Mov
	func_4215(var_57_object, var_58_string); // 0x70e NEW_2
	goto Label_1829; // 0x710 Jump
	
Label_1829:
	return 2; // 0x725 Return
	
Label_1809:
	var_206_int = 0; var_207_string = ""; var_208_object = Obj(); // 0x711 PushV
	var_207_string = var_22_bool; // 0x712 Mov
	var_208_object = var_21_cvector; // 0x713 Mov
	func_4459(var_208_object); // 0x714 NEW_2
	var_24_int = var_206_int; // 0x715 Mov
	var_209_int = 0; // 0x717 PushI
	var_210_bool = var_24_int > var_209_int; // 0x718 GT
	if(var_210_bool == 0) goto Label_1829; // 0x719 JumpB
	var_211_int = 1; // 0x71a PushI
	var_212_bool = var_24_int > var_211_int; // 0x71b GT
	if(var_212_bool == 0) goto Label_1824; // 0x71c JumpB
	func_1946(); // 0x71e NEW_2
	
Label_1824:
	var_213_string = ""; var_214_object = Obj(); // 0x720 PushV
	var_213_string = var_22_bool; // 0x721 Mov
	var_214_object = var_21_cvector; // 0x722 Mov
	func_4462(); // 0x723 NEW_2
}


task_4_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_string, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_bool = 0; var_23_string = ""; // 0x727 PushV
	var_23_string = var_21_bool; // 0x728 Mov
	func_4282(var_22_bool, var_23_string); // 0x729 NEW_2
	if(var_22_bool == 0) goto Label_1843; // 0x72b JumpB
	func_1946(); // 0x72d NEW_2
	var_31_string = ""; // 0x72f PushV
	var_31_string = var_21_bool; // 0x730 Mov
	func_4298(var_31_string); // 0x731 NEW_2
	
Label_1843:
	return 0; // 0x733 Return
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	func_1946(); // 0x735 NEW_2
	func_4473(); // 0x738 NEW_2
	return 0; // 0x73a Return
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_bool = 0; var_23_object = Obj(); // 0x73c PushV
	var_23_object = var_21_bool; // 0x73d Mov
	func_4240(var_22_bool, var_23_object); // 0x73e NEW_2
	if(var_22_bool == 0) goto Label_1864; // 0x740 JumpB
	func_1946(); // 0x742 NEW_2
	var_36_object = Obj(); // 0x744 PushV
	var_36_object = var_21_bool; // 0x745 Mov
	func_4263(var_36_object); // 0x746 NEW_2
	
Label_1864:
	return 0; // 0x748 Return
}


task_5_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0; // 0x7d7 PushV
	var_24_int = 0; var_25_object = Obj(); // 0x7d8 PushV
	var_25_object = var_21_bool; // 0x7d9 Mov
	func_4464(var_25_object); // 0x7da NEW_2
	var_23_int = var_24_int; // 0x7db Mov
	var_26_int = 0; // 0x7dd PushI
	var_27_bool = var_23_int > var_26_int; // 0x7de GT
	if(var_27_bool == 0) goto Label_2026; // 0x7df JumpB
	var_28_int = 1; // 0x7e0 PushI
	var_29_bool = var_23_int > var_28_int; // 0x7e1 GT
	if(var_29_bool == 0) goto Label_2022; // 0x7e2 JumpB
	func_2150(); // 0x7e4 NEW_2
	
Label_2022:
	var_32_object = Obj(); // 0x7e6 PushV
	var_32_object = var_21_bool; // 0x7e7 Mov
	func_4467(var_32_object); // 0x7e8 NEW_2
	
Label_2026:
	return 2; // 0x7ea Return
}


task_5_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0; // 0x7eb PushV
	var_24_object = Obj(); // 0x7ec PushV
	var_24_object = var_21_bool; // 0x7ed Mov
	func_4269(var_24_object); // 0x7ee NEW_2
	var_33_int = 0; var_34_object = Obj(); // 0x7f0 PushV
	var_34_object = var_21_bool; // 0x7f1 Mov
	func_4352(var_33_int, var_34_object); // 0x7f2 NEW_2
	var_23_int = var_33_int; // 0x7f3 Mov
	var_69_int = 0; // 0x7f5 PushI
	var_70_bool = var_23_int > var_69_int; // 0x7f6 GT
	if(var_70_bool == 0) goto Label_2050; // 0x7f7 JumpB
	var_71_int = 1; // 0x7f8 PushI
	var_72_bool = var_23_int > var_71_int; // 0x7f9 GT
	if(var_72_bool == 0) goto Label_2046; // 0x7fa JumpB
	func_2150(); // 0x7fc NEW_2
	
Label_2046:
	var_75_object = Obj(); // 0x7fe PushV
	var_75_object = var_21_bool; // 0x7ff Mov
	func_4362(var_75_object); // 0x800 NEW_2
	
Label_2050:
	return 2; // 0x802 Return
}


task_5_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_object, var_22_cvector, var_23_bool)
{
	var_24_int = 0; var_25_int = 0; // 0x803 PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_object = Obj(); var_29_bool = 0; // 0x804 PushV
	var_27_object = var_21_object; // 0x805 Mov
	var_28_object = var_22_cvector; // 0x806 Mov
	var_29_bool = var_23_bool; // 0x807 Mov
	func_4744(var_27_object, var_28_object, var_29_bool); // 0x808 NEW_2
	if(var_26_bool == 0) goto Label_2078; // 0x80a JumpB
	var_73_int = 0; var_74_object = Obj(); var_75_bool = 0; // 0x80b PushV
	var_74_object = var_21_object; // 0x80c Mov
	var_75_bool = var_23_bool; // 0x80d Mov
	func_4370(var_74_object, var_75_bool); // 0x80e NEW_2
	var_25_int = var_73_int; // 0x80f Mov
	var_104_int = 0; // 0x811 PushI
	var_105_bool = var_25_int > var_104_int; // 0x812 GT
	if(var_105_bool == 0) goto Label_2078; // 0x813 JumpB
	var_106_int = 1; // 0x814 PushI
	var_107_bool = var_25_int > var_106_int; // 0x815 GT
	if(var_107_bool == 0) goto Label_2074; // 0x816 JumpB
	func_2150(); // 0x818 NEW_2
	
Label_2074:
	var_110_object = Obj(); // 0x81a PushV
	var_110_object = var_21_object; // 0x81b Mov
	func_4380(var_110_object); // 0x81c NEW_2
	
Label_2078:
	return 2; // 0x81e Return
}


task_5_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0; // 0x81f PushV
	var_24_int = 0; var_25_object = Obj(); // 0x820 PushV
	var_25_object = var_21_bool; // 0x821 Mov
	func_4454(var_25_object); // 0x822 NEW_2
	var_23_int = var_24_int; // 0x823 Mov
	var_26_int = 0; // 0x825 PushI
	var_27_bool = var_23_int > var_26_int; // 0x826 GT
	if(var_27_bool == 0) goto Label_2098; // 0x827 JumpB
	var_28_int = 1; // 0x828 PushI
	var_29_bool = var_23_int > var_28_int; // 0x829 GT
	if(var_29_bool == 0) goto Label_2094; // 0x82a JumpB
	func_2150(); // 0x82c NEW_2
	
Label_2094:
	var_32_object = Obj(); // 0x82e PushV
	var_32_object = var_21_bool; // 0x82f Mov
	func_4457(); // 0x830 NEW_2
	
Label_2098:
	return 2; // 0x832 Return
}


task_5_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_string, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x833 PushV
	var_25_bool = 0; var_26_object = Obj(); var_27_string = ""; // 0x834 PushV
	var_26_object = var_21_cvector; // 0x835 Mov
	var_27_string = var_22_bool; // 0x836 Mov
	func_4183(var_25_bool, var_26_object, var_27_string); // 0x837 NEW_2
	if(var_25_bool == 0) goto Label_2115; // 0x839 JumpB
	func_2150(); // 0x83b NEW_2
	var_59_object = Obj(); var_60_string = ""; // 0x83d PushV
	var_59_object = var_21_cvector; // 0x83e Mov
	var_60_string = var_22_bool; // 0x83f Mov
	func_4215(var_59_object, var_60_string); // 0x840 NEW_2
	goto Label_2135; // 0x842 Jump
	
Label_2135:
	return 2; // 0x857 Return
	
Label_2115:
	var_208_int = 0; var_209_string = ""; var_210_object = Obj(); // 0x843 PushV
	var_209_string = var_22_bool; // 0x844 Mov
	var_210_object = var_21_cvector; // 0x845 Mov
	func_4459(var_210_object); // 0x846 NEW_2
	var_24_int = var_208_int; // 0x847 Mov
	var_211_int = 0; // 0x849 PushI
	var_212_bool = var_24_int > var_211_int; // 0x84a GT
	if(var_212_bool == 0) goto Label_2135; // 0x84b JumpB
	var_213_int = 1; // 0x84c PushI
	var_214_bool = var_24_int > var_213_int; // 0x84d GT
	if(var_214_bool == 0) goto Label_2130; // 0x84e JumpB
	func_2150(); // 0x850 NEW_2
	
Label_2130:
	var_215_string = ""; var_216_object = Obj(); // 0x852 PushV
	var_215_string = var_22_bool; // 0x853 Mov
	var_216_object = var_21_cvector; // 0x854 Mov
	func_4462(); // 0x855 NEW_2
}


task_5_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_bool = 0; var_23_string = ""; // 0x859 PushV
	var_23_string = var_21_bool; // 0x85a Mov
	func_4282(var_22_bool, var_23_string); // 0x85b NEW_2
	if(var_22_bool == 0) goto Label_2149; // 0x85d JumpB
	func_2150(); // 0x85f NEW_2
	var_33_string = ""; // 0x861 PushV
	var_33_string = var_21_bool; // 0x862 Mov
	func_4298(var_33_string); // 0x863 NEW_2
	
Label_2149:
	return 0; // 0x865 Return
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	func_2150(); // 0x873 NEW_2
	var_24_object = Obj(); // 0x875 PushV
	var_24_object = var_21_bool; // 0x876 Mov
	func_4159(); // 0x877 NEW_2
	return 0; // 0x879 Return
}


task_5_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); // 0x87a PushV
	var_26_int = 111; // 0x87b PushI
	var_27_bool = var_21_bool != var_26_int; // 0x87c Neq
	if(var_27_bool == 0) goto Label_2175; // 0x87d JumpB
	return 4; // 0x87e Return
	
Label_2175:
	var_28_bool = 0; var_29_object = Obj(); // 0x87f PushV
	var_29_object = var_0_object; // 0x880 MovT
	func_3101(var_28_bool, var_29_object); // 0x881 NEW_2
	var_62_bool = var_28_bool == 0; // 0x883 Not
	if(var_62_bool == 0) goto Label_2185; // 0x884 JumpB
	func_2150(); // 0x886 NEW_2
	return 4; // 0x888 Return
	
Label_2185:
	GetDirection(var_24_cvector); // 0x889 Func
	var_65_cvector = CVector(0,0,0); var_66_object = Obj(); // 0x88b PushV
	var_66_object = var_0_object; // 0x88c MovT
	func_3028(var_66_object); // 0x88d NEW_2
	var_25_cvector = var_65_cvector; // 0x88e Mov
	var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); // 0x890 PushV
	var_72_cvector = var_24_cvector; // 0x891 Mov
	var_73_cvector = var_25_cvector; // 0x892 Mov
	func_3491(var_71_float, var_72_cvector, var_73_cvector); // 0x893 NEW_2
	var_95_float = 0.5; // 0x895 PushF
	var_96_bool = var_71_float < var_95_float; // 0x896 LT
	if(var_96_bool == 0) goto Label_2204; // 0x897 JumpB
	var_97_object = Obj(); // 0x898 PushV
	var_97_object = var_0_object; // 0x899 MovT
	func_3251(); // 0x89a NEW_2
	
Label_2204:
	return 4; // 0x89c Return
}


task_5_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	func_2150(); // 0x89e NEW_2
	func_4473(); // 0x8a1 NEW_2
	return 0; // 0x8a3 Return
}


task_5_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_bool = 0; var_23_object = Obj(); // 0x8a5 PushV
	var_23_object = var_21_bool; // 0x8a6 Mov
	func_4240(var_22_bool, var_23_object); // 0x8a7 NEW_2
	if(var_22_bool == 0) goto Label_2225; // 0x8a9 JumpB
	func_2150(); // 0x8ab NEW_2
	var_38_object = Obj(); // 0x8ad PushV
	var_38_object = var_21_bool; // 0x8ae Mov
	func_4263(var_38_object); // 0x8af NEW_2
	
Label_2225:
	return 0; // 0x8b1 Return
}


task_6_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	func_2416(var_20_bool); // 0x8cf NEW_2
	func_4473(); // 0x8d2 NEW_2
	return 0; // 0x8d4 Return
}


task_6_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_int, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_cvector = CVector(0,0,0); var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_float = 0; // 0x93c PushV
	var_30_int = 120; // 0x93d PushI
	var_31_bool = var_21_bool != var_30_int; // 0x93e Neq
	if(var_31_bool == 0) goto Label_2369; // 0x93f JumpB
	return 8; // 0x940 Return
	
Label_2369:
	var_32_bool = var_0_object == 0; // 0x941 NullEq
	if(var_32_bool == 0) goto Label_2378; // 0x942 JumpB
	Stop(); // 0x943 Func
	var_33_int = 1; // 0x945 PushI
	KillTimer(var_33_int); // 0x946 Func
	var_2_object = 1; // 0x948 TMovB
	goto Label_2415; // 0x949 Jump
	
Label_2415:
	return 8; // 0x96f Return
	
Label_2378:
	GetDirection(var_26_cvector); // 0x94a Func
	var_34_float = 7000.0; // 0x94c PushF
	FindDirLength(var_27_float, var_26_cvector, var_34_float); // 0x94d Func
	var_35_cvector = CVector(0,0,0); var_36_float = 0; // 0x94f PushV
	var_36_float = 1.74533; // 0x950 MovF
	func_2261(var_35_cvector, var_36_float); // 0x951 NEW_2
	var_28_cvector = var_35_cvector; // 0x952 Mov
	var_29_float = var_28_cvector | var_28_cvector; // 0x954 Or2
	var_65_bool = 0; // 0x955 PushV
	var_65_bool = 0; // 0x956 MovB
	var_66_float = 2500.0; // 0x957 PushF
	var_67_bool = var_29_float >= var_66_float; // 0x958 GE
	if(var_67_bool == 0) goto Label_2408; // 0x959 JumpB
	var_68_bool = 0; // 0x95a PushV
	var_68_bool = 1; // 0x95b MovB
	var_69_float = var_27_float * var_27_float; // 0x95c Mult
	var_70_float = 2.25; // 0x95d PushF
	var_71_float = var_69_float * var_70_float; // 0x95e Mult
	var_72_bool = var_29_float >= var_71_float; // 0x95f GE
	if(var_72_bool == 0) goto Label_2406; // 0x960 JumpB
	var_73_bool = 0; // 0x961 PushV
	func_2432(var_68_bool, var_73_bool); // 0x962 NEW_2
	if(var_73_bool == 0) goto Label_2406; // 0x964 JumpB
	var_68_bool = 0; // 0x965 MovB
	
Label_2406:
	if(var_68_bool == 0) goto Label_2408; // 0x966 JumpB
	var_65_bool = 1; // 0x967 MovB
	
Label_2408:
	if(var_65_bool == 0) goto Label_2415; // 0x968 JumpB
	Stop(); // 0x969 Func
	var_93_cvector = CVector(0,0,0); // 0x96b PushV
	func_3023(var_93_cvector); // 0x96c NEW_2
	var_1_object = var_93_cvector + var_28_cvector; // 0x96e Add2
}


task_6_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	func_2416(var_21_bool); // 0x979 NEW_2
	var_23_object = Obj(); // 0x97b PushV
	var_23_object = var_21_bool; // 0x97c Mov
	func_4159(); // 0x97d NEW_2
	return 0; // 0x97f Return
}


task_7_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_int, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_cvector = CVector(0,0,0); var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_float = 0; // 0x9f7 PushV
	var_30_int = 120; // 0x9f8 PushI
	var_31_bool = var_21_bool != var_30_int; // 0x9f9 Neq
	if(var_31_bool == 0) goto Label_2556; // 0x9fa JumpB
	return 8; // 0x9fb Return
	
Label_2556:
	var_32_bool = var_0_object == 0; // 0x9fc NullEq
	if(var_32_bool == 0) goto Label_2565; // 0x9fd JumpB
	Stop(); // 0x9fe Func
	var_33_int = 1; // 0xa00 PushI
	KillTimer(var_33_int); // 0xa01 Func
	var_2_object = 1; // 0xa03 TMovB
	goto Label_2602; // 0xa04 Jump
	
Label_2602:
	return 8; // 0xa2a Return
	
Label_2565:
	GetDirection(var_26_cvector); // 0xa05 Func
	var_34_float = 7000.0; // 0xa07 PushF
	FindDirLength(var_27_float, var_26_cvector, var_34_float); // 0xa08 Func
	var_35_cvector = CVector(0,0,0); var_36_float = 0; // 0xa0a PushV
	var_36_float = 1.74533; // 0xa0b MovF
	func_2448(var_35_cvector, var_36_float); // 0xa0c NEW_2
	var_28_cvector = var_35_cvector; // 0xa0d Mov
	var_29_float = var_28_cvector | var_28_cvector; // 0xa0f Or2
	var_65_bool = 0; // 0xa10 PushV
	var_65_bool = 0; // 0xa11 MovB
	var_66_float = 2500.0; // 0xa12 PushF
	var_67_bool = var_29_float >= var_66_float; // 0xa13 GE
	if(var_67_bool == 0) goto Label_2595; // 0xa14 JumpB
	var_68_bool = 0; // 0xa15 PushV
	var_68_bool = 1; // 0xa16 MovB
	var_69_float = var_27_float * var_27_float; // 0xa17 Mult
	var_70_float = 2.25; // 0xa18 PushF
	var_71_float = var_69_float * var_70_float; // 0xa19 Mult
	var_72_bool = var_29_float >= var_71_float; // 0xa1a GE
	if(var_72_bool == 0) goto Label_2593; // 0xa1b JumpB
	var_73_bool = 0; // 0xa1c PushV
	func_2619(var_68_bool, var_73_bool); // 0xa1d NEW_2
	if(var_73_bool == 0) goto Label_2593; // 0xa1f JumpB
	var_68_bool = 0; // 0xa20 MovB
	
Label_2593:
	if(var_68_bool == 0) goto Label_2595; // 0xa21 JumpB
	var_65_bool = 1; // 0xa22 MovB
	
Label_2595:
	if(var_65_bool == 0) goto Label_2602; // 0xa23 JumpB
	Stop(); // 0xa24 Func
	var_93_cvector = CVector(0,0,0); // 0xa26 PushV
	func_3023(var_93_cvector); // 0xa27 NEW_2
	var_1_object = var_93_cvector + var_28_cvector; // 0xa29 Add2
}


task_7_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	func_2603(var_21_bool); // 0xa34 NEW_2
	var_23_object = Obj(); // 0xa36 PushV
	var_23_object = var_21_bool; // 0xa37 Mov
	func_4159(); // 0xa38 NEW_2
	return 0; // 0xa3a Return
}


task_8_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	func_2797(var_20_bool); // 0xa4c NEW_2
	func_4473(); // 0xa4f NEW_2
	return 0; // 0xa51 Return
}


task_8_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_int, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_cvector = CVector(0,0,0); var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_float = 0; // 0xab9 PushV
	var_30_int = 120; // 0xaba PushI
	var_31_bool = var_21_bool != var_30_int; // 0xabb Neq
	if(var_31_bool == 0) goto Label_2750; // 0xabc JumpB
	return 8; // 0xabd Return
	
Label_2750:
	var_32_bool = var_0_object == 0; // 0xabe NullEq
	if(var_32_bool == 0) goto Label_2759; // 0xabf JumpB
	Stop(); // 0xac0 Func
	var_33_int = 1; // 0xac2 PushI
	KillTimer(var_33_int); // 0xac3 Func
	var_2_object = 1; // 0xac5 TMovB
	goto Label_2796; // 0xac6 Jump
	
Label_2796:
	return 8; // 0xaec Return
	
Label_2759:
	GetDirection(var_26_cvector); // 0xac7 Func
	var_34_float = 7000.0; // 0xac9 PushF
	FindDirLength(var_27_float, var_26_cvector, var_34_float); // 0xaca Func
	var_35_cvector = CVector(0,0,0); var_36_float = 0; // 0xacc PushV
	var_36_float = 1.74533; // 0xacd MovF
	func_2642(var_35_cvector, var_36_float); // 0xace NEW_2
	var_28_cvector = var_35_cvector; // 0xacf Mov
	var_29_float = var_28_cvector | var_28_cvector; // 0xad1 Or2
	var_65_bool = 0; // 0xad2 PushV
	var_65_bool = 0; // 0xad3 MovB
	var_66_float = 2500.0; // 0xad4 PushF
	var_67_bool = var_29_float >= var_66_float; // 0xad5 GE
	if(var_67_bool == 0) goto Label_2789; // 0xad6 JumpB
	var_68_bool = 0; // 0xad7 PushV
	var_68_bool = 1; // 0xad8 MovB
	var_69_float = var_27_float * var_27_float; // 0xad9 Mult
	var_70_float = 2.25; // 0xada PushF
	var_71_float = var_69_float * var_70_float; // 0xadb Mult
	var_72_bool = var_29_float >= var_71_float; // 0xadc GE
	if(var_72_bool == 0) goto Label_2787; // 0xadd JumpB
	var_73_bool = 0; // 0xade PushV
	func_2813(var_68_bool, var_73_bool); // 0xadf NEW_2
	if(var_73_bool == 0) goto Label_2787; // 0xae1 JumpB
	var_68_bool = 0; // 0xae2 MovB
	
Label_2787:
	if(var_68_bool == 0) goto Label_2789; // 0xae3 JumpB
	var_65_bool = 1; // 0xae4 MovB
	
Label_2789:
	if(var_65_bool == 0) goto Label_2796; // 0xae5 JumpB
	Stop(); // 0xae6 Func
	var_93_cvector = CVector(0,0,0); // 0xae8 PushV
	func_3023(var_93_cvector); // 0xae9 NEW_2
	var_1_object = var_93_cvector + var_28_cvector; // 0xaeb Add2
}


task_8_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_cvector, var_21_bool)
{
	func_2797(var_21_bool); // 0xaf6 NEW_2
	var_23_object = Obj(); // 0xaf8 PushV
	var_23_object = var_21_bool; // 0xaf9 Mov
	func_4159(); // 0xafa NEW_2
	return 0; // 0xafc Return
}


task_9_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	func_2991(var_20_bool); // 0xb0e NEW_2
	func_4473(); // 0xb11 NEW_2
	return 0; // 0xb13 Return
}


task_9_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_int)
{
	var_22_cvector = CVector(0,0,0); var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_float = 0; // 0xb7b PushV
	var_30_int = 120; // 0xb7c PushI
	var_31_bool = var_21_int != var_30_int; // 0xb7d Neq
	if(var_31_bool == 0) goto Label_2944; // 0xb7e JumpB
	return 8; // 0xb7f Return
	
Label_2944:
	var_32_bool = var_0_object == 0; // 0xb80 NullEq
	if(var_32_bool == 0) goto Label_2953; // 0xb81 JumpB
	Stop(); // 0xb82 Func
	var_33_int = 1; // 0xb84 PushI
	KillTimer(var_33_int); // 0xb85 Func
	var_2_object = 1; // 0xb87 TMovB
	goto Label_2990; // 0xb88 Jump
	
Label_2990:
	return 8; // 0xbae Return
	
Label_2953:
	GetDirection(var_26_cvector); // 0xb89 Func
	var_34_float = 7000.0; // 0xb8b PushF
	FindDirLength(var_27_float, var_26_cvector, var_34_float); // 0xb8c Func
	var_35_cvector = CVector(0,0,0); var_36_float = 0; // 0xb8e PushV
	var_36_float = 1.74533; // 0xb8f MovF
	func_2836(var_35_cvector, var_36_float); // 0xb90 NEW_2
	var_28_cvector = var_35_cvector; // 0xb91 Mov
	var_29_float = var_28_cvector | var_28_cvector; // 0xb93 Or2
	var_65_bool = 0; // 0xb94 PushV
	var_65_bool = 0; // 0xb95 MovB
	var_66_float = 2500.0; // 0xb96 PushF
	var_67_bool = var_29_float >= var_66_float; // 0xb97 GE
	if(var_67_bool == 0) goto Label_2983; // 0xb98 JumpB
	var_68_bool = 0; // 0xb99 PushV
	var_68_bool = 1; // 0xb9a MovB
	var_69_float = var_27_float * var_27_float; // 0xb9b Mult
	var_70_float = 2.25; // 0xb9c PushF
	var_71_float = var_69_float * var_70_float; // 0xb9d Mult
	var_72_bool = var_29_float >= var_71_float; // 0xb9e GE
	if(var_72_bool == 0) goto Label_2981; // 0xb9f JumpB
	var_73_bool = 0; // 0xba0 PushV
	func_3007(var_68_bool, var_73_bool); // 0xba1 NEW_2
	if(var_73_bool == 0) goto Label_2981; // 0xba3 JumpB
	var_68_bool = 0; // 0xba4 MovB
	
Label_2981:
	if(var_68_bool == 0) goto Label_2983; // 0xba5 JumpB
	var_65_bool = 1; // 0xba6 MovB
	
Label_2983:
	if(var_65_bool == 0) goto Label_2990; // 0xba7 JumpB
	Stop(); // 0xba8 Func
	var_93_cvector = CVector(0,0,0); // 0xbaa PushV
	func_3023(var_93_cvector); // 0xbab NEW_2
	var_1_object = var_93_cvector + var_28_cvector; // 0xbad Add2
}


task_9_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_object)
{
	func_2991(var_21_object); // 0xbb8 NEW_2
	var_23_object = Obj(); // 0xbba PushV
	var_23_object = var_21_object; // 0xbbb Mov
	func_4159(); // 0xbbc NEW_2
	return 0; // 0xbbe Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_object, var_22_string)
{
	var_23_float = 0; var_24_float = 0; // 0x1032 PushV
	var_25_string = "health"; // 0x1033 PushS
	var_26_bool = var_22_string == var_25_string; // 0x1034 Eq
	if(var_26_bool == 0) goto Label_4158; // 0x1035 JumpB
	var_27_string = "health"; // 0x1036 PushS
	GetProperty(var_27_string, var_24_float); // 0x1037 Func
	var_28_int = 0; // 0x1039 PushI
	var_29_bool = var_24_float <= var_28_int; // 0x103a LE
	if(var_29_bool == 0) goto Label_4158; // 0x103b JumpB
	SignalDeath(var_21_object); // 0x103c Func
	
Label_4158:
	return 2; // 0x103e Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_object)
{
	var_22_object = Obj(); // 0x1040 PushV
	var_22_object = var_21_object; // 0x1041 Mov
	func_4138(var_22_object); // 0x1042 NEW_2
	return 0; // 0x1044 Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_object, var_22_int, var_23_float, var_24_float)
{
	var_25_object = Obj(); var_26_int = 0; var_27_float = 0; // 0x1046 PushV
	var_25_object = var_21_object; // 0x1047 Mov
	var_26_int = var_22_int; // 0x1048 Mov
	var_27_float = var_23_float; // 0x1049 Mov
	func_3169(var_25_object, var_26_int, var_27_float); // 0x104a NEW_2
	return 0; // 0x104c Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_object, var_22_int, var_23_float, var_24_float, var_25_cvector, var_26_cvector)
{
	var_27_object = Obj(); var_28_int = 0; var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); // 0x104e PushV
	var_27_object = var_21_object; // 0x104f Mov
	var_28_int = var_22_int; // 0x1050 Mov
	var_29_float = var_23_float; // 0x1051 Mov
	var_30_cvector = var_25_cvector; // 0x1052 Mov
	var_31_cvector = var_26_cvector; // 0x1053 Mov
	func_3237(var_29_float, var_30_cvector, var_31_cvector); // 0x1054 NEW_2
	return 0; // 0x1056 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_bool = 1; // 0x534 PushB
	SensePlayerOnly(var_21_bool); // 0x535 Func
	func_4716(); // 0x538 NEW_2
	func_1347(); // 0x53b NEW_2
	
Label_1341:
	var_2_object = 0; // 0x53d TMovB
	func_1608(var_19_cvector, var_20_bool); // 0x53f NEW_2
	goto Label_1341; // 0x541 Jump
}


func_0(var_0_object, var_46_int, var_47_object)
{
	var_49_object = Obj(); var_50_bool = 0; var_51_int = 0; var_52_bool = 0; var_53_object = Obj(); var_54_bool = 0; var_55_int = 0; var_56_bool = 0; // 0x0 PushV
	var_0_object = var_47_object; // 0x1 TMov
	var_57_bool = 0; var_58_object = Obj(); var_59_float = 0; // 0x2 PushV
	var_58_object = var_47_object; // 0x3 Mov
	var_59_float = 70.0; // 0x4 MovF
	func_3267(var_58_object, var_59_float); // 0x5 NEW_2
	var_103_bool = var_57_bool == 0; // 0x7 Not
	if(var_103_bool == 0) goto Label_11; // 0x8 JumpB
	var_46_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_53_object); // 0xb Func
	var_104_int = 0; // 0xd PushV
	func_4708(var_104_int); // 0xe NEW_2
	SetNPCName(var_104_int); // 0x10 ObjFunc
	var_105_int = 0; // 0x12 PushV
	func_4706(var_105_int); // 0x13 NEW_2
	SetNPCDescription(var_105_int); // 0x15 ObjFunc
	var_106_string = ""; // 0x17 PushV
	func_4710(var_106_string); // 0x18 NEW_2
	SetPhoto(var_106_string); // 0x1a ObjFunc
	var_107_string = ""; // 0x1c PushV
	func_4712(var_107_string); // 0x1d NEW_2
	SetPhoto2(var_107_string); // 0x1f ObjFunc
	var_108_int = 0; // 0x21 PushV
	func_3767(var_108_int); // 0x22 NEW_2
	SetPlayerName(var_108_int); // 0x24 ObjFunc
	var_55_int = -1; // 0x26 MovI
	IsOverrideActive(var_54_bool); // 0x27 Func
	var_116_bool = var_54_bool; // 0x29 Push
	if(var_116_bool == 0) goto Label_45; // 0x2a JumpB
	var_46_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_53_object); // 0x2d Func
	var_117_object = Obj(); var_118_object = Obj(); // 0x2f PushV
	var_117_object = var_47_object; // 0x30 Mov
	var_118_object = var_53_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_119_object, var_120_object, var_121_string, var_122_bool, var_117_object, var_118_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_56_bool); // 0x36 ObjFunc
	
Label_56:
	var_373_bool = var_56_bool == 0; // 0x38 Not
	if(var_373_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_56_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_374_object = Obj(); // 0x3f PushV
	var_374_object = var_47_object; // 0x40 Mov
	func_3335(); // 0x41 NEW_2
	StopDialog(var_53_object); // 0x43 Func
	GetReturnValue(var_55_int); // 0x45 ObjFunc
	var_46_int = var_55_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_1543(var_2_object)
{
	var_22_int = 110; // 0x607 PushI
	KillTimer(var_22_int); // 0x608 Func
	var_2_object = 0; // 0x60a TMovB
	func_1679(var_20_cvector, var_21_bool); // 0x60c NEW_2
	return 0; // 0x60e Return
}


func_3593(var_187_bool, var_188_object)
{
	var_189_bool = 0; var_190_object = Obj(); // 0xe0a PushV
	var_190_object = var_188_object; // 0xe0b Mov
	func_3704(var_190_object); // 0xe0c NEW_2
	if(var_189_bool == 0) goto Label_3601; // 0xe0e JumpB
	var_187_bool = 1; // 0xe0f MovB
	return 0; // 0xe10 Return
	
Label_3601:
	var_187_bool = 0; // 0xe11 MovB
	return 0; // 0xe12 Return
}


func_1551(var_2_object)
{
	var_80_int = 110; // 0x60f PushI
	KillTimer(var_80_int); // 0x610 Func
	var_2_object = 0; // 0x612 TMovB
	func_1686(var_25_bool, var_26_int); // 0x614 NEW_2
	return 0; // 0x616 Return
}


func_3603(var_202_bool, var_203_object)
{
	var_204_bool = 0; var_205_object = Obj(); // 0xe14 PushV
	var_205_object = var_203_object; // 0xe15 Mov
	func_3711(var_205_object); // 0xe16 NEW_2
	if(var_204_bool == 0) goto Label_3611; // 0xe18 JumpB
	var_202_bool = 1; // 0xe19 MovB
	return 0; // 0xe1a Return
	
Label_3611:
	var_202_bool = 0; // 0xe1b MovB
	return 0; // 0xe1c Return
}


func_3613(var_208_bool, var_209_object)
{
	var_210_bool = 0; var_211_object = Obj(); // 0xe1e PushV
	var_211_object = var_209_object; // 0xe1f Mov
	func_3718(var_211_object); // 0xe20 NEW_2
	if(var_210_bool == 0) goto Label_3621; // 0xe22 JumpB
	var_208_bool = 1; // 0xe23 MovB
	return 0; // 0xe24 Return
	
Label_3621:
	var_208_bool = 0; // 0xe25 MovB
	return 0; // 0xe26 Return
}


func_3101(var_28_bool, var_29_object)
{
	var_30_int = 0; var_31_int = 0; // 0xc1d PushV
	var_32_bool = 0; var_33_object = Obj(); // 0xc1e PushV
	var_33_object = var_29_object; // 0xc1f Mov
	func_3065(var_32_bool, var_33_object); // 0xc20 NEW_2
	var_49_bool = var_32_bool == 0; // 0xc22 Not
	if(var_49_bool == 0) goto Label_3110; // 0xc23 JumpB
	var_28_bool = 0; // 0xc24 MovB
	return 2; // 0xc25 Return
	
Label_3110:
	var_50_bool = 0; var_51_object = Obj(); var_52_string = ""; // 0xc26 PushV
	var_51_object = var_29_object; // 0xc27 Mov
	var_52_string = "noaccess"; // 0xc28 MovS
	func_3048(var_50_bool, var_51_object, var_52_string); // 0xc29 NEW_2
	var_59_bool = var_50_bool == 0; // 0xc2b Not
	if(var_59_bool == 0) goto Label_3119; // 0xc2c JumpB
	var_28_bool = 1; // 0xc2d MovB
	return 2; // 0xc2e Return
	
Label_3119:
	var_60_string = "noaccess"; // 0xc2f PushS
	GetProperty(var_60_string, var_31_int); // 0xc30 ObjFunc
	var_61_int = 0; // 0xc32 PushI
	var_28_bool = var_31_int == var_61_int; // 0xc33 Eq2
	return 2; // 0xc34 Return
}


func_1568(var_2_object, var_22_object)
{
	var_23_bool = 0; var_24_int = 0; var_25_bool = 0; var_26_int = 0; // 0x620 PushV
	var_27_bool = 0; var_28_object = Obj(); // 0x621 PushV
	var_28_object = var_22_object; // 0x622 Mov
	func_3101(var_27_bool, var_28_object); // 0x623 NEW_2
	var_61_bool = var_27_bool == 0; // 0x625 Not
	if(var_61_bool == 0) goto Label_1576; // 0x626 JumpB
	return 4; // 0x627 Return
	
Label_1576:
	var_62_object = var_2_object; // 0x628 PushT
	if(var_62_object == 0) goto Label_1579; // 0x629 JumpB
	return 4; // 0x62a Return
	
Label_1579:
	IsPlayerActor(var_22_object, var_25_bool); // 0x62b Func
	var_63_bool = var_25_bool == 0; // 0x62d Not
	if(var_63_bool == 0) goto Label_1584; // 0x62e JumpB
	return 4; // 0x62f Return
	
Label_1584:
	var_64_int = 0; var_65_object = Obj(); // 0x630 PushV
	var_65_object = var_22_object; // 0x631 Mov
	func_4335(var_65_object); // 0x632 NEW_2
	var_26_int = var_64_int; // 0x633 Mov
	var_76_int = 0; // 0x635 PushI
	var_77_bool = var_26_int > var_76_int; // 0x636 GT
	if(var_77_bool == 0) goto Label_1607; // 0x637 JumpB
	var_78_int = 1; // 0x638 PushI
	var_79_bool = var_26_int > var_78_int; // 0x639 GT
	if(var_79_bool == 0) goto Label_1598; // 0x63a JumpB
	func_1551(var_26_int); // 0x63c NEW_2
	
Label_1598:
	var_81_object = Obj(); // 0x63e PushV
	var_81_object = var_22_object; // 0x63f Mov
	func_4344(var_81_object); // 0x640 NEW_2
	var_2_object = 1; // 0x642 TMovB
	var_146_int = 110; // 0x643 PushI
	var_147_float = 10.0; // 0x644 PushF
	SetTimer(var_146_int, var_147_float); // 0x645 Func
	
Label_1607:
	return 4; // 0x647 Return
}


func_4133(var_141_int, var_142_string)
{
	var_143_int = 0; var_144_int = 0; // 0x1025 PushV
	GetInvItemByName(var_144_int, var_142_string); // 0x1026 Func
	var_141_int = var_144_int; // 0x1028 Mov
	return 2; // 0x1029 Return
}


func_3623(var_214_bool, var_215_object)
{
	var_216_bool = 0; var_217_object = Obj(); // 0xe28 PushV
	var_217_object = var_215_object; // 0xe29 Mov
	func_3725(var_217_object); // 0xe2a NEW_2
	if(var_216_bool == 0) goto Label_3631; // 0xe2c JumpB
	var_214_bool = 1; // 0xe2d MovB
	return 0; // 0xe2e Return
	
Label_3631:
	var_214_bool = 0; // 0xe2f MovB
	return 0; // 0xe30 Return
}


func_4138(var_22_object)
{
	var_23_object = Obj(); // 0x102b PushV
	var_23_object = var_22_object; // 0x102c Mov
	TaskCall(2); // 0x102d TaskCall
	func_1176(var_23_object); // 0x102e NEW_2
	TaskReturn(); // 0x102f TaskReturn
	return 0; // 0x1031 Return
}


func_2603(var_2_object)
{
	Stop(); // 0xa2b Func
	var_22_int = 120; // 0xa2d PushI
	KillTimer(var_22_int); // 0xa2e Func
	var_2_object = 1; // 0xa30 TMovB
	return 0; // 0xa31 Return
}


func_3633(var_220_bool, var_221_object)
{
	var_222_bool = 0; var_223_object = Obj(); // 0xe32 PushV
	var_223_object = var_221_object; // 0xe33 Mov
	func_3732(var_223_object); // 0xe34 NEW_2
	if(var_222_bool == 0) goto Label_3641; // 0xe36 JumpB
	var_220_bool = 1; // 0xe37 MovB
	return 0; // 0xe38 Return
	
Label_3641:
	var_220_bool = 0; // 0xe39 MovB
	return 0; // 0xe3a Return
}


func_3125(var_38_object)
{
	var_39_bool = 0; var_40_int = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_string = ""; var_46_bool = 0; var_47_int = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_string = ""; // 0xc35 PushV
	var_53_bool = var_38_object == 0; // 0xc36 NullEq
	if(var_53_bool == 0) goto Label_3129; // 0xc37 JumpB
	return 14; // 0xc38 Return
	
Label_3129:
	IsDead(var_46_bool); // 0xc39 Func
	var_54_bool = var_46_bool; // 0xc3b Push
	if(var_54_bool == 0) goto Label_3134; // 0xc3c JumpB
	return 14; // 0xc3d Return
	
Label_3134:
	GetSecondaryAnimationType(var_47_int); // 0xc3e Func
	var_55_int = 0; // 0xc40 PushI
	var_56_bool = var_47_int < var_55_int; // 0xc41 LT
	if(var_56_bool == 0) goto Label_3140; // 0xc42 JumpB
	return 14; // 0xc43 Return
	
Label_3140:
	GetPosition(var_48_cvector); // 0xc44 ObjFunc
	GetPosition(var_49_cvector); // 0xc46 Func
	GetDirection(var_50_cvector); // 0xc48 Func
	var_51_cvector = var_49_cvector - var_48_cvector; // 0xc4a Sub2
	var_57_float = GetByIndex(var_51_cvector, 0); // 0xc4b PushE
	var_58_float = GetByIndex(var_50_cvector, 0); // 0xc4c PushE
	var_59_float = var_57_float * var_58_float; // 0xc4d Mult
	var_60_float = GetByIndex(var_51_cvector, 2); // 0xc4e PushE
	var_61_float = GetByIndex(var_50_cvector, 2); // 0xc4f PushE
	var_62_float = var_60_float * var_61_float; // 0xc50 Mult
	var_63_int = var_59_float + var_62_float; // 0xc51 Add
	var_64_int = 0; // 0xc52 PushI
	var_65_bool = var_63_int >= var_64_int; // 0xc53 GE
	if(var_65_bool == 0) goto Label_3159; // 0xc54 JumpB
	var_52_string = "fhit"; // 0xc55 MovS
	goto Label_3160; // 0xc56 Jump
	
Label_3160:
	var_66_string = "hit_react"; // 0xc58 PushS
	var_67_string = "1"; // 0xc59 PushS
	var_68_int = var_52_string + var_67_string; // 0xc5a Add
	var_69_string = "2"; // 0xc5b PushS
	var_70_int = var_52_string + var_69_string; // 0xc5c Add
	var_71_int = -10; // 0xc5d PushI
	FadeSecondaryAnimation(var_66_string, var_68_int, var_70_int, var_71_int); // 0xc5e Func
	return 14; // 0xc60 Return
	
Label_3159:
	var_52_string = "bhit"; // 0xc57 MovS
}


func_3643(var_232_bool, var_233_object)
{
	var_234_bool = 0; var_235_object = Obj(); // 0xe3c PushV
	var_235_object = var_233_object; // 0xe3d Mov
	func_3739(var_235_object); // 0xe3e NEW_2
	if(var_234_bool == 0) goto Label_3651; // 0xe40 JumpB
	var_232_bool = 1; // 0xe41 MovB
	return 0; // 0xe42 Return
	
Label_3651:
	var_232_bool = 0; // 0xe43 MovB
	return 0; // 0xe44 Return
}


func_2619(var_0_object, var_73_bool)
{
	var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); // 0xa3b PushV
	GetDirection(var_76_cvector); // 0xa3c Func
	var_78_cvector = CVector(0,0,0); var_79_object = Obj(); // 0xa3e PushV
	var_79_object = var_0_object; // 0xa3f MovT
	func_3028(var_79_object); // 0xa40 NEW_2
	var_77_cvector = var_78_cvector; // 0xa41 Mov
	var_84_float = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); // 0xa43 PushV
	var_85_cvector = var_76_cvector; // 0xa44 Mov
	var_86_cvector = var_77_cvector; // 0xa45 Mov
	func_3464(var_84_float, var_85_cvector, var_86_cvector); // 0xa46 NEW_2
	var_92_float = -0.34202; // 0xa48 PushF
	var_73_bool = var_84_float >= var_92_float; // 0xa49 GE2
	return 4; // 0xa4a Return
}


func_4675(var_449_bool)
{
	var_451_int = 0; var_452_bool = 0; var_453_int = 0; var_454_int = 0; var_455_bool = 0; var_456_int = 0; // 0x1243 PushV
	GetItemID(var_454_int); // 0x1244 ObjFunc
	var_457_string = "Category"; // 0x1246 PushS
	HasInvItemProperty(var_455_bool, var_454_int, var_457_string); // 0x1247 Func
	var_458_bool = var_455_bool == 0; // 0x1249 Not
	if(var_458_bool == 0) goto Label_4685; // 0x124a JumpB
	var_449_bool = 0; // 0x124b MovB
	return 6; // 0x124c Return
	
Label_4685:
	var_459_string = "Category"; // 0x124d PushS
	GetInvItemProperty(var_456_int, var_454_int, var_459_string); // 0x124e Func
	var_460_int = 1; // 0x1250 PushI
	var_449_bool = var_456_int == var_460_int; // 0x1251 Eq2
	return 6; // 0x1252 Return
}


func_3653(var_238_bool, var_239_object)
{
	var_240_bool = 0; var_241_object = Obj(); // 0xe46 PushV
	var_241_object = var_239_object; // 0xe47 Mov
	func_3746(var_241_object); // 0xe48 NEW_2
	if(var_240_bool == 0) goto Label_3661; // 0xe4a JumpB
	var_238_bool = 1; // 0xe4b MovB
	return 0; // 0xe4c Return
	
Label_3661:
	var_238_bool = 0; // 0xe4d MovB
	return 0; // 0xe4e Return
}


func_1608(var_0_object, var_1_object)
{
	var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_bool = 0; var_31_object = Obj(); var_32_bool = 0; var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; var_37_object = Obj(); var_38_bool = 0; // 0x648 PushV
	var_0_object = 0; // 0x649 TMovB
	var_1_object = 0; // 0x64a TMovB
	var_39_float = 0.5; // 0x64b PushF
	rand(var_33_float, var_39_float); // 0x64c Func
	Sleep(var_33_float); // 0x64e Func
	
Label_1616:
	var_40_bool = var_0_object == 0; // 0x650 Not
	if(var_40_bool == 0) goto Label_1666; // 0x651 JumpB
	var_41_bool = var_1_object == 0; // 0x652 Not
	if(var_41_bool == 0) goto Label_1635; // 0x653 JumpB
	
Label_1620:
	GetPosition(var_35_cvector); // 0x654 Func
	var_42_float = 0; // 0x656 PushV
	func_1667(var_42_float); // 0x657 NEW_2
	GetRandomPFPointInCircle(var_34_cvector, var_35_cvector, var_42_float, var_36_bool); // 0x659 Func
	var_45_bool = var_36_bool; // 0x65b Push
	if(var_45_bool == 0) goto Label_1630; // 0x65c JumpB
	goto Label_1634; // 0x65d Jump
	
Label_1634:
	goto Label_1636; // 0x662 Jump
	
Label_1636:
	var_46_object = Obj(); var_47_cvector = CVector(0,0,0); // 0x664 PushV
	var_47_cvector = var_34_cvector; // 0x665 Mov
	func_1695(var_46_object, var_47_cvector); // 0x666 NEW_2
	var_37_object = var_46_object; // 0x667 Mov
	var_50_bool = var_37_object != 0; // 0x669 NullNeq
	if(var_50_bool == 0) goto Label_1661; // 0x66a JumpB
	RotatePath(var_37_object, var_38_bool); // 0x66b Func
	var_51_bool = var_38_bool; // 0x66d Push
	if(var_51_bool == 0) goto Label_1660; // 0x66e JumpB
	var_52_bool = 0; // 0x66f PushV
	func_1693(var_52_bool); // 0x670 NEW_2
	FollowPath(var_37_object, var_52_bool, var_38_bool); // 0x672 Func
	var_37_object = 0; // 0x674 SetNull
	var_53_bool = var_38_bool; // 0x675 Push
	if(var_53_bool == 0) goto Label_1660; // 0x676 JumpB
	TaskCall(4); // 0x678 TaskCall
	func_1865(); // 0x679 NEW_2
	TaskReturn(); // 0x67a TaskReturn
	
Label_1660:
	goto Label_1664; // 0x67c Jump
	
Label_1664:
	var_37_object = 0; // 0x680 SetNull
	goto Label_1616; // 0x681 Jump
	
Label_1661:
	var_105_int = 1; // 0x67d PushI
	Sleep(var_105_int); // 0x67e Func
	
Label_1630:
	var_106_int = 1; // 0x65e PushI
	Sleep(var_106_int); // 0x65f Func
	goto Label_1620; // 0x661 Jump
	
Label_1635:
	var_1_object = 0; // 0x663 TMovB
	
Label_1666:
	return 12; // 0x682 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_117_object, var_118_object)
{
	var_0_object = var_118_object; // 0x4b TMov
	var_1_object = var_117_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_123_int = 1; // 0x4e PushI
	if(var_123_int == 0) goto Label_470; // 0x4f JumpB
	var_124_bool = 0; var_125_object = Obj(); // 0x50 PushV
	var_125_object = var_1_object; // 0x51 MovT
	func_3551(var_125_object); // 0x52 NEW_2
	if(var_124_bool == 0) goto Label_410; // 0x54 JumpB
	var_132_string = ""; // 0x55 PushV
	var_132_string = "Neutral"; // 0x56 MovS
	func_500(var_118_object, var_132_string); // 0x57 NEW_2
	var_149_int = 543180; // 0x59 PushI
	SetMessage(var_149_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_150_bool = 0; // 0x5e PushV
	var_150_bool = 1; // 0x5f MovB
	var_151_bool = 0; // 0x60 PushV
	var_151_bool = 1; // 0x61 MovB
	var_152_bool = 0; var_153_object = Obj(); // 0x62 PushV
	var_153_object = var_1_object; // 0x63 MovT
	func_3563(var_152_bool, var_153_object); // 0x64 NEW_2
	if(var_152_bool == 0) goto Label_109; // 0x66 JumpB
	var_163_bool = 0; var_164_object = Obj(); // 0x67 PushV
	var_164_object = var_1_object; // 0x68 MovT
	func_3573(var_163_bool, var_164_object); // 0x69 NEW_2
	if(var_163_bool == 0) goto Label_109; // 0x6b JumpB
	var_151_bool = 0; // 0x6c MovB
	
Label_109:
	if(var_151_bool == 0) goto Label_116; // 0x6d JumpB
	var_169_bool = 0; var_170_object = Obj(); // 0x6e PushV
	var_170_object = var_1_object; // 0x6f MovT
	func_3583(var_169_bool, var_170_object); // 0x70 NEW_2
	if(var_169_bool == 0) goto Label_116; // 0x72 JumpB
	var_150_bool = 0; // 0x73 MovB
	
Label_116:
	if(var_150_bool == 0) goto Label_122; // 0x74 JumpB
	var_175_int = 543182; // 0x75 PushI
	var_176_int = -1; // 0x76 PushI
	var_177_int = 45638; // 0x77 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x78 TObjFunc
	
Label_122:
	var_178_bool = 0; // 0x7a PushV
	var_178_bool = 1; // 0x7b MovB
	var_179_bool = 0; // 0x7c PushV
	var_179_bool = 1; // 0x7d MovB
	var_180_bool = 0; // 0x7e PushV
	var_180_bool = 1; // 0x7f MovB
	var_181_bool = 0; var_182_object = Obj(); // 0x80 PushV
	var_182_object = var_1_object; // 0x81 MovT
	func_3563(var_181_bool, var_182_object); // 0x82 NEW_2
	if(var_181_bool == 0) goto Label_139; // 0x84 JumpB
	var_183_bool = 0; var_184_object = Obj(); // 0x85 PushV
	var_184_object = var_1_object; // 0x86 MovT
	func_3573(var_183_bool, var_184_object); // 0x87 NEW_2
	if(var_183_bool == 0) goto Label_139; // 0x89 JumpB
	var_180_bool = 0; // 0x8a MovB
	
Label_139:
	if(var_180_bool == 0) goto Label_146; // 0x8b JumpB
	var_185_bool = 0; var_186_object = Obj(); // 0x8c PushV
	var_186_object = var_1_object; // 0x8d MovT
	func_3583(var_185_bool, var_186_object); // 0x8e NEW_2
	if(var_185_bool == 0) goto Label_146; // 0x90 JumpB
	var_179_bool = 0; // 0x91 MovB
	
Label_146:
	if(var_179_bool == 0) goto Label_153; // 0x92 JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0x93 PushV
	var_188_object = var_1_object; // 0x94 MovT
	func_3593(var_187_bool, var_188_object); // 0x95 NEW_2
	if(var_187_bool == 0) goto Label_153; // 0x97 JumpB
	var_178_bool = 0; // 0x98 MovB
	
Label_153:
	if(var_178_bool == 0) goto Label_159; // 0x99 JumpB
	var_193_int = 543183; // 0x9a PushI
	var_194_int = -1; // 0x9b PushI
	var_195_int = 45639; // 0x9c PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x9d TObjFunc
	
Label_159:
	var_196_bool = 0; // 0x9f PushV
	var_196_bool = 1; // 0xa0 MovB
	var_197_bool = 0; // 0xa1 PushV
	var_197_bool = 1; // 0xa2 MovB
	var_198_bool = 0; // 0xa3 PushV
	var_198_bool = 1; // 0xa4 MovB
	var_199_bool = 0; // 0xa5 PushV
	var_199_bool = 1; // 0xa6 MovB
	var_200_bool = 0; var_201_object = Obj(); // 0xa7 PushV
	var_201_object = var_1_object; // 0xa8 MovT
	func_3593(var_200_bool, var_201_object); // 0xa9 NEW_2
	if(var_200_bool == 0) goto Label_178; // 0xab JumpB
	var_202_bool = 0; var_203_object = Obj(); // 0xac PushV
	var_203_object = var_1_object; // 0xad MovT
	func_3603(var_202_bool, var_203_object); // 0xae NEW_2
	if(var_202_bool == 0) goto Label_178; // 0xb0 JumpB
	var_199_bool = 0; // 0xb1 MovB
	
Label_178:
	if(var_199_bool == 0) goto Label_185; // 0xb2 JumpB
	var_208_bool = 0; var_209_object = Obj(); // 0xb3 PushV
	var_209_object = var_1_object; // 0xb4 MovT
	func_3613(var_208_bool, var_209_object); // 0xb5 NEW_2
	if(var_208_bool == 0) goto Label_185; // 0xb7 JumpB
	var_198_bool = 0; // 0xb8 MovB
	
Label_185:
	if(var_198_bool == 0) goto Label_192; // 0xb9 JumpB
	var_214_bool = 0; var_215_object = Obj(); // 0xba PushV
	var_215_object = var_1_object; // 0xbb MovT
	func_3623(var_214_bool, var_215_object); // 0xbc NEW_2
	if(var_214_bool == 0) goto Label_192; // 0xbe JumpB
	var_197_bool = 0; // 0xbf MovB
	
Label_192:
	if(var_197_bool == 0) goto Label_199; // 0xc0 JumpB
	var_220_bool = 0; var_221_object = Obj(); // 0xc1 PushV
	var_221_object = var_1_object; // 0xc2 MovT
	func_3633(var_220_bool, var_221_object); // 0xc3 NEW_2
	if(var_220_bool == 0) goto Label_199; // 0xc5 JumpB
	var_196_bool = 0; // 0xc6 MovB
	
Label_199:
	if(var_196_bool == 0) goto Label_205; // 0xc7 JumpB
	var_226_int = 543187; // 0xc8 PushI
	var_227_int = -1; // 0xc9 PushI
	var_228_int = 45643; // 0xca PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0xcb TObjFunc
	
Label_205:
	var_229_bool = 0; // 0xcd PushV
	var_229_bool = 1; // 0xce MovB
	var_230_bool = 0; // 0xcf PushV
	var_230_bool = 1; // 0xd0 MovB
	var_231_bool = 0; // 0xd1 PushV
	var_231_bool = 1; // 0xd2 MovB
	var_232_bool = 0; var_233_object = Obj(); // 0xd3 PushV
	var_233_object = var_1_object; // 0xd4 MovT
	func_3643(var_232_bool, var_233_object); // 0xd5 NEW_2
	if(var_232_bool == 0) goto Label_222; // 0xd7 JumpB
	var_238_bool = 0; var_239_object = Obj(); // 0xd8 PushV
	var_239_object = var_1_object; // 0xd9 MovT
	func_3653(var_238_bool, var_239_object); // 0xda NEW_2
	if(var_238_bool == 0) goto Label_222; // 0xdc JumpB
	var_231_bool = 0; // 0xdd MovB
	
Label_222:
	if(var_231_bool == 0) goto Label_229; // 0xde JumpB
	var_244_bool = 0; var_245_object = Obj(); // 0xdf PushV
	var_245_object = var_1_object; // 0xe0 MovT
	func_3663(var_244_bool, var_245_object); // 0xe1 NEW_2
	if(var_244_bool == 0) goto Label_229; // 0xe3 JumpB
	var_230_bool = 0; // 0xe4 MovB
	
Label_229:
	if(var_230_bool == 0) goto Label_236; // 0xe5 JumpB
	var_250_bool = 0; var_251_object = Obj(); // 0xe6 PushV
	var_251_object = var_1_object; // 0xe7 MovT
	func_3673(var_250_bool, var_251_object); // 0xe8 NEW_2
	if(var_250_bool == 0) goto Label_236; // 0xea JumpB
	var_229_bool = 0; // 0xeb MovB
	
Label_236:
	if(var_229_bool == 0) goto Label_242; // 0xec JumpB
	var_256_int = 543208; // 0xed PushI
	var_257_int = -1; // 0xee PushI
	var_258_int = 45664; // 0xef PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0xf0 TObjFunc
	
Label_242:
	var_259_bool = 0; // 0xf2 PushV
	var_259_bool = 1; // 0xf3 MovB
	var_260_bool = 0; // 0xf4 PushV
	var_260_bool = 1; // 0xf5 MovB
	var_261_bool = 0; var_262_object = Obj(); // 0xf6 PushV
	var_262_object = var_1_object; // 0xf7 MovT
	func_3563(var_261_bool, var_262_object); // 0xf8 NEW_2
	if(var_261_bool == 0) goto Label_257; // 0xfa JumpB
	var_263_bool = 0; var_264_object = Obj(); // 0xfb PushV
	var_264_object = var_1_object; // 0xfc MovT
	func_3573(var_263_bool, var_264_object); // 0xfd NEW_2
	if(var_263_bool == 0) goto Label_257; // 0xff JumpB
	var_260_bool = 0; // 0x100 MovB
	
Label_257:
	if(var_260_bool == 0) goto Label_264; // 0x101 JumpB
	var_265_bool = 0; var_266_object = Obj(); // 0x102 PushV
	var_266_object = var_1_object; // 0x103 MovT
	func_3583(var_265_bool, var_266_object); // 0x104 NEW_2
	if(var_265_bool == 0) goto Label_264; // 0x106 JumpB
	var_259_bool = 0; // 0x107 MovB
	
Label_264:
	if(var_259_bool == 0) goto Label_270; // 0x108 JumpB
	var_267_int = 543181; // 0x109 PushI
	var_268_int = -1; // 0x10a PushI
	var_269_int = 45637; // 0x10b PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0x10c TObjFunc
	
Label_270:
	var_270_bool = 0; // 0x10e PushV
	var_270_bool = 1; // 0x10f MovB
	var_271_bool = 0; // 0x110 PushV
	var_271_bool = 1; // 0x111 MovB
	var_272_bool = 0; var_273_object = Obj(); // 0x112 PushV
	var_273_object = var_1_object; // 0x113 MovT
	func_3593(var_272_bool, var_273_object); // 0x114 NEW_2
	if(var_272_bool == 0) goto Label_285; // 0x116 JumpB
	var_274_bool = 0; var_275_object = Obj(); // 0x117 PushV
	var_275_object = var_1_object; // 0x118 MovT
	func_3603(var_274_bool, var_275_object); // 0x119 NEW_2
	if(var_274_bool == 0) goto Label_285; // 0x11b JumpB
	var_271_bool = 0; // 0x11c MovB
	
Label_285:
	if(var_271_bool == 0) goto Label_292; // 0x11d JumpB
	var_276_bool = 0; var_277_object = Obj(); // 0x11e PushV
	var_277_object = var_1_object; // 0x11f MovT
	func_3613(var_276_bool, var_277_object); // 0x120 NEW_2
	if(var_276_bool == 0) goto Label_292; // 0x122 JumpB
	var_270_bool = 0; // 0x123 MovB
	
Label_292:
	if(var_270_bool == 0) goto Label_298; // 0x124 JumpB
	var_278_int = 543184; // 0x125 PushI
	var_279_int = -1; // 0x126 PushI
	var_280_int = 45640; // 0x127 PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x128 TObjFunc
	
Label_298:
	var_281_bool = 0; // 0x12a PushV
	var_281_bool = 1; // 0x12b MovB
	var_282_bool = 0; // 0x12c PushV
	var_282_bool = 1; // 0x12d MovB
	var_283_bool = 0; // 0x12e PushV
	var_283_bool = 1; // 0x12f MovB
	var_284_bool = 0; var_285_object = Obj(); // 0x130 PushV
	var_285_object = var_1_object; // 0x131 MovT
	func_3583(var_284_bool, var_285_object); // 0x132 NEW_2
	if(var_284_bool == 0) goto Label_315; // 0x134 JumpB
	var_286_bool = 0; var_287_object = Obj(); // 0x135 PushV
	var_287_object = var_1_object; // 0x136 MovT
	func_3613(var_286_bool, var_287_object); // 0x137 NEW_2
	if(var_286_bool == 0) goto Label_315; // 0x139 JumpB
	var_283_bool = 0; // 0x13a MovB
	
Label_315:
	if(var_283_bool == 0) goto Label_322; // 0x13b JumpB
	var_288_bool = 0; var_289_object = Obj(); // 0x13c PushV
	var_289_object = var_1_object; // 0x13d MovT
	func_3623(var_288_bool, var_289_object); // 0x13e NEW_2
	if(var_288_bool == 0) goto Label_322; // 0x140 JumpB
	var_282_bool = 0; // 0x141 MovB
	
Label_322:
	if(var_282_bool == 0) goto Label_329; // 0x142 JumpB
	var_290_bool = 0; var_291_object = Obj(); // 0x143 PushV
	var_291_object = var_1_object; // 0x144 MovT
	func_3633(var_290_bool, var_291_object); // 0x145 NEW_2
	if(var_290_bool == 0) goto Label_329; // 0x147 JumpB
	var_281_bool = 0; // 0x148 MovB
	
Label_329:
	if(var_281_bool == 0) goto Label_335; // 0x149 JumpB
	var_292_int = 543185; // 0x14a PushI
	var_293_int = -1; // 0x14b PushI
	var_294_int = 45641; // 0x14c PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0x14d TObjFunc
	
Label_335:
	var_295_bool = 0; // 0x14f PushV
	var_295_bool = 1; // 0x150 MovB
	var_296_bool = 0; // 0x151 PushV
	var_296_bool = 1; // 0x152 MovB
	var_297_bool = 0; var_298_object = Obj(); // 0x153 PushV
	var_298_object = var_1_object; // 0x154 MovT
	func_3643(var_297_bool, var_298_object); // 0x155 NEW_2
	if(var_297_bool == 0) goto Label_350; // 0x157 JumpB
	var_299_bool = 0; var_300_object = Obj(); // 0x158 PushV
	var_300_object = var_1_object; // 0x159 MovT
	func_3653(var_299_bool, var_300_object); // 0x15a NEW_2
	if(var_299_bool == 0) goto Label_350; // 0x15c JumpB
	var_296_bool = 0; // 0x15d MovB
	
Label_350:
	if(var_296_bool == 0) goto Label_357; // 0x15e JumpB
	var_301_bool = 0; var_302_object = Obj(); // 0x15f PushV
	var_302_object = var_1_object; // 0x160 MovT
	func_3663(var_301_bool, var_302_object); // 0x161 NEW_2
	if(var_301_bool == 0) goto Label_357; // 0x163 JumpB
	var_295_bool = 0; // 0x164 MovB
	
Label_357:
	if(var_295_bool == 0) goto Label_363; // 0x165 JumpB
	var_303_int = 543186; // 0x166 PushI
	var_304_int = -1; // 0x167 PushI
	var_305_int = 45642; // 0x168 PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x169 TObjFunc
	
Label_363:
	var_306_bool = 0; // 0x16b PushV
	var_306_bool = 1; // 0x16c MovB
	var_307_bool = 0; // 0x16d PushV
	var_307_bool = 1; // 0x16e MovB
	var_308_bool = 0; // 0x16f PushV
	var_308_bool = 1; // 0x170 MovB
	var_309_bool = 0; // 0x171 PushV
	var_309_bool = 1; // 0x172 MovB
	var_310_bool = 0; var_311_object = Obj(); // 0x173 PushV
	var_311_object = var_1_object; // 0x174 MovT
	func_3613(var_310_bool, var_311_object); // 0x175 NEW_2
	if(var_310_bool == 0) goto Label_382; // 0x177 JumpB
	var_312_bool = 0; var_313_object = Obj(); // 0x178 PushV
	var_313_object = var_1_object; // 0x179 MovT
	func_3633(var_312_bool, var_313_object); // 0x17a NEW_2
	if(var_312_bool == 0) goto Label_382; // 0x17c JumpB
	var_309_bool = 0; // 0x17d MovB
	
Label_382:
	if(var_309_bool == 0) goto Label_389; // 0x17e JumpB
	var_314_bool = 0; var_315_object = Obj(); // 0x17f PushV
	var_315_object = var_1_object; // 0x180 MovT
	func_3643(var_314_bool, var_315_object); // 0x181 NEW_2
	if(var_314_bool == 0) goto Label_389; // 0x183 JumpB
	var_308_bool = 0; // 0x184 MovB
	
Label_389:
	if(var_308_bool == 0) goto Label_396; // 0x185 JumpB
	var_316_bool = 0; var_317_object = Obj(); // 0x186 PushV
	var_317_object = var_1_object; // 0x187 MovT
	func_3673(var_316_bool, var_317_object); // 0x188 NEW_2
	if(var_316_bool == 0) goto Label_396; // 0x18a JumpB
	var_307_bool = 0; // 0x18b MovB
	
Label_396:
	if(var_307_bool == 0) goto Label_403; // 0x18c JumpB
	var_318_bool = 0; var_319_object = Obj(); // 0x18d PushV
	var_319_object = var_1_object; // 0x18e MovT
	func_3653(var_318_bool, var_319_object); // 0x18f NEW_2
	if(var_318_bool == 0) goto Label_403; // 0x191 JumpB
	var_306_bool = 0; // 0x192 MovB
	
Label_403:
	if(var_306_bool == 0) goto Label_409; // 0x193 JumpB
	var_320_int = 543188; // 0x194 PushI
	var_321_int = -1; // 0x195 PushI
	var_322_int = 45644; // 0x196 PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0x197 TObjFunc
	
Label_409:
	goto Label_470; // 0x199 Jump
	
Label_470:
	var_323_bool = 0; // 0x1d6 PushV
	func_4714(var_323_bool); // 0x1d7 NEW_2
	if(var_323_bool == 0) goto Label_485; // 0x1d9 JumpB
	
Label_474:
	lshWaitForAnimEnd(); // 0x1da Func
	var_324_string = var_3_string; // 0x1dc PushT
	if(var_324_string == 0) goto Label_479; // 0x1dd JumpB
	goto Label_484; // 0x1de Jump
	
Label_484:
	goto Label_499; // 0x1e4 Jump
	
Label_499:
	return 0; // 0x1f3 Return
	
Label_479:
	var_325_string = ""; // 0x1df PushV
	var_325_string = var_2_object; // 0x1e0 MovT
	func_3352(var_325_string); // 0x1e1 NEW_2
	goto Label_474; // 0x1e3 Jump
	
Label_485:
	var_336_string = "all"; // 0x1e5 PushS
	var_337_string = "idle"; // 0x1e6 PushS
	PlayAnimation(var_336_string, var_337_string); // 0x1e7 Func
	
Label_489:
	WaitForAnimEnd(); // 0x1e9 Func
	var_338_string = var_3_string; // 0x1eb PushT
	if(var_338_string == 0) goto Label_494; // 0x1ec JumpB
	goto Label_499; // 0x1ed Jump
	
Label_494:
	var_339_string = "all"; // 0x1ee PushS
	var_340_string = "idle"; // 0x1ef PushS
	PlayAnimation(var_339_string, var_340_string); // 0x1f0 Func
	goto Label_489; // 0x1f2 Jump
	
Label_410:
	var_341_string = ""; // 0x19a PushV
	var_341_string = "Neutral"; // 0x19b MovS
	func_500(var_118_object, var_341_string); // 0x19c NEW_2
	var_342_int = 538167; // 0x19e PushI
	SetMessage(var_342_int); // 0x19f TObjFunc
	ClearReplies(); // 0x1a1 TObjFunc
	var_343_int = 538168; // 0x1a3 PushI
	var_344_int = -1; // 0x1a4 PushI
	var_345_int = 40043; // 0x1a5 PushI
	AddReply(var_343_int, var_344_int, var_345_int); // 0x1a6 TObjFunc
	var_346_bool = 0; // 0x1a8 PushV
	var_346_bool = 0; // 0x1a9 MovB
	var_347_bool = 0; var_348_object = Obj(); // 0x1aa PushV
	var_348_object = var_1_object; // 0x1ab MovT
	func_3563(var_347_bool, var_348_object); // 0x1ac NEW_2
	if(var_347_bool == 0) goto Label_437; // 0x1ae JumpB
	var_349_bool = 0; var_350_object = Obj(); // 0x1af PushV
	var_350_object = var_1_object; // 0x1b0 MovT
	func_3527(var_350_object); // 0x1b1 NEW_2
	if(var_349_bool == 0) goto Label_437; // 0x1b3 JumpB
	var_346_bool = 1; // 0x1b4 MovB
	
Label_437:
	if(var_346_bool == 0) goto Label_443; // 0x1b5 JumpB
	var_355_int = 538169; // 0x1b6 PushI
	var_356_int = 40045; // 0x1b7 PushI
	var_357_int = 40044; // 0x1b8 PushI
	AddReply(var_355_int, var_356_int, var_357_int); // 0x1b9 TObjFunc
	
Label_443:
	var_358_bool = 0; // 0x1bb PushV
	var_358_bool = 1; // 0x1bc MovB
	var_359_bool = 0; var_360_object = Obj(); // 0x1bd PushV
	var_360_object = var_1_object; // 0x1be MovT
	func_3527(var_360_object); // 0x1bf NEW_2
	if(var_359_bool == 0) goto Label_456; // 0x1c1 JumpB
	var_361_bool = 0; var_362_object = Obj(); // 0x1c2 PushV
	var_362_object = var_1_object; // 0x1c3 MovT
	func_3539(var_362_object); // 0x1c4 NEW_2
	if(var_361_bool == 0) goto Label_456; // 0x1c6 JumpB
	var_358_bool = 0; // 0x1c7 MovB
	
Label_456:
	if(var_358_bool == 0) goto Label_462; // 0x1c8 JumpB
	var_367_int = 538204; // 0x1c9 PushI
	var_368_int = -1; // 0x1ca PushI
	var_369_int = 40081; // 0x1cb PushI
	AddReply(var_367_int, var_368_int, var_369_int); // 0x1cc TObjFunc
	
Label_462:
	var_370_int = 538205; // 0x1ce PushI
	var_371_int = -1; // 0x1cf PushI
	var_372_int = 40082; // 0x1d0 PushI
	AddReply(var_370_int, var_371_int, var_372_int); // 0x1d1 TObjFunc
	goto Label_470; // 0x1d3 Jump
}


func_3663(var_244_bool, var_245_object)
{
	var_246_bool = 0; var_247_object = Obj(); // 0xe50 PushV
	var_247_object = var_245_object; // 0xe51 Mov
	func_3753(var_247_object); // 0xe52 NEW_2
	if(var_246_bool == 0) goto Label_3671; // 0xe54 JumpB
	var_244_bool = 1; // 0xe55 MovB
	return 0; // 0xe56 Return
	
Label_3671:
	var_244_bool = 0; // 0xe57 MovB
	return 0; // 0xe58 Return
}


func_2642(var_35_cvector, var_36_float)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_float = 0; // 0xa52 PushV
	GetPosition(var_43_cvector); // 0xa53 Func
	GetPosition(var_44_cvector); // 0xa55 TObjFunc
	GetDirection(var_45_cvector); // 0xa57 Func
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); // 0xa59 PushV
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); // 0xa5a PushV
	var_52_cvector = var_43_cvector - var_44_cvector; // 0xa5b Sub2
	func_3448(var_51_cvector, var_52_cvector); // 0xa5c NEW_2
	var_58_float = 0.75; // 0xa5e PushF
	var_59_float = var_45_cvector * var_58_float; // 0xa5f Mult
	var_50_cvector = var_51_cvector + var_59_float; // 0xa60 Add2
	func_3448(var_49_cvector, var_50_cvector); // 0xa61 NEW_2
	var_46_cvector = var_49_cvector; // 0xa62 Mov
	var_60_int = 32; // 0xa64 PushI
	var_61_float = 7000.0; // 0xa65 PushF
	FindLongestDir(var_47_cvector, var_48_float, var_46_cvector, var_36_float, var_60_int, var_61_float); // 0xa66 Func
	var_62_int = 100; // 0xa68 PushI
	var_48_float = var_48_float - var_62_int; // 0xa69 Sub2
	var_63_int = 0; // 0xa6a PushI
	var_64_bool = var_48_float < var_63_int; // 0xa6b LT
	if(var_64_bool == 0) goto Label_2670; // 0xa6c JumpB
	var_48_float = 0; // 0xa6d MovI
	
Label_2670:
	var_35_cvector = var_47_cvector * var_48_float; // 0xa6e Mult2
	return 12; // 0xa6f Return
}


func_4691(var_45_object, var_48_object)
{
	var_46_int = 0; var_47_object = Obj(); // 0x1254 PushV
	var_47_object = var_45_object; // 0x1255 Mov
	TaskCall(0); // 0x1256 TaskCall
	func_0(var_48_object, var_46_int, var_47_object); // 0x1257 NEW_2
	TaskReturn(); // 0x1258 TaskReturn
	var_381_int = 100; // 0x125a PushI
	var_382_bool = var_48_object == var_381_int; // 0x125b Eq
	if(var_382_bool == 0) goto Label_4705; // 0x125c JumpB
	var_383_object = Obj(); // 0x125d PushV
	var_383_object = var_45_object; // 0x125e Mov
	func_4528(); // 0x125f NEW_2
	
Label_4705:
	return 0; // 0x1261 Return
}


func_4183(var_25_bool, var_26_object, var_27_string)
{
	var_28_string = "unholster"; // 0x1058 PushS
	var_29_bool = var_27_string == var_28_string; // 0x1059 Eq
	if(var_29_bool == 0) goto Label_4194; // 0x105a JumpB
	var_30_bool = 0; var_31_object = Obj(); // 0x105b PushV
	var_31_object = var_26_object; // 0x105c Mov
	func_4474(var_30_bool, var_31_object); // 0x105d NEW_2
	var_25_bool = var_30_bool; // 0x105e Mov
	return 0; // 0x1060 Return
	
Label_4194:
	var_34_string = "player_shot"; // 0x1062 PushS
	var_35_bool = var_27_string == var_34_string; // 0x1063 Eq
	if(var_35_bool == 0) goto Label_4204; // 0x1064 JumpB
	var_36_bool = 0; var_37_object = Obj(); // 0x1065 PushV
	var_37_object = var_26_object; // 0x1066 Mov
	func_4487(var_36_bool, var_37_object); // 0x1067 NEW_2
	var_25_bool = var_36_bool; // 0x1068 Mov
	return 0; // 0x106a Return
	
Label_4204:
	var_51_string = "battle"; // 0x106c PushS
	var_52_bool = var_27_string == var_51_string; // 0x106d Eq
	if(var_52_bool == 0) goto Label_4213; // 0x106e JumpB
	var_53_bool = 0; var_54_object = Obj(); // 0x106f PushV
	var_54_object = var_26_object; // 0x1070 Mov
	func_4510(var_53_bool, var_54_object); // 0x1071 NEW_2
	var_25_bool = var_53_bool; // 0x1072 Mov
	return 0; // 0x1074 Return
	
Label_4213:
	var_25_bool = 0; // 0x1075 MovB
	return 0; // 0x1076 Return
}


func_3673(var_250_bool, var_251_object)
{
	var_252_bool = 0; var_253_object = Obj(); // 0xe5a PushV
	var_253_object = var_251_object; // 0xe5b Mov
	func_3760(var_253_object); // 0xe5c NEW_2
	if(var_252_bool == 0) goto Label_3681; // 0xe5e JumpB
	var_250_bool = 1; // 0xe5f MovB
	return 0; // 0xe60 Return
	
Label_3681:
	var_250_bool = 0; // 0xe61 MovB
	return 0; // 0xe62 Return
}


func_3169(var_25_object, var_26_int, var_27_float)
{
	var_28_cvector = CVector(0,0,0); var_29_object = Obj(); var_30_int = 0; var_31_bool = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_int = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_object = Obj(); var_39_int = 0; var_40_bool = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_int = 0; var_44_int = 0; var_45_cvector = CVector(0,0,0); // 0xc61 PushV
	var_46_bool = 0; // 0xc62 PushV
	var_46_bool = 0; // 0xc63 MovB
	var_47_bool = 0; // 0xc64 PushV
	var_47_bool = 0; // 0xc65 MovB
	var_48_object = var_25_object; // 0xc66 Push
	if(var_48_object == 0) goto Label_3180; // 0xc67 JumpB
	var_49_int = 4; // 0xc68 PushI
	var_50_bool = var_26_int != var_49_int; // 0xc69 Neq
	if(var_50_bool == 0) goto Label_3180; // 0xc6a JumpB
	var_47_bool = 1; // 0xc6b MovB
	
Label_3180:
	if(var_47_bool == 0) goto Label_3185; // 0xc6c JumpB
	var_51_int = 5; // 0xc6d PushI
	var_52_bool = var_26_int != var_51_int; // 0xc6e Neq
	if(var_52_bool == 0) goto Label_3185; // 0xc6f JumpB
	var_46_bool = 1; // 0xc70 MovB
	
Label_3185:
	if(var_46_bool == 0) goto Label_3232; // 0xc71 JumpB
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); // 0xc72 PushV
	var_55_cvector = CVector(0,0,0); var_56_object = Obj(); // 0xc73 PushV
	var_56_object = var_25_object; // 0xc74 Mov
	func_3028(var_56_object); // 0xc75 NEW_2
	var_54_cvector = var_55_cvector; // 0xc76 Mov
	func_3448(var_53_cvector, var_54_cvector); // 0xc78 NEW_2
	var_37_cvector = var_53_cvector; // 0xc79 Mov
	CreateVectorVector(var_38_object); // 0xc7b Func
	var_39_int = 1; // 0xc7d MovI
	
Label_3198:
	var_66_string = "hit"; // 0xc7e PushS
	var_67_int = var_66_string + var_39_int; // 0xc7f Add
	GetGeometryLocator(var_67_int, var_40_bool, var_41_cvector, var_42_cvector); // 0xc80 Func
	var_68_bool = var_40_bool == 0; // 0xc82 Not
	if(var_68_bool == 0) goto Label_3205; // 0xc83 JumpB
	goto Label_3214; // 0xc84 Jump
	
Label_3214:
	size(var_43_int); // 0xc8e ObjFunc
	var_69_int = var_43_int; // 0xc90 Push
	if(var_69_int == 0) goto Label_3231; // 0xc91 JumpB
	irand(var_44_int, var_43_int); // 0xc92 Func
	get(var_45_cvector, var_44_int); // 0xc94 ObjFunc
	var_70_object = Obj(); var_71_int = 0; var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); // 0xc96 PushV
	var_70_object = var_25_object; // 0xc97 Mov
	var_71_int = var_26_int; // 0xc98 Mov
	var_72_float = var_27_float; // 0xc99 Mov
	var_73_cvector = var_45_cvector; // 0xc9a Mov
	var_74_cvector = -var_37_cvector; // 0xc9b Neg2
	func_3237(var_72_float, var_73_cvector, var_74_cvector); // 0xc9c NEW_2
	return 18; // 0xc9e Return
	
Label_3231:
	var_38_object = 0; // 0xc9f SetNull
	
Label_3232:
	var_115_object = Obj(); // 0xca0 PushV
	var_115_object = var_25_object; // 0xca1 Mov
	func_3125(var_115_object); // 0xca2 NEW_2
	return 18; // 0xca4 Return
	
Label_3205:
	var_116_int = var_42_cvector | var_37_cvector; // 0xc85 Or
	var_117_float = 0.70711; // 0xc86 PushF
	var_118_bool = var_116_int >= var_117_float; // 0xc87 GE
	if(var_118_bool == 0) goto Label_3211; // 0xc88 JumpB
	add(var_41_cvector); // 0xc89 ObjFunc
	
Label_3211:
	var_119_int = 1; // 0xc8b PushI
	var_39_int = var_39_int + var_119_int; // 0xc8c Add2
	goto Label_3198; // 0xc8d Jump
}


func_4706(var_105_int)
{
	var_105_int = 515567; // 0x1262 MovI
	return 0; // 0x1263 Return
}


func_3683(var_154_bool)
{
	var_156_int = 0; // 0xe64 PushV
	func_3513(var_156_int); // 0xe65 NEW_2
	var_162_int = 1; // 0xe67 PushI
	var_154_bool = var_156_int == var_162_int; // 0xe68 Eq2
	return 0; // 0xe69 Return
}


func_4708(var_104_int)
{
	var_104_int = 503352; // 0x1264 MovI
	return 0; // 0x1265 Return
}


func_4710(var_106_string)
{
	var_106_string = "ui/NPC_Citizen3.png"; // 0x1266 MovS
	return 0; // 0x1267 Return
}


func_2150()
{
	StopGroup0(); // 0x866 Func
	StopAsync(); // 0x868 Func
	var_36_string = "head"; // 0x86a PushS
	UnlookAsync(var_36_string); // 0x86b Func
	var_37_int = 111; // 0x86d PushI
	KillTimer(var_37_int); // 0x86e Func
	return 0; // 0x870 Return
}


func_4712(var_107_string)
{
	var_107_string = "ui/NPC_Citizen3_b.png"; // 0x1268 MovS
	return 0; // 0x1269 Return
}


func_4714(var_99_bool)
{
	var_99_bool = 0; // 0x126a MovB
	return 0; // 0x126b Return
}


func_3690(var_165_bool)
{
	var_167_int = 0; // 0xe6b PushV
	func_3513(var_167_int); // 0xe6c NEW_2
	var_168_int = 2; // 0xe6e PushI
	var_165_bool = var_167_int == var_168_int; // 0xe6f Eq2
	return 0; // 0xe70 Return
}


func_4716()
{
	var_22_bool = GlobalVars[0]; // 0x126c PushGE
	var_22_bool = 0; // 0x126d MovB
	GlobalVars[0] = var_22_bool; // 0x126e PopGE
	return 0; // 0x126f Return
}


func_4720(var_33_object)
{
	var_34_bool = 0; var_35_bool = 0; // 0x1270 PushV
	var_36_bool = GlobalVars[0]; // 0x1271 PushGE
	if(var_36_bool == 0) goto Label_4733; // 0x1272 JumpB
	IsOverrideActive(var_35_bool); // 0x1273 Func
	var_37_bool = var_35_bool == 0; // 0x1275 Not
	if(var_37_bool == 0) goto Label_4731; // 0x1276 JumpB
	var_38_object = Obj(); // 0x1277 PushV
	var_38_object = var_33_object; // 0x1278 Mov
	func_3873(var_38_object); // 0x1279 NEW_2
	
Label_4731:
	return 2; // 0x127b Return
	
Label_4733:
	var_45_object = Obj(); // 0x127d PushV
	var_45_object = var_33_object; // 0x127e Mov
	func_4691(var_35_bool, var_45_object); // 0x127f NEW_2
	return 2; // 0x1281 Return
}


func_3697(var_171_bool)
{
	var_173_int = 0; // 0xe72 PushV
	func_3513(var_173_int); // 0xe73 NEW_2
	var_174_int = 3; // 0xe75 PushI
	var_171_bool = var_173_int == var_174_int; // 0xe76 Eq2
	return 0; // 0xe77 Return
}


func_2672(var_0_object, var_1_object, var_2_object, var_40_object)
{
	var_44_cvector = CVector(0,0,0); var_45_float = 0; var_46_bool = 0; var_47_cvector = CVector(0,0,0); var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_float = 0; var_51_bool = 0; var_52_cvector = CVector(0,0,0); var_53_float = 0; // 0xa70 PushV
	var_0_object = var_40_object; // 0xa71 TMov
	var_54_cvector = CVector(0,0,0); var_55_float = 0; // 0xa72 PushV
	var_55_float = 1.74533; // 0xa73 MovF
	func_2642(var_54_cvector, var_55_float); // 0xa74 NEW_2
	var_49_cvector = var_54_cvector; // 0xa75 Mov
	var_50_float = var_49_cvector | var_49_cvector; // 0xa77 Or2
	var_84_float = 2500.0; // 0xa78 PushF
	var_85_bool = var_50_float < var_84_float; // 0xa79 LT
	if(var_85_bool == 0) goto Label_2701; // 0xa7a JumpB
	var_86_cvector = CVector(0,0,0); var_87_float = 0; // 0xa7b PushV
	var_87_float = 2.61799; // 0xa7c MovF
	func_2642(var_86_cvector, var_87_float); // 0xa7d NEW_2
	var_49_cvector = var_86_cvector; // 0xa7e Mov
	var_50_float = var_49_cvector | var_49_cvector; // 0xa80 Or2
	var_88_float = 2500.0; // 0xa81 PushF
	var_89_bool = var_50_float < var_88_float; // 0xa82 LT
	if(var_89_bool == 0) goto Label_2701; // 0xa83 JumpB
	var_90_string = "Can't retreat, distance: "; // 0xa84 PushS
	var_91_float = sqrt(var_50_float); // 0xa85 Sqrt
	var_92_int = var_90_string + var_91_float; // 0xa86 Add
	Trace(var_92_int); // 0xa87 Func
	var_93_float = 0.5; // 0xa89 PushF
	Sleep(var_93_float); // 0xa8a Func
	return 10; // 0xa8c Return
	
Label_2701:
	var_94_float = GetByIndex(var_49_cvector, 0); // 0xa8d PushE
	var_95_float = GetByIndex(var_49_cvector, 2); // 0xa8e PushE
	Rotate(var_94_float, var_95_float); // 0xa8f Func
	var_96_cvector = CVector(0,0,0); // 0xa91 PushV
	func_3023(var_96_cvector); // 0xa92 NEW_2
	var_1_object = var_96_cvector + var_49_cvector; // 0xa94 Add2
	var_99_int = 120; // 0xa95 PushI
	var_100_float = 0.5; // 0xa96 PushF
	SetTimer(var_99_int, var_100_float); // 0xa97 Func
	var_2_object = 0; // 0xa99 TMovB
	
Label_2714:
	var_101_int = 1; // 0xa9a PushI
	MovePoint(var_101_int, var_101_int, var_51_bool); // 0xa9b Func
	var_102_bool = var_51_bool; // 0xa9d Push
	if(var_102_bool == 0) goto Label_2742; // 0xa9e JumpB
	var_103_bool = var_0_object == 0; // 0xa9f NullEq
	if(var_103_bool == 0) goto Label_2723; // 0xaa0 JumpB
	goto Label_2744; // 0xaa1 Jump
	
Label_2744:
	return 10; // 0xab8 Return
	
Label_2723:
	var_104_cvector = CVector(0,0,0); var_105_float = 0; // 0xaa3 PushV
	var_105_float = 2.61799; // 0xaa4 MovF
	func_2642(var_104_cvector, var_105_float); // 0xaa5 NEW_2
	var_52_cvector = var_104_cvector; // 0xaa6 Mov
	var_53_float = var_52_cvector | var_52_cvector; // 0xaa8 Or2
	var_106_float = 2500.0; // 0xaa9 PushF
	var_107_bool = var_53_float >= var_106_float; // 0xaaa GE
	if(var_107_bool == 0) goto Label_2741; // 0xaab JumpB
	var_108_cvector = CVector(0,0,0); // 0xaac PushV
	func_3023(var_108_cvector); // 0xaad NEW_2
	var_1_object = var_108_cvector + var_52_cvector; // 0xaaf Add2
	var_109_int = 120; // 0xab0 PushI
	var_110_float = 0.5; // 0xab1 PushF
	SetTimer(var_109_int, var_110_float); // 0xab2 Func
	goto Label_2742; // 0xab4 Jump
	
Label_2742:
	var_111_bool = var_2_object == 0; // 0xab6 Not
	if(var_111_bool == 0) goto Label_2714; // 0xab7 JumpB
	
Label_2741:
	goto Label_2744; // 0xab5 Jump
}


func_4215(var_59_object, var_60_string)
{
	var_61_string = "unholster"; // 0x1078 PushS
	var_62_bool = var_60_string == var_61_string; // 0x1079 Eq
	if(var_62_bool == 0) goto Label_4224; // 0x107a JumpB
	var_63_object = Obj(); // 0x107b PushV
	var_63_object = var_59_object; // 0x107c Mov
	func_4479(var_63_object); // 0x107d NEW_2
	goto Label_4239; // 0x107f Jump
	
Label_4239:
	return 0; // 0x108f Return
	
Label_4224:
	var_136_string = "player_shot"; // 0x1080 PushS
	var_137_bool = var_60_string == var_136_string; // 0x1081 Eq
	if(var_137_bool == 0) goto Label_4232; // 0x1082 JumpB
	var_138_object = Obj(); // 0x1083 PushV
	var_138_object = var_59_object; // 0x1084 Mov
	func_4502(var_138_object); // 0x1085 NEW_2
	goto Label_4239; // 0x1087 Jump
	
Label_4232:
	var_204_string = "battle"; // 0x1088 PushS
	var_205_bool = var_60_string == var_204_string; // 0x1089 Eq
	if(var_205_bool == 0) goto Label_4239; // 0x108a JumpB
	var_206_object = Obj(); // 0x108b PushV
	var_206_object = var_59_object; // 0x108c Mov
	func_4517(var_206_object); // 0x108d NEW_2
}


func_3704(var_189_bool)
{
	var_191_int = 0; // 0xe79 PushV
	func_3513(var_191_int); // 0xe7a NEW_2
	var_192_int = 4; // 0xe7c PushI
	var_189_bool = var_191_int == var_192_int; // 0xe7d Eq2
	return 0; // 0xe7e Return
}


func_3711(var_204_bool)
{
	var_206_int = 0; // 0xe80 PushV
	func_3513(var_206_int); // 0xe81 NEW_2
	var_207_int = 5; // 0xe83 PushI
	var_204_bool = var_206_int == var_207_int; // 0xe84 Eq2
	return 0; // 0xe85 Return
}


func_4738(var_66_bool)
{
	var_67_float = 0; // 0x1282 PushV
	func_3859(var_67_float); // 0x1283 NEW_2
	var_75_float = 0.7; // 0x1285 PushF
	var_66_bool = var_67_float > var_75_float; // 0x1286 GT2
	return 0; // 0x1287 Return
}


func_1667(var_42_float)
{
	var_43_float = 0; var_44_float = 0; // 0x683 PushV
	GetCameraFarDistance(var_44_float); // 0x684 Func
	var_42_float = var_44_float; // 0x686 Mov
	return 2; // 0x687 Return
}


func_3718(var_210_bool)
{
	var_212_int = 0; // 0xe87 PushV
	func_3513(var_212_int); // 0xe88 NEW_2
	var_213_int = 6; // 0xe8a PushI
	var_210_bool = var_212_int == var_213_int; // 0xe8b Eq2
	return 0; // 0xe8c Return
}


func_4744(var_26_bool, var_27_object, var_28_object)
{
	var_30_bool = 0; var_31_object = Obj(); var_32_object = Obj(); var_33_float = 0; // 0x1289 PushV
	var_31_object = var_27_object; // 0x128a Mov
	var_32_object = var_28_object; // 0x128b Mov
	var_33_float = 700.0; // 0x128c MovF
	func_4388(var_30_bool, var_31_object, var_32_object, var_33_float); // 0x128d NEW_2
	var_26_bool = var_30_bool; // 0x128e Mov
	return 0; // 0x1290 Return
}


func_3725(var_216_bool)
{
	var_218_int = 0; // 0xe8e PushV
	func_3513(var_218_int); // 0xe8f NEW_2
	var_219_int = 7; // 0xe91 PushI
	var_216_bool = var_218_int == var_219_int; // 0xe92 Eq2
	return 0; // 0xe93 Return
}


func_1679(var_0_object, var_1_object)
{
	var_0_object = 1; // 0x68f TMovB
	var_1_object = 0; // 0x690 TMovB
	Stop(); // 0x691 Func
	StopGroup0(); // 0x693 Func
	return 0; // 0x695 Return
}


func_4240(var_22_bool, var_23_object)
{
	var_24_bool = 0; var_25_bool = 0; // 0x1090 PushV
	var_26_bool = 0; // 0x1091 PushV
	var_26_bool = 0; // 0x1092 MovB
	var_27_bool = 0; var_28_object = Obj(); // 0x1093 PushV
	var_28_object = var_23_object; // 0x1094 Mov
	func_4474(var_27_bool, var_28_object); // 0x1095 NEW_2
	if(var_27_bool == 0) goto Label_4254; // 0x1097 JumpB
	var_31_bool = 0; var_32_object = Obj(); // 0x1098 PushV
	var_32_object = var_23_object; // 0x1099 Mov
	func_3043(var_31_bool, var_32_object); // 0x109a NEW_2
	if(var_31_bool == 0) goto Label_4254; // 0x109c JumpB
	var_26_bool = 1; // 0x109d MovB
	
Label_4254:
	if(var_26_bool == 0) goto Label_4261; // 0x109e JumpB
	IsWeaponHolstered(var_25_bool); // 0x109f ObjFunc
	var_35_bool = var_25_bool == 0; // 0x10a1 Not
	if(var_35_bool == 0) goto Label_4261; // 0x10a2 JumpB
	var_22_bool = 1; // 0x10a3 MovB
	return 2; // 0x10a4 Return
	
Label_4261:
	var_22_bool = 0; // 0x10a5 MovB
	return 2; // 0x10a6 Return
}


func_4753(var_104_object)
{
	var_105_bool = 0; var_106_object = Obj(); // 0x1292 PushV
	var_106_object = var_104_object; // 0x1293 Mov
	func_3043(var_105_bool, var_106_object); // 0x1294 NEW_2
	if(var_105_bool == 0) goto Label_4770; // 0x1296 JumpB
	var_109_object = Obj(); // 0x1297 PushV
	func_3442(var_109_object); // 0x1298 NEW_2
	var_112_float = -0.1; // 0x129a PushF
	var_113_bool = 1; // 0x129b PushB
	ReportReputationChange(var_104_object, var_109_object, var_112_float, var_113_bool); // 0x129c Func
	var_114_bool = 0; // 0x129e PushV
	var_114_bool = 0; // 0x129f MovB
	func_3958(var_114_bool); // 0x12a0 NEW_2
	
Label_4770:
	func_3934(); // 0x12a3 NEW_2
	var_248_bool = GlobalVars[0]; // 0x12a5 PushGE
	var_248_bool = 1; // 0x12a6 MovB
	GlobalVars[0] = var_248_bool; // 0x12a7 PopGE
	var_249_int = 50; // 0x12a8 PushI
	var_250_int = 40; // 0x12a9 PushI
	SetRTEnvelope(var_249_int, var_250_int); // 0x12aa Func
	return 0; // 0x12ac Return
}


func_3732(var_222_bool)
{
	var_224_int = 0; // 0xe95 PushV
	func_3513(var_224_int); // 0xe96 NEW_2
	var_225_int = 8; // 0xe98 PushI
	var_222_bool = var_224_int == var_225_int; // 0xe99 Eq2
	return 0; // 0xe9a Return
}


func_1686(var_0_object, var_1_object)
{
	var_0_object = 1; // 0x696 TMovB
	var_1_object = 1; // 0x697 TMovB
	Stop(); // 0x698 Func
	StopGroup0(); // 0x69a Func
	return 0; // 0x69c Return
}


func_1176(var_23_object)
{
	EventDisable(0); // 0x499 EventDisable
	var_24_object = Obj(); // 0x49a PushV
	var_24_object = var_23_object; // 0x49b Mov
	func_1209(var_24_object); // 0x49c NEW_2
	var_104_object = Obj(); // 0x49e PushV
	var_104_object = var_23_object; // 0x49f Mov
	func_4753(var_104_object); // 0x4a0 NEW_2
	EventEnable(0); // 0x4a2 EventEnable
	
Label_1187:
	Hold(); // 0x4a3 Func
	goto Label_1187; // 0x4a5 Jump
}


func_3739(var_234_bool)
{
	var_236_int = 0; // 0xe9c PushV
	func_3513(var_236_int); // 0xe9d NEW_2
	var_237_int = 9; // 0xe9f PushI
	var_234_bool = var_236_int == var_237_int; // 0xea0 Eq2
	return 0; // 0xea1 Return
}


func_1693(var_52_bool)
{
	var_52_bool = 0; // 0x69d MovB
	return 0; // 0x69e Return
}


func_1695(var_46_object, var_47_cvector)
{
	var_48_object = Obj(); var_49_object = Obj(); // 0x69f PushV
	FindShiftedPathTo(var_49_object, var_47_cvector); // 0x6a0 Func
	var_46_object = var_49_object; // 0x6a2 Mov
	return 2; // 0x6a3 Return
}


func_3746(var_240_bool)
{
	var_242_int = 0; // 0xea3 PushV
	func_3513(var_242_int); // 0xea4 NEW_2
	var_243_int = 10; // 0xea6 PushI
	var_240_bool = var_242_int == var_243_int; // 0xea7 Eq2
	return 0; // 0xea8 Return
}


func_3237(var_27_object, var_30_cvector, var_31_cvector)
{
	var_32_object = Obj(); var_33_object = Obj(); var_34_object = Obj(); var_35_object = Obj(); // 0xca5 PushV
	GetScene(var_34_object); // 0xca6 Func
	var_36_string = "scripted"; // 0xca8 PushS
	var_37_string = "blood_dir.xml"; // 0xca9 PushS
	AddActorByType(var_35_object, var_36_string, var_34_object, var_30_cvector, var_31_cvector, var_37_string); // 0xcaa Func
	var_38_object = Obj(); // 0xcac PushV
	var_38_object = var_27_object; // 0xcad Mov
	func_3125(var_38_object); // 0xcae NEW_2
	return 4; // 0xcb0 Return
}


func_4263(var_38_object)
{
	var_39_object = Obj(); // 0x10a8 PushV
	var_39_object = var_38_object; // 0x10a9 Mov
	func_4479(var_39_object); // 0x10aa NEW_2
	return 0; // 0x10ac Return
}


func_3753(var_246_bool)
{
	var_248_int = 0; // 0xeaa PushV
	func_3513(var_248_int); // 0xeab NEW_2
	var_249_int = 11; // 0xead PushI
	var_246_bool = var_248_int == var_249_int; // 0xeae Eq2
	return 0; // 0xeaf Return
}


func_4269(var_24_object)
{
	var_25_bool = 0; var_26_object = Obj(); // 0x10ae PushV
	var_26_object = var_24_object; // 0x10af Mov
	func_3043(var_25_bool, var_26_object); // 0x10b0 NEW_2
	if(var_25_bool == 0) goto Label_4281; // 0x10b2 JumpB
	var_29_object = Obj(); // 0x10b3 PushV
	func_3442(var_29_object); // 0x10b4 NEW_2
	var_32_float = -0.05; // 0x10b6 PushF
	ReportReputationChange(var_24_object, var_29_object, var_32_float); // 0x10b7 Func
	
Label_4281:
	return 0; // 0x10b9 Return
}


func_3760(var_252_bool)
{
	var_254_int = 0; // 0xeb1 PushV
	func_3513(var_254_int); // 0xeb2 NEW_2
	var_255_int = 12; // 0xeb4 PushI
	var_252_bool = var_254_int == var_255_int; // 0xeb5 Eq2
	return 0; // 0xeb6 Return
}


func_2226(var_76_object)
{
	Face(var_76_object); // 0x8b3 Func
	var_80_string = "all"; // 0x8b5 PushS
	var_81_string = "attack_on"; // 0x8b6 PushS
	PlayAnimation(var_80_string, var_81_string); // 0x8b7 Func
	WaitForAnimEnd(); // 0x8b9 Func
	var_82_string = "all"; // 0x8bb PushS
	var_83_string = "attack_stay"; // 0x8bc PushS
	PlayAnimation(var_82_string, var_83_string); // 0x8bd Func
	WaitForAnimEnd(); // 0x8bf Func
	var_84_string = "all"; // 0x8c1 PushS
	var_85_string = "attack_off"; // 0x8c2 PushS
	PlayAnimation(var_84_string, var_85_string); // 0x8c3 Func
	WaitForAnimEnd(); // 0x8c5 Func
	StopAsync(); // 0x8c7 Func
	var_86_object = Obj(); // 0x8c9 PushV
	var_86_object = var_76_object; // 0x8ca Mov
	func_2291(var_78_cvector, var_79_bool, var_76_object, var_86_object); // 0x8cb NEW_2
	return 0; // 0x8cd Return
}


func_3251()
{
	var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); // 0xcb3 PushV
	GetPosition(var_101_cvector); // 0xcb4 ObjFunc
	GetPosition(var_102_cvector); // 0xcb6 Func
	var_103_cvector = var_101_cvector - var_102_cvector; // 0xcb8 Sub2
	var_104_float = GetByIndex(var_103_cvector, 0); // 0xcb9 PushE
	var_105_float = GetByIndex(var_103_cvector, 2); // 0xcba PushE
	RotateAsync(var_104_float, var_105_float); // 0xcbb Func
	return 6; // 0xcbd Return
}


func_3767(var_108_int)
{
	var_109_int = 0; var_110_int = 0; // 0xeb7 PushV
	var_111_string = "branch"; // 0xeb8 PushS
	GetVariable(var_111_string, var_110_int); // 0xeb9 Func
	var_112_int = 0; // 0xebb PushI
	var_113_bool = var_110_int == var_112_int; // 0xebc Eq
	if(var_113_bool == 0) goto Label_3777; // 0xebd JumpB
	var_108_int = 1; // 0xebe MovI
	return 2; // 0xebf Return
	
Label_3777:
	var_114_int = 1; // 0xec1 PushI
	var_115_bool = var_110_int == var_114_int; // 0xec2 Eq
	if(var_115_bool == 0) goto Label_3782; // 0xec3 JumpB
	var_108_int = 2; // 0xec4 MovI
	return 2; // 0xec5 Return
	
Label_3782:
	var_108_int = 3; // 0xec6 MovI
	return 2; // 0xec7 Return
}


func_1209(var_24_object)
{
	var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_string = ""; var_30_object = Obj(); var_31_bool = 0; var_32_bool = 0; var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_string = ""; var_40_object = Obj(); var_41_bool = 0; var_42_bool = 0; var_43_float = 0; var_44_cvector = CVector(0,0,0); // 0x4b9 PushV
	var_45_bool = var_24_object == 0; // 0x4ba NullEq
	if(var_45_bool == 0) goto Label_1217; // 0x4bb JumpB
	var_46_string = ""; // 0x4bc PushV
	var_46_string = "fdie"; // 0x4bd MovS
	func_1300(var_46_string); // 0x4be NEW_2
	goto Label_1299; // 0x4c0 Jump
	
Label_1299:
	return 20; // 0x513 Return
	
Label_1217:
	GetPosition(var_35_cvector); // 0x4c1 ObjFunc
	GetPosition(var_36_cvector); // 0x4c3 Func
	GetDirection(var_37_cvector); // 0x4c5 Func
	var_38_cvector = var_36_cvector - var_35_cvector; // 0x4c7 Sub2
	var_78_float = GetByIndex(var_38_cvector, 0); // 0x4c8 PushE
	var_79_float = GetByIndex(var_37_cvector, 0); // 0x4c9 PushE
	var_80_float = var_78_float * var_79_float; // 0x4ca Mult
	var_81_float = GetByIndex(var_38_cvector, 2); // 0x4cb PushE
	var_82_float = GetByIndex(var_37_cvector, 2); // 0x4cc PushE
	var_83_float = var_81_float * var_82_float; // 0x4cd Mult
	var_84_int = var_80_float + var_83_float; // 0x4ce Add
	var_85_int = 0; // 0x4cf PushI
	var_86_bool = var_84_int >= var_85_int; // 0x4d0 GE
	if(var_86_bool == 0) goto Label_1236; // 0x4d1 JumpB
	var_39_string = "fdie"; // 0x4d2 MovS
	goto Label_1237; // 0x4d3 Jump
	
Label_1237:
	RemoveRTEnvelope(); // 0x4d5 Func
	SetDeathState(); // 0x4d7 Func
	Stop(); // 0x4d9 Func
	StopAsync(); // 0x4db Func
	var_40_object = var_24_object; // 0x4dd Mov
	var_87_string = "GetScriptProperty"; // 0x4de PushS
	var_88_int = 2; // 0x4df PushI
	var_89_bool = IsFuncExist(var_24_object, var_87_string, var_88_int); // 0x4e0 FuncExist
	if(var_89_bool == 0) goto Label_1261; // 0x4e1 JumpB
	var_90_string = "Owner"; // 0x4e2 PushS
	HasScriptProperty(var_41_bool, var_90_string); // 0x4e3 ObjFunc
	var_91_bool = var_41_bool; // 0x4e5 Push
	if(var_91_bool == 0) goto Label_1261; // 0x4e6 JumpB
	var_92_string = "Owner"; // 0x4e7 PushS
	GetScriptProperty(var_40_object, var_92_string); // 0x4e8 ObjFunc
	var_93_bool = var_40_object == 0; // 0x4ea NullEq
	if(var_93_bool == 0) goto Label_1261; // 0x4eb JumpB
	var_40_object = var_24_object; // 0x4ec Mov
	
Label_1261:
	var_94_string = "@GetEyesHeight"; // 0x4ed PushS
	var_95_int = 1; // 0x4ee PushI
	var_96_bool = IsFuncExist(var_40_object, var_94_string, var_95_int); // 0x4ef FuncExist
	if(var_96_bool == 0) goto Label_1276; // 0x4f0 JumpB
	GetEyesHeight(var_43_float); // 0x4f1 ObjFunc
	var_44_cvector = CVector(0.0, 0.0, 0.0); // 0x4f3 MovV
	var_97_float = GetByIndex(var_44_cvector, 1); // 0x4f4 PushE
	var_97_float = var_43_float; // 0x4f5 Mov
	SetByIndex(var_44_cvector, 1) = var_97_float; // 0x4f6 PopE
	var_98_string = "head"; // 0x4f7 PushS
	LookAsync(var_24_object, var_98_string, var_44_cvector); // 0x4f8 Func
	var_42_bool = 1; // 0x4fa MovB
	goto Label_1277; // 0x4fb Jump
	
Label_1277:
	var_99_string = ""; // 0x4fd PushV
	var_99_string = var_39_string; // 0x4fe Mov
	func_3401(var_99_string); // 0x4ff NEW_2
	var_100_string = "all"; // 0x501 PushS
	PlayAnimation(var_100_string, var_39_string); // 0x502 Func
	WaitForAnimEnd(); // 0x504 Func
	var_101_bool = var_42_bool; // 0x506 Push
	if(var_101_bool == 0) goto Label_1293; // 0x507 JumpB
	StopAsync(); // 0x508 Func
	var_102_string = "head"; // 0x50a PushS
	UnlookAsync(var_102_string); // 0x50b Func
	
Label_1293:
	var_103_string = "all"; // 0x50d PushS
	LockAnimationEnd(var_103_string, var_39_string); // 0x50e Func
	RemoveEnvelope(); // 0x510 Func
	var_40_object = 0; // 0x512 SetNull
	
Label_1276:
	var_42_bool = 0; // 0x4fc MovB
	
Label_1236:
	var_39_string = "bdie"; // 0x4d4 MovS
}


func_4282(var_22_bool, var_23_string)
{
	var_24_object = Obj(); var_25_object = Obj(); // 0x10ba PushV
	var_26_string = "heal"; // 0x10bb PushS
	var_27_bool = var_23_string == var_26_string; // 0x10bc Eq
	if(var_27_bool == 0) goto Label_4296; // 0x10bd JumpB
	var_28_string = "player"; // 0x10be PushS
	FindActor(var_25_object, var_28_string); // 0x10bf Func
	var_29_bool = 0; var_30_object = Obj(); // 0x10c1 PushV
	var_30_object = var_25_object; // 0x10c2 Mov
	func_4523(var_30_object); // 0x10c3 NEW_2
	var_22_bool = var_29_bool; // 0x10c4 Mov
	return 2; // 0x10c6 Return
	
Label_4296:
	var_22_bool = 0; // 0x10c8 MovB
	return 2; // 0x10c9 Return
}


func_3262(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0xcbe PushV
	IsLoaded(var_25_bool); // 0xcbf Func
	var_23_bool = var_25_bool; // 0xcc1 Mov
	return 2; // 0xcc2 Return
}


func_3267(var_57_bool, var_59_float)
{
	var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_bool = 0; var_68_bool = 0; var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_bool = 0; var_77_bool = 0; // 0xcc3 PushV
	GetPosition(var_70_cvector); // 0xcc4 ObjFunc
	GetEyesHeight(var_69_float); // 0xcc6 ObjFunc
	var_78_float = GetByIndex(var_70_cvector, 1); // 0xcc8 PushE
	var_78_float = var_78_float + var_69_float; // 0xcc9 Add2
	SetByIndex(var_70_cvector, 1) = var_78_float; // 0xcca PopE
	GetPosition(var_71_cvector); // 0xccb Func
	GetEyesHeight(var_69_float); // 0xccd Func
	var_79_float = GetByIndex(var_71_cvector, 1); // 0xccf PushE
	var_79_float = var_79_float + var_69_float; // 0xcd0 Add2
	SetByIndex(var_71_cvector, 1) = var_79_float; // 0xcd1 PopE
	var_72_cvector = var_70_cvector - var_71_cvector; // 0xcd2 Sub2
	var_80_float = GetByIndex(var_72_cvector, 1); // 0xcd3 PushE
	var_80_float = 0; // 0xcd4 MovI
	SetByIndex(var_72_cvector, 1) = var_80_float; // 0xcd5 PopE
	var_81_int = var_72_cvector | var_72_cvector; // 0xcd6 Or
	var_82_float = sqrt(var_81_int); // 0xcd7 Sqrt
	var_72_cvector = var_72_cvector / var_72_cvector; // 0xcd8 Div2
	var_73_cvector = -var_72_cvector; // 0xcd9 Neg2
	var_83_float = var_72_cvector * var_59_float; // 0xcda Mult
	var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); // 0xcdb PushV
	var_86_cvector = CVector(0.0, 1.0, 0.0); // 0xcdc PushVec
	var_85_cvector = var_73_cvector ^ var_86_cvector; // 0xcdd Xor2
	func_3448(var_84_cvector, var_85_cvector); // 0xcde NEW_2
	var_92_int = 25; // 0xce0 PushI
	var_93_float = var_84_cvector * var_92_int; // 0xce1 Mult
	var_94_int = var_83_float + var_93_float; // 0xce2 Add
	var_95_cvector = CVector(0.0, 10.0, 0.0); // 0xce3 PushVec
	var_74_cvector = var_94_int - var_95_cvector; // 0xce4 Sub2
	var_75_cvector = var_71_cvector + var_74_cvector; // 0xce5 Add2
	IsOverrideActive(var_76_bool); // 0xce6 Func
	var_96_bool = var_76_bool; // 0xce8 Push
	if(var_96_bool == 0) goto Label_3308; // 0xce9 JumpB
	var_57_bool = 0; // 0xcea MovB
	return 18; // 0xceb Return
	
Label_3308:
	StopWorld(); // 0xcec Func
	CameraTransit(var_75_cvector, var_73_cvector); // 0xcee Func
	var_97_float = GetByIndex(var_74_cvector, 0); // 0xcf0 PushE
	var_98_float = GetByIndex(var_74_cvector, 2); // 0xcf1 PushE
	Rotate(var_97_float, var_98_float); // 0xcf2 Func
	var_99_bool = 0; // 0xcf4 PushV
	func_4714(var_99_bool); // 0xcf5 NEW_2
	if(var_99_bool == 0) goto Label_3321; // 0xcf7 JumpB
	goto Label_3329; // 0xcf8 Jump
	
Label_3329:
	CameraWaitForPlayFinish(); // 0xd01 Func
	ResumeWorld(); // 0xd03 Func
	var_57_bool = 1; // 0xd05 MovB
	return 18; // 0xd06 Return
	
Label_3321:
	var_100_string = "head"; // 0xcf9 PushS
	HasAnimationTrack(var_77_bool, var_100_string); // 0xcfa Func
	var_101_bool = var_77_bool; // 0xcfc Push
	if(var_101_bool == 0) goto Label_3329; // 0xcfd JumpB
	var_102_string = "head"; // 0xcfe PushS
	LookAsyncCamera(var_102_string); // 0xcff Func
}


func_3784(var_228_int)
{
	var_229_int = 0; var_230_int = 0; // 0xec8 PushV
	var_231_string = "branch"; // 0xec9 PushS
	GetVariable(var_231_string, var_230_int); // 0xeca Func
	var_228_int = var_230_int; // 0xecc Mov
	return 2; // 0xecd Return
}


func_4298(var_33_string)
{
	var_34_object = Obj(); var_35_object = Obj(); // 0x10ca PushV
	var_36_string = "heal"; // 0x10cb PushS
	var_37_bool = var_33_string == var_36_string; // 0x10cc Eq
	if(var_37_bool == 0) goto Label_4310; // 0x10cd JumpB
	var_38_string = "player"; // 0x10ce PushS
	FindActor(var_35_object, var_38_string); // 0x10cf Func
	var_39_object = Obj(); // 0x10d1 PushV
	var_39_object = var_35_object; // 0x10d2 Mov
	func_4526(); // 0x10d3 NEW_2
	var_35_object = 0; // 0x10d5 SetNull
	
Label_4310:
	return 2; // 0x10d6 Return
}


func_3790(var_484_int)
{
	var_486_int = 0; var_487_int = 0; // 0xece PushV
	GetItemID(var_487_int); // 0xecf ObjFunc
	var_484_int = var_487_int; // 0xed1 Mov
	return 2; // 0xed2 Return
}


func_3795(var_461_int, var_462_object, var_463_int)
{
	var_464_int = 0; var_465_int = 0; var_466_int = 0; var_467_string = ""; var_468_bool = 0; var_469_bool = 0; var_470_int = 0; var_471_int = 0; var_472_int = 0; var_473_int = 0; var_474_string = ""; var_475_bool = 0; var_476_bool = 0; var_477_int = 0; // 0xed3 PushV
	var_478_int = 0; // 0xed4 PushI
	var_479_bool = var_463_int == var_478_int; // 0xed5 Eq
	if(var_479_bool == 0) goto Label_3832; // 0xed6 JumpB
	var_480_int = 0; // 0xed7 PushV
	func_3513(var_480_int); // 0xed8 NEW_2
	var_471_int = var_480_int; // 0xed9 Mov
	var_472_int = 0; // 0xedb MovI
	var_473_int = 1; // 0xedc MovI
	
Label_3805:
	var_481_bool = var_473_int <= var_471_int; // 0xedd LE
	if(var_481_bool == 0) goto Label_3830; // 0xede JumpB
	var_474_string = "Price"; // 0xedf MovS
	var_482_int = 1; // 0xee0 PushI
	var_483_bool = var_473_int != var_482_int; // 0xee1 Neq
	if(var_483_bool == 0) goto Label_3812; // 0xee2 JumpB
	var_474_string = var_474_string + var_473_int; // 0xee3 Add2
	
Label_3812:
	var_484_int = 0; var_485_object = Obj(); // 0xee4 PushV
	var_485_object = var_462_object; // 0xee5 Mov
	func_3790(var_485_object); // 0xee6 NEW_2
	HasInvItemProperty(var_475_bool, var_484_int, var_474_string); // 0xee8 Func
	var_488_bool = var_475_bool == 0; // 0xeea Not
	if(var_488_bool == 0) goto Label_3821; // 0xeeb JumpB
	goto Label_3827; // 0xeec Jump
	
Label_3827:
	var_489_int = 1; // 0xef3 PushI
	var_473_int = var_473_int + var_489_int; // 0xef4 Add2
	goto Label_3805; // 0xef5 Jump
	
Label_3821:
	var_490_int = 0; var_491_object = Obj(); // 0xeed PushV
	var_491_object = var_462_object; // 0xeee Mov
	func_3790(var_491_object); // 0xeef NEW_2
	GetInvItemProperty(var_472_int, var_490_int, var_474_string); // 0xef1 Func
	
Label_3830:
	var_461_int = var_472_int; // 0xef6 Mov
	return 14; // 0xef7 Return
	
Label_3832:
	var_492_int = 0; var_493_object = Obj(); // 0xef8 PushV
	var_493_object = var_462_object; // 0xef9 Mov
	func_3790(var_493_object); // 0xefa NEW_2
	var_494_string = "BarterPrice"; // 0xefc PushS
	var_495_int = var_494_string + var_463_int; // 0xefd Add
	HasInvItemProperty(var_476_bool, var_492_int, var_495_int); // 0xefe Func
	var_496_bool = var_476_bool == 0; // 0xf00 Not
	if(var_496_bool == 0) goto Label_3844; // 0xf01 JumpB
	var_461_int = 0; // 0xf02 MovI
	return 14; // 0xf03 Return
	
Label_3844:
	var_497_int = 0; var_498_object = Obj(); // 0xf04 PushV
	var_498_object = var_462_object; // 0xf05 Mov
	func_3790(var_498_object); // 0xf06 NEW_2
	var_499_string = "BarterPrice"; // 0xf08 PushS
	var_500_int = var_499_string + var_463_int; // 0xf09 Add
	GetInvItemProperty(var_477_int, var_497_int, var_500_int); // 0xf0a Func
	var_501_int = 0; // 0xf0c PushI
	var_502_bool = var_477_int > var_501_int; // 0xf0d GT
	if(var_502_bool == 0) goto Label_3857; // 0xf0e JumpB
	var_461_int = var_477_int; // 0xf0f Mov
	return 14; // 0xf10 Return
	
Label_3857:
	var_461_int = -var_477_int; // 0xf11 Neg2
	return 14; // 0xf12 Return
}


func_2261(var_35_cvector, var_36_float)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_float = 0; // 0x8d5 PushV
	GetPosition(var_43_cvector); // 0x8d6 Func
	GetPosition(var_44_cvector); // 0x8d8 TObjFunc
	GetDirection(var_45_cvector); // 0x8da Func
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); // 0x8dc PushV
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); // 0x8dd PushV
	var_52_cvector = var_43_cvector - var_44_cvector; // 0x8de Sub2
	func_3448(var_51_cvector, var_52_cvector); // 0x8df NEW_2
	var_58_float = 0.75; // 0x8e1 PushF
	var_59_float = var_45_cvector * var_58_float; // 0x8e2 Mult
	var_50_cvector = var_51_cvector + var_59_float; // 0x8e3 Add2
	func_3448(var_49_cvector, var_50_cvector); // 0x8e4 NEW_2
	var_46_cvector = var_49_cvector; // 0x8e5 Mov
	var_60_int = 32; // 0x8e7 PushI
	var_61_float = 7000.0; // 0x8e8 PushF
	FindLongestDir(var_47_cvector, var_48_float, var_46_cvector, var_36_float, var_60_int, var_61_float); // 0x8e9 Func
	var_62_int = 100; // 0x8eb PushI
	var_48_float = var_48_float - var_62_int; // 0x8ec Sub2
	var_63_int = 0; // 0x8ed PushI
	var_64_bool = var_48_float < var_63_int; // 0x8ee LT
	if(var_64_bool == 0) goto Label_2289; // 0x8ef JumpB
	var_48_float = 0; // 0x8f0 MovI
	
Label_2289:
	var_35_cvector = var_47_cvector * var_48_float; // 0x8f1 Mult2
	return 12; // 0x8f2 Return
}


func_4311(var_76_string, var_77_int)
{
	var_78_string = ""; var_79_string = ""; // 0x10d7 PushV
	var_79_string = "idle"; // 0x10d8 MovS
	var_80_int = var_77_int; // 0x10d9 Push
	if(var_80_int == 0) goto Label_4316; // 0x10da JumpB
	var_79_string = var_79_string + var_77_int; // 0x10db Add2
	
Label_4316:
	var_76_string = var_79_string; // 0x10dc Mov
	return 2; // 0x10dd Return
}


func_4318(var_70_int)
{
	var_71_int = 0; var_72_bool = 0; var_73_int = 0; var_74_bool = 0; // 0x10de PushV
	var_73_int = 0; // 0x10df MovI
	
Label_4320:
	var_75_string = "all"; // 0x10e0 PushS
	var_76_string = ""; var_77_int = 0; // 0x10e1 PushV
	var_77_int = var_73_int; // 0x10e2 Mov
	func_4311(var_76_string, var_77_int); // 0x10e3 NEW_2
	HasAnimation(var_74_bool, var_75_string, var_76_string); // 0x10e5 Func
	var_81_bool = var_74_bool == 0; // 0x10e7 Not
	if(var_81_bool == 0) goto Label_4330; // 0x10e8 JumpB
	goto Label_4333; // 0x10e9 Jump
	
Label_4333:
	var_70_int = var_73_int; // 0x10ed Mov
	return 4; // 0x10ee Return
	
Label_4330:
	var_82_int = 1; // 0x10ea PushI
	var_73_int = var_73_int + var_82_int; // 0x10eb Add2
	goto Label_4320; // 0x10ec Jump
}


func_2797(var_2_object)
{
	Stop(); // 0xaed Func
	var_22_int = 120; // 0xaef PushI
	KillTimer(var_22_int); // 0xaf0 Func
	var_2_object = 1; // 0xaf2 TMovB
	return 0; // 0xaf3 Return
}


func_4335(var_64_int)
{
	var_66_bool = 0; // 0x10f0 PushV
	func_4738(var_66_bool); // 0x10f1 NEW_2
	if(var_66_bool == 0) goto Label_4342; // 0x10f3 JumpB
	var_64_int = 2; // 0x10f4 MovI
	goto Label_4343; // 0x10f5 Jump
	
Label_4343:
	return 0; // 0x10f7 Return
	
Label_4342:
	var_64_int = 0; // 0x10f6 MovI
}


func_2291(var_0_object, var_1_object, var_2_object, var_86_object)
{
	var_87_cvector = CVector(0,0,0); var_88_float = 0; var_89_bool = 0; var_90_cvector = CVector(0,0,0); var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_float = 0; var_94_bool = 0; var_95_cvector = CVector(0,0,0); var_96_float = 0; // 0x8f3 PushV
	var_0_object = var_86_object; // 0x8f4 TMov
	var_97_cvector = CVector(0,0,0); var_98_float = 0; // 0x8f5 PushV
	var_98_float = 1.74533; // 0x8f6 MovF
	func_2261(var_97_cvector, var_98_float); // 0x8f7 NEW_2
	var_92_cvector = var_97_cvector; // 0x8f8 Mov
	var_93_float = var_92_cvector | var_92_cvector; // 0x8fa Or2
	var_127_float = 2500.0; // 0x8fb PushF
	var_128_bool = var_93_float < var_127_float; // 0x8fc LT
	if(var_128_bool == 0) goto Label_2320; // 0x8fd JumpB
	var_129_cvector = CVector(0,0,0); var_130_float = 0; // 0x8fe PushV
	var_130_float = 2.61799; // 0x8ff MovF
	func_2261(var_129_cvector, var_130_float); // 0x900 NEW_2
	var_92_cvector = var_129_cvector; // 0x901 Mov
	var_93_float = var_92_cvector | var_92_cvector; // 0x903 Or2
	var_131_float = 2500.0; // 0x904 PushF
	var_132_bool = var_93_float < var_131_float; // 0x905 LT
	if(var_132_bool == 0) goto Label_2320; // 0x906 JumpB
	var_133_string = "Can't retreat, distance: "; // 0x907 PushS
	var_134_float = sqrt(var_93_float); // 0x908 Sqrt
	var_135_int = var_133_string + var_134_float; // 0x909 Add
	Trace(var_135_int); // 0x90a Func
	var_136_float = 0.5; // 0x90c PushF
	Sleep(var_136_float); // 0x90d Func
	return 10; // 0x90f Return
	
Label_2320:
	var_137_float = GetByIndex(var_92_cvector, 0); // 0x910 PushE
	var_138_float = GetByIndex(var_92_cvector, 2); // 0x911 PushE
	Rotate(var_137_float, var_138_float); // 0x912 Func
	var_139_cvector = CVector(0,0,0); // 0x914 PushV
	func_3023(var_139_cvector); // 0x915 NEW_2
	var_1_object = var_139_cvector + var_92_cvector; // 0x917 Add2
	var_142_int = 120; // 0x918 PushI
	var_143_float = 0.5; // 0x919 PushF
	SetTimer(var_142_int, var_143_float); // 0x91a Func
	var_2_object = 0; // 0x91c TMovB
	
Label_2333:
	var_144_int = 1; // 0x91d PushI
	MovePoint(var_144_int, var_144_int, var_94_bool); // 0x91e Func
	var_145_bool = var_94_bool; // 0x920 Push
	if(var_145_bool == 0) goto Label_2361; // 0x921 JumpB
	var_146_bool = var_0_object == 0; // 0x922 NullEq
	if(var_146_bool == 0) goto Label_2342; // 0x923 JumpB
	goto Label_2363; // 0x924 Jump
	
Label_2363:
	return 10; // 0x93b Return
	
Label_2342:
	var_147_cvector = CVector(0,0,0); var_148_float = 0; // 0x926 PushV
	var_148_float = 2.61799; // 0x927 MovF
	func_2261(var_147_cvector, var_148_float); // 0x928 NEW_2
	var_95_cvector = var_147_cvector; // 0x929 Mov
	var_96_float = var_95_cvector | var_95_cvector; // 0x92b Or2
	var_149_float = 2500.0; // 0x92c PushF
	var_150_bool = var_96_float >= var_149_float; // 0x92d GE
	if(var_150_bool == 0) goto Label_2360; // 0x92e JumpB
	var_151_cvector = CVector(0,0,0); // 0x92f PushV
	func_3023(var_151_cvector); // 0x930 NEW_2
	var_1_object = var_151_cvector + var_95_cvector; // 0x932 Add2
	var_152_int = 120; // 0x933 PushI
	var_153_float = 0.5; // 0x934 PushF
	SetTimer(var_152_int, var_153_float); // 0x935 Func
	goto Label_2361; // 0x937 Jump
	
Label_2361:
	var_154_bool = var_2_object == 0; // 0x939 Not
	if(var_154_bool == 0) goto Label_2333; // 0x93a JumpB
	
Label_2360:
	goto Label_2363; // 0x938 Jump
}


func_4344(var_81_object)
{
	var_82_object = Obj(); // 0x10f9 PushV
	var_82_object = var_81_object; // 0x10fa Mov
	TaskCall(5); // 0x10fb TaskCall
	func_1951(var_83_object, var_82_object); // 0x10fc NEW_2
	TaskReturn(); // 0x10fd TaskReturn
	return 0; // 0x10ff Return
}


func_2813(var_0_object, var_73_bool)
{
	var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); // 0xafd PushV
	GetDirection(var_76_cvector); // 0xafe Func
	var_78_cvector = CVector(0,0,0); var_79_object = Obj(); // 0xb00 PushV
	var_79_object = var_0_object; // 0xb01 MovT
	func_3028(var_79_object); // 0xb02 NEW_2
	var_77_cvector = var_78_cvector; // 0xb03 Mov
	var_84_float = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); // 0xb05 PushV
	var_85_cvector = var_76_cvector; // 0xb06 Mov
	var_86_cvector = var_77_cvector; // 0xb07 Mov
	func_3464(var_84_float, var_85_cvector, var_86_cvector); // 0xb08 NEW_2
	var_92_float = -0.34202; // 0xb0a PushF
	var_73_bool = var_84_float >= var_92_float; // 0xb0b GE2
	return 4; // 0xb0c Return
}


func_4352(var_33_int, var_34_object)
{
	var_35_bool = 0; var_36_object = Obj(); // 0x1101 PushV
	var_36_object = var_34_object; // 0x1102 Mov
	func_3101(var_35_bool, var_36_object); // 0x1103 NEW_2
	if(var_35_bool == 0) goto Label_4360; // 0x1105 JumpB
	var_33_int = 2; // 0x1106 MovI
	goto Label_4361; // 0x1107 Jump
	
Label_4361:
	return 0; // 0x1109 Return
	
Label_4360:
	var_33_int = 0; // 0x1108 MovI
}


func_3335()
{
	var_375_bool = 0; var_376_bool = 0; // 0xd07 PushV
	CameraSwitchToNormal(); // 0xd08 Func
	var_377_bool = 0; // 0xd0a PushV
	func_4714(var_377_bool); // 0xd0b NEW_2
	if(var_377_bool == 0) goto Label_3343; // 0xd0d JumpB
	goto Label_3351; // 0xd0e Jump
	
Label_3351:
	return 2; // 0xd17 Return
	
Label_3343:
	var_378_string = "head"; // 0xd0f PushS
	HasAnimationTrack(var_376_bool, var_378_string); // 0xd10 Func
	var_379_bool = var_376_bool; // 0xd12 Push
	if(var_379_bool == 0) goto Label_3351; // 0xd13 JumpB
	var_380_string = "head"; // 0xd14 PushS
	UnlookAsync(var_380_string); // 0xd15 Func
}


func_4362(var_75_object)
{
	var_76_object = Obj(); // 0x110b PushV
	var_76_object = var_75_object; // 0x110c Mov
	TaskCall(6); // 0x110d TaskCall
	func_2226(var_76_object); // 0x110e NEW_2
	TaskReturn(); // 0x110f TaskReturn
	return 0; // 0x1111 Return
}


func_4370(var_73_int, var_74_object)
{
	var_76_bool = 0; var_77_object = Obj(); // 0x1113 PushV
	var_77_object = var_74_object; // 0x1114 Mov
	func_3101(var_76_bool, var_77_object); // 0x1115 NEW_2
	if(var_76_bool == 0) goto Label_4378; // 0x1117 JumpB
	var_73_int = 2; // 0x1118 MovI
	goto Label_4379; // 0x1119 Jump
	
Label_4379:
	return 0; // 0x111b Return
	
Label_4378:
	var_73_int = 0; // 0x111a MovI
}


func_3859(var_67_float)
{
	var_68_object = Obj(); var_69_float = 0; var_70_object = Obj(); var_71_float = 0; // 0xf13 PushV
	var_72_string = "player"; // 0xf14 PushS
	FindActor(var_70_object, var_72_string); // 0xf15 Func
	var_73_bool = var_70_object == 0; // 0xf17 Not
	if(var_73_bool == 0) goto Label_3867; // 0xf18 JumpB
	var_67_float = 0; // 0xf19 MovI
	return 4; // 0xf1a Return
	
Label_3867:
	var_74_string = "reputation"; // 0xf1b PushS
	GetProperty(var_74_string, var_71_float); // 0xf1c ObjFunc
	var_67_float = var_71_float; // 0xf1e Mov
	return 4; // 0xf1f Return
}


func_1300(var_46_string)
{
	RemoveRTEnvelope(); // 0x515 Func
	SetDeathState(); // 0x517 Func
	Stop(); // 0x519 Func
	StopAsync(); // 0x51b Func
	StopSecondaryAnimation(); // 0x51d Func
	var_47_string = ""; // 0x51f PushV
	var_47_string = var_46_string; // 0x520 Mov
	func_3401(var_47_string); // 0x521 NEW_2
	var_76_string = "all"; // 0x523 PushS
	PlayAnimation(var_76_string, var_46_string); // 0x524 Func
	WaitForAnimEnd(); // 0x526 Func
	var_77_string = "all"; // 0x528 PushS
	LockAnimationEnd(var_77_string, var_46_string); // 0x529 Func
	RemoveEnvelope(); // 0x52b Func
	return 0; // 0x52d Return
}


func_2836(var_35_cvector, var_36_float)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_float = 0; // 0xb14 PushV
	GetPosition(var_43_cvector); // 0xb15 Func
	GetPosition(var_44_cvector); // 0xb17 TObjFunc
	GetDirection(var_45_cvector); // 0xb19 Func
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); // 0xb1b PushV
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); // 0xb1c PushV
	var_52_cvector = var_43_cvector - var_44_cvector; // 0xb1d Sub2
	func_3448(var_51_cvector, var_52_cvector); // 0xb1e NEW_2
	var_58_float = 0.75; // 0xb20 PushF
	var_59_float = var_45_cvector * var_58_float; // 0xb21 Mult
	var_50_cvector = var_51_cvector + var_59_float; // 0xb22 Add2
	func_3448(var_49_cvector, var_50_cvector); // 0xb23 NEW_2
	var_46_cvector = var_49_cvector; // 0xb24 Mov
	var_60_int = 32; // 0xb26 PushI
	var_61_float = 7000.0; // 0xb27 PushF
	FindLongestDir(var_47_cvector, var_48_float, var_46_cvector, var_36_float, var_60_int, var_61_float); // 0xb28 Func
	var_62_int = 100; // 0xb2a PushI
	var_48_float = var_48_float - var_62_int; // 0xb2b Sub2
	var_63_int = 0; // 0xb2c PushI
	var_64_bool = var_48_float < var_63_int; // 0xb2d LT
	if(var_64_bool == 0) goto Label_2864; // 0xb2e JumpB
	var_48_float = 0; // 0xb2f MovI
	
Label_2864:
	var_35_cvector = var_47_cvector * var_48_float; // 0xb30 Mult2
	return 12; // 0xb31 Return
}


func_3352(var_325_string)
{
	var_326_bool = 0; var_327_float = 0; var_328_float = 0; var_329_bool = 0; var_330_float = 0; var_331_float = 0; // 0xd18 PushV
	lshHasAnimation(var_329_bool, var_325_string); // 0xd19 Func
	var_332_bool = var_329_bool; // 0xd1b Push
	if(var_332_bool == 0) goto Label_3363; // 0xd1c JumpB
	lshGetAnimTimes(var_325_string, var_330_float, var_331_float); // 0xd1d Func
	var_333_bool = 0; // 0xd1f PushB
	lshPlayAnimation(var_330_float, var_331_float, var_333_bool); // 0xd20 Func
	goto Label_3367; // 0xd22 Jump
	
Label_3367:
	return 6; // 0xd27 Return
	
Label_3363:
	var_334_string = "Can't find lsh animation : "; // 0xd23 PushS
	var_335_int = var_334_string + var_325_string; // 0xd24 Add
	Trace(var_335_int); // 0xd25 Func
}


func_4380(var_110_object)
{
	var_111_object = Obj(); // 0x111d PushV
	var_111_object = var_110_object; // 0x111e Mov
	TaskCall(7); // 0x111f TaskCall
	func_2478(var_112_object, var_113_cvector, var_114_bool, var_111_object); // 0x1120 NEW_2
	TaskReturn(); // 0x1121 TaskReturn
	return 0; // 0x1123 Return
}


func_3873(var_38_object)
{
	var_39_int = 0; // 0xf22 PushV
	func_3784(var_39_int); // 0xf23 NEW_2
	var_43_int = 1; // 0xf25 PushI
	var_44_bool = var_39_int == var_43_int; // 0xf26 Eq
	if(var_44_bool == 0) goto Label_3883; // 0xf27 JumpB
	WorkWithCorpse(var_38_object); // 0xf28 Func
	goto Label_3885; // 0xf2a Jump
	
Label_3885:
	return 0; // 0xf2d Return
	
Label_3883:
	Barter(var_38_object); // 0xf2b Func
}


func_4388(var_30_bool, var_31_object, var_32_object, var_33_float)
{
	var_34_string = ""; var_35_bool = 0; var_36_string = ""; var_37_bool = 0; // 0x1124 PushV
	var_38_bool = 0; var_39_object = Obj(); var_40_string = ""; // 0x1125 PushV
	var_39_object = var_32_object; // 0x1126 Mov
	var_40_string = "class"; // 0x1127 MovS
	func_3048(var_38_bool, var_39_object, var_40_string); // 0x1128 NEW_2
	var_47_bool = var_38_bool == 0; // 0x112a Not
	if(var_47_bool == 0) goto Label_4398; // 0x112b JumpB
	var_30_bool = 0; // 0x112c MovB
	return 4; // 0x112d Return
	
Label_4398:
	var_48_string = "class"; // 0x112e PushS
	GetProperty(var_48_string, var_36_string); // 0x112f ObjFunc
	var_49_string = "rat"; // 0x1131 PushS
	var_50_bool = var_36_string == var_49_string; // 0x1132 Eq
	if(var_50_bool == 0) goto Label_4407; // 0x1133 JumpB
	var_30_bool = 0; // 0x1134 MovB
	return 4; // 0x1135 Return
	
Label_4407:
	var_51_string = "rat_big"; // 0x1137 PushS
	var_52_bool = var_36_string == var_51_string; // 0x1138 Eq
	if(var_52_bool == 0) goto Label_4413; // 0x1139 JumpB
	var_30_bool = 0; // 0x113a MovB
	return 4; // 0x113b Return
	
Label_4413:
	var_53_string = "dog"; // 0x113d PushS
	var_54_bool = var_36_string == var_53_string; // 0x113e Eq
	if(var_54_bool == 0) goto Label_4418; // 0x113f JumpB
	var_30_bool = 0; // 0x1140 MovB
	return 4; // 0x1141 Return
	
Label_4418:
	CanSee(var_37_bool, var_31_object); // 0x1142 Func
	var_55_bool = 0; // 0x1144 PushV
	var_55_bool = 1; // 0x1145 MovB
	var_56_bool = var_37_bool; // 0x1146 Push
	if(var_56_bool == 0) goto Label_4432; // 0x1147 JumpB
	var_57_float = 0; var_58_object = Obj(); // 0x1148 PushV
	var_58_object = var_31_object; // 0x1149 Mov
	func_3035(var_58_object); // 0x114a NEW_2
	var_65_float = var_33_float * var_33_float; // 0x114c Mult
	var_66_bool = var_57_float <= var_65_float; // 0x114d LE
	if(var_66_bool == 0) goto Label_4432; // 0x114e JumpB
	var_55_bool = 0; // 0x114f MovB
	
Label_4432:
	if(var_55_bool == 0) goto Label_4435; // 0x1150 JumpB
	var_30_bool = 1; // 0x1151 MovB
	return 4; // 0x1152 Return
	
Label_4435:
	CanSee(var_37_bool, var_32_object); // 0x1153 Func
	var_67_bool = 0; // 0x1155 PushV
	var_67_bool = 1; // 0x1156 MovB
	var_68_bool = var_37_bool; // 0x1157 Push
	if(var_68_bool == 0) goto Label_4449; // 0x1158 JumpB
	var_69_float = 0; var_70_object = Obj(); // 0x1159 PushV
	var_70_object = var_32_object; // 0x115a Mov
	func_3035(var_70_object); // 0x115b NEW_2
	var_71_float = var_33_float * var_33_float; // 0x115d Mult
	var_72_bool = var_69_float <= var_71_float; // 0x115e LE
	if(var_72_bool == 0) goto Label_4449; // 0x115f JumpB
	var_67_bool = 0; // 0x1160 MovB
	
Label_4449:
	if(var_67_bool == 0) goto Label_4452; // 0x1161 JumpB
	var_30_bool = 1; // 0x1162 MovB
	return 4; // 0x1163 Return
	
Label_4452:
	var_30_bool = 0; // 0x1164 MovB
	return 4; // 0x1165 Return
}


func_3368(var_136_string, var_137_bool)
{
	var_140_bool = 0; var_141_float = 0; var_142_float = 0; var_143_bool = 0; var_144_float = 0; var_145_float = 0; // 0xd28 PushV
	lshHasAnimation(var_143_bool, var_136_string); // 0xd29 Func
	var_146_bool = var_143_bool; // 0xd2b Push
	if(var_146_bool == 0) goto Label_3378; // 0xd2c JumpB
	lshGetAnimTimes(var_136_string, var_144_float, var_145_float); // 0xd2d Func
	lshPlayAnimation(var_144_float, var_145_float, var_137_bool); // 0xd2f Func
	goto Label_3382; // 0xd31 Jump
	
Label_3382:
	return 6; // 0xd36 Return
	
Label_3378:
	var_147_string = "Can't find lsh animation : "; // 0xd32 PushS
	var_148_int = var_147_string + var_136_string; // 0xd33 Add
	Trace(var_148_int); // 0xd34 Func
}


func_3886(var_120_int, var_121_int)
{
	var_131_int = 0; var_132_bool = 0; var_133_int = 0; var_134_bool = 0; // 0xf2e PushV
	var_135_bool = var_120_int > var_121_int; // 0xf2f GT
	if(var_135_bool == 0) goto Label_3893; // 0xf30 JumpB
	var_136_string = "GenerateMoney: iMin > iMax"; // 0xf31 PushS
	Trace(var_136_string); // 0xf32 Func
	return 4; // 0xf34 Return
	
Label_3893:
	var_133_int = 0; // 0xf35 MovI
	var_137_bool = var_120_int != var_121_int; // 0xf36 Neq
	if(var_137_bool == 0) goto Label_3900; // 0xf37 JumpB
	var_138_int = var_121_int - var_120_int; // 0xf38 Sub
	irand(var_133_int, var_138_int); // 0xf39 Func
	goto Label_3904; // 0xf3b Jump
	
Label_3904:
	var_133_int = var_133_int + var_120_int; // 0xf40 Add2
	var_139_int = 0; // 0xf41 PushI
	var_140_bool = var_133_int == var_139_int; // 0xf42 Eq
	if(var_140_bool == 0) goto Label_3909; // 0xf43 JumpB
	return 4; // 0xf44 Return
	
Label_3909:
	var_141_int = 0; var_142_string = ""; // 0xf45 PushV
	var_142_string = "Money"; // 0xf46 MovS
	func_4133(var_141_int, var_142_string); // 0xf47 NEW_2
	var_145_int = 0; // 0xf49 PushI
	AddItem(var_134_bool, var_141_int, var_145_int, var_133_int); // 0xf4a Func
	return 4; // 0xf4c Return
	
Label_3900:
	var_146_int = 0; // 0xf3c PushI
	var_147_bool = var_120_int == var_146_int; // 0xf3d Eq
	if(var_147_bool == 0) goto Label_3904; // 0xf3e JumpB
	return 4; // 0xf3f Return
}


func_2866(var_0_object, var_1_object, var_2_object, var_139_object)
{
	var_143_cvector = CVector(0,0,0); var_144_float = 0; var_145_bool = 0; var_146_cvector = CVector(0,0,0); var_147_float = 0; var_148_cvector = CVector(0,0,0); var_149_float = 0; var_150_bool = 0; var_151_cvector = CVector(0,0,0); var_152_float = 0; // 0xb32 PushV
	var_0_object = var_139_object; // 0xb33 TMov
	var_153_cvector = CVector(0,0,0); var_154_float = 0; // 0xb34 PushV
	var_154_float = 1.74533; // 0xb35 MovF
	func_2836(var_153_cvector, var_154_float); // 0xb36 NEW_2
	var_148_cvector = var_153_cvector; // 0xb37 Mov
	var_149_float = var_148_cvector | var_148_cvector; // 0xb39 Or2
	var_178_float = 2500.0; // 0xb3a PushF
	var_179_bool = var_149_float < var_178_float; // 0xb3b LT
	if(var_179_bool == 0) goto Label_2895; // 0xb3c JumpB
	var_180_cvector = CVector(0,0,0); var_181_float = 0; // 0xb3d PushV
	var_181_float = 2.61799; // 0xb3e MovF
	func_2836(var_180_cvector, var_181_float); // 0xb3f NEW_2
	var_148_cvector = var_180_cvector; // 0xb40 Mov
	var_149_float = var_148_cvector | var_148_cvector; // 0xb42 Or2
	var_182_float = 2500.0; // 0xb43 PushF
	var_183_bool = var_149_float < var_182_float; // 0xb44 LT
	if(var_183_bool == 0) goto Label_2895; // 0xb45 JumpB
	var_184_string = "Can't retreat, distance: "; // 0xb46 PushS
	var_185_float = sqrt(var_149_float); // 0xb47 Sqrt
	var_186_int = var_184_string + var_185_float; // 0xb48 Add
	Trace(var_186_int); // 0xb49 Func
	var_187_float = 0.5; // 0xb4b PushF
	Sleep(var_187_float); // 0xb4c Func
	return 10; // 0xb4e Return
	
Label_2895:
	var_188_float = GetByIndex(var_148_cvector, 0); // 0xb4f PushE
	var_189_float = GetByIndex(var_148_cvector, 2); // 0xb50 PushE
	Rotate(var_188_float, var_189_float); // 0xb51 Func
	var_190_cvector = CVector(0,0,0); // 0xb53 PushV
	func_3023(var_190_cvector); // 0xb54 NEW_2
	var_1_object = var_190_cvector + var_148_cvector; // 0xb56 Add2
	var_191_int = 120; // 0xb57 PushI
	var_192_float = 0.5; // 0xb58 PushF
	SetTimer(var_191_int, var_192_float); // 0xb59 Func
	var_2_object = 0; // 0xb5b TMovB
	
Label_2908:
	var_193_int = 1; // 0xb5c PushI
	MovePoint(var_193_int, var_193_int, var_150_bool); // 0xb5d Func
	var_194_bool = var_150_bool; // 0xb5f Push
	if(var_194_bool == 0) goto Label_2936; // 0xb60 JumpB
	var_195_bool = var_0_object == 0; // 0xb61 NullEq
	if(var_195_bool == 0) goto Label_2917; // 0xb62 JumpB
	goto Label_2938; // 0xb63 Jump
	
Label_2938:
	return 10; // 0xb7a Return
	
Label_2917:
	var_196_cvector = CVector(0,0,0); var_197_float = 0; // 0xb65 PushV
	var_197_float = 2.61799; // 0xb66 MovF
	func_2836(var_196_cvector, var_197_float); // 0xb67 NEW_2
	var_151_cvector = var_196_cvector; // 0xb68 Mov
	var_152_float = var_151_cvector | var_151_cvector; // 0xb6a Or2
	var_198_float = 2500.0; // 0xb6b PushF
	var_199_bool = var_152_float >= var_198_float; // 0xb6c GE
	if(var_199_bool == 0) goto Label_2935; // 0xb6d JumpB
	var_200_cvector = CVector(0,0,0); // 0xb6e PushV
	func_3023(var_200_cvector); // 0xb6f NEW_2
	var_1_object = var_200_cvector + var_151_cvector; // 0xb71 Add2
	var_201_int = 120; // 0xb72 PushI
	var_202_float = 0.5; // 0xb73 PushF
	SetTimer(var_201_int, var_202_float); // 0xb74 Func
	goto Label_2936; // 0xb76 Jump
	
Label_2936:
	var_203_bool = var_2_object == 0; // 0xb78 Not
	if(var_203_bool == 0) goto Label_2908; // 0xb79 JumpB
	
Label_2935:
	goto Label_2938; // 0xb77 Jump
}


func_3383(var_90_object)
{
	var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_float = 0; var_94_cvector = CVector(0,0,0); // 0xd37 PushV
	GetEyesHeight(var_93_float); // 0xd38 ObjFunc
	var_94_cvector = CVector(0.0, 0.0, 0.0); // 0xd3a MovV
	var_95_float = GetByIndex(var_94_cvector, 1); // 0xd3b PushE
	var_95_float = var_93_float; // 0xd3c Mov
	SetByIndex(var_94_cvector, 1) = var_95_float; // 0xd3d PopE
	var_96_string = "head"; // 0xd3e PushS
	LookAsync(var_90_object, var_96_string, var_94_cvector); // 0xd3f Func
	return 4; // 0xd41 Return
}


func_3394()
{
	var_24_bool = 0; // 0xd42 PushV
	func_4714(var_24_bool); // 0xd43 NEW_2
	if(var_24_bool == 0) goto Label_3400; // 0xd45 JumpB
	lshStopSpeech(); // 0xd46 Func
	
Label_3400:
	return 0; // 0xd48 Return
}


func_1347()
{
	var_23_bool = 0; // 0x543 PushV
	func_3262(var_23_bool); // 0x544 NEW_2
	var_26_bool = var_23_bool == 0; // 0x546 Not
	if(var_26_bool == 0) goto Label_1355; // 0x547 JumpB
	func_4473(); // 0x549 NEW_2
	
Label_1355:
	return 0; // 0x54b Return
}


func_3401(var_47_string)
{
	var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_int = 0; var_52_bool = 0; var_53_float = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_int = 0; var_58_bool = 0; var_59_int = 0; var_60_bool = 0; var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0xd49 PushV
	IsExisting3DSound(var_56_bool, var_47_string); // 0xd4a Func
	var_64_bool = var_56_bool == 0; // 0xd4c Not
	if(var_64_bool == 0) goto Label_3426; // 0xd4d JumpB
	var_57_int = 0; // 0xd4e MovI
	
Label_3407:
	var_65_int = 1; // 0xd4f PushI
	var_66_int = var_57_int + var_65_int; // 0xd50 Add
	var_67_int = var_47_string + var_66_int; // 0xd51 Add
	IsExisting3DSound(var_58_bool, var_67_int); // 0xd52 Func
	var_68_bool = var_58_bool == 0; // 0xd54 Not
	if(var_68_bool == 0) goto Label_3415; // 0xd55 JumpB
	goto Label_3418; // 0xd56 Jump
	
Label_3418:
	var_69_bool = var_57_int == 0; // 0xd5a Not
	if(var_69_bool == 0) goto Label_3421; // 0xd5b JumpB
	return 16; // 0xd5c Return
	
Label_3421:
	irand(var_59_int, var_57_int); // 0xd5d Func
	var_70_int = 1; // 0xd5f PushI
	var_71_int = var_59_int + var_70_int; // 0xd60 Add
	var_47_string = var_47_string + var_71_int; // 0xd61 Add2
	
Label_3426:
	Is3DSoundLoaded(var_60_bool, var_47_string); // 0xd62 Func
	var_72_bool = var_60_bool; // 0xd64 Push
	if(var_72_bool == 0) goto Label_3441; // 0xd65 JumpB
	GetEyesHeight(var_61_float); // 0xd66 Func
	GetDirection(var_62_cvector); // 0xd68 Func
	var_73_int = 50; // 0xd6a PushI
	var_63_cvector = var_62_cvector * var_73_int; // 0xd6b Mult2
	var_74_float = GetByIndex(var_63_cvector, 1); // 0xd6c PushE
	var_74_float = var_74_float + var_61_float; // 0xd6d Add2
	SetByIndex(var_63_cvector, 1) = var_74_float; // 0xd6e PopE
	PlayGlobalSound(var_47_string, var_63_cvector); // 0xd6f Func
	
Label_3441:
	return 16; // 0xd71 Return
	
Label_3415:
	var_75_int = 1; // 0xd57 PushI
	var_57_int = var_57_int + var_75_int; // 0xd58 Add2
	goto Label_3407; // 0xd59 Jump
}


func_1865()
{
	var_54_int = 0; var_55_int = 0; var_56_int = 0; var_57_int = 0; var_58_bool = 0; var_59_float = 0; var_60_bool = 0; var_61_int = 0; var_62_int = 0; var_63_int = 0; var_64_int = 0; var_65_bool = 0; var_66_float = 0; var_67_bool = 0; // 0x749 PushV
	WaitForAnimEnd(); // 0x74a Func
	var_68_bool = 0; // 0x74c PushV
	func_3262(var_68_bool); // 0x74d NEW_2
	var_69_bool = var_68_bool == 0; // 0x74f Not
	if(var_69_bool == 0) goto Label_1874; // 0x750 JumpB
	return 14; // 0x751 Return
	
Label_1874:
	var_70_int = 0; // 0x752 PushV
	func_4318(var_70_int); // 0x753 NEW_2
	var_61_int = var_70_int; // 0x754 Mov
	var_62_int = 0; // 0x756 MovI
	
Label_1879:
	var_83_bool = 0; // 0x757 PushV
	var_83_bool = 0; // 0x758 MovB
	var_84_int = 5; // 0x759 PushI
	var_85_bool = var_62_int < var_84_int; // 0x75a LT
	if(var_85_bool == 0) goto Label_1889; // 0x75b JumpB
	var_86_bool = 0; // 0x75c PushV
	func_3262(var_86_bool); // 0x75d NEW_2
	if(var_86_bool == 0) goto Label_1889; // 0x75f JumpB
	var_83_bool = 1; // 0x760 MovB
	
Label_1889:
	if(var_83_bool == 0) goto Label_1941; // 0x761 JumpB
	var_87_int = 3; // 0x762 PushI
	irand(var_63_int, var_87_int); // 0x763 Func
	var_88_int = 0; // 0x765 PushI
	var_89_bool = var_63_int == var_88_int; // 0x766 Eq
	if(var_89_bool == 0) goto Label_1913; // 0x767 JumpB
	var_90_int = var_61_int; // 0x768 Push
	if(var_90_int == 0) goto Label_1912; // 0x769 JumpB
	irand(var_64_int, var_61_int); // 0x76a Func
	var_91_string = "all"; // 0x76c PushS
	var_92_string = ""; var_93_int = 0; // 0x76d PushV
	var_93_int = var_64_int; // 0x76e Mov
	func_4311(var_92_string, var_93_int); // 0x76f NEW_2
	PlayAnimation(var_91_string, var_92_string); // 0x771 Func
	WaitForAnimEnd(var_65_bool); // 0x773 Func
	var_94_bool = var_65_bool == 0; // 0x775 Not
	if(var_94_bool == 0) goto Label_1912; // 0x776 JumpB
	goto Label_1941; // 0x777 Jump
	
Label_1941:
	ResetAAS(); // 0x795 Func
	return 14; // 0x797 Return
	
Label_1912:
	goto Label_1930; // 0x778 Jump
	
Label_1930:
	var_95_bool = 0; // 0x78a PushV
	func_1944(var_95_bool); // 0x78b NEW_2
	var_96_bool = var_95_bool == 0; // 0x78d Not
	if(var_96_bool == 0) goto Label_1936; // 0x78e JumpB
	goto Label_1941; // 0x78f Jump
	
Label_1936:
	ResetAAS(); // 0x790 Func
	var_97_int = 1; // 0x792 PushI
	var_62_int = var_62_int + var_97_int; // 0x793 Add2
	goto Label_1879; // 0x794 Jump
	
Label_1913:
	var_98_int = 1; // 0x779 PushI
	var_99_bool = var_63_int == var_98_int; // 0x77a Eq
	if(var_99_bool == 0) goto Label_1927; // 0x77b JumpB
	var_100_int = 4; // 0x77c PushI
	rand(var_66_float, var_100_int); // 0x77d Func
	var_101_int = 1; // 0x77f PushI
	var_102_int = var_66_float + var_101_int; // 0x780 Add
	Sleep(var_102_int, var_67_bool); // 0x781 Func
	var_103_bool = var_67_bool == 0; // 0x783 Not
	if(var_103_bool == 0) goto Label_1926; // 0x784 JumpB
	goto Label_1941; // 0x785 Jump
	
Label_1926:
	goto Label_1930; // 0x786 Jump
	
Label_1927:
	var_104_int = var_62_int; // 0x787 Push
	if(var_104_int == 0) goto Label_1930; // 0x788 JumpB
	goto Label_1941; // 0x789 Jump
}


func_3917(var_234_string)
{
	var_235_object = Obj(); var_236_int = 0; var_237_bool = 0; var_238_object = Obj(); var_239_int = 0; var_240_bool = 0; // 0xf4d PushV
	CreateInvItem(var_238_object); // 0xf4e Func
	SetItemName(var_234_string); // 0xf50 ObjFunc
	var_241_string = "Organ"; // 0xf52 PushS
	var_242_int = 1; // 0xf53 PushI
	SetProperty(var_241_string, var_242_int); // 0xf54 ObjFunc
	GetItemID(var_239_int); // 0xf56 ObjFunc
	var_243_int = 0; // 0xf58 PushI
	var_244_int = 1; // 0xf59 PushI
	AddItem(var_240_bool, var_238_object, var_243_int, var_244_int); // 0xf5a Func
	return 6; // 0xf5c Return
}


func_3934()
{
	var_228_int = 0; // 0xf5e PushV
	func_3784(var_228_int); // 0xf5f NEW_2
	var_232_int = 1; // 0xf61 PushI
	var_233_bool = var_228_int != var_232_int; // 0xf62 Neq
	if(var_233_bool == 0) goto Label_3941; // 0xf63 JumpB
	return 0; // 0xf64 Return
	
Label_3941:
	var_234_string = ""; // 0xf65 PushV
	var_234_string = "liver"; // 0xf66 MovS
	func_3917(var_234_string); // 0xf67 NEW_2
	var_245_string = ""; // 0xf69 PushV
	var_245_string = "kidney"; // 0xf6a MovS
	func_3917(var_245_string); // 0xf6b NEW_2
	var_246_string = ""; // 0xf6d PushV
	var_246_string = "heart"; // 0xf6e MovS
	func_3917(var_246_string); // 0xf6f NEW_2
	var_247_string = ""; // 0xf71 PushV
	var_247_string = "blood"; // 0xf72 MovS
	func_3917(var_247_string); // 0xf73 NEW_2
	return 0; // 0xf75 Return
}


func_4454(var_24_int)
{
	var_24_int = 0; // 0x1167 MovI
	return 0; // 0x1168 Return
}


func_4457()
{
	return 0; // 0x116a Return
}


func_4459(var_208_int)
{
	var_208_int = 0; // 0x116c MovI
	return 0; // 0x116d Return
}


func_4462()
{
	return 0; // 0x116f Return
}


func_4464(var_24_int)
{
	var_24_int = 2; // 0x1171 MovI
	return 0; // 0x1172 Return
}


func_2416(var_2_object)
{
	Stop(); // 0x970 Func
	var_22_int = 120; // 0x972 PushI
	KillTimer(var_22_int); // 0x973 Func
	var_2_object = 1; // 0x975 TMovB
	return 0; // 0x976 Return
}


func_3442(var_109_object)
{
	var_110_object = Obj(); var_111_object = Obj(); // 0xd72 PushV
	self(var_111_object); // 0xd73 Func
	var_109_object = var_111_object; // 0xd75 Mov
	return 2; // 0xd76 Return
}


func_4467(var_32_object)
{
	var_33_object = Obj(); // 0x1174 PushV
	var_33_object = var_32_object; // 0x1175 Mov
	func_4720(var_33_object); // 0x1176 NEW_2
	return 0; // 0x1178 Return
}


func_3958(var_114_bool)
{
	var_115_int = 0; var_116_bool = 0; var_117_int = 0; var_118_bool = 0; // 0xf76 PushV
	var_119_bool = var_114_bool; // 0xf77 Push
	if(var_119_bool == 0) goto Label_4047; // 0xf78 JumpB
	var_120_int = 0; var_121_int = 0; // 0xf79 PushV
	var_120_int = 0; // 0xf7a MovI
	var_122_int = 100; // 0xf7b PushI
	var_123_int = 0; // 0xf7c PushV
	func_3513(var_123_int); // 0xf7d NEW_2
	var_129_int = 100; // 0xf7f PushI
	var_130_float = var_123_int * var_129_int; // 0xf80 Mult
	var_121_int = var_122_int + var_130_float; // 0xf81 Add2
	func_3886(var_120_int, var_121_int); // 0xf82 NEW_2
	var_148_int = 8; // 0xf84 PushI
	irand(var_117_int, var_148_int); // 0xf85 Func
	var_149_int = 0; // 0xf87 PushI
	var_150_bool = var_117_int == var_149_int; // 0xf88 Eq
	if(var_150_bool == 0) goto Label_3987; // 0xf89 JumpB
	var_151_int = 0; var_152_string = ""; // 0xf8a PushV
	var_152_string = "lemon"; // 0xf8b MovS
	func_4133(var_151_int, var_152_string); // 0xf8c NEW_2
	var_153_int = 0; // 0xf8e PushI
	var_154_int = 1; // 0xf8f PushI
	AddItem(var_118_bool, var_151_int, var_153_int, var_154_int); // 0xf90 Func
	goto Label_4046; // 0xf92 Jump
	
Label_4046:
	goto Label_4132; // 0xfce Jump
	
Label_4132:
	return 4; // 0x1024 Return
	
Label_3987:
	var_155_int = 1; // 0xf93 PushI
	var_156_bool = var_117_int == var_155_int; // 0xf94 Eq
	if(var_156_bool == 0) goto Label_3999; // 0xf95 JumpB
	var_157_int = 0; var_158_string = ""; // 0xf96 PushV
	var_158_string = "rusk"; // 0xf97 MovS
	func_4133(var_157_int, var_158_string); // 0xf98 NEW_2
	var_159_int = 0; // 0xf9a PushI
	var_160_int = 1; // 0xf9b PushI
	AddItem(var_118_bool, var_157_int, var_159_int, var_160_int); // 0xf9c Func
	goto Label_4046; // 0xf9e Jump
	
Label_3999:
	var_161_int = 2; // 0xf9f PushI
	var_162_bool = var_117_int == var_161_int; // 0xfa0 Eq
	if(var_162_bool == 0) goto Label_4011; // 0xfa1 JumpB
	var_163_int = 0; var_164_string = ""; // 0xfa2 PushV
	var_164_string = "hook"; // 0xfa3 MovS
	func_4133(var_163_int, var_164_string); // 0xfa4 NEW_2
	var_165_int = 0; // 0xfa6 PushI
	var_166_int = 1; // 0xfa7 PushI
	AddItem(var_118_bool, var_163_int, var_165_int, var_166_int); // 0xfa8 Func
	goto Label_4046; // 0xfaa Jump
	
Label_4011:
	var_167_int = 4; // 0xfab PushI
	var_168_bool = var_117_int == var_167_int; // 0xfac Eq
	if(var_168_bool == 0) goto Label_4023; // 0xfad JumpB
	var_169_int = 0; var_170_string = ""; // 0xfae PushV
	var_170_string = "syringe"; // 0xfaf MovS
	func_4133(var_169_int, var_170_string); // 0xfb0 NEW_2
	var_171_int = 0; // 0xfb2 PushI
	var_172_int = 1; // 0xfb3 PushI
	AddItem(var_118_bool, var_169_int, var_171_int, var_172_int); // 0xfb4 Func
	goto Label_4046; // 0xfb6 Jump
	
Label_4023:
	var_173_int = 5; // 0xfb7 PushI
	var_174_bool = var_117_int == var_173_int; // 0xfb8 Eq
	if(var_174_bool == 0) goto Label_4035; // 0xfb9 JumpB
	var_175_int = 0; var_176_string = ""; // 0xfba PushV
	var_176_string = "watch"; // 0xfbb MovS
	func_4133(var_175_int, var_176_string); // 0xfbc NEW_2
	var_177_int = 0; // 0xfbe PushI
	var_178_int = 1; // 0xfbf PushI
	AddItem(var_118_bool, var_175_int, var_177_int, var_178_int); // 0xfc0 Func
	goto Label_4046; // 0xfc2 Jump
	
Label_4035:
	var_179_int = 6; // 0xfc3 PushI
	var_180_bool = var_117_int == var_179_int; // 0xfc4 Eq
	if(var_180_bool == 0) goto Label_4046; // 0xfc5 JumpB
	var_181_int = 0; var_182_string = ""; // 0xfc6 PushV
	var_182_string = "razor"; // 0xfc7 MovS
	func_4133(var_181_int, var_182_string); // 0xfc8 NEW_2
	var_183_int = 0; // 0xfca PushI
	var_184_int = 1; // 0xfcb PushI
	AddItem(var_118_bool, var_181_int, var_183_int, var_184_int); // 0xfcc Func
	
Label_4047:
	var_185_int = 0; var_186_int = 0; // 0xfcf PushV
	var_185_int = 0; // 0xfd0 MovI
	var_187_int = 50; // 0xfd1 PushI
	var_188_int = 0; // 0xfd2 PushV
	func_3513(var_188_int); // 0xfd3 NEW_2
	var_189_int = 50; // 0xfd5 PushI
	var_190_float = var_188_int * var_189_int; // 0xfd6 Mult
	var_186_int = var_187_int + var_190_float; // 0xfd7 Add2
	func_3886(var_185_int, var_186_int); // 0xfd8 NEW_2
	var_191_int = 7; // 0xfda PushI
	irand(var_117_int, var_191_int); // 0xfdb Func
	var_192_int = 0; // 0xfdd PushI
	var_193_bool = var_117_int == var_192_int; // 0xfde Eq
	if(var_193_bool == 0) goto Label_4073; // 0xfdf JumpB
	var_194_int = 0; var_195_string = ""; // 0xfe0 PushV
	var_195_string = "beads"; // 0xfe1 MovS
	func_4133(var_194_int, var_195_string); // 0xfe2 NEW_2
	var_196_int = 0; // 0xfe4 PushI
	var_197_int = 1; // 0xfe5 PushI
	AddItem(var_118_bool, var_194_int, var_196_int, var_197_int); // 0xfe6 Func
	goto Label_4132; // 0xfe8 Jump
	
Label_4073:
	var_198_int = 1; // 0xfe9 PushI
	var_199_bool = var_117_int == var_198_int; // 0xfea Eq
	if(var_199_bool == 0) goto Label_4085; // 0xfeb JumpB
	var_200_int = 0; var_201_string = ""; // 0xfec PushV
	var_201_string = "bracelet"; // 0xfed MovS
	func_4133(var_200_int, var_201_string); // 0xfee NEW_2
	var_202_int = 0; // 0xff0 PushI
	var_203_int = 1; // 0xff1 PushI
	AddItem(var_118_bool, var_200_int, var_202_int, var_203_int); // 0xff2 Func
	goto Label_4132; // 0xff4 Jump
	
Label_4085:
	var_204_int = 2; // 0xff5 PushI
	var_205_bool = var_117_int == var_204_int; // 0xff6 Eq
	if(var_205_bool == 0) goto Label_4097; // 0xff7 JumpB
	var_206_int = 0; var_207_string = ""; // 0xff8 PushV
	var_207_string = "ear_ring"; // 0xff9 MovS
	func_4133(var_206_int, var_207_string); // 0xffa NEW_2
	var_208_int = 0; // 0xffc PushI
	var_209_int = 1; // 0xffd PushI
	AddItem(var_118_bool, var_206_int, var_208_int, var_209_int); // 0xffe Func
	goto Label_4132; // 0x1000 Jump
	
Label_4097:
	var_210_int = 3; // 0x1001 PushI
	var_211_bool = var_117_int == var_210_int; // 0x1002 Eq
	if(var_211_bool == 0) goto Label_4109; // 0x1003 JumpB
	var_212_int = 0; var_213_string = ""; // 0x1004 PushV
	var_213_string = "gold_ring"; // 0x1005 MovS
	func_4133(var_212_int, var_213_string); // 0x1006 NEW_2
	var_214_int = 0; // 0x1008 PushI
	var_215_int = 1; // 0x1009 PushI
	AddItem(var_118_bool, var_212_int, var_214_int, var_215_int); // 0x100a Func
	goto Label_4132; // 0x100c Jump
	
Label_4109:
	var_216_int = 4; // 0x100d PushI
	var_217_bool = var_117_int == var_216_int; // 0x100e Eq
	if(var_217_bool == 0) goto Label_4121; // 0x100f JumpB
	var_218_int = 0; var_219_string = ""; // 0x1010 PushV
	var_219_string = "silver_ring"; // 0x1011 MovS
	func_4133(var_218_int, var_219_string); // 0x1012 NEW_2
	var_220_int = 0; // 0x1014 PushI
	var_221_int = 1; // 0x1015 PushI
	AddItem(var_118_bool, var_218_int, var_220_int, var_221_int); // 0x1016 Func
	goto Label_4132; // 0x1018 Jump
	
Label_4121:
	var_222_int = 5; // 0x1019 PushI
	var_223_bool = var_117_int == var_222_int; // 0x101a Eq
	if(var_223_bool == 0) goto Label_4132; // 0x101b JumpB
	var_224_int = 0; var_225_string = ""; // 0x101c PushV
	var_225_string = "flower"; // 0x101d MovS
	func_4133(var_224_int, var_225_string); // 0x101e NEW_2
	var_226_int = 0; // 0x1020 PushI
	var_227_int = 1; // 0x1021 PushI
	AddItem(var_118_bool, var_224_int, var_226_int, var_227_int); // 0x1022 Func
}


func_3448(var_53_cvector, var_54_cvector)
{
	var_61_float = 0; var_62_float = 0; // 0xd78 PushV
	var_63_int = var_54_cvector | var_54_cvector; // 0xd79 Or
	var_62_float = sqrt(var_63_int); // 0xd7a Sqrt2
	var_64_float = 0.0; // 0xd7b PushF
	var_65_bool = var_62_float < var_64_float; // 0xd7c LT
	if(var_65_bool == 0) goto Label_3456; // 0xd7d JumpB
	var_53_cvector = CVector(0.0, 0.0, 0.0); // 0xd7e MovV
	return 2; // 0xd7f Return
	
Label_3456:
	var_53_cvector = var_54_cvector / var_54_cvector; // 0xd80 Div2
	return 2; // 0xd81 Return
}


func_4473()
{
	return 0; // 0x1179 Return
}


func_4474(var_27_bool, var_28_object)
{
	var_29_bool = 0; var_30_bool = 0; // 0x117a PushV
	CanSee(var_30_bool, var_28_object); // 0x117b Func
	var_27_bool = var_30_bool; // 0x117d Mov
	return 2; // 0x117e Return
}


func_4479(var_39_object)
{
	var_40_object = Obj(); // 0x1180 PushV
	var_40_object = var_39_object; // 0x1181 Mov
	TaskCall(8); // 0x1182 TaskCall
	func_2672(var_41_object, var_42_cvector, var_43_bool, var_40_object); // 0x1183 NEW_2
	TaskReturn(); // 0x1184 TaskReturn
	return 0; // 0x1186 Return
}


func_2432(var_0_object, var_73_bool)
{
	var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); // 0x980 PushV
	GetDirection(var_76_cvector); // 0x981 Func
	var_78_cvector = CVector(0,0,0); var_79_object = Obj(); // 0x983 PushV
	var_79_object = var_0_object; // 0x984 MovT
	func_3028(var_79_object); // 0x985 NEW_2
	var_77_cvector = var_78_cvector; // 0x986 Mov
	var_84_float = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); // 0x988 PushV
	var_85_cvector = var_76_cvector; // 0x989 Mov
	var_86_cvector = var_77_cvector; // 0x98a Mov
	func_3464(var_84_float, var_85_cvector, var_86_cvector); // 0x98b NEW_2
	var_92_float = -0.34202; // 0x98d PushF
	var_73_bool = var_84_float >= var_92_float; // 0x98e GE2
	return 4; // 0x98f Return
}


func_3458(var_436_object)
{
	var_437_object = Obj(); var_438_object = Obj(); // 0xd82 PushV
	CreateObjectVector(var_438_object); // 0xd83 Func
	var_436_object = var_438_object; // 0xd85 Mov
	return 2; // 0xd86 Return
}


func_4487(var_36_bool, var_37_object)
{
	var_38_bool = 0; var_39_bool = 0; // 0x1187 PushV
	CanSee(var_39_bool, var_37_object); // 0x1188 Func
	var_36_bool = 1; // 0x118a MovB
	var_40_bool = var_39_bool; // 0x118b Push
	if(var_40_bool == 0) goto Label_4501; // 0x118c JumpB
	var_41_float = 0; var_42_object = Obj(); // 0x118d PushV
	var_42_object = var_37_object; // 0x118e Mov
	func_3035(var_42_object); // 0x118f NEW_2
	var_49_int = 4000000; // 0x1191 PushI
	var_50_bool = var_41_float <= var_49_int; // 0x1192 LE
	if(var_50_bool == 0) goto Label_4501; // 0x1193 JumpB
	var_36_bool = 0; // 0x1194 MovB
	
Label_4501:
	return 2; // 0x1195 Return
}


func_3464(var_84_float, var_85_cvector, var_86_cvector)
{
	var_87_int = var_85_cvector | var_86_cvector; // 0xd89 Or
	var_88_int = var_85_cvector | var_85_cvector; // 0xd8a Or
	var_89_int = var_86_cvector | var_86_cvector; // 0xd8b Or
	var_90_float = var_88_int * var_89_int; // 0xd8c Mult
	var_91_float = sqrt(var_90_float); // 0xd8d Sqrt
	var_84_float = var_87_int / var_87_int; // 0xd8e Div2
	return 0; // 0xd8f Return
}


func_2448(var_35_cvector, var_36_float)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_float = 0; // 0x990 PushV
	GetPosition(var_43_cvector); // 0x991 Func
	GetPosition(var_44_cvector); // 0x993 TObjFunc
	GetDirection(var_45_cvector); // 0x995 Func
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); // 0x997 PushV
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); // 0x998 PushV
	var_52_cvector = var_43_cvector - var_44_cvector; // 0x999 Sub2
	func_3448(var_51_cvector, var_52_cvector); // 0x99a NEW_2
	var_58_float = 0.75; // 0x99c PushF
	var_59_float = var_45_cvector * var_58_float; // 0x99d Mult
	var_50_cvector = var_51_cvector + var_59_float; // 0x99e Add2
	func_3448(var_49_cvector, var_50_cvector); // 0x99f NEW_2
	var_46_cvector = var_49_cvector; // 0x9a0 Mov
	var_60_int = 32; // 0x9a2 PushI
	var_61_float = 7000.0; // 0x9a3 PushF
	FindLongestDir(var_47_cvector, var_48_float, var_46_cvector, var_36_float, var_60_int, var_61_float); // 0x9a4 Func
	var_62_int = 100; // 0x9a6 PushI
	var_48_float = var_48_float - var_62_int; // 0x9a7 Sub2
	var_63_int = 0; // 0x9a8 PushI
	var_64_bool = var_48_float < var_63_int; // 0x9a9 LT
	if(var_64_bool == 0) goto Label_2476; // 0x9aa JumpB
	var_48_float = 0; // 0x9ab MovI
	
Label_2476:
	var_35_cvector = var_47_cvector * var_48_float; // 0x9ac Mult2
	return 12; // 0x9ad Return
}


func_3472(var_74_float, var_75_cvector, var_76_cvector)
{
	var_77_float = GetByIndex(var_75_cvector, 0); // 0xd91 PushE
	var_78_float = GetByIndex(var_76_cvector, 0); // 0xd92 PushE
	var_79_float = var_77_float * var_78_float; // 0xd93 Mult
	var_80_float = GetByIndex(var_75_cvector, 2); // 0xd94 PushE
	var_81_float = GetByIndex(var_76_cvector, 2); // 0xd95 PushE
	var_82_float = var_80_float * var_81_float; // 0xd96 Mult
	var_74_float = var_79_float + var_82_float; // 0xd97 Add2
	return 0; // 0xd98 Return
}


func_4502(var_138_object)
{
	var_139_object = Obj(); // 0x1197 PushV
	var_139_object = var_138_object; // 0x1198 Mov
	TaskCall(9); // 0x1199 TaskCall
	func_2866(var_140_object, var_141_cvector, var_142_bool, var_139_object); // 0x119a NEW_2
	TaskReturn(); // 0x119b TaskReturn
	return 0; // 0x119d Return
}


func_1944(var_95_bool)
{
	var_95_bool = 1; // 0x798 MovB
	return 0; // 0x799 Return
}


func_3481(var_83_float, var_84_cvector)
{
	var_85_float = GetByIndex(var_84_cvector, 0); // 0xd9a PushE
	var_86_float = GetByIndex(var_84_cvector, 0); // 0xd9b PushE
	var_87_float = var_85_float * var_86_float; // 0xd9c Mult
	var_88_float = GetByIndex(var_84_cvector, 2); // 0xd9d PushE
	var_89_float = GetByIndex(var_84_cvector, 2); // 0xd9e PushE
	var_90_float = var_88_float * var_89_float; // 0xd9f Mult
	var_91_int = var_87_float + var_90_float; // 0xda0 Add
	var_83_float = sqrt(var_91_int); // 0xda1 Sqrt2
	return 0; // 0xda2 Return
}


func_1946()
{
	StopAnimation(); // 0x79a Func
	StopGroup0(); // 0x79c Func
	return 0; // 0x79e Return
}


func_4510(var_53_bool, var_54_object)
{
	var_55_bool = 0; var_56_object = Obj(); // 0x119f PushV
	var_56_object = var_54_object; // 0x11a0 Mov
	func_4487(var_55_bool, var_56_object); // 0x11a1 NEW_2
	var_53_bool = var_55_bool; // 0x11a2 Mov
	return 0; // 0x11a4 Return
}


func_1951(var_0_object, var_82_object)
{
	var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_bool = 0; var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_bool = 0; // 0x79f PushV
	var_0_object = var_82_object; // 0x7a0 TMov
	func_2002(var_89_bool); // 0x7a2 NEW_2
	GetDirection(var_87_cvector); // 0x7a4 Func
	var_97_cvector = CVector(0,0,0); var_98_object = Obj(); // 0x7a6 PushV
	var_98_object = var_0_object; // 0x7a7 MovT
	func_3028(var_98_object); // 0x7a8 NEW_2
	var_88_cvector = var_97_cvector; // 0x7a9 Mov
	var_103_float = 0; var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); // 0x7ab PushV
	var_104_cvector = var_87_cvector; // 0x7ac Mov
	var_105_cvector = var_88_cvector; // 0x7ad Mov
	func_3491(var_103_float, var_104_cvector, var_105_cvector); // 0x7ae NEW_2
	var_127_int = 0; // 0x7b0 PushI
	var_128_bool = var_103_float < var_127_int; // 0x7b1 LT
	if(var_128_bool == 0) goto Label_1977; // 0x7b2 JumpB
	var_129_object = Obj(); // 0x7b3 PushV
	var_129_object = var_0_object; // 0x7b4 MovT
	func_3251(); // 0x7b5 NEW_2
	var_89_bool = 1; // 0x7b7 MovB
	goto Label_1980; // 0x7b8 Jump
	
Label_1980:
	var_138_bool = var_89_bool; // 0x7bc Push
	if(var_138_bool == 0) goto Label_1996; // 0x7bd JumpB
	var_139_object = Obj(); // 0x7be PushV
	var_139_object = var_0_object; // 0x7bf MovT
	func_3251(); // 0x7c0 NEW_2
	var_140_int = 111; // 0x7c2 PushI
	var_141_float = 0.5; // 0x7c3 PushF
	SetTimer(var_140_int, var_141_float); // 0x7c4 Func
	var_142_float = 5.0; // 0x7c6 PushF
	Sleep(var_142_float); // 0x7c7 Func
	var_143_int = 111; // 0x7c9 PushI
	KillTimer(var_143_int); // 0x7ca Func
	
Label_1996:
	StopAsync(); // 0x7cc Func
	var_144_string = "head"; // 0x7ce PushS
	UnlookAsync(var_144_string); // 0x7cf Func
	return 6; // 0x7d1 Return
	
Label_1977:
	var_145_float = 1.5; // 0x7b9 PushF
	Sleep(var_145_float, var_89_bool); // 0x7ba Func
}


func_3491(var_71_float, var_72_cvector, var_73_cvector)
{
	var_74_float = 0; var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); // 0xda4 PushV
	var_75_cvector = var_72_cvector; // 0xda5 Mov
	var_76_cvector = var_73_cvector; // 0xda6 Mov
	func_3472(var_74_float, var_75_cvector, var_76_cvector); // 0xda7 NEW_2
	var_83_float = 0; var_84_cvector = CVector(0,0,0); // 0xda9 PushV
	var_84_cvector = var_72_cvector; // 0xdaa Mov
	func_3481(var_83_float, var_84_cvector); // 0xdab NEW_2
	var_92_float = 0; var_93_cvector = CVector(0,0,0); // 0xdad PushV
	var_93_cvector = var_73_cvector; // 0xdae Mov
	func_3481(var_92_float, var_93_cvector); // 0xdaf NEW_2
	var_94_float = var_83_float * var_92_float; // 0xdb1 Mult
	var_71_float = var_74_float / var_74_float; // 0xdb2 Div2
	return 0; // 0xdb3 Return
}


func_4517(var_206_object)
{
	var_207_object = Obj(); // 0x11a6 PushV
	var_207_object = var_206_object; // 0x11a7 Mov
	func_4502(var_207_object); // 0x11a8 NEW_2
	return 0; // 0x11aa Return
}


func_4523(var_29_bool)
{
	var_29_bool = 0; // 0x11ac MovB
	return 0; // 0x11ad Return
}


func_4526()
{
	return 0; // 0x11af Return
}


func_2991(var_2_object)
{
	Stop(); // 0xbaf Func
	var_22_int = 120; // 0xbb1 PushI
	KillTimer(var_22_int); // 0xbb2 Func
	var_2_object = 1; // 0xbb4 TMovB
	return 0; // 0xbb5 Return
}


func_2478(var_0_object, var_1_object, var_2_object, var_111_object)
{
	var_115_cvector = CVector(0,0,0); var_116_float = 0; var_117_bool = 0; var_118_cvector = CVector(0,0,0); var_119_float = 0; var_120_cvector = CVector(0,0,0); var_121_float = 0; var_122_bool = 0; var_123_cvector = CVector(0,0,0); var_124_float = 0; // 0x9ae PushV
	var_0_object = var_111_object; // 0x9af TMov
	var_125_cvector = CVector(0,0,0); var_126_float = 0; // 0x9b0 PushV
	var_126_float = 1.74533; // 0x9b1 MovF
	func_2448(var_125_cvector, var_126_float); // 0x9b2 NEW_2
	var_120_cvector = var_125_cvector; // 0x9b3 Mov
	var_121_float = var_120_cvector | var_120_cvector; // 0x9b5 Or2
	var_155_float = 2500.0; // 0x9b6 PushF
	var_156_bool = var_121_float < var_155_float; // 0x9b7 LT
	if(var_156_bool == 0) goto Label_2507; // 0x9b8 JumpB
	var_157_cvector = CVector(0,0,0); var_158_float = 0; // 0x9b9 PushV
	var_158_float = 2.61799; // 0x9ba MovF
	func_2448(var_157_cvector, var_158_float); // 0x9bb NEW_2
	var_120_cvector = var_157_cvector; // 0x9bc Mov
	var_121_float = var_120_cvector | var_120_cvector; // 0x9be Or2
	var_159_float = 2500.0; // 0x9bf PushF
	var_160_bool = var_121_float < var_159_float; // 0x9c0 LT
	if(var_160_bool == 0) goto Label_2507; // 0x9c1 JumpB
	var_161_string = "Can't retreat, distance: "; // 0x9c2 PushS
	var_162_float = sqrt(var_121_float); // 0x9c3 Sqrt
	var_163_int = var_161_string + var_162_float; // 0x9c4 Add
	Trace(var_163_int); // 0x9c5 Func
	var_164_float = 0.5; // 0x9c7 PushF
	Sleep(var_164_float); // 0x9c8 Func
	return 10; // 0x9ca Return
	
Label_2507:
	var_165_float = GetByIndex(var_120_cvector, 0); // 0x9cb PushE
	var_166_float = GetByIndex(var_120_cvector, 2); // 0x9cc PushE
	Rotate(var_165_float, var_166_float); // 0x9cd Func
	var_167_cvector = CVector(0,0,0); // 0x9cf PushV
	func_3023(var_167_cvector); // 0x9d0 NEW_2
	var_1_object = var_167_cvector + var_120_cvector; // 0x9d2 Add2
	var_170_int = 120; // 0x9d3 PushI
	var_171_float = 0.5; // 0x9d4 PushF
	SetTimer(var_170_int, var_171_float); // 0x9d5 Func
	var_2_object = 0; // 0x9d7 TMovB
	
Label_2520:
	var_172_int = 1; // 0x9d8 PushI
	MovePoint(var_172_int, var_172_int, var_122_bool); // 0x9d9 Func
	var_173_bool = var_122_bool; // 0x9db Push
	if(var_173_bool == 0) goto Label_2548; // 0x9dc JumpB
	var_174_bool = var_0_object == 0; // 0x9dd NullEq
	if(var_174_bool == 0) goto Label_2529; // 0x9de JumpB
	goto Label_2550; // 0x9df Jump
	
Label_2550:
	return 10; // 0x9f6 Return
	
Label_2529:
	var_175_cvector = CVector(0,0,0); var_176_float = 0; // 0x9e1 PushV
	var_176_float = 2.61799; // 0x9e2 MovF
	func_2448(var_175_cvector, var_176_float); // 0x9e3 NEW_2
	var_123_cvector = var_175_cvector; // 0x9e4 Mov
	var_124_float = var_123_cvector | var_123_cvector; // 0x9e6 Or2
	var_177_float = 2500.0; // 0x9e7 PushF
	var_178_bool = var_124_float >= var_177_float; // 0x9e8 GE
	if(var_178_bool == 0) goto Label_2547; // 0x9e9 JumpB
	var_179_cvector = CVector(0,0,0); // 0x9ea PushV
	func_3023(var_179_cvector); // 0x9eb NEW_2
	var_1_object = var_179_cvector + var_123_cvector; // 0x9ed Add2
	var_180_int = 120; // 0x9ee PushI
	var_181_float = 0.5; // 0x9ef PushF
	SetTimer(var_180_int, var_181_float); // 0x9f0 Func
	goto Label_2548; // 0x9f2 Jump
	
Label_2548:
	var_182_bool = var_2_object == 0; // 0x9f4 Not
	if(var_182_bool == 0) goto Label_2520; // 0x9f5 JumpB
	
Label_2547:
	goto Label_2550; // 0x9f3 Jump
}


func_4528()
{
	var_384_object = Obj(); var_385_object = Obj(); var_386_object = Obj(); var_387_object = Obj(); var_388_int = 0; var_389_int = 0; var_390_int = 0; var_391_int = 0; var_392_object = Obj(); var_393_int = 0; var_394_bool = 0; var_395_int = 0; var_396_float = 0; var_397_int = 0; var_398_object = Obj(); var_399_int = 0; var_400_int = 0; var_401_int = 0; var_402_int = 0; var_403_int = 0; var_404_int = 0; var_405_int = 0; var_406_int = 0; var_407_int = 0; var_408_int = 0; var_409_object = Obj(); var_410_object = Obj(); var_411_object = Obj(); var_412_object = Obj(); var_413_object = Obj(); var_414_int = 0; var_415_int = 0; var_416_int = 0; var_417_int = 0; var_418_object = Obj(); var_419_int = 0; var_420_bool = 0; var_421_int = 0; var_422_float = 0; var_423_int = 0; var_424_object = Obj(); var_425_int = 0; var_426_int = 0; var_427_int = 0; var_428_int = 0; var_429_int = 0; var_430_int = 0; var_431_int = 0; var_432_int = 0; var_433_int = 0; var_434_int = 0; var_435_object = Obj(); // 0x11b0 PushV
	var_436_object = Obj(); // 0x11b1 PushV
	func_3458(var_436_object); // 0x11b2 NEW_2
	var_410_object = var_436_object; // 0x11b3 Mov
	CreateIntVector(var_411_object); // 0x11b5 Func
	CreateIntVector(var_412_object); // 0x11b7 Func
	CreateIntVector(var_413_object); // 0x11b9 Func
	GetSubContainerCount(var_414_int); // 0x11bb ObjFunc
	var_415_int = 0; // 0x11bd MovI
	
Label_4542:
	var_439_bool = var_415_int < var_414_int; // 0x11be LT
	if(var_439_bool == 0) goto Label_4614; // 0x11bf JumpB
	GetItemCount(var_416_int, var_415_int); // 0x11c0 ObjFunc
	var_417_int = 0; // 0x11c2 MovI
	
Label_4547:
	var_440_bool = var_417_int < var_416_int; // 0x11c3 LT
	if(var_440_bool == 0) goto Label_4611; // 0x11c4 JumpB
	GetItem(var_418_object, var_417_int, var_415_int); // 0x11c5 ObjFunc
	GetItemID(var_419_int); // 0x11c7 ObjFunc
	var_441_string = "HasDurability"; // 0x11c9 PushS
	HasInvItemProperty(var_420_bool, var_419_int, var_441_string); // 0x11ca Func
	var_442_bool = var_420_bool; // 0x11cc Push
	if(var_442_bool == 0) goto Label_4607; // 0x11cd JumpB
	var_443_string = "durability"; // 0x11ce PushS
	HasProperty(var_420_bool, var_443_string); // 0x11cf ObjFunc
	var_444_bool = var_420_bool; // 0x11d1 Push
	if(var_444_bool == 0) goto Label_4607; // 0x11d2 JumpB
	var_445_string = "durability"; // 0x11d3 PushS
	GetProperty(var_421_int, var_445_string); // 0x11d4 ObjFunc
	var_446_bool = 0; // 0x11d6 PushV
	var_446_bool = 0; // 0x11d7 MovB
	var_447_int = 100; // 0x11d8 PushI
	var_448_bool = var_421_int < var_447_int; // 0x11d9 LT
	if(var_448_bool == 0) goto Label_4577; // 0x11da JumpB
	var_449_bool = 0; var_450_object = Obj(); // 0x11db PushV
	var_450_object = var_418_object; // 0x11dc Mov
	func_4675(var_450_object); // 0x11dd NEW_2
	if(var_449_bool == 0) goto Label_4577; // 0x11df JumpB
	var_446_bool = 1; // 0x11e0 MovB
	
Label_4577:
	if(var_446_bool == 0) goto Label_4607; // 0x11e1 JumpB
	add(var_418_object); // 0x11e2 ObjFunc
	add(var_415_int); // 0x11e4 ObjFunc
	add(var_417_int); // 0x11e6 ObjFunc
	var_461_int = 0; var_462_object = Obj(); var_463_int = 0; // 0x11e8 PushV
	var_462_object = var_418_object; // 0x11e9 Mov
	var_463_int = 0; // 0x11ea MovI
	func_3795(var_461_int, var_462_object, var_463_int); // 0x11eb NEW_2
	var_422_float = var_461_int; // 0x11ec Mov
	var_503_float = 1.0; // 0x11ee PushF
	var_504_float = 2.0; // 0x11ef PushF
	var_505_float = var_504_float * var_421_int; // 0x11f0 Mult
	var_506_float = 100.0; // 0x11f1 PushF
	var_507_float = var_505_float / var_506_float; // 0x11f2 Div
	var_508_int = var_503_float + var_507_float; // 0x11f3 Add
	var_509_float = var_422_float * var_508_int; // 0x11f4 Mult
	var_510_int = 100; // 0x11f5 PushI
	var_511_int = var_510_int - var_421_int; // 0x11f6 Sub
	var_512_float = var_509_float * var_511_int; // 0x11f7 Mult
	var_513_int = 300; // 0x11f8 PushI
	var_423_int = var_512_float / var_512_float; // 0x11f9 Div2
	var_514_bool = var_423_int == 0; // 0x11fa Not
	if(var_514_bool == 0) goto Label_4605; // 0x11fb JumpB
	var_423_int = 1; // 0x11fc MovI
	
Label_4605:
	add(var_423_int); // 0x11fd ObjFunc
	
Label_4607:
	var_418_object = 0; // 0x11ff SetNull
	var_515_int = 1; // 0x1200 PushI
	var_417_int = var_417_int + var_515_int; // 0x1201 Add2
	goto Label_4547; // 0x1202 Jump
	
Label_4611:
	var_516_int = 1; // 0x1203 PushI
	var_415_int = var_415_int + var_516_int; // 0x1204 Add2
	goto Label_4542; // 0x1205 Jump
	
Label_4614:
	CreateIntVector(var_424_object); // 0x1206 Func
	var_517_string = "repair.xml"; // 0x1208 PushS
	ChooseItem(var_410_object, var_424_object, var_413_object, var_517_string); // 0x1209 Func
	size(var_425_int); // 0x120b ObjFunc
	var_518_bool = var_425_int == 0; // 0x120d Not
	if(var_518_bool == 0) goto Label_4624; // 0x120e JumpB
	return 52; // 0x120f Return
	
Label_4624:
	var_426_int = 0; // 0x1210 MovI
	var_427_int = 0; // 0x1211 MovI
	
Label_4626:
	var_519_bool = var_427_int < var_425_int; // 0x1212 LT
	if(var_519_bool == 0) goto Label_4636; // 0x1213 JumpB
	get(var_428_int, var_427_int); // 0x1214 ObjFunc
	get(var_429_int, var_428_int); // 0x1216 ObjFunc
	var_426_int = var_426_int + var_429_int; // 0x1218 Add2
	var_520_int = 1; // 0x1219 PushI
	var_427_int = var_427_int + var_520_int; // 0x121a Add2
	goto Label_4626; // 0x121b Jump
	
Label_4636:
	var_521_string = "money"; // 0x121c PushS
	GetProperty(var_521_string, var_430_int); // 0x121d ObjFunc
	var_430_int = var_430_int - var_426_int; // 0x121f Sub2
	var_522_int = 0; // 0x1220 PushI
	var_523_bool = var_430_int < var_522_int; // 0x1221 LT
	if(var_523_bool == 0) goto Label_4644; // 0x1222 JumpB
	return 52; // 0x1223 Return
	
Label_4644:
	var_524_string = "money"; // 0x1224 PushS
	SetProperty(var_524_string, var_430_int); // 0x1225 ObjFunc
	var_431_int = 0; // 0x1227 MovI
	
Label_4648:
	var_525_bool = var_431_int < var_425_int; // 0x1228 LT
	if(var_525_bool == 0) goto Label_4669; // 0x1229 JumpB
	get(var_432_int, var_431_int); // 0x122a ObjFunc
	get(var_433_int, var_432_int); // 0x122c ObjFunc
	get(var_434_int, var_432_int); // 0x122e ObjFunc
	GetItem(var_435_object, var_434_int, var_433_int); // 0x1230 ObjFunc
	var_526_string = "durability"; // 0x1232 PushS
	var_527_int = 100; // 0x1233 PushI
	SetProperty(var_526_string, var_527_int); // 0x1234 ObjFunc
	var_528_int = 1; // 0x1236 PushI
	SetItem(var_435_object, var_528_int, var_434_int, var_433_int); // 0x1237 ObjFunc
	var_435_object = 0; // 0x1239 SetNull
	var_529_int = 1; // 0x123a PushI
	var_431_int = var_431_int + var_529_int; // 0x123b Add2
	goto Label_4648; // 0x123c Jump
	
Label_4669:
	return 52; // 0x123d Return
}


func_3508(var_126_int, var_127_string)
{
	var_128_int = 0; var_129_int = 0; // 0xdb4 PushV
	GetVariable(var_127_string, var_129_int); // 0xdb5 Func
	var_126_int = var_129_int; // 0xdb7 Mov
	return 2; // 0xdb8 Return
}


func_3513(var_123_int)
{
	var_124_float = 0; var_125_float = 0; // 0xdb9 PushV
	GetGameTime(var_125_float); // 0xdba Func
	var_126_int = 1; // 0xdbc PushI
	var_127_int = 0; // 0xdbd PushV
	var_128_int = 24; // 0xdbe PushI
	var_127_int = var_125_float / var_125_float; // 0xdbf Div2
	var_123_int = var_126_int + var_127_int; // 0xdc0 Add2
	return 2; // 0xdc1 Return
}


func_3007(var_0_object, var_73_bool)
{
	var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); // 0xbbf PushV
	GetDirection(var_76_cvector); // 0xbc0 Func
	var_78_cvector = CVector(0,0,0); var_79_object = Obj(); // 0xbc2 PushV
	var_79_object = var_0_object; // 0xbc3 MovT
	func_3028(var_79_object); // 0xbc4 NEW_2
	var_77_cvector = var_78_cvector; // 0xbc5 Mov
	var_84_float = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); // 0xbc7 PushV
	var_85_cvector = var_76_cvector; // 0xbc8 Mov
	var_86_cvector = var_77_cvector; // 0xbc9 Mov
	func_3464(var_84_float, var_85_cvector, var_86_cvector); // 0xbca NEW_2
	var_92_float = -0.34202; // 0xbcc PushF
	var_73_bool = var_84_float >= var_92_float; // 0xbcd GE2
	return 4; // 0xbce Return
}


func_3522()
{
	var_29_int = 100; // 0xdc3 PushI
	SetReturnValue(var_29_int); // 0xdc4 ObjFunc
	return 0; // 0xdc6 Return
}


func_3527(var_349_bool)
{
	var_351_int = 0; var_352_string = ""; // 0xdc8 PushV
	var_352_string = "branch"; // 0xdc9 MovS
	func_3508(var_351_int, var_352_string); // 0xdca NEW_2
	var_353_int = 0; // 0xdcc PushI
	var_354_bool = var_351_int == var_353_int; // 0xdcd Eq
	if(var_354_bool == 0) goto Label_3537; // 0xdce JumpB
	var_349_bool = 1; // 0xdcf MovB
	return 0; // 0xdd0 Return
	
Label_3537:
	var_349_bool = 0; // 0xdd1 MovB
	return 0; // 0xdd2 Return
}


func_3023(var_93_cvector)
{
	var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); // 0xbcf PushV
	GetPosition(var_95_cvector); // 0xbd0 Func
	var_93_cvector = var_95_cvector; // 0xbd2 Mov
	return 2; // 0xbd3 Return
}


func_2002(var_0_object)
{
	var_90_object = Obj(); // 0x7d2 PushV
	var_90_object = var_0_object; // 0x7d3 MovT
	func_3383(var_90_object); // 0x7d4 NEW_2
	return 0; // 0x7d6 Return
}


func_3539(var_361_bool)
{
	var_363_int = 0; var_364_string = ""; // 0xdd4 PushV
	var_364_string = "branch"; // 0xdd5 MovS
	func_3508(var_363_int, var_364_string); // 0xdd6 NEW_2
	var_365_int = 1; // 0xdd8 PushI
	var_366_bool = var_363_int == var_365_int; // 0xdd9 Eq
	if(var_366_bool == 0) goto Label_3549; // 0xdda JumpB
	var_361_bool = 1; // 0xddb MovB
	return 0; // 0xddc Return
	
Label_3549:
	var_361_bool = 0; // 0xddd MovB
	return 0; // 0xdde Return
}


func_3028(var_55_cvector)
{
	var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); // 0xbd4 PushV
	GetPosition(var_59_cvector); // 0xbd5 Func
	GetPosition(var_60_cvector); // 0xbd7 ObjFunc
	var_55_cvector = var_60_cvector - var_59_cvector; // 0xbd9 Sub2
	return 4; // 0xbda Return
}


func_3035(var_41_float)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0xbdb PushV
	GetPosition(var_46_cvector); // 0xbdc Func
	GetPosition(var_47_cvector); // 0xbde ObjFunc
	var_48_cvector = var_47_cvector - var_46_cvector; // 0xbe0 Sub2
	var_41_float = var_48_cvector | var_48_cvector; // 0xbe1 Or2
	return 6; // 0xbe2 Return
}


func_3551(var_124_bool)
{
	var_126_int = 0; var_127_string = ""; // 0xde0 PushV
	var_127_string = "branch"; // 0xde1 MovS
	func_3508(var_126_int, var_127_string); // 0xde2 NEW_2
	var_130_int = 2; // 0xde4 PushI
	var_131_bool = var_126_int == var_130_int; // 0xde5 Eq
	if(var_131_bool == 0) goto Label_3561; // 0xde6 JumpB
	var_124_bool = 1; // 0xde7 MovB
	return 0; // 0xde8 Return
	
Label_3561:
	var_124_bool = 0; // 0xde9 MovB
	return 0; // 0xdea Return
}


func_3043(var_105_bool, var_106_object)
{
	var_107_bool = 0; var_108_bool = 0; // 0xbe3 PushV
	IsPlayerActor(var_106_object, var_108_bool); // 0xbe4 Func
	var_105_bool = var_108_bool; // 0xbe6 Mov
	return 2; // 0xbe7 Return
}


func_3048(var_50_bool, var_51_object, var_52_string)
{
	var_53_bool = 0; var_54_bool = 0; // 0xbe8 PushV
	var_55_string = "HasProperty"; // 0xbe9 PushS
	var_56_int = 2; // 0xbea PushI
	var_57_bool = IsFuncExist(var_51_object, var_55_string, var_56_int); // 0xbeb FuncExist
	var_58_bool = var_57_bool == 0; // 0xbec Not
	if(var_58_bool == 0) goto Label_3056; // 0xbed JumpB
	var_50_bool = 0; // 0xbee MovB
	return 2; // 0xbef Return
	
Label_3056:
	HasProperty(var_52_string, var_54_bool); // 0xbf0 ObjFunc
	var_50_bool = var_54_bool; // 0xbf2 Mov
	return 2; // 0xbf3 Return
}


func_3563(var_152_bool, var_153_object)
{
	var_154_bool = 0; var_155_object = Obj(); // 0xdec PushV
	var_155_object = var_153_object; // 0xded Mov
	func_3683(var_155_object); // 0xdee NEW_2
	if(var_154_bool == 0) goto Label_3571; // 0xdf0 JumpB
	var_152_bool = 1; // 0xdf1 MovB
	return 0; // 0xdf2 Return
	
Label_3571:
	var_152_bool = 0; // 0xdf3 MovB
	return 0; // 0xdf4 Return
}


func_500(var_2_object, var_132_string)
{
	var_133_bool = 0; // 0x1f5 PushV
	func_4714(var_133_bool); // 0x1f6 NEW_2
	var_134_bool = var_133_bool == 0; // 0x1f8 Not
	if(var_134_bool == 0) goto Label_507; // 0x1f9 JumpB
	return 0; // 0x1fa Return
	
Label_507:
	var_135_bool = var_132_string == var_2_object; // 0x1fb Eq
	if(var_135_bool == 0) goto Label_510; // 0x1fc JumpB
	return 0; // 0x1fd Return
	
Label_510:
	var_136_string = ""; var_137_bool = 0; // 0x1fe PushV
	var_136_string = var_132_string; // 0x1ff Mov
	var_138_string = ""; // 0x200 PushS
	var_139_bool = var_132_string == var_138_string; // 0x201 Eq
	if(var_139_bool == 0) goto Label_517; // 0x202 JumpB
	var_137_bool = 0; // 0x203 MovB
	goto Label_518; // 0x204 Jump
	
Label_518:
	func_3368(var_136_string, var_137_bool); // 0x206 NEW_2
	var_2_object = var_132_string; // 0x208 TMov
	return 0; // 0x209 Return
	
Label_517:
	var_137_bool = 1; // 0x205 MovB
}


func_3573(var_163_bool, var_164_object)
{
	var_165_bool = 0; var_166_object = Obj(); // 0xdf6 PushV
	var_166_object = var_164_object; // 0xdf7 Mov
	func_3690(var_166_object); // 0xdf8 NEW_2
	if(var_165_bool == 0) goto Label_3581; // 0xdfa JumpB
	var_163_bool = 1; // 0xdfb MovB
	return 0; // 0xdfc Return
	
Label_3581:
	var_163_bool = 0; // 0xdfd MovB
	return 0; // 0xdfe Return
}


func_3060(var_43_bool)
{
	var_45_bool = 0; var_46_bool = 0; // 0xbf4 PushV
	IsDead(var_46_bool); // 0xbf5 ObjFunc
	var_43_bool = var_46_bool; // 0xbf7 Mov
	return 2; // 0xbf8 Return
}


func_3065(var_32_bool, var_33_object)
{
	var_34_object = Obj(); var_35_object = Obj(); var_36_object = Obj(); var_37_object = Obj(); // 0xbf9 PushV
	var_38_bool = var_33_object == 0; // 0xbfa NullEq
	if(var_38_bool == 0) goto Label_3070; // 0xbfb JumpB
	var_32_bool = 0; // 0xbfc MovB
	return 4; // 0xbfd Return
	
Label_3070:
	var_39_bool = 0; // 0xbfe PushV
	var_39_bool = 0; // 0xbff MovB
	var_40_string = "IsDead"; // 0xc00 PushS
	var_41_int = 1; // 0xc01 PushI
	var_42_bool = IsFuncExist(var_33_object, var_40_string, var_41_int); // 0xc02 FuncExist
	if(var_42_bool == 0) goto Label_3082; // 0xc03 JumpB
	var_43_bool = 0; var_44_object = Obj(); // 0xc04 PushV
	var_44_object = var_33_object; // 0xc05 Mov
	func_3060(var_44_object); // 0xc06 NEW_2
	if(var_43_bool == 0) goto Label_3082; // 0xc08 JumpB
	var_39_bool = 1; // 0xc09 MovB
	
Label_3082:
	if(var_39_bool == 0) goto Label_3085; // 0xc0a JumpB
	var_32_bool = 0; // 0xc0b MovB
	return 4; // 0xc0c Return
	
Label_3085:
	GetScene(var_36_object); // 0xc0d Func
	var_47_bool = var_36_object == 0; // 0xc0f NullEq
	if(var_47_bool == 0) goto Label_3091; // 0xc10 JumpB
	var_32_bool = 0; // 0xc11 MovB
	return 4; // 0xc12 Return
	
Label_3091:
	GetScene(var_37_object); // 0xc13 ObjFunc
	var_48_bool = var_36_object != var_37_object; // 0xc15 Neq
	if(var_48_bool == 0) goto Label_3097; // 0xc16 JumpB
	var_32_bool = 0; // 0xc17 MovB
	return 4; // 0xc18 Return
	
Label_3097:
	var_32_bool = 1; // 0xc19 MovB
	return 4; // 0xc1a Return
}


func_3583(var_169_bool, var_170_object)
{
	var_171_bool = 0; var_172_object = Obj(); // 0xe00 PushV
	var_172_object = var_170_object; // 0xe01 Mov
	func_3697(var_172_object); // 0xe02 NEW_2
	if(var_171_bool == 0) goto Label_3591; // 0xe04 JumpB
	var_169_bool = 1; // 0xe05 MovB
	return 0; // 0xe06 Return
	
Label_3591:
	var_169_bool = 0; // 0xe07 MovB
	return 0; // 0xe08 Return
}


