task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 1; // 0x2a0 PushI
	if(var_23_int == 0) goto Label_1656; // 0x2a1 JumpB
	func_3877(); // 0x2a3 NEW_2
	var_25_int = 45638; // 0x2a5 PushI
	var_26_bool = var_22_bool == var_25_int; // 0x2a6 Eq
	if(var_26_bool == 0) goto Label_685; // 0x2a7 JumpB
	var_27_object = Obj(); var_28_object = Obj(); // 0x2a8 PushV
	var_27_object = var_1_object; // 0x2a9 MovT
	var_28_object = var_0_object; // 0x2aa MovT
	func_4013(); // 0x2ab NEW_2
	
Label_685:
	var_30_int = 45639; // 0x2ad PushI
	var_31_bool = var_22_bool == var_30_int; // 0x2ae Eq
	if(var_31_bool == 0) goto Label_693; // 0x2af JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0x2b0 PushV
	var_32_object = var_1_object; // 0x2b1 MovT
	var_33_object = var_0_object; // 0x2b2 MovT
	func_4013(); // 0x2b3 NEW_2
	
Label_693:
	var_34_int = 45643; // 0x2b5 PushI
	var_35_bool = var_22_bool == var_34_int; // 0x2b6 Eq
	if(var_35_bool == 0) goto Label_701; // 0x2b7 JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0x2b8 PushV
	var_36_object = var_1_object; // 0x2b9 MovT
	var_37_object = var_0_object; // 0x2ba MovT
	func_4013(); // 0x2bb NEW_2
	
Label_701:
	var_38_int = 45664; // 0x2bd PushI
	var_39_bool = var_22_bool == var_38_int; // 0x2be Eq
	if(var_39_bool == 0) goto Label_709; // 0x2bf JumpB
	var_40_object = Obj(); var_41_object = Obj(); // 0x2c0 PushV
	var_40_object = var_1_object; // 0x2c1 MovT
	var_41_object = var_0_object; // 0x2c2 MovT
	func_4013(); // 0x2c3 NEW_2
	
Label_709:
	var_42_int = 40043; // 0x2c5 PushI
	var_43_bool = var_22_bool == var_42_int; // 0x2c6 Eq
	if(var_43_bool == 0) goto Label_717; // 0x2c7 JumpB
	var_44_object = Obj(); var_45_object = Obj(); // 0x2c8 PushV
	var_44_object = var_1_object; // 0x2c9 MovT
	var_45_object = var_0_object; // 0x2ca MovT
	func_4013(); // 0x2cb NEW_2
	
Label_717:
	var_46_int = 45636; // 0x2cd PushI
	var_47_bool = var_21_cvector == var_46_int; // 0x2ce Eq
	if(var_47_bool == 0) goto Label_1257; // 0x2cf JumpB
	var_48_bool = 0; var_49_object = Obj(); // 0x2d0 PushV
	var_49_object = var_1_object; // 0x2d1 MovT
	func_4042(var_49_object); // 0x2d2 NEW_2
	if(var_48_bool == 0) goto Label_1152; // 0x2d4 JumpB
	var_56_string = ""; // 0x2d5 PushV
	var_56_string = "Neutral"; // 0x2d6 MovS
	func_649(var_22_bool, var_56_string); // 0x2d7 NEW_2
	var_73_int = 543180; // 0x2d9 PushI
	SetMessage(var_73_int); // 0x2da TObjFunc
	ClearReplies(); // 0x2dc TObjFunc
	var_74_bool = 0; // 0x2de PushV
	var_74_bool = 1; // 0x2df MovB
	var_75_bool = 0; // 0x2e0 PushV
	var_75_bool = 1; // 0x2e1 MovB
	var_76_bool = 0; // 0x2e2 PushV
	var_76_bool = 1; // 0x2e3 MovB
	var_77_bool = 0; var_78_object = Obj(); // 0x2e4 PushV
	var_78_object = var_1_object; // 0x2e5 MovT
	func_4054(var_77_bool, var_78_object); // 0x2e6 NEW_2
	if(var_77_bool == 0) goto Label_751; // 0x2e8 JumpB
	var_88_bool = 0; var_89_object = Obj(); // 0x2e9 PushV
	var_89_object = var_1_object; // 0x2ea MovT
	func_4074(var_88_bool, var_89_object); // 0x2eb NEW_2
	if(var_88_bool == 0) goto Label_751; // 0x2ed JumpB
	var_76_bool = 0; // 0x2ee MovB
	
Label_751:
	if(var_76_bool == 0) goto Label_758; // 0x2ef JumpB
	var_94_bool = 0; var_95_object = Obj(); // 0x2f0 PushV
	var_95_object = var_1_object; // 0x2f1 MovT
	func_4084(var_94_bool, var_95_object); // 0x2f2 NEW_2
	if(var_94_bool == 0) goto Label_758; // 0x2f4 JumpB
	var_75_bool = 0; // 0x2f5 MovB
	
Label_758:
	if(var_75_bool == 0) goto Label_765; // 0x2f6 JumpB
	var_100_bool = 0; var_101_object = Obj(); // 0x2f7 PushV
	var_101_object = var_1_object; // 0x2f8 MovT
	func_4094(var_100_bool, var_101_object); // 0x2f9 NEW_2
	if(var_100_bool == 0) goto Label_765; // 0x2fb JumpB
	var_74_bool = 0; // 0x2fc MovB
	
Label_765:
	if(var_74_bool == 0) goto Label_771; // 0x2fd JumpB
	var_106_int = 543189; // 0x2fe PushI
	var_107_int = 45648; // 0x2ff PushI
	var_108_int = 45645; // 0x300 PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x301 TObjFunc
	
Label_771:
	var_109_bool = 0; // 0x303 PushV
	var_109_bool = 1; // 0x304 MovB
	var_110_bool = 0; // 0x305 PushV
	var_110_bool = 1; // 0x306 MovB
	var_111_bool = 0; // 0x307 PushV
	var_111_bool = 1; // 0x308 MovB
	var_112_bool = 0; var_113_object = Obj(); // 0x309 PushV
	var_113_object = var_1_object; // 0x30a MovT
	func_4064(var_112_bool, var_113_object); // 0x30b NEW_2
	if(var_112_bool == 0) goto Label_788; // 0x30d JumpB
	var_118_bool = 0; var_119_object = Obj(); // 0x30e PushV
	var_119_object = var_1_object; // 0x30f MovT
	func_4104(var_118_bool, var_119_object); // 0x310 NEW_2
	if(var_118_bool == 0) goto Label_788; // 0x312 JumpB
	var_111_bool = 0; // 0x313 MovB
	
Label_788:
	if(var_111_bool == 0) goto Label_795; // 0x314 JumpB
	var_124_bool = 0; var_125_object = Obj(); // 0x315 PushV
	var_125_object = var_1_object; // 0x316 MovT
	func_4134(var_124_bool, var_125_object); // 0x317 NEW_2
	if(var_124_bool == 0) goto Label_795; // 0x319 JumpB
	var_110_bool = 0; // 0x31a MovB
	
Label_795:
	if(var_110_bool == 0) goto Label_802; // 0x31b JumpB
	var_130_bool = 0; var_131_object = Obj(); // 0x31c PushV
	var_131_object = var_1_object; // 0x31d MovT
	func_4144(var_130_bool, var_131_object); // 0x31e NEW_2
	if(var_130_bool == 0) goto Label_802; // 0x320 JumpB
	var_109_bool = 0; // 0x321 MovB
	
Label_802:
	if(var_109_bool == 0) goto Label_808; // 0x322 JumpB
	var_136_int = 543190; // 0x323 PushI
	var_137_int = 45655; // 0x324 PushI
	var_138_int = 45646; // 0x325 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x326 TObjFunc
	
Label_808:
	var_139_bool = 0; // 0x328 PushV
	var_139_bool = 1; // 0x329 MovB
	var_140_bool = 0; // 0x32a PushV
	var_140_bool = 1; // 0x32b MovB
	var_141_bool = 0; var_142_object = Obj(); // 0x32c PushV
	var_142_object = var_1_object; // 0x32d MovT
	func_4114(var_141_bool, var_142_object); // 0x32e NEW_2
	if(var_141_bool == 0) goto Label_823; // 0x330 JumpB
	var_147_bool = 0; var_148_object = Obj(); // 0x331 PushV
	var_148_object = var_1_object; // 0x332 MovT
	func_4124(var_147_bool, var_148_object); // 0x333 NEW_2
	if(var_147_bool == 0) goto Label_823; // 0x335 JumpB
	var_140_bool = 0; // 0x336 MovB
	
Label_823:
	if(var_140_bool == 0) goto Label_830; // 0x337 JumpB
	var_153_bool = 0; var_154_object = Obj(); // 0x338 PushV
	var_154_object = var_1_object; // 0x339 MovT
	func_4074(var_153_bool, var_154_object); // 0x33a NEW_2
	if(var_153_bool == 0) goto Label_830; // 0x33c JumpB
	var_139_bool = 0; // 0x33d MovB
	
Label_830:
	if(var_139_bool == 0) goto Label_836; // 0x33e JumpB
	var_155_int = 543191; // 0x33f PushI
	var_156_int = 45656; // 0x340 PushI
	var_157_int = 45647; // 0x341 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x342 TObjFunc
	
Label_836:
	var_158_bool = 0; // 0x344 PushV
	var_158_bool = 1; // 0x345 MovB
	var_159_bool = 0; // 0x346 PushV
	var_159_bool = 1; // 0x347 MovB
	var_160_bool = 0; var_161_object = Obj(); // 0x348 PushV
	var_161_object = var_1_object; // 0x349 MovT
	func_4054(var_160_bool, var_161_object); // 0x34a NEW_2
	if(var_160_bool == 0) goto Label_851; // 0x34c JumpB
	var_162_bool = 0; var_163_object = Obj(); // 0x34d PushV
	var_163_object = var_1_object; // 0x34e MovT
	func_4064(var_162_bool, var_163_object); // 0x34f NEW_2
	if(var_162_bool == 0) goto Label_851; // 0x351 JumpB
	var_159_bool = 0; // 0x352 MovB
	
Label_851:
	if(var_159_bool == 0) goto Label_858; // 0x353 JumpB
	var_164_bool = 0; var_165_object = Obj(); // 0x354 PushV
	var_165_object = var_1_object; // 0x355 MovT
	func_4074(var_164_bool, var_165_object); // 0x356 NEW_2
	if(var_164_bool == 0) goto Label_858; // 0x358 JumpB
	var_158_bool = 0; // 0x359 MovB
	
Label_858:
	if(var_158_bool == 0) goto Label_864; // 0x35a JumpB
	var_166_int = 543182; // 0x35b PushI
	var_167_int = -1; // 0x35c PushI
	var_168_int = 45638; // 0x35d PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x35e TObjFunc
	
Label_864:
	var_169_bool = 0; // 0x360 PushV
	var_169_bool = 1; // 0x361 MovB
	var_170_bool = 0; // 0x362 PushV
	var_170_bool = 1; // 0x363 MovB
	var_171_bool = 0; // 0x364 PushV
	var_171_bool = 1; // 0x365 MovB
	var_172_bool = 0; var_173_object = Obj(); // 0x366 PushV
	var_173_object = var_1_object; // 0x367 MovT
	func_4054(var_172_bool, var_173_object); // 0x368 NEW_2
	if(var_172_bool == 0) goto Label_881; // 0x36a JumpB
	var_174_bool = 0; var_175_object = Obj(); // 0x36b PushV
	var_175_object = var_1_object; // 0x36c MovT
	func_4064(var_174_bool, var_175_object); // 0x36d NEW_2
	if(var_174_bool == 0) goto Label_881; // 0x36f JumpB
	var_171_bool = 0; // 0x370 MovB
	
Label_881:
	if(var_171_bool == 0) goto Label_888; // 0x371 JumpB
	var_176_bool = 0; var_177_object = Obj(); // 0x372 PushV
	var_177_object = var_1_object; // 0x373 MovT
	func_4074(var_176_bool, var_177_object); // 0x374 NEW_2
	if(var_176_bool == 0) goto Label_888; // 0x376 JumpB
	var_170_bool = 0; // 0x377 MovB
	
Label_888:
	if(var_170_bool == 0) goto Label_895; // 0x378 JumpB
	var_178_bool = 0; var_179_object = Obj(); // 0x379 PushV
	var_179_object = var_1_object; // 0x37a MovT
	func_4084(var_178_bool, var_179_object); // 0x37b NEW_2
	if(var_178_bool == 0) goto Label_895; // 0x37d JumpB
	var_169_bool = 0; // 0x37e MovB
	
Label_895:
	if(var_169_bool == 0) goto Label_901; // 0x37f JumpB
	var_180_int = 543183; // 0x380 PushI
	var_181_int = -1; // 0x381 PushI
	var_182_int = 45639; // 0x382 PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x383 TObjFunc
	
Label_901:
	var_183_bool = 0; // 0x385 PushV
	var_183_bool = 1; // 0x386 MovB
	var_184_bool = 0; // 0x387 PushV
	var_184_bool = 1; // 0x388 MovB
	var_185_bool = 0; // 0x389 PushV
	var_185_bool = 1; // 0x38a MovB
	var_186_bool = 0; // 0x38b PushV
	var_186_bool = 1; // 0x38c MovB
	var_187_bool = 0; var_188_object = Obj(); // 0x38d PushV
	var_188_object = var_1_object; // 0x38e MovT
	func_4084(var_187_bool, var_188_object); // 0x38f NEW_2
	if(var_187_bool == 0) goto Label_920; // 0x391 JumpB
	var_189_bool = 0; var_190_object = Obj(); // 0x392 PushV
	var_190_object = var_1_object; // 0x393 MovT
	func_4094(var_189_bool, var_190_object); // 0x394 NEW_2
	if(var_189_bool == 0) goto Label_920; // 0x396 JumpB
	var_186_bool = 0; // 0x397 MovB
	
Label_920:
	if(var_186_bool == 0) goto Label_927; // 0x398 JumpB
	var_191_bool = 0; var_192_object = Obj(); // 0x399 PushV
	var_192_object = var_1_object; // 0x39a MovT
	func_4104(var_191_bool, var_192_object); // 0x39b NEW_2
	if(var_191_bool == 0) goto Label_927; // 0x39d JumpB
	var_185_bool = 0; // 0x39e MovB
	
Label_927:
	if(var_185_bool == 0) goto Label_934; // 0x39f JumpB
	var_193_bool = 0; var_194_object = Obj(); // 0x3a0 PushV
	var_194_object = var_1_object; // 0x3a1 MovT
	func_4114(var_193_bool, var_194_object); // 0x3a2 NEW_2
	if(var_193_bool == 0) goto Label_934; // 0x3a4 JumpB
	var_184_bool = 0; // 0x3a5 MovB
	
Label_934:
	if(var_184_bool == 0) goto Label_941; // 0x3a6 JumpB
	var_195_bool = 0; var_196_object = Obj(); // 0x3a7 PushV
	var_196_object = var_1_object; // 0x3a8 MovT
	func_4124(var_195_bool, var_196_object); // 0x3a9 NEW_2
	if(var_195_bool == 0) goto Label_941; // 0x3ab JumpB
	var_183_bool = 0; // 0x3ac MovB
	
Label_941:
	if(var_183_bool == 0) goto Label_947; // 0x3ad JumpB
	var_197_int = 543187; // 0x3ae PushI
	var_198_int = -1; // 0x3af PushI
	var_199_int = 45643; // 0x3b0 PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x3b1 TObjFunc
	
Label_947:
	var_200_bool = 0; // 0x3b3 PushV
	var_200_bool = 1; // 0x3b4 MovB
	var_201_bool = 0; // 0x3b5 PushV
	var_201_bool = 1; // 0x3b6 MovB
	var_202_bool = 0; // 0x3b7 PushV
	var_202_bool = 1; // 0x3b8 MovB
	var_203_bool = 0; var_204_object = Obj(); // 0x3b9 PushV
	var_204_object = var_1_object; // 0x3ba MovT
	func_4134(var_203_bool, var_204_object); // 0x3bb NEW_2
	if(var_203_bool == 0) goto Label_964; // 0x3bd JumpB
	var_205_bool = 0; var_206_object = Obj(); // 0x3be PushV
	var_206_object = var_1_object; // 0x3bf MovT
	func_4144(var_205_bool, var_206_object); // 0x3c0 NEW_2
	if(var_205_bool == 0) goto Label_964; // 0x3c2 JumpB
	var_202_bool = 0; // 0x3c3 MovB
	
Label_964:
	if(var_202_bool == 0) goto Label_971; // 0x3c4 JumpB
	var_207_bool = 0; var_208_object = Obj(); // 0x3c5 PushV
	var_208_object = var_1_object; // 0x3c6 MovT
	func_4154(var_207_bool, var_208_object); // 0x3c7 NEW_2
	if(var_207_bool == 0) goto Label_971; // 0x3c9 JumpB
	var_201_bool = 0; // 0x3ca MovB
	
Label_971:
	if(var_201_bool == 0) goto Label_978; // 0x3cb JumpB
	var_213_bool = 0; var_214_object = Obj(); // 0x3cc PushV
	var_214_object = var_1_object; // 0x3cd MovT
	func_4164(var_213_bool, var_214_object); // 0x3ce NEW_2
	if(var_213_bool == 0) goto Label_978; // 0x3d0 JumpB
	var_200_bool = 0; // 0x3d1 MovB
	
Label_978:
	if(var_200_bool == 0) goto Label_984; // 0x3d2 JumpB
	var_219_int = 543208; // 0x3d3 PushI
	var_220_int = -1; // 0x3d4 PushI
	var_221_int = 45664; // 0x3d5 PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x3d6 TObjFunc
	
Label_984:
	var_222_bool = 0; // 0x3d8 PushV
	var_222_bool = 1; // 0x3d9 MovB
	var_223_bool = 0; // 0x3da PushV
	var_223_bool = 1; // 0x3db MovB
	var_224_bool = 0; var_225_object = Obj(); // 0x3dc PushV
	var_225_object = var_1_object; // 0x3dd MovT
	func_4054(var_224_bool, var_225_object); // 0x3de NEW_2
	if(var_224_bool == 0) goto Label_999; // 0x3e0 JumpB
	var_226_bool = 0; var_227_object = Obj(); // 0x3e1 PushV
	var_227_object = var_1_object; // 0x3e2 MovT
	func_4064(var_226_bool, var_227_object); // 0x3e3 NEW_2
	if(var_226_bool == 0) goto Label_999; // 0x3e5 JumpB
	var_223_bool = 0; // 0x3e6 MovB
	
Label_999:
	if(var_223_bool == 0) goto Label_1006; // 0x3e7 JumpB
	var_228_bool = 0; var_229_object = Obj(); // 0x3e8 PushV
	var_229_object = var_1_object; // 0x3e9 MovT
	func_4074(var_228_bool, var_229_object); // 0x3ea NEW_2
	if(var_228_bool == 0) goto Label_1006; // 0x3ec JumpB
	var_222_bool = 0; // 0x3ed MovB
	
Label_1006:
	if(var_222_bool == 0) goto Label_1012; // 0x3ee JumpB
	var_230_int = 543181; // 0x3ef PushI
	var_231_int = -1; // 0x3f0 PushI
	var_232_int = 45637; // 0x3f1 PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x3f2 TObjFunc
	
Label_1012:
	var_233_bool = 0; // 0x3f4 PushV
	var_233_bool = 1; // 0x3f5 MovB
	var_234_bool = 0; // 0x3f6 PushV
	var_234_bool = 1; // 0x3f7 MovB
	var_235_bool = 0; var_236_object = Obj(); // 0x3f8 PushV
	var_236_object = var_1_object; // 0x3f9 MovT
	func_4084(var_235_bool, var_236_object); // 0x3fa NEW_2
	if(var_235_bool == 0) goto Label_1027; // 0x3fc JumpB
	var_237_bool = 0; var_238_object = Obj(); // 0x3fd PushV
	var_238_object = var_1_object; // 0x3fe MovT
	func_4094(var_237_bool, var_238_object); // 0x3ff NEW_2
	if(var_237_bool == 0) goto Label_1027; // 0x401 JumpB
	var_234_bool = 0; // 0x402 MovB
	
Label_1027:
	if(var_234_bool == 0) goto Label_1034; // 0x403 JumpB
	var_239_bool = 0; var_240_object = Obj(); // 0x404 PushV
	var_240_object = var_1_object; // 0x405 MovT
	func_4104(var_239_bool, var_240_object); // 0x406 NEW_2
	if(var_239_bool == 0) goto Label_1034; // 0x408 JumpB
	var_233_bool = 0; // 0x409 MovB
	
Label_1034:
	if(var_233_bool == 0) goto Label_1040; // 0x40a JumpB
	var_241_int = 543184; // 0x40b PushI
	var_242_int = -1; // 0x40c PushI
	var_243_int = 45640; // 0x40d PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x40e TObjFunc
	
Label_1040:
	var_244_bool = 0; // 0x410 PushV
	var_244_bool = 1; // 0x411 MovB
	var_245_bool = 0; // 0x412 PushV
	var_245_bool = 1; // 0x413 MovB
	var_246_bool = 0; // 0x414 PushV
	var_246_bool = 1; // 0x415 MovB
	var_247_bool = 0; var_248_object = Obj(); // 0x416 PushV
	var_248_object = var_1_object; // 0x417 MovT
	func_4074(var_247_bool, var_248_object); // 0x418 NEW_2
	if(var_247_bool == 0) goto Label_1057; // 0x41a JumpB
	var_249_bool = 0; var_250_object = Obj(); // 0x41b PushV
	var_250_object = var_1_object; // 0x41c MovT
	func_4104(var_249_bool, var_250_object); // 0x41d NEW_2
	if(var_249_bool == 0) goto Label_1057; // 0x41f JumpB
	var_246_bool = 0; // 0x420 MovB
	
Label_1057:
	if(var_246_bool == 0) goto Label_1064; // 0x421 JumpB
	var_251_bool = 0; var_252_object = Obj(); // 0x422 PushV
	var_252_object = var_1_object; // 0x423 MovT
	func_4114(var_251_bool, var_252_object); // 0x424 NEW_2
	if(var_251_bool == 0) goto Label_1064; // 0x426 JumpB
	var_245_bool = 0; // 0x427 MovB
	
Label_1064:
	if(var_245_bool == 0) goto Label_1071; // 0x428 JumpB
	var_253_bool = 0; var_254_object = Obj(); // 0x429 PushV
	var_254_object = var_1_object; // 0x42a MovT
	func_4124(var_253_bool, var_254_object); // 0x42b NEW_2
	if(var_253_bool == 0) goto Label_1071; // 0x42d JumpB
	var_244_bool = 0; // 0x42e MovB
	
Label_1071:
	if(var_244_bool == 0) goto Label_1077; // 0x42f JumpB
	var_255_int = 543185; // 0x430 PushI
	var_256_int = -1; // 0x431 PushI
	var_257_int = 45641; // 0x432 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x433 TObjFunc
	
Label_1077:
	var_258_bool = 0; // 0x435 PushV
	var_258_bool = 1; // 0x436 MovB
	var_259_bool = 0; // 0x437 PushV
	var_259_bool = 1; // 0x438 MovB
	var_260_bool = 0; var_261_object = Obj(); // 0x439 PushV
	var_261_object = var_1_object; // 0x43a MovT
	func_4134(var_260_bool, var_261_object); // 0x43b NEW_2
	if(var_260_bool == 0) goto Label_1092; // 0x43d JumpB
	var_262_bool = 0; var_263_object = Obj(); // 0x43e PushV
	var_263_object = var_1_object; // 0x43f MovT
	func_4144(var_262_bool, var_263_object); // 0x440 NEW_2
	if(var_262_bool == 0) goto Label_1092; // 0x442 JumpB
	var_259_bool = 0; // 0x443 MovB
	
Label_1092:
	if(var_259_bool == 0) goto Label_1099; // 0x444 JumpB
	var_264_bool = 0; var_265_object = Obj(); // 0x445 PushV
	var_265_object = var_1_object; // 0x446 MovT
	func_4154(var_264_bool, var_265_object); // 0x447 NEW_2
	if(var_264_bool == 0) goto Label_1099; // 0x449 JumpB
	var_258_bool = 0; // 0x44a MovB
	
Label_1099:
	if(var_258_bool == 0) goto Label_1105; // 0x44b JumpB
	var_266_int = 543186; // 0x44c PushI
	var_267_int = -1; // 0x44d PushI
	var_268_int = 45642; // 0x44e PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x44f TObjFunc
	
Label_1105:
	var_269_bool = 0; // 0x451 PushV
	var_269_bool = 1; // 0x452 MovB
	var_270_bool = 0; // 0x453 PushV
	var_270_bool = 1; // 0x454 MovB
	var_271_bool = 0; // 0x455 PushV
	var_271_bool = 1; // 0x456 MovB
	var_272_bool = 0; // 0x457 PushV
	var_272_bool = 1; // 0x458 MovB
	var_273_bool = 0; var_274_object = Obj(); // 0x459 PushV
	var_274_object = var_1_object; // 0x45a MovT
	func_4104(var_273_bool, var_274_object); // 0x45b NEW_2
	if(var_273_bool == 0) goto Label_1124; // 0x45d JumpB
	var_275_bool = 0; var_276_object = Obj(); // 0x45e PushV
	var_276_object = var_1_object; // 0x45f MovT
	func_4124(var_275_bool, var_276_object); // 0x460 NEW_2
	if(var_275_bool == 0) goto Label_1124; // 0x462 JumpB
	var_272_bool = 0; // 0x463 MovB
	
Label_1124:
	if(var_272_bool == 0) goto Label_1131; // 0x464 JumpB
	var_277_bool = 0; var_278_object = Obj(); // 0x465 PushV
	var_278_object = var_1_object; // 0x466 MovT
	func_4134(var_277_bool, var_278_object); // 0x467 NEW_2
	if(var_277_bool == 0) goto Label_1131; // 0x469 JumpB
	var_271_bool = 0; // 0x46a MovB
	
Label_1131:
	if(var_271_bool == 0) goto Label_1138; // 0x46b JumpB
	var_279_bool = 0; var_280_object = Obj(); // 0x46c PushV
	var_280_object = var_1_object; // 0x46d MovT
	func_4164(var_279_bool, var_280_object); // 0x46e NEW_2
	if(var_279_bool == 0) goto Label_1138; // 0x470 JumpB
	var_270_bool = 0; // 0x471 MovB
	
Label_1138:
	if(var_270_bool == 0) goto Label_1145; // 0x472 JumpB
	var_281_bool = 0; var_282_object = Obj(); // 0x473 PushV
	var_282_object = var_1_object; // 0x474 MovT
	func_4144(var_281_bool, var_282_object); // 0x475 NEW_2
	if(var_281_bool == 0) goto Label_1145; // 0x477 JumpB
	var_269_bool = 0; // 0x478 MovB
	
Label_1145:
	if(var_269_bool == 0) goto Label_1151; // 0x479 JumpB
	var_283_int = 543188; // 0x47a PushI
	var_284_int = -1; // 0x47b PushI
	var_285_int = 45644; // 0x47c PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0x47d TObjFunc
	
Label_1151:
	return 0; // 0x47f Return
	
Label_1152:
	var_286_string = ""; // 0x480 PushV
	var_286_string = "Neutral"; // 0x481 MovS
	func_649(var_22_bool, var_286_string); // 0x482 NEW_2
	var_287_int = 538167; // 0x484 PushI
	SetMessage(var_287_int); // 0x485 TObjFunc
	ClearReplies(); // 0x487 TObjFunc
	var_288_int = 538168; // 0x489 PushI
	var_289_int = -1; // 0x48a PushI
	var_290_int = 40043; // 0x48b PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0x48c TObjFunc
	var_291_bool = 0; // 0x48e PushV
	var_291_bool = 0; // 0x48f MovB
	var_292_bool = 0; var_293_object = Obj(); // 0x490 PushV
	var_293_object = var_1_object; // 0x491 MovT
	func_4054(var_292_bool, var_293_object); // 0x492 NEW_2
	if(var_292_bool == 0) goto Label_1179; // 0x494 JumpB
	var_294_bool = 0; var_295_object = Obj(); // 0x495 PushV
	var_295_object = var_1_object; // 0x496 MovT
	func_4018(var_295_object); // 0x497 NEW_2
	if(var_294_bool == 0) goto Label_1179; // 0x499 JumpB
	var_291_bool = 1; // 0x49a MovB
	
Label_1179:
	if(var_291_bool == 0) goto Label_1185; // 0x49b JumpB
	var_300_int = 538169; // 0x49c PushI
	var_301_int = 40045; // 0x49d PushI
	var_302_int = 40044; // 0x49e PushI
	AddReply(var_300_int, var_301_int, var_302_int); // 0x49f TObjFunc
	
Label_1185:
	var_303_bool = 0; // 0x4a1 PushV
	var_303_bool = 0; // 0x4a2 MovB
	var_304_bool = 0; // 0x4a3 PushV
	var_304_bool = 0; // 0x4a4 MovB
	var_305_bool = 0; var_306_object = Obj(); // 0x4a5 PushV
	var_306_object = var_1_object; // 0x4a6 MovT
	func_4054(var_305_bool, var_306_object); // 0x4a7 NEW_2
	if(var_305_bool == 0) goto Label_1200; // 0x4a9 JumpB
	var_307_bool = 0; var_308_object = Obj(); // 0x4aa PushV
	var_308_object = var_1_object; // 0x4ab MovT
	func_4174(var_307_bool, var_308_object); // 0x4ac NEW_2
	if(var_307_bool == 0) goto Label_1200; // 0x4ae JumpB
	var_304_bool = 1; // 0x4af MovB
	
Label_1200:
	if(var_304_bool == 0) goto Label_1207; // 0x4b0 JumpB
	var_318_bool = 0; var_319_object = Obj(); // 0x4b1 PushV
	var_319_object = var_1_object; // 0x4b2 MovT
	func_4018(var_319_object); // 0x4b3 NEW_2
	if(var_318_bool == 0) goto Label_1207; // 0x4b5 JumpB
	var_303_bool = 1; // 0x4b6 MovB
	
Label_1207:
	if(var_303_bool == 0) goto Label_1213; // 0x4b7 JumpB
	var_320_int = 538179; // 0x4b8 PushI
	var_321_int = 40055; // 0x4b9 PushI
	var_322_int = 40054; // 0x4ba PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0x4bb TObjFunc
	
Label_1213:
	var_323_bool = 0; // 0x4bd PushV
	var_323_bool = 0; // 0x4be MovB
	var_324_bool = 0; var_325_object = Obj(); // 0x4bf PushV
	var_325_object = var_1_object; // 0x4c0 MovT
	func_4064(var_324_bool, var_325_object); // 0x4c1 NEW_2
	if(var_324_bool == 0) goto Label_1226; // 0x4c3 JumpB
	var_326_bool = 0; var_327_object = Obj(); // 0x4c4 PushV
	var_327_object = var_1_object; // 0x4c5 MovT
	func_4018(var_327_object); // 0x4c6 NEW_2
	if(var_326_bool == 0) goto Label_1226; // 0x4c8 JumpB
	var_323_bool = 1; // 0x4c9 MovB
	
Label_1226:
	if(var_323_bool == 0) goto Label_1232; // 0x4ca JumpB
	var_328_int = 538190; // 0x4cb PushI
	var_329_int = 40067; // 0x4cc PushI
	var_330_int = 40066; // 0x4cd PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0x4ce TObjFunc
	
Label_1232:
	var_331_bool = 0; // 0x4d0 PushV
	var_331_bool = 1; // 0x4d1 MovB
	var_332_bool = 0; var_333_object = Obj(); // 0x4d2 PushV
	var_333_object = var_1_object; // 0x4d3 MovT
	func_4018(var_333_object); // 0x4d4 NEW_2
	if(var_332_bool == 0) goto Label_1245; // 0x4d6 JumpB
	var_334_bool = 0; var_335_object = Obj(); // 0x4d7 PushV
	var_335_object = var_1_object; // 0x4d8 MovT
	func_4030(var_335_object); // 0x4d9 NEW_2
	if(var_334_bool == 0) goto Label_1245; // 0x4db JumpB
	var_331_bool = 0; // 0x4dc MovB
	
Label_1245:
	if(var_331_bool == 0) goto Label_1251; // 0x4dd JumpB
	var_340_int = 538204; // 0x4de PushI
	var_341_int = -1; // 0x4df PushI
	var_342_int = 40081; // 0x4e0 PushI
	AddReply(var_340_int, var_341_int, var_342_int); // 0x4e1 TObjFunc
	
Label_1251:
	var_343_int = 538205; // 0x4e3 PushI
	var_344_int = -1; // 0x4e4 PushI
	var_345_int = 40082; // 0x4e5 PushI
	AddReply(var_343_int, var_344_int, var_345_int); // 0x4e6 TObjFunc
	return 0; // 0x4e8 Return
	
Label_1257:
	var_346_int = 40067; // 0x4e9 PushI
	var_347_bool = var_21_cvector == var_346_int; // 0x4ea Eq
	if(var_347_bool == 0) goto Label_1280; // 0x4eb JumpB
	var_348_string = ""; // 0x4ec PushV
	var_348_string = "Neutral"; // 0x4ed MovS
	func_649(var_22_bool, var_348_string); // 0x4ee NEW_2
	var_349_int = 538191; // 0x4f0 PushI
	SetMessage(var_349_int); // 0x4f1 TObjFunc
	ClearReplies(); // 0x4f3 TObjFunc
	var_350_int = 538192; // 0x4f5 PushI
	var_351_int = 40069; // 0x4f6 PushI
	var_352_int = 40068; // 0x4f7 PushI
	AddReply(var_350_int, var_351_int, var_352_int); // 0x4f8 TObjFunc
	var_353_int = 538203; // 0x4fa PushI
	var_354_int = 40069; // 0x4fb PushI
	var_355_int = 40079; // 0x4fc PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0x4fd TObjFunc
	return 0; // 0x4ff Return
	
Label_1280:
	var_356_int = 40069; // 0x500 PushI
	var_357_bool = var_21_cvector == var_356_int; // 0x501 Eq
	if(var_357_bool == 0) goto Label_1303; // 0x502 JumpB
	var_358_string = ""; // 0x503 PushV
	var_358_string = "Neutral"; // 0x504 MovS
	func_649(var_22_bool, var_358_string); // 0x505 NEW_2
	var_359_int = 538193; // 0x507 PushI
	SetMessage(var_359_int); // 0x508 TObjFunc
	ClearReplies(); // 0x50a TObjFunc
	var_360_int = 538194; // 0x50c PushI
	var_361_int = 40071; // 0x50d PushI
	var_362_int = 40070; // 0x50e PushI
	AddReply(var_360_int, var_361_int, var_362_int); // 0x50f TObjFunc
	var_363_int = 538202; // 0x511 PushI
	var_364_int = -1; // 0x512 PushI
	var_365_int = 40078; // 0x513 PushI
	AddReply(var_363_int, var_364_int, var_365_int); // 0x514 TObjFunc
	return 0; // 0x516 Return
	
Label_1303:
	var_366_int = 40071; // 0x517 PushI
	var_367_bool = var_21_cvector == var_366_int; // 0x518 Eq
	if(var_367_bool == 0) goto Label_1326; // 0x519 JumpB
	var_368_string = ""; // 0x51a PushV
	var_368_string = "Neutral"; // 0x51b MovS
	func_649(var_22_bool, var_368_string); // 0x51c NEW_2
	var_369_int = 538195; // 0x51e PushI
	SetMessage(var_369_int); // 0x51f TObjFunc
	ClearReplies(); // 0x521 TObjFunc
	var_370_int = 538196; // 0x523 PushI
	var_371_int = 40073; // 0x524 PushI
	var_372_int = 40072; // 0x525 PushI
	AddReply(var_370_int, var_371_int, var_372_int); // 0x526 TObjFunc
	var_373_int = 538201; // 0x528 PushI
	var_374_int = -1; // 0x529 PushI
	var_375_int = 40077; // 0x52a PushI
	AddReply(var_373_int, var_374_int, var_375_int); // 0x52b TObjFunc
	return 0; // 0x52d Return
	
Label_1326:
	var_376_int = 40073; // 0x52e PushI
	var_377_bool = var_21_cvector == var_376_int; // 0x52f Eq
	if(var_377_bool == 0) goto Label_1354; // 0x530 JumpB
	var_378_string = ""; // 0x531 PushV
	var_378_string = "Neutral"; // 0x532 MovS
	func_649(var_22_bool, var_378_string); // 0x533 NEW_2
	var_379_int = 538197; // 0x535 PushI
	SetMessage(var_379_int); // 0x536 TObjFunc
	ClearReplies(); // 0x538 TObjFunc
	var_380_int = 538198; // 0x53a PushI
	var_381_int = -1; // 0x53b PushI
	var_382_int = 40074; // 0x53c PushI
	AddReply(var_380_int, var_381_int, var_382_int); // 0x53d TObjFunc
	var_383_int = 538199; // 0x53f PushI
	var_384_int = -1; // 0x540 PushI
	var_385_int = 40075; // 0x541 PushI
	AddReply(var_383_int, var_384_int, var_385_int); // 0x542 TObjFunc
	var_386_int = 538200; // 0x544 PushI
	var_387_int = -1; // 0x545 PushI
	var_388_int = 40076; // 0x546 PushI
	AddReply(var_386_int, var_387_int, var_388_int); // 0x547 TObjFunc
	return 0; // 0x549 Return
	
Label_1354:
	var_389_int = 40055; // 0x54a PushI
	var_390_bool = var_21_cvector == var_389_int; // 0x54b Eq
	if(var_390_bool == 0) goto Label_1382; // 0x54c JumpB
	var_391_string = ""; // 0x54d PushV
	var_391_string = "Neutral"; // 0x54e MovS
	func_649(var_22_bool, var_391_string); // 0x54f NEW_2
	var_392_int = 538180; // 0x551 PushI
	SetMessage(var_392_int); // 0x552 TObjFunc
	ClearReplies(); // 0x554 TObjFunc
	var_393_int = 538181; // 0x556 PushI
	var_394_int = 40057; // 0x557 PushI
	var_395_int = 40056; // 0x558 PushI
	AddReply(var_393_int, var_394_int, var_395_int); // 0x559 TObjFunc
	var_396_int = 538188; // 0x55b PushI
	var_397_int = 40057; // 0x55c PushI
	var_398_int = 40063; // 0x55d PushI
	AddReply(var_396_int, var_397_int, var_398_int); // 0x55e TObjFunc
	var_399_int = 538189; // 0x560 PushI
	var_400_int = -1; // 0x561 PushI
	var_401_int = 40065; // 0x562 PushI
	AddReply(var_399_int, var_400_int, var_401_int); // 0x563 TObjFunc
	return 0; // 0x565 Return
	
Label_1382:
	var_402_int = 40057; // 0x566 PushI
	var_403_bool = var_21_cvector == var_402_int; // 0x567 Eq
	if(var_403_bool == 0) goto Label_1405; // 0x568 JumpB
	var_404_string = ""; // 0x569 PushV
	var_404_string = "Neutral"; // 0x56a MovS
	func_649(var_22_bool, var_404_string); // 0x56b NEW_2
	var_405_int = 538182; // 0x56d PushI
	SetMessage(var_405_int); // 0x56e TObjFunc
	ClearReplies(); // 0x570 TObjFunc
	var_406_int = 538183; // 0x572 PushI
	var_407_int = 40059; // 0x573 PushI
	var_408_int = 40058; // 0x574 PushI
	AddReply(var_406_int, var_407_int, var_408_int); // 0x575 TObjFunc
	var_409_int = 538187; // 0x577 PushI
	var_410_int = -1; // 0x578 PushI
	var_411_int = 40062; // 0x579 PushI
	AddReply(var_409_int, var_410_int, var_411_int); // 0x57a TObjFunc
	return 0; // 0x57c Return
	
Label_1405:
	var_412_int = 40059; // 0x57d PushI
	var_413_bool = var_21_cvector == var_412_int; // 0x57e Eq
	if(var_413_bool == 0) goto Label_1428; // 0x57f JumpB
	var_414_string = ""; // 0x580 PushV
	var_414_string = "Neutral"; // 0x581 MovS
	func_649(var_22_bool, var_414_string); // 0x582 NEW_2
	var_415_int = 538184; // 0x584 PushI
	SetMessage(var_415_int); // 0x585 TObjFunc
	ClearReplies(); // 0x587 TObjFunc
	var_416_int = 538185; // 0x589 PushI
	var_417_int = -1; // 0x58a PushI
	var_418_int = 40060; // 0x58b PushI
	AddReply(var_416_int, var_417_int, var_418_int); // 0x58c TObjFunc
	var_419_int = 538186; // 0x58e PushI
	var_420_int = -1; // 0x58f PushI
	var_421_int = 40061; // 0x590 PushI
	AddReply(var_419_int, var_420_int, var_421_int); // 0x591 TObjFunc
	return 0; // 0x593 Return
	
Label_1428:
	var_422_int = 40045; // 0x594 PushI
	var_423_bool = var_21_cvector == var_422_int; // 0x595 Eq
	if(var_423_bool == 0) goto Label_1456; // 0x596 JumpB
	var_424_string = ""; // 0x597 PushV
	var_424_string = "Neutral"; // 0x598 MovS
	func_649(var_22_bool, var_424_string); // 0x599 NEW_2
	var_425_int = 538170; // 0x59b PushI
	SetMessage(var_425_int); // 0x59c TObjFunc
	ClearReplies(); // 0x59e TObjFunc
	var_426_int = 538171; // 0x5a0 PushI
	var_427_int = 40047; // 0x5a1 PushI
	var_428_int = 40046; // 0x5a2 PushI
	AddReply(var_426_int, var_427_int, var_428_int); // 0x5a3 TObjFunc
	var_429_int = 538175; // 0x5a5 PushI
	var_430_int = 40051; // 0x5a6 PushI
	var_431_int = 40050; // 0x5a7 PushI
	AddReply(var_429_int, var_430_int, var_431_int); // 0x5a8 TObjFunc
	var_432_int = 538178; // 0x5aa PushI
	var_433_int = -1; // 0x5ab PushI
	var_434_int = 40053; // 0x5ac PushI
	AddReply(var_432_int, var_433_int, var_434_int); // 0x5ad TObjFunc
	return 0; // 0x5af Return
	
Label_1456:
	var_435_int = 40051; // 0x5b0 PushI
	var_436_bool = var_21_cvector == var_435_int; // 0x5b1 Eq
	if(var_436_bool == 0) goto Label_1474; // 0x5b2 JumpB
	var_437_string = ""; // 0x5b3 PushV
	var_437_string = "Neutral"; // 0x5b4 MovS
	func_649(var_22_bool, var_437_string); // 0x5b5 NEW_2
	var_438_int = 538176; // 0x5b7 PushI
	SetMessage(var_438_int); // 0x5b8 TObjFunc
	ClearReplies(); // 0x5ba TObjFunc
	var_439_int = 538177; // 0x5bc PushI
	var_440_int = -1; // 0x5bd PushI
	var_441_int = 40052; // 0x5be PushI
	AddReply(var_439_int, var_440_int, var_441_int); // 0x5bf TObjFunc
	return 0; // 0x5c1 Return
	
Label_1474:
	var_442_int = 40047; // 0x5c2 PushI
	var_443_bool = var_21_cvector == var_442_int; // 0x5c3 Eq
	if(var_443_bool == 0) goto Label_1497; // 0x5c4 JumpB
	var_444_string = ""; // 0x5c5 PushV
	var_444_string = "Neutral"; // 0x5c6 MovS
	func_649(var_22_bool, var_444_string); // 0x5c7 NEW_2
	var_445_int = 538172; // 0x5c9 PushI
	SetMessage(var_445_int); // 0x5ca TObjFunc
	ClearReplies(); // 0x5cc TObjFunc
	var_446_int = 538173; // 0x5ce PushI
	var_447_int = -1; // 0x5cf PushI
	var_448_int = 40048; // 0x5d0 PushI
	AddReply(var_446_int, var_447_int, var_448_int); // 0x5d1 TObjFunc
	var_449_int = 538174; // 0x5d3 PushI
	var_450_int = -1; // 0x5d4 PushI
	var_451_int = 40049; // 0x5d5 PushI
	AddReply(var_449_int, var_450_int, var_451_int); // 0x5d6 TObjFunc
	return 0; // 0x5d8 Return
	
Label_1497:
	var_452_int = 45656; // 0x5d9 PushI
	var_453_bool = var_21_cvector == var_452_int; // 0x5da Eq
	if(var_453_bool == 0) goto Label_1525; // 0x5db JumpB
	var_454_string = ""; // 0x5dc PushV
	var_454_string = "Neutral"; // 0x5dd MovS
	func_649(var_22_bool, var_454_string); // 0x5de NEW_2
	var_455_int = 543200; // 0x5e0 PushI
	SetMessage(var_455_int); // 0x5e1 TObjFunc
	ClearReplies(); // 0x5e3 TObjFunc
	var_456_int = 543205; // 0x5e5 PushI
	var_457_int = -1; // 0x5e6 PushI
	var_458_int = 45661; // 0x5e7 PushI
	AddReply(var_456_int, var_457_int, var_458_int); // 0x5e8 TObjFunc
	var_459_int = 543206; // 0x5ea PushI
	var_460_int = -1; // 0x5eb PushI
	var_461_int = 45662; // 0x5ec PushI
	AddReply(var_459_int, var_460_int, var_461_int); // 0x5ed TObjFunc
	var_462_int = 543207; // 0x5ef PushI
	var_463_int = -1; // 0x5f0 PushI
	var_464_int = 45663; // 0x5f1 PushI
	AddReply(var_462_int, var_463_int, var_464_int); // 0x5f2 TObjFunc
	return 0; // 0x5f4 Return
	
Label_1525:
	var_465_int = 45655; // 0x5f5 PushI
	var_466_bool = var_21_cvector == var_465_int; // 0x5f6 Eq
	if(var_466_bool == 0) goto Label_1568; // 0x5f7 JumpB
	var_467_string = ""; // 0x5f8 PushV
	var_467_string = "Neutral"; // 0x5f9 MovS
	func_649(var_22_bool, var_467_string); // 0x5fa NEW_2
	var_468_int = 543199; // 0x5fc PushI
	SetMessage(var_468_int); // 0x5fd TObjFunc
	ClearReplies(); // 0x5ff TObjFunc
	var_469_int = 543201; // 0x601 PushI
	var_470_int = -1; // 0x602 PushI
	var_471_int = 45657; // 0x603 PushI
	AddReply(var_469_int, var_470_int, var_471_int); // 0x604 TObjFunc
	var_472_int = 543202; // 0x606 PushI
	var_473_int = -1; // 0x607 PushI
	var_474_int = 45658; // 0x608 PushI
	AddReply(var_472_int, var_473_int, var_474_int); // 0x609 TObjFunc
	var_475_bool = 0; var_476_object = Obj(); // 0x60b PushV
	var_476_object = var_1_object; // 0x60c MovT
	func_4064(var_475_bool, var_476_object); // 0x60d NEW_2
	if(var_475_bool == 0) goto Label_1557; // 0x60f JumpB
	var_477_int = 543203; // 0x610 PushI
	var_478_int = -1; // 0x611 PushI
	var_479_int = 45659; // 0x612 PushI
	AddReply(var_477_int, var_478_int, var_479_int); // 0x613 TObjFunc
	
Label_1557:
	var_480_bool = 0; var_481_object = Obj(); // 0x615 PushV
	var_481_object = var_1_object; // 0x616 MovT
	func_4104(var_480_bool, var_481_object); // 0x617 NEW_2
	if(var_480_bool == 0) goto Label_1567; // 0x619 JumpB
	var_482_int = 543204; // 0x61a PushI
	var_483_int = -1; // 0x61b PushI
	var_484_int = 45660; // 0x61c PushI
	AddReply(var_482_int, var_483_int, var_484_int); // 0x61d TObjFunc
	
Label_1567:
	return 0; // 0x61f Return
	
Label_1568:
	var_485_int = 45648; // 0x620 PushI
	var_486_bool = var_21_cvector == var_485_int; // 0x621 Eq
	if(var_486_bool == 0) goto Label_1644; // 0x622 JumpB
	var_487_bool = 0; var_488_object = Obj(); // 0x623 PushV
	var_488_object = var_1_object; // 0x624 MovT
	func_4054(var_487_bool, var_488_object); // 0x625 NEW_2
	if(var_487_bool == 0) goto Label_1601; // 0x627 JumpB
	var_489_string = ""; // 0x628 PushV
	var_489_string = "Neutral"; // 0x629 MovS
	func_649(var_22_bool, var_489_string); // 0x62a NEW_2
	var_490_int = 543192; // 0x62c PushI
	SetMessage(var_490_int); // 0x62d TObjFunc
	ClearReplies(); // 0x62f TObjFunc
	var_491_int = 543193; // 0x631 PushI
	var_492_int = -1; // 0x632 PushI
	var_493_int = 45649; // 0x633 PushI
	AddReply(var_491_int, var_492_int, var_493_int); // 0x634 TObjFunc
	var_494_int = 543194; // 0x636 PushI
	var_495_int = -1; // 0x637 PushI
	var_496_int = 45650; // 0x638 PushI
	AddReply(var_494_int, var_495_int, var_496_int); // 0x639 TObjFunc
	var_497_int = 543195; // 0x63b PushI
	var_498_int = -1; // 0x63c PushI
	var_499_int = 45651; // 0x63d PushI
	AddReply(var_497_int, var_498_int, var_499_int); // 0x63e TObjFunc
	return 0; // 0x640 Return
	
Label_1601:
	var_500_bool = 0; // 0x641 PushV
	var_500_bool = 1; // 0x642 MovB
	var_501_bool = 0; // 0x643 PushV
	var_501_bool = 1; // 0x644 MovB
	var_502_bool = 0; var_503_object = Obj(); // 0x645 PushV
	var_503_object = var_1_object; // 0x646 MovT
	func_4074(var_502_bool, var_503_object); // 0x647 NEW_2
	if(var_502_bool == 0) goto Label_1616; // 0x649 JumpB
	var_504_bool = 0; var_505_object = Obj(); // 0x64a PushV
	var_505_object = var_1_object; // 0x64b MovT
	func_4084(var_504_bool, var_505_object); // 0x64c NEW_2
	if(var_504_bool == 0) goto Label_1616; // 0x64e JumpB
	var_501_bool = 0; // 0x64f MovB
	
Label_1616:
	if(var_501_bool == 0) goto Label_1623; // 0x650 JumpB
	var_506_bool = 0; var_507_object = Obj(); // 0x651 PushV
	var_507_object = var_1_object; // 0x652 MovT
	func_4094(var_506_bool, var_507_object); // 0x653 NEW_2
	if(var_506_bool == 0) goto Label_1623; // 0x655 JumpB
	var_500_bool = 0; // 0x656 MovB
	
Label_1623:
	if(var_500_bool == 0) goto Label_1644; // 0x657 JumpB
	var_508_string = ""; // 0x658 PushV
	var_508_string = "Neutral"; // 0x659 MovS
	func_649(var_22_bool, var_508_string); // 0x65a NEW_2
	var_509_int = 543196; // 0x65c PushI
	SetMessage(var_509_int); // 0x65d TObjFunc
	ClearReplies(); // 0x65f TObjFunc
	var_510_int = 543197; // 0x661 PushI
	var_511_int = -1; // 0x662 PushI
	var_512_int = 45653; // 0x663 PushI
	AddReply(var_510_int, var_511_int, var_512_int); // 0x664 TObjFunc
	var_513_int = 543198; // 0x666 PushI
	var_514_int = -1; // 0x667 PushI
	var_515_int = 45654; // 0x668 PushI
	AddReply(var_513_int, var_514_int, var_515_int); // 0x669 TObjFunc
	return 0; // 0x66b Return
	
Label_1644:
	var_3_string = 1; // 0x66c TMovB
	var_516_bool = 0; // 0x66d PushV
	func_5226(var_516_bool); // 0x66e NEW_2
	if(var_516_bool == 0) goto Label_1652; // 0x670 JumpB
	lshStopAnimation(); // 0x671 Func
	goto Label_1654; // 0x673 Jump
	
Label_1654:
	return 0; // 0x676 Return
	
Label_1652:
	StopAnimation(); // 0x674 Func
	
Label_1656:
	return 0; // 0x678 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0; // 0x688 PushV
	var_24_int = 0; var_25_object = Obj(); // 0x689 PushV
	var_25_object = var_21_bool; // 0x68a Mov
	func_4976(var_25_object); // 0x68b NEW_2
	var_23_int = var_24_int; // 0x68c Mov
	var_26_int = 0; // 0x68e PushI
	var_27_bool = var_23_int > var_26_int; // 0x68f GT
	if(var_27_bool == 0) goto Label_1685; // 0x690 JumpB
	var_28_object = Obj(); // 0x691 PushV
	var_28_object = var_21_bool; // 0x692 Mov
	func_4979(var_28_object); // 0x693 NEW_2
	
Label_1685:
	return 2; // 0x695 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	func_4985(); // 0x697 NEW_2
	return 0; // 0x699 Return
}


task_2_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_float, var_8_float, var_9_bool, var_10_bool, var_11_bool, var_12_object, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool, var_22_object, var_23_cvector, var_24_bool)
{
	return 0; // 0x710 Return
}


task_2_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_string, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	return 0; // 0x712 Return
}


task_2_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	return 0; // 0x714 Return
}


task_3_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0; // 0x72d PushV
	var_24_int = 0; var_25_object = Obj(); // 0x72e PushV
	var_25_object = var_21_bool; // 0x72f Mov
	func_4976(var_25_object); // 0x730 NEW_2
	var_23_int = var_24_int; // 0x731 Mov
	var_26_int = 0; // 0x733 PushI
	var_27_bool = var_23_int > var_26_int; // 0x734 GT
	if(var_27_bool == 0) goto Label_1856; // 0x735 JumpB
	var_28_int = 1; // 0x736 PushI
	var_29_bool = var_23_int > var_28_int; // 0x737 GT
	if(var_29_bool == 0) goto Label_1852; // 0x738 JumpB
	func_2024(var_23_int); // 0x73a NEW_2
	
Label_1852:
	var_31_object = Obj(); // 0x73c PushV
	var_31_object = var_21_bool; // 0x73d Mov
	func_4979(var_31_object); // 0x73e NEW_2
	
Label_1856:
	return 2; // 0x740 Return
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0; // 0x741 PushV
	var_24_object = Obj(); // 0x742 PushV
	var_24_object = var_21_bool; // 0x743 Mov
	func_4781(var_24_object); // 0x744 NEW_2
	var_33_int = 0; var_34_object = Obj(); // 0x746 PushV
	var_34_object = var_21_bool; // 0x747 Mov
	func_4864(var_33_int, var_34_object); // 0x748 NEW_2
	var_23_int = var_33_int; // 0x749 Mov
	var_69_int = 0; // 0x74b PushI
	var_70_bool = var_23_int > var_69_int; // 0x74c GT
	if(var_70_bool == 0) goto Label_1880; // 0x74d JumpB
	var_71_int = 1; // 0x74e PushI
	var_72_bool = var_23_int > var_71_int; // 0x74f GT
	if(var_72_bool == 0) goto Label_1876; // 0x750 JumpB
	func_2024(var_23_int); // 0x752 NEW_2
	
Label_1876:
	var_74_object = Obj(); // 0x754 PushV
	var_74_object = var_21_bool; // 0x755 Mov
	func_4874(var_74_object); // 0x756 NEW_2
	
Label_1880:
	return 2; // 0x758 Return
}


task_3_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_object, var_22_cvector, var_23_bool)
{
	var_24_int = 0; var_25_int = 0; // 0x759 PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_object = Obj(); var_29_bool = 0; // 0x75a PushV
	var_27_object = var_21_object; // 0x75b Mov
	var_28_object = var_22_cvector; // 0x75c Mov
	var_29_bool = var_23_bool; // 0x75d Mov
	func_5256(var_27_object, var_28_object, var_29_bool); // 0x75e NEW_2
	if(var_26_bool == 0) goto Label_1908; // 0x760 JumpB
	var_73_int = 0; var_74_object = Obj(); var_75_bool = 0; // 0x761 PushV
	var_74_object = var_21_object; // 0x762 Mov
	var_75_bool = var_23_bool; // 0x763 Mov
	func_4882(var_74_object, var_75_bool); // 0x764 NEW_2
	var_25_int = var_73_int; // 0x765 Mov
	var_104_int = 0; // 0x767 PushI
	var_105_bool = var_25_int > var_104_int; // 0x768 GT
	if(var_105_bool == 0) goto Label_1908; // 0x769 JumpB
	var_106_int = 1; // 0x76a PushI
	var_107_bool = var_25_int > var_106_int; // 0x76b GT
	if(var_107_bool == 0) goto Label_1904; // 0x76c JumpB
	func_2024(var_25_int); // 0x76e NEW_2
	
Label_1904:
	var_109_object = Obj(); // 0x770 PushV
	var_109_object = var_21_object; // 0x771 Mov
	func_4892(var_109_object); // 0x772 NEW_2
	
Label_1908:
	return 2; // 0x774 Return
}


task_3_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0; // 0x775 PushV
	var_24_int = 0; var_25_object = Obj(); // 0x776 PushV
	var_25_object = var_21_bool; // 0x777 Mov
	func_4966(var_25_object); // 0x778 NEW_2
	var_23_int = var_24_int; // 0x779 Mov
	var_26_int = 0; // 0x77b PushI
	var_27_bool = var_23_int > var_26_int; // 0x77c GT
	if(var_27_bool == 0) goto Label_1928; // 0x77d JumpB
	var_28_int = 1; // 0x77e PushI
	var_29_bool = var_23_int > var_28_int; // 0x77f GT
	if(var_29_bool == 0) goto Label_1924; // 0x780 JumpB
	func_2024(var_23_int); // 0x782 NEW_2
	
Label_1924:
	var_31_object = Obj(); // 0x784 PushV
	var_31_object = var_21_bool; // 0x785 Mov
	func_4969(); // 0x786 NEW_2
	
Label_1928:
	return 2; // 0x788 Return
}


task_3_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x789 PushV
	var_25_bool = 0; var_26_object = Obj(); var_27_string = ""; // 0x78a PushV
	var_26_object = var_21_cvector; // 0x78b Mov
	var_27_string = var_22_bool; // 0x78c Mov
	func_4695(var_25_bool, var_26_object, var_27_string); // 0x78d NEW_2
	if(var_25_bool == 0) goto Label_1945; // 0x78f JumpB
	func_2024(var_24_int); // 0x791 NEW_2
	var_58_object = Obj(); var_59_string = ""; // 0x793 PushV
	var_58_object = var_21_cvector; // 0x794 Mov
	var_59_string = var_22_bool; // 0x795 Mov
	func_4727(var_58_object, var_59_string); // 0x796 NEW_2
	goto Label_1965; // 0x798 Jump
	
Label_1965:
	return 2; // 0x7ad Return
	
Label_1945:
	var_207_int = 0; var_208_string = ""; var_209_object = Obj(); // 0x799 PushV
	var_208_string = var_22_bool; // 0x79a Mov
	var_209_object = var_21_cvector; // 0x79b Mov
	func_4971(var_209_object); // 0x79c NEW_2
	var_24_int = var_207_int; // 0x79d Mov
	var_210_int = 0; // 0x79f PushI
	var_211_bool = var_24_int > var_210_int; // 0x7a0 GT
	if(var_211_bool == 0) goto Label_1965; // 0x7a1 JumpB
	var_212_int = 1; // 0x7a2 PushI
	var_213_bool = var_24_int > var_212_int; // 0x7a3 GT
	if(var_213_bool == 0) goto Label_1960; // 0x7a4 JumpB
	func_2024(var_24_int); // 0x7a6 NEW_2
	
Label_1960:
	var_214_string = ""; var_215_object = Obj(); // 0x7a8 PushV
	var_214_string = var_22_bool; // 0x7a9 Mov
	var_215_object = var_21_cvector; // 0x7aa Mov
	func_4974(); // 0x7ab NEW_2
}


task_3_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_string, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_bool = 0; var_23_string = ""; // 0x7af PushV
	var_23_string = var_21_bool; // 0x7b0 Mov
	func_4794(var_22_bool, var_23_string); // 0x7b1 NEW_2
	if(var_22_bool == 0) goto Label_1979; // 0x7b3 JumpB
	func_2024(var_21_bool); // 0x7b5 NEW_2
	var_32_string = ""; // 0x7b7 PushV
	var_32_string = var_21_bool; // 0x7b8 Mov
	func_4810(var_32_string); // 0x7b9 NEW_2
	
Label_1979:
	return 0; // 0x7bb Return
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_bool = 0; var_23_object = Obj(); // 0x7bd PushV
	var_23_object = var_21_bool; // 0x7be Mov
	func_4752(var_22_bool, var_23_object); // 0x7bf NEW_2
	if(var_22_bool == 0) goto Label_1994; // 0x7c1 JumpB
	func_2024(var_21_bool); // 0x7c3 NEW_2
	var_37_object = Obj(); // 0x7c5 PushV
	var_37_object = var_21_bool; // 0x7c6 Mov
	func_4775(var_37_object); // 0x7c7 NEW_2
	goto Label_1998; // 0x7c9 Jump
	
Label_1998:
	return 0; // 0x7ce Return
	
Label_1994:
	var_111_object = Obj(); // 0x7ca PushV
	var_111_object = var_21_bool; // 0x7cb Mov
	func_2049(var_21_bool, var_111_object); // 0x7cc NEW_2
}


task_3_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_object = Obj(); // 0x7d0 PushV
	var_22_object = var_21_bool; // 0x7d1 Mov
	func_2049(var_21_bool, var_22_object); // 0x7d2 NEW_2
	return 0; // 0x7d4 Return
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_int, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 110; // 0x7d6 PushI
	var_23_bool = var_21_bool != var_22_int; // 0x7d7 Neq
	if(var_23_bool == 0) goto Label_2010; // 0x7d8 JumpB
	return 0; // 0x7d9 Return
	
Label_2010:
	var_2_object = 0; // 0x7da TMovB
	var_24_int = 110; // 0x7db PushI
	KillTimer(var_24_int); // 0x7dc Func
	ResetAAS(); // 0x7de Func
	return 0; // 0x7e0 Return
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	func_2024(var_20_bool); // 0x7e2 NEW_2
	func_4985(); // 0x7e5 NEW_2
	return 0; // 0x7e7 Return
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	func_2024(var_21_bool); // 0x7fa NEW_2
	var_23_object = Obj(); // 0x7fc PushV
	var_23_object = var_21_bool; // 0x7fd Mov
	func_4671(); // 0x7fe NEW_2
	return 0; // 0x800 Return
}


task_3_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	RequestClearPath(var_21_bool); // 0x86a Func
	return 0; // 0x86c Return
}


task_3_event_28(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	Stop(); // 0x86d Func
	return 0; // 0x86f Return
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0; // 0x886 PushV
	var_24_int = 0; var_25_object = Obj(); // 0x887 PushV
	var_25_object = var_21_bool; // 0x888 Mov
	func_4976(var_25_object); // 0x889 NEW_2
	var_23_int = var_24_int; // 0x88a Mov
	var_26_int = 0; // 0x88c PushI
	var_27_bool = var_23_int > var_26_int; // 0x88d GT
	if(var_27_bool == 0) goto Label_2201; // 0x88e JumpB
	var_28_int = 1; // 0x88f PushI
	var_29_bool = var_23_int > var_28_int; // 0x890 GT
	if(var_29_bool == 0) goto Label_2197; // 0x891 JumpB
	func_2427(); // 0x893 NEW_2
	
Label_2197:
	var_30_object = Obj(); // 0x895 PushV
	var_30_object = var_21_bool; // 0x896 Mov
	func_4979(var_30_object); // 0x897 NEW_2
	
Label_2201:
	return 2; // 0x899 Return
}


task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0; // 0x89a PushV
	var_24_object = Obj(); // 0x89b PushV
	var_24_object = var_21_bool; // 0x89c Mov
	func_4781(var_24_object); // 0x89d NEW_2
	var_33_int = 0; var_34_object = Obj(); // 0x89f PushV
	var_34_object = var_21_bool; // 0x8a0 Mov
	func_4864(var_33_int, var_34_object); // 0x8a1 NEW_2
	var_23_int = var_33_int; // 0x8a2 Mov
	var_69_int = 0; // 0x8a4 PushI
	var_70_bool = var_23_int > var_69_int; // 0x8a5 GT
	if(var_70_bool == 0) goto Label_2225; // 0x8a6 JumpB
	var_71_int = 1; // 0x8a7 PushI
	var_72_bool = var_23_int > var_71_int; // 0x8a8 GT
	if(var_72_bool == 0) goto Label_2221; // 0x8a9 JumpB
	func_2427(); // 0x8ab NEW_2
	
Label_2221:
	var_73_object = Obj(); // 0x8ad PushV
	var_73_object = var_21_bool; // 0x8ae Mov
	func_4874(var_73_object); // 0x8af NEW_2
	
Label_2225:
	return 2; // 0x8b1 Return
}


task_4_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_object, var_22_cvector, var_23_bool)
{
	var_24_int = 0; var_25_int = 0; // 0x8b2 PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_object = Obj(); var_29_bool = 0; // 0x8b3 PushV
	var_27_object = var_21_object; // 0x8b4 Mov
	var_28_object = var_22_cvector; // 0x8b5 Mov
	var_29_bool = var_23_bool; // 0x8b6 Mov
	func_5256(var_27_object, var_28_object, var_29_bool); // 0x8b7 NEW_2
	if(var_26_bool == 0) goto Label_2253; // 0x8b9 JumpB
	var_73_int = 0; var_74_object = Obj(); var_75_bool = 0; // 0x8ba PushV
	var_74_object = var_21_object; // 0x8bb Mov
	var_75_bool = var_23_bool; // 0x8bc Mov
	func_4882(var_74_object, var_75_bool); // 0x8bd NEW_2
	var_25_int = var_73_int; // 0x8be Mov
	var_104_int = 0; // 0x8c0 PushI
	var_105_bool = var_25_int > var_104_int; // 0x8c1 GT
	if(var_105_bool == 0) goto Label_2253; // 0x8c2 JumpB
	var_106_int = 1; // 0x8c3 PushI
	var_107_bool = var_25_int > var_106_int; // 0x8c4 GT
	if(var_107_bool == 0) goto Label_2249; // 0x8c5 JumpB
	func_2427(); // 0x8c7 NEW_2
	
Label_2249:
	var_108_object = Obj(); // 0x8c9 PushV
	var_108_object = var_21_object; // 0x8ca Mov
	func_4892(var_108_object); // 0x8cb NEW_2
	
Label_2253:
	return 2; // 0x8cd Return
}


task_4_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0; // 0x8ce PushV
	var_24_int = 0; var_25_object = Obj(); // 0x8cf PushV
	var_25_object = var_21_bool; // 0x8d0 Mov
	func_4966(var_25_object); // 0x8d1 NEW_2
	var_23_int = var_24_int; // 0x8d2 Mov
	var_26_int = 0; // 0x8d4 PushI
	var_27_bool = var_23_int > var_26_int; // 0x8d5 GT
	if(var_27_bool == 0) goto Label_2273; // 0x8d6 JumpB
	var_28_int = 1; // 0x8d7 PushI
	var_29_bool = var_23_int > var_28_int; // 0x8d8 GT
	if(var_29_bool == 0) goto Label_2269; // 0x8d9 JumpB
	func_2427(); // 0x8db NEW_2
	
Label_2269:
	var_30_object = Obj(); // 0x8dd PushV
	var_30_object = var_21_bool; // 0x8de Mov
	func_4969(); // 0x8df NEW_2
	
Label_2273:
	return 2; // 0x8e1 Return
}


task_4_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x8e2 PushV
	var_25_bool = 0; var_26_object = Obj(); var_27_string = ""; // 0x8e3 PushV
	var_26_object = var_21_cvector; // 0x8e4 Mov
	var_27_string = var_22_bool; // 0x8e5 Mov
	func_4695(var_25_bool, var_26_object, var_27_string); // 0x8e6 NEW_2
	if(var_25_bool == 0) goto Label_2290; // 0x8e8 JumpB
	func_2427(); // 0x8ea NEW_2
	var_57_object = Obj(); var_58_string = ""; // 0x8ec PushV
	var_57_object = var_21_cvector; // 0x8ed Mov
	var_58_string = var_22_bool; // 0x8ee Mov
	func_4727(var_57_object, var_58_string); // 0x8ef NEW_2
	goto Label_2310; // 0x8f1 Jump
	
Label_2310:
	return 2; // 0x906 Return
	
Label_2290:
	var_206_int = 0; var_207_string = ""; var_208_object = Obj(); // 0x8f2 PushV
	var_207_string = var_22_bool; // 0x8f3 Mov
	var_208_object = var_21_cvector; // 0x8f4 Mov
	func_4971(var_208_object); // 0x8f5 NEW_2
	var_24_int = var_206_int; // 0x8f6 Mov
	var_209_int = 0; // 0x8f8 PushI
	var_210_bool = var_24_int > var_209_int; // 0x8f9 GT
	if(var_210_bool == 0) goto Label_2310; // 0x8fa JumpB
	var_211_int = 1; // 0x8fb PushI
	var_212_bool = var_24_int > var_211_int; // 0x8fc GT
	if(var_212_bool == 0) goto Label_2305; // 0x8fd JumpB
	func_2427(); // 0x8ff NEW_2
	
Label_2305:
	var_213_string = ""; var_214_object = Obj(); // 0x901 PushV
	var_213_string = var_22_bool; // 0x902 Mov
	var_214_object = var_21_cvector; // 0x903 Mov
	func_4974(); // 0x904 NEW_2
}


task_4_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_string, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_bool = 0; var_23_string = ""; // 0x908 PushV
	var_23_string = var_21_bool; // 0x909 Mov
	func_4794(var_22_bool, var_23_string); // 0x90a NEW_2
	if(var_22_bool == 0) goto Label_2324; // 0x90c JumpB
	func_2427(); // 0x90e NEW_2
	var_31_string = ""; // 0x910 PushV
	var_31_string = var_21_bool; // 0x911 Mov
	func_4810(var_31_string); // 0x912 NEW_2
	
Label_2324:
	return 0; // 0x914 Return
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	func_2427(); // 0x916 NEW_2
	func_4985(); // 0x919 NEW_2
	return 0; // 0x91b Return
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_bool = 0; var_23_object = Obj(); // 0x91d PushV
	var_23_object = var_21_bool; // 0x91e Mov
	func_4752(var_22_bool, var_23_object); // 0x91f NEW_2
	if(var_22_bool == 0) goto Label_2345; // 0x921 JumpB
	func_2427(); // 0x923 NEW_2
	var_36_object = Obj(); // 0x925 PushV
	var_36_object = var_21_bool; // 0x926 Mov
	func_4775(var_36_object); // 0x927 NEW_2
	
Label_2345:
	return 0; // 0x929 Return
}


task_5_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0; // 0x9b8 PushV
	var_24_int = 0; var_25_object = Obj(); // 0x9b9 PushV
	var_25_object = var_21_bool; // 0x9ba Mov
	func_4976(var_25_object); // 0x9bb NEW_2
	var_23_int = var_24_int; // 0x9bc Mov
	var_26_int = 0; // 0x9be PushI
	var_27_bool = var_23_int > var_26_int; // 0x9bf GT
	if(var_27_bool == 0) goto Label_2507; // 0x9c0 JumpB
	var_28_int = 1; // 0x9c1 PushI
	var_29_bool = var_23_int > var_28_int; // 0x9c2 GT
	if(var_29_bool == 0) goto Label_2503; // 0x9c3 JumpB
	func_2631(); // 0x9c5 NEW_2
	
Label_2503:
	var_32_object = Obj(); // 0x9c7 PushV
	var_32_object = var_21_bool; // 0x9c8 Mov
	func_4979(var_32_object); // 0x9c9 NEW_2
	
Label_2507:
	return 2; // 0x9cb Return
}


task_5_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0; // 0x9cc PushV
	var_24_object = Obj(); // 0x9cd PushV
	var_24_object = var_21_bool; // 0x9ce Mov
	func_4781(var_24_object); // 0x9cf NEW_2
	var_33_int = 0; var_34_object = Obj(); // 0x9d1 PushV
	var_34_object = var_21_bool; // 0x9d2 Mov
	func_4864(var_33_int, var_34_object); // 0x9d3 NEW_2
	var_23_int = var_33_int; // 0x9d4 Mov
	var_69_int = 0; // 0x9d6 PushI
	var_70_bool = var_23_int > var_69_int; // 0x9d7 GT
	if(var_70_bool == 0) goto Label_2531; // 0x9d8 JumpB
	var_71_int = 1; // 0x9d9 PushI
	var_72_bool = var_23_int > var_71_int; // 0x9da GT
	if(var_72_bool == 0) goto Label_2527; // 0x9db JumpB
	func_2631(); // 0x9dd NEW_2
	
Label_2527:
	var_75_object = Obj(); // 0x9df PushV
	var_75_object = var_21_bool; // 0x9e0 Mov
	func_4874(var_75_object); // 0x9e1 NEW_2
	
Label_2531:
	return 2; // 0x9e3 Return
}


task_5_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_object, var_22_cvector, var_23_bool)
{
	var_24_int = 0; var_25_int = 0; // 0x9e4 PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_object = Obj(); var_29_bool = 0; // 0x9e5 PushV
	var_27_object = var_21_object; // 0x9e6 Mov
	var_28_object = var_22_cvector; // 0x9e7 Mov
	var_29_bool = var_23_bool; // 0x9e8 Mov
	func_5256(var_27_object, var_28_object, var_29_bool); // 0x9e9 NEW_2
	if(var_26_bool == 0) goto Label_2559; // 0x9eb JumpB
	var_73_int = 0; var_74_object = Obj(); var_75_bool = 0; // 0x9ec PushV
	var_74_object = var_21_object; // 0x9ed Mov
	var_75_bool = var_23_bool; // 0x9ee Mov
	func_4882(var_74_object, var_75_bool); // 0x9ef NEW_2
	var_25_int = var_73_int; // 0x9f0 Mov
	var_104_int = 0; // 0x9f2 PushI
	var_105_bool = var_25_int > var_104_int; // 0x9f3 GT
	if(var_105_bool == 0) goto Label_2559; // 0x9f4 JumpB
	var_106_int = 1; // 0x9f5 PushI
	var_107_bool = var_25_int > var_106_int; // 0x9f6 GT
	if(var_107_bool == 0) goto Label_2555; // 0x9f7 JumpB
	func_2631(); // 0x9f9 NEW_2
	
Label_2555:
	var_110_object = Obj(); // 0x9fb PushV
	var_110_object = var_21_object; // 0x9fc Mov
	func_4892(var_110_object); // 0x9fd NEW_2
	
Label_2559:
	return 2; // 0x9ff Return
}


task_5_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_int = 0; var_23_int = 0; // 0xa00 PushV
	var_24_int = 0; var_25_object = Obj(); // 0xa01 PushV
	var_25_object = var_21_bool; // 0xa02 Mov
	func_4966(var_25_object); // 0xa03 NEW_2
	var_23_int = var_24_int; // 0xa04 Mov
	var_26_int = 0; // 0xa06 PushI
	var_27_bool = var_23_int > var_26_int; // 0xa07 GT
	if(var_27_bool == 0) goto Label_2579; // 0xa08 JumpB
	var_28_int = 1; // 0xa09 PushI
	var_29_bool = var_23_int > var_28_int; // 0xa0a GT
	if(var_29_bool == 0) goto Label_2575; // 0xa0b JumpB
	func_2631(); // 0xa0d NEW_2
	
Label_2575:
	var_32_object = Obj(); // 0xa0f PushV
	var_32_object = var_21_bool; // 0xa10 Mov
	func_4969(); // 0xa11 NEW_2
	
Label_2579:
	return 2; // 0xa13 Return
}


task_5_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_string, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0xa14 PushV
	var_25_bool = 0; var_26_object = Obj(); var_27_string = ""; // 0xa15 PushV
	var_26_object = var_21_cvector; // 0xa16 Mov
	var_27_string = var_22_bool; // 0xa17 Mov
	func_4695(var_25_bool, var_26_object, var_27_string); // 0xa18 NEW_2
	if(var_25_bool == 0) goto Label_2596; // 0xa1a JumpB
	func_2631(); // 0xa1c NEW_2
	var_59_object = Obj(); var_60_string = ""; // 0xa1e PushV
	var_59_object = var_21_cvector; // 0xa1f Mov
	var_60_string = var_22_bool; // 0xa20 Mov
	func_4727(var_59_object, var_60_string); // 0xa21 NEW_2
	goto Label_2616; // 0xa23 Jump
	
Label_2616:
	return 2; // 0xa38 Return
	
Label_2596:
	var_208_int = 0; var_209_string = ""; var_210_object = Obj(); // 0xa24 PushV
	var_209_string = var_22_bool; // 0xa25 Mov
	var_210_object = var_21_cvector; // 0xa26 Mov
	func_4971(var_210_object); // 0xa27 NEW_2
	var_24_int = var_208_int; // 0xa28 Mov
	var_211_int = 0; // 0xa2a PushI
	var_212_bool = var_24_int > var_211_int; // 0xa2b GT
	if(var_212_bool == 0) goto Label_2616; // 0xa2c JumpB
	var_213_int = 1; // 0xa2d PushI
	var_214_bool = var_24_int > var_213_int; // 0xa2e GT
	if(var_214_bool == 0) goto Label_2611; // 0xa2f JumpB
	func_2631(); // 0xa31 NEW_2
	
Label_2611:
	var_215_string = ""; var_216_object = Obj(); // 0xa33 PushV
	var_215_string = var_22_bool; // 0xa34 Mov
	var_216_object = var_21_cvector; // 0xa35 Mov
	func_4974(); // 0xa36 NEW_2
}


task_5_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_bool = 0; var_23_string = ""; // 0xa3a PushV
	var_23_string = var_21_bool; // 0xa3b Mov
	func_4794(var_22_bool, var_23_string); // 0xa3c NEW_2
	if(var_22_bool == 0) goto Label_2630; // 0xa3e JumpB
	func_2631(); // 0xa40 NEW_2
	var_33_string = ""; // 0xa42 PushV
	var_33_string = var_21_bool; // 0xa43 Mov
	func_4810(var_33_string); // 0xa44 NEW_2
	
Label_2630:
	return 0; // 0xa46 Return
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	func_2631(); // 0xa54 NEW_2
	var_24_object = Obj(); // 0xa56 PushV
	var_24_object = var_21_bool; // 0xa57 Mov
	func_4671(); // 0xa58 NEW_2
	return 0; // 0xa5a Return
}


task_5_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); // 0xa5b PushV
	var_26_int = 111; // 0xa5c PushI
	var_27_bool = var_21_bool != var_26_int; // 0xa5d Neq
	if(var_27_bool == 0) goto Label_2656; // 0xa5e JumpB
	return 4; // 0xa5f Return
	
Label_2656:
	var_28_bool = 0; var_29_object = Obj(); // 0xa60 PushV
	var_29_object = var_0_object; // 0xa61 MovT
	func_3582(var_28_bool, var_29_object); // 0xa62 NEW_2
	var_62_bool = var_28_bool == 0; // 0xa64 Not
	if(var_62_bool == 0) goto Label_2666; // 0xa65 JumpB
	func_2631(); // 0xa67 NEW_2
	return 4; // 0xa69 Return
	
Label_2666:
	GetDirection(var_24_cvector); // 0xa6a Func
	var_65_cvector = CVector(0,0,0); var_66_object = Obj(); // 0xa6c PushV
	var_66_object = var_0_object; // 0xa6d MovT
	func_3509(var_66_object); // 0xa6e NEW_2
	var_25_cvector = var_65_cvector; // 0xa6f Mov
	var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); // 0xa71 PushV
	var_72_cvector = var_24_cvector; // 0xa72 Mov
	var_73_cvector = var_25_cvector; // 0xa73 Mov
	func_3974(var_71_float, var_72_cvector, var_73_cvector); // 0xa74 NEW_2
	var_95_float = 0.5; // 0xa76 PushF
	var_96_bool = var_71_float < var_95_float; // 0xa77 LT
	if(var_96_bool == 0) goto Label_2685; // 0xa78 JumpB
	var_97_object = Obj(); // 0xa79 PushV
	var_97_object = var_0_object; // 0xa7a MovT
	func_3732(); // 0xa7b NEW_2
	
Label_2685:
	return 4; // 0xa7d Return
}


task_5_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	func_2631(); // 0xa7f NEW_2
	func_4985(); // 0xa82 NEW_2
	return 0; // 0xa84 Return
}


task_5_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_bool = 0; var_23_object = Obj(); // 0xa86 PushV
	var_23_object = var_21_bool; // 0xa87 Mov
	func_4752(var_22_bool, var_23_object); // 0xa88 NEW_2
	if(var_22_bool == 0) goto Label_2706; // 0xa8a JumpB
	func_2631(); // 0xa8c NEW_2
	var_38_object = Obj(); // 0xa8e PushV
	var_38_object = var_21_bool; // 0xa8f Mov
	func_4775(var_38_object); // 0xa90 NEW_2
	
Label_2706:
	return 0; // 0xa92 Return
}


task_6_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	func_2897(var_20_bool); // 0xab0 NEW_2
	func_4985(); // 0xab3 NEW_2
	return 0; // 0xab5 Return
}


task_6_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_int, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_cvector = CVector(0,0,0); var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_float = 0; // 0xb1d PushV
	var_30_int = 120; // 0xb1e PushI
	var_31_bool = var_21_bool != var_30_int; // 0xb1f Neq
	if(var_31_bool == 0) goto Label_2850; // 0xb20 JumpB
	return 8; // 0xb21 Return
	
Label_2850:
	var_32_bool = var_0_object == 0; // 0xb22 NullEq
	if(var_32_bool == 0) goto Label_2859; // 0xb23 JumpB
	Stop(); // 0xb24 Func
	var_33_int = 1; // 0xb26 PushI
	KillTimer(var_33_int); // 0xb27 Func
	var_2_object = 1; // 0xb29 TMovB
	goto Label_2896; // 0xb2a Jump
	
Label_2896:
	return 8; // 0xb50 Return
	
Label_2859:
	GetDirection(var_26_cvector); // 0xb2b Func
	var_34_float = 7000.0; // 0xb2d PushF
	FindDirLength(var_27_float, var_26_cvector, var_34_float); // 0xb2e Func
	var_35_cvector = CVector(0,0,0); var_36_float = 0; // 0xb30 PushV
	var_36_float = 1.74533; // 0xb31 MovF
	func_2742(var_35_cvector, var_36_float); // 0xb32 NEW_2
	var_28_cvector = var_35_cvector; // 0xb33 Mov
	var_29_float = var_28_cvector | var_28_cvector; // 0xb35 Or2
	var_65_bool = 0; // 0xb36 PushV
	var_65_bool = 0; // 0xb37 MovB
	var_66_float = 2500.0; // 0xb38 PushF
	var_67_bool = var_29_float >= var_66_float; // 0xb39 GE
	if(var_67_bool == 0) goto Label_2889; // 0xb3a JumpB
	var_68_bool = 0; // 0xb3b PushV
	var_68_bool = 1; // 0xb3c MovB
	var_69_float = var_27_float * var_27_float; // 0xb3d Mult
	var_70_float = 2.25; // 0xb3e PushF
	var_71_float = var_69_float * var_70_float; // 0xb3f Mult
	var_72_bool = var_29_float >= var_71_float; // 0xb40 GE
	if(var_72_bool == 0) goto Label_2887; // 0xb41 JumpB
	var_73_bool = 0; // 0xb42 PushV
	func_2913(var_68_bool, var_73_bool); // 0xb43 NEW_2
	if(var_73_bool == 0) goto Label_2887; // 0xb45 JumpB
	var_68_bool = 0; // 0xb46 MovB
	
Label_2887:
	if(var_68_bool == 0) goto Label_2889; // 0xb47 JumpB
	var_65_bool = 1; // 0xb48 MovB
	
Label_2889:
	if(var_65_bool == 0) goto Label_2896; // 0xb49 JumpB
	Stop(); // 0xb4a Func
	var_93_cvector = CVector(0,0,0); // 0xb4c PushV
	func_3504(var_93_cvector); // 0xb4d NEW_2
	var_1_object = var_93_cvector + var_28_cvector; // 0xb4f Add2
}


task_6_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	func_2897(var_21_bool); // 0xb5a NEW_2
	var_23_object = Obj(); // 0xb5c PushV
	var_23_object = var_21_bool; // 0xb5d Mov
	func_4671(); // 0xb5e NEW_2
	return 0; // 0xb60 Return
}


task_7_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_int, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_cvector = CVector(0,0,0); var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_float = 0; // 0xbd8 PushV
	var_30_int = 120; // 0xbd9 PushI
	var_31_bool = var_21_bool != var_30_int; // 0xbda Neq
	if(var_31_bool == 0) goto Label_3037; // 0xbdb JumpB
	return 8; // 0xbdc Return
	
Label_3037:
	var_32_bool = var_0_object == 0; // 0xbdd NullEq
	if(var_32_bool == 0) goto Label_3046; // 0xbde JumpB
	Stop(); // 0xbdf Func
	var_33_int = 1; // 0xbe1 PushI
	KillTimer(var_33_int); // 0xbe2 Func
	var_2_object = 1; // 0xbe4 TMovB
	goto Label_3083; // 0xbe5 Jump
	
Label_3083:
	return 8; // 0xc0b Return
	
Label_3046:
	GetDirection(var_26_cvector); // 0xbe6 Func
	var_34_float = 7000.0; // 0xbe8 PushF
	FindDirLength(var_27_float, var_26_cvector, var_34_float); // 0xbe9 Func
	var_35_cvector = CVector(0,0,0); var_36_float = 0; // 0xbeb PushV
	var_36_float = 1.74533; // 0xbec MovF
	func_2929(var_35_cvector, var_36_float); // 0xbed NEW_2
	var_28_cvector = var_35_cvector; // 0xbee Mov
	var_29_float = var_28_cvector | var_28_cvector; // 0xbf0 Or2
	var_65_bool = 0; // 0xbf1 PushV
	var_65_bool = 0; // 0xbf2 MovB
	var_66_float = 2500.0; // 0xbf3 PushF
	var_67_bool = var_29_float >= var_66_float; // 0xbf4 GE
	if(var_67_bool == 0) goto Label_3076; // 0xbf5 JumpB
	var_68_bool = 0; // 0xbf6 PushV
	var_68_bool = 1; // 0xbf7 MovB
	var_69_float = var_27_float * var_27_float; // 0xbf8 Mult
	var_70_float = 2.25; // 0xbf9 PushF
	var_71_float = var_69_float * var_70_float; // 0xbfa Mult
	var_72_bool = var_29_float >= var_71_float; // 0xbfb GE
	if(var_72_bool == 0) goto Label_3074; // 0xbfc JumpB
	var_73_bool = 0; // 0xbfd PushV
	func_3100(var_68_bool, var_73_bool); // 0xbfe NEW_2
	if(var_73_bool == 0) goto Label_3074; // 0xc00 JumpB
	var_68_bool = 0; // 0xc01 MovB
	
Label_3074:
	if(var_68_bool == 0) goto Label_3076; // 0xc02 JumpB
	var_65_bool = 1; // 0xc03 MovB
	
Label_3076:
	if(var_65_bool == 0) goto Label_3083; // 0xc04 JumpB
	Stop(); // 0xc05 Func
	var_93_cvector = CVector(0,0,0); // 0xc07 PushV
	func_3504(var_93_cvector); // 0xc08 NEW_2
	var_1_object = var_93_cvector + var_28_cvector; // 0xc0a Add2
}


task_7_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	func_3084(var_21_bool); // 0xc15 NEW_2
	var_23_object = Obj(); // 0xc17 PushV
	var_23_object = var_21_bool; // 0xc18 Mov
	func_4671(); // 0xc19 NEW_2
	return 0; // 0xc1b Return
}


task_8_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	func_3278(var_20_bool); // 0xc2d NEW_2
	func_4985(); // 0xc30 NEW_2
	return 0; // 0xc32 Return
}


task_8_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_int, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_cvector = CVector(0,0,0); var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_float = 0; // 0xc9a PushV
	var_30_int = 120; // 0xc9b PushI
	var_31_bool = var_21_bool != var_30_int; // 0xc9c Neq
	if(var_31_bool == 0) goto Label_3231; // 0xc9d JumpB
	return 8; // 0xc9e Return
	
Label_3231:
	var_32_bool = var_0_object == 0; // 0xc9f NullEq
	if(var_32_bool == 0) goto Label_3240; // 0xca0 JumpB
	Stop(); // 0xca1 Func
	var_33_int = 1; // 0xca3 PushI
	KillTimer(var_33_int); // 0xca4 Func
	var_2_object = 1; // 0xca6 TMovB
	goto Label_3277; // 0xca7 Jump
	
Label_3277:
	return 8; // 0xccd Return
	
Label_3240:
	GetDirection(var_26_cvector); // 0xca8 Func
	var_34_float = 7000.0; // 0xcaa PushF
	FindDirLength(var_27_float, var_26_cvector, var_34_float); // 0xcab Func
	var_35_cvector = CVector(0,0,0); var_36_float = 0; // 0xcad PushV
	var_36_float = 1.74533; // 0xcae MovF
	func_3123(var_35_cvector, var_36_float); // 0xcaf NEW_2
	var_28_cvector = var_35_cvector; // 0xcb0 Mov
	var_29_float = var_28_cvector | var_28_cvector; // 0xcb2 Or2
	var_65_bool = 0; // 0xcb3 PushV
	var_65_bool = 0; // 0xcb4 MovB
	var_66_float = 2500.0; // 0xcb5 PushF
	var_67_bool = var_29_float >= var_66_float; // 0xcb6 GE
	if(var_67_bool == 0) goto Label_3270; // 0xcb7 JumpB
	var_68_bool = 0; // 0xcb8 PushV
	var_68_bool = 1; // 0xcb9 MovB
	var_69_float = var_27_float * var_27_float; // 0xcba Mult
	var_70_float = 2.25; // 0xcbb PushF
	var_71_float = var_69_float * var_70_float; // 0xcbc Mult
	var_72_bool = var_29_float >= var_71_float; // 0xcbd GE
	if(var_72_bool == 0) goto Label_3268; // 0xcbe JumpB
	var_73_bool = 0; // 0xcbf PushV
	func_3294(var_68_bool, var_73_bool); // 0xcc0 NEW_2
	if(var_73_bool == 0) goto Label_3268; // 0xcc2 JumpB
	var_68_bool = 0; // 0xcc3 MovB
	
Label_3268:
	if(var_68_bool == 0) goto Label_3270; // 0xcc4 JumpB
	var_65_bool = 1; // 0xcc5 MovB
	
Label_3270:
	if(var_65_bool == 0) goto Label_3277; // 0xcc6 JumpB
	Stop(); // 0xcc7 Func
	var_93_cvector = CVector(0,0,0); // 0xcc9 PushV
	func_3504(var_93_cvector); // 0xcca NEW_2
	var_1_object = var_93_cvector + var_28_cvector; // 0xccc Add2
}


task_8_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_object, var_20_cvector, var_21_bool)
{
	func_3278(var_21_bool); // 0xcd7 NEW_2
	var_23_object = Obj(); // 0xcd9 PushV
	var_23_object = var_21_bool; // 0xcda Mov
	func_4671(); // 0xcdb NEW_2
	return 0; // 0xcdd Return
}


task_9_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	func_3472(var_20_bool); // 0xcef NEW_2
	func_4985(); // 0xcf2 NEW_2
	return 0; // 0xcf4 Return
}


task_9_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_int)
{
	var_22_cvector = CVector(0,0,0); var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_float = 0; // 0xd5c PushV
	var_30_int = 120; // 0xd5d PushI
	var_31_bool = var_21_int != var_30_int; // 0xd5e Neq
	if(var_31_bool == 0) goto Label_3425; // 0xd5f JumpB
	return 8; // 0xd60 Return
	
Label_3425:
	var_32_bool = var_0_object == 0; // 0xd61 NullEq
	if(var_32_bool == 0) goto Label_3434; // 0xd62 JumpB
	Stop(); // 0xd63 Func
	var_33_int = 1; // 0xd65 PushI
	KillTimer(var_33_int); // 0xd66 Func
	var_2_object = 1; // 0xd68 TMovB
	goto Label_3471; // 0xd69 Jump
	
Label_3471:
	return 8; // 0xd8f Return
	
Label_3434:
	GetDirection(var_26_cvector); // 0xd6a Func
	var_34_float = 7000.0; // 0xd6c PushF
	FindDirLength(var_27_float, var_26_cvector, var_34_float); // 0xd6d Func
	var_35_cvector = CVector(0,0,0); var_36_float = 0; // 0xd6f PushV
	var_36_float = 1.74533; // 0xd70 MovF
	func_3317(var_35_cvector, var_36_float); // 0xd71 NEW_2
	var_28_cvector = var_35_cvector; // 0xd72 Mov
	var_29_float = var_28_cvector | var_28_cvector; // 0xd74 Or2
	var_65_bool = 0; // 0xd75 PushV
	var_65_bool = 0; // 0xd76 MovB
	var_66_float = 2500.0; // 0xd77 PushF
	var_67_bool = var_29_float >= var_66_float; // 0xd78 GE
	if(var_67_bool == 0) goto Label_3464; // 0xd79 JumpB
	var_68_bool = 0; // 0xd7a PushV
	var_68_bool = 1; // 0xd7b MovB
	var_69_float = var_27_float * var_27_float; // 0xd7c Mult
	var_70_float = 2.25; // 0xd7d PushF
	var_71_float = var_69_float * var_70_float; // 0xd7e Mult
	var_72_bool = var_29_float >= var_71_float; // 0xd7f GE
	if(var_72_bool == 0) goto Label_3462; // 0xd80 JumpB
	var_73_bool = 0; // 0xd81 PushV
	func_3488(var_68_bool, var_73_bool); // 0xd82 NEW_2
	if(var_73_bool == 0) goto Label_3462; // 0xd84 JumpB
	var_68_bool = 0; // 0xd85 MovB
	
Label_3462:
	if(var_68_bool == 0) goto Label_3464; // 0xd86 JumpB
	var_65_bool = 1; // 0xd87 MovB
	
Label_3464:
	if(var_65_bool == 0) goto Label_3471; // 0xd88 JumpB
	Stop(); // 0xd89 Func
	var_93_cvector = CVector(0,0,0); // 0xd8b PushV
	func_3504(var_93_cvector); // 0xd8c NEW_2
	var_1_object = var_93_cvector + var_28_cvector; // 0xd8e Add2
}


task_9_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_object)
{
	func_3472(var_21_object); // 0xd99 NEW_2
	var_23_object = Obj(); // 0xd9b PushV
	var_23_object = var_21_object; // 0xd9c Mov
	func_4671(); // 0xd9d NEW_2
	return 0; // 0xd9f Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_object, var_22_string)
{
	var_23_float = 0; var_24_float = 0; // 0x1232 PushV
	var_25_string = "health"; // 0x1233 PushS
	var_26_bool = var_22_string == var_25_string; // 0x1234 Eq
	if(var_26_bool == 0) goto Label_4670; // 0x1235 JumpB
	var_27_string = "health"; // 0x1236 PushS
	GetProperty(var_27_string, var_24_float); // 0x1237 Func
	var_28_int = 0; // 0x1239 PushI
	var_29_bool = var_24_float <= var_28_int; // 0x123a LE
	if(var_29_bool == 0) goto Label_4670; // 0x123b JumpB
	SignalDeath(var_21_object); // 0x123c Func
	
Label_4670:
	return 2; // 0x123e Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_object)
{
	var_22_object = Obj(); // 0x1240 PushV
	var_22_object = var_21_object; // 0x1241 Mov
	func_4650(var_22_object); // 0x1242 NEW_2
	return 0; // 0x1244 Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_object, var_22_int, var_23_float, var_24_float)
{
	var_25_object = Obj(); var_26_int = 0; var_27_float = 0; // 0x1246 PushV
	var_25_object = var_21_object; // 0x1247 Mov
	var_26_int = var_22_int; // 0x1248 Mov
	var_27_float = var_23_float; // 0x1249 Mov
	func_3650(var_25_object, var_26_int, var_27_float); // 0x124a NEW_2
	return 0; // 0x124c Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_object, var_22_int, var_23_float, var_24_float, var_25_cvector, var_26_cvector)
{
	var_27_object = Obj(); var_28_int = 0; var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); // 0x124e PushV
	var_27_object = var_21_object; // 0x124f Mov
	var_28_int = var_22_int; // 0x1250 Mov
	var_29_float = var_23_float; // 0x1251 Mov
	var_30_cvector = var_25_cvector; // 0x1252 Mov
	var_31_cvector = var_26_cvector; // 0x1253 Mov
	func_3718(var_29_float, var_30_cvector, var_31_cvector); // 0x1254 NEW_2
	return 0; // 0x1256 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool)
{
	var_21_bool = 1; // 0x715 PushB
	SensePlayerOnly(var_21_bool); // 0x716 Func
	func_5228(); // 0x719 NEW_2
	func_1828(); // 0x71c NEW_2
	
Label_1822:
	var_2_object = 0; // 0x71e TMovB
	func_2089(var_19_cvector, var_20_bool); // 0x720 NEW_2
	goto Label_1822; // 0x722 Jump
}


func_0(var_0_object, var_46_int, var_47_object)
{
	var_49_object = Obj(); var_50_bool = 0; var_51_int = 0; var_52_bool = 0; var_53_object = Obj(); var_54_bool = 0; var_55_int = 0; var_56_bool = 0; // 0x0 PushV
	var_0_object = var_47_object; // 0x1 TMov
	var_57_bool = 0; var_58_object = Obj(); var_59_float = 0; // 0x2 PushV
	var_58_object = var_47_object; // 0x3 Mov
	var_59_float = 70.0; // 0x4 MovF
	func_3748(var_58_object, var_59_float); // 0x5 NEW_2
	var_104_bool = var_57_bool == 0; // 0x7 Not
	if(var_104_bool == 0) goto Label_11; // 0x8 JumpB
	var_46_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_53_object); // 0xb Func
	var_105_int = 0; // 0xd PushV
	func_5220(var_105_int); // 0xe NEW_2
	SetNPCName(var_105_int); // 0x10 ObjFunc
	var_106_int = 0; // 0x12 PushV
	func_5218(var_106_int); // 0x13 NEW_2
	SetNPCDescription(var_106_int); // 0x15 ObjFunc
	var_107_string = ""; // 0x17 PushV
	func_5222(var_107_string); // 0x18 NEW_2
	SetPhoto(var_107_string); // 0x1a ObjFunc
	var_108_string = ""; // 0x1c PushV
	func_5224(var_108_string); // 0x1d NEW_2
	SetPhoto2(var_108_string); // 0x1f ObjFunc
	var_109_int = 0; // 0x21 PushV
	func_4279(var_109_int); // 0x22 NEW_2
	SetPlayerName(var_109_int); // 0x24 ObjFunc
	var_55_int = -1; // 0x26 MovI
	IsOverrideActive(var_54_bool); // 0x27 Func
	var_117_bool = var_54_bool; // 0x29 Push
	if(var_117_bool == 0) goto Label_45; // 0x2a JumpB
	var_46_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_53_object); // 0x2d Func
	var_118_object = Obj(); var_119_object = Obj(); // 0x2f PushV
	var_118_object = var_47_object; // 0x30 Mov
	var_119_object = var_53_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_120_object, var_121_object, var_122_string, var_123_bool, var_118_object, var_119_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_56_bool); // 0x36 ObjFunc
	
Label_56:
	var_441_bool = var_56_bool == 0; // 0x38 Not
	if(var_441_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_56_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_442_object = Obj(); // 0x3f PushV
	var_442_object = var_47_object; // 0x40 Mov
	func_3817(); // 0x41 NEW_2
	StopDialog(var_53_object); // 0x43 Func
	GetReturnValue(var_55_int); // 0x45 ObjFunc
	var_46_int = var_55_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_2049(var_2_object, var_22_object)
{
	var_23_bool = 0; var_24_int = 0; var_25_bool = 0; var_26_int = 0; // 0x801 PushV
	var_27_bool = 0; var_28_object = Obj(); // 0x802 PushV
	var_28_object = var_22_object; // 0x803 Mov
	func_3582(var_27_bool, var_28_object); // 0x804 NEW_2
	var_61_bool = var_27_bool == 0; // 0x806 Not
	if(var_61_bool == 0) goto Label_2057; // 0x807 JumpB
	return 4; // 0x808 Return
	
Label_2057:
	var_62_object = var_2_object; // 0x809 PushT
	if(var_62_object == 0) goto Label_2060; // 0x80a JumpB
	return 4; // 0x80b Return
	
Label_2060:
	IsPlayerActor(var_22_object, var_25_bool); // 0x80c Func
	var_63_bool = var_25_bool == 0; // 0x80e Not
	if(var_63_bool == 0) goto Label_2065; // 0x80f JumpB
	return 4; // 0x810 Return
	
Label_2065:
	var_64_int = 0; var_65_object = Obj(); // 0x811 PushV
	var_65_object = var_22_object; // 0x812 Mov
	func_4847(var_65_object); // 0x813 NEW_2
	var_26_int = var_64_int; // 0x814 Mov
	var_76_int = 0; // 0x816 PushI
	var_77_bool = var_26_int > var_76_int; // 0x817 GT
	if(var_77_bool == 0) goto Label_2088; // 0x818 JumpB
	var_78_int = 1; // 0x819 PushI
	var_79_bool = var_26_int > var_78_int; // 0x81a GT
	if(var_79_bool == 0) goto Label_2079; // 0x81b JumpB
	func_2032(var_26_int); // 0x81d NEW_2
	
Label_2079:
	var_81_object = Obj(); // 0x81f PushV
	var_81_object = var_22_object; // 0x820 Mov
	func_4856(var_81_object); // 0x821 NEW_2
	var_2_object = 1; // 0x823 TMovB
	var_146_int = 110; // 0x824 PushI
	var_147_float = 10.0; // 0x825 PushF
	SetTimer(var_146_int, var_147_float); // 0x826 Func
	
Label_2088:
	return 4; // 0x828 Return
}


func_4104(var_195_bool, var_196_object)
{
	var_197_bool = 0; var_198_object = Obj(); // 0x1009 PushV
	var_198_object = var_196_object; // 0x100a Mov
	func_4219(var_198_object); // 0x100b NEW_2
	if(var_197_bool == 0) goto Label_4112; // 0x100d JumpB
	var_195_bool = 1; // 0x100e MovB
	return 0; // 0x100f Return
	
Label_4112:
	var_195_bool = 0; // 0x1010 MovB
	return 0; // 0x1011 Return
}


func_3084(var_2_object)
{
	Stop(); // 0xc0c Func
	var_22_int = 120; // 0xc0e PushI
	KillTimer(var_22_int); // 0xc0f Func
	var_2_object = 1; // 0xc11 TMovB
	return 0; // 0xc12 Return
}


func_4114(var_218_bool, var_219_object)
{
	var_220_bool = 0; var_221_object = Obj(); // 0x1013 PushV
	var_221_object = var_219_object; // 0x1014 Mov
	func_4226(var_221_object); // 0x1015 NEW_2
	if(var_220_bool == 0) goto Label_4122; // 0x1017 JumpB
	var_218_bool = 1; // 0x1018 MovB
	return 0; // 0x1019 Return
	
Label_4122:
	var_218_bool = 0; // 0x101a MovB
	return 0; // 0x101b Return
}


func_3606(var_38_object)
{
	var_39_bool = 0; var_40_int = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_string = ""; var_46_bool = 0; var_47_int = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_string = ""; // 0xe16 PushV
	var_53_bool = var_38_object == 0; // 0xe17 NullEq
	if(var_53_bool == 0) goto Label_3610; // 0xe18 JumpB
	return 14; // 0xe19 Return
	
Label_3610:
	IsDead(var_46_bool); // 0xe1a Func
	var_54_bool = var_46_bool; // 0xe1c Push
	if(var_54_bool == 0) goto Label_3615; // 0xe1d JumpB
	return 14; // 0xe1e Return
	
Label_3615:
	GetSecondaryAnimationType(var_47_int); // 0xe1f Func
	var_55_int = 0; // 0xe21 PushI
	var_56_bool = var_47_int < var_55_int; // 0xe22 LT
	if(var_56_bool == 0) goto Label_3621; // 0xe23 JumpB
	return 14; // 0xe24 Return
	
Label_3621:
	GetPosition(var_48_cvector); // 0xe25 ObjFunc
	GetPosition(var_49_cvector); // 0xe27 Func
	GetDirection(var_50_cvector); // 0xe29 Func
	var_51_cvector = var_49_cvector - var_48_cvector; // 0xe2b Sub2
	var_57_float = GetByIndex(var_51_cvector, 0); // 0xe2c PushE
	var_58_float = GetByIndex(var_50_cvector, 0); // 0xe2d PushE
	var_59_float = var_57_float * var_58_float; // 0xe2e Mult
	var_60_float = GetByIndex(var_51_cvector, 2); // 0xe2f PushE
	var_61_float = GetByIndex(var_50_cvector, 2); // 0xe30 PushE
	var_62_float = var_60_float * var_61_float; // 0xe31 Mult
	var_63_int = var_59_float + var_62_float; // 0xe32 Add
	var_64_int = 0; // 0xe33 PushI
	var_65_bool = var_63_int >= var_64_int; // 0xe34 GE
	if(var_65_bool == 0) goto Label_3640; // 0xe35 JumpB
	var_52_string = "fhit"; // 0xe36 MovS
	goto Label_3641; // 0xe37 Jump
	
Label_3641:
	var_66_string = "hit_react"; // 0xe39 PushS
	var_67_string = "1"; // 0xe3a PushS
	var_68_int = var_52_string + var_67_string; // 0xe3b Add
	var_69_string = "2"; // 0xe3c PushS
	var_70_int = var_52_string + var_69_string; // 0xe3d Add
	var_71_int = -10; // 0xe3e PushI
	FadeSecondaryAnimation(var_66_string, var_68_int, var_70_int, var_71_int); // 0xe3f Func
	return 14; // 0xe41 Return
	
Label_3640:
	var_52_string = "bhit"; // 0xe38 MovS
}


func_4124(var_224_bool, var_225_object)
{
	var_226_bool = 0; var_227_object = Obj(); // 0x101d PushV
	var_227_object = var_225_object; // 0x101e Mov
	func_4233(var_227_object); // 0x101f NEW_2
	if(var_226_bool == 0) goto Label_4132; // 0x1021 JumpB
	var_224_bool = 1; // 0x1022 MovB
	return 0; // 0x1023 Return
	
Label_4132:
	var_224_bool = 0; // 0x1024 MovB
	return 0; // 0x1025 Return
}


func_3100(var_0_object, var_73_bool)
{
	var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); // 0xc1c PushV
	GetDirection(var_76_cvector); // 0xc1d Func
	var_78_cvector = CVector(0,0,0); var_79_object = Obj(); // 0xc1f PushV
	var_79_object = var_0_object; // 0xc20 MovT
	func_3509(var_79_object); // 0xc21 NEW_2
	var_77_cvector = var_78_cvector; // 0xc22 Mov
	var_84_float = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); // 0xc24 PushV
	var_85_cvector = var_76_cvector; // 0xc25 Mov
	var_86_cvector = var_77_cvector; // 0xc26 Mov
	func_3947(var_84_float, var_85_cvector, var_86_cvector); // 0xc27 NEW_2
	var_92_float = -0.34202; // 0xc29 PushF
	var_73_bool = var_84_float >= var_92_float; // 0xc2a GE2
	return 4; // 0xc2b Return
}


func_4645(var_141_int, var_142_string)
{
	var_143_int = 0; var_144_int = 0; // 0x1225 PushV
	GetInvItemByName(var_144_int, var_142_string); // 0x1226 Func
	var_141_int = var_144_int; // 0x1228 Mov
	return 2; // 0x1229 Return
}


func_4134(var_201_bool, var_202_object)
{
	var_203_bool = 0; var_204_object = Obj(); // 0x1027 PushV
	var_204_object = var_202_object; // 0x1028 Mov
	func_4240(var_204_object); // 0x1029 NEW_2
	if(var_203_bool == 0) goto Label_4142; // 0x102b JumpB
	var_201_bool = 1; // 0x102c MovB
	return 0; // 0x102d Return
	
Label_4142:
	var_201_bool = 0; // 0x102e MovB
	return 0; // 0x102f Return
}


func_2089(var_0_object, var_1_object)
{
	var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_bool = 0; var_31_object = Obj(); var_32_bool = 0; var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; var_37_object = Obj(); var_38_bool = 0; // 0x829 PushV
	var_0_object = 0; // 0x82a TMovB
	var_1_object = 0; // 0x82b TMovB
	var_39_float = 0.5; // 0x82c PushF
	rand(var_33_float, var_39_float); // 0x82d Func
	Sleep(var_33_float); // 0x82f Func
	
Label_2097:
	var_40_bool = var_0_object == 0; // 0x831 Not
	if(var_40_bool == 0) goto Label_2147; // 0x832 JumpB
	var_41_bool = var_1_object == 0; // 0x833 Not
	if(var_41_bool == 0) goto Label_2116; // 0x834 JumpB
	
Label_2101:
	GetPosition(var_35_cvector); // 0x835 Func
	var_42_float = 0; // 0x837 PushV
	func_2148(var_42_float); // 0x838 NEW_2
	GetRandomPFPointInCircle(var_34_cvector, var_35_cvector, var_42_float, var_36_bool); // 0x83a Func
	var_45_bool = var_36_bool; // 0x83c Push
	if(var_45_bool == 0) goto Label_2111; // 0x83d JumpB
	goto Label_2115; // 0x83e Jump
	
Label_2115:
	goto Label_2117; // 0x843 Jump
	
Label_2117:
	var_46_object = Obj(); var_47_cvector = CVector(0,0,0); // 0x845 PushV
	var_47_cvector = var_34_cvector; // 0x846 Mov
	func_2176(var_46_object, var_47_cvector); // 0x847 NEW_2
	var_37_object = var_46_object; // 0x848 Mov
	var_50_bool = var_37_object != 0; // 0x84a NullNeq
	if(var_50_bool == 0) goto Label_2142; // 0x84b JumpB
	RotatePath(var_37_object, var_38_bool); // 0x84c Func
	var_51_bool = var_38_bool; // 0x84e Push
	if(var_51_bool == 0) goto Label_2141; // 0x84f JumpB
	var_52_bool = 0; // 0x850 PushV
	func_2174(var_52_bool); // 0x851 NEW_2
	FollowPath(var_37_object, var_52_bool, var_38_bool); // 0x853 Func
	var_37_object = 0; // 0x855 SetNull
	var_53_bool = var_38_bool; // 0x856 Push
	if(var_53_bool == 0) goto Label_2141; // 0x857 JumpB
	TaskCall(4); // 0x859 TaskCall
	func_2346(); // 0x85a NEW_2
	TaskReturn(); // 0x85b TaskReturn
	
Label_2141:
	goto Label_2145; // 0x85d Jump
	
Label_2145:
	var_37_object = 0; // 0x861 SetNull
	goto Label_2097; // 0x862 Jump
	
Label_2142:
	var_105_int = 1; // 0x85e PushI
	Sleep(var_105_int); // 0x85f Func
	
Label_2111:
	var_106_int = 1; // 0x83f PushI
	Sleep(var_106_int); // 0x840 Func
	goto Label_2101; // 0x842 Jump
	
Label_2116:
	var_1_object = 0; // 0x844 TMovB
	
Label_2147:
	return 12; // 0x863 Return
}


func_4650(var_22_object)
{
	var_23_object = Obj(); // 0x122b PushV
	var_23_object = var_22_object; // 0x122c Mov
	TaskCall(2); // 0x122d TaskCall
	func_1657(var_23_object); // 0x122e NEW_2
	TaskReturn(); // 0x122f TaskReturn
	return 0; // 0x1231 Return
}


func_4144(var_207_bool, var_208_object)
{
	var_209_bool = 0; var_210_object = Obj(); // 0x1031 PushV
	var_210_object = var_208_object; // 0x1032 Mov
	func_4247(var_210_object); // 0x1033 NEW_2
	if(var_209_bool == 0) goto Label_4152; // 0x1035 JumpB
	var_207_bool = 1; // 0x1036 MovB
	return 0; // 0x1037 Return
	
Label_4152:
	var_207_bool = 0; // 0x1038 MovB
	return 0; // 0x1039 Return
}


func_3123(var_35_cvector, var_36_float)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_float = 0; // 0xc33 PushV
	GetPosition(var_43_cvector); // 0xc34 Func
	GetPosition(var_44_cvector); // 0xc36 TObjFunc
	GetDirection(var_45_cvector); // 0xc38 Func
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); // 0xc3a PushV
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); // 0xc3b PushV
	var_52_cvector = var_43_cvector - var_44_cvector; // 0xc3c Sub2
	func_3931(var_51_cvector, var_52_cvector); // 0xc3d NEW_2
	var_58_float = 0.75; // 0xc3f PushF
	var_59_float = var_45_cvector * var_58_float; // 0xc40 Mult
	var_50_cvector = var_51_cvector + var_59_float; // 0xc41 Add2
	func_3931(var_49_cvector, var_50_cvector); // 0xc42 NEW_2
	var_46_cvector = var_49_cvector; // 0xc43 Mov
	var_60_int = 32; // 0xc45 PushI
	var_61_float = 7000.0; // 0xc46 PushF
	FindLongestDir(var_47_cvector, var_48_float, var_46_cvector, var_36_float, var_60_int, var_61_float); // 0xc47 Func
	var_62_int = 100; // 0xc49 PushI
	var_48_float = var_48_float - var_62_int; // 0xc4a Sub2
	var_63_int = 0; // 0xc4b PushI
	var_64_bool = var_48_float < var_63_int; // 0xc4c LT
	if(var_64_bool == 0) goto Label_3151; // 0xc4d JumpB
	var_48_float = 0; // 0xc4e MovI
	
Label_3151:
	var_35_cvector = var_47_cvector * var_48_float; // 0xc4f Mult2
	return 12; // 0xc50 Return
}


func_4154(var_284_bool, var_285_object)
{
	var_286_bool = 0; var_287_object = Obj(); // 0x103b PushV
	var_287_object = var_285_object; // 0x103c Mov
	func_4254(var_287_object); // 0x103d NEW_2
	if(var_286_bool == 0) goto Label_4162; // 0x103f JumpB
	var_284_bool = 1; // 0x1040 MovB
	return 0; // 0x1041 Return
	
Label_4162:
	var_284_bool = 0; // 0x1042 MovB
	return 0; // 0x1043 Return
}


func_3650(var_25_object, var_26_int, var_27_float)
{
	var_28_cvector = CVector(0,0,0); var_29_object = Obj(); var_30_int = 0; var_31_bool = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_int = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_object = Obj(); var_39_int = 0; var_40_bool = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_int = 0; var_44_int = 0; var_45_cvector = CVector(0,0,0); // 0xe42 PushV
	var_46_bool = 0; // 0xe43 PushV
	var_46_bool = 0; // 0xe44 MovB
	var_47_bool = 0; // 0xe45 PushV
	var_47_bool = 0; // 0xe46 MovB
	var_48_object = var_25_object; // 0xe47 Push
	if(var_48_object == 0) goto Label_3661; // 0xe48 JumpB
	var_49_int = 4; // 0xe49 PushI
	var_50_bool = var_26_int != var_49_int; // 0xe4a Neq
	if(var_50_bool == 0) goto Label_3661; // 0xe4b JumpB
	var_47_bool = 1; // 0xe4c MovB
	
Label_3661:
	if(var_47_bool == 0) goto Label_3666; // 0xe4d JumpB
	var_51_int = 5; // 0xe4e PushI
	var_52_bool = var_26_int != var_51_int; // 0xe4f Neq
	if(var_52_bool == 0) goto Label_3666; // 0xe50 JumpB
	var_46_bool = 1; // 0xe51 MovB
	
Label_3666:
	if(var_46_bool == 0) goto Label_3713; // 0xe52 JumpB
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); // 0xe53 PushV
	var_55_cvector = CVector(0,0,0); var_56_object = Obj(); // 0xe54 PushV
	var_56_object = var_25_object; // 0xe55 Mov
	func_3509(var_56_object); // 0xe56 NEW_2
	var_54_cvector = var_55_cvector; // 0xe57 Mov
	func_3931(var_53_cvector, var_54_cvector); // 0xe59 NEW_2
	var_37_cvector = var_53_cvector; // 0xe5a Mov
	CreateVectorVector(var_38_object); // 0xe5c Func
	var_39_int = 1; // 0xe5e MovI
	
Label_3679:
	var_66_string = "hit"; // 0xe5f PushS
	var_67_int = var_66_string + var_39_int; // 0xe60 Add
	GetGeometryLocator(var_67_int, var_40_bool, var_41_cvector, var_42_cvector); // 0xe61 Func
	var_68_bool = var_40_bool == 0; // 0xe63 Not
	if(var_68_bool == 0) goto Label_3686; // 0xe64 JumpB
	goto Label_3695; // 0xe65 Jump
	
Label_3695:
	size(var_43_int); // 0xe6f ObjFunc
	var_69_int = var_43_int; // 0xe71 Push
	if(var_69_int == 0) goto Label_3712; // 0xe72 JumpB
	irand(var_44_int, var_43_int); // 0xe73 Func
	get(var_45_cvector, var_44_int); // 0xe75 ObjFunc
	var_70_object = Obj(); var_71_int = 0; var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); // 0xe77 PushV
	var_70_object = var_25_object; // 0xe78 Mov
	var_71_int = var_26_int; // 0xe79 Mov
	var_72_float = var_27_float; // 0xe7a Mov
	var_73_cvector = var_45_cvector; // 0xe7b Mov
	var_74_cvector = -var_37_cvector; // 0xe7c Neg2
	func_3718(var_72_float, var_73_cvector, var_74_cvector); // 0xe7d NEW_2
	return 18; // 0xe7f Return
	
Label_3712:
	var_38_object = 0; // 0xe80 SetNull
	
Label_3713:
	var_115_object = Obj(); // 0xe81 PushV
	var_115_object = var_25_object; // 0xe82 Mov
	func_3606(var_115_object); // 0xe83 NEW_2
	return 18; // 0xe85 Return
	
Label_3686:
	var_116_int = var_42_cvector | var_37_cvector; // 0xe66 Or
	var_117_float = 0.70711; // 0xe67 PushF
	var_118_bool = var_116_int >= var_117_float; // 0xe68 GE
	if(var_118_bool == 0) goto Label_3692; // 0xe69 JumpB
	add(var_41_cvector); // 0xe6a ObjFunc
	
Label_3692:
	var_119_int = 1; // 0xe6c PushI
	var_39_int = var_39_int + var_119_int; // 0xe6d Add2
	goto Label_3679; // 0xe6e Jump
}


func_5187(var_518_bool)
{
	var_520_int = 0; var_521_bool = 0; var_522_int = 0; var_523_int = 0; var_524_bool = 0; var_525_int = 0; // 0x1443 PushV
	GetItemID(var_523_int); // 0x1444 ObjFunc
	var_526_string = "Category"; // 0x1446 PushS
	HasInvItemProperty(var_524_bool, var_523_int, var_526_string); // 0x1447 Func
	var_527_bool = var_524_bool == 0; // 0x1449 Not
	if(var_527_bool == 0) goto Label_5197; // 0x144a JumpB
	var_518_bool = 0; // 0x144b MovB
	return 6; // 0x144c Return
	
Label_5197:
	var_528_string = "Category"; // 0x144d PushS
	GetInvItemProperty(var_525_int, var_523_int, var_528_string); // 0x144e Func
	var_529_int = 1; // 0x1450 PushI
	var_518_bool = var_525_int == var_529_int; // 0x1451 Eq2
	return 6; // 0x1452 Return
}


func_4164(var_290_bool, var_291_object)
{
	var_292_bool = 0; var_293_object = Obj(); // 0x1045 PushV
	var_293_object = var_291_object; // 0x1046 Mov
	func_4261(var_293_object); // 0x1047 NEW_2
	if(var_292_bool == 0) goto Label_4172; // 0x1049 JumpB
	var_290_bool = 1; // 0x104a MovB
	return 0; // 0x104b Return
	
Label_4172:
	var_290_bool = 0; // 0x104c MovB
	return 0; // 0x104d Return
}


func_2631()
{
	StopGroup0(); // 0xa47 Func
	StopAsync(); // 0xa49 Func
	var_36_string = "head"; // 0xa4b PushS
	UnlookAsync(var_36_string); // 0xa4c Func
	var_37_int = 111; // 0xa4e PushI
	KillTimer(var_37_int); // 0xa4f Func
	return 0; // 0xa51 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_118_object, var_119_object)
{
	var_0_object = var_119_object; // 0x4b TMov
	var_1_object = var_118_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_124_int = 1; // 0x4e PushI
	if(var_124_int == 0) goto Label_619; // 0x4f JumpB
	var_125_bool = 0; var_126_object = Obj(); // 0x50 PushV
	var_126_object = var_1_object; // 0x51 MovT
	func_4042(var_126_object); // 0x52 NEW_2
	if(var_125_bool == 0) goto Label_512; // 0x54 JumpB
	var_133_string = ""; // 0x55 PushV
	var_133_string = "Neutral"; // 0x56 MovS
	func_649(var_119_object, var_133_string); // 0x57 NEW_2
	var_150_int = 543180; // 0x59 PushI
	SetMessage(var_150_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_151_bool = 0; // 0x5e PushV
	var_151_bool = 1; // 0x5f MovB
	var_152_bool = 0; // 0x60 PushV
	var_152_bool = 1; // 0x61 MovB
	var_153_bool = 0; // 0x62 PushV
	var_153_bool = 1; // 0x63 MovB
	var_154_bool = 0; var_155_object = Obj(); // 0x64 PushV
	var_155_object = var_1_object; // 0x65 MovT
	func_4054(var_154_bool, var_155_object); // 0x66 NEW_2
	if(var_154_bool == 0) goto Label_111; // 0x68 JumpB
	var_165_bool = 0; var_166_object = Obj(); // 0x69 PushV
	var_166_object = var_1_object; // 0x6a MovT
	func_4074(var_165_bool, var_166_object); // 0x6b NEW_2
	if(var_165_bool == 0) goto Label_111; // 0x6d JumpB
	var_153_bool = 0; // 0x6e MovB
	
Label_111:
	if(var_153_bool == 0) goto Label_118; // 0x6f JumpB
	var_171_bool = 0; var_172_object = Obj(); // 0x70 PushV
	var_172_object = var_1_object; // 0x71 MovT
	func_4084(var_171_bool, var_172_object); // 0x72 NEW_2
	if(var_171_bool == 0) goto Label_118; // 0x74 JumpB
	var_152_bool = 0; // 0x75 MovB
	
Label_118:
	if(var_152_bool == 0) goto Label_125; // 0x76 JumpB
	var_177_bool = 0; var_178_object = Obj(); // 0x77 PushV
	var_178_object = var_1_object; // 0x78 MovT
	func_4094(var_177_bool, var_178_object); // 0x79 NEW_2
	if(var_177_bool == 0) goto Label_125; // 0x7b JumpB
	var_151_bool = 0; // 0x7c MovB
	
Label_125:
	if(var_151_bool == 0) goto Label_131; // 0x7d JumpB
	var_183_int = 543189; // 0x7e PushI
	var_184_int = 45648; // 0x7f PushI
	var_185_int = 45645; // 0x80 PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x81 TObjFunc
	
Label_131:
	var_186_bool = 0; // 0x83 PushV
	var_186_bool = 1; // 0x84 MovB
	var_187_bool = 0; // 0x85 PushV
	var_187_bool = 1; // 0x86 MovB
	var_188_bool = 0; // 0x87 PushV
	var_188_bool = 1; // 0x88 MovB
	var_189_bool = 0; var_190_object = Obj(); // 0x89 PushV
	var_190_object = var_1_object; // 0x8a MovT
	func_4064(var_189_bool, var_190_object); // 0x8b NEW_2
	if(var_189_bool == 0) goto Label_148; // 0x8d JumpB
	var_195_bool = 0; var_196_object = Obj(); // 0x8e PushV
	var_196_object = var_1_object; // 0x8f MovT
	func_4104(var_195_bool, var_196_object); // 0x90 NEW_2
	if(var_195_bool == 0) goto Label_148; // 0x92 JumpB
	var_188_bool = 0; // 0x93 MovB
	
Label_148:
	if(var_188_bool == 0) goto Label_155; // 0x94 JumpB
	var_201_bool = 0; var_202_object = Obj(); // 0x95 PushV
	var_202_object = var_1_object; // 0x96 MovT
	func_4134(var_201_bool, var_202_object); // 0x97 NEW_2
	if(var_201_bool == 0) goto Label_155; // 0x99 JumpB
	var_187_bool = 0; // 0x9a MovB
	
Label_155:
	if(var_187_bool == 0) goto Label_162; // 0x9b JumpB
	var_207_bool = 0; var_208_object = Obj(); // 0x9c PushV
	var_208_object = var_1_object; // 0x9d MovT
	func_4144(var_207_bool, var_208_object); // 0x9e NEW_2
	if(var_207_bool == 0) goto Label_162; // 0xa0 JumpB
	var_186_bool = 0; // 0xa1 MovB
	
Label_162:
	if(var_186_bool == 0) goto Label_168; // 0xa2 JumpB
	var_213_int = 543190; // 0xa3 PushI
	var_214_int = 45655; // 0xa4 PushI
	var_215_int = 45646; // 0xa5 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0xa6 TObjFunc
	
Label_168:
	var_216_bool = 0; // 0xa8 PushV
	var_216_bool = 1; // 0xa9 MovB
	var_217_bool = 0; // 0xaa PushV
	var_217_bool = 1; // 0xab MovB
	var_218_bool = 0; var_219_object = Obj(); // 0xac PushV
	var_219_object = var_1_object; // 0xad MovT
	func_4114(var_218_bool, var_219_object); // 0xae NEW_2
	if(var_218_bool == 0) goto Label_183; // 0xb0 JumpB
	var_224_bool = 0; var_225_object = Obj(); // 0xb1 PushV
	var_225_object = var_1_object; // 0xb2 MovT
	func_4124(var_224_bool, var_225_object); // 0xb3 NEW_2
	if(var_224_bool == 0) goto Label_183; // 0xb5 JumpB
	var_217_bool = 0; // 0xb6 MovB
	
Label_183:
	if(var_217_bool == 0) goto Label_190; // 0xb7 JumpB
	var_230_bool = 0; var_231_object = Obj(); // 0xb8 PushV
	var_231_object = var_1_object; // 0xb9 MovT
	func_4074(var_230_bool, var_231_object); // 0xba NEW_2
	if(var_230_bool == 0) goto Label_190; // 0xbc JumpB
	var_216_bool = 0; // 0xbd MovB
	
Label_190:
	if(var_216_bool == 0) goto Label_196; // 0xbe JumpB
	var_232_int = 543191; // 0xbf PushI
	var_233_int = 45656; // 0xc0 PushI
	var_234_int = 45647; // 0xc1 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0xc2 TObjFunc
	
Label_196:
	var_235_bool = 0; // 0xc4 PushV
	var_235_bool = 1; // 0xc5 MovB
	var_236_bool = 0; // 0xc6 PushV
	var_236_bool = 1; // 0xc7 MovB
	var_237_bool = 0; var_238_object = Obj(); // 0xc8 PushV
	var_238_object = var_1_object; // 0xc9 MovT
	func_4054(var_237_bool, var_238_object); // 0xca NEW_2
	if(var_237_bool == 0) goto Label_211; // 0xcc JumpB
	var_239_bool = 0; var_240_object = Obj(); // 0xcd PushV
	var_240_object = var_1_object; // 0xce MovT
	func_4064(var_239_bool, var_240_object); // 0xcf NEW_2
	if(var_239_bool == 0) goto Label_211; // 0xd1 JumpB
	var_236_bool = 0; // 0xd2 MovB
	
Label_211:
	if(var_236_bool == 0) goto Label_218; // 0xd3 JumpB
	var_241_bool = 0; var_242_object = Obj(); // 0xd4 PushV
	var_242_object = var_1_object; // 0xd5 MovT
	func_4074(var_241_bool, var_242_object); // 0xd6 NEW_2
	if(var_241_bool == 0) goto Label_218; // 0xd8 JumpB
	var_235_bool = 0; // 0xd9 MovB
	
Label_218:
	if(var_235_bool == 0) goto Label_224; // 0xda JumpB
	var_243_int = 543182; // 0xdb PushI
	var_244_int = -1; // 0xdc PushI
	var_245_int = 45638; // 0xdd PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0xde TObjFunc
	
Label_224:
	var_246_bool = 0; // 0xe0 PushV
	var_246_bool = 1; // 0xe1 MovB
	var_247_bool = 0; // 0xe2 PushV
	var_247_bool = 1; // 0xe3 MovB
	var_248_bool = 0; // 0xe4 PushV
	var_248_bool = 1; // 0xe5 MovB
	var_249_bool = 0; var_250_object = Obj(); // 0xe6 PushV
	var_250_object = var_1_object; // 0xe7 MovT
	func_4054(var_249_bool, var_250_object); // 0xe8 NEW_2
	if(var_249_bool == 0) goto Label_241; // 0xea JumpB
	var_251_bool = 0; var_252_object = Obj(); // 0xeb PushV
	var_252_object = var_1_object; // 0xec MovT
	func_4064(var_251_bool, var_252_object); // 0xed NEW_2
	if(var_251_bool == 0) goto Label_241; // 0xef JumpB
	var_248_bool = 0; // 0xf0 MovB
	
Label_241:
	if(var_248_bool == 0) goto Label_248; // 0xf1 JumpB
	var_253_bool = 0; var_254_object = Obj(); // 0xf2 PushV
	var_254_object = var_1_object; // 0xf3 MovT
	func_4074(var_253_bool, var_254_object); // 0xf4 NEW_2
	if(var_253_bool == 0) goto Label_248; // 0xf6 JumpB
	var_247_bool = 0; // 0xf7 MovB
	
Label_248:
	if(var_247_bool == 0) goto Label_255; // 0xf8 JumpB
	var_255_bool = 0; var_256_object = Obj(); // 0xf9 PushV
	var_256_object = var_1_object; // 0xfa MovT
	func_4084(var_255_bool, var_256_object); // 0xfb NEW_2
	if(var_255_bool == 0) goto Label_255; // 0xfd JumpB
	var_246_bool = 0; // 0xfe MovB
	
Label_255:
	if(var_246_bool == 0) goto Label_261; // 0xff JumpB
	var_257_int = 543183; // 0x100 PushI
	var_258_int = -1; // 0x101 PushI
	var_259_int = 45639; // 0x102 PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x103 TObjFunc
	
Label_261:
	var_260_bool = 0; // 0x105 PushV
	var_260_bool = 1; // 0x106 MovB
	var_261_bool = 0; // 0x107 PushV
	var_261_bool = 1; // 0x108 MovB
	var_262_bool = 0; // 0x109 PushV
	var_262_bool = 1; // 0x10a MovB
	var_263_bool = 0; // 0x10b PushV
	var_263_bool = 1; // 0x10c MovB
	var_264_bool = 0; var_265_object = Obj(); // 0x10d PushV
	var_265_object = var_1_object; // 0x10e MovT
	func_4084(var_264_bool, var_265_object); // 0x10f NEW_2
	if(var_264_bool == 0) goto Label_280; // 0x111 JumpB
	var_266_bool = 0; var_267_object = Obj(); // 0x112 PushV
	var_267_object = var_1_object; // 0x113 MovT
	func_4094(var_266_bool, var_267_object); // 0x114 NEW_2
	if(var_266_bool == 0) goto Label_280; // 0x116 JumpB
	var_263_bool = 0; // 0x117 MovB
	
Label_280:
	if(var_263_bool == 0) goto Label_287; // 0x118 JumpB
	var_268_bool = 0; var_269_object = Obj(); // 0x119 PushV
	var_269_object = var_1_object; // 0x11a MovT
	func_4104(var_268_bool, var_269_object); // 0x11b NEW_2
	if(var_268_bool == 0) goto Label_287; // 0x11d JumpB
	var_262_bool = 0; // 0x11e MovB
	
Label_287:
	if(var_262_bool == 0) goto Label_294; // 0x11f JumpB
	var_270_bool = 0; var_271_object = Obj(); // 0x120 PushV
	var_271_object = var_1_object; // 0x121 MovT
	func_4114(var_270_bool, var_271_object); // 0x122 NEW_2
	if(var_270_bool == 0) goto Label_294; // 0x124 JumpB
	var_261_bool = 0; // 0x125 MovB
	
Label_294:
	if(var_261_bool == 0) goto Label_301; // 0x126 JumpB
	var_272_bool = 0; var_273_object = Obj(); // 0x127 PushV
	var_273_object = var_1_object; // 0x128 MovT
	func_4124(var_272_bool, var_273_object); // 0x129 NEW_2
	if(var_272_bool == 0) goto Label_301; // 0x12b JumpB
	var_260_bool = 0; // 0x12c MovB
	
Label_301:
	if(var_260_bool == 0) goto Label_307; // 0x12d JumpB
	var_274_int = 543187; // 0x12e PushI
	var_275_int = -1; // 0x12f PushI
	var_276_int = 45643; // 0x130 PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x131 TObjFunc
	
Label_307:
	var_277_bool = 0; // 0x133 PushV
	var_277_bool = 1; // 0x134 MovB
	var_278_bool = 0; // 0x135 PushV
	var_278_bool = 1; // 0x136 MovB
	var_279_bool = 0; // 0x137 PushV
	var_279_bool = 1; // 0x138 MovB
	var_280_bool = 0; var_281_object = Obj(); // 0x139 PushV
	var_281_object = var_1_object; // 0x13a MovT
	func_4134(var_280_bool, var_281_object); // 0x13b NEW_2
	if(var_280_bool == 0) goto Label_324; // 0x13d JumpB
	var_282_bool = 0; var_283_object = Obj(); // 0x13e PushV
	var_283_object = var_1_object; // 0x13f MovT
	func_4144(var_282_bool, var_283_object); // 0x140 NEW_2
	if(var_282_bool == 0) goto Label_324; // 0x142 JumpB
	var_279_bool = 0; // 0x143 MovB
	
Label_324:
	if(var_279_bool == 0) goto Label_331; // 0x144 JumpB
	var_284_bool = 0; var_285_object = Obj(); // 0x145 PushV
	var_285_object = var_1_object; // 0x146 MovT
	func_4154(var_284_bool, var_285_object); // 0x147 NEW_2
	if(var_284_bool == 0) goto Label_331; // 0x149 JumpB
	var_278_bool = 0; // 0x14a MovB
	
Label_331:
	if(var_278_bool == 0) goto Label_338; // 0x14b JumpB
	var_290_bool = 0; var_291_object = Obj(); // 0x14c PushV
	var_291_object = var_1_object; // 0x14d MovT
	func_4164(var_290_bool, var_291_object); // 0x14e NEW_2
	if(var_290_bool == 0) goto Label_338; // 0x150 JumpB
	var_277_bool = 0; // 0x151 MovB
	
Label_338:
	if(var_277_bool == 0) goto Label_344; // 0x152 JumpB
	var_296_int = 543208; // 0x153 PushI
	var_297_int = -1; // 0x154 PushI
	var_298_int = 45664; // 0x155 PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0x156 TObjFunc
	
Label_344:
	var_299_bool = 0; // 0x158 PushV
	var_299_bool = 1; // 0x159 MovB
	var_300_bool = 0; // 0x15a PushV
	var_300_bool = 1; // 0x15b MovB
	var_301_bool = 0; var_302_object = Obj(); // 0x15c PushV
	var_302_object = var_1_object; // 0x15d MovT
	func_4054(var_301_bool, var_302_object); // 0x15e NEW_2
	if(var_301_bool == 0) goto Label_359; // 0x160 JumpB
	var_303_bool = 0; var_304_object = Obj(); // 0x161 PushV
	var_304_object = var_1_object; // 0x162 MovT
	func_4064(var_303_bool, var_304_object); // 0x163 NEW_2
	if(var_303_bool == 0) goto Label_359; // 0x165 JumpB
	var_300_bool = 0; // 0x166 MovB
	
Label_359:
	if(var_300_bool == 0) goto Label_366; // 0x167 JumpB
	var_305_bool = 0; var_306_object = Obj(); // 0x168 PushV
	var_306_object = var_1_object; // 0x169 MovT
	func_4074(var_305_bool, var_306_object); // 0x16a NEW_2
	if(var_305_bool == 0) goto Label_366; // 0x16c JumpB
	var_299_bool = 0; // 0x16d MovB
	
Label_366:
	if(var_299_bool == 0) goto Label_372; // 0x16e JumpB
	var_307_int = 543181; // 0x16f PushI
	var_308_int = -1; // 0x170 PushI
	var_309_int = 45637; // 0x171 PushI
	AddReply(var_307_int, var_308_int, var_309_int); // 0x172 TObjFunc
	
Label_372:
	var_310_bool = 0; // 0x174 PushV
	var_310_bool = 1; // 0x175 MovB
	var_311_bool = 0; // 0x176 PushV
	var_311_bool = 1; // 0x177 MovB
	var_312_bool = 0; var_313_object = Obj(); // 0x178 PushV
	var_313_object = var_1_object; // 0x179 MovT
	func_4084(var_312_bool, var_313_object); // 0x17a NEW_2
	if(var_312_bool == 0) goto Label_387; // 0x17c JumpB
	var_314_bool = 0; var_315_object = Obj(); // 0x17d PushV
	var_315_object = var_1_object; // 0x17e MovT
	func_4094(var_314_bool, var_315_object); // 0x17f NEW_2
	if(var_314_bool == 0) goto Label_387; // 0x181 JumpB
	var_311_bool = 0; // 0x182 MovB
	
Label_387:
	if(var_311_bool == 0) goto Label_394; // 0x183 JumpB
	var_316_bool = 0; var_317_object = Obj(); // 0x184 PushV
	var_317_object = var_1_object; // 0x185 MovT
	func_4104(var_316_bool, var_317_object); // 0x186 NEW_2
	if(var_316_bool == 0) goto Label_394; // 0x188 JumpB
	var_310_bool = 0; // 0x189 MovB
	
Label_394:
	if(var_310_bool == 0) goto Label_400; // 0x18a JumpB
	var_318_int = 543184; // 0x18b PushI
	var_319_int = -1; // 0x18c PushI
	var_320_int = 45640; // 0x18d PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0x18e TObjFunc
	
Label_400:
	var_321_bool = 0; // 0x190 PushV
	var_321_bool = 1; // 0x191 MovB
	var_322_bool = 0; // 0x192 PushV
	var_322_bool = 1; // 0x193 MovB
	var_323_bool = 0; // 0x194 PushV
	var_323_bool = 1; // 0x195 MovB
	var_324_bool = 0; var_325_object = Obj(); // 0x196 PushV
	var_325_object = var_1_object; // 0x197 MovT
	func_4074(var_324_bool, var_325_object); // 0x198 NEW_2
	if(var_324_bool == 0) goto Label_417; // 0x19a JumpB
	var_326_bool = 0; var_327_object = Obj(); // 0x19b PushV
	var_327_object = var_1_object; // 0x19c MovT
	func_4104(var_326_bool, var_327_object); // 0x19d NEW_2
	if(var_326_bool == 0) goto Label_417; // 0x19f JumpB
	var_323_bool = 0; // 0x1a0 MovB
	
Label_417:
	if(var_323_bool == 0) goto Label_424; // 0x1a1 JumpB
	var_328_bool = 0; var_329_object = Obj(); // 0x1a2 PushV
	var_329_object = var_1_object; // 0x1a3 MovT
	func_4114(var_328_bool, var_329_object); // 0x1a4 NEW_2
	if(var_328_bool == 0) goto Label_424; // 0x1a6 JumpB
	var_322_bool = 0; // 0x1a7 MovB
	
Label_424:
	if(var_322_bool == 0) goto Label_431; // 0x1a8 JumpB
	var_330_bool = 0; var_331_object = Obj(); // 0x1a9 PushV
	var_331_object = var_1_object; // 0x1aa MovT
	func_4124(var_330_bool, var_331_object); // 0x1ab NEW_2
	if(var_330_bool == 0) goto Label_431; // 0x1ad JumpB
	var_321_bool = 0; // 0x1ae MovB
	
Label_431:
	if(var_321_bool == 0) goto Label_437; // 0x1af JumpB
	var_332_int = 543185; // 0x1b0 PushI
	var_333_int = -1; // 0x1b1 PushI
	var_334_int = 45641; // 0x1b2 PushI
	AddReply(var_332_int, var_333_int, var_334_int); // 0x1b3 TObjFunc
	
Label_437:
	var_335_bool = 0; // 0x1b5 PushV
	var_335_bool = 1; // 0x1b6 MovB
	var_336_bool = 0; // 0x1b7 PushV
	var_336_bool = 1; // 0x1b8 MovB
	var_337_bool = 0; var_338_object = Obj(); // 0x1b9 PushV
	var_338_object = var_1_object; // 0x1ba MovT
	func_4134(var_337_bool, var_338_object); // 0x1bb NEW_2
	if(var_337_bool == 0) goto Label_452; // 0x1bd JumpB
	var_339_bool = 0; var_340_object = Obj(); // 0x1be PushV
	var_340_object = var_1_object; // 0x1bf MovT
	func_4144(var_339_bool, var_340_object); // 0x1c0 NEW_2
	if(var_339_bool == 0) goto Label_452; // 0x1c2 JumpB
	var_336_bool = 0; // 0x1c3 MovB
	
Label_452:
	if(var_336_bool == 0) goto Label_459; // 0x1c4 JumpB
	var_341_bool = 0; var_342_object = Obj(); // 0x1c5 PushV
	var_342_object = var_1_object; // 0x1c6 MovT
	func_4154(var_341_bool, var_342_object); // 0x1c7 NEW_2
	if(var_341_bool == 0) goto Label_459; // 0x1c9 JumpB
	var_335_bool = 0; // 0x1ca MovB
	
Label_459:
	if(var_335_bool == 0) goto Label_465; // 0x1cb JumpB
	var_343_int = 543186; // 0x1cc PushI
	var_344_int = -1; // 0x1cd PushI
	var_345_int = 45642; // 0x1ce PushI
	AddReply(var_343_int, var_344_int, var_345_int); // 0x1cf TObjFunc
	
Label_465:
	var_346_bool = 0; // 0x1d1 PushV
	var_346_bool = 1; // 0x1d2 MovB
	var_347_bool = 0; // 0x1d3 PushV
	var_347_bool = 1; // 0x1d4 MovB
	var_348_bool = 0; // 0x1d5 PushV
	var_348_bool = 1; // 0x1d6 MovB
	var_349_bool = 0; // 0x1d7 PushV
	var_349_bool = 1; // 0x1d8 MovB
	var_350_bool = 0; var_351_object = Obj(); // 0x1d9 PushV
	var_351_object = var_1_object; // 0x1da MovT
	func_4104(var_350_bool, var_351_object); // 0x1db NEW_2
	if(var_350_bool == 0) goto Label_484; // 0x1dd JumpB
	var_352_bool = 0; var_353_object = Obj(); // 0x1de PushV
	var_353_object = var_1_object; // 0x1df MovT
	func_4124(var_352_bool, var_353_object); // 0x1e0 NEW_2
	if(var_352_bool == 0) goto Label_484; // 0x1e2 JumpB
	var_349_bool = 0; // 0x1e3 MovB
	
Label_484:
	if(var_349_bool == 0) goto Label_491; // 0x1e4 JumpB
	var_354_bool = 0; var_355_object = Obj(); // 0x1e5 PushV
	var_355_object = var_1_object; // 0x1e6 MovT
	func_4134(var_354_bool, var_355_object); // 0x1e7 NEW_2
	if(var_354_bool == 0) goto Label_491; // 0x1e9 JumpB
	var_348_bool = 0; // 0x1ea MovB
	
Label_491:
	if(var_348_bool == 0) goto Label_498; // 0x1eb JumpB
	var_356_bool = 0; var_357_object = Obj(); // 0x1ec PushV
	var_357_object = var_1_object; // 0x1ed MovT
	func_4164(var_356_bool, var_357_object); // 0x1ee NEW_2
	if(var_356_bool == 0) goto Label_498; // 0x1f0 JumpB
	var_347_bool = 0; // 0x1f1 MovB
	
Label_498:
	if(var_347_bool == 0) goto Label_505; // 0x1f2 JumpB
	var_358_bool = 0; var_359_object = Obj(); // 0x1f3 PushV
	var_359_object = var_1_object; // 0x1f4 MovT
	func_4144(var_358_bool, var_359_object); // 0x1f5 NEW_2
	if(var_358_bool == 0) goto Label_505; // 0x1f7 JumpB
	var_346_bool = 0; // 0x1f8 MovB
	
Label_505:
	if(var_346_bool == 0) goto Label_511; // 0x1f9 JumpB
	var_360_int = 543188; // 0x1fa PushI
	var_361_int = -1; // 0x1fb PushI
	var_362_int = 45644; // 0x1fc PushI
	AddReply(var_360_int, var_361_int, var_362_int); // 0x1fd TObjFunc
	
Label_511:
	goto Label_619; // 0x1ff Jump
	
Label_619:
	var_363_bool = 0; // 0x26b PushV
	func_5226(var_363_bool); // 0x26c NEW_2
	if(var_363_bool == 0) goto Label_634; // 0x26e JumpB
	
Label_623:
	lshWaitForAnimEnd(); // 0x26f Func
	var_364_string = var_3_string; // 0x271 PushT
	if(var_364_string == 0) goto Label_628; // 0x272 JumpB
	goto Label_633; // 0x273 Jump
	
Label_633:
	goto Label_648; // 0x279 Jump
	
Label_648:
	return 0; // 0x288 Return
	
Label_628:
	var_365_string = ""; // 0x274 PushV
	var_365_string = var_2_object; // 0x275 MovT
	func_3835(var_365_string); // 0x276 NEW_2
	goto Label_623; // 0x278 Jump
	
Label_634:
	var_376_string = "all"; // 0x27a PushS
	var_377_string = "idle"; // 0x27b PushS
	PlayAnimation(var_376_string, var_377_string); // 0x27c Func
	
Label_638:
	WaitForAnimEnd(); // 0x27e Func
	var_378_string = var_3_string; // 0x280 PushT
	if(var_378_string == 0) goto Label_643; // 0x281 JumpB
	goto Label_648; // 0x282 Jump
	
Label_643:
	var_379_string = "all"; // 0x283 PushS
	var_380_string = "idle"; // 0x284 PushS
	PlayAnimation(var_379_string, var_380_string); // 0x285 Func
	goto Label_638; // 0x287 Jump
	
Label_512:
	var_381_string = ""; // 0x200 PushV
	var_381_string = "Neutral"; // 0x201 MovS
	func_649(var_119_object, var_381_string); // 0x202 NEW_2
	var_382_int = 538167; // 0x204 PushI
	SetMessage(var_382_int); // 0x205 TObjFunc
	ClearReplies(); // 0x207 TObjFunc
	var_383_int = 538168; // 0x209 PushI
	var_384_int = -1; // 0x20a PushI
	var_385_int = 40043; // 0x20b PushI
	AddReply(var_383_int, var_384_int, var_385_int); // 0x20c TObjFunc
	var_386_bool = 0; // 0x20e PushV
	var_386_bool = 0; // 0x20f MovB
	var_387_bool = 0; var_388_object = Obj(); // 0x210 PushV
	var_388_object = var_1_object; // 0x211 MovT
	func_4054(var_387_bool, var_388_object); // 0x212 NEW_2
	if(var_387_bool == 0) goto Label_539; // 0x214 JumpB
	var_389_bool = 0; var_390_object = Obj(); // 0x215 PushV
	var_390_object = var_1_object; // 0x216 MovT
	func_4018(var_390_object); // 0x217 NEW_2
	if(var_389_bool == 0) goto Label_539; // 0x219 JumpB
	var_386_bool = 1; // 0x21a MovB
	
Label_539:
	if(var_386_bool == 0) goto Label_545; // 0x21b JumpB
	var_395_int = 538169; // 0x21c PushI
	var_396_int = 40045; // 0x21d PushI
	var_397_int = 40044; // 0x21e PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0x21f TObjFunc
	
Label_545:
	var_398_bool = 0; // 0x221 PushV
	var_398_bool = 0; // 0x222 MovB
	var_399_bool = 0; // 0x223 PushV
	var_399_bool = 0; // 0x224 MovB
	var_400_bool = 0; var_401_object = Obj(); // 0x225 PushV
	var_401_object = var_1_object; // 0x226 MovT
	func_4054(var_400_bool, var_401_object); // 0x227 NEW_2
	if(var_400_bool == 0) goto Label_560; // 0x229 JumpB
	var_402_bool = 0; var_403_object = Obj(); // 0x22a PushV
	var_403_object = var_1_object; // 0x22b MovT
	func_4174(var_402_bool, var_403_object); // 0x22c NEW_2
	if(var_402_bool == 0) goto Label_560; // 0x22e JumpB
	var_399_bool = 1; // 0x22f MovB
	
Label_560:
	if(var_399_bool == 0) goto Label_567; // 0x230 JumpB
	var_413_bool = 0; var_414_object = Obj(); // 0x231 PushV
	var_414_object = var_1_object; // 0x232 MovT
	func_4018(var_414_object); // 0x233 NEW_2
	if(var_413_bool == 0) goto Label_567; // 0x235 JumpB
	var_398_bool = 1; // 0x236 MovB
	
Label_567:
	if(var_398_bool == 0) goto Label_573; // 0x237 JumpB
	var_415_int = 538179; // 0x238 PushI
	var_416_int = 40055; // 0x239 PushI
	var_417_int = 40054; // 0x23a PushI
	AddReply(var_415_int, var_416_int, var_417_int); // 0x23b TObjFunc
	
Label_573:
	var_418_bool = 0; // 0x23d PushV
	var_418_bool = 0; // 0x23e MovB
	var_419_bool = 0; var_420_object = Obj(); // 0x23f PushV
	var_420_object = var_1_object; // 0x240 MovT
	func_4064(var_419_bool, var_420_object); // 0x241 NEW_2
	if(var_419_bool == 0) goto Label_586; // 0x243 JumpB
	var_421_bool = 0; var_422_object = Obj(); // 0x244 PushV
	var_422_object = var_1_object; // 0x245 MovT
	func_4018(var_422_object); // 0x246 NEW_2
	if(var_421_bool == 0) goto Label_586; // 0x248 JumpB
	var_418_bool = 1; // 0x249 MovB
	
Label_586:
	if(var_418_bool == 0) goto Label_592; // 0x24a JumpB
	var_423_int = 538190; // 0x24b PushI
	var_424_int = 40067; // 0x24c PushI
	var_425_int = 40066; // 0x24d PushI
	AddReply(var_423_int, var_424_int, var_425_int); // 0x24e TObjFunc
	
Label_592:
	var_426_bool = 0; // 0x250 PushV
	var_426_bool = 1; // 0x251 MovB
	var_427_bool = 0; var_428_object = Obj(); // 0x252 PushV
	var_428_object = var_1_object; // 0x253 MovT
	func_4018(var_428_object); // 0x254 NEW_2
	if(var_427_bool == 0) goto Label_605; // 0x256 JumpB
	var_429_bool = 0; var_430_object = Obj(); // 0x257 PushV
	var_430_object = var_1_object; // 0x258 MovT
	func_4030(var_430_object); // 0x259 NEW_2
	if(var_429_bool == 0) goto Label_605; // 0x25b JumpB
	var_426_bool = 0; // 0x25c MovB
	
Label_605:
	if(var_426_bool == 0) goto Label_611; // 0x25d JumpB
	var_435_int = 538204; // 0x25e PushI
	var_436_int = -1; // 0x25f PushI
	var_437_int = 40081; // 0x260 PushI
	AddReply(var_435_int, var_436_int, var_437_int); // 0x261 TObjFunc
	
Label_611:
	var_438_int = 538205; // 0x263 PushI
	var_439_int = -1; // 0x264 PushI
	var_440_int = 40082; // 0x265 PushI
	AddReply(var_438_int, var_439_int, var_440_int); // 0x266 TObjFunc
	goto Label_619; // 0x268 Jump
}


func_4174(var_402_bool, var_403_object)
{
	var_404_bool = 0; var_405_object = Obj(); // 0x104f PushV
	var_405_object = var_403_object; // 0x1050 Mov
	func_4268(var_405_object); // 0x1051 NEW_2
	if(var_404_bool == 0) goto Label_4182; // 0x1053 JumpB
	var_402_bool = 1; // 0x1054 MovB
	return 0; // 0x1055 Return
	
Label_4182:
	var_402_bool = 0; // 0x1056 MovB
	return 0; // 0x1057 Return
}


func_3153(var_0_object, var_1_object, var_2_object, var_40_object)
{
	var_44_cvector = CVector(0,0,0); var_45_float = 0; var_46_bool = 0; var_47_cvector = CVector(0,0,0); var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_float = 0; var_51_bool = 0; var_52_cvector = CVector(0,0,0); var_53_float = 0; // 0xc51 PushV
	var_0_object = var_40_object; // 0xc52 TMov
	var_54_cvector = CVector(0,0,0); var_55_float = 0; // 0xc53 PushV
	var_55_float = 1.74533; // 0xc54 MovF
	func_3123(var_54_cvector, var_55_float); // 0xc55 NEW_2
	var_49_cvector = var_54_cvector; // 0xc56 Mov
	var_50_float = var_49_cvector | var_49_cvector; // 0xc58 Or2
	var_84_float = 2500.0; // 0xc59 PushF
	var_85_bool = var_50_float < var_84_float; // 0xc5a LT
	if(var_85_bool == 0) goto Label_3182; // 0xc5b JumpB
	var_86_cvector = CVector(0,0,0); var_87_float = 0; // 0xc5c PushV
	var_87_float = 2.61799; // 0xc5d MovF
	func_3123(var_86_cvector, var_87_float); // 0xc5e NEW_2
	var_49_cvector = var_86_cvector; // 0xc5f Mov
	var_50_float = var_49_cvector | var_49_cvector; // 0xc61 Or2
	var_88_float = 2500.0; // 0xc62 PushF
	var_89_bool = var_50_float < var_88_float; // 0xc63 LT
	if(var_89_bool == 0) goto Label_3182; // 0xc64 JumpB
	var_90_string = "Can't retreat, distance: "; // 0xc65 PushS
	var_91_float = sqrt(var_50_float); // 0xc66 Sqrt
	var_92_int = var_90_string + var_91_float; // 0xc67 Add
	Trace(var_92_int); // 0xc68 Func
	var_93_float = 0.5; // 0xc6a PushF
	Sleep(var_93_float); // 0xc6b Func
	return 10; // 0xc6d Return
	
Label_3182:
	var_94_float = GetByIndex(var_49_cvector, 0); // 0xc6e PushE
	var_95_float = GetByIndex(var_49_cvector, 2); // 0xc6f PushE
	Rotate(var_94_float, var_95_float); // 0xc70 Func
	var_96_cvector = CVector(0,0,0); // 0xc72 PushV
	func_3504(var_96_cvector); // 0xc73 NEW_2
	var_1_object = var_96_cvector + var_49_cvector; // 0xc75 Add2
	var_99_int = 120; // 0xc76 PushI
	var_100_float = 0.5; // 0xc77 PushF
	SetTimer(var_99_int, var_100_float); // 0xc78 Func
	var_2_object = 0; // 0xc7a TMovB
	
Label_3195:
	var_101_int = 1; // 0xc7b PushI
	MovePoint(var_101_int, var_101_int, var_51_bool); // 0xc7c Func
	var_102_bool = var_51_bool; // 0xc7e Push
	if(var_102_bool == 0) goto Label_3223; // 0xc7f JumpB
	var_103_bool = var_0_object == 0; // 0xc80 NullEq
	if(var_103_bool == 0) goto Label_3204; // 0xc81 JumpB
	goto Label_3225; // 0xc82 Jump
	
Label_3225:
	return 10; // 0xc99 Return
	
Label_3204:
	var_104_cvector = CVector(0,0,0); var_105_float = 0; // 0xc84 PushV
	var_105_float = 2.61799; // 0xc85 MovF
	func_3123(var_104_cvector, var_105_float); // 0xc86 NEW_2
	var_52_cvector = var_104_cvector; // 0xc87 Mov
	var_53_float = var_52_cvector | var_52_cvector; // 0xc89 Or2
	var_106_float = 2500.0; // 0xc8a PushF
	var_107_bool = var_53_float >= var_106_float; // 0xc8b GE
	if(var_107_bool == 0) goto Label_3222; // 0xc8c JumpB
	var_108_cvector = CVector(0,0,0); // 0xc8d PushV
	func_3504(var_108_cvector); // 0xc8e NEW_2
	var_1_object = var_108_cvector + var_52_cvector; // 0xc90 Add2
	var_109_int = 120; // 0xc91 PushI
	var_110_float = 0.5; // 0xc92 PushF
	SetTimer(var_109_int, var_110_float); // 0xc93 Func
	goto Label_3223; // 0xc95 Jump
	
Label_3223:
	var_111_bool = var_2_object == 0; // 0xc97 Not
	if(var_111_bool == 0) goto Label_3195; // 0xc98 JumpB
	
Label_3222:
	goto Label_3225; // 0xc96 Jump
}


func_5203(var_45_object, var_48_object)
{
	var_46_int = 0; var_47_object = Obj(); // 0x1454 PushV
	var_47_object = var_45_object; // 0x1455 Mov
	TaskCall(0); // 0x1456 TaskCall
	func_0(var_48_object, var_46_int, var_47_object); // 0x1457 NEW_2
	TaskReturn(); // 0x1458 TaskReturn
	var_450_int = 100; // 0x145a PushI
	var_451_bool = var_48_object == var_450_int; // 0x145b Eq
	if(var_451_bool == 0) goto Label_5217; // 0x145c JumpB
	var_452_object = Obj(); // 0x145d PushV
	var_452_object = var_45_object; // 0x145e Mov
	func_5040(); // 0x145f NEW_2
	
Label_5217:
	return 0; // 0x1461 Return
}


func_4695(var_25_bool, var_26_object, var_27_string)
{
	var_28_string = "unholster"; // 0x1258 PushS
	var_29_bool = var_27_string == var_28_string; // 0x1259 Eq
	if(var_29_bool == 0) goto Label_4706; // 0x125a JumpB
	var_30_bool = 0; var_31_object = Obj(); // 0x125b PushV
	var_31_object = var_26_object; // 0x125c Mov
	func_4986(var_30_bool, var_31_object); // 0x125d NEW_2
	var_25_bool = var_30_bool; // 0x125e Mov
	return 0; // 0x1260 Return
	
Label_4706:
	var_34_string = "player_shot"; // 0x1262 PushS
	var_35_bool = var_27_string == var_34_string; // 0x1263 Eq
	if(var_35_bool == 0) goto Label_4716; // 0x1264 JumpB
	var_36_bool = 0; var_37_object = Obj(); // 0x1265 PushV
	var_37_object = var_26_object; // 0x1266 Mov
	func_4999(var_36_bool, var_37_object); // 0x1267 NEW_2
	var_25_bool = var_36_bool; // 0x1268 Mov
	return 0; // 0x126a Return
	
Label_4716:
	var_51_string = "battle"; // 0x126c PushS
	var_52_bool = var_27_string == var_51_string; // 0x126d Eq
	if(var_52_bool == 0) goto Label_4725; // 0x126e JumpB
	var_53_bool = 0; var_54_object = Obj(); // 0x126f PushV
	var_54_object = var_26_object; // 0x1270 Mov
	func_5022(var_53_bool, var_54_object); // 0x1271 NEW_2
	var_25_bool = var_53_bool; // 0x1272 Mov
	return 0; // 0x1274 Return
	
Label_4725:
	var_25_bool = 0; // 0x1275 MovB
	return 0; // 0x1276 Return
}


func_4184(var_156_bool)
{
	var_158_int = 0; // 0x1059 PushV
	func_3996(var_158_int); // 0x105a NEW_2
	var_164_int = 1; // 0x105c PushI
	var_156_bool = var_158_int == var_164_int; // 0x105d Eq2
	return 0; // 0x105e Return
}


func_4191(var_191_bool)
{
	var_193_int = 0; // 0x1060 PushV
	func_3996(var_193_int); // 0x1061 NEW_2
	var_194_int = 2; // 0x1063 PushI
	var_191_bool = var_193_int == var_194_int; // 0x1064 Eq2
	return 0; // 0x1065 Return
}


func_5218(var_106_int)
{
	var_106_int = 515567; // 0x1462 MovI
	return 0; // 0x1463 Return
}


func_5220(var_105_int)
{
	var_105_int = 503352; // 0x1464 MovI
	return 0; // 0x1465 Return
}


func_2148(var_42_float)
{
	var_43_float = 0; var_44_float = 0; // 0x864 PushV
	GetCameraFarDistance(var_44_float); // 0x865 Func
	var_42_float = var_44_float; // 0x867 Mov
	return 2; // 0x868 Return
}


func_5222(var_107_string)
{
	var_107_string = "ui/NPC_Citizen3.png"; // 0x1466 MovS
	return 0; // 0x1467 Return
}


func_4198(var_167_bool)
{
	var_169_int = 0; // 0x1067 PushV
	func_3996(var_169_int); // 0x1068 NEW_2
	var_170_int = 3; // 0x106a PushI
	var_167_bool = var_169_int == var_170_int; // 0x106b Eq2
	return 0; // 0x106c Return
}


func_5224(var_108_string)
{
	var_108_string = "ui/NPC_Citizen3_b.png"; // 0x1468 MovS
	return 0; // 0x1469 Return
}


func_5226(var_100_bool)
{
	var_100_bool = 0; // 0x146a MovB
	return 0; // 0x146b Return
}


func_5228()
{
	var_22_bool = GlobalVars[0]; // 0x146c PushGE
	var_22_bool = 0; // 0x146d MovB
	GlobalVars[0] = var_22_bool; // 0x146e PopGE
	return 0; // 0x146f Return
}


func_4205(var_173_bool)
{
	var_175_int = 0; // 0x106e PushV
	func_3996(var_175_int); // 0x106f NEW_2
	var_176_int = 4; // 0x1071 PushI
	var_173_bool = var_175_int == var_176_int; // 0x1072 Eq2
	return 0; // 0x1073 Return
}


func_2160(var_0_object, var_1_object)
{
	var_0_object = 1; // 0x870 TMovB
	var_1_object = 0; // 0x871 TMovB
	Stop(); // 0x872 Func
	StopGroup0(); // 0x874 Func
	return 0; // 0x876 Return
}


func_5232(var_33_object)
{
	var_34_bool = 0; var_35_bool = 0; // 0x1470 PushV
	var_36_bool = GlobalVars[0]; // 0x1471 PushGE
	if(var_36_bool == 0) goto Label_5245; // 0x1472 JumpB
	IsOverrideActive(var_35_bool); // 0x1473 Func
	var_37_bool = var_35_bool == 0; // 0x1475 Not
	if(var_37_bool == 0) goto Label_5243; // 0x1476 JumpB
	var_38_object = Obj(); // 0x1477 PushV
	var_38_object = var_33_object; // 0x1478 Mov
	func_4385(var_38_object); // 0x1479 NEW_2
	
Label_5243:
	return 2; // 0x147b Return
	
Label_5245:
	var_45_object = Obj(); // 0x147d PushV
	var_45_object = var_33_object; // 0x147e Mov
	func_5203(var_35_bool, var_45_object); // 0x147f NEW_2
	return 2; // 0x1481 Return
}


func_4212(var_179_bool)
{
	var_181_int = 0; // 0x1075 PushV
	func_3996(var_181_int); // 0x1076 NEW_2
	var_182_int = 5; // 0x1078 PushI
	var_179_bool = var_181_int == var_182_int; // 0x1079 Eq2
	return 0; // 0x107a Return
}


func_4094(var_177_bool, var_178_object)
{
	var_179_bool = 0; var_180_object = Obj(); // 0xfff PushV
	var_180_object = var_178_object; // 0x1000 Mov
	func_4212(var_180_object); // 0x1001 NEW_2
	if(var_179_bool == 0) goto Label_4102; // 0x1003 JumpB
	var_177_bool = 1; // 0x1004 MovB
	return 0; // 0x1005 Return
	
Label_4102:
	var_177_bool = 0; // 0x1006 MovB
	return 0; // 0x1007 Return
}


func_2167(var_0_object, var_1_object)
{
	var_0_object = 1; // 0x877 TMovB
	var_1_object = 1; // 0x878 TMovB
	Stop(); // 0x879 Func
	StopGroup0(); // 0x87b Func
	return 0; // 0x87d Return
}


func_4727(var_59_object, var_60_string)
{
	var_61_string = "unholster"; // 0x1278 PushS
	var_62_bool = var_60_string == var_61_string; // 0x1279 Eq
	if(var_62_bool == 0) goto Label_4736; // 0x127a JumpB
	var_63_object = Obj(); // 0x127b PushV
	var_63_object = var_59_object; // 0x127c Mov
	func_4991(var_63_object); // 0x127d NEW_2
	goto Label_4751; // 0x127f Jump
	
Label_4751:
	return 0; // 0x128f Return
	
Label_4736:
	var_136_string = "player_shot"; // 0x1280 PushS
	var_137_bool = var_60_string == var_136_string; // 0x1281 Eq
	if(var_137_bool == 0) goto Label_4744; // 0x1282 JumpB
	var_138_object = Obj(); // 0x1283 PushV
	var_138_object = var_59_object; // 0x1284 Mov
	func_5014(var_138_object); // 0x1285 NEW_2
	goto Label_4751; // 0x1287 Jump
	
Label_4744:
	var_204_string = "battle"; // 0x1288 PushS
	var_205_bool = var_60_string == var_204_string; // 0x1289 Eq
	if(var_205_bool == 0) goto Label_4751; // 0x128a JumpB
	var_206_object = Obj(); // 0x128b PushV
	var_206_object = var_59_object; // 0x128c Mov
	func_5029(var_206_object); // 0x128d NEW_2
}


func_1657(var_23_object)
{
	EventDisable(0); // 0x67a EventDisable
	var_24_object = Obj(); // 0x67b PushV
	var_24_object = var_23_object; // 0x67c Mov
	func_1690(var_24_object); // 0x67d NEW_2
	var_104_object = Obj(); // 0x67f PushV
	var_104_object = var_23_object; // 0x680 Mov
	func_5265(var_104_object); // 0x681 NEW_2
	EventEnable(0); // 0x683 EventEnable
	
Label_1668:
	Hold(); // 0x684 Func
	goto Label_1668; // 0x686 Jump
}


func_4219(var_197_bool)
{
	var_199_int = 0; // 0x107c PushV
	func_3996(var_199_int); // 0x107d NEW_2
	var_200_int = 6; // 0x107f PushI
	var_197_bool = var_199_int == var_200_int; // 0x1080 Eq2
	return 0; // 0x1081 Return
}


func_2174(var_52_bool)
{
	var_52_bool = 0; // 0x87e MovB
	return 0; // 0x87f Return
}


func_2176(var_46_object, var_47_cvector)
{
	var_48_object = Obj(); var_49_object = Obj(); // 0x880 PushV
	FindShiftedPathTo(var_49_object, var_47_cvector); // 0x881 Func
	var_46_object = var_49_object; // 0x883 Mov
	return 2; // 0x884 Return
}


func_4226(var_220_bool)
{
	var_222_int = 0; // 0x1083 PushV
	func_3996(var_222_int); // 0x1084 NEW_2
	var_223_int = 7; // 0x1086 PushI
	var_220_bool = var_222_int == var_223_int; // 0x1087 Eq2
	return 0; // 0x1088 Return
}


func_5250(var_66_bool)
{
	var_67_float = 0; // 0x1482 PushV
	func_4371(var_67_float); // 0x1483 NEW_2
	var_75_float = 0.7; // 0x1485 PushF
	var_66_bool = var_67_float > var_75_float; // 0x1486 GT2
	return 0; // 0x1487 Return
}


func_3718(var_27_object, var_30_cvector, var_31_cvector)
{
	var_32_object = Obj(); var_33_object = Obj(); var_34_object = Obj(); var_35_object = Obj(); // 0xe86 PushV
	GetScene(var_34_object); // 0xe87 Func
	var_36_string = "scripted"; // 0xe89 PushS
	var_37_string = "blood_dir.xml"; // 0xe8a PushS
	AddActorByType(var_35_object, var_36_string, var_34_object, var_30_cvector, var_31_cvector, var_37_string); // 0xe8b Func
	var_38_object = Obj(); // 0xe8d PushV
	var_38_object = var_27_object; // 0xe8e Mov
	func_3606(var_38_object); // 0xe8f NEW_2
	return 4; // 0xe91 Return
}


func_5256(var_26_bool, var_27_object, var_28_object)
{
	var_30_bool = 0; var_31_object = Obj(); var_32_object = Obj(); var_33_float = 0; // 0x1489 PushV
	var_31_object = var_27_object; // 0x148a Mov
	var_32_object = var_28_object; // 0x148b Mov
	var_33_float = 700.0; // 0x148c MovF
	func_4900(var_30_bool, var_31_object, var_32_object, var_33_float); // 0x148d NEW_2
	var_26_bool = var_30_bool; // 0x148e Mov
	return 0; // 0x1490 Return
}


func_649(var_2_object, var_133_string)
{
	var_134_bool = 0; // 0x28a PushV
	func_5226(var_134_bool); // 0x28b NEW_2
	var_135_bool = var_134_bool == 0; // 0x28d Not
	if(var_135_bool == 0) goto Label_656; // 0x28e JumpB
	return 0; // 0x28f Return
	
Label_656:
	var_136_bool = var_133_string == var_2_object; // 0x290 Eq
	if(var_136_bool == 0) goto Label_659; // 0x291 JumpB
	return 0; // 0x292 Return
	
Label_659:
	var_137_string = ""; var_138_bool = 0; // 0x293 PushV
	var_137_string = var_133_string; // 0x294 Mov
	var_139_string = ""; // 0x295 PushS
	var_140_bool = var_133_string == var_139_string; // 0x296 Eq
	if(var_140_bool == 0) goto Label_666; // 0x297 JumpB
	var_138_bool = 0; // 0x298 MovB
	goto Label_667; // 0x299 Jump
	
Label_667:
	func_3851(var_137_string, var_138_bool); // 0x29b NEW_2
	var_2_object = var_133_string; // 0x29d TMov
	return 0; // 0x29e Return
	
Label_666:
	var_138_bool = 1; // 0x29a MovB
}


func_4233(var_226_bool)
{
	var_228_int = 0; // 0x108a PushV
	func_3996(var_228_int); // 0x108b NEW_2
	var_229_int = 8; // 0x108d PushI
	var_226_bool = var_228_int == var_229_int; // 0x108e Eq2
	return 0; // 0x108f Return
}


func_4752(var_22_bool, var_23_object)
{
	var_24_bool = 0; var_25_bool = 0; // 0x1290 PushV
	var_26_bool = 0; // 0x1291 PushV
	var_26_bool = 0; // 0x1292 MovB
	var_27_bool = 0; var_28_object = Obj(); // 0x1293 PushV
	var_28_object = var_23_object; // 0x1294 Mov
	func_4986(var_27_bool, var_28_object); // 0x1295 NEW_2
	if(var_27_bool == 0) goto Label_4766; // 0x1297 JumpB
	var_31_bool = 0; var_32_object = Obj(); // 0x1298 PushV
	var_32_object = var_23_object; // 0x1299 Mov
	func_3524(var_31_bool, var_32_object); // 0x129a NEW_2
	if(var_31_bool == 0) goto Label_4766; // 0x129c JumpB
	var_26_bool = 1; // 0x129d MovB
	
Label_4766:
	if(var_26_bool == 0) goto Label_4773; // 0x129e JumpB
	IsWeaponHolstered(var_25_bool); // 0x129f ObjFunc
	var_35_bool = var_25_bool == 0; // 0x12a1 Not
	if(var_35_bool == 0) goto Label_4773; // 0x12a2 JumpB
	var_22_bool = 1; // 0x12a3 MovB
	return 2; // 0x12a4 Return
	
Label_4773:
	var_22_bool = 0; // 0x12a5 MovB
	return 2; // 0x12a6 Return
}


func_5265(var_104_object)
{
	var_105_bool = 0; var_106_object = Obj(); // 0x1492 PushV
	var_106_object = var_104_object; // 0x1493 Mov
	func_3524(var_105_bool, var_106_object); // 0x1494 NEW_2
	if(var_105_bool == 0) goto Label_5282; // 0x1496 JumpB
	var_109_object = Obj(); // 0x1497 PushV
	func_3925(var_109_object); // 0x1498 NEW_2
	var_112_float = -0.1; // 0x149a PushF
	var_113_bool = 1; // 0x149b PushB
	ReportReputationChange(var_104_object, var_109_object, var_112_float, var_113_bool); // 0x149c Func
	var_114_bool = 0; // 0x149e PushV
	var_114_bool = 0; // 0x149f MovB
	func_4470(var_114_bool); // 0x14a0 NEW_2
	
Label_5282:
	func_4446(); // 0x14a3 NEW_2
	var_248_bool = GlobalVars[0]; // 0x14a5 PushGE
	var_248_bool = 1; // 0x14a6 MovB
	GlobalVars[0] = var_248_bool; // 0x14a7 PopGE
	var_249_int = 50; // 0x14a8 PushI
	var_250_int = 40; // 0x14a9 PushI
	SetRTEnvelope(var_249_int, var_250_int); // 0x14aa Func
	return 0; // 0x14ac Return
}


func_4240(var_203_bool)
{
	var_205_int = 0; // 0x1091 PushV
	func_3996(var_205_int); // 0x1092 NEW_2
	var_206_int = 9; // 0x1094 PushI
	var_203_bool = var_205_int == var_206_int; // 0x1095 Eq2
	return 0; // 0x1096 Return
}


func_2707(var_76_object)
{
	Face(var_76_object); // 0xa94 Func
	var_80_string = "all"; // 0xa96 PushS
	var_81_string = "attack_on"; // 0xa97 PushS
	PlayAnimation(var_80_string, var_81_string); // 0xa98 Func
	WaitForAnimEnd(); // 0xa9a Func
	var_82_string = "all"; // 0xa9c PushS
	var_83_string = "attack_stay"; // 0xa9d PushS
	PlayAnimation(var_82_string, var_83_string); // 0xa9e Func
	WaitForAnimEnd(); // 0xaa0 Func
	var_84_string = "all"; // 0xaa2 PushS
	var_85_string = "attack_off"; // 0xaa3 PushS
	PlayAnimation(var_84_string, var_85_string); // 0xaa4 Func
	WaitForAnimEnd(); // 0xaa6 Func
	StopAsync(); // 0xaa8 Func
	var_86_object = Obj(); // 0xaaa PushV
	var_86_object = var_76_object; // 0xaab Mov
	func_2772(var_78_cvector, var_79_bool, var_76_object, var_86_object); // 0xaac NEW_2
	return 0; // 0xaae Return
}


func_3732()
{
	var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); // 0xe94 PushV
	GetPosition(var_101_cvector); // 0xe95 ObjFunc
	GetPosition(var_102_cvector); // 0xe97 Func
	var_103_cvector = var_101_cvector - var_102_cvector; // 0xe99 Sub2
	var_104_float = GetByIndex(var_103_cvector, 0); // 0xe9a PushE
	var_105_float = GetByIndex(var_103_cvector, 2); // 0xe9b PushE
	RotateAsync(var_104_float, var_105_float); // 0xe9c Func
	return 6; // 0xe9e Return
}


func_4247(var_209_bool)
{
	var_211_int = 0; // 0x1098 PushV
	func_3996(var_211_int); // 0x1099 NEW_2
	var_212_int = 10; // 0x109b PushI
	var_209_bool = var_211_int == var_212_int; // 0x109c Eq2
	return 0; // 0x109d Return
}


func_1690(var_24_object)
{
	var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_string = ""; var_30_object = Obj(); var_31_bool = 0; var_32_bool = 0; var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_string = ""; var_40_object = Obj(); var_41_bool = 0; var_42_bool = 0; var_43_float = 0; var_44_cvector = CVector(0,0,0); // 0x69a PushV
	var_45_bool = var_24_object == 0; // 0x69b NullEq
	if(var_45_bool == 0) goto Label_1698; // 0x69c JumpB
	var_46_string = ""; // 0x69d PushV
	var_46_string = "fdie"; // 0x69e MovS
	func_1781(var_46_string); // 0x69f NEW_2
	goto Label_1780; // 0x6a1 Jump
	
Label_1780:
	return 20; // 0x6f4 Return
	
Label_1698:
	GetPosition(var_35_cvector); // 0x6a2 ObjFunc
	GetPosition(var_36_cvector); // 0x6a4 Func
	GetDirection(var_37_cvector); // 0x6a6 Func
	var_38_cvector = var_36_cvector - var_35_cvector; // 0x6a8 Sub2
	var_78_float = GetByIndex(var_38_cvector, 0); // 0x6a9 PushE
	var_79_float = GetByIndex(var_37_cvector, 0); // 0x6aa PushE
	var_80_float = var_78_float * var_79_float; // 0x6ab Mult
	var_81_float = GetByIndex(var_38_cvector, 2); // 0x6ac PushE
	var_82_float = GetByIndex(var_37_cvector, 2); // 0x6ad PushE
	var_83_float = var_81_float * var_82_float; // 0x6ae Mult
	var_84_int = var_80_float + var_83_float; // 0x6af Add
	var_85_int = 0; // 0x6b0 PushI
	var_86_bool = var_84_int >= var_85_int; // 0x6b1 GE
	if(var_86_bool == 0) goto Label_1717; // 0x6b2 JumpB
	var_39_string = "fdie"; // 0x6b3 MovS
	goto Label_1718; // 0x6b4 Jump
	
Label_1718:
	RemoveRTEnvelope(); // 0x6b6 Func
	SetDeathState(); // 0x6b8 Func
	Stop(); // 0x6ba Func
	StopAsync(); // 0x6bc Func
	var_40_object = var_24_object; // 0x6be Mov
	var_87_string = "GetScriptProperty"; // 0x6bf PushS
	var_88_int = 2; // 0x6c0 PushI
	var_89_bool = IsFuncExist(var_24_object, var_87_string, var_88_int); // 0x6c1 FuncExist
	if(var_89_bool == 0) goto Label_1742; // 0x6c2 JumpB
	var_90_string = "Owner"; // 0x6c3 PushS
	HasScriptProperty(var_41_bool, var_90_string); // 0x6c4 ObjFunc
	var_91_bool = var_41_bool; // 0x6c6 Push
	if(var_91_bool == 0) goto Label_1742; // 0x6c7 JumpB
	var_92_string = "Owner"; // 0x6c8 PushS
	GetScriptProperty(var_40_object, var_92_string); // 0x6c9 ObjFunc
	var_93_bool = var_40_object == 0; // 0x6cb NullEq
	if(var_93_bool == 0) goto Label_1742; // 0x6cc JumpB
	var_40_object = var_24_object; // 0x6cd Mov
	
Label_1742:
	var_94_string = "@GetEyesHeight"; // 0x6ce PushS
	var_95_int = 1; // 0x6cf PushI
	var_96_bool = IsFuncExist(var_40_object, var_94_string, var_95_int); // 0x6d0 FuncExist
	if(var_96_bool == 0) goto Label_1757; // 0x6d1 JumpB
	GetEyesHeight(var_43_float); // 0x6d2 ObjFunc
	var_44_cvector = CVector(0.0, 0.0, 0.0); // 0x6d4 MovV
	var_97_float = GetByIndex(var_44_cvector, 1); // 0x6d5 PushE
	var_97_float = var_43_float; // 0x6d6 Mov
	SetByIndex(var_44_cvector, 1) = var_97_float; // 0x6d7 PopE
	var_98_string = "head"; // 0x6d8 PushS
	LookAsync(var_24_object, var_98_string, var_44_cvector); // 0x6d9 Func
	var_42_bool = 1; // 0x6db MovB
	goto Label_1758; // 0x6dc Jump
	
Label_1758:
	var_99_string = ""; // 0x6de PushV
	var_99_string = var_39_string; // 0x6df Mov
	func_3884(var_99_string); // 0x6e0 NEW_2
	var_100_string = "all"; // 0x6e2 PushS
	PlayAnimation(var_100_string, var_39_string); // 0x6e3 Func
	WaitForAnimEnd(); // 0x6e5 Func
	var_101_bool = var_42_bool; // 0x6e7 Push
	if(var_101_bool == 0) goto Label_1774; // 0x6e8 JumpB
	StopAsync(); // 0x6e9 Func
	var_102_string = "head"; // 0x6eb PushS
	UnlookAsync(var_102_string); // 0x6ec Func
	
Label_1774:
	var_103_string = "all"; // 0x6ee PushS
	LockAnimationEnd(var_103_string, var_39_string); // 0x6ef Func
	RemoveEnvelope(); // 0x6f1 Func
	var_40_object = 0; // 0x6f3 SetNull
	
Label_1757:
	var_42_bool = 0; // 0x6dd MovB
	
Label_1717:
	var_39_string = "bdie"; // 0x6b5 MovS
}


func_4254(var_286_bool)
{
	var_288_int = 0; // 0x109f PushV
	func_3996(var_288_int); // 0x10a0 NEW_2
	var_289_int = 11; // 0x10a2 PushI
	var_286_bool = var_288_int == var_289_int; // 0x10a3 Eq2
	return 0; // 0x10a4 Return
}


func_3743(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0xe9f PushV
	IsLoaded(var_25_bool); // 0xea0 Func
	var_23_bool = var_25_bool; // 0xea2 Mov
	return 2; // 0xea3 Return
}


func_3748(var_57_bool, var_59_float)
{
	var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_bool = 0; var_68_bool = 0; var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_bool = 0; var_77_bool = 0; // 0xea4 PushV
	GetPosition(var_70_cvector); // 0xea5 ObjFunc
	GetEyesHeight(var_69_float); // 0xea7 ObjFunc
	var_78_float = GetByIndex(var_70_cvector, 1); // 0xea9 PushE
	var_78_float = var_78_float + var_69_float; // 0xeaa Add2
	SetByIndex(var_70_cvector, 1) = var_78_float; // 0xeab PopE
	GetPosition(var_71_cvector); // 0xeac Func
	GetEyesHeight(var_69_float); // 0xeae Func
	var_79_float = GetByIndex(var_71_cvector, 1); // 0xeb0 PushE
	var_79_float = var_79_float + var_69_float; // 0xeb1 Add2
	SetByIndex(var_71_cvector, 1) = var_79_float; // 0xeb2 PopE
	var_72_cvector = var_70_cvector - var_71_cvector; // 0xeb3 Sub2
	var_80_float = GetByIndex(var_72_cvector, 1); // 0xeb4 PushE
	var_80_float = 0; // 0xeb5 MovI
	SetByIndex(var_72_cvector, 1) = var_80_float; // 0xeb6 PopE
	var_81_int = var_72_cvector | var_72_cvector; // 0xeb7 Or
	var_82_float = sqrt(var_81_int); // 0xeb8 Sqrt
	var_72_cvector = var_72_cvector / var_72_cvector; // 0xeb9 Div2
	var_73_cvector = -var_72_cvector; // 0xeba Neg2
	var_83_float = var_72_cvector * var_59_float; // 0xebb Mult
	var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); // 0xebc PushV
	var_86_cvector = CVector(0.0, 1.0, 0.0); // 0xebd PushVec
	var_85_cvector = var_73_cvector ^ var_86_cvector; // 0xebe Xor2
	func_3931(var_84_cvector, var_85_cvector); // 0xebf NEW_2
	var_92_int = 25; // 0xec1 PushI
	var_93_float = var_84_cvector * var_92_int; // 0xec2 Mult
	var_94_int = var_83_float + var_93_float; // 0xec3 Add
	var_95_cvector = CVector(0.0, 10.0, 0.0); // 0xec4 PushVec
	var_74_cvector = var_94_int - var_95_cvector; // 0xec5 Sub2
	var_75_cvector = var_71_cvector + var_74_cvector; // 0xec6 Add2
	IsOverrideActive(var_76_bool); // 0xec7 Func
	var_96_bool = var_76_bool; // 0xec9 Push
	if(var_96_bool == 0) goto Label_3789; // 0xeca JumpB
	var_57_bool = 0; // 0xecb MovB
	return 18; // 0xecc Return
	
Label_3789:
	StopWorld(); // 0xecd Func
	var_97_bool = 1; // 0xecf PushB
	CameraTransit(var_75_cvector, var_73_cvector, var_97_bool); // 0xed0 Func
	var_98_float = GetByIndex(var_74_cvector, 0); // 0xed2 PushE
	var_99_float = GetByIndex(var_74_cvector, 2); // 0xed3 PushE
	Rotate(var_98_float, var_99_float); // 0xed4 Func
	var_100_bool = 0; // 0xed6 PushV
	func_5226(var_100_bool); // 0xed7 NEW_2
	if(var_100_bool == 0) goto Label_3803; // 0xed9 JumpB
	goto Label_3811; // 0xeda Jump
	
Label_3811:
	CameraWaitForPlayFinish(); // 0xee3 Func
	ResumeWorld(); // 0xee5 Func
	var_57_bool = 1; // 0xee7 MovB
	return 18; // 0xee8 Return
	
Label_3803:
	var_101_string = "head"; // 0xedb PushS
	HasAnimationTrack(var_77_bool, var_101_string); // 0xedc Func
	var_102_bool = var_77_bool; // 0xede Push
	if(var_102_bool == 0) goto Label_3811; // 0xedf JumpB
	var_103_string = "head"; // 0xee0 PushS
	LookAsyncCamera(var_103_string); // 0xee1 Func
}


func_4261(var_292_bool)
{
	var_294_int = 0; // 0x10a6 PushV
	func_3996(var_294_int); // 0x10a7 NEW_2
	var_295_int = 12; // 0x10a9 PushI
	var_292_bool = var_294_int == var_295_int; // 0x10aa Eq2
	return 0; // 0x10ab Return
}


func_4775(var_38_object)
{
	var_39_object = Obj(); // 0x12a8 PushV
	var_39_object = var_38_object; // 0x12a9 Mov
	func_4991(var_39_object); // 0x12aa NEW_2
	return 0; // 0x12ac Return
}


func_4268(var_404_bool)
{
	var_406_int = 0; // 0x10ad PushV
	func_4005(var_406_int); // 0x10ae NEW_2
	var_411_int = 12; // 0x10b0 PushI
	var_412_bool = var_406_int >= var_411_int; // 0x10b1 GE
	if(var_412_bool == 0) goto Label_4277; // 0x10b2 JumpB
	var_404_bool = 1; // 0x10b3 MovB
	return 0; // 0x10b4 Return
	
Label_4277:
	var_404_bool = 0; // 0x10b5 MovB
	return 0; // 0x10b6 Return
}


func_4781(var_24_object)
{
	var_25_bool = 0; var_26_object = Obj(); // 0x12ae PushV
	var_26_object = var_24_object; // 0x12af Mov
	func_3524(var_25_bool, var_26_object); // 0x12b0 NEW_2
	if(var_25_bool == 0) goto Label_4793; // 0x12b2 JumpB
	var_29_object = Obj(); // 0x12b3 PushV
	func_3925(var_29_object); // 0x12b4 NEW_2
	var_32_float = -0.05; // 0x12b6 PushF
	ReportReputationChange(var_24_object, var_29_object, var_32_float); // 0x12b7 Func
	
Label_4793:
	return 0; // 0x12b9 Return
}


func_2742(var_35_cvector, var_36_float)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_float = 0; // 0xab6 PushV
	GetPosition(var_43_cvector); // 0xab7 Func
	GetPosition(var_44_cvector); // 0xab9 TObjFunc
	GetDirection(var_45_cvector); // 0xabb Func
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); // 0xabd PushV
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); // 0xabe PushV
	var_52_cvector = var_43_cvector - var_44_cvector; // 0xabf Sub2
	func_3931(var_51_cvector, var_52_cvector); // 0xac0 NEW_2
	var_58_float = 0.75; // 0xac2 PushF
	var_59_float = var_45_cvector * var_58_float; // 0xac3 Mult
	var_50_cvector = var_51_cvector + var_59_float; // 0xac4 Add2
	func_3931(var_49_cvector, var_50_cvector); // 0xac5 NEW_2
	var_46_cvector = var_49_cvector; // 0xac6 Mov
	var_60_int = 32; // 0xac8 PushI
	var_61_float = 7000.0; // 0xac9 PushF
	FindLongestDir(var_47_cvector, var_48_float, var_46_cvector, var_36_float, var_60_int, var_61_float); // 0xaca Func
	var_62_int = 100; // 0xacc PushI
	var_48_float = var_48_float - var_62_int; // 0xacd Sub2
	var_63_int = 0; // 0xace PushI
	var_64_bool = var_48_float < var_63_int; // 0xacf LT
	if(var_64_bool == 0) goto Label_2770; // 0xad0 JumpB
	var_48_float = 0; // 0xad1 MovI
	
Label_2770:
	var_35_cvector = var_47_cvector * var_48_float; // 0xad2 Mult2
	return 12; // 0xad3 Return
}


func_4279(var_109_int)
{
	var_110_int = 0; var_111_int = 0; // 0x10b7 PushV
	var_112_string = "branch"; // 0x10b8 PushS
	GetVariable(var_112_string, var_111_int); // 0x10b9 Func
	var_113_int = 0; // 0x10bb PushI
	var_114_bool = var_111_int == var_113_int; // 0x10bc Eq
	if(var_114_bool == 0) goto Label_4289; // 0x10bd JumpB
	var_109_int = 1; // 0x10be MovI
	return 2; // 0x10bf Return
	
Label_4289:
	var_115_int = 1; // 0x10c1 PushI
	var_116_bool = var_111_int == var_115_int; // 0x10c2 Eq
	if(var_116_bool == 0) goto Label_4294; // 0x10c3 JumpB
	var_109_int = 2; // 0x10c4 MovI
	return 2; // 0x10c5 Return
	
Label_4294:
	var_109_int = 3; // 0x10c6 MovI
	return 2; // 0x10c7 Return
}


func_4794(var_22_bool, var_23_string)
{
	var_24_object = Obj(); var_25_object = Obj(); // 0x12ba PushV
	var_26_string = "heal"; // 0x12bb PushS
	var_27_bool = var_23_string == var_26_string; // 0x12bc Eq
	if(var_27_bool == 0) goto Label_4808; // 0x12bd JumpB
	var_28_string = "player"; // 0x12be PushS
	FindActor(var_25_object, var_28_string); // 0x12bf Func
	var_29_bool = 0; var_30_object = Obj(); // 0x12c1 PushV
	var_30_object = var_25_object; // 0x12c2 Mov
	func_5035(var_30_object); // 0x12c3 NEW_2
	var_22_bool = var_29_bool; // 0x12c4 Mov
	return 2; // 0x12c6 Return
	
Label_4808:
	var_22_bool = 0; // 0x12c8 MovB
	return 2; // 0x12c9 Return
}


func_4296(var_228_int)
{
	var_229_int = 0; var_230_int = 0; // 0x10c8 PushV
	var_231_string = "branch"; // 0x10c9 PushS
	GetVariable(var_231_string, var_230_int); // 0x10ca Func
	var_228_int = var_230_int; // 0x10cc Mov
	return 2; // 0x10cd Return
}


func_4810(var_33_string)
{
	var_34_object = Obj(); var_35_object = Obj(); // 0x12ca PushV
	var_36_string = "heal"; // 0x12cb PushS
	var_37_bool = var_33_string == var_36_string; // 0x12cc Eq
	if(var_37_bool == 0) goto Label_4822; // 0x12cd JumpB
	var_38_string = "player"; // 0x12ce PushS
	FindActor(var_35_object, var_38_string); // 0x12cf Func
	var_39_object = Obj(); // 0x12d1 PushV
	var_39_object = var_35_object; // 0x12d2 Mov
	func_5038(); // 0x12d3 NEW_2
	var_35_object = 0; // 0x12d5 SetNull
	
Label_4822:
	return 2; // 0x12d6 Return
}


func_3278(var_2_object)
{
	Stop(); // 0xcce Func
	var_22_int = 120; // 0xcd0 PushI
	KillTimer(var_22_int); // 0xcd1 Func
	var_2_object = 1; // 0xcd3 TMovB
	return 0; // 0xcd4 Return
}


func_4302(var_553_int)
{
	var_555_int = 0; var_556_int = 0; // 0x10ce PushV
	GetItemID(var_556_int); // 0x10cf ObjFunc
	var_553_int = var_556_int; // 0x10d1 Mov
	return 2; // 0x10d2 Return
}


func_4307(var_530_int, var_531_object, var_532_int)
{
	var_533_int = 0; var_534_int = 0; var_535_int = 0; var_536_string = ""; var_537_bool = 0; var_538_bool = 0; var_539_int = 0; var_540_int = 0; var_541_int = 0; var_542_int = 0; var_543_string = ""; var_544_bool = 0; var_545_bool = 0; var_546_int = 0; // 0x10d3 PushV
	var_547_int = 0; // 0x10d4 PushI
	var_548_bool = var_532_int == var_547_int; // 0x10d5 Eq
	if(var_548_bool == 0) goto Label_4344; // 0x10d6 JumpB
	var_549_int = 0; // 0x10d7 PushV
	func_3996(var_549_int); // 0x10d8 NEW_2
	var_540_int = var_549_int; // 0x10d9 Mov
	var_541_int = 0; // 0x10db MovI
	var_542_int = 1; // 0x10dc MovI
	
Label_4317:
	var_550_bool = var_542_int <= var_540_int; // 0x10dd LE
	if(var_550_bool == 0) goto Label_4342; // 0x10de JumpB
	var_543_string = "Price"; // 0x10df MovS
	var_551_int = 1; // 0x10e0 PushI
	var_552_bool = var_542_int != var_551_int; // 0x10e1 Neq
	if(var_552_bool == 0) goto Label_4324; // 0x10e2 JumpB
	var_543_string = var_543_string + var_542_int; // 0x10e3 Add2
	
Label_4324:
	var_553_int = 0; var_554_object = Obj(); // 0x10e4 PushV
	var_554_object = var_531_object; // 0x10e5 Mov
	func_4302(var_554_object); // 0x10e6 NEW_2
	HasInvItemProperty(var_544_bool, var_553_int, var_543_string); // 0x10e8 Func
	var_557_bool = var_544_bool == 0; // 0x10ea Not
	if(var_557_bool == 0) goto Label_4333; // 0x10eb JumpB
	goto Label_4339; // 0x10ec Jump
	
Label_4339:
	var_558_int = 1; // 0x10f3 PushI
	var_542_int = var_542_int + var_558_int; // 0x10f4 Add2
	goto Label_4317; // 0x10f5 Jump
	
Label_4333:
	var_559_int = 0; var_560_object = Obj(); // 0x10ed PushV
	var_560_object = var_531_object; // 0x10ee Mov
	func_4302(var_560_object); // 0x10ef NEW_2
	GetInvItemProperty(var_541_int, var_559_int, var_543_string); // 0x10f1 Func
	
Label_4342:
	var_530_int = var_541_int; // 0x10f6 Mov
	return 14; // 0x10f7 Return
	
Label_4344:
	var_561_int = 0; var_562_object = Obj(); // 0x10f8 PushV
	var_562_object = var_531_object; // 0x10f9 Mov
	func_4302(var_562_object); // 0x10fa NEW_2
	var_563_string = "BarterPrice"; // 0x10fc PushS
	var_564_int = var_563_string + var_532_int; // 0x10fd Add
	HasInvItemProperty(var_545_bool, var_561_int, var_564_int); // 0x10fe Func
	var_565_bool = var_545_bool == 0; // 0x1100 Not
	if(var_565_bool == 0) goto Label_4356; // 0x1101 JumpB
	var_530_int = 0; // 0x1102 MovI
	return 14; // 0x1103 Return
	
Label_4356:
	var_566_int = 0; var_567_object = Obj(); // 0x1104 PushV
	var_567_object = var_531_object; // 0x1105 Mov
	func_4302(var_567_object); // 0x1106 NEW_2
	var_568_string = "BarterPrice"; // 0x1108 PushS
	var_569_int = var_568_string + var_532_int; // 0x1109 Add
	GetInvItemProperty(var_546_int, var_566_int, var_569_int); // 0x110a Func
	var_570_int = 0; // 0x110c PushI
	var_571_bool = var_546_int > var_570_int; // 0x110d GT
	if(var_571_bool == 0) goto Label_4369; // 0x110e JumpB
	var_530_int = var_546_int; // 0x110f Mov
	return 14; // 0x1110 Return
	
Label_4369:
	var_530_int = -var_546_int; // 0x1111 Neg2
	return 14; // 0x1112 Return
}


func_2772(var_0_object, var_1_object, var_2_object, var_86_object)
{
	var_87_cvector = CVector(0,0,0); var_88_float = 0; var_89_bool = 0; var_90_cvector = CVector(0,0,0); var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_float = 0; var_94_bool = 0; var_95_cvector = CVector(0,0,0); var_96_float = 0; // 0xad4 PushV
	var_0_object = var_86_object; // 0xad5 TMov
	var_97_cvector = CVector(0,0,0); var_98_float = 0; // 0xad6 PushV
	var_98_float = 1.74533; // 0xad7 MovF
	func_2742(var_97_cvector, var_98_float); // 0xad8 NEW_2
	var_92_cvector = var_97_cvector; // 0xad9 Mov
	var_93_float = var_92_cvector | var_92_cvector; // 0xadb Or2
	var_127_float = 2500.0; // 0xadc PushF
	var_128_bool = var_93_float < var_127_float; // 0xadd LT
	if(var_128_bool == 0) goto Label_2801; // 0xade JumpB
	var_129_cvector = CVector(0,0,0); var_130_float = 0; // 0xadf PushV
	var_130_float = 2.61799; // 0xae0 MovF
	func_2742(var_129_cvector, var_130_float); // 0xae1 NEW_2
	var_92_cvector = var_129_cvector; // 0xae2 Mov
	var_93_float = var_92_cvector | var_92_cvector; // 0xae4 Or2
	var_131_float = 2500.0; // 0xae5 PushF
	var_132_bool = var_93_float < var_131_float; // 0xae6 LT
	if(var_132_bool == 0) goto Label_2801; // 0xae7 JumpB
	var_133_string = "Can't retreat, distance: "; // 0xae8 PushS
	var_134_float = sqrt(var_93_float); // 0xae9 Sqrt
	var_135_int = var_133_string + var_134_float; // 0xaea Add
	Trace(var_135_int); // 0xaeb Func
	var_136_float = 0.5; // 0xaed PushF
	Sleep(var_136_float); // 0xaee Func
	return 10; // 0xaf0 Return
	
Label_2801:
	var_137_float = GetByIndex(var_92_cvector, 0); // 0xaf1 PushE
	var_138_float = GetByIndex(var_92_cvector, 2); // 0xaf2 PushE
	Rotate(var_137_float, var_138_float); // 0xaf3 Func
	var_139_cvector = CVector(0,0,0); // 0xaf5 PushV
	func_3504(var_139_cvector); // 0xaf6 NEW_2
	var_1_object = var_139_cvector + var_92_cvector; // 0xaf8 Add2
	var_142_int = 120; // 0xaf9 PushI
	var_143_float = 0.5; // 0xafa PushF
	SetTimer(var_142_int, var_143_float); // 0xafb Func
	var_2_object = 0; // 0xafd TMovB
	
Label_2814:
	var_144_int = 1; // 0xafe PushI
	MovePoint(var_144_int, var_144_int, var_94_bool); // 0xaff Func
	var_145_bool = var_94_bool; // 0xb01 Push
	if(var_145_bool == 0) goto Label_2842; // 0xb02 JumpB
	var_146_bool = var_0_object == 0; // 0xb03 NullEq
	if(var_146_bool == 0) goto Label_2823; // 0xb04 JumpB
	goto Label_2844; // 0xb05 Jump
	
Label_2844:
	return 10; // 0xb1c Return
	
Label_2823:
	var_147_cvector = CVector(0,0,0); var_148_float = 0; // 0xb07 PushV
	var_148_float = 2.61799; // 0xb08 MovF
	func_2742(var_147_cvector, var_148_float); // 0xb09 NEW_2
	var_95_cvector = var_147_cvector; // 0xb0a Mov
	var_96_float = var_95_cvector | var_95_cvector; // 0xb0c Or2
	var_149_float = 2500.0; // 0xb0d PushF
	var_150_bool = var_96_float >= var_149_float; // 0xb0e GE
	if(var_150_bool == 0) goto Label_2841; // 0xb0f JumpB
	var_151_cvector = CVector(0,0,0); // 0xb10 PushV
	func_3504(var_151_cvector); // 0xb11 NEW_2
	var_1_object = var_151_cvector + var_95_cvector; // 0xb13 Add2
	var_152_int = 120; // 0xb14 PushI
	var_153_float = 0.5; // 0xb15 PushF
	SetTimer(var_152_int, var_153_float); // 0xb16 Func
	goto Label_2842; // 0xb18 Jump
	
Label_2842:
	var_154_bool = var_2_object == 0; // 0xb1a Not
	if(var_154_bool == 0) goto Label_2814; // 0xb1b JumpB
	
Label_2841:
	goto Label_2844; // 0xb19 Jump
}


func_4823(var_76_string, var_77_int)
{
	var_78_string = ""; var_79_string = ""; // 0x12d7 PushV
	var_79_string = "idle"; // 0x12d8 MovS
	var_80_int = var_77_int; // 0x12d9 Push
	if(var_80_int == 0) goto Label_4828; // 0x12da JumpB
	var_79_string = var_79_string + var_77_int; // 0x12db Add2
	
Label_4828:
	var_76_string = var_79_string; // 0x12dc Mov
	return 2; // 0x12dd Return
}


func_4830(var_70_int)
{
	var_71_int = 0; var_72_bool = 0; var_73_int = 0; var_74_bool = 0; // 0x12de PushV
	var_73_int = 0; // 0x12df MovI
	
Label_4832:
	var_75_string = "all"; // 0x12e0 PushS
	var_76_string = ""; var_77_int = 0; // 0x12e1 PushV
	var_77_int = var_73_int; // 0x12e2 Mov
	func_4823(var_76_string, var_77_int); // 0x12e3 NEW_2
	HasAnimation(var_74_bool, var_75_string, var_76_string); // 0x12e5 Func
	var_81_bool = var_74_bool == 0; // 0x12e7 Not
	if(var_81_bool == 0) goto Label_4842; // 0x12e8 JumpB
	goto Label_4845; // 0x12e9 Jump
	
Label_4845:
	var_70_int = var_73_int; // 0x12ed Mov
	return 4; // 0x12ee Return
	
Label_4842:
	var_82_int = 1; // 0x12ea PushI
	var_73_int = var_73_int + var_82_int; // 0x12eb Add2
	goto Label_4832; // 0x12ec Jump
}


func_3294(var_0_object, var_73_bool)
{
	var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); // 0xcde PushV
	GetDirection(var_76_cvector); // 0xcdf Func
	var_78_cvector = CVector(0,0,0); var_79_object = Obj(); // 0xce1 PushV
	var_79_object = var_0_object; // 0xce2 MovT
	func_3509(var_79_object); // 0xce3 NEW_2
	var_77_cvector = var_78_cvector; // 0xce4 Mov
	var_84_float = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); // 0xce6 PushV
	var_85_cvector = var_76_cvector; // 0xce7 Mov
	var_86_cvector = var_77_cvector; // 0xce8 Mov
	func_3947(var_84_float, var_85_cvector, var_86_cvector); // 0xce9 NEW_2
	var_92_float = -0.34202; // 0xceb PushF
	var_73_bool = var_84_float >= var_92_float; // 0xcec GE2
	return 4; // 0xced Return
}


func_3817()
{
	var_443_bool = 0; var_444_bool = 0; // 0xee9 PushV
	var_445_bool = 1; // 0xeea PushB
	CameraSwitchToNormal(var_445_bool); // 0xeeb Func
	var_446_bool = 0; // 0xeed PushV
	func_5226(var_446_bool); // 0xeee NEW_2
	if(var_446_bool == 0) goto Label_3826; // 0xef0 JumpB
	goto Label_3834; // 0xef1 Jump
	
Label_3834:
	return 2; // 0xefa Return
	
Label_3826:
	var_447_string = "head"; // 0xef2 PushS
	HasAnimationTrack(var_444_bool, var_447_string); // 0xef3 Func
	var_448_bool = var_444_bool; // 0xef5 Push
	if(var_448_bool == 0) goto Label_3834; // 0xef6 JumpB
	var_449_string = "head"; // 0xef7 PushS
	UnlookAsync(var_449_string); // 0xef8 Func
}


func_4847(var_64_int)
{
	var_66_bool = 0; // 0x12f0 PushV
	func_5250(var_66_bool); // 0x12f1 NEW_2
	if(var_66_bool == 0) goto Label_4854; // 0x12f3 JumpB
	var_64_int = 2; // 0x12f4 MovI
	goto Label_4855; // 0x12f5 Jump
	
Label_4855:
	return 0; // 0x12f7 Return
	
Label_4854:
	var_64_int = 0; // 0x12f6 MovI
}


func_1781(var_46_string)
{
	RemoveRTEnvelope(); // 0x6f6 Func
	SetDeathState(); // 0x6f8 Func
	Stop(); // 0x6fa Func
	StopAsync(); // 0x6fc Func
	StopSecondaryAnimation(); // 0x6fe Func
	var_47_string = ""; // 0x700 PushV
	var_47_string = var_46_string; // 0x701 Mov
	func_3884(var_47_string); // 0x702 NEW_2
	var_76_string = "all"; // 0x704 PushS
	PlayAnimation(var_76_string, var_46_string); // 0x705 Func
	WaitForAnimEnd(); // 0x707 Func
	var_77_string = "all"; // 0x709 PushS
	LockAnimationEnd(var_77_string, var_46_string); // 0x70a Func
	RemoveEnvelope(); // 0x70c Func
	return 0; // 0x70e Return
}


func_3317(var_35_cvector, var_36_float)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_float = 0; // 0xcf5 PushV
	GetPosition(var_43_cvector); // 0xcf6 Func
	GetPosition(var_44_cvector); // 0xcf8 TObjFunc
	GetDirection(var_45_cvector); // 0xcfa Func
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); // 0xcfc PushV
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); // 0xcfd PushV
	var_52_cvector = var_43_cvector - var_44_cvector; // 0xcfe Sub2
	func_3931(var_51_cvector, var_52_cvector); // 0xcff NEW_2
	var_58_float = 0.75; // 0xd01 PushF
	var_59_float = var_45_cvector * var_58_float; // 0xd02 Mult
	var_50_cvector = var_51_cvector + var_59_float; // 0xd03 Add2
	func_3931(var_49_cvector, var_50_cvector); // 0xd04 NEW_2
	var_46_cvector = var_49_cvector; // 0xd05 Mov
	var_60_int = 32; // 0xd07 PushI
	var_61_float = 7000.0; // 0xd08 PushF
	FindLongestDir(var_47_cvector, var_48_float, var_46_cvector, var_36_float, var_60_int, var_61_float); // 0xd09 Func
	var_62_int = 100; // 0xd0b PushI
	var_48_float = var_48_float - var_62_int; // 0xd0c Sub2
	var_63_int = 0; // 0xd0d PushI
	var_64_bool = var_48_float < var_63_int; // 0xd0e LT
	if(var_64_bool == 0) goto Label_3345; // 0xd0f JumpB
	var_48_float = 0; // 0xd10 MovI
	
Label_3345:
	var_35_cvector = var_47_cvector * var_48_float; // 0xd11 Mult2
	return 12; // 0xd12 Return
}


func_4856(var_81_object)
{
	var_82_object = Obj(); // 0x12f9 PushV
	var_82_object = var_81_object; // 0x12fa Mov
	TaskCall(5); // 0x12fb TaskCall
	func_2432(var_83_object, var_82_object); // 0x12fc NEW_2
	TaskReturn(); // 0x12fd TaskReturn
	return 0; // 0x12ff Return
}


func_3835(var_365_string)
{
	var_366_bool = 0; var_367_float = 0; var_368_float = 0; var_369_bool = 0; var_370_float = 0; var_371_float = 0; // 0xefb PushV
	lshHasAnimation(var_369_bool, var_365_string); // 0xefc Func
	var_372_bool = var_369_bool; // 0xefe Push
	if(var_372_bool == 0) goto Label_3846; // 0xeff JumpB
	lshGetAnimTimes(var_365_string, var_370_float, var_371_float); // 0xf00 Func
	var_373_bool = 0; // 0xf02 PushB
	lshPlayAnimation(var_370_float, var_371_float, var_373_bool); // 0xf03 Func
	goto Label_3850; // 0xf05 Jump
	
Label_3850:
	return 6; // 0xf0a Return
	
Label_3846:
	var_374_string = "Can't find lsh animation : "; // 0xf06 PushS
	var_375_int = var_374_string + var_365_string; // 0xf07 Add
	Trace(var_375_int); // 0xf08 Func
}


func_4864(var_33_int, var_34_object)
{
	var_35_bool = 0; var_36_object = Obj(); // 0x1301 PushV
	var_36_object = var_34_object; // 0x1302 Mov
	func_3582(var_35_bool, var_36_object); // 0x1303 NEW_2
	if(var_35_bool == 0) goto Label_4872; // 0x1305 JumpB
	var_33_int = 2; // 0x1306 MovI
	goto Label_4873; // 0x1307 Jump
	
Label_4873:
	return 0; // 0x1309 Return
	
Label_4872:
	var_33_int = 0; // 0x1308 MovI
}


func_4874(var_75_object)
{
	var_76_object = Obj(); // 0x130b PushV
	var_76_object = var_75_object; // 0x130c Mov
	TaskCall(6); // 0x130d TaskCall
	func_2707(var_76_object); // 0x130e NEW_2
	TaskReturn(); // 0x130f TaskReturn
	return 0; // 0x1311 Return
}


func_3851(var_137_string, var_138_bool)
{
	var_141_bool = 0; var_142_float = 0; var_143_float = 0; var_144_bool = 0; var_145_float = 0; var_146_float = 0; // 0xf0b PushV
	lshHasAnimation(var_144_bool, var_137_string); // 0xf0c Func
	var_147_bool = var_144_bool; // 0xf0e Push
	if(var_147_bool == 0) goto Label_3861; // 0xf0f JumpB
	lshGetAnimTimes(var_137_string, var_145_float, var_146_float); // 0xf10 Func
	lshPlayAnimation(var_145_float, var_146_float, var_138_bool); // 0xf12 Func
	goto Label_3865; // 0xf14 Jump
	
Label_3865:
	return 6; // 0xf19 Return
	
Label_3861:
	var_148_string = "Can't find lsh animation : "; // 0xf15 PushS
	var_149_int = var_148_string + var_137_string; // 0xf16 Add
	Trace(var_149_int); // 0xf17 Func
}


func_4882(var_73_int, var_74_object)
{
	var_76_bool = 0; var_77_object = Obj(); // 0x1313 PushV
	var_77_object = var_74_object; // 0x1314 Mov
	func_3582(var_76_bool, var_77_object); // 0x1315 NEW_2
	if(var_76_bool == 0) goto Label_4890; // 0x1317 JumpB
	var_73_int = 2; // 0x1318 MovI
	goto Label_4891; // 0x1319 Jump
	
Label_4891:
	return 0; // 0x131b Return
	
Label_4890:
	var_73_int = 0; // 0x131a MovI
}


func_3347(var_0_object, var_1_object, var_2_object, var_139_object)
{
	var_143_cvector = CVector(0,0,0); var_144_float = 0; var_145_bool = 0; var_146_cvector = CVector(0,0,0); var_147_float = 0; var_148_cvector = CVector(0,0,0); var_149_float = 0; var_150_bool = 0; var_151_cvector = CVector(0,0,0); var_152_float = 0; // 0xd13 PushV
	var_0_object = var_139_object; // 0xd14 TMov
	var_153_cvector = CVector(0,0,0); var_154_float = 0; // 0xd15 PushV
	var_154_float = 1.74533; // 0xd16 MovF
	func_3317(var_153_cvector, var_154_float); // 0xd17 NEW_2
	var_148_cvector = var_153_cvector; // 0xd18 Mov
	var_149_float = var_148_cvector | var_148_cvector; // 0xd1a Or2
	var_178_float = 2500.0; // 0xd1b PushF
	var_179_bool = var_149_float < var_178_float; // 0xd1c LT
	if(var_179_bool == 0) goto Label_3376; // 0xd1d JumpB
	var_180_cvector = CVector(0,0,0); var_181_float = 0; // 0xd1e PushV
	var_181_float = 2.61799; // 0xd1f MovF
	func_3317(var_180_cvector, var_181_float); // 0xd20 NEW_2
	var_148_cvector = var_180_cvector; // 0xd21 Mov
	var_149_float = var_148_cvector | var_148_cvector; // 0xd23 Or2
	var_182_float = 2500.0; // 0xd24 PushF
	var_183_bool = var_149_float < var_182_float; // 0xd25 LT
	if(var_183_bool == 0) goto Label_3376; // 0xd26 JumpB
	var_184_string = "Can't retreat, distance: "; // 0xd27 PushS
	var_185_float = sqrt(var_149_float); // 0xd28 Sqrt
	var_186_int = var_184_string + var_185_float; // 0xd29 Add
	Trace(var_186_int); // 0xd2a Func
	var_187_float = 0.5; // 0xd2c PushF
	Sleep(var_187_float); // 0xd2d Func
	return 10; // 0xd2f Return
	
Label_3376:
	var_188_float = GetByIndex(var_148_cvector, 0); // 0xd30 PushE
	var_189_float = GetByIndex(var_148_cvector, 2); // 0xd31 PushE
	Rotate(var_188_float, var_189_float); // 0xd32 Func
	var_190_cvector = CVector(0,0,0); // 0xd34 PushV
	func_3504(var_190_cvector); // 0xd35 NEW_2
	var_1_object = var_190_cvector + var_148_cvector; // 0xd37 Add2
	var_191_int = 120; // 0xd38 PushI
	var_192_float = 0.5; // 0xd39 PushF
	SetTimer(var_191_int, var_192_float); // 0xd3a Func
	var_2_object = 0; // 0xd3c TMovB
	
Label_3389:
	var_193_int = 1; // 0xd3d PushI
	MovePoint(var_193_int, var_193_int, var_150_bool); // 0xd3e Func
	var_194_bool = var_150_bool; // 0xd40 Push
	if(var_194_bool == 0) goto Label_3417; // 0xd41 JumpB
	var_195_bool = var_0_object == 0; // 0xd42 NullEq
	if(var_195_bool == 0) goto Label_3398; // 0xd43 JumpB
	goto Label_3419; // 0xd44 Jump
	
Label_3419:
	return 10; // 0xd5b Return
	
Label_3398:
	var_196_cvector = CVector(0,0,0); var_197_float = 0; // 0xd46 PushV
	var_197_float = 2.61799; // 0xd47 MovF
	func_3317(var_196_cvector, var_197_float); // 0xd48 NEW_2
	var_151_cvector = var_196_cvector; // 0xd49 Mov
	var_152_float = var_151_cvector | var_151_cvector; // 0xd4b Or2
	var_198_float = 2500.0; // 0xd4c PushF
	var_199_bool = var_152_float >= var_198_float; // 0xd4d GE
	if(var_199_bool == 0) goto Label_3416; // 0xd4e JumpB
	var_200_cvector = CVector(0,0,0); // 0xd4f PushV
	func_3504(var_200_cvector); // 0xd50 NEW_2
	var_1_object = var_200_cvector + var_151_cvector; // 0xd52 Add2
	var_201_int = 120; // 0xd53 PushI
	var_202_float = 0.5; // 0xd54 PushF
	SetTimer(var_201_int, var_202_float); // 0xd55 Func
	goto Label_3417; // 0xd57 Jump
	
Label_3417:
	var_203_bool = var_2_object == 0; // 0xd59 Not
	if(var_203_bool == 0) goto Label_3389; // 0xd5a JumpB
	
Label_3416:
	goto Label_3419; // 0xd58 Jump
}


func_4371(var_67_float)
{
	var_68_object = Obj(); var_69_float = 0; var_70_object = Obj(); var_71_float = 0; // 0x1113 PushV
	var_72_string = "player"; // 0x1114 PushS
	FindActor(var_70_object, var_72_string); // 0x1115 Func
	var_73_bool = var_70_object == 0; // 0x1117 Not
	if(var_73_bool == 0) goto Label_4379; // 0x1118 JumpB
	var_67_float = 0; // 0x1119 MovI
	return 4; // 0x111a Return
	
Label_4379:
	var_74_string = "reputation"; // 0x111b PushS
	GetProperty(var_74_string, var_71_float); // 0x111c ObjFunc
	var_67_float = var_71_float; // 0x111e Mov
	return 4; // 0x111f Return
}


func_3866(var_90_object)
{
	var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_float = 0; var_94_cvector = CVector(0,0,0); // 0xf1a PushV
	GetEyesHeight(var_93_float); // 0xf1b ObjFunc
	var_94_cvector = CVector(0.0, 0.0, 0.0); // 0xf1d MovV
	var_95_float = GetByIndex(var_94_cvector, 1); // 0xf1e PushE
	var_95_float = var_93_float; // 0xf1f Mov
	SetByIndex(var_94_cvector, 1) = var_95_float; // 0xf20 PopE
	var_96_string = "head"; // 0xf21 PushS
	LookAsync(var_90_object, var_96_string, var_94_cvector); // 0xf22 Func
	return 4; // 0xf24 Return
}


func_4892(var_110_object)
{
	var_111_object = Obj(); // 0x131d PushV
	var_111_object = var_110_object; // 0x131e Mov
	TaskCall(7); // 0x131f TaskCall
	func_2959(var_112_object, var_113_cvector, var_114_bool, var_111_object); // 0x1320 NEW_2
	TaskReturn(); // 0x1321 TaskReturn
	return 0; // 0x1323 Return
}


func_4385(var_38_object)
{
	var_39_int = 0; // 0x1122 PushV
	func_4296(var_39_int); // 0x1123 NEW_2
	var_43_int = 1; // 0x1125 PushI
	var_44_bool = var_39_int == var_43_int; // 0x1126 Eq
	if(var_44_bool == 0) goto Label_4395; // 0x1127 JumpB
	WorkWithCorpse(var_38_object); // 0x1128 Func
	goto Label_4397; // 0x112a Jump
	
Label_4397:
	return 0; // 0x112d Return
	
Label_4395:
	Barter(var_38_object); // 0x112b Func
}


func_1828()
{
	var_23_bool = 0; // 0x724 PushV
	func_3743(var_23_bool); // 0x725 NEW_2
	var_26_bool = var_23_bool == 0; // 0x727 Not
	if(var_26_bool == 0) goto Label_1836; // 0x728 JumpB
	func_4985(); // 0x72a NEW_2
	
Label_1836:
	return 0; // 0x72c Return
}


func_3877()
{
	var_24_bool = 0; // 0xf25 PushV
	func_5226(var_24_bool); // 0xf26 NEW_2
	if(var_24_bool == 0) goto Label_3883; // 0xf28 JumpB
	lshStopSpeech(); // 0xf29 Func
	
Label_3883:
	return 0; // 0xf2b Return
}


func_4900(var_30_bool, var_31_object, var_32_object, var_33_float)
{
	var_34_string = ""; var_35_bool = 0; var_36_string = ""; var_37_bool = 0; // 0x1324 PushV
	var_38_bool = 0; var_39_object = Obj(); var_40_string = ""; // 0x1325 PushV
	var_39_object = var_32_object; // 0x1326 Mov
	var_40_string = "class"; // 0x1327 MovS
	func_3529(var_38_bool, var_39_object, var_40_string); // 0x1328 NEW_2
	var_47_bool = var_38_bool == 0; // 0x132a Not
	if(var_47_bool == 0) goto Label_4910; // 0x132b JumpB
	var_30_bool = 0; // 0x132c MovB
	return 4; // 0x132d Return
	
Label_4910:
	var_48_string = "class"; // 0x132e PushS
	GetProperty(var_48_string, var_36_string); // 0x132f ObjFunc
	var_49_string = "rat"; // 0x1331 PushS
	var_50_bool = var_36_string == var_49_string; // 0x1332 Eq
	if(var_50_bool == 0) goto Label_4919; // 0x1333 JumpB
	var_30_bool = 0; // 0x1334 MovB
	return 4; // 0x1335 Return
	
Label_4919:
	var_51_string = "rat_big"; // 0x1337 PushS
	var_52_bool = var_36_string == var_51_string; // 0x1338 Eq
	if(var_52_bool == 0) goto Label_4925; // 0x1339 JumpB
	var_30_bool = 0; // 0x133a MovB
	return 4; // 0x133b Return
	
Label_4925:
	var_53_string = "dog"; // 0x133d PushS
	var_54_bool = var_36_string == var_53_string; // 0x133e Eq
	if(var_54_bool == 0) goto Label_4930; // 0x133f JumpB
	var_30_bool = 0; // 0x1340 MovB
	return 4; // 0x1341 Return
	
Label_4930:
	CanSee(var_37_bool, var_31_object); // 0x1342 Func
	var_55_bool = 0; // 0x1344 PushV
	var_55_bool = 1; // 0x1345 MovB
	var_56_bool = var_37_bool; // 0x1346 Push
	if(var_56_bool == 0) goto Label_4944; // 0x1347 JumpB
	var_57_float = 0; var_58_object = Obj(); // 0x1348 PushV
	var_58_object = var_31_object; // 0x1349 Mov
	func_3516(var_58_object); // 0x134a NEW_2
	var_65_float = var_33_float * var_33_float; // 0x134c Mult
	var_66_bool = var_57_float <= var_65_float; // 0x134d LE
	if(var_66_bool == 0) goto Label_4944; // 0x134e JumpB
	var_55_bool = 0; // 0x134f MovB
	
Label_4944:
	if(var_55_bool == 0) goto Label_4947; // 0x1350 JumpB
	var_30_bool = 1; // 0x1351 MovB
	return 4; // 0x1352 Return
	
Label_4947:
	CanSee(var_37_bool, var_32_object); // 0x1353 Func
	var_67_bool = 0; // 0x1355 PushV
	var_67_bool = 1; // 0x1356 MovB
	var_68_bool = var_37_bool; // 0x1357 Push
	if(var_68_bool == 0) goto Label_4961; // 0x1358 JumpB
	var_69_float = 0; var_70_object = Obj(); // 0x1359 PushV
	var_70_object = var_32_object; // 0x135a Mov
	func_3516(var_70_object); // 0x135b NEW_2
	var_71_float = var_33_float * var_33_float; // 0x135d Mult
	var_72_bool = var_69_float <= var_71_float; // 0x135e LE
	if(var_72_bool == 0) goto Label_4961; // 0x135f JumpB
	var_67_bool = 0; // 0x1360 MovB
	
Label_4961:
	if(var_67_bool == 0) goto Label_4964; // 0x1361 JumpB
	var_30_bool = 1; // 0x1362 MovB
	return 4; // 0x1363 Return
	
Label_4964:
	var_30_bool = 0; // 0x1364 MovB
	return 4; // 0x1365 Return
}


func_2346()
{
	var_54_int = 0; var_55_int = 0; var_56_int = 0; var_57_int = 0; var_58_bool = 0; var_59_float = 0; var_60_bool = 0; var_61_int = 0; var_62_int = 0; var_63_int = 0; var_64_int = 0; var_65_bool = 0; var_66_float = 0; var_67_bool = 0; // 0x92a PushV
	WaitForAnimEnd(); // 0x92b Func
	var_68_bool = 0; // 0x92d PushV
	func_3743(var_68_bool); // 0x92e NEW_2
	var_69_bool = var_68_bool == 0; // 0x930 Not
	if(var_69_bool == 0) goto Label_2355; // 0x931 JumpB
	return 14; // 0x932 Return
	
Label_2355:
	var_70_int = 0; // 0x933 PushV
	func_4830(var_70_int); // 0x934 NEW_2
	var_61_int = var_70_int; // 0x935 Mov
	var_62_int = 0; // 0x937 MovI
	
Label_2360:
	var_83_bool = 0; // 0x938 PushV
	var_83_bool = 0; // 0x939 MovB
	var_84_int = 5; // 0x93a PushI
	var_85_bool = var_62_int < var_84_int; // 0x93b LT
	if(var_85_bool == 0) goto Label_2370; // 0x93c JumpB
	var_86_bool = 0; // 0x93d PushV
	func_3743(var_86_bool); // 0x93e NEW_2
	if(var_86_bool == 0) goto Label_2370; // 0x940 JumpB
	var_83_bool = 1; // 0x941 MovB
	
Label_2370:
	if(var_83_bool == 0) goto Label_2422; // 0x942 JumpB
	var_87_int = 3; // 0x943 PushI
	irand(var_63_int, var_87_int); // 0x944 Func
	var_88_int = 0; // 0x946 PushI
	var_89_bool = var_63_int == var_88_int; // 0x947 Eq
	if(var_89_bool == 0) goto Label_2394; // 0x948 JumpB
	var_90_int = var_61_int; // 0x949 Push
	if(var_90_int == 0) goto Label_2393; // 0x94a JumpB
	irand(var_64_int, var_61_int); // 0x94b Func
	var_91_string = "all"; // 0x94d PushS
	var_92_string = ""; var_93_int = 0; // 0x94e PushV
	var_93_int = var_64_int; // 0x94f Mov
	func_4823(var_92_string, var_93_int); // 0x950 NEW_2
	PlayAnimation(var_91_string, var_92_string); // 0x952 Func
	WaitForAnimEnd(var_65_bool); // 0x954 Func
	var_94_bool = var_65_bool == 0; // 0x956 Not
	if(var_94_bool == 0) goto Label_2393; // 0x957 JumpB
	goto Label_2422; // 0x958 Jump
	
Label_2422:
	ResetAAS(); // 0x976 Func
	return 14; // 0x978 Return
	
Label_2393:
	goto Label_2411; // 0x959 Jump
	
Label_2411:
	var_95_bool = 0; // 0x96b PushV
	func_2425(var_95_bool); // 0x96c NEW_2
	var_96_bool = var_95_bool == 0; // 0x96e Not
	if(var_96_bool == 0) goto Label_2417; // 0x96f JumpB
	goto Label_2422; // 0x970 Jump
	
Label_2417:
	ResetAAS(); // 0x971 Func
	var_97_int = 1; // 0x973 PushI
	var_62_int = var_62_int + var_97_int; // 0x974 Add2
	goto Label_2360; // 0x975 Jump
	
Label_2394:
	var_98_int = 1; // 0x95a PushI
	var_99_bool = var_63_int == var_98_int; // 0x95b Eq
	if(var_99_bool == 0) goto Label_2408; // 0x95c JumpB
	var_100_int = 4; // 0x95d PushI
	rand(var_66_float, var_100_int); // 0x95e Func
	var_101_int = 1; // 0x960 PushI
	var_102_int = var_66_float + var_101_int; // 0x961 Add
	Sleep(var_102_int, var_67_bool); // 0x962 Func
	var_103_bool = var_67_bool == 0; // 0x964 Not
	if(var_103_bool == 0) goto Label_2407; // 0x965 JumpB
	goto Label_2422; // 0x966 Jump
	
Label_2407:
	goto Label_2411; // 0x967 Jump
	
Label_2408:
	var_104_int = var_62_int; // 0x968 Push
	if(var_104_int == 0) goto Label_2411; // 0x969 JumpB
	goto Label_2422; // 0x96a Jump
}


func_3884(var_47_string)
{
	var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_int = 0; var_52_bool = 0; var_53_float = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_int = 0; var_58_bool = 0; var_59_int = 0; var_60_bool = 0; var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0xf2c PushV
	IsExisting3DSound(var_56_bool, var_47_string); // 0xf2d Func
	var_64_bool = var_56_bool == 0; // 0xf2f Not
	if(var_64_bool == 0) goto Label_3909; // 0xf30 JumpB
	var_57_int = 0; // 0xf31 MovI
	
Label_3890:
	var_65_int = 1; // 0xf32 PushI
	var_66_int = var_57_int + var_65_int; // 0xf33 Add
	var_67_int = var_47_string + var_66_int; // 0xf34 Add
	IsExisting3DSound(var_58_bool, var_67_int); // 0xf35 Func
	var_68_bool = var_58_bool == 0; // 0xf37 Not
	if(var_68_bool == 0) goto Label_3898; // 0xf38 JumpB
	goto Label_3901; // 0xf39 Jump
	
Label_3901:
	var_69_bool = var_57_int == 0; // 0xf3d Not
	if(var_69_bool == 0) goto Label_3904; // 0xf3e JumpB
	return 16; // 0xf3f Return
	
Label_3904:
	irand(var_59_int, var_57_int); // 0xf40 Func
	var_70_int = 1; // 0xf42 PushI
	var_71_int = var_59_int + var_70_int; // 0xf43 Add
	var_47_string = var_47_string + var_71_int; // 0xf44 Add2
	
Label_3909:
	Is3DSoundLoaded(var_60_bool, var_47_string); // 0xf45 Func
	var_72_bool = var_60_bool; // 0xf47 Push
	if(var_72_bool == 0) goto Label_3924; // 0xf48 JumpB
	GetEyesHeight(var_61_float); // 0xf49 Func
	GetDirection(var_62_cvector); // 0xf4b Func
	var_73_int = 50; // 0xf4d PushI
	var_63_cvector = var_62_cvector * var_73_int; // 0xf4e Mult2
	var_74_float = GetByIndex(var_63_cvector, 1); // 0xf4f PushE
	var_74_float = var_74_float + var_61_float; // 0xf50 Add2
	SetByIndex(var_63_cvector, 1) = var_74_float; // 0xf51 PopE
	PlayGlobalSound(var_47_string, var_63_cvector); // 0xf52 Func
	
Label_3924:
	return 16; // 0xf54 Return
	
Label_3898:
	var_75_int = 1; // 0xf3a PushI
	var_57_int = var_57_int + var_75_int; // 0xf3b Add2
	goto Label_3890; // 0xf3c Jump
}


func_4398(var_120_int, var_121_int)
{
	var_131_int = 0; var_132_bool = 0; var_133_int = 0; var_134_bool = 0; // 0x112e PushV
	var_135_bool = var_120_int > var_121_int; // 0x112f GT
	if(var_135_bool == 0) goto Label_4405; // 0x1130 JumpB
	var_136_string = "GenerateMoney: iMin > iMax"; // 0x1131 PushS
	Trace(var_136_string); // 0x1132 Func
	return 4; // 0x1134 Return
	
Label_4405:
	var_133_int = 0; // 0x1135 MovI
	var_137_bool = var_120_int != var_121_int; // 0x1136 Neq
	if(var_137_bool == 0) goto Label_4412; // 0x1137 JumpB
	var_138_int = var_121_int - var_120_int; // 0x1138 Sub
	irand(var_133_int, var_138_int); // 0x1139 Func
	goto Label_4416; // 0x113b Jump
	
Label_4416:
	var_133_int = var_133_int + var_120_int; // 0x1140 Add2
	var_139_int = 0; // 0x1141 PushI
	var_140_bool = var_133_int == var_139_int; // 0x1142 Eq
	if(var_140_bool == 0) goto Label_4421; // 0x1143 JumpB
	return 4; // 0x1144 Return
	
Label_4421:
	var_141_int = 0; var_142_string = ""; // 0x1145 PushV
	var_142_string = "Money"; // 0x1146 MovS
	func_4645(var_141_int, var_142_string); // 0x1147 NEW_2
	var_145_int = 0; // 0x1149 PushI
	AddItem(var_134_bool, var_141_int, var_145_int, var_133_int); // 0x114a Func
	return 4; // 0x114c Return
	
Label_4412:
	var_146_int = 0; // 0x113c PushI
	var_147_bool = var_120_int == var_146_int; // 0x113d Eq
	if(var_147_bool == 0) goto Label_4416; // 0x113e JumpB
	return 4; // 0x113f Return
}


func_4429(var_234_string)
{
	var_235_object = Obj(); var_236_int = 0; var_237_bool = 0; var_238_object = Obj(); var_239_int = 0; var_240_bool = 0; // 0x114d PushV
	CreateInvItem(var_238_object); // 0x114e Func
	SetItemName(var_234_string); // 0x1150 ObjFunc
	var_241_string = "Organ"; // 0x1152 PushS
	var_242_int = 1; // 0x1153 PushI
	SetProperty(var_241_string, var_242_int); // 0x1154 ObjFunc
	GetItemID(var_239_int); // 0x1156 ObjFunc
	var_243_int = 0; // 0x1158 PushI
	var_244_int = 1; // 0x1159 PushI
	AddItem(var_240_bool, var_238_object, var_243_int, var_244_int); // 0x115a Func
	return 6; // 0x115c Return
}


func_2897(var_2_object)
{
	Stop(); // 0xb51 Func
	var_22_int = 120; // 0xb53 PushI
	KillTimer(var_22_int); // 0xb54 Func
	var_2_object = 1; // 0xb56 TMovB
	return 0; // 0xb57 Return
}


func_3925(var_109_object)
{
	var_110_object = Obj(); var_111_object = Obj(); // 0xf55 PushV
	self(var_111_object); // 0xf56 Func
	var_109_object = var_111_object; // 0xf58 Mov
	return 2; // 0xf59 Return
}


func_3931(var_53_cvector, var_54_cvector)
{
	var_61_float = 0; var_62_float = 0; // 0xf5b PushV
	var_63_int = var_54_cvector | var_54_cvector; // 0xf5c Or
	var_62_float = sqrt(var_63_int); // 0xf5d Sqrt2
	var_64_float = 0.0; // 0xf5e PushF
	var_65_bool = var_62_float < var_64_float; // 0xf5f LT
	if(var_65_bool == 0) goto Label_3939; // 0xf60 JumpB
	var_53_cvector = CVector(0.0, 0.0, 0.0); // 0xf61 MovV
	return 2; // 0xf62 Return
	
Label_3939:
	var_53_cvector = var_54_cvector / var_54_cvector; // 0xf63 Div2
	return 2; // 0xf64 Return
}


func_4446()
{
	var_228_int = 0; // 0x115e PushV
	func_4296(var_228_int); // 0x115f NEW_2
	var_232_int = 1; // 0x1161 PushI
	var_233_bool = var_228_int != var_232_int; // 0x1162 Neq
	if(var_233_bool == 0) goto Label_4453; // 0x1163 JumpB
	return 0; // 0x1164 Return
	
Label_4453:
	var_234_string = ""; // 0x1165 PushV
	var_234_string = "liver"; // 0x1166 MovS
	func_4429(var_234_string); // 0x1167 NEW_2
	var_245_string = ""; // 0x1169 PushV
	var_245_string = "kidney"; // 0x116a MovS
	func_4429(var_245_string); // 0x116b NEW_2
	var_246_string = ""; // 0x116d PushV
	var_246_string = "heart"; // 0x116e MovS
	func_4429(var_246_string); // 0x116f NEW_2
	var_247_string = ""; // 0x1171 PushV
	var_247_string = "blood"; // 0x1172 MovS
	func_4429(var_247_string); // 0x1173 NEW_2
	return 0; // 0x1175 Return
}


func_2913(var_0_object, var_73_bool)
{
	var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); // 0xb61 PushV
	GetDirection(var_76_cvector); // 0xb62 Func
	var_78_cvector = CVector(0,0,0); var_79_object = Obj(); // 0xb64 PushV
	var_79_object = var_0_object; // 0xb65 MovT
	func_3509(var_79_object); // 0xb66 NEW_2
	var_77_cvector = var_78_cvector; // 0xb67 Mov
	var_84_float = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); // 0xb69 PushV
	var_85_cvector = var_76_cvector; // 0xb6a Mov
	var_86_cvector = var_77_cvector; // 0xb6b Mov
	func_3947(var_84_float, var_85_cvector, var_86_cvector); // 0xb6c NEW_2
	var_92_float = -0.34202; // 0xb6e PushF
	var_73_bool = var_84_float >= var_92_float; // 0xb6f GE2
	return 4; // 0xb70 Return
}


func_3941(var_505_object)
{
	var_506_object = Obj(); var_507_object = Obj(); // 0xf65 PushV
	CreateObjectVector(var_507_object); // 0xf66 Func
	var_505_object = var_507_object; // 0xf68 Mov
	return 2; // 0xf69 Return
}


func_4966(var_24_int)
{
	var_24_int = 0; // 0x1367 MovI
	return 0; // 0x1368 Return
}


func_4969()
{
	return 0; // 0x136a Return
}


func_4971(var_208_int)
{
	var_208_int = 0; // 0x136c MovI
	return 0; // 0x136d Return
}


func_3947(var_84_float, var_85_cvector, var_86_cvector)
{
	var_87_int = var_85_cvector | var_86_cvector; // 0xf6c Or
	var_88_int = var_85_cvector | var_85_cvector; // 0xf6d Or
	var_89_int = var_86_cvector | var_86_cvector; // 0xf6e Or
	var_90_float = var_88_int * var_89_int; // 0xf6f Mult
	var_91_float = sqrt(var_90_float); // 0xf70 Sqrt
	var_84_float = var_87_int / var_87_int; // 0xf71 Div2
	return 0; // 0xf72 Return
}


func_4974()
{
	return 0; // 0x136f Return
}


func_4976(var_24_int)
{
	var_24_int = 2; // 0x1371 MovI
	return 0; // 0x1372 Return
}


func_2929(var_35_cvector, var_36_float)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_float = 0; // 0xb71 PushV
	GetPosition(var_43_cvector); // 0xb72 Func
	GetPosition(var_44_cvector); // 0xb74 TObjFunc
	GetDirection(var_45_cvector); // 0xb76 Func
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); // 0xb78 PushV
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); // 0xb79 PushV
	var_52_cvector = var_43_cvector - var_44_cvector; // 0xb7a Sub2
	func_3931(var_51_cvector, var_52_cvector); // 0xb7b NEW_2
	var_58_float = 0.75; // 0xb7d PushF
	var_59_float = var_45_cvector * var_58_float; // 0xb7e Mult
	var_50_cvector = var_51_cvector + var_59_float; // 0xb7f Add2
	func_3931(var_49_cvector, var_50_cvector); // 0xb80 NEW_2
	var_46_cvector = var_49_cvector; // 0xb81 Mov
	var_60_int = 32; // 0xb83 PushI
	var_61_float = 7000.0; // 0xb84 PushF
	FindLongestDir(var_47_cvector, var_48_float, var_46_cvector, var_36_float, var_60_int, var_61_float); // 0xb85 Func
	var_62_int = 100; // 0xb87 PushI
	var_48_float = var_48_float - var_62_int; // 0xb88 Sub2
	var_63_int = 0; // 0xb89 PushI
	var_64_bool = var_48_float < var_63_int; // 0xb8a LT
	if(var_64_bool == 0) goto Label_2957; // 0xb8b JumpB
	var_48_float = 0; // 0xb8c MovI
	
Label_2957:
	var_35_cvector = var_47_cvector * var_48_float; // 0xb8d Mult2
	return 12; // 0xb8e Return
}


func_4979(var_32_object)
{
	var_33_object = Obj(); // 0x1374 PushV
	var_33_object = var_32_object; // 0x1375 Mov
	func_5232(var_33_object); // 0x1376 NEW_2
	return 0; // 0x1378 Return
}


func_3955(var_74_float, var_75_cvector, var_76_cvector)
{
	var_77_float = GetByIndex(var_75_cvector, 0); // 0xf74 PushE
	var_78_float = GetByIndex(var_76_cvector, 0); // 0xf75 PushE
	var_79_float = var_77_float * var_78_float; // 0xf76 Mult
	var_80_float = GetByIndex(var_75_cvector, 2); // 0xf77 PushE
	var_81_float = GetByIndex(var_76_cvector, 2); // 0xf78 PushE
	var_82_float = var_80_float * var_81_float; // 0xf79 Mult
	var_74_float = var_79_float + var_82_float; // 0xf7a Add2
	return 0; // 0xf7b Return
}


func_4470(var_114_bool)
{
	var_115_int = 0; var_116_bool = 0; var_117_int = 0; var_118_bool = 0; // 0x1176 PushV
	var_119_bool = var_114_bool; // 0x1177 Push
	if(var_119_bool == 0) goto Label_4559; // 0x1178 JumpB
	var_120_int = 0; var_121_int = 0; // 0x1179 PushV
	var_120_int = 0; // 0x117a MovI
	var_122_int = 100; // 0x117b PushI
	var_123_int = 0; // 0x117c PushV
	func_3996(var_123_int); // 0x117d NEW_2
	var_129_int = 100; // 0x117f PushI
	var_130_float = var_123_int * var_129_int; // 0x1180 Mult
	var_121_int = var_122_int + var_130_float; // 0x1181 Add2
	func_4398(var_120_int, var_121_int); // 0x1182 NEW_2
	var_148_int = 8; // 0x1184 PushI
	irand(var_117_int, var_148_int); // 0x1185 Func
	var_149_int = 0; // 0x1187 PushI
	var_150_bool = var_117_int == var_149_int; // 0x1188 Eq
	if(var_150_bool == 0) goto Label_4499; // 0x1189 JumpB
	var_151_int = 0; var_152_string = ""; // 0x118a PushV
	var_152_string = "lemon"; // 0x118b MovS
	func_4645(var_151_int, var_152_string); // 0x118c NEW_2
	var_153_int = 0; // 0x118e PushI
	var_154_int = 1; // 0x118f PushI
	AddItem(var_118_bool, var_151_int, var_153_int, var_154_int); // 0x1190 Func
	goto Label_4558; // 0x1192 Jump
	
Label_4558:
	goto Label_4644; // 0x11ce Jump
	
Label_4644:
	return 4; // 0x1224 Return
	
Label_4499:
	var_155_int = 1; // 0x1193 PushI
	var_156_bool = var_117_int == var_155_int; // 0x1194 Eq
	if(var_156_bool == 0) goto Label_4511; // 0x1195 JumpB
	var_157_int = 0; var_158_string = ""; // 0x1196 PushV
	var_158_string = "rusk"; // 0x1197 MovS
	func_4645(var_157_int, var_158_string); // 0x1198 NEW_2
	var_159_int = 0; // 0x119a PushI
	var_160_int = 1; // 0x119b PushI
	AddItem(var_118_bool, var_157_int, var_159_int, var_160_int); // 0x119c Func
	goto Label_4558; // 0x119e Jump
	
Label_4511:
	var_161_int = 2; // 0x119f PushI
	var_162_bool = var_117_int == var_161_int; // 0x11a0 Eq
	if(var_162_bool == 0) goto Label_4523; // 0x11a1 JumpB
	var_163_int = 0; var_164_string = ""; // 0x11a2 PushV
	var_164_string = "hook"; // 0x11a3 MovS
	func_4645(var_163_int, var_164_string); // 0x11a4 NEW_2
	var_165_int = 0; // 0x11a6 PushI
	var_166_int = 1; // 0x11a7 PushI
	AddItem(var_118_bool, var_163_int, var_165_int, var_166_int); // 0x11a8 Func
	goto Label_4558; // 0x11aa Jump
	
Label_4523:
	var_167_int = 4; // 0x11ab PushI
	var_168_bool = var_117_int == var_167_int; // 0x11ac Eq
	if(var_168_bool == 0) goto Label_4535; // 0x11ad JumpB
	var_169_int = 0; var_170_string = ""; // 0x11ae PushV
	var_170_string = "syringe"; // 0x11af MovS
	func_4645(var_169_int, var_170_string); // 0x11b0 NEW_2
	var_171_int = 0; // 0x11b2 PushI
	var_172_int = 1; // 0x11b3 PushI
	AddItem(var_118_bool, var_169_int, var_171_int, var_172_int); // 0x11b4 Func
	goto Label_4558; // 0x11b6 Jump
	
Label_4535:
	var_173_int = 5; // 0x11b7 PushI
	var_174_bool = var_117_int == var_173_int; // 0x11b8 Eq
	if(var_174_bool == 0) goto Label_4547; // 0x11b9 JumpB
	var_175_int = 0; var_176_string = ""; // 0x11ba PushV
	var_176_string = "watch"; // 0x11bb MovS
	func_4645(var_175_int, var_176_string); // 0x11bc NEW_2
	var_177_int = 0; // 0x11be PushI
	var_178_int = 1; // 0x11bf PushI
	AddItem(var_118_bool, var_175_int, var_177_int, var_178_int); // 0x11c0 Func
	goto Label_4558; // 0x11c2 Jump
	
Label_4547:
	var_179_int = 6; // 0x11c3 PushI
	var_180_bool = var_117_int == var_179_int; // 0x11c4 Eq
	if(var_180_bool == 0) goto Label_4558; // 0x11c5 JumpB
	var_181_int = 0; var_182_string = ""; // 0x11c6 PushV
	var_182_string = "razor"; // 0x11c7 MovS
	func_4645(var_181_int, var_182_string); // 0x11c8 NEW_2
	var_183_int = 0; // 0x11ca PushI
	var_184_int = 1; // 0x11cb PushI
	AddItem(var_118_bool, var_181_int, var_183_int, var_184_int); // 0x11cc Func
	
Label_4559:
	var_185_int = 0; var_186_int = 0; // 0x11cf PushV
	var_185_int = 0; // 0x11d0 MovI
	var_187_int = 50; // 0x11d1 PushI
	var_188_int = 0; // 0x11d2 PushV
	func_3996(var_188_int); // 0x11d3 NEW_2
	var_189_int = 50; // 0x11d5 PushI
	var_190_float = var_188_int * var_189_int; // 0x11d6 Mult
	var_186_int = var_187_int + var_190_float; // 0x11d7 Add2
	func_4398(var_185_int, var_186_int); // 0x11d8 NEW_2
	var_191_int = 7; // 0x11da PushI
	irand(var_117_int, var_191_int); // 0x11db Func
	var_192_int = 0; // 0x11dd PushI
	var_193_bool = var_117_int == var_192_int; // 0x11de Eq
	if(var_193_bool == 0) goto Label_4585; // 0x11df JumpB
	var_194_int = 0; var_195_string = ""; // 0x11e0 PushV
	var_195_string = "beads"; // 0x11e1 MovS
	func_4645(var_194_int, var_195_string); // 0x11e2 NEW_2
	var_196_int = 0; // 0x11e4 PushI
	var_197_int = 1; // 0x11e5 PushI
	AddItem(var_118_bool, var_194_int, var_196_int, var_197_int); // 0x11e6 Func
	goto Label_4644; // 0x11e8 Jump
	
Label_4585:
	var_198_int = 1; // 0x11e9 PushI
	var_199_bool = var_117_int == var_198_int; // 0x11ea Eq
	if(var_199_bool == 0) goto Label_4597; // 0x11eb JumpB
	var_200_int = 0; var_201_string = ""; // 0x11ec PushV
	var_201_string = "bracelet"; // 0x11ed MovS
	func_4645(var_200_int, var_201_string); // 0x11ee NEW_2
	var_202_int = 0; // 0x11f0 PushI
	var_203_int = 1; // 0x11f1 PushI
	AddItem(var_118_bool, var_200_int, var_202_int, var_203_int); // 0x11f2 Func
	goto Label_4644; // 0x11f4 Jump
	
Label_4597:
	var_204_int = 2; // 0x11f5 PushI
	var_205_bool = var_117_int == var_204_int; // 0x11f6 Eq
	if(var_205_bool == 0) goto Label_4609; // 0x11f7 JumpB
	var_206_int = 0; var_207_string = ""; // 0x11f8 PushV
	var_207_string = "ear_ring"; // 0x11f9 MovS
	func_4645(var_206_int, var_207_string); // 0x11fa NEW_2
	var_208_int = 0; // 0x11fc PushI
	var_209_int = 1; // 0x11fd PushI
	AddItem(var_118_bool, var_206_int, var_208_int, var_209_int); // 0x11fe Func
	goto Label_4644; // 0x1200 Jump
	
Label_4609:
	var_210_int = 3; // 0x1201 PushI
	var_211_bool = var_117_int == var_210_int; // 0x1202 Eq
	if(var_211_bool == 0) goto Label_4621; // 0x1203 JumpB
	var_212_int = 0; var_213_string = ""; // 0x1204 PushV
	var_213_string = "gold_ring"; // 0x1205 MovS
	func_4645(var_212_int, var_213_string); // 0x1206 NEW_2
	var_214_int = 0; // 0x1208 PushI
	var_215_int = 1; // 0x1209 PushI
	AddItem(var_118_bool, var_212_int, var_214_int, var_215_int); // 0x120a Func
	goto Label_4644; // 0x120c Jump
	
Label_4621:
	var_216_int = 4; // 0x120d PushI
	var_217_bool = var_117_int == var_216_int; // 0x120e Eq
	if(var_217_bool == 0) goto Label_4633; // 0x120f JumpB
	var_218_int = 0; var_219_string = ""; // 0x1210 PushV
	var_219_string = "silver_ring"; // 0x1211 MovS
	func_4645(var_218_int, var_219_string); // 0x1212 NEW_2
	var_220_int = 0; // 0x1214 PushI
	var_221_int = 1; // 0x1215 PushI
	AddItem(var_118_bool, var_218_int, var_220_int, var_221_int); // 0x1216 Func
	goto Label_4644; // 0x1218 Jump
	
Label_4633:
	var_222_int = 5; // 0x1219 PushI
	var_223_bool = var_117_int == var_222_int; // 0x121a Eq
	if(var_223_bool == 0) goto Label_4644; // 0x121b JumpB
	var_224_int = 0; var_225_string = ""; // 0x121c PushV
	var_225_string = "flower"; // 0x121d MovS
	func_4645(var_224_int, var_225_string); // 0x121e NEW_2
	var_226_int = 0; // 0x1220 PushI
	var_227_int = 1; // 0x1221 PushI
	AddItem(var_118_bool, var_224_int, var_226_int, var_227_int); // 0x1222 Func
}


func_2425(var_95_bool)
{
	var_95_bool = 1; // 0x979 MovB
	return 0; // 0x97a Return
}


func_4985()
{
	return 0; // 0x1379 Return
}


func_2427()
{
	StopAnimation(); // 0x97b Func
	StopGroup0(); // 0x97d Func
	return 0; // 0x97f Return
}


func_3964(var_83_float, var_84_cvector)
{
	var_85_float = GetByIndex(var_84_cvector, 0); // 0xf7d PushE
	var_86_float = GetByIndex(var_84_cvector, 0); // 0xf7e PushE
	var_87_float = var_85_float * var_86_float; // 0xf7f Mult
	var_88_float = GetByIndex(var_84_cvector, 2); // 0xf80 PushE
	var_89_float = GetByIndex(var_84_cvector, 2); // 0xf81 PushE
	var_90_float = var_88_float * var_89_float; // 0xf82 Mult
	var_91_int = var_87_float + var_90_float; // 0xf83 Add
	var_83_float = sqrt(var_91_int); // 0xf84 Sqrt2
	return 0; // 0xf85 Return
}


func_4986(var_27_bool, var_28_object)
{
	var_29_bool = 0; var_30_bool = 0; // 0x137a PushV
	CanSee(var_30_bool, var_28_object); // 0x137b Func
	var_27_bool = var_30_bool; // 0x137d Mov
	return 2; // 0x137e Return
}


func_4991(var_39_object)
{
	var_40_object = Obj(); // 0x1380 PushV
	var_40_object = var_39_object; // 0x1381 Mov
	TaskCall(8); // 0x1382 TaskCall
	func_3153(var_41_object, var_42_cvector, var_43_bool, var_40_object); // 0x1383 NEW_2
	TaskReturn(); // 0x1384 TaskReturn
	return 0; // 0x1386 Return
}


func_2432(var_0_object, var_82_object)
{
	var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_bool = 0; var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_bool = 0; // 0x980 PushV
	var_0_object = var_82_object; // 0x981 TMov
	func_2483(var_89_bool); // 0x983 NEW_2
	GetDirection(var_87_cvector); // 0x985 Func
	var_97_cvector = CVector(0,0,0); var_98_object = Obj(); // 0x987 PushV
	var_98_object = var_0_object; // 0x988 MovT
	func_3509(var_98_object); // 0x989 NEW_2
	var_88_cvector = var_97_cvector; // 0x98a Mov
	var_103_float = 0; var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); // 0x98c PushV
	var_104_cvector = var_87_cvector; // 0x98d Mov
	var_105_cvector = var_88_cvector; // 0x98e Mov
	func_3974(var_103_float, var_104_cvector, var_105_cvector); // 0x98f NEW_2
	var_127_int = 0; // 0x991 PushI
	var_128_bool = var_103_float < var_127_int; // 0x992 LT
	if(var_128_bool == 0) goto Label_2458; // 0x993 JumpB
	var_129_object = Obj(); // 0x994 PushV
	var_129_object = var_0_object; // 0x995 MovT
	func_3732(); // 0x996 NEW_2
	var_89_bool = 1; // 0x998 MovB
	goto Label_2461; // 0x999 Jump
	
Label_2461:
	var_138_bool = var_89_bool; // 0x99d Push
	if(var_138_bool == 0) goto Label_2477; // 0x99e JumpB
	var_139_object = Obj(); // 0x99f PushV
	var_139_object = var_0_object; // 0x9a0 MovT
	func_3732(); // 0x9a1 NEW_2
	var_140_int = 111; // 0x9a3 PushI
	var_141_float = 0.5; // 0x9a4 PushF
	SetTimer(var_140_int, var_141_float); // 0x9a5 Func
	var_142_float = 5.0; // 0x9a7 PushF
	Sleep(var_142_float); // 0x9a8 Func
	var_143_int = 111; // 0x9aa PushI
	KillTimer(var_143_int); // 0x9ab Func
	
Label_2477:
	StopAsync(); // 0x9ad Func
	var_144_string = "head"; // 0x9af PushS
	UnlookAsync(var_144_string); // 0x9b0 Func
	return 6; // 0x9b2 Return
	
Label_2458:
	var_145_float = 1.5; // 0x99a PushF
	Sleep(var_145_float, var_89_bool); // 0x99b Func
}


func_3974(var_71_float, var_72_cvector, var_73_cvector)
{
	var_74_float = 0; var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); // 0xf87 PushV
	var_75_cvector = var_72_cvector; // 0xf88 Mov
	var_76_cvector = var_73_cvector; // 0xf89 Mov
	func_3955(var_74_float, var_75_cvector, var_76_cvector); // 0xf8a NEW_2
	var_83_float = 0; var_84_cvector = CVector(0,0,0); // 0xf8c PushV
	var_84_cvector = var_72_cvector; // 0xf8d Mov
	func_3964(var_83_float, var_84_cvector); // 0xf8e NEW_2
	var_92_float = 0; var_93_cvector = CVector(0,0,0); // 0xf90 PushV
	var_93_cvector = var_73_cvector; // 0xf91 Mov
	func_3964(var_92_float, var_93_cvector); // 0xf92 NEW_2
	var_94_float = var_83_float * var_92_float; // 0xf94 Mult
	var_71_float = var_74_float / var_74_float; // 0xf95 Div2
	return 0; // 0xf96 Return
}


func_4999(var_36_bool, var_37_object)
{
	var_38_bool = 0; var_39_bool = 0; // 0x1387 PushV
	CanSee(var_39_bool, var_37_object); // 0x1388 Func
	var_36_bool = 1; // 0x138a MovB
	var_40_bool = var_39_bool; // 0x138b Push
	if(var_40_bool == 0) goto Label_5013; // 0x138c JumpB
	var_41_float = 0; var_42_object = Obj(); // 0x138d PushV
	var_42_object = var_37_object; // 0x138e Mov
	func_3516(var_42_object); // 0x138f NEW_2
	var_49_int = 4000000; // 0x1391 PushI
	var_50_bool = var_41_float <= var_49_int; // 0x1392 LE
	if(var_50_bool == 0) goto Label_5013; // 0x1393 JumpB
	var_36_bool = 0; // 0x1394 MovB
	
Label_5013:
	return 2; // 0x1395 Return
}


func_2959(var_0_object, var_1_object, var_2_object, var_111_object)
{
	var_115_cvector = CVector(0,0,0); var_116_float = 0; var_117_bool = 0; var_118_cvector = CVector(0,0,0); var_119_float = 0; var_120_cvector = CVector(0,0,0); var_121_float = 0; var_122_bool = 0; var_123_cvector = CVector(0,0,0); var_124_float = 0; // 0xb8f PushV
	var_0_object = var_111_object; // 0xb90 TMov
	var_125_cvector = CVector(0,0,0); var_126_float = 0; // 0xb91 PushV
	var_126_float = 1.74533; // 0xb92 MovF
	func_2929(var_125_cvector, var_126_float); // 0xb93 NEW_2
	var_120_cvector = var_125_cvector; // 0xb94 Mov
	var_121_float = var_120_cvector | var_120_cvector; // 0xb96 Or2
	var_155_float = 2500.0; // 0xb97 PushF
	var_156_bool = var_121_float < var_155_float; // 0xb98 LT
	if(var_156_bool == 0) goto Label_2988; // 0xb99 JumpB
	var_157_cvector = CVector(0,0,0); var_158_float = 0; // 0xb9a PushV
	var_158_float = 2.61799; // 0xb9b MovF
	func_2929(var_157_cvector, var_158_float); // 0xb9c NEW_2
	var_120_cvector = var_157_cvector; // 0xb9d Mov
	var_121_float = var_120_cvector | var_120_cvector; // 0xb9f Or2
	var_159_float = 2500.0; // 0xba0 PushF
	var_160_bool = var_121_float < var_159_float; // 0xba1 LT
	if(var_160_bool == 0) goto Label_2988; // 0xba2 JumpB
	var_161_string = "Can't retreat, distance: "; // 0xba3 PushS
	var_162_float = sqrt(var_121_float); // 0xba4 Sqrt
	var_163_int = var_161_string + var_162_float; // 0xba5 Add
	Trace(var_163_int); // 0xba6 Func
	var_164_float = 0.5; // 0xba8 PushF
	Sleep(var_164_float); // 0xba9 Func
	return 10; // 0xbab Return
	
Label_2988:
	var_165_float = GetByIndex(var_120_cvector, 0); // 0xbac PushE
	var_166_float = GetByIndex(var_120_cvector, 2); // 0xbad PushE
	Rotate(var_165_float, var_166_float); // 0xbae Func
	var_167_cvector = CVector(0,0,0); // 0xbb0 PushV
	func_3504(var_167_cvector); // 0xbb1 NEW_2
	var_1_object = var_167_cvector + var_120_cvector; // 0xbb3 Add2
	var_170_int = 120; // 0xbb4 PushI
	var_171_float = 0.5; // 0xbb5 PushF
	SetTimer(var_170_int, var_171_float); // 0xbb6 Func
	var_2_object = 0; // 0xbb8 TMovB
	
Label_3001:
	var_172_int = 1; // 0xbb9 PushI
	MovePoint(var_172_int, var_172_int, var_122_bool); // 0xbba Func
	var_173_bool = var_122_bool; // 0xbbc Push
	if(var_173_bool == 0) goto Label_3029; // 0xbbd JumpB
	var_174_bool = var_0_object == 0; // 0xbbe NullEq
	if(var_174_bool == 0) goto Label_3010; // 0xbbf JumpB
	goto Label_3031; // 0xbc0 Jump
	
Label_3031:
	return 10; // 0xbd7 Return
	
Label_3010:
	var_175_cvector = CVector(0,0,0); var_176_float = 0; // 0xbc2 PushV
	var_176_float = 2.61799; // 0xbc3 MovF
	func_2929(var_175_cvector, var_176_float); // 0xbc4 NEW_2
	var_123_cvector = var_175_cvector; // 0xbc5 Mov
	var_124_float = var_123_cvector | var_123_cvector; // 0xbc7 Or2
	var_177_float = 2500.0; // 0xbc8 PushF
	var_178_bool = var_124_float >= var_177_float; // 0xbc9 GE
	if(var_178_bool == 0) goto Label_3028; // 0xbca JumpB
	var_179_cvector = CVector(0,0,0); // 0xbcb PushV
	func_3504(var_179_cvector); // 0xbcc NEW_2
	var_1_object = var_179_cvector + var_123_cvector; // 0xbce Add2
	var_180_int = 120; // 0xbcf PushI
	var_181_float = 0.5; // 0xbd0 PushF
	SetTimer(var_180_int, var_181_float); // 0xbd1 Func
	goto Label_3029; // 0xbd3 Jump
	
Label_3029:
	var_182_bool = var_2_object == 0; // 0xbd5 Not
	if(var_182_bool == 0) goto Label_3001; // 0xbd6 JumpB
	
Label_3028:
	goto Label_3031; // 0xbd4 Jump
}


func_3472(var_2_object)
{
	Stop(); // 0xd90 Func
	var_22_int = 120; // 0xd92 PushI
	KillTimer(var_22_int); // 0xd93 Func
	var_2_object = 1; // 0xd95 TMovB
	return 0; // 0xd96 Return
}


func_5014(var_138_object)
{
	var_139_object = Obj(); // 0x1397 PushV
	var_139_object = var_138_object; // 0x1398 Mov
	TaskCall(9); // 0x1399 TaskCall
	func_3347(var_140_object, var_141_cvector, var_142_bool, var_139_object); // 0x139a NEW_2
	TaskReturn(); // 0x139b TaskReturn
	return 0; // 0x139d Return
}


func_3991(var_127_int, var_128_string)
{
	var_129_int = 0; var_130_int = 0; // 0xf97 PushV
	GetVariable(var_128_string, var_130_int); // 0xf98 Func
	var_127_int = var_130_int; // 0xf9a Mov
	return 2; // 0xf9b Return
}


func_3996(var_123_int)
{
	var_124_float = 0; var_125_float = 0; // 0xf9c PushV
	GetGameTime(var_125_float); // 0xf9d Func
	var_126_int = 1; // 0xf9f PushI
	var_127_int = 0; // 0xfa0 PushV
	var_128_int = 24; // 0xfa1 PushI
	var_127_int = var_125_float / var_125_float; // 0xfa2 Div2
	var_123_int = var_126_int + var_127_int; // 0xfa3 Add2
	return 2; // 0xfa4 Return
}


func_5022(var_53_bool, var_54_object)
{
	var_55_bool = 0; var_56_object = Obj(); // 0x139f PushV
	var_56_object = var_54_object; // 0x13a0 Mov
	func_4999(var_55_bool, var_56_object); // 0x13a1 NEW_2
	var_53_bool = var_55_bool; // 0x13a2 Mov
	return 0; // 0x13a4 Return
}


func_3488(var_0_object, var_73_bool)
{
	var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); // 0xda0 PushV
	GetDirection(var_76_cvector); // 0xda1 Func
	var_78_cvector = CVector(0,0,0); var_79_object = Obj(); // 0xda3 PushV
	var_79_object = var_0_object; // 0xda4 MovT
	func_3509(var_79_object); // 0xda5 NEW_2
	var_77_cvector = var_78_cvector; // 0xda6 Mov
	var_84_float = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); // 0xda8 PushV
	var_85_cvector = var_76_cvector; // 0xda9 Mov
	var_86_cvector = var_77_cvector; // 0xdaa Mov
	func_3947(var_84_float, var_85_cvector, var_86_cvector); // 0xdab NEW_2
	var_92_float = -0.34202; // 0xdad PushF
	var_73_bool = var_84_float >= var_92_float; // 0xdae GE2
	return 4; // 0xdaf Return
}


func_4005(var_406_int)
{
	var_407_float = 0; var_408_float = 0; // 0xfa5 PushV
	GetGameTime(var_408_float); // 0xfa6 Func
	var_409_int = 0; // 0xfa8 PushV
	var_409_int = var_408_float; // 0xfa9 Mov
	var_410_int = 24; // 0xfaa PushI
	var_406_int = var_409_int % var_410_int; // 0xfab Mod2
	return 2; // 0xfac Return
}


func_5029(var_206_object)
{
	var_207_object = Obj(); // 0x13a6 PushV
	var_207_object = var_206_object; // 0x13a7 Mov
	func_5014(var_207_object); // 0x13a8 NEW_2
	return 0; // 0x13aa Return
}


func_5035(var_29_bool)
{
	var_29_bool = 0; // 0x13ac MovB
	return 0; // 0x13ad Return
}


func_4013()
{
	var_29_int = 100; // 0xfae PushI
	SetReturnValue(var_29_int); // 0xfaf ObjFunc
	return 0; // 0xfb1 Return
}


func_5038()
{
	return 0; // 0x13af Return
}


func_3504(var_93_cvector)
{
	var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); // 0xdb0 PushV
	GetPosition(var_95_cvector); // 0xdb1 Func
	var_93_cvector = var_95_cvector; // 0xdb3 Mov
	return 2; // 0xdb4 Return
}


func_5040()
{
	var_453_object = Obj(); var_454_object = Obj(); var_455_object = Obj(); var_456_object = Obj(); var_457_int = 0; var_458_int = 0; var_459_int = 0; var_460_int = 0; var_461_object = Obj(); var_462_int = 0; var_463_bool = 0; var_464_int = 0; var_465_float = 0; var_466_int = 0; var_467_object = Obj(); var_468_int = 0; var_469_int = 0; var_470_int = 0; var_471_int = 0; var_472_int = 0; var_473_int = 0; var_474_int = 0; var_475_int = 0; var_476_int = 0; var_477_int = 0; var_478_object = Obj(); var_479_object = Obj(); var_480_object = Obj(); var_481_object = Obj(); var_482_object = Obj(); var_483_int = 0; var_484_int = 0; var_485_int = 0; var_486_int = 0; var_487_object = Obj(); var_488_int = 0; var_489_bool = 0; var_490_int = 0; var_491_float = 0; var_492_int = 0; var_493_object = Obj(); var_494_int = 0; var_495_int = 0; var_496_int = 0; var_497_int = 0; var_498_int = 0; var_499_int = 0; var_500_int = 0; var_501_int = 0; var_502_int = 0; var_503_int = 0; var_504_object = Obj(); // 0x13b0 PushV
	var_505_object = Obj(); // 0x13b1 PushV
	func_3941(var_505_object); // 0x13b2 NEW_2
	var_479_object = var_505_object; // 0x13b3 Mov
	CreateIntVector(var_480_object); // 0x13b5 Func
	CreateIntVector(var_481_object); // 0x13b7 Func
	CreateIntVector(var_482_object); // 0x13b9 Func
	GetSubContainerCount(var_483_int); // 0x13bb ObjFunc
	var_484_int = 0; // 0x13bd MovI
	
Label_5054:
	var_508_bool = var_484_int < var_483_int; // 0x13be LT
	if(var_508_bool == 0) goto Label_5126; // 0x13bf JumpB
	GetItemCount(var_485_int, var_484_int); // 0x13c0 ObjFunc
	var_486_int = 0; // 0x13c2 MovI
	
Label_5059:
	var_509_bool = var_486_int < var_485_int; // 0x13c3 LT
	if(var_509_bool == 0) goto Label_5123; // 0x13c4 JumpB
	GetItem(var_487_object, var_486_int, var_484_int); // 0x13c5 ObjFunc
	GetItemID(var_488_int); // 0x13c7 ObjFunc
	var_510_string = "HasDurability"; // 0x13c9 PushS
	HasInvItemProperty(var_489_bool, var_488_int, var_510_string); // 0x13ca Func
	var_511_bool = var_489_bool; // 0x13cc Push
	if(var_511_bool == 0) goto Label_5119; // 0x13cd JumpB
	var_512_string = "durability"; // 0x13ce PushS
	HasProperty(var_489_bool, var_512_string); // 0x13cf ObjFunc
	var_513_bool = var_489_bool; // 0x13d1 Push
	if(var_513_bool == 0) goto Label_5119; // 0x13d2 JumpB
	var_514_string = "durability"; // 0x13d3 PushS
	GetProperty(var_490_int, var_514_string); // 0x13d4 ObjFunc
	var_515_bool = 0; // 0x13d6 PushV
	var_515_bool = 0; // 0x13d7 MovB
	var_516_int = 100; // 0x13d8 PushI
	var_517_bool = var_490_int < var_516_int; // 0x13d9 LT
	if(var_517_bool == 0) goto Label_5089; // 0x13da JumpB
	var_518_bool = 0; var_519_object = Obj(); // 0x13db PushV
	var_519_object = var_487_object; // 0x13dc Mov
	func_5187(var_519_object); // 0x13dd NEW_2
	if(var_518_bool == 0) goto Label_5089; // 0x13df JumpB
	var_515_bool = 1; // 0x13e0 MovB
	
Label_5089:
	if(var_515_bool == 0) goto Label_5119; // 0x13e1 JumpB
	add(var_487_object); // 0x13e2 ObjFunc
	add(var_484_int); // 0x13e4 ObjFunc
	add(var_486_int); // 0x13e6 ObjFunc
	var_530_int = 0; var_531_object = Obj(); var_532_int = 0; // 0x13e8 PushV
	var_531_object = var_487_object; // 0x13e9 Mov
	var_532_int = 0; // 0x13ea MovI
	func_4307(var_530_int, var_531_object, var_532_int); // 0x13eb NEW_2
	var_491_float = var_530_int; // 0x13ec Mov
	var_572_float = 1.0; // 0x13ee PushF
	var_573_float = 2.0; // 0x13ef PushF
	var_574_float = var_573_float * var_490_int; // 0x13f0 Mult
	var_575_float = 100.0; // 0x13f1 PushF
	var_576_float = var_574_float / var_575_float; // 0x13f2 Div
	var_577_int = var_572_float + var_576_float; // 0x13f3 Add
	var_578_float = var_491_float * var_577_int; // 0x13f4 Mult
	var_579_int = 100; // 0x13f5 PushI
	var_580_int = var_579_int - var_490_int; // 0x13f6 Sub
	var_581_float = var_578_float * var_580_int; // 0x13f7 Mult
	var_582_int = 300; // 0x13f8 PushI
	var_492_int = var_581_float / var_581_float; // 0x13f9 Div2
	var_583_bool = var_492_int == 0; // 0x13fa Not
	if(var_583_bool == 0) goto Label_5117; // 0x13fb JumpB
	var_492_int = 1; // 0x13fc MovI
	
Label_5117:
	add(var_492_int); // 0x13fd ObjFunc
	
Label_5119:
	var_487_object = 0; // 0x13ff SetNull
	var_584_int = 1; // 0x1400 PushI
	var_486_int = var_486_int + var_584_int; // 0x1401 Add2
	goto Label_5059; // 0x1402 Jump
	
Label_5123:
	var_585_int = 1; // 0x1403 PushI
	var_484_int = var_484_int + var_585_int; // 0x1404 Add2
	goto Label_5054; // 0x1405 Jump
	
Label_5126:
	CreateIntVector(var_493_object); // 0x1406 Func
	var_586_string = "repair.xml"; // 0x1408 PushS
	ChooseItem(var_479_object, var_493_object, var_482_object, var_586_string); // 0x1409 Func
	size(var_494_int); // 0x140b ObjFunc
	var_587_bool = var_494_int == 0; // 0x140d Not
	if(var_587_bool == 0) goto Label_5136; // 0x140e JumpB
	return 52; // 0x140f Return
	
Label_5136:
	var_495_int = 0; // 0x1410 MovI
	var_496_int = 0; // 0x1411 MovI
	
Label_5138:
	var_588_bool = var_496_int < var_494_int; // 0x1412 LT
	if(var_588_bool == 0) goto Label_5148; // 0x1413 JumpB
	get(var_497_int, var_496_int); // 0x1414 ObjFunc
	get(var_498_int, var_497_int); // 0x1416 ObjFunc
	var_495_int = var_495_int + var_498_int; // 0x1418 Add2
	var_589_int = 1; // 0x1419 PushI
	var_496_int = var_496_int + var_589_int; // 0x141a Add2
	goto Label_5138; // 0x141b Jump
	
Label_5148:
	var_590_string = "money"; // 0x141c PushS
	GetProperty(var_590_string, var_499_int); // 0x141d ObjFunc
	var_499_int = var_499_int - var_495_int; // 0x141f Sub2
	var_591_int = 0; // 0x1420 PushI
	var_592_bool = var_499_int < var_591_int; // 0x1421 LT
	if(var_592_bool == 0) goto Label_5156; // 0x1422 JumpB
	return 52; // 0x1423 Return
	
Label_5156:
	var_593_string = "money"; // 0x1424 PushS
	SetProperty(var_593_string, var_499_int); // 0x1425 ObjFunc
	var_500_int = 0; // 0x1427 MovI
	
Label_5160:
	var_594_bool = var_500_int < var_494_int; // 0x1428 LT
	if(var_594_bool == 0) goto Label_5181; // 0x1429 JumpB
	get(var_501_int, var_500_int); // 0x142a ObjFunc
	get(var_502_int, var_501_int); // 0x142c ObjFunc
	get(var_503_int, var_501_int); // 0x142e ObjFunc
	GetItem(var_504_object, var_503_int, var_502_int); // 0x1430 ObjFunc
	var_595_string = "durability"; // 0x1432 PushS
	var_596_int = 100; // 0x1433 PushI
	SetProperty(var_595_string, var_596_int); // 0x1434 ObjFunc
	var_597_int = 1; // 0x1436 PushI
	SetItem(var_504_object, var_597_int, var_503_int, var_502_int); // 0x1437 ObjFunc
	var_504_object = 0; // 0x1439 SetNull
	var_598_int = 1; // 0x143a PushI
	var_500_int = var_500_int + var_598_int; // 0x143b Add2
	goto Label_5160; // 0x143c Jump
	
Label_5181:
	return 52; // 0x143d Return
}


func_4018(var_389_bool)
{
	var_391_int = 0; var_392_string = ""; // 0xfb3 PushV
	var_392_string = "branch"; // 0xfb4 MovS
	func_3991(var_391_int, var_392_string); // 0xfb5 NEW_2
	var_393_int = 0; // 0xfb7 PushI
	var_394_bool = var_391_int == var_393_int; // 0xfb8 Eq
	if(var_394_bool == 0) goto Label_4028; // 0xfb9 JumpB
	var_389_bool = 1; // 0xfba MovB
	return 0; // 0xfbb Return
	
Label_4028:
	var_389_bool = 0; // 0xfbc MovB
	return 0; // 0xfbd Return
}


func_2483(var_0_object)
{
	var_90_object = Obj(); // 0x9b3 PushV
	var_90_object = var_0_object; // 0x9b4 MovT
	func_3866(var_90_object); // 0x9b5 NEW_2
	return 0; // 0x9b7 Return
}


func_3509(var_55_cvector)
{
	var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); // 0xdb5 PushV
	GetPosition(var_59_cvector); // 0xdb6 Func
	GetPosition(var_60_cvector); // 0xdb8 ObjFunc
	var_55_cvector = var_60_cvector - var_59_cvector; // 0xdba Sub2
	return 4; // 0xdbb Return
}


func_3516(var_41_float)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0xdbc PushV
	GetPosition(var_46_cvector); // 0xdbd Func
	GetPosition(var_47_cvector); // 0xdbf ObjFunc
	var_48_cvector = var_47_cvector - var_46_cvector; // 0xdc1 Sub2
	var_41_float = var_48_cvector | var_48_cvector; // 0xdc2 Or2
	return 6; // 0xdc3 Return
}


func_4030(var_429_bool)
{
	var_431_int = 0; var_432_string = ""; // 0xfbf PushV
	var_432_string = "branch"; // 0xfc0 MovS
	func_3991(var_431_int, var_432_string); // 0xfc1 NEW_2
	var_433_int = 1; // 0xfc3 PushI
	var_434_bool = var_431_int == var_433_int; // 0xfc4 Eq
	if(var_434_bool == 0) goto Label_4040; // 0xfc5 JumpB
	var_429_bool = 1; // 0xfc6 MovB
	return 0; // 0xfc7 Return
	
Label_4040:
	var_429_bool = 0; // 0xfc8 MovB
	return 0; // 0xfc9 Return
}


func_3524(var_105_bool, var_106_object)
{
	var_107_bool = 0; var_108_bool = 0; // 0xdc4 PushV
	IsPlayerActor(var_106_object, var_108_bool); // 0xdc5 Func
	var_105_bool = var_108_bool; // 0xdc7 Mov
	return 2; // 0xdc8 Return
}


func_3529(var_50_bool, var_51_object, var_52_string)
{
	var_53_bool = 0; var_54_bool = 0; // 0xdc9 PushV
	var_55_string = "HasProperty"; // 0xdca PushS
	var_56_int = 2; // 0xdcb PushI
	var_57_bool = IsFuncExist(var_51_object, var_55_string, var_56_int); // 0xdcc FuncExist
	var_58_bool = var_57_bool == 0; // 0xdcd Not
	if(var_58_bool == 0) goto Label_3537; // 0xdce JumpB
	var_50_bool = 0; // 0xdcf MovB
	return 2; // 0xdd0 Return
	
Label_3537:
	HasProperty(var_52_string, var_54_bool); // 0xdd1 ObjFunc
	var_50_bool = var_54_bool; // 0xdd3 Mov
	return 2; // 0xdd4 Return
}


func_4042(var_125_bool)
{
	var_127_int = 0; var_128_string = ""; // 0xfcb PushV
	var_128_string = "branch"; // 0xfcc MovS
	func_3991(var_127_int, var_128_string); // 0xfcd NEW_2
	var_131_int = 2; // 0xfcf PushI
	var_132_bool = var_127_int == var_131_int; // 0xfd0 Eq
	if(var_132_bool == 0) goto Label_4052; // 0xfd1 JumpB
	var_125_bool = 1; // 0xfd2 MovB
	return 0; // 0xfd3 Return
	
Label_4052:
	var_125_bool = 0; // 0xfd4 MovB
	return 0; // 0xfd5 Return
}


func_3541(var_43_bool)
{
	var_45_bool = 0; var_46_bool = 0; // 0xdd5 PushV
	IsDead(var_46_bool); // 0xdd6 ObjFunc
	var_43_bool = var_46_bool; // 0xdd8 Mov
	return 2; // 0xdd9 Return
}


func_4054(var_154_bool, var_155_object)
{
	var_156_bool = 0; var_157_object = Obj(); // 0xfd7 PushV
	var_157_object = var_155_object; // 0xfd8 Mov
	func_4184(var_157_object); // 0xfd9 NEW_2
	if(var_156_bool == 0) goto Label_4062; // 0xfdb JumpB
	var_154_bool = 1; // 0xfdc MovB
	return 0; // 0xfdd Return
	
Label_4062:
	var_154_bool = 0; // 0xfde MovB
	return 0; // 0xfdf Return
}


func_3546(var_32_bool, var_33_object)
{
	var_34_object = Obj(); var_35_object = Obj(); var_36_object = Obj(); var_37_object = Obj(); // 0xdda PushV
	var_38_bool = var_33_object == 0; // 0xddb NullEq
	if(var_38_bool == 0) goto Label_3551; // 0xddc JumpB
	var_32_bool = 0; // 0xddd MovB
	return 4; // 0xdde Return
	
Label_3551:
	var_39_bool = 0; // 0xddf PushV
	var_39_bool = 0; // 0xde0 MovB
	var_40_string = "IsDead"; // 0xde1 PushS
	var_41_int = 1; // 0xde2 PushI
	var_42_bool = IsFuncExist(var_33_object, var_40_string, var_41_int); // 0xde3 FuncExist
	if(var_42_bool == 0) goto Label_3563; // 0xde4 JumpB
	var_43_bool = 0; var_44_object = Obj(); // 0xde5 PushV
	var_44_object = var_33_object; // 0xde6 Mov
	func_3541(var_44_object); // 0xde7 NEW_2
	if(var_43_bool == 0) goto Label_3563; // 0xde9 JumpB
	var_39_bool = 1; // 0xdea MovB
	
Label_3563:
	if(var_39_bool == 0) goto Label_3566; // 0xdeb JumpB
	var_32_bool = 0; // 0xdec MovB
	return 4; // 0xded Return
	
Label_3566:
	GetScene(var_36_object); // 0xdee Func
	var_47_bool = var_36_object == 0; // 0xdf0 NullEq
	if(var_47_bool == 0) goto Label_3572; // 0xdf1 JumpB
	var_32_bool = 0; // 0xdf2 MovB
	return 4; // 0xdf3 Return
	
Label_3572:
	GetScene(var_37_object); // 0xdf4 ObjFunc
	var_48_bool = var_36_object != var_37_object; // 0xdf6 Neq
	if(var_48_bool == 0) goto Label_3578; // 0xdf7 JumpB
	var_32_bool = 0; // 0xdf8 MovB
	return 4; // 0xdf9 Return
	
Label_3578:
	var_32_bool = 1; // 0xdfa MovB
	return 4; // 0xdfb Return
}


func_4064(var_189_bool, var_190_object)
{
	var_191_bool = 0; var_192_object = Obj(); // 0xfe1 PushV
	var_192_object = var_190_object; // 0xfe2 Mov
	func_4191(var_192_object); // 0xfe3 NEW_2
	if(var_191_bool == 0) goto Label_4072; // 0xfe5 JumpB
	var_189_bool = 1; // 0xfe6 MovB
	return 0; // 0xfe7 Return
	
Label_4072:
	var_189_bool = 0; // 0xfe8 MovB
	return 0; // 0xfe9 Return
}


func_2024(var_2_object)
{
	var_22_int = 110; // 0x7e8 PushI
	KillTimer(var_22_int); // 0x7e9 Func
	var_2_object = 0; // 0x7eb TMovB
	func_2160(var_20_cvector, var_21_bool); // 0x7ed NEW_2
	return 0; // 0x7ef Return
}


func_4074(var_165_bool, var_166_object)
{
	var_167_bool = 0; var_168_object = Obj(); // 0xfeb PushV
	var_168_object = var_166_object; // 0xfec Mov
	func_4198(var_168_object); // 0xfed NEW_2
	if(var_167_bool == 0) goto Label_4082; // 0xfef JumpB
	var_165_bool = 1; // 0xff0 MovB
	return 0; // 0xff1 Return
	
Label_4082:
	var_165_bool = 0; // 0xff2 MovB
	return 0; // 0xff3 Return
}


func_2032(var_2_object)
{
	var_80_int = 110; // 0x7f0 PushI
	KillTimer(var_80_int); // 0x7f1 Func
	var_2_object = 0; // 0x7f3 TMovB
	func_2167(var_25_bool, var_26_int); // 0x7f5 NEW_2
	return 0; // 0x7f7 Return
}


func_4084(var_171_bool, var_172_object)
{
	var_173_bool = 0; var_174_object = Obj(); // 0xff5 PushV
	var_174_object = var_172_object; // 0xff6 Mov
	func_4205(var_174_object); // 0xff7 NEW_2
	if(var_173_bool == 0) goto Label_4092; // 0xff9 JumpB
	var_171_bool = 1; // 0xffa MovB
	return 0; // 0xffb Return
	
Label_4092:
	var_171_bool = 0; // 0xffc MovB
	return 0; // 0xffd Return
}


func_3582(var_28_bool, var_29_object)
{
	var_30_int = 0; var_31_int = 0; // 0xdfe PushV
	var_32_bool = 0; var_33_object = Obj(); // 0xdff PushV
	var_33_object = var_29_object; // 0xe00 Mov
	func_3546(var_32_bool, var_33_object); // 0xe01 NEW_2
	var_49_bool = var_32_bool == 0; // 0xe03 Not
	if(var_49_bool == 0) goto Label_3591; // 0xe04 JumpB
	var_28_bool = 0; // 0xe05 MovB
	return 2; // 0xe06 Return
	
Label_3591:
	var_50_bool = 0; var_51_object = Obj(); var_52_string = ""; // 0xe07 PushV
	var_51_object = var_29_object; // 0xe08 Mov
	var_52_string = "noaccess"; // 0xe09 MovS
	func_3529(var_50_bool, var_51_object, var_52_string); // 0xe0a NEW_2
	var_59_bool = var_50_bool == 0; // 0xe0c Not
	if(var_59_bool == 0) goto Label_3600; // 0xe0d JumpB
	var_28_bool = 1; // 0xe0e MovB
	return 2; // 0xe0f Return
	
Label_3600:
	var_60_string = "noaccess"; // 0xe10 PushS
	GetProperty(var_60_string, var_31_int); // 0xe11 ObjFunc
	var_61_int = 0; // 0xe13 PushI
	var_28_bool = var_31_int == var_61_int; // 0xe14 Eq2
	return 2; // 0xe15 Return
}


