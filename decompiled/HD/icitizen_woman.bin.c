task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 1; // 0x2a0 PushI
	if(var_22_int == 0) goto Label_1656; // 0x2a1 JumpB
	func_3549(); // 0x2a3 NEW_2
	var_24_int = 45638; // 0x2a5 PushI
	var_25_bool = var_21_bool == var_24_int; // 0x2a6 Eq
	if(var_25_bool == 0) goto Label_685; // 0x2a7 JumpB
	var_26_object = Obj(); var_27_object = Obj(); // 0x2a8 PushV
	var_26_object = var_1_object; // 0x2a9 MovT
	var_27_object = var_0_object; // 0x2aa MovT
	func_3685(); // 0x2ab NEW_2
	
Label_685:
	var_29_int = 45639; // 0x2ad PushI
	var_30_bool = var_21_bool == var_29_int; // 0x2ae Eq
	if(var_30_bool == 0) goto Label_693; // 0x2af JumpB
	var_31_object = Obj(); var_32_object = Obj(); // 0x2b0 PushV
	var_31_object = var_1_object; // 0x2b1 MovT
	var_32_object = var_0_object; // 0x2b2 MovT
	func_3685(); // 0x2b3 NEW_2
	
Label_693:
	var_33_int = 45643; // 0x2b5 PushI
	var_34_bool = var_21_bool == var_33_int; // 0x2b6 Eq
	if(var_34_bool == 0) goto Label_701; // 0x2b7 JumpB
	var_35_object = Obj(); var_36_object = Obj(); // 0x2b8 PushV
	var_35_object = var_1_object; // 0x2b9 MovT
	var_36_object = var_0_object; // 0x2ba MovT
	func_3685(); // 0x2bb NEW_2
	
Label_701:
	var_37_int = 45664; // 0x2bd PushI
	var_38_bool = var_21_bool == var_37_int; // 0x2be Eq
	if(var_38_bool == 0) goto Label_709; // 0x2bf JumpB
	var_39_object = Obj(); var_40_object = Obj(); // 0x2c0 PushV
	var_39_object = var_1_object; // 0x2c1 MovT
	var_40_object = var_0_object; // 0x2c2 MovT
	func_3685(); // 0x2c3 NEW_2
	
Label_709:
	var_41_int = 40043; // 0x2c5 PushI
	var_42_bool = var_21_bool == var_41_int; // 0x2c6 Eq
	if(var_42_bool == 0) goto Label_717; // 0x2c7 JumpB
	var_43_object = Obj(); var_44_object = Obj(); // 0x2c8 PushV
	var_43_object = var_1_object; // 0x2c9 MovT
	var_44_object = var_0_object; // 0x2ca MovT
	func_3685(); // 0x2cb NEW_2
	
Label_717:
	var_45_int = 45636; // 0x2cd PushI
	var_46_bool = var_20_cvector == var_45_int; // 0x2ce Eq
	if(var_46_bool == 0) goto Label_1257; // 0x2cf JumpB
	var_47_bool = 0; var_48_object = Obj(); // 0x2d0 PushV
	var_48_object = var_1_object; // 0x2d1 MovT
	func_3714(var_48_object); // 0x2d2 NEW_2
	if(var_47_bool == 0) goto Label_1152; // 0x2d4 JumpB
	var_55_string = ""; // 0x2d5 PushV
	var_55_string = "Neutral"; // 0x2d6 MovS
	func_649(var_21_bool, var_55_string); // 0x2d7 NEW_2
	var_72_int = 543180; // 0x2d9 PushI
	SetMessage(var_72_int); // 0x2da TObjFunc
	ClearReplies(); // 0x2dc TObjFunc
	var_73_bool = 0; // 0x2de PushV
	var_73_bool = 1; // 0x2df MovB
	var_74_bool = 0; // 0x2e0 PushV
	var_74_bool = 1; // 0x2e1 MovB
	var_75_bool = 0; // 0x2e2 PushV
	var_75_bool = 1; // 0x2e3 MovB
	var_76_bool = 0; var_77_object = Obj(); // 0x2e4 PushV
	var_77_object = var_1_object; // 0x2e5 MovT
	func_3726(var_76_bool, var_77_object); // 0x2e6 NEW_2
	if(var_76_bool == 0) goto Label_751; // 0x2e8 JumpB
	var_87_bool = 0; var_88_object = Obj(); // 0x2e9 PushV
	var_88_object = var_1_object; // 0x2ea MovT
	func_3746(var_87_bool, var_88_object); // 0x2eb NEW_2
	if(var_87_bool == 0) goto Label_751; // 0x2ed JumpB
	var_75_bool = 0; // 0x2ee MovB
	
Label_751:
	if(var_75_bool == 0) goto Label_758; // 0x2ef JumpB
	var_93_bool = 0; var_94_object = Obj(); // 0x2f0 PushV
	var_94_object = var_1_object; // 0x2f1 MovT
	func_3756(var_93_bool, var_94_object); // 0x2f2 NEW_2
	if(var_93_bool == 0) goto Label_758; // 0x2f4 JumpB
	var_74_bool = 0; // 0x2f5 MovB
	
Label_758:
	if(var_74_bool == 0) goto Label_765; // 0x2f6 JumpB
	var_99_bool = 0; var_100_object = Obj(); // 0x2f7 PushV
	var_100_object = var_1_object; // 0x2f8 MovT
	func_3766(var_99_bool, var_100_object); // 0x2f9 NEW_2
	if(var_99_bool == 0) goto Label_765; // 0x2fb JumpB
	var_73_bool = 0; // 0x2fc MovB
	
Label_765:
	if(var_73_bool == 0) goto Label_771; // 0x2fd JumpB
	var_105_int = 543189; // 0x2fe PushI
	var_106_int = 45648; // 0x2ff PushI
	var_107_int = 45645; // 0x300 PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x301 TObjFunc
	
Label_771:
	var_108_bool = 0; // 0x303 PushV
	var_108_bool = 1; // 0x304 MovB
	var_109_bool = 0; // 0x305 PushV
	var_109_bool = 1; // 0x306 MovB
	var_110_bool = 0; // 0x307 PushV
	var_110_bool = 1; // 0x308 MovB
	var_111_bool = 0; var_112_object = Obj(); // 0x309 PushV
	var_112_object = var_1_object; // 0x30a MovT
	func_3736(var_111_bool, var_112_object); // 0x30b NEW_2
	if(var_111_bool == 0) goto Label_788; // 0x30d JumpB
	var_117_bool = 0; var_118_object = Obj(); // 0x30e PushV
	var_118_object = var_1_object; // 0x30f MovT
	func_3776(var_117_bool, var_118_object); // 0x310 NEW_2
	if(var_117_bool == 0) goto Label_788; // 0x312 JumpB
	var_110_bool = 0; // 0x313 MovB
	
Label_788:
	if(var_110_bool == 0) goto Label_795; // 0x314 JumpB
	var_123_bool = 0; var_124_object = Obj(); // 0x315 PushV
	var_124_object = var_1_object; // 0x316 MovT
	func_3806(var_123_bool, var_124_object); // 0x317 NEW_2
	if(var_123_bool == 0) goto Label_795; // 0x319 JumpB
	var_109_bool = 0; // 0x31a MovB
	
Label_795:
	if(var_109_bool == 0) goto Label_802; // 0x31b JumpB
	var_129_bool = 0; var_130_object = Obj(); // 0x31c PushV
	var_130_object = var_1_object; // 0x31d MovT
	func_3816(var_129_bool, var_130_object); // 0x31e NEW_2
	if(var_129_bool == 0) goto Label_802; // 0x320 JumpB
	var_108_bool = 0; // 0x321 MovB
	
Label_802:
	if(var_108_bool == 0) goto Label_808; // 0x322 JumpB
	var_135_int = 543190; // 0x323 PushI
	var_136_int = 45655; // 0x324 PushI
	var_137_int = 45646; // 0x325 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x326 TObjFunc
	
Label_808:
	var_138_bool = 0; // 0x328 PushV
	var_138_bool = 1; // 0x329 MovB
	var_139_bool = 0; // 0x32a PushV
	var_139_bool = 1; // 0x32b MovB
	var_140_bool = 0; var_141_object = Obj(); // 0x32c PushV
	var_141_object = var_1_object; // 0x32d MovT
	func_3786(var_140_bool, var_141_object); // 0x32e NEW_2
	if(var_140_bool == 0) goto Label_823; // 0x330 JumpB
	var_146_bool = 0; var_147_object = Obj(); // 0x331 PushV
	var_147_object = var_1_object; // 0x332 MovT
	func_3796(var_146_bool, var_147_object); // 0x333 NEW_2
	if(var_146_bool == 0) goto Label_823; // 0x335 JumpB
	var_139_bool = 0; // 0x336 MovB
	
Label_823:
	if(var_139_bool == 0) goto Label_830; // 0x337 JumpB
	var_152_bool = 0; var_153_object = Obj(); // 0x338 PushV
	var_153_object = var_1_object; // 0x339 MovT
	func_3746(var_152_bool, var_153_object); // 0x33a NEW_2
	if(var_152_bool == 0) goto Label_830; // 0x33c JumpB
	var_138_bool = 0; // 0x33d MovB
	
Label_830:
	if(var_138_bool == 0) goto Label_836; // 0x33e JumpB
	var_154_int = 543191; // 0x33f PushI
	var_155_int = 45656; // 0x340 PushI
	var_156_int = 45647; // 0x341 PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x342 TObjFunc
	
Label_836:
	var_157_bool = 0; // 0x344 PushV
	var_157_bool = 1; // 0x345 MovB
	var_158_bool = 0; // 0x346 PushV
	var_158_bool = 1; // 0x347 MovB
	var_159_bool = 0; var_160_object = Obj(); // 0x348 PushV
	var_160_object = var_1_object; // 0x349 MovT
	func_3726(var_159_bool, var_160_object); // 0x34a NEW_2
	if(var_159_bool == 0) goto Label_851; // 0x34c JumpB
	var_161_bool = 0; var_162_object = Obj(); // 0x34d PushV
	var_162_object = var_1_object; // 0x34e MovT
	func_3736(var_161_bool, var_162_object); // 0x34f NEW_2
	if(var_161_bool == 0) goto Label_851; // 0x351 JumpB
	var_158_bool = 0; // 0x352 MovB
	
Label_851:
	if(var_158_bool == 0) goto Label_858; // 0x353 JumpB
	var_163_bool = 0; var_164_object = Obj(); // 0x354 PushV
	var_164_object = var_1_object; // 0x355 MovT
	func_3746(var_163_bool, var_164_object); // 0x356 NEW_2
	if(var_163_bool == 0) goto Label_858; // 0x358 JumpB
	var_157_bool = 0; // 0x359 MovB
	
Label_858:
	if(var_157_bool == 0) goto Label_864; // 0x35a JumpB
	var_165_int = 543182; // 0x35b PushI
	var_166_int = -1; // 0x35c PushI
	var_167_int = 45638; // 0x35d PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x35e TObjFunc
	
Label_864:
	var_168_bool = 0; // 0x360 PushV
	var_168_bool = 1; // 0x361 MovB
	var_169_bool = 0; // 0x362 PushV
	var_169_bool = 1; // 0x363 MovB
	var_170_bool = 0; // 0x364 PushV
	var_170_bool = 1; // 0x365 MovB
	var_171_bool = 0; var_172_object = Obj(); // 0x366 PushV
	var_172_object = var_1_object; // 0x367 MovT
	func_3726(var_171_bool, var_172_object); // 0x368 NEW_2
	if(var_171_bool == 0) goto Label_881; // 0x36a JumpB
	var_173_bool = 0; var_174_object = Obj(); // 0x36b PushV
	var_174_object = var_1_object; // 0x36c MovT
	func_3736(var_173_bool, var_174_object); // 0x36d NEW_2
	if(var_173_bool == 0) goto Label_881; // 0x36f JumpB
	var_170_bool = 0; // 0x370 MovB
	
Label_881:
	if(var_170_bool == 0) goto Label_888; // 0x371 JumpB
	var_175_bool = 0; var_176_object = Obj(); // 0x372 PushV
	var_176_object = var_1_object; // 0x373 MovT
	func_3746(var_175_bool, var_176_object); // 0x374 NEW_2
	if(var_175_bool == 0) goto Label_888; // 0x376 JumpB
	var_169_bool = 0; // 0x377 MovB
	
Label_888:
	if(var_169_bool == 0) goto Label_895; // 0x378 JumpB
	var_177_bool = 0; var_178_object = Obj(); // 0x379 PushV
	var_178_object = var_1_object; // 0x37a MovT
	func_3756(var_177_bool, var_178_object); // 0x37b NEW_2
	if(var_177_bool == 0) goto Label_895; // 0x37d JumpB
	var_168_bool = 0; // 0x37e MovB
	
Label_895:
	if(var_168_bool == 0) goto Label_901; // 0x37f JumpB
	var_179_int = 543183; // 0x380 PushI
	var_180_int = -1; // 0x381 PushI
	var_181_int = 45639; // 0x382 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x383 TObjFunc
	
Label_901:
	var_182_bool = 0; // 0x385 PushV
	var_182_bool = 1; // 0x386 MovB
	var_183_bool = 0; // 0x387 PushV
	var_183_bool = 1; // 0x388 MovB
	var_184_bool = 0; // 0x389 PushV
	var_184_bool = 1; // 0x38a MovB
	var_185_bool = 0; // 0x38b PushV
	var_185_bool = 1; // 0x38c MovB
	var_186_bool = 0; var_187_object = Obj(); // 0x38d PushV
	var_187_object = var_1_object; // 0x38e MovT
	func_3756(var_186_bool, var_187_object); // 0x38f NEW_2
	if(var_186_bool == 0) goto Label_920; // 0x391 JumpB
	var_188_bool = 0; var_189_object = Obj(); // 0x392 PushV
	var_189_object = var_1_object; // 0x393 MovT
	func_3766(var_188_bool, var_189_object); // 0x394 NEW_2
	if(var_188_bool == 0) goto Label_920; // 0x396 JumpB
	var_185_bool = 0; // 0x397 MovB
	
Label_920:
	if(var_185_bool == 0) goto Label_927; // 0x398 JumpB
	var_190_bool = 0; var_191_object = Obj(); // 0x399 PushV
	var_191_object = var_1_object; // 0x39a MovT
	func_3776(var_190_bool, var_191_object); // 0x39b NEW_2
	if(var_190_bool == 0) goto Label_927; // 0x39d JumpB
	var_184_bool = 0; // 0x39e MovB
	
Label_927:
	if(var_184_bool == 0) goto Label_934; // 0x39f JumpB
	var_192_bool = 0; var_193_object = Obj(); // 0x3a0 PushV
	var_193_object = var_1_object; // 0x3a1 MovT
	func_3786(var_192_bool, var_193_object); // 0x3a2 NEW_2
	if(var_192_bool == 0) goto Label_934; // 0x3a4 JumpB
	var_183_bool = 0; // 0x3a5 MovB
	
Label_934:
	if(var_183_bool == 0) goto Label_941; // 0x3a6 JumpB
	var_194_bool = 0; var_195_object = Obj(); // 0x3a7 PushV
	var_195_object = var_1_object; // 0x3a8 MovT
	func_3796(var_194_bool, var_195_object); // 0x3a9 NEW_2
	if(var_194_bool == 0) goto Label_941; // 0x3ab JumpB
	var_182_bool = 0; // 0x3ac MovB
	
Label_941:
	if(var_182_bool == 0) goto Label_947; // 0x3ad JumpB
	var_196_int = 543187; // 0x3ae PushI
	var_197_int = -1; // 0x3af PushI
	var_198_int = 45643; // 0x3b0 PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x3b1 TObjFunc
	
Label_947:
	var_199_bool = 0; // 0x3b3 PushV
	var_199_bool = 1; // 0x3b4 MovB
	var_200_bool = 0; // 0x3b5 PushV
	var_200_bool = 1; // 0x3b6 MovB
	var_201_bool = 0; // 0x3b7 PushV
	var_201_bool = 1; // 0x3b8 MovB
	var_202_bool = 0; var_203_object = Obj(); // 0x3b9 PushV
	var_203_object = var_1_object; // 0x3ba MovT
	func_3806(var_202_bool, var_203_object); // 0x3bb NEW_2
	if(var_202_bool == 0) goto Label_964; // 0x3bd JumpB
	var_204_bool = 0; var_205_object = Obj(); // 0x3be PushV
	var_205_object = var_1_object; // 0x3bf MovT
	func_3816(var_204_bool, var_205_object); // 0x3c0 NEW_2
	if(var_204_bool == 0) goto Label_964; // 0x3c2 JumpB
	var_201_bool = 0; // 0x3c3 MovB
	
Label_964:
	if(var_201_bool == 0) goto Label_971; // 0x3c4 JumpB
	var_206_bool = 0; var_207_object = Obj(); // 0x3c5 PushV
	var_207_object = var_1_object; // 0x3c6 MovT
	func_3826(var_206_bool, var_207_object); // 0x3c7 NEW_2
	if(var_206_bool == 0) goto Label_971; // 0x3c9 JumpB
	var_200_bool = 0; // 0x3ca MovB
	
Label_971:
	if(var_200_bool == 0) goto Label_978; // 0x3cb JumpB
	var_212_bool = 0; var_213_object = Obj(); // 0x3cc PushV
	var_213_object = var_1_object; // 0x3cd MovT
	func_3836(var_212_bool, var_213_object); // 0x3ce NEW_2
	if(var_212_bool == 0) goto Label_978; // 0x3d0 JumpB
	var_199_bool = 0; // 0x3d1 MovB
	
Label_978:
	if(var_199_bool == 0) goto Label_984; // 0x3d2 JumpB
	var_218_int = 543208; // 0x3d3 PushI
	var_219_int = -1; // 0x3d4 PushI
	var_220_int = 45664; // 0x3d5 PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x3d6 TObjFunc
	
Label_984:
	var_221_bool = 0; // 0x3d8 PushV
	var_221_bool = 1; // 0x3d9 MovB
	var_222_bool = 0; // 0x3da PushV
	var_222_bool = 1; // 0x3db MovB
	var_223_bool = 0; var_224_object = Obj(); // 0x3dc PushV
	var_224_object = var_1_object; // 0x3dd MovT
	func_3726(var_223_bool, var_224_object); // 0x3de NEW_2
	if(var_223_bool == 0) goto Label_999; // 0x3e0 JumpB
	var_225_bool = 0; var_226_object = Obj(); // 0x3e1 PushV
	var_226_object = var_1_object; // 0x3e2 MovT
	func_3736(var_225_bool, var_226_object); // 0x3e3 NEW_2
	if(var_225_bool == 0) goto Label_999; // 0x3e5 JumpB
	var_222_bool = 0; // 0x3e6 MovB
	
Label_999:
	if(var_222_bool == 0) goto Label_1006; // 0x3e7 JumpB
	var_227_bool = 0; var_228_object = Obj(); // 0x3e8 PushV
	var_228_object = var_1_object; // 0x3e9 MovT
	func_3746(var_227_bool, var_228_object); // 0x3ea NEW_2
	if(var_227_bool == 0) goto Label_1006; // 0x3ec JumpB
	var_221_bool = 0; // 0x3ed MovB
	
Label_1006:
	if(var_221_bool == 0) goto Label_1012; // 0x3ee JumpB
	var_229_int = 543181; // 0x3ef PushI
	var_230_int = -1; // 0x3f0 PushI
	var_231_int = 45637; // 0x3f1 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x3f2 TObjFunc
	
Label_1012:
	var_232_bool = 0; // 0x3f4 PushV
	var_232_bool = 1; // 0x3f5 MovB
	var_233_bool = 0; // 0x3f6 PushV
	var_233_bool = 1; // 0x3f7 MovB
	var_234_bool = 0; var_235_object = Obj(); // 0x3f8 PushV
	var_235_object = var_1_object; // 0x3f9 MovT
	func_3756(var_234_bool, var_235_object); // 0x3fa NEW_2
	if(var_234_bool == 0) goto Label_1027; // 0x3fc JumpB
	var_236_bool = 0; var_237_object = Obj(); // 0x3fd PushV
	var_237_object = var_1_object; // 0x3fe MovT
	func_3766(var_236_bool, var_237_object); // 0x3ff NEW_2
	if(var_236_bool == 0) goto Label_1027; // 0x401 JumpB
	var_233_bool = 0; // 0x402 MovB
	
Label_1027:
	if(var_233_bool == 0) goto Label_1034; // 0x403 JumpB
	var_238_bool = 0; var_239_object = Obj(); // 0x404 PushV
	var_239_object = var_1_object; // 0x405 MovT
	func_3776(var_238_bool, var_239_object); // 0x406 NEW_2
	if(var_238_bool == 0) goto Label_1034; // 0x408 JumpB
	var_232_bool = 0; // 0x409 MovB
	
Label_1034:
	if(var_232_bool == 0) goto Label_1040; // 0x40a JumpB
	var_240_int = 543184; // 0x40b PushI
	var_241_int = -1; // 0x40c PushI
	var_242_int = 45640; // 0x40d PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x40e TObjFunc
	
Label_1040:
	var_243_bool = 0; // 0x410 PushV
	var_243_bool = 1; // 0x411 MovB
	var_244_bool = 0; // 0x412 PushV
	var_244_bool = 1; // 0x413 MovB
	var_245_bool = 0; // 0x414 PushV
	var_245_bool = 1; // 0x415 MovB
	var_246_bool = 0; var_247_object = Obj(); // 0x416 PushV
	var_247_object = var_1_object; // 0x417 MovT
	func_3746(var_246_bool, var_247_object); // 0x418 NEW_2
	if(var_246_bool == 0) goto Label_1057; // 0x41a JumpB
	var_248_bool = 0; var_249_object = Obj(); // 0x41b PushV
	var_249_object = var_1_object; // 0x41c MovT
	func_3776(var_248_bool, var_249_object); // 0x41d NEW_2
	if(var_248_bool == 0) goto Label_1057; // 0x41f JumpB
	var_245_bool = 0; // 0x420 MovB
	
Label_1057:
	if(var_245_bool == 0) goto Label_1064; // 0x421 JumpB
	var_250_bool = 0; var_251_object = Obj(); // 0x422 PushV
	var_251_object = var_1_object; // 0x423 MovT
	func_3786(var_250_bool, var_251_object); // 0x424 NEW_2
	if(var_250_bool == 0) goto Label_1064; // 0x426 JumpB
	var_244_bool = 0; // 0x427 MovB
	
Label_1064:
	if(var_244_bool == 0) goto Label_1071; // 0x428 JumpB
	var_252_bool = 0; var_253_object = Obj(); // 0x429 PushV
	var_253_object = var_1_object; // 0x42a MovT
	func_3796(var_252_bool, var_253_object); // 0x42b NEW_2
	if(var_252_bool == 0) goto Label_1071; // 0x42d JumpB
	var_243_bool = 0; // 0x42e MovB
	
Label_1071:
	if(var_243_bool == 0) goto Label_1077; // 0x42f JumpB
	var_254_int = 543185; // 0x430 PushI
	var_255_int = -1; // 0x431 PushI
	var_256_int = 45641; // 0x432 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x433 TObjFunc
	
Label_1077:
	var_257_bool = 0; // 0x435 PushV
	var_257_bool = 1; // 0x436 MovB
	var_258_bool = 0; // 0x437 PushV
	var_258_bool = 1; // 0x438 MovB
	var_259_bool = 0; var_260_object = Obj(); // 0x439 PushV
	var_260_object = var_1_object; // 0x43a MovT
	func_3806(var_259_bool, var_260_object); // 0x43b NEW_2
	if(var_259_bool == 0) goto Label_1092; // 0x43d JumpB
	var_261_bool = 0; var_262_object = Obj(); // 0x43e PushV
	var_262_object = var_1_object; // 0x43f MovT
	func_3816(var_261_bool, var_262_object); // 0x440 NEW_2
	if(var_261_bool == 0) goto Label_1092; // 0x442 JumpB
	var_258_bool = 0; // 0x443 MovB
	
Label_1092:
	if(var_258_bool == 0) goto Label_1099; // 0x444 JumpB
	var_263_bool = 0; var_264_object = Obj(); // 0x445 PushV
	var_264_object = var_1_object; // 0x446 MovT
	func_3826(var_263_bool, var_264_object); // 0x447 NEW_2
	if(var_263_bool == 0) goto Label_1099; // 0x449 JumpB
	var_257_bool = 0; // 0x44a MovB
	
Label_1099:
	if(var_257_bool == 0) goto Label_1105; // 0x44b JumpB
	var_265_int = 543186; // 0x44c PushI
	var_266_int = -1; // 0x44d PushI
	var_267_int = 45642; // 0x44e PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x44f TObjFunc
	
Label_1105:
	var_268_bool = 0; // 0x451 PushV
	var_268_bool = 1; // 0x452 MovB
	var_269_bool = 0; // 0x453 PushV
	var_269_bool = 1; // 0x454 MovB
	var_270_bool = 0; // 0x455 PushV
	var_270_bool = 1; // 0x456 MovB
	var_271_bool = 0; // 0x457 PushV
	var_271_bool = 1; // 0x458 MovB
	var_272_bool = 0; var_273_object = Obj(); // 0x459 PushV
	var_273_object = var_1_object; // 0x45a MovT
	func_3776(var_272_bool, var_273_object); // 0x45b NEW_2
	if(var_272_bool == 0) goto Label_1124; // 0x45d JumpB
	var_274_bool = 0; var_275_object = Obj(); // 0x45e PushV
	var_275_object = var_1_object; // 0x45f MovT
	func_3796(var_274_bool, var_275_object); // 0x460 NEW_2
	if(var_274_bool == 0) goto Label_1124; // 0x462 JumpB
	var_271_bool = 0; // 0x463 MovB
	
Label_1124:
	if(var_271_bool == 0) goto Label_1131; // 0x464 JumpB
	var_276_bool = 0; var_277_object = Obj(); // 0x465 PushV
	var_277_object = var_1_object; // 0x466 MovT
	func_3806(var_276_bool, var_277_object); // 0x467 NEW_2
	if(var_276_bool == 0) goto Label_1131; // 0x469 JumpB
	var_270_bool = 0; // 0x46a MovB
	
Label_1131:
	if(var_270_bool == 0) goto Label_1138; // 0x46b JumpB
	var_278_bool = 0; var_279_object = Obj(); // 0x46c PushV
	var_279_object = var_1_object; // 0x46d MovT
	func_3836(var_278_bool, var_279_object); // 0x46e NEW_2
	if(var_278_bool == 0) goto Label_1138; // 0x470 JumpB
	var_269_bool = 0; // 0x471 MovB
	
Label_1138:
	if(var_269_bool == 0) goto Label_1145; // 0x472 JumpB
	var_280_bool = 0; var_281_object = Obj(); // 0x473 PushV
	var_281_object = var_1_object; // 0x474 MovT
	func_3816(var_280_bool, var_281_object); // 0x475 NEW_2
	if(var_280_bool == 0) goto Label_1145; // 0x477 JumpB
	var_268_bool = 0; // 0x478 MovB
	
Label_1145:
	if(var_268_bool == 0) goto Label_1151; // 0x479 JumpB
	var_282_int = 543188; // 0x47a PushI
	var_283_int = -1; // 0x47b PushI
	var_284_int = 45644; // 0x47c PushI
	AddReply(var_282_int, var_283_int, var_284_int); // 0x47d TObjFunc
	
Label_1151:
	return 0; // 0x47f Return
	
Label_1152:
	var_285_string = ""; // 0x480 PushV
	var_285_string = "Neutral"; // 0x481 MovS
	func_649(var_21_bool, var_285_string); // 0x482 NEW_2
	var_286_int = 538167; // 0x484 PushI
	SetMessage(var_286_int); // 0x485 TObjFunc
	ClearReplies(); // 0x487 TObjFunc
	var_287_int = 538168; // 0x489 PushI
	var_288_int = -1; // 0x48a PushI
	var_289_int = 40043; // 0x48b PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0x48c TObjFunc
	var_290_bool = 0; // 0x48e PushV
	var_290_bool = 0; // 0x48f MovB
	var_291_bool = 0; var_292_object = Obj(); // 0x490 PushV
	var_292_object = var_1_object; // 0x491 MovT
	func_3726(var_291_bool, var_292_object); // 0x492 NEW_2
	if(var_291_bool == 0) goto Label_1179; // 0x494 JumpB
	var_293_bool = 0; var_294_object = Obj(); // 0x495 PushV
	var_294_object = var_1_object; // 0x496 MovT
	func_3690(var_294_object); // 0x497 NEW_2
	if(var_293_bool == 0) goto Label_1179; // 0x499 JumpB
	var_290_bool = 1; // 0x49a MovB
	
Label_1179:
	if(var_290_bool == 0) goto Label_1185; // 0x49b JumpB
	var_299_int = 538169; // 0x49c PushI
	var_300_int = 40045; // 0x49d PushI
	var_301_int = 40044; // 0x49e PushI
	AddReply(var_299_int, var_300_int, var_301_int); // 0x49f TObjFunc
	
Label_1185:
	var_302_bool = 0; // 0x4a1 PushV
	var_302_bool = 0; // 0x4a2 MovB
	var_303_bool = 0; // 0x4a3 PushV
	var_303_bool = 0; // 0x4a4 MovB
	var_304_bool = 0; var_305_object = Obj(); // 0x4a5 PushV
	var_305_object = var_1_object; // 0x4a6 MovT
	func_3726(var_304_bool, var_305_object); // 0x4a7 NEW_2
	if(var_304_bool == 0) goto Label_1200; // 0x4a9 JumpB
	var_306_bool = 0; var_307_object = Obj(); // 0x4aa PushV
	var_307_object = var_1_object; // 0x4ab MovT
	func_3846(var_306_bool, var_307_object); // 0x4ac NEW_2
	if(var_306_bool == 0) goto Label_1200; // 0x4ae JumpB
	var_303_bool = 1; // 0x4af MovB
	
Label_1200:
	if(var_303_bool == 0) goto Label_1207; // 0x4b0 JumpB
	var_317_bool = 0; var_318_object = Obj(); // 0x4b1 PushV
	var_318_object = var_1_object; // 0x4b2 MovT
	func_3690(var_318_object); // 0x4b3 NEW_2
	if(var_317_bool == 0) goto Label_1207; // 0x4b5 JumpB
	var_302_bool = 1; // 0x4b6 MovB
	
Label_1207:
	if(var_302_bool == 0) goto Label_1213; // 0x4b7 JumpB
	var_319_int = 538179; // 0x4b8 PushI
	var_320_int = 40055; // 0x4b9 PushI
	var_321_int = 40054; // 0x4ba PushI
	AddReply(var_319_int, var_320_int, var_321_int); // 0x4bb TObjFunc
	
Label_1213:
	var_322_bool = 0; // 0x4bd PushV
	var_322_bool = 0; // 0x4be MovB
	var_323_bool = 0; var_324_object = Obj(); // 0x4bf PushV
	var_324_object = var_1_object; // 0x4c0 MovT
	func_3736(var_323_bool, var_324_object); // 0x4c1 NEW_2
	if(var_323_bool == 0) goto Label_1226; // 0x4c3 JumpB
	var_325_bool = 0; var_326_object = Obj(); // 0x4c4 PushV
	var_326_object = var_1_object; // 0x4c5 MovT
	func_3690(var_326_object); // 0x4c6 NEW_2
	if(var_325_bool == 0) goto Label_1226; // 0x4c8 JumpB
	var_322_bool = 1; // 0x4c9 MovB
	
Label_1226:
	if(var_322_bool == 0) goto Label_1232; // 0x4ca JumpB
	var_327_int = 538190; // 0x4cb PushI
	var_328_int = 40067; // 0x4cc PushI
	var_329_int = 40066; // 0x4cd PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0x4ce TObjFunc
	
Label_1232:
	var_330_bool = 0; // 0x4d0 PushV
	var_330_bool = 1; // 0x4d1 MovB
	var_331_bool = 0; var_332_object = Obj(); // 0x4d2 PushV
	var_332_object = var_1_object; // 0x4d3 MovT
	func_3690(var_332_object); // 0x4d4 NEW_2
	if(var_331_bool == 0) goto Label_1245; // 0x4d6 JumpB
	var_333_bool = 0; var_334_object = Obj(); // 0x4d7 PushV
	var_334_object = var_1_object; // 0x4d8 MovT
	func_3702(var_334_object); // 0x4d9 NEW_2
	if(var_333_bool == 0) goto Label_1245; // 0x4db JumpB
	var_330_bool = 0; // 0x4dc MovB
	
Label_1245:
	if(var_330_bool == 0) goto Label_1251; // 0x4dd JumpB
	var_339_int = 538204; // 0x4de PushI
	var_340_int = -1; // 0x4df PushI
	var_341_int = 40081; // 0x4e0 PushI
	AddReply(var_339_int, var_340_int, var_341_int); // 0x4e1 TObjFunc
	
Label_1251:
	var_342_int = 538205; // 0x4e3 PushI
	var_343_int = -1; // 0x4e4 PushI
	var_344_int = 40082; // 0x4e5 PushI
	AddReply(var_342_int, var_343_int, var_344_int); // 0x4e6 TObjFunc
	return 0; // 0x4e8 Return
	
Label_1257:
	var_345_int = 40067; // 0x4e9 PushI
	var_346_bool = var_20_cvector == var_345_int; // 0x4ea Eq
	if(var_346_bool == 0) goto Label_1280; // 0x4eb JumpB
	var_347_string = ""; // 0x4ec PushV
	var_347_string = "Neutral"; // 0x4ed MovS
	func_649(var_21_bool, var_347_string); // 0x4ee NEW_2
	var_348_int = 538191; // 0x4f0 PushI
	SetMessage(var_348_int); // 0x4f1 TObjFunc
	ClearReplies(); // 0x4f3 TObjFunc
	var_349_int = 538192; // 0x4f5 PushI
	var_350_int = 40069; // 0x4f6 PushI
	var_351_int = 40068; // 0x4f7 PushI
	AddReply(var_349_int, var_350_int, var_351_int); // 0x4f8 TObjFunc
	var_352_int = 538203; // 0x4fa PushI
	var_353_int = 40069; // 0x4fb PushI
	var_354_int = 40079; // 0x4fc PushI
	AddReply(var_352_int, var_353_int, var_354_int); // 0x4fd TObjFunc
	return 0; // 0x4ff Return
	
Label_1280:
	var_355_int = 40069; // 0x500 PushI
	var_356_bool = var_20_cvector == var_355_int; // 0x501 Eq
	if(var_356_bool == 0) goto Label_1303; // 0x502 JumpB
	var_357_string = ""; // 0x503 PushV
	var_357_string = "Neutral"; // 0x504 MovS
	func_649(var_21_bool, var_357_string); // 0x505 NEW_2
	var_358_int = 538193; // 0x507 PushI
	SetMessage(var_358_int); // 0x508 TObjFunc
	ClearReplies(); // 0x50a TObjFunc
	var_359_int = 538194; // 0x50c PushI
	var_360_int = 40071; // 0x50d PushI
	var_361_int = 40070; // 0x50e PushI
	AddReply(var_359_int, var_360_int, var_361_int); // 0x50f TObjFunc
	var_362_int = 538202; // 0x511 PushI
	var_363_int = -1; // 0x512 PushI
	var_364_int = 40078; // 0x513 PushI
	AddReply(var_362_int, var_363_int, var_364_int); // 0x514 TObjFunc
	return 0; // 0x516 Return
	
Label_1303:
	var_365_int = 40071; // 0x517 PushI
	var_366_bool = var_20_cvector == var_365_int; // 0x518 Eq
	if(var_366_bool == 0) goto Label_1326; // 0x519 JumpB
	var_367_string = ""; // 0x51a PushV
	var_367_string = "Neutral"; // 0x51b MovS
	func_649(var_21_bool, var_367_string); // 0x51c NEW_2
	var_368_int = 538195; // 0x51e PushI
	SetMessage(var_368_int); // 0x51f TObjFunc
	ClearReplies(); // 0x521 TObjFunc
	var_369_int = 538196; // 0x523 PushI
	var_370_int = 40073; // 0x524 PushI
	var_371_int = 40072; // 0x525 PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0x526 TObjFunc
	var_372_int = 538201; // 0x528 PushI
	var_373_int = -1; // 0x529 PushI
	var_374_int = 40077; // 0x52a PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0x52b TObjFunc
	return 0; // 0x52d Return
	
Label_1326:
	var_375_int = 40073; // 0x52e PushI
	var_376_bool = var_20_cvector == var_375_int; // 0x52f Eq
	if(var_376_bool == 0) goto Label_1354; // 0x530 JumpB
	var_377_string = ""; // 0x531 PushV
	var_377_string = "Neutral"; // 0x532 MovS
	func_649(var_21_bool, var_377_string); // 0x533 NEW_2
	var_378_int = 538197; // 0x535 PushI
	SetMessage(var_378_int); // 0x536 TObjFunc
	ClearReplies(); // 0x538 TObjFunc
	var_379_int = 538198; // 0x53a PushI
	var_380_int = -1; // 0x53b PushI
	var_381_int = 40074; // 0x53c PushI
	AddReply(var_379_int, var_380_int, var_381_int); // 0x53d TObjFunc
	var_382_int = 538199; // 0x53f PushI
	var_383_int = -1; // 0x540 PushI
	var_384_int = 40075; // 0x541 PushI
	AddReply(var_382_int, var_383_int, var_384_int); // 0x542 TObjFunc
	var_385_int = 538200; // 0x544 PushI
	var_386_int = -1; // 0x545 PushI
	var_387_int = 40076; // 0x546 PushI
	AddReply(var_385_int, var_386_int, var_387_int); // 0x547 TObjFunc
	return 0; // 0x549 Return
	
Label_1354:
	var_388_int = 40055; // 0x54a PushI
	var_389_bool = var_20_cvector == var_388_int; // 0x54b Eq
	if(var_389_bool == 0) goto Label_1382; // 0x54c JumpB
	var_390_string = ""; // 0x54d PushV
	var_390_string = "Neutral"; // 0x54e MovS
	func_649(var_21_bool, var_390_string); // 0x54f NEW_2
	var_391_int = 538180; // 0x551 PushI
	SetMessage(var_391_int); // 0x552 TObjFunc
	ClearReplies(); // 0x554 TObjFunc
	var_392_int = 538181; // 0x556 PushI
	var_393_int = 40057; // 0x557 PushI
	var_394_int = 40056; // 0x558 PushI
	AddReply(var_392_int, var_393_int, var_394_int); // 0x559 TObjFunc
	var_395_int = 538188; // 0x55b PushI
	var_396_int = 40057; // 0x55c PushI
	var_397_int = 40063; // 0x55d PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0x55e TObjFunc
	var_398_int = 538189; // 0x560 PushI
	var_399_int = -1; // 0x561 PushI
	var_400_int = 40065; // 0x562 PushI
	AddReply(var_398_int, var_399_int, var_400_int); // 0x563 TObjFunc
	return 0; // 0x565 Return
	
Label_1382:
	var_401_int = 40057; // 0x566 PushI
	var_402_bool = var_20_cvector == var_401_int; // 0x567 Eq
	if(var_402_bool == 0) goto Label_1405; // 0x568 JumpB
	var_403_string = ""; // 0x569 PushV
	var_403_string = "Neutral"; // 0x56a MovS
	func_649(var_21_bool, var_403_string); // 0x56b NEW_2
	var_404_int = 538182; // 0x56d PushI
	SetMessage(var_404_int); // 0x56e TObjFunc
	ClearReplies(); // 0x570 TObjFunc
	var_405_int = 538183; // 0x572 PushI
	var_406_int = 40059; // 0x573 PushI
	var_407_int = 40058; // 0x574 PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0x575 TObjFunc
	var_408_int = 538187; // 0x577 PushI
	var_409_int = -1; // 0x578 PushI
	var_410_int = 40062; // 0x579 PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0x57a TObjFunc
	return 0; // 0x57c Return
	
Label_1405:
	var_411_int = 40059; // 0x57d PushI
	var_412_bool = var_20_cvector == var_411_int; // 0x57e Eq
	if(var_412_bool == 0) goto Label_1428; // 0x57f JumpB
	var_413_string = ""; // 0x580 PushV
	var_413_string = "Neutral"; // 0x581 MovS
	func_649(var_21_bool, var_413_string); // 0x582 NEW_2
	var_414_int = 538184; // 0x584 PushI
	SetMessage(var_414_int); // 0x585 TObjFunc
	ClearReplies(); // 0x587 TObjFunc
	var_415_int = 538185; // 0x589 PushI
	var_416_int = -1; // 0x58a PushI
	var_417_int = 40060; // 0x58b PushI
	AddReply(var_415_int, var_416_int, var_417_int); // 0x58c TObjFunc
	var_418_int = 538186; // 0x58e PushI
	var_419_int = -1; // 0x58f PushI
	var_420_int = 40061; // 0x590 PushI
	AddReply(var_418_int, var_419_int, var_420_int); // 0x591 TObjFunc
	return 0; // 0x593 Return
	
Label_1428:
	var_421_int = 40045; // 0x594 PushI
	var_422_bool = var_20_cvector == var_421_int; // 0x595 Eq
	if(var_422_bool == 0) goto Label_1456; // 0x596 JumpB
	var_423_string = ""; // 0x597 PushV
	var_423_string = "Neutral"; // 0x598 MovS
	func_649(var_21_bool, var_423_string); // 0x599 NEW_2
	var_424_int = 538170; // 0x59b PushI
	SetMessage(var_424_int); // 0x59c TObjFunc
	ClearReplies(); // 0x59e TObjFunc
	var_425_int = 538171; // 0x5a0 PushI
	var_426_int = 40047; // 0x5a1 PushI
	var_427_int = 40046; // 0x5a2 PushI
	AddReply(var_425_int, var_426_int, var_427_int); // 0x5a3 TObjFunc
	var_428_int = 538175; // 0x5a5 PushI
	var_429_int = 40051; // 0x5a6 PushI
	var_430_int = 40050; // 0x5a7 PushI
	AddReply(var_428_int, var_429_int, var_430_int); // 0x5a8 TObjFunc
	var_431_int = 538178; // 0x5aa PushI
	var_432_int = -1; // 0x5ab PushI
	var_433_int = 40053; // 0x5ac PushI
	AddReply(var_431_int, var_432_int, var_433_int); // 0x5ad TObjFunc
	return 0; // 0x5af Return
	
Label_1456:
	var_434_int = 40051; // 0x5b0 PushI
	var_435_bool = var_20_cvector == var_434_int; // 0x5b1 Eq
	if(var_435_bool == 0) goto Label_1474; // 0x5b2 JumpB
	var_436_string = ""; // 0x5b3 PushV
	var_436_string = "Neutral"; // 0x5b4 MovS
	func_649(var_21_bool, var_436_string); // 0x5b5 NEW_2
	var_437_int = 538176; // 0x5b7 PushI
	SetMessage(var_437_int); // 0x5b8 TObjFunc
	ClearReplies(); // 0x5ba TObjFunc
	var_438_int = 538177; // 0x5bc PushI
	var_439_int = -1; // 0x5bd PushI
	var_440_int = 40052; // 0x5be PushI
	AddReply(var_438_int, var_439_int, var_440_int); // 0x5bf TObjFunc
	return 0; // 0x5c1 Return
	
Label_1474:
	var_441_int = 40047; // 0x5c2 PushI
	var_442_bool = var_20_cvector == var_441_int; // 0x5c3 Eq
	if(var_442_bool == 0) goto Label_1497; // 0x5c4 JumpB
	var_443_string = ""; // 0x5c5 PushV
	var_443_string = "Neutral"; // 0x5c6 MovS
	func_649(var_21_bool, var_443_string); // 0x5c7 NEW_2
	var_444_int = 538172; // 0x5c9 PushI
	SetMessage(var_444_int); // 0x5ca TObjFunc
	ClearReplies(); // 0x5cc TObjFunc
	var_445_int = 538173; // 0x5ce PushI
	var_446_int = -1; // 0x5cf PushI
	var_447_int = 40048; // 0x5d0 PushI
	AddReply(var_445_int, var_446_int, var_447_int); // 0x5d1 TObjFunc
	var_448_int = 538174; // 0x5d3 PushI
	var_449_int = -1; // 0x5d4 PushI
	var_450_int = 40049; // 0x5d5 PushI
	AddReply(var_448_int, var_449_int, var_450_int); // 0x5d6 TObjFunc
	return 0; // 0x5d8 Return
	
Label_1497:
	var_451_int = 45656; // 0x5d9 PushI
	var_452_bool = var_20_cvector == var_451_int; // 0x5da Eq
	if(var_452_bool == 0) goto Label_1525; // 0x5db JumpB
	var_453_string = ""; // 0x5dc PushV
	var_453_string = "Neutral"; // 0x5dd MovS
	func_649(var_21_bool, var_453_string); // 0x5de NEW_2
	var_454_int = 543200; // 0x5e0 PushI
	SetMessage(var_454_int); // 0x5e1 TObjFunc
	ClearReplies(); // 0x5e3 TObjFunc
	var_455_int = 543205; // 0x5e5 PushI
	var_456_int = -1; // 0x5e6 PushI
	var_457_int = 45661; // 0x5e7 PushI
	AddReply(var_455_int, var_456_int, var_457_int); // 0x5e8 TObjFunc
	var_458_int = 543206; // 0x5ea PushI
	var_459_int = -1; // 0x5eb PushI
	var_460_int = 45662; // 0x5ec PushI
	AddReply(var_458_int, var_459_int, var_460_int); // 0x5ed TObjFunc
	var_461_int = 543207; // 0x5ef PushI
	var_462_int = -1; // 0x5f0 PushI
	var_463_int = 45663; // 0x5f1 PushI
	AddReply(var_461_int, var_462_int, var_463_int); // 0x5f2 TObjFunc
	return 0; // 0x5f4 Return
	
Label_1525:
	var_464_int = 45655; // 0x5f5 PushI
	var_465_bool = var_20_cvector == var_464_int; // 0x5f6 Eq
	if(var_465_bool == 0) goto Label_1568; // 0x5f7 JumpB
	var_466_string = ""; // 0x5f8 PushV
	var_466_string = "Neutral"; // 0x5f9 MovS
	func_649(var_21_bool, var_466_string); // 0x5fa NEW_2
	var_467_int = 543199; // 0x5fc PushI
	SetMessage(var_467_int); // 0x5fd TObjFunc
	ClearReplies(); // 0x5ff TObjFunc
	var_468_int = 543201; // 0x601 PushI
	var_469_int = -1; // 0x602 PushI
	var_470_int = 45657; // 0x603 PushI
	AddReply(var_468_int, var_469_int, var_470_int); // 0x604 TObjFunc
	var_471_int = 543202; // 0x606 PushI
	var_472_int = -1; // 0x607 PushI
	var_473_int = 45658; // 0x608 PushI
	AddReply(var_471_int, var_472_int, var_473_int); // 0x609 TObjFunc
	var_474_bool = 0; var_475_object = Obj(); // 0x60b PushV
	var_475_object = var_1_object; // 0x60c MovT
	func_3736(var_474_bool, var_475_object); // 0x60d NEW_2
	if(var_474_bool == 0) goto Label_1557; // 0x60f JumpB
	var_476_int = 543203; // 0x610 PushI
	var_477_int = -1; // 0x611 PushI
	var_478_int = 45659; // 0x612 PushI
	AddReply(var_476_int, var_477_int, var_478_int); // 0x613 TObjFunc
	
Label_1557:
	var_479_bool = 0; var_480_object = Obj(); // 0x615 PushV
	var_480_object = var_1_object; // 0x616 MovT
	func_3776(var_479_bool, var_480_object); // 0x617 NEW_2
	if(var_479_bool == 0) goto Label_1567; // 0x619 JumpB
	var_481_int = 543204; // 0x61a PushI
	var_482_int = -1; // 0x61b PushI
	var_483_int = 45660; // 0x61c PushI
	AddReply(var_481_int, var_482_int, var_483_int); // 0x61d TObjFunc
	
Label_1567:
	return 0; // 0x61f Return
	
Label_1568:
	var_484_int = 45648; // 0x620 PushI
	var_485_bool = var_20_cvector == var_484_int; // 0x621 Eq
	if(var_485_bool == 0) goto Label_1644; // 0x622 JumpB
	var_486_bool = 0; var_487_object = Obj(); // 0x623 PushV
	var_487_object = var_1_object; // 0x624 MovT
	func_3726(var_486_bool, var_487_object); // 0x625 NEW_2
	if(var_486_bool == 0) goto Label_1601; // 0x627 JumpB
	var_488_string = ""; // 0x628 PushV
	var_488_string = "Neutral"; // 0x629 MovS
	func_649(var_21_bool, var_488_string); // 0x62a NEW_2
	var_489_int = 543192; // 0x62c PushI
	SetMessage(var_489_int); // 0x62d TObjFunc
	ClearReplies(); // 0x62f TObjFunc
	var_490_int = 543193; // 0x631 PushI
	var_491_int = -1; // 0x632 PushI
	var_492_int = 45649; // 0x633 PushI
	AddReply(var_490_int, var_491_int, var_492_int); // 0x634 TObjFunc
	var_493_int = 543194; // 0x636 PushI
	var_494_int = -1; // 0x637 PushI
	var_495_int = 45650; // 0x638 PushI
	AddReply(var_493_int, var_494_int, var_495_int); // 0x639 TObjFunc
	var_496_int = 543195; // 0x63b PushI
	var_497_int = -1; // 0x63c PushI
	var_498_int = 45651; // 0x63d PushI
	AddReply(var_496_int, var_497_int, var_498_int); // 0x63e TObjFunc
	return 0; // 0x640 Return
	
Label_1601:
	var_499_bool = 0; // 0x641 PushV
	var_499_bool = 1; // 0x642 MovB
	var_500_bool = 0; // 0x643 PushV
	var_500_bool = 1; // 0x644 MovB
	var_501_bool = 0; var_502_object = Obj(); // 0x645 PushV
	var_502_object = var_1_object; // 0x646 MovT
	func_3746(var_501_bool, var_502_object); // 0x647 NEW_2
	if(var_501_bool == 0) goto Label_1616; // 0x649 JumpB
	var_503_bool = 0; var_504_object = Obj(); // 0x64a PushV
	var_504_object = var_1_object; // 0x64b MovT
	func_3756(var_503_bool, var_504_object); // 0x64c NEW_2
	if(var_503_bool == 0) goto Label_1616; // 0x64e JumpB
	var_500_bool = 0; // 0x64f MovB
	
Label_1616:
	if(var_500_bool == 0) goto Label_1623; // 0x650 JumpB
	var_505_bool = 0; var_506_object = Obj(); // 0x651 PushV
	var_506_object = var_1_object; // 0x652 MovT
	func_3766(var_505_bool, var_506_object); // 0x653 NEW_2
	if(var_505_bool == 0) goto Label_1623; // 0x655 JumpB
	var_499_bool = 0; // 0x656 MovB
	
Label_1623:
	if(var_499_bool == 0) goto Label_1644; // 0x657 JumpB
	var_507_string = ""; // 0x658 PushV
	var_507_string = "Neutral"; // 0x659 MovS
	func_649(var_21_bool, var_507_string); // 0x65a NEW_2
	var_508_int = 543196; // 0x65c PushI
	SetMessage(var_508_int); // 0x65d TObjFunc
	ClearReplies(); // 0x65f TObjFunc
	var_509_int = 543197; // 0x661 PushI
	var_510_int = -1; // 0x662 PushI
	var_511_int = 45653; // 0x663 PushI
	AddReply(var_509_int, var_510_int, var_511_int); // 0x664 TObjFunc
	var_512_int = 543198; // 0x666 PushI
	var_513_int = -1; // 0x667 PushI
	var_514_int = 45654; // 0x668 PushI
	AddReply(var_512_int, var_513_int, var_514_int); // 0x669 TObjFunc
	return 0; // 0x66b Return
	
Label_1644:
	var_3_string = 1; // 0x66c TMovB
	var_515_bool = 0; // 0x66d PushV
	func_4884(var_515_bool); // 0x66e NEW_2
	if(var_515_bool == 0) goto Label_1652; // 0x670 JumpB
	lshStopAnimation(); // 0x671 Func
	goto Label_1654; // 0x673 Jump
	
Label_1654:
	return 0; // 0x676 Return
	
Label_1652:
	StopAnimation(); // 0x674 Func
	
Label_1656:
	return 0; // 0x678 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0x688 PushV
	var_23_int = 0; var_24_object = Obj(); // 0x689 PushV
	var_24_object = var_20_bool; // 0x68a Mov
	func_4600(var_24_object); // 0x68b NEW_2
	var_22_int = var_23_int; // 0x68c Mov
	var_25_int = 0; // 0x68e PushI
	var_26_bool = var_22_int > var_25_int; // 0x68f GT
	if(var_26_bool == 0) goto Label_1685; // 0x690 JumpB
	var_27_object = Obj(); // 0x691 PushV
	var_27_object = var_20_bool; // 0x692 Mov
	func_4603(var_27_object); // 0x693 NEW_2
	
Label_1685:
	return 2; // 0x695 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool)
{
	func_4609(); // 0x697 NEW_2
	return 0; // 0x699 Return
}


task_2_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_float, var_8_float, var_9_bool, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_object, var_22_cvector, var_23_bool)
{
	return 0; // 0x710 Return
}


task_2_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_string, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	return 0; // 0x712 Return
}


task_2_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	return 0; // 0x714 Return
}


task_3_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0x740 PushV
	var_23_int = 0; var_24_object = Obj(); // 0x741 PushV
	var_24_object = var_20_bool; // 0x742 Mov
	func_4600(var_24_object); // 0x743 NEW_2
	var_22_int = var_23_int; // 0x744 Mov
	var_25_int = 0; // 0x746 PushI
	var_26_bool = var_22_int > var_25_int; // 0x747 GT
	if(var_26_bool == 0) goto Label_1875; // 0x748 JumpB
	var_27_int = 1; // 0x749 PushI
	var_28_bool = var_22_int > var_27_int; // 0x74a GT
	if(var_28_bool == 0) goto Label_1871; // 0x74b JumpB
	func_2049(var_22_int); // 0x74d NEW_2
	
Label_1871:
	var_31_object = Obj(); // 0x74f PushV
	var_31_object = var_20_bool; // 0x750 Mov
	func_4603(var_31_object); // 0x751 NEW_2
	
Label_1875:
	return 2; // 0x753 Return
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0x754 PushV
	var_23_object = Obj(); // 0x755 PushV
	var_23_object = var_20_bool; // 0x756 Mov
	func_4439(var_23_object); // 0x757 NEW_2
	var_32_int = 0; var_33_object = Obj(); // 0x759 PushV
	var_33_object = var_20_bool; // 0x75a Mov
	func_4498(var_32_int, var_33_object); // 0x75b NEW_2
	var_22_int = var_32_int; // 0x75c Mov
	var_68_int = 0; // 0x75e PushI
	var_69_bool = var_22_int > var_68_int; // 0x75f GT
	if(var_69_bool == 0) goto Label_1899; // 0x760 JumpB
	var_70_int = 1; // 0x761 PushI
	var_71_bool = var_22_int > var_70_int; // 0x762 GT
	if(var_71_bool == 0) goto Label_1895; // 0x763 JumpB
	func_2049(var_22_int); // 0x765 NEW_2
	
Label_1895:
	var_74_object = Obj(); // 0x767 PushV
	var_74_object = var_20_bool; // 0x768 Mov
	func_4508(var_74_object); // 0x769 NEW_2
	
Label_1899:
	return 2; // 0x76b Return
}


task_3_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x76c PushV
	var_25_bool = 0; var_26_object = Obj(); var_27_object = Obj(); var_28_bool = 0; // 0x76d PushV
	var_26_object = var_20_object; // 0x76e Mov
	var_27_object = var_21_cvector; // 0x76f Mov
	var_28_bool = var_22_bool; // 0x770 Mov
	func_4944(var_26_object, var_27_object, var_28_bool); // 0x771 NEW_2
	if(var_25_bool == 0) goto Label_1927; // 0x773 JumpB
	var_74_int = 0; var_75_object = Obj(); var_76_bool = 0; // 0x774 PushV
	var_75_object = var_20_object; // 0x775 Mov
	var_76_bool = var_22_bool; // 0x776 Mov
	func_4516(var_75_object, var_76_bool); // 0x777 NEW_2
	var_24_int = var_74_int; // 0x778 Mov
	var_105_int = 0; // 0x77a PushI
	var_106_bool = var_24_int > var_105_int; // 0x77b GT
	if(var_106_bool == 0) goto Label_1927; // 0x77c JumpB
	var_107_int = 1; // 0x77d PushI
	var_108_bool = var_24_int > var_107_int; // 0x77e GT
	if(var_108_bool == 0) goto Label_1923; // 0x77f JumpB
	func_2049(var_24_int); // 0x781 NEW_2
	
Label_1923:
	var_111_object = Obj(); // 0x783 PushV
	var_111_object = var_20_object; // 0x784 Mov
	func_4526(var_111_object); // 0x785 NEW_2
	
Label_1927:
	return 2; // 0x787 Return
}


task_3_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0x788 PushV
	var_23_int = 0; var_24_object = Obj(); // 0x789 PushV
	var_24_object = var_20_bool; // 0x78a Mov
	func_4610(var_23_int, var_24_object); // 0x78b NEW_2
	var_22_int = var_23_int; // 0x78c Mov
	var_65_int = 0; // 0x78e PushI
	var_66_bool = var_22_int > var_65_int; // 0x78f GT
	if(var_66_bool == 0) goto Label_1947; // 0x790 JumpB
	var_67_int = 1; // 0x791 PushI
	var_68_bool = var_22_int > var_67_int; // 0x792 GT
	if(var_68_bool == 0) goto Label_1943; // 0x793 JumpB
	func_2049(var_22_int); // 0x795 NEW_2
	
Label_1943:
	var_71_object = Obj(); // 0x797 PushV
	var_71_object = var_20_bool; // 0x798 Mov
	func_4626(var_71_object); // 0x799 NEW_2
	
Label_1947:
	return 2; // 0x79b Return
}


task_3_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_string, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0; // 0x79c PushV
	var_24_bool = 0; var_25_object = Obj(); var_26_string = ""; // 0x79d PushV
	var_25_object = var_20_cvector; // 0x79e Mov
	var_26_string = var_21_bool; // 0x79f Mov
	func_4353(var_24_bool, var_25_object, var_26_string); // 0x7a0 NEW_2
	if(var_24_bool == 0) goto Label_1964; // 0x7a2 JumpB
	func_2049(var_23_int); // 0x7a4 NEW_2
	var_58_object = Obj(); var_59_string = ""; // 0x7a6 PushV
	var_58_object = var_20_cvector; // 0x7a7 Mov
	var_59_string = var_21_bool; // 0x7a8 Mov
	func_4385(var_58_object, var_59_string); // 0x7a9 NEW_2
	goto Label_1984; // 0x7ab Jump
	
Label_1984:
	return 2; // 0x7c0 Return
	
Label_1964:
	var_207_int = 0; var_208_string = ""; var_209_object = Obj(); // 0x7ac PushV
	var_208_string = var_21_bool; // 0x7ad Mov
	var_209_object = var_20_cvector; // 0x7ae Mov
	func_4632(var_209_object); // 0x7af NEW_2
	var_23_int = var_207_int; // 0x7b0 Mov
	var_210_int = 0; // 0x7b2 PushI
	var_211_bool = var_23_int > var_210_int; // 0x7b3 GT
	if(var_211_bool == 0) goto Label_1984; // 0x7b4 JumpB
	var_212_int = 1; // 0x7b5 PushI
	var_213_bool = var_23_int > var_212_int; // 0x7b6 GT
	if(var_213_bool == 0) goto Label_1979; // 0x7b7 JumpB
	func_2049(var_23_int); // 0x7b9 NEW_2
	
Label_1979:
	var_214_string = ""; var_215_object = Obj(); // 0x7bb PushV
	var_214_string = var_21_bool; // 0x7bc Mov
	var_215_object = var_20_cvector; // 0x7bd Mov
	func_4635(); // 0x7be NEW_2
}


task_3_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_bool = 0; var_22_string = ""; // 0x7c2 PushV
	var_22_string = var_20_bool; // 0x7c3 Mov
	func_4452(var_21_bool, var_22_string); // 0x7c4 NEW_2
	if(var_21_bool == 0) goto Label_1998; // 0x7c6 JumpB
	func_2049(var_20_bool); // 0x7c8 NEW_2
	var_32_string = ""; // 0x7ca PushV
	var_32_string = var_20_bool; // 0x7cb Mov
	func_4468(var_32_string); // 0x7cc NEW_2
	
Label_1998:
	return 0; // 0x7ce Return
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_object = var_0_object; // 0x7d0 PushT
	if(var_21_object == 0) goto Label_2003; // 0x7d1 JumpB
	return 0; // 0x7d2 Return
	
Label_2003:
	var_22_bool = 0; var_23_object = Obj(); // 0x7d3 PushV
	var_23_object = var_20_bool; // 0x7d4 Mov
	func_4410(var_22_bool, var_23_object); // 0x7d5 NEW_2
	if(var_22_bool == 0) goto Label_2016; // 0x7d7 JumpB
	func_2049(var_20_bool); // 0x7d9 NEW_2
	var_38_object = Obj(); // 0x7db PushV
	var_38_object = var_20_bool; // 0x7dc Mov
	func_4433(var_38_object); // 0x7dd NEW_2
	goto Label_2020; // 0x7df Jump
	
Label_2020:
	return 0; // 0x7e4 Return
	
Label_2016:
	var_112_object = Obj(); // 0x7e0 PushV
	var_112_object = var_20_bool; // 0x7e1 Mov
	func_2071(var_20_bool, var_112_object); // 0x7e2 NEW_2
}


task_3_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_object = var_0_object; // 0x7e6 PushT
	if(var_21_object == 0) goto Label_2025; // 0x7e7 JumpB
	return 0; // 0x7e8 Return
	
Label_2025:
	var_22_object = Obj(); // 0x7e9 PushV
	var_22_object = var_20_bool; // 0x7ea Mov
	func_2071(var_20_bool, var_22_object); // 0x7eb NEW_2
	return 0; // 0x7ed Return
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_int, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_int = 110; // 0x7ef PushI
	var_22_bool = var_20_bool != var_21_int; // 0x7f0 Neq
	if(var_22_bool == 0) goto Label_2035; // 0x7f1 JumpB
	return 0; // 0x7f2 Return
	
Label_2035:
	var_1_object = 0; // 0x7f3 TMovB
	var_23_int = 110; // 0x7f4 PushI
	KillTimer(var_23_int); // 0x7f5 Func
	ResetAAS(); // 0x7f7 Func
	return 0; // 0x7f9 Return
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool)
{
	func_2049(var_19_bool); // 0x7fb NEW_2
	func_4609(); // 0x7fe NEW_2
	return 0; // 0x800 Return
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	func_2049(var_20_bool); // 0x810 NEW_2
	var_23_object = Obj(); // 0x812 PushV
	var_23_object = var_20_bool; // 0x813 Mov
	func_4329(); // 0x814 NEW_2
	return 0; // 0x816 Return
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0x870 PushV
	var_23_int = 0; var_24_object = Obj(); // 0x871 PushV
	var_24_object = var_20_bool; // 0x872 Mov
	func_4600(var_24_object); // 0x873 NEW_2
	var_22_int = var_23_int; // 0x874 Mov
	var_25_int = 0; // 0x876 PushI
	var_26_bool = var_22_int > var_25_int; // 0x877 GT
	if(var_26_bool == 0) goto Label_2179; // 0x878 JumpB
	var_27_int = 1; // 0x879 PushI
	var_28_bool = var_22_int > var_27_int; // 0x87a GT
	if(var_28_bool == 0) goto Label_2175; // 0x87b JumpB
	func_2303(); // 0x87d NEW_2
	
Label_2175:
	var_31_object = Obj(); // 0x87f PushV
	var_31_object = var_20_bool; // 0x880 Mov
	func_4603(var_31_object); // 0x881 NEW_2
	
Label_2179:
	return 2; // 0x883 Return
}


task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0x884 PushV
	var_23_object = Obj(); // 0x885 PushV
	var_23_object = var_20_bool; // 0x886 Mov
	func_4439(var_23_object); // 0x887 NEW_2
	var_32_int = 0; var_33_object = Obj(); // 0x889 PushV
	var_33_object = var_20_bool; // 0x88a Mov
	func_4498(var_32_int, var_33_object); // 0x88b NEW_2
	var_22_int = var_32_int; // 0x88c Mov
	var_68_int = 0; // 0x88e PushI
	var_69_bool = var_22_int > var_68_int; // 0x88f GT
	if(var_69_bool == 0) goto Label_2203; // 0x890 JumpB
	var_70_int = 1; // 0x891 PushI
	var_71_bool = var_22_int > var_70_int; // 0x892 GT
	if(var_71_bool == 0) goto Label_2199; // 0x893 JumpB
	func_2303(); // 0x895 NEW_2
	
Label_2199:
	var_74_object = Obj(); // 0x897 PushV
	var_74_object = var_20_bool; // 0x898 Mov
	func_4508(var_74_object); // 0x899 NEW_2
	
Label_2203:
	return 2; // 0x89b Return
}


task_4_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x89c PushV
	var_25_bool = 0; var_26_object = Obj(); var_27_object = Obj(); var_28_bool = 0; // 0x89d PushV
	var_26_object = var_20_object; // 0x89e Mov
	var_27_object = var_21_cvector; // 0x89f Mov
	var_28_bool = var_22_bool; // 0x8a0 Mov
	func_4944(var_26_object, var_27_object, var_28_bool); // 0x8a1 NEW_2
	if(var_25_bool == 0) goto Label_2231; // 0x8a3 JumpB
	var_74_int = 0; var_75_object = Obj(); var_76_bool = 0; // 0x8a4 PushV
	var_75_object = var_20_object; // 0x8a5 Mov
	var_76_bool = var_22_bool; // 0x8a6 Mov
	func_4516(var_75_object, var_76_bool); // 0x8a7 NEW_2
	var_24_int = var_74_int; // 0x8a8 Mov
	var_105_int = 0; // 0x8aa PushI
	var_106_bool = var_24_int > var_105_int; // 0x8ab GT
	if(var_106_bool == 0) goto Label_2231; // 0x8ac JumpB
	var_107_int = 1; // 0x8ad PushI
	var_108_bool = var_24_int > var_107_int; // 0x8ae GT
	if(var_108_bool == 0) goto Label_2227; // 0x8af JumpB
	func_2303(); // 0x8b1 NEW_2
	
Label_2227:
	var_111_object = Obj(); // 0x8b3 PushV
	var_111_object = var_20_object; // 0x8b4 Mov
	func_4526(var_111_object); // 0x8b5 NEW_2
	
Label_2231:
	return 2; // 0x8b7 Return
}


task_4_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0x8b8 PushV
	var_23_int = 0; var_24_object = Obj(); // 0x8b9 PushV
	var_24_object = var_20_bool; // 0x8ba Mov
	func_4610(var_23_int, var_24_object); // 0x8bb NEW_2
	var_22_int = var_23_int; // 0x8bc Mov
	var_65_int = 0; // 0x8be PushI
	var_66_bool = var_22_int > var_65_int; // 0x8bf GT
	if(var_66_bool == 0) goto Label_2251; // 0x8c0 JumpB
	var_67_int = 1; // 0x8c1 PushI
	var_68_bool = var_22_int > var_67_int; // 0x8c2 GT
	if(var_68_bool == 0) goto Label_2247; // 0x8c3 JumpB
	func_2303(); // 0x8c5 NEW_2
	
Label_2247:
	var_71_object = Obj(); // 0x8c7 PushV
	var_71_object = var_20_bool; // 0x8c8 Mov
	func_4626(var_71_object); // 0x8c9 NEW_2
	
Label_2251:
	return 2; // 0x8cb Return
}


task_4_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_string, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0; // 0x8cc PushV
	var_24_bool = 0; var_25_object = Obj(); var_26_string = ""; // 0x8cd PushV
	var_25_object = var_20_cvector; // 0x8ce Mov
	var_26_string = var_21_bool; // 0x8cf Mov
	func_4353(var_24_bool, var_25_object, var_26_string); // 0x8d0 NEW_2
	if(var_24_bool == 0) goto Label_2268; // 0x8d2 JumpB
	func_2303(); // 0x8d4 NEW_2
	var_58_object = Obj(); var_59_string = ""; // 0x8d6 PushV
	var_58_object = var_20_cvector; // 0x8d7 Mov
	var_59_string = var_21_bool; // 0x8d8 Mov
	func_4385(var_58_object, var_59_string); // 0x8d9 NEW_2
	goto Label_2288; // 0x8db Jump
	
Label_2288:
	return 2; // 0x8f0 Return
	
Label_2268:
	var_207_int = 0; var_208_string = ""; var_209_object = Obj(); // 0x8dc PushV
	var_208_string = var_21_bool; // 0x8dd Mov
	var_209_object = var_20_cvector; // 0x8de Mov
	func_4632(var_209_object); // 0x8df NEW_2
	var_23_int = var_207_int; // 0x8e0 Mov
	var_210_int = 0; // 0x8e2 PushI
	var_211_bool = var_23_int > var_210_int; // 0x8e3 GT
	if(var_211_bool == 0) goto Label_2288; // 0x8e4 JumpB
	var_212_int = 1; // 0x8e5 PushI
	var_213_bool = var_23_int > var_212_int; // 0x8e6 GT
	if(var_213_bool == 0) goto Label_2283; // 0x8e7 JumpB
	func_2303(); // 0x8e9 NEW_2
	
Label_2283:
	var_214_string = ""; var_215_object = Obj(); // 0x8eb PushV
	var_214_string = var_21_bool; // 0x8ec Mov
	var_215_object = var_20_cvector; // 0x8ed Mov
	func_4635(); // 0x8ee NEW_2
}


task_4_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_string, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_bool = 0; var_22_string = ""; // 0x8f2 PushV
	var_22_string = var_20_bool; // 0x8f3 Mov
	func_4452(var_21_bool, var_22_string); // 0x8f4 NEW_2
	if(var_21_bool == 0) goto Label_2302; // 0x8f6 JumpB
	func_2303(); // 0x8f8 NEW_2
	var_32_string = ""; // 0x8fa PushV
	var_32_string = var_20_bool; // 0x8fb Mov
	func_4468(var_32_string); // 0x8fc NEW_2
	
Label_2302:
	return 0; // 0x8fe Return
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	func_2303(); // 0x90c NEW_2
	var_23_object = Obj(); // 0x90e PushV
	var_23_object = var_20_bool; // 0x90f Mov
	func_4329(); // 0x910 NEW_2
	return 0; // 0x912 Return
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x913 PushV
	var_25_int = 111; // 0x914 PushI
	var_26_bool = var_20_bool != var_25_int; // 0x915 Neq
	if(var_26_bool == 0) goto Label_2328; // 0x916 JumpB
	return 4; // 0x917 Return
	
Label_2328:
	var_27_bool = 0; var_28_object = Obj(); // 0x918 PushV
	var_28_object = var_0_object; // 0x919 MovT
	func_3254(var_27_bool, var_28_object); // 0x91a NEW_2
	var_61_bool = var_27_bool == 0; // 0x91c Not
	if(var_61_bool == 0) goto Label_2338; // 0x91d JumpB
	func_2303(); // 0x91f NEW_2
	return 4; // 0x921 Return
	
Label_2338:
	GetDirection(var_23_cvector); // 0x922 Func
	var_64_cvector = CVector(0,0,0); var_65_object = Obj(); // 0x924 PushV
	var_65_object = var_0_object; // 0x925 MovT
	func_3181(var_65_object); // 0x926 NEW_2
	var_24_cvector = var_64_cvector; // 0x927 Mov
	var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); // 0x929 PushV
	var_71_cvector = var_23_cvector; // 0x92a Mov
	var_72_cvector = var_24_cvector; // 0x92b Mov
	func_3646(var_70_float, var_71_cvector, var_72_cvector); // 0x92c NEW_2
	var_94_float = 0.5; // 0x92e PushF
	var_95_bool = var_70_float < var_94_float; // 0x92f LT
	if(var_95_bool == 0) goto Label_2357; // 0x930 JumpB
	var_96_object = Obj(); // 0x931 PushV
	var_96_object = var_0_object; // 0x932 MovT
	func_3404(); // 0x933 NEW_2
	
Label_2357:
	return 4; // 0x935 Return
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool)
{
	func_2303(); // 0x937 NEW_2
	func_4609(); // 0x93a NEW_2
	return 0; // 0x93c Return
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x93e PushV
	var_22_object = var_20_bool; // 0x93f Mov
	func_4410(var_21_bool, var_22_object); // 0x940 NEW_2
	if(var_21_bool == 0) goto Label_2378; // 0x942 JumpB
	func_2303(); // 0x944 NEW_2
	var_37_object = Obj(); // 0x946 PushV
	var_37_object = var_20_bool; // 0x947 Mov
	func_4433(var_37_object); // 0x948 NEW_2
	
Label_2378:
	return 0; // 0x94a Return
}


task_5_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool)
{
	func_2569(var_19_bool); // 0x968 NEW_2
	func_4609(); // 0x96b NEW_2
	return 0; // 0x96d Return
}


task_5_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_float = 0; // 0x9d5 PushV
	var_29_int = 120; // 0x9d6 PushI
	var_30_bool = var_20_bool != var_29_int; // 0x9d7 Neq
	if(var_30_bool == 0) goto Label_2522; // 0x9d8 JumpB
	return 8; // 0x9d9 Return
	
Label_2522:
	var_31_bool = var_0_object == 0; // 0x9da NullEq
	if(var_31_bool == 0) goto Label_2531; // 0x9db JumpB
	Stop(); // 0x9dc Func
	var_32_int = 1; // 0x9de PushI
	KillTimer(var_32_int); // 0x9df Func
	var_2_object = 1; // 0x9e1 TMovB
	goto Label_2568; // 0x9e2 Jump
	
Label_2568:
	return 8; // 0xa08 Return
	
Label_2531:
	GetDirection(var_25_cvector); // 0x9e3 Func
	var_33_float = 7000.0; // 0x9e5 PushF
	FindDirLength(var_26_float, var_25_cvector, var_33_float); // 0x9e6 Func
	var_34_cvector = CVector(0,0,0); var_35_float = 0; // 0x9e8 PushV
	var_35_float = 1.74533; // 0x9e9 MovF
	func_2414(var_34_cvector, var_35_float); // 0x9ea NEW_2
	var_27_cvector = var_34_cvector; // 0x9eb Mov
	var_28_float = var_27_cvector | var_27_cvector; // 0x9ed Or2
	var_64_bool = 0; // 0x9ee PushV
	var_64_bool = 0; // 0x9ef MovB
	var_65_float = 2500.0; // 0x9f0 PushF
	var_66_bool = var_28_float >= var_65_float; // 0x9f1 GE
	if(var_66_bool == 0) goto Label_2561; // 0x9f2 JumpB
	var_67_bool = 0; // 0x9f3 PushV
	var_67_bool = 1; // 0x9f4 MovB
	var_68_float = var_26_float * var_26_float; // 0x9f5 Mult
	var_69_float = 2.25; // 0x9f6 PushF
	var_70_float = var_68_float * var_69_float; // 0x9f7 Mult
	var_71_bool = var_28_float >= var_70_float; // 0x9f8 GE
	if(var_71_bool == 0) goto Label_2559; // 0x9f9 JumpB
	var_72_bool = 0; // 0x9fa PushV
	func_2585(var_67_bool, var_72_bool); // 0x9fb NEW_2
	if(var_72_bool == 0) goto Label_2559; // 0x9fd JumpB
	var_67_bool = 0; // 0x9fe MovB
	
Label_2559:
	if(var_67_bool == 0) goto Label_2561; // 0x9ff JumpB
	var_64_bool = 1; // 0xa00 MovB
	
Label_2561:
	if(var_64_bool == 0) goto Label_2568; // 0xa01 JumpB
	Stop(); // 0xa02 Func
	var_92_cvector = CVector(0,0,0); // 0xa04 PushV
	func_3176(var_92_cvector); // 0xa05 NEW_2
	var_1_object = var_92_cvector + var_27_cvector; // 0xa07 Add2
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	func_2569(var_20_bool); // 0xa12 NEW_2
	var_22_object = Obj(); // 0xa14 PushV
	var_22_object = var_20_bool; // 0xa15 Mov
	func_4329(); // 0xa16 NEW_2
	return 0; // 0xa18 Return
}


task_6_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_int, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_float = 0; // 0xa90 PushV
	var_29_int = 120; // 0xa91 PushI
	var_30_bool = var_20_bool != var_29_int; // 0xa92 Neq
	if(var_30_bool == 0) goto Label_2709; // 0xa93 JumpB
	return 8; // 0xa94 Return
	
Label_2709:
	var_31_bool = var_0_object == 0; // 0xa95 NullEq
	if(var_31_bool == 0) goto Label_2718; // 0xa96 JumpB
	Stop(); // 0xa97 Func
	var_32_int = 1; // 0xa99 PushI
	KillTimer(var_32_int); // 0xa9a Func
	var_2_object = 1; // 0xa9c TMovB
	goto Label_2755; // 0xa9d Jump
	
Label_2755:
	return 8; // 0xac3 Return
	
Label_2718:
	GetDirection(var_25_cvector); // 0xa9e Func
	var_33_float = 7000.0; // 0xaa0 PushF
	FindDirLength(var_26_float, var_25_cvector, var_33_float); // 0xaa1 Func
	var_34_cvector = CVector(0,0,0); var_35_float = 0; // 0xaa3 PushV
	var_35_float = 1.74533; // 0xaa4 MovF
	func_2601(var_34_cvector, var_35_float); // 0xaa5 NEW_2
	var_27_cvector = var_34_cvector; // 0xaa6 Mov
	var_28_float = var_27_cvector | var_27_cvector; // 0xaa8 Or2
	var_64_bool = 0; // 0xaa9 PushV
	var_64_bool = 0; // 0xaaa MovB
	var_65_float = 2500.0; // 0xaab PushF
	var_66_bool = var_28_float >= var_65_float; // 0xaac GE
	if(var_66_bool == 0) goto Label_2748; // 0xaad JumpB
	var_67_bool = 0; // 0xaae PushV
	var_67_bool = 1; // 0xaaf MovB
	var_68_float = var_26_float * var_26_float; // 0xab0 Mult
	var_69_float = 2.25; // 0xab1 PushF
	var_70_float = var_68_float * var_69_float; // 0xab2 Mult
	var_71_bool = var_28_float >= var_70_float; // 0xab3 GE
	if(var_71_bool == 0) goto Label_2746; // 0xab4 JumpB
	var_72_bool = 0; // 0xab5 PushV
	func_2772(var_67_bool, var_72_bool); // 0xab6 NEW_2
	if(var_72_bool == 0) goto Label_2746; // 0xab8 JumpB
	var_67_bool = 0; // 0xab9 MovB
	
Label_2746:
	if(var_67_bool == 0) goto Label_2748; // 0xaba JumpB
	var_64_bool = 1; // 0xabb MovB
	
Label_2748:
	if(var_64_bool == 0) goto Label_2755; // 0xabc JumpB
	Stop(); // 0xabd Func
	var_92_cvector = CVector(0,0,0); // 0xabf PushV
	func_3176(var_92_cvector); // 0xac0 NEW_2
	var_1_object = var_92_cvector + var_27_cvector; // 0xac2 Add2
}


task_6_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	func_2756(var_20_bool); // 0xacd NEW_2
	var_22_object = Obj(); // 0xacf PushV
	var_22_object = var_20_bool; // 0xad0 Mov
	func_4329(); // 0xad1 NEW_2
	return 0; // 0xad3 Return
}


task_7_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool)
{
	func_2950(var_19_bool); // 0xae5 NEW_2
	func_4609(); // 0xae8 NEW_2
	return 0; // 0xaea Return
}


task_7_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_int, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_float = 0; // 0xb52 PushV
	var_29_int = 120; // 0xb53 PushI
	var_30_bool = var_20_bool != var_29_int; // 0xb54 Neq
	if(var_30_bool == 0) goto Label_2903; // 0xb55 JumpB
	return 8; // 0xb56 Return
	
Label_2903:
	var_31_bool = var_0_object == 0; // 0xb57 NullEq
	if(var_31_bool == 0) goto Label_2912; // 0xb58 JumpB
	Stop(); // 0xb59 Func
	var_32_int = 1; // 0xb5b PushI
	KillTimer(var_32_int); // 0xb5c Func
	var_2_object = 1; // 0xb5e TMovB
	goto Label_2949; // 0xb5f Jump
	
Label_2949:
	return 8; // 0xb85 Return
	
Label_2912:
	GetDirection(var_25_cvector); // 0xb60 Func
	var_33_float = 7000.0; // 0xb62 PushF
	FindDirLength(var_26_float, var_25_cvector, var_33_float); // 0xb63 Func
	var_34_cvector = CVector(0,0,0); var_35_float = 0; // 0xb65 PushV
	var_35_float = 1.74533; // 0xb66 MovF
	func_2795(var_34_cvector, var_35_float); // 0xb67 NEW_2
	var_27_cvector = var_34_cvector; // 0xb68 Mov
	var_28_float = var_27_cvector | var_27_cvector; // 0xb6a Or2
	var_64_bool = 0; // 0xb6b PushV
	var_64_bool = 0; // 0xb6c MovB
	var_65_float = 2500.0; // 0xb6d PushF
	var_66_bool = var_28_float >= var_65_float; // 0xb6e GE
	if(var_66_bool == 0) goto Label_2942; // 0xb6f JumpB
	var_67_bool = 0; // 0xb70 PushV
	var_67_bool = 1; // 0xb71 MovB
	var_68_float = var_26_float * var_26_float; // 0xb72 Mult
	var_69_float = 2.25; // 0xb73 PushF
	var_70_float = var_68_float * var_69_float; // 0xb74 Mult
	var_71_bool = var_28_float >= var_70_float; // 0xb75 GE
	if(var_71_bool == 0) goto Label_2940; // 0xb76 JumpB
	var_72_bool = 0; // 0xb77 PushV
	func_2966(var_67_bool, var_72_bool); // 0xb78 NEW_2
	if(var_72_bool == 0) goto Label_2940; // 0xb7a JumpB
	var_67_bool = 0; // 0xb7b MovB
	
Label_2940:
	if(var_67_bool == 0) goto Label_2942; // 0xb7c JumpB
	var_64_bool = 1; // 0xb7d MovB
	
Label_2942:
	if(var_64_bool == 0) goto Label_2949; // 0xb7e JumpB
	Stop(); // 0xb7f Func
	var_92_cvector = CVector(0,0,0); // 0xb81 PushV
	func_3176(var_92_cvector); // 0xb82 NEW_2
	var_1_object = var_92_cvector + var_27_cvector; // 0xb84 Add2
}


task_7_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_object, var_19_cvector, var_20_bool)
{
	func_2950(var_20_bool); // 0xb8f NEW_2
	var_22_object = Obj(); // 0xb91 PushV
	var_22_object = var_20_bool; // 0xb92 Mov
	func_4329(); // 0xb93 NEW_2
	return 0; // 0xb95 Return
}


task_8_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool)
{
	func_3144(var_19_bool); // 0xba7 NEW_2
	func_4609(); // 0xbaa NEW_2
	return 0; // 0xbac Return
}


task_8_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_int)
{
	var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_float = 0; // 0xc14 PushV
	var_29_int = 120; // 0xc15 PushI
	var_30_bool = var_20_int != var_29_int; // 0xc16 Neq
	if(var_30_bool == 0) goto Label_3097; // 0xc17 JumpB
	return 8; // 0xc18 Return
	
Label_3097:
	var_31_bool = var_0_object == 0; // 0xc19 NullEq
	if(var_31_bool == 0) goto Label_3106; // 0xc1a JumpB
	Stop(); // 0xc1b Func
	var_32_int = 1; // 0xc1d PushI
	KillTimer(var_32_int); // 0xc1e Func
	var_2_object = 1; // 0xc20 TMovB
	goto Label_3143; // 0xc21 Jump
	
Label_3143:
	return 8; // 0xc47 Return
	
Label_3106:
	GetDirection(var_25_cvector); // 0xc22 Func
	var_33_float = 7000.0; // 0xc24 PushF
	FindDirLength(var_26_float, var_25_cvector, var_33_float); // 0xc25 Func
	var_34_cvector = CVector(0,0,0); var_35_float = 0; // 0xc27 PushV
	var_35_float = 1.74533; // 0xc28 MovF
	func_2989(var_34_cvector, var_35_float); // 0xc29 NEW_2
	var_27_cvector = var_34_cvector; // 0xc2a Mov
	var_28_float = var_27_cvector | var_27_cvector; // 0xc2c Or2
	var_64_bool = 0; // 0xc2d PushV
	var_64_bool = 0; // 0xc2e MovB
	var_65_float = 2500.0; // 0xc2f PushF
	var_66_bool = var_28_float >= var_65_float; // 0xc30 GE
	if(var_66_bool == 0) goto Label_3136; // 0xc31 JumpB
	var_67_bool = 0; // 0xc32 PushV
	var_67_bool = 1; // 0xc33 MovB
	var_68_float = var_26_float * var_26_float; // 0xc34 Mult
	var_69_float = 2.25; // 0xc35 PushF
	var_70_float = var_68_float * var_69_float; // 0xc36 Mult
	var_71_bool = var_28_float >= var_70_float; // 0xc37 GE
	if(var_71_bool == 0) goto Label_3134; // 0xc38 JumpB
	var_72_bool = 0; // 0xc39 PushV
	func_3160(var_67_bool, var_72_bool); // 0xc3a NEW_2
	if(var_72_bool == 0) goto Label_3134; // 0xc3c JumpB
	var_67_bool = 0; // 0xc3d MovB
	
Label_3134:
	if(var_67_bool == 0) goto Label_3136; // 0xc3e JumpB
	var_64_bool = 1; // 0xc3f MovB
	
Label_3136:
	if(var_64_bool == 0) goto Label_3143; // 0xc40 JumpB
	Stop(); // 0xc41 Func
	var_92_cvector = CVector(0,0,0); // 0xc43 PushV
	func_3176(var_92_cvector); // 0xc44 NEW_2
	var_1_object = var_92_cvector + var_27_cvector; // 0xc46 Add2
}


task_8_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object)
{
	func_3144(var_20_object); // 0xc51 NEW_2
	var_22_object = Obj(); // 0xc53 PushV
	var_22_object = var_20_object; // 0xc54 Mov
	func_4329(); // 0xc55 NEW_2
	return 0; // 0xc57 Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_string)
{
	var_22_float = 0; var_23_float = 0; // 0x10dc PushV
	var_24_string = "health"; // 0x10dd PushS
	var_25_bool = var_21_string == var_24_string; // 0x10de Eq
	if(var_25_bool == 0) goto Label_4328; // 0x10df JumpB
	var_26_string = "health"; // 0x10e0 PushS
	GetProperty(var_26_string, var_23_float); // 0x10e1 Func
	var_27_int = 0; // 0x10e3 PushI
	var_28_bool = var_23_float <= var_27_int; // 0x10e4 LE
	if(var_28_bool == 0) goto Label_4328; // 0x10e5 JumpB
	SignalDeath(var_20_object); // 0x10e6 Func
	
Label_4328:
	return 2; // 0x10e8 Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object)
{
	var_21_object = Obj(); // 0x10ea PushV
	var_21_object = var_20_object; // 0x10eb Mov
	func_4308(var_21_object); // 0x10ec NEW_2
	return 0; // 0x10ee Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_int, var_22_float, var_23_float)
{
	var_24_object = Obj(); var_25_int = 0; var_26_float = 0; // 0x10f0 PushV
	var_24_object = var_20_object; // 0x10f1 Mov
	var_25_int = var_21_int; // 0x10f2 Mov
	var_26_float = var_22_float; // 0x10f3 Mov
	func_3322(var_24_object, var_25_int, var_26_float); // 0x10f4 NEW_2
	return 0; // 0x10f6 Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_int, var_22_float, var_23_float, var_24_cvector, var_25_cvector)
{
	var_26_object = Obj(); var_27_int = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); // 0x10f8 PushV
	var_26_object = var_20_object; // 0x10f9 Mov
	var_27_int = var_21_int; // 0x10fa Mov
	var_28_float = var_22_float; // 0x10fb Mov
	var_29_cvector = var_24_cvector; // 0x10fc Mov
	var_30_cvector = var_25_cvector; // 0x10fd Mov
	func_3390(var_28_float, var_29_cvector, var_30_cvector); // 0x10fe NEW_2
	return 0; // 0x1100 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; // 0x715 PushV
	var_0_object = 0; // 0x716 TMovB
	var_24_bool = 1; // 0x717 PushB
	SensePlayerOnly(var_24_bool); // 0x718 Func
	func_4886(); // 0x71b NEW_2
	func_1847(); // 0x71e NEW_2
	
Label_1824:
	var_144_int = 2; // 0x720 PushI
	irand(var_22_int, var_144_int); // 0x721 Func
	var_145_int = 0; // 0x723 PushI
	var_146_bool = var_22_int == var_145_int; // 0x724 Eq
	if(var_146_bool == 0) goto Label_1838; // 0x725 JumpB
	var_0_object = 1; // 0x726 TMovB
	func_4912(); // 0x728 NEW_2
	var_0_object = 0; // 0x72a TMovB
	ResetAAS(); // 0x72b Func
	goto Label_1845; // 0x72d Jump
	
Label_1845:
	goto Label_1824; // 0x735 Jump
	
Label_1838:
	var_164_int = 4; // 0x72e PushI
	irand(var_23_int, var_164_int); // 0x72f Func
	var_165_int = 1; // 0x731 PushI
	var_166_int = var_23_int + var_165_int; // 0x732 Add
	Sleep(var_166_int); // 0x733 Func
}


func_0(var_0_object, var_45_int, var_46_object)
{
	var_48_object = Obj(); var_49_bool = 0; var_50_int = 0; var_51_bool = 0; var_52_object = Obj(); var_53_bool = 0; var_54_int = 0; var_55_bool = 0; // 0x0 PushV
	var_0_object = var_46_object; // 0x1 TMov
	var_56_bool = 0; var_57_object = Obj(); var_58_float = 0; // 0x2 PushV
	var_57_object = var_46_object; // 0x3 Mov
	var_58_float = 70.0; // 0x4 MovF
	func_3420(var_57_object, var_58_float); // 0x5 NEW_2
	var_103_bool = var_56_bool == 0; // 0x7 Not
	if(var_103_bool == 0) goto Label_11; // 0x8 JumpB
	var_45_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_52_object); // 0xb Func
	var_104_int = 0; // 0xd PushV
	func_4878(var_104_int); // 0xe NEW_2
	SetNPCName(var_104_int); // 0x10 ObjFunc
	var_105_int = 0; // 0x12 PushV
	func_4876(var_105_int); // 0x13 NEW_2
	SetNPCDescription(var_105_int); // 0x15 ObjFunc
	var_106_string = ""; // 0x17 PushV
	func_4880(var_106_string); // 0x18 NEW_2
	SetPhoto(var_106_string); // 0x1a ObjFunc
	var_107_string = ""; // 0x1c PushV
	func_4882(var_107_string); // 0x1d NEW_2
	SetPhoto2(var_107_string); // 0x1f ObjFunc
	var_108_int = 0; // 0x21 PushV
	func_3951(var_108_int); // 0x22 NEW_2
	SetPlayerName(var_108_int); // 0x24 ObjFunc
	var_54_int = -1; // 0x26 MovI
	IsOverrideActive(var_53_bool); // 0x27 Func
	var_116_bool = var_53_bool; // 0x29 Push
	if(var_116_bool == 0) goto Label_45; // 0x2a JumpB
	var_45_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_52_object); // 0x2d Func
	var_117_object = Obj(); var_118_object = Obj(); // 0x2f PushV
	var_117_object = var_46_object; // 0x30 Mov
	var_118_object = var_52_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_119_object, var_120_object, var_121_string, var_122_bool, var_117_object, var_118_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_55_bool); // 0x36 ObjFunc
	
Label_56:
	var_440_bool = var_55_bool == 0; // 0x38 Not
	if(var_440_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_55_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_441_object = Obj(); // 0x3f PushV
	var_441_object = var_46_object; // 0x40 Mov
	func_3489(); // 0x41 NEW_2
	StopDialog(var_52_object); // 0x43 Func
	GetReturnValue(var_54_int); // 0x45 ObjFunc
	var_45_int = var_54_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_4609()
{
	return 0; // 0x1201 Return
}


func_4610(var_23_int, var_24_object)
{
	var_25_bool = 0; var_26_bool = 0; // 0x1202 PushV
	var_27_string = "Received steal"; // 0x1203 PushS
	Trace(var_27_string); // 0x1204 Func
	CanSee(var_26_bool, var_24_object); // 0x1206 Func
	var_28_bool = var_26_bool; // 0x1208 Push
	if(var_28_bool == 0) goto Label_4624; // 0x1209 JumpB
	var_29_int = 0; var_30_object = Obj(); // 0x120a PushV
	var_30_object = var_24_object; // 0x120b Mov
	func_4498(var_29_int, var_30_object); // 0x120c NEW_2
	var_23_int = var_29_int; // 0x120d Mov
	return 2; // 0x120f Return
	
Label_4624:
	var_23_int = 0; // 0x1210 MovI
	return 2; // 0x1211 Return
}


func_2049(var_1_object)
{
	var_21_int = 110; // 0x801 PushI
	KillTimer(var_21_int); // 0x802 Func
	var_1_object = 0; // 0x804 TMovB
	var_22_object = var_0_object; // 0x805 PushT
	if(var_22_object == 0) goto Label_2059; // 0x806 JumpB
	func_4939(); // 0x808 NEW_2
	goto Label_2061; // 0x80a Jump
	
Label_2061:
	return 0; // 0x80d Return
	
Label_2059:
	Stop(); // 0x80b Func
}


func_4104()
{
	var_227_int = 0; // 0x1008 PushV
	func_3968(var_227_int); // 0x1009 NEW_2
	var_231_int = 1; // 0x100b PushI
	var_232_bool = var_227_int != var_231_int; // 0x100c Neq
	if(var_232_bool == 0) goto Label_4111; // 0x100d JumpB
	return 0; // 0x100e Return
	
Label_4111:
	var_233_string = ""; // 0x100f PushV
	var_233_string = "liver"; // 0x1010 MovS
	func_4087(var_233_string); // 0x1011 NEW_2
	var_244_string = ""; // 0x1013 PushV
	var_244_string = "kidney"; // 0x1014 MovS
	func_4087(var_244_string); // 0x1015 NEW_2
	var_245_string = ""; // 0x1017 PushV
	var_245_string = "heart"; // 0x1018 MovS
	func_4087(var_245_string); // 0x1019 NEW_2
	var_246_string = ""; // 0x101b PushV
	var_246_string = "blood"; // 0x101c MovS
	func_4087(var_246_string); // 0x101d NEW_2
	return 0; // 0x101f Return
}


func_2569(var_2_object)
{
	Stop(); // 0xa09 Func
	var_21_int = 120; // 0xa0b PushI
	KillTimer(var_21_int); // 0xa0c Func
	var_2_object = 1; // 0xa0e TMovB
	return 0; // 0xa0f Return
}


func_3597(var_108_object)
{
	var_109_object = Obj(); var_110_object = Obj(); // 0xe0d PushV
	self(var_110_object); // 0xe0e Func
	var_108_object = var_110_object; // 0xe10 Mov
	return 2; // 0xe11 Return
}


func_4626(var_71_object)
{
	var_72_object = Obj(); // 0x1213 PushV
	var_72_object = var_71_object; // 0x1214 Mov
	func_4508(var_72_object); // 0x1215 NEW_2
	return 0; // 0x1217 Return
}


func_3603(var_52_cvector, var_53_cvector)
{
	var_60_float = 0; var_61_float = 0; // 0xe13 PushV
	var_62_int = var_53_cvector | var_53_cvector; // 0xe14 Or
	var_61_float = sqrt(var_62_int); // 0xe15 Sqrt2
	var_63_float = 0.0; // 0xe16 PushF
	var_64_bool = var_61_float < var_63_float; // 0xe17 LT
	if(var_64_bool == 0) goto Label_3611; // 0xe18 JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0xe19 MovV
	return 2; // 0xe1a Return
	
Label_3611:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0xe1b Div2
	return 2; // 0xe1c Return
}


func_2071(var_1_object, var_22_object)
{
	var_23_bool = 0; var_24_int = 0; var_25_bool = 0; var_26_int = 0; // 0x817 PushV
	var_27_object = var_1_object; // 0x818 PushT
	if(var_27_object == 0) goto Label_2075; // 0x819 JumpB
	return 4; // 0x81a Return
	
Label_2075:
	IsPlayerActor(var_22_object, var_25_bool); // 0x81b Func
	var_28_bool = var_25_bool == 0; // 0x81d Not
	if(var_28_bool == 0) goto Label_2080; // 0x81e JumpB
	return 4; // 0x81f Return
	
Label_2080:
	var_29_int = 0; var_30_object = Obj(); // 0x820 PushV
	var_30_object = var_22_object; // 0x821 Mov
	func_4481(var_30_object); // 0x822 NEW_2
	var_26_int = var_29_int; // 0x823 Mov
	var_32_int = 0; // 0x825 PushI
	var_33_bool = var_26_int > var_32_int; // 0x826 GT
	if(var_33_bool == 0) goto Label_2103; // 0x827 JumpB
	var_34_int = 1; // 0x828 PushI
	var_35_bool = var_26_int > var_34_int; // 0x829 GT
	if(var_35_bool == 0) goto Label_2094; // 0x82a JumpB
	func_2049(var_26_int); // 0x82c NEW_2
	
Label_2094:
	var_38_object = Obj(); // 0x82e PushV
	var_38_object = var_22_object; // 0x82f Mov
	func_4490(var_38_object); // 0x830 NEW_2
	var_1_object = 1; // 0x832 TMovB
	var_103_int = 110; // 0x833 PushI
	var_104_float = 5.0; // 0x834 PushF
	SetTimer(var_103_int, var_104_float); // 0x835 Func
	
Label_2103:
	return 4; // 0x837 Return
}


func_4632(var_207_int)
{
	var_207_int = 0; // 0x1219 MovI
	return 0; // 0x121a Return
}


func_2585(var_0_object, var_72_bool)
{
	var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); // 0xa19 PushV
	GetDirection(var_75_cvector); // 0xa1a Func
	var_77_cvector = CVector(0,0,0); var_78_object = Obj(); // 0xa1c PushV
	var_78_object = var_0_object; // 0xa1d MovT
	func_3181(var_78_object); // 0xa1e NEW_2
	var_76_cvector = var_77_cvector; // 0xa1f Mov
	var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); // 0xa21 PushV
	var_84_cvector = var_75_cvector; // 0xa22 Mov
	var_85_cvector = var_76_cvector; // 0xa23 Mov
	func_3619(var_83_float, var_84_cvector, var_85_cvector); // 0xa24 NEW_2
	var_91_float = -0.34202; // 0xa26 PushF
	var_72_bool = var_83_float >= var_91_float; // 0xa27 GE2
	return 4; // 0xa28 Return
}


func_4635()
{
	return 0; // 0x121c Return
}


func_4637(var_26_bool, var_27_object)
{
	var_28_bool = 0; var_29_bool = 0; // 0x121d PushV
	CanSee(var_29_bool, var_27_object); // 0x121e Func
	var_26_bool = var_29_bool; // 0x1220 Mov
	return 2; // 0x1221 Return
}


func_3613(var_504_object)
{
	var_505_object = Obj(); var_506_object = Obj(); // 0xe1d PushV
	CreateObjectVector(var_506_object); // 0xe1e Func
	var_504_object = var_506_object; // 0xe20 Mov
	return 2; // 0xe21 Return
}


func_4128(var_26_bool)
{
	var_27_int = 0; var_28_bool = 0; var_29_int = 0; var_30_bool = 0; // 0x1020 PushV
	var_31_bool = var_26_bool; // 0x1021 Push
	if(var_31_bool == 0) goto Label_4217; // 0x1022 JumpB
	var_32_int = 0; var_33_int = 0; // 0x1023 PushV
	var_32_int = 0; // 0x1024 MovI
	var_34_int = 100; // 0x1025 PushI
	var_35_int = 0; // 0x1026 PushV
	func_3668(var_35_int); // 0x1027 NEW_2
	var_41_int = 100; // 0x1029 PushI
	var_42_float = var_35_int * var_41_int; // 0x102a Mult
	var_33_int = var_34_int + var_42_float; // 0x102b Add2
	func_4056(var_32_int, var_33_int); // 0x102c NEW_2
	var_60_int = 8; // 0x102e PushI
	irand(var_29_int, var_60_int); // 0x102f Func
	var_61_int = 0; // 0x1031 PushI
	var_62_bool = var_29_int == var_61_int; // 0x1032 Eq
	if(var_62_bool == 0) goto Label_4157; // 0x1033 JumpB
	var_63_int = 0; var_64_string = ""; // 0x1034 PushV
	var_64_string = "lemon"; // 0x1035 MovS
	func_4303(var_63_int, var_64_string); // 0x1036 NEW_2
	var_65_int = 0; // 0x1038 PushI
	var_66_int = 1; // 0x1039 PushI
	AddItem(var_30_bool, var_63_int, var_65_int, var_66_int); // 0x103a Func
	goto Label_4216; // 0x103c Jump
	
Label_4216:
	goto Label_4302; // 0x1078 Jump
	
Label_4302:
	return 4; // 0x10ce Return
	
Label_4157:
	var_67_int = 1; // 0x103d PushI
	var_68_bool = var_29_int == var_67_int; // 0x103e Eq
	if(var_68_bool == 0) goto Label_4169; // 0x103f JumpB
	var_69_int = 0; var_70_string = ""; // 0x1040 PushV
	var_70_string = "rusk"; // 0x1041 MovS
	func_4303(var_69_int, var_70_string); // 0x1042 NEW_2
	var_71_int = 0; // 0x1044 PushI
	var_72_int = 1; // 0x1045 PushI
	AddItem(var_30_bool, var_69_int, var_71_int, var_72_int); // 0x1046 Func
	goto Label_4216; // 0x1048 Jump
	
Label_4169:
	var_73_int = 2; // 0x1049 PushI
	var_74_bool = var_29_int == var_73_int; // 0x104a Eq
	if(var_74_bool == 0) goto Label_4181; // 0x104b JumpB
	var_75_int = 0; var_76_string = ""; // 0x104c PushV
	var_76_string = "hook"; // 0x104d MovS
	func_4303(var_75_int, var_76_string); // 0x104e NEW_2
	var_77_int = 0; // 0x1050 PushI
	var_78_int = 1; // 0x1051 PushI
	AddItem(var_30_bool, var_75_int, var_77_int, var_78_int); // 0x1052 Func
	goto Label_4216; // 0x1054 Jump
	
Label_4181:
	var_79_int = 4; // 0x1055 PushI
	var_80_bool = var_29_int == var_79_int; // 0x1056 Eq
	if(var_80_bool == 0) goto Label_4193; // 0x1057 JumpB
	var_81_int = 0; var_82_string = ""; // 0x1058 PushV
	var_82_string = "syringe"; // 0x1059 MovS
	func_4303(var_81_int, var_82_string); // 0x105a NEW_2
	var_83_int = 0; // 0x105c PushI
	var_84_int = 1; // 0x105d PushI
	AddItem(var_30_bool, var_81_int, var_83_int, var_84_int); // 0x105e Func
	goto Label_4216; // 0x1060 Jump
	
Label_4193:
	var_85_int = 5; // 0x1061 PushI
	var_86_bool = var_29_int == var_85_int; // 0x1062 Eq
	if(var_86_bool == 0) goto Label_4205; // 0x1063 JumpB
	var_87_int = 0; var_88_string = ""; // 0x1064 PushV
	var_88_string = "watch"; // 0x1065 MovS
	func_4303(var_87_int, var_88_string); // 0x1066 NEW_2
	var_89_int = 0; // 0x1068 PushI
	var_90_int = 1; // 0x1069 PushI
	AddItem(var_30_bool, var_87_int, var_89_int, var_90_int); // 0x106a Func
	goto Label_4216; // 0x106c Jump
	
Label_4205:
	var_91_int = 6; // 0x106d PushI
	var_92_bool = var_29_int == var_91_int; // 0x106e Eq
	if(var_92_bool == 0) goto Label_4216; // 0x106f JumpB
	var_93_int = 0; var_94_string = ""; // 0x1070 PushV
	var_94_string = "razor"; // 0x1071 MovS
	func_4303(var_93_int, var_94_string); // 0x1072 NEW_2
	var_95_int = 0; // 0x1074 PushI
	var_96_int = 1; // 0x1075 PushI
	AddItem(var_30_bool, var_93_int, var_95_int, var_96_int); // 0x1076 Func
	
Label_4217:
	var_97_int = 0; var_98_int = 0; // 0x1079 PushV
	var_97_int = 0; // 0x107a MovI
	var_99_int = 50; // 0x107b PushI
	var_100_int = 0; // 0x107c PushV
	func_3668(var_100_int); // 0x107d NEW_2
	var_101_int = 50; // 0x107f PushI
	var_102_float = var_100_int * var_101_int; // 0x1080 Mult
	var_98_int = var_99_int + var_102_float; // 0x1081 Add2
	func_4056(var_97_int, var_98_int); // 0x1082 NEW_2
	var_103_int = 7; // 0x1084 PushI
	irand(var_29_int, var_103_int); // 0x1085 Func
	var_104_int = 0; // 0x1087 PushI
	var_105_bool = var_29_int == var_104_int; // 0x1088 Eq
	if(var_105_bool == 0) goto Label_4243; // 0x1089 JumpB
	var_106_int = 0; var_107_string = ""; // 0x108a PushV
	var_107_string = "beads"; // 0x108b MovS
	func_4303(var_106_int, var_107_string); // 0x108c NEW_2
	var_108_int = 0; // 0x108e PushI
	var_109_int = 1; // 0x108f PushI
	AddItem(var_30_bool, var_106_int, var_108_int, var_109_int); // 0x1090 Func
	goto Label_4302; // 0x1092 Jump
	
Label_4243:
	var_110_int = 1; // 0x1093 PushI
	var_111_bool = var_29_int == var_110_int; // 0x1094 Eq
	if(var_111_bool == 0) goto Label_4255; // 0x1095 JumpB
	var_112_int = 0; var_113_string = ""; // 0x1096 PushV
	var_113_string = "bracelet"; // 0x1097 MovS
	func_4303(var_112_int, var_113_string); // 0x1098 NEW_2
	var_114_int = 0; // 0x109a PushI
	var_115_int = 1; // 0x109b PushI
	AddItem(var_30_bool, var_112_int, var_114_int, var_115_int); // 0x109c Func
	goto Label_4302; // 0x109e Jump
	
Label_4255:
	var_116_int = 2; // 0x109f PushI
	var_117_bool = var_29_int == var_116_int; // 0x10a0 Eq
	if(var_117_bool == 0) goto Label_4267; // 0x10a1 JumpB
	var_118_int = 0; var_119_string = ""; // 0x10a2 PushV
	var_119_string = "ear_ring"; // 0x10a3 MovS
	func_4303(var_118_int, var_119_string); // 0x10a4 NEW_2
	var_120_int = 0; // 0x10a6 PushI
	var_121_int = 1; // 0x10a7 PushI
	AddItem(var_30_bool, var_118_int, var_120_int, var_121_int); // 0x10a8 Func
	goto Label_4302; // 0x10aa Jump
	
Label_4267:
	var_122_int = 3; // 0x10ab PushI
	var_123_bool = var_29_int == var_122_int; // 0x10ac Eq
	if(var_123_bool == 0) goto Label_4279; // 0x10ad JumpB
	var_124_int = 0; var_125_string = ""; // 0x10ae PushV
	var_125_string = "gold_ring"; // 0x10af MovS
	func_4303(var_124_int, var_125_string); // 0x10b0 NEW_2
	var_126_int = 0; // 0x10b2 PushI
	var_127_int = 1; // 0x10b3 PushI
	AddItem(var_30_bool, var_124_int, var_126_int, var_127_int); // 0x10b4 Func
	goto Label_4302; // 0x10b6 Jump
	
Label_4279:
	var_128_int = 4; // 0x10b7 PushI
	var_129_bool = var_29_int == var_128_int; // 0x10b8 Eq
	if(var_129_bool == 0) goto Label_4291; // 0x10b9 JumpB
	var_130_int = 0; var_131_string = ""; // 0x10ba PushV
	var_131_string = "silver_ring"; // 0x10bb MovS
	func_4303(var_130_int, var_131_string); // 0x10bc NEW_2
	var_132_int = 0; // 0x10be PushI
	var_133_int = 1; // 0x10bf PushI
	AddItem(var_30_bool, var_130_int, var_132_int, var_133_int); // 0x10c0 Func
	goto Label_4302; // 0x10c2 Jump
	
Label_4291:
	var_134_int = 5; // 0x10c3 PushI
	var_135_bool = var_29_int == var_134_int; // 0x10c4 Eq
	if(var_135_bool == 0) goto Label_4302; // 0x10c5 JumpB
	var_136_int = 0; var_137_string = ""; // 0x10c6 PushV
	var_137_string = "flower"; // 0x10c7 MovS
	func_4303(var_136_int, var_137_string); // 0x10c8 NEW_2
	var_138_int = 0; // 0x10ca PushI
	var_139_int = 1; // 0x10cb PushI
	AddItem(var_30_bool, var_136_int, var_138_int, var_139_int); // 0x10cc Func
}


func_4642(var_38_object)
{
	var_39_object = Obj(); // 0x1223 PushV
	var_39_object = var_38_object; // 0x1224 Mov
	TaskCall(7); // 0x1225 TaskCall
	func_2825(var_40_object, var_41_cvector, var_42_bool, var_39_object); // 0x1226 NEW_2
	TaskReturn(); // 0x1227 TaskReturn
	return 0; // 0x1229 Return
}


func_3619(var_83_float, var_84_cvector, var_85_cvector)
{
	var_86_int = var_84_cvector | var_85_cvector; // 0xe24 Or
	var_87_int = var_84_cvector | var_84_cvector; // 0xe25 Or
	var_88_int = var_85_cvector | var_85_cvector; // 0xe26 Or
	var_89_float = var_87_int * var_88_int; // 0xe27 Mult
	var_90_float = sqrt(var_89_float); // 0xe28 Sqrt
	var_83_float = var_86_int / var_86_int; // 0xe29 Div2
	return 0; // 0xe2a Return
}


func_2601(var_34_cvector, var_35_float)
{
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_float = 0; // 0xa29 PushV
	GetPosition(var_42_cvector); // 0xa2a Func
	GetPosition(var_43_cvector); // 0xa2c TObjFunc
	GetDirection(var_44_cvector); // 0xa2e Func
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0xa30 PushV
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); // 0xa31 PushV
	var_51_cvector = var_42_cvector - var_43_cvector; // 0xa32 Sub2
	func_3603(var_50_cvector, var_51_cvector); // 0xa33 NEW_2
	var_57_float = 0.75; // 0xa35 PushF
	var_58_float = var_44_cvector * var_57_float; // 0xa36 Mult
	var_49_cvector = var_50_cvector + var_58_float; // 0xa37 Add2
	func_3603(var_48_cvector, var_49_cvector); // 0xa38 NEW_2
	var_45_cvector = var_48_cvector; // 0xa39 Mov
	var_59_int = 32; // 0xa3b PushI
	var_60_float = 7000.0; // 0xa3c PushF
	FindLongestDir(var_46_cvector, var_47_float, var_45_cvector, var_35_float, var_59_int, var_60_float); // 0xa3d Func
	var_61_int = 100; // 0xa3f PushI
	var_47_float = var_47_float - var_61_int; // 0xa40 Sub2
	var_62_int = 0; // 0xa41 PushI
	var_63_bool = var_47_float < var_62_int; // 0xa42 LT
	if(var_63_bool == 0) goto Label_2629; // 0xa43 JumpB
	var_47_float = 0; // 0xa44 MovI
	
Label_2629:
	var_34_cvector = var_46_cvector * var_47_float; // 0xa45 Mult2
	return 12; // 0xa46 Return
}


func_4650(var_35_bool, var_36_object)
{
	var_37_bool = 0; var_38_bool = 0; // 0x122a PushV
	CanSee(var_38_bool, var_36_object); // 0x122b Func
	var_35_bool = 1; // 0x122d MovB
	var_39_bool = var_38_bool; // 0x122e Push
	if(var_39_bool == 0) goto Label_4664; // 0x122f JumpB
	var_40_float = 0; var_41_object = Obj(); // 0x1230 PushV
	var_41_object = var_36_object; // 0x1231 Mov
	func_3188(var_41_object); // 0x1232 NEW_2
	var_48_int = 4000000; // 0x1234 PushI
	var_49_bool = var_40_float <= var_48_int; // 0x1235 LE
	if(var_49_bool == 0) goto Label_4664; // 0x1236 JumpB
	var_35_bool = 0; // 0x1237 MovB
	
Label_4664:
	return 2; // 0x1238 Return
}


func_3627(var_73_float, var_74_cvector, var_75_cvector)
{
	var_76_float = GetByIndex(var_74_cvector, 0); // 0xe2c PushE
	var_77_float = GetByIndex(var_75_cvector, 0); // 0xe2d PushE
	var_78_float = var_76_float * var_77_float; // 0xe2e Mult
	var_79_float = GetByIndex(var_74_cvector, 2); // 0xe2f PushE
	var_80_float = GetByIndex(var_75_cvector, 2); // 0xe30 PushE
	var_81_float = var_79_float * var_80_float; // 0xe31 Mult
	var_73_float = var_78_float + var_81_float; // 0xe32 Add2
	return 0; // 0xe33 Return
}


func_3636(var_82_float, var_83_cvector)
{
	var_84_float = GetByIndex(var_83_cvector, 0); // 0xe35 PushE
	var_85_float = GetByIndex(var_83_cvector, 0); // 0xe36 PushE
	var_86_float = var_84_float * var_85_float; // 0xe37 Mult
	var_87_float = GetByIndex(var_83_cvector, 2); // 0xe38 PushE
	var_88_float = GetByIndex(var_83_cvector, 2); // 0xe39 PushE
	var_89_float = var_87_float * var_88_float; // 0xe3a Mult
	var_90_int = var_86_float + var_89_float; // 0xe3b Add
	var_82_float = sqrt(var_90_int); // 0xe3c Sqrt2
	return 0; // 0xe3d Return
}


func_2104(var_0_object, var_39_object)
{
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_bool = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; // 0x838 PushV
	var_0_object = var_39_object; // 0x839 TMov
	func_2155(var_46_bool); // 0x83b NEW_2
	GetDirection(var_44_cvector); // 0x83d Func
	var_54_cvector = CVector(0,0,0); var_55_object = Obj(); // 0x83f PushV
	var_55_object = var_0_object; // 0x840 MovT
	func_3181(var_55_object); // 0x841 NEW_2
	var_45_cvector = var_54_cvector; // 0x842 Mov
	var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); // 0x844 PushV
	var_61_cvector = var_44_cvector; // 0x845 Mov
	var_62_cvector = var_45_cvector; // 0x846 Mov
	func_3646(var_60_float, var_61_cvector, var_62_cvector); // 0x847 NEW_2
	var_84_int = 0; // 0x849 PushI
	var_85_bool = var_60_float < var_84_int; // 0x84a LT
	if(var_85_bool == 0) goto Label_2130; // 0x84b JumpB
	var_86_object = Obj(); // 0x84c PushV
	var_86_object = var_0_object; // 0x84d MovT
	func_3404(); // 0x84e NEW_2
	var_46_bool = 1; // 0x850 MovB
	goto Label_2133; // 0x851 Jump
	
Label_2133:
	var_95_bool = var_46_bool; // 0x855 Push
	if(var_95_bool == 0) goto Label_2149; // 0x856 JumpB
	var_96_object = Obj(); // 0x857 PushV
	var_96_object = var_0_object; // 0x858 MovT
	func_3404(); // 0x859 NEW_2
	var_97_int = 111; // 0x85b PushI
	var_98_float = 0.5; // 0x85c PushF
	SetTimer(var_97_int, var_98_float); // 0x85d Func
	var_99_float = 5.0; // 0x85f PushF
	Sleep(var_99_float); // 0x860 Func
	var_100_int = 111; // 0x862 PushI
	KillTimer(var_100_int); // 0x863 Func
	
Label_2149:
	StopAsync(); // 0x865 Func
	var_101_string = "head"; // 0x867 PushS
	UnlookAsync(var_101_string); // 0x868 Func
	return 6; // 0x86a Return
	
Label_2130:
	var_102_float = 1.5; // 0x852 PushF
	Sleep(var_102_float, var_46_bool); // 0x853 Func
}


func_4665(var_137_object)
{
	var_138_object = Obj(); // 0x123a PushV
	var_138_object = var_137_object; // 0x123b Mov
	TaskCall(8); // 0x123c TaskCall
	func_3019(var_139_object, var_140_cvector, var_141_bool, var_138_object); // 0x123d NEW_2
	TaskReturn(); // 0x123e TaskReturn
	return 0; // 0x1240 Return
}


func_3646(var_70_float, var_71_cvector, var_72_cvector)
{
	var_73_float = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); // 0xe3f PushV
	var_74_cvector = var_71_cvector; // 0xe40 Mov
	var_75_cvector = var_72_cvector; // 0xe41 Mov
	func_3627(var_73_float, var_74_cvector, var_75_cvector); // 0xe42 NEW_2
	var_82_float = 0; var_83_cvector = CVector(0,0,0); // 0xe44 PushV
	var_83_cvector = var_71_cvector; // 0xe45 Mov
	func_3636(var_82_float, var_83_cvector); // 0xe46 NEW_2
	var_91_float = 0; var_92_cvector = CVector(0,0,0); // 0xe48 PushV
	var_92_cvector = var_72_cvector; // 0xe49 Mov
	func_3636(var_91_float, var_92_cvector); // 0xe4a NEW_2
	var_93_float = var_82_float * var_91_float; // 0xe4c Mult
	var_70_float = var_73_float / var_73_float; // 0xe4d Div2
	return 0; // 0xe4e Return
}


func_4673(var_52_bool, var_53_object)
{
	var_54_bool = 0; var_55_object = Obj(); // 0x1242 PushV
	var_55_object = var_53_object; // 0x1243 Mov
	func_4650(var_54_bool, var_55_object); // 0x1244 NEW_2
	var_52_bool = var_54_bool; // 0x1245 Mov
	return 0; // 0x1247 Return
}


func_2631(var_0_object, var_1_object, var_2_object, var_112_object)
{
	var_116_cvector = CVector(0,0,0); var_117_float = 0; var_118_bool = 0; var_119_cvector = CVector(0,0,0); var_120_float = 0; var_121_cvector = CVector(0,0,0); var_122_float = 0; var_123_bool = 0; var_124_cvector = CVector(0,0,0); var_125_float = 0; // 0xa47 PushV
	var_0_object = var_112_object; // 0xa48 TMov
	var_126_cvector = CVector(0,0,0); var_127_float = 0; // 0xa49 PushV
	var_127_float = 1.74533; // 0xa4a MovF
	func_2601(var_126_cvector, var_127_float); // 0xa4b NEW_2
	var_121_cvector = var_126_cvector; // 0xa4c Mov
	var_122_float = var_121_cvector | var_121_cvector; // 0xa4e Or2
	var_156_float = 2500.0; // 0xa4f PushF
	var_157_bool = var_122_float < var_156_float; // 0xa50 LT
	if(var_157_bool == 0) goto Label_2660; // 0xa51 JumpB
	var_158_cvector = CVector(0,0,0); var_159_float = 0; // 0xa52 PushV
	var_159_float = 2.61799; // 0xa53 MovF
	func_2601(var_158_cvector, var_159_float); // 0xa54 NEW_2
	var_121_cvector = var_158_cvector; // 0xa55 Mov
	var_122_float = var_121_cvector | var_121_cvector; // 0xa57 Or2
	var_160_float = 2500.0; // 0xa58 PushF
	var_161_bool = var_122_float < var_160_float; // 0xa59 LT
	if(var_161_bool == 0) goto Label_2660; // 0xa5a JumpB
	var_162_string = "Can't retreat, distance: "; // 0xa5b PushS
	var_163_float = sqrt(var_122_float); // 0xa5c Sqrt
	var_164_int = var_162_string + var_163_float; // 0xa5d Add
	Trace(var_164_int); // 0xa5e Func
	var_165_float = 0.5; // 0xa60 PushF
	Sleep(var_165_float); // 0xa61 Func
	return 10; // 0xa63 Return
	
Label_2660:
	var_166_float = GetByIndex(var_121_cvector, 0); // 0xa64 PushE
	var_167_float = GetByIndex(var_121_cvector, 2); // 0xa65 PushE
	Rotate(var_166_float, var_167_float); // 0xa66 Func
	var_168_cvector = CVector(0,0,0); // 0xa68 PushV
	func_3176(var_168_cvector); // 0xa69 NEW_2
	var_1_object = var_168_cvector + var_121_cvector; // 0xa6b Add2
	var_171_int = 120; // 0xa6c PushI
	var_172_float = 0.5; // 0xa6d PushF
	SetTimer(var_171_int, var_172_float); // 0xa6e Func
	var_2_object = 0; // 0xa70 TMovB
	
Label_2673:
	var_173_int = 1; // 0xa71 PushI
	MovePoint(var_173_int, var_173_int, var_123_bool); // 0xa72 Func
	var_174_bool = var_123_bool; // 0xa74 Push
	if(var_174_bool == 0) goto Label_2701; // 0xa75 JumpB
	var_175_bool = var_0_object == 0; // 0xa76 NullEq
	if(var_175_bool == 0) goto Label_2682; // 0xa77 JumpB
	goto Label_2703; // 0xa78 Jump
	
Label_2703:
	return 10; // 0xa8f Return
	
Label_2682:
	var_176_cvector = CVector(0,0,0); var_177_float = 0; // 0xa7a PushV
	var_177_float = 2.61799; // 0xa7b MovF
	func_2601(var_176_cvector, var_177_float); // 0xa7c NEW_2
	var_124_cvector = var_176_cvector; // 0xa7d Mov
	var_125_float = var_124_cvector | var_124_cvector; // 0xa7f Or2
	var_178_float = 2500.0; // 0xa80 PushF
	var_179_bool = var_125_float >= var_178_float; // 0xa81 GE
	if(var_179_bool == 0) goto Label_2700; // 0xa82 JumpB
	var_180_cvector = CVector(0,0,0); // 0xa83 PushV
	func_3176(var_180_cvector); // 0xa84 NEW_2
	var_1_object = var_180_cvector + var_124_cvector; // 0xa86 Add2
	var_181_int = 120; // 0xa87 PushI
	var_182_float = 0.5; // 0xa88 PushF
	SetTimer(var_181_int, var_182_float); // 0xa89 Func
	goto Label_2701; // 0xa8b Jump
	
Label_2701:
	var_183_bool = var_2_object == 0; // 0xa8d Not
	if(var_183_bool == 0) goto Label_2673; // 0xa8e JumpB
	
Label_2700:
	goto Label_2703; // 0xa8c Jump
}


func_3144(var_2_object)
{
	Stop(); // 0xc48 Func
	var_21_int = 120; // 0xc4a PushI
	KillTimer(var_21_int); // 0xc4b Func
	var_2_object = 1; // 0xc4d TMovB
	return 0; // 0xc4e Return
}


func_4680(var_205_object)
{
	var_206_object = Obj(); // 0x1249 PushV
	var_206_object = var_205_object; // 0x124a Mov
	func_4665(var_206_object); // 0x124b NEW_2
	return 0; // 0x124d Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_117_object, var_118_object)
{
	var_0_object = var_118_object; // 0x4b TMov
	var_1_object = var_117_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_123_int = 1; // 0x4e PushI
	if(var_123_int == 0) goto Label_619; // 0x4f JumpB
	var_124_bool = 0; var_125_object = Obj(); // 0x50 PushV
	var_125_object = var_1_object; // 0x51 MovT
	func_3714(var_125_object); // 0x52 NEW_2
	if(var_124_bool == 0) goto Label_512; // 0x54 JumpB
	var_132_string = ""; // 0x55 PushV
	var_132_string = "Neutral"; // 0x56 MovS
	func_649(var_118_object, var_132_string); // 0x57 NEW_2
	var_149_int = 543180; // 0x59 PushI
	SetMessage(var_149_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_150_bool = 0; // 0x5e PushV
	var_150_bool = 1; // 0x5f MovB
	var_151_bool = 0; // 0x60 PushV
	var_151_bool = 1; // 0x61 MovB
	var_152_bool = 0; // 0x62 PushV
	var_152_bool = 1; // 0x63 MovB
	var_153_bool = 0; var_154_object = Obj(); // 0x64 PushV
	var_154_object = var_1_object; // 0x65 MovT
	func_3726(var_153_bool, var_154_object); // 0x66 NEW_2
	if(var_153_bool == 0) goto Label_111; // 0x68 JumpB
	var_164_bool = 0; var_165_object = Obj(); // 0x69 PushV
	var_165_object = var_1_object; // 0x6a MovT
	func_3746(var_164_bool, var_165_object); // 0x6b NEW_2
	if(var_164_bool == 0) goto Label_111; // 0x6d JumpB
	var_152_bool = 0; // 0x6e MovB
	
Label_111:
	if(var_152_bool == 0) goto Label_118; // 0x6f JumpB
	var_170_bool = 0; var_171_object = Obj(); // 0x70 PushV
	var_171_object = var_1_object; // 0x71 MovT
	func_3756(var_170_bool, var_171_object); // 0x72 NEW_2
	if(var_170_bool == 0) goto Label_118; // 0x74 JumpB
	var_151_bool = 0; // 0x75 MovB
	
Label_118:
	if(var_151_bool == 0) goto Label_125; // 0x76 JumpB
	var_176_bool = 0; var_177_object = Obj(); // 0x77 PushV
	var_177_object = var_1_object; // 0x78 MovT
	func_3766(var_176_bool, var_177_object); // 0x79 NEW_2
	if(var_176_bool == 0) goto Label_125; // 0x7b JumpB
	var_150_bool = 0; // 0x7c MovB
	
Label_125:
	if(var_150_bool == 0) goto Label_131; // 0x7d JumpB
	var_182_int = 543189; // 0x7e PushI
	var_183_int = 45648; // 0x7f PushI
	var_184_int = 45645; // 0x80 PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x81 TObjFunc
	
Label_131:
	var_185_bool = 0; // 0x83 PushV
	var_185_bool = 1; // 0x84 MovB
	var_186_bool = 0; // 0x85 PushV
	var_186_bool = 1; // 0x86 MovB
	var_187_bool = 0; // 0x87 PushV
	var_187_bool = 1; // 0x88 MovB
	var_188_bool = 0; var_189_object = Obj(); // 0x89 PushV
	var_189_object = var_1_object; // 0x8a MovT
	func_3736(var_188_bool, var_189_object); // 0x8b NEW_2
	if(var_188_bool == 0) goto Label_148; // 0x8d JumpB
	var_194_bool = 0; var_195_object = Obj(); // 0x8e PushV
	var_195_object = var_1_object; // 0x8f MovT
	func_3776(var_194_bool, var_195_object); // 0x90 NEW_2
	if(var_194_bool == 0) goto Label_148; // 0x92 JumpB
	var_187_bool = 0; // 0x93 MovB
	
Label_148:
	if(var_187_bool == 0) goto Label_155; // 0x94 JumpB
	var_200_bool = 0; var_201_object = Obj(); // 0x95 PushV
	var_201_object = var_1_object; // 0x96 MovT
	func_3806(var_200_bool, var_201_object); // 0x97 NEW_2
	if(var_200_bool == 0) goto Label_155; // 0x99 JumpB
	var_186_bool = 0; // 0x9a MovB
	
Label_155:
	if(var_186_bool == 0) goto Label_162; // 0x9b JumpB
	var_206_bool = 0; var_207_object = Obj(); // 0x9c PushV
	var_207_object = var_1_object; // 0x9d MovT
	func_3816(var_206_bool, var_207_object); // 0x9e NEW_2
	if(var_206_bool == 0) goto Label_162; // 0xa0 JumpB
	var_185_bool = 0; // 0xa1 MovB
	
Label_162:
	if(var_185_bool == 0) goto Label_168; // 0xa2 JumpB
	var_212_int = 543190; // 0xa3 PushI
	var_213_int = 45655; // 0xa4 PushI
	var_214_int = 45646; // 0xa5 PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0xa6 TObjFunc
	
Label_168:
	var_215_bool = 0; // 0xa8 PushV
	var_215_bool = 1; // 0xa9 MovB
	var_216_bool = 0; // 0xaa PushV
	var_216_bool = 1; // 0xab MovB
	var_217_bool = 0; var_218_object = Obj(); // 0xac PushV
	var_218_object = var_1_object; // 0xad MovT
	func_3786(var_217_bool, var_218_object); // 0xae NEW_2
	if(var_217_bool == 0) goto Label_183; // 0xb0 JumpB
	var_223_bool = 0; var_224_object = Obj(); // 0xb1 PushV
	var_224_object = var_1_object; // 0xb2 MovT
	func_3796(var_223_bool, var_224_object); // 0xb3 NEW_2
	if(var_223_bool == 0) goto Label_183; // 0xb5 JumpB
	var_216_bool = 0; // 0xb6 MovB
	
Label_183:
	if(var_216_bool == 0) goto Label_190; // 0xb7 JumpB
	var_229_bool = 0; var_230_object = Obj(); // 0xb8 PushV
	var_230_object = var_1_object; // 0xb9 MovT
	func_3746(var_229_bool, var_230_object); // 0xba NEW_2
	if(var_229_bool == 0) goto Label_190; // 0xbc JumpB
	var_215_bool = 0; // 0xbd MovB
	
Label_190:
	if(var_215_bool == 0) goto Label_196; // 0xbe JumpB
	var_231_int = 543191; // 0xbf PushI
	var_232_int = 45656; // 0xc0 PushI
	var_233_int = 45647; // 0xc1 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0xc2 TObjFunc
	
Label_196:
	var_234_bool = 0; // 0xc4 PushV
	var_234_bool = 1; // 0xc5 MovB
	var_235_bool = 0; // 0xc6 PushV
	var_235_bool = 1; // 0xc7 MovB
	var_236_bool = 0; var_237_object = Obj(); // 0xc8 PushV
	var_237_object = var_1_object; // 0xc9 MovT
	func_3726(var_236_bool, var_237_object); // 0xca NEW_2
	if(var_236_bool == 0) goto Label_211; // 0xcc JumpB
	var_238_bool = 0; var_239_object = Obj(); // 0xcd PushV
	var_239_object = var_1_object; // 0xce MovT
	func_3736(var_238_bool, var_239_object); // 0xcf NEW_2
	if(var_238_bool == 0) goto Label_211; // 0xd1 JumpB
	var_235_bool = 0; // 0xd2 MovB
	
Label_211:
	if(var_235_bool == 0) goto Label_218; // 0xd3 JumpB
	var_240_bool = 0; var_241_object = Obj(); // 0xd4 PushV
	var_241_object = var_1_object; // 0xd5 MovT
	func_3746(var_240_bool, var_241_object); // 0xd6 NEW_2
	if(var_240_bool == 0) goto Label_218; // 0xd8 JumpB
	var_234_bool = 0; // 0xd9 MovB
	
Label_218:
	if(var_234_bool == 0) goto Label_224; // 0xda JumpB
	var_242_int = 543182; // 0xdb PushI
	var_243_int = -1; // 0xdc PushI
	var_244_int = 45638; // 0xdd PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0xde TObjFunc
	
Label_224:
	var_245_bool = 0; // 0xe0 PushV
	var_245_bool = 1; // 0xe1 MovB
	var_246_bool = 0; // 0xe2 PushV
	var_246_bool = 1; // 0xe3 MovB
	var_247_bool = 0; // 0xe4 PushV
	var_247_bool = 1; // 0xe5 MovB
	var_248_bool = 0; var_249_object = Obj(); // 0xe6 PushV
	var_249_object = var_1_object; // 0xe7 MovT
	func_3726(var_248_bool, var_249_object); // 0xe8 NEW_2
	if(var_248_bool == 0) goto Label_241; // 0xea JumpB
	var_250_bool = 0; var_251_object = Obj(); // 0xeb PushV
	var_251_object = var_1_object; // 0xec MovT
	func_3736(var_250_bool, var_251_object); // 0xed NEW_2
	if(var_250_bool == 0) goto Label_241; // 0xef JumpB
	var_247_bool = 0; // 0xf0 MovB
	
Label_241:
	if(var_247_bool == 0) goto Label_248; // 0xf1 JumpB
	var_252_bool = 0; var_253_object = Obj(); // 0xf2 PushV
	var_253_object = var_1_object; // 0xf3 MovT
	func_3746(var_252_bool, var_253_object); // 0xf4 NEW_2
	if(var_252_bool == 0) goto Label_248; // 0xf6 JumpB
	var_246_bool = 0; // 0xf7 MovB
	
Label_248:
	if(var_246_bool == 0) goto Label_255; // 0xf8 JumpB
	var_254_bool = 0; var_255_object = Obj(); // 0xf9 PushV
	var_255_object = var_1_object; // 0xfa MovT
	func_3756(var_254_bool, var_255_object); // 0xfb NEW_2
	if(var_254_bool == 0) goto Label_255; // 0xfd JumpB
	var_245_bool = 0; // 0xfe MovB
	
Label_255:
	if(var_245_bool == 0) goto Label_261; // 0xff JumpB
	var_256_int = 543183; // 0x100 PushI
	var_257_int = -1; // 0x101 PushI
	var_258_int = 45639; // 0x102 PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x103 TObjFunc
	
Label_261:
	var_259_bool = 0; // 0x105 PushV
	var_259_bool = 1; // 0x106 MovB
	var_260_bool = 0; // 0x107 PushV
	var_260_bool = 1; // 0x108 MovB
	var_261_bool = 0; // 0x109 PushV
	var_261_bool = 1; // 0x10a MovB
	var_262_bool = 0; // 0x10b PushV
	var_262_bool = 1; // 0x10c MovB
	var_263_bool = 0; var_264_object = Obj(); // 0x10d PushV
	var_264_object = var_1_object; // 0x10e MovT
	func_3756(var_263_bool, var_264_object); // 0x10f NEW_2
	if(var_263_bool == 0) goto Label_280; // 0x111 JumpB
	var_265_bool = 0; var_266_object = Obj(); // 0x112 PushV
	var_266_object = var_1_object; // 0x113 MovT
	func_3766(var_265_bool, var_266_object); // 0x114 NEW_2
	if(var_265_bool == 0) goto Label_280; // 0x116 JumpB
	var_262_bool = 0; // 0x117 MovB
	
Label_280:
	if(var_262_bool == 0) goto Label_287; // 0x118 JumpB
	var_267_bool = 0; var_268_object = Obj(); // 0x119 PushV
	var_268_object = var_1_object; // 0x11a MovT
	func_3776(var_267_bool, var_268_object); // 0x11b NEW_2
	if(var_267_bool == 0) goto Label_287; // 0x11d JumpB
	var_261_bool = 0; // 0x11e MovB
	
Label_287:
	if(var_261_bool == 0) goto Label_294; // 0x11f JumpB
	var_269_bool = 0; var_270_object = Obj(); // 0x120 PushV
	var_270_object = var_1_object; // 0x121 MovT
	func_3786(var_269_bool, var_270_object); // 0x122 NEW_2
	if(var_269_bool == 0) goto Label_294; // 0x124 JumpB
	var_260_bool = 0; // 0x125 MovB
	
Label_294:
	if(var_260_bool == 0) goto Label_301; // 0x126 JumpB
	var_271_bool = 0; var_272_object = Obj(); // 0x127 PushV
	var_272_object = var_1_object; // 0x128 MovT
	func_3796(var_271_bool, var_272_object); // 0x129 NEW_2
	if(var_271_bool == 0) goto Label_301; // 0x12b JumpB
	var_259_bool = 0; // 0x12c MovB
	
Label_301:
	if(var_259_bool == 0) goto Label_307; // 0x12d JumpB
	var_273_int = 543187; // 0x12e PushI
	var_274_int = -1; // 0x12f PushI
	var_275_int = 45643; // 0x130 PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0x131 TObjFunc
	
Label_307:
	var_276_bool = 0; // 0x133 PushV
	var_276_bool = 1; // 0x134 MovB
	var_277_bool = 0; // 0x135 PushV
	var_277_bool = 1; // 0x136 MovB
	var_278_bool = 0; // 0x137 PushV
	var_278_bool = 1; // 0x138 MovB
	var_279_bool = 0; var_280_object = Obj(); // 0x139 PushV
	var_280_object = var_1_object; // 0x13a MovT
	func_3806(var_279_bool, var_280_object); // 0x13b NEW_2
	if(var_279_bool == 0) goto Label_324; // 0x13d JumpB
	var_281_bool = 0; var_282_object = Obj(); // 0x13e PushV
	var_282_object = var_1_object; // 0x13f MovT
	func_3816(var_281_bool, var_282_object); // 0x140 NEW_2
	if(var_281_bool == 0) goto Label_324; // 0x142 JumpB
	var_278_bool = 0; // 0x143 MovB
	
Label_324:
	if(var_278_bool == 0) goto Label_331; // 0x144 JumpB
	var_283_bool = 0; var_284_object = Obj(); // 0x145 PushV
	var_284_object = var_1_object; // 0x146 MovT
	func_3826(var_283_bool, var_284_object); // 0x147 NEW_2
	if(var_283_bool == 0) goto Label_331; // 0x149 JumpB
	var_277_bool = 0; // 0x14a MovB
	
Label_331:
	if(var_277_bool == 0) goto Label_338; // 0x14b JumpB
	var_289_bool = 0; var_290_object = Obj(); // 0x14c PushV
	var_290_object = var_1_object; // 0x14d MovT
	func_3836(var_289_bool, var_290_object); // 0x14e NEW_2
	if(var_289_bool == 0) goto Label_338; // 0x150 JumpB
	var_276_bool = 0; // 0x151 MovB
	
Label_338:
	if(var_276_bool == 0) goto Label_344; // 0x152 JumpB
	var_295_int = 543208; // 0x153 PushI
	var_296_int = -1; // 0x154 PushI
	var_297_int = 45664; // 0x155 PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x156 TObjFunc
	
Label_344:
	var_298_bool = 0; // 0x158 PushV
	var_298_bool = 1; // 0x159 MovB
	var_299_bool = 0; // 0x15a PushV
	var_299_bool = 1; // 0x15b MovB
	var_300_bool = 0; var_301_object = Obj(); // 0x15c PushV
	var_301_object = var_1_object; // 0x15d MovT
	func_3726(var_300_bool, var_301_object); // 0x15e NEW_2
	if(var_300_bool == 0) goto Label_359; // 0x160 JumpB
	var_302_bool = 0; var_303_object = Obj(); // 0x161 PushV
	var_303_object = var_1_object; // 0x162 MovT
	func_3736(var_302_bool, var_303_object); // 0x163 NEW_2
	if(var_302_bool == 0) goto Label_359; // 0x165 JumpB
	var_299_bool = 0; // 0x166 MovB
	
Label_359:
	if(var_299_bool == 0) goto Label_366; // 0x167 JumpB
	var_304_bool = 0; var_305_object = Obj(); // 0x168 PushV
	var_305_object = var_1_object; // 0x169 MovT
	func_3746(var_304_bool, var_305_object); // 0x16a NEW_2
	if(var_304_bool == 0) goto Label_366; // 0x16c JumpB
	var_298_bool = 0; // 0x16d MovB
	
Label_366:
	if(var_298_bool == 0) goto Label_372; // 0x16e JumpB
	var_306_int = 543181; // 0x16f PushI
	var_307_int = -1; // 0x170 PushI
	var_308_int = 45637; // 0x171 PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0x172 TObjFunc
	
Label_372:
	var_309_bool = 0; // 0x174 PushV
	var_309_bool = 1; // 0x175 MovB
	var_310_bool = 0; // 0x176 PushV
	var_310_bool = 1; // 0x177 MovB
	var_311_bool = 0; var_312_object = Obj(); // 0x178 PushV
	var_312_object = var_1_object; // 0x179 MovT
	func_3756(var_311_bool, var_312_object); // 0x17a NEW_2
	if(var_311_bool == 0) goto Label_387; // 0x17c JumpB
	var_313_bool = 0; var_314_object = Obj(); // 0x17d PushV
	var_314_object = var_1_object; // 0x17e MovT
	func_3766(var_313_bool, var_314_object); // 0x17f NEW_2
	if(var_313_bool == 0) goto Label_387; // 0x181 JumpB
	var_310_bool = 0; // 0x182 MovB
	
Label_387:
	if(var_310_bool == 0) goto Label_394; // 0x183 JumpB
	var_315_bool = 0; var_316_object = Obj(); // 0x184 PushV
	var_316_object = var_1_object; // 0x185 MovT
	func_3776(var_315_bool, var_316_object); // 0x186 NEW_2
	if(var_315_bool == 0) goto Label_394; // 0x188 JumpB
	var_309_bool = 0; // 0x189 MovB
	
Label_394:
	if(var_309_bool == 0) goto Label_400; // 0x18a JumpB
	var_317_int = 543184; // 0x18b PushI
	var_318_int = -1; // 0x18c PushI
	var_319_int = 45640; // 0x18d PushI
	AddReply(var_317_int, var_318_int, var_319_int); // 0x18e TObjFunc
	
Label_400:
	var_320_bool = 0; // 0x190 PushV
	var_320_bool = 1; // 0x191 MovB
	var_321_bool = 0; // 0x192 PushV
	var_321_bool = 1; // 0x193 MovB
	var_322_bool = 0; // 0x194 PushV
	var_322_bool = 1; // 0x195 MovB
	var_323_bool = 0; var_324_object = Obj(); // 0x196 PushV
	var_324_object = var_1_object; // 0x197 MovT
	func_3746(var_323_bool, var_324_object); // 0x198 NEW_2
	if(var_323_bool == 0) goto Label_417; // 0x19a JumpB
	var_325_bool = 0; var_326_object = Obj(); // 0x19b PushV
	var_326_object = var_1_object; // 0x19c MovT
	func_3776(var_325_bool, var_326_object); // 0x19d NEW_2
	if(var_325_bool == 0) goto Label_417; // 0x19f JumpB
	var_322_bool = 0; // 0x1a0 MovB
	
Label_417:
	if(var_322_bool == 0) goto Label_424; // 0x1a1 JumpB
	var_327_bool = 0; var_328_object = Obj(); // 0x1a2 PushV
	var_328_object = var_1_object; // 0x1a3 MovT
	func_3786(var_327_bool, var_328_object); // 0x1a4 NEW_2
	if(var_327_bool == 0) goto Label_424; // 0x1a6 JumpB
	var_321_bool = 0; // 0x1a7 MovB
	
Label_424:
	if(var_321_bool == 0) goto Label_431; // 0x1a8 JumpB
	var_329_bool = 0; var_330_object = Obj(); // 0x1a9 PushV
	var_330_object = var_1_object; // 0x1aa MovT
	func_3796(var_329_bool, var_330_object); // 0x1ab NEW_2
	if(var_329_bool == 0) goto Label_431; // 0x1ad JumpB
	var_320_bool = 0; // 0x1ae MovB
	
Label_431:
	if(var_320_bool == 0) goto Label_437; // 0x1af JumpB
	var_331_int = 543185; // 0x1b0 PushI
	var_332_int = -1; // 0x1b1 PushI
	var_333_int = 45641; // 0x1b2 PushI
	AddReply(var_331_int, var_332_int, var_333_int); // 0x1b3 TObjFunc
	
Label_437:
	var_334_bool = 0; // 0x1b5 PushV
	var_334_bool = 1; // 0x1b6 MovB
	var_335_bool = 0; // 0x1b7 PushV
	var_335_bool = 1; // 0x1b8 MovB
	var_336_bool = 0; var_337_object = Obj(); // 0x1b9 PushV
	var_337_object = var_1_object; // 0x1ba MovT
	func_3806(var_336_bool, var_337_object); // 0x1bb NEW_2
	if(var_336_bool == 0) goto Label_452; // 0x1bd JumpB
	var_338_bool = 0; var_339_object = Obj(); // 0x1be PushV
	var_339_object = var_1_object; // 0x1bf MovT
	func_3816(var_338_bool, var_339_object); // 0x1c0 NEW_2
	if(var_338_bool == 0) goto Label_452; // 0x1c2 JumpB
	var_335_bool = 0; // 0x1c3 MovB
	
Label_452:
	if(var_335_bool == 0) goto Label_459; // 0x1c4 JumpB
	var_340_bool = 0; var_341_object = Obj(); // 0x1c5 PushV
	var_341_object = var_1_object; // 0x1c6 MovT
	func_3826(var_340_bool, var_341_object); // 0x1c7 NEW_2
	if(var_340_bool == 0) goto Label_459; // 0x1c9 JumpB
	var_334_bool = 0; // 0x1ca MovB
	
Label_459:
	if(var_334_bool == 0) goto Label_465; // 0x1cb JumpB
	var_342_int = 543186; // 0x1cc PushI
	var_343_int = -1; // 0x1cd PushI
	var_344_int = 45642; // 0x1ce PushI
	AddReply(var_342_int, var_343_int, var_344_int); // 0x1cf TObjFunc
	
Label_465:
	var_345_bool = 0; // 0x1d1 PushV
	var_345_bool = 1; // 0x1d2 MovB
	var_346_bool = 0; // 0x1d3 PushV
	var_346_bool = 1; // 0x1d4 MovB
	var_347_bool = 0; // 0x1d5 PushV
	var_347_bool = 1; // 0x1d6 MovB
	var_348_bool = 0; // 0x1d7 PushV
	var_348_bool = 1; // 0x1d8 MovB
	var_349_bool = 0; var_350_object = Obj(); // 0x1d9 PushV
	var_350_object = var_1_object; // 0x1da MovT
	func_3776(var_349_bool, var_350_object); // 0x1db NEW_2
	if(var_349_bool == 0) goto Label_484; // 0x1dd JumpB
	var_351_bool = 0; var_352_object = Obj(); // 0x1de PushV
	var_352_object = var_1_object; // 0x1df MovT
	func_3796(var_351_bool, var_352_object); // 0x1e0 NEW_2
	if(var_351_bool == 0) goto Label_484; // 0x1e2 JumpB
	var_348_bool = 0; // 0x1e3 MovB
	
Label_484:
	if(var_348_bool == 0) goto Label_491; // 0x1e4 JumpB
	var_353_bool = 0; var_354_object = Obj(); // 0x1e5 PushV
	var_354_object = var_1_object; // 0x1e6 MovT
	func_3806(var_353_bool, var_354_object); // 0x1e7 NEW_2
	if(var_353_bool == 0) goto Label_491; // 0x1e9 JumpB
	var_347_bool = 0; // 0x1ea MovB
	
Label_491:
	if(var_347_bool == 0) goto Label_498; // 0x1eb JumpB
	var_355_bool = 0; var_356_object = Obj(); // 0x1ec PushV
	var_356_object = var_1_object; // 0x1ed MovT
	func_3836(var_355_bool, var_356_object); // 0x1ee NEW_2
	if(var_355_bool == 0) goto Label_498; // 0x1f0 JumpB
	var_346_bool = 0; // 0x1f1 MovB
	
Label_498:
	if(var_346_bool == 0) goto Label_505; // 0x1f2 JumpB
	var_357_bool = 0; var_358_object = Obj(); // 0x1f3 PushV
	var_358_object = var_1_object; // 0x1f4 MovT
	func_3816(var_357_bool, var_358_object); // 0x1f5 NEW_2
	if(var_357_bool == 0) goto Label_505; // 0x1f7 JumpB
	var_345_bool = 0; // 0x1f8 MovB
	
Label_505:
	if(var_345_bool == 0) goto Label_511; // 0x1f9 JumpB
	var_359_int = 543188; // 0x1fa PushI
	var_360_int = -1; // 0x1fb PushI
	var_361_int = 45644; // 0x1fc PushI
	AddReply(var_359_int, var_360_int, var_361_int); // 0x1fd TObjFunc
	
Label_511:
	goto Label_619; // 0x1ff Jump
	
Label_619:
	var_362_bool = 0; // 0x26b PushV
	func_4884(var_362_bool); // 0x26c NEW_2
	if(var_362_bool == 0) goto Label_634; // 0x26e JumpB
	
Label_623:
	lshWaitForAnimEnd(); // 0x26f Func
	var_363_string = var_3_string; // 0x271 PushT
	if(var_363_string == 0) goto Label_628; // 0x272 JumpB
	goto Label_633; // 0x273 Jump
	
Label_633:
	goto Label_648; // 0x279 Jump
	
Label_648:
	return 0; // 0x288 Return
	
Label_628:
	var_364_string = ""; // 0x274 PushV
	var_364_string = var_2_object; // 0x275 MovT
	func_3507(var_364_string); // 0x276 NEW_2
	goto Label_623; // 0x278 Jump
	
Label_634:
	var_375_string = "all"; // 0x27a PushS
	var_376_string = "idle"; // 0x27b PushS
	PlayAnimation(var_375_string, var_376_string); // 0x27c Func
	
Label_638:
	WaitForAnimEnd(); // 0x27e Func
	var_377_string = var_3_string; // 0x280 PushT
	if(var_377_string == 0) goto Label_643; // 0x281 JumpB
	goto Label_648; // 0x282 Jump
	
Label_643:
	var_378_string = "all"; // 0x283 PushS
	var_379_string = "idle"; // 0x284 PushS
	PlayAnimation(var_378_string, var_379_string); // 0x285 Func
	goto Label_638; // 0x287 Jump
	
Label_512:
	var_380_string = ""; // 0x200 PushV
	var_380_string = "Neutral"; // 0x201 MovS
	func_649(var_118_object, var_380_string); // 0x202 NEW_2
	var_381_int = 538167; // 0x204 PushI
	SetMessage(var_381_int); // 0x205 TObjFunc
	ClearReplies(); // 0x207 TObjFunc
	var_382_int = 538168; // 0x209 PushI
	var_383_int = -1; // 0x20a PushI
	var_384_int = 40043; // 0x20b PushI
	AddReply(var_382_int, var_383_int, var_384_int); // 0x20c TObjFunc
	var_385_bool = 0; // 0x20e PushV
	var_385_bool = 0; // 0x20f MovB
	var_386_bool = 0; var_387_object = Obj(); // 0x210 PushV
	var_387_object = var_1_object; // 0x211 MovT
	func_3726(var_386_bool, var_387_object); // 0x212 NEW_2
	if(var_386_bool == 0) goto Label_539; // 0x214 JumpB
	var_388_bool = 0; var_389_object = Obj(); // 0x215 PushV
	var_389_object = var_1_object; // 0x216 MovT
	func_3690(var_389_object); // 0x217 NEW_2
	if(var_388_bool == 0) goto Label_539; // 0x219 JumpB
	var_385_bool = 1; // 0x21a MovB
	
Label_539:
	if(var_385_bool == 0) goto Label_545; // 0x21b JumpB
	var_394_int = 538169; // 0x21c PushI
	var_395_int = 40045; // 0x21d PushI
	var_396_int = 40044; // 0x21e PushI
	AddReply(var_394_int, var_395_int, var_396_int); // 0x21f TObjFunc
	
Label_545:
	var_397_bool = 0; // 0x221 PushV
	var_397_bool = 0; // 0x222 MovB
	var_398_bool = 0; // 0x223 PushV
	var_398_bool = 0; // 0x224 MovB
	var_399_bool = 0; var_400_object = Obj(); // 0x225 PushV
	var_400_object = var_1_object; // 0x226 MovT
	func_3726(var_399_bool, var_400_object); // 0x227 NEW_2
	if(var_399_bool == 0) goto Label_560; // 0x229 JumpB
	var_401_bool = 0; var_402_object = Obj(); // 0x22a PushV
	var_402_object = var_1_object; // 0x22b MovT
	func_3846(var_401_bool, var_402_object); // 0x22c NEW_2
	if(var_401_bool == 0) goto Label_560; // 0x22e JumpB
	var_398_bool = 1; // 0x22f MovB
	
Label_560:
	if(var_398_bool == 0) goto Label_567; // 0x230 JumpB
	var_412_bool = 0; var_413_object = Obj(); // 0x231 PushV
	var_413_object = var_1_object; // 0x232 MovT
	func_3690(var_413_object); // 0x233 NEW_2
	if(var_412_bool == 0) goto Label_567; // 0x235 JumpB
	var_397_bool = 1; // 0x236 MovB
	
Label_567:
	if(var_397_bool == 0) goto Label_573; // 0x237 JumpB
	var_414_int = 538179; // 0x238 PushI
	var_415_int = 40055; // 0x239 PushI
	var_416_int = 40054; // 0x23a PushI
	AddReply(var_414_int, var_415_int, var_416_int); // 0x23b TObjFunc
	
Label_573:
	var_417_bool = 0; // 0x23d PushV
	var_417_bool = 0; // 0x23e MovB
	var_418_bool = 0; var_419_object = Obj(); // 0x23f PushV
	var_419_object = var_1_object; // 0x240 MovT
	func_3736(var_418_bool, var_419_object); // 0x241 NEW_2
	if(var_418_bool == 0) goto Label_586; // 0x243 JumpB
	var_420_bool = 0; var_421_object = Obj(); // 0x244 PushV
	var_421_object = var_1_object; // 0x245 MovT
	func_3690(var_421_object); // 0x246 NEW_2
	if(var_420_bool == 0) goto Label_586; // 0x248 JumpB
	var_417_bool = 1; // 0x249 MovB
	
Label_586:
	if(var_417_bool == 0) goto Label_592; // 0x24a JumpB
	var_422_int = 538190; // 0x24b PushI
	var_423_int = 40067; // 0x24c PushI
	var_424_int = 40066; // 0x24d PushI
	AddReply(var_422_int, var_423_int, var_424_int); // 0x24e TObjFunc
	
Label_592:
	var_425_bool = 0; // 0x250 PushV
	var_425_bool = 1; // 0x251 MovB
	var_426_bool = 0; var_427_object = Obj(); // 0x252 PushV
	var_427_object = var_1_object; // 0x253 MovT
	func_3690(var_427_object); // 0x254 NEW_2
	if(var_426_bool == 0) goto Label_605; // 0x256 JumpB
	var_428_bool = 0; var_429_object = Obj(); // 0x257 PushV
	var_429_object = var_1_object; // 0x258 MovT
	func_3702(var_429_object); // 0x259 NEW_2
	if(var_428_bool == 0) goto Label_605; // 0x25b JumpB
	var_425_bool = 0; // 0x25c MovB
	
Label_605:
	if(var_425_bool == 0) goto Label_611; // 0x25d JumpB
	var_434_int = 538204; // 0x25e PushI
	var_435_int = -1; // 0x25f PushI
	var_436_int = 40081; // 0x260 PushI
	AddReply(var_434_int, var_435_int, var_436_int); // 0x261 TObjFunc
	
Label_611:
	var_437_int = 538205; // 0x263 PushI
	var_438_int = -1; // 0x264 PushI
	var_439_int = 40082; // 0x265 PushI
	AddReply(var_437_int, var_438_int, var_439_int); // 0x266 TObjFunc
	goto Label_619; // 0x268 Jump
}


func_4686(var_28_bool)
{
	var_28_bool = 0; // 0x124f MovB
	return 0; // 0x1250 Return
}


func_3663(var_126_int, var_127_string)
{
	var_128_int = 0; var_129_int = 0; // 0xe4f PushV
	GetVariable(var_127_string, var_129_int); // 0xe50 Func
	var_126_int = var_129_int; // 0xe52 Mov
	return 2; // 0xe53 Return
}


func_4689()
{
	return 0; // 0x1252 Return
}


func_4691()
{
	var_452_object = Obj(); var_453_object = Obj(); var_454_object = Obj(); var_455_object = Obj(); var_456_int = 0; var_457_int = 0; var_458_int = 0; var_459_int = 0; var_460_object = Obj(); var_461_int = 0; var_462_bool = 0; var_463_int = 0; var_464_float = 0; var_465_int = 0; var_466_object = Obj(); var_467_int = 0; var_468_int = 0; var_469_int = 0; var_470_int = 0; var_471_int = 0; var_472_int = 0; var_473_int = 0; var_474_int = 0; var_475_int = 0; var_476_int = 0; var_477_object = Obj(); var_478_object = Obj(); var_479_object = Obj(); var_480_object = Obj(); var_481_object = Obj(); var_482_int = 0; var_483_int = 0; var_484_int = 0; var_485_int = 0; var_486_object = Obj(); var_487_int = 0; var_488_bool = 0; var_489_int = 0; var_490_float = 0; var_491_int = 0; var_492_object = Obj(); var_493_int = 0; var_494_int = 0; var_495_int = 0; var_496_int = 0; var_497_int = 0; var_498_int = 0; var_499_int = 0; var_500_int = 0; var_501_int = 0; var_502_int = 0; var_503_object = Obj(); // 0x1253 PushV
	var_504_object = Obj(); // 0x1254 PushV
	func_3613(var_504_object); // 0x1255 NEW_2
	var_478_object = var_504_object; // 0x1256 Mov
	CreateIntVector(var_479_object); // 0x1258 Func
	CreateIntVector(var_480_object); // 0x125a Func
	CreateIntVector(var_481_object); // 0x125c Func
	GetSubContainerCount(var_482_int); // 0x125e ObjFunc
	var_483_int = 0; // 0x1260 MovI
	
Label_4705:
	var_507_bool = var_483_int < var_482_int; // 0x1261 LT
	if(var_507_bool == 0) goto Label_4777; // 0x1262 JumpB
	GetItemCount(var_484_int, var_483_int); // 0x1263 ObjFunc
	var_485_int = 0; // 0x1265 MovI
	
Label_4710:
	var_508_bool = var_485_int < var_484_int; // 0x1266 LT
	if(var_508_bool == 0) goto Label_4774; // 0x1267 JumpB
	GetItem(var_486_object, var_485_int, var_483_int); // 0x1268 ObjFunc
	GetItemID(var_487_int); // 0x126a ObjFunc
	var_509_string = "HasDurability"; // 0x126c PushS
	HasInvItemProperty(var_488_bool, var_487_int, var_509_string); // 0x126d Func
	var_510_bool = var_488_bool; // 0x126f Push
	if(var_510_bool == 0) goto Label_4770; // 0x1270 JumpB
	var_511_string = "durability"; // 0x1271 PushS
	HasProperty(var_488_bool, var_511_string); // 0x1272 ObjFunc
	var_512_bool = var_488_bool; // 0x1274 Push
	if(var_512_bool == 0) goto Label_4770; // 0x1275 JumpB
	var_513_string = "durability"; // 0x1276 PushS
	GetProperty(var_489_int, var_513_string); // 0x1277 ObjFunc
	var_514_bool = 0; // 0x1279 PushV
	var_514_bool = 0; // 0x127a MovB
	var_515_int = 100; // 0x127b PushI
	var_516_bool = var_489_int < var_515_int; // 0x127c LT
	if(var_516_bool == 0) goto Label_4740; // 0x127d JumpB
	var_517_bool = 0; var_518_object = Obj(); // 0x127e PushV
	var_518_object = var_486_object; // 0x127f Mov
	func_4838(var_518_object); // 0x1280 NEW_2
	if(var_517_bool == 0) goto Label_4740; // 0x1282 JumpB
	var_514_bool = 1; // 0x1283 MovB
	
Label_4740:
	if(var_514_bool == 0) goto Label_4770; // 0x1284 JumpB
	add(var_486_object); // 0x1285 ObjFunc
	add(var_483_int); // 0x1287 ObjFunc
	add(var_485_int); // 0x1289 ObjFunc
	var_529_int = 0; var_530_object = Obj(); var_531_int = 0; // 0x128b PushV
	var_530_object = var_486_object; // 0x128c Mov
	var_531_int = 0; // 0x128d MovI
	func_3979(var_529_int, var_530_object, var_531_int); // 0x128e NEW_2
	var_490_float = var_529_int; // 0x128f Mov
	var_571_float = 1.0; // 0x1291 PushF
	var_572_float = 2.0; // 0x1292 PushF
	var_573_float = var_572_float * var_489_int; // 0x1293 Mult
	var_574_float = 100.0; // 0x1294 PushF
	var_575_float = var_573_float / var_574_float; // 0x1295 Div
	var_576_int = var_571_float + var_575_float; // 0x1296 Add
	var_577_float = var_490_float * var_576_int; // 0x1297 Mult
	var_578_int = 100; // 0x1298 PushI
	var_579_int = var_578_int - var_489_int; // 0x1299 Sub
	var_580_float = var_577_float * var_579_int; // 0x129a Mult
	var_581_int = 300; // 0x129b PushI
	var_491_int = var_580_float / var_580_float; // 0x129c Div2
	var_582_bool = var_491_int == 0; // 0x129d Not
	if(var_582_bool == 0) goto Label_4768; // 0x129e JumpB
	var_491_int = 1; // 0x129f MovI
	
Label_4768:
	add(var_491_int); // 0x12a0 ObjFunc
	
Label_4770:
	var_486_object = 0; // 0x12a2 SetNull
	var_583_int = 1; // 0x12a3 PushI
	var_485_int = var_485_int + var_583_int; // 0x12a4 Add2
	goto Label_4710; // 0x12a5 Jump
	
Label_4774:
	var_584_int = 1; // 0x12a6 PushI
	var_483_int = var_483_int + var_584_int; // 0x12a7 Add2
	goto Label_4705; // 0x12a8 Jump
	
Label_4777:
	CreateIntVector(var_492_object); // 0x12a9 Func
	var_585_string = "repair.xml"; // 0x12ab PushS
	ChooseItem(var_478_object, var_492_object, var_481_object, var_585_string); // 0x12ac Func
	size(var_493_int); // 0x12ae ObjFunc
	var_586_bool = var_493_int == 0; // 0x12b0 Not
	if(var_586_bool == 0) goto Label_4787; // 0x12b1 JumpB
	return 52; // 0x12b2 Return
	
Label_4787:
	var_494_int = 0; // 0x12b3 MovI
	var_495_int = 0; // 0x12b4 MovI
	
Label_4789:
	var_587_bool = var_495_int < var_493_int; // 0x12b5 LT
	if(var_587_bool == 0) goto Label_4799; // 0x12b6 JumpB
	get(var_496_int, var_495_int); // 0x12b7 ObjFunc
	get(var_497_int, var_496_int); // 0x12b9 ObjFunc
	var_494_int = var_494_int + var_497_int; // 0x12bb Add2
	var_588_int = 1; // 0x12bc PushI
	var_495_int = var_495_int + var_588_int; // 0x12bd Add2
	goto Label_4789; // 0x12be Jump
	
Label_4799:
	var_589_string = "money"; // 0x12bf PushS
	GetProperty(var_589_string, var_498_int); // 0x12c0 ObjFunc
	var_498_int = var_498_int - var_494_int; // 0x12c2 Sub2
	var_590_int = 0; // 0x12c3 PushI
	var_591_bool = var_498_int < var_590_int; // 0x12c4 LT
	if(var_591_bool == 0) goto Label_4807; // 0x12c5 JumpB
	return 52; // 0x12c6 Return
	
Label_4807:
	var_592_string = "money"; // 0x12c7 PushS
	SetProperty(var_592_string, var_498_int); // 0x12c8 ObjFunc
	var_499_int = 0; // 0x12ca MovI
	
Label_4811:
	var_593_bool = var_499_int < var_493_int; // 0x12cb LT
	if(var_593_bool == 0) goto Label_4832; // 0x12cc JumpB
	get(var_500_int, var_499_int); // 0x12cd ObjFunc
	get(var_501_int, var_500_int); // 0x12cf ObjFunc
	get(var_502_int, var_500_int); // 0x12d1 ObjFunc
	GetItem(var_503_object, var_502_int, var_501_int); // 0x12d3 ObjFunc
	var_594_string = "durability"; // 0x12d5 PushS
	var_595_int = 100; // 0x12d6 PushI
	SetProperty(var_594_string, var_595_int); // 0x12d7 ObjFunc
	var_596_int = 1; // 0x12d9 PushI
	SetItem(var_503_object, var_596_int, var_502_int, var_501_int); // 0x12da ObjFunc
	var_503_object = 0; // 0x12dc SetNull
	var_597_int = 1; // 0x12dd PushI
	var_499_int = var_499_int + var_597_int; // 0x12de Add2
	goto Label_4811; // 0x12df Jump
	
Label_4832:
	return 52; // 0x12e0 Return
}


func_3668(var_35_int)
{
	var_36_float = 0; var_37_float = 0; // 0xe54 PushV
	GetGameTime(var_37_float); // 0xe55 Func
	var_38_int = 1; // 0xe57 PushI
	var_39_int = 0; // 0xe58 PushV
	var_40_int = 24; // 0xe59 PushI
	var_39_int = var_37_float / var_37_float; // 0xe5a Div2
	var_35_int = var_38_int + var_39_int; // 0xe5b Add2
	return 2; // 0xe5c Return
}


func_3160(var_0_object, var_72_bool)
{
	var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); // 0xc58 PushV
	GetDirection(var_75_cvector); // 0xc59 Func
	var_77_cvector = CVector(0,0,0); var_78_object = Obj(); // 0xc5b PushV
	var_78_object = var_0_object; // 0xc5c MovT
	func_3181(var_78_object); // 0xc5d NEW_2
	var_76_cvector = var_77_cvector; // 0xc5e Mov
	var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); // 0xc60 PushV
	var_84_cvector = var_75_cvector; // 0xc61 Mov
	var_85_cvector = var_76_cvector; // 0xc62 Mov
	func_3619(var_83_float, var_84_cvector, var_85_cvector); // 0xc63 NEW_2
	var_91_float = -0.34202; // 0xc65 PushF
	var_72_bool = var_83_float >= var_91_float; // 0xc66 GE2
	return 4; // 0xc67 Return
}


func_3677(var_405_int)
{
	var_406_float = 0; var_407_float = 0; // 0xe5d PushV
	GetGameTime(var_407_float); // 0xe5e Func
	var_408_int = 0; // 0xe60 PushV
	var_408_int = var_407_float; // 0xe61 Mov
	var_409_int = 24; // 0xe62 PushI
	var_405_int = var_408_int % var_409_int; // 0xe63 Mod2
	return 2; // 0xe64 Return
}


func_3685()
{
	var_28_int = 100; // 0xe66 PushI
	SetReturnValue(var_28_int); // 0xe67 ObjFunc
	return 0; // 0xe69 Return
}


func_3176(var_92_cvector)
{
	var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); // 0xc68 PushV
	GetPosition(var_94_cvector); // 0xc69 Func
	var_92_cvector = var_94_cvector; // 0xc6b Mov
	return 2; // 0xc6c Return
}


func_3690(var_388_bool)
{
	var_390_int = 0; var_391_string = ""; // 0xe6b PushV
	var_391_string = "branch"; // 0xe6c MovS
	func_3663(var_390_int, var_391_string); // 0xe6d NEW_2
	var_392_int = 0; // 0xe6f PushI
	var_393_bool = var_390_int == var_392_int; // 0xe70 Eq
	if(var_393_bool == 0) goto Label_3700; // 0xe71 JumpB
	var_388_bool = 1; // 0xe72 MovB
	return 0; // 0xe73 Return
	
Label_3700:
	var_388_bool = 0; // 0xe74 MovB
	return 0; // 0xe75 Return
}


func_2155(var_0_object)
{
	var_47_object = Obj(); // 0x86b PushV
	var_47_object = var_0_object; // 0x86c MovT
	func_3538(var_47_object); // 0x86d NEW_2
	return 0; // 0x86f Return
}


func_3181(var_54_cvector)
{
	var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); // 0xc6d PushV
	GetPosition(var_58_cvector); // 0xc6e Func
	GetPosition(var_59_cvector); // 0xc70 ObjFunc
	var_54_cvector = var_59_cvector - var_58_cvector; // 0xc72 Sub2
	return 4; // 0xc73 Return
}


func_3188(var_40_float)
{
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); // 0xc74 PushV
	GetPosition(var_45_cvector); // 0xc75 Func
	GetPosition(var_46_cvector); // 0xc77 ObjFunc
	var_47_cvector = var_46_cvector - var_45_cvector; // 0xc79 Sub2
	var_40_float = var_47_cvector | var_47_cvector; // 0xc7a Or2
	return 6; // 0xc7b Return
}


func_3702(var_428_bool)
{
	var_430_int = 0; var_431_string = ""; // 0xe77 PushV
	var_431_string = "branch"; // 0xe78 MovS
	func_3663(var_430_int, var_431_string); // 0xe79 NEW_2
	var_432_int = 1; // 0xe7b PushI
	var_433_bool = var_430_int == var_432_int; // 0xe7c Eq
	if(var_433_bool == 0) goto Label_3712; // 0xe7d JumpB
	var_428_bool = 1; // 0xe7e MovB
	return 0; // 0xe7f Return
	
Label_3712:
	var_428_bool = 0; // 0xe80 MovB
	return 0; // 0xe81 Return
}


func_1657(var_22_object)
{
	EventDisable(0); // 0x67a EventDisable
	var_23_object = Obj(); // 0x67b PushV
	var_23_object = var_22_object; // 0x67c Mov
	func_1690(var_23_object); // 0x67d NEW_2
	var_103_object = Obj(); // 0x67f PushV
	var_103_object = var_22_object; // 0x680 Mov
	func_4960(var_103_object); // 0x681 NEW_2
	EventEnable(0); // 0x683 EventEnable
	
Label_1668:
	Hold(); // 0x684 Func
	goto Label_1668; // 0x686 Jump
}


func_3196(var_104_bool, var_105_object)
{
	var_106_bool = 0; var_107_bool = 0; // 0xc7c PushV
	IsPlayerActor(var_105_object, var_107_bool); // 0xc7d Func
	var_104_bool = var_107_bool; // 0xc7f Mov
	return 2; // 0xc80 Return
}


func_3201(var_49_bool, var_50_object, var_51_string)
{
	var_52_bool = 0; var_53_bool = 0; // 0xc81 PushV
	var_54_string = "HasProperty"; // 0xc82 PushS
	var_55_int = 2; // 0xc83 PushI
	var_56_bool = IsFuncExist(var_50_object, var_54_string, var_55_int); // 0xc84 FuncExist
	var_57_bool = var_56_bool == 0; // 0xc85 Not
	if(var_57_bool == 0) goto Label_3209; // 0xc86 JumpB
	var_49_bool = 0; // 0xc87 MovB
	return 2; // 0xc88 Return
	
Label_3209:
	HasProperty(var_51_string, var_53_bool); // 0xc89 ObjFunc
	var_49_bool = var_53_bool; // 0xc8b Mov
	return 2; // 0xc8c Return
}


func_3714(var_124_bool)
{
	var_126_int = 0; var_127_string = ""; // 0xe83 PushV
	var_127_string = "branch"; // 0xe84 MovS
	func_3663(var_126_int, var_127_string); // 0xe85 NEW_2
	var_130_int = 2; // 0xe87 PushI
	var_131_bool = var_126_int == var_130_int; // 0xe88 Eq
	if(var_131_bool == 0) goto Label_3724; // 0xe89 JumpB
	var_124_bool = 1; // 0xe8a MovB
	return 0; // 0xe8b Return
	
Label_3724:
	var_124_bool = 0; // 0xe8c MovB
	return 0; // 0xe8d Return
}


func_649(var_2_object, var_132_string)
{
	var_133_bool = 0; // 0x28a PushV
	func_4884(var_133_bool); // 0x28b NEW_2
	var_134_bool = var_133_bool == 0; // 0x28d Not
	if(var_134_bool == 0) goto Label_656; // 0x28e JumpB
	return 0; // 0x28f Return
	
Label_656:
	var_135_bool = var_132_string == var_2_object; // 0x290 Eq
	if(var_135_bool == 0) goto Label_659; // 0x291 JumpB
	return 0; // 0x292 Return
	
Label_659:
	var_136_string = ""; var_137_bool = 0; // 0x293 PushV
	var_136_string = var_132_string; // 0x294 Mov
	var_138_string = ""; // 0x295 PushS
	var_139_bool = var_132_string == var_138_string; // 0x296 Eq
	if(var_139_bool == 0) goto Label_666; // 0x297 JumpB
	var_137_bool = 0; // 0x298 MovB
	goto Label_667; // 0x299 Jump
	
Label_667:
	func_3523(var_136_string, var_137_bool); // 0x29b NEW_2
	var_2_object = var_132_string; // 0x29d TMov
	return 0; // 0x29e Return
	
Label_666:
	var_137_bool = 1; // 0x29a MovB
}


func_3213(var_42_bool)
{
	var_44_bool = 0; var_45_bool = 0; // 0xc8d PushV
	IsDead(var_45_bool); // 0xc8e ObjFunc
	var_42_bool = var_45_bool; // 0xc90 Mov
	return 2; // 0xc91 Return
}


func_3726(var_153_bool, var_154_object)
{
	var_155_bool = 0; var_156_object = Obj(); // 0xe8f PushV
	var_156_object = var_154_object; // 0xe90 Mov
	func_3856(var_156_object); // 0xe91 NEW_2
	if(var_155_bool == 0) goto Label_3734; // 0xe93 JumpB
	var_153_bool = 1; // 0xe94 MovB
	return 0; // 0xe95 Return
	
Label_3734:
	var_153_bool = 0; // 0xe96 MovB
	return 0; // 0xe97 Return
}


func_3218(var_31_bool, var_32_object)
{
	var_33_object = Obj(); var_34_object = Obj(); var_35_object = Obj(); var_36_object = Obj(); // 0xc92 PushV
	var_37_bool = var_32_object == 0; // 0xc93 NullEq
	if(var_37_bool == 0) goto Label_3223; // 0xc94 JumpB
	var_31_bool = 0; // 0xc95 MovB
	return 4; // 0xc96 Return
	
Label_3223:
	var_38_bool = 0; // 0xc97 PushV
	var_38_bool = 0; // 0xc98 MovB
	var_39_string = "IsDead"; // 0xc99 PushS
	var_40_int = 1; // 0xc9a PushI
	var_41_bool = IsFuncExist(var_32_object, var_39_string, var_40_int); // 0xc9b FuncExist
	if(var_41_bool == 0) goto Label_3235; // 0xc9c JumpB
	var_42_bool = 0; var_43_object = Obj(); // 0xc9d PushV
	var_43_object = var_32_object; // 0xc9e Mov
	func_3213(var_43_object); // 0xc9f NEW_2
	if(var_42_bool == 0) goto Label_3235; // 0xca1 JumpB
	var_38_bool = 1; // 0xca2 MovB
	
Label_3235:
	if(var_38_bool == 0) goto Label_3238; // 0xca3 JumpB
	var_31_bool = 0; // 0xca4 MovB
	return 4; // 0xca5 Return
	
Label_3238:
	GetScene(var_35_object); // 0xca6 Func
	var_46_bool = var_35_object == 0; // 0xca8 NullEq
	if(var_46_bool == 0) goto Label_3244; // 0xca9 JumpB
	var_31_bool = 0; // 0xcaa MovB
	return 4; // 0xcab Return
	
Label_3244:
	GetScene(var_36_object); // 0xcac ObjFunc
	var_47_bool = var_35_object != var_36_object; // 0xcae Neq
	if(var_47_bool == 0) goto Label_3250; // 0xcaf JumpB
	var_31_bool = 0; // 0xcb0 MovB
	return 4; // 0xcb1 Return
	
Label_3250:
	var_31_bool = 1; // 0xcb2 MovB
	return 4; // 0xcb3 Return
}


func_3736(var_188_bool, var_189_object)
{
	var_190_bool = 0; var_191_object = Obj(); // 0xe99 PushV
	var_191_object = var_189_object; // 0xe9a Mov
	func_3863(var_191_object); // 0xe9b NEW_2
	if(var_190_bool == 0) goto Label_3744; // 0xe9d JumpB
	var_188_bool = 1; // 0xe9e MovB
	return 0; // 0xe9f Return
	
Label_3744:
	var_188_bool = 0; // 0xea0 MovB
	return 0; // 0xea1 Return
}


func_1690(var_23_object)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_string = ""; var_29_object = Obj(); var_30_bool = 0; var_31_bool = 0; var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_string = ""; var_39_object = Obj(); var_40_bool = 0; var_41_bool = 0; var_42_float = 0; var_43_cvector = CVector(0,0,0); // 0x69a PushV
	var_44_bool = var_23_object == 0; // 0x69b NullEq
	if(var_44_bool == 0) goto Label_1698; // 0x69c JumpB
	var_45_string = ""; // 0x69d PushV
	var_45_string = "fdie"; // 0x69e MovS
	func_1781(var_45_string); // 0x69f NEW_2
	goto Label_1780; // 0x6a1 Jump
	
Label_1780:
	return 20; // 0x6f4 Return
	
Label_1698:
	GetPosition(var_34_cvector); // 0x6a2 ObjFunc
	GetPosition(var_35_cvector); // 0x6a4 Func
	GetDirection(var_36_cvector); // 0x6a6 Func
	var_37_cvector = var_35_cvector - var_34_cvector; // 0x6a8 Sub2
	var_77_float = GetByIndex(var_37_cvector, 0); // 0x6a9 PushE
	var_78_float = GetByIndex(var_36_cvector, 0); // 0x6aa PushE
	var_79_float = var_77_float * var_78_float; // 0x6ab Mult
	var_80_float = GetByIndex(var_37_cvector, 2); // 0x6ac PushE
	var_81_float = GetByIndex(var_36_cvector, 2); // 0x6ad PushE
	var_82_float = var_80_float * var_81_float; // 0x6ae Mult
	var_83_int = var_79_float + var_82_float; // 0x6af Add
	var_84_int = 0; // 0x6b0 PushI
	var_85_bool = var_83_int >= var_84_int; // 0x6b1 GE
	if(var_85_bool == 0) goto Label_1717; // 0x6b2 JumpB
	var_38_string = "fdie"; // 0x6b3 MovS
	goto Label_1718; // 0x6b4 Jump
	
Label_1718:
	RemoveRTEnvelope(); // 0x6b6 Func
	SetDeathState(); // 0x6b8 Func
	Stop(); // 0x6ba Func
	StopAsync(); // 0x6bc Func
	var_39_object = var_23_object; // 0x6be Mov
	var_86_string = "GetScriptProperty"; // 0x6bf PushS
	var_87_int = 2; // 0x6c0 PushI
	var_88_bool = IsFuncExist(var_23_object, var_86_string, var_87_int); // 0x6c1 FuncExist
	if(var_88_bool == 0) goto Label_1742; // 0x6c2 JumpB
	var_89_string = "Owner"; // 0x6c3 PushS
	HasScriptProperty(var_40_bool, var_89_string); // 0x6c4 ObjFunc
	var_90_bool = var_40_bool; // 0x6c6 Push
	if(var_90_bool == 0) goto Label_1742; // 0x6c7 JumpB
	var_91_string = "Owner"; // 0x6c8 PushS
	GetScriptProperty(var_39_object, var_91_string); // 0x6c9 ObjFunc
	var_92_bool = var_39_object == 0; // 0x6cb NullEq
	if(var_92_bool == 0) goto Label_1742; // 0x6cc JumpB
	var_39_object = var_23_object; // 0x6cd Mov
	
Label_1742:
	var_93_string = "@GetEyesHeight"; // 0x6ce PushS
	var_94_int = 1; // 0x6cf PushI
	var_95_bool = IsFuncExist(var_39_object, var_93_string, var_94_int); // 0x6d0 FuncExist
	if(var_95_bool == 0) goto Label_1757; // 0x6d1 JumpB
	GetEyesHeight(var_42_float); // 0x6d2 ObjFunc
	var_43_cvector = CVector(0.0, 0.0, 0.0); // 0x6d4 MovV
	var_96_float = GetByIndex(var_43_cvector, 1); // 0x6d5 PushE
	var_96_float = var_42_float; // 0x6d6 Mov
	SetByIndex(var_43_cvector, 1) = var_96_float; // 0x6d7 PopE
	var_97_string = "head"; // 0x6d8 PushS
	LookAsync(var_23_object, var_97_string, var_43_cvector); // 0x6d9 Func
	var_41_bool = 1; // 0x6db MovB
	goto Label_1758; // 0x6dc Jump
	
Label_1758:
	var_98_string = ""; // 0x6de PushV
	var_98_string = var_38_string; // 0x6df Mov
	func_3556(var_98_string); // 0x6e0 NEW_2
	var_99_string = "all"; // 0x6e2 PushS
	PlayAnimation(var_99_string, var_38_string); // 0x6e3 Func
	WaitForAnimEnd(); // 0x6e5 Func
	var_100_bool = var_41_bool; // 0x6e7 Push
	if(var_100_bool == 0) goto Label_1774; // 0x6e8 JumpB
	StopAsync(); // 0x6e9 Func
	var_101_string = "head"; // 0x6eb PushS
	UnlookAsync(var_101_string); // 0x6ec Func
	
Label_1774:
	var_102_string = "all"; // 0x6ee PushS
	LockAnimationEnd(var_102_string, var_38_string); // 0x6ef Func
	RemoveEnvelope(); // 0x6f1 Func
	var_39_object = 0; // 0x6f3 SetNull
	
Label_1757:
	var_41_bool = 0; // 0x6dd MovB
	
Label_1717:
	var_38_string = "bdie"; // 0x6b5 MovS
}


func_3746(var_164_bool, var_165_object)
{
	var_166_bool = 0; var_167_object = Obj(); // 0xea3 PushV
	var_167_object = var_165_object; // 0xea4 Mov
	func_3870(var_167_object); // 0xea5 NEW_2
	if(var_166_bool == 0) goto Label_3754; // 0xea7 JumpB
	var_164_bool = 1; // 0xea8 MovB
	return 0; // 0xea9 Return
	
Label_3754:
	var_164_bool = 0; // 0xeaa MovB
	return 0; // 0xeab Return
}


func_3756(var_170_bool, var_171_object)
{
	var_172_bool = 0; var_173_object = Obj(); // 0xead PushV
	var_173_object = var_171_object; // 0xeae Mov
	func_3877(var_173_object); // 0xeaf NEW_2
	if(var_172_bool == 0) goto Label_3764; // 0xeb1 JumpB
	var_170_bool = 1; // 0xeb2 MovB
	return 0; // 0xeb3 Return
	
Label_3764:
	var_170_bool = 0; // 0xeb4 MovB
	return 0; // 0xeb5 Return
}


func_3766(var_176_bool, var_177_object)
{
	var_178_bool = 0; var_179_object = Obj(); // 0xeb7 PushV
	var_179_object = var_177_object; // 0xeb8 Mov
	func_3884(var_179_object); // 0xeb9 NEW_2
	if(var_178_bool == 0) goto Label_3774; // 0xebb JumpB
	var_176_bool = 1; // 0xebc MovB
	return 0; // 0xebd Return
	
Label_3774:
	var_176_bool = 0; // 0xebe MovB
	return 0; // 0xebf Return
}


func_3254(var_27_bool, var_28_object)
{
	var_29_int = 0; var_30_int = 0; // 0xcb6 PushV
	var_31_bool = 0; var_32_object = Obj(); // 0xcb7 PushV
	var_32_object = var_28_object; // 0xcb8 Mov
	func_3218(var_31_bool, var_32_object); // 0xcb9 NEW_2
	var_48_bool = var_31_bool == 0; // 0xcbb Not
	if(var_48_bool == 0) goto Label_3263; // 0xcbc JumpB
	var_27_bool = 0; // 0xcbd MovB
	return 2; // 0xcbe Return
	
Label_3263:
	var_49_bool = 0; var_50_object = Obj(); var_51_string = ""; // 0xcbf PushV
	var_50_object = var_28_object; // 0xcc0 Mov
	var_51_string = "noaccess"; // 0xcc1 MovS
	func_3201(var_49_bool, var_50_object, var_51_string); // 0xcc2 NEW_2
	var_58_bool = var_49_bool == 0; // 0xcc4 Not
	if(var_58_bool == 0) goto Label_3272; // 0xcc5 JumpB
	var_27_bool = 1; // 0xcc6 MovB
	return 2; // 0xcc7 Return
	
Label_3272:
	var_59_string = "noaccess"; // 0xcc8 PushS
	GetProperty(var_59_string, var_30_int); // 0xcc9 ObjFunc
	var_60_int = 0; // 0xccb PushI
	var_27_bool = var_30_int == var_60_int; // 0xccc Eq2
	return 2; // 0xccd Return
}


func_3776(var_194_bool, var_195_object)
{
	var_196_bool = 0; var_197_object = Obj(); // 0xec1 PushV
	var_197_object = var_195_object; // 0xec2 Mov
	func_3891(var_197_object); // 0xec3 NEW_2
	if(var_196_bool == 0) goto Label_3784; // 0xec5 JumpB
	var_194_bool = 1; // 0xec6 MovB
	return 0; // 0xec7 Return
	
Label_3784:
	var_194_bool = 0; // 0xec8 MovB
	return 0; // 0xec9 Return
}


func_2756(var_2_object)
{
	Stop(); // 0xac4 Func
	var_21_int = 120; // 0xac6 PushI
	KillTimer(var_21_int); // 0xac7 Func
	var_2_object = 1; // 0xac9 TMovB
	return 0; // 0xaca Return
}


func_3786(var_217_bool, var_218_object)
{
	var_219_bool = 0; var_220_object = Obj(); // 0xecb PushV
	var_220_object = var_218_object; // 0xecc Mov
	func_3898(var_220_object); // 0xecd NEW_2
	if(var_219_bool == 0) goto Label_3794; // 0xecf JumpB
	var_217_bool = 1; // 0xed0 MovB
	return 0; // 0xed1 Return
	
Label_3794:
	var_217_bool = 0; // 0xed2 MovB
	return 0; // 0xed3 Return
}


func_3278(var_37_object)
{
	var_38_bool = 0; var_39_int = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_string = ""; var_45_bool = 0; var_46_int = 0; var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_string = ""; // 0xcce PushV
	var_52_bool = var_37_object == 0; // 0xccf NullEq
	if(var_52_bool == 0) goto Label_3282; // 0xcd0 JumpB
	return 14; // 0xcd1 Return
	
Label_3282:
	IsDead(var_45_bool); // 0xcd2 Func
	var_53_bool = var_45_bool; // 0xcd4 Push
	if(var_53_bool == 0) goto Label_3287; // 0xcd5 JumpB
	return 14; // 0xcd6 Return
	
Label_3287:
	GetSecondaryAnimationType(var_46_int); // 0xcd7 Func
	var_54_int = 0; // 0xcd9 PushI
	var_55_bool = var_46_int < var_54_int; // 0xcda LT
	if(var_55_bool == 0) goto Label_3293; // 0xcdb JumpB
	return 14; // 0xcdc Return
	
Label_3293:
	GetPosition(var_47_cvector); // 0xcdd ObjFunc
	GetPosition(var_48_cvector); // 0xcdf Func
	GetDirection(var_49_cvector); // 0xce1 Func
	var_50_cvector = var_48_cvector - var_47_cvector; // 0xce3 Sub2
	var_56_float = GetByIndex(var_50_cvector, 0); // 0xce4 PushE
	var_57_float = GetByIndex(var_49_cvector, 0); // 0xce5 PushE
	var_58_float = var_56_float * var_57_float; // 0xce6 Mult
	var_59_float = GetByIndex(var_50_cvector, 2); // 0xce7 PushE
	var_60_float = GetByIndex(var_49_cvector, 2); // 0xce8 PushE
	var_61_float = var_59_float * var_60_float; // 0xce9 Mult
	var_62_int = var_58_float + var_61_float; // 0xcea Add
	var_63_int = 0; // 0xceb PushI
	var_64_bool = var_62_int >= var_63_int; // 0xcec GE
	if(var_64_bool == 0) goto Label_3312; // 0xced JumpB
	var_51_string = "fhit"; // 0xcee MovS
	goto Label_3313; // 0xcef Jump
	
Label_3313:
	var_65_string = "hit_react"; // 0xcf1 PushS
	var_66_string = "1"; // 0xcf2 PushS
	var_67_int = var_51_string + var_66_string; // 0xcf3 Add
	var_68_string = "2"; // 0xcf4 PushS
	var_69_int = var_51_string + var_68_string; // 0xcf5 Add
	var_70_int = -10; // 0xcf6 PushI
	FadeSecondaryAnimation(var_65_string, var_67_int, var_69_int, var_70_int); // 0xcf7 Func
	return 14; // 0xcf9 Return
	
Label_3312:
	var_51_string = "bhit"; // 0xcf0 MovS
}


func_4303(var_53_int, var_54_string)
{
	var_55_int = 0; var_56_int = 0; // 0x10cf PushV
	GetInvItemByName(var_56_int, var_54_string); // 0x10d0 Func
	var_53_int = var_56_int; // 0x10d2 Mov
	return 2; // 0x10d3 Return
}


func_3796(var_223_bool, var_224_object)
{
	var_225_bool = 0; var_226_object = Obj(); // 0xed5 PushV
	var_226_object = var_224_object; // 0xed6 Mov
	func_3905(var_226_object); // 0xed7 NEW_2
	if(var_225_bool == 0) goto Label_3804; // 0xed9 JumpB
	var_223_bool = 1; // 0xeda MovB
	return 0; // 0xedb Return
	
Label_3804:
	var_223_bool = 0; // 0xedc MovB
	return 0; // 0xedd Return
}


func_2772(var_0_object, var_72_bool)
{
	var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); // 0xad4 PushV
	GetDirection(var_75_cvector); // 0xad5 Func
	var_77_cvector = CVector(0,0,0); var_78_object = Obj(); // 0xad7 PushV
	var_78_object = var_0_object; // 0xad8 MovT
	func_3181(var_78_object); // 0xad9 NEW_2
	var_76_cvector = var_77_cvector; // 0xada Mov
	var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); // 0xadc PushV
	var_84_cvector = var_75_cvector; // 0xadd Mov
	var_85_cvector = var_76_cvector; // 0xade Mov
	func_3619(var_83_float, var_84_cvector, var_85_cvector); // 0xadf NEW_2
	var_91_float = -0.34202; // 0xae1 PushF
	var_72_bool = var_83_float >= var_91_float; // 0xae2 GE2
	return 4; // 0xae3 Return
}


func_4308(var_21_object)
{
	var_22_object = Obj(); // 0x10d5 PushV
	var_22_object = var_21_object; // 0x10d6 Mov
	TaskCall(2); // 0x10d7 TaskCall
	func_1657(var_22_object); // 0x10d8 NEW_2
	TaskReturn(); // 0x10d9 TaskReturn
	return 0; // 0x10db Return
}


func_3806(var_200_bool, var_201_object)
{
	var_202_bool = 0; var_203_object = Obj(); // 0xedf PushV
	var_203_object = var_201_object; // 0xee0 Mov
	func_3912(var_203_object); // 0xee1 NEW_2
	if(var_202_bool == 0) goto Label_3814; // 0xee3 JumpB
	var_200_bool = 1; // 0xee4 MovB
	return 0; // 0xee5 Return
	
Label_3814:
	var_200_bool = 0; // 0xee6 MovB
	return 0; // 0xee7 Return
}


func_4838(var_517_bool)
{
	var_519_int = 0; var_520_bool = 0; var_521_int = 0; var_522_int = 0; var_523_bool = 0; var_524_int = 0; // 0x12e6 PushV
	GetItemID(var_522_int); // 0x12e7 ObjFunc
	var_525_string = "Category"; // 0x12e9 PushS
	HasInvItemProperty(var_523_bool, var_522_int, var_525_string); // 0x12ea Func
	var_526_bool = var_523_bool == 0; // 0x12ec Not
	if(var_526_bool == 0) goto Label_4848; // 0x12ed JumpB
	var_517_bool = 0; // 0x12ee MovB
	return 6; // 0x12ef Return
	
Label_4848:
	var_527_string = "Category"; // 0x12f0 PushS
	GetInvItemProperty(var_524_int, var_522_int, var_527_string); // 0x12f1 Func
	var_528_int = 1; // 0x12f3 PushI
	var_517_bool = var_524_int == var_528_int; // 0x12f4 Eq2
	return 6; // 0x12f5 Return
}


func_3816(var_206_bool, var_207_object)
{
	var_208_bool = 0; var_209_object = Obj(); // 0xee9 PushV
	var_209_object = var_207_object; // 0xeea Mov
	func_3919(var_209_object); // 0xeeb NEW_2
	if(var_208_bool == 0) goto Label_3824; // 0xeed JumpB
	var_206_bool = 1; // 0xeee MovB
	return 0; // 0xeef Return
	
Label_3824:
	var_206_bool = 0; // 0xef0 MovB
	return 0; // 0xef1 Return
}


func_2795(var_34_cvector, var_35_float)
{
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_float = 0; // 0xaeb PushV
	GetPosition(var_42_cvector); // 0xaec Func
	GetPosition(var_43_cvector); // 0xaee TObjFunc
	GetDirection(var_44_cvector); // 0xaf0 Func
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0xaf2 PushV
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); // 0xaf3 PushV
	var_51_cvector = var_42_cvector - var_43_cvector; // 0xaf4 Sub2
	func_3603(var_50_cvector, var_51_cvector); // 0xaf5 NEW_2
	var_57_float = 0.75; // 0xaf7 PushF
	var_58_float = var_44_cvector * var_57_float; // 0xaf8 Mult
	var_49_cvector = var_50_cvector + var_58_float; // 0xaf9 Add2
	func_3603(var_48_cvector, var_49_cvector); // 0xafa NEW_2
	var_45_cvector = var_48_cvector; // 0xafb Mov
	var_59_int = 32; // 0xafd PushI
	var_60_float = 7000.0; // 0xafe PushF
	FindLongestDir(var_46_cvector, var_47_float, var_45_cvector, var_35_float, var_59_int, var_60_float); // 0xaff Func
	var_61_int = 100; // 0xb01 PushI
	var_47_float = var_47_float - var_61_int; // 0xb02 Sub2
	var_62_int = 0; // 0xb03 PushI
	var_63_bool = var_47_float < var_62_int; // 0xb04 LT
	if(var_63_bool == 0) goto Label_2823; // 0xb05 JumpB
	var_47_float = 0; // 0xb06 MovI
	
Label_2823:
	var_34_cvector = var_46_cvector * var_47_float; // 0xb07 Mult2
	return 12; // 0xb08 Return
}


func_3826(var_283_bool, var_284_object)
{
	var_285_bool = 0; var_286_object = Obj(); // 0xef3 PushV
	var_286_object = var_284_object; // 0xef4 Mov
	func_3926(var_286_object); // 0xef5 NEW_2
	if(var_285_bool == 0) goto Label_3834; // 0xef7 JumpB
	var_283_bool = 1; // 0xef8 MovB
	return 0; // 0xef9 Return
	
Label_3834:
	var_283_bool = 0; // 0xefa MovB
	return 0; // 0xefb Return
}


func_1781(var_45_string)
{
	RemoveRTEnvelope(); // 0x6f6 Func
	SetDeathState(); // 0x6f8 Func
	Stop(); // 0x6fa Func
	StopAsync(); // 0x6fc Func
	StopSecondaryAnimation(); // 0x6fe Func
	var_46_string = ""; // 0x700 PushV
	var_46_string = var_45_string; // 0x701 Mov
	func_3556(var_46_string); // 0x702 NEW_2
	var_75_string = "all"; // 0x704 PushS
	PlayAnimation(var_75_string, var_45_string); // 0x705 Func
	WaitForAnimEnd(); // 0x707 Func
	var_76_string = "all"; // 0x709 PushS
	LockAnimationEnd(var_76_string, var_45_string); // 0x70a Func
	RemoveEnvelope(); // 0x70c Func
	return 0; // 0x70e Return
}


func_4854(var_44_object, var_47_object)
{
	var_45_int = 0; var_46_object = Obj(); // 0x12f7 PushV
	var_46_object = var_44_object; // 0x12f8 Mov
	TaskCall(0); // 0x12f9 TaskCall
	func_0(var_47_object, var_45_int, var_46_object); // 0x12fa NEW_2
	TaskReturn(); // 0x12fb TaskReturn
	var_449_int = 100; // 0x12fd PushI
	var_450_bool = var_47_object == var_449_int; // 0x12fe Eq
	if(var_450_bool == 0) goto Label_4868; // 0x12ff JumpB
	var_451_object = Obj(); // 0x1300 PushV
	var_451_object = var_44_object; // 0x1301 Mov
	func_4691(); // 0x1302 NEW_2
	
Label_4868:
	return 0; // 0x1304 Return
}


func_3322(var_24_object, var_25_int, var_26_float)
{
	var_27_cvector = CVector(0,0,0); var_28_object = Obj(); var_29_int = 0; var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_int = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_object = Obj(); var_38_int = 0; var_39_bool = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_int = 0; var_43_int = 0; var_44_cvector = CVector(0,0,0); // 0xcfa PushV
	var_45_bool = 0; // 0xcfb PushV
	var_45_bool = 0; // 0xcfc MovB
	var_46_bool = 0; // 0xcfd PushV
	var_46_bool = 0; // 0xcfe MovB
	var_47_object = var_24_object; // 0xcff Push
	if(var_47_object == 0) goto Label_3333; // 0xd00 JumpB
	var_48_int = 4; // 0xd01 PushI
	var_49_bool = var_25_int != var_48_int; // 0xd02 Neq
	if(var_49_bool == 0) goto Label_3333; // 0xd03 JumpB
	var_46_bool = 1; // 0xd04 MovB
	
Label_3333:
	if(var_46_bool == 0) goto Label_3338; // 0xd05 JumpB
	var_50_int = 5; // 0xd06 PushI
	var_51_bool = var_25_int != var_50_int; // 0xd07 Neq
	if(var_51_bool == 0) goto Label_3338; // 0xd08 JumpB
	var_45_bool = 1; // 0xd09 MovB
	
Label_3338:
	if(var_45_bool == 0) goto Label_3385; // 0xd0a JumpB
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0xd0b PushV
	var_54_cvector = CVector(0,0,0); var_55_object = Obj(); // 0xd0c PushV
	var_55_object = var_24_object; // 0xd0d Mov
	func_3181(var_55_object); // 0xd0e NEW_2
	var_53_cvector = var_54_cvector; // 0xd0f Mov
	func_3603(var_52_cvector, var_53_cvector); // 0xd11 NEW_2
	var_36_cvector = var_52_cvector; // 0xd12 Mov
	CreateVectorVector(var_37_object); // 0xd14 Func
	var_38_int = 1; // 0xd16 MovI
	
Label_3351:
	var_65_string = "hit"; // 0xd17 PushS
	var_66_int = var_65_string + var_38_int; // 0xd18 Add
	GetGeometryLocator(var_66_int, var_39_bool, var_40_cvector, var_41_cvector); // 0xd19 Func
	var_67_bool = var_39_bool == 0; // 0xd1b Not
	if(var_67_bool == 0) goto Label_3358; // 0xd1c JumpB
	goto Label_3367; // 0xd1d Jump
	
Label_3367:
	size(var_42_int); // 0xd27 ObjFunc
	var_68_int = var_42_int; // 0xd29 Push
	if(var_68_int == 0) goto Label_3384; // 0xd2a JumpB
	irand(var_43_int, var_42_int); // 0xd2b Func
	get(var_44_cvector, var_43_int); // 0xd2d ObjFunc
	var_69_object = Obj(); var_70_int = 0; var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); // 0xd2f PushV
	var_69_object = var_24_object; // 0xd30 Mov
	var_70_int = var_25_int; // 0xd31 Mov
	var_71_float = var_26_float; // 0xd32 Mov
	var_72_cvector = var_44_cvector; // 0xd33 Mov
	var_73_cvector = -var_36_cvector; // 0xd34 Neg2
	func_3390(var_71_float, var_72_cvector, var_73_cvector); // 0xd35 NEW_2
	return 18; // 0xd37 Return
	
Label_3384:
	var_37_object = 0; // 0xd38 SetNull
	
Label_3385:
	var_114_object = Obj(); // 0xd39 PushV
	var_114_object = var_24_object; // 0xd3a Mov
	func_3278(var_114_object); // 0xd3b NEW_2
	return 18; // 0xd3d Return
	
Label_3358:
	var_115_int = var_41_cvector | var_36_cvector; // 0xd1e Or
	var_116_float = 0.70711; // 0xd1f PushF
	var_117_bool = var_115_int >= var_116_float; // 0xd20 GE
	if(var_117_bool == 0) goto Label_3364; // 0xd21 JumpB
	add(var_40_cvector); // 0xd22 ObjFunc
	
Label_3364:
	var_118_int = 1; // 0xd24 PushI
	var_38_int = var_38_int + var_118_int; // 0xd25 Add2
	goto Label_3351; // 0xd26 Jump
}


func_3836(var_289_bool, var_290_object)
{
	var_291_bool = 0; var_292_object = Obj(); // 0xefd PushV
	var_292_object = var_290_object; // 0xefe Mov
	func_3933(var_292_object); // 0xeff NEW_2
	if(var_291_bool == 0) goto Label_3844; // 0xf01 JumpB
	var_289_bool = 1; // 0xf02 MovB
	return 0; // 0xf03 Return
	
Label_3844:
	var_289_bool = 0; // 0xf04 MovB
	return 0; // 0xf05 Return
}


func_2303()
{
	StopGroup0(); // 0x8ff Func
	StopAsync(); // 0x901 Func
	var_35_string = "head"; // 0x903 PushS
	UnlookAsync(var_35_string); // 0x904 Func
	var_36_int = 111; // 0x906 PushI
	KillTimer(var_36_int); // 0x907 Func
	return 0; // 0x909 Return
}


func_4353(var_24_bool, var_25_object, var_26_string)
{
	var_27_string = "unholster"; // 0x1102 PushS
	var_28_bool = var_26_string == var_27_string; // 0x1103 Eq
	if(var_28_bool == 0) goto Label_4364; // 0x1104 JumpB
	var_29_bool = 0; var_30_object = Obj(); // 0x1105 PushV
	var_30_object = var_25_object; // 0x1106 Mov
	func_4637(var_29_bool, var_30_object); // 0x1107 NEW_2
	var_24_bool = var_29_bool; // 0x1108 Mov
	return 0; // 0x110a Return
	
Label_4364:
	var_33_string = "player_shot"; // 0x110c PushS
	var_34_bool = var_26_string == var_33_string; // 0x110d Eq
	if(var_34_bool == 0) goto Label_4374; // 0x110e JumpB
	var_35_bool = 0; var_36_object = Obj(); // 0x110f PushV
	var_36_object = var_25_object; // 0x1110 Mov
	func_4650(var_35_bool, var_36_object); // 0x1111 NEW_2
	var_24_bool = var_35_bool; // 0x1112 Mov
	return 0; // 0x1114 Return
	
Label_4374:
	var_50_string = "battle"; // 0x1116 PushS
	var_51_bool = var_26_string == var_50_string; // 0x1117 Eq
	if(var_51_bool == 0) goto Label_4383; // 0x1118 JumpB
	var_52_bool = 0; var_53_object = Obj(); // 0x1119 PushV
	var_53_object = var_25_object; // 0x111a Mov
	func_4673(var_52_bool, var_53_object); // 0x111b NEW_2
	var_24_bool = var_52_bool; // 0x111c Mov
	return 0; // 0x111e Return
	
Label_4383:
	var_24_bool = 0; // 0x111f MovB
	return 0; // 0x1120 Return
}


func_4869(var_154_string, var_155_int)
{
	var_156_string = ""; var_157_string = ""; // 0x1305 PushV
	var_157_string = "idle"; // 0x1306 MovS
	var_158_int = var_155_int; // 0x1307 Push
	if(var_158_int == 0) goto Label_4874; // 0x1308 JumpB
	var_157_string = var_157_string + var_155_int; // 0x1309 Add2
	
Label_4874:
	var_154_string = var_157_string; // 0x130a Mov
	return 2; // 0x130b Return
}


func_3846(var_401_bool, var_402_object)
{
	var_403_bool = 0; var_404_object = Obj(); // 0xf07 PushV
	var_404_object = var_402_object; // 0xf08 Mov
	func_3940(var_404_object); // 0xf09 NEW_2
	if(var_403_bool == 0) goto Label_3854; // 0xf0b JumpB
	var_401_bool = 1; // 0xf0c MovB
	return 0; // 0xf0d Return
	
Label_3854:
	var_401_bool = 0; // 0xf0e MovB
	return 0; // 0xf0f Return
}


func_2825(var_0_object, var_1_object, var_2_object, var_39_object)
{
	var_43_cvector = CVector(0,0,0); var_44_float = 0; var_45_bool = 0; var_46_cvector = CVector(0,0,0); var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_float = 0; var_50_bool = 0; var_51_cvector = CVector(0,0,0); var_52_float = 0; // 0xb09 PushV
	var_0_object = var_39_object; // 0xb0a TMov
	var_53_cvector = CVector(0,0,0); var_54_float = 0; // 0xb0b PushV
	var_54_float = 1.74533; // 0xb0c MovF
	func_2795(var_53_cvector, var_54_float); // 0xb0d NEW_2
	var_48_cvector = var_53_cvector; // 0xb0e Mov
	var_49_float = var_48_cvector | var_48_cvector; // 0xb10 Or2
	var_83_float = 2500.0; // 0xb11 PushF
	var_84_bool = var_49_float < var_83_float; // 0xb12 LT
	if(var_84_bool == 0) goto Label_2854; // 0xb13 JumpB
	var_85_cvector = CVector(0,0,0); var_86_float = 0; // 0xb14 PushV
	var_86_float = 2.61799; // 0xb15 MovF
	func_2795(var_85_cvector, var_86_float); // 0xb16 NEW_2
	var_48_cvector = var_85_cvector; // 0xb17 Mov
	var_49_float = var_48_cvector | var_48_cvector; // 0xb19 Or2
	var_87_float = 2500.0; // 0xb1a PushF
	var_88_bool = var_49_float < var_87_float; // 0xb1b LT
	if(var_88_bool == 0) goto Label_2854; // 0xb1c JumpB
	var_89_string = "Can't retreat, distance: "; // 0xb1d PushS
	var_90_float = sqrt(var_49_float); // 0xb1e Sqrt
	var_91_int = var_89_string + var_90_float; // 0xb1f Add
	Trace(var_91_int); // 0xb20 Func
	var_92_float = 0.5; // 0xb22 PushF
	Sleep(var_92_float); // 0xb23 Func
	return 10; // 0xb25 Return
	
Label_2854:
	var_93_float = GetByIndex(var_48_cvector, 0); // 0xb26 PushE
	var_94_float = GetByIndex(var_48_cvector, 2); // 0xb27 PushE
	Rotate(var_93_float, var_94_float); // 0xb28 Func
	var_95_cvector = CVector(0,0,0); // 0xb2a PushV
	func_3176(var_95_cvector); // 0xb2b NEW_2
	var_1_object = var_95_cvector + var_48_cvector; // 0xb2d Add2
	var_98_int = 120; // 0xb2e PushI
	var_99_float = 0.5; // 0xb2f PushF
	SetTimer(var_98_int, var_99_float); // 0xb30 Func
	var_2_object = 0; // 0xb32 TMovB
	
Label_2867:
	var_100_int = 1; // 0xb33 PushI
	MovePoint(var_100_int, var_100_int, var_50_bool); // 0xb34 Func
	var_101_bool = var_50_bool; // 0xb36 Push
	if(var_101_bool == 0) goto Label_2895; // 0xb37 JumpB
	var_102_bool = var_0_object == 0; // 0xb38 NullEq
	if(var_102_bool == 0) goto Label_2876; // 0xb39 JumpB
	goto Label_2897; // 0xb3a Jump
	
Label_2897:
	return 10; // 0xb51 Return
	
Label_2876:
	var_103_cvector = CVector(0,0,0); var_104_float = 0; // 0xb3c PushV
	var_104_float = 2.61799; // 0xb3d MovF
	func_2795(var_103_cvector, var_104_float); // 0xb3e NEW_2
	var_51_cvector = var_103_cvector; // 0xb3f Mov
	var_52_float = var_51_cvector | var_51_cvector; // 0xb41 Or2
	var_105_float = 2500.0; // 0xb42 PushF
	var_106_bool = var_52_float >= var_105_float; // 0xb43 GE
	if(var_106_bool == 0) goto Label_2894; // 0xb44 JumpB
	var_107_cvector = CVector(0,0,0); // 0xb45 PushV
	func_3176(var_107_cvector); // 0xb46 NEW_2
	var_1_object = var_107_cvector + var_51_cvector; // 0xb48 Add2
	var_108_int = 120; // 0xb49 PushI
	var_109_float = 0.5; // 0xb4a PushF
	SetTimer(var_108_int, var_109_float); // 0xb4b Func
	goto Label_2895; // 0xb4d Jump
	
Label_2895:
	var_110_bool = var_2_object == 0; // 0xb4f Not
	if(var_110_bool == 0) goto Label_2867; // 0xb50 JumpB
	
Label_2894:
	goto Label_2897; // 0xb4e Jump
}


func_4876(var_105_int)
{
	var_105_int = 515567; // 0x130c MovI
	return 0; // 0x130d Return
}


func_4878(var_104_int)
{
	var_104_int = 503352; // 0x130e MovI
	return 0; // 0x130f Return
}


func_4880(var_106_string)
{
	var_106_string = "ui/NPC_Citizen3.png"; // 0x1310 MovS
	return 0; // 0x1311 Return
}


func_3856(var_155_bool)
{
	var_157_int = 0; // 0xf11 PushV
	func_3668(var_157_int); // 0xf12 NEW_2
	var_163_int = 1; // 0xf14 PushI
	var_155_bool = var_157_int == var_163_int; // 0xf15 Eq2
	return 0; // 0xf16 Return
}


func_4882(var_107_string)
{
	var_107_string = "ui/NPC_Citizen3_b.png"; // 0x1312 MovS
	return 0; // 0x1313 Return
}


func_4884(var_99_bool)
{
	var_99_bool = 0; // 0x1314 MovB
	return 0; // 0x1315 Return
}


func_4886()
{
	var_25_bool = GlobalVars[0]; // 0x1316 PushGE
	var_25_bool = 0; // 0x1317 MovB
	GlobalVars[0] = var_25_bool; // 0x1318 PopGE
	var_26_bool = 0; // 0x1319 PushV
	var_26_bool = 0; // 0x131a MovB
	func_4128(var_26_bool); // 0x131b NEW_2
	return 0; // 0x131d Return
}


func_3863(var_190_bool)
{
	var_192_int = 0; // 0xf18 PushV
	func_3668(var_192_int); // 0xf19 NEW_2
	var_193_int = 2; // 0xf1b PushI
	var_190_bool = var_192_int == var_193_int; // 0xf1c Eq2
	return 0; // 0xf1d Return
}


func_3870(var_166_bool)
{
	var_168_int = 0; // 0xf1f PushV
	func_3668(var_168_int); // 0xf20 NEW_2
	var_169_int = 3; // 0xf22 PushI
	var_166_bool = var_168_int == var_169_int; // 0xf23 Eq2
	return 0; // 0xf24 Return
}


func_4894(var_32_object)
{
	var_33_bool = 0; var_34_bool = 0; // 0x131e PushV
	var_35_bool = GlobalVars[0]; // 0x131f PushGE
	if(var_35_bool == 0) goto Label_4907; // 0x1320 JumpB
	IsOverrideActive(var_34_bool); // 0x1321 Func
	var_36_bool = var_34_bool == 0; // 0x1323 Not
	if(var_36_bool == 0) goto Label_4905; // 0x1324 JumpB
	var_37_object = Obj(); // 0x1325 PushV
	var_37_object = var_32_object; // 0x1326 Mov
	func_4043(var_37_object); // 0x1327 NEW_2
	
Label_4905:
	return 2; // 0x1329 Return
	
Label_4907:
	var_44_object = Obj(); // 0x132b PushV
	var_44_object = var_32_object; // 0x132c Mov
	func_4854(var_34_bool, var_44_object); // 0x132d NEW_2
	return 2; // 0x132f Return
}


func_4385(var_58_object, var_59_string)
{
	var_60_string = "unholster"; // 0x1122 PushS
	var_61_bool = var_59_string == var_60_string; // 0x1123 Eq
	if(var_61_bool == 0) goto Label_4394; // 0x1124 JumpB
	var_62_object = Obj(); // 0x1125 PushV
	var_62_object = var_58_object; // 0x1126 Mov
	func_4642(var_62_object); // 0x1127 NEW_2
	goto Label_4409; // 0x1129 Jump
	
Label_4409:
	return 0; // 0x1139 Return
	
Label_4394:
	var_135_string = "player_shot"; // 0x112a PushS
	var_136_bool = var_59_string == var_135_string; // 0x112b Eq
	if(var_136_bool == 0) goto Label_4402; // 0x112c JumpB
	var_137_object = Obj(); // 0x112d PushV
	var_137_object = var_58_object; // 0x112e Mov
	func_4665(var_137_object); // 0x112f NEW_2
	goto Label_4409; // 0x1131 Jump
	
Label_4402:
	var_203_string = "battle"; // 0x1132 PushS
	var_204_bool = var_59_string == var_203_string; // 0x1133 Eq
	if(var_204_bool == 0) goto Label_4409; // 0x1134 JumpB
	var_205_object = Obj(); // 0x1135 PushV
	var_205_object = var_58_object; // 0x1136 Mov
	func_4680(var_205_object); // 0x1137 NEW_2
}


func_3877(var_172_bool)
{
	var_174_int = 0; // 0xf26 PushV
	func_3668(var_174_int); // 0xf27 NEW_2
	var_175_int = 4; // 0xf29 PushI
	var_172_bool = var_174_int == var_175_int; // 0xf2a Eq2
	return 0; // 0xf2b Return
}


func_3884(var_178_bool)
{
	var_180_int = 0; // 0xf2d PushV
	func_3668(var_180_int); // 0xf2e NEW_2
	var_181_int = 5; // 0xf30 PushI
	var_178_bool = var_180_int == var_181_int; // 0xf31 Eq2
	return 0; // 0xf32 Return
}


func_4912()
{
	var_147_int = 0; var_148_bool = 0; var_149_int = 0; var_150_int = 0; var_151_bool = 0; var_152_int = 0; // 0x1330 PushV
	var_150_int = 0; // 0x1331 MovI
	
Label_4914:
	var_153_string = "all"; // 0x1332 PushS
	var_154_string = ""; var_155_int = 0; // 0x1333 PushV
	var_155_int = var_150_int; // 0x1334 Mov
	func_4869(var_154_string, var_155_int); // 0x1335 NEW_2
	HasAnimation(var_151_bool, var_153_string, var_154_string); // 0x1337 Func
	var_159_bool = var_151_bool == 0; // 0x1339 Not
	if(var_159_bool == 0) goto Label_4924; // 0x133a JumpB
	goto Label_4927; // 0x133b Jump
	
Label_4927:
	irand(var_152_int, var_150_int); // 0x133f Func
	var_160_string = "all"; // 0x1341 PushS
	var_161_string = ""; var_162_int = 0; // 0x1342 PushV
	var_162_int = var_152_int; // 0x1343 Mov
	func_4869(var_161_string, var_162_int); // 0x1344 NEW_2
	PlayAnimation(var_160_string, var_161_string); // 0x1346 Func
	WaitForAnimEnd(); // 0x1348 Func
	return 6; // 0x134a Return
	
Label_4924:
	var_163_int = 1; // 0x133c PushI
	var_150_int = var_150_int + var_163_int; // 0x133d Add2
	goto Label_4914; // 0x133e Jump
}


func_3891(var_196_bool)
{
	var_198_int = 0; // 0xf34 PushV
	func_3668(var_198_int); // 0xf35 NEW_2
	var_199_int = 6; // 0xf37 PushI
	var_196_bool = var_198_int == var_199_int; // 0xf38 Eq2
	return 0; // 0xf39 Return
}


func_1847()
{
	var_140_bool = 0; // 0x737 PushV
	func_3415(var_140_bool); // 0x738 NEW_2
	var_143_bool = var_140_bool == 0; // 0x73a Not
	if(var_143_bool == 0) goto Label_1855; // 0x73b JumpB
	func_4609(); // 0x73d NEW_2
	
Label_1855:
	return 0; // 0x73f Return
}


func_4410(var_21_bool, var_22_object)
{
	var_23_bool = 0; var_24_bool = 0; // 0x113a PushV
	var_25_bool = 0; // 0x113b PushV
	var_25_bool = 0; // 0x113c MovB
	var_26_bool = 0; var_27_object = Obj(); // 0x113d PushV
	var_27_object = var_22_object; // 0x113e Mov
	func_4637(var_26_bool, var_27_object); // 0x113f NEW_2
	if(var_26_bool == 0) goto Label_4424; // 0x1141 JumpB
	var_30_bool = 0; var_31_object = Obj(); // 0x1142 PushV
	var_31_object = var_22_object; // 0x1143 Mov
	func_3196(var_30_bool, var_31_object); // 0x1144 NEW_2
	if(var_30_bool == 0) goto Label_4424; // 0x1146 JumpB
	var_25_bool = 1; // 0x1147 MovB
	
Label_4424:
	if(var_25_bool == 0) goto Label_4431; // 0x1148 JumpB
	IsWeaponHolstered(var_24_bool); // 0x1149 ObjFunc
	var_34_bool = var_24_bool == 0; // 0x114b Not
	if(var_34_bool == 0) goto Label_4431; // 0x114c JumpB
	var_21_bool = 1; // 0x114d MovB
	return 2; // 0x114e Return
	
Label_4431:
	var_21_bool = 0; // 0x114f MovB
	return 2; // 0x1150 Return
}


func_3898(var_219_bool)
{
	var_221_int = 0; // 0xf3b PushV
	func_3668(var_221_int); // 0xf3c NEW_2
	var_222_int = 7; // 0xf3e PushI
	var_219_bool = var_221_int == var_222_int; // 0xf3f Eq2
	return 0; // 0xf40 Return
}


func_3390(var_26_object, var_29_cvector, var_30_cvector)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); var_34_object = Obj(); // 0xd3e PushV
	GetScene(var_33_object); // 0xd3f Func
	var_35_string = "scripted"; // 0xd41 PushS
	var_36_string = "blood_dir.xml"; // 0xd42 PushS
	AddActorByType(var_34_object, var_35_string, var_33_object, var_29_cvector, var_30_cvector, var_36_string); // 0xd43 Func
	var_37_object = Obj(); // 0xd45 PushV
	var_37_object = var_26_object; // 0xd46 Mov
	func_3278(var_37_object); // 0xd47 NEW_2
	return 4; // 0xd49 Return
}


func_3905(var_225_bool)
{
	var_227_int = 0; // 0xf42 PushV
	func_3668(var_227_int); // 0xf43 NEW_2
	var_228_int = 8; // 0xf45 PushI
	var_225_bool = var_227_int == var_228_int; // 0xf46 Eq2
	return 0; // 0xf47 Return
}


func_3912(var_202_bool)
{
	var_204_int = 0; // 0xf49 PushV
	func_3668(var_204_int); // 0xf4a NEW_2
	var_205_int = 9; // 0xf4c PushI
	var_202_bool = var_204_int == var_205_int; // 0xf4d Eq2
	return 0; // 0xf4e Return
}


func_4939()
{
	StopAnimation(); // 0x134b Func
	return 0; // 0x134d Return
}


func_3404()
{
	var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); // 0xd4c PushV
	GetPosition(var_100_cvector); // 0xd4d ObjFunc
	GetPosition(var_101_cvector); // 0xd4f Func
	var_102_cvector = var_100_cvector - var_101_cvector; // 0xd51 Sub2
	var_103_float = GetByIndex(var_102_cvector, 0); // 0xd52 PushE
	var_104_float = GetByIndex(var_102_cvector, 2); // 0xd53 PushE
	RotateAsync(var_103_float, var_104_float); // 0xd54 Func
	return 6; // 0xd56 Return
}


func_2379(var_73_object)
{
	Face(var_73_object); // 0x94c Func
	var_77_string = "all"; // 0x94e PushS
	var_78_string = "attack_on"; // 0x94f PushS
	PlayAnimation(var_77_string, var_78_string); // 0x950 Func
	WaitForAnimEnd(); // 0x952 Func
	var_79_string = "all"; // 0x954 PushS
	var_80_string = "attack_stay"; // 0x955 PushS
	PlayAnimation(var_79_string, var_80_string); // 0x956 Func
	WaitForAnimEnd(); // 0x958 Func
	var_81_string = "all"; // 0x95a PushS
	var_82_string = "attack_off"; // 0x95b PushS
	PlayAnimation(var_81_string, var_82_string); // 0x95c Func
	WaitForAnimEnd(); // 0x95e Func
	StopAsync(); // 0x960 Func
	var_83_object = Obj(); // 0x962 PushV
	var_83_object = var_73_object; // 0x963 Mov
	func_2444(var_75_cvector, var_76_bool, var_73_object, var_83_object); // 0x964 NEW_2
	return 0; // 0x966 Return
}


func_4942(var_31_bool)
{
	var_31_bool = 1; // 0x134e MovB
	return 0; // 0x134f Return
}


func_3919(var_208_bool)
{
	var_210_int = 0; // 0xf50 PushV
	func_3668(var_210_int); // 0xf51 NEW_2
	var_211_int = 10; // 0xf53 PushI
	var_208_bool = var_210_int == var_211_int; // 0xf54 Eq2
	return 0; // 0xf55 Return
}


func_4944(var_25_bool, var_26_object, var_27_object)
{
	var_29_bool = 0; var_30_object = Obj(); var_31_object = Obj(); var_32_float = 0; // 0x1351 PushV
	var_30_object = var_26_object; // 0x1352 Mov
	var_31_object = var_27_object; // 0x1353 Mov
	var_32_float = 500.0; // 0x1354 MovF
	func_4534(var_29_bool, var_30_object, var_31_object, var_32_float); // 0x1355 NEW_2
	if(var_29_bool == 0) goto Label_4958; // 0x1357 JumpB
	var_72_string = "ToDie"; // 0x1358 PushS
	var_73_bool = 1; // 0x1359 PushB
	SetProperty(var_72_string, var_73_bool); // 0x135a Func
	var_25_bool = 1; // 0x135c MovB
	return 0; // 0x135d Return
	
Label_4958:
	var_25_bool = 0; // 0x135e MovB
	return 0; // 0x135f Return
}


func_4433(var_37_object)
{
	var_38_object = Obj(); // 0x1152 PushV
	var_38_object = var_37_object; // 0x1153 Mov
	func_4642(var_38_object); // 0x1154 NEW_2
	return 0; // 0x1156 Return
}


func_3926(var_285_bool)
{
	var_287_int = 0; // 0xf57 PushV
	func_3668(var_287_int); // 0xf58 NEW_2
	var_288_int = 11; // 0xf5a PushI
	var_285_bool = var_287_int == var_288_int; // 0xf5b Eq2
	return 0; // 0xf5c Return
}


func_3415(var_140_bool)
{
	var_141_bool = 0; var_142_bool = 0; // 0xd57 PushV
	IsLoaded(var_142_bool); // 0xd58 Func
	var_140_bool = var_142_bool; // 0xd5a Mov
	return 2; // 0xd5b Return
}


func_4439(var_23_object)
{
	var_24_bool = 0; var_25_object = Obj(); // 0x1158 PushV
	var_25_object = var_23_object; // 0x1159 Mov
	func_3196(var_24_bool, var_25_object); // 0x115a NEW_2
	if(var_24_bool == 0) goto Label_4451; // 0x115c JumpB
	var_28_object = Obj(); // 0x115d PushV
	func_3597(var_28_object); // 0x115e NEW_2
	var_31_float = -0.05; // 0x1160 PushF
	ReportReputationChange(var_23_object, var_28_object, var_31_float); // 0x1161 Func
	
Label_4451:
	return 0; // 0x1163 Return
}


func_3420(var_56_bool, var_58_float)
{
	var_59_float = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_bool = 0; var_67_bool = 0; var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_bool = 0; var_76_bool = 0; // 0xd5c PushV
	GetPosition(var_69_cvector); // 0xd5d ObjFunc
	GetEyesHeight(var_68_float); // 0xd5f ObjFunc
	var_77_float = GetByIndex(var_69_cvector, 1); // 0xd61 PushE
	var_77_float = var_77_float + var_68_float; // 0xd62 Add2
	SetByIndex(var_69_cvector, 1) = var_77_float; // 0xd63 PopE
	GetPosition(var_70_cvector); // 0xd64 Func
	GetEyesHeight(var_68_float); // 0xd66 Func
	var_78_float = GetByIndex(var_70_cvector, 1); // 0xd68 PushE
	var_78_float = var_78_float + var_68_float; // 0xd69 Add2
	SetByIndex(var_70_cvector, 1) = var_78_float; // 0xd6a PopE
	var_71_cvector = var_69_cvector - var_70_cvector; // 0xd6b Sub2
	var_79_float = GetByIndex(var_71_cvector, 1); // 0xd6c PushE
	var_79_float = 0; // 0xd6d MovI
	SetByIndex(var_71_cvector, 1) = var_79_float; // 0xd6e PopE
	var_80_int = var_71_cvector | var_71_cvector; // 0xd6f Or
	var_81_float = sqrt(var_80_int); // 0xd70 Sqrt
	var_71_cvector = var_71_cvector / var_71_cvector; // 0xd71 Div2
	var_72_cvector = -var_71_cvector; // 0xd72 Neg2
	var_82_float = var_71_cvector * var_58_float; // 0xd73 Mult
	var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); // 0xd74 PushV
	var_85_cvector = CVector(0.0, 1.0, 0.0); // 0xd75 PushVec
	var_84_cvector = var_72_cvector ^ var_85_cvector; // 0xd76 Xor2
	func_3603(var_83_cvector, var_84_cvector); // 0xd77 NEW_2
	var_91_int = 25; // 0xd79 PushI
	var_92_float = var_83_cvector * var_91_int; // 0xd7a Mult
	var_93_int = var_82_float + var_92_float; // 0xd7b Add
	var_94_cvector = CVector(0.0, 10.0, 0.0); // 0xd7c PushVec
	var_73_cvector = var_93_int - var_94_cvector; // 0xd7d Sub2
	var_74_cvector = var_70_cvector + var_73_cvector; // 0xd7e Add2
	IsOverrideActive(var_75_bool); // 0xd7f Func
	var_95_bool = var_75_bool; // 0xd81 Push
	if(var_95_bool == 0) goto Label_3461; // 0xd82 JumpB
	var_56_bool = 0; // 0xd83 MovB
	return 18; // 0xd84 Return
	
Label_3461:
	StopWorld(); // 0xd85 Func
	var_96_bool = 1; // 0xd87 PushB
	CameraTransit(var_74_cvector, var_72_cvector, var_96_bool); // 0xd88 Func
	var_97_float = GetByIndex(var_73_cvector, 0); // 0xd8a PushE
	var_98_float = GetByIndex(var_73_cvector, 2); // 0xd8b PushE
	Rotate(var_97_float, var_98_float); // 0xd8c Func
	var_99_bool = 0; // 0xd8e PushV
	func_4884(var_99_bool); // 0xd8f NEW_2
	if(var_99_bool == 0) goto Label_3475; // 0xd91 JumpB
	goto Label_3483; // 0xd92 Jump
	
Label_3483:
	CameraWaitForPlayFinish(); // 0xd9b Func
	ResumeWorld(); // 0xd9d Func
	var_56_bool = 1; // 0xd9f MovB
	return 18; // 0xda0 Return
	
Label_3475:
	var_100_string = "head"; // 0xd93 PushS
	HasAnimationTrack(var_76_bool, var_100_string); // 0xd94 Func
	var_101_bool = var_76_bool; // 0xd96 Push
	if(var_101_bool == 0) goto Label_3483; // 0xd97 JumpB
	var_102_string = "head"; // 0xd98 PushS
	LookAsyncCamera(var_102_string); // 0xd99 Func
}


func_3933(var_291_bool)
{
	var_293_int = 0; // 0xf5e PushV
	func_3668(var_293_int); // 0xf5f NEW_2
	var_294_int = 12; // 0xf61 PushI
	var_291_bool = var_293_int == var_294_int; // 0xf62 Eq2
	return 0; // 0xf63 Return
}


func_4960(var_103_object)
{
	var_104_bool = 0; var_105_object = Obj(); // 0x1361 PushV
	var_105_object = var_103_object; // 0x1362 Mov
	func_3196(var_104_bool, var_105_object); // 0x1363 NEW_2
	if(var_104_bool == 0) goto Label_4977; // 0x1365 JumpB
	var_108_object = Obj(); // 0x1366 PushV
	func_3597(var_108_object); // 0x1367 NEW_2
	var_111_float = -0.1; // 0x1369 PushF
	var_112_bool = 1; // 0x136a PushB
	ReportReputationChange(var_103_object, var_108_object, var_111_float, var_112_bool); // 0x136b Func
	var_113_bool = 0; // 0x136d PushV
	var_113_bool = 0; // 0x136e MovB
	func_4128(var_113_bool); // 0x136f NEW_2
	
Label_4977:
	func_4104(); // 0x1372 NEW_2
	var_247_bool = GlobalVars[0]; // 0x1374 PushGE
	var_247_bool = 1; // 0x1375 MovB
	GlobalVars[0] = var_247_bool; // 0x1376 PopGE
	var_248_int = 50; // 0x1377 PushI
	var_249_int = 40; // 0x1378 PushI
	SetRTEnvelope(var_248_int, var_249_int); // 0x1379 Func
	return 0; // 0x137b Return
}


func_4452(var_21_bool, var_22_string)
{
	var_23_object = Obj(); var_24_object = Obj(); // 0x1164 PushV
	var_25_string = "heal"; // 0x1165 PushS
	var_26_bool = var_22_string == var_25_string; // 0x1166 Eq
	if(var_26_bool == 0) goto Label_4466; // 0x1167 JumpB
	var_27_string = "player"; // 0x1168 PushS
	FindActor(var_24_object, var_27_string); // 0x1169 Func
	var_28_bool = 0; var_29_object = Obj(); // 0x116b PushV
	var_29_object = var_24_object; // 0x116c Mov
	func_4686(var_29_object); // 0x116d NEW_2
	var_21_bool = var_28_bool; // 0x116e Mov
	return 2; // 0x1170 Return
	
Label_4466:
	var_21_bool = 0; // 0x1172 MovB
	return 2; // 0x1173 Return
}


func_3940(var_403_bool)
{
	var_405_int = 0; // 0xf65 PushV
	func_3677(var_405_int); // 0xf66 NEW_2
	var_410_int = 12; // 0xf68 PushI
	var_411_bool = var_405_int >= var_410_int; // 0xf69 GE
	if(var_411_bool == 0) goto Label_3949; // 0xf6a JumpB
	var_403_bool = 1; // 0xf6b MovB
	return 0; // 0xf6c Return
	
Label_3949:
	var_403_bool = 0; // 0xf6d MovB
	return 0; // 0xf6e Return
}


func_2414(var_34_cvector, var_35_float)
{
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_float = 0; // 0x96e PushV
	GetPosition(var_42_cvector); // 0x96f Func
	GetPosition(var_43_cvector); // 0x971 TObjFunc
	GetDirection(var_44_cvector); // 0x973 Func
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0x975 PushV
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); // 0x976 PushV
	var_51_cvector = var_42_cvector - var_43_cvector; // 0x977 Sub2
	func_3603(var_50_cvector, var_51_cvector); // 0x978 NEW_2
	var_57_float = 0.75; // 0x97a PushF
	var_58_float = var_44_cvector * var_57_float; // 0x97b Mult
	var_49_cvector = var_50_cvector + var_58_float; // 0x97c Add2
	func_3603(var_48_cvector, var_49_cvector); // 0x97d NEW_2
	var_45_cvector = var_48_cvector; // 0x97e Mov
	var_59_int = 32; // 0x980 PushI
	var_60_float = 7000.0; // 0x981 PushF
	FindLongestDir(var_46_cvector, var_47_float, var_45_cvector, var_35_float, var_59_int, var_60_float); // 0x982 Func
	var_61_int = 100; // 0x984 PushI
	var_47_float = var_47_float - var_61_int; // 0x985 Sub2
	var_62_int = 0; // 0x986 PushI
	var_63_bool = var_47_float < var_62_int; // 0x987 LT
	if(var_63_bool == 0) goto Label_2442; // 0x988 JumpB
	var_47_float = 0; // 0x989 MovI
	
Label_2442:
	var_34_cvector = var_46_cvector * var_47_float; // 0x98a Mult2
	return 12; // 0x98b Return
}


func_3951(var_108_int)
{
	var_109_int = 0; var_110_int = 0; // 0xf6f PushV
	var_111_string = "branch"; // 0xf70 PushS
	GetVariable(var_111_string, var_110_int); // 0xf71 Func
	var_112_int = 0; // 0xf73 PushI
	var_113_bool = var_110_int == var_112_int; // 0xf74 Eq
	if(var_113_bool == 0) goto Label_3961; // 0xf75 JumpB
	var_108_int = 1; // 0xf76 MovI
	return 2; // 0xf77 Return
	
Label_3961:
	var_114_int = 1; // 0xf79 PushI
	var_115_bool = var_110_int == var_114_int; // 0xf7a Eq
	if(var_115_bool == 0) goto Label_3966; // 0xf7b JumpB
	var_108_int = 2; // 0xf7c MovI
	return 2; // 0xf7d Return
	
Label_3966:
	var_108_int = 3; // 0xf7e MovI
	return 2; // 0xf7f Return
}


func_4468(var_32_string)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x1174 PushV
	var_35_string = "heal"; // 0x1175 PushS
	var_36_bool = var_32_string == var_35_string; // 0x1176 Eq
	if(var_36_bool == 0) goto Label_4480; // 0x1177 JumpB
	var_37_string = "player"; // 0x1178 PushS
	FindActor(var_34_object, var_37_string); // 0x1179 Func
	var_38_object = Obj(); // 0x117b PushV
	var_38_object = var_34_object; // 0x117c Mov
	func_4689(); // 0x117d NEW_2
	var_34_object = 0; // 0x117f SetNull
	
Label_4480:
	return 2; // 0x1180 Return
}


func_3968(var_227_int)
{
	var_228_int = 0; var_229_int = 0; // 0xf80 PushV
	var_230_string = "branch"; // 0xf81 PushS
	GetVariable(var_230_string, var_229_int); // 0xf82 Func
	var_227_int = var_229_int; // 0xf84 Mov
	return 2; // 0xf85 Return
}


func_4481(var_29_int)
{
	var_31_bool = 0; // 0x1182 PushV
	func_4942(var_31_bool); // 0x1183 NEW_2
	if(var_31_bool == 0) goto Label_4488; // 0x1185 JumpB
	var_29_int = 2; // 0x1186 MovI
	goto Label_4489; // 0x1187 Jump
	
Label_4489:
	return 0; // 0x1189 Return
	
Label_4488:
	var_29_int = 0; // 0x1188 MovI
}


func_2950(var_2_object)
{
	Stop(); // 0xb86 Func
	var_21_int = 120; // 0xb88 PushI
	KillTimer(var_21_int); // 0xb89 Func
	var_2_object = 1; // 0xb8b TMovB
	return 0; // 0xb8c Return
}


func_3974(var_552_int)
{
	var_554_int = 0; var_555_int = 0; // 0xf86 PushV
	GetItemID(var_555_int); // 0xf87 ObjFunc
	var_552_int = var_555_int; // 0xf89 Mov
	return 2; // 0xf8a Return
}


func_4490(var_38_object)
{
	var_39_object = Obj(); // 0x118b PushV
	var_39_object = var_38_object; // 0x118c Mov
	TaskCall(4); // 0x118d TaskCall
	func_2104(var_40_object, var_39_object); // 0x118e NEW_2
	TaskReturn(); // 0x118f TaskReturn
	return 0; // 0x1191 Return
}


func_3979(var_529_int, var_530_object, var_531_int)
{
	var_532_int = 0; var_533_int = 0; var_534_int = 0; var_535_string = ""; var_536_bool = 0; var_537_bool = 0; var_538_int = 0; var_539_int = 0; var_540_int = 0; var_541_int = 0; var_542_string = ""; var_543_bool = 0; var_544_bool = 0; var_545_int = 0; // 0xf8b PushV
	var_546_int = 0; // 0xf8c PushI
	var_547_bool = var_531_int == var_546_int; // 0xf8d Eq
	if(var_547_bool == 0) goto Label_4016; // 0xf8e JumpB
	var_548_int = 0; // 0xf8f PushV
	func_3668(var_548_int); // 0xf90 NEW_2
	var_539_int = var_548_int; // 0xf91 Mov
	var_540_int = 0; // 0xf93 MovI
	var_541_int = 1; // 0xf94 MovI
	
Label_3989:
	var_549_bool = var_541_int <= var_539_int; // 0xf95 LE
	if(var_549_bool == 0) goto Label_4014; // 0xf96 JumpB
	var_542_string = "Price"; // 0xf97 MovS
	var_550_int = 1; // 0xf98 PushI
	var_551_bool = var_541_int != var_550_int; // 0xf99 Neq
	if(var_551_bool == 0) goto Label_3996; // 0xf9a JumpB
	var_542_string = var_542_string + var_541_int; // 0xf9b Add2
	
Label_3996:
	var_552_int = 0; var_553_object = Obj(); // 0xf9c PushV
	var_553_object = var_530_object; // 0xf9d Mov
	func_3974(var_553_object); // 0xf9e NEW_2
	HasInvItemProperty(var_543_bool, var_552_int, var_542_string); // 0xfa0 Func
	var_556_bool = var_543_bool == 0; // 0xfa2 Not
	if(var_556_bool == 0) goto Label_4005; // 0xfa3 JumpB
	goto Label_4011; // 0xfa4 Jump
	
Label_4011:
	var_557_int = 1; // 0xfab PushI
	var_541_int = var_541_int + var_557_int; // 0xfac Add2
	goto Label_3989; // 0xfad Jump
	
Label_4005:
	var_558_int = 0; var_559_object = Obj(); // 0xfa5 PushV
	var_559_object = var_530_object; // 0xfa6 Mov
	func_3974(var_559_object); // 0xfa7 NEW_2
	GetInvItemProperty(var_540_int, var_558_int, var_542_string); // 0xfa9 Func
	
Label_4014:
	var_529_int = var_540_int; // 0xfae Mov
	return 14; // 0xfaf Return
	
Label_4016:
	var_560_int = 0; var_561_object = Obj(); // 0xfb0 PushV
	var_561_object = var_530_object; // 0xfb1 Mov
	func_3974(var_561_object); // 0xfb2 NEW_2
	var_562_string = "BarterPrice"; // 0xfb4 PushS
	var_563_int = var_562_string + var_531_int; // 0xfb5 Add
	HasInvItemProperty(var_544_bool, var_560_int, var_563_int); // 0xfb6 Func
	var_564_bool = var_544_bool == 0; // 0xfb8 Not
	if(var_564_bool == 0) goto Label_4028; // 0xfb9 JumpB
	var_529_int = 0; // 0xfba MovI
	return 14; // 0xfbb Return
	
Label_4028:
	var_565_int = 0; var_566_object = Obj(); // 0xfbc PushV
	var_566_object = var_530_object; // 0xfbd Mov
	func_3974(var_566_object); // 0xfbe NEW_2
	var_567_string = "BarterPrice"; // 0xfc0 PushS
	var_568_int = var_567_string + var_531_int; // 0xfc1 Add
	GetInvItemProperty(var_545_int, var_565_int, var_568_int); // 0xfc2 Func
	var_569_int = 0; // 0xfc4 PushI
	var_570_bool = var_545_int > var_569_int; // 0xfc5 GT
	if(var_570_bool == 0) goto Label_4041; // 0xfc6 JumpB
	var_529_int = var_545_int; // 0xfc7 Mov
	return 14; // 0xfc8 Return
	
Label_4041:
	var_529_int = -var_545_int; // 0xfc9 Neg2
	return 14; // 0xfca Return
}


func_2444(var_0_object, var_1_object, var_2_object, var_83_object)
{
	var_84_cvector = CVector(0,0,0); var_85_float = 0; var_86_bool = 0; var_87_cvector = CVector(0,0,0); var_88_float = 0; var_89_cvector = CVector(0,0,0); var_90_float = 0; var_91_bool = 0; var_92_cvector = CVector(0,0,0); var_93_float = 0; // 0x98c PushV
	var_0_object = var_83_object; // 0x98d TMov
	var_94_cvector = CVector(0,0,0); var_95_float = 0; // 0x98e PushV
	var_95_float = 1.74533; // 0x98f MovF
	func_2414(var_94_cvector, var_95_float); // 0x990 NEW_2
	var_89_cvector = var_94_cvector; // 0x991 Mov
	var_90_float = var_89_cvector | var_89_cvector; // 0x993 Or2
	var_124_float = 2500.0; // 0x994 PushF
	var_125_bool = var_90_float < var_124_float; // 0x995 LT
	if(var_125_bool == 0) goto Label_2473; // 0x996 JumpB
	var_126_cvector = CVector(0,0,0); var_127_float = 0; // 0x997 PushV
	var_127_float = 2.61799; // 0x998 MovF
	func_2414(var_126_cvector, var_127_float); // 0x999 NEW_2
	var_89_cvector = var_126_cvector; // 0x99a Mov
	var_90_float = var_89_cvector | var_89_cvector; // 0x99c Or2
	var_128_float = 2500.0; // 0x99d PushF
	var_129_bool = var_90_float < var_128_float; // 0x99e LT
	if(var_129_bool == 0) goto Label_2473; // 0x99f JumpB
	var_130_string = "Can't retreat, distance: "; // 0x9a0 PushS
	var_131_float = sqrt(var_90_float); // 0x9a1 Sqrt
	var_132_int = var_130_string + var_131_float; // 0x9a2 Add
	Trace(var_132_int); // 0x9a3 Func
	var_133_float = 0.5; // 0x9a5 PushF
	Sleep(var_133_float); // 0x9a6 Func
	return 10; // 0x9a8 Return
	
Label_2473:
	var_134_float = GetByIndex(var_89_cvector, 0); // 0x9a9 PushE
	var_135_float = GetByIndex(var_89_cvector, 2); // 0x9aa PushE
	Rotate(var_134_float, var_135_float); // 0x9ab Func
	var_136_cvector = CVector(0,0,0); // 0x9ad PushV
	func_3176(var_136_cvector); // 0x9ae NEW_2
	var_1_object = var_136_cvector + var_89_cvector; // 0x9b0 Add2
	var_139_int = 120; // 0x9b1 PushI
	var_140_float = 0.5; // 0x9b2 PushF
	SetTimer(var_139_int, var_140_float); // 0x9b3 Func
	var_2_object = 0; // 0x9b5 TMovB
	
Label_2486:
	var_141_int = 1; // 0x9b6 PushI
	MovePoint(var_141_int, var_141_int, var_91_bool); // 0x9b7 Func
	var_142_bool = var_91_bool; // 0x9b9 Push
	if(var_142_bool == 0) goto Label_2514; // 0x9ba JumpB
	var_143_bool = var_0_object == 0; // 0x9bb NullEq
	if(var_143_bool == 0) goto Label_2495; // 0x9bc JumpB
	goto Label_2516; // 0x9bd Jump
	
Label_2516:
	return 10; // 0x9d4 Return
	
Label_2495:
	var_144_cvector = CVector(0,0,0); var_145_float = 0; // 0x9bf PushV
	var_145_float = 2.61799; // 0x9c0 MovF
	func_2414(var_144_cvector, var_145_float); // 0x9c1 NEW_2
	var_92_cvector = var_144_cvector; // 0x9c2 Mov
	var_93_float = var_92_cvector | var_92_cvector; // 0x9c4 Or2
	var_146_float = 2500.0; // 0x9c5 PushF
	var_147_bool = var_93_float >= var_146_float; // 0x9c6 GE
	if(var_147_bool == 0) goto Label_2513; // 0x9c7 JumpB
	var_148_cvector = CVector(0,0,0); // 0x9c8 PushV
	func_3176(var_148_cvector); // 0x9c9 NEW_2
	var_1_object = var_148_cvector + var_92_cvector; // 0x9cb Add2
	var_149_int = 120; // 0x9cc PushI
	var_150_float = 0.5; // 0x9cd PushF
	SetTimer(var_149_int, var_150_float); // 0x9ce Func
	goto Label_2514; // 0x9d0 Jump
	
Label_2514:
	var_151_bool = var_2_object == 0; // 0x9d2 Not
	if(var_151_bool == 0) goto Label_2486; // 0x9d3 JumpB
	
Label_2513:
	goto Label_2516; // 0x9d1 Jump
}


func_4498(var_29_int, var_30_object)
{
	var_31_bool = 0; var_32_object = Obj(); // 0x1193 PushV
	var_32_object = var_30_object; // 0x1194 Mov
	func_3254(var_31_bool, var_32_object); // 0x1195 NEW_2
	if(var_31_bool == 0) goto Label_4506; // 0x1197 JumpB
	var_29_int = 2; // 0x1198 MovI
	goto Label_4507; // 0x1199 Jump
	
Label_4507:
	return 0; // 0x119b Return
	
Label_4506:
	var_29_int = 0; // 0x119a MovI
}


func_2966(var_0_object, var_72_bool)
{
	var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); // 0xb96 PushV
	GetDirection(var_75_cvector); // 0xb97 Func
	var_77_cvector = CVector(0,0,0); var_78_object = Obj(); // 0xb99 PushV
	var_78_object = var_0_object; // 0xb9a MovT
	func_3181(var_78_object); // 0xb9b NEW_2
	var_76_cvector = var_77_cvector; // 0xb9c Mov
	var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); // 0xb9e PushV
	var_84_cvector = var_75_cvector; // 0xb9f Mov
	var_85_cvector = var_76_cvector; // 0xba0 Mov
	func_3619(var_83_float, var_84_cvector, var_85_cvector); // 0xba1 NEW_2
	var_91_float = -0.34202; // 0xba3 PushF
	var_72_bool = var_83_float >= var_91_float; // 0xba4 GE2
	return 4; // 0xba5 Return
}


func_4508(var_72_object)
{
	var_73_object = Obj(); // 0x119d PushV
	var_73_object = var_72_object; // 0x119e Mov
	TaskCall(5); // 0x119f TaskCall
	func_2379(var_73_object); // 0x11a0 NEW_2
	TaskReturn(); // 0x11a1 TaskReturn
	return 0; // 0x11a3 Return
}


func_3489()
{
	var_442_bool = 0; var_443_bool = 0; // 0xda1 PushV
	var_444_bool = 1; // 0xda2 PushB
	CameraSwitchToNormal(var_444_bool); // 0xda3 Func
	var_445_bool = 0; // 0xda5 PushV
	func_4884(var_445_bool); // 0xda6 NEW_2
	if(var_445_bool == 0) goto Label_3498; // 0xda8 JumpB
	goto Label_3506; // 0xda9 Jump
	
Label_3506:
	return 2; // 0xdb2 Return
	
Label_3498:
	var_446_string = "head"; // 0xdaa PushS
	HasAnimationTrack(var_443_bool, var_446_string); // 0xdab Func
	var_447_bool = var_443_bool; // 0xdad Push
	if(var_447_bool == 0) goto Label_3506; // 0xdae JumpB
	var_448_string = "head"; // 0xdaf PushS
	UnlookAsync(var_448_string); // 0xdb0 Func
}


func_4516(var_74_int, var_75_object)
{
	var_77_bool = 0; var_78_object = Obj(); // 0x11a5 PushV
	var_78_object = var_75_object; // 0x11a6 Mov
	func_3254(var_77_bool, var_78_object); // 0x11a7 NEW_2
	if(var_77_bool == 0) goto Label_4524; // 0x11a9 JumpB
	var_74_int = 2; // 0x11aa MovI
	goto Label_4525; // 0x11ab Jump
	
Label_4525:
	return 0; // 0x11ad Return
	
Label_4524:
	var_74_int = 0; // 0x11ac MovI
}


func_2989(var_34_cvector, var_35_float)
{
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_float = 0; // 0xbad PushV
	GetPosition(var_42_cvector); // 0xbae Func
	GetPosition(var_43_cvector); // 0xbb0 TObjFunc
	GetDirection(var_44_cvector); // 0xbb2 Func
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0xbb4 PushV
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); // 0xbb5 PushV
	var_51_cvector = var_42_cvector - var_43_cvector; // 0xbb6 Sub2
	func_3603(var_50_cvector, var_51_cvector); // 0xbb7 NEW_2
	var_57_float = 0.75; // 0xbb9 PushF
	var_58_float = var_44_cvector * var_57_float; // 0xbba Mult
	var_49_cvector = var_50_cvector + var_58_float; // 0xbbb Add2
	func_3603(var_48_cvector, var_49_cvector); // 0xbbc NEW_2
	var_45_cvector = var_48_cvector; // 0xbbd Mov
	var_59_int = 32; // 0xbbf PushI
	var_60_float = 7000.0; // 0xbc0 PushF
	FindLongestDir(var_46_cvector, var_47_float, var_45_cvector, var_35_float, var_59_int, var_60_float); // 0xbc1 Func
	var_61_int = 100; // 0xbc3 PushI
	var_47_float = var_47_float - var_61_int; // 0xbc4 Sub2
	var_62_int = 0; // 0xbc5 PushI
	var_63_bool = var_47_float < var_62_int; // 0xbc6 LT
	if(var_63_bool == 0) goto Label_3017; // 0xbc7 JumpB
	var_47_float = 0; // 0xbc8 MovI
	
Label_3017:
	var_34_cvector = var_46_cvector * var_47_float; // 0xbc9 Mult2
	return 12; // 0xbca Return
}


func_4526(var_111_object)
{
	var_112_object = Obj(); // 0x11af PushV
	var_112_object = var_111_object; // 0x11b0 Mov
	TaskCall(6); // 0x11b1 TaskCall
	func_2631(var_113_object, var_114_cvector, var_115_bool, var_112_object); // 0x11b2 NEW_2
	TaskReturn(); // 0x11b3 TaskReturn
	return 0; // 0x11b5 Return
}


func_3507(var_364_string)
{
	var_365_bool = 0; var_366_float = 0; var_367_float = 0; var_368_bool = 0; var_369_float = 0; var_370_float = 0; // 0xdb3 PushV
	lshHasAnimation(var_368_bool, var_364_string); // 0xdb4 Func
	var_371_bool = var_368_bool; // 0xdb6 Push
	if(var_371_bool == 0) goto Label_3518; // 0xdb7 JumpB
	lshGetAnimTimes(var_364_string, var_369_float, var_370_float); // 0xdb8 Func
	var_372_bool = 0; // 0xdba PushB
	lshPlayAnimation(var_369_float, var_370_float, var_372_bool); // 0xdbb Func
	goto Label_3522; // 0xdbd Jump
	
Label_3522:
	return 6; // 0xdc2 Return
	
Label_3518:
	var_373_string = "Can't find lsh animation : "; // 0xdbe PushS
	var_374_int = var_373_string + var_364_string; // 0xdbf Add
	Trace(var_374_int); // 0xdc0 Func
}


func_4534(var_29_bool, var_30_object, var_31_object, var_32_float)
{
	var_33_string = ""; var_34_bool = 0; var_35_string = ""; var_36_bool = 0; // 0x11b6 PushV
	var_37_bool = 0; var_38_object = Obj(); var_39_string = ""; // 0x11b7 PushV
	var_38_object = var_31_object; // 0x11b8 Mov
	var_39_string = "class"; // 0x11b9 MovS
	func_3201(var_37_bool, var_38_object, var_39_string); // 0x11ba NEW_2
	var_46_bool = var_37_bool == 0; // 0x11bc Not
	if(var_46_bool == 0) goto Label_4544; // 0x11bd JumpB
	var_29_bool = 0; // 0x11be MovB
	return 4; // 0x11bf Return
	
Label_4544:
	var_47_string = "class"; // 0x11c0 PushS
	GetProperty(var_47_string, var_35_string); // 0x11c1 ObjFunc
	var_48_string = "rat"; // 0x11c3 PushS
	var_49_bool = var_35_string == var_48_string; // 0x11c4 Eq
	if(var_49_bool == 0) goto Label_4553; // 0x11c5 JumpB
	var_29_bool = 0; // 0x11c6 MovB
	return 4; // 0x11c7 Return
	
Label_4553:
	var_50_string = "rat_big"; // 0x11c9 PushS
	var_51_bool = var_35_string == var_50_string; // 0x11ca Eq
	if(var_51_bool == 0) goto Label_4559; // 0x11cb JumpB
	var_29_bool = 0; // 0x11cc MovB
	return 4; // 0x11cd Return
	
Label_4559:
	var_52_string = "dog"; // 0x11cf PushS
	var_53_bool = var_35_string == var_52_string; // 0x11d0 Eq
	if(var_53_bool == 0) goto Label_4564; // 0x11d1 JumpB
	var_29_bool = 0; // 0x11d2 MovB
	return 4; // 0x11d3 Return
	
Label_4564:
	CanSee(var_36_bool, var_30_object); // 0x11d4 Func
	var_54_bool = 0; // 0x11d6 PushV
	var_54_bool = 1; // 0x11d7 MovB
	var_55_bool = var_36_bool; // 0x11d8 Push
	if(var_55_bool == 0) goto Label_4578; // 0x11d9 JumpB
	var_56_float = 0; var_57_object = Obj(); // 0x11da PushV
	var_57_object = var_30_object; // 0x11db Mov
	func_3188(var_57_object); // 0x11dc NEW_2
	var_64_float = var_32_float * var_32_float; // 0x11de Mult
	var_65_bool = var_56_float <= var_64_float; // 0x11df LE
	if(var_65_bool == 0) goto Label_4578; // 0x11e0 JumpB
	var_54_bool = 0; // 0x11e1 MovB
	
Label_4578:
	if(var_54_bool == 0) goto Label_4581; // 0x11e2 JumpB
	var_29_bool = 1; // 0x11e3 MovB
	return 4; // 0x11e4 Return
	
Label_4581:
	CanSee(var_36_bool, var_31_object); // 0x11e5 Func
	var_66_bool = 0; // 0x11e7 PushV
	var_66_bool = 1; // 0x11e8 MovB
	var_67_bool = var_36_bool; // 0x11e9 Push
	if(var_67_bool == 0) goto Label_4595; // 0x11ea JumpB
	var_68_float = 0; var_69_object = Obj(); // 0x11eb PushV
	var_69_object = var_31_object; // 0x11ec Mov
	func_3188(var_69_object); // 0x11ed NEW_2
	var_70_float = var_32_float * var_32_float; // 0x11ef Mult
	var_71_bool = var_68_float <= var_70_float; // 0x11f0 LE
	if(var_71_bool == 0) goto Label_4595; // 0x11f1 JumpB
	var_66_bool = 0; // 0x11f2 MovB
	
Label_4595:
	if(var_66_bool == 0) goto Label_4598; // 0x11f3 JumpB
	var_29_bool = 1; // 0x11f4 MovB
	return 4; // 0x11f5 Return
	
Label_4598:
	var_29_bool = 0; // 0x11f6 MovB
	return 4; // 0x11f7 Return
}


func_3523(var_136_string, var_137_bool)
{
	var_140_bool = 0; var_141_float = 0; var_142_float = 0; var_143_bool = 0; var_144_float = 0; var_145_float = 0; // 0xdc3 PushV
	lshHasAnimation(var_143_bool, var_136_string); // 0xdc4 Func
	var_146_bool = var_143_bool; // 0xdc6 Push
	if(var_146_bool == 0) goto Label_3533; // 0xdc7 JumpB
	lshGetAnimTimes(var_136_string, var_144_float, var_145_float); // 0xdc8 Func
	lshPlayAnimation(var_144_float, var_145_float, var_137_bool); // 0xdca Func
	goto Label_3537; // 0xdcc Jump
	
Label_3537:
	return 6; // 0xdd1 Return
	
Label_3533:
	var_147_string = "Can't find lsh animation : "; // 0xdcd PushS
	var_148_int = var_147_string + var_136_string; // 0xdce Add
	Trace(var_148_int); // 0xdcf Func
}


func_3019(var_0_object, var_1_object, var_2_object, var_138_object)
{
	var_142_cvector = CVector(0,0,0); var_143_float = 0; var_144_bool = 0; var_145_cvector = CVector(0,0,0); var_146_float = 0; var_147_cvector = CVector(0,0,0); var_148_float = 0; var_149_bool = 0; var_150_cvector = CVector(0,0,0); var_151_float = 0; // 0xbcb PushV
	var_0_object = var_138_object; // 0xbcc TMov
	var_152_cvector = CVector(0,0,0); var_153_float = 0; // 0xbcd PushV
	var_153_float = 1.74533; // 0xbce MovF
	func_2989(var_152_cvector, var_153_float); // 0xbcf NEW_2
	var_147_cvector = var_152_cvector; // 0xbd0 Mov
	var_148_float = var_147_cvector | var_147_cvector; // 0xbd2 Or2
	var_177_float = 2500.0; // 0xbd3 PushF
	var_178_bool = var_148_float < var_177_float; // 0xbd4 LT
	if(var_178_bool == 0) goto Label_3048; // 0xbd5 JumpB
	var_179_cvector = CVector(0,0,0); var_180_float = 0; // 0xbd6 PushV
	var_180_float = 2.61799; // 0xbd7 MovF
	func_2989(var_179_cvector, var_180_float); // 0xbd8 NEW_2
	var_147_cvector = var_179_cvector; // 0xbd9 Mov
	var_148_float = var_147_cvector | var_147_cvector; // 0xbdb Or2
	var_181_float = 2500.0; // 0xbdc PushF
	var_182_bool = var_148_float < var_181_float; // 0xbdd LT
	if(var_182_bool == 0) goto Label_3048; // 0xbde JumpB
	var_183_string = "Can't retreat, distance: "; // 0xbdf PushS
	var_184_float = sqrt(var_148_float); // 0xbe0 Sqrt
	var_185_int = var_183_string + var_184_float; // 0xbe1 Add
	Trace(var_185_int); // 0xbe2 Func
	var_186_float = 0.5; // 0xbe4 PushF
	Sleep(var_186_float); // 0xbe5 Func
	return 10; // 0xbe7 Return
	
Label_3048:
	var_187_float = GetByIndex(var_147_cvector, 0); // 0xbe8 PushE
	var_188_float = GetByIndex(var_147_cvector, 2); // 0xbe9 PushE
	Rotate(var_187_float, var_188_float); // 0xbea Func
	var_189_cvector = CVector(0,0,0); // 0xbec PushV
	func_3176(var_189_cvector); // 0xbed NEW_2
	var_1_object = var_189_cvector + var_147_cvector; // 0xbef Add2
	var_190_int = 120; // 0xbf0 PushI
	var_191_float = 0.5; // 0xbf1 PushF
	SetTimer(var_190_int, var_191_float); // 0xbf2 Func
	var_2_object = 0; // 0xbf4 TMovB
	
Label_3061:
	var_192_int = 1; // 0xbf5 PushI
	MovePoint(var_192_int, var_192_int, var_149_bool); // 0xbf6 Func
	var_193_bool = var_149_bool; // 0xbf8 Push
	if(var_193_bool == 0) goto Label_3089; // 0xbf9 JumpB
	var_194_bool = var_0_object == 0; // 0xbfa NullEq
	if(var_194_bool == 0) goto Label_3070; // 0xbfb JumpB
	goto Label_3091; // 0xbfc Jump
	
Label_3091:
	return 10; // 0xc13 Return
	
Label_3070:
	var_195_cvector = CVector(0,0,0); var_196_float = 0; // 0xbfe PushV
	var_196_float = 2.61799; // 0xbff MovF
	func_2989(var_195_cvector, var_196_float); // 0xc00 NEW_2
	var_150_cvector = var_195_cvector; // 0xc01 Mov
	var_151_float = var_150_cvector | var_150_cvector; // 0xc03 Or2
	var_197_float = 2500.0; // 0xc04 PushF
	var_198_bool = var_151_float >= var_197_float; // 0xc05 GE
	if(var_198_bool == 0) goto Label_3088; // 0xc06 JumpB
	var_199_cvector = CVector(0,0,0); // 0xc07 PushV
	func_3176(var_199_cvector); // 0xc08 NEW_2
	var_1_object = var_199_cvector + var_150_cvector; // 0xc0a Add2
	var_200_int = 120; // 0xc0b PushI
	var_201_float = 0.5; // 0xc0c PushF
	SetTimer(var_200_int, var_201_float); // 0xc0d Func
	goto Label_3089; // 0xc0f Jump
	
Label_3089:
	var_202_bool = var_2_object == 0; // 0xc11 Not
	if(var_202_bool == 0) goto Label_3061; // 0xc12 JumpB
	
Label_3088:
	goto Label_3091; // 0xc10 Jump
}


func_4043(var_37_object)
{
	var_38_int = 0; // 0xfcc PushV
	func_3968(var_38_int); // 0xfcd NEW_2
	var_42_int = 1; // 0xfcf PushI
	var_43_bool = var_38_int == var_42_int; // 0xfd0 Eq
	if(var_43_bool == 0) goto Label_4053; // 0xfd1 JumpB
	WorkWithCorpse(var_37_object); // 0xfd2 Func
	goto Label_4055; // 0xfd4 Jump
	
Label_4055:
	return 0; // 0xfd7 Return
	
Label_4053:
	Barter(var_37_object); // 0xfd5 Func
}


func_3538(var_47_object)
{
	var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_float = 0; var_51_cvector = CVector(0,0,0); // 0xdd2 PushV
	GetEyesHeight(var_50_float); // 0xdd3 ObjFunc
	var_51_cvector = CVector(0.0, 0.0, 0.0); // 0xdd5 MovV
	var_52_float = GetByIndex(var_51_cvector, 1); // 0xdd6 PushE
	var_52_float = var_50_float; // 0xdd7 Mov
	SetByIndex(var_51_cvector, 1) = var_52_float; // 0xdd8 PopE
	var_53_string = "head"; // 0xdd9 PushS
	LookAsync(var_47_object, var_53_string, var_51_cvector); // 0xdda Func
	return 4; // 0xddc Return
}


func_4056(var_32_int, var_33_int)
{
	var_43_int = 0; var_44_bool = 0; var_45_int = 0; var_46_bool = 0; // 0xfd8 PushV
	var_47_bool = var_32_int > var_33_int; // 0xfd9 GT
	if(var_47_bool == 0) goto Label_4063; // 0xfda JumpB
	var_48_string = "GenerateMoney: iMin > iMax"; // 0xfdb PushS
	Trace(var_48_string); // 0xfdc Func
	return 4; // 0xfde Return
	
Label_4063:
	var_45_int = 0; // 0xfdf MovI
	var_49_bool = var_32_int != var_33_int; // 0xfe0 Neq
	if(var_49_bool == 0) goto Label_4070; // 0xfe1 JumpB
	var_50_int = var_33_int - var_32_int; // 0xfe2 Sub
	irand(var_45_int, var_50_int); // 0xfe3 Func
	goto Label_4074; // 0xfe5 Jump
	
Label_4074:
	var_45_int = var_45_int + var_32_int; // 0xfea Add2
	var_51_int = 0; // 0xfeb PushI
	var_52_bool = var_45_int == var_51_int; // 0xfec Eq
	if(var_52_bool == 0) goto Label_4079; // 0xfed JumpB
	return 4; // 0xfee Return
	
Label_4079:
	var_53_int = 0; var_54_string = ""; // 0xfef PushV
	var_54_string = "Money"; // 0xff0 MovS
	func_4303(var_53_int, var_54_string); // 0xff1 NEW_2
	var_57_int = 0; // 0xff3 PushI
	AddItem(var_46_bool, var_53_int, var_57_int, var_45_int); // 0xff4 Func
	return 4; // 0xff6 Return
	
Label_4070:
	var_58_int = 0; // 0xfe6 PushI
	var_59_bool = var_32_int == var_58_int; // 0xfe7 Eq
	if(var_59_bool == 0) goto Label_4074; // 0xfe8 JumpB
	return 4; // 0xfe9 Return
}


func_3549()
{
	var_23_bool = 0; // 0xddd PushV
	func_4884(var_23_bool); // 0xdde NEW_2
	if(var_23_bool == 0) goto Label_3555; // 0xde0 JumpB
	lshStopSpeech(); // 0xde1 Func
	
Label_3555:
	return 0; // 0xde3 Return
}


func_3556(var_46_string)
{
	var_47_bool = 0; var_48_int = 0; var_49_bool = 0; var_50_int = 0; var_51_bool = 0; var_52_float = 0; var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_bool = 0; var_56_int = 0; var_57_bool = 0; var_58_int = 0; var_59_bool = 0; var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); // 0xde4 PushV
	IsExisting3DSound(var_55_bool, var_46_string); // 0xde5 Func
	var_63_bool = var_55_bool == 0; // 0xde7 Not
	if(var_63_bool == 0) goto Label_3581; // 0xde8 JumpB
	var_56_int = 0; // 0xde9 MovI
	
Label_3562:
	var_64_int = 1; // 0xdea PushI
	var_65_int = var_56_int + var_64_int; // 0xdeb Add
	var_66_int = var_46_string + var_65_int; // 0xdec Add
	IsExisting3DSound(var_57_bool, var_66_int); // 0xded Func
	var_67_bool = var_57_bool == 0; // 0xdef Not
	if(var_67_bool == 0) goto Label_3570; // 0xdf0 JumpB
	goto Label_3573; // 0xdf1 Jump
	
Label_3573:
	var_68_bool = var_56_int == 0; // 0xdf5 Not
	if(var_68_bool == 0) goto Label_3576; // 0xdf6 JumpB
	return 16; // 0xdf7 Return
	
Label_3576:
	irand(var_58_int, var_56_int); // 0xdf8 Func
	var_69_int = 1; // 0xdfa PushI
	var_70_int = var_58_int + var_69_int; // 0xdfb Add
	var_46_string = var_46_string + var_70_int; // 0xdfc Add2
	
Label_3581:
	Is3DSoundLoaded(var_59_bool, var_46_string); // 0xdfd Func
	var_71_bool = var_59_bool; // 0xdff Push
	if(var_71_bool == 0) goto Label_3596; // 0xe00 JumpB
	GetEyesHeight(var_60_float); // 0xe01 Func
	GetDirection(var_61_cvector); // 0xe03 Func
	var_72_int = 50; // 0xe05 PushI
	var_62_cvector = var_61_cvector * var_72_int; // 0xe06 Mult2
	var_73_float = GetByIndex(var_62_cvector, 1); // 0xe07 PushE
	var_73_float = var_73_float + var_60_float; // 0xe08 Add2
	SetByIndex(var_62_cvector, 1) = var_73_float; // 0xe09 PopE
	PlayGlobalSound(var_46_string, var_62_cvector); // 0xe0a Func
	
Label_3596:
	return 16; // 0xe0c Return
	
Label_3570:
	var_74_int = 1; // 0xdf2 PushI
	var_56_int = var_56_int + var_74_int; // 0xdf3 Add2
	goto Label_3562; // 0xdf4 Jump
}


func_4087(var_233_string)
{
	var_234_object = Obj(); var_235_int = 0; var_236_bool = 0; var_237_object = Obj(); var_238_int = 0; var_239_bool = 0; // 0xff7 PushV
	CreateInvItem(var_237_object); // 0xff8 Func
	SetItemName(var_233_string); // 0xffa ObjFunc
	var_240_string = "Organ"; // 0xffc PushS
	var_241_int = 1; // 0xffd PushI
	SetProperty(var_240_string, var_241_int); // 0xffe ObjFunc
	GetItemID(var_238_int); // 0x1000 ObjFunc
	var_242_int = 0; // 0x1002 PushI
	var_243_int = 1; // 0x1003 PushI
	AddItem(var_239_bool, var_237_object, var_242_int, var_243_int); // 0x1004 Func
	return 6; // 0x1006 Return
}


func_4600(var_23_int)
{
	var_23_int = 2; // 0x11f9 MovI
	return 0; // 0x11fa Return
}


func_4603(var_31_object)
{
	var_32_object = Obj(); // 0x11fc PushV
	var_32_object = var_31_object; // 0x11fd Mov
	func_4894(var_32_object); // 0x11fe NEW_2
	return 0; // 0x1200 Return
}


