task_0_event_11(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; // 0x1b PushV
	func_6965(var_20_bool); // 0x1c NEW_2
	if(var_20_bool == 0) goto Label_34; // 0x1e JumpB
	lshStopAnimation(); // 0x1f Func
	goto Label_36; // 0x21 Jump
	
Label_36:
	StopTrade(); // 0x24 Func
	var_0_bool = 1; // 0x26 TMovB
	return 0; // 0x27 Return
	
Label_34:
	StopAnimation(); // 0x22 Func
}


task_2_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 1; // 0x2fd PushI
	if(var_21_int == 0) goto Label_3295; // 0x2fe JumpB
	func_5801(); // 0x300 NEW_2
	var_23_int = 45532; // 0x302 PushI
	var_24_bool = var_20_bool == var_23_int; // 0x303 Eq
	if(var_24_bool == 0) goto Label_778; // 0x304 JumpB
	var_25_object = Obj(); var_26_object = Obj(); // 0x305 PushV
	var_25_object = var_1_object; // 0x306 MovT
	var_26_object = var_0_bool; // 0x307 MovT
	func_6009(); // 0x308 NEW_2
	
Label_778:
	var_28_int = 45530; // 0x30a PushI
	var_29_bool = var_20_bool == var_28_int; // 0x30b Eq
	if(var_29_bool == 0) goto Label_786; // 0x30c JumpB
	var_30_object = Obj(); var_31_object = Obj(); // 0x30d PushV
	var_30_object = var_1_object; // 0x30e MovT
	var_31_object = var_0_bool; // 0x30f MovT
	func_6009(); // 0x310 NEW_2
	
Label_786:
	var_32_int = 45555; // 0x312 PushI
	var_33_bool = var_20_bool == var_32_int; // 0x313 Eq
	if(var_33_bool == 0) goto Label_794; // 0x314 JumpB
	var_34_object = Obj(); var_35_object = Obj(); // 0x315 PushV
	var_34_object = var_1_object; // 0x316 MovT
	var_35_object = var_0_bool; // 0x317 MovT
	func_6009(); // 0x318 NEW_2
	
Label_794:
	var_36_int = 45580; // 0x31a PushI
	var_37_bool = var_20_bool == var_36_int; // 0x31b Eq
	if(var_37_bool == 0) goto Label_802; // 0x31c JumpB
	var_38_object = Obj(); var_39_object = Obj(); // 0x31d PushV
	var_38_object = var_1_object; // 0x31e MovT
	var_39_object = var_0_bool; // 0x31f MovT
	func_6009(); // 0x320 NEW_2
	
Label_802:
	var_40_int = 45602; // 0x322 PushI
	var_41_bool = var_20_bool == var_40_int; // 0x323 Eq
	if(var_41_bool == 0) goto Label_810; // 0x324 JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x325 PushV
	var_42_object = var_1_object; // 0x326 MovT
	var_43_object = var_0_bool; // 0x327 MovT
	func_6009(); // 0x328 NEW_2
	
Label_810:
	var_44_int = 45603; // 0x32a PushI
	var_45_bool = var_20_bool == var_44_int; // 0x32b Eq
	if(var_45_bool == 0) goto Label_818; // 0x32c JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0x32d PushV
	var_46_object = var_1_object; // 0x32e MovT
	var_47_object = var_0_bool; // 0x32f MovT
	func_6009(); // 0x330 NEW_2
	
Label_818:
	var_48_int = 38691; // 0x332 PushI
	var_49_bool = var_20_bool == var_48_int; // 0x333 Eq
	if(var_49_bool == 0) goto Label_826; // 0x334 JumpB
	var_50_object = Obj(); var_51_object = Obj(); // 0x335 PushV
	var_50_object = var_1_object; // 0x336 MovT
	var_51_object = var_0_bool; // 0x337 MovT
	func_6009(); // 0x338 NEW_2
	
Label_826:
	var_52_int = 45527; // 0x33a PushI
	var_53_bool = var_19_object == var_52_int; // 0x33b Eq
	if(var_53_bool == 0) goto Label_1419; // 0x33c JumpB
	var_54_bool = 0; var_55_object = Obj(); // 0x33d PushV
	var_55_object = var_1_object; // 0x33e MovT
	func_6026(var_55_object); // 0x33f NEW_2
	if(var_54_bool == 0) goto Label_1195; // 0x341 JumpB
	var_62_string = ""; // 0x342 PushV
	var_62_string = "Neutral"; // 0x343 MovS
	func_742(var_20_bool, var_62_string); // 0x344 NEW_2
	var_79_int = 543072; // 0x346 PushI
	SetMessage(var_79_int); // 0x347 TObjFunc
	ClearReplies(); // 0x349 TObjFunc
	var_80_bool = 0; var_81_object = Obj(); // 0x34b PushV
	var_81_object = var_1_object; // 0x34c MovT
	func_6038(var_80_bool, var_81_object); // 0x34d NEW_2
	if(var_80_bool == 0) goto Label_853; // 0x34f JumpB
	var_91_int = 543073; // 0x350 PushI
	var_92_int = 45531; // 0x351 PushI
	var_93_int = 45528; // 0x352 PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x353 TObjFunc
	
Label_853:
	var_94_bool = 0; var_95_object = Obj(); // 0x355 PushV
	var_95_object = var_1_object; // 0x356 MovT
	func_6048(var_94_bool, var_95_object); // 0x357 NEW_2
	if(var_94_bool == 0) goto Label_863; // 0x359 JumpB
	var_100_int = 543092; // 0x35a PushI
	var_101_int = 45550; // 0x35b PushI
	var_102_int = 45547; // 0x35c PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x35d TObjFunc
	
Label_863:
	var_103_bool = 0; // 0x35f PushV
	var_103_bool = 1; // 0x360 MovB
	var_104_bool = 0; var_105_object = Obj(); // 0x361 PushV
	var_105_object = var_1_object; // 0x362 MovT
	func_6058(var_104_bool, var_105_object); // 0x363 NEW_2
	if(var_104_bool == 0) goto Label_876; // 0x365 JumpB
	var_110_bool = 0; var_111_object = Obj(); // 0x366 PushV
	var_111_object = var_1_object; // 0x367 MovT
	func_6098(var_110_bool, var_111_object); // 0x368 NEW_2
	if(var_110_bool == 0) goto Label_876; // 0x36a JumpB
	var_103_bool = 0; // 0x36b MovB
	
Label_876:
	if(var_103_bool == 0) goto Label_882; // 0x36c JumpB
	var_116_int = 543108; // 0x36d PushI
	var_117_int = 45564; // 0x36e PushI
	var_118_int = 45563; // 0x36f PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x370 TObjFunc
	
Label_882:
	var_119_bool = 0; var_120_object = Obj(); // 0x372 PushV
	var_120_object = var_1_object; // 0x373 MovT
	func_6068(var_119_bool, var_120_object); // 0x374 NEW_2
	if(var_119_bool == 0) goto Label_892; // 0x376 JumpB
	var_125_int = 543101; // 0x377 PushI
	var_126_int = 45557; // 0x378 PushI
	var_127_int = 45556; // 0x379 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x37a TObjFunc
	
Label_892:
	var_128_bool = 0; var_129_object = Obj(); // 0x37c PushV
	var_129_object = var_1_object; // 0x37d MovT
	func_6078(var_128_bool, var_129_object); // 0x37e NEW_2
	if(var_128_bool == 0) goto Label_902; // 0x380 JumpB
	var_134_int = 543117; // 0x381 PushI
	var_135_int = 45573; // 0x382 PushI
	var_136_int = 45572; // 0x383 PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x384 TObjFunc
	
Label_902:
	var_137_bool = 0; var_138_object = Obj(); // 0x386 PushV
	var_138_object = var_1_object; // 0x387 MovT
	func_6088(var_137_bool, var_138_object); // 0x388 NEW_2
	if(var_137_bool == 0) goto Label_912; // 0x38a JumpB
	var_143_int = 543127; // 0x38b PushI
	var_144_int = 45583; // 0x38c PushI
	var_145_int = 45582; // 0x38d PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x38e TObjFunc
	
Label_912:
	var_146_bool = 0; // 0x390 PushV
	var_146_bool = 1; // 0x391 MovB
	var_147_bool = 0; var_148_object = Obj(); // 0x392 PushV
	var_148_object = var_1_object; // 0x393 MovT
	func_6108(var_147_bool, var_148_object); // 0x394 NEW_2
	if(var_147_bool == 0) goto Label_925; // 0x396 JumpB
	var_153_bool = 0; var_154_object = Obj(); // 0x397 PushV
	var_154_object = var_1_object; // 0x398 MovT
	func_6118(var_153_bool, var_154_object); // 0x399 NEW_2
	if(var_153_bool == 0) goto Label_925; // 0x39b JumpB
	var_146_bool = 0; // 0x39c MovB
	
Label_925:
	if(var_146_bool == 0) goto Label_931; // 0x39d JumpB
	var_159_int = 543139; // 0x39e PushI
	var_160_int = 45595; // 0x39f PushI
	var_161_int = 45594; // 0x3a0 PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x3a1 TObjFunc
	
Label_931:
	var_162_bool = 0; var_163_object = Obj(); // 0x3a3 PushV
	var_163_object = var_1_object; // 0x3a4 MovT
	func_6038(var_162_bool, var_163_object); // 0x3a5 NEW_2
	if(var_162_bool == 0) goto Label_941; // 0x3a7 JumpB
	var_164_int = 543075; // 0x3a8 PushI
	var_165_int = -1; // 0x3a9 PushI
	var_166_int = 45530; // 0x3aa PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x3ab TObjFunc
	
Label_941:
	var_167_bool = 0; // 0x3ad PushV
	var_167_bool = 1; // 0x3ae MovB
	var_168_bool = 0; // 0x3af PushV
	var_168_bool = 1; // 0x3b0 MovB
	var_169_bool = 0; // 0x3b1 PushV
	var_169_bool = 1; // 0x3b2 MovB
	var_170_bool = 0; var_171_object = Obj(); // 0x3b3 PushV
	var_171_object = var_1_object; // 0x3b4 MovT
	func_6048(var_170_bool, var_171_object); // 0x3b5 NEW_2
	if(var_170_bool == 0) goto Label_958; // 0x3b7 JumpB
	var_172_bool = 0; var_173_object = Obj(); // 0x3b8 PushV
	var_173_object = var_1_object; // 0x3b9 MovT
	func_6058(var_172_bool, var_173_object); // 0x3ba NEW_2
	if(var_172_bool == 0) goto Label_958; // 0x3bc JumpB
	var_169_bool = 0; // 0x3bd MovB
	
Label_958:
	if(var_169_bool == 0) goto Label_965; // 0x3be JumpB
	var_174_bool = 0; var_175_object = Obj(); // 0x3bf PushV
	var_175_object = var_1_object; // 0x3c0 MovT
	func_6068(var_174_bool, var_175_object); // 0x3c1 NEW_2
	if(var_174_bool == 0) goto Label_965; // 0x3c3 JumpB
	var_168_bool = 0; // 0x3c4 MovB
	
Label_965:
	if(var_168_bool == 0) goto Label_972; // 0x3c5 JumpB
	var_176_bool = 0; var_177_object = Obj(); // 0x3c6 PushV
	var_177_object = var_1_object; // 0x3c7 MovT
	func_6078(var_176_bool, var_177_object); // 0x3c8 NEW_2
	if(var_176_bool == 0) goto Label_972; // 0x3ca JumpB
	var_167_bool = 0; // 0x3cb MovB
	
Label_972:
	if(var_167_bool == 0) goto Label_978; // 0x3cc JumpB
	var_178_int = 543100; // 0x3cd PushI
	var_179_int = -1; // 0x3ce PushI
	var_180_int = 45555; // 0x3cf PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x3d0 TObjFunc
	
Label_978:
	var_181_bool = 0; var_182_object = Obj(); // 0x3d2 PushV
	var_182_object = var_1_object; // 0x3d3 MovT
	func_6088(var_181_bool, var_182_object); // 0x3d4 NEW_2
	if(var_181_bool == 0) goto Label_988; // 0x3d6 JumpB
	var_183_int = 543125; // 0x3d7 PushI
	var_184_int = -1; // 0x3d8 PushI
	var_185_int = 45580; // 0x3d9 PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x3da TObjFunc
	
Label_988:
	var_186_bool = 0; // 0x3dc PushV
	var_186_bool = 1; // 0x3dd MovB
	var_187_bool = 0; // 0x3de PushV
	var_187_bool = 1; // 0x3df MovB
	var_188_bool = 0; var_189_object = Obj(); // 0x3e0 PushV
	var_189_object = var_1_object; // 0x3e1 MovT
	func_6098(var_188_bool, var_189_object); // 0x3e2 NEW_2
	if(var_188_bool == 0) goto Label_1003; // 0x3e4 JumpB
	var_190_bool = 0; var_191_object = Obj(); // 0x3e5 PushV
	var_191_object = var_1_object; // 0x3e6 MovT
	func_6108(var_190_bool, var_191_object); // 0x3e7 NEW_2
	if(var_190_bool == 0) goto Label_1003; // 0x3e9 JumpB
	var_187_bool = 0; // 0x3ea MovB
	
Label_1003:
	if(var_187_bool == 0) goto Label_1010; // 0x3eb JumpB
	var_192_bool = 0; var_193_object = Obj(); // 0x3ec PushV
	var_193_object = var_1_object; // 0x3ed MovT
	func_6118(var_192_bool, var_193_object); // 0x3ee NEW_2
	if(var_192_bool == 0) goto Label_1010; // 0x3f0 JumpB
	var_186_bool = 0; // 0x3f1 MovB
	
Label_1010:
	if(var_186_bool == 0) goto Label_1016; // 0x3f2 JumpB
	var_194_int = 543147; // 0x3f3 PushI
	var_195_int = -1; // 0x3f4 PushI
	var_196_int = 45602; // 0x3f5 PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x3f6 TObjFunc
	
Label_1016:
	var_197_bool = 0; // 0x3f8 PushV
	var_197_bool = 1; // 0x3f9 MovB
	var_198_bool = 0; // 0x3fa PushV
	var_198_bool = 1; // 0x3fb MovB
	var_199_bool = 0; var_200_object = Obj(); // 0x3fc PushV
	var_200_object = var_1_object; // 0x3fd MovT
	func_6128(var_199_bool, var_200_object); // 0x3fe NEW_2
	if(var_199_bool == 0) goto Label_1031; // 0x400 JumpB
	var_205_bool = 0; var_206_object = Obj(); // 0x401 PushV
	var_206_object = var_1_object; // 0x402 MovT
	func_6138(var_205_bool, var_206_object); // 0x403 NEW_2
	if(var_205_bool == 0) goto Label_1031; // 0x405 JumpB
	var_198_bool = 0; // 0x406 MovB
	
Label_1031:
	if(var_198_bool == 0) goto Label_1038; // 0x407 JumpB
	var_211_bool = 0; var_212_object = Obj(); // 0x408 PushV
	var_212_object = var_1_object; // 0x409 MovT
	func_6148(var_211_bool, var_212_object); // 0x40a NEW_2
	if(var_211_bool == 0) goto Label_1038; // 0x40c JumpB
	var_197_bool = 0; // 0x40d MovB
	
Label_1038:
	if(var_197_bool == 0) goto Label_1044; // 0x40e JumpB
	var_217_int = 543148; // 0x40f PushI
	var_218_int = -1; // 0x410 PushI
	var_219_int = 45603; // 0x411 PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0x412 TObjFunc
	
Label_1044:
	var_220_bool = 0; var_221_object = Obj(); // 0x414 PushV
	var_221_object = var_1_object; // 0x415 MovT
	func_6038(var_220_bool, var_221_object); // 0x416 NEW_2
	if(var_220_bool == 0) goto Label_1054; // 0x418 JumpB
	var_222_int = 543074; // 0x419 PushI
	var_223_int = -1; // 0x41a PushI
	var_224_int = 45529; // 0x41b PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x41c TObjFunc
	
Label_1054:
	var_225_bool = 0; // 0x41e PushV
	var_225_bool = 1; // 0x41f MovB
	var_226_bool = 0; var_227_object = Obj(); // 0x420 PushV
	var_227_object = var_1_object; // 0x421 MovT
	func_6048(var_226_bool, var_227_object); // 0x422 NEW_2
	if(var_226_bool == 0) goto Label_1067; // 0x424 JumpB
	var_228_bool = 0; var_229_object = Obj(); // 0x425 PushV
	var_229_object = var_1_object; // 0x426 MovT
	func_6058(var_228_bool, var_229_object); // 0x427 NEW_2
	if(var_228_bool == 0) goto Label_1067; // 0x429 JumpB
	var_225_bool = 0; // 0x42a MovB
	
Label_1067:
	if(var_225_bool == 0) goto Label_1073; // 0x42b JumpB
	var_230_int = 543090; // 0x42c PushI
	var_231_int = -1; // 0x42d PushI
	var_232_int = 45545; // 0x42e PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x42f TObjFunc
	
Label_1073:
	var_233_bool = 0; // 0x431 PushV
	var_233_bool = 1; // 0x432 MovB
	var_234_bool = 0; var_235_object = Obj(); // 0x433 PushV
	var_235_object = var_1_object; // 0x434 MovT
	func_6048(var_234_bool, var_235_object); // 0x435 NEW_2
	if(var_234_bool == 0) goto Label_1086; // 0x437 JumpB
	var_236_bool = 0; var_237_object = Obj(); // 0x438 PushV
	var_237_object = var_1_object; // 0x439 MovT
	func_6058(var_236_bool, var_237_object); // 0x43a NEW_2
	if(var_236_bool == 0) goto Label_1086; // 0x43c JumpB
	var_233_bool = 0; // 0x43d MovB
	
Label_1086:
	if(var_233_bool == 0) goto Label_1092; // 0x43e JumpB
	var_238_int = 543099; // 0x43f PushI
	var_239_int = -1; // 0x440 PushI
	var_240_int = 45554; // 0x441 PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x442 TObjFunc
	
Label_1092:
	var_241_bool = 0; // 0x444 PushV
	var_241_bool = 1; // 0x445 MovB
	var_242_bool = 0; var_243_object = Obj(); // 0x446 PushV
	var_243_object = var_1_object; // 0x447 MovT
	func_6088(var_242_bool, var_243_object); // 0x448 NEW_2
	if(var_242_bool == 0) goto Label_1105; // 0x44a JumpB
	var_244_bool = 0; var_245_object = Obj(); // 0x44b PushV
	var_245_object = var_1_object; // 0x44c MovT
	func_6118(var_244_bool, var_245_object); // 0x44d NEW_2
	if(var_244_bool == 0) goto Label_1105; // 0x44f JumpB
	var_241_bool = 0; // 0x450 MovB
	
Label_1105:
	if(var_241_bool == 0) goto Label_1111; // 0x451 JumpB
	var_246_int = 543126; // 0x452 PushI
	var_247_int = -1; // 0x453 PushI
	var_248_int = 45581; // 0x454 PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x455 TObjFunc
	
Label_1111:
	var_249_bool = 0; // 0x457 PushV
	var_249_bool = 1; // 0x458 MovB
	var_250_bool = 0; // 0x459 PushV
	var_250_bool = 1; // 0x45a MovB
	var_251_bool = 0; // 0x45b PushV
	var_251_bool = 1; // 0x45c MovB
	var_252_bool = 0; var_253_object = Obj(); // 0x45d PushV
	var_253_object = var_1_object; // 0x45e MovT
	func_6098(var_252_bool, var_253_object); // 0x45f NEW_2
	if(var_252_bool == 0) goto Label_1128; // 0x461 JumpB
	var_254_bool = 0; var_255_object = Obj(); // 0x462 PushV
	var_255_object = var_1_object; // 0x463 MovT
	func_6108(var_254_bool, var_255_object); // 0x464 NEW_2
	if(var_254_bool == 0) goto Label_1128; // 0x466 JumpB
	var_251_bool = 0; // 0x467 MovB
	
Label_1128:
	if(var_251_bool == 0) goto Label_1135; // 0x468 JumpB
	var_256_bool = 0; var_257_object = Obj(); // 0x469 PushV
	var_257_object = var_1_object; // 0x46a MovT
	func_6128(var_256_bool, var_257_object); // 0x46b NEW_2
	if(var_256_bool == 0) goto Label_1135; // 0x46d JumpB
	var_250_bool = 0; // 0x46e MovB
	
Label_1135:
	if(var_250_bool == 0) goto Label_1142; // 0x46f JumpB
	var_258_bool = 0; var_259_object = Obj(); // 0x470 PushV
	var_259_object = var_1_object; // 0x471 MovT
	func_6148(var_258_bool, var_259_object); // 0x472 NEW_2
	if(var_258_bool == 0) goto Label_1142; // 0x474 JumpB
	var_249_bool = 0; // 0x475 MovB
	
Label_1142:
	if(var_249_bool == 0) goto Label_1148; // 0x476 JumpB
	var_260_int = 543149; // 0x477 PushI
	var_261_int = -1; // 0x478 PushI
	var_262_int = 45604; // 0x479 PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x47a TObjFunc
	
Label_1148:
	var_263_bool = 0; // 0x47c PushV
	var_263_bool = 1; // 0x47d MovB
	var_264_bool = 0; // 0x47e PushV
	var_264_bool = 1; // 0x47f MovB
	var_265_bool = 0; // 0x480 PushV
	var_265_bool = 1; // 0x481 MovB
	var_266_bool = 0; // 0x482 PushV
	var_266_bool = 1; // 0x483 MovB
	var_267_bool = 0; var_268_object = Obj(); // 0x484 PushV
	var_268_object = var_1_object; // 0x485 MovT
	func_6068(var_267_bool, var_268_object); // 0x486 NEW_2
	if(var_267_bool == 0) goto Label_1167; // 0x488 JumpB
	var_269_bool = 0; var_270_object = Obj(); // 0x489 PushV
	var_270_object = var_1_object; // 0x48a MovT
	func_6078(var_269_bool, var_270_object); // 0x48b NEW_2
	if(var_269_bool == 0) goto Label_1167; // 0x48d JumpB
	var_266_bool = 0; // 0x48e MovB
	
Label_1167:
	if(var_266_bool == 0) goto Label_1174; // 0x48f JumpB
	var_271_bool = 0; var_272_object = Obj(); // 0x490 PushV
	var_272_object = var_1_object; // 0x491 MovT
	func_6118(var_271_bool, var_272_object); // 0x492 NEW_2
	if(var_271_bool == 0) goto Label_1174; // 0x494 JumpB
	var_265_bool = 0; // 0x495 MovB
	
Label_1174:
	if(var_265_bool == 0) goto Label_1181; // 0x496 JumpB
	var_273_bool = 0; var_274_object = Obj(); // 0x497 PushV
	var_274_object = var_1_object; // 0x498 MovT
	func_6138(var_273_bool, var_274_object); // 0x499 NEW_2
	if(var_273_bool == 0) goto Label_1181; // 0x49b JumpB
	var_264_bool = 0; // 0x49c MovB
	
Label_1181:
	if(var_264_bool == 0) goto Label_1188; // 0x49d JumpB
	var_275_bool = 0; var_276_object = Obj(); // 0x49e PushV
	var_276_object = var_1_object; // 0x49f MovT
	func_6148(var_275_bool, var_276_object); // 0x4a0 NEW_2
	if(var_275_bool == 0) goto Label_1188; // 0x4a2 JumpB
	var_263_bool = 0; // 0x4a3 MovB
	
Label_1188:
	if(var_263_bool == 0) goto Label_1194; // 0x4a4 JumpB
	var_277_int = 543150; // 0x4a5 PushI
	var_278_int = -1; // 0x4a6 PushI
	var_279_int = 45605; // 0x4a7 PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x4a8 TObjFunc
	
Label_1194:
	return 0; // 0x4aa Return
	
Label_1195:
	var_280_string = ""; // 0x4ab PushV
	var_280_string = "Neutral"; // 0x4ac MovS
	func_742(var_20_bool, var_280_string); // 0x4ad NEW_2
	var_281_int = 536854; // 0x4af PushI
	SetMessage(var_281_int); // 0x4b0 TObjFunc
	ClearReplies(); // 0x4b2 TObjFunc
	var_282_int = 536855; // 0x4b4 PushI
	var_283_int = -1; // 0x4b5 PushI
	var_284_int = 38691; // 0x4b6 PushI
	AddReply(var_282_int, var_283_int, var_284_int); // 0x4b7 TObjFunc
	var_285_bool = 0; // 0x4b9 PushV
	var_285_bool = 0; // 0x4ba MovB
	var_286_bool = 0; var_287_object = Obj(); // 0x4bb PushV
	var_287_object = var_1_object; // 0x4bc MovT
	func_6038(var_286_bool, var_287_object); // 0x4bd NEW_2
	if(var_286_bool == 0) goto Label_1222; // 0x4bf JumpB
	var_288_bool = 0; var_289_object = Obj(); // 0x4c0 PushV
	var_289_object = var_1_object; // 0x4c1 MovT
	func_6158(var_288_bool, var_289_object); // 0x4c2 NEW_2
	if(var_288_bool == 0) goto Label_1222; // 0x4c4 JumpB
	var_285_bool = 1; // 0x4c5 MovB
	
Label_1222:
	if(var_285_bool == 0) goto Label_1228; // 0x4c6 JumpB
	var_303_int = 536856; // 0x4c7 PushI
	var_304_int = 38693; // 0x4c8 PushI
	var_305_int = 38692; // 0x4c9 PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x4ca TObjFunc
	
Label_1228:
	var_306_bool = 0; // 0x4cc PushV
	var_306_bool = 0; // 0x4cd MovB
	var_307_bool = 0; var_308_object = Obj(); // 0x4ce PushV
	var_308_object = var_1_object; // 0x4cf MovT
	func_6038(var_307_bool, var_308_object); // 0x4d0 NEW_2
	if(var_307_bool == 0) goto Label_1241; // 0x4d2 JumpB
	var_309_bool = 0; var_310_object = Obj(); // 0x4d3 PushV
	var_310_object = var_1_object; // 0x4d4 MovT
	func_6168(var_309_bool, var_310_object); // 0x4d5 NEW_2
	if(var_309_bool == 0) goto Label_1241; // 0x4d7 JumpB
	var_306_bool = 1; // 0x4d8 MovB
	
Label_1241:
	if(var_306_bool == 0) goto Label_1247; // 0x4d9 JumpB
	var_316_int = 536870; // 0x4da PushI
	var_317_int = 38709; // 0x4db PushI
	var_318_int = 38708; // 0x4dc PushI
	AddReply(var_316_int, var_317_int, var_318_int); // 0x4dd TObjFunc
	
Label_1247:
	var_319_bool = 0; var_320_object = Obj(); // 0x4df PushV
	var_320_object = var_1_object; // 0x4e0 MovT
	func_6048(var_319_bool, var_320_object); // 0x4e1 NEW_2
	if(var_319_bool == 0) goto Label_1257; // 0x4e3 JumpB
	var_321_int = 536885; // 0x4e4 PushI
	var_322_int = 38724; // 0x4e5 PushI
	var_323_int = 38723; // 0x4e6 PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0x4e7 TObjFunc
	
Label_1257:
	var_324_bool = 0; var_325_object = Obj(); // 0x4e9 PushV
	var_325_object = var_1_object; // 0x4ea MovT
	func_6058(var_324_bool, var_325_object); // 0x4eb NEW_2
	if(var_324_bool == 0) goto Label_1267; // 0x4ed JumpB
	var_326_int = 536904; // 0x4ee PushI
	var_327_int = 38743; // 0x4ef PushI
	var_328_int = 38742; // 0x4f0 PushI
	AddReply(var_326_int, var_327_int, var_328_int); // 0x4f1 TObjFunc
	
Label_1267:
	var_329_bool = 0; var_330_object = Obj(); // 0x4f3 PushV
	var_330_object = var_1_object; // 0x4f4 MovT
	func_6068(var_329_bool, var_330_object); // 0x4f5 NEW_2
	if(var_329_bool == 0) goto Label_1277; // 0x4f7 JumpB
	var_331_int = 536916; // 0x4f8 PushI
	var_332_int = 38755; // 0x4f9 PushI
	var_333_int = 38754; // 0x4fa PushI
	AddReply(var_331_int, var_332_int, var_333_int); // 0x4fb TObjFunc
	
Label_1277:
	var_334_bool = 0; // 0x4fd PushV
	var_334_bool = 0; // 0x4fe MovB
	var_335_bool = 0; var_336_object = Obj(); // 0x4ff PushV
	var_336_object = var_1_object; // 0x500 MovT
	func_6088(var_335_bool, var_336_object); // 0x501 NEW_2
	if(var_335_bool == 0) goto Label_1290; // 0x503 JumpB
	var_337_bool = 0; var_338_object = Obj(); // 0x504 PushV
	var_338_object = var_1_object; // 0x505 MovT
	func_6014(var_338_object); // 0x506 NEW_2
	if(var_337_bool == 0) goto Label_1290; // 0x508 JumpB
	var_334_bool = 1; // 0x509 MovB
	
Label_1290:
	if(var_334_bool == 0) goto Label_1296; // 0x50a JumpB
	var_343_int = 536931; // 0x50b PushI
	var_344_int = 38770; // 0x50c PushI
	var_345_int = 38769; // 0x50d PushI
	AddReply(var_343_int, var_344_int, var_345_int); // 0x50e TObjFunc
	
Label_1296:
	var_346_bool = 0; var_347_object = Obj(); // 0x510 PushV
	var_347_object = var_1_object; // 0x511 MovT
	func_6108(var_346_bool, var_347_object); // 0x512 NEW_2
	if(var_346_bool == 0) goto Label_1306; // 0x514 JumpB
	var_348_int = 536943; // 0x515 PushI
	var_349_int = 38782; // 0x516 PushI
	var_350_int = 38781; // 0x517 PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0x518 TObjFunc
	
Label_1306:
	var_351_bool = 0; var_352_object = Obj(); // 0x51a PushV
	var_352_object = var_1_object; // 0x51b MovT
	func_6118(var_351_bool, var_352_object); // 0x51c NEW_2
	if(var_351_bool == 0) goto Label_1316; // 0x51e JumpB
	var_353_int = 536961; // 0x51f PushI
	var_354_int = 38800; // 0x520 PushI
	var_355_int = 38799; // 0x521 PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0x522 TObjFunc
	
Label_1316:
	var_356_bool = 0; var_357_object = Obj(); // 0x524 PushV
	var_357_object = var_1_object; // 0x525 MovT
	func_6128(var_356_bool, var_357_object); // 0x526 NEW_2
	if(var_356_bool == 0) goto Label_1326; // 0x528 JumpB
	var_358_int = 536978; // 0x529 PushI
	var_359_int = 38817; // 0x52a PushI
	var_360_int = 38816; // 0x52b PushI
	AddReply(var_358_int, var_359_int, var_360_int); // 0x52c TObjFunc
	
Label_1326:
	var_361_bool = 0; // 0x52e PushV
	var_361_bool = 0; // 0x52f MovB
	var_362_bool = 0; var_363_object = Obj(); // 0x530 PushV
	var_363_object = var_1_object; // 0x531 MovT
	func_6138(var_362_bool, var_363_object); // 0x532 NEW_2
	if(var_362_bool == 0) goto Label_1339; // 0x534 JumpB
	var_364_bool = 0; var_365_object = Obj(); // 0x535 PushV
	var_365_object = var_1_object; // 0x536 MovT
	func_6014(var_365_object); // 0x537 NEW_2
	if(var_364_bool == 0) goto Label_1339; // 0x539 JumpB
	var_361_bool = 1; // 0x53a MovB
	
Label_1339:
	if(var_361_bool == 0) goto Label_1345; // 0x53b JumpB
	var_366_int = 536993; // 0x53c PushI
	var_367_int = 38832; // 0x53d PushI
	var_368_int = 38831; // 0x53e PushI
	AddReply(var_366_int, var_367_int, var_368_int); // 0x53f TObjFunc
	
Label_1345:
	var_369_bool = 0; // 0x541 PushV
	var_369_bool = 0; // 0x542 MovB
	var_370_bool = 0; var_371_object = Obj(); // 0x543 PushV
	var_371_object = var_1_object; // 0x544 MovT
	func_6038(var_370_bool, var_371_object); // 0x545 NEW_2
	if(var_370_bool == 0) goto Label_1358; // 0x547 JumpB
	var_372_bool = 0; var_373_object = Obj(); // 0x548 PushV
	var_373_object = var_1_object; // 0x549 MovT
	func_6014(var_373_object); // 0x54a NEW_2
	if(var_372_bool == 0) goto Label_1358; // 0x54c JumpB
	var_369_bool = 1; // 0x54d MovB
	
Label_1358:
	if(var_369_bool == 0) goto Label_1364; // 0x54e JumpB
	var_374_int = 537006; // 0x54f PushI
	var_375_int = 38846; // 0x550 PushI
	var_376_int = 38845; // 0x551 PushI
	AddReply(var_374_int, var_375_int, var_376_int); // 0x552 TObjFunc
	
Label_1364:
	var_377_bool = 0; // 0x554 PushV
	var_377_bool = 0; // 0x555 MovB
	var_378_bool = 0; var_379_object = Obj(); // 0x556 PushV
	var_379_object = var_1_object; // 0x557 MovT
	func_6038(var_378_bool, var_379_object); // 0x558 NEW_2
	if(var_378_bool == 0) goto Label_1377; // 0x55a JumpB
	var_380_bool = 0; var_381_object = Obj(); // 0x55b PushV
	var_381_object = var_1_object; // 0x55c MovT
	func_6014(var_381_object); // 0x55d NEW_2
	if(var_380_bool == 0) goto Label_1377; // 0x55f JumpB
	var_377_bool = 1; // 0x560 MovB
	
Label_1377:
	if(var_377_bool == 0) goto Label_1383; // 0x561 JumpB
	var_382_int = 537017; // 0x562 PushI
	var_383_int = 38857; // 0x563 PushI
	var_384_int = 38856; // 0x564 PushI
	AddReply(var_382_int, var_383_int, var_384_int); // 0x565 TObjFunc
	
Label_1383:
	var_385_bool = 0; var_386_object = Obj(); // 0x567 PushV
	var_386_object = var_1_object; // 0x568 MovT
	func_6038(var_385_bool, var_386_object); // 0x569 NEW_2
	if(var_385_bool == 0) goto Label_1393; // 0x56b JumpB
	var_387_int = 537025; // 0x56c PushI
	var_388_int = 38865; // 0x56d PushI
	var_389_int = 38864; // 0x56e PushI
	AddReply(var_387_int, var_388_int, var_389_int); // 0x56f TObjFunc
	
Label_1393:
	var_390_bool = 0; var_391_object = Obj(); // 0x571 PushV
	var_391_object = var_1_object; // 0x572 MovT
	func_6038(var_390_bool, var_391_object); // 0x573 NEW_2
	if(var_390_bool == 0) goto Label_1403; // 0x575 JumpB
	var_392_int = 537035; // 0x576 PushI
	var_393_int = 38875; // 0x577 PushI
	var_394_int = 38874; // 0x578 PushI
	AddReply(var_392_int, var_393_int, var_394_int); // 0x579 TObjFunc
	
Label_1403:
	var_395_bool = 0; var_396_object = Obj(); // 0x57b PushV
	var_396_object = var_1_object; // 0x57c MovT
	func_6038(var_395_bool, var_396_object); // 0x57d NEW_2
	if(var_395_bool == 0) goto Label_1413; // 0x57f JumpB
	var_397_int = 537044; // 0x580 PushI
	var_398_int = 38884; // 0x581 PushI
	var_399_int = 38883; // 0x582 PushI
	AddReply(var_397_int, var_398_int, var_399_int); // 0x583 TObjFunc
	
Label_1413:
	var_400_int = 537050; // 0x585 PushI
	var_401_int = -1; // 0x586 PushI
	var_402_int = 38889; // 0x587 PushI
	AddReply(var_400_int, var_401_int, var_402_int); // 0x588 TObjFunc
	return 0; // 0x58a Return
	
Label_1419:
	var_403_int = 38884; // 0x58b PushI
	var_404_bool = var_19_object == var_403_int; // 0x58c Eq
	if(var_404_bool == 0) goto Label_1442; // 0x58d JumpB
	var_405_string = ""; // 0x58e PushV
	var_405_string = "Neutral"; // 0x58f MovS
	func_742(var_20_bool, var_405_string); // 0x590 NEW_2
	var_406_int = 537045; // 0x592 PushI
	SetMessage(var_406_int); // 0x593 TObjFunc
	ClearReplies(); // 0x595 TObjFunc
	var_407_int = 537046; // 0x597 PushI
	var_408_int = 38886; // 0x598 PushI
	var_409_int = 38885; // 0x599 PushI
	AddReply(var_407_int, var_408_int, var_409_int); // 0x59a TObjFunc
	var_410_int = 537049; // 0x59c PushI
	var_411_int = -1; // 0x59d PushI
	var_412_int = 38888; // 0x59e PushI
	AddReply(var_410_int, var_411_int, var_412_int); // 0x59f TObjFunc
	return 0; // 0x5a1 Return
	
Label_1442:
	var_413_int = 38886; // 0x5a2 PushI
	var_414_bool = var_19_object == var_413_int; // 0x5a3 Eq
	if(var_414_bool == 0) goto Label_1460; // 0x5a4 JumpB
	var_415_string = ""; // 0x5a5 PushV
	var_415_string = "Neutral"; // 0x5a6 MovS
	func_742(var_20_bool, var_415_string); // 0x5a7 NEW_2
	var_416_int = 537047; // 0x5a9 PushI
	SetMessage(var_416_int); // 0x5aa TObjFunc
	ClearReplies(); // 0x5ac TObjFunc
	var_417_int = 537048; // 0x5ae PushI
	var_418_int = -1; // 0x5af PushI
	var_419_int = 38887; // 0x5b0 PushI
	AddReply(var_417_int, var_418_int, var_419_int); // 0x5b1 TObjFunc
	return 0; // 0x5b3 Return
	
Label_1460:
	var_420_int = 38875; // 0x5b4 PushI
	var_421_bool = var_19_object == var_420_int; // 0x5b5 Eq
	if(var_421_bool == 0) goto Label_1483; // 0x5b6 JumpB
	var_422_string = ""; // 0x5b7 PushV
	var_422_string = "Neutral"; // 0x5b8 MovS
	func_742(var_20_bool, var_422_string); // 0x5b9 NEW_2
	var_423_int = 537036; // 0x5bb PushI
	SetMessage(var_423_int); // 0x5bc TObjFunc
	ClearReplies(); // 0x5be TObjFunc
	var_424_int = 537037; // 0x5c0 PushI
	var_425_int = 38877; // 0x5c1 PushI
	var_426_int = 38876; // 0x5c2 PushI
	AddReply(var_424_int, var_425_int, var_426_int); // 0x5c3 TObjFunc
	var_427_int = 537043; // 0x5c5 PushI
	var_428_int = -1; // 0x5c6 PushI
	var_429_int = 38882; // 0x5c7 PushI
	AddReply(var_427_int, var_428_int, var_429_int); // 0x5c8 TObjFunc
	return 0; // 0x5ca Return
	
Label_1483:
	var_430_int = 38877; // 0x5cb PushI
	var_431_bool = var_19_object == var_430_int; // 0x5cc Eq
	if(var_431_bool == 0) goto Label_1511; // 0x5cd JumpB
	var_432_string = ""; // 0x5ce PushV
	var_432_string = "Neutral"; // 0x5cf MovS
	func_742(var_20_bool, var_432_string); // 0x5d0 NEW_2
	var_433_int = 537038; // 0x5d2 PushI
	SetMessage(var_433_int); // 0x5d3 TObjFunc
	ClearReplies(); // 0x5d5 TObjFunc
	var_434_bool = 0; var_435_object = Obj(); // 0x5d7 PushV
	var_435_object = var_1_object; // 0x5d8 MovT
	func_6014(var_435_object); // 0x5d9 NEW_2
	if(var_434_bool == 0) goto Label_1505; // 0x5db JumpB
	var_436_int = 537039; // 0x5dc PushI
	var_437_int = 38879; // 0x5dd PushI
	var_438_int = 38878; // 0x5de PushI
	AddReply(var_436_int, var_437_int, var_438_int); // 0x5df TObjFunc
	
Label_1505:
	var_439_int = 537042; // 0x5e1 PushI
	var_440_int = -1; // 0x5e2 PushI
	var_441_int = 38881; // 0x5e3 PushI
	AddReply(var_439_int, var_440_int, var_441_int); // 0x5e4 TObjFunc
	return 0; // 0x5e6 Return
	
Label_1511:
	var_442_int = 38879; // 0x5e7 PushI
	var_443_bool = var_19_object == var_442_int; // 0x5e8 Eq
	if(var_443_bool == 0) goto Label_1529; // 0x5e9 JumpB
	var_444_string = ""; // 0x5ea PushV
	var_444_string = "Neutral"; // 0x5eb MovS
	func_742(var_20_bool, var_444_string); // 0x5ec NEW_2
	var_445_int = 537040; // 0x5ee PushI
	SetMessage(var_445_int); // 0x5ef TObjFunc
	ClearReplies(); // 0x5f1 TObjFunc
	var_446_int = 537041; // 0x5f3 PushI
	var_447_int = -1; // 0x5f4 PushI
	var_448_int = 38880; // 0x5f5 PushI
	AddReply(var_446_int, var_447_int, var_448_int); // 0x5f6 TObjFunc
	return 0; // 0x5f8 Return
	
Label_1529:
	var_449_int = 38865; // 0x5f9 PushI
	var_450_bool = var_19_object == var_449_int; // 0x5fa Eq
	if(var_450_bool == 0) goto Label_1552; // 0x5fb JumpB
	var_451_string = ""; // 0x5fc PushV
	var_451_string = "Neutral"; // 0x5fd MovS
	func_742(var_20_bool, var_451_string); // 0x5fe NEW_2
	var_452_int = 537026; // 0x600 PushI
	SetMessage(var_452_int); // 0x601 TObjFunc
	ClearReplies(); // 0x603 TObjFunc
	var_453_int = 537027; // 0x605 PushI
	var_454_int = 38867; // 0x606 PushI
	var_455_int = 38866; // 0x607 PushI
	AddReply(var_453_int, var_454_int, var_455_int); // 0x608 TObjFunc
	var_456_int = 537034; // 0x60a PushI
	var_457_int = -1; // 0x60b PushI
	var_458_int = 38873; // 0x60c PushI
	AddReply(var_456_int, var_457_int, var_458_int); // 0x60d TObjFunc
	return 0; // 0x60f Return
	
Label_1552:
	var_459_int = 38867; // 0x610 PushI
	var_460_bool = var_19_object == var_459_int; // 0x611 Eq
	if(var_460_bool == 0) goto Label_1575; // 0x612 JumpB
	var_461_string = ""; // 0x613 PushV
	var_461_string = "Neutral"; // 0x614 MovS
	func_742(var_20_bool, var_461_string); // 0x615 NEW_2
	var_462_int = 537028; // 0x617 PushI
	SetMessage(var_462_int); // 0x618 TObjFunc
	ClearReplies(); // 0x61a TObjFunc
	var_463_int = 537029; // 0x61c PushI
	var_464_int = 38869; // 0x61d PushI
	var_465_int = 38868; // 0x61e PushI
	AddReply(var_463_int, var_464_int, var_465_int); // 0x61f TObjFunc
	var_466_int = 537033; // 0x621 PushI
	var_467_int = -1; // 0x622 PushI
	var_468_int = 38872; // 0x623 PushI
	AddReply(var_466_int, var_467_int, var_468_int); // 0x624 TObjFunc
	return 0; // 0x626 Return
	
Label_1575:
	var_469_int = 38869; // 0x627 PushI
	var_470_bool = var_19_object == var_469_int; // 0x628 Eq
	if(var_470_bool == 0) goto Label_1603; // 0x629 JumpB
	var_471_string = ""; // 0x62a PushV
	var_471_string = "Neutral"; // 0x62b MovS
	func_742(var_20_bool, var_471_string); // 0x62c NEW_2
	var_472_int = 537030; // 0x62e PushI
	SetMessage(var_472_int); // 0x62f TObjFunc
	ClearReplies(); // 0x631 TObjFunc
	var_473_int = 537031; // 0x633 PushI
	var_474_int = -1; // 0x634 PushI
	var_475_int = 38870; // 0x635 PushI
	AddReply(var_473_int, var_474_int, var_475_int); // 0x636 TObjFunc
	var_476_bool = 0; var_477_object = Obj(); // 0x638 PushV
	var_477_object = var_1_object; // 0x639 MovT
	func_6014(var_477_object); // 0x63a NEW_2
	if(var_476_bool == 0) goto Label_1602; // 0x63c JumpB
	var_478_int = 537032; // 0x63d PushI
	var_479_int = -1; // 0x63e PushI
	var_480_int = 38871; // 0x63f PushI
	AddReply(var_478_int, var_479_int, var_480_int); // 0x640 TObjFunc
	
Label_1602:
	return 0; // 0x642 Return
	
Label_1603:
	var_481_int = 38857; // 0x643 PushI
	var_482_bool = var_19_object == var_481_int; // 0x644 Eq
	if(var_482_bool == 0) goto Label_1621; // 0x645 JumpB
	var_483_string = ""; // 0x646 PushV
	var_483_string = "Neutral"; // 0x647 MovS
	func_742(var_20_bool, var_483_string); // 0x648 NEW_2
	var_484_int = 537018; // 0x64a PushI
	SetMessage(var_484_int); // 0x64b TObjFunc
	ClearReplies(); // 0x64d TObjFunc
	var_485_int = 537019; // 0x64f PushI
	var_486_int = 38859; // 0x650 PushI
	var_487_int = 38858; // 0x651 PushI
	AddReply(var_485_int, var_486_int, var_487_int); // 0x652 TObjFunc
	return 0; // 0x654 Return
	
Label_1621:
	var_488_int = 38859; // 0x655 PushI
	var_489_bool = var_19_object == var_488_int; // 0x656 Eq
	if(var_489_bool == 0) goto Label_1639; // 0x657 JumpB
	var_490_string = ""; // 0x658 PushV
	var_490_string = "Neutral"; // 0x659 MovS
	func_742(var_20_bool, var_490_string); // 0x65a NEW_2
	var_491_int = 537020; // 0x65c PushI
	SetMessage(var_491_int); // 0x65d TObjFunc
	ClearReplies(); // 0x65f TObjFunc
	var_492_int = 537021; // 0x661 PushI
	var_493_int = 38861; // 0x662 PushI
	var_494_int = 38860; // 0x663 PushI
	AddReply(var_492_int, var_493_int, var_494_int); // 0x664 TObjFunc
	return 0; // 0x666 Return
	
Label_1639:
	var_495_int = 38861; // 0x667 PushI
	var_496_bool = var_19_object == var_495_int; // 0x668 Eq
	if(var_496_bool == 0) goto Label_1662; // 0x669 JumpB
	var_497_string = ""; // 0x66a PushV
	var_497_string = "Neutral"; // 0x66b MovS
	func_742(var_20_bool, var_497_string); // 0x66c NEW_2
	var_498_int = 537022; // 0x66e PushI
	SetMessage(var_498_int); // 0x66f TObjFunc
	ClearReplies(); // 0x671 TObjFunc
	var_499_int = 537023; // 0x673 PushI
	var_500_int = -1; // 0x674 PushI
	var_501_int = 38862; // 0x675 PushI
	AddReply(var_499_int, var_500_int, var_501_int); // 0x676 TObjFunc
	var_502_int = 537024; // 0x678 PushI
	var_503_int = -1; // 0x679 PushI
	var_504_int = 38863; // 0x67a PushI
	AddReply(var_502_int, var_503_int, var_504_int); // 0x67b TObjFunc
	return 0; // 0x67d Return
	
Label_1662:
	var_505_int = 38846; // 0x67e PushI
	var_506_bool = var_19_object == var_505_int; // 0x67f Eq
	if(var_506_bool == 0) goto Label_1685; // 0x680 JumpB
	var_507_string = ""; // 0x681 PushV
	var_507_string = "Neutral"; // 0x682 MovS
	func_742(var_20_bool, var_507_string); // 0x683 NEW_2
	var_508_int = 537007; // 0x685 PushI
	SetMessage(var_508_int); // 0x686 TObjFunc
	ClearReplies(); // 0x688 TObjFunc
	var_509_int = 537008; // 0x68a PushI
	var_510_int = 38848; // 0x68b PushI
	var_511_int = 38847; // 0x68c PushI
	AddReply(var_509_int, var_510_int, var_511_int); // 0x68d TObjFunc
	var_512_int = 537016; // 0x68f PushI
	var_513_int = -1; // 0x690 PushI
	var_514_int = 38855; // 0x691 PushI
	AddReply(var_512_int, var_513_int, var_514_int); // 0x692 TObjFunc
	return 0; // 0x694 Return
	
Label_1685:
	var_515_int = 38848; // 0x695 PushI
	var_516_bool = var_19_object == var_515_int; // 0x696 Eq
	if(var_516_bool == 0) goto Label_1703; // 0x697 JumpB
	var_517_string = ""; // 0x698 PushV
	var_517_string = "Neutral"; // 0x699 MovS
	func_742(var_20_bool, var_517_string); // 0x69a NEW_2
	var_518_int = 537009; // 0x69c PushI
	SetMessage(var_518_int); // 0x69d TObjFunc
	ClearReplies(); // 0x69f TObjFunc
	var_519_int = 537010; // 0x6a1 PushI
	var_520_int = 38850; // 0x6a2 PushI
	var_521_int = 38849; // 0x6a3 PushI
	AddReply(var_519_int, var_520_int, var_521_int); // 0x6a4 TObjFunc
	return 0; // 0x6a6 Return
	
Label_1703:
	var_522_int = 38850; // 0x6a7 PushI
	var_523_bool = var_19_object == var_522_int; // 0x6a8 Eq
	if(var_523_bool == 0) goto Label_1721; // 0x6a9 JumpB
	var_524_string = ""; // 0x6aa PushV
	var_524_string = "Neutral"; // 0x6ab MovS
	func_742(var_20_bool, var_524_string); // 0x6ac NEW_2
	var_525_int = 537011; // 0x6ae PushI
	SetMessage(var_525_int); // 0x6af TObjFunc
	ClearReplies(); // 0x6b1 TObjFunc
	var_526_int = 537012; // 0x6b3 PushI
	var_527_int = 38852; // 0x6b4 PushI
	var_528_int = 38851; // 0x6b5 PushI
	AddReply(var_526_int, var_527_int, var_528_int); // 0x6b6 TObjFunc
	return 0; // 0x6b8 Return
	
Label_1721:
	var_529_int = 38852; // 0x6b9 PushI
	var_530_bool = var_19_object == var_529_int; // 0x6ba Eq
	if(var_530_bool == 0) goto Label_1744; // 0x6bb JumpB
	var_531_string = ""; // 0x6bc PushV
	var_531_string = "Neutral"; // 0x6bd MovS
	func_742(var_20_bool, var_531_string); // 0x6be NEW_2
	var_532_int = 537013; // 0x6c0 PushI
	SetMessage(var_532_int); // 0x6c1 TObjFunc
	ClearReplies(); // 0x6c3 TObjFunc
	var_533_int = 537014; // 0x6c5 PushI
	var_534_int = -1; // 0x6c6 PushI
	var_535_int = 38853; // 0x6c7 PushI
	AddReply(var_533_int, var_534_int, var_535_int); // 0x6c8 TObjFunc
	var_536_int = 537015; // 0x6ca PushI
	var_537_int = -1; // 0x6cb PushI
	var_538_int = 38854; // 0x6cc PushI
	AddReply(var_536_int, var_537_int, var_538_int); // 0x6cd TObjFunc
	return 0; // 0x6cf Return
	
Label_1744:
	var_539_int = 38832; // 0x6d0 PushI
	var_540_bool = var_19_object == var_539_int; // 0x6d1 Eq
	if(var_540_bool == 0) goto Label_1767; // 0x6d2 JumpB
	var_541_string = ""; // 0x6d3 PushV
	var_541_string = "Neutral"; // 0x6d4 MovS
	func_742(var_20_bool, var_541_string); // 0x6d5 NEW_2
	var_542_int = 536994; // 0x6d7 PushI
	SetMessage(var_542_int); // 0x6d8 TObjFunc
	ClearReplies(); // 0x6da TObjFunc
	var_543_int = 536995; // 0x6dc PushI
	var_544_int = 38834; // 0x6dd PushI
	var_545_int = 38833; // 0x6de PushI
	AddReply(var_543_int, var_544_int, var_545_int); // 0x6df TObjFunc
	var_546_int = 537005; // 0x6e1 PushI
	var_547_int = -1; // 0x6e2 PushI
	var_548_int = 38844; // 0x6e3 PushI
	AddReply(var_546_int, var_547_int, var_548_int); // 0x6e4 TObjFunc
	return 0; // 0x6e6 Return
	
Label_1767:
	var_549_int = 38834; // 0x6e7 PushI
	var_550_bool = var_19_object == var_549_int; // 0x6e8 Eq
	if(var_550_bool == 0) goto Label_1790; // 0x6e9 JumpB
	var_551_string = ""; // 0x6ea PushV
	var_551_string = "Neutral"; // 0x6eb MovS
	func_742(var_20_bool, var_551_string); // 0x6ec NEW_2
	var_552_int = 536996; // 0x6ee PushI
	SetMessage(var_552_int); // 0x6ef TObjFunc
	ClearReplies(); // 0x6f1 TObjFunc
	var_553_int = 536997; // 0x6f3 PushI
	var_554_int = 38836; // 0x6f4 PushI
	var_555_int = 38835; // 0x6f5 PushI
	AddReply(var_553_int, var_554_int, var_555_int); // 0x6f6 TObjFunc
	var_556_int = 537004; // 0x6f8 PushI
	var_557_int = -1; // 0x6f9 PushI
	var_558_int = 38843; // 0x6fa PushI
	AddReply(var_556_int, var_557_int, var_558_int); // 0x6fb TObjFunc
	return 0; // 0x6fd Return
	
Label_1790:
	var_559_int = 38836; // 0x6fe PushI
	var_560_bool = var_19_object == var_559_int; // 0x6ff Eq
	if(var_560_bool == 0) goto Label_1813; // 0x700 JumpB
	var_561_string = ""; // 0x701 PushV
	var_561_string = "Neutral"; // 0x702 MovS
	func_742(var_20_bool, var_561_string); // 0x703 NEW_2
	var_562_int = 536998; // 0x705 PushI
	SetMessage(var_562_int); // 0x706 TObjFunc
	ClearReplies(); // 0x708 TObjFunc
	var_563_int = 536999; // 0x70a PushI
	var_564_int = 38838; // 0x70b PushI
	var_565_int = 38837; // 0x70c PushI
	AddReply(var_563_int, var_564_int, var_565_int); // 0x70d TObjFunc
	var_566_int = 537003; // 0x70f PushI
	var_567_int = 38838; // 0x710 PushI
	var_568_int = 38841; // 0x711 PushI
	AddReply(var_566_int, var_567_int, var_568_int); // 0x712 TObjFunc
	return 0; // 0x714 Return
	
Label_1813:
	var_569_int = 38838; // 0x715 PushI
	var_570_bool = var_19_object == var_569_int; // 0x716 Eq
	if(var_570_bool == 0) goto Label_1836; // 0x717 JumpB
	var_571_string = ""; // 0x718 PushV
	var_571_string = "Neutral"; // 0x719 MovS
	func_742(var_20_bool, var_571_string); // 0x71a NEW_2
	var_572_int = 537000; // 0x71c PushI
	SetMessage(var_572_int); // 0x71d TObjFunc
	ClearReplies(); // 0x71f TObjFunc
	var_573_int = 537001; // 0x721 PushI
	var_574_int = -1; // 0x722 PushI
	var_575_int = 38839; // 0x723 PushI
	AddReply(var_573_int, var_574_int, var_575_int); // 0x724 TObjFunc
	var_576_int = 537002; // 0x726 PushI
	var_577_int = -1; // 0x727 PushI
	var_578_int = 38840; // 0x728 PushI
	AddReply(var_576_int, var_577_int, var_578_int); // 0x729 TObjFunc
	return 0; // 0x72b Return
	
Label_1836:
	var_579_int = 38817; // 0x72c PushI
	var_580_bool = var_19_object == var_579_int; // 0x72d Eq
	if(var_580_bool == 0) goto Label_1859; // 0x72e JumpB
	var_581_string = ""; // 0x72f PushV
	var_581_string = "Neutral"; // 0x730 MovS
	func_742(var_20_bool, var_581_string); // 0x731 NEW_2
	var_582_int = 536979; // 0x733 PushI
	SetMessage(var_582_int); // 0x734 TObjFunc
	ClearReplies(); // 0x736 TObjFunc
	var_583_int = 536980; // 0x738 PushI
	var_584_int = 38819; // 0x739 PushI
	var_585_int = 38818; // 0x73a PushI
	AddReply(var_583_int, var_584_int, var_585_int); // 0x73b TObjFunc
	var_586_int = 536992; // 0x73d PushI
	var_587_int = -1; // 0x73e PushI
	var_588_int = 38830; // 0x73f PushI
	AddReply(var_586_int, var_587_int, var_588_int); // 0x740 TObjFunc
	return 0; // 0x742 Return
	
Label_1859:
	var_589_int = 38819; // 0x743 PushI
	var_590_bool = var_19_object == var_589_int; // 0x744 Eq
	if(var_590_bool == 0) goto Label_1882; // 0x745 JumpB
	var_591_string = ""; // 0x746 PushV
	var_591_string = "Neutral"; // 0x747 MovS
	func_742(var_20_bool, var_591_string); // 0x748 NEW_2
	var_592_int = 536981; // 0x74a PushI
	SetMessage(var_592_int); // 0x74b TObjFunc
	ClearReplies(); // 0x74d TObjFunc
	var_593_int = 536982; // 0x74f PushI
	var_594_int = 38821; // 0x750 PushI
	var_595_int = 38820; // 0x751 PushI
	AddReply(var_593_int, var_594_int, var_595_int); // 0x752 TObjFunc
	var_596_int = 536991; // 0x754 PushI
	var_597_int = -1; // 0x755 PushI
	var_598_int = 38829; // 0x756 PushI
	AddReply(var_596_int, var_597_int, var_598_int); // 0x757 TObjFunc
	return 0; // 0x759 Return
	
Label_1882:
	var_599_int = 38821; // 0x75a PushI
	var_600_bool = var_19_object == var_599_int; // 0x75b Eq
	if(var_600_bool == 0) goto Label_1900; // 0x75c JumpB
	var_601_string = ""; // 0x75d PushV
	var_601_string = "Neutral"; // 0x75e MovS
	func_742(var_20_bool, var_601_string); // 0x75f NEW_2
	var_602_int = 536983; // 0x761 PushI
	SetMessage(var_602_int); // 0x762 TObjFunc
	ClearReplies(); // 0x764 TObjFunc
	var_603_int = 536984; // 0x766 PushI
	var_604_int = 38823; // 0x767 PushI
	var_605_int = 38822; // 0x768 PushI
	AddReply(var_603_int, var_604_int, var_605_int); // 0x769 TObjFunc
	return 0; // 0x76b Return
	
Label_1900:
	var_606_int = 38823; // 0x76c PushI
	var_607_bool = var_19_object == var_606_int; // 0x76d Eq
	if(var_607_bool == 0) goto Label_1923; // 0x76e JumpB
	var_608_string = ""; // 0x76f PushV
	var_608_string = "Neutral"; // 0x770 MovS
	func_742(var_20_bool, var_608_string); // 0x771 NEW_2
	var_609_int = 536985; // 0x773 PushI
	SetMessage(var_609_int); // 0x774 TObjFunc
	ClearReplies(); // 0x776 TObjFunc
	var_610_int = 536986; // 0x778 PushI
	var_611_int = 38825; // 0x779 PushI
	var_612_int = 38824; // 0x77a PushI
	AddReply(var_610_int, var_611_int, var_612_int); // 0x77b TObjFunc
	var_613_int = 536990; // 0x77d PushI
	var_614_int = -1; // 0x77e PushI
	var_615_int = 38828; // 0x77f PushI
	AddReply(var_613_int, var_614_int, var_615_int); // 0x780 TObjFunc
	return 0; // 0x782 Return
	
Label_1923:
	var_616_int = 38825; // 0x783 PushI
	var_617_bool = var_19_object == var_616_int; // 0x784 Eq
	if(var_617_bool == 0) goto Label_1946; // 0x785 JumpB
	var_618_string = ""; // 0x786 PushV
	var_618_string = "Neutral"; // 0x787 MovS
	func_742(var_20_bool, var_618_string); // 0x788 NEW_2
	var_619_int = 536987; // 0x78a PushI
	SetMessage(var_619_int); // 0x78b TObjFunc
	ClearReplies(); // 0x78d TObjFunc
	var_620_int = 536988; // 0x78f PushI
	var_621_int = -1; // 0x790 PushI
	var_622_int = 38826; // 0x791 PushI
	AddReply(var_620_int, var_621_int, var_622_int); // 0x792 TObjFunc
	var_623_int = 536989; // 0x794 PushI
	var_624_int = -1; // 0x795 PushI
	var_625_int = 38827; // 0x796 PushI
	AddReply(var_623_int, var_624_int, var_625_int); // 0x797 TObjFunc
	return 0; // 0x799 Return
	
Label_1946:
	var_626_int = 38800; // 0x79a PushI
	var_627_bool = var_19_object == var_626_int; // 0x79b Eq
	if(var_627_bool == 0) goto Label_1969; // 0x79c JumpB
	var_628_string = ""; // 0x79d PushV
	var_628_string = "Neutral"; // 0x79e MovS
	func_742(var_20_bool, var_628_string); // 0x79f NEW_2
	var_629_int = 536962; // 0x7a1 PushI
	SetMessage(var_629_int); // 0x7a2 TObjFunc
	ClearReplies(); // 0x7a4 TObjFunc
	var_630_int = 536963; // 0x7a6 PushI
	var_631_int = 38802; // 0x7a7 PushI
	var_632_int = 38801; // 0x7a8 PushI
	AddReply(var_630_int, var_631_int, var_632_int); // 0x7a9 TObjFunc
	var_633_int = 536971; // 0x7ab PushI
	var_634_int = 38810; // 0x7ac PushI
	var_635_int = 38809; // 0x7ad PushI
	AddReply(var_633_int, var_634_int, var_635_int); // 0x7ae TObjFunc
	return 0; // 0x7b0 Return
	
Label_1969:
	var_636_int = 38810; // 0x7b1 PushI
	var_637_bool = var_19_object == var_636_int; // 0x7b2 Eq
	if(var_637_bool == 0) goto Label_1997; // 0x7b3 JumpB
	var_638_string = ""; // 0x7b4 PushV
	var_638_string = "Neutral"; // 0x7b5 MovS
	func_742(var_20_bool, var_638_string); // 0x7b6 NEW_2
	var_639_int = 536972; // 0x7b8 PushI
	SetMessage(var_639_int); // 0x7b9 TObjFunc
	ClearReplies(); // 0x7bb TObjFunc
	var_640_int = 536973; // 0x7bd PushI
	var_641_int = 38812; // 0x7be PushI
	var_642_int = 38811; // 0x7bf PushI
	AddReply(var_640_int, var_641_int, var_642_int); // 0x7c0 TObjFunc
	var_643_int = 536976; // 0x7c2 PushI
	var_644_int = -1; // 0x7c3 PushI
	var_645_int = 38814; // 0x7c4 PushI
	AddReply(var_643_int, var_644_int, var_645_int); // 0x7c5 TObjFunc
	var_646_int = 536977; // 0x7c7 PushI
	var_647_int = -1; // 0x7c8 PushI
	var_648_int = 38815; // 0x7c9 PushI
	AddReply(var_646_int, var_647_int, var_648_int); // 0x7ca TObjFunc
	return 0; // 0x7cc Return
	
Label_1997:
	var_649_int = 38812; // 0x7cd PushI
	var_650_bool = var_19_object == var_649_int; // 0x7ce Eq
	if(var_650_bool == 0) goto Label_2015; // 0x7cf JumpB
	var_651_string = ""; // 0x7d0 PushV
	var_651_string = "Neutral"; // 0x7d1 MovS
	func_742(var_20_bool, var_651_string); // 0x7d2 NEW_2
	var_652_int = 536974; // 0x7d4 PushI
	SetMessage(var_652_int); // 0x7d5 TObjFunc
	ClearReplies(); // 0x7d7 TObjFunc
	var_653_int = 536975; // 0x7d9 PushI
	var_654_int = -1; // 0x7da PushI
	var_655_int = 38813; // 0x7db PushI
	AddReply(var_653_int, var_654_int, var_655_int); // 0x7dc TObjFunc
	return 0; // 0x7de Return
	
Label_2015:
	var_656_int = 38802; // 0x7df PushI
	var_657_bool = var_19_object == var_656_int; // 0x7e0 Eq
	if(var_657_bool == 0) goto Label_2033; // 0x7e1 JumpB
	var_658_string = ""; // 0x7e2 PushV
	var_658_string = "Neutral"; // 0x7e3 MovS
	func_742(var_20_bool, var_658_string); // 0x7e4 NEW_2
	var_659_int = 536964; // 0x7e6 PushI
	SetMessage(var_659_int); // 0x7e7 TObjFunc
	ClearReplies(); // 0x7e9 TObjFunc
	var_660_int = 536965; // 0x7eb PushI
	var_661_int = 38804; // 0x7ec PushI
	var_662_int = 38803; // 0x7ed PushI
	AddReply(var_660_int, var_661_int, var_662_int); // 0x7ee TObjFunc
	return 0; // 0x7f0 Return
	
Label_2033:
	var_663_int = 38804; // 0x7f1 PushI
	var_664_bool = var_19_object == var_663_int; // 0x7f2 Eq
	if(var_664_bool == 0) goto Label_2051; // 0x7f3 JumpB
	var_665_string = ""; // 0x7f4 PushV
	var_665_string = "Neutral"; // 0x7f5 MovS
	func_742(var_20_bool, var_665_string); // 0x7f6 NEW_2
	var_666_int = 536966; // 0x7f8 PushI
	SetMessage(var_666_int); // 0x7f9 TObjFunc
	ClearReplies(); // 0x7fb TObjFunc
	var_667_int = 536967; // 0x7fd PushI
	var_668_int = 38806; // 0x7fe PushI
	var_669_int = 38805; // 0x7ff PushI
	AddReply(var_667_int, var_668_int, var_669_int); // 0x800 TObjFunc
	return 0; // 0x802 Return
	
Label_2051:
	var_670_int = 38806; // 0x803 PushI
	var_671_bool = var_19_object == var_670_int; // 0x804 Eq
	if(var_671_bool == 0) goto Label_2074; // 0x805 JumpB
	var_672_string = ""; // 0x806 PushV
	var_672_string = "Neutral"; // 0x807 MovS
	func_742(var_20_bool, var_672_string); // 0x808 NEW_2
	var_673_int = 536968; // 0x80a PushI
	SetMessage(var_673_int); // 0x80b TObjFunc
	ClearReplies(); // 0x80d TObjFunc
	var_674_int = 536969; // 0x80f PushI
	var_675_int = -1; // 0x810 PushI
	var_676_int = 38807; // 0x811 PushI
	AddReply(var_674_int, var_675_int, var_676_int); // 0x812 TObjFunc
	var_677_int = 536970; // 0x814 PushI
	var_678_int = -1; // 0x815 PushI
	var_679_int = 38808; // 0x816 PushI
	AddReply(var_677_int, var_678_int, var_679_int); // 0x817 TObjFunc
	return 0; // 0x819 Return
	
Label_2074:
	var_680_int = 38782; // 0x81a PushI
	var_681_bool = var_19_object == var_680_int; // 0x81b Eq
	if(var_681_bool == 0) goto Label_2097; // 0x81c JumpB
	var_682_string = ""; // 0x81d PushV
	var_682_string = "Neutral"; // 0x81e MovS
	func_742(var_20_bool, var_682_string); // 0x81f NEW_2
	var_683_int = 536944; // 0x821 PushI
	SetMessage(var_683_int); // 0x822 TObjFunc
	ClearReplies(); // 0x824 TObjFunc
	var_684_int = 536945; // 0x826 PushI
	var_685_int = 38784; // 0x827 PushI
	var_686_int = 38783; // 0x828 PushI
	AddReply(var_684_int, var_685_int, var_686_int); // 0x829 TObjFunc
	var_687_int = 536960; // 0x82b PushI
	var_688_int = -1; // 0x82c PushI
	var_689_int = 38798; // 0x82d PushI
	AddReply(var_687_int, var_688_int, var_689_int); // 0x82e TObjFunc
	return 0; // 0x830 Return
	
Label_2097:
	var_690_int = 38784; // 0x831 PushI
	var_691_bool = var_19_object == var_690_int; // 0x832 Eq
	if(var_691_bool == 0) goto Label_2115; // 0x833 JumpB
	var_692_string = ""; // 0x834 PushV
	var_692_string = "Neutral"; // 0x835 MovS
	func_742(var_20_bool, var_692_string); // 0x836 NEW_2
	var_693_int = 536946; // 0x838 PushI
	SetMessage(var_693_int); // 0x839 TObjFunc
	ClearReplies(); // 0x83b TObjFunc
	var_694_int = 536947; // 0x83d PushI
	var_695_int = 38786; // 0x83e PushI
	var_696_int = 38785; // 0x83f PushI
	AddReply(var_694_int, var_695_int, var_696_int); // 0x840 TObjFunc
	return 0; // 0x842 Return
	
Label_2115:
	var_697_int = 38786; // 0x843 PushI
	var_698_bool = var_19_object == var_697_int; // 0x844 Eq
	if(var_698_bool == 0) goto Label_2143; // 0x845 JumpB
	var_699_string = ""; // 0x846 PushV
	var_699_string = "Neutral"; // 0x847 MovS
	func_742(var_20_bool, var_699_string); // 0x848 NEW_2
	var_700_int = 536948; // 0x84a PushI
	SetMessage(var_700_int); // 0x84b TObjFunc
	ClearReplies(); // 0x84d TObjFunc
	var_701_int = 536949; // 0x84f PushI
	var_702_int = 38788; // 0x850 PushI
	var_703_int = 38787; // 0x851 PushI
	AddReply(var_701_int, var_702_int, var_703_int); // 0x852 TObjFunc
	var_704_bool = 0; var_705_object = Obj(); // 0x854 PushV
	var_705_object = var_1_object; // 0x855 MovT
	func_6014(var_705_object); // 0x856 NEW_2
	if(var_704_bool == 0) goto Label_2142; // 0x858 JumpB
	var_706_int = 536957; // 0x859 PushI
	var_707_int = 38796; // 0x85a PushI
	var_708_int = 38795; // 0x85b PushI
	AddReply(var_706_int, var_707_int, var_708_int); // 0x85c TObjFunc
	
Label_2142:
	return 0; // 0x85e Return
	
Label_2143:
	var_709_int = 38796; // 0x85f PushI
	var_710_bool = var_19_object == var_709_int; // 0x860 Eq
	if(var_710_bool == 0) goto Label_2161; // 0x861 JumpB
	var_711_string = ""; // 0x862 PushV
	var_711_string = "Neutral"; // 0x863 MovS
	func_742(var_20_bool, var_711_string); // 0x864 NEW_2
	var_712_int = 536958; // 0x866 PushI
	SetMessage(var_712_int); // 0x867 TObjFunc
	ClearReplies(); // 0x869 TObjFunc
	var_713_int = 536959; // 0x86b PushI
	var_714_int = -1; // 0x86c PushI
	var_715_int = 38797; // 0x86d PushI
	AddReply(var_713_int, var_714_int, var_715_int); // 0x86e TObjFunc
	return 0; // 0x870 Return
	
Label_2161:
	var_716_int = 38788; // 0x871 PushI
	var_717_bool = var_19_object == var_716_int; // 0x872 Eq
	if(var_717_bool == 0) goto Label_2179; // 0x873 JumpB
	var_718_string = ""; // 0x874 PushV
	var_718_string = "Neutral"; // 0x875 MovS
	func_742(var_20_bool, var_718_string); // 0x876 NEW_2
	var_719_int = 536950; // 0x878 PushI
	SetMessage(var_719_int); // 0x879 TObjFunc
	ClearReplies(); // 0x87b TObjFunc
	var_720_int = 536951; // 0x87d PushI
	var_721_int = 38790; // 0x87e PushI
	var_722_int = 38789; // 0x87f PushI
	AddReply(var_720_int, var_721_int, var_722_int); // 0x880 TObjFunc
	return 0; // 0x882 Return
	
Label_2179:
	var_723_int = 38790; // 0x883 PushI
	var_724_bool = var_19_object == var_723_int; // 0x884 Eq
	if(var_724_bool == 0) goto Label_2202; // 0x885 JumpB
	var_725_string = ""; // 0x886 PushV
	var_725_string = "Neutral"; // 0x887 MovS
	func_742(var_20_bool, var_725_string); // 0x888 NEW_2
	var_726_int = 536952; // 0x88a PushI
	SetMessage(var_726_int); // 0x88b TObjFunc
	ClearReplies(); // 0x88d TObjFunc
	var_727_int = 536953; // 0x88f PushI
	var_728_int = 38792; // 0x890 PushI
	var_729_int = 38791; // 0x891 PushI
	AddReply(var_727_int, var_728_int, var_729_int); // 0x892 TObjFunc
	var_730_int = 536956; // 0x894 PushI
	var_731_int = -1; // 0x895 PushI
	var_732_int = 38794; // 0x896 PushI
	AddReply(var_730_int, var_731_int, var_732_int); // 0x897 TObjFunc
	return 0; // 0x899 Return
	
Label_2202:
	var_733_int = 38792; // 0x89a PushI
	var_734_bool = var_19_object == var_733_int; // 0x89b Eq
	if(var_734_bool == 0) goto Label_2220; // 0x89c JumpB
	var_735_string = ""; // 0x89d PushV
	var_735_string = "Neutral"; // 0x89e MovS
	func_742(var_20_bool, var_735_string); // 0x89f NEW_2
	var_736_int = 536954; // 0x8a1 PushI
	SetMessage(var_736_int); // 0x8a2 TObjFunc
	ClearReplies(); // 0x8a4 TObjFunc
	var_737_int = 536955; // 0x8a6 PushI
	var_738_int = -1; // 0x8a7 PushI
	var_739_int = 38793; // 0x8a8 PushI
	AddReply(var_737_int, var_738_int, var_739_int); // 0x8a9 TObjFunc
	return 0; // 0x8ab Return
	
Label_2220:
	var_740_int = 38770; // 0x8ac PushI
	var_741_bool = var_19_object == var_740_int; // 0x8ad Eq
	if(var_741_bool == 0) goto Label_2243; // 0x8ae JumpB
	var_742_string = ""; // 0x8af PushV
	var_742_string = "Neutral"; // 0x8b0 MovS
	func_742(var_20_bool, var_742_string); // 0x8b1 NEW_2
	var_743_int = 536932; // 0x8b3 PushI
	SetMessage(var_743_int); // 0x8b4 TObjFunc
	ClearReplies(); // 0x8b6 TObjFunc
	var_744_int = 536933; // 0x8b8 PushI
	var_745_int = 38772; // 0x8b9 PushI
	var_746_int = 38771; // 0x8ba PushI
	AddReply(var_744_int, var_745_int, var_746_int); // 0x8bb TObjFunc
	var_747_int = 536942; // 0x8bd PushI
	var_748_int = -1; // 0x8be PushI
	var_749_int = 38780; // 0x8bf PushI
	AddReply(var_747_int, var_748_int, var_749_int); // 0x8c0 TObjFunc
	return 0; // 0x8c2 Return
	
Label_2243:
	var_750_int = 38772; // 0x8c3 PushI
	var_751_bool = var_19_object == var_750_int; // 0x8c4 Eq
	if(var_751_bool == 0) goto Label_2261; // 0x8c5 JumpB
	var_752_string = ""; // 0x8c6 PushV
	var_752_string = "Neutral"; // 0x8c7 MovS
	func_742(var_20_bool, var_752_string); // 0x8c8 NEW_2
	var_753_int = 536934; // 0x8ca PushI
	SetMessage(var_753_int); // 0x8cb TObjFunc
	ClearReplies(); // 0x8cd TObjFunc
	var_754_int = 536935; // 0x8cf PushI
	var_755_int = 38774; // 0x8d0 PushI
	var_756_int = 38773; // 0x8d1 PushI
	AddReply(var_754_int, var_755_int, var_756_int); // 0x8d2 TObjFunc
	return 0; // 0x8d4 Return
	
Label_2261:
	var_757_int = 38774; // 0x8d5 PushI
	var_758_bool = var_19_object == var_757_int; // 0x8d6 Eq
	if(var_758_bool == 0) goto Label_2284; // 0x8d7 JumpB
	var_759_string = ""; // 0x8d8 PushV
	var_759_string = "Neutral"; // 0x8d9 MovS
	func_742(var_20_bool, var_759_string); // 0x8da NEW_2
	var_760_int = 536936; // 0x8dc PushI
	SetMessage(var_760_int); // 0x8dd TObjFunc
	ClearReplies(); // 0x8df TObjFunc
	var_761_int = 536937; // 0x8e1 PushI
	var_762_int = 38776; // 0x8e2 PushI
	var_763_int = 38775; // 0x8e3 PushI
	AddReply(var_761_int, var_762_int, var_763_int); // 0x8e4 TObjFunc
	var_764_int = 536941; // 0x8e6 PushI
	var_765_int = -1; // 0x8e7 PushI
	var_766_int = 38779; // 0x8e8 PushI
	AddReply(var_764_int, var_765_int, var_766_int); // 0x8e9 TObjFunc
	return 0; // 0x8eb Return
	
Label_2284:
	var_767_int = 38776; // 0x8ec PushI
	var_768_bool = var_19_object == var_767_int; // 0x8ed Eq
	if(var_768_bool == 0) goto Label_2307; // 0x8ee JumpB
	var_769_string = ""; // 0x8ef PushV
	var_769_string = "Neutral"; // 0x8f0 MovS
	func_742(var_20_bool, var_769_string); // 0x8f1 NEW_2
	var_770_int = 536938; // 0x8f3 PushI
	SetMessage(var_770_int); // 0x8f4 TObjFunc
	ClearReplies(); // 0x8f6 TObjFunc
	var_771_int = 536939; // 0x8f8 PushI
	var_772_int = -1; // 0x8f9 PushI
	var_773_int = 38777; // 0x8fa PushI
	AddReply(var_771_int, var_772_int, var_773_int); // 0x8fb TObjFunc
	var_774_int = 536940; // 0x8fd PushI
	var_775_int = -1; // 0x8fe PushI
	var_776_int = 38778; // 0x8ff PushI
	AddReply(var_774_int, var_775_int, var_776_int); // 0x900 TObjFunc
	return 0; // 0x902 Return
	
Label_2307:
	var_777_int = 38755; // 0x903 PushI
	var_778_bool = var_19_object == var_777_int; // 0x904 Eq
	if(var_778_bool == 0) goto Label_2335; // 0x905 JumpB
	var_779_string = ""; // 0x906 PushV
	var_779_string = "Neutral"; // 0x907 MovS
	func_742(var_20_bool, var_779_string); // 0x908 NEW_2
	var_780_int = 536917; // 0x90a PushI
	SetMessage(var_780_int); // 0x90b TObjFunc
	ClearReplies(); // 0x90d TObjFunc
	var_781_int = 536918; // 0x90f PushI
	var_782_int = 38757; // 0x910 PushI
	var_783_int = 38756; // 0x911 PushI
	AddReply(var_781_int, var_782_int, var_783_int); // 0x912 TObjFunc
	var_784_bool = 0; var_785_object = Obj(); // 0x914 PushV
	var_785_object = var_1_object; // 0x915 MovT
	func_6014(var_785_object); // 0x916 NEW_2
	if(var_784_bool == 0) goto Label_2334; // 0x918 JumpB
	var_786_int = 536930; // 0x919 PushI
	var_787_int = -1; // 0x91a PushI
	var_788_int = 38768; // 0x91b PushI
	AddReply(var_786_int, var_787_int, var_788_int); // 0x91c TObjFunc
	
Label_2334:
	return 0; // 0x91e Return
	
Label_2335:
	var_789_int = 38757; // 0x91f PushI
	var_790_bool = var_19_object == var_789_int; // 0x920 Eq
	if(var_790_bool == 0) goto Label_2358; // 0x921 JumpB
	var_791_string = ""; // 0x922 PushV
	var_791_string = "Neutral"; // 0x923 MovS
	func_742(var_20_bool, var_791_string); // 0x924 NEW_2
	var_792_int = 536919; // 0x926 PushI
	SetMessage(var_792_int); // 0x927 TObjFunc
	ClearReplies(); // 0x929 TObjFunc
	var_793_int = 536920; // 0x92b PushI
	var_794_int = 38759; // 0x92c PushI
	var_795_int = 38758; // 0x92d PushI
	AddReply(var_793_int, var_794_int, var_795_int); // 0x92e TObjFunc
	var_796_int = 536929; // 0x930 PushI
	var_797_int = -1; // 0x931 PushI
	var_798_int = 38767; // 0x932 PushI
	AddReply(var_796_int, var_797_int, var_798_int); // 0x933 TObjFunc
	return 0; // 0x935 Return
	
Label_2358:
	var_799_int = 38759; // 0x936 PushI
	var_800_bool = var_19_object == var_799_int; // 0x937 Eq
	if(var_800_bool == 0) goto Label_2386; // 0x938 JumpB
	var_801_string = ""; // 0x939 PushV
	var_801_string = "Neutral"; // 0x93a MovS
	func_742(var_20_bool, var_801_string); // 0x93b NEW_2
	var_802_int = 536921; // 0x93d PushI
	SetMessage(var_802_int); // 0x93e TObjFunc
	ClearReplies(); // 0x940 TObjFunc
	var_803_bool = 0; var_804_object = Obj(); // 0x942 PushV
	var_804_object = var_1_object; // 0x943 MovT
	func_6014(var_804_object); // 0x944 NEW_2
	if(var_803_bool == 0) goto Label_2380; // 0x946 JumpB
	var_805_int = 536922; // 0x947 PushI
	var_806_int = 38761; // 0x948 PushI
	var_807_int = 38760; // 0x949 PushI
	AddReply(var_805_int, var_806_int, var_807_int); // 0x94a TObjFunc
	
Label_2380:
	var_808_int = 536926; // 0x94c PushI
	var_809_int = 38765; // 0x94d PushI
	var_810_int = 38764; // 0x94e PushI
	AddReply(var_808_int, var_809_int, var_810_int); // 0x94f TObjFunc
	return 0; // 0x951 Return
	
Label_2386:
	var_811_int = 38765; // 0x952 PushI
	var_812_bool = var_19_object == var_811_int; // 0x953 Eq
	if(var_812_bool == 0) goto Label_2404; // 0x954 JumpB
	var_813_string = ""; // 0x955 PushV
	var_813_string = "Neutral"; // 0x956 MovS
	func_742(var_20_bool, var_813_string); // 0x957 NEW_2
	var_814_int = 536927; // 0x959 PushI
	SetMessage(var_814_int); // 0x95a TObjFunc
	ClearReplies(); // 0x95c TObjFunc
	var_815_int = 536928; // 0x95e PushI
	var_816_int = -1; // 0x95f PushI
	var_817_int = 38766; // 0x960 PushI
	AddReply(var_815_int, var_816_int, var_817_int); // 0x961 TObjFunc
	return 0; // 0x963 Return
	
Label_2404:
	var_818_int = 38761; // 0x964 PushI
	var_819_bool = var_19_object == var_818_int; // 0x965 Eq
	if(var_819_bool == 0) goto Label_2427; // 0x966 JumpB
	var_820_string = ""; // 0x967 PushV
	var_820_string = "Neutral"; // 0x968 MovS
	func_742(var_20_bool, var_820_string); // 0x969 NEW_2
	var_821_int = 536923; // 0x96b PushI
	SetMessage(var_821_int); // 0x96c TObjFunc
	ClearReplies(); // 0x96e TObjFunc
	var_822_int = 536924; // 0x970 PushI
	var_823_int = -1; // 0x971 PushI
	var_824_int = 38762; // 0x972 PushI
	AddReply(var_822_int, var_823_int, var_824_int); // 0x973 TObjFunc
	var_825_int = 536925; // 0x975 PushI
	var_826_int = -1; // 0x976 PushI
	var_827_int = 38763; // 0x977 PushI
	AddReply(var_825_int, var_826_int, var_827_int); // 0x978 TObjFunc
	return 0; // 0x97a Return
	
Label_2427:
	var_828_int = 38743; // 0x97b PushI
	var_829_bool = var_19_object == var_828_int; // 0x97c Eq
	if(var_829_bool == 0) goto Label_2445; // 0x97d JumpB
	var_830_string = ""; // 0x97e PushV
	var_830_string = "Neutral"; // 0x97f MovS
	func_742(var_20_bool, var_830_string); // 0x980 NEW_2
	var_831_int = 536905; // 0x982 PushI
	SetMessage(var_831_int); // 0x983 TObjFunc
	ClearReplies(); // 0x985 TObjFunc
	var_832_int = 536906; // 0x987 PushI
	var_833_int = 38745; // 0x988 PushI
	var_834_int = 38744; // 0x989 PushI
	AddReply(var_832_int, var_833_int, var_834_int); // 0x98a TObjFunc
	return 0; // 0x98c Return
	
Label_2445:
	var_835_int = 38745; // 0x98d PushI
	var_836_bool = var_19_object == var_835_int; // 0x98e Eq
	if(var_836_bool == 0) goto Label_2473; // 0x98f JumpB
	var_837_string = ""; // 0x990 PushV
	var_837_string = "Neutral"; // 0x991 MovS
	func_742(var_20_bool, var_837_string); // 0x992 NEW_2
	var_838_int = 536907; // 0x994 PushI
	SetMessage(var_838_int); // 0x995 TObjFunc
	ClearReplies(); // 0x997 TObjFunc
	var_839_int = 536908; // 0x999 PushI
	var_840_int = 38747; // 0x99a PushI
	var_841_int = 38746; // 0x99b PushI
	AddReply(var_839_int, var_840_int, var_841_int); // 0x99c TObjFunc
	var_842_bool = 0; var_843_object = Obj(); // 0x99e PushV
	var_843_object = var_1_object; // 0x99f MovT
	func_6014(var_843_object); // 0x9a0 NEW_2
	if(var_842_bool == 0) goto Label_2472; // 0x9a2 JumpB
	var_844_int = 536912; // 0x9a3 PushI
	var_845_int = 38751; // 0x9a4 PushI
	var_846_int = 38750; // 0x9a5 PushI
	AddReply(var_844_int, var_845_int, var_846_int); // 0x9a6 TObjFunc
	
Label_2472:
	return 0; // 0x9a8 Return
	
Label_2473:
	var_847_int = 38751; // 0x9a9 PushI
	var_848_bool = var_19_object == var_847_int; // 0x9aa Eq
	if(var_848_bool == 0) goto Label_2496; // 0x9ab JumpB
	var_849_string = ""; // 0x9ac PushV
	var_849_string = "Neutral"; // 0x9ad MovS
	func_742(var_20_bool, var_849_string); // 0x9ae NEW_2
	var_850_int = 536913; // 0x9b0 PushI
	SetMessage(var_850_int); // 0x9b1 TObjFunc
	ClearReplies(); // 0x9b3 TObjFunc
	var_851_int = 536914; // 0x9b5 PushI
	var_852_int = -1; // 0x9b6 PushI
	var_853_int = 38752; // 0x9b7 PushI
	AddReply(var_851_int, var_852_int, var_853_int); // 0x9b8 TObjFunc
	var_854_int = 536915; // 0x9ba PushI
	var_855_int = -1; // 0x9bb PushI
	var_856_int = 38753; // 0x9bc PushI
	AddReply(var_854_int, var_855_int, var_856_int); // 0x9bd TObjFunc
	return 0; // 0x9bf Return
	
Label_2496:
	var_857_int = 38747; // 0x9c0 PushI
	var_858_bool = var_19_object == var_857_int; // 0x9c1 Eq
	if(var_858_bool == 0) goto Label_2519; // 0x9c2 JumpB
	var_859_string = ""; // 0x9c3 PushV
	var_859_string = "Neutral"; // 0x9c4 MovS
	func_742(var_20_bool, var_859_string); // 0x9c5 NEW_2
	var_860_int = 536909; // 0x9c7 PushI
	SetMessage(var_860_int); // 0x9c8 TObjFunc
	ClearReplies(); // 0x9ca TObjFunc
	var_861_int = 536910; // 0x9cc PushI
	var_862_int = -1; // 0x9cd PushI
	var_863_int = 38748; // 0x9ce PushI
	AddReply(var_861_int, var_862_int, var_863_int); // 0x9cf TObjFunc
	var_864_int = 536911; // 0x9d1 PushI
	var_865_int = -1; // 0x9d2 PushI
	var_866_int = 38749; // 0x9d3 PushI
	AddReply(var_864_int, var_865_int, var_866_int); // 0x9d4 TObjFunc
	return 0; // 0x9d6 Return
	
Label_2519:
	var_867_int = 38724; // 0x9d7 PushI
	var_868_bool = var_19_object == var_867_int; // 0x9d8 Eq
	if(var_868_bool == 0) goto Label_2542; // 0x9d9 JumpB
	var_869_string = ""; // 0x9da PushV
	var_869_string = "Neutral"; // 0x9db MovS
	func_742(var_20_bool, var_869_string); // 0x9dc NEW_2
	var_870_int = 536886; // 0x9de PushI
	SetMessage(var_870_int); // 0x9df TObjFunc
	ClearReplies(); // 0x9e1 TObjFunc
	var_871_int = 536887; // 0x9e3 PushI
	var_872_int = 38726; // 0x9e4 PushI
	var_873_int = 38725; // 0x9e5 PushI
	AddReply(var_871_int, var_872_int, var_873_int); // 0x9e6 TObjFunc
	var_874_int = 536901; // 0x9e8 PushI
	var_875_int = 38740; // 0x9e9 PushI
	var_876_int = 38739; // 0x9ea PushI
	AddReply(var_874_int, var_875_int, var_876_int); // 0x9eb TObjFunc
	return 0; // 0x9ed Return
	
Label_2542:
	var_877_int = 38740; // 0x9ee PushI
	var_878_bool = var_19_object == var_877_int; // 0x9ef Eq
	if(var_878_bool == 0) goto Label_2560; // 0x9f0 JumpB
	var_879_string = ""; // 0x9f1 PushV
	var_879_string = "Neutral"; // 0x9f2 MovS
	func_742(var_20_bool, var_879_string); // 0x9f3 NEW_2
	var_880_int = 536902; // 0x9f5 PushI
	SetMessage(var_880_int); // 0x9f6 TObjFunc
	ClearReplies(); // 0x9f8 TObjFunc
	var_881_int = 536903; // 0x9fa PushI
	var_882_int = -1; // 0x9fb PushI
	var_883_int = 38741; // 0x9fc PushI
	AddReply(var_881_int, var_882_int, var_883_int); // 0x9fd TObjFunc
	return 0; // 0x9ff Return
	
Label_2560:
	var_884_int = 38726; // 0xa00 PushI
	var_885_bool = var_19_object == var_884_int; // 0xa01 Eq
	if(var_885_bool == 0) goto Label_2578; // 0xa02 JumpB
	var_886_string = ""; // 0xa03 PushV
	var_886_string = "Neutral"; // 0xa04 MovS
	func_742(var_20_bool, var_886_string); // 0xa05 NEW_2
	var_887_int = 536888; // 0xa07 PushI
	SetMessage(var_887_int); // 0xa08 TObjFunc
	ClearReplies(); // 0xa0a TObjFunc
	var_888_int = 536889; // 0xa0c PushI
	var_889_int = 38728; // 0xa0d PushI
	var_890_int = 38727; // 0xa0e PushI
	AddReply(var_888_int, var_889_int, var_890_int); // 0xa0f TObjFunc
	return 0; // 0xa11 Return
	
Label_2578:
	var_891_int = 38728; // 0xa12 PushI
	var_892_bool = var_19_object == var_891_int; // 0xa13 Eq
	if(var_892_bool == 0) goto Label_2601; // 0xa14 JumpB
	var_893_string = ""; // 0xa15 PushV
	var_893_string = "Neutral"; // 0xa16 MovS
	func_742(var_20_bool, var_893_string); // 0xa17 NEW_2
	var_894_int = 536890; // 0xa19 PushI
	SetMessage(var_894_int); // 0xa1a TObjFunc
	ClearReplies(); // 0xa1c TObjFunc
	var_895_int = 536891; // 0xa1e PushI
	var_896_int = 38730; // 0xa1f PushI
	var_897_int = 38729; // 0xa20 PushI
	AddReply(var_895_int, var_896_int, var_897_int); // 0xa21 TObjFunc
	var_898_int = 536900; // 0xa23 PushI
	var_899_int = -1; // 0xa24 PushI
	var_900_int = 38738; // 0xa25 PushI
	AddReply(var_898_int, var_899_int, var_900_int); // 0xa26 TObjFunc
	return 0; // 0xa28 Return
	
Label_2601:
	var_901_int = 38730; // 0xa29 PushI
	var_902_bool = var_19_object == var_901_int; // 0xa2a Eq
	if(var_902_bool == 0) goto Label_2629; // 0xa2b JumpB
	var_903_string = ""; // 0xa2c PushV
	var_903_string = "Neutral"; // 0xa2d MovS
	func_742(var_20_bool, var_903_string); // 0xa2e NEW_2
	var_904_int = 536892; // 0xa30 PushI
	SetMessage(var_904_int); // 0xa31 TObjFunc
	ClearReplies(); // 0xa33 TObjFunc
	var_905_bool = 0; var_906_object = Obj(); // 0xa35 PushV
	var_906_object = var_1_object; // 0xa36 MovT
	func_6014(var_906_object); // 0xa37 NEW_2
	if(var_905_bool == 0) goto Label_2623; // 0xa39 JumpB
	var_907_int = 536893; // 0xa3a PushI
	var_908_int = 38732; // 0xa3b PushI
	var_909_int = 38731; // 0xa3c PushI
	AddReply(var_907_int, var_908_int, var_909_int); // 0xa3d TObjFunc
	
Label_2623:
	var_910_int = 536899; // 0xa3f PushI
	var_911_int = -1; // 0xa40 PushI
	var_912_int = 38737; // 0xa41 PushI
	AddReply(var_910_int, var_911_int, var_912_int); // 0xa42 TObjFunc
	return 0; // 0xa44 Return
	
Label_2629:
	var_913_int = 38732; // 0xa45 PushI
	var_914_bool = var_19_object == var_913_int; // 0xa46 Eq
	if(var_914_bool == 0) goto Label_2652; // 0xa47 JumpB
	var_915_string = ""; // 0xa48 PushV
	var_915_string = "Neutral"; // 0xa49 MovS
	func_742(var_20_bool, var_915_string); // 0xa4a NEW_2
	var_916_int = 536894; // 0xa4c PushI
	SetMessage(var_916_int); // 0xa4d TObjFunc
	ClearReplies(); // 0xa4f TObjFunc
	var_917_int = 536895; // 0xa51 PushI
	var_918_int = 38734; // 0xa52 PushI
	var_919_int = 38733; // 0xa53 PushI
	AddReply(var_917_int, var_918_int, var_919_int); // 0xa54 TObjFunc
	var_920_int = 536898; // 0xa56 PushI
	var_921_int = -1; // 0xa57 PushI
	var_922_int = 38736; // 0xa58 PushI
	AddReply(var_920_int, var_921_int, var_922_int); // 0xa59 TObjFunc
	return 0; // 0xa5b Return
	
Label_2652:
	var_923_int = 38734; // 0xa5c PushI
	var_924_bool = var_19_object == var_923_int; // 0xa5d Eq
	if(var_924_bool == 0) goto Label_2670; // 0xa5e JumpB
	var_925_string = ""; // 0xa5f PushV
	var_925_string = "Neutral"; // 0xa60 MovS
	func_742(var_20_bool, var_925_string); // 0xa61 NEW_2
	var_926_int = 536896; // 0xa63 PushI
	SetMessage(var_926_int); // 0xa64 TObjFunc
	ClearReplies(); // 0xa66 TObjFunc
	var_927_int = 536897; // 0xa68 PushI
	var_928_int = -1; // 0xa69 PushI
	var_929_int = 38735; // 0xa6a PushI
	AddReply(var_927_int, var_928_int, var_929_int); // 0xa6b TObjFunc
	return 0; // 0xa6d Return
	
Label_2670:
	var_930_int = 38709; // 0xa6e PushI
	var_931_bool = var_19_object == var_930_int; // 0xa6f Eq
	if(var_931_bool == 0) goto Label_2693; // 0xa70 JumpB
	var_932_string = ""; // 0xa71 PushV
	var_932_string = "Neutral"; // 0xa72 MovS
	func_742(var_20_bool, var_932_string); // 0xa73 NEW_2
	var_933_int = 536871; // 0xa75 PushI
	SetMessage(var_933_int); // 0xa76 TObjFunc
	ClearReplies(); // 0xa78 TObjFunc
	var_934_int = 536872; // 0xa7a PushI
	var_935_int = 38711; // 0xa7b PushI
	var_936_int = 38710; // 0xa7c PushI
	AddReply(var_934_int, var_935_int, var_936_int); // 0xa7d TObjFunc
	var_937_int = 536882; // 0xa7f PushI
	var_938_int = 38721; // 0xa80 PushI
	var_939_int = 38720; // 0xa81 PushI
	AddReply(var_937_int, var_938_int, var_939_int); // 0xa82 TObjFunc
	return 0; // 0xa84 Return
	
Label_2693:
	var_940_int = 38721; // 0xa85 PushI
	var_941_bool = var_19_object == var_940_int; // 0xa86 Eq
	if(var_941_bool == 0) goto Label_2711; // 0xa87 JumpB
	var_942_string = ""; // 0xa88 PushV
	var_942_string = "Neutral"; // 0xa89 MovS
	func_742(var_20_bool, var_942_string); // 0xa8a NEW_2
	var_943_int = 536883; // 0xa8c PushI
	SetMessage(var_943_int); // 0xa8d TObjFunc
	ClearReplies(); // 0xa8f TObjFunc
	var_944_int = 536884; // 0xa91 PushI
	var_945_int = -1; // 0xa92 PushI
	var_946_int = 38722; // 0xa93 PushI
	AddReply(var_944_int, var_945_int, var_946_int); // 0xa94 TObjFunc
	return 0; // 0xa96 Return
	
Label_2711:
	var_947_int = 38711; // 0xa97 PushI
	var_948_bool = var_19_object == var_947_int; // 0xa98 Eq
	if(var_948_bool == 0) goto Label_2734; // 0xa99 JumpB
	var_949_string = ""; // 0xa9a PushV
	var_949_string = "Neutral"; // 0xa9b MovS
	func_742(var_20_bool, var_949_string); // 0xa9c NEW_2
	var_950_int = 536873; // 0xa9e PushI
	SetMessage(var_950_int); // 0xa9f TObjFunc
	ClearReplies(); // 0xaa1 TObjFunc
	var_951_int = 536874; // 0xaa3 PushI
	var_952_int = 38713; // 0xaa4 PushI
	var_953_int = 38712; // 0xaa5 PushI
	AddReply(var_951_int, var_952_int, var_953_int); // 0xaa6 TObjFunc
	var_954_int = 536881; // 0xaa8 PushI
	var_955_int = -1; // 0xaa9 PushI
	var_956_int = 38719; // 0xaaa PushI
	AddReply(var_954_int, var_955_int, var_956_int); // 0xaab TObjFunc
	return 0; // 0xaad Return
	
Label_2734:
	var_957_int = 38713; // 0xaae PushI
	var_958_bool = var_19_object == var_957_int; // 0xaaf Eq
	if(var_958_bool == 0) goto Label_2762; // 0xab0 JumpB
	var_959_string = ""; // 0xab1 PushV
	var_959_string = "Neutral"; // 0xab2 MovS
	func_742(var_20_bool, var_959_string); // 0xab3 NEW_2
	var_960_int = 536875; // 0xab5 PushI
	SetMessage(var_960_int); // 0xab6 TObjFunc
	ClearReplies(); // 0xab8 TObjFunc
	var_961_int = 536876; // 0xaba PushI
	var_962_int = 38715; // 0xabb PushI
	var_963_int = 38714; // 0xabc PushI
	AddReply(var_961_int, var_962_int, var_963_int); // 0xabd TObjFunc
	var_964_bool = 0; var_965_object = Obj(); // 0xabf PushV
	var_965_object = var_1_object; // 0xac0 MovT
	func_6014(var_965_object); // 0xac1 NEW_2
	if(var_964_bool == 0) goto Label_2761; // 0xac3 JumpB
	var_966_int = 536880; // 0xac4 PushI
	var_967_int = -1; // 0xac5 PushI
	var_968_int = 38718; // 0xac6 PushI
	AddReply(var_966_int, var_967_int, var_968_int); // 0xac7 TObjFunc
	
Label_2761:
	return 0; // 0xac9 Return
	
Label_2762:
	var_969_int = 38715; // 0xaca PushI
	var_970_bool = var_19_object == var_969_int; // 0xacb Eq
	if(var_970_bool == 0) goto Label_2785; // 0xacc JumpB
	var_971_string = ""; // 0xacd PushV
	var_971_string = "Neutral"; // 0xace MovS
	func_742(var_20_bool, var_971_string); // 0xacf NEW_2
	var_972_int = 536877; // 0xad1 PushI
	SetMessage(var_972_int); // 0xad2 TObjFunc
	ClearReplies(); // 0xad4 TObjFunc
	var_973_int = 536878; // 0xad6 PushI
	var_974_int = -1; // 0xad7 PushI
	var_975_int = 38716; // 0xad8 PushI
	AddReply(var_973_int, var_974_int, var_975_int); // 0xad9 TObjFunc
	var_976_int = 536879; // 0xadb PushI
	var_977_int = -1; // 0xadc PushI
	var_978_int = 38717; // 0xadd PushI
	AddReply(var_976_int, var_977_int, var_978_int); // 0xade TObjFunc
	return 0; // 0xae0 Return
	
Label_2785:
	var_979_int = 38693; // 0xae1 PushI
	var_980_bool = var_19_object == var_979_int; // 0xae2 Eq
	if(var_980_bool == 0) goto Label_2808; // 0xae3 JumpB
	var_981_string = ""; // 0xae4 PushV
	var_981_string = "Neutral"; // 0xae5 MovS
	func_742(var_20_bool, var_981_string); // 0xae6 NEW_2
	var_982_int = 536857; // 0xae8 PushI
	SetMessage(var_982_int); // 0xae9 TObjFunc
	ClearReplies(); // 0xaeb TObjFunc
	var_983_int = 536858; // 0xaed PushI
	var_984_int = 38695; // 0xaee PushI
	var_985_int = 38694; // 0xaef PushI
	AddReply(var_983_int, var_984_int, var_985_int); // 0xaf0 TObjFunc
	var_986_int = 536867; // 0xaf2 PushI
	var_987_int = 38705; // 0xaf3 PushI
	var_988_int = 38704; // 0xaf4 PushI
	AddReply(var_986_int, var_987_int, var_988_int); // 0xaf5 TObjFunc
	return 0; // 0xaf7 Return
	
Label_2808:
	var_989_int = 38705; // 0xaf8 PushI
	var_990_bool = var_19_object == var_989_int; // 0xaf9 Eq
	if(var_990_bool == 0) goto Label_2826; // 0xafa JumpB
	var_991_string = ""; // 0xafb PushV
	var_991_string = "Neutral"; // 0xafc MovS
	func_742(var_20_bool, var_991_string); // 0xafd NEW_2
	var_992_int = 536868; // 0xaff PushI
	SetMessage(var_992_int); // 0xb00 TObjFunc
	ClearReplies(); // 0xb02 TObjFunc
	var_993_int = 536869; // 0xb04 PushI
	var_994_int = 38697; // 0xb05 PushI
	var_995_int = 38706; // 0xb06 PushI
	AddReply(var_993_int, var_994_int, var_995_int); // 0xb07 TObjFunc
	return 0; // 0xb09 Return
	
Label_2826:
	var_996_int = 38695; // 0xb0a PushI
	var_997_bool = var_19_object == var_996_int; // 0xb0b Eq
	if(var_997_bool == 0) goto Label_2849; // 0xb0c JumpB
	var_998_string = ""; // 0xb0d PushV
	var_998_string = "Neutral"; // 0xb0e MovS
	func_742(var_20_bool, var_998_string); // 0xb0f NEW_2
	var_999_int = 536859; // 0xb11 PushI
	SetMessage(var_999_int); // 0xb12 TObjFunc
	ClearReplies(); // 0xb14 TObjFunc
	var_1000_int = 536860; // 0xb16 PushI
	var_1001_int = 38697; // 0xb17 PushI
	var_1002_int = 38696; // 0xb18 PushI
	AddReply(var_1000_int, var_1001_int, var_1002_int); // 0xb19 TObjFunc
	var_1003_int = 536864; // 0xb1b PushI
	var_1004_int = 38701; // 0xb1c PushI
	var_1005_int = 38700; // 0xb1d PushI
	AddReply(var_1003_int, var_1004_int, var_1005_int); // 0xb1e TObjFunc
	return 0; // 0xb20 Return
	
Label_2849:
	var_1006_int = 38701; // 0xb21 PushI
	var_1007_bool = var_19_object == var_1006_int; // 0xb22 Eq
	if(var_1007_bool == 0) goto Label_2867; // 0xb23 JumpB
	var_1008_string = ""; // 0xb24 PushV
	var_1008_string = "Neutral"; // 0xb25 MovS
	func_742(var_20_bool, var_1008_string); // 0xb26 NEW_2
	var_1009_int = 536865; // 0xb28 PushI
	SetMessage(var_1009_int); // 0xb29 TObjFunc
	ClearReplies(); // 0xb2b TObjFunc
	var_1010_int = 536866; // 0xb2d PushI
	var_1011_int = 38697; // 0xb2e PushI
	var_1012_int = 38702; // 0xb2f PushI
	AddReply(var_1010_int, var_1011_int, var_1012_int); // 0xb30 TObjFunc
	return 0; // 0xb32 Return
	
Label_2867:
	var_1013_int = 38697; // 0xb33 PushI
	var_1014_bool = var_19_object == var_1013_int; // 0xb34 Eq
	if(var_1014_bool == 0) goto Label_2890; // 0xb35 JumpB
	var_1015_string = ""; // 0xb36 PushV
	var_1015_string = "Neutral"; // 0xb37 MovS
	func_742(var_20_bool, var_1015_string); // 0xb38 NEW_2
	var_1016_int = 536861; // 0xb3a PushI
	SetMessage(var_1016_int); // 0xb3b TObjFunc
	ClearReplies(); // 0xb3d TObjFunc
	var_1017_int = 536862; // 0xb3f PushI
	var_1018_int = -1; // 0xb40 PushI
	var_1019_int = 38698; // 0xb41 PushI
	AddReply(var_1017_int, var_1018_int, var_1019_int); // 0xb42 TObjFunc
	var_1020_int = 536863; // 0xb44 PushI
	var_1021_int = -1; // 0xb45 PushI
	var_1022_int = 38699; // 0xb46 PushI
	AddReply(var_1020_int, var_1021_int, var_1022_int); // 0xb47 TObjFunc
	return 0; // 0xb49 Return
	
Label_2890:
	var_1023_int = 45595; // 0xb4a PushI
	var_1024_bool = var_19_object == var_1023_int; // 0xb4b Eq
	if(var_1024_bool == 0) goto Label_2918; // 0xb4c JumpB
	var_1025_string = ""; // 0xb4d PushV
	var_1025_string = "Neutral"; // 0xb4e MovS
	func_742(var_20_bool, var_1025_string); // 0xb4f NEW_2
	var_1026_int = 543140; // 0xb51 PushI
	SetMessage(var_1026_int); // 0xb52 TObjFunc
	ClearReplies(); // 0xb54 TObjFunc
	var_1027_int = 543141; // 0xb56 PushI
	var_1028_int = -1; // 0xb57 PushI
	var_1029_int = 45596; // 0xb58 PushI
	AddReply(var_1027_int, var_1028_int, var_1029_int); // 0xb59 TObjFunc
	var_1030_int = 543142; // 0xb5b PushI
	var_1031_int = -1; // 0xb5c PushI
	var_1032_int = 45597; // 0xb5d PushI
	AddReply(var_1030_int, var_1031_int, var_1032_int); // 0xb5e TObjFunc
	var_1033_int = 543143; // 0xb60 PushI
	var_1034_int = 45599; // 0xb61 PushI
	var_1035_int = 45598; // 0xb62 PushI
	AddReply(var_1033_int, var_1034_int, var_1035_int); // 0xb63 TObjFunc
	return 0; // 0xb65 Return
	
Label_2918:
	var_1036_int = 45599; // 0xb66 PushI
	var_1037_bool = var_19_object == var_1036_int; // 0xb67 Eq
	if(var_1037_bool == 0) goto Label_2941; // 0xb68 JumpB
	var_1038_string = ""; // 0xb69 PushV
	var_1038_string = "Neutral"; // 0xb6a MovS
	func_742(var_20_bool, var_1038_string); // 0xb6b NEW_2
	var_1039_int = 543144; // 0xb6d PushI
	SetMessage(var_1039_int); // 0xb6e TObjFunc
	ClearReplies(); // 0xb70 TObjFunc
	var_1040_int = 543145; // 0xb72 PushI
	var_1041_int = -1; // 0xb73 PushI
	var_1042_int = 45600; // 0xb74 PushI
	AddReply(var_1040_int, var_1041_int, var_1042_int); // 0xb75 TObjFunc
	var_1043_int = 543146; // 0xb77 PushI
	var_1044_int = -1; // 0xb78 PushI
	var_1045_int = 45601; // 0xb79 PushI
	AddReply(var_1043_int, var_1044_int, var_1045_int); // 0xb7a TObjFunc
	return 0; // 0xb7c Return
	
Label_2941:
	var_1046_int = 45583; // 0xb7d PushI
	var_1047_bool = var_19_object == var_1046_int; // 0xb7e Eq
	if(var_1047_bool == 0) goto Label_2969; // 0xb7f JumpB
	var_1048_string = ""; // 0xb80 PushV
	var_1048_string = "Neutral"; // 0xb81 MovS
	func_742(var_20_bool, var_1048_string); // 0xb82 NEW_2
	var_1049_int = 543128; // 0xb84 PushI
	SetMessage(var_1049_int); // 0xb85 TObjFunc
	ClearReplies(); // 0xb87 TObjFunc
	var_1050_int = 543129; // 0xb89 PushI
	var_1051_int = 45587; // 0xb8a PushI
	var_1052_int = 45584; // 0xb8b PushI
	AddReply(var_1050_int, var_1051_int, var_1052_int); // 0xb8c TObjFunc
	var_1053_int = 543130; // 0xb8e PushI
	var_1054_int = -1; // 0xb8f PushI
	var_1055_int = 45585; // 0xb90 PushI
	AddReply(var_1053_int, var_1054_int, var_1055_int); // 0xb91 TObjFunc
	var_1056_int = 543131; // 0xb93 PushI
	var_1057_int = -1; // 0xb94 PushI
	var_1058_int = 45586; // 0xb95 PushI
	AddReply(var_1056_int, var_1057_int, var_1058_int); // 0xb96 TObjFunc
	return 0; // 0xb98 Return
	
Label_2969:
	var_1059_int = 45587; // 0xb99 PushI
	var_1060_bool = var_19_object == var_1059_int; // 0xb9a Eq
	if(var_1060_bool == 0) goto Label_2997; // 0xb9b JumpB
	var_1061_string = ""; // 0xb9c PushV
	var_1061_string = "Neutral"; // 0xb9d MovS
	func_742(var_20_bool, var_1061_string); // 0xb9e NEW_2
	var_1062_int = 543132; // 0xba0 PushI
	SetMessage(var_1062_int); // 0xba1 TObjFunc
	ClearReplies(); // 0xba3 TObjFunc
	var_1063_int = 543133; // 0xba5 PushI
	var_1064_int = -1; // 0xba6 PushI
	var_1065_int = 45588; // 0xba7 PushI
	AddReply(var_1063_int, var_1064_int, var_1065_int); // 0xba8 TObjFunc
	var_1066_int = 543134; // 0xbaa PushI
	var_1067_int = 45591; // 0xbab PushI
	var_1068_int = 45589; // 0xbac PushI
	AddReply(var_1066_int, var_1067_int, var_1068_int); // 0xbad TObjFunc
	var_1069_int = 543135; // 0xbaf PushI
	var_1070_int = -1; // 0xbb0 PushI
	var_1071_int = 45590; // 0xbb1 PushI
	AddReply(var_1069_int, var_1070_int, var_1071_int); // 0xbb2 TObjFunc
	return 0; // 0xbb4 Return
	
Label_2997:
	var_1072_int = 45591; // 0xbb5 PushI
	var_1073_bool = var_19_object == var_1072_int; // 0xbb6 Eq
	if(var_1073_bool == 0) goto Label_3020; // 0xbb7 JumpB
	var_1074_string = ""; // 0xbb8 PushV
	var_1074_string = "Neutral"; // 0xbb9 MovS
	func_742(var_20_bool, var_1074_string); // 0xbba NEW_2
	var_1075_int = 543136; // 0xbbc PushI
	SetMessage(var_1075_int); // 0xbbd TObjFunc
	ClearReplies(); // 0xbbf TObjFunc
	var_1076_int = 543137; // 0xbc1 PushI
	var_1077_int = -1; // 0xbc2 PushI
	var_1078_int = 45592; // 0xbc3 PushI
	AddReply(var_1076_int, var_1077_int, var_1078_int); // 0xbc4 TObjFunc
	var_1079_int = 543138; // 0xbc6 PushI
	var_1080_int = -1; // 0xbc7 PushI
	var_1081_int = 45593; // 0xbc8 PushI
	AddReply(var_1079_int, var_1080_int, var_1081_int); // 0xbc9 TObjFunc
	return 0; // 0xbcb Return
	
Label_3020:
	var_1082_int = 45573; // 0xbcc PushI
	var_1083_bool = var_19_object == var_1082_int; // 0xbcd Eq
	if(var_1083_bool == 0) goto Label_3048; // 0xbce JumpB
	var_1084_string = ""; // 0xbcf PushV
	var_1084_string = "Neutral"; // 0xbd0 MovS
	func_742(var_20_bool, var_1084_string); // 0xbd1 NEW_2
	var_1085_int = 543118; // 0xbd3 PushI
	SetMessage(var_1085_int); // 0xbd4 TObjFunc
	ClearReplies(); // 0xbd6 TObjFunc
	var_1086_int = 543119; // 0xbd8 PushI
	var_1087_int = -1; // 0xbd9 PushI
	var_1088_int = 45574; // 0xbda PushI
	AddReply(var_1086_int, var_1087_int, var_1088_int); // 0xbdb TObjFunc
	var_1089_int = 543120; // 0xbdd PushI
	var_1090_int = 45577; // 0xbde PushI
	var_1091_int = 45575; // 0xbdf PushI
	AddReply(var_1089_int, var_1090_int, var_1091_int); // 0xbe0 TObjFunc
	var_1092_int = 543121; // 0xbe2 PushI
	var_1093_int = -1; // 0xbe3 PushI
	var_1094_int = 45576; // 0xbe4 PushI
	AddReply(var_1092_int, var_1093_int, var_1094_int); // 0xbe5 TObjFunc
	return 0; // 0xbe7 Return
	
Label_3048:
	var_1095_int = 45577; // 0xbe8 PushI
	var_1096_bool = var_19_object == var_1095_int; // 0xbe9 Eq
	if(var_1096_bool == 0) goto Label_3071; // 0xbea JumpB
	var_1097_string = ""; // 0xbeb PushV
	var_1097_string = "Neutral"; // 0xbec MovS
	func_742(var_20_bool, var_1097_string); // 0xbed NEW_2
	var_1098_int = 543122; // 0xbef PushI
	SetMessage(var_1098_int); // 0xbf0 TObjFunc
	ClearReplies(); // 0xbf2 TObjFunc
	var_1099_int = 543123; // 0xbf4 PushI
	var_1100_int = -1; // 0xbf5 PushI
	var_1101_int = 45578; // 0xbf6 PushI
	AddReply(var_1099_int, var_1100_int, var_1101_int); // 0xbf7 TObjFunc
	var_1102_int = 543124; // 0xbf9 PushI
	var_1103_int = -1; // 0xbfa PushI
	var_1104_int = 45579; // 0xbfb PushI
	AddReply(var_1102_int, var_1103_int, var_1104_int); // 0xbfc TObjFunc
	return 0; // 0xbfe Return
	
Label_3071:
	var_1105_int = 45557; // 0xbff PushI
	var_1106_bool = var_19_object == var_1105_int; // 0xc00 Eq
	if(var_1106_bool == 0) goto Label_3094; // 0xc01 JumpB
	var_1107_string = ""; // 0xc02 PushV
	var_1107_string = "Neutral"; // 0xc03 MovS
	func_742(var_20_bool, var_1107_string); // 0xc04 NEW_2
	var_1108_int = 543102; // 0xc06 PushI
	SetMessage(var_1108_int); // 0xc07 TObjFunc
	ClearReplies(); // 0xc09 TObjFunc
	var_1109_int = 543103; // 0xc0b PushI
	var_1110_int = -1; // 0xc0c PushI
	var_1111_int = 45558; // 0xc0d PushI
	AddReply(var_1109_int, var_1110_int, var_1111_int); // 0xc0e TObjFunc
	var_1112_int = 543104; // 0xc10 PushI
	var_1113_int = 45560; // 0xc11 PushI
	var_1114_int = 45559; // 0xc12 PushI
	AddReply(var_1112_int, var_1113_int, var_1114_int); // 0xc13 TObjFunc
	return 0; // 0xc15 Return
	
Label_3094:
	var_1115_int = 45560; // 0xc16 PushI
	var_1116_bool = var_19_object == var_1115_int; // 0xc17 Eq
	if(var_1116_bool == 0) goto Label_3117; // 0xc18 JumpB
	var_1117_string = ""; // 0xc19 PushV
	var_1117_string = "Neutral"; // 0xc1a MovS
	func_742(var_20_bool, var_1117_string); // 0xc1b NEW_2
	var_1118_int = 543105; // 0xc1d PushI
	SetMessage(var_1118_int); // 0xc1e TObjFunc
	ClearReplies(); // 0xc20 TObjFunc
	var_1119_int = 543106; // 0xc22 PushI
	var_1120_int = -1; // 0xc23 PushI
	var_1121_int = 45561; // 0xc24 PushI
	AddReply(var_1119_int, var_1120_int, var_1121_int); // 0xc25 TObjFunc
	var_1122_int = 543107; // 0xc27 PushI
	var_1123_int = -1; // 0xc28 PushI
	var_1124_int = 45562; // 0xc29 PushI
	AddReply(var_1122_int, var_1123_int, var_1124_int); // 0xc2a TObjFunc
	return 0; // 0xc2c Return
	
Label_3117:
	var_1125_int = 45564; // 0xc2d PushI
	var_1126_bool = var_19_object == var_1125_int; // 0xc2e Eq
	if(var_1126_bool == 0) goto Label_3140; // 0xc2f JumpB
	var_1127_string = ""; // 0xc30 PushV
	var_1127_string = "Neutral"; // 0xc31 MovS
	func_742(var_20_bool, var_1127_string); // 0xc32 NEW_2
	var_1128_int = 543109; // 0xc34 PushI
	SetMessage(var_1128_int); // 0xc35 TObjFunc
	ClearReplies(); // 0xc37 TObjFunc
	var_1129_int = 543110; // 0xc39 PushI
	var_1130_int = -1; // 0xc3a PushI
	var_1131_int = 45565; // 0xc3b PushI
	AddReply(var_1129_int, var_1130_int, var_1131_int); // 0xc3c TObjFunc
	var_1132_int = 543111; // 0xc3e PushI
	var_1133_int = 45568; // 0xc3f PushI
	var_1134_int = 45566; // 0xc40 PushI
	AddReply(var_1132_int, var_1133_int, var_1134_int); // 0xc41 TObjFunc
	return 0; // 0xc43 Return
	
Label_3140:
	var_1135_int = 45568; // 0xc44 PushI
	var_1136_bool = var_19_object == var_1135_int; // 0xc45 Eq
	if(var_1136_bool == 0) goto Label_3163; // 0xc46 JumpB
	var_1137_string = ""; // 0xc47 PushV
	var_1137_string = "Neutral"; // 0xc48 MovS
	func_742(var_20_bool, var_1137_string); // 0xc49 NEW_2
	var_1138_int = 543113; // 0xc4b PushI
	SetMessage(var_1138_int); // 0xc4c TObjFunc
	ClearReplies(); // 0xc4e TObjFunc
	var_1139_int = 543114; // 0xc50 PushI
	var_1140_int = -1; // 0xc51 PushI
	var_1141_int = 45569; // 0xc52 PushI
	AddReply(var_1139_int, var_1140_int, var_1141_int); // 0xc53 TObjFunc
	var_1142_int = 543116; // 0xc55 PushI
	var_1143_int = -1; // 0xc56 PushI
	var_1144_int = 45571; // 0xc57 PushI
	AddReply(var_1142_int, var_1143_int, var_1144_int); // 0xc58 TObjFunc
	return 0; // 0xc5a Return
	
Label_3163:
	var_1145_int = 45550; // 0xc5b PushI
	var_1146_bool = var_19_object == var_1145_int; // 0xc5c Eq
	if(var_1146_bool == 0) goto Label_3186; // 0xc5d JumpB
	var_1147_string = ""; // 0xc5e PushV
	var_1147_string = "Neutral"; // 0xc5f MovS
	func_742(var_20_bool, var_1147_string); // 0xc60 NEW_2
	var_1148_int = 543095; // 0xc62 PushI
	SetMessage(var_1148_int); // 0xc63 TObjFunc
	ClearReplies(); // 0xc65 TObjFunc
	var_1149_int = 543096; // 0xc67 PushI
	var_1150_int = -1; // 0xc68 PushI
	var_1151_int = 45551; // 0xc69 PushI
	AddReply(var_1149_int, var_1150_int, var_1151_int); // 0xc6a TObjFunc
	var_1152_int = 543098; // 0xc6c PushI
	var_1153_int = -1; // 0xc6d PushI
	var_1154_int = 45553; // 0xc6e PushI
	AddReply(var_1152_int, var_1153_int, var_1154_int); // 0xc6f TObjFunc
	return 0; // 0xc71 Return
	
Label_3186:
	var_1155_int = 45531; // 0xc72 PushI
	var_1156_bool = var_19_object == var_1155_int; // 0xc73 Eq
	if(var_1156_bool == 0) goto Label_3214; // 0xc74 JumpB
	var_1157_string = ""; // 0xc75 PushV
	var_1157_string = "Neutral"; // 0xc76 MovS
	func_742(var_20_bool, var_1157_string); // 0xc77 NEW_2
	var_1158_int = 543076; // 0xc79 PushI
	SetMessage(var_1158_int); // 0xc7a TObjFunc
	ClearReplies(); // 0xc7c TObjFunc
	var_1159_int = 543077; // 0xc7e PushI
	var_1160_int = -1; // 0xc7f PushI
	var_1161_int = 45532; // 0xc80 PushI
	AddReply(var_1159_int, var_1160_int, var_1161_int); // 0xc81 TObjFunc
	var_1162_int = 543078; // 0xc83 PushI
	var_1163_int = -1; // 0xc84 PushI
	var_1164_int = 45533; // 0xc85 PushI
	AddReply(var_1162_int, var_1163_int, var_1164_int); // 0xc86 TObjFunc
	var_1165_int = 543079; // 0xc88 PushI
	var_1166_int = 45535; // 0xc89 PushI
	var_1167_int = 45534; // 0xc8a PushI
	AddReply(var_1165_int, var_1166_int, var_1167_int); // 0xc8b TObjFunc
	return 0; // 0xc8d Return
	
Label_3214:
	var_1168_int = 45535; // 0xc8e PushI
	var_1169_bool = var_19_object == var_1168_int; // 0xc8f Eq
	if(var_1169_bool == 0) goto Label_3237; // 0xc90 JumpB
	var_1170_string = ""; // 0xc91 PushV
	var_1170_string = "Neutral"; // 0xc92 MovS
	func_742(var_20_bool, var_1170_string); // 0xc93 NEW_2
	var_1171_int = 543080; // 0xc95 PushI
	SetMessage(var_1171_int); // 0xc96 TObjFunc
	ClearReplies(); // 0xc98 TObjFunc
	var_1172_int = 543081; // 0xc9a PushI
	var_1173_int = -1; // 0xc9b PushI
	var_1174_int = 45536; // 0xc9c PushI
	AddReply(var_1172_int, var_1173_int, var_1174_int); // 0xc9d TObjFunc
	var_1175_int = 543082; // 0xc9f PushI
	var_1176_int = 45538; // 0xca0 PushI
	var_1177_int = 45537; // 0xca1 PushI
	AddReply(var_1175_int, var_1176_int, var_1177_int); // 0xca2 TObjFunc
	return 0; // 0xca4 Return
	
Label_3237:
	var_1178_int = 45538; // 0xca5 PushI
	var_1179_bool = var_19_object == var_1178_int; // 0xca6 Eq
	if(var_1179_bool == 0) goto Label_3260; // 0xca7 JumpB
	var_1180_string = ""; // 0xca8 PushV
	var_1180_string = "Neutral"; // 0xca9 MovS
	func_742(var_20_bool, var_1180_string); // 0xcaa NEW_2
	var_1181_int = 543083; // 0xcac PushI
	SetMessage(var_1181_int); // 0xcad TObjFunc
	ClearReplies(); // 0xcaf TObjFunc
	var_1182_int = 543084; // 0xcb1 PushI
	var_1183_int = 45541; // 0xcb2 PushI
	var_1184_int = 45539; // 0xcb3 PushI
	AddReply(var_1182_int, var_1183_int, var_1184_int); // 0xcb4 TObjFunc
	var_1185_int = 543085; // 0xcb6 PushI
	var_1186_int = -1; // 0xcb7 PushI
	var_1187_int = 45540; // 0xcb8 PushI
	AddReply(var_1185_int, var_1186_int, var_1187_int); // 0xcb9 TObjFunc
	return 0; // 0xcbb Return
	
Label_3260:
	var_1188_int = 45541; // 0xcbc PushI
	var_1189_bool = var_19_object == var_1188_int; // 0xcbd Eq
	if(var_1189_bool == 0) goto Label_3283; // 0xcbe JumpB
	var_1190_string = ""; // 0xcbf PushV
	var_1190_string = "Neutral"; // 0xcc0 MovS
	func_742(var_20_bool, var_1190_string); // 0xcc1 NEW_2
	var_1191_int = 543086; // 0xcc3 PushI
	SetMessage(var_1191_int); // 0xcc4 TObjFunc
	ClearReplies(); // 0xcc6 TObjFunc
	var_1192_int = 543087; // 0xcc8 PushI
	var_1193_int = -1; // 0xcc9 PushI
	var_1194_int = 45542; // 0xcca PushI
	AddReply(var_1192_int, var_1193_int, var_1194_int); // 0xccb TObjFunc
	var_1195_int = 543088; // 0xccd PushI
	var_1196_int = -1; // 0xcce PushI
	var_1197_int = 45543; // 0xccf PushI
	AddReply(var_1195_int, var_1196_int, var_1197_int); // 0xcd0 TObjFunc
	return 0; // 0xcd2 Return
	
Label_3283:
	var_3_object = 1; // 0xcd3 TMovB
	var_1198_bool = 0; // 0xcd4 PushV
	func_6965(var_1198_bool); // 0xcd5 NEW_2
	if(var_1198_bool == 0) goto Label_3291; // 0xcd7 JumpB
	lshStopAnimation(); // 0xcd8 Func
	goto Label_3293; // 0xcda Jump
	
Label_3293:
	return 0; // 0xcdd Return
	
Label_3291:
	StopAnimation(); // 0xcdb Func
	
Label_3295:
	return 0; // 0xcdf Return
}


task_3_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0xcef PushV
	var_22_int = 0; var_23_object = Obj(); // 0xcf0 PushV
	var_23_object = var_19_bool; // 0xcf1 Mov
	func_6884(var_23_object); // 0xcf2 NEW_2
	var_21_int = var_22_int; // 0xcf3 Mov
	var_24_int = 0; // 0xcf5 PushI
	var_25_bool = var_21_int > var_24_int; // 0xcf6 GT
	if(var_25_bool == 0) goto Label_3324; // 0xcf7 JumpB
	var_26_object = Obj(); // 0xcf8 PushV
	var_26_object = var_19_bool; // 0xcf9 Mov
	func_6887(var_26_object); // 0xcfa NEW_2
	
Label_3324:
	return 2; // 0xcfc Return
}


task_3_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_6893(); // 0xcfe NEW_2
	return 0; // 0xd00 Return
}


task_3_event_22(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_int, var_8_float, var_9_float, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_object, var_15_int, var_16_int, var_17_bool, var_18_float, var_19_int, var_20_bool, var_21_object, var_22_bool)
{
	return 0; // 0xd77 Return
}


task_3_event_16(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_string, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	return 0; // 0xd79 Return
}


task_3_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	return 0; // 0xd7b Return
}


task_4_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0xd94 PushV
	var_22_int = 0; var_23_object = Obj(); // 0xd95 PushV
	var_23_object = var_19_bool; // 0xd96 Mov
	func_6884(var_23_object); // 0xd97 NEW_2
	var_21_int = var_22_int; // 0xd98 Mov
	var_24_int = 0; // 0xd9a PushI
	var_25_bool = var_21_int > var_24_int; // 0xd9b GT
	if(var_25_bool == 0) goto Label_3495; // 0xd9c JumpB
	var_26_int = 1; // 0xd9d PushI
	var_27_bool = var_21_int > var_26_int; // 0xd9e GT
	if(var_27_bool == 0) goto Label_3491; // 0xd9f JumpB
	func_3663(var_21_int); // 0xda1 NEW_2
	
Label_3491:
	var_29_object = Obj(); // 0xda3 PushV
	var_29_object = var_19_bool; // 0xda4 Mov
	func_6887(var_29_object); // 0xda5 NEW_2
	
Label_3495:
	return 2; // 0xda7 Return
}


task_4_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0xda8 PushV
	var_22_object = Obj(); // 0xda9 PushV
	var_22_object = var_19_bool; // 0xdaa Mov
	func_6666(var_22_object); // 0xdab NEW_2
	var_31_int = 0; var_32_object = Obj(); // 0xdad PushV
	var_32_object = var_19_bool; // 0xdae Mov
	func_6749(var_31_int, var_32_object); // 0xdaf NEW_2
	var_21_int = var_31_int; // 0xdb0 Mov
	var_67_int = 0; // 0xdb2 PushI
	var_68_bool = var_21_int > var_67_int; // 0xdb3 GT
	if(var_68_bool == 0) goto Label_3519; // 0xdb4 JumpB
	var_69_int = 1; // 0xdb5 PushI
	var_70_bool = var_21_int > var_69_int; // 0xdb6 GT
	if(var_70_bool == 0) goto Label_3515; // 0xdb7 JumpB
	func_3663(var_21_int); // 0xdb9 NEW_2
	
Label_3515:
	var_72_object = Obj(); // 0xdbb PushV
	var_72_object = var_19_bool; // 0xdbc Mov
	func_6759(var_72_object); // 0xdbd NEW_2
	
Label_3519:
	return 2; // 0xdbf Return
}


task_4_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_object, var_14_int, var_15_int, var_16_bool, var_17_float, var_18_int, var_19_bool, var_20_object, var_21_bool)
{
	var_22_int = 0; var_23_int = 0; // 0xdc0 PushV
	var_24_bool = 0; var_25_object = Obj(); var_26_object = Obj(); var_27_bool = 0; // 0xdc1 PushV
	var_25_object = var_19_bool; // 0xdc2 Mov
	var_26_object = var_20_object; // 0xdc3 Mov
	var_27_bool = var_21_bool; // 0xdc4 Mov
	func_7017(var_24_bool, var_25_object, var_26_object, var_27_bool); // 0xdc5 NEW_2
	if(var_24_bool == 0) goto Label_3547; // 0xdc7 JumpB
	var_86_int = 0; var_87_object = Obj(); var_88_bool = 0; // 0xdc8 PushV
	var_87_object = var_19_bool; // 0xdc9 Mov
	var_88_bool = var_21_bool; // 0xdca Mov
	func_6842(var_87_object, var_88_bool); // 0xdcb NEW_2
	var_23_int = var_86_int; // 0xdcc Mov
	var_119_int = 0; // 0xdce PushI
	var_120_bool = var_23_int > var_119_int; // 0xdcf GT
	if(var_120_bool == 0) goto Label_3547; // 0xdd0 JumpB
	var_121_int = 1; // 0xdd1 PushI
	var_122_bool = var_23_int > var_121_int; // 0xdd2 GT
	if(var_122_bool == 0) goto Label_3543; // 0xdd3 JumpB
	func_3663(var_23_int); // 0xdd5 NEW_2
	
Label_3543:
	var_124_object = Obj(); // 0xdd7 PushV
	var_124_object = var_19_bool; // 0xdd8 Mov
	func_6849(var_124_object); // 0xdd9 NEW_2
	
Label_3547:
	return 2; // 0xddb Return
}


task_4_event_40(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0xddc PushV
	var_22_int = 0; var_23_object = Obj(); // 0xddd PushV
	var_23_object = var_19_bool; // 0xdde Mov
	func_6894(var_22_int, var_23_object); // 0xddf NEW_2
	var_21_int = var_22_int; // 0xde0 Mov
	var_64_int = 0; // 0xde2 PushI
	var_65_bool = var_21_int > var_64_int; // 0xde3 GT
	if(var_65_bool == 0) goto Label_3567; // 0xde4 JumpB
	var_66_int = 1; // 0xde5 PushI
	var_67_bool = var_21_int > var_66_int; // 0xde6 GT
	if(var_67_bool == 0) goto Label_3563; // 0xde7 JumpB
	func_3663(var_21_int); // 0xde9 NEW_2
	
Label_3563:
	var_69_object = Obj(); // 0xdeb PushV
	var_69_object = var_19_bool; // 0xdec Mov
	func_6910(var_69_object); // 0xded NEW_2
	
Label_3567:
	return 2; // 0xdef Return
}


task_4_event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0xdf0 PushV
	var_23_bool = 0; var_24_object = Obj(); var_25_string = ""; // 0xdf1 PushV
	var_24_object = var_19_object; // 0xdf2 Mov
	var_25_string = var_20_bool; // 0xdf3 Mov
	func_6580(var_23_bool, var_24_object, var_25_string); // 0xdf4 NEW_2
	if(var_23_bool == 0) goto Label_3584; // 0xdf6 JumpB
	func_3663(var_22_int); // 0xdf8 NEW_2
	var_52_object = Obj(); var_53_string = ""; // 0xdfa PushV
	var_52_object = var_19_object; // 0xdfb Mov
	var_53_string = var_20_bool; // 0xdfc Mov
	func_6612(var_52_object, var_53_string); // 0xdfd NEW_2
	goto Label_3604; // 0xdff Jump
	
Label_3604:
	return 2; // 0xe14 Return
	
Label_3584:
	var_128_int = 0; var_129_string = ""; var_130_object = Obj(); // 0xe00 PushV
	var_129_string = var_20_bool; // 0xe01 Mov
	var_130_object = var_19_object; // 0xe02 Mov
	func_6916(var_130_object); // 0xe03 NEW_2
	var_22_int = var_128_int; // 0xe04 Mov
	var_131_int = 0; // 0xe06 PushI
	var_132_bool = var_22_int > var_131_int; // 0xe07 GT
	if(var_132_bool == 0) goto Label_3604; // 0xe08 JumpB
	var_133_int = 1; // 0xe09 PushI
	var_134_bool = var_22_int > var_133_int; // 0xe0a GT
	if(var_134_bool == 0) goto Label_3599; // 0xe0b JumpB
	func_3663(var_22_int); // 0xe0d NEW_2
	
Label_3599:
	var_135_string = ""; var_136_object = Obj(); // 0xe0f PushV
	var_135_string = var_20_bool; // 0xe10 Mov
	var_136_object = var_19_object; // 0xe11 Mov
	func_6919(); // 0xe12 NEW_2
}


task_4_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_string, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_string = ""; // 0xe16 PushV
	var_21_string = var_19_bool; // 0xe17 Mov
	func_6679(var_20_bool, var_21_string); // 0xe18 NEW_2
	if(var_20_bool == 0) goto Label_3618; // 0xe1a JumpB
	func_3663(var_19_bool); // 0xe1c NEW_2
	var_30_string = ""; // 0xe1e PushV
	var_30_string = var_19_bool; // 0xe1f Mov
	func_6695(var_30_string); // 0xe20 NEW_2
	
Label_3618:
	return 0; // 0xe22 Return
}


task_4_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_object = Obj(); // 0xe24 PushV
	var_21_object = var_19_bool; // 0xe25 Mov
	func_6637(var_20_bool, var_21_object); // 0xe26 NEW_2
	if(var_20_bool == 0) goto Label_3633; // 0xe28 JumpB
	func_3663(var_19_bool); // 0xe2a NEW_2
	var_33_object = Obj(); // 0xe2c PushV
	var_33_object = var_19_bool; // 0xe2d Mov
	func_6660(var_33_object); // 0xe2e NEW_2
	goto Label_3637; // 0xe30 Jump
	
Label_3637:
	return 0; // 0xe35 Return
	
Label_3633:
	var_35_object = Obj(); // 0xe31 PushV
	var_35_object = var_19_bool; // 0xe32 Mov
	func_3688(var_19_bool, var_35_object); // 0xe33 NEW_2
}


task_4_event_3(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_object = Obj(); // 0xe37 PushV
	var_20_object = var_19_bool; // 0xe38 Mov
	func_3688(var_19_bool, var_20_object); // 0xe39 NEW_2
	return 0; // 0xe3b Return
}


task_4_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_int, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 110; // 0xe3d PushI
	var_21_bool = var_19_bool != var_20_int; // 0xe3e Neq
	if(var_21_bool == 0) goto Label_3649; // 0xe3f JumpB
	return 0; // 0xe40 Return
	
Label_3649:
	var_2_object = 0; // 0xe41 TMovB
	var_22_int = 110; // 0xe42 PushI
	KillTimer(var_22_int); // 0xe43 Func
	ResetAAS(); // 0xe45 Func
	return 0; // 0xe47 Return
}


task_4_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_3663(var_18_bool); // 0xe49 NEW_2
	func_6893(); // 0xe4c NEW_2
	return 0; // 0xe4e Return
}


task_4_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	func_3663(var_19_bool); // 0xe61 NEW_2
	var_21_object = Obj(); // 0xe63 PushV
	var_21_object = var_19_bool; // 0xe64 Mov
	func_6556(); // 0xe65 NEW_2
	return 0; // 0xe67 Return
}


task_4_event_10(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	RequestClearPath(var_19_bool); // 0xed1 Func
	return 0; // 0xed3 Return
}


task_4_event_28(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	Stop(); // 0xed4 Func
	return 0; // 0xed6 Return
}


task_5_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0xeed PushV
	var_22_int = 0; var_23_object = Obj(); // 0xeee PushV
	var_23_object = var_19_bool; // 0xeef Mov
	func_6884(var_23_object); // 0xef0 NEW_2
	var_21_int = var_22_int; // 0xef1 Mov
	var_24_int = 0; // 0xef3 PushI
	var_25_bool = var_21_int > var_24_int; // 0xef4 GT
	if(var_25_bool == 0) goto Label_3840; // 0xef5 JumpB
	var_26_int = 1; // 0xef6 PushI
	var_27_bool = var_21_int > var_26_int; // 0xef7 GT
	if(var_27_bool == 0) goto Label_3836; // 0xef8 JumpB
	func_4066(); // 0xefa NEW_2
	
Label_3836:
	var_28_object = Obj(); // 0xefc PushV
	var_28_object = var_19_bool; // 0xefd Mov
	func_6887(var_28_object); // 0xefe NEW_2
	
Label_3840:
	return 2; // 0xf00 Return
}


task_5_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0xf01 PushV
	var_22_object = Obj(); // 0xf02 PushV
	var_22_object = var_19_bool; // 0xf03 Mov
	func_6666(var_22_object); // 0xf04 NEW_2
	var_31_int = 0; var_32_object = Obj(); // 0xf06 PushV
	var_32_object = var_19_bool; // 0xf07 Mov
	func_6749(var_31_int, var_32_object); // 0xf08 NEW_2
	var_21_int = var_31_int; // 0xf09 Mov
	var_67_int = 0; // 0xf0b PushI
	var_68_bool = var_21_int > var_67_int; // 0xf0c GT
	if(var_68_bool == 0) goto Label_3864; // 0xf0d JumpB
	var_69_int = 1; // 0xf0e PushI
	var_70_bool = var_21_int > var_69_int; // 0xf0f GT
	if(var_70_bool == 0) goto Label_3860; // 0xf10 JumpB
	func_4066(); // 0xf12 NEW_2
	
Label_3860:
	var_71_object = Obj(); // 0xf14 PushV
	var_71_object = var_19_bool; // 0xf15 Mov
	func_6759(var_71_object); // 0xf16 NEW_2
	
Label_3864:
	return 2; // 0xf18 Return
}


task_5_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_object, var_14_int, var_15_int, var_16_bool, var_17_float, var_18_int, var_19_bool, var_20_object, var_21_bool)
{
	var_22_int = 0; var_23_int = 0; // 0xf19 PushV
	var_24_bool = 0; var_25_object = Obj(); var_26_object = Obj(); var_27_bool = 0; // 0xf1a PushV
	var_25_object = var_19_bool; // 0xf1b Mov
	var_26_object = var_20_object; // 0xf1c Mov
	var_27_bool = var_21_bool; // 0xf1d Mov
	func_7017(var_24_bool, var_25_object, var_26_object, var_27_bool); // 0xf1e NEW_2
	if(var_24_bool == 0) goto Label_3892; // 0xf20 JumpB
	var_86_int = 0; var_87_object = Obj(); var_88_bool = 0; // 0xf21 PushV
	var_87_object = var_19_bool; // 0xf22 Mov
	var_88_bool = var_21_bool; // 0xf23 Mov
	func_6842(var_87_object, var_88_bool); // 0xf24 NEW_2
	var_23_int = var_86_int; // 0xf25 Mov
	var_119_int = 0; // 0xf27 PushI
	var_120_bool = var_23_int > var_119_int; // 0xf28 GT
	if(var_120_bool == 0) goto Label_3892; // 0xf29 JumpB
	var_121_int = 1; // 0xf2a PushI
	var_122_bool = var_23_int > var_121_int; // 0xf2b GT
	if(var_122_bool == 0) goto Label_3888; // 0xf2c JumpB
	func_4066(); // 0xf2e NEW_2
	
Label_3888:
	var_123_object = Obj(); // 0xf30 PushV
	var_123_object = var_19_bool; // 0xf31 Mov
	func_6849(var_123_object); // 0xf32 NEW_2
	
Label_3892:
	return 2; // 0xf34 Return
}


task_5_event_40(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0xf35 PushV
	var_22_int = 0; var_23_object = Obj(); // 0xf36 PushV
	var_23_object = var_19_bool; // 0xf37 Mov
	func_6894(var_22_int, var_23_object); // 0xf38 NEW_2
	var_21_int = var_22_int; // 0xf39 Mov
	var_64_int = 0; // 0xf3b PushI
	var_65_bool = var_21_int > var_64_int; // 0xf3c GT
	if(var_65_bool == 0) goto Label_3912; // 0xf3d JumpB
	var_66_int = 1; // 0xf3e PushI
	var_67_bool = var_21_int > var_66_int; // 0xf3f GT
	if(var_67_bool == 0) goto Label_3908; // 0xf40 JumpB
	func_4066(); // 0xf42 NEW_2
	
Label_3908:
	var_68_object = Obj(); // 0xf44 PushV
	var_68_object = var_19_bool; // 0xf45 Mov
	func_6910(var_68_object); // 0xf46 NEW_2
	
Label_3912:
	return 2; // 0xf48 Return
}


task_5_event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0xf49 PushV
	var_23_bool = 0; var_24_object = Obj(); var_25_string = ""; // 0xf4a PushV
	var_24_object = var_19_object; // 0xf4b Mov
	var_25_string = var_20_bool; // 0xf4c Mov
	func_6580(var_23_bool, var_24_object, var_25_string); // 0xf4d NEW_2
	if(var_23_bool == 0) goto Label_3929; // 0xf4f JumpB
	func_4066(); // 0xf51 NEW_2
	var_51_object = Obj(); var_52_string = ""; // 0xf53 PushV
	var_51_object = var_19_object; // 0xf54 Mov
	var_52_string = var_20_bool; // 0xf55 Mov
	func_6612(var_51_object, var_52_string); // 0xf56 NEW_2
	goto Label_3949; // 0xf58 Jump
	
Label_3949:
	return 2; // 0xf6d Return
	
Label_3929:
	var_127_int = 0; var_128_string = ""; var_129_object = Obj(); // 0xf59 PushV
	var_128_string = var_20_bool; // 0xf5a Mov
	var_129_object = var_19_object; // 0xf5b Mov
	func_6916(var_129_object); // 0xf5c NEW_2
	var_22_int = var_127_int; // 0xf5d Mov
	var_130_int = 0; // 0xf5f PushI
	var_131_bool = var_22_int > var_130_int; // 0xf60 GT
	if(var_131_bool == 0) goto Label_3949; // 0xf61 JumpB
	var_132_int = 1; // 0xf62 PushI
	var_133_bool = var_22_int > var_132_int; // 0xf63 GT
	if(var_133_bool == 0) goto Label_3944; // 0xf64 JumpB
	func_4066(); // 0xf66 NEW_2
	
Label_3944:
	var_134_string = ""; var_135_object = Obj(); // 0xf68 PushV
	var_134_string = var_20_bool; // 0xf69 Mov
	var_135_object = var_19_object; // 0xf6a Mov
	func_6919(); // 0xf6b NEW_2
}


task_5_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_string, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_string = ""; // 0xf6f PushV
	var_21_string = var_19_bool; // 0xf70 Mov
	func_6679(var_20_bool, var_21_string); // 0xf71 NEW_2
	if(var_20_bool == 0) goto Label_3963; // 0xf73 JumpB
	func_4066(); // 0xf75 NEW_2
	var_29_string = ""; // 0xf77 PushV
	var_29_string = var_19_bool; // 0xf78 Mov
	func_6695(var_29_string); // 0xf79 NEW_2
	
Label_3963:
	return 0; // 0xf7b Return
}


task_5_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_4066(); // 0xf7d NEW_2
	func_6893(); // 0xf80 NEW_2
	return 0; // 0xf82 Return
}


task_5_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_object = Obj(); // 0xf84 PushV
	var_21_object = var_19_bool; // 0xf85 Mov
	func_6637(var_20_bool, var_21_object); // 0xf86 NEW_2
	if(var_20_bool == 0) goto Label_3984; // 0xf88 JumpB
	func_4066(); // 0xf8a NEW_2
	var_32_object = Obj(); // 0xf8c PushV
	var_32_object = var_19_bool; // 0xf8d Mov
	func_6660(var_32_object); // 0xf8e NEW_2
	
Label_3984:
	return 0; // 0xf90 Return
}


task_6_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x101f PushV
	var_22_int = 0; var_23_object = Obj(); // 0x1020 PushV
	var_23_object = var_19_bool; // 0x1021 Mov
	func_6884(var_23_object); // 0x1022 NEW_2
	var_21_int = var_22_int; // 0x1023 Mov
	var_24_int = 0; // 0x1025 PushI
	var_25_bool = var_21_int > var_24_int; // 0x1026 GT
	if(var_25_bool == 0) goto Label_4146; // 0x1027 JumpB
	var_26_int = 1; // 0x1028 PushI
	var_27_bool = var_21_int > var_26_int; // 0x1029 GT
	if(var_27_bool == 0) goto Label_4142; // 0x102a JumpB
	func_4270(); // 0x102c NEW_2
	
Label_4142:
	var_30_object = Obj(); // 0x102e PushV
	var_30_object = var_19_bool; // 0x102f Mov
	func_6887(var_30_object); // 0x1030 NEW_2
	
Label_4146:
	return 2; // 0x1032 Return
}


task_6_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x1033 PushV
	var_22_object = Obj(); // 0x1034 PushV
	var_22_object = var_19_bool; // 0x1035 Mov
	func_6666(var_22_object); // 0x1036 NEW_2
	var_31_int = 0; var_32_object = Obj(); // 0x1038 PushV
	var_32_object = var_19_bool; // 0x1039 Mov
	func_6749(var_31_int, var_32_object); // 0x103a NEW_2
	var_21_int = var_31_int; // 0x103b Mov
	var_67_int = 0; // 0x103d PushI
	var_68_bool = var_21_int > var_67_int; // 0x103e GT
	if(var_68_bool == 0) goto Label_4170; // 0x103f JumpB
	var_69_int = 1; // 0x1040 PushI
	var_70_bool = var_21_int > var_69_int; // 0x1041 GT
	if(var_70_bool == 0) goto Label_4166; // 0x1042 JumpB
	func_4270(); // 0x1044 NEW_2
	
Label_4166:
	var_73_object = Obj(); // 0x1046 PushV
	var_73_object = var_19_bool; // 0x1047 Mov
	func_6759(var_73_object); // 0x1048 NEW_2
	
Label_4170:
	return 2; // 0x104a Return
}


task_6_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_bool, var_13_object, var_14_int, var_15_int, var_16_bool, var_17_float, var_18_int, var_19_bool, var_20_object, var_21_bool)
{
	var_22_int = 0; var_23_int = 0; // 0x104b PushV
	var_24_bool = 0; var_25_object = Obj(); var_26_object = Obj(); var_27_bool = 0; // 0x104c PushV
	var_25_object = var_19_bool; // 0x104d Mov
	var_26_object = var_20_object; // 0x104e Mov
	var_27_bool = var_21_bool; // 0x104f Mov
	func_7017(var_24_bool, var_25_object, var_26_object, var_27_bool); // 0x1050 NEW_2
	if(var_24_bool == 0) goto Label_4198; // 0x1052 JumpB
	var_86_int = 0; var_87_object = Obj(); var_88_bool = 0; // 0x1053 PushV
	var_87_object = var_19_bool; // 0x1054 Mov
	var_88_bool = var_21_bool; // 0x1055 Mov
	func_6842(var_87_object, var_88_bool); // 0x1056 NEW_2
	var_23_int = var_86_int; // 0x1057 Mov
	var_119_int = 0; // 0x1059 PushI
	var_120_bool = var_23_int > var_119_int; // 0x105a GT
	if(var_120_bool == 0) goto Label_4198; // 0x105b JumpB
	var_121_int = 1; // 0x105c PushI
	var_122_bool = var_23_int > var_121_int; // 0x105d GT
	if(var_122_bool == 0) goto Label_4194; // 0x105e JumpB
	func_4270(); // 0x1060 NEW_2
	
Label_4194:
	var_125_object = Obj(); // 0x1062 PushV
	var_125_object = var_19_bool; // 0x1063 Mov
	func_6849(var_125_object); // 0x1064 NEW_2
	
Label_4198:
	return 2; // 0x1066 Return
}


task_6_event_40(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x1067 PushV
	var_22_int = 0; var_23_object = Obj(); // 0x1068 PushV
	var_23_object = var_19_bool; // 0x1069 Mov
	func_6894(var_22_int, var_23_object); // 0x106a NEW_2
	var_21_int = var_22_int; // 0x106b Mov
	var_64_int = 0; // 0x106d PushI
	var_65_bool = var_21_int > var_64_int; // 0x106e GT
	if(var_65_bool == 0) goto Label_4218; // 0x106f JumpB
	var_66_int = 1; // 0x1070 PushI
	var_67_bool = var_21_int > var_66_int; // 0x1071 GT
	if(var_67_bool == 0) goto Label_4214; // 0x1072 JumpB
	func_4270(); // 0x1074 NEW_2
	
Label_4214:
	var_70_object = Obj(); // 0x1076 PushV
	var_70_object = var_19_bool; // 0x1077 Mov
	func_6910(var_70_object); // 0x1078 NEW_2
	
Label_4218:
	return 2; // 0x107a Return
}


task_6_event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_string, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0x107b PushV
	var_23_bool = 0; var_24_object = Obj(); var_25_string = ""; // 0x107c PushV
	var_24_object = var_19_object; // 0x107d Mov
	var_25_string = var_20_bool; // 0x107e Mov
	func_6580(var_23_bool, var_24_object, var_25_string); // 0x107f NEW_2
	if(var_23_bool == 0) goto Label_4235; // 0x1081 JumpB
	func_4270(); // 0x1083 NEW_2
	var_53_object = Obj(); var_54_string = ""; // 0x1085 PushV
	var_53_object = var_19_object; // 0x1086 Mov
	var_54_string = var_20_bool; // 0x1087 Mov
	func_6612(var_53_object, var_54_string); // 0x1088 NEW_2
	goto Label_4255; // 0x108a Jump
	
Label_4255:
	return 2; // 0x109f Return
	
Label_4235:
	var_129_int = 0; var_130_string = ""; var_131_object = Obj(); // 0x108b PushV
	var_130_string = var_20_bool; // 0x108c Mov
	var_131_object = var_19_object; // 0x108d Mov
	func_6916(var_131_object); // 0x108e NEW_2
	var_22_int = var_129_int; // 0x108f Mov
	var_132_int = 0; // 0x1091 PushI
	var_133_bool = var_22_int > var_132_int; // 0x1092 GT
	if(var_133_bool == 0) goto Label_4255; // 0x1093 JumpB
	var_134_int = 1; // 0x1094 PushI
	var_135_bool = var_22_int > var_134_int; // 0x1095 GT
	if(var_135_bool == 0) goto Label_4250; // 0x1096 JumpB
	func_4270(); // 0x1098 NEW_2
	
Label_4250:
	var_136_string = ""; var_137_object = Obj(); // 0x109a PushV
	var_136_string = var_20_bool; // 0x109b Mov
	var_137_object = var_19_object; // 0x109c Mov
	func_6919(); // 0x109d NEW_2
}


task_6_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_string = ""; // 0x10a1 PushV
	var_21_string = var_19_bool; // 0x10a2 Mov
	func_6679(var_20_bool, var_21_string); // 0x10a3 NEW_2
	if(var_20_bool == 0) goto Label_4269; // 0x10a5 JumpB
	func_4270(); // 0x10a7 NEW_2
	var_31_string = ""; // 0x10a9 PushV
	var_31_string = var_19_bool; // 0x10aa Mov
	func_6695(var_31_string); // 0x10ab NEW_2
	
Label_4269:
	return 0; // 0x10ad Return
}


task_6_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	func_4270(); // 0x10bb NEW_2
	var_22_object = Obj(); // 0x10bd PushV
	var_22_object = var_19_bool; // 0x10be Mov
	func_6556(); // 0x10bf NEW_2
	return 0; // 0x10c1 Return
}


task_6_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); // 0x10c2 PushV
	var_24_int = 111; // 0x10c3 PushI
	var_25_bool = var_19_bool != var_24_int; // 0x10c4 Neq
	if(var_25_bool == 0) goto Label_4295; // 0x10c5 JumpB
	return 4; // 0x10c6 Return
	
Label_4295:
	var_26_bool = 0; var_27_object = Obj(); // 0x10c7 PushV
	var_27_object = var_0_bool; // 0x10c8 MovT
	func_5445(var_26_bool, var_27_object); // 0x10c9 NEW_2
	var_60_bool = var_26_bool == 0; // 0x10cb Not
	if(var_60_bool == 0) goto Label_4305; // 0x10cc JumpB
	func_4270(); // 0x10ce NEW_2
	return 4; // 0x10d0 Return
	
Label_4305:
	GetDirection(var_22_cvector); // 0x10d1 Func
	var_63_cvector = CVector(0,0,0); var_64_object = Obj(); // 0x10d3 PushV
	var_64_object = var_0_bool; // 0x10d4 MovT
	func_5299(var_64_object); // 0x10d5 NEW_2
	var_23_cvector = var_63_cvector; // 0x10d6 Mov
	var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); // 0x10d8 PushV
	var_70_cvector = var_22_cvector; // 0x10d9 Mov
	var_71_cvector = var_23_cvector; // 0x10da Mov
	func_5933(var_69_float, var_70_cvector, var_71_cvector); // 0x10db NEW_2
	var_93_float = 0.5; // 0x10dd PushF
	var_94_bool = var_69_float < var_93_float; // 0x10de LT
	if(var_94_bool == 0) goto Label_4324; // 0x10df JumpB
	var_95_object = Obj(); // 0x10e0 PushV
	var_95_object = var_0_bool; // 0x10e1 MovT
	func_5595(); // 0x10e2 NEW_2
	
Label_4324:
	return 4; // 0x10e4 Return
}


task_6_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_4270(); // 0x10e6 NEW_2
	func_6893(); // 0x10e9 NEW_2
	return 0; // 0x10eb Return
}


task_6_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_object = Obj(); // 0x10ed PushV
	var_21_object = var_19_bool; // 0x10ee Mov
	func_6637(var_20_bool, var_21_object); // 0x10ef NEW_2
	if(var_20_bool == 0) goto Label_4345; // 0x10f1 JumpB
	func_4270(); // 0x10f3 NEW_2
	var_34_object = Obj(); // 0x10f5 PushV
	var_34_object = var_19_bool; // 0x10f6 Mov
	func_6660(var_34_object); // 0x10f7 NEW_2
	
Label_4345:
	return 0; // 0x10f9 Return
}


task_8_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_5092(var_18_bool); // 0x139f NEW_2
	func_6893(); // 0x13a2 NEW_2
	return 0; // 0x13a4 Return
}


task_8_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_int)
{
	var_20_int = 1; // 0x13d7 PushI
	var_21_bool = var_19_int == var_20_int; // 0x13d8 Eq
	if(var_21_bool == 0) goto Label_5087; // 0x13d9 JumpB
	var_22_object = Obj(); // 0x13da PushV
	var_22_object = var_1_object; // 0x13db MovT
	func_5989(var_22_object); // 0x13dc NEW_2
	goto Label_5091; // 0x13de Jump
	
Label_5091:
	return 0; // 0x13e3 Return
	
Label_5087:
	var_27_int = 0; // 0x13df PushV
	var_27_int = var_19_int; // 0x13e0 Mov
	func_5236(var_18_bool, var_19_int, var_27_int); // 0x13e1 NEW_2
}


task_8_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	var_20_bool = 0; // 0x13f2 PushV
	var_20_bool = 0; // 0x13f3 MovB
	var_21_bool = var_1_object == var_19_object; // 0x13f4 Eq
	if(var_21_bool == 0) goto Label_5113; // 0x13f5 JumpB
	var_22_bool = var_2_object == 0; // 0x13f6 Not
	if(var_22_bool == 0) goto Label_5113; // 0x13f7 JumpB
	var_20_bool = 1; // 0x13f8 MovB
	
Label_5113:
	if(var_20_bool == 0) goto Label_5119; // 0x13f9 JumpB
	var_2_object = 1; // 0x13fa TMovB
	var_23_object = Obj(); // 0x13fb PushV
	var_23_object = var_19_object; // 0x13fc Mov
	func_5790(var_23_object); // 0x13fd NEW_2
	
Label_5119:
	return 0; // 0x13ff Return
}


task_8_event_2(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	var_20_bool = 0; // 0x1401 PushV
	var_20_bool = 0; // 0x1402 MovB
	var_21_bool = var_1_object == var_19_object; // 0x1403 Eq
	if(var_21_bool == 0) goto Label_5128; // 0x1404 JumpB
	var_22_object = var_2_object; // 0x1405 PushT
	if(var_22_object == 0) goto Label_5128; // 0x1406 JumpB
	var_20_bool = 1; // 0x1407 MovB
	
Label_5128:
	if(var_20_bool == 0) goto Label_5133; // 0x1408 JumpB
	var_2_object = 0; // 0x1409 TMovB
	var_23_string = "head"; // 0x140a PushS
	UnlookAsync(var_23_string); // 0x140b Func
	
Label_5133:
	return 0; // 0x140d Return
}


task_8_event_10(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	RequestClearPath(var_19_object); // 0x1487 Func
	return 0; // 0x1489 Return
}


task_8_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	func_5092(var_19_object); // 0x1493 NEW_2
	var_24_object = Obj(); // 0x1495 PushV
	var_24_object = var_19_object; // 0x1496 Mov
	func_6556(); // 0x1497 NEW_2
	return 0; // 0x1499 Return
}


event_16(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_string)
{
	var_21_float = 0; var_22_float = 0; // 0x198f PushV
	var_23_string = "health"; // 0x1990 PushS
	var_24_bool = var_20_string == var_23_string; // 0x1991 Eq
	if(var_24_bool == 0) goto Label_6555; // 0x1992 JumpB
	var_25_string = "health"; // 0x1993 PushS
	GetProperty(var_25_string, var_22_float); // 0x1994 Func
	var_26_int = 0; // 0x1996 PushI
	var_27_bool = var_22_float <= var_26_int; // 0x1997 LE
	if(var_27_bool == 0) goto Label_6555; // 0x1998 JumpB
	SignalDeath(var_19_object); // 0x1999 Func
	
Label_6555:
	return 2; // 0x199b Return
}


event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	var_20_object = Obj(); // 0x199d PushV
	var_20_object = var_19_object; // 0x199e Mov
	func_6535(var_20_object); // 0x199f NEW_2
	return 0; // 0x19a1 Return
}


event_22(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_int, var_21_float, var_22_float)
{
	var_23_object = Obj(); var_24_int = 0; var_25_float = 0; // 0x19a3 PushV
	var_23_object = var_19_object; // 0x19a4 Mov
	var_24_int = var_20_int; // 0x19a5 Mov
	var_25_float = var_21_float; // 0x19a6 Mov
	func_5513(var_23_object, var_24_int, var_25_float); // 0x19a7 NEW_2
	return 0; // 0x19a9 Return
}


event_43(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_int, var_21_float, var_22_float, var_23_cvector, var_24_cvector)
{
	var_25_object = Obj(); var_26_int = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x19ab PushV
	var_25_object = var_19_object; // 0x19ac Mov
	var_26_int = var_20_int; // 0x19ad Mov
	var_27_float = var_21_float; // 0x19ae Mov
	var_28_cvector = var_23_cvector; // 0x19af Mov
	var_29_cvector = var_24_cvector; // 0x19b0 Mov
	func_5581(var_27_float, var_28_cvector, var_29_cvector); // 0x19b1 NEW_2
	return 0; // 0x19b3 Return
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 1; // 0xd7c PushB
	SensePlayerOnly(var_19_bool); // 0xd7d Func
	func_6967(); // 0xd80 NEW_2
	func_3467(); // 0xd83 NEW_2
	
Label_3461:
	var_2_object = 0; // 0xd85 TMovB
	func_3728(var_17_object, var_18_bool); // 0xd87 NEW_2
	goto Label_3461; // 0xd89 Jump
}


func_0(var_0_bool)
{
	DoTrade(); // 0x1 Func
	var_0_bool = 0; // 0x3 TMovB
	
Label_4:
	var_535_bool = 0; // 0x4 PushV
	func_6965(var_535_bool); // 0x5 NEW_2
	if(var_535_bool == 0) goto Label_15; // 0x7 JumpB
	var_536_string = ""; // 0x8 PushV
	var_536_string = "Neutral"; // 0x9 MovS
	func_5759(var_536_string); // 0xa NEW_2
	lshWaitForAnimEnd(); // 0xc Func
	goto Label_21; // 0xe Jump
	
Label_21:
	var_537_bool = var_0_bool; // 0x15 PushT
	if(var_537_bool == 0) goto Label_24; // 0x16 JumpB
	return 0; // 0x17 Return
	
Label_24:
	goto Label_4; // 0x18 Jump
	
Label_15:
	WaitForAnimEnd(); // 0xf Func
	var_538_string = "all"; // 0x11 PushS
	var_539_string = "idle"; // 0x12 PushS
	PlayAnimation(var_538_string, var_539_string); // 0x13 Func
}


func_6148(var_280_bool, var_281_object)
{
	var_282_bool = 0; var_283_object = Obj(); // 0x1805 PushV
	var_283_object = var_281_object; // 0x1806 Mov
	func_6255(var_283_object); // 0x1807 NEW_2
	if(var_282_bool == 0) goto Label_6156; // 0x1809 JumpB
	var_280_bool = 1; // 0x180a MovB
	return 0; // 0x180b Return
	
Label_6156:
	var_280_bool = 0; // 0x180c MovB
	return 0; // 0x180d Return
}


func_6660(var_34_object)
{
	var_35_object = Obj(); // 0x1a05 PushV
	var_35_object = var_34_object; // 0x1a06 Mov
	func_6924(); // 0x1a07 NEW_2
	return 0; // 0x1a09 Return
}


func_6666(var_22_object)
{
	var_23_bool = 0; var_24_object = Obj(); // 0x1a0b PushV
	var_24_object = var_22_object; // 0x1a0c Mov
	func_5314(var_23_bool, var_24_object); // 0x1a0d NEW_2
	if(var_23_bool == 0) goto Label_6678; // 0x1a0f JumpB
	var_27_object = Obj(); // 0x1a10 PushV
	func_5875(var_27_object); // 0x1a11 NEW_2
	var_30_float = -0.05; // 0x1a13 PushF
	ReportReputationChange(var_22_object, var_27_object, var_30_float); // 0x1a14 Func
	
Label_6678:
	return 0; // 0x1a16 Return
}


func_6158(var_375_bool, var_376_object)
{
	var_377_bool = 0; var_378_object = Obj(); // 0x180f PushV
	var_378_object = var_376_object; // 0x1810 Mov
	func_6262(var_378_object); // 0x1811 NEW_2
	if(var_377_bool == 0) goto Label_6166; // 0x1813 JumpB
	var_375_bool = 1; // 0x1814 MovB
	return 0; // 0x1815 Return
	
Label_6166:
	var_375_bool = 0; // 0x1816 MovB
	return 0; // 0x1817 Return
}


func_5134(var_0_bool, var_1_object, var_179_bool, var_180_object, var_181_float, var_182_float, var_183_bool, var_184_bool)
{
	var_185_bool = 0; var_186_bool = 0; var_187_object = Obj(); var_188_cvector = CVector(0,0,0); var_189_cvector = CVector(0,0,0); var_190_cvector = CVector(0,0,0); var_191_float = 0; var_192_object = Obj(); var_193_bool = 0; var_194_bool = 0; var_195_object = Obj(); var_196_cvector = CVector(0,0,0); var_197_cvector = CVector(0,0,0); var_198_cvector = CVector(0,0,0); var_199_float = 0; var_200_object = Obj(); // 0x140e PushV
	var_0_bool = 0; // 0x140f TMovB
	var_1_object = var_180_object; // 0x1410 TMov
	var_194_bool = var_184_bool; // 0x1411 Mov
	
Label_5138:
	var_201_bool = 0; var_202_object = Obj(); // 0x1412 PushV
	var_202_object = var_180_object; // 0x1413 Mov
	func_5274(var_201_bool, var_202_object); // 0x1414 NEW_2
	var_205_bool = var_201_bool == 0; // 0x1416 Not
	if(var_205_bool == 0) goto Label_5146; // 0x1417 JumpB
	var_179_bool = 0; // 0x1418 MovB
	return 16; // 0x1419 Return
	
Label_5146:
	GetPosition(var_196_cvector); // 0x141a ObjFunc
	GetPosition(var_197_cvector); // 0x141c Func
	var_198_cvector = var_196_cvector - var_197_cvector; // 0x141e Sub2
	var_199_float = var_198_cvector | var_198_cvector; // 0x141f Or2
	var_206_bool = 0; // 0x1420 PushV
	var_206_bool = 0; // 0x1421 MovB
	var_207_int = 0; // 0x1422 PushI
	var_208_bool = var_182_float > var_207_int; // 0x1423 GT
	if(var_208_bool == 0) goto Label_5161; // 0x1424 JumpB
	var_209_float = var_182_float * var_182_float; // 0x1425 Mult
	var_210_bool = var_199_float > var_209_float; // 0x1426 GT
	if(var_210_bool == 0) goto Label_5161; // 0x1427 JumpB
	var_206_bool = 1; // 0x1428 MovB
	
Label_5161:
	if(var_206_bool == 0) goto Label_5166; // 0x1429 JumpB
	Stop(); // 0x142a Func
	var_179_bool = 0; // 0x142c MovB
	return 16; // 0x142d Return
	
Label_5166:
	var_211_float = var_181_float * var_181_float; // 0x142e Mult
	var_212_bool = var_199_float > var_211_float; // 0x142f GT
	if(var_212_bool == 0) goto Label_5228; // 0x1430 JumpB
	GetPFPosition(var_196_cvector); // 0x1431 ObjFunc
	FindPathTo(var_200_object, var_196_cvector); // 0x1433 Func
	var_213_bool = var_200_object != 0; // 0x1435 NullNeq
	if(var_213_bool == 0) goto Label_5177; // 0x1436 JumpB
	var_195_object = var_200_object; // 0x1437 Mov
	var_200_object = 0; // 0x1438 SetNull
	
Label_5177:
	var_214_bool = var_195_object != 0; // 0x1439 NullNeq
	if(var_214_bool == 0) goto Label_5210; // 0x143a JumpB
	var_215_bool = var_194_bool; // 0x143b Push
	if(var_215_bool == 0) goto Label_5187; // 0x143c JumpB
	var_194_bool = 0; // 0x143d MovB
	RotatePath(var_195_object, var_193_bool); // 0x143e Func
	var_216_bool = var_193_bool == 0; // 0x1440 Not
	if(var_216_bool == 0) goto Label_5187; // 0x1441 JumpB
	goto Label_5234; // 0x1442 Jump
	
Label_5234:
	var_179_bool = !var_0_bool; // 0x1472 Not2
	return 16; // 0x1473 Return
	
Label_5187:
	var_217_int = 0; // 0x1443 PushI
	var_218_float = 0.3; // 0x1444 PushF
	SetTimer(var_217_int, var_218_float); // 0x1445 Func
	var_219_string = ""; // 0x1447 PushV
	func_5281(var_219_string); // 0x1448 NEW_2
	var_220_string = ""; // 0x144a PushV
	func_5283(var_220_string); // 0x144b NEW_2
	FollowPath(var_195_object, var_183_bool, var_193_bool, var_219_string, var_220_string); // 0x144d Func
	var_221_bool = var_193_bool == 0; // 0x144f Not
	if(var_221_bool == 0) goto Label_5208; // 0x1450 JumpB
	var_222_bool = var_0_bool; // 0x1451 PushT
	if(var_222_bool == 0) goto Label_5206; // 0x1452 JumpB
	var_195_object = 0; // 0x1453 SetNull
	goto Label_5234; // 0x1454 Jump
	
Label_5206:
	goto Label_5233; // 0x1456 Jump
	
Label_5233:
	goto Label_5138; // 0x1471 Jump
	
Label_5208:
	var_195_object = 0; // 0x1458 SetNull
	goto Label_5226; // 0x1459 Jump
	
Label_5226:
	var_200_object = 0; // 0x146a SetNull
	goto Label_5232; // 0x146b Jump
	
Label_5232:
	var_195_object = 0; // 0x1470 SetNull
	
Label_5210:
	var_223_int = 0; // 0x145a PushI
	KillTimer(var_223_int); // 0x145b Func
	var_224_float = 0.5; // 0x145d PushF
	Sleep(var_224_float, var_193_bool); // 0x145e Func
	var_225_bool = var_193_bool == 0; // 0x1460 Not
	if(var_225_bool == 0) goto Label_5222; // 0x1461 JumpB
	var_226_bool = var_0_bool; // 0x1462 PushT
	if(var_226_bool == 0) goto Label_5222; // 0x1463 JumpB
	var_195_object = 0; // 0x1464 SetNull
	goto Label_5234; // 0x1465 Jump
	
Label_5222:
	var_227_int = 0; // 0x1466 PushI
	var_228_float = 0.3; // 0x1467 PushF
	SetTimer(var_227_int, var_228_float); // 0x1468 Func
	
Label_5228:
	var_229_int = 0; // 0x146c PushI
	KillTimer(var_229_int); // 0x146d Func
	goto Label_5234; // 0x146f Jump
}


func_4624(var_0_bool, var_405_float, var_406_int)
{
	var_407_object = Obj(); var_408_float = 0; var_409_float = 0; var_410_object = Obj(); var_411_float = 0; var_412_float = 0; // 0x1210 PushV
	var_413_float = 0.9; // 0x1211 PushF
	var_414_float = var_405_float * var_413_float; // 0x1212 Mult
	GetVictim(var_414_float, var_410_object); // 0x1213 Func
	ReportAttack(var_0_bool); // 0x1215 Func
	var_415_bool = var_410_object == var_0_bool; // 0x1217 Eq
	if(var_415_bool == 0) goto Label_4661; // 0x1218 JumpB
	var_416_float = 0; var_417_object = Obj(); var_418_int = 0; // 0x1219 PushV
	var_417_object = var_410_object; // 0x121a Mov
	var_418_int = var_406_int; // 0x121b Mov
	func_4354(var_418_int); // 0x121c NEW_2
	var_411_float = var_416_float; // 0x121d Mov
	var_419_float = 0; var_420_object = Obj(); var_421_float = 0; var_422_int = 0; // 0x121f PushV
	var_420_object = var_410_object; // 0x1220 Mov
	var_421_float = var_411_float; // 0x1221 Mov
	var_423_int = 0; var_424_object = Obj(); var_425_int = 0; // 0x1222 PushV
	var_424_object = var_410_object; // 0x1223 Mov
	var_425_int = var_406_int; // 0x1224 Mov
	func_4357(var_425_int); // 0x1225 NEW_2
	var_422_int = var_423_int; // 0x1226 Mov
	func_5331(var_419_float, var_420_object, var_421_float, var_422_int); // 0x1228 NEW_2
	var_412_float = var_419_float; // 0x1229 Mov
	var_484_int = 0; // 0x122b PushV
	func_5007(var_484_int); // 0x122c NEW_2
	ReportHit(var_0_bool, var_484_int, var_412_float, var_411_float); // 0x122e Func
	var_485_object = Obj(); var_486_float = 0; // 0x1230 PushV
	var_485_object = var_410_object; // 0x1231 Mov
	var_486_float = var_412_float; // 0x1232 Mov
	func_5014(); // 0x1233 NEW_2
	
Label_4661:
	return 6; // 0x1235 Return
}


func_6679(var_20_bool, var_21_string)
{
	var_22_object = Obj(); var_23_object = Obj(); // 0x1a17 PushV
	var_24_string = "heal"; // 0x1a18 PushS
	var_25_bool = var_21_string == var_24_string; // 0x1a19 Eq
	if(var_25_bool == 0) goto Label_6693; // 0x1a1a JumpB
	var_26_string = "player"; // 0x1a1b PushS
	FindActor(var_23_object, var_26_string); // 0x1a1c Func
	var_27_bool = 0; var_28_object = Obj(); // 0x1a1e PushV
	var_28_object = var_23_object; // 0x1a1f Mov
	func_6952(var_28_object); // 0x1a20 NEW_2
	var_20_bool = var_27_bool; // 0x1a21 Mov
	return 2; // 0x1a23 Return
	
Label_6693:
	var_20_bool = 0; // 0x1a25 MovB
	return 2; // 0x1a26 Return
}


func_6168(var_396_bool, var_397_object)
{
	var_398_bool = 0; var_399_object = Obj(); // 0x1819 PushV
	var_399_object = var_397_object; // 0x181a Mov
	func_6283(var_399_object); // 0x181b NEW_2
	if(var_398_bool == 0) goto Label_6176; // 0x181d JumpB
	var_396_bool = 1; // 0x181e MovB
	return 0; // 0x181f Return
	
Label_6176:
	var_396_bool = 0; // 0x1820 MovB
	return 0; // 0x1821 Return
}


func_4122(var_0_bool)
{
	var_70_object = Obj(); // 0x101a PushV
	var_70_object = var_0_bool; // 0x101b MovT
	func_5790(var_70_object); // 0x101c NEW_2
	return 0; // 0x101e Return
}


func_6178(var_151_bool)
{
	var_153_int = 0; // 0x1823 PushV
	func_5972(var_153_int); // 0x1824 NEW_2
	var_159_int = 1; // 0x1826 PushI
	var_151_bool = var_153_int == var_159_int; // 0x1827 Eq2
	return 0; // 0x1828 Return
}


func_6695(var_31_string)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x1a27 PushV
	var_34_string = "heal"; // 0x1a28 PushS
	var_35_bool = var_31_string == var_34_string; // 0x1a29 Eq
	if(var_35_bool == 0) goto Label_6707; // 0x1a2a JumpB
	var_36_string = "player"; // 0x1a2b PushS
	FindActor(var_33_object, var_36_string); // 0x1a2c Func
	var_37_object = Obj(); // 0x1a2e PushV
	var_37_object = var_33_object; // 0x1a2f Mov
	func_6955(); // 0x1a30 NEW_2
	var_33_object = 0; // 0x1a32 SetNull
	
Label_6707:
	return 2; // 0x1a33 Return
}


func_40(var_0_bool, var_44_int, var_45_object)
{
	var_47_object = Obj(); var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_object = Obj(); var_52_bool = 0; var_53_int = 0; var_54_bool = 0; // 0x28 PushV
	var_0_bool = var_45_object; // 0x29 TMov
	var_55_bool = 0; var_56_object = Obj(); var_57_float = 0; // 0x2a PushV
	var_56_object = var_45_object; // 0x2b Mov
	var_57_float = 70.0; // 0x2c MovF
	func_5611(var_56_object, var_57_float); // 0x2d NEW_2
	var_102_bool = var_55_bool == 0; // 0x2f Not
	if(var_102_bool == 0) goto Label_51; // 0x30 JumpB
	var_44_int = -2; // 0x31 MovI
	return 8; // 0x32 Return
	
Label_51:
	CreateDialog(var_51_object); // 0x33 Func
	var_103_int = 0; // 0x35 PushV
	func_6959(var_103_int); // 0x36 NEW_2
	SetNPCName(var_103_int); // 0x38 ObjFunc
	var_104_int = 0; // 0x3a PushV
	func_6957(var_104_int); // 0x3b NEW_2
	SetNPCDescription(var_104_int); // 0x3d ObjFunc
	var_105_string = ""; // 0x3f PushV
	func_6961(var_105_string); // 0x40 NEW_2
	SetPhoto(var_105_string); // 0x42 ObjFunc
	var_106_string = ""; // 0x44 PushV
	func_6963(var_106_string); // 0x45 NEW_2
	SetPhoto2(var_106_string); // 0x47 ObjFunc
	var_107_int = 0; // 0x49 PushV
	func_6294(var_107_int); // 0x4a NEW_2
	SetPlayerName(var_107_int); // 0x4c ObjFunc
	var_53_int = -1; // 0x4e MovI
	IsOverrideActive(var_52_bool); // 0x4f Func
	var_115_bool = var_52_bool; // 0x51 Push
	if(var_115_bool == 0) goto Label_85; // 0x52 JumpB
	var_44_int = -2; // 0x53 MovI
	return 8; // 0x54 Return
	
Label_85:
	DoDialog(var_51_object); // 0x55 Func
	var_116_object = Obj(); var_117_object = Obj(); // 0x57 PushV
	var_116_object = var_45_object; // 0x58 Mov
	var_117_object = var_51_object; // 0x59 Mov
	TaskCall(2); // 0x5a TaskCall
	func_114(var_118_object, var_119_object, var_120_string, var_121_bool, var_116_object, var_117_object); // 0x5b NEW_2
	TaskReturn(); // 0x5c TaskReturn
	IsDialogEnd(var_54_bool); // 0x5e ObjFunc
	
Label_96:
	var_490_bool = var_54_bool == 0; // 0x60 Not
	if(var_490_bool == 0) goto Label_103; // 0x61 JumpB
	sync(); // 0x62 Func
	IsDialogEnd(var_54_bool); // 0x64 ObjFunc
	goto Label_96; // 0x66 Jump
	
Label_103:
	var_491_object = Obj(); // 0x67 PushV
	var_491_object = var_45_object; // 0x68 Mov
	func_5680(); // 0x69 NEW_2
	StopDialog(var_51_object); // 0x6b Func
	GetReturnValue(var_53_int); // 0x6d ObjFunc
	var_44_int = var_53_int; // 0x6f Mov
	return 8; // 0x70 Return
}


func_6185(var_165_bool)
{
	var_167_int = 0; // 0x182a PushV
	func_5972(var_167_int); // 0x182b NEW_2
	var_168_int = 2; // 0x182d PushI
	var_165_bool = var_167_int == var_168_int; // 0x182e Eq2
	return 0; // 0x182f Return
}


func_5680()
{
	var_492_bool = 0; var_493_bool = 0; // 0x1630 PushV
	var_494_bool = 1; // 0x1631 PushB
	CameraSwitchToNormal(var_494_bool); // 0x1632 Func
	var_495_bool = 0; // 0x1634 PushV
	func_6965(var_495_bool); // 0x1635 NEW_2
	if(var_495_bool == 0) goto Label_5689; // 0x1637 JumpB
	goto Label_5697; // 0x1638 Jump
	
Label_5697:
	return 2; // 0x1641 Return
	
Label_5689:
	var_496_string = "head"; // 0x1639 PushS
	HasAnimationTrack(var_493_bool, var_496_string); // 0x163a Func
	var_497_bool = var_493_bool; // 0x163c Push
	if(var_497_bool == 0) goto Label_5697; // 0x163d JumpB
	var_498_string = "head"; // 0x163e PushS
	UnlookAsync(var_498_string); // 0x163f Func
}


func_6192(var_175_bool)
{
	var_177_int = 0; // 0x1831 PushV
	func_5972(var_177_int); // 0x1832 NEW_2
	var_178_int = 3; // 0x1834 PushI
	var_175_bool = var_177_int == var_178_int; // 0x1835 Eq2
	return 0; // 0x1836 Return
}


func_6708(var_155_string, var_156_int)
{
	var_157_string = ""; var_158_string = ""; // 0x1a34 PushV
	var_158_string = "idle"; // 0x1a35 MovS
	var_159_int = var_156_int; // 0x1a36 Push
	if(var_159_int == 0) goto Label_6713; // 0x1a37 JumpB
	var_158_string = var_158_string + var_156_int; // 0x1a38 Add2
	
Label_6713:
	var_155_string = var_158_string; // 0x1a39 Mov
	return 2; // 0x1a3a Return
}


func_4663(var_0_bool, var_368_bool, var_369_float)
{
	var_370_int = 0; var_371_bool = 0; var_372_int = 0; var_373_string = ""; var_374_int = 0; var_375_bool = 0; var_376_int = 0; var_377_string = ""; // 0x1237 PushV
	func_5002(var_377_string); // 0x1239 NEW_2
	irand(var_374_int, var_377_string); // 0x123b Func
	var_378_int = 1; // 0x123d PushI
	var_374_int = var_374_int + var_378_int; // 0x123e Add2
	Face(var_0_bool); // 0x123f Func
	var_379_bool = 1; // 0x1241 PushB
	SetAttackState(var_379_bool); // 0x1242 Func
	func_5998(); // 0x1245 NEW_2
	var_384_string = "all"; // 0x1247 PushS
	var_385_string = "attack_begin"; // 0x1248 PushS
	var_386_int = var_385_string + var_374_int; // 0x1249 Add
	PlayAnimation(var_384_string, var_386_int); // 0x124a Func
	WaitForAnimEnd(); // 0x124c Func
	func_4970(var_376_int, var_377_string); // 0x124f NEW_2
	var_402_bool = 0; var_403_object = Obj(); // 0x1251 PushV
	var_403_object = var_0_bool; // 0x1252 MovT
	func_5445(var_402_bool, var_403_object); // 0x1253 NEW_2
	var_404_bool = var_402_bool == 0; // 0x1255 Not
	if(var_404_bool == 0) goto Label_4699; // 0x1256 JumpB
	StopAsync(); // 0x1257 Func
	var_368_bool = 0; // 0x1259 MovB
	return 8; // 0x125a Return
	
Label_4699:
	var_405_float = 0; var_406_int = 0; // 0x125b PushV
	var_405_float = var_369_float; // 0x125c Mov
	var_406_int = var_374_int; // 0x125d Mov
	func_4624(var_377_string, var_405_float, var_406_int); // 0x125e NEW_2
	var_487_string = "all"; // 0x1260 PushS
	var_488_string = "attack_middle"; // 0x1261 PushS
	var_489_int = var_488_string + var_374_int; // 0x1262 Add
	HasAnimation(var_375_bool, var_487_string, var_489_int); // 0x1263 Func
	var_490_bool = var_375_bool; // 0x1265 Push
	if(var_490_bool == 0) goto Label_4780; // 0x1266 JumpB
	func_5998(); // 0x1268 NEW_2
	var_491_string = "all"; // 0x126a PushS
	var_492_string = "attack_middle"; // 0x126b PushS
	var_493_int = var_492_string + var_374_int; // 0x126c Add
	PlayAnimation(var_491_string, var_493_int); // 0x126d Func
	WaitForAnimEnd(); // 0x126f Func
	func_5002(var_377_string); // 0x1272 NEW_2
	var_494_bool = 0; var_495_object = Obj(); // 0x1274 PushV
	var_495_object = var_0_bool; // 0x1275 MovT
	func_5445(var_494_bool, var_495_object); // 0x1276 NEW_2
	var_496_bool = var_494_bool == 0; // 0x1278 Not
	if(var_496_bool == 0) goto Label_4734; // 0x1279 JumpB
	StopAsync(); // 0x127a Func
	var_368_bool = 0; // 0x127c MovB
	return 8; // 0x127d Return
	
Label_4734:
	var_497_float = 0; var_498_int = 0; // 0x127e PushV
	var_497_float = var_369_float; // 0x127f Mov
	var_498_int = var_374_int; // 0x1280 Mov
	func_4624(var_377_string, var_497_float, var_498_int); // 0x1281 NEW_2
	var_376_int = 1; // 0x1283 MovI
	
Label_4740:
	var_499_string = "attack_middle"; // 0x1284 PushS
	var_500_int = var_499_string + var_374_int; // 0x1285 Add
	var_501_string = "_"; // 0x1286 PushS
	var_502_int = var_500_int + var_501_string; // 0x1287 Add
	var_377_string = var_502_int + var_376_int; // 0x1288 Add2
	var_503_string = "all"; // 0x1289 PushS
	HasAnimation(var_375_bool, var_503_string, var_377_string); // 0x128a Func
	var_504_bool = var_375_bool == 0; // 0x128c Not
	if(var_504_bool == 0) goto Label_4751; // 0x128d JumpB
	goto Label_4780; // 0x128e Jump
	
Label_4780:
	var_505_bool = 0; // 0x12ac PushB
	SetAttackState(var_505_bool); // 0x12ad Func
	var_506_string = "all"; // 0x12af PushS
	var_507_string = "attack_end"; // 0x12b0 PushS
	var_508_int = var_507_string + var_374_int; // 0x12b1 Add
	PlayAnimation(var_506_string, var_508_int); // 0x12b2 Func
	var_509_bool = 0; // 0x12b4 PushV
	func_5016(var_509_bool); // 0x12b5 NEW_2
	if(var_509_bool == 0) goto Label_4798; // 0x12b7 JumpB
	var_510_bool = 0; var_511_float = 0; // 0x12b8 PushV
	var_511_float = 0.75; // 0x12b9 MovF
	func_4800(var_510_bool, var_511_float); // 0x12ba NEW_2
	StopAsync(); // 0x12bc Func
	
Label_4798:
	var_368_bool = 1; // 0x12be MovB
	return 8; // 0x12bf Return
	
Label_4751:
	func_5998(); // 0x1290 NEW_2
	var_519_string = "all"; // 0x1292 PushS
	PlayAnimation(var_519_string, var_377_string); // 0x1293 Func
	WaitForAnimEnd(); // 0x1295 Func
	func_5002(var_377_string); // 0x1298 NEW_2
	var_520_bool = 0; var_521_object = Obj(); // 0x129a PushV
	var_521_object = var_0_bool; // 0x129b MovT
	func_5445(var_520_bool, var_521_object); // 0x129c NEW_2
	var_522_bool = var_520_bool == 0; // 0x129e Not
	if(var_522_bool == 0) goto Label_4772; // 0x129f JumpB
	StopAsync(); // 0x12a0 Func
	var_368_bool = 0; // 0x12a2 MovB
	return 8; // 0x12a3 Return
	
Label_4772:
	var_523_float = 0; var_524_int = 0; // 0x12a4 PushV
	var_523_float = var_369_float; // 0x12a5 Mov
	var_524_int = var_374_int; // 0x12a6 Mov
	func_4624(var_377_string, var_523_float, var_524_int); // 0x12a7 NEW_2
	var_525_int = 1; // 0x12a9 PushI
	var_376_int = var_376_int + var_525_int; // 0x12aa Add2
	goto Label_4740; // 0x12ab Jump
}


func_6199(var_190_bool)
{
	var_192_int = 0; // 0x1838 PushV
	func_5972(var_192_int); // 0x1839 NEW_2
	var_193_int = 4; // 0x183b PushI
	var_190_bool = var_192_int == var_193_int; // 0x183c Eq2
	return 0; // 0x183d Return
}


func_6715(var_149_int)
{
	var_150_int = 0; var_151_bool = 0; var_152_int = 0; var_153_bool = 0; // 0x1a3b PushV
	var_152_int = 0; // 0x1a3c MovI
	
Label_6717:
	var_154_string = "all"; // 0x1a3d PushS
	var_155_string = ""; var_156_int = 0; // 0x1a3e PushV
	var_156_int = var_152_int; // 0x1a3f Mov
	func_6708(var_155_string, var_156_int); // 0x1a40 NEW_2
	HasAnimation(var_153_bool, var_154_string, var_155_string); // 0x1a42 Func
	var_160_bool = var_153_bool == 0; // 0x1a44 Not
	if(var_160_bool == 0) goto Label_6727; // 0x1a45 JumpB
	goto Label_6730; // 0x1a46 Jump
	
Label_6730:
	var_149_int = var_152_int; // 0x1a4a Mov
	return 4; // 0x1a4b Return
	
Label_6727:
	var_161_int = 1; // 0x1a47 PushI
	var_152_int = var_152_int + var_161_int; // 0x1a48 Add2
	goto Label_6717; // 0x1a49 Jump
}


func_6206(var_199_bool)
{
	var_201_int = 0; // 0x183f PushV
	func_5972(var_201_int); // 0x1840 NEW_2
	var_202_int = 5; // 0x1842 PushI
	var_199_bool = var_201_int == var_202_int; // 0x1843 Eq2
	return 0; // 0x1844 Return
}


func_5698(var_500_bool, var_501_object)
{
	var_502_bool = 0; var_503_object = Obj(); var_504_float = 0; // 0x1643 PushV
	var_503_object = var_501_object; // 0x1644 Mov
	var_504_float = 70; // 0x1645 MovI
	func_5706(var_503_object, var_504_float); // 0x1646 NEW_2
	var_500_bool = var_502_bool; // 0x1647 Mov
	return 0; // 0x1649 Return
}


func_6213(var_208_bool)
{
	var_210_int = 0; // 0x1846 PushV
	func_5972(var_210_int); // 0x1847 NEW_2
	var_211_int = 6; // 0x1849 PushI
	var_208_bool = var_210_int == var_211_int; // 0x184a Eq2
	return 0; // 0x184b Return
}


func_5706(var_502_bool, var_504_float)
{
	var_505_float = 0; var_506_cvector = CVector(0,0,0); var_507_cvector = CVector(0,0,0); var_508_cvector = CVector(0,0,0); var_509_cvector = CVector(0,0,0); var_510_cvector = CVector(0,0,0); var_511_cvector = CVector(0,0,0); var_512_bool = 0; var_513_float = 0; var_514_cvector = CVector(0,0,0); var_515_cvector = CVector(0,0,0); var_516_cvector = CVector(0,0,0); var_517_cvector = CVector(0,0,0); var_518_cvector = CVector(0,0,0); var_519_cvector = CVector(0,0,0); var_520_bool = 0; // 0x164a PushV
	GetPosition(var_514_cvector); // 0x164b ObjFunc
	GetEyesHeight(var_513_float); // 0x164d ObjFunc
	var_521_float = GetByIndex(var_514_cvector, 1); // 0x164f PushE
	var_521_float = var_521_float + var_513_float; // 0x1650 Add2
	SetByIndex(var_514_cvector, 1) = var_521_float; // 0x1651 PopE
	GetPosition(var_515_cvector); // 0x1652 Func
	GetEyesHeight(var_513_float); // 0x1654 Func
	var_522_float = GetByIndex(var_515_cvector, 1); // 0x1656 PushE
	var_522_float = var_522_float + var_513_float; // 0x1657 Add2
	SetByIndex(var_515_cvector, 1) = var_522_float; // 0x1658 PopE
	var_516_cvector = var_514_cvector - var_515_cvector; // 0x1659 Sub2
	var_523_float = GetByIndex(var_516_cvector, 1); // 0x165a PushE
	var_523_float = 0; // 0x165b MovI
	SetByIndex(var_516_cvector, 1) = var_523_float; // 0x165c PopE
	var_524_int = var_516_cvector | var_516_cvector; // 0x165d Or
	var_525_float = sqrt(var_524_int); // 0x165e Sqrt
	var_516_cvector = var_516_cvector / var_516_cvector; // 0x165f Div2
	var_517_cvector = -var_516_cvector; // 0x1660 Neg2
	var_526_float = var_516_cvector * var_504_float; // 0x1661 Mult
	var_527_cvector = CVector(0.0, 10.0, 0.0); // 0x1662 PushVec
	var_518_cvector = var_526_float - var_527_cvector; // 0x1663 Sub2
	var_519_cvector = var_515_cvector + var_518_cvector; // 0x1664 Add2
	IsOverrideActive(var_520_bool); // 0x1665 Func
	var_528_bool = var_520_bool; // 0x1667 Push
	if(var_528_bool == 0) goto Label_5739; // 0x1668 JumpB
	var_502_bool = 0; // 0x1669 MovB
	return 16; // 0x166a Return
	
Label_5739:
	StopWorld(); // 0x166b Func
	var_529_bool = 1; // 0x166d PushB
	CameraTransit(var_519_cvector, var_517_cvector, var_529_bool); // 0x166e Func
	var_530_float = GetByIndex(var_518_cvector, 0); // 0x1670 PushE
	var_531_float = GetByIndex(var_518_cvector, 2); // 0x1671 PushE
	Rotate(var_530_float, var_531_float); // 0x1672 Func
	CameraWaitForPlayFinish(); // 0x1674 Func
	ResumeWorld(); // 0x1676 Func
	var_502_bool = 1; // 0x1678 MovB
	return 16; // 0x1679 Return
}


func_6732(var_62_int)
{
	var_64_bool = 0; // 0x1a4d PushV
	func_7015(var_64_bool); // 0x1a4e NEW_2
	if(var_64_bool == 0) goto Label_6739; // 0x1a50 JumpB
	var_62_int = 2; // 0x1a51 MovI
	goto Label_6740; // 0x1a52 Jump
	
Label_6740:
	return 0; // 0x1a54 Return
	
Label_6739:
	var_62_int = 0; // 0x1a53 MovI
}


func_6220(var_181_bool)
{
	var_183_int = 0; // 0x184d PushV
	func_5972(var_183_int); // 0x184e NEW_2
	var_184_int = 7; // 0x1850 PushI
	var_181_bool = var_183_int == var_184_int; // 0x1851 Eq2
	return 0; // 0x1852 Return
}


func_3663(var_2_object)
{
	var_20_int = 110; // 0xe4f PushI
	KillTimer(var_20_int); // 0xe50 Func
	var_2_object = 0; // 0xe52 TMovB
	func_3799(var_18_object, var_19_bool); // 0xe54 NEW_2
	return 0; // 0xe56 Return
}


func_6227(var_218_bool)
{
	var_220_int = 0; // 0x1854 PushV
	func_5972(var_220_int); // 0x1855 NEW_2
	var_221_int = 8; // 0x1857 PushI
	var_218_bool = var_220_int == var_221_int; // 0x1858 Eq2
	return 0; // 0x1859 Return
}


func_6741(var_61_object)
{
	var_62_object = Obj(); // 0x1a56 PushV
	var_62_object = var_61_object; // 0x1a57 Mov
	TaskCall(6); // 0x1a58 TaskCall
	func_4071(var_63_object, var_62_object); // 0x1a59 NEW_2
	TaskReturn(); // 0x1a5a TaskReturn
	return 0; // 0x1a5c Return
}


func_3671(var_2_object)
{
	var_69_int = 110; // 0xe57 PushI
	KillTimer(var_69_int); // 0xe58 Func
	var_2_object = 0; // 0xe5a TMovB
	func_3806(var_23_bool, var_24_int); // 0xe5c NEW_2
	return 0; // 0xe5e Return
}


func_6234(var_224_bool)
{
	var_226_int = 0; // 0x185b PushV
	func_5972(var_226_int); // 0x185c NEW_2
	var_227_int = 9; // 0x185e PushI
	var_224_bool = var_226_int == var_227_int; // 0x185f Eq2
	return 0; // 0x1860 Return
}


func_6749(var_28_int, var_29_object)
{
	var_30_bool = 0; var_31_object = Obj(); // 0x1a5e PushV
	var_31_object = var_29_object; // 0x1a5f Mov
	func_5445(var_30_bool, var_31_object); // 0x1a60 NEW_2
	if(var_30_bool == 0) goto Label_6757; // 0x1a62 JumpB
	var_28_int = 2; // 0x1a63 MovI
	goto Label_6758; // 0x1a64 Jump
	
Label_6758:
	return 0; // 0x1a66 Return
	
Label_6757:
	var_28_int = 0; // 0x1a65 MovI
}


func_6241(var_270_bool)
{
	var_272_int = 0; // 0x1862 PushV
	func_5972(var_272_int); // 0x1863 NEW_2
	var_273_int = 10; // 0x1865 PushI
	var_270_bool = var_272_int == var_273_int; // 0x1866 Eq2
	return 0; // 0x1867 Return
}


func_6759(var_71_object)
{
	var_72_object = Obj(); // 0x1a68 PushV
	var_72_object = var_71_object; // 0x1a69 Mov
	TaskCall(7); // 0x1a6a TaskCall
	func_4346(var_72_object); // 0x1a6b NEW_2
	TaskReturn(); // 0x1a6c TaskReturn
	return 0; // 0x1a6e Return
}


func_3688(var_2_object, var_20_object)
{
	var_21_bool = 0; var_22_int = 0; var_23_bool = 0; var_24_int = 0; // 0xe68 PushV
	var_25_bool = 0; var_26_object = Obj(); // 0xe69 PushV
	var_26_object = var_20_object; // 0xe6a Mov
	func_5445(var_25_bool, var_26_object); // 0xe6b NEW_2
	var_59_bool = var_25_bool == 0; // 0xe6d Not
	if(var_59_bool == 0) goto Label_3696; // 0xe6e JumpB
	return 4; // 0xe6f Return
	
Label_3696:
	var_60_object = var_2_object; // 0xe70 PushT
	if(var_60_object == 0) goto Label_3699; // 0xe71 JumpB
	return 4; // 0xe72 Return
	
Label_3699:
	IsPlayerActor(var_20_object, var_23_bool); // 0xe73 Func
	var_61_bool = var_23_bool == 0; // 0xe75 Not
	if(var_61_bool == 0) goto Label_3704; // 0xe76 JumpB
	return 4; // 0xe77 Return
	
Label_3704:
	var_62_int = 0; var_63_object = Obj(); // 0xe78 PushV
	var_63_object = var_20_object; // 0xe79 Mov
	func_6732(var_63_object); // 0xe7a NEW_2
	var_24_int = var_62_int; // 0xe7b Mov
	var_65_int = 0; // 0xe7d PushI
	var_66_bool = var_24_int > var_65_int; // 0xe7e GT
	if(var_66_bool == 0) goto Label_3727; // 0xe7f JumpB
	var_67_int = 1; // 0xe80 PushI
	var_68_bool = var_24_int > var_67_int; // 0xe81 GT
	if(var_68_bool == 0) goto Label_3718; // 0xe82 JumpB
	func_3671(var_24_int); // 0xe84 NEW_2
	
Label_3718:
	var_70_object = Obj(); // 0xe86 PushV
	var_70_object = var_20_object; // 0xe87 Mov
	func_6741(var_70_object); // 0xe88 NEW_2
	var_2_object = 1; // 0xe8a TMovB
	var_135_int = 110; // 0xe8b PushI
	var_136_float = 10.0; // 0xe8c PushF
	SetTimer(var_135_int, var_136_float); // 0xe8d Func
	
Label_3727:
	return 4; // 0xe8f Return
}


func_6248(var_276_bool)
{
	var_278_int = 0; // 0x1869 PushV
	func_5972(var_278_int); // 0x186a NEW_2
	var_279_int = 11; // 0x186c PushI
	var_276_bool = var_278_int == var_279_int; // 0x186d Eq2
	return 0; // 0x186e Return
}


func_6255(var_282_bool)
{
	var_284_int = 0; // 0x1870 PushV
	func_5972(var_284_int); // 0x1871 NEW_2
	var_285_int = 12; // 0x1873 PushI
	var_282_bool = var_284_int == var_285_int; // 0x1874 Eq2
	return 0; // 0x1875 Return
}


func_6767(var_35_bool, var_36_object, var_37_bool)
{
	var_38_string = ""; var_39_string = ""; var_40_string = ""; var_41_string = ""; // 0x1a6f PushV
	var_42_bool = 0; var_43_object = Obj(); var_44_string = ""; // 0x1a70 PushV
	var_43_object = var_36_object; // 0x1a71 Mov
	var_44_string = "class"; // 0x1a72 MovS
	func_5319(var_42_bool, var_43_object, var_44_string); // 0x1a73 NEW_2
	var_51_bool = var_42_bool == 0; // 0x1a75 Not
	if(var_51_bool == 0) goto Label_6777; // 0x1a76 JumpB
	var_35_bool = 0; // 0x1a77 MovB
	return 4; // 0x1a78 Return
	
Label_6777:
	var_52_string = "class"; // 0x1a79 PushS
	GetProperty(var_52_string, var_40_string); // 0x1a7a Func
	var_53_string = "class"; // 0x1a7c PushS
	GetProperty(var_53_string, var_41_string); // 0x1a7d ObjFunc
	var_54_bool = 0; // 0x1a7f PushV
	var_54_bool = 0; // 0x1a80 MovB
	var_55_bool = var_37_bool == 0; // 0x1a81 Not
	if(var_55_bool == 0) goto Label_6790; // 0x1a82 JumpB
	var_56_bool = var_40_string == var_41_string; // 0x1a83 Eq
	if(var_56_bool == 0) goto Label_6790; // 0x1a84 JumpB
	var_54_bool = 1; // 0x1a85 MovB
	
Label_6790:
	if(var_54_bool == 0) goto Label_6793; // 0x1a86 JumpB
	var_35_bool = 1; // 0x1a87 MovB
	return 4; // 0x1a88 Return
	
Label_6793:
	var_57_string = "rat"; // 0x1a89 PushS
	var_58_bool = var_41_string == var_57_string; // 0x1a8a Eq
	if(var_58_bool == 0) goto Label_6799; // 0x1a8b JumpB
	var_35_bool = 0; // 0x1a8c MovB
	return 4; // 0x1a8d Return
	
Label_6799:
	var_59_string = "rat_big"; // 0x1a8f PushS
	var_60_bool = var_41_string == var_59_string; // 0x1a90 Eq
	if(var_60_bool == 0) goto Label_6805; // 0x1a91 JumpB
	var_35_bool = 0; // 0x1a92 MovB
	return 4; // 0x1a93 Return
	
Label_6805:
	var_61_string = "dog"; // 0x1a95 PushS
	var_62_bool = var_41_string == var_61_string; // 0x1a96 Eq
	if(var_62_bool == 0) goto Label_6811; // 0x1a97 JumpB
	var_35_bool = 0; // 0x1a98 MovB
	return 4; // 0x1a99 Return
	
Label_6811:
	var_63_string = "grabitel"; // 0x1a9b PushS
	var_64_bool = var_41_string == var_63_string; // 0x1a9c Eq
	if(var_64_bool == 0) goto Label_6817; // 0x1a9d JumpB
	var_35_bool = 0; // 0x1a9e MovB
	return 4; // 0x1a9f Return
	
Label_6817:
	var_65_string = "bomber"; // 0x1aa1 PushS
	var_66_bool = var_41_string == var_65_string; // 0x1aa2 Eq
	if(var_66_bool == 0) goto Label_6823; // 0x1aa3 JumpB
	var_35_bool = 0; // 0x1aa4 MovB
	return 4; // 0x1aa5 Return
	
Label_6823:
	var_67_string = "sanitar"; // 0x1aa7 PushS
	var_68_bool = var_41_string == var_67_string; // 0x1aa8 Eq
	if(var_68_bool == 0) goto Label_6829; // 0x1aa9 JumpB
	var_35_bool = 0; // 0x1aaa MovB
	return 4; // 0x1aab Return
	
Label_6829:
	var_69_string = "hunter"; // 0x1aad PushS
	var_70_bool = var_41_string == var_69_string; // 0x1aae Eq
	if(var_70_bool == 0) goto Label_6835; // 0x1aaf JumpB
	var_35_bool = 0; // 0x1ab0 MovB
	return 4; // 0x1ab1 Return
	
Label_6835:
	var_71_string = "soldier"; // 0x1ab3 PushS
	var_72_bool = var_41_string == var_71_string; // 0x1ab4 Eq
	if(var_72_bool == 0) goto Label_6840; // 0x1ab5 JumpB
	var_35_bool = 0; // 0x1ab6 MovB
	return 4; // 0x1ab7 Return
	
Label_6840:
	var_35_bool = 1; // 0x1ab8 MovB
	return 4; // 0x1ab9 Return
}


func_114(var_0_bool, var_1_object, var_2_object, var_3_object, var_116_object, var_117_object)
{
	var_0_bool = var_117_object; // 0x73 TMov
	var_1_object = var_116_object; // 0x74 TMov
	var_3_object = 0; // 0x75 TMovB
	var_122_int = 1; // 0x76 PushI
	if(var_122_int == 0) goto Label_712; // 0x77 JumpB
	var_123_bool = 0; var_124_object = Obj(); // 0x78 PushV
	var_124_object = var_1_object; // 0x79 MovT
	func_6026(var_124_object); // 0x7a NEW_2
	if(var_123_bool == 0) goto Label_486; // 0x7c JumpB
	var_131_string = ""; // 0x7d PushV
	var_131_string = "Neutral"; // 0x7e MovS
	func_742(var_117_object, var_131_string); // 0x7f NEW_2
	var_148_int = 543072; // 0x81 PushI
	SetMessage(var_148_int); // 0x82 TObjFunc
	ClearReplies(); // 0x84 TObjFunc
	var_149_bool = 0; var_150_object = Obj(); // 0x86 PushV
	var_150_object = var_1_object; // 0x87 MovT
	func_6038(var_149_bool, var_150_object); // 0x88 NEW_2
	if(var_149_bool == 0) goto Label_144; // 0x8a JumpB
	var_160_int = 543073; // 0x8b PushI
	var_161_int = 45531; // 0x8c PushI
	var_162_int = 45528; // 0x8d PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x8e TObjFunc
	
Label_144:
	var_163_bool = 0; var_164_object = Obj(); // 0x90 PushV
	var_164_object = var_1_object; // 0x91 MovT
	func_6048(var_163_bool, var_164_object); // 0x92 NEW_2
	if(var_163_bool == 0) goto Label_154; // 0x94 JumpB
	var_169_int = 543092; // 0x95 PushI
	var_170_int = 45550; // 0x96 PushI
	var_171_int = 45547; // 0x97 PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x98 TObjFunc
	
Label_154:
	var_172_bool = 0; // 0x9a PushV
	var_172_bool = 1; // 0x9b MovB
	var_173_bool = 0; var_174_object = Obj(); // 0x9c PushV
	var_174_object = var_1_object; // 0x9d MovT
	func_6058(var_173_bool, var_174_object); // 0x9e NEW_2
	if(var_173_bool == 0) goto Label_167; // 0xa0 JumpB
	var_179_bool = 0; var_180_object = Obj(); // 0xa1 PushV
	var_180_object = var_1_object; // 0xa2 MovT
	func_6098(var_179_bool, var_180_object); // 0xa3 NEW_2
	if(var_179_bool == 0) goto Label_167; // 0xa5 JumpB
	var_172_bool = 0; // 0xa6 MovB
	
Label_167:
	if(var_172_bool == 0) goto Label_173; // 0xa7 JumpB
	var_185_int = 543108; // 0xa8 PushI
	var_186_int = 45564; // 0xa9 PushI
	var_187_int = 45563; // 0xaa PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0xab TObjFunc
	
Label_173:
	var_188_bool = 0; var_189_object = Obj(); // 0xad PushV
	var_189_object = var_1_object; // 0xae MovT
	func_6068(var_188_bool, var_189_object); // 0xaf NEW_2
	if(var_188_bool == 0) goto Label_183; // 0xb1 JumpB
	var_194_int = 543101; // 0xb2 PushI
	var_195_int = 45557; // 0xb3 PushI
	var_196_int = 45556; // 0xb4 PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0xb5 TObjFunc
	
Label_183:
	var_197_bool = 0; var_198_object = Obj(); // 0xb7 PushV
	var_198_object = var_1_object; // 0xb8 MovT
	func_6078(var_197_bool, var_198_object); // 0xb9 NEW_2
	if(var_197_bool == 0) goto Label_193; // 0xbb JumpB
	var_203_int = 543117; // 0xbc PushI
	var_204_int = 45573; // 0xbd PushI
	var_205_int = 45572; // 0xbe PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0xbf TObjFunc
	
Label_193:
	var_206_bool = 0; var_207_object = Obj(); // 0xc1 PushV
	var_207_object = var_1_object; // 0xc2 MovT
	func_6088(var_206_bool, var_207_object); // 0xc3 NEW_2
	if(var_206_bool == 0) goto Label_203; // 0xc5 JumpB
	var_212_int = 543127; // 0xc6 PushI
	var_213_int = 45583; // 0xc7 PushI
	var_214_int = 45582; // 0xc8 PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0xc9 TObjFunc
	
Label_203:
	var_215_bool = 0; // 0xcb PushV
	var_215_bool = 1; // 0xcc MovB
	var_216_bool = 0; var_217_object = Obj(); // 0xcd PushV
	var_217_object = var_1_object; // 0xce MovT
	func_6108(var_216_bool, var_217_object); // 0xcf NEW_2
	if(var_216_bool == 0) goto Label_216; // 0xd1 JumpB
	var_222_bool = 0; var_223_object = Obj(); // 0xd2 PushV
	var_223_object = var_1_object; // 0xd3 MovT
	func_6118(var_222_bool, var_223_object); // 0xd4 NEW_2
	if(var_222_bool == 0) goto Label_216; // 0xd6 JumpB
	var_215_bool = 0; // 0xd7 MovB
	
Label_216:
	if(var_215_bool == 0) goto Label_222; // 0xd8 JumpB
	var_228_int = 543139; // 0xd9 PushI
	var_229_int = 45595; // 0xda PushI
	var_230_int = 45594; // 0xdb PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0xdc TObjFunc
	
Label_222:
	var_231_bool = 0; var_232_object = Obj(); // 0xde PushV
	var_232_object = var_1_object; // 0xdf MovT
	func_6038(var_231_bool, var_232_object); // 0xe0 NEW_2
	if(var_231_bool == 0) goto Label_232; // 0xe2 JumpB
	var_233_int = 543075; // 0xe3 PushI
	var_234_int = -1; // 0xe4 PushI
	var_235_int = 45530; // 0xe5 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0xe6 TObjFunc
	
Label_232:
	var_236_bool = 0; // 0xe8 PushV
	var_236_bool = 1; // 0xe9 MovB
	var_237_bool = 0; // 0xea PushV
	var_237_bool = 1; // 0xeb MovB
	var_238_bool = 0; // 0xec PushV
	var_238_bool = 1; // 0xed MovB
	var_239_bool = 0; var_240_object = Obj(); // 0xee PushV
	var_240_object = var_1_object; // 0xef MovT
	func_6048(var_239_bool, var_240_object); // 0xf0 NEW_2
	if(var_239_bool == 0) goto Label_249; // 0xf2 JumpB
	var_241_bool = 0; var_242_object = Obj(); // 0xf3 PushV
	var_242_object = var_1_object; // 0xf4 MovT
	func_6058(var_241_bool, var_242_object); // 0xf5 NEW_2
	if(var_241_bool == 0) goto Label_249; // 0xf7 JumpB
	var_238_bool = 0; // 0xf8 MovB
	
Label_249:
	if(var_238_bool == 0) goto Label_256; // 0xf9 JumpB
	var_243_bool = 0; var_244_object = Obj(); // 0xfa PushV
	var_244_object = var_1_object; // 0xfb MovT
	func_6068(var_243_bool, var_244_object); // 0xfc NEW_2
	if(var_243_bool == 0) goto Label_256; // 0xfe JumpB
	var_237_bool = 0; // 0xff MovB
	
Label_256:
	if(var_237_bool == 0) goto Label_263; // 0x100 JumpB
	var_245_bool = 0; var_246_object = Obj(); // 0x101 PushV
	var_246_object = var_1_object; // 0x102 MovT
	func_6078(var_245_bool, var_246_object); // 0x103 NEW_2
	if(var_245_bool == 0) goto Label_263; // 0x105 JumpB
	var_236_bool = 0; // 0x106 MovB
	
Label_263:
	if(var_236_bool == 0) goto Label_269; // 0x107 JumpB
	var_247_int = 543100; // 0x108 PushI
	var_248_int = -1; // 0x109 PushI
	var_249_int = 45555; // 0x10a PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x10b TObjFunc
	
Label_269:
	var_250_bool = 0; var_251_object = Obj(); // 0x10d PushV
	var_251_object = var_1_object; // 0x10e MovT
	func_6088(var_250_bool, var_251_object); // 0x10f NEW_2
	if(var_250_bool == 0) goto Label_279; // 0x111 JumpB
	var_252_int = 543125; // 0x112 PushI
	var_253_int = -1; // 0x113 PushI
	var_254_int = 45580; // 0x114 PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x115 TObjFunc
	
Label_279:
	var_255_bool = 0; // 0x117 PushV
	var_255_bool = 1; // 0x118 MovB
	var_256_bool = 0; // 0x119 PushV
	var_256_bool = 1; // 0x11a MovB
	var_257_bool = 0; var_258_object = Obj(); // 0x11b PushV
	var_258_object = var_1_object; // 0x11c MovT
	func_6098(var_257_bool, var_258_object); // 0x11d NEW_2
	if(var_257_bool == 0) goto Label_294; // 0x11f JumpB
	var_259_bool = 0; var_260_object = Obj(); // 0x120 PushV
	var_260_object = var_1_object; // 0x121 MovT
	func_6108(var_259_bool, var_260_object); // 0x122 NEW_2
	if(var_259_bool == 0) goto Label_294; // 0x124 JumpB
	var_256_bool = 0; // 0x125 MovB
	
Label_294:
	if(var_256_bool == 0) goto Label_301; // 0x126 JumpB
	var_261_bool = 0; var_262_object = Obj(); // 0x127 PushV
	var_262_object = var_1_object; // 0x128 MovT
	func_6118(var_261_bool, var_262_object); // 0x129 NEW_2
	if(var_261_bool == 0) goto Label_301; // 0x12b JumpB
	var_255_bool = 0; // 0x12c MovB
	
Label_301:
	if(var_255_bool == 0) goto Label_307; // 0x12d JumpB
	var_263_int = 543147; // 0x12e PushI
	var_264_int = -1; // 0x12f PushI
	var_265_int = 45602; // 0x130 PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0x131 TObjFunc
	
Label_307:
	var_266_bool = 0; // 0x133 PushV
	var_266_bool = 1; // 0x134 MovB
	var_267_bool = 0; // 0x135 PushV
	var_267_bool = 1; // 0x136 MovB
	var_268_bool = 0; var_269_object = Obj(); // 0x137 PushV
	var_269_object = var_1_object; // 0x138 MovT
	func_6128(var_268_bool, var_269_object); // 0x139 NEW_2
	if(var_268_bool == 0) goto Label_322; // 0x13b JumpB
	var_274_bool = 0; var_275_object = Obj(); // 0x13c PushV
	var_275_object = var_1_object; // 0x13d MovT
	func_6138(var_274_bool, var_275_object); // 0x13e NEW_2
	if(var_274_bool == 0) goto Label_322; // 0x140 JumpB
	var_267_bool = 0; // 0x141 MovB
	
Label_322:
	if(var_267_bool == 0) goto Label_329; // 0x142 JumpB
	var_280_bool = 0; var_281_object = Obj(); // 0x143 PushV
	var_281_object = var_1_object; // 0x144 MovT
	func_6148(var_280_bool, var_281_object); // 0x145 NEW_2
	if(var_280_bool == 0) goto Label_329; // 0x147 JumpB
	var_266_bool = 0; // 0x148 MovB
	
Label_329:
	if(var_266_bool == 0) goto Label_335; // 0x149 JumpB
	var_286_int = 543148; // 0x14a PushI
	var_287_int = -1; // 0x14b PushI
	var_288_int = 45603; // 0x14c PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x14d TObjFunc
	
Label_335:
	var_289_bool = 0; var_290_object = Obj(); // 0x14f PushV
	var_290_object = var_1_object; // 0x150 MovT
	func_6038(var_289_bool, var_290_object); // 0x151 NEW_2
	if(var_289_bool == 0) goto Label_345; // 0x153 JumpB
	var_291_int = 543074; // 0x154 PushI
	var_292_int = -1; // 0x155 PushI
	var_293_int = 45529; // 0x156 PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0x157 TObjFunc
	
Label_345:
	var_294_bool = 0; // 0x159 PushV
	var_294_bool = 1; // 0x15a MovB
	var_295_bool = 0; var_296_object = Obj(); // 0x15b PushV
	var_296_object = var_1_object; // 0x15c MovT
	func_6048(var_295_bool, var_296_object); // 0x15d NEW_2
	if(var_295_bool == 0) goto Label_358; // 0x15f JumpB
	var_297_bool = 0; var_298_object = Obj(); // 0x160 PushV
	var_298_object = var_1_object; // 0x161 MovT
	func_6058(var_297_bool, var_298_object); // 0x162 NEW_2
	if(var_297_bool == 0) goto Label_358; // 0x164 JumpB
	var_294_bool = 0; // 0x165 MovB
	
Label_358:
	if(var_294_bool == 0) goto Label_364; // 0x166 JumpB
	var_299_int = 543090; // 0x167 PushI
	var_300_int = -1; // 0x168 PushI
	var_301_int = 45545; // 0x169 PushI
	AddReply(var_299_int, var_300_int, var_301_int); // 0x16a TObjFunc
	
Label_364:
	var_302_bool = 0; // 0x16c PushV
	var_302_bool = 1; // 0x16d MovB
	var_303_bool = 0; var_304_object = Obj(); // 0x16e PushV
	var_304_object = var_1_object; // 0x16f MovT
	func_6048(var_303_bool, var_304_object); // 0x170 NEW_2
	if(var_303_bool == 0) goto Label_377; // 0x172 JumpB
	var_305_bool = 0; var_306_object = Obj(); // 0x173 PushV
	var_306_object = var_1_object; // 0x174 MovT
	func_6058(var_305_bool, var_306_object); // 0x175 NEW_2
	if(var_305_bool == 0) goto Label_377; // 0x177 JumpB
	var_302_bool = 0; // 0x178 MovB
	
Label_377:
	if(var_302_bool == 0) goto Label_383; // 0x179 JumpB
	var_307_int = 543099; // 0x17a PushI
	var_308_int = -1; // 0x17b PushI
	var_309_int = 45554; // 0x17c PushI
	AddReply(var_307_int, var_308_int, var_309_int); // 0x17d TObjFunc
	
Label_383:
	var_310_bool = 0; // 0x17f PushV
	var_310_bool = 1; // 0x180 MovB
	var_311_bool = 0; var_312_object = Obj(); // 0x181 PushV
	var_312_object = var_1_object; // 0x182 MovT
	func_6088(var_311_bool, var_312_object); // 0x183 NEW_2
	if(var_311_bool == 0) goto Label_396; // 0x185 JumpB
	var_313_bool = 0; var_314_object = Obj(); // 0x186 PushV
	var_314_object = var_1_object; // 0x187 MovT
	func_6118(var_313_bool, var_314_object); // 0x188 NEW_2
	if(var_313_bool == 0) goto Label_396; // 0x18a JumpB
	var_310_bool = 0; // 0x18b MovB
	
Label_396:
	if(var_310_bool == 0) goto Label_402; // 0x18c JumpB
	var_315_int = 543126; // 0x18d PushI
	var_316_int = -1; // 0x18e PushI
	var_317_int = 45581; // 0x18f PushI
	AddReply(var_315_int, var_316_int, var_317_int); // 0x190 TObjFunc
	
Label_402:
	var_318_bool = 0; // 0x192 PushV
	var_318_bool = 1; // 0x193 MovB
	var_319_bool = 0; // 0x194 PushV
	var_319_bool = 1; // 0x195 MovB
	var_320_bool = 0; // 0x196 PushV
	var_320_bool = 1; // 0x197 MovB
	var_321_bool = 0; var_322_object = Obj(); // 0x198 PushV
	var_322_object = var_1_object; // 0x199 MovT
	func_6098(var_321_bool, var_322_object); // 0x19a NEW_2
	if(var_321_bool == 0) goto Label_419; // 0x19c JumpB
	var_323_bool = 0; var_324_object = Obj(); // 0x19d PushV
	var_324_object = var_1_object; // 0x19e MovT
	func_6108(var_323_bool, var_324_object); // 0x19f NEW_2
	if(var_323_bool == 0) goto Label_419; // 0x1a1 JumpB
	var_320_bool = 0; // 0x1a2 MovB
	
Label_419:
	if(var_320_bool == 0) goto Label_426; // 0x1a3 JumpB
	var_325_bool = 0; var_326_object = Obj(); // 0x1a4 PushV
	var_326_object = var_1_object; // 0x1a5 MovT
	func_6128(var_325_bool, var_326_object); // 0x1a6 NEW_2
	if(var_325_bool == 0) goto Label_426; // 0x1a8 JumpB
	var_319_bool = 0; // 0x1a9 MovB
	
Label_426:
	if(var_319_bool == 0) goto Label_433; // 0x1aa JumpB
	var_327_bool = 0; var_328_object = Obj(); // 0x1ab PushV
	var_328_object = var_1_object; // 0x1ac MovT
	func_6148(var_327_bool, var_328_object); // 0x1ad NEW_2
	if(var_327_bool == 0) goto Label_433; // 0x1af JumpB
	var_318_bool = 0; // 0x1b0 MovB
	
Label_433:
	if(var_318_bool == 0) goto Label_439; // 0x1b1 JumpB
	var_329_int = 543149; // 0x1b2 PushI
	var_330_int = -1; // 0x1b3 PushI
	var_331_int = 45604; // 0x1b4 PushI
	AddReply(var_329_int, var_330_int, var_331_int); // 0x1b5 TObjFunc
	
Label_439:
	var_332_bool = 0; // 0x1b7 PushV
	var_332_bool = 1; // 0x1b8 MovB
	var_333_bool = 0; // 0x1b9 PushV
	var_333_bool = 1; // 0x1ba MovB
	var_334_bool = 0; // 0x1bb PushV
	var_334_bool = 1; // 0x1bc MovB
	var_335_bool = 0; // 0x1bd PushV
	var_335_bool = 1; // 0x1be MovB
	var_336_bool = 0; var_337_object = Obj(); // 0x1bf PushV
	var_337_object = var_1_object; // 0x1c0 MovT
	func_6068(var_336_bool, var_337_object); // 0x1c1 NEW_2
	if(var_336_bool == 0) goto Label_458; // 0x1c3 JumpB
	var_338_bool = 0; var_339_object = Obj(); // 0x1c4 PushV
	var_339_object = var_1_object; // 0x1c5 MovT
	func_6078(var_338_bool, var_339_object); // 0x1c6 NEW_2
	if(var_338_bool == 0) goto Label_458; // 0x1c8 JumpB
	var_335_bool = 0; // 0x1c9 MovB
	
Label_458:
	if(var_335_bool == 0) goto Label_465; // 0x1ca JumpB
	var_340_bool = 0; var_341_object = Obj(); // 0x1cb PushV
	var_341_object = var_1_object; // 0x1cc MovT
	func_6118(var_340_bool, var_341_object); // 0x1cd NEW_2
	if(var_340_bool == 0) goto Label_465; // 0x1cf JumpB
	var_334_bool = 0; // 0x1d0 MovB
	
Label_465:
	if(var_334_bool == 0) goto Label_472; // 0x1d1 JumpB
	var_342_bool = 0; var_343_object = Obj(); // 0x1d2 PushV
	var_343_object = var_1_object; // 0x1d3 MovT
	func_6138(var_342_bool, var_343_object); // 0x1d4 NEW_2
	if(var_342_bool == 0) goto Label_472; // 0x1d6 JumpB
	var_333_bool = 0; // 0x1d7 MovB
	
Label_472:
	if(var_333_bool == 0) goto Label_479; // 0x1d8 JumpB
	var_344_bool = 0; var_345_object = Obj(); // 0x1d9 PushV
	var_345_object = var_1_object; // 0x1da MovT
	func_6148(var_344_bool, var_345_object); // 0x1db NEW_2
	if(var_344_bool == 0) goto Label_479; // 0x1dd JumpB
	var_332_bool = 0; // 0x1de MovB
	
Label_479:
	if(var_332_bool == 0) goto Label_485; // 0x1df JumpB
	var_346_int = 543150; // 0x1e0 PushI
	var_347_int = -1; // 0x1e1 PushI
	var_348_int = 45605; // 0x1e2 PushI
	AddReply(var_346_int, var_347_int, var_348_int); // 0x1e3 TObjFunc
	
Label_485:
	goto Label_712; // 0x1e5 Jump
	
Label_712:
	var_349_bool = 0; // 0x2c8 PushV
	func_6965(var_349_bool); // 0x2c9 NEW_2
	if(var_349_bool == 0) goto Label_727; // 0x2cb JumpB
	
Label_716:
	lshWaitForAnimEnd(); // 0x2cc Func
	var_350_object = var_3_object; // 0x2ce PushT
	if(var_350_object == 0) goto Label_721; // 0x2cf JumpB
	goto Label_726; // 0x2d0 Jump
	
Label_726:
	goto Label_741; // 0x2d6 Jump
	
Label_741:
	return 0; // 0x2e5 Return
	
Label_721:
	var_351_string = ""; // 0x2d1 PushV
	var_351_string = var_2_object; // 0x2d2 MovT
	func_5759(var_351_string); // 0x2d3 NEW_2
	goto Label_716; // 0x2d5 Jump
	
Label_727:
	var_362_string = "all"; // 0x2d7 PushS
	var_363_string = "idle"; // 0x2d8 PushS
	PlayAnimation(var_362_string, var_363_string); // 0x2d9 Func
	
Label_731:
	WaitForAnimEnd(); // 0x2db Func
	var_364_object = var_3_object; // 0x2dd PushT
	if(var_364_object == 0) goto Label_736; // 0x2de JumpB
	goto Label_741; // 0x2df Jump
	
Label_736:
	var_365_string = "all"; // 0x2e0 PushS
	var_366_string = "idle"; // 0x2e1 PushS
	PlayAnimation(var_365_string, var_366_string); // 0x2e2 Func
	goto Label_731; // 0x2e4 Jump
	
Label_486:
	var_367_string = ""; // 0x1e6 PushV
	var_367_string = "Neutral"; // 0x1e7 MovS
	func_742(var_117_object, var_367_string); // 0x1e8 NEW_2
	var_368_int = 536854; // 0x1ea PushI
	SetMessage(var_368_int); // 0x1eb TObjFunc
	ClearReplies(); // 0x1ed TObjFunc
	var_369_int = 536855; // 0x1ef PushI
	var_370_int = -1; // 0x1f0 PushI
	var_371_int = 38691; // 0x1f1 PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0x1f2 TObjFunc
	var_372_bool = 0; // 0x1f4 PushV
	var_372_bool = 0; // 0x1f5 MovB
	var_373_bool = 0; var_374_object = Obj(); // 0x1f6 PushV
	var_374_object = var_1_object; // 0x1f7 MovT
	func_6038(var_373_bool, var_374_object); // 0x1f8 NEW_2
	if(var_373_bool == 0) goto Label_513; // 0x1fa JumpB
	var_375_bool = 0; var_376_object = Obj(); // 0x1fb PushV
	var_376_object = var_1_object; // 0x1fc MovT
	func_6158(var_375_bool, var_376_object); // 0x1fd NEW_2
	if(var_375_bool == 0) goto Label_513; // 0x1ff JumpB
	var_372_bool = 1; // 0x200 MovB
	
Label_513:
	if(var_372_bool == 0) goto Label_519; // 0x201 JumpB
	var_390_int = 536856; // 0x202 PushI
	var_391_int = 38693; // 0x203 PushI
	var_392_int = 38692; // 0x204 PushI
	AddReply(var_390_int, var_391_int, var_392_int); // 0x205 TObjFunc
	
Label_519:
	var_393_bool = 0; // 0x207 PushV
	var_393_bool = 0; // 0x208 MovB
	var_394_bool = 0; var_395_object = Obj(); // 0x209 PushV
	var_395_object = var_1_object; // 0x20a MovT
	func_6038(var_394_bool, var_395_object); // 0x20b NEW_2
	if(var_394_bool == 0) goto Label_532; // 0x20d JumpB
	var_396_bool = 0; var_397_object = Obj(); // 0x20e PushV
	var_397_object = var_1_object; // 0x20f MovT
	func_6168(var_396_bool, var_397_object); // 0x210 NEW_2
	if(var_396_bool == 0) goto Label_532; // 0x212 JumpB
	var_393_bool = 1; // 0x213 MovB
	
Label_532:
	if(var_393_bool == 0) goto Label_538; // 0x214 JumpB
	var_403_int = 536870; // 0x215 PushI
	var_404_int = 38709; // 0x216 PushI
	var_405_int = 38708; // 0x217 PushI
	AddReply(var_403_int, var_404_int, var_405_int); // 0x218 TObjFunc
	
Label_538:
	var_406_bool = 0; var_407_object = Obj(); // 0x21a PushV
	var_407_object = var_1_object; // 0x21b MovT
	func_6048(var_406_bool, var_407_object); // 0x21c NEW_2
	if(var_406_bool == 0) goto Label_548; // 0x21e JumpB
	var_408_int = 536885; // 0x21f PushI
	var_409_int = 38724; // 0x220 PushI
	var_410_int = 38723; // 0x221 PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0x222 TObjFunc
	
Label_548:
	var_411_bool = 0; var_412_object = Obj(); // 0x224 PushV
	var_412_object = var_1_object; // 0x225 MovT
	func_6058(var_411_bool, var_412_object); // 0x226 NEW_2
	if(var_411_bool == 0) goto Label_558; // 0x228 JumpB
	var_413_int = 536904; // 0x229 PushI
	var_414_int = 38743; // 0x22a PushI
	var_415_int = 38742; // 0x22b PushI
	AddReply(var_413_int, var_414_int, var_415_int); // 0x22c TObjFunc
	
Label_558:
	var_416_bool = 0; var_417_object = Obj(); // 0x22e PushV
	var_417_object = var_1_object; // 0x22f MovT
	func_6068(var_416_bool, var_417_object); // 0x230 NEW_2
	if(var_416_bool == 0) goto Label_568; // 0x232 JumpB
	var_418_int = 536916; // 0x233 PushI
	var_419_int = 38755; // 0x234 PushI
	var_420_int = 38754; // 0x235 PushI
	AddReply(var_418_int, var_419_int, var_420_int); // 0x236 TObjFunc
	
Label_568:
	var_421_bool = 0; // 0x238 PushV
	var_421_bool = 0; // 0x239 MovB
	var_422_bool = 0; var_423_object = Obj(); // 0x23a PushV
	var_423_object = var_1_object; // 0x23b MovT
	func_6088(var_422_bool, var_423_object); // 0x23c NEW_2
	if(var_422_bool == 0) goto Label_581; // 0x23e JumpB
	var_424_bool = 0; var_425_object = Obj(); // 0x23f PushV
	var_425_object = var_1_object; // 0x240 MovT
	func_6014(var_425_object); // 0x241 NEW_2
	if(var_424_bool == 0) goto Label_581; // 0x243 JumpB
	var_421_bool = 1; // 0x244 MovB
	
Label_581:
	if(var_421_bool == 0) goto Label_587; // 0x245 JumpB
	var_430_int = 536931; // 0x246 PushI
	var_431_int = 38770; // 0x247 PushI
	var_432_int = 38769; // 0x248 PushI
	AddReply(var_430_int, var_431_int, var_432_int); // 0x249 TObjFunc
	
Label_587:
	var_433_bool = 0; var_434_object = Obj(); // 0x24b PushV
	var_434_object = var_1_object; // 0x24c MovT
	func_6108(var_433_bool, var_434_object); // 0x24d NEW_2
	if(var_433_bool == 0) goto Label_597; // 0x24f JumpB
	var_435_int = 536943; // 0x250 PushI
	var_436_int = 38782; // 0x251 PushI
	var_437_int = 38781; // 0x252 PushI
	AddReply(var_435_int, var_436_int, var_437_int); // 0x253 TObjFunc
	
Label_597:
	var_438_bool = 0; var_439_object = Obj(); // 0x255 PushV
	var_439_object = var_1_object; // 0x256 MovT
	func_6118(var_438_bool, var_439_object); // 0x257 NEW_2
	if(var_438_bool == 0) goto Label_607; // 0x259 JumpB
	var_440_int = 536961; // 0x25a PushI
	var_441_int = 38800; // 0x25b PushI
	var_442_int = 38799; // 0x25c PushI
	AddReply(var_440_int, var_441_int, var_442_int); // 0x25d TObjFunc
	
Label_607:
	var_443_bool = 0; var_444_object = Obj(); // 0x25f PushV
	var_444_object = var_1_object; // 0x260 MovT
	func_6128(var_443_bool, var_444_object); // 0x261 NEW_2
	if(var_443_bool == 0) goto Label_617; // 0x263 JumpB
	var_445_int = 536978; // 0x264 PushI
	var_446_int = 38817; // 0x265 PushI
	var_447_int = 38816; // 0x266 PushI
	AddReply(var_445_int, var_446_int, var_447_int); // 0x267 TObjFunc
	
Label_617:
	var_448_bool = 0; // 0x269 PushV
	var_448_bool = 0; // 0x26a MovB
	var_449_bool = 0; var_450_object = Obj(); // 0x26b PushV
	var_450_object = var_1_object; // 0x26c MovT
	func_6138(var_449_bool, var_450_object); // 0x26d NEW_2
	if(var_449_bool == 0) goto Label_630; // 0x26f JumpB
	var_451_bool = 0; var_452_object = Obj(); // 0x270 PushV
	var_452_object = var_1_object; // 0x271 MovT
	func_6014(var_452_object); // 0x272 NEW_2
	if(var_451_bool == 0) goto Label_630; // 0x274 JumpB
	var_448_bool = 1; // 0x275 MovB
	
Label_630:
	if(var_448_bool == 0) goto Label_636; // 0x276 JumpB
	var_453_int = 536993; // 0x277 PushI
	var_454_int = 38832; // 0x278 PushI
	var_455_int = 38831; // 0x279 PushI
	AddReply(var_453_int, var_454_int, var_455_int); // 0x27a TObjFunc
	
Label_636:
	var_456_bool = 0; // 0x27c PushV
	var_456_bool = 0; // 0x27d MovB
	var_457_bool = 0; var_458_object = Obj(); // 0x27e PushV
	var_458_object = var_1_object; // 0x27f MovT
	func_6038(var_457_bool, var_458_object); // 0x280 NEW_2
	if(var_457_bool == 0) goto Label_649; // 0x282 JumpB
	var_459_bool = 0; var_460_object = Obj(); // 0x283 PushV
	var_460_object = var_1_object; // 0x284 MovT
	func_6014(var_460_object); // 0x285 NEW_2
	if(var_459_bool == 0) goto Label_649; // 0x287 JumpB
	var_456_bool = 1; // 0x288 MovB
	
Label_649:
	if(var_456_bool == 0) goto Label_655; // 0x289 JumpB
	var_461_int = 537006; // 0x28a PushI
	var_462_int = 38846; // 0x28b PushI
	var_463_int = 38845; // 0x28c PushI
	AddReply(var_461_int, var_462_int, var_463_int); // 0x28d TObjFunc
	
Label_655:
	var_464_bool = 0; // 0x28f PushV
	var_464_bool = 0; // 0x290 MovB
	var_465_bool = 0; var_466_object = Obj(); // 0x291 PushV
	var_466_object = var_1_object; // 0x292 MovT
	func_6038(var_465_bool, var_466_object); // 0x293 NEW_2
	if(var_465_bool == 0) goto Label_668; // 0x295 JumpB
	var_467_bool = 0; var_468_object = Obj(); // 0x296 PushV
	var_468_object = var_1_object; // 0x297 MovT
	func_6014(var_468_object); // 0x298 NEW_2
	if(var_467_bool == 0) goto Label_668; // 0x29a JumpB
	var_464_bool = 1; // 0x29b MovB
	
Label_668:
	if(var_464_bool == 0) goto Label_674; // 0x29c JumpB
	var_469_int = 537017; // 0x29d PushI
	var_470_int = 38857; // 0x29e PushI
	var_471_int = 38856; // 0x29f PushI
	AddReply(var_469_int, var_470_int, var_471_int); // 0x2a0 TObjFunc
	
Label_674:
	var_472_bool = 0; var_473_object = Obj(); // 0x2a2 PushV
	var_473_object = var_1_object; // 0x2a3 MovT
	func_6038(var_472_bool, var_473_object); // 0x2a4 NEW_2
	if(var_472_bool == 0) goto Label_684; // 0x2a6 JumpB
	var_474_int = 537025; // 0x2a7 PushI
	var_475_int = 38865; // 0x2a8 PushI
	var_476_int = 38864; // 0x2a9 PushI
	AddReply(var_474_int, var_475_int, var_476_int); // 0x2aa TObjFunc
	
Label_684:
	var_477_bool = 0; var_478_object = Obj(); // 0x2ac PushV
	var_478_object = var_1_object; // 0x2ad MovT
	func_6038(var_477_bool, var_478_object); // 0x2ae NEW_2
	if(var_477_bool == 0) goto Label_694; // 0x2b0 JumpB
	var_479_int = 537035; // 0x2b1 PushI
	var_480_int = 38875; // 0x2b2 PushI
	var_481_int = 38874; // 0x2b3 PushI
	AddReply(var_479_int, var_480_int, var_481_int); // 0x2b4 TObjFunc
	
Label_694:
	var_482_bool = 0; var_483_object = Obj(); // 0x2b6 PushV
	var_483_object = var_1_object; // 0x2b7 MovT
	func_6038(var_482_bool, var_483_object); // 0x2b8 NEW_2
	if(var_482_bool == 0) goto Label_704; // 0x2ba JumpB
	var_484_int = 537044; // 0x2bb PushI
	var_485_int = 38884; // 0x2bc PushI
	var_486_int = 38883; // 0x2bd PushI
	AddReply(var_484_int, var_485_int, var_486_int); // 0x2be TObjFunc
	
Label_704:
	var_487_int = 537050; // 0x2c0 PushI
	var_488_int = -1; // 0x2c1 PushI
	var_489_int = 38889; // 0x2c2 PushI
	AddReply(var_487_int, var_488_int, var_489_int); // 0x2c3 TObjFunc
	goto Label_712; // 0x2c5 Jump
}


func_5236(var_0_bool, var_1_object, var_27_int)
{
	var_28_int = 0; // 0x1475 PushI
	var_29_bool = var_27_int != var_28_int; // 0x1476 Neq
	if(var_29_bool == 0) goto Label_5241; // 0x1477 JumpB
	return 0; // 0x1478 Return
	
Label_5241:
	var_30_bool = 0; var_31_object = Obj(); // 0x1479 PushV
	var_31_object = var_1_object; // 0x147a MovT
	func_5274(var_30_bool, var_31_object); // 0x147b NEW_2
	var_66_bool = var_30_bool == 0; // 0x147d Not
	if(var_66_bool == 0) goto Label_5248; // 0x147e JumpB
	var_0_bool = 1; // 0x147f TMovB
	
Label_5248:
	var_67_int = 0; // 0x1480 PushI
	KillTimer(var_67_int); // 0x1481 Func
	Stop(); // 0x1483 Func
	return 0; // 0x1485 Return
}


func_6262(var_377_bool)
{
	var_379_bool = 0; // 0x1877 PushV
	var_379_bool = 0; // 0x1878 MovB
	var_380_int = 0; // 0x1879 PushV
	func_5981(var_380_int); // 0x187a NEW_2
	var_385_int = 0; // 0x187c PushI
	var_386_bool = var_380_int >= var_385_int; // 0x187d GE
	if(var_386_bool == 0) goto Label_6278; // 0x187e JumpB
	var_387_int = 0; // 0x187f PushV
	func_5981(var_387_int); // 0x1880 NEW_2
	var_388_int = 12; // 0x1882 PushI
	var_389_bool = var_387_int < var_388_int; // 0x1883 LT
	if(var_389_bool == 0) goto Label_6278; // 0x1884 JumpB
	var_379_bool = 1; // 0x1885 MovB
	
Label_6278:
	if(var_379_bool == 0) goto Label_6281; // 0x1886 JumpB
	var_377_bool = 1; // 0x1887 MovB
	return 0; // 0x1888 Return
	
Label_6281:
	var_377_bool = 0; // 0x1889 MovB
	return 0; // 0x188a Return
}


func_5754()
{
	var_541_bool = 1; // 0x167b PushB
	CameraSwitchToNormal(var_541_bool); // 0x167c Func
	return 0; // 0x167e Return
}


func_5759(var_351_string)
{
	var_352_bool = 0; var_353_float = 0; var_354_float = 0; var_355_bool = 0; var_356_float = 0; var_357_float = 0; // 0x167f PushV
	lshHasAnimation(var_355_bool, var_351_string); // 0x1680 Func
	var_358_bool = var_355_bool; // 0x1682 Push
	if(var_358_bool == 0) goto Label_5770; // 0x1683 JumpB
	lshGetAnimTimes(var_351_string, var_356_float, var_357_float); // 0x1684 Func
	var_359_bool = 0; // 0x1686 PushB
	lshPlayAnimation(var_356_float, var_357_float, var_359_bool); // 0x1687 Func
	goto Label_5774; // 0x1689 Jump
	
Label_5774:
	return 6; // 0x168e Return
	
Label_5770:
	var_360_string = "Can't find lsh animation : "; // 0x168a PushS
	var_361_int = var_360_string + var_351_string; // 0x168b Add
	Trace(var_361_int); // 0x168c Func
}


func_5258(var_0_bool)
{
	var_0_bool = 1; // 0x148a TMovB
	var_23_int = 0; // 0x148b PushI
	KillTimer(var_23_int); // 0x148c Func
	Stop(); // 0x148e Func
	return 0; // 0x1490 Return
}


func_6283(var_398_bool)
{
	var_400_int = 0; // 0x188c PushV
	func_5981(var_400_int); // 0x188d NEW_2
	var_401_int = 12; // 0x188f PushI
	var_402_bool = var_400_int >= var_401_int; // 0x1890 GE
	if(var_402_bool == 0) goto Label_6292; // 0x1891 JumpB
	var_398_bool = 1; // 0x1892 MovB
	return 0; // 0x1893 Return
	
Label_6292:
	var_398_bool = 0; // 0x1894 MovB
	return 0; // 0x1895 Return
}


func_5775(var_135_string, var_136_bool)
{
	var_139_bool = 0; var_140_float = 0; var_141_float = 0; var_142_bool = 0; var_143_float = 0; var_144_float = 0; // 0x168f PushV
	lshHasAnimation(var_142_bool, var_135_string); // 0x1690 Func
	var_145_bool = var_142_bool; // 0x1692 Push
	if(var_145_bool == 0) goto Label_5785; // 0x1693 JumpB
	lshGetAnimTimes(var_135_string, var_143_float, var_144_float); // 0x1694 Func
	lshPlayAnimation(var_143_float, var_144_float, var_136_bool); // 0x1696 Func
	goto Label_5789; // 0x1698 Jump
	
Label_5789:
	return 6; // 0x169d Return
	
Label_5785:
	var_146_string = "Can't find lsh animation : "; // 0x1699 PushS
	var_147_int = var_146_string + var_135_string; // 0x169a Add
	Trace(var_147_int); // 0x169b Func
}


func_3728(var_0_bool, var_1_object)
{
	var_106_float = 0; var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_bool = 0; var_110_object = Obj(); var_111_bool = 0; var_112_float = 0; var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0); var_115_bool = 0; var_116_object = Obj(); var_117_bool = 0; // 0xe90 PushV
	var_0_bool = 0; // 0xe91 TMovB
	var_1_object = 0; // 0xe92 TMovB
	var_118_float = 0.5; // 0xe93 PushF
	rand(var_112_float, var_118_float); // 0xe94 Func
	Sleep(var_112_float); // 0xe96 Func
	
Label_3736:
	var_119_bool = var_0_bool == 0; // 0xe98 Not
	if(var_119_bool == 0) goto Label_3786; // 0xe99 JumpB
	var_120_bool = var_1_object == 0; // 0xe9a Not
	if(var_120_bool == 0) goto Label_3755; // 0xe9b JumpB
	
Label_3740:
	GetPosition(var_114_cvector); // 0xe9c Func
	var_121_float = 0; // 0xe9e PushV
	func_3787(var_121_float); // 0xe9f NEW_2
	GetRandomPFPointInCircle(var_113_cvector, var_114_cvector, var_121_float, var_115_bool); // 0xea1 Func
	var_124_bool = var_115_bool; // 0xea3 Push
	if(var_124_bool == 0) goto Label_3750; // 0xea4 JumpB
	goto Label_3754; // 0xea5 Jump
	
Label_3754:
	goto Label_3756; // 0xeaa Jump
	
Label_3756:
	var_125_object = Obj(); var_126_cvector = CVector(0,0,0); // 0xeac PushV
	var_126_cvector = var_113_cvector; // 0xead Mov
	func_3815(var_125_object, var_126_cvector); // 0xeae NEW_2
	var_116_object = var_125_object; // 0xeaf Mov
	var_129_bool = var_116_object != 0; // 0xeb1 NullNeq
	if(var_129_bool == 0) goto Label_3781; // 0xeb2 JumpB
	RotatePath(var_116_object, var_117_bool); // 0xeb3 Func
	var_130_bool = var_117_bool; // 0xeb5 Push
	if(var_130_bool == 0) goto Label_3780; // 0xeb6 JumpB
	var_131_bool = 0; // 0xeb7 PushV
	func_3813(var_131_bool); // 0xeb8 NEW_2
	FollowPath(var_116_object, var_131_bool, var_117_bool); // 0xeba Func
	var_116_object = 0; // 0xebc SetNull
	var_132_bool = var_117_bool; // 0xebd Push
	if(var_132_bool == 0) goto Label_3780; // 0xebe JumpB
	TaskCall(5); // 0xec0 TaskCall
	func_3985(); // 0xec1 NEW_2
	TaskReturn(); // 0xec2 TaskReturn
	
Label_3780:
	goto Label_3784; // 0xec4 Jump
	
Label_3784:
	var_116_object = 0; // 0xec8 SetNull
	goto Label_3736; // 0xec9 Jump
	
Label_3781:
	var_184_int = 1; // 0xec5 PushI
	Sleep(var_184_int); // 0xec6 Func
	
Label_3750:
	var_185_int = 1; // 0xea6 PushI
	Sleep(var_185_int); // 0xea7 Func
	goto Label_3740; // 0xea9 Jump
	
Label_3755:
	var_1_object = 0; // 0xeab TMovB
	
Label_3786:
	return 12; // 0xeca Return
}


func_6294(var_107_int)
{
	var_108_int = 0; var_109_int = 0; // 0x1896 PushV
	var_110_string = "branch"; // 0x1897 PushS
	GetVariable(var_110_string, var_109_int); // 0x1898 Func
	var_111_int = 0; // 0x189a PushI
	var_112_bool = var_109_int == var_111_int; // 0x189b Eq
	if(var_112_bool == 0) goto Label_6304; // 0x189c JumpB
	var_107_int = 1; // 0x189d MovI
	return 2; // 0x189e Return
	
Label_6304:
	var_113_int = 1; // 0x18a0 PushI
	var_114_bool = var_109_int == var_113_int; // 0x18a1 Eq
	if(var_114_bool == 0) goto Label_6309; // 0x18a2 JumpB
	var_107_int = 2; // 0x18a3 MovI
	return 2; // 0x18a4 Return
	
Label_6309:
	var_107_int = 3; // 0x18a5 MovI
	return 2; // 0x18a6 Return
}


func_5274(var_30_bool, var_31_object)
{
	var_32_bool = 0; var_33_object = Obj(); // 0x149b PushV
	var_33_object = var_31_object; // 0x149c Mov
	func_5445(var_32_bool, var_33_object); // 0x149d NEW_2
	var_30_bool = var_32_bool; // 0x149e Mov
	return 0; // 0x14a0 Return
}


func_5790(var_23_object)
{
	var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0); // 0x169e PushV
	GetEyesHeight(var_26_float); // 0x169f ObjFunc
	var_27_cvector = CVector(0.0, 0.0, 0.0); // 0x16a1 MovV
	var_28_float = GetByIndex(var_27_cvector, 1); // 0x16a2 PushE
	var_28_float = var_26_float; // 0x16a3 Mov
	SetByIndex(var_27_cvector, 1) = var_28_float; // 0x16a4 PopE
	var_29_string = "head"; // 0x16a5 PushS
	LookAsync(var_23_object, var_29_string, var_27_cvector); // 0x16a6 Func
	return 4; // 0x16a8 Return
}


func_5281(var_219_string)
{
	var_219_string = "walk"; // 0x14a1 MovS
	return 0; // 0x14a2 Return
}


func_5283(var_220_string)
{
	var_220_string = "run"; // 0x14a3 MovS
	return 0; // 0x14a4 Return
}


func_5285(var_447_string, var_448_int)
{
	var_449_int = 2; // 0x14a6 PushI
	var_450_bool = var_448_int == var_449_int; // 0x14a7 Eq
	if(var_450_bool == 0) goto Label_5292; // 0x14a8 JumpB
	var_447_string = "fire"; // 0x14a9 MovS
	return 0; // 0x14aa Return
	
Label_5292:
	var_451_int = 1; // 0x14ac PushI
	var_452_bool = var_448_int == var_451_int; // 0x14ad Eq
	if(var_452_bool == 0) goto Label_5297; // 0x14ae JumpB
	var_447_string = "bullet"; // 0x14af MovS
	return 0; // 0x14b0 Return
	
Label_5297:
	var_447_string = "phys"; // 0x14b1 MovS
	return 0; // 0x14b2 Return
}


func_6311(var_158_int)
{
	var_159_int = 0; var_160_int = 0; // 0x18a7 PushV
	var_161_string = "branch"; // 0x18a8 PushS
	GetVariable(var_161_string, var_160_int); // 0x18a9 Func
	var_158_int = var_160_int; // 0x18ab Mov
	return 2; // 0x18ac Return
}


func_5801()
{
	var_22_bool = 0; // 0x16a9 PushV
	func_6965(var_22_bool); // 0x16aa NEW_2
	if(var_22_bool == 0) goto Label_5807; // 0x16ac JumpB
	lshStopSpeech(); // 0x16ad Func
	
Label_5807:
	return 0; // 0x16af Return
}


func_6317(var_36_object)
{
	var_37_int = 0; // 0x18ae PushV
	func_6311(var_37_int); // 0x18af NEW_2
	var_41_int = 1; // 0x18b1 PushI
	var_42_bool = var_37_int == var_41_int; // 0x18b2 Eq
	if(var_42_bool == 0) goto Label_6327; // 0x18b3 JumpB
	WorkWithCorpse(var_36_object); // 0x18b4 Func
	goto Label_6329; // 0x18b6 Jump
	
Label_6329:
	return 0; // 0x18b9 Return
	
Label_6327:
	Barter(var_36_object); // 0x18b7 Func
}


func_4270()
{
	StopGroup0(); // 0x10ae Func
	StopAsync(); // 0x10b0 Func
	var_32_string = "head"; // 0x10b2 PushS
	UnlookAsync(var_32_string); // 0x10b3 Func
	var_33_int = 111; // 0x10b5 PushI
	KillTimer(var_33_int); // 0x10b6 Func
	return 0; // 0x10b8 Return
}


func_5808(var_58_string, var_59_int, var_60_int)
{
	var_61_bool = 0; var_62_bool = 0; // 0x16b0 PushV
	var_63_bool = 0; var_64_int = 0; var_65_int = 0; // 0x16b1 PushV
	var_64_int = var_59_int; // 0x16b2 Mov
	var_65_int = var_60_int; // 0x16b3 Mov
	func_5909(var_63_bool, var_64_int, var_65_int); // 0x16b4 NEW_2
	if(var_63_bool == 0) goto Label_5818; // 0x16b6 JumpB
	var_66_int = 0; // 0x16b7 PushI
	AddItem(var_62_bool, var_58_string, var_66_int); // 0x16b8 Func
	
Label_5818:
	return 2; // 0x16ba Return
}


func_5299(var_53_cvector)
{
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); // 0x14b3 PushV
	GetPosition(var_57_cvector); // 0x14b4 Func
	GetPosition(var_58_cvector); // 0x14b6 ObjFunc
	var_53_cvector = var_58_cvector - var_57_cvector; // 0x14b8 Sub2
	return 4; // 0x14b9 Return
}


func_6842(var_86_int, var_87_object)
{
	var_89_int = 0; var_90_object = Obj(); // 0x1abb PushV
	var_90_object = var_87_object; // 0x1abc Mov
	func_6749(var_89_int, var_90_object); // 0x1abd NEW_2
	var_86_int = var_89_int; // 0x1abe Mov
	return 0; // 0x1ac0 Return
}


func_6330(var_116_int, var_117_int)
{
	var_127_int = 0; var_128_bool = 0; var_129_int = 0; var_130_bool = 0; // 0x18ba PushV
	var_131_bool = var_116_int > var_117_int; // 0x18bb GT
	if(var_131_bool == 0) goto Label_6337; // 0x18bc JumpB
	var_132_string = "GenerateMoney: iMin > iMax"; // 0x18bd PushS
	Trace(var_132_string); // 0x18be Func
	return 4; // 0x18c0 Return
	
Label_6337:
	var_129_int = 0; // 0x18c1 MovI
	var_133_bool = var_116_int != var_117_int; // 0x18c2 Neq
	if(var_133_bool == 0) goto Label_6344; // 0x18c3 JumpB
	var_134_int = var_117_int - var_116_int; // 0x18c4 Sub
	irand(var_129_int, var_134_int); // 0x18c5 Func
	goto Label_6348; // 0x18c7 Jump
	
Label_6348:
	var_129_int = var_129_int + var_116_int; // 0x18cc Add2
	var_135_int = 0; // 0x18cd PushI
	var_136_bool = var_129_int == var_135_int; // 0x18ce Eq
	if(var_136_bool == 0) goto Label_6353; // 0x18cf JumpB
	return 4; // 0x18d0 Return
	
Label_6353:
	var_137_int = 0; var_138_string = ""; // 0x18d1 PushV
	var_138_string = "Money"; // 0x18d2 MovS
	func_6530(var_137_int, var_138_string); // 0x18d3 NEW_2
	var_141_int = 0; // 0x18d5 PushI
	AddItem(var_130_bool, var_137_int, var_141_int, var_129_int); // 0x18d6 Func
	return 4; // 0x18d8 Return
	
Label_6344:
	var_142_int = 0; // 0x18c8 PushI
	var_143_bool = var_116_int == var_142_int; // 0x18c9 Eq
	if(var_143_bool == 0) goto Label_6348; // 0x18ca JumpB
	return 4; // 0x18cb Return
}


func_5819(var_36_string, var_37_int, var_38_int, var_39_int)
{
	var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_bool = 0; // 0x16bb PushV
	var_44_bool = 0; var_45_int = 0; var_46_int = 0; // 0x16bc PushV
	var_45_int = var_37_int; // 0x16bd Mov
	var_46_int = var_38_int; // 0x16be Mov
	func_5909(var_44_bool, var_45_int, var_46_int); // 0x16bf NEW_2
	if(var_44_bool == 0) goto Label_5833; // 0x16c1 JumpB
	irand(var_42_int, var_39_int); // 0x16c2 Func
	var_49_int = 0; // 0x16c4 PushI
	var_50_int = 1; // 0x16c5 PushI
	var_51_int = var_42_int + var_50_int; // 0x16c6 Add
	AddItem(var_43_bool, var_36_string, var_49_int, var_51_int); // 0x16c7 Func
	
Label_5833:
	return 4; // 0x16c9 Return
}


func_5306(var_37_float)
{
	var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); // 0x14ba PushV
	GetPosition(var_42_cvector); // 0x14bb Func
	GetPosition(var_43_cvector); // 0x14bd ObjFunc
	var_44_cvector = var_43_cvector - var_42_cvector; // 0x14bf Sub2
	var_37_float = var_44_cvector | var_44_cvector; // 0x14c0 Or2
	return 6; // 0x14c1 Return
}


func_4800(var_510_bool, var_511_float)
{
	var_512_float = 0; var_513_bool = 0; var_514_float = 0; var_515_bool = 0; // 0x12c0 PushV
	rand(var_514_float); // 0x12c1 Func
	var_516_bool = var_514_float < var_511_float; // 0x12c3 LT
	if(var_516_bool == 0) goto Label_4820; // 0x12c4 JumpB
	
Label_4805:
	IsAnimationPlaying(var_515_bool); // 0x12c5 Func
	var_517_bool = var_515_bool == 0; // 0x12c7 Not
	if(var_517_bool == 0) goto Label_4810; // 0x12c8 JumpB
	goto Label_4819; // 0x12c9 Jump
	
Label_4819:
	goto Label_4825; // 0x12d3 Jump
	
Label_4825:
	var_510_bool = 0; // 0x12d9 MovB
	return 4; // 0x12da Return
	
Label_4810:
	var_518_bool = 0; // 0x12ca PushV
	func_4898(var_518_bool); // 0x12cb NEW_2
	if(var_518_bool == 0) goto Label_4816; // 0x12cd JumpB
	var_510_bool = 1; // 0x12ce MovB
	return 4; // 0x12cf Return
	
Label_4816:
	sync(); // 0x12d0 Func
	goto Label_4805; // 0x12d2 Jump
	
Label_4820:
	WaitForAnimEnd(); // 0x12d4 Func
	func_5002(var_515_bool); // 0x12d7 NEW_2
}


func_6849(var_125_object)
{
	var_126_object = Obj(); // 0x1ac2 PushV
	var_126_object = var_125_object; // 0x1ac3 Mov
	func_6759(var_126_object); // 0x1ac4 NEW_2
	return 0; // 0x1ac6 Return
}


func_5314(var_103_bool, var_104_object)
{
	var_105_bool = 0; var_106_bool = 0; // 0x14c2 PushV
	IsPlayerActor(var_104_object, var_106_bool); // 0x14c3 Func
	var_103_bool = var_106_bool; // 0x14c5 Mov
	return 2; // 0x14c6 Return
}


func_5319(var_54_bool, var_55_object, var_56_string)
{
	var_57_bool = 0; var_58_bool = 0; // 0x14c7 PushV
	var_59_string = "HasProperty"; // 0x14c8 PushS
	var_60_int = 2; // 0x14c9 PushI
	var_61_bool = IsFuncExist(var_55_object, var_59_string, var_60_int); // 0x14ca FuncExist
	var_62_bool = var_61_bool == 0; // 0x14cb Not
	if(var_62_bool == 0) goto Label_5327; // 0x14cc JumpB
	var_54_bool = 0; // 0x14cd MovB
	return 2; // 0x14ce Return
	
Label_5327:
	HasProperty(var_56_string, var_58_bool); // 0x14cf ObjFunc
	var_54_bool = var_58_bool; // 0x14d1 Mov
	return 2; // 0x14d2 Return
}


func_6855(var_28_bool, var_29_object, var_30_object, var_31_float, var_32_bool)
{
	var_33_bool = 0; var_34_bool = 0; // 0x1ac7 PushV
	var_35_bool = 0; var_36_object = Obj(); var_37_bool = 0; // 0x1ac8 PushV
	var_36_object = var_30_object; // 0x1ac9 Mov
	var_37_bool = !var_32_bool; // 0x1aca Not2
	func_6767(var_35_bool, var_36_object, var_37_bool); // 0x1acb NEW_2
	var_73_bool = var_35_bool == 0; // 0x1acd Not
	if(var_73_bool == 0) goto Label_6865; // 0x1ace JumpB
	var_28_bool = 0; // 0x1acf MovB
	return 2; // 0x1ad0 Return
	
Label_6865:
	CanSee(var_34_bool, var_29_object); // 0x1ad1 Func
	var_74_bool = 0; // 0x1ad3 PushV
	var_74_bool = 1; // 0x1ad4 MovB
	var_75_bool = var_34_bool; // 0x1ad5 Push
	if(var_75_bool == 0) goto Label_6879; // 0x1ad6 JumpB
	var_76_float = 0; var_77_object = Obj(); // 0x1ad7 PushV
	var_77_object = var_29_object; // 0x1ad8 Mov
	func_5306(var_77_object); // 0x1ad9 NEW_2
	var_84_float = var_31_float * var_31_float; // 0x1adb Mult
	var_85_bool = var_76_float <= var_84_float; // 0x1adc LE
	if(var_85_bool == 0) goto Label_6879; // 0x1add JumpB
	var_74_bool = 0; // 0x1ade MovB
	
Label_6879:
	if(var_74_bool == 0) goto Label_6882; // 0x1adf JumpB
	var_28_bool = 1; // 0x1ae0 MovB
	return 2; // 0x1ae1 Return
	
Label_6882:
	var_28_bool = 0; // 0x1ae2 MovB
	return 2; // 0x1ae3 Return
}


func_5834(var_45_string)
{
	var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_float = 0; var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_bool = 0; var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_bool = 0; var_59_float = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); // 0x16ca PushV
	IsExisting3DSound(var_54_bool, var_45_string); // 0x16cb Func
	var_62_bool = var_54_bool == 0; // 0x16cd Not
	if(var_62_bool == 0) goto Label_5859; // 0x16ce JumpB
	var_55_int = 0; // 0x16cf MovI
	
Label_5840:
	var_63_int = 1; // 0x16d0 PushI
	var_64_int = var_55_int + var_63_int; // 0x16d1 Add
	var_65_int = var_45_string + var_64_int; // 0x16d2 Add
	IsExisting3DSound(var_56_bool, var_65_int); // 0x16d3 Func
	var_66_bool = var_56_bool == 0; // 0x16d5 Not
	if(var_66_bool == 0) goto Label_5848; // 0x16d6 JumpB
	goto Label_5851; // 0x16d7 Jump
	
Label_5851:
	var_67_bool = var_55_int == 0; // 0x16db Not
	if(var_67_bool == 0) goto Label_5854; // 0x16dc JumpB
	return 16; // 0x16dd Return
	
Label_5854:
	irand(var_57_int, var_55_int); // 0x16de Func
	var_68_int = 1; // 0x16e0 PushI
	var_69_int = var_57_int + var_68_int; // 0x16e1 Add
	var_45_string = var_45_string + var_69_int; // 0x16e2 Add2
	
Label_5859:
	Is3DSoundLoaded(var_58_bool, var_45_string); // 0x16e3 Func
	var_70_bool = var_58_bool; // 0x16e5 Push
	if(var_70_bool == 0) goto Label_5874; // 0x16e6 JumpB
	GetEyesHeight(var_59_float); // 0x16e7 Func
	GetDirection(var_60_cvector); // 0x16e9 Func
	var_71_int = 50; // 0x16eb PushI
	var_61_cvector = var_60_cvector * var_71_int; // 0x16ec Mult2
	var_72_float = GetByIndex(var_61_cvector, 1); // 0x16ed PushE
	var_72_float = var_72_float + var_59_float; // 0x16ee Add2
	SetByIndex(var_61_cvector, 1) = var_72_float; // 0x16ef PopE
	PlayGlobalSound(var_45_string, var_61_cvector); // 0x16f0 Func
	
Label_5874:
	return 16; // 0x16f2 Return
	
Label_5848:
	var_73_int = 1; // 0x16d8 PushI
	var_55_int = var_55_int + var_73_int; // 0x16d9 Add2
	goto Label_5840; // 0x16da Jump
}


func_3787(var_121_float)
{
	var_122_float = 0; var_123_float = 0; // 0xecb PushV
	GetCameraFarDistance(var_123_float); // 0xecc Func
	var_121_float = var_123_float; // 0xece Mov
	return 2; // 0xecf Return
}


func_5331(var_419_float, var_420_object, var_421_float, var_422_int)
{
	var_426_int = 0; var_427_string = ""; var_428_int = 0; var_429_float = 0; var_430_float = 0; var_431_float = 0; var_432_int = 0; var_433_string = ""; var_434_int = 0; var_435_float = 0; var_436_float = 0; var_437_float = 0; // 0x14d3 PushV
	var_438_bool = 0; var_439_object = Obj(); var_440_string = ""; // 0x14d4 PushV
	var_439_object = var_420_object; // 0x14d5 Mov
	var_440_string = "health"; // 0x14d6 MovS
	func_5319(var_438_bool, var_439_object, var_440_string); // 0x14d7 NEW_2
	var_441_bool = var_438_bool == 0; // 0x14d9 Not
	if(var_441_bool == 0) goto Label_5341; // 0x14da JumpB
	var_419_float = 0.0; // 0x14db MovF
	return 12; // 0x14dc Return
	
Label_5341:
	var_442_bool = 0; var_443_object = Obj(); var_444_string = ""; // 0x14dd PushV
	var_443_object = var_420_object; // 0x14de Mov
	var_444_string = "armor"; // 0x14df MovS
	func_5319(var_442_bool, var_443_object, var_444_string); // 0x14e0 NEW_2
	var_445_bool = var_442_bool == 0; // 0x14e2 Not
	if(var_445_bool == 0) goto Label_5350; // 0x14e3 JumpB
	var_432_int = 0; // 0x14e4 MovI
	goto Label_5353; // 0x14e5 Jump
	
Label_5353:
	var_446_string = "armor_"; // 0x14e9 PushS
	var_447_string = ""; var_448_int = 0; // 0x14ea PushV
	var_448_int = var_422_int; // 0x14eb Mov
	func_5285(var_447_string, var_448_int); // 0x14ec NEW_2
	var_433_string = var_446_string + var_447_string; // 0x14ee Add2
	var_453_bool = 0; var_454_object = Obj(); var_455_string = ""; // 0x14ef PushV
	var_454_object = var_420_object; // 0x14f0 Mov
	var_455_string = var_433_string; // 0x14f1 Mov
	func_5319(var_453_bool, var_454_object, var_455_string); // 0x14f2 NEW_2
	var_456_bool = var_453_bool == 0; // 0x14f4 Not
	if(var_456_bool == 0) goto Label_5368; // 0x14f5 JumpB
	var_434_int = 0; // 0x14f6 MovI
	goto Label_5370; // 0x14f7 Jump
	
Label_5370:
	var_457_float = 0; var_458_float = 0; var_459_float = 0; // 0x14fa PushV
	var_460_int = var_432_int + var_434_int; // 0x14fb Add
	var_461_float = 100.0; // 0x14fc PushF
	var_458_float = var_460_int / var_460_int; // 0x14fd Div2
	var_459_float = 1; // 0x14fe MovI
	func_5891(var_457_float, var_458_float, var_459_float); // 0x14ff NEW_2
	var_435_float = var_457_float; // 0x1500 Mov
	var_463_string = "health"; // 0x1502 PushS
	GetProperty(var_463_string, var_436_float); // 0x1503 ObjFunc
	var_464_int = 1; // 0x1505 PushI
	var_465_int = var_464_int - var_435_float; // 0x1506 Sub
	var_437_float = var_421_float * var_465_int; // 0x1507 Mult2
	var_466_string = "health"; // 0x1508 PushS
	var_467_float = 0; var_468_float = 0; var_469_float = 0; var_470_float = 0; // 0x1509 PushV
	var_468_float = var_436_float - var_437_float; // 0x150a Sub2
	var_469_float = 0; // 0x150b MovI
	var_470_float = 1; // 0x150c MovI
	func_5898(var_467_float, var_468_float, var_469_float, var_470_float); // 0x150d NEW_2
	SetProperty(var_466_string, var_467_float); // 0x150f ObjFunc
	var_473_bool = 0; var_474_object = Obj(); // 0x1511 PushV
	var_474_object = var_420_object; // 0x1512 Mov
	func_5314(var_473_bool, var_474_object); // 0x1513 NEW_2
	if(var_473_bool == 0) goto Label_5402; // 0x1515 JumpB
	var_475_float = 0; // 0x1516 PushV
	var_475_float = -var_437_float; // 0x1517 Neg2
	func_5955(var_475_float); // 0x1518 NEW_2
	
Label_5402:
	var_419_float = var_437_float; // 0x151a Mov
	return 12; // 0x151b Return
	
Label_5368:
	GetProperty(var_433_string, var_434_int); // 0x14f8 ObjFunc
	
Label_5350:
	var_483_string = "armor"; // 0x14e6 PushS
	GetProperty(var_483_string, var_432_int); // 0x14e7 ObjFunc
}


func_3799(var_0_bool, var_1_object)
{
	var_0_bool = 1; // 0xed7 TMovB
	var_1_object = 0; // 0xed8 TMovB
	Stop(); // 0xed9 Func
	StopGroup0(); // 0xedb Func
	return 0; // 0xedd Return
}


func_6361(var_164_string)
{
	var_165_object = Obj(); var_166_int = 0; var_167_bool = 0; var_168_object = Obj(); var_169_int = 0; var_170_bool = 0; // 0x18d9 PushV
	CreateInvItem(var_168_object); // 0x18da Func
	SetItemName(var_164_string); // 0x18dc ObjFunc
	var_171_string = "Organ"; // 0x18de PushS
	var_172_int = 1; // 0x18df PushI
	SetProperty(var_171_string, var_172_int); // 0x18e0 ObjFunc
	GetItemID(var_169_int); // 0x18e2 ObjFunc
	var_173_int = 0; // 0x18e4 PushI
	var_174_int = 1; // 0x18e5 PushI
	AddItem(var_170_bool, var_168_object, var_173_int, var_174_int); // 0x18e6 Func
	return 6; // 0x18e8 Return
}


func_4827(var_0_bool, var_307_bool, var_308_float)
{
	var_309_bool = 0; var_310_cvector = CVector(0,0,0); var_311_cvector = CVector(0,0,0); var_312_cvector = CVector(0,0,0); var_313_float = 0; var_314_bool = 0; var_315_cvector = CVector(0,0,0); var_316_cvector = CVector(0,0,0); var_317_cvector = CVector(0,0,0); var_318_float = 0; // 0x12db PushV
	
Label_4828:
	IsAnimationPlaying(var_314_bool); // 0x12dc Func
	var_319_bool = var_314_bool == 0; // 0x12de Not
	if(var_319_bool == 0) goto Label_4833; // 0x12df JumpB
	goto Label_4865; // 0x12e0 Jump
	
Label_4865:
	func_5002(var_318_float); // 0x1302 NEW_2
	var_307_bool = 0; // 0x1304 MovB
	return 10; // 0x1305 Return
	
Label_4833:
	var_320_bool = 0; // 0x12e1 PushV
	func_4898(var_320_bool); // 0x12e2 NEW_2
	if(var_320_bool == 0) goto Label_4839; // 0x12e4 JumpB
	var_307_bool = 1; // 0x12e5 MovB
	return 10; // 0x12e6 Return
	
Label_4839:
	var_363_bool = 0; var_364_object = Obj(); // 0x12e7 PushV
	var_364_object = var_0_bool; // 0x12e8 MovT
	func_5445(var_363_bool, var_364_object); // 0x12e9 NEW_2
	var_365_bool = var_363_bool == 0; // 0x12eb Not
	if(var_365_bool == 0) goto Label_4847; // 0x12ec JumpB
	var_307_bool = 0; // 0x12ed MovB
	return 10; // 0x12ee Return
	
Label_4847:
	GetPFPosition(var_315_cvector); // 0x12ef TObjFunc
	GetPFPosition(var_316_cvector); // 0x12f1 Func
	var_317_cvector = var_315_cvector - var_316_cvector; // 0x12f3 Sub2
	var_318_float = var_317_cvector | var_317_cvector; // 0x12f4 Or2
	var_366_float = var_308_float * var_308_float; // 0x12f5 Mult
	var_367_bool = var_318_float < var_366_float; // 0x12f6 LT
	if(var_367_bool == 0) goto Label_4862; // 0x12f7 JumpB
	var_368_bool = 0; var_369_float = 0; // 0x12f8 PushV
	var_369_float = var_308_float; // 0x12f9 Mov
	func_4663(var_318_float, var_368_bool, var_369_float); // 0x12fa NEW_2
	var_307_bool = 1; // 0x12fc MovB
	return 10; // 0x12fd Return
	
Label_4862:
	sync(); // 0x12fe Func
	goto Label_4828; // 0x1300 Jump
}


func_3806(var_0_bool, var_1_object)
{
	var_0_bool = 1; // 0xede TMovB
	var_1_object = 1; // 0xedf TMovB
	Stop(); // 0xee0 Func
	StopGroup0(); // 0xee2 Func
	return 0; // 0xee4 Return
}


func_3296(var_21_object)
{
	EventDisable(0); // 0xce1 EventDisable
	var_22_object = Obj(); // 0xce2 PushV
	var_22_object = var_21_object; // 0xce3 Mov
	func_3329(var_22_object); // 0xce4 NEW_2
	var_102_object = Obj(); // 0xce6 PushV
	var_102_object = var_21_object; // 0xce7 Mov
	func_7027(var_102_object); // 0xce8 NEW_2
	EventEnable(0); // 0xcea EventEnable
	
Label_3307:
	Hold(); // 0xceb Func
	goto Label_3307; // 0xced Jump
}


func_6884(var_22_int)
{
	var_22_int = 2; // 0x1ae5 MovI
	return 0; // 0x1ae6 Return
}


func_3813(var_131_bool)
{
	var_131_bool = 0; // 0xee5 MovB
	return 0; // 0xee6 Return
}


func_742(var_2_object, var_131_string)
{
	var_132_bool = 0; // 0x2e7 PushV
	func_6965(var_132_bool); // 0x2e8 NEW_2
	var_133_bool = var_132_bool == 0; // 0x2ea Not
	if(var_133_bool == 0) goto Label_749; // 0x2eb JumpB
	return 0; // 0x2ec Return
	
Label_749:
	var_134_bool = var_131_string == var_2_object; // 0x2ed Eq
	if(var_134_bool == 0) goto Label_752; // 0x2ee JumpB
	return 0; // 0x2ef Return
	
Label_752:
	var_135_string = ""; var_136_bool = 0; // 0x2f0 PushV
	var_135_string = var_131_string; // 0x2f1 Mov
	var_137_string = ""; // 0x2f2 PushS
	var_138_bool = var_131_string == var_137_string; // 0x2f3 Eq
	if(var_138_bool == 0) goto Label_759; // 0x2f4 JumpB
	var_136_bool = 0; // 0x2f5 MovB
	goto Label_760; // 0x2f6 Jump
	
Label_760:
	func_5775(var_135_string, var_136_bool); // 0x2f8 NEW_2
	var_2_object = var_131_string; // 0x2fa TMov
	return 0; // 0x2fb Return
	
Label_759:
	var_136_bool = 1; // 0x2f7 MovB
}


func_6887(var_30_object)
{
	var_31_object = Obj(); // 0x1ae8 PushV
	var_31_object = var_30_object; // 0x1ae9 Mov
	func_6975(var_30_object, var_31_object); // 0x1aea NEW_2
	return 0; // 0x1aec Return
}


func_3815(var_125_object, var_126_cvector)
{
	var_127_object = Obj(); var_128_object = Obj(); // 0xee7 PushV
	FindShiftedPathTo(var_128_object, var_126_cvector); // 0xee8 Func
	var_125_object = var_128_object; // 0xeea Mov
	return 2; // 0xeeb Return
}


func_6378()
{
	var_158_int = 0; // 0x18ea PushV
	func_6311(var_158_int); // 0x18eb NEW_2
	var_162_int = 1; // 0x18ed PushI
	var_163_bool = var_158_int != var_162_int; // 0x18ee Neq
	if(var_163_bool == 0) goto Label_6385; // 0x18ef JumpB
	return 0; // 0x18f0 Return
	
Label_6385:
	var_164_string = ""; // 0x18f1 PushV
	var_164_string = "liver"; // 0x18f2 MovS
	func_6361(var_164_string); // 0x18f3 NEW_2
	var_175_string = ""; // 0x18f5 PushV
	var_175_string = "kidney"; // 0x18f6 MovS
	func_6361(var_175_string); // 0x18f7 NEW_2
	var_176_string = ""; // 0x18f9 PushV
	var_176_string = "heart"; // 0x18fa MovS
	func_6361(var_176_string); // 0x18fb NEW_2
	var_177_string = ""; // 0x18fd PushV
	var_177_string = "blood"; // 0x18fe MovS
	func_6361(var_177_string); // 0x18ff NEW_2
	return 0; // 0x1901 Return
}


func_6893()
{
	return 0; // 0x1aed Return
}


func_6894(var_22_int, var_23_object)
{
	var_24_bool = 0; var_25_bool = 0; // 0x1aee PushV
	var_26_string = "Received steal"; // 0x1aef PushS
	Trace(var_26_string); // 0x1af0 Func
	CanSee(var_25_bool, var_23_object); // 0x1af2 Func
	var_27_bool = var_25_bool; // 0x1af4 Push
	if(var_27_bool == 0) goto Label_6908; // 0x1af5 JumpB
	var_28_int = 0; var_29_object = Obj(); // 0x1af6 PushV
	var_29_object = var_23_object; // 0x1af7 Mov
	func_6749(var_28_int, var_29_object); // 0x1af8 NEW_2
	var_22_int = var_28_int; // 0x1af9 Mov
	return 2; // 0x1afb Return
	
Label_6908:
	var_22_int = 0; // 0x1afc MovI
	return 2; // 0x1afd Return
}


func_5875(var_107_object)
{
	var_108_object = Obj(); var_109_object = Obj(); // 0x16f3 PushV
	self(var_109_object); // 0x16f4 Func
	var_107_object = var_109_object; // 0x16f6 Mov
	return 2; // 0x16f7 Return
}


func_5881(var_51_cvector, var_52_cvector)
{
	var_59_float = 0; var_60_float = 0; // 0x16f9 PushV
	var_61_int = var_52_cvector | var_52_cvector; // 0x16fa Or
	var_60_float = sqrt(var_61_int); // 0x16fb Sqrt2
	var_62_float = 0.0; // 0x16fc PushF
	var_63_bool = var_60_float < var_62_float; // 0x16fd LT
	if(var_63_bool == 0) goto Label_5889; // 0x16fe JumpB
	var_51_cvector = CVector(0.0, 0.0, 0.0); // 0x16ff MovV
	return 2; // 0x1700 Return
	
Label_5889:
	var_51_cvector = var_52_cvector / var_52_cvector; // 0x1701 Div2
	return 2; // 0x1702 Return
}


func_4346(var_72_object)
{
	var_79_object = Obj(); var_80_bool = 0; var_81_float = 0; // 0x10fb PushV
	var_79_object = var_72_object; // 0x10fc Mov
	var_80_bool = 1; // 0x10fd MovB
	var_81_float = 180.0; // 0x10fe MovF
	func_4360(var_75_int, var_76_bool, var_77_float, var_78_int, var_72_object, var_79_object, var_80_bool, var_81_float); // 0x10ff NEW_2
	return 0; // 0x1101 Return
}


func_6910(var_70_object)
{
	var_71_object = Obj(); // 0x1aff PushV
	var_71_object = var_70_object; // 0x1b00 Mov
	func_6759(var_71_object); // 0x1b01 NEW_2
	return 0; // 0x1b03 Return
}


func_3329(var_22_object)
{
	var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_string = ""; var_28_object = Obj(); var_29_bool = 0; var_30_bool = 0; var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_string = ""; var_38_object = Obj(); var_39_bool = 0; var_40_bool = 0; var_41_float = 0; var_42_cvector = CVector(0,0,0); // 0xd01 PushV
	var_43_bool = var_22_object == 0; // 0xd02 NullEq
	if(var_43_bool == 0) goto Label_3337; // 0xd03 JumpB
	var_44_string = ""; // 0xd04 PushV
	var_44_string = "fdie"; // 0xd05 MovS
	func_3420(var_44_string); // 0xd06 NEW_2
	goto Label_3419; // 0xd08 Jump
	
Label_3419:
	return 20; // 0xd5b Return
	
Label_3337:
	GetPosition(var_33_cvector); // 0xd09 ObjFunc
	GetPosition(var_34_cvector); // 0xd0b Func
	GetDirection(var_35_cvector); // 0xd0d Func
	var_36_cvector = var_34_cvector - var_33_cvector; // 0xd0f Sub2
	var_76_float = GetByIndex(var_36_cvector, 0); // 0xd10 PushE
	var_77_float = GetByIndex(var_35_cvector, 0); // 0xd11 PushE
	var_78_float = var_76_float * var_77_float; // 0xd12 Mult
	var_79_float = GetByIndex(var_36_cvector, 2); // 0xd13 PushE
	var_80_float = GetByIndex(var_35_cvector, 2); // 0xd14 PushE
	var_81_float = var_79_float * var_80_float; // 0xd15 Mult
	var_82_int = var_78_float + var_81_float; // 0xd16 Add
	var_83_int = 0; // 0xd17 PushI
	var_84_bool = var_82_int >= var_83_int; // 0xd18 GE
	if(var_84_bool == 0) goto Label_3356; // 0xd19 JumpB
	var_37_string = "fdie"; // 0xd1a MovS
	goto Label_3357; // 0xd1b Jump
	
Label_3357:
	RemoveRTEnvelope(); // 0xd1d Func
	SetDeathState(); // 0xd1f Func
	Stop(); // 0xd21 Func
	StopAsync(); // 0xd23 Func
	var_38_object = var_22_object; // 0xd25 Mov
	var_85_string = "GetScriptProperty"; // 0xd26 PushS
	var_86_int = 2; // 0xd27 PushI
	var_87_bool = IsFuncExist(var_22_object, var_85_string, var_86_int); // 0xd28 FuncExist
	if(var_87_bool == 0) goto Label_3381; // 0xd29 JumpB
	var_88_string = "Owner"; // 0xd2a PushS
	HasScriptProperty(var_39_bool, var_88_string); // 0xd2b ObjFunc
	var_89_bool = var_39_bool; // 0xd2d Push
	if(var_89_bool == 0) goto Label_3381; // 0xd2e JumpB
	var_90_string = "Owner"; // 0xd2f PushS
	GetScriptProperty(var_38_object, var_90_string); // 0xd30 ObjFunc
	var_91_bool = var_38_object == 0; // 0xd32 NullEq
	if(var_91_bool == 0) goto Label_3381; // 0xd33 JumpB
	var_38_object = var_22_object; // 0xd34 Mov
	
Label_3381:
	var_92_string = "@GetEyesHeight"; // 0xd35 PushS
	var_93_int = 1; // 0xd36 PushI
	var_94_bool = IsFuncExist(var_38_object, var_92_string, var_93_int); // 0xd37 FuncExist
	if(var_94_bool == 0) goto Label_3396; // 0xd38 JumpB
	GetEyesHeight(var_41_float); // 0xd39 ObjFunc
	var_42_cvector = CVector(0.0, 0.0, 0.0); // 0xd3b MovV
	var_95_float = GetByIndex(var_42_cvector, 1); // 0xd3c PushE
	var_95_float = var_41_float; // 0xd3d Mov
	SetByIndex(var_42_cvector, 1) = var_95_float; // 0xd3e PopE
	var_96_string = "head"; // 0xd3f PushS
	LookAsync(var_22_object, var_96_string, var_42_cvector); // 0xd40 Func
	var_40_bool = 1; // 0xd42 MovB
	goto Label_3397; // 0xd43 Jump
	
Label_3397:
	var_97_string = ""; // 0xd45 PushV
	var_97_string = var_37_string; // 0xd46 Mov
	func_5834(var_97_string); // 0xd47 NEW_2
	var_98_string = "all"; // 0xd49 PushS
	PlayAnimation(var_98_string, var_37_string); // 0xd4a Func
	WaitForAnimEnd(); // 0xd4c Func
	var_99_bool = var_40_bool; // 0xd4e Push
	if(var_99_bool == 0) goto Label_3413; // 0xd4f JumpB
	StopAsync(); // 0xd50 Func
	var_100_string = "head"; // 0xd52 PushS
	UnlookAsync(var_100_string); // 0xd53 Func
	
Label_3413:
	var_101_string = "all"; // 0xd55 PushS
	LockAnimationEnd(var_101_string, var_37_string); // 0xd56 Func
	RemoveEnvelope(); // 0xd58 Func
	var_38_object = 0; // 0xd5a SetNull
	
Label_3396:
	var_40_bool = 0; // 0xd44 MovB
	
Label_3356:
	var_37_string = "bdie"; // 0xd1c MovS
}


func_4354(var_416_float)
{
	var_416_float = 0.03; // 0x1103 MovF
	return 0; // 0x1104 Return
}


func_5891(var_457_float, var_458_float, var_459_float)
{
	var_462_bool = var_458_float < var_459_float; // 0x1704 LT
	if(var_462_bool == 0) goto Label_5896; // 0x1705 JumpB
	var_457_float = var_458_float; // 0x1706 Mov
	goto Label_5897; // 0x1707 Jump
	
Label_5897:
	return 0; // 0x1709 Return
	
Label_5896:
	var_457_float = var_459_float; // 0x1708 Mov
}


func_6916(var_129_int)
{
	var_129_int = 0; // 0x1b05 MovI
	return 0; // 0x1b06 Return
}


func_4357(var_423_int)
{
	var_423_int = 0; // 0x1106 MovI
	return 0; // 0x1107 Return
}


func_4870(var_0_bool, var_322_bool)
{
	var_323_cvector = CVector(0,0,0); var_324_cvector = CVector(0,0,0); var_325_cvector = CVector(0,0,0); var_326_float = 0; var_327_float = 0; var_328_cvector = CVector(0,0,0); var_329_cvector = CVector(0,0,0); var_330_cvector = CVector(0,0,0); var_331_float = 0; var_332_float = 0; // 0x1306 PushV
	var_333_bool = 0; var_334_object = Obj(); // 0x1307 PushV
	var_334_object = var_0_bool; // 0x1308 MovT
	func_5445(var_333_bool, var_334_object); // 0x1309 NEW_2
	var_335_bool = var_333_bool == 0; // 0x130b Not
	if(var_335_bool == 0) goto Label_4879; // 0x130c JumpB
	var_322_bool = 0; // 0x130d MovB
	return 10; // 0x130e Return
	
Label_4879:
	var_336_bool = 0; // 0x130f PushV
	func_4959(var_332_float, var_336_bool); // 0x1310 NEW_2
	if(var_336_bool == 0) goto Label_4896; // 0x1312 JumpB
	GetPFPosition(var_328_cvector); // 0x1313 TObjFunc
	GetPFPosition(var_329_cvector); // 0x1315 Func
	var_330_cvector = var_328_cvector - var_329_cvector; // 0x1317 Sub2
	var_331_float = var_330_cvector | var_330_cvector; // 0x1318 Or2
	GetAttackDistance(var_332_float); // 0x1319 TObjFunc
	var_337_int = 50; // 0x131b PushI
	var_332_float = var_332_float + var_337_int; // 0x131c Add2
	var_338_float = var_332_float * var_332_float; // 0x131d Mult
	var_322_bool = var_331_float <= var_338_float; // 0x131e LE2
	return 10; // 0x131f Return
	
Label_4896:
	var_322_bool = 0; // 0x1320 MovB
	return 10; // 0x1321 Return
}


func_6919()
{
	return 0; // 0x1b08 Return
}


func_4360(var_0_bool, var_3_object, var_5_bool, var_79_object, var_80_bool, var_81_float, var_156_bool, var_248_bool)
{
	var_82_float = 0; var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_bool = 0; var_86_bool = 0; var_87_float = 0; var_88_cvector = CVector(0,0,0); var_89_float = 0; var_90_cvector = CVector(0,0,0); var_91_bool = 0; var_92_float = 0; var_93_float = 0; var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_bool = 0; var_97_bool = 0; var_98_float = 0; var_99_cvector = CVector(0,0,0); var_100_float = 0; var_101_cvector = CVector(0,0,0); var_102_bool = 0; var_103_float = 0; // 0x1108 PushV
	func_4589(var_101_cvector, var_102_bool, var_103_float); // 0x110a NEW_2
	var_5_bool = 0; // 0x110c TMovI
	var_126_string = "@GetAttackDistance"; // 0x110d PushS
	var_127_int = 1; // 0x110e PushI
	var_128_bool = IsFuncExist(var_79_object, var_126_string, var_127_int); // 0x110f FuncExist
	if(var_128_bool == 0) goto Label_4374; // 0x1110 JumpB
	GetAttackDistance(var_93_float); // 0x1111 ObjFunc
	var_129_int = 50; // 0x1113 PushI
	var_93_float = var_93_float + var_129_int; // 0x1114 Add2
	goto Label_4375; // 0x1115 Jump
	
Label_4375:
	var_130_int = 150; // 0x1117 PushI
	var_131_bool = var_93_float >= var_130_int; // 0x1118 GE
	if(var_131_bool == 0) goto Label_4379; // 0x1119 JumpB
	var_93_float = 150; // 0x111a MovI
	
Label_4379:
	var_3_object = 0; // 0x111b TMovB
	var_0_bool = var_79_object; // 0x111c TMov
	IsPlayerActor(var_0_bool, var_96_bool); // 0x111d Func
	var_132_bool = var_96_bool; // 0x111f Push
	if(var_132_bool == 0) goto Label_4393; // 0x1120 JumpB
	var_133_string = "attack"; // 0x1121 PushS
	PlayGlobalMusic(var_133_string); // 0x1122 Func
	var_134_object = Obj(); // 0x1124 PushV
	func_5875(var_134_object); // 0x1125 NEW_2
	SendPlayerEnemy(var_79_object, var_134_object); // 0x1127 Func
	
Label_4393:
	var_137_bool = var_80_bool; // 0x1129 Push
	if(var_137_bool == 0) goto Label_4397; // 0x112a JumpB
	var_97_bool = 0; // 0x112b MovB
	goto Label_4398; // 0x112c Jump
	
Label_4398:
	var_138_float = 400.0; // 0x112e PushF
	var_98_float = var_138_float + var_93_float; // 0x112f Add2
	
Label_4400:
	var_139_bool = 0; // 0x1130 PushV
	var_139_bool = 0; // 0x1131 MovB
	var_140_bool = 0; var_141_object = Obj(); // 0x1132 PushV
	var_141_object = var_0_bool; // 0x1133 MovT
	func_5445(var_140_bool, var_141_object); // 0x1134 NEW_2
	if(var_140_bool == 0) goto Label_4410; // 0x1136 JumpB
	var_142_bool = var_3_object == 0; // 0x1137 Not
	if(var_142_bool == 0) goto Label_4410; // 0x1138 JumpB
	var_139_bool = 1; // 0x1139 MovB
	
Label_4410:
	if(var_139_bool == 0) goto Label_4572; // 0x113a JumpB
	func_5002(var_103_float); // 0x113c NEW_2
	GetPFPosition(var_94_cvector); // 0x113e TObjFunc
	GetPFPosition(var_95_cvector); // 0x1140 Func
	var_99_cvector = var_94_cvector - var_95_cvector; // 0x1142 Sub2
	var_100_float = var_99_cvector | var_99_cvector; // 0x1143 Or2
	var_148_float = var_98_float * var_98_float; // 0x1144 Mult
	var_149_bool = var_100_float >= var_148_float; // 0x1145 GE
	if(var_149_bool == 0) goto Label_4438; // 0x1146 JumpB
	var_150_bool = 0; var_151_object = Obj(); var_152_float = 0; var_153_float = 0; var_154_bool = 0; var_155_bool = 0; // 0x1147 PushV
	var_151_object = var_0_bool; // 0x1148 MovT
	var_152_float = var_93_float; // 0x1149 Mov
	var_153_float = 3000.0; // 0x114a MovF
	var_154_bool = 1; // 0x114b MovB
	var_155_bool = 0; // 0x114c MovB
	TaskCall(8); // 0x114d TaskCall
	func_5029(var_158_bool, var_150_bool, var_151_object, var_152_float, var_153_float, var_154_bool, var_155_bool); // 0x114e NEW_2
	TaskReturn(); // 0x114f TaskReturn
	var_233_bool = var_156_bool == 0; // 0x1151 Not
	if(var_233_bool == 0) goto Label_4436; // 0x1152 JumpB
	goto Label_4572; // 0x1153 Jump
	
Label_4572:
	WaitForAnimEnd(); // 0x11dc Func
	var_234_object = var_3_object; // 0x11de PushT
	if(var_234_object == 0) goto Label_4577; // 0x11df JumpB
	return 22; // 0x11e0 Return
	
Label_4577:
	var_235_string = "all"; // 0x11e1 PushS
	var_236_string = "attack_off"; // 0x11e2 PushS
	PlayAnimation(var_235_string, var_236_string); // 0x11e3 Func
	WaitForAnimEnd(); // 0x11e5 Func
	var_237_bool = var_96_bool; // 0x11e7 Push
	if(var_237_bool == 0) goto Label_4588; // 0x11e8 JumpB
	var_238_float = 2.0; // 0x11e9 PushF
	Sleep(var_238_float); // 0x11ea Func
	
Label_4588:
	return 22; // 0x11ec Return
	
Label_4436:
	var_97_bool = 0; // 0x1154 MovB
	goto Label_4571; // 0x1155 Jump
	
Label_4571:
	goto Label_4400; // 0x11db Jump
	
Label_4438:
	var_239_float = var_81_float * var_81_float; // 0x1156 Mult
	var_240_bool = var_100_float >= var_239_float; // 0x1157 GE
	if(var_240_bool == 0) goto Label_4563; // 0x1158 JumpB
	GetPFPosition(var_101_cvector); // 0x1159 TObjFunc
	CanReachByPF(var_102_bool, var_101_cvector); // 0x115b Func
	var_241_bool = var_102_bool == 0; // 0x115d Not
	if(var_241_bool == 0) goto Label_4462; // 0x115e JumpB
	var_242_bool = 0; var_243_object = Obj(); var_244_float = 0; var_245_float = 0; var_246_bool = 0; var_247_bool = 0; // 0x115f PushV
	var_243_object = var_0_bool; // 0x1160 MovT
	var_244_float = var_93_float; // 0x1161 Mov
	var_245_float = 3000.0; // 0x1162 MovF
	var_246_bool = 1; // 0x1163 MovB
	var_247_bool = 0; // 0x1164 MovB
	TaskCall(8); // 0x1165 TaskCall
	func_5029(var_250_bool, var_242_bool, var_243_object, var_244_float, var_245_float, var_246_bool, var_247_bool); // 0x1166 NEW_2
	TaskReturn(); // 0x1167 TaskReturn
	var_251_bool = var_248_bool == 0; // 0x1169 Not
	if(var_251_bool == 0) goto Label_4460; // 0x116a JumpB
	goto Label_4572; // 0x116b Jump
	
Label_4460:
	var_97_bool = 0; // 0x116c MovB
	goto Label_4400; // 0x116d Jump
	
Label_4462:
	var_252_bool = var_97_bool == 0; // 0x116e Not
	if(var_252_bool == 0) goto Label_4487; // 0x116f JumpB
	var_253_object = Obj(); // 0x1170 PushV
	var_253_object = var_0_bool; // 0x1171 MovT
	func_5595(); // 0x1172 NEW_2
	var_262_string = "all"; // 0x1174 PushS
	var_263_string = "attack_on"; // 0x1175 PushS
	PlayAnimation(var_262_string, var_263_string); // 0x1176 Func
	WaitForAnimEnd(); // 0x1178 Func
	func_5002(var_103_float); // 0x117b NEW_2
	StopAsync(); // 0x117d Func
	var_97_bool = 1; // 0x117f MovB
	var_264_bool = 0; var_265_object = Obj(); // 0x1180 PushV
	var_265_object = var_0_bool; // 0x1181 MovT
	func_5445(var_264_bool, var_265_object); // 0x1182 NEW_2
	var_266_bool = var_264_bool == 0; // 0x1184 Not
	if(var_266_bool == 0) goto Label_4487; // 0x1185 JumpB
	goto Label_4572; // 0x1186 Jump
	
Label_4487:
	rand(var_103_float); // 0x1187 Func
	var_267_bool = 0; // 0x1189 PushV
	var_267_bool = 1; // 0x118a MovB
	var_268_float = 0.25; // 0x118b PushF
	var_269_bool = var_103_float < var_268_float; // 0x118c LT
	if(var_269_bool == 0) goto Label_4499; // 0x118d JumpB
	var_270_bool = 0; // 0x118e PushV
	func_4959(var_267_bool, var_270_bool); // 0x118f NEW_2
	if(var_270_bool == 0) goto Label_4499; // 0x1191 JumpB
	var_267_bool = 0; // 0x1192 MovB
	
Label_4499:
	if(var_267_bool == 0) goto Label_4516; // 0x1193 JumpB
	Face(var_0_bool); // 0x1194 Func
	func_5009(); // 0x1197 NEW_2
	var_305_string = "all"; // 0x1199 PushS
	var_306_string = "attack_stay"; // 0x119a PushS
	PlayAnimation(var_305_string, var_306_string); // 0x119b Func
	var_307_bool = 0; var_308_float = 0; // 0x119d PushV
	var_308_float = var_81_float; // 0x119e Mov
	func_4827(var_103_float, var_307_bool, var_308_float); // 0x119f NEW_2
	StopAsync(); // 0x11a1 Func
	goto Label_4562; // 0x11a3 Jump
	
Label_4562:
	goto Label_4571; // 0x11d2 Jump
	
Label_4516:
	Face(var_0_bool); // 0x11a4 Func
	var_526_string = "all"; // 0x11a6 PushS
	var_527_string = "fjump"; // 0x11a7 PushS
	PlayAnimation(var_526_string, var_527_string); // 0x11a8 Func
	WaitForAnimEnd(); // 0x11aa Func
	func_5002(var_103_float); // 0x11ad NEW_2
	var_528_cvector = CVector(0.0, 0.0, 0.0); // 0x11af PushVec
	SetSpeed(var_528_cvector); // 0x11b0 Func
	Stop(); // 0x11b2 Func
	StopAsync(); // 0x11b4 Func
	var_529_bool = 0; // 0x11b6 PushV
	func_4959(var_103_float, var_529_bool); // 0x11b7 NEW_2
	var_530_bool = var_529_bool == 0; // 0x11b9 Not
	if(var_530_bool == 0) goto Label_4562; // 0x11ba JumpB
	var_531_bool = 0; var_532_object = Obj(); // 0x11bb PushV
	var_532_object = var_0_bool; // 0x11bc MovT
	func_5445(var_531_bool, var_532_object); // 0x11bd NEW_2
	var_533_bool = var_531_bool == 0; // 0x11bf Not
	if(var_533_bool == 0) goto Label_4546; // 0x11c0 JumpB
	goto Label_4572; // 0x11c1 Jump
	
Label_4546:
	GetPFPosition(var_94_cvector); // 0x11c2 TObjFunc
	GetPFPosition(var_95_cvector); // 0x11c4 Func
	var_99_cvector = var_94_cvector - var_95_cvector; // 0x11c6 Sub2
	var_100_float = var_99_cvector | var_99_cvector; // 0x11c7 Or2
	var_534_float = var_81_float * var_81_float; // 0x11c8 Mult
	var_535_bool = var_100_float < var_534_float; // 0x11c9 LT
	if(var_535_bool == 0) goto Label_4562; // 0x11ca JumpB
	var_536_bool = 0; var_537_float = 0; // 0x11cb PushV
	var_537_float = var_81_float; // 0x11cc Mov
	func_4663(var_103_float, var_536_bool, var_537_float); // 0x11cd NEW_2
	var_538_bool = var_536_bool == 0; // 0x11cf Not
	if(var_538_bool == 0) goto Label_4562; // 0x11d0 JumpB
	goto Label_4572; // 0x11d1 Jump
	
Label_4563:
	var_539_bool = 0; var_540_float = 0; // 0x11d3 PushV
	var_540_float = var_81_float; // 0x11d4 Mov
	func_4663(var_103_float, var_539_bool, var_540_float); // 0x11d5 NEW_2
	var_541_bool = var_539_bool == 0; // 0x11d7 Not
	if(var_541_bool == 0) goto Label_4570; // 0x11d8 JumpB
	goto Label_4572; // 0x11d9 Jump
	
Label_4570:
	var_97_bool = 1; // 0x11da MovB
	
Label_4397:
	var_97_bool = 1; // 0x112d MovB
	
Label_4374:
	var_93_float = var_81_float; // 0x1116 Mov
}


func_6921(var_25_bool)
{
	var_25_bool = 0; // 0x1b0a MovB
	return 0; // 0x1b0b Return
}


func_5898(var_467_float, var_468_float, var_469_float, var_470_float)
{
	var_471_bool = var_468_float < var_469_float; // 0x170b LT
	if(var_471_bool == 0) goto Label_5903; // 0x170c JumpB
	var_467_float = var_469_float; // 0x170d Mov
	return 0; // 0x170e Return
	
Label_5903:
	var_472_bool = var_468_float > var_470_float; // 0x170f GT
	if(var_472_bool == 0) goto Label_5907; // 0x1710 JumpB
	var_467_float = var_470_float; // 0x1711 Mov
	return 0; // 0x1712 Return
	
Label_5907:
	var_467_float = var_468_float; // 0x1713 Mov
	return 0; // 0x1714 Return
}


func_6402()
{
	var_113_bool = 0; var_114_bool = 0; // 0x1902 PushV
	var_115_int = 0; // 0x1903 PushI
	ClearSubContainer(var_115_int); // 0x1904 Func
	var_116_int = 0; var_117_int = 0; // 0x1906 PushV
	var_116_int = 0; // 0x1907 MovI
	var_118_int = 10; // 0x1908 PushI
	var_119_int = 0; // 0x1909 PushV
	func_5972(var_119_int); // 0x190a NEW_2
	var_125_int = 10; // 0x190c PushI
	var_126_float = var_119_int * var_125_int; // 0x190d Mult
	var_117_int = var_118_int + var_126_float; // 0x190e Add2
	func_6330(var_116_int, var_117_int); // 0x190f NEW_2
	var_144_string = ""; var_145_int = 0; var_146_int = 0; // 0x1911 PushV
	var_144_string = "hook"; // 0x1912 MovS
	var_145_int = 1; // 0x1913 MovI
	var_146_int = 4; // 0x1914 MovI
	func_5808(var_144_string, var_145_int, var_146_int); // 0x1915 NEW_2
	var_155_string = ""; var_156_int = 0; var_157_int = 0; // 0x1917 PushV
	var_155_string = "watch"; // 0x1918 MovS
	var_156_int = 1; // 0x1919 MovI
	var_157_int = 10; // 0x191a MovI
	func_5808(var_155_string, var_156_int, var_157_int); // 0x191b NEW_2
	return 2; // 0x191d Return
}


func_6924()
{
	return 0; // 0x1b0d Return
}


func_6926(var_32_bool, var_33_object)
{
	var_34_bool = 0; var_35_bool = 0; // 0x1b0e PushV
	CanSee(var_35_bool, var_33_object); // 0x1b0f Func
	var_32_bool = 1; // 0x1b11 MovB
	var_36_bool = var_35_bool; // 0x1b12 Push
	if(var_36_bool == 0) goto Label_6940; // 0x1b13 JumpB
	var_37_float = 0; var_38_object = Obj(); // 0x1b14 PushV
	var_38_object = var_33_object; // 0x1b15 Mov
	func_5306(var_38_object); // 0x1b16 NEW_2
	var_45_int = 2250000; // 0x1b18 PushI
	var_46_bool = var_37_float <= var_45_int; // 0x1b19 LE
	if(var_46_bool == 0) goto Label_6940; // 0x1b1a JumpB
	var_32_bool = 0; // 0x1b1b MovB
	
Label_6940:
	return 2; // 0x1b1c Return
}


func_5909(var_44_bool, var_45_int, var_46_int)
{
	var_47_int = 0; var_48_int = 0; // 0x1715 PushV
	irand(var_48_int, var_46_int); // 0x1716 Func
	var_44_bool = var_48_int < var_45_int; // 0x1718 LT2
	return 2; // 0x1719 Return
}


func_5914(var_72_float, var_73_cvector, var_74_cvector)
{
	var_75_float = GetByIndex(var_73_cvector, 0); // 0x171b PushE
	var_76_float = GetByIndex(var_74_cvector, 0); // 0x171c PushE
	var_77_float = var_75_float * var_76_float; // 0x171d Mult
	var_78_float = GetByIndex(var_73_cvector, 2); // 0x171e PushE
	var_79_float = GetByIndex(var_74_cvector, 2); // 0x171f PushE
	var_80_float = var_78_float * var_79_float; // 0x1720 Mult
	var_72_float = var_77_float + var_80_float; // 0x1721 Add2
	return 0; // 0x1722 Return
}


func_5404(var_47_bool)
{
	var_49_bool = 0; var_50_bool = 0; // 0x151c PushV
	IsDead(var_50_bool); // 0x151d ObjFunc
	var_47_bool = var_50_bool; // 0x151f Mov
	return 2; // 0x1520 Return
}


func_6941(var_60_object)
{
	var_61_object = Obj(); // 0x1b1e PushV
	var_61_object = var_60_object; // 0x1b1f Mov
	func_6741(var_61_object); // 0x1b20 NEW_2
	return 0; // 0x1b22 Return
}


func_6430(var_21_bool)
{
	var_22_int = 0; var_23_bool = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_int = 0; // 0x191e PushV
	var_28_int = 0; // 0x191f PushI
	ClearSubContainer(var_28_int); // 0x1920 Func
	var_29_int = 0; // 0x1922 PushV
	func_5972(var_29_int); // 0x1923 NEW_2
	var_27_int = var_29_int; // 0x1924 Mov
	var_35_bool = var_21_bool; // 0x1926 Push
	if(var_35_bool == 0) goto Label_6484; // 0x1927 JumpB
	var_36_string = ""; var_37_int = 0; var_38_int = 0; var_39_int = 0; // 0x1928 PushV
	var_36_string = "alpha_pills"; // 0x1929 MovS
	var_37_int = 1; // 0x192a MovI
	var_38_int = 2; // 0x192b MovI
	var_39_int = 4; // 0x192c MovI
	func_5819(var_36_string, var_37_int, var_38_int, var_39_int); // 0x192d NEW_2
	var_52_string = ""; var_53_int = 0; var_54_int = 0; var_55_int = 0; // 0x192f PushV
	var_52_string = "meradorm"; // 0x1930 MovS
	var_53_int = 2; // 0x1931 MovI
	var_54_int = 3; // 0x1932 MovI
	var_55_int = 3; // 0x1933 MovI
	func_5819(var_52_string, var_53_int, var_54_int, var_55_int); // 0x1934 NEW_2
	var_56_int = 3; // 0x1936 PushI
	var_57_bool = var_27_int >= var_56_int; // 0x1937 GE
	if(var_57_bool == 0) goto Label_6463; // 0x1938 JumpB
	var_58_string = ""; var_59_int = 0; var_60_int = 0; // 0x1939 PushV
	var_58_string = "beta_pills"; // 0x193a MovS
	var_59_int = 1; // 0x193b MovI
	var_60_int = 4; // 0x193c MovI
	func_5808(var_58_string, var_59_int, var_60_int); // 0x193d NEW_2
	
Label_6463:
	var_67_int = 8; // 0x193f PushI
	var_68_bool = var_27_int >= var_67_int; // 0x1940 GE
	if(var_68_bool == 0) goto Label_6474; // 0x1941 JumpB
	var_69_string = ""; var_70_int = 0; var_71_int = 0; var_72_int = 0; // 0x1942 PushV
	var_69_string = "monomicin"; // 0x1943 MovS
	var_70_int = 1; // 0x1944 MovI
	var_71_int = 2; // 0x1945 MovI
	var_72_int = 2; // 0x1946 MovI
	func_5819(var_69_string, var_70_int, var_71_int, var_72_int); // 0x1947 NEW_2
	goto Label_6483; // 0x1949 Jump
	
Label_6483:
	goto Label_6529; // 0x1953 Jump
	
Label_6529:
	return 6; // 0x1981 Return
	
Label_6474:
	var_73_int = 4; // 0x194a PushI
	var_74_bool = var_27_int >= var_73_int; // 0x194b GE
	if(var_74_bool == 0) goto Label_6483; // 0x194c JumpB
	var_75_string = ""; var_76_int = 0; var_77_int = 0; // 0x194d PushV
	var_75_string = "monomicin"; // 0x194e MovS
	var_76_int = 1; // 0x194f MovI
	var_77_int = 2; // 0x1950 MovI
	func_5808(var_75_string, var_76_int, var_77_int); // 0x1951 NEW_2
	
Label_6484:
	var_78_string = ""; var_79_int = 0; var_80_int = 0; // 0x1954 PushV
	var_78_string = "lockpick"; // 0x1955 MovS
	var_79_int = 1; // 0x1956 MovI
	var_80_int = 4; // 0x1957 MovI
	func_5808(var_78_string, var_79_int, var_80_int); // 0x1958 NEW_2
	var_81_string = ""; var_82_int = 0; var_83_int = 0; // 0x195a PushV
	var_81_string = "rifle_ammo"; // 0x195b MovS
	var_82_int = 1; // 0x195c MovI
	var_83_int = 2; // 0x195d MovI
	func_5808(var_81_string, var_82_int, var_83_int); // 0x195e NEW_2
	var_84_string = ""; var_85_int = 0; var_86_int = 0; // 0x1960 PushV
	var_84_string = "revolver_ammo"; // 0x1961 MovS
	var_85_int = 1; // 0x1962 MovI
	var_86_int = 2; // 0x1963 MovI
	func_5808(var_84_string, var_85_int, var_86_int); // 0x1964 NEW_2
	var_87_string = ""; var_88_int = 0; var_89_int = 0; var_90_int = 0; // 0x1966 PushV
	var_87_string = "samopal_ammo"; // 0x1967 MovS
	var_88_int = 1; // 0x1968 MovI
	var_89_int = 2; // 0x1969 MovI
	var_90_int = 2; // 0x196a MovI
	func_5819(var_87_string, var_88_int, var_89_int, var_90_int); // 0x196b NEW_2
	var_91_int = 8; // 0x196d PushI
	var_92_bool = var_27_int >= var_91_int; // 0x196e GE
	if(var_92_bool == 0) goto Label_6520; // 0x196f JumpB
	var_93_string = ""; var_94_int = 0; var_95_int = 0; var_96_int = 0; // 0x1970 PushV
	var_93_string = "monomicin"; // 0x1971 MovS
	var_94_int = 1; // 0x1972 MovI
	var_95_int = 2; // 0x1973 MovI
	var_96_int = 2; // 0x1974 MovI
	func_5819(var_93_string, var_94_int, var_95_int, var_96_int); // 0x1975 NEW_2
	goto Label_6529; // 0x1977 Jump
	
Label_6520:
	var_97_int = 4; // 0x1978 PushI
	var_98_bool = var_27_int >= var_97_int; // 0x1979 GE
	if(var_98_bool == 0) goto Label_6529; // 0x197a JumpB
	var_99_string = ""; var_100_int = 0; var_101_int = 0; // 0x197b PushV
	var_99_string = "monomicin"; // 0x197c MovS
	var_100_int = 1; // 0x197d MovI
	var_101_int = 2; // 0x197e MovI
	func_5808(var_99_string, var_100_int, var_101_int); // 0x197f NEW_2
}


func_5409(var_36_bool, var_37_object)
{
	var_38_object = Obj(); var_39_object = Obj(); var_40_object = Obj(); var_41_object = Obj(); // 0x1521 PushV
	var_42_bool = var_37_object == 0; // 0x1522 NullEq
	if(var_42_bool == 0) goto Label_5414; // 0x1523 JumpB
	var_36_bool = 0; // 0x1524 MovB
	return 4; // 0x1525 Return
	
Label_5414:
	var_43_bool = 0; // 0x1526 PushV
	var_43_bool = 0; // 0x1527 MovB
	var_44_string = "IsDead"; // 0x1528 PushS
	var_45_int = 1; // 0x1529 PushI
	var_46_bool = IsFuncExist(var_37_object, var_44_string, var_45_int); // 0x152a FuncExist
	if(var_46_bool == 0) goto Label_5426; // 0x152b JumpB
	var_47_bool = 0; var_48_object = Obj(); // 0x152c PushV
	var_48_object = var_37_object; // 0x152d Mov
	func_5404(var_48_object); // 0x152e NEW_2
	if(var_47_bool == 0) goto Label_5426; // 0x1530 JumpB
	var_43_bool = 1; // 0x1531 MovB
	
Label_5426:
	if(var_43_bool == 0) goto Label_5429; // 0x1532 JumpB
	var_36_bool = 0; // 0x1533 MovB
	return 4; // 0x1534 Return
	
Label_5429:
	GetScene(var_40_object); // 0x1535 Func
	var_51_bool = var_40_object == 0; // 0x1537 NullEq
	if(var_51_bool == 0) goto Label_5435; // 0x1538 JumpB
	var_36_bool = 0; // 0x1539 MovB
	return 4; // 0x153a Return
	
Label_5435:
	GetScene(var_41_object); // 0x153b ObjFunc
	var_52_bool = var_40_object != var_41_object; // 0x153d Neq
	if(var_52_bool == 0) goto Label_5441; // 0x153e JumpB
	var_36_bool = 0; // 0x153f MovB
	return 4; // 0x1540 Return
	
Label_5441:
	var_36_bool = 1; // 0x1541 MovB
	return 4; // 0x1542 Return
}


func_4898(var_320_bool)
{
	var_321_bool = 0; // 0x1322 PushV
	var_321_bool = 0; // 0x1323 MovB
	var_322_bool = 0; // 0x1324 PushV
	func_4870(var_321_bool, var_322_bool); // 0x1325 NEW_2
	if(var_322_bool == 0) goto Label_4909; // 0x1327 JumpB
	var_339_bool = 0; // 0x1328 PushV
	func_4914(var_320_bool, var_321_bool, var_339_bool); // 0x1329 NEW_2
	if(var_339_bool == 0) goto Label_4909; // 0x132b JumpB
	var_321_bool = 1; // 0x132c MovB
	
Label_4909:
	if(var_321_bool == 0) goto Label_4912; // 0x132d JumpB
	var_320_bool = 1; // 0x132e MovB
	return 0; // 0x132f Return
	
Label_4912:
	var_320_bool = 0; // 0x1330 MovB
	return 0; // 0x1331 Return
}


func_5923(var_81_float, var_82_cvector)
{
	var_83_float = GetByIndex(var_82_cvector, 0); // 0x1724 PushE
	var_84_float = GetByIndex(var_82_cvector, 0); // 0x1725 PushE
	var_85_float = var_83_float * var_84_float; // 0x1726 Mult
	var_86_float = GetByIndex(var_82_cvector, 2); // 0x1727 PushE
	var_87_float = GetByIndex(var_82_cvector, 2); // 0x1728 PushE
	var_88_float = var_86_float * var_87_float; // 0x1729 Mult
	var_89_int = var_85_float + var_88_float; // 0x172a Add
	var_81_float = sqrt(var_89_int); // 0x172b Sqrt2
	return 0; // 0x172c Return
}


func_6947(var_49_bool)
{
	var_49_bool = 0; // 0x1b24 MovB
	return 0; // 0x1b25 Return
}


func_6950()
{
	return 0; // 0x1b27 Return
}


func_6952(var_27_bool)
{
	var_27_bool = 0; // 0x1b29 MovB
	return 0; // 0x1b2a Return
}


func_6955()
{
	return 0; // 0x1b2c Return
}


func_6957(var_104_int)
{
	var_104_int = 515558; // 0x1b2d MovI
	return 0; // 0x1b2e Return
}


func_5933(var_69_float, var_70_cvector, var_71_cvector)
{
	var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); // 0x172e PushV
	var_73_cvector = var_70_cvector; // 0x172f Mov
	var_74_cvector = var_71_cvector; // 0x1730 Mov
	func_5914(var_72_float, var_73_cvector, var_74_cvector); // 0x1731 NEW_2
	var_81_float = 0; var_82_cvector = CVector(0,0,0); // 0x1733 PushV
	var_82_cvector = var_70_cvector; // 0x1734 Mov
	func_5923(var_81_float, var_82_cvector); // 0x1735 NEW_2
	var_90_float = 0; var_91_cvector = CVector(0,0,0); // 0x1737 PushV
	var_91_cvector = var_71_cvector; // 0x1738 Mov
	func_5923(var_90_float, var_91_cvector); // 0x1739 NEW_2
	var_92_float = var_81_float * var_90_float; // 0x173b Mult
	var_69_float = var_72_float / var_72_float; // 0x173c Div2
	return 0; // 0x173d Return
}


func_6959(var_103_int)
{
	var_103_int = 503343; // 0x1b2f MovI
	return 0; // 0x1b30 Return
}


func_6961(var_105_string)
{
	var_105_string = "ui/NPC_Citizen3.png"; // 0x1b31 MovS
	return 0; // 0x1b32 Return
}


func_4914(var_0_bool, var_4_string, var_339_bool)
{
	var_340_object = Obj(); var_341_bool = 0; var_342_float = 0; var_343_cvector = CVector(0,0,0); var_344_cvector = CVector(0,0,0); var_345_object = Obj(); var_346_bool = 0; var_347_float = 0; var_348_cvector = CVector(0,0,0); var_349_cvector = CVector(0,0,0); // 0x1332 PushV
	GetScene(var_345_object); // 0x1333 Func
	var_346_bool = 0; // 0x1335 MovB
	
Label_4918:
	var_350_cvector = CVector(0,0,0); var_351_object = Obj(); // 0x1336 PushV
	var_351_object = var_0_bool; // 0x1337 MovT
	func_5299(var_351_object); // 0x1338 NEW_2
	var_356_int = -var_350_cvector; // 0x133a Neg
	FindDirLength(var_347_float, var_356_int, var_347_float); // 0x133b Func
	var_357_bool = var_347_float < var_4_string; // 0x133d LT
	if(var_357_bool == 0) goto Label_4928; // 0x133e JumpB
	goto Label_4956; // 0x133f Jump
	
Label_4956:
	var_339_bool = var_346_bool; // 0x135c Mov
	return 10; // 0x135d Return
	
Label_4928:
	Face(var_0_bool); // 0x1340 Func
	var_358_string = "all"; // 0x1342 PushS
	var_359_string = "bjump"; // 0x1343 PushS
	PlayAnimation(var_358_string, var_359_string); // 0x1344 Func
	GetPFPosition(var_348_cvector); // 0x1346 TObjFunc
	GetPFPosition(var_349_cvector); // 0x1348 Func
	WaitForAnimEnd(); // 0x134a Func
	func_5002(var_349_cvector); // 0x134d NEW_2
	StopAsync(); // 0x134f Func
	var_360_cvector = CVector(0.0, 0.0, 0.0); // 0x1351 PushVec
	SetSpeed(var_360_cvector); // 0x1352 Func
	var_346_bool = 1; // 0x1354 MovB
	var_361_bool = 0; // 0x1355 PushV
	func_4870(var_349_cvector, var_361_bool); // 0x1356 NEW_2
	var_362_bool = var_361_bool == 0; // 0x1358 Not
	if(var_362_bool == 0) goto Label_4955; // 0x1359 JumpB
	goto Label_4956; // 0x135a Jump
	
Label_4955:
	goto Label_4918; // 0x135b Jump
}


func_6963(var_106_string)
{
	var_106_string = "ui/NPC_Citizen3_b.png"; // 0x1b33 MovS
	return 0; // 0x1b34 Return
}


func_6965(var_98_bool)
{
	var_98_bool = 0; // 0x1b35 MovB
	return 0; // 0x1b36 Return
}


func_6967()
{
	var_20_bool = GlobalVars[0]; // 0x1b37 PushGE
	var_20_bool = 0; // 0x1b38 MovB
	GlobalVars[0] = var_20_bool; // 0x1b39 PopGE
	var_21_bool = 0; // 0x1b3a PushV
	var_21_bool = 1; // 0x1b3b MovB
	func_6430(var_21_bool); // 0x1b3c NEW_2
	return 0; // 0x1b3e Return
}


func_5950(var_125_int, var_126_string)
{
	var_127_int = 0; var_128_int = 0; // 0x173e PushV
	GetVariable(var_126_string, var_128_int); // 0x173f Func
	var_125_int = var_128_int; // 0x1741 Mov
	return 2; // 0x1742 Return
}


func_6975(var_31_object, var_46_object)
{
	var_32_bool = 0; var_33_bool = 0; // 0x1b3f PushV
	var_34_bool = GlobalVars[0]; // 0x1b40 PushGE
	if(var_34_bool == 0) goto Label_6988; // 0x1b41 JumpB
	IsOverrideActive(var_33_bool); // 0x1b42 Func
	var_35_bool = var_33_bool == 0; // 0x1b44 Not
	if(var_35_bool == 0) goto Label_6986; // 0x1b45 JumpB
	var_36_object = Obj(); // 0x1b46 PushV
	var_36_object = var_31_object; // 0x1b47 Mov
	func_6317(var_36_object); // 0x1b48 NEW_2
	
Label_6986:
	return 2; // 0x1b4a Return
	
Label_6988:
	var_43_int = 1000; // 0x1b4c PushI
	var_44_int = 0; var_45_object = Obj(); // 0x1b4d PushV
	var_45_object = var_31_object; // 0x1b4e Mov
	TaskCall(1); // 0x1b4f TaskCall
	func_40(var_46_object, var_44_int, var_45_object); // 0x1b50 NEW_2
	TaskReturn(); // 0x1b51 TaskReturn
	var_499_bool = var_43_int == var_46_object; // 0x1b53 Eq
	if(var_499_bool == 0) goto Label_7014; // 0x1b54 JumpB
	var_500_bool = 0; var_501_object = Obj(); // 0x1b55 PushV
	var_501_object = var_31_object; // 0x1b56 Mov
	func_5698(var_500_bool, var_501_object); // 0x1b57 NEW_2
	var_532_bool = var_500_bool == 0; // 0x1b59 Not
	if(var_532_bool == 0) goto Label_7004; // 0x1b5a JumpB
	return 2; // 0x1b5b Return
	
Label_7004:
	var_533_object = Obj(); // 0x1b5c PushV
	var_533_object = var_31_object; // 0x1b5d Mov
	TaskCall(0); // 0x1b5e TaskCall
	func_0(var_533_object); // 0x1b5f NEW_2
	TaskReturn(); // 0x1b60 TaskReturn
	var_540_object = Obj(); // 0x1b62 PushV
	var_540_object = var_31_object; // 0x1b63 Mov
	func_5754(); // 0x1b64 NEW_2
	
Label_7014:
	return 2; // 0x1b66 Return
}


func_5955(var_475_float)
{
	var_476_object = Obj(); var_477_object = Obj(); // 0x1743 PushV
	CreateFloatVector(var_477_object); // 0x1744 Func
	add(var_475_float); // 0x1746 ObjFunc
	var_478_int = 0; // 0x1748 PushI
	var_479_bool = var_475_float < var_478_int; // 0x1749 LT
	if(var_479_bool == 0) goto Label_5967; // 0x174a JumpB
	var_480_float = 0.7; // 0x174b PushF
	var_481_int = 500; // 0x174c PushI
	RumblePlay(var_480_float, var_481_int); // 0x174d Func
	
Label_5967:
	var_482_int = 15; // 0x174f PushI
	SendWorldWndMessage(var_482_int, var_477_object); // 0x1750 Func
	return 2; // 0x1752 Return
}


func_5445(var_32_bool, var_33_object)
{
	var_34_int = 0; var_35_int = 0; // 0x1545 PushV
	var_36_bool = 0; var_37_object = Obj(); // 0x1546 PushV
	var_37_object = var_33_object; // 0x1547 Mov
	func_5409(var_36_bool, var_37_object); // 0x1548 NEW_2
	var_53_bool = var_36_bool == 0; // 0x154a Not
	if(var_53_bool == 0) goto Label_5454; // 0x154b JumpB
	var_32_bool = 0; // 0x154c MovB
	return 2; // 0x154d Return
	
Label_5454:
	var_54_bool = 0; var_55_object = Obj(); var_56_string = ""; // 0x154e PushV
	var_55_object = var_33_object; // 0x154f Mov
	var_56_string = "noaccess"; // 0x1550 MovS
	func_5319(var_54_bool, var_55_object, var_56_string); // 0x1551 NEW_2
	var_63_bool = var_54_bool == 0; // 0x1553 Not
	if(var_63_bool == 0) goto Label_5463; // 0x1554 JumpB
	var_32_bool = 1; // 0x1555 MovB
	return 2; // 0x1556 Return
	
Label_5463:
	var_64_string = "noaccess"; // 0x1557 PushS
	GetProperty(var_64_string, var_35_int); // 0x1558 ObjFunc
	var_65_int = 0; // 0x155a PushI
	var_32_bool = var_35_int == var_65_int; // 0x155b Eq2
	return 2; // 0x155c Return
}


func_5972(var_29_int)
{
	var_30_float = 0; var_31_float = 0; // 0x1754 PushV
	GetGameTime(var_31_float); // 0x1755 Func
	var_32_int = 1; // 0x1757 PushI
	var_33_int = 0; // 0x1758 PushV
	var_34_int = 24; // 0x1759 PushI
	var_33_int = var_31_float / var_31_float; // 0x175a Div2
	var_29_int = var_32_int + var_33_int; // 0x175b Add2
	return 2; // 0x175c Return
}


func_3420(var_44_string)
{
	RemoveRTEnvelope(); // 0xd5d Func
	SetDeathState(); // 0xd5f Func
	Stop(); // 0xd61 Func
	StopAsync(); // 0xd63 Func
	StopSecondaryAnimation(); // 0xd65 Func
	var_45_string = ""; // 0xd67 PushV
	var_45_string = var_44_string; // 0xd68 Mov
	func_5834(var_45_string); // 0xd69 NEW_2
	var_74_string = "all"; // 0xd6b PushS
	PlayAnimation(var_74_string, var_44_string); // 0xd6c Func
	WaitForAnimEnd(); // 0xd6e Func
	var_75_string = "all"; // 0xd70 PushS
	LockAnimationEnd(var_75_string, var_44_string); // 0xd71 Func
	RemoveEnvelope(); // 0xd73 Func
	return 0; // 0xd75 Return
}


func_5469(var_36_object)
{
	var_37_bool = 0; var_38_int = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_string = ""; var_44_bool = 0; var_45_int = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_string = ""; // 0x155d PushV
	var_51_bool = var_36_object == 0; // 0x155e NullEq
	if(var_51_bool == 0) goto Label_5473; // 0x155f JumpB
	return 14; // 0x1560 Return
	
Label_5473:
	IsDead(var_44_bool); // 0x1561 Func
	var_52_bool = var_44_bool; // 0x1563 Push
	if(var_52_bool == 0) goto Label_5478; // 0x1564 JumpB
	return 14; // 0x1565 Return
	
Label_5478:
	GetSecondaryAnimationType(var_45_int); // 0x1566 Func
	var_53_int = 0; // 0x1568 PushI
	var_54_bool = var_45_int < var_53_int; // 0x1569 LT
	if(var_54_bool == 0) goto Label_5484; // 0x156a JumpB
	return 14; // 0x156b Return
	
Label_5484:
	GetPosition(var_46_cvector); // 0x156c ObjFunc
	GetPosition(var_47_cvector); // 0x156e Func
	GetDirection(var_48_cvector); // 0x1570 Func
	var_49_cvector = var_47_cvector - var_46_cvector; // 0x1572 Sub2
	var_55_float = GetByIndex(var_49_cvector, 0); // 0x1573 PushE
	var_56_float = GetByIndex(var_48_cvector, 0); // 0x1574 PushE
	var_57_float = var_55_float * var_56_float; // 0x1575 Mult
	var_58_float = GetByIndex(var_49_cvector, 2); // 0x1576 PushE
	var_59_float = GetByIndex(var_48_cvector, 2); // 0x1577 PushE
	var_60_float = var_58_float * var_59_float; // 0x1578 Mult
	var_61_int = var_57_float + var_60_float; // 0x1579 Add
	var_62_int = 0; // 0x157a PushI
	var_63_bool = var_61_int >= var_62_int; // 0x157b GE
	if(var_63_bool == 0) goto Label_5503; // 0x157c JumpB
	var_50_string = "fhit"; // 0x157d MovS
	goto Label_5504; // 0x157e Jump
	
Label_5504:
	var_64_string = "hit_react"; // 0x1580 PushS
	var_65_string = "1"; // 0x1581 PushS
	var_66_int = var_50_string + var_65_string; // 0x1582 Add
	var_67_string = "2"; // 0x1583 PushS
	var_68_int = var_50_string + var_67_string; // 0x1584 Add
	var_69_int = -10; // 0x1585 PushI
	FadeSecondaryAnimation(var_64_string, var_66_int, var_68_int, var_69_int); // 0x1586 Func
	return 14; // 0x1588 Return
	
Label_5503:
	var_50_string = "bhit"; // 0x157f MovS
}


func_5981(var_380_int)
{
	var_381_float = 0; var_382_float = 0; // 0x175d PushV
	GetGameTime(var_382_float); // 0x175e Func
	var_383_int = 0; // 0x1760 PushV
	var_383_int = var_382_float; // 0x1761 Mov
	var_384_int = 24; // 0x1762 PushI
	var_380_int = var_383_int % var_384_int; // 0x1763 Mod2
	return 2; // 0x1764 Return
}


func_4959(var_0_bool, var_270_bool)
{
	var_271_bool = 0; var_272_bool = 0; // 0x135f PushV
	var_273_string = "IsAttacking"; // 0x1360 PushS
	var_274_int = 1; // 0x1361 PushI
	var_275_bool = IsFuncExist(var_0_bool, var_273_string, var_274_int); // 0x1362 FuncExist
	if(var_275_bool == 0) goto Label_4968; // 0x1363 JumpB
	IsAttacking(var_272_bool); // 0x1364 TObjFunc
	var_270_bool = var_272_bool; // 0x1366 Mov
	return 2; // 0x1367 Return
	
Label_4968:
	var_270_bool = 0; // 0x1368 MovB
	return 2; // 0x1369 Return
}


func_5989(var_22_object)
{
	var_23_bool = 0; var_24_bool = 0; // 0x1765 PushV
	IsPlayerActor(var_22_object, var_24_bool); // 0x1766 Func
	var_25_bool = var_24_bool; // 0x1768 Push
	if(var_25_bool == 0) goto Label_5997; // 0x1769 JumpB
	var_26_string = "attack"; // 0x176a PushS
	PlayGlobalMusic(var_26_string); // 0x176b Func
	
Label_5997:
	return 2; // 0x176d Return
}


func_7015(var_64_bool)
{
	var_64_bool = 0; // 0x1b67 MovB
	return 0; // 0x1b68 Return
}


func_7017(var_24_bool, var_25_object, var_26_object, var_27_bool)
{
	var_28_bool = 0; var_29_object = Obj(); var_30_object = Obj(); var_31_float = 0; var_32_bool = 0; // 0x1b6a PushV
	var_29_object = var_25_object; // 0x1b6b Mov
	var_30_object = var_26_object; // 0x1b6c Mov
	var_31_float = 500.0; // 0x1b6d MovF
	var_32_bool = var_27_bool; // 0x1b6e Mov
	func_6855(var_28_bool, var_29_object, var_30_object, var_31_float, var_32_bool); // 0x1b6f NEW_2
	var_24_bool = var_28_bool; // 0x1b70 Mov
	return 0; // 0x1b72 Return
}


func_4970(var_2_object, var_5_bool)
{
	var_387_float = 0; var_388_int = 0; var_389_float = 0; var_390_int = 0; // 0x136a PushV
	var_391_bool = var_2_object == 0; // 0x136b Not
	if(var_391_bool == 0) goto Label_4974; // 0x136c JumpB
	return 4; // 0x136d Return
	
Label_4974:
	var_392_bool = var_5_bool; // 0x136e PushT
	if(var_392_bool == 0) goto Label_4982; // 0x136f JumpB
	var_393_int = -1; // 0x1370 PushI
	var_5_bool = var_5_bool + var_393_int; // 0x1371 Add2
	var_394_int = 0; // 0x1372 PushI
	var_395_bool = var_5_bool > var_394_int; // 0x1373 GT
	if(var_395_bool == 0) goto Label_4982; // 0x1374 JumpB
	return 4; // 0x1375 Return
	
Label_4982:
	rand(var_389_float); // 0x1376 Func
	var_396_float = 0; // 0x1378 PushV
	func_5020(var_396_float); // 0x1379 NEW_2
	var_397_bool = var_389_float < var_396_float; // 0x137b LT
	if(var_397_bool == 0) goto Label_5001; // 0x137c JumpB
	irand(var_390_int, var_389_float); // 0x137d Func
	var_398_int = 1; // 0x137f PushI
	var_390_int = var_390_int + var_398_int; // 0x1380 Add2
	var_399_string = "attack"; // 0x1381 PushS
	var_400_int = var_399_string + var_390_int; // 0x1382 Add
	Speak(var_400_int); // 0x1383 Func
	var_401_int = 0; // 0x1385 PushV
	func_5018(var_401_int); // 0x1386 NEW_2
	var_5_bool = var_401_int; // 0x1387 TMov
	
Label_5001:
	return 4; // 0x1389 Return
}


func_5998()
{
	var_380_object = Obj(); var_381_object = Obj(); // 0x176e PushV
	GetScene(var_381_object); // 0x176f Func
	var_382_string = "battle"; // 0x1771 PushS
	var_383_object = Obj(); // 0x1772 PushV
	func_5875(var_383_object); // 0x1773 NEW_2
	BroadcastMessage(var_382_string, var_383_object, var_381_object); // 0x1775 Func
	return 2; // 0x1777 Return
}


func_7027(var_102_object)
{
	var_103_bool = 0; var_104_object = Obj(); // 0x1b74 PushV
	var_104_object = var_102_object; // 0x1b75 Mov
	func_5314(var_103_bool, var_104_object); // 0x1b76 NEW_2
	if(var_103_bool == 0) goto Label_7044; // 0x1b78 JumpB
	var_107_object = Obj(); // 0x1b79 PushV
	func_5875(var_107_object); // 0x1b7a NEW_2
	var_110_float = -0.1; // 0x1b7c PushF
	var_111_bool = 1; // 0x1b7d PushB
	ReportReputationChange(var_102_object, var_107_object, var_110_float, var_111_bool); // 0x1b7e Func
	var_112_bool = 0; // 0x1b80 PushV
	var_112_bool = 1; // 0x1b81 MovB
	func_6402(); // 0x1b82 NEW_2
	
Label_7044:
	func_6378(); // 0x1b85 NEW_2
	var_178_bool = GlobalVars[0]; // 0x1b87 PushGE
	var_178_bool = 1; // 0x1b88 MovB
	GlobalVars[0] = var_178_bool; // 0x1b89 PopGE
	var_179_int = 50; // 0x1b8a PushI
	var_180_int = 40; // 0x1b8b PushI
	SetRTEnvelope(var_179_int, var_180_int); // 0x1b8c Func
	return 0; // 0x1b8e Return
}


func_6009()
{
	var_27_int = 1000; // 0x177a PushI
	SetReturnValue(var_27_int); // 0x177b ObjFunc
	return 0; // 0x177d Return
}


func_6014(var_424_bool)
{
	var_426_int = 0; var_427_string = ""; // 0x177f PushV
	var_427_string = "branch"; // 0x1780 MovS
	func_5950(var_426_int, var_427_string); // 0x1781 NEW_2
	var_428_int = 0; // 0x1783 PushI
	var_429_bool = var_426_int == var_428_int; // 0x1784 Eq
	if(var_429_bool == 0) goto Label_6024; // 0x1785 JumpB
	var_424_bool = 1; // 0x1786 MovB
	return 0; // 0x1787 Return
	
Label_6024:
	var_424_bool = 0; // 0x1788 MovB
	return 0; // 0x1789 Return
}


func_6530(var_137_int, var_138_string)
{
	var_139_int = 0; var_140_int = 0; // 0x1982 PushV
	GetInvItemByName(var_140_int, var_138_string); // 0x1983 Func
	var_137_int = var_140_int; // 0x1985 Mov
	return 2; // 0x1986 Return
}


func_6535(var_20_object)
{
	var_21_object = Obj(); // 0x1988 PushV
	var_21_object = var_20_object; // 0x1989 Mov
	TaskCall(3); // 0x198a TaskCall
	func_3296(var_21_object); // 0x198b NEW_2
	TaskReturn(); // 0x198c TaskReturn
	return 0; // 0x198e Return
}


func_5513(var_23_object, var_24_int, var_25_float)
{
	var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_int = 0; var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_int = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_object = Obj(); var_37_int = 0; var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_int = 0; var_42_int = 0; var_43_cvector = CVector(0,0,0); // 0x1589 PushV
	var_44_bool = 0; // 0x158a PushV
	var_44_bool = 0; // 0x158b MovB
	var_45_bool = 0; // 0x158c PushV
	var_45_bool = 0; // 0x158d MovB
	var_46_object = var_23_object; // 0x158e Push
	if(var_46_object == 0) goto Label_5524; // 0x158f JumpB
	var_47_int = 4; // 0x1590 PushI
	var_48_bool = var_24_int != var_47_int; // 0x1591 Neq
	if(var_48_bool == 0) goto Label_5524; // 0x1592 JumpB
	var_45_bool = 1; // 0x1593 MovB
	
Label_5524:
	if(var_45_bool == 0) goto Label_5529; // 0x1594 JumpB
	var_49_int = 5; // 0x1595 PushI
	var_50_bool = var_24_int != var_49_int; // 0x1596 Neq
	if(var_50_bool == 0) goto Label_5529; // 0x1597 JumpB
	var_44_bool = 1; // 0x1598 MovB
	
Label_5529:
	if(var_44_bool == 0) goto Label_5576; // 0x1599 JumpB
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); // 0x159a PushV
	var_53_cvector = CVector(0,0,0); var_54_object = Obj(); // 0x159b PushV
	var_54_object = var_23_object; // 0x159c Mov
	func_5299(var_54_object); // 0x159d NEW_2
	var_52_cvector = var_53_cvector; // 0x159e Mov
	func_5881(var_51_cvector, var_52_cvector); // 0x15a0 NEW_2
	var_35_cvector = var_51_cvector; // 0x15a1 Mov
	CreateVectorVector(var_36_object); // 0x15a3 Func
	var_37_int = 1; // 0x15a5 MovI
	
Label_5542:
	var_64_string = "hit"; // 0x15a6 PushS
	var_65_int = var_64_string + var_37_int; // 0x15a7 Add
	GetGeometryLocator(var_65_int, var_38_bool, var_39_cvector, var_40_cvector); // 0x15a8 Func
	var_66_bool = var_38_bool == 0; // 0x15aa Not
	if(var_66_bool == 0) goto Label_5549; // 0x15ab JumpB
	goto Label_5558; // 0x15ac Jump
	
Label_5558:
	size(var_41_int); // 0x15b6 ObjFunc
	var_67_int = var_41_int; // 0x15b8 Push
	if(var_67_int == 0) goto Label_5575; // 0x15b9 JumpB
	irand(var_42_int, var_41_int); // 0x15ba Func
	get(var_43_cvector, var_42_int); // 0x15bc ObjFunc
	var_68_object = Obj(); var_69_int = 0; var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); // 0x15be PushV
	var_68_object = var_23_object; // 0x15bf Mov
	var_69_int = var_24_int; // 0x15c0 Mov
	var_70_float = var_25_float; // 0x15c1 Mov
	var_71_cvector = var_43_cvector; // 0x15c2 Mov
	var_72_cvector = -var_35_cvector; // 0x15c3 Neg2
	func_5581(var_70_float, var_71_cvector, var_72_cvector); // 0x15c4 NEW_2
	return 18; // 0x15c6 Return
	
Label_5575:
	var_36_object = 0; // 0x15c7 SetNull
	
Label_5576:
	var_113_object = Obj(); // 0x15c8 PushV
	var_113_object = var_23_object; // 0x15c9 Mov
	func_5469(var_113_object); // 0x15ca NEW_2
	return 18; // 0x15cc Return
	
Label_5549:
	var_114_int = var_40_cvector | var_35_cvector; // 0x15ad Or
	var_115_float = 0.70711; // 0x15ae PushF
	var_116_bool = var_114_int >= var_115_float; // 0x15af GE
	if(var_116_bool == 0) goto Label_5555; // 0x15b0 JumpB
	add(var_39_cvector); // 0x15b1 ObjFunc
	
Label_5555:
	var_117_int = 1; // 0x15b3 PushI
	var_37_int = var_37_int + var_117_int; // 0x15b4 Add2
	goto Label_5542; // 0x15b5 Jump
}


func_6026(var_123_bool)
{
	var_125_int = 0; var_126_string = ""; // 0x178b PushV
	var_126_string = "branch"; // 0x178c MovS
	func_5950(var_125_int, var_126_string); // 0x178d NEW_2
	var_129_int = 2; // 0x178f PushI
	var_130_bool = var_125_int == var_129_int; // 0x1790 Eq
	if(var_130_bool == 0) goto Label_6036; // 0x1791 JumpB
	var_123_bool = 1; // 0x1792 MovB
	return 0; // 0x1793 Return
	
Label_6036:
	var_123_bool = 0; // 0x1794 MovB
	return 0; // 0x1795 Return
}


func_3467()
{
	var_102_bool = 0; // 0xd8b PushV
	func_5606(var_102_bool); // 0xd8c NEW_2
	var_105_bool = var_102_bool == 0; // 0xd8e Not
	if(var_105_bool == 0) goto Label_3475; // 0xd8f JumpB
	func_6893(); // 0xd91 NEW_2
	
Label_3475:
	return 0; // 0xd93 Return
}


func_5002(var_0_bool)
{
	var_143_object = Obj(); // 0x138a PushV
	var_143_object = var_0_bool; // 0x138b MovT
	func_5989(var_143_object); // 0x138c NEW_2
	return 0; // 0x138e Return
}


func_5007(var_484_int)
{
	var_484_int = 0; // 0x138f MovI
	return 0; // 0x1390 Return
}


func_3985()
{
	var_133_int = 0; var_134_int = 0; var_135_int = 0; var_136_int = 0; var_137_bool = 0; var_138_float = 0; var_139_bool = 0; var_140_int = 0; var_141_int = 0; var_142_int = 0; var_143_int = 0; var_144_bool = 0; var_145_float = 0; var_146_bool = 0; // 0xf91 PushV
	WaitForAnimEnd(); // 0xf92 Func
	var_147_bool = 0; // 0xf94 PushV
	func_5606(var_147_bool); // 0xf95 NEW_2
	var_148_bool = var_147_bool == 0; // 0xf97 Not
	if(var_148_bool == 0) goto Label_3994; // 0xf98 JumpB
	return 14; // 0xf99 Return
	
Label_3994:
	var_149_int = 0; // 0xf9a PushV
	func_6715(var_149_int); // 0xf9b NEW_2
	var_140_int = var_149_int; // 0xf9c Mov
	var_141_int = 0; // 0xf9e MovI
	
Label_3999:
	var_162_bool = 0; // 0xf9f PushV
	var_162_bool = 0; // 0xfa0 MovB
	var_163_int = 5; // 0xfa1 PushI
	var_164_bool = var_141_int < var_163_int; // 0xfa2 LT
	if(var_164_bool == 0) goto Label_4009; // 0xfa3 JumpB
	var_165_bool = 0; // 0xfa4 PushV
	func_5606(var_165_bool); // 0xfa5 NEW_2
	if(var_165_bool == 0) goto Label_4009; // 0xfa7 JumpB
	var_162_bool = 1; // 0xfa8 MovB
	
Label_4009:
	if(var_162_bool == 0) goto Label_4061; // 0xfa9 JumpB
	var_166_int = 3; // 0xfaa PushI
	irand(var_142_int, var_166_int); // 0xfab Func
	var_167_int = 0; // 0xfad PushI
	var_168_bool = var_142_int == var_167_int; // 0xfae Eq
	if(var_168_bool == 0) goto Label_4033; // 0xfaf JumpB
	var_169_int = var_140_int; // 0xfb0 Push
	if(var_169_int == 0) goto Label_4032; // 0xfb1 JumpB
	irand(var_143_int, var_140_int); // 0xfb2 Func
	var_170_string = "all"; // 0xfb4 PushS
	var_171_string = ""; var_172_int = 0; // 0xfb5 PushV
	var_172_int = var_143_int; // 0xfb6 Mov
	func_6708(var_171_string, var_172_int); // 0xfb7 NEW_2
	PlayAnimation(var_170_string, var_171_string); // 0xfb9 Func
	WaitForAnimEnd(var_144_bool); // 0xfbb Func
	var_173_bool = var_144_bool == 0; // 0xfbd Not
	if(var_173_bool == 0) goto Label_4032; // 0xfbe JumpB
	goto Label_4061; // 0xfbf Jump
	
Label_4061:
	ResetAAS(); // 0xfdd Func
	return 14; // 0xfdf Return
	
Label_4032:
	goto Label_4050; // 0xfc0 Jump
	
Label_4050:
	var_174_bool = 0; // 0xfd2 PushV
	func_4064(var_174_bool); // 0xfd3 NEW_2
	var_175_bool = var_174_bool == 0; // 0xfd5 Not
	if(var_175_bool == 0) goto Label_4056; // 0xfd6 JumpB
	goto Label_4061; // 0xfd7 Jump
	
Label_4056:
	ResetAAS(); // 0xfd8 Func
	var_176_int = 1; // 0xfda PushI
	var_141_int = var_141_int + var_176_int; // 0xfdb Add2
	goto Label_3999; // 0xfdc Jump
	
Label_4033:
	var_177_int = 1; // 0xfc1 PushI
	var_178_bool = var_142_int == var_177_int; // 0xfc2 Eq
	if(var_178_bool == 0) goto Label_4047; // 0xfc3 JumpB
	var_179_int = 4; // 0xfc4 PushI
	rand(var_145_float, var_179_int); // 0xfc5 Func
	var_180_int = 1; // 0xfc7 PushI
	var_181_int = var_145_float + var_180_int; // 0xfc8 Add
	Sleep(var_181_int, var_146_bool); // 0xfc9 Func
	var_182_bool = var_146_bool == 0; // 0xfcb Not
	if(var_182_bool == 0) goto Label_4046; // 0xfcc JumpB
	goto Label_4061; // 0xfcd Jump
	
Label_4046:
	goto Label_4050; // 0xfce Jump
	
Label_4047:
	var_183_int = var_141_int; // 0xfcf Push
	if(var_183_int == 0) goto Label_4050; // 0xfd0 JumpB
	goto Label_4061; // 0xfd1 Jump
}


func_5009()
{
	var_276_string = ""; // 0x1391 PushV
	var_276_string = "attack_stay"; // 0x1392 MovS
	func_5834(var_276_string); // 0x1393 NEW_2
	return 0; // 0x1395 Return
}


func_6038(var_149_bool, var_150_object)
{
	var_151_bool = 0; var_152_object = Obj(); // 0x1797 PushV
	var_152_object = var_150_object; // 0x1798 Mov
	func_6178(var_152_object); // 0x1799 NEW_2
	if(var_151_bool == 0) goto Label_6046; // 0x179b JumpB
	var_149_bool = 1; // 0x179c MovB
	return 0; // 0x179d Return
	
Label_6046:
	var_149_bool = 0; // 0x179e MovB
	return 0; // 0x179f Return
}


func_5014()
{
	return 0; // 0x1397 Return
}


func_5016(var_509_bool)
{
	var_509_bool = 1; // 0x1398 MovB
	return 0; // 0x1399 Return
}


func_5018(var_401_int)
{
	var_401_int = 1; // 0x139a MovI
	return 0; // 0x139b Return
}


func_5020(var_396_float)
{
	var_396_float = 0.5; // 0x139c MovF
	return 0; // 0x139d Return
}


func_6048(var_163_bool, var_164_object)
{
	var_165_bool = 0; var_166_object = Obj(); // 0x17a1 PushV
	var_166_object = var_164_object; // 0x17a2 Mov
	func_6185(var_166_object); // 0x17a3 NEW_2
	if(var_165_bool == 0) goto Label_6056; // 0x17a5 JumpB
	var_163_bool = 1; // 0x17a6 MovB
	return 0; // 0x17a7 Return
	
Label_6056:
	var_163_bool = 0; // 0x17a8 MovB
	return 0; // 0x17a9 Return
}


func_5029(var_2_object, var_150_bool, var_151_object, var_152_float, var_153_float, var_154_bool, var_155_bool)
{
	var_159_bool = 0; var_160_bool = 0; var_161_bool = 0; var_162_bool = 0; // 0x13a5 PushV
	var_163_object = Obj(); // 0x13a6 PushV
	var_163_object = var_151_object; // 0x13a7 Mov
	func_5989(var_163_object); // 0x13a8 NEW_2
	var_164_int = 1; // 0x13aa PushI
	var_165_int = 5; // 0x13ab PushI
	SetTimer(var_164_int, var_165_int); // 0x13ac Func
	CanSee(var_161_bool, var_151_object); // 0x13ae Func
	var_166_bool = var_161_bool; // 0x13b0 Push
	if(var_166_bool == 0) goto Label_5048; // 0x13b1 JumpB
	var_2_object = 1; // 0x13b2 TMovB
	var_167_object = Obj(); // 0x13b3 PushV
	var_167_object = var_151_object; // 0x13b4 Mov
	func_5790(var_167_object); // 0x13b5 NEW_2
	goto Label_5049; // 0x13b7 Jump
	
Label_5049:
	var_174_bool = 0; var_175_object = Obj(); // 0x13b9 PushV
	var_175_object = var_151_object; // 0x13ba Mov
	func_5314(var_174_bool, var_175_object); // 0x13bb NEW_2
	if(var_174_bool == 0) goto Label_5059; // 0x13bd JumpB
	var_178_object = Obj(); // 0x13be PushV
	func_5875(var_178_object); // 0x13bf NEW_2
	SendPlayerEnemy(var_151_object, var_178_object); // 0x13c1 Func
	
Label_5059:
	var_179_bool = 0; var_180_object = Obj(); var_181_float = 0; var_182_float = 0; var_183_bool = 0; var_184_bool = 0; // 0x13c3 PushV
	var_180_object = var_151_object; // 0x13c4 Mov
	var_181_float = var_152_float; // 0x13c5 Mov
	var_182_float = var_153_float; // 0x13c6 Mov
	var_183_bool = var_154_bool; // 0x13c7 Mov
	var_184_bool = var_155_bool; // 0x13c8 Mov
	func_5134(var_161_bool, var_162_bool, var_179_bool, var_180_object, var_181_float, var_182_float, var_183_bool, var_184_bool); // 0x13c9 NEW_2
	var_162_bool = var_179_bool; // 0x13ca Mov
	var_230_object = var_2_object; // 0x13cc PushT
	if(var_230_object == 0) goto Label_5073; // 0x13cd JumpB
	var_231_string = "head"; // 0x13ce PushS
	UnlookAsync(var_231_string); // 0x13cf Func
	
Label_5073:
	var_232_int = 1; // 0x13d1 PushI
	KillTimer(var_232_int); // 0x13d2 Func
	var_150_bool = var_162_bool; // 0x13d4 Mov
	return 4; // 0x13d5 Return
	
Label_5048:
	var_2_object = 0; // 0x13b8 TMovB
}


func_6058(var_173_bool, var_174_object)
{
	var_175_bool = 0; var_176_object = Obj(); // 0x17ab PushV
	var_176_object = var_174_object; // 0x17ac Mov
	func_6192(var_176_object); // 0x17ad NEW_2
	if(var_175_bool == 0) goto Label_6066; // 0x17af JumpB
	var_173_bool = 1; // 0x17b0 MovB
	return 0; // 0x17b1 Return
	
Label_6066:
	var_173_bool = 0; // 0x17b2 MovB
	return 0; // 0x17b3 Return
}


func_6068(var_188_bool, var_189_object)
{
	var_190_bool = 0; var_191_object = Obj(); // 0x17b5 PushV
	var_191_object = var_189_object; // 0x17b6 Mov
	func_6199(var_191_object); // 0x17b7 NEW_2
	if(var_190_bool == 0) goto Label_6076; // 0x17b9 JumpB
	var_188_bool = 1; // 0x17ba MovB
	return 0; // 0x17bb Return
	
Label_6076:
	var_188_bool = 0; // 0x17bc MovB
	return 0; // 0x17bd Return
}


func_6580(var_23_bool, var_24_object, var_25_string)
{
	var_26_string = "unholster"; // 0x19b5 PushS
	var_27_bool = var_25_string == var_26_string; // 0x19b6 Eq
	if(var_27_bool == 0) goto Label_6591; // 0x19b7 JumpB
	var_28_bool = 0; var_29_object = Obj(); // 0x19b8 PushV
	var_29_object = var_24_object; // 0x19b9 Mov
	func_6921(var_29_object); // 0x19ba NEW_2
	var_23_bool = var_28_bool; // 0x19bb Mov
	return 0; // 0x19bd Return
	
Label_6591:
	var_30_string = "player_shot"; // 0x19bf PushS
	var_31_bool = var_25_string == var_30_string; // 0x19c0 Eq
	if(var_31_bool == 0) goto Label_6601; // 0x19c1 JumpB
	var_32_bool = 0; var_33_object = Obj(); // 0x19c2 PushV
	var_33_object = var_24_object; // 0x19c3 Mov
	func_6926(var_32_bool, var_33_object); // 0x19c4 NEW_2
	var_23_bool = var_32_bool; // 0x19c5 Mov
	return 0; // 0x19c7 Return
	
Label_6601:
	var_47_string = "battle"; // 0x19c9 PushS
	var_48_bool = var_25_string == var_47_string; // 0x19ca Eq
	if(var_48_bool == 0) goto Label_6610; // 0x19cb JumpB
	var_49_bool = 0; var_50_object = Obj(); // 0x19cc PushV
	var_50_object = var_24_object; // 0x19cd Mov
	func_6947(var_50_object); // 0x19ce NEW_2
	var_23_bool = var_49_bool; // 0x19cf Mov
	return 0; // 0x19d1 Return
	
Label_6610:
	var_23_bool = 0; // 0x19d2 MovB
	return 0; // 0x19d3 Return
}


func_6078(var_197_bool, var_198_object)
{
	var_199_bool = 0; var_200_object = Obj(); // 0x17bf PushV
	var_200_object = var_198_object; // 0x17c0 Mov
	func_6206(var_200_object); // 0x17c1 NEW_2
	if(var_199_bool == 0) goto Label_6086; // 0x17c3 JumpB
	var_197_bool = 1; // 0x17c4 MovB
	return 0; // 0x17c5 Return
	
Label_6086:
	var_197_bool = 0; // 0x17c6 MovB
	return 0; // 0x17c7 Return
}


func_6088(var_206_bool, var_207_object)
{
	var_208_bool = 0; var_209_object = Obj(); // 0x17c9 PushV
	var_209_object = var_207_object; // 0x17ca Mov
	func_6213(var_209_object); // 0x17cb NEW_2
	if(var_208_bool == 0) goto Label_6096; // 0x17cd JumpB
	var_206_bool = 1; // 0x17ce MovB
	return 0; // 0x17cf Return
	
Label_6096:
	var_206_bool = 0; // 0x17d0 MovB
	return 0; // 0x17d1 Return
}


func_5581(var_25_object, var_28_cvector, var_29_cvector)
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); // 0x15cd PushV
	GetScene(var_32_object); // 0x15ce Func
	var_34_string = "scripted"; // 0x15d0 PushS
	var_35_string = "blood_dir.xml"; // 0x15d1 PushS
	AddActorByType(var_33_object, var_34_string, var_32_object, var_28_cvector, var_29_cvector, var_35_string); // 0x15d2 Func
	var_36_object = Obj(); // 0x15d4 PushV
	var_36_object = var_25_object; // 0x15d5 Mov
	func_5469(var_36_object); // 0x15d6 NEW_2
	return 4; // 0x15d8 Return
}


func_6098(var_179_bool, var_180_object)
{
	var_181_bool = 0; var_182_object = Obj(); // 0x17d3 PushV
	var_182_object = var_180_object; // 0x17d4 Mov
	func_6220(var_182_object); // 0x17d5 NEW_2
	if(var_181_bool == 0) goto Label_6106; // 0x17d7 JumpB
	var_179_bool = 1; // 0x17d8 MovB
	return 0; // 0x17d9 Return
	
Label_6106:
	var_179_bool = 0; // 0x17da MovB
	return 0; // 0x17db Return
}


func_6612(var_53_object, var_54_string)
{
	var_55_string = "unholster"; // 0x19d5 PushS
	var_56_bool = var_54_string == var_55_string; // 0x19d6 Eq
	if(var_56_bool == 0) goto Label_6621; // 0x19d7 JumpB
	var_57_object = Obj(); // 0x19d8 PushV
	var_57_object = var_53_object; // 0x19d9 Mov
	func_6924(); // 0x19da NEW_2
	goto Label_6636; // 0x19dc Jump
	
Label_6636:
	return 0; // 0x19ec Return
	
Label_6621:
	var_58_string = "player_shot"; // 0x19dd PushS
	var_59_bool = var_54_string == var_58_string; // 0x19de Eq
	if(var_59_bool == 0) goto Label_6629; // 0x19df JumpB
	var_60_object = Obj(); // 0x19e0 PushV
	var_60_object = var_53_object; // 0x19e1 Mov
	func_6941(var_60_object); // 0x19e2 NEW_2
	goto Label_6636; // 0x19e4 Jump
	
Label_6629:
	var_126_string = "battle"; // 0x19e5 PushS
	var_127_bool = var_54_string == var_126_string; // 0x19e6 Eq
	if(var_127_bool == 0) goto Label_6636; // 0x19e7 JumpB
	var_128_object = Obj(); // 0x19e8 PushV
	var_128_object = var_53_object; // 0x19e9 Mov
	func_6950(); // 0x19ea NEW_2
}


func_5595()
{
	var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); // 0x15db PushV
	GetPosition(var_99_cvector); // 0x15dc ObjFunc
	GetPosition(var_100_cvector); // 0x15de Func
	var_101_cvector = var_99_cvector - var_100_cvector; // 0x15e0 Sub2
	var_102_float = GetByIndex(var_101_cvector, 0); // 0x15e1 PushE
	var_103_float = GetByIndex(var_101_cvector, 2); // 0x15e2 PushE
	RotateAsync(var_102_float, var_103_float); // 0x15e3 Func
	return 6; // 0x15e5 Return
}


func_6108(var_216_bool, var_217_object)
{
	var_218_bool = 0; var_219_object = Obj(); // 0x17dd PushV
	var_219_object = var_217_object; // 0x17de Mov
	func_6227(var_219_object); // 0x17df NEW_2
	if(var_218_bool == 0) goto Label_6116; // 0x17e1 JumpB
	var_216_bool = 1; // 0x17e2 MovB
	return 0; // 0x17e3 Return
	
Label_6116:
	var_216_bool = 0; // 0x17e4 MovB
	return 0; // 0x17e5 Return
}


func_4064(var_174_bool)
{
	var_174_bool = 1; // 0xfe0 MovB
	return 0; // 0xfe1 Return
}


func_4066()
{
	StopAnimation(); // 0xfe2 Func
	StopGroup0(); // 0xfe4 Func
	return 0; // 0xfe6 Return
}


func_5092(var_2_object)
{
	var_20_int = 1; // 0x13e4 PushI
	KillTimer(var_20_int); // 0x13e5 Func
	var_21_object = var_2_object; // 0x13e7 PushT
	if(var_21_object == 0) goto Label_5101; // 0x13e8 JumpB
	var_2_object = 0; // 0x13e9 TMovB
	var_22_string = "head"; // 0x13ea PushS
	UnlookAsync(var_22_string); // 0x13eb Func
	
Label_5101:
	func_5258(var_19_object); // 0x13ee NEW_2
	return 0; // 0x13f0 Return
}


func_6118(var_222_bool, var_223_object)
{
	var_224_bool = 0; var_225_object = Obj(); // 0x17e7 PushV
	var_225_object = var_223_object; // 0x17e8 Mov
	func_6234(var_225_object); // 0x17e9 NEW_2
	if(var_224_bool == 0) goto Label_6126; // 0x17eb JumpB
	var_222_bool = 1; // 0x17ec MovB
	return 0; // 0x17ed Return
	
Label_6126:
	var_222_bool = 0; // 0x17ee MovB
	return 0; // 0x17ef Return
}


func_5606(var_102_bool)
{
	var_103_bool = 0; var_104_bool = 0; // 0x15e6 PushV
	IsLoaded(var_104_bool); // 0x15e7 Func
	var_102_bool = var_104_bool; // 0x15e9 Mov
	return 2; // 0x15ea Return
}


func_4071(var_0_bool, var_62_object)
{
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_bool = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_bool = 0; // 0xfe7 PushV
	var_0_bool = var_62_object; // 0xfe8 TMov
	func_4122(var_69_bool); // 0xfea NEW_2
	GetDirection(var_67_cvector); // 0xfec Func
	var_77_cvector = CVector(0,0,0); var_78_object = Obj(); // 0xfee PushV
	var_78_object = var_0_bool; // 0xfef MovT
	func_5299(var_78_object); // 0xff0 NEW_2
	var_68_cvector = var_77_cvector; // 0xff1 Mov
	var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); // 0xff3 PushV
	var_84_cvector = var_67_cvector; // 0xff4 Mov
	var_85_cvector = var_68_cvector; // 0xff5 Mov
	func_5933(var_83_float, var_84_cvector, var_85_cvector); // 0xff6 NEW_2
	var_107_int = 0; // 0xff8 PushI
	var_108_bool = var_83_float < var_107_int; // 0xff9 LT
	if(var_108_bool == 0) goto Label_4097; // 0xffa JumpB
	var_109_object = Obj(); // 0xffb PushV
	var_109_object = var_0_bool; // 0xffc MovT
	func_5595(); // 0xffd NEW_2
	var_69_bool = 1; // 0xfff MovB
	goto Label_4100; // 0x1000 Jump
	
Label_4100:
	var_118_bool = var_69_bool; // 0x1004 Push
	if(var_118_bool == 0) goto Label_4116; // 0x1005 JumpB
	var_119_object = Obj(); // 0x1006 PushV
	var_119_object = var_0_bool; // 0x1007 MovT
	func_5595(); // 0x1008 NEW_2
	var_120_int = 111; // 0x100a PushI
	var_121_float = 0.5; // 0x100b PushF
	SetTimer(var_120_int, var_121_float); // 0x100c Func
	var_122_float = 5.0; // 0x100e PushF
	Sleep(var_122_float); // 0x100f Func
	var_123_int = 111; // 0x1011 PushI
	KillTimer(var_123_int); // 0x1012 Func
	
Label_4116:
	StopAsync(); // 0x1014 Func
	var_124_string = "head"; // 0x1016 PushS
	UnlookAsync(var_124_string); // 0x1017 Func
	return 6; // 0x1019 Return
	
Label_4097:
	var_125_float = 1.5; // 0x1001 PushF
	Sleep(var_125_float, var_69_bool); // 0x1002 Func
}


func_5611(var_55_bool, var_57_float)
{
	var_58_float = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_bool = 0; var_66_bool = 0; var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_bool = 0; var_75_bool = 0; // 0x15eb PushV
	GetPosition(var_68_cvector); // 0x15ec ObjFunc
	GetEyesHeight(var_67_float); // 0x15ee ObjFunc
	var_76_float = GetByIndex(var_68_cvector, 1); // 0x15f0 PushE
	var_76_float = var_76_float + var_67_float; // 0x15f1 Add2
	SetByIndex(var_68_cvector, 1) = var_76_float; // 0x15f2 PopE
	GetPosition(var_69_cvector); // 0x15f3 Func
	GetEyesHeight(var_67_float); // 0x15f5 Func
	var_77_float = GetByIndex(var_69_cvector, 1); // 0x15f7 PushE
	var_77_float = var_77_float + var_67_float; // 0x15f8 Add2
	SetByIndex(var_69_cvector, 1) = var_77_float; // 0x15f9 PopE
	var_70_cvector = var_68_cvector - var_69_cvector; // 0x15fa Sub2
	var_78_float = GetByIndex(var_70_cvector, 1); // 0x15fb PushE
	var_78_float = 0; // 0x15fc MovI
	SetByIndex(var_70_cvector, 1) = var_78_float; // 0x15fd PopE
	var_79_int = var_70_cvector | var_70_cvector; // 0x15fe Or
	var_80_float = sqrt(var_79_int); // 0x15ff Sqrt
	var_70_cvector = var_70_cvector / var_70_cvector; // 0x1600 Div2
	var_71_cvector = -var_70_cvector; // 0x1601 Neg2
	var_81_float = var_70_cvector * var_57_float; // 0x1602 Mult
	var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); // 0x1603 PushV
	var_84_cvector = CVector(0.0, 1.0, 0.0); // 0x1604 PushVec
	var_83_cvector = var_71_cvector ^ var_84_cvector; // 0x1605 Xor2
	func_5881(var_82_cvector, var_83_cvector); // 0x1606 NEW_2
	var_90_int = 25; // 0x1608 PushI
	var_91_float = var_82_cvector * var_90_int; // 0x1609 Mult
	var_92_int = var_81_float + var_91_float; // 0x160a Add
	var_93_cvector = CVector(0.0, 10.0, 0.0); // 0x160b PushVec
	var_72_cvector = var_92_int - var_93_cvector; // 0x160c Sub2
	var_73_cvector = var_69_cvector + var_72_cvector; // 0x160d Add2
	IsOverrideActive(var_74_bool); // 0x160e Func
	var_94_bool = var_74_bool; // 0x1610 Push
	if(var_94_bool == 0) goto Label_5652; // 0x1611 JumpB
	var_55_bool = 0; // 0x1612 MovB
	return 18; // 0x1613 Return
	
Label_5652:
	StopWorld(); // 0x1614 Func
	var_95_bool = 1; // 0x1616 PushB
	CameraTransit(var_73_cvector, var_71_cvector, var_95_bool); // 0x1617 Func
	var_96_float = GetByIndex(var_72_cvector, 0); // 0x1619 PushE
	var_97_float = GetByIndex(var_72_cvector, 2); // 0x161a PushE
	Rotate(var_96_float, var_97_float); // 0x161b Func
	var_98_bool = 0; // 0x161d PushV
	func_6965(var_98_bool); // 0x161e NEW_2
	if(var_98_bool == 0) goto Label_5666; // 0x1620 JumpB
	goto Label_5674; // 0x1621 Jump
	
Label_5674:
	CameraWaitForPlayFinish(); // 0x162a Func
	ResumeWorld(); // 0x162c Func
	var_55_bool = 1; // 0x162e MovB
	return 18; // 0x162f Return
	
Label_5666:
	var_99_string = "head"; // 0x1622 PushS
	HasAnimationTrack(var_75_bool, var_99_string); // 0x1623 Func
	var_100_bool = var_75_bool; // 0x1625 Push
	if(var_100_bool == 0) goto Label_5674; // 0x1626 JumpB
	var_101_string = "head"; // 0x1627 PushS
	LookAsyncCamera(var_101_string); // 0x1628 Func
}


func_6637(var_20_bool, var_21_object)
{
	var_22_bool = 0; var_23_bool = 0; // 0x19ed PushV
	var_24_bool = 0; // 0x19ee PushV
	var_24_bool = 0; // 0x19ef MovB
	var_25_bool = 0; var_26_object = Obj(); // 0x19f0 PushV
	var_26_object = var_21_object; // 0x19f1 Mov
	func_6921(var_26_object); // 0x19f2 NEW_2
	if(var_25_bool == 0) goto Label_6651; // 0x19f4 JumpB
	var_27_bool = 0; var_28_object = Obj(); // 0x19f5 PushV
	var_28_object = var_21_object; // 0x19f6 Mov
	func_5314(var_27_bool, var_28_object); // 0x19f7 NEW_2
	if(var_27_bool == 0) goto Label_6651; // 0x19f9 JumpB
	var_24_bool = 1; // 0x19fa MovB
	
Label_6651:
	if(var_24_bool == 0) goto Label_6658; // 0x19fb JumpB
	IsWeaponHolstered(var_23_bool); // 0x19fc ObjFunc
	var_31_bool = var_23_bool == 0; // 0x19fe Not
	if(var_31_bool == 0) goto Label_6658; // 0x19ff JumpB
	var_20_bool = 1; // 0x1a00 MovB
	return 2; // 0x1a01 Return
	
Label_6658:
	var_20_bool = 0; // 0x1a02 MovB
	return 2; // 0x1a03 Return
}


func_4589(var_1_object, var_2_object, var_4_string)
{
	var_104_bool = 0; var_105_bool = 0; var_106_cvector = CVector(0,0,0); var_107_bool = 0; var_108_bool = 0; var_109_cvector = CVector(0,0,0); // 0x11ed PushV
	var_1_object = 0; // 0x11ee TMovI
	
Label_4591:
	var_110_string = "all"; // 0x11ef PushS
	var_111_string = "attack_begin"; // 0x11f0 PushS
	var_112_int = 1; // 0x11f1 PushI
	var_113_int = var_1_object + var_112_int; // 0x11f2 Add
	var_114_int = var_111_string + var_113_int; // 0x11f3 Add
	HasAnimation(var_107_bool, var_110_string, var_114_int); // 0x11f4 Func
	var_115_bool = var_107_bool == 0; // 0x11f6 Not
	if(var_115_bool == 0) goto Label_4601; // 0x11f7 JumpB
	goto Label_4604; // 0x11f8 Jump
	
Label_4604:
	var_2_object = 0; // 0x11fc TMovI
	
Label_4605:
	var_116_string = "attack"; // 0x11fd PushS
	var_117_int = 1; // 0x11fe PushI
	var_118_int = var_2_object + var_117_int; // 0x11ff Add
	var_119_int = var_116_string + var_118_int; // 0x1200 Add
	IsExisting3DSound(var_108_bool, var_119_int); // 0x1201 Func
	var_120_bool = var_108_bool == 0; // 0x1203 Not
	if(var_120_bool == 0) goto Label_4614; // 0x1204 JumpB
	goto Label_4617; // 0x1205 Jump
	
Label_4617:
	var_121_string = "all"; // 0x1209 PushS
	var_122_string = "bjump"; // 0x120a PushS
	GetAnimationOffset(var_109_cvector, var_121_string, var_122_string); // 0x120b Func
	var_123_float = GetByIndex(var_109_cvector, 2); // 0x120d PushE
	var_4_string = -var_123_float; // 0x120e Neg2
	return 6; // 0x120f Return
	
Label_4614:
	var_124_int = 1; // 0x1206 PushI
	var_2_object = var_2_object + var_124_int; // 0x1207 Add2
	goto Label_4605; // 0x1208 Jump
	
Label_4601:
	var_125_int = 1; // 0x11f9 PushI
	var_1_object = var_1_object + var_125_int; // 0x11fa Add2
	goto Label_4591; // 0x11fb Jump
}


func_6128(var_268_bool, var_269_object)
{
	var_270_bool = 0; var_271_object = Obj(); // 0x17f1 PushV
	var_271_object = var_269_object; // 0x17f2 Mov
	func_6241(var_271_object); // 0x17f3 NEW_2
	if(var_270_bool == 0) goto Label_6136; // 0x17f5 JumpB
	var_268_bool = 1; // 0x17f6 MovB
	return 0; // 0x17f7 Return
	
Label_6136:
	var_268_bool = 0; // 0x17f8 MovB
	return 0; // 0x17f9 Return
}


func_6138(var_274_bool, var_275_object)
{
	var_276_bool = 0; var_277_object = Obj(); // 0x17fb PushV
	var_277_object = var_275_object; // 0x17fc Mov
	func_6248(var_277_object); // 0x17fd NEW_2
	if(var_276_bool == 0) goto Label_6146; // 0x17ff JumpB
	var_274_bool = 1; // 0x1800 MovB
	return 0; // 0x1801 Return
	
Label_6146:
	var_274_bool = 0; // 0x1802 MovB
	return 0; // 0x1803 Return
}


