task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	var_23_int = 1; // 0xa7 PushI
	if(var_23_int == 0) goto Label_258; // 0xa8 JumpB
	func_2113(); // 0xaa NEW_2
	var_25_int = 36906; // 0xac PushI
	var_26_bool = var_21_bool == var_25_int; // 0xad Eq
	if(var_26_bool == 0) goto Label_200; // 0xae JumpB
	var_27_string = ""; // 0xaf PushV
	var_27_string = "Neutral"; // 0xb0 MovS
	func_144(var_22_cvector, var_27_string); // 0xb1 NEW_2
	var_44_int = 535231; // 0xb3 PushI
	SetMessage(var_44_int); // 0xb4 TObjFunc
	ClearReplies(); // 0xb6 TObjFunc
	var_45_int = 535232; // 0xb8 PushI
	var_46_int = 36953; // 0xb9 PushI
	var_47_int = 36907; // 0xba PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0xbb TObjFunc
	var_48_int = 535233; // 0xbd PushI
	var_49_int = -1; // 0xbe PushI
	var_50_int = 36908; // 0xbf PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0xc0 TObjFunc
	var_51_int = 535280; // 0xc2 PushI
	var_52_int = -1; // 0xc3 PushI
	var_53_int = 36956; // 0xc4 PushI
	AddReply(var_51_int, var_52_int, var_53_int); // 0xc5 TObjFunc
	return 0; // 0xc7 Return
	
Label_200:
	var_54_int = 36953; // 0xc8 PushI
	var_55_bool = var_21_bool == var_54_int; // 0xc9 Eq
	if(var_55_bool == 0) goto Label_223; // 0xca JumpB
	var_56_string = ""; // 0xcb PushV
	var_56_string = "Neutral"; // 0xcc MovS
	func_144(var_22_cvector, var_56_string); // 0xcd NEW_2
	var_57_int = 535277; // 0xcf PushI
	SetMessage(var_57_int); // 0xd0 TObjFunc
	ClearReplies(); // 0xd2 TObjFunc
	var_58_int = 535278; // 0xd4 PushI
	var_59_int = 36957; // 0xd5 PushI
	var_60_int = 36954; // 0xd6 PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0xd7 TObjFunc
	var_61_int = 535279; // 0xd9 PushI
	var_62_int = 36957; // 0xda PushI
	var_63_int = 36955; // 0xdb PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0xdc TObjFunc
	return 0; // 0xde Return
	
Label_223:
	var_64_int = 36957; // 0xdf PushI
	var_65_bool = var_21_bool == var_64_int; // 0xe0 Eq
	if(var_65_bool == 0) goto Label_246; // 0xe1 JumpB
	var_66_string = ""; // 0xe2 PushV
	var_66_string = "Neutral"; // 0xe3 MovS
	func_144(var_22_cvector, var_66_string); // 0xe4 NEW_2
	var_67_int = 535281; // 0xe6 PushI
	SetMessage(var_67_int); // 0xe7 TObjFunc
	ClearReplies(); // 0xe9 TObjFunc
	var_68_int = 535282; // 0xeb PushI
	var_69_int = -1; // 0xec PushI
	var_70_int = 36958; // 0xed PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0xee TObjFunc
	var_71_int = 535283; // 0xf0 PushI
	var_72_int = -1; // 0xf1 PushI
	var_73_int = 36959; // 0xf2 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0xf3 TObjFunc
	return 0; // 0xf5 Return
	
Label_246:
	var_3_string = 1; // 0xf6 TMovB
	var_74_bool = 0; // 0xf7 PushV
	func_2224(var_74_bool); // 0xf8 NEW_2
	if(var_74_bool == 0) goto Label_254; // 0xfa JumpB
	lshStopAnimation(); // 0xfb Func
	goto Label_256; // 0xfd Jump
	
Label_256:
	return 0; // 0x100 Return
	
Label_254:
	StopAnimation(); // 0xfe Func
	
Label_258:
	return 0; // 0x102 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	var_23_int = 1; // 0x1a5 PushI
	if(var_23_int == 0) goto Label_484; // 0x1a6 JumpB
	func_2113(); // 0x1a8 NEW_2
	var_25_int = 19190; // 0x1aa PushI
	var_26_bool = var_21_bool == var_25_int; // 0x1ab Eq
	if(var_26_bool == 0) goto Label_449; // 0x1ac JumpB
	var_27_string = ""; // 0x1ad PushV
	var_27_string = "Neutral"; // 0x1ae MovS
	func_398(var_22_cvector, var_27_string); // 0x1af NEW_2
	var_44_int = 518057; // 0x1b1 PushI
	SetMessage(var_44_int); // 0x1b2 TObjFunc
	ClearReplies(); // 0x1b4 TObjFunc
	var_45_int = 518058; // 0x1b6 PushI
	var_46_int = 32643; // 0x1b7 PushI
	var_47_int = 19191; // 0x1b8 PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0x1b9 TObjFunc
	var_48_int = 531316; // 0x1bb PushI
	var_49_int = 32643; // 0x1bc PushI
	var_50_int = 32642; // 0x1bd PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0x1be TObjFunc
	return 0; // 0x1c0 Return
	
Label_449:
	var_51_int = 32643; // 0x1c1 PushI
	var_52_bool = var_21_bool == var_51_int; // 0x1c2 Eq
	if(var_52_bool == 0) goto Label_472; // 0x1c3 JumpB
	var_53_string = ""; // 0x1c4 PushV
	var_53_string = "Neutral"; // 0x1c5 MovS
	func_398(var_22_cvector, var_53_string); // 0x1c6 NEW_2
	var_54_int = 531317; // 0x1c8 PushI
	SetMessage(var_54_int); // 0x1c9 TObjFunc
	ClearReplies(); // 0x1cb TObjFunc
	var_55_int = 531318; // 0x1cd PushI
	var_56_int = -1; // 0x1ce PushI
	var_57_int = 32644; // 0x1cf PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0x1d0 TObjFunc
	var_58_int = 531319; // 0x1d2 PushI
	var_59_int = -1; // 0x1d3 PushI
	var_60_int = 32645; // 0x1d4 PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0x1d5 TObjFunc
	return 0; // 0x1d7 Return
	
Label_472:
	var_3_string = 1; // 0x1d8 TMovB
	var_61_bool = 0; // 0x1d9 PushV
	func_2224(var_61_bool); // 0x1da NEW_2
	if(var_61_bool == 0) goto Label_480; // 0x1dc JumpB
	lshStopAnimation(); // 0x1dd Func
	goto Label_482; // 0x1df Jump
	
Label_482:
	return 0; // 0x1e2 Return
	
Label_480:
	StopAnimation(); // 0x1e0 Func
	
Label_484:
	return 0; // 0x1e4 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	var_23_int = 1; // 0x2d0 PushI
	if(var_23_int == 0) goto Label_1342; // 0x2d1 JumpB
	func_2113(); // 0x2d3 NEW_2
	var_25_int = 22664; // 0x2d5 PushI
	var_26_bool = var_22_cvector == var_25_int; // 0x2d6 Eq
	if(var_26_bool == 0) goto Label_733; // 0x2d7 JumpB
	var_27_object = Obj(); var_28_object = Obj(); // 0x2d8 PushV
	var_27_object = var_1_object; // 0x2d9 MovT
	var_28_object = var_0_object; // 0x2da MovT
	func_2226(); // 0x2db NEW_2
	
Label_733:
	var_78_int = 22669; // 0x2dd PushI
	var_79_bool = var_22_cvector == var_78_int; // 0x2de Eq
	if(var_79_bool == 0) goto Label_741; // 0x2df JumpB
	var_80_object = Obj(); var_81_object = Obj(); // 0x2e0 PushV
	var_80_object = var_1_object; // 0x2e1 MovT
	var_81_object = var_0_object; // 0x2e2 MovT
	func_2226(); // 0x2e3 NEW_2
	
Label_741:
	var_82_int = 22684; // 0x2e5 PushI
	var_83_bool = var_22_cvector == var_82_int; // 0x2e6 Eq
	if(var_83_bool == 0) goto Label_749; // 0x2e7 JumpB
	var_84_object = Obj(); var_85_object = Obj(); // 0x2e8 PushV
	var_84_object = var_1_object; // 0x2e9 MovT
	var_85_object = var_0_object; // 0x2ea MovT
	func_2258(); // 0x2eb NEW_2
	
Label_749:
	var_88_int = 25222; // 0x2ed PushI
	var_89_bool = var_22_cvector == var_88_int; // 0x2ee Eq
	if(var_89_bool == 0) goto Label_757; // 0x2ef JumpB
	var_90_object = Obj(); var_91_object = Obj(); // 0x2f0 PushV
	var_90_object = var_1_object; // 0x2f1 MovT
	var_91_object = var_0_object; // 0x2f2 MovT
	func_2276(); // 0x2f3 NEW_2
	
Label_757:
	var_102_int = 25223; // 0x2f5 PushI
	var_103_bool = var_22_cvector == var_102_int; // 0x2f6 Eq
	if(var_103_bool == 0) goto Label_765; // 0x2f7 JumpB
	var_104_object = Obj(); var_105_object = Obj(); // 0x2f8 PushV
	var_104_object = var_1_object; // 0x2f9 MovT
	var_105_object = var_0_object; // 0x2fa MovT
	func_2276(); // 0x2fb NEW_2
	
Label_765:
	var_106_int = 25224; // 0x2fd PushI
	var_107_bool = var_22_cvector == var_106_int; // 0x2fe Eq
	if(var_107_bool == 0) goto Label_773; // 0x2ff JumpB
	var_108_object = Obj(); var_109_object = Obj(); // 0x300 PushV
	var_108_object = var_1_object; // 0x301 MovT
	var_109_object = var_0_object; // 0x302 MovT
	func_2276(); // 0x303 NEW_2
	
Label_773:
	var_110_int = 25219; // 0x305 PushI
	var_111_bool = var_22_cvector == var_110_int; // 0x306 Eq
	if(var_111_bool == 0) goto Label_781; // 0x307 JumpB
	var_112_object = Obj(); var_113_object = Obj(); // 0x308 PushV
	var_112_object = var_1_object; // 0x309 MovT
	var_113_object = var_0_object; // 0x30a MovT
	func_2276(); // 0x30b NEW_2
	
Label_781:
	var_114_int = 25220; // 0x30d PushI
	var_115_bool = var_22_cvector == var_114_int; // 0x30e Eq
	if(var_115_bool == 0) goto Label_789; // 0x30f JumpB
	var_116_object = Obj(); var_117_object = Obj(); // 0x310 PushV
	var_116_object = var_1_object; // 0x311 MovT
	var_117_object = var_0_object; // 0x312 MovT
	func_2276(); // 0x313 NEW_2
	
Label_789:
	var_118_int = 22687; // 0x315 PushI
	var_119_bool = var_22_cvector == var_118_int; // 0x316 Eq
	if(var_119_bool == 0) goto Label_797; // 0x317 JumpB
	var_120_object = Obj(); var_121_object = Obj(); // 0x318 PushV
	var_120_object = var_1_object; // 0x319 MovT
	var_121_object = var_0_object; // 0x31a MovT
	func_2258(); // 0x31b NEW_2
	
Label_797:
	var_122_int = 22689; // 0x31d PushI
	var_123_bool = var_22_cvector == var_122_int; // 0x31e Eq
	if(var_123_bool == 0) goto Label_815; // 0x31f JumpB
	var_124_object = Obj(); var_125_object = Obj(); // 0x320 PushV
	var_124_object = var_1_object; // 0x321 MovT
	var_125_object = var_0_object; // 0x322 MovT
	func_2264(); // 0x323 NEW_2
	var_128_object = Obj(); var_129_object = Obj(); // 0x325 PushV
	var_128_object = var_1_object; // 0x326 MovT
	var_129_object = var_0_object; // 0x327 MovT
	func_2294(var_129_object); // 0x328 NEW_2
	var_149_object = Obj(); var_150_object = Obj(); // 0x32a PushV
	var_149_object = var_1_object; // 0x32b MovT
	var_150_object = var_0_object; // 0x32c MovT
	func_2285(); // 0x32d NEW_2
	
Label_815:
	var_161_int = 25228; // 0x32f PushI
	var_162_bool = var_22_cvector == var_161_int; // 0x330 Eq
	if(var_162_bool == 0) goto Label_833; // 0x331 JumpB
	var_163_object = Obj(); var_164_object = Obj(); // 0x332 PushV
	var_163_object = var_1_object; // 0x333 MovT
	var_164_object = var_0_object; // 0x334 MovT
	func_2294(var_164_object); // 0x335 NEW_2
	var_165_object = Obj(); var_166_object = Obj(); // 0x337 PushV
	var_165_object = var_1_object; // 0x338 MovT
	var_166_object = var_0_object; // 0x339 MovT
	func_2264(); // 0x33a NEW_2
	var_167_object = Obj(); var_168_object = Obj(); // 0x33c PushV
	var_167_object = var_1_object; // 0x33d MovT
	var_168_object = var_0_object; // 0x33e MovT
	func_2285(); // 0x33f NEW_2
	
Label_833:
	var_169_int = 25229; // 0x341 PushI
	var_170_bool = var_22_cvector == var_169_int; // 0x342 Eq
	if(var_170_bool == 0) goto Label_841; // 0x343 JumpB
	var_171_object = Obj(); var_172_object = Obj(); // 0x344 PushV
	var_171_object = var_1_object; // 0x345 MovT
	var_172_object = var_0_object; // 0x346 MovT
	func_2285(); // 0x347 NEW_2
	
Label_841:
	var_173_int = 25231; // 0x349 PushI
	var_174_bool = var_22_cvector == var_173_int; // 0x34a Eq
	if(var_174_bool == 0) goto Label_849; // 0x34b JumpB
	var_175_object = Obj(); var_176_object = Obj(); // 0x34c PushV
	var_175_object = var_1_object; // 0x34d MovT
	var_176_object = var_0_object; // 0x34e MovT
	func_2285(); // 0x34f NEW_2
	
Label_849:
	var_177_int = 22663; // 0x351 PushI
	var_178_bool = var_21_bool == var_177_int; // 0x352 Eq
	if(var_178_bool == 0) goto Label_945; // 0x353 JumpB
	var_179_bool = 0; var_180_object = Obj(); // 0x354 PushV
	var_180_object = var_1_object; // 0x355 MovT
	func_2304(var_180_object); // 0x356 NEW_2
	if(var_179_bool == 0) goto Label_882; // 0x358 JumpB
	var_187_object = Obj(); var_188_object = Obj(); // 0x359 PushV
	var_187_object = var_1_object; // 0x35a MovT
	var_188_object = var_0_object; // 0x35b MovT
	func_2252(); // 0x35c NEW_2
	var_191_object = Obj(); var_192_object = Obj(); // 0x35e PushV
	var_191_object = var_1_object; // 0x35f MovT
	var_192_object = var_0_object; // 0x360 MovT
	func_2270(); // 0x361 NEW_2
	var_195_string = ""; // 0x363 PushV
	var_195_string = "Neutral"; // 0x364 MovS
	func_697(var_22_cvector, var_195_string); // 0x365 NEW_2
	var_212_int = 521502; // 0x367 PushI
	SetMessage(var_212_int); // 0x368 TObjFunc
	ClearReplies(); // 0x36a TObjFunc
	var_213_int = 523951; // 0x36c PushI
	var_214_int = 25235; // 0x36d PushI
	var_215_int = 25234; // 0x36e PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x36f TObjFunc
	return 0; // 0x371 Return
	
Label_882:
	var_216_string = ""; // 0x372 PushV
	var_216_string = "Neutral"; // 0x373 MovS
	func_697(var_22_cvector, var_216_string); // 0x374 NEW_2
	var_217_int = 521505; // 0x376 PushI
	SetMessage(var_217_int); // 0x377 TObjFunc
	ClearReplies(); // 0x379 TObjFunc
	var_218_bool = 0; var_219_object = Obj(); // 0x37b PushV
	var_219_object = var_1_object; // 0x37c MovT
	func_2316(var_219_object); // 0x37d NEW_2
	if(var_218_bool == 0) goto Label_901; // 0x37f JumpB
	var_224_int = 521506; // 0x380 PushI
	var_225_int = 22668; // 0x381 PushI
	var_226_int = 22667; // 0x382 PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x383 TObjFunc
	
Label_901:
	var_227_bool = 0; // 0x385 PushV
	var_227_bool = 0; // 0x386 MovB
	var_228_bool = 0; var_229_object = Obj(); // 0x387 PushV
	var_229_object = var_1_object; // 0x388 MovT
	func_2351(var_229_object); // 0x389 NEW_2
	if(var_228_bool == 0) goto Label_914; // 0x38b JumpB
	var_239_bool = 0; var_240_object = Obj(); // 0x38c PushV
	var_240_object = var_1_object; // 0x38d MovT
	func_2374(var_240_object); // 0x38e NEW_2
	if(var_239_bool == 0) goto Label_914; // 0x390 JumpB
	var_227_bool = 1; // 0x391 MovB
	
Label_914:
	if(var_227_bool == 0) goto Label_920; // 0x392 JumpB
	var_245_int = 521523; // 0x393 PushI
	var_246_int = 25213; // 0x394 PushI
	var_247_int = 22684; // 0x395 PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x396 TObjFunc
	
Label_920:
	var_248_bool = 0; // 0x398 PushV
	var_248_bool = 0; // 0x399 MovB
	var_249_bool = 0; var_250_object = Obj(); // 0x39a PushV
	var_250_object = var_1_object; // 0x39b MovT
	func_2328(var_250_object); // 0x39c NEW_2
	if(var_249_bool == 0) goto Label_933; // 0x39e JumpB
	var_260_bool = 0; var_261_object = Obj(); // 0x39f PushV
	var_261_object = var_1_object; // 0x3a0 MovT
	func_2374(var_261_object); // 0x3a1 NEW_2
	if(var_260_bool == 0) goto Label_933; // 0x3a3 JumpB
	var_248_bool = 1; // 0x3a4 MovB
	
Label_933:
	if(var_248_bool == 0) goto Label_939; // 0x3a5 JumpB
	var_262_int = 521526; // 0x3a6 PushI
	var_263_int = 22688; // 0x3a7 PushI
	var_264_int = 22687; // 0x3a8 PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0x3a9 TObjFunc
	
Label_939:
	var_265_int = 521509; // 0x3ab PushI
	var_266_int = -1; // 0x3ac PushI
	var_267_int = 22670; // 0x3ad PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x3ae TObjFunc
	return 0; // 0x3b0 Return
	
Label_945:
	var_268_int = 22688; // 0x3b1 PushI
	var_269_bool = var_21_bool == var_268_int; // 0x3b2 Eq
	if(var_269_bool == 0) goto Label_973; // 0x3b3 JumpB
	var_270_string = ""; // 0x3b4 PushV
	var_270_string = "Grin"; // 0x3b5 MovS
	func_697(var_22_cvector, var_270_string); // 0x3b6 NEW_2
	var_271_int = 521527; // 0x3b8 PushI
	SetMessage(var_271_int); // 0x3b9 TObjFunc
	ClearReplies(); // 0x3bb TObjFunc
	var_272_int = 521528; // 0x3bd PushI
	var_273_int = -1; // 0x3be PushI
	var_274_int = 22689; // 0x3bf PushI
	AddReply(var_272_int, var_273_int, var_274_int); // 0x3c0 TObjFunc
	var_275_int = 523942; // 0x3c2 PushI
	var_276_int = 25227; // 0x3c3 PushI
	var_277_int = 25225; // 0x3c4 PushI
	AddReply(var_275_int, var_276_int, var_277_int); // 0x3c5 TObjFunc
	var_278_int = 523943; // 0x3c7 PushI
	var_279_int = 25230; // 0x3c8 PushI
	var_280_int = 25226; // 0x3c9 PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x3ca TObjFunc
	return 0; // 0x3cc Return
	
Label_973:
	var_281_int = 25230; // 0x3cd PushI
	var_282_bool = var_21_bool == var_281_int; // 0x3ce Eq
	if(var_282_bool == 0) goto Label_991; // 0x3cf JumpB
	var_283_string = ""; // 0x3d0 PushV
	var_283_string = "Grin"; // 0x3d1 MovS
	func_697(var_22_cvector, var_283_string); // 0x3d2 NEW_2
	var_284_int = 523947; // 0x3d4 PushI
	SetMessage(var_284_int); // 0x3d5 TObjFunc
	ClearReplies(); // 0x3d7 TObjFunc
	var_285_int = 523948; // 0x3d9 PushI
	var_286_int = -1; // 0x3da PushI
	var_287_int = 25231; // 0x3db PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0x3dc TObjFunc
	return 0; // 0x3de Return
	
Label_991:
	var_288_int = 25227; // 0x3df PushI
	var_289_bool = var_21_bool == var_288_int; // 0x3e0 Eq
	if(var_289_bool == 0) goto Label_1014; // 0x3e1 JumpB
	var_290_string = ""; // 0x3e2 PushV
	var_290_string = "Grin"; // 0x3e3 MovS
	func_697(var_22_cvector, var_290_string); // 0x3e4 NEW_2
	var_291_int = 523944; // 0x3e6 PushI
	SetMessage(var_291_int); // 0x3e7 TObjFunc
	ClearReplies(); // 0x3e9 TObjFunc
	var_292_int = 523945; // 0x3eb PushI
	var_293_int = -1; // 0x3ec PushI
	var_294_int = 25228; // 0x3ed PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0x3ee TObjFunc
	var_295_int = 523946; // 0x3f0 PushI
	var_296_int = -1; // 0x3f1 PushI
	var_297_int = 25229; // 0x3f2 PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x3f3 TObjFunc
	return 0; // 0x3f5 Return
	
Label_1014:
	var_298_int = 25213; // 0x3f6 PushI
	var_299_bool = var_21_bool == var_298_int; // 0x3f7 Eq
	if(var_299_bool == 0) goto Label_1037; // 0x3f8 JumpB
	var_300_string = ""; // 0x3f9 PushV
	var_300_string = "Neutral"; // 0x3fa MovS
	func_697(var_22_cvector, var_300_string); // 0x3fb NEW_2
	var_301_int = 523930; // 0x3fd PushI
	SetMessage(var_301_int); // 0x3fe TObjFunc
	ClearReplies(); // 0x400 TObjFunc
	var_302_int = 523931; // 0x402 PushI
	var_303_int = 22685; // 0x403 PushI
	var_304_int = 25214; // 0x404 PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0x405 TObjFunc
	var_305_int = 523932; // 0x407 PushI
	var_306_int = 25216; // 0x408 PushI
	var_307_int = 25215; // 0x409 PushI
	AddReply(var_305_int, var_306_int, var_307_int); // 0x40a TObjFunc
	return 0; // 0x40c Return
	
Label_1037:
	var_308_int = 25216; // 0x40d PushI
	var_309_bool = var_21_bool == var_308_int; // 0x40e Eq
	if(var_309_bool == 0) goto Label_1055; // 0x40f JumpB
	var_310_string = ""; // 0x410 PushV
	var_310_string = "Grin"; // 0x411 MovS
	func_697(var_22_cvector, var_310_string); // 0x412 NEW_2
	var_311_int = 523933; // 0x414 PushI
	SetMessage(var_311_int); // 0x415 TObjFunc
	ClearReplies(); // 0x417 TObjFunc
	var_312_int = 530662; // 0x419 PushI
	var_313_int = 22685; // 0x41a PushI
	var_314_int = 31958; // 0x41b PushI
	AddReply(var_312_int, var_313_int, var_314_int); // 0x41c TObjFunc
	return 0; // 0x41e Return
	
Label_1055:
	var_315_int = 22685; // 0x41f PushI
	var_316_bool = var_21_bool == var_315_int; // 0x420 Eq
	if(var_316_bool == 0) goto Label_1078; // 0x421 JumpB
	var_317_string = ""; // 0x422 PushV
	var_317_string = "Grin"; // 0x423 MovS
	func_697(var_22_cvector, var_317_string); // 0x424 NEW_2
	var_318_int = 521524; // 0x426 PushI
	SetMessage(var_318_int); // 0x427 TObjFunc
	ClearReplies(); // 0x429 TObjFunc
	var_319_int = 521525; // 0x42b PushI
	var_320_int = 25221; // 0x42c PushI
	var_321_int = 22686; // 0x42d PushI
	AddReply(var_319_int, var_320_int, var_321_int); // 0x42e TObjFunc
	var_322_int = 523934; // 0x430 PushI
	var_323_int = 25218; // 0x431 PushI
	var_324_int = 25217; // 0x432 PushI
	AddReply(var_322_int, var_323_int, var_324_int); // 0x433 TObjFunc
	return 0; // 0x435 Return
	
Label_1078:
	var_325_int = 25218; // 0x436 PushI
	var_326_bool = var_21_bool == var_325_int; // 0x437 Eq
	if(var_326_bool == 0) goto Label_1101; // 0x438 JumpB
	var_327_string = ""; // 0x439 PushV
	var_327_string = "Grin"; // 0x43a MovS
	func_697(var_22_cvector, var_327_string); // 0x43b NEW_2
	var_328_int = 523935; // 0x43d PushI
	SetMessage(var_328_int); // 0x43e TObjFunc
	ClearReplies(); // 0x440 TObjFunc
	var_329_int = 523936; // 0x442 PushI
	var_330_int = -1; // 0x443 PushI
	var_331_int = 25219; // 0x444 PushI
	AddReply(var_329_int, var_330_int, var_331_int); // 0x445 TObjFunc
	var_332_int = 523937; // 0x447 PushI
	var_333_int = -1; // 0x448 PushI
	var_334_int = 25220; // 0x449 PushI
	AddReply(var_332_int, var_333_int, var_334_int); // 0x44a TObjFunc
	return 0; // 0x44c Return
	
Label_1101:
	var_335_int = 25221; // 0x44d PushI
	var_336_bool = var_21_bool == var_335_int; // 0x44e Eq
	if(var_336_bool == 0) goto Label_1129; // 0x44f JumpB
	var_337_string = ""; // 0x450 PushV
	var_337_string = "Grin"; // 0x451 MovS
	func_697(var_22_cvector, var_337_string); // 0x452 NEW_2
	var_338_int = 523938; // 0x454 PushI
	SetMessage(var_338_int); // 0x455 TObjFunc
	ClearReplies(); // 0x457 TObjFunc
	var_339_int = 523939; // 0x459 PushI
	var_340_int = -1; // 0x45a PushI
	var_341_int = 25222; // 0x45b PushI
	AddReply(var_339_int, var_340_int, var_341_int); // 0x45c TObjFunc
	var_342_int = 523940; // 0x45e PushI
	var_343_int = -1; // 0x45f PushI
	var_344_int = 25223; // 0x460 PushI
	AddReply(var_342_int, var_343_int, var_344_int); // 0x461 TObjFunc
	var_345_int = 523941; // 0x463 PushI
	var_346_int = -1; // 0x464 PushI
	var_347_int = 25224; // 0x465 PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0x466 TObjFunc
	return 0; // 0x468 Return
	
Label_1129:
	var_348_int = 22668; // 0x469 PushI
	var_349_bool = var_21_bool == var_348_int; // 0x46a Eq
	if(var_349_bool == 0) goto Label_1147; // 0x46b JumpB
	var_350_string = ""; // 0x46c PushV
	var_350_string = "Neutral"; // 0x46d MovS
	func_697(var_22_cvector, var_350_string); // 0x46e NEW_2
	var_351_int = 521507; // 0x470 PushI
	SetMessage(var_351_int); // 0x471 TObjFunc
	ClearReplies(); // 0x473 TObjFunc
	var_352_int = 523949; // 0x475 PushI
	var_353_int = 25233; // 0x476 PushI
	var_354_int = 25232; // 0x477 PushI
	AddReply(var_352_int, var_353_int, var_354_int); // 0x478 TObjFunc
	return 0; // 0x47a Return
	
Label_1147:
	var_355_int = 25233; // 0x47b PushI
	var_356_bool = var_21_bool == var_355_int; // 0x47c Eq
	if(var_356_bool == 0) goto Label_1165; // 0x47d JumpB
	var_357_string = ""; // 0x47e PushV
	var_357_string = "Neutral"; // 0x47f MovS
	func_697(var_22_cvector, var_357_string); // 0x480 NEW_2
	var_358_int = 523950; // 0x482 PushI
	SetMessage(var_358_int); // 0x483 TObjFunc
	ClearReplies(); // 0x485 TObjFunc
	var_359_int = 521508; // 0x487 PushI
	var_360_int = -1; // 0x488 PushI
	var_361_int = 22669; // 0x489 PushI
	AddReply(var_359_int, var_360_int, var_361_int); // 0x48a TObjFunc
	return 0; // 0x48c Return
	
Label_1165:
	var_362_int = 25241; // 0x48d PushI
	var_363_bool = var_21_bool == var_362_int; // 0x48e Eq
	if(var_363_bool == 0) goto Label_1168; // 0x48f JumpB
	
Label_1168:
	var_364_int = 25235; // 0x490 PushI
	var_365_bool = var_21_bool == var_364_int; // 0x491 Eq
	if(var_365_bool == 0) goto Label_1191; // 0x492 JumpB
	var_366_string = ""; // 0x493 PushV
	var_366_string = "Anger"; // 0x494 MovS
	func_697(var_22_cvector, var_366_string); // 0x495 NEW_2
	var_367_int = 523952; // 0x497 PushI
	SetMessage(var_367_int); // 0x498 TObjFunc
	ClearReplies(); // 0x49a TObjFunc
	var_368_int = 523953; // 0x49c PushI
	var_369_int = 25237; // 0x49d PushI
	var_370_int = 25236; // 0x49e PushI
	AddReply(var_368_int, var_369_int, var_370_int); // 0x49f TObjFunc
	var_371_int = 523960; // 0x4a1 PushI
	var_372_int = 25245; // 0x4a2 PushI
	var_373_int = 25244; // 0x4a3 PushI
	AddReply(var_371_int, var_372_int, var_373_int); // 0x4a4 TObjFunc
	return 0; // 0x4a6 Return
	
Label_1191:
	var_374_int = 25245; // 0x4a7 PushI
	var_375_bool = var_21_bool == var_374_int; // 0x4a8 Eq
	if(var_375_bool == 0) goto Label_1209; // 0x4a9 JumpB
	var_376_string = ""; // 0x4aa PushV
	var_376_string = "Neutral"; // 0x4ab MovS
	func_697(var_22_cvector, var_376_string); // 0x4ac NEW_2
	var_377_int = 523961; // 0x4ae PushI
	SetMessage(var_377_int); // 0x4af TObjFunc
	ClearReplies(); // 0x4b1 TObjFunc
	var_378_int = 523962; // 0x4b3 PushI
	var_379_int = 25247; // 0x4b4 PushI
	var_380_int = 25246; // 0x4b5 PushI
	AddReply(var_378_int, var_379_int, var_380_int); // 0x4b6 TObjFunc
	return 0; // 0x4b8 Return
	
Label_1209:
	var_381_int = 25247; // 0x4b9 PushI
	var_382_bool = var_21_bool == var_381_int; // 0x4ba Eq
	if(var_382_bool == 0) goto Label_1227; // 0x4bb JumpB
	var_383_string = ""; // 0x4bc PushV
	var_383_string = "Neutral"; // 0x4bd MovS
	func_697(var_22_cvector, var_383_string); // 0x4be NEW_2
	var_384_int = 523963; // 0x4c0 PushI
	SetMessage(var_384_int); // 0x4c1 TObjFunc
	ClearReplies(); // 0x4c3 TObjFunc
	var_385_int = 523964; // 0x4c5 PushI
	var_386_int = 25237; // 0x4c6 PushI
	var_387_int = 25248; // 0x4c7 PushI
	AddReply(var_385_int, var_386_int, var_387_int); // 0x4c8 TObjFunc
	return 0; // 0x4ca Return
	
Label_1227:
	var_388_int = 25237; // 0x4cb PushI
	var_389_bool = var_21_bool == var_388_int; // 0x4cc Eq
	if(var_389_bool == 0) goto Label_1245; // 0x4cd JumpB
	var_390_string = ""; // 0x4ce PushV
	var_390_string = "Anger"; // 0x4cf MovS
	func_697(var_22_cvector, var_390_string); // 0x4d0 NEW_2
	var_391_int = 523954; // 0x4d2 PushI
	SetMessage(var_391_int); // 0x4d3 TObjFunc
	ClearReplies(); // 0x4d5 TObjFunc
	var_392_int = 523955; // 0x4d7 PushI
	var_393_int = 25239; // 0x4d8 PushI
	var_394_int = 25238; // 0x4d9 PushI
	AddReply(var_392_int, var_393_int, var_394_int); // 0x4da TObjFunc
	return 0; // 0x4dc Return
	
Label_1245:
	var_395_int = 25239; // 0x4dd PushI
	var_396_bool = var_21_bool == var_395_int; // 0x4de Eq
	if(var_396_bool == 0) goto Label_1263; // 0x4df JumpB
	var_397_string = ""; // 0x4e0 PushV
	var_397_string = "Jeer"; // 0x4e1 MovS
	func_697(var_22_cvector, var_397_string); // 0x4e2 NEW_2
	var_398_int = 523956; // 0x4e4 PushI
	SetMessage(var_398_int); // 0x4e5 TObjFunc
	ClearReplies(); // 0x4e7 TObjFunc
	var_399_int = 523965; // 0x4e9 PushI
	var_400_int = 25250; // 0x4ea PushI
	var_401_int = 25249; // 0x4eb PushI
	AddReply(var_399_int, var_400_int, var_401_int); // 0x4ec TObjFunc
	return 0; // 0x4ee Return
	
Label_1263:
	var_402_int = 25261; // 0x4ef PushI
	var_403_bool = var_21_bool == var_402_int; // 0x4f0 Eq
	if(var_403_bool == 0) goto Label_1266; // 0x4f1 JumpB
	
Label_1266:
	var_404_int = 25250; // 0x4f2 PushI
	var_405_bool = var_21_bool == var_404_int; // 0x4f3 Eq
	if(var_405_bool == 0) goto Label_1284; // 0x4f4 JumpB
	var_406_string = ""; // 0x4f5 PushV
	var_406_string = "Grin"; // 0x4f6 MovS
	func_697(var_22_cvector, var_406_string); // 0x4f7 NEW_2
	var_407_int = 523966; // 0x4f9 PushI
	SetMessage(var_407_int); // 0x4fa TObjFunc
	ClearReplies(); // 0x4fc TObjFunc
	var_408_int = 523967; // 0x4fe PushI
	var_409_int = 25252; // 0x4ff PushI
	var_410_int = 25251; // 0x500 PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0x501 TObjFunc
	return 0; // 0x503 Return
	
Label_1284:
	var_411_int = 25252; // 0x504 PushI
	var_412_bool = var_21_bool == var_411_int; // 0x505 Eq
	if(var_412_bool == 0) goto Label_1307; // 0x506 JumpB
	var_413_string = ""; // 0x507 PushV
	var_413_string = "Grin"; // 0x508 MovS
	func_697(var_22_cvector, var_413_string); // 0x509 NEW_2
	var_414_int = 523968; // 0x50b PushI
	SetMessage(var_414_int); // 0x50c TObjFunc
	ClearReplies(); // 0x50e TObjFunc
	var_415_int = 523971; // 0x510 PushI
	var_416_int = 25256; // 0x511 PushI
	var_417_int = 25255; // 0x512 PushI
	AddReply(var_415_int, var_416_int, var_417_int); // 0x513 TObjFunc
	var_418_int = 523973; // 0x515 PushI
	var_419_int = 25256; // 0x516 PushI
	var_420_int = 25257; // 0x517 PushI
	AddReply(var_418_int, var_419_int, var_420_int); // 0x518 TObjFunc
	return 0; // 0x51a Return
	
Label_1307:
	var_421_int = 25256; // 0x51b PushI
	var_422_bool = var_21_bool == var_421_int; // 0x51c Eq
	if(var_422_bool == 0) goto Label_1330; // 0x51d JumpB
	var_423_string = ""; // 0x51e PushV
	var_423_string = "Grin"; // 0x51f MovS
	func_697(var_22_cvector, var_423_string); // 0x520 NEW_2
	var_424_int = 523972; // 0x522 PushI
	SetMessage(var_424_int); // 0x523 TObjFunc
	ClearReplies(); // 0x525 TObjFunc
	var_425_int = 521503; // 0x527 PushI
	var_426_int = -1; // 0x528 PushI
	var_427_int = 22664; // 0x529 PushI
	AddReply(var_425_int, var_426_int, var_427_int); // 0x52a TObjFunc
	var_428_int = 521504; // 0x52c PushI
	var_429_int = -1; // 0x52d PushI
	var_430_int = 22665; // 0x52e PushI
	AddReply(var_428_int, var_429_int, var_430_int); // 0x52f TObjFunc
	return 0; // 0x531 Return
	
Label_1330:
	var_3_string = 1; // 0x532 TMovB
	var_431_bool = 0; // 0x533 PushV
	func_2224(var_431_bool); // 0x534 NEW_2
	if(var_431_bool == 0) goto Label_1338; // 0x536 JumpB
	lshStopAnimation(); // 0x537 Func
	goto Label_1340; // 0x539 Jump
	
Label_1340:
	return 0; // 0x53c Return
	
Label_1338:
	StopAnimation(); // 0x53a Func
	
Label_1342:
	return 0; // 0x53e Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_cvector)
{
	var_23_int = 1; // 0x5e1 PushI
	if(var_23_int == 0) goto Label_1545; // 0x5e2 JumpB
	func_2113(); // 0x5e4 NEW_2
	var_25_int = 42563; // 0x5e6 PushI
	var_26_bool = var_21_int == var_25_int; // 0x5e7 Eq
	if(var_26_bool == 0) goto Label_1533; // 0x5e8 JumpB
	var_27_string = ""; // 0x5e9 PushV
	var_27_string = "Neutral"; // 0x5ea MovS
	func_1482(var_22_cvector, var_27_string); // 0x5eb NEW_2
	var_44_int = 540554; // 0x5ed PushI
	SetMessage(var_44_int); // 0x5ee TObjFunc
	ClearReplies(); // 0x5f0 TObjFunc
	var_45_int = 540555; // 0x5f2 PushI
	var_46_int = -1; // 0x5f3 PushI
	var_47_int = 42564; // 0x5f4 PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0x5f5 TObjFunc
	var_48_int = 540794; // 0x5f7 PushI
	var_49_int = -1; // 0x5f8 PushI
	var_50_int = 42843; // 0x5f9 PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0x5fa TObjFunc
	return 0; // 0x5fc Return
	
Label_1533:
	var_3_string = 1; // 0x5fd TMovB
	var_51_bool = 0; // 0x5fe PushV
	func_2224(var_51_bool); // 0x5ff NEW_2
	if(var_51_bool == 0) goto Label_1541; // 0x601 JumpB
	lshStopAnimation(); // 0x602 Func
	goto Label_1543; // 0x604 Jump
	
Label_1543:
	return 0; // 0x607 Return
	
Label_1541:
	StopAnimation(); // 0x605 Func
	
Label_1545:
	return 0; // 0x609 Return
}


task_8_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_int)
{
	var_22_int = 10; // 0x657 PushI
	var_23_bool = var_21_int == var_22_int; // 0x658 Eq
	if(var_23_bool == 0) goto Label_1659; // 0x659 JumpB
	func_1618(); // 0x65b NEW_2
	var_25_bool = 0; // 0x65d PushV
	var_25_bool = 0; // 0x65e MovB
	var_26_bool = 0; // 0x65f PushV
	func_1839(var_26_bool); // 0x660 NEW_2
	if(var_26_bool == 0) goto Label_1640; // 0x662 JumpB
	var_29_bool = 0; // 0x663 PushV
	func_1587(var_29_bool); // 0x664 NEW_2
	if(var_29_bool == 0) goto Label_1640; // 0x666 JumpB
	var_25_bool = 1; // 0x667 MovB
	
Label_1640:
	if(var_25_bool == 0) goto Label_1653; // 0x668 JumpB
	var_46_bool = 0; // 0x669 PushV
	func_1567(var_46_bool); // 0x66a NEW_2
	if(var_46_bool == 0) goto Label_1652; // 0x66c JumpB
	var_65_bool = 0; var_66_object = Obj(); // 0x66d PushV
	var_67_object = Obj(); // 0x66e PushV
	func_2120(var_67_object); // 0x66f NEW_2
	var_66_object = var_67_object; // 0x670 Mov
	func_1987(var_66_object); // 0x672 NEW_2
	
Label_1652:
	goto Label_1659; // 0x674 Jump
	
Label_1659:
	return 0; // 0x67b Return
	
Label_1653:
	func_1582(var_21_int); // 0x676 NEW_2
	func_1609(); // 0x679 NEW_2
}


task_8_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	func_1800(); // 0x67d NEW_2
	func_1618(); // 0x680 NEW_2
	lshStopSpeech(); // 0x682 Func
	lshStopAnimation(); // 0x684 Func
	StopAsync(); // 0x686 Func
	Hold(); // 0x688 Func
	return 0; // 0x68a Return
}


task_8_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	StopGroup0(); // 0x68b Func
	func_1618(); // 0x68e NEW_2
	var_22_string = ""; // 0x690 PushV
	var_22_string = "Neutral"; // 0x691 MovS
	func_2067(var_22_string); // 0x692 NEW_2
	func_1609(); // 0x695 NEW_2
	return 0; // 0x697 Return
}


task_8_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_bool)
{
	var_22_bool = var_21_bool; // 0x699 Push
	if(var_22_bool == 0) goto Label_1695; // 0x69a JumpB
	func_1609(); // 0x69c NEW_2
	goto Label_1699; // 0x69e Jump
	
Label_1699:
	return 0; // 0x6a3 Return
	
Label_1695:
	var_28_string = ""; // 0x69f PushV
	var_28_string = "Neutral"; // 0x6a0 MovS
	func_2067(var_28_string); // 0x6a1 NEW_2
}


task_8_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_object)
{
	var_22_bool = 0; var_23_bool = 0; // 0x6a4 PushV
	IsOverrideActive(var_23_bool); // 0x6a5 Func
	var_24_bool = var_23_bool == 0; // 0x6a7 Not
	if(var_24_bool == 0) goto Label_1728; // 0x6a8 JumpB
	EventDisable(0); // 0x6a9 EventDisable
	func_1800(); // 0x6ab NEW_2
	var_25_bool = 0; var_26_object = Obj(); // 0x6ad PushV
	var_26_object = var_21_object; // 0x6ae Mov
	func_1830(var_26_object); // 0x6af NEW_2
	EventEnable(0); // 0x6b1 EventEnable
	var_39_object = Obj(); // 0x6b2 PushV
	var_39_object = var_21_object; // 0x6b3 Mov
	func_2513(var_39_object); // 0x6b4 NEW_2
	var_511_string = ""; // 0x6b6 PushV
	var_511_string = "Neutral"; // 0x6b7 MovS
	func_2067(var_511_string); // 0x6b8 NEW_2
	func_1618(); // 0x6bb NEW_2
	func_1609(); // 0x6be NEW_2
	
Label_1728:
	return 2; // 0x6c0 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	var_21_bool = GlobalVars[1]; // 0x60a PushGE
	var_21_bool = 0; // 0x60b MovB
	GlobalVars[1] = var_21_bool; // 0x60c PopGE
	func_1553(var_20_cvector); // 0x60e NEW_2
	return 0; // 0x610 Return
}


func_2304(var_300_bool)
{
	var_302_int = 0; var_303_string = ""; // 0x901 PushV
	var_303_string = "oob8Georg1"; // 0x902 MovS
	func_2136(var_302_int, var_303_string); // 0x903 NEW_2
	var_306_int = 0; // 0x905 PushI
	var_307_bool = var_302_int == var_306_int; // 0x906 Eq
	if(var_307_bool == 0) goto Label_2314; // 0x907 JumpB
	var_300_bool = 1; // 0x908 MovB
	return 0; // 0x909 Return
	
Label_2314:
	var_300_bool = 0; // 0x90a MovB
	return 0; // 0x90b Return
}


func_0(var_0_object, var_395_int, var_396_object)
{
	var_398_object = Obj(); var_399_bool = 0; var_400_int = 0; var_401_bool = 0; var_402_object = Obj(); var_403_bool = 0; var_404_int = 0; var_405_bool = 0; // 0x0 PushV
	var_0_object = var_396_object; // 0x1 TMov
	var_406_bool = 0; var_407_object = Obj(); var_408_float = 0; // 0x2 PushV
	var_407_object = var_396_object; // 0x3 Mov
	var_408_float = 70.0; // 0x4 MovF
	func_1844(var_407_object, var_408_float); // 0x5 NEW_2
	var_409_bool = var_406_bool == 0; // 0x7 Not
	if(var_409_bool == 0) goto Label_11; // 0x8 JumpB
	var_395_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_402_object); // 0xb Func
	var_410_int = 0; // 0xd PushV
	func_2218(var_410_int); // 0xe NEW_2
	SetNPCName(var_410_int); // 0x10 ObjFunc
	var_411_int = 0; // 0x12 PushV
	func_2216(var_411_int); // 0x13 NEW_2
	SetNPCDescription(var_411_int); // 0x15 ObjFunc
	var_412_string = ""; // 0x17 PushV
	func_2220(var_412_string); // 0x18 NEW_2
	SetPhoto(var_412_string); // 0x1a ObjFunc
	var_413_string = ""; // 0x1c PushV
	func_2222(var_413_string); // 0x1d NEW_2
	SetPhoto2(var_413_string); // 0x1f ObjFunc
	var_414_int = 0; // 0x21 PushV
	func_2496(var_414_int); // 0x22 NEW_2
	SetPlayerName(var_414_int); // 0x24 ObjFunc
	var_404_int = -1; // 0x26 MovI
	IsOverrideActive(var_403_bool); // 0x27 Func
	var_415_bool = var_403_bool; // 0x29 Push
	if(var_415_bool == 0) goto Label_45; // 0x2a JumpB
	var_395_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_402_object); // 0x2d Func
	var_416_bool = 0; var_417_object = Obj(); // 0x2f PushV
	var_418_object = Obj(); // 0x30 PushV
	func_2120(var_418_object); // 0x31 NEW_2
	var_417_object = var_418_object; // 0x32 Mov
	func_1929(var_416_bool, var_417_object); // 0x34 NEW_2
	var_419_object = Obj(); var_420_object = Obj(); // 0x36 PushV
	var_419_object = var_396_object; // 0x37 Mov
	var_420_object = var_402_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_421_object, var_422_object, var_423_string, var_424_bool, var_419_object, var_420_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_405_bool); // 0x3d ObjFunc
	
Label_63:
	var_452_bool = var_405_bool == 0; // 0x3f Not
	if(var_452_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_405_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_453_object = Obj(); // 0x46 PushV
	var_453_object = var_396_object; // 0x47 Mov
	func_1912(); // 0x48 NEW_2
	StopDialog(var_402_object); // 0x4a Func
	GetReturnValue(var_404_int); // 0x4c ObjFunc
	var_395_int = var_404_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_259(var_0_object, var_42_int, var_43_object)
{
	var_45_object = Obj(); var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_object = Obj(); var_50_bool = 0; var_51_int = 0; var_52_bool = 0; // 0x103 PushV
	var_0_object = var_43_object; // 0x104 TMov
	var_53_bool = 0; var_54_object = Obj(); var_55_float = 0; // 0x105 PushV
	var_54_object = var_43_object; // 0x106 Mov
	var_55_float = 70.0; // 0x107 MovF
	func_1844(var_54_object, var_55_float); // 0x108 NEW_2
	var_99_bool = var_53_bool == 0; // 0x10a Not
	if(var_99_bool == 0) goto Label_270; // 0x10b JumpB
	var_42_int = -2; // 0x10c MovI
	return 8; // 0x10d Return
	
Label_270:
	CreateDialog(var_49_object); // 0x10e Func
	var_100_int = 0; // 0x110 PushV
	func_2218(var_100_int); // 0x111 NEW_2
	SetNPCName(var_100_int); // 0x113 ObjFunc
	var_101_int = 0; // 0x115 PushV
	func_2216(var_101_int); // 0x116 NEW_2
	SetNPCDescription(var_101_int); // 0x118 ObjFunc
	var_102_string = ""; // 0x11a PushV
	func_2220(var_102_string); // 0x11b NEW_2
	SetPhoto(var_102_string); // 0x11d ObjFunc
	var_103_string = ""; // 0x11f PushV
	func_2222(var_103_string); // 0x120 NEW_2
	SetPhoto2(var_103_string); // 0x122 ObjFunc
	var_104_int = 0; // 0x124 PushV
	func_2496(var_104_int); // 0x125 NEW_2
	SetPlayerName(var_104_int); // 0x127 ObjFunc
	var_51_int = -1; // 0x129 MovI
	IsOverrideActive(var_50_bool); // 0x12a Func
	var_112_bool = var_50_bool; // 0x12c Push
	if(var_112_bool == 0) goto Label_304; // 0x12d JumpB
	var_42_int = -2; // 0x12e MovI
	return 8; // 0x12f Return
	
Label_304:
	DoDialog(var_49_object); // 0x130 Func
	var_113_bool = 0; var_114_object = Obj(); // 0x132 PushV
	var_115_object = Obj(); // 0x133 PushV
	func_2120(var_115_object); // 0x134 NEW_2
	var_114_object = var_115_object; // 0x135 Mov
	func_1929(var_113_bool, var_114_object); // 0x137 NEW_2
	var_208_object = Obj(); var_209_object = Obj(); // 0x139 PushV
	var_208_object = var_43_object; // 0x13a Mov
	var_209_object = var_49_object; // 0x13b Mov
	TaskCall(3); // 0x13c TaskCall
	func_340(var_210_object, var_211_object, var_212_string, var_213_bool, var_208_object, var_209_object); // 0x13d NEW_2
	TaskReturn(); // 0x13e TaskReturn
	IsDialogEnd(var_52_bool); // 0x140 ObjFunc
	
Label_322:
	var_257_bool = var_52_bool == 0; // 0x142 Not
	if(var_257_bool == 0) goto Label_329; // 0x143 JumpB
	sync(); // 0x144 Func
	IsDialogEnd(var_52_bool); // 0x146 ObjFunc
	goto Label_322; // 0x148 Jump
	
Label_329:
	var_258_object = Obj(); // 0x149 PushV
	var_258_object = var_43_object; // 0x14a Mov
	func_1912(); // 0x14b NEW_2
	StopDialog(var_49_object); // 0x14d Func
	GetReturnValue(var_51_int); // 0x14f ObjFunc
	var_42_int = var_51_int; // 0x151 Mov
	return 8; // 0x152 Return
}


func_1798(var_60_bool)
{
	var_60_bool = 1; // 0x706 MovB
	return 0; // 0x707 Return
}


func_1800()
{
	StopAnimation(); // 0x708 Func
	StopGroup0(); // 0x70a Func
	return 0; // 0x70c Return
}


func_2316(var_338_bool)
{
	var_340_int = 0; var_341_string = ""; // 0x90d PushV
	var_341_string = "b8q03"; // 0x90e MovS
	func_2136(var_340_int, var_341_string); // 0x90f NEW_2
	var_342_int = 0; // 0x911 PushI
	var_343_bool = var_340_int == var_342_int; // 0x912 Eq
	if(var_343_bool == 0) goto Label_2326; // 0x913 JumpB
	var_338_bool = 1; // 0x914 MovB
	return 0; // 0x915 Return
	
Label_2326:
	var_338_bool = 0; // 0x916 MovB
	return 0; // 0x917 Return
}


func_1805(var_36_float)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x70d PushV
	GetPosition(var_41_cvector); // 0x70e Func
	GetPosition(var_42_cvector); // 0x710 ObjFunc
	var_43_cvector = var_42_cvector - var_41_cvector; // 0x712 Sub2
	var_36_float = var_43_cvector | var_43_cvector; // 0x713 Or2
	return 6; // 0x714 Return
}


func_1553(var_0_object)
{
	var_22_bool = 0; // 0x611 PushV
	func_1839(var_22_bool); // 0x612 NEW_2
	var_25_bool = var_22_bool == 0; // 0x614 Not
	if(var_25_bool == 0) goto Label_1560; // 0x615 JumpB
	Hold(); // 0x616 Func
	
Label_1560:
	GetDirection(var_0_object); // 0x618 Func
	
Label_1562:
	func_1729(); // 0x61b NEW_2
	goto Label_1562; // 0x61d Jump
}


func_2067(var_241_string)
{
	var_242_bool = 0; var_243_float = 0; var_244_float = 0; var_245_bool = 0; var_246_float = 0; var_247_float = 0; // 0x813 PushV
	lshHasAnimation(var_245_bool, var_241_string); // 0x814 Func
	var_248_bool = var_245_bool; // 0x816 Push
	if(var_248_bool == 0) goto Label_2078; // 0x817 JumpB
	lshGetAnimTimes(var_241_string, var_246_float, var_247_float); // 0x818 Func
	var_249_bool = 0; // 0x81a PushB
	lshPlayAnimation(var_246_float, var_247_float, var_249_bool); // 0x81b Func
	goto Label_2082; // 0x81d Jump
	
Label_2082:
	return 6; // 0x822 Return
	
Label_2078:
	var_250_string = "Can't find lsh animation : "; // 0x81e PushS
	var_251_int = var_250_string + var_241_string; // 0x81f Add
	Trace(var_251_int); // 0x820 Func
}


func_1813(var_136_string, var_137_int)
{
	var_138_int = 0; var_139_int = 0; // 0x715 PushV
	GetProperty(var_136_string, var_139_int); // 0x716 ObjFunc
	var_140_int = var_139_int + var_137_int; // 0x718 Add
	SetProperty(var_136_string, var_140_int); // 0x719 ObjFunc
	return 2; // 0x71b Return
}


func_2328(var_369_bool)
{
	var_371_bool = 0; // 0x919 PushV
	var_371_bool = 0; // 0x91a MovB
	var_372_int = 0; var_373_string = ""; // 0x91b PushV
	var_373_string = "b8q03"; // 0x91c MovS
	func_2136(var_372_int, var_373_string); // 0x91d NEW_2
	var_374_int = 3; // 0x91f PushI
	var_375_bool = var_372_int == var_374_int; // 0x920 Eq
	if(var_375_bool == 0) goto Label_2346; // 0x921 JumpB
	var_376_int = 0; var_377_string = ""; // 0x922 PushV
	var_377_string = "b8q03MladVladIsVictim"; // 0x923 MovS
	func_2136(var_376_int, var_377_string); // 0x924 NEW_2
	var_378_int = 0; // 0x926 PushI
	var_379_bool = var_376_int != var_378_int; // 0x927 Neq
	if(var_379_bool == 0) goto Label_2346; // 0x928 JumpB
	var_371_bool = 1; // 0x929 MovB
	
Label_2346:
	if(var_371_bool == 0) goto Label_2349; // 0x92a JumpB
	var_369_bool = 1; // 0x92b MovB
	return 0; // 0x92c Return
	
Label_2349:
	var_369_bool = 0; // 0x92d MovB
	return 0; // 0x92e Return
}


func_1820(var_29_bool, var_30_cvector)
{
	var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_bool = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; // 0x71c PushV
	GetPosition(var_34_cvector); // 0x71d Func
	var_35_cvector = var_30_cvector - var_34_cvector; // 0x71f Sub2
	var_37_float = GetByIndex(var_35_cvector, 0); // 0x720 PushE
	var_38_float = GetByIndex(var_35_cvector, 2); // 0x721 PushE
	Rotate(var_37_float, var_38_float, var_36_bool); // 0x722 Func
	var_29_bool = var_36_bool; // 0x724 Mov
	return 6; // 0x725 Return
}


func_1567(var_46_bool)
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x61f PushV
	var_49_string = "player"; // 0x620 PushS
	FindActor(var_48_object, var_49_string); // 0x621 Func
	var_50_bool = var_48_object == 0; // 0x623 Not
	if(var_50_bool == 0) goto Label_1575; // 0x624 JumpB
	var_46_bool = 0; // 0x625 MovB
	return 2; // 0x626 Return
	
Label_1575:
	var_51_bool = 0; var_52_object = Obj(); // 0x627 PushV
	var_52_object = var_48_object; // 0x628 Mov
	func_1830(var_52_object); // 0x629 NEW_2
	var_46_bool = var_51_bool; // 0x62a Mov
	return 2; // 0x62c Return
}


func_2083(var_219_string, var_220_bool)
{
	var_223_bool = 0; var_224_float = 0; var_225_float = 0; var_226_bool = 0; var_227_float = 0; var_228_float = 0; // 0x823 PushV
	lshHasAnimation(var_226_bool, var_219_string); // 0x824 Func
	var_229_bool = var_226_bool; // 0x826 Push
	if(var_229_bool == 0) goto Label_2093; // 0x827 JumpB
	lshGetAnimTimes(var_219_string, var_227_float, var_228_float); // 0x828 Func
	lshPlayAnimation(var_227_float, var_228_float, var_220_bool); // 0x82a Func
	goto Label_2097; // 0x82c Jump
	
Label_2097:
	return 6; // 0x831 Return
	
Label_2093:
	var_230_string = "Can't find lsh animation : "; // 0x82d PushS
	var_231_int = var_230_string + var_219_string; // 0x82e Add
	Trace(var_231_int); // 0x82f Func
}


func_1830(var_25_bool)
{
	var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); // 0x726 PushV
	GetPosition(var_28_cvector); // 0x727 ObjFunc
	var_29_bool = 0; var_30_cvector = CVector(0,0,0); // 0x729 PushV
	var_30_cvector = var_28_cvector; // 0x72a Mov
	func_1820(var_29_bool, var_30_cvector); // 0x72b NEW_2
	var_25_bool = var_29_bool; // 0x72c Mov
	return 2; // 0x72e Return
}


func_1582(var_0_object)
{
	var_98_float = GetByIndex(var_0_object, 0); // 0x62e PushE
	var_99_float = GetByIndex(var_0_object, 2); // 0x62f PushE
	RotateAsync(var_98_float, var_99_float); // 0x630 Func
	return 0; // 0x632 Return
}


func_2351(var_348_bool)
{
	var_350_bool = 0; // 0x930 PushV
	var_350_bool = 0; // 0x931 MovB
	var_351_int = 0; var_352_string = ""; // 0x932 PushV
	var_352_string = "b8q03"; // 0x933 MovS
	func_2136(var_351_int, var_352_string); // 0x934 NEW_2
	var_353_int = 3; // 0x936 PushI
	var_354_bool = var_351_int == var_353_int; // 0x937 Eq
	if(var_354_bool == 0) goto Label_2369; // 0x938 JumpB
	var_355_int = 0; var_356_string = ""; // 0x939 PushV
	var_356_string = "b8q03MladVladIsVictim"; // 0x93a MovS
	func_2136(var_355_int, var_356_string); // 0x93b NEW_2
	var_357_int = 0; // 0x93d PushI
	var_358_bool = var_355_int == var_357_int; // 0x93e Eq
	if(var_358_bool == 0) goto Label_2369; // 0x93f JumpB
	var_350_bool = 1; // 0x940 MovB
	
Label_2369:
	if(var_350_bool == 0) goto Label_2372; // 0x941 JumpB
	var_348_bool = 1; // 0x942 MovB
	return 0; // 0x943 Return
	
Label_2372:
	var_348_bool = 0; // 0x944 MovB
	return 0; // 0x945 Return
}


func_1839(var_22_bool)
{
	var_23_bool = 0; var_24_bool = 0; // 0x72f PushV
	IsLoaded(var_24_bool); // 0x730 Func
	var_22_bool = var_24_bool; // 0x732 Mov
	return 2; // 0x733 Return
}


func_2098(var_147_bool, var_148_string)
{
	var_149_bool = 0; var_150_bool = 0; // 0x832 PushV
	var_151_bool = 0; // 0x833 PushV
	func_2224(var_151_bool); // 0x834 NEW_2
	if(var_151_bool == 0) goto Label_2111; // 0x836 JumpB
	lshHasSpeech(var_150_bool, var_148_string); // 0x837 Func
	var_152_bool = var_150_bool; // 0x839 Push
	if(var_152_bool == 0) goto Label_2111; // 0x83a JumpB
	lshPlaySpeech(var_148_string); // 0x83b Func
	var_147_bool = 1; // 0x83d MovB
	return 2; // 0x83e Return
	
Label_2111:
	var_147_bool = 0; // 0x83f MovB
	return 2; // 0x840 Return
}


func_1587(var_29_bool)
{
	var_30_object = Obj(); var_31_bool = 0; var_32_object = Obj(); var_33_bool = 0; // 0x633 PushV
	var_34_string = "player"; // 0x634 PushS
	FindActor(var_32_object, var_34_string); // 0x635 Func
	var_35_bool = var_32_object == 0; // 0x637 Not
	if(var_35_bool == 0) goto Label_1595; // 0x638 JumpB
	var_29_bool = 0; // 0x639 MovB
	return 4; // 0x63a Return
	
Label_1595:
	var_36_float = 0; var_37_object = Obj(); // 0x63b PushV
	var_37_object = var_32_object; // 0x63c Mov
	func_1805(var_37_object); // 0x63d NEW_2
	var_44_float = 90000.0; // 0x63f PushF
	var_45_bool = var_36_float > var_44_float; // 0x640 GT
	if(var_45_bool == 0) goto Label_1604; // 0x641 JumpB
	var_29_bool = 0; // 0x642 MovB
	return 4; // 0x643 Return
	
Label_1604:
	CanSee(var_33_bool, var_32_object); // 0x644 Func
	var_29_bool = var_33_bool; // 0x646 Mov
	return 4; // 0x647 Return
}


func_1844(var_53_bool, var_55_float)
{
	var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_bool = 0; var_64_bool = 0; var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_bool = 0; var_73_bool = 0; // 0x734 PushV
	GetPosition(var_66_cvector); // 0x735 ObjFunc
	GetEyesHeight(var_65_float); // 0x737 ObjFunc
	var_74_float = GetByIndex(var_66_cvector, 1); // 0x739 PushE
	var_74_float = var_74_float + var_65_float; // 0x73a Add2
	SetByIndex(var_66_cvector, 1) = var_74_float; // 0x73b PopE
	GetPosition(var_67_cvector); // 0x73c Func
	GetEyesHeight(var_65_float); // 0x73e Func
	var_75_float = GetByIndex(var_67_cvector, 1); // 0x740 PushE
	var_75_float = var_75_float + var_65_float; // 0x741 Add2
	SetByIndex(var_67_cvector, 1) = var_75_float; // 0x742 PopE
	var_68_cvector = var_66_cvector - var_67_cvector; // 0x743 Sub2
	var_76_float = GetByIndex(var_68_cvector, 1); // 0x744 PushE
	var_76_float = 0; // 0x745 MovI
	SetByIndex(var_68_cvector, 1) = var_76_float; // 0x746 PopE
	var_77_int = var_68_cvector | var_68_cvector; // 0x747 Or
	var_78_float = sqrt(var_77_int); // 0x748 Sqrt
	var_68_cvector = var_68_cvector / var_68_cvector; // 0x749 Div2
	var_69_cvector = -var_68_cvector; // 0x74a Neg2
	var_79_float = var_68_cvector * var_55_float; // 0x74b Mult
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); // 0x74c PushV
	var_82_cvector = CVector(0.0, 1.0, 0.0); // 0x74d PushVec
	var_81_cvector = var_69_cvector ^ var_82_cvector; // 0x74e Xor2
	func_2126(var_80_cvector, var_81_cvector); // 0x74f NEW_2
	var_88_int = 25; // 0x751 PushI
	var_89_float = var_80_cvector * var_88_int; // 0x752 Mult
	var_90_int = var_79_float + var_89_float; // 0x753 Add
	var_91_cvector = CVector(0.0, 10.0, 0.0); // 0x754 PushVec
	var_70_cvector = var_90_int - var_91_cvector; // 0x755 Sub2
	var_71_cvector = var_67_cvector + var_70_cvector; // 0x756 Add2
	IsOverrideActive(var_72_bool); // 0x757 Func
	var_92_bool = var_72_bool; // 0x759 Push
	if(var_92_bool == 0) goto Label_1885; // 0x75a JumpB
	var_53_bool = 0; // 0x75b MovB
	return 18; // 0x75c Return
	
Label_1885:
	StopWorld(); // 0x75d Func
	CameraTransit(var_71_cvector, var_69_cvector); // 0x75f Func
	var_93_float = GetByIndex(var_70_cvector, 0); // 0x761 PushE
	var_94_float = GetByIndex(var_70_cvector, 2); // 0x762 PushE
	Rotate(var_93_float, var_94_float); // 0x763 Func
	var_95_bool = 0; // 0x765 PushV
	func_2224(var_95_bool); // 0x766 NEW_2
	if(var_95_bool == 0) goto Label_1898; // 0x768 JumpB
	goto Label_1906; // 0x769 Jump
	
Label_1906:
	CameraWaitForPlayFinish(); // 0x772 Func
	ResumeWorld(); // 0x774 Func
	var_53_bool = 1; // 0x776 MovB
	return 18; // 0x777 Return
	
Label_1898:
	var_96_string = "head"; // 0x76a PushS
	HasAnimationTrack(var_73_bool, var_96_string); // 0x76b Func
	var_97_bool = var_73_bool; // 0x76d Push
	if(var_97_bool == 0) goto Label_1906; // 0x76e JumpB
	var_98_string = "head"; // 0x76f PushS
	LookAsyncCamera(var_98_string); // 0x770 Func
}


func_566(var_0_object, var_1_object, var_2_object, var_3_string, var_293_object, var_294_object)
{
	var_0_object = var_294_object; // 0x237 TMov
	var_1_object = var_293_object; // 0x238 TMov
	var_3_string = 0; // 0x239 TMovB
	var_299_int = 1; // 0x23a PushI
	if(var_299_int == 0) goto Label_667; // 0x23b JumpB
	var_300_bool = 0; var_301_object = Obj(); // 0x23c PushV
	var_301_object = var_1_object; // 0x23d MovT
	func_2304(var_301_object); // 0x23e NEW_2
	if(var_300_bool == 0) goto Label_602; // 0x240 JumpB
	var_308_object = Obj(); var_309_object = Obj(); // 0x241 PushV
	var_308_object = var_1_object; // 0x242 MovT
	var_309_object = var_0_object; // 0x243 MovT
	func_2252(); // 0x244 NEW_2
	var_312_object = Obj(); var_313_object = Obj(); // 0x246 PushV
	var_312_object = var_1_object; // 0x247 MovT
	var_313_object = var_0_object; // 0x248 MovT
	func_2270(); // 0x249 NEW_2
	var_316_string = ""; // 0x24b PushV
	var_316_string = "Neutral"; // 0x24c MovS
	func_697(var_294_object, var_316_string); // 0x24d NEW_2
	var_324_int = 521502; // 0x24f PushI
	SetMessage(var_324_int); // 0x250 TObjFunc
	ClearReplies(); // 0x252 TObjFunc
	var_325_int = 523951; // 0x254 PushI
	var_326_int = 25235; // 0x255 PushI
	var_327_int = 25234; // 0x256 PushI
	AddReply(var_325_int, var_326_int, var_327_int); // 0x257 TObjFunc
	goto Label_667; // 0x259 Jump
	
Label_667:
	var_328_bool = 0; // 0x29b PushV
	func_2224(var_328_bool); // 0x29c NEW_2
	if(var_328_bool == 0) goto Label_682; // 0x29e JumpB
	
Label_671:
	lshWaitForAnimEnd(); // 0x29f Func
	var_329_string = var_3_string; // 0x2a1 PushT
	if(var_329_string == 0) goto Label_676; // 0x2a2 JumpB
	goto Label_681; // 0x2a3 Jump
	
Label_681:
	goto Label_696; // 0x2a9 Jump
	
Label_696:
	return 0; // 0x2b8 Return
	
Label_676:
	var_330_string = ""; // 0x2a4 PushV
	var_330_string = var_2_object; // 0x2a5 MovT
	func_2067(var_330_string); // 0x2a6 NEW_2
	goto Label_671; // 0x2a8 Jump
	
Label_682:
	var_331_string = "all"; // 0x2aa PushS
	var_332_string = "idle"; // 0x2ab PushS
	PlayAnimation(var_331_string, var_332_string); // 0x2ac Func
	
Label_686:
	WaitForAnimEnd(); // 0x2ae Func
	var_333_string = var_3_string; // 0x2b0 PushT
	if(var_333_string == 0) goto Label_691; // 0x2b1 JumpB
	goto Label_696; // 0x2b2 Jump
	
Label_691:
	var_334_string = "all"; // 0x2b3 PushS
	var_335_string = "idle"; // 0x2b4 PushS
	PlayAnimation(var_334_string, var_335_string); // 0x2b5 Func
	goto Label_686; // 0x2b7 Jump
	
Label_602:
	var_336_string = ""; // 0x25a PushV
	var_336_string = "Neutral"; // 0x25b MovS
	func_697(var_294_object, var_336_string); // 0x25c NEW_2
	var_337_int = 521505; // 0x25e PushI
	SetMessage(var_337_int); // 0x25f TObjFunc
	ClearReplies(); // 0x261 TObjFunc
	var_338_bool = 0; var_339_object = Obj(); // 0x263 PushV
	var_339_object = var_1_object; // 0x264 MovT
	func_2316(var_339_object); // 0x265 NEW_2
	if(var_338_bool == 0) goto Label_621; // 0x267 JumpB
	var_344_int = 521506; // 0x268 PushI
	var_345_int = 22668; // 0x269 PushI
	var_346_int = 22667; // 0x26a PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0x26b TObjFunc
	
Label_621:
	var_347_bool = 0; // 0x26d PushV
	var_347_bool = 0; // 0x26e MovB
	var_348_bool = 0; var_349_object = Obj(); // 0x26f PushV
	var_349_object = var_1_object; // 0x270 MovT
	func_2351(var_349_object); // 0x271 NEW_2
	if(var_348_bool == 0) goto Label_634; // 0x273 JumpB
	var_359_bool = 0; var_360_object = Obj(); // 0x274 PushV
	var_360_object = var_1_object; // 0x275 MovT
	func_2374(var_360_object); // 0x276 NEW_2
	if(var_359_bool == 0) goto Label_634; // 0x278 JumpB
	var_347_bool = 1; // 0x279 MovB
	
Label_634:
	if(var_347_bool == 0) goto Label_640; // 0x27a JumpB
	var_365_int = 521523; // 0x27b PushI
	var_366_int = 25213; // 0x27c PushI
	var_367_int = 22684; // 0x27d PushI
	AddReply(var_365_int, var_366_int, var_367_int); // 0x27e TObjFunc
	
Label_640:
	var_368_bool = 0; // 0x280 PushV
	var_368_bool = 0; // 0x281 MovB
	var_369_bool = 0; var_370_object = Obj(); // 0x282 PushV
	var_370_object = var_1_object; // 0x283 MovT
	func_2328(var_370_object); // 0x284 NEW_2
	if(var_369_bool == 0) goto Label_653; // 0x286 JumpB
	var_380_bool = 0; var_381_object = Obj(); // 0x287 PushV
	var_381_object = var_1_object; // 0x288 MovT
	func_2374(var_381_object); // 0x289 NEW_2
	if(var_380_bool == 0) goto Label_653; // 0x28b JumpB
	var_368_bool = 1; // 0x28c MovB
	
Label_653:
	if(var_368_bool == 0) goto Label_659; // 0x28d JumpB
	var_382_int = 521526; // 0x28e PushI
	var_383_int = 22688; // 0x28f PushI
	var_384_int = 22687; // 0x290 PushI
	AddReply(var_382_int, var_383_int, var_384_int); // 0x291 TObjFunc
	
Label_659:
	var_385_int = 521509; // 0x293 PushI
	var_386_int = -1; // 0x294 PushI
	var_387_int = 22670; // 0x295 PushI
	AddReply(var_385_int, var_386_int, var_387_int); // 0x296 TObjFunc
	goto Label_667; // 0x298 Jump
}


func_1343(var_0_object, var_455_int, var_456_object)
{
	var_458_object = Obj(); var_459_bool = 0; var_460_int = 0; var_461_bool = 0; var_462_object = Obj(); var_463_bool = 0; var_464_int = 0; var_465_bool = 0; // 0x53f PushV
	var_0_object = var_456_object; // 0x540 TMov
	var_466_bool = 0; var_467_object = Obj(); var_468_float = 0; // 0x541 PushV
	var_467_object = var_456_object; // 0x542 Mov
	var_468_float = 70.0; // 0x543 MovF
	func_1844(var_467_object, var_468_float); // 0x544 NEW_2
	var_469_bool = var_466_bool == 0; // 0x546 Not
	if(var_469_bool == 0) goto Label_1354; // 0x547 JumpB
	var_455_int = -2; // 0x548 MovI
	return 8; // 0x549 Return
	
Label_1354:
	CreateDialog(var_462_object); // 0x54a Func
	var_470_int = 0; // 0x54c PushV
	func_2218(var_470_int); // 0x54d NEW_2
	SetNPCName(var_470_int); // 0x54f ObjFunc
	var_471_int = 0; // 0x551 PushV
	func_2216(var_471_int); // 0x552 NEW_2
	SetNPCDescription(var_471_int); // 0x554 ObjFunc
	var_472_string = ""; // 0x556 PushV
	func_2220(var_472_string); // 0x557 NEW_2
	SetPhoto(var_472_string); // 0x559 ObjFunc
	var_473_string = ""; // 0x55b PushV
	func_2222(var_473_string); // 0x55c NEW_2
	SetPhoto2(var_473_string); // 0x55e ObjFunc
	var_474_int = 0; // 0x560 PushV
	func_2496(var_474_int); // 0x561 NEW_2
	SetPlayerName(var_474_int); // 0x563 ObjFunc
	var_464_int = -1; // 0x565 MovI
	IsOverrideActive(var_463_bool); // 0x566 Func
	var_475_bool = var_463_bool; // 0x568 Push
	if(var_475_bool == 0) goto Label_1388; // 0x569 JumpB
	var_455_int = -2; // 0x56a MovI
	return 8; // 0x56b Return
	
Label_1388:
	DoDialog(var_462_object); // 0x56c Func
	var_476_bool = 0; var_477_object = Obj(); // 0x56e PushV
	var_478_object = Obj(); // 0x56f PushV
	func_2120(var_478_object); // 0x570 NEW_2
	var_477_object = var_478_object; // 0x571 Mov
	func_1929(var_476_bool, var_477_object); // 0x573 NEW_2
	var_479_object = Obj(); var_480_object = Obj(); // 0x575 PushV
	var_479_object = var_456_object; // 0x576 Mov
	var_480_object = var_462_object; // 0x577 Mov
	TaskCall(7); // 0x578 TaskCall
	func_1424(var_481_object, var_482_object, var_483_string, var_484_bool, var_479_object, var_480_object); // 0x579 NEW_2
	TaskReturn(); // 0x57a TaskReturn
	IsDialogEnd(var_465_bool); // 0x57c ObjFunc
	
Label_1406:
	var_509_bool = var_465_bool == 0; // 0x57e Not
	if(var_509_bool == 0) goto Label_1413; // 0x57f JumpB
	sync(); // 0x580 Func
	IsDialogEnd(var_465_bool); // 0x582 ObjFunc
	goto Label_1406; // 0x584 Jump
	
Label_1413:
	var_510_object = Obj(); // 0x585 PushV
	var_510_object = var_456_object; // 0x586 Mov
	func_1912(); // 0x587 NEW_2
	StopDialog(var_462_object); // 0x589 Func
	GetReturnValue(var_464_int); // 0x58b ObjFunc
	var_455_int = var_464_int; // 0x58d Mov
	return 8; // 0x58e Return
}


func_2113()
{
	var_24_bool = 0; // 0x841 PushV
	func_2224(var_24_bool); // 0x842 NEW_2
	if(var_24_bool == 0) goto Label_2119; // 0x844 JumpB
	lshStopSpeech(); // 0x845 Func
	
Label_2119:
	return 0; // 0x847 Return
}


func_2374(var_359_bool)
{
	var_361_int = 0; var_362_string = ""; // 0x947 PushV
	var_362_string = "oob8Georg2"; // 0x948 MovS
	func_2136(var_361_int, var_362_string); // 0x949 NEW_2
	var_363_int = 0; // 0x94b PushI
	var_364_bool = var_361_int == var_363_int; // 0x94c Eq
	if(var_364_bool == 0) goto Label_2384; // 0x94d JumpB
	var_359_bool = 1; // 0x94e MovB
	return 0; // 0x94f Return
	
Label_2384:
	var_359_bool = 0; // 0x950 MovB
	return 0; // 0x951 Return
}


func_2120(var_115_object)
{
	var_116_object = Obj(); var_117_object = Obj(); // 0x848 PushV
	self(var_117_object); // 0x849 Func
	var_115_object = var_117_object; // 0x84b Mov
	return 2; // 0x84c Return
}


func_1609()
{
	var_513_float = 0; var_514_float = 0; // 0x649 PushV
	var_515_int = 8; // 0x64a PushI
	var_516_int = 16; // 0x64b PushI
	rand(var_514_float, var_515_int, var_516_int); // 0x64c Func
	var_517_int = 10; // 0x64e PushI
	SetTimer(var_517_int, var_514_float); // 0x64f Func
	return 2; // 0x651 Return
}


func_2126(var_80_cvector, var_81_cvector)
{
	var_83_float = 0; var_84_float = 0; // 0x84e PushV
	var_85_int = var_81_cvector | var_81_cvector; // 0x84f Or
	var_84_float = sqrt(var_85_int); // 0x850 Sqrt2
	var_86_float = 0.0; // 0x851 PushF
	var_87_bool = var_84_float < var_86_float; // 0x852 LT
	if(var_87_bool == 0) goto Label_2134; // 0x853 JumpB
	var_80_cvector = CVector(0.0, 0.0, 0.0); // 0x854 MovV
	return 2; // 0x855 Return
	
Label_2134:
	var_80_cvector = var_81_cvector / var_81_cvector; // 0x856 Div2
	return 2; // 0x857 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_419_object, var_420_object)
{
	var_0_object = var_420_object; // 0x52 TMov
	var_1_object = var_419_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_425_int = 1; // 0x55 PushI
	if(var_425_int == 0) goto Label_114; // 0x56 JumpB
	var_426_string = ""; // 0x57 PushV
	var_426_string = "Neutral"; // 0x58 MovS
	func_144(var_420_object, var_426_string); // 0x59 NEW_2
	var_434_int = 535231; // 0x5b PushI
	SetMessage(var_434_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_435_int = 535232; // 0x60 PushI
	var_436_int = 36953; // 0x61 PushI
	var_437_int = 36907; // 0x62 PushI
	AddReply(var_435_int, var_436_int, var_437_int); // 0x63 TObjFunc
	var_438_int = 535233; // 0x65 PushI
	var_439_int = -1; // 0x66 PushI
	var_440_int = 36908; // 0x67 PushI
	AddReply(var_438_int, var_439_int, var_440_int); // 0x68 TObjFunc
	var_441_int = 535280; // 0x6a PushI
	var_442_int = -1; // 0x6b PushI
	var_443_int = 36956; // 0x6c PushI
	AddReply(var_441_int, var_442_int, var_443_int); // 0x6d TObjFunc
	goto Label_114; // 0x6f Jump
	
Label_114:
	var_444_bool = 0; // 0x72 PushV
	func_2224(var_444_bool); // 0x73 NEW_2
	if(var_444_bool == 0) goto Label_129; // 0x75 JumpB
	
Label_118:
	lshWaitForAnimEnd(); // 0x76 Func
	var_445_string = var_3_string; // 0x78 PushT
	if(var_445_string == 0) goto Label_123; // 0x79 JumpB
	goto Label_128; // 0x7a Jump
	
Label_128:
	goto Label_143; // 0x80 Jump
	
Label_143:
	return 0; // 0x8f Return
	
Label_123:
	var_446_string = ""; // 0x7b PushV
	var_446_string = var_2_object; // 0x7c MovT
	func_2067(var_446_string); // 0x7d NEW_2
	goto Label_118; // 0x7f Jump
	
Label_129:
	var_447_string = "all"; // 0x81 PushS
	var_448_string = "idle"; // 0x82 PushS
	PlayAnimation(var_447_string, var_448_string); // 0x83 Func
	
Label_133:
	WaitForAnimEnd(); // 0x85 Func
	var_449_string = var_3_string; // 0x87 PushT
	if(var_449_string == 0) goto Label_138; // 0x88 JumpB
	goto Label_143; // 0x89 Jump
	
Label_138:
	var_450_string = "all"; // 0x8a PushS
	var_451_string = "idle"; // 0x8b PushS
	PlayAnimation(var_450_string, var_451_string); // 0x8c Func
	goto Label_133; // 0x8e Jump
}


func_1618()
{
	var_512_int = 10; // 0x652 PushI
	KillTimer(var_512_int); // 0x653 Func
	return 0; // 0x655 Return
}


func_2386()
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x952 PushV
	var_49_int = 575; // 0x953 PushI
	var_50_int = 2; // 0x954 PushI
	var_51_int = 530655; // 0x955 PushI
	CreateDiaryEntry(var_48_object, var_49_int, var_50_int, var_51_int); // 0x956 Func
	var_52_bool = 0; var_53_object = Obj(); var_54_int = 0; // 0x958 PushV
	var_53_object = var_48_object; // 0x959 Mov
	var_54_int = -1; // 0x95a MovI
	func_2451(var_52_bool, var_53_object, var_54_int); // 0x95b NEW_2
	return 2; // 0x95d Return
}


func_340(var_0_object, var_1_object, var_2_object, var_3_string, var_208_object, var_209_object)
{
	var_0_object = var_209_object; // 0x155 TMov
	var_1_object = var_208_object; // 0x156 TMov
	var_3_string = 0; // 0x157 TMovB
	var_214_int = 1; // 0x158 PushI
	if(var_214_int == 0) goto Label_368; // 0x159 JumpB
	var_215_string = ""; // 0x15a PushV
	var_215_string = "Neutral"; // 0x15b MovS
	func_398(var_209_object, var_215_string); // 0x15c NEW_2
	var_232_int = 518057; // 0x15e PushI
	SetMessage(var_232_int); // 0x15f TObjFunc
	ClearReplies(); // 0x161 TObjFunc
	var_233_int = 518058; // 0x163 PushI
	var_234_int = 32643; // 0x164 PushI
	var_235_int = 19191; // 0x165 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x166 TObjFunc
	var_236_int = 531316; // 0x168 PushI
	var_237_int = 32643; // 0x169 PushI
	var_238_int = 32642; // 0x16a PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x16b TObjFunc
	goto Label_368; // 0x16d Jump
	
Label_368:
	var_239_bool = 0; // 0x170 PushV
	func_2224(var_239_bool); // 0x171 NEW_2
	if(var_239_bool == 0) goto Label_383; // 0x173 JumpB
	
Label_372:
	lshWaitForAnimEnd(); // 0x174 Func
	var_240_string = var_3_string; // 0x176 PushT
	if(var_240_string == 0) goto Label_377; // 0x177 JumpB
	goto Label_382; // 0x178 Jump
	
Label_382:
	goto Label_397; // 0x17e Jump
	
Label_397:
	return 0; // 0x18d Return
	
Label_377:
	var_241_string = ""; // 0x179 PushV
	var_241_string = var_2_object; // 0x17a MovT
	func_2067(var_241_string); // 0x17b NEW_2
	goto Label_372; // 0x17d Jump
	
Label_383:
	var_252_string = "all"; // 0x17f PushS
	var_253_string = "idle"; // 0x180 PushS
	PlayAnimation(var_252_string, var_253_string); // 0x181 Func
	
Label_387:
	WaitForAnimEnd(); // 0x183 Func
	var_254_string = var_3_string; // 0x185 PushT
	if(var_254_string == 0) goto Label_392; // 0x186 JumpB
	goto Label_397; // 0x187 Jump
	
Label_392:
	var_255_string = "all"; // 0x188 PushS
	var_256_string = "idle"; // 0x189 PushS
	PlayAnimation(var_255_string, var_256_string); // 0x18a Func
	goto Label_387; // 0x18c Jump
}


func_2136(var_302_int, var_303_string)
{
	var_304_int = 0; var_305_int = 0; // 0x858 PushV
	GetVariable(var_303_string, var_305_int); // 0x859 Func
	var_302_int = var_305_int; // 0x85b Mov
	return 2; // 0x85c Return
}


func_2141(var_144_int, var_145_int)
{
	var_146_object = Obj(); var_147_object = Obj(); // 0x85d PushV
	CreateIntVector(var_147_object); // 0x85e Func
	add(var_144_int); // 0x860 ObjFunc
	add(var_145_int); // 0x862 ObjFunc
	var_148_int = 3; // 0x864 PushI
	SendWorldWndMessage(var_148_int, var_147_object); // 0x865 Func
	return 2; // 0x867 Return
}


func_2399()
{
	var_70_object = Obj(); var_71_object = Obj(); // 0x95f PushV
	var_72_int = 576; // 0x960 PushI
	var_73_int = 2; // 0x961 PushI
	var_74_int = 530656; // 0x962 PushI
	CreateDiaryEntry(var_71_object, var_72_int, var_73_int, var_74_int); // 0x963 Func
	var_75_bool = 0; var_76_object = Obj(); var_77_int = 0; // 0x965 PushV
	var_76_object = var_71_object; // 0x966 Mov
	var_77_int = 575; // 0x967 MovI
	func_2451(var_75_bool, var_76_object, var_77_int); // 0x968 NEW_2
	return 2; // 0x96a Return
}


func_2153(var_131_object, var_132_int)
{
	var_133_int = 0; var_134_int = 0; // 0x869 PushV
	var_135_object = Obj(); var_136_string = ""; var_137_int = 0; // 0x86a PushV
	var_135_object = var_131_object; // 0x86b Mov
	var_136_string = "money"; // 0x86c MovS
	var_137_int = var_132_int; // 0x86d Mov
	func_1813(var_136_string, var_137_int); // 0x86e NEW_2
	var_141_int = 0; // 0x870 PushI
	var_142_bool = var_132_int > var_141_int; // 0x871 GT
	if(var_142_bool == 0) goto Label_2171; // 0x872 JumpB
	var_143_string = "Money"; // 0x873 PushS
	GetInvItemByName(var_134_int, var_143_string); // 0x874 Func
	var_144_int = 0; var_145_int = 0; // 0x876 PushV
	var_144_int = var_134_int; // 0x877 Mov
	var_145_int = var_132_int; // 0x878 Mov
	func_2141(var_144_int, var_145_int); // 0x879 NEW_2
	
Label_2171:
	return 2; // 0x87b Return
}


func_2412()
{
	var_94_object = Obj(); var_95_object = Obj(); // 0x96c PushV
	var_96_int = 580; // 0x96d PushI
	var_97_int = 2; // 0x96e PushI
	var_98_int = 530660; // 0x96f PushI
	CreateDiaryEntry(var_95_object, var_96_int, var_97_int, var_98_int); // 0x970 Func
	var_99_bool = 0; var_100_object = Obj(); var_101_int = 0; // 0x972 PushV
	var_100_object = var_95_object; // 0x973 Mov
	var_101_int = 575; // 0x974 MovI
	func_2451(var_99_bool, var_100_object, var_101_int); // 0x975 NEW_2
	return 2; // 0x977 Return
}


func_1912()
{
	var_259_bool = 0; var_260_bool = 0; // 0x778 PushV
	CameraSwitchToNormal(); // 0x779 Func
	var_261_bool = 0; // 0x77b PushV
	func_2224(var_261_bool); // 0x77c NEW_2
	if(var_261_bool == 0) goto Label_1920; // 0x77e JumpB
	goto Label_1928; // 0x77f Jump
	
Label_1928:
	return 2; // 0x788 Return
	
Label_1920:
	var_262_string = "head"; // 0x780 PushS
	HasAnimationTrack(var_260_bool, var_262_string); // 0x781 Func
	var_263_bool = var_260_bool; // 0x783 Push
	if(var_263_bool == 0) goto Label_1928; // 0x784 JumpB
	var_264_string = "head"; // 0x785 PushS
	UnlookAsync(var_264_string); // 0x786 Func
}


func_2425()
{
	var_153_object = Obj(); var_154_object = Obj(); // 0x979 PushV
	var_155_int = 581; // 0x97a PushI
	var_156_int = 2; // 0x97b PushI
	var_157_int = 530661; // 0x97c PushI
	CreateDiaryEntry(var_154_object, var_155_int, var_156_int, var_157_int); // 0x97d Func
	var_158_bool = 0; var_159_object = Obj(); var_160_int = 0; // 0x97f PushV
	var_159_object = var_154_object; // 0x980 Mov
	var_160_int = 575; // 0x981 MovI
	func_2451(var_158_bool, var_159_object, var_160_int); // 0x982 NEW_2
	return 2; // 0x984 Return
}


func_2172(var_44_float)
{
	var_45_float = 0; var_46_float = 0; // 0x87c PushV
	GetGameTime(var_46_float); // 0x87d Func
	var_44_float = var_46_float; // 0x87f Mov
	return 2; // 0x880 Return
}


func_2177(var_168_int)
{
	var_169_float = 0; var_170_float = 0; // 0x881 PushV
	GetGameTime(var_170_float); // 0x882 Func
	var_171_int = 1; // 0x884 PushI
	var_172_int = 0; // 0x885 PushV
	var_173_int = 24; // 0x886 PushI
	var_172_int = var_170_float / var_170_float; // 0x887 Div2
	var_168_int = var_171_int + var_172_int; // 0x888 Add2
	return 2; // 0x889 Return
}


func_2438(var_61_object)
{
	var_62_object = Obj(); var_63_object = Obj(); // 0x986 PushV
	GetDiaryRoot(var_63_object); // 0x987 Func
	var_64_bool = var_63_object == 0; // 0x989 Not
	if(var_64_bool == 0) goto Label_2448; // 0x98a JumpB
	var_65_string = "Can't retrieve diary root"; // 0x98b PushS
	Trace(var_65_string); // 0x98c Func
	var_61_object = 0; // 0x98e MovB
	return 2; // 0x98f Return
	
Label_2448:
	var_61_object = var_63_object; // 0x990 Mov
	return 2; // 0x991 Return
}


func_1929(var_113_bool, var_114_object)
{
	var_118_int = 0; var_119_int = 0; var_120_int = 0; var_121_int = 0; // 0x789 PushV
	var_122_string = "voice_common"; // 0x78a PushS
	GetVariable(var_122_string, var_120_int); // 0x78b Func
	var_123_int = var_120_int; // 0x78d Push
	if(var_123_int == 0) goto Label_1967; // 0x78e JumpB
	var_124_bool = 0; var_125_object = Obj(); // 0x78f PushV
	var_125_object = var_114_object; // 0x790 Mov
	func_1987(var_125_object); // 0x791 NEW_2
	var_154_bool = var_124_bool == 0; // 0x793 Not
	if(var_154_bool == 0) goto Label_1949; // 0x794 JumpB
	var_155_bool = 0; var_156_object = Obj(); // 0x795 PushV
	var_156_object = var_114_object; // 0x796 Mov
	func_2024(var_156_object); // 0x797 NEW_2
	var_190_bool = var_155_bool == 0; // 0x799 Not
	if(var_190_bool == 0) goto Label_1949; // 0x79a JumpB
	var_113_bool = 0; // 0x79b MovB
	return 4; // 0x79c Return
	
Label_1949:
	var_191_int = 2; // 0x79d PushI
	irand(var_121_int, var_191_int); // 0x79e Func
	var_192_int = var_121_int; // 0x7a0 Push
	if(var_192_int == 0) goto Label_1962; // 0x7a1 JumpB
	var_193_string = "voice_common"; // 0x7a2 PushS
	var_194_int = 1; // 0x7a3 PushI
	var_195_int = var_120_int + var_194_int; // 0x7a4 Add
	var_196_int = 3; // 0x7a5 PushI
	var_197_int = var_195_int / var_196_int; // 0x7a6 Mod
	SetVariable(var_193_string, var_197_int); // 0x7a7 Func
	goto Label_1966; // 0x7a9 Jump
	
Label_1966:
	goto Label_1985; // 0x7ae Jump
	
Label_1985:
	var_113_bool = 1; // 0x7c1 MovB
	return 4; // 0x7c2 Return
	
Label_1962:
	var_198_string = "voice_common"; // 0x7aa PushS
	var_199_int = 0; // 0x7ab PushI
	SetVariable(var_198_string, var_199_int); // 0x7ac Func
	
Label_1967:
	var_200_bool = 0; var_201_object = Obj(); // 0x7af PushV
	var_201_object = var_114_object; // 0x7b0 Mov
	func_2024(var_201_object); // 0x7b1 NEW_2
	var_202_bool = var_200_bool == 0; // 0x7b3 Not
	if(var_202_bool == 0) goto Label_1981; // 0x7b4 JumpB
	var_203_bool = 0; var_204_object = Obj(); // 0x7b5 PushV
	var_204_object = var_114_object; // 0x7b6 Mov
	func_1987(var_204_object); // 0x7b7 NEW_2
	var_205_bool = var_203_bool == 0; // 0x7b9 Not
	if(var_205_bool == 0) goto Label_1981; // 0x7ba JumpB
	var_113_bool = 0; // 0x7bb MovB
	return 4; // 0x7bc Return
	
Label_1981:
	var_206_string = "voice_common"; // 0x7bd PushS
	var_207_int = 1; // 0x7be PushI
	SetVariable(var_206_string, var_207_int); // 0x7bf Func
}


func_2186(var_266_bool, var_267_int)
{
	var_268_int = 0; // 0x88b PushV
	func_2177(var_268_int); // 0x88c NEW_2
	var_266_bool = var_268_int == var_267_int; // 0x88e Eq2
	return 0; // 0x88f Return
}


func_398(var_2_object, var_215_string)
{
	var_216_bool = 0; // 0x18f PushV
	func_2224(var_216_bool); // 0x190 NEW_2
	var_217_bool = var_216_bool == 0; // 0x192 Not
	if(var_217_bool == 0) goto Label_405; // 0x193 JumpB
	return 0; // 0x194 Return
	
Label_405:
	var_218_bool = var_215_string == var_2_object; // 0x195 Eq
	if(var_218_bool == 0) goto Label_408; // 0x196 JumpB
	return 0; // 0x197 Return
	
Label_408:
	var_219_string = ""; var_220_bool = 0; // 0x198 PushV
	var_219_string = var_215_string; // 0x199 Mov
	var_221_string = ""; // 0x19a PushS
	var_222_bool = var_215_string == var_221_string; // 0x19b Eq
	if(var_222_bool == 0) goto Label_415; // 0x19c JumpB
	var_220_bool = 0; // 0x19d MovB
	goto Label_416; // 0x19e Jump
	
Label_416:
	func_2083(var_219_string, var_220_bool); // 0x1a0 NEW_2
	var_2_object = var_215_string; // 0x1a2 TMov
	return 0; // 0x1a3 Return
	
Label_415:
	var_220_bool = 1; // 0x19f MovB
}


func_144(var_2_object, var_426_string)
{
	var_427_bool = 0; // 0x91 PushV
	func_2224(var_427_bool); // 0x92 NEW_2
	var_428_bool = var_427_bool == 0; // 0x94 Not
	if(var_428_bool == 0) goto Label_151; // 0x95 JumpB
	return 0; // 0x96 Return
	
Label_151:
	var_429_bool = var_426_string == var_2_object; // 0x97 Eq
	if(var_429_bool == 0) goto Label_154; // 0x98 JumpB
	return 0; // 0x99 Return
	
Label_154:
	var_430_string = ""; var_431_bool = 0; // 0x9a PushV
	var_430_string = var_426_string; // 0x9b Mov
	var_432_string = ""; // 0x9c PushS
	var_433_bool = var_426_string == var_432_string; // 0x9d Eq
	if(var_433_bool == 0) goto Label_161; // 0x9e JumpB
	var_431_bool = 0; // 0x9f MovB
	goto Label_162; // 0xa0 Jump
	
Label_162:
	func_2083(var_430_string, var_431_bool); // 0xa2 NEW_2
	var_2_object = var_426_string; // 0xa4 TMov
	return 0; // 0xa5 Return
	
Label_161:
	var_431_bool = 1; // 0xa1 MovB
}


func_1424(var_0_object, var_1_object, var_2_object, var_3_string, var_479_object, var_480_object)
{
	var_0_object = var_480_object; // 0x591 TMov
	var_1_object = var_479_object; // 0x592 TMov
	var_3_string = 0; // 0x593 TMovB
	var_485_int = 1; // 0x594 PushI
	if(var_485_int == 0) goto Label_1452; // 0x595 JumpB
	var_486_string = ""; // 0x596 PushV
	var_486_string = "Neutral"; // 0x597 MovS
	func_1482(var_480_object, var_486_string); // 0x598 NEW_2
	var_494_int = 540554; // 0x59a PushI
	SetMessage(var_494_int); // 0x59b TObjFunc
	ClearReplies(); // 0x59d TObjFunc
	var_495_int = 540555; // 0x59f PushI
	var_496_int = -1; // 0x5a0 PushI
	var_497_int = 42564; // 0x5a1 PushI
	AddReply(var_495_int, var_496_int, var_497_int); // 0x5a2 TObjFunc
	var_498_int = 540794; // 0x5a4 PushI
	var_499_int = -1; // 0x5a5 PushI
	var_500_int = 42843; // 0x5a6 PushI
	AddReply(var_498_int, var_499_int, var_500_int); // 0x5a7 TObjFunc
	goto Label_1452; // 0x5a9 Jump
	
Label_1452:
	var_501_bool = 0; // 0x5ac PushV
	func_2224(var_501_bool); // 0x5ad NEW_2
	if(var_501_bool == 0) goto Label_1467; // 0x5af JumpB
	
Label_1456:
	lshWaitForAnimEnd(); // 0x5b0 Func
	var_502_string = var_3_string; // 0x5b2 PushT
	if(var_502_string == 0) goto Label_1461; // 0x5b3 JumpB
	goto Label_1466; // 0x5b4 Jump
	
Label_1466:
	goto Label_1481; // 0x5ba Jump
	
Label_1481:
	return 0; // 0x5c9 Return
	
Label_1461:
	var_503_string = ""; // 0x5b5 PushV
	var_503_string = var_2_object; // 0x5b6 MovT
	func_2067(var_503_string); // 0x5b7 NEW_2
	goto Label_1456; // 0x5b9 Jump
	
Label_1467:
	var_504_string = "all"; // 0x5bb PushS
	var_505_string = "idle"; // 0x5bc PushS
	PlayAnimation(var_504_string, var_505_string); // 0x5bd Func
	
Label_1471:
	WaitForAnimEnd(); // 0x5bf Func
	var_506_string = var_3_string; // 0x5c1 PushT
	if(var_506_string == 0) goto Label_1476; // 0x5c2 JumpB
	goto Label_1481; // 0x5c3 Jump
	
Label_1476:
	var_507_string = "all"; // 0x5c4 PushS
	var_508_string = "idle"; // 0x5c5 PushS
	PlayAnimation(var_507_string, var_508_string); // 0x5c6 Func
	goto Label_1471; // 0x5c8 Jump
}


func_2192(var_46_string, var_47_int)
{
	var_48_string = ""; var_49_string = ""; // 0x890 PushV
	var_49_string = "idle"; // 0x891 MovS
	var_50_int = var_47_int; // 0x892 Push
	if(var_50_int == 0) goto Label_2197; // 0x893 JumpB
	var_49_string = var_49_string + var_47_int; // 0x894 Add2
	
Label_2197:
	var_46_string = var_49_string; // 0x895 Mov
	return 2; // 0x896 Return
}


func_2451(var_52_bool, var_53_object, var_54_int)
{
	var_55_object = Obj(); var_56_object = Obj(); var_57_int = 0; var_58_object = Obj(); var_59_object = Obj(); var_60_int = 0; // 0x993 PushV
	var_61_object = Obj(); // 0x994 PushV
	func_2438(var_61_object); // 0x995 NEW_2
	var_58_object = var_61_object; // 0x996 Mov
	Find(var_54_int, var_59_object); // 0x998 ObjFunc
	var_66_bool = var_59_object == 0; // 0x99a Not
	if(var_66_bool == 0) goto Label_2466; // 0x99b JumpB
	var_67_string = "Can't find diary parent with id: "; // 0x99c PushS
	var_68_int = var_67_string + var_54_int; // 0x99d Add
	Trace(var_68_int); // 0x99e Func
	var_52_bool = 0; // 0x9a0 MovB
	return 6; // 0x9a1 Return
	
Label_2466:
	AddChild(var_53_object); // 0x9a2 ObjFunc
	var_69_int = 7; // 0x9a4 PushI
	SendWorldWndMessage(var_69_int); // 0x9a5 Func
	GetCategory(var_60_int); // 0x9a7 ObjFunc
	SetDiarySection(var_60_int); // 0x9a9 Func
	var_52_bool = 0; // 0x9ab MovB
	return 6; // 0x9ac Return
}


func_2199(var_40_int)
{
	var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_bool = 0; // 0x897 PushV
	var_43_int = 0; // 0x898 MovI
	
Label_2201:
	var_45_string = "all"; // 0x899 PushS
	var_46_string = ""; var_47_int = 0; // 0x89a PushV
	var_47_int = var_43_int; // 0x89b Mov
	func_2192(var_46_string, var_47_int); // 0x89c NEW_2
	HasAnimation(var_44_bool, var_45_string, var_46_string); // 0x89e Func
	var_51_bool = var_44_bool == 0; // 0x8a0 Not
	if(var_51_bool == 0) goto Label_2211; // 0x8a1 JumpB
	goto Label_2214; // 0x8a2 Jump
	
Label_2214:
	var_40_int = var_43_int; // 0x8a6 Mov
	return 4; // 0x8a7 Return
	
Label_2211:
	var_52_int = 1; // 0x8a3 PushI
	var_43_int = var_43_int + var_52_int; // 0x8a4 Add2
	goto Label_2201; // 0x8a5 Jump
}


func_2216(var_101_int)
{
	var_101_int = 515534; // 0x8a8 MovI
	return 0; // 0x8a9 Return
}


func_2218(var_100_int)
{
	var_100_int = 502859; // 0x8aa MovI
	return 0; // 0x8ab Return
}


func_2220(var_102_string)
{
	var_102_string = "ui/NPC_Georg.png"; // 0x8ac MovS
	return 0; // 0x8ad Return
}


func_2222(var_103_string)
{
	var_103_string = "ui/NPC_Georg_b.png"; // 0x8ae MovS
	return 0; // 0x8af Return
}


func_2479(var_33_object)
{
	var_34_object = Obj(); var_35_object = Obj(); var_36_object = Obj(); var_37_object = Obj(); // 0x9af PushV
	GetMainOutdoorScene(var_36_object); // 0x9b0 Func
	var_38_bool = var_36_object == 0; // 0x9b2 NullEq
	if(var_38_bool == 0) goto Label_2490; // 0x9b3 JumpB
	var_39_string = "Can't find main outdoor scene"; // 0x9b4 PushS
	Trace(var_39_string); // 0x9b5 Func
	var_37_object = 0; // 0x9b7 SetNull
	var_33_object = var_37_object; // 0x9b8 Mov
	return 4; // 0x9b9 Return
	
Label_2490:
	GetMap(var_37_object); // 0x9ba ObjFunc
	var_33_object = var_37_object; // 0x9bc Mov
	return 4; // 0x9bd Return
}


func_2224(var_95_bool)
{
	var_95_bool = 1; // 0x8b0 MovB
	return 0; // 0x8b1 Return
}


func_2226()
{
	var_29_object = Obj(); var_30_object = Obj(); // 0x8b2 PushV
	var_31_string = "b8q03"; // 0x8b3 PushS
	var_32_int = 1; // 0x8b4 PushI
	SetVariable(var_31_string, var_32_int); // 0x8b5 Func
	var_33_object = Obj(); // 0x8b7 PushV
	func_2479(var_33_object); // 0x8b8 NEW_2
	var_30_object = var_33_object; // 0x8b9 Mov
	var_40_string = "b8q03GeorgGotoKaterina"; // 0x8bb PushS
	var_41_string = "pt_map_katerina"; // 0x8bc PushS
	var_42_int = 0; // 0x8bd PushI
	var_43_int = 530663; // 0x8be PushI
	var_44_float = 0; // 0x8bf PushV
	func_2172(var_44_float); // 0x8c0 NEW_2
	AddMark(var_40_string, var_41_string, var_42_int, var_43_int, var_44_float); // 0x8c2 ObjFunc
	func_2386(); // 0x8c5 NEW_2
	func_2399(); // 0x8c8 NEW_2
	return 2; // 0x8ca Return
}


func_697(var_2_object, var_316_string)
{
	var_317_bool = 0; // 0x2ba PushV
	func_2224(var_317_bool); // 0x2bb NEW_2
	var_318_bool = var_317_bool == 0; // 0x2bd Not
	if(var_318_bool == 0) goto Label_704; // 0x2be JumpB
	return 0; // 0x2bf Return
	
Label_704:
	var_319_bool = var_316_string == var_2_object; // 0x2c0 Eq
	if(var_319_bool == 0) goto Label_707; // 0x2c1 JumpB
	return 0; // 0x2c2 Return
	
Label_707:
	var_320_string = ""; var_321_bool = 0; // 0x2c3 PushV
	var_320_string = var_316_string; // 0x2c4 Mov
	var_322_string = ""; // 0x2c5 PushS
	var_323_bool = var_316_string == var_322_string; // 0x2c6 Eq
	if(var_323_bool == 0) goto Label_714; // 0x2c7 JumpB
	var_321_bool = 0; // 0x2c8 MovB
	goto Label_715; // 0x2c9 Jump
	
Label_715:
	func_2083(var_320_string, var_321_bool); // 0x2cb NEW_2
	var_2_object = var_316_string; // 0x2cd TMov
	return 0; // 0x2ce Return
	
Label_714:
	var_321_bool = 1; // 0x2ca MovB
}


func_2496(var_104_int)
{
	var_105_int = 0; var_106_int = 0; // 0x9c0 PushV
	var_107_string = "branch"; // 0x9c1 PushS
	GetVariable(var_107_string, var_106_int); // 0x9c2 Func
	var_108_int = 0; // 0x9c4 PushI
	var_109_bool = var_106_int == var_108_int; // 0x9c5 Eq
	if(var_109_bool == 0) goto Label_2506; // 0x9c6 JumpB
	var_104_int = 1; // 0x9c7 MovI
	return 2; // 0x9c8 Return
	
Label_2506:
	var_110_int = 1; // 0x9ca PushI
	var_111_bool = var_106_int == var_110_int; // 0x9cb Eq
	if(var_111_bool == 0) goto Label_2511; // 0x9cc JumpB
	var_104_int = 2; // 0x9cd MovI
	return 2; // 0x9ce Return
	
Label_2511:
	var_104_int = 3; // 0x9cf MovI
	return 2; // 0x9d0 Return
}


func_1729()
{
	var_26_int = 0; var_27_int = 0; var_28_bool = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_int = 0; var_36_int = 0; var_37_bool = 0; // 0x6c1 PushV
	WaitForAnimEnd(); // 0x6c2 Func
	var_38_bool = 0; // 0x6c4 PushV
	func_1839(var_38_bool); // 0x6c5 NEW_2
	var_39_bool = var_38_bool == 0; // 0x6c7 Not
	if(var_39_bool == 0) goto Label_1738; // 0x6c8 JumpB
	return 12; // 0x6c9 Return
	
Label_1738:
	var_40_int = 0; // 0x6ca PushV
	func_2199(var_40_int); // 0x6cb NEW_2
	var_32_int = var_40_int; // 0x6cc Mov
	var_33_int = 0; // 0x6ce MovI
	
Label_1743:
	var_53_bool = 0; // 0x6cf PushV
	var_53_bool = 0; // 0x6d0 MovB
	var_54_int = 5; // 0x6d1 PushI
	var_55_bool = var_33_int < var_54_int; // 0x6d2 LT
	if(var_55_bool == 0) goto Label_1753; // 0x6d3 JumpB
	var_56_bool = 0; // 0x6d4 PushV
	func_1839(var_56_bool); // 0x6d5 NEW_2
	if(var_56_bool == 0) goto Label_1753; // 0x6d7 JumpB
	var_53_bool = 1; // 0x6d8 MovB
	
Label_1753:
	if(var_53_bool == 0) goto Label_1795; // 0x6d9 JumpB
	var_57_bool = var_32_int == 0; // 0x6da Not
	if(var_57_bool == 0) goto Label_1763; // 0x6db JumpB
	var_58_int = 3; // 0x6dc PushI
	Sleep(var_58_int, var_34_bool); // 0x6dd Func
	var_59_bool = var_34_bool == 0; // 0x6df Not
	if(var_59_bool == 0) goto Label_1762; // 0x6e0 JumpB
	goto Label_1795; // 0x6e1 Jump
	
Label_1795:
	ResetAAS(); // 0x703 Func
	return 12; // 0x705 Return
	
Label_1762:
	goto Label_1784; // 0x6e2 Jump
	
Label_1784:
	var_60_bool = 0; // 0x6f8 PushV
	func_1798(var_60_bool); // 0x6f9 NEW_2
	var_61_bool = var_60_bool == 0; // 0x6fb Not
	if(var_61_bool == 0) goto Label_1790; // 0x6fc JumpB
	goto Label_1795; // 0x6fd Jump
	
Label_1790:
	ResetAAS(); // 0x6fe Func
	var_62_int = 1; // 0x700 PushI
	var_33_int = var_33_int + var_62_int; // 0x701 Add2
	goto Label_1743; // 0x702 Jump
	
Label_1763:
	irand(var_35_int, var_32_int); // 0x6e3 Func
	var_63_int = 5; // 0x6e5 PushI
	irand(var_36_int, var_63_int); // 0x6e6 Func
	var_64_int = 0; // 0x6e8 PushI
	var_65_bool = var_36_int != var_64_int; // 0x6e9 Neq
	if(var_65_bool == 0) goto Label_1772; // 0x6ea JumpB
	var_35_int = 0; // 0x6eb MovI
	
Label_1772:
	var_66_string = "all"; // 0x6ec PushS
	var_67_string = ""; var_68_int = 0; // 0x6ed PushV
	var_68_int = var_35_int; // 0x6ee Mov
	func_2192(var_67_string, var_68_int); // 0x6ef NEW_2
	PlayAnimation(var_66_string, var_67_string); // 0x6f1 Func
	WaitForAnimEnd(var_37_bool); // 0x6f3 Func
	var_69_bool = var_37_bool == 0; // 0x6f5 Not
	if(var_69_bool == 0) goto Label_1784; // 0x6f6 JumpB
	goto Label_1795; // 0x6f7 Jump
}


func_1987(var_124_bool)
{
	var_126_string = ""; var_127_int = 0; var_128_bool = 0; var_129_int = 0; var_130_string = ""; var_131_string = ""; var_132_int = 0; var_133_bool = 0; var_134_int = 0; var_135_string = ""; // 0x7c3 PushV
	var_131_string = "c"; // 0x7c4 MovS
	var_132_int = 0; // 0x7c5 MovI
	
Label_1990:
	var_136_int = 1; // 0x7c6 PushI
	if(var_136_int == 0) goto Label_2003; // 0x7c7 JumpB
	var_137_int = 1; // 0x7c8 PushI
	var_138_int = var_132_int + var_137_int; // 0x7c9 Add
	var_139_int = var_131_string + var_138_int; // 0x7ca Add
	HasProperty(var_139_int, var_133_bool); // 0x7cb ObjFunc
	var_140_bool = var_133_bool == 0; // 0x7cd Not
	if(var_140_bool == 0) goto Label_2000; // 0x7ce JumpB
	goto Label_2003; // 0x7cf Jump
	
Label_2003:
	var_141_bool = var_132_int == 0; // 0x7d3 Not
	if(var_141_bool == 0) goto Label_2007; // 0x7d4 JumpB
	var_124_bool = 0; // 0x7d5 MovB
	return 10; // 0x7d6 Return
	
Label_2007:
	var_134_int = 0; // 0x7d7 MovI
	var_142_int = 1; // 0x7d8 PushI
	var_143_bool = var_132_int > var_142_int; // 0x7d9 GT
	if(var_143_bool == 0) goto Label_2013; // 0x7da JumpB
	irand(var_134_int, var_132_int); // 0x7db Func
	
Label_2013:
	var_144_int = 1; // 0x7dd PushI
	var_145_int = var_134_int + var_144_int; // 0x7de Add
	var_146_int = var_131_string + var_145_int; // 0x7df Add
	GetProperty(var_146_int, var_135_string); // 0x7e0 ObjFunc
	var_147_bool = 0; var_148_string = ""; // 0x7e2 PushV
	var_148_string = var_135_string; // 0x7e3 Mov
	func_2098(var_147_bool, var_148_string); // 0x7e4 NEW_2
	var_124_bool = var_147_bool; // 0x7e5 Mov
	return 10; // 0x7e7 Return
	
Label_2000:
	var_153_int = 1; // 0x7d0 PushI
	var_132_int = var_132_int + var_153_int; // 0x7d1 Add2
	goto Label_1990; // 0x7d2 Jump
}


func_1482(var_2_object, var_486_string)
{
	var_487_bool = 0; // 0x5cb PushV
	func_2224(var_487_bool); // 0x5cc NEW_2
	var_488_bool = var_487_bool == 0; // 0x5ce Not
	if(var_488_bool == 0) goto Label_1489; // 0x5cf JumpB
	return 0; // 0x5d0 Return
	
Label_1489:
	var_489_bool = var_486_string == var_2_object; // 0x5d1 Eq
	if(var_489_bool == 0) goto Label_1492; // 0x5d2 JumpB
	return 0; // 0x5d3 Return
	
Label_1492:
	var_490_string = ""; var_491_bool = 0; // 0x5d4 PushV
	var_490_string = var_486_string; // 0x5d5 Mov
	var_492_string = ""; // 0x5d6 PushS
	var_493_bool = var_486_string == var_492_string; // 0x5d7 Eq
	if(var_493_bool == 0) goto Label_1499; // 0x5d8 JumpB
	var_491_bool = 0; // 0x5d9 MovB
	goto Label_1500; // 0x5da Jump
	
Label_1500:
	func_2083(var_490_string, var_491_bool); // 0x5dc NEW_2
	var_2_object = var_486_string; // 0x5de TMov
	return 0; // 0x5df Return
	
Label_1499:
	var_491_bool = 1; // 0x5db MovB
}


func_2252()
{
	var_310_string = "oob8Georg1"; // 0x8cd PushS
	var_311_int = 1; // 0x8ce PushI
	SetVariable(var_310_string, var_311_int); // 0x8cf Func
	return 0; // 0x8d1 Return
}


func_2513(var_39_object)
{
	var_40_bool = GlobalVars[1]; // 0x9d2 PushGE
	var_41_bool = var_40_bool == 0; // 0x9d3 Not
	if(var_41_bool == 0) goto Label_2526; // 0x9d4 JumpB
	var_42_int = 0; var_43_object = Obj(); // 0x9d5 PushV
	var_43_object = var_39_object; // 0x9d6 Mov
	TaskCall(2); // 0x9d7 TaskCall
	func_259(var_44_object, var_42_int, var_43_object); // 0x9d8 NEW_2
	TaskReturn(); // 0x9d9 TaskReturn
	var_265_bool = GlobalVars[1]; // 0x9db PushGE
	var_265_bool = 1; // 0x9dc MovB
	GlobalVars[1] = var_265_bool; // 0x9dd PopGE
	
Label_2526:
	var_266_bool = 0; var_267_int = 0; // 0x9de PushV
	var_267_int = 8; // 0x9df MovI
	func_2186(var_266_bool, var_267_int); // 0x9e0 NEW_2
	if(var_266_bool == 0) goto Label_2538; // 0x9e2 JumpB
	var_269_int = 0; var_270_object = Obj(); // 0x9e3 PushV
	var_270_object = var_39_object; // 0x9e4 Mov
	TaskCall(4); // 0x9e5 TaskCall
	func_485(var_271_object, var_269_int, var_270_object); // 0x9e6 NEW_2
	TaskReturn(); // 0x9e7 TaskReturn
	return 0; // 0x9e9 Return
	
Label_2538:
	var_390_bool = 0; // 0x9ea PushV
	var_390_bool = 0; // 0x9eb MovB
	var_391_bool = 0; var_392_int = 0; // 0x9ec PushV
	var_392_int = 12; // 0x9ed MovI
	func_2186(var_391_bool, var_392_int); // 0x9ee NEW_2
	if(var_391_bool == 0) goto Label_2549; // 0x9f0 JumpB
	var_393_bool = GlobalVars[2]; // 0x9f1 PushGE
	var_394_bool = var_393_bool == 0; // 0x9f2 Not
	if(var_394_bool == 0) goto Label_2549; // 0x9f3 JumpB
	var_390_bool = 1; // 0x9f4 MovB
	
Label_2549:
	if(var_390_bool == 0) goto Label_2560; // 0x9f5 JumpB
	var_395_int = 0; var_396_object = Obj(); // 0x9f6 PushV
	var_396_object = var_39_object; // 0x9f7 Mov
	TaskCall(0); // 0x9f8 TaskCall
	func_0(var_397_object, var_395_int, var_396_object); // 0x9f9 NEW_2
	TaskReturn(); // 0x9fa TaskReturn
	var_454_bool = GlobalVars[2]; // 0x9fc PushGE
	var_454_bool = 1; // 0x9fd MovB
	GlobalVars[2] = var_454_bool; // 0x9fe PopGE
	return 0; // 0x9ff Return
	
Label_2560:
	var_455_int = 0; var_456_object = Obj(); // 0xa00 PushV
	var_456_object = var_39_object; // 0xa01 Mov
	TaskCall(6); // 0xa02 TaskCall
	func_1343(var_457_object, var_455_int, var_456_object); // 0xa03 NEW_2
	TaskReturn(); // 0xa04 TaskReturn
	return 0; // 0xa06 Return
}


func_2258()
{
	var_86_string = "oob8Georg2"; // 0x8d3 PushS
	var_87_int = 1; // 0x8d4 PushI
	SetVariable(var_86_string, var_87_int); // 0x8d5 Func
	return 0; // 0x8d7 Return
}


func_2264()
{
	var_126_string = "playsound"; // 0x8d9 PushS
	var_127_string = "givemoney"; // 0x8da PushS
	TriggerWorld(var_126_string, var_127_string); // 0x8db Func
	return 0; // 0x8dd Return
}


func_2270()
{
	var_314_string = "b8GeorgVisit"; // 0x8df PushS
	var_315_int = 1; // 0x8e0 PushI
	SetVariable(var_314_string, var_315_int); // 0x8e1 Func
	return 0; // 0x8e3 Return
}


func_2276()
{
	var_92_string = "b8q03"; // 0x8e5 PushS
	var_93_int = 1000; // 0x8e6 PushI
	SetVariable(var_92_string, var_93_int); // 0x8e7 Func
	func_2412(); // 0x8ea NEW_2
	return 0; // 0x8ec Return
}


func_485(var_0_object, var_269_int, var_270_object)
{
	var_272_object = Obj(); var_273_bool = 0; var_274_int = 0; var_275_bool = 0; var_276_object = Obj(); var_277_bool = 0; var_278_int = 0; var_279_bool = 0; // 0x1e5 PushV
	var_0_object = var_270_object; // 0x1e6 TMov
	var_280_bool = 0; var_281_object = Obj(); var_282_float = 0; // 0x1e7 PushV
	var_281_object = var_270_object; // 0x1e8 Mov
	var_282_float = 70.0; // 0x1e9 MovF
	func_1844(var_281_object, var_282_float); // 0x1ea NEW_2
	var_283_bool = var_280_bool == 0; // 0x1ec Not
	if(var_283_bool == 0) goto Label_496; // 0x1ed JumpB
	var_269_int = -2; // 0x1ee MovI
	return 8; // 0x1ef Return
	
Label_496:
	CreateDialog(var_276_object); // 0x1f0 Func
	var_284_int = 0; // 0x1f2 PushV
	func_2218(var_284_int); // 0x1f3 NEW_2
	SetNPCName(var_284_int); // 0x1f5 ObjFunc
	var_285_int = 0; // 0x1f7 PushV
	func_2216(var_285_int); // 0x1f8 NEW_2
	SetNPCDescription(var_285_int); // 0x1fa ObjFunc
	var_286_string = ""; // 0x1fc PushV
	func_2220(var_286_string); // 0x1fd NEW_2
	SetPhoto(var_286_string); // 0x1ff ObjFunc
	var_287_string = ""; // 0x201 PushV
	func_2222(var_287_string); // 0x202 NEW_2
	SetPhoto2(var_287_string); // 0x204 ObjFunc
	var_288_int = 0; // 0x206 PushV
	func_2496(var_288_int); // 0x207 NEW_2
	SetPlayerName(var_288_int); // 0x209 ObjFunc
	var_278_int = -1; // 0x20b MovI
	IsOverrideActive(var_277_bool); // 0x20c Func
	var_289_bool = var_277_bool; // 0x20e Push
	if(var_289_bool == 0) goto Label_530; // 0x20f JumpB
	var_269_int = -2; // 0x210 MovI
	return 8; // 0x211 Return
	
Label_530:
	DoDialog(var_276_object); // 0x212 Func
	var_290_bool = 0; var_291_object = Obj(); // 0x214 PushV
	var_292_object = Obj(); // 0x215 PushV
	func_2120(var_292_object); // 0x216 NEW_2
	var_291_object = var_292_object; // 0x217 Mov
	func_1929(var_290_bool, var_291_object); // 0x219 NEW_2
	var_293_object = Obj(); var_294_object = Obj(); // 0x21b PushV
	var_293_object = var_270_object; // 0x21c Mov
	var_294_object = var_276_object; // 0x21d Mov
	TaskCall(5); // 0x21e TaskCall
	func_566(var_295_object, var_296_object, var_297_string, var_298_bool, var_293_object, var_294_object); // 0x21f NEW_2
	TaskReturn(); // 0x220 TaskReturn
	IsDialogEnd(var_279_bool); // 0x222 ObjFunc
	
Label_548:
	var_388_bool = var_279_bool == 0; // 0x224 Not
	if(var_388_bool == 0) goto Label_555; // 0x225 JumpB
	sync(); // 0x226 Func
	IsDialogEnd(var_279_bool); // 0x228 ObjFunc
	goto Label_548; // 0x22a Jump
	
Label_555:
	var_389_object = Obj(); // 0x22b PushV
	var_389_object = var_270_object; // 0x22c Mov
	func_1912(); // 0x22d NEW_2
	StopDialog(var_276_object); // 0x22f Func
	GetReturnValue(var_278_int); // 0x231 ObjFunc
	var_269_int = var_278_int; // 0x233 Mov
	return 8; // 0x234 Return
}


func_2024(var_155_bool)
{
	var_157_string = ""; var_158_int = 0; var_159_bool = 0; var_160_int = 0; var_161_string = ""; var_162_string = ""; var_163_int = 0; var_164_bool = 0; var_165_int = 0; var_166_string = ""; // 0x7e8 PushV
	var_167_string = "d"; // 0x7e9 PushS
	var_168_int = 0; // 0x7ea PushV
	func_2177(var_168_int); // 0x7eb NEW_2
	var_174_int = var_167_string + var_168_int; // 0x7ed Add
	var_175_string = "m"; // 0x7ee PushS
	var_162_string = var_174_int + var_175_string; // 0x7ef Add2
	var_163_int = 0; // 0x7f0 MovI
	
Label_2033:
	var_176_int = 1; // 0x7f1 PushI
	if(var_176_int == 0) goto Label_2046; // 0x7f2 JumpB
	var_177_int = 1; // 0x7f3 PushI
	var_178_int = var_163_int + var_177_int; // 0x7f4 Add
	var_179_int = var_162_string + var_178_int; // 0x7f5 Add
	HasProperty(var_179_int, var_164_bool); // 0x7f6 ObjFunc
	var_180_bool = var_164_bool == 0; // 0x7f8 Not
	if(var_180_bool == 0) goto Label_2043; // 0x7f9 JumpB
	goto Label_2046; // 0x7fa Jump
	
Label_2046:
	var_181_bool = var_163_int == 0; // 0x7fe Not
	if(var_181_bool == 0) goto Label_2050; // 0x7ff JumpB
	var_155_bool = 0; // 0x800 MovB
	return 10; // 0x801 Return
	
Label_2050:
	var_165_int = 0; // 0x802 MovI
	var_182_int = 1; // 0x803 PushI
	var_183_bool = var_163_int > var_182_int; // 0x804 GT
	if(var_183_bool == 0) goto Label_2056; // 0x805 JumpB
	irand(var_165_int, var_163_int); // 0x806 Func
	
Label_2056:
	var_184_int = 1; // 0x808 PushI
	var_185_int = var_165_int + var_184_int; // 0x809 Add
	var_186_int = var_162_string + var_185_int; // 0x80a Add
	GetProperty(var_186_int, var_166_string); // 0x80b ObjFunc
	var_187_bool = 0; var_188_string = ""; // 0x80d PushV
	var_188_string = var_166_string; // 0x80e Mov
	func_2098(var_187_bool, var_188_string); // 0x80f NEW_2
	var_155_bool = var_187_bool; // 0x810 Mov
	return 10; // 0x812 Return
	
Label_2043:
	var_189_int = 1; // 0x7fb PushI
	var_163_int = var_163_int + var_189_int; // 0x7fc Add2
	goto Label_2033; // 0x7fd Jump
}


func_2285()
{
	var_151_string = "b8q03"; // 0x8ee PushS
	var_152_int = 1000; // 0x8ef PushI
	SetVariable(var_151_string, var_152_int); // 0x8f0 Func
	func_2425(); // 0x8f3 NEW_2
	return 0; // 0x8f5 Return
}


func_2294(var_128_object)
{
	var_130_string = "money3000 is given"; // 0x8f7 PushS
	Trace(var_130_string); // 0x8f8 Func
	var_131_object = Obj(); var_132_int = 0; // 0x8fa PushV
	var_131_object = var_128_object; // 0x8fb Mov
	var_132_int = 3000; // 0x8fc MovI
	func_2153(var_131_object, var_132_int); // 0x8fd NEW_2
	return 0; // 0x8ff Return
}


